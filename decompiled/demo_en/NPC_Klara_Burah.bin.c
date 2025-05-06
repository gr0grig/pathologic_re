task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0xa7 PushI
	if(var_38_int == 0) goto Label_302; // 0xa8 JumpB
	func_3696(); // 0xaa NEW_2
	var_40_int = 26628; // 0xac PushI
	var_41_bool = var_37_cvector == var_40_int; // 0xad Eq
	if(var_41_bool == 0) goto Label_180; // 0xae JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0xaf PushV
	var_42_object = var_1_object; // 0xb0 MovT
	var_43_object = var_0_object; // 0xb1 MovT
	func_3936(); // 0xb2 NEW_2
	
Label_180:
	var_69_int = 26625; // 0xb4 PushI
	var_70_bool = var_36_bool == var_69_int; // 0xb5 Eq
	if(var_70_bool == 0) goto Label_208; // 0xb6 JumpB
	var_71_string = ""; // 0xb7 PushV
	var_71_string = "Neutral"; // 0xb8 MovS
	func_144(var_37_cvector, var_71_string); // 0xb9 NEW_2
	var_88_int = 525257; // 0xbb PushI
	SetMessage(var_88_int); // 0xbc TObjFunc
	ClearReplies(); // 0xbe TObjFunc
	var_89_bool = 0; var_90_object = Obj(); // 0xc0 PushV
	var_90_object = var_1_object; // 0xc1 MovT
	func_4180(var_90_object); // 0xc2 NEW_2
	if(var_89_bool == 0) goto Label_202; // 0xc4 JumpB
	var_97_int = 525258; // 0xc5 PushI
	var_98_int = 30607; // 0xc6 PushI
	var_99_int = 26626; // 0xc7 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0xc8 TObjFunc
	
Label_202:
	var_100_int = 525261; // 0xca PushI
	var_101_int = -1; // 0xcb PushI
	var_102_int = 26629; // 0xcc PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0xcd TObjFunc
	return 0; // 0xcf Return
	
Label_208:
	var_103_int = 30607; // 0xd0 PushI
	var_104_bool = var_36_bool == var_103_int; // 0xd1 Eq
	if(var_104_bool == 0) goto Label_231; // 0xd2 JumpB
	var_105_string = ""; // 0xd3 PushV
	var_105_string = "Doubt"; // 0xd4 MovS
	func_144(var_37_cvector, var_105_string); // 0xd5 NEW_2
	var_106_int = 529158; // 0xd7 PushI
	SetMessage(var_106_int); // 0xd8 TObjFunc
	ClearReplies(); // 0xda TObjFunc
	var_107_int = 529159; // 0xdc PushI
	var_108_int = 30609; // 0xdd PushI
	var_109_int = 30608; // 0xde PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0xdf TObjFunc
	var_110_int = 529161; // 0xe1 PushI
	var_111_int = 30611; // 0xe2 PushI
	var_112_int = 30610; // 0xe3 PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0xe4 TObjFunc
	return 0; // 0xe6 Return
	
Label_231:
	var_113_int = 30611; // 0xe7 PushI
	var_114_bool = var_36_bool == var_113_int; // 0xe8 Eq
	if(var_114_bool == 0) goto Label_249; // 0xe9 JumpB
	var_115_string = ""; // 0xea PushV
	var_115_string = "Sorrow"; // 0xeb MovS
	func_144(var_37_cvector, var_115_string); // 0xec NEW_2
	var_116_int = 529162; // 0xee PushI
	SetMessage(var_116_int); // 0xef TObjFunc
	ClearReplies(); // 0xf1 TObjFunc
	var_117_int = 529163; // 0xf3 PushI
	var_118_int = 26627; // 0xf4 PushI
	var_119_int = 30612; // 0xf5 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0xf6 TObjFunc
	return 0; // 0xf8 Return
	
Label_249:
	var_120_int = 30609; // 0xf9 PushI
	var_121_bool = var_36_bool == var_120_int; // 0xfa Eq
	if(var_121_bool == 0) goto Label_267; // 0xfb JumpB
	var_122_string = ""; // 0xfc PushV
	var_122_string = "Smile"; // 0xfd MovS
	func_144(var_37_cvector, var_122_string); // 0xfe NEW_2
	var_123_int = 529160; // 0x100 PushI
	SetMessage(var_123_int); // 0x101 TObjFunc
	ClearReplies(); // 0x103 TObjFunc
	var_124_int = 529164; // 0x105 PushI
	var_125_int = 26627; // 0x106 PushI
	var_126_int = 30613; // 0x107 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x108 TObjFunc
	return 0; // 0x10a Return
	
Label_267:
	var_127_int = 26627; // 0x10b PushI
	var_128_bool = var_36_bool == var_127_int; // 0x10c Eq
	if(var_128_bool == 0) goto Label_290; // 0x10d JumpB
	var_129_string = ""; // 0x10e PushV
	var_129_string = "Neutral"; // 0x10f MovS
	func_144(var_37_cvector, var_129_string); // 0x110 NEW_2
	var_130_int = 525259; // 0x112 PushI
	SetMessage(var_130_int); // 0x113 TObjFunc
	ClearReplies(); // 0x115 TObjFunc
	var_131_int = 525260; // 0x117 PushI
	var_132_int = -1; // 0x118 PushI
	var_133_int = 26628; // 0x119 PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x11a TObjFunc
	var_134_int = 529166; // 0x11c PushI
	var_135_int = -1; // 0x11d PushI
	var_136_int = 30616; // 0x11e PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x11f TObjFunc
	return 0; // 0x121 Return
	
Label_290:
	var_3_string = 1; // 0x122 TMovB
	var_137_bool = 0; // 0x123 PushV
	func_3886(var_137_bool); // 0x124 NEW_2
	if(var_137_bool == 0) goto Label_298; // 0x126 JumpB
	lshStopAnimation(); // 0x127 Func
	goto Label_300; // 0x129 Jump
	
Label_300:
	return 0; // 0x12c Return
	
Label_298:
	StopAnimation(); // 0x12a Func
	
Label_302:
	return 0; // 0x12e Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x1d1 PushI
	if(var_38_int == 0) goto Label_541; // 0x1d2 JumpB
	func_3696(); // 0x1d4 NEW_2
	var_40_int = 26827; // 0x1d6 PushI
	var_41_bool = var_36_bool == var_40_int; // 0x1d7 Eq
	if(var_41_bool == 0) goto Label_493; // 0x1d8 JumpB
	var_42_string = ""; // 0x1d9 PushV
	var_42_string = "Neutral"; // 0x1da MovS
	func_442(var_37_cvector, var_42_string); // 0x1db NEW_2
	var_59_int = 525471; // 0x1dd PushI
	SetMessage(var_59_int); // 0x1de TObjFunc
	ClearReplies(); // 0x1e0 TObjFunc
	var_60_int = 525472; // 0x1e2 PushI
	var_61_int = 27550; // 0x1e3 PushI
	var_62_int = 26828; // 0x1e4 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0x1e5 TObjFunc
	var_63_int = 526276; // 0x1e7 PushI
	var_64_int = 28085; // 0x1e8 PushI
	var_65_int = 27552; // 0x1e9 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0x1ea TObjFunc
	return 0; // 0x1ec Return
	
Label_493:
	var_66_int = 28085; // 0x1ed PushI
	var_67_bool = var_36_bool == var_66_int; // 0x1ee Eq
	if(var_67_bool == 0) goto Label_511; // 0x1ef JumpB
	var_68_string = ""; // 0x1f0 PushV
	var_68_string = "Neutral"; // 0x1f1 MovS
	func_442(var_37_cvector, var_68_string); // 0x1f2 NEW_2
	var_69_int = 526805; // 0x1f4 PushI
	SetMessage(var_69_int); // 0x1f5 TObjFunc
	ClearReplies(); // 0x1f7 TObjFunc
	var_70_int = 526806; // 0x1f9 PushI
	var_71_int = -1; // 0x1fa PushI
	var_72_int = 28086; // 0x1fb PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0x1fc TObjFunc
	return 0; // 0x1fe Return
	
Label_511:
	var_73_int = 27550; // 0x1ff PushI
	var_74_bool = var_36_bool == var_73_int; // 0x200 Eq
	if(var_74_bool == 0) goto Label_529; // 0x201 JumpB
	var_75_string = ""; // 0x202 PushV
	var_75_string = "Neutral"; // 0x203 MovS
	func_442(var_37_cvector, var_75_string); // 0x204 NEW_2
	var_76_int = 526274; // 0x206 PushI
	SetMessage(var_76_int); // 0x207 TObjFunc
	ClearReplies(); // 0x209 TObjFunc
	var_77_int = 526275; // 0x20b PushI
	var_78_int = -1; // 0x20c PushI
	var_79_int = 27551; // 0x20d PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0x20e TObjFunc
	return 0; // 0x210 Return
	
Label_529:
	var_3_string = 1; // 0x211 TMovB
	var_80_bool = 0; // 0x212 PushV
	func_3886(var_80_bool); // 0x213 NEW_2
	if(var_80_bool == 0) goto Label_537; // 0x215 JumpB
	lshStopAnimation(); // 0x216 Func
	goto Label_539; // 0x218 Jump
	
Label_539:
	return 0; // 0x21b Return
	
Label_537:
	StopAnimation(); // 0x219 Func
	
Label_541:
	return 0; // 0x21d Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x318 PushI
	if(var_38_int == 0) goto Label_1386; // 0x319 JumpB
	func_3696(); // 0x31b NEW_2
	var_40_int = 27656; // 0x31d PushI
	var_41_bool = var_37_cvector == var_40_int; // 0x31e Eq
	if(var_41_bool == 0) goto Label_820; // 0x31f JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x320 PushV
	var_42_object = var_1_object; // 0x321 MovT
	var_43_object = var_0_object; // 0x322 MovT
	func_3996(); // 0x323 NEW_2
	var_105_object = Obj(); var_106_object = Obj(); // 0x325 PushV
	var_105_object = var_1_object; // 0x326 MovT
	var_106_object = var_0_object; // 0x327 MovT
	func_4079(); // 0x328 NEW_2
	var_109_object = Obj(); var_110_object = Obj(); // 0x32a PushV
	var_109_object = var_1_object; // 0x32b MovT
	var_110_object = var_0_object; // 0x32c MovT
	func_4033(var_110_object); // 0x32d NEW_2
	var_133_object = Obj(); var_134_object = Obj(); // 0x32f PushV
	var_133_object = var_1_object; // 0x330 MovT
	var_134_object = var_0_object; // 0x331 MovT
	func_3888(); // 0x332 NEW_2
	
Label_820:
	var_159_int = 27454; // 0x334 PushI
	var_160_bool = var_37_cvector == var_159_int; // 0x335 Eq
	if(var_160_bool == 0) goto Label_828; // 0x336 JumpB
	var_161_object = Obj(); var_162_object = Obj(); // 0x337 PushV
	var_161_object = var_1_object; // 0x338 MovT
	var_162_object = var_0_object; // 0x339 MovT
	func_3977(); // 0x33a NEW_2
	
Label_828:
	var_165_int = 27456; // 0x33c PushI
	var_166_bool = var_37_cvector == var_165_int; // 0x33d Eq
	if(var_166_bool == 0) goto Label_836; // 0x33e JumpB
	var_167_object = Obj(); var_168_object = Obj(); // 0x33f PushV
	var_167_object = var_1_object; // 0x340 MovT
	var_168_object = var_0_object; // 0x341 MovT
	func_3945(); // 0x342 NEW_2
	
Label_836:
	var_188_int = 27460; // 0x344 PushI
	var_189_bool = var_37_cvector == var_188_int; // 0x345 Eq
	if(var_189_bool == 0) goto Label_844; // 0x346 JumpB
	var_190_object = Obj(); var_191_object = Obj(); // 0x347 PushV
	var_190_object = var_1_object; // 0x348 MovT
	var_191_object = var_0_object; // 0x349 MovT
	func_3983(); // 0x34a NEW_2
	
Label_844:
	var_206_int = 27660; // 0x34c PushI
	var_207_bool = var_37_cvector == var_206_int; // 0x34d Eq
	if(var_207_bool == 0) goto Label_867; // 0x34e JumpB
	var_208_object = Obj(); var_209_object = Obj(); // 0x34f PushV
	var_208_object = var_1_object; // 0x350 MovT
	var_209_object = var_0_object; // 0x351 MovT
	func_3996(); // 0x352 NEW_2
	var_210_object = Obj(); var_211_object = Obj(); // 0x354 PushV
	var_210_object = var_1_object; // 0x355 MovT
	var_211_object = var_0_object; // 0x356 MovT
	func_4033(var_211_object); // 0x357 NEW_2
	var_212_object = Obj(); var_213_object = Obj(); // 0x359 PushV
	var_212_object = var_1_object; // 0x35a MovT
	var_213_object = var_0_object; // 0x35b MovT
	func_4079(); // 0x35c NEW_2
	var_214_object = Obj(); var_215_object = Obj(); // 0x35e PushV
	var_214_object = var_1_object; // 0x35f MovT
	var_215_object = var_0_object; // 0x360 MovT
	func_3888(); // 0x361 NEW_2
	
Label_867:
	var_216_int = 27669; // 0x363 PushI
	var_217_bool = var_37_cvector == var_216_int; // 0x364 Eq
	if(var_217_bool == 0) goto Label_885; // 0x365 JumpB
	var_218_object = Obj(); var_219_object = Obj(); // 0x366 PushV
	var_218_object = var_1_object; // 0x367 MovT
	var_219_object = var_0_object; // 0x368 MovT
	func_4044(); // 0x369 NEW_2
	var_231_object = Obj(); var_232_object = Obj(); // 0x36b PushV
	var_231_object = var_1_object; // 0x36c MovT
	var_232_object = var_0_object; // 0x36d MovT
	func_4054(var_232_object); // 0x36e NEW_2
	var_249_object = Obj(); var_250_object = Obj(); // 0x370 PushV
	var_249_object = var_1_object; // 0x371 MovT
	var_250_object = var_0_object; // 0x372 MovT
	func_4073(); // 0x373 NEW_2
	
Label_885:
	var_253_int = 44880; // 0x375 PushI
	var_254_bool = var_37_cvector == var_253_int; // 0x376 Eq
	if(var_254_bool == 0) goto Label_893; // 0x377 JumpB
	var_255_object = Obj(); var_256_object = Obj(); // 0x378 PushV
	var_255_object = var_1_object; // 0x379 MovT
	var_256_object = var_0_object; // 0x37a MovT
	func_4044(); // 0x37b NEW_2
	
Label_893:
	var_257_int = 27653; // 0x37d PushI
	var_258_bool = var_36_bool == var_257_int; // 0x37e Eq
	if(var_258_bool == 0) goto Label_1004; // 0x37f JumpB
	var_259_bool = 0; var_260_object = Obj(); // 0x380 PushV
	var_260_object = var_1_object; // 0x381 MovT
	func_4239(var_260_object); // 0x382 NEW_2
	if(var_259_bool == 0) goto Label_926; // 0x384 JumpB
	var_265_object = Obj(); var_266_object = Obj(); // 0x385 PushV
	var_265_object = var_1_object; // 0x386 MovT
	var_266_object = var_0_object; // 0x387 MovT
	func_4027(); // 0x388 NEW_2
	var_269_string = ""; // 0x38a PushV
	var_269_string = "Neutral"; // 0x38b MovS
	func_769(var_37_cvector, var_269_string); // 0x38c NEW_2
	var_286_int = 526373; // 0x38e PushI
	SetMessage(var_286_int); // 0x38f TObjFunc
	ClearReplies(); // 0x391 TObjFunc
	var_287_int = 526374; // 0x393 PushI
	var_288_int = 27655; // 0x394 PushI
	var_289_int = 27654; // 0x395 PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x396 TObjFunc
	var_290_int = 528676; // 0x398 PushI
	var_291_int = 27655; // 0x399 PushI
	var_292_int = 30089; // 0x39a PushI
	AddReply(var_290_int, var_291_int, var_292_int); // 0x39b TObjFunc
	return 0; // 0x39d Return
	
Label_926:
	var_293_string = ""; // 0x39e PushV
	var_293_string = "Neutral"; // 0x39f MovS
	func_769(var_37_cvector, var_293_string); // 0x3a0 NEW_2
	var_294_int = 526173; // 0x3a2 PushI
	SetMessage(var_294_int); // 0x3a3 TObjFunc
	ClearReplies(); // 0x3a5 TObjFunc
	var_295_bool = 0; // 0x3a7 PushV
	var_295_bool = 0; // 0x3a8 MovB
	var_296_bool = 0; var_297_object = Obj(); // 0x3a9 PushV
	var_297_object = var_1_object; // 0x3aa MovT
	func_4203(var_297_object); // 0x3ab NEW_2
	if(var_296_bool == 0) goto Label_948; // 0x3ad JumpB
	var_302_bool = 0; var_303_object = Obj(); // 0x3ae PushV
	var_303_object = var_1_object; // 0x3af MovT
	func_4215(var_303_object); // 0x3b0 NEW_2
	if(var_302_bool == 0) goto Label_948; // 0x3b2 JumpB
	var_295_bool = 1; // 0x3b3 MovB
	
Label_948:
	if(var_295_bool == 0) goto Label_954; // 0x3b4 JumpB
	var_308_int = 526174; // 0x3b5 PushI
	var_309_int = 27455; // 0x3b6 PushI
	var_310_int = 27454; // 0x3b7 PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0x3b8 TObjFunc
	
Label_954:
	var_311_bool = 0; // 0x3ba PushV
	var_311_bool = 0; // 0x3bb MovB
	var_312_bool = 0; var_313_object = Obj(); // 0x3bc PushV
	var_313_object = var_1_object; // 0x3bd MovT
	func_4203(var_313_object); // 0x3be NEW_2
	if(var_312_bool == 0) goto Label_967; // 0x3c0 JumpB
	var_314_bool = 0; var_315_object = Obj(); // 0x3c1 PushV
	var_315_object = var_1_object; // 0x3c2 MovT
	func_4192(var_314_bool, var_315_object); // 0x3c3 NEW_2
	if(var_314_bool == 0) goto Label_967; // 0x3c5 JumpB
	var_311_bool = 1; // 0x3c6 MovB
	
Label_967:
	if(var_311_bool == 0) goto Label_973; // 0x3c7 JumpB
	var_323_int = 526178; // 0x3c8 PushI
	var_324_int = 27459; // 0x3c9 PushI
	var_325_int = 27458; // 0x3ca PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0x3cb TObjFunc
	
Label_973:
	var_326_bool = 0; var_327_object = Obj(); // 0x3cd PushV
	var_327_object = var_1_object; // 0x3ce MovT
	func_4227(var_327_object); // 0x3cf NEW_2
	if(var_326_bool == 0) goto Label_983; // 0x3d1 JumpB
	var_332_int = 526378; // 0x3d2 PushI
	var_333_int = 27659; // 0x3d3 PushI
	var_334_int = 27658; // 0x3d4 PushI
	AddReply(var_332_int, var_333_int, var_334_int); // 0x3d5 TObjFunc
	
Label_983:
	var_335_bool = 0; var_336_object = Obj(); // 0x3d7 PushV
	var_336_object = var_1_object; // 0x3d8 MovT
	func_4251(var_336_object); // 0x3d9 NEW_2
	if(var_335_bool == 0) goto Label_993; // 0x3db JumpB
	var_341_int = 526387; // 0x3dc PushI
	var_342_int = 44876; // 0x3dd PushI
	var_343_int = 27667; // 0x3de PushI
	AddReply(var_341_int, var_342_int, var_343_int); // 0x3df TObjFunc
	
Label_993:
	var_344_int = 526181; // 0x3e1 PushI
	var_345_int = -1; // 0x3e2 PushI
	var_346_int = 27461; // 0x3e3 PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0x3e4 TObjFunc
	var_347_int = 528675; // 0x3e6 PushI
	var_348_int = -1; // 0x3e7 PushI
	var_349_int = 30088; // 0x3e8 PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0x3e9 TObjFunc
	return 0; // 0x3eb Return
	
Label_1004:
	var_350_int = 44876; // 0x3ec PushI
	var_351_bool = var_36_bool == var_350_int; // 0x3ed Eq
	if(var_351_bool == 0) goto Label_1027; // 0x3ee JumpB
	var_352_string = ""; // 0x3ef PushV
	var_352_string = "Sorrow"; // 0x3f0 MovS
	func_769(var_37_cvector, var_352_string); // 0x3f1 NEW_2
	var_353_int = 542490; // 0x3f3 PushI
	SetMessage(var_353_int); // 0x3f4 TObjFunc
	ClearReplies(); // 0x3f6 TObjFunc
	var_354_int = 542491; // 0x3f8 PushI
	var_355_int = 27668; // 0x3f9 PushI
	var_356_int = 44877; // 0x3fa PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x3fb TObjFunc
	var_357_int = 542492; // 0x3fd PushI
	var_358_int = 27668; // 0x3fe PushI
	var_359_int = 44878; // 0x3ff PushI
	AddReply(var_357_int, var_358_int, var_359_int); // 0x400 TObjFunc
	return 0; // 0x402 Return
	
Label_1027:
	var_360_int = 27668; // 0x403 PushI
	var_361_bool = var_36_bool == var_360_int; // 0x404 Eq
	if(var_361_bool == 0) goto Label_1050; // 0x405 JumpB
	var_362_string = ""; // 0x406 PushV
	var_362_string = "Smile"; // 0x407 MovS
	func_769(var_37_cvector, var_362_string); // 0x408 NEW_2
	var_363_int = 526388; // 0x40a PushI
	SetMessage(var_363_int); // 0x40b TObjFunc
	ClearReplies(); // 0x40d TObjFunc
	var_364_int = 526389; // 0x40f PushI
	var_365_int = -1; // 0x410 PushI
	var_366_int = 27669; // 0x411 PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0x412 TObjFunc
	var_367_int = 542493; // 0x414 PushI
	var_368_int = -1; // 0x415 PushI
	var_369_int = 44880; // 0x416 PushI
	AddReply(var_367_int, var_368_int, var_369_int); // 0x417 TObjFunc
	return 0; // 0x419 Return
	
Label_1050:
	var_370_int = 27659; // 0x41a PushI
	var_371_bool = var_36_bool == var_370_int; // 0x41b Eq
	if(var_371_bool == 0) goto Label_1068; // 0x41c JumpB
	var_372_string = ""; // 0x41d PushV
	var_372_string = "Neutral"; // 0x41e MovS
	func_769(var_37_cvector, var_372_string); // 0x41f NEW_2
	var_373_int = 526379; // 0x421 PushI
	SetMessage(var_373_int); // 0x422 TObjFunc
	ClearReplies(); // 0x424 TObjFunc
	var_374_int = 526380; // 0x426 PushI
	var_375_int = -1; // 0x427 PushI
	var_376_int = 27660; // 0x428 PushI
	AddReply(var_374_int, var_375_int, var_376_int); // 0x429 TObjFunc
	return 0; // 0x42b Return
	
Label_1068:
	var_377_int = 27459; // 0x42c PushI
	var_378_bool = var_36_bool == var_377_int; // 0x42d Eq
	if(var_378_bool == 0) goto Label_1086; // 0x42e JumpB
	var_379_string = ""; // 0x42f PushV
	var_379_string = "Neutral"; // 0x430 MovS
	func_769(var_37_cvector, var_379_string); // 0x431 NEW_2
	var_380_int = 526179; // 0x433 PushI
	SetMessage(var_380_int); // 0x434 TObjFunc
	ClearReplies(); // 0x436 TObjFunc
	var_381_int = 528687; // 0x438 PushI
	var_382_int = 30103; // 0x439 PushI
	var_383_int = 30102; // 0x43a PushI
	AddReply(var_381_int, var_382_int, var_383_int); // 0x43b TObjFunc
	return 0; // 0x43d Return
	
Label_1086:
	var_384_int = 30103; // 0x43e PushI
	var_385_bool = var_36_bool == var_384_int; // 0x43f Eq
	if(var_385_bool == 0) goto Label_1104; // 0x440 JumpB
	var_386_string = ""; // 0x441 PushV
	var_386_string = "Doubt"; // 0x442 MovS
	func_769(var_37_cvector, var_386_string); // 0x443 NEW_2
	var_387_int = 528688; // 0x445 PushI
	SetMessage(var_387_int); // 0x446 TObjFunc
	ClearReplies(); // 0x448 TObjFunc
	var_388_int = 528689; // 0x44a PushI
	var_389_int = 30105; // 0x44b PushI
	var_390_int = 30104; // 0x44c PushI
	AddReply(var_388_int, var_389_int, var_390_int); // 0x44d TObjFunc
	return 0; // 0x44f Return
	
Label_1104:
	var_391_int = 30105; // 0x450 PushI
	var_392_bool = var_36_bool == var_391_int; // 0x451 Eq
	if(var_392_bool == 0) goto Label_1127; // 0x452 JumpB
	var_393_string = ""; // 0x453 PushV
	var_393_string = "Sorrow"; // 0x454 MovS
	func_769(var_37_cvector, var_393_string); // 0x455 NEW_2
	var_394_int = 528690; // 0x457 PushI
	SetMessage(var_394_int); // 0x458 TObjFunc
	ClearReplies(); // 0x45a TObjFunc
	var_395_int = 528691; // 0x45c PushI
	var_396_int = 30107; // 0x45d PushI
	var_397_int = 30106; // 0x45e PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0x45f TObjFunc
	var_398_int = 528697; // 0x461 PushI
	var_399_int = 30113; // 0x462 PushI
	var_400_int = 30112; // 0x463 PushI
	AddReply(var_398_int, var_399_int, var_400_int); // 0x464 TObjFunc
	return 0; // 0x466 Return
	
Label_1127:
	var_401_int = 30113; // 0x467 PushI
	var_402_bool = var_36_bool == var_401_int; // 0x468 Eq
	if(var_402_bool == 0) goto Label_1145; // 0x469 JumpB
	var_403_string = ""; // 0x46a PushV
	var_403_string = "Neutral"; // 0x46b MovS
	func_769(var_37_cvector, var_403_string); // 0x46c NEW_2
	var_404_int = 528698; // 0x46e PushI
	SetMessage(var_404_int); // 0x46f TObjFunc
	ClearReplies(); // 0x471 TObjFunc
	var_405_int = 528699; // 0x473 PushI
	var_406_int = 30107; // 0x474 PushI
	var_407_int = 30114; // 0x475 PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0x476 TObjFunc
	return 0; // 0x478 Return
	
Label_1145:
	var_408_int = 30107; // 0x479 PushI
	var_409_bool = var_36_bool == var_408_int; // 0x47a Eq
	if(var_409_bool == 0) goto Label_1163; // 0x47b JumpB
	var_410_string = ""; // 0x47c PushV
	var_410_string = "Neutral"; // 0x47d MovS
	func_769(var_37_cvector, var_410_string); // 0x47e NEW_2
	var_411_int = 528692; // 0x480 PushI
	SetMessage(var_411_int); // 0x481 TObjFunc
	ClearReplies(); // 0x483 TObjFunc
	var_412_int = 528693; // 0x485 PushI
	var_413_int = 30109; // 0x486 PushI
	var_414_int = 30108; // 0x487 PushI
	AddReply(var_412_int, var_413_int, var_414_int); // 0x488 TObjFunc
	return 0; // 0x48a Return
	
Label_1163:
	var_415_int = 30109; // 0x48b PushI
	var_416_bool = var_36_bool == var_415_int; // 0x48c Eq
	if(var_416_bool == 0) goto Label_1186; // 0x48d JumpB
	var_417_string = ""; // 0x48e PushV
	var_417_string = "Doubt"; // 0x48f MovS
	func_769(var_37_cvector, var_417_string); // 0x490 NEW_2
	var_418_int = 528694; // 0x492 PushI
	SetMessage(var_418_int); // 0x493 TObjFunc
	ClearReplies(); // 0x495 TObjFunc
	var_419_int = 528702; // 0x497 PushI
	var_420_int = 30118; // 0x498 PushI
	var_421_int = 30117; // 0x499 PushI
	AddReply(var_419_int, var_420_int, var_421_int); // 0x49a TObjFunc
	var_422_int = 528700; // 0x49c PushI
	var_423_int = 30116; // 0x49d PushI
	var_424_int = 30115; // 0x49e PushI
	AddReply(var_422_int, var_423_int, var_424_int); // 0x49f TObjFunc
	return 0; // 0x4a1 Return
	
Label_1186:
	var_425_int = 30116; // 0x4a2 PushI
	var_426_bool = var_36_bool == var_425_int; // 0x4a3 Eq
	if(var_426_bool == 0) goto Label_1204; // 0x4a4 JumpB
	var_427_string = ""; // 0x4a5 PushV
	var_427_string = "Neutral"; // 0x4a6 MovS
	func_769(var_37_cvector, var_427_string); // 0x4a7 NEW_2
	var_428_int = 528701; // 0x4a9 PushI
	SetMessage(var_428_int); // 0x4aa TObjFunc
	ClearReplies(); // 0x4ac TObjFunc
	var_429_int = 528704; // 0x4ae PushI
	var_430_int = 30118; // 0x4af PushI
	var_431_int = 30119; // 0x4b0 PushI
	AddReply(var_429_int, var_430_int, var_431_int); // 0x4b1 TObjFunc
	return 0; // 0x4b3 Return
	
Label_1204:
	var_432_int = 30118; // 0x4b4 PushI
	var_433_bool = var_36_bool == var_432_int; // 0x4b5 Eq
	if(var_433_bool == 0) goto Label_1222; // 0x4b6 JumpB
	var_434_string = ""; // 0x4b7 PushV
	var_434_string = "Doubt"; // 0x4b8 MovS
	func_769(var_37_cvector, var_434_string); // 0x4b9 NEW_2
	var_435_int = 528703; // 0x4bb PushI
	SetMessage(var_435_int); // 0x4bc TObjFunc
	ClearReplies(); // 0x4be TObjFunc
	var_436_int = 528695; // 0x4c0 PushI
	var_437_int = 30111; // 0x4c1 PushI
	var_438_int = 30110; // 0x4c2 PushI
	AddReply(var_436_int, var_437_int, var_438_int); // 0x4c3 TObjFunc
	return 0; // 0x4c5 Return
	
Label_1222:
	var_439_int = 30111; // 0x4c6 PushI
	var_440_bool = var_36_bool == var_439_int; // 0x4c7 Eq
	if(var_440_bool == 0) goto Label_1240; // 0x4c8 JumpB
	var_441_string = ""; // 0x4c9 PushV
	var_441_string = "Doubt"; // 0x4ca MovS
	func_769(var_37_cvector, var_441_string); // 0x4cb NEW_2
	var_442_int = 528696; // 0x4cd PushI
	SetMessage(var_442_int); // 0x4ce TObjFunc
	ClearReplies(); // 0x4d0 TObjFunc
	var_443_int = 526180; // 0x4d2 PushI
	var_444_int = -1; // 0x4d3 PushI
	var_445_int = 27460; // 0x4d4 PushI
	AddReply(var_443_int, var_444_int, var_445_int); // 0x4d5 TObjFunc
	return 0; // 0x4d7 Return
	
Label_1240:
	var_446_int = 27455; // 0x4d8 PushI
	var_447_bool = var_36_bool == var_446_int; // 0x4d9 Eq
	if(var_447_bool == 0) goto Label_1258; // 0x4da JumpB
	var_448_string = ""; // 0x4db PushV
	var_448_string = "Sorrow"; // 0x4dc MovS
	func_769(var_37_cvector, var_448_string); // 0x4dd NEW_2
	var_449_int = 526175; // 0x4df PushI
	SetMessage(var_449_int); // 0x4e0 TObjFunc
	ClearReplies(); // 0x4e2 TObjFunc
	var_450_int = 528685; // 0x4e4 PushI
	var_451_int = 30101; // 0x4e5 PushI
	var_452_int = 30100; // 0x4e6 PushI
	AddReply(var_450_int, var_451_int, var_452_int); // 0x4e7 TObjFunc
	return 0; // 0x4e9 Return
	
Label_1258:
	var_453_int = 30101; // 0x4ea PushI
	var_454_bool = var_36_bool == var_453_int; // 0x4eb Eq
	if(var_454_bool == 0) goto Label_1292; // 0x4ec JumpB
	var_455_string = ""; // 0x4ed PushV
	var_455_string = "Sorrow"; // 0x4ee MovS
	func_769(var_37_cvector, var_455_string); // 0x4ef NEW_2
	var_456_int = 528686; // 0x4f1 PushI
	SetMessage(var_456_int); // 0x4f2 TObjFunc
	ClearReplies(); // 0x4f4 TObjFunc
	var_457_bool = 0; var_458_object = Obj(); // 0x4f6 PushV
	var_458_object = var_1_object; // 0x4f7 MovT
	func_4192(var_457_bool, var_458_object); // 0x4f8 NEW_2
	var_459_bool = var_457_bool == 0; // 0x4fa Not
	if(var_459_bool == 0) goto Label_1281; // 0x4fb JumpB
	var_460_int = 526176; // 0x4fc PushI
	var_461_int = -1; // 0x4fd PushI
	var_462_int = 27456; // 0x4fe PushI
	AddReply(var_460_int, var_461_int, var_462_int); // 0x4ff TObjFunc
	
Label_1281:
	var_463_bool = 0; var_464_object = Obj(); // 0x501 PushV
	var_464_object = var_1_object; // 0x502 MovT
	func_4192(var_463_bool, var_464_object); // 0x503 NEW_2
	if(var_463_bool == 0) goto Label_1291; // 0x505 JumpB
	var_465_int = 526177; // 0x506 PushI
	var_466_int = 27459; // 0x507 PushI
	var_467_int = 27457; // 0x508 PushI
	AddReply(var_465_int, var_466_int, var_467_int); // 0x509 TObjFunc
	
Label_1291:
	return 0; // 0x50b Return
	
Label_1292:
	var_468_int = 27655; // 0x50c PushI
	var_469_bool = var_36_bool == var_468_int; // 0x50d Eq
	if(var_469_bool == 0) goto Label_1310; // 0x50e JumpB
	var_470_string = ""; // 0x50f PushV
	var_470_string = "Neutral"; // 0x510 MovS
	func_769(var_37_cvector, var_470_string); // 0x511 NEW_2
	var_471_int = 526375; // 0x513 PushI
	SetMessage(var_471_int); // 0x514 TObjFunc
	ClearReplies(); // 0x516 TObjFunc
	var_472_int = 528677; // 0x518 PushI
	var_473_int = 30092; // 0x519 PushI
	var_474_int = 30091; // 0x51a PushI
	AddReply(var_472_int, var_473_int, var_474_int); // 0x51b TObjFunc
	return 0; // 0x51d Return
	
Label_1310:
	var_475_int = 30092; // 0x51e PushI
	var_476_bool = var_36_bool == var_475_int; // 0x51f Eq
	if(var_476_bool == 0) goto Label_1333; // 0x520 JumpB
	var_477_string = ""; // 0x521 PushV
	var_477_string = "Doubt"; // 0x522 MovS
	func_769(var_37_cvector, var_477_string); // 0x523 NEW_2
	var_478_int = 528678; // 0x525 PushI
	SetMessage(var_478_int); // 0x526 TObjFunc
	ClearReplies(); // 0x528 TObjFunc
	var_479_int = 528679; // 0x52a PushI
	var_480_int = 30094; // 0x52b PushI
	var_481_int = 30093; // 0x52c PushI
	AddReply(var_479_int, var_480_int, var_481_int); // 0x52d TObjFunc
	var_482_int = 528681; // 0x52f PushI
	var_483_int = 30094; // 0x530 PushI
	var_484_int = 30095; // 0x531 PushI
	AddReply(var_482_int, var_483_int, var_484_int); // 0x532 TObjFunc
	return 0; // 0x534 Return
	
Label_1333:
	var_485_int = 30094; // 0x535 PushI
	var_486_bool = var_36_bool == var_485_int; // 0x536 Eq
	if(var_486_bool == 0) goto Label_1351; // 0x537 JumpB
	var_487_string = ""; // 0x538 PushV
	var_487_string = "Doubt"; // 0x539 MovS
	func_769(var_37_cvector, var_487_string); // 0x53a NEW_2
	var_488_int = 528680; // 0x53c PushI
	SetMessage(var_488_int); // 0x53d TObjFunc
	ClearReplies(); // 0x53f TObjFunc
	var_489_int = 528682; // 0x541 PushI
	var_490_int = 30098; // 0x542 PushI
	var_491_int = 30097; // 0x543 PushI
	AddReply(var_489_int, var_490_int, var_491_int); // 0x544 TObjFunc
	return 0; // 0x546 Return
	
Label_1351:
	var_492_int = 30098; // 0x547 PushI
	var_493_bool = var_36_bool == var_492_int; // 0x548 Eq
	if(var_493_bool == 0) goto Label_1374; // 0x549 JumpB
	var_494_string = ""; // 0x54a PushV
	var_494_string = "Neutral"; // 0x54b MovS
	func_769(var_37_cvector, var_494_string); // 0x54c NEW_2
	var_495_int = 528683; // 0x54e PushI
	SetMessage(var_495_int); // 0x54f TObjFunc
	ClearReplies(); // 0x551 TObjFunc
	var_496_int = 526376; // 0x553 PushI
	var_497_int = -1; // 0x554 PushI
	var_498_int = 27656; // 0x555 PushI
	AddReply(var_496_int, var_497_int, var_498_int); // 0x556 TObjFunc
	var_499_int = 526377; // 0x558 PushI
	var_500_int = -1; // 0x559 PushI
	var_501_int = 27657; // 0x55a PushI
	AddReply(var_499_int, var_500_int, var_501_int); // 0x55b TObjFunc
	return 0; // 0x55d Return
	
Label_1374:
	var_3_string = 1; // 0x55e TMovB
	var_502_bool = 0; // 0x55f PushV
	func_3886(var_502_bool); // 0x560 NEW_2
	if(var_502_bool == 0) goto Label_1382; // 0x562 JumpB
	lshStopAnimation(); // 0x563 Func
	goto Label_1384; // 0x565 Jump
	
Label_1384:
	return 0; // 0x568 Return
	
Label_1382:
	StopAnimation(); // 0x566 Func
	
Label_1386:
	return 0; // 0x56a Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x617 PushI
	if(var_38_int == 0) goto Label_1763; // 0x618 JumpB
	func_3696(); // 0x61a NEW_2
	var_40_int = 28885; // 0x61c PushI
	var_41_bool = var_37_cvector == var_40_int; // 0x61d Eq
	if(var_41_bool == 0) goto Label_1577; // 0x61e JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x61f PushV
	var_42_object = var_1_object; // 0x620 MovT
	var_43_object = var_0_object; // 0x621 MovT
	func_4064(); // 0x622 NEW_2
	var_69_object = Obj(); var_70_object = Obj(); // 0x624 PushV
	var_69_object = var_1_object; // 0x625 MovT
	var_70_object = var_0_object; // 0x626 MovT
	func_3904(); // 0x627 NEW_2
	
Label_1577:
	var_81_int = 28512; // 0x629 PushI
	var_82_bool = var_36_bool == var_81_int; // 0x62a Eq
	if(var_82_bool == 0) goto Label_1610; // 0x62b JumpB
	var_83_string = ""; // 0x62c PushV
	var_83_string = "Neutral"; // 0x62d MovS
	func_1536(var_37_cvector, var_83_string); // 0x62e NEW_2
	var_100_int = 527204; // 0x630 PushI
	SetMessage(var_100_int); // 0x631 TObjFunc
	ClearReplies(); // 0x633 TObjFunc
	var_101_bool = 0; var_102_object = Obj(); // 0x635 PushV
	var_102_object = var_1_object; // 0x636 MovT
	func_4263(var_102_object); // 0x637 NEW_2
	if(var_101_bool == 0) goto Label_1599; // 0x639 JumpB
	var_109_int = 527205; // 0x63a PushI
	var_110_int = 28514; // 0x63b PushI
	var_111_int = 28513; // 0x63c PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x63d TObjFunc
	
Label_1599:
	var_112_int = 527210; // 0x63f PushI
	var_113_int = -1; // 0x640 PushI
	var_114_int = 28518; // 0x641 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x642 TObjFunc
	var_115_int = 527533; // 0x644 PushI
	var_116_int = -1; // 0x645 PushI
	var_117_int = 28871; // 0x646 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x647 TObjFunc
	return 0; // 0x649 Return
	
Label_1610:
	var_118_int = 28514; // 0x64a PushI
	var_119_bool = var_36_bool == var_118_int; // 0x64b Eq
	if(var_119_bool == 0) goto Label_1628; // 0x64c JumpB
	var_120_string = ""; // 0x64d PushV
	var_120_string = "Sorrow"; // 0x64e MovS
	func_1536(var_37_cvector, var_120_string); // 0x64f NEW_2
	var_121_int = 527206; // 0x651 PushI
	SetMessage(var_121_int); // 0x652 TObjFunc
	ClearReplies(); // 0x654 TObjFunc
	var_122_int = 527207; // 0x656 PushI
	var_123_int = 28516; // 0x657 PushI
	var_124_int = 28515; // 0x658 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x659 TObjFunc
	return 0; // 0x65b Return
	
Label_1628:
	var_125_int = 28516; // 0x65c PushI
	var_126_bool = var_36_bool == var_125_int; // 0x65d Eq
	if(var_126_bool == 0) goto Label_1651; // 0x65e JumpB
	var_127_string = ""; // 0x65f PushV
	var_127_string = "Doubt"; // 0x660 MovS
	func_1536(var_37_cvector, var_127_string); // 0x661 NEW_2
	var_128_int = 527208; // 0x663 PushI
	SetMessage(var_128_int); // 0x664 TObjFunc
	ClearReplies(); // 0x666 TObjFunc
	var_129_int = 527534; // 0x668 PushI
	var_130_int = 28874; // 0x669 PushI
	var_131_int = 28872; // 0x66a PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x66b TObjFunc
	var_132_int = 527535; // 0x66d PushI
	var_133_int = 28874; // 0x66e PushI
	var_134_int = 28873; // 0x66f PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x670 TObjFunc
	return 0; // 0x672 Return
	
Label_1651:
	var_135_int = 28874; // 0x673 PushI
	var_136_bool = var_36_bool == var_135_int; // 0x674 Eq
	if(var_136_bool == 0) goto Label_1674; // 0x675 JumpB
	var_137_string = ""; // 0x676 PushV
	var_137_string = "Doubt"; // 0x677 MovS
	func_1536(var_37_cvector, var_137_string); // 0x678 NEW_2
	var_138_int = 527536; // 0x67a PushI
	SetMessage(var_138_int); // 0x67b TObjFunc
	ClearReplies(); // 0x67d TObjFunc
	var_139_int = 527537; // 0x67f PushI
	var_140_int = 28876; // 0x680 PushI
	var_141_int = 28875; // 0x681 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x682 TObjFunc
	var_142_int = 527539; // 0x684 PushI
	var_143_int = 28876; // 0x685 PushI
	var_144_int = 28878; // 0x686 PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x687 TObjFunc
	return 0; // 0x689 Return
	
Label_1674:
	var_145_int = 28876; // 0x68a PushI
	var_146_bool = var_36_bool == var_145_int; // 0x68b Eq
	if(var_146_bool == 0) goto Label_1692; // 0x68c JumpB
	var_147_string = ""; // 0x68d PushV
	var_147_string = "Doubt"; // 0x68e MovS
	func_1536(var_37_cvector, var_147_string); // 0x68f NEW_2
	var_148_int = 527538; // 0x691 PushI
	SetMessage(var_148_int); // 0x692 TObjFunc
	ClearReplies(); // 0x694 TObjFunc
	var_149_int = 527540; // 0x696 PushI
	var_150_int = 28881; // 0x697 PushI
	var_151_int = 28880; // 0x698 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x699 TObjFunc
	return 0; // 0x69b Return
	
Label_1692:
	var_152_int = 28881; // 0x69c PushI
	var_153_bool = var_36_bool == var_152_int; // 0x69d Eq
	if(var_153_bool == 0) goto Label_1710; // 0x69e JumpB
	var_154_string = ""; // 0x69f PushV
	var_154_string = "Sorrow"; // 0x6a0 MovS
	func_1536(var_37_cvector, var_154_string); // 0x6a1 NEW_2
	var_155_int = 527541; // 0x6a3 PushI
	SetMessage(var_155_int); // 0x6a4 TObjFunc
	ClearReplies(); // 0x6a6 TObjFunc
	var_156_int = 527542; // 0x6a8 PushI
	var_157_int = 28883; // 0x6a9 PushI
	var_158_int = 28882; // 0x6aa PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x6ab TObjFunc
	return 0; // 0x6ad Return
	
Label_1710:
	var_159_int = 28883; // 0x6ae PushI
	var_160_bool = var_36_bool == var_159_int; // 0x6af Eq
	if(var_160_bool == 0) goto Label_1733; // 0x6b0 JumpB
	var_161_string = ""; // 0x6b1 PushV
	var_161_string = "Sorrow"; // 0x6b2 MovS
	func_1536(var_37_cvector, var_161_string); // 0x6b3 NEW_2
	var_162_int = 527543; // 0x6b5 PushI
	SetMessage(var_162_int); // 0x6b6 TObjFunc
	ClearReplies(); // 0x6b8 TObjFunc
	var_163_int = 527209; // 0x6ba PushI
	var_164_int = 28884; // 0x6bb PushI
	var_165_int = 28517; // 0x6bc PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x6bd TObjFunc
	var_166_int = 527546; // 0x6bf PushI
	var_167_int = 28884; // 0x6c0 PushI
	var_168_int = 28886; // 0x6c1 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x6c2 TObjFunc
	return 0; // 0x6c4 Return
	
Label_1733:
	var_169_int = 28884; // 0x6c5 PushI
	var_170_bool = var_36_bool == var_169_int; // 0x6c6 Eq
	if(var_170_bool == 0) goto Label_1751; // 0x6c7 JumpB
	var_171_string = ""; // 0x6c8 PushV
	var_171_string = "Smile"; // 0x6c9 MovS
	func_1536(var_37_cvector, var_171_string); // 0x6ca NEW_2
	var_172_int = 527544; // 0x6cc PushI
	SetMessage(var_172_int); // 0x6cd TObjFunc
	ClearReplies(); // 0x6cf TObjFunc
	var_173_int = 527545; // 0x6d1 PushI
	var_174_int = -1; // 0x6d2 PushI
	var_175_int = 28885; // 0x6d3 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x6d4 TObjFunc
	return 0; // 0x6d6 Return
	
Label_1751:
	var_3_string = 1; // 0x6d7 TMovB
	var_176_bool = 0; // 0x6d8 PushV
	func_3886(var_176_bool); // 0x6d9 NEW_2
	if(var_176_bool == 0) goto Label_1759; // 0x6db JumpB
	lshStopAnimation(); // 0x6dc Func
	goto Label_1761; // 0x6de Jump
	
Label_1761:
	return 0; // 0x6e1 Return
	
Label_1759:
	StopAnimation(); // 0x6df Func
	
Label_1763:
	return 0; // 0x6e3 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x799 PushI
	if(var_38_int == 0) goto Label_2210; // 0x79a JumpB
	func_3696(); // 0x79c NEW_2
	var_40_int = 26042; // 0x79e PushI
	var_41_bool = var_37_cvector == var_40_int; // 0x79f Eq
	if(var_41_bool == 0) goto Label_1958; // 0x7a0 JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x7a1 PushV
	var_42_object = var_1_object; // 0x7a2 MovT
	var_43_object = var_0_object; // 0x7a3 MovT
	func_3911(); // 0x7a4 NEW_2
	
Label_1958:
	var_46_int = 26045; // 0x7a6 PushI
	var_47_bool = var_37_cvector == var_46_int; // 0x7a7 Eq
	if(var_47_bool == 0) goto Label_1966; // 0x7a8 JumpB
	var_48_object = Obj(); var_49_object = Obj(); // 0x7a9 PushV
	var_48_object = var_1_object; // 0x7aa MovT
	var_49_object = var_0_object; // 0x7ab MovT
	func_3917(); // 0x7ac NEW_2
	
Label_1966:
	var_89_int = 44014; // 0x7ae PushI
	var_90_bool = var_37_cvector == var_89_int; // 0x7af Eq
	if(var_90_bool == 0) goto Label_1974; // 0x7b0 JumpB
	var_91_object = Obj(); var_92_object = Obj(); // 0x7b1 PushV
	var_91_object = var_1_object; // 0x7b2 MovT
	var_92_object = var_0_object; // 0x7b3 MovT
	func_3917(); // 0x7b4 NEW_2
	
Label_1974:
	var_93_int = 44013; // 0x7b6 PushI
	var_94_bool = var_37_cvector == var_93_int; // 0x7b7 Eq
	if(var_94_bool == 0) goto Label_1982; // 0x7b8 JumpB
	var_95_object = Obj(); var_96_object = Obj(); // 0x7b9 PushV
	var_95_object = var_1_object; // 0x7ba MovT
	var_96_object = var_0_object; // 0x7bb MovT
	func_3917(); // 0x7bc NEW_2
	
Label_1982:
	var_97_int = 26041; // 0x7be PushI
	var_98_bool = var_36_bool == var_97_int; // 0x7bf Eq
	if(var_98_bool == 0) goto Label_2024; // 0x7c0 JumpB
	var_99_string = ""; // 0x7c1 PushV
	var_99_string = "Neutral"; // 0x7c2 MovS
	func_1922(var_37_cvector, var_99_string); // 0x7c3 NEW_2
	var_116_int = 524702; // 0x7c5 PushI
	SetMessage(var_116_int); // 0x7c6 TObjFunc
	ClearReplies(); // 0x7c8 TObjFunc
	var_117_bool = 0; // 0x7ca PushV
	var_117_bool = 0; // 0x7cb MovB
	var_118_bool = 0; var_119_object = Obj(); // 0x7cc PushV
	var_119_object = var_1_object; // 0x7cd MovT
	func_4144(var_119_object); // 0x7ce NEW_2
	if(var_118_bool == 0) goto Label_2007; // 0x7d0 JumpB
	var_126_bool = 0; var_127_object = Obj(); // 0x7d1 PushV
	var_127_object = var_1_object; // 0x7d2 MovT
	func_4156(var_127_object); // 0x7d3 NEW_2
	if(var_126_bool == 0) goto Label_2007; // 0x7d5 JumpB
	var_117_bool = 1; // 0x7d6 MovB
	
Label_2007:
	if(var_117_bool == 0) goto Label_2013; // 0x7d7 JumpB
	var_132_int = 524703; // 0x7d8 PushI
	var_133_int = 28087; // 0x7d9 PushI
	var_134_int = 26042; // 0x7da PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x7db TObjFunc
	
Label_2013:
	var_135_int = 524704; // 0x7dd PushI
	var_136_int = -1; // 0x7de PushI
	var_137_int = 26043; // 0x7df PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x7e0 TObjFunc
	var_138_int = 541803; // 0x7e2 PushI
	var_139_int = -1; // 0x7e3 PushI
	var_140_int = 44015; // 0x7e4 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x7e5 TObjFunc
	return 0; // 0x7e7 Return
	
Label_2024:
	var_141_int = 28087; // 0x7e8 PushI
	var_142_bool = var_36_bool == var_141_int; // 0x7e9 Eq
	if(var_142_bool == 0) goto Label_2047; // 0x7ea JumpB
	var_143_string = ""; // 0x7eb PushV
	var_143_string = "Doubt"; // 0x7ec MovS
	func_1922(var_37_cvector, var_143_string); // 0x7ed NEW_2
	var_144_int = 526807; // 0x7ef PushI
	SetMessage(var_144_int); // 0x7f0 TObjFunc
	ClearReplies(); // 0x7f2 TObjFunc
	var_145_int = 526808; // 0x7f4 PushI
	var_146_int = 28089; // 0x7f5 PushI
	var_147_int = 28088; // 0x7f6 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x7f7 TObjFunc
	var_148_int = 541797; // 0x7f9 PushI
	var_149_int = 28092; // 0x7fa PushI
	var_150_int = 44007; // 0x7fb PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x7fc TObjFunc
	return 0; // 0x7fe Return
	
Label_2047:
	var_151_int = 28089; // 0x7ff PushI
	var_152_bool = var_36_bool == var_151_int; // 0x800 Eq
	if(var_152_bool == 0) goto Label_2070; // 0x801 JumpB
	var_153_string = ""; // 0x802 PushV
	var_153_string = "Doubt"; // 0x803 MovS
	func_1922(var_37_cvector, var_153_string); // 0x804 NEW_2
	var_154_int = 526809; // 0x806 PushI
	SetMessage(var_154_int); // 0x807 TObjFunc
	ClearReplies(); // 0x809 TObjFunc
	var_155_int = 526810; // 0x80b PushI
	var_156_int = 26044; // 0x80c PushI
	var_157_int = 28090; // 0x80d PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x80e TObjFunc
	var_158_int = 526811; // 0x810 PushI
	var_159_int = 28092; // 0x811 PushI
	var_160_int = 28091; // 0x812 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x813 TObjFunc
	return 0; // 0x815 Return
	
Label_2070:
	var_161_int = 28092; // 0x816 PushI
	var_162_bool = var_36_bool == var_161_int; // 0x817 Eq
	if(var_162_bool == 0) goto Label_2093; // 0x818 JumpB
	var_163_string = ""; // 0x819 PushV
	var_163_string = "Agression"; // 0x81a MovS
	func_1922(var_37_cvector, var_163_string); // 0x81b NEW_2
	var_164_int = 526812; // 0x81d PushI
	SetMessage(var_164_int); // 0x81e TObjFunc
	ClearReplies(); // 0x820 TObjFunc
	var_165_int = 526813; // 0x822 PushI
	var_166_int = 28095; // 0x823 PushI
	var_167_int = 28093; // 0x824 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x825 TObjFunc
	var_168_int = 526814; // 0x827 PushI
	var_169_int = 28095; // 0x828 PushI
	var_170_int = 28094; // 0x829 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x82a TObjFunc
	return 0; // 0x82c Return
	
Label_2093:
	var_171_int = 28095; // 0x82d PushI
	var_172_bool = var_36_bool == var_171_int; // 0x82e Eq
	if(var_172_bool == 0) goto Label_2111; // 0x82f JumpB
	var_173_string = ""; // 0x830 PushV
	var_173_string = "Agression"; // 0x831 MovS
	func_1922(var_37_cvector, var_173_string); // 0x832 NEW_2
	var_174_int = 526815; // 0x834 PushI
	SetMessage(var_174_int); // 0x835 TObjFunc
	ClearReplies(); // 0x837 TObjFunc
	var_175_int = 526816; // 0x839 PushI
	var_176_int = 26044; // 0x83a PushI
	var_177_int = 28097; // 0x83b PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x83c TObjFunc
	return 0; // 0x83e Return
	
Label_2111:
	var_178_int = 26044; // 0x83f PushI
	var_179_bool = var_36_bool == var_178_int; // 0x840 Eq
	if(var_179_bool == 0) goto Label_2129; // 0x841 JumpB
	var_180_string = ""; // 0x842 PushV
	var_180_string = "Doubt"; // 0x843 MovS
	func_1922(var_37_cvector, var_180_string); // 0x844 NEW_2
	var_181_int = 524705; // 0x846 PushI
	SetMessage(var_181_int); // 0x847 TObjFunc
	ClearReplies(); // 0x849 TObjFunc
	var_182_int = 541798; // 0x84b PushI
	var_183_int = 44010; // 0x84c PushI
	var_184_int = 44009; // 0x84d PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x84e TObjFunc
	return 0; // 0x850 Return
	
Label_2129:
	var_185_int = 44010; // 0x851 PushI
	var_186_bool = var_36_bool == var_185_int; // 0x852 Eq
	if(var_186_bool == 0) goto Label_2152; // 0x853 JumpB
	var_187_string = ""; // 0x854 PushV
	var_187_string = "Agression"; // 0x855 MovS
	func_1922(var_37_cvector, var_187_string); // 0x856 NEW_2
	var_188_int = 541799; // 0x858 PushI
	SetMessage(var_188_int); // 0x859 TObjFunc
	ClearReplies(); // 0x85b TObjFunc
	var_189_int = 526817; // 0x85d PushI
	var_190_int = 28100; // 0x85e PushI
	var_191_int = 28099; // 0x85f PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x860 TObjFunc
	var_192_int = 541800; // 0x862 PushI
	var_193_int = 28102; // 0x863 PushI
	var_194_int = 44011; // 0x864 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x865 TObjFunc
	return 0; // 0x867 Return
	
Label_2152:
	var_195_int = 28100; // 0x868 PushI
	var_196_bool = var_36_bool == var_195_int; // 0x869 Eq
	if(var_196_bool == 0) goto Label_2175; // 0x86a JumpB
	var_197_string = ""; // 0x86b PushV
	var_197_string = "Neutral"; // 0x86c MovS
	func_1922(var_37_cvector, var_197_string); // 0x86d NEW_2
	var_198_int = 526818; // 0x86f PushI
	SetMessage(var_198_int); // 0x870 TObjFunc
	ClearReplies(); // 0x872 TObjFunc
	var_199_int = 526819; // 0x874 PushI
	var_200_int = 28102; // 0x875 PushI
	var_201_int = 28101; // 0x876 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x877 TObjFunc
	var_202_int = 541801; // 0x879 PushI
	var_203_int = -1; // 0x87a PushI
	var_204_int = 44013; // 0x87b PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x87c TObjFunc
	return 0; // 0x87e Return
	
Label_2175:
	var_205_int = 28102; // 0x87f PushI
	var_206_bool = var_36_bool == var_205_int; // 0x880 Eq
	if(var_206_bool == 0) goto Label_2198; // 0x881 JumpB
	var_207_string = ""; // 0x882 PushV
	var_207_string = "Agression"; // 0x883 MovS
	func_1922(var_37_cvector, var_207_string); // 0x884 NEW_2
	var_208_int = 526820; // 0x886 PushI
	SetMessage(var_208_int); // 0x887 TObjFunc
	ClearReplies(); // 0x889 TObjFunc
	var_209_int = 524706; // 0x88b PushI
	var_210_int = -1; // 0x88c PushI
	var_211_int = 26045; // 0x88d PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x88e TObjFunc
	var_212_int = 541802; // 0x890 PushI
	var_213_int = -1; // 0x891 PushI
	var_214_int = 44014; // 0x892 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x893 TObjFunc
	return 0; // 0x895 Return
	
Label_2198:
	var_3_string = 1; // 0x896 TMovB
	var_215_bool = 0; // 0x897 PushV
	func_3886(var_215_bool); // 0x898 NEW_2
	if(var_215_bool == 0) goto Label_2206; // 0x89a JumpB
	lshStopAnimation(); // 0x89b Func
	goto Label_2208; // 0x89d Jump
	
Label_2208:
	return 0; // 0x8a0 Return
	
Label_2206:
	StopAnimation(); // 0x89e Func
	
Label_2210:
	return 0; // 0x8a2 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x990 PushI
	if(var_38_int == 0) goto Label_2928; // 0x991 JumpB
	func_3696(); // 0x993 NEW_2
	var_40_int = 41268; // 0x995 PushI
	var_41_bool = var_37_cvector == var_40_int; // 0x996 Eq
	if(var_41_bool == 0) goto Label_2461; // 0x997 JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x998 PushV
	var_42_object = var_1_object; // 0x999 MovT
	var_43_object = var_0_object; // 0x99a MovT
	func_4100(); // 0x99b NEW_2
	
Label_2461:
	var_75_int = 41271; // 0x99d PushI
	var_76_bool = var_37_cvector == var_75_int; // 0x99e Eq
	if(var_76_bool == 0) goto Label_2469; // 0x99f JumpB
	var_77_object = Obj(); var_78_object = Obj(); // 0x9a0 PushV
	var_77_object = var_1_object; // 0x9a1 MovT
	var_78_object = var_0_object; // 0x9a2 MovT
	func_4091(); // 0x9a3 NEW_2
	
Label_2469:
	var_89_int = 41278; // 0x9a5 PushI
	var_90_bool = var_37_cvector == var_89_int; // 0x9a6 Eq
	if(var_90_bool == 0) goto Label_2477; // 0x9a7 JumpB
	var_91_object = Obj(); var_92_object = Obj(); // 0x9a8 PushV
	var_91_object = var_1_object; // 0x9a9 MovT
	var_92_object = var_0_object; // 0x9aa MovT
	func_4091(); // 0x9ab NEW_2
	
Label_2477:
	var_93_int = 41261; // 0x9ad PushI
	var_94_bool = var_36_bool == var_93_int; // 0x9ae Eq
	if(var_94_bool == 0) goto Label_2575; // 0x9af JumpB
	var_95_bool = 0; // 0x9b0 PushV
	var_95_bool = 0; // 0x9b1 MovB
	var_96_bool = 0; var_97_object = Obj(); // 0x9b2 PushV
	var_97_object = var_1_object; // 0x9b3 MovT
	func_4299(var_97_object); // 0x9b4 NEW_2
	if(var_96_bool == 0) goto Label_2494; // 0x9b6 JumpB
	var_102_bool = 0; var_103_object = Obj(); // 0x9b7 PushV
	var_103_object = var_1_object; // 0x9b8 MovT
	func_4132(var_103_object); // 0x9b9 NEW_2
	var_108_bool = var_102_bool == 0; // 0x9bb Not
	if(var_108_bool == 0) goto Label_2494; // 0x9bc JumpB
	var_95_bool = 1; // 0x9bd MovB
	
Label_2494:
	if(var_95_bool == 0) goto Label_2525; // 0x9be JumpB
	var_109_object = Obj(); var_110_object = Obj(); // 0x9bf PushV
	var_109_object = var_1_object; // 0x9c0 MovT
	var_110_object = var_0_object; // 0x9c1 MovT
	func_4085(); // 0x9c2 NEW_2
	var_113_object = Obj(); var_114_object = Obj(); // 0x9c4 PushV
	var_113_object = var_1_object; // 0x9c5 MovT
	var_114_object = var_0_object; // 0x9c6 MovT
	func_4116(); // 0x9c7 NEW_2
	var_117_string = ""; // 0x9c9 PushV
	var_117_string = "Neutral"; // 0x9ca MovS
	func_2425(var_37_cvector, var_117_string); // 0x9cb NEW_2
	var_134_int = 539318; // 0x9cd PushI
	SetMessage(var_134_int); // 0x9ce TObjFunc
	ClearReplies(); // 0x9d0 TObjFunc
	var_135_int = 541446; // 0x9d2 PushI
	var_136_int = 45384; // 0x9d3 PushI
	var_137_int = 43602; // 0x9d4 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x9d5 TObjFunc
	var_138_int = 542944; // 0x9d7 PushI
	var_139_int = 45384; // 0x9d8 PushI
	var_140_int = 45383; // 0x9d9 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x9da TObjFunc
	return 0; // 0x9dc Return
	
Label_2525:
	var_141_object = Obj(); var_142_object = Obj(); // 0x9dd PushV
	var_141_object = var_1_object; // 0x9de MovT
	var_142_object = var_0_object; // 0x9df MovT
	func_4116(); // 0x9e0 NEW_2
	var_143_string = ""; // 0x9e2 PushV
	var_143_string = "Neutral"; // 0x9e3 MovS
	func_2425(var_37_cvector, var_143_string); // 0x9e4 NEW_2
	var_144_int = 539331; // 0x9e6 PushI
	SetMessage(var_144_int); // 0x9e7 TObjFunc
	ClearReplies(); // 0x9e9 TObjFunc
	var_145_bool = 0; // 0x9eb PushV
	var_145_bool = 0; // 0x9ec MovB
	var_146_bool = 0; // 0x9ed PushV
	var_146_bool = 0; // 0x9ee MovB
	var_147_bool = 0; var_148_object = Obj(); // 0x9ef PushV
	var_148_object = var_1_object; // 0x9f0 MovT
	func_4122(var_147_bool, var_148_object); // 0x9f1 NEW_2
	if(var_147_bool == 0) goto Label_2555; // 0x9f3 JumpB
	var_196_bool = 0; var_197_object = Obj(); // 0x9f4 PushV
	var_197_object = var_1_object; // 0x9f5 MovT
	func_4287(var_197_object); // 0x9f6 NEW_2
	var_202_bool = var_196_bool == 0; // 0x9f8 Not
	if(var_202_bool == 0) goto Label_2555; // 0x9f9 JumpB
	var_146_bool = 1; // 0x9fa MovB
	
Label_2555:
	if(var_146_bool == 0) goto Label_2563; // 0x9fb JumpB
	var_203_bool = 0; var_204_object = Obj(); // 0x9fc PushV
	var_204_object = var_1_object; // 0x9fd MovT
	func_4132(var_204_object); // 0x9fe NEW_2
	var_205_bool = var_203_bool == 0; // 0xa00 Not
	if(var_205_bool == 0) goto Label_2563; // 0xa01 JumpB
	var_145_bool = 1; // 0xa02 MovB
	
Label_2563:
	if(var_145_bool == 0) goto Label_2569; // 0xa03 JumpB
	var_206_int = 539332; // 0xa04 PushI
	var_207_int = 41277; // 0xa05 PushI
	var_208_int = 41276; // 0xa06 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0xa07 TObjFunc
	
Label_2569:
	var_209_int = 539335; // 0xa09 PushI
	var_210_int = -1; // 0xa0a PushI
	var_211_int = 41279; // 0xa0b PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0xa0c TObjFunc
	return 0; // 0xa0e Return
	
Label_2575:
	var_212_int = 41277; // 0xa0f PushI
	var_213_bool = var_36_bool == var_212_int; // 0xa10 Eq
	if(var_213_bool == 0) goto Label_2593; // 0xa11 JumpB
	var_214_string = ""; // 0xa12 PushV
	var_214_string = "Doubt"; // 0xa13 MovS
	func_2425(var_37_cvector, var_214_string); // 0xa14 NEW_2
	var_215_int = 539333; // 0xa16 PushI
	SetMessage(var_215_int); // 0xa17 TObjFunc
	ClearReplies(); // 0xa19 TObjFunc
	var_216_int = 539334; // 0xa1b PushI
	var_217_int = -1; // 0xa1c PushI
	var_218_int = 41278; // 0xa1d PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0xa1e TObjFunc
	return 0; // 0xa20 Return
	
Label_2593:
	var_219_int = 45384; // 0xa21 PushI
	var_220_bool = var_36_bool == var_219_int; // 0xa22 Eq
	if(var_220_bool == 0) goto Label_2611; // 0xa23 JumpB
	var_221_string = ""; // 0xa24 PushV
	var_221_string = "Sorrow"; // 0xa25 MovS
	func_2425(var_37_cvector, var_221_string); // 0xa26 NEW_2
	var_222_int = 542945; // 0xa28 PushI
	SetMessage(var_222_int); // 0xa29 TObjFunc
	ClearReplies(); // 0xa2b TObjFunc
	var_223_int = 542946; // 0xa2d PushI
	var_224_int = 45386; // 0xa2e PushI
	var_225_int = 45385; // 0xa2f PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0xa30 TObjFunc
	return 0; // 0xa32 Return
	
Label_2611:
	var_226_int = 45386; // 0xa33 PushI
	var_227_bool = var_36_bool == var_226_int; // 0xa34 Eq
	if(var_227_bool == 0) goto Label_2649; // 0xa35 JumpB
	var_228_string = ""; // 0xa36 PushV
	var_228_string = "Smile"; // 0xa37 MovS
	func_2425(var_37_cvector, var_228_string); // 0xa38 NEW_2
	var_229_int = 542947; // 0xa3a PushI
	SetMessage(var_229_int); // 0xa3b TObjFunc
	ClearReplies(); // 0xa3d TObjFunc
	var_230_bool = 0; var_231_object = Obj(); // 0xa3f PushV
	var_231_object = var_1_object; // 0xa40 MovT
	func_4168(var_231_object); // 0xa41 NEW_2
	if(var_230_bool == 0) goto Label_2633; // 0xa43 JumpB
	var_236_int = 542955; // 0xa44 PushI
	var_237_int = 45398; // 0xa45 PushI
	var_238_int = 45395; // 0xa46 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0xa47 TObjFunc
	
Label_2633:
	var_239_bool = 0; var_240_object = Obj(); // 0xa49 PushV
	var_240_object = var_1_object; // 0xa4a MovT
	func_4275(var_240_object); // 0xa4b NEW_2
	if(var_239_bool == 0) goto Label_2643; // 0xa4d JumpB
	var_245_int = 542957; // 0xa4e PushI
	var_246_int = 45396; // 0xa4f PushI
	var_247_int = 45397; // 0xa50 PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0xa51 TObjFunc
	
Label_2643:
	var_248_int = 542951; // 0xa53 PushI
	var_249_int = 45402; // 0xa54 PushI
	var_250_int = 45391; // 0xa55 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0xa56 TObjFunc
	return 0; // 0xa58 Return
	
Label_2649:
	var_251_int = 45402; // 0xa59 PushI
	var_252_bool = var_36_bool == var_251_int; // 0xa5a Eq
	if(var_252_bool == 0) goto Label_2672; // 0xa5b JumpB
	var_253_string = ""; // 0xa5c PushV
	var_253_string = "Neutral"; // 0xa5d MovS
	func_2425(var_37_cvector, var_253_string); // 0xa5e NEW_2
	var_254_int = 542961; // 0xa60 PushI
	SetMessage(var_254_int); // 0xa61 TObjFunc
	ClearReplies(); // 0xa63 TObjFunc
	var_255_int = 542962; // 0xa65 PushI
	var_256_int = 43611; // 0xa66 PushI
	var_257_int = 45403; // 0xa67 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0xa68 TObjFunc
	var_258_int = 542963; // 0xa6a PushI
	var_259_int = -1; // 0xa6b PushI
	var_260_int = 45404; // 0xa6c PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0xa6d TObjFunc
	return 0; // 0xa6f Return
	
Label_2672:
	var_261_int = 45396; // 0xa70 PushI
	var_262_bool = var_36_bool == var_261_int; // 0xa71 Eq
	if(var_262_bool == 0) goto Label_2690; // 0xa72 JumpB
	var_263_string = ""; // 0xa73 PushV
	var_263_string = "Doubt"; // 0xa74 MovS
	func_2425(var_37_cvector, var_263_string); // 0xa75 NEW_2
	var_264_int = 542956; // 0xa77 PushI
	SetMessage(var_264_int); // 0xa78 TObjFunc
	ClearReplies(); // 0xa7a TObjFunc
	var_265_int = 542960; // 0xa7c PushI
	var_266_int = 45392; // 0xa7d PushI
	var_267_int = 45401; // 0xa7e PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0xa7f TObjFunc
	return 0; // 0xa81 Return
	
Label_2690:
	var_268_int = 45392; // 0xa82 PushI
	var_269_bool = var_36_bool == var_268_int; // 0xa83 Eq
	if(var_269_bool == 0) goto Label_2708; // 0xa84 JumpB
	var_270_string = ""; // 0xa85 PushV
	var_270_string = "Doubt"; // 0xa86 MovS
	func_2425(var_37_cvector, var_270_string); // 0xa87 NEW_2
	var_271_int = 542952; // 0xa89 PushI
	SetMessage(var_271_int); // 0xa8a TObjFunc
	ClearReplies(); // 0xa8c TObjFunc
	var_272_int = 542953; // 0xa8e PushI
	var_273_int = 45394; // 0xa8f PushI
	var_274_int = 45393; // 0xa90 PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0xa91 TObjFunc
	return 0; // 0xa93 Return
	
Label_2708:
	var_275_int = 45394; // 0xa94 PushI
	var_276_bool = var_36_bool == var_275_int; // 0xa95 Eq
	if(var_276_bool == 0) goto Label_2731; // 0xa96 JumpB
	var_277_string = ""; // 0xa97 PushV
	var_277_string = "Sorrow"; // 0xa98 MovS
	func_2425(var_37_cvector, var_277_string); // 0xa99 NEW_2
	var_278_int = 542954; // 0xa9b PushI
	SetMessage(var_278_int); // 0xa9c TObjFunc
	ClearReplies(); // 0xa9e TObjFunc
	var_279_int = 542948; // 0xaa0 PushI
	var_280_int = 45388; // 0xaa1 PushI
	var_281_int = 45387; // 0xaa2 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0xaa3 TObjFunc
	var_282_int = 542964; // 0xaa5 PushI
	var_283_int = 45406; // 0xaa6 PushI
	var_284_int = 45405; // 0xaa7 PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0xaa8 TObjFunc
	return 0; // 0xaaa Return
	
Label_2731:
	var_285_int = 45388; // 0xaab PushI
	var_286_bool = var_36_bool == var_285_int; // 0xaac Eq
	if(var_286_bool == 0) goto Label_2749; // 0xaad JumpB
	var_287_string = ""; // 0xaae PushV
	var_287_string = "Sorrow"; // 0xaaf MovS
	func_2425(var_37_cvector, var_287_string); // 0xab0 NEW_2
	var_288_int = 542949; // 0xab2 PushI
	SetMessage(var_288_int); // 0xab3 TObjFunc
	ClearReplies(); // 0xab5 TObjFunc
	var_289_int = 542950; // 0xab7 PushI
	var_290_int = 45406; // 0xab8 PushI
	var_291_int = 45389; // 0xab9 PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0xaba TObjFunc
	return 0; // 0xabc Return
	
Label_2749:
	var_292_int = 45406; // 0xabd PushI
	var_293_bool = var_36_bool == var_292_int; // 0xabe Eq
	if(var_293_bool == 0) goto Label_2772; // 0xabf JumpB
	var_294_string = ""; // 0xac0 PushV
	var_294_string = "Smile"; // 0xac1 MovS
	func_2425(var_37_cvector, var_294_string); // 0xac2 NEW_2
	var_295_int = 542965; // 0xac4 PushI
	SetMessage(var_295_int); // 0xac5 TObjFunc
	ClearReplies(); // 0xac7 TObjFunc
	var_296_int = 542966; // 0xac9 PushI
	var_297_int = 43611; // 0xaca PushI
	var_298_int = 45407; // 0xacb PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0xacc TObjFunc
	var_299_int = 542967; // 0xace PushI
	var_300_int = 45410; // 0xacf PushI
	var_301_int = 45408; // 0xad0 PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0xad1 TObjFunc
	return 0; // 0xad3 Return
	
Label_2772:
	var_302_int = 45410; // 0xad4 PushI
	var_303_bool = var_36_bool == var_302_int; // 0xad5 Eq
	if(var_303_bool == 0) goto Label_2790; // 0xad6 JumpB
	var_304_string = ""; // 0xad7 PushV
	var_304_string = "Neutral"; // 0xad8 MovS
	func_2425(var_37_cvector, var_304_string); // 0xad9 NEW_2
	var_305_int = 542968; // 0xadb PushI
	SetMessage(var_305_int); // 0xadc TObjFunc
	ClearReplies(); // 0xade TObjFunc
	var_306_int = 542969; // 0xae0 PushI
	var_307_int = 45412; // 0xae1 PushI
	var_308_int = 45411; // 0xae2 PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0xae3 TObjFunc
	return 0; // 0xae5 Return
	
Label_2790:
	var_309_int = 45412; // 0xae6 PushI
	var_310_bool = var_36_bool == var_309_int; // 0xae7 Eq
	if(var_310_bool == 0) goto Label_2808; // 0xae8 JumpB
	var_311_string = ""; // 0xae9 PushV
	var_311_string = "Sorrow"; // 0xaea MovS
	func_2425(var_37_cvector, var_311_string); // 0xaeb NEW_2
	var_312_int = 542970; // 0xaed PushI
	SetMessage(var_312_int); // 0xaee TObjFunc
	ClearReplies(); // 0xaf0 TObjFunc
	var_313_int = 542971; // 0xaf2 PushI
	var_314_int = 43611; // 0xaf3 PushI
	var_315_int = 45413; // 0xaf4 PushI
	AddReply(var_313_int, var_314_int, var_315_int); // 0xaf5 TObjFunc
	return 0; // 0xaf7 Return
	
Label_2808:
	var_316_int = 43611; // 0xaf8 PushI
	var_317_bool = var_36_bool == var_316_int; // 0xaf9 Eq
	if(var_317_bool == 0) goto Label_2826; // 0xafa JumpB
	var_318_string = ""; // 0xafb PushV
	var_318_string = "Neutral"; // 0xafc MovS
	func_2425(var_37_cvector, var_318_string); // 0xafd NEW_2
	var_319_int = 541455; // 0xaff PushI
	SetMessage(var_319_int); // 0xb00 TObjFunc
	ClearReplies(); // 0xb02 TObjFunc
	var_320_int = 541456; // 0xb04 PushI
	var_321_int = 41267; // 0xb05 PushI
	var_322_int = 43612; // 0xb06 PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0xb07 TObjFunc
	return 0; // 0xb09 Return
	
Label_2826:
	var_323_int = 41267; // 0xb0a PushI
	var_324_bool = var_36_bool == var_323_int; // 0xb0b Eq
	if(var_324_bool == 0) goto Label_2880; // 0xb0c JumpB
	var_325_bool = 0; var_326_object = Obj(); // 0xb0d PushV
	var_326_object = var_1_object; // 0xb0e MovT
	func_4122(var_325_bool, var_326_object); // 0xb0f NEW_2
	var_327_bool = var_325_bool == 0; // 0xb11 Not
	if(var_327_bool == 0) goto Label_2855; // 0xb12 JumpB
	var_328_string = ""; // 0xb13 PushV
	var_328_string = "Neutral"; // 0xb14 MovS
	func_2425(var_37_cvector, var_328_string); // 0xb15 NEW_2
	var_329_int = 539324; // 0xb17 PushI
	SetMessage(var_329_int); // 0xb18 TObjFunc
	ClearReplies(); // 0xb1a TObjFunc
	var_330_int = 541458; // 0xb1c PushI
	var_331_int = 43615; // 0xb1d PushI
	var_332_int = 43614; // 0xb1e PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0xb1f TObjFunc
	var_333_int = 541461; // 0xb21 PushI
	var_334_int = -1; // 0xb22 PushI
	var_335_int = 43617; // 0xb23 PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0xb24 TObjFunc
	return 0; // 0xb26 Return
	
Label_2855:
	var_336_bool = 0; var_337_object = Obj(); // 0xb27 PushV
	var_337_object = var_1_object; // 0xb28 MovT
	func_4122(var_336_bool, var_337_object); // 0xb29 NEW_2
	if(var_336_bool == 0) goto Label_2880; // 0xb2b JumpB
	var_338_string = ""; // 0xb2c PushV
	var_338_string = "Neutral"; // 0xb2d MovS
	func_2425(var_37_cvector, var_338_string); // 0xb2e NEW_2
	var_339_int = 539327; // 0xb30 PushI
	SetMessage(var_339_int); // 0xb31 TObjFunc
	ClearReplies(); // 0xb33 TObjFunc
	var_340_int = 539328; // 0xb35 PushI
	var_341_int = -1; // 0xb36 PushI
	var_342_int = 41271; // 0xb37 PushI
	AddReply(var_340_int, var_341_int, var_342_int); // 0xb38 TObjFunc
	var_343_int = 539329; // 0xb3a PushI
	var_344_int = -1; // 0xb3b PushI
	var_345_int = 41272; // 0xb3c PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0xb3d TObjFunc
	return 0; // 0xb3f Return
	
Label_2880:
	var_346_int = 43615; // 0xb40 PushI
	var_347_bool = var_36_bool == var_346_int; // 0xb41 Eq
	if(var_347_bool == 0) goto Label_2898; // 0xb42 JumpB
	var_348_string = ""; // 0xb43 PushV
	var_348_string = "Neutral"; // 0xb44 MovS
	func_2425(var_37_cvector, var_348_string); // 0xb45 NEW_2
	var_349_int = 541459; // 0xb47 PushI
	SetMessage(var_349_int); // 0xb48 TObjFunc
	ClearReplies(); // 0xb4a TObjFunc
	var_350_int = 539325; // 0xb4c PushI
	var_351_int = -1; // 0xb4d PushI
	var_352_int = 41268; // 0xb4e PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0xb4f TObjFunc
	return 0; // 0xb51 Return
	
Label_2898:
	var_353_int = 45398; // 0xb52 PushI
	var_354_bool = var_36_bool == var_353_int; // 0xb53 Eq
	if(var_354_bool == 0) goto Label_2916; // 0xb54 JumpB
	var_355_string = ""; // 0xb55 PushV
	var_355_string = "Smile"; // 0xb56 MovS
	func_2425(var_37_cvector, var_355_string); // 0xb57 NEW_2
	var_356_int = 542958; // 0xb59 PushI
	SetMessage(var_356_int); // 0xb5a TObjFunc
	ClearReplies(); // 0xb5c TObjFunc
	var_357_int = 542959; // 0xb5e PushI
	var_358_int = 45396; // 0xb5f PushI
	var_359_int = 45399; // 0xb60 PushI
	AddReply(var_357_int, var_358_int, var_359_int); // 0xb61 TObjFunc
	return 0; // 0xb63 Return
	
Label_2916:
	var_3_string = 1; // 0xb64 TMovB
	var_360_bool = 0; // 0xb65 PushV
	func_3886(var_360_bool); // 0xb66 NEW_2
	if(var_360_bool == 0) goto Label_2924; // 0xb68 JumpB
	lshStopAnimation(); // 0xb69 Func
	goto Label_2926; // 0xb6b Jump
	
Label_2926:
	return 0; // 0xb6e Return
	
Label_2924:
	StopAnimation(); // 0xb6c Func
	
Label_2928:
	return 0; // 0xb70 Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_cvector)
{
	var_38_int = 1; // 0xc13 PushI
	if(var_38_int == 0) goto Label_3131; // 0xc14 JumpB
	func_3696(); // 0xc16 NEW_2
	var_40_int = 42554; // 0xc18 PushI
	var_41_bool = var_36_int == var_40_int; // 0xc19 Eq
	if(var_41_bool == 0) goto Label_3119; // 0xc1a JumpB
	var_42_string = ""; // 0xc1b PushV
	var_42_string = "Neutral"; // 0xc1c MovS
	func_3068(var_37_cvector, var_42_string); // 0xc1d NEW_2
	var_59_int = 540545; // 0xc1f PushI
	SetMessage(var_59_int); // 0xc20 TObjFunc
	ClearReplies(); // 0xc22 TObjFunc
	var_60_int = 540546; // 0xc24 PushI
	var_61_int = -1; // 0xc25 PushI
	var_62_int = 42555; // 0xc26 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0xc27 TObjFunc
	var_63_int = 540798; // 0xc29 PushI
	var_64_int = -1; // 0xc2a PushI
	var_65_int = 42847; // 0xc2b PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0xc2c TObjFunc
	return 0; // 0xc2e Return
	
Label_3119:
	var_3_string = 1; // 0xc2f TMovB
	var_66_bool = 0; // 0xc30 PushV
	func_3886(var_66_bool); // 0xc31 NEW_2
	if(var_66_bool == 0) goto Label_3127; // 0xc33 JumpB
	lshStopAnimation(); // 0xc34 Func
	goto Label_3129; // 0xc36 Jump
	
Label_3129:
	return 0; // 0xc39 Return
	
Label_3127:
	StopAnimation(); // 0xc37 Func
	
Label_3131:
	return 0; // 0xc3b Return
}


task_14_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_int)
{
	var_37_int = 10; // 0xc86 PushI
	var_38_bool = var_36_int == var_37_int; // 0xc87 Eq
	if(var_38_bool == 0) goto Label_3242; // 0xc88 JumpB
	func_3201(); // 0xc8a NEW_2
	var_40_bool = 0; // 0xc8c PushV
	var_40_bool = 0; // 0xc8d MovB
	var_41_bool = 0; // 0xc8e PushV
	func_3422(var_41_bool); // 0xc8f NEW_2
	if(var_41_bool == 0) goto Label_3223; // 0xc91 JumpB
	var_44_bool = 0; // 0xc92 PushV
	func_3170(var_44_bool); // 0xc93 NEW_2
	if(var_44_bool == 0) goto Label_3223; // 0xc95 JumpB
	var_40_bool = 1; // 0xc96 MovB
	
Label_3223:
	if(var_40_bool == 0) goto Label_3236; // 0xc97 JumpB
	var_61_bool = 0; // 0xc98 PushV
	func_3150(var_61_bool); // 0xc99 NEW_2
	if(var_61_bool == 0) goto Label_3235; // 0xc9b JumpB
	var_80_bool = 0; var_81_object = Obj(); // 0xc9c PushV
	var_82_object = Obj(); // 0xc9d PushV
	func_3703(var_82_object); // 0xc9e NEW_2
	var_81_object = var_82_object; // 0xc9f Mov
	func_3570(var_81_object); // 0xca1 NEW_2
	
Label_3235:
	goto Label_3242; // 0xca3 Jump
	
Label_3242:
	return 0; // 0xcaa Return
	
Label_3236:
	func_3165(var_36_int); // 0xca5 NEW_2
	func_3192(); // 0xca8 NEW_2
}


task_14_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	func_3383(); // 0xcac NEW_2
	func_3201(); // 0xcaf NEW_2
	lshStopSpeech(); // 0xcb1 Func
	lshStopAnimation(); // 0xcb3 Func
	StopAsync(); // 0xcb5 Func
	Hold(); // 0xcb7 Func
	return 0; // 0xcb9 Return
}


task_14_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	StopGroup0(); // 0xcba Func
	func_3201(); // 0xcbd NEW_2
	var_37_string = ""; // 0xcbf PushV
	var_37_string = "Neutral"; // 0xcc0 MovS
	func_3650(var_37_string); // 0xcc1 NEW_2
	func_3192(); // 0xcc4 NEW_2
	return 0; // 0xcc6 Return
}


task_14_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_bool)
{
	var_37_bool = var_36_bool; // 0xcc8 Push
	if(var_37_bool == 0) goto Label_3278; // 0xcc9 JumpB
	func_3192(); // 0xccb NEW_2
	goto Label_3282; // 0xccd Jump
	
Label_3282:
	return 0; // 0xcd2 Return
	
Label_3278:
	var_43_string = ""; // 0xcce PushV
	var_43_string = "Neutral"; // 0xccf MovS
	func_3650(var_43_string); // 0xcd0 NEW_2
}


task_14_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_object)
{
	var_37_bool = 0; var_38_bool = 0; // 0xcd3 PushV
	IsOverrideActive(var_38_bool); // 0xcd4 Func
	var_39_bool = var_38_bool == 0; // 0xcd6 Not
	if(var_39_bool == 0) goto Label_3311; // 0xcd7 JumpB
	EventDisable(0); // 0xcd8 EventDisable
	func_3383(); // 0xcda NEW_2
	var_40_bool = 0; var_41_object = Obj(); // 0xcdc PushV
	var_41_object = var_36_object; // 0xcdd Mov
	func_3413(var_41_object); // 0xcde NEW_2
	EventEnable(0); // 0xce0 EventEnable
	var_54_object = Obj(); // 0xce1 PushV
	var_54_object = var_36_object; // 0xce2 Mov
	func_4633(var_54_object); // 0xce3 NEW_2
	var_824_string = ""; // 0xce5 PushV
	var_824_string = "Neutral"; // 0xce6 MovS
	func_3650(var_824_string); // 0xce7 NEW_2
	func_3201(); // 0xcea NEW_2
	func_3192(); // 0xced NEW_2
	
Label_3311:
	return 2; // 0xcef Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	func_3136(var_35_cvector); // 0xc3d NEW_2
	return 0; // 0xc3f Return
}


func_1536(var_2_object, var_583_string)
{
	var_584_bool = 0; // 0x601 PushV
	func_3886(var_584_bool); // 0x602 NEW_2
	var_585_bool = var_584_bool == 0; // 0x604 Not
	if(var_585_bool == 0) goto Label_1543; // 0x605 JumpB
	return 0; // 0x606 Return
	
Label_1543:
	var_586_bool = var_583_string == var_2_object; // 0x607 Eq
	if(var_586_bool == 0) goto Label_1546; // 0x608 JumpB
	return 0; // 0x609 Return
	
Label_1546:
	var_587_string = ""; var_588_bool = 0; // 0x60a PushV
	var_587_string = var_583_string; // 0x60b Mov
	var_589_string = ""; // 0x60c PushS
	var_590_bool = var_583_string == var_589_string; // 0x60d Eq
	if(var_590_bool == 0) goto Label_1553; // 0x60e JumpB
	var_588_bool = 0; // 0x60f MovB
	goto Label_1554; // 0x610 Jump
	
Label_1554:
	func_3666(var_587_string, var_588_bool); // 0x612 NEW_2
	var_2_object = var_583_string; // 0x614 TMov
	return 0; // 0x615 Return
	
Label_1553:
	var_588_bool = 1; // 0x611 MovB
}


func_0(var_0_object, var_363_int, var_364_object)
{
	var_366_object = Obj(); var_367_bool = 0; var_368_int = 0; var_369_bool = 0; var_370_object = Obj(); var_371_bool = 0; var_372_int = 0; var_373_bool = 0; // 0x0 PushV
	var_0_object = var_364_object; // 0x1 TMov
	var_374_bool = 0; var_375_object = Obj(); var_376_float = 0; // 0x2 PushV
	var_375_object = var_364_object; // 0x3 Mov
	var_376_float = 70.0; // 0x4 MovF
	func_3427(var_375_object, var_376_float); // 0x5 NEW_2
	var_377_bool = var_374_bool == 0; // 0x7 Not
	if(var_377_bool == 0) goto Label_11; // 0x8 JumpB
	var_363_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_370_object); // 0xb Func
	var_378_int = 0; // 0xd PushV
	func_3880(var_378_int); // 0xe NEW_2
	SetNPCName(var_378_int); // 0x10 ObjFunc
	var_379_int = 0; // 0x12 PushV
	func_3878(var_379_int); // 0x13 NEW_2
	SetNPCDescription(var_379_int); // 0x15 ObjFunc
	var_380_string = ""; // 0x17 PushV
	func_3882(var_380_string); // 0x18 NEW_2
	SetPhoto(var_380_string); // 0x1a ObjFunc
	var_381_string = ""; // 0x1c PushV
	func_3884(var_381_string); // 0x1d NEW_2
	SetPhoto2(var_381_string); // 0x1f ObjFunc
	var_382_int = 0; // 0x21 PushV
	func_4525(var_382_int); // 0x22 NEW_2
	SetPlayerName(var_382_int); // 0x24 ObjFunc
	var_372_int = -1; // 0x26 MovI
	IsOverrideActive(var_371_bool); // 0x27 Func
	var_383_bool = var_371_bool; // 0x29 Push
	if(var_383_bool == 0) goto Label_45; // 0x2a JumpB
	var_363_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_370_object); // 0x2d Func
	var_384_bool = 0; var_385_object = Obj(); // 0x2f PushV
	var_386_object = Obj(); // 0x30 PushV
	func_3703(var_386_object); // 0x31 NEW_2
	var_385_object = var_386_object; // 0x32 Mov
	func_3512(var_384_bool, var_385_object); // 0x34 NEW_2
	var_387_object = Obj(); var_388_object = Obj(); // 0x36 PushV
	var_387_object = var_364_object; // 0x37 Mov
	var_388_object = var_370_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_389_object, var_390_object, var_391_string, var_392_bool, var_387_object, var_388_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_373_bool); // 0x3d ObjFunc
	
Label_63:
	var_423_bool = var_373_bool == 0; // 0x3f Not
	if(var_423_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_373_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_424_object = Obj(); // 0x46 PushV
	var_424_object = var_364_object; // 0x47 Mov
	func_3495(); // 0x48 NEW_2
	StopDialog(var_370_object); // 0x4a Func
	GetReturnValue(var_372_int); // 0x4c ObjFunc
	var_363_int = var_372_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_769(var_2_object, var_468_string)
{
	var_469_bool = 0; // 0x302 PushV
	func_3886(var_469_bool); // 0x303 NEW_2
	var_470_bool = var_469_bool == 0; // 0x305 Not
	if(var_470_bool == 0) goto Label_776; // 0x306 JumpB
	return 0; // 0x307 Return
	
Label_776:
	var_471_bool = var_468_string == var_2_object; // 0x308 Eq
	if(var_471_bool == 0) goto Label_779; // 0x309 JumpB
	return 0; // 0x30a Return
	
Label_779:
	var_472_string = ""; var_473_bool = 0; // 0x30b PushV
	var_472_string = var_468_string; // 0x30c Mov
	var_474_string = ""; // 0x30d PushS
	var_475_bool = var_468_string == var_474_string; // 0x30e Eq
	if(var_475_bool == 0) goto Label_786; // 0x30f JumpB
	var_473_bool = 0; // 0x310 MovB
	goto Label_787; // 0x311 Jump
	
Label_787:
	func_3666(var_472_string, var_473_bool); // 0x313 NEW_2
	var_2_object = var_468_string; // 0x315 TMov
	return 0; // 0x316 Return
	
Label_786:
	var_473_bool = 1; // 0x312 MovB
}


func_4100()
{
	var_44_int = 0; var_45_string = ""; // 0x1005 PushV
	var_45_string = "k12q01_Burah"; // 0x1006 MovS
	func_3719(var_44_int, var_45_string); // 0x1007 NEW_2
	var_48_int = 0; // 0x1009 PushI
	var_49_bool = var_44_int == var_48_int; // 0x100a Eq
	if(var_49_bool == 0) goto Label_4115; // 0x100b JumpB
	var_50_string = "k12q01_Burah"; // 0x100c PushS
	var_51_int = 1; // 0x100d PushI
	SetVariable(var_50_string, var_51_int); // 0x100e Func
	func_4343(); // 0x1011 NEW_2
	
Label_4115:
	return 0; // 0x1013 Return
}


func_4356()
{
	var_66_object = Obj(); var_67_object = Obj(); // 0x1104 PushV
	var_68_int = 777; // 0x1105 PushI
	var_69_int = 1; // 0x1106 PushI
	var_70_int = 541531; // 0x1107 PushI
	CreateDiaryEntry(var_67_object, var_68_int, var_69_int, var_70_int); // 0x1108 Func
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0; // 0x110a PushV
	var_72_object = var_67_object; // 0x110b Mov
	var_73_int = 318; // 0x110c MovI
	func_4447(var_71_bool, var_72_object, var_73_int); // 0x110d NEW_2
	return 2; // 0x110f Return
}


func_3848(var_284_bool, var_285_int)
{
	var_286_int = 0; // 0xf09 PushV
	func_3839(var_286_int); // 0xf0a NEW_2
	var_284_bool = var_286_int == var_285_int; // 0xf0c Eq2
	return 0; // 0xf0d Return
}


func_3854(var_60_string, var_61_int)
{
	var_62_string = ""; var_63_string = ""; // 0xf0e PushV
	var_63_string = "idle"; // 0xf0f MovS
	var_64_int = var_61_int; // 0xf10 Push
	if(var_64_int == 0) goto Label_3859; // 0xf11 JumpB
	var_63_string = var_63_string + var_61_int; // 0xf12 Add2
	
Label_3859:
	var_60_string = var_63_string; // 0xf13 Mov
	return 2; // 0xf14 Return
}


func_4369()
{
	var_46_object = Obj(); var_47_object = Obj(); // 0x1111 PushV
	var_48_int = 466; // 0x1112 PushI
	var_49_int = 1; // 0x1113 PushI
	var_50_int = 527782; // 0x1114 PushI
	CreateDiaryEntry(var_47_object, var_48_int, var_49_int, var_50_int); // 0x1115 Func
	var_51_bool = 0; var_52_object = Obj(); var_53_int = 0; // 0x1117 PushV
	var_52_object = var_47_object; // 0x1118 Mov
	var_53_int = 461; // 0x1119 MovI
	func_4447(var_51_bool, var_52_object, var_53_int); // 0x111a NEW_2
	return 2; // 0x111c Return
}


func_4116()
{
	var_670_string = "k12BurahVisit"; // 0x1015 PushS
	var_671_int = 1; // 0x1016 PushI
	SetVariable(var_670_string, var_671_int); // 0x1017 Func
	return 0; // 0x1019 Return
}


func_3861(var_54_int)
{
	var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_bool = 0; // 0xf15 PushV
	var_57_int = 0; // 0xf16 MovI
	
Label_3863:
	var_59_string = "all"; // 0xf17 PushS
	var_60_string = ""; var_61_int = 0; // 0xf18 PushV
	var_61_int = var_57_int; // 0xf19 Mov
	func_3854(var_60_string, var_61_int); // 0xf1a NEW_2
	HasAnimation(var_58_bool, var_59_string, var_60_string); // 0xf1c Func
	var_65_bool = var_58_bool == 0; // 0xf1e Not
	if(var_65_bool == 0) goto Label_3873; // 0xf1f JumpB
	goto Label_3876; // 0xf20 Jump
	
Label_3876:
	var_54_int = var_57_int; // 0xf24 Mov
	return 4; // 0xf25 Return
	
Label_3873:
	var_66_int = 1; // 0xf21 PushI
	var_57_int = var_57_int + var_66_int; // 0xf22 Add2
	goto Label_3863; // 0xf23 Jump
}


func_3607(var_172_bool)
{
	var_174_string = ""; var_175_int = 0; var_176_bool = 0; var_177_int = 0; var_178_string = ""; var_179_string = ""; var_180_int = 0; var_181_bool = 0; var_182_int = 0; var_183_string = ""; // 0xe17 PushV
	var_184_string = "d"; // 0xe18 PushS
	var_185_int = 0; // 0xe19 PushV
	func_3839(var_185_int); // 0xe1a NEW_2
	var_191_int = var_184_string + var_185_int; // 0xe1c Add
	var_192_string = "m"; // 0xe1d PushS
	var_179_string = var_191_int + var_192_string; // 0xe1e Add2
	var_180_int = 0; // 0xe1f MovI
	
Label_3616:
	var_193_int = 1; // 0xe20 PushI
	if(var_193_int == 0) goto Label_3629; // 0xe21 JumpB
	var_194_int = 1; // 0xe22 PushI
	var_195_int = var_180_int + var_194_int; // 0xe23 Add
	var_196_int = var_179_string + var_195_int; // 0xe24 Add
	HasProperty(var_196_int, var_181_bool); // 0xe25 ObjFunc
	var_197_bool = var_181_bool == 0; // 0xe27 Not
	if(var_197_bool == 0) goto Label_3626; // 0xe28 JumpB
	goto Label_3629; // 0xe29 Jump
	
Label_3629:
	var_198_bool = var_180_int == 0; // 0xe2d Not
	if(var_198_bool == 0) goto Label_3633; // 0xe2e JumpB
	var_172_bool = 0; // 0xe2f MovB
	return 10; // 0xe30 Return
	
Label_3633:
	var_182_int = 0; // 0xe31 MovI
	var_199_int = 1; // 0xe32 PushI
	var_200_bool = var_180_int > var_199_int; // 0xe33 GT
	if(var_200_bool == 0) goto Label_3639; // 0xe34 JumpB
	irand(var_182_int, var_180_int); // 0xe35 Func
	
Label_3639:
	var_201_int = 1; // 0xe37 PushI
	var_202_int = var_182_int + var_201_int; // 0xe38 Add
	var_203_int = var_179_string + var_202_int; // 0xe39 Add
	GetProperty(var_203_int, var_183_string); // 0xe3a ObjFunc
	var_204_bool = 0; var_205_string = ""; // 0xe3c PushV
	var_205_string = var_183_string; // 0xe3d Mov
	func_3681(var_204_bool, var_205_string); // 0xe3e NEW_2
	var_172_bool = var_204_bool; // 0xe3f Mov
	return 10; // 0xe41 Return
	
Label_3626:
	var_206_int = 1; // 0xe2a PushI
	var_180_int = var_180_int + var_206_int; // 0xe2b Add2
	goto Label_3616; // 0xe2c Jump
}


func_4633(var_54_object)
{
	var_55_int = 0; var_56_int = 0; // 0x1219 PushV
	var_57_string = "mt_burah"; // 0x121a PushS
	GetVariable(var_57_string, var_56_int); // 0x121b Func
	var_58_bool = var_56_int == 0; // 0x121d Not
	if(var_58_bool == 0) goto Label_4649; // 0x121e JumpB
	var_59_int = 0; var_60_object = Obj(); // 0x121f PushV
	var_60_object = var_54_object; // 0x1220 Mov
	TaskCall(2); // 0x1221 TaskCall
	func_303(var_61_object, var_59_int, var_60_object); // 0x1222 NEW_2
	TaskReturn(); // 0x1223 TaskReturn
	var_282_string = "mt_burah"; // 0x1225 PushS
	var_283_int = 1; // 0x1226 PushI
	SetVariable(var_282_string, var_283_int); // 0x1227 Func
	
Label_4649:
	var_284_bool = 0; var_285_int = 0; // 0x1229 PushV
	var_285_int = 1; // 0x122a MovI
	func_3848(var_284_bool, var_285_int); // 0x122b NEW_2
	if(var_284_bool == 0) goto Label_4661; // 0x122d JumpB
	var_287_int = 0; var_288_object = Obj(); // 0x122e PushV
	var_288_object = var_54_object; // 0x122f Mov
	TaskCall(8); // 0x1230 TaskCall
	func_1764(var_289_object, var_287_int, var_288_object); // 0x1231 NEW_2
	TaskReturn(); // 0x1232 TaskReturn
	return 2; // 0x1234 Return
	
Label_4661:
	var_361_bool = 0; var_362_int = 0; // 0x1235 PushV
	var_362_int = 2; // 0x1236 MovI
	func_3848(var_361_bool, var_362_int); // 0x1237 NEW_2
	if(var_361_bool == 0) goto Label_4673; // 0x1239 JumpB
	var_363_int = 0; var_364_object = Obj(); // 0x123a PushV
	var_364_object = var_54_object; // 0x123b Mov
	TaskCall(0); // 0x123c TaskCall
	func_0(var_365_object, var_363_int, var_364_object); // 0x123d NEW_2
	TaskReturn(); // 0x123e TaskReturn
	return 2; // 0x1240 Return
	
Label_4673:
	var_425_bool = 0; var_426_int = 0; // 0x1241 PushV
	var_426_int = 7; // 0x1242 MovI
	func_3848(var_425_bool, var_426_int); // 0x1243 NEW_2
	if(var_425_bool == 0) goto Label_4685; // 0x1245 JumpB
	var_427_int = 0; var_428_object = Obj(); // 0x1246 PushV
	var_428_object = var_54_object; // 0x1247 Mov
	TaskCall(4); // 0x1248 TaskCall
	func_542(var_429_object, var_427_int, var_428_object); // 0x1249 NEW_2
	TaskReturn(); // 0x124a TaskReturn
	return 2; // 0x124c Return
	
Label_4685:
	var_550_bool = 0; var_551_int = 0; // 0x124d PushV
	var_551_int = 11; // 0x124e MovI
	func_3848(var_550_bool, var_551_int); // 0x124f NEW_2
	if(var_550_bool == 0) goto Label_4697; // 0x1251 JumpB
	var_552_int = 0; var_553_object = Obj(); // 0x1252 PushV
	var_553_object = var_54_object; // 0x1253 Mov
	TaskCall(6); // 0x1254 TaskCall
	func_1387(var_554_object, var_552_int, var_553_object); // 0x1255 NEW_2
	TaskReturn(); // 0x1256 TaskReturn
	return 2; // 0x1258 Return
	
Label_4697:
	var_617_bool = 0; var_618_int = 0; // 0x1259 PushV
	var_618_int = 12; // 0x125a MovI
	func_3848(var_617_bool, var_618_int); // 0x125b NEW_2
	if(var_617_bool == 0) goto Label_4709; // 0x125d JumpB
	var_619_int = 0; var_620_object = Obj(); // 0x125e PushV
	var_620_object = var_54_object; // 0x125f Mov
	TaskCall(10); // 0x1260 TaskCall
	func_2211(var_621_object, var_619_int, var_620_object); // 0x1261 NEW_2
	TaskReturn(); // 0x1262 TaskReturn
	return 2; // 0x1264 Return
	
Label_4709:
	var_768_int = 0; var_769_object = Obj(); // 0x1265 PushV
	var_769_object = var_54_object; // 0x1266 Mov
	TaskCall(12); // 0x1267 TaskCall
	func_2929(var_770_object, var_768_int, var_769_object); // 0x1268 NEW_2
	TaskReturn(); // 0x1269 TaskReturn
	return 2; // 0x126b Return
}


func_4122(var_701_bool, var_702_object)
{
	var_703_bool = 0; var_704_object = Obj(); // 0x101b PushV
	var_704_object = var_702_object; // 0x101c Mov
	func_4311(var_704_object); // 0x101d NEW_2
	if(var_703_bool == 0) goto Label_4130; // 0x101f JumpB
	var_701_bool = 1; // 0x1020 MovB
	return 0; // 0x1021 Return
	
Label_4130:
	var_701_bool = 0; // 0x1022 MovB
	return 0; // 0x1023 Return
}


func_542(var_0_object, var_427_int, var_428_object)
{
	var_430_object = Obj(); var_431_bool = 0; var_432_int = 0; var_433_bool = 0; var_434_object = Obj(); var_435_bool = 0; var_436_int = 0; var_437_bool = 0; // 0x21e PushV
	var_0_object = var_428_object; // 0x21f TMov
	var_438_bool = 0; var_439_object = Obj(); var_440_float = 0; // 0x220 PushV
	var_439_object = var_428_object; // 0x221 Mov
	var_440_float = 70.0; // 0x222 MovF
	func_3427(var_439_object, var_440_float); // 0x223 NEW_2
	var_441_bool = var_438_bool == 0; // 0x225 Not
	if(var_441_bool == 0) goto Label_553; // 0x226 JumpB
	var_427_int = -2; // 0x227 MovI
	return 8; // 0x228 Return
	
Label_553:
	CreateDialog(var_434_object); // 0x229 Func
	var_442_int = 0; // 0x22b PushV
	func_3880(var_442_int); // 0x22c NEW_2
	SetNPCName(var_442_int); // 0x22e ObjFunc
	var_443_int = 0; // 0x230 PushV
	func_3878(var_443_int); // 0x231 NEW_2
	SetNPCDescription(var_443_int); // 0x233 ObjFunc
	var_444_string = ""; // 0x235 PushV
	func_3882(var_444_string); // 0x236 NEW_2
	SetPhoto(var_444_string); // 0x238 ObjFunc
	var_445_string = ""; // 0x23a PushV
	func_3884(var_445_string); // 0x23b NEW_2
	SetPhoto2(var_445_string); // 0x23d ObjFunc
	var_446_int = 0; // 0x23f PushV
	func_4525(var_446_int); // 0x240 NEW_2
	SetPlayerName(var_446_int); // 0x242 ObjFunc
	var_436_int = -1; // 0x244 MovI
	IsOverrideActive(var_435_bool); // 0x245 Func
	var_447_bool = var_435_bool; // 0x247 Push
	if(var_447_bool == 0) goto Label_587; // 0x248 JumpB
	var_427_int = -2; // 0x249 MovI
	return 8; // 0x24a Return
	
Label_587:
	DoDialog(var_434_object); // 0x24b Func
	var_448_bool = 0; var_449_object = Obj(); // 0x24d PushV
	var_450_object = Obj(); // 0x24e PushV
	func_3703(var_450_object); // 0x24f NEW_2
	var_449_object = var_450_object; // 0x250 Mov
	func_3512(var_448_bool, var_449_object); // 0x252 NEW_2
	var_451_object = Obj(); var_452_object = Obj(); // 0x254 PushV
	var_451_object = var_428_object; // 0x255 Mov
	var_452_object = var_434_object; // 0x256 Mov
	TaskCall(5); // 0x257 TaskCall
	func_623(var_453_object, var_454_object, var_455_string, var_456_bool, var_451_object, var_452_object); // 0x258 NEW_2
	TaskReturn(); // 0x259 TaskReturn
	IsDialogEnd(var_437_bool); // 0x25b ObjFunc
	
Label_605:
	var_548_bool = var_437_bool == 0; // 0x25d Not
	if(var_548_bool == 0) goto Label_612; // 0x25e JumpB
	sync(); // 0x25f Func
	IsDialogEnd(var_437_bool); // 0x261 ObjFunc
	goto Label_605; // 0x263 Jump
	
Label_612:
	var_549_object = Obj(); // 0x264 PushV
	var_549_object = var_428_object; // 0x265 Mov
	func_3495(); // 0x266 NEW_2
	StopDialog(var_434_object); // 0x268 Func
	GetReturnValue(var_436_int); // 0x26a ObjFunc
	var_427_int = var_436_int; // 0x26c Mov
	return 8; // 0x26d Return
}


func_4382()
{
	var_196_object = Obj(); var_197_object = Obj(); // 0x111e PushV
	var_198_int = 422; // 0x111f PushI
	var_199_int = 1; // 0x1120 PushI
	var_200_int = 526221; // 0x1121 PushI
	CreateDiaryEntry(var_197_object, var_198_int, var_199_int, var_200_int); // 0x1122 Func
	var_201_bool = 0; var_202_object = Obj(); var_203_int = 0; // 0x1124 PushV
	var_202_object = var_197_object; // 0x1125 Mov
	var_203_int = 416; // 0x1126 MovI
	func_4447(var_201_bool, var_202_object, var_203_int); // 0x1127 NEW_2
	return 2; // 0x1129 Return
}


func_4132(var_657_bool)
{
	var_659_int = 0; var_660_string = ""; // 0x1025 PushV
	var_660_string = "game_final"; // 0x1026 MovS
	func_3719(var_659_int, var_660_string); // 0x1027 NEW_2
	var_661_int = 0; // 0x1029 PushI
	var_662_bool = var_659_int != var_661_int; // 0x102a Neq
	if(var_662_bool == 0) goto Label_4142; // 0x102b JumpB
	var_657_bool = 1; // 0x102c MovB
	return 0; // 0x102d Return
	
Label_4142:
	var_657_bool = 0; // 0x102e MovB
	return 0; // 0x102f Return
}


func_3878(var_118_int)
{
	var_118_int = 515592; // 0xf26 MovI
	return 0; // 0xf27 Return
}


func_3880(var_117_int)
{
	var_117_int = 511961; // 0xf28 MovI
	return 0; // 0xf29 Return
}


func_3882(var_119_string)
{
	var_119_string = "ui/NPC_Burah.png"; // 0xf2a MovS
	return 0; // 0xf2b Return
}


func_4395()
{
	var_60_object = Obj(); var_61_object = Obj(); // 0x112b PushV
	var_62_int = 434; // 0x112c PushI
	var_63_int = 2; // 0x112d PushI
	var_64_int = 526390; // 0x112e PushI
	CreateDiaryEntry(var_61_object, var_62_int, var_63_int, var_64_int); // 0x112f Func
	var_65_bool = 0; var_66_object = Obj(); var_67_int = 0; // 0x1131 PushV
	var_66_object = var_61_object; // 0x1132 Mov
	var_67_int = -1; // 0x1133 MovI
	func_4447(var_65_bool, var_66_object, var_67_int); // 0x1134 NEW_2
	return 2; // 0x1136 Return
}


func_3884(var_120_string)
{
	var_120_string = "ui/NPC_Burah_b.png"; // 0xf2c MovS
	return 0; // 0xf2d Return
}


func_3886(var_112_bool)
{
	var_112_bool = 1; // 0xf2e MovB
	return 0; // 0xf2f Return
}


func_303(var_0_object, var_59_int, var_60_object)
{
	var_62_object = Obj(); var_63_bool = 0; var_64_int = 0; var_65_bool = 0; var_66_object = Obj(); var_67_bool = 0; var_68_int = 0; var_69_bool = 0; // 0x12f PushV
	var_0_object = var_60_object; // 0x130 TMov
	var_70_bool = 0; var_71_object = Obj(); var_72_float = 0; // 0x131 PushV
	var_71_object = var_60_object; // 0x132 Mov
	var_72_float = 70.0; // 0x133 MovF
	func_3427(var_71_object, var_72_float); // 0x134 NEW_2
	var_116_bool = var_70_bool == 0; // 0x136 Not
	if(var_116_bool == 0) goto Label_314; // 0x137 JumpB
	var_59_int = -2; // 0x138 MovI
	return 8; // 0x139 Return
	
Label_314:
	CreateDialog(var_66_object); // 0x13a Func
	var_117_int = 0; // 0x13c PushV
	func_3880(var_117_int); // 0x13d NEW_2
	SetNPCName(var_117_int); // 0x13f ObjFunc
	var_118_int = 0; // 0x141 PushV
	func_3878(var_118_int); // 0x142 NEW_2
	SetNPCDescription(var_118_int); // 0x144 ObjFunc
	var_119_string = ""; // 0x146 PushV
	func_3882(var_119_string); // 0x147 NEW_2
	SetPhoto(var_119_string); // 0x149 ObjFunc
	var_120_string = ""; // 0x14b PushV
	func_3884(var_120_string); // 0x14c NEW_2
	SetPhoto2(var_120_string); // 0x14e ObjFunc
	var_121_int = 0; // 0x150 PushV
	func_4525(var_121_int); // 0x151 NEW_2
	SetPlayerName(var_121_int); // 0x153 ObjFunc
	var_68_int = -1; // 0x155 MovI
	IsOverrideActive(var_67_bool); // 0x156 Func
	var_129_bool = var_67_bool; // 0x158 Push
	if(var_129_bool == 0) goto Label_348; // 0x159 JumpB
	var_59_int = -2; // 0x15a MovI
	return 8; // 0x15b Return
	
Label_348:
	DoDialog(var_66_object); // 0x15c Func
	var_130_bool = 0; var_131_object = Obj(); // 0x15e PushV
	var_132_object = Obj(); // 0x15f PushV
	func_3703(var_132_object); // 0x160 NEW_2
	var_131_object = var_132_object; // 0x161 Mov
	func_3512(var_130_bool, var_131_object); // 0x163 NEW_2
	var_225_object = Obj(); var_226_object = Obj(); // 0x165 PushV
	var_225_object = var_60_object; // 0x166 Mov
	var_226_object = var_66_object; // 0x167 Mov
	TaskCall(3); // 0x168 TaskCall
	func_384(var_227_object, var_228_object, var_229_string, var_230_bool, var_225_object, var_226_object); // 0x169 NEW_2
	TaskReturn(); // 0x16a TaskReturn
	IsDialogEnd(var_69_bool); // 0x16c ObjFunc
	
Label_366:
	var_274_bool = var_69_bool == 0; // 0x16e Not
	if(var_274_bool == 0) goto Label_373; // 0x16f JumpB
	sync(); // 0x170 Func
	IsDialogEnd(var_69_bool); // 0x172 ObjFunc
	goto Label_366; // 0x174 Jump
	
Label_373:
	var_275_object = Obj(); // 0x175 PushV
	var_275_object = var_60_object; // 0x176 Mov
	func_3495(); // 0x177 NEW_2
	StopDialog(var_66_object); // 0x179 Func
	GetReturnValue(var_68_int); // 0x17b ObjFunc
	var_59_int = var_68_int; // 0x17d Mov
	return 8; // 0x17e Return
}


func_4144(var_328_bool)
{
	var_330_int = 0; var_331_string = ""; // 0x1031 PushV
	var_331_string = "k1q01LaskaGotoBurah"; // 0x1032 MovS
	func_3719(var_330_int, var_331_string); // 0x1033 NEW_2
	var_334_int = 0; // 0x1035 PushI
	var_335_bool = var_330_int != var_334_int; // 0x1036 Neq
	if(var_335_bool == 0) goto Label_4154; // 0x1037 JumpB
	var_328_bool = 1; // 0x1038 MovB
	return 0; // 0x1039 Return
	
Label_4154:
	var_328_bool = 0; // 0x103a MovB
	return 0; // 0x103b Return
}


func_3888()
{
	var_135_object = Obj(); var_136_string = ""; var_137_float = 0; // 0xf31 PushV
	var_138_object = Obj(); // 0xf32 PushV
	func_4475(var_138_object); // 0xf33 NEW_2
	var_135_object = var_138_object; // 0xf34 Mov
	var_136_string = "pt_map_burah_home"; // 0xf36 MovS
	var_137_float = 2; // 0xf37 MovI
	func_4492(var_135_object, var_136_string, var_137_float); // 0xf38 NEW_2
	var_158_object = Obj(); // 0xf3a PushV
	func_4475(var_158_object); // 0xf3b NEW_2
	ShowMap(var_158_object); // 0xf3d ObjFunc
	return 0; // 0xf3f Return
}


func_1845(var_0_object, var_1_object, var_2_object, var_3_string, var_311_object, var_312_object)
{
	var_0_object = var_312_object; // 0x736 TMov
	var_1_object = var_311_object; // 0x737 TMov
	var_3_string = 0; // 0x738 TMovB
	var_317_int = 1; // 0x739 PushI
	if(var_317_int == 0) goto Label_1892; // 0x73a JumpB
	var_318_string = ""; // 0x73b PushV
	var_318_string = "Neutral"; // 0x73c MovS
	func_1922(var_312_object, var_318_string); // 0x73d NEW_2
	var_326_int = 524702; // 0x73f PushI
	SetMessage(var_326_int); // 0x740 TObjFunc
	ClearReplies(); // 0x742 TObjFunc
	var_327_bool = 0; // 0x744 PushV
	var_327_bool = 0; // 0x745 MovB
	var_328_bool = 0; var_329_object = Obj(); // 0x746 PushV
	var_329_object = var_1_object; // 0x747 MovT
	func_4144(var_329_object); // 0x748 NEW_2
	if(var_328_bool == 0) goto Label_1873; // 0x74a JumpB
	var_336_bool = 0; var_337_object = Obj(); // 0x74b PushV
	var_337_object = var_1_object; // 0x74c MovT
	func_4156(var_337_object); // 0x74d NEW_2
	if(var_336_bool == 0) goto Label_1873; // 0x74f JumpB
	var_327_bool = 1; // 0x750 MovB
	
Label_1873:
	if(var_327_bool == 0) goto Label_1879; // 0x751 JumpB
	var_342_int = 524703; // 0x752 PushI
	var_343_int = 28087; // 0x753 PushI
	var_344_int = 26042; // 0x754 PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0x755 TObjFunc
	
Label_1879:
	var_345_int = 524704; // 0x757 PushI
	var_346_int = -1; // 0x758 PushI
	var_347_int = 26043; // 0x759 PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0x75a TObjFunc
	var_348_int = 541803; // 0x75c PushI
	var_349_int = -1; // 0x75d PushI
	var_350_int = 44015; // 0x75e PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0x75f TObjFunc
	goto Label_1892; // 0x761 Jump
	
Label_1892:
	var_351_bool = 0; // 0x764 PushV
	func_3886(var_351_bool); // 0x765 NEW_2
	if(var_351_bool == 0) goto Label_1907; // 0x767 JumpB
	
Label_1896:
	lshWaitForAnimEnd(); // 0x768 Func
	var_352_string = var_3_string; // 0x76a PushT
	if(var_352_string == 0) goto Label_1901; // 0x76b JumpB
	goto Label_1906; // 0x76c Jump
	
Label_1906:
	goto Label_1921; // 0x772 Jump
	
Label_1921:
	return 0; // 0x781 Return
	
Label_1901:
	var_353_string = ""; // 0x76d PushV
	var_353_string = var_2_object; // 0x76e MovT
	func_3650(var_353_string); // 0x76f NEW_2
	goto Label_1896; // 0x771 Jump
	
Label_1907:
	var_354_string = "all"; // 0x773 PushS
	var_355_string = "idle"; // 0x774 PushS
	PlayAnimation(var_354_string, var_355_string); // 0x775 Func
	
Label_1911:
	WaitForAnimEnd(); // 0x777 Func
	var_356_string = var_3_string; // 0x779 PushT
	if(var_356_string == 0) goto Label_1916; // 0x77a JumpB
	goto Label_1921; // 0x77b Jump
	
Label_1916:
	var_357_string = "all"; // 0x77c PushS
	var_358_string = "idle"; // 0x77d PushS
	PlayAnimation(var_357_string, var_358_string); // 0x77e Func
	goto Label_1911; // 0x780 Jump
}


func_3381(var_74_bool)
{
	var_74_bool = 1; // 0xd35 MovB
	return 0; // 0xd36 Return
}


func_3383()
{
	StopAnimation(); // 0xd37 Func
	StopGroup0(); // 0xd39 Func
	return 0; // 0xd3b Return
}


func_4408()
{
	var_83_object = Obj(); var_84_object = Obj(); // 0x1138 PushV
	var_85_int = 435; // 0x1139 PushI
	var_86_int = 2; // 0x113a PushI
	var_87_int = 526391; // 0x113b PushI
	CreateDiaryEntry(var_84_object, var_85_int, var_86_int, var_87_int); // 0x113c Func
	var_88_bool = 0; var_89_object = Obj(); var_90_int = 0; // 0x113e PushV
	var_89_object = var_84_object; // 0x113f Mov
	var_90_int = 434; // 0x1140 MovI
	func_4447(var_88_bool, var_89_object, var_90_int); // 0x1141 NEW_2
	return 2; // 0x1143 Return
}


func_4156(var_336_bool)
{
	var_338_int = 0; var_339_string = ""; // 0x103d PushV
	var_339_string = "ook1Burah1"; // 0x103e MovS
	func_3719(var_338_int, var_339_string); // 0x103f NEW_2
	var_340_int = 0; // 0x1041 PushI
	var_341_bool = var_338_int == var_340_int; // 0x1042 Eq
	if(var_341_bool == 0) goto Label_4166; // 0x1043 JumpB
	var_336_bool = 1; // 0x1044 MovB
	return 0; // 0x1045 Return
	
Label_4166:
	var_336_bool = 0; // 0x1046 MovB
	return 0; // 0x1047 Return
}


func_3388(var_51_float)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); // 0xd3c PushV
	GetPosition(var_56_cvector); // 0xd3d Func
	GetPosition(var_57_cvector); // 0xd3f ObjFunc
	var_58_cvector = var_57_cvector - var_56_cvector; // 0xd41 Sub2
	var_51_float = var_58_cvector | var_58_cvector; // 0xd42 Or2
	return 6; // 0xd43 Return
}


func_3136(var_0_object)
{
	var_36_bool = 0; // 0xc40 PushV
	func_3422(var_36_bool); // 0xc41 NEW_2
	var_39_bool = var_36_bool == 0; // 0xc43 Not
	if(var_39_bool == 0) goto Label_3143; // 0xc44 JumpB
	Hold(); // 0xc45 Func
	
Label_3143:
	GetDirection(var_0_object); // 0xc47 Func
	
Label_3145:
	func_3312(); // 0xc4a NEW_2
	goto Label_3145; // 0xc4c Jump
}


func_3904()
{
	var_71_string = ""; var_72_bool = 0; // 0xf41 PushV
	var_71_string = "boiny@door1"; // 0xf42 MovS
	var_72_bool = 0; // 0xf43 MovB
	func_3735(var_71_string, var_72_bool); // 0xf44 NEW_2
	return 0; // 0xf46 Return
}


func_3650(var_258_string)
{
	var_259_bool = 0; var_260_float = 0; var_261_float = 0; var_262_bool = 0; var_263_float = 0; var_264_float = 0; // 0xe42 PushV
	lshHasAnimation(var_262_bool, var_258_string); // 0xe43 Func
	var_265_bool = var_262_bool; // 0xe45 Push
	if(var_265_bool == 0) goto Label_3661; // 0xe46 JumpB
	lshGetAnimTimes(var_258_string, var_263_float, var_264_float); // 0xe47 Func
	var_266_bool = 0; // 0xe49 PushB
	lshPlayAnimation(var_263_float, var_264_float, var_266_bool); // 0xe4a Func
	goto Label_3665; // 0xe4c Jump
	
Label_3665:
	return 6; // 0xe51 Return
	
Label_3661:
	var_267_string = "Can't find lsh animation : "; // 0xe4d PushS
	var_268_int = var_267_string + var_258_string; // 0xe4e Add
	Trace(var_268_int); // 0xe4f Func
}


func_3396(var_239_string, var_240_int)
{
	var_241_int = 0; var_242_int = 0; // 0xd44 PushV
	GetProperty(var_239_string, var_242_int); // 0xd45 ObjFunc
	var_243_int = var_242_int + var_240_int; // 0xd47 Add
	SetProperty(var_239_string, var_243_int); // 0xd48 ObjFunc
	return 2; // 0xd4a Return
}


func_4421()
{
	var_220_object = Obj(); var_221_object = Obj(); // 0x1145 PushV
	var_222_int = 437; // 0x1146 PushI
	var_223_int = 2; // 0x1147 PushI
	var_224_int = 526393; // 0x1148 PushI
	CreateDiaryEntry(var_221_object, var_222_int, var_223_int, var_224_int); // 0x1149 Func
	var_225_bool = 0; var_226_object = Obj(); var_227_int = 0; // 0x114b PushV
	var_226_object = var_221_object; // 0x114c Mov
	var_227_int = 434; // 0x114d MovI
	func_4447(var_225_bool, var_226_object, var_227_int); // 0x114e NEW_2
	return 2; // 0x1150 Return
}


func_3911()
{
	var_44_string = "ook1Burah1"; // 0xf48 PushS
	var_45_int = 1; // 0xf49 PushI
	SetVariable(var_44_string, var_45_int); // 0xf4a Func
	return 0; // 0xf4c Return
}


func_4168(var_230_bool)
{
	var_232_int = 0; var_233_string = ""; // 0x1049 PushV
	var_233_string = "k12DankoVisit"; // 0x104a MovS
	func_3719(var_232_int, var_233_string); // 0x104b NEW_2
	var_234_int = 0; // 0x104d PushI
	var_235_bool = var_232_int != var_234_int; // 0x104e Neq
	if(var_235_bool == 0) goto Label_4178; // 0x104f JumpB
	var_230_bool = 1; // 0x1050 MovB
	return 0; // 0x1051 Return
	
Label_4178:
	var_230_bool = 0; // 0x1052 MovB
	return 0; // 0x1053 Return
}


func_3403(var_44_bool, var_45_cvector)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_bool = 0; // 0xd4b PushV
	GetPosition(var_49_cvector); // 0xd4c Func
	var_50_cvector = var_45_cvector - var_49_cvector; // 0xd4e Sub2
	var_52_float = GetByIndex(var_50_cvector, 0); // 0xd4f PushE
	var_53_float = GetByIndex(var_50_cvector, 2); // 0xd50 PushE
	Rotate(var_52_float, var_53_float, var_51_bool); // 0xd51 Func
	var_44_bool = var_51_bool; // 0xd53 Mov
	return 6; // 0xd54 Return
}


func_3917()
{
	var_50_object = Obj(); var_51_object = Obj(); // 0xf4d PushV
	var_52_object = Obj(); // 0xf4e PushV
	func_4475(var_52_object); // 0xf4f NEW_2
	var_51_object = var_52_object; // 0xf50 Mov
	var_59_string = "k1q01BurahGotoAnna"; // 0xf52 PushS
	var_60_string = "pt_map_anna"; // 0xf53 PushS
	var_61_int = 1; // 0xf54 PushI
	var_62_int = 524732; // 0xf55 PushI
	var_63_float = 0; // 0xf56 PushV
	func_3834(var_63_float); // 0xf57 NEW_2
	AddMark(var_59_string, var_60_string, var_61_int, var_62_int, var_63_float); // 0xf59 ObjFunc
	func_4356(); // 0xf5c NEW_2
	return 2; // 0xf5e Return
}


func_3150(var_61_bool)
{
	var_62_object = Obj(); var_63_object = Obj(); // 0xc4e PushV
	var_64_string = "player"; // 0xc4f PushS
	FindActor(var_63_object, var_64_string); // 0xc50 Func
	var_65_bool = var_63_object == 0; // 0xc52 Not
	if(var_65_bool == 0) goto Label_3158; // 0xc53 JumpB
	var_61_bool = 0; // 0xc54 MovB
	return 2; // 0xc55 Return
	
Label_3158:
	var_66_bool = 0; var_67_object = Obj(); // 0xc56 PushV
	var_67_object = var_63_object; // 0xc57 Mov
	func_3413(var_67_object); // 0xc58 NEW_2
	var_61_bool = var_66_bool; // 0xc59 Mov
	return 2; // 0xc5b Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_387_object, var_388_object)
{
	var_0_object = var_388_object; // 0x52 TMov
	var_1_object = var_387_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_393_int = 1; // 0x55 PushI
	if(var_393_int == 0) goto Label_114; // 0x56 JumpB
	var_394_string = ""; // 0x57 PushV
	var_394_string = "Neutral"; // 0x58 MovS
	func_144(var_388_object, var_394_string); // 0x59 NEW_2
	var_402_int = 525257; // 0x5b PushI
	SetMessage(var_402_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_403_bool = 0; var_404_object = Obj(); // 0x60 PushV
	var_404_object = var_1_object; // 0x61 MovT
	func_4180(var_404_object); // 0x62 NEW_2
	if(var_403_bool == 0) goto Label_106; // 0x64 JumpB
	var_409_int = 525258; // 0x65 PushI
	var_410_int = 30607; // 0x66 PushI
	var_411_int = 26626; // 0x67 PushI
	AddReply(var_409_int, var_410_int, var_411_int); // 0x68 TObjFunc
	
Label_106:
	var_412_int = 525261; // 0x6a PushI
	var_413_int = -1; // 0x6b PushI
	var_414_int = 26629; // 0x6c PushI
	AddReply(var_412_int, var_413_int, var_414_int); // 0x6d TObjFunc
	goto Label_114; // 0x6f Jump
	
Label_114:
	var_415_bool = 0; // 0x72 PushV
	func_3886(var_415_bool); // 0x73 NEW_2
	if(var_415_bool == 0) goto Label_129; // 0x75 JumpB
	
Label_118:
	lshWaitForAnimEnd(); // 0x76 Func
	var_416_string = var_3_string; // 0x78 PushT
	if(var_416_string == 0) goto Label_123; // 0x79 JumpB
	goto Label_128; // 0x7a Jump
	
Label_128:
	goto Label_143; // 0x80 Jump
	
Label_143:
	return 0; // 0x8f Return
	
Label_123:
	var_417_string = ""; // 0x7b PushV
	var_417_string = var_2_object; // 0x7c MovT
	func_3650(var_417_string); // 0x7d NEW_2
	goto Label_118; // 0x7f Jump
	
Label_129:
	var_418_string = "all"; // 0x81 PushS
	var_419_string = "idle"; // 0x82 PushS
	PlayAnimation(var_418_string, var_419_string); // 0x83 Func
	
Label_133:
	WaitForAnimEnd(); // 0x85 Func
	var_420_string = var_3_string; // 0x87 PushT
	if(var_420_string == 0) goto Label_138; // 0x88 JumpB
	goto Label_143; // 0x89 Jump
	
Label_138:
	var_421_string = "all"; // 0x8a PushS
	var_422_string = "idle"; // 0x8b PushS
	PlayAnimation(var_421_string, var_422_string); // 0x8c Func
	goto Label_133; // 0x8e Jump
}


func_3666(var_236_string, var_237_bool)
{
	var_240_bool = 0; var_241_float = 0; var_242_float = 0; var_243_bool = 0; var_244_float = 0; var_245_float = 0; // 0xe52 PushV
	lshHasAnimation(var_243_bool, var_236_string); // 0xe53 Func
	var_246_bool = var_243_bool; // 0xe55 Push
	if(var_246_bool == 0) goto Label_3676; // 0xe56 JumpB
	lshGetAnimTimes(var_236_string, var_244_float, var_245_float); // 0xe57 Func
	lshPlayAnimation(var_244_float, var_245_float, var_237_bool); // 0xe59 Func
	goto Label_3680; // 0xe5b Jump
	
Label_3680:
	return 6; // 0xe60 Return
	
Label_3676:
	var_247_string = "Can't find lsh animation : "; // 0xe5c PushS
	var_248_int = var_247_string + var_236_string; // 0xe5d Add
	Trace(var_248_int); // 0xe5e Func
}


func_4434(var_66_object)
{
	var_67_object = Obj(); var_68_object = Obj(); // 0x1152 PushV
	GetDiaryRoot(var_68_object); // 0x1153 Func
	var_69_bool = var_68_object == 0; // 0x1155 Not
	if(var_69_bool == 0) goto Label_4444; // 0x1156 JumpB
	var_70_string = "Can't retrieve diary root"; // 0x1157 PushS
	Trace(var_70_string); // 0x1158 Func
	var_66_object = 0; // 0x115a MovB
	return 2; // 0x115b Return
	
Label_4444:
	var_66_object = var_68_object; // 0x115c Mov
	return 2; // 0x115d Return
}


func_4180(var_403_bool)
{
	var_405_int = 0; var_406_string = ""; // 0x1055 PushV
	var_406_string = "k2q01"; // 0x1056 MovS
	func_3719(var_405_int, var_406_string); // 0x1057 NEW_2
	var_407_int = 4; // 0x1059 PushI
	var_408_bool = var_405_int == var_407_int; // 0x105a Eq
	if(var_408_bool == 0) goto Label_4190; // 0x105b JumpB
	var_403_bool = 1; // 0x105c MovB
	return 0; // 0x105d Return
	
Label_4190:
	var_403_bool = 0; // 0x105e MovB
	return 0; // 0x105f Return
}


func_3413(var_40_bool)
{
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0xd55 PushV
	GetPosition(var_43_cvector); // 0xd56 ObjFunc
	var_44_bool = 0; var_45_cvector = CVector(0,0,0); // 0xd58 PushV
	var_45_cvector = var_43_cvector; // 0xd59 Mov
	func_3403(var_44_bool, var_45_cvector); // 0xd5a NEW_2
	var_40_bool = var_44_bool; // 0xd5b Mov
	return 2; // 0xd5d Return
}


func_3165(var_0_object)
{
	var_113_float = GetByIndex(var_0_object, 0); // 0xc5d PushE
	var_114_float = GetByIndex(var_0_object, 2); // 0xc5e PushE
	RotateAsync(var_113_float, var_114_float); // 0xc5f Func
	return 0; // 0xc61 Return
}


func_3422(var_36_bool)
{
	var_37_bool = 0; var_38_bool = 0; // 0xd5e PushV
	IsLoaded(var_38_bool); // 0xd5f Func
	var_36_bool = var_38_bool; // 0xd61 Mov
	return 2; // 0xd62 Return
}


func_4447(var_57_bool, var_58_object, var_59_int)
{
	var_60_object = Obj(); var_61_object = Obj(); var_62_int = 0; var_63_object = Obj(); var_64_object = Obj(); var_65_int = 0; // 0x115f PushV
	var_66_object = Obj(); // 0x1160 PushV
	func_4434(var_66_object); // 0x1161 NEW_2
	var_63_object = var_66_object; // 0x1162 Mov
	Find(var_59_int, var_64_object); // 0x1164 ObjFunc
	var_71_bool = var_64_object == 0; // 0x1166 Not
	if(var_71_bool == 0) goto Label_4462; // 0x1167 JumpB
	var_72_string = "Can't find diary parent with id: "; // 0x1168 PushS
	var_73_int = var_72_string + var_59_int; // 0x1169 Add
	Trace(var_73_int); // 0x116a Func
	var_57_bool = 0; // 0x116c MovB
	return 6; // 0x116d Return
	
Label_4462:
	AddChild(var_58_object); // 0x116e ObjFunc
	var_74_int = 7; // 0x1170 PushI
	SendWorldWndMessage(var_74_int); // 0x1171 Func
	GetCategory(var_65_int); // 0x1173 ObjFunc
	SetDiarySection(var_65_int); // 0x1175 Func
	var_57_bool = 0; // 0x1177 MovB
	return 6; // 0x1178 Return
}


func_4192(var_512_bool, var_513_object)
{
	var_514_bool = 0; var_515_object = Obj(); var_516_string = ""; // 0x1061 PushV
	var_515_object = var_513_object; // 0x1062 Mov
	var_516_string = "bird_balahon"; // 0x1063 MovS
	func_3815(var_515_object, var_516_string); // 0x1064 NEW_2
	if(var_514_bool == 0) goto Label_4201; // 0x1066 JumpB
	var_512_bool = 1; // 0x1067 MovB
	return 0; // 0x1068 Return
	
Label_4201:
	var_512_bool = 0; // 0x1069 MovB
	return 0; // 0x106a Return
}


func_3681(var_164_bool, var_165_string)
{
	var_166_bool = 0; var_167_bool = 0; // 0xe61 PushV
	var_168_bool = 0; // 0xe62 PushV
	func_3886(var_168_bool); // 0xe63 NEW_2
	if(var_168_bool == 0) goto Label_3694; // 0xe65 JumpB
	lshHasSpeech(var_167_bool, var_165_string); // 0xe66 Func
	var_169_bool = var_167_bool; // 0xe68 Push
	if(var_169_bool == 0) goto Label_3694; // 0xe69 JumpB
	lshPlaySpeech(var_165_string); // 0xe6a Func
	var_164_bool = 1; // 0xe6c MovB
	return 2; // 0xe6d Return
	
Label_3694:
	var_164_bool = 0; // 0xe6e MovB
	return 2; // 0xe6f Return
}


func_3170(var_44_bool)
{
	var_45_object = Obj(); var_46_bool = 0; var_47_object = Obj(); var_48_bool = 0; // 0xc62 PushV
	var_49_string = "player"; // 0xc63 PushS
	FindActor(var_47_object, var_49_string); // 0xc64 Func
	var_50_bool = var_47_object == 0; // 0xc66 Not
	if(var_50_bool == 0) goto Label_3178; // 0xc67 JumpB
	var_44_bool = 0; // 0xc68 MovB
	return 4; // 0xc69 Return
	
Label_3178:
	var_51_float = 0; var_52_object = Obj(); // 0xc6a PushV
	var_52_object = var_47_object; // 0xc6b Mov
	func_3388(var_52_object); // 0xc6c NEW_2
	var_59_float = 90000.0; // 0xc6e PushF
	var_60_bool = var_51_float > var_59_float; // 0xc6f GT
	if(var_60_bool == 0) goto Label_3187; // 0xc70 JumpB
	var_44_bool = 0; // 0xc71 MovB
	return 4; // 0xc72 Return
	
Label_3187:
	CanSee(var_48_bool, var_47_object); // 0xc73 Func
	var_44_bool = var_48_bool; // 0xc75 Mov
	return 4; // 0xc76 Return
}


func_3936()
{
	var_44_string = "k2q01"; // 0xf61 PushS
	var_45_int = 5; // 0xf62 PushI
	SetVariable(var_44_string, var_45_int); // 0xf63 Func
	func_4369(); // 0xf66 NEW_2
	return 0; // 0xf68 Return
}


func_3427(var_70_bool, var_72_float)
{
	var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_bool = 0; var_81_bool = 0; var_82_float = 0; var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_bool = 0; var_90_bool = 0; // 0xd63 PushV
	GetPosition(var_83_cvector); // 0xd64 ObjFunc
	GetEyesHeight(var_82_float); // 0xd66 ObjFunc
	var_91_float = GetByIndex(var_83_cvector, 1); // 0xd68 PushE
	var_91_float = var_91_float + var_82_float; // 0xd69 Add2
	SetByIndex(var_83_cvector, 1) = var_91_float; // 0xd6a PopE
	GetPosition(var_84_cvector); // 0xd6b Func
	GetEyesHeight(var_82_float); // 0xd6d Func
	var_92_float = GetByIndex(var_84_cvector, 1); // 0xd6f PushE
	var_92_float = var_92_float + var_82_float; // 0xd70 Add2
	SetByIndex(var_84_cvector, 1) = var_92_float; // 0xd71 PopE
	var_85_cvector = var_83_cvector - var_84_cvector; // 0xd72 Sub2
	var_93_float = GetByIndex(var_85_cvector, 1); // 0xd73 PushE
	var_93_float = 0; // 0xd74 MovI
	SetByIndex(var_85_cvector, 1) = var_93_float; // 0xd75 PopE
	var_94_int = var_85_cvector | var_85_cvector; // 0xd76 Or
	var_95_float = sqrt(var_94_int); // 0xd77 Sqrt
	var_85_cvector = var_85_cvector / var_85_cvector; // 0xd78 Div2
	var_86_cvector = -var_85_cvector; // 0xd79 Neg2
	var_96_float = var_85_cvector * var_72_float; // 0xd7a Mult
	var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); // 0xd7b PushV
	var_99_cvector = CVector(0.0, 1.0, 0.0); // 0xd7c PushVec
	var_98_cvector = var_86_cvector ^ var_99_cvector; // 0xd7d Xor2
	func_3709(var_97_cvector, var_98_cvector); // 0xd7e NEW_2
	var_105_int = 25; // 0xd80 PushI
	var_106_float = var_97_cvector * var_105_int; // 0xd81 Mult
	var_107_int = var_96_float + var_106_float; // 0xd82 Add
	var_108_cvector = CVector(0.0, 10.0, 0.0); // 0xd83 PushVec
	var_87_cvector = var_107_int - var_108_cvector; // 0xd84 Sub2
	var_88_cvector = var_84_cvector + var_87_cvector; // 0xd85 Add2
	IsOverrideActive(var_89_bool); // 0xd86 Func
	var_109_bool = var_89_bool; // 0xd88 Push
	if(var_109_bool == 0) goto Label_3468; // 0xd89 JumpB
	var_70_bool = 0; // 0xd8a MovB
	return 18; // 0xd8b Return
	
Label_3468:
	StopWorld(); // 0xd8c Func
	CameraTransit(var_88_cvector, var_86_cvector); // 0xd8e Func
	var_110_float = GetByIndex(var_87_cvector, 0); // 0xd90 PushE
	var_111_float = GetByIndex(var_87_cvector, 2); // 0xd91 PushE
	Rotate(var_110_float, var_111_float); // 0xd92 Func
	var_112_bool = 0; // 0xd94 PushV
	func_3886(var_112_bool); // 0xd95 NEW_2
	if(var_112_bool == 0) goto Label_3481; // 0xd97 JumpB
	goto Label_3489; // 0xd98 Jump
	
Label_3489:
	CameraWaitForPlayFinish(); // 0xda1 Func
	ResumeWorld(); // 0xda3 Func
	var_70_bool = 1; // 0xda5 MovB
	return 18; // 0xda6 Return
	
Label_3481:
	var_113_string = "head"; // 0xd99 PushS
	HasAnimationTrack(var_90_bool, var_113_string); // 0xd9a Func
	var_114_bool = var_90_bool; // 0xd9c Push
	if(var_114_bool == 0) goto Label_3489; // 0xd9d JumpB
	var_115_string = "head"; // 0xd9e PushS
	LookAsyncCamera(var_115_string); // 0xd9f Func
}


func_3945()
{
	var_169_object = Obj(); var_170_object = Obj(); // 0xf69 PushV
	var_171_int = 0; var_172_string = ""; // 0xf6a PushV
	var_172_string = "k7q01CorpseMark"; // 0xf6b MovS
	func_3719(var_171_int, var_172_string); // 0xf6c NEW_2
	var_175_int = 0; // 0xf6e PushI
	var_176_bool = var_171_int == var_175_int; // 0xf6f Eq
	if(var_176_bool == 0) goto Label_3976; // 0xf70 JumpB
	var_177_string = "k7q01CorpseMark"; // 0xf71 PushS
	var_178_int = 1; // 0xf72 PushI
	SetVariable(var_177_string, var_178_int); // 0xf73 Func
	var_179_object = Obj(); // 0xf75 PushV
	func_4475(var_179_object); // 0xf76 NEW_2
	var_170_object = var_179_object; // 0xf77 Mov
	var_180_string = "k7q01BirdmaskGotoCorpse"; // 0xf79 PushS
	var_181_string = "pt_d7q02_corpse"; // 0xf7a PushS
	var_182_int = 3; // 0xf7b PushI
	var_183_int = 526214; // 0xf7c PushI
	var_184_float = 0; // 0xf7d PushV
	func_3834(var_184_float); // 0xf7e NEW_2
	AddMark(var_180_string, var_181_string, var_182_int, var_183_int, var_184_float); // 0xf80 ObjFunc
	var_185_bool = 0; var_186_string = ""; var_187_string = ""; // 0xf82 PushV
	var_186_string = "quest_k7_01"; // 0xf83 MovS
	var_187_string = "place_corpse"; // 0xf84 MovS
	func_3822(var_185_bool, var_186_string, var_187_string); // 0xf85 NEW_2
	var_170_object = 0; // 0xf87 SetNull
	
Label_3976:
	return 2; // 0xf88 Return
}


func_4203(var_494_bool)
{
	var_496_int = 0; var_497_string = ""; // 0x106c PushV
	var_497_string = "k7q01"; // 0x106d MovS
	func_3719(var_496_int, var_497_string); // 0x106e NEW_2
	var_498_int = 3; // 0x1070 PushI
	var_499_bool = var_496_int == var_498_int; // 0x1071 Eq
	if(var_499_bool == 0) goto Label_4213; // 0x1072 JumpB
	var_494_bool = 1; // 0x1073 MovB
	return 0; // 0x1074 Return
	
Label_4213:
	var_494_bool = 0; // 0x1075 MovB
	return 0; // 0x1076 Return
}


func_1387(var_0_object, var_552_int, var_553_object)
{
	var_555_object = Obj(); var_556_bool = 0; var_557_int = 0; var_558_bool = 0; var_559_object = Obj(); var_560_bool = 0; var_561_int = 0; var_562_bool = 0; // 0x56b PushV
	var_0_object = var_553_object; // 0x56c TMov
	var_563_bool = 0; var_564_object = Obj(); var_565_float = 0; // 0x56d PushV
	var_564_object = var_553_object; // 0x56e Mov
	var_565_float = 70.0; // 0x56f MovF
	func_3427(var_564_object, var_565_float); // 0x570 NEW_2
	var_566_bool = var_563_bool == 0; // 0x572 Not
	if(var_566_bool == 0) goto Label_1398; // 0x573 JumpB
	var_552_int = -2; // 0x574 MovI
	return 8; // 0x575 Return
	
Label_1398:
	CreateDialog(var_559_object); // 0x576 Func
	var_567_int = 0; // 0x578 PushV
	func_3880(var_567_int); // 0x579 NEW_2
	SetNPCName(var_567_int); // 0x57b ObjFunc
	var_568_int = 0; // 0x57d PushV
	func_3878(var_568_int); // 0x57e NEW_2
	SetNPCDescription(var_568_int); // 0x580 ObjFunc
	var_569_string = ""; // 0x582 PushV
	func_3882(var_569_string); // 0x583 NEW_2
	SetPhoto(var_569_string); // 0x585 ObjFunc
	var_570_string = ""; // 0x587 PushV
	func_3884(var_570_string); // 0x588 NEW_2
	SetPhoto2(var_570_string); // 0x58a ObjFunc
	var_571_int = 0; // 0x58c PushV
	func_4525(var_571_int); // 0x58d NEW_2
	SetPlayerName(var_571_int); // 0x58f ObjFunc
	var_561_int = -1; // 0x591 MovI
	IsOverrideActive(var_560_bool); // 0x592 Func
	var_572_bool = var_560_bool; // 0x594 Push
	if(var_572_bool == 0) goto Label_1432; // 0x595 JumpB
	var_552_int = -2; // 0x596 MovI
	return 8; // 0x597 Return
	
Label_1432:
	DoDialog(var_559_object); // 0x598 Func
	var_573_bool = 0; var_574_object = Obj(); // 0x59a PushV
	var_575_object = Obj(); // 0x59b PushV
	func_3703(var_575_object); // 0x59c NEW_2
	var_574_object = var_575_object; // 0x59d Mov
	func_3512(var_573_bool, var_574_object); // 0x59f NEW_2
	var_576_object = Obj(); var_577_object = Obj(); // 0x5a1 PushV
	var_576_object = var_553_object; // 0x5a2 Mov
	var_577_object = var_559_object; // 0x5a3 Mov
	TaskCall(7); // 0x5a4 TaskCall
	func_1468(var_578_object, var_579_object, var_580_string, var_581_bool, var_576_object, var_577_object); // 0x5a5 NEW_2
	TaskReturn(); // 0x5a6 TaskReturn
	IsDialogEnd(var_562_bool); // 0x5a8 ObjFunc
	
Label_1450:
	var_615_bool = var_562_bool == 0; // 0x5aa Not
	if(var_615_bool == 0) goto Label_1457; // 0x5ab JumpB
	sync(); // 0x5ac Func
	IsDialogEnd(var_562_bool); // 0x5ae ObjFunc
	goto Label_1450; // 0x5b0 Jump
	
Label_1457:
	var_616_object = Obj(); // 0x5b1 PushV
	var_616_object = var_553_object; // 0x5b2 Mov
	func_3495(); // 0x5b3 NEW_2
	StopDialog(var_559_object); // 0x5b5 Func
	GetReturnValue(var_561_int); // 0x5b7 ObjFunc
	var_552_int = var_561_int; // 0x5b9 Mov
	return 8; // 0x5ba Return
}


func_623(var_0_object, var_1_object, var_2_object, var_3_string, var_451_object, var_452_object)
{
	var_0_object = var_452_object; // 0x270 TMov
	var_1_object = var_451_object; // 0x271 TMov
	var_3_string = 0; // 0x272 TMovB
	var_457_int = 1; // 0x273 PushI
	if(var_457_int == 0) goto Label_739; // 0x274 JumpB
	var_458_bool = 0; var_459_object = Obj(); // 0x275 PushV
	var_459_object = var_1_object; // 0x276 MovT
	func_4239(var_459_object); // 0x277 NEW_2
	if(var_458_bool == 0) goto Label_659; // 0x279 JumpB
	var_464_object = Obj(); var_465_object = Obj(); // 0x27a PushV
	var_464_object = var_1_object; // 0x27b MovT
	var_465_object = var_0_object; // 0x27c MovT
	func_4027(); // 0x27d NEW_2
	var_468_string = ""; // 0x27f PushV
	var_468_string = "Neutral"; // 0x280 MovS
	func_769(var_452_object, var_468_string); // 0x281 NEW_2
	var_476_int = 526373; // 0x283 PushI
	SetMessage(var_476_int); // 0x284 TObjFunc
	ClearReplies(); // 0x286 TObjFunc
	var_477_int = 526374; // 0x288 PushI
	var_478_int = 27655; // 0x289 PushI
	var_479_int = 27654; // 0x28a PushI
	AddReply(var_477_int, var_478_int, var_479_int); // 0x28b TObjFunc
	var_480_int = 528676; // 0x28d PushI
	var_481_int = 27655; // 0x28e PushI
	var_482_int = 30089; // 0x28f PushI
	AddReply(var_480_int, var_481_int, var_482_int); // 0x290 TObjFunc
	goto Label_739; // 0x292 Jump
	
Label_739:
	var_483_bool = 0; // 0x2e3 PushV
	func_3886(var_483_bool); // 0x2e4 NEW_2
	if(var_483_bool == 0) goto Label_754; // 0x2e6 JumpB
	
Label_743:
	lshWaitForAnimEnd(); // 0x2e7 Func
	var_484_string = var_3_string; // 0x2e9 PushT
	if(var_484_string == 0) goto Label_748; // 0x2ea JumpB
	goto Label_753; // 0x2eb Jump
	
Label_753:
	goto Label_768; // 0x2f1 Jump
	
Label_768:
	return 0; // 0x300 Return
	
Label_748:
	var_485_string = ""; // 0x2ec PushV
	var_485_string = var_2_object; // 0x2ed MovT
	func_3650(var_485_string); // 0x2ee NEW_2
	goto Label_743; // 0x2f0 Jump
	
Label_754:
	var_486_string = "all"; // 0x2f2 PushS
	var_487_string = "idle"; // 0x2f3 PushS
	PlayAnimation(var_486_string, var_487_string); // 0x2f4 Func
	
Label_758:
	WaitForAnimEnd(); // 0x2f6 Func
	var_488_string = var_3_string; // 0x2f8 PushT
	if(var_488_string == 0) goto Label_763; // 0x2f9 JumpB
	goto Label_768; // 0x2fa Jump
	
Label_763:
	var_489_string = "all"; // 0x2fb PushS
	var_490_string = "idle"; // 0x2fc PushS
	PlayAnimation(var_489_string, var_490_string); // 0x2fd Func
	goto Label_758; // 0x2ff Jump
	
Label_659:
	var_491_string = ""; // 0x293 PushV
	var_491_string = "Neutral"; // 0x294 MovS
	func_769(var_452_object, var_491_string); // 0x295 NEW_2
	var_492_int = 526173; // 0x297 PushI
	SetMessage(var_492_int); // 0x298 TObjFunc
	ClearReplies(); // 0x29a TObjFunc
	var_493_bool = 0; // 0x29c PushV
	var_493_bool = 0; // 0x29d MovB
	var_494_bool = 0; var_495_object = Obj(); // 0x29e PushV
	var_495_object = var_1_object; // 0x29f MovT
	func_4203(var_495_object); // 0x2a0 NEW_2
	if(var_494_bool == 0) goto Label_681; // 0x2a2 JumpB
	var_500_bool = 0; var_501_object = Obj(); // 0x2a3 PushV
	var_501_object = var_1_object; // 0x2a4 MovT
	func_4215(var_501_object); // 0x2a5 NEW_2
	if(var_500_bool == 0) goto Label_681; // 0x2a7 JumpB
	var_493_bool = 1; // 0x2a8 MovB
	
Label_681:
	if(var_493_bool == 0) goto Label_687; // 0x2a9 JumpB
	var_506_int = 526174; // 0x2aa PushI
	var_507_int = 27455; // 0x2ab PushI
	var_508_int = 27454; // 0x2ac PushI
	AddReply(var_506_int, var_507_int, var_508_int); // 0x2ad TObjFunc
	
Label_687:
	var_509_bool = 0; // 0x2af PushV
	var_509_bool = 0; // 0x2b0 MovB
	var_510_bool = 0; var_511_object = Obj(); // 0x2b1 PushV
	var_511_object = var_1_object; // 0x2b2 MovT
	func_4203(var_511_object); // 0x2b3 NEW_2
	if(var_510_bool == 0) goto Label_700; // 0x2b5 JumpB
	var_512_bool = 0; var_513_object = Obj(); // 0x2b6 PushV
	var_513_object = var_1_object; // 0x2b7 MovT
	func_4192(var_512_bool, var_513_object); // 0x2b8 NEW_2
	if(var_512_bool == 0) goto Label_700; // 0x2ba JumpB
	var_509_bool = 1; // 0x2bb MovB
	
Label_700:
	if(var_509_bool == 0) goto Label_706; // 0x2bc JumpB
	var_521_int = 526178; // 0x2bd PushI
	var_522_int = 27459; // 0x2be PushI
	var_523_int = 27458; // 0x2bf PushI
	AddReply(var_521_int, var_522_int, var_523_int); // 0x2c0 TObjFunc
	
Label_706:
	var_524_bool = 0; var_525_object = Obj(); // 0x2c2 PushV
	var_525_object = var_1_object; // 0x2c3 MovT
	func_4227(var_525_object); // 0x2c4 NEW_2
	if(var_524_bool == 0) goto Label_716; // 0x2c6 JumpB
	var_530_int = 526378; // 0x2c7 PushI
	var_531_int = 27659; // 0x2c8 PushI
	var_532_int = 27658; // 0x2c9 PushI
	AddReply(var_530_int, var_531_int, var_532_int); // 0x2ca TObjFunc
	
Label_716:
	var_533_bool = 0; var_534_object = Obj(); // 0x2cc PushV
	var_534_object = var_1_object; // 0x2cd MovT
	func_4251(var_534_object); // 0x2ce NEW_2
	if(var_533_bool == 0) goto Label_726; // 0x2d0 JumpB
	var_539_int = 526387; // 0x2d1 PushI
	var_540_int = 44876; // 0x2d2 PushI
	var_541_int = 27667; // 0x2d3 PushI
	AddReply(var_539_int, var_540_int, var_541_int); // 0x2d4 TObjFunc
	
Label_726:
	var_542_int = 526181; // 0x2d6 PushI
	var_543_int = -1; // 0x2d7 PushI
	var_544_int = 27461; // 0x2d8 PushI
	AddReply(var_542_int, var_543_int, var_544_int); // 0x2d9 TObjFunc
	var_545_int = 528675; // 0x2db PushI
	var_546_int = -1; // 0x2dc PushI
	var_547_int = 30088; // 0x2dd PushI
	AddReply(var_545_int, var_546_int, var_547_int); // 0x2de TObjFunc
	goto Label_739; // 0x2e0 Jump
}


func_3696()
{
	var_39_bool = 0; // 0xe70 PushV
	func_3886(var_39_bool); // 0xe71 NEW_2
	if(var_39_bool == 0) goto Label_3702; // 0xe73 JumpB
	lshStopSpeech(); // 0xe74 Func
	
Label_3702:
	return 0; // 0xe76 Return
}


func_2929(var_0_object, var_768_int, var_769_object)
{
	var_771_object = Obj(); var_772_bool = 0; var_773_int = 0; var_774_bool = 0; var_775_object = Obj(); var_776_bool = 0; var_777_int = 0; var_778_bool = 0; // 0xb71 PushV
	var_0_object = var_769_object; // 0xb72 TMov
	var_779_bool = 0; var_780_object = Obj(); var_781_float = 0; // 0xb73 PushV
	var_780_object = var_769_object; // 0xb74 Mov
	var_781_float = 70.0; // 0xb75 MovF
	func_3427(var_780_object, var_781_float); // 0xb76 NEW_2
	var_782_bool = var_779_bool == 0; // 0xb78 Not
	if(var_782_bool == 0) goto Label_2940; // 0xb79 JumpB
	var_768_int = -2; // 0xb7a MovI
	return 8; // 0xb7b Return
	
Label_2940:
	CreateDialog(var_775_object); // 0xb7c Func
	var_783_int = 0; // 0xb7e PushV
	func_3880(var_783_int); // 0xb7f NEW_2
	SetNPCName(var_783_int); // 0xb81 ObjFunc
	var_784_int = 0; // 0xb83 PushV
	func_3878(var_784_int); // 0xb84 NEW_2
	SetNPCDescription(var_784_int); // 0xb86 ObjFunc
	var_785_string = ""; // 0xb88 PushV
	func_3882(var_785_string); // 0xb89 NEW_2
	SetPhoto(var_785_string); // 0xb8b ObjFunc
	var_786_string = ""; // 0xb8d PushV
	func_3884(var_786_string); // 0xb8e NEW_2
	SetPhoto2(var_786_string); // 0xb90 ObjFunc
	var_787_int = 0; // 0xb92 PushV
	func_4525(var_787_int); // 0xb93 NEW_2
	SetPlayerName(var_787_int); // 0xb95 ObjFunc
	var_777_int = -1; // 0xb97 MovI
	IsOverrideActive(var_776_bool); // 0xb98 Func
	var_788_bool = var_776_bool; // 0xb9a Push
	if(var_788_bool == 0) goto Label_2974; // 0xb9b JumpB
	var_768_int = -2; // 0xb9c MovI
	return 8; // 0xb9d Return
	
Label_2974:
	DoDialog(var_775_object); // 0xb9e Func
	var_789_bool = 0; var_790_object = Obj(); // 0xba0 PushV
	var_791_object = Obj(); // 0xba1 PushV
	func_3703(var_791_object); // 0xba2 NEW_2
	var_790_object = var_791_object; // 0xba3 Mov
	func_3512(var_789_bool, var_790_object); // 0xba5 NEW_2
	var_792_object = Obj(); var_793_object = Obj(); // 0xba7 PushV
	var_792_object = var_769_object; // 0xba8 Mov
	var_793_object = var_775_object; // 0xba9 Mov
	TaskCall(13); // 0xbaa TaskCall
	func_3010(var_794_object, var_795_object, var_796_string, var_797_bool, var_792_object, var_793_object); // 0xbab NEW_2
	TaskReturn(); // 0xbac TaskReturn
	IsDialogEnd(var_778_bool); // 0xbae ObjFunc
	
Label_2992:
	var_822_bool = var_778_bool == 0; // 0xbb0 Not
	if(var_822_bool == 0) goto Label_2999; // 0xbb1 JumpB
	sync(); // 0xbb2 Func
	IsDialogEnd(var_778_bool); // 0xbb4 ObjFunc
	goto Label_2992; // 0xbb6 Jump
	
Label_2999:
	var_823_object = Obj(); // 0xbb7 PushV
	var_823_object = var_769_object; // 0xbb8 Mov
	func_3495(); // 0xbb9 NEW_2
	StopDialog(var_775_object); // 0xbbb Func
	GetReturnValue(var_777_int); // 0xbbd ObjFunc
	var_768_int = var_777_int; // 0xbbf Mov
	return 8; // 0xbc0 Return
}


func_3703(var_132_object)
{
	var_133_object = Obj(); var_134_object = Obj(); // 0xe77 PushV
	self(var_134_object); // 0xe78 Func
	var_132_object = var_134_object; // 0xe7a Mov
	return 2; // 0xe7b Return
}


func_4215(var_500_bool)
{
	var_502_int = 0; var_503_string = ""; // 0x1078 PushV
	var_503_string = "ook7Burah1"; // 0x1079 MovS
	func_3719(var_502_int, var_503_string); // 0x107a NEW_2
	var_504_int = 0; // 0x107c PushI
	var_505_bool = var_502_int == var_504_int; // 0x107d Eq
	if(var_505_bool == 0) goto Label_4225; // 0x107e JumpB
	var_500_bool = 1; // 0x107f MovB
	return 0; // 0x1080 Return
	
Label_4225:
	var_500_bool = 0; // 0x1081 MovB
	return 0; // 0x1082 Return
}


func_3192()
{
	var_826_float = 0; var_827_float = 0; // 0xc78 PushV
	var_828_int = 8; // 0xc79 PushI
	var_829_int = 16; // 0xc7a PushI
	rand(var_827_float, var_828_int, var_829_int); // 0xc7b Func
	var_830_int = 10; // 0xc7d PushI
	SetTimer(var_830_int, var_827_float); // 0xc7e Func
	return 2; // 0xc80 Return
}


func_2425(var_2_object, var_672_string)
{
	var_673_bool = 0; // 0x97a PushV
	func_3886(var_673_bool); // 0x97b NEW_2
	var_674_bool = var_673_bool == 0; // 0x97d Not
	if(var_674_bool == 0) goto Label_2432; // 0x97e JumpB
	return 0; // 0x97f Return
	
Label_2432:
	var_675_bool = var_672_string == var_2_object; // 0x980 Eq
	if(var_675_bool == 0) goto Label_2435; // 0x981 JumpB
	return 0; // 0x982 Return
	
Label_2435:
	var_676_string = ""; var_677_bool = 0; // 0x983 PushV
	var_676_string = var_672_string; // 0x984 Mov
	var_678_string = ""; // 0x985 PushS
	var_679_bool = var_672_string == var_678_string; // 0x986 Eq
	if(var_679_bool == 0) goto Label_2442; // 0x987 JumpB
	var_677_bool = 0; // 0x988 MovB
	goto Label_2443; // 0x989 Jump
	
Label_2443:
	func_3666(var_676_string, var_677_bool); // 0x98b NEW_2
	var_2_object = var_672_string; // 0x98d TMov
	return 0; // 0x98e Return
	
Label_2442:
	var_677_bool = 1; // 0x98a MovB
}


func_4475(var_52_object)
{
	var_53_object = Obj(); var_54_object = Obj(); var_55_object = Obj(); var_56_object = Obj(); // 0x117b PushV
	GetMainOutdoorScene(var_55_object); // 0x117c Func
	var_57_bool = var_55_object == 0; // 0x117e NullEq
	if(var_57_bool == 0) goto Label_4486; // 0x117f JumpB
	var_58_string = "Can't find main outdoor scene"; // 0x1180 PushS
	Trace(var_58_string); // 0x1181 Func
	var_56_object = 0; // 0x1183 SetNull
	var_52_object = var_56_object; // 0x1184 Mov
	return 4; // 0x1185 Return
	
Label_4486:
	GetMap(var_56_object); // 0x1186 ObjFunc
	var_52_object = var_56_object; // 0x1188 Mov
	return 4; // 0x1189 Return
}


func_3709(var_97_cvector, var_98_cvector)
{
	var_100_float = 0; var_101_float = 0; // 0xe7d PushV
	var_102_int = var_98_cvector | var_98_cvector; // 0xe7e Or
	var_101_float = sqrt(var_102_int); // 0xe7f Sqrt2
	var_103_float = 0.0; // 0xe80 PushF
	var_104_bool = var_101_float < var_103_float; // 0xe81 LT
	if(var_104_bool == 0) goto Label_3717; // 0xe82 JumpB
	var_97_cvector = CVector(0.0, 0.0, 0.0); // 0xe83 MovV
	return 2; // 0xe84 Return
	
Label_3717:
	var_97_cvector = var_98_cvector / var_98_cvector; // 0xe85 Div2
	return 2; // 0xe86 Return
}


func_384(var_0_object, var_1_object, var_2_object, var_3_string, var_225_object, var_226_object)
{
	var_0_object = var_226_object; // 0x181 TMov
	var_1_object = var_225_object; // 0x182 TMov
	var_3_string = 0; // 0x183 TMovB
	var_231_int = 1; // 0x184 PushI
	if(var_231_int == 0) goto Label_412; // 0x185 JumpB
	var_232_string = ""; // 0x186 PushV
	var_232_string = "Neutral"; // 0x187 MovS
	func_442(var_226_object, var_232_string); // 0x188 NEW_2
	var_249_int = 525471; // 0x18a PushI
	SetMessage(var_249_int); // 0x18b TObjFunc
	ClearReplies(); // 0x18d TObjFunc
	var_250_int = 525472; // 0x18f PushI
	var_251_int = 27550; // 0x190 PushI
	var_252_int = 26828; // 0x191 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x192 TObjFunc
	var_253_int = 526276; // 0x194 PushI
	var_254_int = 28085; // 0x195 PushI
	var_255_int = 27552; // 0x196 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x197 TObjFunc
	goto Label_412; // 0x199 Jump
	
Label_412:
	var_256_bool = 0; // 0x19c PushV
	func_3886(var_256_bool); // 0x19d NEW_2
	if(var_256_bool == 0) goto Label_427; // 0x19f JumpB
	
Label_416:
	lshWaitForAnimEnd(); // 0x1a0 Func
	var_257_string = var_3_string; // 0x1a2 PushT
	if(var_257_string == 0) goto Label_421; // 0x1a3 JumpB
	goto Label_426; // 0x1a4 Jump
	
Label_426:
	goto Label_441; // 0x1aa Jump
	
Label_441:
	return 0; // 0x1b9 Return
	
Label_421:
	var_258_string = ""; // 0x1a5 PushV
	var_258_string = var_2_object; // 0x1a6 MovT
	func_3650(var_258_string); // 0x1a7 NEW_2
	goto Label_416; // 0x1a9 Jump
	
Label_427:
	var_269_string = "all"; // 0x1ab PushS
	var_270_string = "idle"; // 0x1ac PushS
	PlayAnimation(var_269_string, var_270_string); // 0x1ad Func
	
Label_431:
	WaitForAnimEnd(); // 0x1af Func
	var_271_string = var_3_string; // 0x1b1 PushT
	if(var_271_string == 0) goto Label_436; // 0x1b2 JumpB
	goto Label_441; // 0x1b3 Jump
	
Label_436:
	var_272_string = "all"; // 0x1b4 PushS
	var_273_string = "idle"; // 0x1b5 PushS
	PlayAnimation(var_272_string, var_273_string); // 0x1b6 Func
	goto Label_431; // 0x1b8 Jump
}


func_3201()
{
	var_825_int = 10; // 0xc81 PushI
	KillTimer(var_825_int); // 0xc82 Func
	return 0; // 0xc84 Return
}


func_1922(var_2_object, var_318_string)
{
	var_319_bool = 0; // 0x783 PushV
	func_3886(var_319_bool); // 0x784 NEW_2
	var_320_bool = var_319_bool == 0; // 0x786 Not
	if(var_320_bool == 0) goto Label_1929; // 0x787 JumpB
	return 0; // 0x788 Return
	
Label_1929:
	var_321_bool = var_318_string == var_2_object; // 0x789 Eq
	if(var_321_bool == 0) goto Label_1932; // 0x78a JumpB
	return 0; // 0x78b Return
	
Label_1932:
	var_322_string = ""; var_323_bool = 0; // 0x78c PushV
	var_322_string = var_318_string; // 0x78d Mov
	var_324_string = ""; // 0x78e PushS
	var_325_bool = var_318_string == var_324_string; // 0x78f Eq
	if(var_325_bool == 0) goto Label_1939; // 0x790 JumpB
	var_323_bool = 0; // 0x791 MovB
	goto Label_1940; // 0x792 Jump
	
Label_1940:
	func_3666(var_322_string, var_323_bool); // 0x794 NEW_2
	var_2_object = var_318_string; // 0x796 TMov
	return 0; // 0x797 Return
	
Label_1939:
	var_323_bool = 1; // 0x793 MovB
}


func_4227(var_524_bool)
{
	var_526_int = 0; var_527_string = ""; // 0x1084 PushV
	var_527_string = "k7q03"; // 0x1085 MovS
	func_3719(var_526_int, var_527_string); // 0x1086 NEW_2
	var_528_int = 0; // 0x1088 PushI
	var_529_bool = var_526_int == var_528_int; // 0x1089 Eq
	if(var_529_bool == 0) goto Label_4237; // 0x108a JumpB
	var_524_bool = 1; // 0x108b MovB
	return 0; // 0x108c Return
	
Label_4237:
	var_524_bool = 0; // 0x108d MovB
	return 0; // 0x108e Return
}


func_3719(var_330_int, var_331_string)
{
	var_332_int = 0; var_333_int = 0; // 0xe87 PushV
	GetVariable(var_331_string, var_333_int); // 0xe88 Func
	var_330_int = var_333_int; // 0xe8a Mov
	return 2; // 0xe8b Return
}


func_3977()
{
	var_163_string = "ook7Burah1"; // 0xf8a PushS
	var_164_int = 1; // 0xf8b PushI
	SetVariable(var_163_string, var_164_int); // 0xf8c Func
	return 0; // 0xf8e Return
}


func_3724(var_91_object, var_92_string)
{
	var_93_object = Obj(); var_94_object = Obj(); var_95_object = Obj(); var_96_object = Obj(); // 0xe8c PushV
	GetMainOutdoorScene(var_95_object); // 0xe8d Func
	var_97_string = ".bin"; // 0xe8f PushS
	var_98_int = var_92_string + var_97_string; // 0xe90 Add
	AddBlankActor(var_96_object, var_95_object, var_92_string, var_98_int); // 0xe91 Func
	var_91_object = var_96_object; // 0xe93 Mov
	return 4; // 0xe94 Return
}


func_4492(var_135_object, var_136_string, var_137_float)
{
	var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_object = Obj(); var_142_bool = 0; var_143_cvector = CVector(0,0,0); var_144_cvector = CVector(0,0,0); var_145_object = Obj(); var_146_bool = 0; // 0x118c PushV
	GetMainOutdoorScene(var_145_object); // 0x118d Func
	var_147_bool = var_145_object == 0; // 0x118f NullEq
	if(var_147_bool == 0) goto Label_4501; // 0x1190 JumpB
	var_148_string = "Can't find main outdoor scene"; // 0x1191 PushS
	Trace(var_148_string); // 0x1192 Func
	return 8; // 0x1194 Return
	
Label_4501:
	GetLocator(var_136_string, var_146_bool, var_143_cvector, var_144_cvector); // 0x1195 ObjFunc
	var_149_bool = var_146_bool == 0; // 0x1197 Not
	if(var_149_bool == 0) goto Label_4511; // 0x1198 JumpB
	var_150_string = "Warning: outdoor scene locator "; // 0x1199 PushS
	var_151_int = var_150_string + var_136_string; // 0x119a Add
	var_152_string = " doesnt exist"; // 0x119b PushS
	var_153_int = var_151_int + var_152_string; // 0x119c Add
	Trace(var_153_int); // 0x119d Func
	
Label_4511:
	GetMap(var_135_object); // 0x119f ObjFunc
	var_154_bool = var_135_object == 0; // 0x11a1 NullEq
	if(var_154_bool == 0) goto Label_4519; // 0x11a2 JumpB
	var_155_string = "Can't find map"; // 0x11a3 PushS
	Trace(var_155_string); // 0x11a4 Func
	return 8; // 0x11a6 Return
	
Label_4519:
	var_156_float = GetByIndex(var_143_cvector, 0); // 0x11a7 PushE
	var_157_float = GetByIndex(var_143_cvector, 2); // 0x11a8 PushE
	SetMapParams(var_156_float, var_157_float, var_137_float); // 0x11a9 ObjFunc
	return 8; // 0x11ab Return
}


func_4239(var_458_bool)
{
	var_460_int = 0; var_461_string = ""; // 0x1090 PushV
	var_461_string = "ook7Burah2"; // 0x1091 MovS
	func_3719(var_460_int, var_461_string); // 0x1092 NEW_2
	var_462_int = 0; // 0x1094 PushI
	var_463_bool = var_460_int == var_462_int; // 0x1095 Eq
	if(var_463_bool == 0) goto Label_4249; // 0x1096 JumpB
	var_458_bool = 1; // 0x1097 MovB
	return 0; // 0x1098 Return
	
Label_4249:
	var_458_bool = 0; // 0x1099 MovB
	return 0; // 0x109a Return
}


func_144(var_2_object, var_394_string)
{
	var_395_bool = 0; // 0x91 PushV
	func_3886(var_395_bool); // 0x92 NEW_2
	var_396_bool = var_395_bool == 0; // 0x94 Not
	if(var_396_bool == 0) goto Label_151; // 0x95 JumpB
	return 0; // 0x96 Return
	
Label_151:
	var_397_bool = var_394_string == var_2_object; // 0x97 Eq
	if(var_397_bool == 0) goto Label_154; // 0x98 JumpB
	return 0; // 0x99 Return
	
Label_154:
	var_398_string = ""; var_399_bool = 0; // 0x9a PushV
	var_398_string = var_394_string; // 0x9b Mov
	var_400_string = ""; // 0x9c PushS
	var_401_bool = var_394_string == var_400_string; // 0x9d Eq
	if(var_401_bool == 0) goto Label_161; // 0x9e JumpB
	var_399_bool = 0; // 0x9f MovB
	goto Label_162; // 0xa0 Jump
	
Label_162:
	func_3666(var_398_string, var_399_bool); // 0xa2 NEW_2
	var_2_object = var_394_string; // 0xa4 TMov
	return 0; // 0xa5 Return
	
Label_161:
	var_399_bool = 1; // 0xa1 MovB
}


func_3983()
{
	var_192_int = 0; var_193_int = 0; // 0xf8f PushV
	var_194_string = "k7q01"; // 0xf90 PushS
	var_195_int = 4; // 0xf91 PushI
	SetVariable(var_194_string, var_195_int); // 0xf92 Func
	func_4382(); // 0xf95 NEW_2
	var_204_string = "bird_balahon"; // 0xf97 PushS
	var_205_int = 1; // 0xf98 PushI
	RemoveItemByType(var_193_int, var_204_string, var_205_int); // 0xf99 ObjFunc
	return 2; // 0xf9b Return
}


func_3735(var_71_string, var_72_bool)
{
	var_73_object = Obj(); var_74_object = Obj(); // 0xe97 PushV
	FindActor(var_74_object, var_71_string); // 0xe98 Func
	var_75_bool = var_74_object == 0; // 0xe9a Not
	if(var_75_bool == 0) goto Label_3747; // 0xe9b JumpB
	var_76_string = "Door "; // 0xe9c PushS
	var_77_int = var_76_string + var_71_string; // 0xe9d Add
	var_78_string = " not found"; // 0xe9e PushS
	var_79_int = var_77_int + var_78_string; // 0xe9f Add
	Trace(var_79_int); // 0xea0 Func
	goto Label_3750; // 0xea2 Jump
	
Label_3750:
	return 2; // 0xea6 Return
	
Label_3747:
	var_80_string = "locked"; // 0xea3 PushS
	SetProperty(var_80_string, var_72_bool); // 0xea4 ObjFunc
}


func_4251(var_533_bool)
{
	var_535_int = 0; var_536_string = ""; // 0x109c PushV
	var_536_string = "k7q03"; // 0x109d MovS
	func_3719(var_535_int, var_536_string); // 0x109e NEW_2
	var_537_int = 2; // 0x10a0 PushI
	var_538_bool = var_535_int == var_537_int; // 0x10a1 Eq
	if(var_538_bool == 0) goto Label_4261; // 0x10a2 JumpB
	var_533_bool = 1; // 0x10a3 MovB
	return 0; // 0x10a4 Return
	
Label_4261:
	var_533_bool = 0; // 0x10a5 MovB
	return 0; // 0x10a6 Return
}


func_3996()
{
	var_44_object = Obj(); var_45_object = Obj(); // 0xf9c PushV
	var_46_object = Obj(); // 0xf9d PushV
	func_4475(var_46_object); // 0xf9e NEW_2
	var_45_object = var_46_object; // 0xf9f Mov
	var_53_string = "k7q03BurahGotoFather"; // 0xfa1 PushS
	var_54_string = "pt_map_burah_home"; // 0xfa2 PushS
	var_55_int = 0; // 0xfa3 PushI
	var_56_int = 526394; // 0xfa4 PushI
	var_57_float = 0; // 0xfa5 PushV
	func_3834(var_57_float); // 0xfa6 NEW_2
	AddMark(var_53_string, var_54_string, var_55_int, var_56_int, var_57_float); // 0xfa8 ObjFunc
	func_4395(); // 0xfab NEW_2
	func_4408(); // 0xfae NEW_2
	var_91_object = Obj(); var_92_string = ""; // 0xfb0 PushV
	var_92_string = "quest_k7_03"; // 0xfb1 MovS
	func_3724(var_91_object, var_92_string); // 0xfb2 NEW_2
	var_99_bool = 0; var_100_string = ""; var_101_string = ""; // 0xfb4 PushV
	var_100_string = "quest_k7_03"; // 0xfb5 MovS
	var_101_string = "place_family"; // 0xfb6 MovS
	func_3822(var_99_bool, var_100_string, var_101_string); // 0xfb7 NEW_2
	return 2; // 0xfb9 Return
}


func_2211(var_0_object, var_619_int, var_620_object)
{
	var_622_object = Obj(); var_623_bool = 0; var_624_int = 0; var_625_bool = 0; var_626_object = Obj(); var_627_bool = 0; var_628_int = 0; var_629_bool = 0; // 0x8a3 PushV
	var_0_object = var_620_object; // 0x8a4 TMov
	var_630_bool = 0; var_631_object = Obj(); var_632_float = 0; // 0x8a5 PushV
	var_631_object = var_620_object; // 0x8a6 Mov
	var_632_float = 70.0; // 0x8a7 MovF
	func_3427(var_631_object, var_632_float); // 0x8a8 NEW_2
	var_633_bool = var_630_bool == 0; // 0x8aa Not
	if(var_633_bool == 0) goto Label_2222; // 0x8ab JumpB
	var_619_int = -2; // 0x8ac MovI
	return 8; // 0x8ad Return
	
Label_2222:
	CreateDialog(var_626_object); // 0x8ae Func
	var_634_int = 0; // 0x8b0 PushV
	func_3880(var_634_int); // 0x8b1 NEW_2
	SetNPCName(var_634_int); // 0x8b3 ObjFunc
	var_635_int = 0; // 0x8b5 PushV
	func_3878(var_635_int); // 0x8b6 NEW_2
	SetNPCDescription(var_635_int); // 0x8b8 ObjFunc
	var_636_string = ""; // 0x8ba PushV
	func_3882(var_636_string); // 0x8bb NEW_2
	SetPhoto(var_636_string); // 0x8bd ObjFunc
	var_637_string = ""; // 0x8bf PushV
	func_3884(var_637_string); // 0x8c0 NEW_2
	SetPhoto2(var_637_string); // 0x8c2 ObjFunc
	var_638_int = 0; // 0x8c4 PushV
	func_4525(var_638_int); // 0x8c5 NEW_2
	SetPlayerName(var_638_int); // 0x8c7 ObjFunc
	var_628_int = -1; // 0x8c9 MovI
	IsOverrideActive(var_627_bool); // 0x8ca Func
	var_639_bool = var_627_bool; // 0x8cc Push
	if(var_639_bool == 0) goto Label_2256; // 0x8cd JumpB
	var_619_int = -2; // 0x8ce MovI
	return 8; // 0x8cf Return
	
Label_2256:
	DoDialog(var_626_object); // 0x8d0 Func
	var_640_bool = 0; var_641_object = Obj(); // 0x8d2 PushV
	var_642_object = Obj(); // 0x8d3 PushV
	func_3703(var_642_object); // 0x8d4 NEW_2
	var_641_object = var_642_object; // 0x8d5 Mov
	func_3512(var_640_bool, var_641_object); // 0x8d7 NEW_2
	var_643_object = Obj(); var_644_object = Obj(); // 0x8d9 PushV
	var_643_object = var_620_object; // 0x8da Mov
	var_644_object = var_626_object; // 0x8db Mov
	TaskCall(11); // 0x8dc TaskCall
	func_2292(var_645_object, var_646_object, var_647_string, var_648_bool, var_643_object, var_644_object); // 0x8dd NEW_2
	TaskReturn(); // 0x8de TaskReturn
	IsDialogEnd(var_629_bool); // 0x8e0 ObjFunc
	
Label_2274:
	var_766_bool = var_629_bool == 0; // 0x8e2 Not
	if(var_766_bool == 0) goto Label_2281; // 0x8e3 JumpB
	sync(); // 0x8e4 Func
	IsDialogEnd(var_629_bool); // 0x8e6 ObjFunc
	goto Label_2274; // 0x8e8 Jump
	
Label_2281:
	var_767_object = Obj(); // 0x8e9 PushV
	var_767_object = var_620_object; // 0x8ea Mov
	func_3495(); // 0x8eb NEW_2
	StopDialog(var_626_object); // 0x8ed Func
	GetReturnValue(var_628_int); // 0x8ef ObjFunc
	var_619_int = var_628_int; // 0x8f1 Mov
	return 8; // 0x8f2 Return
}


func_4263(var_592_bool)
{
	var_594_int = 0; var_595_string = ""; // 0x10a8 PushV
	var_595_string = "k11q01"; // 0x10a9 MovS
	func_3719(var_594_int, var_595_string); // 0x10aa NEW_2
	var_596_int = 4; // 0x10ac PushI
	var_597_bool = var_594_int == var_596_int; // 0x10ad Eq
	if(var_597_bool == 0) goto Label_4273; // 0x10ae JumpB
	var_592_bool = 1; // 0x10af MovB
	return 0; // 0x10b0 Return
	
Label_4273:
	var_592_bool = 0; // 0x10b1 MovB
	return 0; // 0x10b2 Return
}


func_3752(var_128_int, var_129_int)
{
	var_130_object = Obj(); var_131_object = Obj(); // 0xea8 PushV
	CreateIntVector(var_131_object); // 0xea9 Func
	add(var_128_int); // 0xeab ObjFunc
	add(var_129_int); // 0xead ObjFunc
	var_132_int = 3; // 0xeaf PushI
	SendWorldWndMessage(var_132_int, var_131_object); // 0xeb0 Func
	return 2; // 0xeb2 Return
}


func_3495()
{
	var_276_bool = 0; var_277_bool = 0; // 0xda7 PushV
	CameraSwitchToNormal(); // 0xda8 Func
	var_278_bool = 0; // 0xdaa PushV
	func_3886(var_278_bool); // 0xdab NEW_2
	if(var_278_bool == 0) goto Label_3503; // 0xdad JumpB
	goto Label_3511; // 0xdae Jump
	
Label_3511:
	return 2; // 0xdb7 Return
	
Label_3503:
	var_279_string = "head"; // 0xdaf PushS
	HasAnimationTrack(var_277_bool, var_279_string); // 0xdb0 Func
	var_280_bool = var_277_bool; // 0xdb2 Push
	if(var_280_bool == 0) goto Label_3511; // 0xdb3 JumpB
	var_281_string = "head"; // 0xdb4 PushS
	UnlookAsync(var_281_string); // 0xdb5 Func
}


func_4525(var_121_int)
{
	var_122_int = 0; var_123_int = 0; // 0x11ad PushV
	var_124_string = "branch"; // 0x11ae PushS
	GetVariable(var_124_string, var_123_int); // 0x11af Func
	var_125_int = 0; // 0x11b1 PushI
	var_126_bool = var_123_int == var_125_int; // 0x11b2 Eq
	if(var_126_bool == 0) goto Label_4535; // 0x11b3 JumpB
	var_121_int = 1; // 0x11b4 MovI
	return 2; // 0x11b5 Return
	
Label_4535:
	var_127_int = 1; // 0x11b7 PushI
	var_128_bool = var_123_int == var_127_int; // 0x11b8 Eq
	if(var_128_bool == 0) goto Label_4540; // 0x11b9 JumpB
	var_121_int = 2; // 0x11ba MovI
	return 2; // 0x11bb Return
	
Label_4540:
	var_121_int = 3; // 0x11bc MovI
	return 2; // 0x11bd Return
}


func_4275(var_239_bool)
{
	var_241_int = 0; var_242_string = ""; // 0x10b4 PushV
	var_242_string = "k12q01ChildsAreVisited"; // 0x10b5 MovS
	func_3719(var_241_int, var_242_string); // 0x10b6 NEW_2
	var_243_int = 0; // 0x10b8 PushI
	var_244_bool = var_241_int != var_243_int; // 0x10b9 Neq
	if(var_244_bool == 0) goto Label_4285; // 0x10ba JumpB
	var_239_bool = 1; // 0x10bb MovB
	return 0; // 0x10bc Return
	
Label_4285:
	var_239_bool = 0; // 0x10bd MovB
	return 0; // 0x10be Return
}


func_3764(var_234_object, var_235_int)
{
	var_236_int = 0; var_237_int = 0; // 0xeb4 PushV
	var_238_object = Obj(); var_239_string = ""; var_240_int = 0; // 0xeb5 PushV
	var_238_object = var_234_object; // 0xeb6 Mov
	var_239_string = "money"; // 0xeb7 MovS
	var_240_int = var_235_int; // 0xeb8 Mov
	func_3396(var_239_string, var_240_int); // 0xeb9 NEW_2
	var_244_int = 0; // 0xebb PushI
	var_245_bool = var_235_int > var_244_int; // 0xebc GT
	if(var_245_bool == 0) goto Label_3782; // 0xebd JumpB
	var_246_string = "Money"; // 0xebe PushS
	GetInvItemByName(var_237_int, var_246_string); // 0xebf Func
	var_247_int = 0; var_248_int = 0; // 0xec1 PushV
	var_247_int = var_237_int; // 0xec2 Mov
	var_248_int = var_235_int; // 0xec3 Mov
	func_3752(var_247_int, var_248_int); // 0xec4 NEW_2
	
Label_3782:
	return 2; // 0xec6 Return
}


func_3512(var_130_bool, var_131_object)
{
	var_135_int = 0; var_136_int = 0; var_137_int = 0; var_138_int = 0; // 0xdb8 PushV
	var_139_string = "voice_common"; // 0xdb9 PushS
	GetVariable(var_139_string, var_137_int); // 0xdba Func
	var_140_int = var_137_int; // 0xdbc Push
	if(var_140_int == 0) goto Label_3550; // 0xdbd JumpB
	var_141_bool = 0; var_142_object = Obj(); // 0xdbe PushV
	var_142_object = var_131_object; // 0xdbf Mov
	func_3570(var_142_object); // 0xdc0 NEW_2
	var_171_bool = var_141_bool == 0; // 0xdc2 Not
	if(var_171_bool == 0) goto Label_3532; // 0xdc3 JumpB
	var_172_bool = 0; var_173_object = Obj(); // 0xdc4 PushV
	var_173_object = var_131_object; // 0xdc5 Mov
	func_3607(var_173_object); // 0xdc6 NEW_2
	var_207_bool = var_172_bool == 0; // 0xdc8 Not
	if(var_207_bool == 0) goto Label_3532; // 0xdc9 JumpB
	var_130_bool = 0; // 0xdca MovB
	return 4; // 0xdcb Return
	
Label_3532:
	var_208_int = 2; // 0xdcc PushI
	irand(var_138_int, var_208_int); // 0xdcd Func
	var_209_int = var_138_int; // 0xdcf Push
	if(var_209_int == 0) goto Label_3545; // 0xdd0 JumpB
	var_210_string = "voice_common"; // 0xdd1 PushS
	var_211_int = 1; // 0xdd2 PushI
	var_212_int = var_137_int + var_211_int; // 0xdd3 Add
	var_213_int = 3; // 0xdd4 PushI
	var_214_int = var_212_int / var_213_int; // 0xdd5 Mod
	SetVariable(var_210_string, var_214_int); // 0xdd6 Func
	goto Label_3549; // 0xdd8 Jump
	
Label_3549:
	goto Label_3568; // 0xddd Jump
	
Label_3568:
	var_130_bool = 1; // 0xdf0 MovB
	return 4; // 0xdf1 Return
	
Label_3545:
	var_215_string = "voice_common"; // 0xdd9 PushS
	var_216_int = 0; // 0xdda PushI
	SetVariable(var_215_string, var_216_int); // 0xddb Func
	
Label_3550:
	var_217_bool = 0; var_218_object = Obj(); // 0xdde PushV
	var_218_object = var_131_object; // 0xddf Mov
	func_3607(var_218_object); // 0xde0 NEW_2
	var_219_bool = var_217_bool == 0; // 0xde2 Not
	if(var_219_bool == 0) goto Label_3564; // 0xde3 JumpB
	var_220_bool = 0; var_221_object = Obj(); // 0xde4 PushV
	var_221_object = var_131_object; // 0xde5 Mov
	func_3570(var_221_object); // 0xde6 NEW_2
	var_222_bool = var_220_bool == 0; // 0xde8 Not
	if(var_222_bool == 0) goto Label_3564; // 0xde9 JumpB
	var_130_bool = 0; // 0xdea MovB
	return 4; // 0xdeb Return
	
Label_3564:
	var_223_string = "voice_common"; // 0xdec PushS
	var_224_int = 1; // 0xded PushI
	SetVariable(var_223_string, var_224_int); // 0xdee Func
}


func_442(var_2_object, var_232_string)
{
	var_233_bool = 0; // 0x1bb PushV
	func_3886(var_233_bool); // 0x1bc NEW_2
	var_234_bool = var_233_bool == 0; // 0x1be Not
	if(var_234_bool == 0) goto Label_449; // 0x1bf JumpB
	return 0; // 0x1c0 Return
	
Label_449:
	var_235_bool = var_232_string == var_2_object; // 0x1c1 Eq
	if(var_235_bool == 0) goto Label_452; // 0x1c2 JumpB
	return 0; // 0x1c3 Return
	
Label_452:
	var_236_string = ""; var_237_bool = 0; // 0x1c4 PushV
	var_236_string = var_232_string; // 0x1c5 Mov
	var_238_string = ""; // 0x1c6 PushS
	var_239_bool = var_232_string == var_238_string; // 0x1c7 Eq
	if(var_239_bool == 0) goto Label_459; // 0x1c8 JumpB
	var_237_bool = 0; // 0x1c9 MovB
	goto Label_460; // 0x1ca Jump
	
Label_460:
	func_3666(var_236_string, var_237_bool); // 0x1cc NEW_2
	var_2_object = var_232_string; // 0x1ce TMov
	return 0; // 0x1cf Return
	
Label_459:
	var_237_bool = 1; // 0x1cb MovB
}


func_4027()
{
	var_466_string = "ook7Burah2"; // 0xfbc PushS
	var_467_int = 1; // 0xfbd PushI
	SetVariable(var_466_string, var_467_int); // 0xfbe Func
	return 0; // 0xfc0 Return
}


func_1468(var_0_object, var_1_object, var_2_object, var_3_string, var_576_object, var_577_object)
{
	var_0_object = var_577_object; // 0x5bd TMov
	var_1_object = var_576_object; // 0x5be TMov
	var_3_string = 0; // 0x5bf TMovB
	var_582_int = 1; // 0x5c0 PushI
	if(var_582_int == 0) goto Label_1506; // 0x5c1 JumpB
	var_583_string = ""; // 0x5c2 PushV
	var_583_string = "Neutral"; // 0x5c3 MovS
	func_1536(var_577_object, var_583_string); // 0x5c4 NEW_2
	var_591_int = 527204; // 0x5c6 PushI
	SetMessage(var_591_int); // 0x5c7 TObjFunc
	ClearReplies(); // 0x5c9 TObjFunc
	var_592_bool = 0; var_593_object = Obj(); // 0x5cb PushV
	var_593_object = var_1_object; // 0x5cc MovT
	func_4263(var_593_object); // 0x5cd NEW_2
	if(var_592_bool == 0) goto Label_1493; // 0x5cf JumpB
	var_598_int = 527205; // 0x5d0 PushI
	var_599_int = 28514; // 0x5d1 PushI
	var_600_int = 28513; // 0x5d2 PushI
	AddReply(var_598_int, var_599_int, var_600_int); // 0x5d3 TObjFunc
	
Label_1493:
	var_601_int = 527210; // 0x5d5 PushI
	var_602_int = -1; // 0x5d6 PushI
	var_603_int = 28518; // 0x5d7 PushI
	AddReply(var_601_int, var_602_int, var_603_int); // 0x5d8 TObjFunc
	var_604_int = 527533; // 0x5da PushI
	var_605_int = -1; // 0x5db PushI
	var_606_int = 28871; // 0x5dc PushI
	AddReply(var_604_int, var_605_int, var_606_int); // 0x5dd TObjFunc
	goto Label_1506; // 0x5df Jump
	
Label_1506:
	var_607_bool = 0; // 0x5e2 PushV
	func_3886(var_607_bool); // 0x5e3 NEW_2
	if(var_607_bool == 0) goto Label_1521; // 0x5e5 JumpB
	
Label_1510:
	lshWaitForAnimEnd(); // 0x5e6 Func
	var_608_string = var_3_string; // 0x5e8 PushT
	if(var_608_string == 0) goto Label_1515; // 0x5e9 JumpB
	goto Label_1520; // 0x5ea Jump
	
Label_1520:
	goto Label_1535; // 0x5f0 Jump
	
Label_1535:
	return 0; // 0x5ff Return
	
Label_1515:
	var_609_string = ""; // 0x5eb PushV
	var_609_string = var_2_object; // 0x5ec MovT
	func_3650(var_609_string); // 0x5ed NEW_2
	goto Label_1510; // 0x5ef Jump
	
Label_1521:
	var_610_string = "all"; // 0x5f1 PushS
	var_611_string = "idle"; // 0x5f2 PushS
	PlayAnimation(var_610_string, var_611_string); // 0x5f3 Func
	
Label_1525:
	WaitForAnimEnd(); // 0x5f5 Func
	var_612_string = var_3_string; // 0x5f7 PushT
	if(var_612_string == 0) goto Label_1530; // 0x5f8 JumpB
	goto Label_1535; // 0x5f9 Jump
	
Label_1530:
	var_613_string = "all"; // 0x5fa PushS
	var_614_string = "idle"; // 0x5fb PushS
	PlayAnimation(var_613_string, var_614_string); // 0x5fc Func
	goto Label_1525; // 0x5fe Jump
}


func_4542(var_715_bool, var_716_int)
{
	var_717_int = 18; // 0x11bf PushI
	add(var_717_int); // 0x11c0 ObjFunc
	var_718_int = 24; // 0x11c2 PushI
	add(var_718_int); // 0x11c3 ObjFunc
	var_719_int = 20; // 0x11c5 PushI
	add(var_719_int); // 0x11c6 ObjFunc
	var_720_int = 14; // 0x11c8 PushI
	add(var_720_int); // 0x11c9 ObjFunc
	var_721_bool = 0; // 0x11cb PushB
	var_722_bool = var_715_bool == var_721_bool; // 0x11cc Eq
	if(var_722_bool == 0) goto Label_4568; // 0x11cd JumpB
	var_723_int = 10; // 0x11ce PushI
	add(var_723_int); // 0x11cf ObjFunc
	var_724_int = 17; // 0x11d1 PushI
	add(var_724_int); // 0x11d2 ObjFunc
	var_725_int = 8; // 0x11d4 PushI
	add(var_725_int); // 0x11d5 ObjFunc
	goto Label_4574; // 0x11d7 Jump
	
Label_4574:
	return 0; // 0x11de Return
	
Label_4568:
	var_726_int = 1; // 0x11d8 PushI
	var_727_bool = var_716_int != var_726_int; // 0x11d9 Neq
	if(var_727_bool == 0) goto Label_4574; // 0x11da JumpB
	var_728_int = 10; // 0x11db PushI
	add(var_728_int); // 0x11dc ObjFunc
}


func_4287(var_750_bool)
{
	var_752_int = 0; var_753_string = ""; // 0x10c0 PushV
	var_753_string = "k12q01BurahInSobor"; // 0x10c1 MovS
	func_3719(var_752_int, var_753_string); // 0x10c2 NEW_2
	var_754_int = 0; // 0x10c4 PushI
	var_755_bool = var_752_int != var_754_int; // 0x10c5 Neq
	if(var_755_bool == 0) goto Label_4297; // 0x10c6 JumpB
	var_750_bool = 1; // 0x10c7 MovB
	return 0; // 0x10c8 Return
	
Label_4297:
	var_750_bool = 0; // 0x10c9 MovB
	return 0; // 0x10ca Return
}


func_4033(var_109_object)
{
	var_111_string = "tvirin 5 is given"; // 0xfc2 PushS
	Trace(var_111_string); // 0xfc3 Func
	var_112_object = Obj(); var_113_string = ""; var_114_int = 0; // 0xfc5 PushV
	var_112_object = var_109_object; // 0xfc6 Mov
	var_113_string = "tvirin"; // 0xfc7 MovS
	var_114_int = 5; // 0xfc8 MovI
	func_3802(var_112_object, var_113_string, var_114_int); // 0xfc9 NEW_2
	return 0; // 0xfcb Return
}


func_3010(var_0_object, var_1_object, var_2_object, var_3_string, var_792_object, var_793_object)
{
	var_0_object = var_793_object; // 0xbc3 TMov
	var_1_object = var_792_object; // 0xbc4 TMov
	var_3_string = 0; // 0xbc5 TMovB
	var_798_int = 1; // 0xbc6 PushI
	if(var_798_int == 0) goto Label_3038; // 0xbc7 JumpB
	var_799_string = ""; // 0xbc8 PushV
	var_799_string = "Neutral"; // 0xbc9 MovS
	func_3068(var_793_object, var_799_string); // 0xbca NEW_2
	var_807_int = 540545; // 0xbcc PushI
	SetMessage(var_807_int); // 0xbcd TObjFunc
	ClearReplies(); // 0xbcf TObjFunc
	var_808_int = 540546; // 0xbd1 PushI
	var_809_int = -1; // 0xbd2 PushI
	var_810_int = 42555; // 0xbd3 PushI
	AddReply(var_808_int, var_809_int, var_810_int); // 0xbd4 TObjFunc
	var_811_int = 540798; // 0xbd6 PushI
	var_812_int = -1; // 0xbd7 PushI
	var_813_int = 42847; // 0xbd8 PushI
	AddReply(var_811_int, var_812_int, var_813_int); // 0xbd9 TObjFunc
	goto Label_3038; // 0xbdb Jump
	
Label_3038:
	var_814_bool = 0; // 0xbde PushV
	func_3886(var_814_bool); // 0xbdf NEW_2
	if(var_814_bool == 0) goto Label_3053; // 0xbe1 JumpB
	
Label_3042:
	lshWaitForAnimEnd(); // 0xbe2 Func
	var_815_string = var_3_string; // 0xbe4 PushT
	if(var_815_string == 0) goto Label_3047; // 0xbe5 JumpB
	goto Label_3052; // 0xbe6 Jump
	
Label_3052:
	goto Label_3067; // 0xbec Jump
	
Label_3067:
	return 0; // 0xbfb Return
	
Label_3047:
	var_816_string = ""; // 0xbe7 PushV
	var_816_string = var_2_object; // 0xbe8 MovT
	func_3650(var_816_string); // 0xbe9 NEW_2
	goto Label_3042; // 0xbeb Jump
	
Label_3053:
	var_817_string = "all"; // 0xbed PushS
	var_818_string = "idle"; // 0xbee PushS
	PlayAnimation(var_817_string, var_818_string); // 0xbef Func
	
Label_3057:
	WaitForAnimEnd(); // 0xbf1 Func
	var_819_string = var_3_string; // 0xbf3 PushT
	if(var_819_string == 0) goto Label_3062; // 0xbf4 JumpB
	goto Label_3067; // 0xbf5 Jump
	
Label_3062:
	var_820_string = "all"; // 0xbf6 PushS
	var_821_string = "idle"; // 0xbf7 PushS
	PlayAnimation(var_820_string, var_821_string); // 0xbf8 Func
	goto Label_3057; // 0xbfa Jump
}


func_3783(var_118_object, var_119_int)
{
	var_120_int = 0; var_121_int = 0; var_122_bool = 0; var_123_int = 0; var_124_int = 0; var_125_bool = 0; // 0xec7 PushV
	GetItemID(var_123_int); // 0xec8 ObjFunc
	var_126_string = "Category"; // 0xeca PushS
	GetInvItemProperty(var_124_int, var_123_int, var_126_string); // 0xecb Func
	AddItem(var_125_bool, var_118_object, var_124_int, var_119_int); // 0xecd ObjFunc
	var_127_bool = var_125_bool == 0; // 0xecf Not
	if(var_127_bool == 0) goto Label_3796; // 0xed0 JumpB
	DropItems(var_118_object, var_119_int); // 0xed1 ObjFunc
	goto Label_3801; // 0xed3 Jump
	
Label_3801:
	return 6; // 0xed9 Return
	
Label_3796:
	var_128_int = 0; var_129_int = 0; // 0xed4 PushV
	var_128_int = var_123_int; // 0xed5 Mov
	var_129_int = var_119_int; // 0xed6 Mov
	func_3752(var_128_int, var_129_int); // 0xed7 NEW_2
}


func_4299(var_651_bool)
{
	var_653_int = 0; var_654_string = ""; // 0x10cc PushV
	var_654_string = "ook12BurahFactory1"; // 0x10cd MovS
	func_3719(var_653_int, var_654_string); // 0x10ce NEW_2
	var_655_int = 0; // 0x10d0 PushI
	var_656_bool = var_653_int == var_655_int; // 0x10d1 Eq
	if(var_656_bool == 0) goto Label_4309; // 0x10d2 JumpB
	var_651_bool = 1; // 0x10d3 MovB
	return 0; // 0x10d4 Return
	
Label_4309:
	var_651_bool = 0; // 0x10d5 MovB
	return 0; // 0x10d6 Return
}


func_4044()
{
	func_4421(); // 0xfce NEW_2
	var_228_bool = 0; var_229_string = ""; var_230_string = ""; // 0xfd0 PushV
	var_229_string = "quest_k7_03"; // 0xfd1 MovS
	var_230_string = "completed"; // 0xfd2 MovS
	func_3822(var_228_bool, var_229_string, var_230_string); // 0xfd3 NEW_2
	return 0; // 0xfd5 Return
}


func_4054(var_231_object)
{
	var_233_string = "money2000 is given"; // 0xfd7 PushS
	Trace(var_233_string); // 0xfd8 Func
	var_234_object = Obj(); var_235_int = 0; // 0xfda PushV
	var_234_object = var_231_object; // 0xfdb Mov
	var_235_int = 2000; // 0xfdc MovI
	func_3764(var_234_object, var_235_int); // 0xfdd NEW_2
	return 0; // 0xfdf Return
}


func_4311(var_703_bool)
{
	var_705_bool = 0; // 0x10d8 PushV
	func_4595(var_705_bool); // 0x10d9 NEW_2
	var_703_bool = var_705_bool; // 0x10da Mov
	return 0; // 0x10dc Return
}


func_3802(var_112_object, var_113_string, var_114_int)
{
	var_115_object = Obj(); var_116_object = Obj(); // 0xeda PushV
	CreateInvItem(var_116_object); // 0xedb Func
	SetItemName(var_113_string); // 0xedd ObjFunc
	var_117_object = Obj(); var_118_object = Obj(); var_119_int = 0; // 0xedf PushV
	var_117_object = var_112_object; // 0xee0 Mov
	var_118_object = var_116_object; // 0xee1 Mov
	var_119_int = var_114_int; // 0xee2 Mov
	func_3783(var_118_object, var_119_int); // 0xee3 NEW_2
	return 2; // 0xee5 Return
}


func_4317()
{
	var_46_object = Obj(); var_47_object = Obj(); // 0x10dd PushV
	var_48_int = 488; // 0x10de PushI
	var_49_int = 1; // 0x10df PushI
	var_50_int = 528055; // 0x10e0 PushI
	CreateDiaryEntry(var_47_object, var_48_int, var_49_int, var_50_int); // 0x10e1 Func
	var_51_bool = 0; var_52_object = Obj(); var_53_int = 0; // 0x10e3 PushV
	var_52_object = var_47_object; // 0x10e4 Mov
	var_53_int = 480; // 0x10e5 MovI
	func_4447(var_51_bool, var_52_object, var_53_int); // 0x10e6 NEW_2
	return 2; // 0x10e8 Return
}


func_4575(var_740_bool, var_741_int)
{
	var_742_int = 0; var_743_int = 0; // 0x11df PushV
	var_744_string = "vol_"; // 0x11e0 PushS
	var_745_int = var_744_string + var_741_int; // 0x11e1 Add
	GetVariable(var_745_int, var_743_int); // 0x11e2 Func
	var_746_int = 4; // 0x11e4 PushI
	var_747_int = var_743_int & var_746_int; // 0x11e5 And
	var_748_int = 0; // 0x11e6 PushI
	var_740_bool = var_747_int != var_748_int; // 0x11e7 Neq2
	return 2; // 0x11e8 Return
}


func_4064()
{
	var_44_string = "k11q01"; // 0xfe1 PushS
	var_45_int = 5; // 0xfe2 PushI
	SetVariable(var_44_string, var_45_int); // 0xfe3 Func
	func_4317(); // 0xfe6 NEW_2
	return 0; // 0xfe8 Return
}


func_1764(var_0_object, var_287_int, var_288_object)
{
	var_290_object = Obj(); var_291_bool = 0; var_292_int = 0; var_293_bool = 0; var_294_object = Obj(); var_295_bool = 0; var_296_int = 0; var_297_bool = 0; // 0x6e4 PushV
	var_0_object = var_288_object; // 0x6e5 TMov
	var_298_bool = 0; var_299_object = Obj(); var_300_float = 0; // 0x6e6 PushV
	var_299_object = var_288_object; // 0x6e7 Mov
	var_300_float = 70.0; // 0x6e8 MovF
	func_3427(var_299_object, var_300_float); // 0x6e9 NEW_2
	var_301_bool = var_298_bool == 0; // 0x6eb Not
	if(var_301_bool == 0) goto Label_1775; // 0x6ec JumpB
	var_287_int = -2; // 0x6ed MovI
	return 8; // 0x6ee Return
	
Label_1775:
	CreateDialog(var_294_object); // 0x6ef Func
	var_302_int = 0; // 0x6f1 PushV
	func_3880(var_302_int); // 0x6f2 NEW_2
	SetNPCName(var_302_int); // 0x6f4 ObjFunc
	var_303_int = 0; // 0x6f6 PushV
	func_3878(var_303_int); // 0x6f7 NEW_2
	SetNPCDescription(var_303_int); // 0x6f9 ObjFunc
	var_304_string = ""; // 0x6fb PushV
	func_3882(var_304_string); // 0x6fc NEW_2
	SetPhoto(var_304_string); // 0x6fe ObjFunc
	var_305_string = ""; // 0x700 PushV
	func_3884(var_305_string); // 0x701 NEW_2
	SetPhoto2(var_305_string); // 0x703 ObjFunc
	var_306_int = 0; // 0x705 PushV
	func_4525(var_306_int); // 0x706 NEW_2
	SetPlayerName(var_306_int); // 0x708 ObjFunc
	var_296_int = -1; // 0x70a MovI
	IsOverrideActive(var_295_bool); // 0x70b Func
	var_307_bool = var_295_bool; // 0x70d Push
	if(var_307_bool == 0) goto Label_1809; // 0x70e JumpB
	var_287_int = -2; // 0x70f MovI
	return 8; // 0x710 Return
	
Label_1809:
	DoDialog(var_294_object); // 0x711 Func
	var_308_bool = 0; var_309_object = Obj(); // 0x713 PushV
	var_310_object = Obj(); // 0x714 PushV
	func_3703(var_310_object); // 0x715 NEW_2
	var_309_object = var_310_object; // 0x716 Mov
	func_3512(var_308_bool, var_309_object); // 0x718 NEW_2
	var_311_object = Obj(); var_312_object = Obj(); // 0x71a PushV
	var_311_object = var_288_object; // 0x71b Mov
	var_312_object = var_294_object; // 0x71c Mov
	TaskCall(9); // 0x71d TaskCall
	func_1845(var_313_object, var_314_object, var_315_string, var_316_bool, var_311_object, var_312_object); // 0x71e NEW_2
	TaskReturn(); // 0x71f TaskReturn
	IsDialogEnd(var_297_bool); // 0x721 ObjFunc
	
Label_1827:
	var_359_bool = var_297_bool == 0; // 0x723 Not
	if(var_359_bool == 0) goto Label_1834; // 0x724 JumpB
	sync(); // 0x725 Func
	IsDialogEnd(var_297_bool); // 0x727 ObjFunc
	goto Label_1827; // 0x729 Jump
	
Label_1834:
	var_360_object = Obj(); // 0x72a PushV
	var_360_object = var_288_object; // 0x72b Mov
	func_3495(); // 0x72c NEW_2
	StopDialog(var_294_object); // 0x72e Func
	GetReturnValue(var_296_int); // 0x730 ObjFunc
	var_287_int = var_296_int; // 0x732 Mov
	return 8; // 0x733 Return
}


func_3815(var_514_bool, var_516_string)
{
	var_517_int = 0; var_518_bool = 0; var_519_int = 0; var_520_bool = 0; // 0xee7 PushV
	GetInvItemByName(var_519_int, var_516_string); // 0xee8 Func
	HasItem(var_519_int, var_520_bool); // 0xeea ObjFunc
	var_514_bool = var_520_bool; // 0xeec Mov
	return 4; // 0xeed Return
}


func_4073()
{
	var_251_string = "playsound"; // 0xfea PushS
	var_252_string = "givemoney"; // 0xfeb PushS
	TriggerWorld(var_251_string, var_252_string); // 0xfec Func
	return 0; // 0xfee Return
}


func_4330()
{
	var_81_object = Obj(); var_82_object = Obj(); // 0x10ea PushV
	var_83_int = 731; // 0x10eb PushI
	var_84_int = 1; // 0x10ec PushI
	var_85_int = 539361; // 0x10ed PushI
	CreateDiaryEntry(var_82_object, var_83_int, var_84_int, var_85_int); // 0x10ee Func
	var_86_bool = 0; var_87_object = Obj(); var_88_int = 0; // 0x10f0 PushV
	var_87_object = var_82_object; // 0x10f1 Mov
	var_88_int = 729; // 0x10f2 MovI
	func_4447(var_86_bool, var_87_object, var_88_int); // 0x10f3 NEW_2
	return 2; // 0x10f5 Return
}


func_4585(var_731_bool, var_732_int)
{
	var_733_int = 0; var_734_int = 0; // 0x11e9 PushV
	var_735_string = "vol_"; // 0x11ea PushS
	var_736_int = var_735_string + var_732_int; // 0x11eb Add
	GetVariable(var_736_int, var_734_int); // 0x11ec Func
	var_737_int = 16; // 0x11ee PushI
	var_738_int = var_734_int & var_737_int; // 0x11ef And
	var_739_int = 0; // 0x11f0 PushI
	var_731_bool = var_738_int != var_739_int; // 0x11f1 Neq2
	return 2; // 0x11f2 Return
}


func_3822(var_99_bool, var_100_string, var_101_string)
{
	var_102_object = Obj(); var_103_object = Obj(); // 0xeee PushV
	FindActor(var_103_object, var_100_string); // 0xeef Func
	var_104_bool = var_103_object == 0; // 0xef1 NullEq
	if(var_104_bool == 0) goto Label_3829; // 0xef2 JumpB
	var_99_bool = 0; // 0xef3 MovB
	return 2; // 0xef4 Return
	
Label_3829:
	Trigger(var_103_object, var_101_string); // 0xef5 Func
	var_99_bool = 1; // 0xef7 MovB
	return 2; // 0xef8 Return
}


func_4079()
{
	var_107_string = "playsound"; // 0xff0 PushS
	var_108_string = "giveitem"; // 0xff1 PushS
	TriggerWorld(var_107_string, var_108_string); // 0xff2 Func
	return 0; // 0xff4 Return
}


func_3312()
{
	var_40_int = 0; var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_int = 0; var_45_bool = 0; var_46_int = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_int = 0; var_51_bool = 0; // 0xcf0 PushV
	WaitForAnimEnd(); // 0xcf1 Func
	var_52_bool = 0; // 0xcf3 PushV
	func_3422(var_52_bool); // 0xcf4 NEW_2
	var_53_bool = var_52_bool == 0; // 0xcf6 Not
	if(var_53_bool == 0) goto Label_3321; // 0xcf7 JumpB
	return 12; // 0xcf8 Return
	
Label_3321:
	var_54_int = 0; // 0xcf9 PushV
	func_3861(var_54_int); // 0xcfa NEW_2
	var_46_int = var_54_int; // 0xcfb Mov
	var_47_int = 0; // 0xcfd MovI
	
Label_3326:
	var_67_bool = 0; // 0xcfe PushV
	var_67_bool = 0; // 0xcff MovB
	var_68_int = 5; // 0xd00 PushI
	var_69_bool = var_47_int < var_68_int; // 0xd01 LT
	if(var_69_bool == 0) goto Label_3336; // 0xd02 JumpB
	var_70_bool = 0; // 0xd03 PushV
	func_3422(var_70_bool); // 0xd04 NEW_2
	if(var_70_bool == 0) goto Label_3336; // 0xd06 JumpB
	var_67_bool = 1; // 0xd07 MovB
	
Label_3336:
	if(var_67_bool == 0) goto Label_3378; // 0xd08 JumpB
	var_71_bool = var_46_int == 0; // 0xd09 Not
	if(var_71_bool == 0) goto Label_3346; // 0xd0a JumpB
	var_72_int = 3; // 0xd0b PushI
	Sleep(var_72_int, var_48_bool); // 0xd0c Func
	var_73_bool = var_48_bool == 0; // 0xd0e Not
	if(var_73_bool == 0) goto Label_3345; // 0xd0f JumpB
	goto Label_3378; // 0xd10 Jump
	
Label_3378:
	ResetAAS(); // 0xd32 Func
	return 12; // 0xd34 Return
	
Label_3345:
	goto Label_3367; // 0xd11 Jump
	
Label_3367:
	var_74_bool = 0; // 0xd27 PushV
	func_3381(var_74_bool); // 0xd28 NEW_2
	var_75_bool = var_74_bool == 0; // 0xd2a Not
	if(var_75_bool == 0) goto Label_3373; // 0xd2b JumpB
	goto Label_3378; // 0xd2c Jump
	
Label_3373:
	ResetAAS(); // 0xd2d Func
	var_76_int = 1; // 0xd2f PushI
	var_47_int = var_47_int + var_76_int; // 0xd30 Add2
	goto Label_3326; // 0xd31 Jump
	
Label_3346:
	irand(var_49_int, var_46_int); // 0xd12 Func
	var_77_int = 5; // 0xd14 PushI
	irand(var_50_int, var_77_int); // 0xd15 Func
	var_78_int = 0; // 0xd17 PushI
	var_79_bool = var_50_int != var_78_int; // 0xd18 Neq
	if(var_79_bool == 0) goto Label_3355; // 0xd19 JumpB
	var_49_int = 0; // 0xd1a MovI
	
Label_3355:
	var_80_string = "all"; // 0xd1b PushS
	var_81_string = ""; var_82_int = 0; // 0xd1c PushV
	var_82_int = var_49_int; // 0xd1d Mov
	func_3854(var_81_string, var_82_int); // 0xd1e NEW_2
	PlayAnimation(var_80_string, var_81_string); // 0xd20 Func
	WaitForAnimEnd(var_51_bool); // 0xd22 Func
	var_83_bool = var_51_bool == 0; // 0xd24 Not
	if(var_83_bool == 0) goto Label_3367; // 0xd25 JumpB
	goto Label_3378; // 0xd26 Jump
}


func_3570(var_141_bool)
{
	var_143_string = ""; var_144_int = 0; var_145_bool = 0; var_146_int = 0; var_147_string = ""; var_148_string = ""; var_149_int = 0; var_150_bool = 0; var_151_int = 0; var_152_string = ""; // 0xdf2 PushV
	var_148_string = "c"; // 0xdf3 MovS
	var_149_int = 0; // 0xdf4 MovI
	
Label_3573:
	var_153_int = 1; // 0xdf5 PushI
	if(var_153_int == 0) goto Label_3586; // 0xdf6 JumpB
	var_154_int = 1; // 0xdf7 PushI
	var_155_int = var_149_int + var_154_int; // 0xdf8 Add
	var_156_int = var_148_string + var_155_int; // 0xdf9 Add
	HasProperty(var_156_int, var_150_bool); // 0xdfa ObjFunc
	var_157_bool = var_150_bool == 0; // 0xdfc Not
	if(var_157_bool == 0) goto Label_3583; // 0xdfd JumpB
	goto Label_3586; // 0xdfe Jump
	
Label_3586:
	var_158_bool = var_149_int == 0; // 0xe02 Not
	if(var_158_bool == 0) goto Label_3590; // 0xe03 JumpB
	var_141_bool = 0; // 0xe04 MovB
	return 10; // 0xe05 Return
	
Label_3590:
	var_151_int = 0; // 0xe06 MovI
	var_159_int = 1; // 0xe07 PushI
	var_160_bool = var_149_int > var_159_int; // 0xe08 GT
	if(var_160_bool == 0) goto Label_3596; // 0xe09 JumpB
	irand(var_151_int, var_149_int); // 0xe0a Func
	
Label_3596:
	var_161_int = 1; // 0xe0c PushI
	var_162_int = var_151_int + var_161_int; // 0xe0d Add
	var_163_int = var_148_string + var_162_int; // 0xe0e Add
	GetProperty(var_163_int, var_152_string); // 0xe0f ObjFunc
	var_164_bool = 0; var_165_string = ""; // 0xe11 PushV
	var_165_string = var_152_string; // 0xe12 Mov
	func_3681(var_164_bool, var_165_string); // 0xe13 NEW_2
	var_141_bool = var_164_bool; // 0xe14 Mov
	return 10; // 0xe16 Return
	
Label_3583:
	var_170_int = 1; // 0xdff PushI
	var_149_int = var_149_int + var_170_int; // 0xe00 Add2
	goto Label_3573; // 0xe01 Jump
}


func_4595(var_705_bool)
{
	var_706_object = Obj(); var_707_int = 0; var_708_int = 0; var_709_int = 0; var_710_object = Obj(); var_711_int = 0; var_712_int = 0; var_713_int = 0; // 0x11f3 PushV
	CreateIntVector(var_710_object); // 0x11f4 Func
	var_714_object = Obj(); var_715_bool = 0; var_716_int = 0; // 0x11f6 PushV
	var_714_object = var_710_object; // 0x11f7 Mov
	var_715_bool = 0; // 0x11f8 MovB
	var_716_int = -1; // 0x11f9 MovI
	func_4542(var_715_bool, var_716_int); // 0x11fa NEW_2
	size(var_711_int); // 0x11fc ObjFunc
	var_712_int = 0; // 0x11fe MovI
	
Label_4607:
	var_729_bool = var_712_int < var_711_int; // 0x11ff LT
	if(var_729_bool == 0) goto Label_4630; // 0x1200 JumpB
	get(var_713_int, var_712_int); // 0x1201 ObjFunc
	var_730_bool = 0; // 0x1203 PushV
	var_730_bool = 1; // 0x1204 MovB
	var_731_bool = 0; var_732_int = 0; // 0x1205 PushV
	var_732_int = var_713_int; // 0x1206 Mov
	func_4585(var_731_bool, var_732_int); // 0x1207 NEW_2
	if(var_731_bool == 0) goto Label_4624; // 0x1209 JumpB
	var_740_bool = 0; var_741_int = 0; // 0x120a PushV
	var_741_int = var_713_int; // 0x120b Mov
	func_4575(var_740_bool, var_741_int); // 0x120c NEW_2
	if(var_740_bool == 0) goto Label_4624; // 0x120e JumpB
	var_730_bool = 0; // 0x120f MovB
	
Label_4624:
	if(var_730_bool == 0) goto Label_4627; // 0x1210 JumpB
	var_705_bool = 0; // 0x1211 MovB
	return 8; // 0x1212 Return
	
Label_4627:
	var_749_int = 1; // 0x1213 PushI
	var_712_int = var_712_int + var_749_int; // 0x1214 Add2
	goto Label_4607; // 0x1215 Jump
	
Label_4630:
	var_705_bool = 1; // 0x1216 MovB
	return 8; // 0x1217 Return
}


func_2292(var_0_object, var_1_object, var_2_object, var_3_string, var_643_object, var_644_object)
{
	var_0_object = var_644_object; // 0x8f5 TMov
	var_1_object = var_643_object; // 0x8f6 TMov
	var_3_string = 0; // 0x8f7 TMovB
	var_649_int = 1; // 0x8f8 PushI
	if(var_649_int == 0) goto Label_2395; // 0x8f9 JumpB
	var_650_bool = 0; // 0x8fa PushV
	var_650_bool = 0; // 0x8fb MovB
	var_651_bool = 0; var_652_object = Obj(); // 0x8fc PushV
	var_652_object = var_1_object; // 0x8fd MovT
	func_4299(var_652_object); // 0x8fe NEW_2
	if(var_651_bool == 0) goto Label_2312; // 0x900 JumpB
	var_657_bool = 0; var_658_object = Obj(); // 0x901 PushV
	var_658_object = var_1_object; // 0x902 MovT
	func_4132(var_658_object); // 0x903 NEW_2
	var_663_bool = var_657_bool == 0; // 0x905 Not
	if(var_663_bool == 0) goto Label_2312; // 0x906 JumpB
	var_650_bool = 1; // 0x907 MovB
	
Label_2312:
	if(var_650_bool == 0) goto Label_2343; // 0x908 JumpB
	var_664_object = Obj(); var_665_object = Obj(); // 0x909 PushV
	var_664_object = var_1_object; // 0x90a MovT
	var_665_object = var_0_object; // 0x90b MovT
	func_4085(); // 0x90c NEW_2
	var_668_object = Obj(); var_669_object = Obj(); // 0x90e PushV
	var_668_object = var_1_object; // 0x90f MovT
	var_669_object = var_0_object; // 0x910 MovT
	func_4116(); // 0x911 NEW_2
	var_672_string = ""; // 0x913 PushV
	var_672_string = "Neutral"; // 0x914 MovS
	func_2425(var_644_object, var_672_string); // 0x915 NEW_2
	var_680_int = 539318; // 0x917 PushI
	SetMessage(var_680_int); // 0x918 TObjFunc
	ClearReplies(); // 0x91a TObjFunc
	var_681_int = 541446; // 0x91c PushI
	var_682_int = 45384; // 0x91d PushI
	var_683_int = 43602; // 0x91e PushI
	AddReply(var_681_int, var_682_int, var_683_int); // 0x91f TObjFunc
	var_684_int = 542944; // 0x921 PushI
	var_685_int = 45384; // 0x922 PushI
	var_686_int = 45383; // 0x923 PushI
	AddReply(var_684_int, var_685_int, var_686_int); // 0x924 TObjFunc
	goto Label_2395; // 0x926 Jump
	
Label_2395:
	var_687_bool = 0; // 0x95b PushV
	func_3886(var_687_bool); // 0x95c NEW_2
	if(var_687_bool == 0) goto Label_2410; // 0x95e JumpB
	
Label_2399:
	lshWaitForAnimEnd(); // 0x95f Func
	var_688_string = var_3_string; // 0x961 PushT
	if(var_688_string == 0) goto Label_2404; // 0x962 JumpB
	goto Label_2409; // 0x963 Jump
	
Label_2409:
	goto Label_2424; // 0x969 Jump
	
Label_2424:
	return 0; // 0x978 Return
	
Label_2404:
	var_689_string = ""; // 0x964 PushV
	var_689_string = var_2_object; // 0x965 MovT
	func_3650(var_689_string); // 0x966 NEW_2
	goto Label_2399; // 0x968 Jump
	
Label_2410:
	var_690_string = "all"; // 0x96a PushS
	var_691_string = "idle"; // 0x96b PushS
	PlayAnimation(var_690_string, var_691_string); // 0x96c Func
	
Label_2414:
	WaitForAnimEnd(); // 0x96e Func
	var_692_string = var_3_string; // 0x970 PushT
	if(var_692_string == 0) goto Label_2419; // 0x971 JumpB
	goto Label_2424; // 0x972 Jump
	
Label_2419:
	var_693_string = "all"; // 0x973 PushS
	var_694_string = "idle"; // 0x974 PushS
	PlayAnimation(var_693_string, var_694_string); // 0x975 Func
	goto Label_2414; // 0x977 Jump
	
Label_2343:
	var_695_object = Obj(); var_696_object = Obj(); // 0x927 PushV
	var_695_object = var_1_object; // 0x928 MovT
	var_696_object = var_0_object; // 0x929 MovT
	func_4116(); // 0x92a NEW_2
	var_697_string = ""; // 0x92c PushV
	var_697_string = "Neutral"; // 0x92d MovS
	func_2425(var_644_object, var_697_string); // 0x92e NEW_2
	var_698_int = 539331; // 0x930 PushI
	SetMessage(var_698_int); // 0x931 TObjFunc
	ClearReplies(); // 0x933 TObjFunc
	var_699_bool = 0; // 0x935 PushV
	var_699_bool = 0; // 0x936 MovB
	var_700_bool = 0; // 0x937 PushV
	var_700_bool = 0; // 0x938 MovB
	var_701_bool = 0; var_702_object = Obj(); // 0x939 PushV
	var_702_object = var_1_object; // 0x93a MovT
	func_4122(var_701_bool, var_702_object); // 0x93b NEW_2
	if(var_701_bool == 0) goto Label_2373; // 0x93d JumpB
	var_750_bool = 0; var_751_object = Obj(); // 0x93e PushV
	var_751_object = var_1_object; // 0x93f MovT
	func_4287(var_751_object); // 0x940 NEW_2
	var_756_bool = var_750_bool == 0; // 0x942 Not
	if(var_756_bool == 0) goto Label_2373; // 0x943 JumpB
	var_700_bool = 1; // 0x944 MovB
	
Label_2373:
	if(var_700_bool == 0) goto Label_2381; // 0x945 JumpB
	var_757_bool = 0; var_758_object = Obj(); // 0x946 PushV
	var_758_object = var_1_object; // 0x947 MovT
	func_4132(var_758_object); // 0x948 NEW_2
	var_759_bool = var_757_bool == 0; // 0x94a Not
	if(var_759_bool == 0) goto Label_2381; // 0x94b JumpB
	var_699_bool = 1; // 0x94c MovB
	
Label_2381:
	if(var_699_bool == 0) goto Label_2387; // 0x94d JumpB
	var_760_int = 539332; // 0x94e PushI
	var_761_int = 41277; // 0x94f PushI
	var_762_int = 41276; // 0x950 PushI
	AddReply(var_760_int, var_761_int, var_762_int); // 0x951 TObjFunc
	
Label_2387:
	var_763_int = 539335; // 0x953 PushI
	var_764_int = -1; // 0x954 PushI
	var_765_int = 41279; // 0x955 PushI
	AddReply(var_763_int, var_764_int, var_765_int); // 0x956 TObjFunc
	goto Label_2395; // 0x958 Jump
}


func_4085()
{
	var_666_string = "ook12BurahFactory1"; // 0xff6 PushS
	var_667_int = 1; // 0xff7 PushI
	SetVariable(var_666_string, var_667_int); // 0xff8 Func
	return 0; // 0xffa Return
}


func_4343()
{
	var_52_object = Obj(); var_53_object = Obj(); // 0x10f7 PushV
	var_54_int = 738; // 0x10f8 PushI
	var_55_int = 1; // 0x10f9 PushI
	var_56_int = 539368; // 0x10fa PushI
	CreateDiaryEntry(var_53_object, var_54_int, var_55_int, var_56_int); // 0x10fb Func
	var_57_bool = 0; var_58_object = Obj(); var_59_int = 0; // 0x10fd PushV
	var_58_object = var_53_object; // 0x10fe Mov
	var_59_int = 729; // 0x10ff MovI
	func_4447(var_57_bool, var_58_object, var_59_int); // 0x1100 NEW_2
	return 2; // 0x1102 Return
}


func_3834(var_63_float)
{
	var_64_float = 0; var_65_float = 0; // 0xefa PushV
	GetGameTime(var_65_float); // 0xefb Func
	var_63_float = var_65_float; // 0xefd Mov
	return 2; // 0xefe Return
}


func_4091()
{
	var_79_string = "k12q01BurahInSobor"; // 0xffc PushS
	var_80_int = 1; // 0xffd PushI
	SetVariable(var_79_string, var_80_int); // 0xffe Func
	func_4330(); // 0x1001 NEW_2
	return 0; // 0x1003 Return
}


func_3068(var_2_object, var_799_string)
{
	var_800_bool = 0; // 0xbfd PushV
	func_3886(var_800_bool); // 0xbfe NEW_2
	var_801_bool = var_800_bool == 0; // 0xc00 Not
	if(var_801_bool == 0) goto Label_3075; // 0xc01 JumpB
	return 0; // 0xc02 Return
	
Label_3075:
	var_802_bool = var_799_string == var_2_object; // 0xc03 Eq
	if(var_802_bool == 0) goto Label_3078; // 0xc04 JumpB
	return 0; // 0xc05 Return
	
Label_3078:
	var_803_string = ""; var_804_bool = 0; // 0xc06 PushV
	var_803_string = var_799_string; // 0xc07 Mov
	var_805_string = ""; // 0xc08 PushS
	var_806_bool = var_799_string == var_805_string; // 0xc09 Eq
	if(var_806_bool == 0) goto Label_3085; // 0xc0a JumpB
	var_804_bool = 0; // 0xc0b MovB
	goto Label_3086; // 0xc0c Jump
	
Label_3086:
	func_3666(var_803_string, var_804_bool); // 0xc0e NEW_2
	var_2_object = var_799_string; // 0xc10 TMov
	return 0; // 0xc11 Return
	
Label_3085:
	var_804_bool = 1; // 0xc0d MovB
}


func_3839(var_185_int)
{
	var_186_float = 0; var_187_float = 0; // 0xeff PushV
	GetGameTime(var_187_float); // 0xf00 Func
	var_188_int = 1; // 0xf02 PushI
	var_189_int = 0; // 0xf03 PushV
	var_190_int = 24; // 0xf04 PushI
	var_189_int = var_187_float / var_187_float; // 0xf05 Div2
	var_185_int = var_188_int + var_189_int; // 0xf06 Add2
	return 2; // 0xf07 Return
}


