
#ifndef POLY_1B_MBNRG_A1B3_DEG5_H
#define POLY_1B_MBNRG_A1B3_DEG5_H

namespace mbnrg_A1B3_deg5 {

struct poly_A1B3_deg5_v1 {
    static const unsigned degree = 5;
    static const unsigned n_vars = 6;

    static const unsigned size = 102;

    double eval(const double x[6], const double a[102]);
    double eval_direct(const double x[6], const double a[102]);
    double eval(const double x[6], const double a[102], double g[6]);
    double eval_direct(const double x[6], const double a[102], double g[6]);
};

}  // namespace mbnrg_A1B3_deg5

#endif  // POLY_1B_MBNRG_A1B3_DEG5_H
