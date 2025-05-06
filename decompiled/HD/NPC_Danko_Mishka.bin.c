task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0xac PushI
	if(var_28_int == 0) goto Label_309; // 0xad JumpB
	func_1861(); // 0xaf NEW_2
	var_30_int = 526; // 0xb1 PushI
	var_31_bool = var_26_bool == var_30_int; // 0xb2 Eq
	if(var_31_bool == 0) goto Label_210; // 0xb3 JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0xb4 PushV
	var_32_object = var_1_object; // 0xb5 MovT
	var_33_object = var_0_object; // 0xb6 MovT
	func_1944(); // 0xb7 NEW_2
	var_36_string = ""; // 0xb9 PushV
	var_36_string = "Neutral"; // 0xba MovS
	func_149(var_27_cvector, var_36_string); // 0xbb NEW_2
	var_53_int = 500457; // 0xbd PushI
	SetMessage(var_53_int); // 0xbe TObjFunc
	ClearReplies(); // 0xc0 TObjFunc
	var_54_int = 500458; // 0xc2 PushI
	var_55_int = 530; // 0xc3 PushI
	var_56_int = 527; // 0xc4 PushI
	AddReply(var_54_int, var_55_int, var_56_int); // 0xc5 TObjFunc
	var_57_int = 500459; // 0xc7 PushI
	var_58_int = 532; // 0xc8 PushI
	var_59_int = 528; // 0xc9 PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0xca TObjFunc
	var_60_int = 500460; // 0xcc PushI
	var_61_int = 530; // 0xcd PushI
	var_62_int = 529; // 0xce PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0xcf TObjFunc
	return 0; // 0xd1 Return
	
Label_210:
	var_63_int = 532; // 0xd2 PushI
	var_64_bool = var_26_bool == var_63_int; // 0xd3 Eq
	if(var_64_bool == 0) goto Label_233; // 0xd4 JumpB
	var_65_string = ""; // 0xd5 PushV
	var_65_string = "Neutral"; // 0xd6 MovS
	func_149(var_27_cvector, var_65_string); // 0xd7 NEW_2
	var_66_int = 500462; // 0xd9 PushI
	SetMessage(var_66_int); // 0xda TObjFunc
	ClearReplies(); // 0xdc TObjFunc
	var_67_int = 500466; // 0xde PushI
	var_68_int = 538; // 0xdf PushI
	var_69_int = 536; // 0xe0 PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0xe1 TObjFunc
	var_70_int = 500467; // 0xe3 PushI
	var_71_int = -1; // 0xe4 PushI
	var_72_int = 537; // 0xe5 PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0xe6 TObjFunc
	return 0; // 0xe8 Return
	
Label_233:
	var_73_int = 538; // 0xe9 PushI
	var_74_bool = var_26_bool == var_73_int; // 0xea Eq
	if(var_74_bool == 0) goto Label_256; // 0xeb JumpB
	var_75_string = ""; // 0xec PushV
	var_75_string = "Neutral"; // 0xed MovS
	func_149(var_27_cvector, var_75_string); // 0xee NEW_2
	var_76_int = 500468; // 0xf0 PushI
	SetMessage(var_76_int); // 0xf1 TObjFunc
	ClearReplies(); // 0xf3 TObjFunc
	var_77_int = 500470; // 0xf5 PushI
	var_78_int = -1; // 0xf6 PushI
	var_79_int = 540; // 0xf7 PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0xf8 TObjFunc
	var_80_int = 500471; // 0xfa PushI
	var_81_int = -1; // 0xfb PushI
	var_82_int = 541; // 0xfc PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0xfd TObjFunc
	return 0; // 0xff Return
	
Label_256:
	var_83_int = 530; // 0x100 PushI
	var_84_bool = var_26_bool == var_83_int; // 0x101 Eq
	if(var_84_bool == 0) goto Label_279; // 0x102 JumpB
	var_85_string = ""; // 0x103 PushV
	var_85_string = "Neutral"; // 0x104 MovS
	func_149(var_27_cvector, var_85_string); // 0x105 NEW_2
	var_86_int = 500461; // 0x107 PushI
	SetMessage(var_86_int); // 0x108 TObjFunc
	ClearReplies(); // 0x10a TObjFunc
	var_87_int = 500463; // 0x10c PushI
	var_88_int = 535; // 0x10d PushI
	var_89_int = 533; // 0x10e PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x10f TObjFunc
	var_90_int = 500464; // 0x111 PushI
	var_91_int = -1; // 0x112 PushI
	var_92_int = 534; // 0x113 PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x114 TObjFunc
	return 0; // 0x116 Return
	
Label_279:
	var_93_int = 535; // 0x117 PushI
	var_94_bool = var_26_bool == var_93_int; // 0x118 Eq
	if(var_94_bool == 0) goto Label_297; // 0x119 JumpB
	var_95_string = ""; // 0x11a PushV
	var_95_string = "Neutral"; // 0x11b MovS
	func_149(var_27_cvector, var_95_string); // 0x11c NEW_2
	var_96_int = 500465; // 0x11e PushI
	SetMessage(var_96_int); // 0x11f TObjFunc
	ClearReplies(); // 0x121 TObjFunc
	var_97_int = 506269; // 0x123 PushI
	var_98_int = -1; // 0x124 PushI
	var_99_int = 6939; // 0x125 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x126 TObjFunc
	return 0; // 0x128 Return
	
Label_297:
	var_3_string = 1; // 0x129 TMovB
	var_100_bool = 0; // 0x12a PushV
	func_1936(var_100_bool); // 0x12b NEW_2
	if(var_100_bool == 0) goto Label_305; // 0x12d JumpB
	lshStopAnimation(); // 0x12e Func
	goto Label_307; // 0x130 Jump
	
Label_307:
	return 0; // 0x133 Return
	
Label_305:
	StopAnimation(); // 0x131 Func
	
Label_309:
	return 0; // 0x135 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x1d3 PushI
	if(var_28_int == 0) goto Label_502; // 0x1d4 JumpB
	func_1861(); // 0x1d6 NEW_2
	var_30_int = 11026; // 0x1d8 PushI
	var_31_bool = var_26_bool == var_30_int; // 0x1d9 Eq
	if(var_31_bool == 0) goto Label_490; // 0x1da JumpB
	var_32_string = ""; // 0x1db PushV
	var_32_string = "Dream"; // 0x1dc MovS
	func_444(var_27_cvector, var_32_string); // 0x1dd NEW_2
	var_49_int = 510004; // 0x1df PushI
	SetMessage(var_49_int); // 0x1e0 TObjFunc
	ClearReplies(); // 0x1e2 TObjFunc
	var_50_int = 510015; // 0x1e4 PushI
	var_51_int = -1; // 0x1e5 PushI
	var_52_int = 11037; // 0x1e6 PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0x1e7 TObjFunc
	return 0; // 0x1e9 Return
	
Label_490:
	var_3_string = 1; // 0x1ea TMovB
	var_53_bool = 0; // 0x1eb PushV
	func_1936(var_53_bool); // 0x1ec NEW_2
	if(var_53_bool == 0) goto Label_498; // 0x1ee JumpB
	lshStopAnimation(); // 0x1ef Func
	goto Label_500; // 0x1f1 Jump
	
Label_500:
	return 0; // 0x1f4 Return
	
Label_498:
	StopAnimation(); // 0x1f2 Func
	
Label_502:
	return 0; // 0x1f6 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x2a7 PushI
	if(var_28_int == 0) goto Label_836; // 0x2a8 JumpB
	func_1861(); // 0x2aa NEW_2
	var_30_int = 14011; // 0x2ac PushI
	var_31_bool = var_27_cvector == var_30_int; // 0x2ad Eq
	if(var_31_bool == 0) goto Label_692; // 0x2ae JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0x2af PushV
	var_32_object = var_1_object; // 0x2b0 MovT
	var_33_object = var_0_object; // 0x2b1 MovT
	func_1938(); // 0x2b2 NEW_2
	
Label_692:
	var_36_int = 13999; // 0x2b4 PushI
	var_37_bool = var_26_bool == var_36_int; // 0x2b5 Eq
	if(var_37_bool == 0) goto Label_729; // 0x2b6 JumpB
	var_38_string = ""; // 0x2b7 PushV
	var_38_string = "Suspicion"; // 0x2b8 MovS
	func_656(var_27_cvector, var_38_string); // 0x2b9 NEW_2
	var_55_int = 512800; // 0x2bb PushI
	SetMessage(var_55_int); // 0x2bc TObjFunc
	ClearReplies(); // 0x2be TObjFunc
	var_56_bool = 0; // 0x2c0 PushV
	var_56_bool = 0; // 0x2c1 MovB
	var_57_bool = 0; var_58_object = Obj(); // 0x2c2 PushV
	var_58_object = var_1_object; // 0x2c3 MovT
	func_1950(var_58_object); // 0x2c4 NEW_2
	if(var_57_bool == 0) goto Label_717; // 0x2c6 JumpB
	var_65_bool = 0; var_66_object = Obj(); // 0x2c7 PushV
	var_66_object = var_1_object; // 0x2c8 MovT
	func_1962(var_66_object); // 0x2c9 NEW_2
	if(var_65_bool == 0) goto Label_717; // 0x2cb JumpB
	var_56_bool = 1; // 0x2cc MovB
	
Label_717:
	if(var_56_bool == 0) goto Label_723; // 0x2cd JumpB
	var_71_int = 512801; // 0x2ce PushI
	var_72_int = 14001; // 0x2cf PushI
	var_73_int = 14000; // 0x2d0 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x2d1 TObjFunc
	
Label_723:
	var_74_int = 512813; // 0x2d3 PushI
	var_75_int = -1; // 0x2d4 PushI
	var_76_int = 14013; // 0x2d5 PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0x2d6 TObjFunc
	return 0; // 0x2d8 Return
	
Label_729:
	var_77_int = 14001; // 0x2d9 PushI
	var_78_bool = var_26_bool == var_77_int; // 0x2da Eq
	if(var_78_bool == 0) goto Label_747; // 0x2db JumpB
	var_79_string = ""; // 0x2dc PushV
	var_79_string = "Suspicion"; // 0x2dd MovS
	func_656(var_27_cvector, var_79_string); // 0x2de NEW_2
	var_80_int = 512802; // 0x2e0 PushI
	SetMessage(var_80_int); // 0x2e1 TObjFunc
	ClearReplies(); // 0x2e3 TObjFunc
	var_81_int = 512803; // 0x2e5 PushI
	var_82_int = 14003; // 0x2e6 PushI
	var_83_int = 14002; // 0x2e7 PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x2e8 TObjFunc
	return 0; // 0x2ea Return
	
Label_747:
	var_84_int = 14003; // 0x2eb PushI
	var_85_bool = var_26_bool == var_84_int; // 0x2ec Eq
	if(var_85_bool == 0) goto Label_770; // 0x2ed JumpB
	var_86_string = ""; // 0x2ee PushV
	var_86_string = "Suspicion"; // 0x2ef MovS
	func_656(var_27_cvector, var_86_string); // 0x2f0 NEW_2
	var_87_int = 512804; // 0x2f2 PushI
	SetMessage(var_87_int); // 0x2f3 TObjFunc
	ClearReplies(); // 0x2f5 TObjFunc
	var_88_int = 512805; // 0x2f7 PushI
	var_89_int = 14005; // 0x2f8 PushI
	var_90_int = 14004; // 0x2f9 PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0x2fa TObjFunc
	var_91_int = 512808; // 0x2fc PushI
	var_92_int = 14005; // 0x2fd PushI
	var_93_int = 14007; // 0x2fe PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x2ff TObjFunc
	return 0; // 0x301 Return
	
Label_770:
	var_94_int = 14005; // 0x302 PushI
	var_95_bool = var_26_bool == var_94_int; // 0x303 Eq
	if(var_95_bool == 0) goto Label_788; // 0x304 JumpB
	var_96_string = ""; // 0x305 PushV
	var_96_string = "Fear"; // 0x306 MovS
	func_656(var_27_cvector, var_96_string); // 0x307 NEW_2
	var_97_int = 512806; // 0x309 PushI
	SetMessage(var_97_int); // 0x30a TObjFunc
	ClearReplies(); // 0x30c TObjFunc
	var_98_int = 512807; // 0x30e PushI
	var_99_int = 14008; // 0x30f PushI
	var_100_int = 14006; // 0x310 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x311 TObjFunc
	return 0; // 0x313 Return
	
Label_788:
	var_101_int = 14008; // 0x314 PushI
	var_102_bool = var_26_bool == var_101_int; // 0x315 Eq
	if(var_102_bool == 0) goto Label_806; // 0x316 JumpB
	var_103_string = ""; // 0x317 PushV
	var_103_string = "Fear"; // 0x318 MovS
	func_656(var_27_cvector, var_103_string); // 0x319 NEW_2
	var_104_int = 512809; // 0x31b PushI
	SetMessage(var_104_int); // 0x31c TObjFunc
	ClearReplies(); // 0x31e TObjFunc
	var_105_int = 512810; // 0x320 PushI
	var_106_int = 14010; // 0x321 PushI
	var_107_int = 14009; // 0x322 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x323 TObjFunc
	return 0; // 0x325 Return
	
Label_806:
	var_108_int = 14010; // 0x326 PushI
	var_109_bool = var_26_bool == var_108_int; // 0x327 Eq
	if(var_109_bool == 0) goto Label_824; // 0x328 JumpB
	var_110_string = ""; // 0x329 PushV
	var_110_string = "Autizm"; // 0x32a MovS
	func_656(var_27_cvector, var_110_string); // 0x32b NEW_2
	var_111_int = 512811; // 0x32d PushI
	SetMessage(var_111_int); // 0x32e TObjFunc
	ClearReplies(); // 0x330 TObjFunc
	var_112_int = 512812; // 0x332 PushI
	var_113_int = -1; // 0x333 PushI
	var_114_int = 14011; // 0x334 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x335 TObjFunc
	return 0; // 0x337 Return
	
Label_824:
	var_3_string = 1; // 0x338 TMovB
	var_115_bool = 0; // 0x339 PushV
	func_1936(var_115_bool); // 0x33a NEW_2
	if(var_115_bool == 0) goto Label_832; // 0x33c JumpB
	lshStopAnimation(); // 0x33d Func
	goto Label_834; // 0x33f Jump
	
Label_834:
	return 0; // 0x342 Return
	
Label_832:
	StopAnimation(); // 0x340 Func
	
Label_836:
	return 0; // 0x344 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x3ec PushI
	if(var_28_int == 0) goto Label_1095; // 0x3ed JumpB
	func_1861(); // 0x3ef NEW_2
	var_30_int = 36960; // 0x3f1 PushI
	var_31_bool = var_26_bool == var_30_int; // 0x3f2 Eq
	if(var_31_bool == 0) goto Label_1037; // 0x3f3 JumpB
	var_32_string = ""; // 0x3f4 PushV
	var_32_string = "Neutral"; // 0x3f5 MovS
	func_981(var_27_cvector, var_32_string); // 0x3f6 NEW_2
	var_49_int = 535284; // 0x3f8 PushI
	SetMessage(var_49_int); // 0x3f9 TObjFunc
	ClearReplies(); // 0x3fb TObjFunc
	var_50_int = 535285; // 0x3fd PushI
	var_51_int = 36962; // 0x3fe PushI
	var_52_int = 36961; // 0x3ff PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0x400 TObjFunc
	var_53_int = 535292; // 0x402 PushI
	var_54_int = -1; // 0x403 PushI
	var_55_int = 36968; // 0x404 PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0x405 TObjFunc
	var_56_int = 535293; // 0x407 PushI
	var_57_int = -1; // 0x408 PushI
	var_58_int = 36969; // 0x409 PushI
	AddReply(var_56_int, var_57_int, var_58_int); // 0x40a TObjFunc
	return 0; // 0x40c Return
	
Label_1037:
	var_59_int = 36962; // 0x40d PushI
	var_60_bool = var_26_bool == var_59_int; // 0x40e Eq
	if(var_60_bool == 0) goto Label_1060; // 0x40f JumpB
	var_61_string = ""; // 0x410 PushV
	var_61_string = "Neutral"; // 0x411 MovS
	func_981(var_27_cvector, var_61_string); // 0x412 NEW_2
	var_62_int = 535286; // 0x414 PushI
	SetMessage(var_62_int); // 0x415 TObjFunc
	ClearReplies(); // 0x417 TObjFunc
	var_63_int = 535287; // 0x419 PushI
	var_64_int = 36964; // 0x41a PushI
	var_65_int = 36963; // 0x41b PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0x41c TObjFunc
	var_66_int = 535291; // 0x41e PushI
	var_67_int = -1; // 0x41f PushI
	var_68_int = 36967; // 0x420 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0x421 TObjFunc
	return 0; // 0x423 Return
	
Label_1060:
	var_69_int = 36964; // 0x424 PushI
	var_70_bool = var_26_bool == var_69_int; // 0x425 Eq
	if(var_70_bool == 0) goto Label_1083; // 0x426 JumpB
	var_71_string = ""; // 0x427 PushV
	var_71_string = "Neutral"; // 0x428 MovS
	func_981(var_27_cvector, var_71_string); // 0x429 NEW_2
	var_72_int = 535288; // 0x42b PushI
	SetMessage(var_72_int); // 0x42c TObjFunc
	ClearReplies(); // 0x42e TObjFunc
	var_73_int = 535289; // 0x430 PushI
	var_74_int = -1; // 0x431 PushI
	var_75_int = 36965; // 0x432 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x433 TObjFunc
	var_76_int = 535290; // 0x435 PushI
	var_77_int = -1; // 0x436 PushI
	var_78_int = 36966; // 0x437 PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x438 TObjFunc
	return 0; // 0x43a Return
	
Label_1083:
	var_3_string = 1; // 0x43b TMovB
	var_79_bool = 0; // 0x43c PushV
	func_1936(var_79_bool); // 0x43d NEW_2
	if(var_79_bool == 0) goto Label_1091; // 0x43f JumpB
	lshStopAnimation(); // 0x440 Func
	goto Label_1093; // 0x442 Jump
	
Label_1093:
	return 0; // 0x445 Return
	
Label_1091:
	StopAnimation(); // 0x443 Func
	
Label_1095:
	return 0; // 0x447 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_cvector)
{
	var_28_int = 1; // 0x4ea PushI
	if(var_28_int == 0) goto Label_1298; // 0x4eb JumpB
	func_1861(); // 0x4ed NEW_2
	var_30_int = 42557; // 0x4ef PushI
	var_31_bool = var_26_int == var_30_int; // 0x4f0 Eq
	if(var_31_bool == 0) goto Label_1286; // 0x4f1 JumpB
	var_32_string = ""; // 0x4f2 PushV
	var_32_string = "Neutral"; // 0x4f3 MovS
	func_1235(var_27_cvector, var_32_string); // 0x4f4 NEW_2
	var_49_int = 540548; // 0x4f6 PushI
	SetMessage(var_49_int); // 0x4f7 TObjFunc
	ClearReplies(); // 0x4f9 TObjFunc
	var_50_int = 540549; // 0x4fb PushI
	var_51_int = -1; // 0x4fc PushI
	var_52_int = 42558; // 0x4fd PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0x4fe TObjFunc
	var_53_int = 540797; // 0x500 PushI
	var_54_int = -1; // 0x501 PushI
	var_55_int = 42846; // 0x502 PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0x503 TObjFunc
	return 0; // 0x505 Return
	
Label_1286:
	var_3_string = 1; // 0x506 TMovB
	var_56_bool = 0; // 0x507 PushV
	func_1936(var_56_bool); // 0x508 NEW_2
	if(var_56_bool == 0) goto Label_1294; // 0x50a JumpB
	lshStopAnimation(); // 0x50b Func
	goto Label_1296; // 0x50d Jump
	
Label_1296:
	return 0; // 0x510 Return
	
Label_1294:
	StopAnimation(); // 0x50e Func
	
Label_1298:
	return 0; // 0x512 Return
}


task_10_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_int)
{
	var_27_int = 10; // 0x560 PushI
	var_28_bool = var_26_int == var_27_int; // 0x561 Eq
	if(var_28_bool == 0) goto Label_1412; // 0x562 JumpB
	func_1371(); // 0x564 NEW_2
	var_30_bool = 0; // 0x566 PushV
	var_30_bool = 0; // 0x567 MovB
	var_31_bool = 0; // 0x568 PushV
	func_1585(var_31_bool); // 0x569 NEW_2
	if(var_31_bool == 0) goto Label_1393; // 0x56b JumpB
	var_34_bool = 0; // 0x56c PushV
	func_1340(var_34_bool); // 0x56d NEW_2
	if(var_34_bool == 0) goto Label_1393; // 0x56f JumpB
	var_30_bool = 1; // 0x570 MovB
	
Label_1393:
	if(var_30_bool == 0) goto Label_1406; // 0x571 JumpB
	var_51_bool = 0; // 0x572 PushV
	func_1320(var_51_bool); // 0x573 NEW_2
	if(var_51_bool == 0) goto Label_1405; // 0x575 JumpB
	var_70_bool = 0; var_71_object = Obj(); // 0x576 PushV
	var_72_object = Obj(); // 0x577 PushV
	func_1868(var_72_object); // 0x578 NEW_2
	var_71_object = var_72_object; // 0x579 Mov
	func_1735(var_71_object); // 0x57b NEW_2
	
Label_1405:
	goto Label_1412; // 0x57d Jump
	
Label_1412:
	return 0; // 0x584 Return
	
Label_1406:
	func_1335(var_26_int); // 0x57f NEW_2
	func_1362(); // 0x582 NEW_2
}


task_10_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_1553(); // 0x586 NEW_2
	func_1371(); // 0x589 NEW_2
	lshStopSpeech(); // 0x58b Func
	lshStopAnimation(); // 0x58d Func
	StopAsync(); // 0x58f Func
	Hold(); // 0x591 Func
	return 0; // 0x593 Return
}


task_10_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	StopGroup0(); // 0x594 Func
	func_1371(); // 0x597 NEW_2
	var_27_string = ""; // 0x599 PushV
	var_27_string = "Neutral"; // 0x59a MovS
	func_1815(var_27_string); // 0x59b NEW_2
	func_1362(); // 0x59e NEW_2
	return 0; // 0x5a0 Return
}


task_10_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_bool)
{
	var_27_bool = var_26_bool; // 0x5a2 Push
	if(var_27_bool == 0) goto Label_1448; // 0x5a3 JumpB
	func_1362(); // 0x5a5 NEW_2
	goto Label_1452; // 0x5a7 Jump
	
Label_1452:
	return 0; // 0x5ac Return
	
Label_1448:
	var_33_string = ""; // 0x5a8 PushV
	var_33_string = "Neutral"; // 0x5a9 MovS
	func_1815(var_33_string); // 0x5aa NEW_2
}


task_10_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_object)
{
	var_27_bool = 0; var_28_bool = 0; // 0x5ad PushV
	IsOverrideActive(var_28_bool); // 0x5ae Func
	var_29_bool = var_28_bool == 0; // 0x5b0 Not
	if(var_29_bool == 0) goto Label_1481; // 0x5b1 JumpB
	EventDisable(0); // 0x5b2 EventDisable
	func_1553(); // 0x5b4 NEW_2
	var_30_bool = 0; var_31_object = Obj(); // 0x5b6 PushV
	var_31_object = var_26_object; // 0x5b7 Mov
	func_1576(var_31_object); // 0x5b8 NEW_2
	EventEnable(0); // 0x5ba EventEnable
	var_44_object = Obj(); // 0x5bb PushV
	var_44_object = var_26_object; // 0x5bc Mov
	func_1991(var_44_object); // 0x5bd NEW_2
	var_526_string = ""; // 0x5bf PushV
	var_526_string = "Neutral"; // 0x5c0 MovS
	func_1815(var_526_string); // 0x5c1 NEW_2
	func_1371(); // 0x5c4 NEW_2
	func_1362(); // 0x5c7 NEW_2
	
Label_1481:
	return 2; // 0x5c9 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	var_26_bool = GlobalVars[1]; // 0x513 PushGE
	var_26_bool = 0; // 0x514 MovB
	GlobalVars[1] = var_26_bool; // 0x515 PopGE
	func_1306(var_25_cvector); // 0x517 NEW_2
	return 0; // 0x519 Return
}


func_0(var_0_object, var_47_int, var_48_object)
{
	var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_object = Obj(); var_55_bool = 0; var_56_int = 0; var_57_bool = 0; // 0x0 PushV
	var_0_object = var_48_object; // 0x1 TMov
	var_58_bool = 0; var_59_object = Obj(); var_60_float = 0; // 0x2 PushV
	var_59_object = var_48_object; // 0x3 Mov
	var_60_float = 70.0; // 0x4 MovF
	func_1590(var_59_object, var_60_float); // 0x5 NEW_2
	var_105_bool = var_58_bool == 0; // 0x7 Not
	if(var_105_bool == 0) goto Label_11; // 0x8 JumpB
	var_47_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_54_object); // 0xb Func
	var_106_int = 0; // 0xd PushV
	func_1930(var_106_int); // 0xe NEW_2
	SetNPCName(var_106_int); // 0x10 ObjFunc
	var_107_int = 0; // 0x12 PushV
	func_1928(var_107_int); // 0x13 NEW_2
	SetNPCDescription(var_107_int); // 0x15 ObjFunc
	var_108_string = ""; // 0x17 PushV
	func_1932(var_108_string); // 0x18 NEW_2
	SetPhoto(var_108_string); // 0x1a ObjFunc
	var_109_string = ""; // 0x1c PushV
	func_1934(var_109_string); // 0x1d NEW_2
	SetPhoto2(var_109_string); // 0x1f ObjFunc
	var_110_int = 0; // 0x21 PushV
	func_1974(var_110_int); // 0x22 NEW_2
	SetPlayerName(var_110_int); // 0x24 ObjFunc
	var_56_int = -1; // 0x26 MovI
	IsOverrideActive(var_55_bool); // 0x27 Func
	var_118_bool = var_55_bool; // 0x29 Push
	if(var_118_bool == 0) goto Label_45; // 0x2a JumpB
	var_47_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_54_object); // 0x2d Func
	var_119_bool = 0; var_120_object = Obj(); // 0x2f PushV
	var_121_object = Obj(); // 0x30 PushV
	func_1868(var_121_object); // 0x31 NEW_2
	var_120_object = var_121_object; // 0x32 Mov
	func_1677(var_119_bool, var_120_object); // 0x34 NEW_2
	var_214_object = Obj(); var_215_object = Obj(); // 0x36 PushV
	var_214_object = var_48_object; // 0x37 Mov
	var_215_object = var_54_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_216_object, var_217_object, var_218_string, var_219_bool, var_214_object, var_215_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_57_bool); // 0x3d ObjFunc
	
Label_63:
	var_270_bool = var_57_bool == 0; // 0x3f Not
	if(var_270_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_57_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_271_object = Obj(); // 0x46 PushV
	var_271_object = var_48_object; // 0x47 Mov
	func_1659(); // 0x48 NEW_2
	StopDialog(var_54_object); // 0x4a Func
	GetReturnValue(var_56_int); // 0x4c ObjFunc
	var_47_int = var_56_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_391(var_0_object, var_1_object, var_2_object, var_3_string, var_307_object, var_308_object)
{
	var_0_object = var_308_object; // 0x188 TMov
	var_1_object = var_307_object; // 0x189 TMov
	var_3_string = 0; // 0x18a TMovB
	var_313_int = 1; // 0x18b PushI
	if(var_313_int == 0) goto Label_414; // 0x18c JumpB
	var_314_string = ""; // 0x18d PushV
	var_314_string = "Dream"; // 0x18e MovS
	func_444(var_308_object, var_314_string); // 0x18f NEW_2
	var_322_int = 510004; // 0x191 PushI
	SetMessage(var_322_int); // 0x192 TObjFunc
	ClearReplies(); // 0x194 TObjFunc
	var_323_int = 510015; // 0x196 PushI
	var_324_int = -1; // 0x197 PushI
	var_325_int = 11037; // 0x198 PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0x199 TObjFunc
	goto Label_414; // 0x19b Jump
	
Label_414:
	var_326_bool = 0; // 0x19e PushV
	func_1936(var_326_bool); // 0x19f NEW_2
	if(var_326_bool == 0) goto Label_429; // 0x1a1 JumpB
	
Label_418:
	lshWaitForAnimEnd(); // 0x1a2 Func
	var_327_string = var_3_string; // 0x1a4 PushT
	if(var_327_string == 0) goto Label_423; // 0x1a5 JumpB
	goto Label_428; // 0x1a6 Jump
	
Label_428:
	goto Label_443; // 0x1ac Jump
	
Label_443:
	return 0; // 0x1bb Return
	
Label_423:
	var_328_string = ""; // 0x1a7 PushV
	var_328_string = var_2_object; // 0x1a8 MovT
	func_1815(var_328_string); // 0x1a9 NEW_2
	goto Label_418; // 0x1ab Jump
	
Label_429:
	var_329_string = "all"; // 0x1ad PushS
	var_330_string = "idle"; // 0x1ae PushS
	PlayAnimation(var_329_string, var_330_string); // 0x1af Func
	
Label_433:
	WaitForAnimEnd(); // 0x1b1 Func
	var_331_string = var_3_string; // 0x1b3 PushT
	if(var_331_string == 0) goto Label_438; // 0x1b4 JumpB
	goto Label_443; // 0x1b5 Jump
	
Label_438:
	var_332_string = "all"; // 0x1b6 PushS
	var_333_string = "idle"; // 0x1b7 PushS
	PlayAnimation(var_332_string, var_333_string); // 0x1b8 Func
	goto Label_433; // 0x1ba Jump
}


func_1928(var_107_int)
{
	var_107_int = 515546; // 0x788 MovI
	return 0; // 0x789 Return
}


func_1930(var_106_int)
{
	var_106_int = 502871; // 0x78a MovI
	return 0; // 0x78b Return
}


func_1932(var_108_string)
{
	var_108_string = "ui/NPC_Mishka.png"; // 0x78c MovS
	return 0; // 0x78d Return
}


func_1677(var_119_bool, var_120_object)
{
	var_124_int = 0; var_125_int = 0; var_126_int = 0; var_127_int = 0; // 0x68d PushV
	var_128_string = "voice_common"; // 0x68e PushS
	GetVariable(var_128_string, var_126_int); // 0x68f Func
	var_129_int = var_126_int; // 0x691 Push
	if(var_129_int == 0) goto Label_1715; // 0x692 JumpB
	var_130_bool = 0; var_131_object = Obj(); // 0x693 PushV
	var_131_object = var_120_object; // 0x694 Mov
	func_1735(var_131_object); // 0x695 NEW_2
	var_160_bool = var_130_bool == 0; // 0x697 Not
	if(var_160_bool == 0) goto Label_1697; // 0x698 JumpB
	var_161_bool = 0; var_162_object = Obj(); // 0x699 PushV
	var_162_object = var_120_object; // 0x69a Mov
	func_1772(var_162_object); // 0x69b NEW_2
	var_196_bool = var_161_bool == 0; // 0x69d Not
	if(var_196_bool == 0) goto Label_1697; // 0x69e JumpB
	var_119_bool = 0; // 0x69f MovB
	return 4; // 0x6a0 Return
	
Label_1697:
	var_197_int = 2; // 0x6a1 PushI
	irand(var_127_int, var_197_int); // 0x6a2 Func
	var_198_int = var_127_int; // 0x6a4 Push
	if(var_198_int == 0) goto Label_1710; // 0x6a5 JumpB
	var_199_string = "voice_common"; // 0x6a6 PushS
	var_200_int = 1; // 0x6a7 PushI
	var_201_int = var_126_int + var_200_int; // 0x6a8 Add
	var_202_int = 3; // 0x6a9 PushI
	var_203_int = var_201_int / var_202_int; // 0x6aa Mod
	SetVariable(var_199_string, var_203_int); // 0x6ab Func
	goto Label_1714; // 0x6ad Jump
	
Label_1714:
	goto Label_1733; // 0x6b2 Jump
	
Label_1733:
	var_119_bool = 1; // 0x6c5 MovB
	return 4; // 0x6c6 Return
	
Label_1710:
	var_204_string = "voice_common"; // 0x6ae PushS
	var_205_int = 0; // 0x6af PushI
	SetVariable(var_204_string, var_205_int); // 0x6b0 Func
	
Label_1715:
	var_206_bool = 0; var_207_object = Obj(); // 0x6b3 PushV
	var_207_object = var_120_object; // 0x6b4 Mov
	func_1772(var_207_object); // 0x6b5 NEW_2
	var_208_bool = var_206_bool == 0; // 0x6b7 Not
	if(var_208_bool == 0) goto Label_1729; // 0x6b8 JumpB
	var_209_bool = 0; var_210_object = Obj(); // 0x6b9 PushV
	var_210_object = var_120_object; // 0x6ba Mov
	func_1735(var_210_object); // 0x6bb NEW_2
	var_211_bool = var_209_bool == 0; // 0x6bd Not
	if(var_211_bool == 0) goto Label_1729; // 0x6be JumpB
	var_119_bool = 0; // 0x6bf MovB
	return 4; // 0x6c0 Return
	
Label_1729:
	var_212_string = "voice_common"; // 0x6c1 PushS
	var_213_int = 1; // 0x6c2 PushI
	SetVariable(var_212_string, var_213_int); // 0x6c3 Func
}


func_1934(var_109_string)
{
	var_109_string = "ui/NPC_Mishka_b.png"; // 0x78e MovS
	return 0; // 0x78f Return
}


func_1551(var_65_bool)
{
	var_65_bool = 1; // 0x60f MovB
	return 0; // 0x610 Return
}


func_1936(var_101_bool)
{
	var_101_bool = 1; // 0x790 MovB
	return 0; // 0x791 Return
}


func_656(var_2_object, var_369_string)
{
	var_370_bool = 0; // 0x291 PushV
	func_1936(var_370_bool); // 0x292 NEW_2
	var_371_bool = var_370_bool == 0; // 0x294 Not
	if(var_371_bool == 0) goto Label_663; // 0x295 JumpB
	return 0; // 0x296 Return
	
Label_663:
	var_372_bool = var_369_string == var_2_object; // 0x297 Eq
	if(var_372_bool == 0) goto Label_666; // 0x298 JumpB
	return 0; // 0x299 Return
	
Label_666:
	var_373_string = ""; var_374_bool = 0; // 0x29a PushV
	var_373_string = var_369_string; // 0x29b Mov
	var_375_string = ""; // 0x29c PushS
	var_376_bool = var_369_string == var_375_string; // 0x29d Eq
	if(var_376_bool == 0) goto Label_673; // 0x29e JumpB
	var_374_bool = 0; // 0x29f MovB
	goto Label_674; // 0x2a0 Jump
	
Label_674:
	func_1831(var_373_string, var_374_bool); // 0x2a2 NEW_2
	var_2_object = var_369_string; // 0x2a4 TMov
	return 0; // 0x2a5 Return
	
Label_673:
	var_374_bool = 1; // 0x2a1 MovB
}


func_1938()
{
	var_34_string = "ood6Mishka1"; // 0x793 PushS
	var_35_int = 1; // 0x794 PushI
	SetVariable(var_34_string, var_35_int); // 0x795 Func
	return 0; // 0x797 Return
}


func_1553()
{
	StopAnimation(); // 0x611 Func
	StopGroup0(); // 0x613 Func
	return 0; // 0x615 Return
}


func_1911(var_45_int)
{
	var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_bool = 0; // 0x777 PushV
	var_48_int = 0; // 0x778 MovI
	
Label_1913:
	var_50_string = "all"; // 0x779 PushS
	var_51_string = ""; var_52_int = 0; // 0x77a PushV
	var_52_int = var_48_int; // 0x77b Mov
	func_1904(var_51_string, var_52_int); // 0x77c NEW_2
	HasAnimation(var_49_bool, var_50_string, var_51_string); // 0x77e Func
	var_56_bool = var_49_bool == 0; // 0x780 Not
	if(var_56_bool == 0) goto Label_1923; // 0x781 JumpB
	goto Label_1926; // 0x782 Jump
	
Label_1926:
	var_45_int = var_48_int; // 0x786 Mov
	return 4; // 0x787 Return
	
Label_1923:
	var_57_int = 1; // 0x783 PushI
	var_48_int = var_48_int + var_57_int; // 0x784 Add2
	goto Label_1913; // 0x785 Jump
}


func_149(var_2_object, var_225_string)
{
	var_226_bool = 0; // 0x96 PushV
	func_1936(var_226_bool); // 0x97 NEW_2
	var_227_bool = var_226_bool == 0; // 0x99 Not
	if(var_227_bool == 0) goto Label_156; // 0x9a JumpB
	return 0; // 0x9b Return
	
Label_156:
	var_228_bool = var_225_string == var_2_object; // 0x9c Eq
	if(var_228_bool == 0) goto Label_159; // 0x9d JumpB
	return 0; // 0x9e Return
	
Label_159:
	var_229_string = ""; var_230_bool = 0; // 0x9f PushV
	var_229_string = var_225_string; // 0xa0 Mov
	var_231_string = ""; // 0xa1 PushS
	var_232_bool = var_225_string == var_231_string; // 0xa2 Eq
	if(var_232_bool == 0) goto Label_166; // 0xa3 JumpB
	var_230_bool = 0; // 0xa4 MovB
	goto Label_167; // 0xa5 Jump
	
Label_167:
	func_1831(var_229_string, var_230_bool); // 0xa7 NEW_2
	var_2_object = var_225_string; // 0xa9 TMov
	return 0; // 0xaa Return
	
Label_166:
	var_230_bool = 1; // 0xa6 MovB
}


func_918(var_0_object, var_1_object, var_2_object, var_3_string, var_435_object, var_436_object)
{
	var_0_object = var_436_object; // 0x397 TMov
	var_1_object = var_435_object; // 0x398 TMov
	var_3_string = 0; // 0x399 TMovB
	var_441_int = 1; // 0x39a PushI
	if(var_441_int == 0) goto Label_951; // 0x39b JumpB
	var_442_string = ""; // 0x39c PushV
	var_442_string = "Neutral"; // 0x39d MovS
	func_981(var_436_object, var_442_string); // 0x39e NEW_2
	var_450_int = 535284; // 0x3a0 PushI
	SetMessage(var_450_int); // 0x3a1 TObjFunc
	ClearReplies(); // 0x3a3 TObjFunc
	var_451_int = 535285; // 0x3a5 PushI
	var_452_int = 36962; // 0x3a6 PushI
	var_453_int = 36961; // 0x3a7 PushI
	AddReply(var_451_int, var_452_int, var_453_int); // 0x3a8 TObjFunc
	var_454_int = 535292; // 0x3aa PushI
	var_455_int = -1; // 0x3ab PushI
	var_456_int = 36968; // 0x3ac PushI
	AddReply(var_454_int, var_455_int, var_456_int); // 0x3ad TObjFunc
	var_457_int = 535293; // 0x3af PushI
	var_458_int = -1; // 0x3b0 PushI
	var_459_int = 36969; // 0x3b1 PushI
	AddReply(var_457_int, var_458_int, var_459_int); // 0x3b2 TObjFunc
	goto Label_951; // 0x3b4 Jump
	
Label_951:
	var_460_bool = 0; // 0x3b7 PushV
	func_1936(var_460_bool); // 0x3b8 NEW_2
	if(var_460_bool == 0) goto Label_966; // 0x3ba JumpB
	
Label_955:
	lshWaitForAnimEnd(); // 0x3bb Func
	var_461_string = var_3_string; // 0x3bd PushT
	if(var_461_string == 0) goto Label_960; // 0x3be JumpB
	goto Label_965; // 0x3bf Jump
	
Label_965:
	goto Label_980; // 0x3c5 Jump
	
Label_980:
	return 0; // 0x3d4 Return
	
Label_960:
	var_462_string = ""; // 0x3c0 PushV
	var_462_string = var_2_object; // 0x3c1 MovT
	func_1815(var_462_string); // 0x3c2 NEW_2
	goto Label_955; // 0x3c4 Jump
	
Label_966:
	var_463_string = "all"; // 0x3c6 PushS
	var_464_string = "idle"; // 0x3c7 PushS
	PlayAnimation(var_463_string, var_464_string); // 0x3c8 Func
	
Label_970:
	WaitForAnimEnd(); // 0x3ca Func
	var_465_string = var_3_string; // 0x3cc PushT
	if(var_465_string == 0) goto Label_975; // 0x3cd JumpB
	goto Label_980; // 0x3ce Jump
	
Label_975:
	var_466_string = "all"; // 0x3cf PushS
	var_467_string = "idle"; // 0x3d0 PushS
	PlayAnimation(var_466_string, var_467_string); // 0x3d1 Func
	goto Label_970; // 0x3d3 Jump
}


func_1815(var_254_string)
{
	var_255_bool = 0; var_256_float = 0; var_257_float = 0; var_258_bool = 0; var_259_float = 0; var_260_float = 0; // 0x717 PushV
	lshHasAnimation(var_258_bool, var_254_string); // 0x718 Func
	var_261_bool = var_258_bool; // 0x71a Push
	if(var_261_bool == 0) goto Label_1826; // 0x71b JumpB
	lshGetAnimTimes(var_254_string, var_259_float, var_260_float); // 0x71c Func
	var_262_bool = 0; // 0x71e PushB
	lshPlayAnimation(var_259_float, var_260_float, var_262_bool); // 0x71f Func
	goto Label_1830; // 0x721 Jump
	
Label_1830:
	return 6; // 0x726 Return
	
Label_1826:
	var_263_string = "Can't find lsh animation : "; // 0x722 PushS
	var_264_int = var_263_string + var_254_string; // 0x723 Add
	Trace(var_264_int); // 0x724 Func
}


func_1944()
{
	var_223_string = "KnowMishka"; // 0x799 PushS
	var_224_int = 1; // 0x79a PushI
	SetVariable(var_223_string, var_224_int); // 0x79b Func
	return 0; // 0x79d Return
}


func_1177(var_0_object, var_1_object, var_2_object, var_3_string, var_494_object, var_495_object)
{
	var_0_object = var_495_object; // 0x49a TMov
	var_1_object = var_494_object; // 0x49b TMov
	var_3_string = 0; // 0x49c TMovB
	var_500_int = 1; // 0x49d PushI
	if(var_500_int == 0) goto Label_1205; // 0x49e JumpB
	var_501_string = ""; // 0x49f PushV
	var_501_string = "Neutral"; // 0x4a0 MovS
	func_1235(var_495_object, var_501_string); // 0x4a1 NEW_2
	var_509_int = 540548; // 0x4a3 PushI
	SetMessage(var_509_int); // 0x4a4 TObjFunc
	ClearReplies(); // 0x4a6 TObjFunc
	var_510_int = 540549; // 0x4a8 PushI
	var_511_int = -1; // 0x4a9 PushI
	var_512_int = 42558; // 0x4aa PushI
	AddReply(var_510_int, var_511_int, var_512_int); // 0x4ab TObjFunc
	var_513_int = 540797; // 0x4ad PushI
	var_514_int = -1; // 0x4ae PushI
	var_515_int = 42846; // 0x4af PushI
	AddReply(var_513_int, var_514_int, var_515_int); // 0x4b0 TObjFunc
	goto Label_1205; // 0x4b2 Jump
	
Label_1205:
	var_516_bool = 0; // 0x4b5 PushV
	func_1936(var_516_bool); // 0x4b6 NEW_2
	if(var_516_bool == 0) goto Label_1220; // 0x4b8 JumpB
	
Label_1209:
	lshWaitForAnimEnd(); // 0x4b9 Func
	var_517_string = var_3_string; // 0x4bb PushT
	if(var_517_string == 0) goto Label_1214; // 0x4bc JumpB
	goto Label_1219; // 0x4bd Jump
	
Label_1219:
	goto Label_1234; // 0x4c3 Jump
	
Label_1234:
	return 0; // 0x4d2 Return
	
Label_1214:
	var_518_string = ""; // 0x4be PushV
	var_518_string = var_2_object; // 0x4bf MovT
	func_1815(var_518_string); // 0x4c0 NEW_2
	goto Label_1209; // 0x4c2 Jump
	
Label_1220:
	var_519_string = "all"; // 0x4c4 PushS
	var_520_string = "idle"; // 0x4c5 PushS
	PlayAnimation(var_519_string, var_520_string); // 0x4c6 Func
	
Label_1224:
	WaitForAnimEnd(); // 0x4c8 Func
	var_521_string = var_3_string; // 0x4ca PushT
	if(var_521_string == 0) goto Label_1229; // 0x4cb JumpB
	goto Label_1234; // 0x4cc Jump
	
Label_1229:
	var_522_string = "all"; // 0x4cd PushS
	var_523_string = "idle"; // 0x4ce PushS
	PlayAnimation(var_522_string, var_523_string); // 0x4cf Func
	goto Label_1224; // 0x4d1 Jump
}


func_1306(var_0_object)
{
	var_27_bool = 0; // 0x51a PushV
	func_1585(var_27_bool); // 0x51b NEW_2
	var_30_bool = var_27_bool == 0; // 0x51d Not
	if(var_30_bool == 0) goto Label_1313; // 0x51e JumpB
	Hold(); // 0x51f Func
	
Label_1313:
	GetDirection(var_0_object); // 0x521 Func
	
Label_1315:
	func_1482(); // 0x524 NEW_2
	goto Label_1315; // 0x526 Jump
}


func_1558(var_41_float)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x616 PushV
	GetPosition(var_46_cvector); // 0x617 Func
	GetPosition(var_47_cvector); // 0x619 ObjFunc
	var_48_cvector = var_47_cvector - var_46_cvector; // 0x61b Sub2
	var_41_float = var_48_cvector | var_48_cvector; // 0x61c Or2
	return 6; // 0x61d Return
}


func_1950(var_379_bool)
{
	var_381_int = 0; var_382_string = ""; // 0x79f PushV
	var_382_string = "d6q01"; // 0x7a0 MovS
	func_1884(var_381_int, var_382_string); // 0x7a1 NEW_2
	var_385_int = 4; // 0x7a3 PushI
	var_386_bool = var_381_int == var_385_int; // 0x7a4 Eq
	if(var_386_bool == 0) goto Label_1960; // 0x7a5 JumpB
	var_379_bool = 1; // 0x7a6 MovB
	return 0; // 0x7a7 Return
	
Label_1960:
	var_379_bool = 0; // 0x7a8 MovB
	return 0; // 0x7a9 Return
}


func_1566(var_34_bool, var_35_cvector)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; // 0x61e PushV
	GetPosition(var_39_cvector); // 0x61f Func
	var_40_cvector = var_35_cvector - var_39_cvector; // 0x621 Sub2
	var_42_float = GetByIndex(var_40_cvector, 0); // 0x622 PushE
	var_43_float = GetByIndex(var_40_cvector, 2); // 0x623 PushE
	Rotate(var_42_float, var_43_float, var_41_bool); // 0x624 Func
	var_34_bool = var_41_bool; // 0x626 Mov
	return 6; // 0x627 Return
}


func_1831(var_229_string, var_230_bool)
{
	var_233_bool = 0; var_234_float = 0; var_235_float = 0; var_236_bool = 0; var_237_float = 0; var_238_float = 0; // 0x727 PushV
	lshHasAnimation(var_236_bool, var_229_string); // 0x728 Func
	var_239_bool = var_236_bool; // 0x72a Push
	if(var_239_bool == 0) goto Label_1841; // 0x72b JumpB
	lshGetAnimTimes(var_229_string, var_237_float, var_238_float); // 0x72c Func
	lshPlayAnimation(var_237_float, var_238_float, var_230_bool); // 0x72e Func
	goto Label_1845; // 0x730 Jump
	
Label_1845:
	return 6; // 0x735 Return
	
Label_1841:
	var_240_string = "Can't find lsh animation : "; // 0x731 PushS
	var_241_int = var_240_string + var_229_string; // 0x732 Add
	Trace(var_241_int); // 0x733 Func
}


func_1576(var_30_bool)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); // 0x628 PushV
	GetPosition(var_33_cvector); // 0x629 ObjFunc
	var_34_bool = 0; var_35_cvector = CVector(0,0,0); // 0x62b PushV
	var_35_cvector = var_33_cvector; // 0x62c Mov
	func_1566(var_34_bool, var_35_cvector); // 0x62d NEW_2
	var_30_bool = var_34_bool; // 0x62e Mov
	return 2; // 0x630 Return
}


func_1320(var_51_bool)
{
	var_52_object = Obj(); var_53_object = Obj(); // 0x528 PushV
	var_54_string = "player"; // 0x529 PushS
	FindActor(var_53_object, var_54_string); // 0x52a Func
	var_55_bool = var_53_object == 0; // 0x52c Not
	if(var_55_bool == 0) goto Label_1328; // 0x52d JumpB
	var_51_bool = 0; // 0x52e MovB
	return 2; // 0x52f Return
	
Label_1328:
	var_56_bool = 0; var_57_object = Obj(); // 0x530 PushV
	var_57_object = var_53_object; // 0x531 Mov
	func_1576(var_57_object); // 0x532 NEW_2
	var_51_bool = var_56_bool; // 0x533 Mov
	return 2; // 0x535 Return
}


func_1962(var_387_bool)
{
	var_389_int = 0; var_390_string = ""; // 0x7ab PushV
	var_390_string = "ood6Mishka1"; // 0x7ac MovS
	func_1884(var_389_int, var_390_string); // 0x7ad NEW_2
	var_391_int = 0; // 0x7af PushI
	var_392_bool = var_389_int == var_391_int; // 0x7b0 Eq
	if(var_392_bool == 0) goto Label_1972; // 0x7b1 JumpB
	var_387_bool = 1; // 0x7b2 MovB
	return 0; // 0x7b3 Return
	
Label_1972:
	var_387_bool = 0; // 0x7b4 MovB
	return 0; // 0x7b5 Return
}


func_1585(var_27_bool)
{
	var_28_bool = 0; var_29_bool = 0; // 0x631 PushV
	IsLoaded(var_29_bool); // 0x632 Func
	var_27_bool = var_29_bool; // 0x634 Mov
	return 2; // 0x635 Return
}


func_1590(var_58_bool, var_60_float)
{
	var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0; var_69_bool = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_bool = 0; var_78_bool = 0; // 0x636 PushV
	GetPosition(var_71_cvector); // 0x637 ObjFunc
	GetEyesHeight(var_70_float); // 0x639 ObjFunc
	var_79_float = GetByIndex(var_71_cvector, 1); // 0x63b PushE
	var_79_float = var_79_float + var_70_float; // 0x63c Add2
	SetByIndex(var_71_cvector, 1) = var_79_float; // 0x63d PopE
	GetPosition(var_72_cvector); // 0x63e Func
	GetEyesHeight(var_70_float); // 0x640 Func
	var_80_float = GetByIndex(var_72_cvector, 1); // 0x642 PushE
	var_80_float = var_80_float + var_70_float; // 0x643 Add2
	SetByIndex(var_72_cvector, 1) = var_80_float; // 0x644 PopE
	var_73_cvector = var_71_cvector - var_72_cvector; // 0x645 Sub2
	var_81_float = GetByIndex(var_73_cvector, 1); // 0x646 PushE
	var_81_float = 0; // 0x647 MovI
	SetByIndex(var_73_cvector, 1) = var_81_float; // 0x648 PopE
	var_82_int = var_73_cvector | var_73_cvector; // 0x649 Or
	var_83_float = sqrt(var_82_int); // 0x64a Sqrt
	var_73_cvector = var_73_cvector / var_73_cvector; // 0x64b Div2
	var_74_cvector = -var_73_cvector; // 0x64c Neg2
	var_84_float = var_73_cvector * var_60_float; // 0x64d Mult
	var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); // 0x64e PushV
	var_87_cvector = CVector(0.0, 1.0, 0.0); // 0x64f PushVec
	var_86_cvector = var_74_cvector ^ var_87_cvector; // 0x650 Xor2
	func_1874(var_85_cvector, var_86_cvector); // 0x651 NEW_2
	var_93_int = 25; // 0x653 PushI
	var_94_float = var_85_cvector * var_93_int; // 0x654 Mult
	var_95_int = var_84_float + var_94_float; // 0x655 Add
	var_96_cvector = CVector(0.0, 10.0, 0.0); // 0x656 PushVec
	var_75_cvector = var_95_int - var_96_cvector; // 0x657 Sub2
	var_76_cvector = var_72_cvector + var_75_cvector; // 0x658 Add2
	IsOverrideActive(var_77_bool); // 0x659 Func
	var_97_bool = var_77_bool; // 0x65b Push
	if(var_97_bool == 0) goto Label_1631; // 0x65c JumpB
	var_58_bool = 0; // 0x65d MovB
	return 18; // 0x65e Return
	
Label_1631:
	StopWorld(); // 0x65f Func
	var_98_bool = 1; // 0x661 PushB
	CameraTransit(var_76_cvector, var_74_cvector, var_98_bool); // 0x662 Func
	var_99_float = GetByIndex(var_75_cvector, 0); // 0x664 PushE
	var_100_float = GetByIndex(var_75_cvector, 2); // 0x665 PushE
	Rotate(var_99_float, var_100_float); // 0x666 Func
	var_101_bool = 0; // 0x668 PushV
	func_1936(var_101_bool); // 0x669 NEW_2
	if(var_101_bool == 0) goto Label_1645; // 0x66b JumpB
	goto Label_1653; // 0x66c Jump
	
Label_1653:
	CameraWaitForPlayFinish(); // 0x675 Func
	ResumeWorld(); // 0x677 Func
	var_58_bool = 1; // 0x679 MovB
	return 18; // 0x67a Return
	
Label_1645:
	var_102_string = "head"; // 0x66d PushS
	HasAnimationTrack(var_78_bool, var_102_string); // 0x66e Func
	var_103_bool = var_78_bool; // 0x670 Push
	if(var_103_bool == 0) goto Label_1653; // 0x671 JumpB
	var_104_string = "head"; // 0x672 PushS
	LookAsyncCamera(var_104_string); // 0x673 Func
}


func_1974(var_110_int)
{
	var_111_int = 0; var_112_int = 0; // 0x7b6 PushV
	var_113_string = "branch"; // 0x7b7 PushS
	GetVariable(var_113_string, var_112_int); // 0x7b8 Func
	var_114_int = 0; // 0x7ba PushI
	var_115_bool = var_112_int == var_114_int; // 0x7bb Eq
	if(var_115_bool == 0) goto Label_1984; // 0x7bc JumpB
	var_110_int = 1; // 0x7bd MovI
	return 2; // 0x7be Return
	
Label_1984:
	var_116_int = 1; // 0x7c0 PushI
	var_117_bool = var_112_int == var_116_int; // 0x7c1 Eq
	if(var_117_bool == 0) goto Label_1989; // 0x7c2 JumpB
	var_110_int = 2; // 0x7c3 MovI
	return 2; // 0x7c4 Return
	
Label_1989:
	var_110_int = 3; // 0x7c5 MovI
	return 2; // 0x7c6 Return
}


func_1335(var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0); // 0x537 PushE
	var_104_float = GetByIndex(var_0_object, 2); // 0x538 PushE
	RotateAsync(var_103_float, var_104_float); // 0x539 Func
	return 0; // 0x53b Return
}


func_1846(var_153_bool, var_154_string)
{
	var_155_bool = 0; var_156_bool = 0; // 0x736 PushV
	var_157_bool = 0; // 0x737 PushV
	func_1936(var_157_bool); // 0x738 NEW_2
	if(var_157_bool == 0) goto Label_1859; // 0x73a JumpB
	lshHasSpeech(var_156_bool, var_154_string); // 0x73b Func
	var_158_bool = var_156_bool; // 0x73d Push
	if(var_158_bool == 0) goto Label_1859; // 0x73e JumpB
	lshPlaySpeech(var_154_string); // 0x73f Func
	var_153_bool = 1; // 0x741 MovB
	return 2; // 0x742 Return
	
Label_1859:
	var_153_bool = 0; // 0x743 MovB
	return 2; // 0x744 Return
}


func_310(var_0_object, var_283_int, var_284_object)
{
	var_286_object = Obj(); var_287_bool = 0; var_288_int = 0; var_289_bool = 0; var_290_object = Obj(); var_291_bool = 0; var_292_int = 0; var_293_bool = 0; // 0x136 PushV
	var_0_object = var_284_object; // 0x137 TMov
	var_294_bool = 0; var_295_object = Obj(); var_296_float = 0; // 0x138 PushV
	var_295_object = var_284_object; // 0x139 Mov
	var_296_float = 70.0; // 0x13a MovF
	func_1590(var_295_object, var_296_float); // 0x13b NEW_2
	var_297_bool = var_294_bool == 0; // 0x13d Not
	if(var_297_bool == 0) goto Label_321; // 0x13e JumpB
	var_283_int = -2; // 0x13f MovI
	return 8; // 0x140 Return
	
Label_321:
	CreateDialog(var_290_object); // 0x141 Func
	var_298_int = 0; // 0x143 PushV
	func_1930(var_298_int); // 0x144 NEW_2
	SetNPCName(var_298_int); // 0x146 ObjFunc
	var_299_int = 0; // 0x148 PushV
	func_1928(var_299_int); // 0x149 NEW_2
	SetNPCDescription(var_299_int); // 0x14b ObjFunc
	var_300_string = ""; // 0x14d PushV
	func_1932(var_300_string); // 0x14e NEW_2
	SetPhoto(var_300_string); // 0x150 ObjFunc
	var_301_string = ""; // 0x152 PushV
	func_1934(var_301_string); // 0x153 NEW_2
	SetPhoto2(var_301_string); // 0x155 ObjFunc
	var_302_int = 0; // 0x157 PushV
	func_1974(var_302_int); // 0x158 NEW_2
	SetPlayerName(var_302_int); // 0x15a ObjFunc
	var_292_int = -1; // 0x15c MovI
	IsOverrideActive(var_291_bool); // 0x15d Func
	var_303_bool = var_291_bool; // 0x15f Push
	if(var_303_bool == 0) goto Label_355; // 0x160 JumpB
	var_283_int = -2; // 0x161 MovI
	return 8; // 0x162 Return
	
Label_355:
	DoDialog(var_290_object); // 0x163 Func
	var_304_bool = 0; var_305_object = Obj(); // 0x165 PushV
	var_306_object = Obj(); // 0x166 PushV
	func_1868(var_306_object); // 0x167 NEW_2
	var_305_object = var_306_object; // 0x168 Mov
	func_1677(var_304_bool, var_305_object); // 0x16a NEW_2
	var_307_object = Obj(); var_308_object = Obj(); // 0x16c PushV
	var_307_object = var_284_object; // 0x16d Mov
	var_308_object = var_290_object; // 0x16e Mov
	TaskCall(3); // 0x16f TaskCall
	func_391(var_309_object, var_310_object, var_311_string, var_312_bool, var_307_object, var_308_object); // 0x170 NEW_2
	TaskReturn(); // 0x171 TaskReturn
	IsDialogEnd(var_293_bool); // 0x173 ObjFunc
	
Label_373:
	var_334_bool = var_293_bool == 0; // 0x175 Not
	if(var_334_bool == 0) goto Label_380; // 0x176 JumpB
	sync(); // 0x177 Func
	IsDialogEnd(var_293_bool); // 0x179 ObjFunc
	goto Label_373; // 0x17b Jump
	
Label_380:
	var_335_object = Obj(); // 0x17c PushV
	var_335_object = var_284_object; // 0x17d Mov
	func_1659(); // 0x17e NEW_2
	StopDialog(var_290_object); // 0x180 Func
	GetReturnValue(var_292_int); // 0x182 ObjFunc
	var_283_int = var_292_int; // 0x184 Mov
	return 8; // 0x185 Return
}


func_444(var_2_object, var_314_string)
{
	var_315_bool = 0; // 0x1bd PushV
	func_1936(var_315_bool); // 0x1be NEW_2
	var_316_bool = var_315_bool == 0; // 0x1c0 Not
	if(var_316_bool == 0) goto Label_451; // 0x1c1 JumpB
	return 0; // 0x1c2 Return
	
Label_451:
	var_317_bool = var_314_string == var_2_object; // 0x1c3 Eq
	if(var_317_bool == 0) goto Label_454; // 0x1c4 JumpB
	return 0; // 0x1c5 Return
	
Label_454:
	var_318_string = ""; var_319_bool = 0; // 0x1c6 PushV
	var_318_string = var_314_string; // 0x1c7 Mov
	var_320_string = ""; // 0x1c8 PushS
	var_321_bool = var_314_string == var_320_string; // 0x1c9 Eq
	if(var_321_bool == 0) goto Label_461; // 0x1ca JumpB
	var_319_bool = 0; // 0x1cb MovB
	goto Label_462; // 0x1cc Jump
	
Label_462:
	func_1831(var_318_string, var_319_bool); // 0x1ce NEW_2
	var_2_object = var_314_string; // 0x1d0 TMov
	return 0; // 0x1d1 Return
	
Label_461:
	var_319_bool = 1; // 0x1cd MovB
}


func_1340(var_34_bool)
{
	var_35_object = Obj(); var_36_bool = 0; var_37_object = Obj(); var_38_bool = 0; // 0x53c PushV
	var_39_string = "player"; // 0x53d PushS
	FindActor(var_37_object, var_39_string); // 0x53e Func
	var_40_bool = var_37_object == 0; // 0x540 Not
	if(var_40_bool == 0) goto Label_1348; // 0x541 JumpB
	var_34_bool = 0; // 0x542 MovB
	return 4; // 0x543 Return
	
Label_1348:
	var_41_float = 0; var_42_object = Obj(); // 0x544 PushV
	var_42_object = var_37_object; // 0x545 Mov
	func_1558(var_42_object); // 0x546 NEW_2
	var_49_float = 90000.0; // 0x548 PushF
	var_50_bool = var_41_float > var_49_float; // 0x549 GT
	if(var_50_bool == 0) goto Label_1357; // 0x54a JumpB
	var_34_bool = 0; // 0x54b MovB
	return 4; // 0x54c Return
	
Label_1357:
	CanSee(var_38_bool, var_37_object); // 0x54d Func
	var_34_bool = var_38_bool; // 0x54f Mov
	return 4; // 0x550 Return
}


func_1861()
{
	var_29_bool = 0; // 0x745 PushV
	func_1936(var_29_bool); // 0x746 NEW_2
	if(var_29_bool == 0) goto Label_1867; // 0x748 JumpB
	lshStopSpeech(); // 0x749 Func
	
Label_1867:
	return 0; // 0x74b Return
}


func_837(var_0_object, var_411_int, var_412_object)
{
	var_414_object = Obj(); var_415_bool = 0; var_416_int = 0; var_417_bool = 0; var_418_object = Obj(); var_419_bool = 0; var_420_int = 0; var_421_bool = 0; // 0x345 PushV
	var_0_object = var_412_object; // 0x346 TMov
	var_422_bool = 0; var_423_object = Obj(); var_424_float = 0; // 0x347 PushV
	var_423_object = var_412_object; // 0x348 Mov
	var_424_float = 70.0; // 0x349 MovF
	func_1590(var_423_object, var_424_float); // 0x34a NEW_2
	var_425_bool = var_422_bool == 0; // 0x34c Not
	if(var_425_bool == 0) goto Label_848; // 0x34d JumpB
	var_411_int = -2; // 0x34e MovI
	return 8; // 0x34f Return
	
Label_848:
	CreateDialog(var_418_object); // 0x350 Func
	var_426_int = 0; // 0x352 PushV
	func_1930(var_426_int); // 0x353 NEW_2
	SetNPCName(var_426_int); // 0x355 ObjFunc
	var_427_int = 0; // 0x357 PushV
	func_1928(var_427_int); // 0x358 NEW_2
	SetNPCDescription(var_427_int); // 0x35a ObjFunc
	var_428_string = ""; // 0x35c PushV
	func_1932(var_428_string); // 0x35d NEW_2
	SetPhoto(var_428_string); // 0x35f ObjFunc
	var_429_string = ""; // 0x361 PushV
	func_1934(var_429_string); // 0x362 NEW_2
	SetPhoto2(var_429_string); // 0x364 ObjFunc
	var_430_int = 0; // 0x366 PushV
	func_1974(var_430_int); // 0x367 NEW_2
	SetPlayerName(var_430_int); // 0x369 ObjFunc
	var_420_int = -1; // 0x36b MovI
	IsOverrideActive(var_419_bool); // 0x36c Func
	var_431_bool = var_419_bool; // 0x36e Push
	if(var_431_bool == 0) goto Label_882; // 0x36f JumpB
	var_411_int = -2; // 0x370 MovI
	return 8; // 0x371 Return
	
Label_882:
	DoDialog(var_418_object); // 0x372 Func
	var_432_bool = 0; var_433_object = Obj(); // 0x374 PushV
	var_434_object = Obj(); // 0x375 PushV
	func_1868(var_434_object); // 0x376 NEW_2
	var_433_object = var_434_object; // 0x377 Mov
	func_1677(var_432_bool, var_433_object); // 0x379 NEW_2
	var_435_object = Obj(); var_436_object = Obj(); // 0x37b PushV
	var_435_object = var_412_object; // 0x37c Mov
	var_436_object = var_418_object; // 0x37d Mov
	TaskCall(7); // 0x37e TaskCall
	func_918(var_437_object, var_438_object, var_439_string, var_440_bool, var_435_object, var_436_object); // 0x37f NEW_2
	TaskReturn(); // 0x380 TaskReturn
	IsDialogEnd(var_421_bool); // 0x382 ObjFunc
	
Label_900:
	var_468_bool = var_421_bool == 0; // 0x384 Not
	if(var_468_bool == 0) goto Label_907; // 0x385 JumpB
	sync(); // 0x386 Func
	IsDialogEnd(var_421_bool); // 0x388 ObjFunc
	goto Label_900; // 0x38a Jump
	
Label_907:
	var_469_object = Obj(); // 0x38b PushV
	var_469_object = var_412_object; // 0x38c Mov
	func_1659(); // 0x38d NEW_2
	StopDialog(var_418_object); // 0x38f Func
	GetReturnValue(var_420_int); // 0x391 ObjFunc
	var_411_int = var_420_int; // 0x393 Mov
	return 8; // 0x394 Return
}


func_1735(var_130_bool)
{
	var_132_string = ""; var_133_int = 0; var_134_bool = 0; var_135_int = 0; var_136_string = ""; var_137_string = ""; var_138_int = 0; var_139_bool = 0; var_140_int = 0; var_141_string = ""; // 0x6c7 PushV
	var_137_string = "c"; // 0x6c8 MovS
	var_138_int = 0; // 0x6c9 MovI
	
Label_1738:
	var_142_int = 1; // 0x6ca PushI
	if(var_142_int == 0) goto Label_1751; // 0x6cb JumpB
	var_143_int = 1; // 0x6cc PushI
	var_144_int = var_138_int + var_143_int; // 0x6cd Add
	var_145_int = var_137_string + var_144_int; // 0x6ce Add
	HasProperty(var_145_int, var_139_bool); // 0x6cf ObjFunc
	var_146_bool = var_139_bool == 0; // 0x6d1 Not
	if(var_146_bool == 0) goto Label_1748; // 0x6d2 JumpB
	goto Label_1751; // 0x6d3 Jump
	
Label_1751:
	var_147_bool = var_138_int == 0; // 0x6d7 Not
	if(var_147_bool == 0) goto Label_1755; // 0x6d8 JumpB
	var_130_bool = 0; // 0x6d9 MovB
	return 10; // 0x6da Return
	
Label_1755:
	var_140_int = 0; // 0x6db MovI
	var_148_int = 1; // 0x6dc PushI
	var_149_bool = var_138_int > var_148_int; // 0x6dd GT
	if(var_149_bool == 0) goto Label_1761; // 0x6de JumpB
	irand(var_140_int, var_138_int); // 0x6df Func
	
Label_1761:
	var_150_int = 1; // 0x6e1 PushI
	var_151_int = var_140_int + var_150_int; // 0x6e2 Add
	var_152_int = var_137_string + var_151_int; // 0x6e3 Add
	GetProperty(var_152_int, var_141_string); // 0x6e4 ObjFunc
	var_153_bool = 0; var_154_string = ""; // 0x6e6 PushV
	var_154_string = var_141_string; // 0x6e7 Mov
	func_1846(var_153_bool, var_154_string); // 0x6e8 NEW_2
	var_130_bool = var_153_bool; // 0x6e9 Mov
	return 10; // 0x6eb Return
	
Label_1748:
	var_159_int = 1; // 0x6d4 PushI
	var_138_int = var_138_int + var_159_int; // 0x6d5 Add2
	goto Label_1738; // 0x6d6 Jump
}


func_584(var_0_object, var_1_object, var_2_object, var_3_string, var_362_object, var_363_object)
{
	var_0_object = var_363_object; // 0x249 TMov
	var_1_object = var_362_object; // 0x24a TMov
	var_3_string = 0; // 0x24b TMovB
	var_368_int = 1; // 0x24c PushI
	if(var_368_int == 0) goto Label_626; // 0x24d JumpB
	var_369_string = ""; // 0x24e PushV
	var_369_string = "Suspicion"; // 0x24f MovS
	func_656(var_363_object, var_369_string); // 0x250 NEW_2
	var_377_int = 512800; // 0x252 PushI
	SetMessage(var_377_int); // 0x253 TObjFunc
	ClearReplies(); // 0x255 TObjFunc
	var_378_bool = 0; // 0x257 PushV
	var_378_bool = 0; // 0x258 MovB
	var_379_bool = 0; var_380_object = Obj(); // 0x259 PushV
	var_380_object = var_1_object; // 0x25a MovT
	func_1950(var_380_object); // 0x25b NEW_2
	if(var_379_bool == 0) goto Label_612; // 0x25d JumpB
	var_387_bool = 0; var_388_object = Obj(); // 0x25e PushV
	var_388_object = var_1_object; // 0x25f MovT
	func_1962(var_388_object); // 0x260 NEW_2
	if(var_387_bool == 0) goto Label_612; // 0x262 JumpB
	var_378_bool = 1; // 0x263 MovB
	
Label_612:
	if(var_378_bool == 0) goto Label_618; // 0x264 JumpB
	var_393_int = 512801; // 0x265 PushI
	var_394_int = 14001; // 0x266 PushI
	var_395_int = 14000; // 0x267 PushI
	AddReply(var_393_int, var_394_int, var_395_int); // 0x268 TObjFunc
	
Label_618:
	var_396_int = 512813; // 0x26a PushI
	var_397_int = -1; // 0x26b PushI
	var_398_int = 14013; // 0x26c PushI
	AddReply(var_396_int, var_397_int, var_398_int); // 0x26d TObjFunc
	goto Label_626; // 0x26f Jump
	
Label_626:
	var_399_bool = 0; // 0x272 PushV
	func_1936(var_399_bool); // 0x273 NEW_2
	if(var_399_bool == 0) goto Label_641; // 0x275 JumpB
	
Label_630:
	lshWaitForAnimEnd(); // 0x276 Func
	var_400_string = var_3_string; // 0x278 PushT
	if(var_400_string == 0) goto Label_635; // 0x279 JumpB
	goto Label_640; // 0x27a Jump
	
Label_640:
	goto Label_655; // 0x280 Jump
	
Label_655:
	return 0; // 0x28f Return
	
Label_635:
	var_401_string = ""; // 0x27b PushV
	var_401_string = var_2_object; // 0x27c MovT
	func_1815(var_401_string); // 0x27d NEW_2
	goto Label_630; // 0x27f Jump
	
Label_641:
	var_402_string = "all"; // 0x281 PushS
	var_403_string = "idle"; // 0x282 PushS
	PlayAnimation(var_402_string, var_403_string); // 0x283 Func
	
Label_645:
	WaitForAnimEnd(); // 0x285 Func
	var_404_string = var_3_string; // 0x287 PushT
	if(var_404_string == 0) goto Label_650; // 0x288 JumpB
	goto Label_655; // 0x289 Jump
	
Label_650:
	var_405_string = "all"; // 0x28a PushS
	var_406_string = "idle"; // 0x28b PushS
	PlayAnimation(var_405_string, var_406_string); // 0x28c Func
	goto Label_645; // 0x28e Jump
}


func_1991(var_44_object)
{
	var_45_bool = GlobalVars[1]; // 0x7c8 PushGE
	var_46_bool = var_45_bool == 0; // 0x7c9 Not
	if(var_46_bool == 0) goto Label_2004; // 0x7ca JumpB
	var_47_int = 0; var_48_object = Obj(); // 0x7cb PushV
	var_48_object = var_44_object; // 0x7cc Mov
	TaskCall(0); // 0x7cd TaskCall
	func_0(var_49_object, var_47_int, var_48_object); // 0x7ce NEW_2
	TaskReturn(); // 0x7cf TaskReturn
	var_279_bool = GlobalVars[1]; // 0x7d1 PushGE
	var_279_bool = 1; // 0x7d2 MovB
	GlobalVars[1] = var_279_bool; // 0x7d3 PopGE
	
Label_2004:
	var_280_bool = 0; var_281_int = 0; // 0x7d4 PushV
	var_281_int = 3; // 0x7d5 MovI
	func_1898(var_280_bool, var_281_int); // 0x7d6 NEW_2
	if(var_280_bool == 0) goto Label_2016; // 0x7d8 JumpB
	var_283_int = 0; var_284_object = Obj(); // 0x7d9 PushV
	var_284_object = var_44_object; // 0x7da Mov
	TaskCall(2); // 0x7db TaskCall
	func_310(var_285_object, var_283_int, var_284_object); // 0x7dc NEW_2
	TaskReturn(); // 0x7dd TaskReturn
	return 0; // 0x7df Return
	
Label_2016:
	var_336_bool = 0; var_337_int = 0; // 0x7e0 PushV
	var_337_int = 6; // 0x7e1 MovI
	func_1898(var_336_bool, var_337_int); // 0x7e2 NEW_2
	if(var_336_bool == 0) goto Label_2028; // 0x7e4 JumpB
	var_338_int = 0; var_339_object = Obj(); // 0x7e5 PushV
	var_339_object = var_44_object; // 0x7e6 Mov
	TaskCall(4); // 0x7e7 TaskCall
	func_503(var_340_object, var_338_int, var_339_object); // 0x7e8 NEW_2
	TaskReturn(); // 0x7e9 TaskReturn
	return 0; // 0x7eb Return
	
Label_2028:
	var_409_bool = 0; var_410_int = 0; // 0x7ec PushV
	var_410_int = 12; // 0x7ed MovI
	func_1898(var_409_bool, var_410_int); // 0x7ee NEW_2
	if(var_409_bool == 0) goto Label_2040; // 0x7f0 JumpB
	var_411_int = 0; var_412_object = Obj(); // 0x7f1 PushV
	var_412_object = var_44_object; // 0x7f2 Mov
	TaskCall(6); // 0x7f3 TaskCall
	func_837(var_413_object, var_411_int, var_412_object); // 0x7f4 NEW_2
	TaskReturn(); // 0x7f5 TaskReturn
	return 0; // 0x7f7 Return
	
Label_2040:
	var_470_int = 0; var_471_object = Obj(); // 0x7f8 PushV
	var_471_object = var_44_object; // 0x7f9 Mov
	TaskCall(8); // 0x7fa TaskCall
	func_1096(var_472_object, var_470_int, var_471_object); // 0x7fb NEW_2
	TaskReturn(); // 0x7fc TaskReturn
	return 0; // 0x7fe Return
}


func_1482()
{
	var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_int = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_bool = 0; var_40_int = 0; var_41_int = 0; var_42_bool = 0; // 0x5ca PushV
	WaitForAnimEnd(); // 0x5cb Func
	var_43_bool = 0; // 0x5cd PushV
	func_1585(var_43_bool); // 0x5ce NEW_2
	var_44_bool = var_43_bool == 0; // 0x5d0 Not
	if(var_44_bool == 0) goto Label_1491; // 0x5d1 JumpB
	return 12; // 0x5d2 Return
	
Label_1491:
	var_45_int = 0; // 0x5d3 PushV
	func_1911(var_45_int); // 0x5d4 NEW_2
	var_37_int = var_45_int; // 0x5d5 Mov
	var_38_int = 0; // 0x5d7 MovI
	
Label_1496:
	var_58_bool = 0; // 0x5d8 PushV
	var_58_bool = 0; // 0x5d9 MovB
	var_59_int = 5; // 0x5da PushI
	var_60_bool = var_38_int < var_59_int; // 0x5db LT
	if(var_60_bool == 0) goto Label_1506; // 0x5dc JumpB
	var_61_bool = 0; // 0x5dd PushV
	func_1585(var_61_bool); // 0x5de NEW_2
	if(var_61_bool == 0) goto Label_1506; // 0x5e0 JumpB
	var_58_bool = 1; // 0x5e1 MovB
	
Label_1506:
	if(var_58_bool == 0) goto Label_1548; // 0x5e2 JumpB
	var_62_bool = var_37_int == 0; // 0x5e3 Not
	if(var_62_bool == 0) goto Label_1516; // 0x5e4 JumpB
	var_63_int = 3; // 0x5e5 PushI
	Sleep(var_63_int, var_39_bool); // 0x5e6 Func
	var_64_bool = var_39_bool == 0; // 0x5e8 Not
	if(var_64_bool == 0) goto Label_1515; // 0x5e9 JumpB
	goto Label_1548; // 0x5ea Jump
	
Label_1548:
	ResetAAS(); // 0x60c Func
	return 12; // 0x60e Return
	
Label_1515:
	goto Label_1537; // 0x5eb Jump
	
Label_1537:
	var_65_bool = 0; // 0x601 PushV
	func_1551(var_65_bool); // 0x602 NEW_2
	var_66_bool = var_65_bool == 0; // 0x604 Not
	if(var_66_bool == 0) goto Label_1543; // 0x605 JumpB
	goto Label_1548; // 0x606 Jump
	
Label_1543:
	ResetAAS(); // 0x607 Func
	var_67_int = 1; // 0x609 PushI
	var_38_int = var_38_int + var_67_int; // 0x60a Add2
	goto Label_1496; // 0x60b Jump
	
Label_1516:
	irand(var_40_int, var_37_int); // 0x5ec Func
	var_68_int = 5; // 0x5ee PushI
	irand(var_41_int, var_68_int); // 0x5ef Func
	var_69_int = 0; // 0x5f1 PushI
	var_70_bool = var_41_int != var_69_int; // 0x5f2 Neq
	if(var_70_bool == 0) goto Label_1525; // 0x5f3 JumpB
	var_40_int = 0; // 0x5f4 MovI
	
Label_1525:
	var_71_string = "all"; // 0x5f5 PushS
	var_72_string = ""; var_73_int = 0; // 0x5f6 PushV
	var_73_int = var_40_int; // 0x5f7 Mov
	func_1904(var_72_string, var_73_int); // 0x5f8 NEW_2
	PlayAnimation(var_71_string, var_72_string); // 0x5fa Func
	WaitForAnimEnd(var_42_bool); // 0x5fc Func
	var_74_bool = var_42_bool == 0; // 0x5fe Not
	if(var_74_bool == 0) goto Label_1537; // 0x5ff JumpB
	goto Label_1548; // 0x600 Jump
}


func_1096(var_0_object, var_470_int, var_471_object)
{
	var_473_object = Obj(); var_474_bool = 0; var_475_int = 0; var_476_bool = 0; var_477_object = Obj(); var_478_bool = 0; var_479_int = 0; var_480_bool = 0; // 0x448 PushV
	var_0_object = var_471_object; // 0x449 TMov
	var_481_bool = 0; var_482_object = Obj(); var_483_float = 0; // 0x44a PushV
	var_482_object = var_471_object; // 0x44b Mov
	var_483_float = 70.0; // 0x44c MovF
	func_1590(var_482_object, var_483_float); // 0x44d NEW_2
	var_484_bool = var_481_bool == 0; // 0x44f Not
	if(var_484_bool == 0) goto Label_1107; // 0x450 JumpB
	var_470_int = -2; // 0x451 MovI
	return 8; // 0x452 Return
	
Label_1107:
	CreateDialog(var_477_object); // 0x453 Func
	var_485_int = 0; // 0x455 PushV
	func_1930(var_485_int); // 0x456 NEW_2
	SetNPCName(var_485_int); // 0x458 ObjFunc
	var_486_int = 0; // 0x45a PushV
	func_1928(var_486_int); // 0x45b NEW_2
	SetNPCDescription(var_486_int); // 0x45d ObjFunc
	var_487_string = ""; // 0x45f PushV
	func_1932(var_487_string); // 0x460 NEW_2
	SetPhoto(var_487_string); // 0x462 ObjFunc
	var_488_string = ""; // 0x464 PushV
	func_1934(var_488_string); // 0x465 NEW_2
	SetPhoto2(var_488_string); // 0x467 ObjFunc
	var_489_int = 0; // 0x469 PushV
	func_1974(var_489_int); // 0x46a NEW_2
	SetPlayerName(var_489_int); // 0x46c ObjFunc
	var_479_int = -1; // 0x46e MovI
	IsOverrideActive(var_478_bool); // 0x46f Func
	var_490_bool = var_478_bool; // 0x471 Push
	if(var_490_bool == 0) goto Label_1141; // 0x472 JumpB
	var_470_int = -2; // 0x473 MovI
	return 8; // 0x474 Return
	
Label_1141:
	DoDialog(var_477_object); // 0x475 Func
	var_491_bool = 0; var_492_object = Obj(); // 0x477 PushV
	var_493_object = Obj(); // 0x478 PushV
	func_1868(var_493_object); // 0x479 NEW_2
	var_492_object = var_493_object; // 0x47a Mov
	func_1677(var_491_bool, var_492_object); // 0x47c NEW_2
	var_494_object = Obj(); var_495_object = Obj(); // 0x47e PushV
	var_494_object = var_471_object; // 0x47f Mov
	var_495_object = var_477_object; // 0x480 Mov
	TaskCall(9); // 0x481 TaskCall
	func_1177(var_496_object, var_497_object, var_498_string, var_499_bool, var_494_object, var_495_object); // 0x482 NEW_2
	TaskReturn(); // 0x483 TaskReturn
	IsDialogEnd(var_480_bool); // 0x485 ObjFunc
	
Label_1159:
	var_524_bool = var_480_bool == 0; // 0x487 Not
	if(var_524_bool == 0) goto Label_1166; // 0x488 JumpB
	sync(); // 0x489 Func
	IsDialogEnd(var_480_bool); // 0x48b ObjFunc
	goto Label_1159; // 0x48d Jump
	
Label_1166:
	var_525_object = Obj(); // 0x48e PushV
	var_525_object = var_471_object; // 0x48f Mov
	func_1659(); // 0x490 NEW_2
	StopDialog(var_477_object); // 0x492 Func
	GetReturnValue(var_479_int); // 0x494 ObjFunc
	var_470_int = var_479_int; // 0x496 Mov
	return 8; // 0x497 Return
}


func_1868(var_121_object)
{
	var_122_object = Obj(); var_123_object = Obj(); // 0x74c PushV
	self(var_123_object); // 0x74d Func
	var_121_object = var_123_object; // 0x74f Mov
	return 2; // 0x750 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_214_object, var_215_object)
{
	var_0_object = var_215_object; // 0x52 TMov
	var_1_object = var_214_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_220_int = 1; // 0x55 PushI
	if(var_220_int == 0) goto Label_119; // 0x56 JumpB
	var_221_object = Obj(); var_222_object = Obj(); // 0x57 PushV
	var_221_object = var_1_object; // 0x58 MovT
	var_222_object = var_0_object; // 0x59 MovT
	func_1944(); // 0x5a NEW_2
	var_225_string = ""; // 0x5c PushV
	var_225_string = "Neutral"; // 0x5d MovS
	func_149(var_215_object, var_225_string); // 0x5e NEW_2
	var_242_int = 500457; // 0x60 PushI
	SetMessage(var_242_int); // 0x61 TObjFunc
	ClearReplies(); // 0x63 TObjFunc
	var_243_int = 500458; // 0x65 PushI
	var_244_int = 530; // 0x66 PushI
	var_245_int = 527; // 0x67 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x68 TObjFunc
	var_246_int = 500459; // 0x6a PushI
	var_247_int = 532; // 0x6b PushI
	var_248_int = 528; // 0x6c PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x6d TObjFunc
	var_249_int = 500460; // 0x6f PushI
	var_250_int = 530; // 0x70 PushI
	var_251_int = 529; // 0x71 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x72 TObjFunc
	goto Label_119; // 0x74 Jump
	
Label_119:
	var_252_bool = 0; // 0x77 PushV
	func_1936(var_252_bool); // 0x78 NEW_2
	if(var_252_bool == 0) goto Label_134; // 0x7a JumpB
	
Label_123:
	lshWaitForAnimEnd(); // 0x7b Func
	var_253_string = var_3_string; // 0x7d PushT
	if(var_253_string == 0) goto Label_128; // 0x7e JumpB
	goto Label_133; // 0x7f Jump
	
Label_133:
	goto Label_148; // 0x85 Jump
	
Label_148:
	return 0; // 0x94 Return
	
Label_128:
	var_254_string = ""; // 0x80 PushV
	var_254_string = var_2_object; // 0x81 MovT
	func_1815(var_254_string); // 0x82 NEW_2
	goto Label_123; // 0x84 Jump
	
Label_134:
	var_265_string = "all"; // 0x86 PushS
	var_266_string = "idle"; // 0x87 PushS
	PlayAnimation(var_265_string, var_266_string); // 0x88 Func
	
Label_138:
	WaitForAnimEnd(); // 0x8a Func
	var_267_string = var_3_string; // 0x8c PushT
	if(var_267_string == 0) goto Label_143; // 0x8d JumpB
	goto Label_148; // 0x8e Jump
	
Label_143:
	var_268_string = "all"; // 0x8f PushS
	var_269_string = "idle"; // 0x90 PushS
	PlayAnimation(var_268_string, var_269_string); // 0x91 Func
	goto Label_138; // 0x93 Jump
}


func_1362()
{
	var_528_float = 0; var_529_float = 0; // 0x552 PushV
	var_530_int = 8; // 0x553 PushI
	var_531_int = 16; // 0x554 PushI
	rand(var_529_float, var_530_int, var_531_int); // 0x555 Func
	var_532_int = 10; // 0x557 PushI
	SetTimer(var_532_int, var_529_float); // 0x558 Func
	return 2; // 0x55a Return
}


func_1235(var_2_object, var_501_string)
{
	var_502_bool = 0; // 0x4d4 PushV
	func_1936(var_502_bool); // 0x4d5 NEW_2
	var_503_bool = var_502_bool == 0; // 0x4d7 Not
	if(var_503_bool == 0) goto Label_1242; // 0x4d8 JumpB
	return 0; // 0x4d9 Return
	
Label_1242:
	var_504_bool = var_501_string == var_2_object; // 0x4da Eq
	if(var_504_bool == 0) goto Label_1245; // 0x4db JumpB
	return 0; // 0x4dc Return
	
Label_1245:
	var_505_string = ""; var_506_bool = 0; // 0x4dd PushV
	var_505_string = var_501_string; // 0x4de Mov
	var_507_string = ""; // 0x4df PushS
	var_508_bool = var_501_string == var_507_string; // 0x4e0 Eq
	if(var_508_bool == 0) goto Label_1252; // 0x4e1 JumpB
	var_506_bool = 0; // 0x4e2 MovB
	goto Label_1253; // 0x4e3 Jump
	
Label_1253:
	func_1831(var_505_string, var_506_bool); // 0x4e5 NEW_2
	var_2_object = var_501_string; // 0x4e7 TMov
	return 0; // 0x4e8 Return
	
Label_1252:
	var_506_bool = 1; // 0x4e4 MovB
}


func_1874(var_85_cvector, var_86_cvector)
{
	var_88_float = 0; var_89_float = 0; // 0x752 PushV
	var_90_int = var_86_cvector | var_86_cvector; // 0x753 Or
	var_89_float = sqrt(var_90_int); // 0x754 Sqrt2
	var_91_float = 0.0; // 0x755 PushF
	var_92_bool = var_89_float < var_91_float; // 0x756 LT
	if(var_92_bool == 0) goto Label_1882; // 0x757 JumpB
	var_85_cvector = CVector(0.0, 0.0, 0.0); // 0x758 MovV
	return 2; // 0x759 Return
	
Label_1882:
	var_85_cvector = var_86_cvector / var_86_cvector; // 0x75a Div2
	return 2; // 0x75b Return
}


func_981(var_2_object, var_442_string)
{
	var_443_bool = 0; // 0x3d6 PushV
	func_1936(var_443_bool); // 0x3d7 NEW_2
	var_444_bool = var_443_bool == 0; // 0x3d9 Not
	if(var_444_bool == 0) goto Label_988; // 0x3da JumpB
	return 0; // 0x3db Return
	
Label_988:
	var_445_bool = var_442_string == var_2_object; // 0x3dc Eq
	if(var_445_bool == 0) goto Label_991; // 0x3dd JumpB
	return 0; // 0x3de Return
	
Label_991:
	var_446_string = ""; var_447_bool = 0; // 0x3df PushV
	var_446_string = var_442_string; // 0x3e0 Mov
	var_448_string = ""; // 0x3e1 PushS
	var_449_bool = var_442_string == var_448_string; // 0x3e2 Eq
	if(var_449_bool == 0) goto Label_998; // 0x3e3 JumpB
	var_447_bool = 0; // 0x3e4 MovB
	goto Label_999; // 0x3e5 Jump
	
Label_999:
	func_1831(var_446_string, var_447_bool); // 0x3e7 NEW_2
	var_2_object = var_442_string; // 0x3e9 TMov
	return 0; // 0x3ea Return
	
Label_998:
	var_447_bool = 1; // 0x3e6 MovB
}


func_1371()
{
	var_527_int = 10; // 0x55b PushI
	KillTimer(var_527_int); // 0x55c Func
	return 0; // 0x55e Return
}


func_1884(var_381_int, var_382_string)
{
	var_383_int = 0; var_384_int = 0; // 0x75c PushV
	GetVariable(var_382_string, var_384_int); // 0x75d Func
	var_381_int = var_384_int; // 0x75f Mov
	return 2; // 0x760 Return
}


func_1889(var_174_int)
{
	var_175_float = 0; var_176_float = 0; // 0x761 PushV
	GetGameTime(var_176_float); // 0x762 Func
	var_177_int = 1; // 0x764 PushI
	var_178_int = 0; // 0x765 PushV
	var_179_int = 24; // 0x766 PushI
	var_178_int = var_176_float / var_176_float; // 0x767 Div2
	var_174_int = var_177_int + var_178_int; // 0x768 Add2
	return 2; // 0x769 Return
}


func_1898(var_280_bool, var_281_int)
{
	var_282_int = 0; // 0x76b PushV
	func_1889(var_282_int); // 0x76c NEW_2
	var_280_bool = var_282_int == var_281_int; // 0x76e Eq2
	return 0; // 0x76f Return
}


func_1772(var_161_bool)
{
	var_163_string = ""; var_164_int = 0; var_165_bool = 0; var_166_int = 0; var_167_string = ""; var_168_string = ""; var_169_int = 0; var_170_bool = 0; var_171_int = 0; var_172_string = ""; // 0x6ec PushV
	var_173_string = "d"; // 0x6ed PushS
	var_174_int = 0; // 0x6ee PushV
	func_1889(var_174_int); // 0x6ef NEW_2
	var_180_int = var_173_string + var_174_int; // 0x6f1 Add
	var_181_string = "m"; // 0x6f2 PushS
	var_168_string = var_180_int + var_181_string; // 0x6f3 Add2
	var_169_int = 0; // 0x6f4 MovI
	
Label_1781:
	var_182_int = 1; // 0x6f5 PushI
	if(var_182_int == 0) goto Label_1794; // 0x6f6 JumpB
	var_183_int = 1; // 0x6f7 PushI
	var_184_int = var_169_int + var_183_int; // 0x6f8 Add
	var_185_int = var_168_string + var_184_int; // 0x6f9 Add
	HasProperty(var_185_int, var_170_bool); // 0x6fa ObjFunc
	var_186_bool = var_170_bool == 0; // 0x6fc Not
	if(var_186_bool == 0) goto Label_1791; // 0x6fd JumpB
	goto Label_1794; // 0x6fe Jump
	
Label_1794:
	var_187_bool = var_169_int == 0; // 0x702 Not
	if(var_187_bool == 0) goto Label_1798; // 0x703 JumpB
	var_161_bool = 0; // 0x704 MovB
	return 10; // 0x705 Return
	
Label_1798:
	var_171_int = 0; // 0x706 MovI
	var_188_int = 1; // 0x707 PushI
	var_189_bool = var_169_int > var_188_int; // 0x708 GT
	if(var_189_bool == 0) goto Label_1804; // 0x709 JumpB
	irand(var_171_int, var_169_int); // 0x70a Func
	
Label_1804:
	var_190_int = 1; // 0x70c PushI
	var_191_int = var_171_int + var_190_int; // 0x70d Add
	var_192_int = var_168_string + var_191_int; // 0x70e Add
	GetProperty(var_192_int, var_172_string); // 0x70f ObjFunc
	var_193_bool = 0; var_194_string = ""; // 0x711 PushV
	var_194_string = var_172_string; // 0x712 Mov
	func_1846(var_193_bool, var_194_string); // 0x713 NEW_2
	var_161_bool = var_193_bool; // 0x714 Mov
	return 10; // 0x716 Return
	
Label_1791:
	var_195_int = 1; // 0x6ff PushI
	var_169_int = var_169_int + var_195_int; // 0x700 Add2
	goto Label_1781; // 0x701 Jump
}


func_1904(var_51_string, var_52_int)
{
	var_53_string = ""; var_54_string = ""; // 0x770 PushV
	var_54_string = "idle"; // 0x771 MovS
	var_55_int = var_52_int; // 0x772 Push
	if(var_55_int == 0) goto Label_1909; // 0x773 JumpB
	var_54_string = var_54_string + var_52_int; // 0x774 Add2
	
Label_1909:
	var_51_string = var_54_string; // 0x775 Mov
	return 2; // 0x776 Return
}


func_503(var_0_object, var_338_int, var_339_object)
{
	var_341_object = Obj(); var_342_bool = 0; var_343_int = 0; var_344_bool = 0; var_345_object = Obj(); var_346_bool = 0; var_347_int = 0; var_348_bool = 0; // 0x1f7 PushV
	var_0_object = var_339_object; // 0x1f8 TMov
	var_349_bool = 0; var_350_object = Obj(); var_351_float = 0; // 0x1f9 PushV
	var_350_object = var_339_object; // 0x1fa Mov
	var_351_float = 70.0; // 0x1fb MovF
	func_1590(var_350_object, var_351_float); // 0x1fc NEW_2
	var_352_bool = var_349_bool == 0; // 0x1fe Not
	if(var_352_bool == 0) goto Label_514; // 0x1ff JumpB
	var_338_int = -2; // 0x200 MovI
	return 8; // 0x201 Return
	
Label_514:
	CreateDialog(var_345_object); // 0x202 Func
	var_353_int = 0; // 0x204 PushV
	func_1930(var_353_int); // 0x205 NEW_2
	SetNPCName(var_353_int); // 0x207 ObjFunc
	var_354_int = 0; // 0x209 PushV
	func_1928(var_354_int); // 0x20a NEW_2
	SetNPCDescription(var_354_int); // 0x20c ObjFunc
	var_355_string = ""; // 0x20e PushV
	func_1932(var_355_string); // 0x20f NEW_2
	SetPhoto(var_355_string); // 0x211 ObjFunc
	var_356_string = ""; // 0x213 PushV
	func_1934(var_356_string); // 0x214 NEW_2
	SetPhoto2(var_356_string); // 0x216 ObjFunc
	var_357_int = 0; // 0x218 PushV
	func_1974(var_357_int); // 0x219 NEW_2
	SetPlayerName(var_357_int); // 0x21b ObjFunc
	var_347_int = -1; // 0x21d MovI
	IsOverrideActive(var_346_bool); // 0x21e Func
	var_358_bool = var_346_bool; // 0x220 Push
	if(var_358_bool == 0) goto Label_548; // 0x221 JumpB
	var_338_int = -2; // 0x222 MovI
	return 8; // 0x223 Return
	
Label_548:
	DoDialog(var_345_object); // 0x224 Func
	var_359_bool = 0; var_360_object = Obj(); // 0x226 PushV
	var_361_object = Obj(); // 0x227 PushV
	func_1868(var_361_object); // 0x228 NEW_2
	var_360_object = var_361_object; // 0x229 Mov
	func_1677(var_359_bool, var_360_object); // 0x22b NEW_2
	var_362_object = Obj(); var_363_object = Obj(); // 0x22d PushV
	var_362_object = var_339_object; // 0x22e Mov
	var_363_object = var_345_object; // 0x22f Mov
	TaskCall(5); // 0x230 TaskCall
	func_584(var_364_object, var_365_object, var_366_string, var_367_bool, var_362_object, var_363_object); // 0x231 NEW_2
	TaskReturn(); // 0x232 TaskReturn
	IsDialogEnd(var_348_bool); // 0x234 ObjFunc
	
Label_566:
	var_407_bool = var_348_bool == 0; // 0x236 Not
	if(var_407_bool == 0) goto Label_573; // 0x237 JumpB
	sync(); // 0x238 Func
	IsDialogEnd(var_348_bool); // 0x23a ObjFunc
	goto Label_566; // 0x23c Jump
	
Label_573:
	var_408_object = Obj(); // 0x23d PushV
	var_408_object = var_339_object; // 0x23e Mov
	func_1659(); // 0x23f NEW_2
	StopDialog(var_345_object); // 0x241 Func
	GetReturnValue(var_347_int); // 0x243 ObjFunc
	var_338_int = var_347_int; // 0x245 Mov
	return 8; // 0x246 Return
}


func_1659()
{
	var_272_bool = 0; var_273_bool = 0; // 0x67b PushV
	var_274_bool = 1; // 0x67c PushB
	CameraSwitchToNormal(var_274_bool); // 0x67d Func
	var_275_bool = 0; // 0x67f PushV
	func_1936(var_275_bool); // 0x680 NEW_2
	if(var_275_bool == 0) goto Label_1668; // 0x682 JumpB
	goto Label_1676; // 0x683 Jump
	
Label_1676:
	return 2; // 0x68c Return
	
Label_1668:
	var_276_string = "head"; // 0x684 PushS
	HasAnimationTrack(var_273_bool, var_276_string); // 0x685 Func
	var_277_bool = var_273_bool; // 0x687 Push
	if(var_277_bool == 0) goto Label_1676; // 0x688 JumpB
	var_278_string = "head"; // 0x689 PushS
	UnlookAsync(var_278_string); // 0x68a Func
}


