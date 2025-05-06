task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0xa7 PushI
	if(var_38_int == 0) goto Label_258; // 0xa8 JumpB
	func_2985(); // 0xaa NEW_2
	var_40_int = 36960; // 0xac PushI
	var_41_bool = var_36_bool == var_40_int; // 0xad Eq
	if(var_41_bool == 0) goto Label_200; // 0xae JumpB
	var_42_string = ""; // 0xaf PushV
	var_42_string = "Neutral"; // 0xb0 MovS
	func_144(var_37_cvector, var_42_string); // 0xb1 NEW_2
	var_59_int = 535284; // 0xb3 PushI
	SetMessage(var_59_int); // 0xb4 TObjFunc
	ClearReplies(); // 0xb6 TObjFunc
	var_60_int = 535285; // 0xb8 PushI
	var_61_int = 36962; // 0xb9 PushI
	var_62_int = 36961; // 0xba PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0xbb TObjFunc
	var_63_int = 535292; // 0xbd PushI
	var_64_int = -1; // 0xbe PushI
	var_65_int = 36968; // 0xbf PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0xc0 TObjFunc
	var_66_int = 535293; // 0xc2 PushI
	var_67_int = -1; // 0xc3 PushI
	var_68_int = 36969; // 0xc4 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0xc5 TObjFunc
	return 0; // 0xc7 Return
	
Label_200:
	var_69_int = 36962; // 0xc8 PushI
	var_70_bool = var_36_bool == var_69_int; // 0xc9 Eq
	if(var_70_bool == 0) goto Label_223; // 0xca JumpB
	var_71_string = ""; // 0xcb PushV
	var_71_string = "Neutral"; // 0xcc MovS
	func_144(var_37_cvector, var_71_string); // 0xcd NEW_2
	var_72_int = 535286; // 0xcf PushI
	SetMessage(var_72_int); // 0xd0 TObjFunc
	ClearReplies(); // 0xd2 TObjFunc
	var_73_int = 535287; // 0xd4 PushI
	var_74_int = 36964; // 0xd5 PushI
	var_75_int = 36963; // 0xd6 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0xd7 TObjFunc
	var_76_int = 535291; // 0xd9 PushI
	var_77_int = -1; // 0xda PushI
	var_78_int = 36967; // 0xdb PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0xdc TObjFunc
	return 0; // 0xde Return
	
Label_223:
	var_79_int = 36964; // 0xdf PushI
	var_80_bool = var_36_bool == var_79_int; // 0xe0 Eq
	if(var_80_bool == 0) goto Label_246; // 0xe1 JumpB
	var_81_string = ""; // 0xe2 PushV
	var_81_string = "Neutral"; // 0xe3 MovS
	func_144(var_37_cvector, var_81_string); // 0xe4 NEW_2
	var_82_int = 535288; // 0xe6 PushI
	SetMessage(var_82_int); // 0xe7 TObjFunc
	ClearReplies(); // 0xe9 TObjFunc
	var_83_int = 535289; // 0xeb PushI
	var_84_int = -1; // 0xec PushI
	var_85_int = 36965; // 0xed PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0xee TObjFunc
	var_86_int = 535290; // 0xf0 PushI
	var_87_int = -1; // 0xf1 PushI
	var_88_int = 36966; // 0xf2 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0xf3 TObjFunc
	return 0; // 0xf5 Return
	
Label_246:
	var_3_string = 1; // 0xf6 TMovB
	var_89_bool = 0; // 0xf7 PushV
	func_3177(var_89_bool); // 0xf8 NEW_2
	if(var_89_bool == 0) goto Label_254; // 0xfa JumpB
	lshStopAnimation(); // 0xfb Func
	goto Label_256; // 0xfd Jump
	
Label_256:
	return 0; // 0x100 Return
	
Label_254:
	StopAnimation(); // 0xfe Func
	
Label_258:
	return 0; // 0x102 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x1aa PushI
	if(var_38_int == 0) goto Label_535; // 0x1ab JumpB
	func_2985(); // 0x1ad NEW_2
	var_40_int = 429; // 0x1af PushI
	var_41_bool = var_36_bool == var_40_int; // 0x1b0 Eq
	if(var_41_bool == 0) goto Label_459; // 0x1b1 JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x1b2 PushV
	var_42_object = var_1_object; // 0x1b3 MovT
	var_43_object = var_0_object; // 0x1b4 MovT
	func_3282(); // 0x1b5 NEW_2
	var_46_string = ""; // 0x1b7 PushV
	var_46_string = "Neutral"; // 0x1b8 MovS
	func_403(var_37_cvector, var_46_string); // 0x1b9 NEW_2
	var_63_int = 500370; // 0x1bb PushI
	SetMessage(var_63_int); // 0x1bc TObjFunc
	ClearReplies(); // 0x1be TObjFunc
	var_64_int = 500371; // 0x1c0 PushI
	var_65_int = 432; // 0x1c1 PushI
	var_66_int = 430; // 0x1c2 PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0x1c3 TObjFunc
	var_67_int = 500372; // 0x1c5 PushI
	var_68_int = 437; // 0x1c6 PushI
	var_69_int = 431; // 0x1c7 PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0x1c8 TObjFunc
	return 0; // 0x1ca Return
	
Label_459:
	var_70_int = 437; // 0x1cb PushI
	var_71_bool = var_36_bool == var_70_int; // 0x1cc Eq
	if(var_71_bool == 0) goto Label_477; // 0x1cd JumpB
	var_72_string = ""; // 0x1ce PushV
	var_72_string = "Neutral"; // 0x1cf MovS
	func_403(var_37_cvector, var_72_string); // 0x1d0 NEW_2
	var_73_int = 500377; // 0x1d2 PushI
	SetMessage(var_73_int); // 0x1d3 TObjFunc
	ClearReplies(); // 0x1d5 TObjFunc
	var_74_int = 500378; // 0x1d7 PushI
	var_75_int = 432; // 0x1d8 PushI
	var_76_int = 438; // 0x1d9 PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0x1da TObjFunc
	return 0; // 0x1dc Return
	
Label_477:
	var_77_int = 432; // 0x1dd PushI
	var_78_bool = var_36_bool == var_77_int; // 0x1de Eq
	if(var_78_bool == 0) goto Label_500; // 0x1df JumpB
	var_79_string = ""; // 0x1e0 PushV
	var_79_string = "Neutral"; // 0x1e1 MovS
	func_403(var_37_cvector, var_79_string); // 0x1e2 NEW_2
	var_80_int = 500373; // 0x1e4 PushI
	SetMessage(var_80_int); // 0x1e5 TObjFunc
	ClearReplies(); // 0x1e7 TObjFunc
	var_81_int = 500374; // 0x1e9 PushI
	var_82_int = 435; // 0x1ea PushI
	var_83_int = 433; // 0x1eb PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x1ec TObjFunc
	var_84_int = 500375; // 0x1ee PushI
	var_85_int = 435; // 0x1ef PushI
	var_86_int = 434; // 0x1f0 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x1f1 TObjFunc
	return 0; // 0x1f3 Return
	
Label_500:
	var_87_int = 435; // 0x1f4 PushI
	var_88_bool = var_36_bool == var_87_int; // 0x1f5 Eq
	if(var_88_bool == 0) goto Label_523; // 0x1f6 JumpB
	var_89_string = ""; // 0x1f7 PushV
	var_89_string = "Neutral"; // 0x1f8 MovS
	func_403(var_37_cvector, var_89_string); // 0x1f9 NEW_2
	var_90_int = 500376; // 0x1fb PushI
	SetMessage(var_90_int); // 0x1fc TObjFunc
	ClearReplies(); // 0x1fe TObjFunc
	var_91_int = 500381; // 0x200 PushI
	var_92_int = -1; // 0x201 PushI
	var_93_int = 442; // 0x202 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x203 TObjFunc
	var_94_int = 500379; // 0x205 PushI
	var_95_int = -1; // 0x206 PushI
	var_96_int = 440; // 0x207 PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x208 TObjFunc
	return 0; // 0x20a Return
	
Label_523:
	var_3_string = 1; // 0x20b TMovB
	var_97_bool = 0; // 0x20c PushV
	func_3177(var_97_bool); // 0x20d NEW_2
	if(var_97_bool == 0) goto Label_531; // 0x20f JumpB
	lshStopAnimation(); // 0x210 Func
	goto Label_533; // 0x212 Jump
	
Label_533:
	return 0; // 0x215 Return
	
Label_531:
	StopAnimation(); // 0x213 Func
	
Label_535:
	return 0; // 0x217 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x2bf PushI
	if(var_38_int == 0) goto Label_1054; // 0x2c0 JumpB
	func_2985(); // 0x2c2 NEW_2
	var_40_int = 35473; // 0x2c4 PushI
	var_41_bool = var_37_cvector == var_40_int; // 0x2c5 Eq
	if(var_41_bool == 0) goto Label_716; // 0x2c6 JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x2c7 PushV
	var_42_object = var_1_object; // 0x2c8 MovT
	var_43_object = var_0_object; // 0x2c9 MovT
	func_3185(); // 0x2ca NEW_2
	
Label_716:
	var_46_int = 10415; // 0x2cc PushI
	var_47_bool = var_36_bool == var_46_int; // 0x2cd Eq
	if(var_47_bool == 0) goto Label_744; // 0x2ce JumpB
	var_48_string = ""; // 0x2cf PushV
	var_48_string = "Neutral"; // 0x2d0 MovS
	func_680(var_37_cvector, var_48_string); // 0x2d1 NEW_2
	var_65_int = 509473; // 0x2d3 PushI
	SetMessage(var_65_int); // 0x2d4 TObjFunc
	ClearReplies(); // 0x2d6 TObjFunc
	var_66_bool = 0; var_67_object = Obj(); // 0x2d8 PushV
	var_67_object = var_1_object; // 0x2d9 MovT
	func_3315(var_67_object); // 0x2da NEW_2
	if(var_66_bool == 0) goto Label_738; // 0x2dc JumpB
	var_74_int = 533914; // 0x2dd PushI
	var_75_int = 35474; // 0x2de PushI
	var_76_int = 35473; // 0x2df PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0x2e0 TObjFunc
	
Label_738:
	var_77_int = 509487; // 0x2e2 PushI
	var_78_int = -1; // 0x2e3 PushI
	var_79_int = 10429; // 0x2e4 PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0x2e5 TObjFunc
	return 0; // 0x2e7 Return
	
Label_744:
	var_80_int = 10417; // 0x2e8 PushI
	var_81_bool = var_36_bool == var_80_int; // 0x2e9 Eq
	if(var_81_bool == 0) goto Label_747; // 0x2ea JumpB
	
Label_747:
	var_82_int = 10424; // 0x2eb PushI
	var_83_bool = var_36_bool == var_82_int; // 0x2ec Eq
	if(var_83_bool == 0) goto Label_765; // 0x2ed JumpB
	var_84_string = ""; // 0x2ee PushV
	var_84_string = "Autizm"; // 0x2ef MovS
	func_680(var_37_cvector, var_84_string); // 0x2f0 NEW_2
	var_85_int = 509482; // 0x2f2 PushI
	SetMessage(var_85_int); // 0x2f3 TObjFunc
	ClearReplies(); // 0x2f5 TObjFunc
	var_86_int = 509483; // 0x2f7 PushI
	var_87_int = 10426; // 0x2f8 PushI
	var_88_int = 10425; // 0x2f9 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x2fa TObjFunc
	return 0; // 0x2fc Return
	
Label_765:
	var_89_int = 10426; // 0x2fd PushI
	var_90_bool = var_36_bool == var_89_int; // 0x2fe Eq
	if(var_90_bool == 0) goto Label_788; // 0x2ff JumpB
	var_91_string = ""; // 0x300 PushV
	var_91_string = "Autizm"; // 0x301 MovS
	func_680(var_37_cvector, var_91_string); // 0x302 NEW_2
	var_92_int = 509484; // 0x304 PushI
	SetMessage(var_92_int); // 0x305 TObjFunc
	ClearReplies(); // 0x307 TObjFunc
	var_93_int = 509485; // 0x309 PushI
	var_94_int = -1; // 0x30a PushI
	var_95_int = 10427; // 0x30b PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0x30c TObjFunc
	var_96_int = 509486; // 0x30e PushI
	var_97_int = -1; // 0x30f PushI
	var_98_int = 10428; // 0x310 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x311 TObjFunc
	return 0; // 0x313 Return
	
Label_788:
	var_99_int = 10419; // 0x314 PushI
	var_100_bool = var_36_bool == var_99_int; // 0x315 Eq
	if(var_100_bool == 0) goto Label_816; // 0x316 JumpB
	var_101_string = ""; // 0x317 PushV
	var_101_string = "Autizm"; // 0x318 MovS
	func_680(var_37_cvector, var_101_string); // 0x319 NEW_2
	var_102_int = 509477; // 0x31b PushI
	SetMessage(var_102_int); // 0x31c TObjFunc
	ClearReplies(); // 0x31e TObjFunc
	var_103_int = 509478; // 0x320 PushI
	var_104_int = -1; // 0x321 PushI
	var_105_int = 10420; // 0x322 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x323 TObjFunc
	var_106_int = 509479; // 0x325 PushI
	var_107_int = -1; // 0x326 PushI
	var_108_int = 10421; // 0x327 PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x328 TObjFunc
	var_109_int = 509480; // 0x32a PushI
	var_110_int = -1; // 0x32b PushI
	var_111_int = 10422; // 0x32c PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x32d TObjFunc
	return 0; // 0x32f Return
	
Label_816:
	var_112_int = 35474; // 0x330 PushI
	var_113_bool = var_36_bool == var_112_int; // 0x331 Eq
	if(var_113_bool == 0) goto Label_839; // 0x332 JumpB
	var_114_string = ""; // 0x333 PushV
	var_114_string = "Disturbance"; // 0x334 MovS
	func_680(var_37_cvector, var_114_string); // 0x335 NEW_2
	var_115_int = 533915; // 0x337 PushI
	SetMessage(var_115_int); // 0x338 TObjFunc
	ClearReplies(); // 0x33a TObjFunc
	var_116_int = 533916; // 0x33c PushI
	var_117_int = 35476; // 0x33d PushI
	var_118_int = 35475; // 0x33e PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x33f TObjFunc
	var_119_int = 533923; // 0x341 PushI
	var_120_int = 35483; // 0x342 PushI
	var_121_int = 35482; // 0x343 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x344 TObjFunc
	return 0; // 0x346 Return
	
Label_839:
	var_122_int = 35483; // 0x347 PushI
	var_123_bool = var_36_bool == var_122_int; // 0x348 Eq
	if(var_123_bool == 0) goto Label_857; // 0x349 JumpB
	var_124_string = ""; // 0x34a PushV
	var_124_string = "Disturbance"; // 0x34b MovS
	func_680(var_37_cvector, var_124_string); // 0x34c NEW_2
	var_125_int = 533924; // 0x34e PushI
	SetMessage(var_125_int); // 0x34f TObjFunc
	ClearReplies(); // 0x351 TObjFunc
	var_126_int = 533925; // 0x353 PushI
	var_127_int = 35478; // 0x354 PushI
	var_128_int = 35484; // 0x355 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x356 TObjFunc
	return 0; // 0x358 Return
	
Label_857:
	var_129_int = 35476; // 0x359 PushI
	var_130_bool = var_36_bool == var_129_int; // 0x35a Eq
	if(var_130_bool == 0) goto Label_875; // 0x35b JumpB
	var_131_string = ""; // 0x35c PushV
	var_131_string = "Disturbance"; // 0x35d MovS
	func_680(var_37_cvector, var_131_string); // 0x35e NEW_2
	var_132_int = 533917; // 0x360 PushI
	SetMessage(var_132_int); // 0x361 TObjFunc
	ClearReplies(); // 0x363 TObjFunc
	var_133_int = 533918; // 0x365 PushI
	var_134_int = 35478; // 0x366 PushI
	var_135_int = 35477; // 0x367 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x368 TObjFunc
	return 0; // 0x36a Return
	
Label_875:
	var_136_int = 35499; // 0x36b PushI
	var_137_bool = var_36_bool == var_136_int; // 0x36c Eq
	if(var_137_bool == 0) goto Label_878; // 0x36d JumpB
	
Label_878:
	var_138_int = 35504; // 0x36e PushI
	var_139_bool = var_36_bool == var_138_int; // 0x36f Eq
	if(var_139_bool == 0) goto Label_896; // 0x370 JumpB
	var_140_string = ""; // 0x371 PushV
	var_140_string = "Disturbance"; // 0x372 MovS
	func_680(var_37_cvector, var_140_string); // 0x373 NEW_2
	var_141_int = 533940; // 0x375 PushI
	SetMessage(var_141_int); // 0x376 TObjFunc
	ClearReplies(); // 0x378 TObjFunc
	var_142_int = 533941; // 0x37a PushI
	var_143_int = 35506; // 0x37b PushI
	var_144_int = 35505; // 0x37c PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x37d TObjFunc
	return 0; // 0x37f Return
	
Label_896:
	var_145_int = 35506; // 0x380 PushI
	var_146_bool = var_36_bool == var_145_int; // 0x381 Eq
	if(var_146_bool == 0) goto Label_919; // 0x382 JumpB
	var_147_string = ""; // 0x383 PushV
	var_147_string = "Pain"; // 0x384 MovS
	func_680(var_37_cvector, var_147_string); // 0x385 NEW_2
	var_148_int = 533942; // 0x387 PushI
	SetMessage(var_148_int); // 0x388 TObjFunc
	ClearReplies(); // 0x38a TObjFunc
	var_149_int = 533943; // 0x38c PushI
	var_150_int = 35508; // 0x38d PushI
	var_151_int = 35507; // 0x38e PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x38f TObjFunc
	var_152_int = 533948; // 0x391 PushI
	var_153_int = 35510; // 0x392 PushI
	var_154_int = 35512; // 0x393 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x394 TObjFunc
	return 0; // 0x396 Return
	
Label_919:
	var_155_int = 35510; // 0x397 PushI
	var_156_bool = var_36_bool == var_155_int; // 0x398 Eq
	if(var_156_bool == 0) goto Label_937; // 0x399 JumpB
	var_157_string = ""; // 0x39a PushV
	var_157_string = "Pain"; // 0x39b MovS
	func_680(var_37_cvector, var_157_string); // 0x39c NEW_2
	var_158_int = 533946; // 0x39e PushI
	SetMessage(var_158_int); // 0x39f TObjFunc
	ClearReplies(); // 0x3a1 TObjFunc
	var_159_int = 533947; // 0x3a3 PushI
	var_160_int = -1; // 0x3a4 PushI
	var_161_int = 35511; // 0x3a5 PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x3a6 TObjFunc
	return 0; // 0x3a8 Return
	
Label_937:
	var_162_int = 35508; // 0x3a9 PushI
	var_163_bool = var_36_bool == var_162_int; // 0x3aa Eq
	if(var_163_bool == 0) goto Label_955; // 0x3ab JumpB
	var_164_string = ""; // 0x3ac PushV
	var_164_string = "Pain"; // 0x3ad MovS
	func_680(var_37_cvector, var_164_string); // 0x3ae NEW_2
	var_165_int = 533944; // 0x3b0 PushI
	SetMessage(var_165_int); // 0x3b1 TObjFunc
	ClearReplies(); // 0x3b3 TObjFunc
	var_166_int = 533945; // 0x3b5 PushI
	var_167_int = -1; // 0x3b6 PushI
	var_168_int = 35509; // 0x3b7 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x3b8 TObjFunc
	return 0; // 0x3ba Return
	
Label_955:
	var_169_int = 35478; // 0x3bb PushI
	var_170_bool = var_36_bool == var_169_int; // 0x3bc Eq
	if(var_170_bool == 0) goto Label_978; // 0x3bd JumpB
	var_171_string = ""; // 0x3be PushV
	var_171_string = "Disturbance"; // 0x3bf MovS
	func_680(var_37_cvector, var_171_string); // 0x3c0 NEW_2
	var_172_int = 533919; // 0x3c2 PushI
	SetMessage(var_172_int); // 0x3c3 TObjFunc
	ClearReplies(); // 0x3c5 TObjFunc
	var_173_int = 533922; // 0x3c7 PushI
	var_174_int = 35485; // 0x3c8 PushI
	var_175_int = 35481; // 0x3c9 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x3ca TObjFunc
	var_176_int = 533930; // 0x3cc PushI
	var_177_int = 35490; // 0x3cd PushI
	var_178_int = 35489; // 0x3ce PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x3cf TObjFunc
	return 0; // 0x3d1 Return
	
Label_978:
	var_179_int = 35490; // 0x3d2 PushI
	var_180_bool = var_36_bool == var_179_int; // 0x3d3 Eq
	if(var_180_bool == 0) goto Label_1001; // 0x3d4 JumpB
	var_181_string = ""; // 0x3d5 PushV
	var_181_string = "Welldie"; // 0x3d6 MovS
	func_680(var_37_cvector, var_181_string); // 0x3d7 NEW_2
	var_182_int = 533931; // 0x3d9 PushI
	SetMessage(var_182_int); // 0x3da TObjFunc
	ClearReplies(); // 0x3dc TObjFunc
	var_183_int = 533932; // 0x3de PushI
	var_184_int = 35493; // 0x3df PushI
	var_185_int = 35491; // 0x3e0 PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x3e1 TObjFunc
	var_186_int = 533934; // 0x3e3 PushI
	var_187_int = 35485; // 0x3e4 PushI
	var_188_int = 35494; // 0x3e5 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x3e6 TObjFunc
	return 0; // 0x3e8 Return
	
Label_1001:
	var_189_int = 35493; // 0x3e9 PushI
	var_190_bool = var_36_bool == var_189_int; // 0x3ea Eq
	if(var_190_bool == 0) goto Label_1019; // 0x3eb JumpB
	var_191_string = ""; // 0x3ec PushV
	var_191_string = "Welldie"; // 0x3ed MovS
	func_680(var_37_cvector, var_191_string); // 0x3ee NEW_2
	var_192_int = 533933; // 0x3f0 PushI
	SetMessage(var_192_int); // 0x3f1 TObjFunc
	ClearReplies(); // 0x3f3 TObjFunc
	var_193_int = 533935; // 0x3f5 PushI
	var_194_int = 35485; // 0x3f6 PushI
	var_195_int = 35495; // 0x3f7 PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x3f8 TObjFunc
	return 0; // 0x3fa Return
	
Label_1019:
	var_196_int = 35485; // 0x3fb PushI
	var_197_bool = var_36_bool == var_196_int; // 0x3fc Eq
	if(var_197_bool == 0) goto Label_1042; // 0x3fd JumpB
	var_198_string = ""; // 0x3fe PushV
	var_198_string = "Neutral"; // 0x3ff MovS
	func_680(var_37_cvector, var_198_string); // 0x400 NEW_2
	var_199_int = 533926; // 0x402 PushI
	SetMessage(var_199_int); // 0x403 TObjFunc
	ClearReplies(); // 0x405 TObjFunc
	var_200_int = 533927; // 0x407 PushI
	var_201_int = -1; // 0x408 PushI
	var_202_int = 35486; // 0x409 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x40a TObjFunc
	var_203_int = 533928; // 0x40c PushI
	var_204_int = -1; // 0x40d PushI
	var_205_int = 35487; // 0x40e PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x40f TObjFunc
	return 0; // 0x411 Return
	
Label_1042:
	var_3_string = 1; // 0x412 TMovB
	var_206_bool = 0; // 0x413 PushV
	func_3177(var_206_bool); // 0x414 NEW_2
	if(var_206_bool == 0) goto Label_1050; // 0x416 JumpB
	lshStopAnimation(); // 0x417 Func
	goto Label_1052; // 0x419 Jump
	
Label_1052:
	return 0; // 0x41c Return
	
Label_1050:
	StopAnimation(); // 0x41a Func
	
Label_1054:
	return 0; // 0x41e Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x4c6 PushI
	if(var_38_int == 0) goto Label_1365; // 0x4c7 JumpB
	func_2985(); // 0x4c9 NEW_2
	var_40_int = 10978; // 0x4cb PushI
	var_41_bool = var_37_cvector == var_40_int; // 0x4cc Eq
	if(var_41_bool == 0) goto Label_1235; // 0x4cd JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x4ce PushV
	var_42_object = var_1_object; // 0x4cf MovT
	var_43_object = var_0_object; // 0x4d0 MovT
	func_3288(); // 0x4d1 NEW_2
	
Label_1235:
	var_46_int = 10976; // 0x4d3 PushI
	var_47_bool = var_37_cvector == var_46_int; // 0x4d4 Eq
	if(var_47_bool == 0) goto Label_1248; // 0x4d5 JumpB
	var_48_object = Obj(); var_49_object = Obj(); // 0x4d6 PushV
	var_48_object = var_1_object; // 0x4d7 MovT
	var_49_object = var_0_object; // 0x4d8 MovT
	func_3219(var_49_object); // 0x4d9 NEW_2
	var_72_object = Obj(); var_73_object = Obj(); // 0x4db PushV
	var_72_object = var_1_object; // 0x4dc MovT
	var_73_object = var_0_object; // 0x4dd MovT
	func_3179(); // 0x4de NEW_2
	
Label_1248:
	var_76_int = 10977; // 0x4e0 PushI
	var_77_bool = var_37_cvector == var_76_int; // 0x4e1 Eq
	if(var_77_bool == 0) goto Label_1256; // 0x4e2 JumpB
	var_78_object = Obj(); var_79_object = Obj(); // 0x4e3 PushV
	var_78_object = var_1_object; // 0x4e4 MovT
	var_79_object = var_0_object; // 0x4e5 MovT
	func_3230(var_79_object); // 0x4e6 NEW_2
	
Label_1256:
	var_118_int = 10968; // 0x4e8 PushI
	var_119_bool = var_36_bool == var_118_int; // 0x4e9 Eq
	if(var_119_bool == 0) goto Label_1284; // 0x4ea JumpB
	var_120_string = ""; // 0x4eb PushV
	var_120_string = "Pain"; // 0x4ec MovS
	func_1199(var_37_cvector, var_120_string); // 0x4ed NEW_2
	var_137_int = 509951; // 0x4ef PushI
	SetMessage(var_137_int); // 0x4f0 TObjFunc
	ClearReplies(); // 0x4f2 TObjFunc
	var_138_bool = 0; var_139_object = Obj(); // 0x4f4 PushV
	var_139_object = var_1_object; // 0x4f5 MovT
	func_3387(var_139_object); // 0x4f6 NEW_2
	if(var_138_bool == 0) goto Label_1278; // 0x4f8 JumpB
	var_146_int = 509961; // 0x4f9 PushI
	var_147_int = 10970; // 0x4fa PushI
	var_148_int = 10978; // 0x4fb PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x4fc TObjFunc
	
Label_1278:
	var_149_int = 509952; // 0x4fe PushI
	var_150_int = -1; // 0x4ff PushI
	var_151_int = 10969; // 0x500 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x501 TObjFunc
	return 0; // 0x503 Return
	
Label_1284:
	var_152_int = 10970; // 0x504 PushI
	var_153_bool = var_36_bool == var_152_int; // 0x505 Eq
	if(var_153_bool == 0) goto Label_1307; // 0x506 JumpB
	var_154_string = ""; // 0x507 PushV
	var_154_string = "Pain"; // 0x508 MovS
	func_1199(var_37_cvector, var_154_string); // 0x509 NEW_2
	var_155_int = 509953; // 0x50b PushI
	SetMessage(var_155_int); // 0x50c TObjFunc
	ClearReplies(); // 0x50e TObjFunc
	var_156_int = 509954; // 0x510 PushI
	var_157_int = -1; // 0x511 PushI
	var_158_int = 10971; // 0x512 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x513 TObjFunc
	var_159_int = 509955; // 0x515 PushI
	var_160_int = 10973; // 0x516 PushI
	var_161_int = 10972; // 0x517 PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x518 TObjFunc
	return 0; // 0x51a Return
	
Label_1307:
	var_162_int = 10973; // 0x51b PushI
	var_163_bool = var_36_bool == var_162_int; // 0x51c Eq
	if(var_163_bool == 0) goto Label_1330; // 0x51d JumpB
	var_164_string = ""; // 0x51e PushV
	var_164_string = "Pain"; // 0x51f MovS
	func_1199(var_37_cvector, var_164_string); // 0x520 NEW_2
	var_165_int = 509956; // 0x522 PushI
	SetMessage(var_165_int); // 0x523 TObjFunc
	ClearReplies(); // 0x525 TObjFunc
	var_166_int = 509957; // 0x527 PushI
	var_167_int = 10975; // 0x528 PushI
	var_168_int = 10974; // 0x529 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x52a TObjFunc
	var_169_int = 534181; // 0x52c PushI
	var_170_int = -1; // 0x52d PushI
	var_171_int = 35764; // 0x52e PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x52f TObjFunc
	return 0; // 0x531 Return
	
Label_1330:
	var_172_int = 10975; // 0x532 PushI
	var_173_bool = var_36_bool == var_172_int; // 0x533 Eq
	if(var_173_bool == 0) goto Label_1353; // 0x534 JumpB
	var_174_string = ""; // 0x535 PushV
	var_174_string = "Welldie"; // 0x536 MovS
	func_1199(var_37_cvector, var_174_string); // 0x537 NEW_2
	var_175_int = 509958; // 0x539 PushI
	SetMessage(var_175_int); // 0x53a TObjFunc
	ClearReplies(); // 0x53c TObjFunc
	var_176_int = 509959; // 0x53e PushI
	var_177_int = -1; // 0x53f PushI
	var_178_int = 10976; // 0x540 PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x541 TObjFunc
	var_179_int = 509960; // 0x543 PushI
	var_180_int = -1; // 0x544 PushI
	var_181_int = 10977; // 0x545 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x546 TObjFunc
	return 0; // 0x548 Return
	
Label_1353:
	var_3_string = 1; // 0x549 TMovB
	var_182_bool = 0; // 0x54a PushV
	func_3177(var_182_bool); // 0x54b NEW_2
	if(var_182_bool == 0) goto Label_1361; // 0x54d JumpB
	lshStopAnimation(); // 0x54e Func
	goto Label_1363; // 0x550 Jump
	
Label_1363:
	return 0; // 0x553 Return
	
Label_1361:
	StopAnimation(); // 0x551 Func
	
Label_1365:
	return 0; // 0x555 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x606 PushI
	if(var_38_int == 0) goto Label_1810; // 0x607 JumpB
	func_2985(); // 0x609 NEW_2
	var_40_int = 14233; // 0x60b PushI
	var_41_bool = var_37_cvector == var_40_int; // 0x60c Eq
	if(var_41_bool == 0) goto Label_1560; // 0x60d JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x60e PushV
	var_42_object = var_1_object; // 0x60f MovT
	var_43_object = var_0_object; // 0x610 MovT
	func_3237(); // 0x611 NEW_2
	var_46_object = Obj(); var_47_object = Obj(); // 0x613 PushV
	var_46_object = var_1_object; // 0x614 MovT
	var_47_object = var_0_object; // 0x615 MovT
	func_3271(); // 0x616 NEW_2
	
Label_1560:
	var_56_int = 14234; // 0x618 PushI
	var_57_bool = var_37_cvector == var_56_int; // 0x619 Eq
	if(var_57_bool == 0) goto Label_1573; // 0x61a JumpB
	var_58_object = Obj(); var_59_object = Obj(); // 0x61b PushV
	var_58_object = var_1_object; // 0x61c MovT
	var_59_object = var_0_object; // 0x61d MovT
	func_3237(); // 0x61e NEW_2
	var_60_object = Obj(); var_61_object = Obj(); // 0x620 PushV
	var_60_object = var_1_object; // 0x621 MovT
	var_61_object = var_0_object; // 0x622 MovT
	func_3271(); // 0x623 NEW_2
	
Label_1573:
	var_62_int = 14027; // 0x625 PushI
	var_63_bool = var_37_cvector == var_62_int; // 0x626 Eq
	if(var_63_bool == 0) goto Label_1586; // 0x627 JumpB
	var_64_object = Obj(); var_65_object = Obj(); // 0x628 PushV
	var_64_object = var_1_object; // 0x629 MovT
	var_65_object = var_0_object; // 0x62a MovT
	func_3237(); // 0x62b NEW_2
	var_66_object = Obj(); var_67_object = Obj(); // 0x62d PushV
	var_66_object = var_1_object; // 0x62e MovT
	var_67_object = var_0_object; // 0x62f MovT
	func_3243(); // 0x630 NEW_2
	
Label_1586:
	var_112_int = 14026; // 0x632 PushI
	var_113_bool = var_37_cvector == var_112_int; // 0x633 Eq
	if(var_113_bool == 0) goto Label_1599; // 0x634 JumpB
	var_114_object = Obj(); var_115_object = Obj(); // 0x635 PushV
	var_114_object = var_1_object; // 0x636 MovT
	var_115_object = var_0_object; // 0x637 MovT
	func_3237(); // 0x638 NEW_2
	var_116_object = Obj(); var_117_object = Obj(); // 0x63a PushV
	var_116_object = var_1_object; // 0x63b MovT
	var_117_object = var_0_object; // 0x63c MovT
	func_3243(); // 0x63d NEW_2
	
Label_1599:
	var_118_int = 14015; // 0x63f PushI
	var_119_bool = var_36_bool == var_118_int; // 0x640 Eq
	if(var_119_bool == 0) goto Label_1636; // 0x641 JumpB
	var_120_string = ""; // 0x642 PushV
	var_120_string = "Neutral"; // 0x643 MovS
	func_1519(var_37_cvector, var_120_string); // 0x644 NEW_2
	var_137_int = 512815; // 0x646 PushI
	SetMessage(var_137_int); // 0x647 TObjFunc
	ClearReplies(); // 0x649 TObjFunc
	var_138_bool = 0; // 0x64b PushV
	var_138_bool = 0; // 0x64c MovB
	var_139_bool = 0; var_140_object = Obj(); // 0x64d PushV
	var_140_object = var_1_object; // 0x64e MovT
	func_3351(var_140_object); // 0x64f NEW_2
	if(var_139_bool == 0) goto Label_1624; // 0x651 JumpB
	var_147_bool = 0; var_148_object = Obj(); // 0x652 PushV
	var_148_object = var_1_object; // 0x653 MovT
	func_3363(var_148_object); // 0x654 NEW_2
	if(var_147_bool == 0) goto Label_1624; // 0x656 JumpB
	var_138_bool = 1; // 0x657 MovB
	
Label_1624:
	if(var_138_bool == 0) goto Label_1630; // 0x658 JumpB
	var_153_int = 512816; // 0x659 PushI
	var_154_int = 14017; // 0x65a PushI
	var_155_int = 14016; // 0x65b PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x65c TObjFunc
	
Label_1630:
	var_156_int = 512828; // 0x65e PushI
	var_157_int = -1; // 0x65f PushI
	var_158_int = 14028; // 0x660 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x661 TObjFunc
	return 0; // 0x663 Return
	
Label_1636:
	var_159_int = 14017; // 0x664 PushI
	var_160_bool = var_36_bool == var_159_int; // 0x665 Eq
	if(var_160_bool == 0) goto Label_1680; // 0x666 JumpB
	var_161_bool = 0; var_162_object = Obj(); // 0x667 PushV
	var_162_object = var_1_object; // 0x668 MovT
	func_3339(var_162_object); // 0x669 NEW_2
	var_167_bool = var_161_bool == 0; // 0x66b Not
	if(var_167_bool == 0) goto Label_1660; // 0x66c JumpB
	var_168_string = ""; // 0x66d PushV
	var_168_string = "Disturbance"; // 0x66e MovS
	func_1519(var_37_cvector, var_168_string); // 0x66f NEW_2
	var_169_int = 512817; // 0x671 PushI
	SetMessage(var_169_int); // 0x672 TObjFunc
	ClearReplies(); // 0x674 TObjFunc
	var_170_int = 513022; // 0x676 PushI
	var_171_int = 14230; // 0x677 PushI
	var_172_int = 14229; // 0x678 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x679 TObjFunc
	return 0; // 0x67b Return
	
Label_1660:
	var_173_bool = 0; var_174_object = Obj(); // 0x67c PushV
	var_174_object = var_1_object; // 0x67d MovT
	func_3339(var_174_object); // 0x67e NEW_2
	if(var_173_bool == 0) goto Label_1680; // 0x680 JumpB
	var_175_string = ""; // 0x681 PushV
	var_175_string = "Welldie"; // 0x682 MovS
	func_1519(var_37_cvector, var_175_string); // 0x683 NEW_2
	var_176_int = 513021; // 0x685 PushI
	SetMessage(var_176_int); // 0x686 TObjFunc
	ClearReplies(); // 0x688 TObjFunc
	var_177_int = 512818; // 0x68a PushI
	var_178_int = 14019; // 0x68b PushI
	var_179_int = 14018; // 0x68c PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x68d TObjFunc
	return 0; // 0x68f Return
	
Label_1680:
	var_180_int = 14019; // 0x690 PushI
	var_181_bool = var_36_bool == var_180_int; // 0x691 Eq
	if(var_181_bool == 0) goto Label_1698; // 0x692 JumpB
	var_182_string = ""; // 0x693 PushV
	var_182_string = "Welldie"; // 0x694 MovS
	func_1519(var_37_cvector, var_182_string); // 0x695 NEW_2
	var_183_int = 512819; // 0x697 PushI
	SetMessage(var_183_int); // 0x698 TObjFunc
	ClearReplies(); // 0x69a TObjFunc
	var_184_int = 512820; // 0x69c PushI
	var_185_int = 14021; // 0x69d PushI
	var_186_int = 14020; // 0x69e PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x69f TObjFunc
	return 0; // 0x6a1 Return
	
Label_1698:
	var_187_int = 14021; // 0x6a2 PushI
	var_188_bool = var_36_bool == var_187_int; // 0x6a3 Eq
	if(var_188_bool == 0) goto Label_1716; // 0x6a4 JumpB
	var_189_string = ""; // 0x6a5 PushV
	var_189_string = "Neutral"; // 0x6a6 MovS
	func_1519(var_37_cvector, var_189_string); // 0x6a7 NEW_2
	var_190_int = 512821; // 0x6a9 PushI
	SetMessage(var_190_int); // 0x6aa TObjFunc
	ClearReplies(); // 0x6ac TObjFunc
	var_191_int = 512822; // 0x6ae PushI
	var_192_int = 14023; // 0x6af PushI
	var_193_int = 14022; // 0x6b0 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x6b1 TObjFunc
	return 0; // 0x6b3 Return
	
Label_1716:
	var_194_int = 14023; // 0x6b4 PushI
	var_195_bool = var_36_bool == var_194_int; // 0x6b5 Eq
	if(var_195_bool == 0) goto Label_1739; // 0x6b6 JumpB
	var_196_string = ""; // 0x6b7 PushV
	var_196_string = "Autizm"; // 0x6b8 MovS
	func_1519(var_37_cvector, var_196_string); // 0x6b9 NEW_2
	var_197_int = 512823; // 0x6bb PushI
	SetMessage(var_197_int); // 0x6bc TObjFunc
	ClearReplies(); // 0x6be TObjFunc
	var_198_int = 512824; // 0x6c0 PushI
	var_199_int = 14025; // 0x6c1 PushI
	var_200_int = 14024; // 0x6c2 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x6c3 TObjFunc
	var_201_int = 512826; // 0x6c5 PushI
	var_202_int = -1; // 0x6c6 PushI
	var_203_int = 14026; // 0x6c7 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x6c8 TObjFunc
	return 0; // 0x6ca Return
	
Label_1739:
	var_204_int = 14025; // 0x6cb PushI
	var_205_bool = var_36_bool == var_204_int; // 0x6cc Eq
	if(var_205_bool == 0) goto Label_1757; // 0x6cd JumpB
	var_206_string = ""; // 0x6ce PushV
	var_206_string = "Autizm"; // 0x6cf MovS
	func_1519(var_37_cvector, var_206_string); // 0x6d0 NEW_2
	var_207_int = 512825; // 0x6d2 PushI
	SetMessage(var_207_int); // 0x6d3 TObjFunc
	ClearReplies(); // 0x6d5 TObjFunc
	var_208_int = 512827; // 0x6d7 PushI
	var_209_int = -1; // 0x6d8 PushI
	var_210_int = 14027; // 0x6d9 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x6da TObjFunc
	return 0; // 0x6dc Return
	
Label_1757:
	var_211_int = 14230; // 0x6dd PushI
	var_212_bool = var_36_bool == var_211_int; // 0x6de Eq
	if(var_212_bool == 0) goto Label_1780; // 0x6df JumpB
	var_213_string = ""; // 0x6e0 PushV
	var_213_string = "Disturbance"; // 0x6e1 MovS
	func_1519(var_37_cvector, var_213_string); // 0x6e2 NEW_2
	var_214_int = 513023; // 0x6e4 PushI
	SetMessage(var_214_int); // 0x6e5 TObjFunc
	ClearReplies(); // 0x6e7 TObjFunc
	var_215_int = 513024; // 0x6e9 PushI
	var_216_int = 14232; // 0x6ea PushI
	var_217_int = 14231; // 0x6eb PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x6ec TObjFunc
	var_218_int = 513027; // 0x6ee PushI
	var_219_int = -1; // 0x6ef PushI
	var_220_int = 14234; // 0x6f0 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x6f1 TObjFunc
	return 0; // 0x6f3 Return
	
Label_1780:
	var_221_int = 14232; // 0x6f4 PushI
	var_222_bool = var_36_bool == var_221_int; // 0x6f5 Eq
	if(var_222_bool == 0) goto Label_1798; // 0x6f6 JumpB
	var_223_string = ""; // 0x6f7 PushV
	var_223_string = "Autizm"; // 0x6f8 MovS
	func_1519(var_37_cvector, var_223_string); // 0x6f9 NEW_2
	var_224_int = 513025; // 0x6fb PushI
	SetMessage(var_224_int); // 0x6fc TObjFunc
	ClearReplies(); // 0x6fe TObjFunc
	var_225_int = 513026; // 0x700 PushI
	var_226_int = -1; // 0x701 PushI
	var_227_int = 14233; // 0x702 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x703 TObjFunc
	return 0; // 0x705 Return
	
Label_1798:
	var_3_string = 1; // 0x706 TMovB
	var_228_bool = 0; // 0x707 PushV
	func_3177(var_228_bool); // 0x708 NEW_2
	if(var_228_bool == 0) goto Label_1806; // 0x70a JumpB
	lshStopAnimation(); // 0x70b Func
	goto Label_1808; // 0x70d Jump
	
Label_1808:
	return 0; // 0x710 Return
	
Label_1806:
	StopAnimation(); // 0x70e Func
	
Label_1810:
	return 0; // 0x712 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x7c8 PushI
	if(var_38_int == 0) goto Label_2190; // 0x7c9 JumpB
	func_2985(); // 0x7cb NEW_2
	var_40_int = 42012; // 0x7cd PushI
	var_41_bool = var_37_cvector == var_40_int; // 0x7ce Eq
	if(var_41_bool == 0) goto Label_2005; // 0x7cf JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x7d0 PushV
	var_42_object = var_1_object; // 0x7d1 MovT
	var_43_object = var_0_object; // 0x7d2 MovT
	func_3191(); // 0x7d3 NEW_2
	
Label_2005:
	var_46_int = 42025; // 0x7d5 PushI
	var_47_bool = var_37_cvector == var_46_int; // 0x7d6 Eq
	if(var_47_bool == 0) goto Label_2013; // 0x7d7 JumpB
	var_48_object = Obj(); var_49_object = Obj(); // 0x7d8 PushV
	var_48_object = var_1_object; // 0x7d9 MovT
	var_49_object = var_0_object; // 0x7da MovT
	func_3294(var_49_object); // 0x7db NEW_2
	
Label_2013:
	var_72_int = 42026; // 0x7dd PushI
	var_73_bool = var_37_cvector == var_72_int; // 0x7de Eq
	if(var_73_bool == 0) goto Label_2031; // 0x7df JumpB
	var_74_object = Obj(); var_75_object = Obj(); // 0x7e0 PushV
	var_74_object = var_1_object; // 0x7e1 MovT
	var_75_object = var_0_object; // 0x7e2 MovT
	func_3294(var_75_object); // 0x7e3 NEW_2
	var_76_object = Obj(); var_77_object = Obj(); // 0x7e5 PushV
	var_76_object = var_1_object; // 0x7e6 MovT
	var_77_object = var_0_object; // 0x7e7 MovT
	func_3208(var_77_object); // 0x7e8 NEW_2
	var_87_object = Obj(); var_88_object = Obj(); // 0x7ea PushV
	var_87_object = var_1_object; // 0x7eb MovT
	var_88_object = var_0_object; // 0x7ec MovT
	func_3197(var_88_object); // 0x7ed NEW_2
	
Label_2031:
	var_93_int = 42010; // 0x7ef PushI
	var_94_bool = var_36_bool == var_93_int; // 0x7f0 Eq
	if(var_94_bool == 0) goto Label_2073; // 0x7f1 JumpB
	var_95_string = ""; // 0x7f2 PushV
	var_95_string = "Pain"; // 0x7f3 MovS
	func_1969(var_37_cvector, var_95_string); // 0x7f4 NEW_2
	var_112_int = 540043; // 0x7f6 PushI
	SetMessage(var_112_int); // 0x7f7 TObjFunc
	ClearReplies(); // 0x7f9 TObjFunc
	var_113_bool = 0; // 0x7fb PushV
	var_113_bool = 0; // 0x7fc MovB
	var_114_bool = 0; var_115_object = Obj(); // 0x7fd PushV
	var_115_object = var_1_object; // 0x7fe MovT
	func_3375(var_115_object); // 0x7ff NEW_2
	if(var_114_bool == 0) goto Label_2056; // 0x801 JumpB
	var_122_bool = 0; var_123_object = Obj(); // 0x802 PushV
	var_123_object = var_1_object; // 0x803 MovT
	func_3327(var_123_object); // 0x804 NEW_2
	if(var_122_bool == 0) goto Label_2056; // 0x806 JumpB
	var_113_bool = 1; // 0x807 MovB
	
Label_2056:
	if(var_113_bool == 0) goto Label_2062; // 0x808 JumpB
	var_128_int = 540045; // 0x809 PushI
	var_129_int = 42013; // 0x80a PushI
	var_130_int = 42012; // 0x80b PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x80c TObjFunc
	
Label_2062:
	var_131_int = 540044; // 0x80e PushI
	var_132_int = -1; // 0x80f PushI
	var_133_int = 42011; // 0x810 PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x811 TObjFunc
	var_134_int = 540060; // 0x813 PushI
	var_135_int = -1; // 0x814 PushI
	var_136_int = 42029; // 0x815 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x816 TObjFunc
	return 0; // 0x818 Return
	
Label_2073:
	var_137_int = 42013; // 0x819 PushI
	var_138_bool = var_36_bool == var_137_int; // 0x81a Eq
	if(var_138_bool == 0) goto Label_2096; // 0x81b JumpB
	var_139_string = ""; // 0x81c PushV
	var_139_string = "Pain"; // 0x81d MovS
	func_1969(var_37_cvector, var_139_string); // 0x81e NEW_2
	var_140_int = 540046; // 0x820 PushI
	SetMessage(var_140_int); // 0x821 TObjFunc
	ClearReplies(); // 0x823 TObjFunc
	var_141_int = 540047; // 0x825 PushI
	var_142_int = 42015; // 0x826 PushI
	var_143_int = 42014; // 0x827 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x828 TObjFunc
	var_144_int = 540052; // 0x82a PushI
	var_145_int = 42024; // 0x82b PushI
	var_146_int = 42019; // 0x82c PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x82d TObjFunc
	return 0; // 0x82f Return
	
Label_2096:
	var_147_int = 42015; // 0x830 PushI
	var_148_bool = var_36_bool == var_147_int; // 0x831 Eq
	if(var_148_bool == 0) goto Label_2114; // 0x832 JumpB
	var_149_string = ""; // 0x833 PushV
	var_149_string = "Pain"; // 0x834 MovS
	func_1969(var_37_cvector, var_149_string); // 0x835 NEW_2
	var_150_int = 540048; // 0x837 PushI
	SetMessage(var_150_int); // 0x838 TObjFunc
	ClearReplies(); // 0x83a TObjFunc
	var_151_int = 540049; // 0x83c PushI
	var_152_int = 42017; // 0x83d PushI
	var_153_int = 42016; // 0x83e PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x83f TObjFunc
	return 0; // 0x841 Return
	
Label_2114:
	var_154_int = 42017; // 0x842 PushI
	var_155_bool = var_36_bool == var_154_int; // 0x843 Eq
	if(var_155_bool == 0) goto Label_2137; // 0x844 JumpB
	var_156_string = ""; // 0x845 PushV
	var_156_string = "Welldie"; // 0x846 MovS
	func_1969(var_37_cvector, var_156_string); // 0x847 NEW_2
	var_157_int = 540050; // 0x849 PushI
	SetMessage(var_157_int); // 0x84a TObjFunc
	ClearReplies(); // 0x84c TObjFunc
	var_158_int = 540051; // 0x84e PushI
	var_159_int = 42020; // 0x84f PushI
	var_160_int = 42018; // 0x850 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x851 TObjFunc
	var_161_int = 540056; // 0x853 PushI
	var_162_int = 42024; // 0x854 PushI
	var_163_int = 42023; // 0x855 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x856 TObjFunc
	return 0; // 0x858 Return
	
Label_2137:
	var_164_int = 42020; // 0x859 PushI
	var_165_bool = var_36_bool == var_164_int; // 0x85a Eq
	if(var_165_bool == 0) goto Label_2155; // 0x85b JumpB
	var_166_string = ""; // 0x85c PushV
	var_166_string = "Pain"; // 0x85d MovS
	func_1969(var_37_cvector, var_166_string); // 0x85e NEW_2
	var_167_int = 540053; // 0x860 PushI
	SetMessage(var_167_int); // 0x861 TObjFunc
	ClearReplies(); // 0x863 TObjFunc
	var_168_int = 540054; // 0x865 PushI
	var_169_int = 42024; // 0x866 PushI
	var_170_int = 42021; // 0x867 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x868 TObjFunc
	return 0; // 0x86a Return
	
Label_2155:
	var_171_int = 42024; // 0x86b PushI
	var_172_bool = var_36_bool == var_171_int; // 0x86c Eq
	if(var_172_bool == 0) goto Label_2178; // 0x86d JumpB
	var_173_string = ""; // 0x86e PushV
	var_173_string = "Neutral"; // 0x86f MovS
	func_1969(var_37_cvector, var_173_string); // 0x870 NEW_2
	var_174_int = 540057; // 0x872 PushI
	SetMessage(var_174_int); // 0x873 TObjFunc
	ClearReplies(); // 0x875 TObjFunc
	var_175_int = 540058; // 0x877 PushI
	var_176_int = -1; // 0x878 PushI
	var_177_int = 42025; // 0x879 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x87a TObjFunc
	var_178_int = 540059; // 0x87c PushI
	var_179_int = -1; // 0x87d PushI
	var_180_int = 42026; // 0x87e PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x87f TObjFunc
	return 0; // 0x881 Return
	
Label_2178:
	var_3_string = 1; // 0x882 TMovB
	var_181_bool = 0; // 0x883 PushV
	func_3177(var_181_bool); // 0x884 NEW_2
	if(var_181_bool == 0) goto Label_2186; // 0x886 JumpB
	lshStopAnimation(); // 0x887 Func
	goto Label_2188; // 0x889 Jump
	
Label_2188:
	return 0; // 0x88c Return
	
Label_2186:
	StopAnimation(); // 0x88a Func
	
Label_2190:
	return 0; // 0x88e Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_cvector)
{
	var_38_int = 1; // 0x931 PushI
	if(var_38_int == 0) goto Label_2393; // 0x932 JumpB
	func_2985(); // 0x934 NEW_2
	var_40_int = 42557; // 0x936 PushI
	var_41_bool = var_36_int == var_40_int; // 0x937 Eq
	if(var_41_bool == 0) goto Label_2381; // 0x938 JumpB
	var_42_string = ""; // 0x939 PushV
	var_42_string = "Neutral"; // 0x93a MovS
	func_2330(var_37_cvector, var_42_string); // 0x93b NEW_2
	var_59_int = 540548; // 0x93d PushI
	SetMessage(var_59_int); // 0x93e TObjFunc
	ClearReplies(); // 0x940 TObjFunc
	var_60_int = 540549; // 0x942 PushI
	var_61_int = -1; // 0x943 PushI
	var_62_int = 42558; // 0x944 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0x945 TObjFunc
	var_63_int = 540797; // 0x947 PushI
	var_64_int = -1; // 0x948 PushI
	var_65_int = 42846; // 0x949 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0x94a TObjFunc
	return 0; // 0x94c Return
	
Label_2381:
	var_3_string = 1; // 0x94d TMovB
	var_66_bool = 0; // 0x94e PushV
	func_3177(var_66_bool); // 0x94f NEW_2
	if(var_66_bool == 0) goto Label_2389; // 0x951 JumpB
	lshStopAnimation(); // 0x952 Func
	goto Label_2391; // 0x954 Jump
	
Label_2391:
	return 0; // 0x957 Return
	
Label_2389:
	StopAnimation(); // 0x955 Func
	
Label_2393:
	return 0; // 0x959 Return
}


task_14_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_int)
{
	var_37_int = 10; // 0x9a4 PushI
	var_38_bool = var_36_int == var_37_int; // 0x9a5 Eq
	if(var_38_bool == 0) goto Label_2504; // 0x9a6 JumpB
	func_2463(); // 0x9a8 NEW_2
	var_40_bool = 0; // 0x9aa PushV
	var_40_bool = 0; // 0x9ab MovB
	var_41_bool = 0; // 0x9ac PushV
	func_2711(var_41_bool); // 0x9ad NEW_2
	if(var_41_bool == 0) goto Label_2485; // 0x9af JumpB
	var_44_bool = 0; // 0x9b0 PushV
	func_2432(var_44_bool); // 0x9b1 NEW_2
	if(var_44_bool == 0) goto Label_2485; // 0x9b3 JumpB
	var_40_bool = 1; // 0x9b4 MovB
	
Label_2485:
	if(var_40_bool == 0) goto Label_2498; // 0x9b5 JumpB
	var_61_bool = 0; // 0x9b6 PushV
	func_2412(var_61_bool); // 0x9b7 NEW_2
	if(var_61_bool == 0) goto Label_2497; // 0x9b9 JumpB
	var_80_bool = 0; var_81_object = Obj(); // 0x9ba PushV
	var_82_object = Obj(); // 0x9bb PushV
	func_2992(var_82_object); // 0x9bc NEW_2
	var_81_object = var_82_object; // 0x9bd Mov
	func_2859(var_81_object); // 0x9bf NEW_2
	
Label_2497:
	goto Label_2504; // 0x9c1 Jump
	
Label_2504:
	return 0; // 0x9c8 Return
	
Label_2498:
	func_2427(var_36_int); // 0x9c3 NEW_2
	func_2454(); // 0x9c6 NEW_2
}


task_14_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	func_2645(); // 0x9ca NEW_2
	func_2463(); // 0x9cd NEW_2
	lshStopSpeech(); // 0x9cf Func
	lshStopAnimation(); // 0x9d1 Func
	StopAsync(); // 0x9d3 Func
	Hold(); // 0x9d5 Func
	return 0; // 0x9d7 Return
}


task_14_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	StopGroup0(); // 0x9d8 Func
	func_2463(); // 0x9db NEW_2
	var_37_string = ""; // 0x9dd PushV
	var_37_string = "Neutral"; // 0x9de MovS
	func_2939(var_37_string); // 0x9df NEW_2
	func_2454(); // 0x9e2 NEW_2
	return 0; // 0x9e4 Return
}


task_14_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_bool)
{
	var_37_bool = var_36_bool; // 0x9e6 Push
	if(var_37_bool == 0) goto Label_2540; // 0x9e7 JumpB
	func_2454(); // 0x9e9 NEW_2
	goto Label_2544; // 0x9eb Jump
	
Label_2544:
	return 0; // 0x9f0 Return
	
Label_2540:
	var_43_string = ""; // 0x9ec PushV
	var_43_string = "Neutral"; // 0x9ed MovS
	func_2939(var_43_string); // 0x9ee NEW_2
}


task_14_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_object)
{
	var_37_bool = 0; var_38_bool = 0; // 0x9f1 PushV
	IsOverrideActive(var_38_bool); // 0x9f2 Func
	var_39_bool = var_38_bool == 0; // 0x9f4 Not
	if(var_39_bool == 0) goto Label_2573; // 0x9f5 JumpB
	EventDisable(0); // 0x9f6 EventDisable
	func_2645(); // 0x9f8 NEW_2
	var_40_bool = 0; var_41_object = Obj(); // 0x9fa PushV
	var_41_object = var_36_object; // 0x9fb Mov
	func_2702(var_41_object); // 0x9fc NEW_2
	EventEnable(0); // 0x9fe EventEnable
	var_54_object = Obj(); // 0x9ff PushV
	var_54_object = var_36_object; // 0xa00 Mov
	func_3487(var_54_object); // 0xa01 NEW_2
	var_681_string = ""; // 0xa03 PushV
	var_681_string = "Neutral"; // 0xa04 MovS
	func_2939(var_681_string); // 0xa05 NEW_2
	func_2463(); // 0xa08 NEW_2
	func_2454(); // 0xa0b NEW_2
	
Label_2573:
	return 2; // 0xa0d Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	func_2398(var_35_cvector); // 0x95b NEW_2
	return 0; // 0x95d Return
}


func_0(var_0_object, var_566_int, var_567_object)
{
	var_569_object = Obj(); var_570_bool = 0; var_571_int = 0; var_572_bool = 0; var_573_object = Obj(); var_574_bool = 0; var_575_int = 0; var_576_bool = 0; // 0x0 PushV
	var_0_object = var_567_object; // 0x1 TMov
	var_577_bool = 0; var_578_object = Obj(); var_579_float = 0; // 0x2 PushV
	var_578_object = var_567_object; // 0x3 Mov
	var_579_float = 70.0; // 0x4 MovF
	func_2716(var_578_object, var_579_float); // 0x5 NEW_2
	var_580_bool = var_577_bool == 0; // 0x7 Not
	if(var_580_bool == 0) goto Label_11; // 0x8 JumpB
	var_566_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_573_object); // 0xb Func
	var_581_int = 0; // 0xd PushV
	func_3171(var_581_int); // 0xe NEW_2
	SetNPCName(var_581_int); // 0x10 ObjFunc
	var_582_int = 0; // 0x12 PushV
	func_3169(var_582_int); // 0x13 NEW_2
	SetNPCDescription(var_582_int); // 0x15 ObjFunc
	var_583_string = ""; // 0x17 PushV
	func_3173(var_583_string); // 0x18 NEW_2
	SetPhoto(var_583_string); // 0x1a ObjFunc
	var_584_string = ""; // 0x1c PushV
	func_3175(var_584_string); // 0x1d NEW_2
	SetPhoto2(var_584_string); // 0x1f ObjFunc
	var_585_int = 0; // 0x21 PushV
	func_3470(var_585_int); // 0x22 NEW_2
	SetPlayerName(var_585_int); // 0x24 ObjFunc
	var_575_int = -1; // 0x26 MovI
	IsOverrideActive(var_574_bool); // 0x27 Func
	var_586_bool = var_574_bool; // 0x29 Push
	if(var_586_bool == 0) goto Label_45; // 0x2a JumpB
	var_566_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_573_object); // 0x2d Func
	var_587_bool = 0; var_588_object = Obj(); // 0x2f PushV
	var_589_object = Obj(); // 0x30 PushV
	func_2992(var_589_object); // 0x31 NEW_2
	var_588_object = var_589_object; // 0x32 Mov
	func_2801(var_587_bool, var_588_object); // 0x34 NEW_2
	var_590_object = Obj(); var_591_object = Obj(); // 0x36 PushV
	var_590_object = var_567_object; // 0x37 Mov
	var_591_object = var_573_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_592_object, var_593_object, var_594_string, var_595_bool, var_590_object, var_591_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_576_bool); // 0x3d ObjFunc
	
Label_63:
	var_623_bool = var_576_bool == 0; // 0x3f Not
	if(var_623_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_576_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_624_object = Obj(); // 0x46 PushV
	var_624_object = var_567_object; // 0x47 Mov
	func_2784(); // 0x48 NEW_2
	StopDialog(var_573_object); // 0x4a Func
	GetReturnValue(var_575_int); // 0x4c ObjFunc
	var_566_int = var_575_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_259(var_0_object, var_59_int, var_60_object)
{
	var_62_object = Obj(); var_63_bool = 0; var_64_int = 0; var_65_bool = 0; var_66_object = Obj(); var_67_bool = 0; var_68_int = 0; var_69_bool = 0; // 0x103 PushV
	var_0_object = var_60_object; // 0x104 TMov
	var_70_bool = 0; var_71_object = Obj(); var_72_float = 0; // 0x105 PushV
	var_71_object = var_60_object; // 0x106 Mov
	var_72_float = 70.0; // 0x107 MovF
	func_2716(var_71_object, var_72_float); // 0x108 NEW_2
	var_116_bool = var_70_bool == 0; // 0x10a Not
	if(var_116_bool == 0) goto Label_270; // 0x10b JumpB
	var_59_int = -2; // 0x10c MovI
	return 8; // 0x10d Return
	
Label_270:
	CreateDialog(var_66_object); // 0x10e Func
	var_117_int = 0; // 0x110 PushV
	func_3171(var_117_int); // 0x111 NEW_2
	SetNPCName(var_117_int); // 0x113 ObjFunc
	var_118_int = 0; // 0x115 PushV
	func_3169(var_118_int); // 0x116 NEW_2
	SetNPCDescription(var_118_int); // 0x118 ObjFunc
	var_119_string = ""; // 0x11a PushV
	func_3173(var_119_string); // 0x11b NEW_2
	SetPhoto(var_119_string); // 0x11d ObjFunc
	var_120_string = ""; // 0x11f PushV
	func_3175(var_120_string); // 0x120 NEW_2
	SetPhoto2(var_120_string); // 0x122 ObjFunc
	var_121_int = 0; // 0x124 PushV
	func_3470(var_121_int); // 0x125 NEW_2
	SetPlayerName(var_121_int); // 0x127 ObjFunc
	var_68_int = -1; // 0x129 MovI
	IsOverrideActive(var_67_bool); // 0x12a Func
	var_129_bool = var_67_bool; // 0x12c Push
	if(var_129_bool == 0) goto Label_304; // 0x12d JumpB
	var_59_int = -2; // 0x12e MovI
	return 8; // 0x12f Return
	
Label_304:
	DoDialog(var_66_object); // 0x130 Func
	var_130_bool = 0; var_131_object = Obj(); // 0x132 PushV
	var_132_object = Obj(); // 0x133 PushV
	func_2992(var_132_object); // 0x134 NEW_2
	var_131_object = var_132_object; // 0x135 Mov
	func_2801(var_130_bool, var_131_object); // 0x137 NEW_2
	var_225_object = Obj(); var_226_object = Obj(); // 0x139 PushV
	var_225_object = var_60_object; // 0x13a Mov
	var_226_object = var_66_object; // 0x13b Mov
	TaskCall(3); // 0x13c TaskCall
	func_340(var_227_object, var_228_object, var_229_string, var_230_bool, var_225_object, var_226_object); // 0x13d NEW_2
	TaskReturn(); // 0x13e TaskReturn
	IsDialogEnd(var_69_bool); // 0x140 ObjFunc
	
Label_322:
	var_278_bool = var_69_bool == 0; // 0x142 Not
	if(var_278_bool == 0) goto Label_329; // 0x143 JumpB
	sync(); // 0x144 Func
	IsDialogEnd(var_69_bool); // 0x146 ObjFunc
	goto Label_322; // 0x148 Jump
	
Label_329:
	var_279_object = Obj(); // 0x149 PushV
	var_279_object = var_60_object; // 0x14a Mov
	func_2784(); // 0x14b NEW_2
	StopDialog(var_66_object); // 0x14d Func
	GetReturnValue(var_68_int); // 0x14f ObjFunc
	var_59_int = var_68_int; // 0x151 Mov
	return 8; // 0x152 Return
}


func_3339(var_161_bool)
{
	var_163_int = 0; var_164_string = ""; // 0xd0c PushV
	var_164_string = "d6q03AlbinosKilled"; // 0xd0d MovS
	func_3019(var_163_int, var_164_string); // 0xd0e NEW_2
	var_165_int = 1; // 0xd10 PushI
	var_166_bool = var_163_int == var_165_int; // 0xd11 Eq
	if(var_166_bool == 0) goto Label_3349; // 0xd12 JumpB
	var_161_bool = 1; // 0xd13 MovB
	return 0; // 0xd14 Return
	
Label_3349:
	var_161_bool = 0; // 0xd15 MovB
	return 0; // 0xd16 Return
}


func_2574()
{
	var_40_int = 0; var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_int = 0; var_45_bool = 0; var_46_int = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_int = 0; var_51_bool = 0; // 0xa0e PushV
	WaitForAnimEnd(); // 0xa0f Func
	var_52_bool = 0; // 0xa11 PushV
	func_2711(var_52_bool); // 0xa12 NEW_2
	var_53_bool = var_52_bool == 0; // 0xa14 Not
	if(var_53_bool == 0) goto Label_2583; // 0xa15 JumpB
	return 12; // 0xa16 Return
	
Label_2583:
	var_54_int = 0; // 0xa17 PushV
	func_3152(var_54_int); // 0xa18 NEW_2
	var_46_int = var_54_int; // 0xa19 Mov
	var_47_int = 0; // 0xa1b MovI
	
Label_2588:
	var_67_bool = 0; // 0xa1c PushV
	var_67_bool = 0; // 0xa1d MovB
	var_68_int = 5; // 0xa1e PushI
	var_69_bool = var_47_int < var_68_int; // 0xa1f LT
	if(var_69_bool == 0) goto Label_2598; // 0xa20 JumpB
	var_70_bool = 0; // 0xa21 PushV
	func_2711(var_70_bool); // 0xa22 NEW_2
	if(var_70_bool == 0) goto Label_2598; // 0xa24 JumpB
	var_67_bool = 1; // 0xa25 MovB
	
Label_2598:
	if(var_67_bool == 0) goto Label_2640; // 0xa26 JumpB
	var_71_bool = var_46_int == 0; // 0xa27 Not
	if(var_71_bool == 0) goto Label_2608; // 0xa28 JumpB
	var_72_int = 3; // 0xa29 PushI
	Sleep(var_72_int, var_48_bool); // 0xa2a Func
	var_73_bool = var_48_bool == 0; // 0xa2c Not
	if(var_73_bool == 0) goto Label_2607; // 0xa2d JumpB
	goto Label_2640; // 0xa2e Jump
	
Label_2640:
	ResetAAS(); // 0xa50 Func
	return 12; // 0xa52 Return
	
Label_2607:
	goto Label_2629; // 0xa2f Jump
	
Label_2629:
	var_74_bool = 0; // 0xa45 PushV
	func_2643(var_74_bool); // 0xa46 NEW_2
	var_75_bool = var_74_bool == 0; // 0xa48 Not
	if(var_75_bool == 0) goto Label_2635; // 0xa49 JumpB
	goto Label_2640; // 0xa4a Jump
	
Label_2635:
	ResetAAS(); // 0xa4b Func
	var_76_int = 1; // 0xa4d PushI
	var_47_int = var_47_int + var_76_int; // 0xa4e Add2
	goto Label_2588; // 0xa4f Jump
	
Label_2608:
	irand(var_49_int, var_46_int); // 0xa30 Func
	var_77_int = 5; // 0xa32 PushI
	irand(var_50_int, var_77_int); // 0xa33 Func
	var_78_int = 0; // 0xa35 PushI
	var_79_bool = var_50_int != var_78_int; // 0xa36 Neq
	if(var_79_bool == 0) goto Label_2617; // 0xa37 JumpB
	var_49_int = 0; // 0xa38 MovI
	
Label_2617:
	var_80_string = "all"; // 0xa39 PushS
	var_81_string = ""; var_82_int = 0; // 0xa3a PushV
	var_82_int = var_49_int; // 0xa3b Mov
	func_3145(var_81_string, var_82_int); // 0xa3c NEW_2
	PlayAnimation(var_80_string, var_81_string); // 0xa3e Func
	WaitForAnimEnd(var_51_bool); // 0xa40 Func
	var_83_bool = var_51_bool == 0; // 0xa42 Not
	if(var_83_bool == 0) goto Label_2629; // 0xa43 JumpB
	goto Label_2640; // 0xa44 Jump
}


func_1811(var_0_object, var_492_int, var_493_object)
{
	var_495_object = Obj(); var_496_bool = 0; var_497_int = 0; var_498_bool = 0; var_499_object = Obj(); var_500_bool = 0; var_501_int = 0; var_502_bool = 0; // 0x713 PushV
	var_0_object = var_493_object; // 0x714 TMov
	var_503_bool = 0; var_504_object = Obj(); var_505_float = 0; // 0x715 PushV
	var_504_object = var_493_object; // 0x716 Mov
	var_505_float = 70.0; // 0x717 MovF
	func_2716(var_504_object, var_505_float); // 0x718 NEW_2
	var_506_bool = var_503_bool == 0; // 0x71a Not
	if(var_506_bool == 0) goto Label_1822; // 0x71b JumpB
	var_492_int = -2; // 0x71c MovI
	return 8; // 0x71d Return
	
Label_1822:
	CreateDialog(var_499_object); // 0x71e Func
	var_507_int = 0; // 0x720 PushV
	func_3171(var_507_int); // 0x721 NEW_2
	SetNPCName(var_507_int); // 0x723 ObjFunc
	var_508_int = 0; // 0x725 PushV
	func_3169(var_508_int); // 0x726 NEW_2
	SetNPCDescription(var_508_int); // 0x728 ObjFunc
	var_509_string = ""; // 0x72a PushV
	func_3173(var_509_string); // 0x72b NEW_2
	SetPhoto(var_509_string); // 0x72d ObjFunc
	var_510_string = ""; // 0x72f PushV
	func_3175(var_510_string); // 0x730 NEW_2
	SetPhoto2(var_510_string); // 0x732 ObjFunc
	var_511_int = 0; // 0x734 PushV
	func_3470(var_511_int); // 0x735 NEW_2
	SetPlayerName(var_511_int); // 0x737 ObjFunc
	var_501_int = -1; // 0x739 MovI
	IsOverrideActive(var_500_bool); // 0x73a Func
	var_512_bool = var_500_bool; // 0x73c Push
	if(var_512_bool == 0) goto Label_1856; // 0x73d JumpB
	var_492_int = -2; // 0x73e MovI
	return 8; // 0x73f Return
	
Label_1856:
	DoDialog(var_499_object); // 0x740 Func
	var_513_bool = 0; var_514_object = Obj(); // 0x742 PushV
	var_515_object = Obj(); // 0x743 PushV
	func_2992(var_515_object); // 0x744 NEW_2
	var_514_object = var_515_object; // 0x745 Mov
	func_2801(var_513_bool, var_514_object); // 0x747 NEW_2
	var_516_object = Obj(); var_517_object = Obj(); // 0x749 PushV
	var_516_object = var_493_object; // 0x74a Mov
	var_517_object = var_499_object; // 0x74b Mov
	TaskCall(11); // 0x74c TaskCall
	func_1892(var_518_object, var_519_object, var_520_string, var_521_bool, var_516_object, var_517_object); // 0x74d NEW_2
	TaskReturn(); // 0x74e TaskReturn
	IsDialogEnd(var_502_bool); // 0x750 ObjFunc
	
Label_1874:
	var_562_bool = var_502_bool == 0; // 0x752 Not
	if(var_562_bool == 0) goto Label_1881; // 0x753 JumpB
	sync(); // 0x754 Func
	IsDialogEnd(var_502_bool); // 0x756 ObjFunc
	goto Label_1874; // 0x758 Jump
	
Label_1881:
	var_563_object = Obj(); // 0x759 PushV
	var_563_object = var_493_object; // 0x75a Mov
	func_2784(); // 0x75b NEW_2
	StopDialog(var_499_object); // 0x75d Func
	GetReturnValue(var_501_int); // 0x75f ObjFunc
	var_492_int = var_501_int; // 0x761 Mov
	return 8; // 0x762 Return
}


func_3351(var_462_bool)
{
	var_464_int = 0; var_465_string = ""; // 0xd18 PushV
	var_465_string = "d6q01"; // 0xd19 MovS
	func_3019(var_464_int, var_465_string); // 0xd1a NEW_2
	var_466_int = 2; // 0xd1c PushI
	var_467_bool = var_464_int == var_466_int; // 0xd1d Eq
	if(var_467_bool == 0) goto Label_3361; // 0xd1e JumpB
	var_462_bool = 1; // 0xd1f MovB
	return 0; // 0xd20 Return
	
Label_3361:
	var_462_bool = 0; // 0xd21 MovB
	return 0; // 0xd22 Return
}


func_536(var_0_object, var_291_int, var_292_object)
{
	var_294_object = Obj(); var_295_bool = 0; var_296_int = 0; var_297_bool = 0; var_298_object = Obj(); var_299_bool = 0; var_300_int = 0; var_301_bool = 0; // 0x218 PushV
	var_0_object = var_292_object; // 0x219 TMov
	var_302_bool = 0; var_303_object = Obj(); var_304_float = 0; // 0x21a PushV
	var_303_object = var_292_object; // 0x21b Mov
	var_304_float = 70.0; // 0x21c MovF
	func_2716(var_303_object, var_304_float); // 0x21d NEW_2
	var_305_bool = var_302_bool == 0; // 0x21f Not
	if(var_305_bool == 0) goto Label_547; // 0x220 JumpB
	var_291_int = -2; // 0x221 MovI
	return 8; // 0x222 Return
	
Label_547:
	CreateDialog(var_298_object); // 0x223 Func
	var_306_int = 0; // 0x225 PushV
	func_3171(var_306_int); // 0x226 NEW_2
	SetNPCName(var_306_int); // 0x228 ObjFunc
	var_307_int = 0; // 0x22a PushV
	func_3169(var_307_int); // 0x22b NEW_2
	SetNPCDescription(var_307_int); // 0x22d ObjFunc
	var_308_string = ""; // 0x22f PushV
	func_3173(var_308_string); // 0x230 NEW_2
	SetPhoto(var_308_string); // 0x232 ObjFunc
	var_309_string = ""; // 0x234 PushV
	func_3175(var_309_string); // 0x235 NEW_2
	SetPhoto2(var_309_string); // 0x237 ObjFunc
	var_310_int = 0; // 0x239 PushV
	func_3470(var_310_int); // 0x23a NEW_2
	SetPlayerName(var_310_int); // 0x23c ObjFunc
	var_300_int = -1; // 0x23e MovI
	IsOverrideActive(var_299_bool); // 0x23f Func
	var_311_bool = var_299_bool; // 0x241 Push
	if(var_311_bool == 0) goto Label_581; // 0x242 JumpB
	var_291_int = -2; // 0x243 MovI
	return 8; // 0x244 Return
	
Label_581:
	DoDialog(var_298_object); // 0x245 Func
	var_312_bool = 0; var_313_object = Obj(); // 0x247 PushV
	var_314_object = Obj(); // 0x248 PushV
	func_2992(var_314_object); // 0x249 NEW_2
	var_313_object = var_314_object; // 0x24a Mov
	func_2801(var_312_bool, var_313_object); // 0x24c NEW_2
	var_315_object = Obj(); var_316_object = Obj(); // 0x24e PushV
	var_315_object = var_292_object; // 0x24f Mov
	var_316_object = var_298_object; // 0x250 Mov
	TaskCall(5); // 0x251 TaskCall
	func_617(var_317_object, var_318_object, var_319_string, var_320_bool, var_315_object, var_316_object); // 0x252 NEW_2
	TaskReturn(); // 0x253 TaskReturn
	IsDialogEnd(var_301_bool); // 0x255 ObjFunc
	
Label_599:
	var_353_bool = var_301_bool == 0; // 0x257 Not
	if(var_353_bool == 0) goto Label_606; // 0x258 JumpB
	sync(); // 0x259 Func
	IsDialogEnd(var_301_bool); // 0x25b ObjFunc
	goto Label_599; // 0x25d Jump
	
Label_606:
	var_354_object = Obj(); // 0x25e PushV
	var_354_object = var_292_object; // 0x25f Mov
	func_2784(); // 0x260 NEW_2
	StopDialog(var_298_object); // 0x262 Func
	GetReturnValue(var_300_int); // 0x264 ObjFunc
	var_291_int = var_300_int; // 0x266 Mov
	return 8; // 0x267 Return
}


func_2330(var_2_object, var_656_string)
{
	var_657_bool = 0; // 0x91b PushV
	func_3177(var_657_bool); // 0x91c NEW_2
	var_658_bool = var_657_bool == 0; // 0x91e Not
	if(var_658_bool == 0) goto Label_2337; // 0x91f JumpB
	return 0; // 0x920 Return
	
Label_2337:
	var_659_bool = var_656_string == var_2_object; // 0x921 Eq
	if(var_659_bool == 0) goto Label_2340; // 0x922 JumpB
	return 0; // 0x923 Return
	
Label_2340:
	var_660_string = ""; var_661_bool = 0; // 0x924 PushV
	var_660_string = var_656_string; // 0x925 Mov
	var_662_string = ""; // 0x926 PushS
	var_663_bool = var_656_string == var_662_string; // 0x927 Eq
	if(var_663_bool == 0) goto Label_2347; // 0x928 JumpB
	var_661_bool = 0; // 0x929 MovB
	goto Label_2348; // 0x92a Jump
	
Label_2348:
	func_2955(var_660_string, var_661_bool); // 0x92c NEW_2
	var_2_object = var_656_string; // 0x92e TMov
	return 0; // 0x92f Return
	
Label_2347:
	var_661_bool = 1; // 0x92b MovB
}


func_3103(var_87_float)
{
	var_88_object = Obj(); var_89_object = Obj(); // 0xc1f PushV
	CreateFloatVector(var_89_object); // 0xc20 Func
	add(var_87_float); // 0xc22 ObjFunc
	var_90_int = 16; // 0xc24 PushI
	SendWorldWndMessage(var_90_int, var_89_object); // 0xc25 Func
	return 2; // 0xc27 Return
}


func_1055(var_0_object, var_357_int, var_358_object)
{
	var_360_object = Obj(); var_361_bool = 0; var_362_int = 0; var_363_bool = 0; var_364_object = Obj(); var_365_bool = 0; var_366_int = 0; var_367_bool = 0; // 0x41f PushV
	var_0_object = var_358_object; // 0x420 TMov
	var_368_bool = 0; var_369_object = Obj(); var_370_float = 0; // 0x421 PushV
	var_369_object = var_358_object; // 0x422 Mov
	var_370_float = 70.0; // 0x423 MovF
	func_2716(var_369_object, var_370_float); // 0x424 NEW_2
	var_371_bool = var_368_bool == 0; // 0x426 Not
	if(var_371_bool == 0) goto Label_1066; // 0x427 JumpB
	var_357_int = -2; // 0x428 MovI
	return 8; // 0x429 Return
	
Label_1066:
	CreateDialog(var_364_object); // 0x42a Func
	var_372_int = 0; // 0x42c PushV
	func_3171(var_372_int); // 0x42d NEW_2
	SetNPCName(var_372_int); // 0x42f ObjFunc
	var_373_int = 0; // 0x431 PushV
	func_3169(var_373_int); // 0x432 NEW_2
	SetNPCDescription(var_373_int); // 0x434 ObjFunc
	var_374_string = ""; // 0x436 PushV
	func_3173(var_374_string); // 0x437 NEW_2
	SetPhoto(var_374_string); // 0x439 ObjFunc
	var_375_string = ""; // 0x43b PushV
	func_3175(var_375_string); // 0x43c NEW_2
	SetPhoto2(var_375_string); // 0x43e ObjFunc
	var_376_int = 0; // 0x440 PushV
	func_3470(var_376_int); // 0x441 NEW_2
	SetPlayerName(var_376_int); // 0x443 ObjFunc
	var_366_int = -1; // 0x445 MovI
	IsOverrideActive(var_365_bool); // 0x446 Func
	var_377_bool = var_365_bool; // 0x448 Push
	if(var_377_bool == 0) goto Label_1100; // 0x449 JumpB
	var_357_int = -2; // 0x44a MovI
	return 8; // 0x44b Return
	
Label_1100:
	DoDialog(var_364_object); // 0x44c Func
	var_378_bool = 0; var_379_object = Obj(); // 0x44e PushV
	var_380_object = Obj(); // 0x44f PushV
	func_2992(var_380_object); // 0x450 NEW_2
	var_379_object = var_380_object; // 0x451 Mov
	func_2801(var_378_bool, var_379_object); // 0x453 NEW_2
	var_381_object = Obj(); var_382_object = Obj(); // 0x455 PushV
	var_381_object = var_358_object; // 0x456 Mov
	var_382_object = var_364_object; // 0x457 Mov
	TaskCall(7); // 0x458 TaskCall
	func_1136(var_383_object, var_384_object, var_385_string, var_386_bool, var_381_object, var_382_object); // 0x459 NEW_2
	TaskReturn(); // 0x45a TaskReturn
	IsDialogEnd(var_367_bool); // 0x45c ObjFunc
	
Label_1118:
	var_417_bool = var_367_bool == 0; // 0x45e Not
	if(var_417_bool == 0) goto Label_1125; // 0x45f JumpB
	sync(); // 0x460 Func
	IsDialogEnd(var_367_bool); // 0x462 ObjFunc
	goto Label_1118; // 0x464 Jump
	
Label_1125:
	var_418_object = Obj(); // 0x465 PushV
	var_418_object = var_358_object; // 0x466 Mov
	func_2784(); // 0x467 NEW_2
	StopDialog(var_364_object); // 0x469 Func
	GetReturnValue(var_366_int); // 0x46b ObjFunc
	var_357_int = var_366_int; // 0x46d Mov
	return 8; // 0x46e Return
}


func_3363(var_468_bool)
{
	var_470_int = 0; var_471_string = ""; // 0xd24 PushV
	var_471_string = "ood6Laska1"; // 0xd25 MovS
	func_3019(var_470_int, var_471_string); // 0xd26 NEW_2
	var_472_int = 0; // 0xd28 PushI
	var_473_bool = var_470_int == var_472_int; // 0xd29 Eq
	if(var_473_bool == 0) goto Label_3373; // 0xd2a JumpB
	var_468_bool = 1; // 0xd2b MovB
	return 0; // 0xd2c Return
	
Label_3373:
	var_468_bool = 0; // 0xd2d MovB
	return 0; // 0xd2e Return
}


func_3113(var_50_bool, var_51_string, var_52_string)
{
	var_53_object = Obj(); var_54_object = Obj(); // 0xc29 PushV
	FindActor(var_54_object, var_51_string); // 0xc2a Func
	var_55_bool = var_54_object == 0; // 0xc2c NullEq
	if(var_55_bool == 0) goto Label_3120; // 0xc2d JumpB
	var_50_bool = 0; // 0xc2e MovB
	return 2; // 0xc2f Return
	
Label_3120:
	Trigger(var_54_object, var_52_string); // 0xc30 Func
	var_50_bool = 1; // 0xc32 MovB
	return 2; // 0xc33 Return
}


func_2859(var_141_bool)
{
	var_143_string = ""; var_144_int = 0; var_145_bool = 0; var_146_int = 0; var_147_string = ""; var_148_string = ""; var_149_int = 0; var_150_bool = 0; var_151_int = 0; var_152_string = ""; // 0xb2b PushV
	var_148_string = "c"; // 0xb2c MovS
	var_149_int = 0; // 0xb2d MovI
	
Label_2862:
	var_153_int = 1; // 0xb2e PushI
	if(var_153_int == 0) goto Label_2875; // 0xb2f JumpB
	var_154_int = 1; // 0xb30 PushI
	var_155_int = var_149_int + var_154_int; // 0xb31 Add
	var_156_int = var_148_string + var_155_int; // 0xb32 Add
	HasProperty(var_156_int, var_150_bool); // 0xb33 ObjFunc
	var_157_bool = var_150_bool == 0; // 0xb35 Not
	if(var_157_bool == 0) goto Label_2872; // 0xb36 JumpB
	goto Label_2875; // 0xb37 Jump
	
Label_2875:
	var_158_bool = var_149_int == 0; // 0xb3b Not
	if(var_158_bool == 0) goto Label_2879; // 0xb3c JumpB
	var_141_bool = 0; // 0xb3d MovB
	return 10; // 0xb3e Return
	
Label_2879:
	var_151_int = 0; // 0xb3f MovI
	var_159_int = 1; // 0xb40 PushI
	var_160_bool = var_149_int > var_159_int; // 0xb41 GT
	if(var_160_bool == 0) goto Label_2885; // 0xb42 JumpB
	irand(var_151_int, var_149_int); // 0xb43 Func
	
Label_2885:
	var_161_int = 1; // 0xb45 PushI
	var_162_int = var_151_int + var_161_int; // 0xb46 Add
	var_163_int = var_148_string + var_162_int; // 0xb47 Add
	GetProperty(var_163_int, var_152_string); // 0xb48 ObjFunc
	var_164_bool = 0; var_165_string = ""; // 0xb4a PushV
	var_165_string = var_152_string; // 0xb4b Mov
	func_2970(var_164_bool, var_165_string); // 0xb4c NEW_2
	var_141_bool = var_164_bool; // 0xb4d Mov
	return 10; // 0xb4f Return
	
Label_2872:
	var_170_int = 1; // 0xb38 PushI
	var_149_int = var_149_int + var_170_int; // 0xb39 Add2
	goto Label_2862; // 0xb3a Jump
}


func_3375(var_533_bool)
{
	var_535_int = 0; var_536_string = ""; // 0xd30 PushV
	var_536_string = "d11q01"; // 0xd31 MovS
	func_3019(var_535_int, var_536_string); // 0xd32 NEW_2
	var_537_int = 3; // 0xd34 PushI
	var_538_bool = var_535_int == var_537_int; // 0xd35 Eq
	if(var_538_bool == 0) goto Label_3385; // 0xd36 JumpB
	var_533_bool = 1; // 0xd37 MovB
	return 0; // 0xd38 Return
	
Label_3385:
	var_533_bool = 0; // 0xd39 MovB
	return 0; // 0xd3a Return
}


func_3125(var_83_float)
{
	var_84_float = 0; var_85_float = 0; // 0xc35 PushV
	GetGameTime(var_85_float); // 0xc36 Func
	var_83_float = var_85_float; // 0xc38 Mov
	return 2; // 0xc39 Return
}


func_3130(var_185_int)
{
	var_186_float = 0; var_187_float = 0; // 0xc3a PushV
	GetGameTime(var_187_float); // 0xc3b Func
	var_188_int = 1; // 0xc3d PushI
	var_189_int = 0; // 0xc3e PushV
	var_190_int = 24; // 0xc3f PushI
	var_189_int = var_187_float / var_187_float; // 0xc40 Div2
	var_185_int = var_188_int + var_189_int; // 0xc41 Add2
	return 2; // 0xc42 Return
}


func_3387(var_397_bool)
{
	var_399_int = 0; var_400_string = ""; // 0xd3c PushV
	var_400_string = "ood3Laska1"; // 0xd3d MovS
	func_3019(var_399_int, var_400_string); // 0xd3e NEW_2
	var_401_int = 0; // 0xd40 PushI
	var_402_bool = var_399_int == var_401_int; // 0xd41 Eq
	if(var_402_bool == 0) goto Label_3397; // 0xd42 JumpB
	var_397_bool = 1; // 0xd43 MovB
	return 0; // 0xd44 Return
	
Label_3397:
	var_397_bool = 0; // 0xd45 MovB
	return 0; // 0xd46 Return
}


func_3139(var_288_bool, var_289_int)
{
	var_290_int = 0; // 0xc44 PushV
	func_3130(var_290_int); // 0xc45 NEW_2
	var_288_bool = var_290_int == var_289_int; // 0xc47 Eq2
	return 0; // 0xc48 Return
}


func_3399()
{
	var_86_object = Obj(); var_87_object = Obj(); // 0xd47 PushV
	var_88_int = 117; // 0xd48 PushI
	var_89_int = 1; // 0xd49 PushI
	var_90_int = 513740; // 0xd4a PushI
	CreateDiaryEntry(var_87_object, var_88_int, var_89_int, var_90_int); // 0xd4b Func
	var_91_bool = 0; var_92_object = Obj(); var_93_int = 0; // 0xd4d PushV
	var_92_object = var_87_object; // 0xd4e Mov
	var_93_int = 111; // 0xd4f MovI
	func_3425(var_91_bool, var_92_object, var_93_int); // 0xd50 NEW_2
	return 2; // 0xd52 Return
}


func_3145(var_60_string, var_61_int)
{
	var_62_string = ""; var_63_string = ""; // 0xc49 PushV
	var_63_string = "idle"; // 0xc4a MovS
	var_64_int = var_61_int; // 0xc4b Push
	if(var_64_int == 0) goto Label_3150; // 0xc4c JumpB
	var_63_string = var_63_string + var_61_int; // 0xc4d Add2
	
Label_3150:
	var_60_string = var_63_string; // 0xc4e Mov
	return 2; // 0xc4f Return
}


func_3152(var_54_int)
{
	var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_bool = 0; // 0xc50 PushV
	var_57_int = 0; // 0xc51 MovI
	
Label_3154:
	var_59_string = "all"; // 0xc52 PushS
	var_60_string = ""; var_61_int = 0; // 0xc53 PushV
	var_61_int = var_57_int; // 0xc54 Mov
	func_3145(var_60_string, var_61_int); // 0xc55 NEW_2
	HasAnimation(var_58_bool, var_59_string, var_60_string); // 0xc57 Func
	var_65_bool = var_58_bool == 0; // 0xc59 Not
	if(var_65_bool == 0) goto Label_3164; // 0xc5a JumpB
	goto Label_3167; // 0xc5b Jump
	
Label_3167:
	var_54_int = var_57_int; // 0xc5f Mov
	return 4; // 0xc60 Return
	
Label_3164:
	var_66_int = 1; // 0xc5c PushI
	var_57_int = var_57_int + var_66_int; // 0xc5d Add2
	goto Label_3154; // 0xc5e Jump
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_590_object, var_591_object)
{
	var_0_object = var_591_object; // 0x52 TMov
	var_1_object = var_590_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_596_int = 1; // 0x55 PushI
	if(var_596_int == 0) goto Label_114; // 0x56 JumpB
	var_597_string = ""; // 0x57 PushV
	var_597_string = "Neutral"; // 0x58 MovS
	func_144(var_591_object, var_597_string); // 0x59 NEW_2
	var_605_int = 535284; // 0x5b PushI
	SetMessage(var_605_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_606_int = 535285; // 0x60 PushI
	var_607_int = 36962; // 0x61 PushI
	var_608_int = 36961; // 0x62 PushI
	AddReply(var_606_int, var_607_int, var_608_int); // 0x63 TObjFunc
	var_609_int = 535292; // 0x65 PushI
	var_610_int = -1; // 0x66 PushI
	var_611_int = 36968; // 0x67 PushI
	AddReply(var_609_int, var_610_int, var_611_int); // 0x68 TObjFunc
	var_612_int = 535293; // 0x6a PushI
	var_613_int = -1; // 0x6b PushI
	var_614_int = 36969; // 0x6c PushI
	AddReply(var_612_int, var_613_int, var_614_int); // 0x6d TObjFunc
	goto Label_114; // 0x6f Jump
	
Label_114:
	var_615_bool = 0; // 0x72 PushV
	func_3177(var_615_bool); // 0x73 NEW_2
	if(var_615_bool == 0) goto Label_129; // 0x75 JumpB
	
Label_118:
	lshWaitForAnimEnd(); // 0x76 Func
	var_616_string = var_3_string; // 0x78 PushT
	if(var_616_string == 0) goto Label_123; // 0x79 JumpB
	goto Label_128; // 0x7a Jump
	
Label_128:
	goto Label_143; // 0x80 Jump
	
Label_143:
	return 0; // 0x8f Return
	
Label_123:
	var_617_string = ""; // 0x7b PushV
	var_617_string = var_2_object; // 0x7c MovT
	func_2939(var_617_string); // 0x7d NEW_2
	goto Label_118; // 0x7f Jump
	
Label_129:
	var_618_string = "all"; // 0x81 PushS
	var_619_string = "idle"; // 0x82 PushS
	PlayAnimation(var_618_string, var_619_string); // 0x83 Func
	
Label_133:
	WaitForAnimEnd(); // 0x85 Func
	var_620_string = var_3_string; // 0x87 PushT
	if(var_620_string == 0) goto Label_138; // 0x88 JumpB
	goto Label_143; // 0x89 Jump
	
Label_138:
	var_621_string = "all"; // 0x8a PushS
	var_622_string = "idle"; // 0x8b PushS
	PlayAnimation(var_621_string, var_622_string); // 0x8c Func
	goto Label_133; // 0x8e Jump
}


func_2896(var_172_bool)
{
	var_174_string = ""; var_175_int = 0; var_176_bool = 0; var_177_int = 0; var_178_string = ""; var_179_string = ""; var_180_int = 0; var_181_bool = 0; var_182_int = 0; var_183_string = ""; // 0xb50 PushV
	var_184_string = "d"; // 0xb51 PushS
	var_185_int = 0; // 0xb52 PushV
	func_3130(var_185_int); // 0xb53 NEW_2
	var_191_int = var_184_string + var_185_int; // 0xb55 Add
	var_192_string = "m"; // 0xb56 PushS
	var_179_string = var_191_int + var_192_string; // 0xb57 Add2
	var_180_int = 0; // 0xb58 MovI
	
Label_2905:
	var_193_int = 1; // 0xb59 PushI
	if(var_193_int == 0) goto Label_2918; // 0xb5a JumpB
	var_194_int = 1; // 0xb5b PushI
	var_195_int = var_180_int + var_194_int; // 0xb5c Add
	var_196_int = var_179_string + var_195_int; // 0xb5d Add
	HasProperty(var_196_int, var_181_bool); // 0xb5e ObjFunc
	var_197_bool = var_181_bool == 0; // 0xb60 Not
	if(var_197_bool == 0) goto Label_2915; // 0xb61 JumpB
	goto Label_2918; // 0xb62 Jump
	
Label_2918:
	var_198_bool = var_180_int == 0; // 0xb66 Not
	if(var_198_bool == 0) goto Label_2922; // 0xb67 JumpB
	var_172_bool = 0; // 0xb68 MovB
	return 10; // 0xb69 Return
	
Label_2922:
	var_182_int = 0; // 0xb6a MovI
	var_199_int = 1; // 0xb6b PushI
	var_200_bool = var_180_int > var_199_int; // 0xb6c GT
	if(var_200_bool == 0) goto Label_2928; // 0xb6d JumpB
	irand(var_182_int, var_180_int); // 0xb6e Func
	
Label_2928:
	var_201_int = 1; // 0xb70 PushI
	var_202_int = var_182_int + var_201_int; // 0xb71 Add
	var_203_int = var_179_string + var_202_int; // 0xb72 Add
	GetProperty(var_203_int, var_183_string); // 0xb73 ObjFunc
	var_204_bool = 0; var_205_string = ""; // 0xb75 PushV
	var_205_string = var_183_string; // 0xb76 Mov
	func_2970(var_204_bool, var_205_string); // 0xb77 NEW_2
	var_172_bool = var_204_bool; // 0xb78 Mov
	return 10; // 0xb7a Return
	
Label_2915:
	var_206_int = 1; // 0xb63 PushI
	var_180_int = var_180_int + var_206_int; // 0xb64 Add2
	goto Label_2905; // 0xb65 Jump
}


func_2643(var_74_bool)
{
	var_74_bool = 1; // 0xa53 MovB
	return 0; // 0xa54 Return
}


func_340(var_0_object, var_1_object, var_2_object, var_3_string, var_225_object, var_226_object)
{
	var_0_object = var_226_object; // 0x155 TMov
	var_1_object = var_225_object; // 0x156 TMov
	var_3_string = 0; // 0x157 TMovB
	var_231_int = 1; // 0x158 PushI
	if(var_231_int == 0) goto Label_373; // 0x159 JumpB
	var_232_object = Obj(); var_233_object = Obj(); // 0x15a PushV
	var_232_object = var_1_object; // 0x15b MovT
	var_233_object = var_0_object; // 0x15c MovT
	func_3282(); // 0x15d NEW_2
	var_236_string = ""; // 0x15f PushV
	var_236_string = "Neutral"; // 0x160 MovS
	func_403(var_226_object, var_236_string); // 0x161 NEW_2
	var_253_int = 500370; // 0x163 PushI
	SetMessage(var_253_int); // 0x164 TObjFunc
	ClearReplies(); // 0x166 TObjFunc
	var_254_int = 500371; // 0x168 PushI
	var_255_int = 432; // 0x169 PushI
	var_256_int = 430; // 0x16a PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x16b TObjFunc
	var_257_int = 500372; // 0x16d PushI
	var_258_int = 437; // 0x16e PushI
	var_259_int = 431; // 0x16f PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x170 TObjFunc
	goto Label_373; // 0x172 Jump
	
Label_373:
	var_260_bool = 0; // 0x175 PushV
	func_3177(var_260_bool); // 0x176 NEW_2
	if(var_260_bool == 0) goto Label_388; // 0x178 JumpB
	
Label_377:
	lshWaitForAnimEnd(); // 0x179 Func
	var_261_string = var_3_string; // 0x17b PushT
	if(var_261_string == 0) goto Label_382; // 0x17c JumpB
	goto Label_387; // 0x17d Jump
	
Label_387:
	goto Label_402; // 0x183 Jump
	
Label_402:
	return 0; // 0x192 Return
	
Label_382:
	var_262_string = ""; // 0x17e PushV
	var_262_string = var_2_object; // 0x17f MovT
	func_2939(var_262_string); // 0x180 NEW_2
	goto Label_377; // 0x182 Jump
	
Label_388:
	var_273_string = "all"; // 0x184 PushS
	var_274_string = "idle"; // 0x185 PushS
	PlayAnimation(var_273_string, var_274_string); // 0x186 Func
	
Label_392:
	WaitForAnimEnd(); // 0x188 Func
	var_275_string = var_3_string; // 0x18a PushT
	if(var_275_string == 0) goto Label_397; // 0x18b JumpB
	goto Label_402; // 0x18c Jump
	
Label_397:
	var_276_string = "all"; // 0x18d PushS
	var_277_string = "idle"; // 0x18e PushS
	PlayAnimation(var_276_string, var_277_string); // 0x18f Func
	goto Label_392; // 0x191 Jump
}


func_2645()
{
	StopAnimation(); // 0xa55 Func
	StopGroup0(); // 0xa57 Func
	return 0; // 0xa59 Return
}


func_3412(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0xd54 PushV
	GetDiaryRoot(var_102_object); // 0xd55 Func
	var_103_bool = var_102_object == 0; // 0xd57 Not
	if(var_103_bool == 0) goto Label_3422; // 0xd58 JumpB
	var_104_string = "Can't retrieve diary root"; // 0xd59 PushS
	Trace(var_104_string); // 0xd5a Func
	var_100_object = 0; // 0xd5c MovB
	return 2; // 0xd5d Return
	
Label_3422:
	var_100_object = var_102_object; // 0xd5e Mov
	return 2; // 0xd5f Return
}


func_1366(var_0_object, var_421_int, var_422_object)
{
	var_424_object = Obj(); var_425_bool = 0; var_426_int = 0; var_427_bool = 0; var_428_object = Obj(); var_429_bool = 0; var_430_int = 0; var_431_bool = 0; // 0x556 PushV
	var_0_object = var_422_object; // 0x557 TMov
	var_432_bool = 0; var_433_object = Obj(); var_434_float = 0; // 0x558 PushV
	var_433_object = var_422_object; // 0x559 Mov
	var_434_float = 70.0; // 0x55a MovF
	func_2716(var_433_object, var_434_float); // 0x55b NEW_2
	var_435_bool = var_432_bool == 0; // 0x55d Not
	if(var_435_bool == 0) goto Label_1377; // 0x55e JumpB
	var_421_int = -2; // 0x55f MovI
	return 8; // 0x560 Return
	
Label_1377:
	CreateDialog(var_428_object); // 0x561 Func
	var_436_int = 0; // 0x563 PushV
	func_3171(var_436_int); // 0x564 NEW_2
	SetNPCName(var_436_int); // 0x566 ObjFunc
	var_437_int = 0; // 0x568 PushV
	func_3169(var_437_int); // 0x569 NEW_2
	SetNPCDescription(var_437_int); // 0x56b ObjFunc
	var_438_string = ""; // 0x56d PushV
	func_3173(var_438_string); // 0x56e NEW_2
	SetPhoto(var_438_string); // 0x570 ObjFunc
	var_439_string = ""; // 0x572 PushV
	func_3175(var_439_string); // 0x573 NEW_2
	SetPhoto2(var_439_string); // 0x575 ObjFunc
	var_440_int = 0; // 0x577 PushV
	func_3470(var_440_int); // 0x578 NEW_2
	SetPlayerName(var_440_int); // 0x57a ObjFunc
	var_430_int = -1; // 0x57c MovI
	IsOverrideActive(var_429_bool); // 0x57d Func
	var_441_bool = var_429_bool; // 0x57f Push
	if(var_441_bool == 0) goto Label_1411; // 0x580 JumpB
	var_421_int = -2; // 0x581 MovI
	return 8; // 0x582 Return
	
Label_1411:
	DoDialog(var_428_object); // 0x583 Func
	var_442_bool = 0; var_443_object = Obj(); // 0x585 PushV
	var_444_object = Obj(); // 0x586 PushV
	func_2992(var_444_object); // 0x587 NEW_2
	var_443_object = var_444_object; // 0x588 Mov
	func_2801(var_442_bool, var_443_object); // 0x58a NEW_2
	var_445_object = Obj(); var_446_object = Obj(); // 0x58c PushV
	var_445_object = var_422_object; // 0x58d Mov
	var_446_object = var_428_object; // 0x58e Mov
	TaskCall(9); // 0x58f TaskCall
	func_1447(var_447_object, var_448_object, var_449_string, var_450_bool, var_445_object, var_446_object); // 0x590 NEW_2
	TaskReturn(); // 0x591 TaskReturn
	IsDialogEnd(var_431_bool); // 0x593 ObjFunc
	
Label_1429:
	var_488_bool = var_431_bool == 0; // 0x595 Not
	if(var_488_bool == 0) goto Label_1436; // 0x596 JumpB
	sync(); // 0x597 Func
	IsDialogEnd(var_431_bool); // 0x599 ObjFunc
	goto Label_1429; // 0x59b Jump
	
Label_1436:
	var_489_object = Obj(); // 0x59c PushV
	var_489_object = var_422_object; // 0x59d Mov
	func_2784(); // 0x59e NEW_2
	StopDialog(var_428_object); // 0x5a0 Func
	GetReturnValue(var_430_int); // 0x5a2 ObjFunc
	var_421_int = var_430_int; // 0x5a4 Mov
	return 8; // 0x5a5 Return
}


func_2650(var_51_float)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); // 0xa5a PushV
	GetPosition(var_56_cvector); // 0xa5b Func
	GetPosition(var_57_cvector); // 0xa5d ObjFunc
	var_58_cvector = var_57_cvector - var_56_cvector; // 0xa5f Sub2
	var_51_float = var_58_cvector | var_58_cvector; // 0xa60 Or2
	return 6; // 0xa61 Return
}


func_2398(var_0_object)
{
	var_36_bool = 0; // 0x95e PushV
	func_2711(var_36_bool); // 0x95f NEW_2
	var_39_bool = var_36_bool == 0; // 0x961 Not
	if(var_39_bool == 0) goto Label_2405; // 0x962 JumpB
	Hold(); // 0x963 Func
	
Label_2405:
	GetDirection(var_0_object); // 0x965 Func
	
Label_2407:
	func_2574(); // 0x968 NEW_2
	goto Label_2407; // 0x96a Jump
}


func_3169(var_118_int)
{
	var_118_int = 515542; // 0xc61 MovI
	return 0; // 0xc62 Return
}


func_2658(var_99_bool, var_100_object, var_101_string)
{
	var_102_bool = 0; var_103_bool = 0; // 0xa62 PushV
	var_104_string = "HasProperty"; // 0xa63 PushS
	var_105_int = 2; // 0xa64 PushI
	var_106_bool = IsFuncExist(var_100_object, var_104_string, var_105_int); // 0xa65 FuncExist
	var_107_bool = var_106_bool == 0; // 0xa66 Not
	if(var_107_bool == 0) goto Label_2666; // 0xa67 JumpB
	var_99_bool = 0; // 0xa68 MovB
	return 2; // 0xa69 Return
	
Label_2666:
	HasProperty(var_101_string, var_103_bool); // 0xa6a ObjFunc
	var_99_bool = var_103_bool; // 0xa6c Mov
	return 2; // 0xa6d Return
}


func_3171(var_117_int)
{
	var_117_int = 502867; // 0xc63 MovI
	return 0; // 0xc64 Return
}


func_3425(var_91_bool, var_92_object, var_93_int)
{
	var_94_object = Obj(); var_95_object = Obj(); var_96_int = 0; var_97_object = Obj(); var_98_object = Obj(); var_99_int = 0; // 0xd61 PushV
	var_100_object = Obj(); // 0xd62 PushV
	func_3412(var_100_object); // 0xd63 NEW_2
	var_97_object = var_100_object; // 0xd64 Mov
	Find(var_93_int, var_98_object); // 0xd66 ObjFunc
	var_105_bool = var_98_object == 0; // 0xd68 Not
	if(var_105_bool == 0) goto Label_3440; // 0xd69 JumpB
	var_106_string = "Can't find diary parent with id: "; // 0xd6a PushS
	var_107_int = var_106_string + var_93_int; // 0xd6b Add
	Trace(var_107_int); // 0xd6c Func
	var_91_bool = 0; // 0xd6e MovB
	return 6; // 0xd6f Return
	
Label_3440:
	AddChild(var_92_object); // 0xd70 ObjFunc
	var_108_int = 7; // 0xd72 PushI
	SendWorldWndMessage(var_108_int); // 0xd73 Func
	GetCategory(var_99_int); // 0xd75 ObjFunc
	SetDiarySection(var_99_int); // 0xd77 Func
	var_91_bool = 0; // 0xd79 MovB
	return 6; // 0xd7a Return
}


func_3173(var_119_string)
{
	var_119_string = "ui/NPC_Laska.png"; // 0xc65 MovS
	return 0; // 0xc66 Return
}


func_1892(var_0_object, var_1_object, var_2_object, var_3_string, var_516_object, var_517_object)
{
	var_0_object = var_517_object; // 0x765 TMov
	var_1_object = var_516_object; // 0x766 TMov
	var_3_string = 0; // 0x767 TMovB
	var_522_int = 1; // 0x768 PushI
	if(var_522_int == 0) goto Label_1939; // 0x769 JumpB
	var_523_string = ""; // 0x76a PushV
	var_523_string = "Pain"; // 0x76b MovS
	func_1969(var_517_object, var_523_string); // 0x76c NEW_2
	var_531_int = 540043; // 0x76e PushI
	SetMessage(var_531_int); // 0x76f TObjFunc
	ClearReplies(); // 0x771 TObjFunc
	var_532_bool = 0; // 0x773 PushV
	var_532_bool = 0; // 0x774 MovB
	var_533_bool = 0; var_534_object = Obj(); // 0x775 PushV
	var_534_object = var_1_object; // 0x776 MovT
	func_3375(var_534_object); // 0x777 NEW_2
	if(var_533_bool == 0) goto Label_1920; // 0x779 JumpB
	var_539_bool = 0; var_540_object = Obj(); // 0x77a PushV
	var_540_object = var_1_object; // 0x77b MovT
	func_3327(var_540_object); // 0x77c NEW_2
	if(var_539_bool == 0) goto Label_1920; // 0x77e JumpB
	var_532_bool = 1; // 0x77f MovB
	
Label_1920:
	if(var_532_bool == 0) goto Label_1926; // 0x780 JumpB
	var_545_int = 540045; // 0x781 PushI
	var_546_int = 42013; // 0x782 PushI
	var_547_int = 42012; // 0x783 PushI
	AddReply(var_545_int, var_546_int, var_547_int); // 0x784 TObjFunc
	
Label_1926:
	var_548_int = 540044; // 0x786 PushI
	var_549_int = -1; // 0x787 PushI
	var_550_int = 42011; // 0x788 PushI
	AddReply(var_548_int, var_549_int, var_550_int); // 0x789 TObjFunc
	var_551_int = 540060; // 0x78b PushI
	var_552_int = -1; // 0x78c PushI
	var_553_int = 42029; // 0x78d PushI
	AddReply(var_551_int, var_552_int, var_553_int); // 0x78e TObjFunc
	goto Label_1939; // 0x790 Jump
	
Label_1939:
	var_554_bool = 0; // 0x793 PushV
	func_3177(var_554_bool); // 0x794 NEW_2
	if(var_554_bool == 0) goto Label_1954; // 0x796 JumpB
	
Label_1943:
	lshWaitForAnimEnd(); // 0x797 Func
	var_555_string = var_3_string; // 0x799 PushT
	if(var_555_string == 0) goto Label_1948; // 0x79a JumpB
	goto Label_1953; // 0x79b Jump
	
Label_1953:
	goto Label_1968; // 0x7a1 Jump
	
Label_1968:
	return 0; // 0x7b0 Return
	
Label_1948:
	var_556_string = ""; // 0x79c PushV
	var_556_string = var_2_object; // 0x79d MovT
	func_2939(var_556_string); // 0x79e NEW_2
	goto Label_1943; // 0x7a0 Jump
	
Label_1954:
	var_557_string = "all"; // 0x7a2 PushS
	var_558_string = "idle"; // 0x7a3 PushS
	PlayAnimation(var_557_string, var_558_string); // 0x7a4 Func
	
Label_1958:
	WaitForAnimEnd(); // 0x7a6 Func
	var_559_string = var_3_string; // 0x7a8 PushT
	if(var_559_string == 0) goto Label_1963; // 0x7a9 JumpB
	goto Label_1968; // 0x7aa Jump
	
Label_1963:
	var_560_string = "all"; // 0x7ab PushS
	var_561_string = "idle"; // 0x7ac PushS
	PlayAnimation(var_560_string, var_561_string); // 0x7ad Func
	goto Label_1958; // 0x7af Jump
}


func_3175(var_120_string)
{
	var_120_string = "ui/NPC_Laska_b.png"; // 0xc67 MovS
	return 0; // 0xc68 Return
}


func_3177(var_112_bool)
{
	var_112_bool = 1; // 0xc69 MovB
	return 0; // 0xc6a Return
}


func_617(var_0_object, var_1_object, var_2_object, var_3_string, var_315_object, var_316_object)
{
	var_0_object = var_316_object; // 0x26a TMov
	var_1_object = var_315_object; // 0x26b TMov
	var_3_string = 0; // 0x26c TMovB
	var_321_int = 1; // 0x26d PushI
	if(var_321_int == 0) goto Label_650; // 0x26e JumpB
	var_322_string = ""; // 0x26f PushV
	var_322_string = "Neutral"; // 0x270 MovS
	func_680(var_316_object, var_322_string); // 0x271 NEW_2
	var_330_int = 509473; // 0x273 PushI
	SetMessage(var_330_int); // 0x274 TObjFunc
	ClearReplies(); // 0x276 TObjFunc
	var_331_bool = 0; var_332_object = Obj(); // 0x278 PushV
	var_332_object = var_1_object; // 0x279 MovT
	func_3315(var_332_object); // 0x27a NEW_2
	if(var_331_bool == 0) goto Label_642; // 0x27c JumpB
	var_339_int = 533914; // 0x27d PushI
	var_340_int = 35474; // 0x27e PushI
	var_341_int = 35473; // 0x27f PushI
	AddReply(var_339_int, var_340_int, var_341_int); // 0x280 TObjFunc
	
Label_642:
	var_342_int = 509487; // 0x282 PushI
	var_343_int = -1; // 0x283 PushI
	var_344_int = 10429; // 0x284 PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0x285 TObjFunc
	goto Label_650; // 0x287 Jump
	
Label_650:
	var_345_bool = 0; // 0x28a PushV
	func_3177(var_345_bool); // 0x28b NEW_2
	if(var_345_bool == 0) goto Label_665; // 0x28d JumpB
	
Label_654:
	lshWaitForAnimEnd(); // 0x28e Func
	var_346_string = var_3_string; // 0x290 PushT
	if(var_346_string == 0) goto Label_659; // 0x291 JumpB
	goto Label_664; // 0x292 Jump
	
Label_664:
	goto Label_679; // 0x298 Jump
	
Label_679:
	return 0; // 0x2a7 Return
	
Label_659:
	var_347_string = ""; // 0x293 PushV
	var_347_string = var_2_object; // 0x294 MovT
	func_2939(var_347_string); // 0x295 NEW_2
	goto Label_654; // 0x297 Jump
	
Label_665:
	var_348_string = "all"; // 0x299 PushS
	var_349_string = "idle"; // 0x29a PushS
	PlayAnimation(var_348_string, var_349_string); // 0x29b Func
	
Label_669:
	WaitForAnimEnd(); // 0x29d Func
	var_350_string = var_3_string; // 0x29f PushT
	if(var_350_string == 0) goto Label_674; // 0x2a0 JumpB
	goto Label_679; // 0x2a1 Jump
	
Label_674:
	var_351_string = "all"; // 0x2a2 PushS
	var_352_string = "idle"; // 0x2a3 PushS
	PlayAnimation(var_351_string, var_352_string); // 0x2a4 Func
	goto Label_669; // 0x2a6 Jump
}


func_3179()
{
	var_74_string = "playsound"; // 0xc6c PushS
	var_75_string = "giveitem"; // 0xc6d PushS
	TriggerWorld(var_74_string, var_75_string); // 0xc6e Func
	return 0; // 0xc70 Return
}


func_2412(var_61_bool)
{
	var_62_object = Obj(); var_63_object = Obj(); // 0x96c PushV
	var_64_string = "player"; // 0x96d PushS
	FindActor(var_63_object, var_64_string); // 0x96e Func
	var_65_bool = var_63_object == 0; // 0x970 Not
	if(var_65_bool == 0) goto Label_2420; // 0x971 JumpB
	var_61_bool = 0; // 0x972 MovB
	return 2; // 0x973 Return
	
Label_2420:
	var_66_bool = 0; var_67_object = Obj(); // 0x974 PushV
	var_67_object = var_63_object; // 0x975 Mov
	func_2702(var_67_object); // 0x976 NEW_2
	var_61_bool = var_66_bool; // 0x977 Mov
	return 2; // 0x979 Return
}


func_2670(var_91_bool, var_92_object, var_93_string, var_94_float, var_95_float, var_96_float)
{
	var_97_float = 0; var_98_float = 0; // 0xa6e PushV
	var_99_bool = 0; var_100_object = Obj(); var_101_string = ""; // 0xa6f PushV
	var_100_object = var_92_object; // 0xa70 Mov
	var_101_string = var_93_string; // 0xa71 Mov
	func_2658(var_99_bool, var_100_object, var_101_string); // 0xa72 NEW_2
	var_108_bool = var_99_bool == 0; // 0xa74 Not
	if(var_108_bool == 0) goto Label_2680; // 0xa75 JumpB
	var_91_bool = 0; // 0xa76 MovB
	return 2; // 0xa77 Return
	
Label_2680:
	GetProperty(var_93_string, var_98_float); // 0xa78 ObjFunc
	var_109_float = 0; var_110_float = 0; var_111_float = 0; var_112_float = 0; // 0xa7a PushV
	var_110_float = var_98_float + var_94_float; // 0xa7b Add2
	var_111_float = var_95_float; // 0xa7c Mov
	var_112_float = var_96_float; // 0xa7d Mov
	func_3008(var_109_float, var_110_float, var_111_float, var_112_float); // 0xa7e NEW_2
	SetProperty(var_93_string, var_109_float); // 0xa80 ObjFunc
	var_91_bool = 1; // 0xa82 MovB
	return 2; // 0xa83 Return
}


func_1136(var_0_object, var_1_object, var_2_object, var_3_string, var_381_object, var_382_object)
{
	var_0_object = var_382_object; // 0x471 TMov
	var_1_object = var_381_object; // 0x472 TMov
	var_3_string = 0; // 0x473 TMovB
	var_387_int = 1; // 0x474 PushI
	if(var_387_int == 0) goto Label_1169; // 0x475 JumpB
	var_388_string = ""; // 0x476 PushV
	var_388_string = "Pain"; // 0x477 MovS
	func_1199(var_382_object, var_388_string); // 0x478 NEW_2
	var_396_int = 509951; // 0x47a PushI
	SetMessage(var_396_int); // 0x47b TObjFunc
	ClearReplies(); // 0x47d TObjFunc
	var_397_bool = 0; var_398_object = Obj(); // 0x47f PushV
	var_398_object = var_1_object; // 0x480 MovT
	func_3387(var_398_object); // 0x481 NEW_2
	if(var_397_bool == 0) goto Label_1161; // 0x483 JumpB
	var_403_int = 509961; // 0x484 PushI
	var_404_int = 10970; // 0x485 PushI
	var_405_int = 10978; // 0x486 PushI
	AddReply(var_403_int, var_404_int, var_405_int); // 0x487 TObjFunc
	
Label_1161:
	var_406_int = 509952; // 0x489 PushI
	var_407_int = -1; // 0x48a PushI
	var_408_int = 10969; // 0x48b PushI
	AddReply(var_406_int, var_407_int, var_408_int); // 0x48c TObjFunc
	goto Label_1169; // 0x48e Jump
	
Label_1169:
	var_409_bool = 0; // 0x491 PushV
	func_3177(var_409_bool); // 0x492 NEW_2
	if(var_409_bool == 0) goto Label_1184; // 0x494 JumpB
	
Label_1173:
	lshWaitForAnimEnd(); // 0x495 Func
	var_410_string = var_3_string; // 0x497 PushT
	if(var_410_string == 0) goto Label_1178; // 0x498 JumpB
	goto Label_1183; // 0x499 Jump
	
Label_1183:
	goto Label_1198; // 0x49f Jump
	
Label_1198:
	return 0; // 0x4ae Return
	
Label_1178:
	var_411_string = ""; // 0x49a PushV
	var_411_string = var_2_object; // 0x49b MovT
	func_2939(var_411_string); // 0x49c NEW_2
	goto Label_1173; // 0x49e Jump
	
Label_1184:
	var_412_string = "all"; // 0x4a0 PushS
	var_413_string = "idle"; // 0x4a1 PushS
	PlayAnimation(var_412_string, var_413_string); // 0x4a2 Func
	
Label_1188:
	WaitForAnimEnd(); // 0x4a4 Func
	var_414_string = var_3_string; // 0x4a6 PushT
	if(var_414_string == 0) goto Label_1193; // 0x4a7 JumpB
	goto Label_1198; // 0x4a8 Jump
	
Label_1193:
	var_415_string = "all"; // 0x4a9 PushS
	var_416_string = "idle"; // 0x4aa PushS
	PlayAnimation(var_415_string, var_416_string); // 0x4ab Func
	goto Label_1188; // 0x4ad Jump
}


func_3185()
{
	var_44_string = "ood2Laska1"; // 0xc72 PushS
	var_45_int = 1; // 0xc73 PushI
	SetVariable(var_44_string, var_45_int); // 0xc74 Func
	return 0; // 0xc76 Return
}


func_3191()
{
	var_44_string = "ood11Laska1"; // 0xc78 PushS
	var_45_int = 1; // 0xc79 PushI
	SetVariable(var_44_string, var_45_int); // 0xc7a Func
	return 0; // 0xc7c Return
}


func_2939(var_262_string)
{
	var_263_bool = 0; var_264_float = 0; var_265_float = 0; var_266_bool = 0; var_267_float = 0; var_268_float = 0; // 0xb7b PushV
	lshHasAnimation(var_266_bool, var_262_string); // 0xb7c Func
	var_269_bool = var_266_bool; // 0xb7e Push
	if(var_269_bool == 0) goto Label_2950; // 0xb7f JumpB
	lshGetAnimTimes(var_262_string, var_267_float, var_268_float); // 0xb80 Func
	var_270_bool = 0; // 0xb82 PushB
	lshPlayAnimation(var_267_float, var_268_float, var_270_bool); // 0xb83 Func
	goto Label_2954; // 0xb85 Jump
	
Label_2954:
	return 6; // 0xb8a Return
	
Label_2950:
	var_271_string = "Can't find lsh animation : "; // 0xb86 PushS
	var_272_int = var_271_string + var_262_string; // 0xb87 Add
	Trace(var_272_int); // 0xb88 Func
}


func_2427(var_0_object)
{
	var_113_float = GetByIndex(var_0_object, 0); // 0x97b PushE
	var_114_float = GetByIndex(var_0_object, 2); // 0x97c PushE
	RotateAsync(var_113_float, var_114_float); // 0x97d Func
	return 0; // 0x97f Return
}


func_3197(var_87_object)
{
	var_89_string = "bandage is given"; // 0xc7e PushS
	Trace(var_89_string); // 0xc7f Func
	var_90_object = Obj(); var_91_string = ""; var_92_int = 0; // 0xc81 PushV
	var_90_object = var_87_object; // 0xc82 Mov
	var_91_string = "bandage"; // 0xc83 MovS
	var_92_int = 1; // 0xc84 MovI
	func_3055(var_90_object, var_91_string, var_92_int); // 0xc85 NEW_2
	return 0; // 0xc87 Return
}


func_3453(var_72_object)
{
	var_73_object = Obj(); var_74_object = Obj(); var_75_object = Obj(); var_76_object = Obj(); // 0xd7d PushV
	GetMainOutdoorScene(var_75_object); // 0xd7e Func
	var_77_bool = var_75_object == 0; // 0xd80 NullEq
	if(var_77_bool == 0) goto Label_3464; // 0xd81 JumpB
	var_78_string = "Can't find main outdoor scene"; // 0xd82 PushS
	Trace(var_78_string); // 0xd83 Func
	var_76_object = 0; // 0xd85 SetNull
	var_72_object = var_76_object; // 0xd86 Mov
	return 4; // 0xd87 Return
	
Label_3464:
	GetMap(var_76_object); // 0xd88 ObjFunc
	var_72_object = var_76_object; // 0xd8a Mov
	return 4; // 0xd8b Return
}


func_2432(var_44_bool)
{
	var_45_object = Obj(); var_46_bool = 0; var_47_object = Obj(); var_48_bool = 0; // 0x980 PushV
	var_49_string = "player"; // 0x981 PushS
	FindActor(var_47_object, var_49_string); // 0x982 Func
	var_50_bool = var_47_object == 0; // 0x984 Not
	if(var_50_bool == 0) goto Label_2440; // 0x985 JumpB
	var_44_bool = 0; // 0x986 MovB
	return 4; // 0x987 Return
	
Label_2440:
	var_51_float = 0; var_52_object = Obj(); // 0x988 PushV
	var_52_object = var_47_object; // 0x989 Mov
	func_2650(var_52_object); // 0x98a NEW_2
	var_59_float = 90000.0; // 0x98c PushF
	var_60_bool = var_51_float > var_59_float; // 0x98d GT
	if(var_60_bool == 0) goto Label_2449; // 0x98e JumpB
	var_44_bool = 0; // 0x98f MovB
	return 4; // 0x990 Return
	
Label_2449:
	CanSee(var_48_bool, var_47_object); // 0x991 Func
	var_44_bool = var_48_bool; // 0x993 Mov
	return 4; // 0x994 Return
}


func_2692(var_44_bool, var_45_cvector)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_bool = 0; // 0xa84 PushV
	GetPosition(var_49_cvector); // 0xa85 Func
	var_50_cvector = var_45_cvector - var_49_cvector; // 0xa87 Sub2
	var_52_float = GetByIndex(var_50_cvector, 0); // 0xa88 PushE
	var_53_float = GetByIndex(var_50_cvector, 2); // 0xa89 PushE
	Rotate(var_52_float, var_53_float, var_51_bool); // 0xa8a Func
	var_44_bool = var_51_bool; // 0xa8c Mov
	return 6; // 0xa8d Return
}


func_3208(var_76_object)
{
	var_78_string = "tourniquet is given"; // 0xc89 PushS
	Trace(var_78_string); // 0xc8a Func
	var_79_object = Obj(); var_80_string = ""; var_81_int = 0; // 0xc8c PushV
	var_79_object = var_76_object; // 0xc8d Mov
	var_80_string = "tourniquet"; // 0xc8e MovS
	var_81_int = 1; // 0xc8f MovI
	func_3055(var_79_object, var_80_string, var_81_int); // 0xc90 NEW_2
	return 0; // 0xc92 Return
}


func_2955(var_240_string, var_241_bool)
{
	var_244_bool = 0; var_245_float = 0; var_246_float = 0; var_247_bool = 0; var_248_float = 0; var_249_float = 0; // 0xb8b PushV
	lshHasAnimation(var_247_bool, var_240_string); // 0xb8c Func
	var_250_bool = var_247_bool; // 0xb8e Push
	if(var_250_bool == 0) goto Label_2965; // 0xb8f JumpB
	lshGetAnimTimes(var_240_string, var_248_float, var_249_float); // 0xb90 Func
	lshPlayAnimation(var_248_float, var_249_float, var_241_bool); // 0xb92 Func
	goto Label_2969; // 0xb94 Jump
	
Label_2969:
	return 6; // 0xb99 Return
	
Label_2965:
	var_251_string = "Can't find lsh animation : "; // 0xb95 PushS
	var_252_int = var_251_string + var_240_string; // 0xb96 Add
	Trace(var_252_int); // 0xb97 Func
}


func_2702(var_40_bool)
{
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0xa8e PushV
	GetPosition(var_43_cvector); // 0xa8f ObjFunc
	var_44_bool = 0; var_45_cvector = CVector(0,0,0); // 0xa91 PushV
	var_45_cvector = var_43_cvector; // 0xa92 Mov
	func_2692(var_44_bool, var_45_cvector); // 0xa93 NEW_2
	var_40_bool = var_44_bool; // 0xa94 Mov
	return 2; // 0xa96 Return
}


func_2191(var_0_object, var_625_int, var_626_object)
{
	var_628_object = Obj(); var_629_bool = 0; var_630_int = 0; var_631_bool = 0; var_632_object = Obj(); var_633_bool = 0; var_634_int = 0; var_635_bool = 0; // 0x88f PushV
	var_0_object = var_626_object; // 0x890 TMov
	var_636_bool = 0; var_637_object = Obj(); var_638_float = 0; // 0x891 PushV
	var_637_object = var_626_object; // 0x892 Mov
	var_638_float = 70.0; // 0x893 MovF
	func_2716(var_637_object, var_638_float); // 0x894 NEW_2
	var_639_bool = var_636_bool == 0; // 0x896 Not
	if(var_639_bool == 0) goto Label_2202; // 0x897 JumpB
	var_625_int = -2; // 0x898 MovI
	return 8; // 0x899 Return
	
Label_2202:
	CreateDialog(var_632_object); // 0x89a Func
	var_640_int = 0; // 0x89c PushV
	func_3171(var_640_int); // 0x89d NEW_2
	SetNPCName(var_640_int); // 0x89f ObjFunc
	var_641_int = 0; // 0x8a1 PushV
	func_3169(var_641_int); // 0x8a2 NEW_2
	SetNPCDescription(var_641_int); // 0x8a4 ObjFunc
	var_642_string = ""; // 0x8a6 PushV
	func_3173(var_642_string); // 0x8a7 NEW_2
	SetPhoto(var_642_string); // 0x8a9 ObjFunc
	var_643_string = ""; // 0x8ab PushV
	func_3175(var_643_string); // 0x8ac NEW_2
	SetPhoto2(var_643_string); // 0x8ae ObjFunc
	var_644_int = 0; // 0x8b0 PushV
	func_3470(var_644_int); // 0x8b1 NEW_2
	SetPlayerName(var_644_int); // 0x8b3 ObjFunc
	var_634_int = -1; // 0x8b5 MovI
	IsOverrideActive(var_633_bool); // 0x8b6 Func
	var_645_bool = var_633_bool; // 0x8b8 Push
	if(var_645_bool == 0) goto Label_2236; // 0x8b9 JumpB
	var_625_int = -2; // 0x8ba MovI
	return 8; // 0x8bb Return
	
Label_2236:
	DoDialog(var_632_object); // 0x8bc Func
	var_646_bool = 0; var_647_object = Obj(); // 0x8be PushV
	var_648_object = Obj(); // 0x8bf PushV
	func_2992(var_648_object); // 0x8c0 NEW_2
	var_647_object = var_648_object; // 0x8c1 Mov
	func_2801(var_646_bool, var_647_object); // 0x8c3 NEW_2
	var_649_object = Obj(); var_650_object = Obj(); // 0x8c5 PushV
	var_649_object = var_626_object; // 0x8c6 Mov
	var_650_object = var_632_object; // 0x8c7 Mov
	TaskCall(13); // 0x8c8 TaskCall
	func_2272(var_651_object, var_652_object, var_653_string, var_654_bool, var_649_object, var_650_object); // 0x8c9 NEW_2
	TaskReturn(); // 0x8ca TaskReturn
	IsDialogEnd(var_635_bool); // 0x8cc ObjFunc
	
Label_2254:
	var_679_bool = var_635_bool == 0; // 0x8ce Not
	if(var_679_bool == 0) goto Label_2261; // 0x8cf JumpB
	sync(); // 0x8d0 Func
	IsDialogEnd(var_635_bool); // 0x8d2 ObjFunc
	goto Label_2254; // 0x8d4 Jump
	
Label_2261:
	var_680_object = Obj(); // 0x8d5 PushV
	var_680_object = var_626_object; // 0x8d6 Mov
	func_2784(); // 0x8d7 NEW_2
	StopDialog(var_632_object); // 0x8d9 Func
	GetReturnValue(var_634_int); // 0x8db ObjFunc
	var_625_int = var_634_int; // 0x8dd Mov
	return 8; // 0x8de Return
}


func_144(var_2_object, var_597_string)
{
	var_598_bool = 0; // 0x91 PushV
	func_3177(var_598_bool); // 0x92 NEW_2
	var_599_bool = var_598_bool == 0; // 0x94 Not
	if(var_599_bool == 0) goto Label_151; // 0x95 JumpB
	return 0; // 0x96 Return
	
Label_151:
	var_600_bool = var_597_string == var_2_object; // 0x97 Eq
	if(var_600_bool == 0) goto Label_154; // 0x98 JumpB
	return 0; // 0x99 Return
	
Label_154:
	var_601_string = ""; var_602_bool = 0; // 0x9a PushV
	var_601_string = var_597_string; // 0x9b Mov
	var_603_string = ""; // 0x9c PushS
	var_604_bool = var_597_string == var_603_string; // 0x9d Eq
	if(var_604_bool == 0) goto Label_161; // 0x9e JumpB
	var_602_bool = 0; // 0x9f MovB
	goto Label_162; // 0xa0 Jump
	
Label_162:
	func_2955(var_601_string, var_602_bool); // 0xa2 NEW_2
	var_2_object = var_597_string; // 0xa4 TMov
	return 0; // 0xa5 Return
	
Label_161:
	var_602_bool = 1; // 0xa1 MovB
}


func_3470(var_121_int)
{
	var_122_int = 0; var_123_int = 0; // 0xd8e PushV
	var_124_string = "branch"; // 0xd8f PushS
	GetVariable(var_124_string, var_123_int); // 0xd90 Func
	var_125_int = 0; // 0xd92 PushI
	var_126_bool = var_123_int == var_125_int; // 0xd93 Eq
	if(var_126_bool == 0) goto Label_3480; // 0xd94 JumpB
	var_121_int = 1; // 0xd95 MovI
	return 2; // 0xd96 Return
	
Label_3480:
	var_127_int = 1; // 0xd98 PushI
	var_128_bool = var_123_int == var_127_int; // 0xd99 Eq
	if(var_128_bool == 0) goto Label_3485; // 0xd9a JumpB
	var_121_int = 2; // 0xd9b MovI
	return 2; // 0xd9c Return
	
Label_3485:
	var_121_int = 3; // 0xd9d MovI
	return 2; // 0xd9e Return
}


func_3219(var_48_object)
{
	var_50_string = "powder is given"; // 0xc94 PushS
	Trace(var_50_string); // 0xc95 Func
	var_51_object = Obj(); var_52_string = ""; var_53_int = 0; // 0xc97 PushV
	var_51_object = var_48_object; // 0xc98 Mov
	var_52_string = "powder"; // 0xc99 MovS
	var_53_int = 1; // 0xc9a MovI
	func_3055(var_51_object, var_52_string, var_53_int); // 0xc9b NEW_2
	return 0; // 0xc9d Return
}


func_403(var_2_object, var_236_string)
{
	var_237_bool = 0; // 0x194 PushV
	func_3177(var_237_bool); // 0x195 NEW_2
	var_238_bool = var_237_bool == 0; // 0x197 Not
	if(var_238_bool == 0) goto Label_410; // 0x198 JumpB
	return 0; // 0x199 Return
	
Label_410:
	var_239_bool = var_236_string == var_2_object; // 0x19a Eq
	if(var_239_bool == 0) goto Label_413; // 0x19b JumpB
	return 0; // 0x19c Return
	
Label_413:
	var_240_string = ""; var_241_bool = 0; // 0x19d PushV
	var_240_string = var_236_string; // 0x19e Mov
	var_242_string = ""; // 0x19f PushS
	var_243_bool = var_236_string == var_242_string; // 0x1a0 Eq
	if(var_243_bool == 0) goto Label_420; // 0x1a1 JumpB
	var_241_bool = 0; // 0x1a2 MovB
	goto Label_421; // 0x1a3 Jump
	
Label_421:
	func_2955(var_240_string, var_241_bool); // 0x1a5 NEW_2
	var_2_object = var_236_string; // 0x1a7 TMov
	return 0; // 0x1a8 Return
	
Label_420:
	var_241_bool = 1; // 0x1a4 MovB
}


func_2454()
{
	var_683_float = 0; var_684_float = 0; // 0x996 PushV
	var_685_int = 8; // 0x997 PushI
	var_686_int = 16; // 0x998 PushI
	rand(var_684_float, var_685_int, var_686_int); // 0x999 Func
	var_687_int = 10; // 0x99b PushI
	SetTimer(var_687_int, var_684_float); // 0x99c Func
	return 2; // 0x99e Return
}


func_2711(var_36_bool)
{
	var_37_bool = 0; var_38_bool = 0; // 0xa97 PushV
	IsLoaded(var_38_bool); // 0xa98 Func
	var_36_bool = var_38_bool; // 0xa9a Mov
	return 2; // 0xa9b Return
}


func_2970(var_164_bool, var_165_string)
{
	var_166_bool = 0; var_167_bool = 0; // 0xb9a PushV
	var_168_bool = 0; // 0xb9b PushV
	func_3177(var_168_bool); // 0xb9c NEW_2
	if(var_168_bool == 0) goto Label_2983; // 0xb9e JumpB
	lshHasSpeech(var_167_bool, var_165_string); // 0xb9f Func
	var_169_bool = var_167_bool; // 0xba1 Push
	if(var_169_bool == 0) goto Label_2983; // 0xba2 JumpB
	lshPlaySpeech(var_165_string); // 0xba3 Func
	var_164_bool = 1; // 0xba5 MovB
	return 2; // 0xba6 Return
	
Label_2983:
	var_164_bool = 0; // 0xba7 MovB
	return 2; // 0xba8 Return
}


func_2716(var_70_bool, var_72_float)
{
	var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_bool = 0; var_81_bool = 0; var_82_float = 0; var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_bool = 0; var_90_bool = 0; // 0xa9c PushV
	GetPosition(var_83_cvector); // 0xa9d ObjFunc
	GetEyesHeight(var_82_float); // 0xa9f ObjFunc
	var_91_float = GetByIndex(var_83_cvector, 1); // 0xaa1 PushE
	var_91_float = var_91_float + var_82_float; // 0xaa2 Add2
	SetByIndex(var_83_cvector, 1) = var_91_float; // 0xaa3 PopE
	GetPosition(var_84_cvector); // 0xaa4 Func
	GetEyesHeight(var_82_float); // 0xaa6 Func
	var_92_float = GetByIndex(var_84_cvector, 1); // 0xaa8 PushE
	var_92_float = var_92_float + var_82_float; // 0xaa9 Add2
	SetByIndex(var_84_cvector, 1) = var_92_float; // 0xaaa PopE
	var_85_cvector = var_83_cvector - var_84_cvector; // 0xaab Sub2
	var_93_float = GetByIndex(var_85_cvector, 1); // 0xaac PushE
	var_93_float = 0; // 0xaad MovI
	SetByIndex(var_85_cvector, 1) = var_93_float; // 0xaae PopE
	var_94_int = var_85_cvector | var_85_cvector; // 0xaaf Or
	var_95_float = sqrt(var_94_int); // 0xab0 Sqrt
	var_85_cvector = var_85_cvector / var_85_cvector; // 0xab1 Div2
	var_86_cvector = -var_85_cvector; // 0xab2 Neg2
	var_96_float = var_85_cvector * var_72_float; // 0xab3 Mult
	var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); // 0xab4 PushV
	var_99_cvector = CVector(0.0, 1.0, 0.0); // 0xab5 PushVec
	var_98_cvector = var_86_cvector ^ var_99_cvector; // 0xab6 Xor2
	func_2998(var_97_cvector, var_98_cvector); // 0xab7 NEW_2
	var_105_int = 25; // 0xab9 PushI
	var_106_float = var_97_cvector * var_105_int; // 0xaba Mult
	var_107_int = var_96_float + var_106_float; // 0xabb Add
	var_108_cvector = CVector(0.0, 10.0, 0.0); // 0xabc PushVec
	var_87_cvector = var_107_int - var_108_cvector; // 0xabd Sub2
	var_88_cvector = var_84_cvector + var_87_cvector; // 0xabe Add2
	IsOverrideActive(var_89_bool); // 0xabf Func
	var_109_bool = var_89_bool; // 0xac1 Push
	if(var_109_bool == 0) goto Label_2757; // 0xac2 JumpB
	var_70_bool = 0; // 0xac3 MovB
	return 18; // 0xac4 Return
	
Label_2757:
	StopWorld(); // 0xac5 Func
	CameraTransit(var_88_cvector, var_86_cvector); // 0xac7 Func
	var_110_float = GetByIndex(var_87_cvector, 0); // 0xac9 PushE
	var_111_float = GetByIndex(var_87_cvector, 2); // 0xaca PushE
	Rotate(var_110_float, var_111_float); // 0xacb Func
	var_112_bool = 0; // 0xacd PushV
	func_3177(var_112_bool); // 0xace NEW_2
	if(var_112_bool == 0) goto Label_2770; // 0xad0 JumpB
	goto Label_2778; // 0xad1 Jump
	
Label_2778:
	CameraWaitForPlayFinish(); // 0xada Func
	ResumeWorld(); // 0xadc Func
	var_70_bool = 1; // 0xade MovB
	return 18; // 0xadf Return
	
Label_2770:
	var_113_string = "head"; // 0xad2 PushS
	HasAnimationTrack(var_90_bool, var_113_string); // 0xad3 Func
	var_114_bool = var_90_bool; // 0xad5 Push
	if(var_114_bool == 0) goto Label_2778; // 0xad6 JumpB
	var_115_string = "head"; // 0xad7 PushS
	LookAsyncCamera(var_115_string); // 0xad8 Func
}


func_3230(var_78_object)
{
	var_80_bool = 0; var_81_object = Obj(); var_82_float = 0; // 0xc9f PushV
	var_81_object = var_78_object; // 0xca0 Mov
	var_82_float = 0.3; // 0xca1 MovF
	func_3068(var_80_bool, var_81_object, var_82_float); // 0xca2 NEW_2
	return 0; // 0xca4 Return
}


func_2463()
{
	var_682_int = 10; // 0x99f PushI
	KillTimer(var_682_int); // 0x9a0 Func
	return 0; // 0x9a2 Return
}


func_3487(var_54_object)
{
	var_55_int = 0; var_56_int = 0; // 0xd9f PushV
	var_57_string = "mt_laska"; // 0xda0 PushS
	GetVariable(var_57_string, var_56_int); // 0xda1 Func
	var_58_bool = var_56_int == 0; // 0xda3 Not
	if(var_58_bool == 0) goto Label_3503; // 0xda4 JumpB
	var_59_int = 0; var_60_object = Obj(); // 0xda5 PushV
	var_60_object = var_54_object; // 0xda6 Mov
	TaskCall(2); // 0xda7 TaskCall
	func_259(var_61_object, var_59_int, var_60_object); // 0xda8 NEW_2
	TaskReturn(); // 0xda9 TaskReturn
	var_286_string = "mt_laska"; // 0xdab PushS
	var_287_int = 1; // 0xdac PushI
	SetVariable(var_286_string, var_287_int); // 0xdad Func
	
Label_3503:
	var_288_bool = 0; var_289_int = 0; // 0xdaf PushV
	var_289_int = 2; // 0xdb0 MovI
	func_3139(var_288_bool, var_289_int); // 0xdb1 NEW_2
	if(var_288_bool == 0) goto Label_3515; // 0xdb3 JumpB
	var_291_int = 0; var_292_object = Obj(); // 0xdb4 PushV
	var_292_object = var_54_object; // 0xdb5 Mov
	TaskCall(4); // 0xdb6 TaskCall
	func_536(var_293_object, var_291_int, var_292_object); // 0xdb7 NEW_2
	TaskReturn(); // 0xdb8 TaskReturn
	return 2; // 0xdba Return
	
Label_3515:
	var_355_bool = 0; var_356_int = 0; // 0xdbb PushV
	var_356_int = 3; // 0xdbc MovI
	func_3139(var_355_bool, var_356_int); // 0xdbd NEW_2
	if(var_355_bool == 0) goto Label_3527; // 0xdbf JumpB
	var_357_int = 0; var_358_object = Obj(); // 0xdc0 PushV
	var_358_object = var_54_object; // 0xdc1 Mov
	TaskCall(6); // 0xdc2 TaskCall
	func_1055(var_359_object, var_357_int, var_358_object); // 0xdc3 NEW_2
	TaskReturn(); // 0xdc4 TaskReturn
	return 2; // 0xdc6 Return
	
Label_3527:
	var_419_bool = 0; var_420_int = 0; // 0xdc7 PushV
	var_420_int = 6; // 0xdc8 MovI
	func_3139(var_419_bool, var_420_int); // 0xdc9 NEW_2
	if(var_419_bool == 0) goto Label_3539; // 0xdcb JumpB
	var_421_int = 0; var_422_object = Obj(); // 0xdcc PushV
	var_422_object = var_54_object; // 0xdcd Mov
	TaskCall(8); // 0xdce TaskCall
	func_1366(var_423_object, var_421_int, var_422_object); // 0xdcf NEW_2
	TaskReturn(); // 0xdd0 TaskReturn
	return 2; // 0xdd2 Return
	
Label_3539:
	var_490_bool = 0; var_491_int = 0; // 0xdd3 PushV
	var_491_int = 11; // 0xdd4 MovI
	func_3139(var_490_bool, var_491_int); // 0xdd5 NEW_2
	if(var_490_bool == 0) goto Label_3551; // 0xdd7 JumpB
	var_492_int = 0; var_493_object = Obj(); // 0xdd8 PushV
	var_493_object = var_54_object; // 0xdd9 Mov
	TaskCall(10); // 0xdda TaskCall
	func_1811(var_494_object, var_492_int, var_493_object); // 0xddb NEW_2
	TaskReturn(); // 0xddc TaskReturn
	return 2; // 0xdde Return
	
Label_3551:
	var_564_bool = 0; var_565_int = 0; // 0xddf PushV
	var_565_int = 12; // 0xde0 MovI
	func_3139(var_564_bool, var_565_int); // 0xde1 NEW_2
	if(var_564_bool == 0) goto Label_3563; // 0xde3 JumpB
	var_566_int = 0; var_567_object = Obj(); // 0xde4 PushV
	var_567_object = var_54_object; // 0xde5 Mov
	TaskCall(0); // 0xde6 TaskCall
	func_0(var_568_object, var_566_int, var_567_object); // 0xde7 NEW_2
	TaskReturn(); // 0xde8 TaskReturn
	return 2; // 0xdea Return
	
Label_3563:
	var_625_int = 0; var_626_object = Obj(); // 0xdeb PushV
	var_626_object = var_54_object; // 0xdec Mov
	TaskCall(12); // 0xded TaskCall
	func_2191(var_627_object, var_625_int, var_626_object); // 0xdee NEW_2
	TaskReturn(); // 0xdef TaskReturn
	return 2; // 0xdf1 Return
}


func_3237()
{
	var_44_string = "ood6Laska1"; // 0xca6 PushS
	var_45_int = 1; // 0xca7 PushI
	SetVariable(var_44_string, var_45_int); // 0xca8 Func
	return 0; // 0xcaa Return
}


func_1447(var_0_object, var_1_object, var_2_object, var_3_string, var_445_object, var_446_object)
{
	var_0_object = var_446_object; // 0x5a8 TMov
	var_1_object = var_445_object; // 0x5a9 TMov
	var_3_string = 0; // 0x5aa TMovB
	var_451_int = 1; // 0x5ab PushI
	if(var_451_int == 0) goto Label_1489; // 0x5ac JumpB
	var_452_string = ""; // 0x5ad PushV
	var_452_string = "Neutral"; // 0x5ae MovS
	func_1519(var_446_object, var_452_string); // 0x5af NEW_2
	var_460_int = 512815; // 0x5b1 PushI
	SetMessage(var_460_int); // 0x5b2 TObjFunc
	ClearReplies(); // 0x5b4 TObjFunc
	var_461_bool = 0; // 0x5b6 PushV
	var_461_bool = 0; // 0x5b7 MovB
	var_462_bool = 0; var_463_object = Obj(); // 0x5b8 PushV
	var_463_object = var_1_object; // 0x5b9 MovT
	func_3351(var_463_object); // 0x5ba NEW_2
	if(var_462_bool == 0) goto Label_1475; // 0x5bc JumpB
	var_468_bool = 0; var_469_object = Obj(); // 0x5bd PushV
	var_469_object = var_1_object; // 0x5be MovT
	func_3363(var_469_object); // 0x5bf NEW_2
	if(var_468_bool == 0) goto Label_1475; // 0x5c1 JumpB
	var_461_bool = 1; // 0x5c2 MovB
	
Label_1475:
	if(var_461_bool == 0) goto Label_1481; // 0x5c3 JumpB
	var_474_int = 512816; // 0x5c4 PushI
	var_475_int = 14017; // 0x5c5 PushI
	var_476_int = 14016; // 0x5c6 PushI
	AddReply(var_474_int, var_475_int, var_476_int); // 0x5c7 TObjFunc
	
Label_1481:
	var_477_int = 512828; // 0x5c9 PushI
	var_478_int = -1; // 0x5ca PushI
	var_479_int = 14028; // 0x5cb PushI
	AddReply(var_477_int, var_478_int, var_479_int); // 0x5cc TObjFunc
	goto Label_1489; // 0x5ce Jump
	
Label_1489:
	var_480_bool = 0; // 0x5d1 PushV
	func_3177(var_480_bool); // 0x5d2 NEW_2
	if(var_480_bool == 0) goto Label_1504; // 0x5d4 JumpB
	
Label_1493:
	lshWaitForAnimEnd(); // 0x5d5 Func
	var_481_string = var_3_string; // 0x5d7 PushT
	if(var_481_string == 0) goto Label_1498; // 0x5d8 JumpB
	goto Label_1503; // 0x5d9 Jump
	
Label_1503:
	goto Label_1518; // 0x5df Jump
	
Label_1518:
	return 0; // 0x5ee Return
	
Label_1498:
	var_482_string = ""; // 0x5da PushV
	var_482_string = var_2_object; // 0x5db MovT
	func_2939(var_482_string); // 0x5dc NEW_2
	goto Label_1493; // 0x5de Jump
	
Label_1504:
	var_483_string = "all"; // 0x5e0 PushS
	var_484_string = "idle"; // 0x5e1 PushS
	PlayAnimation(var_483_string, var_484_string); // 0x5e2 Func
	
Label_1508:
	WaitForAnimEnd(); // 0x5e4 Func
	var_485_string = var_3_string; // 0x5e6 PushT
	if(var_485_string == 0) goto Label_1513; // 0x5e7 JumpB
	goto Label_1518; // 0x5e8 Jump
	
Label_1513:
	var_486_string = "all"; // 0x5e9 PushS
	var_487_string = "idle"; // 0x5ea PushS
	PlayAnimation(var_486_string, var_487_string); // 0x5eb Func
	goto Label_1508; // 0x5ed Jump
}


func_680(var_2_object, var_322_string)
{
	var_323_bool = 0; // 0x2a9 PushV
	func_3177(var_323_bool); // 0x2aa NEW_2
	var_324_bool = var_323_bool == 0; // 0x2ac Not
	if(var_324_bool == 0) goto Label_687; // 0x2ad JumpB
	return 0; // 0x2ae Return
	
Label_687:
	var_325_bool = var_322_string == var_2_object; // 0x2af Eq
	if(var_325_bool == 0) goto Label_690; // 0x2b0 JumpB
	return 0; // 0x2b1 Return
	
Label_690:
	var_326_string = ""; var_327_bool = 0; // 0x2b2 PushV
	var_326_string = var_322_string; // 0x2b3 Mov
	var_328_string = ""; // 0x2b4 PushS
	var_329_bool = var_322_string == var_328_string; // 0x2b5 Eq
	if(var_329_bool == 0) goto Label_697; // 0x2b6 JumpB
	var_327_bool = 0; // 0x2b7 MovB
	goto Label_698; // 0x2b8 Jump
	
Label_698:
	func_2955(var_326_string, var_327_bool); // 0x2ba NEW_2
	var_2_object = var_322_string; // 0x2bc TMov
	return 0; // 0x2bd Return
	
Label_697:
	var_327_bool = 1; // 0x2b9 MovB
}


func_2985()
{
	var_39_bool = 0; // 0xba9 PushV
	func_3177(var_39_bool); // 0xbaa NEW_2
	if(var_39_bool == 0) goto Label_2991; // 0xbac JumpB
	lshStopSpeech(); // 0xbad Func
	
Label_2991:
	return 0; // 0xbaf Return
}


func_3243()
{
	var_68_object = Obj(); var_69_object = Obj(); // 0xcab PushV
	var_70_string = "d6q01"; // 0xcac PushS
	var_71_int = 3; // 0xcad PushI
	SetVariable(var_70_string, var_71_int); // 0xcae Func
	var_72_object = Obj(); // 0xcb0 PushV
	func_3453(var_72_object); // 0xcb1 NEW_2
	var_69_object = var_72_object; // 0xcb2 Mov
	var_79_string = "d6q01LaskaGotoAlbinos"; // 0xcb4 PushS
	var_80_string = "pt_d6q03_albinos"; // 0xcb5 PushS
	var_81_int = 1; // 0xcb6 PushI
	var_82_int = 515400; // 0xcb7 PushI
	var_83_float = 0; // 0xcb8 PushV
	func_3125(var_83_float); // 0xcb9 NEW_2
	AddMark(var_79_string, var_80_string, var_81_int, var_82_int, var_83_float); // 0xcbb ObjFunc
	func_3399(); // 0xcbe NEW_2
	var_109_bool = 0; var_110_string = ""; var_111_string = ""; // 0xcc0 PushV
	var_110_string = "quest_d6_01"; // 0xcc1 MovS
	var_111_string = "albinos_klara"; // 0xcc2 MovS
	func_3113(var_109_bool, var_110_string, var_111_string); // 0xcc3 NEW_2
	return 2; // 0xcc5 Return
}


func_1199(var_2_object, var_388_string)
{
	var_389_bool = 0; // 0x4b0 PushV
	func_3177(var_389_bool); // 0x4b1 NEW_2
	var_390_bool = var_389_bool == 0; // 0x4b3 Not
	if(var_390_bool == 0) goto Label_1206; // 0x4b4 JumpB
	return 0; // 0x4b5 Return
	
Label_1206:
	var_391_bool = var_388_string == var_2_object; // 0x4b6 Eq
	if(var_391_bool == 0) goto Label_1209; // 0x4b7 JumpB
	return 0; // 0x4b8 Return
	
Label_1209:
	var_392_string = ""; var_393_bool = 0; // 0x4b9 PushV
	var_392_string = var_388_string; // 0x4ba Mov
	var_394_string = ""; // 0x4bb PushS
	var_395_bool = var_388_string == var_394_string; // 0x4bc Eq
	if(var_395_bool == 0) goto Label_1216; // 0x4bd JumpB
	var_393_bool = 0; // 0x4be MovB
	goto Label_1217; // 0x4bf Jump
	
Label_1217:
	func_2955(var_392_string, var_393_bool); // 0x4c1 NEW_2
	var_2_object = var_388_string; // 0x4c3 TMov
	return 0; // 0x4c4 Return
	
Label_1216:
	var_393_bool = 1; // 0x4c0 MovB
}


func_2992(var_132_object)
{
	var_133_object = Obj(); var_134_object = Obj(); // 0xbb0 PushV
	self(var_134_object); // 0xbb1 Func
	var_132_object = var_134_object; // 0xbb3 Mov
	return 2; // 0xbb4 Return
}


func_1969(var_2_object, var_523_string)
{
	var_524_bool = 0; // 0x7b2 PushV
	func_3177(var_524_bool); // 0x7b3 NEW_2
	var_525_bool = var_524_bool == 0; // 0x7b5 Not
	if(var_525_bool == 0) goto Label_1976; // 0x7b6 JumpB
	return 0; // 0x7b7 Return
	
Label_1976:
	var_526_bool = var_523_string == var_2_object; // 0x7b8 Eq
	if(var_526_bool == 0) goto Label_1979; // 0x7b9 JumpB
	return 0; // 0x7ba Return
	
Label_1979:
	var_527_string = ""; var_528_bool = 0; // 0x7bb PushV
	var_527_string = var_523_string; // 0x7bc Mov
	var_529_string = ""; // 0x7bd PushS
	var_530_bool = var_523_string == var_529_string; // 0x7be Eq
	if(var_530_bool == 0) goto Label_1986; // 0x7bf JumpB
	var_528_bool = 0; // 0x7c0 MovB
	goto Label_1987; // 0x7c1 Jump
	
Label_1987:
	func_2955(var_527_string, var_528_bool); // 0x7c3 NEW_2
	var_2_object = var_523_string; // 0x7c5 TMov
	return 0; // 0x7c6 Return
	
Label_1986:
	var_528_bool = 1; // 0x7c2 MovB
}


func_2998(var_97_cvector, var_98_cvector)
{
	var_100_float = 0; var_101_float = 0; // 0xbb6 PushV
	var_102_int = var_98_cvector | var_98_cvector; // 0xbb7 Or
	var_101_float = sqrt(var_102_int); // 0xbb8 Sqrt2
	var_103_float = 0.0; // 0xbb9 PushF
	var_104_bool = var_101_float < var_103_float; // 0xbba LT
	if(var_104_bool == 0) goto Label_3006; // 0xbbb JumpB
	var_97_cvector = CVector(0.0, 0.0, 0.0); // 0xbbc MovV
	return 2; // 0xbbd Return
	
Label_3006:
	var_97_cvector = var_98_cvector / var_98_cvector; // 0xbbe Div2
	return 2; // 0xbbf Return
}


func_3008(var_109_float, var_110_float, var_111_float, var_112_float)
{
	var_113_bool = var_110_float < var_111_float; // 0xbc1 LT
	if(var_113_bool == 0) goto Label_3013; // 0xbc2 JumpB
	var_109_float = var_111_float; // 0xbc3 Mov
	return 0; // 0xbc4 Return
	
Label_3013:
	var_114_bool = var_110_float > var_112_float; // 0xbc5 GT
	if(var_114_bool == 0) goto Label_3017; // 0xbc6 JumpB
	var_109_float = var_112_float; // 0xbc7 Mov
	return 0; // 0xbc8 Return
	
Label_3017:
	var_109_float = var_110_float; // 0xbc9 Mov
	return 0; // 0xbca Return
}


func_3271()
{
	var_48_string = "d6q01"; // 0xcc8 PushS
	var_49_int = 4; // 0xcc9 PushI
	SetVariable(var_48_string, var_49_int); // 0xcca Func
	var_50_bool = 0; var_51_string = ""; var_52_string = ""; // 0xccc PushV
	var_51_string = "quest_d6_01"; // 0xccd MovS
	var_52_string = "eva_klara"; // 0xcce MovS
	func_3113(var_50_bool, var_51_string, var_52_string); // 0xccf NEW_2
	return 0; // 0xcd1 Return
}


func_3019(var_333_int, var_334_string)
{
	var_335_int = 0; var_336_int = 0; // 0xbcb PushV
	GetVariable(var_334_string, var_336_int); // 0xbcc Func
	var_333_int = var_336_int; // 0xbce Mov
	return 2; // 0xbcf Return
}


func_3024(var_67_int, var_68_int)
{
	var_69_object = Obj(); var_70_object = Obj(); // 0xbd0 PushV
	CreateIntVector(var_70_object); // 0xbd1 Func
	add(var_67_int); // 0xbd3 ObjFunc
	add(var_68_int); // 0xbd5 ObjFunc
	var_71_int = 3; // 0xbd7 PushI
	SendWorldWndMessage(var_71_int, var_70_object); // 0xbd8 Func
	return 2; // 0xbda Return
}


func_3282()
{
	var_234_string = "KnowLaska"; // 0xcd3 PushS
	var_235_int = 1; // 0xcd4 PushI
	SetVariable(var_234_string, var_235_int); // 0xcd5 Func
	return 0; // 0xcd7 Return
}


func_3288()
{
	var_44_string = "ood3Laska1"; // 0xcd9 PushS
	var_45_int = 1; // 0xcda PushI
	SetVariable(var_44_string, var_45_int); // 0xcdb Func
	return 0; // 0xcdd Return
}


func_3036(var_57_object, var_58_int)
{
	var_59_int = 0; var_60_int = 0; var_61_bool = 0; var_62_int = 0; var_63_int = 0; var_64_bool = 0; // 0xbdc PushV
	GetItemID(var_62_int); // 0xbdd ObjFunc
	var_65_string = "Category"; // 0xbdf PushS
	GetInvItemProperty(var_63_int, var_62_int, var_65_string); // 0xbe0 Func
	AddItem(var_64_bool, var_57_object, var_63_int, var_58_int); // 0xbe2 ObjFunc
	var_66_bool = var_64_bool == 0; // 0xbe4 Not
	if(var_66_bool == 0) goto Label_3049; // 0xbe5 JumpB
	DropItems(var_57_object, var_58_int); // 0xbe6 ObjFunc
	goto Label_3054; // 0xbe8 Jump
	
Label_3054:
	return 6; // 0xbee Return
	
Label_3049:
	var_67_int = 0; var_68_int = 0; // 0xbe9 PushV
	var_67_int = var_62_int; // 0xbea Mov
	var_68_int = var_58_int; // 0xbeb Mov
	func_3024(var_67_int, var_68_int); // 0xbec NEW_2
}


func_3294(var_48_object)
{
	var_50_object = Obj(); var_51_object = Obj(); // 0xcde PushV
	var_52_string = "Knife is given"; // 0xcdf PushS
	Trace(var_52_string); // 0xce0 Func
	CreateInvItem(var_51_object); // 0xce2 Func
	var_53_string = "Knife"; // 0xce4 PushS
	SetItemName(var_53_string); // 0xce5 ObjFunc
	var_54_string = "durability"; // 0xce7 PushS
	var_55_int = 100; // 0xce8 PushI
	SetProperty(var_54_string, var_55_int); // 0xce9 ObjFunc
	var_56_object = Obj(); var_57_object = Obj(); var_58_int = 0; // 0xceb PushV
	var_56_object = var_48_object; // 0xcec Mov
	var_57_object = var_51_object; // 0xced Mov
	var_58_int = 1; // 0xcee MovI
	func_3036(var_57_object, var_58_int); // 0xcef NEW_2
	return 2; // 0xcf1 Return
}


func_2784()
{
	var_280_bool = 0; var_281_bool = 0; // 0xae0 PushV
	CameraSwitchToNormal(); // 0xae1 Func
	var_282_bool = 0; // 0xae3 PushV
	func_3177(var_282_bool); // 0xae4 NEW_2
	if(var_282_bool == 0) goto Label_2792; // 0xae6 JumpB
	goto Label_2800; // 0xae7 Jump
	
Label_2800:
	return 2; // 0xaf0 Return
	
Label_2792:
	var_283_string = "head"; // 0xae8 PushS
	HasAnimationTrack(var_281_bool, var_283_string); // 0xae9 Func
	var_284_bool = var_281_bool; // 0xaeb Push
	if(var_284_bool == 0) goto Label_2800; // 0xaec JumpB
	var_285_string = "head"; // 0xaed PushS
	UnlookAsync(var_285_string); // 0xaee Func
}


func_2272(var_0_object, var_1_object, var_2_object, var_3_string, var_649_object, var_650_object)
{
	var_0_object = var_650_object; // 0x8e1 TMov
	var_1_object = var_649_object; // 0x8e2 TMov
	var_3_string = 0; // 0x8e3 TMovB
	var_655_int = 1; // 0x8e4 PushI
	if(var_655_int == 0) goto Label_2300; // 0x8e5 JumpB
	var_656_string = ""; // 0x8e6 PushV
	var_656_string = "Neutral"; // 0x8e7 MovS
	func_2330(var_650_object, var_656_string); // 0x8e8 NEW_2
	var_664_int = 540548; // 0x8ea PushI
	SetMessage(var_664_int); // 0x8eb TObjFunc
	ClearReplies(); // 0x8ed TObjFunc
	var_665_int = 540549; // 0x8ef PushI
	var_666_int = -1; // 0x8f0 PushI
	var_667_int = 42558; // 0x8f1 PushI
	AddReply(var_665_int, var_666_int, var_667_int); // 0x8f2 TObjFunc
	var_668_int = 540797; // 0x8f4 PushI
	var_669_int = -1; // 0x8f5 PushI
	var_670_int = 42846; // 0x8f6 PushI
	AddReply(var_668_int, var_669_int, var_670_int); // 0x8f7 TObjFunc
	goto Label_2300; // 0x8f9 Jump
	
Label_2300:
	var_671_bool = 0; // 0x8fc PushV
	func_3177(var_671_bool); // 0x8fd NEW_2
	if(var_671_bool == 0) goto Label_2315; // 0x8ff JumpB
	
Label_2304:
	lshWaitForAnimEnd(); // 0x900 Func
	var_672_string = var_3_string; // 0x902 PushT
	if(var_672_string == 0) goto Label_2309; // 0x903 JumpB
	goto Label_2314; // 0x904 Jump
	
Label_2314:
	goto Label_2329; // 0x90a Jump
	
Label_2329:
	return 0; // 0x919 Return
	
Label_2309:
	var_673_string = ""; // 0x905 PushV
	var_673_string = var_2_object; // 0x906 MovT
	func_2939(var_673_string); // 0x907 NEW_2
	goto Label_2304; // 0x909 Jump
	
Label_2315:
	var_674_string = "all"; // 0x90b PushS
	var_675_string = "idle"; // 0x90c PushS
	PlayAnimation(var_674_string, var_675_string); // 0x90d Func
	
Label_2319:
	WaitForAnimEnd(); // 0x90f Func
	var_676_string = var_3_string; // 0x911 PushT
	if(var_676_string == 0) goto Label_2324; // 0x912 JumpB
	goto Label_2329; // 0x913 Jump
	
Label_2324:
	var_677_string = "all"; // 0x914 PushS
	var_678_string = "idle"; // 0x915 PushS
	PlayAnimation(var_677_string, var_678_string); // 0x916 Func
	goto Label_2319; // 0x918 Jump
}


func_1519(var_2_object, var_452_string)
{
	var_453_bool = 0; // 0x5f0 PushV
	func_3177(var_453_bool); // 0x5f1 NEW_2
	var_454_bool = var_453_bool == 0; // 0x5f3 Not
	if(var_454_bool == 0) goto Label_1526; // 0x5f4 JumpB
	return 0; // 0x5f5 Return
	
Label_1526:
	var_455_bool = var_452_string == var_2_object; // 0x5f6 Eq
	if(var_455_bool == 0) goto Label_1529; // 0x5f7 JumpB
	return 0; // 0x5f8 Return
	
Label_1529:
	var_456_string = ""; var_457_bool = 0; // 0x5f9 PushV
	var_456_string = var_452_string; // 0x5fa Mov
	var_458_string = ""; // 0x5fb PushS
	var_459_bool = var_452_string == var_458_string; // 0x5fc Eq
	if(var_459_bool == 0) goto Label_1536; // 0x5fd JumpB
	var_457_bool = 0; // 0x5fe MovB
	goto Label_1537; // 0x5ff Jump
	
Label_1537:
	func_2955(var_456_string, var_457_bool); // 0x601 NEW_2
	var_2_object = var_452_string; // 0x603 TMov
	return 0; // 0x604 Return
	
Label_1536:
	var_457_bool = 1; // 0x600 MovB
}


func_3055(var_79_object, var_80_string, var_81_int)
{
	var_82_object = Obj(); var_83_object = Obj(); // 0xbef PushV
	CreateInvItem(var_83_object); // 0xbf0 Func
	SetItemName(var_80_string); // 0xbf2 ObjFunc
	var_84_object = Obj(); var_85_object = Obj(); var_86_int = 0; // 0xbf4 PushV
	var_84_object = var_79_object; // 0xbf5 Mov
	var_85_object = var_83_object; // 0xbf6 Mov
	var_86_int = var_81_int; // 0xbf7 Mov
	func_3036(var_85_object, var_86_int); // 0xbf8 NEW_2
	return 2; // 0xbfa Return
}


func_2801(var_130_bool, var_131_object)
{
	var_135_int = 0; var_136_int = 0; var_137_int = 0; var_138_int = 0; // 0xaf1 PushV
	var_139_string = "voice_common"; // 0xaf2 PushS
	GetVariable(var_139_string, var_137_int); // 0xaf3 Func
	var_140_int = var_137_int; // 0xaf5 Push
	if(var_140_int == 0) goto Label_2839; // 0xaf6 JumpB
	var_141_bool = 0; var_142_object = Obj(); // 0xaf7 PushV
	var_142_object = var_131_object; // 0xaf8 Mov
	func_2859(var_142_object); // 0xaf9 NEW_2
	var_171_bool = var_141_bool == 0; // 0xafb Not
	if(var_171_bool == 0) goto Label_2821; // 0xafc JumpB
	var_172_bool = 0; var_173_object = Obj(); // 0xafd PushV
	var_173_object = var_131_object; // 0xafe Mov
	func_2896(var_173_object); // 0xaff NEW_2
	var_207_bool = var_172_bool == 0; // 0xb01 Not
	if(var_207_bool == 0) goto Label_2821; // 0xb02 JumpB
	var_130_bool = 0; // 0xb03 MovB
	return 4; // 0xb04 Return
	
Label_2821:
	var_208_int = 2; // 0xb05 PushI
	irand(var_138_int, var_208_int); // 0xb06 Func
	var_209_int = var_138_int; // 0xb08 Push
	if(var_209_int == 0) goto Label_2834; // 0xb09 JumpB
	var_210_string = "voice_common"; // 0xb0a PushS
	var_211_int = 1; // 0xb0b PushI
	var_212_int = var_137_int + var_211_int; // 0xb0c Add
	var_213_int = 3; // 0xb0d PushI
	var_214_int = var_212_int / var_213_int; // 0xb0e Mod
	SetVariable(var_210_string, var_214_int); // 0xb0f Func
	goto Label_2838; // 0xb11 Jump
	
Label_2838:
	goto Label_2857; // 0xb16 Jump
	
Label_2857:
	var_130_bool = 1; // 0xb29 MovB
	return 4; // 0xb2a Return
	
Label_2834:
	var_215_string = "voice_common"; // 0xb12 PushS
	var_216_int = 0; // 0xb13 PushI
	SetVariable(var_215_string, var_216_int); // 0xb14 Func
	
Label_2839:
	var_217_bool = 0; var_218_object = Obj(); // 0xb17 PushV
	var_218_object = var_131_object; // 0xb18 Mov
	func_2896(var_218_object); // 0xb19 NEW_2
	var_219_bool = var_217_bool == 0; // 0xb1b Not
	if(var_219_bool == 0) goto Label_2853; // 0xb1c JumpB
	var_220_bool = 0; var_221_object = Obj(); // 0xb1d PushV
	var_221_object = var_131_object; // 0xb1e Mov
	func_2859(var_221_object); // 0xb1f NEW_2
	var_222_bool = var_220_bool == 0; // 0xb21 Not
	if(var_222_bool == 0) goto Label_2853; // 0xb22 JumpB
	var_130_bool = 0; // 0xb23 MovB
	return 4; // 0xb24 Return
	
Label_2853:
	var_223_string = "voice_common"; // 0xb25 PushS
	var_224_int = 1; // 0xb26 PushI
	SetVariable(var_223_string, var_224_int); // 0xb27 Func
}


func_3315(var_331_bool)
{
	var_333_int = 0; var_334_string = ""; // 0xcf4 PushV
	var_334_string = "ood2Laska1"; // 0xcf5 MovS
	func_3019(var_333_int, var_334_string); // 0xcf6 NEW_2
	var_337_int = 0; // 0xcf8 PushI
	var_338_bool = var_333_int == var_337_int; // 0xcf9 Eq
	if(var_338_bool == 0) goto Label_3325; // 0xcfa JumpB
	var_331_bool = 1; // 0xcfb MovB
	return 0; // 0xcfc Return
	
Label_3325:
	var_331_bool = 0; // 0xcfd MovB
	return 0; // 0xcfe Return
}


func_3068(var_80_bool, var_81_object, var_82_float)
{
	var_83_bool = var_81_object == 0; // 0xbfd Not
	if(var_83_bool == 0) goto Label_3073; // 0xbfe JumpB
	var_80_bool = 0; // 0xbff MovB
	return 0; // 0xc00 Return
	
Label_3073:
	var_84_int = 0; // 0xc01 PushI
	var_85_bool = var_82_float > var_84_int; // 0xc02 GT
	if(var_85_bool == 0) goto Label_3080; // 0xc03 JumpB
	var_86_int = 8; // 0xc04 PushI
	SendWorldWndMessage(var_86_int); // 0xc05 Func
	goto Label_3089; // 0xc07 Jump
	
Label_3089:
	var_87_float = 0; // 0xc11 PushV
	var_87_float = var_82_float; // 0xc12 Mov
	func_3103(var_87_float); // 0xc13 NEW_2
	var_91_bool = 0; var_92_object = Obj(); var_93_string = ""; var_94_float = 0; var_95_float = 0; var_96_float = 0; // 0xc15 PushV
	var_92_object = var_81_object; // 0xc16 Mov
	var_93_string = "reputation"; // 0xc17 MovS
	var_94_float = var_82_float; // 0xc18 Mov
	var_95_float = 0; // 0xc19 MovI
	var_96_float = 1; // 0xc1a MovI
	func_2670(var_91_bool, var_92_object, var_93_string, var_94_float, var_95_float, var_96_float); // 0xc1b NEW_2
	var_80_bool = 1; // 0xc1d MovB
	return 0; // 0xc1e Return
	
Label_3080:
	var_115_int = 0; // 0xc08 PushI
	var_116_bool = var_82_float < var_115_int; // 0xc09 LT
	if(var_116_bool == 0) goto Label_3087; // 0xc0a JumpB
	var_117_int = 9; // 0xc0b PushI
	SendWorldWndMessage(var_117_int); // 0xc0c Func
	goto Label_3089; // 0xc0e Jump
	
Label_3087:
	var_80_bool = 0; // 0xc0f MovB
	return 0; // 0xc10 Return
}


func_3327(var_539_bool)
{
	var_541_int = 0; var_542_string = ""; // 0xd00 PushV
	var_542_string = "ood11Laska1"; // 0xd01 MovS
	func_3019(var_541_int, var_542_string); // 0xd02 NEW_2
	var_543_int = 0; // 0xd04 PushI
	var_544_bool = var_541_int == var_543_int; // 0xd05 Eq
	if(var_544_bool == 0) goto Label_3337; // 0xd06 JumpB
	var_539_bool = 1; // 0xd07 MovB
	return 0; // 0xd08 Return
	
Label_3337:
	var_539_bool = 0; // 0xd09 MovB
	return 0; // 0xd0a Return
}


