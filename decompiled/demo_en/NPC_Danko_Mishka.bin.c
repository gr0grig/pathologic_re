task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0xa7 PushI
	if(var_28_int == 0) goto Label_258; // 0xa8 JumpB
	func_1859(); // 0xaa NEW_2
	var_30_int = 36960; // 0xac PushI
	var_31_bool = var_26_bool == var_30_int; // 0xad Eq
	if(var_31_bool == 0) goto Label_200; // 0xae JumpB
	var_32_string = ""; // 0xaf PushV
	var_32_string = "Neutral"; // 0xb0 MovS
	func_144(var_27_cvector, var_32_string); // 0xb1 NEW_2
	var_49_int = 535284; // 0xb3 PushI
	SetMessage(var_49_int); // 0xb4 TObjFunc
	ClearReplies(); // 0xb6 TObjFunc
	var_50_int = 535285; // 0xb8 PushI
	var_51_int = 36962; // 0xb9 PushI
	var_52_int = 36961; // 0xba PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0xbb TObjFunc
	var_53_int = 535292; // 0xbd PushI
	var_54_int = -1; // 0xbe PushI
	var_55_int = 36968; // 0xbf PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0xc0 TObjFunc
	var_56_int = 535293; // 0xc2 PushI
	var_57_int = -1; // 0xc3 PushI
	var_58_int = 36969; // 0xc4 PushI
	AddReply(var_56_int, var_57_int, var_58_int); // 0xc5 TObjFunc
	return 0; // 0xc7 Return
	
Label_200:
	var_59_int = 36962; // 0xc8 PushI
	var_60_bool = var_26_bool == var_59_int; // 0xc9 Eq
	if(var_60_bool == 0) goto Label_223; // 0xca JumpB
	var_61_string = ""; // 0xcb PushV
	var_61_string = "Neutral"; // 0xcc MovS
	func_144(var_27_cvector, var_61_string); // 0xcd NEW_2
	var_62_int = 535286; // 0xcf PushI
	SetMessage(var_62_int); // 0xd0 TObjFunc
	ClearReplies(); // 0xd2 TObjFunc
	var_63_int = 535287; // 0xd4 PushI
	var_64_int = 36964; // 0xd5 PushI
	var_65_int = 36963; // 0xd6 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0xd7 TObjFunc
	var_66_int = 535291; // 0xd9 PushI
	var_67_int = -1; // 0xda PushI
	var_68_int = 36967; // 0xdb PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0xdc TObjFunc
	return 0; // 0xde Return
	
Label_223:
	var_69_int = 36964; // 0xdf PushI
	var_70_bool = var_26_bool == var_69_int; // 0xe0 Eq
	if(var_70_bool == 0) goto Label_246; // 0xe1 JumpB
	var_71_string = ""; // 0xe2 PushV
	var_71_string = "Neutral"; // 0xe3 MovS
	func_144(var_27_cvector, var_71_string); // 0xe4 NEW_2
	var_72_int = 535288; // 0xe6 PushI
	SetMessage(var_72_int); // 0xe7 TObjFunc
	ClearReplies(); // 0xe9 TObjFunc
	var_73_int = 535289; // 0xeb PushI
	var_74_int = -1; // 0xec PushI
	var_75_int = 36965; // 0xed PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0xee TObjFunc
	var_76_int = 535290; // 0xf0 PushI
	var_77_int = -1; // 0xf1 PushI
	var_78_int = 36966; // 0xf2 PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0xf3 TObjFunc
	return 0; // 0xf5 Return
	
Label_246:
	var_3_string = 1; // 0xf6 TMovB
	var_79_bool = 0; // 0xf7 PushV
	func_1934(var_79_bool); // 0xf8 NEW_2
	if(var_79_bool == 0) goto Label_254; // 0xfa JumpB
	lshStopAnimation(); // 0xfb Func
	goto Label_256; // 0xfd Jump
	
Label_256:
	return 0; // 0x100 Return
	
Label_254:
	StopAnimation(); // 0xfe Func
	
Label_258:
	return 0; // 0x102 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x1af PushI
	if(var_28_int == 0) goto Label_568; // 0x1b0 JumpB
	func_1859(); // 0x1b2 NEW_2
	var_30_int = 526; // 0x1b4 PushI
	var_31_bool = var_26_bool == var_30_int; // 0x1b5 Eq
	if(var_31_bool == 0) goto Label_469; // 0x1b6 JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0x1b7 PushV
	var_32_object = var_1_object; // 0x1b8 MovT
	var_33_object = var_0_object; // 0x1b9 MovT
	func_1942(); // 0x1ba NEW_2
	var_36_string = ""; // 0x1bc PushV
	var_36_string = "Neutral"; // 0x1bd MovS
	func_408(var_27_cvector, var_36_string); // 0x1be NEW_2
	var_53_int = 500457; // 0x1c0 PushI
	SetMessage(var_53_int); // 0x1c1 TObjFunc
	ClearReplies(); // 0x1c3 TObjFunc
	var_54_int = 500458; // 0x1c5 PushI
	var_55_int = 530; // 0x1c6 PushI
	var_56_int = 527; // 0x1c7 PushI
	AddReply(var_54_int, var_55_int, var_56_int); // 0x1c8 TObjFunc
	var_57_int = 500459; // 0x1ca PushI
	var_58_int = 532; // 0x1cb PushI
	var_59_int = 528; // 0x1cc PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0x1cd TObjFunc
	var_60_int = 500460; // 0x1cf PushI
	var_61_int = 530; // 0x1d0 PushI
	var_62_int = 529; // 0x1d1 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0x1d2 TObjFunc
	return 0; // 0x1d4 Return
	
Label_469:
	var_63_int = 532; // 0x1d5 PushI
	var_64_bool = var_26_bool == var_63_int; // 0x1d6 Eq
	if(var_64_bool == 0) goto Label_492; // 0x1d7 JumpB
	var_65_string = ""; // 0x1d8 PushV
	var_65_string = "Neutral"; // 0x1d9 MovS
	func_408(var_27_cvector, var_65_string); // 0x1da NEW_2
	var_66_int = 500462; // 0x1dc PushI
	SetMessage(var_66_int); // 0x1dd TObjFunc
	ClearReplies(); // 0x1df TObjFunc
	var_67_int = 500466; // 0x1e1 PushI
	var_68_int = 538; // 0x1e2 PushI
	var_69_int = 536; // 0x1e3 PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0x1e4 TObjFunc
	var_70_int = 500467; // 0x1e6 PushI
	var_71_int = -1; // 0x1e7 PushI
	var_72_int = 537; // 0x1e8 PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0x1e9 TObjFunc
	return 0; // 0x1eb Return
	
Label_492:
	var_73_int = 538; // 0x1ec PushI
	var_74_bool = var_26_bool == var_73_int; // 0x1ed Eq
	if(var_74_bool == 0) goto Label_515; // 0x1ee JumpB
	var_75_string = ""; // 0x1ef PushV
	var_75_string = "Neutral"; // 0x1f0 MovS
	func_408(var_27_cvector, var_75_string); // 0x1f1 NEW_2
	var_76_int = 500468; // 0x1f3 PushI
	SetMessage(var_76_int); // 0x1f4 TObjFunc
	ClearReplies(); // 0x1f6 TObjFunc
	var_77_int = 500470; // 0x1f8 PushI
	var_78_int = -1; // 0x1f9 PushI
	var_79_int = 540; // 0x1fa PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0x1fb TObjFunc
	var_80_int = 500471; // 0x1fd PushI
	var_81_int = -1; // 0x1fe PushI
	var_82_int = 541; // 0x1ff PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x200 TObjFunc
	return 0; // 0x202 Return
	
Label_515:
	var_83_int = 530; // 0x203 PushI
	var_84_bool = var_26_bool == var_83_int; // 0x204 Eq
	if(var_84_bool == 0) goto Label_538; // 0x205 JumpB
	var_85_string = ""; // 0x206 PushV
	var_85_string = "Neutral"; // 0x207 MovS
	func_408(var_27_cvector, var_85_string); // 0x208 NEW_2
	var_86_int = 500461; // 0x20a PushI
	SetMessage(var_86_int); // 0x20b TObjFunc
	ClearReplies(); // 0x20d TObjFunc
	var_87_int = 500463; // 0x20f PushI
	var_88_int = 535; // 0x210 PushI
	var_89_int = 533; // 0x211 PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x212 TObjFunc
	var_90_int = 500464; // 0x214 PushI
	var_91_int = -1; // 0x215 PushI
	var_92_int = 534; // 0x216 PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x217 TObjFunc
	return 0; // 0x219 Return
	
Label_538:
	var_93_int = 535; // 0x21a PushI
	var_94_bool = var_26_bool == var_93_int; // 0x21b Eq
	if(var_94_bool == 0) goto Label_556; // 0x21c JumpB
	var_95_string = ""; // 0x21d PushV
	var_95_string = "Neutral"; // 0x21e MovS
	func_408(var_27_cvector, var_95_string); // 0x21f NEW_2
	var_96_int = 500465; // 0x221 PushI
	SetMessage(var_96_int); // 0x222 TObjFunc
	ClearReplies(); // 0x224 TObjFunc
	var_97_int = 506269; // 0x226 PushI
	var_98_int = -1; // 0x227 PushI
	var_99_int = 6939; // 0x228 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x229 TObjFunc
	return 0; // 0x22b Return
	
Label_556:
	var_3_string = 1; // 0x22c TMovB
	var_100_bool = 0; // 0x22d PushV
	func_1934(var_100_bool); // 0x22e NEW_2
	if(var_100_bool == 0) goto Label_564; // 0x230 JumpB
	lshStopAnimation(); // 0x231 Func
	goto Label_566; // 0x233 Jump
	
Label_566:
	return 0; // 0x236 Return
	
Label_564:
	StopAnimation(); // 0x234 Func
	
Label_568:
	return 0; // 0x238 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x2d6 PushI
	if(var_28_int == 0) goto Label_761; // 0x2d7 JumpB
	func_1859(); // 0x2d9 NEW_2
	var_30_int = 11026; // 0x2db PushI
	var_31_bool = var_26_bool == var_30_int; // 0x2dc Eq
	if(var_31_bool == 0) goto Label_749; // 0x2dd JumpB
	var_32_string = ""; // 0x2de PushV
	var_32_string = "Dream"; // 0x2df MovS
	func_703(var_27_cvector, var_32_string); // 0x2e0 NEW_2
	var_49_int = 510004; // 0x2e2 PushI
	SetMessage(var_49_int); // 0x2e3 TObjFunc
	ClearReplies(); // 0x2e5 TObjFunc
	var_50_int = 510015; // 0x2e7 PushI
	var_51_int = -1; // 0x2e8 PushI
	var_52_int = 11037; // 0x2e9 PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0x2ea TObjFunc
	return 0; // 0x2ec Return
	
Label_749:
	var_3_string = 1; // 0x2ed TMovB
	var_53_bool = 0; // 0x2ee PushV
	func_1934(var_53_bool); // 0x2ef NEW_2
	if(var_53_bool == 0) goto Label_757; // 0x2f1 JumpB
	lshStopAnimation(); // 0x2f2 Func
	goto Label_759; // 0x2f4 Jump
	
Label_759:
	return 0; // 0x2f7 Return
	
Label_757:
	StopAnimation(); // 0x2f5 Func
	
Label_761:
	return 0; // 0x2f9 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x3aa PushI
	if(var_28_int == 0) goto Label_1095; // 0x3ab JumpB
	func_1859(); // 0x3ad NEW_2
	var_30_int = 14011; // 0x3af PushI
	var_31_bool = var_27_cvector == var_30_int; // 0x3b0 Eq
	if(var_31_bool == 0) goto Label_951; // 0x3b1 JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0x3b2 PushV
	var_32_object = var_1_object; // 0x3b3 MovT
	var_33_object = var_0_object; // 0x3b4 MovT
	func_1936(); // 0x3b5 NEW_2
	
Label_951:
	var_36_int = 13999; // 0x3b7 PushI
	var_37_bool = var_26_bool == var_36_int; // 0x3b8 Eq
	if(var_37_bool == 0) goto Label_988; // 0x3b9 JumpB
	var_38_string = ""; // 0x3ba PushV
	var_38_string = "Suspicion"; // 0x3bb MovS
	func_915(var_27_cvector, var_38_string); // 0x3bc NEW_2
	var_55_int = 512800; // 0x3be PushI
	SetMessage(var_55_int); // 0x3bf TObjFunc
	ClearReplies(); // 0x3c1 TObjFunc
	var_56_bool = 0; // 0x3c3 PushV
	var_56_bool = 0; // 0x3c4 MovB
	var_57_bool = 0; var_58_object = Obj(); // 0x3c5 PushV
	var_58_object = var_1_object; // 0x3c6 MovT
	func_1948(var_58_object); // 0x3c7 NEW_2
	if(var_57_bool == 0) goto Label_976; // 0x3c9 JumpB
	var_65_bool = 0; var_66_object = Obj(); // 0x3ca PushV
	var_66_object = var_1_object; // 0x3cb MovT
	func_1960(var_66_object); // 0x3cc NEW_2
	if(var_65_bool == 0) goto Label_976; // 0x3ce JumpB
	var_56_bool = 1; // 0x3cf MovB
	
Label_976:
	if(var_56_bool == 0) goto Label_982; // 0x3d0 JumpB
	var_71_int = 512801; // 0x3d1 PushI
	var_72_int = 14001; // 0x3d2 PushI
	var_73_int = 14000; // 0x3d3 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x3d4 TObjFunc
	
Label_982:
	var_74_int = 512813; // 0x3d6 PushI
	var_75_int = -1; // 0x3d7 PushI
	var_76_int = 14013; // 0x3d8 PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0x3d9 TObjFunc
	return 0; // 0x3db Return
	
Label_988:
	var_77_int = 14001; // 0x3dc PushI
	var_78_bool = var_26_bool == var_77_int; // 0x3dd Eq
	if(var_78_bool == 0) goto Label_1006; // 0x3de JumpB
	var_79_string = ""; // 0x3df PushV
	var_79_string = "Suspicion"; // 0x3e0 MovS
	func_915(var_27_cvector, var_79_string); // 0x3e1 NEW_2
	var_80_int = 512802; // 0x3e3 PushI
	SetMessage(var_80_int); // 0x3e4 TObjFunc
	ClearReplies(); // 0x3e6 TObjFunc
	var_81_int = 512803; // 0x3e8 PushI
	var_82_int = 14003; // 0x3e9 PushI
	var_83_int = 14002; // 0x3ea PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x3eb TObjFunc
	return 0; // 0x3ed Return
	
Label_1006:
	var_84_int = 14003; // 0x3ee PushI
	var_85_bool = var_26_bool == var_84_int; // 0x3ef Eq
	if(var_85_bool == 0) goto Label_1029; // 0x3f0 JumpB
	var_86_string = ""; // 0x3f1 PushV
	var_86_string = "Suspicion"; // 0x3f2 MovS
	func_915(var_27_cvector, var_86_string); // 0x3f3 NEW_2
	var_87_int = 512804; // 0x3f5 PushI
	SetMessage(var_87_int); // 0x3f6 TObjFunc
	ClearReplies(); // 0x3f8 TObjFunc
	var_88_int = 512805; // 0x3fa PushI
	var_89_int = 14005; // 0x3fb PushI
	var_90_int = 14004; // 0x3fc PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0x3fd TObjFunc
	var_91_int = 512808; // 0x3ff PushI
	var_92_int = 14005; // 0x400 PushI
	var_93_int = 14007; // 0x401 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x402 TObjFunc
	return 0; // 0x404 Return
	
Label_1029:
	var_94_int = 14005; // 0x405 PushI
	var_95_bool = var_26_bool == var_94_int; // 0x406 Eq
	if(var_95_bool == 0) goto Label_1047; // 0x407 JumpB
	var_96_string = ""; // 0x408 PushV
	var_96_string = "Fear"; // 0x409 MovS
	func_915(var_27_cvector, var_96_string); // 0x40a NEW_2
	var_97_int = 512806; // 0x40c PushI
	SetMessage(var_97_int); // 0x40d TObjFunc
	ClearReplies(); // 0x40f TObjFunc
	var_98_int = 512807; // 0x411 PushI
	var_99_int = 14008; // 0x412 PushI
	var_100_int = 14006; // 0x413 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x414 TObjFunc
	return 0; // 0x416 Return
	
Label_1047:
	var_101_int = 14008; // 0x417 PushI
	var_102_bool = var_26_bool == var_101_int; // 0x418 Eq
	if(var_102_bool == 0) goto Label_1065; // 0x419 JumpB
	var_103_string = ""; // 0x41a PushV
	var_103_string = "Fear"; // 0x41b MovS
	func_915(var_27_cvector, var_103_string); // 0x41c NEW_2
	var_104_int = 512809; // 0x41e PushI
	SetMessage(var_104_int); // 0x41f TObjFunc
	ClearReplies(); // 0x421 TObjFunc
	var_105_int = 512810; // 0x423 PushI
	var_106_int = 14010; // 0x424 PushI
	var_107_int = 14009; // 0x425 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x426 TObjFunc
	return 0; // 0x428 Return
	
Label_1065:
	var_108_int = 14010; // 0x429 PushI
	var_109_bool = var_26_bool == var_108_int; // 0x42a Eq
	if(var_109_bool == 0) goto Label_1083; // 0x42b JumpB
	var_110_string = ""; // 0x42c PushV
	var_110_string = "Autizm"; // 0x42d MovS
	func_915(var_27_cvector, var_110_string); // 0x42e NEW_2
	var_111_int = 512811; // 0x430 PushI
	SetMessage(var_111_int); // 0x431 TObjFunc
	ClearReplies(); // 0x433 TObjFunc
	var_112_int = 512812; // 0x435 PushI
	var_113_int = -1; // 0x436 PushI
	var_114_int = 14011; // 0x437 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x438 TObjFunc
	return 0; // 0x43a Return
	
Label_1083:
	var_3_string = 1; // 0x43b TMovB
	var_115_bool = 0; // 0x43c PushV
	func_1934(var_115_bool); // 0x43d NEW_2
	if(var_115_bool == 0) goto Label_1091; // 0x43f JumpB
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
	func_1859(); // 0x4ed NEW_2
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
	func_1934(var_56_bool); // 0x508 NEW_2
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
	func_1866(var_72_object); // 0x578 NEW_2
	var_71_object = var_72_object; // 0x579 Mov
	func_1733(var_71_object); // 0x57b NEW_2
	
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
	func_1813(var_27_string); // 0x59b NEW_2
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
	func_1813(var_33_string); // 0x5aa NEW_2
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
	func_1989(var_44_object); // 0x5bd NEW_2
	var_524_string = ""; // 0x5bf PushV
	var_524_string = "Neutral"; // 0x5c0 MovS
	func_1813(var_524_string); // 0x5c1 NEW_2
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


func_0(var_0_object, var_409_int, var_410_object)
{
	var_412_object = Obj(); var_413_bool = 0; var_414_int = 0; var_415_bool = 0; var_416_object = Obj(); var_417_bool = 0; var_418_int = 0; var_419_bool = 0; // 0x0 PushV
	var_0_object = var_410_object; // 0x1 TMov
	var_420_bool = 0; var_421_object = Obj(); var_422_float = 0; // 0x2 PushV
	var_421_object = var_410_object; // 0x3 Mov
	var_422_float = 70.0; // 0x4 MovF
	func_1590(var_421_object, var_422_float); // 0x5 NEW_2
	var_423_bool = var_420_bool == 0; // 0x7 Not
	if(var_423_bool == 0) goto Label_11; // 0x8 JumpB
	var_409_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_416_object); // 0xb Func
	var_424_int = 0; // 0xd PushV
	func_1928(var_424_int); // 0xe NEW_2
	SetNPCName(var_424_int); // 0x10 ObjFunc
	var_425_int = 0; // 0x12 PushV
	func_1926(var_425_int); // 0x13 NEW_2
	SetNPCDescription(var_425_int); // 0x15 ObjFunc
	var_426_string = ""; // 0x17 PushV
	func_1930(var_426_string); // 0x18 NEW_2
	SetPhoto(var_426_string); // 0x1a ObjFunc
	var_427_string = ""; // 0x1c PushV
	func_1932(var_427_string); // 0x1d NEW_2
	SetPhoto2(var_427_string); // 0x1f ObjFunc
	var_428_int = 0; // 0x21 PushV
	func_1972(var_428_int); // 0x22 NEW_2
	SetPlayerName(var_428_int); // 0x24 ObjFunc
	var_418_int = -1; // 0x26 MovI
	IsOverrideActive(var_417_bool); // 0x27 Func
	var_429_bool = var_417_bool; // 0x29 Push
	if(var_429_bool == 0) goto Label_45; // 0x2a JumpB
	var_409_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_416_object); // 0x2d Func
	var_430_bool = 0; var_431_object = Obj(); // 0x2f PushV
	var_432_object = Obj(); // 0x30 PushV
	func_1866(var_432_object); // 0x31 NEW_2
	var_431_object = var_432_object; // 0x32 Mov
	func_1675(var_430_bool, var_431_object); // 0x34 NEW_2
	var_433_object = Obj(); var_434_object = Obj(); // 0x36 PushV
	var_433_object = var_410_object; // 0x37 Mov
	var_434_object = var_416_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_435_object, var_436_object, var_437_string, var_438_bool, var_433_object, var_434_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_419_bool); // 0x3d ObjFunc
	
Label_63:
	var_466_bool = var_419_bool == 0; // 0x3f Not
	if(var_466_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_419_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_467_object = Obj(); // 0x46 PushV
	var_467_object = var_410_object; // 0x47 Mov
	func_1658(); // 0x48 NEW_2
	StopDialog(var_416_object); // 0x4a Func
	GetReturnValue(var_418_int); // 0x4c ObjFunc
	var_409_int = var_418_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_259(var_0_object, var_47_int, var_48_object)
{
	var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_object = Obj(); var_55_bool = 0; var_56_int = 0; var_57_bool = 0; // 0x103 PushV
	var_0_object = var_48_object; // 0x104 TMov
	var_58_bool = 0; var_59_object = Obj(); var_60_float = 0; // 0x105 PushV
	var_59_object = var_48_object; // 0x106 Mov
	var_60_float = 70.0; // 0x107 MovF
	func_1590(var_59_object, var_60_float); // 0x108 NEW_2
	var_104_bool = var_58_bool == 0; // 0x10a Not
	if(var_104_bool == 0) goto Label_270; // 0x10b JumpB
	var_47_int = -2; // 0x10c MovI
	return 8; // 0x10d Return
	
Label_270:
	CreateDialog(var_54_object); // 0x10e Func
	var_105_int = 0; // 0x110 PushV
	func_1928(var_105_int); // 0x111 NEW_2
	SetNPCName(var_105_int); // 0x113 ObjFunc
	var_106_int = 0; // 0x115 PushV
	func_1926(var_106_int); // 0x116 NEW_2
	SetNPCDescription(var_106_int); // 0x118 ObjFunc
	var_107_string = ""; // 0x11a PushV
	func_1930(var_107_string); // 0x11b NEW_2
	SetPhoto(var_107_string); // 0x11d ObjFunc
	var_108_string = ""; // 0x11f PushV
	func_1932(var_108_string); // 0x120 NEW_2
	SetPhoto2(var_108_string); // 0x122 ObjFunc
	var_109_int = 0; // 0x124 PushV
	func_1972(var_109_int); // 0x125 NEW_2
	SetPlayerName(var_109_int); // 0x127 ObjFunc
	var_56_int = -1; // 0x129 MovI
	IsOverrideActive(var_55_bool); // 0x12a Func
	var_117_bool = var_55_bool; // 0x12c Push
	if(var_117_bool == 0) goto Label_304; // 0x12d JumpB
	var_47_int = -2; // 0x12e MovI
	return 8; // 0x12f Return
	
Label_304:
	DoDialog(var_54_object); // 0x130 Func
	var_118_bool = 0; var_119_object = Obj(); // 0x132 PushV
	var_120_object = Obj(); // 0x133 PushV
	func_1866(var_120_object); // 0x134 NEW_2
	var_119_object = var_120_object; // 0x135 Mov
	func_1675(var_118_bool, var_119_object); // 0x137 NEW_2
	var_213_object = Obj(); var_214_object = Obj(); // 0x139 PushV
	var_213_object = var_48_object; // 0x13a Mov
	var_214_object = var_54_object; // 0x13b Mov
	TaskCall(3); // 0x13c TaskCall
	func_340(var_215_object, var_216_object, var_217_string, var_218_bool, var_213_object, var_214_object); // 0x13d NEW_2
	TaskReturn(); // 0x13e TaskReturn
	IsDialogEnd(var_57_bool); // 0x140 ObjFunc
	
Label_322:
	var_269_bool = var_57_bool == 0; // 0x142 Not
	if(var_269_bool == 0) goto Label_329; // 0x143 JumpB
	sync(); // 0x144 Func
	IsDialogEnd(var_57_bool); // 0x146 ObjFunc
	goto Label_322; // 0x148 Jump
	
Label_329:
	var_270_object = Obj(); // 0x149 PushV
	var_270_object = var_48_object; // 0x14a Mov
	func_1658(); // 0x14b NEW_2
	StopDialog(var_54_object); // 0x14d Func
	GetReturnValue(var_56_int); // 0x14f ObjFunc
	var_47_int = var_56_int; // 0x151 Mov
	return 8; // 0x152 Return
}


func_1926(var_106_int)
{
	var_106_int = 515546; // 0x786 MovI
	return 0; // 0x787 Return
}


func_1928(var_105_int)
{
	var_105_int = 502871; // 0x788 MovI
	return 0; // 0x789 Return
}


func_1930(var_107_string)
{
	var_107_string = "ui/NPC_Mishka.png"; // 0x78a MovS
	return 0; // 0x78b Return
}


func_1675(var_118_bool, var_119_object)
{
	var_123_int = 0; var_124_int = 0; var_125_int = 0; var_126_int = 0; // 0x68b PushV
	var_127_string = "voice_common"; // 0x68c PushS
	GetVariable(var_127_string, var_125_int); // 0x68d Func
	var_128_int = var_125_int; // 0x68f Push
	if(var_128_int == 0) goto Label_1713; // 0x690 JumpB
	var_129_bool = 0; var_130_object = Obj(); // 0x691 PushV
	var_130_object = var_119_object; // 0x692 Mov
	func_1733(var_130_object); // 0x693 NEW_2
	var_159_bool = var_129_bool == 0; // 0x695 Not
	if(var_159_bool == 0) goto Label_1695; // 0x696 JumpB
	var_160_bool = 0; var_161_object = Obj(); // 0x697 PushV
	var_161_object = var_119_object; // 0x698 Mov
	func_1770(var_161_object); // 0x699 NEW_2
	var_195_bool = var_160_bool == 0; // 0x69b Not
	if(var_195_bool == 0) goto Label_1695; // 0x69c JumpB
	var_118_bool = 0; // 0x69d MovB
	return 4; // 0x69e Return
	
Label_1695:
	var_196_int = 2; // 0x69f PushI
	irand(var_126_int, var_196_int); // 0x6a0 Func
	var_197_int = var_126_int; // 0x6a2 Push
	if(var_197_int == 0) goto Label_1708; // 0x6a3 JumpB
	var_198_string = "voice_common"; // 0x6a4 PushS
	var_199_int = 1; // 0x6a5 PushI
	var_200_int = var_125_int + var_199_int; // 0x6a6 Add
	var_201_int = 3; // 0x6a7 PushI
	var_202_int = var_200_int / var_201_int; // 0x6a8 Mod
	SetVariable(var_198_string, var_202_int); // 0x6a9 Func
	goto Label_1712; // 0x6ab Jump
	
Label_1712:
	goto Label_1731; // 0x6b0 Jump
	
Label_1731:
	var_118_bool = 1; // 0x6c3 MovB
	return 4; // 0x6c4 Return
	
Label_1708:
	var_203_string = "voice_common"; // 0x6ac PushS
	var_204_int = 0; // 0x6ad PushI
	SetVariable(var_203_string, var_204_int); // 0x6ae Func
	
Label_1713:
	var_205_bool = 0; var_206_object = Obj(); // 0x6b1 PushV
	var_206_object = var_119_object; // 0x6b2 Mov
	func_1770(var_206_object); // 0x6b3 NEW_2
	var_207_bool = var_205_bool == 0; // 0x6b5 Not
	if(var_207_bool == 0) goto Label_1727; // 0x6b6 JumpB
	var_208_bool = 0; var_209_object = Obj(); // 0x6b7 PushV
	var_209_object = var_119_object; // 0x6b8 Mov
	func_1733(var_209_object); // 0x6b9 NEW_2
	var_210_bool = var_208_bool == 0; // 0x6bb Not
	if(var_210_bool == 0) goto Label_1727; // 0x6bc JumpB
	var_118_bool = 0; // 0x6bd MovB
	return 4; // 0x6be Return
	
Label_1727:
	var_211_string = "voice_common"; // 0x6bf PushS
	var_212_int = 1; // 0x6c0 PushI
	SetVariable(var_211_string, var_212_int); // 0x6c1 Func
}


func_1932(var_108_string)
{
	var_108_string = "ui/NPC_Mishka_b.png"; // 0x78c MovS
	return 0; // 0x78d Return
}


func_650(var_0_object, var_1_object, var_2_object, var_3_string, var_305_object, var_306_object)
{
	var_0_object = var_306_object; // 0x28b TMov
	var_1_object = var_305_object; // 0x28c TMov
	var_3_string = 0; // 0x28d TMovB
	var_311_int = 1; // 0x28e PushI
	if(var_311_int == 0) goto Label_673; // 0x28f JumpB
	var_312_string = ""; // 0x290 PushV
	var_312_string = "Dream"; // 0x291 MovS
	func_703(var_306_object, var_312_string); // 0x292 NEW_2
	var_320_int = 510004; // 0x294 PushI
	SetMessage(var_320_int); // 0x295 TObjFunc
	ClearReplies(); // 0x297 TObjFunc
	var_321_int = 510015; // 0x299 PushI
	var_322_int = -1; // 0x29a PushI
	var_323_int = 11037; // 0x29b PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x29c TObjFunc
	goto Label_673; // 0x29e Jump
	
Label_673:
	var_324_bool = 0; // 0x2a1 PushV
	func_1934(var_324_bool); // 0x2a2 NEW_2
	if(var_324_bool == 0) goto Label_688; // 0x2a4 JumpB
	
Label_677:
	lshWaitForAnimEnd(); // 0x2a5 Func
	var_325_string = var_3_string; // 0x2a7 PushT
	if(var_325_string == 0) goto Label_682; // 0x2a8 JumpB
	goto Label_687; // 0x2a9 Jump
	
Label_687:
	goto Label_702; // 0x2af Jump
	
Label_702:
	return 0; // 0x2be Return
	
Label_682:
	var_326_string = ""; // 0x2aa PushV
	var_326_string = var_2_object; // 0x2ab MovT
	func_1813(var_326_string); // 0x2ac NEW_2
	goto Label_677; // 0x2ae Jump
	
Label_688:
	var_327_string = "all"; // 0x2b0 PushS
	var_328_string = "idle"; // 0x2b1 PushS
	PlayAnimation(var_327_string, var_328_string); // 0x2b2 Func
	
Label_692:
	WaitForAnimEnd(); // 0x2b4 Func
	var_329_string = var_3_string; // 0x2b6 PushT
	if(var_329_string == 0) goto Label_697; // 0x2b7 JumpB
	goto Label_702; // 0x2b8 Jump
	
Label_697:
	var_330_string = "all"; // 0x2b9 PushS
	var_331_string = "idle"; // 0x2ba PushS
	PlayAnimation(var_330_string, var_331_string); // 0x2bb Func
	goto Label_692; // 0x2bd Jump
}


func_1934(var_100_bool)
{
	var_100_bool = 1; // 0x78e MovB
	return 0; // 0x78f Return
}


func_1551(var_65_bool)
{
	var_65_bool = 1; // 0x60f MovB
	return 0; // 0x610 Return
}


func_144(var_2_object, var_440_string)
{
	var_441_bool = 0; // 0x91 PushV
	func_1934(var_441_bool); // 0x92 NEW_2
	var_442_bool = var_441_bool == 0; // 0x94 Not
	if(var_442_bool == 0) goto Label_151; // 0x95 JumpB
	return 0; // 0x96 Return
	
Label_151:
	var_443_bool = var_440_string == var_2_object; // 0x97 Eq
	if(var_443_bool == 0) goto Label_154; // 0x98 JumpB
	return 0; // 0x99 Return
	
Label_154:
	var_444_string = ""; var_445_bool = 0; // 0x9a PushV
	var_444_string = var_440_string; // 0x9b Mov
	var_446_string = ""; // 0x9c PushS
	var_447_bool = var_440_string == var_446_string; // 0x9d Eq
	if(var_447_bool == 0) goto Label_161; // 0x9e JumpB
	var_445_bool = 0; // 0x9f MovB
	goto Label_162; // 0xa0 Jump
	
Label_162:
	func_1829(var_444_string, var_445_bool); // 0xa2 NEW_2
	var_2_object = var_440_string; // 0xa4 TMov
	return 0; // 0xa5 Return
	
Label_161:
	var_445_bool = 1; // 0xa1 MovB
}


func_1936()
{
	var_34_string = "ood6Mishka1"; // 0x791 PushS
	var_35_int = 1; // 0x792 PushI
	SetVariable(var_34_string, var_35_int); // 0x793 Func
	return 0; // 0x795 Return
}


func_1553()
{
	StopAnimation(); // 0x611 Func
	StopGroup0(); // 0x613 Func
	return 0; // 0x615 Return
}


func_915(var_2_object, var_367_string)
{
	var_368_bool = 0; // 0x394 PushV
	func_1934(var_368_bool); // 0x395 NEW_2
	var_369_bool = var_368_bool == 0; // 0x397 Not
	if(var_369_bool == 0) goto Label_922; // 0x398 JumpB
	return 0; // 0x399 Return
	
Label_922:
	var_370_bool = var_367_string == var_2_object; // 0x39a Eq
	if(var_370_bool == 0) goto Label_925; // 0x39b JumpB
	return 0; // 0x39c Return
	
Label_925:
	var_371_string = ""; var_372_bool = 0; // 0x39d PushV
	var_371_string = var_367_string; // 0x39e Mov
	var_373_string = ""; // 0x39f PushS
	var_374_bool = var_367_string == var_373_string; // 0x3a0 Eq
	if(var_374_bool == 0) goto Label_932; // 0x3a1 JumpB
	var_372_bool = 0; // 0x3a2 MovB
	goto Label_933; // 0x3a3 Jump
	
Label_933:
	func_1829(var_371_string, var_372_bool); // 0x3a5 NEW_2
	var_2_object = var_367_string; // 0x3a7 TMov
	return 0; // 0x3a8 Return
	
Label_932:
	var_372_bool = 1; // 0x3a4 MovB
}


func_1813(var_253_string)
{
	var_254_bool = 0; var_255_float = 0; var_256_float = 0; var_257_bool = 0; var_258_float = 0; var_259_float = 0; // 0x715 PushV
	lshHasAnimation(var_257_bool, var_253_string); // 0x716 Func
	var_260_bool = var_257_bool; // 0x718 Push
	if(var_260_bool == 0) goto Label_1824; // 0x719 JumpB
	lshGetAnimTimes(var_253_string, var_258_float, var_259_float); // 0x71a Func
	var_261_bool = 0; // 0x71c PushB
	lshPlayAnimation(var_258_float, var_259_float, var_261_bool); // 0x71d Func
	goto Label_1828; // 0x71f Jump
	
Label_1828:
	return 6; // 0x724 Return
	
Label_1824:
	var_262_string = "Can't find lsh animation : "; // 0x720 PushS
	var_263_int = var_262_string + var_253_string; // 0x721 Add
	Trace(var_263_int); // 0x722 Func
}


func_1942()
{
	var_222_string = "KnowMishka"; // 0x797 PushS
	var_223_int = 1; // 0x798 PushI
	SetVariable(var_222_string, var_223_int); // 0x799 Func
	return 0; // 0x79b Return
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


func_408(var_2_object, var_224_string)
{
	var_225_bool = 0; // 0x199 PushV
	func_1934(var_225_bool); // 0x19a NEW_2
	var_226_bool = var_225_bool == 0; // 0x19c Not
	if(var_226_bool == 0) goto Label_415; // 0x19d JumpB
	return 0; // 0x19e Return
	
Label_415:
	var_227_bool = var_224_string == var_2_object; // 0x19f Eq
	if(var_227_bool == 0) goto Label_418; // 0x1a0 JumpB
	return 0; // 0x1a1 Return
	
Label_418:
	var_228_string = ""; var_229_bool = 0; // 0x1a2 PushV
	var_228_string = var_224_string; // 0x1a3 Mov
	var_230_string = ""; // 0x1a4 PushS
	var_231_bool = var_224_string == var_230_string; // 0x1a5 Eq
	if(var_231_bool == 0) goto Label_425; // 0x1a6 JumpB
	var_229_bool = 0; // 0x1a7 MovB
	goto Label_426; // 0x1a8 Jump
	
Label_426:
	func_1829(var_228_string, var_229_bool); // 0x1aa NEW_2
	var_2_object = var_224_string; // 0x1ac TMov
	return 0; // 0x1ad Return
	
Label_425:
	var_229_bool = 1; // 0x1a9 MovB
}


func_1177(var_0_object, var_1_object, var_2_object, var_3_string, var_492_object, var_493_object)
{
	var_0_object = var_493_object; // 0x49a TMov
	var_1_object = var_492_object; // 0x49b TMov
	var_3_string = 0; // 0x49c TMovB
	var_498_int = 1; // 0x49d PushI
	if(var_498_int == 0) goto Label_1205; // 0x49e JumpB
	var_499_string = ""; // 0x49f PushV
	var_499_string = "Neutral"; // 0x4a0 MovS
	func_1235(var_493_object, var_499_string); // 0x4a1 NEW_2
	var_507_int = 540548; // 0x4a3 PushI
	SetMessage(var_507_int); // 0x4a4 TObjFunc
	ClearReplies(); // 0x4a6 TObjFunc
	var_508_int = 540549; // 0x4a8 PushI
	var_509_int = -1; // 0x4a9 PushI
	var_510_int = 42558; // 0x4aa PushI
	AddReply(var_508_int, var_509_int, var_510_int); // 0x4ab TObjFunc
	var_511_int = 540797; // 0x4ad PushI
	var_512_int = -1; // 0x4ae PushI
	var_513_int = 42846; // 0x4af PushI
	AddReply(var_511_int, var_512_int, var_513_int); // 0x4b0 TObjFunc
	goto Label_1205; // 0x4b2 Jump
	
Label_1205:
	var_514_bool = 0; // 0x4b5 PushV
	func_1934(var_514_bool); // 0x4b6 NEW_2
	if(var_514_bool == 0) goto Label_1220; // 0x4b8 JumpB
	
Label_1209:
	lshWaitForAnimEnd(); // 0x4b9 Func
	var_515_string = var_3_string; // 0x4bb PushT
	if(var_515_string == 0) goto Label_1214; // 0x4bc JumpB
	goto Label_1219; // 0x4bd Jump
	
Label_1219:
	goto Label_1234; // 0x4c3 Jump
	
Label_1234:
	return 0; // 0x4d2 Return
	
Label_1214:
	var_516_string = ""; // 0x4be PushV
	var_516_string = var_2_object; // 0x4bf MovT
	func_1813(var_516_string); // 0x4c0 NEW_2
	goto Label_1209; // 0x4c2 Jump
	
Label_1220:
	var_517_string = "all"; // 0x4c4 PushS
	var_518_string = "idle"; // 0x4c5 PushS
	PlayAnimation(var_517_string, var_518_string); // 0x4c6 Func
	
Label_1224:
	WaitForAnimEnd(); // 0x4c8 Func
	var_519_string = var_3_string; // 0x4ca PushT
	if(var_519_string == 0) goto Label_1229; // 0x4cb JumpB
	goto Label_1234; // 0x4cc Jump
	
Label_1229:
	var_520_string = "all"; // 0x4cd PushS
	var_521_string = "idle"; // 0x4ce PushS
	PlayAnimation(var_520_string, var_521_string); // 0x4cf Func
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


func_1658()
{
	var_271_bool = 0; var_272_bool = 0; // 0x67a PushV
	CameraSwitchToNormal(); // 0x67b Func
	var_273_bool = 0; // 0x67d PushV
	func_1934(var_273_bool); // 0x67e NEW_2
	if(var_273_bool == 0) goto Label_1666; // 0x680 JumpB
	goto Label_1674; // 0x681 Jump
	
Label_1674:
	return 2; // 0x68a Return
	
Label_1666:
	var_274_string = "head"; // 0x682 PushS
	HasAnimationTrack(var_272_bool, var_274_string); // 0x683 Func
	var_275_bool = var_272_bool; // 0x685 Push
	if(var_275_bool == 0) goto Label_1674; // 0x686 JumpB
	var_276_string = "head"; // 0x687 PushS
	UnlookAsync(var_276_string); // 0x688 Func
}


func_1948(var_377_bool)
{
	var_379_int = 0; var_380_string = ""; // 0x79d PushV
	var_380_string = "d6q01"; // 0x79e MovS
	func_1882(var_379_int, var_380_string); // 0x79f NEW_2
	var_383_int = 4; // 0x7a1 PushI
	var_384_bool = var_379_int == var_383_int; // 0x7a2 Eq
	if(var_384_bool == 0) goto Label_1958; // 0x7a3 JumpB
	var_377_bool = 1; // 0x7a4 MovB
	return 0; // 0x7a5 Return
	
Label_1958:
	var_377_bool = 0; // 0x7a6 MovB
	return 0; // 0x7a7 Return
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


func_1829(var_228_string, var_229_bool)
{
	var_232_bool = 0; var_233_float = 0; var_234_float = 0; var_235_bool = 0; var_236_float = 0; var_237_float = 0; // 0x725 PushV
	lshHasAnimation(var_235_bool, var_228_string); // 0x726 Func
	var_238_bool = var_235_bool; // 0x728 Push
	if(var_238_bool == 0) goto Label_1839; // 0x729 JumpB
	lshGetAnimTimes(var_228_string, var_236_float, var_237_float); // 0x72a Func
	lshPlayAnimation(var_236_float, var_237_float, var_229_bool); // 0x72c Func
	goto Label_1843; // 0x72e Jump
	
Label_1843:
	return 6; // 0x733 Return
	
Label_1839:
	var_239_string = "Can't find lsh animation : "; // 0x72f PushS
	var_240_int = var_239_string + var_228_string; // 0x730 Add
	Trace(var_240_int); // 0x731 Func
}


func_1960(var_385_bool)
{
	var_387_int = 0; var_388_string = ""; // 0x7a9 PushV
	var_388_string = "ood6Mishka1"; // 0x7aa MovS
	func_1882(var_387_int, var_388_string); // 0x7ab NEW_2
	var_389_int = 0; // 0x7ad PushI
	var_390_bool = var_387_int == var_389_int; // 0x7ae Eq
	if(var_390_bool == 0) goto Label_1970; // 0x7af JumpB
	var_385_bool = 1; // 0x7b0 MovB
	return 0; // 0x7b1 Return
	
Label_1970:
	var_385_bool = 0; // 0x7b2 MovB
	return 0; // 0x7b3 Return
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


func_1585(var_27_bool)
{
	var_28_bool = 0; var_29_bool = 0; // 0x631 PushV
	IsLoaded(var_29_bool); // 0x632 Func
	var_27_bool = var_29_bool; // 0x634 Mov
	return 2; // 0x635 Return
}


func_1972(var_109_int)
{
	var_110_int = 0; var_111_int = 0; // 0x7b4 PushV
	var_112_string = "branch"; // 0x7b5 PushS
	GetVariable(var_112_string, var_111_int); // 0x7b6 Func
	var_113_int = 0; // 0x7b8 PushI
	var_114_bool = var_111_int == var_113_int; // 0x7b9 Eq
	if(var_114_bool == 0) goto Label_1982; // 0x7ba JumpB
	var_109_int = 1; // 0x7bb MovI
	return 2; // 0x7bc Return
	
Label_1982:
	var_115_int = 1; // 0x7be PushI
	var_116_bool = var_111_int == var_115_int; // 0x7bf Eq
	if(var_116_bool == 0) goto Label_1987; // 0x7c0 JumpB
	var_109_int = 2; // 0x7c1 MovI
	return 2; // 0x7c2 Return
	
Label_1987:
	var_109_int = 3; // 0x7c3 MovI
	return 2; // 0x7c4 Return
}


func_1844(var_152_bool, var_153_string)
{
	var_154_bool = 0; var_155_bool = 0; // 0x734 PushV
	var_156_bool = 0; // 0x735 PushV
	func_1934(var_156_bool); // 0x736 NEW_2
	if(var_156_bool == 0) goto Label_1857; // 0x738 JumpB
	lshHasSpeech(var_155_bool, var_153_string); // 0x739 Func
	var_157_bool = var_155_bool; // 0x73b Push
	if(var_157_bool == 0) goto Label_1857; // 0x73c JumpB
	lshPlaySpeech(var_153_string); // 0x73d Func
	var_152_bool = 1; // 0x73f MovB
	return 2; // 0x740 Return
	
Label_1857:
	var_152_bool = 0; // 0x741 MovB
	return 2; // 0x742 Return
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
	func_1872(var_85_cvector, var_86_cvector); // 0x651 NEW_2
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
	CameraTransit(var_76_cvector, var_74_cvector); // 0x661 Func
	var_98_float = GetByIndex(var_75_cvector, 0); // 0x663 PushE
	var_99_float = GetByIndex(var_75_cvector, 2); // 0x664 PushE
	Rotate(var_98_float, var_99_float); // 0x665 Func
	var_100_bool = 0; // 0x667 PushV
	func_1934(var_100_bool); // 0x668 NEW_2
	if(var_100_bool == 0) goto Label_1644; // 0x66a JumpB
	goto Label_1652; // 0x66b Jump
	
Label_1652:
	CameraWaitForPlayFinish(); // 0x674 Func
	ResumeWorld(); // 0x676 Func
	var_58_bool = 1; // 0x678 MovB
	return 18; // 0x679 Return
	
Label_1644:
	var_101_string = "head"; // 0x66c PushS
	HasAnimationTrack(var_78_bool, var_101_string); // 0x66d Func
	var_102_bool = var_78_bool; // 0x66f Push
	if(var_102_bool == 0) goto Label_1652; // 0x670 JumpB
	var_103_string = "head"; // 0x671 PushS
	LookAsyncCamera(var_103_string); // 0x672 Func
}


func_1335(var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0); // 0x537 PushE
	var_104_float = GetByIndex(var_0_object, 2); // 0x538 PushE
	RotateAsync(var_103_float, var_104_float); // 0x539 Func
	return 0; // 0x53b Return
}


func_569(var_0_object, var_281_int, var_282_object)
{
	var_284_object = Obj(); var_285_bool = 0; var_286_int = 0; var_287_bool = 0; var_288_object = Obj(); var_289_bool = 0; var_290_int = 0; var_291_bool = 0; // 0x239 PushV
	var_0_object = var_282_object; // 0x23a TMov
	var_292_bool = 0; var_293_object = Obj(); var_294_float = 0; // 0x23b PushV
	var_293_object = var_282_object; // 0x23c Mov
	var_294_float = 70.0; // 0x23d MovF
	func_1590(var_293_object, var_294_float); // 0x23e NEW_2
	var_295_bool = var_292_bool == 0; // 0x240 Not
	if(var_295_bool == 0) goto Label_580; // 0x241 JumpB
	var_281_int = -2; // 0x242 MovI
	return 8; // 0x243 Return
	
Label_580:
	CreateDialog(var_288_object); // 0x244 Func
	var_296_int = 0; // 0x246 PushV
	func_1928(var_296_int); // 0x247 NEW_2
	SetNPCName(var_296_int); // 0x249 ObjFunc
	var_297_int = 0; // 0x24b PushV
	func_1926(var_297_int); // 0x24c NEW_2
	SetNPCDescription(var_297_int); // 0x24e ObjFunc
	var_298_string = ""; // 0x250 PushV
	func_1930(var_298_string); // 0x251 NEW_2
	SetPhoto(var_298_string); // 0x253 ObjFunc
	var_299_string = ""; // 0x255 PushV
	func_1932(var_299_string); // 0x256 NEW_2
	SetPhoto2(var_299_string); // 0x258 ObjFunc
	var_300_int = 0; // 0x25a PushV
	func_1972(var_300_int); // 0x25b NEW_2
	SetPlayerName(var_300_int); // 0x25d ObjFunc
	var_290_int = -1; // 0x25f MovI
	IsOverrideActive(var_289_bool); // 0x260 Func
	var_301_bool = var_289_bool; // 0x262 Push
	if(var_301_bool == 0) goto Label_614; // 0x263 JumpB
	var_281_int = -2; // 0x264 MovI
	return 8; // 0x265 Return
	
Label_614:
	DoDialog(var_288_object); // 0x266 Func
	var_302_bool = 0; var_303_object = Obj(); // 0x268 PushV
	var_304_object = Obj(); // 0x269 PushV
	func_1866(var_304_object); // 0x26a NEW_2
	var_303_object = var_304_object; // 0x26b Mov
	func_1675(var_302_bool, var_303_object); // 0x26d NEW_2
	var_305_object = Obj(); var_306_object = Obj(); // 0x26f PushV
	var_305_object = var_282_object; // 0x270 Mov
	var_306_object = var_288_object; // 0x271 Mov
	TaskCall(5); // 0x272 TaskCall
	func_650(var_307_object, var_308_object, var_309_string, var_310_bool, var_305_object, var_306_object); // 0x273 NEW_2
	TaskReturn(); // 0x274 TaskReturn
	IsDialogEnd(var_291_bool); // 0x276 ObjFunc
	
Label_632:
	var_332_bool = var_291_bool == 0; // 0x278 Not
	if(var_332_bool == 0) goto Label_639; // 0x279 JumpB
	sync(); // 0x27a Func
	IsDialogEnd(var_291_bool); // 0x27c ObjFunc
	goto Label_632; // 0x27e Jump
	
Label_639:
	var_333_object = Obj(); // 0x27f PushV
	var_333_object = var_282_object; // 0x280 Mov
	func_1658(); // 0x281 NEW_2
	StopDialog(var_288_object); // 0x283 Func
	GetReturnValue(var_290_int); // 0x285 ObjFunc
	var_281_int = var_290_int; // 0x287 Mov
	return 8; // 0x288 Return
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


func_703(var_2_object, var_312_string)
{
	var_313_bool = 0; // 0x2c0 PushV
	func_1934(var_313_bool); // 0x2c1 NEW_2
	var_314_bool = var_313_bool == 0; // 0x2c3 Not
	if(var_314_bool == 0) goto Label_710; // 0x2c4 JumpB
	return 0; // 0x2c5 Return
	
Label_710:
	var_315_bool = var_312_string == var_2_object; // 0x2c6 Eq
	if(var_315_bool == 0) goto Label_713; // 0x2c7 JumpB
	return 0; // 0x2c8 Return
	
Label_713:
	var_316_string = ""; var_317_bool = 0; // 0x2c9 PushV
	var_316_string = var_312_string; // 0x2ca Mov
	var_318_string = ""; // 0x2cb PushS
	var_319_bool = var_312_string == var_318_string; // 0x2cc Eq
	if(var_319_bool == 0) goto Label_720; // 0x2cd JumpB
	var_317_bool = 0; // 0x2ce MovB
	goto Label_721; // 0x2cf Jump
	
Label_721:
	func_1829(var_316_string, var_317_bool); // 0x2d1 NEW_2
	var_2_object = var_312_string; // 0x2d3 TMov
	return 0; // 0x2d4 Return
	
Label_720:
	var_317_bool = 1; // 0x2d0 MovB
}


func_1859()
{
	var_29_bool = 0; // 0x743 PushV
	func_1934(var_29_bool); // 0x744 NEW_2
	if(var_29_bool == 0) goto Label_1865; // 0x746 JumpB
	lshStopSpeech(); // 0x747 Func
	
Label_1865:
	return 0; // 0x749 Return
}


func_1733(var_129_bool)
{
	var_131_string = ""; var_132_int = 0; var_133_bool = 0; var_134_int = 0; var_135_string = ""; var_136_string = ""; var_137_int = 0; var_138_bool = 0; var_139_int = 0; var_140_string = ""; // 0x6c5 PushV
	var_136_string = "c"; // 0x6c6 MovS
	var_137_int = 0; // 0x6c7 MovI
	
Label_1736:
	var_141_int = 1; // 0x6c8 PushI
	if(var_141_int == 0) goto Label_1749; // 0x6c9 JumpB
	var_142_int = 1; // 0x6ca PushI
	var_143_int = var_137_int + var_142_int; // 0x6cb Add
	var_144_int = var_136_string + var_143_int; // 0x6cc Add
	HasProperty(var_144_int, var_138_bool); // 0x6cd ObjFunc
	var_145_bool = var_138_bool == 0; // 0x6cf Not
	if(var_145_bool == 0) goto Label_1746; // 0x6d0 JumpB
	goto Label_1749; // 0x6d1 Jump
	
Label_1749:
	var_146_bool = var_137_int == 0; // 0x6d5 Not
	if(var_146_bool == 0) goto Label_1753; // 0x6d6 JumpB
	var_129_bool = 0; // 0x6d7 MovB
	return 10; // 0x6d8 Return
	
Label_1753:
	var_139_int = 0; // 0x6d9 MovI
	var_147_int = 1; // 0x6da PushI
	var_148_bool = var_137_int > var_147_int; // 0x6db GT
	if(var_148_bool == 0) goto Label_1759; // 0x6dc JumpB
	irand(var_139_int, var_137_int); // 0x6dd Func
	
Label_1759:
	var_149_int = 1; // 0x6df PushI
	var_150_int = var_139_int + var_149_int; // 0x6e0 Add
	var_151_int = var_136_string + var_150_int; // 0x6e1 Add
	GetProperty(var_151_int, var_140_string); // 0x6e2 ObjFunc
	var_152_bool = 0; var_153_string = ""; // 0x6e4 PushV
	var_153_string = var_140_string; // 0x6e5 Mov
	func_1844(var_152_bool, var_153_string); // 0x6e6 NEW_2
	var_129_bool = var_152_bool; // 0x6e7 Mov
	return 10; // 0x6e9 Return
	
Label_1746:
	var_158_int = 1; // 0x6d2 PushI
	var_137_int = var_137_int + var_158_int; // 0x6d3 Add2
	goto Label_1736; // 0x6d4 Jump
}


func_1989(var_44_object)
{
	var_45_bool = GlobalVars[1]; // 0x7c6 PushGE
	var_46_bool = var_45_bool == 0; // 0x7c7 Not
	if(var_46_bool == 0) goto Label_2002; // 0x7c8 JumpB
	var_47_int = 0; var_48_object = Obj(); // 0x7c9 PushV
	var_48_object = var_44_object; // 0x7ca Mov
	TaskCall(2); // 0x7cb TaskCall
	func_259(var_49_object, var_47_int, var_48_object); // 0x7cc NEW_2
	TaskReturn(); // 0x7cd TaskReturn
	var_277_bool = GlobalVars[1]; // 0x7cf PushGE
	var_277_bool = 1; // 0x7d0 MovB
	GlobalVars[1] = var_277_bool; // 0x7d1 PopGE
	
Label_2002:
	var_278_bool = 0; var_279_int = 0; // 0x7d2 PushV
	var_279_int = 3; // 0x7d3 MovI
	func_1896(var_278_bool, var_279_int); // 0x7d4 NEW_2
	if(var_278_bool == 0) goto Label_2014; // 0x7d6 JumpB
	var_281_int = 0; var_282_object = Obj(); // 0x7d7 PushV
	var_282_object = var_44_object; // 0x7d8 Mov
	TaskCall(4); // 0x7d9 TaskCall
	func_569(var_283_object, var_281_int, var_282_object); // 0x7da NEW_2
	TaskReturn(); // 0x7db TaskReturn
	return 0; // 0x7dd Return
	
Label_2014:
	var_334_bool = 0; var_335_int = 0; // 0x7de PushV
	var_335_int = 6; // 0x7df MovI
	func_1896(var_334_bool, var_335_int); // 0x7e0 NEW_2
	if(var_334_bool == 0) goto Label_2026; // 0x7e2 JumpB
	var_336_int = 0; var_337_object = Obj(); // 0x7e3 PushV
	var_337_object = var_44_object; // 0x7e4 Mov
	TaskCall(6); // 0x7e5 TaskCall
	func_762(var_338_object, var_336_int, var_337_object); // 0x7e6 NEW_2
	TaskReturn(); // 0x7e7 TaskReturn
	return 0; // 0x7e9 Return
	
Label_2026:
	var_407_bool = 0; var_408_int = 0; // 0x7ea PushV
	var_408_int = 12; // 0x7eb MovI
	func_1896(var_407_bool, var_408_int); // 0x7ec NEW_2
	if(var_407_bool == 0) goto Label_2038; // 0x7ee JumpB
	var_409_int = 0; var_410_object = Obj(); // 0x7ef PushV
	var_410_object = var_44_object; // 0x7f0 Mov
	TaskCall(0); // 0x7f1 TaskCall
	func_0(var_411_object, var_409_int, var_410_object); // 0x7f2 NEW_2
	TaskReturn(); // 0x7f3 TaskReturn
	return 0; // 0x7f5 Return
	
Label_2038:
	var_468_int = 0; var_469_object = Obj(); // 0x7f6 PushV
	var_469_object = var_44_object; // 0x7f7 Mov
	TaskCall(8); // 0x7f8 TaskCall
	func_1096(var_470_object, var_468_int, var_469_object); // 0x7f9 NEW_2
	TaskReturn(); // 0x7fa TaskReturn
	return 0; // 0x7fc Return
}


func_1096(var_0_object, var_468_int, var_469_object)
{
	var_471_object = Obj(); var_472_bool = 0; var_473_int = 0; var_474_bool = 0; var_475_object = Obj(); var_476_bool = 0; var_477_int = 0; var_478_bool = 0; // 0x448 PushV
	var_0_object = var_469_object; // 0x449 TMov
	var_479_bool = 0; var_480_object = Obj(); var_481_float = 0; // 0x44a PushV
	var_480_object = var_469_object; // 0x44b Mov
	var_481_float = 70.0; // 0x44c MovF
	func_1590(var_480_object, var_481_float); // 0x44d NEW_2
	var_482_bool = var_479_bool == 0; // 0x44f Not
	if(var_482_bool == 0) goto Label_1107; // 0x450 JumpB
	var_468_int = -2; // 0x451 MovI
	return 8; // 0x452 Return
	
Label_1107:
	CreateDialog(var_475_object); // 0x453 Func
	var_483_int = 0; // 0x455 PushV
	func_1928(var_483_int); // 0x456 NEW_2
	SetNPCName(var_483_int); // 0x458 ObjFunc
	var_484_int = 0; // 0x45a PushV
	func_1926(var_484_int); // 0x45b NEW_2
	SetNPCDescription(var_484_int); // 0x45d ObjFunc
	var_485_string = ""; // 0x45f PushV
	func_1930(var_485_string); // 0x460 NEW_2
	SetPhoto(var_485_string); // 0x462 ObjFunc
	var_486_string = ""; // 0x464 PushV
	func_1932(var_486_string); // 0x465 NEW_2
	SetPhoto2(var_486_string); // 0x467 ObjFunc
	var_487_int = 0; // 0x469 PushV
	func_1972(var_487_int); // 0x46a NEW_2
	SetPlayerName(var_487_int); // 0x46c ObjFunc
	var_477_int = -1; // 0x46e MovI
	IsOverrideActive(var_476_bool); // 0x46f Func
	var_488_bool = var_476_bool; // 0x471 Push
	if(var_488_bool == 0) goto Label_1141; // 0x472 JumpB
	var_468_int = -2; // 0x473 MovI
	return 8; // 0x474 Return
	
Label_1141:
	DoDialog(var_475_object); // 0x475 Func
	var_489_bool = 0; var_490_object = Obj(); // 0x477 PushV
	var_491_object = Obj(); // 0x478 PushV
	func_1866(var_491_object); // 0x479 NEW_2
	var_490_object = var_491_object; // 0x47a Mov
	func_1675(var_489_bool, var_490_object); // 0x47c NEW_2
	var_492_object = Obj(); var_493_object = Obj(); // 0x47e PushV
	var_492_object = var_469_object; // 0x47f Mov
	var_493_object = var_475_object; // 0x480 Mov
	TaskCall(9); // 0x481 TaskCall
	func_1177(var_494_object, var_495_object, var_496_string, var_497_bool, var_492_object, var_493_object); // 0x482 NEW_2
	TaskReturn(); // 0x483 TaskReturn
	IsDialogEnd(var_478_bool); // 0x485 ObjFunc
	
Label_1159:
	var_522_bool = var_478_bool == 0; // 0x487 Not
	if(var_522_bool == 0) goto Label_1166; // 0x488 JumpB
	sync(); // 0x489 Func
	IsDialogEnd(var_478_bool); // 0x48b ObjFunc
	goto Label_1159; // 0x48d Jump
	
Label_1166:
	var_523_object = Obj(); // 0x48e PushV
	var_523_object = var_469_object; // 0x48f Mov
	func_1658(); // 0x490 NEW_2
	StopDialog(var_475_object); // 0x492 Func
	GetReturnValue(var_477_int); // 0x494 ObjFunc
	var_468_int = var_477_int; // 0x496 Mov
	return 8; // 0x497 Return
}


func_1866(var_120_object)
{
	var_121_object = Obj(); var_122_object = Obj(); // 0x74a PushV
	self(var_122_object); // 0x74b Func
	var_120_object = var_122_object; // 0x74d Mov
	return 2; // 0x74e Return
}


func_843(var_0_object, var_1_object, var_2_object, var_3_string, var_360_object, var_361_object)
{
	var_0_object = var_361_object; // 0x34c TMov
	var_1_object = var_360_object; // 0x34d TMov
	var_3_string = 0; // 0x34e TMovB
	var_366_int = 1; // 0x34f PushI
	if(var_366_int == 0) goto Label_885; // 0x350 JumpB
	var_367_string = ""; // 0x351 PushV
	var_367_string = "Suspicion"; // 0x352 MovS
	func_915(var_361_object, var_367_string); // 0x353 NEW_2
	var_375_int = 512800; // 0x355 PushI
	SetMessage(var_375_int); // 0x356 TObjFunc
	ClearReplies(); // 0x358 TObjFunc
	var_376_bool = 0; // 0x35a PushV
	var_376_bool = 0; // 0x35b MovB
	var_377_bool = 0; var_378_object = Obj(); // 0x35c PushV
	var_378_object = var_1_object; // 0x35d MovT
	func_1948(var_378_object); // 0x35e NEW_2
	if(var_377_bool == 0) goto Label_871; // 0x360 JumpB
	var_385_bool = 0; var_386_object = Obj(); // 0x361 PushV
	var_386_object = var_1_object; // 0x362 MovT
	func_1960(var_386_object); // 0x363 NEW_2
	if(var_385_bool == 0) goto Label_871; // 0x365 JumpB
	var_376_bool = 1; // 0x366 MovB
	
Label_871:
	if(var_376_bool == 0) goto Label_877; // 0x367 JumpB
	var_391_int = 512801; // 0x368 PushI
	var_392_int = 14001; // 0x369 PushI
	var_393_int = 14000; // 0x36a PushI
	AddReply(var_391_int, var_392_int, var_393_int); // 0x36b TObjFunc
	
Label_877:
	var_394_int = 512813; // 0x36d PushI
	var_395_int = -1; // 0x36e PushI
	var_396_int = 14013; // 0x36f PushI
	AddReply(var_394_int, var_395_int, var_396_int); // 0x370 TObjFunc
	goto Label_885; // 0x372 Jump
	
Label_885:
	var_397_bool = 0; // 0x375 PushV
	func_1934(var_397_bool); // 0x376 NEW_2
	if(var_397_bool == 0) goto Label_900; // 0x378 JumpB
	
Label_889:
	lshWaitForAnimEnd(); // 0x379 Func
	var_398_string = var_3_string; // 0x37b PushT
	if(var_398_string == 0) goto Label_894; // 0x37c JumpB
	goto Label_899; // 0x37d Jump
	
Label_899:
	goto Label_914; // 0x383 Jump
	
Label_914:
	return 0; // 0x392 Return
	
Label_894:
	var_399_string = ""; // 0x37e PushV
	var_399_string = var_2_object; // 0x37f MovT
	func_1813(var_399_string); // 0x380 NEW_2
	goto Label_889; // 0x382 Jump
	
Label_900:
	var_400_string = "all"; // 0x384 PushS
	var_401_string = "idle"; // 0x385 PushS
	PlayAnimation(var_400_string, var_401_string); // 0x386 Func
	
Label_904:
	WaitForAnimEnd(); // 0x388 Func
	var_402_string = var_3_string; // 0x38a PushT
	if(var_402_string == 0) goto Label_909; // 0x38b JumpB
	goto Label_914; // 0x38c Jump
	
Label_909:
	var_403_string = "all"; // 0x38d PushS
	var_404_string = "idle"; // 0x38e PushS
	PlayAnimation(var_403_string, var_404_string); // 0x38f Func
	goto Label_904; // 0x391 Jump
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
	func_1909(var_45_int); // 0x5d4 NEW_2
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
	func_1902(var_72_string, var_73_int); // 0x5f8 NEW_2
	PlayAnimation(var_71_string, var_72_string); // 0x5fa Func
	WaitForAnimEnd(var_42_bool); // 0x5fc Func
	var_74_bool = var_42_bool == 0; // 0x5fe Not
	if(var_74_bool == 0) goto Label_1537; // 0x5ff JumpB
	goto Label_1548; // 0x600 Jump
}


func_1872(var_85_cvector, var_86_cvector)
{
	var_88_float = 0; var_89_float = 0; // 0x750 PushV
	var_90_int = var_86_cvector | var_86_cvector; // 0x751 Or
	var_89_float = sqrt(var_90_int); // 0x752 Sqrt2
	var_91_float = 0.0; // 0x753 PushF
	var_92_bool = var_89_float < var_91_float; // 0x754 LT
	if(var_92_bool == 0) goto Label_1880; // 0x755 JumpB
	var_85_cvector = CVector(0.0, 0.0, 0.0); // 0x756 MovV
	return 2; // 0x757 Return
	
Label_1880:
	var_85_cvector = var_86_cvector / var_86_cvector; // 0x758 Div2
	return 2; // 0x759 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_433_object, var_434_object)
{
	var_0_object = var_434_object; // 0x52 TMov
	var_1_object = var_433_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_439_int = 1; // 0x55 PushI
	if(var_439_int == 0) goto Label_114; // 0x56 JumpB
	var_440_string = ""; // 0x57 PushV
	var_440_string = "Neutral"; // 0x58 MovS
	func_144(var_434_object, var_440_string); // 0x59 NEW_2
	var_448_int = 535284; // 0x5b PushI
	SetMessage(var_448_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_449_int = 535285; // 0x60 PushI
	var_450_int = 36962; // 0x61 PushI
	var_451_int = 36961; // 0x62 PushI
	AddReply(var_449_int, var_450_int, var_451_int); // 0x63 TObjFunc
	var_452_int = 535292; // 0x65 PushI
	var_453_int = -1; // 0x66 PushI
	var_454_int = 36968; // 0x67 PushI
	AddReply(var_452_int, var_453_int, var_454_int); // 0x68 TObjFunc
	var_455_int = 535293; // 0x6a PushI
	var_456_int = -1; // 0x6b PushI
	var_457_int = 36969; // 0x6c PushI
	AddReply(var_455_int, var_456_int, var_457_int); // 0x6d TObjFunc
	goto Label_114; // 0x6f Jump
	
Label_114:
	var_458_bool = 0; // 0x72 PushV
	func_1934(var_458_bool); // 0x73 NEW_2
	if(var_458_bool == 0) goto Label_129; // 0x75 JumpB
	
Label_118:
	lshWaitForAnimEnd(); // 0x76 Func
	var_459_string = var_3_string; // 0x78 PushT
	if(var_459_string == 0) goto Label_123; // 0x79 JumpB
	goto Label_128; // 0x7a Jump
	
Label_128:
	goto Label_143; // 0x80 Jump
	
Label_143:
	return 0; // 0x8f Return
	
Label_123:
	var_460_string = ""; // 0x7b PushV
	var_460_string = var_2_object; // 0x7c MovT
	func_1813(var_460_string); // 0x7d NEW_2
	goto Label_118; // 0x7f Jump
	
Label_129:
	var_461_string = "all"; // 0x81 PushS
	var_462_string = "idle"; // 0x82 PushS
	PlayAnimation(var_461_string, var_462_string); // 0x83 Func
	
Label_133:
	WaitForAnimEnd(); // 0x85 Func
	var_463_string = var_3_string; // 0x87 PushT
	if(var_463_string == 0) goto Label_138; // 0x88 JumpB
	goto Label_143; // 0x89 Jump
	
Label_138:
	var_464_string = "all"; // 0x8a PushS
	var_465_string = "idle"; // 0x8b PushS
	PlayAnimation(var_464_string, var_465_string); // 0x8c Func
	goto Label_133; // 0x8e Jump
}


func_1362()
{
	var_526_float = 0; var_527_float = 0; // 0x552 PushV
	var_528_int = 8; // 0x553 PushI
	var_529_int = 16; // 0x554 PushI
	rand(var_527_float, var_528_int, var_529_int); // 0x555 Func
	var_530_int = 10; // 0x557 PushI
	SetTimer(var_530_int, var_527_float); // 0x558 Func
	return 2; // 0x55a Return
}


func_1235(var_2_object, var_499_string)
{
	var_500_bool = 0; // 0x4d4 PushV
	func_1934(var_500_bool); // 0x4d5 NEW_2
	var_501_bool = var_500_bool == 0; // 0x4d7 Not
	if(var_501_bool == 0) goto Label_1242; // 0x4d8 JumpB
	return 0; // 0x4d9 Return
	
Label_1242:
	var_502_bool = var_499_string == var_2_object; // 0x4da Eq
	if(var_502_bool == 0) goto Label_1245; // 0x4db JumpB
	return 0; // 0x4dc Return
	
Label_1245:
	var_503_string = ""; var_504_bool = 0; // 0x4dd PushV
	var_503_string = var_499_string; // 0x4de Mov
	var_505_string = ""; // 0x4df PushS
	var_506_bool = var_499_string == var_505_string; // 0x4e0 Eq
	if(var_506_bool == 0) goto Label_1252; // 0x4e1 JumpB
	var_504_bool = 0; // 0x4e2 MovB
	goto Label_1253; // 0x4e3 Jump
	
Label_1253:
	func_1829(var_503_string, var_504_bool); // 0x4e5 NEW_2
	var_2_object = var_499_string; // 0x4e7 TMov
	return 0; // 0x4e8 Return
	
Label_1252:
	var_504_bool = 1; // 0x4e4 MovB
}


func_340(var_0_object, var_1_object, var_2_object, var_3_string, var_213_object, var_214_object)
{
	var_0_object = var_214_object; // 0x155 TMov
	var_1_object = var_213_object; // 0x156 TMov
	var_3_string = 0; // 0x157 TMovB
	var_219_int = 1; // 0x158 PushI
	if(var_219_int == 0) goto Label_378; // 0x159 JumpB
	var_220_object = Obj(); var_221_object = Obj(); // 0x15a PushV
	var_220_object = var_1_object; // 0x15b MovT
	var_221_object = var_0_object; // 0x15c MovT
	func_1942(); // 0x15d NEW_2
	var_224_string = ""; // 0x15f PushV
	var_224_string = "Neutral"; // 0x160 MovS
	func_408(var_214_object, var_224_string); // 0x161 NEW_2
	var_241_int = 500457; // 0x163 PushI
	SetMessage(var_241_int); // 0x164 TObjFunc
	ClearReplies(); // 0x166 TObjFunc
	var_242_int = 500458; // 0x168 PushI
	var_243_int = 530; // 0x169 PushI
	var_244_int = 527; // 0x16a PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x16b TObjFunc
	var_245_int = 500459; // 0x16d PushI
	var_246_int = 532; // 0x16e PushI
	var_247_int = 528; // 0x16f PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x170 TObjFunc
	var_248_int = 500460; // 0x172 PushI
	var_249_int = 530; // 0x173 PushI
	var_250_int = 529; // 0x174 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x175 TObjFunc
	goto Label_378; // 0x177 Jump
	
Label_378:
	var_251_bool = 0; // 0x17a PushV
	func_1934(var_251_bool); // 0x17b NEW_2
	if(var_251_bool == 0) goto Label_393; // 0x17d JumpB
	
Label_382:
	lshWaitForAnimEnd(); // 0x17e Func
	var_252_string = var_3_string; // 0x180 PushT
	if(var_252_string == 0) goto Label_387; // 0x181 JumpB
	goto Label_392; // 0x182 Jump
	
Label_392:
	goto Label_407; // 0x188 Jump
	
Label_407:
	return 0; // 0x197 Return
	
Label_387:
	var_253_string = ""; // 0x183 PushV
	var_253_string = var_2_object; // 0x184 MovT
	func_1813(var_253_string); // 0x185 NEW_2
	goto Label_382; // 0x187 Jump
	
Label_393:
	var_264_string = "all"; // 0x189 PushS
	var_265_string = "idle"; // 0x18a PushS
	PlayAnimation(var_264_string, var_265_string); // 0x18b Func
	
Label_397:
	WaitForAnimEnd(); // 0x18d Func
	var_266_string = var_3_string; // 0x18f PushT
	if(var_266_string == 0) goto Label_402; // 0x190 JumpB
	goto Label_407; // 0x191 Jump
	
Label_402:
	var_267_string = "all"; // 0x192 PushS
	var_268_string = "idle"; // 0x193 PushS
	PlayAnimation(var_267_string, var_268_string); // 0x194 Func
	goto Label_397; // 0x196 Jump
}


func_1882(var_379_int, var_380_string)
{
	var_381_int = 0; var_382_int = 0; // 0x75a PushV
	GetVariable(var_380_string, var_382_int); // 0x75b Func
	var_379_int = var_382_int; // 0x75d Mov
	return 2; // 0x75e Return
}


func_1371()
{
	var_525_int = 10; // 0x55b PushI
	KillTimer(var_525_int); // 0x55c Func
	return 0; // 0x55e Return
}


func_1887(var_173_int)
{
	var_174_float = 0; var_175_float = 0; // 0x75f PushV
	GetGameTime(var_175_float); // 0x760 Func
	var_176_int = 1; // 0x762 PushI
	var_177_int = 0; // 0x763 PushV
	var_178_int = 24; // 0x764 PushI
	var_177_int = var_175_float / var_175_float; // 0x765 Div2
	var_173_int = var_176_int + var_177_int; // 0x766 Add2
	return 2; // 0x767 Return
}


func_1896(var_278_bool, var_279_int)
{
	var_280_int = 0; // 0x769 PushV
	func_1887(var_280_int); // 0x76a NEW_2
	var_278_bool = var_280_int == var_279_int; // 0x76c Eq2
	return 0; // 0x76d Return
}


func_1770(var_160_bool)
{
	var_162_string = ""; var_163_int = 0; var_164_bool = 0; var_165_int = 0; var_166_string = ""; var_167_string = ""; var_168_int = 0; var_169_bool = 0; var_170_int = 0; var_171_string = ""; // 0x6ea PushV
	var_172_string = "d"; // 0x6eb PushS
	var_173_int = 0; // 0x6ec PushV
	func_1887(var_173_int); // 0x6ed NEW_2
	var_179_int = var_172_string + var_173_int; // 0x6ef Add
	var_180_string = "m"; // 0x6f0 PushS
	var_167_string = var_179_int + var_180_string; // 0x6f1 Add2
	var_168_int = 0; // 0x6f2 MovI
	
Label_1779:
	var_181_int = 1; // 0x6f3 PushI
	if(var_181_int == 0) goto Label_1792; // 0x6f4 JumpB
	var_182_int = 1; // 0x6f5 PushI
	var_183_int = var_168_int + var_182_int; // 0x6f6 Add
	var_184_int = var_167_string + var_183_int; // 0x6f7 Add
	HasProperty(var_184_int, var_169_bool); // 0x6f8 ObjFunc
	var_185_bool = var_169_bool == 0; // 0x6fa Not
	if(var_185_bool == 0) goto Label_1789; // 0x6fb JumpB
	goto Label_1792; // 0x6fc Jump
	
Label_1792:
	var_186_bool = var_168_int == 0; // 0x700 Not
	if(var_186_bool == 0) goto Label_1796; // 0x701 JumpB
	var_160_bool = 0; // 0x702 MovB
	return 10; // 0x703 Return
	
Label_1796:
	var_170_int = 0; // 0x704 MovI
	var_187_int = 1; // 0x705 PushI
	var_188_bool = var_168_int > var_187_int; // 0x706 GT
	if(var_188_bool == 0) goto Label_1802; // 0x707 JumpB
	irand(var_170_int, var_168_int); // 0x708 Func
	
Label_1802:
	var_189_int = 1; // 0x70a PushI
	var_190_int = var_170_int + var_189_int; // 0x70b Add
	var_191_int = var_167_string + var_190_int; // 0x70c Add
	GetProperty(var_191_int, var_171_string); // 0x70d ObjFunc
	var_192_bool = 0; var_193_string = ""; // 0x70f PushV
	var_193_string = var_171_string; // 0x710 Mov
	func_1844(var_192_bool, var_193_string); // 0x711 NEW_2
	var_160_bool = var_192_bool; // 0x712 Mov
	return 10; // 0x714 Return
	
Label_1789:
	var_194_int = 1; // 0x6fd PushI
	var_168_int = var_168_int + var_194_int; // 0x6fe Add2
	goto Label_1779; // 0x6ff Jump
}


func_1902(var_51_string, var_52_int)
{
	var_53_string = ""; var_54_string = ""; // 0x76e PushV
	var_54_string = "idle"; // 0x76f MovS
	var_55_int = var_52_int; // 0x770 Push
	if(var_55_int == 0) goto Label_1907; // 0x771 JumpB
	var_54_string = var_54_string + var_52_int; // 0x772 Add2
	
Label_1907:
	var_51_string = var_54_string; // 0x773 Mov
	return 2; // 0x774 Return
}


func_1909(var_45_int)
{
	var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_bool = 0; // 0x775 PushV
	var_48_int = 0; // 0x776 MovI
	
Label_1911:
	var_50_string = "all"; // 0x777 PushS
	var_51_string = ""; var_52_int = 0; // 0x778 PushV
	var_52_int = var_48_int; // 0x779 Mov
	func_1902(var_51_string, var_52_int); // 0x77a NEW_2
	HasAnimation(var_49_bool, var_50_string, var_51_string); // 0x77c Func
	var_56_bool = var_49_bool == 0; // 0x77e Not
	if(var_56_bool == 0) goto Label_1921; // 0x77f JumpB
	goto Label_1924; // 0x780 Jump
	
Label_1924:
	var_45_int = var_48_int; // 0x784 Mov
	return 4; // 0x785 Return
	
Label_1921:
	var_57_int = 1; // 0x781 PushI
	var_48_int = var_48_int + var_57_int; // 0x782 Add2
	goto Label_1911; // 0x783 Jump
}


func_762(var_0_object, var_336_int, var_337_object)
{
	var_339_object = Obj(); var_340_bool = 0; var_341_int = 0; var_342_bool = 0; var_343_object = Obj(); var_344_bool = 0; var_345_int = 0; var_346_bool = 0; // 0x2fa PushV
	var_0_object = var_337_object; // 0x2fb TMov
	var_347_bool = 0; var_348_object = Obj(); var_349_float = 0; // 0x2fc PushV
	var_348_object = var_337_object; // 0x2fd Mov
	var_349_float = 70.0; // 0x2fe MovF
	func_1590(var_348_object, var_349_float); // 0x2ff NEW_2
	var_350_bool = var_347_bool == 0; // 0x301 Not
	if(var_350_bool == 0) goto Label_773; // 0x302 JumpB
	var_336_int = -2; // 0x303 MovI
	return 8; // 0x304 Return
	
Label_773:
	CreateDialog(var_343_object); // 0x305 Func
	var_351_int = 0; // 0x307 PushV
	func_1928(var_351_int); // 0x308 NEW_2
	SetNPCName(var_351_int); // 0x30a ObjFunc
	var_352_int = 0; // 0x30c PushV
	func_1926(var_352_int); // 0x30d NEW_2
	SetNPCDescription(var_352_int); // 0x30f ObjFunc
	var_353_string = ""; // 0x311 PushV
	func_1930(var_353_string); // 0x312 NEW_2
	SetPhoto(var_353_string); // 0x314 ObjFunc
	var_354_string = ""; // 0x316 PushV
	func_1932(var_354_string); // 0x317 NEW_2
	SetPhoto2(var_354_string); // 0x319 ObjFunc
	var_355_int = 0; // 0x31b PushV
	func_1972(var_355_int); // 0x31c NEW_2
	SetPlayerName(var_355_int); // 0x31e ObjFunc
	var_345_int = -1; // 0x320 MovI
	IsOverrideActive(var_344_bool); // 0x321 Func
	var_356_bool = var_344_bool; // 0x323 Push
	if(var_356_bool == 0) goto Label_807; // 0x324 JumpB
	var_336_int = -2; // 0x325 MovI
	return 8; // 0x326 Return
	
Label_807:
	DoDialog(var_343_object); // 0x327 Func
	var_357_bool = 0; var_358_object = Obj(); // 0x329 PushV
	var_359_object = Obj(); // 0x32a PushV
	func_1866(var_359_object); // 0x32b NEW_2
	var_358_object = var_359_object; // 0x32c Mov
	func_1675(var_357_bool, var_358_object); // 0x32e NEW_2
	var_360_object = Obj(); var_361_object = Obj(); // 0x330 PushV
	var_360_object = var_337_object; // 0x331 Mov
	var_361_object = var_343_object; // 0x332 Mov
	TaskCall(7); // 0x333 TaskCall
	func_843(var_362_object, var_363_object, var_364_string, var_365_bool, var_360_object, var_361_object); // 0x334 NEW_2
	TaskReturn(); // 0x335 TaskReturn
	IsDialogEnd(var_346_bool); // 0x337 ObjFunc
	
Label_825:
	var_405_bool = var_346_bool == 0; // 0x339 Not
	if(var_405_bool == 0) goto Label_832; // 0x33a JumpB
	sync(); // 0x33b Func
	IsDialogEnd(var_346_bool); // 0x33d ObjFunc
	goto Label_825; // 0x33f Jump
	
Label_832:
	var_406_object = Obj(); // 0x340 PushV
	var_406_object = var_337_object; // 0x341 Mov
	func_1658(); // 0x342 NEW_2
	StopDialog(var_343_object); // 0x344 Func
	GetReturnValue(var_345_int); // 0x346 ObjFunc
	var_336_int = var_345_int; // 0x348 Mov
	return 8; // 0x349 Return
}


