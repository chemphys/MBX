#include "mbnrg_1b_A1B3_deg6_v1.h"

////////////////////////////////////////////////////////////////////////////////

namespace mbnrg_A1B3_deg6 {

mbnrg_A1B3_deg6_v1::mbnrg_A1B3_deg6_v1(const std::string mon1) {

    // =====>> BEGIN SECTION CONSTRUCTOR <<=====
    // =>> PASTE RIGHT BELOW THIS LINE <==


    if (mon1 == "nh3") {
        coefficients = std::vector<double> {
             7.959428381588533e+02, // 0
            -7.936970471949824e+02, // 1
             1.391398453623478e+02, // 2
             8.974559086746142e+02, // 3
            -6.029927885426113e+02, // 4
            -2.275630311474466e+02, // 5
             9.662638944092529e+02, // 6
            -1.935133742498851e+02, // 7
            -1.613298560394180e+03, // 8
             1.956979373759134e+03, // 9
            -3.839088018625010e+02, // 10
             6.962068073016800e+02, // 11
             3.726473820879251e+02, // 12
            -7.599325332301656e+02, // 13
             2.342430912944919e+02, // 14
            -3.824858841738849e+02, // 15
            -8.632700906952846e+01, // 16
            -3.653631324744230e+02, // 17
            -8.147604375208442e+02, // 18
             1.148327227225606e+02, // 19
             5.300692616368455e+02, // 20
            -2.052101084357987e+02, // 21
            -7.996971954728820e+02, // 22
             7.960293721522983e+00, // 23
            -1.562266054238378e+03, // 24
            -8.775637849754009e+02, // 25
             5.882665055146769e+02, // 26
            -2.116119119632936e+02, // 27
            -3.479968461591919e+02, // 28
            -3.632041075810665e+01, // 29
            -3.917087898550940e+02, // 30
            -1.585796855809221e+03, // 31
             2.185231315897256e+02, // 32
            -7.576215962836527e+02, // 33
             1.061413200961287e+02, // 34
            -3.835553864278393e+02, // 35
            -5.206334660161232e+02, // 36
            -5.040589539562462e+02, // 37
             2.336443851777920e+02, // 38
             8.729306270417050e+02, // 39
            -3.637935960589595e+02, // 40
             4.129384013412331e+02, // 41
            -9.696213587814503e+01, // 42
            -1.411529219430912e+03, // 43
             4.368800340895966e+02, // 44
             9.489297313655055e+02, // 45
             4.140049534128245e+02, // 46
             3.896457805651206e+02, // 47
             1.091414140871763e+03, // 48
            -3.017630677010754e+02, // 49
            -4.161607517327649e+02, // 50
             5.449918996010229e+02, // 51
            -9.881705312751353e+01, // 52
             5.183357223790489e+02, // 53
            -3.494618595929877e+02, // 54
            -1.467351291272950e+02, // 55
            -2.813036166446153e+02, // 56
            -1.126801225438534e+03, // 57
            -2.682448663864606e+01, // 58
             9.340495486650227e+02, // 59
             6.138961814452615e+01, // 60
             6.793638654129653e+01, // 61
            -5.862673684266672e+02, // 62
            -2.656422135979641e+02, // 63
            -5.035653669982725e+02, // 64
            -1.167971969683466e+02, // 65
             6.623246061567518e+02, // 66
            -2.184168734593660e+02, // 67
             5.237127504757711e+02, // 68
             3.009155834172839e+02, // 69
            -9.408720591697896e+02, // 70
             4.323813672055819e+02, // 71
            -5.136525789018212e+02, // 72
            -5.458790057543921e+02, // 73
             3.962055239337301e+02, // 74
             7.980337824735840e+02, // 75
            -7.939086227594124e+02, // 76
            -2.264829877017151e+02, // 77
             6.957232851841787e+02, // 78
            -3.597728220697485e+02, // 79
             1.798800689955849e+02, // 80
            -1.721675785642332e+01, // 81
             1.014436739810151e+02, // 82
            -8.107200526330931e+01, // 83
            -1.320833674486028e+03, // 84
            -6.523796363642372e+02, // 85
             2.501134257274669e+02, // 86
            -1.326350087660976e+03, // 87
            -5.302729631717418e+01, // 88
             2.226579727440813e+02, // 89
             7.422388275858822e+02, // 90
            -5.824256652927371e+00, // 91
             2.780692623859730e+02, // 92
            -6.630476807662873e+02, // 93
            -3.076665861892436e+02, // 94
            -1.892443098068121e+01, // 95
             1.402423732448024e+01, // 96
             1.289608955261471e+02, // 97
            -5.516773928330332e+01, // 98
            -6.501541367126382e+02, // 99
            -5.779514379388008e+02, // 100
             1.502287568933595e+03, // 101
             6.896217223377877e+01, // 102
            -8.469152526691828e+01, // 103
            -5.934727477754975e+02, // 104
             1.587783983678904e+02, // 105
            -5.242604130782603e+01, // 106
            -5.949569280823852e+01, // 107
            -1.571162859528507e+02, // 108
             3.914828545155790e+02, // 109
             2.259261736503623e+02, // 110
             8.165476343033077e+01, // 111
            -3.269364873415852e+02, // 112
             1.118440225301472e+02, // 113
             1.730846580555289e+02, // 114
            -4.515768025747787e+02, // 115
            -4.353640991704068e+02, // 116
            -7.532713367295685e+00, // 117
             5.688192282074872e+02, // 118
            -1.371186945512911e+02, // 119
             5.412124804533039e+02, // 120
            -2.217344059226158e+02, // 121
             7.130576704983454e+02, // 122
            -1.505161351543966e+02, // 123
            -4.705574754168882e+01, // 124
             3.867255244825874e+02, // 125
            -1.404926465385182e+02, // 126
             6.415273665909768e+01, // 127
             4.237338928975529e+02, // 128
             8.612180891983338e+02, // 129
             3.764879047008758e+02, // 130
            -5.902807695809897e+01, // 131
             8.119083875753812e+02, // 132
            -3.049274263629496e+02, // 133
             7.098026253835989e+00, // 134
             1.713108125017774e+02, // 135
            -2.595156471201737e+02, // 136
             6.251984244880766e+02, // 137
            -3.190689098840665e+01, // 138
            -1.831734812456904e+02, // 139
             6.597040591391168e+02, // 140
            -6.967682894901546e+01, // 141
             7.334086864728870e+02, // 142
             2.342178984278171e+02, // 143
            -7.024487959039591e+02, // 144
            -2.122985631438763e+01, // 145
            -1.083049135660264e+03, // 146
            -7.650522479061337e+02, // 147
             1.494678613051450e+02, // 148
            -3.848002990407073e+02, // 149
            -4.272453414784806e+02, // 150
            -4.677649785453171e+02, // 151
            -4.920727643929802e+02, // 152
             3.742365969925044e+02, // 153
             5.120815030090156e+02, // 154
            -8.526338329461444e+02, // 155
             5.829203950868553e+02, // 156
             1.495442030529790e+02, // 157
             3.067998520023985e+02, // 158
             6.385315414492055e+01, // 159
             3.605502767236659e+02, // 160
            -1.862084909267094e+02, // 161
             4.229576148613210e+02, // 162
             3.705180910246096e+02, // 163
             3.782978838675128e+02, // 164
            -2.986174514545934e+02, // 165
             4.256275770881953e+02, // 166
            -3.909370862171744e+02, // 167
             1.062101271774333e+03, // 168
             3.813281338999461e+02, // 169
             2.630014321268576e+02, // 170
            -2.458712817915661e+02, // 171
            -5.004744751246988e+02, // 172
             5.491017048398161e+02, // 173
            -2.879665543535090e+02, // 174
             2.179450622695338e+02, // 175
             5.206790211035321e+02, // 176
            -1.602028476123457e+02, // 177
            -4.722100330286171e+02, // 178
             1.854338650628891e+02, // 179
            -3.828373120195785e+02, // 180
            -7.494347121291200e+01, // 181
             2.160513066913891e+03, // 182
            -2.045550323418114e+02, // 183
             2.477213918658328e+03, // 184
             1.152729042686758e+02, // 185
            -4.344557044834225e+01, // 186
             1.320936774151422e+02, // 187
             2.946271619483868e+01, // 188
             1.988872402904101e+02, // 189
             2.126070792577683e+02, // 190
            -5.659696079912715e+01, // 191
             5.440303033227402e+02, // 192
            -8.789101065373289e+01, // 193
            -7.535819212987710e+02}; // 194
    m_k_x_intra_A_B_1 =  5.885513926151817e-01; // A^(-1))
    m_k_x_intra_B_B_1 =  5.000000889000804e-01; // A^(-1))
    m_ri =  7.000000000000000e+00; // A
    m_ro =  8.000000000000000e+00; // A

    } // end if mon1 == "nh3"
    // =====>> END SECTION CONSTRUCTOR <<=====
}

//----------------------------------------------------------------------------//

double mbnrg_A1B3_deg6_v1::f_switch(const double r, double& g)
{
    if (r > m_ro) {
        g = 0.0;
        return 0.0;
    } else if (r > m_ri) {
        const double t1 = M_PI/(m_ro - m_ri);
        const double x = (r - m_ri)*t1;
        g = - std::sin(x)*t1/2.0;
        return (1.0 + std::cos(x))/2.0;
    } else {
        g = 0.0;
        return 1.0;
    }
}

//----------------------------------------------------------------------------//

 std::vector<double> mbnrg_A1B3_deg6_v1::eval(const double *xyz1, const size_t n) {
    std::vector<double> energies(n,0.0);
    std::vector<double> energies_sw(n,0.0);

    std::vector<double> xyz(12); 
    double sw = 0.0;
    polynomial my_poly;

    for (size_t j = 0; j < n; j++) {
        const double *mon1 = xyz1 + 12*j;


        if (false ) {
             continue;
        }

        std::copy(mon1, mon1 + 12, xyz.begin() + 0);


        const double* coords_A_1_a = xyz.data() + 0;

        const double* coords_B_1_a = xyz.data() + 3;

        const double* coords_B_2_a = xyz.data() + 6;

        const double* coords_B_3_a = xyz.data() + 9;


        double w12 =     -9.721486914088159e-02;  //from MBpol
        double w13 =     -9.721486914088159e-02;
        double wcross =   9.859272078406150e-02;

    
        variable vs[6];

        double xs[6];

        xs[0] = vs[0].v_exp(m_k_x_intra_A_B_1, coords_A_1_a, coords_B_1_a);
        xs[1] = vs[1].v_exp(m_k_x_intra_A_B_1, coords_A_1_a, coords_B_2_a);
        xs[2] = vs[2].v_exp(m_k_x_intra_A_B_1, coords_A_1_a, coords_B_3_a);
        xs[3] = vs[3].v_exp(m_k_x_intra_B_B_1, coords_B_1_a, coords_B_2_a);
        xs[4] = vs[4].v_exp(m_k_x_intra_B_B_1, coords_B_1_a, coords_B_3_a);
        xs[5] = vs[5].v_exp(m_k_x_intra_B_B_1, coords_B_2_a, coords_B_3_a);


        sw = 1.0;

        energies[j] = my_poly.eval(xs,coefficients.data());
        energies_sw[j] = energies[j]*sw;

    }
    return energies_sw;

}

//----------------------------------------------------------------------------//

std::vector<double> mbnrg_A1B3_deg6_v1::eval(const double *xyz1, double *grad1 , const size_t n) {
    std::vector<double> energies(n,0.0);
    std::vector<double> energies_sw(n,0.0);

    std::vector<double> xyz(12); 
    double sw = 0.0;
    polynomial my_poly;

    for (size_t j = 0; j < n; j++) {
        const double *mon1 = xyz1 + 12*j;


        if (false ) {
             continue;
        }

        std::vector<double> gradients(12,0.0);

        std::copy(mon1, mon1 + 12, xyz.begin() + 0);
        const double* coords_A_1_a = xyz.data() + 0;

        const double* coords_B_1_a = xyz.data() + 3;

        const double* coords_B_2_a = xyz.data() + 6;

        const double* coords_B_3_a = xyz.data() + 9;


        double* coords_A_1_a_g = gradients.data() + 0;

        double* coords_B_1_a_g = gradients.data() + 3;

        double* coords_B_2_a_g = gradients.data() + 6;

        double* coords_B_3_a_g = gradients.data() + 9;



        double w12 =     -9.721486914088159e-02;  //from MBpol
        double w13 =     -9.721486914088159e-02;
        double wcross =   9.859272078406150e-02;

    
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

        energies[j] = my_poly.eval(xs,coefficients.data(),gxs);
        energies_sw[j] = energies[j]*sw;

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
            gradients[0 + i] += 0.0 ;
        }


        for (size_t i = 0; i < 12; i++) {
            grad1[i + j*12] += gradients[0 + i];
        }


    }
    return energies_sw;

}

//----------------------------------------------------------------------------//
} // namespace mbnrg_A1B3_deg6
