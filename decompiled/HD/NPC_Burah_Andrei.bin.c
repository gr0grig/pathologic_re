task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_bool = 0; // 0x1b PushV
	func_3045(var_33_bool); // 0x1c NEW_2
	if(var_33_bool == 0) goto Label_34; // 0x1e JumpB
	lshStopAnimation(); // 0x1f Func
	goto Label_36; // 0x21 Jump
	
Label_36:
	StopTrade(); // 0x24 Func
	var_0_bool = 1; // 0x26 TMovB
	return 0; // 0x27 Return
	
Label_34:
	StopAnimation(); // 0x22 Func
}


task_2_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_cvector)
{
	var_34_int = 1; // 0xc5 PushI
	if(var_34_int == 0) goto Label_329; // 0xc6 JumpB
	func_2891(); // 0xc8 NEW_2
	var_36_int = 19127; // 0xca PushI
	var_37_bool = var_32_bool == var_36_int; // 0xcb Eq
	if(var_37_bool == 0) goto Label_220; // 0xcc JumpB
	var_38_string = ""; // 0xcd PushV
	var_38_string = "Neutral"; // 0xce MovS
	func_174(var_33_cvector, var_38_string); // 0xcf NEW_2
	var_55_int = 517994; // 0xd1 PushI
	SetMessage(var_55_int); // 0xd2 TObjFunc
	ClearReplies(); // 0xd4 TObjFunc
	var_56_int = 517995; // 0xd6 PushI
	var_57_int = 23147; // 0xd7 PushI
	var_58_int = 19128; // 0xd8 PushI
	AddReply(var_56_int, var_57_int, var_58_int); // 0xd9 TObjFunc
	return 0; // 0xdb Return
	
Label_220:
	var_59_int = 23147; // 0xdc PushI
	var_60_bool = var_32_bool == var_59_int; // 0xdd Eq
	if(var_60_bool == 0) goto Label_243; // 0xde JumpB
	var_61_string = ""; // 0xdf PushV
	var_61_string = "Smile"; // 0xe0 MovS
	func_174(var_33_cvector, var_61_string); // 0xe1 NEW_2
	var_62_int = 521978; // 0xe3 PushI
	SetMessage(var_62_int); // 0xe4 TObjFunc
	ClearReplies(); // 0xe6 TObjFunc
	var_63_int = 521979; // 0xe8 PushI
	var_64_int = 23149; // 0xe9 PushI
	var_65_int = 23148; // 0xea PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0xeb TObjFunc
	var_66_int = 521984; // 0xed PushI
	var_67_int = -1; // 0xee PushI
	var_68_int = 23153; // 0xef PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0xf0 TObjFunc
	return 0; // 0xf2 Return
	
Label_243:
	var_69_int = 23149; // 0xf3 PushI
	var_70_bool = var_32_bool == var_69_int; // 0xf4 Eq
	if(var_70_bool == 0) goto Label_266; // 0xf5 JumpB
	var_71_string = ""; // 0xf6 PushV
	var_71_string = "Smile"; // 0xf7 MovS
	func_174(var_33_cvector, var_71_string); // 0xf8 NEW_2
	var_72_int = 521980; // 0xfa PushI
	SetMessage(var_72_int); // 0xfb TObjFunc
	ClearReplies(); // 0xfd TObjFunc
	var_73_int = 521981; // 0xff PushI
	var_74_int = 23151; // 0x100 PushI
	var_75_int = 23150; // 0x101 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x102 TObjFunc
	var_76_int = 521985; // 0x104 PushI
	var_77_int = 23157; // 0x105 PushI
	var_78_int = 23154; // 0x106 PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x107 TObjFunc
	return 0; // 0x109 Return
	
Label_266:
	var_79_int = 23151; // 0x10a PushI
	var_80_bool = var_32_bool == var_79_int; // 0x10b Eq
	if(var_80_bool == 0) goto Label_294; // 0x10c JumpB
	var_81_string = ""; // 0x10d PushV
	var_81_string = "Smile"; // 0x10e MovS
	func_174(var_33_cvector, var_81_string); // 0x10f NEW_2
	var_82_int = 521982; // 0x111 PushI
	SetMessage(var_82_int); // 0x112 TObjFunc
	ClearReplies(); // 0x114 TObjFunc
	var_83_int = 521987; // 0x116 PushI
	var_84_int = -1; // 0x117 PushI
	var_85_int = 23156; // 0x118 PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x119 TObjFunc
	var_86_int = 521983; // 0x11b PushI
	var_87_int = 23157; // 0x11c PushI
	var_88_int = 23152; // 0x11d PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x11e TObjFunc
	var_89_int = 521986; // 0x120 PushI
	var_90_int = -1; // 0x121 PushI
	var_91_int = 23155; // 0x122 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x123 TObjFunc
	return 0; // 0x125 Return
	
Label_294:
	var_92_int = 23157; // 0x126 PushI
	var_93_bool = var_32_bool == var_92_int; // 0x127 Eq
	if(var_93_bool == 0) goto Label_317; // 0x128 JumpB
	var_94_string = ""; // 0x129 PushV
	var_94_string = "What"; // 0x12a MovS
	func_174(var_33_cvector, var_94_string); // 0x12b NEW_2
	var_95_int = 521988; // 0x12d PushI
	SetMessage(var_95_int); // 0x12e TObjFunc
	ClearReplies(); // 0x130 TObjFunc
	var_96_int = 521989; // 0x132 PushI
	var_97_int = -1; // 0x133 PushI
	var_98_int = 23158; // 0x134 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x135 TObjFunc
	var_99_int = 521990; // 0x137 PushI
	var_100_int = -1; // 0x138 PushI
	var_101_int = 23159; // 0x139 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x13a TObjFunc
	return 0; // 0x13c Return
	
Label_317:
	var_3_object = 1; // 0x13d TMovB
	var_102_bool = 0; // 0x13e PushV
	func_3045(var_102_bool); // 0x13f NEW_2
	if(var_102_bool == 0) goto Label_325; // 0x141 JumpB
	lshStopAnimation(); // 0x142 Func
	goto Label_327; // 0x144 Jump
	
Label_327:
	return 0; // 0x147 Return
	
Label_325:
	StopAnimation(); // 0x145 Func
	
Label_329:
	return 0; // 0x149 Return
}


task_4_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_cvector)
{
	var_34_int = 1; // 0x25d PushI
	if(var_34_int == 0) goto Label_1228; // 0x25e JumpB
	func_2891(); // 0x260 NEW_2
	var_36_int = 32376; // 0x262 PushI
	var_37_bool = var_33_cvector == var_36_int; // 0x263 Eq
	if(var_37_bool == 0) goto Label_618; // 0x264 JumpB
	var_38_object = Obj(); var_39_object = Obj(); // 0x265 PushV
	var_38_object = var_1_object; // 0x266 MovT
	var_39_object = var_0_bool; // 0x267 MovT
	func_3081(); // 0x268 NEW_2
	
Label_618:
	var_79_int = 32374; // 0x26a PushI
	var_80_bool = var_33_cvector == var_79_int; // 0x26b Eq
	if(var_80_bool == 0) goto Label_626; // 0x26c JumpB
	var_81_object = Obj(); var_82_object = Obj(); // 0x26d PushV
	var_81_object = var_1_object; // 0x26e MovT
	var_82_object = var_0_bool; // 0x26f MovT
	func_3081(); // 0x270 NEW_2
	
Label_626:
	var_83_int = 32379; // 0x272 PushI
	var_84_bool = var_33_cvector == var_83_int; // 0x273 Eq
	if(var_84_bool == 0) goto Label_654; // 0x274 JumpB
	var_85_object = Obj(); var_86_object = Obj(); // 0x275 PushV
	var_85_object = var_1_object; // 0x276 MovT
	var_86_object = var_0_bool; // 0x277 MovT
	func_3098(); // 0x278 NEW_2
	var_118_object = Obj(); var_119_object = Obj(); // 0x27a PushV
	var_118_object = var_1_object; // 0x27b MovT
	var_119_object = var_0_bool; // 0x27c MovT
	func_3059(var_119_object); // 0x27d NEW_2
	var_139_object = Obj(); var_140_object = Obj(); // 0x27f PushV
	var_139_object = var_1_object; // 0x280 MovT
	var_140_object = var_0_bool; // 0x281 MovT
	func_3069(); // 0x282 NEW_2
	var_143_object = Obj(); var_144_object = Obj(); // 0x284 PushV
	var_143_object = var_1_object; // 0x285 MovT
	var_144_object = var_0_bool; // 0x286 MovT
	func_3160(); // 0x287 NEW_2
	var_159_object = Obj(); var_160_object = Obj(); // 0x289 PushV
	var_159_object = var_1_object; // 0x28a MovT
	var_160_object = var_0_bool; // 0x28b MovT
	func_3132(); // 0x28c NEW_2
	
Label_654:
	var_185_int = 32401; // 0x28e PushI
	var_186_bool = var_33_cvector == var_185_int; // 0x28f Eq
	if(var_186_bool == 0) goto Label_662; // 0x290 JumpB
	var_187_object = Obj(); var_188_object = Obj(); // 0x291 PushV
	var_187_object = var_1_object; // 0x292 MovT
	var_188_object = var_0_bool; // 0x293 MovT
	func_3172(); // 0x294 NEW_2
	
Label_662:
	var_191_int = 32403; // 0x296 PushI
	var_192_bool = var_33_cvector == var_191_int; // 0x297 Eq
	if(var_192_bool == 0) goto Label_670; // 0x298 JumpB
	var_193_object = Obj(); var_194_object = Obj(); // 0x299 PushV
	var_193_object = var_1_object; // 0x29a MovT
	var_194_object = var_0_bool; // 0x29b MovT
	func_3148(); // 0x29c NEW_2
	
Label_670:
	var_213_int = 20575; // 0x29e PushI
	var_214_bool = var_33_cvector == var_213_int; // 0x29f Eq
	if(var_214_bool == 0) goto Label_678; // 0x2a0 JumpB
	var_215_object = Obj(); var_216_object = Obj(); // 0x2a1 PushV
	var_215_object = var_1_object; // 0x2a2 MovT
	var_216_object = var_0_bool; // 0x2a3 MovT
	func_3053(); // 0x2a4 NEW_2
	
Label_678:
	var_219_int = 20587; // 0x2a6 PushI
	var_220_bool = var_33_cvector == var_219_int; // 0x2a7 Eq
	if(var_220_bool == 0) goto Label_686; // 0x2a8 JumpB
	var_221_object = Obj(); var_222_object = Obj(); // 0x2a9 PushV
	var_221_object = var_1_object; // 0x2aa MovT
	var_222_object = var_0_bool; // 0x2ab MovT
	func_3178(); // 0x2ac NEW_2
	
Label_686:
	var_224_int = 32369; // 0x2ae PushI
	var_225_bool = var_32_bool == var_224_int; // 0x2af Eq
	if(var_225_bool == 0) goto Label_822; // 0x2b0 JumpB
	var_226_bool = 0; var_227_object = Obj(); // 0x2b1 PushV
	var_227_object = var_1_object; // 0x2b2 MovT
	func_3183(var_227_object); // 0x2b3 NEW_2
	if(var_226_bool == 0) goto Label_724; // 0x2b5 JumpB
	var_232_object = Obj(); var_233_object = Obj(); // 0x2b6 PushV
	var_232_object = var_1_object; // 0x2b7 MovT
	var_233_object = var_0_bool; // 0x2b8 MovT
	func_3075(); // 0x2b9 NEW_2
	var_236_object = Obj(); var_237_object = Obj(); // 0x2bb PushV
	var_236_object = var_1_object; // 0x2bc MovT
	var_237_object = var_0_bool; // 0x2bd MovT
	func_3126(); // 0x2be NEW_2
	var_240_string = ""; // 0x2c0 PushV
	var_240_string = "Neutral"; // 0x2c1 MovS
	func_582(var_33_cvector, var_240_string); // 0x2c2 NEW_2
	var_257_int = 531038; // 0x2c4 PushI
	SetMessage(var_257_int); // 0x2c5 TObjFunc
	ClearReplies(); // 0x2c7 TObjFunc
	var_258_int = 531227; // 0x2c9 PushI
	var_259_int = 32541; // 0x2ca PushI
	var_260_int = 32540; // 0x2cb PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x2cc TObjFunc
	var_261_int = 531231; // 0x2ce PushI
	var_262_int = 32545; // 0x2cf PushI
	var_263_int = 32544; // 0x2d0 PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x2d1 TObjFunc
	return 0; // 0x2d3 Return
	
Label_724:
	var_264_string = ""; // 0x2d4 PushV
	var_264_string = "Smile"; // 0x2d5 MovS
	func_582(var_33_cvector, var_264_string); // 0x2d6 NEW_2
	var_265_int = 518214; // 0x2d8 PushI
	SetMessage(var_265_int); // 0x2d9 TObjFunc
	ClearReplies(); // 0x2db TObjFunc
	var_266_bool = 0; var_267_object = Obj(); // 0x2dd PushV
	var_267_object = var_1_object; // 0x2de MovT
	func_3207(var_267_object); // 0x2df NEW_2
	if(var_266_bool == 0) goto Label_743; // 0x2e1 JumpB
	var_272_int = 531041; // 0x2e2 PushI
	var_273_int = 32373; // 0x2e3 PushI
	var_274_int = 32372; // 0x2e4 PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0x2e5 TObjFunc
	
Label_743:
	var_275_bool = 0; // 0x2e7 PushV
	var_275_bool = 0; // 0x2e8 MovB
	var_276_bool = 0; // 0x2e9 PushV
	var_276_bool = 0; // 0x2ea MovB
	var_277_bool = 0; var_278_object = Obj(); // 0x2eb PushV
	var_278_object = var_1_object; // 0x2ec MovT
	func_3219(var_277_bool, var_278_object); // 0x2ed NEW_2
	if(var_277_bool == 0) goto Label_758; // 0x2ef JumpB
	var_286_bool = 0; var_287_object = Obj(); // 0x2f0 PushV
	var_287_object = var_1_object; // 0x2f1 MovT
	func_3195(var_287_object); // 0x2f2 NEW_2
	if(var_286_bool == 0) goto Label_758; // 0x2f4 JumpB
	var_276_bool = 1; // 0x2f5 MovB
	
Label_758:
	if(var_276_bool == 0) goto Label_766; // 0x2f6 JumpB
	var_292_bool = 0; var_293_object = Obj(); // 0x2f7 PushV
	var_293_object = var_1_object; // 0x2f8 MovT
	func_3253(var_293_object); // 0x2f9 NEW_2
	var_298_bool = var_292_bool == 0; // 0x2fb Not
	if(var_298_bool == 0) goto Label_766; // 0x2fc JumpB
	var_275_bool = 1; // 0x2fd MovB
	
Label_766:
	if(var_275_bool == 0) goto Label_772; // 0x2fe JumpB
	var_299_int = 531048; // 0x2ff PushI
	var_300_int = 32378; // 0x300 PushI
	var_301_int = 32377; // 0x301 PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0x302 TObjFunc
	
Label_772:
	var_302_bool = 0; // 0x304 PushV
	var_302_bool = 0; // 0x305 MovB
	var_303_bool = 0; // 0x306 PushV
	var_303_bool = 0; // 0x307 MovB
	var_304_bool = 0; var_305_object = Obj(); // 0x308 PushV
	var_305_object = var_1_object; // 0x309 MovT
	func_3241(var_305_object); // 0x30a NEW_2
	if(var_304_bool == 0) goto Label_788; // 0x30c JumpB
	var_310_bool = 0; var_311_object = Obj(); // 0x30d PushV
	var_311_object = var_1_object; // 0x30e MovT
	func_3229(var_311_object); // 0x30f NEW_2
	var_316_bool = var_310_bool == 0; // 0x311 Not
	if(var_316_bool == 0) goto Label_788; // 0x312 JumpB
	var_303_bool = 1; // 0x313 MovB
	
Label_788:
	if(var_303_bool == 0) goto Label_795; // 0x314 JumpB
	var_317_bool = 0; var_318_object = Obj(); // 0x315 PushV
	var_318_object = var_1_object; // 0x316 MovT
	func_3265(var_318_object); // 0x317 NEW_2
	if(var_317_bool == 0) goto Label_795; // 0x319 JumpB
	var_302_bool = 1; // 0x31a MovB
	
Label_795:
	if(var_302_bool == 0) goto Label_801; // 0x31b JumpB
	var_323_int = 531081; // 0x31c PushI
	var_324_int = 32402; // 0x31d PushI
	var_325_int = 32401; // 0x31e PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0x31f TObjFunc
	
Label_801:
	var_326_bool = 0; var_327_object = Obj(); // 0x321 PushV
	var_327_object = var_1_object; // 0x322 MovT
	func_3301(var_327_object); // 0x323 NEW_2
	if(var_326_bool == 0) goto Label_811; // 0x325 JumpB
	var_332_int = 519410; // 0x326 PushI
	var_333_int = 20576; // 0x327 PushI
	var_334_int = 20575; // 0x328 PushI
	AddReply(var_332_int, var_333_int, var_334_int); // 0x329 TObjFunc
	
Label_811:
	var_335_int = 518215; // 0x32b PushI
	var_336_int = 20584; // 0x32c PushI
	var_337_int = 19328; // 0x32d PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x32e TObjFunc
	var_338_int = 518216; // 0x330 PushI
	var_339_int = -1; // 0x331 PushI
	var_340_int = 19329; // 0x332 PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0x333 TObjFunc
	return 0; // 0x335 Return
	
Label_822:
	var_341_int = 20584; // 0x336 PushI
	var_342_bool = var_32_bool == var_341_int; // 0x337 Eq
	if(var_342_bool == 0) goto Label_845; // 0x338 JumpB
	var_343_string = ""; // 0x339 PushV
	var_343_string = "Neutral"; // 0x33a MovS
	func_582(var_33_cvector, var_343_string); // 0x33b NEW_2
	var_344_int = 519419; // 0x33d PushI
	SetMessage(var_344_int); // 0x33e TObjFunc
	ClearReplies(); // 0x340 TObjFunc
	var_345_int = 519420; // 0x342 PushI
	var_346_int = 20586; // 0x343 PushI
	var_347_int = 20585; // 0x344 PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0x345 TObjFunc
	var_348_int = 519424; // 0x347 PushI
	var_349_int = 20586; // 0x348 PushI
	var_350_int = 20589; // 0x349 PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0x34a TObjFunc
	return 0; // 0x34c Return
	
Label_845:
	var_351_int = 20586; // 0x34d PushI
	var_352_bool = var_32_bool == var_351_int; // 0x34e Eq
	if(var_352_bool == 0) goto Label_868; // 0x34f JumpB
	var_353_string = ""; // 0x350 PushV
	var_353_string = "Neutral"; // 0x351 MovS
	func_582(var_33_cvector, var_353_string); // 0x352 NEW_2
	var_354_int = 519421; // 0x354 PushI
	SetMessage(var_354_int); // 0x355 TObjFunc
	ClearReplies(); // 0x357 TObjFunc
	var_355_int = 519422; // 0x359 PushI
	var_356_int = -1; // 0x35a PushI
	var_357_int = 20587; // 0x35b PushI
	AddReply(var_355_int, var_356_int, var_357_int); // 0x35c TObjFunc
	var_358_int = 519423; // 0x35e PushI
	var_359_int = -1; // 0x35f PushI
	var_360_int = 20588; // 0x360 PushI
	AddReply(var_358_int, var_359_int, var_360_int); // 0x361 TObjFunc
	return 0; // 0x363 Return
	
Label_868:
	var_361_int = 20576; // 0x364 PushI
	var_362_bool = var_32_bool == var_361_int; // 0x365 Eq
	if(var_362_bool == 0) goto Label_891; // 0x366 JumpB
	var_363_string = ""; // 0x367 PushV
	var_363_string = "Grin"; // 0x368 MovS
	func_582(var_33_cvector, var_363_string); // 0x369 NEW_2
	var_364_int = 519411; // 0x36b PushI
	SetMessage(var_364_int); // 0x36c TObjFunc
	ClearReplies(); // 0x36e TObjFunc
	var_365_int = 519412; // 0x370 PushI
	var_366_int = 20578; // 0x371 PushI
	var_367_int = 20577; // 0x372 PushI
	AddReply(var_365_int, var_366_int, var_367_int); // 0x373 TObjFunc
	var_368_int = 519425; // 0x375 PushI
	var_369_int = 20582; // 0x376 PushI
	var_370_int = 20591; // 0x377 PushI
	AddReply(var_368_int, var_369_int, var_370_int); // 0x378 TObjFunc
	return 0; // 0x37a Return
	
Label_891:
	var_371_int = 20578; // 0x37b PushI
	var_372_bool = var_32_bool == var_371_int; // 0x37c Eq
	if(var_372_bool == 0) goto Label_914; // 0x37d JumpB
	var_373_string = ""; // 0x37e PushV
	var_373_string = "Grin"; // 0x37f MovS
	func_582(var_33_cvector, var_373_string); // 0x380 NEW_2
	var_374_int = 519413; // 0x382 PushI
	SetMessage(var_374_int); // 0x383 TObjFunc
	ClearReplies(); // 0x385 TObjFunc
	var_375_int = 519414; // 0x387 PushI
	var_376_int = 20580; // 0x388 PushI
	var_377_int = 20579; // 0x389 PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0x38a TObjFunc
	var_378_int = 519426; // 0x38c PushI
	var_379_int = 20582; // 0x38d PushI
	var_380_int = 20592; // 0x38e PushI
	AddReply(var_378_int, var_379_int, var_380_int); // 0x38f TObjFunc
	return 0; // 0x391 Return
	
Label_914:
	var_381_int = 20580; // 0x392 PushI
	var_382_bool = var_32_bool == var_381_int; // 0x393 Eq
	if(var_382_bool == 0) goto Label_937; // 0x394 JumpB
	var_383_string = ""; // 0x395 PushV
	var_383_string = "Neutral"; // 0x396 MovS
	func_582(var_33_cvector, var_383_string); // 0x397 NEW_2
	var_384_int = 519415; // 0x399 PushI
	SetMessage(var_384_int); // 0x39a TObjFunc
	ClearReplies(); // 0x39c TObjFunc
	var_385_int = 519416; // 0x39e PushI
	var_386_int = 20582; // 0x39f PushI
	var_387_int = 20581; // 0x3a0 PushI
	AddReply(var_385_int, var_386_int, var_387_int); // 0x3a1 TObjFunc
	var_388_int = 519427; // 0x3a3 PushI
	var_389_int = -1; // 0x3a4 PushI
	var_390_int = 20594; // 0x3a5 PushI
	AddReply(var_388_int, var_389_int, var_390_int); // 0x3a6 TObjFunc
	return 0; // 0x3a8 Return
	
Label_937:
	var_391_int = 20582; // 0x3a9 PushI
	var_392_bool = var_32_bool == var_391_int; // 0x3aa Eq
	if(var_392_bool == 0) goto Label_960; // 0x3ab JumpB
	var_393_string = ""; // 0x3ac PushV
	var_393_string = "Neutral"; // 0x3ad MovS
	func_582(var_33_cvector, var_393_string); // 0x3ae NEW_2
	var_394_int = 519417; // 0x3b0 PushI
	SetMessage(var_394_int); // 0x3b1 TObjFunc
	ClearReplies(); // 0x3b3 TObjFunc
	var_395_int = 519418; // 0x3b5 PushI
	var_396_int = -1; // 0x3b6 PushI
	var_397_int = 20583; // 0x3b7 PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0x3b8 TObjFunc
	var_398_int = 519428; // 0x3ba PushI
	var_399_int = -1; // 0x3bb PushI
	var_400_int = 20595; // 0x3bc PushI
	AddReply(var_398_int, var_399_int, var_400_int); // 0x3bd TObjFunc
	return 0; // 0x3bf Return
	
Label_960:
	var_401_int = 32402; // 0x3c0 PushI
	var_402_bool = var_32_bool == var_401_int; // 0x3c1 Eq
	if(var_402_bool == 0) goto Label_983; // 0x3c2 JumpB
	var_403_string = ""; // 0x3c3 PushV
	var_403_string = "Neutral"; // 0x3c4 MovS
	func_582(var_33_cvector, var_403_string); // 0x3c5 NEW_2
	var_404_int = 531082; // 0x3c7 PushI
	SetMessage(var_404_int); // 0x3c8 TObjFunc
	ClearReplies(); // 0x3ca TObjFunc
	var_405_int = 531217; // 0x3cc PushI
	var_406_int = 32529; // 0x3cd PushI
	var_407_int = 32528; // 0x3ce PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0x3cf TObjFunc
	var_408_int = 531221; // 0x3d1 PushI
	var_409_int = 32536; // 0x3d2 PushI
	var_410_int = 32532; // 0x3d3 PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0x3d4 TObjFunc
	return 0; // 0x3d6 Return
	
Label_983:
	var_411_int = 32529; // 0x3d7 PushI
	var_412_bool = var_32_bool == var_411_int; // 0x3d8 Eq
	if(var_412_bool == 0) goto Label_1006; // 0x3d9 JumpB
	var_413_string = ""; // 0x3da PushV
	var_413_string = "Neutral"; // 0x3db MovS
	func_582(var_33_cvector, var_413_string); // 0x3dc NEW_2
	var_414_int = 531218; // 0x3de PushI
	SetMessage(var_414_int); // 0x3df TObjFunc
	ClearReplies(); // 0x3e1 TObjFunc
	var_415_int = 531219; // 0x3e3 PushI
	var_416_int = 32531; // 0x3e4 PushI
	var_417_int = 32530; // 0x3e5 PushI
	AddReply(var_415_int, var_416_int, var_417_int); // 0x3e6 TObjFunc
	var_418_int = 531222; // 0x3e8 PushI
	var_419_int = 32536; // 0x3e9 PushI
	var_420_int = 32533; // 0x3ea PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0x3eb TObjFunc
	return 0; // 0x3ed Return
	
Label_1006:
	var_421_int = 32536; // 0x3ee PushI
	var_422_bool = var_32_bool == var_421_int; // 0x3ef Eq
	if(var_422_bool == 0) goto Label_1029; // 0x3f0 JumpB
	var_423_string = ""; // 0x3f1 PushV
	var_423_string = "Grin"; // 0x3f2 MovS
	func_582(var_33_cvector, var_423_string); // 0x3f3 NEW_2
	var_424_int = 531224; // 0x3f5 PushI
	SetMessage(var_424_int); // 0x3f6 TObjFunc
	ClearReplies(); // 0x3f8 TObjFunc
	var_425_int = 531225; // 0x3fa PushI
	var_426_int = -1; // 0x3fb PushI
	var_427_int = 32538; // 0x3fc PushI
	AddReply(var_425_int, var_426_int, var_427_int); // 0x3fd TObjFunc
	var_428_int = 531226; // 0x3ff PushI
	var_429_int = -1; // 0x400 PushI
	var_430_int = 32539; // 0x401 PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0x402 TObjFunc
	return 0; // 0x404 Return
	
Label_1029:
	var_431_int = 32531; // 0x405 PushI
	var_432_bool = var_32_bool == var_431_int; // 0x406 Eq
	if(var_432_bool == 0) goto Label_1047; // 0x407 JumpB
	var_433_string = ""; // 0x408 PushV
	var_433_string = "Neutral"; // 0x409 MovS
	func_582(var_33_cvector, var_433_string); // 0x40a NEW_2
	var_434_int = 531220; // 0x40c PushI
	SetMessage(var_434_int); // 0x40d TObjFunc
	ClearReplies(); // 0x40f TObjFunc
	var_435_int = 531083; // 0x411 PushI
	var_436_int = -1; // 0x412 PushI
	var_437_int = 32403; // 0x413 PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0x414 TObjFunc
	return 0; // 0x416 Return
	
Label_1047:
	var_438_int = 32378; // 0x417 PushI
	var_439_bool = var_32_bool == var_438_int; // 0x418 Eq
	if(var_439_bool == 0) goto Label_1070; // 0x419 JumpB
	var_440_string = ""; // 0x41a PushV
	var_440_string = "Smile"; // 0x41b MovS
	func_582(var_33_cvector, var_440_string); // 0x41c NEW_2
	var_441_int = 531049; // 0x41e PushI
	SetMessage(var_441_int); // 0x41f TObjFunc
	ClearReplies(); // 0x421 TObjFunc
	var_442_int = 531214; // 0x423 PushI
	var_443_int = 32526; // 0x424 PushI
	var_444_int = 32524; // 0x425 PushI
	AddReply(var_442_int, var_443_int, var_444_int); // 0x426 TObjFunc
	var_445_int = 531215; // 0x428 PushI
	var_446_int = 32526; // 0x429 PushI
	var_447_int = 32525; // 0x42a PushI
	AddReply(var_445_int, var_446_int, var_447_int); // 0x42b TObjFunc
	return 0; // 0x42d Return
	
Label_1070:
	var_448_int = 32526; // 0x42e PushI
	var_449_bool = var_32_bool == var_448_int; // 0x42f Eq
	if(var_449_bool == 0) goto Label_1088; // 0x430 JumpB
	var_450_string = ""; // 0x431 PushV
	var_450_string = "Neutral"; // 0x432 MovS
	func_582(var_33_cvector, var_450_string); // 0x433 NEW_2
	var_451_int = 531216; // 0x435 PushI
	SetMessage(var_451_int); // 0x436 TObjFunc
	ClearReplies(); // 0x438 TObjFunc
	var_452_int = 531050; // 0x43a PushI
	var_453_int = -1; // 0x43b PushI
	var_454_int = 32379; // 0x43c PushI
	AddReply(var_452_int, var_453_int, var_454_int); // 0x43d TObjFunc
	return 0; // 0x43f Return
	
Label_1088:
	var_455_int = 32373; // 0x440 PushI
	var_456_bool = var_32_bool == var_455_int; // 0x441 Eq
	if(var_456_bool == 0) goto Label_1106; // 0x442 JumpB
	var_457_string = ""; // 0x443 PushV
	var_457_string = "Neutral"; // 0x444 MovS
	func_582(var_33_cvector, var_457_string); // 0x445 NEW_2
	var_458_int = 531042; // 0x447 PushI
	SetMessage(var_458_int); // 0x448 TObjFunc
	ClearReplies(); // 0x44a TObjFunc
	var_459_int = 531043; // 0x44c PushI
	var_460_int = -1; // 0x44d PushI
	var_461_int = 32374; // 0x44e PushI
	AddReply(var_459_int, var_460_int, var_461_int); // 0x44f TObjFunc
	return 0; // 0x451 Return
	
Label_1106:
	var_462_int = 32545; // 0x452 PushI
	var_463_bool = var_32_bool == var_462_int; // 0x453 Eq
	if(var_463_bool == 0) goto Label_1129; // 0x454 JumpB
	var_464_string = ""; // 0x455 PushV
	var_464_string = "Neutral"; // 0x456 MovS
	func_582(var_33_cvector, var_464_string); // 0x457 NEW_2
	var_465_int = 531232; // 0x459 PushI
	SetMessage(var_465_int); // 0x45a TObjFunc
	ClearReplies(); // 0x45c TObjFunc
	var_466_int = 531233; // 0x45e PushI
	var_467_int = 32541; // 0x45f PushI
	var_468_int = 32546; // 0x460 PushI
	AddReply(var_466_int, var_467_int, var_468_int); // 0x461 TObjFunc
	var_469_int = 531234; // 0x463 PushI
	var_470_int = -1; // 0x464 PushI
	var_471_int = 32547; // 0x465 PushI
	AddReply(var_469_int, var_470_int, var_471_int); // 0x466 TObjFunc
	return 0; // 0x468 Return
	
Label_1129:
	var_472_int = 32541; // 0x469 PushI
	var_473_bool = var_32_bool == var_472_int; // 0x46a Eq
	if(var_473_bool == 0) goto Label_1152; // 0x46b JumpB
	var_474_string = ""; // 0x46c PushV
	var_474_string = "Smile"; // 0x46d MovS
	func_582(var_33_cvector, var_474_string); // 0x46e NEW_2
	var_475_int = 531228; // 0x470 PushI
	SetMessage(var_475_int); // 0x471 TObjFunc
	ClearReplies(); // 0x473 TObjFunc
	var_476_int = 531238; // 0x475 PushI
	var_477_int = 32553; // 0x476 PushI
	var_478_int = 32552; // 0x477 PushI
	AddReply(var_476_int, var_477_int, var_478_int); // 0x478 TObjFunc
	var_479_int = 531229; // 0x47a PushI
	var_480_int = 32543; // 0x47b PushI
	var_481_int = 32542; // 0x47c PushI
	AddReply(var_479_int, var_480_int, var_481_int); // 0x47d TObjFunc
	return 0; // 0x47f Return
	
Label_1152:
	var_482_int = 32543; // 0x480 PushI
	var_483_bool = var_32_bool == var_482_int; // 0x481 Eq
	if(var_483_bool == 0) goto Label_1175; // 0x482 JumpB
	var_484_string = ""; // 0x483 PushV
	var_484_string = "Untrust"; // 0x484 MovS
	func_582(var_33_cvector, var_484_string); // 0x485 NEW_2
	var_485_int = 531230; // 0x487 PushI
	SetMessage(var_485_int); // 0x488 TObjFunc
	ClearReplies(); // 0x48a TObjFunc
	var_486_int = 531235; // 0x48c PushI
	var_487_int = -1; // 0x48d PushI
	var_488_int = 32549; // 0x48e PushI
	AddReply(var_486_int, var_487_int, var_488_int); // 0x48f TObjFunc
	var_489_int = 531240; // 0x491 PushI
	var_490_int = 32553; // 0x492 PushI
	var_491_int = 32554; // 0x493 PushI
	AddReply(var_489_int, var_490_int, var_491_int); // 0x494 TObjFunc
	return 0; // 0x496 Return
	
Label_1175:
	var_492_int = 32553; // 0x497 PushI
	var_493_bool = var_32_bool == var_492_int; // 0x498 Eq
	if(var_493_bool == 0) goto Label_1193; // 0x499 JumpB
	var_494_string = ""; // 0x49a PushV
	var_494_string = "Smile"; // 0x49b MovS
	func_582(var_33_cvector, var_494_string); // 0x49c NEW_2
	var_495_int = 531239; // 0x49e PushI
	SetMessage(var_495_int); // 0x49f TObjFunc
	ClearReplies(); // 0x4a1 TObjFunc
	var_496_int = 531236; // 0x4a3 PushI
	var_497_int = 32551; // 0x4a4 PushI
	var_498_int = 32550; // 0x4a5 PushI
	AddReply(var_496_int, var_497_int, var_498_int); // 0x4a6 TObjFunc
	return 0; // 0x4a8 Return
	
Label_1193:
	var_499_int = 32551; // 0x4a9 PushI
	var_500_bool = var_32_bool == var_499_int; // 0x4aa Eq
	if(var_500_bool == 0) goto Label_1216; // 0x4ab JumpB
	var_501_string = ""; // 0x4ac PushV
	var_501_string = "Neutral"; // 0x4ad MovS
	func_582(var_33_cvector, var_501_string); // 0x4ae NEW_2
	var_502_int = 531237; // 0x4b0 PushI
	SetMessage(var_502_int); // 0x4b1 TObjFunc
	ClearReplies(); // 0x4b3 TObjFunc
	var_503_int = 531045; // 0x4b5 PushI
	var_504_int = -1; // 0x4b6 PushI
	var_505_int = 32376; // 0x4b7 PushI
	AddReply(var_503_int, var_504_int, var_505_int); // 0x4b8 TObjFunc
	var_506_int = 531040; // 0x4ba PushI
	var_507_int = -1; // 0x4bb PushI
	var_508_int = 32371; // 0x4bc PushI
	AddReply(var_506_int, var_507_int, var_508_int); // 0x4bd TObjFunc
	return 0; // 0x4bf Return
	
Label_1216:
	var_3_object = 1; // 0x4c0 TMovB
	var_509_bool = 0; // 0x4c1 PushV
	func_3045(var_509_bool); // 0x4c2 NEW_2
	if(var_509_bool == 0) goto Label_1224; // 0x4c4 JumpB
	lshStopAnimation(); // 0x4c5 Func
	goto Label_1226; // 0x4c7 Jump
	
Label_1226:
	return 0; // 0x4ca Return
	
Label_1224:
	StopAnimation(); // 0x4c8 Func
	
Label_1228:
	return 0; // 0x4cc Return
}


task_6_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_int, var_17_int, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_cvector)
{
	var_34_int = 1; // 0x582 PushI
	if(var_34_int == 0) goto Label_1590; // 0x583 JumpB
	func_2891(); // 0x585 NEW_2
	var_36_int = 20030; // 0x587 PushI
	var_37_bool = var_33_cvector == var_36_int; // 0x588 Eq
	if(var_37_bool == 0) goto Label_1423; // 0x589 JumpB
	var_38_object = Obj(); var_39_object = Obj(); // 0x58a PushV
	var_38_object = var_1_object; // 0x58b MovT
	var_39_object = var_0_bool; // 0x58c MovT
	func_3047(); // 0x58d NEW_2
	
Label_1423:
	var_42_int = 33368; // 0x58f PushI
	var_43_bool = var_33_cvector == var_42_int; // 0x590 Eq
	if(var_43_bool == 0) goto Label_1431; // 0x591 JumpB
	var_44_object = Obj(); var_45_object = Obj(); // 0x592 PushV
	var_44_object = var_1_object; // 0x593 MovT
	var_45_object = var_0_bool; // 0x594 MovT
	func_3178(); // 0x595 NEW_2
	
Label_1431:
	var_47_int = 20028; // 0x597 PushI
	var_48_bool = var_32_bool == var_47_int; // 0x598 Eq
	if(var_48_bool == 0) goto Label_1473; // 0x599 JumpB
	var_49_string = ""; // 0x59a PushV
	var_49_string = "Smile"; // 0x59b MovS
	func_1387(var_33_cvector, var_49_string); // 0x59c NEW_2
	var_66_int = 518917; // 0x59e PushI
	SetMessage(var_66_int); // 0x59f TObjFunc
	ClearReplies(); // 0x5a1 TObjFunc
	var_67_bool = 0; // 0x5a3 PushV
	var_67_bool = 0; // 0x5a4 MovB
	var_68_bool = 0; var_69_object = Obj(); // 0x5a5 PushV
	var_69_object = var_1_object; // 0x5a6 MovT
	func_3277(var_69_object); // 0x5a7 NEW_2
	if(var_68_bool == 0) goto Label_1456; // 0x5a9 JumpB
	var_76_bool = 0; var_77_object = Obj(); // 0x5aa PushV
	var_77_object = var_1_object; // 0x5ab MovT
	func_3289(var_77_object); // 0x5ac NEW_2
	if(var_76_bool == 0) goto Label_1456; // 0x5ae JumpB
	var_67_bool = 1; // 0x5af MovB
	
Label_1456:
	if(var_67_bool == 0) goto Label_1462; // 0x5b0 JumpB
	var_82_int = 518919; // 0x5b1 PushI
	var_83_int = 20031; // 0x5b2 PushI
	var_84_int = 20030; // 0x5b3 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x5b4 TObjFunc
	
Label_1462:
	var_85_int = 531963; // 0x5b6 PushI
	var_86_int = -1; // 0x5b7 PushI
	var_87_int = 33368; // 0x5b8 PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0x5b9 TObjFunc
	var_88_int = 518918; // 0x5bb PushI
	var_89_int = -1; // 0x5bc PushI
	var_90_int = 20029; // 0x5bd PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0x5be TObjFunc
	return 0; // 0x5c0 Return
	
Label_1473:
	var_91_int = 20031; // 0x5c1 PushI
	var_92_bool = var_32_bool == var_91_int; // 0x5c2 Eq
	if(var_92_bool == 0) goto Label_1496; // 0x5c3 JumpB
	var_93_string = ""; // 0x5c4 PushV
	var_93_string = "Neutral"; // 0x5c5 MovS
	func_1387(var_33_cvector, var_93_string); // 0x5c6 NEW_2
	var_94_int = 518920; // 0x5c8 PushI
	SetMessage(var_94_int); // 0x5c9 TObjFunc
	ClearReplies(); // 0x5cb TObjFunc
	var_95_int = 518923; // 0x5cd PushI
	var_96_int = 20039; // 0x5ce PushI
	var_97_int = 20034; // 0x5cf PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x5d0 TObjFunc
	var_98_int = 518921; // 0x5d2 PushI
	var_99_int = 20033; // 0x5d3 PushI
	var_100_int = 20032; // 0x5d4 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x5d5 TObjFunc
	return 0; // 0x5d7 Return
	
Label_1496:
	var_101_int = 20033; // 0x5d8 PushI
	var_102_bool = var_32_bool == var_101_int; // 0x5d9 Eq
	if(var_102_bool == 0) goto Label_1519; // 0x5da JumpB
	var_103_string = ""; // 0x5db PushV
	var_103_string = "Grin"; // 0x5dc MovS
	func_1387(var_33_cvector, var_103_string); // 0x5dd NEW_2
	var_104_int = 518922; // 0x5df PushI
	SetMessage(var_104_int); // 0x5e0 TObjFunc
	ClearReplies(); // 0x5e2 TObjFunc
	var_105_int = 518924; // 0x5e4 PushI
	var_106_int = 20037; // 0x5e5 PushI
	var_107_int = 20035; // 0x5e6 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x5e7 TObjFunc
	var_108_int = 518925; // 0x5e9 PushI
	var_109_int = -1; // 0x5ea PushI
	var_110_int = 20036; // 0x5eb PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x5ec TObjFunc
	return 0; // 0x5ee Return
	
Label_1519:
	var_111_int = 20037; // 0x5ef PushI
	var_112_bool = var_32_bool == var_111_int; // 0x5f0 Eq
	if(var_112_bool == 0) goto Label_1537; // 0x5f1 JumpB
	var_113_string = ""; // 0x5f2 PushV
	var_113_string = "What"; // 0x5f3 MovS
	func_1387(var_33_cvector, var_113_string); // 0x5f4 NEW_2
	var_114_int = 518926; // 0x5f6 PushI
	SetMessage(var_114_int); // 0x5f7 TObjFunc
	ClearReplies(); // 0x5f9 TObjFunc
	var_115_int = 518927; // 0x5fb PushI
	var_116_int = -1; // 0x5fc PushI
	var_117_int = 20038; // 0x5fd PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x5fe TObjFunc
	return 0; // 0x600 Return
	
Label_1537:
	var_118_int = 20039; // 0x601 PushI
	var_119_bool = var_32_bool == var_118_int; // 0x602 Eq
	if(var_119_bool == 0) goto Label_1560; // 0x603 JumpB
	var_120_string = ""; // 0x604 PushV
	var_120_string = "Grin"; // 0x605 MovS
	func_1387(var_33_cvector, var_120_string); // 0x606 NEW_2
	var_121_int = 518928; // 0x608 PushI
	SetMessage(var_121_int); // 0x609 TObjFunc
	ClearReplies(); // 0x60b TObjFunc
	var_122_int = 518930; // 0x60d PushI
	var_123_int = 20042; // 0x60e PushI
	var_124_int = 20041; // 0x60f PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x610 TObjFunc
	var_125_int = 518929; // 0x612 PushI
	var_126_int = -1; // 0x613 PushI
	var_127_int = 20040; // 0x614 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x615 TObjFunc
	return 0; // 0x617 Return
	
Label_1560:
	var_128_int = 20042; // 0x618 PushI
	var_129_bool = var_32_bool == var_128_int; // 0x619 Eq
	if(var_129_bool == 0) goto Label_1578; // 0x61a JumpB
	var_130_string = ""; // 0x61b PushV
	var_130_string = "Grin"; // 0x61c MovS
	func_1387(var_33_cvector, var_130_string); // 0x61d NEW_2
	var_131_int = 518931; // 0x61f PushI
	SetMessage(var_131_int); // 0x620 TObjFunc
	ClearReplies(); // 0x622 TObjFunc
	var_132_int = 518932; // 0x624 PushI
	var_133_int = -1; // 0x625 PushI
	var_134_int = 20043; // 0x626 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x627 TObjFunc
	return 0; // 0x629 Return
	
Label_1578:
	var_3_object = 1; // 0x62a TMovB
	var_135_bool = 0; // 0x62b PushV
	func_3045(var_135_bool); // 0x62c NEW_2
	if(var_135_bool == 0) goto Label_1586; // 0x62e JumpB
	lshStopAnimation(); // 0x62f Func
	goto Label_1588; // 0x631 Jump
	
Label_1588:
	return 0; // 0x634 Return
	
Label_1586:
	StopAnimation(); // 0x632 Func
	
Label_1590:
	return 0; // 0x636 Return
}


task_8_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_int, var_22_int, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_cvector)
{
	var_34_int = 1; // 0x6d9 PushI
	if(var_34_int == 0) goto Label_1801; // 0x6da JumpB
	func_2891(); // 0x6dc NEW_2
	var_36_int = 33378; // 0x6de PushI
	var_37_bool = var_33_cvector == var_36_int; // 0x6df Eq
	if(var_37_bool == 0) goto Label_1766; // 0x6e0 JumpB
	var_38_object = Obj(); var_39_object = Obj(); // 0x6e1 PushV
	var_38_object = var_1_object; // 0x6e2 MovT
	var_39_object = var_0_bool; // 0x6e3 MovT
	func_3178(); // 0x6e4 NEW_2
	
Label_1766:
	var_41_int = 33377; // 0x6e6 PushI
	var_42_bool = var_32_bool == var_41_int; // 0x6e7 Eq
	if(var_42_bool == 0) goto Label_1789; // 0x6e8 JumpB
	var_43_string = ""; // 0x6e9 PushV
	var_43_string = "Neutral"; // 0x6ea MovS
	func_1730(var_33_cvector, var_43_string); // 0x6eb NEW_2
	var_60_int = 531971; // 0x6ed PushI
	SetMessage(var_60_int); // 0x6ee TObjFunc
	ClearReplies(); // 0x6f0 TObjFunc
	var_61_int = 531972; // 0x6f2 PushI
	var_62_int = -1; // 0x6f3 PushI
	var_63_int = 33378; // 0x6f4 PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0x6f5 TObjFunc
	var_64_int = 531973; // 0x6f7 PushI
	var_65_int = -1; // 0x6f8 PushI
	var_66_int = 33379; // 0x6f9 PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0x6fa TObjFunc
	return 0; // 0x6fc Return
	
Label_1789:
	var_3_object = 1; // 0x6fd TMovB
	var_67_bool = 0; // 0x6fe PushV
	func_3045(var_67_bool); // 0x6ff NEW_2
	if(var_67_bool == 0) goto Label_1797; // 0x701 JumpB
	lshStopAnimation(); // 0x702 Func
	goto Label_1799; // 0x704 Jump
	
Label_1799:
	return 0; // 0x707 Return
	
Label_1797:
	StopAnimation(); // 0x705 Func
	
Label_1801:
	return 0; // 0x709 Return
}


task_10_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_int, var_27_int, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_cvector)
{
	var_34_int = 1; // 0x7b1 PushI
	if(var_34_int == 0) goto Label_2060; // 0x7b2 JumpB
	func_2891(); // 0x7b4 NEW_2
	var_36_int = 36906; // 0x7b6 PushI
	var_37_bool = var_32_bool == var_36_int; // 0x7b7 Eq
	if(var_37_bool == 0) goto Label_2002; // 0x7b8 JumpB
	var_38_string = ""; // 0x7b9 PushV
	var_38_string = "Neutral"; // 0x7ba MovS
	func_1946(var_33_cvector, var_38_string); // 0x7bb NEW_2
	var_55_int = 535231; // 0x7bd PushI
	SetMessage(var_55_int); // 0x7be TObjFunc
	ClearReplies(); // 0x7c0 TObjFunc
	var_56_int = 535232; // 0x7c2 PushI
	var_57_int = 36953; // 0x7c3 PushI
	var_58_int = 36907; // 0x7c4 PushI
	AddReply(var_56_int, var_57_int, var_58_int); // 0x7c5 TObjFunc
	var_59_int = 535233; // 0x7c7 PushI
	var_60_int = -1; // 0x7c8 PushI
	var_61_int = 36908; // 0x7c9 PushI
	AddReply(var_59_int, var_60_int, var_61_int); // 0x7ca TObjFunc
	var_62_int = 535280; // 0x7cc PushI
	var_63_int = -1; // 0x7cd PushI
	var_64_int = 36956; // 0x7ce PushI
	AddReply(var_62_int, var_63_int, var_64_int); // 0x7cf TObjFunc
	return 0; // 0x7d1 Return
	
Label_2002:
	var_65_int = 36953; // 0x7d2 PushI
	var_66_bool = var_32_bool == var_65_int; // 0x7d3 Eq
	if(var_66_bool == 0) goto Label_2025; // 0x7d4 JumpB
	var_67_string = ""; // 0x7d5 PushV
	var_67_string = "Neutral"; // 0x7d6 MovS
	func_1946(var_33_cvector, var_67_string); // 0x7d7 NEW_2
	var_68_int = 535277; // 0x7d9 PushI
	SetMessage(var_68_int); // 0x7da TObjFunc
	ClearReplies(); // 0x7dc TObjFunc
	var_69_int = 535278; // 0x7de PushI
	var_70_int = 36957; // 0x7df PushI
	var_71_int = 36954; // 0x7e0 PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0x7e1 TObjFunc
	var_72_int = 535279; // 0x7e3 PushI
	var_73_int = 36957; // 0x7e4 PushI
	var_74_int = 36955; // 0x7e5 PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0x7e6 TObjFunc
	return 0; // 0x7e8 Return
	
Label_2025:
	var_75_int = 36957; // 0x7e9 PushI
	var_76_bool = var_32_bool == var_75_int; // 0x7ea Eq
	if(var_76_bool == 0) goto Label_2048; // 0x7eb JumpB
	var_77_string = ""; // 0x7ec PushV
	var_77_string = "Neutral"; // 0x7ed MovS
	func_1946(var_33_cvector, var_77_string); // 0x7ee NEW_2
	var_78_int = 535281; // 0x7f0 PushI
	SetMessage(var_78_int); // 0x7f1 TObjFunc
	ClearReplies(); // 0x7f3 TObjFunc
	var_79_int = 535282; // 0x7f5 PushI
	var_80_int = -1; // 0x7f6 PushI
	var_81_int = 36958; // 0x7f7 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0x7f8 TObjFunc
	var_82_int = 535283; // 0x7fa PushI
	var_83_int = -1; // 0x7fb PushI
	var_84_int = 36959; // 0x7fc PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x7fd TObjFunc
	return 0; // 0x7ff Return
	
Label_2048:
	var_3_object = 1; // 0x800 TMovB
	var_85_bool = 0; // 0x801 PushV
	func_3045(var_85_bool); // 0x802 NEW_2
	if(var_85_bool == 0) goto Label_2056; // 0x804 JumpB
	lshStopAnimation(); // 0x805 Func
	goto Label_2058; // 0x807 Jump
	
Label_2058:
	return 0; // 0x80a Return
	
Label_2056:
	StopAnimation(); // 0x808 Func
	
Label_2060:
	return 0; // 0x80c Return
}


task_12_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_int, var_32_int, var_33_cvector)
{
	var_34_int = 1; // 0x8af PushI
	if(var_34_int == 0) goto Label_2263; // 0x8b0 JumpB
	func_2891(); // 0x8b2 NEW_2
	var_36_int = 42563; // 0x8b4 PushI
	var_37_bool = var_32_int == var_36_int; // 0x8b5 Eq
	if(var_37_bool == 0) goto Label_2251; // 0x8b6 JumpB
	var_38_string = ""; // 0x8b7 PushV
	var_38_string = "Neutral"; // 0x8b8 MovS
	func_2200(var_33_cvector, var_38_string); // 0x8b9 NEW_2
	var_55_int = 540554; // 0x8bb PushI
	SetMessage(var_55_int); // 0x8bc TObjFunc
	ClearReplies(); // 0x8be TObjFunc
	var_56_int = 540555; // 0x8c0 PushI
	var_57_int = -1; // 0x8c1 PushI
	var_58_int = 42564; // 0x8c2 PushI
	AddReply(var_56_int, var_57_int, var_58_int); // 0x8c3 TObjFunc
	var_59_int = 540794; // 0x8c5 PushI
	var_60_int = -1; // 0x8c6 PushI
	var_61_int = 42843; // 0x8c7 PushI
	AddReply(var_59_int, var_60_int, var_61_int); // 0x8c8 TObjFunc
	return 0; // 0x8ca Return
	
Label_2251:
	var_3_object = 1; // 0x8cb TMovB
	var_62_bool = 0; // 0x8cc PushV
	func_3045(var_62_bool); // 0x8cd NEW_2
	if(var_62_bool == 0) goto Label_2259; // 0x8cf JumpB
	lshStopAnimation(); // 0x8d0 Func
	goto Label_2261; // 0x8d2 Jump
	
Label_2261:
	return 0; // 0x8d5 Return
	
Label_2259:
	StopAnimation(); // 0x8d3 Func
	
Label_2263:
	return 0; // 0x8d7 Return
}


task_13_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_cvector, var_32_int)
{
	var_33_int = 10; // 0x922 PushI
	var_34_bool = var_32_int == var_33_int; // 0x923 Eq
	if(var_34_bool == 0) goto Label_2374; // 0x924 JumpB
	func_2333(); // 0x926 NEW_2
	var_36_bool = 0; // 0x928 PushV
	var_36_bool = 0; // 0x929 MovB
	var_37_bool = 0; // 0x92a PushV
	func_2554(var_37_bool); // 0x92b NEW_2
	if(var_37_bool == 0) goto Label_2355; // 0x92d JumpB
	var_40_bool = 0; // 0x92e PushV
	func_2302(var_40_bool); // 0x92f NEW_2
	if(var_40_bool == 0) goto Label_2355; // 0x931 JumpB
	var_36_bool = 1; // 0x932 MovB
	
Label_2355:
	if(var_36_bool == 0) goto Label_2368; // 0x933 JumpB
	var_57_bool = 0; // 0x934 PushV
	func_2282(var_57_bool); // 0x935 NEW_2
	if(var_57_bool == 0) goto Label_2367; // 0x937 JumpB
	var_76_bool = 0; var_77_object = Obj(); // 0x938 PushV
	var_78_object = Obj(); // 0x939 PushV
	func_2924(var_78_object); // 0x93a NEW_2
	var_77_object = var_78_object; // 0x93b Mov
	func_2704(var_77_object); // 0x93d NEW_2
	
Label_2367:
	goto Label_2374; // 0x93f Jump
	
Label_2374:
	return 0; // 0x946 Return
	
Label_2368:
	func_2297(var_32_int); // 0x941 NEW_2
	func_2324(); // 0x944 NEW_2
}


task_13_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_cvector)
{
	func_2515(); // 0x948 NEW_2
	func_2333(); // 0x94b NEW_2
	lshStopSpeech(); // 0x94d Func
	lshStopAnimation(); // 0x94f Func
	StopAsync(); // 0x951 Func
	Hold(); // 0x953 Func
	return 0; // 0x955 Return
}


task_13_event_5(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_cvector)
{
	StopGroup0(); // 0x956 Func
	func_2333(); // 0x959 NEW_2
	var_33_string = ""; // 0x95b PushV
	var_33_string = "Neutral"; // 0x95c MovS
	func_2845(var_33_string); // 0x95d NEW_2
	func_2324(); // 0x960 NEW_2
	return 0; // 0x962 Return
}


task_13_event_45(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_cvector, var_32_bool)
{
	var_33_bool = var_32_bool; // 0x964 Push
	if(var_33_bool == 0) goto Label_2410; // 0x965 JumpB
	func_2324(); // 0x967 NEW_2
	goto Label_2414; // 0x969 Jump
	
Label_2414:
	return 0; // 0x96e Return
	
Label_2410:
	var_39_string = ""; // 0x96a PushV
	var_39_string = "Neutral"; // 0x96b MovS
	func_2845(var_39_string); // 0x96c NEW_2
}


task_13_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_cvector, var_32_object)
{
	var_33_bool = 0; var_34_bool = 0; // 0x96f PushV
	IsOverrideActive(var_34_bool); // 0x970 Func
	var_35_bool = var_34_bool == 0; // 0x972 Not
	if(var_35_bool == 0) goto Label_2443; // 0x973 JumpB
	EventDisable(0); // 0x974 EventDisable
	func_2515(); // 0x976 NEW_2
	var_36_bool = 0; var_37_object = Obj(); // 0x978 PushV
	var_37_object = var_32_object; // 0x979 Mov
	func_2545(var_37_object); // 0x97a NEW_2
	EventEnable(0); // 0x97c EventEnable
	var_50_object = Obj(); // 0x97d PushV
	var_50_object = var_32_object; // 0x97e Mov
	func_3556(var_32_object, var_33_bool, var_34_bool, var_50_object); // 0x97f NEW_2
	var_818_string = ""; // 0x981 PushV
	var_818_string = "Neutral"; // 0x982 MovS
	func_2845(var_818_string); // 0x983 NEW_2
	func_2333(); // 0x986 NEW_2
	func_2324(); // 0x989 NEW_2
	
Label_2443:
	return 2; // 0x98b Return
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_cvector)
{
	func_2268(var_31_cvector); // 0x8d9 NEW_2
	return 0; // 0x8db Return
}


func_0(var_0_bool)
{
	DoTrade(); // 0x1 Func
	var_0_bool = 0; // 0x3 TMovB
	
Label_4:
	var_520_bool = 0; // 0x4 PushV
	func_3045(var_520_bool); // 0x5 NEW_2
	if(var_520_bool == 0) goto Label_15; // 0x7 JumpB
	var_521_string = ""; // 0x8 PushV
	var_521_string = "Neutral"; // 0x9 MovS
	func_2845(var_521_string); // 0xa NEW_2
	lshWaitForAnimEnd(); // 0xc Func
	goto Label_21; // 0xe Jump
	
Label_21:
	var_522_bool = var_0_bool; // 0x15 PushT
	if(var_522_bool == 0) goto Label_24; // 0x16 JumpB
	return 0; // 0x17 Return
	
Label_24:
	goto Label_4; // 0x18 Jump
	
Label_15:
	WaitForAnimEnd(); // 0xf Func
	var_523_string = "all"; // 0x11 PushS
	var_524_string = "idle"; // 0x12 PushS
	PlayAnimation(var_523_string, var_524_string); // 0x13 Func
}


func_3075()
{
	var_376_string = "oob2Andrei2"; // 0xc04 PushS
	var_377_int = 1; // 0xc05 PushI
	SetVariable(var_376_string, var_377_int); // 0xc06 Func
	return 0; // 0xc08 Return
}


func_3081()
{
	var_40_string = "b2q03"; // 0xc0a PushS
	var_41_int = 1; // 0xc0b PushI
	SetVariable(var_40_string, var_41_int); // 0xc0c Func
	func_3324(); // 0xc0f NEW_2
	func_3337(); // 0xc12 NEW_2
	var_73_bool = 0; var_74_string = ""; var_75_string = ""; // 0xc14 PushV
	var_74_string = "quest_b2_03"; // 0xc15 MovS
	var_75_string = "place_maria"; // 0xc16 MovS
	func_2981(var_73_bool, var_74_string, var_75_string); // 0xc17 NEW_2
	return 0; // 0xc19 Return
}


func_3337()
{
	var_65_object = Obj(); var_66_object = Obj(); // 0xd09 PushV
	var_67_int = 586; // 0xd0a PushI
	var_68_int = 2; // 0xd0b PushI
	var_69_int = 531047; // 0xd0c PushI
	CreateDiaryEntry(var_66_object, var_67_int, var_68_int, var_69_int); // 0xd0d Func
	var_70_bool = 0; var_71_object = Obj(); var_72_int = 0; // 0xd0f PushV
	var_71_object = var_66_object; // 0xd10 Mov
	var_72_int = 585; // 0xd11 MovI
	func_3415(var_70_bool, var_71_object, var_72_int); // 0xd12 NEW_2
	return 2; // 0xd14 Return
}


func_1802(var_0_bool, var_701_int, var_702_object)
{
	var_704_object = Obj(); var_705_bool = 0; var_706_int = 0; var_707_bool = 0; var_708_object = Obj(); var_709_bool = 0; var_710_int = 0; var_711_bool = 0; // 0x70a PushV
	var_0_bool = var_702_object; // 0x70b TMov
	var_712_bool = 0; var_713_object = Obj(); var_714_float = 0; // 0x70c PushV
	var_713_object = var_702_object; // 0x70d Mov
	var_714_float = 70.0; // 0x70e MovF
	func_2559(var_713_object, var_714_float); // 0x70f NEW_2
	var_715_bool = var_712_bool == 0; // 0x711 Not
	if(var_715_bool == 0) goto Label_1813; // 0x712 JumpB
	var_701_int = -2; // 0x713 MovI
	return 8; // 0x714 Return
	
Label_1813:
	CreateDialog(var_708_object); // 0x715 Func
	var_716_int = 0; // 0x717 PushV
	func_3039(var_716_int); // 0x718 NEW_2
	SetNPCName(var_716_int); // 0x71a ObjFunc
	var_717_int = 0; // 0x71c PushV
	func_3037(var_717_int); // 0x71d NEW_2
	SetNPCDescription(var_717_int); // 0x71f ObjFunc
	var_718_string = ""; // 0x721 PushV
	func_3041(var_718_string); // 0x722 NEW_2
	SetPhoto(var_718_string); // 0x724 ObjFunc
	var_719_string = ""; // 0x726 PushV
	func_3043(var_719_string); // 0x727 NEW_2
	SetPhoto2(var_719_string); // 0x729 ObjFunc
	var_720_int = 0; // 0x72b PushV
	func_3539(var_720_int); // 0x72c NEW_2
	SetPlayerName(var_720_int); // 0x72e ObjFunc
	var_710_int = -1; // 0x730 MovI
	IsOverrideActive(var_709_bool); // 0x731 Func
	var_721_bool = var_709_bool; // 0x733 Push
	if(var_721_bool == 0) goto Label_1847; // 0x734 JumpB
	var_701_int = -2; // 0x735 MovI
	return 8; // 0x736 Return
	
Label_1847:
	DoDialog(var_708_object); // 0x737 Func
	var_722_bool = 0; var_723_object = Obj(); // 0x739 PushV
	var_724_object = Obj(); // 0x73a PushV
	func_2924(var_724_object); // 0x73b NEW_2
	var_723_object = var_724_object; // 0x73c Mov
	func_2646(var_722_bool, var_723_object); // 0x73e NEW_2
	var_725_object = Obj(); var_726_object = Obj(); // 0x740 PushV
	var_725_object = var_702_object; // 0x741 Mov
	var_726_object = var_708_object; // 0x742 Mov
	TaskCall(10); // 0x743 TaskCall
	func_1883(var_727_object, var_728_object, var_729_string, var_730_bool, var_725_object, var_726_object); // 0x744 NEW_2
	TaskReturn(); // 0x745 TaskReturn
	IsDialogEnd(var_711_bool); // 0x747 ObjFunc
	
Label_1865:
	var_758_bool = var_711_bool == 0; // 0x749 Not
	if(var_758_bool == 0) goto Label_1872; // 0x74a JumpB
	sync(); // 0x74b Func
	IsDialogEnd(var_711_bool); // 0x74d ObjFunc
	goto Label_1865; // 0x74f Jump
	
Label_1872:
	var_759_object = Obj(); // 0x750 PushV
	var_759_object = var_702_object; // 0x751 Mov
	func_2628(); // 0x752 NEW_2
	StopDialog(var_708_object); // 0x754 Func
	GetReturnValue(var_710_int); // 0x756 ObjFunc
	var_701_int = var_710_int; // 0x758 Mov
	return 8; // 0x759 Return
}


func_2061(var_0_bool, var_762_int, var_763_object)
{
	var_765_object = Obj(); var_766_bool = 0; var_767_int = 0; var_768_bool = 0; var_769_object = Obj(); var_770_bool = 0; var_771_int = 0; var_772_bool = 0; // 0x80d PushV
	var_0_bool = var_763_object; // 0x80e TMov
	var_773_bool = 0; var_774_object = Obj(); var_775_float = 0; // 0x80f PushV
	var_774_object = var_763_object; // 0x810 Mov
	var_775_float = 70.0; // 0x811 MovF
	func_2559(var_774_object, var_775_float); // 0x812 NEW_2
	var_776_bool = var_773_bool == 0; // 0x814 Not
	if(var_776_bool == 0) goto Label_2072; // 0x815 JumpB
	var_762_int = -2; // 0x816 MovI
	return 8; // 0x817 Return
	
Label_2072:
	CreateDialog(var_769_object); // 0x818 Func
	var_777_int = 0; // 0x81a PushV
	func_3039(var_777_int); // 0x81b NEW_2
	SetNPCName(var_777_int); // 0x81d ObjFunc
	var_778_int = 0; // 0x81f PushV
	func_3037(var_778_int); // 0x820 NEW_2
	SetNPCDescription(var_778_int); // 0x822 ObjFunc
	var_779_string = ""; // 0x824 PushV
	func_3041(var_779_string); // 0x825 NEW_2
	SetPhoto(var_779_string); // 0x827 ObjFunc
	var_780_string = ""; // 0x829 PushV
	func_3043(var_780_string); // 0x82a NEW_2
	SetPhoto2(var_780_string); // 0x82c ObjFunc
	var_781_int = 0; // 0x82e PushV
	func_3539(var_781_int); // 0x82f NEW_2
	SetPlayerName(var_781_int); // 0x831 ObjFunc
	var_771_int = -1; // 0x833 MovI
	IsOverrideActive(var_770_bool); // 0x834 Func
	var_782_bool = var_770_bool; // 0x836 Push
	if(var_782_bool == 0) goto Label_2106; // 0x837 JumpB
	var_762_int = -2; // 0x838 MovI
	return 8; // 0x839 Return
	
Label_2106:
	DoDialog(var_769_object); // 0x83a Func
	var_783_bool = 0; var_784_object = Obj(); // 0x83c PushV
	var_785_object = Obj(); // 0x83d PushV
	func_2924(var_785_object); // 0x83e NEW_2
	var_784_object = var_785_object; // 0x83f Mov
	func_2646(var_783_bool, var_784_object); // 0x841 NEW_2
	var_786_object = Obj(); var_787_object = Obj(); // 0x843 PushV
	var_786_object = var_763_object; // 0x844 Mov
	var_787_object = var_769_object; // 0x845 Mov
	TaskCall(12); // 0x846 TaskCall
	func_2142(var_788_object, var_789_object, var_790_string, var_791_bool, var_786_object, var_787_object); // 0x847 NEW_2
	TaskReturn(); // 0x848 TaskReturn
	IsDialogEnd(var_772_bool); // 0x84a ObjFunc
	
Label_2124:
	var_816_bool = var_772_bool == 0; // 0x84c Not
	if(var_816_bool == 0) goto Label_2131; // 0x84d JumpB
	sync(); // 0x84e Func
	IsDialogEnd(var_772_bool); // 0x850 ObjFunc
	goto Label_2124; // 0x852 Jump
	
Label_2131:
	var_817_object = Obj(); // 0x853 PushV
	var_817_object = var_763_object; // 0x854 Mov
	func_2628(); // 0x855 NEW_2
	StopDialog(var_769_object); // 0x857 Func
	GetReturnValue(var_771_int); // 0x859 ObjFunc
	var_762_int = var_771_int; // 0x85b Mov
	return 8; // 0x85c Return
}


func_2324()
{
	var_820_float = 0; var_821_float = 0; // 0x914 PushV
	var_822_int = 8; // 0x915 PushI
	var_823_int = 16; // 0x916 PushI
	rand(var_821_float, var_822_int, var_823_int); // 0x917 Func
	var_824_int = 10; // 0x919 PushI
	SetTimer(var_824_int, var_821_float); // 0x91a Func
	return 2; // 0x91c Return
}


func_3350()
{
	var_105_object = Obj(); var_106_object = Obj(); // 0xd16 PushV
	var_107_int = 587; // 0xd17 PushI
	var_108_int = 2; // 0xd18 PushI
	var_109_int = 531051; // 0xd19 PushI
	CreateDiaryEntry(var_106_object, var_107_int, var_108_int, var_109_int); // 0xd1a Func
	var_110_bool = 0; var_111_object = Obj(); var_112_int = 0; // 0xd1c PushV
	var_111_object = var_106_object; // 0xd1d Mov
	var_112_int = 585; // 0xd1e MovI
	func_3415(var_110_bool, var_111_object, var_112_int); // 0xd1f NEW_2
	return 2; // 0xd21 Return
}


func_2840()
{
	var_526_bool = 1; // 0xb19 PushB
	CameraSwitchToNormal(var_526_bool); // 0xb1a Func
	return 0; // 0xb1c Return
}


func_3098()
{
	var_87_object = Obj(); var_88_int = 0; var_89_object = Obj(); var_90_int = 0; // 0xc1a PushV
	var_91_object = Obj(); // 0xc1b PushV
	func_3443(var_91_object); // 0xc1c NEW_2
	var_89_object = var_91_object; // 0xc1d Mov
	var_98_string = "b2q03GoodShop"; // 0xc1f PushS
	var_99_string = "pt_b2q03_good_shop"; // 0xc20 PushS
	var_100_int = 3; // 0xc21 PushI
	var_101_int = 531061; // 0xc22 PushI
	var_102_float = 0; // 0xc23 PushV
	func_2993(var_102_float); // 0xc24 NEW_2
	AddMark(var_98_string, var_99_string, var_100_int, var_101_int, var_102_float); // 0xc26 ObjFunc
	func_3350(); // 0xc29 NEW_2
	var_113_string = "grass_brown_tvir"; // 0xc2b PushS
	var_114_int = 10; // 0xc2c PushI
	RemoveItemByType(var_90_int, var_113_string, var_114_int); // 0xc2d ObjFunc
	var_115_bool = 0; var_116_string = ""; var_117_string = ""; // 0xc2f PushV
	var_116_string = "quest_b2_03"; // 0xc30 MovS
	var_117_string = "completed"; // 0xc31 MovS
	func_2981(var_115_bool, var_116_string, var_117_string); // 0xc32 NEW_2
	return 4; // 0xc34 Return
}


func_2845(var_304_string)
{
	var_305_bool = 0; var_306_float = 0; var_307_float = 0; var_308_bool = 0; var_309_float = 0; var_310_float = 0; // 0xb1d PushV
	lshHasAnimation(var_308_bool, var_304_string); // 0xb1e Func
	var_311_bool = var_308_bool; // 0xb20 Push
	if(var_311_bool == 0) goto Label_2856; // 0xb21 JumpB
	lshGetAnimTimes(var_304_string, var_309_float, var_310_float); // 0xb22 Func
	var_312_bool = 0; // 0xb24 PushB
	lshPlayAnimation(var_309_float, var_310_float, var_312_bool); // 0xb25 Func
	goto Label_2860; // 0xb27 Jump
	
Label_2860:
	return 6; // 0xb2c Return
	
Label_2856:
	var_313_string = "Can't find lsh animation : "; // 0xb28 PushS
	var_314_int = var_313_string + var_304_string; // 0xb29 Add
	Trace(var_314_int); // 0xb2a Func
}


func_1310(var_0_bool, var_1_object, var_2_object, var_3_object, var_554_object, var_555_object)
{
	var_0_bool = var_555_object; // 0x51f TMov
	var_1_object = var_554_object; // 0x520 TMov
	var_3_object = 0; // 0x521 TMovB
	var_560_int = 1; // 0x522 PushI
	if(var_560_int == 0) goto Label_1357; // 0x523 JumpB
	var_561_string = ""; // 0x524 PushV
	var_561_string = "Smile"; // 0x525 MovS
	func_1387(var_555_object, var_561_string); // 0x526 NEW_2
	var_569_int = 518917; // 0x528 PushI
	SetMessage(var_569_int); // 0x529 TObjFunc
	ClearReplies(); // 0x52b TObjFunc
	var_570_bool = 0; // 0x52d PushV
	var_570_bool = 0; // 0x52e MovB
	var_571_bool = 0; var_572_object = Obj(); // 0x52f PushV
	var_572_object = var_1_object; // 0x530 MovT
	func_3277(var_572_object); // 0x531 NEW_2
	if(var_571_bool == 0) goto Label_1338; // 0x533 JumpB
	var_577_bool = 0; var_578_object = Obj(); // 0x534 PushV
	var_578_object = var_1_object; // 0x535 MovT
	func_3289(var_578_object); // 0x536 NEW_2
	if(var_577_bool == 0) goto Label_1338; // 0x538 JumpB
	var_570_bool = 1; // 0x539 MovB
	
Label_1338:
	if(var_570_bool == 0) goto Label_1344; // 0x53a JumpB
	var_583_int = 518919; // 0x53b PushI
	var_584_int = 20031; // 0x53c PushI
	var_585_int = 20030; // 0x53d PushI
	AddReply(var_583_int, var_584_int, var_585_int); // 0x53e TObjFunc
	
Label_1344:
	var_586_int = 531963; // 0x540 PushI
	var_587_int = -1; // 0x541 PushI
	var_588_int = 33368; // 0x542 PushI
	AddReply(var_586_int, var_587_int, var_588_int); // 0x543 TObjFunc
	var_589_int = 518918; // 0x545 PushI
	var_590_int = -1; // 0x546 PushI
	var_591_int = 20029; // 0x547 PushI
	AddReply(var_589_int, var_590_int, var_591_int); // 0x548 TObjFunc
	goto Label_1357; // 0x54a Jump
	
Label_1357:
	var_592_bool = 0; // 0x54d PushV
	func_3045(var_592_bool); // 0x54e NEW_2
	if(var_592_bool == 0) goto Label_1372; // 0x550 JumpB
	
Label_1361:
	lshWaitForAnimEnd(); // 0x551 Func
	var_593_object = var_3_object; // 0x553 PushT
	if(var_593_object == 0) goto Label_1366; // 0x554 JumpB
	goto Label_1371; // 0x555 Jump
	
Label_1371:
	goto Label_1386; // 0x55b Jump
	
Label_1386:
	return 0; // 0x56a Return
	
Label_1366:
	var_594_string = ""; // 0x556 PushV
	var_594_string = var_2_object; // 0x557 MovT
	func_2845(var_594_string); // 0x558 NEW_2
	goto Label_1361; // 0x55a Jump
	
Label_1372:
	var_595_string = "all"; // 0x55c PushS
	var_596_string = "idle"; // 0x55d PushS
	PlayAnimation(var_595_string, var_596_string); // 0x55e Func
	
Label_1376:
	WaitForAnimEnd(); // 0x560 Func
	var_597_object = var_3_object; // 0x562 PushT
	if(var_597_object == 0) goto Label_1381; // 0x563 JumpB
	goto Label_1386; // 0x564 Jump
	
Label_1381:
	var_598_string = "all"; // 0x565 PushS
	var_599_string = "idle"; // 0x566 PushS
	PlayAnimation(var_598_string, var_599_string); // 0x567 Func
	goto Label_1376; // 0x569 Jump
}


func_2333()
{
	var_819_int = 10; // 0x91d PushI
	KillTimer(var_819_int); // 0x91e Func
	return 0; // 0x920 Return
}


func_3363()
{
	var_205_object = Obj(); var_206_object = Obj(); // 0xd23 PushV
	var_207_int = 592; // 0xd24 PushI
	var_208_int = 2; // 0xd25 PushI
	var_209_int = 531080; // 0xd26 PushI
	CreateDiaryEntry(var_206_object, var_207_int, var_208_int, var_209_int); // 0xd27 Func
	var_210_bool = 0; var_211_object = Obj(); var_212_int = 0; // 0xd29 PushV
	var_211_object = var_206_object; // 0xd2a Mov
	var_212_int = 585; // 0xd2b MovI
	func_3415(var_210_bool, var_211_object, var_212_int); // 0xd2c NEW_2
	return 2; // 0xd2e Return
}


func_40(var_0_bool, var_112_int, var_113_object)
{
	var_115_object = Obj(); var_116_bool = 0; var_117_int = 0; var_118_bool = 0; var_119_object = Obj(); var_120_bool = 0; var_121_int = 0; var_122_bool = 0; // 0x28 PushV
	var_0_bool = var_113_object; // 0x29 TMov
	var_123_bool = 0; var_124_object = Obj(); var_125_float = 0; // 0x2a PushV
	var_124_object = var_113_object; // 0x2b Mov
	var_125_float = 70.0; // 0x2c MovF
	func_2559(var_124_object, var_125_float); // 0x2d NEW_2
	var_170_bool = var_123_bool == 0; // 0x2f Not
	if(var_170_bool == 0) goto Label_51; // 0x30 JumpB
	var_112_int = -2; // 0x31 MovI
	return 8; // 0x32 Return
	
Label_51:
	CreateDialog(var_119_object); // 0x33 Func
	var_171_int = 0; // 0x35 PushV
	func_3039(var_171_int); // 0x36 NEW_2
	SetNPCName(var_171_int); // 0x38 ObjFunc
	var_172_int = 0; // 0x3a PushV
	func_3037(var_172_int); // 0x3b NEW_2
	SetNPCDescription(var_172_int); // 0x3d ObjFunc
	var_173_string = ""; // 0x3f PushV
	func_3041(var_173_string); // 0x40 NEW_2
	SetPhoto(var_173_string); // 0x42 ObjFunc
	var_174_string = ""; // 0x44 PushV
	func_3043(var_174_string); // 0x45 NEW_2
	SetPhoto2(var_174_string); // 0x47 ObjFunc
	var_175_int = 0; // 0x49 PushV
	func_3539(var_175_int); // 0x4a NEW_2
	SetPlayerName(var_175_int); // 0x4c ObjFunc
	var_121_int = -1; // 0x4e MovI
	IsOverrideActive(var_120_bool); // 0x4f Func
	var_183_bool = var_120_bool; // 0x51 Push
	if(var_183_bool == 0) goto Label_85; // 0x52 JumpB
	var_112_int = -2; // 0x53 MovI
	return 8; // 0x54 Return
	
Label_85:
	DoDialog(var_119_object); // 0x55 Func
	var_184_bool = 0; var_185_object = Obj(); // 0x57 PushV
	var_186_object = Obj(); // 0x58 PushV
	func_2924(var_186_object); // 0x59 NEW_2
	var_185_object = var_186_object; // 0x5a Mov
	func_2646(var_184_bool, var_185_object); // 0x5c NEW_2
	var_274_object = Obj(); var_275_object = Obj(); // 0x5e PushV
	var_274_object = var_113_object; // 0x5f Mov
	var_275_object = var_119_object; // 0x60 Mov
	TaskCall(2); // 0x61 TaskCall
	func_121(var_276_object, var_277_object, var_278_string, var_279_bool, var_274_object, var_275_object); // 0x62 NEW_2
	TaskReturn(); // 0x63 TaskReturn
	IsDialogEnd(var_122_bool); // 0x65 ObjFunc
	
Label_103:
	var_320_bool = var_122_bool == 0; // 0x67 Not
	if(var_320_bool == 0) goto Label_110; // 0x68 JumpB
	sync(); // 0x69 Func
	IsDialogEnd(var_122_bool); // 0x6b ObjFunc
	goto Label_103; // 0x6d Jump
	
Label_110:
	var_321_object = Obj(); // 0x6e PushV
	var_321_object = var_113_object; // 0x6f Mov
	func_2628(); // 0x70 NEW_2
	StopDialog(var_119_object); // 0x72 Func
	GetReturnValue(var_121_int); // 0x74 ObjFunc
	var_112_int = var_121_int; // 0x76 Mov
	return 8; // 0x77 Return
}


func_2861(var_285_string, var_286_bool)
{
	var_289_bool = 0; var_290_float = 0; var_291_float = 0; var_292_bool = 0; var_293_float = 0; var_294_float = 0; // 0xb2d PushV
	lshHasAnimation(var_292_bool, var_285_string); // 0xb2e Func
	var_295_bool = var_292_bool; // 0xb30 Push
	if(var_295_bool == 0) goto Label_2871; // 0xb31 JumpB
	lshGetAnimTimes(var_285_string, var_293_float, var_294_float); // 0xb32 Func
	lshPlayAnimation(var_293_float, var_294_float, var_286_bool); // 0xb34 Func
	goto Label_2875; // 0xb36 Jump
	
Label_2875:
	return 6; // 0xb3b Return
	
Label_2871:
	var_296_string = "Can't find lsh animation : "; // 0xb37 PushS
	var_297_int = var_296_string + var_285_string; // 0xb38 Add
	Trace(var_297_int); // 0xb39 Func
}


func_3376()
{
	var_197_object = Obj(); var_198_object = Obj(); // 0xd30 PushV
	var_199_int = 591; // 0xd31 PushI
	var_200_int = 2; // 0xd32 PushI
	var_201_int = 531079; // 0xd33 PushI
	CreateDiaryEntry(var_198_object, var_199_int, var_200_int, var_201_int); // 0xd34 Func
	var_202_bool = 0; var_203_object = Obj(); var_204_int = 0; // 0xd36 PushV
	var_203_object = var_198_object; // 0xd37 Mov
	var_204_int = 588; // 0xd38 MovI
	func_3415(var_202_bool, var_203_object, var_204_int); // 0xd39 NEW_2
	return 2; // 0xd3b Return
}


func_3126()
{
	var_380_string = "b2AndreiVisit"; // 0xc37 PushS
	var_381_int = 1; // 0xc38 PushI
	SetVariable(var_380_string, var_381_int); // 0xc39 Func
	return 0; // 0xc3b Return
}


func_1591(var_0_bool, var_633_int, var_634_object)
{
	var_636_object = Obj(); var_637_bool = 0; var_638_int = 0; var_639_bool = 0; var_640_object = Obj(); var_641_bool = 0; var_642_int = 0; var_643_bool = 0; // 0x637 PushV
	var_0_bool = var_634_object; // 0x638 TMov
	var_644_bool = 0; var_645_object = Obj(); var_646_float = 0; // 0x639 PushV
	var_645_object = var_634_object; // 0x63a Mov
	var_646_float = 70.0; // 0x63b MovF
	func_2559(var_645_object, var_646_float); // 0x63c NEW_2
	var_647_bool = var_644_bool == 0; // 0x63e Not
	if(var_647_bool == 0) goto Label_1602; // 0x63f JumpB
	var_633_int = -2; // 0x640 MovI
	return 8; // 0x641 Return
	
Label_1602:
	CreateDialog(var_640_object); // 0x642 Func
	var_648_int = 0; // 0x644 PushV
	func_3039(var_648_int); // 0x645 NEW_2
	SetNPCName(var_648_int); // 0x647 ObjFunc
	var_649_int = 0; // 0x649 PushV
	func_3037(var_649_int); // 0x64a NEW_2
	SetNPCDescription(var_649_int); // 0x64c ObjFunc
	var_650_string = ""; // 0x64e PushV
	func_3041(var_650_string); // 0x64f NEW_2
	SetPhoto(var_650_string); // 0x651 ObjFunc
	var_651_string = ""; // 0x653 PushV
	func_3043(var_651_string); // 0x654 NEW_2
	SetPhoto2(var_651_string); // 0x656 ObjFunc
	var_652_int = 0; // 0x658 PushV
	func_3539(var_652_int); // 0x659 NEW_2
	SetPlayerName(var_652_int); // 0x65b ObjFunc
	var_642_int = -1; // 0x65d MovI
	IsOverrideActive(var_641_bool); // 0x65e Func
	var_653_bool = var_641_bool; // 0x660 Push
	if(var_653_bool == 0) goto Label_1636; // 0x661 JumpB
	var_633_int = -2; // 0x662 MovI
	return 8; // 0x663 Return
	
Label_1636:
	DoDialog(var_640_object); // 0x664 Func
	var_654_bool = 0; var_655_object = Obj(); // 0x666 PushV
	var_656_object = Obj(); // 0x667 PushV
	func_2924(var_656_object); // 0x668 NEW_2
	var_655_object = var_656_object; // 0x669 Mov
	func_2646(var_654_bool, var_655_object); // 0x66b NEW_2
	var_657_object = Obj(); var_658_object = Obj(); // 0x66d PushV
	var_657_object = var_634_object; // 0x66e Mov
	var_658_object = var_640_object; // 0x66f Mov
	TaskCall(8); // 0x670 TaskCall
	func_1672(var_659_object, var_660_object, var_661_string, var_662_bool, var_657_object, var_658_object); // 0x671 NEW_2
	TaskReturn(); // 0x672 TaskReturn
	IsDialogEnd(var_643_bool); // 0x674 ObjFunc
	
Label_1654:
	var_687_bool = var_643_bool == 0; // 0x676 Not
	if(var_687_bool == 0) goto Label_1661; // 0x677 JumpB
	sync(); // 0x678 Func
	IsDialogEnd(var_643_bool); // 0x67a ObjFunc
	goto Label_1654; // 0x67c Jump
	
Label_1661:
	var_688_object = Obj(); // 0x67d PushV
	var_688_object = var_634_object; // 0x67e Mov
	func_2628(); // 0x67f NEW_2
	StopDialog(var_640_object); // 0x681 Func
	GetReturnValue(var_642_int); // 0x683 ObjFunc
	var_633_int = var_642_int; // 0x685 Mov
	return 8; // 0x686 Return
}


func_3132()
{
	var_161_object = Obj(); var_162_string = ""; var_163_float = 0; // 0xc3d PushV
	var_164_object = Obj(); // 0xc3e PushV
	func_3443(var_164_object); // 0xc3f NEW_2
	var_161_object = var_164_object; // 0xc40 Mov
	var_162_string = "pt_b2q03_good_shop"; // 0xc42 MovS
	var_163_float = 2; // 0xc43 MovI
	func_3460(var_161_object, var_162_string, var_163_float); // 0xc44 NEW_2
	var_184_object = Obj(); // 0xc46 PushV
	func_3443(var_184_object); // 0xc47 NEW_2
	ShowMap(var_184_object); // 0xc49 ObjFunc
	return 0; // 0xc4b Return
}


func_2876(var_218_bool, var_219_string)
{
	var_220_bool = 0; var_221_bool = 0; // 0xb3c PushV
	var_222_bool = 0; // 0xb3d PushV
	func_3045(var_222_bool); // 0xb3e NEW_2
	if(var_222_bool == 0) goto Label_2889; // 0xb40 JumpB
	lshHasSpeech(var_221_bool, var_219_string); // 0xb41 Func
	var_223_bool = var_221_bool; // 0xb43 Push
	if(var_223_bool == 0) goto Label_2889; // 0xb44 JumpB
	lshPlaySpeech(var_219_string); // 0xb45 Func
	var_218_bool = 1; // 0xb47 MovB
	return 2; // 0xb48 Return
	
Label_2889:
	var_218_bool = 0; // 0xb49 MovB
	return 2; // 0xb4a Return
}


func_3389()
{
	var_151_object = Obj(); var_152_object = Obj(); // 0xd3d PushV
	var_153_int = 612; // 0xd3e PushI
	var_154_int = 2; // 0xd3f PushI
	var_155_int = 531559; // 0xd40 PushI
	CreateDiaryEntry(var_152_object, var_153_int, var_154_int, var_155_int); // 0xd41 Func
	var_156_bool = 0; var_157_object = Obj(); var_158_int = 0; // 0xd43 PushV
	var_157_object = var_152_object; // 0xd44 Mov
	var_158_int = 588; // 0xd45 MovI
	func_3415(var_156_bool, var_157_object, var_158_int); // 0xd46 NEW_2
	return 2; // 0xd48 Return
}


func_2628()
{
	var_322_bool = 0; var_323_bool = 0; // 0xa44 PushV
	var_324_bool = 1; // 0xa45 PushB
	CameraSwitchToNormal(var_324_bool); // 0xa46 Func
	var_325_bool = 0; // 0xa48 PushV
	func_3045(var_325_bool); // 0xa49 NEW_2
	if(var_325_bool == 0) goto Label_2637; // 0xa4b JumpB
	goto Label_2645; // 0xa4c Jump
	
Label_2645:
	return 2; // 0xa55 Return
	
Label_2637:
	var_326_string = "head"; // 0xa4d PushS
	HasAnimationTrack(var_323_bool, var_326_string); // 0xa4e Func
	var_327_bool = var_323_bool; // 0xa50 Push
	if(var_327_bool == 0) goto Label_2645; // 0xa51 JumpB
	var_328_string = "head"; // 0xa52 PushS
	UnlookAsync(var_328_string); // 0xa53 Func
}


func_582(var_2_object, var_382_string)
{
	var_383_bool = 0; // 0x247 PushV
	func_3045(var_383_bool); // 0x248 NEW_2
	var_384_bool = var_383_bool == 0; // 0x24a Not
	if(var_384_bool == 0) goto Label_589; // 0x24b JumpB
	return 0; // 0x24c Return
	
Label_589:
	var_385_bool = var_382_string == var_2_object; // 0x24d Eq
	if(var_385_bool == 0) goto Label_592; // 0x24e JumpB
	return 0; // 0x24f Return
	
Label_592:
	var_386_string = ""; var_387_bool = 0; // 0x250 PushV
	var_386_string = var_382_string; // 0x251 Mov
	var_388_string = ""; // 0x252 PushS
	var_389_bool = var_382_string == var_388_string; // 0x253 Eq
	if(var_389_bool == 0) goto Label_599; // 0x254 JumpB
	var_387_bool = 0; // 0x255 MovB
	goto Label_600; // 0x256 Jump
	
Label_600:
	func_2861(var_386_string, var_387_bool); // 0x258 NEW_2
	var_2_object = var_382_string; // 0x25a TMov
	return 0; // 0x25b Return
	
Label_599:
	var_387_bool = 1; // 0x257 MovB
}


func_3402(var_56_object)
{
	var_57_object = Obj(); var_58_object = Obj(); // 0xd4a PushV
	GetDiaryRoot(var_58_object); // 0xd4b Func
	var_59_bool = var_58_object == 0; // 0xd4d Not
	if(var_59_bool == 0) goto Label_3412; // 0xd4e JumpB
	var_60_string = "Can't retrieve diary root"; // 0xd4f PushS
	Trace(var_60_string); // 0xd50 Func
	var_56_object = 0; // 0xd52 MovB
	return 2; // 0xd53 Return
	
Label_3412:
	var_56_object = var_58_object; // 0xd54 Mov
	return 2; // 0xd55 Return
}


func_2891()
{
	var_35_bool = 0; // 0xb4b PushV
	func_3045(var_35_bool); // 0xb4c NEW_2
	if(var_35_bool == 0) goto Label_2897; // 0xb4e JumpB
	lshStopSpeech(); // 0xb4f Func
	
Label_2897:
	return 0; // 0xb51 Return
}


func_3148()
{
	var_195_string = "b2q03_1"; // 0xc4d PushS
	var_196_int = 2; // 0xc4e PushI
	SetVariable(var_195_string, var_196_int); // 0xc4f Func
	func_3376(); // 0xc52 NEW_2
	func_3363(); // 0xc55 NEW_2
	return 0; // 0xc57 Return
}


func_330(var_0_bool, var_335_int, var_336_object)
{
	var_338_object = Obj(); var_339_bool = 0; var_340_int = 0; var_341_bool = 0; var_342_object = Obj(); var_343_bool = 0; var_344_int = 0; var_345_bool = 0; // 0x14a PushV
	var_0_bool = var_336_object; // 0x14b TMov
	var_346_bool = 0; var_347_object = Obj(); var_348_float = 0; // 0x14c PushV
	var_347_object = var_336_object; // 0x14d Mov
	var_348_float = 70.0; // 0x14e MovF
	func_2559(var_347_object, var_348_float); // 0x14f NEW_2
	var_349_bool = var_346_bool == 0; // 0x151 Not
	if(var_349_bool == 0) goto Label_341; // 0x152 JumpB
	var_335_int = -2; // 0x153 MovI
	return 8; // 0x154 Return
	
Label_341:
	CreateDialog(var_342_object); // 0x155 Func
	var_350_int = 0; // 0x157 PushV
	func_3039(var_350_int); // 0x158 NEW_2
	SetNPCName(var_350_int); // 0x15a ObjFunc
	var_351_int = 0; // 0x15c PushV
	func_3037(var_351_int); // 0x15d NEW_2
	SetNPCDescription(var_351_int); // 0x15f ObjFunc
	var_352_string = ""; // 0x161 PushV
	func_3041(var_352_string); // 0x162 NEW_2
	SetPhoto(var_352_string); // 0x164 ObjFunc
	var_353_string = ""; // 0x166 PushV
	func_3043(var_353_string); // 0x167 NEW_2
	SetPhoto2(var_353_string); // 0x169 ObjFunc
	var_354_int = 0; // 0x16b PushV
	func_3539(var_354_int); // 0x16c NEW_2
	SetPlayerName(var_354_int); // 0x16e ObjFunc
	var_344_int = -1; // 0x170 MovI
	IsOverrideActive(var_343_bool); // 0x171 Func
	var_355_bool = var_343_bool; // 0x173 Push
	if(var_355_bool == 0) goto Label_375; // 0x174 JumpB
	var_335_int = -2; // 0x175 MovI
	return 8; // 0x176 Return
	
Label_375:
	DoDialog(var_342_object); // 0x177 Func
	var_356_bool = 0; var_357_object = Obj(); // 0x179 PushV
	var_358_object = Obj(); // 0x17a PushV
	func_2924(var_358_object); // 0x17b NEW_2
	var_357_object = var_358_object; // 0x17c Mov
	func_2646(var_356_bool, var_357_object); // 0x17e NEW_2
	var_359_object = Obj(); var_360_object = Obj(); // 0x180 PushV
	var_359_object = var_336_object; // 0x181 Mov
	var_360_object = var_342_object; // 0x182 Mov
	TaskCall(4); // 0x183 TaskCall
	func_411(var_361_object, var_362_object, var_363_string, var_364_bool, var_359_object, var_360_object); // 0x184 NEW_2
	TaskReturn(); // 0x185 TaskReturn
	IsDialogEnd(var_345_bool); // 0x187 ObjFunc
	
Label_393:
	var_482_bool = var_345_bool == 0; // 0x189 Not
	if(var_482_bool == 0) goto Label_400; // 0x18a JumpB
	sync(); // 0x18b Func
	IsDialogEnd(var_345_bool); // 0x18d ObjFunc
	goto Label_393; // 0x18f Jump
	
Label_400:
	var_483_object = Obj(); // 0x190 PushV
	var_483_object = var_336_object; // 0x191 Mov
	func_2628(); // 0x192 NEW_2
	StopDialog(var_342_object); // 0x194 Func
	GetReturnValue(var_344_int); // 0x196 ObjFunc
	var_335_int = var_344_int; // 0x198 Mov
	return 8; // 0x199 Return
}


func_2898(var_99_string, var_100_int, var_101_int)
{
	var_102_bool = 0; var_103_bool = 0; // 0xb52 PushV
	var_104_bool = 0; var_105_int = 0; var_106_int = 0; // 0xb53 PushV
	var_105_int = var_100_int; // 0xb54 Mov
	var_106_int = var_101_int; // 0xb55 Mov
	func_2940(var_104_bool, var_105_int, var_106_int); // 0xb56 NEW_2
	if(var_104_bool == 0) goto Label_2908; // 0xb58 JumpB
	var_107_int = 0; // 0xb59 PushI
	AddItem(var_103_bool, var_99_string, var_107_int); // 0xb5a Func
	
Label_2908:
	return 2; // 0xb5c Return
}


func_2646(var_184_bool, var_185_object)
{
	var_189_int = 0; var_190_int = 0; var_191_int = 0; var_192_int = 0; // 0xa56 PushV
	var_193_string = "voice_common"; // 0xa57 PushS
	GetVariable(var_193_string, var_191_int); // 0xa58 Func
	var_194_int = var_191_int; // 0xa5a Push
	if(var_194_int == 0) goto Label_2684; // 0xa5b JumpB
	var_195_bool = 0; var_196_object = Obj(); // 0xa5c PushV
	var_196_object = var_185_object; // 0xa5d Mov
	func_2704(var_196_object); // 0xa5e NEW_2
	var_225_bool = var_195_bool == 0; // 0xa60 Not
	if(var_225_bool == 0) goto Label_2666; // 0xa61 JumpB
	var_226_bool = 0; var_227_object = Obj(); // 0xa62 PushV
	var_227_object = var_185_object; // 0xa63 Mov
	func_2741(var_227_object); // 0xa64 NEW_2
	var_256_bool = var_226_bool == 0; // 0xa66 Not
	if(var_256_bool == 0) goto Label_2666; // 0xa67 JumpB
	var_184_bool = 0; // 0xa68 MovB
	return 4; // 0xa69 Return
	
Label_2666:
	var_257_int = 2; // 0xa6a PushI
	irand(var_192_int, var_257_int); // 0xa6b Func
	var_258_int = var_192_int; // 0xa6d Push
	if(var_258_int == 0) goto Label_2679; // 0xa6e JumpB
	var_259_string = "voice_common"; // 0xa6f PushS
	var_260_int = 1; // 0xa70 PushI
	var_261_int = var_191_int + var_260_int; // 0xa71 Add
	var_262_int = 3; // 0xa72 PushI
	var_263_int = var_261_int / var_262_int; // 0xa73 Mod
	SetVariable(var_259_string, var_263_int); // 0xa74 Func
	goto Label_2683; // 0xa76 Jump
	
Label_2683:
	goto Label_2702; // 0xa7b Jump
	
Label_2702:
	var_184_bool = 1; // 0xa8e MovB
	return 4; // 0xa8f Return
	
Label_2679:
	var_264_string = "voice_common"; // 0xa77 PushS
	var_265_int = 0; // 0xa78 PushI
	SetVariable(var_264_string, var_265_int); // 0xa79 Func
	
Label_2684:
	var_266_bool = 0; var_267_object = Obj(); // 0xa7c PushV
	var_267_object = var_185_object; // 0xa7d Mov
	func_2741(var_267_object); // 0xa7e NEW_2
	var_268_bool = var_266_bool == 0; // 0xa80 Not
	if(var_268_bool == 0) goto Label_2698; // 0xa81 JumpB
	var_269_bool = 0; var_270_object = Obj(); // 0xa82 PushV
	var_270_object = var_185_object; // 0xa83 Mov
	func_2704(var_270_object); // 0xa84 NEW_2
	var_271_bool = var_269_bool == 0; // 0xa86 Not
	if(var_271_bool == 0) goto Label_2698; // 0xa87 JumpB
	var_184_bool = 0; // 0xa88 MovB
	return 4; // 0xa89 Return
	
Label_2698:
	var_272_string = "voice_common"; // 0xa8a PushS
	var_273_int = 1; // 0xa8b PushI
	SetVariable(var_272_string, var_273_int); // 0xa8c Func
}


func_3415(var_47_bool, var_48_object, var_49_int)
{
	var_50_object = Obj(); var_51_object = Obj(); var_52_int = 0; var_53_object = Obj(); var_54_object = Obj(); var_55_int = 0; // 0xd57 PushV
	var_56_object = Obj(); // 0xd58 PushV
	func_3402(var_56_object); // 0xd59 NEW_2
	var_53_object = var_56_object; // 0xd5a Mov
	Find(var_49_int, var_54_object); // 0xd5c ObjFunc
	var_61_bool = var_54_object == 0; // 0xd5e Not
	if(var_61_bool == 0) goto Label_3430; // 0xd5f JumpB
	var_62_string = "Can't find diary parent with id: "; // 0xd60 PushS
	var_63_int = var_62_string + var_49_int; // 0xd61 Add
	Trace(var_63_int); // 0xd62 Func
	var_47_bool = 0; // 0xd64 MovB
	return 6; // 0xd65 Return
	
Label_3430:
	AddChild(var_48_object); // 0xd66 ObjFunc
	var_64_int = 7; // 0xd68 PushI
	SendWorldWndMessage(var_64_int); // 0xd69 Func
	GetCategory(var_55_int); // 0xd6b ObjFunc
	SetDiarySection(var_55_int); // 0xd6d Func
	var_47_bool = 0; // 0xd6f MovB
	return 6; // 0xd70 Return
}


func_3160()
{
	var_145_int = 0; var_146_string = ""; // 0xc59 PushV
	var_146_string = "b2q03_1"; // 0xc5a MovS
	func_2945(var_145_int, var_146_string); // 0xc5b NEW_2
	var_149_int = 0; // 0xc5d PushI
	var_150_bool = var_145_int != var_149_int; // 0xc5e Neq
	if(var_150_bool == 0) goto Label_3171; // 0xc5f JumpB
	func_3389(); // 0xc61 NEW_2
	
Label_3171:
	return 0; // 0xc63 Return
}


func_1883(var_0_bool, var_1_object, var_2_object, var_3_object, var_725_object, var_726_object)
{
	var_0_bool = var_726_object; // 0x75c TMov
	var_1_object = var_725_object; // 0x75d TMov
	var_3_object = 0; // 0x75e TMovB
	var_731_int = 1; // 0x75f PushI
	if(var_731_int == 0) goto Label_1916; // 0x760 JumpB
	var_732_string = ""; // 0x761 PushV
	var_732_string = "Neutral"; // 0x762 MovS
	func_1946(var_726_object, var_732_string); // 0x763 NEW_2
	var_740_int = 535231; // 0x765 PushI
	SetMessage(var_740_int); // 0x766 TObjFunc
	ClearReplies(); // 0x768 TObjFunc
	var_741_int = 535232; // 0x76a PushI
	var_742_int = 36953; // 0x76b PushI
	var_743_int = 36907; // 0x76c PushI
	AddReply(var_741_int, var_742_int, var_743_int); // 0x76d TObjFunc
	var_744_int = 535233; // 0x76f PushI
	var_745_int = -1; // 0x770 PushI
	var_746_int = 36908; // 0x771 PushI
	AddReply(var_744_int, var_745_int, var_746_int); // 0x772 TObjFunc
	var_747_int = 535280; // 0x774 PushI
	var_748_int = -1; // 0x775 PushI
	var_749_int = 36956; // 0x776 PushI
	AddReply(var_747_int, var_748_int, var_749_int); // 0x777 TObjFunc
	goto Label_1916; // 0x779 Jump
	
Label_1916:
	var_750_bool = 0; // 0x77c PushV
	func_3045(var_750_bool); // 0x77d NEW_2
	if(var_750_bool == 0) goto Label_1931; // 0x77f JumpB
	
Label_1920:
	lshWaitForAnimEnd(); // 0x780 Func
	var_751_object = var_3_object; // 0x782 PushT
	if(var_751_object == 0) goto Label_1925; // 0x783 JumpB
	goto Label_1930; // 0x784 Jump
	
Label_1930:
	goto Label_1945; // 0x78a Jump
	
Label_1945:
	return 0; // 0x799 Return
	
Label_1925:
	var_752_string = ""; // 0x785 PushV
	var_752_string = var_2_object; // 0x786 MovT
	func_2845(var_752_string); // 0x787 NEW_2
	goto Label_1920; // 0x789 Jump
	
Label_1931:
	var_753_string = "all"; // 0x78b PushS
	var_754_string = "idle"; // 0x78c PushS
	PlayAnimation(var_753_string, var_754_string); // 0x78d Func
	
Label_1935:
	WaitForAnimEnd(); // 0x78f Func
	var_755_object = var_3_object; // 0x791 PushT
	if(var_755_object == 0) goto Label_1940; // 0x792 JumpB
	goto Label_1945; // 0x793 Jump
	
Label_1940:
	var_756_string = "all"; // 0x794 PushS
	var_757_string = "idle"; // 0x795 PushS
	PlayAnimation(var_756_string, var_757_string); // 0x796 Func
	goto Label_1935; // 0x798 Jump
}


func_2909(var_69_string, var_70_int, var_71_int, var_72_int)
{
	var_73_int = 0; var_74_bool = 0; var_75_int = 0; var_76_bool = 0; // 0xb5d PushV
	var_77_bool = 0; var_78_int = 0; var_79_int = 0; // 0xb5e PushV
	var_78_int = var_70_int; // 0xb5f Mov
	var_79_int = var_71_int; // 0xb60 Mov
	func_2940(var_77_bool, var_78_int, var_79_int); // 0xb61 NEW_2
	if(var_77_bool == 0) goto Label_2923; // 0xb63 JumpB
	irand(var_75_int, var_72_int); // 0xb64 Func
	var_82_int = 0; // 0xb66 PushI
	var_83_int = 1; // 0xb67 PushI
	var_84_int = var_75_int + var_83_int; // 0xb68 Add
	AddItem(var_76_bool, var_69_string, var_82_int, var_84_int); // 0xb69 Func
	
Label_2923:
	return 4; // 0xb6b Return
}


func_2142(var_0_bool, var_1_object, var_2_object, var_3_object, var_786_object, var_787_object)
{
	var_0_bool = var_787_object; // 0x85f TMov
	var_1_object = var_786_object; // 0x860 TMov
	var_3_object = 0; // 0x861 TMovB
	var_792_int = 1; // 0x862 PushI
	if(var_792_int == 0) goto Label_2170; // 0x863 JumpB
	var_793_string = ""; // 0x864 PushV
	var_793_string = "Neutral"; // 0x865 MovS
	func_2200(var_787_object, var_793_string); // 0x866 NEW_2
	var_801_int = 540554; // 0x868 PushI
	SetMessage(var_801_int); // 0x869 TObjFunc
	ClearReplies(); // 0x86b TObjFunc
	var_802_int = 540555; // 0x86d PushI
	var_803_int = -1; // 0x86e PushI
	var_804_int = 42564; // 0x86f PushI
	AddReply(var_802_int, var_803_int, var_804_int); // 0x870 TObjFunc
	var_805_int = 540794; // 0x872 PushI
	var_806_int = -1; // 0x873 PushI
	var_807_int = 42843; // 0x874 PushI
	AddReply(var_805_int, var_806_int, var_807_int); // 0x875 TObjFunc
	goto Label_2170; // 0x877 Jump
	
Label_2170:
	var_808_bool = 0; // 0x87a PushV
	func_3045(var_808_bool); // 0x87b NEW_2
	if(var_808_bool == 0) goto Label_2185; // 0x87d JumpB
	
Label_2174:
	lshWaitForAnimEnd(); // 0x87e Func
	var_809_object = var_3_object; // 0x880 PushT
	if(var_809_object == 0) goto Label_2179; // 0x881 JumpB
	goto Label_2184; // 0x882 Jump
	
Label_2184:
	goto Label_2199; // 0x888 Jump
	
Label_2199:
	return 0; // 0x897 Return
	
Label_2179:
	var_810_string = ""; // 0x883 PushV
	var_810_string = var_2_object; // 0x884 MovT
	func_2845(var_810_string); // 0x885 NEW_2
	goto Label_2174; // 0x887 Jump
	
Label_2185:
	var_811_string = "all"; // 0x889 PushS
	var_812_string = "idle"; // 0x88a PushS
	PlayAnimation(var_811_string, var_812_string); // 0x88b Func
	
Label_2189:
	WaitForAnimEnd(); // 0x88d Func
	var_813_object = var_3_object; // 0x88f PushT
	if(var_813_object == 0) goto Label_2194; // 0x890 JumpB
	goto Label_2199; // 0x891 Jump
	
Label_2194:
	var_814_string = "all"; // 0x892 PushS
	var_815_string = "idle"; // 0x893 PushS
	PlayAnimation(var_814_string, var_815_string); // 0x894 Func
	goto Label_2189; // 0x896 Jump
}


func_3172()
{
	var_189_string = "oob2Andrei3"; // 0xc65 PushS
	var_190_int = 1; // 0xc66 PushI
	SetVariable(var_189_string, var_190_int); // 0xc67 Func
	return 0; // 0xc69 Return
}


func_3178()
{
	var_40_int = 1000; // 0xc6b PushI
	SetReturnValue(var_40_int); // 0xc6c ObjFunc
	return 0; // 0xc6e Return
}


func_1387(var_2_object, var_561_string)
{
	var_562_bool = 0; // 0x56c PushV
	func_3045(var_562_bool); // 0x56d NEW_2
	var_563_bool = var_562_bool == 0; // 0x56f Not
	if(var_563_bool == 0) goto Label_1394; // 0x570 JumpB
	return 0; // 0x571 Return
	
Label_1394:
	var_564_bool = var_561_string == var_2_object; // 0x572 Eq
	if(var_564_bool == 0) goto Label_1397; // 0x573 JumpB
	return 0; // 0x574 Return
	
Label_1397:
	var_565_string = ""; var_566_bool = 0; // 0x575 PushV
	var_565_string = var_561_string; // 0x576 Mov
	var_567_string = ""; // 0x577 PushS
	var_568_bool = var_561_string == var_567_string; // 0x578 Eq
	if(var_568_bool == 0) goto Label_1404; // 0x579 JumpB
	var_566_bool = 0; // 0x57a MovB
	goto Label_1405; // 0x57b Jump
	
Label_1405:
	func_2861(var_565_string, var_566_bool); // 0x57d NEW_2
	var_2_object = var_561_string; // 0x57f TMov
	return 0; // 0x580 Return
	
Label_1404:
	var_566_bool = 1; // 0x57c MovB
}


func_2924(var_186_object)
{
	var_187_object = Obj(); var_188_object = Obj(); // 0xb6c PushV
	self(var_188_object); // 0xb6d Func
	var_186_object = var_188_object; // 0xb6f Mov
	return 2; // 0xb70 Return
}


func_3183(var_366_bool)
{
	var_368_int = 0; var_369_string = ""; // 0xc70 PushV
	var_369_string = "oob2Andrei2"; // 0xc71 MovS
	func_2945(var_368_int, var_369_string); // 0xc72 NEW_2
	var_372_int = 0; // 0xc74 PushI
	var_373_bool = var_368_int == var_372_int; // 0xc75 Eq
	if(var_373_bool == 0) goto Label_3193; // 0xc76 JumpB
	var_366_bool = 1; // 0xc77 MovB
	return 0; // 0xc78 Return
	
Label_3193:
	var_366_bool = 0; // 0xc79 MovB
	return 0; // 0xc7a Return
}


func_2930(var_150_cvector, var_151_cvector)
{
	var_153_float = 0; var_154_float = 0; // 0xb72 PushV
	var_155_int = var_151_cvector | var_151_cvector; // 0xb73 Or
	var_154_float = sqrt(var_155_int); // 0xb74 Sqrt2
	var_156_float = 0.0; // 0xb75 PushF
	var_157_bool = var_154_float < var_156_float; // 0xb76 LT
	if(var_157_bool == 0) goto Label_2938; // 0xb77 JumpB
	var_150_cvector = CVector(0.0, 0.0, 0.0); // 0xb78 MovV
	return 2; // 0xb79 Return
	
Label_2938:
	var_150_cvector = var_151_cvector / var_151_cvector; // 0xb7a Div2
	return 2; // 0xb7b Return
}


func_3443(var_91_object)
{
	var_92_object = Obj(); var_93_object = Obj(); var_94_object = Obj(); var_95_object = Obj(); // 0xd73 PushV
	GetMainOutdoorScene(var_94_object); // 0xd74 Func
	var_96_bool = var_94_object == 0; // 0xd76 NullEq
	if(var_96_bool == 0) goto Label_3454; // 0xd77 JumpB
	var_97_string = "Can't find main outdoor scene"; // 0xd78 PushS
	Trace(var_97_string); // 0xd79 Func
	var_95_object = 0; // 0xd7b SetNull
	var_91_object = var_95_object; // 0xd7c Mov
	return 4; // 0xd7d Return
	
Label_3454:
	GetMap(var_95_object); // 0xd7e ObjFunc
	var_91_object = var_95_object; // 0xd80 Mov
	return 4; // 0xd81 Return
}


func_121(var_0_bool, var_1_object, var_2_object, var_3_object, var_274_object, var_275_object)
{
	var_0_bool = var_275_object; // 0x7a TMov
	var_1_object = var_274_object; // 0x7b TMov
	var_3_object = 0; // 0x7c TMovB
	var_280_int = 1; // 0x7d PushI
	if(var_280_int == 0) goto Label_144; // 0x7e JumpB
	var_281_string = ""; // 0x7f PushV
	var_281_string = "Neutral"; // 0x80 MovS
	func_174(var_275_object, var_281_string); // 0x81 NEW_2
	var_298_int = 517994; // 0x83 PushI
	SetMessage(var_298_int); // 0x84 TObjFunc
	ClearReplies(); // 0x86 TObjFunc
	var_299_int = 517995; // 0x88 PushI
	var_300_int = 23147; // 0x89 PushI
	var_301_int = 19128; // 0x8a PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0x8b TObjFunc
	goto Label_144; // 0x8d Jump
	
Label_144:
	var_302_bool = 0; // 0x90 PushV
	func_3045(var_302_bool); // 0x91 NEW_2
	if(var_302_bool == 0) goto Label_159; // 0x93 JumpB
	
Label_148:
	lshWaitForAnimEnd(); // 0x94 Func
	var_303_object = var_3_object; // 0x96 PushT
	if(var_303_object == 0) goto Label_153; // 0x97 JumpB
	goto Label_158; // 0x98 Jump
	
Label_158:
	goto Label_173; // 0x9e Jump
	
Label_173:
	return 0; // 0xad Return
	
Label_153:
	var_304_string = ""; // 0x99 PushV
	var_304_string = var_2_object; // 0x9a MovT
	func_2845(var_304_string); // 0x9b NEW_2
	goto Label_148; // 0x9d Jump
	
Label_159:
	var_315_string = "all"; // 0x9f PushS
	var_316_string = "idle"; // 0xa0 PushS
	PlayAnimation(var_315_string, var_316_string); // 0xa1 Func
	
Label_163:
	WaitForAnimEnd(); // 0xa3 Func
	var_317_object = var_3_object; // 0xa5 PushT
	if(var_317_object == 0) goto Label_168; // 0xa6 JumpB
	goto Label_173; // 0xa7 Jump
	
Label_168:
	var_318_string = "all"; // 0xa8 PushS
	var_319_string = "idle"; // 0xa9 PushS
	PlayAnimation(var_318_string, var_319_string); // 0xaa Func
	goto Label_163; // 0xac Jump
}


func_3195(var_427_bool)
{
	var_429_int = 0; var_430_string = ""; // 0xc7c PushV
	var_430_string = "b2q03"; // 0xc7d MovS
	func_2945(var_429_int, var_430_string); // 0xc7e NEW_2
	var_431_int = 1; // 0xc80 PushI
	var_432_bool = var_429_int == var_431_int; // 0xc81 Eq
	if(var_432_bool == 0) goto Label_3205; // 0xc82 JumpB
	var_427_bool = 1; // 0xc83 MovB
	return 0; // 0xc84 Return
	
Label_3205:
	var_427_bool = 0; // 0xc85 MovB
	return 0; // 0xc86 Return
}


func_2940(var_77_bool, var_78_int, var_79_int)
{
	var_80_int = 0; var_81_int = 0; // 0xb7c PushV
	irand(var_81_int, var_79_int); // 0xb7d Func
	var_77_bool = var_81_int < var_78_int; // 0xb7f LT2
	return 2; // 0xb80 Return
}


func_2945(var_368_int, var_369_string)
{
	var_370_int = 0; var_371_int = 0; // 0xb81 PushV
	GetVariable(var_369_string, var_371_int); // 0xb82 Func
	var_368_int = var_371_int; // 0xb84 Mov
	return 2; // 0xb85 Return
}


func_3460(var_161_object, var_162_string, var_163_float)
{
	var_165_cvector = CVector(0,0,0); var_166_cvector = CVector(0,0,0); var_167_object = Obj(); var_168_bool = 0; var_169_cvector = CVector(0,0,0); var_170_cvector = CVector(0,0,0); var_171_object = Obj(); var_172_bool = 0; // 0xd84 PushV
	GetMainOutdoorScene(var_171_object); // 0xd85 Func
	var_173_bool = var_171_object == 0; // 0xd87 NullEq
	if(var_173_bool == 0) goto Label_3469; // 0xd88 JumpB
	var_174_string = "Can't find main outdoor scene"; // 0xd89 PushS
	Trace(var_174_string); // 0xd8a Func
	return 8; // 0xd8c Return
	
Label_3469:
	GetLocator(var_162_string, var_172_bool, var_169_cvector, var_170_cvector); // 0xd8d ObjFunc
	var_175_bool = var_172_bool == 0; // 0xd8f Not
	if(var_175_bool == 0) goto Label_3479; // 0xd90 JumpB
	var_176_string = "Warning: outdoor scene locator "; // 0xd91 PushS
	var_177_int = var_176_string + var_162_string; // 0xd92 Add
	var_178_string = " doesnt exist"; // 0xd93 PushS
	var_179_int = var_177_int + var_178_string; // 0xd94 Add
	Trace(var_179_int); // 0xd95 Func
	
Label_3479:
	GetMap(var_161_object); // 0xd97 ObjFunc
	var_180_bool = var_161_object == 0; // 0xd99 NullEq
	if(var_180_bool == 0) goto Label_3487; // 0xd9a JumpB
	var_181_string = "Can't find map"; // 0xd9b PushS
	Trace(var_181_string); // 0xd9c Func
	return 8; // 0xd9e Return
	
Label_3487:
	var_182_float = GetByIndex(var_169_cvector, 0); // 0xd9f PushE
	var_183_float = GetByIndex(var_169_cvector, 2); // 0xda0 PushE
	SetMapParams(var_182_float, var_183_float, var_163_float); // 0xda1 ObjFunc
	return 8; // 0xda3 Return
}


func_2950(var_134_int, var_135_int)
{
	var_136_object = Obj(); var_137_object = Obj(); // 0xb86 PushV
	CreateIntVector(var_137_object); // 0xb87 Func
	add(var_134_int); // 0xb89 ObjFunc
	add(var_135_int); // 0xb8b ObjFunc
	var_138_int = 3; // 0xb8d PushI
	SendWorldWndMessage(var_138_int, var_137_object); // 0xb8e Func
	return 2; // 0xb90 Return
}


func_3207(var_407_bool)
{
	var_409_int = 0; var_410_string = ""; // 0xc88 PushV
	var_410_string = "b2q03"; // 0xc89 MovS
	func_2945(var_409_int, var_410_string); // 0xc8a NEW_2
	var_411_int = 0; // 0xc8c PushI
	var_412_bool = var_409_int == var_411_int; // 0xc8d Eq
	if(var_412_bool == 0) goto Label_3217; // 0xc8e JumpB
	var_407_bool = 1; // 0xc8f MovB
	return 0; // 0xc90 Return
	
Label_3217:
	var_407_bool = 0; // 0xc91 MovB
	return 0; // 0xc92 Return
}


func_1672(var_0_bool, var_1_object, var_2_object, var_3_object, var_657_object, var_658_object)
{
	var_0_bool = var_658_object; // 0x689 TMov
	var_1_object = var_657_object; // 0x68a TMov
	var_3_object = 0; // 0x68b TMovB
	var_663_int = 1; // 0x68c PushI
	if(var_663_int == 0) goto Label_1700; // 0x68d JumpB
	var_664_string = ""; // 0x68e PushV
	var_664_string = "Neutral"; // 0x68f MovS
	func_1730(var_658_object, var_664_string); // 0x690 NEW_2
	var_672_int = 531971; // 0x692 PushI
	SetMessage(var_672_int); // 0x693 TObjFunc
	ClearReplies(); // 0x695 TObjFunc
	var_673_int = 531972; // 0x697 PushI
	var_674_int = -1; // 0x698 PushI
	var_675_int = 33378; // 0x699 PushI
	AddReply(var_673_int, var_674_int, var_675_int); // 0x69a TObjFunc
	var_676_int = 531973; // 0x69c PushI
	var_677_int = -1; // 0x69d PushI
	var_678_int = 33379; // 0x69e PushI
	AddReply(var_676_int, var_677_int, var_678_int); // 0x69f TObjFunc
	goto Label_1700; // 0x6a1 Jump
	
Label_1700:
	var_679_bool = 0; // 0x6a4 PushV
	func_3045(var_679_bool); // 0x6a5 NEW_2
	if(var_679_bool == 0) goto Label_1715; // 0x6a7 JumpB
	
Label_1704:
	lshWaitForAnimEnd(); // 0x6a8 Func
	var_680_object = var_3_object; // 0x6aa PushT
	if(var_680_object == 0) goto Label_1709; // 0x6ab JumpB
	goto Label_1714; // 0x6ac Jump
	
Label_1714:
	goto Label_1729; // 0x6b2 Jump
	
Label_1729:
	return 0; // 0x6c1 Return
	
Label_1709:
	var_681_string = ""; // 0x6ad PushV
	var_681_string = var_2_object; // 0x6ae MovT
	func_2845(var_681_string); // 0x6af NEW_2
	goto Label_1704; // 0x6b1 Jump
	
Label_1715:
	var_682_string = "all"; // 0x6b3 PushS
	var_683_string = "idle"; // 0x6b4 PushS
	PlayAnimation(var_682_string, var_683_string); // 0x6b5 Func
	
Label_1719:
	WaitForAnimEnd(); // 0x6b7 Func
	var_684_object = var_3_object; // 0x6b9 PushT
	if(var_684_object == 0) goto Label_1724; // 0x6ba JumpB
	goto Label_1729; // 0x6bb Jump
	
Label_1724:
	var_685_string = "all"; // 0x6bc PushS
	var_686_string = "idle"; // 0x6bd PushS
	PlayAnimation(var_685_string, var_686_string); // 0x6be Func
	goto Label_1719; // 0x6c0 Jump
}


func_2444()
{
	var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_int = 0; var_47_bool = 0; // 0x98c PushV
	WaitForAnimEnd(); // 0x98d Func
	var_48_bool = 0; // 0x98f PushV
	func_2554(var_48_bool); // 0x990 NEW_2
	var_49_bool = var_48_bool == 0; // 0x992 Not
	if(var_49_bool == 0) goto Label_2453; // 0x993 JumpB
	return 12; // 0x994 Return
	
Label_2453:
	var_50_int = 0; // 0x995 PushV
	func_3020(var_50_int); // 0x996 NEW_2
	var_42_int = var_50_int; // 0x997 Mov
	var_43_int = 0; // 0x999 MovI
	
Label_2458:
	var_63_bool = 0; // 0x99a PushV
	var_63_bool = 0; // 0x99b MovB
	var_64_int = 5; // 0x99c PushI
	var_65_bool = var_43_int < var_64_int; // 0x99d LT
	if(var_65_bool == 0) goto Label_2468; // 0x99e JumpB
	var_66_bool = 0; // 0x99f PushV
	func_2554(var_66_bool); // 0x9a0 NEW_2
	if(var_66_bool == 0) goto Label_2468; // 0x9a2 JumpB
	var_63_bool = 1; // 0x9a3 MovB
	
Label_2468:
	if(var_63_bool == 0) goto Label_2510; // 0x9a4 JumpB
	var_67_bool = var_42_int == 0; // 0x9a5 Not
	if(var_67_bool == 0) goto Label_2478; // 0x9a6 JumpB
	var_68_int = 3; // 0x9a7 PushI
	Sleep(var_68_int, var_44_bool); // 0x9a8 Func
	var_69_bool = var_44_bool == 0; // 0x9aa Not
	if(var_69_bool == 0) goto Label_2477; // 0x9ab JumpB
	goto Label_2510; // 0x9ac Jump
	
Label_2510:
	ResetAAS(); // 0x9ce Func
	return 12; // 0x9d0 Return
	
Label_2477:
	goto Label_2499; // 0x9ad Jump
	
Label_2499:
	var_70_bool = 0; // 0x9c3 PushV
	func_2513(var_70_bool); // 0x9c4 NEW_2
	var_71_bool = var_70_bool == 0; // 0x9c6 Not
	if(var_71_bool == 0) goto Label_2505; // 0x9c7 JumpB
	goto Label_2510; // 0x9c8 Jump
	
Label_2505:
	ResetAAS(); // 0x9c9 Func
	var_72_int = 1; // 0x9cb PushI
	var_43_int = var_43_int + var_72_int; // 0x9cc Add2
	goto Label_2458; // 0x9cd Jump
	
Label_2478:
	irand(var_45_int, var_42_int); // 0x9ae Func
	var_73_int = 5; // 0x9b0 PushI
	irand(var_46_int, var_73_int); // 0x9b1 Func
	var_74_int = 0; // 0x9b3 PushI
	var_75_bool = var_46_int != var_74_int; // 0x9b4 Neq
	if(var_75_bool == 0) goto Label_2487; // 0x9b5 JumpB
	var_45_int = 0; // 0x9b6 MovI
	
Label_2487:
	var_76_string = "all"; // 0x9b7 PushS
	var_77_string = ""; var_78_int = 0; // 0x9b8 PushV
	var_78_int = var_45_int; // 0x9b9 Mov
	func_3013(var_77_string, var_78_int); // 0x9ba NEW_2
	PlayAnimation(var_76_string, var_77_string); // 0x9bc Func
	WaitForAnimEnd(var_47_bool); // 0x9be Func
	var_79_bool = var_47_bool == 0; // 0x9c0 Not
	if(var_79_bool == 0) goto Label_2499; // 0x9c1 JumpB
	goto Label_2510; // 0x9c2 Jump
}


func_2704(var_195_bool)
{
	var_197_string = ""; var_198_int = 0; var_199_bool = 0; var_200_int = 0; var_201_string = ""; var_202_string = ""; var_203_int = 0; var_204_bool = 0; var_205_int = 0; var_206_string = ""; // 0xa90 PushV
	var_202_string = "c"; // 0xa91 MovS
	var_203_int = 0; // 0xa92 MovI
	
Label_2707:
	var_207_int = 1; // 0xa93 PushI
	if(var_207_int == 0) goto Label_2720; // 0xa94 JumpB
	var_208_int = 1; // 0xa95 PushI
	var_209_int = var_203_int + var_208_int; // 0xa96 Add
	var_210_int = var_202_string + var_209_int; // 0xa97 Add
	HasProperty(var_210_int, var_204_bool); // 0xa98 ObjFunc
	var_211_bool = var_204_bool == 0; // 0xa9a Not
	if(var_211_bool == 0) goto Label_2717; // 0xa9b JumpB
	goto Label_2720; // 0xa9c Jump
	
Label_2720:
	var_212_bool = var_203_int == 0; // 0xaa0 Not
	if(var_212_bool == 0) goto Label_2724; // 0xaa1 JumpB
	var_195_bool = 0; // 0xaa2 MovB
	return 10; // 0xaa3 Return
	
Label_2724:
	var_205_int = 0; // 0xaa4 MovI
	var_213_int = 1; // 0xaa5 PushI
	var_214_bool = var_203_int > var_213_int; // 0xaa6 GT
	if(var_214_bool == 0) goto Label_2730; // 0xaa7 JumpB
	irand(var_205_int, var_203_int); // 0xaa8 Func
	
Label_2730:
	var_215_int = 1; // 0xaaa PushI
	var_216_int = var_205_int + var_215_int; // 0xaab Add
	var_217_int = var_202_string + var_216_int; // 0xaac Add
	GetProperty(var_217_int, var_206_string); // 0xaad ObjFunc
	var_218_bool = 0; var_219_string = ""; // 0xaaf PushV
	var_219_string = var_206_string; // 0xab0 Mov
	func_2876(var_218_bool, var_219_string); // 0xab1 NEW_2
	var_195_bool = var_218_bool; // 0xab2 Mov
	return 10; // 0xab4 Return
	
Label_2717:
	var_224_int = 1; // 0xa9d PushI
	var_203_int = var_203_int + var_224_int; // 0xa9e Add2
	goto Label_2707; // 0xa9f Jump
}


func_2962(var_121_object, var_122_int)
{
	var_123_int = 0; var_124_int = 0; // 0xb92 PushV
	var_125_object = Obj(); var_126_string = ""; var_127_int = 0; // 0xb93 PushV
	var_125_object = var_121_object; // 0xb94 Mov
	var_126_string = "money"; // 0xb95 MovS
	var_127_int = var_122_int; // 0xb96 Mov
	func_2528(var_126_string, var_127_int); // 0xb97 NEW_2
	var_131_int = 0; // 0xb99 PushI
	var_132_bool = var_122_int > var_131_int; // 0xb9a GT
	if(var_132_bool == 0) goto Label_2980; // 0xb9b JumpB
	var_133_string = "Money"; // 0xb9c PushS
	GetInvItemByName(var_124_int, var_133_string); // 0xb9d Func
	var_134_int = 0; var_135_int = 0; // 0xb9f PushV
	var_134_int = var_124_int; // 0xba0 Mov
	var_135_int = var_122_int; // 0xba1 Mov
	func_2950(var_134_int, var_135_int); // 0xba2 NEW_2
	
Label_2980:
	return 2; // 0xba4 Return
}


func_3219(var_418_bool, var_419_object)
{
	var_420_bool = 0; var_421_object = Obj(); // 0xc94 PushV
	var_421_object = var_419_object; // 0xc95 Mov
	func_3313(var_421_object); // 0xc96 NEW_2
	if(var_420_bool == 0) goto Label_3227; // 0xc98 JumpB
	var_418_bool = 1; // 0xc99 MovB
	return 0; // 0xc9a Return
	
Label_3227:
	var_418_bool = 0; // 0xc9b MovB
	return 0; // 0xc9c Return
}


func_2200(var_2_object, var_793_string)
{
	var_794_bool = 0; // 0x899 PushV
	func_3045(var_794_bool); // 0x89a NEW_2
	var_795_bool = var_794_bool == 0; // 0x89c Not
	if(var_795_bool == 0) goto Label_2207; // 0x89d JumpB
	return 0; // 0x89e Return
	
Label_2207:
	var_796_bool = var_793_string == var_2_object; // 0x89f Eq
	if(var_796_bool == 0) goto Label_2210; // 0x8a0 JumpB
	return 0; // 0x8a1 Return
	
Label_2210:
	var_797_string = ""; var_798_bool = 0; // 0x8a2 PushV
	var_797_string = var_793_string; // 0x8a3 Mov
	var_799_string = ""; // 0x8a4 PushS
	var_800_bool = var_793_string == var_799_string; // 0x8a5 Eq
	if(var_800_bool == 0) goto Label_2217; // 0x8a6 JumpB
	var_798_bool = 0; // 0x8a7 MovB
	goto Label_2218; // 0x8a8 Jump
	
Label_2218:
	func_2861(var_797_string, var_798_bool); // 0x8aa NEW_2
	var_2_object = var_793_string; // 0x8ac TMov
	return 0; // 0x8ad Return
	
Label_2217:
	var_798_bool = 1; // 0x8a9 MovB
}


func_1946(var_2_object, var_732_string)
{
	var_733_bool = 0; // 0x79b PushV
	func_3045(var_733_bool); // 0x79c NEW_2
	var_734_bool = var_733_bool == 0; // 0x79e Not
	if(var_734_bool == 0) goto Label_1953; // 0x79f JumpB
	return 0; // 0x7a0 Return
	
Label_1953:
	var_735_bool = var_732_string == var_2_object; // 0x7a1 Eq
	if(var_735_bool == 0) goto Label_1956; // 0x7a2 JumpB
	return 0; // 0x7a3 Return
	
Label_1956:
	var_736_string = ""; var_737_bool = 0; // 0x7a4 PushV
	var_736_string = var_732_string; // 0x7a5 Mov
	var_738_string = ""; // 0x7a6 PushS
	var_739_bool = var_732_string == var_738_string; // 0x7a7 Eq
	if(var_739_bool == 0) goto Label_1963; // 0x7a8 JumpB
	var_737_bool = 0; // 0x7a9 MovB
	goto Label_1964; // 0x7aa Jump
	
Label_1964:
	func_2861(var_736_string, var_737_bool); // 0x7ac NEW_2
	var_2_object = var_732_string; // 0x7ae TMov
	return 0; // 0x7af Return
	
Label_1963:
	var_737_bool = 1; // 0x7ab MovB
}


func_411(var_0_bool, var_1_object, var_2_object, var_3_object, var_359_object, var_360_object)
{
	var_0_bool = var_360_object; // 0x19c TMov
	var_1_object = var_359_object; // 0x19d TMov
	var_3_object = 0; // 0x19e TMovB
	var_365_int = 1; // 0x19f PushI
	if(var_365_int == 0) goto Label_552; // 0x1a0 JumpB
	var_366_bool = 0; var_367_object = Obj(); // 0x1a1 PushV
	var_367_object = var_1_object; // 0x1a2 MovT
	func_3183(var_367_object); // 0x1a3 NEW_2
	if(var_366_bool == 0) goto Label_452; // 0x1a5 JumpB
	var_374_object = Obj(); var_375_object = Obj(); // 0x1a6 PushV
	var_374_object = var_1_object; // 0x1a7 MovT
	var_375_object = var_0_bool; // 0x1a8 MovT
	func_3075(); // 0x1a9 NEW_2
	var_378_object = Obj(); var_379_object = Obj(); // 0x1ab PushV
	var_378_object = var_1_object; // 0x1ac MovT
	var_379_object = var_0_bool; // 0x1ad MovT
	func_3126(); // 0x1ae NEW_2
	var_382_string = ""; // 0x1b0 PushV
	var_382_string = "Neutral"; // 0x1b1 MovS
	func_582(var_360_object, var_382_string); // 0x1b2 NEW_2
	var_390_int = 531038; // 0x1b4 PushI
	SetMessage(var_390_int); // 0x1b5 TObjFunc
	ClearReplies(); // 0x1b7 TObjFunc
	var_391_int = 531227; // 0x1b9 PushI
	var_392_int = 32541; // 0x1ba PushI
	var_393_int = 32540; // 0x1bb PushI
	AddReply(var_391_int, var_392_int, var_393_int); // 0x1bc TObjFunc
	var_394_int = 531231; // 0x1be PushI
	var_395_int = 32545; // 0x1bf PushI
	var_396_int = 32544; // 0x1c0 PushI
	AddReply(var_394_int, var_395_int, var_396_int); // 0x1c1 TObjFunc
	goto Label_552; // 0x1c3 Jump
	
Label_552:
	var_397_bool = 0; // 0x228 PushV
	func_3045(var_397_bool); // 0x229 NEW_2
	if(var_397_bool == 0) goto Label_567; // 0x22b JumpB
	
Label_556:
	lshWaitForAnimEnd(); // 0x22c Func
	var_398_object = var_3_object; // 0x22e PushT
	if(var_398_object == 0) goto Label_561; // 0x22f JumpB
	goto Label_566; // 0x230 Jump
	
Label_566:
	goto Label_581; // 0x236 Jump
	
Label_581:
	return 0; // 0x245 Return
	
Label_561:
	var_399_string = ""; // 0x231 PushV
	var_399_string = var_2_object; // 0x232 MovT
	func_2845(var_399_string); // 0x233 NEW_2
	goto Label_556; // 0x235 Jump
	
Label_567:
	var_400_string = "all"; // 0x237 PushS
	var_401_string = "idle"; // 0x238 PushS
	PlayAnimation(var_400_string, var_401_string); // 0x239 Func
	
Label_571:
	WaitForAnimEnd(); // 0x23b Func
	var_402_object = var_3_object; // 0x23d PushT
	if(var_402_object == 0) goto Label_576; // 0x23e JumpB
	goto Label_581; // 0x23f Jump
	
Label_576:
	var_403_string = "all"; // 0x240 PushS
	var_404_string = "idle"; // 0x241 PushS
	PlayAnimation(var_403_string, var_404_string); // 0x242 Func
	goto Label_571; // 0x244 Jump
	
Label_452:
	var_405_string = ""; // 0x1c4 PushV
	var_405_string = "Smile"; // 0x1c5 MovS
	func_582(var_360_object, var_405_string); // 0x1c6 NEW_2
	var_406_int = 518214; // 0x1c8 PushI
	SetMessage(var_406_int); // 0x1c9 TObjFunc
	ClearReplies(); // 0x1cb TObjFunc
	var_407_bool = 0; var_408_object = Obj(); // 0x1cd PushV
	var_408_object = var_1_object; // 0x1ce MovT
	func_3207(var_408_object); // 0x1cf NEW_2
	if(var_407_bool == 0) goto Label_471; // 0x1d1 JumpB
	var_413_int = 531041; // 0x1d2 PushI
	var_414_int = 32373; // 0x1d3 PushI
	var_415_int = 32372; // 0x1d4 PushI
	AddReply(var_413_int, var_414_int, var_415_int); // 0x1d5 TObjFunc
	
Label_471:
	var_416_bool = 0; // 0x1d7 PushV
	var_416_bool = 0; // 0x1d8 MovB
	var_417_bool = 0; // 0x1d9 PushV
	var_417_bool = 0; // 0x1da MovB
	var_418_bool = 0; var_419_object = Obj(); // 0x1db PushV
	var_419_object = var_1_object; // 0x1dc MovT
	func_3219(var_418_bool, var_419_object); // 0x1dd NEW_2
	if(var_418_bool == 0) goto Label_486; // 0x1df JumpB
	var_427_bool = 0; var_428_object = Obj(); // 0x1e0 PushV
	var_428_object = var_1_object; // 0x1e1 MovT
	func_3195(var_428_object); // 0x1e2 NEW_2
	if(var_427_bool == 0) goto Label_486; // 0x1e4 JumpB
	var_417_bool = 1; // 0x1e5 MovB
	
Label_486:
	if(var_417_bool == 0) goto Label_494; // 0x1e6 JumpB
	var_433_bool = 0; var_434_object = Obj(); // 0x1e7 PushV
	var_434_object = var_1_object; // 0x1e8 MovT
	func_3253(var_434_object); // 0x1e9 NEW_2
	var_439_bool = var_433_bool == 0; // 0x1eb Not
	if(var_439_bool == 0) goto Label_494; // 0x1ec JumpB
	var_416_bool = 1; // 0x1ed MovB
	
Label_494:
	if(var_416_bool == 0) goto Label_500; // 0x1ee JumpB
	var_440_int = 531048; // 0x1ef PushI
	var_441_int = 32378; // 0x1f0 PushI
	var_442_int = 32377; // 0x1f1 PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0x1f2 TObjFunc
	
Label_500:
	var_443_bool = 0; // 0x1f4 PushV
	var_443_bool = 0; // 0x1f5 MovB
	var_444_bool = 0; // 0x1f6 PushV
	var_444_bool = 0; // 0x1f7 MovB
	var_445_bool = 0; var_446_object = Obj(); // 0x1f8 PushV
	var_446_object = var_1_object; // 0x1f9 MovT
	func_3241(var_446_object); // 0x1fa NEW_2
	if(var_445_bool == 0) goto Label_516; // 0x1fc JumpB
	var_451_bool = 0; var_452_object = Obj(); // 0x1fd PushV
	var_452_object = var_1_object; // 0x1fe MovT
	func_3229(var_452_object); // 0x1ff NEW_2
	var_457_bool = var_451_bool == 0; // 0x201 Not
	if(var_457_bool == 0) goto Label_516; // 0x202 JumpB
	var_444_bool = 1; // 0x203 MovB
	
Label_516:
	if(var_444_bool == 0) goto Label_523; // 0x204 JumpB
	var_458_bool = 0; var_459_object = Obj(); // 0x205 PushV
	var_459_object = var_1_object; // 0x206 MovT
	func_3265(var_459_object); // 0x207 NEW_2
	if(var_458_bool == 0) goto Label_523; // 0x209 JumpB
	var_443_bool = 1; // 0x20a MovB
	
Label_523:
	if(var_443_bool == 0) goto Label_529; // 0x20b JumpB
	var_464_int = 531081; // 0x20c PushI
	var_465_int = 32402; // 0x20d PushI
	var_466_int = 32401; // 0x20e PushI
	AddReply(var_464_int, var_465_int, var_466_int); // 0x20f TObjFunc
	
Label_529:
	var_467_bool = 0; var_468_object = Obj(); // 0x211 PushV
	var_468_object = var_1_object; // 0x212 MovT
	func_3301(var_468_object); // 0x213 NEW_2
	if(var_467_bool == 0) goto Label_539; // 0x215 JumpB
	var_473_int = 519410; // 0x216 PushI
	var_474_int = 20576; // 0x217 PushI
	var_475_int = 20575; // 0x218 PushI
	AddReply(var_473_int, var_474_int, var_475_int); // 0x219 TObjFunc
	
Label_539:
	var_476_int = 518215; // 0x21b PushI
	var_477_int = 20584; // 0x21c PushI
	var_478_int = 19328; // 0x21d PushI
	AddReply(var_476_int, var_477_int, var_478_int); // 0x21e TObjFunc
	var_479_int = 518216; // 0x220 PushI
	var_480_int = -1; // 0x221 PushI
	var_481_int = 19329; // 0x222 PushI
	AddReply(var_479_int, var_480_int, var_481_int); // 0x223 TObjFunc
	goto Label_552; // 0x225 Jump
}


func_3229(var_451_bool)
{
	var_453_int = 0; var_454_string = ""; // 0xc9e PushV
	var_454_string = "b2q03"; // 0xc9f MovS
	func_2945(var_453_int, var_454_string); // 0xca0 NEW_2
	var_455_int = 1000; // 0xca2 PushI
	var_456_bool = var_453_int == var_455_int; // 0xca3 Eq
	if(var_456_bool == 0) goto Label_3239; // 0xca4 JumpB
	var_451_bool = 1; // 0xca5 MovB
	return 0; // 0xca6 Return
	
Label_3239:
	var_451_bool = 0; // 0xca7 MovB
	return 0; // 0xca8 Return
}


func_2981(var_73_bool, var_74_string, var_75_string)
{
	var_76_object = Obj(); var_77_object = Obj(); // 0xba5 PushV
	FindActor(var_77_object, var_74_string); // 0xba6 Func
	var_78_bool = var_77_object == 0; // 0xba8 NullEq
	if(var_78_bool == 0) goto Label_2988; // 0xba9 JumpB
	var_73_bool = 0; // 0xbaa MovB
	return 2; // 0xbab Return
	
Label_2988:
	Trigger(var_77_object, var_75_string); // 0xbac Func
	var_73_bool = 1; // 0xbae MovB
	return 2; // 0xbaf Return
}


func_3493()
{
	var_65_int = 0; var_66_int = 0; // 0xda5 PushV
	var_67_int = 0; // 0xda6 PushI
	ClearSubContainer(var_67_int); // 0xda7 Func
	var_68_int = 0; // 0xda9 PushV
	func_2998(var_68_int); // 0xdaa NEW_2
	var_66_int = var_68_int; // 0xdab Mov
	var_69_string = ""; var_70_int = 0; var_71_int = 0; var_72_int = 0; // 0xdad PushV
	var_69_string = "samopal_ammo"; // 0xdae MovS
	var_70_int = 1; // 0xdaf MovI
	var_71_int = 1; // 0xdb0 MovI
	var_72_int = 6; // 0xdb1 MovI
	func_2909(var_69_string, var_70_int, var_71_int, var_72_int); // 0xdb2 NEW_2
	var_85_string = ""; var_86_int = 0; var_87_int = 0; var_88_int = 0; // 0xdb4 PushV
	var_85_string = "rifle_ammo"; // 0xdb5 MovS
	var_86_int = 1; // 0xdb6 MovI
	var_87_int = 1; // 0xdb7 MovI
	var_88_int = 8; // 0xdb8 MovI
	func_2909(var_85_string, var_86_int, var_87_int, var_88_int); // 0xdb9 NEW_2
	var_89_string = ""; var_90_int = 0; var_91_int = 0; var_92_int = 0; // 0xdbb PushV
	var_89_string = "revolver_ammo"; // 0xdbc MovS
	var_90_int = 1; // 0xdbd MovI
	var_91_int = 1; // 0xdbe MovI
	var_92_int = 8; // 0xdbf MovI
	func_2909(var_89_string, var_90_int, var_91_int, var_92_int); // 0xdc0 NEW_2
	var_93_string = ""; var_94_int = 0; var_95_int = 0; var_96_int = 0; // 0xdc2 PushV
	var_93_string = "tvirin"; // 0xdc3 MovS
	var_94_int = 1; // 0xdc4 MovI
	var_95_int = 1; // 0xdc5 MovI
	var_96_int = 3; // 0xdc6 MovI
	func_2909(var_93_string, var_94_int, var_95_int, var_96_int); // 0xdc7 NEW_2
	var_97_int = 5; // 0xdc9 PushI
	var_98_bool = var_66_int >= var_97_int; // 0xdca GE
	if(var_98_bool == 0) goto Label_3538; // 0xdcb JumpB
	var_99_string = ""; var_100_int = 0; var_101_int = 0; // 0xdcc PushV
	var_99_string = "Samopal"; // 0xdcd MovS
	var_100_int = 1; // 0xdce MovI
	var_101_int = 1; // 0xdcf MovI
	func_2898(var_99_string, var_100_int, var_101_int); // 0xdd0 NEW_2
	
Label_3538:
	return 2; // 0xdd2 Return
}


func_3241(var_445_bool)
{
	var_447_int = 0; var_448_string = ""; // 0xcaa PushV
	var_448_string = "b2q03_1"; // 0xcab MovS
	func_2945(var_447_int, var_448_string); // 0xcac NEW_2
	var_449_int = 1; // 0xcae PushI
	var_450_bool = var_447_int == var_449_int; // 0xcaf Eq
	if(var_450_bool == 0) goto Label_3251; // 0xcb0 JumpB
	var_445_bool = 1; // 0xcb1 MovB
	return 0; // 0xcb2 Return
	
Label_3251:
	var_445_bool = 0; // 0xcb3 MovB
	return 0; // 0xcb4 Return
}


func_174(var_2_object, var_281_string)
{
	var_282_bool = 0; // 0xaf PushV
	func_3045(var_282_bool); // 0xb0 NEW_2
	var_283_bool = var_282_bool == 0; // 0xb2 Not
	if(var_283_bool == 0) goto Label_181; // 0xb3 JumpB
	return 0; // 0xb4 Return
	
Label_181:
	var_284_bool = var_281_string == var_2_object; // 0xb5 Eq
	if(var_284_bool == 0) goto Label_184; // 0xb6 JumpB
	return 0; // 0xb7 Return
	
Label_184:
	var_285_string = ""; var_286_bool = 0; // 0xb8 PushV
	var_285_string = var_281_string; // 0xb9 Mov
	var_287_string = ""; // 0xba PushS
	var_288_bool = var_281_string == var_287_string; // 0xbb Eq
	if(var_288_bool == 0) goto Label_191; // 0xbc JumpB
	var_286_bool = 0; // 0xbd MovB
	goto Label_192; // 0xbe Jump
	
Label_192:
	func_2861(var_285_string, var_286_bool); // 0xc0 NEW_2
	var_2_object = var_281_string; // 0xc2 TMov
	return 0; // 0xc3 Return
	
Label_191:
	var_286_bool = 1; // 0xbf MovB
}


func_2993(var_102_float)
{
	var_103_float = 0; var_104_float = 0; // 0xbb1 PushV
	GetGameTime(var_104_float); // 0xbb2 Func
	var_102_float = var_104_float; // 0xbb4 Mov
	return 2; // 0xbb5 Return
}


func_3253(var_433_bool)
{
	var_435_int = 0; var_436_string = ""; // 0xcb6 PushV
	var_436_string = "b2q03_1"; // 0xcb7 MovS
	func_2945(var_435_int, var_436_string); // 0xcb8 NEW_2
	var_437_int = 2; // 0xcba PushI
	var_438_bool = var_435_int == var_437_int; // 0xcbb Eq
	if(var_438_bool == 0) goto Label_3263; // 0xcbc JumpB
	var_433_bool = 1; // 0xcbd MovB
	return 0; // 0xcbe Return
	
Label_3263:
	var_433_bool = 0; // 0xcbf MovB
	return 0; // 0xcc0 Return
}


func_2741(var_226_bool)
{
	var_228_string = ""; var_229_int = 0; var_230_bool = 0; var_231_int = 0; var_232_string = ""; var_233_string = ""; var_234_int = 0; var_235_bool = 0; var_236_int = 0; var_237_string = ""; // 0xab5 PushV
	var_238_string = "d"; // 0xab6 PushS
	var_239_int = 0; // 0xab7 PushV
	func_2998(var_239_int); // 0xab8 NEW_2
	var_240_int = var_238_string + var_239_int; // 0xaba Add
	var_241_string = "m"; // 0xabb PushS
	var_233_string = var_240_int + var_241_string; // 0xabc Add2
	var_234_int = 0; // 0xabd MovI
	
Label_2750:
	var_242_int = 1; // 0xabe PushI
	if(var_242_int == 0) goto Label_2763; // 0xabf JumpB
	var_243_int = 1; // 0xac0 PushI
	var_244_int = var_234_int + var_243_int; // 0xac1 Add
	var_245_int = var_233_string + var_244_int; // 0xac2 Add
	HasProperty(var_245_int, var_235_bool); // 0xac3 ObjFunc
	var_246_bool = var_235_bool == 0; // 0xac5 Not
	if(var_246_bool == 0) goto Label_2760; // 0xac6 JumpB
	goto Label_2763; // 0xac7 Jump
	
Label_2763:
	var_247_bool = var_234_int == 0; // 0xacb Not
	if(var_247_bool == 0) goto Label_2767; // 0xacc JumpB
	var_226_bool = 0; // 0xacd MovB
	return 10; // 0xace Return
	
Label_2767:
	var_236_int = 0; // 0xacf MovI
	var_248_int = 1; // 0xad0 PushI
	var_249_bool = var_234_int > var_248_int; // 0xad1 GT
	if(var_249_bool == 0) goto Label_2773; // 0xad2 JumpB
	irand(var_236_int, var_234_int); // 0xad3 Func
	
Label_2773:
	var_250_int = 1; // 0xad5 PushI
	var_251_int = var_236_int + var_250_int; // 0xad6 Add
	var_252_int = var_233_string + var_251_int; // 0xad7 Add
	GetProperty(var_252_int, var_237_string); // 0xad8 ObjFunc
	var_253_bool = 0; var_254_string = ""; // 0xada PushV
	var_254_string = var_237_string; // 0xadb Mov
	func_2876(var_253_bool, var_254_string); // 0xadc NEW_2
	var_226_bool = var_253_bool; // 0xadd Mov
	return 10; // 0xadf Return
	
Label_2760:
	var_255_int = 1; // 0xac8 PushI
	var_234_int = var_234_int + var_255_int; // 0xac9 Add2
	goto Label_2750; // 0xaca Jump
}


func_2998(var_58_int)
{
	var_59_float = 0; var_60_float = 0; // 0xbb6 PushV
	GetGameTime(var_60_float); // 0xbb7 Func
	var_61_int = 1; // 0xbb9 PushI
	var_62_int = 0; // 0xbba PushV
	var_63_int = 24; // 0xbbb PushI
	var_62_int = var_60_float / var_60_float; // 0xbbc Div2
	var_58_int = var_61_int + var_62_int; // 0xbbd Add2
	return 2; // 0xbbe Return
}


func_3007(var_331_bool, var_332_int)
{
	var_333_int = 0; // 0xbc0 PushV
	func_2998(var_333_int); // 0xbc1 NEW_2
	var_331_bool = var_333_int == var_332_int; // 0xbc3 Eq2
	return 0; // 0xbc4 Return
}


func_3265(var_458_bool)
{
	var_460_int = 0; var_461_string = ""; // 0xcc2 PushV
	var_461_string = "oob2Andrei3"; // 0xcc3 MovS
	func_2945(var_460_int, var_461_string); // 0xcc4 NEW_2
	var_462_int = 0; // 0xcc6 PushI
	var_463_bool = var_460_int == var_462_int; // 0xcc7 Eq
	if(var_463_bool == 0) goto Label_3275; // 0xcc8 JumpB
	var_458_bool = 1; // 0xcc9 MovB
	return 0; // 0xcca Return
	
Label_3275:
	var_458_bool = 0; // 0xccb MovB
	return 0; // 0xccc Return
}


func_1730(var_2_object, var_664_string)
{
	var_665_bool = 0; // 0x6c3 PushV
	func_3045(var_665_bool); // 0x6c4 NEW_2
	var_666_bool = var_665_bool == 0; // 0x6c6 Not
	if(var_666_bool == 0) goto Label_1737; // 0x6c7 JumpB
	return 0; // 0x6c8 Return
	
Label_1737:
	var_667_bool = var_664_string == var_2_object; // 0x6c9 Eq
	if(var_667_bool == 0) goto Label_1740; // 0x6ca JumpB
	return 0; // 0x6cb Return
	
Label_1740:
	var_668_string = ""; var_669_bool = 0; // 0x6cc PushV
	var_668_string = var_664_string; // 0x6cd Mov
	var_670_string = ""; // 0x6ce PushS
	var_671_bool = var_664_string == var_670_string; // 0x6cf Eq
	if(var_671_bool == 0) goto Label_1747; // 0x6d0 JumpB
	var_669_bool = 0; // 0x6d1 MovB
	goto Label_1748; // 0x6d2 Jump
	
Label_1748:
	func_2861(var_668_string, var_669_bool); // 0x6d4 NEW_2
	var_2_object = var_664_string; // 0x6d6 TMov
	return 0; // 0x6d7 Return
	
Label_1747:
	var_669_bool = 1; // 0x6d3 MovB
}


func_3013(var_56_string, var_57_int)
{
	var_58_string = ""; var_59_string = ""; // 0xbc5 PushV
	var_59_string = "idle"; // 0xbc6 MovS
	var_60_int = var_57_int; // 0xbc7 Push
	if(var_60_int == 0) goto Label_3018; // 0xbc8 JumpB
	var_59_string = var_59_string + var_57_int; // 0xbc9 Add2
	
Label_3018:
	var_56_string = var_59_string; // 0xbca Mov
	return 2; // 0xbcb Return
}


func_3020(var_50_int)
{
	var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_bool = 0; // 0xbcc PushV
	var_53_int = 0; // 0xbcd MovI
	
Label_3022:
	var_55_string = "all"; // 0xbce PushS
	var_56_string = ""; var_57_int = 0; // 0xbcf PushV
	var_57_int = var_53_int; // 0xbd0 Mov
	func_3013(var_56_string, var_57_int); // 0xbd1 NEW_2
	HasAnimation(var_54_bool, var_55_string, var_56_string); // 0xbd3 Func
	var_61_bool = var_54_bool == 0; // 0xbd5 Not
	if(var_61_bool == 0) goto Label_3032; // 0xbd6 JumpB
	goto Label_3035; // 0xbd7 Jump
	
Label_3035:
	var_50_int = var_53_int; // 0xbdb Mov
	return 4; // 0xbdc Return
	
Label_3032:
	var_62_int = 1; // 0xbd8 PushI
	var_53_int = var_53_int + var_62_int; // 0xbd9 Add2
	goto Label_3022; // 0xbda Jump
}


func_3277(var_571_bool)
{
	var_573_int = 0; var_574_string = ""; // 0xcce PushV
	var_574_string = "b5q01"; // 0xccf MovS
	func_2945(var_573_int, var_574_string); // 0xcd0 NEW_2
	var_575_int = 1; // 0xcd2 PushI
	var_576_bool = var_573_int == var_575_int; // 0xcd3 Eq
	if(var_576_bool == 0) goto Label_3287; // 0xcd4 JumpB
	var_571_bool = 1; // 0xcd5 MovB
	return 0; // 0xcd6 Return
	
Label_3287:
	var_571_bool = 0; // 0xcd7 MovB
	return 0; // 0xcd8 Return
}


func_1229(var_0_bool, var_530_int, var_531_object)
{
	var_533_object = Obj(); var_534_bool = 0; var_535_int = 0; var_536_bool = 0; var_537_object = Obj(); var_538_bool = 0; var_539_int = 0; var_540_bool = 0; // 0x4cd PushV
	var_0_bool = var_531_object; // 0x4ce TMov
	var_541_bool = 0; var_542_object = Obj(); var_543_float = 0; // 0x4cf PushV
	var_542_object = var_531_object; // 0x4d0 Mov
	var_543_float = 70.0; // 0x4d1 MovF
	func_2559(var_542_object, var_543_float); // 0x4d2 NEW_2
	var_544_bool = var_541_bool == 0; // 0x4d4 Not
	if(var_544_bool == 0) goto Label_1240; // 0x4d5 JumpB
	var_530_int = -2; // 0x4d6 MovI
	return 8; // 0x4d7 Return
	
Label_1240:
	CreateDialog(var_537_object); // 0x4d8 Func
	var_545_int = 0; // 0x4da PushV
	func_3039(var_545_int); // 0x4db NEW_2
	SetNPCName(var_545_int); // 0x4dd ObjFunc
	var_546_int = 0; // 0x4df PushV
	func_3037(var_546_int); // 0x4e0 NEW_2
	SetNPCDescription(var_546_int); // 0x4e2 ObjFunc
	var_547_string = ""; // 0x4e4 PushV
	func_3041(var_547_string); // 0x4e5 NEW_2
	SetPhoto(var_547_string); // 0x4e7 ObjFunc
	var_548_string = ""; // 0x4e9 PushV
	func_3043(var_548_string); // 0x4ea NEW_2
	SetPhoto2(var_548_string); // 0x4ec ObjFunc
	var_549_int = 0; // 0x4ee PushV
	func_3539(var_549_int); // 0x4ef NEW_2
	SetPlayerName(var_549_int); // 0x4f1 ObjFunc
	var_539_int = -1; // 0x4f3 MovI
	IsOverrideActive(var_538_bool); // 0x4f4 Func
	var_550_bool = var_538_bool; // 0x4f6 Push
	if(var_550_bool == 0) goto Label_1274; // 0x4f7 JumpB
	var_530_int = -2; // 0x4f8 MovI
	return 8; // 0x4f9 Return
	
Label_1274:
	DoDialog(var_537_object); // 0x4fa Func
	var_551_bool = 0; var_552_object = Obj(); // 0x4fc PushV
	var_553_object = Obj(); // 0x4fd PushV
	func_2924(var_553_object); // 0x4fe NEW_2
	var_552_object = var_553_object; // 0x4ff Mov
	func_2646(var_551_bool, var_552_object); // 0x501 NEW_2
	var_554_object = Obj(); var_555_object = Obj(); // 0x503 PushV
	var_554_object = var_531_object; // 0x504 Mov
	var_555_object = var_537_object; // 0x505 Mov
	TaskCall(6); // 0x506 TaskCall
	func_1310(var_556_object, var_557_object, var_558_string, var_559_bool, var_554_object, var_555_object); // 0x507 NEW_2
	TaskReturn(); // 0x508 TaskReturn
	IsDialogEnd(var_540_bool); // 0x50a ObjFunc
	
Label_1292:
	var_600_bool = var_540_bool == 0; // 0x50c Not
	if(var_600_bool == 0) goto Label_1299; // 0x50d JumpB
	sync(); // 0x50e Func
	IsDialogEnd(var_540_bool); // 0x510 ObjFunc
	goto Label_1292; // 0x512 Jump
	
Label_1299:
	var_601_object = Obj(); // 0x513 PushV
	var_601_object = var_531_object; // 0x514 Mov
	func_2628(); // 0x515 NEW_2
	StopDialog(var_537_object); // 0x517 Func
	GetReturnValue(var_539_int); // 0x519 ObjFunc
	var_530_int = var_539_int; // 0x51b Mov
	return 8; // 0x51c Return
}


func_2513(var_70_bool)
{
	var_70_bool = 1; // 0x9d1 MovB
	return 0; // 0x9d2 Return
}


func_3539(var_175_int)
{
	var_176_int = 0; var_177_int = 0; // 0xdd3 PushV
	var_178_string = "branch"; // 0xdd4 PushS
	GetVariable(var_178_string, var_177_int); // 0xdd5 Func
	var_179_int = 0; // 0xdd7 PushI
	var_180_bool = var_177_int == var_179_int; // 0xdd8 Eq
	if(var_180_bool == 0) goto Label_3549; // 0xdd9 JumpB
	var_175_int = 1; // 0xdda MovI
	return 2; // 0xddb Return
	
Label_3549:
	var_181_int = 1; // 0xddd PushI
	var_182_bool = var_177_int == var_181_int; // 0xdde Eq
	if(var_182_bool == 0) goto Label_3554; // 0xddf JumpB
	var_175_int = 2; // 0xde0 MovI
	return 2; // 0xde1 Return
	
Label_3554:
	var_175_int = 3; // 0xde2 MovI
	return 2; // 0xde3 Return
}


func_2515()
{
	StopAnimation(); // 0x9d3 Func
	StopGroup0(); // 0x9d5 Func
	return 0; // 0x9d7 Return
}


func_2520(var_47_float)
{
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); // 0x9d8 PushV
	GetPosition(var_52_cvector); // 0x9d9 Func
	GetPosition(var_53_cvector); // 0x9db ObjFunc
	var_54_cvector = var_53_cvector - var_52_cvector; // 0x9dd Sub2
	var_47_float = var_54_cvector | var_54_cvector; // 0x9de Or2
	return 6; // 0x9df Return
}


func_3289(var_577_bool)
{
	var_579_int = 0; var_580_string = ""; // 0xcda PushV
	var_580_string = "oob5Andrei1"; // 0xcdb MovS
	func_2945(var_579_int, var_580_string); // 0xcdc NEW_2
	var_581_int = 0; // 0xcde PushI
	var_582_bool = var_579_int == var_581_int; // 0xcdf Eq
	if(var_582_bool == 0) goto Label_3299; // 0xce0 JumpB
	var_577_bool = 1; // 0xce1 MovB
	return 0; // 0xce2 Return
	
Label_3299:
	var_577_bool = 0; // 0xce3 MovB
	return 0; // 0xce4 Return
}


func_2268(var_0_bool)
{
	var_32_bool = 0; // 0x8dc PushV
	func_2554(var_32_bool); // 0x8dd NEW_2
	var_35_bool = var_32_bool == 0; // 0x8df Not
	if(var_35_bool == 0) goto Label_2275; // 0x8e0 JumpB
	Hold(); // 0x8e1 Func
	
Label_2275:
	GetDirection(var_0_bool); // 0x8e3 Func
	
Label_2277:
	func_2444(); // 0x8e6 NEW_2
	goto Label_2277; // 0x8e8 Jump
}


func_3037(var_172_int)
{
	var_172_int = 515529; // 0xbdd MovI
	return 0; // 0xbde Return
}


func_3039(var_171_int)
{
	var_171_int = 502855; // 0xbdf MovI
	return 0; // 0xbe0 Return
}


func_2784(var_485_bool, var_486_object)
{
	var_487_bool = 0; var_488_object = Obj(); var_489_float = 0; // 0xae1 PushV
	var_488_object = var_486_object; // 0xae2 Mov
	var_489_float = 70; // 0xae3 MovI
	func_2792(var_488_object, var_489_float); // 0xae4 NEW_2
	var_485_bool = var_487_bool; // 0xae5 Mov
	return 0; // 0xae7 Return
}


func_2528(var_126_string, var_127_int)
{
	var_128_int = 0; var_129_int = 0; // 0x9e0 PushV
	GetProperty(var_126_string, var_129_int); // 0x9e1 ObjFunc
	var_130_int = var_129_int + var_127_int; // 0x9e3 Add
	SetProperty(var_126_string, var_130_int); // 0x9e4 ObjFunc
	return 2; // 0x9e6 Return
}


func_3041(var_173_string)
{
	var_173_string = "ui/NPC_Andrei.png"; // 0xbe1 MovS
	return 0; // 0xbe2 Return
}


func_3043(var_174_string)
{
	var_174_string = "ui/NPC_Andrei_b.png"; // 0xbe3 MovS
	return 0; // 0xbe4 Return
}


func_3556(var_50_object, var_337_object, var_532_object, var_635_object)
{
	var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_int = 0; var_55_int = 0; var_56_int = 0; // 0xde4 PushV
	var_57_string = "tr_andrei"; // 0xde5 PushS
	GetVariable(var_57_string, var_54_int); // 0xde6 Func
	var_58_int = 0; // 0xde8 PushV
	func_2998(var_58_int); // 0xde9 NEW_2
	var_64_bool = var_54_int != var_58_int; // 0xdeb Neq
	if(var_64_bool == 0) goto Label_3574; // 0xdec JumpB
	func_3493(); // 0xdee NEW_2
	var_108_string = "tr_andrei"; // 0xdf0 PushS
	var_109_int = 0; // 0xdf1 PushV
	func_2998(var_109_int); // 0xdf2 NEW_2
	SetVariable(var_108_string, var_109_int); // 0xdf4 Func
	
Label_3574:
	var_110_string = "mt_andrei"; // 0xdf6 PushS
	GetVariable(var_110_string, var_55_int); // 0xdf7 Func
	var_111_bool = var_55_int == 0; // 0xdf9 Not
	if(var_111_bool == 0) goto Label_3589; // 0xdfa JumpB
	var_112_int = 0; var_113_object = Obj(); // 0xdfb PushV
	var_113_object = var_50_object; // 0xdfc Mov
	TaskCall(1); // 0xdfd TaskCall
	func_40(var_114_object, var_112_int, var_113_object); // 0xdfe NEW_2
	TaskReturn(); // 0xdff TaskReturn
	var_329_string = "mt_andrei"; // 0xe01 PushS
	var_330_int = 1; // 0xe02 PushI
	SetVariable(var_329_string, var_330_int); // 0xe03 Func
	
Label_3589:
	var_331_bool = 0; var_332_int = 0; // 0xe05 PushV
	var_332_int = 2; // 0xe06 MovI
	func_3007(var_331_bool, var_332_int); // 0xe07 NEW_2
	if(var_331_bool == 0) goto Label_3621; // 0xe09 JumpB
	var_334_int = 1000; // 0xe0a PushI
	var_335_int = 0; var_336_object = Obj(); // 0xe0b PushV
	var_336_object = var_50_object; // 0xe0c Mov
	TaskCall(3); // 0xe0d TaskCall
	func_330(var_337_object, var_335_int, var_336_object); // 0xe0e NEW_2
	TaskReturn(); // 0xe0f TaskReturn
	var_484_bool = var_334_int == var_337_object; // 0xe11 Eq
	if(var_484_bool == 0) goto Label_3620; // 0xe12 JumpB
	var_485_bool = 0; var_486_object = Obj(); // 0xe13 PushV
	var_486_object = var_50_object; // 0xe14 Mov
	func_2784(var_485_bool, var_486_object); // 0xe15 NEW_2
	var_517_bool = var_485_bool == 0; // 0xe17 Not
	if(var_517_bool == 0) goto Label_3610; // 0xe18 JumpB
	return 6; // 0xe19 Return
	
Label_3610:
	var_518_object = Obj(); // 0xe1a PushV
	var_518_object = var_50_object; // 0xe1b Mov
	TaskCall(0); // 0xe1c TaskCall
	func_0(var_518_object); // 0xe1d NEW_2
	TaskReturn(); // 0xe1e TaskReturn
	var_525_object = Obj(); // 0xe20 PushV
	var_525_object = var_50_object; // 0xe21 Mov
	func_2840(); // 0xe22 NEW_2
	
Label_3620:
	return 6; // 0xe24 Return
	
Label_3621:
	var_527_bool = 0; var_528_int = 0; // 0xe25 PushV
	var_528_int = 5; // 0xe26 MovI
	func_3007(var_527_bool, var_528_int); // 0xe27 NEW_2
	if(var_527_bool == 0) goto Label_3653; // 0xe29 JumpB
	var_529_int = 1000; // 0xe2a PushI
	var_530_int = 0; var_531_object = Obj(); // 0xe2b PushV
	var_531_object = var_50_object; // 0xe2c Mov
	TaskCall(5); // 0xe2d TaskCall
	func_1229(var_532_object, var_530_int, var_531_object); // 0xe2e NEW_2
	TaskReturn(); // 0xe2f TaskReturn
	var_602_bool = var_529_int == var_532_object; // 0xe31 Eq
	if(var_602_bool == 0) goto Label_3652; // 0xe32 JumpB
	var_603_bool = 0; var_604_object = Obj(); // 0xe33 PushV
	var_604_object = var_50_object; // 0xe34 Mov
	func_2784(var_603_bool, var_604_object); // 0xe35 NEW_2
	var_605_bool = var_603_bool == 0; // 0xe37 Not
	if(var_605_bool == 0) goto Label_3642; // 0xe38 JumpB
	return 6; // 0xe39 Return
	
Label_3642:
	var_606_object = Obj(); // 0xe3a PushV
	var_606_object = var_50_object; // 0xe3b Mov
	TaskCall(0); // 0xe3c TaskCall
	func_0(var_606_object); // 0xe3d NEW_2
	TaskReturn(); // 0xe3e TaskReturn
	var_608_object = Obj(); // 0xe40 PushV
	var_608_object = var_50_object; // 0xe41 Mov
	func_2840(); // 0xe42 NEW_2
	
Label_3652:
	return 6; // 0xe44 Return
	
Label_3653:
	var_609_bool = 0; // 0xe45 PushV
	var_609_bool = 1; // 0xe46 MovB
	var_610_bool = 0; // 0xe47 PushV
	var_610_bool = 1; // 0xe48 MovB
	var_611_bool = 0; // 0xe49 PushV
	var_611_bool = 1; // 0xe4a MovB
	var_612_bool = 0; // 0xe4b PushV
	var_612_bool = 1; // 0xe4c MovB
	var_613_bool = 0; // 0xe4d PushV
	var_613_bool = 1; // 0xe4e MovB
	var_614_bool = 0; // 0xe4f PushV
	var_614_bool = 1; // 0xe50 MovB
	var_615_bool = 0; // 0xe51 PushV
	var_615_bool = 1; // 0xe52 MovB
	var_616_bool = 0; var_617_int = 0; // 0xe53 PushV
	var_617_int = 3; // 0xe54 MovI
	func_3007(var_616_bool, var_617_int); // 0xe55 NEW_2
	if(var_616_bool == 0) goto Label_3678; // 0xe57 JumpB
	var_618_bool = 0; var_619_int = 0; // 0xe58 PushV
	var_619_int = 4; // 0xe59 MovI
	func_3007(var_618_bool, var_619_int); // 0xe5a NEW_2
	if(var_618_bool == 0) goto Label_3678; // 0xe5c JumpB
	var_615_bool = 0; // 0xe5d MovB
	
Label_3678:
	if(var_615_bool == 0) goto Label_3685; // 0xe5e JumpB
	var_620_bool = 0; var_621_int = 0; // 0xe5f PushV
	var_621_int = 6; // 0xe60 MovI
	func_3007(var_620_bool, var_621_int); // 0xe61 NEW_2
	if(var_620_bool == 0) goto Label_3685; // 0xe63 JumpB
	var_614_bool = 0; // 0xe64 MovB
	
Label_3685:
	if(var_614_bool == 0) goto Label_3692; // 0xe65 JumpB
	var_622_bool = 0; var_623_int = 0; // 0xe66 PushV
	var_623_int = 7; // 0xe67 MovI
	func_3007(var_622_bool, var_623_int); // 0xe68 NEW_2
	if(var_622_bool == 0) goto Label_3692; // 0xe6a JumpB
	var_613_bool = 0; // 0xe6b MovB
	
Label_3692:
	if(var_613_bool == 0) goto Label_3699; // 0xe6c JumpB
	var_624_bool = 0; var_625_int = 0; // 0xe6d PushV
	var_625_int = 8; // 0xe6e MovI
	func_3007(var_624_bool, var_625_int); // 0xe6f NEW_2
	if(var_624_bool == 0) goto Label_3699; // 0xe71 JumpB
	var_612_bool = 0; // 0xe72 MovB
	
Label_3699:
	if(var_612_bool == 0) goto Label_3706; // 0xe73 JumpB
	var_626_bool = 0; var_627_int = 0; // 0xe74 PushV
	var_627_int = 9; // 0xe75 MovI
	func_3007(var_626_bool, var_627_int); // 0xe76 NEW_2
	if(var_626_bool == 0) goto Label_3706; // 0xe78 JumpB
	var_611_bool = 0; // 0xe79 MovB
	
Label_3706:
	if(var_611_bool == 0) goto Label_3713; // 0xe7a JumpB
	var_628_bool = 0; var_629_int = 0; // 0xe7b PushV
	var_629_int = 10; // 0xe7c MovI
	func_3007(var_628_bool, var_629_int); // 0xe7d NEW_2
	if(var_628_bool == 0) goto Label_3713; // 0xe7f JumpB
	var_610_bool = 0; // 0xe80 MovB
	
Label_3713:
	if(var_610_bool == 0) goto Label_3720; // 0xe81 JumpB
	var_630_bool = 0; var_631_int = 0; // 0xe82 PushV
	var_631_int = 11; // 0xe83 MovI
	func_3007(var_630_bool, var_631_int); // 0xe84 NEW_2
	if(var_630_bool == 0) goto Label_3720; // 0xe86 JumpB
	var_609_bool = 0; // 0xe87 MovB
	
Label_3720:
	if(var_609_bool == 0) goto Label_3748; // 0xe88 JumpB
	var_632_int = 1000; // 0xe89 PushI
	var_633_int = 0; var_634_object = Obj(); // 0xe8a PushV
	var_634_object = var_50_object; // 0xe8b Mov
	TaskCall(7); // 0xe8c TaskCall
	func_1591(var_635_object, var_633_int, var_634_object); // 0xe8d NEW_2
	TaskReturn(); // 0xe8e TaskReturn
	var_689_bool = var_632_int == var_635_object; // 0xe90 Eq
	if(var_689_bool == 0) goto Label_3747; // 0xe91 JumpB
	var_690_bool = 0; var_691_object = Obj(); // 0xe92 PushV
	var_691_object = var_50_object; // 0xe93 Mov
	func_2784(var_690_bool, var_691_object); // 0xe94 NEW_2
	var_692_bool = var_690_bool == 0; // 0xe96 Not
	if(var_692_bool == 0) goto Label_3737; // 0xe97 JumpB
	return 6; // 0xe98 Return
	
Label_3737:
	var_693_object = Obj(); // 0xe99 PushV
	var_693_object = var_50_object; // 0xe9a Mov
	TaskCall(0); // 0xe9b TaskCall
	func_0(var_693_object); // 0xe9c NEW_2
	TaskReturn(); // 0xe9d TaskReturn
	var_695_object = Obj(); // 0xe9f PushV
	var_695_object = var_50_object; // 0xea0 Mov
	func_2840(); // 0xea1 NEW_2
	
Label_3747:
	return 6; // 0xea3 Return
	
Label_3748:
	var_696_string = "d12_andrei"; // 0xea4 PushS
	GetVariable(var_696_string, var_56_int); // 0xea5 Func
	var_697_bool = 0; // 0xea7 PushV
	var_697_bool = 0; // 0xea8 MovB
	var_698_bool = 0; var_699_int = 0; // 0xea9 PushV
	var_699_int = 12; // 0xeaa MovI
	func_3007(var_698_bool, var_699_int); // 0xeab NEW_2
	if(var_698_bool == 0) goto Label_3761; // 0xead JumpB
	var_700_bool = var_56_int == 0; // 0xeae Not
	if(var_700_bool == 0) goto Label_3761; // 0xeaf JumpB
	var_697_bool = 1; // 0xeb0 MovB
	
Label_3761:
	if(var_697_bool == 0) goto Label_3773; // 0xeb1 JumpB
	var_701_int = 0; var_702_object = Obj(); // 0xeb2 PushV
	var_702_object = var_50_object; // 0xeb3 Mov
	TaskCall(9); // 0xeb4 TaskCall
	func_1802(var_703_object, var_701_int, var_702_object); // 0xeb5 NEW_2
	TaskReturn(); // 0xeb6 TaskReturn
	var_760_string = "d12_andrei"; // 0xeb8 PushS
	var_761_int = 1; // 0xeb9 PushI
	SetVariable(var_760_string, var_761_int); // 0xeba Func
	return 6; // 0xebc Return
	
Label_3773:
	var_762_int = 0; var_763_object = Obj(); // 0xebd PushV
	var_763_object = var_50_object; // 0xebe Mov
	TaskCall(11); // 0xebf TaskCall
	func_2061(var_764_object, var_762_int, var_763_object); // 0xec0 NEW_2
	TaskReturn(); // 0xec1 TaskReturn
	return 6; // 0xec3 Return
}


func_3301(var_467_bool)
{
	var_469_int = 0; var_470_string = ""; // 0xce6 PushV
	var_470_string = "oob2Andrei1"; // 0xce7 MovS
	func_2945(var_469_int, var_470_string); // 0xce8 NEW_2
	var_471_int = 0; // 0xcea PushI
	var_472_bool = var_469_int == var_471_int; // 0xceb Eq
	if(var_472_bool == 0) goto Label_3311; // 0xcec JumpB
	var_467_bool = 1; // 0xced MovB
	return 0; // 0xcee Return
	
Label_3311:
	var_467_bool = 0; // 0xcef MovB
	return 0; // 0xcf0 Return
}


func_3045(var_166_bool)
{
	var_166_bool = 1; // 0xbe5 MovB
	return 0; // 0xbe6 Return
}


func_3047()
{
	var_40_string = "oob5Andrei1"; // 0xbe8 PushS
	var_41_int = 1; // 0xbe9 PushI
	SetVariable(var_40_string, var_41_int); // 0xbea Func
	return 0; // 0xbec Return
}


func_2792(var_487_bool, var_489_float)
{
	var_490_float = 0; var_491_cvector = CVector(0,0,0); var_492_cvector = CVector(0,0,0); var_493_cvector = CVector(0,0,0); var_494_cvector = CVector(0,0,0); var_495_cvector = CVector(0,0,0); var_496_cvector = CVector(0,0,0); var_497_bool = 0; var_498_float = 0; var_499_cvector = CVector(0,0,0); var_500_cvector = CVector(0,0,0); var_501_cvector = CVector(0,0,0); var_502_cvector = CVector(0,0,0); var_503_cvector = CVector(0,0,0); var_504_cvector = CVector(0,0,0); var_505_bool = 0; // 0xae8 PushV
	GetPosition(var_499_cvector); // 0xae9 ObjFunc
	GetEyesHeight(var_498_float); // 0xaeb ObjFunc
	var_506_float = GetByIndex(var_499_cvector, 1); // 0xaed PushE
	var_506_float = var_506_float + var_498_float; // 0xaee Add2
	SetByIndex(var_499_cvector, 1) = var_506_float; // 0xaef PopE
	GetPosition(var_500_cvector); // 0xaf0 Func
	GetEyesHeight(var_498_float); // 0xaf2 Func
	var_507_float = GetByIndex(var_500_cvector, 1); // 0xaf4 PushE
	var_507_float = var_507_float + var_498_float; // 0xaf5 Add2
	SetByIndex(var_500_cvector, 1) = var_507_float; // 0xaf6 PopE
	var_501_cvector = var_499_cvector - var_500_cvector; // 0xaf7 Sub2
	var_508_float = GetByIndex(var_501_cvector, 1); // 0xaf8 PushE
	var_508_float = 0; // 0xaf9 MovI
	SetByIndex(var_501_cvector, 1) = var_508_float; // 0xafa PopE
	var_509_int = var_501_cvector | var_501_cvector; // 0xafb Or
	var_510_float = sqrt(var_509_int); // 0xafc Sqrt
	var_501_cvector = var_501_cvector / var_501_cvector; // 0xafd Div2
	var_502_cvector = -var_501_cvector; // 0xafe Neg2
	var_511_float = var_501_cvector * var_489_float; // 0xaff Mult
	var_512_cvector = CVector(0.0, 10.0, 0.0); // 0xb00 PushVec
	var_503_cvector = var_511_float - var_512_cvector; // 0xb01 Sub2
	var_504_cvector = var_500_cvector + var_503_cvector; // 0xb02 Add2
	IsOverrideActive(var_505_bool); // 0xb03 Func
	var_513_bool = var_505_bool; // 0xb05 Push
	if(var_513_bool == 0) goto Label_2825; // 0xb06 JumpB
	var_487_bool = 0; // 0xb07 MovB
	return 16; // 0xb08 Return
	
Label_2825:
	StopWorld(); // 0xb09 Func
	var_514_bool = 1; // 0xb0b PushB
	CameraTransit(var_504_cvector, var_502_cvector, var_514_bool); // 0xb0c Func
	var_515_float = GetByIndex(var_503_cvector, 0); // 0xb0e PushE
	var_516_float = GetByIndex(var_503_cvector, 2); // 0xb0f PushE
	Rotate(var_515_float, var_516_float); // 0xb10 Func
	CameraWaitForPlayFinish(); // 0xb12 Func
	ResumeWorld(); // 0xb14 Func
	var_487_bool = 1; // 0xb16 MovB
	return 16; // 0xb17 Return
}


func_2535(var_40_bool, var_41_cvector)
{
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; // 0x9e7 PushV
	GetPosition(var_45_cvector); // 0x9e8 Func
	var_46_cvector = var_41_cvector - var_45_cvector; // 0x9ea Sub2
	var_48_float = GetByIndex(var_46_cvector, 0); // 0x9eb PushE
	var_49_float = GetByIndex(var_46_cvector, 2); // 0x9ec PushE
	Rotate(var_48_float, var_49_float, var_47_bool); // 0x9ed Func
	var_40_bool = var_47_bool; // 0x9ef Mov
	return 6; // 0x9f0 Return
}


func_2282(var_57_bool)
{
	var_58_object = Obj(); var_59_object = Obj(); // 0x8ea PushV
	var_60_string = "player"; // 0x8eb PushS
	FindActor(var_59_object, var_60_string); // 0x8ec Func
	var_61_bool = var_59_object == 0; // 0x8ee Not
	if(var_61_bool == 0) goto Label_2290; // 0x8ef JumpB
	var_57_bool = 0; // 0x8f0 MovB
	return 2; // 0x8f1 Return
	
Label_2290:
	var_62_bool = 0; var_63_object = Obj(); // 0x8f2 PushV
	var_63_object = var_59_object; // 0x8f3 Mov
	func_2545(var_63_object); // 0x8f4 NEW_2
	var_57_bool = var_62_bool; // 0x8f5 Mov
	return 2; // 0x8f7 Return
}


func_3053()
{
	var_217_string = "oob2Andrei1"; // 0xbee PushS
	var_218_int = 1; // 0xbef PushI
	SetVariable(var_217_string, var_218_int); // 0xbf0 Func
	return 0; // 0xbf2 Return
}


func_3313(var_420_bool)
{
	var_422_int = 0; var_423_int = 0; // 0xcf1 PushV
	var_424_string = "grass_brown_tvir"; // 0xcf2 PushS
	GetItemCountOfType(var_423_int, var_424_string); // 0xcf3 ObjFunc
	var_425_int = 10; // 0xcf5 PushI
	var_426_bool = var_423_int >= var_425_int; // 0xcf6 GE
	if(var_426_bool == 0) goto Label_3322; // 0xcf7 JumpB
	var_420_bool = 1; // 0xcf8 MovB
	return 2; // 0xcf9 Return
	
Label_3322:
	var_420_bool = 0; // 0xcfa MovB
	return 2; // 0xcfb Return
}


func_2545(var_36_bool)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); // 0x9f1 PushV
	GetPosition(var_39_cvector); // 0x9f2 ObjFunc
	var_40_bool = 0; var_41_cvector = CVector(0,0,0); // 0x9f4 PushV
	var_41_cvector = var_39_cvector; // 0x9f5 Mov
	func_2535(var_40_bool, var_41_cvector); // 0x9f6 NEW_2
	var_36_bool = var_40_bool; // 0x9f7 Mov
	return 2; // 0x9f9 Return
}


func_3059(var_118_object)
{
	var_120_string = "money 4000 is given"; // 0xbf4 PushS
	Trace(var_120_string); // 0xbf5 Func
	var_121_object = Obj(); var_122_int = 0; // 0xbf7 PushV
	var_121_object = var_118_object; // 0xbf8 Mov
	var_122_int = 4000; // 0xbf9 MovI
	func_2962(var_121_object, var_122_int); // 0xbfa NEW_2
	return 0; // 0xbfc Return
}


func_2297(var_0_bool)
{
	var_109_float = GetByIndex(var_0_bool, 0); // 0x8f9 PushE
	var_110_float = GetByIndex(var_0_bool, 2); // 0x8fa PushE
	RotateAsync(var_109_float, var_110_float); // 0x8fb Func
	return 0; // 0x8fd Return
}


func_2554(var_32_bool)
{
	var_33_bool = 0; var_34_bool = 0; // 0x9fa PushV
	IsLoaded(var_34_bool); // 0x9fb Func
	var_32_bool = var_34_bool; // 0x9fd Mov
	return 2; // 0x9fe Return
}


func_3324()
{
	var_42_object = Obj(); var_43_object = Obj(); // 0xcfc PushV
	var_44_int = 585; // 0xcfd PushI
	var_45_int = 2; // 0xcfe PushI
	var_46_int = 531046; // 0xcff PushI
	CreateDiaryEntry(var_43_object, var_44_int, var_45_int, var_46_int); // 0xd00 Func
	var_47_bool = 0; var_48_object = Obj(); var_49_int = 0; // 0xd02 PushV
	var_48_object = var_43_object; // 0xd03 Mov
	var_49_int = -1; // 0xd04 MovI
	func_3415(var_47_bool, var_48_object, var_49_int); // 0xd05 NEW_2
	return 2; // 0xd07 Return
}


func_3069()
{
	var_141_string = "playsound"; // 0xbfe PushS
	var_142_string = "givemoney"; // 0xbff PushS
	TriggerWorld(var_141_string, var_142_string); // 0xc00 Func
	return 0; // 0xc02 Return
}


func_2302(var_40_bool)
{
	var_41_object = Obj(); var_42_bool = 0; var_43_object = Obj(); var_44_bool = 0; // 0x8fe PushV
	var_45_string = "player"; // 0x8ff PushS
	FindActor(var_43_object, var_45_string); // 0x900 Func
	var_46_bool = var_43_object == 0; // 0x902 Not
	if(var_46_bool == 0) goto Label_2310; // 0x903 JumpB
	var_40_bool = 0; // 0x904 MovB
	return 4; // 0x905 Return
	
Label_2310:
	var_47_float = 0; var_48_object = Obj(); // 0x906 PushV
	var_48_object = var_43_object; // 0x907 Mov
	func_2520(var_48_object); // 0x908 NEW_2
	var_55_float = 90000.0; // 0x90a PushF
	var_56_bool = var_47_float > var_55_float; // 0x90b GT
	if(var_56_bool == 0) goto Label_2319; // 0x90c JumpB
	var_40_bool = 0; // 0x90d MovB
	return 4; // 0x90e Return
	
Label_2319:
	CanSee(var_44_bool, var_43_object); // 0x90f Func
	var_40_bool = var_44_bool; // 0x911 Mov
	return 4; // 0x912 Return
}


func_2559(var_123_bool, var_125_float)
{
	var_126_float = 0; var_127_cvector = CVector(0,0,0); var_128_cvector = CVector(0,0,0); var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0); var_131_cvector = CVector(0,0,0); var_132_cvector = CVector(0,0,0); var_133_bool = 0; var_134_bool = 0; var_135_float = 0; var_136_cvector = CVector(0,0,0); var_137_cvector = CVector(0,0,0); var_138_cvector = CVector(0,0,0); var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_bool = 0; var_143_bool = 0; // 0x9ff PushV
	GetPosition(var_136_cvector); // 0xa00 ObjFunc
	GetEyesHeight(var_135_float); // 0xa02 ObjFunc
	var_144_float = GetByIndex(var_136_cvector, 1); // 0xa04 PushE
	var_144_float = var_144_float + var_135_float; // 0xa05 Add2
	SetByIndex(var_136_cvector, 1) = var_144_float; // 0xa06 PopE
	GetPosition(var_137_cvector); // 0xa07 Func
	GetEyesHeight(var_135_float); // 0xa09 Func
	var_145_float = GetByIndex(var_137_cvector, 1); // 0xa0b PushE
	var_145_float = var_145_float + var_135_float; // 0xa0c Add2
	SetByIndex(var_137_cvector, 1) = var_145_float; // 0xa0d PopE
	var_138_cvector = var_136_cvector - var_137_cvector; // 0xa0e Sub2
	var_146_float = GetByIndex(var_138_cvector, 1); // 0xa0f PushE
	var_146_float = 0; // 0xa10 MovI
	SetByIndex(var_138_cvector, 1) = var_146_float; // 0xa11 PopE
	var_147_int = var_138_cvector | var_138_cvector; // 0xa12 Or
	var_148_float = sqrt(var_147_int); // 0xa13 Sqrt
	var_138_cvector = var_138_cvector / var_138_cvector; // 0xa14 Div2
	var_139_cvector = -var_138_cvector; // 0xa15 Neg2
	var_149_float = var_138_cvector * var_125_float; // 0xa16 Mult
	var_150_cvector = CVector(0,0,0); var_151_cvector = CVector(0,0,0); // 0xa17 PushV
	var_152_cvector = CVector(0.0, 1.0, 0.0); // 0xa18 PushVec
	var_151_cvector = var_139_cvector ^ var_152_cvector; // 0xa19 Xor2
	func_2930(var_150_cvector, var_151_cvector); // 0xa1a NEW_2
	var_158_int = 25; // 0xa1c PushI
	var_159_float = var_150_cvector * var_158_int; // 0xa1d Mult
	var_160_int = var_149_float + var_159_float; // 0xa1e Add
	var_161_cvector = CVector(0.0, 10.0, 0.0); // 0xa1f PushVec
	var_140_cvector = var_160_int - var_161_cvector; // 0xa20 Sub2
	var_141_cvector = var_137_cvector + var_140_cvector; // 0xa21 Add2
	IsOverrideActive(var_142_bool); // 0xa22 Func
	var_162_bool = var_142_bool; // 0xa24 Push
	if(var_162_bool == 0) goto Label_2600; // 0xa25 JumpB
	var_123_bool = 0; // 0xa26 MovB
	return 18; // 0xa27 Return
	
Label_2600:
	StopWorld(); // 0xa28 Func
	var_163_bool = 1; // 0xa2a PushB
	CameraTransit(var_141_cvector, var_139_cvector, var_163_bool); // 0xa2b Func
	var_164_float = GetByIndex(var_140_cvector, 0); // 0xa2d PushE
	var_165_float = GetByIndex(var_140_cvector, 2); // 0xa2e PushE
	Rotate(var_164_float, var_165_float); // 0xa2f Func
	var_166_bool = 0; // 0xa31 PushV
	func_3045(var_166_bool); // 0xa32 NEW_2
	if(var_166_bool == 0) goto Label_2614; // 0xa34 JumpB
	goto Label_2622; // 0xa35 Jump
	
Label_2622:
	CameraWaitForPlayFinish(); // 0xa3e Func
	ResumeWorld(); // 0xa40 Func
	var_123_bool = 1; // 0xa42 MovB
	return 18; // 0xa43 Return
	
Label_2614:
	var_167_string = "head"; // 0xa36 PushS
	HasAnimationTrack(var_143_bool, var_167_string); // 0xa37 Func
	var_168_bool = var_143_bool; // 0xa39 Push
	if(var_168_bool == 0) goto Label_2622; // 0xa3a JumpB
	var_169_string = "head"; // 0xa3b PushS
	LookAsyncCamera(var_169_string); // 0xa3c Func
}


