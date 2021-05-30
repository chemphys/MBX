#include "mbnrg_1b_A1B3_deg5_v1.h"

////////////////////////////////////////////////////////////////////////////////

namespace mbnrg_A1B3_deg5 {

mbnrg_A1B3_deg5_v1::mbnrg_A1B3_deg5_v1(const std::string mon1) {
    // =====>> BEGIN SECTION CONSTRUCTOR <<=====
    // =>> PASTE RIGHT BELOW THIS LINE <==

    if (mon1 == "co3a") {
        coefficients = std::vector<double>{8.841302856866938e+02,   // 0
                                           9.043572709444891e+01,   // 1
                                           1.591320124912477e+03,   // 2
                                           -6.838956511139228e+02,  // 3
                                           -3.379115496134538e+03,  // 4
                                           1.316341003687232e+03,   // 5
                                           7.761941043112726e+02,   // 6
                                           -1.084288036113443e+03,  // 7
                                           -2.831187194594751e+03,  // 8
                                           -6.653478747276790e+02,  // 9
                                           -1.446360267116640e+03,  // 10
                                           1.976910862136953e+02,   // 11
                                           3.797500216687935e+02,   // 12
                                           1.057284685791783e+03,   // 13
                                           2.506663334470786e+02,   // 14
                                           -1.385143217838335e+03,  // 15
                                           -2.014146025601908e+03,  // 16
                                           -2.238381466370363e+02,  // 17
                                           -8.959760441216688e+02,  // 18
                                           8.280487047982635e+02,   // 19
                                           5.247092334873332e+02,   // 20
                                           2.942401062345086e+02,   // 21
                                           -3.076623780717746e+02,  // 22
                                           3.056616713131007e+02,   // 23
                                           2.952975533441213e+03,   // 24
                                           -4.244494885982469e+02,  // 25
                                           -2.959705788356696e+02,  // 26
                                           -6.884244779345022e+02,  // 27
                                           -7.496192521804253e+02,  // 28
                                           -1.051791703038803e+03,  // 29
                                           -3.447233265335787e+02,  // 30
                                           -9.020219835675027e+02,  // 31
                                           1.852149296738415e+02,   // 32
                                           -7.015511479423901e+02,  // 33
                                           -5.992792611706361e+01,  // 34
                                           -5.590133854257195e+01,  // 35
                                           -7.925333083384164e+02,  // 36
                                           -5.363714786786418e+02,  // 37
                                           3.289887291114466e+03,   // 38
                                           1.704032360452540e+02,   // 39
                                           8.221587087547312e+02,   // 40
                                           1.192656183971539e+03,   // 41
                                           -9.702512187738070e+02,  // 42
                                           5.001606595380489e+01,   // 43
                                           7.735549393826021e+01,   // 44
                                           7.187776514534631e+02,   // 45
                                           1.456062406433992e+02,   // 46
                                           -1.993565401704888e+03,  // 47
                                           2.291571580126240e+02,   // 48
                                           3.659979633739802e+02,   // 49
                                           -9.416356561384353e+01,  // 50
                                           3.303033542447444e+03,   // 51
                                           1.242704151862689e+02,   // 52
                                           -4.417672393521402e+02,  // 53
                                           7.420912653571834e+02,   // 54
                                           -5.911516407930044e+02,  // 55
                                           3.041843802918156e+03,   // 56
                                           -3.513223640195200e+02,  // 57
                                           4.320945777382013e+02,   // 58
                                           4.725483479535739e+02,   // 59
                                           2.259615505601546e+02,   // 60
                                           1.248606679900937e+02,   // 61
                                           -2.643085758267734e+02,  // 62
                                           -1.610746576904568e+02,  // 63
                                           5.238479562101998e+01,   // 64
                                           4.489478908902548e+02,   // 65
                                           8.713408971240193e+01,   // 66
                                           -2.258333696067239e+02,  // 67
                                           7.694051980472893e+02,   // 68
                                           2.434594086335100e+02,   // 69
                                           -3.356838571416462e+02,  // 70
                                           -5.583858504934625e+02,  // 71
                                           2.079312343873731e+03,   // 72
                                           -2.043872781126846e+02,  // 73
                                           -7.493054760635854e+02,  // 74
                                           1.709104931218317e+03,   // 75
                                           -2.392321095936440e+02,  // 76
                                           -3.704355437234138e+02,  // 77
                                           3.769184414027737e+02,   // 78
                                           5.015367653117223e+03,   // 79
                                           -3.398876613328639e+02,  // 80
                                           -4.133742616917520e+02,  // 81
                                           -2.259652593645667e+02,  // 82
                                           -1.572234607099994e+02,  // 83
                                           6.007875648997469e+02,   // 84
                                           -7.550139328650090e+02,  // 85
                                           6.397157001280932e+02,   // 86
                                           7.526101533141713e+02,   // 87
                                           -3.668101847443272e+02,  // 88
                                           1.554621871067719e+03,   // 89
                                           2.092630213077106e+03,   // 90
                                           -7.193955166364202e+01,  // 91
                                           -6.667581375527254e+01,  // 92
                                           -4.196695310157288e+02,  // 93
                                           -5.021120562668347e+02,  // 94
                                           -2.570957382429003e+01,  // 95
                                           3.249480428983936e+02,   // 96
                                           1.967816336506238e+03,   // 97
                                           5.581282463484592e+01,   // 98
                                           1.278903184840985e+03,   // 99
                                           1.358020725801366e+03,   // 100
                                           3.027967858650829e+03};  // 101
        m_k_x_intra_A_B_1 = 9.404859654848743e-01;                  // A^(-1))
        m_k_x_intra_B_B_1 = 2.463796011189977e-01;                  // A^(-1))
        m_ri = 6.000000000000000e+00;                               // A
        m_ro = 8.000000000000000e+00;                               // A

    }  // end if mon1 == "co3a"
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
