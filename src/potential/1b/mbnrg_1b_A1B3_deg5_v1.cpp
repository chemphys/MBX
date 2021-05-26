#include "mbnrg_1b_A1B3_deg5_v1.h"

////////////////////////////////////////////////////////////////////////////////

namespace mbnrg_A1B3_deg5 {

mbnrg_A1B3_deg5_v1::mbnrg_A1B3_deg5_v1(const std::string mon1) {
    // =====>> BEGIN SECTION CONSTRUCTOR <<=====
    // =>> PASTE RIGHT BELOW THIS LINE <==

    if (mon1 == "ano3") {
        coefficients = std::vector<double>{-2.556963256904372e+03,  // 0
                                           1.265113382314104e+03,   // 1
                                           3.554299503806099e+02,   // 2
                                           -6.833168880648390e+01,  // 3
                                           8.390743478862669e+03,   // 4
                                           -2.093119526144767e+03,  // 5
                                           -4.121786889171016e+03,  // 6
                                           -2.197707566991290e+03,  // 7
                                           6.065306378681227e+03,   // 8
                                           9.930168058323879e+01,   // 9
                                           3.199671095047050e+03,   // 10
                                           -6.185654258481611e+02,  // 11
                                           8.804386697552885e+02,   // 12
                                           2.861042532073941e+03,   // 13
                                           -3.879996633847096e+02,  // 14
                                           -2.485318247826206e+02,  // 15
                                           2.708926433831062e+02,   // 16
                                           -1.322089107242755e+03,  // 17
                                           1.364447504570293e+03,   // 18
                                           3.789830877657570e+02,   // 19
                                           -2.351982495985121e+03,  // 20
                                           -3.467652645482563e+02,  // 21
                                           7.051649224815386e+02,   // 22
                                           -3.628491595862300e+02,  // 23
                                           2.045037486941813e+03,   // 24
                                           1.120859302386041e+03,   // 25
                                           2.259564913175360e+02,   // 26
                                           3.755228929745624e+01,   // 27
                                           1.785286285479083e+02,   // 28
                                           1.825831939965495e+02,   // 29
                                           1.524625151222755e+02,   // 30
                                           1.494951640760885e+02,   // 31
                                           -3.107695963360196e+02,  // 32
                                           1.115871369079253e+03,   // 33
                                           -9.800204081145660e+01,  // 34
                                           -3.694339868986138e+01,  // 35
                                           2.322638205033107e+03,   // 36
                                           -7.091977494746723e+02,  // 37
                                           6.309317539032522e+02,   // 38
                                           2.313127503552417e+03,   // 39
                                           1.027350926518168e+03,   // 40
                                           7.233908554133741e+02,   // 41
                                           1.237836238390506e+03,   // 42
                                           1.565682648960123e+03,   // 43
                                           -3.587195883692098e+02,  // 44
                                           5.162123205051893e+02,   // 45
                                           7.455404813121376e+02,   // 46
                                           2.562657540397815e+02,   // 47
                                           -5.513456122421203e+02,  // 48
                                           3.690434425914982e+02,   // 49
                                           4.274101156969535e+02,   // 50
                                           7.451603735175939e+02,   // 51
                                           -1.105621147185832e+02,  // 52
                                           7.380492611116657e+02,   // 53
                                           1.405898313902994e+02,   // 54
                                           3.881039318921763e+01,   // 55
                                           6.378445789718792e+02,   // 56
                                           4.383676974177484e+02,   // 57
                                           -6.436967521010375e+01,  // 58
                                           4.192082728343218e+02,   // 59
                                           8.609296070781669e+01,   // 60
                                           3.681805883243861e+00,   // 61
                                           5.635565161412093e+02,   // 62
                                           -8.450723139336415e+01,  // 63
                                           -5.584327536639028e+01,  // 64
                                           3.708938963976529e+02,   // 65
                                           1.024582531393167e+02,   // 66
                                           1.722469028141503e+02,   // 67
                                           8.833355572042410e+02,   // 68
                                           -1.060422099347253e+02,  // 69
                                           8.455808008447852e+01,   // 70
                                           1.019313808797217e+02,   // 71
                                           7.343708279425041e+02,   // 72
                                           2.747744512747499e+02,   // 73
                                           1.391415238323804e+02,   // 74
                                           9.974555915534715e+01,   // 75
                                           1.780372548086515e+01,   // 76
                                           1.563599717301471e+02,   // 77
                                           -1.183998383208302e+02,  // 78
                                           4.479820262982544e+02,   // 79
                                           -1.442806417660177e+02,  // 80
                                           9.001358675570929e+02,   // 81
                                           9.346218025294310e+01,   // 82
                                           3.577600919107825e+01,   // 83
                                           1.261332991346341e+03,   // 84
                                           4.859598368732388e+02,   // 85
                                           -6.625265728758181e+01,  // 86
                                           1.377447757190179e+02,   // 87
                                           3.680479825945162e+02,   // 88
                                           4.436628436366820e+02,   // 89
                                           9.218626828778778e+02,   // 90
                                           -1.152531055485247e+01,  // 91
                                           -1.670380879739283e+02,  // 92
                                           8.480064231369435e+01,   // 93
                                           2.791891603119122e+02,   // 94
                                           -2.773976034380361e+01,  // 95
                                           1.385730416475244e+02,   // 96
                                           2.216699254674643e+02,   // 97
                                           8.600821636858377e+02,   // 98
                                           3.672683406207746e+02,   // 99
                                           1.155411018927246e+03,   // 100
                                           1.150369917132886e+02};  // 101
        m_k_x_intra_A_B_1 = 1.815814537293201e+00;                  // A^(-1))
        m_k_x_intra_B_B_1 = 5.000001376435821e-01;                  // A^(-1))
        m_ri = 7.000000000000000e+00;                               // A
        m_ro = 8.000000000000000e+00;                               // A

    }  // end if mon1 == "ano3"
    // =====>> END SECTION CONSTRUCTOR <<=====
}

//----------------------------------------------------------------------------//

double mbnrg_A1B3_deg5_v1::f_switch(const double r, double& g) {
    if (r > m_ro) {
        g = 0.0;
        return 0.0;
    } else if (r > m_ri) {
        const double t1 = M_PI / (m_ro - m_ri);
        const double x = (r - m_ri) * t1;
        g = -std::sin(x) * t1 / 2.0;
        return (1.0 + std::cos(x)) / 2.0;
    } else {
        g = 0.0;
        return 1.0;
    }
}

//----------------------------------------------------------------------------//

std::vector<double> mbnrg_A1B3_deg5_v1::eval(const double* xyz1, const size_t n) {
    std::vector<double> energies(n, 0.0);
    std::vector<double> energies_sw(n, 0.0);

    std::vector<double> xyz(12);
    double sw = 0.0;
    polynomial my_poly;

    for (size_t j = 0; j < n; j++) {
        const double* mon1 = xyz1 + 12 * j;

        if (false) {
            continue;
        }

        std::copy(mon1, mon1 + 12, xyz.begin() + 0);

        const double* coords_A_1_a = xyz.data() + 0;

        const double* coords_B_1_a = xyz.data() + 3;

        const double* coords_B_2_a = xyz.data() + 6;

        const double* coords_B_3_a = xyz.data() + 9;

        double w12 = -9.721486914088159e-02;  // from MBpol
        double w13 = -9.721486914088159e-02;
        double wcross = 9.859272078406150e-02;

        variable vs[6];

        double xs[6];

        xs[0] = vs[0].v_exp(m_k_x_intra_A_B_1, coords_A_1_a, coords_B_1_a);
        xs[1] = vs[1].v_exp(m_k_x_intra_A_B_1, coords_A_1_a, coords_B_2_a);
        xs[2] = vs[2].v_exp(m_k_x_intra_A_B_1, coords_A_1_a, coords_B_3_a);
        xs[3] = vs[3].v_exp(m_k_x_intra_B_B_1, coords_B_1_a, coords_B_2_a);
        xs[4] = vs[4].v_exp(m_k_x_intra_B_B_1, coords_B_1_a, coords_B_3_a);
        xs[5] = vs[5].v_exp(m_k_x_intra_B_B_1, coords_B_2_a, coords_B_3_a);

        sw = 1.0;

        energies[j] = my_poly.eval(xs, coefficients.data());
        energies_sw[j] = energies[j] * sw;
    }
    return energies_sw;
}

//----------------------------------------------------------------------------//

std::vector<double> mbnrg_A1B3_deg5_v1::eval(const double* xyz1, double* grad1, const size_t n,
                                             std::vector<double>* virial) {
    std::vector<double> energies(n, 0.0);
    std::vector<double> energies_sw(n, 0.0);

    std::vector<double> xyz(12);
    double sw = 0.0;
    polynomial my_poly;

    for (size_t j = 0; j < n; j++) {
        const double* mon1 = xyz1 + 12 * j;

        if (false) {
            continue;
        }

        std::vector<double> gradients(12, 0.0);

        std::copy(mon1, mon1 + 12, xyz.begin() + 0);
        const double* coords_A_1_a = xyz.data() + 0;

        const double* coords_B_1_a = xyz.data() + 3;

        const double* coords_B_2_a = xyz.data() + 6;

        const double* coords_B_3_a = xyz.data() + 9;

        double* coords_A_1_a_g = gradients.data() + 0;

        double* coords_B_1_a_g = gradients.data() + 3;

        double* coords_B_2_a_g = gradients.data() + 6;

        double* coords_B_3_a_g = gradients.data() + 9;

        double w12 = -9.721486914088159e-02;  // from MBpol
        double w13 = -9.721486914088159e-02;
        double wcross = 9.859272078406150e-02;

        variable vs[6];

        double xs[6];

        double gxs[6];

        xs[0] = vs[0].v_exp(m_k_x_intra_A_B_1, coords_A_1_a, coords_B_1_a);
        xs[1] = vs[1].v_exp(m_k_x_intra_A_B_1, coords_A_1_a, coords_B_2_a);
        xs[2] = vs[2].v_exp(m_k_x_intra_A_B_1, coords_A_1_a, coords_B_3_a);
        xs[3] = vs[3].v_exp(m_k_x_intra_B_B_1, coords_B_1_a, coords_B_2_a);
        xs[4] = vs[4].v_exp(m_k_x_intra_B_B_1, coords_B_1_a, coords_B_3_a);
        xs[5] = vs[5].v_exp(m_k_x_intra_B_B_1, coords_B_2_a, coords_B_3_a);

        sw = 1.0;

        energies[j] = my_poly.eval(xs, coefficients.data(), gxs);
        energies_sw[j] = energies[j] * sw;

        for (size_t i = 0; i < 6; i++) {
            gxs[i] *= sw;
        }

        vs[0].grads(gxs[0], coords_A_1_a_g, coords_B_1_a_g, coords_A_1_a, coords_B_1_a);
        vs[1].grads(gxs[1], coords_A_1_a_g, coords_B_2_a_g, coords_A_1_a, coords_B_2_a);
        vs[2].grads(gxs[2], coords_A_1_a_g, coords_B_3_a_g, coords_A_1_a, coords_B_3_a);
        vs[3].grads(gxs[3], coords_B_1_a_g, coords_B_2_a_g, coords_B_1_a, coords_B_2_a);
        vs[4].grads(gxs[4], coords_B_1_a_g, coords_B_3_a_g, coords_B_1_a, coords_B_3_a);
        vs[5].grads(gxs[5], coords_B_2_a_g, coords_B_3_a_g, coords_B_2_a, coords_B_3_a);

        for (size_t i = 0; i < 3; i++) {
            gradients[0 + i] += 0.0;
        }

        for (size_t i = 0; i < 12; i++) {
            grad1[i + j * 12] += gradients[0 + i];
        }

        if (virial != 0) {
            (*virial)[0] += -coords_A_1_a[0] * coords_A_1_a_g[0] - coords_B_1_a[0] * coords_B_1_a_g[0] -
                            coords_B_2_a[0] * coords_B_2_a_g[0] - coords_B_3_a[0] * coords_B_3_a_g[0];

            (*virial)[1] += -coords_A_1_a[0] * coords_A_1_a_g[1] - coords_B_1_a[0] * coords_B_1_a_g[1] -
                            coords_B_2_a[0] * coords_B_2_a_g[1] - coords_B_3_a[0] * coords_B_3_a_g[1];

            (*virial)[2] += -coords_A_1_a[0] * coords_A_1_a_g[2] - coords_B_1_a[0] * coords_B_1_a_g[2] -
                            coords_B_2_a[0] * coords_B_2_a_g[2] - coords_B_3_a[0] * coords_B_3_a_g[2];

            (*virial)[4] += -coords_A_1_a[1] * coords_A_1_a_g[1] - coords_B_1_a[1] * coords_B_1_a_g[1] -
                            coords_B_2_a[1] * coords_B_2_a_g[1] - coords_B_3_a[1] * coords_B_3_a_g[1];

            (*virial)[5] += -coords_A_1_a[1] * coords_A_1_a_g[2] - coords_B_1_a[1] * coords_B_1_a_g[2] -
                            coords_B_2_a[1] * coords_B_2_a_g[2] - coords_B_3_a[1] * coords_B_3_a_g[2];

            (*virial)[8] += -coords_A_1_a[2] * coords_A_1_a_g[2] - coords_B_1_a[2] * coords_B_1_a_g[2] -
                            coords_B_2_a[2] * coords_B_2_a_g[2] - coords_B_3_a[2] * coords_B_3_a_g[2];

            (*virial)[3] = (*virial)[1];
            (*virial)[6] = (*virial)[2];
            (*virial)[7] = (*virial)[5];
        }
    }
    return energies_sw;
}

//----------------------------------------------------------------------------//
}  // namespace mbnrg_A1B3_deg5
