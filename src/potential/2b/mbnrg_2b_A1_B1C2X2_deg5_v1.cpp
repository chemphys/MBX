#include "mbnrg_2b_A1_B1C2X2_deg5_v1.h"

////////////////////////////////////////////////////////////////////////////////

namespace mbnrg_A1_B1C2X2_deg5 {

mbnrg_A1_B1C2X2_deg5_v1::mbnrg_A1_B1C2X2_deg5_v1(const std::string mon1, const std::string mon2) {

    // =====>> BEGIN SECTION CONSTRUCTOR <<=====
    // =>> PASTE RIGHT BELOW THIS LINE <==

    if (mon1 == "cl" and mon2 == "h2o") {
        coefficients = std::vector<double> {
            -1.719084911186973e+02, // 0
             3.214406441805077e+01, // 1
             1.699226912199115e+02, // 2
             2.715147131617772e+02, // 3
             1.569120305773518e+02, // 4
            -8.827401667470039e+02, // 5
            -5.697239522964946e+01, // 6
            -4.203367229346615e+01, // 7
            -3.648619871328586e+02, // 8
            -1.905609325516900e+02, // 9
            -1.653172340059747e+02, // 10
            -2.177562728634592e+02, // 11
            -1.165826773887608e+02, // 12
            -1.591109593895293e+02, // 13
             2.456239311389059e+02, // 14
            -1.039741548086015e+03, // 15
             3.804303511509534e+02, // 16
            -1.035373380155174e+02, // 17
            -2.798111254489565e+02, // 18
             1.894380424263146e+02, // 19
            -1.704569061222058e+01, // 20
             4.071264110739757e+01, // 21
             1.325446948363922e+02, // 22
            -5.025310348347250e+02, // 23
            -2.496395725164767e+01, // 24
             4.463140498946347e+02, // 25
            -5.935667611651459e+02, // 26
            -1.864652524569717e+02, // 27
            -3.521398084243360e+02, // 28
            -5.062342203523841e+02, // 29
             2.957275576076072e+02, // 30
            -1.132131851025447e+03, // 31
             1.932550134778130e+02, // 32
             4.301355179348129e+02, // 33
             4.524849053993635e+01, // 34
             1.141519573445713e+02, // 35
             8.671500200022123e+02, // 36
             1.371294479905114e+03, // 37
            -1.453516403238562e+02, // 38
            -2.948950537749859e+01, // 39
             4.672908796044532e+02, // 40
             6.987876213731774e+01, // 41
            -2.069601605482899e+00, // 42
             4.571315570228255e+01, // 43
             4.438643068572044e+02, // 44
            -5.180776691734892e+02, // 45
             6.560298897851961e+02, // 46
             1.705563254154638e+03, // 47
            -1.194550616360134e+02, // 48
             1.448810644452232e+02, // 49
             2.074439958080168e+02, // 50
            -8.623106247232423e+01, // 51
            -7.772224443333414e+00, // 52
             4.131583822370157e+02, // 53
            -6.667020898644084e+01, // 54
            -4.865539079471862e+02, // 55
            -6.920419329331838e+02, // 56
            -1.796306969911556e+02, // 57
            -2.605698638225028e+02, // 58
             1.840073704508947e+02, // 59
             3.770803961320876e+02, // 60
             6.210995824750831e+01, // 61
            -2.194704571741206e+02, // 62
             7.364080918030013e+02, // 63
             3.438847958097328e+02, // 64
             4.816354475610662e+01, // 65
             1.096178237459524e+02, // 66
             3.785907152380760e+02, // 67
            -7.383096897344802e+01, // 68
             5.582710383955458e+02, // 69
             7.392747903841149e+01, // 70
            -2.918064873034255e+02, // 71
            -2.237677693814074e+02, // 72
            -2.776275947348011e+01, // 73
            -8.393897343796416e+00, // 74
             5.339091355062646e+01, // 75
            -2.691323943320477e+01, // 76
             2.126181225945904e+02, // 77
             7.596407957286284e+01, // 78
            -1.344407945020435e+02, // 79
             3.750257031305120e+02, // 80
             1.007368345332164e+02, // 81
            -1.418203331432561e+02, // 82
            -3.136715492487596e+02, // 83
             3.164567900992373e+01, // 84
             4.831044821316042e+02, // 85
             2.318442037981505e+02, // 86
            -7.707194238850337e+01, // 87
             9.995221600176819e+01, // 88
             1.255739960890392e+02, // 89
             2.908784597839067e+02, // 90
             1.219237694007796e+02, // 91
             6.820364271615312e+02, // 92
             9.459141063972393e+01, // 93
             8.572259297187944e+01, // 94
            -3.043240528371946e+02, // 95
             1.744155269131896e+02, // 96
            -7.184911064529867e+01, // 97
            -2.943678685507367e+02, // 98
             2.784438876775823e+02, // 99
             4.067329142216893e+02, // 100
            -7.630910888365078e+00, // 101
            -9.281056973702473e+02, // 102
             2.426733157772508e+03, // 103
            -3.259316010439491e+02, // 104
             2.900604876946230e+02, // 105
            -2.026735016990825e+02, // 106
             4.544007573034098e+02, // 107
            -6.498334028727754e+00, // 108
            -1.290192936297302e+02, // 109
            -5.691501367926703e+01, // 110
            -2.798517666699767e+02, // 111
             4.872043860490318e+02, // 112
            -1.368743721546722e+03, // 113
            -4.099506992201107e+02, // 114
            -2.140630051244751e+02, // 115
             5.807445160359887e+01, // 116
            -9.332830813540049e+02, // 117
             2.126988877349949e+02, // 118
             8.601683735145992e+02, // 119
            -4.586662677982741e+02, // 120
            -1.414508029683506e+02, // 121
             6.416838338080295e+02, // 122
             1.113592846094216e+02, // 123
            -3.109705234729228e+02, // 124
             1.223211691968788e+02, // 125
             1.098513672790609e+03, // 126
            -6.412015664993338e+01, // 127
             2.242805368516291e+00, // 128
             1.953706541927045e+02, // 129
             3.699271024474608e+02, // 130
             4.615794927293901e+02, // 131
             1.641698401224360e+02, // 132
            -6.001671985657961e+01, // 133
            -8.103765139726597e+02, // 134
             2.287523980273428e+02, // 135
             1.119352875119491e+02, // 136
             2.070890147823135e+02, // 137
             2.178229636377566e+03, // 138
             1.997677144399166e+02, // 139
             6.470707653664477e+02, // 140
             3.139539855015432e+01, // 141
             1.481780133068043e+01, // 142
            -9.518071818337850e+01, // 143
            -8.979218593146584e+01, // 144
             7.401161502421077e+01, // 145
             1.511261697443991e+02, // 146
             2.180521250651241e+02, // 147
             1.331883960545314e+02, // 148
             1.465815520374354e+02, // 149
            -4.970082029812530e+01, // 150
             9.352816323482064e+01, // 151
             9.088980894124709e+02, // 152
             8.372964406560837e+02, // 153
            -3.588562061847811e+02, // 154
            -5.178730331698655e+02, // 155
             4.986199724626170e+01, // 156
            -8.020447495123986e+01, // 157
            -1.494977703313551e+03, // 158
             4.145550908246554e+02, // 159
            -3.219962185881723e+02, // 160
            -1.653443166061632e+02, // 161
             1.278044659613168e+02, // 162
             9.861182879050104e+02, // 163
             4.741877035913537e+01, // 164
             3.186337305103898e+00, // 165
            -1.812840702796415e+02, // 166
             4.649455915837993e+01, // 167
             1.506553669320478e+02, // 168
             2.516109832548667e+02, // 169
            -6.997366211557859e+01, // 170
            -9.967894069940107e+01, // 171
            -8.289993746626229e+02, // 172
            -2.748764165785191e+02, // 173
             5.881200728254258e+02, // 174
            -7.650432728514033e+01, // 175
            -8.578257742715834e+01, // 176
            -1.221782529341093e+02, // 177
             6.054422167043951e+01, // 178
            -6.712570217612351e+01, // 179
             3.331791774055143e+02, // 180
             2.312813197673230e+02, // 181
             7.015896092058243e+01, // 182
             1.033981486863057e+03, // 183
            -2.626218561470721e+02, // 184
            -5.192325100751309e+02, // 185
            -1.832865476760884e+02, // 186
             1.253275120788683e+02, // 187
            -4.125926598795473e+02, // 188
            -8.223273585531990e+01, // 189
            -1.493957903767881e+02, // 190
             2.645331390138773e+02, // 191
            -4.100843372823238e+02, // 192
             3.244148072438009e+01, // 193
             7.134190198484015e+01, // 194
             3.159487392387407e+02, // 195
            -4.671400375918116e+02, // 196
             1.774118486053641e+02, // 197
            -1.819601630121134e+02, // 198
            -5.337446001032646e+02, // 199
            -2.091751511255996e+02, // 200
            -1.419979113006544e+02, // 201
             1.703633686555460e+02, // 202
            -4.484184887945343e+01, // 203
             8.441669208392922e+01, // 204
             4.168172081919410e+02, // 205
            -1.472980916800352e+02, // 206
             6.163123712746214e+01, // 207
             1.994261022684418e+02, // 208
            -2.830705079261521e+02, // 209
             3.538838886292083e+02, // 210
            -5.080656939602828e+02, // 211
             2.591262956292388e+02, // 212
            -4.724381566639974e+01, // 213
             4.542361321292742e+01, // 214
             1.056452533163860e+02, // 215
            -2.747325857912450e+02, // 216
             7.073356944613440e+02, // 217
            -1.109622429716377e+03, // 218
             6.530701705607568e+02, // 219
            -8.533205909281135e+02, // 220
             6.906464391228411e+02, // 221
             2.043294420719028e+02, // 222
             2.812180977312522e+02, // 223
            -3.741466823512159e+02, // 224
            -1.960093937920555e+03, // 225
             3.094127454166646e+02, // 226
            -1.324444092056346e+03, // 227
             3.755195744448865e+02, // 228
            -3.606190659640915e+02, // 229
             7.742089070245754e+01, // 230
             5.513377815720326e+02, // 231
             2.932552028978880e+01, // 232
             3.346872135541380e+03, // 233
            -6.848539024116609e+02, // 234
             1.451705314796581e+03, // 235
            -6.820823204898376e+01, // 236
            -2.550099555846953e+02, // 237
             1.455605943834844e+02, // 238
             7.427780120380937e+02, // 239
            -2.241739905692684e+00, // 240
            -2.231358872541822e+02, // 241
            -2.266965459347626e+01, // 242
             5.063963103805192e+01, // 243
             1.368819051346321e+02, // 244
            -2.120079270006691e+02, // 245
            -4.161364833105661e+01, // 246
            -5.807926040359191e+02, // 247
            -7.625628279332562e+02, // 248
            -8.807142924053000e+00, // 249
             3.752004771308057e+02, // 250
             2.667541422833371e+02, // 251
             2.543613384802568e+02, // 252
            -1.796157811210735e+02, // 253
             9.871478257231261e+01, // 254
            -5.072645910153503e+00, // 255
            -3.305672039344526e+02, // 256
             6.792350958228753e+02, // 257
             4.374049024955523e+02, // 258
            -4.861022831734001e+02, // 259
             3.452865824971620e+02, // 260
             1.258004571904652e+02, // 261
            -1.135928818772054e+03, // 262
            -5.589209392368876e+02, // 263
            -5.505550876450143e+02, // 264
            -3.225040989837113e+02, // 265
            -2.807344412447127e+02, // 266
            -2.690017153022015e+03, // 267
            -5.730855094811521e+01, // 268
             2.265406464447476e+02, // 269
            -4.059772070951851e+02, // 270
             2.815931341940233e+02, // 271
            -3.719706218874915e+01, // 272
             1.000413114906165e+02, // 273
            -3.552935367380725e+01, // 274
             8.255884022775395e+01, // 275
            -1.266036673495380e+03, // 276
            -1.185986274768647e+01, // 277
            -1.145929606722062e+02, // 278
            -3.467134465925291e+02, // 279
            -8.564882519274906e+01, // 280
            -6.428062038476509e+02, // 281
             3.884840998075517e+01, // 282
            -4.937561618002570e+02, // 283
            -4.605470642175003e+02, // 284
            -5.949249046471950e+02, // 285
            -7.323442915247989e+02, // 286
             2.628240734479154e+01, // 287
            -3.173095319338232e+01, // 288
             1.947799847857285e+02, // 289
            -5.549572426898900e+02, // 290
            -1.128220598933972e+02, // 291
            -2.564613718911344e+02, // 292
            -3.999524575759024e+02, // 293
             5.136142305550547e+02, // 294
            -9.241007345411265e+01, // 295
             8.339175148167165e+00, // 296
            -2.250557642479958e+02, // 297
            -3.301774908542973e+02, // 298
            -8.649773196977658e+01, // 299
            -3.633391470801409e+02, // 300
             1.395711551308754e+01, // 301
             7.798764179093670e+02, // 302
             2.734941229924676e+02, // 303
             7.754291197022686e+02, // 304
            -4.715860210907678e+02, // 305
             1.056733284349575e+02, // 306
             1.485491318291928e+03, // 307
             1.387890423160101e+03, // 308
            -1.131120289920475e+02, // 309
             4.027526043635190e+02, // 310
             5.782505137266253e+02, // 311
            -3.220547787692844e+02, // 312
            -8.006397847802759e+01, // 313
             3.020399285940645e+01, // 314
             1.787179425735636e+02, // 315
            -6.268477007925072e+02, // 316
            -1.417687047553808e+02, // 317
             1.773799090139185e+02, // 318
             6.767054626976186e+01, // 319
            -2.232111183337947e+02, // 320
            -9.894334486983971e+01, // 321
            -2.654648691645486e+02, // 322
             1.141255177981762e+01, // 323
            -3.481154510317153e+01, // 324
            -3.498020340941293e+02, // 325
             3.058017687219413e+02, // 326
            -5.815094571083131e+02, // 327
            -4.446313055852006e+02, // 328
             5.549026659724477e+02, // 329
             1.099363312059427e+02, // 330
             3.612299700251562e+01, // 331
             7.427500677279696e+00, // 332
             6.933526415935186e+02, // 333
             5.015177248930192e+00, // 334
            -2.597444089231828e+01, // 335
            -1.111503197845588e+01, // 336
            -1.556619388273081e+02, // 337
            -2.203107369711945e+03, // 338
            -3.758328526351902e+02, // 339
             2.306964469293084e+02, // 340
             5.917030598745570e+02, // 341
             6.858692157628006e+01, // 342
             1.339745185273391e+02, // 343
             2.521771662286622e+02, // 344
             8.348206613868504e+01, // 345
            -2.039887091324624e+02, // 346
            -5.603400681178378e+01, // 347
             2.250875948335020e+02, // 348
             1.616733294459769e+01, // 349
            -3.205627894246927e+01, // 350
            -8.449619575624712e+01, // 351
            -4.956876847564604e+02, // 352
            -1.162076794707883e+02, // 353
             5.105717838976157e+02, // 354
            -1.293410105365779e+02, // 355
            -9.525616037717459e+02, // 356
            -1.328364413839072e+03, // 357
            -6.675814305620964e+02, // 358
            -1.962035995800302e+02, // 359
            -1.193356561170052e+03, // 360
             4.120148006578080e+02, // 361
             3.709725264140880e+02, // 362
             1.130973313170459e+03, // 363
             1.421483685851259e+02, // 364
             2.880830111277031e+02, // 365
            -5.870981539474451e+01, // 366
            -8.506378018355406e+02, // 367
            -8.863423936792371e+00, // 368
            -3.786136972972394e+00, // 369
            -4.209105777057104e+02, // 370
            -6.108667291872835e+02, // 371
            -1.486189855222292e+03, // 372
             4.455807703459924e+02, // 373
             1.439811745337362e+02, // 374
             1.134765801246854e+02, // 375
             3.944334424787540e+02, // 376
            -7.961928495533856e+02, // 377
            -7.246664566509217e+01, // 378
             2.105921649894116e+02, // 379
            -3.542696155275420e+02, // 380
            -3.573114845555489e+02, // 381
             3.412380157915803e+02, // 382
            -4.805433807590007e+01, // 383
            -4.245651553775644e+01, // 384
             1.172843148516162e+02, // 385
             6.037230839978771e+01, // 386
            -3.337224157633927e+02, // 387
             3.101812457513548e+02, // 388
            -1.993747414161779e+02, // 389
            -1.804659491352808e+01, // 390
             8.427362156746055e+01, // 391
             7.392744163490623e+01, // 392
            -2.263585248066430e+02, // 393
            -6.445541728739823e+02, // 394
            -5.323198912733704e+02, // 395
             1.458735654256705e+01, // 396
            -3.590596676469402e+02, // 397
             9.466428151483143e+01, // 398
             6.102082985740095e+02, // 399
             1.607189995917636e+02, // 400
            -2.203543197786889e+02, // 401
            -2.722827180124510e+02, // 402
             2.412576161459669e+02, // 403
            -1.946651991142647e+02, // 404
             9.968793122307297e+01, // 405
            -1.268792917863749e+03, // 406
             4.389869798636363e+02, // 407
            -7.254663185510850e+02, // 408
             3.976230629638118e+02, // 409
            -5.187536247132067e+02, // 410
             9.069025033884268e+00, // 411
            -4.290372403256408e+02, // 412
             2.155635028150607e+01, // 413
            -1.242144850189108e+02, // 414
            -8.377247173678415e+02, // 415
             1.395917368647847e+02, // 416
             1.461688713071511e+02, // 417
             1.459311683262261e+01, // 418
            -1.165861281685807e+02, // 419
             1.833674570568972e+02, // 420
             1.497776764444822e+02, // 421
             5.399162471917379e+02, // 422
            -3.625186578866123e+01, // 423
            -5.314674356705993e+00, // 424
            -4.910510901446549e+02, // 425
            -7.421235298729655e+01, // 426
            -8.895391664184085e+02, // 427
             3.227088890145434e+01, // 428
             7.479266930940882e+01, // 429
            -5.193129158000248e+02, // 430
            -1.368025883103452e+02, // 431
            -1.148635346777648e+03, // 432
             4.016563340583102e+02, // 433
             7.427279903230640e+02, // 434
             3.741889265554074e+01, // 435
             2.017584100279055e+02, // 436
            -4.761619358274548e+02, // 437
             2.026652296327155e+01, // 438
            -1.009803661116686e+02, // 439
             2.156431029924096e+02, // 440
             1.216751304561553e+03, // 441
            -2.612813466340838e+02, // 442
            -3.552134355794526e+02, // 443
            -3.808480524367866e+02, // 444
            -1.107139861220600e+00, // 445
            -6.656058879531124e+02, // 446
             3.394321249244766e+02, // 447
            -1.498223794125406e+03, // 448
             5.841580415006000e+01, // 449
             2.211421276352991e+02, // 450
             3.006442946338823e+02, // 451
             1.526375246396244e+02, // 452
            -2.736229695506122e+01, // 453
             1.739012171682578e+02, // 454
            -3.933079490382962e+02, // 455
            -2.211553522894630e+03, // 456
            -1.284660891611981e+02, // 457
             1.860394600897476e+02, // 458
             1.347415295624944e+02, // 459
            -2.603874241950270e+02, // 460
             1.606090378117910e+01, // 461
            -3.953917237212466e+02, // 462
            -6.519990444028424e+02, // 463
            -3.994161312120563e+02, // 464
             1.468708442051890e+02, // 465
             1.206570384339555e+02, // 466
             1.297317691890051e+03, // 467
             2.893547235723119e+02, // 468
            -4.369758816476228e+02, // 469
            -7.056551875669231e+02, // 470
            -1.834087943225082e+02, // 471
            -5.497461461262687e+01, // 472
             5.793810106693953e+02, // 473
            -2.656214353248327e+02, // 474
            -2.595848263178768e+02, // 475
            -7.543441902263665e+02, // 476
             5.456204182241755e+02, // 477
            -3.948687175752383e+02, // 478
             2.631283000782452e+02, // 479
             8.964839260348924e+01, // 480
            -7.374601574104259e+02, // 481
             5.004025851505742e+01, // 482
            -3.976304054225312e+01, // 483
            -5.168467789469546e+02, // 484
            -5.705918822100183e+02, // 485
            -6.153080405474088e+02, // 486
            -2.835648207461090e+02, // 487
            -7.406498580214584e+02, // 488
            -3.994766121592874e+02, // 489
            -1.429578073166067e+02, // 490
             1.562317848804800e+02, // 491
            -5.988670602300181e+02, // 492
            -5.138001001068365e+02, // 493
            -2.258789401310982e+02, // 494
             3.858233891786899e+02}; // 495
    m_k_x_inter_A_B_0 =  2.072947088536893e-07; // A^(-1))
    m_k_x_inter_A_C_0 =  2.505686136661371e-01; // A^(-1))
    m_k_x_inter_A_X_0 =  3.773508918379664e-01; // A^(-1))
    m_k_x_intra_B_C_1 =  2.825470065620506e-01; // A^(-1))
    m_k_x_intra_C_C_1 =  1.324103584527271e-01; // A^(-1))
    m_ri =  5.800000000000000e+00; // A
    m_ro =  7.800000000000000e+00; // A

    } // end if mon1 == "cl" and mon2 == "h2o"

    // =====>> END SECTION CONSTRUCTOR <<=====
}

//----------------------------------------------------------------------------//

double mbnrg_A1_B1C2X2_deg5_v1::f_switch(const double r, double& g)
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

 double mbnrg_A1_B1C2X2_deg5_v1::eval(const double *xyz1, const double *xyz2, const size_t n) {
    std::vector<double> energies(n,0.0);
    std::vector<double> energies_sw(n,0.0);

    std::vector<double> xyz(12);
    double sw = 0.0;
    polynomial my_poly;

    for (size_t j = 0; j < n; j++) {
        const double *mon1 = xyz1 + 3*j;
        const double *mon2 = xyz2 + 9*j;


        const double d12[3] =
                         {mon1[0] - mon2[0],
                          mon1[1] - mon2[1],
                          mon1[2] - mon2[2]};

        const double d12rsq = d12[0]*d12[0] + d12[1]*d12[1] + d12[2]*d12[2];
        const double d12r = std::sqrt(d12rsq);

        if (true  && d12r > m_ro ) {
             continue;
        }

        std::copy(mon1, mon1 + 3, xyz.begin() + 0);

        std::copy(mon2, mon2 + 9, xyz.begin() + 3);


        const double* coords_A_1_a = xyz.data() + 0;

        const double* coords_B_1_b = xyz.data() + 3;

        const double* coords_C_1_b = xyz.data() + 6;

        const double* coords_C_2_b = xyz.data() + 9;

        double coords_X_1_b[3];
        std::fill(coords_X_1_b,coords_X_1_b + 3, 0.0);

        double coords_X_2_b[3];
        std::fill(coords_X_2_b,coords_X_2_b + 3, 0.0);


        double w12 =     -9.721486914088159e-02;  //from MBpol
        double w13 =     -9.721486914088159e-02;
        double wcross =   9.859272078406150e-02;

    
        monomer m2;
        m2.setup(coords_B_1_b, w12, wcross, coords_X_1_b, coords_X_2_b);

        variable vs[8];

        double xs[8];

        xs[0] = vs[0].v_coul(m_k_x_inter_A_B_0, coords_A_1_a, coords_B_1_b);
        xs[1] = vs[1].v_coul(m_k_x_inter_A_C_0, coords_A_1_a, coords_C_1_b);
        xs[2] = vs[2].v_coul(m_k_x_inter_A_C_0, coords_A_1_a, coords_C_2_b);
        xs[3] = vs[3].v_exp(m_k_x_inter_A_X_0, coords_A_1_a, coords_X_1_b);
        xs[4] = vs[4].v_exp(m_k_x_inter_A_X_0, coords_A_1_a, coords_X_2_b);
        xs[5] = vs[5].v_exp(m_k_x_intra_B_C_1, coords_B_1_b, coords_C_1_b);
        xs[6] = vs[6].v_exp(m_k_x_intra_B_C_1, coords_B_1_b, coords_C_2_b);
        xs[7] = vs[7].v_exp(m_k_x_intra_C_C_1, coords_C_1_b, coords_C_2_b);

        double gsw12 = 0.0;
        double sw12 = f_switch(d12r, gsw12);

        sw = sw12;

        energies[j] = my_poly.eval(xs,coefficients.data());
        energies_sw[j] = energies[j]*sw;

    }

    double energy = 0.0;
    for (size_t i = 0; i < n; i++)
        energy += energies_sw[i];

    return energy;

}

//----------------------------------------------------------------------------//

double mbnrg_A1_B1C2X2_deg5_v1::eval(const double *xyz1, const double *xyz2, double *grad1, double *grad2 , const size_t n, std::vector<double> *virial) {
    std::vector<double> energies(n,0.0);
    std::vector<double> energies_sw(n,0.0);

    std::vector<double> xyz(12);
    double sw = 0.0;
    polynomial my_poly;

    for (size_t j = 0; j < n; j++) {
        const double *mon1 = xyz1 + 3*j;
        const double *mon2 = xyz2 + 9*j;


        const double d12[3] =
                         {mon1[0] - mon2[0],
                          mon1[1] - mon2[1],
                          mon1[2] - mon2[2]};

        const double d12rsq = d12[0]*d12[0] + d12[1]*d12[1] + d12[2]*d12[2];
        const double d12r = std::sqrt(d12rsq);

        if (true  && d12r > m_ro ) {
             continue;
        }

        std::vector<double> gradients(12,0.0);

        std::copy(mon1, mon1 + 3, xyz.begin() + 0);

        std::copy(mon2, mon2 + 9, xyz.begin() + 3);
        const double* coords_A_1_a = xyz.data() + 0;

        const double* coords_B_1_b = xyz.data() + 3;

        const double* coords_C_1_b = xyz.data() + 6;

        const double* coords_C_2_b = xyz.data() + 9;

        double coords_X_1_b[3];
        std::fill(coords_X_1_b,coords_X_1_b + 3, 0.0);

        double coords_X_2_b[3];
        std::fill(coords_X_2_b,coords_X_2_b + 3, 0.0);


        double* coords_A_1_a_g = gradients.data() + 0;

        double* coords_B_1_b_g = gradients.data() + 3;

        double* coords_C_1_b_g = gradients.data() + 6;

        double* coords_C_2_b_g = gradients.data() + 9;

        double coords_X_1_b_g[3];
        std::fill(coords_X_1_b_g,coords_X_1_b_g + 3, 0.0);

        double coords_X_2_b_g[3];
        std::fill(coords_X_2_b_g,coords_X_2_b_g + 3, 0.0);



        double w12 =     -9.721486914088159e-02;  //from MBpol
        double w13 =     -9.721486914088159e-02;
        double wcross =   9.859272078406150e-02;

    
        monomer m2;
        m2.setup(coords_B_1_b, w12, wcross, coords_X_1_b, coords_X_2_b);

        variable vs[8];

        double xs[8];


        double gxs[8];

        xs[0] = vs[0].v_coul(m_k_x_inter_A_B_0, coords_A_1_a, coords_B_1_b);
        xs[1] = vs[1].v_coul(m_k_x_inter_A_C_0, coords_A_1_a, coords_C_1_b);
        xs[2] = vs[2].v_coul(m_k_x_inter_A_C_0, coords_A_1_a, coords_C_2_b);
        xs[3] = vs[3].v_exp(m_k_x_inter_A_X_0, coords_A_1_a, coords_X_1_b);
        xs[4] = vs[4].v_exp(m_k_x_inter_A_X_0, coords_A_1_a, coords_X_2_b);
        xs[5] = vs[5].v_exp(m_k_x_intra_B_C_1, coords_B_1_b, coords_C_1_b);
        xs[6] = vs[6].v_exp(m_k_x_intra_B_C_1, coords_B_1_b, coords_C_2_b);
        xs[7] = vs[7].v_exp(m_k_x_intra_C_C_1, coords_C_1_b, coords_C_2_b);

        double gsw12 = 0.0;
        double sw12 = f_switch(d12r, gsw12);

        sw = sw12;

        energies[j] = my_poly.eval(xs,coefficients.data(),gxs);
        energies_sw[j] = energies[j]*sw;

        for (size_t i = 0; i < 8; i++) {
            gxs[i] *= sw;
        }

        vs[0].grads(gxs[0], coords_A_1_a_g, coords_B_1_b_g, coords_A_1_a, coords_B_1_b);
        vs[1].grads(gxs[1], coords_A_1_a_g, coords_C_1_b_g, coords_A_1_a, coords_C_1_b);
        vs[2].grads(gxs[2], coords_A_1_a_g, coords_C_2_b_g, coords_A_1_a, coords_C_2_b);
        vs[3].grads(gxs[3], coords_A_1_a_g, coords_X_1_b_g, coords_A_1_a, coords_X_1_b);
        vs[4].grads(gxs[4], coords_A_1_a_g, coords_X_2_b_g, coords_A_1_a, coords_X_2_b);
        vs[5].grads(gxs[5], coords_B_1_b_g, coords_C_1_b_g, coords_B_1_b, coords_C_1_b);
        vs[6].grads(gxs[6], coords_B_1_b_g, coords_C_2_b_g, coords_B_1_b, coords_C_2_b);
        vs[7].grads(gxs[7], coords_C_1_b_g, coords_C_2_b_g, coords_C_1_b, coords_C_2_b);

        m2.grads(coords_X_1_b_g, coords_X_2_b_g, w12, wcross, coords_B_1_b_g);
        gsw12 *= (1.0)*energies[j]/d12r;


        for (size_t i = 0; i < 3; i++) {
            gradients[0 + i] += 0.0 + (gsw12*d12[i]);
            gradients[3 + i] += 0.0 - (gsw12*d12[i]);
        }


        for (size_t i = 0; i < 3; i++) {
            grad1[i + j*3] += gradients[0 + i];
        }


        for (size_t i = 0; i < 9; i++) {
            grad2[i + j*9] += gradients[3 + i];
        }

        
        if (virial != 0) {
        
            (*virial)[0] += -coords_A_1_a[0]*coords_A_1_a_g[0]
                        -coords_B_1_b[0]*coords_B_1_b_g[0]
                        -coords_C_1_b[0]*coords_C_1_b_g[0]
                        -coords_C_2_b[0]*coords_C_2_b_g[0];

        
            (*virial)[1] += -coords_A_1_a[0]*coords_A_1_a_g[1]
                        -coords_B_1_b[0]*coords_B_1_b_g[1]
                        -coords_C_1_b[0]*coords_C_1_b_g[1]
                        -coords_C_2_b[0]*coords_C_2_b_g[1];

        
            (*virial)[2] += -coords_A_1_a[0]*coords_A_1_a_g[2]
                        -coords_B_1_b[0]*coords_B_1_b_g[2]
                        -coords_C_1_b[0]*coords_C_1_b_g[2]
                        -coords_C_2_b[0]*coords_C_2_b_g[2];

        
            (*virial)[4] += -coords_A_1_a[1]*coords_A_1_a_g[1]
                        -coords_B_1_b[1]*coords_B_1_b_g[1]
                        -coords_C_1_b[1]*coords_C_1_b_g[1]
                        -coords_C_2_b[1]*coords_C_2_b_g[1];

        
            (*virial)[5] += -coords_A_1_a[1]*coords_A_1_a_g[2]
                        -coords_B_1_b[1]*coords_B_1_b_g[2]
                        -coords_C_1_b[1]*coords_C_1_b_g[2]
                        -coords_C_2_b[1]*coords_C_2_b_g[2];

        
            (*virial)[8] += -coords_A_1_a[2]*coords_A_1_a_g[2]
                        -coords_B_1_b[2]*coords_B_1_b_g[2]
                        -coords_C_1_b[2]*coords_C_1_b_g[2]
                        -coords_C_2_b[2]*coords_C_2_b_g[2];

            (*virial)[3] = (*virial)[1];
            (*virial)[6] = (*virial)[2];
            (*virial)[7] = (*virial)[5];


        }


    }

    double energy = 0.0;
    for (size_t i = 0; i < n; i++)
        energy += energies_sw[i];

    return energy;

}

//----------------------------------------------------------------------------//
} // namespace mbnrg_A1_B1C2X2_deg5
