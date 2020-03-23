/******************************************************************************
Copyright 2019 The Regents of the University of California.
All Rights Reserved.

Permission to copy, modify and distribute any part of this Software for
educational, research and non-profit purposes, without fee, and without
a written agreement is hereby granted, provided that the above copyright
notice, this paragraph and the following three paragraphs appear in all
copies.

Those desiring to incorporate this Software into commercial products or
use for commercial purposes should contact the:
Office of Innovation & Commercialization
University of California, San Diego
9500 Gilman Drive, Mail Code 0910
La Jolla, CA 92093-0910
Ph: (858) 534-5815
FAX: (858) 534-7345
E-MAIL: invent@ucsd.edu

IN NO EVENT SHALL THE UNIVERSITY OF CALIFORNIA BE LIABLE TO ANY PARTY FOR
DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES, INCLUDING
LOST PROFITS, ARISING OUT OF THE USE OF THIS SOFTWARE, EVEN IF THE UNIVERSITY
OF CALIFORNIA HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

THE SOFTWARE PROVIDED HEREIN IS ON AN "AS IS" BASIS, AND THE UNIVERSITY OF
CALIFORNIA HAS NO OBLIGATION TO PROVIDE MAINTENANCE, SUPPORT, UPDATES,
ENHANCEMENTS, OR MODIFICATIONS. THE UNIVERSITY OF CALIFORNIA MAKES NO
REPRESENTATIONS AND EXTENDS NO WARRANTIES OF ANY KIND, EITHER IMPLIED OR
EXPRESS, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE, OR THAT THE USE OF THE
SOFTWARE WILL NOT INFRINGE ANY PATENT, TRADEMARK OR OTHER RIGHTS.
******************************************************************************/

#include "calculators.h"
/**
 * @file calculators.cpp
 * @brief implements all of the functions described in the header
 */

namespace eff {

const double pi = 3.14159265358979323846;

double CalculateDistance(std::vector<double> coor1, std::vector<double> coor2) {
    double x1 = coor1[0];
    double x2 = coor2[0];
    double y1 = coor1[1];
    double y2 = coor2[1];
    double z1 = coor1[2];
    double z2 = coor2[2];

    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2) + pow(z1 - z2, 2));
}

double CalculateDistance(std::vector<double> directional_vec) {
    return sqrt(pow(directional_vec[0], 2) + pow(directional_vec[1], 2) + pow(directional_vec[2], 2));
}

double CalculateAngle(std::vector<double> coor1, std::vector<double> centerCoordinate, std::vector<double> coor3) {
    double a = CalculateDistance(coor1, centerCoordinate);
    double b = CalculateDistance(coor3, centerCoordinate);
    double c = CalculateDistance(coor1, coor3);

    double inner = (pow(a, 2) + pow(b, 2) - pow(c, 2)) / (2 * a * b);

    // ensure that the inner is within the range of acos. This if block accounts
    // for potential rounding errors and prevents acos from returning nan if
    // a rounding error occurs
    if (inner < 1.000000001 && inner > 0.99999999) {
        inner = 1.0;
    } else if (inner < -0.99999999 && inner > -1.000000001) {
        inner = -1.0;
    }

    return acos(inner);
}

double CalculateDihedralAngle(std::vector<double> coor1, std::vector<double> coor2, std::vector<double> coor3,
                              std::vector<double> coor4) {
    const double pi = 3.14159265358979323846;
    const double EPSILON = 0.000000001;
    // store the coordinates of the 4 atoms.
    double x1 = coor1[0];
    double x2 = coor2[0];
    double x3 = coor3[0];
    double x4 = coor4[0];
    double y1 = coor1[1];
    double y2 = coor2[1];
    double y3 = coor3[1];
    double y4 = coor4[1];
    double z1 = coor1[2];
    double z2 = coor2[2];
    double z3 = coor3[2];
    double z4 = coor4[2];

    // set up all of the vectors from the four points
    std::vector<double> fvector = {x2 - x1, y2 - y1, z2 - z1};

    // Special note for svector. We are finding the vector from coor2 pointing
    // towards coor3. The direction is arbitrary, but we want to define that
    // direction to be phi = 0. If we flipped the vectors, and had a vector from
    // coor3 pointing to coor2, it would define those two quadrants as
    //  phi = -phi degrees.

    // Note this line was changed from x2-x3, y2-y3, z2-z3 on 12/02/2019. This
    // might break the code because this was the only line that was changed to
    // match the dlpoly manual's definition.
    std::vector<double> svector = {x3 - x2, y3 - y2, z3 - z2};
    std::vector<double> tvector = {x4 - x3, y4 - y3, z4 - z3};

    // calculate the normal vector using the calculateCrossProduct function
    std::vector<double> n1 = CalculateCrossProduct(fvector, svector);
    std::vector<double> n2 = CalculateCrossProduct(svector, tvector);

    // From dlpoly manual, cross product of the two normal vectors will allow you
    // to obtain the sign for phi. Edge case: only when n1 and n2 are parallel
    // does the phi_sign_vector become the 0 vector. In which case, we use the
    // directions above to determine the sign for phi.
    std::vector<double> phi_sign_vector = CalculateCrossProduct(n1, n2);

    // This is the angle between the two vectors phi_sign_vector and svector.
    double theta;

    // Check if the phi_sign_vector is the zero vector. If it is, then we can't
    // calculate theta because it is not defined
    if (!((fabs(phi_sign_vector[0]) <= EPSILON) && (fabs(phi_sign_vector[1]) <= EPSILON) &&
          (fabs(phi_sign_vector[2]) <= EPSILON))) {
        // Using the normal dot product formula to calculate the angle
        double trig_val = CalculateDotProduct(phi_sign_vector, svector) /
                          (CalculateDistance(phi_sign_vector) * CalculateDistance(svector));

        // Check if trig_val > 1 or < -1 since cos is bound b/t -1 & 1.
        // If slightly over, then just set to be 1 or -1
        if (trig_val > 1.0 && fabs(trig_val - 1.0) < EPSILON) {
            trig_val = 1.0;
        }

        if (trig_val < -1.0 && fabs(trig_val + 1.0) < EPSILON) {
            trig_val = -1.0;
        }

        if (trig_val > 1.0 || trig_val < -1.0) {
            std::cerr << "You dihedral theta is NaN. Your energy will likely be wrong because of the dihedral "
                      << std::endl;
        }

        theta = acos(trig_val);

    }

    // If phi_sign_vector is the 0 vector, we know that n1 and n2 are parallel.
    // we need to assign theta through the convention above.
    else {
        // we check if n1 and n2 are the same vector. If they are, we define this to
        // have a theta of 0. Meaning that phi is positive.
        int count = 0;
        for (int i = 0; i < n1.size(); i++) {
            if (fabs(n1[0] - n2[0]) < 0.000000001) {
                count++;
            }
        }

        // If n1 equals n2, then set theta to be 0.
        if (count == 3) {
            theta = 0;
        }

        // else if n1 and n2 are parallel, but with opposite signs, then we define
        // theta to be 180 or pi. This implies that phi is negative
        else {
            theta = pi;
        }
    }

    // Try catch statements to check that both n1 and n2 are not the zero vector
    // this would mean phi is not a number. If they are the 0 vector, then
    // just return 0
    try {
        int countn1 = 0;
        int countn2 = 0;
        for (int i = 0; i < n1.size(); i++) {
            if (n1[i] < 0.000000001) {
                countn1++;
            }
            if (n2[i] < 0.000000001) {
                countn2++;
            }
        }

        if (countn1 == 3 || countn2 == 3) {
            throw 1;
        }
    } catch (...) {
        return 0.0;
    }

    // calculate phi using the formula in the header of this file
    // double phi =
    //     acos((CalculateDotProduct(n1,n2) / (sqrt(pow(n1[0], 2) + pow(n1[1], 2) + pow(n1[2], 2)) *
    //                                                             sqrt(pow(n2[0], 2) + pow(n2[1], 2) + pow(n2[2],
    //                                                             2))));

    double phi = acos((CalculateDotProduct(n1, n2) / (CalculateDistance(n1) * CalculateDistance(n2))));

    // Check if theta is 0 or 180. If theta = 0, we define this direction to
    // positive phi. Else if theta is 180 degrees or pi, we define this direction
    // to be negative phi.

    // if (theta <= 0.000000001 && theta >= -0.000000001) {
    //     return phi;
    // } else if (theta <= pi + 0.000000001 && theta >= pi - 0.000000001) {
    //     return -phi;
    // }

    // std::cout << "phi before sign is: " << phi << std::endl;
    // std::cout << "theta is  : " << theta << std::endl;

    if (theta <= pi / 2 && theta >= -pi / 2) {
        return phi;
    } else {
        return -phi;
    }

    // else if (theta <= pi + 0.000000001 && theta >= pi - 0.000000001) {
    //     return -phi;
    // }

    // else {
    //     std::string text = "";
    //     throw CUException(__func__, __FILE__, __LINE__, text);
    // }

    // If theta is not any of the above cases, then print an error message, and
    // return just phi
    // cout << "A case slipped through!! Check the dihedralAngleCalculator!" << endl;
    // return phi;
}

void CalculateGradB(std::vector<double> coor1, std::vector<double> coor2, std::vector<double> coor3,
                    std::vector<double> coor4, std::vector<size_t> indexes, double cummu_grad, double phi,
                    std::vector<double>& gradients, int mon_num, int nat, std::vector<double>& curr_force) {
    // store the coordinates of the 4 atoms.
    double x1 = coor1[0];
    double x2 = coor2[0];
    double x3 = coor3[0];
    double x4 = coor4[0];
    double y1 = coor1[1];
    double y2 = coor2[1];
    double y3 = coor3[1];
    double y4 = coor4[1];
    double z1 = coor1[2];
    double z2 = coor2[2];
    double z3 = coor3[2];
    double z4 = coor4[2];

    // set up all of the vectors from the four points
    // vector<double> fvector = {x2 - x1, y2 - y1, z2 - z1};  // This is vector rij
    // vector<double> svector = {x3 - x2, y3 - y2, z3 - z2};  // This is vector rjk
    // vector<double> tvector = {x4 - x3, y4 - y3, z4 - z3};  // This is vector rkn

    std::vector<double> fvector = {x1 - x2, y1 - y2, z1 - z2};  // This is vector rij
    std::vector<double> svector = {x2 - x3, y2 - y3, z2 - z3};  // This is vector rjk
    std::vector<double> tvector = {x3 - x4, y3 - y4, z3 - z4};  // This is vector rkn

    double recip_svector = 1.0 / CalculateDistance(svector);
    std::vector<double> sum_vec = {fvector[0] + svector[0], fvector[1] + svector[1], fvector[2] + svector[2]};

    std::vector<double> pb = {fvector[1] * svector[2] - fvector[2] * svector[1],
                              fvector[2] * svector[0] - fvector[0] * svector[2],
                              fvector[0] * svector[1] - fvector[1] * svector[0]};
    double recip_pb = 1.0 / CalculateDistance(pb);
    double square_recip_pb = pow(recip_pb, 2);

    std::vector<double> pc = {svector[1] * tvector[2] - svector[2] * tvector[1],
                              svector[2] * tvector[0] - svector[0] * tvector[2],
                              svector[0] * tvector[1] - svector[1] * tvector[0]};
    double recip_pc = 1.0 / CalculateDistance(pc);
    double square_recip_pc = pow(recip_pc, 2);

    double dot_pb_pc = CalculateDotProduct(pb, pc);

    double sint = (svector[0] * (pc[1] * pb[2] - pc[2] * pb[1]) + svector[1] * (pb[0] * pc[2] - pb[2] * pc[0]) +
                   svector[2] * (pc[0] * pb[1] - pc[1] * pb[0])) *
                  (recip_pb * recip_pc * recip_svector);

    if (sint < 0.000000001 && sint > -0.000000001) {
        sint = 0.00000001;
    }

    double recip_sint = 1.0 / sint;

    double gamma = cummu_grad * recip_pb * recip_pc;

    // The gradients!
    double fax = gamma * ((-pc[1] * svector[2] + pc[2] * svector[1]) -
                          dot_pb_pc * square_recip_pb * (-pb[1] * svector[2] + pb[2] * svector[1]));
    double fay = gamma * ((pc[0] * svector[2] - pc[2] * svector[0]) -
                          dot_pb_pc * square_recip_pb * (pb[0] * svector[2] - pb[2] * svector[0]));
    double faz = gamma * ((-pc[0] * svector[1] + pc[1] * svector[0]) -
                          dot_pb_pc * square_recip_pb * (-pb[0] * svector[1] + pb[1] * svector[0]));

    double fcx = gamma * ((-pc[1] * fvector[2] + pc[2] * fvector[1]) -
                          dot_pb_pc * square_recip_pb * (-pb[1] * fvector[2] + pb[2] * fvector[1]));
    double fcy = gamma * ((pc[0] * fvector[2] - pc[2] * fvector[0]) -
                          dot_pb_pc * square_recip_pb * (pb[0] * fvector[2] - pb[2] * fvector[0]));
    double fcz = gamma * ((-pc[0] * fvector[1] + pc[1] * fvector[0]) -
                          dot_pb_pc * square_recip_pb * (-pb[0] * fvector[1] + pb[1] * fvector[0]));

    double fb1x = gamma * ((-pb[1] * tvector[2] + pb[2] * tvector[1]) -
                           dot_pb_pc * square_recip_pc * (-pc[1] * tvector[2] + pc[2] * tvector[1]));
    double fb1y = gamma * ((pb[0] * tvector[2] - pb[2] * tvector[0]) -
                           dot_pb_pc * square_recip_pc * (pc[0] * tvector[2] - pc[2] * tvector[0]));
    double fb1z = gamma * ((-pb[0] * tvector[1] + pb[1] * tvector[0]) -
                           dot_pb_pc * square_recip_pc * (-pc[0] * tvector[1] + pc[1] * tvector[0]));

    double fd1x = gamma * ((-pb[1] * svector[2] + pb[2] * svector[1]) -
                           dot_pb_pc * square_recip_pc * (-pc[1] * svector[2] + pc[2] * svector[1]));
    double fd1y = gamma * ((pb[0] * svector[2] - pb[2] * svector[0]) -
                           dot_pb_pc * square_recip_pc * (pc[0] * svector[2] - pc[2] * svector[0]));
    double fd1z = gamma * ((-pb[0] * svector[1] + pb[1] * svector[0]) -
                           dot_pb_pc * square_recip_pc * (-pc[0] * svector[1] + pc[1] * svector[0]));

    std::vector<double> ans = {fax,
                               fay,
                               faz,
                               -fax - fcx + fb1x,
                               -fay - fcy + fb1y,
                               -faz - fcz + fb1z,
                               fcx - fb1x - fd1x,
                               fcy - fb1y - fd1y,
                               fcz - fb1z - fd1z,
                               fd1x,
                               fd1y,
                               fd1z};
    std::vector<double> virial_constants = {fax, fay, faz, fb1x, fb1y, fb1z, fcx, fcy, fcz, fd1x, fd1y, fd1z};
    for (int i = 0; i < curr_force.size(); i++) {
        curr_force[i] = -1 * virial_constants[i];
    }
    // curr_force[0] = -(fax);
    // curr_force[1] = -(fay);
    // curr_force[2] = -(faz);
    // curr_force[3] = -(-fax - fcx + fb1x);
    // curr_force[4] = -(-fay - fcy + fb1y);
    // curr_force[5] = -(-faz - fcz + fb1z);
    // curr_force[6] = -(fcx - fb1x - fd1x);
    // curr_force[7] = -(fcy - fb1y - fd1y);
    // curr_force[8] = -(fcz - fb1z - fd1z);
    // curr_force[9] = -(fd1x);
    // curr_force[10] = -(fd1y);
    // curr_force[11] = -(fd1z);

    for (int index = 0; index < indexes.size(); index++) {
        gradients[(indexes[index] - 1) * 3 + (mon_num * nat * 3)] += ans[index * 3];
        gradients[(indexes[index] - 1) * 3 + 1 + (mon_num * nat * 3)] += ans[index * 3 + 1];
        gradients[(indexes[index] - 1) * 3 + 2 + (mon_num * nat * 3)] += ans[index * 3 + 2];
    }

    // std::cout << "ok" << std::endl;
    // Begin term 1 constants and values
    // double first_crossP = CalculateDistance(CalculateCrossProduct(fvector, svector));
    // double second_crossP = CalculateDistance(CalculateCrossProduct(svector, tvector));
    // double first_term = 1 / (first_crossP * second_crossP);
    // // End term 1 constants and values

    // // Begin term 2 constants and values
    // double cos_constant = ((-1) * cos(phi)) / 2;
    // double first_square_crossP = 1 / (pow(CalculateDistance(CalculateCrossProduct(fvector, svector)), 2));
    // double second_square_crossP = 1 / (pow(CalculateDistance(CalculateCrossProduct(svector, tvector)), 2));
    // // End term 2 constants and values

    // // Loop through each atom in the dihedral
    // for (int index = 0; index < indexes.size(); index++) {
    //     int delta_li;
    //     int delta_lj;
    //     int delta_lk;
    //     int delta_ln;
    //     if (index == 0) {
    //         delta_li = 1;
    //         delta_lj = 0;
    //         delta_lk = 0;
    //         delta_ln = 0;
    //     } else if (index == 1) {
    //         delta_li = 0;
    //         delta_lj = 1;
    //         delta_lk = 0;
    //         delta_ln = 0;
    //     } else if (index == 2) {
    //         delta_li = 0;
    //         delta_lj = 0;
    //         delta_lk = 1;
    //         delta_ln = 0;
    //     } else {
    //         delta_li = 0;
    //         delta_lj = 0;
    //         delta_lk = 0;
    //         delta_ln = 1;
    //     }

    //     // Loop through each coordinate within an atom
    //     for (int dim = 0; dim < 3; dim++) {
    //         // first_term_deriv represents the derivative of
    //         // {(rij x rjk) dot product (rjk x rkn)}
    //         double grad_B = 0;
    //         double first_term_deriv = 0;
    //         double sum_ij_ij = SumComponents(fvector, fvector, dim);  // This represents [rij rij]alpha
    //         double sum_jk_jk = SumComponents(svector, svector, dim);  // This represents [rjk rjk]alpha
    //         double sum_kn_kn = SumComponents(tvector, tvector, dim);  // This represents [rkn rkn]alpha
    //         double sum_ij_jk = SumComponents(fvector, svector, dim);  // This represents [rij rjk]alpha
    //         double sum_jk_kn = SumComponents(svector, tvector, dim);  // This represents [rjk rkn]alpha
    //         double sum_ij_kn = SumComponents(fvector, tvector, dim);  // This represents [rij rkn]alpha

    //         first_term_deriv +=
    //             fvector[dim] * (sum_jk_jk * (delta_lk - delta_ln) + (sum_jk_kn) * (delta_lk - delta_lj));
    //         first_term_deriv +=
    //             svector[dim] * (sum_ij_jk * (delta_ln - delta_lk) + (sum_jk_kn) * (delta_lj - delta_li));
    //         first_term_deriv +=
    //             tvector[dim] * (sum_ij_jk * (delta_lk - delta_lj) + (sum_jk_jk) * (delta_li - delta_lj));
    //         first_term_deriv += 2 * svector[dim] * (sum_ij_kn * (delta_lj - delta_lk));

    //         // second_term_deriv represents the derivative of |rij x rjk|^2
    //         double second_term_deriv = 0;
    //         second_term_deriv +=
    //             2 * fvector[dim] * ((sum_jk_jk) * (delta_lj - delta_li) + (sum_ij_jk) * (delta_lj - delta_lk));
    //         second_term_deriv +=
    //             2 * svector[dim] * ((sum_ij_ij) * (delta_lk - delta_lj) + (sum_ij_jk) * (delta_li - delta_lj));

    //         // third_term_deriv represents the derivative of |rjk x rkn|^2
    //         double third_term_deriv = 0;
    //         third_term_deriv +=
    //             2 * tvector[dim] * ((sum_jk_jk) * (delta_ln - delta_lk) + (sum_jk_kn) * (delta_lj - delta_lk));
    //         third_term_deriv +=
    //             2 * svector[dim] * ((sum_kn_kn) * (delta_lk - delta_lj) + (sum_jk_kn) * (delta_lk - delta_ln));

    //         grad_B += first_term * first_term_deriv;
    //         grad_B +=
    //             cos_constant * (first_square_crossP * second_term_deriv + second_square_crossP * third_term_deriv);

    //         gradients[(indexes[index] - 1) * 3 + dim + (mon_num * nat * 3)] += cummu_grad * grad_B;
    //         curr_force[index * 3 + dim] = -1 * cummu_grad * grad_B;
    //     }
    // }
}

double SumComponents(std::vector<double> a, std::vector<double> b, int alpha) {
    double sum = 0;
    int delta_alpha_beta;
    for (int dim = 0; dim < 3; dim++) {
        if (dim == alpha) {
            delta_alpha_beta = 1;
        } else {
            delta_alpha_beta = 0;
        }
        sum += (1 - delta_alpha_beta) * a[dim] * b[dim];
    }
    return sum;
}

std::vector<double> CalculateCrossProduct(std::vector<double> v1, std::vector<double> v2) {
    std::vector<double> normal;
    normal.push_back(v1[1] * v2[2] - v1[2] * v2[1]);
    normal.push_back(-(v1[0] * v2[2] - v1[2] * v2[0]));
    normal.push_back(v1[0] * v2[1] - v1[1] * v2[0]);

    return normal;
}

double CalculateDotProduct(std::vector<double> v1, std::vector<double> v2) {
    return (v1[0] * v2[0] + v1[1] * v2[1] + v1[2] * v2[2]);
}

std::vector<double> CalculateInversionAngle(std::vector<double> coor1, std::vector<double> coor2,
                                            std::vector<double> coor3, std::vector<double> coor4) {
    // store the coordinates of the 4 atoms.
    double x1 = coor1[0];
    double x2 = coor2[0];
    double x3 = coor3[0];
    double x4 = coor4[0];
    double y1 = coor1[1];
    double y2 = coor2[1];
    double y3 = coor3[1];
    double y4 = coor4[1];
    double z1 = coor1[2];
    double z2 = coor2[2];
    double z3 = coor3[2];
    double z4 = coor4[2];

    // set up all of the vectors from the four points
    std::vector<double> rij = {x2 - x1, y2 - y1, z2 - z1};  // this is vector rij
    double rij_length = CalculateDistance(rij, {0, 0, 0});
    std::vector<double> n_rij;  // this is normalized vector rij

    // loop through rij coordinates to produce the normalized vector n_rij
    for (size_t i = 0; i < 3; i++) {
        n_rij.push_back(rij[i] / rij_length);
    }

    std::vector<double> rik = {x3 - x1, y3 - y1, z3 - z1};  // this is the vector rik
    double rik_length = CalculateDistance(rik, {0, 0, 0});
    std::vector<double> n_rik;  // this is normalized vector rik

    // loop through rik coordinates to produce the normalized vector n_rik
    for (size_t i = 0; i < 3; i++) {
        n_rik.push_back(rik[i] / rik_length);
    }

    std::vector<double> rin = {x4 - x1, y4 - y1, z4 - z1};  // this is vector rin
    double rin_length = CalculateDistance(rin, {0, 0, 0});
    std::vector<double> n_rin;  // this is noramlized vector rin

    // loop through rin coordinates to produce the normalized vector n_rin
    for (size_t i = 0; i < 3; i++) {
        n_rin.push_back(rin[i] / rin_length);
    }

    // a vector to hold all the calculated vectors and their respective normalized
    // vectors
    std::vector<std::vector<double>> r_vector = {rij, rik, rin};
    std::vector<std::vector<double>> nr_vector = {n_rij, n_rik, n_rin};
    std::vector<double> phi;

    // loop three times because there are three possible permutations of inversion
    // angles: injk, ijkn, iknj
    for (size_t i = 0; i < 3; i++) {
        // set up the vector ukn and calculate its normalized vector
        std::vector<double> ukn;
        for (size_t j = 0; j < 3; j++) {
            ukn.push_back(nr_vector[i][j] + nr_vector[(i + 1) % 3][j]);
        }
        double ukn_length = CalculateDistance(ukn, {0, 0, 0});
        for (size_t j = 0; j < 3; j++) {
            ukn[j] = ukn[j] / ukn_length;
        }

        // set up the vector vkn and calculate its normalized vector
        std::vector<double> vkn;
        for (size_t j = 0; j < 3; j++) {
            vkn.push_back(nr_vector[i][j] - nr_vector[(i + 1) % 3][j]);
        }
        double vkn_length = CalculateDistance(vkn, {0, 0, 0});
        for (size_t j = 0; j < 3; j++) {
            vkn[j] = vkn[j] / vkn_length;
        }

        // use ukn, vkn, and one of the r_vectors to calculate phi.
        phi.push_back(acos(
            sqrt(CalculateDotProduct(r_vector[(i + 2) % 3], ukn) * CalculateDotProduct(r_vector[(i + 2) % 3], ukn) +
                 CalculateDotProduct(r_vector[(i + 2) % 3], vkn) * CalculateDotProduct(r_vector[(i + 2) % 3], vkn)) /
            CalculateDistance(r_vector[(i + 2) % 3], {0, 0, 0})));
    }

    return phi;
}

void CalculateInversionGrad(std::vector<double> centralCoor, std::vector<double> coor2, std::vector<double> coor3,
                            std::vector<double> coor4, std::vector<size_t> indexes, std::vector<double> cummu_grad,
                            std::vector<double> phis, std::vector<double>& gradients, int mon_num, int nat,
                            std::vector<double>& curr_force) {
    // store the coordinates of the 4 atoms.
    double x1 = centralCoor[0];
    double x2 = coor2[0];
    double x3 = coor3[0];
    double x4 = coor4[0];
    double y1 = centralCoor[1];
    double y2 = coor2[1];
    double y3 = coor3[1];
    double y4 = coor4[1];
    double z1 = centralCoor[2];
    double z2 = coor2[2];
    double z3 = coor3[2];
    double z4 = coor4[2];

    // set up all of the vectors from the four points. Note, that these variables
    // are assigned according to equation 2.66 in the dlpoly manual and from the
    // dlpoly code.
    std::vector<double> rij = {x2 - x1, y2 - y1, z2 - z1};
    std::vector<double> rik = {x3 - x1, y3 - y1, z3 - z1};
    std::vector<double> rin = {x4 - x1, y4 - y1, z4 - z1};
    std::vector<double> rij_norm = NormalizeVector(rij);
    std::vector<double> rik_norm = NormalizeVector(rik);
    std::vector<double> rin_norm = NormalizeVector(rin);

    std::vector<double> ukn, vkn, unj, vnj, ujk, vjk;
    GetVecUVecV(rik_norm, rin_norm, ukn, vkn);
    GetVecUVecV(rin_norm, rij_norm, unj, vnj);
    GetVecUVecV(rij_norm, rik_norm, ujk, vjk);
    std::vector<double> ukn_norm = NormalizeVector(ukn);
    std::vector<double> vkn_norm = NormalizeVector(vkn);
    std::vector<double> unj_norm = NormalizeVector(unj);
    std::vector<double> vnj_norm = NormalizeVector(vnj);
    std::vector<double> ujk_norm = NormalizeVector(ujk);
    std::vector<double> vjk_norm = NormalizeVector(vjk);

    // Note: in dlpoly, this step does not exist. They do not find the vector w.
    // Instead they directly compute the magnitude of w. Additionally, they
    // compute the magnitude by doing dot_rij_ukn^2 + dot_rij_vkn^2. They can do
    // this because ukn and vkn are both unit vectors, so their magnitude is 1.
    // Hence, they directly calculate the square of the scalar dot products.
    std::vector<double> wkn = GetVecW(rij, ukn_norm, vkn_norm);
    std::vector<double> wnj = GetVecW(rik, unj_norm, vnj_norm);
    std::vector<double> wjk = GetVecW(rin, ujk_norm, vjk_norm);

    // Compute distances
    double dist_rij = CalculateDistance(rij);
    double dist_rik = CalculateDistance(rik);
    double dist_rin = CalculateDistance(rin);
    double dist_ukn = CalculateDistance(ukn);
    double dist_vkn = CalculateDistance(vkn);
    double dist_unj = CalculateDistance(unj);
    double dist_vnj = CalculateDistance(vnj);
    double dist_ujk = CalculateDistance(ujk);
    double dist_vjk = CalculateDistance(vjk);

    // Compute reciprocal distance
    double recip_dist_ukn = 1.0 / dist_ukn;
    double recip_dist_vkn = 1.0 / dist_vkn;
    double recip_dist_unj = 1.0 / dist_unj;
    double recip_dist_vnj = 1.0 / dist_vnj;
    double recip_dist_ujk = 1.0 / dist_ujk;
    double recip_dist_vjk = 1.0 / dist_vjk;
    double recip_dist_rij = 1.0 / dist_rij;
    double recip_dist_rik = 1.0 / dist_rik;
    double recip_dist_rin = 1.0 / dist_rin;

    // See note above about vector w
    double dist_wkn = CalculateDistance(wkn);
    double dist_wnj = CalculateDistance(wnj);
    double dist_wjk = CalculateDistance(wjk);

    // Check wkn, wnj, wjk non zero
    dist_wkn = CheckNonZero(dist_wkn);
    dist_wnj = CheckNonZero(dist_wnj);
    dist_wjk = CheckNonZero(dist_wjk);

    // Compute dot products (as stipulated in dlpoly)
    double dot_rij_rik = CalculateDotProduct(rij, rik);
    double dot_rij_rin = CalculateDotProduct(rij, rin);
    double dot_rik_rin = CalculateDotProduct(rik, rin);

    double dot_rij_ukn = CalculateDotProduct(rij, ukn_norm);
    double dot_rij_vkn = CalculateDotProduct(rij, vkn_norm);
    double dot_rik_unj = CalculateDotProduct(rik, unj_norm);
    double dot_rik_vnj = CalculateDotProduct(rik, vnj_norm);
    double dot_rin_ujk = CalculateDotProduct(rin, ujk_norm);
    double dot_rin_vjk = CalculateDotProduct(rin, vjk_norm);

    double dot_rij_unj = CalculateDotProduct(rij, unj_norm);
    double dot_rij_ujk = CalculateDotProduct(rij, ujk_norm);
    double dot_rik_ujk = CalculateDotProduct(rik, ujk_norm);
    double dot_rik_ukn = CalculateDotProduct(rik, ukn_norm);
    double dot_rin_ukn = CalculateDotProduct(rin, ukn_norm);
    double dot_rin_unj = CalculateDotProduct(rin, unj_norm);

    double dot_rij_vnj = CalculateDotProduct(rij, vnj_norm);
    double dot_rij_vjk = CalculateDotProduct(rij, vjk_norm);
    double dot_rik_vjk = CalculateDotProduct(rik, vjk_norm);
    double dot_rik_vkn = CalculateDotProduct(rik, vkn_norm);
    double dot_rin_vkn = CalculateDotProduct(rin, vkn_norm);
    double dot_rin_vnj = CalculateDotProduct(rin, vnj_norm);

    // Compute trig values
    double cos_kn = cos(phis[0]);
    double cos_nj = cos(phis[1]);
    double cos_jk = cos(phis[2]);

    // Gradient of first non central atom for component x, y, and z
    double fbx = cummu_grad[0] * (-cos_kn * rij[0] * pow(recip_dist_rij, 2) +
                                  recip_dist_rij * (dot_rij_ukn * ukn_norm[0] + dot_rij_vkn * vkn_norm[0]) / dist_wkn) +
                 (dot_rik_unj * recip_dist_unj * recip_dist_rij *
                      (rik[0] - dot_rik_unj * unj_norm[0] -
                       (dot_rij_rik - dot_rik_unj * dot_rij_unj) * rij[0] * pow(recip_dist_rij, 2)) -
                  dot_rik_vnj * recip_dist_vnj * recip_dist_rij *
                      (rik[0] - dot_rik_vnj * vnj_norm[0] -
                       (dot_rij_rik - dot_rik_vnj * dot_rij_vnj) * rij[0] * pow(recip_dist_rij, 2))) *
                     cummu_grad[1] * recip_dist_rik / dist_wnj +
                 (dot_rin_ujk * recip_dist_ujk * recip_dist_rij *
                      (rin[0] - dot_rin_ujk * ujk_norm[0] -
                       (dot_rij_rin - dot_rin_ujk * dot_rij_ujk) * rij[0] * pow(recip_dist_rij, 2)) +
                  dot_rin_vjk * recip_dist_vjk * recip_dist_rij *
                      (rin[0] - dot_rin_vjk * vjk_norm[0] -
                       (dot_rij_rin - dot_rin_vjk * dot_rij_vjk) * rij[0] * pow(recip_dist_rij, 2))) *
                     cummu_grad[2] * recip_dist_rin / dist_wjk;
    double fby = cummu_grad[0] * (-cos_kn * rij[1] * pow(recip_dist_rij, 2) +
                                  recip_dist_rij * (dot_rij_ukn * ukn_norm[1] + dot_rij_vkn * vkn_norm[1]) / dist_wkn) +
                 (dot_rik_unj * recip_dist_unj * recip_dist_rij *
                      (rik[1] - dot_rik_unj * unj_norm[1] -
                       (dot_rij_rik - dot_rik_unj * dot_rij_unj) * rij[1] * pow(recip_dist_rij, 2)) -
                  dot_rik_vnj * recip_dist_vnj * recip_dist_rij *
                      (rik[1] - dot_rik_vnj * vnj_norm[1] -
                       (dot_rij_rik - dot_rik_vnj * dot_rij_vnj) * rij[1] * pow(recip_dist_rij, 2))) *
                     cummu_grad[1] * recip_dist_rik / dist_wnj +
                 (dot_rin_ujk * recip_dist_ujk * recip_dist_rij *
                      (rin[1] - dot_rin_ujk * ujk_norm[1] -
                       (dot_rij_rin - dot_rin_ujk * dot_rij_ujk) * rij[1] * pow(recip_dist_rij, 2)) +
                  dot_rin_vjk * recip_dist_vjk * recip_dist_rij *
                      (rin[1] - dot_rin_vjk * vjk_norm[1] -
                       (dot_rij_rin - dot_rin_vjk * dot_rij_vjk) * rij[1] * pow(recip_dist_rij, 2))) *
                     cummu_grad[2] * recip_dist_rin / dist_wjk;
    double fbz = cummu_grad[0] * (-cos_kn * rij[2] * pow(recip_dist_rij, 2) +
                                  recip_dist_rij * (dot_rij_ukn * ukn_norm[2] + dot_rij_vkn * vkn_norm[2]) / dist_wkn) +
                 (dot_rik_unj * recip_dist_unj * recip_dist_rij *
                      (rik[2] - dot_rik_unj * unj_norm[2] -
                       (dot_rij_rik - dot_rik_unj * dot_rij_unj) * rij[2] * pow(recip_dist_rij, 2)) -
                  dot_rik_vnj * recip_dist_vnj * recip_dist_rij *
                      (rik[2] - dot_rik_vnj * vnj_norm[2] -
                       (dot_rij_rik - dot_rik_vnj * dot_rij_vnj) * rij[2] * pow(recip_dist_rij, 2))) *
                     cummu_grad[1] * recip_dist_rik / dist_wnj +
                 (dot_rin_ujk * recip_dist_ujk * recip_dist_rij *
                      (rin[2] - dot_rin_ujk * ujk_norm[2] -
                       (dot_rij_rin - dot_rin_ujk * dot_rij_ujk) * rij[2] * pow(recip_dist_rij, 2)) +
                  dot_rin_vjk * recip_dist_vjk * recip_dist_rij *
                      (rin[2] - dot_rin_vjk * vjk_norm[2] -
                       (dot_rij_rin - dot_rin_vjk * dot_rij_vjk) * rij[2] * pow(recip_dist_rij, 2))) *
                     cummu_grad[2] * recip_dist_rin / dist_wjk;

    // Gradient of second non central atom for component x, y, and z
    double fcx = cummu_grad[1] * (-cos_nj * rik[0] * pow(recip_dist_rik, 2) +
                                  recip_dist_rik * (dot_rik_unj * unj_norm[0] + dot_rik_vnj * vnj_norm[0]) / dist_wnj) +
                 (dot_rin_ujk * recip_dist_ujk * recip_dist_rik *
                      (rin[0] - dot_rin_ujk * ujk_norm[0] -
                       (dot_rik_rin - dot_rin_ujk * dot_rik_ujk) * rik[0] * pow(recip_dist_rik, 2)) -
                  dot_rin_vjk * recip_dist_vjk * recip_dist_rik *
                      (rin[0] - dot_rin_vjk * vjk_norm[0] -
                       (dot_rik_rin - dot_rin_vjk * dot_rik_vjk) * rik[0] * pow(recip_dist_rik, 2))) *
                     cummu_grad[2] * recip_dist_rin / dist_wjk +
                 (dot_rij_ukn * recip_dist_ukn * recip_dist_rik *
                      (rij[0] - dot_rij_ukn * ukn_norm[0] -
                       (dot_rij_rik - dot_rij_ukn * dot_rik_ukn) * rik[0] * pow(recip_dist_rik, 2)) +
                  dot_rij_vkn * recip_dist_vkn * recip_dist_rik *
                      (rij[0] - dot_rij_vkn * vkn_norm[0] -
                       (dot_rij_rik - dot_rij_vkn * dot_rik_vkn) * rik[0] * pow(recip_dist_rik, 2))) *
                     cummu_grad[0] * recip_dist_rij / dist_wkn;
    double fcy = cummu_grad[1] * (-cos_nj * rik[1] * pow(recip_dist_rik, 2) +
                                  recip_dist_rik * (dot_rik_unj * unj_norm[1] + dot_rik_vnj * vnj_norm[1]) / dist_wnj) +
                 (dot_rin_ujk * recip_dist_ujk * recip_dist_rik *
                      (rin[1] - dot_rin_ujk * ujk_norm[1] -
                       (dot_rik_rin - dot_rin_ujk * dot_rik_ujk) * rik[1] * pow(recip_dist_rik, 2)) -
                  dot_rin_vjk * recip_dist_vjk * recip_dist_rik *
                      (rin[1] - dot_rin_vjk * vjk_norm[1] -
                       (dot_rik_rin - dot_rin_vjk * dot_rik_vjk) * rik[1] * pow(recip_dist_rik, 2))) *
                     cummu_grad[2] * recip_dist_rin / dist_wjk +
                 (dot_rij_ukn * recip_dist_ukn * recip_dist_rik *
                      (rij[1] - dot_rij_ukn * ukn_norm[1] -
                       (dot_rij_rik - dot_rij_ukn * dot_rik_ukn) * rik[1] * pow(recip_dist_rik, 2)) +
                  dot_rij_vkn * recip_dist_vkn * recip_dist_rik *
                      (rij[1] - dot_rij_vkn * vkn_norm[1] -
                       (dot_rij_rik - dot_rij_vkn * dot_rik_vkn) * rik[1] * pow(recip_dist_rik, 2))) *
                     cummu_grad[0] * recip_dist_rij / dist_wkn;
    double fcz = cummu_grad[1] * (-cos_nj * rik[2] * pow(recip_dist_rik, 2) +
                                  recip_dist_rik * (dot_rik_unj * unj_norm[2] + dot_rik_vnj * vnj_norm[2]) / dist_wnj) +
                 (dot_rin_ujk * recip_dist_ujk * recip_dist_rik *
                      (rin[2] - dot_rin_ujk * ujk_norm[2] -
                       (dot_rik_rin - dot_rin_ujk * dot_rik_ujk) * rik[2] * pow(recip_dist_rik, 2)) -
                  dot_rin_vjk * recip_dist_vjk * recip_dist_rik *
                      (rin[2] - dot_rin_vjk * vjk_norm[2] -
                       (dot_rik_rin - dot_rin_vjk * dot_rik_vjk) * rik[2] * pow(recip_dist_rik, 2))) *
                     cummu_grad[2] * recip_dist_rin / dist_wjk +
                 (dot_rij_ukn * recip_dist_ukn * recip_dist_rik *
                      (rij[2] - dot_rij_ukn * ukn_norm[2] -
                       (dot_rij_rik - dot_rij_ukn * dot_rik_ukn) * rik[2] * pow(recip_dist_rik, 2)) +
                  dot_rij_vkn * recip_dist_vkn * recip_dist_rik *
                      (rij[2] - dot_rij_vkn * vkn_norm[2] -
                       (dot_rij_rik - dot_rij_vkn * dot_rik_vkn) * rik[2] * pow(recip_dist_rik, 2))) *
                     cummu_grad[0] * recip_dist_rij / dist_wkn;

    // Gradient of third non central atom for component x, y, and z
    double fdx = cummu_grad[2] * (-cos_jk * rin[0] * pow(recip_dist_rin, 2) +
                                  recip_dist_rin * (dot_rin_ujk * ujk_norm[0] + dot_rin_vjk * vjk_norm[0]) / dist_wjk) +
                 (dot_rij_ukn * recip_dist_ukn * recip_dist_rin *
                      (rij[0] - dot_rij_ukn * ukn_norm[0] -
                       (dot_rij_rin - dot_rij_ukn * dot_rin_ukn) * rin[0] * pow(recip_dist_rin, 2)) -
                  dot_rij_vkn * recip_dist_vkn * recip_dist_rin *
                      (rij[0] - dot_rij_vkn * vkn_norm[0] -
                       (dot_rij_rin - dot_rij_vkn * dot_rin_vkn) * rin[0] * pow(recip_dist_rin, 2))) *
                     cummu_grad[0] * recip_dist_rij / dist_wkn +
                 (dot_rik_unj * recip_dist_unj * recip_dist_rin *
                      (rik[0] - dot_rik_unj * unj_norm[0] -
                       (dot_rik_rin - dot_rik_unj * dot_rin_unj) * rin[0] * pow(recip_dist_rin, 2)) +
                  dot_rik_vnj * recip_dist_vnj * recip_dist_rin *
                      (rik[0] - dot_rik_vnj * vnj_norm[0] -
                       (dot_rik_rin - dot_rik_vnj * dot_rin_vnj) * rin[0] * pow(recip_dist_rin, 2))) *
                     cummu_grad[1] * recip_dist_rik / dist_wnj;
    double fdy = cummu_grad[2] * (-cos_jk * rin[1] * pow(recip_dist_rin, 2) +
                                  recip_dist_rin * (dot_rin_ujk * ujk_norm[1] + dot_rin_vjk * vjk_norm[1]) / dist_wjk) +
                 (dot_rij_ukn * recip_dist_ukn * recip_dist_rin *
                      (rij[1] - dot_rij_ukn * ukn_norm[1] -
                       (dot_rij_rin - dot_rij_ukn * dot_rin_ukn) * rin[1] * pow(recip_dist_rin, 2)) -
                  dot_rij_vkn * recip_dist_vkn * recip_dist_rin *
                      (rij[1] - dot_rij_vkn * vkn_norm[1] -
                       (dot_rij_rin - dot_rij_vkn * dot_rin_vkn) * rin[1] * pow(recip_dist_rin, 2))) *
                     cummu_grad[0] * recip_dist_rij / dist_wkn +
                 (dot_rik_unj * recip_dist_unj * recip_dist_rin *
                      (rik[1] - dot_rik_unj * unj_norm[1] -
                       (dot_rik_rin - dot_rik_unj * dot_rin_unj) * rin[1] * pow(recip_dist_rin, 2)) +
                  dot_rik_vnj * recip_dist_vnj * recip_dist_rin *
                      (rik[1] - dot_rik_vnj * vnj_norm[1] -
                       (dot_rik_rin - dot_rik_vnj * dot_rin_vnj) * rin[1] * pow(recip_dist_rin, 2))) *
                     cummu_grad[1] * recip_dist_rik / dist_wnj;
    double fdz = cummu_grad[2] * (-cos_jk * rin[2] * pow(recip_dist_rin, 2) +
                                  recip_dist_rin * (dot_rin_ujk * ujk_norm[2] + dot_rin_vjk * vjk_norm[2]) / dist_wjk) +
                 (dot_rij_ukn * recip_dist_ukn * recip_dist_rin *
                      (rij[2] - dot_rij_ukn * ukn_norm[2] -
                       (dot_rij_rin - dot_rij_ukn * dot_rin_ukn) * rin[2] * pow(recip_dist_rin, 2)) -
                  dot_rij_vkn * recip_dist_vkn * recip_dist_rin *
                      (rij[2] - dot_rij_vkn * vkn_norm[2] -
                       (dot_rij_rin - dot_rij_vkn * dot_rin_vkn) * rin[2] * pow(recip_dist_rin, 2))) *
                     cummu_grad[0] * recip_dist_rij / dist_wkn +
                 (dot_rik_unj * recip_dist_unj * recip_dist_rin *
                      (rik[2] - dot_rik_unj * unj_norm[2] -
                       (dot_rik_rin - dot_rik_unj * dot_rin_unj) * rin[2] * pow(recip_dist_rin, 2)) +
                  dot_rik_vnj * recip_dist_vnj * recip_dist_rin *
                      (rik[2] - dot_rik_vnj * vnj_norm[2] -
                       (dot_rik_rin - dot_rik_vnj * dot_rin_vnj) * rin[2] * pow(recip_dist_rin, 2))) *
                     cummu_grad[1] * recip_dist_rik / dist_wnj;

    // Gradient of central atom for component x, y, and z
    double fax = -(fbx + fcx + fdx);
    double fay = -(fby + fcy + fdy);
    double faz = -(fbz + fcz + fdz);

    std::vector<double> ans = {fax, fay, faz, fbx, fby, fbz, fcx, fcy, fcz, fdx, fdy, fdz};
    for (int i = 0; i < curr_force.size(); i++) {
        curr_force[i] = -1 * ans[i];
    }

    for (int index = 0; index < indexes.size(); index++) {
        gradients[(indexes[index] - 1) * 3 + (mon_num * nat * 3)] += ans[index * 3];
        gradients[(indexes[index] - 1) * 3 + 1 + (mon_num * nat * 3)] += ans[index * 3 + 1];
        gradients[(indexes[index] - 1) * 3 + 2 + (mon_num * nat * 3)] += ans[index * 3 + 2];
    }
    // gradients[(indexes[index] - 1) * 3 + dim + (mon_num * nat * 3)] += cummu_grad * grad_B;

    // for (int i = 0; i < ans.size(); i++) {
    //     gradients[i + ] += ans[i];
    // }
}

void GetVecUVecV(std::vector<double> rix_norm, std::vector<double> riy_norm, std::vector<double>& u_vec,
                 std::vector<double>& v_vec) {
    // rik_norm + rin_norm
    std::vector<double> sum_ix_iy = {rix_norm[0] + riy_norm[0], rix_norm[1] + riy_norm[1], rix_norm[2] + riy_norm[2]};

    // rik_norm - rin_norm
    std::vector<double> diff_ix_iy = {rix_norm[0] - riy_norm[0], rix_norm[1] - riy_norm[1], rix_norm[2] - riy_norm[2]};

    // Copy the results into ukn vector
    for (int i = 0; i < sum_ix_iy.size(); i++) {
        u_vec.push_back(sum_ix_iy[i]);
    }

    // Copy the results into vkn vector
    for (int i = 0; i < diff_ix_iy.size(); i++) {
        v_vec.push_back(diff_ix_iy[i]);
    }
}

std::vector<double> GetVecW(std::vector<double>& riz, std::vector<double>& uxy_norm, std::vector<double>& vxy_norm) {
    double dot_riz_uxy = CalculateDotProduct(riz, uxy_norm);
    double dot_riz_vxy = CalculateDotProduct(riz, vxy_norm);
    std::vector<double> wxy = {dot_riz_uxy * uxy_norm[0] + dot_riz_vxy * vxy_norm[0],
                               dot_riz_uxy * uxy_norm[1] + dot_riz_vxy * vxy_norm[1],
                               dot_riz_uxy * uxy_norm[2] + dot_riz_vxy * vxy_norm[2]};
    return wxy;
}

std::vector<double> NormalizeVector(std::vector<double> vec) {
    double magnitude = CalculateDistance(vec);
    std::vector<double> vec_norm = {vec[0] / magnitude, vec[1] / magnitude, vec[2] / magnitude};
    return vec_norm;
}

double CheckNonZero(double val) {
    if (val < 1.0e-11 && val > -1.0e-11) {
        return 1.0e-11;
    } else {
        return val;
    }
}
}  // namespace eff