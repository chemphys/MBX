
#ifndef POLY_2B_MBNRG_A1B3_C1D2X2_DEG4_H
#define POLY_2B_MBNRG_A1B3_C1D2X2_DEG4_H

namespace mbnrg_A1B3_C1D2X2_deg4 {

struct poly_A1B3_C1D2X2_deg4_v1 {
    static const unsigned degree = 4;
    static const unsigned n_vars = 29;

    static const unsigned size = 3793;

    double eval(const double x[29], const double a[3793]);
    double eval_direct(const double x[29], const double a[3793]);
    double eval(const double x[29], const double a[3793], double g[29]);
    double eval_direct(const double x[29], const double a[3793], double g[29]);
};

}  // namespace mbnrg_A1B3_C1D2X2_deg4

#endif  // POLY_2B_MBNRG_A1B3_C1D2X2_DEG4_H
