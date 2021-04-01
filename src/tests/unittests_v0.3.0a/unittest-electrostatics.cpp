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

#include "tools/testutils.h"

#include "potential/electrostatics/electrostatics.h"
#include "tools/math_tools.h"
#include "setup_monomer_mix.h"
#include "json/json.h"

#include <vector>
#include <iostream>
#include <iomanip>
#include <random>
#include <cmath>
#include <utility>

constexpr double TOL = 1E-6;

std::vector<double> chg = {7.0602700000e-01, -3.5301350000e-01, -3.5301350000e-01, -1.0000000000e+00,
                           0.0000000000e+00, 5.9876992622e-01,  5.9876992679e-01,  -1.1975398530e+00,
                           0.0000000000e+00, 5.8639592027e-01,  5.8639592156e-01,  -1.1727918418e+00,
                           0.0000000000e+00, 5.8639591954e-01,  5.8639591987e-01,  -1.1727918394e+00};

std::vector<double> chg_grad = {
    -1.9040711750e-01, -4.7529900389e-02, 3.1098570197e-02,  -1.0418089900e-01, -5.3351273039e-02, 3.9036659208e-02,
    2.9458801649e-01,  1.0088117343e-01,  -7.0135229406e-02, -4.1663776414e-02, -9.1216434033e-02, 7.1885820762e-02,
    -1.3554183683e-02, -1.5464558539e-01, 1.2402463639e-01,  5.5217960097e-02,  2.4586201943e-01,  -1.9591045715e-01,
    2.3207089391e-01,  1.3874633442e-01,  -1.0298439096e-01, 1.1773508268e-01,  2.0799685843e-01,  -1.6306129559e-01,
    -3.4980597659e-01, -3.4674319286e-01, 2.6604568655e-01,  -1.9073305635e-01, -5.7624631175e-02, -3.9215535777e-02,
    -8.0449950373e-02, -5.6483280224e-02, -4.2453353590e-02, 2.7118300672e-01,  1.1410791140e-01,  8.1668889366e-02,
    -4.1733850419e-02, -7.7562002231e-02, -6.0887314328e-02, -5.9964726090e-03, -1.5820321163e-01, -1.2717445613e-01,
    4.7730323027e-02,  2.3576521386e-01,  1.8806177046e-01,  2.3246690677e-01,  1.3518663341e-01,  1.0010285010e-01,
    8.6446422982e-02,  2.1468649185e-01,  1.6962780972e-01,  -3.1891332975e-01, -3.4987312526e-01, -2.6973065983e-01,
    -1.9008601477e-01, -7.1448322370e-02, -0.0000000000e+00, -7.9749482371e-02, -7.1448321609e-02, -0.0000000000e+00,
    2.6983549714e-01,  1.4289664398e-01,  0.0000000000e+00,  -4.0729229389e-02, -9.9025111367e-02, -0.0000000000e+00,
    -3.8981376274e-03, -2.0303290512e-01, -0.0000000000e+00, 4.4627367017e-02,  3.0205801648e-01,  0.0000000000e+00,
    2.3081524416e-01,  1.7047343374e-01,  0.0000000000e+00,  8.3647619998e-02,  2.7448122672e-01,  0.0000000000e+00,
    -3.1446286416e-01, -4.4495466046e-01, -0.0000000000e+00};

std::vector<double> polfac = {1.4716770000e+00, 7.6979000000e-01, 7.6979000000e-01, 2.4669000000e+00,
                              1.3100000000e+00, 2.9400000000e-01, 2.9400000000e-01, 1.3100000000e+00,
                              1.3100000000e+00, 2.9400000000e-01, 2.9400000000e-01, 1.3100000000e+00,
                              1.3100000000e+00, 2.9400000000e-01, 2.9400000000e-01, 1.3100000000e+00};

std::vector<double> pol = {1.4716770000e+00, 7.6979000000e-01, 7.6979000000e-01, 2.4669000000e+00,
                           1.3100000000e+00, 2.9400000000e-01, 2.9400000000e-01, 0.0000000000e+00,
                           1.3100000000e+00, 2.9400000000e-01, 2.9400000000e-01, 0.0000000000e+00,
                           1.3100000000e+00, 2.9400000000e-01, 2.9400000000e-01, 0.0000000000e+00};

std::vector<double> sys_xyz = {
    -1.4243133388e+00, 7.7214187430e-01, -4.3329941557e+00, -2.4475497469e+00, 1.2692755042e+00, -4.0709757555e+00,
    -4.0159255460e-01, 2.6460559090e-01, -4.5998516399e+00, -1.3248347200e+00, 5.3532195400e+00, 2.0794472700e+00,
    -1.5897242500e+00, 1.0433792200e+00, -8.7808400000e-02, -6.3591971000e-01, 9.7898520000e-01, 0.0000000000e+00,
    -1.9006628000e+00, 1.7450105000e+00, -6.6454990000e-01, -1.4525665789e+00, 1.1793359822e+00, -1.9212395930e-01,
    1.6492450700e+00,  1.0859465600e+00, 0.0000000000e+00,  2.6087802600e+00,  1.0958770400e+00, -2.8171150000e-02,
    1.3383065300e+00,  1.7875778400e+00, 5.7674150000e-01,  1.7876253971e+00,  1.2377607100e+00, 1.1703937180e-01,
    -6.1315209000e-01, 2.4697633600e+00, 2.0700508600e+00,  3.4684791000e-01,  2.4697633600e+00, 2.0700508600e+00,
    -9.3360667000e-01, 3.3746991900e+00, 2.0700508600e+00,  -4.7670287397e-01, 2.6628345332e+00, 2.0700508600e+00};

std::vector<std::string> mon_id = {"co2", "f", "h2o", "h2o", "h2o"};

std::vector<size_t> sites = {3, 1, 4, 4, 4};

std::vector<std::pair<std::string, size_t>> mon_type_count = {{"co2", 1}, {"f", 1}, {"h2o", 3}};

std::vector<size_t> first_ind = {0, 3, 4, 8, 12};

std::vector<size_t> islocal = {1, 1, 1, 1, 1};

std::vector<int> sys_atom_tag = {0, 1, 2, 0, 0, 1, 2, 0, 0, 1, 2, 0, 0, 1, 2, 0};

bool do_grads = true;

double tol = 1E-16;

size_t maxit = 100;

std::string dip_method = "cg";

std::vector<double> box = {};

TEST_CASE("electrostatics::Initialize") {
    std::vector<double> internal_xyz_expected = {
        -1.4243133388e+00, 7.7214187430e-01, -4.3329941557e+00, -2.4475497469e+00, 1.2692755042e+00,  -4.0709757555e+00,
        -4.0159255460e-01, 2.6460559090e-01, -4.5998516399e+00, -1.3248347200e+00, 5.3532195400e+00,  2.0794472700e+00,
        -1.5897242500e+00, 1.6492450700e+00, -6.1315209000e-01, 1.0433792200e+00,  1.0859465600e+00,  2.4697633600e+00,
        -8.7808400000e-02, 0.0000000000e+00, 2.0700508600e+00,  -6.3591971000e-01, 2.6087802600e+00,  3.4684791000e-01,
        9.7898520000e-01,  1.0958770400e+00, 2.4697633600e+00,  0.0000000000e+00,  -2.8171150000e-02, 2.0700508600e+00,
        -1.9006628000e+00, 1.3383065300e+00, -9.3360667000e-01, 1.7450105000e+00,  1.7875778400e+00,  3.3746991900e+00,
        -6.6454990000e-01, 5.7674150000e-01, 2.0700508600e+00,  -1.4525665789e+00, 1.7876253971e+00,  -4.7670287397e-01,
        1.1793359822e+00,  1.2377607100e+00, 2.6628345332e+00,  -1.9212395930e-01, 1.1703937180e-01,  2.0700508600e+00};

    std::vector<double> internal_charge_expected = {
        7.0602700000e-01, -3.5301350000e-01, -3.5301350000e-01, -1.0000000000e+00, 0.0000000000e+00, 0.0000000000e+00,
        0.0000000000e+00, 5.9876992622e-01,  5.8639592027e-01,  5.8639591954e-01,  5.9876992679e-01, 5.8639592156e-01,
        5.8639591987e-01, -1.1975398530e+00, -1.1727918418e+00, -1.1727918394e+00};

    std::vector<double> internal_pol_sqrt_expected = {
        1.2131269513e+00, 1.2131269513e+00, 1.2131269513e+00, 8.7737677197e-01, 8.7737677197e-01, 8.7737677197e-01,
        8.7737677197e-01, 8.7737677197e-01, 8.7737677197e-01, 1.5706368135e+00, 1.5706368135e+00, 1.5706368135e+00,
        1.1445523142e+00, 1.1445523142e+00, 1.1445523142e+00, 1.1445523142e+00, 1.1445523142e+00, 1.1445523142e+00,
        1.1445523142e+00, 1.1445523142e+00, 1.1445523142e+00, 5.4221766847e-01, 5.4221766847e-01, 5.4221766847e-01,
        5.4221766847e-01, 5.4221766847e-01, 5.4221766847e-01, 5.4221766847e-01, 5.4221766847e-01, 5.4221766847e-01,
        5.4221766847e-01, 5.4221766847e-01, 5.4221766847e-01, 5.4221766847e-01, 5.4221766847e-01, 5.4221766847e-01,
        5.4221766847e-01, 5.4221766847e-01, 5.4221766847e-01, 0.0000000000e+00, 0.0000000000e+00, 0.0000000000e+00,
        0.0000000000e+00, 0.0000000000e+00, 0.0000000000e+00, 0.0000000000e+00, 0.0000000000e+00, 0.0000000000e+00};

    std::vector<size_t> internal_islocal_atom_expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    std::vector<size_t> internal_islocal_atom_xyz_expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
                                                              1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
                                                              1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

    std::vector<int> internal_atom_tag_expected = {0, 1, 2, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 0, 0, 0};

    std::vector<double> box_ABCabc = box.size() ? BoxVecToBoxABCabc(box) : std::vector<double>{};
    std::vector<double> box_inverse = box.size() ? InvertUnitCell(box) : std::vector<double>{};

    // Declare and initialize electrostatics
    elec::Electrostatics d;
    d.Initialize(chg, chg_grad, polfac, pol, sys_xyz, mon_id, sites, first_ind, mon_type_count, islocal, sys_atom_tag,
                 do_grads, tol, maxit, dip_method, box);

    // Get everything and ensure that is correct
    std::vector<size_t> getislocal = d.GetSysIsLocal();
    std::vector<std::string> getmonids = d.GetMonIds();
    std::vector<size_t> getsites = d.GetSitesVector();
    std::vector<std::pair<std::string, size_t>> getmontypecount = d.GetMonTypeCount();
    bool getdograds = d.GetDoGrads();
    std::vector<double> getbox = d.GetBox();
    std::vector<double> getboxabc = d.GetBoxAbc();
    std::vector<double> getboxinverse = d.GetBoxInverse();
    std::vector<double> getsysxyz = d.GetSysXyz();
    std::vector<double> getchg = d.GetSysChg();
    std::vector<double> getchggrad = d.GetSysChgGrad();
    std::vector<double> getpolfac = d.GetSysPolfacs();
    std::vector<double> getpol = d.GetSysPols();
    std::vector<size_t> getfirstindex = d.GetFirstIndex();
    std::vector<int> getsysatomtag = d.GetSysAtomTag();
    double gettol = d.GetDipoleTolerance();
    size_t getmaxit = d.GetDipoleMaxIt();
    std::string getdipmethod = d.GetDipoleConvergenceMethod();

    std::vector<double> getinternalxyz = d.GetInternalXyz();
    std::vector<double> getinternalchg = d.GetInternalChg();
    std::vector<double> getinternalpolsqrt = d.GetInternalPolSqrt();
    std::vector<size_t> getinternalislocalatom = d.GetInternalIsLocalAtom();
    std::vector<size_t> getinternalislocalatomxyz = d.GetInternalIsLocalAtomXyz();
    std::vector<int> getinternalatomtag = d.GetInternalAtomTag();

    // Require that everything matches what is expected
    REQUIRE(getdograds == do_grads);
    REQUIRE(VectorsAreEqual(getislocal, islocal));
    REQUIRE(VectorsAreEqual(getmonids, mon_id));
    REQUIRE(VectorsAreEqual(getsites, sites));
    REQUIRE(VectorsAreEqual(getmontypecount, mon_type_count));
    REQUIRE(VectorsAreEqual(getbox, box, TOL));
    REQUIRE(VectorsAreEqual(getboxabc, box_ABCabc, TOL));
    REQUIRE(VectorsAreEqual(getboxinverse, box_inverse, TOL));
    REQUIRE(VectorsAreEqual(getsysxyz, sys_xyz, TOL));
    REQUIRE(VectorsAreEqual(getchg, chg, TOL));
    REQUIRE(VectorsAreEqual(getchggrad, chg_grad, TOL));
    REQUIRE(VectorsAreEqual(getpolfac, polfac, TOL));
    REQUIRE(VectorsAreEqual(getpol, pol, TOL));
    REQUIRE(VectorsAreEqual(getfirstindex, first_ind));
    REQUIRE(VectorsAreEqual(getsysatomtag, sys_atom_tag));
    REQUIRE(gettol == tol);
    REQUIRE(getmaxit == maxit);
    REQUIRE(getdipmethod == dip_method);
    REQUIRE(VectorsAreEqual(getinternalxyz, internal_xyz_expected, TOL));
    REQUIRE(VectorsAreEqual(getinternalchg, internal_charge_expected, TOL));
    REQUIRE(VectorsAreEqual(getinternalpolsqrt, internal_pol_sqrt_expected, TOL));
    REQUIRE(VectorsAreEqual(getinternalislocalatom, internal_islocal_atom_expected));
    REQUIRE(VectorsAreEqual(getinternalislocalatomxyz, internal_islocal_atom_xyz_expected));
    REQUIRE(VectorsAreEqual(getinternalatomtag, internal_atom_tag_expected));
}

TEST_CASE("electrostatics::SetNewParameters") {
    // Declare and initialize electrostatics
    elec::Electrostatics d;
    d.Initialize(chg, chg_grad, polfac, pol, sys_xyz, mon_id, sites, first_ind, mon_type_count, islocal, sys_atom_tag,
                 do_grads, tol, maxit, dip_method, box);

    box = {20.0, 0.0, 0.0, 2.0, 21.0, 0.0, 1.0, 3.0, 19.0};
    do_grads = false;
    double cutoff = 8.0;
    for (size_t i = 0; i < sys_xyz.size(); i++) sys_xyz[i] += 0.002 * double(i);
    for (size_t i = 0; i < chg.size(); i++) chg[i] += 0.002 * (double(i) - 0.1);
    pol[0] = 2.0;
    dip_method = "aspc";

    std::vector<double> internal_xyz_expected = {
        -1.4243133388e+00, 7.7414187430e-01, -4.3289941557e+00, -2.4415497469e+00, 1.2772755042e+00, -4.0609757555e+00,
        -3.8959255460e-01, 2.7860559090e-01, -4.5838516399e+00, -1.3068347200e+00, 5.3732195400e+00, 2.1014472700e+00,
        -1.5657242500e+00, 1.6972450700e+00, -5.4115209000e-01, 1.0693792200e+00,  1.1359465600e+00, 2.5437633600e+00,
        -5.9808400000e-02, 5.2000000000e-02, 2.1460508600e+00,  -6.0591971000e-01, 2.6627802600e+00, 4.2484791000e-01,
        1.0109852000e+00,  1.1518770400e+00, 2.5497633600e+00,  3.4000000000e-02,  2.9828850000e-02, 2.1520508600e+00,
        -1.8646628000e+00, 1.3983065300e+00, -8.4960667000e-01, 1.7830105000e+00,  1.8495778400e+00, 3.4606991900e+00,
        -6.2454990000e-01, 6.4074150000e-01, 2.1580508600e+00,  -1.4105665789e+00, 1.8536253971e+00, -3.8670287397e-01,
        1.2233359822e+00,  1.3057607100e+00, 2.7548345332e+00,  -1.4612395930e-01, 1.8703937180e-01, 2.1640508600e+00};
    std::vector<double> internal_charge_expected = {
        7.0582700000e-01, -3.5121350000e-01, -3.4921350000e-01, -9.9420000000e-01, 7.8000000000e-03, 1.5800000000e-02,
        2.3800000000e-02, 6.0856992622e-01,  6.0419592027e-01,  6.1219591954e-01,  6.1056992679e-01, 6.0619592156e-01,
        6.1419591987e-01, -1.1837398530e+00, -1.1509918418e+00, -1.1429918394e+00};
    std::vector<double> internal_polsqrt_expected = {
        1.4142135624e+00, 1.4142135624e+00, 1.4142135624e+00, 8.7737677197e-01, 8.7737677197e-01, 8.7737677197e-01,
        8.7737677197e-01, 8.7737677197e-01, 8.7737677197e-01, 1.5706368135e+00, 1.5706368135e+00, 1.5706368135e+00,
        1.1445523142e+00, 1.1445523142e+00, 1.1445523142e+00, 1.1445523142e+00, 1.1445523142e+00, 1.1445523142e+00,
        1.1445523142e+00, 1.1445523142e+00, 1.1445523142e+00, 5.4221766847e-01, 5.4221766847e-01, 5.4221766847e-01,
        5.4221766847e-01, 5.4221766847e-01, 5.4221766847e-01, 5.4221766847e-01, 5.4221766847e-01, 5.4221766847e-01,
        5.4221766847e-01, 5.4221766847e-01, 5.4221766847e-01, 5.4221766847e-01, 5.4221766847e-01, 5.4221766847e-01,
        5.4221766847e-01, 5.4221766847e-01, 5.4221766847e-01, 0.0000000000e+00, 0.0000000000e+00, 0.0000000000e+00,
        0.0000000000e+00, 0.0000000000e+00, 0.0000000000e+00, 0.0000000000e+00, 0.0000000000e+00, 0.0000000000e+00};

    d.SetNewParameters(sys_xyz, chg, chg_grad, pol, polfac, dip_method, do_grads, box, cutoff);

    std::vector<double> getbox = d.GetBox();
    std::vector<double> getsysxyz = d.GetSysXyz();
    bool getdograds = d.GetDoGrads();
    double getcutoff = d.GetCutoff();
    std::vector<double> getboxabc = d.GetBoxAbc();
    std::vector<double> getboxinverse = d.GetBoxInverse();
    std::vector<double> getchg = d.GetSysChg();
    std::vector<double> getchggrad = d.GetSysChgGrad();
    std::vector<double> getpolfac = d.GetSysPolfacs();
    std::vector<double> getpol = d.GetSysPols();

    std::vector<double> box_ABCabc = box.size() ? BoxVecToBoxABCabc(box) : std::vector<double>{};
    std::vector<double> box_inverse = box.size() ? InvertUnitCell(box) : std::vector<double>{};

    double gettol = d.GetDipoleTolerance();
    size_t getmaxit = d.GetDipoleMaxIt();
    std::string getdipmethod = d.GetDipoleConvergenceMethod();

    std::vector<double> getinternalxyz = d.GetInternalXyz();
    std::vector<double> getinternalchg = d.GetInternalChg();
    std::vector<double> getinternalpolsqrt = d.GetInternalPolSqrt();

    REQUIRE(getdograds == do_grads);
    REQUIRE(VectorsAreEqual(getbox, box, TOL));
    REQUIRE(VectorsAreEqual(getboxabc, box_ABCabc, TOL));
    REQUIRE(VectorsAreEqual(getboxinverse, box_inverse, TOL));
    REQUIRE(VectorsAreEqual(getsysxyz, sys_xyz, TOL));
    REQUIRE(VectorsAreEqual(getchg, chg, TOL));
    REQUIRE(VectorsAreEqual(getchggrad, chg_grad, TOL));
    REQUIRE(VectorsAreEqual(getpolfac, polfac, TOL));
    REQUIRE(VectorsAreEqual(getpol, pol, TOL));
    REQUIRE(getdipmethod == dip_method);
    REQUIRE(VectorsAreEqual(getinternalxyz, internal_xyz_expected, TOL));
    REQUIRE(VectorsAreEqual(getinternalchg, internal_charge_expected, TOL));
    REQUIRE(VectorsAreEqual(getinternalpolsqrt, internal_polsqrt_expected, TOL));
}

TEST_CASE("dispersion::SetJsonMonomers") {
    // Declare and initialize electrostatics
    elec::Electrostatics d;
    d.Initialize(chg, chg_grad, polfac, pol, sys_xyz, mon_id, sites, first_ind, mon_type_count, islocal, sys_atom_tag,
                 do_grads, tol, maxit, dip_method, box);

    nlohmann::json jsonMon = {
        {"co2",
         {{"sites", 3},
          {"nat", 3},
          {"exc12", nlohmann::json::array({nlohmann::json::array({0, 1}), nlohmann::json::array({0, 2})})},
          {"exc12", nlohmann::json::array({nlohmann::json::array({1, 2})})},
          {"exc12", nlohmann::json::array()},
          {"charges", nlohmann::json::array({0.706027, -0.3530135, -0.3530135})},
          {"pol", nlohmann::json::array({1.471677, 0.769790, 0.769790})},
          {"polfac", nlohmann::json::array({1.471677, 0.769790, 0.769790})},
          {"c6lr",
           nlohmann::json::array({17.91673320223304547491, 13.04205731316957524126, 13.04205731316957524126})}}}};

    d.SetJsonMonomers(jsonMon);
    nlohmann::json getjsonmon = d.GetJsonMonomers();

    REQUIRE(jsonMon == getjsonmon);
}

TEST_CASE("electrostatics::GetElectrostatics") {
    dip_method = "cg";
    sys_xyz = {
        -1.4243133388e+00, 7.7214187430e-01, -4.3329941557e+00, -2.4475497469e+00, 1.2692755042e+00, -4.0709757555e+00,
        -4.0159255460e-01, 2.6460559090e-01, -4.5998516399e+00, -1.3248347200e+00, 5.3532195400e+00, 2.0794472700e+00,
        -1.5897242500e+00, 1.0433792200e+00, -8.7808400000e-02, -6.3591971000e-01, 9.7898520000e-01, 0.0000000000e+00,
        -1.9006628000e+00, 1.7450105000e+00, -6.6454990000e-01, -1.4525665789e+00, 1.1793359822e+00, -1.9212395930e-01,
        1.6492450700e+00,  1.0859465600e+00, 0.0000000000e+00,  2.6087802600e+00,  1.0958770400e+00, -2.8171150000e-02,
        1.3383065300e+00,  1.7875778400e+00, 5.7674150000e-01,  1.7876253971e+00,  1.2377607100e+00, 1.1703937180e-01,
        -6.1315209000e-01, 2.4697633600e+00, 2.0700508600e+00,  3.4684791000e-01,  2.4697633600e+00, 2.0700508600e+00,
        -9.3360667000e-01, 3.3746991900e+00, 2.0700508600e+00,  -4.7670287397e-01, 2.6628345332e+00, 2.0700508600e+00};
    chg = {7.0602700000e-01, -3.5301350000e-01, -3.5301350000e-01, -1.0000000000e+00,
           0.0000000000e+00, 5.9876992622e-01,  5.9876992679e-01,  -1.1975398530e+00,
           0.0000000000e+00, 5.8639592027e-01,  5.8639592156e-01,  -1.1727918418e+00,
           0.0000000000e+00, 5.8639591954e-01,  5.8639591987e-01,  -1.1727918394e+00};
    chg_grad = {-1.9040711750e-01, -4.7529900389e-02, 3.1098570197e-02,  -1.0418089900e-01, -5.3351273039e-02,
                3.9036659208e-02,  2.9458801649e-01,  1.0088117343e-01,  -7.0135229406e-02, -4.1663776414e-02,
                -9.1216434033e-02, 7.1885820762e-02,  -1.3554183683e-02, -1.5464558539e-01, 1.2402463639e-01,
                5.5217960097e-02,  2.4586201943e-01,  -1.9591045715e-01, 2.3207089391e-01,  1.3874633442e-01,
                -1.0298439096e-01, 1.1773508268e-01,  2.0799685843e-01,  -1.6306129559e-01, -3.4980597659e-01,
                -3.4674319286e-01, 2.6604568655e-01,  -1.9073305635e-01, -5.7624631175e-02, -3.9215535777e-02,
                -8.0449950373e-02, -5.6483280224e-02, -4.2453353590e-02, 2.7118300672e-01,  1.1410791140e-01,
                8.1668889366e-02,  -4.1733850419e-02, -7.7562002231e-02, -6.0887314328e-02, -5.9964726090e-03,
                -1.5820321163e-01, -1.2717445613e-01, 4.7730323027e-02,  2.3576521386e-01,  1.8806177046e-01,
                2.3246690677e-01,  1.3518663341e-01,  1.0010285010e-01,  8.6446422982e-02,  2.1468649185e-01,
                1.6962780972e-01,  -3.1891332975e-01, -3.4987312526e-01, -2.6973065983e-01, -1.9008601477e-01,
                -7.1448322370e-02, -0.0000000000e+00, -7.9749482371e-02, -7.1448321609e-02, -0.0000000000e+00,
                2.6983549714e-01,  1.4289664398e-01,  0.0000000000e+00,  -4.0729229389e-02, -9.9025111367e-02,
                -0.0000000000e+00, -3.8981376274e-03, -2.0303290512e-01, -0.0000000000e+00, 4.4627367017e-02,
                3.0205801648e-01,  0.0000000000e+00,  2.3081524416e-01,  1.7047343374e-01,  0.0000000000e+00,
                8.3647619998e-02,  2.7448122672e-01,  0.0000000000e+00,  -3.1446286416e-01, -4.4495466046e-01,
                -0.0000000000e+00};
    polfac = {1.4716770000e+00, 7.6979000000e-01, 7.6979000000e-01, 2.4669000000e+00,
              1.3100000000e+00, 2.9400000000e-01, 2.9400000000e-01, 1.3100000000e+00,
              1.3100000000e+00, 2.9400000000e-01, 2.9400000000e-01, 1.3100000000e+00,
              1.3100000000e+00, 2.9400000000e-01, 2.9400000000e-01, 1.3100000000e+00};
    pol = {1.4716770000e+00, 7.6979000000e-01, 7.6979000000e-01, 2.4669000000e+00, 1.3100000000e+00, 2.9400000000e-01,
           2.9400000000e-01, 0.0000000000e+00, 1.3100000000e+00, 2.9400000000e-01, 2.9400000000e-01, 0.0000000000e+00,
           1.3100000000e+00, 2.9400000000e-01, 2.9400000000e-01, 0.0000000000e+00};
    bool use_ghost = false;

    double cutoff = 9.0;

    std::vector<double> grad_expected = {
        -1.0277495300e+01, 6.5166020333e+00,  -3.6660532487e-01, -1.2825042759e+01, 5.5127996522e+00,
        4.3715999548e+00,  2.2977024608e+01,  -1.2010830282e+01, -4.9061317280e+00, -4.2775371590e+00,
        1.6693693773e+01,  1.0011725389e+00,  1.9161639189e+01,  2.4010438483e+01,  6.8322200982e+00,
        9.0776678771e+00,  -1.6749563191e+01, 8.6922971183e+00,  -2.1047747487e+01, -2.2908697337e-01,
        -6.6310047540e+00, 0.0000000000e+00,  0.0000000000e+00,  0.0000000000e+00,  1.3311226452e+00,
        6.2108555575e+00,  3.9457410850e+00,  7.4921995862e+00,  -6.3346757757e+00, -5.1978766801e+00,
        -7.5372987147e+00, -1.2394155454e+00, 3.1088011046e+00,  0.0000000000e+00,  0.0000000000e+00,
        0.0000000000e+00,  -1.9168608152e+01, 2.7790825917e+01,  -8.9859758084e-01, 1.4123362911e+01,
        -1.3015901289e+01, -9.5724707037e+00, 9.7245535825e-01,  -3.7155129196e+01, -3.7990952398e-01,
        0.0000000000e+00,  0.0000000000e+00,  0.0000000000e+00};

    std::vector<double> virial_expected = {-8.2426185500e+01, 6.2989532582e+01,  1.9274383053e+01,
                                           6.2989532582e+01,  -2.1249052352e+01, 9.8365518291e+00,
                                           1.9274383053e+01,  9.8365518291e+00,  1.4701518821e+00};

    std::vector<double> grad = {
        -9.8954552239e+00, 6.7600448343e+00,  3.5600398188e+00,  -1.3354446702e+01, 5.6064214232e+00,
        2.7386848907e+00,  2.3237824333e+01,  -1.2416048348e+01, -6.6839886432e+00, 2.2344781834e+00,
        -1.0501158921e+01, -1.8341348522e-02, 1.4732062504e+01,  1.6680660699e+01,  -4.0559486178e+00,
        1.1124371079e+01,  -1.4121542815e+01, 1.2546214843e+01,  -1.9660627009e+01, 1.8674543217e+00,
        -1.7920931823e+00, 0.0000000000e+00,  0.0000000000e+00,  0.0000000000e+00,  1.4489431785e+00,
        4.0570771029e+00,  3.2621472296e+00,  5.4010231415e+00,  -6.2984091716e+00, -5.2835922227e+00,
        -1.1125835213e+01, 2.4682162750e+00,  2.6700937625e+00,  0.0000000000e+00,  0.0000000000e+00,
        0.0000000000e+00,  1.4011516122e+00,  5.2102078691e+00,  -5.7232052523e+00, 5.6304383665e+00,
        -8.9447534544e+00, -7.8238873101e-01, -1.1173940070e+01, 9.6318409440e+00,  -4.3755504783e-01,
        0.0000000000e+00,  0.0000000000e+00,  0.0000000000e+00};
    std::vector<double> virial = {-5.4479587197e+01, 4.7264984821e+01, 8.3734253343e+00,
                                  4.7264984821e+01,  1.5127361529e+01, 5.7373279521e+00,
                                  8.3734253343e+00,  5.7373279521e+00, 6.9990521051e+00};

    double energy_expected = -4.8093581201e+01;
    double eperm_expected = -3.9838024916e+01;
    double eind_expected = -8.2555562850e+00;
    do_grads = true;
    box = {21.0, 0.0, 0.0, 0.0, 21.0, 0.0, 0.0, 0.0, 20.0};

    // Declare and initialize electrostatics
    elec::Electrostatics d;
    d.Initialize(chg, chg_grad, polfac, pol, sys_xyz, mon_id, sites, first_ind, mon_type_count, islocal, sys_atom_tag,
                 do_grads, tol, maxit, dip_method, box);

    d.SetNewParameters(sys_xyz, chg, chg_grad, pol, polfac, dip_method, do_grads, box, cutoff);
    d.SetEwaldAlpha(0.60);
    d.SetEwaldGridDensity(2.5);
    d.SetEwaldSplineOrder(6);
    double energy = d.GetElectrostatics(grad, &virial, use_ghost);
    double eind = d.GetInducedElectrostaticEnergy();
    double eperm = d.GetPermanentElectrostaticEnergy();

    REQUIRE(energy == Approx(energy_expected).margin(TOL));
    REQUIRE(eperm == Approx(eperm_expected).margin(TOL));
    REQUIRE(eind == Approx(eind_expected).margin(TOL));

    REQUIRE(VectorsAreEqual(grad, grad_expected, TOL));
    REQUIRE(VectorsAreEqual(virial, virial_expected, TOL));
}
