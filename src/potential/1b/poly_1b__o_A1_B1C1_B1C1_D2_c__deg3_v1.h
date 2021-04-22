
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

#ifndef POLY_1B_MBNRG__O_A1_B1C1_B1C1_D2_C__DEG3_H
#define POLY_1B_MBNRG__O_A1_B1C1_B1C1_D2_C__DEG3_H

/**
 * @file poly_1b__o_A1_B1C1_B1C1_D2_c__deg3_v1.h
 * @brief Contains the structure of the polynomial for symmetry _o_A1_B1C1_B1C1_D2_c_
 */

/**
 * @namespace mbnrg__o_A1_B1C1_B1C1_D2_c__deg3
 * @brief Encloses the structure of the polynomial for symmetry _o_A1_B1C1_B1C1_D2_c_
 */

namespace mbnrg__o_A1_B1C1_B1C1_D2_c__deg3 {

struct poly__o_A1_B1C1_B1C1_D2_c__deg3_v1 {
    // Degree of the polynomial
    static const unsigned degree = 3;

    // Number of variables
    static const unsigned n_vars = 21;

    // Number of terms
    static const unsigned size = 651;

    /**
     * @brief Evaluates the polynomial of degree 3 for _o_A1_B1C1_B1C1_D2_c_ symmetry.
     *
     * Given the linear parameters and the value of the polynomial variables,
     * evaluates the polynomial for the _o_A1_B1C1_B1C1_D2_c_ symmetry.
     * @param[in] x Double array of length 21 with the variable values
     * @param[in] a Double array of 651 elements with the linear parameters of the polynomial
     * @return Value of the polynomial
     */
    double eval(const double x[21], const double a[651]);

    /**
     * @brief Evaluates the polynomial of degree 3 for _o_A1_B1C1_B1C1_D2_c_ symmetry.
     *
     * Given the linear parameters and the value of the polynomial variables,
     * evaluates the polynomial for the _o_A1_B1C1_B1C1_D2_c_ symmetry.
     * It uses the direct, non optimized polynomial
     * @param[in] x Double array of length 21 with the variable values
     * @param[in] a Double array of 651 elements with the linear parameters of the polynomial
     * @return Value of the polynomial
     */
    double eval_direct(const double x[21], const double a[651]);

    /**
     * @brief Evaluates the polynomial of degree 3 for _o_A1_B1C1_B1C1_D2_c_ symmetry.
     *
     * Given the linear parameters and the value of the polynomial variables,
     * evaluates the polynomial for the _o_A1_B1C1_B1C1_D2_c_ symmetry.
     * @param[in] x Double array of length 21 with the variable values
     * @param[in] a Double array of 651 elements with the linear parameters of the polynomial
     * @param[out] g Double array of length 21 that will store the gradients dP/dxi
     * @return Value of the polynomial
     */
    double eval(const double x[21], const double a[651], double g[21]);

    /**
     * @brief Evaluates the polynomial of degree 3 for _o_A1_B1C1_B1C1_D2_c_ symmetry.
     *
     * Given the linear parameters and the value of the polynomial variables,
     * evaluates the polynomial for the _o_A1_B1C1_B1C1_D2_c_ symmetry.
     * It uses the direct, non optimized polynomial
     * @param[in] x Double array of length 21 with the variable values
     * @param[in] a Double array of 651 elements with the linear parameters of the polynomial
     * @param[out] g Double array of length 21 that will store the gradients dP/dxi
     * @return Value of the polynomial
     */
    double eval_direct(const double x[21], const double a[651], double g[21]);
};

}  // namespace mbnrg__o_A1_B1C1_B1C1_D2_c__deg3

#endif  // POLY_1B_MBNRG__O_A1_B1C1_B1C1_D2_C__DEG3_H

// Polynomial input used to generate these files:

//  add_molecule['(A1_B1C1_B1C1_D2)']
//
//  add_variable['A', '1', 'aa', 'B', '1', 'ab', 'x-intra-A+B-1']
//  add_variable['A', '1', 'aa', 'B', '2', 'ac', 'x-intra-A+B-1']
//  add_variable['A', '1', 'aa', 'C', '1', 'ab', 'x-intra-A+C-1']
//  add_variable['A', '1', 'aa', 'C', '2', 'ac', 'x-intra-A+C-1']
//  add_variable['A', '1', 'aa', 'D', '1', 'ad', 'x-intra-A+D-1']
//  add_variable['A', '1', 'aa', 'D', '2', 'ad', 'x-intra-A+D-1']
//  add_variable['B', '1', 'ab', 'B', '2', 'ac', 'x-intra-B+B-1']
//  add_variable['B', '1', 'ab', 'C', '1', 'ab', 'x-intra-B+C-2']
//  add_variable['B', '1', 'ab', 'C', '2', 'ac', 'x-intra-B+C-1']
//  add_variable['B', '1', 'ab', 'D', '1', 'ad', 'x-intra-B+D-1']
//  add_variable['B', '1', 'ab', 'D', '2', 'ad', 'x-intra-B+D-1']
//  add_variable['B', '2', 'ac', 'C', '1', 'ab', 'x-intra-B+C-1']
//  add_variable['B', '2', 'ac', 'C', '2', 'ac', 'x-intra-B+C-2']
//  add_variable['B', '2', 'ac', 'D', '1', 'ad', 'x-intra-B+D-1']
//  add_variable['B', '2', 'ac', 'D', '2', 'ad', 'x-intra-B+D-1']
//  add_variable['C', '1', 'ab', 'C', '2', 'ac', 'x-intra-C+C-1']
//  add_variable['C', '1', 'ab', 'D', '1', 'ad', 'x-intra-C+D-1']
//  add_variable['C', '1', 'ab', 'D', '2', 'ad', 'x-intra-C+D-1']
//  add_variable['C', '2', 'ac', 'D', '1', 'ad', 'x-intra-C+D-1']
//  add_variable['C', '2', 'ac', 'D', '2', 'ad', 'x-intra-C+D-1']
//  add_variable['D', '1', 'ad', 'D', '2', 'ad', 'x-intra-D+D-2']
//
