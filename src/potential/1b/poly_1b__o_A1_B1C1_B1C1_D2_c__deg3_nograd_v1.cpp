
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

#include "poly_1b__o_A1_B1C1_B1C1_D2_c__deg3_v1.h"

/**
 * @file poly_1b__o_A1_B1C1_B1C1_D2_c__deg3_nograd_v1.cpp
 * @brief Contains the implementation of the polynomials without gradients for symmetry _o_A1_B1C1_B1C1_D2_c_
 */

/**
 * @namespace mbnrg__o_A1_B1C1_B1C1_D2_c__deg3
 * @brief Encloses the structure of the polynomial for symmetry _o_A1_B1C1_B1C1_D2_c_
 */

namespace mbnrg__o_A1_B1C1_B1C1_D2_c__deg3 {

double poly__o_A1_B1C1_B1C1_D2_c__deg3_v1::eval(const double x[21], const double a[651]) {
    const double t9 = a[8];
    const double t2 = x[20];
    const double t14 = (a[549] * t2 + a[67]) * t2;
    const double t15 = a[424];
    const double t18 = t2 * a[367];
    const double t19 = a[81];
    const double t24 = a[489];
    const double t7 = x[19];
    const double t25 = t7 * t24;
    const double t27 = t2 * a[120];
    const double t28 = a[10];
    const double t36 = a[474];
    const double t37 = t7 * t36;
    const double t39 = t2 * a[184];
    const double t40 = a[56];
    const double t43 = a[186];
    const double t11 = x[18];
    const double t44 = t11 * t43;
    const double t45 = a[292];
    const double t46 = t7 * t45;
    const double t48 = t2 * a[513];
    const double t49 = a[36];
    const double t57 = t7 * t43;
    const double t60 = t11 * t36;
    const double t13 = x[17];
    const double t63 = t13 * t24;
    const double t78 = a[649];
    const double t81 = t2 * a[494];
    const double t82 = a[37];
    const double t86 = a[612];
    const double t91 = a[629];
    const double t93 = a[356];
    const double t105 = a[433];
    const double t117 = a[4];
    const double t122 = (a[160] * t2 + a[41]) * t2;
    const double t123 = a[647];
    const double t126 = t2 * a[288];
    const double t127 = a[20];
    const double t130 = a[587];
    const double t132 = a[231];
    const double t133 = t7 * t132;
    const double t135 = t2 * a[576];
    const double t136 = a[49];
    const double t139 = a[115];
    const double t141 = a[126];
    const double t142 = t11 * t141;
    const double t143 = a[377];
    const double t144 = t7 * t143;
    const double t146 = t2 * a[488];
    const double t147 = a[32];
    const double t150 = a[233];
    const double t152 = a[154];
    const double t153 = t13 * t152;
    const double t154 = a[318];
    const double t155 = t11 * t154;
    const double t156 = a[485];
    const double t157 = t7 * t156;
    const double t159 = t2 * a[552];
    const double t160 = a[74];
    const double t31 = x[15];
    const double t164 = a[211] * t31;
    const double t165 = a[331];
    const double t167 = a[344];
    const double t169 = a[161];
    const double t171 = a[522];
    const double t174 = t2 * a[422];
    const double t175 = a[76];
    const double t178 = a[384];
    const double t181 = t31 * a[454];
    const double t182 = a[613];
    const double t184 = a[617];
    const double t186 = a[349];
    const double t188 = a[429];
    const double t191 = t2 * a[243];
    const double t192 = a[62];
    const double t204 = t11 * t156;
    const double t205 = t7 * t154;
    const double t209 = t11 * t143;
    const double t210 = t7 * t141;
    const double t219 = a[477];
    const double t38 = x[14];
    const double t220 = t38 * t219;
    const double t222 = t31 * a[434];
    const double t223 = a[145];
    const double t226 = a[272];
    const double t230 = t2 * a[507];
    const double t231 = a[55];
    const double t243 = a[6];
    const double t248 = (a[409] * t2 + a[59]) * t2;
    const double t249 = a[147];
    const double t252 = t2 * a[625];
    const double t253 = a[77];
    const double t257 = a[132];
    const double t261 = a[294];
    const double t263 = a[122];
    const double t264 = t11 * t263;
    const double t265 = a[248];
    const double t266 = t7 * t265;
    const double t268 = t2 * a[148];
    const double t269 = a[61];
    const double t273 = a[165];
    const double t275 = t11 * t265;
    const double t276 = t7 * t263;
    const double t280 = t31 * a[482];
    const double t281 = a[311];
    const double t284 = a[577];
    const double t288 = t2 * a[535];
    const double t289 = a[72];
    const double t292 = a[616];
    const double t295 = t31 * a[239];
    const double t296 = a[391];
    const double t298 = a[460];
    const double t300 = a[614];
    const double t302 = a[208];
    const double t305 = t2 * a[491];
    const double t306 = a[69];
    const double t310 = a[284];
    const double t318 = a[174];
    const double t320 = a[618];
    const double t324 = t31 * a[521];
    const double t325 = a[347];
    const double t328 = a[133];
    const double t332 = t2 * a[600];
    const double t333 = a[29];
    const double t338 = a[7];
    const double t343 = (a[175] * t2 + a[47]) * t2;
    const double t344 = a[395];
    const double t347 = t2 * a[142];
    const double t348 = a[26];
    const double t352 = a[481];
    const double t356 = a[141];
    const double t358 = a[416];
    const double t359 = t11 * t358;
    const double t360 = a[398];
    const double t361 = t7 * t360;
    const double t363 = t2 * a[498];
    const double t364 = a[39];
    const double t368 = a[621];
    const double t370 = t11 * t360;
    const double t371 = t7 * t358;
    const double t375 = t31 * a[634];
    const double t376 = a[336];
    const double t379 = a[602];
    const double t383 = t2 * a[137];
    const double t384 = a[18];
    const double t387 = a[355];
    const double t390 = t31 * a[626];
    const double t391 = a[207];
    const double t393 = a[282];
    const double t395 = a[446];
    const double t397 = a[332];
    const double t400 = t2 * a[151];
    const double t401 = a[85];
    const double t405 = a[242];
    const double t413 = a[511];
    const double t415 = a[597];
    const double t419 = t31 * a[136];
    const double t420 = a[636];
    const double t423 = a[548];
    const double t427 = t2 * a[217];
    const double t428 = a[24];
    const double t431 = a[607];
    const double t433 = a[140];
    const double t435 = a[119];
    const double t439 = t31 * a[374];
    const double t440 = a[623];
    const double t443 = a[352];
    const double t447 = t2 * a[578];
    const double t448 = a[44];
    const double t79 = x[11];
    const double t83 = x[12];
    const double t85 = x[13];
    const double t89 = x[16];
    const double t449 = t443 * t11 + t440 * t13 + t435 * t38 + t431 * t79 + t433 * t83 + t435 * t85 + t440 * t89 +
                        t443 * t7 + t439 + t447 + t448;
    const double t451 =
        t338 + t343 + (t344 * t7 + t347 + t348) * t7 + (t344 * t11 + t352 * t7 + t347 + t348) * t11 +
        (t356 * t13 + t359 + t361 + t363 + t364) * t13 + (t368 * t13 + t356 * t89 + t363 + t364 + t370 + t371) * t89 +
        (t379 * t11 + t376 * t13 + t376 * t89 + t379 * t7 + t375 + t383 + t384) * t31 +
        (t395 * t11 + t393 * t13 + t387 * t38 + t391 * t89 + t397 * t7 + t390 + t400 + t401) * t38 +
        (t397 * t11 + t391 * t13 + t405 * t38 + t387 * t85 + t393 * t89 + t395 * t7 + t390 + t400 + t401) * t85 +
        (t423 * t11 + t420 * t13 + t415 * t38 + t413 * t83 + t415 * t85 + t420 * t89 + t423 * t7 + t419 + t427 + t428) *
            t83 +
        t449 * t79;
    const double t458 = t7 * t152;
    const double t465 = t13 * t132;
    const double t474 = a[637];
    const double t475 = t38 * t474;
    const double t477 = t31 * a[646];
    const double t478 = a[580];
    const double t480 = a[173];
    const double t485 = t2 * a[490];
    const double t486 = a[19];
    const double t489 = a[316];
    const double t490 = t85 * t489;
    const double t491 = a[389];
    const double t492 = t38 * t491;
    const double t494 = t31 * a[281];
    const double t495 = a[269];
    const double t497 = a[382];
    const double t502 = t2 * a[581];
    const double t503 = a[40];
    const double t506 = a[495];
    const double t507 = t83 * t506;
    const double t508 = a[594];
    const double t509 = t85 * t508;
    const double t510 = a[280];
    const double t511 = t38 * t510;
    const double t513 = t31 * a[164];
    const double t514 = a[228];
    const double t516 = a[365];
    const double t518 = a[622];
    const double t520 = a[499];
    const double t523 = t2 * a[343];
    const double t524 = a[50];
    const double t527 = a[204];
    const double t528 = t79 * t527;
    const double t529 = a[111];
    const double t530 = t83 * t529;
    const double t531 = a[512];
    const double t532 = t85 * t531;
    const double t533 = a[257];
    const double t534 = t38 * t533;
    const double t536 = t31 * a[562];
    const double t537 = a[168];
    const double t539 = a[471];
    const double t541 = a[436];
    const double t543 = a[605];
    const double t546 = t2 * a[218];
    const double t547 = a[12];
    const double t548 =
        t541 * t11 + t539 * t13 + t537 * t89 + t543 * t7 + t528 + t530 + t532 + t534 + t536 + t546 + t547;
    const double t551 = a[537];
    const double t552 = t79 * t551;
    const double t553 = a[301];
    const double t554 = t83 * t553;
    const double t195 = x[10];
    const double t559 =
        t182 * t11 + t188 * t13 + t178 * t195 + t184 * t7 + t186 * t89 + t181 + t191 + t192 + t475 + t490 + t552 + t554;
    const double t561 =
        t117 + t122 + (t139 * t7 + t146 + t147) * t7 + (t150 * t11 + t159 + t160 + t458) * t11 +
        (t123 * t13 + t126 + t127 + t144 + t204) * t13 + (t130 * t89 + t135 + t136 + t155 + t210 + t465) * t89 +
        (t165 * t11 + t171 * t13 + t167 * t7 + t169 * t89 + t164 + t174 + t175) * t31 +
        (t478 * t11 + t480 * t13 + t478 * t89 + t480 * t7 + t475 + t477 + t485 + t486) * t38 +
        (t497 * t11 + t497 * t13 + t495 * t7 + t495 * t89 + t490 + t492 + t494 + t502 + t503) * t85 +
        (t518 * t11 + t516 * t13 + t514 * t89 + t520 * t7 + t507 + t509 + t511 + t513 + t523 + t524) * t83 +
        t548 * t79 + t559 * t195;
    const double t581 = t38 * t489;
    const double t588 = t85 * t474;
    const double t595 = t85 * t510;
    const double t596 = t38 * t508;
    const double t603 = t85 * t533;
    const double t604 = t38 * t531;
    const double t609 =
        t543 * t11 + t537 * t13 + t539 * t89 + t541 * t7 + t528 + t530 + t536 + t546 + t547 + t603 + t604;
    const double t611 = t195 * t219;
    const double t612 = a[571];
    const double t614 = a[194];
    const double t621 = t223 * t11 + t226 * t13 + t223 * t7 + t226 * t89 + t491 * t85 + t612 * t79 + t614 * t83 + t222 +
                        t230 + t231 + t492 + t611;
    const double t277 = x[9];
    const double t628 = t184 * t11 + t186 * t13 + t178 * t277 + t182 * t7 + t188 * t89 + t181 + t191 + t192 + t552 +
                        t554 + t581 + t588 + t611;
    const double t630 =
        t117 + t122 + (t150 * t7 + t159 + t160) * t7 + (t139 * t11 + t146 + t147 + t458) * t11 +
        (t130 * t13 + t135 + t136 + t142 + t205) * t13 + (t123 * t89 + t126 + t127 + t157 + t209 + t465) * t89 +
        (t167 * t11 + t169 * t13 + t165 * t7 + t171 * t89 + t164 + t174 + t175) * t31 +
        (t495 * t11 + t495 * t13 + t497 * t7 + t497 * t89 + t494 + t502 + t503 + t581) * t38 +
        (t480 * t11 + t478 * t13 + t478 * t7 + t480 * t89 + t477 + t485 + t486 + t492 + t588) * t85 +
        (t520 * t11 + t514 * t13 + t516 * t89 + t518 * t7 + t507 + t513 + t523 + t524 + t595 + t596) * t83 +
        t609 * t79 + t621 * t195 + t628 * t277;
    const double t667 = a[582];
    const double t669 = a[563];
    const double t673 = a[515] * t31;
    const double t674 = a[415];
    const double t677 = a[561];
    const double t681 = t2 * a[640];
    const double t682 = a[75];
    const double t686 = t79 * a[117];
    const double t687 = a[232];
    const double t689 = a[223];
    const double t694 = a[635];
    const double t702 = t694 * t11 + t694 * t13 + a[483] * t2 + a[372] * t31 + t689 * t38 + t687 * t83 + t689 * t85 +
                        t694 * t7 + t694 * t89 + t686 + a[92];
    const double t705 = t79 * t689;
    const double t706 = a[642];
    const double t707 = t83 * t706;
    const double t712 =
        t391 * t11 + t397 * t13 + t387 * t195 + t393 * t7 + t395 * t89 + t390 + t400 + t401 + t532 + t534 + t705 + t707;
    const double t720 = t393 * t11 + t395 * t13 + t405 * t195 + t387 * t277 + t391 * t7 + t397 * t89 + t390 + t400 +
                        t401 + t603 + t604 + t705 + t707;
    const double t725 = a[556];
    const double t394 = x[8];
    const double t733 = t440 * t11 + t443 * t13 + t435 * t195 + t435 * t277 + t527 * t38 + t431 * t394 + t440 * t7 +
                        t443 * t89 + t527 * t85 + t725 * t83 + t439 + t447 + t448 + t686;
    const double t735 =
        t338 + t343 + (t356 * t7 + t363 + t364) * t7 + (t356 * t11 + t368 * t7 + t363 + t364) * t11 +
        (t344 * t13 + t347 + t348 + t359 + t361) * t13 + (t352 * t13 + t344 * t89 + t347 + t348 + t370 + t371) * t89 +
        (t376 * t11 + t379 * t13 + t376 * t7 + t379 * t89 + t375 + t383 + t384) * t31 +
        (t537 * t11 + t543 * t13 + t551 * t38 + t539 * t7 + t541 * t89 + t536 + t546 + t547) * t38 +
        (t539 * t11 + t541 * t13 + t612 * t38 + t537 * t7 + t543 * t89 + t551 * t85 + t536 + t546 + t547) * t85 +
        (t677 * t11 + t674 * t13 + t669 * t38 + t667 * t83 + t669 * t85 + t674 * t89 + t677 * t7 + t673 + t681 + t682) *
            t83 +
        t702 * t79 + t712 * t195 + t720 * t277 + t733 * t394;
    const double t773 = t83 * a[484];
    const double t774 = a[532];
    const double t779 = a[201];
    const double t791 = t83 * a[240];
    const double t798 = t674 * t11 + t677 * t13 + t706 * t38 + t674 * t7 + t677 * t89 + t706 * t85 + t725 * t79 + t673 +
                        t681 + t682 + t791;
    const double t801 = t79 * t669;
    const double t802 = t83 * t774;
    const double t807 =
        t296 * t11 + t302 * t13 + t292 * t195 + t298 * t7 + t300 * t89 + t295 + t305 + t306 + t509 + t511 + t801 + t802;
    const double t815 = t298 * t11 + t300 * t13 + t310 * t195 + t292 * t277 + t296 * t7 + t302 * t89 + t295 + t305 +
                        t306 + t595 + t596 + t801 + t802;
    const double t827 = t420 * t11 + t423 * t13 + t415 * t195 + t415 * t277 + t529 * t38 + t433 * t394 + t420 * t7 +
                        t423 * t89 + t529 * t85 + t687 * t79 + t419 + t427 + t428 + t791;
    const double t556 = x[7];
    const double t840 = t325 * t11 + t328 * t13 + t320 * t195 + t320 * t277 + t318 * t556 + t325 * t7 + t328 * t89 +
                        t506 * t38 + t413 * t394 + t506 * t85 + t667 * t79 + t324 + t332 + t333 + t773;
    const double t842 =
        t243 + t248 + (t261 * t7 + t268 + t269) * t7 + (t261 * t11 + t273 * t7 + t268 + t269) * t11 +
        (t249 * t13 + t252 + t253 + t264 + t266) * t13 + (t257 * t13 + t249 * t89 + t252 + t253 + t275 + t276) * t89 +
        (t281 * t11 + t284 * t13 + t281 * t7 + t284 * t89 + t280 + t288 + t289) * t31 +
        (t514 * t11 + t520 * t13 + t553 * t38 + t516 * t7 + t518 * t89 + t513 + t523 + t524) * t38 +
        (t516 * t11 + t518 * t13 + t614 * t38 + t514 * t7 + t520 * t89 + t553 * t85 + t513 + t523 + t524) * t85 +
        (t779 * t11 + t779 * t13 + a[125] * t2 + a[353] * t31 + t774 * t38 + t779 * t7 + t774 * t85 + t779 * t89 +
         t773 + a[43]) *
            t83 +
        t798 * t79 + t807 * t195 + t815 * t277 + t827 * t394 + t840 * t556;
    const double t850 = a[190];
    const double t853 = t2 * a[525];
    const double t854 = a[65];
    const double t858 = a[385];
    const double t863 = a[430];
    const double t865 = a[533];
    const double t877 = a[213];
    const double t887 = a[324];
    const double t890 = t31 * a[96];
    const double t891 = a[260];
    const double t893 = a[493];
    const double t895 = a[627];
    const double t897 = a[262];
    const double t900 = t2 * a[630];
    const double t901 = a[38];
    const double t905 = a[271];
    const double t913 = a[341];
    const double t915 = a[565];
    const double t919 = t31 * a[178];
    const double t920 = a[437];
    const double t923 = a[585];
    const double t927 = t2 * a[644];
    const double t928 = a[79];
    const double t931 = a[187];
    const double t933 = a[273];
    const double t935 = a[98];
    const double t939 = t31 * a[244];
    const double t940 = a[378];
    const double t943 = a[163];
    const double t947 = t2 * a[134];
    const double t948 = a[60];
    const double t949 = t943 * t11 + t940 * t13 + t935 * t38 + t943 * t7 + t931 * t79 + t933 * t83 + t935 * t85 +
                        t940 * t89 + t939 + t947 + t948;
    const double t952 = a[110];
    const double t953 = t79 * t952;
    const double t954 = a[153];
    const double t955 = t83 * t954;
    const double t956 = a[285];
    const double t958 = a[139];
    const double t964 = t891 * t11 + t897 * t13 + t887 * t195 + t958 * t38 + t893 * t7 + t956 * t85 + t895 * t89 +
                        t890 + t900 + t901 + t953 + t955;
    const double t974 = t893 * t11 + t895 * t13 + t905 * t195 + t887 * t277 + t956 * t38 + t891 * t7 + t958 * t85 +
                        t897 * t89 + t890 + t900 + t901 + t953 + t955;
    const double t981 = a[179];
    const double t989 = t940 * t11 + t943 * t13 + t935 * t195 + t935 * t277 + t952 * t38 + t931 * t394 + t940 * t7 +
                        a[456] * t79 + t981 * t83 + t952 * t85 + t943 * t89 + t939 + t947 + t948;
    const double t1004 = t920 * t11 + t923 * t13 + t915 * t195 + t915 * t277 + t954 * t38 + t933 * t394 + t913 * t556 +
                         t920 * t7 + t981 * t79 + a[553] * t83 + t954 * t85 + t923 * t89 + t919 + t927 + t928;
    const double t1008 = a[95];
    const double t1010 = a[438];
    const double t1012 = a[287];
    const double t1021 = a[323];
    const double t726 = x[6];
    const double t1029 = t1008 * t556 + t1008 * t83 + t1010 * t394 + t1010 * t79 + t1012 * t195 + t1012 * t277 +
                         t1012 * t38 + t1012 * t85 + t1021 * t11 + t1021 * t13 + t1021 * t7 + t1021 * t89 +
                         a[369] * t2 + a[432] * t31 + a[445] * t726 + a[14];
    const double t1031 =
        a[0] + (t2 * a[508] + a[73]) * t2 + (t850 * t7 + t853 + t854) * t7 +
        (t850 * t11 + t858 * t7 + t853 + t854) * t11 + (t863 * t11 + t850 * t13 + t865 * t7 + t853 + t854) * t13 +
        (t865 * t11 + t858 * t13 + t863 * t7 + t850 * t89 + t853 + t854) * t89 +
        (t877 * t11 + t877 * t13 + t2 * a[250] + a[451] * t31 + t877 * t7 + t877 * t89 + a[15]) * t31 +
        (t895 * t11 + t893 * t13 + t887 * t38 + t897 * t7 + t891 * t89 + t890 + t900 + t901) * t38 +
        (t897 * t11 + t891 * t13 + t905 * t38 + t895 * t7 + t887 * t85 + t893 * t89 + t890 + t900 + t901) * t85 +
        (t923 * t11 + t920 * t13 + t915 * t38 + t923 * t7 + t913 * t83 + t915 * t85 + t920 * t89 + t919 + t927 + t928) *
            t83 +
        t949 * t79 + t964 * t195 + t974 * t277 + t989 * t394 + t1004 * t556 + t1029 * t726;
    const double t1033 = a[5];
    const double t1038 = (a[286] * t2 + a[52]) * t2;
    const double t1039 = a[321];
    const double t1042 = t2 * a[225];
    const double t1043 = a[33];
    const double t1046 = a[421];
    const double t1048 = a[177];
    const double t1049 = t7 * t1048;
    const double t1051 = t2 * a[330];
    const double t1052 = a[23];
    const double t1056 = a[149];
    const double t1057 = t11 * t1056;
    const double t1058 = a[628];
    const double t1063 = t13 * t1048;
    const double t1064 = a[118];
    const double t1066 = t7 * t1056;
    const double t1070 = t31 * a[158];
    const double t1071 = a[235];
    const double t1073 = a[373];
    const double t1078 = t2 * a[249];
    const double t1079 = a[53];
    const double t1082 = a[444];
    const double t1085 = t31 * a[224];
    const double t1086 = a[547];
    const double t1088 = a[166];
    const double t1090 = a[354];
    const double t1092 = a[304];
    const double t1095 = t2 * a[449];
    const double t1096 = a[84];
    const double t1099 = a[320];
    const double t1101 = a[569];
    const double t1102 = t38 * t1101;
    const double t1104 = t31 * a[150];
    const double t1105 = a[129];
    const double t1107 = a[251];
    const double t1109 = a[467];
    const double t1111 = a[473];
    const double t1114 = t2 * a[364];
    const double t1115 = a[54];
    const double t1118 = a[237];
    const double t1119 = t83 * t1118;
    const double t1120 = a[293];
    const double t1122 = a[579];
    const double t1125 = t31 * a[229];
    const double t1126 = a[357];
    const double t1128 = a[124];
    const double t1130 = a[275];
    const double t1132 = a[335];
    const double t1135 = t2 * a[170];
    const double t1136 = a[27];
    const double t1139 = a[258];
    const double t1140 = t79 * t1139;
    const double t1141 = a[551];
    const double t1142 = t83 * t1141;
    const double t1143 = a[419];
    const double t1145 = a[524];
    const double t1148 = t31 * a[278];
    const double t1149 = a[339];
    const double t1151 = a[302];
    const double t1153 = a[202];
    const double t1155 = a[155];
    const double t1158 = t2 * a[472];
    const double t1159 = a[25];
    const double t1160 = t1153 * t11 + t1143 * t85 + t1145 * t38 + t1149 * t89 + t1151 * t13 + t1155 * t7 + t1140 +
                         t1142 + t1148 + t1158 + t1159;
    const double t1163 = a[274];
    const double t1164 = t79 * t1163;
    const double t1165 = a[558];
    const double t1166 = t83 * t1165;
    const double t1167 = a[394];
    const double t1168 = t85 * t1167;
    const double t1169 = a[458];
    const double t1175 = t1082 * t195 + t1086 * t11 + t1088 * t7 + t1090 * t89 + t1092 * t13 + t1169 * t38 + t1085 +
                         t1095 + t1096 + t1164 + t1166 + t1168;
    const double t1178 = t195 * t1101;
    const double t1179 = a[261];
    const double t1180 = t79 * t1179;
    const double t1181 = a[542];
    const double t1182 = t83 * t1181;
    const double t1183 = a[466];
    const double t1185 = t38 * t1167;
    const double t1190 = t1099 * t277 + t1105 * t11 + t1107 * t7 + t1109 * t89 + t1111 * t13 + t1183 * t85 + t1104 +
                         t1114 + t1115 + t1178 + t1180 + t1182 + t1185;
    const double t1192 = t394 * t1139;
    const double t1196 = t79 * a[328];
    const double t1197 = a[465];
    const double t1198 = t83 * t1197;
    const double t1205 = t1149 * t11 + t1143 * t277 + t1145 * t195 + t1151 * t7 + t1153 * t89 + t1155 * t13 +
                         t1163 * t38 + t1179 * t85 + t1148 + t1158 + t1159 + t1192 + t1196 + t1198;
    const double t1207 = t556 * t1118;
    const double t1208 = t394 * t1141;
    const double t1211 = t79 * t1197;
    const double t1213 = t83 * a[199];
    const double t1220 = t1126 * t11 + t1120 * t277 + t1122 * t195 + t1128 * t7 + t1130 * t89 + t1132 * t13 +
                         t1165 * t38 + t1181 * t85 + t1125 + t1135 + t1136 + t1207 + t1208 + t1211 + t1213;
    const double t1223 = t726 * a[205];
    const double t1224 = a[277];
    const double t1225 = t556 * t1224;
    const double t1226 = a[584];
    const double t1227 = t394 * t1226;
    const double t1228 = a[291];
    const double t1230 = a[435];
    const double t1232 = t79 * t1226;
    const double t1233 = t83 * t1224;
    const double t1237 = t31 * a[305];
    const double t1238 = a[403];
    const double t1240 = a[570];
    const double t1245 = t2 * a[350];
    const double t1246 = a[87];
    const double t1247 = t1238 * t11 + t1228 * t277 + t1228 * t85 + t1230 * t195 + t1230 * t38 + t1238 * t89 +
                         t1240 * t13 + t1240 * t7 + t1223 + t1225 + t1227 + t1232 + t1233 + t1237 + t1245 + t1246;
    const double t1249 = a[620];
    const double t1252 = t726 * a[295];
    const double t1253 = a[171];
    const double t1254 = t556 * t1253;
    const double t1255 = a[234];
    const double t1256 = t394 * t1255;
    const double t1257 = a[531];
    const double t1259 = a[327];
    const double t1261 = t79 * t1255;
    const double t1262 = t83 * t1253;
    const double t1266 = t31 * a[314];
    const double t1267 = a[351];
    const double t1269 = a[400];
    const double t1274 = t2 * a[144];
    const double t1275 = a[46];
    const double t881 = x[5];
    const double t1276 = t1267 * t11 + t1249 * t881 + t1257 * t277 + t1257 * t85 + t1259 * t195 + t1259 * t38 +
                         t1267 * t89 + t1269 * t13 + t1269 * t7 + t1252 + t1254 + t1256 + t1261 + t1262 + t1266 +
                         t1274 + t1275;
    const double t1278 =
        t1033 + t1038 + (t1039 * t7 + t1042 + t1043) * t7 + (t1046 * t11 + t1049 + t1051 + t1052) * t11 +
        (t1039 * t13 + t1058 * t7 + t1042 + t1043 + t1057) * t13 +
        (t1046 * t89 + t1064 * t11 + t1051 + t1052 + t1063 + t1066) * t89 +
        (t1071 * t11 + t1071 * t89 + t1073 * t13 + t1073 * t7 + t1070 + t1078 + t1079) * t31 +
        (t1082 * t38 + t1086 * t89 + t1088 * t13 + t1090 * t11 + t1092 * t7 + t1085 + t1095 + t1096) * t38 +
        (t1099 * t85 + t1109 * t11 + t1105 * t89 + t1107 * t13 + t1111 * t7 + t1102 + t1104 + t1114 + t1115) * t85 +
        (t1130 * t11 + t1120 * t85 + t1122 * t38 + t1126 * t89 + t1128 * t13 + t1132 * t7 + t1119 + t1125 + t1135 +
         t1136) *
            t83 +
        t1160 * t79 + t1175 * t195 + t1190 * t277 + t1205 * t394 + t1220 * t556 + t1247 * t726 + t1276 * t881;
    const double t1328 = t1155 * t11 + t1143 * t38 + t1145 * t85 + t1149 * t13 + t1151 * t89 + t1153 * t7 + t1140 +
                         t1142 + t1148 + t1158 + t1159;
    const double t1336 = t1099 * t195 + t1107 * t11 + t1105 * t7 + t1109 * t13 + t1111 * t89 + t1183 * t38 + t1104 +
                         t1114 + t1115 + t1168 + t1180 + t1182;
    const double t1344 = t1082 * t277 + t1086 * t7 + t1088 * t11 + t1090 * t13 + t1092 * t89 + t1169 * t85 + t1085 +
                         t1095 + t1096 + t1164 + t1166 + t1178 + t1185;
    const double t1354 = t1151 * t11 + t1143 * t195 + t1145 * t277 + t1149 * t7 + t1153 * t13 + t1155 * t89 +
                         t1163 * t85 + t1179 * t38 + t1148 + t1158 + t1159 + t1192 + t1196 + t1198;
    const double t1364 = t1128 * t11 + t1120 * t195 + t1122 * t277 + t1126 * t7 + t1130 * t13 + t1132 * t89 +
                         t1165 * t85 + t1181 * t38 + t1125 + t1135 + t1136 + t1207 + t1208 + t1211 + t1213;
    const double t1374 = t1240 * t11 + t1228 * t195 + t1228 * t38 + t1230 * t277 + t1230 * t85 + t1238 * t13 +
                         t1238 * t7 + t1240 * t89 + t1223 + t1225 + t1227 + t1232 + t1233 + t1237 + t1245 + t1246;
    const double t1377 = t881 * a[104];
    const double t1380 = a[596];
    const double t1382 = a[105];
    const double t1384 = a[113];
    const double t1393 = a[418];
    const double t1401 = t1393 * t11 + t1393 * t13 + t1380 * t556 + t1380 * t83 + t1382 * t394 + t1382 * t79 +
                         t1384 * t195 + t1384 * t277 + t1384 * t38 + t1384 * t85 + t1393 * t7 + t1393 * t89 +
                         t2 * a[641] + a[303] * t31 + a[516] * t726 + t1377 + a[91];
    const double t1054 = x[4];
    const double t1412 = t1249 * t1054 + t1269 * t11 + t1257 * t195 + t1257 * t38 + t1259 * t277 + t1259 * t85 +
                         t1267 * t13 + t1267 * t7 + t1269 * t89 + t1252 + t1254 + t1256 + t1261 + t1262 + t1266 +
                         t1274 + t1275 + t1377;
    const double t1414 =
        t1033 + t1038 + (t1046 * t7 + t1051 + t1052) * t7 + (t1039 * t11 + t1042 + t1043 + t1049) * t11 +
        (t1046 * t13 + t1064 * t7 + t1051 + t1052 + t1057) * t13 +
        (t1039 * t89 + t1058 * t11 + t1042 + t1043 + t1063 + t1066) * t89 +
        (t1071 * t13 + t1071 * t7 + t1073 * t11 + t1073 * t89 + t1070 + t1078 + t1079) * t31 +
        (t1099 * t38 + t1111 * t11 + t1105 * t13 + t1107 * t89 + t1109 * t7 + t1104 + t1114 + t1115) * t38 +
        (t1082 * t85 + t1086 * t13 + t1088 * t89 + t1090 * t7 + t1092 * t11 + t1085 + t1095 + t1096 + t1102) * t85 +
        (t1132 * t11 + t1120 * t38 + t1122 * t85 + t1126 * t13 + t1128 * t89 + t1130 * t7 + t1119 + t1125 + t1135 +
         t1136) *
            t83 +
        t1328 * t79 + t1336 * t195 + t1344 * t277 + t1354 * t394 + t1364 * t556 + t1374 * t726 + t1401 * t881 +
        t1412 * t1054;
    const double t1416 = a[1];
    const double t1421 = (a[455] * t2 + a[78]) * t2;
    const double t1422 = a[143];
    const double t1425 = a[127] * t2;
    const double t1426 = a[58];
    const double t1430 = a[114];
    const double t1434 = a[297];
    const double t1436 = a[329];
    const double t1437 = t11 * t1436;
    const double t1438 = a[399];
    const double t1439 = t7 * t1438;
    const double t1441 = t2 * a[203];
    const double t1442 = a[22];
    const double t1446 = a[539];
    const double t1448 = t11 * t1438;
    const double t1449 = t7 * t1436;
    const double t1453 = t31 * a[107];
    const double t1454 = a[401];
    const double t1457 = a[219];
    const double t1461 = t2 * a[632];
    const double t1462 = a[48];
    const double t1465 = a[448];
    const double t1468 = a[407] * t31;
    const double t1469 = a[396];
    const double t1471 = a[99];
    const double t1473 = a[362];
    const double t1475 = a[189];
    const double t1478 = a[545] * t2;
    const double t1479 = a[93];
    const double t1483 = a[505];
    const double t1491 = a[325];
    const double t1493 = a[363];
    const double t1497 = a[517] * t31;
    const double t1498 = a[575];
    const double t1501 = a[221];
    const double t1505 = a[544] * t2;
    const double t1506 = a[86];
    const double t1509 = a[306];
    const double t1511 = a[461];
    const double t1513 = a[648];
    const double t1517 = a[405] * t31;
    const double t1518 = a[267];
    const double t1521 = a[196];
    const double t1525 = a[222] * t2;
    const double t1526 = a[16];
    const double t1527 = t1521 * t11 + t1518 * t13 + t1509 * t79 + t1511 * t83 + t1513 * t38 + t1513 * t85 +
                         t1518 * t89 + t1521 * t7 + t1517 + t1525 + t1526;
    const double t1529 = a[333];
    const double t1531 = a[427];
    const double t1532 = t79 * t1531;
    const double t1533 = a[338];
    const double t1534 = t83 * t1533;
    const double t1535 = a[348];
    const double t1536 = t85 * t1535;
    const double t1537 = a[283];
    const double t1538 = t38 * t1537;
    const double t1540 = t31 * a[574];
    const double t1541 = a[402];
    const double t1543 = a[103];
    const double t1545 = a[530];
    const double t1547 = a[191];
    const double t1550 = t2 * a[417];
    const double t1551 = a[13];
    const double t1552 = t1545 * t11 + t1543 * t13 + t1529 * t195 + t1541 * t89 + t1547 * t7 + t1532 + t1534 + t1536 +
                         t1538 + t1540 + t1550 + t1551;
    const double t1555 = a[526];
    const double t1557 = t85 * t1537;
    const double t1558 = t38 * t1535;
    const double t1563 = t1547 * t11 + t1541 * t13 + t1529 * t277 + t1543 * t89 + t1545 * t7 + t1555 * t195 + t1532 +
                         t1534 + t1540 + t1550 + t1551 + t1557 + t1558;
    const double t1565 = a[358];
    const double t1567 = a[404];
    const double t1571 = a[591] * t79;
    const double t1572 = a[121];
    const double t1574 = a[256];
    const double t1578 = t31 * a[387];
    const double t1579 = a[334];
    const double t1582 = a[346];
    const double t1586 = t2 * a[220];
    const double t1587 = a[68];
    const double t1588 = t1582 * t11 + t1579 * t13 + t1565 * t394 + t1567 * t195 + t1567 * t277 + t1572 * t83 +
                         t1574 * t38 + t1574 * t85 + t1579 * t89 + t1582 * t7 + t1571 + t1578 + t1586 + t1587;
    const double t1590 = a[475];
    const double t1592 = a[270];
    const double t1594 = a[599];
    const double t1597 = a[227];
    const double t1600 = a[276] * t83;
    const double t1601 = a[536];
    const double t1605 = a[210] * t31;
    const double t1606 = a[299];
    const double t1609 = a[609];
    const double t1613 = t2 * a[135];
    const double t1614 = a[31];
    const double t1615 = t1609 * t11 + t1606 * t13 + t1590 * t556 + t1592 * t394 + t1594 * t195 + t1594 * t277 +
                         t1597 * t79 + t1601 * t38 + t1601 * t85 + t1606 * t89 + t1609 * t7 + t1600 + t1605 + t1613 +
                         t1614;
    const double t1618 = t726 * a[624];
    const double t1619 = a[310];
    const double t1621 = a[633];
    const double t1623 = a[252];
    const double t1626 = a[152];
    const double t1628 = a[361];
    const double t1630 = a[447];
    const double t1634 = t31 * a[375];
    const double t1635 = a[360];
    const double t1638 = a[527];
    const double t1642 = a[206] * t2;
    const double t1643 = a[70];
    const double t1644 = t1638 * t11 + t1635 * t13 + t1619 * t556 + t1621 * t394 + t1623 * t195 + t1623 * t277 +
                         t1626 * t79 + t1628 * t83 + t1630 * t38 + t1630 * t85 + t1635 * t89 + t1638 * t7 + t1618 +
                         t1634 + t1642 + t1643;
    const double t1647 = a[592] * t726;
    const double t1648 = a[557];
    const double t1649 = t1648 * t556;
    const double t1650 = a[138];
    const double t1651 = t1650 * t394;
    const double t1652 = a[236];
    const double t1654 = a[519];
    const double t1656 = a[603];
    const double t1657 = t1656 * t79;
    const double t1658 = a[428];
    const double t1659 = t1658 * t83;
    const double t1660 = a[393];
    const double t1662 = a[230];
    const double t1665 = a[371] * t31;
    const double t1666 = a[518];
    const double t1668 = a[340];
    const double t1670 = a[209];
    const double t1672 = a[342];
    const double t1675 = a[108] * t2;
    const double t1676 = a[90];
    const double t1677 = a[528];
    const double t1678 = t1677 * t881;
    const double t1679 = t1670 * t11 + t1668 * t13 + t1652 * t277 + t1654 * t195 + t1660 * t85 + t1662 * t38 +
                         t1666 * t89 + t1672 * t7 + t1647 + t1649 + t1651 + t1657 + t1659 + t1665 + t1675 + t1676 +
                         t1678;
    const double t1690 = a[106] * t881;
    const double t1691 = t1677 * t1054;
    const double t1692 = t1672 * t11 + t1666 * t13 + t1652 * t195 + t1654 * t277 + t1660 * t38 + t1662 * t85 +
                         t1668 * t89 + t1670 * t7 + t1647 + t1649 + t1651 + t1657 + t1659 + t1665 + t1675 + t1676 +
                         t1690 + t1691;
    const double t1694 = a[412];
    const double t1695 = t1694 * t1054;
    const double t1696 = t1694 * t881;
    const double t1698 = a[443] * t726;
    const double t1699 = a[462];
    const double t1701 = a[555];
    const double t1703 = a[487];
    const double t1706 = a[247];
    const double t1708 = a[650];
    const double t1710 = a[601];
    const double t1714 = a[379] * t31;
    const double t1715 = a[426];
    const double t1718 = a[442];
    const double t1722 = a[397] * t2;
    const double t1723 = a[64];
    const double t1724 = a[370];
    const double t1340 = x[3];
    const double t1726 = t1718 * t11 + t1715 * t13 + t1724 * t1340 + t1699 * t556 + t1701 * t394 + t1703 * t195 +
                         t1703 * t277 + t1706 * t79 + t1708 * t83 + t1710 * t38 + t1710 * t85 + t1715 * t89 +
                         t1718 * t7 + t1695 + t1696 + t1698 + t1714 + t1722 + t1723;
    const double t1728 =
        t1416 + t1421 + (t1422 * t7 + t1425 + t1426) * t7 + (t1422 * t11 + t1430 * t7 + t1425 + t1426) * t11 +
        (t1434 * t13 + t1437 + t1439 + t1441 + t1442) * t13 +
        (t1446 * t13 + t1434 * t89 + t1441 + t1442 + t1448 + t1449) * t89 +
        (t1457 * t11 + t1454 * t13 + t1454 * t89 + t1457 * t7 + t1453 + t1461 + t1462) * t31 +
        (t1473 * t11 + t1471 * t13 + t1465 * t38 + t1469 * t89 + t1475 * t7 + t1468 + t1478 + t1479) * t38 +
        (t1475 * t11 + t1469 * t13 + t1465 * t85 + t1471 * t89 + t1473 * t7 + t1483 * t38 + t1468 + t1478 + t1479) *
            t85 +
        (t1501 * t11 + t1498 * t13 + t1491 * t83 + t1493 * t38 + t1493 * t85 + t1498 * t89 + t1501 * t7 + t1497 +
         t1505 + t1506) *
            t83 +
        t1527 * t79 + t1552 * t195 + t1563 * t277 + t1588 * t394 + t1615 * t556 + t1644 * t726 + t1679 * t881 +
        t1692 * t1054 + t1726 * t1340;
    const double t1782 = t1579 * t11 + t1582 * t13 + t1565 * t79 + t1567 * t38 + t1567 * t85 + t1579 * t7 +
                         t1582 * t89 + t1592 * t83 + t1578 + t1586 + t1587;
    const double t1785 = t79 * t1574;
    const double t1786 = t83 * t1601;
    const double t1791 = t1469 * t11 + t1475 * t13 + t1465 * t195 + t1471 * t7 + t1473 * t89 + t1468 + t1478 + t1479 +
                         t1536 + t1538 + t1785 + t1786;
    const double t1799 = t1471 * t11 + t1473 * t13 + t1465 * t277 + t1469 * t7 + t1475 * t89 + t1483 * t195 + t1468 +
                         t1478 + t1479 + t1557 + t1558 + t1785 + t1786;
    const double t1811 = t1518 * t11 + t1521 * t13 + t1509 * t394 + t1513 * t195 + t1513 * t277 + t1518 * t7 +
                         t1521 * t89 + t1531 * t38 + t1531 * t85 + t1597 * t83 + t1517 + t1525 + t1526 + t1571;
    const double t1824 = t1498 * t11 + t1501 * t13 + t1491 * t556 + t1493 * t195 + t1493 * t277 + t1498 * t7 +
                         t1501 * t89 + t1511 * t394 + t1533 * t38 + t1533 * t85 + t1572 * t79 + t1497 + t1505 + t1506 +
                         t1600;
    const double t1838 = t1635 * t11 + t1638 * t13 + t1619 * t83 + t1621 * t79 + t1623 * t38 + t1623 * t85 +
                         t1626 * t394 + t1628 * t556 + t1630 * t195 + t1630 * t277 + t1635 * t7 + t1638 * t89 + t1618 +
                         t1634 + t1642 + t1643;
    const double t1840 = t1658 * t556;
    const double t1841 = t1656 * t394;
    const double t1844 = t1650 * t79;
    const double t1845 = t1648 * t83;
    const double t1852 = t1666 * t11 + t1672 * t13 + t1652 * t85 + t1654 * t38 + t1660 * t277 + t1662 * t195 +
                         t1668 * t7 + t1670 * t89 + t1647 + t1665 + t1675 + t1676 + t1678 + t1840 + t1841 + t1844 +
                         t1845;
    const double t1862 = t1668 * t11 + t1670 * t13 + t1652 * t38 + t1654 * t85 + t1660 * t195 + t1662 * t277 +
                         t1666 * t7 + t1672 * t89 + t1647 + t1665 + t1675 + t1676 + t1690 + t1691 + t1840 + t1841 +
                         t1844 + t1845;
    const double t1865 = a[359] * t1340;
    const double t1866 = a[241];
    const double t1871 = a[470];
    const double t1873 = a[116];
    const double t1875 = a[388];
    const double t1884 = a[309];
    const double t1892 = t1866 * t1054 + t1884 * t11 + t1884 * t13 + t1866 * t881 + t1871 * t556 + t1871 * t83 +
                         t1873 * t394 + t1873 * t79 + t1875 * t195 + t1875 * t277 + t1875 * t38 + t1875 * t85 +
                         t1884 * t7 + t1884 * t89 + t2 * a[215] + a[514] * t31 + a[420] * t726 + t1865 + a[94];
    const double t1584 = x[2];
    const double t1907 = t1715 * t11 + t1718 * t13 + t1724 * t1584 + t1699 * t83 + t1701 * t79 + t1703 * t38 +
                         t1703 * t85 + t1706 * t394 + t1708 * t556 + t1710 * t195 + t1710 * t277 + t1715 * t7 +
                         t1718 * t89 + t1695 + t1696 + t1698 + t1714 + t1722 + t1723 + t1865;
    const double t1909 =
        t1416 + t1421 + (t1434 * t7 + t1441 + t1442) * t7 + (t1434 * t11 + t1446 * t7 + t1441 + t1442) * t11 +
        (t1422 * t13 + t1425 + t1426 + t1437 + t1439) * t13 +
        (t1430 * t13 + t1422 * t89 + t1425 + t1426 + t1448 + t1449) * t89 +
        (t1454 * t11 + t1457 * t13 + t1454 * t7 + t1457 * t89 + t1453 + t1461 + t1462) * t31 +
        (t1541 * t11 + t1547 * t13 + t1529 * t38 + t1543 * t7 + t1545 * t89 + t1540 + t1550 + t1551) * t38 +
        (t1543 * t11 + t1545 * t13 + t1529 * t85 + t1541 * t7 + t1547 * t89 + t1555 * t38 + t1540 + t1550 + t1551) *
            t85 +
        (t1606 * t11 + t1609 * t13 + t1590 * t83 + t1594 * t38 + t1594 * t85 + t1606 * t7 + t1609 * t89 + t1605 +
         t1613 + t1614) *
            t83 +
        t1782 * t79 + t1791 * t195 + t1799 * t277 + t1811 * t394 + t1824 * t556 + t1838 * t726 + t1852 * t881 +
        t1862 * t1054 + t1892 * t1340 + t1907 * t1584;
    const double t1911 = a[9];
    const double t1916 = (a[308] * t2 + a[42]) * t2;
    const double t1917 = a[408];
    const double t1920 = t2 * a[619];
    const double t1921 = a[82];
    const double t1925 = a[615];
    const double t1929 = a[504];
    const double t1931 = a[245];
    const double t1932 = t11 * t1931;
    const double t1933 = a[509];
    const double t1934 = t7 * t1933;
    const double t1936 = t2 * a[610];
    const double t1937 = a[83];
    const double t1941 = a[439];
    const double t1943 = t11 * t1933;
    const double t1944 = t7 * t1931;
    const double t1948 = t31 * a[457];
    const double t1949 = a[608];
    const double t1952 = a[392];
    const double t1956 = a[167] * t2;
    const double t1957 = a[28];
    const double t1960 = a[568];
    const double t1963 = t31 * a[386];
    const double t1964 = a[639];
    const double t1966 = a[595];
    const double t1968 = a[550];
    const double t1970 = a[289];
    const double t1973 = t2 * a[214];
    const double t1974 = a[11];
    const double t1978 = a[198];
    const double t1986 = a[345];
    const double t1988 = a[381];
    const double t1992 = a[464] * t31;
    const double t1993 = a[414];
    const double t1996 = a[337];
    const double t2000 = a[554] * t2;
    const double t2001 = a[57];
    const double t2005 = a[368];
    const double t2007 = a[157];
    const double t2009 = a[188];
    const double t2013 = a[589] * t31;
    const double t2014 = a[463];
    const double t2017 = a[538];
    const double t2021 = a[468] * t2;
    const double t2022 = a[88];
    const double t2023 = t11 * t2017 + t13 * t2014 + t2005 * t79 + t2007 * t83 + t2009 * t38 + t2009 * t85 +
                         t2014 * t89 + t2017 * t7 + t2013 + t2021 + t2022;
    const double t2025 = a[169];
    const double t2027 = a[226];
    const double t2028 = t79 * t2027;
    const double t2029 = a[326];
    const double t2030 = t83 * t2029;
    const double t2031 = a[259];
    const double t2032 = t85 * t2031;
    const double t2033 = a[300];
    const double t2034 = t38 * t2033;
    const double t2036 = a[590] * t31;
    const double t2037 = a[97];
    const double t2039 = a[162];
    const double t2041 = a[564];
    const double t2043 = a[112];
    const double t2046 = t2 * a[583];
    const double t2047 = a[21];
    const double t2048 = t11 * t2041 + t13 * t2039 + t195 * t2025 + t2037 * t89 + t2043 * t7 + t2028 + t2030 + t2032 +
                         t2034 + t2036 + t2046 + t2047;
    const double t2051 = a[109];
    const double t2053 = t85 * t2033;
    const double t2054 = t38 * t2031;
    const double t2059 = t11 * t2043 + t13 * t2037 + t195 * t2051 + t2025 * t277 + t2039 * t89 + t2041 * t7 + t2028 +
                         t2030 + t2036 + t2046 + t2047 + t2053 + t2054;
    const double t2061 = a[496];
    const double t2063 = a[296];
    const double t2067 = a[322] * t79;
    const double t2068 = a[181];
    const double t2070 = a[604];
    const double t2074 = a[631] * t31;
    const double t2075 = a[156];
    const double t2078 = a[193];
    const double t2082 = a[263] * t2;
    const double t2083 = a[17];
    const double t2084 = t11 * t2078 + t13 * t2075 + t195 * t2063 + t2061 * t394 + t2063 * t277 + t2068 * t83 +
                         t2070 * t38 + t2070 * t85 + t2075 * t89 + t2078 * t7 + t2067 + t2074 + t2082 + t2083;
    const double t2086 = a[176];
    const double t2088 = a[593];
    const double t2090 = a[383];
    const double t2093 = a[497];
    const double t2096 = a[441] * t83;
    const double t2097 = a[380];
    const double t2101 = a[452] * t31;
    const double t2102 = a[520];
    const double t2105 = a[290];
    const double t2109 = a[253] * t2;
    const double t2110 = a[30];
    const double t2111 = t11 * t2105 + t13 * t2102 + t195 * t2090 + t2086 * t556 + t2088 * t394 + t2090 * t277 +
                         t2093 * t79 + t2097 * t38 + t2097 * t85 + t2102 * t89 + t2105 * t7 + t2096 + t2101 + t2109 +
                         t2110;
    const double t2114 = t726 * a[546];
    const double t2115 = a[478];
    const double t2117 = a[611];
    const double t2119 = a[159];
    const double t2122 = a[425];
    const double t2124 = a[572];
    const double t2126 = a[123];
    const double t2130 = a[506] * t31;
    const double t2131 = a[192];
    const double t2134 = a[567];
    const double t2138 = a[246] * t2;
    const double t2139 = a[89];
    const double t2140 = t11 * t2134 + t13 * t2131 + t195 * t2119 + t2115 * t556 + t2117 * t394 + t2119 * t277 +
                         t2122 * t79 + t2124 * t83 + t2126 * t38 + t2126 * t85 + t2131 * t89 + t2134 * t7 + t2114 +
                         t2130 + t2138 + t2139;
    const double t2143 = a[315] * t726;
    const double t2144 = a[534];
    const double t2145 = t2144 * t556;
    const double t2146 = a[503];
    const double t2147 = t2146 * t394;
    const double t2148 = a[268];
    const double t2150 = a[480];
    const double t2152 = a[423];
    const double t2153 = t2152 * t79;
    const double t2154 = a[413];
    const double t2155 = t2154 * t83;
    const double t2156 = a[645];
    const double t2158 = a[606];
    const double t2161 = a[172] * t31;
    const double t2162 = a[130];
    const double t2164 = a[313];
    const double t2166 = a[410];
    const double t2168 = a[376];
    const double t2171 = a[200] * t2;
    const double t2172 = a[66];
    const double t2173 = a[566];
    const double t2174 = t2173 * t881;
    const double t2175 = t11 * t2166 + t13 * t2164 + t195 * t2150 + t2148 * t277 + t2156 * t85 + t2158 * t38 +
                         t2162 * t89 + t2168 * t7 + t2143 + t2145 + t2147 + t2153 + t2155 + t2161 + t2171 + t2172 +
                         t2174;
    const double t2178 = a[501] * t881;
    const double t2187 = t2173 * t1054;
    const double t2188 = t11 * t2168 + t13 * t2162 + t195 * t2148 + t2150 * t277 + t2156 * t38 + t2158 * t85 +
                         t2164 * t89 + t2166 * t7 + t2143 + t2145 + t2147 + t2153 + t2155 + t2161 + t2171 + t2172 +
                         t2178 + t2187;
    const double t2190 = a[586];
    const double t2191 = t2190 * t1054;
    const double t2192 = t2190 * t881;
    const double t2194 = a[197] * t726;
    const double t2195 = a[100];
    const double t2197 = a[469];
    const double t2199 = a[180];
    const double t2202 = a[560];
    const double t2204 = a[529];
    const double t2206 = a[312];
    const double t2210 = a[479] * t31;
    const double t2211 = a[543];
    const double t2214 = a[266];
    const double t2218 = a[459] * t2;
    const double t2219 = a[45];
    const double t2220 = a[254];
    const double t2222 = t11 * t2214 + t13 * t2211 + t1340 * t2220 + t195 * t2199 + t2195 * t556 + t2197 * t394 +
                         t2199 * t277 + t2202 * t79 + t2204 * t83 + t2206 * t38 + t2206 * t85 + t2211 * t89 +
                         t2214 * t7 + t2191 + t2192 + t2194 + t2210 + t2218 + t2219;
    const double t2224 = a[264];
    const double t2225 = t2224 * t1054;
    const double t2226 = t2224 * t881;
    const double t2228 = a[598] * t726;
    const double t2229 = a[540];
    const double t2231 = a[431];
    const double t2233 = a[238];
    const double t2236 = a[317];
    const double t2238 = a[510];
    const double t2240 = a[523];
    const double t2244 = a[406] * t31;
    const double t2245 = a[298];
    const double t2248 = a[411];
    const double t2252 = t2 * a[450];
    const double t2253 = a[35];
    const double t2255 = a[319] * t1340;
    const double t2256 = a[102];
    const double t2258 = t11 * t2248 + t13 * t2245 + t1584 * t2256 + t195 * t2233 + t2229 * t556 + t2231 * t394 +
                         t2233 * t277 + t2236 * t79 + t2238 * t83 + t2240 * t38 + t2240 * t85 + t2245 * t89 +
                         t2248 * t7 + t2225 + t2226 + t2228 + t2244 + t2252 + t2253 + t2255;
    const double t2260 = a[502];
    const double t2261 = t2260 * t1054;
    const double t2262 = t2260 * t881;
    const double t2264 = a[541] * t726;
    const double t2265 = a[500];
    const double t2267 = a[588];
    const double t2269 = a[559];
    const double t2272 = a[307];
    const double t2274 = a[255];
    const double t2276 = a[182];
    const double t2279 = a[390];
    const double t2281 = a[265];
    const double t2283 = a[146];
    const double t2287 = a[195] * t31;
    const double t2288 = a[183];
    const double t2291 = a[453];
    const double t2295 = a[638] * t2;
    const double t2296 = a[51];
    const double t1859 = x[1];
    const double t2297 = t11 * t2291 + t13 * t2288 + t1340 * t2283 + t1584 * t2281 + t1859 * t2279 + t2276 * t38 +
                         t2288 * t89 + t2291 * t7 + t2287 + t2295 + t2296;
    const double t1891 = t195 * t2269 + t2265 * t556 + t2267 * t394 + t2269 * t277 + t2272 * t79 + t2274 * t83 +
                         t2276 * t85 + t2261 + t2262 + t2264 + t2297;
    const double t2300 = t1054 * t2188 + t1340 * t2222 + t1584 * t2258 + t1859 * t1891 + t195 * t2048 + t2023 * t79 +
                         t2059 * t277 + t2084 * t394 + t2111 * t556 + t2140 * t726 + t2175 * t881;
    const double t2355 = t11 * t2075 + t13 * t2078 + t2061 * t79 + t2063 * t38 + t2063 * t85 + t2075 * t7 +
                         t2078 * t89 + t2088 * t83 + t2074 + t2082 + t2083;
    const double t2357 =
        t1911 + t1916 + (t1929 * t7 + t1936 + t1937) * t7 + (t11 * t1929 + t1941 * t7 + t1936 + t1937) * t11 +
        (t13 * t1917 + t1920 + t1921 + t1932 + t1934) * t13 +
        (t13 * t1925 + t1917 * t89 + t1920 + t1921 + t1943 + t1944) * t89 +
        (t11 * t1949 + t13 * t1952 + t1949 * t7 + t1952 * t89 + t1948 + t1956 + t1957) * t31 +
        (t11 * t2037 + t13 * t2043 + t2025 * t38 + t2039 * t7 + t2041 * t89 + t2036 + t2046 + t2047) * t38 +
        (t11 * t2039 + t13 * t2041 + t2025 * t85 + t2037 * t7 + t2043 * t89 + t2051 * t38 + t2036 + t2046 + t2047) *
            t85 +
        (t11 * t2102 + t13 * t2105 + t2086 * t83 + t2090 * t38 + t2090 * t85 + t2102 * t7 + t2105 * t89 + t2101 +
         t2109 + t2110) *
            t83 +
        t2355 * t79;
    const double t2359 = t79 * t2070;
    const double t2360 = t83 * t2097;
    const double t2365 = t11 * t1964 + t13 * t1970 + t195 * t1960 + t1966 * t7 + t1968 * t89 + t1963 + t1973 + t1974 +
                         t2032 + t2034 + t2359 + t2360;
    const double t2373 = t11 * t1966 + t13 * t1968 + t195 * t1978 + t1960 * t277 + t1964 * t7 + t1970 * t89 + t1963 +
                         t1973 + t1974 + t2053 + t2054 + t2359 + t2360;
    const double t2385 = t11 * t2014 + t13 * t2017 + t195 * t2009 + t2005 * t394 + t2009 * t277 + t2014 * t7 +
                         t2017 * t89 + t2027 * t38 + t2027 * t85 + t2093 * t83 + t2013 + t2021 + t2022 + t2067;
    const double t2398 = t11 * t1993 + t13 * t1996 + t195 * t1988 + t1986 * t556 + t1988 * t277 + t1993 * t7 +
                         t1996 * t89 + t2007 * t394 + t2029 * t38 + t2029 * t85 + t2068 * t79 + t1992 + t2000 + t2001 +
                         t2096;
    const double t2412 = t11 * t2131 + t13 * t2134 + t195 * t2126 + t2115 * t83 + t2117 * t79 + t2119 * t38 +
                         t2119 * t85 + t2122 * t394 + t2124 * t556 + t2126 * t277 + t2131 * t7 + t2134 * t89 + t2114 +
                         t2130 + t2138 + t2139;
    const double t2414 = t2154 * t556;
    const double t2415 = t2152 * t394;
    const double t2418 = t2146 * t79;
    const double t2419 = t2144 * t83;
    const double t2426 = t11 * t2162 + t13 * t2168 + t195 * t2158 + t2148 * t85 + t2150 * t38 + t2156 * t277 +
                         t2164 * t7 + t2166 * t89 + t2143 + t2161 + t2171 + t2172 + t2174 + t2414 + t2415 + t2418 +
                         t2419;
    const double t2436 = t11 * t2164 + t13 * t2166 + t195 * t2156 + t2148 * t38 + t2150 * t85 + t2158 * t277 +
                         t2162 * t7 + t2168 * t89 + t2143 + t2161 + t2171 + t2172 + t2178 + t2187 + t2414 + t2415 +
                         t2418 + t2419;
    const double t2451 = t11 * t2245 + t13 * t2248 + t1340 * t2256 + t195 * t2240 + t2229 * t83 + t2231 * t79 +
                         t2233 * t38 + t2233 * t85 + t2236 * t394 + t2238 * t556 + t2240 * t277 + t2245 * t7 +
                         t2248 * t89 + t2225 + t2226 + t2228 + t2244 + t2252 + t2253;
    const double t2466 = t11 * t2211 + t13 * t2214 + t1584 * t2220 + t195 * t2206 + t2195 * t83 + t2197 * t79 +
                         t2199 * t38 + t2199 * t85 + t2202 * t394 + t2204 * t556 + t2206 * t277 + t2211 * t7 +
                         t2214 * t89 + t2191 + t2192 + t2194 + t2210 + t2218 + t2219 + t2255;
    const double t2469 = a[101] * t1859;
    const double t2470 = a[476];
    const double t2473 = a[643];
    const double t2478 = a[131];
    const double t2480 = a[492];
    const double t2482 = a[185];
    const double t2492 = a[440];
    const double t2500 = t11 * t2492 + t13 * t2492 + t2 * a[212] + t2478 * t83 + t2480 * t79 + t2482 * t38 +
                         t2482 * t85 + t2492 * t7 + t2492 * t89 + t31 * a[279] + a[34];
    const double t2511 = t195 * t2276 + t2265 * t83 + t2267 * t79 + t2269 * t38 + t2269 * t85 + t2272 * t394 +
                         t2274 * t556 + t2276 * t277 + t2261 + t2262 + t2264;
    const double t2184 = x[0];
    const double t2519 = t11 * t2288 + t13 * t2291 + t1340 * t2281 + t1584 * t2283 + t2184 * t2279 + t2288 * t7 +
                         t2291 * t89 + t2287 + t2295 + t2296 + t2469;
    const double t2239 = t1054 * t2473 + t1340 * t2470 + t1584 * t2470 + t195 * t2482 + t2473 * t881 + t2478 * t556 +
                         t2480 * t394 + t2482 * t277 + t726 * a[573] + t2469 + t2500;
    const double t2522 = t2365 * t195 + t2373 * t277 + t2385 * t394 + t2398 * t556 + t2412 * t726 + t2426 * t881 +
                         t2436 * t1054 + t2451 * t1340 + t2466 * t1584 + t2239 * t1859 + (t2511 + t2519) * t2184;
    const double t2325 =
        t1911 + t1916 + (t1917 * t7 + t1920 + t1921) * t7 + (t11 * t1917 + t1925 * t7 + t1920 + t1921) * t11 +
        (t13 * t1929 + t1932 + t1934 + t1936 + t1937) * t13 +
        (t13 * t1941 + t1929 * t89 + t1936 + t1937 + t1943 + t1944) * t89 +
        (t11 * t1952 + t13 * t1949 + t1949 * t89 + t1952 * t7 + t1948 + t1956 + t1957) * t31 +
        (t11 * t1968 + t13 * t1966 + t1960 * t38 + t1964 * t89 + t1970 * t7 + t1963 + t1973 + t1974) * t38 +
        (t11 * t1970 + t13 * t1964 + t1960 * t85 + t1966 * t89 + t1968 * t7 + t1978 * t38 + t1963 + t1973 + t1974) *
            t85 +
        (t11 * t1996 + t13 * t1993 + t1986 * t83 + t1988 * t38 + t1988 * t85 + t1993 * t89 + t1996 * t7 + t1992 +
         t2000 + t2001) *
            t83 +
        t2300;
    const double t2525 = t561 * t195 + t630 * t277 + t735 * t394 + t842 * t556 + t1031 * t726 + t1278 * t881 +
                         t1414 * t1054 + t1728 * t1340 + t1909 * t1584 + t2325 * t1859 + (t2357 + t2522) * t2184;
    return ((a[2] + (a[216] * t2 + a[71]) * t2) * t2 + (t9 + t14 + (t15 * t7 + t18 + t19) * t7) * t7 +
            (t9 + t14 + (t25 + t27 + t28) * t7 + (t11 * t15 + t18 + t19 + t25) * t11) * t11 +
            (t9 + t14 + (t37 + t39 + t40) * t7 + (t44 + t46 + t48 + t49) * t11 +
             (t13 * t15 + t18 + t19 + t37 + t44) * t13) *
                t13 +
            (t9 + t14 + (t57 + t48 + t49) * t7 + (t60 + t46 + t39 + t40) * t11 +
             (t11 * t45 + t27 + t28 + t46 + t63) * t13 + (t15 * t89 + t18 + t19 + t57 + t60 + t63) * t89) *
                t89 +
            (a[3] + (a[128] * t2 + a[63]) * t2 + (t7 * t78 + t81 + t82) * t7 +
             (t11 * t78 + t7 * t86 + t81 + t82) * t11 + (t11 * t91 + t13 * t78 + t7 * t93 + t81 + t82) * t13 +
             (t11 * t93 + t13 * t86 + t7 * t91 + t78 * t89 + t81 + t82) * t89 +
             (t105 * t11 + t105 * t13 + t105 * t7 + t105 * t89 + t2 * a[366] + t31 * a[486] + a[80]) * t31) *
                t31 +
            (t117 + t122 + (t123 * t7 + t126 + t127) * t7 + (t11 * t130 + t133 + t135 + t136) * t11 +
             (t13 * t139 + t142 + t144 + t146 + t147) * t13 + (t150 * t89 + t153 + t155 + t157 + t159 + t160) * t89 +
             (t11 * t169 + t13 * t167 + t165 * t89 + t171 * t7 + t164 + t174 + t175) * t31 +
             (t11 * t186 + t13 * t184 + t178 * t38 + t182 * t89 + t188 * t7 + t181 + t191 + t192) * t38) *
                t38 +
            (t117 + t122 + (t130 * t7 + t135 + t136) * t7 + (t11 * t123 + t126 + t127 + t133) * t11 +
             (t13 * t150 + t159 + t160 + t204 + t205) * t13 + (t139 * t89 + t146 + t147 + t153 + t209 + t210) * t89 +
             (t11 * t171 + t13 * t165 + t167 * t89 + t169 * t7 + t164 + t174 + t175) * t31 +
             (t11 * t226 + t13 * t223 + t223 * t89 + t226 * t7 + t220 + t222 + t230 + t231) * t38 +
             (t11 * t188 + t13 * t182 + t178 * t85 + t184 * t89 + t186 * t7 + t181 + t191 + t192 + t220) * t85) *
                t85 +
            (t243 + t248 + (t249 * t7 + t252 + t253) * t7 + (t11 * t249 + t257 * t7 + t252 + t253) * t11 +
             (t13 * t261 + t264 + t266 + t268 + t269) * t13 +
             (t13 * t273 + t261 * t89 + t268 + t269 + t275 + t276) * t89 +
             (t11 * t284 + t13 * t281 + t281 * t89 + t284 * t7 + t280 + t288 + t289) * t31 +
             (t11 * t300 + t13 * t298 + t292 * t38 + t296 * t89 + t302 * t7 + t295 + t305 + t306) * t38 +
             (t11 * t302 + t13 * t296 + t292 * t85 + t298 * t89 + t300 * t7 + t310 * t38 + t295 + t305 + t306) * t85 +
             (t11 * t328 + t13 * t325 + t318 * t83 + t320 * t38 + t320 * t85 + t325 * t89 + t328 * t7 + t324 + t332 +
              t333) *
                 t83) *
                t83 +
            t451 * t79 + t2525);
}

}  // namespace mbnrg__o_A1_B1C1_B1C1_D2_c__deg3
