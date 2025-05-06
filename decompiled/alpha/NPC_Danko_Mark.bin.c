task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool)
{
	StopGroup0(); // 0x3 Func
	return 0; // 0x5 Return
}


task_1_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool)
{
	TaskCall(0); // 0x1e TaskCall
	func_0(); // 0x1f Call
	TaskReturn(); // 0x20 TaskReturn
	return 0; // 0x22 Return
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool)
{
	var_36_object = Obj(); // 0x24 PushV
	var_36_object = var_35_bool; // 0x25 Mov
	func_3351(var_36_object); // 0x26 Call
	return 0; // 0x28 Return
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool)
{
	var_36_bool = 0; var_37_object = Obj(); // 0x2a PushV
	var_37_object = var_35_bool; // 0x2b Mov
	func_2545(var_37_object); // 0x2c Call
	WaitForAnimEnd(); // 0x2e Func
	return 0; // 0x30 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0xc0 PushI
	if(var_37_int == 0) goto Label_329; // 0xc1 JumpB
	func_2640(); // 0xc3 Call
	var_39_int = 492; // 0xc5 PushI
	var_40_bool = var_35_string == var_39_int; // 0xc6 Eq
	if(var_40_bool == 0) goto Label_225; // 0xc7 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0xc8 PushV
	var_41_object = var_1_object; // 0xc9 MovT
	var_42_object = var_0_object; // 0xca MovT
	func_2869(); // 0xcb Call
	var_45_string = ""; // 0xcd PushV
	var_45_string = "Neutral"; // 0xce MovS
	func_175(var_36_bool, var_45_string); // 0xcf Call
	var_60_int = 424; // 0xd1 PushI
	SetMessage(var_60_int); // 0xd2 TObjFunc
	ClearReplies(); // 0xd4 TObjFunc
	var_61_int = 425; // 0xd6 PushI
	var_62_int = 494; // 0xd7 PushI
	var_63_int = 493; // 0xd8 PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0xd9 TObjFunc
	var_64_int = 429; // 0xdb PushI
	var_65_int = 498; // 0xdc PushI
	var_66_int = 497; // 0xdd PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0xde TObjFunc
	return 0; // 0xe0 Return
	
Label_225:
	var_67_int = 498; // 0xe1 PushI
	var_68_bool = var_35_string == var_67_int; // 0xe2 Eq
	if(var_68_bool == 0) goto Label_248; // 0xe3 JumpB
	var_69_string = ""; // 0xe4 PushV
	var_69_string = "Neutral"; // 0xe5 MovS
	func_175(var_36_bool, var_69_string); // 0xe6 Call
	var_70_int = 430; // 0xe8 PushI
	SetMessage(var_70_int); // 0xe9 TObjFunc
	ClearReplies(); // 0xeb TObjFunc
	var_71_int = 431; // 0xed PushI
	var_72_int = 501; // 0xee PushI
	var_73_int = 499; // 0xef PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0xf0 TObjFunc
	var_74_int = 432; // 0xf2 PushI
	var_75_int = 494; // 0xf3 PushI
	var_76_int = 500; // 0xf4 PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0xf5 TObjFunc
	return 0; // 0xf7 Return
	
Label_248:
	var_77_int = 501; // 0xf8 PushI
	var_78_bool = var_35_string == var_77_int; // 0xf9 Eq
	if(var_78_bool == 0) goto Label_271; // 0xfa JumpB
	var_79_string = ""; // 0xfb PushV
	var_79_string = "Neutral"; // 0xfc MovS
	func_175(var_36_bool, var_79_string); // 0xfd Call
	var_80_int = 433; // 0xff PushI
	SetMessage(var_80_int); // 0x100 TObjFunc
	ClearReplies(); // 0x102 TObjFunc
	var_81_int = 435; // 0x104 PushI
	var_82_int = -1; // 0x105 PushI
	var_83_int = 503; // 0x106 PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x107 TObjFunc
	var_84_int = 434; // 0x109 PushI
	var_85_int = -1; // 0x10a PushI
	var_86_int = 502; // 0x10b PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x10c TObjFunc
	return 0; // 0x10e Return
	
Label_271:
	var_87_int = 494; // 0x10f PushI
	var_88_bool = var_35_string == var_87_int; // 0x110 Eq
	if(var_88_bool == 0) goto Label_294; // 0x111 JumpB
	var_89_string = ""; // 0x112 PushV
	var_89_string = "Neutral"; // 0x113 MovS
	func_175(var_36_bool, var_89_string); // 0x114 Call
	var_90_int = 426; // 0x116 PushI
	SetMessage(var_90_int); // 0x117 TObjFunc
	ClearReplies(); // 0x119 TObjFunc
	var_91_int = 427; // 0x11b PushI
	var_92_int = 504; // 0x11c PushI
	var_93_int = 495; // 0x11d PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x11e TObjFunc
	var_94_int = 438; // 0x120 PushI
	var_95_int = -1; // 0x121 PushI
	var_96_int = 506; // 0x122 PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x123 TObjFunc
	return 0; // 0x125 Return
	
Label_294:
	var_97_int = 504; // 0x126 PushI
	var_98_bool = var_35_string == var_97_int; // 0x127 Eq
	if(var_98_bool == 0) goto Label_317; // 0x128 JumpB
	var_99_string = ""; // 0x129 PushV
	var_99_string = "Neutral"; // 0x12a MovS
	func_175(var_36_bool, var_99_string); // 0x12b Call
	var_100_int = 436; // 0x12d PushI
	SetMessage(var_100_int); // 0x12e TObjFunc
	ClearReplies(); // 0x130 TObjFunc
	var_101_int = 437; // 0x132 PushI
	var_102_int = 501; // 0x133 PushI
	var_103_int = 505; // 0x134 PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x135 TObjFunc
	var_104_int = 439; // 0x137 PushI
	var_105_int = -1; // 0x138 PushI
	var_106_int = 508; // 0x139 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x13a TObjFunc
	return 0; // 0x13c Return
	
Label_317:
	var_3_string = 1; // 0x13d TMovB
	var_107_bool = 0; // 0x13e PushV
	func_2717(var_107_bool); // 0x13f Call
	if(var_107_bool == 0) goto Label_325; // 0x141 JumpB
	lshStopAnimation(); // 0x142 Func
	goto Label_327; // 0x144 Jump
	
Label_327:
	return 0; // 0x147 Return
	
Label_325:
	StopAnimation(); // 0x145 Func
	
Label_329:
	return 0; // 0x149 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0x293 PushI
	if(var_37_int == 0) goto Label_1383; // 0x294 JumpB
	func_2640(); // 0x296 Call
	var_39_int = 6915; // 0x298 PushI
	var_40_bool = var_36_bool == var_39_int; // 0x299 Eq
	if(var_40_bool == 0) goto Label_682; // 0x29a JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0x29b PushV
	var_41_object = var_1_object; // 0x29c MovT
	var_42_object = var_0_object; // 0x29d MovT
	func_2719(); // 0x29e Call
	var_45_object = Obj(); var_46_object = Obj(); // 0x2a0 PushV
	var_45_object = var_1_object; // 0x2a1 MovT
	var_46_object = var_0_object; // 0x2a2 MovT
	func_2737(); // 0x2a3 Call
	var_68_object = Obj(); var_69_object = Obj(); // 0x2a5 PushV
	var_68_object = var_1_object; // 0x2a6 MovT
	var_69_object = var_0_object; // 0x2a7 MovT
	func_2762(); // 0x2a8 Call
	
Label_682:
	var_94_int = 6916; // 0x2aa PushI
	var_95_bool = var_36_bool == var_94_int; // 0x2ab Eq
	if(var_95_bool == 0) goto Label_700; // 0x2ac JumpB
	var_96_object = Obj(); var_97_object = Obj(); // 0x2ad PushV
	var_96_object = var_1_object; // 0x2ae MovT
	var_97_object = var_0_object; // 0x2af MovT
	func_2719(); // 0x2b0 Call
	var_98_object = Obj(); var_99_object = Obj(); // 0x2b2 PushV
	var_98_object = var_1_object; // 0x2b3 MovT
	var_99_object = var_0_object; // 0x2b4 MovT
	func_2737(); // 0x2b5 Call
	var_100_object = Obj(); var_101_object = Obj(); // 0x2b7 PushV
	var_100_object = var_1_object; // 0x2b8 MovT
	var_101_object = var_0_object; // 0x2b9 MovT
	func_2762(); // 0x2ba Call
	
Label_700:
	var_102_int = 6218; // 0x2bc PushI
	var_103_bool = var_36_bool == var_102_int; // 0x2bd Eq
	if(var_103_bool == 0) goto Label_708; // 0x2be JumpB
	var_104_object = Obj(); var_105_object = Obj(); // 0x2bf PushV
	var_104_object = var_1_object; // 0x2c0 MovT
	var_105_object = var_0_object; // 0x2c1 MovT
	func_2725(); // 0x2c2 Call
	
Label_708:
	var_108_int = 6219; // 0x2c4 PushI
	var_109_bool = var_36_bool == var_108_int; // 0x2c5 Eq
	if(var_109_bool == 0) goto Label_716; // 0x2c6 JumpB
	var_110_object = Obj(); var_111_object = Obj(); // 0x2c7 PushV
	var_110_object = var_1_object; // 0x2c8 MovT
	var_111_object = var_0_object; // 0x2c9 MovT
	func_2725(); // 0x2ca Call
	
Label_716:
	var_112_int = 6202; // 0x2cc PushI
	var_113_bool = var_36_bool == var_112_int; // 0x2cd Eq
	if(var_113_bool == 0) goto Label_724; // 0x2ce JumpB
	var_114_object = Obj(); var_115_object = Obj(); // 0x2cf PushV
	var_114_object = var_1_object; // 0x2d0 MovT
	var_115_object = var_0_object; // 0x2d1 MovT
	func_2731(); // 0x2d2 Call
	
Label_724:
	var_118_int = 6203; // 0x2d4 PushI
	var_119_bool = var_36_bool == var_118_int; // 0x2d5 Eq
	if(var_119_bool == 0) goto Label_732; // 0x2d6 JumpB
	var_120_object = Obj(); var_121_object = Obj(); // 0x2d7 PushV
	var_120_object = var_1_object; // 0x2d8 MovT
	var_121_object = var_0_object; // 0x2d9 MovT
	func_2731(); // 0x2da Call
	
Label_732:
	var_122_int = 6206; // 0x2dc PushI
	var_123_bool = var_36_bool == var_122_int; // 0x2dd Eq
	if(var_123_bool == 0) goto Label_740; // 0x2de JumpB
	var_124_object = Obj(); var_125_object = Obj(); // 0x2df PushV
	var_124_object = var_1_object; // 0x2e0 MovT
	var_125_object = var_0_object; // 0x2e1 MovT
	func_2731(); // 0x2e2 Call
	
Label_740:
	var_126_int = 6209; // 0x2e4 PushI
	var_127_bool = var_36_bool == var_126_int; // 0x2e5 Eq
	if(var_127_bool == 0) goto Label_748; // 0x2e6 JumpB
	var_128_object = Obj(); var_129_object = Obj(); // 0x2e7 PushV
	var_128_object = var_1_object; // 0x2e8 MovT
	var_129_object = var_0_object; // 0x2e9 MovT
	func_2731(); // 0x2ea Call
	
Label_748:
	var_130_int = 6210; // 0x2ec PushI
	var_131_bool = var_36_bool == var_130_int; // 0x2ed Eq
	if(var_131_bool == 0) goto Label_756; // 0x2ee JumpB
	var_132_object = Obj(); var_133_object = Obj(); // 0x2ef PushV
	var_132_object = var_1_object; // 0x2f0 MovT
	var_133_object = var_0_object; // 0x2f1 MovT
	func_2731(); // 0x2f2 Call
	
Label_756:
	var_134_int = 8956; // 0x2f4 PushI
	var_135_bool = var_36_bool == var_134_int; // 0x2f5 Eq
	if(var_135_bool == 0) goto Label_764; // 0x2f6 JumpB
	var_136_object = Obj(); var_137_object = Obj(); // 0x2f7 PushV
	var_136_object = var_1_object; // 0x2f8 MovT
	var_137_object = var_0_object; // 0x2f9 MovT
	func_2778(); // 0x2fa Call
	
Label_764:
	var_140_int = 9535; // 0x2fc PushI
	var_141_bool = var_36_bool == var_140_int; // 0x2fd Eq
	if(var_141_bool == 0) goto Label_772; // 0x2fe JumpB
	var_142_object = Obj(); var_143_object = Obj(); // 0x2ff PushV
	var_142_object = var_1_object; // 0x300 MovT
	var_143_object = var_0_object; // 0x301 MovT
	func_2784(); // 0x302 Call
	
Label_772:
	var_146_int = 9536; // 0x304 PushI
	var_147_bool = var_36_bool == var_146_int; // 0x305 Eq
	if(var_147_bool == 0) goto Label_780; // 0x306 JumpB
	var_148_object = Obj(); var_149_object = Obj(); // 0x307 PushV
	var_148_object = var_1_object; // 0x308 MovT
	var_149_object = var_0_object; // 0x309 MovT
	func_2790(); // 0x30a Call
	
Label_780:
	var_152_int = 9537; // 0x30c PushI
	var_153_bool = var_36_bool == var_152_int; // 0x30d Eq
	if(var_153_bool == 0) goto Label_788; // 0x30e JumpB
	var_154_object = Obj(); var_155_object = Obj(); // 0x30f PushV
	var_154_object = var_1_object; // 0x310 MovT
	var_155_object = var_0_object; // 0x311 MovT
	func_2796(); // 0x312 Call
	
Label_788:
	var_158_int = 9538; // 0x314 PushI
	var_159_bool = var_36_bool == var_158_int; // 0x315 Eq
	if(var_159_bool == 0) goto Label_796; // 0x316 JumpB
	var_160_object = Obj(); var_161_object = Obj(); // 0x317 PushV
	var_160_object = var_1_object; // 0x318 MovT
	var_161_object = var_0_object; // 0x319 MovT
	func_2802(); // 0x31a Call
	
Label_796:
	var_164_int = 6192; // 0x31c PushI
	var_165_bool = var_35_string == var_164_int; // 0x31d Eq
	if(var_165_bool == 0) goto Label_1010; // 0x31e JumpB
	var_166_bool = 0; // 0x31f PushV
	var_166_bool = 0; // 0x320 MovB
	var_167_bool = 0; var_168_object = Obj(); // 0x321 PushV
	var_168_object = var_1_object; // 0x322 MovT
	func_2881(var_168_object); // 0x323 Call
	if(var_167_bool == 0) goto Label_813; // 0x325 JumpB
	var_175_bool = 0; var_176_object = Obj(); // 0x326 PushV
	var_176_object = var_1_object; // 0x327 MovT
	func_2917(var_176_object); // 0x328 Call
	var_181_bool = var_175_bool == 0; // 0x32a Not
	if(var_181_bool == 0) goto Label_813; // 0x32b JumpB
	var_166_bool = 1; // 0x32c MovB
	
Label_813:
	if(var_166_bool == 0) goto Label_844; // 0x32d JumpB
	var_182_object = Obj(); var_183_object = Obj(); // 0x32e PushV
	var_182_object = var_1_object; // 0x32f MovT
	var_183_object = var_0_object; // 0x330 MovT
	func_2858(); // 0x331 Call
	var_186_object = Obj(); var_187_object = Obj(); // 0x333 PushV
	var_186_object = var_1_object; // 0x334 MovT
	var_187_object = var_0_object; // 0x335 MovT
	func_2808(); // 0x336 Call
	var_190_string = ""; // 0x338 PushV
	var_190_string = "Neutral"; // 0x339 MovS
	func_642(var_36_bool, var_190_string); // 0x33a Call
	var_205_int = 5616; // 0x33c PushI
	SetMessage(var_205_int); // 0x33d TObjFunc
	ClearReplies(); // 0x33f TObjFunc
	var_206_int = 5617; // 0x341 PushI
	var_207_int = 6905; // 0x342 PushI
	var_208_int = 6193; // 0x343 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x344 TObjFunc
	var_209_int = 5645; // 0x346 PushI
	var_210_int = 6906; // 0x347 PushI
	var_211_int = 6224; // 0x348 PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x349 TObjFunc
	return 0; // 0x34b Return
	
Label_844:
	var_212_string = ""; // 0x34c PushV
	var_212_string = "Neutral"; // 0x34d MovS
	func_642(var_36_bool, var_212_string); // 0x34e Call
	var_213_int = 8129; // 0x350 PushI
	SetMessage(var_213_int); // 0x351 TObjFunc
	ClearReplies(); // 0x353 TObjFunc
	var_214_bool = 0; // 0x355 PushV
	var_214_bool = 0; // 0x356 MovB
	var_215_bool = 0; var_216_object = Obj(); // 0x357 PushV
	var_216_object = var_1_object; // 0x358 MovT
	func_2893(var_216_object); // 0x359 Call
	if(var_215_bool == 0) goto Label_866; // 0x35b JumpB
	var_221_bool = 0; var_222_object = Obj(); // 0x35c PushV
	var_222_object = var_1_object; // 0x35d MovT
	func_2929(var_222_object); // 0x35e Call
	if(var_221_bool == 0) goto Label_866; // 0x360 JumpB
	var_214_bool = 1; // 0x361 MovB
	
Label_866:
	if(var_214_bool == 0) goto Label_872; // 0x362 JumpB
	var_227_int = 8130; // 0x363 PushI
	var_228_int = 6213; // 0x364 PushI
	var_229_int = 8953; // 0x365 PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x366 TObjFunc
	
Label_872:
	var_230_bool = 0; // 0x368 PushV
	var_230_bool = 1; // 0x369 MovB
	var_231_bool = 0; // 0x36a PushV
	var_231_bool = 0; // 0x36b MovB
	var_232_bool = 0; var_233_object = Obj(); // 0x36c PushV
	var_233_object = var_1_object; // 0x36d MovT
	func_3011(var_232_bool, var_233_object); // 0x36e Call
	if(var_232_bool == 0) goto Label_887; // 0x370 JumpB
	var_247_bool = 0; var_248_object = Obj(); // 0x371 PushV
	var_248_object = var_1_object; // 0x372 MovT
	func_2905(var_248_object); // 0x373 Call
	if(var_247_bool == 0) goto Label_887; // 0x375 JumpB
	var_231_bool = 1; // 0x376 MovB
	
Label_887:
	if(var_231_bool == 0) goto Label_903; // 0x377 JumpB
	var_253_bool = 0; // 0x378 PushV
	var_253_bool = 0; // 0x379 MovB
	var_254_bool = 0; var_255_object = Obj(); // 0x37a PushV
	var_255_object = var_1_object; // 0x37b MovT
	func_3001(var_254_bool, var_255_object); // 0x37c Call
	if(var_254_bool == 0) goto Label_901; // 0x37e JumpB
	var_261_bool = 0; var_262_object = Obj(); // 0x37f PushV
	var_262_object = var_1_object; // 0x380 MovT
	func_2905(var_262_object); // 0x381 Call
	if(var_261_bool == 0) goto Label_901; // 0x383 JumpB
	var_253_bool = 1; // 0x384 MovB
	
Label_901:
	if(var_253_bool == 0) goto Label_903; // 0x385 JumpB
	var_230_bool = 0; // 0x386 MovB
	
Label_903:
	if(var_230_bool == 0) goto Label_909; // 0x387 JumpB
	var_263_int = 8131; // 0x388 PushI
	var_264_int = 6197; // 0x389 PushI
	var_265_int = 8954; // 0x38a PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x38b TObjFunc
	
Label_909:
	var_266_bool = 0; // 0x38d PushV
	var_266_bool = 0; // 0x38e MovB
	var_267_bool = 0; var_268_object = Obj(); // 0x38f PushV
	var_268_object = var_1_object; // 0x390 MovT
	func_3093(var_268_object); // 0x391 Call
	if(var_267_bool == 0) goto Label_922; // 0x393 JumpB
	var_273_bool = 0; var_274_object = Obj(); // 0x394 PushV
	var_274_object = var_1_object; // 0x395 MovT
	func_2941(var_274_object); // 0x396 Call
	if(var_273_bool == 0) goto Label_922; // 0x398 JumpB
	var_266_bool = 1; // 0x399 MovB
	
Label_922:
	if(var_266_bool == 0) goto Label_928; // 0x39a JumpB
	var_279_int = 8133; // 0x39b PushI
	var_280_int = -1; // 0x39c PushI
	var_281_int = 8956; // 0x39d PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x39e TObjFunc
	
Label_928:
	var_282_bool = 0; // 0x3a0 PushV
	var_282_bool = 0; // 0x3a1 MovB
	var_283_bool = 0; var_284_object = Obj(); // 0x3a2 PushV
	var_284_object = var_1_object; // 0x3a3 MovT
	func_3033(var_284_object); // 0x3a4 Call
	if(var_283_bool == 0) goto Label_941; // 0x3a6 JumpB
	var_289_bool = 0; var_290_object = Obj(); // 0x3a7 PushV
	var_290_object = var_1_object; // 0x3a8 MovT
	func_2953(var_290_object); // 0x3a9 Call
	if(var_289_bool == 0) goto Label_941; // 0x3ab JumpB
	var_282_bool = 1; // 0x3ac MovB
	
Label_941:
	if(var_282_bool == 0) goto Label_947; // 0x3ad JumpB
	var_295_int = 8135; // 0x3ae PushI
	var_296_int = 8982; // 0x3af PushI
	var_297_int = 8958; // 0x3b0 PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x3b1 TObjFunc
	
Label_947:
	var_298_bool = 0; // 0x3b3 PushV
	var_298_bool = 0; // 0x3b4 MovB
	var_299_bool = 0; var_300_object = Obj(); // 0x3b5 PushV
	var_300_object = var_1_object; // 0x3b6 MovT
	func_3045(var_300_object); // 0x3b7 Call
	if(var_299_bool == 0) goto Label_960; // 0x3b9 JumpB
	var_305_bool = 0; var_306_object = Obj(); // 0x3ba PushV
	var_306_object = var_1_object; // 0x3bb MovT
	func_2965(var_306_object); // 0x3bc Call
	if(var_305_bool == 0) goto Label_960; // 0x3be JumpB
	var_298_bool = 1; // 0x3bf MovB
	
Label_960:
	if(var_298_bool == 0) goto Label_966; // 0x3c0 JumpB
	var_311_int = 8137; // 0x3c1 PushI
	var_312_int = 8981; // 0x3c2 PushI
	var_313_int = 8960; // 0x3c3 PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x3c4 TObjFunc
	
Label_966:
	var_314_bool = 0; // 0x3c6 PushV
	var_314_bool = 0; // 0x3c7 MovB
	var_315_bool = 0; var_316_object = Obj(); // 0x3c8 PushV
	var_316_object = var_1_object; // 0x3c9 MovT
	func_3057(var_316_object); // 0x3ca Call
	if(var_315_bool == 0) goto Label_979; // 0x3cc JumpB
	var_321_bool = 0; var_322_object = Obj(); // 0x3cd PushV
	var_322_object = var_1_object; // 0x3ce MovT
	func_2977(var_322_object); // 0x3cf Call
	if(var_321_bool == 0) goto Label_979; // 0x3d1 JumpB
	var_314_bool = 1; // 0x3d2 MovB
	
Label_979:
	if(var_314_bool == 0) goto Label_985; // 0x3d3 JumpB
	var_327_int = 8140; // 0x3d4 PushI
	var_328_int = 8980; // 0x3d5 PushI
	var_329_int = 8963; // 0x3d6 PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0x3d7 TObjFunc
	
Label_985:
	var_330_bool = 0; // 0x3d9 PushV
	var_330_bool = 0; // 0x3da MovB
	var_331_bool = 0; var_332_object = Obj(); // 0x3db PushV
	var_332_object = var_1_object; // 0x3dc MovT
	func_3081(var_332_object); // 0x3dd Call
	if(var_331_bool == 0) goto Label_998; // 0x3df JumpB
	var_337_bool = 0; var_338_object = Obj(); // 0x3e0 PushV
	var_338_object = var_1_object; // 0x3e1 MovT
	func_2989(var_338_object); // 0x3e2 Call
	if(var_337_bool == 0) goto Label_998; // 0x3e4 JumpB
	var_330_bool = 1; // 0x3e5 MovB
	
Label_998:
	if(var_330_bool == 0) goto Label_1004; // 0x3e6 JumpB
	var_343_int = 8151; // 0x3e7 PushI
	var_344_int = 8979; // 0x3e8 PushI
	var_345_int = 8974; // 0x3e9 PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0x3ea TObjFunc
	
Label_1004:
	var_346_int = 9147; // 0x3ec PushI
	var_347_int = -1; // 0x3ed PushI
	var_348_int = 10028; // 0x3ee PushI
	AddReply(var_346_int, var_347_int, var_348_int); // 0x3ef TObjFunc
	return 0; // 0x3f1 Return
	
Label_1010:
	var_349_int = 8979; // 0x3f2 PushI
	var_350_bool = var_35_string == var_349_int; // 0x3f3 Eq
	if(var_350_bool == 0) goto Label_1028; // 0x3f4 JumpB
	var_351_string = ""; // 0x3f5 PushV
	var_351_string = "Neutral"; // 0x3f6 MovS
	func_642(var_36_bool, var_351_string); // 0x3f7 Call
	var_352_int = 8156; // 0x3f9 PushI
	SetMessage(var_352_int); // 0x3fa TObjFunc
	ClearReplies(); // 0x3fc TObjFunc
	var_353_int = 8701; // 0x3fe PushI
	var_354_int = -1; // 0x3ff PushI
	var_355_int = 9538; // 0x400 PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0x401 TObjFunc
	return 0; // 0x403 Return
	
Label_1028:
	var_356_int = 8980; // 0x404 PushI
	var_357_bool = var_35_string == var_356_int; // 0x405 Eq
	if(var_357_bool == 0) goto Label_1046; // 0x406 JumpB
	var_358_string = ""; // 0x407 PushV
	var_358_string = "Neutral"; // 0x408 MovS
	func_642(var_36_bool, var_358_string); // 0x409 Call
	var_359_int = 8157; // 0x40b PushI
	SetMessage(var_359_int); // 0x40c TObjFunc
	ClearReplies(); // 0x40e TObjFunc
	var_360_int = 8700; // 0x410 PushI
	var_361_int = -1; // 0x411 PushI
	var_362_int = 9537; // 0x412 PushI
	AddReply(var_360_int, var_361_int, var_362_int); // 0x413 TObjFunc
	return 0; // 0x415 Return
	
Label_1046:
	var_363_int = 8981; // 0x416 PushI
	var_364_bool = var_35_string == var_363_int; // 0x417 Eq
	if(var_364_bool == 0) goto Label_1064; // 0x418 JumpB
	var_365_string = ""; // 0x419 PushV
	var_365_string = "Neutral"; // 0x41a MovS
	func_642(var_36_bool, var_365_string); // 0x41b Call
	var_366_int = 8158; // 0x41d PushI
	SetMessage(var_366_int); // 0x41e TObjFunc
	ClearReplies(); // 0x420 TObjFunc
	var_367_int = 8699; // 0x422 PushI
	var_368_int = -1; // 0x423 PushI
	var_369_int = 9536; // 0x424 PushI
	AddReply(var_367_int, var_368_int, var_369_int); // 0x425 TObjFunc
	return 0; // 0x427 Return
	
Label_1064:
	var_370_int = 8982; // 0x428 PushI
	var_371_bool = var_35_string == var_370_int; // 0x429 Eq
	if(var_371_bool == 0) goto Label_1082; // 0x42a JumpB
	var_372_string = ""; // 0x42b PushV
	var_372_string = "Neutral"; // 0x42c MovS
	func_642(var_36_bool, var_372_string); // 0x42d Call
	var_373_int = 8159; // 0x42f PushI
	SetMessage(var_373_int); // 0x430 TObjFunc
	ClearReplies(); // 0x432 TObjFunc
	var_374_int = 8698; // 0x434 PushI
	var_375_int = -1; // 0x435 PushI
	var_376_int = 9535; // 0x436 PushI
	AddReply(var_374_int, var_375_int, var_376_int); // 0x437 TObjFunc
	return 0; // 0x439 Return
	
Label_1082:
	var_377_int = 6197; // 0x43a PushI
	var_378_bool = var_35_string == var_377_int; // 0x43b Eq
	if(var_378_bool == 0) goto Label_1110; // 0x43c JumpB
	var_379_bool = 0; var_380_object = Obj(); // 0x43d PushV
	var_380_object = var_1_object; // 0x43e MovT
	func_2905(var_380_object); // 0x43f Call
	if(var_379_bool == 0) goto Label_1110; // 0x441 JumpB
	var_381_string = ""; // 0x442 PushV
	var_381_string = "Neutral"; // 0x443 MovS
	func_642(var_36_bool, var_381_string); // 0x444 Call
	var_382_int = 5621; // 0x446 PushI
	SetMessage(var_382_int); // 0x447 TObjFunc
	ClearReplies(); // 0x449 TObjFunc
	var_383_int = 5622; // 0x44b PushI
	var_384_int = 6199; // 0x44c PushI
	var_385_int = 6198; // 0x44d PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0x44e TObjFunc
	var_386_int = 5635; // 0x450 PushI
	var_387_int = 6199; // 0x451 PushI
	var_388_int = 6211; // 0x452 PushI
	AddReply(var_386_int, var_387_int, var_388_int); // 0x453 TObjFunc
	return 0; // 0x455 Return
	
Label_1110:
	var_389_int = 6199; // 0x456 PushI
	var_390_bool = var_35_string == var_389_int; // 0x457 Eq
	if(var_390_bool == 0) goto Label_1133; // 0x458 JumpB
	var_391_string = ""; // 0x459 PushV
	var_391_string = "Neutral"; // 0x45a MovS
	func_642(var_36_bool, var_391_string); // 0x45b Call
	var_392_int = 5623; // 0x45d PushI
	SetMessage(var_392_int); // 0x45e TObjFunc
	ClearReplies(); // 0x460 TObjFunc
	var_393_int = 5624; // 0x462 PushI
	var_394_int = 6201; // 0x463 PushI
	var_395_int = 6200; // 0x464 PushI
	AddReply(var_393_int, var_394_int, var_395_int); // 0x465 TObjFunc
	var_396_int = 5631; // 0x467 PushI
	var_397_int = 6208; // 0x468 PushI
	var_398_int = 6207; // 0x469 PushI
	AddReply(var_396_int, var_397_int, var_398_int); // 0x46a TObjFunc
	return 0; // 0x46c Return
	
Label_1133:
	var_399_int = 6208; // 0x46d PushI
	var_400_bool = var_35_string == var_399_int; // 0x46e Eq
	if(var_400_bool == 0) goto Label_1156; // 0x46f JumpB
	var_401_string = ""; // 0x470 PushV
	var_401_string = "Neutral"; // 0x471 MovS
	func_642(var_36_bool, var_401_string); // 0x472 Call
	var_402_int = 5632; // 0x474 PushI
	SetMessage(var_402_int); // 0x475 TObjFunc
	ClearReplies(); // 0x477 TObjFunc
	var_403_int = 5633; // 0x479 PushI
	var_404_int = -1; // 0x47a PushI
	var_405_int = 6209; // 0x47b PushI
	AddReply(var_403_int, var_404_int, var_405_int); // 0x47c TObjFunc
	var_406_int = 5634; // 0x47e PushI
	var_407_int = -1; // 0x47f PushI
	var_408_int = 6210; // 0x480 PushI
	AddReply(var_406_int, var_407_int, var_408_int); // 0x481 TObjFunc
	return 0; // 0x483 Return
	
Label_1156:
	var_409_int = 6201; // 0x484 PushI
	var_410_bool = var_35_string == var_409_int; // 0x485 Eq
	if(var_410_bool == 0) goto Label_1184; // 0x486 JumpB
	var_411_string = ""; // 0x487 PushV
	var_411_string = "Neutral"; // 0x488 MovS
	func_642(var_36_bool, var_411_string); // 0x489 Call
	var_412_int = 5625; // 0x48b PushI
	SetMessage(var_412_int); // 0x48c TObjFunc
	ClearReplies(); // 0x48e TObjFunc
	var_413_int = 5626; // 0x490 PushI
	var_414_int = -1; // 0x491 PushI
	var_415_int = 6202; // 0x492 PushI
	AddReply(var_413_int, var_414_int, var_415_int); // 0x493 TObjFunc
	var_416_int = 5627; // 0x495 PushI
	var_417_int = -1; // 0x496 PushI
	var_418_int = 6203; // 0x497 PushI
	AddReply(var_416_int, var_417_int, var_418_int); // 0x498 TObjFunc
	var_419_int = 5628; // 0x49a PushI
	var_420_int = 6205; // 0x49b PushI
	var_421_int = 6204; // 0x49c PushI
	AddReply(var_419_int, var_420_int, var_421_int); // 0x49d TObjFunc
	return 0; // 0x49f Return
	
Label_1184:
	var_422_int = 6205; // 0x4a0 PushI
	var_423_bool = var_35_string == var_422_int; // 0x4a1 Eq
	if(var_423_bool == 0) goto Label_1202; // 0x4a2 JumpB
	var_424_string = ""; // 0x4a3 PushV
	var_424_string = "Neutral"; // 0x4a4 MovS
	func_642(var_36_bool, var_424_string); // 0x4a5 Call
	var_425_int = 5629; // 0x4a7 PushI
	SetMessage(var_425_int); // 0x4a8 TObjFunc
	ClearReplies(); // 0x4aa TObjFunc
	var_426_int = 5630; // 0x4ac PushI
	var_427_int = -1; // 0x4ad PushI
	var_428_int = 6206; // 0x4ae PushI
	AddReply(var_426_int, var_427_int, var_428_int); // 0x4af TObjFunc
	return 0; // 0x4b1 Return
	
Label_1202:
	var_429_int = 6213; // 0x4b2 PushI
	var_430_bool = var_35_string == var_429_int; // 0x4b3 Eq
	if(var_430_bool == 0) goto Label_1230; // 0x4b4 JumpB
	var_431_bool = 0; var_432_object = Obj(); // 0x4b5 PushV
	var_432_object = var_1_object; // 0x4b6 MovT
	func_2893(var_432_object); // 0x4b7 Call
	if(var_431_bool == 0) goto Label_1230; // 0x4b9 JumpB
	var_433_string = ""; // 0x4ba PushV
	var_433_string = "Neutral"; // 0x4bb MovS
	func_642(var_36_bool, var_433_string); // 0x4bc Call
	var_434_int = 5636; // 0x4be PushI
	SetMessage(var_434_int); // 0x4bf TObjFunc
	ClearReplies(); // 0x4c1 TObjFunc
	var_435_int = 5637; // 0x4c3 PushI
	var_436_int = 6215; // 0x4c4 PushI
	var_437_int = 6214; // 0x4c5 PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0x4c6 TObjFunc
	var_438_int = 5644; // 0x4c8 PushI
	var_439_int = 6215; // 0x4c9 PushI
	var_440_int = 6222; // 0x4ca PushI
	AddReply(var_438_int, var_439_int, var_440_int); // 0x4cb TObjFunc
	return 0; // 0x4cd Return
	
Label_1230:
	var_441_int = 6215; // 0x4ce PushI
	var_442_bool = var_35_string == var_441_int; // 0x4cf Eq
	if(var_442_bool == 0) goto Label_1253; // 0x4d0 JumpB
	var_443_string = ""; // 0x4d1 PushV
	var_443_string = "Neutral"; // 0x4d2 MovS
	func_642(var_36_bool, var_443_string); // 0x4d3 Call
	var_444_int = 5638; // 0x4d5 PushI
	SetMessage(var_444_int); // 0x4d6 TObjFunc
	ClearReplies(); // 0x4d8 TObjFunc
	var_445_int = 5639; // 0x4da PushI
	var_446_int = 6217; // 0x4db PushI
	var_447_int = 6216; // 0x4dc PushI
	AddReply(var_445_int, var_446_int, var_447_int); // 0x4dd TObjFunc
	var_448_int = 5643; // 0x4df PushI
	var_449_int = 6217; // 0x4e0 PushI
	var_450_int = 6220; // 0x4e1 PushI
	AddReply(var_448_int, var_449_int, var_450_int); // 0x4e2 TObjFunc
	return 0; // 0x4e4 Return
	
Label_1253:
	var_451_int = 6217; // 0x4e5 PushI
	var_452_bool = var_35_string == var_451_int; // 0x4e6 Eq
	if(var_452_bool == 0) goto Label_1276; // 0x4e7 JumpB
	var_453_string = ""; // 0x4e8 PushV
	var_453_string = "Neutral"; // 0x4e9 MovS
	func_642(var_36_bool, var_453_string); // 0x4ea Call
	var_454_int = 5640; // 0x4ec PushI
	SetMessage(var_454_int); // 0x4ed TObjFunc
	ClearReplies(); // 0x4ef TObjFunc
	var_455_int = 5641; // 0x4f1 PushI
	var_456_int = -1; // 0x4f2 PushI
	var_457_int = 6218; // 0x4f3 PushI
	AddReply(var_455_int, var_456_int, var_457_int); // 0x4f4 TObjFunc
	var_458_int = 5642; // 0x4f6 PushI
	var_459_int = -1; // 0x4f7 PushI
	var_460_int = 6219; // 0x4f8 PushI
	AddReply(var_458_int, var_459_int, var_460_int); // 0x4f9 TObjFunc
	return 0; // 0x4fb Return
	
Label_1276:
	var_461_int = 6906; // 0x4fc PushI
	var_462_bool = var_35_string == var_461_int; // 0x4fd Eq
	if(var_462_bool == 0) goto Label_1294; // 0x4fe JumpB
	var_463_string = ""; // 0x4ff PushV
	var_463_string = "Neutral"; // 0x500 MovS
	func_642(var_36_bool, var_463_string); // 0x501 Call
	var_464_int = 6243; // 0x503 PushI
	SetMessage(var_464_int); // 0x504 TObjFunc
	ClearReplies(); // 0x506 TObjFunc
	var_465_int = 6244; // 0x508 PushI
	var_466_int = 6908; // 0x509 PushI
	var_467_int = 6907; // 0x50a PushI
	AddReply(var_465_int, var_466_int, var_467_int); // 0x50b TObjFunc
	return 0; // 0x50d Return
	
Label_1294:
	var_468_int = 6908; // 0x50e PushI
	var_469_bool = var_35_string == var_468_int; // 0x50f Eq
	if(var_469_bool == 0) goto Label_1312; // 0x510 JumpB
	var_470_string = ""; // 0x511 PushV
	var_470_string = "Neutral"; // 0x512 MovS
	func_642(var_36_bool, var_470_string); // 0x513 Call
	var_471_int = 6245; // 0x515 PushI
	SetMessage(var_471_int); // 0x516 TObjFunc
	ClearReplies(); // 0x518 TObjFunc
	var_472_int = 6246; // 0x51a PushI
	var_473_int = 6905; // 0x51b PushI
	var_474_int = 6909; // 0x51c PushI
	AddReply(var_472_int, var_473_int, var_474_int); // 0x51d TObjFunc
	return 0; // 0x51f Return
	
Label_1312:
	var_475_int = 6905; // 0x520 PushI
	var_476_bool = var_35_string == var_475_int; // 0x521 Eq
	if(var_476_bool == 0) goto Label_1330; // 0x522 JumpB
	var_477_string = ""; // 0x523 PushV
	var_477_string = "Neutral"; // 0x524 MovS
	func_642(var_36_bool, var_477_string); // 0x525 Call
	var_478_int = 6242; // 0x527 PushI
	SetMessage(var_478_int); // 0x528 TObjFunc
	ClearReplies(); // 0x52a TObjFunc
	var_479_int = 6247; // 0x52c PushI
	var_480_int = 6912; // 0x52d PushI
	var_481_int = 6911; // 0x52e PushI
	AddReply(var_479_int, var_480_int, var_481_int); // 0x52f TObjFunc
	return 0; // 0x531 Return
	
Label_1330:
	var_482_int = 6912; // 0x532 PushI
	var_483_bool = var_35_string == var_482_int; // 0x533 Eq
	if(var_483_bool == 0) goto Label_1348; // 0x534 JumpB
	var_484_string = ""; // 0x535 PushV
	var_484_string = "Neutral"; // 0x536 MovS
	func_642(var_36_bool, var_484_string); // 0x537 Call
	var_485_int = 6248; // 0x539 PushI
	SetMessage(var_485_int); // 0x53a TObjFunc
	ClearReplies(); // 0x53c TObjFunc
	var_486_int = 6249; // 0x53e PushI
	var_487_int = 6914; // 0x53f PushI
	var_488_int = 6913; // 0x540 PushI
	AddReply(var_486_int, var_487_int, var_488_int); // 0x541 TObjFunc
	return 0; // 0x543 Return
	
Label_1348:
	var_489_int = 6914; // 0x544 PushI
	var_490_bool = var_35_string == var_489_int; // 0x545 Eq
	if(var_490_bool == 0) goto Label_1371; // 0x546 JumpB
	var_491_string = ""; // 0x547 PushV
	var_491_string = "Neutral"; // 0x548 MovS
	func_642(var_36_bool, var_491_string); // 0x549 Call
	var_492_int = 6250; // 0x54b PushI
	SetMessage(var_492_int); // 0x54c TObjFunc
	ClearReplies(); // 0x54e TObjFunc
	var_493_int = 6251; // 0x550 PushI
	var_494_int = -1; // 0x551 PushI
	var_495_int = 6915; // 0x552 PushI
	AddReply(var_493_int, var_494_int, var_495_int); // 0x553 TObjFunc
	var_496_int = 6252; // 0x555 PushI
	var_497_int = -1; // 0x556 PushI
	var_498_int = 6916; // 0x557 PushI
	AddReply(var_496_int, var_497_int, var_498_int); // 0x558 TObjFunc
	return 0; // 0x55a Return
	
Label_1371:
	var_3_string = 1; // 0x55b TMovB
	var_499_bool = 0; // 0x55c PushV
	func_2717(var_499_bool); // 0x55d Call
	if(var_499_bool == 0) goto Label_1379; // 0x55f JumpB
	lshStopAnimation(); // 0x560 Func
	goto Label_1381; // 0x562 Jump
	
Label_1381:
	return 0; // 0x565 Return
	
Label_1379:
	StopAnimation(); // 0x563 Func
	
Label_1383:
	return 0; // 0x567 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0x5f2 PushI
	if(var_37_int == 0) goto Label_1626; // 0x5f3 JumpB
	func_2640(); // 0x5f5 Call
	var_39_int = 10431; // 0x5f7 PushI
	var_40_bool = var_35_string == var_39_int; // 0x5f8 Eq
	if(var_40_bool == 0) goto Label_1550; // 0x5f9 JumpB
	var_41_string = ""; // 0x5fa PushV
	var_41_string = "Neutral"; // 0x5fb MovS
	func_1505(var_36_bool, var_41_string); // 0x5fc Call
	var_56_int = 9489; // 0x5fe PushI
	SetMessage(var_56_int); // 0x5ff TObjFunc
	ClearReplies(); // 0x601 TObjFunc
	var_57_int = 9490; // 0x603 PushI
	var_58_int = 10433; // 0x604 PushI
	var_59_int = 10432; // 0x605 PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0x606 TObjFunc
	var_60_int = 9499; // 0x608 PushI
	var_61_int = 10433; // 0x609 PushI
	var_62_int = 10441; // 0x60a PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0x60b TObjFunc
	return 0; // 0x60d Return
	
Label_1550:
	var_63_int = 10433; // 0x60e PushI
	var_64_bool = var_35_string == var_63_int; // 0x60f Eq
	if(var_64_bool == 0) goto Label_1573; // 0x610 JumpB
	var_65_string = ""; // 0x611 PushV
	var_65_string = "Neutral"; // 0x612 MovS
	func_1505(var_36_bool, var_65_string); // 0x613 Call
	var_66_int = 9491; // 0x615 PushI
	SetMessage(var_66_int); // 0x616 TObjFunc
	ClearReplies(); // 0x618 TObjFunc
	var_67_int = 9492; // 0x61a PushI
	var_68_int = 10435; // 0x61b PushI
	var_69_int = 10434; // 0x61c PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0x61d TObjFunc
	var_70_int = 9496; // 0x61f PushI
	var_71_int = 10439; // 0x620 PushI
	var_72_int = 10438; // 0x621 PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0x622 TObjFunc
	return 0; // 0x624 Return
	
Label_1573:
	var_73_int = 10439; // 0x625 PushI
	var_74_bool = var_35_string == var_73_int; // 0x626 Eq
	if(var_74_bool == 0) goto Label_1591; // 0x627 JumpB
	var_75_string = ""; // 0x628 PushV
	var_75_string = "Neutral"; // 0x629 MovS
	func_1505(var_36_bool, var_75_string); // 0x62a Call
	var_76_int = 9497; // 0x62c PushI
	SetMessage(var_76_int); // 0x62d TObjFunc
	ClearReplies(); // 0x62f TObjFunc
	var_77_int = 9498; // 0x631 PushI
	var_78_int = -1; // 0x632 PushI
	var_79_int = 10440; // 0x633 PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0x634 TObjFunc
	return 0; // 0x636 Return
	
Label_1591:
	var_80_int = 10435; // 0x637 PushI
	var_81_bool = var_35_string == var_80_int; // 0x638 Eq
	if(var_81_bool == 0) goto Label_1614; // 0x639 JumpB
	var_82_string = ""; // 0x63a PushV
	var_82_string = "Neutral"; // 0x63b MovS
	func_1505(var_36_bool, var_82_string); // 0x63c Call
	var_83_int = 9493; // 0x63e PushI
	SetMessage(var_83_int); // 0x63f TObjFunc
	ClearReplies(); // 0x641 TObjFunc
	var_84_int = 9494; // 0x643 PushI
	var_85_int = -1; // 0x644 PushI
	var_86_int = 10436; // 0x645 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x646 TObjFunc
	var_87_int = 9495; // 0x648 PushI
	var_88_int = -1; // 0x649 PushI
	var_89_int = 10437; // 0x64a PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x64b TObjFunc
	return 0; // 0x64d Return
	
Label_1614:
	var_3_string = 1; // 0x64e TMovB
	var_90_bool = 0; // 0x64f PushV
	func_2717(var_90_bool); // 0x650 Call
	if(var_90_bool == 0) goto Label_1622; // 0x652 JumpB
	lshStopAnimation(); // 0x653 Func
	goto Label_1624; // 0x655 Jump
	
Label_1624:
	return 0; // 0x658 Return
	
Label_1622:
	StopAnimation(); // 0x656 Func
	
Label_1626:
	return 0; // 0x65a Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0x6fe PushI
	if(var_37_int == 0) goto Label_1906; // 0x6ff JumpB
	func_2640(); // 0x701 Call
	var_39_int = 11014; // 0x703 PushI
	var_40_bool = var_35_string == var_39_int; // 0x704 Eq
	if(var_40_bool == 0) goto Label_1843; // 0x705 JumpB
	var_41_bool = 0; var_42_object = Obj(); // 0x706 PushV
	var_42_object = var_1_object; // 0x707 MovT
	func_3069(var_42_object); // 0x708 Call
	if(var_41_bool == 0) goto Label_1828; // 0x70a JumpB
	var_49_object = Obj(); var_50_object = Obj(); // 0x70b PushV
	var_49_object = var_1_object; // 0x70c MovT
	var_50_object = var_0_object; // 0x70d MovT
	func_2875(); // 0x70e Call
	var_53_string = ""; // 0x710 PushV
	var_53_string = "Neutral"; // 0x711 MovS
	func_1773(var_36_bool, var_53_string); // 0x712 Call
	var_68_int = 9993; // 0x714 PushI
	SetMessage(var_68_int); // 0x715 TObjFunc
	ClearReplies(); // 0x717 TObjFunc
	var_69_int = 9994; // 0x719 PushI
	var_70_int = 11016; // 0x71a PushI
	var_71_int = 11015; // 0x71b PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0x71c TObjFunc
	var_72_int = 10002; // 0x71e PushI
	var_73_int = 11016; // 0x71f PushI
	var_74_int = 11023; // 0x720 PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0x721 TObjFunc
	return 0; // 0x723 Return
	
Label_1828:
	var_75_string = ""; // 0x724 PushV
	var_75_string = "Neutral"; // 0x725 MovS
	func_1773(var_36_bool, var_75_string); // 0x726 Call
	var_76_int = 15316; // 0x728 PushI
	SetMessage(var_76_int); // 0x729 TObjFunc
	ClearReplies(); // 0x72b TObjFunc
	var_77_int = 15317; // 0x72d PushI
	var_78_int = -1; // 0x72e PushI
	var_79_int = 16555; // 0x72f PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0x730 TObjFunc
	return 0; // 0x732 Return
	
Label_1843:
	var_80_int = 11016; // 0x733 PushI
	var_81_bool = var_35_string == var_80_int; // 0x734 Eq
	if(var_81_bool == 0) goto Label_1871; // 0x735 JumpB
	var_82_string = ""; // 0x736 PushV
	var_82_string = "Neutral"; // 0x737 MovS
	func_1773(var_36_bool, var_82_string); // 0x738 Call
	var_83_int = 9995; // 0x73a PushI
	SetMessage(var_83_int); // 0x73b TObjFunc
	ClearReplies(); // 0x73d TObjFunc
	var_84_int = 9996; // 0x73f PushI
	var_85_int = -1; // 0x740 PushI
	var_86_int = 11017; // 0x741 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x742 TObjFunc
	var_87_int = 9997; // 0x744 PushI
	var_88_int = -1; // 0x745 PushI
	var_89_int = 11018; // 0x746 PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x747 TObjFunc
	var_90_int = 9998; // 0x749 PushI
	var_91_int = 11020; // 0x74a PushI
	var_92_int = 11019; // 0x74b PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x74c TObjFunc
	return 0; // 0x74e Return
	
Label_1871:
	var_93_int = 11020; // 0x74f PushI
	var_94_bool = var_35_string == var_93_int; // 0x750 Eq
	if(var_94_bool == 0) goto Label_1894; // 0x751 JumpB
	var_95_string = ""; // 0x752 PushV
	var_95_string = "Neutral"; // 0x753 MovS
	func_1773(var_36_bool, var_95_string); // 0x754 Call
	var_96_int = 9999; // 0x756 PushI
	SetMessage(var_96_int); // 0x757 TObjFunc
	ClearReplies(); // 0x759 TObjFunc
	var_97_int = 10000; // 0x75b PushI
	var_98_int = -1; // 0x75c PushI
	var_99_int = 11021; // 0x75d PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x75e TObjFunc
	var_100_int = 10001; // 0x760 PushI
	var_101_int = -1; // 0x761 PushI
	var_102_int = 11022; // 0x762 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x763 TObjFunc
	return 0; // 0x765 Return
	
Label_1894:
	var_3_string = 1; // 0x766 TMovB
	var_103_bool = 0; // 0x767 PushV
	func_2717(var_103_bool); // 0x768 Call
	if(var_103_bool == 0) goto Label_1902; // 0x76a JumpB
	lshStopAnimation(); // 0x76b Func
	goto Label_1904; // 0x76d Jump
	
Label_1904:
	return 0; // 0x770 Return
	
Label_1902:
	StopAnimation(); // 0x76e Func
	
Label_1906:
	return 0; // 0x772 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0x7f8 PushI
	if(var_37_int == 0) goto Label_2075; // 0x7f9 JumpB
	func_2640(); // 0x7fb Call
	var_39_int = 12066; // 0x7fd PushI
	var_40_bool = var_35_string == var_39_int; // 0x7fe Eq
	if(var_40_bool == 0) goto Label_2063; // 0x7ff JumpB
	var_41_string = ""; // 0x800 PushV
	var_41_string = "Neutral"; // 0x801 MovS
	func_2023(var_36_bool, var_41_string); // 0x802 Call
	var_56_int = 10917; // 0x804 PushI
	SetMessage(var_56_int); // 0x805 TObjFunc
	ClearReplies(); // 0x807 TObjFunc
	var_57_int = 10918; // 0x809 PushI
	var_58_int = -1; // 0x80a PushI
	var_59_int = 12067; // 0x80b PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0x80c TObjFunc
	return 0; // 0x80e Return
	
Label_2063:
	var_3_string = 1; // 0x80f TMovB
	var_60_bool = 0; // 0x810 PushV
	func_2717(var_60_bool); // 0x811 Call
	if(var_60_bool == 0) goto Label_2071; // 0x813 JumpB
	lshStopAnimation(); // 0x814 Func
	goto Label_2073; // 0x816 Jump
	
Label_2073:
	return 0; // 0x819 Return
	
Label_2071:
	StopAnimation(); // 0x817 Func
	
Label_2075:
	return 0; // 0x81b Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0x8ab PushI
	if(var_37_int == 0) goto Label_2367; // 0x8ac JumpB
	func_2640(); // 0x8ae Call
	var_39_int = 14570; // 0x8b0 PushI
	var_40_bool = var_36_bool == var_39_int; // 0x8b1 Eq
	if(var_40_bool == 0) goto Label_2232; // 0x8b2 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0x8b3 PushV
	var_41_object = var_1_object; // 0x8b4 MovT
	var_42_object = var_0_object; // 0x8b5 MovT
	func_2814(); // 0x8b6 Call
	
Label_2232:
	var_114_int = 14547; // 0x8b8 PushI
	var_115_bool = var_35_string == var_114_int; // 0x8b9 Eq
	if(var_115_bool == 0) goto Label_2260; // 0x8ba JumpB
	var_116_string = ""; // 0x8bb PushV
	var_116_string = "Neutral"; // 0x8bc MovS
	func_2202(var_36_bool, var_116_string); // 0x8bd Call
	var_131_int = 13312; // 0x8bf PushI
	SetMessage(var_131_int); // 0x8c0 TObjFunc
	ClearReplies(); // 0x8c2 TObjFunc
	var_132_bool = 0; var_133_object = Obj(); // 0x8c4 PushV
	var_133_object = var_1_object; // 0x8c5 MovT
	func_3021(var_133_object); // 0x8c6 Call
	if(var_132_bool == 0) goto Label_2254; // 0x8c8 JumpB
	var_140_int = 13314; // 0x8c9 PushI
	var_141_int = 14550; // 0x8ca PushI
	var_142_int = 14549; // 0x8cb PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x8cc TObjFunc
	
Label_2254:
	var_143_int = 13313; // 0x8ce PushI
	var_144_int = -1; // 0x8cf PushI
	var_145_int = 14548; // 0x8d0 PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x8d1 TObjFunc
	return 0; // 0x8d3 Return
	
Label_2260:
	var_146_int = 14550; // 0x8d4 PushI
	var_147_bool = var_35_string == var_146_int; // 0x8d5 Eq
	if(var_147_bool == 0) goto Label_2283; // 0x8d6 JumpB
	var_148_string = ""; // 0x8d7 PushV
	var_148_string = "Neutral"; // 0x8d8 MovS
	func_2202(var_36_bool, var_148_string); // 0x8d9 Call
	var_149_int = 13315; // 0x8db PushI
	SetMessage(var_149_int); // 0x8dc TObjFunc
	ClearReplies(); // 0x8de TObjFunc
	var_150_int = 13317; // 0x8e0 PushI
	var_151_int = 14553; // 0x8e1 PushI
	var_152_int = 14552; // 0x8e2 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x8e3 TObjFunc
	var_153_int = 13316; // 0x8e5 PushI
	var_154_int = 14555; // 0x8e6 PushI
	var_155_int = 14551; // 0x8e7 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x8e8 TObjFunc
	return 0; // 0x8ea Return
	
Label_2283:
	var_156_int = 14553; // 0x8eb PushI
	var_157_bool = var_35_string == var_156_int; // 0x8ec Eq
	if(var_157_bool == 0) goto Label_2301; // 0x8ed JumpB
	var_158_string = ""; // 0x8ee PushV
	var_158_string = "Neutral"; // 0x8ef MovS
	func_2202(var_36_bool, var_158_string); // 0x8f0 Call
	var_159_int = 13318; // 0x8f2 PushI
	SetMessage(var_159_int); // 0x8f3 TObjFunc
	ClearReplies(); // 0x8f5 TObjFunc
	var_160_int = 13319; // 0x8f7 PushI
	var_161_int = 14555; // 0x8f8 PushI
	var_162_int = 14554; // 0x8f9 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x8fa TObjFunc
	return 0; // 0x8fc Return
	
Label_2301:
	var_163_int = 14555; // 0x8fd PushI
	var_164_bool = var_35_string == var_163_int; // 0x8fe Eq
	if(var_164_bool == 0) goto Label_2319; // 0x8ff JumpB
	var_165_string = ""; // 0x900 PushV
	var_165_string = "Neutral"; // 0x901 MovS
	func_2202(var_36_bool, var_165_string); // 0x902 Call
	var_166_int = 13320; // 0x904 PushI
	SetMessage(var_166_int); // 0x905 TObjFunc
	ClearReplies(); // 0x907 TObjFunc
	var_167_int = 13335; // 0x909 PushI
	var_168_int = 14567; // 0x90a PushI
	var_169_int = 14566; // 0x90b PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x90c TObjFunc
	return 0; // 0x90e Return
	
Label_2319:
	var_170_int = 14567; // 0x90f PushI
	var_171_bool = var_35_string == var_170_int; // 0x910 Eq
	if(var_171_bool == 0) goto Label_2337; // 0x911 JumpB
	var_172_string = ""; // 0x912 PushV
	var_172_string = "Neutral"; // 0x913 MovS
	func_2202(var_36_bool, var_172_string); // 0x914 Call
	var_173_int = 13336; // 0x916 PushI
	SetMessage(var_173_int); // 0x917 TObjFunc
	ClearReplies(); // 0x919 TObjFunc
	var_174_int = 13337; // 0x91b PushI
	var_175_int = 14569; // 0x91c PushI
	var_176_int = 14568; // 0x91d PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x91e TObjFunc
	return 0; // 0x920 Return
	
Label_2337:
	var_177_int = 14569; // 0x921 PushI
	var_178_bool = var_35_string == var_177_int; // 0x922 Eq
	if(var_178_bool == 0) goto Label_2355; // 0x923 JumpB
	var_179_string = ""; // 0x924 PushV
	var_179_string = "Neutral"; // 0x925 MovS
	func_2202(var_36_bool, var_179_string); // 0x926 Call
	var_180_int = 13338; // 0x928 PushI
	SetMessage(var_180_int); // 0x929 TObjFunc
	ClearReplies(); // 0x92b TObjFunc
	var_181_int = 13339; // 0x92d PushI
	var_182_int = -1; // 0x92e PushI
	var_183_int = 14570; // 0x92f PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x930 TObjFunc
	return 0; // 0x932 Return
	
Label_2355:
	var_3_string = 1; // 0x933 TMovB
	var_184_bool = 0; // 0x934 PushV
	func_2717(var_184_bool); // 0x935 Call
	if(var_184_bool == 0) goto Label_2363; // 0x937 JumpB
	lshStopAnimation(); // 0x938 Func
	goto Label_2365; // 0x93a Jump
	
Label_2365:
	return 0; // 0x93d Return
	
Label_2363:
	StopAnimation(); // 0x93b Func
	
Label_2367:
	return 0; // 0x93f Return
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int)
{
	var_37_int = 1; // 0x9c5 PushI
	if(var_37_int == 0) goto Label_2544; // 0x9c6 JumpB
	func_2640(); // 0x9c8 Call
	var_39_int = 15322; // 0x9ca PushI
	var_40_bool = var_36_int == var_39_int; // 0x9cb Eq
	if(var_40_bool == 0) goto Label_2514; // 0x9cc JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0x9cd PushV
	var_41_object = var_1_object; // 0x9ce MovT
	var_42_object = var_0_object; // 0x9cf MovT
	func_2864(); // 0x9d0 Call
	
Label_2514:
	var_44_int = 15321; // 0x9d2 PushI
	var_45_bool = var_35_int == var_44_int; // 0x9d3 Eq
	if(var_45_bool == 0) goto Label_2532; // 0x9d4 JumpB
	var_46_string = ""; // 0x9d5 PushV
	var_46_string = "Neutral"; // 0x9d6 MovS
	func_2484(var_36_int, var_46_string); // 0x9d7 Call
	var_61_int = 14084; // 0x9d9 PushI
	SetMessage(var_61_int); // 0x9da TObjFunc
	ClearReplies(); // 0x9dc TObjFunc
	var_62_int = 14085; // 0x9de PushI
	var_63_int = -1; // 0x9df PushI
	var_64_int = 15322; // 0x9e0 PushI
	AddReply(var_62_int, var_63_int, var_64_int); // 0x9e1 TObjFunc
	return 0; // 0x9e3 Return
	
Label_2532:
	var_3_string = 1; // 0x9e4 TMovB
	var_65_bool = 0; // 0x9e5 PushV
	func_2717(var_65_bool); // 0x9e6 Call
	if(var_65_bool == 0) goto Label_2540; // 0x9e8 JumpB
	lshStopAnimation(); // 0x9e9 Func
	goto Label_2542; // 0x9eb Jump
	
Label_2542:
	return 0; // 0x9ee Return
	
Label_2540:
	StopAnimation(); // 0x9ec Func
	
Label_2544:
	return 0; // 0x9f0 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool)
{
	func_3278(); // 0x7 Call
	var_44_bool = 0; // 0x9 PushV
	func_2557(var_44_bool); // 0xa Call
	var_47_bool = var_44_bool == 0; // 0xc Not
	if(var_47_bool == 0) goto Label_19; // 0xd JumpB
	TaskCall(0); // 0xf TaskCall
	func_0(); // 0x10 Call
	TaskReturn(); // 0x11 TaskReturn
	
Label_19:
	var_48_string = ""; // 0x13 PushV
	var_48_string = "Neutral"; // 0x14 MovS
	func_2622(var_48_string); // 0x15 Call
	lshWaitForAnimEnd(); // 0x17 Func
	goto Label_19; // 0x19 Jump
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_2562(var_50_bool)
{
	var_52_float = 0; var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_bool = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_bool = 0; // 0xa02 PushV
	GetPosition(var_61_cvector); // 0xa03 ObjFunc
	GetEyesHeight(var_60_float); // 0xa05 ObjFunc
	var_68_float = GetByIndex(var_61_cvector, 1); // 0xa07 PushE
	var_68_float = var_68_float + var_60_float; // 0xa08 Add2
	SetByIndex(var_61_cvector, 1) = var_68_float; // 0xa09 PopE
	GetPosition(var_62_cvector); // 0xa0a Func
	GetEyesHeight(var_60_float); // 0xa0c Func
	var_69_float = GetByIndex(var_62_cvector, 1); // 0xa0e PushE
	var_69_float = var_69_float + var_60_float; // 0xa0f Add2
	SetByIndex(var_62_cvector, 1) = var_69_float; // 0xa10 PopE
	var_63_cvector = var_61_cvector - var_62_cvector; // 0xa11 Sub2
	var_70_float = GetByIndex(var_63_cvector, 1); // 0xa12 PushE
	var_70_float = 0; // 0xa13 MovI
	SetByIndex(var_63_cvector, 1) = var_70_float; // 0xa14 PopE
	var_71_int = var_63_cvector | var_63_cvector; // 0xa15 Or
	var_72_float = sqrt(var_71_int); // 0xa16 Sqrt
	var_63_cvector = var_63_cvector / var_63_cvector; // 0xa17 Div2
	var_64_cvector = -var_63_cvector; // 0xa18 Neg2
	var_73_int = 70; // 0xa19 PushI
	var_74_float = var_63_cvector * var_73_int; // 0xa1a Mult
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); // 0xa1b PushV
	var_77_cvector = CVector(0.0, 1.0, 0.0); // 0xa1c PushVec
	var_76_cvector = var_64_cvector ^ var_77_cvector; // 0xa1d Xor2
	func_2647(var_75_cvector, var_76_cvector); // 0xa1e Call
	var_83_int = 25; // 0xa20 PushI
	var_84_float = var_75_cvector * var_83_int; // 0xa21 Mult
	var_85_int = var_74_float + var_84_float; // 0xa22 Add
	var_86_cvector = CVector(0.0, 10.0, 0.0); // 0xa23 PushVec
	var_65_cvector = var_85_int - var_86_cvector; // 0xa24 Sub2
	var_66_cvector = var_62_cvector + var_65_cvector; // 0xa25 Add2
	IsOverrideActive(var_67_bool); // 0xa26 Func
	var_87_bool = var_67_bool; // 0xa28 Push
	if(var_87_bool == 0) goto Label_2604; // 0xa29 JumpB
	var_50_bool = 0; // 0xa2a MovB
	return 16; // 0xa2b Return
	
Label_2604:
	StopWorld(); // 0xa2c Func
	CameraTransit(var_66_cvector, var_64_cvector); // 0xa2e Func
	var_88_float = GetByIndex(var_65_cvector, 0); // 0xa30 PushE
	var_89_float = GetByIndex(var_65_cvector, 2); // 0xa31 PushE
	Rotate(var_88_float, var_89_float); // 0xa32 Func
	CameraWaitForPlayFinish(); // 0xa34 Func
	ResumeWorld(); // 0xa36 Func
	var_50_bool = 1; // 0xa38 MovB
	return 16; // 0xa39 Return
}


func_3081(var_331_bool)
{
	var_333_int = 0; var_334_string = ""; // 0xc0a PushV
	var_334_string = "KnowKapella"; // 0xc0b MovS
	func_2657(var_333_int, var_334_string); // 0xc0c Call
	var_335_int = 1; // 0xc0e PushI
	var_336_bool = var_333_int == var_335_int; // 0xc0f Eq
	if(var_336_bool == 0) goto Label_3091; // 0xc10 JumpB
	var_331_bool = 1; // 0xc11 MovB
	return 0; // 0xc12 Return
	
Label_3091:
	var_331_bool = 0; // 0xc13 MovB
	return 0; // 0xc14 Return
}


func_3340()
{
	var_227_int = 0; var_228_int = 0; var_229_int = 0; var_230_int = 0; // 0xd0c PushV
	var_231_int = 0; // 0xd0d PushV
	func_3295(var_231_int); // 0xd0e Call
	var_229_int = var_231_int; // 0xd0f Mov
	var_232_string = "Performance"; // 0xd11 PushS
	var_233_int = var_232_string + var_229_int; // 0xd12 Add
	var_234_int = 1; // 0xd13 PushI
	SetVariable(var_233_int, var_234_int); // 0xd14 Func
	return 4; // 0xd16 Return
}


func_3093(var_267_bool)
{
	var_269_int = 0; var_270_string = ""; // 0xc16 PushV
	var_270_string = "KnowMyth"; // 0xc17 MovS
	func_2657(var_269_int, var_270_string); // 0xc18 Call
	var_271_int = 1; // 0xc1a PushI
	var_272_bool = var_269_int == var_271_int; // 0xc1b Eq
	if(var_272_bool == 0) goto Label_3103; // 0xc1c JumpB
	var_267_bool = 1; // 0xc1d MovB
	return 0; // 0xc1e Return
	
Label_3103:
	var_267_bool = 0; // 0xc1f MovB
	return 0; // 0xc20 Return
}


func_3351(var_36_object)
{
	var_37_bool = GlobalVars[1]; // 0xd18 PushGE
	var_38_bool = var_37_bool == 0; // 0xd19 Not
	if(var_38_bool == 0) goto Label_3364; // 0xd1a JumpB
	var_39_int = 0; var_40_object = Obj(); // 0xd1b PushV
	var_40_object = var_36_object; // 0xd1c Mov
	TaskCall(2); // 0xd1d TaskCall
	func_49(var_41_object, var_39_int, var_40_object); // 0xd1e Call
	TaskReturn(); // 0xd1f TaskReturn
	var_145_bool = GlobalVars[1]; // 0xd21 PushGE
	var_145_bool = 1; // 0xd22 MovB
	GlobalVars[1] = var_145_bool; // 0xd23 PopGE
	
Label_3364:
	var_146_bool = 0; // 0xd24 PushV
	func_3310(var_146_bool); // 0xd25 Call
	if(var_146_bool == 0) goto Label_3387; // 0xd27 JumpB
	var_178_int = 0; var_179_object = Obj(); // 0xd28 PushV
	var_179_object = var_36_object; // 0xd29 Mov
	TaskCall(14); // 0xd2a TaskCall
	func_2368(var_180_object, var_178_int, var_179_object); // 0xd2b Call
	TaskReturn(); // 0xd2c TaskReturn
	var_222_string = "NightMasks"; // 0xd2e PushS
	var_223_int = 0; // 0xd2f PushV
	func_3295(var_223_int); // 0xd30 Call
	var_224_int = var_222_string + var_223_int; // 0xd32 Add
	var_225_string = ".wmv"; // 0xd33 PushS
	var_226_int = var_224_int + var_225_string; // 0xd34 Add
	PlayMovie(var_226_int); // 0xd35 Func
	func_3340(); // 0xd38 Call
	return 0; // 0xd3a Return
	
Label_3387:
	var_235_bool = 0; var_236_int = 0; // 0xd3b PushV
	var_236_int = 1; // 0xd3c MovI
	func_2707(var_235_bool, var_236_int); // 0xd3d Call
	if(var_235_bool == 0) goto Label_3399; // 0xd3f JumpB
	var_238_int = 0; var_239_object = Obj(); // 0xd40 PushV
	var_239_object = var_36_object; // 0xd41 Mov
	TaskCall(4); // 0xd42 TaskCall
	func_330(var_240_object, var_238_int, var_239_object); // 0xd43 Call
	TaskReturn(); // 0xd44 TaskReturn
	return 0; // 0xd46 Return
	
Label_3399:
	var_442_bool = 0; var_443_int = 0; // 0xd47 PushV
	var_443_int = 2; // 0xd48 MovI
	func_2707(var_442_bool, var_443_int); // 0xd49 Call
	if(var_442_bool == 0) goto Label_3411; // 0xd4b JumpB
	var_444_int = 0; var_445_object = Obj(); // 0xd4c PushV
	var_445_object = var_36_object; // 0xd4d Mov
	TaskCall(6); // 0xd4e TaskCall
	func_1384(var_446_object, var_444_int, var_445_object); // 0xd4f Call
	TaskReturn(); // 0xd50 TaskReturn
	return 0; // 0xd52 Return
	
Label_3411:
	var_491_bool = 0; var_492_int = 0; // 0xd53 PushV
	var_492_int = 3; // 0xd54 MovI
	func_2707(var_491_bool, var_492_int); // 0xd55 Call
	if(var_491_bool == 0) goto Label_3423; // 0xd57 JumpB
	var_493_int = 0; var_494_object = Obj(); // 0xd58 PushV
	var_494_object = var_36_object; // 0xd59 Mov
	TaskCall(8); // 0xd5a TaskCall
	func_1627(var_495_object, var_493_int, var_494_object); // 0xd5b Call
	TaskReturn(); // 0xd5c TaskReturn
	return 0; // 0xd5e Return
	
Label_3423:
	var_555_bool = 0; var_556_int = 0; // 0xd5f PushV
	var_556_int = 4; // 0xd60 MovI
	func_2707(var_555_bool, var_556_int); // 0xd61 Call
	if(var_555_bool == 0) goto Label_3435; // 0xd63 JumpB
	var_557_int = 0; var_558_object = Obj(); // 0xd64 PushV
	var_558_object = var_36_object; // 0xd65 Mov
	TaskCall(10); // 0xd66 TaskCall
	func_1907(var_559_object, var_557_int, var_558_object); // 0xd67 Call
	TaskReturn(); // 0xd68 TaskReturn
	return 0; // 0xd6a Return
	
Label_3435:
	var_601_bool = 0; var_602_int = 0; // 0xd6b PushV
	var_602_int = 7; // 0xd6c MovI
	func_2707(var_601_bool, var_602_int); // 0xd6d Call
	if(var_601_bool == 0) goto Label_3447; // 0xd6f JumpB
	var_603_int = 0; var_604_object = Obj(); // 0xd70 PushV
	var_604_object = var_36_object; // 0xd71 Mov
	TaskCall(12); // 0xd72 TaskCall
	func_2076(var_605_object, var_603_int, var_604_object); // 0xd73 Call
	TaskReturn(); // 0xd74 TaskReturn
	return 0; // 0xd76 Return
	
Label_3447:
	return 0; // 0xd77 Return
}


func_2076(var_0_object, var_603_int, var_604_object)
{
	var_606_object = Obj(); var_607_bool = 0; var_608_int = 0; var_609_bool = 0; var_610_object = Obj(); var_611_bool = 0; var_612_int = 0; var_613_bool = 0; // 0x81c PushV
	var_0_object = var_604_object; // 0x81d TMov
	var_614_bool = 0; var_615_object = Obj(); // 0x81e PushV
	var_615_object = var_604_object; // 0x81f Mov
	func_2562(var_615_object); // 0x820 Call
	var_616_bool = var_614_bool == 0; // 0x822 Not
	if(var_616_bool == 0) goto Label_2086; // 0x823 JumpB
	var_603_int = -2; // 0x824 MovI
	return 8; // 0x825 Return
	
Label_2086:
	CreateDialog(var_610_object); // 0x826 Func
	var_617_int = 0; // 0x828 PushV
	func_2713(var_617_int); // 0x829 Call
	SetNPCName(var_617_int); // 0x82b ObjFunc
	var_618_string = ""; // 0x82d PushV
	func_2715(var_618_string); // 0x82e Call
	SetPhoto(var_618_string); // 0x830 ObjFunc
	var_619_int = 0; // 0x832 PushV
	func_3229(var_619_int); // 0x833 Call
	SetPlayerName(var_619_int); // 0x835 ObjFunc
	var_612_int = -1; // 0x837 MovI
	IsOverrideActive(var_611_bool); // 0x838 Func
	var_620_bool = var_611_bool; // 0x83a Push
	if(var_620_bool == 0) goto Label_2110; // 0x83b JumpB
	var_603_int = -2; // 0x83c MovI
	return 8; // 0x83d Return
	
Label_2110:
	DoDialog(var_610_object); // 0x83e Func
	var_621_object = Obj(); var_622_object = Obj(); // 0x840 PushV
	var_621_object = var_604_object; // 0x841 Mov
	var_622_object = var_610_object; // 0x842 Mov
	TaskCall(13); // 0x843 TaskCall
	func_2139(var_623_object, var_624_object, var_625_string, var_626_bool, var_621_object, var_622_object); // 0x844 Call
	TaskReturn(); // 0x845 TaskReturn
	IsDialogEnd(var_613_bool); // 0x847 ObjFunc
	
Label_2121:
	var_654_bool = var_613_bool == 0; // 0x849 Not
	if(var_654_bool == 0) goto Label_2128; // 0x84a JumpB
	sync(); // 0x84b Func
	IsDialogEnd(var_613_bool); // 0x84d ObjFunc
	goto Label_2121; // 0x84f Jump
	
Label_2128:
	var_655_object = Obj(); // 0x850 PushV
	var_655_object = var_604_object; // 0x851 Mov
	func_2618(); // 0x852 Call
	StopDialog(var_610_object); // 0x854 Func
	GetReturnValue(var_612_int); // 0x856 ObjFunc
	var_603_int = var_612_int; // 0x858 Mov
	return 8; // 0x859 Return
}


func_3105(var_256_bool)
{
	var_258_int = 0; // 0xc22 PushV
	func_2699(var_258_int); // 0xc23 Call
	var_259_int = 18; // 0xc25 PushI
	var_260_bool = var_258_int >= var_259_int; // 0xc26 GE
	if(var_260_bool == 0) goto Label_3114; // 0xc27 JumpB
	var_256_bool = 1; // 0xc28 MovB
	return 0; // 0xc29 Return
	
Label_3114:
	var_256_bool = 0; // 0xc2a MovB
	return 0; // 0xc2b Return
}


func_2858()
{
	var_184_string = "KnowLara"; // 0xb2b PushS
	var_185_int = 1; // 0xb2c PushI
	SetVariable(var_184_string, var_185_int); // 0xb2d Func
	return 0; // 0xb2f Return
}


func_3116(var_234_bool)
{
	var_236_bool = 0; // 0xc2d PushV
	var_236_bool = 0; // 0xc2e MovB
	var_237_int = 0; // 0xc2f PushV
	func_2699(var_237_int); // 0xc30 Call
	var_242_int = 12; // 0xc32 PushI
	var_243_bool = var_237_int >= var_242_int; // 0xc33 GE
	if(var_243_bool == 0) goto Label_3132; // 0xc34 JumpB
	var_244_int = 0; // 0xc35 PushV
	func_2699(var_244_int); // 0xc36 Call
	var_245_int = 18; // 0xc38 PushI
	var_246_bool = var_244_int < var_245_int; // 0xc39 LT
	if(var_246_bool == 0) goto Label_3132; // 0xc3a JumpB
	var_236_bool = 1; // 0xc3b MovB
	
Label_3132:
	if(var_236_bool == 0) goto Label_3135; // 0xc3c JumpB
	var_234_bool = 1; // 0xc3d MovB
	return 0; // 0xc3e Return
	
Label_3135:
	var_234_bool = 0; // 0xc3f MovB
	return 0; // 0xc40 Return
}


func_2864()
{
	var_43_int = 1000; // 0xb31 PushI
	SetReturnValue(var_43_int); // 0xb32 ObjFunc
	return 0; // 0xb34 Return
}


func_49(var_0_object, var_39_int, var_40_object)
{
	var_42_object = Obj(); var_43_bool = 0; var_44_int = 0; var_45_bool = 0; var_46_object = Obj(); var_47_bool = 0; var_48_int = 0; var_49_bool = 0; // 0x31 PushV
	var_0_object = var_40_object; // 0x32 TMov
	var_50_bool = 0; var_51_object = Obj(); // 0x33 PushV
	var_51_object = var_40_object; // 0x34 Mov
	func_2562(var_51_object); // 0x35 Call
	var_90_bool = var_50_bool == 0; // 0x37 Not
	if(var_90_bool == 0) goto Label_59; // 0x38 JumpB
	var_39_int = -2; // 0x39 MovI
	return 8; // 0x3a Return
	
Label_59:
	CreateDialog(var_46_object); // 0x3b Func
	var_91_int = 0; // 0x3d PushV
	func_2713(var_91_int); // 0x3e Call
	SetNPCName(var_91_int); // 0x40 ObjFunc
	var_92_string = ""; // 0x42 PushV
	func_2715(var_92_string); // 0x43 Call
	SetPhoto(var_92_string); // 0x45 ObjFunc
	var_93_int = 0; // 0x47 PushV
	func_3229(var_93_int); // 0x48 Call
	SetPlayerName(var_93_int); // 0x4a ObjFunc
	var_48_int = -1; // 0x4c MovI
	IsOverrideActive(var_47_bool); // 0x4d Func
	var_101_bool = var_47_bool; // 0x4f Push
	if(var_101_bool == 0) goto Label_83; // 0x50 JumpB
	var_39_int = -2; // 0x51 MovI
	return 8; // 0x52 Return
	
Label_83:
	DoDialog(var_46_object); // 0x53 Func
	var_102_object = Obj(); var_103_object = Obj(); // 0x55 PushV
	var_102_object = var_40_object; // 0x56 Mov
	var_103_object = var_46_object; // 0x57 Mov
	TaskCall(3); // 0x58 TaskCall
	func_112(var_104_object, var_105_object, var_106_string, var_107_bool, var_102_object, var_103_object); // 0x59 Call
	TaskReturn(); // 0x5a TaskReturn
	IsDialogEnd(var_49_bool); // 0x5c ObjFunc
	
Label_94:
	var_143_bool = var_49_bool == 0; // 0x5e Not
	if(var_143_bool == 0) goto Label_101; // 0x5f JumpB
	sync(); // 0x60 Func
	IsDialogEnd(var_49_bool); // 0x62 ObjFunc
	goto Label_94; // 0x64 Jump
	
Label_101:
	var_144_object = Obj(); // 0x65 PushV
	var_144_object = var_40_object; // 0x66 Mov
	func_2618(); // 0x67 Call
	StopDialog(var_46_object); // 0x69 Func
	GetReturnValue(var_48_int); // 0x6b ObjFunc
	var_39_int = var_48_int; // 0x6d Mov
	return 8; // 0x6e Return
}


func_2869()
{
	var_43_string = "KnowMark"; // 0xb36 PushS
	var_44_int = 1; // 0xb37 PushI
	SetVariable(var_43_string, var_44_int); // 0xb38 Func
	return 0; // 0xb3a Return
}


func_2618()
{
	CameraSwitchToNormal(); // 0xa3b Func
	return 0; // 0xa3d Return
}


func_2875()
{
	var_51_string = "ood3Mark1"; // 0xb3c PushS
	var_52_int = 1; // 0xb3d PushI
	SetVariable(var_51_string, var_52_int); // 0xb3e Func
	return 0; // 0xb40 Return
}


func_2622(var_48_string)
{
	var_49_float = 0; var_50_float = 0; var_51_float = 0; var_52_float = 0; // 0xa3e PushV
	var_53_string = "playing "; // 0xa3f PushS
	var_54_int = var_53_string + var_48_string; // 0xa40 Add
	Trace(var_54_int); // 0xa41 Func
	lshGetAnimTimes(var_48_string, var_51_float, var_52_float); // 0xa43 Func
	lshPlayAnimation(var_51_float, var_52_float); // 0xa45 Func
	var_55_string = "start: "; // 0xa47 PushS
	var_56_int = var_55_string + var_51_float; // 0xa48 Add
	Trace(var_56_int); // 0xa49 Func
	var_57_string = "end: "; // 0xa4b PushS
	var_58_int = var_57_string + var_52_float; // 0xa4c Add
	Trace(var_58_int); // 0xa4d Func
	return 4; // 0xa4f Return
}


func_2368(var_0_object, var_178_int, var_179_object)
{
	var_181_object = Obj(); var_182_bool = 0; var_183_int = 0; var_184_bool = 0; var_185_object = Obj(); var_186_bool = 0; var_187_int = 0; var_188_bool = 0; // 0x940 PushV
	var_0_object = var_179_object; // 0x941 TMov
	var_189_bool = 0; var_190_object = Obj(); // 0x942 PushV
	var_190_object = var_179_object; // 0x943 Mov
	func_2562(var_190_object); // 0x944 Call
	var_191_bool = var_189_bool == 0; // 0x946 Not
	if(var_191_bool == 0) goto Label_2378; // 0x947 JumpB
	var_178_int = -2; // 0x948 MovI
	return 8; // 0x949 Return
	
Label_2378:
	CreateDialog(var_185_object); // 0x94a Func
	var_192_int = 0; // 0x94c PushV
	func_2713(var_192_int); // 0x94d Call
	SetNPCName(var_192_int); // 0x94f ObjFunc
	var_193_string = ""; // 0x951 PushV
	func_2715(var_193_string); // 0x952 Call
	SetPhoto(var_193_string); // 0x954 ObjFunc
	var_194_int = 0; // 0x956 PushV
	func_3229(var_194_int); // 0x957 Call
	SetPlayerName(var_194_int); // 0x959 ObjFunc
	var_187_int = -1; // 0x95b MovI
	IsOverrideActive(var_186_bool); // 0x95c Func
	var_195_bool = var_186_bool; // 0x95e Push
	if(var_195_bool == 0) goto Label_2402; // 0x95f JumpB
	var_178_int = -2; // 0x960 MovI
	return 8; // 0x961 Return
	
Label_2402:
	DoDialog(var_185_object); // 0x962 Func
	var_196_object = Obj(); var_197_object = Obj(); // 0x964 PushV
	var_196_object = var_179_object; // 0x965 Mov
	var_197_object = var_185_object; // 0x966 Mov
	TaskCall(15); // 0x967 TaskCall
	func_2431(var_198_object, var_199_object, var_200_string, var_201_bool, var_196_object, var_197_object); // 0x968 Call
	TaskReturn(); // 0x969 TaskReturn
	IsDialogEnd(var_188_bool); // 0x96b ObjFunc
	
Label_2413:
	var_220_bool = var_188_bool == 0; // 0x96d Not
	if(var_220_bool == 0) goto Label_2420; // 0x96e JumpB
	sync(); // 0x96f Func
	IsDialogEnd(var_188_bool); // 0x971 ObjFunc
	goto Label_2413; // 0x973 Jump
	
Label_2420:
	var_221_object = Obj(); // 0x974 PushV
	var_221_object = var_179_object; // 0x975 Mov
	func_2618(); // 0x976 Call
	StopDialog(var_185_object); // 0x978 Func
	GetReturnValue(var_187_int); // 0x97a ObjFunc
	var_178_int = var_187_int; // 0x97c Mov
	return 8; // 0x97d Return
}


func_3137(var_81_object)
{
	var_82_object = Obj(); var_83_object = Obj(); // 0xc41 PushV
	GetDiaryRoot(var_83_object); // 0xc42 Func
	var_84_bool = var_83_object == 0; // 0xc44 Not
	if(var_84_bool == 0) goto Label_3147; // 0xc45 JumpB
	var_85_string = "Can't retrieve diary root"; // 0xc46 PushS
	Trace(var_85_string); // 0xc47 Func
	var_81_object = 0; // 0xc49 MovB
	return 2; // 0xc4a Return
	
Label_3147:
	var_81_object = var_83_object; // 0xc4b Mov
	return 2; // 0xc4c Return
}


func_2881(var_167_bool)
{
	var_169_int = 0; var_170_string = ""; // 0xb42 PushV
	var_170_string = "ood1Mark1"; // 0xb43 MovS
	func_2657(var_169_int, var_170_string); // 0xb44 Call
	var_173_int = 0; // 0xb46 PushI
	var_174_bool = var_169_int == var_173_int; // 0xb47 Eq
	if(var_174_bool == 0) goto Label_2891; // 0xb48 JumpB
	var_167_bool = 1; // 0xb49 MovB
	return 0; // 0xb4a Return
	
Label_2891:
	var_167_bool = 0; // 0xb4b MovB
	return 0; // 0xb4c Return
}


func_2557(var_44_bool)
{
	var_45_bool = 0; var_46_bool = 0; // 0x9fd PushV
	IsLoaded(var_46_bool); // 0x9fe Func
	var_44_bool = var_46_bool; // 0xa00 Mov
	return 2; // 0xa01 Return
}


func_330(var_0_object, var_238_int, var_239_object)
{
	var_241_object = Obj(); var_242_bool = 0; var_243_int = 0; var_244_bool = 0; var_245_object = Obj(); var_246_bool = 0; var_247_int = 0; var_248_bool = 0; // 0x14a PushV
	var_0_object = var_239_object; // 0x14b TMov
	var_249_bool = 0; var_250_object = Obj(); // 0x14c PushV
	var_250_object = var_239_object; // 0x14d Mov
	func_2562(var_250_object); // 0x14e Call
	var_251_bool = var_249_bool == 0; // 0x150 Not
	if(var_251_bool == 0) goto Label_340; // 0x151 JumpB
	var_238_int = -2; // 0x152 MovI
	return 8; // 0x153 Return
	
Label_340:
	CreateDialog(var_245_object); // 0x154 Func
	var_252_int = 0; // 0x156 PushV
	func_2713(var_252_int); // 0x157 Call
	SetNPCName(var_252_int); // 0x159 ObjFunc
	var_253_string = ""; // 0x15b PushV
	func_2715(var_253_string); // 0x15c Call
	SetPhoto(var_253_string); // 0x15e ObjFunc
	var_254_int = 0; // 0x160 PushV
	func_3229(var_254_int); // 0x161 Call
	SetPlayerName(var_254_int); // 0x163 ObjFunc
	var_247_int = -1; // 0x165 MovI
	IsOverrideActive(var_246_bool); // 0x166 Func
	var_255_bool = var_246_bool; // 0x168 Push
	if(var_255_bool == 0) goto Label_364; // 0x169 JumpB
	var_238_int = -2; // 0x16a MovI
	return 8; // 0x16b Return
	
Label_364:
	DoDialog(var_245_object); // 0x16c Func
	var_256_object = Obj(); var_257_object = Obj(); // 0x16e PushV
	var_256_object = var_239_object; // 0x16f Mov
	var_257_object = var_245_object; // 0x170 Mov
	TaskCall(5); // 0x171 TaskCall
	func_393(var_258_object, var_259_object, var_260_string, var_261_bool, var_256_object, var_257_object); // 0x172 Call
	TaskReturn(); // 0x173 TaskReturn
	IsDialogEnd(var_248_bool); // 0x175 ObjFunc
	
Label_375:
	var_440_bool = var_248_bool == 0; // 0x177 Not
	if(var_440_bool == 0) goto Label_382; // 0x178 JumpB
	sync(); // 0x179 Func
	IsDialogEnd(var_248_bool); // 0x17b ObjFunc
	goto Label_375; // 0x17d Jump
	
Label_382:
	var_441_object = Obj(); // 0x17e PushV
	var_441_object = var_239_object; // 0x17f Mov
	func_2618(); // 0x180 Call
	StopDialog(var_245_object); // 0x182 Func
	GetReturnValue(var_247_int); // 0x184 ObjFunc
	var_238_int = var_247_int; // 0x186 Mov
	return 8; // 0x187 Return
}


func_2893(var_215_bool)
{
	var_217_int = 0; var_218_string = ""; // 0xb4e PushV
	var_218_string = "ood1Mark2"; // 0xb4f MovS
	func_2657(var_217_int, var_218_string); // 0xb50 Call
	var_219_int = 0; // 0xb52 PushI
	var_220_bool = var_217_int == var_219_int; // 0xb53 Eq
	if(var_220_bool == 0) goto Label_2903; // 0xb54 JumpB
	var_215_bool = 1; // 0xb55 MovB
	return 0; // 0xb56 Return
	
Label_2903:
	var_215_bool = 0; // 0xb57 MovB
	return 0; // 0xb58 Return
}


func_3150(var_72_bool, var_73_object, var_74_int)
{
	var_75_object = Obj(); var_76_object = Obj(); var_77_int = 0; var_78_object = Obj(); var_79_object = Obj(); var_80_int = 0; // 0xc4e PushV
	var_81_object = Obj(); // 0xc4f PushV
	func_3137(var_81_object); // 0xc50 Call
	var_78_object = var_81_object; // 0xc51 Mov
	Find(var_74_int, var_79_object); // 0xc53 ObjFunc
	var_86_bool = var_79_object == 0; // 0xc55 Not
	if(var_86_bool == 0) goto Label_3165; // 0xc56 JumpB
	var_87_string = "Can't find diary parent with id: "; // 0xc57 PushS
	var_88_int = var_87_string + var_74_int; // 0xc58 Add
	Trace(var_88_int); // 0xc59 Func
	var_72_bool = 0; // 0xc5b MovB
	return 6; // 0xc5c Return
	
Label_3165:
	AddChild(var_73_object); // 0xc5d ObjFunc
	var_89_string = "player_diary"; // 0xc5f PushS
	var_90_int = 1; // 0xc60 PushI
	SetVariable(var_89_string, var_90_int); // 0xc61 Func
	GetCategory(var_80_int); // 0xc63 ObjFunc
	SetDiarySection(var_80_int); // 0xc65 Func
	var_72_bool = 0; // 0xc67 MovB
	return 6; // 0xc68 Return
}


func_2640()
{
	var_38_bool = 0; // 0xa50 PushV
	func_2717(var_38_bool); // 0xa51 Call
	if(var_38_bool == 0) goto Label_2646; // 0xa53 JumpB
	lshStopSpeech(); // 0xa54 Func
	
Label_2646:
	return 0; // 0xa56 Return
}


func_2647(var_75_cvector, var_76_cvector)
{
	var_78_float = 0; var_79_float = 0; // 0xa57 PushV
	var_80_int = var_76_cvector | var_76_cvector; // 0xa58 Or
	var_79_float = sqrt(var_80_int); // 0xa59 Sqrt2
	var_81_float = 0.0; // 0xa5a PushF
	var_82_bool = var_79_float < var_81_float; // 0xa5b LT
	if(var_82_bool == 0) goto Label_2655; // 0xa5c JumpB
	var_75_cvector = CVector(0.0, 0.0, 0.0); // 0xa5d MovV
	return 2; // 0xa5e Return
	
Label_2655:
	var_75_cvector = var_76_cvector / var_76_cvector; // 0xa5f Div2
	return 2; // 0xa60 Return
}


func_2905(var_247_bool)
{
	var_249_int = 0; var_250_string = ""; // 0xb5a PushV
	var_250_string = "ood1Mark3"; // 0xb5b MovS
	func_2657(var_249_int, var_250_string); // 0xb5c Call
	var_251_int = 0; // 0xb5e PushI
	var_252_bool = var_249_int == var_251_int; // 0xb5f Eq
	if(var_252_bool == 0) goto Label_2915; // 0xb60 JumpB
	var_247_bool = 1; // 0xb61 MovB
	return 0; // 0xb62 Return
	
Label_2915:
	var_247_bool = 0; // 0xb63 MovB
	return 0; // 0xb64 Return
}


func_1627(var_0_object, var_493_int, var_494_object)
{
	var_496_object = Obj(); var_497_bool = 0; var_498_int = 0; var_499_bool = 0; var_500_object = Obj(); var_501_bool = 0; var_502_int = 0; var_503_bool = 0; // 0x65b PushV
	var_0_object = var_494_object; // 0x65c TMov
	var_504_bool = 0; var_505_object = Obj(); // 0x65d PushV
	var_505_object = var_494_object; // 0x65e Mov
	func_2562(var_505_object); // 0x65f Call
	var_506_bool = var_504_bool == 0; // 0x661 Not
	if(var_506_bool == 0) goto Label_1637; // 0x662 JumpB
	var_493_int = -2; // 0x663 MovI
	return 8; // 0x664 Return
	
Label_1637:
	CreateDialog(var_500_object); // 0x665 Func
	var_507_int = 0; // 0x667 PushV
	func_2713(var_507_int); // 0x668 Call
	SetNPCName(var_507_int); // 0x66a ObjFunc
	var_508_string = ""; // 0x66c PushV
	func_2715(var_508_string); // 0x66d Call
	SetPhoto(var_508_string); // 0x66f ObjFunc
	var_509_int = 0; // 0x671 PushV
	func_3229(var_509_int); // 0x672 Call
	SetPlayerName(var_509_int); // 0x674 ObjFunc
	var_502_int = -1; // 0x676 MovI
	IsOverrideActive(var_501_bool); // 0x677 Func
	var_510_bool = var_501_bool; // 0x679 Push
	if(var_510_bool == 0) goto Label_1661; // 0x67a JumpB
	var_493_int = -2; // 0x67b MovI
	return 8; // 0x67c Return
	
Label_1661:
	DoDialog(var_500_object); // 0x67d Func
	var_511_object = Obj(); var_512_object = Obj(); // 0x67f PushV
	var_511_object = var_494_object; // 0x680 Mov
	var_512_object = var_500_object; // 0x681 Mov
	TaskCall(9); // 0x682 TaskCall
	func_1690(var_513_object, var_514_object, var_515_string, var_516_bool, var_511_object, var_512_object); // 0x683 Call
	TaskReturn(); // 0x684 TaskReturn
	IsDialogEnd(var_503_bool); // 0x686 ObjFunc
	
Label_1672:
	var_553_bool = var_503_bool == 0; // 0x688 Not
	if(var_553_bool == 0) goto Label_1679; // 0x689 JumpB
	sync(); // 0x68a Func
	IsDialogEnd(var_503_bool); // 0x68c ObjFunc
	goto Label_1672; // 0x68e Jump
	
Label_1679:
	var_554_object = Obj(); // 0x68f PushV
	var_554_object = var_494_object; // 0x690 Mov
	func_2618(); // 0x691 Call
	StopDialog(var_500_object); // 0x693 Func
	GetReturnValue(var_502_int); // 0x695 ObjFunc
	var_493_int = var_502_int; // 0x697 Mov
	return 8; // 0x698 Return
}


func_2139(var_0_object, var_1_object, var_2_object, var_3_object, var_621_object, var_622_object)
{
	var_0_object = var_622_object; // 0x85c TMov
	var_1_object = var_621_object; // 0x85d TMov
	var_3_object = 0; // 0x85e TMovB
	var_627_int = 1; // 0x85f PushI
	if(var_627_int == 0) goto Label_2172; // 0x860 JumpB
	var_628_string = ""; // 0x861 PushV
	var_628_string = "Neutral"; // 0x862 MovS
	func_2202(var_622_object, var_628_string); // 0x863 Call
	var_633_int = 13312; // 0x865 PushI
	SetMessage(var_633_int); // 0x866 TObjFunc
	ClearReplies(); // 0x868 TObjFunc
	var_634_bool = 0; var_635_object = Obj(); // 0x86a PushV
	var_635_object = var_1_object; // 0x86b MovT
	func_3021(var_635_object); // 0x86c Call
	if(var_634_bool == 0) goto Label_2164; // 0x86e JumpB
	var_640_int = 13314; // 0x86f PushI
	var_641_int = 14550; // 0x870 PushI
	var_642_int = 14549; // 0x871 PushI
	AddReply(var_640_int, var_641_int, var_642_int); // 0x872 TObjFunc
	
Label_2164:
	var_643_int = 13313; // 0x874 PushI
	var_644_int = -1; // 0x875 PushI
	var_645_int = 14548; // 0x876 PushI
	AddReply(var_643_int, var_644_int, var_645_int); // 0x877 TObjFunc
	goto Label_2172; // 0x879 Jump
	
Label_2172:
	var_646_bool = 0; // 0x87c PushV
	func_2717(var_646_bool); // 0x87d Call
	if(var_646_bool == 0) goto Label_2187; // 0x87f JumpB
	
Label_2176:
	lshWaitForAnimEnd(); // 0x880 Func
	var_647_object = var_3_object; // 0x882 PushT
	if(var_647_object == 0) goto Label_2181; // 0x883 JumpB
	goto Label_2186; // 0x884 Jump
	
Label_2186:
	goto Label_2201; // 0x88a Jump
	
Label_2201:
	return 0; // 0x899 Return
	
Label_2181:
	var_648_string = ""; // 0x885 PushV
	var_648_string = var_2_object; // 0x886 MovT
	func_2622(var_648_string); // 0x887 Call
	goto Label_2176; // 0x889 Jump
	
Label_2187:
	var_649_string = "all"; // 0x88b PushS
	var_650_string = "idle"; // 0x88c PushS
	PlayAnimation(var_649_string, var_650_string); // 0x88d Func
	
Label_2191:
	WaitForAnimEnd(); // 0x88f Func
	var_651_object = var_3_object; // 0x891 PushT
	if(var_651_object == 0) goto Label_2196; // 0x892 JumpB
	goto Label_2201; // 0x893 Jump
	
Label_2196:
	var_652_string = "all"; // 0x894 PushS
	var_653_string = "idle"; // 0x895 PushS
	PlayAnimation(var_652_string, var_653_string); // 0x896 Func
	goto Label_2191; // 0x898 Jump
}


func_2657(var_134_int, var_135_string)
{
	var_136_int = 0; var_137_int = 0; // 0xa61 PushV
	GetVariable(var_135_string, var_137_int); // 0xa62 Func
	var_134_int = var_137_int; // 0xa64 Mov
	return 2; // 0xa65 Return
}


func_2917(var_175_bool)
{
	var_177_int = 0; var_178_string = ""; // 0xb66 PushV
	var_178_string = "d1q01"; // 0xb67 MovS
	func_2657(var_177_int, var_178_string); // 0xb68 Call
	var_179_int = 0; // 0xb6a PushI
	var_180_bool = var_177_int == var_179_int; // 0xb6b Eq
	if(var_180_bool == 0) goto Label_2927; // 0xb6c JumpB
	var_175_bool = 1; // 0xb6d MovB
	return 0; // 0xb6e Return
	
Label_2927:
	var_175_bool = 0; // 0xb6f MovB
	return 0; // 0xb70 Return
}


func_2662(var_100_object, var_101_string)
{
	var_102_object = Obj(); var_103_object = Obj(); var_104_object = Obj(); var_105_object = Obj(); // 0xa66 PushV
	GetMainOutdoorScene(var_104_object); // 0xa67 Func
	var_106_string = ".bin"; // 0xa69 PushS
	var_107_int = var_101_string + var_106_string; // 0xa6a Add
	AddBlankActor(var_105_object, var_104_object, var_101_string, var_107_int); // 0xa6b Func
	var_100_object = var_105_object; // 0xa6d Mov
	return 4; // 0xa6e Return
}


func_1384(var_0_object, var_444_int, var_445_object)
{
	var_447_object = Obj(); var_448_bool = 0; var_449_int = 0; var_450_bool = 0; var_451_object = Obj(); var_452_bool = 0; var_453_int = 0; var_454_bool = 0; // 0x568 PushV
	var_0_object = var_445_object; // 0x569 TMov
	var_455_bool = 0; var_456_object = Obj(); // 0x56a PushV
	var_456_object = var_445_object; // 0x56b Mov
	func_2562(var_456_object); // 0x56c Call
	var_457_bool = var_455_bool == 0; // 0x56e Not
	if(var_457_bool == 0) goto Label_1394; // 0x56f JumpB
	var_444_int = -2; // 0x570 MovI
	return 8; // 0x571 Return
	
Label_1394:
	CreateDialog(var_451_object); // 0x572 Func
	var_458_int = 0; // 0x574 PushV
	func_2713(var_458_int); // 0x575 Call
	SetNPCName(var_458_int); // 0x577 ObjFunc
	var_459_string = ""; // 0x579 PushV
	func_2715(var_459_string); // 0x57a Call
	SetPhoto(var_459_string); // 0x57c ObjFunc
	var_460_int = 0; // 0x57e PushV
	func_3229(var_460_int); // 0x57f Call
	SetPlayerName(var_460_int); // 0x581 ObjFunc
	var_453_int = -1; // 0x583 MovI
	IsOverrideActive(var_452_bool); // 0x584 Func
	var_461_bool = var_452_bool; // 0x586 Push
	if(var_461_bool == 0) goto Label_1418; // 0x587 JumpB
	var_444_int = -2; // 0x588 MovI
	return 8; // 0x589 Return
	
Label_1418:
	DoDialog(var_451_object); // 0x58a Func
	var_462_object = Obj(); var_463_object = Obj(); // 0x58c PushV
	var_462_object = var_445_object; // 0x58d Mov
	var_463_object = var_451_object; // 0x58e Mov
	TaskCall(7); // 0x58f TaskCall
	func_1447(var_464_object, var_465_object, var_466_string, var_467_bool, var_462_object, var_463_object); // 0x590 Call
	TaskReturn(); // 0x591 TaskReturn
	IsDialogEnd(var_454_bool); // 0x593 ObjFunc
	
Label_1429:
	var_489_bool = var_454_bool == 0; // 0x595 Not
	if(var_489_bool == 0) goto Label_1436; // 0x596 JumpB
	sync(); // 0x597 Func
	IsDialogEnd(var_454_bool); // 0x599 ObjFunc
	goto Label_1429; // 0x59b Jump
	
Label_1436:
	var_490_object = Obj(); // 0x59c PushV
	var_490_object = var_445_object; // 0x59d Mov
	func_2618(); // 0x59e Call
	StopDialog(var_451_object); // 0x5a0 Func
	GetReturnValue(var_453_int); // 0x5a2 ObjFunc
	var_444_int = var_453_int; // 0x5a4 Mov
	return 8; // 0x5a5 Return
}


func_3179(var_47_object)
{
	var_48_object = Obj(); var_49_object = Obj(); var_50_object = Obj(); var_51_object = Obj(); // 0xc6b PushV
	GetMainOutdoorScene(var_50_object); // 0xc6c Func
	var_52_bool = var_50_object == 0; // 0xc6e NullEq
	if(var_52_bool == 0) goto Label_3190; // 0xc6f JumpB
	var_53_string = "Can't find main outdoor scene"; // 0xc70 PushS
	Trace(var_53_string); // 0xc71 Func
	var_51_object = 0; // 0xc73 SetNull
	var_47_object = var_51_object; // 0xc74 Mov
	return 4; // 0xc75 Return
	
Label_3190:
	GetMap(var_51_object); // 0xc76 ObjFunc
	var_47_object = var_51_object; // 0xc78 Mov
	return 4; // 0xc79 Return
}


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_102_object, var_103_object)
{
	var_0_object = var_103_object; // 0x71 TMov
	var_1_object = var_102_object; // 0x72 TMov
	var_3_object = 0; // 0x73 TMovB
	var_108_int = 1; // 0x74 PushI
	if(var_108_int == 0) goto Label_145; // 0x75 JumpB
	var_109_object = Obj(); var_110_object = Obj(); // 0x76 PushV
	var_109_object = var_1_object; // 0x77 MovT
	var_110_object = var_0_object; // 0x78 MovT
	func_2869(); // 0x79 Call
	var_113_string = ""; // 0x7b PushV
	var_113_string = "Neutral"; // 0x7c MovS
	func_175(var_103_object, var_113_string); // 0x7d Call
	var_128_int = 424; // 0x7f PushI
	SetMessage(var_128_int); // 0x80 TObjFunc
	ClearReplies(); // 0x82 TObjFunc
	var_129_int = 425; // 0x84 PushI
	var_130_int = 494; // 0x85 PushI
	var_131_int = 493; // 0x86 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x87 TObjFunc
	var_132_int = 429; // 0x89 PushI
	var_133_int = 498; // 0x8a PushI
	var_134_int = 497; // 0x8b PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x8c TObjFunc
	goto Label_145; // 0x8e Jump
	
Label_145:
	var_135_bool = 0; // 0x91 PushV
	func_2717(var_135_bool); // 0x92 Call
	if(var_135_bool == 0) goto Label_160; // 0x94 JumpB
	
Label_149:
	lshWaitForAnimEnd(); // 0x95 Func
	var_136_object = var_3_object; // 0x97 PushT
	if(var_136_object == 0) goto Label_154; // 0x98 JumpB
	goto Label_159; // 0x99 Jump
	
Label_159:
	goto Label_174; // 0x9f Jump
	
Label_174:
	return 0; // 0xae Return
	
Label_154:
	var_137_string = ""; // 0x9a PushV
	var_137_string = var_2_object; // 0x9b MovT
	func_2622(var_137_string); // 0x9c Call
	goto Label_149; // 0x9e Jump
	
Label_160:
	var_138_string = "all"; // 0xa0 PushS
	var_139_string = "idle"; // 0xa1 PushS
	PlayAnimation(var_138_string, var_139_string); // 0xa2 Func
	
Label_164:
	WaitForAnimEnd(); // 0xa4 Func
	var_140_object = var_3_object; // 0xa6 PushT
	if(var_140_object == 0) goto Label_169; // 0xa7 JumpB
	goto Label_174; // 0xa8 Jump
	
Label_169:
	var_141_string = "all"; // 0xa9 PushS
	var_142_string = "idle"; // 0xaa PushS
	PlayAnimation(var_141_string, var_142_string); // 0xab Func
	goto Label_164; // 0xad Jump
}


func_2673(var_108_bool, var_109_string, var_110_string)
{
	var_111_object = Obj(); var_112_object = Obj(); // 0xa71 PushV
	FindActor(var_112_object, var_109_string); // 0xa72 Func
	var_113_bool = var_112_object == 0; // 0xa74 NullEq
	if(var_113_bool == 0) goto Label_2680; // 0xa75 JumpB
	var_108_bool = 0; // 0xa76 MovB
	return 2; // 0xa77 Return
	
Label_2680:
	Trigger(var_112_object, var_110_string); // 0xa78 Func
	var_108_bool = 1; // 0xa7a MovB
	return 2; // 0xa7b Return
}


func_2929(var_221_bool)
{
	var_223_int = 0; var_224_string = ""; // 0xb72 PushV
	var_224_string = "d1q01FirstGeorgVisit"; // 0xb73 MovS
	func_2657(var_223_int, var_224_string); // 0xb74 Call
	var_225_int = 1; // 0xb76 PushI
	var_226_bool = var_223_int == var_225_int; // 0xb77 Eq
	if(var_226_bool == 0) goto Label_2939; // 0xb78 JumpB
	var_221_bool = 1; // 0xb79 MovB
	return 0; // 0xb7a Return
	
Label_2939:
	var_221_bool = 0; // 0xb7b MovB
	return 0; // 0xb7c Return
}


func_1907(var_0_object, var_557_int, var_558_object)
{
	var_560_object = Obj(); var_561_bool = 0; var_562_int = 0; var_563_bool = 0; var_564_object = Obj(); var_565_bool = 0; var_566_int = 0; var_567_bool = 0; // 0x773 PushV
	var_0_object = var_558_object; // 0x774 TMov
	var_568_bool = 0; var_569_object = Obj(); // 0x775 PushV
	var_569_object = var_558_object; // 0x776 Mov
	func_2562(var_569_object); // 0x777 Call
	var_570_bool = var_568_bool == 0; // 0x779 Not
	if(var_570_bool == 0) goto Label_1917; // 0x77a JumpB
	var_557_int = -2; // 0x77b MovI
	return 8; // 0x77c Return
	
Label_1917:
	CreateDialog(var_564_object); // 0x77d Func
	var_571_int = 0; // 0x77f PushV
	func_2713(var_571_int); // 0x780 Call
	SetNPCName(var_571_int); // 0x782 ObjFunc
	var_572_string = ""; // 0x784 PushV
	func_2715(var_572_string); // 0x785 Call
	SetPhoto(var_572_string); // 0x787 ObjFunc
	var_573_int = 0; // 0x789 PushV
	func_3229(var_573_int); // 0x78a Call
	SetPlayerName(var_573_int); // 0x78c ObjFunc
	var_566_int = -1; // 0x78e MovI
	IsOverrideActive(var_565_bool); // 0x78f Func
	var_574_bool = var_565_bool; // 0x791 Push
	if(var_574_bool == 0) goto Label_1941; // 0x792 JumpB
	var_557_int = -2; // 0x793 MovI
	return 8; // 0x794 Return
	
Label_1941:
	DoDialog(var_564_object); // 0x795 Func
	var_575_object = Obj(); var_576_object = Obj(); // 0x797 PushV
	var_575_object = var_558_object; // 0x798 Mov
	var_576_object = var_564_object; // 0x799 Mov
	TaskCall(11); // 0x79a TaskCall
	func_1970(var_577_object, var_578_object, var_579_string, var_580_bool, var_575_object, var_576_object); // 0x79b Call
	TaskReturn(); // 0x79c TaskReturn
	IsDialogEnd(var_567_bool); // 0x79e ObjFunc
	
Label_1952:
	var_599_bool = var_567_bool == 0; // 0x7a0 Not
	if(var_599_bool == 0) goto Label_1959; // 0x7a1 JumpB
	sync(); // 0x7a2 Func
	IsDialogEnd(var_567_bool); // 0x7a4 ObjFunc
	goto Label_1952; // 0x7a6 Jump
	
Label_1959:
	var_600_object = Obj(); // 0x7a7 PushV
	var_600_object = var_558_object; // 0x7a8 Mov
	func_2618(); // 0x7a9 Call
	StopDialog(var_564_object); // 0x7ab Func
	GetReturnValue(var_566_int); // 0x7ad ObjFunc
	var_557_int = var_566_int; // 0x7af Mov
	return 8; // 0x7b0 Return
}


func_3196(var_70_object, var_71_string, var_72_float)
{
	var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_object = Obj(); var_77_bool = 0; var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_object = Obj(); var_81_bool = 0; // 0xc7c PushV
	GetMainOutdoorScene(var_80_object); // 0xc7d Func
	var_82_bool = var_80_object == 0; // 0xc7f NullEq
	if(var_82_bool == 0) goto Label_3205; // 0xc80 JumpB
	var_83_string = "Can't find main outdoor scene"; // 0xc81 PushS
	Trace(var_83_string); // 0xc82 Func
	return 8; // 0xc84 Return
	
Label_3205:
	GetLocator(var_71_string, var_81_bool, var_78_cvector, var_79_cvector); // 0xc85 ObjFunc
	var_84_bool = var_81_bool == 0; // 0xc87 Not
	if(var_84_bool == 0) goto Label_3215; // 0xc88 JumpB
	var_85_string = "Warning: outdoor scene locator "; // 0xc89 PushS
	var_86_int = var_85_string + var_71_string; // 0xc8a Add
	var_87_string = " doesnt exist"; // 0xc8b PushS
	var_88_int = var_86_int + var_87_string; // 0xc8c Add
	Trace(var_88_int); // 0xc8d Func
	
Label_3215:
	GetMap(var_70_object); // 0xc8f ObjFunc
	var_89_bool = var_70_object == 0; // 0xc91 NullEq
	if(var_89_bool == 0) goto Label_3223; // 0xc92 JumpB
	var_90_string = "Can't find map"; // 0xc93 PushS
	Trace(var_90_string); // 0xc94 Func
	return 8; // 0xc96 Return
	
Label_3223:
	var_91_float = GetByIndex(var_78_cvector, 0); // 0xc97 PushE
	var_92_float = GetByIndex(var_78_cvector, 2); // 0xc98 PushE
	SetMapParams(var_91_float, var_92_float, var_72_float); // 0xc99 ObjFunc
	return 8; // 0xc9b Return
}


func_2685(var_58_float)
{
	var_59_float = 0; var_60_float = 0; // 0xa7d PushV
	GetGameTime(var_60_float); // 0xa7e Func
	var_58_float = var_60_float; // 0xa80 Mov
	return 2; // 0xa81 Return
}


func_2941(var_273_bool)
{
	var_275_int = 0; var_276_string = ""; // 0xb7e PushV
	var_276_string = "ood1Mark4"; // 0xb7f MovS
	func_2657(var_275_int, var_276_string); // 0xb80 Call
	var_277_int = 0; // 0xb82 PushI
	var_278_bool = var_275_int == var_277_int; // 0xb83 Eq
	if(var_278_bool == 0) goto Label_2951; // 0xb84 JumpB
	var_273_bool = 1; // 0xb85 MovB
	return 0; // 0xb86 Return
	
Label_2951:
	var_273_bool = 0; // 0xb87 MovB
	return 0; // 0xb88 Return
}


func_2431(var_0_object, var_1_object, var_2_object, var_3_object, var_196_object, var_197_object)
{
	var_0_object = var_197_object; // 0x980 TMov
	var_1_object = var_196_object; // 0x981 TMov
	var_3_object = 0; // 0x982 TMovB
	var_202_int = 1; // 0x983 PushI
	if(var_202_int == 0) goto Label_2454; // 0x984 JumpB
	var_203_string = ""; // 0x985 PushV
	var_203_string = "Neutral"; // 0x986 MovS
	func_2484(var_197_object, var_203_string); // 0x987 Call
	var_208_int = 14084; // 0x989 PushI
	SetMessage(var_208_int); // 0x98a TObjFunc
	ClearReplies(); // 0x98c TObjFunc
	var_209_int = 14085; // 0x98e PushI
	var_210_int = -1; // 0x98f PushI
	var_211_int = 15322; // 0x990 PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x991 TObjFunc
	goto Label_2454; // 0x993 Jump
	
Label_2454:
	var_212_bool = 0; // 0x996 PushV
	func_2717(var_212_bool); // 0x997 Call
	if(var_212_bool == 0) goto Label_2469; // 0x999 JumpB
	
Label_2458:
	lshWaitForAnimEnd(); // 0x99a Func
	var_213_object = var_3_object; // 0x99c PushT
	if(var_213_object == 0) goto Label_2463; // 0x99d JumpB
	goto Label_2468; // 0x99e Jump
	
Label_2468:
	goto Label_2483; // 0x9a4 Jump
	
Label_2483:
	return 0; // 0x9b3 Return
	
Label_2463:
	var_214_string = ""; // 0x99f PushV
	var_214_string = var_2_object; // 0x9a0 MovT
	func_2622(var_214_string); // 0x9a1 Call
	goto Label_2458; // 0x9a3 Jump
	
Label_2469:
	var_215_string = "all"; // 0x9a5 PushS
	var_216_string = "idle"; // 0x9a6 PushS
	PlayAnimation(var_215_string, var_216_string); // 0x9a7 Func
	
Label_2473:
	WaitForAnimEnd(); // 0x9a9 Func
	var_217_object = var_3_object; // 0x9ab PushT
	if(var_217_object == 0) goto Label_2478; // 0x9ac JumpB
	goto Label_2483; // 0x9ad Jump
	
Label_2478:
	var_218_string = "all"; // 0x9ae PushS
	var_219_string = "idle"; // 0x9af PushS
	PlayAnimation(var_218_string, var_219_string); // 0x9b0 Func
	goto Label_2473; // 0x9b2 Jump
}


func_642(var_2_object, var_190_string)
{
	var_191_bool = 0; // 0x283 PushV
	func_2717(var_191_bool); // 0x284 Call
	var_192_bool = var_191_bool == 0; // 0x286 Not
	if(var_192_bool == 0) goto Label_649; // 0x287 JumpB
	return 0; // 0x288 Return
	
Label_649:
	var_193_bool = var_190_string == var_2_object; // 0x289 Eq
	if(var_193_bool == 0) goto Label_652; // 0x28a JumpB
	return 0; // 0x28b Return
	
Label_652:
	var_194_string = ""; // 0x28c PushV
	var_194_string = var_190_string; // 0x28d Mov
	func_2622(var_194_string); // 0x28e Call
	var_2_object = var_190_string; // 0x290 TMov
	return 0; // 0x291 Return
}


func_2690(var_165_int)
{
	var_166_float = 0; var_167_float = 0; // 0xa82 PushV
	GetGameTime(var_167_float); // 0xa83 Func
	var_168_int = 1; // 0xa85 PushI
	var_169_int = 0; // 0xa86 PushV
	var_170_int = 24; // 0xa87 PushI
	var_169_int = var_167_float / var_167_float; // 0xa88 Div2
	var_165_int = var_168_int + var_169_int; // 0xa89 Add2
	return 2; // 0xa8a Return
}


func_393(var_0_object, var_1_object, var_2_object, var_3_object, var_256_object, var_257_object)
{
	var_0_object = var_257_object; // 0x18a TMov
	var_1_object = var_256_object; // 0x18b TMov
	var_3_object = 0; // 0x18c TMovB
	var_262_int = 1; // 0x18d PushI
	if(var_262_int == 0) goto Label_612; // 0x18e JumpB
	var_263_bool = 0; // 0x18f PushV
	var_263_bool = 0; // 0x190 MovB
	var_264_bool = 0; var_265_object = Obj(); // 0x191 PushV
	var_265_object = var_1_object; // 0x192 MovT
	func_2881(var_265_object); // 0x193 Call
	if(var_264_bool == 0) goto Label_413; // 0x195 JumpB
	var_272_bool = 0; var_273_object = Obj(); // 0x196 PushV
	var_273_object = var_1_object; // 0x197 MovT
	func_2917(var_273_object); // 0x198 Call
	var_278_bool = var_272_bool == 0; // 0x19a Not
	if(var_278_bool == 0) goto Label_413; // 0x19b JumpB
	var_263_bool = 1; // 0x19c MovB
	
Label_413:
	if(var_263_bool == 0) goto Label_444; // 0x19d JumpB
	var_279_object = Obj(); var_280_object = Obj(); // 0x19e PushV
	var_279_object = var_1_object; // 0x19f MovT
	var_280_object = var_0_object; // 0x1a0 MovT
	func_2858(); // 0x1a1 Call
	var_283_object = Obj(); var_284_object = Obj(); // 0x1a3 PushV
	var_283_object = var_1_object; // 0x1a4 MovT
	var_284_object = var_0_object; // 0x1a5 MovT
	func_2808(); // 0x1a6 Call
	var_287_string = ""; // 0x1a8 PushV
	var_287_string = "Neutral"; // 0x1a9 MovS
	func_642(var_257_object, var_287_string); // 0x1aa Call
	var_292_int = 5616; // 0x1ac PushI
	SetMessage(var_292_int); // 0x1ad TObjFunc
	ClearReplies(); // 0x1af TObjFunc
	var_293_int = 5617; // 0x1b1 PushI
	var_294_int = 6905; // 0x1b2 PushI
	var_295_int = 6193; // 0x1b3 PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0x1b4 TObjFunc
	var_296_int = 5645; // 0x1b6 PushI
	var_297_int = 6906; // 0x1b7 PushI
	var_298_int = 6224; // 0x1b8 PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0x1b9 TObjFunc
	goto Label_612; // 0x1bb Jump
	
Label_612:
	var_299_bool = 0; // 0x264 PushV
	func_2717(var_299_bool); // 0x265 Call
	if(var_299_bool == 0) goto Label_627; // 0x267 JumpB
	
Label_616:
	lshWaitForAnimEnd(); // 0x268 Func
	var_300_object = var_3_object; // 0x26a PushT
	if(var_300_object == 0) goto Label_621; // 0x26b JumpB
	goto Label_626; // 0x26c Jump
	
Label_626:
	goto Label_641; // 0x272 Jump
	
Label_641:
	return 0; // 0x281 Return
	
Label_621:
	var_301_string = ""; // 0x26d PushV
	var_301_string = var_2_object; // 0x26e MovT
	func_2622(var_301_string); // 0x26f Call
	goto Label_616; // 0x271 Jump
	
Label_627:
	var_302_string = "all"; // 0x273 PushS
	var_303_string = "idle"; // 0x274 PushS
	PlayAnimation(var_302_string, var_303_string); // 0x275 Func
	
Label_631:
	WaitForAnimEnd(); // 0x277 Func
	var_304_object = var_3_object; // 0x279 PushT
	if(var_304_object == 0) goto Label_636; // 0x27a JumpB
	goto Label_641; // 0x27b Jump
	
Label_636:
	var_305_string = "all"; // 0x27c PushS
	var_306_string = "idle"; // 0x27d PushS
	PlayAnimation(var_305_string, var_306_string); // 0x27e Func
	goto Label_631; // 0x280 Jump
	
Label_444:
	var_307_string = ""; // 0x1bc PushV
	var_307_string = "Neutral"; // 0x1bd MovS
	func_642(var_257_object, var_307_string); // 0x1be Call
	var_308_int = 8129; // 0x1c0 PushI
	SetMessage(var_308_int); // 0x1c1 TObjFunc
	ClearReplies(); // 0x1c3 TObjFunc
	var_309_bool = 0; // 0x1c5 PushV
	var_309_bool = 0; // 0x1c6 MovB
	var_310_bool = 0; var_311_object = Obj(); // 0x1c7 PushV
	var_311_object = var_1_object; // 0x1c8 MovT
	func_2893(var_311_object); // 0x1c9 Call
	if(var_310_bool == 0) goto Label_466; // 0x1cb JumpB
	var_316_bool = 0; var_317_object = Obj(); // 0x1cc PushV
	var_317_object = var_1_object; // 0x1cd MovT
	func_2929(var_317_object); // 0x1ce Call
	if(var_316_bool == 0) goto Label_466; // 0x1d0 JumpB
	var_309_bool = 1; // 0x1d1 MovB
	
Label_466:
	if(var_309_bool == 0) goto Label_472; // 0x1d2 JumpB
	var_322_int = 8130; // 0x1d3 PushI
	var_323_int = 6213; // 0x1d4 PushI
	var_324_int = 8953; // 0x1d5 PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0x1d6 TObjFunc
	
Label_472:
	var_325_bool = 0; // 0x1d8 PushV
	var_325_bool = 1; // 0x1d9 MovB
	var_326_bool = 0; // 0x1da PushV
	var_326_bool = 0; // 0x1db MovB
	var_327_bool = 0; var_328_object = Obj(); // 0x1dc PushV
	var_328_object = var_1_object; // 0x1dd MovT
	func_3011(var_327_bool, var_328_object); // 0x1de Call
	if(var_327_bool == 0) goto Label_487; // 0x1e0 JumpB
	var_338_bool = 0; var_339_object = Obj(); // 0x1e1 PushV
	var_339_object = var_1_object; // 0x1e2 MovT
	func_2905(var_339_object); // 0x1e3 Call
	if(var_338_bool == 0) goto Label_487; // 0x1e5 JumpB
	var_326_bool = 1; // 0x1e6 MovB
	
Label_487:
	if(var_326_bool == 0) goto Label_503; // 0x1e7 JumpB
	var_344_bool = 0; // 0x1e8 PushV
	var_344_bool = 0; // 0x1e9 MovB
	var_345_bool = 0; var_346_object = Obj(); // 0x1ea PushV
	var_346_object = var_1_object; // 0x1eb MovT
	func_3001(var_345_bool, var_346_object); // 0x1ec Call
	if(var_345_bool == 0) goto Label_501; // 0x1ee JumpB
	var_352_bool = 0; var_353_object = Obj(); // 0x1ef PushV
	var_353_object = var_1_object; // 0x1f0 MovT
	func_2905(var_353_object); // 0x1f1 Call
	if(var_352_bool == 0) goto Label_501; // 0x1f3 JumpB
	var_344_bool = 1; // 0x1f4 MovB
	
Label_501:
	if(var_344_bool == 0) goto Label_503; // 0x1f5 JumpB
	var_325_bool = 0; // 0x1f6 MovB
	
Label_503:
	if(var_325_bool == 0) goto Label_509; // 0x1f7 JumpB
	var_354_int = 8131; // 0x1f8 PushI
	var_355_int = 6197; // 0x1f9 PushI
	var_356_int = 8954; // 0x1fa PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x1fb TObjFunc
	
Label_509:
	var_357_bool = 0; // 0x1fd PushV
	var_357_bool = 0; // 0x1fe MovB
	var_358_bool = 0; var_359_object = Obj(); // 0x1ff PushV
	var_359_object = var_1_object; // 0x200 MovT
	func_3093(var_359_object); // 0x201 Call
	if(var_358_bool == 0) goto Label_522; // 0x203 JumpB
	var_364_bool = 0; var_365_object = Obj(); // 0x204 PushV
	var_365_object = var_1_object; // 0x205 MovT
	func_2941(var_365_object); // 0x206 Call
	if(var_364_bool == 0) goto Label_522; // 0x208 JumpB
	var_357_bool = 1; // 0x209 MovB
	
Label_522:
	if(var_357_bool == 0) goto Label_528; // 0x20a JumpB
	var_370_int = 8133; // 0x20b PushI
	var_371_int = -1; // 0x20c PushI
	var_372_int = 8956; // 0x20d PushI
	AddReply(var_370_int, var_371_int, var_372_int); // 0x20e TObjFunc
	
Label_528:
	var_373_bool = 0; // 0x210 PushV
	var_373_bool = 0; // 0x211 MovB
	var_374_bool = 0; var_375_object = Obj(); // 0x212 PushV
	var_375_object = var_1_object; // 0x213 MovT
	func_3033(var_375_object); // 0x214 Call
	if(var_374_bool == 0) goto Label_541; // 0x216 JumpB
	var_380_bool = 0; var_381_object = Obj(); // 0x217 PushV
	var_381_object = var_1_object; // 0x218 MovT
	func_2953(var_381_object); // 0x219 Call
	if(var_380_bool == 0) goto Label_541; // 0x21b JumpB
	var_373_bool = 1; // 0x21c MovB
	
Label_541:
	if(var_373_bool == 0) goto Label_547; // 0x21d JumpB
	var_386_int = 8135; // 0x21e PushI
	var_387_int = 8982; // 0x21f PushI
	var_388_int = 8958; // 0x220 PushI
	AddReply(var_386_int, var_387_int, var_388_int); // 0x221 TObjFunc
	
Label_547:
	var_389_bool = 0; // 0x223 PushV
	var_389_bool = 0; // 0x224 MovB
	var_390_bool = 0; var_391_object = Obj(); // 0x225 PushV
	var_391_object = var_1_object; // 0x226 MovT
	func_3045(var_391_object); // 0x227 Call
	if(var_390_bool == 0) goto Label_560; // 0x229 JumpB
	var_396_bool = 0; var_397_object = Obj(); // 0x22a PushV
	var_397_object = var_1_object; // 0x22b MovT
	func_2965(var_397_object); // 0x22c Call
	if(var_396_bool == 0) goto Label_560; // 0x22e JumpB
	var_389_bool = 1; // 0x22f MovB
	
Label_560:
	if(var_389_bool == 0) goto Label_566; // 0x230 JumpB
	var_402_int = 8137; // 0x231 PushI
	var_403_int = 8981; // 0x232 PushI
	var_404_int = 8960; // 0x233 PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0x234 TObjFunc
	
Label_566:
	var_405_bool = 0; // 0x236 PushV
	var_405_bool = 0; // 0x237 MovB
	var_406_bool = 0; var_407_object = Obj(); // 0x238 PushV
	var_407_object = var_1_object; // 0x239 MovT
	func_3057(var_407_object); // 0x23a Call
	if(var_406_bool == 0) goto Label_579; // 0x23c JumpB
	var_412_bool = 0; var_413_object = Obj(); // 0x23d PushV
	var_413_object = var_1_object; // 0x23e MovT
	func_2977(var_413_object); // 0x23f Call
	if(var_412_bool == 0) goto Label_579; // 0x241 JumpB
	var_405_bool = 1; // 0x242 MovB
	
Label_579:
	if(var_405_bool == 0) goto Label_585; // 0x243 JumpB
	var_418_int = 8140; // 0x244 PushI
	var_419_int = 8980; // 0x245 PushI
	var_420_int = 8963; // 0x246 PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0x247 TObjFunc
	
Label_585:
	var_421_bool = 0; // 0x249 PushV
	var_421_bool = 0; // 0x24a MovB
	var_422_bool = 0; var_423_object = Obj(); // 0x24b PushV
	var_423_object = var_1_object; // 0x24c MovT
	func_3081(var_423_object); // 0x24d Call
	if(var_422_bool == 0) goto Label_598; // 0x24f JumpB
	var_428_bool = 0; var_429_object = Obj(); // 0x250 PushV
	var_429_object = var_1_object; // 0x251 MovT
	func_2989(var_429_object); // 0x252 Call
	if(var_428_bool == 0) goto Label_598; // 0x254 JumpB
	var_421_bool = 1; // 0x255 MovB
	
Label_598:
	if(var_421_bool == 0) goto Label_604; // 0x256 JumpB
	var_434_int = 8151; // 0x257 PushI
	var_435_int = 8979; // 0x258 PushI
	var_436_int = 8974; // 0x259 PushI
	AddReply(var_434_int, var_435_int, var_436_int); // 0x25a TObjFunc
	
Label_604:
	var_437_int = 9147; // 0x25c PushI
	var_438_int = -1; // 0x25d PushI
	var_439_int = 10028; // 0x25e PushI
	AddReply(var_437_int, var_438_int, var_439_int); // 0x25f TObjFunc
	goto Label_612; // 0x261 Jump
}


func_2953(var_289_bool)
{
	var_291_int = 0; var_292_string = ""; // 0xb8a PushV
	var_292_string = "ood1Mark5"; // 0xb8b MovS
	func_2657(var_291_int, var_292_string); // 0xb8c Call
	var_293_int = 0; // 0xb8e PushI
	var_294_bool = var_291_int == var_293_int; // 0xb8f Eq
	if(var_294_bool == 0) goto Label_2963; // 0xb90 JumpB
	var_289_bool = 1; // 0xb91 MovB
	return 0; // 0xb92 Return
	
Label_2963:
	var_289_bool = 0; // 0xb93 MovB
	return 0; // 0xb94 Return
}


func_2699(var_237_int)
{
	var_238_float = 0; var_239_float = 0; // 0xa8b PushV
	GetGameTime(var_239_float); // 0xa8c Func
	var_240_int = 0; // 0xa8e PushV
	var_240_int = var_239_float; // 0xa8f Mov
	var_241_int = 24; // 0xa90 PushI
	var_237_int = var_240_int % var_241_int; // 0xa91 Mod2
	return 2; // 0xa92 Return
}


func_2707(var_235_bool, var_236_int)
{
	var_237_int = 0; // 0xa94 PushV
	func_2690(var_237_int); // 0xa95 Call
	var_235_bool = var_237_int == var_236_int; // 0xa97 Eq2
	return 0; // 0xa98 Return
}


func_2965(var_305_bool)
{
	var_307_int = 0; var_308_string = ""; // 0xb96 PushV
	var_308_string = "ood1Mark6"; // 0xb97 MovS
	func_2657(var_307_int, var_308_string); // 0xb98 Call
	var_309_int = 0; // 0xb9a PushI
	var_310_bool = var_307_int == var_309_int; // 0xb9b Eq
	if(var_310_bool == 0) goto Label_2975; // 0xb9c JumpB
	var_305_bool = 1; // 0xb9d MovB
	return 0; // 0xb9e Return
	
Label_2975:
	var_305_bool = 0; // 0xb9f MovB
	return 0; // 0xba0 Return
}


func_2713(var_91_int)
{
	var_91_int = 2869; // 0xa99 MovI
	return 0; // 0xa9a Return
}


func_1690(var_0_object, var_1_object, var_2_object, var_3_object, var_511_object, var_512_object)
{
	var_0_object = var_512_object; // 0x69b TMov
	var_1_object = var_511_object; // 0x69c TMov
	var_3_object = 0; // 0x69d TMovB
	var_517_int = 1; // 0x69e PushI
	if(var_517_int == 0) goto Label_1743; // 0x69f JumpB
	var_518_bool = 0; var_519_object = Obj(); // 0x6a0 PushV
	var_519_object = var_1_object; // 0x6a1 MovT
	func_3069(var_519_object); // 0x6a2 Call
	if(var_518_bool == 0) goto Label_1726; // 0x6a4 JumpB
	var_524_object = Obj(); var_525_object = Obj(); // 0x6a5 PushV
	var_524_object = var_1_object; // 0x6a6 MovT
	var_525_object = var_0_object; // 0x6a7 MovT
	func_2875(); // 0x6a8 Call
	var_528_string = ""; // 0x6aa PushV
	var_528_string = "Neutral"; // 0x6ab MovS
	func_1773(var_512_object, var_528_string); // 0x6ac Call
	var_533_int = 9993; // 0x6ae PushI
	SetMessage(var_533_int); // 0x6af TObjFunc
	ClearReplies(); // 0x6b1 TObjFunc
	var_534_int = 9994; // 0x6b3 PushI
	var_535_int = 11016; // 0x6b4 PushI
	var_536_int = 11015; // 0x6b5 PushI
	AddReply(var_534_int, var_535_int, var_536_int); // 0x6b6 TObjFunc
	var_537_int = 10002; // 0x6b8 PushI
	var_538_int = 11016; // 0x6b9 PushI
	var_539_int = 11023; // 0x6ba PushI
	AddReply(var_537_int, var_538_int, var_539_int); // 0x6bb TObjFunc
	goto Label_1743; // 0x6bd Jump
	
Label_1743:
	var_540_bool = 0; // 0x6cf PushV
	func_2717(var_540_bool); // 0x6d0 Call
	if(var_540_bool == 0) goto Label_1758; // 0x6d2 JumpB
	
Label_1747:
	lshWaitForAnimEnd(); // 0x6d3 Func
	var_541_object = var_3_object; // 0x6d5 PushT
	if(var_541_object == 0) goto Label_1752; // 0x6d6 JumpB
	goto Label_1757; // 0x6d7 Jump
	
Label_1757:
	goto Label_1772; // 0x6dd Jump
	
Label_1772:
	return 0; // 0x6ec Return
	
Label_1752:
	var_542_string = ""; // 0x6d8 PushV
	var_542_string = var_2_object; // 0x6d9 MovT
	func_2622(var_542_string); // 0x6da Call
	goto Label_1747; // 0x6dc Jump
	
Label_1758:
	var_543_string = "all"; // 0x6de PushS
	var_544_string = "idle"; // 0x6df PushS
	PlayAnimation(var_543_string, var_544_string); // 0x6e0 Func
	
Label_1762:
	WaitForAnimEnd(); // 0x6e2 Func
	var_545_object = var_3_object; // 0x6e4 PushT
	if(var_545_object == 0) goto Label_1767; // 0x6e5 JumpB
	goto Label_1772; // 0x6e6 Jump
	
Label_1767:
	var_546_string = "all"; // 0x6e7 PushS
	var_547_string = "idle"; // 0x6e8 PushS
	PlayAnimation(var_546_string, var_547_string); // 0x6e9 Func
	goto Label_1762; // 0x6eb Jump
	
Label_1726:
	var_548_string = ""; // 0x6be PushV
	var_548_string = "Neutral"; // 0x6bf MovS
	func_1773(var_512_object, var_548_string); // 0x6c0 Call
	var_549_int = 15316; // 0x6c2 PushI
	SetMessage(var_549_int); // 0x6c3 TObjFunc
	ClearReplies(); // 0x6c5 TObjFunc
	var_550_int = 15317; // 0x6c7 PushI
	var_551_int = -1; // 0x6c8 PushI
	var_552_int = 16555; // 0x6c9 PushI
	AddReply(var_550_int, var_551_int, var_552_int); // 0x6ca TObjFunc
	goto Label_1743; // 0x6cc Jump
}


func_2715(var_92_string)
{
	var_92_string = "ui/NPC_Mark.png"; // 0xa9b MovS
	return 0; // 0xa9c Return
}


func_2202(var_2_object, var_116_string)
{
	var_117_bool = 0; // 0x89b PushV
	func_2717(var_117_bool); // 0x89c Call
	var_118_bool = var_117_bool == 0; // 0x89e Not
	if(var_118_bool == 0) goto Label_2209; // 0x89f JumpB
	return 0; // 0x8a0 Return
	
Label_2209:
	var_119_bool = var_116_string == var_2_object; // 0x8a1 Eq
	if(var_119_bool == 0) goto Label_2212; // 0x8a2 JumpB
	return 0; // 0x8a3 Return
	
Label_2212:
	var_120_string = ""; // 0x8a4 PushV
	var_120_string = var_116_string; // 0x8a5 Mov
	func_2622(var_120_string); // 0x8a6 Call
	var_2_object = var_116_string; // 0x8a8 TMov
	return 0; // 0x8a9 Return
}


func_2717(var_38_bool)
{
	var_38_bool = 1; // 0xa9d MovB
	return 0; // 0xa9e Return
}


func_3229(var_93_int)
{
	var_94_int = 0; var_95_int = 0; // 0xc9d PushV
	var_96_string = "player"; // 0xc9e PushS
	GetVariable(var_96_string, var_95_int); // 0xc9f Func
	var_97_int = 0; // 0xca1 PushI
	var_98_bool = var_95_int == var_97_int; // 0xca2 Eq
	if(var_98_bool == 0) goto Label_3239; // 0xca3 JumpB
	var_93_int = 200001; // 0xca4 MovI
	return 2; // 0xca5 Return
	
Label_3239:
	var_99_int = 1; // 0xca7 PushI
	var_100_bool = var_95_int == var_99_int; // 0xca8 Eq
	if(var_100_bool == 0) goto Label_3244; // 0xca9 JumpB
	var_93_int = 200002; // 0xcaa MovI
	return 2; // 0xcab Return
	
Label_3244:
	var_93_int = 200003; // 0xcac MovI
	return 2; // 0xcad Return
}


func_2719()
{
	var_43_string = "ood1Mark1"; // 0xaa0 PushS
	var_44_int = 1; // 0xaa1 PushI
	SetVariable(var_43_string, var_44_int); // 0xaa2 Func
	return 0; // 0xaa4 Return
}


func_2977(var_321_bool)
{
	var_323_int = 0; var_324_string = ""; // 0xba2 PushV
	var_324_string = "ood1Mark7"; // 0xba3 MovS
	func_2657(var_323_int, var_324_string); // 0xba4 Call
	var_325_int = 0; // 0xba6 PushI
	var_326_bool = var_323_int == var_325_int; // 0xba7 Eq
	if(var_326_bool == 0) goto Label_2987; // 0xba8 JumpB
	var_321_bool = 1; // 0xba9 MovB
	return 0; // 0xbaa Return
	
Label_2987:
	var_321_bool = 0; // 0xbab MovB
	return 0; // 0xbac Return
}


func_2725()
{
	var_106_string = "ood1Mark2"; // 0xaa6 PushS
	var_107_int = 1; // 0xaa7 PushI
	SetVariable(var_106_string, var_107_int); // 0xaa8 Func
	return 0; // 0xaaa Return
}


func_1447(var_0_object, var_1_object, var_2_object, var_3_object, var_462_object, var_463_object)
{
	var_0_object = var_463_object; // 0x5a8 TMov
	var_1_object = var_462_object; // 0x5a9 TMov
	var_3_object = 0; // 0x5aa TMovB
	var_468_int = 1; // 0x5ab PushI
	if(var_468_int == 0) goto Label_1475; // 0x5ac JumpB
	var_469_string = ""; // 0x5ad PushV
	var_469_string = "Neutral"; // 0x5ae MovS
	func_1505(var_463_object, var_469_string); // 0x5af Call
	var_474_int = 9489; // 0x5b1 PushI
	SetMessage(var_474_int); // 0x5b2 TObjFunc
	ClearReplies(); // 0x5b4 TObjFunc
	var_475_int = 9490; // 0x5b6 PushI
	var_476_int = 10433; // 0x5b7 PushI
	var_477_int = 10432; // 0x5b8 PushI
	AddReply(var_475_int, var_476_int, var_477_int); // 0x5b9 TObjFunc
	var_478_int = 9499; // 0x5bb PushI
	var_479_int = 10433; // 0x5bc PushI
	var_480_int = 10441; // 0x5bd PushI
	AddReply(var_478_int, var_479_int, var_480_int); // 0x5be TObjFunc
	goto Label_1475; // 0x5c0 Jump
	
Label_1475:
	var_481_bool = 0; // 0x5c3 PushV
	func_2717(var_481_bool); // 0x5c4 Call
	if(var_481_bool == 0) goto Label_1490; // 0x5c6 JumpB
	
Label_1479:
	lshWaitForAnimEnd(); // 0x5c7 Func
	var_482_object = var_3_object; // 0x5c9 PushT
	if(var_482_object == 0) goto Label_1484; // 0x5ca JumpB
	goto Label_1489; // 0x5cb Jump
	
Label_1489:
	goto Label_1504; // 0x5d1 Jump
	
Label_1504:
	return 0; // 0x5e0 Return
	
Label_1484:
	var_483_string = ""; // 0x5cc PushV
	var_483_string = var_2_object; // 0x5cd MovT
	func_2622(var_483_string); // 0x5ce Call
	goto Label_1479; // 0x5d0 Jump
	
Label_1490:
	var_484_string = "all"; // 0x5d2 PushS
	var_485_string = "idle"; // 0x5d3 PushS
	PlayAnimation(var_484_string, var_485_string); // 0x5d4 Func
	
Label_1494:
	WaitForAnimEnd(); // 0x5d6 Func
	var_486_object = var_3_object; // 0x5d8 PushT
	if(var_486_object == 0) goto Label_1499; // 0x5d9 JumpB
	goto Label_1504; // 0x5da Jump
	
Label_1499:
	var_487_string = "all"; // 0x5db PushS
	var_488_string = "idle"; // 0x5dc PushS
	PlayAnimation(var_487_string, var_488_string); // 0x5dd Func
	goto Label_1494; // 0x5df Jump
}


func_2731()
{
	var_116_string = "ood1Mark3"; // 0xaac PushS
	var_117_int = 1; // 0xaad PushI
	SetVariable(var_116_string, var_117_int); // 0xaae Func
	return 0; // 0xab0 Return
}


func_2989(var_337_bool)
{
	var_339_int = 0; var_340_string = ""; // 0xbae PushV
	var_340_string = "ood1Mark8"; // 0xbaf MovS
	func_2657(var_339_int, var_340_string); // 0xbb0 Call
	var_341_int = 0; // 0xbb2 PushI
	var_342_bool = var_339_int == var_341_int; // 0xbb3 Eq
	if(var_342_bool == 0) goto Label_2999; // 0xbb4 JumpB
	var_337_bool = 1; // 0xbb5 MovB
	return 0; // 0xbb6 Return
	
Label_2999:
	var_337_bool = 0; // 0xbb7 MovB
	return 0; // 0xbb8 Return
}


func_3246()
{
	var_66_object = Obj(); var_67_object = Obj(); // 0xcae PushV
	var_68_string = "Adding diary entry"; // 0xcaf PushS
	Trace(var_68_string); // 0xcb0 Func
	var_69_int = 170; // 0xcb2 PushI
	var_70_int = 0; // 0xcb3 PushI
	var_71_int = 15422; // 0xcb4 PushI
	CreateDiaryEntry(var_67_object, var_69_int, var_70_int, var_71_int); // 0xcb5 Func
	var_72_bool = 0; var_73_object = Obj(); var_74_int = 0; // 0xcb7 PushV
	var_73_object = var_67_object; // 0xcb8 Mov
	var_74_int = -1; // 0xcb9 MovI
	func_3150(var_72_bool, var_73_object, var_74_int); // 0xcba Call
	return 2; // 0xcbc Return
}


func_175(var_2_object, var_45_string)
{
	var_46_bool = 0; // 0xb0 PushV
	func_2717(var_46_bool); // 0xb1 Call
	var_47_bool = var_46_bool == 0; // 0xb3 Not
	if(var_47_bool == 0) goto Label_182; // 0xb4 JumpB
	return 0; // 0xb5 Return
	
Label_182:
	var_48_bool = var_45_string == var_2_object; // 0xb6 Eq
	if(var_48_bool == 0) goto Label_185; // 0xb7 JumpB
	return 0; // 0xb8 Return
	
Label_185:
	var_49_string = ""; // 0xb9 PushV
	var_49_string = var_45_string; // 0xba Mov
	func_2622(var_49_string); // 0xbb Call
	var_2_object = var_45_string; // 0xbd TMov
	return 0; // 0xbe Return
}


func_2737()
{
	var_47_object = Obj(); var_48_object = Obj(); // 0xab1 PushV
	var_49_object = Obj(); // 0xab2 PushV
	func_3179(var_49_object); // 0xab3 Call
	var_48_object = var_49_object; // 0xab4 Mov
	var_56_string = "d1q01MarkAboutJulia"; // 0xab6 PushS
	var_57_string = "pt_map_julia"; // 0xab7 PushS
	var_58_int = 1; // 0xab8 PushI
	var_59_int = 8647; // 0xab9 PushI
	var_60_float = 0; // 0xaba PushV
	func_2685(var_60_float); // 0xabb Call
	AddMark(var_56_string, var_57_string, var_58_int, var_59_int, var_60_float); // 0xabd ObjFunc
	var_63_string = "d1q01MarkAboutLara"; // 0xabf PushS
	var_64_string = "pt_map_lara"; // 0xac0 PushS
	var_65_int = 1; // 0xac1 PushI
	var_66_int = 8646; // 0xac2 PushI
	var_67_float = 0; // 0xac3 PushV
	func_2685(var_67_float); // 0xac4 Call
	AddMark(var_63_string, var_64_string, var_65_int, var_66_int, var_67_float); // 0xac6 ObjFunc
	return 2; // 0xac8 Return
}


func_1970(var_0_object, var_1_object, var_2_object, var_3_object, var_575_object, var_576_object)
{
	var_0_object = var_576_object; // 0x7b3 TMov
	var_1_object = var_575_object; // 0x7b4 TMov
	var_3_object = 0; // 0x7b5 TMovB
	var_581_int = 1; // 0x7b6 PushI
	if(var_581_int == 0) goto Label_1993; // 0x7b7 JumpB
	var_582_string = ""; // 0x7b8 PushV
	var_582_string = "Neutral"; // 0x7b9 MovS
	func_2023(var_576_object, var_582_string); // 0x7ba Call
	var_587_int = 10917; // 0x7bc PushI
	SetMessage(var_587_int); // 0x7bd TObjFunc
	ClearReplies(); // 0x7bf TObjFunc
	var_588_int = 10918; // 0x7c1 PushI
	var_589_int = -1; // 0x7c2 PushI
	var_590_int = 12067; // 0x7c3 PushI
	AddReply(var_588_int, var_589_int, var_590_int); // 0x7c4 TObjFunc
	goto Label_1993; // 0x7c6 Jump
	
Label_1993:
	var_591_bool = 0; // 0x7c9 PushV
	func_2717(var_591_bool); // 0x7ca Call
	if(var_591_bool == 0) goto Label_2008; // 0x7cc JumpB
	
Label_1997:
	lshWaitForAnimEnd(); // 0x7cd Func
	var_592_object = var_3_object; // 0x7cf PushT
	if(var_592_object == 0) goto Label_2002; // 0x7d0 JumpB
	goto Label_2007; // 0x7d1 Jump
	
Label_2007:
	goto Label_2022; // 0x7d7 Jump
	
Label_2022:
	return 0; // 0x7e6 Return
	
Label_2002:
	var_593_string = ""; // 0x7d2 PushV
	var_593_string = var_2_object; // 0x7d3 MovT
	func_2622(var_593_string); // 0x7d4 Call
	goto Label_1997; // 0x7d6 Jump
	
Label_2008:
	var_594_string = "all"; // 0x7d8 PushS
	var_595_string = "idle"; // 0x7d9 PushS
	PlayAnimation(var_594_string, var_595_string); // 0x7da Func
	
Label_2012:
	WaitForAnimEnd(); // 0x7dc Func
	var_596_object = var_3_object; // 0x7de PushT
	if(var_596_object == 0) goto Label_2017; // 0x7df JumpB
	goto Label_2022; // 0x7e0 Jump
	
Label_2017:
	var_597_string = "all"; // 0x7e1 PushS
	var_598_string = "idle"; // 0x7e2 PushS
	PlayAnimation(var_597_string, var_598_string); // 0x7e3 Func
	goto Label_2012; // 0x7e5 Jump
}


func_2484(var_2_object, var_46_string)
{
	var_47_bool = 0; // 0x9b5 PushV
	func_2717(var_47_bool); // 0x9b6 Call
	var_48_bool = var_47_bool == 0; // 0x9b8 Not
	if(var_48_bool == 0) goto Label_2491; // 0x9b9 JumpB
	return 0; // 0x9ba Return
	
Label_2491:
	var_49_bool = var_46_string == var_2_object; // 0x9bb Eq
	if(var_49_bool == 0) goto Label_2494; // 0x9bc JumpB
	return 0; // 0x9bd Return
	
Label_2494:
	var_50_string = ""; // 0x9be PushV
	var_50_string = var_46_string; // 0x9bf Mov
	func_2622(var_50_string); // 0x9c0 Call
	var_2_object = var_46_string; // 0x9c2 TMov
	return 0; // 0x9c3 Return
}


func_3001(var_254_bool, var_255_object)
{
	var_256_bool = 0; var_257_object = Obj(); // 0xbba PushV
	var_257_object = var_255_object; // 0xbbb Mov
	func_3105(var_257_object); // 0xbbc Call
	if(var_256_bool == 0) goto Label_3009; // 0xbbe JumpB
	var_254_bool = 1; // 0xbbf MovB
	return 0; // 0xbc0 Return
	
Label_3009:
	var_254_bool = 0; // 0xbc1 MovB
	return 0; // 0xbc2 Return
}


func_3262()
{
	var_91_object = Obj(); var_92_object = Obj(); // 0xcbe PushV
	var_93_string = "Adding diary entry"; // 0xcbf PushS
	Trace(var_93_string); // 0xcc0 Func
	var_94_int = 171; // 0xcc2 PushI
	var_95_int = 0; // 0xcc3 PushI
	var_96_int = 15423; // 0xcc4 PushI
	CreateDiaryEntry(var_92_object, var_94_int, var_95_int, var_96_int); // 0xcc5 Func
	var_97_bool = 0; var_98_object = Obj(); var_99_int = 0; // 0xcc7 PushV
	var_98_object = var_92_object; // 0xcc8 Mov
	var_99_int = 170; // 0xcc9 MovI
	func_3150(var_97_bool, var_98_object, var_99_int); // 0xcca Call
	return 2; // 0xccc Return
}


func_3011(var_232_bool, var_233_object)
{
	var_234_bool = 0; var_235_object = Obj(); // 0xbc4 PushV
	var_235_object = var_233_object; // 0xbc5 Mov
	func_3116(var_235_object); // 0xbc6 Call
	if(var_234_bool == 0) goto Label_3019; // 0xbc8 JumpB
	var_232_bool = 1; // 0xbc9 MovB
	return 0; // 0xbca Return
	
Label_3019:
	var_232_bool = 0; // 0xbcb MovB
	return 0; // 0xbcc Return
}


func_2762()
{
	var_70_object = Obj(); var_71_string = ""; var_72_float = 0; // 0xacb PushV
	var_73_object = Obj(); // 0xacc PushV
	func_3179(var_73_object); // 0xacd Call
	var_70_object = var_73_object; // 0xace Mov
	var_71_string = "pt_map_julia"; // 0xad0 MovS
	var_72_float = 2; // 0xad1 MovI
	func_3196(var_70_object, var_71_string, var_72_float); // 0xad2 Call
	var_93_object = Obj(); // 0xad4 PushV
	func_3179(var_93_object); // 0xad5 Call
	ShowMap(var_93_object); // 0xad7 ObjFunc
	return 0; // 0xad9 Return
}


func_3021(var_132_bool)
{
	var_134_int = 0; var_135_string = ""; // 0xbce PushV
	var_135_string = "d7q02"; // 0xbcf MovS
	func_2657(var_134_int, var_135_string); // 0xbd0 Call
	var_138_int = 0; // 0xbd2 PushI
	var_139_bool = var_134_int == var_138_int; // 0xbd3 Eq
	if(var_139_bool == 0) goto Label_3031; // 0xbd4 JumpB
	var_132_bool = 1; // 0xbd5 MovB
	return 0; // 0xbd6 Return
	
Label_3031:
	var_132_bool = 0; // 0xbd7 MovB
	return 0; // 0xbd8 Return
}


func_3278()
{
	var_35_int = 0; var_36_int = 0; // 0xcce PushV
	var_37_bool = GlobalVars[1]; // 0xccf PushGE
	var_37_bool = 0; // 0xcd0 MovB
	GlobalVars[1] = var_37_bool; // 0xcd1 PopGE
	var_36_int = 1; // 0xcd2 MovI
	
Label_3283:
	var_38_int = 12; // 0xcd3 PushI
	var_39_bool = var_36_int < var_38_int; // 0xcd4 LT
	if(var_39_bool == 0) goto Label_3294; // 0xcd5 JumpB
	var_40_string = "Performance"; // 0xcd6 PushS
	var_41_int = var_40_string + var_36_int; // 0xcd7 Add
	var_42_int = 0; // 0xcd8 PushI
	SetVariable(var_41_int, var_42_int); // 0xcd9 Func
	var_43_int = 1; // 0xcdb PushI
	var_36_int = var_36_int + var_43_int; // 0xcdc Add2
	goto Label_3283; // 0xcdd Jump
	
Label_3294:
	return 2; // 0xcde Return
}


func_3033(var_283_bool)
{
	var_285_int = 0; var_286_string = ""; // 0xbda PushV
	var_286_string = "KnowEva"; // 0xbdb MovS
	func_2657(var_285_int, var_286_string); // 0xbdc Call
	var_287_int = 1; // 0xbde PushI
	var_288_bool = var_285_int == var_287_int; // 0xbdf Eq
	if(var_288_bool == 0) goto Label_3043; // 0xbe0 JumpB
	var_283_bool = 1; // 0xbe1 MovB
	return 0; // 0xbe2 Return
	
Label_3043:
	var_283_bool = 0; // 0xbe3 MovB
	return 0; // 0xbe4 Return
}


func_2778()
{
	var_138_string = "ood1Mark4"; // 0xadb PushS
	var_139_int = 1; // 0xadc PushI
	SetVariable(var_138_string, var_139_int); // 0xadd Func
	return 0; // 0xadf Return
}


func_3295(var_162_int)
{
	var_163_int = 0; var_164_int = 0; // 0xcdf PushV
	var_165_int = 0; // 0xce0 PushV
	func_2690(var_165_int); // 0xce1 Call
	var_164_int = var_165_int; // 0xce2 Mov
	var_171_int = 0; // 0xce4 PushV
	func_2699(var_171_int); // 0xce5 Call
	var_172_int = 6; // 0xce7 PushI
	var_173_bool = var_171_int <= var_172_int; // 0xce8 LE
	if(var_173_bool == 0) goto Label_3308; // 0xce9 JumpB
	var_174_int = 1; // 0xcea PushI
	var_164_int = var_164_int - var_174_int; // 0xceb Sub2
	
Label_3308:
	var_162_int = var_164_int; // 0xcec Mov
	return 2; // 0xced Return
}


func_2784()
{
	var_144_string = "ood1Mark5"; // 0xae1 PushS
	var_145_int = 1; // 0xae2 PushI
	SetVariable(var_144_string, var_145_int); // 0xae3 Func
	return 0; // 0xae5 Return
}


func_1505(var_2_object, var_41_string)
{
	var_42_bool = 0; // 0x5e2 PushV
	func_2717(var_42_bool); // 0x5e3 Call
	var_43_bool = var_42_bool == 0; // 0x5e5 Not
	if(var_43_bool == 0) goto Label_1512; // 0x5e6 JumpB
	return 0; // 0x5e7 Return
	
Label_1512:
	var_44_bool = var_41_string == var_2_object; // 0x5e8 Eq
	if(var_44_bool == 0) goto Label_1515; // 0x5e9 JumpB
	return 0; // 0x5ea Return
	
Label_1515:
	var_45_string = ""; // 0x5eb PushV
	var_45_string = var_41_string; // 0x5ec Mov
	func_2622(var_45_string); // 0x5ed Call
	var_2_object = var_41_string; // 0x5ef TMov
	return 0; // 0x5f0 Return
}


func_3045(var_299_bool)
{
	var_301_int = 0; var_302_string = ""; // 0xbe6 PushV
	var_302_string = "KnowJulia"; // 0xbe7 MovS
	func_2657(var_301_int, var_302_string); // 0xbe8 Call
	var_303_int = 1; // 0xbea PushI
	var_304_bool = var_301_int == var_303_int; // 0xbeb Eq
	if(var_304_bool == 0) goto Label_3055; // 0xbec JumpB
	var_299_bool = 1; // 0xbed MovB
	return 0; // 0xbee Return
	
Label_3055:
	var_299_bool = 0; // 0xbef MovB
	return 0; // 0xbf0 Return
}


func_2790()
{
	var_150_string = "ood1Mark6"; // 0xae7 PushS
	var_151_int = 1; // 0xae8 PushI
	SetVariable(var_150_string, var_151_int); // 0xae9 Func
	return 0; // 0xaeb Return
}


func_2023(var_2_object, var_41_string)
{
	var_42_bool = 0; // 0x7e8 PushV
	func_2717(var_42_bool); // 0x7e9 Call
	var_43_bool = var_42_bool == 0; // 0x7eb Not
	if(var_43_bool == 0) goto Label_2030; // 0x7ec JumpB
	return 0; // 0x7ed Return
	
Label_2030:
	var_44_bool = var_41_string == var_2_object; // 0x7ee Eq
	if(var_44_bool == 0) goto Label_2033; // 0x7ef JumpB
	return 0; // 0x7f0 Return
	
Label_2033:
	var_45_string = ""; // 0x7f1 PushV
	var_45_string = var_41_string; // 0x7f2 Mov
	func_2622(var_45_string); // 0x7f3 Call
	var_2_object = var_41_string; // 0x7f5 TMov
	return 0; // 0x7f6 Return
}


func_2796()
{
	var_156_string = "ood1Mark7"; // 0xaed PushS
	var_157_int = 1; // 0xaee PushI
	SetVariable(var_156_string, var_157_int); // 0xaef Func
	return 0; // 0xaf1 Return
}


func_1773(var_2_object, var_53_string)
{
	var_54_bool = 0; // 0x6ee PushV
	func_2717(var_54_bool); // 0x6ef Call
	var_55_bool = var_54_bool == 0; // 0x6f1 Not
	if(var_55_bool == 0) goto Label_1780; // 0x6f2 JumpB
	return 0; // 0x6f3 Return
	
Label_1780:
	var_56_bool = var_53_string == var_2_object; // 0x6f4 Eq
	if(var_56_bool == 0) goto Label_1783; // 0x6f5 JumpB
	return 0; // 0x6f6 Return
	
Label_1783:
	var_57_string = ""; // 0x6f7 PushV
	var_57_string = var_53_string; // 0x6f8 Mov
	func_2622(var_57_string); // 0x6f9 Call
	var_2_object = var_53_string; // 0x6fb TMov
	return 0; // 0x6fc Return
}


func_3310(var_146_bool)
{
	var_147_int = 0; var_148_int = 0; var_149_int = 0; var_150_int = 0; // 0xcee PushV
	var_151_bool = 0; // 0xcef PushV
	var_151_bool = 1; // 0xcf0 MovB
	var_152_int = 0; // 0xcf1 PushV
	func_2699(var_152_int); // 0xcf2 Call
	var_157_int = 23; // 0xcf4 PushI
	var_158_bool = var_152_int >= var_157_int; // 0xcf5 GE
	if(var_158_bool == 0) goto Label_3326; // 0xcf6 JumpB
	var_159_int = 0; // 0xcf7 PushV
	func_2699(var_159_int); // 0xcf8 Call
	var_160_int = 6; // 0xcfa PushI
	var_161_bool = var_159_int <= var_160_int; // 0xcfb LE
	if(var_161_bool == 0) goto Label_3326; // 0xcfc JumpB
	var_151_bool = 0; // 0xcfd MovB
	
Label_3326:
	if(var_151_bool == 0) goto Label_3338; // 0xcfe JumpB
	var_162_int = 0; // 0xcff PushV
	func_3295(var_162_int); // 0xd00 Call
	var_149_int = var_162_int; // 0xd01 Mov
	var_175_string = "Performance"; // 0xd03 PushS
	var_176_int = var_175_string + var_149_int; // 0xd04 Add
	GetVariable(var_176_int, var_150_int); // 0xd05 Func
	var_177_int = 0; // 0xd07 PushI
	var_146_bool = var_150_int == var_177_int; // 0xd08 Eq2
	return 4; // 0xd09 Return
	
Label_3338:
	var_146_bool = 0; // 0xd0a MovB
	return 4; // 0xd0b Return
}


func_2545(var_36_bool)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0; // 0x9f1 PushV
	GetPosition(var_42_cvector); // 0x9f2 ObjFunc
	GetPosition(var_43_cvector); // 0x9f4 Func
	var_44_cvector = var_42_cvector - var_43_cvector; // 0x9f6 Sub2
	var_46_float = GetByIndex(var_44_cvector, 0); // 0x9f7 PushE
	var_47_float = GetByIndex(var_44_cvector, 2); // 0x9f8 PushE
	Rotate(var_46_float, var_47_float, var_45_bool); // 0x9f9 Func
	var_36_bool = var_45_bool; // 0x9fb Mov
	return 8; // 0x9fc Return
}


func_2802()
{
	var_162_string = "ood1Mark8"; // 0xaf3 PushS
	var_163_int = 1; // 0xaf4 PushI
	SetVariable(var_162_string, var_163_int); // 0xaf5 Func
	return 0; // 0xaf7 Return
}


func_3057(var_315_bool)
{
	var_317_int = 0; var_318_string = ""; // 0xbf2 PushV
	var_318_string = "KnowMaria"; // 0xbf3 MovS
	func_2657(var_317_int, var_318_string); // 0xbf4 Call
	var_319_int = 1; // 0xbf6 PushI
	var_320_bool = var_317_int == var_319_int; // 0xbf7 Eq
	if(var_320_bool == 0) goto Label_3067; // 0xbf8 JumpB
	var_315_bool = 1; // 0xbf9 MovB
	return 0; // 0xbfa Return
	
Label_3067:
	var_315_bool = 0; // 0xbfb MovB
	return 0; // 0xbfc Return
}


func_2808()
{
	var_188_string = "KnowJulia"; // 0xaf9 PushS
	var_189_int = 1; // 0xafa PushI
	SetVariable(var_188_string, var_189_int); // 0xafb Func
	return 0; // 0xafd Return
}


func_3069(var_41_bool)
{
	var_43_int = 0; var_44_string = ""; // 0xbfe PushV
	var_44_string = "ood3Mark1"; // 0xbff MovS
	func_2657(var_43_int, var_44_string); // 0xc00 Call
	var_47_int = 0; // 0xc02 PushI
	var_48_bool = var_43_int == var_47_int; // 0xc03 Eq
	if(var_48_bool == 0) goto Label_3079; // 0xc04 JumpB
	var_41_bool = 1; // 0xc05 MovB
	return 0; // 0xc06 Return
	
Label_3079:
	var_41_bool = 0; // 0xc07 MovB
	return 0; // 0xc08 Return
}


func_2814()
{
	var_43_object = Obj(); var_44_object = Obj(); // 0xafe PushV
	var_45_string = "d7q02"; // 0xaff PushS
	var_46_int = 1; // 0xb00 PushI
	SetVariable(var_45_string, var_46_int); // 0xb01 Func
	var_47_object = Obj(); // 0xb03 PushV
	func_3179(var_47_object); // 0xb04 Call
	var_44_object = var_47_object; // 0xb05 Mov
	var_54_string = "d7q02MarkGotoCemetery"; // 0xb07 PushS
	var_55_string = "pt_d7q02_corpse"; // 0xb08 PushS
	var_56_int = 0; // 0xb09 PushI
	var_57_int = 15427; // 0xb0a PushI
	var_58_float = 0; // 0xb0b PushV
	func_2685(var_58_float); // 0xb0c Call
	AddMark(var_54_string, var_55_string, var_56_int, var_57_int, var_58_float); // 0xb0e ObjFunc
	var_61_string = "d7q02MarkGotoAlexandr"; // 0xb10 PushS
	var_62_string = "pt_map_alexandr"; // 0xb11 PushS
	var_63_int = 0; // 0xb12 PushI
	var_64_int = 15428; // 0xb13 PushI
	var_65_float = 0; // 0xb14 PushV
	func_2685(var_65_float); // 0xb15 Call
	AddMark(var_61_string, var_62_string, var_63_int, var_64_int, var_65_float); // 0xb17 ObjFunc
	func_3246(); // 0xb1a Call
	func_3262(); // 0xb1d Call
	var_100_object = Obj(); var_101_string = ""; // 0xb1f PushV
	var_101_string = "quest_d7_02"; // 0xb20 MovS
	func_2662(var_100_object, var_101_string); // 0xb21 Call
	var_108_bool = 0; var_109_string = ""; var_110_string = ""; // 0xb23 PushV
	var_109_string = "quest_d7_02"; // 0xb24 MovS
	var_110_string = "place_corpse"; // 0xb25 MovS
	func_2673(var_108_bool, var_109_string, var_110_string); // 0xb26 Call
	return 2; // 0xb28 Return
}


