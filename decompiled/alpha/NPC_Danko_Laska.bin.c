task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool)
{
	StopGroup0(); // 0x3 Func
	return 0; // 0x5 Return
}


task_1_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool)
{
	TaskCall(0); // 0x1e TaskCall
	func_0(); // 0x1f Call
	TaskReturn(); // 0x20 TaskReturn
	return 0; // 0x22 Return
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool)
{
	var_26_object = Obj(); // 0x24 PushV
	var_26_object = var_25_bool; // 0x25 Mov
	func_3291(var_26_object); // 0x26 Call
	return 0; // 0x28 Return
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool)
{
	var_26_bool = 0; var_27_object = Obj(); // 0x2a PushV
	var_27_object = var_25_bool; // 0x2b Mov
	func_2506(var_27_object); // 0x2c Call
	WaitForAnimEnd(); // 0x2e Func
	return 0; // 0x30 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool)
{
	var_27_int = 1; // 0xc0 PushI
	if(var_27_int == 0) goto Label_301; // 0xc1 JumpB
	func_2601(); // 0xc3 Call
	var_29_int = 429; // 0xc5 PushI
	var_30_bool = var_25_string == var_29_int; // 0xc6 Eq
	if(var_30_bool == 0) goto Label_225; // 0xc7 JumpB
	var_31_object = Obj(); var_32_object = Obj(); // 0xc8 PushV
	var_31_object = var_1_object; // 0xc9 MovT
	var_32_object = var_0_object; // 0xca MovT
	func_2845(); // 0xcb Call
	var_35_string = ""; // 0xcd PushV
	var_35_string = "Neutral"; // 0xce MovS
	func_175(var_26_bool, var_35_string); // 0xcf Call
	var_50_int = 370; // 0xd1 PushI
	SetMessage(var_50_int); // 0xd2 TObjFunc
	ClearReplies(); // 0xd4 TObjFunc
	var_51_int = 371; // 0xd6 PushI
	var_52_int = 432; // 0xd7 PushI
	var_53_int = 430; // 0xd8 PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0xd9 TObjFunc
	var_54_int = 372; // 0xdb PushI
	var_55_int = 437; // 0xdc PushI
	var_56_int = 431; // 0xdd PushI
	AddReply(var_54_int, var_55_int, var_56_int); // 0xde TObjFunc
	return 0; // 0xe0 Return
	
Label_225:
	var_57_int = 437; // 0xe1 PushI
	var_58_bool = var_25_string == var_57_int; // 0xe2 Eq
	if(var_58_bool == 0) goto Label_243; // 0xe3 JumpB
	var_59_string = ""; // 0xe4 PushV
	var_59_string = "Neutral"; // 0xe5 MovS
	func_175(var_26_bool, var_59_string); // 0xe6 Call
	var_60_int = 377; // 0xe8 PushI
	SetMessage(var_60_int); // 0xe9 TObjFunc
	ClearReplies(); // 0xeb TObjFunc
	var_61_int = 378; // 0xed PushI
	var_62_int = 432; // 0xee PushI
	var_63_int = 438; // 0xef PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0xf0 TObjFunc
	return 0; // 0xf2 Return
	
Label_243:
	var_64_int = 432; // 0xf3 PushI
	var_65_bool = var_25_string == var_64_int; // 0xf4 Eq
	if(var_65_bool == 0) goto Label_266; // 0xf5 JumpB
	var_66_string = ""; // 0xf6 PushV
	var_66_string = "Neutral"; // 0xf7 MovS
	func_175(var_26_bool, var_66_string); // 0xf8 Call
	var_67_int = 373; // 0xfa PushI
	SetMessage(var_67_int); // 0xfb TObjFunc
	ClearReplies(); // 0xfd TObjFunc
	var_68_int = 374; // 0xff PushI
	var_69_int = 435; // 0x100 PushI
	var_70_int = 433; // 0x101 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0x102 TObjFunc
	var_71_int = 375; // 0x104 PushI
	var_72_int = 435; // 0x105 PushI
	var_73_int = 434; // 0x106 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x107 TObjFunc
	return 0; // 0x109 Return
	
Label_266:
	var_74_int = 435; // 0x10a PushI
	var_75_bool = var_25_string == var_74_int; // 0x10b Eq
	if(var_75_bool == 0) goto Label_289; // 0x10c JumpB
	var_76_string = ""; // 0x10d PushV
	var_76_string = "Neutral"; // 0x10e MovS
	func_175(var_26_bool, var_76_string); // 0x10f Call
	var_77_int = 376; // 0x111 PushI
	SetMessage(var_77_int); // 0x112 TObjFunc
	ClearReplies(); // 0x114 TObjFunc
	var_78_int = 381; // 0x116 PushI
	var_79_int = -1; // 0x117 PushI
	var_80_int = 442; // 0x118 PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0x119 TObjFunc
	var_81_int = 379; // 0x11b PushI
	var_82_int = -1; // 0x11c PushI
	var_83_int = 440; // 0x11d PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x11e TObjFunc
	return 0; // 0x120 Return
	
Label_289:
	var_3_string = 1; // 0x121 TMovB
	var_84_bool = 0; // 0x122 PushV
	func_2702(var_84_bool); // 0x123 Call
	if(var_84_bool == 0) goto Label_297; // 0x125 JumpB
	lshStopAnimation(); // 0x126 Func
	goto Label_299; // 0x128 Jump
	
Label_299:
	return 0; // 0x12b Return
	
Label_297:
	StopAnimation(); // 0x129 Func
	
Label_301:
	return 0; // 0x12d Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool)
{
	var_27_int = 1; // 0x27d PushI
	if(var_27_int == 0) goto Label_1507; // 0x27e JumpB
	func_2601(); // 0x280 Call
	var_29_int = 5562; // 0x282 PushI
	var_30_bool = var_26_bool == var_29_int; // 0x283 Eq
	if(var_30_bool == 0) goto Label_665; // 0x284 JumpB
	var_31_object = Obj(); var_32_object = Obj(); // 0x285 PushV
	var_31_object = var_1_object; // 0x286 MovT
	var_32_object = var_0_object; // 0x287 MovT
	func_2851(); // 0x288 Call
	var_35_object = Obj(); var_36_object = Obj(); // 0x28a PushV
	var_35_object = var_1_object; // 0x28b MovT
	var_36_object = var_0_object; // 0x28c MovT
	func_2704(); // 0x28d Call
	var_91_object = Obj(); var_92_object = Obj(); // 0x28f PushV
	var_91_object = var_1_object; // 0x290 MovT
	var_92_object = var_0_object; // 0x291 MovT
	func_2759(); // 0x292 Call
	var_95_object = Obj(); var_96_object = Obj(); // 0x294 PushV
	var_95_object = var_1_object; // 0x295 MovT
	var_96_object = var_0_object; // 0x296 MovT
	func_2738(var_96_object); // 0x297 Call
	
Label_665:
	var_114_int = 5563; // 0x299 PushI
	var_115_bool = var_26_bool == var_114_int; // 0x29a Eq
	if(var_115_bool == 0) goto Label_688; // 0x29b JumpB
	var_116_object = Obj(); var_117_object = Obj(); // 0x29c PushV
	var_116_object = var_1_object; // 0x29d MovT
	var_117_object = var_0_object; // 0x29e MovT
	func_2851(); // 0x29f Call
	var_118_object = Obj(); var_119_object = Obj(); // 0x2a1 PushV
	var_118_object = var_1_object; // 0x2a2 MovT
	var_119_object = var_0_object; // 0x2a3 MovT
	func_2704(); // 0x2a4 Call
	var_120_object = Obj(); var_121_object = Obj(); // 0x2a6 PushV
	var_120_object = var_1_object; // 0x2a7 MovT
	var_121_object = var_0_object; // 0x2a8 MovT
	func_2759(); // 0x2a9 Call
	var_122_object = Obj(); var_123_object = Obj(); // 0x2ab PushV
	var_122_object = var_1_object; // 0x2ac MovT
	var_123_object = var_0_object; // 0x2ad MovT
	func_2738(var_123_object); // 0x2ae Call
	
Label_688:
	var_124_int = 5564; // 0x2b0 PushI
	var_125_bool = var_26_bool == var_124_int; // 0x2b1 Eq
	if(var_125_bool == 0) goto Label_711; // 0x2b2 JumpB
	var_126_object = Obj(); var_127_object = Obj(); // 0x2b3 PushV
	var_126_object = var_1_object; // 0x2b4 MovT
	var_127_object = var_0_object; // 0x2b5 MovT
	func_2851(); // 0x2b6 Call
	var_128_object = Obj(); var_129_object = Obj(); // 0x2b8 PushV
	var_128_object = var_1_object; // 0x2b9 MovT
	var_129_object = var_0_object; // 0x2ba MovT
	func_2704(); // 0x2bb Call
	var_130_object = Obj(); var_131_object = Obj(); // 0x2bd PushV
	var_130_object = var_1_object; // 0x2be MovT
	var_131_object = var_0_object; // 0x2bf MovT
	func_2759(); // 0x2c0 Call
	var_132_object = Obj(); var_133_object = Obj(); // 0x2c2 PushV
	var_132_object = var_1_object; // 0x2c3 MovT
	var_133_object = var_0_object; // 0x2c4 MovT
	func_2738(var_133_object); // 0x2c5 Call
	
Label_711:
	var_134_int = 5591; // 0x2c7 PushI
	var_135_bool = var_26_bool == var_134_int; // 0x2c8 Eq
	if(var_135_bool == 0) goto Label_724; // 0x2c9 JumpB
	var_136_object = Obj(); var_137_object = Obj(); // 0x2ca PushV
	var_136_object = var_1_object; // 0x2cb MovT
	var_137_object = var_0_object; // 0x2cc MovT
	func_2851(); // 0x2cd Call
	var_138_object = Obj(); var_139_object = Obj(); // 0x2cf PushV
	var_138_object = var_1_object; // 0x2d0 MovT
	var_139_object = var_0_object; // 0x2d1 MovT
	func_2704(); // 0x2d2 Call
	
Label_724:
	var_140_int = 5617; // 0x2d4 PushI
	var_141_bool = var_26_bool == var_140_int; // 0x2d5 Eq
	if(var_141_bool == 0) goto Label_732; // 0x2d6 JumpB
	var_142_object = Obj(); var_143_object = Obj(); // 0x2d7 PushV
	var_142_object = var_1_object; // 0x2d8 MovT
	var_143_object = var_0_object; // 0x2d9 MovT
	func_2863(); // 0x2da Call
	
Label_732:
	var_146_int = 5613; // 0x2dc PushI
	var_147_bool = var_26_bool == var_146_int; // 0x2dd Eq
	if(var_147_bool == 0) goto Label_740; // 0x2de JumpB
	var_148_object = Obj(); var_149_object = Obj(); // 0x2df PushV
	var_148_object = var_1_object; // 0x2e0 MovT
	var_149_object = var_0_object; // 0x2e1 MovT
	func_2863(); // 0x2e2 Call
	
Label_740:
	var_150_int = 5597; // 0x2e4 PushI
	var_151_bool = var_26_bool == var_150_int; // 0x2e5 Eq
	if(var_151_bool == 0) goto Label_748; // 0x2e6 JumpB
	var_152_object = Obj(); var_153_object = Obj(); // 0x2e7 PushV
	var_152_object = var_1_object; // 0x2e8 MovT
	var_153_object = var_0_object; // 0x2e9 MovT
	func_2869(); // 0x2ea Call
	
Label_748:
	var_156_int = 5598; // 0x2ec PushI
	var_157_bool = var_26_bool == var_156_int; // 0x2ed Eq
	if(var_157_bool == 0) goto Label_756; // 0x2ee JumpB
	var_158_object = Obj(); var_159_object = Obj(); // 0x2ef PushV
	var_158_object = var_1_object; // 0x2f0 MovT
	var_159_object = var_0_object; // 0x2f1 MovT
	func_2869(); // 0x2f2 Call
	
Label_756:
	var_160_int = 5599; // 0x2f4 PushI
	var_161_bool = var_26_bool == var_160_int; // 0x2f5 Eq
	if(var_161_bool == 0) goto Label_764; // 0x2f6 JumpB
	var_162_object = Obj(); var_163_object = Obj(); // 0x2f7 PushV
	var_162_object = var_1_object; // 0x2f8 MovT
	var_163_object = var_0_object; // 0x2f9 MovT
	func_2869(); // 0x2fa Call
	
Label_764:
	var_164_int = 5606; // 0x2fc PushI
	var_165_bool = var_26_bool == var_164_int; // 0x2fd Eq
	if(var_165_bool == 0) goto Label_772; // 0x2fe JumpB
	var_166_object = Obj(); var_167_object = Obj(); // 0x2ff PushV
	var_166_object = var_1_object; // 0x300 MovT
	var_167_object = var_0_object; // 0x301 MovT
	func_2869(); // 0x302 Call
	
Label_772:
	var_168_int = 9530; // 0x304 PushI
	var_169_bool = var_26_bool == var_168_int; // 0x305 Eq
	if(var_169_bool == 0) goto Label_780; // 0x306 JumpB
	var_170_object = Obj(); var_171_object = Obj(); // 0x307 PushV
	var_170_object = var_1_object; // 0x308 MovT
	var_171_object = var_0_object; // 0x309 MovT
	func_2765(); // 0x30a Call
	
Label_780:
	var_174_int = 9531; // 0x30c PushI
	var_175_bool = var_26_bool == var_174_int; // 0x30d Eq
	if(var_175_bool == 0) goto Label_788; // 0x30e JumpB
	var_176_object = Obj(); var_177_object = Obj(); // 0x30f PushV
	var_176_object = var_1_object; // 0x310 MovT
	var_177_object = var_0_object; // 0x311 MovT
	func_2771(); // 0x312 Call
	
Label_788:
	var_180_int = 9532; // 0x314 PushI
	var_181_bool = var_26_bool == var_180_int; // 0x315 Eq
	if(var_181_bool == 0) goto Label_796; // 0x316 JumpB
	var_182_object = Obj(); var_183_object = Obj(); // 0x317 PushV
	var_182_object = var_1_object; // 0x318 MovT
	var_183_object = var_0_object; // 0x319 MovT
	func_2777(); // 0x31a Call
	
Label_796:
	var_186_int = 9533; // 0x31c PushI
	var_187_bool = var_26_bool == var_186_int; // 0x31d Eq
	if(var_187_bool == 0) goto Label_804; // 0x31e JumpB
	var_188_object = Obj(); var_189_object = Obj(); // 0x31f PushV
	var_188_object = var_1_object; // 0x320 MovT
	var_189_object = var_0_object; // 0x321 MovT
	func_2783(); // 0x322 Call
	
Label_804:
	var_192_int = 5553; // 0x324 PushI
	var_193_bool = var_25_string == var_192_int; // 0x325 Eq
	if(var_193_bool == 0) goto Label_1024; // 0x326 JumpB
	var_194_bool = 0; // 0x327 PushV
	var_194_bool = 0; // 0x328 MovB
	var_195_bool = 0; var_196_object = Obj(); // 0x329 PushV
	var_196_object = var_1_object; // 0x32a MovT
	func_3073(var_196_object); // 0x32b Call
	if(var_195_bool == 0) goto Label_820; // 0x32d JumpB
	var_203_bool = 0; var_204_object = Obj(); // 0x32e PushV
	var_204_object = var_1_object; // 0x32f MovT
	func_2887(var_204_object); // 0x330 Call
	if(var_203_bool == 0) goto Label_820; // 0x332 JumpB
	var_194_bool = 1; // 0x333 MovB
	
Label_820:
	if(var_194_bool == 0) goto Label_841; // 0x334 JumpB
	var_209_string = ""; // 0x335 PushV
	var_209_string = "Neutral"; // 0x336 MovS
	func_620(var_26_bool, var_209_string); // 0x337 Call
	var_224_int = 5050; // 0x339 PushI
	SetMessage(var_224_int); // 0x33a TObjFunc
	ClearReplies(); // 0x33c TObjFunc
	var_225_int = 5051; // 0x33e PushI
	var_226_int = 5555; // 0x33f PushI
	var_227_int = 5554; // 0x340 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x341 TObjFunc
	var_228_int = 5073; // 0x343 PushI
	var_229_int = 5582; // 0x344 PushI
	var_230_int = 5581; // 0x345 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x346 TObjFunc
	return 0; // 0x348 Return
	
Label_841:
	var_231_string = ""; // 0x349 PushV
	var_231_string = "Neutral"; // 0x34a MovS
	func_620(var_26_bool, var_231_string); // 0x34b Call
	var_232_int = 8066; // 0x34d PushI
	SetMessage(var_232_int); // 0x34e TObjFunc
	ClearReplies(); // 0x350 TObjFunc
	var_233_bool = 0; // 0x352 PushV
	var_233_bool = 1; // 0x353 MovB
	var_234_bool = 0; // 0x354 PushV
	var_234_bool = 0; // 0x355 MovB
	var_235_bool = 0; // 0x356 PushV
	var_235_bool = 0; // 0x357 MovB
	var_236_bool = 0; var_237_object = Obj(); // 0x358 PushV
	var_237_object = var_1_object; // 0x359 MovT
	func_2957(var_236_bool, var_237_object); // 0x35a Call
	if(var_236_bool == 0) goto Label_867; // 0x35c JumpB
	var_251_bool = 0; var_252_object = Obj(); // 0x35d PushV
	var_252_object = var_1_object; // 0x35e MovT
	func_3085(var_252_object); // 0x35f Call
	if(var_251_bool == 0) goto Label_867; // 0x361 JumpB
	var_235_bool = 1; // 0x362 MovB
	
Label_867:
	if(var_235_bool == 0) goto Label_874; // 0x363 JumpB
	var_257_bool = 0; var_258_object = Obj(); // 0x364 PushV
	var_258_object = var_1_object; // 0x365 MovT
	func_2875(var_258_object); // 0x366 Call
	if(var_257_bool == 0) goto Label_874; // 0x368 JumpB
	var_234_bool = 1; // 0x369 MovB
	
Label_874:
	if(var_234_bool == 0) goto Label_899; // 0x36a JumpB
	var_263_bool = 0; // 0x36b PushV
	var_263_bool = 0; // 0x36c MovB
	var_264_bool = 0; // 0x36d PushV
	var_264_bool = 0; // 0x36e MovB
	var_265_bool = 0; var_266_object = Obj(); // 0x36f PushV
	var_266_object = var_1_object; // 0x370 MovT
	func_2967(var_265_bool, var_266_object); // 0x371 Call
	if(var_265_bool == 0) goto Label_890; // 0x373 JumpB
	var_276_bool = 0; var_277_object = Obj(); // 0x374 PushV
	var_277_object = var_1_object; // 0x375 MovT
	func_3085(var_277_object); // 0x376 Call
	if(var_276_bool == 0) goto Label_890; // 0x378 JumpB
	var_264_bool = 1; // 0x379 MovB
	
Label_890:
	if(var_264_bool == 0) goto Label_897; // 0x37a JumpB
	var_278_bool = 0; var_279_object = Obj(); // 0x37b PushV
	var_279_object = var_1_object; // 0x37c MovT
	func_2875(var_279_object); // 0x37d Call
	if(var_278_bool == 0) goto Label_897; // 0x37f JumpB
	var_263_bool = 1; // 0x380 MovB
	
Label_897:
	if(var_263_bool == 0) goto Label_899; // 0x381 JumpB
	var_233_bool = 0; // 0x382 MovB
	
Label_899:
	if(var_233_bool == 0) goto Label_905; // 0x383 JumpB
	var_280_int = 8067; // 0x384 PushI
	var_281_int = 5607; // 0x385 PushI
	var_282_int = 8890; // 0x386 PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0x387 TObjFunc
	
Label_905:
	var_283_bool = 0; // 0x389 PushV
	var_283_bool = 1; // 0x38a MovB
	var_284_bool = 0; // 0x38b PushV
	var_284_bool = 0; // 0x38c MovB
	var_285_bool = 0; var_286_object = Obj(); // 0x38d PushV
	var_286_object = var_1_object; // 0x38e MovT
	func_2967(var_285_bool, var_286_object); // 0x38f Call
	if(var_285_bool == 0) goto Label_920; // 0x391 JumpB
	var_287_bool = 0; var_288_object = Obj(); // 0x392 PushV
	var_288_object = var_1_object; // 0x393 MovT
	func_3097(var_288_object); // 0x394 Call
	if(var_287_bool == 0) goto Label_920; // 0x396 JumpB
	var_284_bool = 1; // 0x397 MovB
	
Label_920:
	if(var_284_bool == 0) goto Label_936; // 0x398 JumpB
	var_293_bool = 0; // 0x399 PushV
	var_293_bool = 0; // 0x39a MovB
	var_294_bool = 0; var_295_object = Obj(); // 0x39b PushV
	var_295_object = var_1_object; // 0x39c MovT
	func_2947(var_294_bool, var_295_object); // 0x39d Call
	if(var_294_bool == 0) goto Label_934; // 0x39f JumpB
	var_301_bool = 0; var_302_object = Obj(); // 0x3a0 PushV
	var_302_object = var_1_object; // 0x3a1 MovT
	func_3097(var_302_object); // 0x3a2 Call
	if(var_301_bool == 0) goto Label_934; // 0x3a4 JumpB
	var_293_bool = 1; // 0x3a5 MovB
	
Label_934:
	if(var_293_bool == 0) goto Label_936; // 0x3a6 JumpB
	var_283_bool = 0; // 0x3a7 MovB
	
Label_936:
	if(var_283_bool == 0) goto Label_942; // 0x3a8 JumpB
	var_303_int = 8068; // 0x3a9 PushI
	var_304_int = 5592; // 0x3aa PushI
	var_305_int = 8891; // 0x3ab PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x3ac TObjFunc
	
Label_942:
	var_306_bool = 0; // 0x3ae PushV
	var_306_bool = 0; // 0x3af MovB
	var_307_bool = 0; var_308_object = Obj(); // 0x3b0 PushV
	var_308_object = var_1_object; // 0x3b1 MovT
	func_3061(var_308_object); // 0x3b2 Call
	if(var_307_bool == 0) goto Label_955; // 0x3b4 JumpB
	var_313_bool = 0; var_314_object = Obj(); // 0x3b5 PushV
	var_314_object = var_1_object; // 0x3b6 MovT
	func_2899(var_314_object); // 0x3b7 Call
	if(var_313_bool == 0) goto Label_955; // 0x3b9 JumpB
	var_306_bool = 1; // 0x3ba MovB
	
Label_955:
	if(var_306_bool == 0) goto Label_961; // 0x3bb JumpB
	var_319_int = 8076; // 0x3bc PushI
	var_320_int = 8916; // 0x3bd PushI
	var_321_int = 8899; // 0x3be PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0x3bf TObjFunc
	
Label_961:
	var_322_bool = 0; // 0x3c1 PushV
	var_322_bool = 0; // 0x3c2 MovB
	var_323_bool = 0; var_324_object = Obj(); // 0x3c3 PushV
	var_324_object = var_1_object; // 0x3c4 MovT
	func_3025(var_324_object); // 0x3c5 Call
	if(var_323_bool == 0) goto Label_974; // 0x3c7 JumpB
	var_329_bool = 0; var_330_object = Obj(); // 0x3c8 PushV
	var_330_object = var_1_object; // 0x3c9 MovT
	func_2911(var_330_object); // 0x3ca Call
	if(var_329_bool == 0) goto Label_974; // 0x3cc JumpB
	var_322_bool = 1; // 0x3cd MovB
	
Label_974:
	if(var_322_bool == 0) goto Label_980; // 0x3ce JumpB
	var_335_int = 8077; // 0x3cf PushI
	var_336_int = 8917; // 0x3d0 PushI
	var_337_int = 8900; // 0x3d1 PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x3d2 TObjFunc
	
Label_980:
	var_338_bool = 0; // 0x3d4 PushV
	var_338_bool = 0; // 0x3d5 MovB
	var_339_bool = 0; var_340_object = Obj(); // 0x3d6 PushV
	var_340_object = var_1_object; // 0x3d7 MovT
	func_3013(var_340_object); // 0x3d8 Call
	if(var_339_bool == 0) goto Label_993; // 0x3da JumpB
	var_345_bool = 0; var_346_object = Obj(); // 0x3db PushV
	var_346_object = var_1_object; // 0x3dc MovT
	func_2923(var_346_object); // 0x3dd Call
	if(var_345_bool == 0) goto Label_993; // 0x3df JumpB
	var_338_bool = 1; // 0x3e0 MovB
	
Label_993:
	if(var_338_bool == 0) goto Label_999; // 0x3e1 JumpB
	var_351_int = 8078; // 0x3e2 PushI
	var_352_int = 8918; // 0x3e3 PushI
	var_353_int = 8901; // 0x3e4 PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0x3e5 TObjFunc
	
Label_999:
	var_354_bool = 0; // 0x3e7 PushV
	var_354_bool = 0; // 0x3e8 MovB
	var_355_bool = 0; var_356_object = Obj(); // 0x3e9 PushV
	var_356_object = var_1_object; // 0x3ea MovT
	func_3037(var_356_object); // 0x3eb Call
	if(var_355_bool == 0) goto Label_1012; // 0x3ed JumpB
	var_361_bool = 0; var_362_object = Obj(); // 0x3ee PushV
	var_362_object = var_1_object; // 0x3ef MovT
	func_2935(var_362_object); // 0x3f0 Call
	if(var_361_bool == 0) goto Label_1012; // 0x3f2 JumpB
	var_354_bool = 1; // 0x3f3 MovB
	
Label_1012:
	if(var_354_bool == 0) goto Label_1018; // 0x3f4 JumpB
	var_367_int = 8090; // 0x3f5 PushI
	var_368_int = 8919; // 0x3f6 PushI
	var_369_int = 8913; // 0x3f7 PushI
	AddReply(var_367_int, var_368_int, var_369_int); // 0x3f8 TObjFunc
	
Label_1018:
	var_370_int = 8697; // 0x3fa PushI
	var_371_int = -1; // 0x3fb PushI
	var_372_int = 9534; // 0x3fc PushI
	AddReply(var_370_int, var_371_int, var_372_int); // 0x3fd TObjFunc
	return 0; // 0x3ff Return
	
Label_1024:
	var_373_int = 8919; // 0x400 PushI
	var_374_bool = var_25_string == var_373_int; // 0x401 Eq
	if(var_374_bool == 0) goto Label_1042; // 0x402 JumpB
	var_375_string = ""; // 0x403 PushV
	var_375_string = "Neutral"; // 0x404 MovS
	func_620(var_26_bool, var_375_string); // 0x405 Call
	var_376_int = 8096; // 0x407 PushI
	SetMessage(var_376_int); // 0x408 TObjFunc
	ClearReplies(); // 0x40a TObjFunc
	var_377_int = 8696; // 0x40c PushI
	var_378_int = -1; // 0x40d PushI
	var_379_int = 9533; // 0x40e PushI
	AddReply(var_377_int, var_378_int, var_379_int); // 0x40f TObjFunc
	return 0; // 0x411 Return
	
Label_1042:
	var_380_int = 8918; // 0x412 PushI
	var_381_bool = var_25_string == var_380_int; // 0x413 Eq
	if(var_381_bool == 0) goto Label_1060; // 0x414 JumpB
	var_382_string = ""; // 0x415 PushV
	var_382_string = "Neutral"; // 0x416 MovS
	func_620(var_26_bool, var_382_string); // 0x417 Call
	var_383_int = 8095; // 0x419 PushI
	SetMessage(var_383_int); // 0x41a TObjFunc
	ClearReplies(); // 0x41c TObjFunc
	var_384_int = 8695; // 0x41e PushI
	var_385_int = -1; // 0x41f PushI
	var_386_int = 9532; // 0x420 PushI
	AddReply(var_384_int, var_385_int, var_386_int); // 0x421 TObjFunc
	return 0; // 0x423 Return
	
Label_1060:
	var_387_int = 8917; // 0x424 PushI
	var_388_bool = var_25_string == var_387_int; // 0x425 Eq
	if(var_388_bool == 0) goto Label_1078; // 0x426 JumpB
	var_389_string = ""; // 0x427 PushV
	var_389_string = "Neutral"; // 0x428 MovS
	func_620(var_26_bool, var_389_string); // 0x429 Call
	var_390_int = 8094; // 0x42b PushI
	SetMessage(var_390_int); // 0x42c TObjFunc
	ClearReplies(); // 0x42e TObjFunc
	var_391_int = 8694; // 0x430 PushI
	var_392_int = -1; // 0x431 PushI
	var_393_int = 9531; // 0x432 PushI
	AddReply(var_391_int, var_392_int, var_393_int); // 0x433 TObjFunc
	return 0; // 0x435 Return
	
Label_1078:
	var_394_int = 8916; // 0x436 PushI
	var_395_bool = var_25_string == var_394_int; // 0x437 Eq
	if(var_395_bool == 0) goto Label_1096; // 0x438 JumpB
	var_396_string = ""; // 0x439 PushV
	var_396_string = "Neutral"; // 0x43a MovS
	func_620(var_26_bool, var_396_string); // 0x43b Call
	var_397_int = 8093; // 0x43d PushI
	SetMessage(var_397_int); // 0x43e TObjFunc
	ClearReplies(); // 0x440 TObjFunc
	var_398_int = 8693; // 0x442 PushI
	var_399_int = -1; // 0x443 PushI
	var_400_int = 9530; // 0x444 PushI
	AddReply(var_398_int, var_399_int, var_400_int); // 0x445 TObjFunc
	return 0; // 0x447 Return
	
Label_1096:
	var_401_int = 5592; // 0x448 PushI
	var_402_bool = var_25_string == var_401_int; // 0x449 Eq
	if(var_402_bool == 0) goto Label_1119; // 0x44a JumpB
	var_403_string = ""; // 0x44b PushV
	var_403_string = "Neutral"; // 0x44c MovS
	func_620(var_26_bool, var_403_string); // 0x44d Call
	var_404_int = 5082; // 0x44f PushI
	SetMessage(var_404_int); // 0x450 TObjFunc
	ClearReplies(); // 0x452 TObjFunc
	var_405_int = 5083; // 0x454 PushI
	var_406_int = 5594; // 0x455 PushI
	var_407_int = 5593; // 0x456 PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0x457 TObjFunc
	var_408_int = 5091; // 0x459 PushI
	var_409_int = 5603; // 0x45a PushI
	var_410_int = 5602; // 0x45b PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0x45c TObjFunc
	return 0; // 0x45e Return
	
Label_1119:
	var_411_int = 5603; // 0x45f PushI
	var_412_bool = var_25_string == var_411_int; // 0x460 Eq
	if(var_412_bool == 0) goto Label_1142; // 0x461 JumpB
	var_413_string = ""; // 0x462 PushV
	var_413_string = "Neutral"; // 0x463 MovS
	func_620(var_26_bool, var_413_string); // 0x464 Call
	var_414_int = 5092; // 0x466 PushI
	SetMessage(var_414_int); // 0x467 TObjFunc
	ClearReplies(); // 0x469 TObjFunc
	var_415_int = 5093; // 0x46b PushI
	var_416_int = 5596; // 0x46c PushI
	var_417_int = 5604; // 0x46d PushI
	AddReply(var_415_int, var_416_int, var_417_int); // 0x46e TObjFunc
	var_418_int = 5094; // 0x470 PushI
	var_419_int = -1; // 0x471 PushI
	var_420_int = 5606; // 0x472 PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0x473 TObjFunc
	return 0; // 0x475 Return
	
Label_1142:
	var_421_int = 5594; // 0x476 PushI
	var_422_bool = var_25_string == var_421_int; // 0x477 Eq
	if(var_422_bool == 0) goto Label_1165; // 0x478 JumpB
	var_423_string = ""; // 0x479 PushV
	var_423_string = "Neutral"; // 0x47a MovS
	func_620(var_26_bool, var_423_string); // 0x47b Call
	var_424_int = 5084; // 0x47d PushI
	SetMessage(var_424_int); // 0x47e TObjFunc
	ClearReplies(); // 0x480 TObjFunc
	var_425_int = 5085; // 0x482 PushI
	var_426_int = 5596; // 0x483 PushI
	var_427_int = 5595; // 0x484 PushI
	AddReply(var_425_int, var_426_int, var_427_int); // 0x485 TObjFunc
	var_428_int = 5090; // 0x487 PushI
	var_429_int = 5596; // 0x488 PushI
	var_430_int = 5600; // 0x489 PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0x48a TObjFunc
	return 0; // 0x48c Return
	
Label_1165:
	var_431_int = 5596; // 0x48d PushI
	var_432_bool = var_25_string == var_431_int; // 0x48e Eq
	if(var_432_bool == 0) goto Label_1193; // 0x48f JumpB
	var_433_string = ""; // 0x490 PushV
	var_433_string = "Neutral"; // 0x491 MovS
	func_620(var_26_bool, var_433_string); // 0x492 Call
	var_434_int = 5086; // 0x494 PushI
	SetMessage(var_434_int); // 0x495 TObjFunc
	ClearReplies(); // 0x497 TObjFunc
	var_435_int = 5087; // 0x499 PushI
	var_436_int = -1; // 0x49a PushI
	var_437_int = 5597; // 0x49b PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0x49c TObjFunc
	var_438_int = 5088; // 0x49e PushI
	var_439_int = -1; // 0x49f PushI
	var_440_int = 5598; // 0x4a0 PushI
	AddReply(var_438_int, var_439_int, var_440_int); // 0x4a1 TObjFunc
	var_441_int = 5089; // 0x4a3 PushI
	var_442_int = -1; // 0x4a4 PushI
	var_443_int = 5599; // 0x4a5 PushI
	AddReply(var_441_int, var_442_int, var_443_int); // 0x4a6 TObjFunc
	return 0; // 0x4a8 Return
	
Label_1193:
	var_444_int = 5607; // 0x4a9 PushI
	var_445_bool = var_25_string == var_444_int; // 0x4aa Eq
	if(var_445_bool == 0) goto Label_1216; // 0x4ab JumpB
	var_446_string = ""; // 0x4ac PushV
	var_446_string = "Neutral"; // 0x4ad MovS
	func_620(var_26_bool, var_446_string); // 0x4ae Call
	var_447_int = 5095; // 0x4b0 PushI
	SetMessage(var_447_int); // 0x4b1 TObjFunc
	ClearReplies(); // 0x4b3 TObjFunc
	var_448_int = 5096; // 0x4b5 PushI
	var_449_int = 5609; // 0x4b6 PushI
	var_450_int = 5608; // 0x4b7 PushI
	AddReply(var_448_int, var_449_int, var_450_int); // 0x4b8 TObjFunc
	var_451_int = 5102; // 0x4ba PushI
	var_452_int = 5609; // 0x4bb PushI
	var_453_int = 5614; // 0x4bc PushI
	AddReply(var_451_int, var_452_int, var_453_int); // 0x4bd TObjFunc
	return 0; // 0x4bf Return
	
Label_1216:
	var_454_int = 5609; // 0x4c0 PushI
	var_455_bool = var_25_string == var_454_int; // 0x4c1 Eq
	if(var_455_bool == 0) goto Label_1239; // 0x4c2 JumpB
	var_456_string = ""; // 0x4c3 PushV
	var_456_string = "Neutral"; // 0x4c4 MovS
	func_620(var_26_bool, var_456_string); // 0x4c5 Call
	var_457_int = 5097; // 0x4c7 PushI
	SetMessage(var_457_int); // 0x4c8 TObjFunc
	ClearReplies(); // 0x4ca TObjFunc
	var_458_int = 5098; // 0x4cc PushI
	var_459_int = 5616; // 0x4cd PushI
	var_460_int = 5610; // 0x4ce PushI
	AddReply(var_458_int, var_459_int, var_460_int); // 0x4cf TObjFunc
	var_461_int = 5099; // 0x4d1 PushI
	var_462_int = 5612; // 0x4d2 PushI
	var_463_int = 5611; // 0x4d3 PushI
	AddReply(var_461_int, var_462_int, var_463_int); // 0x4d4 TObjFunc
	return 0; // 0x4d6 Return
	
Label_1239:
	var_464_int = 5612; // 0x4d7 PushI
	var_465_bool = var_25_string == var_464_int; // 0x4d8 Eq
	if(var_465_bool == 0) goto Label_1257; // 0x4d9 JumpB
	var_466_string = ""; // 0x4da PushV
	var_466_string = "Neutral"; // 0x4db MovS
	func_620(var_26_bool, var_466_string); // 0x4dc Call
	var_467_int = 5100; // 0x4de PushI
	SetMessage(var_467_int); // 0x4df TObjFunc
	ClearReplies(); // 0x4e1 TObjFunc
	var_468_int = 5101; // 0x4e3 PushI
	var_469_int = -1; // 0x4e4 PushI
	var_470_int = 5613; // 0x4e5 PushI
	AddReply(var_468_int, var_469_int, var_470_int); // 0x4e6 TObjFunc
	return 0; // 0x4e8 Return
	
Label_1257:
	var_471_int = 5616; // 0x4e9 PushI
	var_472_bool = var_25_string == var_471_int; // 0x4ea Eq
	if(var_472_bool == 0) goto Label_1275; // 0x4eb JumpB
	var_473_string = ""; // 0x4ec PushV
	var_473_string = "Neutral"; // 0x4ed MovS
	func_620(var_26_bool, var_473_string); // 0x4ee Call
	var_474_int = 5103; // 0x4f0 PushI
	SetMessage(var_474_int); // 0x4f1 TObjFunc
	ClearReplies(); // 0x4f3 TObjFunc
	var_475_int = 5104; // 0x4f5 PushI
	var_476_int = -1; // 0x4f6 PushI
	var_477_int = 5617; // 0x4f7 PushI
	AddReply(var_475_int, var_476_int, var_477_int); // 0x4f8 TObjFunc
	return 0; // 0x4fa Return
	
Label_1275:
	var_478_int = 5582; // 0x4fb PushI
	var_479_bool = var_25_string == var_478_int; // 0x4fc Eq
	if(var_479_bool == 0) goto Label_1298; // 0x4fd JumpB
	var_480_string = ""; // 0x4fe PushV
	var_480_string = "Neutral"; // 0x4ff MovS
	func_620(var_26_bool, var_480_string); // 0x500 Call
	var_481_int = 5074; // 0x502 PushI
	SetMessage(var_481_int); // 0x503 TObjFunc
	ClearReplies(); // 0x505 TObjFunc
	var_482_int = 5075; // 0x507 PushI
	var_483_int = 5584; // 0x508 PushI
	var_484_int = 5583; // 0x509 PushI
	AddReply(var_482_int, var_483_int, var_484_int); // 0x50a TObjFunc
	var_485_int = 5078; // 0x50c PushI
	var_486_int = 5588; // 0x50d PushI
	var_487_int = 5587; // 0x50e PushI
	AddReply(var_485_int, var_486_int, var_487_int); // 0x50f TObjFunc
	return 0; // 0x511 Return
	
Label_1298:
	var_488_int = 5588; // 0x512 PushI
	var_489_bool = var_25_string == var_488_int; // 0x513 Eq
	if(var_489_bool == 0) goto Label_1321; // 0x514 JumpB
	var_490_string = ""; // 0x515 PushV
	var_490_string = "Neutral"; // 0x516 MovS
	func_620(var_26_bool, var_490_string); // 0x517 Call
	var_491_int = 5079; // 0x519 PushI
	SetMessage(var_491_int); // 0x51a TObjFunc
	ClearReplies(); // 0x51c TObjFunc
	var_492_int = 5080; // 0x51e PushI
	var_493_int = 5557; // 0x51f PushI
	var_494_int = 5589; // 0x520 PushI
	AddReply(var_492_int, var_493_int, var_494_int); // 0x521 TObjFunc
	var_495_int = 5081; // 0x523 PushI
	var_496_int = -1; // 0x524 PushI
	var_497_int = 5591; // 0x525 PushI
	AddReply(var_495_int, var_496_int, var_497_int); // 0x526 TObjFunc
	return 0; // 0x528 Return
	
Label_1321:
	var_498_int = 5584; // 0x529 PushI
	var_499_bool = var_25_string == var_498_int; // 0x52a Eq
	if(var_499_bool == 0) goto Label_1339; // 0x52b JumpB
	var_500_string = ""; // 0x52c PushV
	var_500_string = "Neutral"; // 0x52d MovS
	func_620(var_26_bool, var_500_string); // 0x52e Call
	var_501_int = 5076; // 0x530 PushI
	SetMessage(var_501_int); // 0x531 TObjFunc
	ClearReplies(); // 0x533 TObjFunc
	var_502_int = 5077; // 0x535 PushI
	var_503_int = 5555; // 0x536 PushI
	var_504_int = 5585; // 0x537 PushI
	AddReply(var_502_int, var_503_int, var_504_int); // 0x538 TObjFunc
	return 0; // 0x53a Return
	
Label_1339:
	var_505_int = 5555; // 0x53b PushI
	var_506_bool = var_25_string == var_505_int; // 0x53c Eq
	if(var_506_bool == 0) goto Label_1362; // 0x53d JumpB
	var_507_string = ""; // 0x53e PushV
	var_507_string = "Neutral"; // 0x53f MovS
	func_620(var_26_bool, var_507_string); // 0x540 Call
	var_508_int = 5052; // 0x542 PushI
	SetMessage(var_508_int); // 0x543 TObjFunc
	ClearReplies(); // 0x545 TObjFunc
	var_509_int = 5053; // 0x547 PushI
	var_510_int = 5557; // 0x548 PushI
	var_511_int = 5556; // 0x549 PushI
	AddReply(var_509_int, var_510_int, var_511_int); // 0x54a TObjFunc
	var_512_int = 5069; // 0x54c PushI
	var_513_int = 5576; // 0x54d PushI
	var_514_int = 5575; // 0x54e PushI
	AddReply(var_512_int, var_513_int, var_514_int); // 0x54f TObjFunc
	return 0; // 0x551 Return
	
Label_1362:
	var_515_int = 5576; // 0x552 PushI
	var_516_bool = var_25_string == var_515_int; // 0x553 Eq
	if(var_516_bool == 0) goto Label_1385; // 0x554 JumpB
	var_517_string = ""; // 0x555 PushV
	var_517_string = "Neutral"; // 0x556 MovS
	func_620(var_26_bool, var_517_string); // 0x557 Call
	var_518_int = 5070; // 0x559 PushI
	SetMessage(var_518_int); // 0x55a TObjFunc
	ClearReplies(); // 0x55c TObjFunc
	var_519_int = 5071; // 0x55e PushI
	var_520_int = 5557; // 0x55f PushI
	var_521_int = 5577; // 0x560 PushI
	AddReply(var_519_int, var_520_int, var_521_int); // 0x561 TObjFunc
	var_522_int = 5072; // 0x563 PushI
	var_523_int = 5557; // 0x564 PushI
	var_524_int = 5579; // 0x565 PushI
	AddReply(var_522_int, var_523_int, var_524_int); // 0x566 TObjFunc
	return 0; // 0x568 Return
	
Label_1385:
	var_525_int = 5557; // 0x569 PushI
	var_526_bool = var_25_string == var_525_int; // 0x56a Eq
	if(var_526_bool == 0) goto Label_1403; // 0x56b JumpB
	var_527_string = ""; // 0x56c PushV
	var_527_string = "Neutral"; // 0x56d MovS
	func_620(var_26_bool, var_527_string); // 0x56e Call
	var_528_int = 5054; // 0x570 PushI
	SetMessage(var_528_int); // 0x571 TObjFunc
	ClearReplies(); // 0x573 TObjFunc
	var_529_int = 5055; // 0x575 PushI
	var_530_int = 5559; // 0x576 PushI
	var_531_int = 5558; // 0x577 PushI
	AddReply(var_529_int, var_530_int, var_531_int); // 0x578 TObjFunc
	return 0; // 0x57a Return
	
Label_1403:
	var_532_int = 5559; // 0x57b PushI
	var_533_bool = var_25_string == var_532_int; // 0x57c Eq
	if(var_533_bool == 0) goto Label_1426; // 0x57d JumpB
	var_534_string = ""; // 0x57e PushV
	var_534_string = "Neutral"; // 0x57f MovS
	func_620(var_26_bool, var_534_string); // 0x580 Call
	var_535_int = 5056; // 0x582 PushI
	SetMessage(var_535_int); // 0x583 TObjFunc
	ClearReplies(); // 0x585 TObjFunc
	var_536_int = 5057; // 0x587 PushI
	var_537_int = 5561; // 0x588 PushI
	var_538_int = 5560; // 0x589 PushI
	AddReply(var_536_int, var_537_int, var_538_int); // 0x58a TObjFunc
	var_539_int = 5062; // 0x58c PushI
	var_540_int = 5566; // 0x58d PushI
	var_541_int = 5565; // 0x58e PushI
	AddReply(var_539_int, var_540_int, var_541_int); // 0x58f TObjFunc
	return 0; // 0x591 Return
	
Label_1426:
	var_542_int = 5566; // 0x592 PushI
	var_543_bool = var_25_string == var_542_int; // 0x593 Eq
	if(var_543_bool == 0) goto Label_1449; // 0x594 JumpB
	var_544_string = ""; // 0x595 PushV
	var_544_string = "Neutral"; // 0x596 MovS
	func_620(var_26_bool, var_544_string); // 0x597 Call
	var_545_int = 5063; // 0x599 PushI
	SetMessage(var_545_int); // 0x59a TObjFunc
	ClearReplies(); // 0x59c TObjFunc
	var_546_int = 5064; // 0x59e PushI
	var_547_int = 5561; // 0x59f PushI
	var_548_int = 5567; // 0x5a0 PushI
	AddReply(var_546_int, var_547_int, var_548_int); // 0x5a1 TObjFunc
	var_549_int = 5065; // 0x5a3 PushI
	var_550_int = 5570; // 0x5a4 PushI
	var_551_int = 5569; // 0x5a5 PushI
	AddReply(var_549_int, var_550_int, var_551_int); // 0x5a6 TObjFunc
	return 0; // 0x5a8 Return
	
Label_1449:
	var_552_int = 5570; // 0x5a9 PushI
	var_553_bool = var_25_string == var_552_int; // 0x5aa Eq
	if(var_553_bool == 0) goto Label_1467; // 0x5ab JumpB
	var_554_string = ""; // 0x5ac PushV
	var_554_string = "Neutral"; // 0x5ad MovS
	func_620(var_26_bool, var_554_string); // 0x5ae Call
	var_555_int = 5066; // 0x5b0 PushI
	SetMessage(var_555_int); // 0x5b1 TObjFunc
	ClearReplies(); // 0x5b3 TObjFunc
	var_556_int = 5067; // 0x5b5 PushI
	var_557_int = 5561; // 0x5b6 PushI
	var_558_int = 5571; // 0x5b7 PushI
	AddReply(var_556_int, var_557_int, var_558_int); // 0x5b8 TObjFunc
	return 0; // 0x5ba Return
	
Label_1467:
	var_559_int = 5561; // 0x5bb PushI
	var_560_bool = var_25_string == var_559_int; // 0x5bc Eq
	if(var_560_bool == 0) goto Label_1495; // 0x5bd JumpB
	var_561_string = ""; // 0x5be PushV
	var_561_string = "Neutral"; // 0x5bf MovS
	func_620(var_26_bool, var_561_string); // 0x5c0 Call
	var_562_int = 5058; // 0x5c2 PushI
	SetMessage(var_562_int); // 0x5c3 TObjFunc
	ClearReplies(); // 0x5c5 TObjFunc
	var_563_int = 5059; // 0x5c7 PushI
	var_564_int = -1; // 0x5c8 PushI
	var_565_int = 5562; // 0x5c9 PushI
	AddReply(var_563_int, var_564_int, var_565_int); // 0x5ca TObjFunc
	var_566_int = 5060; // 0x5cc PushI
	var_567_int = -1; // 0x5cd PushI
	var_568_int = 5563; // 0x5ce PushI
	AddReply(var_566_int, var_567_int, var_568_int); // 0x5cf TObjFunc
	var_569_int = 5061; // 0x5d1 PushI
	var_570_int = -1; // 0x5d2 PushI
	var_571_int = 5564; // 0x5d3 PushI
	AddReply(var_569_int, var_570_int, var_571_int); // 0x5d4 TObjFunc
	return 0; // 0x5d6 Return
	
Label_1495:
	var_3_string = 1; // 0x5d7 TMovB
	var_572_bool = 0; // 0x5d8 PushV
	func_2702(var_572_bool); // 0x5d9 Call
	if(var_572_bool == 0) goto Label_1503; // 0x5db JumpB
	lshStopAnimation(); // 0x5dc Func
	goto Label_1505; // 0x5de Jump
	
Label_1505:
	return 0; // 0x5e1 Return
	
Label_1503:
	StopAnimation(); // 0x5df Func
	
Label_1507:
	return 0; // 0x5e3 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool)
{
	var_27_int = 1; // 0x66e PushI
	if(var_27_int == 0) goto Label_1778; // 0x66f JumpB
	func_2601(); // 0x671 Call
	var_29_int = 10415; // 0x673 PushI
	var_30_bool = var_25_string == var_29_int; // 0x674 Eq
	if(var_30_bool == 0) goto Label_1674; // 0x675 JumpB
	var_31_string = ""; // 0x676 PushV
	var_31_string = "Neutral"; // 0x677 MovS
	func_1629(var_26_bool, var_31_string); // 0x678 Call
	var_46_int = 9473; // 0x67a PushI
	SetMessage(var_46_int); // 0x67b TObjFunc
	ClearReplies(); // 0x67d TObjFunc
	var_47_int = 9474; // 0x67f PushI
	var_48_int = 10417; // 0x680 PushI
	var_49_int = 10416; // 0x681 PushI
	AddReply(var_47_int, var_48_int, var_49_int); // 0x682 TObjFunc
	var_50_int = 9487; // 0x684 PushI
	var_51_int = -1; // 0x685 PushI
	var_52_int = 10429; // 0x686 PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0x687 TObjFunc
	return 0; // 0x689 Return
	
Label_1674:
	var_53_int = 10417; // 0x68a PushI
	var_54_bool = var_25_string == var_53_int; // 0x68b Eq
	if(var_54_bool == 0) goto Label_1697; // 0x68c JumpB
	var_55_string = ""; // 0x68d PushV
	var_55_string = "Neutral"; // 0x68e MovS
	func_1629(var_26_bool, var_55_string); // 0x68f Call
	var_56_int = 9475; // 0x691 PushI
	SetMessage(var_56_int); // 0x692 TObjFunc
	ClearReplies(); // 0x694 TObjFunc
	var_57_int = 9476; // 0x696 PushI
	var_58_int = 10419; // 0x697 PushI
	var_59_int = 10418; // 0x698 PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0x699 TObjFunc
	var_60_int = 9481; // 0x69b PushI
	var_61_int = 10424; // 0x69c PushI
	var_62_int = 10423; // 0x69d PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0x69e TObjFunc
	return 0; // 0x6a0 Return
	
Label_1697:
	var_63_int = 10424; // 0x6a1 PushI
	var_64_bool = var_25_string == var_63_int; // 0x6a2 Eq
	if(var_64_bool == 0) goto Label_1715; // 0x6a3 JumpB
	var_65_string = ""; // 0x6a4 PushV
	var_65_string = "Neutral"; // 0x6a5 MovS
	func_1629(var_26_bool, var_65_string); // 0x6a6 Call
	var_66_int = 9482; // 0x6a8 PushI
	SetMessage(var_66_int); // 0x6a9 TObjFunc
	ClearReplies(); // 0x6ab TObjFunc
	var_67_int = 9483; // 0x6ad PushI
	var_68_int = 10426; // 0x6ae PushI
	var_69_int = 10425; // 0x6af PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0x6b0 TObjFunc
	return 0; // 0x6b2 Return
	
Label_1715:
	var_70_int = 10426; // 0x6b3 PushI
	var_71_bool = var_25_string == var_70_int; // 0x6b4 Eq
	if(var_71_bool == 0) goto Label_1738; // 0x6b5 JumpB
	var_72_string = ""; // 0x6b6 PushV
	var_72_string = "Neutral"; // 0x6b7 MovS
	func_1629(var_26_bool, var_72_string); // 0x6b8 Call
	var_73_int = 9484; // 0x6ba PushI
	SetMessage(var_73_int); // 0x6bb TObjFunc
	ClearReplies(); // 0x6bd TObjFunc
	var_74_int = 9485; // 0x6bf PushI
	var_75_int = -1; // 0x6c0 PushI
	var_76_int = 10427; // 0x6c1 PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0x6c2 TObjFunc
	var_77_int = 9486; // 0x6c4 PushI
	var_78_int = -1; // 0x6c5 PushI
	var_79_int = 10428; // 0x6c6 PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0x6c7 TObjFunc
	return 0; // 0x6c9 Return
	
Label_1738:
	var_80_int = 10419; // 0x6ca PushI
	var_81_bool = var_25_string == var_80_int; // 0x6cb Eq
	if(var_81_bool == 0) goto Label_1766; // 0x6cc JumpB
	var_82_string = ""; // 0x6cd PushV
	var_82_string = "Neutral"; // 0x6ce MovS
	func_1629(var_26_bool, var_82_string); // 0x6cf Call
	var_83_int = 9477; // 0x6d1 PushI
	SetMessage(var_83_int); // 0x6d2 TObjFunc
	ClearReplies(); // 0x6d4 TObjFunc
	var_84_int = 9478; // 0x6d6 PushI
	var_85_int = -1; // 0x6d7 PushI
	var_86_int = 10420; // 0x6d8 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x6d9 TObjFunc
	var_87_int = 9479; // 0x6db PushI
	var_88_int = -1; // 0x6dc PushI
	var_89_int = 10421; // 0x6dd PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x6de TObjFunc
	var_90_int = 9480; // 0x6e0 PushI
	var_91_int = -1; // 0x6e1 PushI
	var_92_int = 10422; // 0x6e2 PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x6e3 TObjFunc
	return 0; // 0x6e5 Return
	
Label_1766:
	var_3_string = 1; // 0x6e6 TMovB
	var_93_bool = 0; // 0x6e7 PushV
	func_2702(var_93_bool); // 0x6e8 Call
	if(var_93_bool == 0) goto Label_1774; // 0x6ea JumpB
	lshStopAnimation(); // 0x6eb Func
	goto Label_1776; // 0x6ed Jump
	
Label_1776:
	return 0; // 0x6f0 Return
	
Label_1774:
	StopAnimation(); // 0x6ee Func
	
Label_1778:
	return 0; // 0x6f2 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool)
{
	var_27_int = 1; // 0x796 PushI
	if(var_27_int == 0) goto Label_2084; // 0x797 JumpB
	func_2601(); // 0x799 Call
	var_29_int = 10976; // 0x79b PushI
	var_30_bool = var_26_bool == var_29_int; // 0x79c Eq
	if(var_30_bool == 0) goto Label_1960; // 0x79d JumpB
	var_31_object = Obj(); var_32_object = Obj(); // 0x79e PushV
	var_31_object = var_1_object; // 0x79f MovT
	var_32_object = var_0_object; // 0x7a0 MovT
	func_2789(var_32_object); // 0x7a1 Call
	var_50_object = Obj(); var_51_object = Obj(); // 0x7a3 PushV
	var_50_object = var_1_object; // 0x7a4 MovT
	var_51_object = var_0_object; // 0x7a5 MovT
	func_2759(); // 0x7a6 Call
	
Label_1960:
	var_54_int = 10968; // 0x7a8 PushI
	var_55_bool = var_25_string == var_54_int; // 0x7a9 Eq
	if(var_55_bool == 0) goto Label_2008; // 0x7aa JumpB
	var_56_bool = 0; var_57_object = Obj(); // 0x7ab PushV
	var_57_object = var_1_object; // 0x7ac MovT
	func_3049(var_57_object); // 0x7ad Call
	if(var_56_bool == 0) goto Label_1993; // 0x7af JumpB
	var_64_object = Obj(); var_65_object = Obj(); // 0x7b0 PushV
	var_64_object = var_1_object; // 0x7b1 MovT
	var_65_object = var_0_object; // 0x7b2 MovT
	func_2857(); // 0x7b3 Call
	var_68_string = ""; // 0x7b5 PushV
	var_68_string = "Neutral"; // 0x7b6 MovS
	func_1925(var_26_bool, var_68_string); // 0x7b7 Call
	var_83_int = 9951; // 0x7b9 PushI
	SetMessage(var_83_int); // 0x7ba TObjFunc
	ClearReplies(); // 0x7bc TObjFunc
	var_84_int = 9952; // 0x7be PushI
	var_85_int = 10970; // 0x7bf PushI
	var_86_int = 10969; // 0x7c0 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x7c1 TObjFunc
	var_87_int = 9961; // 0x7c3 PushI
	var_88_int = 10970; // 0x7c4 PushI
	var_89_int = 10978; // 0x7c5 PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x7c6 TObjFunc
	return 0; // 0x7c8 Return
	
Label_1993:
	var_90_string = ""; // 0x7c9 PushV
	var_90_string = "Neutral"; // 0x7ca MovS
	func_1925(var_26_bool, var_90_string); // 0x7cb Call
	var_91_int = 15314; // 0x7cd PushI
	SetMessage(var_91_int); // 0x7ce TObjFunc
	ClearReplies(); // 0x7d0 TObjFunc
	var_92_int = 15315; // 0x7d2 PushI
	var_93_int = -1; // 0x7d3 PushI
	var_94_int = 16553; // 0x7d4 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x7d5 TObjFunc
	return 0; // 0x7d7 Return
	
Label_2008:
	var_95_int = 10970; // 0x7d8 PushI
	var_96_bool = var_25_string == var_95_int; // 0x7d9 Eq
	if(var_96_bool == 0) goto Label_2031; // 0x7da JumpB
	var_97_string = ""; // 0x7db PushV
	var_97_string = "Neutral"; // 0x7dc MovS
	func_1925(var_26_bool, var_97_string); // 0x7dd Call
	var_98_int = 9953; // 0x7df PushI
	SetMessage(var_98_int); // 0x7e0 TObjFunc
	ClearReplies(); // 0x7e2 TObjFunc
	var_99_int = 9954; // 0x7e4 PushI
	var_100_int = -1; // 0x7e5 PushI
	var_101_int = 10971; // 0x7e6 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x7e7 TObjFunc
	var_102_int = 9955; // 0x7e9 PushI
	var_103_int = 10973; // 0x7ea PushI
	var_104_int = 10972; // 0x7eb PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x7ec TObjFunc
	return 0; // 0x7ee Return
	
Label_2031:
	var_105_int = 10973; // 0x7ef PushI
	var_106_bool = var_25_string == var_105_int; // 0x7f0 Eq
	if(var_106_bool == 0) goto Label_2049; // 0x7f1 JumpB
	var_107_string = ""; // 0x7f2 PushV
	var_107_string = "Neutral"; // 0x7f3 MovS
	func_1925(var_26_bool, var_107_string); // 0x7f4 Call
	var_108_int = 9956; // 0x7f6 PushI
	SetMessage(var_108_int); // 0x7f7 TObjFunc
	ClearReplies(); // 0x7f9 TObjFunc
	var_109_int = 9957; // 0x7fb PushI
	var_110_int = 10975; // 0x7fc PushI
	var_111_int = 10974; // 0x7fd PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x7fe TObjFunc
	return 0; // 0x800 Return
	
Label_2049:
	var_112_int = 10975; // 0x801 PushI
	var_113_bool = var_25_string == var_112_int; // 0x802 Eq
	if(var_113_bool == 0) goto Label_2072; // 0x803 JumpB
	var_114_string = ""; // 0x804 PushV
	var_114_string = "Neutral"; // 0x805 MovS
	func_1925(var_26_bool, var_114_string); // 0x806 Call
	var_115_int = 9958; // 0x808 PushI
	SetMessage(var_115_int); // 0x809 TObjFunc
	ClearReplies(); // 0x80b TObjFunc
	var_116_int = 9959; // 0x80d PushI
	var_117_int = -1; // 0x80e PushI
	var_118_int = 10976; // 0x80f PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x810 TObjFunc
	var_119_int = 9960; // 0x812 PushI
	var_120_int = -1; // 0x813 PushI
	var_121_int = 10977; // 0x814 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x815 TObjFunc
	return 0; // 0x817 Return
	
Label_2072:
	var_3_string = 1; // 0x818 TMovB
	var_122_bool = 0; // 0x819 PushV
	func_2702(var_122_bool); // 0x81a Call
	if(var_122_bool == 0) goto Label_2080; // 0x81c JumpB
	lshStopAnimation(); // 0x81d Func
	goto Label_2082; // 0x81f Jump
	
Label_2082:
	return 0; // 0x822 Return
	
Label_2080:
	StopAnimation(); // 0x820 Func
	
Label_2084:
	return 0; // 0x824 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int)
{
	var_27_int = 1; // 0x8bd PushI
	if(var_27_int == 0) goto Label_2505; // 0x8be JumpB
	func_2601(); // 0x8c0 Call
	var_29_int = 14233; // 0x8c2 PushI
	var_30_bool = var_26_int == var_29_int; // 0x8c3 Eq
	if(var_30_bool == 0) goto Label_2255; // 0x8c4 JumpB
	var_31_object = Obj(); var_32_object = Obj(); // 0x8c5 PushV
	var_31_object = var_1_object; // 0x8c6 MovT
	var_32_object = var_0_object; // 0x8c7 MovT
	func_2800(); // 0x8c8 Call
	var_35_object = Obj(); var_36_object = Obj(); // 0x8ca PushV
	var_35_object = var_1_object; // 0x8cb MovT
	var_36_object = var_0_object; // 0x8cc MovT
	func_2834(); // 0x8cd Call
	
Label_2255:
	var_45_int = 14234; // 0x8cf PushI
	var_46_bool = var_26_int == var_45_int; // 0x8d0 Eq
	if(var_46_bool == 0) goto Label_2268; // 0x8d1 JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0x8d2 PushV
	var_47_object = var_1_object; // 0x8d3 MovT
	var_48_object = var_0_object; // 0x8d4 MovT
	func_2800(); // 0x8d5 Call
	var_49_object = Obj(); var_50_object = Obj(); // 0x8d7 PushV
	var_49_object = var_1_object; // 0x8d8 MovT
	var_50_object = var_0_object; // 0x8d9 MovT
	func_2834(); // 0x8da Call
	
Label_2268:
	var_51_int = 14027; // 0x8dc PushI
	var_52_bool = var_26_int == var_51_int; // 0x8dd Eq
	if(var_52_bool == 0) goto Label_2281; // 0x8de JumpB
	var_53_object = Obj(); var_54_object = Obj(); // 0x8df PushV
	var_53_object = var_1_object; // 0x8e0 MovT
	var_54_object = var_0_object; // 0x8e1 MovT
	func_2800(); // 0x8e2 Call
	var_55_object = Obj(); var_56_object = Obj(); // 0x8e4 PushV
	var_55_object = var_1_object; // 0x8e5 MovT
	var_56_object = var_0_object; // 0x8e6 MovT
	func_2806(); // 0x8e7 Call
	
Label_2281:
	var_103_int = 14026; // 0x8e9 PushI
	var_104_bool = var_26_int == var_103_int; // 0x8ea Eq
	if(var_104_bool == 0) goto Label_2294; // 0x8eb JumpB
	var_105_object = Obj(); var_106_object = Obj(); // 0x8ec PushV
	var_105_object = var_1_object; // 0x8ed MovT
	var_106_object = var_0_object; // 0x8ee MovT
	func_2800(); // 0x8ef Call
	var_107_object = Obj(); var_108_object = Obj(); // 0x8f1 PushV
	var_107_object = var_1_object; // 0x8f2 MovT
	var_108_object = var_0_object; // 0x8f3 MovT
	func_2806(); // 0x8f4 Call
	
Label_2294:
	var_109_int = 14015; // 0x8f6 PushI
	var_110_bool = var_25_int == var_109_int; // 0x8f7 Eq
	if(var_110_bool == 0) goto Label_2331; // 0x8f8 JumpB
	var_111_string = ""; // 0x8f9 PushV
	var_111_string = "Neutral"; // 0x8fa MovS
	func_2220(var_26_int, var_111_string); // 0x8fb Call
	var_126_int = 12815; // 0x8fd PushI
	SetMessage(var_126_int); // 0x8fe TObjFunc
	ClearReplies(); // 0x900 TObjFunc
	var_127_bool = 0; // 0x902 PushV
	var_127_bool = 0; // 0x903 MovB
	var_128_bool = 0; var_129_object = Obj(); // 0x904 PushV
	var_129_object = var_1_object; // 0x905 MovT
	func_2989(var_129_object); // 0x906 Call
	if(var_128_bool == 0) goto Label_2319; // 0x908 JumpB
	var_136_bool = 0; var_137_object = Obj(); // 0x909 PushV
	var_137_object = var_1_object; // 0x90a MovT
	func_3001(var_137_object); // 0x90b Call
	if(var_136_bool == 0) goto Label_2319; // 0x90d JumpB
	var_127_bool = 1; // 0x90e MovB
	
Label_2319:
	if(var_127_bool == 0) goto Label_2325; // 0x90f JumpB
	var_142_int = 12816; // 0x910 PushI
	var_143_int = 14017; // 0x911 PushI
	var_144_int = 14016; // 0x912 PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x913 TObjFunc
	
Label_2325:
	var_145_int = 12828; // 0x915 PushI
	var_146_int = -1; // 0x916 PushI
	var_147_int = 14028; // 0x917 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x918 TObjFunc
	return 0; // 0x91a Return
	
Label_2331:
	var_148_int = 14017; // 0x91b PushI
	var_149_bool = var_25_int == var_148_int; // 0x91c Eq
	if(var_149_bool == 0) goto Label_2375; // 0x91d JumpB
	var_150_bool = 0; var_151_object = Obj(); // 0x91e PushV
	var_151_object = var_1_object; // 0x91f MovT
	func_2977(var_151_object); // 0x920 Call
	var_156_bool = var_150_bool == 0; // 0x922 Not
	if(var_156_bool == 0) goto Label_2355; // 0x923 JumpB
	var_157_string = ""; // 0x924 PushV
	var_157_string = "Neutral"; // 0x925 MovS
	func_2220(var_26_int, var_157_string); // 0x926 Call
	var_158_int = 12817; // 0x928 PushI
	SetMessage(var_158_int); // 0x929 TObjFunc
	ClearReplies(); // 0x92b TObjFunc
	var_159_int = 13022; // 0x92d PushI
	var_160_int = 14230; // 0x92e PushI
	var_161_int = 14229; // 0x92f PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x930 TObjFunc
	return 0; // 0x932 Return
	
Label_2355:
	var_162_bool = 0; var_163_object = Obj(); // 0x933 PushV
	var_163_object = var_1_object; // 0x934 MovT
	func_2977(var_163_object); // 0x935 Call
	if(var_162_bool == 0) goto Label_2375; // 0x937 JumpB
	var_164_string = ""; // 0x938 PushV
	var_164_string = "Neutral"; // 0x939 MovS
	func_2220(var_26_int, var_164_string); // 0x93a Call
	var_165_int = 13021; // 0x93c PushI
	SetMessage(var_165_int); // 0x93d TObjFunc
	ClearReplies(); // 0x93f TObjFunc
	var_166_int = 12818; // 0x941 PushI
	var_167_int = 14019; // 0x942 PushI
	var_168_int = 14018; // 0x943 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x944 TObjFunc
	return 0; // 0x946 Return
	
Label_2375:
	var_169_int = 14019; // 0x947 PushI
	var_170_bool = var_25_int == var_169_int; // 0x948 Eq
	if(var_170_bool == 0) goto Label_2393; // 0x949 JumpB
	var_171_string = ""; // 0x94a PushV
	var_171_string = "Neutral"; // 0x94b MovS
	func_2220(var_26_int, var_171_string); // 0x94c Call
	var_172_int = 12819; // 0x94e PushI
	SetMessage(var_172_int); // 0x94f TObjFunc
	ClearReplies(); // 0x951 TObjFunc
	var_173_int = 12820; // 0x953 PushI
	var_174_int = 14021; // 0x954 PushI
	var_175_int = 14020; // 0x955 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x956 TObjFunc
	return 0; // 0x958 Return
	
Label_2393:
	var_176_int = 14021; // 0x959 PushI
	var_177_bool = var_25_int == var_176_int; // 0x95a Eq
	if(var_177_bool == 0) goto Label_2411; // 0x95b JumpB
	var_178_string = ""; // 0x95c PushV
	var_178_string = "Neutral"; // 0x95d MovS
	func_2220(var_26_int, var_178_string); // 0x95e Call
	var_179_int = 12821; // 0x960 PushI
	SetMessage(var_179_int); // 0x961 TObjFunc
	ClearReplies(); // 0x963 TObjFunc
	var_180_int = 12822; // 0x965 PushI
	var_181_int = 14023; // 0x966 PushI
	var_182_int = 14022; // 0x967 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x968 TObjFunc
	return 0; // 0x96a Return
	
Label_2411:
	var_183_int = 14023; // 0x96b PushI
	var_184_bool = var_25_int == var_183_int; // 0x96c Eq
	if(var_184_bool == 0) goto Label_2434; // 0x96d JumpB
	var_185_string = ""; // 0x96e PushV
	var_185_string = "Neutral"; // 0x96f MovS
	func_2220(var_26_int, var_185_string); // 0x970 Call
	var_186_int = 12823; // 0x972 PushI
	SetMessage(var_186_int); // 0x973 TObjFunc
	ClearReplies(); // 0x975 TObjFunc
	var_187_int = 12824; // 0x977 PushI
	var_188_int = 14025; // 0x978 PushI
	var_189_int = 14024; // 0x979 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x97a TObjFunc
	var_190_int = 12826; // 0x97c PushI
	var_191_int = -1; // 0x97d PushI
	var_192_int = 14026; // 0x97e PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x97f TObjFunc
	return 0; // 0x981 Return
	
Label_2434:
	var_193_int = 14025; // 0x982 PushI
	var_194_bool = var_25_int == var_193_int; // 0x983 Eq
	if(var_194_bool == 0) goto Label_2452; // 0x984 JumpB
	var_195_string = ""; // 0x985 PushV
	var_195_string = "Neutral"; // 0x986 MovS
	func_2220(var_26_int, var_195_string); // 0x987 Call
	var_196_int = 12825; // 0x989 PushI
	SetMessage(var_196_int); // 0x98a TObjFunc
	ClearReplies(); // 0x98c TObjFunc
	var_197_int = 12827; // 0x98e PushI
	var_198_int = -1; // 0x98f PushI
	var_199_int = 14027; // 0x990 PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x991 TObjFunc
	return 0; // 0x993 Return
	
Label_2452:
	var_200_int = 14230; // 0x994 PushI
	var_201_bool = var_25_int == var_200_int; // 0x995 Eq
	if(var_201_bool == 0) goto Label_2475; // 0x996 JumpB
	var_202_string = ""; // 0x997 PushV
	var_202_string = "Neutral"; // 0x998 MovS
	func_2220(var_26_int, var_202_string); // 0x999 Call
	var_203_int = 13023; // 0x99b PushI
	SetMessage(var_203_int); // 0x99c TObjFunc
	ClearReplies(); // 0x99e TObjFunc
	var_204_int = 13024; // 0x9a0 PushI
	var_205_int = 14232; // 0x9a1 PushI
	var_206_int = 14231; // 0x9a2 PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x9a3 TObjFunc
	var_207_int = 13027; // 0x9a5 PushI
	var_208_int = -1; // 0x9a6 PushI
	var_209_int = 14234; // 0x9a7 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x9a8 TObjFunc
	return 0; // 0x9aa Return
	
Label_2475:
	var_210_int = 14232; // 0x9ab PushI
	var_211_bool = var_25_int == var_210_int; // 0x9ac Eq
	if(var_211_bool == 0) goto Label_2493; // 0x9ad JumpB
	var_212_string = ""; // 0x9ae PushV
	var_212_string = "Neutral"; // 0x9af MovS
	func_2220(var_26_int, var_212_string); // 0x9b0 Call
	var_213_int = 13025; // 0x9b2 PushI
	SetMessage(var_213_int); // 0x9b3 TObjFunc
	ClearReplies(); // 0x9b5 TObjFunc
	var_214_int = 13026; // 0x9b7 PushI
	var_215_int = -1; // 0x9b8 PushI
	var_216_int = 14233; // 0x9b9 PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x9ba TObjFunc
	return 0; // 0x9bc Return
	
Label_2493:
	var_3_string = 1; // 0x9bd TMovB
	var_217_bool = 0; // 0x9be PushV
	func_2702(var_217_bool); // 0x9bf Call
	if(var_217_bool == 0) goto Label_2501; // 0x9c1 JumpB
	lshStopAnimation(); // 0x9c2 Func
	goto Label_2503; // 0x9c4 Jump
	
Label_2503:
	return 0; // 0x9c7 Return
	
Label_2501:
	StopAnimation(); // 0x9c5 Func
	
Label_2505:
	return 0; // 0x9c9 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool)
{
	func_3287(); // 0x7 Call
	var_26_bool = 0; // 0x9 PushV
	func_2518(var_26_bool); // 0xa Call
	var_29_bool = var_26_bool == 0; // 0xc Not
	if(var_29_bool == 0) goto Label_19; // 0xd JumpB
	TaskCall(0); // 0xf TaskCall
	func_0(); // 0x10 Call
	TaskReturn(); // 0x11 TaskReturn
	
Label_19:
	var_30_string = ""; // 0x13 PushV
	var_30_string = "Neutral"; // 0x14 MovS
	func_2583(var_30_string); // 0x15 Call
	lshWaitForAnimEnd(); // 0x17 Func
	goto Label_19; // 0x19 Jump
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_3073(var_195_bool)
{
	var_197_int = 0; var_198_string = ""; // 0xc02 PushV
	var_198_string = "ood1Laska1"; // 0xc03 MovS
	func_2618(var_197_int, var_198_string); // 0xc04 Call
	var_201_int = 0; // 0xc06 PushI
	var_202_bool = var_197_int == var_201_int; // 0xc07 Eq
	if(var_202_bool == 0) goto Label_3083; // 0xc08 JumpB
	var_195_bool = 1; // 0xc09 MovB
	return 0; // 0xc0a Return
	
Label_3083:
	var_195_bool = 0; // 0xc0b MovB
	return 0; // 0xc0c Return
}


func_3085(var_251_bool)
{
	var_253_int = 0; var_254_string = ""; // 0xc0e PushV
	var_254_string = "ood1Laska2"; // 0xc0f MovS
	func_2618(var_253_int, var_254_string); // 0xc10 Call
	var_255_int = 0; // 0xc12 PushI
	var_256_bool = var_253_int == var_255_int; // 0xc13 Eq
	if(var_256_bool == 0) goto Label_3095; // 0xc14 JumpB
	var_251_bool = 1; // 0xc15 MovB
	return 0; // 0xc16 Return
	
Label_3095:
	var_251_bool = 0; // 0xc17 MovB
	return 0; // 0xc18 Return
}


func_2834()
{
	var_37_string = "d6q01"; // 0xb13 PushS
	var_38_int = 4; // 0xb14 PushI
	SetVariable(var_37_string, var_38_int); // 0xb15 Func
	var_39_bool = 0; var_40_string = ""; var_41_string = ""; // 0xb17 PushV
	var_40_string = "quest_d6_01"; // 0xb18 MovS
	var_41_string = "eva_klara"; // 0xb19 MovS
	func_2649(var_39_bool, var_40_string, var_41_string); // 0xb1a Call
	return 0; // 0xb1c Return
}


func_2579()
{
	CameraSwitchToNormal(); // 0xa14 Func
	return 0; // 0xa16 Return
}


func_2583(var_30_string)
{
	var_31_float = 0; var_32_float = 0; var_33_float = 0; var_34_float = 0; // 0xa17 PushV
	var_35_string = "playing "; // 0xa18 PushS
	var_36_int = var_35_string + var_30_string; // 0xa19 Add
	Trace(var_36_int); // 0xa1a Func
	lshGetAnimTimes(var_30_string, var_33_float, var_34_float); // 0xa1c Func
	lshPlayAnimation(var_33_float, var_34_float); // 0xa1e Func
	var_37_string = "start: "; // 0xa20 PushS
	var_38_int = var_37_string + var_33_float; // 0xa21 Add
	Trace(var_38_int); // 0xa22 Func
	var_39_string = "end: "; // 0xa24 PushS
	var_40_int = var_39_string + var_34_float; // 0xa25 Add
	Trace(var_40_int); // 0xa26 Func
	return 4; // 0xa28 Return
}


func_3097(var_287_bool)
{
	var_289_int = 0; var_290_string = ""; // 0xc1a PushV
	var_290_string = "ood1Laska3"; // 0xc1b MovS
	func_2618(var_289_int, var_290_string); // 0xc1c Call
	var_291_int = 0; // 0xc1e PushI
	var_292_bool = var_289_int == var_291_int; // 0xc1f Eq
	if(var_292_bool == 0) goto Label_3107; // 0xc20 JumpB
	var_287_bool = 1; // 0xc21 MovB
	return 0; // 0xc22 Return
	
Label_3107:
	var_287_bool = 0; // 0xc23 MovB
	return 0; // 0xc24 Return
}


func_2845()
{
	var_33_string = "KnowLaska"; // 0xb1e PushS
	var_34_int = 1; // 0xb1f PushI
	SetVariable(var_33_string, var_34_int); // 0xb20 Func
	return 0; // 0xb22 Return
}


func_1571(var_0_object, var_1_object, var_2_object, var_3_object, var_368_object, var_369_object)
{
	var_0_object = var_369_object; // 0x624 TMov
	var_1_object = var_368_object; // 0x625 TMov
	var_3_object = 0; // 0x626 TMovB
	var_374_int = 1; // 0x627 PushI
	if(var_374_int == 0) goto Label_1599; // 0x628 JumpB
	var_375_string = ""; // 0x629 PushV
	var_375_string = "Neutral"; // 0x62a MovS
	func_1629(var_369_object, var_375_string); // 0x62b Call
	var_380_int = 9473; // 0x62d PushI
	SetMessage(var_380_int); // 0x62e TObjFunc
	ClearReplies(); // 0x630 TObjFunc
	var_381_int = 9474; // 0x632 PushI
	var_382_int = 10417; // 0x633 PushI
	var_383_int = 10416; // 0x634 PushI
	AddReply(var_381_int, var_382_int, var_383_int); // 0x635 TObjFunc
	var_384_int = 9487; // 0x637 PushI
	var_385_int = -1; // 0x638 PushI
	var_386_int = 10429; // 0x639 PushI
	AddReply(var_384_int, var_385_int, var_386_int); // 0x63a TObjFunc
	goto Label_1599; // 0x63c Jump
	
Label_1599:
	var_387_bool = 0; // 0x63f PushV
	func_2702(var_387_bool); // 0x640 Call
	if(var_387_bool == 0) goto Label_1614; // 0x642 JumpB
	
Label_1603:
	lshWaitForAnimEnd(); // 0x643 Func
	var_388_object = var_3_object; // 0x645 PushT
	if(var_388_object == 0) goto Label_1608; // 0x646 JumpB
	goto Label_1613; // 0x647 Jump
	
Label_1613:
	goto Label_1628; // 0x64d Jump
	
Label_1628:
	return 0; // 0x65c Return
	
Label_1608:
	var_389_string = ""; // 0x648 PushV
	var_389_string = var_2_object; // 0x649 MovT
	func_2583(var_389_string); // 0x64a Call
	goto Label_1603; // 0x64c Jump
	
Label_1614:
	var_390_string = "all"; // 0x64e PushS
	var_391_string = "idle"; // 0x64f PushS
	PlayAnimation(var_390_string, var_391_string); // 0x650 Func
	
Label_1618:
	WaitForAnimEnd(); // 0x652 Func
	var_392_object = var_3_object; // 0x654 PushT
	if(var_392_object == 0) goto Label_1623; // 0x655 JumpB
	goto Label_1628; // 0x656 Jump
	
Label_1623:
	var_393_string = "all"; // 0x657 PushS
	var_394_string = "idle"; // 0x658 PushS
	PlayAnimation(var_393_string, var_394_string); // 0x659 Func
	goto Label_1618; // 0x65b Jump
}


func_2851()
{
	var_33_string = "ood1Laska1"; // 0xb24 PushS
	var_34_int = 1; // 0xb25 PushI
	SetVariable(var_33_string, var_34_int); // 0xb26 Func
	return 0; // 0xb28 Return
}


func_3109(var_296_bool)
{
	var_298_int = 0; // 0xc26 PushV
	func_2675(var_298_int); // 0xc27 Call
	var_299_int = 18; // 0xc29 PushI
	var_300_bool = var_298_int >= var_299_int; // 0xc2a GE
	if(var_300_bool == 0) goto Label_3118; // 0xc2b JumpB
	var_296_bool = 1; // 0xc2c MovB
	return 0; // 0xc2d Return
	
Label_3118:
	var_296_bool = 0; // 0xc2e MovB
	return 0; // 0xc2f Return
}


func_2085(var_0_object, var_463_int, var_464_object)
{
	var_466_object = Obj(); var_467_bool = 0; var_468_int = 0; var_469_bool = 0; var_470_object = Obj(); var_471_bool = 0; var_472_int = 0; var_473_bool = 0; // 0x825 PushV
	var_0_object = var_464_object; // 0x826 TMov
	var_474_bool = 0; var_475_object = Obj(); // 0x827 PushV
	var_475_object = var_464_object; // 0x828 Mov
	func_2523(var_475_object); // 0x829 Call
	var_476_bool = var_474_bool == 0; // 0x82b Not
	if(var_476_bool == 0) goto Label_2095; // 0x82c JumpB
	var_463_int = -2; // 0x82d MovI
	return 8; // 0x82e Return
	
Label_2095:
	CreateDialog(var_470_object); // 0x82f Func
	var_477_int = 0; // 0x831 PushV
	func_2698(var_477_int); // 0x832 Call
	SetNPCName(var_477_int); // 0x834 ObjFunc
	var_478_string = ""; // 0x836 PushV
	func_2700(var_478_string); // 0x837 Call
	SetPhoto(var_478_string); // 0x839 ObjFunc
	var_479_int = 0; // 0x83b PushV
	func_3238(var_479_int); // 0x83c Call
	SetPlayerName(var_479_int); // 0x83e ObjFunc
	var_472_int = -1; // 0x840 MovI
	IsOverrideActive(var_471_bool); // 0x841 Func
	var_480_bool = var_471_bool; // 0x843 Push
	if(var_480_bool == 0) goto Label_2119; // 0x844 JumpB
	var_463_int = -2; // 0x845 MovI
	return 8; // 0x846 Return
	
Label_2119:
	DoDialog(var_470_object); // 0x847 Func
	var_481_object = Obj(); var_482_object = Obj(); // 0x849 PushV
	var_481_object = var_464_object; // 0x84a Mov
	var_482_object = var_470_object; // 0x84b Mov
	TaskCall(11); // 0x84c TaskCall
	func_2148(var_483_object, var_484_object, var_485_string, var_486_bool, var_481_object, var_482_object); // 0x84d Call
	TaskReturn(); // 0x84e TaskReturn
	IsDialogEnd(var_473_bool); // 0x850 ObjFunc
	
Label_2130:
	var_521_bool = var_473_bool == 0; // 0x852 Not
	if(var_521_bool == 0) goto Label_2137; // 0x853 JumpB
	sync(); // 0x854 Func
	IsDialogEnd(var_473_bool); // 0x856 ObjFunc
	goto Label_2130; // 0x858 Jump
	
Label_2137:
	var_522_object = Obj(); // 0x859 PushV
	var_522_object = var_464_object; // 0x85a Mov
	func_2579(); // 0x85b Call
	StopDialog(var_470_object); // 0x85d Func
	GetReturnValue(var_472_int); // 0x85f ObjFunc
	var_463_int = var_472_int; // 0x861 Mov
	return 8; // 0x862 Return
}


func_2601()
{
	var_28_bool = 0; // 0xa29 PushV
	func_2702(var_28_bool); // 0xa2a Call
	if(var_28_bool == 0) goto Label_2607; // 0xa2c JumpB
	lshStopSpeech(); // 0xa2d Func
	
Label_2607:
	return 0; // 0xa2f Return
}


func_2857()
{
	var_66_string = "ood3Laska1"; // 0xb2a PushS
	var_67_int = 1; // 0xb2b PushI
	SetVariable(var_66_string, var_67_int); // 0xb2c Func
	return 0; // 0xb2e Return
}


func_302(var_0_object, var_144_int, var_145_object)
{
	var_147_object = Obj(); var_148_bool = 0; var_149_int = 0; var_150_bool = 0; var_151_object = Obj(); var_152_bool = 0; var_153_int = 0; var_154_bool = 0; // 0x12e PushV
	var_0_object = var_145_object; // 0x12f TMov
	var_155_bool = 0; var_156_object = Obj(); // 0x130 PushV
	var_156_object = var_145_object; // 0x131 Mov
	func_2523(var_156_object); // 0x132 Call
	var_157_bool = var_155_bool == 0; // 0x134 Not
	if(var_157_bool == 0) goto Label_312; // 0x135 JumpB
	var_144_int = -2; // 0x136 MovI
	return 8; // 0x137 Return
	
Label_312:
	CreateDialog(var_151_object); // 0x138 Func
	var_158_int = 0; // 0x13a PushV
	func_2698(var_158_int); // 0x13b Call
	SetNPCName(var_158_int); // 0x13d ObjFunc
	var_159_string = ""; // 0x13f PushV
	func_2700(var_159_string); // 0x140 Call
	SetPhoto(var_159_string); // 0x142 ObjFunc
	var_160_int = 0; // 0x144 PushV
	func_3238(var_160_int); // 0x145 Call
	SetPlayerName(var_160_int); // 0x147 ObjFunc
	var_153_int = -1; // 0x149 MovI
	IsOverrideActive(var_152_bool); // 0x14a Func
	var_161_bool = var_152_bool; // 0x14c Push
	if(var_161_bool == 0) goto Label_336; // 0x14d JumpB
	var_144_int = -2; // 0x14e MovI
	return 8; // 0x14f Return
	
Label_336:
	DoDialog(var_151_object); // 0x150 Func
	var_162_object = Obj(); var_163_object = Obj(); // 0x152 PushV
	var_162_object = var_145_object; // 0x153 Mov
	var_163_object = var_151_object; // 0x154 Mov
	TaskCall(5); // 0x155 TaskCall
	func_365(var_164_object, var_165_object, var_166_string, var_167_bool, var_162_object, var_163_object); // 0x156 Call
	TaskReturn(); // 0x157 TaskReturn
	IsDialogEnd(var_154_bool); // 0x159 ObjFunc
	
Label_347:
	var_346_bool = var_154_bool == 0; // 0x15b Not
	if(var_346_bool == 0) goto Label_354; // 0x15c JumpB
	sync(); // 0x15d Func
	IsDialogEnd(var_154_bool); // 0x15f ObjFunc
	goto Label_347; // 0x161 Jump
	
Label_354:
	var_347_object = Obj(); // 0x162 PushV
	var_347_object = var_145_object; // 0x163 Mov
	func_2579(); // 0x164 Call
	StopDialog(var_151_object); // 0x166 Func
	GetReturnValue(var_153_int); // 0x168 ObjFunc
	var_144_int = var_153_int; // 0x16a Mov
	return 8; // 0x16b Return
}


func_2863()
{
	var_144_string = "ood1Laska2"; // 0xb30 PushS
	var_145_int = 1; // 0xb31 PushI
	SetVariable(var_144_string, var_145_int); // 0xb32 Func
	return 0; // 0xb34 Return
}


func_2608(var_65_cvector, var_66_cvector)
{
	var_68_float = 0; var_69_float = 0; // 0xa30 PushV
	var_70_int = var_66_cvector | var_66_cvector; // 0xa31 Or
	var_69_float = sqrt(var_70_int); // 0xa32 Sqrt2
	var_71_float = 0.0; // 0xa33 PushF
	var_72_bool = var_69_float < var_71_float; // 0xa34 LT
	if(var_72_bool == 0) goto Label_2616; // 0xa35 JumpB
	var_65_cvector = CVector(0.0, 0.0, 0.0); // 0xa36 MovV
	return 2; // 0xa37 Return
	
Label_2616:
	var_65_cvector = var_66_cvector / var_66_cvector; // 0xa38 Div2
	return 2; // 0xa39 Return
}


func_3120(var_238_bool)
{
	var_240_bool = 0; // 0xc31 PushV
	var_240_bool = 0; // 0xc32 MovB
	var_241_int = 0; // 0xc33 PushV
	func_2675(var_241_int); // 0xc34 Call
	var_246_int = 0; // 0xc36 PushI
	var_247_bool = var_241_int >= var_246_int; // 0xc37 GE
	if(var_247_bool == 0) goto Label_3136; // 0xc38 JumpB
	var_248_int = 0; // 0xc39 PushV
	func_2675(var_248_int); // 0xc3a Call
	var_249_int = 6; // 0xc3c PushI
	var_250_bool = var_248_int < var_249_int; // 0xc3d LT
	if(var_250_bool == 0) goto Label_3136; // 0xc3e JumpB
	var_240_bool = 1; // 0xc3f MovB
	
Label_3136:
	if(var_240_bool == 0) goto Label_3139; // 0xc40 JumpB
	var_238_bool = 1; // 0xc41 MovB
	return 0; // 0xc42 Return
	
Label_3139:
	var_238_bool = 0; // 0xc43 MovB
	return 0; // 0xc44 Return
}


func_49(var_0_object, var_29_int, var_30_object)
{
	var_32_object = Obj(); var_33_bool = 0; var_34_int = 0; var_35_bool = 0; var_36_object = Obj(); var_37_bool = 0; var_38_int = 0; var_39_bool = 0; // 0x31 PushV
	var_0_object = var_30_object; // 0x32 TMov
	var_40_bool = 0; var_41_object = Obj(); // 0x33 PushV
	var_41_object = var_30_object; // 0x34 Mov
	func_2523(var_41_object); // 0x35 Call
	var_80_bool = var_40_bool == 0; // 0x37 Not
	if(var_80_bool == 0) goto Label_59; // 0x38 JumpB
	var_29_int = -2; // 0x39 MovI
	return 8; // 0x3a Return
	
Label_59:
	CreateDialog(var_36_object); // 0x3b Func
	var_81_int = 0; // 0x3d PushV
	func_2698(var_81_int); // 0x3e Call
	SetNPCName(var_81_int); // 0x40 ObjFunc
	var_82_string = ""; // 0x42 PushV
	func_2700(var_82_string); // 0x43 Call
	SetPhoto(var_82_string); // 0x45 ObjFunc
	var_83_int = 0; // 0x47 PushV
	func_3238(var_83_int); // 0x48 Call
	SetPlayerName(var_83_int); // 0x4a ObjFunc
	var_38_int = -1; // 0x4c MovI
	IsOverrideActive(var_37_bool); // 0x4d Func
	var_91_bool = var_37_bool; // 0x4f Push
	if(var_91_bool == 0) goto Label_83; // 0x50 JumpB
	var_29_int = -2; // 0x51 MovI
	return 8; // 0x52 Return
	
Label_83:
	DoDialog(var_36_object); // 0x53 Func
	var_92_object = Obj(); var_93_object = Obj(); // 0x55 PushV
	var_92_object = var_30_object; // 0x56 Mov
	var_93_object = var_36_object; // 0x57 Mov
	TaskCall(3); // 0x58 TaskCall
	func_112(var_94_object, var_95_object, var_96_string, var_97_bool, var_92_object, var_93_object); // 0x59 Call
	TaskReturn(); // 0x5a TaskReturn
	IsDialogEnd(var_39_bool); // 0x5c ObjFunc
	
Label_94:
	var_133_bool = var_39_bool == 0; // 0x5e Not
	if(var_133_bool == 0) goto Label_101; // 0x5f JumpB
	sync(); // 0x60 Func
	IsDialogEnd(var_39_bool); // 0x62 ObjFunc
	goto Label_94; // 0x64 Jump
	
Label_101:
	var_134_object = Obj(); // 0x65 PushV
	var_134_object = var_30_object; // 0x66 Mov
	func_2579(); // 0x67 Call
	StopDialog(var_36_object); // 0x69 Func
	GetReturnValue(var_38_int); // 0x6b ObjFunc
	var_29_int = var_38_int; // 0x6d Mov
	return 8; // 0x6e Return
}


func_1842(var_0_object, var_1_object, var_2_object, var_3_object, var_417_object, var_418_object)
{
	var_0_object = var_418_object; // 0x733 TMov
	var_1_object = var_417_object; // 0x734 TMov
	var_3_object = 0; // 0x735 TMovB
	var_423_int = 1; // 0x736 PushI
	if(var_423_int == 0) goto Label_1895; // 0x737 JumpB
	var_424_bool = 0; var_425_object = Obj(); // 0x738 PushV
	var_425_object = var_1_object; // 0x739 MovT
	func_3049(var_425_object); // 0x73a Call
	if(var_424_bool == 0) goto Label_1878; // 0x73c JumpB
	var_430_object = Obj(); var_431_object = Obj(); // 0x73d PushV
	var_430_object = var_1_object; // 0x73e MovT
	var_431_object = var_0_object; // 0x73f MovT
	func_2857(); // 0x740 Call
	var_434_string = ""; // 0x742 PushV
	var_434_string = "Neutral"; // 0x743 MovS
	func_1925(var_418_object, var_434_string); // 0x744 Call
	var_439_int = 9951; // 0x746 PushI
	SetMessage(var_439_int); // 0x747 TObjFunc
	ClearReplies(); // 0x749 TObjFunc
	var_440_int = 9952; // 0x74b PushI
	var_441_int = 10970; // 0x74c PushI
	var_442_int = 10969; // 0x74d PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0x74e TObjFunc
	var_443_int = 9961; // 0x750 PushI
	var_444_int = 10970; // 0x751 PushI
	var_445_int = 10978; // 0x752 PushI
	AddReply(var_443_int, var_444_int, var_445_int); // 0x753 TObjFunc
	goto Label_1895; // 0x755 Jump
	
Label_1895:
	var_446_bool = 0; // 0x767 PushV
	func_2702(var_446_bool); // 0x768 Call
	if(var_446_bool == 0) goto Label_1910; // 0x76a JumpB
	
Label_1899:
	lshWaitForAnimEnd(); // 0x76b Func
	var_447_object = var_3_object; // 0x76d PushT
	if(var_447_object == 0) goto Label_1904; // 0x76e JumpB
	goto Label_1909; // 0x76f Jump
	
Label_1909:
	goto Label_1924; // 0x775 Jump
	
Label_1924:
	return 0; // 0x784 Return
	
Label_1904:
	var_448_string = ""; // 0x770 PushV
	var_448_string = var_2_object; // 0x771 MovT
	func_2583(var_448_string); // 0x772 Call
	goto Label_1899; // 0x774 Jump
	
Label_1910:
	var_449_string = "all"; // 0x776 PushS
	var_450_string = "idle"; // 0x777 PushS
	PlayAnimation(var_449_string, var_450_string); // 0x778 Func
	
Label_1914:
	WaitForAnimEnd(); // 0x77a Func
	var_451_object = var_3_object; // 0x77c PushT
	if(var_451_object == 0) goto Label_1919; // 0x77d JumpB
	goto Label_1924; // 0x77e Jump
	
Label_1919:
	var_452_string = "all"; // 0x77f PushS
	var_453_string = "idle"; // 0x780 PushS
	PlayAnimation(var_452_string, var_453_string); // 0x781 Func
	goto Label_1914; // 0x783 Jump
	
Label_1878:
	var_454_string = ""; // 0x756 PushV
	var_454_string = "Neutral"; // 0x757 MovS
	func_1925(var_418_object, var_454_string); // 0x758 Call
	var_455_int = 15314; // 0x75a PushI
	SetMessage(var_455_int); // 0x75b TObjFunc
	ClearReplies(); // 0x75d TObjFunc
	var_456_int = 15315; // 0x75f PushI
	var_457_int = -1; // 0x760 PushI
	var_458_int = 16553; // 0x761 PushI
	AddReply(var_456_int, var_457_int, var_458_int); // 0x762 TObjFunc
	goto Label_1895; // 0x764 Jump
}


func_2869()
{
	var_154_string = "ood1Laska3"; // 0xb36 PushS
	var_155_int = 1; // 0xb37 PushI
	SetVariable(var_154_string, var_155_int); // 0xb38 Func
	return 0; // 0xb3a Return
}


func_2618(var_130_int, var_131_string)
{
	var_132_int = 0; var_133_int = 0; // 0xa3a PushV
	GetVariable(var_131_string, var_133_int); // 0xa3b Func
	var_130_int = var_133_int; // 0xa3d Mov
	return 2; // 0xa3e Return
}


func_2875(var_257_bool)
{
	var_259_int = 0; var_260_string = ""; // 0xb3c PushV
	var_260_string = "d1q01FirstGeorgVisit"; // 0xb3d MovS
	func_2618(var_259_int, var_260_string); // 0xb3e Call
	var_261_int = 1; // 0xb40 PushI
	var_262_bool = var_259_int == var_261_int; // 0xb41 Eq
	if(var_262_bool == 0) goto Label_2885; // 0xb42 JumpB
	var_257_bool = 1; // 0xb43 MovB
	return 0; // 0xb44 Return
	
Label_2885:
	var_257_bool = 0; // 0xb45 MovB
	return 0; // 0xb46 Return
}


func_2623(var_40_object, var_41_int)
{
	var_42_int = 0; var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_int = 0; var_47_bool = 0; // 0xa3f PushV
	GetItemID(var_45_int); // 0xa40 ObjFunc
	var_48_string = "Category"; // 0xa42 PushS
	GetInvItemProperty(var_46_int, var_45_int, var_48_string); // 0xa43 Func
	AddItem(var_47_bool, var_40_object, var_46_int, var_41_int); // 0xa45 ObjFunc
	var_49_bool = var_47_bool == 0; // 0xa47 Not
	if(var_49_bool == 0) goto Label_2635; // 0xa48 JumpB
	DropItems(var_40_object, var_41_int); // 0xa49 ObjFunc
	
Label_2635:
	return 6; // 0xa4b Return
}


func_3141(var_267_bool)
{
	var_269_bool = 0; // 0xc46 PushV
	var_269_bool = 0; // 0xc47 MovB
	var_270_int = 0; // 0xc48 PushV
	func_2675(var_270_int); // 0xc49 Call
	var_271_int = 12; // 0xc4b PushI
	var_272_bool = var_270_int >= var_271_int; // 0xc4c GE
	if(var_272_bool == 0) goto Label_3157; // 0xc4d JumpB
	var_273_int = 0; // 0xc4e PushV
	func_2675(var_273_int); // 0xc4f Call
	var_274_int = 18; // 0xc51 PushI
	var_275_bool = var_273_int < var_274_int; // 0xc52 LT
	if(var_275_bool == 0) goto Label_3157; // 0xc53 JumpB
	var_269_bool = 1; // 0xc54 MovB
	
Label_3157:
	if(var_269_bool == 0) goto Label_3160; // 0xc55 JumpB
	var_267_bool = 1; // 0xc56 MovB
	return 0; // 0xc57 Return
	
Label_3160:
	var_267_bool = 0; // 0xc58 MovB
	return 0; // 0xc59 Return
}


func_2887(var_203_bool)
{
	var_205_int = 0; var_206_string = ""; // 0xb48 PushV
	var_206_string = "d1q02"; // 0xb49 MovS
	func_2618(var_205_int, var_206_string); // 0xb4a Call
	var_207_int = 2; // 0xb4c PushI
	var_208_bool = var_205_int == var_207_int; // 0xb4d Eq
	if(var_208_bool == 0) goto Label_2897; // 0xb4e JumpB
	var_203_bool = 1; // 0xb4f MovB
	return 0; // 0xb50 Return
	
Label_2897:
	var_203_bool = 0; // 0xb51 MovB
	return 0; // 0xb52 Return
}


func_2636(var_34_object, var_35_string, var_36_int)
{
	var_37_object = Obj(); var_38_object = Obj(); // 0xa4c PushV
	CreateInvItem(var_38_object); // 0xa4d Func
	SetItemName(var_35_string); // 0xa4f ObjFunc
	var_39_object = Obj(); var_40_object = Obj(); var_41_int = 0; // 0xa51 PushV
	var_39_object = var_34_object; // 0xa52 Mov
	var_40_object = var_38_object; // 0xa53 Mov
	var_41_int = var_36_int; // 0xa54 Mov
	func_2623(var_40_object, var_41_int); // 0xa55 Call
	return 2; // 0xa57 Return
}


func_2899(var_313_bool)
{
	var_315_int = 0; var_316_string = ""; // 0xb54 PushV
	var_316_string = "ood1Laska4"; // 0xb55 MovS
	func_2618(var_315_int, var_316_string); // 0xb56 Call
	var_317_int = 0; // 0xb58 PushI
	var_318_bool = var_315_int == var_317_int; // 0xb59 Eq
	if(var_318_bool == 0) goto Label_2909; // 0xb5a JumpB
	var_313_bool = 1; // 0xb5b MovB
	return 0; // 0xb5c Return
	
Label_2909:
	var_313_bool = 0; // 0xb5d MovB
	return 0; // 0xb5e Return
}


func_2649(var_39_bool, var_40_string, var_41_string)
{
	var_42_object = Obj(); var_43_object = Obj(); // 0xa59 PushV
	FindActor(var_43_object, var_40_string); // 0xa5a Func
	var_44_bool = var_43_object == 0; // 0xa5c NullEq
	if(var_44_bool == 0) goto Label_2656; // 0xa5d JumpB
	var_39_bool = 0; // 0xa5e MovB
	return 2; // 0xa5f Return
	
Label_2656:
	Trigger(var_43_object, var_41_string); // 0xa60 Func
	var_39_bool = 1; // 0xa62 MovB
	return 2; // 0xa63 Return
}


func_3162(var_90_object)
{
	var_91_object = Obj(); var_92_object = Obj(); // 0xc5a PushV
	GetDiaryRoot(var_92_object); // 0xc5b Func
	var_93_bool = var_92_object == 0; // 0xc5d Not
	if(var_93_bool == 0) goto Label_3172; // 0xc5e JumpB
	var_94_string = "Can't retrieve diary root"; // 0xc5f PushS
	Trace(var_94_string); // 0xc60 Func
	var_90_object = 0; // 0xc62 MovB
	return 2; // 0xc63 Return
	
Label_3172:
	var_90_object = var_92_object; // 0xc64 Mov
	return 2; // 0xc65 Return
}


func_1629(var_2_object, var_31_string)
{
	var_32_bool = 0; // 0x65e PushV
	func_2702(var_32_bool); // 0x65f Call
	var_33_bool = var_32_bool == 0; // 0x661 Not
	if(var_33_bool == 0) goto Label_1636; // 0x662 JumpB
	return 0; // 0x663 Return
	
Label_1636:
	var_34_bool = var_31_string == var_2_object; // 0x664 Eq
	if(var_34_bool == 0) goto Label_1639; // 0x665 JumpB
	return 0; // 0x666 Return
	
Label_1639:
	var_35_string = ""; // 0x667 PushV
	var_35_string = var_31_string; // 0x668 Mov
	func_2583(var_35_string); // 0x669 Call
	var_2_object = var_31_string; // 0x66b TMov
	return 0; // 0x66c Return
}


func_2911(var_329_bool)
{
	var_331_int = 0; var_332_string = ""; // 0xb60 PushV
	var_332_string = "ood1Laska5"; // 0xb61 MovS
	func_2618(var_331_int, var_332_string); // 0xb62 Call
	var_333_int = 0; // 0xb64 PushI
	var_334_bool = var_331_int == var_333_int; // 0xb65 Eq
	if(var_334_bool == 0) goto Label_2921; // 0xb66 JumpB
	var_329_bool = 1; // 0xb67 MovB
	return 0; // 0xb68 Return
	
Label_2921:
	var_329_bool = 0; // 0xb69 MovB
	return 0; // 0xb6a Return
}


func_2148(var_0_object, var_1_object, var_2_object, var_3_object, var_481_object, var_482_object)
{
	var_0_object = var_482_object; // 0x865 TMov
	var_1_object = var_481_object; // 0x866 TMov
	var_3_object = 0; // 0x867 TMovB
	var_487_int = 1; // 0x868 PushI
	if(var_487_int == 0) goto Label_2190; // 0x869 JumpB
	var_488_string = ""; // 0x86a PushV
	var_488_string = "Neutral"; // 0x86b MovS
	func_2220(var_482_object, var_488_string); // 0x86c Call
	var_493_int = 12815; // 0x86e PushI
	SetMessage(var_493_int); // 0x86f TObjFunc
	ClearReplies(); // 0x871 TObjFunc
	var_494_bool = 0; // 0x873 PushV
	var_494_bool = 0; // 0x874 MovB
	var_495_bool = 0; var_496_object = Obj(); // 0x875 PushV
	var_496_object = var_1_object; // 0x876 MovT
	func_2989(var_496_object); // 0x877 Call
	if(var_495_bool == 0) goto Label_2176; // 0x879 JumpB
	var_501_bool = 0; var_502_object = Obj(); // 0x87a PushV
	var_502_object = var_1_object; // 0x87b MovT
	func_3001(var_502_object); // 0x87c Call
	if(var_501_bool == 0) goto Label_2176; // 0x87e JumpB
	var_494_bool = 1; // 0x87f MovB
	
Label_2176:
	if(var_494_bool == 0) goto Label_2182; // 0x880 JumpB
	var_507_int = 12816; // 0x881 PushI
	var_508_int = 14017; // 0x882 PushI
	var_509_int = 14016; // 0x883 PushI
	AddReply(var_507_int, var_508_int, var_509_int); // 0x884 TObjFunc
	
Label_2182:
	var_510_int = 12828; // 0x886 PushI
	var_511_int = -1; // 0x887 PushI
	var_512_int = 14028; // 0x888 PushI
	AddReply(var_510_int, var_511_int, var_512_int); // 0x889 TObjFunc
	goto Label_2190; // 0x88b Jump
	
Label_2190:
	var_513_bool = 0; // 0x88e PushV
	func_2702(var_513_bool); // 0x88f Call
	if(var_513_bool == 0) goto Label_2205; // 0x891 JumpB
	
Label_2194:
	lshWaitForAnimEnd(); // 0x892 Func
	var_514_object = var_3_object; // 0x894 PushT
	if(var_514_object == 0) goto Label_2199; // 0x895 JumpB
	goto Label_2204; // 0x896 Jump
	
Label_2204:
	goto Label_2219; // 0x89c Jump
	
Label_2219:
	return 0; // 0x8ab Return
	
Label_2199:
	var_515_string = ""; // 0x897 PushV
	var_515_string = var_2_object; // 0x898 MovT
	func_2583(var_515_string); // 0x899 Call
	goto Label_2194; // 0x89b Jump
	
Label_2205:
	var_516_string = "all"; // 0x89d PushS
	var_517_string = "idle"; // 0x89e PushS
	PlayAnimation(var_516_string, var_517_string); // 0x89f Func
	
Label_2209:
	WaitForAnimEnd(); // 0x8a1 Func
	var_518_object = var_3_object; // 0x8a3 PushT
	if(var_518_object == 0) goto Label_2214; // 0x8a4 JumpB
	goto Label_2219; // 0x8a5 Jump
	
Label_2214:
	var_519_string = "all"; // 0x8a6 PushS
	var_520_string = "idle"; // 0x8a7 PushS
	PlayAnimation(var_519_string, var_520_string); // 0x8a8 Func
	goto Label_2209; // 0x8aa Jump
}


func_2661(var_72_float)
{
	var_73_float = 0; var_74_float = 0; // 0xa65 PushV
	GetGameTime(var_74_float); // 0xa66 Func
	var_72_float = var_74_float; // 0xa68 Mov
	return 2; // 0xa69 Return
}


func_3175(var_81_bool, var_82_object, var_83_int)
{
	var_84_object = Obj(); var_85_object = Obj(); var_86_int = 0; var_87_object = Obj(); var_88_object = Obj(); var_89_int = 0; // 0xc67 PushV
	var_90_object = Obj(); // 0xc68 PushV
	func_3162(var_90_object); // 0xc69 Call
	var_87_object = var_90_object; // 0xc6a Mov
	Find(var_83_int, var_88_object); // 0xc6c ObjFunc
	var_95_bool = var_88_object == 0; // 0xc6e Not
	if(var_95_bool == 0) goto Label_3190; // 0xc6f JumpB
	var_96_string = "Can't find diary parent with id: "; // 0xc70 PushS
	var_97_int = var_96_string + var_83_int; // 0xc71 Add
	Trace(var_97_int); // 0xc72 Func
	var_81_bool = 0; // 0xc74 MovB
	return 6; // 0xc75 Return
	
Label_3190:
	AddChild(var_82_object); // 0xc76 ObjFunc
	var_98_string = "player_diary"; // 0xc78 PushS
	var_99_int = 1; // 0xc79 PushI
	SetVariable(var_98_string, var_99_int); // 0xc7a Func
	GetCategory(var_89_int); // 0xc7c ObjFunc
	SetDiarySection(var_89_int); // 0xc7e Func
	var_81_bool = 0; // 0xc80 MovB
	return 6; // 0xc81 Return
}


func_2666(var_138_int)
{
	var_139_float = 0; var_140_float = 0; // 0xa6a PushV
	GetGameTime(var_140_float); // 0xa6b Func
	var_141_int = 1; // 0xa6d PushI
	var_142_int = 0; // 0xa6e PushV
	var_143_int = 24; // 0xa6f PushI
	var_142_int = var_140_float / var_140_float; // 0xa70 Div2
	var_138_int = var_141_int + var_142_int; // 0xa71 Add2
	return 2; // 0xa72 Return
}


func_2923(var_345_bool)
{
	var_347_int = 0; var_348_string = ""; // 0xb6c PushV
	var_348_string = "ood1Laska6"; // 0xb6d MovS
	func_2618(var_347_int, var_348_string); // 0xb6e Call
	var_349_int = 0; // 0xb70 PushI
	var_350_bool = var_347_int == var_349_int; // 0xb71 Eq
	if(var_350_bool == 0) goto Label_2933; // 0xb72 JumpB
	var_345_bool = 1; // 0xb73 MovB
	return 0; // 0xb74 Return
	
Label_2933:
	var_345_bool = 0; // 0xb75 MovB
	return 0; // 0xb76 Return
}


func_620(var_2_object, var_209_string)
{
	var_210_bool = 0; // 0x26d PushV
	func_2702(var_210_bool); // 0x26e Call
	var_211_bool = var_210_bool == 0; // 0x270 Not
	if(var_211_bool == 0) goto Label_627; // 0x271 JumpB
	return 0; // 0x272 Return
	
Label_627:
	var_212_bool = var_209_string == var_2_object; // 0x273 Eq
	if(var_212_bool == 0) goto Label_630; // 0x274 JumpB
	return 0; // 0x275 Return
	
Label_630:
	var_213_string = ""; // 0x276 PushV
	var_213_string = var_209_string; // 0x277 Mov
	func_2583(var_213_string); // 0x278 Call
	var_2_object = var_209_string; // 0x27a TMov
	return 0; // 0x27b Return
}


func_365(var_0_object, var_1_object, var_2_object, var_3_object, var_162_object, var_163_object)
{
	var_0_object = var_163_object; // 0x16e TMov
	var_1_object = var_162_object; // 0x16f TMov
	var_3_object = 0; // 0x170 TMovB
	var_168_int = 1; // 0x171 PushI
	if(var_168_int == 0) goto Label_590; // 0x172 JumpB
	var_169_bool = 0; // 0x173 PushV
	var_169_bool = 0; // 0x174 MovB
	var_170_bool = 0; var_171_object = Obj(); // 0x175 PushV
	var_171_object = var_1_object; // 0x176 MovT
	func_3073(var_171_object); // 0x177 Call
	if(var_170_bool == 0) goto Label_384; // 0x179 JumpB
	var_178_bool = 0; var_179_object = Obj(); // 0x17a PushV
	var_179_object = var_1_object; // 0x17b MovT
	func_2887(var_179_object); // 0x17c Call
	if(var_178_bool == 0) goto Label_384; // 0x17e JumpB
	var_169_bool = 1; // 0x17f MovB
	
Label_384:
	if(var_169_bool == 0) goto Label_405; // 0x180 JumpB
	var_184_string = ""; // 0x181 PushV
	var_184_string = "Neutral"; // 0x182 MovS
	func_620(var_163_object, var_184_string); // 0x183 Call
	var_189_int = 5050; // 0x185 PushI
	SetMessage(var_189_int); // 0x186 TObjFunc
	ClearReplies(); // 0x188 TObjFunc
	var_190_int = 5051; // 0x18a PushI
	var_191_int = 5555; // 0x18b PushI
	var_192_int = 5554; // 0x18c PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x18d TObjFunc
	var_193_int = 5073; // 0x18f PushI
	var_194_int = 5582; // 0x190 PushI
	var_195_int = 5581; // 0x191 PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x192 TObjFunc
	goto Label_590; // 0x194 Jump
	
Label_590:
	var_196_bool = 0; // 0x24e PushV
	func_2702(var_196_bool); // 0x24f Call
	if(var_196_bool == 0) goto Label_605; // 0x251 JumpB
	
Label_594:
	lshWaitForAnimEnd(); // 0x252 Func
	var_197_object = var_3_object; // 0x254 PushT
	if(var_197_object == 0) goto Label_599; // 0x255 JumpB
	goto Label_604; // 0x256 Jump
	
Label_604:
	goto Label_619; // 0x25c Jump
	
Label_619:
	return 0; // 0x26b Return
	
Label_599:
	var_198_string = ""; // 0x257 PushV
	var_198_string = var_2_object; // 0x258 MovT
	func_2583(var_198_string); // 0x259 Call
	goto Label_594; // 0x25b Jump
	
Label_605:
	var_199_string = "all"; // 0x25d PushS
	var_200_string = "idle"; // 0x25e PushS
	PlayAnimation(var_199_string, var_200_string); // 0x25f Func
	
Label_609:
	WaitForAnimEnd(); // 0x261 Func
	var_201_object = var_3_object; // 0x263 PushT
	if(var_201_object == 0) goto Label_614; // 0x264 JumpB
	goto Label_619; // 0x265 Jump
	
Label_614:
	var_202_string = "all"; // 0x266 PushS
	var_203_string = "idle"; // 0x267 PushS
	PlayAnimation(var_202_string, var_203_string); // 0x268 Func
	goto Label_609; // 0x26a Jump
	
Label_405:
	var_204_string = ""; // 0x195 PushV
	var_204_string = "Neutral"; // 0x196 MovS
	func_620(var_163_object, var_204_string); // 0x197 Call
	var_205_int = 8066; // 0x199 PushI
	SetMessage(var_205_int); // 0x19a TObjFunc
	ClearReplies(); // 0x19c TObjFunc
	var_206_bool = 0; // 0x19e PushV
	var_206_bool = 1; // 0x19f MovB
	var_207_bool = 0; // 0x1a0 PushV
	var_207_bool = 0; // 0x1a1 MovB
	var_208_bool = 0; // 0x1a2 PushV
	var_208_bool = 0; // 0x1a3 MovB
	var_209_bool = 0; var_210_object = Obj(); // 0x1a4 PushV
	var_210_object = var_1_object; // 0x1a5 MovT
	func_2957(var_209_bool, var_210_object); // 0x1a6 Call
	if(var_209_bool == 0) goto Label_431; // 0x1a8 JumpB
	var_224_bool = 0; var_225_object = Obj(); // 0x1a9 PushV
	var_225_object = var_1_object; // 0x1aa MovT
	func_3085(var_225_object); // 0x1ab Call
	if(var_224_bool == 0) goto Label_431; // 0x1ad JumpB
	var_208_bool = 1; // 0x1ae MovB
	
Label_431:
	if(var_208_bool == 0) goto Label_438; // 0x1af JumpB
	var_230_bool = 0; var_231_object = Obj(); // 0x1b0 PushV
	var_231_object = var_1_object; // 0x1b1 MovT
	func_2875(var_231_object); // 0x1b2 Call
	if(var_230_bool == 0) goto Label_438; // 0x1b4 JumpB
	var_207_bool = 1; // 0x1b5 MovB
	
Label_438:
	if(var_207_bool == 0) goto Label_463; // 0x1b6 JumpB
	var_236_bool = 0; // 0x1b7 PushV
	var_236_bool = 0; // 0x1b8 MovB
	var_237_bool = 0; // 0x1b9 PushV
	var_237_bool = 0; // 0x1ba MovB
	var_238_bool = 0; var_239_object = Obj(); // 0x1bb PushV
	var_239_object = var_1_object; // 0x1bc MovT
	func_2967(var_238_bool, var_239_object); // 0x1bd Call
	if(var_238_bool == 0) goto Label_454; // 0x1bf JumpB
	var_249_bool = 0; var_250_object = Obj(); // 0x1c0 PushV
	var_250_object = var_1_object; // 0x1c1 MovT
	func_3085(var_250_object); // 0x1c2 Call
	if(var_249_bool == 0) goto Label_454; // 0x1c4 JumpB
	var_237_bool = 1; // 0x1c5 MovB
	
Label_454:
	if(var_237_bool == 0) goto Label_461; // 0x1c6 JumpB
	var_251_bool = 0; var_252_object = Obj(); // 0x1c7 PushV
	var_252_object = var_1_object; // 0x1c8 MovT
	func_2875(var_252_object); // 0x1c9 Call
	if(var_251_bool == 0) goto Label_461; // 0x1cb JumpB
	var_236_bool = 1; // 0x1cc MovB
	
Label_461:
	if(var_236_bool == 0) goto Label_463; // 0x1cd JumpB
	var_206_bool = 0; // 0x1ce MovB
	
Label_463:
	if(var_206_bool == 0) goto Label_469; // 0x1cf JumpB
	var_253_int = 8067; // 0x1d0 PushI
	var_254_int = 5607; // 0x1d1 PushI
	var_255_int = 8890; // 0x1d2 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x1d3 TObjFunc
	
Label_469:
	var_256_bool = 0; // 0x1d5 PushV
	var_256_bool = 1; // 0x1d6 MovB
	var_257_bool = 0; // 0x1d7 PushV
	var_257_bool = 0; // 0x1d8 MovB
	var_258_bool = 0; var_259_object = Obj(); // 0x1d9 PushV
	var_259_object = var_1_object; // 0x1da MovT
	func_2967(var_258_bool, var_259_object); // 0x1db Call
	if(var_258_bool == 0) goto Label_484; // 0x1dd JumpB
	var_260_bool = 0; var_261_object = Obj(); // 0x1de PushV
	var_261_object = var_1_object; // 0x1df MovT
	func_3097(var_261_object); // 0x1e0 Call
	if(var_260_bool == 0) goto Label_484; // 0x1e2 JumpB
	var_257_bool = 1; // 0x1e3 MovB
	
Label_484:
	if(var_257_bool == 0) goto Label_500; // 0x1e4 JumpB
	var_266_bool = 0; // 0x1e5 PushV
	var_266_bool = 0; // 0x1e6 MovB
	var_267_bool = 0; var_268_object = Obj(); // 0x1e7 PushV
	var_268_object = var_1_object; // 0x1e8 MovT
	func_2947(var_267_bool, var_268_object); // 0x1e9 Call
	if(var_267_bool == 0) goto Label_498; // 0x1eb JumpB
	var_274_bool = 0; var_275_object = Obj(); // 0x1ec PushV
	var_275_object = var_1_object; // 0x1ed MovT
	func_3097(var_275_object); // 0x1ee Call
	if(var_274_bool == 0) goto Label_498; // 0x1f0 JumpB
	var_266_bool = 1; // 0x1f1 MovB
	
Label_498:
	if(var_266_bool == 0) goto Label_500; // 0x1f2 JumpB
	var_256_bool = 0; // 0x1f3 MovB
	
Label_500:
	if(var_256_bool == 0) goto Label_506; // 0x1f4 JumpB
	var_276_int = 8068; // 0x1f5 PushI
	var_277_int = 5592; // 0x1f6 PushI
	var_278_int = 8891; // 0x1f7 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x1f8 TObjFunc
	
Label_506:
	var_279_bool = 0; // 0x1fa PushV
	var_279_bool = 0; // 0x1fb MovB
	var_280_bool = 0; var_281_object = Obj(); // 0x1fc PushV
	var_281_object = var_1_object; // 0x1fd MovT
	func_3061(var_281_object); // 0x1fe Call
	if(var_280_bool == 0) goto Label_519; // 0x200 JumpB
	var_286_bool = 0; var_287_object = Obj(); // 0x201 PushV
	var_287_object = var_1_object; // 0x202 MovT
	func_2899(var_287_object); // 0x203 Call
	if(var_286_bool == 0) goto Label_519; // 0x205 JumpB
	var_279_bool = 1; // 0x206 MovB
	
Label_519:
	if(var_279_bool == 0) goto Label_525; // 0x207 JumpB
	var_292_int = 8076; // 0x208 PushI
	var_293_int = 8916; // 0x209 PushI
	var_294_int = 8899; // 0x20a PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0x20b TObjFunc
	
Label_525:
	var_295_bool = 0; // 0x20d PushV
	var_295_bool = 0; // 0x20e MovB
	var_296_bool = 0; var_297_object = Obj(); // 0x20f PushV
	var_297_object = var_1_object; // 0x210 MovT
	func_3025(var_297_object); // 0x211 Call
	if(var_296_bool == 0) goto Label_538; // 0x213 JumpB
	var_302_bool = 0; var_303_object = Obj(); // 0x214 PushV
	var_303_object = var_1_object; // 0x215 MovT
	func_2911(var_303_object); // 0x216 Call
	if(var_302_bool == 0) goto Label_538; // 0x218 JumpB
	var_295_bool = 1; // 0x219 MovB
	
Label_538:
	if(var_295_bool == 0) goto Label_544; // 0x21a JumpB
	var_308_int = 8077; // 0x21b PushI
	var_309_int = 8917; // 0x21c PushI
	var_310_int = 8900; // 0x21d PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0x21e TObjFunc
	
Label_544:
	var_311_bool = 0; // 0x220 PushV
	var_311_bool = 0; // 0x221 MovB
	var_312_bool = 0; var_313_object = Obj(); // 0x222 PushV
	var_313_object = var_1_object; // 0x223 MovT
	func_3013(var_313_object); // 0x224 Call
	if(var_312_bool == 0) goto Label_557; // 0x226 JumpB
	var_318_bool = 0; var_319_object = Obj(); // 0x227 PushV
	var_319_object = var_1_object; // 0x228 MovT
	func_2923(var_319_object); // 0x229 Call
	if(var_318_bool == 0) goto Label_557; // 0x22b JumpB
	var_311_bool = 1; // 0x22c MovB
	
Label_557:
	if(var_311_bool == 0) goto Label_563; // 0x22d JumpB
	var_324_int = 8078; // 0x22e PushI
	var_325_int = 8918; // 0x22f PushI
	var_326_int = 8901; // 0x230 PushI
	AddReply(var_324_int, var_325_int, var_326_int); // 0x231 TObjFunc
	
Label_563:
	var_327_bool = 0; // 0x233 PushV
	var_327_bool = 0; // 0x234 MovB
	var_328_bool = 0; var_329_object = Obj(); // 0x235 PushV
	var_329_object = var_1_object; // 0x236 MovT
	func_3037(var_329_object); // 0x237 Call
	if(var_328_bool == 0) goto Label_576; // 0x239 JumpB
	var_334_bool = 0; var_335_object = Obj(); // 0x23a PushV
	var_335_object = var_1_object; // 0x23b MovT
	func_2935(var_335_object); // 0x23c Call
	if(var_334_bool == 0) goto Label_576; // 0x23e JumpB
	var_327_bool = 1; // 0x23f MovB
	
Label_576:
	if(var_327_bool == 0) goto Label_582; // 0x240 JumpB
	var_340_int = 8090; // 0x241 PushI
	var_341_int = 8919; // 0x242 PushI
	var_342_int = 8913; // 0x243 PushI
	AddReply(var_340_int, var_341_int, var_342_int); // 0x244 TObjFunc
	
Label_582:
	var_343_int = 8697; // 0x246 PushI
	var_344_int = -1; // 0x247 PushI
	var_345_int = 9534; // 0x248 PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0x249 TObjFunc
	goto Label_590; // 0x24b Jump
}


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_92_object, var_93_object)
{
	var_0_object = var_93_object; // 0x71 TMov
	var_1_object = var_92_object; // 0x72 TMov
	var_3_object = 0; // 0x73 TMovB
	var_98_int = 1; // 0x74 PushI
	if(var_98_int == 0) goto Label_145; // 0x75 JumpB
	var_99_object = Obj(); var_100_object = Obj(); // 0x76 PushV
	var_99_object = var_1_object; // 0x77 MovT
	var_100_object = var_0_object; // 0x78 MovT
	func_2845(); // 0x79 Call
	var_103_string = ""; // 0x7b PushV
	var_103_string = "Neutral"; // 0x7c MovS
	func_175(var_93_object, var_103_string); // 0x7d Call
	var_118_int = 370; // 0x7f PushI
	SetMessage(var_118_int); // 0x80 TObjFunc
	ClearReplies(); // 0x82 TObjFunc
	var_119_int = 371; // 0x84 PushI
	var_120_int = 432; // 0x85 PushI
	var_121_int = 430; // 0x86 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x87 TObjFunc
	var_122_int = 372; // 0x89 PushI
	var_123_int = 437; // 0x8a PushI
	var_124_int = 431; // 0x8b PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x8c TObjFunc
	goto Label_145; // 0x8e Jump
	
Label_145:
	var_125_bool = 0; // 0x91 PushV
	func_2702(var_125_bool); // 0x92 Call
	if(var_125_bool == 0) goto Label_160; // 0x94 JumpB
	
Label_149:
	lshWaitForAnimEnd(); // 0x95 Func
	var_126_object = var_3_object; // 0x97 PushT
	if(var_126_object == 0) goto Label_154; // 0x98 JumpB
	goto Label_159; // 0x99 Jump
	
Label_159:
	goto Label_174; // 0x9f Jump
	
Label_174:
	return 0; // 0xae Return
	
Label_154:
	var_127_string = ""; // 0x9a PushV
	var_127_string = var_2_object; // 0x9b MovT
	func_2583(var_127_string); // 0x9c Call
	goto Label_149; // 0x9e Jump
	
Label_160:
	var_128_string = "all"; // 0xa0 PushS
	var_129_string = "idle"; // 0xa1 PushS
	PlayAnimation(var_128_string, var_129_string); // 0xa2 Func
	
Label_164:
	WaitForAnimEnd(); // 0xa4 Func
	var_130_object = var_3_object; // 0xa6 PushT
	if(var_130_object == 0) goto Label_169; // 0xa7 JumpB
	goto Label_174; // 0xa8 Jump
	
Label_169:
	var_131_string = "all"; // 0xa9 PushS
	var_132_string = "idle"; // 0xaa PushS
	PlayAnimation(var_131_string, var_132_string); // 0xab Func
	goto Label_164; // 0xad Jump
}


func_2675(var_241_int)
{
	var_242_float = 0; var_243_float = 0; // 0xa73 PushV
	GetGameTime(var_243_float); // 0xa74 Func
	var_244_int = 0; // 0xa76 PushV
	var_244_int = var_243_float; // 0xa77 Mov
	var_245_int = 24; // 0xa78 PushI
	var_241_int = var_244_int % var_245_int; // 0xa79 Mod2
	return 2; // 0xa7a Return
}


func_2935(var_361_bool)
{
	var_363_int = 0; var_364_string = ""; // 0xb78 PushV
	var_364_string = "ood1Laska7"; // 0xb79 MovS
	func_2618(var_363_int, var_364_string); // 0xb7a Call
	var_365_int = 0; // 0xb7c PushI
	var_366_bool = var_363_int == var_365_int; // 0xb7d Eq
	if(var_366_bool == 0) goto Label_2945; // 0xb7e JumpB
	var_361_bool = 1; // 0xb7f MovB
	return 0; // 0xb80 Return
	
Label_2945:
	var_361_bool = 0; // 0xb81 MovB
	return 0; // 0xb82 Return
}


func_2683(var_136_bool, var_137_int)
{
	var_138_int = 0; // 0xa7c PushV
	func_2666(var_138_int); // 0xa7d Call
	var_136_bool = var_138_int == var_137_int; // 0xa7f Eq2
	return 0; // 0xa80 Return
}


func_2689(var_523_bool)
{
	var_524_bool = 0; var_525_bool = 0; // 0xa81 PushV
	var_526_string = ""; // 0xa82 PushV
	var_526_string = "No"; // 0xa83 MovS
	func_2583(var_526_string); // 0xa84 Call
	lshWaitForAnimEnd(var_525_bool); // 0xa86 Func
	var_523_bool = var_525_bool; // 0xa88 Mov
	return 2; // 0xa89 Return
}


func_2947(var_294_bool, var_295_object)
{
	var_296_bool = 0; var_297_object = Obj(); // 0xb84 PushV
	var_297_object = var_295_object; // 0xb85 Mov
	func_3109(var_297_object); // 0xb86 Call
	if(var_296_bool == 0) goto Label_2955; // 0xb88 JumpB
	var_294_bool = 1; // 0xb89 MovB
	return 0; // 0xb8a Return
	
Label_2955:
	var_294_bool = 0; // 0xb8b MovB
	return 0; // 0xb8c Return
}


func_3204(var_77_bool, var_78_int)
{
	var_79_object = Obj(); var_80_object = Obj(); var_81_object = Obj(); var_82_object = Obj(); // 0xc84 PushV
	var_83_object = Obj(); // 0xc85 PushV
	func_3162(var_83_object); // 0xc86 Call
	var_81_object = var_83_object; // 0xc87 Mov
	Find(var_78_int, var_82_object); // 0xc89 ObjFunc
	var_84_bool = var_82_object == 0; // 0xc8b Not
	if(var_84_bool == 0) goto Label_3215; // 0xc8c JumpB
	var_77_bool = 0; // 0xc8d MovB
	return 4; // 0xc8e Return
	
Label_3215:
	Remove(); // 0xc8f ObjFunc
	var_77_bool = 1; // 0xc91 MovB
	return 4; // 0xc92 Return
}


func_1925(var_2_object, var_68_string)
{
	var_69_bool = 0; // 0x786 PushV
	func_2702(var_69_bool); // 0x787 Call
	var_70_bool = var_69_bool == 0; // 0x789 Not
	if(var_70_bool == 0) goto Label_1932; // 0x78a JumpB
	return 0; // 0x78b Return
	
Label_1932:
	var_71_bool = var_68_string == var_2_object; // 0x78c Eq
	if(var_71_bool == 0) goto Label_1935; // 0x78d JumpB
	return 0; // 0x78e Return
	
Label_1935:
	var_72_string = ""; // 0x78f PushV
	var_72_string = var_68_string; // 0x790 Mov
	func_2583(var_72_string); // 0x791 Call
	var_2_object = var_68_string; // 0x793 TMov
	return 0; // 0x794 Return
}


func_2698(var_81_int)
{
	var_81_int = 2867; // 0xa8a MovI
	return 0; // 0xa8b Return
}


func_2700(var_82_string)
{
	var_82_string = "ui/NPC_Laska.png"; // 0xa8c MovS
	return 0; // 0xa8d Return
}


func_2957(var_236_bool, var_237_object)
{
	var_238_bool = 0; var_239_object = Obj(); // 0xb8e PushV
	var_239_object = var_237_object; // 0xb8f Mov
	func_3120(var_239_object); // 0xb90 Call
	if(var_238_bool == 0) goto Label_2965; // 0xb92 JumpB
	var_236_bool = 1; // 0xb93 MovB
	return 0; // 0xb94 Return
	
Label_2965:
	var_236_bool = 0; // 0xb95 MovB
	return 0; // 0xb96 Return
}


func_2702(var_28_bool)
{
	var_28_bool = 1; // 0xa8e MovB
	return 0; // 0xa8f Return
}


func_2704()
{
	var_37_object = Obj(); var_38_object = Obj(); var_39_object = Obj(); var_40_object = Obj(); // 0xa90 PushV
	var_41_object = Obj(); // 0xa91 PushV
	func_3221(var_41_object); // 0xa92 Call
	var_39_object = var_41_object; // 0xa93 Mov
	var_48_string = "d1q02AnnaGotoLaska"; // 0xa95 PushS
	FindMark(var_40_object, var_48_string); // 0xa96 ObjFunc
	var_49_object = var_40_object; // 0xa98 Push
	if(var_49_object == 0) goto Label_2716; // 0xa99 JumpB
	Remove(); // 0xa9a ObjFunc
	
Label_2716:
	var_50_string = "d1q02ViktorGotoAnna"; // 0xa9c PushS
	FindMark(var_40_object, var_50_string); // 0xa9d ObjFunc
	var_51_object = var_40_object; // 0xa9f Push
	if(var_51_object == 0) goto Label_2723; // 0xaa0 JumpB
	Remove(); // 0xaa1 ObjFunc
	
Label_2723:
	func_3255(); // 0xaa4 Call
	var_77_bool = 0; var_78_int = 0; // 0xaa6 PushV
	var_78_int = 35; // 0xaa7 MovI
	func_3204(var_77_bool, var_78_int); // 0xaa8 Call
	var_85_bool = 0; var_86_string = ""; var_87_string = ""; // 0xaaa PushV
	var_86_string = "quest_d1_02"; // 0xaab MovS
	var_87_string = "completed"; // 0xaac MovS
	func_2649(var_85_bool, var_86_string, var_87_string); // 0xaad Call
	return 4; // 0xaaf Return
}


func_3221(var_61_object)
{
	var_62_object = Obj(); var_63_object = Obj(); var_64_object = Obj(); var_65_object = Obj(); // 0xc95 PushV
	GetMainOutdoorScene(var_64_object); // 0xc96 Func
	var_66_bool = var_64_object == 0; // 0xc98 NullEq
	if(var_66_bool == 0) goto Label_3232; // 0xc99 JumpB
	var_67_string = "Can't find main outdoor scene"; // 0xc9a PushS
	Trace(var_67_string); // 0xc9b Func
	var_65_object = 0; // 0xc9d SetNull
	var_61_object = var_65_object; // 0xc9e Mov
	return 4; // 0xc9f Return
	
Label_3232:
	GetMap(var_65_object); // 0xca0 ObjFunc
	var_61_object = var_65_object; // 0xca2 Mov
	return 4; // 0xca3 Return
}


func_2967(var_265_bool, var_266_object)
{
	var_267_bool = 0; var_268_object = Obj(); // 0xb98 PushV
	var_268_object = var_266_object; // 0xb99 Mov
	func_3141(var_268_object); // 0xb9a Call
	if(var_267_bool == 0) goto Label_2975; // 0xb9c JumpB
	var_265_bool = 1; // 0xb9d MovB
	return 0; // 0xb9e Return
	
Label_2975:
	var_265_bool = 0; // 0xb9f MovB
	return 0; // 0xba0 Return
}


func_2977(var_150_bool)
{
	var_152_int = 0; var_153_string = ""; // 0xba2 PushV
	var_153_string = "d6q03AlbinosKilled"; // 0xba3 MovS
	func_2618(var_152_int, var_153_string); // 0xba4 Call
	var_154_int = 1; // 0xba6 PushI
	var_155_bool = var_152_int == var_154_int; // 0xba7 Eq
	if(var_155_bool == 0) goto Label_2987; // 0xba8 JumpB
	var_150_bool = 1; // 0xba9 MovB
	return 0; // 0xbaa Return
	
Label_2987:
	var_150_bool = 0; // 0xbab MovB
	return 0; // 0xbac Return
}


func_3238(var_83_int)
{
	var_84_int = 0; var_85_int = 0; // 0xca6 PushV
	var_86_string = "player"; // 0xca7 PushS
	GetVariable(var_86_string, var_85_int); // 0xca8 Func
	var_87_int = 0; // 0xcaa PushI
	var_88_bool = var_85_int == var_87_int; // 0xcab Eq
	if(var_88_bool == 0) goto Label_3248; // 0xcac JumpB
	var_83_int = 200001; // 0xcad MovI
	return 2; // 0xcae Return
	
Label_3248:
	var_89_int = 1; // 0xcb0 PushI
	var_90_bool = var_85_int == var_89_int; // 0xcb1 Eq
	if(var_90_bool == 0) goto Label_3253; // 0xcb2 JumpB
	var_83_int = 200002; // 0xcb3 MovI
	return 2; // 0xcb4 Return
	
Label_3253:
	var_83_int = 200003; // 0xcb5 MovI
	return 2; // 0xcb6 Return
}


func_2220(var_2_object, var_111_string)
{
	var_112_bool = 0; // 0x8ad PushV
	func_2702(var_112_bool); // 0x8ae Call
	var_113_bool = var_112_bool == 0; // 0x8b0 Not
	if(var_113_bool == 0) goto Label_2227; // 0x8b1 JumpB
	return 0; // 0x8b2 Return
	
Label_2227:
	var_114_bool = var_111_string == var_2_object; // 0x8b3 Eq
	if(var_114_bool == 0) goto Label_2230; // 0x8b4 JumpB
	return 0; // 0x8b5 Return
	
Label_2230:
	var_115_string = ""; // 0x8b6 PushV
	var_115_string = var_111_string; // 0x8b7 Mov
	func_2583(var_115_string); // 0x8b8 Call
	var_2_object = var_111_string; // 0x8ba TMov
	return 0; // 0x8bb Return
}


func_2989(var_128_bool)
{
	var_130_int = 0; var_131_string = ""; // 0xbae PushV
	var_131_string = "d6q01"; // 0xbaf MovS
	func_2618(var_130_int, var_131_string); // 0xbb0 Call
	var_134_int = 2; // 0xbb2 PushI
	var_135_bool = var_130_int == var_134_int; // 0xbb3 Eq
	if(var_135_bool == 0) goto Label_2999; // 0xbb4 JumpB
	var_128_bool = 1; // 0xbb5 MovB
	return 0; // 0xbb6 Return
	
Label_2999:
	var_128_bool = 0; // 0xbb7 MovB
	return 0; // 0xbb8 Return
}


func_175(var_2_object, var_35_string)
{
	var_36_bool = 0; // 0xb0 PushV
	func_2702(var_36_bool); // 0xb1 Call
	var_37_bool = var_36_bool == 0; // 0xb3 Not
	if(var_37_bool == 0) goto Label_182; // 0xb4 JumpB
	return 0; // 0xb5 Return
	
Label_182:
	var_38_bool = var_35_string == var_2_object; // 0xb6 Eq
	if(var_38_bool == 0) goto Label_185; // 0xb7 JumpB
	return 0; // 0xb8 Return
	
Label_185:
	var_39_string = ""; // 0xb9 PushV
	var_39_string = var_35_string; // 0xba Mov
	func_2583(var_39_string); // 0xbb Call
	var_2_object = var_35_string; // 0xbd TMov
	return 0; // 0xbe Return
}


func_2738(var_95_object)
{
	var_97_object = Obj(); var_98_object = Obj(); // 0xab2 PushV
	var_99_string = "lockpick1time is given"; // 0xab3 PushS
	Trace(var_99_string); // 0xab4 Func
	CreateInvItem(var_98_object); // 0xab6 Func
	var_100_string = "lockpick"; // 0xab8 PushS
	SetItemName(var_100_string); // 0xab9 ObjFunc
	var_101_string = "uses"; // 0xabb PushS
	var_102_int = 1; // 0xabc PushI
	SetProperty(var_101_string, var_102_int); // 0xabd ObjFunc
	var_103_object = Obj(); var_104_object = Obj(); var_105_int = 0; // 0xabf PushV
	var_103_object = var_95_object; // 0xac0 Mov
	var_104_object = var_98_object; // 0xac1 Mov
	var_105_int = 1; // 0xac2 MovI
	func_2623(var_104_object, var_105_int); // 0xac3 Call
	return 2; // 0xac5 Return
}


func_3255()
{
	var_52_object = Obj(); var_53_object = Obj(); // 0xcb7 PushV
	var_54_string = "Adding diary entry"; // 0xcb8 PushS
	Trace(var_54_string); // 0xcb9 Func
	var_55_int = 36; // 0xcbb PushI
	var_56_int = 2; // 0xcbc PushI
	var_57_int = 12118; // 0xcbd PushI
	CreateDiaryEntry(var_53_object, var_55_int, var_56_int, var_57_int); // 0xcbe Func
	var_58_bool = 0; var_59_object = Obj(); var_60_int = 0; // 0xcc0 PushV
	var_59_object = var_53_object; // 0xcc1 Mov
	var_60_int = 7; // 0xcc2 MovI
	func_3175(var_58_bool, var_59_object, var_60_int); // 0xcc3 Call
	return 2; // 0xcc5 Return
}


func_3001(var_136_bool)
{
	var_138_int = 0; var_139_string = ""; // 0xbba PushV
	var_139_string = "ood6Laska1"; // 0xbbb MovS
	func_2618(var_138_int, var_139_string); // 0xbbc Call
	var_140_int = 0; // 0xbbe PushI
	var_141_bool = var_138_int == var_140_int; // 0xbbf Eq
	if(var_141_bool == 0) goto Label_3011; // 0xbc0 JumpB
	var_136_bool = 1; // 0xbc1 MovB
	return 0; // 0xbc2 Return
	
Label_3011:
	var_136_bool = 0; // 0xbc3 MovB
	return 0; // 0xbc4 Return
}


func_3013(var_339_bool)
{
	var_341_int = 0; var_342_string = ""; // 0xbc6 PushV
	var_342_string = "KnowKaterina"; // 0xbc7 MovS
	func_2618(var_341_int, var_342_string); // 0xbc8 Call
	var_343_int = 1; // 0xbca PushI
	var_344_bool = var_341_int == var_343_int; // 0xbcb Eq
	if(var_344_bool == 0) goto Label_3023; // 0xbcc JumpB
	var_339_bool = 1; // 0xbcd MovB
	return 0; // 0xbce Return
	
Label_3023:
	var_339_bool = 0; // 0xbcf MovB
	return 0; // 0xbd0 Return
}


func_2759()
{
	var_52_string = "playsound"; // 0xac8 PushS
	var_53_string = "giveitem"; // 0xac9 PushS
	TriggerWorld(var_52_string, var_53_string); // 0xaca Func
	return 0; // 0xacc Return
}


func_3271()
{
	var_75_object = Obj(); var_76_object = Obj(); // 0xcc7 PushV
	var_77_string = "Adding diary entry"; // 0xcc8 PushS
	Trace(var_77_string); // 0xcc9 Func
	var_78_int = 117; // 0xccb PushI
	var_79_int = 1; // 0xccc PushI
	var_80_int = 13740; // 0xccd PushI
	CreateDiaryEntry(var_76_object, var_78_int, var_79_int, var_80_int); // 0xcce Func
	var_81_bool = 0; var_82_object = Obj(); var_83_int = 0; // 0xcd0 PushV
	var_82_object = var_76_object; // 0xcd1 Mov
	var_83_int = 111; // 0xcd2 MovI
	func_3175(var_81_bool, var_82_object, var_83_int); // 0xcd3 Call
	return 2; // 0xcd5 Return
}


func_2506(var_26_bool)
{
	var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; // 0x9ca PushV
	GetPosition(var_32_cvector); // 0x9cb ObjFunc
	GetPosition(var_33_cvector); // 0x9cd Func
	var_34_cvector = var_32_cvector - var_33_cvector; // 0x9cf Sub2
	var_36_float = GetByIndex(var_34_cvector, 0); // 0x9d0 PushE
	var_37_float = GetByIndex(var_34_cvector, 2); // 0x9d1 PushE
	Rotate(var_36_float, var_37_float, var_35_bool); // 0x9d2 Func
	var_26_bool = var_35_bool; // 0x9d4 Mov
	return 8; // 0x9d5 Return
}


func_2765()
{
	var_172_string = "ood1Laska4"; // 0xace PushS
	var_173_int = 1; // 0xacf PushI
	SetVariable(var_172_string, var_173_int); // 0xad0 Func
	return 0; // 0xad2 Return
}


func_3025(var_323_bool)
{
	var_325_int = 0; var_326_string = ""; // 0xbd2 PushV
	var_326_string = "KnowMaria"; // 0xbd3 MovS
	func_2618(var_325_int, var_326_string); // 0xbd4 Call
	var_327_int = 1; // 0xbd6 PushI
	var_328_bool = var_325_int == var_327_int; // 0xbd7 Eq
	if(var_328_bool == 0) goto Label_3035; // 0xbd8 JumpB
	var_323_bool = 1; // 0xbd9 MovB
	return 0; // 0xbda Return
	
Label_3035:
	var_323_bool = 0; // 0xbdb MovB
	return 0; // 0xbdc Return
}


func_2771()
{
	var_178_string = "ood1Laska5"; // 0xad4 PushS
	var_179_int = 1; // 0xad5 PushI
	SetVariable(var_178_string, var_179_int); // 0xad6 Func
	return 0; // 0xad8 Return
}


func_2518(var_26_bool)
{
	var_27_bool = 0; var_28_bool = 0; // 0x9d6 PushV
	IsLoaded(var_28_bool); // 0x9d7 Func
	var_26_bool = var_28_bool; // 0x9d9 Mov
	return 2; // 0x9da Return
}


func_3287()
{
	var_25_bool = GlobalVars[1]; // 0xcd7 PushGE
	var_25_bool = 0; // 0xcd8 MovB
	GlobalVars[1] = var_25_bool; // 0xcd9 PopGE
	return 0; // 0xcda Return
}


func_2777()
{
	var_184_string = "ood1Laska6"; // 0xada PushS
	var_185_int = 1; // 0xadb PushI
	SetVariable(var_184_string, var_185_int); // 0xadc Func
	return 0; // 0xade Return
}


func_3291(var_26_object)
{
	var_27_bool = GlobalVars[1]; // 0xcdc PushGE
	var_28_bool = var_27_bool == 0; // 0xcdd Not
	if(var_28_bool == 0) goto Label_3304; // 0xcde JumpB
	var_29_int = 0; var_30_object = Obj(); // 0xcdf PushV
	var_30_object = var_26_object; // 0xce0 Mov
	TaskCall(2); // 0xce1 TaskCall
	func_49(var_31_object, var_29_int, var_30_object); // 0xce2 Call
	TaskReturn(); // 0xce3 TaskReturn
	var_135_bool = GlobalVars[1]; // 0xce5 PushGE
	var_135_bool = 1; // 0xce6 MovB
	GlobalVars[1] = var_135_bool; // 0xce7 PopGE
	
Label_3304:
	var_136_bool = 0; var_137_int = 0; // 0xce8 PushV
	var_137_int = 1; // 0xce9 MovI
	func_2683(var_136_bool, var_137_int); // 0xcea Call
	if(var_136_bool == 0) goto Label_3316; // 0xcec JumpB
	var_144_int = 0; var_145_object = Obj(); // 0xced PushV
	var_145_object = var_26_object; // 0xcee Mov
	TaskCall(4); // 0xcef TaskCall
	func_302(var_146_object, var_144_int, var_145_object); // 0xcf0 Call
	TaskReturn(); // 0xcf1 TaskReturn
	return 0; // 0xcf3 Return
	
Label_3316:
	var_348_bool = 0; var_349_int = 0; // 0xcf4 PushV
	var_349_int = 2; // 0xcf5 MovI
	func_2683(var_348_bool, var_349_int); // 0xcf6 Call
	if(var_348_bool == 0) goto Label_3328; // 0xcf8 JumpB
	var_350_int = 0; var_351_object = Obj(); // 0xcf9 PushV
	var_351_object = var_26_object; // 0xcfa Mov
	TaskCall(6); // 0xcfb TaskCall
	func_1508(var_352_object, var_350_int, var_351_object); // 0xcfc Call
	TaskReturn(); // 0xcfd TaskReturn
	return 0; // 0xcff Return
	
Label_3328:
	var_397_bool = 0; var_398_int = 0; // 0xd00 PushV
	var_398_int = 3; // 0xd01 MovI
	func_2683(var_397_bool, var_398_int); // 0xd02 Call
	if(var_397_bool == 0) goto Label_3340; // 0xd04 JumpB
	var_399_int = 0; var_400_object = Obj(); // 0xd05 PushV
	var_400_object = var_26_object; // 0xd06 Mov
	TaskCall(8); // 0xd07 TaskCall
	func_1779(var_401_object, var_399_int, var_400_object); // 0xd08 Call
	TaskReturn(); // 0xd09 TaskReturn
	return 0; // 0xd0b Return
	
Label_3340:
	var_461_bool = 0; var_462_int = 0; // 0xd0c PushV
	var_462_int = 6; // 0xd0d MovI
	func_2683(var_461_bool, var_462_int); // 0xd0e Call
	if(var_461_bool == 0) goto Label_3352; // 0xd10 JumpB
	var_463_int = 0; var_464_object = Obj(); // 0xd11 PushV
	var_464_object = var_26_object; // 0xd12 Mov
	TaskCall(10); // 0xd13 TaskCall
	func_2085(var_465_object, var_463_int, var_464_object); // 0xd14 Call
	TaskReturn(); // 0xd15 TaskReturn
	return 0; // 0xd17 Return
	
Label_3352:
	var_523_bool = 0; // 0xd18 PushV
	func_2689(var_523_bool); // 0xd19 Call
	return 0; // 0xd1b Return
}


func_2523(var_40_bool)
{
	var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_bool = 0; var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_bool = 0; // 0x9db PushV
	GetPosition(var_51_cvector); // 0x9dc ObjFunc
	GetEyesHeight(var_50_float); // 0x9de ObjFunc
	var_58_float = GetByIndex(var_51_cvector, 1); // 0x9e0 PushE
	var_58_float = var_58_float + var_50_float; // 0x9e1 Add2
	SetByIndex(var_51_cvector, 1) = var_58_float; // 0x9e2 PopE
	GetPosition(var_52_cvector); // 0x9e3 Func
	GetEyesHeight(var_50_float); // 0x9e5 Func
	var_59_float = GetByIndex(var_52_cvector, 1); // 0x9e7 PushE
	var_59_float = var_59_float + var_50_float; // 0x9e8 Add2
	SetByIndex(var_52_cvector, 1) = var_59_float; // 0x9e9 PopE
	var_53_cvector = var_51_cvector - var_52_cvector; // 0x9ea Sub2
	var_60_float = GetByIndex(var_53_cvector, 1); // 0x9eb PushE
	var_60_float = 0; // 0x9ec MovI
	SetByIndex(var_53_cvector, 1) = var_60_float; // 0x9ed PopE
	var_61_int = var_53_cvector | var_53_cvector; // 0x9ee Or
	var_62_float = sqrt(var_61_int); // 0x9ef Sqrt
	var_53_cvector = var_53_cvector / var_53_cvector; // 0x9f0 Div2
	var_54_cvector = -var_53_cvector; // 0x9f1 Neg2
	var_63_int = 70; // 0x9f2 PushI
	var_64_float = var_53_cvector * var_63_int; // 0x9f3 Mult
	var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); // 0x9f4 PushV
	var_67_cvector = CVector(0.0, 1.0, 0.0); // 0x9f5 PushVec
	var_66_cvector = var_54_cvector ^ var_67_cvector; // 0x9f6 Xor2
	func_2608(var_65_cvector, var_66_cvector); // 0x9f7 Call
	var_73_int = 25; // 0x9f9 PushI
	var_74_float = var_65_cvector * var_73_int; // 0x9fa Mult
	var_75_int = var_64_float + var_74_float; // 0x9fb Add
	var_76_cvector = CVector(0.0, 10.0, 0.0); // 0x9fc PushVec
	var_55_cvector = var_75_int - var_76_cvector; // 0x9fd Sub2
	var_56_cvector = var_52_cvector + var_55_cvector; // 0x9fe Add2
	IsOverrideActive(var_57_bool); // 0x9ff Func
	var_77_bool = var_57_bool; // 0xa01 Push
	if(var_77_bool == 0) goto Label_2565; // 0xa02 JumpB
	var_40_bool = 0; // 0xa03 MovB
	return 16; // 0xa04 Return
	
Label_2565:
	StopWorld(); // 0xa05 Func
	CameraTransit(var_56_cvector, var_54_cvector); // 0xa07 Func
	var_78_float = GetByIndex(var_55_cvector, 0); // 0xa09 PushE
	var_79_float = GetByIndex(var_55_cvector, 2); // 0xa0a PushE
	Rotate(var_78_float, var_79_float); // 0xa0b Func
	CameraWaitForPlayFinish(); // 0xa0d Func
	ResumeWorld(); // 0xa0f Func
	var_40_bool = 1; // 0xa11 MovB
	return 16; // 0xa12 Return
}


func_3037(var_355_bool)
{
	var_357_int = 0; var_358_string = ""; // 0xbde PushV
	var_358_string = "KnowMishka"; // 0xbdf MovS
	func_2618(var_357_int, var_358_string); // 0xbe0 Call
	var_359_int = 1; // 0xbe2 PushI
	var_360_bool = var_357_int == var_359_int; // 0xbe3 Eq
	if(var_360_bool == 0) goto Label_3047; // 0xbe4 JumpB
	var_355_bool = 1; // 0xbe5 MovB
	return 0; // 0xbe6 Return
	
Label_3047:
	var_355_bool = 0; // 0xbe7 MovB
	return 0; // 0xbe8 Return
}


func_2783()
{
	var_190_string = "ood1Laska7"; // 0xae0 PushS
	var_191_int = 1; // 0xae1 PushI
	SetVariable(var_190_string, var_191_int); // 0xae2 Func
	return 0; // 0xae4 Return
}


func_1508(var_0_object, var_350_int, var_351_object)
{
	var_353_object = Obj(); var_354_bool = 0; var_355_int = 0; var_356_bool = 0; var_357_object = Obj(); var_358_bool = 0; var_359_int = 0; var_360_bool = 0; // 0x5e4 PushV
	var_0_object = var_351_object; // 0x5e5 TMov
	var_361_bool = 0; var_362_object = Obj(); // 0x5e6 PushV
	var_362_object = var_351_object; // 0x5e7 Mov
	func_2523(var_362_object); // 0x5e8 Call
	var_363_bool = var_361_bool == 0; // 0x5ea Not
	if(var_363_bool == 0) goto Label_1518; // 0x5eb JumpB
	var_350_int = -2; // 0x5ec MovI
	return 8; // 0x5ed Return
	
Label_1518:
	CreateDialog(var_357_object); // 0x5ee Func
	var_364_int = 0; // 0x5f0 PushV
	func_2698(var_364_int); // 0x5f1 Call
	SetNPCName(var_364_int); // 0x5f3 ObjFunc
	var_365_string = ""; // 0x5f5 PushV
	func_2700(var_365_string); // 0x5f6 Call
	SetPhoto(var_365_string); // 0x5f8 ObjFunc
	var_366_int = 0; // 0x5fa PushV
	func_3238(var_366_int); // 0x5fb Call
	SetPlayerName(var_366_int); // 0x5fd ObjFunc
	var_359_int = -1; // 0x5ff MovI
	IsOverrideActive(var_358_bool); // 0x600 Func
	var_367_bool = var_358_bool; // 0x602 Push
	if(var_367_bool == 0) goto Label_1542; // 0x603 JumpB
	var_350_int = -2; // 0x604 MovI
	return 8; // 0x605 Return
	
Label_1542:
	DoDialog(var_357_object); // 0x606 Func
	var_368_object = Obj(); var_369_object = Obj(); // 0x608 PushV
	var_368_object = var_351_object; // 0x609 Mov
	var_369_object = var_357_object; // 0x60a Mov
	TaskCall(7); // 0x60b TaskCall
	func_1571(var_370_object, var_371_object, var_372_string, var_373_bool, var_368_object, var_369_object); // 0x60c Call
	TaskReturn(); // 0x60d TaskReturn
	IsDialogEnd(var_360_bool); // 0x60f ObjFunc
	
Label_1553:
	var_395_bool = var_360_bool == 0; // 0x611 Not
	if(var_395_bool == 0) goto Label_1560; // 0x612 JumpB
	sync(); // 0x613 Func
	IsDialogEnd(var_360_bool); // 0x615 ObjFunc
	goto Label_1553; // 0x617 Jump
	
Label_1560:
	var_396_object = Obj(); // 0x618 PushV
	var_396_object = var_351_object; // 0x619 Mov
	func_2579(); // 0x61a Call
	StopDialog(var_357_object); // 0x61c Func
	GetReturnValue(var_359_int); // 0x61e ObjFunc
	var_350_int = var_359_int; // 0x620 Mov
	return 8; // 0x621 Return
}


func_2789(var_31_object)
{
	var_33_string = "powder is given"; // 0xae6 PushS
	Trace(var_33_string); // 0xae7 Func
	var_34_object = Obj(); var_35_string = ""; var_36_int = 0; // 0xae9 PushV
	var_34_object = var_31_object; // 0xaea Mov
	var_35_string = "powder"; // 0xaeb MovS
	var_36_int = 1; // 0xaec MovI
	func_2636(var_34_object, var_35_string, var_36_int); // 0xaed Call
	return 0; // 0xaef Return
}


func_3049(var_56_bool)
{
	var_58_int = 0; var_59_string = ""; // 0xbea PushV
	var_59_string = "ood3Laska1"; // 0xbeb MovS
	func_2618(var_58_int, var_59_string); // 0xbec Call
	var_62_int = 0; // 0xbee PushI
	var_63_bool = var_58_int == var_62_int; // 0xbef Eq
	if(var_63_bool == 0) goto Label_3059; // 0xbf0 JumpB
	var_56_bool = 1; // 0xbf1 MovB
	return 0; // 0xbf2 Return
	
Label_3059:
	var_56_bool = 0; // 0xbf3 MovB
	return 0; // 0xbf4 Return
}


func_2800()
{
	var_33_string = "ood6Laska1"; // 0xaf1 PushS
	var_34_int = 1; // 0xaf2 PushI
	SetVariable(var_33_string, var_34_int); // 0xaf3 Func
	return 0; // 0xaf5 Return
}


func_1779(var_0_object, var_399_int, var_400_object)
{
	var_402_object = Obj(); var_403_bool = 0; var_404_int = 0; var_405_bool = 0; var_406_object = Obj(); var_407_bool = 0; var_408_int = 0; var_409_bool = 0; // 0x6f3 PushV
	var_0_object = var_400_object; // 0x6f4 TMov
	var_410_bool = 0; var_411_object = Obj(); // 0x6f5 PushV
	var_411_object = var_400_object; // 0x6f6 Mov
	func_2523(var_411_object); // 0x6f7 Call
	var_412_bool = var_410_bool == 0; // 0x6f9 Not
	if(var_412_bool == 0) goto Label_1789; // 0x6fa JumpB
	var_399_int = -2; // 0x6fb MovI
	return 8; // 0x6fc Return
	
Label_1789:
	CreateDialog(var_406_object); // 0x6fd Func
	var_413_int = 0; // 0x6ff PushV
	func_2698(var_413_int); // 0x700 Call
	SetNPCName(var_413_int); // 0x702 ObjFunc
	var_414_string = ""; // 0x704 PushV
	func_2700(var_414_string); // 0x705 Call
	SetPhoto(var_414_string); // 0x707 ObjFunc
	var_415_int = 0; // 0x709 PushV
	func_3238(var_415_int); // 0x70a Call
	SetPlayerName(var_415_int); // 0x70c ObjFunc
	var_408_int = -1; // 0x70e MovI
	IsOverrideActive(var_407_bool); // 0x70f Func
	var_416_bool = var_407_bool; // 0x711 Push
	if(var_416_bool == 0) goto Label_1813; // 0x712 JumpB
	var_399_int = -2; // 0x713 MovI
	return 8; // 0x714 Return
	
Label_1813:
	DoDialog(var_406_object); // 0x715 Func
	var_417_object = Obj(); var_418_object = Obj(); // 0x717 PushV
	var_417_object = var_400_object; // 0x718 Mov
	var_418_object = var_406_object; // 0x719 Mov
	TaskCall(9); // 0x71a TaskCall
	func_1842(var_419_object, var_420_object, var_421_string, var_422_bool, var_417_object, var_418_object); // 0x71b Call
	TaskReturn(); // 0x71c TaskReturn
	IsDialogEnd(var_409_bool); // 0x71e ObjFunc
	
Label_1824:
	var_459_bool = var_409_bool == 0; // 0x720 Not
	if(var_459_bool == 0) goto Label_1831; // 0x721 JumpB
	sync(); // 0x722 Func
	IsDialogEnd(var_409_bool); // 0x724 ObjFunc
	goto Label_1824; // 0x726 Jump
	
Label_1831:
	var_460_object = Obj(); // 0x727 PushV
	var_460_object = var_400_object; // 0x728 Mov
	func_2579(); // 0x729 Call
	StopDialog(var_406_object); // 0x72b Func
	GetReturnValue(var_408_int); // 0x72d ObjFunc
	var_399_int = var_408_int; // 0x72f Mov
	return 8; // 0x730 Return
}


func_3061(var_307_bool)
{
	var_309_int = 0; var_310_string = ""; // 0xbf6 PushV
	var_310_string = "KnowOspina"; // 0xbf7 MovS
	func_2618(var_309_int, var_310_string); // 0xbf8 Call
	var_311_int = 1; // 0xbfa PushI
	var_312_bool = var_309_int == var_311_int; // 0xbfb Eq
	if(var_312_bool == 0) goto Label_3071; // 0xbfc JumpB
	var_307_bool = 1; // 0xbfd MovB
	return 0; // 0xbfe Return
	
Label_3071:
	var_307_bool = 0; // 0xbff MovB
	return 0; // 0xc00 Return
}


func_2806()
{
	var_57_object = Obj(); var_58_object = Obj(); // 0xaf6 PushV
	var_59_string = "d6q01"; // 0xaf7 PushS
	var_60_int = 3; // 0xaf8 PushI
	SetVariable(var_59_string, var_60_int); // 0xaf9 Func
	var_61_object = Obj(); // 0xafb PushV
	func_3221(var_61_object); // 0xafc Call
	var_58_object = var_61_object; // 0xafd Mov
	var_68_string = "d6q01LaskaGotoAlbinos"; // 0xaff PushS
	var_69_string = "pt_d6q03_albinos"; // 0xb00 PushS
	var_70_int = 1; // 0xb01 PushI
	var_71_int = 15400; // 0xb02 PushI
	var_72_float = 0; // 0xb03 PushV
	func_2661(var_72_float); // 0xb04 Call
	AddMark(var_68_string, var_69_string, var_70_int, var_71_int, var_72_float); // 0xb06 ObjFunc
	func_3271(); // 0xb09 Call
	var_100_bool = 0; var_101_string = ""; var_102_string = ""; // 0xb0b PushV
	var_101_string = "quest_d6_01"; // 0xb0c MovS
	var_102_string = "albinos_klara"; // 0xb0d MovS
	func_2649(var_100_bool, var_101_string, var_102_string); // 0xb0e Call
	return 2; // 0xb10 Return
}


