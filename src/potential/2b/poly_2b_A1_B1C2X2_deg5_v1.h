
#ifndef POLY_2B_MBNRG_A1_B1C2X2_DEG5_H
#define POLY_2B_MBNRG_A1_B1C2X2_DEG5_H

namespace mbnrg_A1_B1C2X2_deg5 {

struct poly_A1_B1C2X2_deg5_v1 {
    static const unsigned degree = 5;
    static const unsigned n_vars = 8;

    static const unsigned size = 496;

    double eval(const double x[8],
              const double a[496]);
    double eval_direct(const double x[8],
                     const double a[496]);
    double eval(const double x[8],
              const double a[496],
                    double g[8]);
    double eval_direct(const double x[8],
                     const double a[496],
                           double g[8]);
};

} // namespace mbnrg_A1_B1C2X2_deg5

#endif // POLY_2B_MBNRG_A1_B1C2X2_DEG5_H



//Polynomial input used to generate these files:

//  add_molecule['A1']
//  add_molecule['B1C2X2']
//  
//  add_variable['A', '1', 'a', 'B', '1', 'b', 'x-inter-A+B-0']
//  add_variable['A', '1', 'a', 'C', '1', 'b', 'x-inter-A+C-0']
//  add_variable['A', '1', 'a', 'C', '2', 'b', 'x-inter-A+C-0']
//  add_variable['A', '1', 'a', 'X', '1', 'b', 'x-inter-A+X-0']
//  add_variable['A', '1', 'a', 'X', '2', 'b', 'x-inter-A+X-0']
//  add_variable['B', '1', 'b', 'C', '1', 'b', 'x-intra-B+C-1']
//  add_variable['B', '1', 'b', 'C', '2', 'b', 'x-intra-B+C-1']
//  add_variable['C', '1', 'b', 'C', '2', 'b', 'x-intra-C+C-1']
//  
//  add_filter['sum-degree', 'x-inter-*+*-*', '0']