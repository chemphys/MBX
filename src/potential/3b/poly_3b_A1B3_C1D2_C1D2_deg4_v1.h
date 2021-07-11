
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

#ifndef POLY_3B_MBNRG_A1B3_C1D2_C1D2_DEG4_H
#define POLY_3B_MBNRG_A1B3_C1D2_C1D2_DEG4_H

/**
 * @file poly_3b_A1B3_C1D2_C1D2_deg4_v1.h
 * @brief Contains the structure of the polynomial for symmetry A1B3_C1D2_C1D2
 */

/**
 * @namespace mbnrg_A1B3_C1D2_C1D2_deg4
 * @brief Encloses the structure of the polynomial for symmetry A1B3_C1D2_C1D2
 */

namespace mbnrg_A1B3_C1D2_C1D2_deg4 {

struct poly_A1B3_C1D2_C1D2_deg4_v1 {
    // Degree of the polynomial
    static const unsigned degree = 4;

    // Number of variables
    static const unsigned n_vars = 45;

    // Number of terms
    static const unsigned size = 2704;

    /**
     * @brief Evaluates the polynomial of degree 4 for A1B3_C1D2_C1D2 symmetry.
     *
     * Given the linear parameters and the value of the polynomial variables,
     * evaluates the polynomial for the A1B3_C1D2_C1D2 symmetry.
     * @param[in] x Double array of length 45 with the variable values
     * @param[in] a Double array of 2704 elements with the linear parameters of the polynomial
     * @return Value of the polynomial
     */
    double eval(const double x[45], const double a[2704]);

    /**
     * @brief Evaluates the polynomial of degree 4 for A1B3_C1D2_C1D2 symmetry.
     *
     * Given the linear parameters and the value of the polynomial variables,
     * evaluates the polynomial for the A1B3_C1D2_C1D2 symmetry.
     * It uses the direct, non optimized polynomial
     * @param[in] x Double array of length 45 with the variable values
     * @param[in] a Double array of 2704 elements with the linear parameters of the polynomial
     * @return Value of the polynomial
     */
    double eval_direct(const double x[45], const double a[2704]);

    /**
     * @brief Evaluates the polynomial of degree 4 for A1B3_C1D2_C1D2 symmetry.
     *
     * Given the linear parameters and the value of the polynomial variables,
     * evaluates the polynomial for the A1B3_C1D2_C1D2 symmetry.
     * @param[in] x Double array of length 45 with the variable values
     * @param[in] a Double array of 2704 elements with the linear parameters of the polynomial
     * @param[out] g Double array of length 45 that will store the gradients dP/dxi
     * @return Value of the polynomial
     */
    double eval(const double x[45], const double a[2704], double g[45]);

    /**
     * @brief Evaluates the polynomial of degree 4 for A1B3_C1D2_C1D2 symmetry.
     *
     * Given the linear parameters and the value of the polynomial variables,
     * evaluates the polynomial for the A1B3_C1D2_C1D2 symmetry.
     * It uses the direct, non optimized polynomial
     * @param[in] x Double array of length 45 with the variable values
     * @param[in] a Double array of 2704 elements with the linear parameters of the polynomial
     * @param[out] g Double array of length 45 that will store the gradients dP/dxi
     * @return Value of the polynomial
     */
    double eval_direct(const double x[45], const double a[2704], double g[45]);
};

}  // namespace mbnrg_A1B3_C1D2_C1D2_deg4

#endif  // POLY_3B_MBNRG_A1B3_C1D2_C1D2_DEG4_H

// Polynomial input used to generate these files:

//  add_molecule['A1B3']
//  add_molecule['C1D2']
//  add_molecule['C1D2']
//
//  add_variable['A', '1', 'a', 'B', '1', 'a', 'x-intra-A+B-1']
//  add_variable['A', '1', 'a', 'B', '2', 'a', 'x-intra-A+B-1']
//  add_variable['A', '1', 'a', 'B', '3', 'a', 'x-intra-A+B-1']
//  add_variable['A', '1', 'a', 'C', '1', 'b', 'x-inter-A+C-0']
//  add_variable['A', '1', 'a', 'C', '2', 'c', 'x-inter-A+C-0']
//  add_variable['A', '1', 'a', 'D', '1', 'b', 'x-inter-A+D-0']
//  add_variable['A', '1', 'a', 'D', '2', 'b', 'x-inter-A+D-0']
//  add_variable['A', '1', 'a', 'D', '3', 'c', 'x-inter-A+D-0']
//  add_variable['A', '1', 'a', 'D', '4', 'c', 'x-inter-A+D-0']
//  add_variable['B', '1', 'a', 'B', '2', 'a', 'x-intra-B+B-1']
//  add_variable['B', '1', 'a', 'B', '3', 'a', 'x-intra-B+B-1']
//  add_variable['B', '1', 'a', 'C', '1', 'b', 'x-inter-B+C-0']
//  add_variable['B', '1', 'a', 'C', '2', 'c', 'x-inter-B+C-0']
//  add_variable['B', '1', 'a', 'D', '1', 'b', 'x-inter-B+D-0']
//  add_variable['B', '1', 'a', 'D', '2', 'b', 'x-inter-B+D-0']
//  add_variable['B', '1', 'a', 'D', '3', 'c', 'x-inter-B+D-0']
//  add_variable['B', '1', 'a', 'D', '4', 'c', 'x-inter-B+D-0']
//  add_variable['B', '2', 'a', 'B', '3', 'a', 'x-intra-B+B-1']
//  add_variable['B', '2', 'a', 'C', '1', 'b', 'x-inter-B+C-0']
//  add_variable['B', '2', 'a', 'C', '2', 'c', 'x-inter-B+C-0']
//  add_variable['B', '2', 'a', 'D', '1', 'b', 'x-inter-B+D-0']
//  add_variable['B', '2', 'a', 'D', '2', 'b', 'x-inter-B+D-0']
//  add_variable['B', '2', 'a', 'D', '3', 'c', 'x-inter-B+D-0']
//  add_variable['B', '2', 'a', 'D', '4', 'c', 'x-inter-B+D-0']
//  add_variable['B', '3', 'a', 'C', '1', 'b', 'x-inter-B+C-0']
//  add_variable['B', '3', 'a', 'C', '2', 'c', 'x-inter-B+C-0']
//  add_variable['B', '3', 'a', 'D', '1', 'b', 'x-inter-B+D-0']
//  add_variable['B', '3', 'a', 'D', '2', 'b', 'x-inter-B+D-0']
//  add_variable['B', '3', 'a', 'D', '3', 'c', 'x-inter-B+D-0']
//  add_variable['B', '3', 'a', 'D', '4', 'c', 'x-inter-B+D-0']
//  add_variable['C', '1', 'b', 'C', '2', 'c', 'x-inter-C+C-0']
//  add_variable['C', '1', 'b', 'D', '1', 'b', 'x-intra-C+D-1']
//  add_variable['C', '1', 'b', 'D', '2', 'b', 'x-intra-C+D-1']
//  add_variable['C', '1', 'b', 'D', '3', 'c', 'x-inter-C+D-0']
//  add_variable['C', '1', 'b', 'D', '4', 'c', 'x-inter-C+D-0']
//  add_variable['C', '2', 'c', 'D', '1', 'b', 'x-inter-C+D-0']
//  add_variable['C', '2', 'c', 'D', '2', 'b', 'x-inter-C+D-0']
//  add_variable['C', '2', 'c', 'D', '3', 'c', 'x-intra-C+D-1']
//  add_variable['C', '2', 'c', 'D', '4', 'c', 'x-intra-C+D-1']
//  add_variable['D', '1', 'b', 'D', '2', 'b', 'x-intra-D+D-1']
//  add_variable['D', '1', 'b', 'D', '3', 'c', 'x-inter-D+D-0']
//  add_variable['D', '1', 'b', 'D', '4', 'c', 'x-inter-D+D-0']
//  add_variable['D', '2', 'b', 'D', '3', 'c', 'x-inter-D+D-0']
//  add_variable['D', '2', 'b', 'D', '4', 'c', 'x-inter-D+D-0']
//  add_variable['D', '3', 'c', 'D', '4', 'c', 'x-intra-D+D-1']
//
//  add_filter['sum-degree', 'x-inter-*+*-*', '0']
//  add_filter[num-fragments', 'x-inter-*+*-*', '2-']
//
//  add_filter['sum-degree', '*', '2', 'and', sum-degree', 'x-intra-A+B-*', '1+']
//  add_filter['sum-degree', '*', '2', 'and', sum-degree', 'x-intra-B+B-*', '1+']
//
//  add_filter['sum-degree', '*', '3', 'and', sum-degree', 'x-intra-A+B-*', '2+']
//  add_filter['sum-degree', '*', '3', 'and', sum-degree', 'x-intra-B+B-*', '2+']
//
//  add_filter['sum-degree', '*', '4', 'and', sum-degree', 'x-intra-*+*-*', '1+']
//  add_filter['sum-degree', '*', '4', 'and', sum-degree', 'x-inter-A+A-*', '3+']
//  add_filter['sum-degree', '*', '4', 'and', sum-degree', 'x-inter-B+B-*', '3+']
//
//  add_filter['sum-degree', '*', '2', 'and', sum-degree', 'x-intra-C+D-*', '1+']
//  add_filter['sum-degree', '*', '2', 'and', sum-degree', 'x-intra-D+D-*', '1+']
//
//  add_filter['sum-degree', '*', '3', 'and', sum-degree', 'x-intra-C+D-*', '2+']
//  add_filter['sum-degree', '*', '3', 'and', sum-degree', 'x-intra-D+D-*', '2+']
//
//  add_filter['sum-degree', '*', '4', 'and', sum-degree', 'x-inter-C+C-*', '3+']
//  add_filter['sum-degree', '*', '4', 'and', sum-degree', 'x-inter-D+D-*', '3+']
//  add_filter['sum-degree', '*', '4', 'and', sum-degree', 'x-inter-C+D-*', '3+']
//
//  add_filter['sum-degree', '*', '4', 'and', sum-degree', 'x-inter-A+C-*', '3+']
//  add_filter['sum-degree', '*', '4', 'and', sum-degree', 'x-inter-A+D-*', '3+']
//  add_filter['sum-degree', '*', '4', 'and', sum-degree', 'x-inter-B+C-*', '3+']
//  add_filter['sum-degree', '*', '4', 'and', sum-degree', 'x-inter-B+D-*', '3+']
