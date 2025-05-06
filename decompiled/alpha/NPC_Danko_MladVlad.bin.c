task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool)
{
	StopGroup0(); // 0x3 Func
	return 0; // 0x5 Return
}


task_1_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool)
{
	TaskCall(0); // 0x1e TaskCall
	func_0(); // 0x1f Call
	TaskReturn(); // 0x20 TaskReturn
	return 0; // 0x22 Return
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool)
{
	var_41_object = Obj(); // 0x24 PushV
	var_41_object = var_40_bool; // 0x25 Mov
	func_8869(var_41_object); // 0x26 Call
	return 0; // 0x28 Return
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool)
{
	var_41_bool = 0; var_42_object = Obj(); // 0x2a PushV
	var_42_object = var_40_bool; // 0x2b Mov
	func_7048(var_42_object); // 0x2c Call
	WaitForAnimEnd(); // 0x2e Func
	return 0; // 0x30 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	var_42_int = 1; // 0xc5 PushI
	if(var_42_int == 0) goto Label_298; // 0xc6 JumpB
	func_7143(); // 0xc8 Call
	var_44_int = 484; // 0xca PushI
	var_45_bool = var_40_string == var_44_int; // 0xcb Eq
	if(var_45_bool == 0) goto Label_235; // 0xcc JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0xcd PushV
	var_46_object = var_1_object; // 0xce MovT
	var_47_object = var_0_object; // 0xcf MovT
	func_7723(); // 0xd0 Call
	var_50_object = Obj(); var_51_object = Obj(); // 0xd2 PushV
	var_50_object = var_1_object; // 0xd3 MovT
	var_51_object = var_0_object; // 0xd4 MovT
	func_7296(); // 0xd5 Call
	var_54_string = ""; // 0xd7 PushV
	var_54_string = "Neutral"; // 0xd8 MovS
	func_180(var_41_bool, var_54_string); // 0xd9 Call
	var_69_int = 416; // 0xdb PushI
	SetMessage(var_69_int); // 0xdc TObjFunc
	ClearReplies(); // 0xde TObjFunc
	var_70_int = 417; // 0xe0 PushI
	var_71_int = 487; // 0xe1 PushI
	var_72_int = 485; // 0xe2 PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0xe3 TObjFunc
	var_73_int = 418; // 0xe5 PushI
	var_74_int = 9271; // 0xe6 PushI
	var_75_int = 486; // 0xe7 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0xe8 TObjFunc
	return 0; // 0xea Return
	
Label_235:
	var_76_int = 487; // 0xeb PushI
	var_77_bool = var_40_string == var_76_int; // 0xec Eq
	if(var_77_bool == 0) goto Label_263; // 0xed JumpB
	var_78_string = ""; // 0xee PushV
	var_78_string = "Neutral"; // 0xef MovS
	func_180(var_41_bool, var_78_string); // 0xf0 Call
	var_79_int = 419; // 0xf2 PushI
	SetMessage(var_79_int); // 0xf3 TObjFunc
	ClearReplies(); // 0xf5 TObjFunc
	var_80_int = 420; // 0xf7 PushI
	var_81_int = 9271; // 0xf8 PushI
	var_82_int = 488; // 0xf9 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0xfa TObjFunc
	var_83_int = 421; // 0xfc PushI
	var_84_int = 9271; // 0xfd PushI
	var_85_int = 489; // 0xfe PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0xff TObjFunc
	var_86_int = 422; // 0x101 PushI
	var_87_int = 9271; // 0x102 PushI
	var_88_int = 490; // 0x103 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x104 TObjFunc
	return 0; // 0x106 Return
	
Label_263:
	var_89_int = 9271; // 0x107 PushI
	var_90_bool = var_40_string == var_89_int; // 0x108 Eq
	if(var_90_bool == 0) goto Label_286; // 0x109 JumpB
	var_91_string = ""; // 0x10a PushV
	var_91_string = "Neutral"; // 0x10b MovS
	func_180(var_41_bool, var_91_string); // 0x10c Call
	var_92_int = 8445; // 0x10e PushI
	SetMessage(var_92_int); // 0x10f TObjFunc
	ClearReplies(); // 0x111 TObjFunc
	var_93_int = 8446; // 0x113 PushI
	var_94_int = -1; // 0x114 PushI
	var_95_int = 9275; // 0x115 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0x116 TObjFunc
	var_96_int = 8447; // 0x118 PushI
	var_97_int = -1; // 0x119 PushI
	var_98_int = 9276; // 0x11a PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x11b TObjFunc
	return 0; // 0x11d Return
	
Label_286:
	var_3_string = 1; // 0x11e TMovB
	var_99_bool = 0; // 0x11f PushV
	func_7232(var_99_bool); // 0x120 Call
	if(var_99_bool == 0) goto Label_294; // 0x122 JumpB
	lshStopAnimation(); // 0x123 Func
	goto Label_296; // 0x125 Jump
	
Label_296:
	return 0; // 0x128 Return
	
Label_294:
	StopAnimation(); // 0x126 Func
	
Label_298:
	return 0; // 0x12a Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	var_42_int = 1; // 0x2c6 PushI
	if(var_42_int == 0) goto Label_1945; // 0x2c7 JumpB
	func_7143(); // 0x2c9 Call
	var_44_int = 6555; // 0x2cb PushI
	var_45_bool = var_41_bool == var_44_int; // 0x2cc Eq
	if(var_45_bool == 0) goto Label_733; // 0x2cd JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0x2ce PushV
	var_46_object = var_1_object; // 0x2cf MovT
	var_47_object = var_0_object; // 0x2d0 MovT
	func_7830(); // 0x2d1 Call
	var_50_object = Obj(); var_51_object = Obj(); // 0x2d3 PushV
	var_50_object = var_1_object; // 0x2d4 MovT
	var_51_object = var_0_object; // 0x2d5 MovT
	func_7252(); // 0x2d6 Call
	var_103_object = Obj(); var_104_object = Obj(); // 0x2d8 PushV
	var_103_object = var_1_object; // 0x2d9 MovT
	var_104_object = var_0_object; // 0x2da MovT
	func_7348(); // 0x2db Call
	
Label_733:
	var_129_int = 6567; // 0x2dd PushI
	var_130_bool = var_41_bool == var_129_int; // 0x2de Eq
	if(var_130_bool == 0) goto Label_741; // 0x2df JumpB
	var_131_object = Obj(); var_132_object = Obj(); // 0x2e0 PushV
	var_131_object = var_1_object; // 0x2e1 MovT
	var_132_object = var_0_object; // 0x2e2 MovT
	func_7830(); // 0x2e3 Call
	
Label_741:
	var_133_int = 6552; // 0x2e5 PushI
	var_134_bool = var_41_bool == var_133_int; // 0x2e6 Eq
	if(var_134_bool == 0) goto Label_749; // 0x2e7 JumpB
	var_135_object = Obj(); var_136_object = Obj(); // 0x2e8 PushV
	var_135_object = var_1_object; // 0x2e9 MovT
	var_136_object = var_0_object; // 0x2ea MovT
	func_7830(); // 0x2eb Call
	
Label_749:
	var_137_int = 6553; // 0x2ed PushI
	var_138_bool = var_41_bool == var_137_int; // 0x2ee Eq
	if(var_138_bool == 0) goto Label_757; // 0x2ef JumpB
	var_139_object = Obj(); var_140_object = Obj(); // 0x2f0 PushV
	var_139_object = var_1_object; // 0x2f1 MovT
	var_140_object = var_0_object; // 0x2f2 MovT
	func_7830(); // 0x2f3 Call
	
Label_757:
	var_141_int = 6523; // 0x2f5 PushI
	var_142_bool = var_41_bool == var_141_int; // 0x2f6 Eq
	if(var_142_bool == 0) goto Label_765; // 0x2f7 JumpB
	var_143_object = Obj(); var_144_object = Obj(); // 0x2f8 PushV
	var_143_object = var_1_object; // 0x2f9 MovT
	var_144_object = var_0_object; // 0x2fa MovT
	func_7824(); // 0x2fb Call
	
Label_765:
	var_147_int = 6710; // 0x2fd PushI
	var_148_bool = var_41_bool == var_147_int; // 0x2fe Eq
	if(var_148_bool == 0) goto Label_783; // 0x2ff JumpB
	var_149_object = Obj(); var_150_object = Obj(); // 0x300 PushV
	var_149_object = var_1_object; // 0x301 MovT
	var_150_object = var_0_object; // 0x302 MovT
	func_7246(); // 0x303 Call
	var_153_object = Obj(); var_154_object = Obj(); // 0x305 PushV
	var_153_object = var_1_object; // 0x306 MovT
	var_154_object = var_0_object; // 0x307 MovT
	func_7279(var_154_object); // 0x308 Call
	var_162_object = Obj(); var_163_object = Obj(); // 0x30a PushV
	var_162_object = var_1_object; // 0x30b MovT
	var_163_object = var_0_object; // 0x30c MovT
	func_7290(); // 0x30d Call
	
Label_783:
	var_166_int = 6711; // 0x30f PushI
	var_167_bool = var_41_bool == var_166_int; // 0x310 Eq
	if(var_167_bool == 0) goto Label_801; // 0x311 JumpB
	var_168_object = Obj(); var_169_object = Obj(); // 0x312 PushV
	var_168_object = var_1_object; // 0x313 MovT
	var_169_object = var_0_object; // 0x314 MovT
	func_7246(); // 0x315 Call
	var_170_object = Obj(); var_171_object = Obj(); // 0x317 PushV
	var_170_object = var_1_object; // 0x318 MovT
	var_171_object = var_0_object; // 0x319 MovT
	func_7290(); // 0x31a Call
	var_172_object = Obj(); var_173_object = Obj(); // 0x31c PushV
	var_172_object = var_1_object; // 0x31d MovT
	var_173_object = var_0_object; // 0x31e MovT
	func_7279(var_173_object); // 0x31f Call
	
Label_801:
	var_174_int = 6712; // 0x321 PushI
	var_175_bool = var_41_bool == var_174_int; // 0x322 Eq
	if(var_175_bool == 0) goto Label_809; // 0x323 JumpB
	var_176_object = Obj(); var_177_object = Obj(); // 0x324 PushV
	var_176_object = var_1_object; // 0x325 MovT
	var_177_object = var_0_object; // 0x326 MovT
	func_7246(); // 0x327 Call
	
Label_809:
	var_178_int = 16488; // 0x329 PushI
	var_179_bool = var_41_bool == var_178_int; // 0x32a Eq
	if(var_179_bool == 0) goto Label_822; // 0x32b JumpB
	var_180_object = Obj(); var_181_object = Obj(); // 0x32c PushV
	var_180_object = var_1_object; // 0x32d MovT
	var_181_object = var_0_object; // 0x32e MovT
	func_7252(); // 0x32f Call
	var_182_object = Obj(); var_183_object = Obj(); // 0x331 PushV
	var_182_object = var_1_object; // 0x332 MovT
	var_183_object = var_0_object; // 0x333 MovT
	func_7348(); // 0x334 Call
	
Label_822:
	var_184_int = 9043; // 0x336 PushI
	var_185_bool = var_41_bool == var_184_int; // 0x337 Eq
	if(var_185_bool == 0) goto Label_830; // 0x338 JumpB
	var_186_object = Obj(); var_187_object = Obj(); // 0x339 PushV
	var_186_object = var_1_object; // 0x33a MovT
	var_187_object = var_0_object; // 0x33b MovT
	func_7234(); // 0x33c Call
	
Label_830:
	var_190_int = 9046; // 0x33e PushI
	var_191_bool = var_41_bool == var_190_int; // 0x33f Eq
	if(var_191_bool == 0) goto Label_838; // 0x340 JumpB
	var_192_object = Obj(); var_193_object = Obj(); // 0x341 PushV
	var_192_object = var_1_object; // 0x342 MovT
	var_193_object = var_0_object; // 0x343 MovT
	func_7836(); // 0x344 Call
	
Label_838:
	var_196_int = 9049; // 0x346 PushI
	var_197_bool = var_41_bool == var_196_int; // 0x347 Eq
	if(var_197_bool == 0) goto Label_846; // 0x348 JumpB
	var_198_object = Obj(); var_199_object = Obj(); // 0x349 PushV
	var_198_object = var_1_object; // 0x34a MovT
	var_199_object = var_0_object; // 0x34b MovT
	func_7729(); // 0x34c Call
	
Label_846:
	var_202_int = 9052; // 0x34e PushI
	var_203_bool = var_41_bool == var_202_int; // 0x34f Eq
	if(var_203_bool == 0) goto Label_854; // 0x350 JumpB
	var_204_object = Obj(); var_205_object = Obj(); // 0x351 PushV
	var_204_object = var_1_object; // 0x352 MovT
	var_205_object = var_0_object; // 0x353 MovT
	func_7735(); // 0x354 Call
	
Label_854:
	var_208_int = 9054; // 0x356 PushI
	var_209_bool = var_41_bool == var_208_int; // 0x357 Eq
	if(var_209_bool == 0) goto Label_862; // 0x358 JumpB
	var_210_object = Obj(); var_211_object = Obj(); // 0x359 PushV
	var_210_object = var_1_object; // 0x35a MovT
	var_211_object = var_0_object; // 0x35b MovT
	func_7741(); // 0x35c Call
	
Label_862:
	var_214_int = 9057; // 0x35e PushI
	var_215_bool = var_41_bool == var_214_int; // 0x35f Eq
	if(var_215_bool == 0) goto Label_870; // 0x360 JumpB
	var_216_object = Obj(); var_217_object = Obj(); // 0x361 PushV
	var_216_object = var_1_object; // 0x362 MovT
	var_217_object = var_0_object; // 0x363 MovT
	func_7747(); // 0x364 Call
	
Label_870:
	var_220_int = 9058; // 0x366 PushI
	var_221_bool = var_41_bool == var_220_int; // 0x367 Eq
	if(var_221_bool == 0) goto Label_878; // 0x368 JumpB
	var_222_object = Obj(); var_223_object = Obj(); // 0x369 PushV
	var_222_object = var_1_object; // 0x36a MovT
	var_223_object = var_0_object; // 0x36b MovT
	func_7753(); // 0x36c Call
	
Label_878:
	var_226_int = 9061; // 0x36e PushI
	var_227_bool = var_41_bool == var_226_int; // 0x36f Eq
	if(var_227_bool == 0) goto Label_886; // 0x370 JumpB
	var_228_object = Obj(); var_229_object = Obj(); // 0x371 PushV
	var_228_object = var_1_object; // 0x372 MovT
	var_229_object = var_0_object; // 0x373 MovT
	func_7759(); // 0x374 Call
	
Label_886:
	var_232_int = 9064; // 0x376 PushI
	var_233_bool = var_41_bool == var_232_int; // 0x377 Eq
	if(var_233_bool == 0) goto Label_894; // 0x378 JumpB
	var_234_object = Obj(); var_235_object = Obj(); // 0x379 PushV
	var_234_object = var_1_object; // 0x37a MovT
	var_235_object = var_0_object; // 0x37b MovT
	func_7765(); // 0x37c Call
	
Label_894:
	var_238_int = 6276; // 0x37e PushI
	var_239_bool = var_40_string == var_238_int; // 0x37f Eq
	if(var_239_bool == 0) goto Label_1190; // 0x380 JumpB
	var_240_bool = 0; // 0x381 PushV
	var_240_bool = 0; // 0x382 MovB
	var_241_bool = 0; var_242_object = Obj(); // 0x383 PushV
	var_242_object = var_1_object; // 0x384 MovT
	func_8541(var_242_object); // 0x385 Call
	if(var_241_bool == 0) goto Label_910; // 0x387 JumpB
	var_249_bool = 0; var_250_object = Obj(); // 0x388 PushV
	var_250_object = var_1_object; // 0x389 MovT
	func_7866(var_250_object); // 0x38a Call
	if(var_249_bool == 0) goto Label_910; // 0x38c JumpB
	var_240_bool = 1; // 0x38d MovB
	
Label_910:
	if(var_240_bool == 0) goto Label_936; // 0x38e JumpB
	var_255_string = ""; // 0x38f PushV
	var_255_string = "Neutral"; // 0x390 MovS
	func_693(var_41_bool, var_255_string); // 0x391 Call
	var_270_int = 5694; // 0x393 PushI
	SetMessage(var_270_int); // 0x394 TObjFunc
	ClearReplies(); // 0x396 TObjFunc
	var_271_int = 5695; // 0x398 PushI
	var_272_int = 6518; // 0x399 PushI
	var_273_int = 6277; // 0x39a PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x39b TObjFunc
	var_274_int = 5698; // 0x39d PushI
	var_275_int = -1; // 0x39e PushI
	var_276_int = 6280; // 0x39f PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x3a0 TObjFunc
	var_277_int = 5930; // 0x3a2 PushI
	var_278_int = 6526; // 0x3a3 PushI
	var_279_int = 6525; // 0x3a4 PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x3a5 TObjFunc
	return 0; // 0x3a7 Return
	
Label_936:
	var_280_string = ""; // 0x3a8 PushV
	var_280_string = "Neutral"; // 0x3a9 MovS
	func_693(var_41_bool, var_280_string); // 0x3aa Call
	var_281_int = 5699; // 0x3ac PushI
	SetMessage(var_281_int); // 0x3ad TObjFunc
	ClearReplies(); // 0x3af TObjFunc
	var_282_bool = 0; // 0x3b1 PushV
	var_282_bool = 0; // 0x3b2 MovB
	var_283_bool = 0; // 0x3b3 PushV
	var_283_bool = 0; // 0x3b4 MovB
	var_284_bool = 0; var_285_object = Obj(); // 0x3b5 PushV
	var_285_object = var_1_object; // 0x3b6 MovT
	func_7842(var_285_object); // 0x3b7 Call
	if(var_284_bool == 0) goto Label_960; // 0x3b9 JumpB
	var_290_bool = 0; var_291_object = Obj(); // 0x3ba PushV
	var_291_object = var_1_object; // 0x3bb MovT
	func_7878(var_291_object); // 0x3bc Call
	if(var_290_bool == 0) goto Label_960; // 0x3be JumpB
	var_283_bool = 1; // 0x3bf MovB
	
Label_960:
	if(var_283_bool == 0) goto Label_968; // 0x3c0 JumpB
	var_296_bool = 0; var_297_object = Obj(); // 0x3c1 PushV
	var_297_object = var_1_object; // 0x3c2 MovT
	func_7890(var_297_object); // 0x3c3 Call
	var_302_bool = var_296_bool == 0; // 0x3c5 Not
	if(var_302_bool == 0) goto Label_968; // 0x3c6 JumpB
	var_282_bool = 1; // 0x3c7 MovB
	
Label_968:
	if(var_282_bool == 0) goto Label_974; // 0x3c8 JumpB
	var_303_int = 5697; // 0x3c9 PushI
	var_304_int = 6705; // 0x3ca PushI
	var_305_int = 6279; // 0x3cb PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x3cc TObjFunc
	
Label_974:
	var_306_bool = 0; // 0x3ce PushV
	var_306_bool = 0; // 0x3cf MovB
	var_307_bool = 0; var_308_object = Obj(); // 0x3d0 PushV
	var_308_object = var_1_object; // 0x3d1 MovT
	func_7866(var_308_object); // 0x3d2 Call
	if(var_307_bool == 0) goto Label_988; // 0x3d4 JumpB
	var_309_bool = 0; var_310_object = Obj(); // 0x3d5 PushV
	var_310_object = var_1_object; // 0x3d6 MovT
	func_8541(var_310_object); // 0x3d7 Call
	var_311_bool = var_309_bool == 0; // 0x3d9 Not
	if(var_311_bool == 0) goto Label_988; // 0x3da JumpB
	var_306_bool = 1; // 0x3db MovB
	
Label_988:
	if(var_306_bool == 0) goto Label_994; // 0x3dc JumpB
	var_312_int = 5700; // 0x3dd PushI
	var_313_int = 16487; // 0x3de PushI
	var_314_int = 6282; // 0x3df PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0x3e0 TObjFunc
	
Label_994:
	var_315_bool = 0; // 0x3e2 PushV
	var_315_bool = 0; // 0x3e3 MovB
	var_316_bool = 0; var_317_object = Obj(); // 0x3e4 PushV
	var_317_object = var_1_object; // 0x3e5 MovT
	func_8565(var_317_object); // 0x3e6 Call
	if(var_316_bool == 0) goto Label_1007; // 0x3e8 JumpB
	var_322_bool = 0; var_323_object = Obj(); // 0x3e9 PushV
	var_323_object = var_1_object; // 0x3ea MovT
	func_7854(var_323_object); // 0x3eb Call
	if(var_322_bool == 0) goto Label_1007; // 0x3ed JumpB
	var_315_bool = 1; // 0x3ee MovB
	
Label_1007:
	if(var_315_bool == 0) goto Label_1013; // 0x3ef JumpB
	var_328_int = 8220; // 0x3f0 PushI
	var_329_int = 6283; // 0x3f1 PushI
	var_330_int = 9043; // 0x3f2 PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0x3f3 TObjFunc
	
Label_1013:
	var_331_bool = 0; // 0x3f5 PushV
	var_331_bool = 0; // 0x3f6 MovB
	var_332_bool = 0; var_333_object = Obj(); // 0x3f7 PushV
	var_333_object = var_1_object; // 0x3f8 MovT
	func_8505(var_333_object); // 0x3f9 Call
	if(var_332_bool == 0) goto Label_1026; // 0x3fb JumpB
	var_338_bool = 0; var_339_object = Obj(); // 0x3fc PushV
	var_339_object = var_1_object; // 0x3fd MovT
	func_8553(var_339_object); // 0x3fe Call
	if(var_338_bool == 0) goto Label_1026; // 0x400 JumpB
	var_331_bool = 1; // 0x401 MovB
	
Label_1026:
	if(var_331_bool == 0) goto Label_1032; // 0x402 JumpB
	var_344_int = 8223; // 0x403 PushI
	var_345_int = 6294; // 0x404 PushI
	var_346_int = 9046; // 0x405 PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0x406 TObjFunc
	
Label_1032:
	var_347_bool = 0; // 0x408 PushV
	var_347_bool = 0; // 0x409 MovB
	var_348_bool = 0; var_349_object = Obj(); // 0x40a PushV
	var_349_object = var_1_object; // 0x40b MovT
	func_8361(var_349_object); // 0x40c Call
	if(var_348_bool == 0) goto Label_1045; // 0x40e JumpB
	var_354_bool = 0; var_355_object = Obj(); // 0x40f PushV
	var_355_object = var_1_object; // 0x410 MovT
	func_8373(var_355_object); // 0x411 Call
	if(var_354_bool == 0) goto Label_1045; // 0x413 JumpB
	var_347_bool = 1; // 0x414 MovB
	
Label_1045:
	if(var_347_bool == 0) goto Label_1051; // 0x415 JumpB
	var_360_int = 8226; // 0x416 PushI
	var_361_int = 9070; // 0x417 PushI
	var_362_int = 9049; // 0x418 PushI
	AddReply(var_360_int, var_361_int, var_362_int); // 0x419 TObjFunc
	
Label_1051:
	var_363_bool = 0; // 0x41b PushV
	var_363_bool = 0; // 0x41c MovB
	var_364_bool = 0; var_365_object = Obj(); // 0x41d PushV
	var_365_object = var_1_object; // 0x41e MovT
	func_8481(var_365_object); // 0x41f Call
	if(var_364_bool == 0) goto Label_1064; // 0x421 JumpB
	var_370_bool = 0; var_371_object = Obj(); // 0x422 PushV
	var_371_object = var_1_object; // 0x423 MovT
	func_8385(var_371_object); // 0x424 Call
	if(var_370_bool == 0) goto Label_1064; // 0x426 JumpB
	var_363_bool = 1; // 0x427 MovB
	
Label_1064:
	if(var_363_bool == 0) goto Label_1070; // 0x428 JumpB
	var_376_int = 8229; // 0x429 PushI
	var_377_int = 9071; // 0x42a PushI
	var_378_int = 9052; // 0x42b PushI
	AddReply(var_376_int, var_377_int, var_378_int); // 0x42c TObjFunc
	
Label_1070:
	var_379_bool = 0; // 0x42e PushV
	var_379_bool = 0; // 0x42f MovB
	var_380_bool = 0; var_381_object = Obj(); // 0x430 PushV
	var_381_object = var_1_object; // 0x431 MovT
	func_8349(var_381_object); // 0x432 Call
	if(var_380_bool == 0) goto Label_1083; // 0x434 JumpB
	var_386_bool = 0; var_387_object = Obj(); // 0x435 PushV
	var_387_object = var_1_object; // 0x436 MovT
	func_8397(var_387_object); // 0x437 Call
	if(var_386_bool == 0) goto Label_1083; // 0x439 JumpB
	var_379_bool = 1; // 0x43a MovB
	
Label_1083:
	if(var_379_bool == 0) goto Label_1089; // 0x43b JumpB
	var_392_int = 8231; // 0x43c PushI
	var_393_int = 9072; // 0x43d PushI
	var_394_int = 9054; // 0x43e PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0x43f TObjFunc
	
Label_1089:
	var_395_bool = 0; // 0x441 PushV
	var_395_bool = 0; // 0x442 MovB
	var_396_bool = 0; var_397_object = Obj(); // 0x443 PushV
	var_397_object = var_1_object; // 0x444 MovT
	func_8325(var_397_object); // 0x445 Call
	if(var_396_bool == 0) goto Label_1102; // 0x447 JumpB
	var_402_bool = 0; var_403_object = Obj(); // 0x448 PushV
	var_403_object = var_1_object; // 0x449 MovT
	func_8409(var_403_object); // 0x44a Call
	if(var_402_bool == 0) goto Label_1102; // 0x44c JumpB
	var_395_bool = 1; // 0x44d MovB
	
Label_1102:
	if(var_395_bool == 0) goto Label_1108; // 0x44e JumpB
	var_408_int = 8234; // 0x44f PushI
	var_409_int = 9073; // 0x450 PushI
	var_410_int = 9057; // 0x451 PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0x452 TObjFunc
	
Label_1108:
	var_411_bool = 0; // 0x454 PushV
	var_411_bool = 0; // 0x455 MovB
	var_412_bool = 0; var_413_object = Obj(); // 0x456 PushV
	var_413_object = var_1_object; // 0x457 MovT
	func_7984(var_413_object); // 0x458 Call
	if(var_412_bool == 0) goto Label_1121; // 0x45a JumpB
	var_418_bool = 0; var_419_object = Obj(); // 0x45b PushV
	var_419_object = var_1_object; // 0x45c MovT
	func_8421(var_419_object); // 0x45d Call
	if(var_418_bool == 0) goto Label_1121; // 0x45f JumpB
	var_411_bool = 1; // 0x460 MovB
	
Label_1121:
	if(var_411_bool == 0) goto Label_1127; // 0x461 JumpB
	var_424_int = 8235; // 0x462 PushI
	var_425_int = 9074; // 0x463 PushI
	var_426_int = 9058; // 0x464 PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0x465 TObjFunc
	
Label_1127:
	var_427_bool = 0; // 0x467 PushV
	var_427_bool = 0; // 0x468 MovB
	var_428_bool = 0; var_429_object = Obj(); // 0x469 PushV
	var_429_object = var_1_object; // 0x46a MovT
	func_8337(var_429_object); // 0x46b Call
	if(var_428_bool == 0) goto Label_1140; // 0x46d JumpB
	var_434_bool = 0; var_435_object = Obj(); // 0x46e PushV
	var_435_object = var_1_object; // 0x46f MovT
	func_8433(var_435_object); // 0x470 Call
	if(var_434_bool == 0) goto Label_1140; // 0x472 JumpB
	var_427_bool = 1; // 0x473 MovB
	
Label_1140:
	if(var_427_bool == 0) goto Label_1146; // 0x474 JumpB
	var_440_int = 8238; // 0x475 PushI
	var_441_int = 9075; // 0x476 PushI
	var_442_int = 9061; // 0x477 PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0x478 TObjFunc
	
Label_1146:
	var_443_bool = 0; // 0x47a PushV
	var_443_bool = 0; // 0x47b MovB
	var_444_bool = 0; var_445_object = Obj(); // 0x47c PushV
	var_445_object = var_1_object; // 0x47d MovT
	func_8493(var_445_object); // 0x47e Call
	if(var_444_bool == 0) goto Label_1159; // 0x480 JumpB
	var_450_bool = 0; var_451_object = Obj(); // 0x481 PushV
	var_451_object = var_1_object; // 0x482 MovT
	func_8445(var_451_object); // 0x483 Call
	if(var_450_bool == 0) goto Label_1159; // 0x485 JumpB
	var_443_bool = 1; // 0x486 MovB
	
Label_1159:
	if(var_443_bool == 0) goto Label_1165; // 0x487 JumpB
	var_456_int = 8241; // 0x488 PushI
	var_457_int = 9076; // 0x489 PushI
	var_458_int = 9064; // 0x48a PushI
	AddReply(var_456_int, var_457_int, var_458_int); // 0x48b TObjFunc
	
Label_1165:
	var_459_bool = 0; // 0x48d PushV
	var_459_bool = 0; // 0x48e MovB
	var_460_bool = 0; var_461_object = Obj(); // 0x48f PushV
	var_461_object = var_1_object; // 0x490 MovT
	func_8469(var_461_object); // 0x491 Call
	if(var_460_bool == 0) goto Label_1178; // 0x493 JumpB
	var_466_bool = 0; var_467_object = Obj(); // 0x494 PushV
	var_467_object = var_1_object; // 0x495 MovT
	func_8457(var_467_object); // 0x496 Call
	if(var_466_bool == 0) goto Label_1178; // 0x498 JumpB
	var_459_bool = 1; // 0x499 MovB
	
Label_1178:
	if(var_459_bool == 0) goto Label_1184; // 0x49a JumpB
	var_472_int = 8246; // 0x49b PushI
	var_473_int = 9077; // 0x49c PushI
	var_474_int = 9069; // 0x49d PushI
	AddReply(var_472_int, var_473_int, var_474_int); // 0x49e TObjFunc
	
Label_1184:
	var_475_int = 6265; // 0x4a0 PushI
	var_476_int = -1; // 0x4a1 PushI
	var_477_int = 6932; // 0x4a2 PushI
	AddReply(var_475_int, var_476_int, var_477_int); // 0x4a3 TObjFunc
	return 0; // 0x4a5 Return
	
Label_1190:
	var_478_int = 9077; // 0x4a6 PushI
	var_479_bool = var_40_string == var_478_int; // 0x4a7 Eq
	if(var_479_bool == 0) goto Label_1208; // 0x4a8 JumpB
	var_480_string = ""; // 0x4a9 PushV
	var_480_string = "Neutral"; // 0x4aa MovS
	func_693(var_41_bool, var_480_string); // 0x4ab Call
	var_481_int = 8254; // 0x4ad PushI
	SetMessage(var_481_int); // 0x4ae TObjFunc
	ClearReplies(); // 0x4b0 TObjFunc
	var_482_int = 15212; // 0x4b2 PushI
	var_483_int = -1; // 0x4b3 PushI
	var_484_int = 16489; // 0x4b4 PushI
	AddReply(var_482_int, var_483_int, var_484_int); // 0x4b5 TObjFunc
	return 0; // 0x4b7 Return
	
Label_1208:
	var_485_int = 9076; // 0x4b8 PushI
	var_486_bool = var_40_string == var_485_int; // 0x4b9 Eq
	if(var_486_bool == 0) goto Label_1226; // 0x4ba JumpB
	var_487_string = ""; // 0x4bb PushV
	var_487_string = "Neutral"; // 0x4bc MovS
	func_693(var_41_bool, var_487_string); // 0x4bd Call
	var_488_int = 8253; // 0x4bf PushI
	SetMessage(var_488_int); // 0x4c0 TObjFunc
	ClearReplies(); // 0x4c2 TObjFunc
	var_489_int = 15213; // 0x4c4 PushI
	var_490_int = -1; // 0x4c5 PushI
	var_491_int = 16490; // 0x4c6 PushI
	AddReply(var_489_int, var_490_int, var_491_int); // 0x4c7 TObjFunc
	return 0; // 0x4c9 Return
	
Label_1226:
	var_492_int = 9075; // 0x4ca PushI
	var_493_bool = var_40_string == var_492_int; // 0x4cb Eq
	if(var_493_bool == 0) goto Label_1244; // 0x4cc JumpB
	var_494_string = ""; // 0x4cd PushV
	var_494_string = "Neutral"; // 0x4ce MovS
	func_693(var_41_bool, var_494_string); // 0x4cf Call
	var_495_int = 8252; // 0x4d1 PushI
	SetMessage(var_495_int); // 0x4d2 TObjFunc
	ClearReplies(); // 0x4d4 TObjFunc
	var_496_int = 15214; // 0x4d6 PushI
	var_497_int = -1; // 0x4d7 PushI
	var_498_int = 16491; // 0x4d8 PushI
	AddReply(var_496_int, var_497_int, var_498_int); // 0x4d9 TObjFunc
	return 0; // 0x4db Return
	
Label_1244:
	var_499_int = 9074; // 0x4dc PushI
	var_500_bool = var_40_string == var_499_int; // 0x4dd Eq
	if(var_500_bool == 0) goto Label_1262; // 0x4de JumpB
	var_501_string = ""; // 0x4df PushV
	var_501_string = "Neutral"; // 0x4e0 MovS
	func_693(var_41_bool, var_501_string); // 0x4e1 Call
	var_502_int = 8251; // 0x4e3 PushI
	SetMessage(var_502_int); // 0x4e4 TObjFunc
	ClearReplies(); // 0x4e6 TObjFunc
	var_503_int = 15215; // 0x4e8 PushI
	var_504_int = -1; // 0x4e9 PushI
	var_505_int = 16492; // 0x4ea PushI
	AddReply(var_503_int, var_504_int, var_505_int); // 0x4eb TObjFunc
	return 0; // 0x4ed Return
	
Label_1262:
	var_506_int = 9073; // 0x4ee PushI
	var_507_bool = var_40_string == var_506_int; // 0x4ef Eq
	if(var_507_bool == 0) goto Label_1280; // 0x4f0 JumpB
	var_508_string = ""; // 0x4f1 PushV
	var_508_string = "Neutral"; // 0x4f2 MovS
	func_693(var_41_bool, var_508_string); // 0x4f3 Call
	var_509_int = 8250; // 0x4f5 PushI
	SetMessage(var_509_int); // 0x4f6 TObjFunc
	ClearReplies(); // 0x4f8 TObjFunc
	var_510_int = 15216; // 0x4fa PushI
	var_511_int = -1; // 0x4fb PushI
	var_512_int = 16493; // 0x4fc PushI
	AddReply(var_510_int, var_511_int, var_512_int); // 0x4fd TObjFunc
	return 0; // 0x4ff Return
	
Label_1280:
	var_513_int = 9072; // 0x500 PushI
	var_514_bool = var_40_string == var_513_int; // 0x501 Eq
	if(var_514_bool == 0) goto Label_1298; // 0x502 JumpB
	var_515_string = ""; // 0x503 PushV
	var_515_string = "Neutral"; // 0x504 MovS
	func_693(var_41_bool, var_515_string); // 0x505 Call
	var_516_int = 8249; // 0x507 PushI
	SetMessage(var_516_int); // 0x508 TObjFunc
	ClearReplies(); // 0x50a TObjFunc
	var_517_int = 15217; // 0x50c PushI
	var_518_int = -1; // 0x50d PushI
	var_519_int = 16494; // 0x50e PushI
	AddReply(var_517_int, var_518_int, var_519_int); // 0x50f TObjFunc
	return 0; // 0x511 Return
	
Label_1298:
	var_520_int = 9071; // 0x512 PushI
	var_521_bool = var_40_string == var_520_int; // 0x513 Eq
	if(var_521_bool == 0) goto Label_1316; // 0x514 JumpB
	var_522_string = ""; // 0x515 PushV
	var_522_string = "Neutral"; // 0x516 MovS
	func_693(var_41_bool, var_522_string); // 0x517 Call
	var_523_int = 8248; // 0x519 PushI
	SetMessage(var_523_int); // 0x51a TObjFunc
	ClearReplies(); // 0x51c TObjFunc
	var_524_int = 15218; // 0x51e PushI
	var_525_int = -1; // 0x51f PushI
	var_526_int = 16495; // 0x520 PushI
	AddReply(var_524_int, var_525_int, var_526_int); // 0x521 TObjFunc
	return 0; // 0x523 Return
	
Label_1316:
	var_527_int = 9070; // 0x524 PushI
	var_528_bool = var_40_string == var_527_int; // 0x525 Eq
	if(var_528_bool == 0) goto Label_1334; // 0x526 JumpB
	var_529_string = ""; // 0x527 PushV
	var_529_string = "Neutral"; // 0x528 MovS
	func_693(var_41_bool, var_529_string); // 0x529 Call
	var_530_int = 8247; // 0x52b PushI
	SetMessage(var_530_int); // 0x52c TObjFunc
	ClearReplies(); // 0x52e TObjFunc
	var_531_int = 15219; // 0x530 PushI
	var_532_int = -1; // 0x531 PushI
	var_533_int = 16496; // 0x532 PushI
	AddReply(var_531_int, var_532_int, var_533_int); // 0x533 TObjFunc
	return 0; // 0x535 Return
	
Label_1334:
	var_534_int = 6294; // 0x536 PushI
	var_535_bool = var_40_string == var_534_int; // 0x537 Eq
	if(var_535_bool == 0) goto Label_1362; // 0x538 JumpB
	var_536_string = ""; // 0x539 PushV
	var_536_string = "Neutral"; // 0x53a MovS
	func_693(var_41_bool, var_536_string); // 0x53b Call
	var_537_int = 5711; // 0x53d PushI
	SetMessage(var_537_int); // 0x53e TObjFunc
	ClearReplies(); // 0x540 TObjFunc
	var_538_int = 5712; // 0x542 PushI
	var_539_int = 6296; // 0x543 PushI
	var_540_int = 6295; // 0x544 PushI
	AddReply(var_538_int, var_539_int, var_540_int); // 0x545 TObjFunc
	var_541_int = 5717; // 0x547 PushI
	var_542_int = 6296; // 0x548 PushI
	var_543_int = 6300; // 0x549 PushI
	AddReply(var_541_int, var_542_int, var_543_int); // 0x54a TObjFunc
	var_544_int = 5718; // 0x54c PushI
	var_545_int = -1; // 0x54d PushI
	var_546_int = 6302; // 0x54e PushI
	AddReply(var_544_int, var_545_int, var_546_int); // 0x54f TObjFunc
	return 0; // 0x551 Return
	
Label_1362:
	var_547_int = 6296; // 0x552 PushI
	var_548_bool = var_40_string == var_547_int; // 0x553 Eq
	if(var_548_bool == 0) goto Label_1385; // 0x554 JumpB
	var_549_string = ""; // 0x555 PushV
	var_549_string = "Neutral"; // 0x556 MovS
	func_693(var_41_bool, var_549_string); // 0x557 Call
	var_550_int = 5713; // 0x559 PushI
	SetMessage(var_550_int); // 0x55a TObjFunc
	ClearReplies(); // 0x55c TObjFunc
	var_551_int = 5714; // 0x55e PushI
	var_552_int = 6298; // 0x55f PushI
	var_553_int = 6297; // 0x560 PushI
	AddReply(var_551_int, var_552_int, var_553_int); // 0x561 TObjFunc
	var_554_int = 5716; // 0x563 PushI
	var_555_int = -1; // 0x564 PushI
	var_556_int = 6299; // 0x565 PushI
	AddReply(var_554_int, var_555_int, var_556_int); // 0x566 TObjFunc
	return 0; // 0x568 Return
	
Label_1385:
	var_557_int = 6298; // 0x569 PushI
	var_558_bool = var_40_string == var_557_int; // 0x56a Eq
	if(var_558_bool == 0) goto Label_1403; // 0x56b JumpB
	var_559_string = ""; // 0x56c PushV
	var_559_string = "Neutral"; // 0x56d MovS
	func_693(var_41_bool, var_559_string); // 0x56e Call
	var_560_int = 5715; // 0x570 PushI
	SetMessage(var_560_int); // 0x571 TObjFunc
	ClearReplies(); // 0x573 TObjFunc
	var_561_int = 5719; // 0x575 PushI
	var_562_int = -1; // 0x576 PushI
	var_563_int = 6303; // 0x577 PushI
	AddReply(var_561_int, var_562_int, var_563_int); // 0x578 TObjFunc
	return 0; // 0x57a Return
	
Label_1403:
	var_564_int = 6283; // 0x57b PushI
	var_565_bool = var_40_string == var_564_int; // 0x57c Eq
	if(var_565_bool == 0) goto Label_1421; // 0x57d JumpB
	var_566_string = ""; // 0x57e PushV
	var_566_string = "Neutral"; // 0x57f MovS
	func_693(var_41_bool, var_566_string); // 0x580 Call
	var_567_int = 5701; // 0x582 PushI
	SetMessage(var_567_int); // 0x583 TObjFunc
	ClearReplies(); // 0x585 TObjFunc
	var_568_int = 5702; // 0x587 PushI
	var_569_int = 6285; // 0x588 PushI
	var_570_int = 6284; // 0x589 PushI
	AddReply(var_568_int, var_569_int, var_570_int); // 0x58a TObjFunc
	return 0; // 0x58c Return
	
Label_1421:
	var_571_int = 6285; // 0x58d PushI
	var_572_bool = var_40_string == var_571_int; // 0x58e Eq
	if(var_572_bool == 0) goto Label_1444; // 0x58f JumpB
	var_573_string = ""; // 0x590 PushV
	var_573_string = "Neutral"; // 0x591 MovS
	func_693(var_41_bool, var_573_string); // 0x592 Call
	var_574_int = 5703; // 0x594 PushI
	SetMessage(var_574_int); // 0x595 TObjFunc
	ClearReplies(); // 0x597 TObjFunc
	var_575_int = 5704; // 0x599 PushI
	var_576_int = 6287; // 0x59a PushI
	var_577_int = 6286; // 0x59b PushI
	AddReply(var_575_int, var_576_int, var_577_int); // 0x59c TObjFunc
	var_578_int = 5710; // 0x59e PushI
	var_579_int = 6287; // 0x59f PushI
	var_580_int = 6292; // 0x5a0 PushI
	AddReply(var_578_int, var_579_int, var_580_int); // 0x5a1 TObjFunc
	return 0; // 0x5a3 Return
	
Label_1444:
	var_581_int = 6287; // 0x5a4 PushI
	var_582_bool = var_40_string == var_581_int; // 0x5a5 Eq
	if(var_582_bool == 0) goto Label_1462; // 0x5a6 JumpB
	var_583_string = ""; // 0x5a7 PushV
	var_583_string = "Neutral"; // 0x5a8 MovS
	func_693(var_41_bool, var_583_string); // 0x5a9 Call
	var_584_int = 5705; // 0x5ab PushI
	SetMessage(var_584_int); // 0x5ac TObjFunc
	ClearReplies(); // 0x5ae TObjFunc
	var_585_int = 5706; // 0x5b0 PushI
	var_586_int = 6289; // 0x5b1 PushI
	var_587_int = 6288; // 0x5b2 PushI
	AddReply(var_585_int, var_586_int, var_587_int); // 0x5b3 TObjFunc
	return 0; // 0x5b5 Return
	
Label_1462:
	var_588_int = 6289; // 0x5b6 PushI
	var_589_bool = var_40_string == var_588_int; // 0x5b7 Eq
	if(var_589_bool == 0) goto Label_1485; // 0x5b8 JumpB
	var_590_string = ""; // 0x5b9 PushV
	var_590_string = "Neutral"; // 0x5ba MovS
	func_693(var_41_bool, var_590_string); // 0x5bb Call
	var_591_int = 5707; // 0x5bd PushI
	SetMessage(var_591_int); // 0x5be TObjFunc
	ClearReplies(); // 0x5c0 TObjFunc
	var_592_int = 5708; // 0x5c2 PushI
	var_593_int = -1; // 0x5c3 PushI
	var_594_int = 6290; // 0x5c4 PushI
	AddReply(var_592_int, var_593_int, var_594_int); // 0x5c5 TObjFunc
	var_595_int = 5709; // 0x5c7 PushI
	var_596_int = -1; // 0x5c8 PushI
	var_597_int = 6291; // 0x5c9 PushI
	AddReply(var_595_int, var_596_int, var_597_int); // 0x5ca TObjFunc
	return 0; // 0x5cc Return
	
Label_1485:
	var_598_int = 16487; // 0x5cd PushI
	var_599_bool = var_40_string == var_598_int; // 0x5ce Eq
	if(var_599_bool == 0) goto Label_1503; // 0x5cf JumpB
	var_600_string = ""; // 0x5d0 PushV
	var_600_string = "Neutral"; // 0x5d1 MovS
	func_693(var_41_bool, var_600_string); // 0x5d2 Call
	var_601_int = 15210; // 0x5d4 PushI
	SetMessage(var_601_int); // 0x5d5 TObjFunc
	ClearReplies(); // 0x5d7 TObjFunc
	var_602_int = 15211; // 0x5d9 PushI
	var_603_int = -1; // 0x5da PushI
	var_604_int = 16488; // 0x5db PushI
	AddReply(var_602_int, var_603_int, var_604_int); // 0x5dc TObjFunc
	return 0; // 0x5de Return
	
Label_1503:
	var_605_int = 6705; // 0x5df PushI
	var_606_bool = var_40_string == var_605_int; // 0x5e0 Eq
	if(var_606_bool == 0) goto Label_1526; // 0x5e1 JumpB
	var_607_string = ""; // 0x5e2 PushV
	var_607_string = "Neutral"; // 0x5e3 MovS
	func_693(var_41_bool, var_607_string); // 0x5e4 Call
	var_608_int = 6076; // 0x5e6 PushI
	SetMessage(var_608_int); // 0x5e7 TObjFunc
	ClearReplies(); // 0x5e9 TObjFunc
	var_609_int = 6077; // 0x5eb PushI
	var_610_int = 6708; // 0x5ec PushI
	var_611_int = 6706; // 0x5ed PushI
	AddReply(var_609_int, var_610_int, var_611_int); // 0x5ee TObjFunc
	var_612_int = 6078; // 0x5f0 PushI
	var_613_int = 6708; // 0x5f1 PushI
	var_614_int = 6707; // 0x5f2 PushI
	AddReply(var_612_int, var_613_int, var_614_int); // 0x5f3 TObjFunc
	return 0; // 0x5f5 Return
	
Label_1526:
	var_615_int = 6708; // 0x5f6 PushI
	var_616_bool = var_40_string == var_615_int; // 0x5f7 Eq
	if(var_616_bool == 0) goto Label_1554; // 0x5f8 JumpB
	var_617_string = ""; // 0x5f9 PushV
	var_617_string = "Neutral"; // 0x5fa MovS
	func_693(var_41_bool, var_617_string); // 0x5fb Call
	var_618_int = 6079; // 0x5fd PushI
	SetMessage(var_618_int); // 0x5fe TObjFunc
	ClearReplies(); // 0x600 TObjFunc
	var_619_int = 6080; // 0x602 PushI
	var_620_int = -1; // 0x603 PushI
	var_621_int = 6710; // 0x604 PushI
	AddReply(var_619_int, var_620_int, var_621_int); // 0x605 TObjFunc
	var_622_int = 6081; // 0x607 PushI
	var_623_int = -1; // 0x608 PushI
	var_624_int = 6711; // 0x609 PushI
	AddReply(var_622_int, var_623_int, var_624_int); // 0x60a TObjFunc
	var_625_int = 6082; // 0x60c PushI
	var_626_int = -1; // 0x60d PushI
	var_627_int = 6712; // 0x60e PushI
	AddReply(var_625_int, var_626_int, var_627_int); // 0x60f TObjFunc
	return 0; // 0x611 Return
	
Label_1554:
	var_628_int = 6526; // 0x612 PushI
	var_629_bool = var_40_string == var_628_int; // 0x613 Eq
	if(var_629_bool == 0) goto Label_1577; // 0x614 JumpB
	var_630_string = ""; // 0x615 PushV
	var_630_string = "Neutral"; // 0x616 MovS
	func_693(var_41_bool, var_630_string); // 0x617 Call
	var_631_int = 5931; // 0x619 PushI
	SetMessage(var_631_int); // 0x61a TObjFunc
	ClearReplies(); // 0x61c TObjFunc
	var_632_int = 5932; // 0x61e PushI
	var_633_int = 6518; // 0x61f PushI
	var_634_int = 6527; // 0x620 PushI
	AddReply(var_632_int, var_633_int, var_634_int); // 0x621 TObjFunc
	var_635_int = 5933; // 0x623 PushI
	var_636_int = -1; // 0x624 PushI
	var_637_int = 6528; // 0x625 PushI
	AddReply(var_635_int, var_636_int, var_637_int); // 0x626 TObjFunc
	return 0; // 0x628 Return
	
Label_1577:
	var_638_int = 6518; // 0x629 PushI
	var_639_bool = var_40_string == var_638_int; // 0x62a Eq
	if(var_639_bool == 0) goto Label_1610; // 0x62b JumpB
	var_640_string = ""; // 0x62c PushV
	var_640_string = "Neutral"; // 0x62d MovS
	func_693(var_41_bool, var_640_string); // 0x62e Call
	var_641_int = 5923; // 0x630 PushI
	SetMessage(var_641_int); // 0x631 TObjFunc
	ClearReplies(); // 0x633 TObjFunc
	var_642_bool = 0; var_643_object = Obj(); // 0x635 PushV
	var_643_object = var_1_object; // 0x636 MovT
	func_8517(var_643_object); // 0x637 Call
	if(var_642_bool == 0) goto Label_1599; // 0x639 JumpB
	var_648_int = 5924; // 0x63a PushI
	var_649_int = 6530; // 0x63b PushI
	var_650_int = 6519; // 0x63c PushI
	AddReply(var_648_int, var_649_int, var_650_int); // 0x63d TObjFunc
	
Label_1599:
	var_651_int = 5925; // 0x63f PushI
	var_652_int = 6522; // 0x640 PushI
	var_653_int = 6520; // 0x641 PushI
	AddReply(var_651_int, var_652_int, var_653_int); // 0x642 TObjFunc
	var_654_int = 5926; // 0x644 PushI
	var_655_int = 6522; // 0x645 PushI
	var_656_int = 6521; // 0x646 PushI
	AddReply(var_654_int, var_655_int, var_656_int); // 0x647 TObjFunc
	return 0; // 0x649 Return
	
Label_1610:
	var_657_int = 6522; // 0x64a PushI
	var_658_bool = var_40_string == var_657_int; // 0x64b Eq
	if(var_658_bool == 0) goto Label_1639; // 0x64c JumpB
	var_659_string = ""; // 0x64d PushV
	var_659_string = "Neutral"; // 0x64e MovS
	func_693(var_41_bool, var_659_string); // 0x64f Call
	var_660_int = 5927; // 0x651 PushI
	SetMessage(var_660_int); // 0x652 TObjFunc
	ClearReplies(); // 0x654 TObjFunc
	var_661_int = 5929; // 0x656 PushI
	var_662_int = 6530; // 0x657 PushI
	var_663_int = 6524; // 0x658 PushI
	AddReply(var_661_int, var_662_int, var_663_int); // 0x659 TObjFunc
	var_664_bool = 0; var_665_object = Obj(); // 0x65b PushV
	var_665_object = var_1_object; // 0x65c MovT
	func_8529(var_665_object); // 0x65d Call
	var_670_bool = var_664_bool == 0; // 0x65f Not
	if(var_670_bool == 0) goto Label_1638; // 0x660 JumpB
	var_671_int = 5928; // 0x661 PushI
	var_672_int = 6934; // 0x662 PushI
	var_673_int = 6523; // 0x663 PushI
	AddReply(var_671_int, var_672_int, var_673_int); // 0x664 TObjFunc
	
Label_1638:
	return 0; // 0x666 Return
	
Label_1639:
	var_674_int = 6934; // 0x667 PushI
	var_675_bool = var_40_string == var_674_int; // 0x668 Eq
	if(var_675_bool == 0) goto Label_1657; // 0x669 JumpB
	var_676_string = ""; // 0x66a PushV
	var_676_string = "Neutral"; // 0x66b MovS
	func_693(var_41_bool, var_676_string); // 0x66c Call
	var_677_int = 6266; // 0x66e PushI
	SetMessage(var_677_int); // 0x66f TObjFunc
	ClearReplies(); // 0x671 TObjFunc
	var_678_int = 6267; // 0x673 PushI
	var_679_int = 6530; // 0x674 PushI
	var_680_int = 6935; // 0x675 PushI
	AddReply(var_678_int, var_679_int, var_680_int); // 0x676 TObjFunc
	return 0; // 0x678 Return
	
Label_1657:
	var_681_int = 6530; // 0x679 PushI
	var_682_bool = var_40_string == var_681_int; // 0x67a Eq
	if(var_682_bool == 0) goto Label_1680; // 0x67b JumpB
	var_683_string = ""; // 0x67c PushV
	var_683_string = "Neutral"; // 0x67d MovS
	func_693(var_41_bool, var_683_string); // 0x67e Call
	var_684_int = 5934; // 0x680 PushI
	SetMessage(var_684_int); // 0x681 TObjFunc
	ClearReplies(); // 0x683 TObjFunc
	var_685_int = 5937; // 0x685 PushI
	var_686_int = 6535; // 0x686 PushI
	var_687_int = 6534; // 0x687 PushI
	AddReply(var_685_int, var_686_int, var_687_int); // 0x688 TObjFunc
	var_688_int = 5935; // 0x68a PushI
	var_689_int = 6533; // 0x68b PushI
	var_690_int = 6532; // 0x68c PushI
	AddReply(var_688_int, var_689_int, var_690_int); // 0x68d TObjFunc
	return 0; // 0x68f Return
	
Label_1680:
	var_691_int = 6533; // 0x690 PushI
	var_692_bool = var_40_string == var_691_int; // 0x691 Eq
	if(var_692_bool == 0) goto Label_1698; // 0x692 JumpB
	var_693_string = ""; // 0x693 PushV
	var_693_string = "Neutral"; // 0x694 MovS
	func_693(var_41_bool, var_693_string); // 0x695 Call
	var_694_int = 5936; // 0x697 PushI
	SetMessage(var_694_int); // 0x698 TObjFunc
	ClearReplies(); // 0x69a TObjFunc
	var_695_int = 5939; // 0x69c PushI
	var_696_int = 6535; // 0x69d PushI
	var_697_int = 6536; // 0x69e PushI
	AddReply(var_695_int, var_696_int, var_697_int); // 0x69f TObjFunc
	return 0; // 0x6a1 Return
	
Label_1698:
	var_698_int = 6535; // 0x6a2 PushI
	var_699_bool = var_40_string == var_698_int; // 0x6a3 Eq
	if(var_699_bool == 0) goto Label_1726; // 0x6a4 JumpB
	var_700_object = Obj(); var_701_object = Obj(); // 0x6a5 PushV
	var_700_object = var_1_object; // 0x6a6 MovT
	var_701_object = var_0_object; // 0x6a7 MovT
	func_7240(); // 0x6a8 Call
	var_704_string = ""; // 0x6aa PushV
	var_704_string = "Neutral"; // 0x6ab MovS
	func_693(var_41_bool, var_704_string); // 0x6ac Call
	var_705_int = 5938; // 0x6ae PushI
	SetMessage(var_705_int); // 0x6af TObjFunc
	ClearReplies(); // 0x6b1 TObjFunc
	var_706_int = 5940; // 0x6b3 PushI
	var_707_int = 6539; // 0x6b4 PushI
	var_708_int = 6538; // 0x6b5 PushI
	AddReply(var_706_int, var_707_int, var_708_int); // 0x6b6 TObjFunc
	var_709_int = 5965; // 0x6b8 PushI
	var_710_int = 6569; // 0x6b9 PushI
	var_711_int = 6568; // 0x6ba PushI
	AddReply(var_709_int, var_710_int, var_711_int); // 0x6bb TObjFunc
	return 0; // 0x6bd Return
	
Label_1726:
	var_712_int = 6569; // 0x6be PushI
	var_713_bool = var_40_string == var_712_int; // 0x6bf Eq
	if(var_713_bool == 0) goto Label_1744; // 0x6c0 JumpB
	var_714_string = ""; // 0x6c1 PushV
	var_714_string = "Neutral"; // 0x6c2 MovS
	func_693(var_41_bool, var_714_string); // 0x6c3 Call
	var_715_int = 5966; // 0x6c5 PushI
	SetMessage(var_715_int); // 0x6c6 TObjFunc
	ClearReplies(); // 0x6c8 TObjFunc
	var_716_int = 5967; // 0x6ca PushI
	var_717_int = 6539; // 0x6cb PushI
	var_718_int = 6570; // 0x6cc PushI
	AddReply(var_716_int, var_717_int, var_718_int); // 0x6cd TObjFunc
	return 0; // 0x6cf Return
	
Label_1744:
	var_719_int = 6539; // 0x6d0 PushI
	var_720_bool = var_40_string == var_719_int; // 0x6d1 Eq
	if(var_720_bool == 0) goto Label_1767; // 0x6d2 JumpB
	var_721_string = ""; // 0x6d3 PushV
	var_721_string = "Neutral"; // 0x6d4 MovS
	func_693(var_41_bool, var_721_string); // 0x6d5 Call
	var_722_int = 5941; // 0x6d7 PushI
	SetMessage(var_722_int); // 0x6d8 TObjFunc
	ClearReplies(); // 0x6da TObjFunc
	var_723_int = 5945; // 0x6dc PushI
	var_724_int = 6544; // 0x6dd PushI
	var_725_int = 6543; // 0x6de PushI
	AddReply(var_723_int, var_724_int, var_725_int); // 0x6df TObjFunc
	var_726_int = 5942; // 0x6e1 PushI
	var_727_int = 6541; // 0x6e2 PushI
	var_728_int = 6540; // 0x6e3 PushI
	AddReply(var_726_int, var_727_int, var_728_int); // 0x6e4 TObjFunc
	return 0; // 0x6e6 Return
	
Label_1767:
	var_729_int = 6541; // 0x6e7 PushI
	var_730_bool = var_40_string == var_729_int; // 0x6e8 Eq
	if(var_730_bool == 0) goto Label_1790; // 0x6e9 JumpB
	var_731_string = ""; // 0x6ea PushV
	var_731_string = "Neutral"; // 0x6eb MovS
	func_693(var_41_bool, var_731_string); // 0x6ec Call
	var_732_int = 5943; // 0x6ee PushI
	SetMessage(var_732_int); // 0x6ef TObjFunc
	ClearReplies(); // 0x6f1 TObjFunc
	var_733_int = 5944; // 0x6f3 PushI
	var_734_int = 6544; // 0x6f4 PushI
	var_735_int = 6542; // 0x6f5 PushI
	AddReply(var_733_int, var_734_int, var_735_int); // 0x6f6 TObjFunc
	var_736_int = 5957; // 0x6f8 PushI
	var_737_int = 6557; // 0x6f9 PushI
	var_738_int = 6556; // 0x6fa PushI
	AddReply(var_736_int, var_737_int, var_738_int); // 0x6fb TObjFunc
	return 0; // 0x6fd Return
	
Label_1790:
	var_739_int = 6557; // 0x6fe PushI
	var_740_bool = var_40_string == var_739_int; // 0x6ff Eq
	if(var_740_bool == 0) goto Label_1813; // 0x700 JumpB
	var_741_string = ""; // 0x701 PushV
	var_741_string = "Neutral"; // 0x702 MovS
	func_693(var_41_bool, var_741_string); // 0x703 Call
	var_742_int = 5958; // 0x705 PushI
	SetMessage(var_742_int); // 0x706 TObjFunc
	ClearReplies(); // 0x708 TObjFunc
	var_743_int = 5959; // 0x70a PushI
	var_744_int = 6544; // 0x70b PushI
	var_745_int = 6558; // 0x70c PushI
	AddReply(var_743_int, var_744_int, var_745_int); // 0x70d TObjFunc
	var_746_int = 5960; // 0x70f PushI
	var_747_int = 6544; // 0x710 PushI
	var_748_int = 6559; // 0x711 PushI
	AddReply(var_746_int, var_747_int, var_748_int); // 0x712 TObjFunc
	return 0; // 0x714 Return
	
Label_1813:
	var_749_int = 6544; // 0x715 PushI
	var_750_bool = var_40_string == var_749_int; // 0x716 Eq
	if(var_750_bool == 0) goto Label_1836; // 0x717 JumpB
	var_751_string = ""; // 0x718 PushV
	var_751_string = "Neutral"; // 0x719 MovS
	func_693(var_41_bool, var_751_string); // 0x71a Call
	var_752_int = 5946; // 0x71c PushI
	SetMessage(var_752_int); // 0x71d TObjFunc
	ClearReplies(); // 0x71f TObjFunc
	var_753_int = 5947; // 0x721 PushI
	var_754_int = 6546; // 0x722 PushI
	var_755_int = 6545; // 0x723 PushI
	AddReply(var_753_int, var_754_int, var_755_int); // 0x724 TObjFunc
	var_756_int = 5949; // 0x726 PushI
	var_757_int = 6562; // 0x727 PushI
	var_758_int = 6548; // 0x728 PushI
	AddReply(var_756_int, var_757_int, var_758_int); // 0x729 TObjFunc
	return 0; // 0x72b Return
	
Label_1836:
	var_759_int = 6562; // 0x72c PushI
	var_760_bool = var_40_string == var_759_int; // 0x72d Eq
	if(var_760_bool == 0) goto Label_1859; // 0x72e JumpB
	var_761_string = ""; // 0x72f PushV
	var_761_string = "Neutral"; // 0x730 MovS
	func_693(var_41_bool, var_761_string); // 0x731 Call
	var_762_int = 5961; // 0x733 PushI
	SetMessage(var_762_int); // 0x734 TObjFunc
	ClearReplies(); // 0x736 TObjFunc
	var_763_int = 5962; // 0x738 PushI
	var_764_int = 6546; // 0x739 PushI
	var_765_int = 6563; // 0x73a PushI
	AddReply(var_763_int, var_764_int, var_765_int); // 0x73b TObjFunc
	var_766_int = 5963; // 0x73d PushI
	var_767_int = 6554; // 0x73e PushI
	var_768_int = 6564; // 0x73f PushI
	AddReply(var_766_int, var_767_int, var_768_int); // 0x740 TObjFunc
	return 0; // 0x742 Return
	
Label_1859:
	var_769_int = 6546; // 0x743 PushI
	var_770_bool = var_40_string == var_769_int; // 0x744 Eq
	if(var_770_bool == 0) goto Label_1882; // 0x745 JumpB
	var_771_string = ""; // 0x746 PushV
	var_771_string = "Neutral"; // 0x747 MovS
	func_693(var_41_bool, var_771_string); // 0x748 Call
	var_772_int = 5948; // 0x74a PushI
	SetMessage(var_772_int); // 0x74b TObjFunc
	ClearReplies(); // 0x74d TObjFunc
	var_773_int = 5950; // 0x74f PushI
	var_774_int = 6554; // 0x750 PushI
	var_775_int = 6549; // 0x751 PushI
	AddReply(var_773_int, var_774_int, var_775_int); // 0x752 TObjFunc
	var_776_int = 5951; // 0x754 PushI
	var_777_int = 6551; // 0x755 PushI
	var_778_int = 6550; // 0x756 PushI
	AddReply(var_776_int, var_777_int, var_778_int); // 0x757 TObjFunc
	return 0; // 0x759 Return
	
Label_1882:
	var_779_int = 6551; // 0x75a PushI
	var_780_bool = var_40_string == var_779_int; // 0x75b Eq
	if(var_780_bool == 0) goto Label_1910; // 0x75c JumpB
	var_781_string = ""; // 0x75d PushV
	var_781_string = "Neutral"; // 0x75e MovS
	func_693(var_41_bool, var_781_string); // 0x75f Call
	var_782_int = 5952; // 0x761 PushI
	SetMessage(var_782_int); // 0x762 TObjFunc
	ClearReplies(); // 0x764 TObjFunc
	var_783_int = 5969; // 0x766 PushI
	var_784_int = 6554; // 0x767 PushI
	var_785_int = 6573; // 0x768 PushI
	AddReply(var_783_int, var_784_int, var_785_int); // 0x769 TObjFunc
	var_786_int = 5953; // 0x76b PushI
	var_787_int = -1; // 0x76c PushI
	var_788_int = 6552; // 0x76d PushI
	AddReply(var_786_int, var_787_int, var_788_int); // 0x76e TObjFunc
	var_789_int = 5954; // 0x770 PushI
	var_790_int = -1; // 0x771 PushI
	var_791_int = 6553; // 0x772 PushI
	AddReply(var_789_int, var_790_int, var_791_int); // 0x773 TObjFunc
	return 0; // 0x775 Return
	
Label_1910:
	var_792_int = 6554; // 0x776 PushI
	var_793_bool = var_40_string == var_792_int; // 0x777 Eq
	if(var_793_bool == 0) goto Label_1933; // 0x778 JumpB
	var_794_string = ""; // 0x779 PushV
	var_794_string = "Neutral"; // 0x77a MovS
	func_693(var_41_bool, var_794_string); // 0x77b Call
	var_795_int = 5955; // 0x77d PushI
	SetMessage(var_795_int); // 0x77e TObjFunc
	ClearReplies(); // 0x780 TObjFunc
	var_796_int = 5956; // 0x782 PushI
	var_797_int = -1; // 0x783 PushI
	var_798_int = 6555; // 0x784 PushI
	AddReply(var_796_int, var_797_int, var_798_int); // 0x785 TObjFunc
	var_799_int = 5964; // 0x787 PushI
	var_800_int = -1; // 0x788 PushI
	var_801_int = 6567; // 0x789 PushI
	AddReply(var_799_int, var_800_int, var_801_int); // 0x78a TObjFunc
	return 0; // 0x78c Return
	
Label_1933:
	var_3_string = 1; // 0x78d TMovB
	var_802_bool = 0; // 0x78e PushV
	func_7232(var_802_bool); // 0x78f Call
	if(var_802_bool == 0) goto Label_1941; // 0x791 JumpB
	lshStopAnimation(); // 0x792 Func
	goto Label_1943; // 0x794 Jump
	
Label_1943:
	return 0; // 0x797 Return
	
Label_1941:
	StopAnimation(); // 0x795 Func
	
Label_1945:
	return 0; // 0x799 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	var_42_int = 1; // 0x887 PushI
	if(var_42_int == 0) goto Label_2957; // 0x888 JumpB
	func_7143(); // 0x88a Call
	var_44_int = 8567; // 0x88c PushI
	var_45_bool = var_41_bool == var_44_int; // 0x88d Eq
	if(var_45_bool == 0) goto Label_2201; // 0x88e JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0x88f PushV
	var_46_object = var_1_object; // 0x890 MovT
	var_47_object = var_0_object; // 0x891 MovT
	func_7302(); // 0x892 Call
	var_50_object = Obj(); var_51_object = Obj(); // 0x894 PushV
	var_50_object = var_1_object; // 0x895 MovT
	var_51_object = var_0_object; // 0x896 MovT
	func_7326(); // 0x897 Call
	
Label_2201:
	var_54_int = 8569; // 0x899 PushI
	var_55_bool = var_41_bool == var_54_int; // 0x89a Eq
	if(var_55_bool == 0) goto Label_2214; // 0x89b JumpB
	var_56_object = Obj(); var_57_object = Obj(); // 0x89c PushV
	var_56_object = var_1_object; // 0x89d MovT
	var_57_object = var_0_object; // 0x89e MovT
	func_7302(); // 0x89f Call
	var_58_object = Obj(); var_59_object = Obj(); // 0x8a1 PushV
	var_58_object = var_1_object; // 0x8a2 MovT
	var_59_object = var_0_object; // 0x8a3 MovT
	func_7326(); // 0x8a4 Call
	
Label_2214:
	var_60_int = 8566; // 0x8a6 PushI
	var_61_bool = var_41_bool == var_60_int; // 0x8a7 Eq
	if(var_61_bool == 0) goto Label_2222; // 0x8a8 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0x8a9 PushV
	var_62_object = var_1_object; // 0x8aa MovT
	var_63_object = var_0_object; // 0x8ab MovT
	func_7302(); // 0x8ac Call
	
Label_2222:
	var_64_int = 8574; // 0x8ae PushI
	var_65_bool = var_41_bool == var_64_int; // 0x8af Eq
	if(var_65_bool == 0) goto Label_2235; // 0x8b0 JumpB
	var_66_object = Obj(); var_67_object = Obj(); // 0x8b1 PushV
	var_66_object = var_1_object; // 0x8b2 MovT
	var_67_object = var_0_object; // 0x8b3 MovT
	func_7302(); // 0x8b4 Call
	var_68_object = Obj(); var_69_object = Obj(); // 0x8b6 PushV
	var_68_object = var_1_object; // 0x8b7 MovT
	var_69_object = var_0_object; // 0x8b8 MovT
	func_7326(); // 0x8b9 Call
	
Label_2235:
	var_70_int = 8576; // 0x8bb PushI
	var_71_bool = var_41_bool == var_70_int; // 0x8bc Eq
	if(var_71_bool == 0) goto Label_2248; // 0x8bd JumpB
	var_72_object = Obj(); var_73_object = Obj(); // 0x8be PushV
	var_72_object = var_1_object; // 0x8bf MovT
	var_73_object = var_0_object; // 0x8c0 MovT
	func_7326(); // 0x8c1 Call
	var_74_object = Obj(); var_75_object = Obj(); // 0x8c3 PushV
	var_74_object = var_1_object; // 0x8c4 MovT
	var_75_object = var_0_object; // 0x8c5 MovT
	func_7302(); // 0x8c6 Call
	
Label_2248:
	var_76_int = 8572; // 0x8c8 PushI
	var_77_bool = var_41_bool == var_76_int; // 0x8c9 Eq
	if(var_77_bool == 0) goto Label_2261; // 0x8ca JumpB
	var_78_object = Obj(); var_79_object = Obj(); // 0x8cb PushV
	var_78_object = var_1_object; // 0x8cc MovT
	var_79_object = var_0_object; // 0x8cd MovT
	func_7326(); // 0x8ce Call
	var_80_object = Obj(); var_81_object = Obj(); // 0x8d0 PushV
	var_80_object = var_1_object; // 0x8d1 MovT
	var_81_object = var_0_object; // 0x8d2 MovT
	func_7302(); // 0x8d3 Call
	
Label_2261:
	var_82_int = 8297; // 0x8d5 PushI
	var_83_bool = var_41_bool == var_82_int; // 0x8d6 Eq
	if(var_83_bool == 0) goto Label_2279; // 0x8d7 JumpB
	var_84_object = Obj(); var_85_object = Obj(); // 0x8d8 PushV
	var_84_object = var_1_object; // 0x8d9 MovT
	var_85_object = var_0_object; // 0x8da MovT
	func_7308(); // 0x8db Call
	var_88_object = Obj(); var_89_object = Obj(); // 0x8dd PushV
	var_88_object = var_1_object; // 0x8de MovT
	var_89_object = var_0_object; // 0x8df MovT
	func_7279(var_89_object); // 0x8e0 Call
	var_97_object = Obj(); var_98_object = Obj(); // 0x8e2 PushV
	var_97_object = var_1_object; // 0x8e3 MovT
	var_98_object = var_0_object; // 0x8e4 MovT
	func_7290(); // 0x8e5 Call
	
Label_2279:
	var_101_int = 8298; // 0x8e7 PushI
	var_102_bool = var_41_bool == var_101_int; // 0x8e8 Eq
	if(var_102_bool == 0) goto Label_2297; // 0x8e9 JumpB
	var_103_object = Obj(); var_104_object = Obj(); // 0x8ea PushV
	var_103_object = var_1_object; // 0x8eb MovT
	var_104_object = var_0_object; // 0x8ec MovT
	func_7308(); // 0x8ed Call
	var_105_object = Obj(); var_106_object = Obj(); // 0x8ef PushV
	var_105_object = var_1_object; // 0x8f0 MovT
	var_106_object = var_0_object; // 0x8f1 MovT
	func_7279(var_106_object); // 0x8f2 Call
	var_107_object = Obj(); var_108_object = Obj(); // 0x8f4 PushV
	var_107_object = var_1_object; // 0x8f5 MovT
	var_108_object = var_0_object; // 0x8f6 MovT
	func_7290(); // 0x8f7 Call
	
Label_2297:
	var_109_int = 8553; // 0x8f9 PushI
	var_110_bool = var_41_bool == var_109_int; // 0x8fa Eq
	if(var_110_bool == 0) goto Label_2315; // 0x8fb JumpB
	var_111_object = Obj(); var_112_object = Obj(); // 0x8fc PushV
	var_111_object = var_1_object; // 0x8fd MovT
	var_112_object = var_0_object; // 0x8fe MovT
	func_7308(); // 0x8ff Call
	var_113_object = Obj(); var_114_object = Obj(); // 0x901 PushV
	var_113_object = var_1_object; // 0x902 MovT
	var_114_object = var_0_object; // 0x903 MovT
	func_7279(var_114_object); // 0x904 Call
	var_115_object = Obj(); var_116_object = Obj(); // 0x906 PushV
	var_115_object = var_1_object; // 0x907 MovT
	var_116_object = var_0_object; // 0x908 MovT
	func_7290(); // 0x909 Call
	
Label_2315:
	var_117_int = 8549; // 0x90b PushI
	var_118_bool = var_41_bool == var_117_int; // 0x90c Eq
	if(var_118_bool == 0) goto Label_2323; // 0x90d JumpB
	var_119_object = Obj(); var_120_object = Obj(); // 0x90e PushV
	var_119_object = var_1_object; // 0x90f MovT
	var_120_object = var_0_object; // 0x910 MovT
	func_7314(); // 0x911 Call
	
Label_2323:
	var_123_int = 8552; // 0x913 PushI
	var_124_bool = var_41_bool == var_123_int; // 0x914 Eq
	if(var_124_bool == 0) goto Label_2331; // 0x915 JumpB
	var_125_object = Obj(); var_126_object = Obj(); // 0x916 PushV
	var_125_object = var_1_object; // 0x917 MovT
	var_126_object = var_0_object; // 0x918 MovT
	func_7314(); // 0x919 Call
	
Label_2331:
	var_127_int = 8560; // 0x91b PushI
	var_128_bool = var_41_bool == var_127_int; // 0x91c Eq
	if(var_128_bool == 0) goto Label_2339; // 0x91d JumpB
	var_129_object = Obj(); var_130_object = Obj(); // 0x91e PushV
	var_129_object = var_1_object; // 0x91f MovT
	var_130_object = var_0_object; // 0x920 MovT
	func_7320(); // 0x921 Call
	
Label_2339:
	var_133_int = 7641; // 0x923 PushI
	var_134_bool = var_40_string == var_133_int; // 0x924 Eq
	if(var_134_bool == 0) goto Label_2461; // 0x925 JumpB
	var_135_bool = 0; // 0x926 PushV
	var_135_bool = 0; // 0x927 MovB
	var_136_bool = 0; var_137_object = Obj(); // 0x928 PushV
	var_137_object = var_1_object; // 0x929 MovT
	func_7924(var_137_object); // 0x92a Call
	if(var_136_bool == 0) goto Label_2356; // 0x92c JumpB
	var_144_bool = 0; var_145_object = Obj(); // 0x92d PushV
	var_145_object = var_1_object; // 0x92e MovT
	func_7912(var_145_object); // 0x92f Call
	var_150_bool = var_144_bool == 0; // 0x931 Not
	if(var_150_bool == 0) goto Label_2356; // 0x932 JumpB
	var_135_bool = 1; // 0x933 MovB
	
Label_2356:
	if(var_135_bool == 0) goto Label_2377; // 0x934 JumpB
	var_151_string = ""; // 0x935 PushV
	var_151_string = "Neutral"; // 0x936 MovS
	func_2166(var_41_bool, var_151_string); // 0x937 Call
	var_166_int = 6935; // 0x939 PushI
	SetMessage(var_166_int); // 0x93a TObjFunc
	ClearReplies(); // 0x93c TObjFunc
	var_167_int = 7509; // 0x93e PushI
	var_168_int = 8291; // 0x93f PushI
	var_169_int = 8290; // 0x940 PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x941 TObjFunc
	var_170_int = 7518; // 0x943 PushI
	var_171_int = 8300; // 0x944 PushI
	var_172_int = 8299; // 0x945 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x946 TObjFunc
	return 0; // 0x948 Return
	
Label_2377:
	var_173_string = ""; // 0x949 PushV
	var_173_string = "Neutral"; // 0x94a MovS
	func_2166(var_41_bool, var_173_string); // 0x94b Call
	var_174_int = 6929; // 0x94d PushI
	SetMessage(var_174_int); // 0x94e TObjFunc
	ClearReplies(); // 0x950 TObjFunc
	var_175_bool = 0; // 0x952 PushV
	var_175_bool = 0; // 0x953 MovB
	var_176_bool = 0; var_177_object = Obj(); // 0x954 PushV
	var_177_object = var_1_object; // 0x955 MovT
	func_7936(var_177_object); // 0x956 Call
	if(var_176_bool == 0) goto Label_2399; // 0x958 JumpB
	var_182_bool = 0; var_183_object = Obj(); // 0x959 PushV
	var_183_object = var_1_object; // 0x95a MovT
	func_7912(var_183_object); // 0x95b Call
	if(var_182_bool == 0) goto Label_2399; // 0x95d JumpB
	var_175_bool = 1; // 0x95e MovB
	
Label_2399:
	if(var_175_bool == 0) goto Label_2405; // 0x95f JumpB
	var_184_int = 6930; // 0x960 PushI
	var_185_int = 7637; // 0x961 PushI
	var_186_int = 7636; // 0x962 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x963 TObjFunc
	
Label_2405:
	var_187_bool = 0; var_188_object = Obj(); // 0x965 PushV
	var_188_object = var_1_object; // 0x966 MovT
	func_7948(var_188_object); // 0x967 Call
	if(var_187_bool == 0) goto Label_2415; // 0x969 JumpB
	var_193_int = 6938; // 0x96a PushI
	var_194_int = 7645; // 0x96b PushI
	var_195_int = 7644; // 0x96c PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x96d TObjFunc
	
Label_2415:
	var_196_bool = 0; var_197_object = Obj(); // 0x96f PushV
	var_197_object = var_1_object; // 0x970 MovT
	func_7960(var_197_object); // 0x971 Call
	if(var_196_bool == 0) goto Label_2425; // 0x973 JumpB
	var_202_int = 6940; // 0x974 PushI
	var_203_int = 7647; // 0x975 PushI
	var_204_int = 7646; // 0x976 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x977 TObjFunc
	
Label_2425:
	var_205_bool = 0; var_206_object = Obj(); // 0x979 PushV
	var_206_object = var_1_object; // 0x97a MovT
	func_7972(var_206_object); // 0x97b Call
	if(var_205_bool == 0) goto Label_2435; // 0x97d JumpB
	var_211_int = 7776; // 0x97e PushI
	var_212_int = 8568; // 0x97f PushI
	var_213_int = 8577; // 0x980 PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x981 TObjFunc
	
Label_2435:
	var_214_int = 7746; // 0x983 PushI
	var_215_int = -1; // 0x984 PushI
	var_216_int = 8547; // 0x985 PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x986 TObjFunc
	return 0; // 0x988 Return
	
Label_2461:
	var_217_int = 10458; // 0x99d PushI
	var_218_bool = var_40_string == var_217_int; // 0x99e Eq
	if(var_218_bool == 0) goto Label_2479; // 0x99f JumpB
	var_219_string = ""; // 0x9a0 PushV
	var_219_string = "Neutral"; // 0x9a1 MovS
	func_2166(var_41_bool, var_219_string); // 0x9a2 Call
	var_220_int = 9515; // 0x9a4 PushI
	SetMessage(var_220_int); // 0x9a5 TObjFunc
	ClearReplies(); // 0x9a7 TObjFunc
	var_221_int = 9516; // 0x9a9 PushI
	var_222_int = -1; // 0x9aa PushI
	var_223_int = 10459; // 0x9ab PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x9ac TObjFunc
	return 0; // 0x9ae Return
	
Label_2479:
	var_224_int = 10445; // 0x9af PushI
	var_225_bool = var_40_string == var_224_int; // 0x9b0 Eq
	if(var_225_bool == 0) goto Label_2507; // 0x9b1 JumpB
	var_226_string = ""; // 0x9b2 PushV
	var_226_string = "Neutral"; // 0x9b3 MovS
	func_2166(var_41_bool, var_226_string); // 0x9b4 Call
	var_227_int = 9502; // 0x9b6 PushI
	SetMessage(var_227_int); // 0x9b7 TObjFunc
	ClearReplies(); // 0x9b9 TObjFunc
	var_228_int = 9503; // 0x9bb PushI
	var_229_int = 10447; // 0x9bc PushI
	var_230_int = 10446; // 0x9bd PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x9be TObjFunc
	var_231_int = 9510; // 0x9c0 PushI
	var_232_int = -1; // 0x9c1 PushI
	var_233_int = 10453; // 0x9c2 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x9c3 TObjFunc
	var_234_int = 9511; // 0x9c5 PushI
	var_235_int = 10455; // 0x9c6 PushI
	var_236_int = 10454; // 0x9c7 PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x9c8 TObjFunc
	return 0; // 0x9ca Return
	
Label_2507:
	var_237_int = 10455; // 0x9cb PushI
	var_238_bool = var_40_string == var_237_int; // 0x9cc Eq
	if(var_238_bool == 0) goto Label_2525; // 0x9cd JumpB
	var_239_string = ""; // 0x9ce PushV
	var_239_string = "Neutral"; // 0x9cf MovS
	func_2166(var_41_bool, var_239_string); // 0x9d0 Call
	var_240_int = 9512; // 0x9d2 PushI
	SetMessage(var_240_int); // 0x9d3 TObjFunc
	ClearReplies(); // 0x9d5 TObjFunc
	var_241_int = 9513; // 0x9d7 PushI
	var_242_int = -1; // 0x9d8 PushI
	var_243_int = 10456; // 0x9d9 PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x9da TObjFunc
	return 0; // 0x9dc Return
	
Label_2525:
	var_244_int = 10447; // 0x9dd PushI
	var_245_bool = var_40_string == var_244_int; // 0x9de Eq
	if(var_245_bool == 0) goto Label_2548; // 0x9df JumpB
	var_246_string = ""; // 0x9e0 PushV
	var_246_string = "Neutral"; // 0x9e1 MovS
	func_2166(var_41_bool, var_246_string); // 0x9e2 Call
	var_247_int = 9504; // 0x9e4 PushI
	SetMessage(var_247_int); // 0x9e5 TObjFunc
	ClearReplies(); // 0x9e7 TObjFunc
	var_248_int = 9505; // 0x9e9 PushI
	var_249_int = 10449; // 0x9ea PushI
	var_250_int = 10448; // 0x9eb PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x9ec TObjFunc
	var_251_int = 9509; // 0x9ee PushI
	var_252_int = -1; // 0x9ef PushI
	var_253_int = 10452; // 0x9f0 PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x9f1 TObjFunc
	return 0; // 0x9f3 Return
	
Label_2548:
	var_254_int = 10449; // 0x9f4 PushI
	var_255_bool = var_40_string == var_254_int; // 0x9f5 Eq
	if(var_255_bool == 0) goto Label_2571; // 0x9f6 JumpB
	var_256_string = ""; // 0x9f7 PushV
	var_256_string = "Neutral"; // 0x9f8 MovS
	func_2166(var_41_bool, var_256_string); // 0x9f9 Call
	var_257_int = 9506; // 0x9fb PushI
	SetMessage(var_257_int); // 0x9fc TObjFunc
	ClearReplies(); // 0x9fe TObjFunc
	var_258_int = 9507; // 0xa00 PushI
	var_259_int = -1; // 0xa01 PushI
	var_260_int = 10450; // 0xa02 PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0xa03 TObjFunc
	var_261_int = 9508; // 0xa05 PushI
	var_262_int = -1; // 0xa06 PushI
	var_263_int = 10451; // 0xa07 PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0xa08 TObjFunc
	return 0; // 0xa0a Return
	
Label_2571:
	var_264_int = 7647; // 0xa0b PushI
	var_265_bool = var_40_string == var_264_int; // 0xa0c Eq
	if(var_265_bool == 0) goto Label_2589; // 0xa0d JumpB
	var_266_string = ""; // 0xa0e PushV
	var_266_string = "Neutral"; // 0xa0f MovS
	func_2166(var_41_bool, var_266_string); // 0xa10 Call
	var_267_int = 6941; // 0xa12 PushI
	SetMessage(var_267_int); // 0xa13 TObjFunc
	ClearReplies(); // 0xa15 TObjFunc
	var_268_int = 7755; // 0xa17 PushI
	var_269_int = 8557; // 0xa18 PushI
	var_270_int = 8556; // 0xa19 PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0xa1a TObjFunc
	return 0; // 0xa1c Return
	
Label_2589:
	var_271_int = 8557; // 0xa1d PushI
	var_272_bool = var_40_string == var_271_int; // 0xa1e Eq
	if(var_272_bool == 0) goto Label_2607; // 0xa1f JumpB
	var_273_string = ""; // 0xa20 PushV
	var_273_string = "Neutral"; // 0xa21 MovS
	func_2166(var_41_bool, var_273_string); // 0xa22 Call
	var_274_int = 7756; // 0xa24 PushI
	SetMessage(var_274_int); // 0xa25 TObjFunc
	ClearReplies(); // 0xa27 TObjFunc
	var_275_int = 7757; // 0xa29 PushI
	var_276_int = 8559; // 0xa2a PushI
	var_277_int = 8558; // 0xa2b PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0xa2c TObjFunc
	return 0; // 0xa2e Return
	
Label_2607:
	var_278_int = 8559; // 0xa2f PushI
	var_279_bool = var_40_string == var_278_int; // 0xa30 Eq
	if(var_279_bool == 0) goto Label_2625; // 0xa31 JumpB
	var_280_string = ""; // 0xa32 PushV
	var_280_string = "Neutral"; // 0xa33 MovS
	func_2166(var_41_bool, var_280_string); // 0xa34 Call
	var_281_int = 7758; // 0xa36 PushI
	SetMessage(var_281_int); // 0xa37 TObjFunc
	ClearReplies(); // 0xa39 TObjFunc
	var_282_int = 7759; // 0xa3b PushI
	var_283_int = -1; // 0xa3c PushI
	var_284_int = 8560; // 0xa3d PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0xa3e TObjFunc
	return 0; // 0xa40 Return
	
Label_2625:
	var_285_int = 7645; // 0xa41 PushI
	var_286_bool = var_40_string == var_285_int; // 0xa42 Eq
	if(var_286_bool == 0) goto Label_2648; // 0xa43 JumpB
	var_287_string = ""; // 0xa44 PushV
	var_287_string = "Neutral"; // 0xa45 MovS
	func_2166(var_41_bool, var_287_string); // 0xa46 Call
	var_288_int = 6939; // 0xa48 PushI
	SetMessage(var_288_int); // 0xa49 TObjFunc
	ClearReplies(); // 0xa4b TObjFunc
	var_289_int = 7748; // 0xa4d PushI
	var_290_int = -1; // 0xa4e PushI
	var_291_int = 8549; // 0xa4f PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0xa50 TObjFunc
	var_292_int = 7749; // 0xa52 PushI
	var_293_int = 8551; // 0xa53 PushI
	var_294_int = 8550; // 0xa54 PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0xa55 TObjFunc
	return 0; // 0xa57 Return
	
Label_2648:
	var_295_int = 8551; // 0xa58 PushI
	var_296_bool = var_40_string == var_295_int; // 0xa59 Eq
	if(var_296_bool == 0) goto Label_2666; // 0xa5a JumpB
	var_297_string = ""; // 0xa5b PushV
	var_297_string = "Neutral"; // 0xa5c MovS
	func_2166(var_41_bool, var_297_string); // 0xa5d Call
	var_298_int = 7750; // 0xa5f PushI
	SetMessage(var_298_int); // 0xa60 TObjFunc
	ClearReplies(); // 0xa62 TObjFunc
	var_299_int = 7751; // 0xa64 PushI
	var_300_int = -1; // 0xa65 PushI
	var_301_int = 8552; // 0xa66 PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0xa67 TObjFunc
	return 0; // 0xa69 Return
	
Label_2666:
	var_302_int = 7637; // 0xa6a PushI
	var_303_bool = var_40_string == var_302_int; // 0xa6b Eq
	if(var_303_bool == 0) goto Label_2689; // 0xa6c JumpB
	var_304_string = ""; // 0xa6d PushV
	var_304_string = "Neutral"; // 0xa6e MovS
	func_2166(var_41_bool, var_304_string); // 0xa6f Call
	var_305_int = 6931; // 0xa71 PushI
	SetMessage(var_305_int); // 0xa72 TObjFunc
	ClearReplies(); // 0xa74 TObjFunc
	var_306_int = 6932; // 0xa76 PushI
	var_307_int = 7639; // 0xa77 PushI
	var_308_int = 7638; // 0xa78 PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0xa79 TObjFunc
	var_309_int = 7752; // 0xa7b PushI
	var_310_int = -1; // 0xa7c PushI
	var_311_int = 8553; // 0xa7d PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0xa7e TObjFunc
	return 0; // 0xa80 Return
	
Label_2689:
	var_312_int = 7639; // 0xa81 PushI
	var_313_bool = var_40_string == var_312_int; // 0xa82 Eq
	if(var_313_bool == 0) goto Label_2707; // 0xa83 JumpB
	var_314_string = ""; // 0xa84 PushV
	var_314_string = "Neutral"; // 0xa85 MovS
	func_2166(var_41_bool, var_314_string); // 0xa86 Call
	var_315_int = 6933; // 0xa88 PushI
	SetMessage(var_315_int); // 0xa89 TObjFunc
	ClearReplies(); // 0xa8b TObjFunc
	var_316_int = 7753; // 0xa8d PushI
	var_317_int = 8555; // 0xa8e PushI
	var_318_int = 8554; // 0xa8f PushI
	AddReply(var_316_int, var_317_int, var_318_int); // 0xa90 TObjFunc
	return 0; // 0xa92 Return
	
Label_2707:
	var_319_int = 8555; // 0xa93 PushI
	var_320_bool = var_40_string == var_319_int; // 0xa94 Eq
	if(var_320_bool == 0) goto Label_2725; // 0xa95 JumpB
	var_321_string = ""; // 0xa96 PushV
	var_321_string = "Neutral"; // 0xa97 MovS
	func_2166(var_41_bool, var_321_string); // 0xa98 Call
	var_322_int = 7754; // 0xa9a PushI
	SetMessage(var_322_int); // 0xa9b TObjFunc
	ClearReplies(); // 0xa9d TObjFunc
	var_323_int = 6934; // 0xa9f PushI
	var_324_int = 8296; // 0xaa0 PushI
	var_325_int = 7640; // 0xaa1 PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0xaa2 TObjFunc
	return 0; // 0xaa4 Return
	
Label_2725:
	var_326_int = 8296; // 0xaa5 PushI
	var_327_bool = var_40_string == var_326_int; // 0xaa6 Eq
	if(var_327_bool == 0) goto Label_2748; // 0xaa7 JumpB
	var_328_string = ""; // 0xaa8 PushV
	var_328_string = "Neutral"; // 0xaa9 MovS
	func_2166(var_41_bool, var_328_string); // 0xaaa Call
	var_329_int = 7515; // 0xaac PushI
	SetMessage(var_329_int); // 0xaad TObjFunc
	ClearReplies(); // 0xaaf TObjFunc
	var_330_int = 7516; // 0xab1 PushI
	var_331_int = -1; // 0xab2 PushI
	var_332_int = 8297; // 0xab3 PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0xab4 TObjFunc
	var_333_int = 7517; // 0xab6 PushI
	var_334_int = -1; // 0xab7 PushI
	var_335_int = 8298; // 0xab8 PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0xab9 TObjFunc
	return 0; // 0xabb Return
	
Label_2748:
	var_336_int = 8300; // 0xabc PushI
	var_337_bool = var_40_string == var_336_int; // 0xabd Eq
	if(var_337_bool == 0) goto Label_2766; // 0xabe JumpB
	var_338_string = ""; // 0xabf PushV
	var_338_string = "Neutral"; // 0xac0 MovS
	func_2166(var_41_bool, var_338_string); // 0xac1 Call
	var_339_int = 7519; // 0xac3 PushI
	SetMessage(var_339_int); // 0xac4 TObjFunc
	ClearReplies(); // 0xac6 TObjFunc
	var_340_int = 7520; // 0xac8 PushI
	var_341_int = 8295; // 0xac9 PushI
	var_342_int = 8301; // 0xaca PushI
	AddReply(var_340_int, var_341_int, var_342_int); // 0xacb TObjFunc
	return 0; // 0xacd Return
	
Label_2766:
	var_343_int = 8291; // 0xace PushI
	var_344_bool = var_40_string == var_343_int; // 0xacf Eq
	if(var_344_bool == 0) goto Label_2784; // 0xad0 JumpB
	var_345_string = ""; // 0xad1 PushV
	var_345_string = "Neutral"; // 0xad2 MovS
	func_2166(var_41_bool, var_345_string); // 0xad3 Call
	var_346_int = 7510; // 0xad5 PushI
	SetMessage(var_346_int); // 0xad6 TObjFunc
	ClearReplies(); // 0xad8 TObjFunc
	var_347_int = 7511; // 0xada PushI
	var_348_int = 8293; // 0xadb PushI
	var_349_int = 8292; // 0xadc PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0xadd TObjFunc
	return 0; // 0xadf Return
	
Label_2784:
	var_350_int = 8293; // 0xae0 PushI
	var_351_bool = var_40_string == var_350_int; // 0xae1 Eq
	if(var_351_bool == 0) goto Label_2802; // 0xae2 JumpB
	var_352_string = ""; // 0xae3 PushV
	var_352_string = "Neutral"; // 0xae4 MovS
	func_2166(var_41_bool, var_352_string); // 0xae5 Call
	var_353_int = 7512; // 0xae7 PushI
	SetMessage(var_353_int); // 0xae8 TObjFunc
	ClearReplies(); // 0xaea TObjFunc
	var_354_int = 7513; // 0xaec PushI
	var_355_int = 8295; // 0xaed PushI
	var_356_int = 8294; // 0xaee PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0xaef TObjFunc
	return 0; // 0xaf1 Return
	
Label_2802:
	var_357_int = 8295; // 0xaf2 PushI
	var_358_bool = var_40_string == var_357_int; // 0xaf3 Eq
	if(var_358_bool == 0) goto Label_2820; // 0xaf4 JumpB
	var_359_string = ""; // 0xaf5 PushV
	var_359_string = "Neutral"; // 0xaf6 MovS
	func_2166(var_41_bool, var_359_string); // 0xaf7 Call
	var_360_int = 7514; // 0xaf9 PushI
	SetMessage(var_360_int); // 0xafa TObjFunc
	ClearReplies(); // 0xafc TObjFunc
	var_361_int = 7760; // 0xafe PushI
	var_362_int = 8562; // 0xaff PushI
	var_363_int = 8561; // 0xb00 PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0xb01 TObjFunc
	return 0; // 0xb03 Return
	
Label_2820:
	var_364_int = 8562; // 0xb04 PushI
	var_365_bool = var_40_string == var_364_int; // 0xb05 Eq
	if(var_365_bool == 0) goto Label_2843; // 0xb06 JumpB
	var_366_string = ""; // 0xb07 PushV
	var_366_string = "Neutral"; // 0xb08 MovS
	func_2166(var_41_bool, var_366_string); // 0xb09 Call
	var_367_int = 7761; // 0xb0b PushI
	SetMessage(var_367_int); // 0xb0c TObjFunc
	ClearReplies(); // 0xb0e TObjFunc
	var_368_int = 7762; // 0xb10 PushI
	var_369_int = 8565; // 0xb11 PushI
	var_370_int = 8563; // 0xb12 PushI
	AddReply(var_368_int, var_369_int, var_370_int); // 0xb13 TObjFunc
	var_371_int = 7763; // 0xb15 PushI
	var_372_int = 8568; // 0xb16 PushI
	var_373_int = 8564; // 0xb17 PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0xb18 TObjFunc
	return 0; // 0xb1a Return
	
Label_2843:
	var_374_int = 8568; // 0xb1b PushI
	var_375_bool = var_40_string == var_374_int; // 0xb1c Eq
	if(var_375_bool == 0) goto Label_2876; // 0xb1d JumpB
	var_376_string = ""; // 0xb1e PushV
	var_376_string = "Neutral"; // 0xb1f MovS
	func_2166(var_41_bool, var_376_string); // 0xb20 Call
	var_377_int = 7767; // 0xb22 PushI
	SetMessage(var_377_int); // 0xb23 TObjFunc
	ClearReplies(); // 0xb25 TObjFunc
	var_378_int = 7769; // 0xb27 PushI
	var_379_int = 8571; // 0xb28 PushI
	var_380_int = 8570; // 0xb29 PushI
	AddReply(var_378_int, var_379_int, var_380_int); // 0xb2a TObjFunc
	var_381_int = 7772; // 0xb2c PushI
	var_382_int = 8575; // 0xb2d PushI
	var_383_int = 8573; // 0xb2e PushI
	AddReply(var_381_int, var_382_int, var_383_int); // 0xb2f TObjFunc
	var_384_bool = 0; var_385_object = Obj(); // 0xb31 PushV
	var_385_object = var_1_object; // 0xb32 MovT
	func_7924(var_385_object); // 0xb33 Call
	if(var_384_bool == 0) goto Label_2875; // 0xb35 JumpB
	var_386_int = 7771; // 0xb36 PushI
	var_387_int = -1; // 0xb37 PushI
	var_388_int = 8572; // 0xb38 PushI
	AddReply(var_386_int, var_387_int, var_388_int); // 0xb39 TObjFunc
	
Label_2875:
	return 0; // 0xb3b Return
	
Label_2876:
	var_389_int = 8575; // 0xb3c PushI
	var_390_bool = var_40_string == var_389_int; // 0xb3d Eq
	if(var_390_bool == 0) goto Label_2899; // 0xb3e JumpB
	var_391_string = ""; // 0xb3f PushV
	var_391_string = "Neutral"; // 0xb40 MovS
	func_2166(var_41_bool, var_391_string); // 0xb41 Call
	var_392_int = 7774; // 0xb43 PushI
	SetMessage(var_392_int); // 0xb44 TObjFunc
	ClearReplies(); // 0xb46 TObjFunc
	var_393_bool = 0; var_394_object = Obj(); // 0xb48 PushV
	var_394_object = var_1_object; // 0xb49 MovT
	func_7924(var_394_object); // 0xb4a Call
	if(var_393_bool == 0) goto Label_2898; // 0xb4c JumpB
	var_395_int = 7775; // 0xb4d PushI
	var_396_int = -1; // 0xb4e PushI
	var_397_int = 8576; // 0xb4f PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0xb50 TObjFunc
	
Label_2898:
	return 0; // 0xb52 Return
	
Label_2899:
	var_398_int = 8571; // 0xb53 PushI
	var_399_bool = var_40_string == var_398_int; // 0xb54 Eq
	if(var_399_bool == 0) goto Label_2917; // 0xb55 JumpB
	var_400_string = ""; // 0xb56 PushV
	var_400_string = "Neutral"; // 0xb57 MovS
	func_2166(var_41_bool, var_400_string); // 0xb58 Call
	var_401_int = 7770; // 0xb5a PushI
	SetMessage(var_401_int); // 0xb5b TObjFunc
	ClearReplies(); // 0xb5d TObjFunc
	var_402_int = 7773; // 0xb5f PushI
	var_403_int = -1; // 0xb60 PushI
	var_404_int = 8574; // 0xb61 PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0xb62 TObjFunc
	return 0; // 0xb64 Return
	
Label_2917:
	var_405_int = 8565; // 0xb65 PushI
	var_406_bool = var_40_string == var_405_int; // 0xb66 Eq
	if(var_406_bool == 0) goto Label_2945; // 0xb67 JumpB
	var_407_string = ""; // 0xb68 PushV
	var_407_string = "Neutral"; // 0xb69 MovS
	func_2166(var_41_bool, var_407_string); // 0xb6a Call
	var_408_int = 7764; // 0xb6c PushI
	SetMessage(var_408_int); // 0xb6d TObjFunc
	ClearReplies(); // 0xb6f TObjFunc
	var_409_int = 7766; // 0xb71 PushI
	var_410_int = -1; // 0xb72 PushI
	var_411_int = 8567; // 0xb73 PushI
	AddReply(var_409_int, var_410_int, var_411_int); // 0xb74 TObjFunc
	var_412_int = 7768; // 0xb76 PushI
	var_413_int = -1; // 0xb77 PushI
	var_414_int = 8569; // 0xb78 PushI
	AddReply(var_412_int, var_413_int, var_414_int); // 0xb79 TObjFunc
	var_415_int = 7765; // 0xb7b PushI
	var_416_int = -1; // 0xb7c PushI
	var_417_int = 8566; // 0xb7d PushI
	AddReply(var_415_int, var_416_int, var_417_int); // 0xb7e TObjFunc
	return 0; // 0xb80 Return
	
Label_2945:
	var_3_string = 1; // 0xb81 TMovB
	var_418_bool = 0; // 0xb82 PushV
	func_7232(var_418_bool); // 0xb83 Call
	if(var_418_bool == 0) goto Label_2953; // 0xb85 JumpB
	lshStopAnimation(); // 0xb86 Func
	goto Label_2955; // 0xb88 Jump
	
Label_2955:
	return 0; // 0xb8b Return
	
Label_2953:
	StopAnimation(); // 0xb89 Func
	
Label_2957:
	return 0; // 0xb8d Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	var_42_int = 1; // 0xc2b PushI
	if(var_42_int == 0) goto Label_3607; // 0xc2c JumpB
	func_7143(); // 0xc2e Call
	var_44_int = 11379; // 0xc30 PushI
	var_45_bool = var_41_bool == var_44_int; // 0xc31 Eq
	if(var_45_bool == 0) goto Label_3138; // 0xc32 JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0xc33 PushV
	var_46_object = var_1_object; // 0xc34 MovT
	var_47_object = var_0_object; // 0xc35 MovT
	func_7380(); // 0xc36 Call
	var_48_object = Obj(); var_49_object = Obj(); // 0xc38 PushV
	var_48_object = var_1_object; // 0xc39 MovT
	var_49_object = var_0_object; // 0xc3a MovT
	func_7382(); // 0xc3b Call
	var_93_object = Obj(); var_94_object = Obj(); // 0xc3d PushV
	var_93_object = var_1_object; // 0xc3e MovT
	var_94_object = var_0_object; // 0xc3f MovT
	func_7364(); // 0xc40 Call
	
Label_3138:
	var_119_int = 11380; // 0xc42 PushI
	var_120_bool = var_41_bool == var_119_int; // 0xc43 Eq
	if(var_120_bool == 0) goto Label_3156; // 0xc44 JumpB
	var_121_object = Obj(); var_122_object = Obj(); // 0xc45 PushV
	var_121_object = var_1_object; // 0xc46 MovT
	var_122_object = var_0_object; // 0xc47 MovT
	func_7380(); // 0xc48 Call
	var_123_object = Obj(); var_124_object = Obj(); // 0xc4a PushV
	var_123_object = var_1_object; // 0xc4b MovT
	var_124_object = var_0_object; // 0xc4c MovT
	func_7382(); // 0xc4d Call
	var_125_object = Obj(); var_126_object = Obj(); // 0xc4f PushV
	var_125_object = var_1_object; // 0xc50 MovT
	var_126_object = var_0_object; // 0xc51 MovT
	func_7364(); // 0xc52 Call
	
Label_3156:
	var_127_int = 11383; // 0xc54 PushI
	var_128_bool = var_41_bool == var_127_int; // 0xc55 Eq
	if(var_128_bool == 0) goto Label_3174; // 0xc56 JumpB
	var_129_object = Obj(); var_130_object = Obj(); // 0xc57 PushV
	var_129_object = var_1_object; // 0xc58 MovT
	var_130_object = var_0_object; // 0xc59 MovT
	func_7382(); // 0xc5a Call
	var_131_object = Obj(); var_132_object = Obj(); // 0xc5c PushV
	var_131_object = var_1_object; // 0xc5d MovT
	var_132_object = var_0_object; // 0xc5e MovT
	func_7364(); // 0xc5f Call
	var_133_object = Obj(); var_134_object = Obj(); // 0xc61 PushV
	var_133_object = var_1_object; // 0xc62 MovT
	var_134_object = var_0_object; // 0xc63 MovT
	func_7380(); // 0xc64 Call
	
Label_3174:
	var_135_int = 11258; // 0xc66 PushI
	var_136_bool = var_40_string == var_135_int; // 0xc67 Eq
	if(var_136_bool == 0) goto Label_3216; // 0xc68 JumpB
	var_137_string = ""; // 0xc69 PushV
	var_137_string = "Neutral"; // 0xc6a MovS
	func_3098(var_41_bool, var_137_string); // 0xc6b Call
	var_152_int = 10212; // 0xc6d PushI
	SetMessage(var_152_int); // 0xc6e TObjFunc
	ClearReplies(); // 0xc70 TObjFunc
	var_153_bool = 0; // 0xc72 PushV
	var_153_bool = 0; // 0xc73 MovB
	var_154_bool = 0; var_155_object = Obj(); // 0xc74 PushV
	var_155_object = var_1_object; // 0xc75 MovT
	func_7996(var_155_object); // 0xc76 Call
	if(var_154_bool == 0) goto Label_3199; // 0xc78 JumpB
	var_162_bool = 0; var_163_object = Obj(); // 0xc79 PushV
	var_163_object = var_1_object; // 0xc7a MovT
	func_8008(var_163_object); // 0xc7b Call
	if(var_162_bool == 0) goto Label_3199; // 0xc7d JumpB
	var_153_bool = 1; // 0xc7e MovB
	
Label_3199:
	if(var_153_bool == 0) goto Label_3205; // 0xc7f JumpB
	var_164_int = 10213; // 0xc80 PushI
	var_165_int = 11260; // 0xc81 PushI
	var_166_int = 11259; // 0xc82 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0xc83 TObjFunc
	
Label_3205:
	var_167_int = 10302; // 0xc85 PushI
	var_168_int = 11359; // 0xc86 PushI
	var_169_int = 11358; // 0xc87 PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0xc88 TObjFunc
	var_170_int = 10334; // 0xc8a PushI
	var_171_int = 11395; // 0xc8b PushI
	var_172_int = 11394; // 0xc8c PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0xc8d TObjFunc
	return 0; // 0xc8f Return
	
Label_3216:
	var_173_int = 11395; // 0xc90 PushI
	var_174_bool = var_40_string == var_173_int; // 0xc91 Eq
	if(var_174_bool == 0) goto Label_3239; // 0xc92 JumpB
	var_175_string = ""; // 0xc93 PushV
	var_175_string = "Neutral"; // 0xc94 MovS
	func_3098(var_41_bool, var_175_string); // 0xc95 Call
	var_176_int = 10335; // 0xc97 PushI
	SetMessage(var_176_int); // 0xc98 TObjFunc
	ClearReplies(); // 0xc9a TObjFunc
	var_177_int = 10336; // 0xc9c PushI
	var_178_int = 11399; // 0xc9d PushI
	var_179_int = 11396; // 0xc9e PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0xc9f TObjFunc
	var_180_int = 10337; // 0xca1 PushI
	var_181_int = 11398; // 0xca2 PushI
	var_182_int = 11397; // 0xca3 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0xca4 TObjFunc
	return 0; // 0xca6 Return
	
Label_3239:
	var_183_int = 11398; // 0xca7 PushI
	var_184_bool = var_40_string == var_183_int; // 0xca8 Eq
	if(var_184_bool == 0) goto Label_3257; // 0xca9 JumpB
	var_185_string = ""; // 0xcaa PushV
	var_185_string = "Neutral"; // 0xcab MovS
	func_3098(var_41_bool, var_185_string); // 0xcac Call
	var_186_int = 10338; // 0xcae PushI
	SetMessage(var_186_int); // 0xcaf TObjFunc
	ClearReplies(); // 0xcb1 TObjFunc
	var_187_int = 10341; // 0xcb3 PushI
	var_188_int = 11402; // 0xcb4 PushI
	var_189_int = 11401; // 0xcb5 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0xcb6 TObjFunc
	return 0; // 0xcb8 Return
	
Label_3257:
	var_190_int = 11399; // 0xcb9 PushI
	var_191_bool = var_40_string == var_190_int; // 0xcba Eq
	if(var_191_bool == 0) goto Label_3275; // 0xcbb JumpB
	var_192_string = ""; // 0xcbc PushV
	var_192_string = "Neutral"; // 0xcbd MovS
	func_3098(var_41_bool, var_192_string); // 0xcbe Call
	var_193_int = 10339; // 0xcc0 PushI
	SetMessage(var_193_int); // 0xcc1 TObjFunc
	ClearReplies(); // 0xcc3 TObjFunc
	var_194_int = 10340; // 0xcc5 PushI
	var_195_int = 11402; // 0xcc6 PushI
	var_196_int = 11400; // 0xcc7 PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0xcc8 TObjFunc
	return 0; // 0xcca Return
	
Label_3275:
	var_197_int = 11402; // 0xccb PushI
	var_198_bool = var_40_string == var_197_int; // 0xccc Eq
	if(var_198_bool == 0) goto Label_3298; // 0xccd JumpB
	var_199_string = ""; // 0xcce PushV
	var_199_string = "Neutral"; // 0xccf MovS
	func_3098(var_41_bool, var_199_string); // 0xcd0 Call
	var_200_int = 10342; // 0xcd2 PushI
	SetMessage(var_200_int); // 0xcd3 TObjFunc
	ClearReplies(); // 0xcd5 TObjFunc
	var_201_int = 10343; // 0xcd7 PushI
	var_202_int = -1; // 0xcd8 PushI
	var_203_int = 11404; // 0xcd9 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0xcda TObjFunc
	var_204_int = 10344; // 0xcdc PushI
	var_205_int = 11406; // 0xcdd PushI
	var_206_int = 11405; // 0xcde PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0xcdf TObjFunc
	return 0; // 0xce1 Return
	
Label_3298:
	var_207_int = 11406; // 0xce2 PushI
	var_208_bool = var_40_string == var_207_int; // 0xce3 Eq
	if(var_208_bool == 0) goto Label_3316; // 0xce4 JumpB
	var_209_string = ""; // 0xce5 PushV
	var_209_string = "Neutral"; // 0xce6 MovS
	func_3098(var_41_bool, var_209_string); // 0xce7 Call
	var_210_int = 10345; // 0xce9 PushI
	SetMessage(var_210_int); // 0xcea TObjFunc
	ClearReplies(); // 0xcec TObjFunc
	var_211_int = 10346; // 0xcee PushI
	var_212_int = -1; // 0xcef PushI
	var_213_int = 11407; // 0xcf0 PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0xcf1 TObjFunc
	return 0; // 0xcf3 Return
	
Label_3316:
	var_214_int = 11359; // 0xcf4 PushI
	var_215_bool = var_40_string == var_214_int; // 0xcf5 Eq
	if(var_215_bool == 0) goto Label_3334; // 0xcf6 JumpB
	var_216_string = ""; // 0xcf7 PushV
	var_216_string = "Neutral"; // 0xcf8 MovS
	func_3098(var_41_bool, var_216_string); // 0xcf9 Call
	var_217_int = 10303; // 0xcfb PushI
	SetMessage(var_217_int); // 0xcfc TObjFunc
	ClearReplies(); // 0xcfe TObjFunc
	var_218_int = 10304; // 0xd00 PushI
	var_219_int = 11039; // 0xd01 PushI
	var_220_int = 11360; // 0xd02 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0xd03 TObjFunc
	return 0; // 0xd05 Return
	
Label_3334:
	var_221_int = 11039; // 0xd06 PushI
	var_222_bool = var_40_string == var_221_int; // 0xd07 Eq
	if(var_222_bool == 0) goto Label_3357; // 0xd08 JumpB
	var_223_string = ""; // 0xd09 PushV
	var_223_string = "Neutral"; // 0xd0a MovS
	func_3098(var_41_bool, var_223_string); // 0xd0b Call
	var_224_int = 10017; // 0xd0d PushI
	SetMessage(var_224_int); // 0xd0e TObjFunc
	ClearReplies(); // 0xd10 TObjFunc
	var_225_int = 10018; // 0xd12 PushI
	var_226_int = 11041; // 0xd13 PushI
	var_227_int = 11040; // 0xd14 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0xd15 TObjFunc
	var_228_int = 10028; // 0xd17 PushI
	var_229_int = -1; // 0xd18 PushI
	var_230_int = 11050; // 0xd19 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0xd1a TObjFunc
	return 0; // 0xd1c Return
	
Label_3357:
	var_231_int = 11041; // 0xd1d PushI
	var_232_bool = var_40_string == var_231_int; // 0xd1e Eq
	if(var_232_bool == 0) goto Label_3380; // 0xd1f JumpB
	var_233_string = ""; // 0xd20 PushV
	var_233_string = "Neutral"; // 0xd21 MovS
	func_3098(var_41_bool, var_233_string); // 0xd22 Call
	var_234_int = 10019; // 0xd24 PushI
	SetMessage(var_234_int); // 0xd25 TObjFunc
	ClearReplies(); // 0xd27 TObjFunc
	var_235_int = 10020; // 0xd29 PushI
	var_236_int = 11043; // 0xd2a PushI
	var_237_int = 11042; // 0xd2b PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0xd2c TObjFunc
	var_238_int = 10027; // 0xd2e PushI
	var_239_int = -1; // 0xd2f PushI
	var_240_int = 11049; // 0xd30 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0xd31 TObjFunc
	return 0; // 0xd33 Return
	
Label_3380:
	var_241_int = 11043; // 0xd34 PushI
	var_242_bool = var_40_string == var_241_int; // 0xd35 Eq
	if(var_242_bool == 0) goto Label_3403; // 0xd36 JumpB
	var_243_string = ""; // 0xd37 PushV
	var_243_string = "Neutral"; // 0xd38 MovS
	func_3098(var_41_bool, var_243_string); // 0xd39 Call
	var_244_int = 10021; // 0xd3b PushI
	SetMessage(var_244_int); // 0xd3c TObjFunc
	ClearReplies(); // 0xd3e TObjFunc
	var_245_int = 10022; // 0xd40 PushI
	var_246_int = 11045; // 0xd41 PushI
	var_247_int = 11044; // 0xd42 PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0xd43 TObjFunc
	var_248_int = 10026; // 0xd45 PushI
	var_249_int = -1; // 0xd46 PushI
	var_250_int = 11048; // 0xd47 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0xd48 TObjFunc
	return 0; // 0xd4a Return
	
Label_3403:
	var_251_int = 11045; // 0xd4b PushI
	var_252_bool = var_40_string == var_251_int; // 0xd4c Eq
	if(var_252_bool == 0) goto Label_3426; // 0xd4d JumpB
	var_253_string = ""; // 0xd4e PushV
	var_253_string = "Neutral"; // 0xd4f MovS
	func_3098(var_41_bool, var_253_string); // 0xd50 Call
	var_254_int = 10023; // 0xd52 PushI
	SetMessage(var_254_int); // 0xd53 TObjFunc
	ClearReplies(); // 0xd55 TObjFunc
	var_255_int = 10024; // 0xd57 PushI
	var_256_int = -1; // 0xd58 PushI
	var_257_int = 11046; // 0xd59 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0xd5a TObjFunc
	var_258_int = 10025; // 0xd5c PushI
	var_259_int = -1; // 0xd5d PushI
	var_260_int = 11047; // 0xd5e PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0xd5f TObjFunc
	return 0; // 0xd61 Return
	
Label_3426:
	var_261_int = 11260; // 0xd62 PushI
	var_262_bool = var_40_string == var_261_int; // 0xd63 Eq
	if(var_262_bool == 0) goto Label_3449; // 0xd64 JumpB
	var_263_string = ""; // 0xd65 PushV
	var_263_string = "Neutral"; // 0xd66 MovS
	func_3098(var_41_bool, var_263_string); // 0xd67 Call
	var_264_int = 10214; // 0xd69 PushI
	SetMessage(var_264_int); // 0xd6a TObjFunc
	ClearReplies(); // 0xd6c TObjFunc
	var_265_int = 10305; // 0xd6e PushI
	var_266_int = 11364; // 0xd6f PushI
	var_267_int = 11361; // 0xd70 PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0xd71 TObjFunc
	var_268_int = 10306; // 0xd73 PushI
	var_269_int = 11363; // 0xd74 PushI
	var_270_int = 11362; // 0xd75 PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0xd76 TObjFunc
	return 0; // 0xd78 Return
	
Label_3449:
	var_271_int = 11363; // 0xd79 PushI
	var_272_bool = var_40_string == var_271_int; // 0xd7a Eq
	if(var_272_bool == 0) goto Label_3462; // 0xd7b JumpB
	var_273_string = ""; // 0xd7c PushV
	var_273_string = "Neutral"; // 0xd7d MovS
	func_3098(var_41_bool, var_273_string); // 0xd7e Call
	var_274_int = 10307; // 0xd80 PushI
	SetMessage(var_274_int); // 0xd81 TObjFunc
	ClearReplies(); // 0xd83 TObjFunc
	return 0; // 0xd85 Return
	
Label_3462:
	var_275_int = 11364; // 0xd86 PushI
	var_276_bool = var_40_string == var_275_int; // 0xd87 Eq
	if(var_276_bool == 0) goto Label_3485; // 0xd88 JumpB
	var_277_string = ""; // 0xd89 PushV
	var_277_string = "Neutral"; // 0xd8a MovS
	func_3098(var_41_bool, var_277_string); // 0xd8b Call
	var_278_int = 10308; // 0xd8d PushI
	SetMessage(var_278_int); // 0xd8e TObjFunc
	ClearReplies(); // 0xd90 TObjFunc
	var_279_int = 10309; // 0xd92 PushI
	var_280_int = 11370; // 0xd93 PushI
	var_281_int = 11365; // 0xd94 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0xd95 TObjFunc
	var_282_int = 10311; // 0xd97 PushI
	var_283_int = 11366; // 0xd98 PushI
	var_284_int = 11367; // 0xd99 PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0xd9a TObjFunc
	return 0; // 0xd9c Return
	
Label_3485:
	var_285_int = 11366; // 0xd9d PushI
	var_286_bool = var_40_string == var_285_int; // 0xd9e Eq
	if(var_286_bool == 0) goto Label_3503; // 0xd9f JumpB
	var_287_string = ""; // 0xda0 PushV
	var_287_string = "Neutral"; // 0xda1 MovS
	func_3098(var_41_bool, var_287_string); // 0xda2 Call
	var_288_int = 10310; // 0xda4 PushI
	SetMessage(var_288_int); // 0xda5 TObjFunc
	ClearReplies(); // 0xda7 TObjFunc
	var_289_int = 10312; // 0xda9 PushI
	var_290_int = 11371; // 0xdaa PushI
	var_291_int = 11369; // 0xdab PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0xdac TObjFunc
	return 0; // 0xdae Return
	
Label_3503:
	var_292_int = 11370; // 0xdaf PushI
	var_293_bool = var_40_string == var_292_int; // 0xdb0 Eq
	if(var_293_bool == 0) goto Label_3526; // 0xdb1 JumpB
	var_294_string = ""; // 0xdb2 PushV
	var_294_string = "Neutral"; // 0xdb3 MovS
	func_3098(var_41_bool, var_294_string); // 0xdb4 Call
	var_295_int = 10313; // 0xdb6 PushI
	SetMessage(var_295_int); // 0xdb7 TObjFunc
	ClearReplies(); // 0xdb9 TObjFunc
	var_296_int = 10315; // 0xdbb PushI
	var_297_int = 11371; // 0xdbc PushI
	var_298_int = 11372; // 0xdbd PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0xdbe TObjFunc
	var_299_int = 10316; // 0xdc0 PushI
	var_300_int = -1; // 0xdc1 PushI
	var_301_int = 11373; // 0xdc2 PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0xdc3 TObjFunc
	return 0; // 0xdc5 Return
	
Label_3526:
	var_302_int = 11371; // 0xdc6 PushI
	var_303_bool = var_40_string == var_302_int; // 0xdc7 Eq
	if(var_303_bool == 0) goto Label_3549; // 0xdc8 JumpB
	var_304_string = ""; // 0xdc9 PushV
	var_304_string = "Neutral"; // 0xdca MovS
	func_3098(var_41_bool, var_304_string); // 0xdcb Call
	var_305_int = 10314; // 0xdcd PushI
	SetMessage(var_305_int); // 0xdce TObjFunc
	ClearReplies(); // 0xdd0 TObjFunc
	var_306_int = 10317; // 0xdd2 PushI
	var_307_int = 11376; // 0xdd3 PushI
	var_308_int = 11375; // 0xdd4 PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0xdd5 TObjFunc
	var_309_int = 10323; // 0xdd7 PushI
	var_310_int = 11376; // 0xdd8 PushI
	var_311_int = 11381; // 0xdd9 PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0xdda TObjFunc
	return 0; // 0xddc Return
	
Label_3549:
	var_312_int = 11376; // 0xddd PushI
	var_313_bool = var_40_string == var_312_int; // 0xdde Eq
	if(var_313_bool == 0) goto Label_3572; // 0xddf JumpB
	var_314_string = ""; // 0xde0 PushV
	var_314_string = "Neutral"; // 0xde1 MovS
	func_3098(var_41_bool, var_314_string); // 0xde2 Call
	var_315_int = 10318; // 0xde4 PushI
	SetMessage(var_315_int); // 0xde5 TObjFunc
	ClearReplies(); // 0xde7 TObjFunc
	var_316_int = 10319; // 0xde9 PushI
	var_317_int = 11378; // 0xdea PushI
	var_318_int = 11377; // 0xdeb PushI
	AddReply(var_316_int, var_317_int, var_318_int); // 0xdec TObjFunc
	var_319_int = 10324; // 0xdee PushI
	var_320_int = -1; // 0xdef PushI
	var_321_int = 11383; // 0xdf0 PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0xdf1 TObjFunc
	return 0; // 0xdf3 Return
	
Label_3572:
	var_322_int = 11378; // 0xdf4 PushI
	var_323_bool = var_40_string == var_322_int; // 0xdf5 Eq
	if(var_323_bool == 0) goto Label_3595; // 0xdf6 JumpB
	var_324_string = ""; // 0xdf7 PushV
	var_324_string = "Neutral"; // 0xdf8 MovS
	func_3098(var_41_bool, var_324_string); // 0xdf9 Call
	var_325_int = 10320; // 0xdfb PushI
	SetMessage(var_325_int); // 0xdfc TObjFunc
	ClearReplies(); // 0xdfe TObjFunc
	var_326_int = 10321; // 0xe00 PushI
	var_327_int = -1; // 0xe01 PushI
	var_328_int = 11379; // 0xe02 PushI
	AddReply(var_326_int, var_327_int, var_328_int); // 0xe03 TObjFunc
	var_329_int = 10322; // 0xe05 PushI
	var_330_int = -1; // 0xe06 PushI
	var_331_int = 11380; // 0xe07 PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0xe08 TObjFunc
	return 0; // 0xe0a Return
	
Label_3595:
	var_3_string = 1; // 0xe0b TMovB
	var_332_bool = 0; // 0xe0c PushV
	func_7232(var_332_bool); // 0xe0d Call
	if(var_332_bool == 0) goto Label_3603; // 0xe0f JumpB
	lshStopAnimation(); // 0xe10 Func
	goto Label_3605; // 0xe12 Jump
	
Label_3605:
	return 0; // 0xe15 Return
	
Label_3603:
	StopAnimation(); // 0xe13 Func
	
Label_3607:
	return 0; // 0xe17 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	var_42_int = 1; // 0xeeb PushI
	if(var_42_int == 0) goto Label_4614; // 0xeec JumpB
	func_7143(); // 0xeee Call
	var_44_int = 12610; // 0xef0 PushI
	var_45_bool = var_41_bool == var_44_int; // 0xef1 Eq
	if(var_45_bool == 0) goto Label_3842; // 0xef2 JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0xef3 PushV
	var_46_object = var_1_object; // 0xef4 MovT
	var_47_object = var_0_object; // 0xef5 MovT
	func_7463(); // 0xef6 Call
	var_50_object = Obj(); var_51_object = Obj(); // 0xef8 PushV
	var_50_object = var_1_object; // 0xef9 MovT
	var_51_object = var_0_object; // 0xefa MovT
	func_7469(); // 0xefb Call
	var_125_object = Obj(); var_126_object = Obj(); // 0xefd PushV
	var_125_object = var_1_object; // 0xefe MovT
	var_126_object = var_0_object; // 0xeff MovT
	func_7332(); // 0xf00 Call
	
Label_3842:
	var_151_int = 12613; // 0xf02 PushI
	var_152_bool = var_41_bool == var_151_int; // 0xf03 Eq
	if(var_152_bool == 0) goto Label_3860; // 0xf04 JumpB
	var_153_object = Obj(); var_154_object = Obj(); // 0xf05 PushV
	var_153_object = var_1_object; // 0xf06 MovT
	var_154_object = var_0_object; // 0xf07 MovT
	func_7463(); // 0xf08 Call
	var_155_object = Obj(); var_156_object = Obj(); // 0xf0a PushV
	var_155_object = var_1_object; // 0xf0b MovT
	var_156_object = var_0_object; // 0xf0c MovT
	func_7469(); // 0xf0d Call
	var_157_object = Obj(); var_158_object = Obj(); // 0xf0f PushV
	var_157_object = var_1_object; // 0xf10 MovT
	var_158_object = var_0_object; // 0xf11 MovT
	func_7332(); // 0xf12 Call
	
Label_3860:
	var_159_int = 12243; // 0xf14 PushI
	var_160_bool = var_41_bool == var_159_int; // 0xf15 Eq
	if(var_160_bool == 0) goto Label_3883; // 0xf16 JumpB
	var_161_object = Obj(); var_162_object = Obj(); // 0xf17 PushV
	var_161_object = var_1_object; // 0xf18 MovT
	var_162_object = var_0_object; // 0xf19 MovT
	func_7405(); // 0xf1a Call
	var_165_object = Obj(); var_166_object = Obj(); // 0xf1c PushV
	var_165_object = var_1_object; // 0xf1d MovT
	var_166_object = var_0_object; // 0xf1e MovT
	func_7411(); // 0xf1f Call
	var_191_object = Obj(); var_192_object = Obj(); // 0xf21 PushV
	var_191_object = var_1_object; // 0xf22 MovT
	var_192_object = var_0_object; // 0xf23 MovT
	func_7443(); // 0xf24 Call
	var_203_object = Obj(); var_204_object = Obj(); // 0xf26 PushV
	var_203_object = var_1_object; // 0xf27 MovT
	var_204_object = var_0_object; // 0xf28 MovT
	func_7364(); // 0xf29 Call
	
Label_3883:
	var_210_int = 12244; // 0xf2b PushI
	var_211_bool = var_41_bool == var_210_int; // 0xf2c Eq
	if(var_211_bool == 0) goto Label_3906; // 0xf2d JumpB
	var_212_object = Obj(); var_213_object = Obj(); // 0xf2e PushV
	var_212_object = var_1_object; // 0xf2f MovT
	var_213_object = var_0_object; // 0xf30 MovT
	func_7405(); // 0xf31 Call
	var_214_object = Obj(); var_215_object = Obj(); // 0xf33 PushV
	var_214_object = var_1_object; // 0xf34 MovT
	var_215_object = var_0_object; // 0xf35 MovT
	func_7411(); // 0xf36 Call
	var_216_object = Obj(); var_217_object = Obj(); // 0xf38 PushV
	var_216_object = var_1_object; // 0xf39 MovT
	var_217_object = var_0_object; // 0xf3a MovT
	func_7443(); // 0xf3b Call
	var_218_object = Obj(); var_219_object = Obj(); // 0xf3d PushV
	var_218_object = var_1_object; // 0xf3e MovT
	var_219_object = var_0_object; // 0xf3f MovT
	func_7364(); // 0xf40 Call
	
Label_3906:
	var_220_int = 13077; // 0xf42 PushI
	var_221_bool = var_41_bool == var_220_int; // 0xf43 Eq
	if(var_221_bool == 0) goto Label_3914; // 0xf44 JumpB
	var_222_object = Obj(); var_223_object = Obj(); // 0xf45 PushV
	var_222_object = var_1_object; // 0xf46 MovT
	var_223_object = var_0_object; // 0xf47 MovT
	func_7522(); // 0xf48 Call
	
Label_3914:
	var_226_int = 12592; // 0xf4a PushI
	var_227_bool = var_40_string == var_226_int; // 0xf4b Eq
	if(var_227_bool == 0) goto Label_4010; // 0xf4c JumpB
	var_228_bool = 0; // 0xf4d PushV
	var_228_bool = 0; // 0xf4e MovB
	var_229_bool = 0; var_230_object = Obj(); // 0xf4f PushV
	var_230_object = var_1_object; // 0xf50 MovT
	func_8037(var_230_object); // 0xf51 Call
	if(var_229_bool == 0) goto Label_3931; // 0xf53 JumpB
	var_237_bool = 0; var_238_object = Obj(); // 0xf54 PushV
	var_238_object = var_1_object; // 0xf55 MovT
	func_8013(var_238_object); // 0xf56 Call
	var_243_bool = var_237_bool == 0; // 0xf58 Not
	if(var_243_bool == 0) goto Label_3931; // 0xf59 JumpB
	var_228_bool = 1; // 0xf5a MovB
	
Label_3931:
	if(var_228_bool == 0) goto Label_3947; // 0xf5b JumpB
	var_244_string = ""; // 0xf5c PushV
	var_244_string = "Neutral"; // 0xf5d MovS
	func_3802(var_41_bool, var_244_string); // 0xf5e Call
	var_259_int = 11395; // 0xf60 PushI
	SetMessage(var_259_int); // 0xf61 TObjFunc
	ClearReplies(); // 0xf63 TObjFunc
	var_260_int = 11396; // 0xf65 PushI
	var_261_int = 12594; // 0xf66 PushI
	var_262_int = 12593; // 0xf67 PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0xf68 TObjFunc
	return 0; // 0xf6a Return
	
Label_3947:
	var_263_string = ""; // 0xf6b PushV
	var_263_string = "Neutral"; // 0xf6c MovS
	func_3802(var_41_bool, var_263_string); // 0xf6d Call
	var_264_int = 10814; // 0xf6f PushI
	SetMessage(var_264_int); // 0xf70 TObjFunc
	ClearReplies(); // 0xf72 TObjFunc
	var_265_bool = 0; // 0xf74 PushV
	var_265_bool = 0; // 0xf75 MovB
	var_266_bool = 0; var_267_object = Obj(); // 0xf76 PushV
	var_267_object = var_1_object; // 0xf77 MovT
	func_8025(var_267_object); // 0xf78 Call
	if(var_266_bool == 0) goto Label_3969; // 0xf7a JumpB
	var_272_bool = 0; var_273_object = Obj(); // 0xf7b PushV
	var_273_object = var_1_object; // 0xf7c MovT
	func_8013(var_273_object); // 0xf7d Call
	if(var_272_bool == 0) goto Label_3969; // 0xf7f JumpB
	var_265_bool = 1; // 0xf80 MovB
	
Label_3969:
	if(var_265_bool == 0) goto Label_3975; // 0xf81 JumpB
	var_274_int = 10815; // 0xf82 PushI
	var_275_int = 11956; // 0xf83 PushI
	var_276_int = 11955; // 0xf84 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0xf85 TObjFunc
	
Label_3975:
	var_277_bool = 0; var_278_object = Obj(); // 0xf87 PushV
	var_278_object = var_1_object; // 0xf88 MovT
	func_7902(var_277_bool, var_278_object); // 0xf89 Call
	if(var_277_bool == 0) goto Label_3985; // 0xf8b JumpB
	var_281_int = 11403; // 0xf8c PushI
	var_282_int = 12601; // 0xf8d PushI
	var_283_int = 12600; // 0xf8e PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0xf8f TObjFunc
	
Label_3985:
	var_284_bool = 0; // 0xf91 PushV
	var_284_bool = 0; // 0xf92 MovB
	var_285_bool = 0; var_286_object = Obj(); // 0xf93 PushV
	var_286_object = var_1_object; // 0xf94 MovT
	func_8061(var_286_object); // 0xf95 Call
	if(var_285_bool == 0) goto Label_3998; // 0xf97 JumpB
	var_291_bool = 0; var_292_object = Obj(); // 0xf98 PushV
	var_292_object = var_1_object; // 0xf99 MovT
	func_8049(var_292_object); // 0xf9a Call
	if(var_291_bool == 0) goto Label_3998; // 0xf9c JumpB
	var_284_bool = 1; // 0xf9d MovB
	
Label_3998:
	if(var_284_bool == 0) goto Label_4004; // 0xf9e JumpB
	var_297_int = 11862; // 0xf9f PushI
	var_298_int = 13076; // 0xfa0 PushI
	var_299_int = 13075; // 0xfa1 PushI
	AddReply(var_297_int, var_298_int, var_299_int); // 0xfa2 TObjFunc
	
Label_4004:
	var_300_int = 11408; // 0xfa4 PushI
	var_301_int = -1; // 0xfa5 PushI
	var_302_int = 12605; // 0xfa6 PushI
	AddReply(var_300_int, var_301_int, var_302_int); // 0xfa7 TObjFunc
	return 0; // 0xfa9 Return
	
Label_4010:
	var_303_int = 13076; // 0xfaa PushI
	var_304_bool = var_40_string == var_303_int; // 0xfab Eq
	if(var_304_bool == 0) goto Label_4028; // 0xfac JumpB
	var_305_string = ""; // 0xfad PushV
	var_305_string = "Neutral"; // 0xfae MovS
	func_3802(var_41_bool, var_305_string); // 0xfaf Call
	var_306_int = 11863; // 0xfb1 PushI
	SetMessage(var_306_int); // 0xfb2 TObjFunc
	ClearReplies(); // 0xfb4 TObjFunc
	var_307_int = 11864; // 0xfb6 PushI
	var_308_int = -1; // 0xfb7 PushI
	var_309_int = 13077; // 0xfb8 PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0xfb9 TObjFunc
	return 0; // 0xfbb Return
	
Label_4028:
	var_310_int = 12601; // 0xfbc PushI
	var_311_bool = var_40_string == var_310_int; // 0xfbd Eq
	if(var_311_bool == 0) goto Label_4046; // 0xfbe JumpB
	var_312_string = ""; // 0xfbf PushV
	var_312_string = "Neutral"; // 0xfc0 MovS
	func_3802(var_41_bool, var_312_string); // 0xfc1 Call
	var_313_int = 11404; // 0xfc3 PushI
	SetMessage(var_313_int); // 0xfc4 TObjFunc
	ClearReplies(); // 0xfc6 TObjFunc
	var_314_int = 11405; // 0xfc8 PushI
	var_315_int = 12603; // 0xfc9 PushI
	var_316_int = 12602; // 0xfca PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0xfcb TObjFunc
	return 0; // 0xfcd Return
	
Label_4046:
	var_317_int = 12603; // 0xfce PushI
	var_318_bool = var_40_string == var_317_int; // 0xfcf Eq
	if(var_318_bool == 0) goto Label_4064; // 0xfd0 JumpB
	var_319_string = ""; // 0xfd1 PushV
	var_319_string = "Neutral"; // 0xfd2 MovS
	func_3802(var_41_bool, var_319_string); // 0xfd3 Call
	var_320_int = 11406; // 0xfd5 PushI
	SetMessage(var_320_int); // 0xfd6 TObjFunc
	ClearReplies(); // 0xfd8 TObjFunc
	var_321_int = 11407; // 0xfda PushI
	var_322_int = -1; // 0xfdb PushI
	var_323_int = 12604; // 0xfdc PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0xfdd TObjFunc
	return 0; // 0xfdf Return
	
Label_4064:
	var_324_int = 11956; // 0xfe0 PushI
	var_325_bool = var_40_string == var_324_int; // 0xfe1 Eq
	if(var_325_bool == 0) goto Label_4087; // 0xfe2 JumpB
	var_326_string = ""; // 0xfe3 PushV
	var_326_string = "Neutral"; // 0xfe4 MovS
	func_3802(var_41_bool, var_326_string); // 0xfe5 Call
	var_327_int = 10816; // 0xfe7 PushI
	SetMessage(var_327_int); // 0xfe8 TObjFunc
	ClearReplies(); // 0xfea TObjFunc
	var_328_int = 10817; // 0xfec PushI
	var_329_int = 11958; // 0xfed PushI
	var_330_int = 11957; // 0xfee PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0xfef TObjFunc
	var_331_int = 11019; // 0xff1 PushI
	var_332_int = 12191; // 0xff2 PushI
	var_333_int = 12190; // 0xff3 PushI
	AddReply(var_331_int, var_332_int, var_333_int); // 0xff4 TObjFunc
	return 0; // 0xff6 Return
	
Label_4087:
	var_334_int = 12191; // 0xff7 PushI
	var_335_bool = var_40_string == var_334_int; // 0xff8 Eq
	if(var_335_bool == 0) goto Label_4105; // 0xff9 JumpB
	var_336_string = ""; // 0xffa PushV
	var_336_string = "Neutral"; // 0xffb MovS
	func_3802(var_41_bool, var_336_string); // 0xffc Call
	var_337_int = 11020; // 0xffe PushI
	SetMessage(var_337_int); // 0xfff TObjFunc
	ClearReplies(); // 0x1001 TObjFunc
	var_338_int = 11021; // 0x1003 PushI
	var_339_int = 12193; // 0x1004 PushI
	var_340_int = 12192; // 0x1005 PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0x1006 TObjFunc
	return 0; // 0x1008 Return
	
Label_4105:
	var_341_int = 12193; // 0x1009 PushI
	var_342_bool = var_40_string == var_341_int; // 0x100a Eq
	if(var_342_bool == 0) goto Label_4128; // 0x100b JumpB
	var_343_string = ""; // 0x100c PushV
	var_343_string = "Neutral"; // 0x100d MovS
	func_3802(var_41_bool, var_343_string); // 0x100e Call
	var_344_int = 11022; // 0x1010 PushI
	SetMessage(var_344_int); // 0x1011 TObjFunc
	ClearReplies(); // 0x1013 TObjFunc
	var_345_int = 11023; // 0x1015 PushI
	var_346_int = 12202; // 0x1016 PushI
	var_347_int = 12194; // 0x1017 PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0x1018 TObjFunc
	var_348_int = 11024; // 0x101a PushI
	var_349_int = 12196; // 0x101b PushI
	var_350_int = 12195; // 0x101c PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0x101d TObjFunc
	return 0; // 0x101f Return
	
Label_4128:
	var_351_int = 12196; // 0x1020 PushI
	var_352_bool = var_40_string == var_351_int; // 0x1021 Eq
	if(var_352_bool == 0) goto Label_4151; // 0x1022 JumpB
	var_353_string = ""; // 0x1023 PushV
	var_353_string = "Neutral"; // 0x1024 MovS
	func_3802(var_41_bool, var_353_string); // 0x1025 Call
	var_354_int = 11025; // 0x1027 PushI
	SetMessage(var_354_int); // 0x1028 TObjFunc
	ClearReplies(); // 0x102a TObjFunc
	var_355_int = 11026; // 0x102c PushI
	var_356_int = 12198; // 0x102d PushI
	var_357_int = 12197; // 0x102e PushI
	AddReply(var_355_int, var_356_int, var_357_int); // 0x102f TObjFunc
	var_358_int = 11028; // 0x1031 PushI
	var_359_int = 12198; // 0x1032 PushI
	var_360_int = 12199; // 0x1033 PushI
	AddReply(var_358_int, var_359_int, var_360_int); // 0x1034 TObjFunc
	return 0; // 0x1036 Return
	
Label_4151:
	var_361_int = 12198; // 0x1037 PushI
	var_362_bool = var_40_string == var_361_int; // 0x1038 Eq
	if(var_362_bool == 0) goto Label_4169; // 0x1039 JumpB
	var_363_string = ""; // 0x103a PushV
	var_363_string = "Neutral"; // 0x103b MovS
	func_3802(var_41_bool, var_363_string); // 0x103c Call
	var_364_int = 11027; // 0x103e PushI
	SetMessage(var_364_int); // 0x103f TObjFunc
	ClearReplies(); // 0x1041 TObjFunc
	var_365_int = 11029; // 0x1043 PushI
	var_366_int = 12202; // 0x1044 PushI
	var_367_int = 12201; // 0x1045 PushI
	AddReply(var_365_int, var_366_int, var_367_int); // 0x1046 TObjFunc
	return 0; // 0x1048 Return
	
Label_4169:
	var_368_int = 12202; // 0x1049 PushI
	var_369_bool = var_40_string == var_368_int; // 0x104a Eq
	if(var_369_bool == 0) goto Label_4192; // 0x104b JumpB
	var_370_string = ""; // 0x104c PushV
	var_370_string = "Neutral"; // 0x104d MovS
	func_3802(var_41_bool, var_370_string); // 0x104e Call
	var_371_int = 11030; // 0x1050 PushI
	SetMessage(var_371_int); // 0x1051 TObjFunc
	ClearReplies(); // 0x1053 TObjFunc
	var_372_int = 11031; // 0x1055 PushI
	var_373_int = 12205; // 0x1056 PushI
	var_374_int = 12203; // 0x1057 PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x1058 TObjFunc
	var_375_int = 11032; // 0x105a PushI
	var_376_int = 12205; // 0x105b PushI
	var_377_int = 12204; // 0x105c PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0x105d TObjFunc
	return 0; // 0x105f Return
	
Label_4192:
	var_378_int = 12205; // 0x1060 PushI
	var_379_bool = var_40_string == var_378_int; // 0x1061 Eq
	if(var_379_bool == 0) goto Label_4215; // 0x1062 JumpB
	var_380_string = ""; // 0x1063 PushV
	var_380_string = "Neutral"; // 0x1064 MovS
	func_3802(var_41_bool, var_380_string); // 0x1065 Call
	var_381_int = 11033; // 0x1067 PushI
	SetMessage(var_381_int); // 0x1068 TObjFunc
	ClearReplies(); // 0x106a TObjFunc
	var_382_int = 11034; // 0x106c PushI
	var_383_int = 12208; // 0x106d PushI
	var_384_int = 12207; // 0x106e PushI
	AddReply(var_382_int, var_383_int, var_384_int); // 0x106f TObjFunc
	var_385_int = 11037; // 0x1071 PushI
	var_386_int = 12211; // 0x1072 PushI
	var_387_int = 12210; // 0x1073 PushI
	AddReply(var_385_int, var_386_int, var_387_int); // 0x1074 TObjFunc
	return 0; // 0x1076 Return
	
Label_4215:
	var_388_int = 12211; // 0x1077 PushI
	var_389_bool = var_40_string == var_388_int; // 0x1078 Eq
	if(var_389_bool == 0) goto Label_4238; // 0x1079 JumpB
	var_390_string = ""; // 0x107a PushV
	var_390_string = "Neutral"; // 0x107b MovS
	func_3802(var_41_bool, var_390_string); // 0x107c Call
	var_391_int = 11038; // 0x107e PushI
	SetMessage(var_391_int); // 0x107f TObjFunc
	ClearReplies(); // 0x1081 TObjFunc
	var_392_int = 11039; // 0x1083 PushI
	var_393_int = 12213; // 0x1084 PushI
	var_394_int = 12212; // 0x1085 PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0x1086 TObjFunc
	var_395_int = 11054; // 0x1088 PushI
	var_396_int = 12222; // 0x1089 PushI
	var_397_int = 12231; // 0x108a PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0x108b TObjFunc
	return 0; // 0x108d Return
	
Label_4238:
	var_398_int = 12213; // 0x108e PushI
	var_399_bool = var_40_string == var_398_int; // 0x108f Eq
	if(var_399_bool == 0) goto Label_4256; // 0x1090 JumpB
	var_400_string = ""; // 0x1091 PushV
	var_400_string = "Neutral"; // 0x1092 MovS
	func_3802(var_41_bool, var_400_string); // 0x1093 Call
	var_401_int = 11040; // 0x1095 PushI
	SetMessage(var_401_int); // 0x1096 TObjFunc
	ClearReplies(); // 0x1098 TObjFunc
	var_402_int = 11041; // 0x109a PushI
	var_403_int = 12215; // 0x109b PushI
	var_404_int = 12214; // 0x109c PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0x109d TObjFunc
	return 0; // 0x109f Return
	
Label_4256:
	var_405_int = 12215; // 0x10a0 PushI
	var_406_bool = var_40_string == var_405_int; // 0x10a1 Eq
	if(var_406_bool == 0) goto Label_4274; // 0x10a2 JumpB
	var_407_string = ""; // 0x10a3 PushV
	var_407_string = "Neutral"; // 0x10a4 MovS
	func_3802(var_41_bool, var_407_string); // 0x10a5 Call
	var_408_int = 11042; // 0x10a7 PushI
	SetMessage(var_408_int); // 0x10a8 TObjFunc
	ClearReplies(); // 0x10aa TObjFunc
	var_409_int = 11043; // 0x10ac PushI
	var_410_int = 12222; // 0x10ad PushI
	var_411_int = 12216; // 0x10ae PushI
	AddReply(var_409_int, var_410_int, var_411_int); // 0x10af TObjFunc
	return 0; // 0x10b1 Return
	
Label_4274:
	var_412_int = 12208; // 0x10b2 PushI
	var_413_bool = var_40_string == var_412_int; // 0x10b3 Eq
	if(var_413_bool == 0) goto Label_4292; // 0x10b4 JumpB
	var_414_string = ""; // 0x10b5 PushV
	var_414_string = "Neutral"; // 0x10b6 MovS
	func_3802(var_41_bool, var_414_string); // 0x10b7 Call
	var_415_int = 11035; // 0x10b9 PushI
	SetMessage(var_415_int); // 0x10ba TObjFunc
	ClearReplies(); // 0x10bc TObjFunc
	var_416_int = 11036; // 0x10be PushI
	var_417_int = 12217; // 0x10bf PushI
	var_418_int = 12209; // 0x10c0 PushI
	AddReply(var_416_int, var_417_int, var_418_int); // 0x10c1 TObjFunc
	return 0; // 0x10c3 Return
	
Label_4292:
	var_419_int = 12217; // 0x10c4 PushI
	var_420_bool = var_40_string == var_419_int; // 0x10c5 Eq
	if(var_420_bool == 0) goto Label_4315; // 0x10c6 JumpB
	var_421_string = ""; // 0x10c7 PushV
	var_421_string = "Neutral"; // 0x10c8 MovS
	func_3802(var_41_bool, var_421_string); // 0x10c9 Call
	var_422_int = 11044; // 0x10cb PushI
	SetMessage(var_422_int); // 0x10cc TObjFunc
	ClearReplies(); // 0x10ce TObjFunc
	var_423_int = 11045; // 0x10d0 PushI
	var_424_int = 12222; // 0x10d1 PushI
	var_425_int = 12218; // 0x10d2 PushI
	AddReply(var_423_int, var_424_int, var_425_int); // 0x10d3 TObjFunc
	var_426_int = 11046; // 0x10d5 PushI
	var_427_int = 12220; // 0x10d6 PushI
	var_428_int = 12219; // 0x10d7 PushI
	AddReply(var_426_int, var_427_int, var_428_int); // 0x10d8 TObjFunc
	return 0; // 0x10da Return
	
Label_4315:
	var_429_int = 12220; // 0x10db PushI
	var_430_bool = var_40_string == var_429_int; // 0x10dc Eq
	if(var_430_bool == 0) goto Label_4333; // 0x10dd JumpB
	var_431_string = ""; // 0x10de PushV
	var_431_string = "Neutral"; // 0x10df MovS
	func_3802(var_41_bool, var_431_string); // 0x10e0 Call
	var_432_int = 11047; // 0x10e2 PushI
	SetMessage(var_432_int); // 0x10e3 TObjFunc
	ClearReplies(); // 0x10e5 TObjFunc
	var_433_int = 11048; // 0x10e7 PushI
	var_434_int = 12222; // 0x10e8 PushI
	var_435_int = 12221; // 0x10e9 PushI
	AddReply(var_433_int, var_434_int, var_435_int); // 0x10ea TObjFunc
	return 0; // 0x10ec Return
	
Label_4333:
	var_436_int = 11958; // 0x10ed PushI
	var_437_bool = var_40_string == var_436_int; // 0x10ee Eq
	if(var_437_bool == 0) goto Label_4356; // 0x10ef JumpB
	var_438_string = ""; // 0x10f0 PushV
	var_438_string = "Neutral"; // 0x10f1 MovS
	func_3802(var_41_bool, var_438_string); // 0x10f2 Call
	var_439_int = 10818; // 0x10f4 PushI
	SetMessage(var_439_int); // 0x10f5 TObjFunc
	ClearReplies(); // 0x10f7 TObjFunc
	var_440_int = 10819; // 0x10f9 PushI
	var_441_int = 12222; // 0x10fa PushI
	var_442_int = 11959; // 0x10fb PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0x10fc TObjFunc
	var_443_int = 10830; // 0x10fe PushI
	var_444_int = 11971; // 0x10ff PushI
	var_445_int = 11970; // 0x1100 PushI
	AddReply(var_443_int, var_444_int, var_445_int); // 0x1101 TObjFunc
	return 0; // 0x1103 Return
	
Label_4356:
	var_446_int = 11971; // 0x1104 PushI
	var_447_bool = var_40_string == var_446_int; // 0x1105 Eq
	if(var_447_bool == 0) goto Label_4379; // 0x1106 JumpB
	var_448_string = ""; // 0x1107 PushV
	var_448_string = "Neutral"; // 0x1108 MovS
	func_3802(var_41_bool, var_448_string); // 0x1109 Call
	var_449_int = 10831; // 0x110b PushI
	SetMessage(var_449_int); // 0x110c TObjFunc
	ClearReplies(); // 0x110e TObjFunc
	var_450_int = 10832; // 0x1110 PushI
	var_451_int = 12222; // 0x1111 PushI
	var_452_int = 11972; // 0x1112 PushI
	AddReply(var_450_int, var_451_int, var_452_int); // 0x1113 TObjFunc
	var_453_int = 10833; // 0x1115 PushI
	var_454_int = 12227; // 0x1116 PushI
	var_455_int = 11974; // 0x1117 PushI
	AddReply(var_453_int, var_454_int, var_455_int); // 0x1118 TObjFunc
	return 0; // 0x111a Return
	
Label_4379:
	var_456_int = 12227; // 0x111b PushI
	var_457_bool = var_40_string == var_456_int; // 0x111c Eq
	if(var_457_bool == 0) goto Label_4397; // 0x111d JumpB
	var_458_string = ""; // 0x111e PushV
	var_458_string = "Neutral"; // 0x111f MovS
	func_3802(var_41_bool, var_458_string); // 0x1120 Call
	var_459_int = 11052; // 0x1122 PushI
	SetMessage(var_459_int); // 0x1123 TObjFunc
	ClearReplies(); // 0x1125 TObjFunc
	var_460_int = 11053; // 0x1127 PushI
	var_461_int = 12198; // 0x1128 PushI
	var_462_int = 12228; // 0x1129 PushI
	AddReply(var_460_int, var_461_int, var_462_int); // 0x112a TObjFunc
	return 0; // 0x112c Return
	
Label_4397:
	var_463_int = 12222; // 0x112d PushI
	var_464_bool = var_40_string == var_463_int; // 0x112e Eq
	if(var_464_bool == 0) goto Label_4425; // 0x112f JumpB
	var_465_string = ""; // 0x1130 PushV
	var_465_string = "Neutral"; // 0x1131 MovS
	func_3802(var_41_bool, var_465_string); // 0x1132 Call
	var_466_int = 11049; // 0x1134 PushI
	SetMessage(var_466_int); // 0x1135 TObjFunc
	ClearReplies(); // 0x1137 TObjFunc
	var_467_int = 11050; // 0x1139 PushI
	var_468_int = 12233; // 0x113a PushI
	var_469_int = 12223; // 0x113b PushI
	AddReply(var_467_int, var_468_int, var_469_int); // 0x113c TObjFunc
	var_470_int = 11051; // 0x113e PushI
	var_471_int = 12233; // 0x113f PushI
	var_472_int = 12224; // 0x1140 PushI
	AddReply(var_470_int, var_471_int, var_472_int); // 0x1141 TObjFunc
	var_473_int = 11059; // 0x1143 PushI
	var_474_int = 12240; // 0x1144 PushI
	var_475_int = 12239; // 0x1145 PushI
	AddReply(var_473_int, var_474_int, var_475_int); // 0x1146 TObjFunc
	return 0; // 0x1148 Return
	
Label_4425:
	var_476_int = 12240; // 0x1149 PushI
	var_477_bool = var_40_string == var_476_int; // 0x114a Eq
	if(var_477_bool == 0) goto Label_4443; // 0x114b JumpB
	var_478_string = ""; // 0x114c PushV
	var_478_string = "Neutral"; // 0x114d MovS
	func_3802(var_41_bool, var_478_string); // 0x114e Call
	var_479_int = 11060; // 0x1150 PushI
	SetMessage(var_479_int); // 0x1151 TObjFunc
	ClearReplies(); // 0x1153 TObjFunc
	var_480_int = 11061; // 0x1155 PushI
	var_481_int = 12233; // 0x1156 PushI
	var_482_int = 12241; // 0x1157 PushI
	AddReply(var_480_int, var_481_int, var_482_int); // 0x1158 TObjFunc
	return 0; // 0x115a Return
	
Label_4443:
	var_483_int = 12233; // 0x115b PushI
	var_484_bool = var_40_string == var_483_int; // 0x115c Eq
	if(var_484_bool == 0) goto Label_4466; // 0x115d JumpB
	var_485_string = ""; // 0x115e PushV
	var_485_string = "Neutral"; // 0x115f MovS
	func_3802(var_41_bool, var_485_string); // 0x1160 Call
	var_486_int = 11055; // 0x1162 PushI
	SetMessage(var_486_int); // 0x1163 TObjFunc
	ClearReplies(); // 0x1165 TObjFunc
	var_487_int = 11056; // 0x1167 PushI
	var_488_int = 12237; // 0x1168 PushI
	var_489_int = 12235; // 0x1169 PushI
	AddReply(var_487_int, var_488_int, var_489_int); // 0x116a TObjFunc
	var_490_int = 11057; // 0x116c PushI
	var_491_int = 12237; // 0x116d PushI
	var_492_int = 12236; // 0x116e PushI
	AddReply(var_490_int, var_491_int, var_492_int); // 0x116f TObjFunc
	return 0; // 0x1171 Return
	
Label_4466:
	var_493_int = 12237; // 0x1172 PushI
	var_494_bool = var_40_string == var_493_int; // 0x1173 Eq
	if(var_494_bool == 0) goto Label_4489; // 0x1174 JumpB
	var_495_string = ""; // 0x1175 PushV
	var_495_string = "Neutral"; // 0x1176 MovS
	func_3802(var_41_bool, var_495_string); // 0x1177 Call
	var_496_int = 11058; // 0x1179 PushI
	SetMessage(var_496_int); // 0x117a TObjFunc
	ClearReplies(); // 0x117c TObjFunc
	var_497_int = 11062; // 0x117e PushI
	var_498_int = -1; // 0x117f PushI
	var_499_int = 12243; // 0x1180 PushI
	AddReply(var_497_int, var_498_int, var_499_int); // 0x1181 TObjFunc
	var_500_int = 11063; // 0x1183 PushI
	var_501_int = -1; // 0x1184 PushI
	var_502_int = 12244; // 0x1185 PushI
	AddReply(var_500_int, var_501_int, var_502_int); // 0x1186 TObjFunc
	return 0; // 0x1188 Return
	
Label_4489:
	var_503_int = 12594; // 0x1189 PushI
	var_504_bool = var_40_string == var_503_int; // 0x118a Eq
	if(var_504_bool == 0) goto Label_4507; // 0x118b JumpB
	var_505_string = ""; // 0x118c PushV
	var_505_string = "Neutral"; // 0x118d MovS
	func_3802(var_41_bool, var_505_string); // 0x118e Call
	var_506_int = 11397; // 0x1190 PushI
	SetMessage(var_506_int); // 0x1191 TObjFunc
	ClearReplies(); // 0x1193 TObjFunc
	var_507_int = 11398; // 0x1195 PushI
	var_508_int = 12596; // 0x1196 PushI
	var_509_int = 12595; // 0x1197 PushI
	AddReply(var_507_int, var_508_int, var_509_int); // 0x1198 TObjFunc
	return 0; // 0x119a Return
	
Label_4507:
	var_510_int = 12596; // 0x119b PushI
	var_511_bool = var_40_string == var_510_int; // 0x119c Eq
	if(var_511_bool == 0) goto Label_4525; // 0x119d JumpB
	var_512_string = ""; // 0x119e PushV
	var_512_string = "Neutral"; // 0x119f MovS
	func_3802(var_41_bool, var_512_string); // 0x11a0 Call
	var_513_int = 11399; // 0x11a2 PushI
	SetMessage(var_513_int); // 0x11a3 TObjFunc
	ClearReplies(); // 0x11a5 TObjFunc
	var_514_int = 11400; // 0x11a7 PushI
	var_515_int = 12598; // 0x11a8 PushI
	var_516_int = 12597; // 0x11a9 PushI
	AddReply(var_514_int, var_515_int, var_516_int); // 0x11aa TObjFunc
	return 0; // 0x11ac Return
	
Label_4525:
	var_517_int = 12598; // 0x11ad PushI
	var_518_bool = var_40_string == var_517_int; // 0x11ae Eq
	if(var_518_bool == 0) goto Label_4543; // 0x11af JumpB
	var_519_string = ""; // 0x11b0 PushV
	var_519_string = "Neutral"; // 0x11b1 MovS
	func_3802(var_41_bool, var_519_string); // 0x11b2 Call
	var_520_int = 11401; // 0x11b4 PushI
	SetMessage(var_520_int); // 0x11b5 TObjFunc
	ClearReplies(); // 0x11b7 TObjFunc
	var_521_int = 11409; // 0x11b9 PushI
	var_522_int = 12607; // 0x11ba PushI
	var_523_int = 12606; // 0x11bb PushI
	AddReply(var_521_int, var_522_int, var_523_int); // 0x11bc TObjFunc
	return 0; // 0x11be Return
	
Label_4543:
	var_524_int = 12607; // 0x11bf PushI
	var_525_bool = var_40_string == var_524_int; // 0x11c0 Eq
	if(var_525_bool == 0) goto Label_4561; // 0x11c1 JumpB
	var_526_string = ""; // 0x11c2 PushV
	var_526_string = "Neutral"; // 0x11c3 MovS
	func_3802(var_41_bool, var_526_string); // 0x11c4 Call
	var_527_int = 11410; // 0x11c6 PushI
	SetMessage(var_527_int); // 0x11c7 TObjFunc
	ClearReplies(); // 0x11c9 TObjFunc
	var_528_int = 11411; // 0x11cb PushI
	var_529_int = 12609; // 0x11cc PushI
	var_530_int = 12608; // 0x11cd PushI
	AddReply(var_528_int, var_529_int, var_530_int); // 0x11ce TObjFunc
	return 0; // 0x11d0 Return
	
Label_4561:
	var_531_int = 12609; // 0x11d1 PushI
	var_532_bool = var_40_string == var_531_int; // 0x11d2 Eq
	if(var_532_bool == 0) goto Label_4584; // 0x11d3 JumpB
	var_533_string = ""; // 0x11d4 PushV
	var_533_string = "Neutral"; // 0x11d5 MovS
	func_3802(var_41_bool, var_533_string); // 0x11d6 Call
	var_534_int = 11412; // 0x11d8 PushI
	SetMessage(var_534_int); // 0x11d9 TObjFunc
	ClearReplies(); // 0x11db TObjFunc
	var_535_int = 11413; // 0x11dd PushI
	var_536_int = -1; // 0x11de PushI
	var_537_int = 12610; // 0x11df PushI
	AddReply(var_535_int, var_536_int, var_537_int); // 0x11e0 TObjFunc
	var_538_int = 11414; // 0x11e2 PushI
	var_539_int = 12612; // 0x11e3 PushI
	var_540_int = 12611; // 0x11e4 PushI
	AddReply(var_538_int, var_539_int, var_540_int); // 0x11e5 TObjFunc
	return 0; // 0x11e7 Return
	
Label_4584:
	var_541_int = 12612; // 0x11e8 PushI
	var_542_bool = var_40_string == var_541_int; // 0x11e9 Eq
	if(var_542_bool == 0) goto Label_4602; // 0x11ea JumpB
	var_543_string = ""; // 0x11eb PushV
	var_543_string = "Neutral"; // 0x11ec MovS
	func_3802(var_41_bool, var_543_string); // 0x11ed Call
	var_544_int = 11415; // 0x11ef PushI
	SetMessage(var_544_int); // 0x11f0 TObjFunc
	ClearReplies(); // 0x11f2 TObjFunc
	var_545_int = 11416; // 0x11f4 PushI
	var_546_int = -1; // 0x11f5 PushI
	var_547_int = 12613; // 0x11f6 PushI
	AddReply(var_545_int, var_546_int, var_547_int); // 0x11f7 TObjFunc
	return 0; // 0x11f9 Return
	
Label_4602:
	var_3_string = 1; // 0x11fa TMovB
	var_548_bool = 0; // 0x11fb PushV
	func_7232(var_548_bool); // 0x11fc Call
	if(var_548_bool == 0) goto Label_4610; // 0x11fe JumpB
	lshStopAnimation(); // 0x11ff Func
	goto Label_4612; // 0x1201 Jump
	
Label_4612:
	return 0; // 0x1204 Return
	
Label_4610:
	StopAnimation(); // 0x1202 Func
	
Label_4614:
	return 0; // 0x1206 Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	var_42_int = 1; // 0x12ea PushI
	if(var_42_int == 0) goto Label_5251; // 0x12eb JumpB
	func_7143(); // 0x12ed Call
	var_44_int = 12969; // 0x12ef PushI
	var_45_bool = var_41_bool == var_44_int; // 0x12f0 Eq
	if(var_45_bool == 0) goto Label_4860; // 0x12f1 JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0x12f2 PushV
	var_46_object = var_1_object; // 0x12f3 MovT
	var_47_object = var_0_object; // 0x12f4 MovT
	func_7640(); // 0x12f5 Call
	var_50_object = Obj(); var_51_object = Obj(); // 0x12f7 PushV
	var_50_object = var_1_object; // 0x12f8 MovT
	var_51_object = var_0_object; // 0x12f9 MovT
	func_7771(); // 0x12fa Call
	
Label_4860:
	var_120_int = 12970; // 0x12fc PushI
	var_121_bool = var_41_bool == var_120_int; // 0x12fd Eq
	if(var_121_bool == 0) goto Label_4873; // 0x12fe JumpB
	var_122_object = Obj(); var_123_object = Obj(); // 0x12ff PushV
	var_122_object = var_1_object; // 0x1300 MovT
	var_123_object = var_0_object; // 0x1301 MovT
	func_7640(); // 0x1302 Call
	var_124_object = Obj(); var_125_object = Obj(); // 0x1304 PushV
	var_124_object = var_1_object; // 0x1305 MovT
	var_125_object = var_0_object; // 0x1306 MovT
	func_7771(); // 0x1307 Call
	
Label_4873:
	var_126_int = 13745; // 0x1309 PushI
	var_127_bool = var_41_bool == var_126_int; // 0x130a Eq
	if(var_127_bool == 0) goto Label_4891; // 0x130b JumpB
	var_128_object = Obj(); var_129_object = Obj(); // 0x130c PushV
	var_128_object = var_1_object; // 0x130d MovT
	var_129_object = var_0_object; // 0x130e MovT
	func_7626(); // 0x130f Call
	var_132_object = Obj(); var_133_object = Obj(); // 0x1311 PushV
	var_132_object = var_1_object; // 0x1312 MovT
	var_133_object = var_0_object; // 0x1313 MovT
	func_7613(var_133_object); // 0x1314 Call
	var_141_object = Obj(); var_142_object = Obj(); // 0x1316 PushV
	var_141_object = var_1_object; // 0x1317 MovT
	var_142_object = var_0_object; // 0x1318 MovT
	func_7290(); // 0x1319 Call
	
Label_4891:
	var_145_int = 13748; // 0x131b PushI
	var_146_bool = var_41_bool == var_145_int; // 0x131c Eq
	if(var_146_bool == 0) goto Label_4909; // 0x131d JumpB
	var_147_object = Obj(); var_148_object = Obj(); // 0x131e PushV
	var_147_object = var_1_object; // 0x131f MovT
	var_148_object = var_0_object; // 0x1320 MovT
	func_7632(); // 0x1321 Call
	var_151_object = Obj(); var_152_object = Obj(); // 0x1323 PushV
	var_151_object = var_1_object; // 0x1324 MovT
	var_152_object = var_0_object; // 0x1325 MovT
	func_7624(); // 0x1326 Call
	var_153_object = Obj(); var_154_object = Obj(); // 0x1328 PushV
	var_153_object = var_1_object; // 0x1329 MovT
	var_154_object = var_0_object; // 0x132a MovT
	func_7638(); // 0x132b Call
	
Label_4909:
	var_155_int = 12947; // 0x132d PushI
	var_156_bool = var_40_string == var_155_int; // 0x132e Eq
	if(var_156_bool == 0) goto Label_5021; // 0x132f JumpB
	var_157_bool = 0; // 0x1330 PushV
	var_157_bool = 0; // 0x1331 MovB
	var_158_bool = 0; // 0x1332 PushV
	var_158_bool = 0; // 0x1333 MovB
	var_159_bool = 0; var_160_object = Obj(); // 0x1334 PushV
	var_160_object = var_1_object; // 0x1335 MovT
	func_8193(var_160_object); // 0x1336 Call
	if(var_159_bool == 0) goto Label_4928; // 0x1338 JumpB
	var_165_bool = 0; var_166_object = Obj(); // 0x1339 PushV
	var_166_object = var_1_object; // 0x133a MovT
	func_8133(var_166_object); // 0x133b Call
	var_171_bool = var_165_bool == 0; // 0x133d Not
	if(var_171_bool == 0) goto Label_4928; // 0x133e JumpB
	var_158_bool = 1; // 0x133f MovB
	
Label_4928:
	if(var_158_bool == 0) goto Label_4936; // 0x1340 JumpB
	var_172_bool = 0; var_173_object = Obj(); // 0x1341 PushV
	var_173_object = var_1_object; // 0x1342 MovT
	func_8145(var_173_object); // 0x1343 Call
	var_178_bool = var_172_bool == 0; // 0x1345 Not
	if(var_178_bool == 0) goto Label_4936; // 0x1346 JumpB
	var_157_bool = 1; // 0x1347 MovB
	
Label_4936:
	if(var_157_bool == 0) goto Label_4968; // 0x1348 JumpB
	var_179_string = ""; // 0x1349 PushV
	var_179_string = "Neutral"; // 0x134a MovS
	func_4825(var_41_bool, var_179_string); // 0x134b Call
	var_194_int = 11741; // 0x134d PushI
	SetMessage(var_194_int); // 0x134e TObjFunc
	ClearReplies(); // 0x1350 TObjFunc
	var_195_int = 11743; // 0x1352 PushI
	var_196_int = 12951; // 0x1353 PushI
	var_197_int = 12949; // 0x1354 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x1355 TObjFunc
	var_198_int = 11742; // 0x1357 PushI
	var_199_int = 12950; // 0x1358 PushI
	var_200_int = 12948; // 0x1359 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x135a TObjFunc
	var_201_bool = 0; var_202_object = Obj(); // 0x135c PushV
	var_202_object = var_1_object; // 0x135d MovT
	func_8073(var_202_object); // 0x135e Call
	var_207_bool = var_201_bool == 0; // 0x1360 Not
	if(var_207_bool == 0) goto Label_4967; // 0x1361 JumpB
	var_208_int = 12586; // 0x1362 PushI
	var_209_int = 13766; // 0x1363 PushI
	var_210_int = 13753; // 0x1364 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x1365 TObjFunc
	
Label_4967:
	return 0; // 0x1367 Return
	
Label_4968:
	var_211_string = ""; // 0x1368 PushV
	var_211_string = "Neutral"; // 0x1369 MovS
	func_4825(var_41_bool, var_211_string); // 0x136a Call
	var_212_int = 12573; // 0x136c PushI
	SetMessage(var_212_int); // 0x136d TObjFunc
	ClearReplies(); // 0x136f TObjFunc
	var_213_bool = 0; // 0x1371 PushV
	var_213_bool = 0; // 0x1372 MovB
	var_214_bool = 0; var_215_object = Obj(); // 0x1373 PushV
	var_215_object = var_1_object; // 0x1374 MovT
	func_8157(var_215_object); // 0x1375 Call
	if(var_214_bool == 0) goto Label_4990; // 0x1377 JumpB
	var_220_bool = 0; var_221_object = Obj(); // 0x1378 PushV
	var_221_object = var_1_object; // 0x1379 MovT
	func_8169(var_221_object); // 0x137a Call
	if(var_220_bool == 0) goto Label_4990; // 0x137c JumpB
	var_213_bool = 1; // 0x137d MovB
	
Label_4990:
	if(var_213_bool == 0) goto Label_4996; // 0x137e JumpB
	var_226_int = 12574; // 0x137f PushI
	var_227_int = 13744; // 0x1380 PushI
	var_228_int = 13743; // 0x1381 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x1382 TObjFunc
	
Label_4996:
	var_229_bool = 0; // 0x1384 PushV
	var_229_bool = 0; // 0x1385 MovB
	var_230_bool = 0; var_231_object = Obj(); // 0x1386 PushV
	var_231_object = var_1_object; // 0x1387 MovT
	func_8133(var_231_object); // 0x1388 Call
	if(var_230_bool == 0) goto Label_5009; // 0x138a JumpB
	var_232_bool = 0; var_233_object = Obj(); // 0x138b PushV
	var_233_object = var_1_object; // 0x138c MovT
	func_8181(var_233_object); // 0x138d Call
	if(var_232_bool == 0) goto Label_5009; // 0x138f JumpB
	var_229_bool = 1; // 0x1390 MovB
	
Label_5009:
	if(var_229_bool == 0) goto Label_5015; // 0x1391 JumpB
	var_238_int = 12577; // 0x1392 PushI
	var_239_int = 13747; // 0x1393 PushI
	var_240_int = 13746; // 0x1394 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x1395 TObjFunc
	
Label_5015:
	var_241_int = 12580; // 0x1397 PushI
	var_242_int = -1; // 0x1398 PushI
	var_243_int = 13749; // 0x1399 PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x139a TObjFunc
	return 0; // 0x139c Return
	
Label_5021:
	var_244_int = 13747; // 0x139d PushI
	var_245_bool = var_40_string == var_244_int; // 0x139e Eq
	if(var_245_bool == 0) goto Label_5044; // 0x139f JumpB
	var_246_string = ""; // 0x13a0 PushV
	var_246_string = "Neutral"; // 0x13a1 MovS
	func_4825(var_41_bool, var_246_string); // 0x13a2 Call
	var_247_int = 12578; // 0x13a4 PushI
	SetMessage(var_247_int); // 0x13a5 TObjFunc
	ClearReplies(); // 0x13a7 TObjFunc
	var_248_int = 12598; // 0x13a9 PushI
	var_249_int = 13770; // 0x13aa PushI
	var_250_int = 13769; // 0x13ab PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x13ac TObjFunc
	var_251_int = 12603; // 0x13ae PushI
	var_252_int = 13772; // 0x13af PushI
	var_253_int = 13775; // 0x13b0 PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x13b1 TObjFunc
	return 0; // 0x13b3 Return
	
Label_5044:
	var_254_int = 13770; // 0x13b4 PushI
	var_255_bool = var_40_string == var_254_int; // 0x13b5 Eq
	if(var_255_bool == 0) goto Label_5067; // 0x13b6 JumpB
	var_256_string = ""; // 0x13b7 PushV
	var_256_string = "Neutral"; // 0x13b8 MovS
	func_4825(var_41_bool, var_256_string); // 0x13b9 Call
	var_257_int = 12599; // 0x13bb PushI
	SetMessage(var_257_int); // 0x13bc TObjFunc
	ClearReplies(); // 0x13be TObjFunc
	var_258_int = 12600; // 0x13c0 PushI
	var_259_int = 13772; // 0x13c1 PushI
	var_260_int = 13771; // 0x13c2 PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x13c3 TObjFunc
	var_261_int = 12602; // 0x13c5 PushI
	var_262_int = 13772; // 0x13c6 PushI
	var_263_int = 13773; // 0x13c7 PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x13c8 TObjFunc
	return 0; // 0x13ca Return
	
Label_5067:
	var_264_int = 13772; // 0x13cb PushI
	var_265_bool = var_40_string == var_264_int; // 0x13cc Eq
	if(var_265_bool == 0) goto Label_5085; // 0x13cd JumpB
	var_266_string = ""; // 0x13ce PushV
	var_266_string = "Neutral"; // 0x13cf MovS
	func_4825(var_41_bool, var_266_string); // 0x13d0 Call
	var_267_int = 12601; // 0x13d2 PushI
	SetMessage(var_267_int); // 0x13d3 TObjFunc
	ClearReplies(); // 0x13d5 TObjFunc
	var_268_int = 12579; // 0x13d7 PushI
	var_269_int = -1; // 0x13d8 PushI
	var_270_int = 13748; // 0x13d9 PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x13da TObjFunc
	return 0; // 0x13dc Return
	
Label_5085:
	var_271_int = 13744; // 0x13dd PushI
	var_272_bool = var_40_string == var_271_int; // 0x13de Eq
	if(var_272_bool == 0) goto Label_5103; // 0x13df JumpB
	var_273_string = ""; // 0x13e0 PushV
	var_273_string = "Neutral"; // 0x13e1 MovS
	func_4825(var_41_bool, var_273_string); // 0x13e2 Call
	var_274_int = 12575; // 0x13e4 PushI
	SetMessage(var_274_int); // 0x13e5 TObjFunc
	ClearReplies(); // 0x13e7 TObjFunc
	var_275_int = 12576; // 0x13e9 PushI
	var_276_int = -1; // 0x13ea PushI
	var_277_int = 13745; // 0x13eb PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0x13ec TObjFunc
	return 0; // 0x13ee Return
	
Label_5103:
	var_278_int = 13766; // 0x13ef PushI
	var_279_bool = var_40_string == var_278_int; // 0x13f0 Eq
	if(var_279_bool == 0) goto Label_5121; // 0x13f1 JumpB
	var_280_string = ""; // 0x13f2 PushV
	var_280_string = "Neutral"; // 0x13f3 MovS
	func_4825(var_41_bool, var_280_string); // 0x13f4 Call
	var_281_int = 12596; // 0x13f6 PushI
	SetMessage(var_281_int); // 0x13f7 TObjFunc
	ClearReplies(); // 0x13f9 TObjFunc
	var_282_int = 12597; // 0x13fb PushI
	var_283_int = 12960; // 0x13fc PushI
	var_284_int = 13767; // 0x13fd PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0x13fe TObjFunc
	return 0; // 0x1400 Return
	
Label_5121:
	var_285_int = 12950; // 0x1401 PushI
	var_286_bool = var_40_string == var_285_int; // 0x1402 Eq
	if(var_286_bool == 0) goto Label_5139; // 0x1403 JumpB
	var_287_string = ""; // 0x1404 PushV
	var_287_string = "Neutral"; // 0x1405 MovS
	func_4825(var_41_bool, var_287_string); // 0x1406 Call
	var_288_int = 11744; // 0x1408 PushI
	SetMessage(var_288_int); // 0x1409 TObjFunc
	ClearReplies(); // 0x140b TObjFunc
	var_289_int = 11746; // 0x140d PushI
	var_290_int = 12954; // 0x140e PushI
	var_291_int = 12952; // 0x140f PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0x1410 TObjFunc
	return 0; // 0x1412 Return
	
Label_5139:
	var_292_int = 12954; // 0x1413 PushI
	var_293_bool = var_40_string == var_292_int; // 0x1414 Eq
	if(var_293_bool == 0) goto Label_5157; // 0x1415 JumpB
	var_294_string = ""; // 0x1416 PushV
	var_294_string = "Neutral"; // 0x1417 MovS
	func_4825(var_41_bool, var_294_string); // 0x1418 Call
	var_295_int = 11748; // 0x141a PushI
	SetMessage(var_295_int); // 0x141b TObjFunc
	ClearReplies(); // 0x141d TObjFunc
	var_296_int = 11749; // 0x141f PushI
	var_297_int = 12951; // 0x1420 PushI
	var_298_int = 12955; // 0x1421 PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0x1422 TObjFunc
	return 0; // 0x1424 Return
	
Label_5157:
	var_299_int = 12951; // 0x1425 PushI
	var_300_bool = var_40_string == var_299_int; // 0x1426 Eq
	if(var_300_bool == 0) goto Label_5175; // 0x1427 JumpB
	var_301_string = ""; // 0x1428 PushV
	var_301_string = "Neutral"; // 0x1429 MovS
	func_4825(var_41_bool, var_301_string); // 0x142a Call
	var_302_int = 11745; // 0x142c PushI
	SetMessage(var_302_int); // 0x142d TObjFunc
	ClearReplies(); // 0x142f TObjFunc
	var_303_int = 11747; // 0x1431 PushI
	var_304_int = 12957; // 0x1432 PushI
	var_305_int = 12953; // 0x1433 PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x1434 TObjFunc
	return 0; // 0x1436 Return
	
Label_5175:
	var_306_int = 12957; // 0x1437 PushI
	var_307_bool = var_40_string == var_306_int; // 0x1438 Eq
	if(var_307_bool == 0) goto Label_5198; // 0x1439 JumpB
	var_308_string = ""; // 0x143a PushV
	var_308_string = "Neutral"; // 0x143b MovS
	func_4825(var_41_bool, var_308_string); // 0x143c Call
	var_309_int = 11750; // 0x143e PushI
	SetMessage(var_309_int); // 0x143f TObjFunc
	ClearReplies(); // 0x1441 TObjFunc
	var_310_int = 11751; // 0x1443 PushI
	var_311_int = 12960; // 0x1444 PushI
	var_312_int = 12958; // 0x1445 PushI
	AddReply(var_310_int, var_311_int, var_312_int); // 0x1446 TObjFunc
	var_313_int = 11752; // 0x1448 PushI
	var_314_int = 12960; // 0x1449 PushI
	var_315_int = 12959; // 0x144a PushI
	AddReply(var_313_int, var_314_int, var_315_int); // 0x144b TObjFunc
	return 0; // 0x144d Return
	
Label_5198:
	var_316_int = 12960; // 0x144e PushI
	var_317_bool = var_40_string == var_316_int; // 0x144f Eq
	if(var_317_bool == 0) goto Label_5216; // 0x1450 JumpB
	var_318_string = ""; // 0x1451 PushV
	var_318_string = "Neutral"; // 0x1452 MovS
	func_4825(var_41_bool, var_318_string); // 0x1453 Call
	var_319_int = 11753; // 0x1455 PushI
	SetMessage(var_319_int); // 0x1456 TObjFunc
	ClearReplies(); // 0x1458 TObjFunc
	var_320_int = 11754; // 0x145a PushI
	var_321_int = 12964; // 0x145b PushI
	var_322_int = 12962; // 0x145c PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0x145d TObjFunc
	return 0; // 0x145f Return
	
Label_5216:
	var_323_int = 12964; // 0x1460 PushI
	var_324_bool = var_40_string == var_323_int; // 0x1461 Eq
	if(var_324_bool == 0) goto Label_5239; // 0x1462 JumpB
	var_325_string = ""; // 0x1463 PushV
	var_325_string = "Neutral"; // 0x1464 MovS
	func_4825(var_41_bool, var_325_string); // 0x1465 Call
	var_326_int = 11756; // 0x1467 PushI
	SetMessage(var_326_int); // 0x1468 TObjFunc
	ClearReplies(); // 0x146a TObjFunc
	var_327_int = 11761; // 0x146c PushI
	var_328_int = -1; // 0x146d PushI
	var_329_int = 12969; // 0x146e PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0x146f TObjFunc
	var_330_int = 11762; // 0x1471 PushI
	var_331_int = -1; // 0x1472 PushI
	var_332_int = 12970; // 0x1473 PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0x1474 TObjFunc
	return 0; // 0x1476 Return
	
Label_5239:
	var_3_string = 1; // 0x1477 TMovB
	var_333_bool = 0; // 0x1478 PushV
	func_7232(var_333_bool); // 0x1479 Call
	if(var_333_bool == 0) goto Label_5247; // 0x147b JumpB
	lshStopAnimation(); // 0x147c Func
	goto Label_5249; // 0x147e Jump
	
Label_5249:
	return 0; // 0x1481 Return
	
Label_5247:
	StopAnimation(); // 0x147f Func
	
Label_5251:
	return 0; // 0x1483 Return
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	var_42_int = 1; // 0x155c PushI
	if(var_42_int == 0) goto Label_5846; // 0x155d JumpB
	func_7143(); // 0x155f Call
	var_44_int = 13670; // 0x1561 PushI
	var_45_bool = var_41_bool == var_44_int; // 0x1562 Eq
	if(var_45_bool == 0) goto Label_5491; // 0x1563 JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0x1564 PushV
	var_46_object = var_1_object; // 0x1565 MovT
	var_47_object = var_0_object; // 0x1566 MovT
	func_7579(); // 0x1567 Call
	var_50_object = Obj(); var_51_object = Obj(); // 0x1569 PushV
	var_50_object = var_1_object; // 0x156a MovT
	var_51_object = var_0_object; // 0x156b MovT
	func_7539(); // 0x156c Call
	var_121_object = Obj(); var_122_object = Obj(); // 0x156e PushV
	var_121_object = var_1_object; // 0x156f MovT
	var_122_object = var_0_object; // 0x1570 MovT
	func_7591(); // 0x1571 Call
	
Label_5491:
	var_125_int = 13671; // 0x1573 PushI
	var_126_bool = var_41_bool == var_125_int; // 0x1574 Eq
	if(var_126_bool == 0) goto Label_5504; // 0x1575 JumpB
	var_127_object = Obj(); var_128_object = Obj(); // 0x1576 PushV
	var_127_object = var_1_object; // 0x1577 MovT
	var_128_object = var_0_object; // 0x1578 MovT
	func_7579(); // 0x1579 Call
	var_129_object = Obj(); var_130_object = Obj(); // 0x157b PushV
	var_129_object = var_1_object; // 0x157c MovT
	var_130_object = var_0_object; // 0x157d MovT
	func_7591(); // 0x157e Call
	
Label_5504:
	var_131_int = 13692; // 0x1580 PushI
	var_132_bool = var_41_bool == var_131_int; // 0x1581 Eq
	if(var_132_bool == 0) goto Label_5512; // 0x1582 JumpB
	var_133_object = Obj(); var_134_object = Obj(); // 0x1583 PushV
	var_133_object = var_1_object; // 0x1584 MovT
	var_134_object = var_0_object; // 0x1585 MovT
	func_7539(); // 0x1586 Call
	
Label_5512:
	var_135_int = 13689; // 0x1588 PushI
	var_136_bool = var_41_bool == var_135_int; // 0x1589 Eq
	if(var_136_bool == 0) goto Label_5535; // 0x158a JumpB
	var_137_object = Obj(); var_138_object = Obj(); // 0x158b PushV
	var_137_object = var_1_object; // 0x158c MovT
	var_138_object = var_0_object; // 0x158d MovT
	func_7528(var_138_object); // 0x158e Call
	var_146_object = Obj(); var_147_object = Obj(); // 0x1590 PushV
	var_146_object = var_1_object; // 0x1591 MovT
	var_147_object = var_0_object; // 0x1592 MovT
	func_7290(); // 0x1593 Call
	var_150_object = Obj(); var_151_object = Obj(); // 0x1595 PushV
	var_150_object = var_1_object; // 0x1596 MovT
	var_151_object = var_0_object; // 0x1597 MovT
	func_7585(); // 0x1598 Call
	var_154_object = Obj(); var_155_object = Obj(); // 0x159a PushV
	var_154_object = var_1_object; // 0x159b MovT
	var_155_object = var_0_object; // 0x159c MovT
	func_7646(); // 0x159d Call
	
Label_5535:
	var_178_int = 13698; // 0x159f PushI
	var_179_bool = var_41_bool == var_178_int; // 0x15a0 Eq
	if(var_179_bool == 0) goto Label_5548; // 0x15a1 JumpB
	var_180_object = Obj(); var_181_object = Obj(); // 0x15a2 PushV
	var_180_object = var_1_object; // 0x15a3 MovT
	var_181_object = var_0_object; // 0x15a4 MovT
	func_7597(); // 0x15a5 Call
	var_184_object = Obj(); var_185_object = Obj(); // 0x15a7 PushV
	var_184_object = var_1_object; // 0x15a8 MovT
	var_185_object = var_0_object; // 0x15a9 MovT
	func_7603(); // 0x15aa Call
	
Label_5548:
	var_198_int = 13330; // 0x15ac PushI
	var_199_bool = var_40_string == var_198_int; // 0x15ad Eq
	if(var_199_bool == 0) goto Label_5649; // 0x15ae JumpB
	var_200_bool = 0; var_201_object = Obj(); // 0x15af PushV
	var_201_object = var_1_object; // 0x15b0 MovT
	func_8097(var_201_object); // 0x15b1 Call
	if(var_200_bool == 0) goto Label_5576; // 0x15b3 JumpB
	var_208_string = ""; // 0x15b4 PushV
	var_208_string = "Neutral"; // 0x15b5 MovS
	func_5451(var_41_bool, var_208_string); // 0x15b6 Call
	var_223_int = 12104; // 0x15b8 PushI
	SetMessage(var_223_int); // 0x15b9 TObjFunc
	ClearReplies(); // 0x15bb TObjFunc
	var_224_int = 12105; // 0x15bd PushI
	var_225_int = 13334; // 0x15be PushI
	var_226_int = 13331; // 0x15bf PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x15c0 TObjFunc
	var_227_int = 12106; // 0x15c2 PushI
	var_228_int = 13333; // 0x15c3 PushI
	var_229_int = 13332; // 0x15c4 PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x15c5 TObjFunc
	return 0; // 0x15c7 Return
	
Label_5576:
	var_230_string = ""; // 0x15c8 PushV
	var_230_string = "Neutral"; // 0x15c9 MovS
	func_5451(var_41_bool, var_230_string); // 0x15ca Call
	var_231_int = 12515; // 0x15cc PushI
	SetMessage(var_231_int); // 0x15cd TObjFunc
	ClearReplies(); // 0x15cf TObjFunc
	var_232_bool = 0; var_233_object = Obj(); // 0x15d1 PushV
	var_233_object = var_1_object; // 0x15d2 MovT
	func_8085(var_233_object); // 0x15d3 Call
	if(var_232_bool == 0) goto Label_5595; // 0x15d5 JumpB
	var_238_int = 12520; // 0x15d6 PushI
	var_239_int = 13691; // 0x15d7 PushI
	var_240_int = 13690; // 0x15d8 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x15d9 TObjFunc
	
Label_5595:
	var_241_bool = 0; // 0x15db PushV
	var_241_bool = 0; // 0x15dc MovB
	var_242_bool = 0; var_243_object = Obj(); // 0x15dd PushV
	var_243_object = var_1_object; // 0x15de MovT
	func_8109(var_243_object); // 0x15df Call
	if(var_242_bool == 0) goto Label_5608; // 0x15e1 JumpB
	var_248_bool = 0; var_249_object = Obj(); // 0x15e2 PushV
	var_249_object = var_1_object; // 0x15e3 MovT
	func_8205(var_249_object); // 0x15e4 Call
	if(var_248_bool == 0) goto Label_5608; // 0x15e6 JumpB
	var_241_bool = 1; // 0x15e7 MovB
	
Label_5608:
	if(var_241_bool == 0) goto Label_5614; // 0x15e8 JumpB
	var_254_int = 12516; // 0x15e9 PushI
	var_255_int = 13688; // 0x15ea PushI
	var_256_int = 13686; // 0x15eb PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x15ec TObjFunc
	
Label_5614:
	var_257_bool = 0; // 0x15ee PushV
	var_257_bool = 0; // 0x15ef MovB
	var_258_bool = 0; // 0x15f0 PushV
	var_258_bool = 0; // 0x15f1 MovB
	var_259_bool = 0; var_260_object = Obj(); // 0x15f2 PushV
	var_260_object = var_1_object; // 0x15f3 MovT
	func_8121(var_260_object); // 0x15f4 Call
	if(var_259_bool == 0) goto Label_5629; // 0x15f6 JumpB
	var_265_bool = 0; var_266_object = Obj(); // 0x15f7 PushV
	var_266_object = var_1_object; // 0x15f8 MovT
	func_8217(var_266_object); // 0x15f9 Call
	if(var_265_bool == 0) goto Label_5629; // 0x15fb JumpB
	var_258_bool = 1; // 0x15fc MovB
	
Label_5629:
	if(var_258_bool == 0) goto Label_5637; // 0x15fd JumpB
	var_271_bool = 0; var_272_object = Obj(); // 0x15fe PushV
	var_272_object = var_1_object; // 0x15ff MovT
	func_8205(var_272_object); // 0x1600 Call
	var_273_bool = var_271_bool == 0; // 0x1602 Not
	if(var_273_bool == 0) goto Label_5637; // 0x1603 JumpB
	var_257_bool = 1; // 0x1604 MovB
	
Label_5637:
	if(var_257_bool == 0) goto Label_5643; // 0x1605 JumpB
	var_274_int = 12526; // 0x1606 PushI
	var_275_int = 13697; // 0x1607 PushI
	var_276_int = 13696; // 0x1608 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x1609 TObjFunc
	
Label_5643:
	var_277_int = 12517; // 0x160b PushI
	var_278_int = -1; // 0x160c PushI
	var_279_int = 13687; // 0x160d PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x160e TObjFunc
	return 0; // 0x1610 Return
	
Label_5649:
	var_280_int = 13697; // 0x1611 PushI
	var_281_bool = var_40_string == var_280_int; // 0x1612 Eq
	if(var_281_bool == 0) goto Label_5667; // 0x1613 JumpB
	var_282_string = ""; // 0x1614 PushV
	var_282_string = "Neutral"; // 0x1615 MovS
	func_5451(var_41_bool, var_282_string); // 0x1616 Call
	var_283_int = 12527; // 0x1618 PushI
	SetMessage(var_283_int); // 0x1619 TObjFunc
	ClearReplies(); // 0x161b TObjFunc
	var_284_int = 12528; // 0x161d PushI
	var_285_int = -1; // 0x161e PushI
	var_286_int = 13698; // 0x161f PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x1620 TObjFunc
	return 0; // 0x1622 Return
	
Label_5667:
	var_287_int = 13688; // 0x1623 PushI
	var_288_bool = var_40_string == var_287_int; // 0x1624 Eq
	if(var_288_bool == 0) goto Label_5685; // 0x1625 JumpB
	var_289_string = ""; // 0x1626 PushV
	var_289_string = "Neutral"; // 0x1627 MovS
	func_5451(var_41_bool, var_289_string); // 0x1628 Call
	var_290_int = 12518; // 0x162a PushI
	SetMessage(var_290_int); // 0x162b TObjFunc
	ClearReplies(); // 0x162d TObjFunc
	var_291_int = 12519; // 0x162f PushI
	var_292_int = -1; // 0x1630 PushI
	var_293_int = 13689; // 0x1631 PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x1632 TObjFunc
	return 0; // 0x1634 Return
	
Label_5685:
	var_294_int = 13691; // 0x1635 PushI
	var_295_bool = var_40_string == var_294_int; // 0x1636 Eq
	if(var_295_bool == 0) goto Label_5703; // 0x1637 JumpB
	var_296_string = ""; // 0x1638 PushV
	var_296_string = "Neutral"; // 0x1639 MovS
	func_5451(var_41_bool, var_296_string); // 0x163a Call
	var_297_int = 12521; // 0x163c PushI
	SetMessage(var_297_int); // 0x163d TObjFunc
	ClearReplies(); // 0x163f TObjFunc
	var_298_int = 12522; // 0x1641 PushI
	var_299_int = -1; // 0x1642 PushI
	var_300_int = 13692; // 0x1643 PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x1644 TObjFunc
	return 0; // 0x1646 Return
	
Label_5703:
	var_301_int = 13333; // 0x1647 PushI
	var_302_bool = var_40_string == var_301_int; // 0x1648 Eq
	if(var_302_bool == 0) goto Label_5721; // 0x1649 JumpB
	var_303_string = ""; // 0x164a PushV
	var_303_string = "Neutral"; // 0x164b MovS
	func_5451(var_41_bool, var_303_string); // 0x164c Call
	var_304_int = 12107; // 0x164e PushI
	SetMessage(var_304_int); // 0x164f TObjFunc
	ClearReplies(); // 0x1651 TObjFunc
	var_305_int = 12493; // 0x1653 PushI
	var_306_int = 13334; // 0x1654 PushI
	var_307_int = 13662; // 0x1655 PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0x1656 TObjFunc
	return 0; // 0x1658 Return
	
Label_5721:
	var_308_int = 13334; // 0x1659 PushI
	var_309_bool = var_40_string == var_308_int; // 0x165a Eq
	if(var_309_bool == 0) goto Label_5739; // 0x165b JumpB
	var_310_string = ""; // 0x165c PushV
	var_310_string = "Neutral"; // 0x165d MovS
	func_5451(var_41_bool, var_310_string); // 0x165e Call
	var_311_int = 12108; // 0x1660 PushI
	SetMessage(var_311_int); // 0x1661 TObjFunc
	ClearReplies(); // 0x1663 TObjFunc
	var_312_int = 12109; // 0x1665 PushI
	var_313_int = 13336; // 0x1666 PushI
	var_314_int = 13335; // 0x1667 PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0x1668 TObjFunc
	return 0; // 0x166a Return
	
Label_5739:
	var_315_int = 13336; // 0x166b PushI
	var_316_bool = var_40_string == var_315_int; // 0x166c Eq
	if(var_316_bool == 0) goto Label_5757; // 0x166d JumpB
	var_317_string = ""; // 0x166e PushV
	var_317_string = "Neutral"; // 0x166f MovS
	func_5451(var_41_bool, var_317_string); // 0x1670 Call
	var_318_int = 12110; // 0x1672 PushI
	SetMessage(var_318_int); // 0x1673 TObjFunc
	ClearReplies(); // 0x1675 TObjFunc
	var_319_int = 12111; // 0x1677 PushI
	var_320_int = 13338; // 0x1678 PushI
	var_321_int = 13337; // 0x1679 PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0x167a TObjFunc
	return 0; // 0x167c Return
	
Label_5757:
	var_322_int = 13338; // 0x167d PushI
	var_323_bool = var_40_string == var_322_int; // 0x167e Eq
	if(var_323_bool == 0) goto Label_5775; // 0x167f JumpB
	var_324_string = ""; // 0x1680 PushV
	var_324_string = "Neutral"; // 0x1681 MovS
	func_5451(var_41_bool, var_324_string); // 0x1682 Call
	var_325_int = 12112; // 0x1684 PushI
	SetMessage(var_325_int); // 0x1685 TObjFunc
	ClearReplies(); // 0x1687 TObjFunc
	var_326_int = 12494; // 0x1689 PushI
	var_327_int = 13665; // 0x168a PushI
	var_328_int = 13664; // 0x168b PushI
	AddReply(var_326_int, var_327_int, var_328_int); // 0x168c TObjFunc
	return 0; // 0x168e Return
	
Label_5775:
	var_329_int = 13665; // 0x168f PushI
	var_330_bool = var_40_string == var_329_int; // 0x1690 Eq
	if(var_330_bool == 0) goto Label_5793; // 0x1691 JumpB
	var_331_string = ""; // 0x1692 PushV
	var_331_string = "Neutral"; // 0x1693 MovS
	func_5451(var_41_bool, var_331_string); // 0x1694 Call
	var_332_int = 12495; // 0x1696 PushI
	SetMessage(var_332_int); // 0x1697 TObjFunc
	ClearReplies(); // 0x1699 TObjFunc
	var_333_int = 12496; // 0x169b PushI
	var_334_int = 13667; // 0x169c PushI
	var_335_int = 13666; // 0x169d PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0x169e TObjFunc
	return 0; // 0x16a0 Return
	
Label_5793:
	var_336_int = 13667; // 0x16a1 PushI
	var_337_bool = var_40_string == var_336_int; // 0x16a2 Eq
	if(var_337_bool == 0) goto Label_5811; // 0x16a3 JumpB
	var_338_string = ""; // 0x16a4 PushV
	var_338_string = "Neutral"; // 0x16a5 MovS
	func_5451(var_41_bool, var_338_string); // 0x16a6 Call
	var_339_int = 12497; // 0x16a8 PushI
	SetMessage(var_339_int); // 0x16a9 TObjFunc
	ClearReplies(); // 0x16ab TObjFunc
	var_340_int = 12498; // 0x16ad PushI
	var_341_int = 13669; // 0x16ae PushI
	var_342_int = 13668; // 0x16af PushI
	AddReply(var_340_int, var_341_int, var_342_int); // 0x16b0 TObjFunc
	return 0; // 0x16b2 Return
	
Label_5811:
	var_343_int = 13669; // 0x16b3 PushI
	var_344_bool = var_40_string == var_343_int; // 0x16b4 Eq
	if(var_344_bool == 0) goto Label_5834; // 0x16b5 JumpB
	var_345_string = ""; // 0x16b6 PushV
	var_345_string = "Neutral"; // 0x16b7 MovS
	func_5451(var_41_bool, var_345_string); // 0x16b8 Call
	var_346_int = 12499; // 0x16ba PushI
	SetMessage(var_346_int); // 0x16bb TObjFunc
	ClearReplies(); // 0x16bd TObjFunc
	var_347_int = 12500; // 0x16bf PushI
	var_348_int = -1; // 0x16c0 PushI
	var_349_int = 13670; // 0x16c1 PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0x16c2 TObjFunc
	var_350_int = 12501; // 0x16c4 PushI
	var_351_int = -1; // 0x16c5 PushI
	var_352_int = 13671; // 0x16c6 PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0x16c7 TObjFunc
	return 0; // 0x16c9 Return
	
Label_5834:
	var_3_string = 1; // 0x16ca TMovB
	var_353_bool = 0; // 0x16cb PushV
	func_7232(var_353_bool); // 0x16cc Call
	if(var_353_bool == 0) goto Label_5842; // 0x16ce JumpB
	lshStopAnimation(); // 0x16cf Func
	goto Label_5844; // 0x16d1 Jump
	
Label_5844:
	return 0; // 0x16d4 Return
	
Label_5842:
	StopAnimation(); // 0x16d2 Func
	
Label_5846:
	return 0; // 0x16d6 Return
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int)
{
	var_42_int = 1; // 0x17d8 PushI
	if(var_42_int == 0) goto Label_7040; // 0x17d9 JumpB
	func_7143(); // 0x17db Call
	var_44_int = 14856; // 0x17dd PushI
	var_45_bool = var_41_int == var_44_int; // 0x17de Eq
	if(var_45_bool == 0) goto Label_6122; // 0x17df JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0x17e0 PushV
	var_46_object = var_1_object; // 0x17e1 MovT
	var_47_object = var_0_object; // 0x17e2 MovT
	func_7685(); // 0x17e3 Call
	var_50_object = Obj(); var_51_object = Obj(); // 0x17e5 PushV
	var_50_object = var_1_object; // 0x17e6 MovT
	var_51_object = var_0_object; // 0x17e7 MovT
	func_7819(); // 0x17e8 Call
	
Label_6122:
	var_77_int = 14857; // 0x17ea PushI
	var_78_bool = var_41_int == var_77_int; // 0x17eb Eq
	if(var_78_bool == 0) goto Label_6135; // 0x17ec JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0x17ed PushV
	var_79_object = var_1_object; // 0x17ee MovT
	var_80_object = var_0_object; // 0x17ef MovT
	func_7685(); // 0x17f0 Call
	var_81_object = Obj(); var_82_object = Obj(); // 0x17f2 PushV
	var_81_object = var_1_object; // 0x17f3 MovT
	var_82_object = var_0_object; // 0x17f4 MovT
	func_7819(); // 0x17f5 Call
	
Label_6135:
	var_83_int = 14858; // 0x17f7 PushI
	var_84_bool = var_41_int == var_83_int; // 0x17f8 Eq
	if(var_84_bool == 0) goto Label_6148; // 0x17f9 JumpB
	var_85_object = Obj(); var_86_object = Obj(); // 0x17fa PushV
	var_85_object = var_1_object; // 0x17fb MovT
	var_86_object = var_0_object; // 0x17fc MovT
	func_7685(); // 0x17fd Call
	var_87_object = Obj(); var_88_object = Obj(); // 0x17ff PushV
	var_87_object = var_1_object; // 0x1800 MovT
	var_88_object = var_0_object; // 0x1801 MovT
	func_7819(); // 0x1802 Call
	
Label_6148:
	var_89_int = 14839; // 0x1804 PushI
	var_90_bool = var_41_int == var_89_int; // 0x1805 Eq
	if(var_90_bool == 0) goto Label_6156; // 0x1806 JumpB
	var_91_object = Obj(); var_92_object = Obj(); // 0x1807 PushV
	var_91_object = var_1_object; // 0x1808 MovT
	var_92_object = var_0_object; // 0x1809 MovT
	func_7691(); // 0x180a Call
	
Label_6156:
	var_95_int = 14860; // 0x180c PushI
	var_96_bool = var_41_int == var_95_int; // 0x180d Eq
	if(var_96_bool == 0) goto Label_6164; // 0x180e JumpB
	var_97_object = Obj(); var_98_object = Obj(); // 0x180f PushV
	var_97_object = var_1_object; // 0x1810 MovT
	var_98_object = var_0_object; // 0x1811 MovT
	func_7697(); // 0x1812 Call
	
Label_6164:
	var_99_int = 14862; // 0x1814 PushI
	var_100_bool = var_41_int == var_99_int; // 0x1815 Eq
	if(var_100_bool == 0) goto Label_6172; // 0x1816 JumpB
	var_101_object = Obj(); var_102_object = Obj(); // 0x1817 PushV
	var_101_object = var_1_object; // 0x1818 MovT
	var_102_object = var_0_object; // 0x1819 MovT
	func_7699(); // 0x181a Call
	
Label_6172:
	var_105_int = 14894; // 0x181c PushI
	var_106_bool = var_41_int == var_105_int; // 0x181d Eq
	if(var_106_bool == 0) goto Label_6180; // 0x181e JumpB
	var_107_object = Obj(); var_108_object = Obj(); // 0x181f PushV
	var_107_object = var_1_object; // 0x1820 MovT
	var_108_object = var_0_object; // 0x1821 MovT
	func_7705(); // 0x1822 Call
	
Label_6180:
	var_111_int = 14873; // 0x1824 PushI
	var_112_bool = var_41_int == var_111_int; // 0x1825 Eq
	if(var_112_bool == 0) goto Label_6188; // 0x1826 JumpB
	var_113_object = Obj(); var_114_object = Obj(); // 0x1827 PushV
	var_113_object = var_1_object; // 0x1828 MovT
	var_114_object = var_0_object; // 0x1829 MovT
	func_7717(); // 0x182a Call
	
Label_6188:
	var_117_int = 14867; // 0x182c PushI
	var_118_bool = var_41_int == var_117_int; // 0x182d Eq
	if(var_118_bool == 0) goto Label_6196; // 0x182e JumpB
	var_119_object = Obj(); var_120_object = Obj(); // 0x182f PushV
	var_119_object = var_1_object; // 0x1830 MovT
	var_120_object = var_0_object; // 0x1831 MovT
	func_7711(); // 0x1832 Call
	
Label_6196:
	var_123_int = 13574; // 0x1834 PushI
	var_124_bool = var_40_int == var_123_int; // 0x1835 Eq
	if(var_124_bool == 0) goto Label_6338; // 0x1836 JumpB
	var_125_string = ""; // 0x1837 PushV
	var_125_string = "Neutral"; // 0x1838 MovS
	func_6087(var_41_int, var_125_string); // 0x1839 Call
	var_140_int = 12410; // 0x183b PushI
	SetMessage(var_140_int); // 0x183c TObjFunc
	ClearReplies(); // 0x183e TObjFunc
	var_141_bool = 0; // 0x1840 PushV
	var_141_bool = 0; // 0x1841 MovB
	var_142_bool = 0; // 0x1842 PushV
	var_142_bool = 0; // 0x1843 MovB
	var_143_bool = 0; var_144_object = Obj(); // 0x1844 PushV
	var_144_object = var_1_object; // 0x1845 MovT
	func_8229(var_144_object); // 0x1846 Call
	if(var_143_bool == 0) goto Label_6223; // 0x1848 JumpB
	var_151_bool = 0; var_152_object = Obj(); // 0x1849 PushV
	var_152_object = var_1_object; // 0x184a MovT
	func_8253(var_152_object); // 0x184b Call
	if(var_151_bool == 0) goto Label_6223; // 0x184d JumpB
	var_142_bool = 1; // 0x184e MovB
	
Label_6223:
	if(var_142_bool == 0) goto Label_6231; // 0x184f JumpB
	var_157_bool = 0; var_158_object = Obj(); // 0x1850 PushV
	var_158_object = var_1_object; // 0x1851 MovT
	func_8241(var_158_object); // 0x1852 Call
	var_163_bool = var_157_bool == 0; // 0x1854 Not
	if(var_163_bool == 0) goto Label_6231; // 0x1855 JumpB
	var_141_bool = 1; // 0x1856 MovB
	
Label_6231:
	if(var_141_bool == 0) goto Label_6237; // 0x1857 JumpB
	var_164_int = 12412; // 0x1858 PushI
	var_165_int = 13577; // 0x1859 PushI
	var_166_int = 13576; // 0x185a PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x185b TObjFunc
	
Label_6237:
	var_167_bool = 0; // 0x185d PushV
	var_167_bool = 0; // 0x185e MovB
	var_168_bool = 0; var_169_object = Obj(); // 0x185f PushV
	var_169_object = var_1_object; // 0x1860 MovT
	func_8241(var_169_object); // 0x1861 Call
	if(var_168_bool == 0) goto Label_6250; // 0x1863 JumpB
	var_170_bool = 0; var_171_object = Obj(); // 0x1864 PushV
	var_171_object = var_1_object; // 0x1865 MovT
	func_8265(var_171_object); // 0x1866 Call
	if(var_170_bool == 0) goto Label_6250; // 0x1868 JumpB
	var_167_bool = 1; // 0x1869 MovB
	
Label_6250:
	if(var_167_bool == 0) goto Label_6256; // 0x186a JumpB
	var_176_int = 13588; // 0x186b PushI
	var_177_int = 14840; // 0x186c PushI
	var_178_int = 14839; // 0x186d PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x186e TObjFunc
	
Label_6256:
	var_179_bool = 0; // 0x1870 PushV
	var_179_bool = 0; // 0x1871 MovB
	var_180_bool = 0; // 0x1872 PushV
	var_180_bool = 0; // 0x1873 MovB
	var_181_bool = 0; var_182_object = Obj(); // 0x1874 PushV
	var_182_object = var_1_object; // 0x1875 MovT
	func_8277(var_182_object); // 0x1876 Call
	if(var_181_bool == 0) goto Label_6271; // 0x1878 JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x1879 PushV
	var_188_object = var_1_object; // 0x187a MovT
	func_8241(var_188_object); // 0x187b Call
	if(var_187_bool == 0) goto Label_6271; // 0x187d JumpB
	var_180_bool = 1; // 0x187e MovB
	
Label_6271:
	if(var_180_bool == 0) goto Label_6278; // 0x187f JumpB
	var_189_bool = 0; var_190_object = Obj(); // 0x1880 PushV
	var_190_object = var_1_object; // 0x1881 MovT
	func_8289(var_190_object); // 0x1882 Call
	if(var_189_bool == 0) goto Label_6278; // 0x1884 JumpB
	var_179_bool = 1; // 0x1885 MovB
	
Label_6278:
	if(var_179_bool == 0) goto Label_6284; // 0x1886 JumpB
	var_195_int = 13607; // 0x1887 PushI
	var_196_int = 14868; // 0x1888 PushI
	var_197_int = 14862; // 0x1889 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x188a TObjFunc
	
Label_6284:
	var_198_bool = 0; // 0x188c PushV
	var_198_bool = 0; // 0x188d MovB
	var_199_bool = 0; var_200_object = Obj(); // 0x188e PushV
	var_200_object = var_1_object; // 0x188f MovT
	func_8277(var_200_object); // 0x1890 Call
	if(var_199_bool == 0) goto Label_6297; // 0x1892 JumpB
	var_201_bool = 0; var_202_object = Obj(); // 0x1893 PushV
	var_202_object = var_1_object; // 0x1894 MovT
	func_8313(var_202_object); // 0x1895 Call
	if(var_201_bool == 0) goto Label_6297; // 0x1897 JumpB
	var_198_bool = 1; // 0x1898 MovB
	
Label_6297:
	if(var_198_bool == 0) goto Label_6303; // 0x1899 JumpB
	var_207_int = 13618; // 0x189a PushI
	var_208_int = 14874; // 0x189b PushI
	var_209_int = 14873; // 0x189c PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x189d TObjFunc
	
Label_6303:
	var_210_bool = 0; // 0x189f PushV
	var_210_bool = 0; // 0x18a0 MovB
	var_211_bool = 0; // 0x18a1 PushV
	var_211_bool = 0; // 0x18a2 MovB
	var_212_bool = 0; var_213_object = Obj(); // 0x18a3 PushV
	var_213_object = var_1_object; // 0x18a4 MovT
	func_8241(var_213_object); // 0x18a5 Call
	var_214_bool = var_212_bool == 0; // 0x18a7 Not
	if(var_214_bool == 0) goto Label_6319; // 0x18a8 JumpB
	var_215_bool = 0; var_216_object = Obj(); // 0x18a9 PushV
	var_216_object = var_1_object; // 0x18aa MovT
	func_8229(var_216_object); // 0x18ab Call
	if(var_215_bool == 0) goto Label_6319; // 0x18ad JumpB
	var_211_bool = 1; // 0x18ae MovB
	
Label_6319:
	if(var_211_bool == 0) goto Label_6326; // 0x18af JumpB
	var_217_bool = 0; var_218_object = Obj(); // 0x18b0 PushV
	var_218_object = var_1_object; // 0x18b1 MovT
	func_8301(var_218_object); // 0x18b2 Call
	if(var_217_bool == 0) goto Label_6326; // 0x18b4 JumpB
	var_210_bool = 1; // 0x18b5 MovB
	
Label_6326:
	if(var_210_bool == 0) goto Label_6332; // 0x18b6 JumpB
	var_223_int = 13612; // 0x18b7 PushI
	var_224_int = 14863; // 0x18b8 PushI
	var_225_int = 14867; // 0x18b9 PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x18ba TObjFunc
	
Label_6332:
	var_226_int = 12411; // 0x18bc PushI
	var_227_int = -1; // 0x18bd PushI
	var_228_int = 13575; // 0x18be PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x18bf TObjFunc
	return 0; // 0x18c1 Return
	
Label_6338:
	var_229_int = 14863; // 0x18c2 PushI
	var_230_bool = var_40_int == var_229_int; // 0x18c3 Eq
	if(var_230_bool == 0) goto Label_6356; // 0x18c4 JumpB
	var_231_string = ""; // 0x18c5 PushV
	var_231_string = "Neutral"; // 0x18c6 MovS
	func_6087(var_41_int, var_231_string); // 0x18c7 Call
	var_232_int = 13608; // 0x18c9 PushI
	SetMessage(var_232_int); // 0x18ca TObjFunc
	ClearReplies(); // 0x18cc TObjFunc
	var_233_int = 13609; // 0x18ce PushI
	var_234_int = 14865; // 0x18cf PushI
	var_235_int = 14864; // 0x18d0 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x18d1 TObjFunc
	return 0; // 0x18d3 Return
	
Label_6356:
	var_236_int = 14865; // 0x18d4 PushI
	var_237_bool = var_40_int == var_236_int; // 0x18d5 Eq
	if(var_237_bool == 0) goto Label_6374; // 0x18d6 JumpB
	var_238_string = ""; // 0x18d7 PushV
	var_238_string = "Neutral"; // 0x18d8 MovS
	func_6087(var_41_int, var_238_string); // 0x18d9 Call
	var_239_int = 13610; // 0x18db PushI
	SetMessage(var_239_int); // 0x18dc TObjFunc
	ClearReplies(); // 0x18de TObjFunc
	var_240_int = 13611; // 0x18e0 PushI
	var_241_int = 14869; // 0x18e1 PushI
	var_242_int = 14866; // 0x18e2 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x18e3 TObjFunc
	return 0; // 0x18e5 Return
	
Label_6374:
	var_243_int = 14869; // 0x18e6 PushI
	var_244_bool = var_40_int == var_243_int; // 0x18e7 Eq
	if(var_244_bool == 0) goto Label_6392; // 0x18e8 JumpB
	var_245_string = ""; // 0x18e9 PushV
	var_245_string = "Neutral"; // 0x18ea MovS
	func_6087(var_41_int, var_245_string); // 0x18eb Call
	var_246_int = 13614; // 0x18ed PushI
	SetMessage(var_246_int); // 0x18ee TObjFunc
	ClearReplies(); // 0x18f0 TObjFunc
	var_247_int = 13615; // 0x18f2 PushI
	var_248_int = 14871; // 0x18f3 PushI
	var_249_int = 14870; // 0x18f4 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x18f5 TObjFunc
	return 0; // 0x18f7 Return
	
Label_6392:
	var_250_int = 14871; // 0x18f8 PushI
	var_251_bool = var_40_int == var_250_int; // 0x18f9 Eq
	if(var_251_bool == 0) goto Label_6410; // 0x18fa JumpB
	var_252_string = ""; // 0x18fb PushV
	var_252_string = "Neutral"; // 0x18fc MovS
	func_6087(var_41_int, var_252_string); // 0x18fd Call
	var_253_int = 13616; // 0x18ff PushI
	SetMessage(var_253_int); // 0x1900 TObjFunc
	ClearReplies(); // 0x1902 TObjFunc
	var_254_int = 13617; // 0x1904 PushI
	var_255_int = -1; // 0x1905 PushI
	var_256_int = 14872; // 0x1906 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x1907 TObjFunc
	return 0; // 0x1909 Return
	
Label_6410:
	var_257_int = 14874; // 0x190a PushI
	var_258_bool = var_40_int == var_257_int; // 0x190b Eq
	if(var_258_bool == 0) goto Label_6428; // 0x190c JumpB
	var_259_string = ""; // 0x190d PushV
	var_259_string = "Neutral"; // 0x190e MovS
	func_6087(var_41_int, var_259_string); // 0x190f Call
	var_260_int = 13619; // 0x1911 PushI
	SetMessage(var_260_int); // 0x1912 TObjFunc
	ClearReplies(); // 0x1914 TObjFunc
	var_261_int = 13620; // 0x1916 PushI
	var_262_int = 14876; // 0x1917 PushI
	var_263_int = 14875; // 0x1918 PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x1919 TObjFunc
	return 0; // 0x191b Return
	
Label_6428:
	var_264_int = 14876; // 0x191c PushI
	var_265_bool = var_40_int == var_264_int; // 0x191d Eq
	if(var_265_bool == 0) goto Label_6451; // 0x191e JumpB
	var_266_string = ""; // 0x191f PushV
	var_266_string = "Neutral"; // 0x1920 MovS
	func_6087(var_41_int, var_266_string); // 0x1921 Call
	var_267_int = 13621; // 0x1923 PushI
	SetMessage(var_267_int); // 0x1924 TObjFunc
	ClearReplies(); // 0x1926 TObjFunc
	var_268_int = 13623; // 0x1928 PushI
	var_269_int = 14879; // 0x1929 PushI
	var_270_int = 14878; // 0x192a PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x192b TObjFunc
	var_271_int = 13622; // 0x192d PushI
	var_272_int = -1; // 0x192e PushI
	var_273_int = 14877; // 0x192f PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x1930 TObjFunc
	return 0; // 0x1932 Return
	
Label_6451:
	var_274_int = 14879; // 0x1933 PushI
	var_275_bool = var_40_int == var_274_int; // 0x1934 Eq
	if(var_275_bool == 0) goto Label_6474; // 0x1935 JumpB
	var_276_string = ""; // 0x1936 PushV
	var_276_string = "Neutral"; // 0x1937 MovS
	func_6087(var_41_int, var_276_string); // 0x1938 Call
	var_277_int = 13624; // 0x193a PushI
	SetMessage(var_277_int); // 0x193b TObjFunc
	ClearReplies(); // 0x193d TObjFunc
	var_278_int = 13626; // 0x193f PushI
	var_279_int = 14882; // 0x1940 PushI
	var_280_int = 14881; // 0x1941 PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x1942 TObjFunc
	var_281_int = 13625; // 0x1944 PushI
	var_282_int = -1; // 0x1945 PushI
	var_283_int = 14880; // 0x1946 PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x1947 TObjFunc
	return 0; // 0x1949 Return
	
Label_6474:
	var_284_int = 14882; // 0x194a PushI
	var_285_bool = var_40_int == var_284_int; // 0x194b Eq
	if(var_285_bool == 0) goto Label_6492; // 0x194c JumpB
	var_286_string = ""; // 0x194d PushV
	var_286_string = "Neutral"; // 0x194e MovS
	func_6087(var_41_int, var_286_string); // 0x194f Call
	var_287_int = 13627; // 0x1951 PushI
	SetMessage(var_287_int); // 0x1952 TObjFunc
	ClearReplies(); // 0x1954 TObjFunc
	var_288_int = 13628; // 0x1956 PushI
	var_289_int = -1; // 0x1957 PushI
	var_290_int = 14883; // 0x1958 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x1959 TObjFunc
	return 0; // 0x195b Return
	
Label_6492:
	var_291_int = 14868; // 0x195c PushI
	var_292_bool = var_40_int == var_291_int; // 0x195d Eq
	if(var_292_bool == 0) goto Label_6510; // 0x195e JumpB
	var_293_string = ""; // 0x195f PushV
	var_293_string = "Neutral"; // 0x1960 MovS
	func_6087(var_41_int, var_293_string); // 0x1961 Call
	var_294_int = 13613; // 0x1963 PushI
	SetMessage(var_294_int); // 0x1964 TObjFunc
	ClearReplies(); // 0x1966 TObjFunc
	var_295_int = 13629; // 0x1968 PushI
	var_296_int = 14885; // 0x1969 PushI
	var_297_int = 14884; // 0x196a PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x196b TObjFunc
	return 0; // 0x196d Return
	
Label_6510:
	var_298_int = 14885; // 0x196e PushI
	var_299_bool = var_40_int == var_298_int; // 0x196f Eq
	if(var_299_bool == 0) goto Label_6533; // 0x1970 JumpB
	var_300_string = ""; // 0x1971 PushV
	var_300_string = "Neutral"; // 0x1972 MovS
	func_6087(var_41_int, var_300_string); // 0x1973 Call
	var_301_int = 13630; // 0x1975 PushI
	SetMessage(var_301_int); // 0x1976 TObjFunc
	ClearReplies(); // 0x1978 TObjFunc
	var_302_int = 13631; // 0x197a PushI
	var_303_int = 14889; // 0x197b PushI
	var_304_int = 14886; // 0x197c PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0x197d TObjFunc
	var_305_int = 13632; // 0x197f PushI
	var_306_int = 14888; // 0x1980 PushI
	var_307_int = 14887; // 0x1981 PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0x1982 TObjFunc
	return 0; // 0x1984 Return
	
Label_6533:
	var_308_int = 14888; // 0x1985 PushI
	var_309_bool = var_40_int == var_308_int; // 0x1986 Eq
	if(var_309_bool == 0) goto Label_6551; // 0x1987 JumpB
	var_310_string = ""; // 0x1988 PushV
	var_310_string = "Neutral"; // 0x1989 MovS
	func_6087(var_41_int, var_310_string); // 0x198a Call
	var_311_int = 13633; // 0x198c PushI
	SetMessage(var_311_int); // 0x198d TObjFunc
	ClearReplies(); // 0x198f TObjFunc
	var_312_int = 13636; // 0x1991 PushI
	var_313_int = 14889; // 0x1992 PushI
	var_314_int = 14891; // 0x1993 PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0x1994 TObjFunc
	return 0; // 0x1996 Return
	
Label_6551:
	var_315_int = 14889; // 0x1997 PushI
	var_316_bool = var_40_int == var_315_int; // 0x1998 Eq
	if(var_316_bool == 0) goto Label_6569; // 0x1999 JumpB
	var_317_string = ""; // 0x199a PushV
	var_317_string = "Neutral"; // 0x199b MovS
	func_6087(var_41_int, var_317_string); // 0x199c Call
	var_318_int = 13634; // 0x199e PushI
	SetMessage(var_318_int); // 0x199f TObjFunc
	ClearReplies(); // 0x19a1 TObjFunc
	var_319_int = 13635; // 0x19a3 PushI
	var_320_int = 14893; // 0x19a4 PushI
	var_321_int = 14890; // 0x19a5 PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0x19a6 TObjFunc
	return 0; // 0x19a8 Return
	
Label_6569:
	var_322_int = 14893; // 0x19a9 PushI
	var_323_bool = var_40_int == var_322_int; // 0x19aa Eq
	if(var_323_bool == 0) goto Label_6587; // 0x19ab JumpB
	var_324_string = ""; // 0x19ac PushV
	var_324_string = "Neutral"; // 0x19ad MovS
	func_6087(var_41_int, var_324_string); // 0x19ae Call
	var_325_int = 13637; // 0x19b0 PushI
	SetMessage(var_325_int); // 0x19b1 TObjFunc
	ClearReplies(); // 0x19b3 TObjFunc
	var_326_int = 13638; // 0x19b5 PushI
	var_327_int = -1; // 0x19b6 PushI
	var_328_int = 14894; // 0x19b7 PushI
	AddReply(var_326_int, var_327_int, var_328_int); // 0x19b8 TObjFunc
	return 0; // 0x19ba Return
	
Label_6587:
	var_329_int = 14840; // 0x19bb PushI
	var_330_bool = var_40_int == var_329_int; // 0x19bc Eq
	if(var_330_bool == 0) goto Label_6610; // 0x19bd JumpB
	var_331_string = ""; // 0x19be PushV
	var_331_string = "Neutral"; // 0x19bf MovS
	func_6087(var_41_int, var_331_string); // 0x19c0 Call
	var_332_int = 13589; // 0x19c2 PushI
	SetMessage(var_332_int); // 0x19c3 TObjFunc
	ClearReplies(); // 0x19c5 TObjFunc
	var_333_int = 13591; // 0x19c7 PushI
	var_334_int = 14843; // 0x19c8 PushI
	var_335_int = 14842; // 0x19c9 PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0x19ca TObjFunc
	var_336_int = 13590; // 0x19cc PushI
	var_337_int = 14845; // 0x19cd PushI
	var_338_int = 14841; // 0x19ce PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0x19cf TObjFunc
	return 0; // 0x19d1 Return
	
Label_6610:
	var_339_int = 14845; // 0x19d2 PushI
	var_340_bool = var_40_int == var_339_int; // 0x19d3 Eq
	if(var_340_bool == 0) goto Label_6628; // 0x19d4 JumpB
	var_341_string = ""; // 0x19d5 PushV
	var_341_string = "Neutral"; // 0x19d6 MovS
	func_6087(var_41_int, var_341_string); // 0x19d7 Call
	var_342_int = 13594; // 0x19d9 PushI
	SetMessage(var_342_int); // 0x19da TObjFunc
	ClearReplies(); // 0x19dc TObjFunc
	var_343_int = 13595; // 0x19de PushI
	var_344_int = 14847; // 0x19df PushI
	var_345_int = 14846; // 0x19e0 PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0x19e1 TObjFunc
	return 0; // 0x19e3 Return
	
Label_6628:
	var_346_int = 14847; // 0x19e4 PushI
	var_347_bool = var_40_int == var_346_int; // 0x19e5 Eq
	if(var_347_bool == 0) goto Label_6646; // 0x19e6 JumpB
	var_348_string = ""; // 0x19e7 PushV
	var_348_string = "Neutral"; // 0x19e8 MovS
	func_6087(var_41_int, var_348_string); // 0x19e9 Call
	var_349_int = 13596; // 0x19eb PushI
	SetMessage(var_349_int); // 0x19ec TObjFunc
	ClearReplies(); // 0x19ee TObjFunc
	var_350_int = 13597; // 0x19f0 PushI
	var_351_int = 14843; // 0x19f1 PushI
	var_352_int = 14848; // 0x19f2 PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0x19f3 TObjFunc
	return 0; // 0x19f5 Return
	
Label_6646:
	var_353_int = 14843; // 0x19f6 PushI
	var_354_bool = var_40_int == var_353_int; // 0x19f7 Eq
	if(var_354_bool == 0) goto Label_6669; // 0x19f8 JumpB
	var_355_string = ""; // 0x19f9 PushV
	var_355_string = "Neutral"; // 0x19fa MovS
	func_6087(var_41_int, var_355_string); // 0x19fb Call
	var_356_int = 13592; // 0x19fd PushI
	SetMessage(var_356_int); // 0x19fe TObjFunc
	ClearReplies(); // 0x1a00 TObjFunc
	var_357_int = 13598; // 0x1a02 PushI
	var_358_int = 14824; // 0x1a03 PushI
	var_359_int = 14850; // 0x1a04 PushI
	AddReply(var_357_int, var_358_int, var_359_int); // 0x1a05 TObjFunc
	var_360_int = 13593; // 0x1a07 PushI
	var_361_int = 13583; // 0x1a08 PushI
	var_362_int = 14844; // 0x1a09 PushI
	AddReply(var_360_int, var_361_int, var_362_int); // 0x1a0a TObjFunc
	return 0; // 0x1a0c Return
	
Label_6669:
	var_363_int = 13583; // 0x1a0d PushI
	var_364_bool = var_40_int == var_363_int; // 0x1a0e Eq
	if(var_364_bool == 0) goto Label_6687; // 0x1a0f JumpB
	var_365_string = ""; // 0x1a10 PushV
	var_365_string = "Neutral"; // 0x1a11 MovS
	func_6087(var_41_int, var_365_string); // 0x1a12 Call
	var_366_int = 12419; // 0x1a14 PushI
	SetMessage(var_366_int); // 0x1a15 TObjFunc
	ClearReplies(); // 0x1a17 TObjFunc
	var_367_int = 12423; // 0x1a19 PushI
	var_368_int = 13588; // 0x1a1a PushI
	var_369_int = 13587; // 0x1a1b PushI
	AddReply(var_367_int, var_368_int, var_369_int); // 0x1a1c TObjFunc
	return 0; // 0x1a1e Return
	
Label_6687:
	var_370_int = 13588; // 0x1a1f PushI
	var_371_bool = var_40_int == var_370_int; // 0x1a20 Eq
	if(var_371_bool == 0) goto Label_6710; // 0x1a21 JumpB
	var_372_string = ""; // 0x1a22 PushV
	var_372_string = "Neutral"; // 0x1a23 MovS
	func_6087(var_41_int, var_372_string); // 0x1a24 Call
	var_373_int = 12424; // 0x1a26 PushI
	SetMessage(var_373_int); // 0x1a27 TObjFunc
	ClearReplies(); // 0x1a29 TObjFunc
	var_374_int = 12425; // 0x1a2b PushI
	var_375_int = 13594; // 0x1a2c PushI
	var_376_int = 13590; // 0x1a2d PushI
	AddReply(var_374_int, var_375_int, var_376_int); // 0x1a2e TObjFunc
	var_377_int = 12426; // 0x1a30 PushI
	var_378_int = 13592; // 0x1a31 PushI
	var_379_int = 13591; // 0x1a32 PushI
	AddReply(var_377_int, var_378_int, var_379_int); // 0x1a33 TObjFunc
	return 0; // 0x1a35 Return
	
Label_6710:
	var_380_int = 13592; // 0x1a36 PushI
	var_381_bool = var_40_int == var_380_int; // 0x1a37 Eq
	if(var_381_bool == 0) goto Label_6728; // 0x1a38 JumpB
	var_382_string = ""; // 0x1a39 PushV
	var_382_string = "Neutral"; // 0x1a3a MovS
	func_6087(var_41_int, var_382_string); // 0x1a3b Call
	var_383_int = 12427; // 0x1a3d PushI
	SetMessage(var_383_int); // 0x1a3e TObjFunc
	ClearReplies(); // 0x1a40 TObjFunc
	var_384_int = 12430; // 0x1a42 PushI
	var_385_int = 13594; // 0x1a43 PushI
	var_386_int = 13596; // 0x1a44 PushI
	AddReply(var_384_int, var_385_int, var_386_int); // 0x1a45 TObjFunc
	return 0; // 0x1a47 Return
	
Label_6728:
	var_387_int = 13594; // 0x1a48 PushI
	var_388_bool = var_40_int == var_387_int; // 0x1a49 Eq
	if(var_388_bool == 0) goto Label_6746; // 0x1a4a JumpB
	var_389_string = ""; // 0x1a4b PushV
	var_389_string = "Neutral"; // 0x1a4c MovS
	func_6087(var_41_int, var_389_string); // 0x1a4d Call
	var_390_int = 12428; // 0x1a4f PushI
	SetMessage(var_390_int); // 0x1a50 TObjFunc
	ClearReplies(); // 0x1a52 TObjFunc
	var_391_int = 12429; // 0x1a54 PushI
	var_392_int = 13599; // 0x1a55 PushI
	var_393_int = 13595; // 0x1a56 PushI
	AddReply(var_391_int, var_392_int, var_393_int); // 0x1a57 TObjFunc
	return 0; // 0x1a59 Return
	
Label_6746:
	var_394_int = 13599; // 0x1a5a PushI
	var_395_bool = var_40_int == var_394_int; // 0x1a5b Eq
	if(var_395_bool == 0) goto Label_6764; // 0x1a5c JumpB
	var_396_string = ""; // 0x1a5d PushV
	var_396_string = "Neutral"; // 0x1a5e MovS
	func_6087(var_41_int, var_396_string); // 0x1a5f Call
	var_397_int = 12432; // 0x1a61 PushI
	SetMessage(var_397_int); // 0x1a62 TObjFunc
	ClearReplies(); // 0x1a64 TObjFunc
	var_398_int = 12433; // 0x1a66 PushI
	var_399_int = 13601; // 0x1a67 PushI
	var_400_int = 13600; // 0x1a68 PushI
	AddReply(var_398_int, var_399_int, var_400_int); // 0x1a69 TObjFunc
	return 0; // 0x1a6b Return
	
Label_6764:
	var_401_int = 13601; // 0x1a6c PushI
	var_402_bool = var_40_int == var_401_int; // 0x1a6d Eq
	if(var_402_bool == 0) goto Label_6787; // 0x1a6e JumpB
	var_403_string = ""; // 0x1a6f PushV
	var_403_string = "Neutral"; // 0x1a70 MovS
	func_6087(var_41_int, var_403_string); // 0x1a71 Call
	var_404_int = 12434; // 0x1a73 PushI
	SetMessage(var_404_int); // 0x1a74 TObjFunc
	ClearReplies(); // 0x1a76 TObjFunc
	var_405_int = 13581; // 0x1a78 PushI
	var_406_int = 14826; // 0x1a79 PushI
	var_407_int = 14830; // 0x1a7a PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0x1a7b TObjFunc
	var_408_int = 12435; // 0x1a7d PushI
	var_409_int = 14833; // 0x1a7e PushI
	var_410_int = 13602; // 0x1a7f PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0x1a80 TObjFunc
	return 0; // 0x1a82 Return
	
Label_6787:
	var_411_int = 14824; // 0x1a83 PushI
	var_412_bool = var_40_int == var_411_int; // 0x1a84 Eq
	if(var_412_bool == 0) goto Label_6805; // 0x1a85 JumpB
	var_413_string = ""; // 0x1a86 PushV
	var_413_string = "Neutral"; // 0x1a87 MovS
	func_6087(var_41_int, var_413_string); // 0x1a88 Call
	var_414_int = 13575; // 0x1a8a PushI
	SetMessage(var_414_int); // 0x1a8b TObjFunc
	ClearReplies(); // 0x1a8d TObjFunc
	var_415_int = 13576; // 0x1a8f PushI
	var_416_int = 14826; // 0x1a90 PushI
	var_417_int = 14825; // 0x1a91 PushI
	AddReply(var_415_int, var_416_int, var_417_int); // 0x1a92 TObjFunc
	return 0; // 0x1a94 Return
	
Label_6805:
	var_418_int = 14826; // 0x1a95 PushI
	var_419_bool = var_40_int == var_418_int; // 0x1a96 Eq
	if(var_419_bool == 0) goto Label_6823; // 0x1a97 JumpB
	var_420_string = ""; // 0x1a98 PushV
	var_420_string = "Neutral"; // 0x1a99 MovS
	func_6087(var_41_int, var_420_string); // 0x1a9a Call
	var_421_int = 13577; // 0x1a9c PushI
	SetMessage(var_421_int); // 0x1a9d TObjFunc
	ClearReplies(); // 0x1a9f TObjFunc
	var_422_int = 13578; // 0x1aa1 PushI
	var_423_int = 14828; // 0x1aa2 PushI
	var_424_int = 14827; // 0x1aa3 PushI
	AddReply(var_422_int, var_423_int, var_424_int); // 0x1aa4 TObjFunc
	return 0; // 0x1aa6 Return
	
Label_6823:
	var_425_int = 14828; // 0x1aa7 PushI
	var_426_bool = var_40_int == var_425_int; // 0x1aa8 Eq
	if(var_426_bool == 0) goto Label_6841; // 0x1aa9 JumpB
	var_427_string = ""; // 0x1aaa PushV
	var_427_string = "Neutral"; // 0x1aab MovS
	func_6087(var_41_int, var_427_string); // 0x1aac Call
	var_428_int = 13579; // 0x1aae PushI
	SetMessage(var_428_int); // 0x1aaf TObjFunc
	ClearReplies(); // 0x1ab1 TObjFunc
	var_429_int = 13580; // 0x1ab3 PushI
	var_430_int = 14833; // 0x1ab4 PushI
	var_431_int = 14829; // 0x1ab5 PushI
	AddReply(var_429_int, var_430_int, var_431_int); // 0x1ab6 TObjFunc
	return 0; // 0x1ab8 Return
	
Label_6841:
	var_432_int = 14833; // 0x1ab9 PushI
	var_433_bool = var_40_int == var_432_int; // 0x1aba Eq
	if(var_433_bool == 0) goto Label_6859; // 0x1abb JumpB
	var_434_string = ""; // 0x1abc PushV
	var_434_string = "Neutral"; // 0x1abd MovS
	func_6087(var_41_int, var_434_string); // 0x1abe Call
	var_435_int = 13582; // 0x1ac0 PushI
	SetMessage(var_435_int); // 0x1ac1 TObjFunc
	ClearReplies(); // 0x1ac3 TObjFunc
	var_436_int = 13583; // 0x1ac5 PushI
	var_437_int = 14835; // 0x1ac6 PushI
	var_438_int = 14834; // 0x1ac7 PushI
	AddReply(var_436_int, var_437_int, var_438_int); // 0x1ac8 TObjFunc
	return 0; // 0x1aca Return
	
Label_6859:
	var_439_int = 14835; // 0x1acb PushI
	var_440_bool = var_40_int == var_439_int; // 0x1acc Eq
	if(var_440_bool == 0) goto Label_6877; // 0x1acd JumpB
	var_441_string = ""; // 0x1ace PushV
	var_441_string = "Neutral"; // 0x1acf MovS
	func_6087(var_41_int, var_441_string); // 0x1ad0 Call
	var_442_int = 13584; // 0x1ad2 PushI
	SetMessage(var_442_int); // 0x1ad3 TObjFunc
	ClearReplies(); // 0x1ad5 TObjFunc
	var_443_int = 13585; // 0x1ad7 PushI
	var_444_int = 14837; // 0x1ad8 PushI
	var_445_int = 14836; // 0x1ad9 PushI
	AddReply(var_443_int, var_444_int, var_445_int); // 0x1ada TObjFunc
	return 0; // 0x1adc Return
	
Label_6877:
	var_446_int = 14837; // 0x1add PushI
	var_447_bool = var_40_int == var_446_int; // 0x1ade Eq
	if(var_447_bool == 0) goto Label_6900; // 0x1adf JumpB
	var_448_string = ""; // 0x1ae0 PushV
	var_448_string = "Neutral"; // 0x1ae1 MovS
	func_6087(var_41_int, var_448_string); // 0x1ae2 Call
	var_449_int = 13586; // 0x1ae4 PushI
	SetMessage(var_449_int); // 0x1ae5 TObjFunc
	ClearReplies(); // 0x1ae7 TObjFunc
	var_450_int = 13587; // 0x1ae9 PushI
	var_451_int = -1; // 0x1aea PushI
	var_452_int = 14838; // 0x1aeb PushI
	AddReply(var_450_int, var_451_int, var_452_int); // 0x1aec TObjFunc
	var_453_int = 13606; // 0x1aee PushI
	var_454_int = -1; // 0x1aef PushI
	var_455_int = 14860; // 0x1af0 PushI
	AddReply(var_453_int, var_454_int, var_455_int); // 0x1af1 TObjFunc
	return 0; // 0x1af3 Return
	
Label_6900:
	var_456_int = 13577; // 0x1af4 PushI
	var_457_bool = var_40_int == var_456_int; // 0x1af5 Eq
	if(var_457_bool == 0) goto Label_6923; // 0x1af6 JumpB
	var_458_string = ""; // 0x1af7 PushV
	var_458_string = "Neutral"; // 0x1af8 MovS
	func_6087(var_41_int, var_458_string); // 0x1af9 Call
	var_459_int = 12413; // 0x1afb PushI
	SetMessage(var_459_int); // 0x1afc TObjFunc
	ClearReplies(); // 0x1afe TObjFunc
	var_460_int = 12420; // 0x1b00 PushI
	var_461_int = 13585; // 0x1b01 PushI
	var_462_int = 13584; // 0x1b02 PushI
	AddReply(var_460_int, var_461_int, var_462_int); // 0x1b03 TObjFunc
	var_463_int = 12414; // 0x1b05 PushI
	var_464_int = 13579; // 0x1b06 PushI
	var_465_int = 13578; // 0x1b07 PushI
	AddReply(var_463_int, var_464_int, var_465_int); // 0x1b08 TObjFunc
	return 0; // 0x1b0a Return
	
Label_6923:
	var_466_int = 13579; // 0x1b0b PushI
	var_467_bool = var_40_int == var_466_int; // 0x1b0c Eq
	if(var_467_bool == 0) goto Label_6941; // 0x1b0d JumpB
	var_468_string = ""; // 0x1b0e PushV
	var_468_string = "Neutral"; // 0x1b0f MovS
	func_6087(var_41_int, var_468_string); // 0x1b10 Call
	var_469_int = 12415; // 0x1b12 PushI
	SetMessage(var_469_int); // 0x1b13 TObjFunc
	ClearReplies(); // 0x1b15 TObjFunc
	var_470_int = 12416; // 0x1b17 PushI
	var_471_int = 13581; // 0x1b18 PushI
	var_472_int = 13580; // 0x1b19 PushI
	AddReply(var_470_int, var_471_int, var_472_int); // 0x1b1a TObjFunc
	return 0; // 0x1b1c Return
	
Label_6941:
	var_473_int = 13581; // 0x1b1d PushI
	var_474_bool = var_40_int == var_473_int; // 0x1b1e Eq
	if(var_474_bool == 0) goto Label_6959; // 0x1b1f JumpB
	var_475_string = ""; // 0x1b20 PushV
	var_475_string = "Neutral"; // 0x1b21 MovS
	func_6087(var_41_int, var_475_string); // 0x1b22 Call
	var_476_int = 12417; // 0x1b24 PushI
	SetMessage(var_476_int); // 0x1b25 TObjFunc
	ClearReplies(); // 0x1b27 TObjFunc
	var_477_int = 12418; // 0x1b29 PushI
	var_478_int = 14853; // 0x1b2a PushI
	var_479_int = 13582; // 0x1b2b PushI
	AddReply(var_477_int, var_478_int, var_479_int); // 0x1b2c TObjFunc
	return 0; // 0x1b2e Return
	
Label_6959:
	var_480_int = 13585; // 0x1b2f PushI
	var_481_bool = var_40_int == var_480_int; // 0x1b30 Eq
	if(var_481_bool == 0) goto Label_6982; // 0x1b31 JumpB
	var_482_string = ""; // 0x1b32 PushV
	var_482_string = "Neutral"; // 0x1b33 MovS
	func_6087(var_41_int, var_482_string); // 0x1b34 Call
	var_483_int = 12421; // 0x1b36 PushI
	SetMessage(var_483_int); // 0x1b37 TObjFunc
	ClearReplies(); // 0x1b39 TObjFunc
	var_484_int = 13574; // 0x1b3b PushI
	var_485_int = 14851; // 0x1b3c PushI
	var_486_int = 14823; // 0x1b3d PushI
	AddReply(var_484_int, var_485_int, var_486_int); // 0x1b3e TObjFunc
	var_487_int = 13602; // 0x1b40 PushI
	var_488_int = 14853; // 0x1b41 PushI
	var_489_int = 14854; // 0x1b42 PushI
	AddReply(var_487_int, var_488_int, var_489_int); // 0x1b43 TObjFunc
	return 0; // 0x1b45 Return
	
Label_6982:
	var_490_int = 14851; // 0x1b46 PushI
	var_491_bool = var_40_int == var_490_int; // 0x1b47 Eq
	if(var_491_bool == 0) goto Label_7000; // 0x1b48 JumpB
	var_492_string = ""; // 0x1b49 PushV
	var_492_string = "Neutral"; // 0x1b4a MovS
	func_6087(var_41_int, var_492_string); // 0x1b4b Call
	var_493_int = 13599; // 0x1b4d PushI
	SetMessage(var_493_int); // 0x1b4e TObjFunc
	ClearReplies(); // 0x1b50 TObjFunc
	var_494_int = 13600; // 0x1b52 PushI
	var_495_int = 14853; // 0x1b53 PushI
	var_496_int = 14852; // 0x1b54 PushI
	AddReply(var_494_int, var_495_int, var_496_int); // 0x1b55 TObjFunc
	return 0; // 0x1b57 Return
	
Label_7000:
	var_497_int = 14853; // 0x1b58 PushI
	var_498_bool = var_40_int == var_497_int; // 0x1b59 Eq
	if(var_498_bool == 0) goto Label_7028; // 0x1b5a JumpB
	var_499_string = ""; // 0x1b5b PushV
	var_499_string = "Neutral"; // 0x1b5c MovS
	func_6087(var_41_int, var_499_string); // 0x1b5d Call
	var_500_int = 13601; // 0x1b5f PushI
	SetMessage(var_500_int); // 0x1b60 TObjFunc
	ClearReplies(); // 0x1b62 TObjFunc
	var_501_int = 13603; // 0x1b64 PushI
	var_502_int = -1; // 0x1b65 PushI
	var_503_int = 14856; // 0x1b66 PushI
	AddReply(var_501_int, var_502_int, var_503_int); // 0x1b67 TObjFunc
	var_504_int = 13604; // 0x1b69 PushI
	var_505_int = -1; // 0x1b6a PushI
	var_506_int = 14857; // 0x1b6b PushI
	AddReply(var_504_int, var_505_int, var_506_int); // 0x1b6c TObjFunc
	var_507_int = 13605; // 0x1b6e PushI
	var_508_int = -1; // 0x1b6f PushI
	var_509_int = 14858; // 0x1b70 PushI
	AddReply(var_507_int, var_508_int, var_509_int); // 0x1b71 TObjFunc
	return 0; // 0x1b73 Return
	
Label_7028:
	var_3_string = 1; // 0x1b74 TMovB
	var_510_bool = 0; // 0x1b75 PushV
	func_7232(var_510_bool); // 0x1b76 Call
	if(var_510_bool == 0) goto Label_7036; // 0x1b78 JumpB
	lshStopAnimation(); // 0x1b79 Func
	goto Label_7038; // 0x1b7b Jump
	
Label_7038:
	return 0; // 0x1b7e Return
	
Label_7036:
	StopAnimation(); // 0x1b7c Func
	
Label_7040:
	return 0; // 0x1b80 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool)
{
	func_8865(); // 0x7 Call
	var_41_bool = 0; // 0x9 PushV
	func_7060(var_41_bool); // 0xa Call
	var_44_bool = var_41_bool == 0; // 0xc Not
	if(var_44_bool == 0) goto Label_19; // 0xd JumpB
	TaskCall(0); // 0xf TaskCall
	func_0(); // 0x10 Call
	TaskReturn(); // 0x11 TaskReturn
	
Label_19:
	var_45_string = ""; // 0x13 PushV
	var_45_string = "Neutral"; // 0x14 MovS
	func_7125(var_45_string); // 0x15 Call
	lshWaitForAnimEnd(); // 0x17 Func
	goto Label_19; // 0x19 Jump
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_8193(var_159_bool)
{
	var_161_int = 0; var_162_string = ""; // 0x2002 PushV
	var_162_string = "ood5MladVlad3"; // 0x2003 MovS
	func_7160(var_161_int, var_162_string); // 0x2004 Call
	var_163_int = 0; // 0x2006 PushI
	var_164_bool = var_161_int == var_163_int; // 0x2007 Eq
	if(var_164_bool == 0) goto Label_8203; // 0x2008 JumpB
	var_159_bool = 1; // 0x2009 MovB
	return 0; // 0x200a Return
	
Label_8203:
	var_159_bool = 0; // 0x200b MovB
	return 0; // 0x200c Return
}


func_8705()
{
	var_68_object = Obj(); var_69_object = Obj(); // 0x2201 PushV
	var_70_string = "Adding diary entry"; // 0x2202 PushS
	Trace(var_70_string); // 0x2203 Func
	var_71_int = 78; // 0x2205 PushI
	var_72_int = 2; // 0x2206 PushI
	var_73_int = 12160; // 0x2207 PushI
	CreateDiaryEntry(var_69_object, var_71_int, var_72_int, var_73_int); // 0x2208 Func
	var_74_bool = 0; var_75_object = Obj(); var_76_int = 0; // 0x220a PushV
	var_75_object = var_69_object; // 0x220b Mov
	var_76_int = 26; // 0x220c MovI
	func_8593(var_74_bool, var_75_object, var_76_int); // 0x220d Call
	return 2; // 0x220f Return
}


func_7685()
{
	var_48_string = "ood8MladVlad1"; // 0x1e06 PushS
	var_49_int = 1; // 0x1e07 PushI
	SetVariable(var_48_string, var_49_int); // 0x1e08 Func
	return 0; // 0x1e0a Return
}


func_4615(var_0_object, var_696_int, var_697_object)
{
	var_699_object = Obj(); var_700_bool = 0; var_701_int = 0; var_702_bool = 0; var_703_object = Obj(); var_704_bool = 0; var_705_int = 0; var_706_bool = 0; // 0x1207 PushV
	var_0_object = var_697_object; // 0x1208 TMov
	var_707_bool = 0; var_708_object = Obj(); // 0x1209 PushV
	var_708_object = var_697_object; // 0x120a Mov
	func_7065(var_708_object); // 0x120b Call
	var_709_bool = var_707_bool == 0; // 0x120d Not
	if(var_709_bool == 0) goto Label_4625; // 0x120e JumpB
	var_696_int = -2; // 0x120f MovI
	return 8; // 0x1210 Return
	
Label_4625:
	CreateDialog(var_703_object); // 0x1211 Func
	var_710_int = 0; // 0x1213 PushV
	func_7228(var_710_int); // 0x1214 Call
	SetNPCName(var_710_int); // 0x1216 ObjFunc
	var_711_string = ""; // 0x1218 PushV
	func_7230(var_711_string); // 0x1219 Call
	SetPhoto(var_711_string); // 0x121b ObjFunc
	var_712_int = 0; // 0x121d PushV
	func_8672(var_712_int); // 0x121e Call
	SetPlayerName(var_712_int); // 0x1220 ObjFunc
	var_705_int = -1; // 0x1222 MovI
	IsOverrideActive(var_704_bool); // 0x1223 Func
	var_713_bool = var_704_bool; // 0x1225 Push
	if(var_713_bool == 0) goto Label_4649; // 0x1226 JumpB
	var_696_int = -2; // 0x1227 MovI
	return 8; // 0x1228 Return
	
Label_4649:
	DoDialog(var_703_object); // 0x1229 Func
	var_714_object = Obj(); var_715_object = Obj(); // 0x122b PushV
	var_714_object = var_697_object; // 0x122c Mov
	var_715_object = var_703_object; // 0x122d Mov
	TaskCall(13); // 0x122e TaskCall
	func_4678(var_716_object, var_717_object, var_718_string, var_719_bool, var_714_object, var_715_object); // 0x122f Call
	TaskReturn(); // 0x1230 TaskReturn
	IsDialogEnd(var_706_bool); // 0x1232 ObjFunc
	
Label_4660:
	var_806_bool = var_706_bool == 0; // 0x1234 Not
	if(var_806_bool == 0) goto Label_4667; // 0x1235 JumpB
	sync(); // 0x1236 Func
	IsDialogEnd(var_706_bool); // 0x1238 ObjFunc
	goto Label_4660; // 0x123a Jump
	
Label_4667:
	var_807_object = Obj(); // 0x123b PushV
	var_807_object = var_697_object; // 0x123c Mov
	func_7121(); // 0x123d Call
	StopDialog(var_703_object); // 0x123f Func
	GetReturnValue(var_705_int); // 0x1241 ObjFunc
	var_696_int = var_705_int; // 0x1243 Mov
	return 8; // 0x1244 Return
}


func_7176(var_117_object, var_118_string)
{
	var_119_object = Obj(); var_120_object = Obj(); var_121_object = Obj(); var_122_object = Obj(); // 0x1c08 PushV
	GetMainOutdoorScene(var_121_object); // 0x1c09 Func
	var_123_string = ".xml"; // 0x1c0b PushS
	var_124_int = var_118_string + var_123_string; // 0x1c0c Add
	AddBlankActorFromXml(var_122_object, var_121_object, var_118_string, var_124_int); // 0x1c0d Func
	var_117_object = var_122_object; // 0x1c0f Mov
	return 4; // 0x1c10 Return
}


func_7691()
{
	var_93_string = "ood8MladVlad2"; // 0x1e0c PushS
	var_94_int = 1; // 0x1e0d PushI
	SetVariable(var_93_string, var_94_int); // 0x1e0e Func
	return 0; // 0x1e10 Return
}


func_8205(var_248_bool)
{
	var_250_int = 0; var_251_string = ""; // 0x200e PushV
	var_251_string = "d6q02GorbunDeath"; // 0x200f MovS
	func_7160(var_250_int, var_251_string); // 0x2010 Call
	var_252_int = 0; // 0x2012 PushI
	var_253_bool = var_250_int != var_252_int; // 0x2013 Neq
	if(var_253_bool == 0) goto Label_8215; // 0x2014 JumpB
	var_248_bool = 1; // 0x2015 MovB
	return 0; // 0x2016 Return
	
Label_8215:
	var_248_bool = 0; // 0x2017 MovB
	return 0; // 0x2018 Return
}


func_7697()
{
	return 0; // 0x1e12 Return
}


func_8721()
{
	var_182_object = Obj(); var_183_object = Obj(); // 0x2211 PushV
	var_184_string = "Adding diary entry"; // 0x2212 PushS
	Trace(var_184_string); // 0x2213 Func
	var_185_int = 137; // 0x2215 PushI
	var_186_int = 1; // 0x2216 PushI
	var_187_int = 15323; // 0x2217 PushI
	CreateDiaryEntry(var_183_object, var_185_int, var_186_int, var_187_int); // 0x2218 Func
	var_188_bool = 0; var_189_object = Obj(); var_190_int = 0; // 0x221a PushV
	var_189_object = var_183_object; // 0x221b Mov
	var_190_int = 20; // 0x221c MovI
	func_8593(var_188_bool, var_189_object, var_190_int); // 0x221d Call
	return 2; // 0x221f Return
}


func_7699()
{
	var_103_string = "ood8MladVlad3"; // 0x1e14 PushS
	var_104_int = 1; // 0x1e15 PushI
	SetVariable(var_103_string, var_104_int); // 0x1e16 Func
	return 0; // 0x1e18 Return
}


func_7187(var_115_bool, var_116_string, var_117_string)
{
	var_118_object = Obj(); var_119_object = Obj(); // 0x1c13 PushV
	FindActor(var_119_object, var_116_string); // 0x1c14 Func
	var_120_bool = var_119_object == 0; // 0x1c16 NullEq
	if(var_120_bool == 0) goto Label_7194; // 0x1c17 JumpB
	var_115_bool = 0; // 0x1c18 MovB
	return 2; // 0x1c19 Return
	
Label_7194:
	Trigger(var_119_object, var_117_string); // 0x1c1a Func
	var_115_bool = 1; // 0x1c1c MovB
	return 2; // 0x1c1d Return
}


func_3608(var_0_object, var_596_int, var_597_object)
{
	var_599_object = Obj(); var_600_bool = 0; var_601_int = 0; var_602_bool = 0; var_603_object = Obj(); var_604_bool = 0; var_605_int = 0; var_606_bool = 0; // 0xe18 PushV
	var_0_object = var_597_object; // 0xe19 TMov
	var_607_bool = 0; var_608_object = Obj(); // 0xe1a PushV
	var_608_object = var_597_object; // 0xe1b Mov
	func_7065(var_608_object); // 0xe1c Call
	var_609_bool = var_607_bool == 0; // 0xe1e Not
	if(var_609_bool == 0) goto Label_3618; // 0xe1f JumpB
	var_596_int = -2; // 0xe20 MovI
	return 8; // 0xe21 Return
	
Label_3618:
	CreateDialog(var_603_object); // 0xe22 Func
	var_610_int = 0; // 0xe24 PushV
	func_7228(var_610_int); // 0xe25 Call
	SetNPCName(var_610_int); // 0xe27 ObjFunc
	var_611_string = ""; // 0xe29 PushV
	func_7230(var_611_string); // 0xe2a Call
	SetPhoto(var_611_string); // 0xe2c ObjFunc
	var_612_int = 0; // 0xe2e PushV
	func_8672(var_612_int); // 0xe2f Call
	SetPlayerName(var_612_int); // 0xe31 ObjFunc
	var_605_int = -1; // 0xe33 MovI
	IsOverrideActive(var_604_bool); // 0xe34 Func
	var_613_bool = var_604_bool; // 0xe36 Push
	if(var_613_bool == 0) goto Label_3642; // 0xe37 JumpB
	var_596_int = -2; // 0xe38 MovI
	return 8; // 0xe39 Return
	
Label_3642:
	DoDialog(var_603_object); // 0xe3a Func
	var_614_object = Obj(); var_615_object = Obj(); // 0xe3c PushV
	var_614_object = var_597_object; // 0xe3d Mov
	var_615_object = var_603_object; // 0xe3e Mov
	TaskCall(11); // 0xe3f TaskCall
	func_3671(var_616_object, var_617_object, var_618_string, var_619_bool, var_614_object, var_615_object); // 0xe40 Call
	TaskReturn(); // 0xe41 TaskReturn
	IsDialogEnd(var_606_bool); // 0xe43 ObjFunc
	
Label_3653:
	var_692_bool = var_606_bool == 0; // 0xe45 Not
	if(var_692_bool == 0) goto Label_3660; // 0xe46 JumpB
	sync(); // 0xe47 Func
	IsDialogEnd(var_606_bool); // 0xe49 ObjFunc
	goto Label_3653; // 0xe4b Jump
	
Label_3660:
	var_693_object = Obj(); // 0xe4c PushV
	var_693_object = var_597_object; // 0xe4d Mov
	func_7121(); // 0xe4e Call
	StopDialog(var_603_object); // 0xe50 Func
	GetReturnValue(var_605_int); // 0xe52 ObjFunc
	var_596_int = var_605_int; // 0xe54 Mov
	return 8; // 0xe55 Return
}


func_7705()
{
	var_109_string = "d8q01MladVladIsVictim"; // 0x1e1a PushS
	var_110_int = 1; // 0x1e1b PushI
	SetVariable(var_109_string, var_110_int); // 0x1e1c Func
	return 0; // 0x1e1e Return
}


func_8217(var_265_bool)
{
	var_267_int = 0; var_268_string = ""; // 0x201a PushV
	var_268_string = "d6q02Trigger"; // 0x201b MovS
	func_7160(var_267_int, var_268_string); // 0x201c Call
	var_269_int = 0; // 0x201e PushI
	var_270_bool = var_267_int != var_269_int; // 0x201f Neq
	if(var_270_bool == 0) goto Label_8227; // 0x2020 JumpB
	var_265_bool = 1; // 0x2021 MovB
	return 0; // 0x2022 Return
	
Label_8227:
	var_265_bool = 0; // 0x2023 MovB
	return 0; // 0x2024 Return
}


func_3098(var_2_object, var_137_string)
{
	var_138_bool = 0; // 0xc1b PushV
	func_7232(var_138_bool); // 0xc1c Call
	var_139_bool = var_138_bool == 0; // 0xc1e Not
	if(var_139_bool == 0) goto Label_3105; // 0xc1f JumpB
	return 0; // 0xc20 Return
	
Label_3105:
	var_140_bool = var_137_string == var_2_object; // 0xc21 Eq
	if(var_140_bool == 0) goto Label_3108; // 0xc22 JumpB
	return 0; // 0xc23 Return
	
Label_3108:
	var_141_string = ""; // 0xc24 PushV
	var_141_string = var_137_string; // 0xc25 Mov
	func_7125(var_141_string); // 0xc26 Call
	var_2_object = var_137_string; // 0xc28 TMov
	return 0; // 0xc29 Return
}


func_7199(var_65_float)
{
	var_66_float = 0; var_67_float = 0; // 0x1c1f PushV
	GetGameTime(var_67_float); // 0x1c20 Func
	var_65_float = var_67_float; // 0x1c22 Mov
	return 2; // 0x1c23 Return
}


func_7711()
{
	var_121_string = "ood8MladVlad4"; // 0x1e20 PushS
	var_122_int = 1; // 0x1e21 PushI
	SetVariable(var_121_string, var_122_int); // 0x1e22 Func
	return 0; // 0x1e24 Return
}


func_8737()
{
	var_83_object = Obj(); var_84_object = Obj(); // 0x2221 PushV
	var_85_string = "Adding diary entry"; // 0x2222 PushS
	Trace(var_85_string); // 0x2223 Func
	var_86_int = 21; // 0x2225 PushI
	var_87_int = 2; // 0x2226 PushI
	var_88_int = 3361; // 0x2227 PushI
	CreateDiaryEntry(var_84_object, var_86_int, var_87_int, var_88_int); // 0x2228 Func
	var_89_bool = 0; var_90_object = Obj(); var_91_int = 0; // 0x222a PushV
	var_90_object = var_84_object; // 0x222b Mov
	var_91_int = -1; // 0x222c MovI
	func_8593(var_89_bool, var_90_object, var_91_int); // 0x222d Call
	return 2; // 0x222f Return
}


func_7204(var_157_int)
{
	var_158_float = 0; var_159_float = 0; // 0x1c24 PushV
	GetGameTime(var_159_float); // 0x1c25 Func
	var_160_int = 1; // 0x1c27 PushI
	var_161_int = 0; // 0x1c28 PushV
	var_162_int = 24; // 0x1c29 PushI
	var_161_int = var_159_float / var_159_float; // 0x1c2a Div2
	var_157_int = var_160_int + var_161_int; // 0x1c2b Add2
	return 2; // 0x1c2c Return
}


func_8229(var_143_bool)
{
	var_145_int = 0; var_146_string = ""; // 0x2026 PushV
	var_146_string = "d8q01"; // 0x2027 MovS
	func_7160(var_145_int, var_146_string); // 0x2028 Call
	var_149_int = 1; // 0x202a PushI
	var_150_bool = var_145_int == var_149_int; // 0x202b Eq
	if(var_150_bool == 0) goto Label_8239; // 0x202c JumpB
	var_143_bool = 1; // 0x202d MovB
	return 0; // 0x202e Return
	
Label_8239:
	var_143_bool = 0; // 0x202f MovB
	return 0; // 0x2030 Return
}


func_7717()
{
	var_115_string = "ood8MladVlad5"; // 0x1e26 PushS
	var_116_int = 1; // 0x1e27 PushI
	SetVariable(var_115_string, var_116_int); // 0x1e28 Func
	return 0; // 0x1e2a Return
}


func_7723()
{
	var_48_string = "KnowMladVlad"; // 0x1e2c PushS
	var_49_int = 1; // 0x1e2d PushI
	SetVariable(var_48_string, var_49_int); // 0x1e2e Func
	return 0; // 0x1e30 Return
}


func_7213(var_155_bool, var_156_int)
{
	var_157_int = 0; // 0x1c2e PushV
	func_7204(var_157_int); // 0x1c2f Call
	var_155_bool = var_157_int == var_156_int; // 0x1c31 Eq2
	return 0; // 0x1c32 Return
}


func_7729()
{
	var_200_string = "ood1MladVlad5"; // 0x1e32 PushS
	var_201_int = 1; // 0x1e33 PushI
	SetVariable(var_200_string, var_201_int); // 0x1e34 Func
	return 0; // 0x1e36 Return
}


func_8241(var_157_bool)
{
	var_159_int = 0; var_160_string = ""; // 0x2032 PushV
	var_160_string = "d8q01MladVladIsBad"; // 0x2033 MovS
	func_7160(var_159_int, var_160_string); // 0x2034 Call
	var_161_int = 1; // 0x2036 PushI
	var_162_bool = var_159_int == var_161_int; // 0x2037 Eq
	if(var_162_bool == 0) goto Label_8251; // 0x2038 JumpB
	var_157_bool = 1; // 0x2039 MovB
	return 0; // 0x203a Return
	
Label_8251:
	var_157_bool = 0; // 0x203b MovB
	return 0; // 0x203c Return
}


func_8753()
{
	var_108_object = Obj(); var_109_object = Obj(); // 0x2231 PushV
	var_110_string = "Adding diary entry"; // 0x2232 PushS
	Trace(var_110_string); // 0x2233 Func
	var_111_int = 92; // 0x2235 PushI
	var_112_int = 2; // 0x2236 PushI
	var_113_int = 12174; // 0x2237 PushI
	CreateDiaryEntry(var_109_object, var_111_int, var_112_int, var_113_int); // 0x2238 Func
	var_114_bool = 0; var_115_object = Obj(); var_116_int = 0; // 0x223a PushV
	var_115_object = var_109_object; // 0x223b Mov
	var_116_int = 21; // 0x223c MovI
	func_8593(var_114_bool, var_115_object, var_116_int); // 0x223d Call
	return 2; // 0x223f Return
}


func_49(var_0_object, var_44_int, var_45_object)
{
	var_47_object = Obj(); var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_object = Obj(); var_52_bool = 0; var_53_int = 0; var_54_bool = 0; // 0x31 PushV
	var_0_object = var_45_object; // 0x32 TMov
	var_55_bool = 0; var_56_object = Obj(); // 0x33 PushV
	var_56_object = var_45_object; // 0x34 Mov
	func_7065(var_56_object); // 0x35 Call
	var_95_bool = var_55_bool == 0; // 0x37 Not
	if(var_95_bool == 0) goto Label_59; // 0x38 JumpB
	var_44_int = -2; // 0x39 MovI
	return 8; // 0x3a Return
	
Label_59:
	CreateDialog(var_51_object); // 0x3b Func
	var_96_int = 0; // 0x3d PushV
	func_7228(var_96_int); // 0x3e Call
	SetNPCName(var_96_int); // 0x40 ObjFunc
	var_97_string = ""; // 0x42 PushV
	func_7230(var_97_string); // 0x43 Call
	SetPhoto(var_97_string); // 0x45 ObjFunc
	var_98_int = 0; // 0x47 PushV
	func_8672(var_98_int); // 0x48 Call
	SetPlayerName(var_98_int); // 0x4a ObjFunc
	var_53_int = -1; // 0x4c MovI
	IsOverrideActive(var_52_bool); // 0x4d Func
	var_106_bool = var_52_bool; // 0x4f Push
	if(var_106_bool == 0) goto Label_83; // 0x50 JumpB
	var_44_int = -2; // 0x51 MovI
	return 8; // 0x52 Return
	
Label_83:
	DoDialog(var_51_object); // 0x53 Func
	var_107_object = Obj(); var_108_object = Obj(); // 0x55 PushV
	var_107_object = var_45_object; // 0x56 Mov
	var_108_object = var_51_object; // 0x57 Mov
	TaskCall(3); // 0x58 TaskCall
	func_112(var_109_object, var_110_object, var_111_string, var_112_bool, var_107_object, var_108_object); // 0x59 Call
	TaskReturn(); // 0x5a TaskReturn
	IsDialogEnd(var_54_bool); // 0x5c ObjFunc
	
Label_94:
	var_152_bool = var_54_bool == 0; // 0x5e Not
	if(var_152_bool == 0) goto Label_101; // 0x5f JumpB
	sync(); // 0x60 Func
	IsDialogEnd(var_54_bool); // 0x62 ObjFunc
	goto Label_94; // 0x64 Jump
	
Label_101:
	var_153_object = Obj(); // 0x65 PushV
	var_153_object = var_45_object; // 0x66 Mov
	func_7121(); // 0x67 Call
	StopDialog(var_51_object); // 0x69 Func
	GetReturnValue(var_53_int); // 0x6b ObjFunc
	var_44_int = var_53_int; // 0x6d Mov
	return 8; // 0x6e Return
}


func_7219(var_1042_bool)
{
	var_1043_bool = 0; var_1044_bool = 0; // 0x1c33 PushV
	var_1045_string = ""; // 0x1c34 PushV
	var_1045_string = "No"; // 0x1c35 MovS
	func_7125(var_1045_string); // 0x1c36 Call
	lshWaitForAnimEnd(var_1044_bool); // 0x1c38 Func
	var_1042_bool = var_1044_bool; // 0x1c3a Mov
	return 2; // 0x1c3b Return
}


func_7735()
{
	var_206_string = "ood1MladVlad6"; // 0x1e38 PushS
	var_207_int = 1; // 0x1e39 PushI
	SetVariable(var_206_string, var_207_int); // 0x1e3a Func
	return 0; // 0x1e3c Return
}


func_7228(var_96_int)
{
	var_96_int = 2872; // 0x1c3c MovI
	return 0; // 0x1c3d Return
}


func_7741()
{
	var_212_string = "ood1MladVlad7"; // 0x1e3e PushS
	var_213_int = 1; // 0x1e3f PushI
	SetVariable(var_212_string, var_213_int); // 0x1e40 Func
	return 0; // 0x1e42 Return
}


func_7230(var_97_string)
{
	var_97_string = "ui/NPC_MladVlad.png"; // 0x1c3e MovS
	return 0; // 0x1c3f Return
}


func_8253(var_151_bool)
{
	var_153_int = 0; var_154_string = ""; // 0x203e PushV
	var_154_string = "ood8MladVlad1"; // 0x203f MovS
	func_7160(var_153_int, var_154_string); // 0x2040 Call
	var_155_int = 0; // 0x2042 PushI
	var_156_bool = var_153_int == var_155_int; // 0x2043 Eq
	if(var_156_bool == 0) goto Label_8263; // 0x2044 JumpB
	var_151_bool = 1; // 0x2045 MovB
	return 0; // 0x2046 Return
	
Label_8263:
	var_151_bool = 0; // 0x2047 MovB
	return 0; // 0x2048 Return
}


func_7232(var_43_bool)
{
	var_43_bool = 1; // 0x1c40 MovB
	return 0; // 0x1c41 Return
}


func_8769()
{
	var_81_object = Obj(); var_82_object = Obj(); // 0x2241 PushV
	var_83_string = "Adding diary entry"; // 0x2242 PushS
	Trace(var_83_string); // 0x2243 Func
	var_84_int = 148; // 0x2245 PushI
	var_85_int = 2; // 0x2246 PushI
	var_86_int = 15354; // 0x2247 PushI
	CreateDiaryEntry(var_82_object, var_84_int, var_85_int, var_86_int); // 0x2248 Func
	var_87_bool = 0; var_88_object = Obj(); var_89_int = 0; // 0x224a PushV
	var_88_object = var_82_object; // 0x224b Mov
	var_89_int = -1; // 0x224c MovI
	func_8593(var_87_bool, var_88_object, var_89_int); // 0x224d Call
	return 2; // 0x224f Return
}


func_7234()
{
	var_188_string = "ood1MladVlad3"; // 0x1c43 PushS
	var_189_int = 1; // 0x1c44 PushI
	SetVariable(var_188_string, var_189_int); // 0x1c45 Func
	return 0; // 0x1c47 Return
}


func_7747()
{
	var_218_string = "ood1MladVlad8"; // 0x1e44 PushS
	var_219_int = 1; // 0x1e45 PushI
	SetVariable(var_218_string, var_219_int); // 0x1e46 Func
	return 0; // 0x1e48 Return
}


func_4678(var_0_object, var_1_object, var_2_object, var_3_object, var_714_object, var_715_object)
{
	var_0_object = var_715_object; // 0x1247 TMov
	var_1_object = var_714_object; // 0x1248 TMov
	var_3_object = 0; // 0x1249 TMovB
	var_720_int = 1; // 0x124a PushI
	if(var_720_int == 0) goto Label_4795; // 0x124b JumpB
	var_721_bool = 0; // 0x124c PushV
	var_721_bool = 0; // 0x124d MovB
	var_722_bool = 0; // 0x124e PushV
	var_722_bool = 0; // 0x124f MovB
	var_723_bool = 0; var_724_object = Obj(); // 0x1250 PushV
	var_724_object = var_1_object; // 0x1251 MovT
	func_8193(var_724_object); // 0x1252 Call
	if(var_723_bool == 0) goto Label_4700; // 0x1254 JumpB
	var_729_bool = 0; var_730_object = Obj(); // 0x1255 PushV
	var_730_object = var_1_object; // 0x1256 MovT
	func_8133(var_730_object); // 0x1257 Call
	var_735_bool = var_729_bool == 0; // 0x1259 Not
	if(var_735_bool == 0) goto Label_4700; // 0x125a JumpB
	var_722_bool = 1; // 0x125b MovB
	
Label_4700:
	if(var_722_bool == 0) goto Label_4708; // 0x125c JumpB
	var_736_bool = 0; var_737_object = Obj(); // 0x125d PushV
	var_737_object = var_1_object; // 0x125e MovT
	func_8145(var_737_object); // 0x125f Call
	var_742_bool = var_736_bool == 0; // 0x1261 Not
	if(var_742_bool == 0) goto Label_4708; // 0x1262 JumpB
	var_721_bool = 1; // 0x1263 MovB
	
Label_4708:
	if(var_721_bool == 0) goto Label_4740; // 0x1264 JumpB
	var_743_string = ""; // 0x1265 PushV
	var_743_string = "Neutral"; // 0x1266 MovS
	func_4825(var_715_object, var_743_string); // 0x1267 Call
	var_748_int = 11741; // 0x1269 PushI
	SetMessage(var_748_int); // 0x126a TObjFunc
	ClearReplies(); // 0x126c TObjFunc
	var_749_int = 11743; // 0x126e PushI
	var_750_int = 12951; // 0x126f PushI
	var_751_int = 12949; // 0x1270 PushI
	AddReply(var_749_int, var_750_int, var_751_int); // 0x1271 TObjFunc
	var_752_int = 11742; // 0x1273 PushI
	var_753_int = 12950; // 0x1274 PushI
	var_754_int = 12948; // 0x1275 PushI
	AddReply(var_752_int, var_753_int, var_754_int); // 0x1276 TObjFunc
	var_755_bool = 0; var_756_object = Obj(); // 0x1278 PushV
	var_756_object = var_1_object; // 0x1279 MovT
	func_8073(var_756_object); // 0x127a Call
	var_761_bool = var_755_bool == 0; // 0x127c Not
	if(var_761_bool == 0) goto Label_4739; // 0x127d JumpB
	var_762_int = 12586; // 0x127e PushI
	var_763_int = 13766; // 0x127f PushI
	var_764_int = 13753; // 0x1280 PushI
	AddReply(var_762_int, var_763_int, var_764_int); // 0x1281 TObjFunc
	
Label_4739:
	goto Label_4795; // 0x1283 Jump
	
Label_4795:
	var_765_bool = 0; // 0x12bb PushV
	func_7232(var_765_bool); // 0x12bc Call
	if(var_765_bool == 0) goto Label_4810; // 0x12be JumpB
	
Label_4799:
	lshWaitForAnimEnd(); // 0x12bf Func
	var_766_object = var_3_object; // 0x12c1 PushT
	if(var_766_object == 0) goto Label_4804; // 0x12c2 JumpB
	goto Label_4809; // 0x12c3 Jump
	
Label_4809:
	goto Label_4824; // 0x12c9 Jump
	
Label_4824:
	return 0; // 0x12d8 Return
	
Label_4804:
	var_767_string = ""; // 0x12c4 PushV
	var_767_string = var_2_object; // 0x12c5 MovT
	func_7125(var_767_string); // 0x12c6 Call
	goto Label_4799; // 0x12c8 Jump
	
Label_4810:
	var_768_string = "all"; // 0x12ca PushS
	var_769_string = "idle"; // 0x12cb PushS
	PlayAnimation(var_768_string, var_769_string); // 0x12cc Func
	
Label_4814:
	WaitForAnimEnd(); // 0x12ce Func
	var_770_object = var_3_object; // 0x12d0 PushT
	if(var_770_object == 0) goto Label_4819; // 0x12d1 JumpB
	goto Label_4824; // 0x12d2 Jump
	
Label_4819:
	var_771_string = "all"; // 0x12d3 PushS
	var_772_string = "idle"; // 0x12d4 PushS
	PlayAnimation(var_771_string, var_772_string); // 0x12d5 Func
	goto Label_4814; // 0x12d7 Jump
	
Label_4740:
	var_773_string = ""; // 0x1284 PushV
	var_773_string = "Neutral"; // 0x1285 MovS
	func_4825(var_715_object, var_773_string); // 0x1286 Call
	var_774_int = 12573; // 0x1288 PushI
	SetMessage(var_774_int); // 0x1289 TObjFunc
	ClearReplies(); // 0x128b TObjFunc
	var_775_bool = 0; // 0x128d PushV
	var_775_bool = 0; // 0x128e MovB
	var_776_bool = 0; var_777_object = Obj(); // 0x128f PushV
	var_777_object = var_1_object; // 0x1290 MovT
	func_8157(var_777_object); // 0x1291 Call
	if(var_776_bool == 0) goto Label_4762; // 0x1293 JumpB
	var_782_bool = 0; var_783_object = Obj(); // 0x1294 PushV
	var_783_object = var_1_object; // 0x1295 MovT
	func_8169(var_783_object); // 0x1296 Call
	if(var_782_bool == 0) goto Label_4762; // 0x1298 JumpB
	var_775_bool = 1; // 0x1299 MovB
	
Label_4762:
	if(var_775_bool == 0) goto Label_4768; // 0x129a JumpB
	var_788_int = 12574; // 0x129b PushI
	var_789_int = 13744; // 0x129c PushI
	var_790_int = 13743; // 0x129d PushI
	AddReply(var_788_int, var_789_int, var_790_int); // 0x129e TObjFunc
	
Label_4768:
	var_791_bool = 0; // 0x12a0 PushV
	var_791_bool = 0; // 0x12a1 MovB
	var_792_bool = 0; var_793_object = Obj(); // 0x12a2 PushV
	var_793_object = var_1_object; // 0x12a3 MovT
	func_8133(var_793_object); // 0x12a4 Call
	if(var_792_bool == 0) goto Label_4781; // 0x12a6 JumpB
	var_794_bool = 0; var_795_object = Obj(); // 0x12a7 PushV
	var_795_object = var_1_object; // 0x12a8 MovT
	func_8181(var_795_object); // 0x12a9 Call
	if(var_794_bool == 0) goto Label_4781; // 0x12ab JumpB
	var_791_bool = 1; // 0x12ac MovB
	
Label_4781:
	if(var_791_bool == 0) goto Label_4787; // 0x12ad JumpB
	var_800_int = 12577; // 0x12ae PushI
	var_801_int = 13747; // 0x12af PushI
	var_802_int = 13746; // 0x12b0 PushI
	AddReply(var_800_int, var_801_int, var_802_int); // 0x12b1 TObjFunc
	
Label_4787:
	var_803_int = 12580; // 0x12b3 PushI
	var_804_int = -1; // 0x12b4 PushI
	var_805_int = 13749; // 0x12b5 PushI
	AddReply(var_803_int, var_804_int, var_805_int); // 0x12b6 TObjFunc
	goto Label_4795; // 0x12b8 Jump
}


func_7240()
{
	var_702_string = "KnowUklad"; // 0x1c49 PushS
	var_703_int = 1; // 0x1c4a PushI
	SetVariable(var_702_string, var_703_int); // 0x1c4b Func
	return 0; // 0x1c4d Return
}


func_7753()
{
	var_224_string = "ood1MladVlad9"; // 0x1e4a PushS
	var_225_int = 1; // 0x1e4b PushI
	SetVariable(var_224_string, var_225_int); // 0x1e4c Func
	return 0; // 0x1e4e Return
}


func_8265(var_170_bool)
{
	var_172_int = 0; var_173_string = ""; // 0x204a PushV
	var_173_string = "ood8MladVlad2"; // 0x204b MovS
	func_7160(var_172_int, var_173_string); // 0x204c Call
	var_174_int = 0; // 0x204e PushI
	var_175_bool = var_172_int == var_174_int; // 0x204f Eq
	if(var_175_bool == 0) goto Label_8275; // 0x2050 JumpB
	var_170_bool = 1; // 0x2051 MovB
	return 0; // 0x2052 Return
	
Label_8275:
	var_170_bool = 0; // 0x2053 MovB
	return 0; // 0x2054 Return
}


func_7246()
{
	var_151_string = "ood1MladVlad4"; // 0x1c4f PushS
	var_152_int = 1; // 0x1c50 PushI
	SetVariable(var_151_string, var_152_int); // 0x1c51 Func
	return 0; // 0x1c53 Return
}


func_7759()
{
	var_230_string = "ood1MladVlad10"; // 0x1e50 PushS
	var_231_int = 1; // 0x1e51 PushI
	SetVariable(var_230_string, var_231_int); // 0x1e52 Func
	return 0; // 0x1e54 Return
}


func_8785()
{
	var_73_object = Obj(); var_74_object = Obj(); // 0x2251 PushV
	var_75_string = "Adding diary entry"; // 0x2252 PushS
	Trace(var_75_string); // 0x2253 Func
	var_76_int = 102; // 0x2255 PushI
	var_77_int = 2; // 0x2256 PushI
	var_78_int = 13725; // 0x2257 PushI
	CreateDiaryEntry(var_74_object, var_76_int, var_77_int, var_78_int); // 0x2258 Func
	var_79_bool = 0; var_80_object = Obj(); var_81_int = 0; // 0x225a PushV
	var_80_object = var_74_object; // 0x225b Mov
	var_81_int = -1; // 0x225c MovI
	func_8593(var_79_bool, var_80_object, var_81_int); // 0x225d Call
	return 2; // 0x225f Return
}


func_7252()
{
	var_52_object = Obj(); var_53_object = Obj(); // 0x1c54 PushV
	var_54_string = "d1q03IsKapella"; // 0x1c55 PushS
	var_55_int = 0; // 0x1c56 PushI
	SetVariable(var_54_string, var_55_int); // 0x1c57 Func
	var_56_object = Obj(); // 0x1c59 PushV
	func_8622(var_56_object); // 0x1c5a Call
	var_53_object = var_56_object; // 0x1c5b Mov
	var_63_string = "d1q03MladVladGotoOspina"; // 0x1c5d PushS
	var_64_string = "pt_map_ospina"; // 0x1c5e PushS
	var_65_int = 0; // 0x1c5f PushI
	var_66_int = 8642; // 0x1c60 PushI
	var_67_float = 0; // 0x1c61 PushV
	func_7199(var_67_float); // 0x1c62 Call
	AddMark(var_63_string, var_64_string, var_65_int, var_66_int, var_67_float); // 0x1c64 ObjFunc
	func_8689(); // 0x1c67 Call
	var_95_object = Obj(); var_96_string = ""; // 0x1c69 PushV
	var_96_string = "quest_d1_03"; // 0x1c6a MovS
	func_7165(var_95_object, var_96_string); // 0x1c6b Call
	return 2; // 0x1c6d Return
}


func_7765()
{
	var_236_string = "ood1MladVlad11"; // 0x1e56 PushS
	var_237_int = 1; // 0x1e57 PushI
	SetVariable(var_236_string, var_237_int); // 0x1e58 Func
	return 0; // 0x1e5a Return
}


func_8277(var_181_bool)
{
	var_183_int = 0; var_184_string = ""; // 0x2056 PushV
	var_184_string = "d8q01BringBadBoy"; // 0x2057 MovS
	func_7160(var_183_int, var_184_string); // 0x2058 Call
	var_185_int = 1; // 0x205a PushI
	var_186_bool = var_183_int == var_185_int; // 0x205b Eq
	if(var_186_bool == 0) goto Label_8287; // 0x205c JumpB
	var_181_bool = 1; // 0x205d MovB
	return 0; // 0x205e Return
	
Label_8287:
	var_181_bool = 0; // 0x205f MovB
	return 0; // 0x2060 Return
}


func_3671(var_0_object, var_1_object, var_2_object, var_3_object, var_614_object, var_615_object)
{
	var_0_object = var_615_object; // 0xe58 TMov
	var_1_object = var_614_object; // 0xe59 TMov
	var_3_object = 0; // 0xe5a TMovB
	var_620_int = 1; // 0xe5b PushI
	if(var_620_int == 0) goto Label_3772; // 0xe5c JumpB
	var_621_bool = 0; // 0xe5d PushV
	var_621_bool = 0; // 0xe5e MovB
	var_622_bool = 0; var_623_object = Obj(); // 0xe5f PushV
	var_623_object = var_1_object; // 0xe60 MovT
	func_8037(var_623_object); // 0xe61 Call
	if(var_622_bool == 0) goto Label_3691; // 0xe63 JumpB
	var_628_bool = 0; var_629_object = Obj(); // 0xe64 PushV
	var_629_object = var_1_object; // 0xe65 MovT
	func_8013(var_629_object); // 0xe66 Call
	var_634_bool = var_628_bool == 0; // 0xe68 Not
	if(var_634_bool == 0) goto Label_3691; // 0xe69 JumpB
	var_621_bool = 1; // 0xe6a MovB
	
Label_3691:
	if(var_621_bool == 0) goto Label_3707; // 0xe6b JumpB
	var_635_string = ""; // 0xe6c PushV
	var_635_string = "Neutral"; // 0xe6d MovS
	func_3802(var_615_object, var_635_string); // 0xe6e Call
	var_640_int = 11395; // 0xe70 PushI
	SetMessage(var_640_int); // 0xe71 TObjFunc
	ClearReplies(); // 0xe73 TObjFunc
	var_641_int = 11396; // 0xe75 PushI
	var_642_int = 12594; // 0xe76 PushI
	var_643_int = 12593; // 0xe77 PushI
	AddReply(var_641_int, var_642_int, var_643_int); // 0xe78 TObjFunc
	goto Label_3772; // 0xe7a Jump
	
Label_3772:
	var_644_bool = 0; // 0xebc PushV
	func_7232(var_644_bool); // 0xebd Call
	if(var_644_bool == 0) goto Label_3787; // 0xebf JumpB
	
Label_3776:
	lshWaitForAnimEnd(); // 0xec0 Func
	var_645_object = var_3_object; // 0xec2 PushT
	if(var_645_object == 0) goto Label_3781; // 0xec3 JumpB
	goto Label_3786; // 0xec4 Jump
	
Label_3786:
	goto Label_3801; // 0xeca Jump
	
Label_3801:
	return 0; // 0xed9 Return
	
Label_3781:
	var_646_string = ""; // 0xec5 PushV
	var_646_string = var_2_object; // 0xec6 MovT
	func_7125(var_646_string); // 0xec7 Call
	goto Label_3776; // 0xec9 Jump
	
Label_3787:
	var_647_string = "all"; // 0xecb PushS
	var_648_string = "idle"; // 0xecc PushS
	PlayAnimation(var_647_string, var_648_string); // 0xecd Func
	
Label_3791:
	WaitForAnimEnd(); // 0xecf Func
	var_649_object = var_3_object; // 0xed1 PushT
	if(var_649_object == 0) goto Label_3796; // 0xed2 JumpB
	goto Label_3801; // 0xed3 Jump
	
Label_3796:
	var_650_string = "all"; // 0xed4 PushS
	var_651_string = "idle"; // 0xed5 PushS
	PlayAnimation(var_650_string, var_651_string); // 0xed6 Func
	goto Label_3791; // 0xed8 Jump
	
Label_3707:
	var_652_string = ""; // 0xe7b PushV
	var_652_string = "Neutral"; // 0xe7c MovS
	func_3802(var_615_object, var_652_string); // 0xe7d Call
	var_653_int = 10814; // 0xe7f PushI
	SetMessage(var_653_int); // 0xe80 TObjFunc
	ClearReplies(); // 0xe82 TObjFunc
	var_654_bool = 0; // 0xe84 PushV
	var_654_bool = 0; // 0xe85 MovB
	var_655_bool = 0; var_656_object = Obj(); // 0xe86 PushV
	var_656_object = var_1_object; // 0xe87 MovT
	func_8025(var_656_object); // 0xe88 Call
	if(var_655_bool == 0) goto Label_3729; // 0xe8a JumpB
	var_661_bool = 0; var_662_object = Obj(); // 0xe8b PushV
	var_662_object = var_1_object; // 0xe8c MovT
	func_8013(var_662_object); // 0xe8d Call
	if(var_661_bool == 0) goto Label_3729; // 0xe8f JumpB
	var_654_bool = 1; // 0xe90 MovB
	
Label_3729:
	if(var_654_bool == 0) goto Label_3735; // 0xe91 JumpB
	var_663_int = 10815; // 0xe92 PushI
	var_664_int = 11956; // 0xe93 PushI
	var_665_int = 11955; // 0xe94 PushI
	AddReply(var_663_int, var_664_int, var_665_int); // 0xe95 TObjFunc
	
Label_3735:
	var_666_bool = 0; var_667_object = Obj(); // 0xe97 PushV
	var_667_object = var_1_object; // 0xe98 MovT
	func_7902(var_666_bool, var_667_object); // 0xe99 Call
	if(var_666_bool == 0) goto Label_3745; // 0xe9b JumpB
	var_670_int = 11403; // 0xe9c PushI
	var_671_int = 12601; // 0xe9d PushI
	var_672_int = 12600; // 0xe9e PushI
	AddReply(var_670_int, var_671_int, var_672_int); // 0xe9f TObjFunc
	
Label_3745:
	var_673_bool = 0; // 0xea1 PushV
	var_673_bool = 0; // 0xea2 MovB
	var_674_bool = 0; var_675_object = Obj(); // 0xea3 PushV
	var_675_object = var_1_object; // 0xea4 MovT
	func_8061(var_675_object); // 0xea5 Call
	if(var_674_bool == 0) goto Label_3758; // 0xea7 JumpB
	var_680_bool = 0; var_681_object = Obj(); // 0xea8 PushV
	var_681_object = var_1_object; // 0xea9 MovT
	func_8049(var_681_object); // 0xeaa Call
	if(var_680_bool == 0) goto Label_3758; // 0xeac JumpB
	var_673_bool = 1; // 0xead MovB
	
Label_3758:
	if(var_673_bool == 0) goto Label_3764; // 0xeae JumpB
	var_686_int = 11862; // 0xeaf PushI
	var_687_int = 13076; // 0xeb0 PushI
	var_688_int = 13075; // 0xeb1 PushI
	AddReply(var_686_int, var_687_int, var_688_int); // 0xeb2 TObjFunc
	
Label_3764:
	var_689_int = 11408; // 0xeb4 PushI
	var_690_int = -1; // 0xeb5 PushI
	var_691_int = 12605; // 0xeb6 PushI
	AddReply(var_689_int, var_690_int, var_691_int); // 0xeb7 TObjFunc
	goto Label_3772; // 0xeb9 Jump
}


func_7771()
{
	var_52_object = Obj(); var_53_object = Obj(); // 0x1e5b PushV
	var_54_int = 0; var_55_string = ""; // 0x1e5c PushV
	var_55_string = "d5q03"; // 0x1e5d MovS
	func_7160(var_54_int, var_55_string); // 0x1e5e Call
	var_58_int = 0; // 0x1e60 PushI
	var_59_bool = var_54_int == var_58_int; // 0x1e61 Eq
	if(var_59_bool == 0) goto Label_7818; // 0x1e62 JumpB
	var_60_string = "d5q03"; // 0x1e63 PushS
	var_61_int = 1; // 0x1e64 PushI
	SetVariable(var_60_string, var_61_int); // 0x1e65 Func
	var_62_object = Obj(); // 0x1e67 PushV
	func_8622(var_62_object); // 0x1e68 Call
	var_53_object = var_62_object; // 0x1e69 Mov
	var_69_string = "d5q03MladVladSavePrisonersSelf"; // 0x1e6b PushS
	var_70_string = "pt_map_mladvlad"; // 0x1e6c PushS
	var_71_int = 0; // 0x1e6d PushI
	var_72_int = 15369; // 0x1e6e PushI
	var_73_float = 0; // 0x1e6f PushV
	func_7199(var_73_float); // 0x1e70 Call
	AddMark(var_69_string, var_70_string, var_71_int, var_72_int, var_73_float); // 0x1e72 ObjFunc
	var_76_string = "d5q03SavePrisoners"; // 0x1e74 PushS
	var_77_string = "pt_map_uprava_prison"; // 0x1e75 PushS
	var_78_int = 0; // 0x1e76 PushI
	var_79_int = 15370; // 0x1e77 PushI
	var_80_float = 0; // 0x1e78 PushV
	func_7199(var_80_float); // 0x1e79 Call
	AddMark(var_76_string, var_77_string, var_78_int, var_79_int, var_80_float); // 0x1e7b ObjFunc
	func_8769(); // 0x1e7e Call
	var_106_object = Obj(); var_107_string = ""; // 0x1e80 PushV
	var_107_string = "quest_d5_03"; // 0x1e81 MovS
	func_7165(var_106_object, var_107_string); // 0x1e82 Call
	var_114_bool = 0; var_115_string = ""; var_116_string = ""; // 0x1e84 PushV
	var_115_string = "quest_d5_03"; // 0x1e85 MovS
	var_116_string = "place_prisoners"; // 0x1e86 MovS
	func_7187(var_114_bool, var_115_string, var_116_string); // 0x1e87 Call
	var_53_object = 0; // 0x1e89 SetNull
	
Label_7818:
	return 2; // 0x1e8a Return
}


func_8289(var_189_bool)
{
	var_191_int = 0; var_192_string = ""; // 0x2062 PushV
	var_192_string = "ood8MladVlad3"; // 0x2063 MovS
	func_7160(var_191_int, var_192_string); // 0x2064 Call
	var_193_int = 0; // 0x2066 PushI
	var_194_bool = var_191_int == var_193_int; // 0x2067 Eq
	if(var_194_bool == 0) goto Label_8299; // 0x2068 JumpB
	var_189_bool = 1; // 0x2069 MovB
	return 0; // 0x206a Return
	
Label_8299:
	var_189_bool = 0; // 0x206b MovB
	return 0; // 0x206c Return
}


func_8801()
{
	var_169_object = Obj(); var_170_object = Obj(); // 0x2261 PushV
	var_171_string = "Adding diary entry"; // 0x2262 PushS
	Trace(var_171_string); // 0x2263 Func
	var_172_int = 104; // 0x2265 PushI
	var_173_int = 2; // 0x2266 PushI
	var_174_int = 13727; // 0x2267 PushI
	CreateDiaryEntry(var_170_object, var_172_int, var_173_int, var_174_int); // 0x2268 Func
	var_175_bool = 0; var_176_object = Obj(); var_177_int = 0; // 0x226a PushV
	var_176_object = var_170_object; // 0x226b Mov
	var_177_int = 102; // 0x226c MovI
	func_8593(var_175_bool, var_176_object, var_177_int); // 0x226d Call
	return 2; // 0x226f Return
}


func_8301(var_217_bool)
{
	var_219_int = 0; var_220_string = ""; // 0x206e PushV
	var_220_string = "ood8MladVlad4"; // 0x206f MovS
	func_7160(var_219_int, var_220_string); // 0x2070 Call
	var_221_int = 0; // 0x2072 PushI
	var_222_bool = var_219_int == var_221_int; // 0x2073 Eq
	if(var_222_bool == 0) goto Label_8311; // 0x2074 JumpB
	var_217_bool = 1; // 0x2075 MovB
	return 0; // 0x2076 Return
	
Label_8311:
	var_217_bool = 0; // 0x2077 MovB
	return 0; // 0x2078 Return
}


func_7279(var_88_object)
{
	var_90_string = "money500 is given"; // 0x1c70 PushS
	Trace(var_90_string); // 0x1c71 Func
	var_91_object = Obj(); var_92_string = ""; var_93_int = 0; // 0x1c73 PushV
	var_91_object = var_88_object; // 0x1c74 Mov
	var_92_string = "money"; // 0x1c75 MovS
	var_93_int = 500; // 0x1c76 MovI
	func_7041(var_92_string, var_93_int); // 0x1c77 Call
	return 0; // 0x1c79 Return
}


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_107_object, var_108_object)
{
	var_0_object = var_108_object; // 0x71 TMov
	var_1_object = var_107_object; // 0x72 TMov
	var_3_object = 0; // 0x73 TMovB
	var_113_int = 1; // 0x74 PushI
	if(var_113_int == 0) goto Label_150; // 0x75 JumpB
	var_114_object = Obj(); var_115_object = Obj(); // 0x76 PushV
	var_114_object = var_1_object; // 0x77 MovT
	var_115_object = var_0_object; // 0x78 MovT
	func_7723(); // 0x79 Call
	var_118_object = Obj(); var_119_object = Obj(); // 0x7b PushV
	var_118_object = var_1_object; // 0x7c MovT
	var_119_object = var_0_object; // 0x7d MovT
	func_7296(); // 0x7e Call
	var_122_string = ""; // 0x80 PushV
	var_122_string = "Neutral"; // 0x81 MovS
	func_180(var_108_object, var_122_string); // 0x82 Call
	var_137_int = 416; // 0x84 PushI
	SetMessage(var_137_int); // 0x85 TObjFunc
	ClearReplies(); // 0x87 TObjFunc
	var_138_int = 417; // 0x89 PushI
	var_139_int = 487; // 0x8a PushI
	var_140_int = 485; // 0x8b PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x8c TObjFunc
	var_141_int = 418; // 0x8e PushI
	var_142_int = 9271; // 0x8f PushI
	var_143_int = 486; // 0x90 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x91 TObjFunc
	goto Label_150; // 0x93 Jump
	
Label_150:
	var_144_bool = 0; // 0x96 PushV
	func_7232(var_144_bool); // 0x97 Call
	if(var_144_bool == 0) goto Label_165; // 0x99 JumpB
	
Label_154:
	lshWaitForAnimEnd(); // 0x9a Func
	var_145_object = var_3_object; // 0x9c PushT
	if(var_145_object == 0) goto Label_159; // 0x9d JumpB
	goto Label_164; // 0x9e Jump
	
Label_164:
	goto Label_179; // 0xa4 Jump
	
Label_179:
	return 0; // 0xb3 Return
	
Label_159:
	var_146_string = ""; // 0x9f PushV
	var_146_string = var_2_object; // 0xa0 MovT
	func_7125(var_146_string); // 0xa1 Call
	goto Label_154; // 0xa3 Jump
	
Label_165:
	var_147_string = "all"; // 0xa5 PushS
	var_148_string = "idle"; // 0xa6 PushS
	PlayAnimation(var_147_string, var_148_string); // 0xa7 Func
	
Label_169:
	WaitForAnimEnd(); // 0xa9 Func
	var_149_object = var_3_object; // 0xab PushT
	if(var_149_object == 0) goto Label_174; // 0xac JumpB
	goto Label_179; // 0xad Jump
	
Label_174:
	var_150_string = "all"; // 0xae PushS
	var_151_string = "idle"; // 0xaf PushS
	PlayAnimation(var_150_string, var_151_string); // 0xb0 Func
	goto Label_169; // 0xb2 Jump
}


func_8817()
{
	var_98_object = Obj(); var_99_object = Obj(); // 0x2271 PushV
	var_100_string = "Adding diary entry"; // 0x2272 PushS
	Trace(var_100_string); // 0x2273 Func
	var_101_int = 106; // 0x2275 PushI
	var_102_int = 2; // 0x2276 PushI
	var_103_int = 13729; // 0x2277 PushI
	CreateDiaryEntry(var_99_object, var_101_int, var_102_int, var_103_int); // 0x2278 Func
	var_104_bool = 0; var_105_object = Obj(); var_106_int = 0; // 0x227a PushV
	var_105_object = var_99_object; // 0x227b Mov
	var_106_int = 102; // 0x227c MovI
	func_8593(var_104_bool, var_105_object, var_106_int); // 0x227d Call
	return 2; // 0x227f Return
}


func_2166(var_2_object, var_151_string)
{
	var_152_bool = 0; // 0x877 PushV
	func_7232(var_152_bool); // 0x878 Call
	var_153_bool = var_152_bool == 0; // 0x87a Not
	if(var_153_bool == 0) goto Label_2173; // 0x87b JumpB
	return 0; // 0x87c Return
	
Label_2173:
	var_154_bool = var_151_string == var_2_object; // 0x87d Eq
	if(var_154_bool == 0) goto Label_2176; // 0x87e JumpB
	return 0; // 0x87f Return
	
Label_2176:
	var_155_string = ""; // 0x880 PushV
	var_155_string = var_151_string; // 0x881 Mov
	func_7125(var_155_string); // 0x882 Call
	var_2_object = var_151_string; // 0x884 TMov
	return 0; // 0x885 Return
}


func_8313(var_201_bool)
{
	var_203_int = 0; var_204_string = ""; // 0x207a PushV
	var_204_string = "ood8MladVlad5"; // 0x207b MovS
	func_7160(var_203_int, var_204_string); // 0x207c Call
	var_205_int = 0; // 0x207e PushI
	var_206_bool = var_203_int == var_205_int; // 0x207f Eq
	if(var_206_bool == 0) goto Label_8323; // 0x2080 JumpB
	var_201_bool = 1; // 0x2081 MovB
	return 0; // 0x2082 Return
	
Label_8323:
	var_201_bool = 0; // 0x2083 MovB
	return 0; // 0x2084 Return
}


func_7290()
{
	var_148_string = "playsound"; // 0x1c7b PushS
	var_149_string = "givemoney"; // 0x1c7c PushS
	TriggerWorld(var_148_string, var_149_string); // 0x1c7d Func
	return 0; // 0x1c7f Return
}


func_7296()
{
	var_52_string = "KnowPochka"; // 0x1c81 PushS
	var_53_int = 1; // 0x1c82 PushI
	SetVariable(var_52_string, var_53_int); // 0x1c83 Func
	return 0; // 0x1c85 Return
}


func_8833()
{
	var_186_object = Obj(); var_187_object = Obj(); // 0x2281 PushV
	var_188_string = "Adding diary entry"; // 0x2282 PushS
	Trace(var_188_string); // 0x2283 Func
	var_189_int = 110; // 0x2285 PushI
	var_190_int = 2; // 0x2286 PushI
	var_191_int = 13733; // 0x2287 PushI
	CreateDiaryEntry(var_187_object, var_189_int, var_190_int, var_191_int); // 0x2288 Func
	var_192_bool = 0; var_193_object = Obj(); var_194_int = 0; // 0x228a PushV
	var_193_object = var_187_object; // 0x228b Mov
	var_194_int = 107; // 0x228c MovI
	func_8593(var_192_bool, var_193_object, var_194_int); // 0x228d Call
	return 2; // 0x228f Return
}


func_5252(var_0_object, var_810_int, var_811_object)
{
	var_813_object = Obj(); var_814_bool = 0; var_815_int = 0; var_816_bool = 0; var_817_object = Obj(); var_818_bool = 0; var_819_int = 0; var_820_bool = 0; // 0x1484 PushV
	var_0_object = var_811_object; // 0x1485 TMov
	var_821_bool = 0; var_822_object = Obj(); // 0x1486 PushV
	var_822_object = var_811_object; // 0x1487 Mov
	func_7065(var_822_object); // 0x1488 Call
	var_823_bool = var_821_bool == 0; // 0x148a Not
	if(var_823_bool == 0) goto Label_5262; // 0x148b JumpB
	var_810_int = -2; // 0x148c MovI
	return 8; // 0x148d Return
	
Label_5262:
	CreateDialog(var_817_object); // 0x148e Func
	var_824_int = 0; // 0x1490 PushV
	func_7228(var_824_int); // 0x1491 Call
	SetNPCName(var_824_int); // 0x1493 ObjFunc
	var_825_string = ""; // 0x1495 PushV
	func_7230(var_825_string); // 0x1496 Call
	SetPhoto(var_825_string); // 0x1498 ObjFunc
	var_826_int = 0; // 0x149a PushV
	func_8672(var_826_int); // 0x149b Call
	SetPlayerName(var_826_int); // 0x149d ObjFunc
	var_819_int = -1; // 0x149f MovI
	IsOverrideActive(var_818_bool); // 0x14a0 Func
	var_827_bool = var_818_bool; // 0x14a2 Push
	if(var_827_bool == 0) goto Label_5286; // 0x14a3 JumpB
	var_810_int = -2; // 0x14a4 MovI
	return 8; // 0x14a5 Return
	
Label_5286:
	DoDialog(var_817_object); // 0x14a6 Func
	var_828_object = Obj(); var_829_object = Obj(); // 0x14a8 PushV
	var_828_object = var_811_object; // 0x14a9 Mov
	var_829_object = var_817_object; // 0x14aa Mov
	TaskCall(15); // 0x14ab TaskCall
	func_5315(var_830_object, var_831_object, var_832_string, var_833_bool, var_828_object, var_829_object); // 0x14ac Call
	TaskReturn(); // 0x14ad TaskReturn
	IsDialogEnd(var_820_bool); // 0x14af ObjFunc
	
Label_5297:
	var_911_bool = var_820_bool == 0; // 0x14b1 Not
	if(var_911_bool == 0) goto Label_5304; // 0x14b2 JumpB
	sync(); // 0x14b3 Func
	IsDialogEnd(var_820_bool); // 0x14b5 ObjFunc
	goto Label_5297; // 0x14b7 Jump
	
Label_5304:
	var_912_object = Obj(); // 0x14b8 PushV
	var_912_object = var_811_object; // 0x14b9 Mov
	func_7121(); // 0x14ba Call
	StopDialog(var_817_object); // 0x14bc Func
	GetReturnValue(var_819_int); // 0x14be ObjFunc
	var_810_int = var_819_int; // 0x14c0 Mov
	return 8; // 0x14c1 Return
}


func_8325(var_396_bool)
{
	var_398_int = 0; var_399_string = ""; // 0x2086 PushV
	var_399_string = "KnowBigVlad"; // 0x2087 MovS
	func_7160(var_398_int, var_399_string); // 0x2088 Call
	var_400_int = 1; // 0x208a PushI
	var_401_bool = var_398_int == var_400_int; // 0x208b Eq
	if(var_401_bool == 0) goto Label_8335; // 0x208c JumpB
	var_396_bool = 1; // 0x208d MovB
	return 0; // 0x208e Return
	
Label_8335:
	var_396_bool = 0; // 0x208f MovB
	return 0; // 0x2090 Return
}


func_7302()
{
	var_48_string = "ood2MladVlad1"; // 0x1c87 PushS
	var_49_int = 1; // 0x1c88 PushI
	SetVariable(var_48_string, var_49_int); // 0x1c89 Func
	return 0; // 0x1c8b Return
}


func_7819()
{
	func_8849(); // 0x1e8d Call
	return 0; // 0x1e8f Return
}


func_7308()
{
	var_86_string = "ood2MladVlad2"; // 0x1c8d PushS
	var_87_int = 1; // 0x1c8e PushI
	SetVariable(var_86_string, var_87_int); // 0x1c8f Func
	return 0; // 0x1c91 Return
}


func_7824()
{
	var_145_string = "KnowTaurusProject"; // 0x1e91 PushS
	var_146_int = 1; // 0x1e92 PushI
	SetVariable(var_145_string, var_146_int); // 0x1e93 Func
	return 0; // 0x1e95 Return
}


func_8337(var_428_bool)
{
	var_430_int = 0; var_431_string = ""; // 0x2092 PushV
	var_431_string = "KnowGrif"; // 0x2093 MovS
	func_7160(var_430_int, var_431_string); // 0x2094 Call
	var_432_int = 1; // 0x2096 PushI
	var_433_bool = var_430_int == var_432_int; // 0x2097 Eq
	if(var_433_bool == 0) goto Label_8347; // 0x2098 JumpB
	var_428_bool = 1; // 0x2099 MovB
	return 0; // 0x209a Return
	
Label_8347:
	var_428_bool = 0; // 0x209b MovB
	return 0; // 0x209c Return
}


func_7314()
{
	var_121_string = "ood2MladVlad3"; // 0x1c93 PushS
	var_122_int = 1; // 0x1c94 PushI
	SetVariable(var_121_string, var_122_int); // 0x1c95 Func
	return 0; // 0x1c97 Return
}


func_8849()
{
	var_52_object = Obj(); var_53_object = Obj(); // 0x2291 PushV
	var_54_string = "Adding diary entry"; // 0x2292 PushS
	Trace(var_54_string); // 0x2293 Func
	var_55_int = 177; // 0x2295 PushI
	var_56_int = 1; // 0x2296 PushI
	var_57_int = 15436; // 0x2297 PushI
	CreateDiaryEntry(var_53_object, var_55_int, var_56_int, var_57_int); // 0x2298 Func
	var_58_bool = 0; var_59_object = Obj(); var_60_int = 0; // 0x229a PushV
	var_59_object = var_53_object; // 0x229b Mov
	var_60_int = 175; // 0x229c MovI
	func_8593(var_58_bool, var_59_object, var_60_int); // 0x229d Call
	return 2; // 0x229f Return
}


func_7830()
{
	var_48_string = "ood1MladVlad1"; // 0x1e97 PushS
	var_49_int = 1; // 0x1e98 PushI
	SetVariable(var_48_string, var_49_int); // 0x1e99 Func
	return 0; // 0x1e9b Return
}


func_7320()
{
	var_131_string = "ood2MladVlad4"; // 0x1c99 PushS
	var_132_int = 1; // 0x1c9a PushI
	SetVariable(var_131_string, var_132_int); // 0x1c9b Func
	return 0; // 0x1c9d Return
}


func_7836()
{
	var_194_string = "ood1MladVlad2"; // 0x1e9d PushS
	var_195_int = 1; // 0x1e9e PushI
	SetVariable(var_194_string, var_195_int); // 0x1e9f Func
	return 0; // 0x1ea1 Return
}


func_8349(var_380_bool)
{
	var_382_int = 0; var_383_string = ""; // 0x209e PushV
	var_383_string = "KnowKaterina"; // 0x209f MovS
	func_7160(var_382_int, var_383_string); // 0x20a0 Call
	var_384_int = 1; // 0x20a2 PushI
	var_385_bool = var_382_int == var_384_int; // 0x20a3 Eq
	if(var_385_bool == 0) goto Label_8359; // 0x20a4 JumpB
	var_380_bool = 1; // 0x20a5 MovB
	return 0; // 0x20a6 Return
	
Label_8359:
	var_380_bool = 0; // 0x20a7 MovB
	return 0; // 0x20a8 Return
}


func_7326()
{
	var_52_string = "d2q04"; // 0x1c9f PushS
	var_53_int = 1; // 0x1ca0 PushI
	SetVariable(var_52_string, var_53_int); // 0x1ca1 Func
	return 0; // 0x1ca3 Return
}


func_8865()
{
	var_40_bool = GlobalVars[1]; // 0x22a1 PushGE
	var_40_bool = 0; // 0x22a2 MovB
	GlobalVars[1] = var_40_bool; // 0x22a3 PopGE
	return 0; // 0x22a4 Return
}


func_7842(var_284_bool)
{
	var_286_int = 0; var_287_string = ""; // 0x1ea3 PushV
	var_287_string = "ood1MladVlad4"; // 0x1ea4 MovS
	func_7160(var_286_int, var_287_string); // 0x1ea5 Call
	var_288_int = 0; // 0x1ea7 PushI
	var_289_bool = var_286_int == var_288_int; // 0x1ea8 Eq
	if(var_289_bool == 0) goto Label_7852; // 0x1ea9 JumpB
	var_284_bool = 1; // 0x1eaa MovB
	return 0; // 0x1eab Return
	
Label_7852:
	var_284_bool = 0; // 0x1eac MovB
	return 0; // 0x1ead Return
}


func_7332()
{
	var_127_object = Obj(); var_128_string = ""; var_129_float = 0; // 0x1ca5 PushV
	var_130_object = Obj(); // 0x1ca6 PushV
	func_8622(var_130_object); // 0x1ca7 Call
	var_127_object = var_130_object; // 0x1ca8 Mov
	var_128_string = "pt_map_anna"; // 0x1caa MovS
	var_129_float = 2; // 0x1cab MovI
	func_8639(var_127_object, var_128_string, var_129_float); // 0x1cac Call
	var_150_object = Obj(); // 0x1cae PushV
	func_8622(var_150_object); // 0x1caf Call
	ShowMap(var_150_object); // 0x1cb1 ObjFunc
	return 0; // 0x1cb3 Return
}


func_8869(var_41_object)
{
	var_42_bool = GlobalVars[1]; // 0x22a6 PushGE
	var_43_bool = var_42_bool == 0; // 0x22a7 Not
	if(var_43_bool == 0) goto Label_8882; // 0x22a8 JumpB
	var_44_int = 0; var_45_object = Obj(); // 0x22a9 PushV
	var_45_object = var_41_object; // 0x22aa Mov
	TaskCall(2); // 0x22ab TaskCall
	func_49(var_46_object, var_44_int, var_45_object); // 0x22ac Call
	TaskReturn(); // 0x22ad TaskReturn
	var_154_bool = GlobalVars[1]; // 0x22af PushGE
	var_154_bool = 1; // 0x22b0 MovB
	GlobalVars[1] = var_154_bool; // 0x22b1 PopGE
	
Label_8882:
	var_155_bool = 0; var_156_int = 0; // 0x22b2 PushV
	var_156_int = 1; // 0x22b3 MovI
	func_7213(var_155_bool, var_156_int); // 0x22b4 Call
	if(var_155_bool == 0) goto Label_8894; // 0x22b6 JumpB
	var_163_int = 0; var_164_object = Obj(); // 0x22b7 PushV
	var_164_object = var_41_object; // 0x22b8 Mov
	TaskCall(4); // 0x22b9 TaskCall
	func_299(var_165_object, var_163_int, var_164_object); // 0x22ba Call
	TaskReturn(); // 0x22bb TaskReturn
	return 0; // 0x22bd Return
	
Label_8894:
	var_426_bool = 0; var_427_int = 0; // 0x22be PushV
	var_427_int = 2; // 0x22bf MovI
	func_7213(var_426_bool, var_427_int); // 0x22c0 Call
	if(var_426_bool == 0) goto Label_8906; // 0x22c2 JumpB
	var_428_int = 0; var_429_object = Obj(); // 0x22c3 PushV
	var_429_object = var_41_object; // 0x22c4 Mov
	TaskCall(6); // 0x22c5 TaskCall
	func_1946(var_430_object, var_428_int, var_429_object); // 0x22c6 Call
	TaskReturn(); // 0x22c7 TaskReturn
	return 0; // 0x22c9 Return
	
Label_8906:
	var_533_bool = 0; var_534_int = 0; // 0x22ca PushV
	var_534_int = 3; // 0x22cb MovI
	func_7213(var_533_bool, var_534_int); // 0x22cc Call
	if(var_533_bool == 0) goto Label_8918; // 0x22ce JumpB
	var_535_int = 0; var_536_object = Obj(); // 0x22cf PushV
	var_536_object = var_41_object; // 0x22d0 Mov
	TaskCall(8); // 0x22d1 TaskCall
	func_2958(var_537_object, var_535_int, var_536_object); // 0x22d2 Call
	TaskReturn(); // 0x22d3 TaskReturn
	return 0; // 0x22d5 Return
	
Label_8918:
	var_594_bool = 0; var_595_int = 0; // 0x22d6 PushV
	var_595_int = 4; // 0x22d7 MovI
	func_7213(var_594_bool, var_595_int); // 0x22d8 Call
	if(var_594_bool == 0) goto Label_8930; // 0x22da JumpB
	var_596_int = 0; var_597_object = Obj(); // 0x22db PushV
	var_597_object = var_41_object; // 0x22dc Mov
	TaskCall(10); // 0x22dd TaskCall
	func_3608(var_598_object, var_596_int, var_597_object); // 0x22de Call
	TaskReturn(); // 0x22df TaskReturn
	return 0; // 0x22e1 Return
	
Label_8930:
	var_694_bool = 0; var_695_int = 0; // 0x22e2 PushV
	var_695_int = 5; // 0x22e3 MovI
	func_7213(var_694_bool, var_695_int); // 0x22e4 Call
	if(var_694_bool == 0) goto Label_8942; // 0x22e6 JumpB
	var_696_int = 0; var_697_object = Obj(); // 0x22e7 PushV
	var_697_object = var_41_object; // 0x22e8 Mov
	TaskCall(12); // 0x22e9 TaskCall
	func_4615(var_698_object, var_696_int, var_697_object); // 0x22ea Call
	TaskReturn(); // 0x22eb TaskReturn
	return 0; // 0x22ed Return
	
Label_8942:
	var_808_bool = 0; var_809_int = 0; // 0x22ee PushV
	var_809_int = 6; // 0x22ef MovI
	func_7213(var_808_bool, var_809_int); // 0x22f0 Call
	if(var_808_bool == 0) goto Label_8954; // 0x22f2 JumpB
	var_810_int = 0; var_811_object = Obj(); // 0x22f3 PushV
	var_811_object = var_41_object; // 0x22f4 Mov
	TaskCall(14); // 0x22f5 TaskCall
	func_5252(var_812_object, var_810_int, var_811_object); // 0x22f6 Call
	TaskReturn(); // 0x22f7 TaskReturn
	return 0; // 0x22f9 Return
	
Label_8954:
	var_913_bool = 0; var_914_int = 0; // 0x22fa PushV
	var_914_int = 8; // 0x22fb MovI
	func_7213(var_913_bool, var_914_int); // 0x22fc Call
	if(var_913_bool == 0) goto Label_8966; // 0x22fe JumpB
	var_915_int = 0; var_916_object = Obj(); // 0x22ff PushV
	var_916_object = var_41_object; // 0x2300 Mov
	TaskCall(16); // 0x2301 TaskCall
	func_5847(var_917_object, var_915_int, var_916_object); // 0x2302 Call
	TaskReturn(); // 0x2303 TaskReturn
	return 0; // 0x2305 Return
	
Label_8966:
	var_1042_bool = 0; // 0x2306 PushV
	func_7219(var_1042_bool); // 0x2307 Call
	return 0; // 0x2309 Return
}


func_8361(var_348_bool)
{
	var_350_int = 0; var_351_string = ""; // 0x20aa PushV
	var_351_string = "KnowLara"; // 0x20ab MovS
	func_7160(var_350_int, var_351_string); // 0x20ac Call
	var_352_int = 1; // 0x20ae PushI
	var_353_bool = var_350_int == var_352_int; // 0x20af Eq
	if(var_353_bool == 0) goto Label_8371; // 0x20b0 JumpB
	var_348_bool = 1; // 0x20b1 MovB
	return 0; // 0x20b2 Return
	
Label_8371:
	var_348_bool = 0; // 0x20b3 MovB
	return 0; // 0x20b4 Return
}


func_7854(var_322_bool)
{
	var_324_int = 0; var_325_string = ""; // 0x1eaf PushV
	var_325_string = "d1q01FirstGeorgVisit"; // 0x1eb0 MovS
	func_7160(var_324_int, var_325_string); // 0x1eb1 Call
	var_326_int = 1; // 0x1eb3 PushI
	var_327_bool = var_324_int == var_326_int; // 0x1eb4 Eq
	if(var_327_bool == 0) goto Label_7864; // 0x1eb5 JumpB
	var_322_bool = 1; // 0x1eb6 MovB
	return 0; // 0x1eb7 Return
	
Label_7864:
	var_322_bool = 0; // 0x1eb8 MovB
	return 0; // 0x1eb9 Return
}


func_180(var_2_object, var_54_string)
{
	var_55_bool = 0; // 0xb5 PushV
	func_7232(var_55_bool); // 0xb6 Call
	var_56_bool = var_55_bool == 0; // 0xb8 Not
	if(var_56_bool == 0) goto Label_187; // 0xb9 JumpB
	return 0; // 0xba Return
	
Label_187:
	var_57_bool = var_54_string == var_2_object; // 0xbb Eq
	if(var_57_bool == 0) goto Label_190; // 0xbc JumpB
	return 0; // 0xbd Return
	
Label_190:
	var_58_string = ""; // 0xbe PushV
	var_58_string = var_54_string; // 0xbf Mov
	func_7125(var_58_string); // 0xc0 Call
	var_2_object = var_54_string; // 0xc2 TMov
	return 0; // 0xc3 Return
}


func_693(var_2_object, var_255_string)
{
	var_256_bool = 0; // 0x2b6 PushV
	func_7232(var_256_bool); // 0x2b7 Call
	var_257_bool = var_256_bool == 0; // 0x2b9 Not
	if(var_257_bool == 0) goto Label_700; // 0x2ba JumpB
	return 0; // 0x2bb Return
	
Label_700:
	var_258_bool = var_255_string == var_2_object; // 0x2bc Eq
	if(var_258_bool == 0) goto Label_703; // 0x2bd JumpB
	return 0; // 0x2be Return
	
Label_703:
	var_259_string = ""; // 0x2bf PushV
	var_259_string = var_255_string; // 0x2c0 Mov
	func_7125(var_259_string); // 0x2c1 Call
	var_2_object = var_255_string; // 0x2c3 TMov
	return 0; // 0x2c4 Return
}


func_8373(var_354_bool)
{
	var_356_int = 0; var_357_string = ""; // 0x20b6 PushV
	var_357_string = "ood1MladVlad5"; // 0x20b7 MovS
	func_7160(var_356_int, var_357_string); // 0x20b8 Call
	var_358_int = 0; // 0x20ba PushI
	var_359_bool = var_356_int == var_358_int; // 0x20bb Eq
	if(var_359_bool == 0) goto Label_8383; // 0x20bc JumpB
	var_354_bool = 1; // 0x20bd MovB
	return 0; // 0x20be Return
	
Label_8383:
	var_354_bool = 0; // 0x20bf MovB
	return 0; // 0x20c0 Return
}


func_7348()
{
	var_105_object = Obj(); var_106_string = ""; var_107_float = 0; // 0x1cb5 PushV
	var_108_object = Obj(); // 0x1cb6 PushV
	func_8622(var_108_object); // 0x1cb7 Call
	var_105_object = var_108_object; // 0x1cb8 Mov
	var_106_string = "pt_map_ospina"; // 0x1cba MovS
	var_107_float = 2; // 0x1cbb MovI
	func_8639(var_105_object, var_106_string, var_107_float); // 0x1cbc Call
	var_128_object = Obj(); // 0x1cbe PushV
	func_8622(var_128_object); // 0x1cbf Call
	ShowMap(var_128_object); // 0x1cc1 ObjFunc
	return 0; // 0x1cc3 Return
}


func_7866(var_249_bool)
{
	var_251_int = 0; var_252_string = ""; // 0x1ebb PushV
	var_252_string = "d1q03"; // 0x1ebc MovS
	func_7160(var_251_int, var_252_string); // 0x1ebd Call
	var_253_int = 0; // 0x1ebf PushI
	var_254_bool = var_251_int == var_253_int; // 0x1ec0 Eq
	if(var_254_bool == 0) goto Label_7876; // 0x1ec1 JumpB
	var_249_bool = 1; // 0x1ec2 MovB
	return 0; // 0x1ec3 Return
	
Label_7876:
	var_249_bool = 0; // 0x1ec4 MovB
	return 0; // 0x1ec5 Return
}


func_8385(var_370_bool)
{
	var_372_int = 0; var_373_string = ""; // 0x20c2 PushV
	var_373_string = "ood1MladVlad6"; // 0x20c3 MovS
	func_7160(var_372_int, var_373_string); // 0x20c4 Call
	var_374_int = 0; // 0x20c6 PushI
	var_375_bool = var_372_int == var_374_int; // 0x20c7 Eq
	if(var_375_bool == 0) goto Label_8395; // 0x20c8 JumpB
	var_370_bool = 1; // 0x20c9 MovB
	return 0; // 0x20ca Return
	
Label_8395:
	var_370_bool = 0; // 0x20cb MovB
	return 0; // 0x20cc Return
}


func_5315(var_0_object, var_1_object, var_2_object, var_3_object, var_828_object, var_829_object)
{
	var_0_object = var_829_object; // 0x14c4 TMov
	var_1_object = var_828_object; // 0x14c5 TMov
	var_3_object = 0; // 0x14c6 TMovB
	var_834_int = 1; // 0x14c7 PushI
	if(var_834_int == 0) goto Label_5421; // 0x14c8 JumpB
	var_835_bool = 0; var_836_object = Obj(); // 0x14c9 PushV
	var_836_object = var_1_object; // 0x14ca MovT
	func_8097(var_836_object); // 0x14cb Call
	if(var_835_bool == 0) goto Label_5346; // 0x14cd JumpB
	var_841_string = ""; // 0x14ce PushV
	var_841_string = "Neutral"; // 0x14cf MovS
	func_5451(var_829_object, var_841_string); // 0x14d0 Call
	var_846_int = 12104; // 0x14d2 PushI
	SetMessage(var_846_int); // 0x14d3 TObjFunc
	ClearReplies(); // 0x14d5 TObjFunc
	var_847_int = 12105; // 0x14d7 PushI
	var_848_int = 13334; // 0x14d8 PushI
	var_849_int = 13331; // 0x14d9 PushI
	AddReply(var_847_int, var_848_int, var_849_int); // 0x14da TObjFunc
	var_850_int = 12106; // 0x14dc PushI
	var_851_int = 13333; // 0x14dd PushI
	var_852_int = 13332; // 0x14de PushI
	AddReply(var_850_int, var_851_int, var_852_int); // 0x14df TObjFunc
	goto Label_5421; // 0x14e1 Jump
	
Label_5421:
	var_853_bool = 0; // 0x152d PushV
	func_7232(var_853_bool); // 0x152e Call
	if(var_853_bool == 0) goto Label_5436; // 0x1530 JumpB
	
Label_5425:
	lshWaitForAnimEnd(); // 0x1531 Func
	var_854_object = var_3_object; // 0x1533 PushT
	if(var_854_object == 0) goto Label_5430; // 0x1534 JumpB
	goto Label_5435; // 0x1535 Jump
	
Label_5435:
	goto Label_5450; // 0x153b Jump
	
Label_5450:
	return 0; // 0x154a Return
	
Label_5430:
	var_855_string = ""; // 0x1536 PushV
	var_855_string = var_2_object; // 0x1537 MovT
	func_7125(var_855_string); // 0x1538 Call
	goto Label_5425; // 0x153a Jump
	
Label_5436:
	var_856_string = "all"; // 0x153c PushS
	var_857_string = "idle"; // 0x153d PushS
	PlayAnimation(var_856_string, var_857_string); // 0x153e Func
	
Label_5440:
	WaitForAnimEnd(); // 0x1540 Func
	var_858_object = var_3_object; // 0x1542 PushT
	if(var_858_object == 0) goto Label_5445; // 0x1543 JumpB
	goto Label_5450; // 0x1544 Jump
	
Label_5445:
	var_859_string = "all"; // 0x1545 PushS
	var_860_string = "idle"; // 0x1546 PushS
	PlayAnimation(var_859_string, var_860_string); // 0x1547 Func
	goto Label_5440; // 0x1549 Jump
	
Label_5346:
	var_861_string = ""; // 0x14e2 PushV
	var_861_string = "Neutral"; // 0x14e3 MovS
	func_5451(var_829_object, var_861_string); // 0x14e4 Call
	var_862_int = 12515; // 0x14e6 PushI
	SetMessage(var_862_int); // 0x14e7 TObjFunc
	ClearReplies(); // 0x14e9 TObjFunc
	var_863_bool = 0; var_864_object = Obj(); // 0x14eb PushV
	var_864_object = var_1_object; // 0x14ec MovT
	func_8085(var_864_object); // 0x14ed Call
	if(var_863_bool == 0) goto Label_5365; // 0x14ef JumpB
	var_869_int = 12520; // 0x14f0 PushI
	var_870_int = 13691; // 0x14f1 PushI
	var_871_int = 13690; // 0x14f2 PushI
	AddReply(var_869_int, var_870_int, var_871_int); // 0x14f3 TObjFunc
	
Label_5365:
	var_872_bool = 0; // 0x14f5 PushV
	var_872_bool = 0; // 0x14f6 MovB
	var_873_bool = 0; var_874_object = Obj(); // 0x14f7 PushV
	var_874_object = var_1_object; // 0x14f8 MovT
	func_8109(var_874_object); // 0x14f9 Call
	if(var_873_bool == 0) goto Label_5378; // 0x14fb JumpB
	var_879_bool = 0; var_880_object = Obj(); // 0x14fc PushV
	var_880_object = var_1_object; // 0x14fd MovT
	func_8205(var_880_object); // 0x14fe Call
	if(var_879_bool == 0) goto Label_5378; // 0x1500 JumpB
	var_872_bool = 1; // 0x1501 MovB
	
Label_5378:
	if(var_872_bool == 0) goto Label_5384; // 0x1502 JumpB
	var_885_int = 12516; // 0x1503 PushI
	var_886_int = 13688; // 0x1504 PushI
	var_887_int = 13686; // 0x1505 PushI
	AddReply(var_885_int, var_886_int, var_887_int); // 0x1506 TObjFunc
	
Label_5384:
	var_888_bool = 0; // 0x1508 PushV
	var_888_bool = 0; // 0x1509 MovB
	var_889_bool = 0; // 0x150a PushV
	var_889_bool = 0; // 0x150b MovB
	var_890_bool = 0; var_891_object = Obj(); // 0x150c PushV
	var_891_object = var_1_object; // 0x150d MovT
	func_8121(var_891_object); // 0x150e Call
	if(var_890_bool == 0) goto Label_5399; // 0x1510 JumpB
	var_896_bool = 0; var_897_object = Obj(); // 0x1511 PushV
	var_897_object = var_1_object; // 0x1512 MovT
	func_8217(var_897_object); // 0x1513 Call
	if(var_896_bool == 0) goto Label_5399; // 0x1515 JumpB
	var_889_bool = 1; // 0x1516 MovB
	
Label_5399:
	if(var_889_bool == 0) goto Label_5407; // 0x1517 JumpB
	var_902_bool = 0; var_903_object = Obj(); // 0x1518 PushV
	var_903_object = var_1_object; // 0x1519 MovT
	func_8205(var_903_object); // 0x151a Call
	var_904_bool = var_902_bool == 0; // 0x151c Not
	if(var_904_bool == 0) goto Label_5407; // 0x151d JumpB
	var_888_bool = 1; // 0x151e MovB
	
Label_5407:
	if(var_888_bool == 0) goto Label_5413; // 0x151f JumpB
	var_905_int = 12526; // 0x1520 PushI
	var_906_int = 13697; // 0x1521 PushI
	var_907_int = 13696; // 0x1522 PushI
	AddReply(var_905_int, var_906_int, var_907_int); // 0x1523 TObjFunc
	
Label_5413:
	var_908_int = 12517; // 0x1525 PushI
	var_909_int = -1; // 0x1526 PushI
	var_910_int = 13687; // 0x1527 PushI
	AddReply(var_908_int, var_909_int, var_910_int); // 0x1528 TObjFunc
	goto Label_5421; // 0x152a Jump
}


func_7364()
{
	var_205_object = Obj(); var_206_string = ""; var_207_float = 0; // 0x1cc5 PushV
	var_208_object = Obj(); // 0x1cc6 PushV
	func_8622(var_208_object); // 0x1cc7 Call
	var_205_object = var_208_object; // 0x1cc8 Mov
	var_206_string = "pt_map_bigvlad"; // 0x1cca MovS
	var_207_float = 2; // 0x1ccb MovI
	func_8639(var_205_object, var_206_string, var_207_float); // 0x1ccc Call
	var_209_object = Obj(); // 0x1cce PushV
	func_8622(var_209_object); // 0x1ccf Call
	ShowMap(var_209_object); // 0x1cd1 ObjFunc
	return 0; // 0x1cd3 Return
}


func_7878(var_290_bool)
{
	var_292_int = 0; var_293_string = ""; // 0x1ec7 PushV
	var_293_string = "d1q03"; // 0x1ec8 MovS
	func_7160(var_292_int, var_293_string); // 0x1ec9 Call
	var_294_int = 1000; // 0x1ecb PushI
	var_295_bool = var_292_int == var_294_int; // 0x1ecc Eq
	if(var_295_bool == 0) goto Label_7888; // 0x1ecd JumpB
	var_290_bool = 1; // 0x1ece MovB
	return 0; // 0x1ecf Return
	
Label_7888:
	var_290_bool = 0; // 0x1ed0 MovB
	return 0; // 0x1ed1 Return
}


func_8397(var_386_bool)
{
	var_388_int = 0; var_389_string = ""; // 0x20ce PushV
	var_389_string = "ood1MladVlad7"; // 0x20cf MovS
	func_7160(var_388_int, var_389_string); // 0x20d0 Call
	var_390_int = 0; // 0x20d2 PushI
	var_391_bool = var_388_int == var_390_int; // 0x20d3 Eq
	if(var_391_bool == 0) goto Label_8407; // 0x20d4 JumpB
	var_386_bool = 1; // 0x20d5 MovB
	return 0; // 0x20d6 Return
	
Label_8407:
	var_386_bool = 0; // 0x20d7 MovB
	return 0; // 0x20d8 Return
}


func_7890(var_296_bool)
{
	var_298_int = 0; var_299_string = ""; // 0x1ed3 PushV
	var_299_string = "d1q03IsKapella"; // 0x1ed4 MovS
	func_7160(var_298_int, var_299_string); // 0x1ed5 Call
	var_300_int = 1; // 0x1ed7 PushI
	var_301_bool = var_298_int == var_300_int; // 0x1ed8 Eq
	if(var_301_bool == 0) goto Label_7900; // 0x1ed9 JumpB
	var_296_bool = 1; // 0x1eda MovB
	return 0; // 0x1edb Return
	
Label_7900:
	var_296_bool = 0; // 0x1edc MovB
	return 0; // 0x1edd Return
}


func_7380()
{
	return 0; // 0x1cd5 Return
}


func_7382()
{
	var_50_object = Obj(); var_51_object = Obj(); // 0x1cd6 PushV
	var_52_string = "d3q02"; // 0x1cd7 PushS
	var_53_int = 2; // 0x1cd8 PushI
	SetVariable(var_52_string, var_53_int); // 0x1cd9 Func
	var_54_object = Obj(); // 0x1cdb PushV
	func_8622(var_54_object); // 0x1cdc Call
	var_51_object = var_54_object; // 0x1cdd Mov
	var_61_string = "d3q02MladVladGotoBigVlad"; // 0x1cdf PushS
	var_62_string = "pt_map_bigvlad"; // 0x1ce0 PushS
	var_63_int = 0; // 0x1ce1 PushI
	var_64_int = 11384; // 0x1ce2 PushI
	var_65_float = 0; // 0x1ce3 PushV
	func_7199(var_65_float); // 0x1ce4 Call
	AddMark(var_61_string, var_62_string, var_63_int, var_64_int, var_65_float); // 0x1ce6 ObjFunc
	func_8705(); // 0x1ce9 Call
	return 2; // 0x1ceb Return
}


func_5847(var_0_object, var_915_int, var_916_object)
{
	var_918_object = Obj(); var_919_bool = 0; var_920_int = 0; var_921_bool = 0; var_922_object = Obj(); var_923_bool = 0; var_924_int = 0; var_925_bool = 0; // 0x16d7 PushV
	var_0_object = var_916_object; // 0x16d8 TMov
	var_926_bool = 0; var_927_object = Obj(); // 0x16d9 PushV
	var_927_object = var_916_object; // 0x16da Mov
	func_7065(var_927_object); // 0x16db Call
	var_928_bool = var_926_bool == 0; // 0x16dd Not
	if(var_928_bool == 0) goto Label_5857; // 0x16de JumpB
	var_915_int = -2; // 0x16df MovI
	return 8; // 0x16e0 Return
	
Label_5857:
	CreateDialog(var_922_object); // 0x16e1 Func
	var_929_int = 0; // 0x16e3 PushV
	func_7228(var_929_int); // 0x16e4 Call
	SetNPCName(var_929_int); // 0x16e6 ObjFunc
	var_930_string = ""; // 0x16e8 PushV
	func_7230(var_930_string); // 0x16e9 Call
	SetPhoto(var_930_string); // 0x16eb ObjFunc
	var_931_int = 0; // 0x16ed PushV
	func_8672(var_931_int); // 0x16ee Call
	SetPlayerName(var_931_int); // 0x16f0 ObjFunc
	var_924_int = -1; // 0x16f2 MovI
	IsOverrideActive(var_923_bool); // 0x16f3 Func
	var_932_bool = var_923_bool; // 0x16f5 Push
	if(var_932_bool == 0) goto Label_5881; // 0x16f6 JumpB
	var_915_int = -2; // 0x16f7 MovI
	return 8; // 0x16f8 Return
	
Label_5881:
	DoDialog(var_922_object); // 0x16f9 Func
	var_933_object = Obj(); var_934_object = Obj(); // 0x16fb PushV
	var_933_object = var_916_object; // 0x16fc Mov
	var_934_object = var_922_object; // 0x16fd Mov
	TaskCall(17); // 0x16fe TaskCall
	func_5910(var_935_object, var_936_object, var_937_string, var_938_bool, var_933_object, var_934_object); // 0x16ff Call
	TaskReturn(); // 0x1700 TaskReturn
	IsDialogEnd(var_925_bool); // 0x1702 ObjFunc
	
Label_5892:
	var_1040_bool = var_925_bool == 0; // 0x1704 Not
	if(var_1040_bool == 0) goto Label_5899; // 0x1705 JumpB
	sync(); // 0x1706 Func
	IsDialogEnd(var_925_bool); // 0x1708 ObjFunc
	goto Label_5892; // 0x170a Jump
	
Label_5899:
	var_1041_object = Obj(); // 0x170b PushV
	var_1041_object = var_916_object; // 0x170c Mov
	func_7121(); // 0x170d Call
	StopDialog(var_922_object); // 0x170f Func
	GetReturnValue(var_924_int); // 0x1711 ObjFunc
	var_915_int = var_924_int; // 0x1713 Mov
	return 8; // 0x1714 Return
}


func_8409(var_402_bool)
{
	var_404_int = 0; var_405_string = ""; // 0x20da PushV
	var_405_string = "ood1MladVlad8"; // 0x20db MovS
	func_7160(var_404_int, var_405_string); // 0x20dc Call
	var_406_int = 0; // 0x20de PushI
	var_407_bool = var_404_int == var_406_int; // 0x20df Eq
	if(var_407_bool == 0) goto Label_8419; // 0x20e0 JumpB
	var_402_bool = 1; // 0x20e1 MovB
	return 0; // 0x20e2 Return
	
Label_8419:
	var_402_bool = 0; // 0x20e3 MovB
	return 0; // 0x20e4 Return
}


func_3802(var_2_object, var_244_string)
{
	var_245_bool = 0; // 0xedb PushV
	func_7232(var_245_bool); // 0xedc Call
	var_246_bool = var_245_bool == 0; // 0xede Not
	if(var_246_bool == 0) goto Label_3809; // 0xedf JumpB
	return 0; // 0xee0 Return
	
Label_3809:
	var_247_bool = var_244_string == var_2_object; // 0xee1 Eq
	if(var_247_bool == 0) goto Label_3812; // 0xee2 JumpB
	return 0; // 0xee3 Return
	
Label_3812:
	var_248_string = ""; // 0xee4 PushV
	var_248_string = var_244_string; // 0xee5 Mov
	func_7125(var_248_string); // 0xee6 Call
	var_2_object = var_244_string; // 0xee8 TMov
	return 0; // 0xee9 Return
}


func_4825(var_2_object, var_179_string)
{
	var_180_bool = 0; // 0x12da PushV
	func_7232(var_180_bool); // 0x12db Call
	var_181_bool = var_180_bool == 0; // 0x12dd Not
	if(var_181_bool == 0) goto Label_4832; // 0x12de JumpB
	return 0; // 0x12df Return
	
Label_4832:
	var_182_bool = var_179_string == var_2_object; // 0x12e0 Eq
	if(var_182_bool == 0) goto Label_4835; // 0x12e1 JumpB
	return 0; // 0x12e2 Return
	
Label_4835:
	var_183_string = ""; // 0x12e3 PushV
	var_183_string = var_179_string; // 0x12e4 Mov
	func_7125(var_183_string); // 0x12e5 Call
	var_2_object = var_179_string; // 0x12e7 TMov
	return 0; // 0x12e8 Return
}


func_7902(var_277_bool, var_278_object)
{
	var_279_bool = 0; var_280_object = Obj(); // 0x1edf PushV
	var_280_object = var_278_object; // 0x1ee0 Mov
	func_8577(var_280_object); // 0x1ee1 Call
	if(var_279_bool == 0) goto Label_7910; // 0x1ee3 JumpB
	var_277_bool = 1; // 0x1ee4 MovB
	return 0; // 0x1ee5 Return
	
Label_7910:
	var_277_bool = 0; // 0x1ee6 MovB
	return 0; // 0x1ee7 Return
}


func_8421(var_418_bool)
{
	var_420_int = 0; var_421_string = ""; // 0x20e6 PushV
	var_421_string = "ood1MladVlad9"; // 0x20e7 MovS
	func_7160(var_420_int, var_421_string); // 0x20e8 Call
	var_422_int = 0; // 0x20ea PushI
	var_423_bool = var_420_int == var_422_int; // 0x20eb Eq
	if(var_423_bool == 0) goto Label_8431; // 0x20ec JumpB
	var_418_bool = 1; // 0x20ed MovB
	return 0; // 0x20ee Return
	
Label_8431:
	var_418_bool = 0; // 0x20ef MovB
	return 0; // 0x20f0 Return
}


func_7912(var_144_bool)
{
	var_146_int = 0; var_147_string = ""; // 0x1ee9 PushV
	var_147_string = "d2q03"; // 0x1eea MovS
	func_7160(var_146_int, var_147_string); // 0x1eeb Call
	var_148_int = 1; // 0x1eed PushI
	var_149_bool = var_146_int == var_148_int; // 0x1eee Eq
	if(var_149_bool == 0) goto Label_7922; // 0x1eef JumpB
	var_144_bool = 1; // 0x1ef0 MovB
	return 0; // 0x1ef1 Return
	
Label_7922:
	var_144_bool = 0; // 0x1ef2 MovB
	return 0; // 0x1ef3 Return
}


func_7405()
{
	var_163_string = "ood4MladVlad1"; // 0x1cee PushS
	var_164_int = 1; // 0x1cef PushI
	SetVariable(var_163_string, var_164_int); // 0x1cf0 Func
	return 0; // 0x1cf2 Return
}


func_8433(var_434_bool)
{
	var_436_int = 0; var_437_string = ""; // 0x20f2 PushV
	var_437_string = "ood1MladVlad10"; // 0x20f3 MovS
	func_7160(var_436_int, var_437_string); // 0x20f4 Call
	var_438_int = 0; // 0x20f6 PushI
	var_439_bool = var_436_int == var_438_int; // 0x20f7 Eq
	if(var_439_bool == 0) goto Label_8443; // 0x20f8 JumpB
	var_434_bool = 1; // 0x20f9 MovB
	return 0; // 0x20fa Return
	
Label_8443:
	var_434_bool = 0; // 0x20fb MovB
	return 0; // 0x20fc Return
}


func_7411()
{
	var_167_object = Obj(); var_168_object = Obj(); // 0x1cf3 PushV
	var_169_string = "d4q01"; // 0x1cf4 PushS
	var_170_int = 3; // 0x1cf5 PushI
	SetVariable(var_169_string, var_170_int); // 0x1cf6 Func
	var_171_object = Obj(); // 0x1cf8 PushV
	func_8622(var_171_object); // 0x1cf9 Call
	var_168_object = var_171_object; // 0x1cfa Mov
	var_172_string = "d4q01MladVladGotoBigVlad"; // 0x1cfc PushS
	var_173_string = "pt_map_bigvlad"; // 0x1cfd PushS
	var_174_int = 1; // 0x1cfe PushI
	var_175_int = 11507; // 0x1cff PushI
	var_176_float = 0; // 0x1d00 PushV
	func_7199(var_176_float); // 0x1d01 Call
	AddMark(var_172_string, var_173_string, var_174_int, var_175_int, var_176_float); // 0x1d03 ObjFunc
	var_177_string = "d4q01MladVladGotoBigVladSelf"; // 0x1d05 PushS
	var_178_string = "pt_map_mladvlad"; // 0x1d06 PushS
	var_179_int = 1; // 0x1d07 PushI
	var_180_int = 15322; // 0x1d08 PushI
	var_181_float = 0; // 0x1d09 PushV
	func_7199(var_181_float); // 0x1d0a Call
	AddMark(var_177_string, var_178_string, var_179_int, var_180_int, var_181_float); // 0x1d0c ObjFunc
	func_8721(); // 0x1d0f Call
	return 2; // 0x1d11 Return
}


func_7924(var_136_bool)
{
	var_138_int = 0; var_139_string = ""; // 0x1ef5 PushV
	var_139_string = "ood2MladVlad1"; // 0x1ef6 MovS
	func_7160(var_138_int, var_139_string); // 0x1ef7 Call
	var_142_int = 0; // 0x1ef9 PushI
	var_143_bool = var_138_int == var_142_int; // 0x1efa Eq
	if(var_143_bool == 0) goto Label_7934; // 0x1efb JumpB
	var_136_bool = 1; // 0x1efc MovB
	return 0; // 0x1efd Return
	
Label_7934:
	var_136_bool = 0; // 0x1efe MovB
	return 0; // 0x1eff Return
}


func_8445(var_450_bool)
{
	var_452_int = 0; var_453_string = ""; // 0x20fe PushV
	var_453_string = "ood1MladVlad11"; // 0x20ff MovS
	func_7160(var_452_int, var_453_string); // 0x2100 Call
	var_454_int = 0; // 0x2102 PushI
	var_455_bool = var_452_int == var_454_int; // 0x2103 Eq
	if(var_455_bool == 0) goto Label_8455; // 0x2104 JumpB
	var_450_bool = 1; // 0x2105 MovB
	return 0; // 0x2106 Return
	
Label_8455:
	var_450_bool = 0; // 0x2107 MovB
	return 0; // 0x2108 Return
}


func_7936(var_176_bool)
{
	var_178_int = 0; var_179_string = ""; // 0x1f01 PushV
	var_179_string = "ood2MladVlad2"; // 0x1f02 MovS
	func_7160(var_178_int, var_179_string); // 0x1f03 Call
	var_180_int = 0; // 0x1f05 PushI
	var_181_bool = var_178_int == var_180_int; // 0x1f06 Eq
	if(var_181_bool == 0) goto Label_7946; // 0x1f07 JumpB
	var_176_bool = 1; // 0x1f08 MovB
	return 0; // 0x1f09 Return
	
Label_7946:
	var_176_bool = 0; // 0x1f0a MovB
	return 0; // 0x1f0b Return
}


func_8457(var_466_bool)
{
	var_468_int = 0; var_469_string = ""; // 0x210a PushV
	var_469_string = "ood1MladVlad12"; // 0x210b MovS
	func_7160(var_468_int, var_469_string); // 0x210c Call
	var_470_int = 0; // 0x210e PushI
	var_471_bool = var_468_int == var_470_int; // 0x210f Eq
	if(var_471_bool == 0) goto Label_8467; // 0x2110 JumpB
	var_466_bool = 1; // 0x2111 MovB
	return 0; // 0x2112 Return
	
Label_8467:
	var_466_bool = 0; // 0x2113 MovB
	return 0; // 0x2114 Return
}


func_7948(var_187_bool)
{
	var_189_int = 0; var_190_string = ""; // 0x1f0d PushV
	var_190_string = "ood2MladVlad3"; // 0x1f0e MovS
	func_7160(var_189_int, var_190_string); // 0x1f0f Call
	var_191_int = 0; // 0x1f11 PushI
	var_192_bool = var_189_int == var_191_int; // 0x1f12 Eq
	if(var_192_bool == 0) goto Label_7958; // 0x1f13 JumpB
	var_187_bool = 1; // 0x1f14 MovB
	return 0; // 0x1f15 Return
	
Label_7958:
	var_187_bool = 0; // 0x1f16 MovB
	return 0; // 0x1f17 Return
}


func_7443()
{
	var_193_object = Obj(); var_194_object = Obj(); // 0x1d13 PushV
	var_195_string = "d4q01_subquest"; // 0x1d14 PushS
	var_196_int = 1; // 0x1d15 PushI
	SetVariable(var_195_string, var_196_int); // 0x1d16 Func
	var_197_object = Obj(); // 0x1d18 PushV
	func_8622(var_197_object); // 0x1d19 Call
	var_194_object = var_197_object; // 0x1d1a Mov
	var_198_string = "d4q01MladVladGotoOspina"; // 0x1d1c PushS
	var_199_string = "pt_map_ospina"; // 0x1d1d PushS
	var_200_int = 1; // 0x1d1e PushI
	var_201_int = 11503; // 0x1d1f PushI
	var_202_float = 0; // 0x1d20 PushV
	func_7199(var_202_float); // 0x1d21 Call
	AddMark(var_198_string, var_199_string, var_200_int, var_201_int, var_202_float); // 0x1d23 ObjFunc
	return 2; // 0x1d25 Return
}


func_8469(var_460_bool)
{
	var_462_int = 0; var_463_string = ""; // 0x2116 PushV
	var_463_string = "KnowMaria"; // 0x2117 MovS
	func_7160(var_462_int, var_463_string); // 0x2118 Call
	var_464_int = 1; // 0x211a PushI
	var_465_bool = var_462_int == var_464_int; // 0x211b Eq
	if(var_465_bool == 0) goto Label_8479; // 0x211c JumpB
	var_460_bool = 1; // 0x211d MovB
	return 0; // 0x211e Return
	
Label_8479:
	var_460_bool = 0; // 0x211f MovB
	return 0; // 0x2120 Return
}


func_5910(var_0_object, var_1_object, var_2_object, var_3_object, var_933_object, var_934_object)
{
	var_0_object = var_934_object; // 0x1717 TMov
	var_1_object = var_933_object; // 0x1718 TMov
	var_3_object = 0; // 0x1719 TMovB
	var_939_int = 1; // 0x171a PushI
	if(var_939_int == 0) goto Label_6057; // 0x171b JumpB
	var_940_string = ""; // 0x171c PushV
	var_940_string = "Neutral"; // 0x171d MovS
	func_6087(var_934_object, var_940_string); // 0x171e Call
	var_945_int = 12410; // 0x1720 PushI
	SetMessage(var_945_int); // 0x1721 TObjFunc
	ClearReplies(); // 0x1723 TObjFunc
	var_946_bool = 0; // 0x1725 PushV
	var_946_bool = 0; // 0x1726 MovB
	var_947_bool = 0; // 0x1727 PushV
	var_947_bool = 0; // 0x1728 MovB
	var_948_bool = 0; var_949_object = Obj(); // 0x1729 PushV
	var_949_object = var_1_object; // 0x172a MovT
	func_8229(var_949_object); // 0x172b Call
	if(var_948_bool == 0) goto Label_5940; // 0x172d JumpB
	var_954_bool = 0; var_955_object = Obj(); // 0x172e PushV
	var_955_object = var_1_object; // 0x172f MovT
	func_8253(var_955_object); // 0x1730 Call
	if(var_954_bool == 0) goto Label_5940; // 0x1732 JumpB
	var_947_bool = 1; // 0x1733 MovB
	
Label_5940:
	if(var_947_bool == 0) goto Label_5948; // 0x1734 JumpB
	var_960_bool = 0; var_961_object = Obj(); // 0x1735 PushV
	var_961_object = var_1_object; // 0x1736 MovT
	func_8241(var_961_object); // 0x1737 Call
	var_966_bool = var_960_bool == 0; // 0x1739 Not
	if(var_966_bool == 0) goto Label_5948; // 0x173a JumpB
	var_946_bool = 1; // 0x173b MovB
	
Label_5948:
	if(var_946_bool == 0) goto Label_5954; // 0x173c JumpB
	var_967_int = 12412; // 0x173d PushI
	var_968_int = 13577; // 0x173e PushI
	var_969_int = 13576; // 0x173f PushI
	AddReply(var_967_int, var_968_int, var_969_int); // 0x1740 TObjFunc
	
Label_5954:
	var_970_bool = 0; // 0x1742 PushV
	var_970_bool = 0; // 0x1743 MovB
	var_971_bool = 0; var_972_object = Obj(); // 0x1744 PushV
	var_972_object = var_1_object; // 0x1745 MovT
	func_8241(var_972_object); // 0x1746 Call
	if(var_971_bool == 0) goto Label_5967; // 0x1748 JumpB
	var_973_bool = 0; var_974_object = Obj(); // 0x1749 PushV
	var_974_object = var_1_object; // 0x174a MovT
	func_8265(var_974_object); // 0x174b Call
	if(var_973_bool == 0) goto Label_5967; // 0x174d JumpB
	var_970_bool = 1; // 0x174e MovB
	
Label_5967:
	if(var_970_bool == 0) goto Label_5973; // 0x174f JumpB
	var_979_int = 13588; // 0x1750 PushI
	var_980_int = 14840; // 0x1751 PushI
	var_981_int = 14839; // 0x1752 PushI
	AddReply(var_979_int, var_980_int, var_981_int); // 0x1753 TObjFunc
	
Label_5973:
	var_982_bool = 0; // 0x1755 PushV
	var_982_bool = 0; // 0x1756 MovB
	var_983_bool = 0; // 0x1757 PushV
	var_983_bool = 0; // 0x1758 MovB
	var_984_bool = 0; var_985_object = Obj(); // 0x1759 PushV
	var_985_object = var_1_object; // 0x175a MovT
	func_8277(var_985_object); // 0x175b Call
	if(var_984_bool == 0) goto Label_5988; // 0x175d JumpB
	var_990_bool = 0; var_991_object = Obj(); // 0x175e PushV
	var_991_object = var_1_object; // 0x175f MovT
	func_8241(var_991_object); // 0x1760 Call
	if(var_990_bool == 0) goto Label_5988; // 0x1762 JumpB
	var_983_bool = 1; // 0x1763 MovB
	
Label_5988:
	if(var_983_bool == 0) goto Label_5995; // 0x1764 JumpB
	var_992_bool = 0; var_993_object = Obj(); // 0x1765 PushV
	var_993_object = var_1_object; // 0x1766 MovT
	func_8289(var_993_object); // 0x1767 Call
	if(var_992_bool == 0) goto Label_5995; // 0x1769 JumpB
	var_982_bool = 1; // 0x176a MovB
	
Label_5995:
	if(var_982_bool == 0) goto Label_6001; // 0x176b JumpB
	var_998_int = 13607; // 0x176c PushI
	var_999_int = 14868; // 0x176d PushI
	var_1000_int = 14862; // 0x176e PushI
	AddReply(var_998_int, var_999_int, var_1000_int); // 0x176f TObjFunc
	
Label_6001:
	var_1001_bool = 0; // 0x1771 PushV
	var_1001_bool = 0; // 0x1772 MovB
	var_1002_bool = 0; var_1003_object = Obj(); // 0x1773 PushV
	var_1003_object = var_1_object; // 0x1774 MovT
	func_8277(var_1003_object); // 0x1775 Call
	if(var_1002_bool == 0) goto Label_6014; // 0x1777 JumpB
	var_1004_bool = 0; var_1005_object = Obj(); // 0x1778 PushV
	var_1005_object = var_1_object; // 0x1779 MovT
	func_8313(var_1005_object); // 0x177a Call
	if(var_1004_bool == 0) goto Label_6014; // 0x177c JumpB
	var_1001_bool = 1; // 0x177d MovB
	
Label_6014:
	if(var_1001_bool == 0) goto Label_6020; // 0x177e JumpB
	var_1010_int = 13618; // 0x177f PushI
	var_1011_int = 14874; // 0x1780 PushI
	var_1012_int = 14873; // 0x1781 PushI
	AddReply(var_1010_int, var_1011_int, var_1012_int); // 0x1782 TObjFunc
	
Label_6020:
	var_1013_bool = 0; // 0x1784 PushV
	var_1013_bool = 0; // 0x1785 MovB
	var_1014_bool = 0; // 0x1786 PushV
	var_1014_bool = 0; // 0x1787 MovB
	var_1015_bool = 0; var_1016_object = Obj(); // 0x1788 PushV
	var_1016_object = var_1_object; // 0x1789 MovT
	func_8241(var_1016_object); // 0x178a Call
	var_1017_bool = var_1015_bool == 0; // 0x178c Not
	if(var_1017_bool == 0) goto Label_6036; // 0x178d JumpB
	var_1018_bool = 0; var_1019_object = Obj(); // 0x178e PushV
	var_1019_object = var_1_object; // 0x178f MovT
	func_8229(var_1019_object); // 0x1790 Call
	if(var_1018_bool == 0) goto Label_6036; // 0x1792 JumpB
	var_1014_bool = 1; // 0x1793 MovB
	
Label_6036:
	if(var_1014_bool == 0) goto Label_6043; // 0x1794 JumpB
	var_1020_bool = 0; var_1021_object = Obj(); // 0x1795 PushV
	var_1021_object = var_1_object; // 0x1796 MovT
	func_8301(var_1021_object); // 0x1797 Call
	if(var_1020_bool == 0) goto Label_6043; // 0x1799 JumpB
	var_1013_bool = 1; // 0x179a MovB
	
Label_6043:
	if(var_1013_bool == 0) goto Label_6049; // 0x179b JumpB
	var_1026_int = 13612; // 0x179c PushI
	var_1027_int = 14863; // 0x179d PushI
	var_1028_int = 14867; // 0x179e PushI
	AddReply(var_1026_int, var_1027_int, var_1028_int); // 0x179f TObjFunc
	
Label_6049:
	var_1029_int = 12411; // 0x17a1 PushI
	var_1030_int = -1; // 0x17a2 PushI
	var_1031_int = 13575; // 0x17a3 PushI
	AddReply(var_1029_int, var_1030_int, var_1031_int); // 0x17a4 TObjFunc
	goto Label_6057; // 0x17a6 Jump
	
Label_6057:
	var_1032_bool = 0; // 0x17a9 PushV
	func_7232(var_1032_bool); // 0x17aa Call
	if(var_1032_bool == 0) goto Label_6072; // 0x17ac JumpB
	
Label_6061:
	lshWaitForAnimEnd(); // 0x17ad Func
	var_1033_object = var_3_object; // 0x17af PushT
	if(var_1033_object == 0) goto Label_6066; // 0x17b0 JumpB
	goto Label_6071; // 0x17b1 Jump
	
Label_6071:
	goto Label_6086; // 0x17b7 Jump
	
Label_6086:
	return 0; // 0x17c6 Return
	
Label_6066:
	var_1034_string = ""; // 0x17b2 PushV
	var_1034_string = var_2_object; // 0x17b3 MovT
	func_7125(var_1034_string); // 0x17b4 Call
	goto Label_6061; // 0x17b6 Jump
	
Label_6072:
	var_1035_string = "all"; // 0x17b8 PushS
	var_1036_string = "idle"; // 0x17b9 PushS
	PlayAnimation(var_1035_string, var_1036_string); // 0x17ba Func
	
Label_6076:
	WaitForAnimEnd(); // 0x17bc Func
	var_1037_object = var_3_object; // 0x17be PushT
	if(var_1037_object == 0) goto Label_6081; // 0x17bf JumpB
	goto Label_6086; // 0x17c0 Jump
	
Label_6081:
	var_1038_string = "all"; // 0x17c1 PushS
	var_1039_string = "idle"; // 0x17c2 PushS
	PlayAnimation(var_1038_string, var_1039_string); // 0x17c3 Func
	goto Label_6076; // 0x17c5 Jump
}


func_7960(var_196_bool)
{
	var_198_int = 0; var_199_string = ""; // 0x1f19 PushV
	var_199_string = "ood2MladVlad4"; // 0x1f1a MovS
	func_7160(var_198_int, var_199_string); // 0x1f1b Call
	var_200_int = 0; // 0x1f1d PushI
	var_201_bool = var_198_int == var_200_int; // 0x1f1e Eq
	if(var_201_bool == 0) goto Label_7970; // 0x1f1f JumpB
	var_196_bool = 1; // 0x1f20 MovB
	return 0; // 0x1f21 Return
	
Label_7970:
	var_196_bool = 0; // 0x1f22 MovB
	return 0; // 0x1f23 Return
}


func_8481(var_364_bool)
{
	var_366_int = 0; var_367_string = ""; // 0x2122 PushV
	var_367_string = "KnowOspina"; // 0x2123 MovS
	func_7160(var_366_int, var_367_string); // 0x2124 Call
	var_368_int = 1; // 0x2126 PushI
	var_369_bool = var_366_int == var_368_int; // 0x2127 Eq
	if(var_369_bool == 0) goto Label_8491; // 0x2128 JumpB
	var_364_bool = 1; // 0x2129 MovB
	return 0; // 0x212a Return
	
Label_8491:
	var_364_bool = 0; // 0x212b MovB
	return 0; // 0x212c Return
}


func_7972(var_205_bool)
{
	var_207_int = 0; var_208_string = ""; // 0x1f25 PushV
	var_208_string = "d2q04"; // 0x1f26 MovS
	func_7160(var_207_int, var_208_string); // 0x1f27 Call
	var_209_int = 0; // 0x1f29 PushI
	var_210_bool = var_207_int == var_209_int; // 0x1f2a Eq
	if(var_210_bool == 0) goto Label_7982; // 0x1f2b JumpB
	var_205_bool = 1; // 0x1f2c MovB
	return 0; // 0x1f2d Return
	
Label_7982:
	var_205_bool = 0; // 0x1f2e MovB
	return 0; // 0x1f2f Return
}


func_7463()
{
	var_48_string = "ood4MladVlad2"; // 0x1d28 PushS
	var_49_int = 1; // 0x1d29 PushI
	SetVariable(var_48_string, var_49_int); // 0x1d2a Func
	return 0; // 0x1d2c Return
}


func_299(var_0_object, var_163_int, var_164_object)
{
	var_166_object = Obj(); var_167_bool = 0; var_168_int = 0; var_169_bool = 0; var_170_object = Obj(); var_171_bool = 0; var_172_int = 0; var_173_bool = 0; // 0x12b PushV
	var_0_object = var_164_object; // 0x12c TMov
	var_174_bool = 0; var_175_object = Obj(); // 0x12d PushV
	var_175_object = var_164_object; // 0x12e Mov
	func_7065(var_175_object); // 0x12f Call
	var_176_bool = var_174_bool == 0; // 0x131 Not
	if(var_176_bool == 0) goto Label_309; // 0x132 JumpB
	var_163_int = -2; // 0x133 MovI
	return 8; // 0x134 Return
	
Label_309:
	CreateDialog(var_170_object); // 0x135 Func
	var_177_int = 0; // 0x137 PushV
	func_7228(var_177_int); // 0x138 Call
	SetNPCName(var_177_int); // 0x13a ObjFunc
	var_178_string = ""; // 0x13c PushV
	func_7230(var_178_string); // 0x13d Call
	SetPhoto(var_178_string); // 0x13f ObjFunc
	var_179_int = 0; // 0x141 PushV
	func_8672(var_179_int); // 0x142 Call
	SetPlayerName(var_179_int); // 0x144 ObjFunc
	var_172_int = -1; // 0x146 MovI
	IsOverrideActive(var_171_bool); // 0x147 Func
	var_180_bool = var_171_bool; // 0x149 Push
	if(var_180_bool == 0) goto Label_333; // 0x14a JumpB
	var_163_int = -2; // 0x14b MovI
	return 8; // 0x14c Return
	
Label_333:
	DoDialog(var_170_object); // 0x14d Func
	var_181_object = Obj(); var_182_object = Obj(); // 0x14f PushV
	var_181_object = var_164_object; // 0x150 Mov
	var_182_object = var_170_object; // 0x151 Mov
	TaskCall(5); // 0x152 TaskCall
	func_362(var_183_object, var_184_object, var_185_string, var_186_bool, var_181_object, var_182_object); // 0x153 Call
	TaskReturn(); // 0x154 TaskReturn
	IsDialogEnd(var_173_bool); // 0x156 ObjFunc
	
Label_344:
	var_424_bool = var_173_bool == 0; // 0x158 Not
	if(var_424_bool == 0) goto Label_351; // 0x159 JumpB
	sync(); // 0x15a Func
	IsDialogEnd(var_173_bool); // 0x15c ObjFunc
	goto Label_344; // 0x15e Jump
	
Label_351:
	var_425_object = Obj(); // 0x15f PushV
	var_425_object = var_164_object; // 0x160 Mov
	func_7121(); // 0x161 Call
	StopDialog(var_170_object); // 0x163 Func
	GetReturnValue(var_172_int); // 0x165 ObjFunc
	var_163_int = var_172_int; // 0x167 Mov
	return 8; // 0x168 Return
}


func_8493(var_444_bool)
{
	var_446_int = 0; var_447_string = ""; // 0x212e PushV
	var_447_string = "KnowKapella"; // 0x212f MovS
	func_7160(var_446_int, var_447_string); // 0x2130 Call
	var_448_int = 1; // 0x2132 PushI
	var_449_bool = var_446_int == var_448_int; // 0x2133 Eq
	if(var_449_bool == 0) goto Label_8503; // 0x2134 JumpB
	var_444_bool = 1; // 0x2135 MovB
	return 0; // 0x2136 Return
	
Label_8503:
	var_444_bool = 0; // 0x2137 MovB
	return 0; // 0x2138 Return
}


func_7469()
{
	var_52_object = Obj(); var_53_object = Obj(); // 0x1d2d PushV
	var_54_object = Obj(); // 0x1d2e PushV
	func_8622(var_54_object); // 0x1d2f Call
	var_53_object = var_54_object; // 0x1d30 Mov
	var_61_string = "d4q02MladVladGotoAnna"; // 0x1d32 PushS
	var_62_string = "pt_map_anna"; // 0x1d33 PushS
	var_63_int = 0; // 0x1d34 PushI
	var_64_int = 11526; // 0x1d35 PushI
	var_65_float = 0; // 0x1d36 PushV
	func_7199(var_65_float); // 0x1d37 Call
	AddMark(var_61_string, var_62_string, var_63_int, var_64_int, var_65_float); // 0x1d39 ObjFunc
	var_68_string = "d4q02MladVladGotoJulia"; // 0x1d3b PushS
	var_69_string = "pt_map_julia"; // 0x1d3c PushS
	var_70_int = 0; // 0x1d3d PushI
	var_71_int = 11524; // 0x1d3e PushI
	var_72_float = 0; // 0x1d3f PushV
	func_7199(var_72_float); // 0x1d40 Call
	AddMark(var_68_string, var_69_string, var_70_int, var_71_int, var_72_float); // 0x1d42 ObjFunc
	var_73_string = "d4q02MladVladGotoLara"; // 0x1d44 PushS
	var_74_string = "pt_map_lara"; // 0x1d45 PushS
	var_75_int = 0; // 0x1d46 PushI
	var_76_int = 11525; // 0x1d47 PushI
	var_77_float = 0; // 0x1d48 PushV
	func_7199(var_77_float); // 0x1d49 Call
	AddMark(var_73_string, var_74_string, var_75_int, var_76_int, var_77_float); // 0x1d4b ObjFunc
	var_78_string = "d4q02MladVladGotoAJLSelf"; // 0x1d4d PushS
	var_79_string = "pt_map_mladvlad"; // 0x1d4e PushS
	var_80_int = 0; // 0x1d4f PushI
	var_81_int = 15328; // 0x1d50 PushI
	var_82_float = 0; // 0x1d51 PushV
	func_7199(var_82_float); // 0x1d52 Call
	AddMark(var_78_string, var_79_string, var_80_int, var_81_int, var_82_float); // 0x1d54 ObjFunc
	func_8737(); // 0x1d57 Call
	func_8753(); // 0x1d5a Call
	var_117_object = Obj(); var_118_string = ""; // 0x1d5c PushV
	var_118_string = "quest_d4_02"; // 0x1d5d MovS
	func_7176(var_117_object, var_118_string); // 0x1d5e Call
	return 2; // 0x1d60 Return
}


func_7984(var_412_bool)
{
	var_414_int = 0; var_415_string = ""; // 0x1f31 PushV
	var_415_string = "KnowViktor"; // 0x1f32 MovS
	func_7160(var_414_int, var_415_string); // 0x1f33 Call
	var_416_int = 1; // 0x1f35 PushI
	var_417_bool = var_414_int == var_416_int; // 0x1f36 Eq
	if(var_417_bool == 0) goto Label_7994; // 0x1f37 JumpB
	var_412_bool = 1; // 0x1f38 MovB
	return 0; // 0x1f39 Return
	
Label_7994:
	var_412_bool = 0; // 0x1f3a MovB
	return 0; // 0x1f3b Return
}


func_8505(var_332_bool)
{
	var_334_int = 0; var_335_string = ""; // 0x213a PushV
	var_335_string = "KnowMyth"; // 0x213b MovS
	func_7160(var_334_int, var_335_string); // 0x213c Call
	var_336_int = 1; // 0x213e PushI
	var_337_bool = var_334_int == var_336_int; // 0x213f Eq
	if(var_337_bool == 0) goto Label_8515; // 0x2140 JumpB
	var_332_bool = 1; // 0x2141 MovB
	return 0; // 0x2142 Return
	
Label_8515:
	var_332_bool = 0; // 0x2143 MovB
	return 0; // 0x2144 Return
}


func_7996(var_154_bool)
{
	var_156_int = 0; var_157_string = ""; // 0x1f3d PushV
	var_157_string = "d3q02"; // 0x1f3e MovS
	func_7160(var_156_int, var_157_string); // 0x1f3f Call
	var_160_int = 1; // 0x1f41 PushI
	var_161_bool = var_156_int == var_160_int; // 0x1f42 Eq
	if(var_161_bool == 0) goto Label_8006; // 0x1f43 JumpB
	var_154_bool = 1; // 0x1f44 MovB
	return 0; // 0x1f45 Return
	
Label_8006:
	var_154_bool = 0; // 0x1f46 MovB
	return 0; // 0x1f47 Return
}


func_8517(var_642_bool)
{
	var_644_int = 0; var_645_string = ""; // 0x2146 PushV
	var_645_string = "KnowTermitnik"; // 0x2147 MovS
	func_7160(var_644_int, var_645_string); // 0x2148 Call
	var_646_int = 1; // 0x214a PushI
	var_647_bool = var_644_int == var_646_int; // 0x214b Eq
	if(var_647_bool == 0) goto Label_8527; // 0x214c JumpB
	var_642_bool = 1; // 0x214d MovB
	return 0; // 0x214e Return
	
Label_8527:
	var_642_bool = 0; // 0x214f MovB
	return 0; // 0x2150 Return
}


func_8008(var_162_bool)
{
	var_162_bool = 1; // 0x1f49 MovB
	return 0; // 0x1f4a Return
}


func_5451(var_2_object, var_208_string)
{
	var_209_bool = 0; // 0x154c PushV
	func_7232(var_209_bool); // 0x154d Call
	var_210_bool = var_209_bool == 0; // 0x154f Not
	if(var_210_bool == 0) goto Label_5458; // 0x1550 JumpB
	return 0; // 0x1551 Return
	
Label_5458:
	var_211_bool = var_208_string == var_2_object; // 0x1552 Eq
	if(var_211_bool == 0) goto Label_5461; // 0x1553 JumpB
	return 0; // 0x1554 Return
	
Label_5461:
	var_212_string = ""; // 0x1555 PushV
	var_212_string = var_208_string; // 0x1556 Mov
	func_7125(var_212_string); // 0x1557 Call
	var_2_object = var_208_string; // 0x1559 TMov
	return 0; // 0x155a Return
}


func_8013(var_237_bool)
{
	var_239_int = 0; var_240_string = ""; // 0x1f4e PushV
	var_240_string = "d4q01"; // 0x1f4f MovS
	func_7160(var_239_int, var_240_string); // 0x1f50 Call
	var_241_int = 2; // 0x1f52 PushI
	var_242_bool = var_239_int == var_241_int; // 0x1f53 Eq
	if(var_242_bool == 0) goto Label_8023; // 0x1f54 JumpB
	var_237_bool = 1; // 0x1f55 MovB
	return 0; // 0x1f56 Return
	
Label_8023:
	var_237_bool = 0; // 0x1f57 MovB
	return 0; // 0x1f58 Return
}


func_8529(var_664_bool)
{
	var_666_int = 0; var_667_string = ""; // 0x2152 PushV
	var_667_string = "KnowTaurusProject"; // 0x2153 MovS
	func_7160(var_666_int, var_667_string); // 0x2154 Call
	var_668_int = 1; // 0x2156 PushI
	var_669_bool = var_666_int == var_668_int; // 0x2157 Eq
	if(var_669_bool == 0) goto Label_8539; // 0x2158 JumpB
	var_664_bool = 1; // 0x2159 MovB
	return 0; // 0x215a Return
	
Label_8539:
	var_664_bool = 0; // 0x215b MovB
	return 0; // 0x215c Return
}


func_8025(var_266_bool)
{
	var_268_int = 0; var_269_string = ""; // 0x1f5a PushV
	var_269_string = "ood4MladVlad1"; // 0x1f5b MovS
	func_7160(var_268_int, var_269_string); // 0x1f5c Call
	var_270_int = 0; // 0x1f5e PushI
	var_271_bool = var_268_int == var_270_int; // 0x1f5f Eq
	if(var_271_bool == 0) goto Label_8035; // 0x1f60 JumpB
	var_266_bool = 1; // 0x1f61 MovB
	return 0; // 0x1f62 Return
	
Label_8035:
	var_266_bool = 0; // 0x1f63 MovB
	return 0; // 0x1f64 Return
}


func_8541(var_241_bool)
{
	var_243_int = 0; var_244_string = ""; // 0x215e PushV
	var_244_string = "ood1MladVlad1"; // 0x215f MovS
	func_7160(var_243_int, var_244_string); // 0x2160 Call
	var_247_int = 0; // 0x2162 PushI
	var_248_bool = var_243_int == var_247_int; // 0x2163 Eq
	if(var_248_bool == 0) goto Label_8551; // 0x2164 JumpB
	var_241_bool = 1; // 0x2165 MovB
	return 0; // 0x2166 Return
	
Label_8551:
	var_241_bool = 0; // 0x2167 MovB
	return 0; // 0x2168 Return
}


func_7522()
{
	var_224_string = "ood4MladVlad3"; // 0x1d63 PushS
	var_225_int = 1; // 0x1d64 PushI
	SetVariable(var_224_string, var_225_int); // 0x1d65 Func
	return 0; // 0x1d67 Return
}


func_8037(var_229_bool)
{
	var_231_int = 0; var_232_string = ""; // 0x1f66 PushV
	var_232_string = "ood4MladVlad2"; // 0x1f67 MovS
	func_7160(var_231_int, var_232_string); // 0x1f68 Call
	var_235_int = 0; // 0x1f6a PushI
	var_236_bool = var_231_int == var_235_int; // 0x1f6b Eq
	if(var_236_bool == 0) goto Label_8047; // 0x1f6c JumpB
	var_229_bool = 1; // 0x1f6d MovB
	return 0; // 0x1f6e Return
	
Label_8047:
	var_229_bool = 0; // 0x1f6f MovB
	return 0; // 0x1f70 Return
}


func_7528(var_137_object)
{
	var_139_string = "money 50000 is given"; // 0x1d69 PushS
	Trace(var_139_string); // 0x1d6a Func
	var_140_object = Obj(); var_141_string = ""; var_142_int = 0; // 0x1d6c PushV
	var_140_object = var_137_object; // 0x1d6d Mov
	var_141_string = "money"; // 0x1d6e MovS
	var_142_int = 50000; // 0x1d6f MovI
	func_7041(var_141_string, var_142_int); // 0x1d70 Call
	return 0; // 0x1d72 Return
}


func_8553(var_338_bool)
{
	var_340_int = 0; var_341_string = ""; // 0x216a PushV
	var_341_string = "ood1MladVlad2"; // 0x216b MovS
	func_7160(var_340_int, var_341_string); // 0x216c Call
	var_342_int = 0; // 0x216e PushI
	var_343_bool = var_340_int == var_342_int; // 0x216f Eq
	if(var_343_bool == 0) goto Label_8563; // 0x2170 JumpB
	var_338_bool = 1; // 0x2171 MovB
	return 0; // 0x2172 Return
	
Label_8563:
	var_338_bool = 0; // 0x2173 MovB
	return 0; // 0x2174 Return
}


func_362(var_0_object, var_1_object, var_2_object, var_3_object, var_181_object, var_182_object)
{
	var_0_object = var_182_object; // 0x16b TMov
	var_1_object = var_181_object; // 0x16c TMov
	var_3_object = 0; // 0x16d TMovB
	var_187_int = 1; // 0x16e PushI
	if(var_187_int == 0) goto Label_663; // 0x16f JumpB
	var_188_bool = 0; // 0x170 PushV
	var_188_bool = 0; // 0x171 MovB
	var_189_bool = 0; var_190_object = Obj(); // 0x172 PushV
	var_190_object = var_1_object; // 0x173 MovT
	func_8541(var_190_object); // 0x174 Call
	if(var_189_bool == 0) goto Label_381; // 0x176 JumpB
	var_197_bool = 0; var_198_object = Obj(); // 0x177 PushV
	var_198_object = var_1_object; // 0x178 MovT
	func_7866(var_198_object); // 0x179 Call
	if(var_197_bool == 0) goto Label_381; // 0x17b JumpB
	var_188_bool = 1; // 0x17c MovB
	
Label_381:
	if(var_188_bool == 0) goto Label_407; // 0x17d JumpB
	var_203_string = ""; // 0x17e PushV
	var_203_string = "Neutral"; // 0x17f MovS
	func_693(var_182_object, var_203_string); // 0x180 Call
	var_208_int = 5694; // 0x182 PushI
	SetMessage(var_208_int); // 0x183 TObjFunc
	ClearReplies(); // 0x185 TObjFunc
	var_209_int = 5695; // 0x187 PushI
	var_210_int = 6518; // 0x188 PushI
	var_211_int = 6277; // 0x189 PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x18a TObjFunc
	var_212_int = 5698; // 0x18c PushI
	var_213_int = -1; // 0x18d PushI
	var_214_int = 6280; // 0x18e PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x18f TObjFunc
	var_215_int = 5930; // 0x191 PushI
	var_216_int = 6526; // 0x192 PushI
	var_217_int = 6525; // 0x193 PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x194 TObjFunc
	goto Label_663; // 0x196 Jump
	
Label_663:
	var_218_bool = 0; // 0x297 PushV
	func_7232(var_218_bool); // 0x298 Call
	if(var_218_bool == 0) goto Label_678; // 0x29a JumpB
	
Label_667:
	lshWaitForAnimEnd(); // 0x29b Func
	var_219_object = var_3_object; // 0x29d PushT
	if(var_219_object == 0) goto Label_672; // 0x29e JumpB
	goto Label_677; // 0x29f Jump
	
Label_677:
	goto Label_692; // 0x2a5 Jump
	
Label_692:
	return 0; // 0x2b4 Return
	
Label_672:
	var_220_string = ""; // 0x2a0 PushV
	var_220_string = var_2_object; // 0x2a1 MovT
	func_7125(var_220_string); // 0x2a2 Call
	goto Label_667; // 0x2a4 Jump
	
Label_678:
	var_221_string = "all"; // 0x2a6 PushS
	var_222_string = "idle"; // 0x2a7 PushS
	PlayAnimation(var_221_string, var_222_string); // 0x2a8 Func
	
Label_682:
	WaitForAnimEnd(); // 0x2aa Func
	var_223_object = var_3_object; // 0x2ac PushT
	if(var_223_object == 0) goto Label_687; // 0x2ad JumpB
	goto Label_692; // 0x2ae Jump
	
Label_687:
	var_224_string = "all"; // 0x2af PushS
	var_225_string = "idle"; // 0x2b0 PushS
	PlayAnimation(var_224_string, var_225_string); // 0x2b1 Func
	goto Label_682; // 0x2b3 Jump
	
Label_407:
	var_226_string = ""; // 0x197 PushV
	var_226_string = "Neutral"; // 0x198 MovS
	func_693(var_182_object, var_226_string); // 0x199 Call
	var_227_int = 5699; // 0x19b PushI
	SetMessage(var_227_int); // 0x19c TObjFunc
	ClearReplies(); // 0x19e TObjFunc
	var_228_bool = 0; // 0x1a0 PushV
	var_228_bool = 0; // 0x1a1 MovB
	var_229_bool = 0; // 0x1a2 PushV
	var_229_bool = 0; // 0x1a3 MovB
	var_230_bool = 0; var_231_object = Obj(); // 0x1a4 PushV
	var_231_object = var_1_object; // 0x1a5 MovT
	func_7842(var_231_object); // 0x1a6 Call
	if(var_230_bool == 0) goto Label_431; // 0x1a8 JumpB
	var_236_bool = 0; var_237_object = Obj(); // 0x1a9 PushV
	var_237_object = var_1_object; // 0x1aa MovT
	func_7878(var_237_object); // 0x1ab Call
	if(var_236_bool == 0) goto Label_431; // 0x1ad JumpB
	var_229_bool = 1; // 0x1ae MovB
	
Label_431:
	if(var_229_bool == 0) goto Label_439; // 0x1af JumpB
	var_242_bool = 0; var_243_object = Obj(); // 0x1b0 PushV
	var_243_object = var_1_object; // 0x1b1 MovT
	func_7890(var_243_object); // 0x1b2 Call
	var_248_bool = var_242_bool == 0; // 0x1b4 Not
	if(var_248_bool == 0) goto Label_439; // 0x1b5 JumpB
	var_228_bool = 1; // 0x1b6 MovB
	
Label_439:
	if(var_228_bool == 0) goto Label_445; // 0x1b7 JumpB
	var_249_int = 5697; // 0x1b8 PushI
	var_250_int = 6705; // 0x1b9 PushI
	var_251_int = 6279; // 0x1ba PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x1bb TObjFunc
	
Label_445:
	var_252_bool = 0; // 0x1bd PushV
	var_252_bool = 0; // 0x1be MovB
	var_253_bool = 0; var_254_object = Obj(); // 0x1bf PushV
	var_254_object = var_1_object; // 0x1c0 MovT
	func_7866(var_254_object); // 0x1c1 Call
	if(var_253_bool == 0) goto Label_459; // 0x1c3 JumpB
	var_255_bool = 0; var_256_object = Obj(); // 0x1c4 PushV
	var_256_object = var_1_object; // 0x1c5 MovT
	func_8541(var_256_object); // 0x1c6 Call
	var_257_bool = var_255_bool == 0; // 0x1c8 Not
	if(var_257_bool == 0) goto Label_459; // 0x1c9 JumpB
	var_252_bool = 1; // 0x1ca MovB
	
Label_459:
	if(var_252_bool == 0) goto Label_465; // 0x1cb JumpB
	var_258_int = 5700; // 0x1cc PushI
	var_259_int = 16487; // 0x1cd PushI
	var_260_int = 6282; // 0x1ce PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x1cf TObjFunc
	
Label_465:
	var_261_bool = 0; // 0x1d1 PushV
	var_261_bool = 0; // 0x1d2 MovB
	var_262_bool = 0; var_263_object = Obj(); // 0x1d3 PushV
	var_263_object = var_1_object; // 0x1d4 MovT
	func_8565(var_263_object); // 0x1d5 Call
	if(var_262_bool == 0) goto Label_478; // 0x1d7 JumpB
	var_268_bool = 0; var_269_object = Obj(); // 0x1d8 PushV
	var_269_object = var_1_object; // 0x1d9 MovT
	func_7854(var_269_object); // 0x1da Call
	if(var_268_bool == 0) goto Label_478; // 0x1dc JumpB
	var_261_bool = 1; // 0x1dd MovB
	
Label_478:
	if(var_261_bool == 0) goto Label_484; // 0x1de JumpB
	var_274_int = 8220; // 0x1df PushI
	var_275_int = 6283; // 0x1e0 PushI
	var_276_int = 9043; // 0x1e1 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x1e2 TObjFunc
	
Label_484:
	var_277_bool = 0; // 0x1e4 PushV
	var_277_bool = 0; // 0x1e5 MovB
	var_278_bool = 0; var_279_object = Obj(); // 0x1e6 PushV
	var_279_object = var_1_object; // 0x1e7 MovT
	func_8505(var_279_object); // 0x1e8 Call
	if(var_278_bool == 0) goto Label_497; // 0x1ea JumpB
	var_284_bool = 0; var_285_object = Obj(); // 0x1eb PushV
	var_285_object = var_1_object; // 0x1ec MovT
	func_8553(var_285_object); // 0x1ed Call
	if(var_284_bool == 0) goto Label_497; // 0x1ef JumpB
	var_277_bool = 1; // 0x1f0 MovB
	
Label_497:
	if(var_277_bool == 0) goto Label_503; // 0x1f1 JumpB
	var_290_int = 8223; // 0x1f2 PushI
	var_291_int = 6294; // 0x1f3 PushI
	var_292_int = 9046; // 0x1f4 PushI
	AddReply(var_290_int, var_291_int, var_292_int); // 0x1f5 TObjFunc
	
Label_503:
	var_293_bool = 0; // 0x1f7 PushV
	var_293_bool = 0; // 0x1f8 MovB
	var_294_bool = 0; var_295_object = Obj(); // 0x1f9 PushV
	var_295_object = var_1_object; // 0x1fa MovT
	func_8361(var_295_object); // 0x1fb Call
	if(var_294_bool == 0) goto Label_516; // 0x1fd JumpB
	var_300_bool = 0; var_301_object = Obj(); // 0x1fe PushV
	var_301_object = var_1_object; // 0x1ff MovT
	func_8373(var_301_object); // 0x200 Call
	if(var_300_bool == 0) goto Label_516; // 0x202 JumpB
	var_293_bool = 1; // 0x203 MovB
	
Label_516:
	if(var_293_bool == 0) goto Label_522; // 0x204 JumpB
	var_306_int = 8226; // 0x205 PushI
	var_307_int = 9070; // 0x206 PushI
	var_308_int = 9049; // 0x207 PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0x208 TObjFunc
	
Label_522:
	var_309_bool = 0; // 0x20a PushV
	var_309_bool = 0; // 0x20b MovB
	var_310_bool = 0; var_311_object = Obj(); // 0x20c PushV
	var_311_object = var_1_object; // 0x20d MovT
	func_8481(var_311_object); // 0x20e Call
	if(var_310_bool == 0) goto Label_535; // 0x210 JumpB
	var_316_bool = 0; var_317_object = Obj(); // 0x211 PushV
	var_317_object = var_1_object; // 0x212 MovT
	func_8385(var_317_object); // 0x213 Call
	if(var_316_bool == 0) goto Label_535; // 0x215 JumpB
	var_309_bool = 1; // 0x216 MovB
	
Label_535:
	if(var_309_bool == 0) goto Label_541; // 0x217 JumpB
	var_322_int = 8229; // 0x218 PushI
	var_323_int = 9071; // 0x219 PushI
	var_324_int = 9052; // 0x21a PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0x21b TObjFunc
	
Label_541:
	var_325_bool = 0; // 0x21d PushV
	var_325_bool = 0; // 0x21e MovB
	var_326_bool = 0; var_327_object = Obj(); // 0x21f PushV
	var_327_object = var_1_object; // 0x220 MovT
	func_8349(var_327_object); // 0x221 Call
	if(var_326_bool == 0) goto Label_554; // 0x223 JumpB
	var_332_bool = 0; var_333_object = Obj(); // 0x224 PushV
	var_333_object = var_1_object; // 0x225 MovT
	func_8397(var_333_object); // 0x226 Call
	if(var_332_bool == 0) goto Label_554; // 0x228 JumpB
	var_325_bool = 1; // 0x229 MovB
	
Label_554:
	if(var_325_bool == 0) goto Label_560; // 0x22a JumpB
	var_338_int = 8231; // 0x22b PushI
	var_339_int = 9072; // 0x22c PushI
	var_340_int = 9054; // 0x22d PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0x22e TObjFunc
	
Label_560:
	var_341_bool = 0; // 0x230 PushV
	var_341_bool = 0; // 0x231 MovB
	var_342_bool = 0; var_343_object = Obj(); // 0x232 PushV
	var_343_object = var_1_object; // 0x233 MovT
	func_8325(var_343_object); // 0x234 Call
	if(var_342_bool == 0) goto Label_573; // 0x236 JumpB
	var_348_bool = 0; var_349_object = Obj(); // 0x237 PushV
	var_349_object = var_1_object; // 0x238 MovT
	func_8409(var_349_object); // 0x239 Call
	if(var_348_bool == 0) goto Label_573; // 0x23b JumpB
	var_341_bool = 1; // 0x23c MovB
	
Label_573:
	if(var_341_bool == 0) goto Label_579; // 0x23d JumpB
	var_354_int = 8234; // 0x23e PushI
	var_355_int = 9073; // 0x23f PushI
	var_356_int = 9057; // 0x240 PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x241 TObjFunc
	
Label_579:
	var_357_bool = 0; // 0x243 PushV
	var_357_bool = 0; // 0x244 MovB
	var_358_bool = 0; var_359_object = Obj(); // 0x245 PushV
	var_359_object = var_1_object; // 0x246 MovT
	func_7984(var_359_object); // 0x247 Call
	if(var_358_bool == 0) goto Label_592; // 0x249 JumpB
	var_364_bool = 0; var_365_object = Obj(); // 0x24a PushV
	var_365_object = var_1_object; // 0x24b MovT
	func_8421(var_365_object); // 0x24c Call
	if(var_364_bool == 0) goto Label_592; // 0x24e JumpB
	var_357_bool = 1; // 0x24f MovB
	
Label_592:
	if(var_357_bool == 0) goto Label_598; // 0x250 JumpB
	var_370_int = 8235; // 0x251 PushI
	var_371_int = 9074; // 0x252 PushI
	var_372_int = 9058; // 0x253 PushI
	AddReply(var_370_int, var_371_int, var_372_int); // 0x254 TObjFunc
	
Label_598:
	var_373_bool = 0; // 0x256 PushV
	var_373_bool = 0; // 0x257 MovB
	var_374_bool = 0; var_375_object = Obj(); // 0x258 PushV
	var_375_object = var_1_object; // 0x259 MovT
	func_8337(var_375_object); // 0x25a Call
	if(var_374_bool == 0) goto Label_611; // 0x25c JumpB
	var_380_bool = 0; var_381_object = Obj(); // 0x25d PushV
	var_381_object = var_1_object; // 0x25e MovT
	func_8433(var_381_object); // 0x25f Call
	if(var_380_bool == 0) goto Label_611; // 0x261 JumpB
	var_373_bool = 1; // 0x262 MovB
	
Label_611:
	if(var_373_bool == 0) goto Label_617; // 0x263 JumpB
	var_386_int = 8238; // 0x264 PushI
	var_387_int = 9075; // 0x265 PushI
	var_388_int = 9061; // 0x266 PushI
	AddReply(var_386_int, var_387_int, var_388_int); // 0x267 TObjFunc
	
Label_617:
	var_389_bool = 0; // 0x269 PushV
	var_389_bool = 0; // 0x26a MovB
	var_390_bool = 0; var_391_object = Obj(); // 0x26b PushV
	var_391_object = var_1_object; // 0x26c MovT
	func_8493(var_391_object); // 0x26d Call
	if(var_390_bool == 0) goto Label_630; // 0x26f JumpB
	var_396_bool = 0; var_397_object = Obj(); // 0x270 PushV
	var_397_object = var_1_object; // 0x271 MovT
	func_8445(var_397_object); // 0x272 Call
	if(var_396_bool == 0) goto Label_630; // 0x274 JumpB
	var_389_bool = 1; // 0x275 MovB
	
Label_630:
	if(var_389_bool == 0) goto Label_636; // 0x276 JumpB
	var_402_int = 8241; // 0x277 PushI
	var_403_int = 9076; // 0x278 PushI
	var_404_int = 9064; // 0x279 PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0x27a TObjFunc
	
Label_636:
	var_405_bool = 0; // 0x27c PushV
	var_405_bool = 0; // 0x27d MovB
	var_406_bool = 0; var_407_object = Obj(); // 0x27e PushV
	var_407_object = var_1_object; // 0x27f MovT
	func_8469(var_407_object); // 0x280 Call
	if(var_406_bool == 0) goto Label_649; // 0x282 JumpB
	var_412_bool = 0; var_413_object = Obj(); // 0x283 PushV
	var_413_object = var_1_object; // 0x284 MovT
	func_8457(var_413_object); // 0x285 Call
	if(var_412_bool == 0) goto Label_649; // 0x287 JumpB
	var_405_bool = 1; // 0x288 MovB
	
Label_649:
	if(var_405_bool == 0) goto Label_655; // 0x289 JumpB
	var_418_int = 8246; // 0x28a PushI
	var_419_int = 9077; // 0x28b PushI
	var_420_int = 9069; // 0x28c PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0x28d TObjFunc
	
Label_655:
	var_421_int = 6265; // 0x28f PushI
	var_422_int = -1; // 0x290 PushI
	var_423_int = 6932; // 0x291 PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0x292 TObjFunc
	goto Label_663; // 0x294 Jump
}


func_8049(var_291_bool)
{
	var_293_int = 0; var_294_string = ""; // 0x1f72 PushV
	var_294_string = "d4q02"; // 0x1f73 MovS
	func_7160(var_293_int, var_294_string); // 0x1f74 Call
	var_295_int = 1000; // 0x1f76 PushI
	var_296_bool = var_293_int == var_295_int; // 0x1f77 Eq
	if(var_296_bool == 0) goto Label_8059; // 0x1f78 JumpB
	var_291_bool = 1; // 0x1f79 MovB
	return 0; // 0x1f7a Return
	
Label_8059:
	var_291_bool = 0; // 0x1f7b MovB
	return 0; // 0x1f7c Return
}


func_7539()
{
	var_52_object = Obj(); var_53_object = Obj(); // 0x1d73 PushV
	var_54_object = Obj(); // 0x1d74 PushV
	func_8622(var_54_object); // 0x1d75 Call
	var_53_object = var_54_object; // 0x1d76 Mov
	var_61_string = "d6q02MladVladGotoBigVlad"; // 0x1d78 PushS
	var_62_string = "pt_map_bigvlad"; // 0x1d79 PushS
	var_63_int = 0; // 0x1d7a PushI
	var_64_int = 15378; // 0x1d7b PushI
	var_65_float = 0; // 0x1d7c PushV
	func_7199(var_65_float); // 0x1d7d Call
	AddMark(var_61_string, var_62_string, var_63_int, var_64_int, var_65_float); // 0x1d7f ObjFunc
	var_68_string = "d6q02MladVladGotoBigVladSelf"; // 0x1d81 PushS
	var_69_string = "pt_map_mladvlad"; // 0x1d82 PushS
	var_70_int = 0; // 0x1d83 PushI
	var_71_int = 15379; // 0x1d84 PushI
	var_72_float = 0; // 0x1d85 PushV
	func_7199(var_72_float); // 0x1d86 Call
	AddMark(var_68_string, var_69_string, var_70_int, var_71_int, var_72_float); // 0x1d88 ObjFunc
	func_8785(); // 0x1d8b Call
	func_8817(); // 0x1d8e Call
	var_107_object = Obj(); var_108_string = ""; // 0x1d90 PushV
	var_108_string = "quest_d6_02"; // 0x1d91 MovS
	func_7165(var_107_object, var_108_string); // 0x1d92 Call
	var_115_bool = 0; var_116_string = ""; var_117_string = ""; // 0x1d94 PushV
	var_116_string = "quest_d6_02"; // 0x1d95 MovS
	var_117_string = "place_trigger"; // 0x1d96 MovS
	func_7187(var_115_bool, var_116_string, var_117_string); // 0x1d97 Call
	return 2; // 0x1d99 Return
}


func_8565(var_316_bool)
{
	var_318_int = 0; var_319_string = ""; // 0x2176 PushV
	var_319_string = "ood1MladVlad3"; // 0x2177 MovS
	func_7160(var_318_int, var_319_string); // 0x2178 Call
	var_320_int = 0; // 0x217a PushI
	var_321_bool = var_318_int == var_320_int; // 0x217b Eq
	if(var_321_bool == 0) goto Label_8575; // 0x217c JumpB
	var_316_bool = 1; // 0x217d MovB
	return 0; // 0x217e Return
	
Label_8575:
	var_316_bool = 0; // 0x217f MovB
	return 0; // 0x2180 Return
}


func_8061(var_285_bool)
{
	var_287_int = 0; var_288_string = ""; // 0x1f7e PushV
	var_288_string = "ood4MladVlad3"; // 0x1f7f MovS
	func_7160(var_287_int, var_288_string); // 0x1f80 Call
	var_289_int = 0; // 0x1f82 PushI
	var_290_bool = var_287_int == var_289_int; // 0x1f83 Eq
	if(var_290_bool == 0) goto Label_8071; // 0x1f84 JumpB
	var_285_bool = 1; // 0x1f85 MovB
	return 0; // 0x1f86 Return
	
Label_8071:
	var_285_bool = 0; // 0x1f87 MovB
	return 0; // 0x1f88 Return
}


func_7041(var_141_string, var_142_int)
{
	var_143_int = 0; var_144_int = 0; // 0x1b81 PushV
	GetProperty(var_141_string, var_144_int); // 0x1b82 ObjFunc
	var_145_int = var_144_int + var_142_int; // 0x1b84 Add
	SetProperty(var_141_string, var_145_int); // 0x1b85 ObjFunc
	return 2; // 0x1b87 Return
}


func_8577(var_279_bool)
{
	var_279_bool = 0; // 0x2182 MovB
	return 0; // 0x2183 Return
}


func_8580(var_67_object)
{
	var_68_object = Obj(); var_69_object = Obj(); // 0x2184 PushV
	GetDiaryRoot(var_69_object); // 0x2185 Func
	var_70_bool = var_69_object == 0; // 0x2187 Not
	if(var_70_bool == 0) goto Label_8590; // 0x2188 JumpB
	var_71_string = "Can't retrieve diary root"; // 0x2189 PushS
	Trace(var_71_string); // 0x218a Func
	var_67_object = 0; // 0x218c MovB
	return 2; // 0x218d Return
	
Label_8590:
	var_67_object = var_69_object; // 0x218e Mov
	return 2; // 0x218f Return
}


func_7048(var_41_bool)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_bool = 0; // 0x1b88 PushV
	GetPosition(var_47_cvector); // 0x1b89 ObjFunc
	GetPosition(var_48_cvector); // 0x1b8b Func
	var_49_cvector = var_47_cvector - var_48_cvector; // 0x1b8d Sub2
	var_51_float = GetByIndex(var_49_cvector, 0); // 0x1b8e PushE
	var_52_float = GetByIndex(var_49_cvector, 2); // 0x1b8f PushE
	Rotate(var_51_float, var_52_float, var_50_bool); // 0x1b90 Func
	var_41_bool = var_50_bool; // 0x1b92 Mov
	return 8; // 0x1b93 Return
}


func_8073(var_201_bool)
{
	var_203_int = 0; var_204_string = ""; // 0x1f8a PushV
	var_204_string = "d5q02"; // 0x1f8b MovS
	func_7160(var_203_int, var_204_string); // 0x1f8c Call
	var_205_int = 0; // 0x1f8e PushI
	var_206_bool = var_203_int == var_205_int; // 0x1f8f Eq
	if(var_206_bool == 0) goto Label_8083; // 0x1f90 JumpB
	var_201_bool = 1; // 0x1f91 MovB
	return 0; // 0x1f92 Return
	
Label_8083:
	var_201_bool = 0; // 0x1f93 MovB
	return 0; // 0x1f94 Return
}


func_2958(var_0_object, var_535_int, var_536_object)
{
	var_538_object = Obj(); var_539_bool = 0; var_540_int = 0; var_541_bool = 0; var_542_object = Obj(); var_543_bool = 0; var_544_int = 0; var_545_bool = 0; // 0xb8e PushV
	var_0_object = var_536_object; // 0xb8f TMov
	var_546_bool = 0; var_547_object = Obj(); // 0xb90 PushV
	var_547_object = var_536_object; // 0xb91 Mov
	func_7065(var_547_object); // 0xb92 Call
	var_548_bool = var_546_bool == 0; // 0xb94 Not
	if(var_548_bool == 0) goto Label_2968; // 0xb95 JumpB
	var_535_int = -2; // 0xb96 MovI
	return 8; // 0xb97 Return
	
Label_2968:
	CreateDialog(var_542_object); // 0xb98 Func
	var_549_int = 0; // 0xb9a PushV
	func_7228(var_549_int); // 0xb9b Call
	SetNPCName(var_549_int); // 0xb9d ObjFunc
	var_550_string = ""; // 0xb9f PushV
	func_7230(var_550_string); // 0xba0 Call
	SetPhoto(var_550_string); // 0xba2 ObjFunc
	var_551_int = 0; // 0xba4 PushV
	func_8672(var_551_int); // 0xba5 Call
	SetPlayerName(var_551_int); // 0xba7 ObjFunc
	var_544_int = -1; // 0xba9 MovI
	IsOverrideActive(var_543_bool); // 0xbaa Func
	var_552_bool = var_543_bool; // 0xbac Push
	if(var_552_bool == 0) goto Label_2992; // 0xbad JumpB
	var_535_int = -2; // 0xbae MovI
	return 8; // 0xbaf Return
	
Label_2992:
	DoDialog(var_542_object); // 0xbb0 Func
	var_553_object = Obj(); var_554_object = Obj(); // 0xbb2 PushV
	var_553_object = var_536_object; // 0xbb3 Mov
	var_554_object = var_542_object; // 0xbb4 Mov
	TaskCall(9); // 0xbb5 TaskCall
	func_3021(var_555_object, var_556_object, var_557_string, var_558_bool, var_553_object, var_554_object); // 0xbb6 Call
	TaskReturn(); // 0xbb7 TaskReturn
	IsDialogEnd(var_545_bool); // 0xbb9 ObjFunc
	
Label_3003:
	var_592_bool = var_545_bool == 0; // 0xbbb Not
	if(var_592_bool == 0) goto Label_3010; // 0xbbc JumpB
	sync(); // 0xbbd Func
	IsDialogEnd(var_545_bool); // 0xbbf ObjFunc
	goto Label_3003; // 0xbc1 Jump
	
Label_3010:
	var_593_object = Obj(); // 0xbc2 PushV
	var_593_object = var_536_object; // 0xbc3 Mov
	func_7121(); // 0xbc4 Call
	StopDialog(var_542_object); // 0xbc6 Func
	GetReturnValue(var_544_int); // 0xbc8 ObjFunc
	var_535_int = var_544_int; // 0xbca Mov
	return 8; // 0xbcb Return
}


func_8593(var_58_bool, var_59_object, var_60_int)
{
	var_61_object = Obj(); var_62_object = Obj(); var_63_int = 0; var_64_object = Obj(); var_65_object = Obj(); var_66_int = 0; // 0x2191 PushV
	var_67_object = Obj(); // 0x2192 PushV
	func_8580(var_67_object); // 0x2193 Call
	var_64_object = var_67_object; // 0x2194 Mov
	Find(var_60_int, var_65_object); // 0x2196 ObjFunc
	var_72_bool = var_65_object == 0; // 0x2198 Not
	if(var_72_bool == 0) goto Label_8608; // 0x2199 JumpB
	var_73_string = "Can't find diary parent with id: "; // 0x219a PushS
	var_74_int = var_73_string + var_60_int; // 0x219b Add
	Trace(var_74_int); // 0x219c Func
	var_58_bool = 0; // 0x219e MovB
	return 6; // 0x219f Return
	
Label_8608:
	AddChild(var_59_object); // 0x21a0 ObjFunc
	var_75_string = "player_diary"; // 0x21a2 PushS
	var_76_int = 1; // 0x21a3 PushI
	SetVariable(var_75_string, var_76_int); // 0x21a4 Func
	GetCategory(var_66_int); // 0x21a6 ObjFunc
	SetDiarySection(var_66_int); // 0x21a8 Func
	var_58_bool = 0; // 0x21aa MovB
	return 6; // 0x21ab Return
}


func_7060(var_41_bool)
{
	var_42_bool = 0; var_43_bool = 0; // 0x1b94 PushV
	IsLoaded(var_43_bool); // 0x1b95 Func
	var_41_bool = var_43_bool; // 0x1b97 Mov
	return 2; // 0x1b98 Return
}


func_8085(var_232_bool)
{
	var_234_int = 0; var_235_string = ""; // 0x1f96 PushV
	var_235_string = "d6q02"; // 0x1f97 MovS
	func_7160(var_234_int, var_235_string); // 0x1f98 Call
	var_236_int = 0; // 0x1f9a PushI
	var_237_bool = var_234_int == var_236_int; // 0x1f9b Eq
	if(var_237_bool == 0) goto Label_8095; // 0x1f9c JumpB
	var_232_bool = 1; // 0x1f9d MovB
	return 0; // 0x1f9e Return
	
Label_8095:
	var_232_bool = 0; // 0x1f9f MovB
	return 0; // 0x1fa0 Return
}


func_7065(var_55_bool)
{
	var_57_float = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_bool = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_bool = 0; // 0x1b99 PushV
	GetPosition(var_66_cvector); // 0x1b9a ObjFunc
	GetEyesHeight(var_65_float); // 0x1b9c ObjFunc
	var_73_float = GetByIndex(var_66_cvector, 1); // 0x1b9e PushE
	var_73_float = var_73_float + var_65_float; // 0x1b9f Add2
	SetByIndex(var_66_cvector, 1) = var_73_float; // 0x1ba0 PopE
	GetPosition(var_67_cvector); // 0x1ba1 Func
	GetEyesHeight(var_65_float); // 0x1ba3 Func
	var_74_float = GetByIndex(var_67_cvector, 1); // 0x1ba5 PushE
	var_74_float = var_74_float + var_65_float; // 0x1ba6 Add2
	SetByIndex(var_67_cvector, 1) = var_74_float; // 0x1ba7 PopE
	var_68_cvector = var_66_cvector - var_67_cvector; // 0x1ba8 Sub2
	var_75_float = GetByIndex(var_68_cvector, 1); // 0x1ba9 PushE
	var_75_float = 0; // 0x1baa MovI
	SetByIndex(var_68_cvector, 1) = var_75_float; // 0x1bab PopE
	var_76_int = var_68_cvector | var_68_cvector; // 0x1bac Or
	var_77_float = sqrt(var_76_int); // 0x1bad Sqrt
	var_68_cvector = var_68_cvector / var_68_cvector; // 0x1bae Div2
	var_69_cvector = -var_68_cvector; // 0x1baf Neg2
	var_78_int = 70; // 0x1bb0 PushI
	var_79_float = var_68_cvector * var_78_int; // 0x1bb1 Mult
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); // 0x1bb2 PushV
	var_82_cvector = CVector(0.0, 1.0, 0.0); // 0x1bb3 PushVec
	var_81_cvector = var_69_cvector ^ var_82_cvector; // 0x1bb4 Xor2
	func_7150(var_80_cvector, var_81_cvector); // 0x1bb5 Call
	var_88_int = 25; // 0x1bb7 PushI
	var_89_float = var_80_cvector * var_88_int; // 0x1bb8 Mult
	var_90_int = var_79_float + var_89_float; // 0x1bb9 Add
	var_91_cvector = CVector(0.0, 10.0, 0.0); // 0x1bba PushVec
	var_70_cvector = var_90_int - var_91_cvector; // 0x1bbb Sub2
	var_71_cvector = var_67_cvector + var_70_cvector; // 0x1bbc Add2
	IsOverrideActive(var_72_bool); // 0x1bbd Func
	var_92_bool = var_72_bool; // 0x1bbf Push
	if(var_92_bool == 0) goto Label_7107; // 0x1bc0 JumpB
	var_55_bool = 0; // 0x1bc1 MovB
	return 16; // 0x1bc2 Return
	
Label_7107:
	StopWorld(); // 0x1bc3 Func
	CameraTransit(var_71_cvector, var_69_cvector); // 0x1bc5 Func
	var_93_float = GetByIndex(var_70_cvector, 0); // 0x1bc7 PushE
	var_94_float = GetByIndex(var_70_cvector, 2); // 0x1bc8 PushE
	Rotate(var_93_float, var_94_float); // 0x1bc9 Func
	CameraWaitForPlayFinish(); // 0x1bcb Func
	ResumeWorld(); // 0x1bcd Func
	var_55_bool = 1; // 0x1bcf MovB
	return 16; // 0x1bd0 Return
}


func_1946(var_0_object, var_428_int, var_429_object)
{
	var_431_object = Obj(); var_432_bool = 0; var_433_int = 0; var_434_bool = 0; var_435_object = Obj(); var_436_bool = 0; var_437_int = 0; var_438_bool = 0; // 0x79a PushV
	var_0_object = var_429_object; // 0x79b TMov
	var_439_bool = 0; var_440_object = Obj(); // 0x79c PushV
	var_440_object = var_429_object; // 0x79d Mov
	func_7065(var_440_object); // 0x79e Call
	var_441_bool = var_439_bool == 0; // 0x7a0 Not
	if(var_441_bool == 0) goto Label_1956; // 0x7a1 JumpB
	var_428_int = -2; // 0x7a2 MovI
	return 8; // 0x7a3 Return
	
Label_1956:
	CreateDialog(var_435_object); // 0x7a4 Func
	var_442_int = 0; // 0x7a6 PushV
	func_7228(var_442_int); // 0x7a7 Call
	SetNPCName(var_442_int); // 0x7a9 ObjFunc
	var_443_string = ""; // 0x7ab PushV
	func_7230(var_443_string); // 0x7ac Call
	SetPhoto(var_443_string); // 0x7ae ObjFunc
	var_444_int = 0; // 0x7b0 PushV
	func_8672(var_444_int); // 0x7b1 Call
	SetPlayerName(var_444_int); // 0x7b3 ObjFunc
	var_437_int = -1; // 0x7b5 MovI
	IsOverrideActive(var_436_bool); // 0x7b6 Func
	var_445_bool = var_436_bool; // 0x7b8 Push
	if(var_445_bool == 0) goto Label_1980; // 0x7b9 JumpB
	var_428_int = -2; // 0x7ba MovI
	return 8; // 0x7bb Return
	
Label_1980:
	DoDialog(var_435_object); // 0x7bc Func
	var_446_object = Obj(); var_447_object = Obj(); // 0x7be PushV
	var_446_object = var_429_object; // 0x7bf Mov
	var_447_object = var_435_object; // 0x7c0 Mov
	TaskCall(7); // 0x7c1 TaskCall
	func_2009(var_448_object, var_449_object, var_450_string, var_451_bool, var_446_object, var_447_object); // 0x7c2 Call
	TaskReturn(); // 0x7c3 TaskReturn
	IsDialogEnd(var_438_bool); // 0x7c5 ObjFunc
	
Label_1991:
	var_531_bool = var_438_bool == 0; // 0x7c7 Not
	if(var_531_bool == 0) goto Label_1998; // 0x7c8 JumpB
	sync(); // 0x7c9 Func
	IsDialogEnd(var_438_bool); // 0x7cb ObjFunc
	goto Label_1991; // 0x7cd Jump
	
Label_1998:
	var_532_object = Obj(); // 0x7ce PushV
	var_532_object = var_429_object; // 0x7cf Mov
	func_7121(); // 0x7d0 Call
	StopDialog(var_435_object); // 0x7d2 Func
	GetReturnValue(var_437_int); // 0x7d4 ObjFunc
	var_428_int = var_437_int; // 0x7d6 Mov
	return 8; // 0x7d7 Return
}


func_7579()
{
	var_48_string = "ood6MladVlad1"; // 0x1d9c PushS
	var_49_int = 1; // 0x1d9d PushI
	SetVariable(var_48_string, var_49_int); // 0x1d9e Func
	return 0; // 0x1da0 Return
}


func_8097(var_200_bool)
{
	var_202_int = 0; var_203_string = ""; // 0x1fa2 PushV
	var_203_string = "ood6MladVlad1"; // 0x1fa3 MovS
	func_7160(var_202_int, var_203_string); // 0x1fa4 Call
	var_206_int = 0; // 0x1fa6 PushI
	var_207_bool = var_202_int == var_206_int; // 0x1fa7 Eq
	if(var_207_bool == 0) goto Label_8107; // 0x1fa8 JumpB
	var_200_bool = 1; // 0x1fa9 MovB
	return 0; // 0x1faa Return
	
Label_8107:
	var_200_bool = 0; // 0x1fab MovB
	return 0; // 0x1fac Return
}


func_7585()
{
	var_152_string = "ood6MladVlad2"; // 0x1da2 PushS
	var_153_int = 1; // 0x1da3 PushI
	SetVariable(var_152_string, var_153_int); // 0x1da4 Func
	return 0; // 0x1da6 Return
}


func_7591()
{
	var_123_string = "d6q02KnowAboutAttack"; // 0x1da8 PushS
	var_124_int = 1; // 0x1da9 PushI
	SetVariable(var_123_string, var_124_int); // 0x1daa Func
	return 0; // 0x1dac Return
}


func_8109(var_242_bool)
{
	var_244_int = 0; var_245_string = ""; // 0x1fae PushV
	var_245_string = "ood6MladVlad2"; // 0x1faf MovS
	func_7160(var_244_int, var_245_string); // 0x1fb0 Call
	var_246_int = 0; // 0x1fb2 PushI
	var_247_bool = var_244_int == var_246_int; // 0x1fb3 Eq
	if(var_247_bool == 0) goto Label_8119; // 0x1fb4 JumpB
	var_242_bool = 1; // 0x1fb5 MovB
	return 0; // 0x1fb6 Return
	
Label_8119:
	var_242_bool = 0; // 0x1fb7 MovB
	return 0; // 0x1fb8 Return
}


func_7597()
{
	var_182_string = "ood6MladVlad3"; // 0x1dae PushS
	var_183_int = 1; // 0x1daf PushI
	SetVariable(var_182_string, var_183_int); // 0x1db0 Func
	return 0; // 0x1db2 Return
}


func_8622(var_54_object)
{
	var_55_object = Obj(); var_56_object = Obj(); var_57_object = Obj(); var_58_object = Obj(); // 0x21ae PushV
	GetMainOutdoorScene(var_57_object); // 0x21af Func
	var_59_bool = var_57_object == 0; // 0x21b1 NullEq
	if(var_59_bool == 0) goto Label_8633; // 0x21b2 JumpB
	var_60_string = "Can't find main outdoor scene"; // 0x21b3 PushS
	Trace(var_60_string); // 0x21b4 Func
	var_58_object = 0; // 0x21b6 SetNull
	var_54_object = var_58_object; // 0x21b7 Mov
	return 4; // 0x21b8 Return
	
Label_8633:
	GetMap(var_58_object); // 0x21b9 ObjFunc
	var_54_object = var_58_object; // 0x21bb Mov
	return 4; // 0x21bc Return
}


func_7603()
{
	func_8833(); // 0x1db5 Call
	var_195_bool = 0; var_196_string = ""; var_197_string = ""; // 0x1db7 PushV
	var_196_string = "quest_d6_03"; // 0x1db8 MovS
	var_197_string = "failed"; // 0x1db9 MovS
	func_7187(var_195_bool, var_196_string, var_197_string); // 0x1dba Call
	return 0; // 0x1dbc Return
}


func_8121(var_259_bool)
{
	var_261_int = 0; var_262_string = ""; // 0x1fba PushV
	var_262_string = "ood6MladVlad3"; // 0x1fbb MovS
	func_7160(var_261_int, var_262_string); // 0x1fbc Call
	var_263_int = 0; // 0x1fbe PushI
	var_264_bool = var_261_int == var_263_int; // 0x1fbf Eq
	if(var_264_bool == 0) goto Label_8131; // 0x1fc0 JumpB
	var_259_bool = 1; // 0x1fc1 MovB
	return 0; // 0x1fc2 Return
	
Label_8131:
	var_259_bool = 0; // 0x1fc3 MovB
	return 0; // 0x1fc4 Return
}


func_7613(var_132_object)
{
	var_134_string = "money30000 is given"; // 0x1dbe PushS
	Trace(var_134_string); // 0x1dbf Func
	var_135_object = Obj(); var_136_string = ""; var_137_int = 0; // 0x1dc1 PushV
	var_135_object = var_132_object; // 0x1dc2 Mov
	var_136_string = "money"; // 0x1dc3 MovS
	var_137_int = 30000; // 0x1dc4 MovI
	func_7041(var_136_string, var_137_int); // 0x1dc5 Call
	return 0; // 0x1dc7 Return
}


func_8639(var_127_object, var_128_string, var_129_float)
{
	var_131_cvector = CVector(0,0,0); var_132_cvector = CVector(0,0,0); var_133_object = Obj(); var_134_bool = 0; var_135_cvector = CVector(0,0,0); var_136_cvector = CVector(0,0,0); var_137_object = Obj(); var_138_bool = 0; // 0x21bf PushV
	GetMainOutdoorScene(var_137_object); // 0x21c0 Func
	var_139_bool = var_137_object == 0; // 0x21c2 NullEq
	if(var_139_bool == 0) goto Label_8648; // 0x21c3 JumpB
	var_140_string = "Can't find main outdoor scene"; // 0x21c4 PushS
	Trace(var_140_string); // 0x21c5 Func
	return 8; // 0x21c7 Return
	
Label_8648:
	GetLocator(var_128_string, var_138_bool, var_135_cvector, var_136_cvector); // 0x21c8 ObjFunc
	var_141_bool = var_138_bool == 0; // 0x21ca Not
	if(var_141_bool == 0) goto Label_8658; // 0x21cb JumpB
	var_142_string = "Warning: outdoor scene locator "; // 0x21cc PushS
	var_143_int = var_142_string + var_128_string; // 0x21cd Add
	var_144_string = " doesnt exist"; // 0x21ce PushS
	var_145_int = var_143_int + var_144_string; // 0x21cf Add
	Trace(var_145_int); // 0x21d0 Func
	
Label_8658:
	GetMap(var_127_object); // 0x21d2 ObjFunc
	var_146_bool = var_127_object == 0; // 0x21d4 NullEq
	if(var_146_bool == 0) goto Label_8666; // 0x21d5 JumpB
	var_147_string = "Can't find map"; // 0x21d6 PushS
	Trace(var_147_string); // 0x21d7 Func
	return 8; // 0x21d9 Return
	
Label_8666:
	var_148_float = GetByIndex(var_135_cvector, 0); // 0x21da PushE
	var_149_float = GetByIndex(var_135_cvector, 2); // 0x21db PushE
	SetMapParams(var_148_float, var_149_float, var_129_float); // 0x21dc ObjFunc
	return 8; // 0x21de Return
}


func_8133(var_165_bool)
{
	var_167_int = 0; var_168_string = ""; // 0x1fc6 PushV
	var_168_string = "d5q03"; // 0x1fc7 MovS
	func_7160(var_167_int, var_168_string); // 0x1fc8 Call
	var_169_int = 1000; // 0x1fca PushI
	var_170_bool = var_167_int == var_169_int; // 0x1fcb Eq
	if(var_170_bool == 0) goto Label_8143; // 0x1fcc JumpB
	var_165_bool = 1; // 0x1fcd MovB
	return 0; // 0x1fce Return
	
Label_8143:
	var_165_bool = 0; // 0x1fcf MovB
	return 0; // 0x1fd0 Return
}


func_6087(var_2_object, var_125_string)
{
	var_126_bool = 0; // 0x17c8 PushV
	func_7232(var_126_bool); // 0x17c9 Call
	var_127_bool = var_126_bool == 0; // 0x17cb Not
	if(var_127_bool == 0) goto Label_6094; // 0x17cc JumpB
	return 0; // 0x17cd Return
	
Label_6094:
	var_128_bool = var_125_string == var_2_object; // 0x17ce Eq
	if(var_128_bool == 0) goto Label_6097; // 0x17cf JumpB
	return 0; // 0x17d0 Return
	
Label_6097:
	var_129_string = ""; // 0x17d1 PushV
	var_129_string = var_125_string; // 0x17d2 Mov
	func_7125(var_129_string); // 0x17d3 Call
	var_2_object = var_125_string; // 0x17d5 TMov
	return 0; // 0x17d6 Return
}


func_7624()
{
	return 0; // 0x1dc9 Return
}


func_7626()
{
	var_130_string = "ood5MladVlad1"; // 0x1dcb PushS
	var_131_int = 1; // 0x1dcc PushI
	SetVariable(var_130_string, var_131_int); // 0x1dcd Func
	return 0; // 0x1dcf Return
}


func_3021(var_0_object, var_1_object, var_2_object, var_3_object, var_553_object, var_554_object)
{
	var_0_object = var_554_object; // 0xbce TMov
	var_1_object = var_553_object; // 0xbcf TMov
	var_3_object = 0; // 0xbd0 TMovB
	var_559_int = 1; // 0xbd1 PushI
	if(var_559_int == 0) goto Label_3068; // 0xbd2 JumpB
	var_560_string = ""; // 0xbd3 PushV
	var_560_string = "Neutral"; // 0xbd4 MovS
	func_3098(var_554_object, var_560_string); // 0xbd5 Call
	var_565_int = 10212; // 0xbd7 PushI
	SetMessage(var_565_int); // 0xbd8 TObjFunc
	ClearReplies(); // 0xbda TObjFunc
	var_566_bool = 0; // 0xbdc PushV
	var_566_bool = 0; // 0xbdd MovB
	var_567_bool = 0; var_568_object = Obj(); // 0xbde PushV
	var_568_object = var_1_object; // 0xbdf MovT
	func_7996(var_568_object); // 0xbe0 Call
	if(var_567_bool == 0) goto Label_3049; // 0xbe2 JumpB
	var_573_bool = 0; var_574_object = Obj(); // 0xbe3 PushV
	var_574_object = var_1_object; // 0xbe4 MovT
	func_8008(var_574_object); // 0xbe5 Call
	if(var_573_bool == 0) goto Label_3049; // 0xbe7 JumpB
	var_566_bool = 1; // 0xbe8 MovB
	
Label_3049:
	if(var_566_bool == 0) goto Label_3055; // 0xbe9 JumpB
	var_575_int = 10213; // 0xbea PushI
	var_576_int = 11260; // 0xbeb PushI
	var_577_int = 11259; // 0xbec PushI
	AddReply(var_575_int, var_576_int, var_577_int); // 0xbed TObjFunc
	
Label_3055:
	var_578_int = 10302; // 0xbef PushI
	var_579_int = 11359; // 0xbf0 PushI
	var_580_int = 11358; // 0xbf1 PushI
	AddReply(var_578_int, var_579_int, var_580_int); // 0xbf2 TObjFunc
	var_581_int = 10334; // 0xbf4 PushI
	var_582_int = 11395; // 0xbf5 PushI
	var_583_int = 11394; // 0xbf6 PushI
	AddReply(var_581_int, var_582_int, var_583_int); // 0xbf7 TObjFunc
	goto Label_3068; // 0xbf9 Jump
	
Label_3068:
	var_584_bool = 0; // 0xbfc PushV
	func_7232(var_584_bool); // 0xbfd Call
	if(var_584_bool == 0) goto Label_3083; // 0xbff JumpB
	
Label_3072:
	lshWaitForAnimEnd(); // 0xc00 Func
	var_585_object = var_3_object; // 0xc02 PushT
	if(var_585_object == 0) goto Label_3077; // 0xc03 JumpB
	goto Label_3082; // 0xc04 Jump
	
Label_3082:
	goto Label_3097; // 0xc0a Jump
	
Label_3097:
	return 0; // 0xc19 Return
	
Label_3077:
	var_586_string = ""; // 0xc05 PushV
	var_586_string = var_2_object; // 0xc06 MovT
	func_7125(var_586_string); // 0xc07 Call
	goto Label_3072; // 0xc09 Jump
	
Label_3083:
	var_587_string = "all"; // 0xc0b PushS
	var_588_string = "idle"; // 0xc0c PushS
	PlayAnimation(var_587_string, var_588_string); // 0xc0d Func
	
Label_3087:
	WaitForAnimEnd(); // 0xc0f Func
	var_589_object = var_3_object; // 0xc11 PushT
	if(var_589_object == 0) goto Label_3092; // 0xc12 JumpB
	goto Label_3097; // 0xc13 Jump
	
Label_3092:
	var_590_string = "all"; // 0xc14 PushS
	var_591_string = "idle"; // 0xc15 PushS
	PlayAnimation(var_590_string, var_591_string); // 0xc16 Func
	goto Label_3087; // 0xc18 Jump
}


func_7632()
{
	var_149_string = "ood5MladVlad2"; // 0x1dd1 PushS
	var_150_int = 1; // 0x1dd2 PushI
	SetVariable(var_149_string, var_150_int); // 0x1dd3 Func
	return 0; // 0x1dd5 Return
}


func_7121()
{
	CameraSwitchToNormal(); // 0x1bd2 Func
	return 0; // 0x1bd4 Return
}


func_8145(var_172_bool)
{
	var_174_int = 0; var_175_string = ""; // 0x1fd2 PushV
	var_175_string = "d5q03"; // 0x1fd3 MovS
	func_7160(var_174_int, var_175_string); // 0x1fd4 Call
	var_176_int = -1; // 0x1fd6 PushI
	var_177_bool = var_174_int == var_176_int; // 0x1fd7 Eq
	if(var_177_bool == 0) goto Label_8155; // 0x1fd8 JumpB
	var_172_bool = 1; // 0x1fd9 MovB
	return 0; // 0x1fda Return
	
Label_8155:
	var_172_bool = 0; // 0x1fdb MovB
	return 0; // 0x1fdc Return
}


func_7125(var_45_string)
{
	var_46_float = 0; var_47_float = 0; var_48_float = 0; var_49_float = 0; // 0x1bd5 PushV
	var_50_string = "playing "; // 0x1bd6 PushS
	var_51_int = var_50_string + var_45_string; // 0x1bd7 Add
	Trace(var_51_int); // 0x1bd8 Func
	lshGetAnimTimes(var_45_string, var_48_float, var_49_float); // 0x1bda Func
	lshPlayAnimation(var_48_float, var_49_float); // 0x1bdc Func
	var_52_string = "start: "; // 0x1bde PushS
	var_53_int = var_52_string + var_48_float; // 0x1bdf Add
	Trace(var_53_int); // 0x1be0 Func
	var_54_string = "end: "; // 0x1be2 PushS
	var_55_int = var_54_string + var_49_float; // 0x1be3 Add
	Trace(var_55_int); // 0x1be4 Func
	return 4; // 0x1be6 Return
}


func_7638()
{
	return 0; // 0x1dd7 Return
}


func_7640()
{
	var_48_string = "ood5MladVlad3"; // 0x1dd9 PushS
	var_49_int = 1; // 0x1dda PushI
	SetVariable(var_48_string, var_49_int); // 0x1ddb Func
	return 0; // 0x1ddd Return
}


func_2009(var_0_object, var_1_object, var_2_object, var_3_object, var_446_object, var_447_object)
{
	var_0_object = var_447_object; // 0x7da TMov
	var_1_object = var_446_object; // 0x7db TMov
	var_3_object = 0; // 0x7dc TMovB
	var_452_int = 1; // 0x7dd PushI
	if(var_452_int == 0) goto Label_2136; // 0x7de JumpB
	var_453_bool = 0; // 0x7df PushV
	var_453_bool = 0; // 0x7e0 MovB
	var_454_bool = 0; var_455_object = Obj(); // 0x7e1 PushV
	var_455_object = var_1_object; // 0x7e2 MovT
	func_7924(var_455_object); // 0x7e3 Call
	if(var_454_bool == 0) goto Label_2029; // 0x7e5 JumpB
	var_460_bool = 0; var_461_object = Obj(); // 0x7e6 PushV
	var_461_object = var_1_object; // 0x7e7 MovT
	func_7912(var_461_object); // 0x7e8 Call
	var_466_bool = var_460_bool == 0; // 0x7ea Not
	if(var_466_bool == 0) goto Label_2029; // 0x7eb JumpB
	var_453_bool = 1; // 0x7ec MovB
	
Label_2029:
	if(var_453_bool == 0) goto Label_2050; // 0x7ed JumpB
	var_467_string = ""; // 0x7ee PushV
	var_467_string = "Neutral"; // 0x7ef MovS
	func_2166(var_447_object, var_467_string); // 0x7f0 Call
	var_472_int = 6935; // 0x7f2 PushI
	SetMessage(var_472_int); // 0x7f3 TObjFunc
	ClearReplies(); // 0x7f5 TObjFunc
	var_473_int = 7509; // 0x7f7 PushI
	var_474_int = 8291; // 0x7f8 PushI
	var_475_int = 8290; // 0x7f9 PushI
	AddReply(var_473_int, var_474_int, var_475_int); // 0x7fa TObjFunc
	var_476_int = 7518; // 0x7fc PushI
	var_477_int = 8300; // 0x7fd PushI
	var_478_int = 8299; // 0x7fe PushI
	AddReply(var_476_int, var_477_int, var_478_int); // 0x7ff TObjFunc
	goto Label_2136; // 0x801 Jump
	
Label_2136:
	var_479_bool = 0; // 0x858 PushV
	func_7232(var_479_bool); // 0x859 Call
	if(var_479_bool == 0) goto Label_2151; // 0x85b JumpB
	
Label_2140:
	lshWaitForAnimEnd(); // 0x85c Func
	var_480_object = var_3_object; // 0x85e PushT
	if(var_480_object == 0) goto Label_2145; // 0x85f JumpB
	goto Label_2150; // 0x860 Jump
	
Label_2150:
	goto Label_2165; // 0x866 Jump
	
Label_2165:
	return 0; // 0x875 Return
	
Label_2145:
	var_481_string = ""; // 0x861 PushV
	var_481_string = var_2_object; // 0x862 MovT
	func_7125(var_481_string); // 0x863 Call
	goto Label_2140; // 0x865 Jump
	
Label_2151:
	var_482_string = "all"; // 0x867 PushS
	var_483_string = "idle"; // 0x868 PushS
	PlayAnimation(var_482_string, var_483_string); // 0x869 Func
	
Label_2155:
	WaitForAnimEnd(); // 0x86b Func
	var_484_object = var_3_object; // 0x86d PushT
	if(var_484_object == 0) goto Label_2160; // 0x86e JumpB
	goto Label_2165; // 0x86f Jump
	
Label_2160:
	var_485_string = "all"; // 0x870 PushS
	var_486_string = "idle"; // 0x871 PushS
	PlayAnimation(var_485_string, var_486_string); // 0x872 Func
	goto Label_2155; // 0x874 Jump
	
Label_2050:
	var_487_string = ""; // 0x802 PushV
	var_487_string = "Neutral"; // 0x803 MovS
	func_2166(var_447_object, var_487_string); // 0x804 Call
	var_488_int = 6929; // 0x806 PushI
	SetMessage(var_488_int); // 0x807 TObjFunc
	ClearReplies(); // 0x809 TObjFunc
	var_489_bool = 0; // 0x80b PushV
	var_489_bool = 0; // 0x80c MovB
	var_490_bool = 0; var_491_object = Obj(); // 0x80d PushV
	var_491_object = var_1_object; // 0x80e MovT
	func_7936(var_491_object); // 0x80f Call
	if(var_490_bool == 0) goto Label_2072; // 0x811 JumpB
	var_496_bool = 0; var_497_object = Obj(); // 0x812 PushV
	var_497_object = var_1_object; // 0x813 MovT
	func_7912(var_497_object); // 0x814 Call
	if(var_496_bool == 0) goto Label_2072; // 0x816 JumpB
	var_489_bool = 1; // 0x817 MovB
	
Label_2072:
	if(var_489_bool == 0) goto Label_2078; // 0x818 JumpB
	var_498_int = 6930; // 0x819 PushI
	var_499_int = 7637; // 0x81a PushI
	var_500_int = 7636; // 0x81b PushI
	AddReply(var_498_int, var_499_int, var_500_int); // 0x81c TObjFunc
	
Label_2078:
	var_501_bool = 0; var_502_object = Obj(); // 0x81e PushV
	var_502_object = var_1_object; // 0x81f MovT
	func_7948(var_502_object); // 0x820 Call
	if(var_501_bool == 0) goto Label_2088; // 0x822 JumpB
	var_507_int = 6938; // 0x823 PushI
	var_508_int = 7645; // 0x824 PushI
	var_509_int = 7644; // 0x825 PushI
	AddReply(var_507_int, var_508_int, var_509_int); // 0x826 TObjFunc
	
Label_2088:
	var_510_bool = 0; var_511_object = Obj(); // 0x828 PushV
	var_511_object = var_1_object; // 0x829 MovT
	func_7960(var_511_object); // 0x82a Call
	if(var_510_bool == 0) goto Label_2098; // 0x82c JumpB
	var_516_int = 6940; // 0x82d PushI
	var_517_int = 7647; // 0x82e PushI
	var_518_int = 7646; // 0x82f PushI
	AddReply(var_516_int, var_517_int, var_518_int); // 0x830 TObjFunc
	
Label_2098:
	var_519_bool = 0; var_520_object = Obj(); // 0x832 PushV
	var_520_object = var_1_object; // 0x833 MovT
	func_7972(var_520_object); // 0x834 Call
	if(var_519_bool == 0) goto Label_2108; // 0x836 JumpB
	var_525_int = 7776; // 0x837 PushI
	var_526_int = 8568; // 0x838 PushI
	var_527_int = 8577; // 0x839 PushI
	AddReply(var_525_int, var_526_int, var_527_int); // 0x83a TObjFunc
	
Label_2108:
	var_528_int = 7746; // 0x83c PushI
	var_529_int = -1; // 0x83d PushI
	var_530_int = 8547; // 0x83e PushI
	AddReply(var_528_int, var_529_int, var_530_int); // 0x83f TObjFunc
	goto Label_2136; // 0x841 Jump
}


func_8157(var_214_bool)
{
	var_216_int = 0; var_217_string = ""; // 0x1fde PushV
	var_217_string = "d5q03"; // 0x1fdf MovS
	func_7160(var_216_int, var_217_string); // 0x1fe0 Call
	var_218_int = 2; // 0x1fe2 PushI
	var_219_bool = var_216_int == var_218_int; // 0x1fe3 Eq
	if(var_219_bool == 0) goto Label_8167; // 0x1fe4 JumpB
	var_214_bool = 1; // 0x1fe5 MovB
	return 0; // 0x1fe6 Return
	
Label_8167:
	var_214_bool = 0; // 0x1fe7 MovB
	return 0; // 0x1fe8 Return
}


func_7646()
{
	var_156_object = Obj(); var_157_object = Obj(); var_158_object = Obj(); var_159_object = Obj(); // 0x1dde PushV
	var_160_object = Obj(); // 0x1ddf PushV
	func_8622(var_160_object); // 0x1de0 Call
	var_158_object = var_160_object; // 0x1de1 Mov
	var_161_string = "d6q02BigVlad"; // 0x1de3 PushS
	FindMark(var_159_object, var_161_string); // 0x1de4 ObjFunc
	var_162_object = var_159_object; // 0x1de6 Push
	if(var_162_object == 0) goto Label_7658; // 0x1de7 JumpB
	Remove(); // 0x1de8 ObjFunc
	
Label_7658:
	var_163_string = "d6q02KapellaGotoMladVlad"; // 0x1dea PushS
	FindMark(var_159_object, var_163_string); // 0x1deb ObjFunc
	var_164_object = var_159_object; // 0x1ded Push
	if(var_164_object == 0) goto Label_7665; // 0x1dee JumpB
	Remove(); // 0x1def ObjFunc
	
Label_7665:
	var_165_string = "d6q02MladVladGotoBigVlad"; // 0x1df1 PushS
	FindMark(var_159_object, var_165_string); // 0x1df2 ObjFunc
	var_166_object = var_159_object; // 0x1df4 Push
	if(var_166_object == 0) goto Label_7672; // 0x1df5 JumpB
	Remove(); // 0x1df6 ObjFunc
	
Label_7672:
	var_167_string = "d6q02MladVladGotoBigVladSelf"; // 0x1df8 PushS
	FindMark(var_159_object, var_167_string); // 0x1df9 ObjFunc
	var_168_object = var_159_object; // 0x1dfb Push
	if(var_168_object == 0) goto Label_7679; // 0x1dfc JumpB
	Remove(); // 0x1dfd ObjFunc
	
Label_7679:
	func_8801(); // 0x1e00 Call
	return 4; // 0x1e02 Return
}


func_8672(var_98_int)
{
	var_99_int = 0; var_100_int = 0; // 0x21e0 PushV
	var_101_string = "player"; // 0x21e1 PushS
	GetVariable(var_101_string, var_100_int); // 0x21e2 Func
	var_102_int = 0; // 0x21e4 PushI
	var_103_bool = var_100_int == var_102_int; // 0x21e5 Eq
	if(var_103_bool == 0) goto Label_8682; // 0x21e6 JumpB
	var_98_int = 200001; // 0x21e7 MovI
	return 2; // 0x21e8 Return
	
Label_8682:
	var_104_int = 1; // 0x21ea PushI
	var_105_bool = var_100_int == var_104_int; // 0x21eb Eq
	if(var_105_bool == 0) goto Label_8687; // 0x21ec JumpB
	var_98_int = 200002; // 0x21ed MovI
	return 2; // 0x21ee Return
	
Label_8687:
	var_98_int = 200003; // 0x21ef MovI
	return 2; // 0x21f0 Return
}


func_7143()
{
	var_43_bool = 0; // 0x1be7 PushV
	func_7232(var_43_bool); // 0x1be8 Call
	if(var_43_bool == 0) goto Label_7149; // 0x1bea JumpB
	lshStopSpeech(); // 0x1beb Func
	
Label_7149:
	return 0; // 0x1bed Return
}


func_8169(var_220_bool)
{
	var_222_int = 0; var_223_string = ""; // 0x1fea PushV
	var_223_string = "ood5MladVlad1"; // 0x1feb MovS
	func_7160(var_222_int, var_223_string); // 0x1fec Call
	var_224_int = 0; // 0x1fee PushI
	var_225_bool = var_222_int == var_224_int; // 0x1fef Eq
	if(var_225_bool == 0) goto Label_8179; // 0x1ff0 JumpB
	var_220_bool = 1; // 0x1ff1 MovB
	return 0; // 0x1ff2 Return
	
Label_8179:
	var_220_bool = 0; // 0x1ff3 MovB
	return 0; // 0x1ff4 Return
}


func_7150(var_80_cvector, var_81_cvector)
{
	var_83_float = 0; var_84_float = 0; // 0x1bee PushV
	var_85_int = var_81_cvector | var_81_cvector; // 0x1bef Or
	var_84_float = sqrt(var_85_int); // 0x1bf0 Sqrt2
	var_86_float = 0.0; // 0x1bf1 PushF
	var_87_bool = var_84_float < var_86_float; // 0x1bf2 LT
	if(var_87_bool == 0) goto Label_7158; // 0x1bf3 JumpB
	var_80_cvector = CVector(0.0, 0.0, 0.0); // 0x1bf4 MovV
	return 2; // 0x1bf5 Return
	
Label_7158:
	var_80_cvector = var_81_cvector / var_81_cvector; // 0x1bf6 Div2
	return 2; // 0x1bf7 Return
}


func_8689()
{
	var_70_object = Obj(); var_71_object = Obj(); // 0x21f1 PushV
	var_72_string = "Adding diary entry"; // 0x21f2 PushS
	Trace(var_72_string); // 0x21f3 Func
	var_73_int = 37; // 0x21f5 PushI
	var_74_int = 2; // 0x21f6 PushI
	var_75_int = 12119; // 0x21f7 PushI
	CreateDiaryEntry(var_71_object, var_73_int, var_74_int, var_75_int); // 0x21f8 Func
	var_76_bool = 0; var_77_object = Obj(); var_78_int = 0; // 0x21fa PushV
	var_77_object = var_71_object; // 0x21fb Mov
	var_78_int = -1; // 0x21fc MovI
	func_8593(var_76_bool, var_77_object, var_78_int); // 0x21fd Call
	return 2; // 0x21ff Return
}


func_8181(var_232_bool)
{
	var_234_int = 0; var_235_string = ""; // 0x1ff6 PushV
	var_235_string = "ood5MladVlad2"; // 0x1ff7 MovS
	func_7160(var_234_int, var_235_string); // 0x1ff8 Call
	var_236_int = 0; // 0x1ffa PushI
	var_237_bool = var_234_int == var_236_int; // 0x1ffb Eq
	if(var_237_bool == 0) goto Label_8191; // 0x1ffc JumpB
	var_232_bool = 1; // 0x1ffd MovB
	return 0; // 0x1ffe Return
	
Label_8191:
	var_232_bool = 0; // 0x1fff MovB
	return 0; // 0x2000 Return
}


func_7160(var_145_int, var_146_string)
{
	var_147_int = 0; var_148_int = 0; // 0x1bf8 PushV
	GetVariable(var_146_string, var_148_int); // 0x1bf9 Func
	var_145_int = var_148_int; // 0x1bfb Mov
	return 2; // 0x1bfc Return
}


func_7165(var_107_object, var_108_string)
{
	var_109_object = Obj(); var_110_object = Obj(); var_111_object = Obj(); var_112_object = Obj(); // 0x1bfd PushV
	GetMainOutdoorScene(var_111_object); // 0x1bfe Func
	var_113_string = ".bin"; // 0x1c00 PushS
	var_114_int = var_108_string + var_113_string; // 0x1c01 Add
	AddBlankActor(var_112_object, var_111_object, var_108_string, var_114_int); // 0x1c02 Func
	var_107_object = var_112_object; // 0x1c04 Mov
	return 4; // 0x1c05 Return
}


