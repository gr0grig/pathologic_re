task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0x9d PushI
	if(var_23_int == 0) goto Label_251; // 0x9e JumpB
	func_1576(); // 0xa0 NEW_2
	var_25_int = 26881; // 0xa2 PushI
	var_26_bool = var_21_bool == var_25_int; // 0xa3 Eq
	if(var_26_bool == 0) goto Label_180; // 0xa4 JumpB
	var_27_string = ""; // 0xa5 PushV
	var_27_string = "Neutral"; // 0xa6 MovS
	func_134(var_22_cvector, var_27_string); // 0xa7 NEW_2
	var_44_int = 525525; // 0xa9 PushI
	SetMessage(var_44_int); // 0xaa TObjFunc
	ClearReplies(); // 0xac TObjFunc
	var_45_int = 525526; // 0xae PushI
	var_46_int = 30726; // 0xaf PushI
	var_47_int = 26882; // 0xb0 PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0xb1 TObjFunc
	return 0; // 0xb3 Return
	
Label_180:
	var_48_int = 30726; // 0xb4 PushI
	var_49_bool = var_21_bool == var_48_int; // 0xb5 Eq
	if(var_49_bool == 0) goto Label_203; // 0xb6 JumpB
	var_50_string = ""; // 0xb7 PushV
	var_50_string = "Neutral"; // 0xb8 MovS
	func_134(var_22_cvector, var_50_string); // 0xb9 NEW_2
	var_51_int = 529273; // 0xbb PushI
	SetMessage(var_51_int); // 0xbc TObjFunc
	ClearReplies(); // 0xbe TObjFunc
	var_52_int = 529272; // 0xc0 PushI
	var_53_int = 30728; // 0xc1 PushI
	var_54_int = 30725; // 0xc2 PushI
	AddReply(var_52_int, var_53_int, var_54_int); // 0xc3 TObjFunc
	var_55_int = 529274; // 0xc5 PushI
	var_56_int = 30729; // 0xc6 PushI
	var_57_int = 30727; // 0xc7 PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0xc8 TObjFunc
	return 0; // 0xca Return
	
Label_203:
	var_58_int = 30729; // 0xcb PushI
	var_59_bool = var_21_bool == var_58_int; // 0xcc Eq
	if(var_59_bool == 0) goto Label_221; // 0xcd JumpB
	var_60_string = ""; // 0xce PushV
	var_60_string = "Neutral"; // 0xcf MovS
	func_134(var_22_cvector, var_60_string); // 0xd0 NEW_2
	var_61_int = 529276; // 0xd2 PushI
	SetMessage(var_61_int); // 0xd3 TObjFunc
	ClearReplies(); // 0xd5 TObjFunc
	var_62_int = 529278; // 0xd7 PushI
	var_63_int = -1; // 0xd8 PushI
	var_64_int = 30731; // 0xd9 PushI
	AddReply(var_62_int, var_63_int, var_64_int); // 0xda TObjFunc
	return 0; // 0xdc Return
	
Label_221:
	var_65_int = 30728; // 0xdd PushI
	var_66_bool = var_21_bool == var_65_int; // 0xde Eq
	if(var_66_bool == 0) goto Label_239; // 0xdf JumpB
	var_67_string = ""; // 0xe0 PushV
	var_67_string = "Neutral"; // 0xe1 MovS
	func_134(var_22_cvector, var_67_string); // 0xe2 NEW_2
	var_68_int = 529275; // 0xe4 PushI
	SetMessage(var_68_int); // 0xe5 TObjFunc
	ClearReplies(); // 0xe7 TObjFunc
	var_69_int = 529277; // 0xe9 PushI
	var_70_int = -1; // 0xea PushI
	var_71_int = 30730; // 0xeb PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0xec TObjFunc
	return 0; // 0xee Return
	
Label_239:
	var_3_string = 1; // 0xef TMovB
	var_72_bool = 0; // 0xf0 PushV
	func_1651(var_72_bool); // 0xf1 NEW_2
	if(var_72_bool == 0) goto Label_247; // 0xf3 JumpB
	lshStopAnimation(); // 0xf4 Func
	goto Label_249; // 0xf6 Jump
	
Label_249:
	return 0; // 0xf9 Return
	
Label_247:
	StopAnimation(); // 0xf7 Func
	
Label_251:
	return 0; // 0xfb Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0x1a8 PushI
	if(var_23_int == 0) goto Label_554; // 0x1a9 JumpB
	func_1576(); // 0x1ab NEW_2
	var_25_int = 27693; // 0x1ad PushI
	var_26_bool = var_22_cvector == var_25_int; // 0x1ae Eq
	if(var_26_bool == 0) goto Label_437; // 0x1af JumpB
	var_27_object = Obj(); var_28_object = Obj(); // 0x1b0 PushV
	var_27_object = var_1_object; // 0x1b1 MovT
	var_28_object = var_0_object; // 0x1b2 MovT
	func_1653(); // 0x1b3 NEW_2
	
Label_437:
	var_54_int = 27688; // 0x1b5 PushI
	var_55_bool = var_21_bool == var_54_int; // 0x1b6 Eq
	if(var_55_bool == 0) goto Label_470; // 0x1b7 JumpB
	var_56_string = ""; // 0x1b8 PushV
	var_56_string = "Serious"; // 0x1b9 MovS
	func_401(var_22_cvector, var_56_string); // 0x1ba NEW_2
	var_73_int = 526413; // 0x1bc PushI
	SetMessage(var_73_int); // 0x1bd TObjFunc
	ClearReplies(); // 0x1bf TObjFunc
	var_74_bool = 0; var_75_object = Obj(); // 0x1c1 PushV
	var_75_object = var_1_object; // 0x1c2 MovT
	func_1662(var_75_object); // 0x1c3 NEW_2
	if(var_74_bool == 0) goto Label_459; // 0x1c5 JumpB
	var_82_int = 526414; // 0x1c6 PushI
	var_83_int = 30415; // 0x1c7 PushI
	var_84_int = 27689; // 0x1c8 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x1c9 TObjFunc
	
Label_459:
	var_85_int = 526419; // 0x1cb PushI
	var_86_int = -1; // 0x1cc PushI
	var_87_int = 27694; // 0x1cd PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0x1ce TObjFunc
	var_88_int = 528977; // 0x1d0 PushI
	var_89_int = -1; // 0x1d1 PushI
	var_90_int = 30414; // 0x1d2 PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0x1d3 TObjFunc
	return 0; // 0x1d5 Return
	
Label_470:
	var_91_int = 30415; // 0x1d6 PushI
	var_92_bool = var_21_bool == var_91_int; // 0x1d7 Eq
	if(var_92_bool == 0) goto Label_488; // 0x1d8 JumpB
	var_93_string = ""; // 0x1d9 PushV
	var_93_string = "Secret"; // 0x1da MovS
	func_401(var_22_cvector, var_93_string); // 0x1db NEW_2
	var_94_int = 528978; // 0x1dd PushI
	SetMessage(var_94_int); // 0x1de TObjFunc
	ClearReplies(); // 0x1e0 TObjFunc
	var_95_int = 528980; // 0x1e2 PushI
	var_96_int = 30418; // 0x1e3 PushI
	var_97_int = 30417; // 0x1e4 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x1e5 TObjFunc
	return 0; // 0x1e7 Return
	
Label_488:
	var_98_int = 30418; // 0x1e8 PushI
	var_99_bool = var_21_bool == var_98_int; // 0x1e9 Eq
	if(var_99_bool == 0) goto Label_506; // 0x1ea JumpB
	var_100_string = ""; // 0x1eb PushV
	var_100_string = "Secret"; // 0x1ec MovS
	func_401(var_22_cvector, var_100_string); // 0x1ed NEW_2
	var_101_int = 528981; // 0x1ef PushI
	SetMessage(var_101_int); // 0x1f0 TObjFunc
	ClearReplies(); // 0x1f2 TObjFunc
	var_102_int = 528979; // 0x1f4 PushI
	var_103_int = 27690; // 0x1f5 PushI
	var_104_int = 30416; // 0x1f6 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x1f7 TObjFunc
	return 0; // 0x1f9 Return
	
Label_506:
	var_105_int = 27690; // 0x1fa PushI
	var_106_bool = var_21_bool == var_105_int; // 0x1fb Eq
	if(var_106_bool == 0) goto Label_524; // 0x1fc JumpB
	var_107_string = ""; // 0x1fd PushV
	var_107_string = "Neutral"; // 0x1fe MovS
	func_401(var_22_cvector, var_107_string); // 0x1ff NEW_2
	var_108_int = 526415; // 0x201 PushI
	SetMessage(var_108_int); // 0x202 TObjFunc
	ClearReplies(); // 0x204 TObjFunc
	var_109_int = 526416; // 0x206 PushI
	var_110_int = 27692; // 0x207 PushI
	var_111_int = 27691; // 0x208 PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x209 TObjFunc
	return 0; // 0x20b Return
	
Label_524:
	var_112_int = 27692; // 0x20c PushI
	var_113_bool = var_21_bool == var_112_int; // 0x20d Eq
	if(var_113_bool == 0) goto Label_542; // 0x20e JumpB
	var_114_string = ""; // 0x20f PushV
	var_114_string = "Serious"; // 0x210 MovS
	func_401(var_22_cvector, var_114_string); // 0x211 NEW_2
	var_115_int = 526417; // 0x213 PushI
	SetMessage(var_115_int); // 0x214 TObjFunc
	ClearReplies(); // 0x216 TObjFunc
	var_116_int = 526418; // 0x218 PushI
	var_117_int = -1; // 0x219 PushI
	var_118_int = 27693; // 0x21a PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x21b TObjFunc
	return 0; // 0x21d Return
	
Label_542:
	var_3_string = 1; // 0x21e TMovB
	var_119_bool = 0; // 0x21f PushV
	func_1651(var_119_bool); // 0x220 NEW_2
	if(var_119_bool == 0) goto Label_550; // 0x222 JumpB
	lshStopAnimation(); // 0x223 Func
	goto Label_552; // 0x225 Jump
	
Label_552:
	return 0; // 0x228 Return
	
Label_550:
	StopAnimation(); // 0x226 Func
	
Label_554:
	return 0; // 0x22a Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0x2d2 PushI
	if(var_23_int == 0) goto Label_813; // 0x2d3 JumpB
	func_1576(); // 0x2d5 NEW_2
	var_25_int = 36960; // 0x2d7 PushI
	var_26_bool = var_21_bool == var_25_int; // 0x2d8 Eq
	if(var_26_bool == 0) goto Label_755; // 0x2d9 JumpB
	var_27_string = ""; // 0x2da PushV
	var_27_string = "Neutral"; // 0x2db MovS
	func_699(var_22_cvector, var_27_string); // 0x2dc NEW_2
	var_44_int = 535284; // 0x2de PushI
	SetMessage(var_44_int); // 0x2df TObjFunc
	ClearReplies(); // 0x2e1 TObjFunc
	var_45_int = 535285; // 0x2e3 PushI
	var_46_int = 36962; // 0x2e4 PushI
	var_47_int = 36961; // 0x2e5 PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0x2e6 TObjFunc
	var_48_int = 535292; // 0x2e8 PushI
	var_49_int = -1; // 0x2e9 PushI
	var_50_int = 36968; // 0x2ea PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0x2eb TObjFunc
	var_51_int = 535293; // 0x2ed PushI
	var_52_int = -1; // 0x2ee PushI
	var_53_int = 36969; // 0x2ef PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0x2f0 TObjFunc
	return 0; // 0x2f2 Return
	
Label_755:
	var_54_int = 36962; // 0x2f3 PushI
	var_55_bool = var_21_bool == var_54_int; // 0x2f4 Eq
	if(var_55_bool == 0) goto Label_778; // 0x2f5 JumpB
	var_56_string = ""; // 0x2f6 PushV
	var_56_string = "Neutral"; // 0x2f7 MovS
	func_699(var_22_cvector, var_56_string); // 0x2f8 NEW_2
	var_57_int = 535286; // 0x2fa PushI
	SetMessage(var_57_int); // 0x2fb TObjFunc
	ClearReplies(); // 0x2fd TObjFunc
	var_58_int = 535287; // 0x2ff PushI
	var_59_int = 36964; // 0x300 PushI
	var_60_int = 36963; // 0x301 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0x302 TObjFunc
	var_61_int = 535291; // 0x304 PushI
	var_62_int = -1; // 0x305 PushI
	var_63_int = 36967; // 0x306 PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0x307 TObjFunc
	return 0; // 0x309 Return
	
Label_778:
	var_64_int = 36964; // 0x30a PushI
	var_65_bool = var_21_bool == var_64_int; // 0x30b Eq
	if(var_65_bool == 0) goto Label_801; // 0x30c JumpB
	var_66_string = ""; // 0x30d PushV
	var_66_string = "Neutral"; // 0x30e MovS
	func_699(var_22_cvector, var_66_string); // 0x30f NEW_2
	var_67_int = 535288; // 0x311 PushI
	SetMessage(var_67_int); // 0x312 TObjFunc
	ClearReplies(); // 0x314 TObjFunc
	var_68_int = 535289; // 0x316 PushI
	var_69_int = -1; // 0x317 PushI
	var_70_int = 36965; // 0x318 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0x319 TObjFunc
	var_71_int = 535290; // 0x31b PushI
	var_72_int = -1; // 0x31c PushI
	var_73_int = 36966; // 0x31d PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x31e TObjFunc
	return 0; // 0x320 Return
	
Label_801:
	var_3_string = 1; // 0x321 TMovB
	var_74_bool = 0; // 0x322 PushV
	func_1651(var_74_bool); // 0x323 NEW_2
	if(var_74_bool == 0) goto Label_809; // 0x325 JumpB
	lshStopAnimation(); // 0x326 Func
	goto Label_811; // 0x328 Jump
	
Label_811:
	return 0; // 0x32b Return
	
Label_809:
	StopAnimation(); // 0x329 Func
	
Label_813:
	return 0; // 0x32d Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_cvector)
{
	var_23_int = 1; // 0x3d0 PushI
	if(var_23_int == 0) goto Label_1016; // 0x3d1 JumpB
	func_1576(); // 0x3d3 NEW_2
	var_25_int = 42554; // 0x3d5 PushI
	var_26_bool = var_21_int == var_25_int; // 0x3d6 Eq
	if(var_26_bool == 0) goto Label_1004; // 0x3d7 JumpB
	var_27_string = ""; // 0x3d8 PushV
	var_27_string = "Neutral"; // 0x3d9 MovS
	func_953(var_22_cvector, var_27_string); // 0x3da NEW_2
	var_44_int = 540545; // 0x3dc PushI
	SetMessage(var_44_int); // 0x3dd TObjFunc
	ClearReplies(); // 0x3df TObjFunc
	var_45_int = 540546; // 0x3e1 PushI
	var_46_int = -1; // 0x3e2 PushI
	var_47_int = 42555; // 0x3e3 PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0x3e4 TObjFunc
	var_48_int = 540798; // 0x3e6 PushI
	var_49_int = -1; // 0x3e7 PushI
	var_50_int = 42847; // 0x3e8 PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0x3e9 TObjFunc
	return 0; // 0x3eb Return
	
Label_1004:
	var_3_string = 1; // 0x3ec TMovB
	var_51_bool = 0; // 0x3ed PushV
	func_1651(var_51_bool); // 0x3ee NEW_2
	if(var_51_bool == 0) goto Label_1012; // 0x3f0 JumpB
	lshStopAnimation(); // 0x3f1 Func
	goto Label_1014; // 0x3f3 Jump
	
Label_1014:
	return 0; // 0x3f6 Return
	
Label_1012:
	StopAnimation(); // 0x3f4 Func
	
Label_1016:
	return 0; // 0x3f8 Return
}


task_8_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_int)
{
	var_22_int = 10; // 0x443 PushI
	var_23_bool = var_21_int == var_22_int; // 0x444 Eq
	if(var_23_bool == 0) goto Label_1127; // 0x445 JumpB
	func_1086(); // 0x447 NEW_2
	var_25_bool = 0; // 0x449 PushV
	var_25_bool = 0; // 0x44a MovB
	var_26_bool = 0; // 0x44b PushV
	func_1300(var_26_bool); // 0x44c NEW_2
	if(var_26_bool == 0) goto Label_1108; // 0x44e JumpB
	var_29_bool = 0; // 0x44f PushV
	func_1055(var_29_bool); // 0x450 NEW_2
	if(var_29_bool == 0) goto Label_1108; // 0x452 JumpB
	var_25_bool = 1; // 0x453 MovB
	
Label_1108:
	if(var_25_bool == 0) goto Label_1121; // 0x454 JumpB
	var_46_bool = 0; // 0x455 PushV
	func_1035(var_46_bool); // 0x456 NEW_2
	if(var_46_bool == 0) goto Label_1120; // 0x458 JumpB
	var_65_bool = 0; var_66_object = Obj(); // 0x459 PushV
	var_67_object = Obj(); // 0x45a PushV
	func_1583(var_67_object); // 0x45b NEW_2
	var_66_object = var_67_object; // 0x45c Mov
	func_1450(var_66_object); // 0x45e NEW_2
	
Label_1120:
	goto Label_1127; // 0x460 Jump
	
Label_1127:
	return 0; // 0x467 Return
	
Label_1121:
	func_1050(var_21_int); // 0x462 NEW_2
	func_1077(); // 0x465 NEW_2
}


task_8_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	func_1268(); // 0x469 NEW_2
	func_1086(); // 0x46c NEW_2
	lshStopSpeech(); // 0x46e Func
	lshStopAnimation(); // 0x470 Func
	StopAsync(); // 0x472 Func
	Hold(); // 0x474 Func
	return 0; // 0x476 Return
}


task_8_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	StopGroup0(); // 0x477 Func
	func_1086(); // 0x47a NEW_2
	var_22_string = ""; // 0x47c PushV
	var_22_string = "Neutral"; // 0x47d MovS
	func_1530(var_22_string); // 0x47e NEW_2
	func_1077(); // 0x481 NEW_2
	return 0; // 0x483 Return
}


task_8_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_bool)
{
	var_22_bool = var_21_bool; // 0x485 Push
	if(var_22_bool == 0) goto Label_1163; // 0x486 JumpB
	func_1077(); // 0x488 NEW_2
	goto Label_1167; // 0x48a Jump
	
Label_1167:
	return 0; // 0x48f Return
	
Label_1163:
	var_28_string = ""; // 0x48b PushV
	var_28_string = "Neutral"; // 0x48c MovS
	func_1530(var_28_string); // 0x48d NEW_2
}


task_8_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0x490 PushV
	IsOverrideActive(var_23_bool); // 0x491 Func
	var_24_bool = var_23_bool == 0; // 0x493 Not
	if(var_24_bool == 0) goto Label_1196; // 0x494 JumpB
	EventDisable(0); // 0x495 EventDisable
	func_1268(); // 0x497 NEW_2
	var_25_bool = 0; var_26_object = Obj(); // 0x499 PushV
	var_26_object = var_21_object; // 0x49a Mov
	func_1291(var_26_object); // 0x49b NEW_2
	EventEnable(0); // 0x49d EventEnable
	var_39_object = Obj(); // 0x49e PushV
	var_39_object = var_21_object; // 0x49f Mov
	func_1745(var_39_object); // 0x4a0 NEW_2
	var_455_string = ""; // 0x4a2 PushV
	var_455_string = "Neutral"; // 0x4a3 MovS
	func_1530(var_455_string); // 0x4a4 NEW_2
	func_1086(); // 0x4a7 NEW_2
	func_1077(); // 0x4aa NEW_2
	
Label_1196:
	return 2; // 0x4ac Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	func_1021(var_20_cvector); // 0x3fa NEW_2
	return 0; // 0x3fc Return
}


func_0(var_0_object, var_44_int, var_45_object)
{
	var_47_object = Obj(); var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_object = Obj(); var_52_bool = 0; var_53_int = 0; var_54_bool = 0; // 0x0 PushV
	var_0_object = var_45_object; // 0x1 TMov
	var_55_bool = 0; var_56_object = Obj(); var_57_float = 0; // 0x2 PushV
	var_56_object = var_45_object; // 0x3 Mov
	var_57_float = 70.0; // 0x4 MovF
	func_1305(var_56_object, var_57_float); // 0x5 NEW_2
	var_102_bool = var_55_bool == 0; // 0x7 Not
	if(var_102_bool == 0) goto Label_11; // 0x8 JumpB
	var_44_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_51_object); // 0xb Func
	var_103_int = 0; // 0xd PushV
	func_1645(var_103_int); // 0xe NEW_2
	SetNPCName(var_103_int); // 0x10 ObjFunc
	var_104_int = 0; // 0x12 PushV
	func_1643(var_104_int); // 0x13 NEW_2
	SetNPCDescription(var_104_int); // 0x15 ObjFunc
	var_105_string = ""; // 0x17 PushV
	func_1647(var_105_string); // 0x18 NEW_2
	SetPhoto(var_105_string); // 0x1a ObjFunc
	var_106_string = ""; // 0x1c PushV
	func_1649(var_106_string); // 0x1d NEW_2
	SetPhoto2(var_106_string); // 0x1f ObjFunc
	var_107_int = 0; // 0x21 PushV
	func_1728(var_107_int); // 0x22 NEW_2
	SetPlayerName(var_107_int); // 0x24 ObjFunc
	var_53_int = -1; // 0x26 MovI
	IsOverrideActive(var_52_bool); // 0x27 Func
	var_115_bool = var_52_bool; // 0x29 Push
	if(var_115_bool == 0) goto Label_45; // 0x2a JumpB
	var_44_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_51_object); // 0x2d Func
	var_116_bool = 0; var_117_object = Obj(); // 0x2f PushV
	var_118_object = Obj(); // 0x30 PushV
	func_1583(var_118_object); // 0x31 NEW_2
	var_117_object = var_118_object; // 0x32 Mov
	func_1392(var_116_bool, var_117_object); // 0x34 NEW_2
	var_211_object = Obj(); var_212_object = Obj(); // 0x36 PushV
	var_211_object = var_45_object; // 0x37 Mov
	var_212_object = var_51_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_213_object, var_214_object, var_215_string, var_216_bool, var_211_object, var_212_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_54_bool); // 0x3d ObjFunc
	
Label_63:
	var_257_bool = var_54_bool == 0; // 0x3f Not
	if(var_257_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_54_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_258_object = Obj(); // 0x46 PushV
	var_258_object = var_45_object; // 0x47 Mov
	func_1374(); // 0x48 NEW_2
	StopDialog(var_51_object); // 0x4a Func
	GetReturnValue(var_53_int); // 0x4c ObjFunc
	var_44_int = var_53_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1281(var_29_bool, var_30_cvector)
{
	var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; // 0x501 PushV
	GetPosition(var_34_cvector); // 0x502 Func
	var_35_cvector = var_30_cvector - var_34_cvector; // 0x504 Sub2
	var_37_float = GetByIndex(var_35_cvector, 0); // 0x505 PushE
	var_38_float = GetByIndex(var_35_cvector, 2); // 0x506 PushE
	Rotate(var_37_float, var_38_float, var_36_bool); // 0x507 Func
	var_29_bool = var_36_bool; // 0x509 Mov
	return 6; // 0x50a Return
}


func_636(var_0_object, var_1_object, var_2_object, var_3_string, var_364_object, var_365_object)
{
	var_0_object = var_365_object; // 0x27d TMov
	var_1_object = var_364_object; // 0x27e TMov
	var_3_string = 0; // 0x27f TMovB
	var_370_int = 1; // 0x280 PushI
	if(var_370_int == 0) goto Label_669; // 0x281 JumpB
	var_371_string = ""; // 0x282 PushV
	var_371_string = "Neutral"; // 0x283 MovS
	func_699(var_365_object, var_371_string); // 0x284 NEW_2
	var_379_int = 535284; // 0x286 PushI
	SetMessage(var_379_int); // 0x287 TObjFunc
	ClearReplies(); // 0x289 TObjFunc
	var_380_int = 535285; // 0x28b PushI
	var_381_int = 36962; // 0x28c PushI
	var_382_int = 36961; // 0x28d PushI
	AddReply(var_380_int, var_381_int, var_382_int); // 0x28e TObjFunc
	var_383_int = 535292; // 0x290 PushI
	var_384_int = -1; // 0x291 PushI
	var_385_int = 36968; // 0x292 PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0x293 TObjFunc
	var_386_int = 535293; // 0x295 PushI
	var_387_int = -1; // 0x296 PushI
	var_388_int = 36969; // 0x297 PushI
	AddReply(var_386_int, var_387_int, var_388_int); // 0x298 TObjFunc
	goto Label_669; // 0x29a Jump
	
Label_669:
	var_389_bool = 0; // 0x29d PushV
	func_1651(var_389_bool); // 0x29e NEW_2
	if(var_389_bool == 0) goto Label_684; // 0x2a0 JumpB
	
Label_673:
	lshWaitForAnimEnd(); // 0x2a1 Func
	var_390_string = var_3_string; // 0x2a3 PushT
	if(var_390_string == 0) goto Label_678; // 0x2a4 JumpB
	goto Label_683; // 0x2a5 Jump
	
Label_683:
	goto Label_698; // 0x2ab Jump
	
Label_698:
	return 0; // 0x2ba Return
	
Label_678:
	var_391_string = ""; // 0x2a6 PushV
	var_391_string = var_2_object; // 0x2a7 MovT
	func_1530(var_391_string); // 0x2a8 NEW_2
	goto Label_673; // 0x2aa Jump
	
Label_684:
	var_392_string = "all"; // 0x2ac PushS
	var_393_string = "idle"; // 0x2ad PushS
	PlayAnimation(var_392_string, var_393_string); // 0x2ae Func
	
Label_688:
	WaitForAnimEnd(); // 0x2b0 Func
	var_394_string = var_3_string; // 0x2b2 PushT
	if(var_394_string == 0) goto Label_693; // 0x2b3 JumpB
	goto Label_698; // 0x2b4 Jump
	
Label_693:
	var_395_string = "all"; // 0x2b5 PushS
	var_396_string = "idle"; // 0x2b6 PushS
	PlayAnimation(var_395_string, var_396_string); // 0x2b7 Func
	goto Label_688; // 0x2b9 Jump
}


func_134(var_2_object, var_218_string)
{
	var_219_bool = 0; // 0x87 PushV
	func_1651(var_219_bool); // 0x88 NEW_2
	var_220_bool = var_219_bool == 0; // 0x8a Not
	if(var_220_bool == 0) goto Label_141; // 0x8b JumpB
	return 0; // 0x8c Return
	
Label_141:
	var_221_bool = var_218_string == var_2_object; // 0x8d Eq
	if(var_221_bool == 0) goto Label_144; // 0x8e JumpB
	return 0; // 0x8f Return
	
Label_144:
	var_222_string = ""; var_223_bool = 0; // 0x90 PushV
	var_222_string = var_218_string; // 0x91 Mov
	var_224_string = ""; // 0x92 PushS
	var_225_bool = var_218_string == var_224_string; // 0x93 Eq
	if(var_225_bool == 0) goto Label_151; // 0x94 JumpB
	var_223_bool = 0; // 0x95 MovB
	goto Label_152; // 0x96 Jump
	
Label_152:
	func_1546(var_222_string, var_223_bool); // 0x98 NEW_2
	var_2_object = var_218_string; // 0x9a TMov
	return 0; // 0x9b Return
	
Label_151:
	var_223_bool = 1; // 0x97 MovB
}


func_1546(var_222_string, var_223_bool)
{
	var_226_bool = 0; var_227_float = 0; var_228_float = 0; var_229_bool = 0; var_230_float = 0; var_231_float = 0; // 0x60a PushV
	lshHasAnimation(var_229_bool, var_222_string); // 0x60b Func
	var_232_bool = var_229_bool; // 0x60d Push
	if(var_232_bool == 0) goto Label_1556; // 0x60e JumpB
	lshGetAnimTimes(var_222_string, var_230_float, var_231_float); // 0x60f Func
	lshPlayAnimation(var_230_float, var_231_float, var_223_bool); // 0x611 Func
	goto Label_1560; // 0x613 Jump
	
Label_1560:
	return 6; // 0x618 Return
	
Label_1556:
	var_233_string = "Can't find lsh animation : "; // 0x614 PushS
	var_234_int = var_233_string + var_222_string; // 0x615 Add
	Trace(var_234_int); // 0x616 Func
}


func_1291(var_25_bool)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); // 0x50b PushV
	GetPosition(var_28_cvector); // 0x50c ObjFunc
	var_29_bool = 0; var_30_cvector = CVector(0,0,0); // 0x50e PushV
	var_30_cvector = var_28_cvector; // 0x50f Mov
	func_1281(var_29_bool, var_30_cvector); // 0x510 NEW_2
	var_25_bool = var_29_bool; // 0x511 Mov
	return 2; // 0x513 Return
}


func_1035(var_46_bool)
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x40b PushV
	var_49_string = "player"; // 0x40c PushS
	FindActor(var_48_object, var_49_string); // 0x40d Func
	var_50_bool = var_48_object == 0; // 0x40f Not
	if(var_50_bool == 0) goto Label_1043; // 0x410 JumpB
	var_46_bool = 0; // 0x411 MovB
	return 2; // 0x412 Return
	
Label_1043:
	var_51_bool = 0; var_52_object = Obj(); // 0x413 PushV
	var_52_object = var_48_object; // 0x414 Mov
	func_1291(var_52_object); // 0x415 NEW_2
	var_46_bool = var_51_bool; // 0x416 Mov
	return 2; // 0x418 Return
}


func_1674()
{
	var_31_object = Obj(); var_32_object = Obj(); // 0x68a PushV
	var_33_int = 441; // 0x68b PushI
	var_34_int = 1; // 0x68c PushI
	var_35_int = 526466; // 0x68d PushI
	CreateDiaryEntry(var_32_object, var_33_int, var_34_int, var_35_int); // 0x68e Func
	var_36_bool = 0; var_37_object = Obj(); var_38_int = 0; // 0x690 PushV
	var_37_object = var_32_object; // 0x691 Mov
	var_38_int = 438; // 0x692 MovI
	func_1700(var_36_bool, var_37_object, var_38_int); // 0x693 NEW_2
	return 2; // 0x695 Return
}


func_401(var_2_object, var_302_string)
{
	var_303_bool = 0; // 0x192 PushV
	func_1651(var_303_bool); // 0x193 NEW_2
	var_304_bool = var_303_bool == 0; // 0x195 Not
	if(var_304_bool == 0) goto Label_408; // 0x196 JumpB
	return 0; // 0x197 Return
	
Label_408:
	var_305_bool = var_302_string == var_2_object; // 0x198 Eq
	if(var_305_bool == 0) goto Label_411; // 0x199 JumpB
	return 0; // 0x19a Return
	
Label_411:
	var_306_string = ""; var_307_bool = 0; // 0x19b PushV
	var_306_string = var_302_string; // 0x19c Mov
	var_308_string = ""; // 0x19d PushS
	var_309_bool = var_302_string == var_308_string; // 0x19e Eq
	if(var_309_bool == 0) goto Label_418; // 0x19f JumpB
	var_307_bool = 0; // 0x1a0 MovB
	goto Label_419; // 0x1a1 Jump
	
Label_419:
	func_1546(var_306_string, var_307_bool); // 0x1a3 NEW_2
	var_2_object = var_302_string; // 0x1a5 TMov
	return 0; // 0x1a6 Return
	
Label_418:
	var_307_bool = 1; // 0x1a2 MovB
}


func_1300(var_21_bool)
{
	var_22_bool = 0; var_23_bool = 0; // 0x514 PushV
	IsLoaded(var_23_bool); // 0x515 Func
	var_21_bool = var_23_bool; // 0x517 Mov
	return 2; // 0x518 Return
}


func_1687(var_45_object)
{
	var_46_object = Obj(); var_47_object = Obj(); // 0x697 PushV
	GetDiaryRoot(var_47_object); // 0x698 Func
	var_48_bool = var_47_object == 0; // 0x69a Not
	if(var_48_bool == 0) goto Label_1697; // 0x69b JumpB
	var_49_string = "Can't retrieve diary root"; // 0x69c PushS
	Trace(var_49_string); // 0x69d Func
	var_45_object = 0; // 0x69f MovB
	return 2; // 0x6a0 Return
	
Label_1697:
	var_45_object = var_47_object; // 0x6a1 Mov
	return 2; // 0x6a2 Return
}


func_1561(var_150_bool, var_151_string)
{
	var_152_bool = 0; var_153_bool = 0; // 0x619 PushV
	var_154_bool = 0; // 0x61a PushV
	func_1651(var_154_bool); // 0x61b NEW_2
	if(var_154_bool == 0) goto Label_1574; // 0x61d JumpB
	lshHasSpeech(var_153_bool, var_151_string); // 0x61e Func
	var_155_bool = var_153_bool; // 0x620 Push
	if(var_155_bool == 0) goto Label_1574; // 0x621 JumpB
	lshPlaySpeech(var_151_string); // 0x622 Func
	var_150_bool = 1; // 0x624 MovB
	return 2; // 0x625 Return
	
Label_1574:
	var_150_bool = 0; // 0x626 MovB
	return 2; // 0x627 Return
}


func_1305(var_55_bool, var_57_float)
{
	var_58_float = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_bool = 0; var_66_bool = 0; var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_bool = 0; var_75_bool = 0; // 0x519 PushV
	GetPosition(var_68_cvector); // 0x51a ObjFunc
	GetEyesHeight(var_67_float); // 0x51c ObjFunc
	var_76_float = GetByIndex(var_68_cvector, 1); // 0x51e PushE
	var_76_float = var_76_float + var_67_float; // 0x51f Add2
	SetByIndex(var_68_cvector, 1) = var_76_float; // 0x520 PopE
	GetPosition(var_69_cvector); // 0x521 Func
	GetEyesHeight(var_67_float); // 0x523 Func
	var_77_float = GetByIndex(var_69_cvector, 1); // 0x525 PushE
	var_77_float = var_77_float + var_67_float; // 0x526 Add2
	SetByIndex(var_69_cvector, 1) = var_77_float; // 0x527 PopE
	var_70_cvector = var_68_cvector - var_69_cvector; // 0x528 Sub2
	var_78_float = GetByIndex(var_70_cvector, 1); // 0x529 PushE
	var_78_float = 0; // 0x52a MovI
	SetByIndex(var_70_cvector, 1) = var_78_float; // 0x52b PopE
	var_79_int = var_70_cvector | var_70_cvector; // 0x52c Or
	var_80_float = sqrt(var_79_int); // 0x52d Sqrt
	var_70_cvector = var_70_cvector / var_70_cvector; // 0x52e Div2
	var_71_cvector = -var_70_cvector; // 0x52f Neg2
	var_81_float = var_70_cvector * var_57_float; // 0x530 Mult
	var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); // 0x531 PushV
	var_84_cvector = CVector(0.0, 1.0, 0.0); // 0x532 PushVec
	var_83_cvector = var_71_cvector ^ var_84_cvector; // 0x533 Xor2
	func_1589(var_82_cvector, var_83_cvector); // 0x534 NEW_2
	var_90_int = 25; // 0x536 PushI
	var_91_float = var_82_cvector * var_90_int; // 0x537 Mult
	var_92_int = var_81_float + var_91_float; // 0x538 Add
	var_93_cvector = CVector(0.0, 10.0, 0.0); // 0x539 PushVec
	var_72_cvector = var_92_int - var_93_cvector; // 0x53a Sub2
	var_73_cvector = var_69_cvector + var_72_cvector; // 0x53b Add2
	IsOverrideActive(var_74_bool); // 0x53c Func
	var_94_bool = var_74_bool; // 0x53e Push
	if(var_94_bool == 0) goto Label_1346; // 0x53f JumpB
	var_55_bool = 0; // 0x540 MovB
	return 18; // 0x541 Return
	
Label_1346:
	StopWorld(); // 0x542 Func
	var_95_bool = 1; // 0x544 PushB
	CameraTransit(var_73_cvector, var_71_cvector, var_95_bool); // 0x545 Func
	var_96_float = GetByIndex(var_72_cvector, 0); // 0x547 PushE
	var_97_float = GetByIndex(var_72_cvector, 2); // 0x548 PushE
	Rotate(var_96_float, var_97_float); // 0x549 Func
	var_98_bool = 0; // 0x54b PushV
	func_1651(var_98_bool); // 0x54c NEW_2
	if(var_98_bool == 0) goto Label_1360; // 0x54e JumpB
	goto Label_1368; // 0x54f Jump
	
Label_1368:
	CameraWaitForPlayFinish(); // 0x558 Func
	ResumeWorld(); // 0x55a Func
	var_55_bool = 1; // 0x55c MovB
	return 18; // 0x55d Return
	
Label_1360:
	var_99_string = "head"; // 0x550 PushS
	HasAnimationTrack(var_75_bool, var_99_string); // 0x551 Func
	var_100_bool = var_75_bool; // 0x553 Push
	if(var_100_bool == 0) goto Label_1368; // 0x554 JumpB
	var_101_string = "head"; // 0x555 PushS
	LookAsyncCamera(var_101_string); // 0x556 Func
}


func_1050(var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0); // 0x41a PushE
	var_99_float = GetByIndex(var_0_object, 2); // 0x41b PushE
	RotateAsync(var_98_float, var_99_float); // 0x41c Func
	return 0; // 0x41e Return
}


func_1055(var_29_bool)
{
	var_30_object = Obj(); var_31_bool = 0; var_32_object = Obj(); var_33_bool = 0; // 0x41f PushV
	var_34_string = "player"; // 0x420 PushS
	FindActor(var_32_object, var_34_string); // 0x421 Func
	var_35_bool = var_32_object == 0; // 0x423 Not
	if(var_35_bool == 0) goto Label_1063; // 0x424 JumpB
	var_29_bool = 0; // 0x425 MovB
	return 4; // 0x426 Return
	
Label_1063:
	var_36_float = 0; var_37_object = Obj(); // 0x427 PushV
	var_37_object = var_32_object; // 0x428 Mov
	func_1273(var_37_object); // 0x429 NEW_2
	var_44_float = 90000.0; // 0x42b PushF
	var_45_bool = var_36_float > var_44_float; // 0x42c GT
	if(var_45_bool == 0) goto Label_1072; // 0x42d JumpB
	var_29_bool = 0; // 0x42e MovB
	return 4; // 0x42f Return
	
Label_1072:
	CanSee(var_33_bool, var_32_object); // 0x430 Func
	var_29_bool = var_33_bool; // 0x432 Mov
	return 4; // 0x433 Return
}


func_1700(var_36_bool, var_37_object, var_38_int)
{
	var_39_object = Obj(); var_40_object = Obj(); var_41_int = 0; var_42_object = Obj(); var_43_object = Obj(); var_44_int = 0; // 0x6a4 PushV
	var_45_object = Obj(); // 0x6a5 PushV
	func_1687(var_45_object); // 0x6a6 NEW_2
	var_42_object = var_45_object; // 0x6a7 Mov
	Find(var_38_int, var_43_object); // 0x6a9 ObjFunc
	var_50_bool = var_43_object == 0; // 0x6ab Not
	if(var_50_bool == 0) goto Label_1715; // 0x6ac JumpB
	var_51_string = "Can't find diary parent with id: "; // 0x6ad PushS
	var_52_int = var_51_string + var_38_int; // 0x6ae Add
	Trace(var_52_int); // 0x6af Func
	var_36_bool = 0; // 0x6b1 MovB
	return 6; // 0x6b2 Return
	
Label_1715:
	AddChild(var_37_object); // 0x6b3 ObjFunc
	var_53_int = 7; // 0x6b5 PushI
	SendWorldWndMessage(var_53_int); // 0x6b6 Func
	GetCategory(var_44_int); // 0x6b8 ObjFunc
	SetDiarySection(var_44_int); // 0x6ba Func
	var_36_bool = 0; // 0x6bc MovB
	return 6; // 0x6bd Return
}


func_1576()
{
	var_24_bool = 0; // 0x628 PushV
	func_1651(var_24_bool); // 0x629 NEW_2
	if(var_24_bool == 0) goto Label_1582; // 0x62b JumpB
	lshStopSpeech(); // 0x62c Func
	
Label_1582:
	return 0; // 0x62e Return
}


func_1450(var_127_bool)
{
	var_129_string = ""; var_130_int = 0; var_131_bool = 0; var_132_int = 0; var_133_string = ""; var_134_string = ""; var_135_int = 0; var_136_bool = 0; var_137_int = 0; var_138_string = ""; // 0x5aa PushV
	var_134_string = "c"; // 0x5ab MovS
	var_135_int = 0; // 0x5ac MovI
	
Label_1453:
	var_139_int = 1; // 0x5ad PushI
	if(var_139_int == 0) goto Label_1466; // 0x5ae JumpB
	var_140_int = 1; // 0x5af PushI
	var_141_int = var_135_int + var_140_int; // 0x5b0 Add
	var_142_int = var_134_string + var_141_int; // 0x5b1 Add
	HasProperty(var_142_int, var_136_bool); // 0x5b2 ObjFunc
	var_143_bool = var_136_bool == 0; // 0x5b4 Not
	if(var_143_bool == 0) goto Label_1463; // 0x5b5 JumpB
	goto Label_1466; // 0x5b6 Jump
	
Label_1466:
	var_144_bool = var_135_int == 0; // 0x5ba Not
	if(var_144_bool == 0) goto Label_1470; // 0x5bb JumpB
	var_127_bool = 0; // 0x5bc MovB
	return 10; // 0x5bd Return
	
Label_1470:
	var_137_int = 0; // 0x5be MovI
	var_145_int = 1; // 0x5bf PushI
	var_146_bool = var_135_int > var_145_int; // 0x5c0 GT
	if(var_146_bool == 0) goto Label_1476; // 0x5c1 JumpB
	irand(var_137_int, var_135_int); // 0x5c2 Func
	
Label_1476:
	var_147_int = 1; // 0x5c4 PushI
	var_148_int = var_137_int + var_147_int; // 0x5c5 Add
	var_149_int = var_134_string + var_148_int; // 0x5c6 Add
	GetProperty(var_149_int, var_138_string); // 0x5c7 ObjFunc
	var_150_bool = 0; var_151_string = ""; // 0x5c9 PushV
	var_151_string = var_138_string; // 0x5ca Mov
	func_1561(var_150_bool, var_151_string); // 0x5cb NEW_2
	var_127_bool = var_150_bool; // 0x5cc Mov
	return 10; // 0x5ce Return
	
Label_1463:
	var_156_int = 1; // 0x5b7 PushI
	var_135_int = var_135_int + var_156_int; // 0x5b8 Add2
	goto Label_1453; // 0x5b9 Jump
}


func_555(var_0_object, var_340_int, var_341_object)
{
	var_343_object = Obj(); var_344_bool = 0; var_345_int = 0; var_346_bool = 0; var_347_object = Obj(); var_348_bool = 0; var_349_int = 0; var_350_bool = 0; // 0x22b PushV
	var_0_object = var_341_object; // 0x22c TMov
	var_351_bool = 0; var_352_object = Obj(); var_353_float = 0; // 0x22d PushV
	var_352_object = var_341_object; // 0x22e Mov
	var_353_float = 70.0; // 0x22f MovF
	func_1305(var_352_object, var_353_float); // 0x230 NEW_2
	var_354_bool = var_351_bool == 0; // 0x232 Not
	if(var_354_bool == 0) goto Label_566; // 0x233 JumpB
	var_340_int = -2; // 0x234 MovI
	return 8; // 0x235 Return
	
Label_566:
	CreateDialog(var_347_object); // 0x236 Func
	var_355_int = 0; // 0x238 PushV
	func_1645(var_355_int); // 0x239 NEW_2
	SetNPCName(var_355_int); // 0x23b ObjFunc
	var_356_int = 0; // 0x23d PushV
	func_1643(var_356_int); // 0x23e NEW_2
	SetNPCDescription(var_356_int); // 0x240 ObjFunc
	var_357_string = ""; // 0x242 PushV
	func_1647(var_357_string); // 0x243 NEW_2
	SetPhoto(var_357_string); // 0x245 ObjFunc
	var_358_string = ""; // 0x247 PushV
	func_1649(var_358_string); // 0x248 NEW_2
	SetPhoto2(var_358_string); // 0x24a ObjFunc
	var_359_int = 0; // 0x24c PushV
	func_1728(var_359_int); // 0x24d NEW_2
	SetPlayerName(var_359_int); // 0x24f ObjFunc
	var_349_int = -1; // 0x251 MovI
	IsOverrideActive(var_348_bool); // 0x252 Func
	var_360_bool = var_348_bool; // 0x254 Push
	if(var_360_bool == 0) goto Label_600; // 0x255 JumpB
	var_340_int = -2; // 0x256 MovI
	return 8; // 0x257 Return
	
Label_600:
	DoDialog(var_347_object); // 0x258 Func
	var_361_bool = 0; var_362_object = Obj(); // 0x25a PushV
	var_363_object = Obj(); // 0x25b PushV
	func_1583(var_363_object); // 0x25c NEW_2
	var_362_object = var_363_object; // 0x25d Mov
	func_1392(var_361_bool, var_362_object); // 0x25f NEW_2
	var_364_object = Obj(); var_365_object = Obj(); // 0x261 PushV
	var_364_object = var_341_object; // 0x262 Mov
	var_365_object = var_347_object; // 0x263 Mov
	TaskCall(5); // 0x264 TaskCall
	func_636(var_366_object, var_367_object, var_368_string, var_369_bool, var_364_object, var_365_object); // 0x265 NEW_2
	TaskReturn(); // 0x266 TaskReturn
	IsDialogEnd(var_350_bool); // 0x268 ObjFunc
	
Label_618:
	var_397_bool = var_350_bool == 0; // 0x26a Not
	if(var_397_bool == 0) goto Label_625; // 0x26b JumpB
	sync(); // 0x26c Func
	IsDialogEnd(var_350_bool); // 0x26e ObjFunc
	goto Label_618; // 0x270 Jump
	
Label_625:
	var_398_object = Obj(); // 0x271 PushV
	var_398_object = var_341_object; // 0x272 Mov
	func_1374(); // 0x273 NEW_2
	StopDialog(var_347_object); // 0x275 Func
	GetReturnValue(var_349_int); // 0x277 ObjFunc
	var_340_int = var_349_int; // 0x279 Mov
	return 8; // 0x27a Return
}


func_1197()
{
	var_25_int = 0; var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_int = 0; var_36_bool = 0; // 0x4ad PushV
	WaitForAnimEnd(); // 0x4ae Func
	var_37_bool = 0; // 0x4b0 PushV
	func_1300(var_37_bool); // 0x4b1 NEW_2
	var_38_bool = var_37_bool == 0; // 0x4b3 Not
	if(var_38_bool == 0) goto Label_1206; // 0x4b4 JumpB
	return 12; // 0x4b5 Return
	
Label_1206:
	var_39_int = 0; // 0x4b6 PushV
	func_1626(var_39_int); // 0x4b7 NEW_2
	var_31_int = var_39_int; // 0x4b8 Mov
	var_32_int = 0; // 0x4ba MovI
	
Label_1211:
	var_52_bool = 0; // 0x4bb PushV
	var_52_bool = 0; // 0x4bc MovB
	var_53_int = 5; // 0x4bd PushI
	var_54_bool = var_32_int < var_53_int; // 0x4be LT
	if(var_54_bool == 0) goto Label_1221; // 0x4bf JumpB
	var_55_bool = 0; // 0x4c0 PushV
	func_1300(var_55_bool); // 0x4c1 NEW_2
	if(var_55_bool == 0) goto Label_1221; // 0x4c3 JumpB
	var_52_bool = 1; // 0x4c4 MovB
	
Label_1221:
	if(var_52_bool == 0) goto Label_1263; // 0x4c5 JumpB
	var_56_bool = var_31_int == 0; // 0x4c6 Not
	if(var_56_bool == 0) goto Label_1231; // 0x4c7 JumpB
	var_57_int = 3; // 0x4c8 PushI
	Sleep(var_57_int, var_33_bool); // 0x4c9 Func
	var_58_bool = var_33_bool == 0; // 0x4cb Not
	if(var_58_bool == 0) goto Label_1230; // 0x4cc JumpB
	goto Label_1263; // 0x4cd Jump
	
Label_1263:
	ResetAAS(); // 0x4ef Func
	return 12; // 0x4f1 Return
	
Label_1230:
	goto Label_1252; // 0x4ce Jump
	
Label_1252:
	var_59_bool = 0; // 0x4e4 PushV
	func_1266(var_59_bool); // 0x4e5 NEW_2
	var_60_bool = var_59_bool == 0; // 0x4e7 Not
	if(var_60_bool == 0) goto Label_1258; // 0x4e8 JumpB
	goto Label_1263; // 0x4e9 Jump
	
Label_1258:
	ResetAAS(); // 0x4ea Func
	var_61_int = 1; // 0x4ec PushI
	var_32_int = var_32_int + var_61_int; // 0x4ed Add2
	goto Label_1211; // 0x4ee Jump
	
Label_1231:
	irand(var_34_int, var_31_int); // 0x4cf Func
	var_62_int = 5; // 0x4d1 PushI
	irand(var_35_int, var_62_int); // 0x4d2 Func
	var_63_int = 0; // 0x4d4 PushI
	var_64_bool = var_35_int != var_63_int; // 0x4d5 Neq
	if(var_64_bool == 0) goto Label_1240; // 0x4d6 JumpB
	var_34_int = 0; // 0x4d7 MovI
	
Label_1240:
	var_65_string = "all"; // 0x4d8 PushS
	var_66_string = ""; var_67_int = 0; // 0x4d9 PushV
	var_67_int = var_34_int; // 0x4da Mov
	func_1619(var_66_string, var_67_int); // 0x4db NEW_2
	PlayAnimation(var_65_string, var_66_string); // 0x4dd Func
	WaitForAnimEnd(var_36_bool); // 0x4df Func
	var_68_bool = var_36_bool == 0; // 0x4e1 Not
	if(var_68_bool == 0) goto Label_1252; // 0x4e2 JumpB
	goto Label_1263; // 0x4e3 Jump
}


func_814(var_0_object, var_399_int, var_400_object)
{
	var_402_object = Obj(); var_403_bool = 0; var_404_int = 0; var_405_bool = 0; var_406_object = Obj(); var_407_bool = 0; var_408_int = 0; var_409_bool = 0; // 0x32e PushV
	var_0_object = var_400_object; // 0x32f TMov
	var_410_bool = 0; var_411_object = Obj(); var_412_float = 0; // 0x330 PushV
	var_411_object = var_400_object; // 0x331 Mov
	var_412_float = 70.0; // 0x332 MovF
	func_1305(var_411_object, var_412_float); // 0x333 NEW_2
	var_413_bool = var_410_bool == 0; // 0x335 Not
	if(var_413_bool == 0) goto Label_825; // 0x336 JumpB
	var_399_int = -2; // 0x337 MovI
	return 8; // 0x338 Return
	
Label_825:
	CreateDialog(var_406_object); // 0x339 Func
	var_414_int = 0; // 0x33b PushV
	func_1645(var_414_int); // 0x33c NEW_2
	SetNPCName(var_414_int); // 0x33e ObjFunc
	var_415_int = 0; // 0x340 PushV
	func_1643(var_415_int); // 0x341 NEW_2
	SetNPCDescription(var_415_int); // 0x343 ObjFunc
	var_416_string = ""; // 0x345 PushV
	func_1647(var_416_string); // 0x346 NEW_2
	SetPhoto(var_416_string); // 0x348 ObjFunc
	var_417_string = ""; // 0x34a PushV
	func_1649(var_417_string); // 0x34b NEW_2
	SetPhoto2(var_417_string); // 0x34d ObjFunc
	var_418_int = 0; // 0x34f PushV
	func_1728(var_418_int); // 0x350 NEW_2
	SetPlayerName(var_418_int); // 0x352 ObjFunc
	var_408_int = -1; // 0x354 MovI
	IsOverrideActive(var_407_bool); // 0x355 Func
	var_419_bool = var_407_bool; // 0x357 Push
	if(var_419_bool == 0) goto Label_859; // 0x358 JumpB
	var_399_int = -2; // 0x359 MovI
	return 8; // 0x35a Return
	
Label_859:
	DoDialog(var_406_object); // 0x35b Func
	var_420_bool = 0; var_421_object = Obj(); // 0x35d PushV
	var_422_object = Obj(); // 0x35e PushV
	func_1583(var_422_object); // 0x35f NEW_2
	var_421_object = var_422_object; // 0x360 Mov
	func_1392(var_420_bool, var_421_object); // 0x362 NEW_2
	var_423_object = Obj(); var_424_object = Obj(); // 0x364 PushV
	var_423_object = var_400_object; // 0x365 Mov
	var_424_object = var_406_object; // 0x366 Mov
	TaskCall(7); // 0x367 TaskCall
	func_895(var_425_object, var_426_object, var_427_string, var_428_bool, var_423_object, var_424_object); // 0x368 NEW_2
	TaskReturn(); // 0x369 TaskReturn
	IsDialogEnd(var_409_bool); // 0x36b ObjFunc
	
Label_877:
	var_453_bool = var_409_bool == 0; // 0x36d Not
	if(var_453_bool == 0) goto Label_884; // 0x36e JumpB
	sync(); // 0x36f Func
	IsDialogEnd(var_409_bool); // 0x371 ObjFunc
	goto Label_877; // 0x373 Jump
	
Label_884:
	var_454_object = Obj(); // 0x374 PushV
	var_454_object = var_400_object; // 0x375 Mov
	func_1374(); // 0x376 NEW_2
	StopDialog(var_406_object); // 0x378 Func
	GetReturnValue(var_408_int); // 0x37a ObjFunc
	var_399_int = var_408_int; // 0x37c Mov
	return 8; // 0x37d Return
}


func_1583(var_118_object)
{
	var_119_object = Obj(); var_120_object = Obj(); // 0x62f PushV
	self(var_120_object); // 0x630 Func
	var_118_object = var_120_object; // 0x632 Mov
	return 2; // 0x633 Return
}


func_1077()
{
	var_457_float = 0; var_458_float = 0; // 0x435 PushV
	var_459_int = 8; // 0x436 PushI
	var_460_int = 16; // 0x437 PushI
	rand(var_458_float, var_459_int, var_460_int); // 0x438 Func
	var_461_int = 10; // 0x43a PushI
	SetTimer(var_461_int, var_458_float); // 0x43b Func
	return 2; // 0x43d Return
}


func_1589(var_82_cvector, var_83_cvector)
{
	var_85_float = 0; var_86_float = 0; // 0x635 PushV
	var_87_int = var_83_cvector | var_83_cvector; // 0x636 Or
	var_86_float = sqrt(var_87_int); // 0x637 Sqrt2
	var_88_float = 0.0; // 0x638 PushF
	var_89_bool = var_86_float < var_88_float; // 0x639 LT
	if(var_89_bool == 0) goto Label_1597; // 0x63a JumpB
	var_82_cvector = CVector(0.0, 0.0, 0.0); // 0x63b MovV
	return 2; // 0x63c Return
	
Label_1597:
	var_82_cvector = var_83_cvector / var_83_cvector; // 0x63d Div2
	return 2; // 0x63e Return
}


func_953(var_2_object, var_430_string)
{
	var_431_bool = 0; // 0x3ba PushV
	func_1651(var_431_bool); // 0x3bb NEW_2
	var_432_bool = var_431_bool == 0; // 0x3bd Not
	if(var_432_bool == 0) goto Label_960; // 0x3be JumpB
	return 0; // 0x3bf Return
	
Label_960:
	var_433_bool = var_430_string == var_2_object; // 0x3c0 Eq
	if(var_433_bool == 0) goto Label_963; // 0x3c1 JumpB
	return 0; // 0x3c2 Return
	
Label_963:
	var_434_string = ""; var_435_bool = 0; // 0x3c3 PushV
	var_434_string = var_430_string; // 0x3c4 Mov
	var_436_string = ""; // 0x3c5 PushS
	var_437_bool = var_430_string == var_436_string; // 0x3c6 Eq
	if(var_437_bool == 0) goto Label_970; // 0x3c7 JumpB
	var_435_bool = 0; // 0x3c8 MovB
	goto Label_971; // 0x3c9 Jump
	
Label_971:
	func_1546(var_434_string, var_435_bool); // 0x3cb NEW_2
	var_2_object = var_430_string; // 0x3cd TMov
	return 0; // 0x3ce Return
	
Label_970:
	var_435_bool = 1; // 0x3ca MovB
}


func_699(var_2_object, var_371_string)
{
	var_372_bool = 0; // 0x2bc PushV
	func_1651(var_372_bool); // 0x2bd NEW_2
	var_373_bool = var_372_bool == 0; // 0x2bf Not
	if(var_373_bool == 0) goto Label_706; // 0x2c0 JumpB
	return 0; // 0x2c1 Return
	
Label_706:
	var_374_bool = var_371_string == var_2_object; // 0x2c2 Eq
	if(var_374_bool == 0) goto Label_709; // 0x2c3 JumpB
	return 0; // 0x2c4 Return
	
Label_709:
	var_375_string = ""; var_376_bool = 0; // 0x2c5 PushV
	var_375_string = var_371_string; // 0x2c6 Mov
	var_377_string = ""; // 0x2c7 PushS
	var_378_bool = var_371_string == var_377_string; // 0x2c8 Eq
	if(var_378_bool == 0) goto Label_716; // 0x2c9 JumpB
	var_376_bool = 0; // 0x2ca MovB
	goto Label_717; // 0x2cb Jump
	
Label_717:
	func_1546(var_375_string, var_376_bool); // 0x2cd NEW_2
	var_2_object = var_371_string; // 0x2cf TMov
	return 0; // 0x2d0 Return
	
Label_716:
	var_376_bool = 1; // 0x2cc MovB
}


func_1086()
{
	var_456_int = 10; // 0x43e PushI
	KillTimer(var_456_int); // 0x43f Func
	return 0; // 0x441 Return
}


func_1599(var_313_int, var_314_string)
{
	var_315_int = 0; var_316_int = 0; // 0x63f PushV
	GetVariable(var_314_string, var_316_int); // 0x640 Func
	var_313_int = var_316_int; // 0x642 Mov
	return 2; // 0x643 Return
}


func_1728(var_107_int)
{
	var_108_int = 0; var_109_int = 0; // 0x6c0 PushV
	var_110_string = "branch"; // 0x6c1 PushS
	GetVariable(var_110_string, var_109_int); // 0x6c2 Func
	var_111_int = 0; // 0x6c4 PushI
	var_112_bool = var_109_int == var_111_int; // 0x6c5 Eq
	if(var_112_bool == 0) goto Label_1738; // 0x6c6 JumpB
	var_107_int = 1; // 0x6c7 MovI
	return 2; // 0x6c8 Return
	
Label_1738:
	var_113_int = 1; // 0x6ca PushI
	var_114_bool = var_109_int == var_113_int; // 0x6cb Eq
	if(var_114_bool == 0) goto Label_1743; // 0x6cc JumpB
	var_107_int = 2; // 0x6cd MovI
	return 2; // 0x6ce Return
	
Label_1743:
	var_107_int = 3; // 0x6cf MovI
	return 2; // 0x6d0 Return
}


func_1604(var_171_int)
{
	var_172_float = 0; var_173_float = 0; // 0x644 PushV
	GetGameTime(var_173_float); // 0x645 Func
	var_174_int = 1; // 0x647 PushI
	var_175_int = 0; // 0x648 PushV
	var_176_int = 24; // 0x649 PushI
	var_175_int = var_173_float / var_173_float; // 0x64a Div2
	var_171_int = var_174_int + var_175_int; // 0x64b Add2
	return 2; // 0x64c Return
}


func_333(var_0_object, var_1_object, var_2_object, var_3_string, var_295_object, var_296_object)
{
	var_0_object = var_296_object; // 0x14e TMov
	var_1_object = var_295_object; // 0x14f TMov
	var_3_string = 0; // 0x150 TMovB
	var_301_int = 1; // 0x151 PushI
	if(var_301_int == 0) goto Label_371; // 0x152 JumpB
	var_302_string = ""; // 0x153 PushV
	var_302_string = "Serious"; // 0x154 MovS
	func_401(var_296_object, var_302_string); // 0x155 NEW_2
	var_310_int = 526413; // 0x157 PushI
	SetMessage(var_310_int); // 0x158 TObjFunc
	ClearReplies(); // 0x15a TObjFunc
	var_311_bool = 0; var_312_object = Obj(); // 0x15c PushV
	var_312_object = var_1_object; // 0x15d MovT
	func_1662(var_312_object); // 0x15e NEW_2
	if(var_311_bool == 0) goto Label_358; // 0x160 JumpB
	var_319_int = 526414; // 0x161 PushI
	var_320_int = 30415; // 0x162 PushI
	var_321_int = 27689; // 0x163 PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0x164 TObjFunc
	
Label_358:
	var_322_int = 526419; // 0x166 PushI
	var_323_int = -1; // 0x167 PushI
	var_324_int = 27694; // 0x168 PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0x169 TObjFunc
	var_325_int = 528977; // 0x16b PushI
	var_326_int = -1; // 0x16c PushI
	var_327_int = 30414; // 0x16d PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0x16e TObjFunc
	goto Label_371; // 0x170 Jump
	
Label_371:
	var_328_bool = 0; // 0x173 PushV
	func_1651(var_328_bool); // 0x174 NEW_2
	if(var_328_bool == 0) goto Label_386; // 0x176 JumpB
	
Label_375:
	lshWaitForAnimEnd(); // 0x177 Func
	var_329_string = var_3_string; // 0x179 PushT
	if(var_329_string == 0) goto Label_380; // 0x17a JumpB
	goto Label_385; // 0x17b Jump
	
Label_385:
	goto Label_400; // 0x181 Jump
	
Label_400:
	return 0; // 0x190 Return
	
Label_380:
	var_330_string = ""; // 0x17c PushV
	var_330_string = var_2_object; // 0x17d MovT
	func_1530(var_330_string); // 0x17e NEW_2
	goto Label_375; // 0x180 Jump
	
Label_386:
	var_331_string = "all"; // 0x182 PushS
	var_332_string = "idle"; // 0x183 PushS
	PlayAnimation(var_331_string, var_332_string); // 0x184 Func
	
Label_390:
	WaitForAnimEnd(); // 0x186 Func
	var_333_string = var_3_string; // 0x188 PushT
	if(var_333_string == 0) goto Label_395; // 0x189 JumpB
	goto Label_400; // 0x18a Jump
	
Label_395:
	var_334_string = "all"; // 0x18b PushS
	var_335_string = "idle"; // 0x18c PushS
	PlayAnimation(var_334_string, var_335_string); // 0x18d Func
	goto Label_390; // 0x18f Jump
}


func_1613(var_268_bool, var_269_int)
{
	var_270_int = 0; // 0x64e PushV
	func_1604(var_270_int); // 0x64f NEW_2
	var_268_bool = var_270_int == var_269_int; // 0x651 Eq2
	return 0; // 0x652 Return
}


func_1487(var_158_bool)
{
	var_160_string = ""; var_161_int = 0; var_162_bool = 0; var_163_int = 0; var_164_string = ""; var_165_string = ""; var_166_int = 0; var_167_bool = 0; var_168_int = 0; var_169_string = ""; // 0x5cf PushV
	var_170_string = "d"; // 0x5d0 PushS
	var_171_int = 0; // 0x5d1 PushV
	func_1604(var_171_int); // 0x5d2 NEW_2
	var_177_int = var_170_string + var_171_int; // 0x5d4 Add
	var_178_string = "m"; // 0x5d5 PushS
	var_165_string = var_177_int + var_178_string; // 0x5d6 Add2
	var_166_int = 0; // 0x5d7 MovI
	
Label_1496:
	var_179_int = 1; // 0x5d8 PushI
	if(var_179_int == 0) goto Label_1509; // 0x5d9 JumpB
	var_180_int = 1; // 0x5da PushI
	var_181_int = var_166_int + var_180_int; // 0x5db Add
	var_182_int = var_165_string + var_181_int; // 0x5dc Add
	HasProperty(var_182_int, var_167_bool); // 0x5dd ObjFunc
	var_183_bool = var_167_bool == 0; // 0x5df Not
	if(var_183_bool == 0) goto Label_1506; // 0x5e0 JumpB
	goto Label_1509; // 0x5e1 Jump
	
Label_1509:
	var_184_bool = var_166_int == 0; // 0x5e5 Not
	if(var_184_bool == 0) goto Label_1513; // 0x5e6 JumpB
	var_158_bool = 0; // 0x5e7 MovB
	return 10; // 0x5e8 Return
	
Label_1513:
	var_168_int = 0; // 0x5e9 MovI
	var_185_int = 1; // 0x5ea PushI
	var_186_bool = var_166_int > var_185_int; // 0x5eb GT
	if(var_186_bool == 0) goto Label_1519; // 0x5ec JumpB
	irand(var_168_int, var_166_int); // 0x5ed Func
	
Label_1519:
	var_187_int = 1; // 0x5ef PushI
	var_188_int = var_168_int + var_187_int; // 0x5f0 Add
	var_189_int = var_165_string + var_188_int; // 0x5f1 Add
	GetProperty(var_189_int, var_169_string); // 0x5f2 ObjFunc
	var_190_bool = 0; var_191_string = ""; // 0x5f4 PushV
	var_191_string = var_169_string; // 0x5f5 Mov
	func_1561(var_190_bool, var_191_string); // 0x5f6 NEW_2
	var_158_bool = var_190_bool; // 0x5f7 Mov
	return 10; // 0x5f9 Return
	
Label_1506:
	var_192_int = 1; // 0x5e2 PushI
	var_166_int = var_166_int + var_192_int; // 0x5e3 Add2
	goto Label_1496; // 0x5e4 Jump
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_211_object, var_212_object)
{
	var_0_object = var_212_object; // 0x52 TMov
	var_1_object = var_211_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_217_int = 1; // 0x55 PushI
	if(var_217_int == 0) goto Label_104; // 0x56 JumpB
	var_218_string = ""; // 0x57 PushV
	var_218_string = "Neutral"; // 0x58 MovS
	func_134(var_212_object, var_218_string); // 0x59 NEW_2
	var_235_int = 525525; // 0x5b PushI
	SetMessage(var_235_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_236_int = 525526; // 0x60 PushI
	var_237_int = 30726; // 0x61 PushI
	var_238_int = 26882; // 0x62 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x63 TObjFunc
	goto Label_104; // 0x65 Jump
	
Label_104:
	var_239_bool = 0; // 0x68 PushV
	func_1651(var_239_bool); // 0x69 NEW_2
	if(var_239_bool == 0) goto Label_119; // 0x6b JumpB
	
Label_108:
	lshWaitForAnimEnd(); // 0x6c Func
	var_240_string = var_3_string; // 0x6e PushT
	if(var_240_string == 0) goto Label_113; // 0x6f JumpB
	goto Label_118; // 0x70 Jump
	
Label_118:
	goto Label_133; // 0x76 Jump
	
Label_133:
	return 0; // 0x85 Return
	
Label_113:
	var_241_string = ""; // 0x71 PushV
	var_241_string = var_2_object; // 0x72 MovT
	func_1530(var_241_string); // 0x73 NEW_2
	goto Label_108; // 0x75 Jump
	
Label_119:
	var_252_string = "all"; // 0x77 PushS
	var_253_string = "idle"; // 0x78 PushS
	PlayAnimation(var_252_string, var_253_string); // 0x79 Func
	
Label_123:
	WaitForAnimEnd(); // 0x7b Func
	var_254_string = var_3_string; // 0x7d PushT
	if(var_254_string == 0) goto Label_128; // 0x7e JumpB
	goto Label_133; // 0x7f Jump
	
Label_128:
	var_255_string = "all"; // 0x80 PushS
	var_256_string = "idle"; // 0x81 PushS
	PlayAnimation(var_255_string, var_256_string); // 0x82 Func
	goto Label_123; // 0x84 Jump
}


func_1745(var_39_object)
{
	var_40_int = 0; var_41_int = 0; // 0x6d1 PushV
	var_42_string = "mt_spi4ka"; // 0x6d2 PushS
	GetVariable(var_42_string, var_41_int); // 0x6d3 Func
	var_43_bool = var_41_int == 0; // 0x6d5 Not
	if(var_43_bool == 0) goto Label_1761; // 0x6d6 JumpB
	var_44_int = 0; var_45_object = Obj(); // 0x6d7 PushV
	var_45_object = var_39_object; // 0x6d8 Mov
	TaskCall(0); // 0x6d9 TaskCall
	func_0(var_46_object, var_44_int, var_45_object); // 0x6da NEW_2
	TaskReturn(); // 0x6db TaskReturn
	var_266_string = "mt_spi4ka"; // 0x6dd PushS
	var_267_int = 1; // 0x6de PushI
	SetVariable(var_266_string, var_267_int); // 0x6df Func
	
Label_1761:
	var_268_bool = 0; var_269_int = 0; // 0x6e1 PushV
	var_269_int = 8; // 0x6e2 MovI
	func_1613(var_268_bool, var_269_int); // 0x6e3 NEW_2
	if(var_268_bool == 0) goto Label_1773; // 0x6e5 JumpB
	var_271_int = 0; var_272_object = Obj(); // 0x6e6 PushV
	var_272_object = var_39_object; // 0x6e7 Mov
	TaskCall(2); // 0x6e8 TaskCall
	func_252(var_273_object, var_271_int, var_272_object); // 0x6e9 NEW_2
	TaskReturn(); // 0x6ea TaskReturn
	return 2; // 0x6ec Return
	
Label_1773:
	var_338_bool = 0; var_339_int = 0; // 0x6ed PushV
	var_339_int = 12; // 0x6ee MovI
	func_1613(var_338_bool, var_339_int); // 0x6ef NEW_2
	if(var_338_bool == 0) goto Label_1785; // 0x6f1 JumpB
	var_340_int = 0; var_341_object = Obj(); // 0x6f2 PushV
	var_341_object = var_39_object; // 0x6f3 Mov
	TaskCall(4); // 0x6f4 TaskCall
	func_555(var_342_object, var_340_int, var_341_object); // 0x6f5 NEW_2
	TaskReturn(); // 0x6f6 TaskReturn
	return 2; // 0x6f8 Return
	
Label_1785:
	var_399_int = 0; var_400_object = Obj(); // 0x6f9 PushV
	var_400_object = var_39_object; // 0x6fa Mov
	TaskCall(6); // 0x6fb TaskCall
	func_814(var_401_object, var_399_int, var_400_object); // 0x6fc NEW_2
	TaskReturn(); // 0x6fd TaskReturn
	return 2; // 0x6ff Return
}


func_1619(var_45_string, var_46_int)
{
	var_47_string = ""; var_48_string = ""; // 0x653 PushV
	var_48_string = "idle"; // 0x654 MovS
	var_49_int = var_46_int; // 0x655 Push
	if(var_49_int == 0) goto Label_1624; // 0x656 JumpB
	var_48_string = var_48_string + var_46_int; // 0x657 Add2
	
Label_1624:
	var_45_string = var_48_string; // 0x658 Mov
	return 2; // 0x659 Return
}


func_1626(var_39_int)
{
	var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_bool = 0; // 0x65a PushV
	var_42_int = 0; // 0x65b MovI
	
Label_1628:
	var_44_string = "all"; // 0x65c PushS
	var_45_string = ""; var_46_int = 0; // 0x65d PushV
	var_46_int = var_42_int; // 0x65e Mov
	func_1619(var_45_string, var_46_int); // 0x65f NEW_2
	HasAnimation(var_43_bool, var_44_string, var_45_string); // 0x661 Func
	var_50_bool = var_43_bool == 0; // 0x663 Not
	if(var_50_bool == 0) goto Label_1638; // 0x664 JumpB
	goto Label_1641; // 0x665 Jump
	
Label_1641:
	var_39_int = var_42_int; // 0x669 Mov
	return 4; // 0x66a Return
	
Label_1638:
	var_51_int = 1; // 0x666 PushI
	var_42_int = var_42_int + var_51_int; // 0x667 Add2
	goto Label_1628; // 0x668 Jump
}


func_1374()
{
	var_259_bool = 0; var_260_bool = 0; // 0x55e PushV
	var_261_bool = 1; // 0x55f PushB
	CameraSwitchToNormal(var_261_bool); // 0x560 Func
	var_262_bool = 0; // 0x562 PushV
	func_1651(var_262_bool); // 0x563 NEW_2
	if(var_262_bool == 0) goto Label_1383; // 0x565 JumpB
	goto Label_1391; // 0x566 Jump
	
Label_1391:
	return 2; // 0x56f Return
	
Label_1383:
	var_263_string = "head"; // 0x567 PushS
	HasAnimationTrack(var_260_bool, var_263_string); // 0x568 Func
	var_264_bool = var_260_bool; // 0x56a Push
	if(var_264_bool == 0) goto Label_1391; // 0x56b JumpB
	var_265_string = "head"; // 0x56c PushS
	UnlookAsync(var_265_string); // 0x56d Func
}


func_1643(var_104_int)
{
	var_104_int = 515552; // 0x66b MovI
	return 0; // 0x66c Return
}


func_1645(var_103_int)
{
	var_103_int = 502877; // 0x66d MovI
	return 0; // 0x66e Return
}


func_1647(var_105_string)
{
	var_105_string = "ui/NPC_Spi4ka.png"; // 0x66f MovS
	return 0; // 0x670 Return
}


func_1392(var_116_bool, var_117_object)
{
	var_121_int = 0; var_122_int = 0; var_123_int = 0; var_124_int = 0; // 0x570 PushV
	var_125_string = "voice_common"; // 0x571 PushS
	GetVariable(var_125_string, var_123_int); // 0x572 Func
	var_126_int = var_123_int; // 0x574 Push
	if(var_126_int == 0) goto Label_1430; // 0x575 JumpB
	var_127_bool = 0; var_128_object = Obj(); // 0x576 PushV
	var_128_object = var_117_object; // 0x577 Mov
	func_1450(var_128_object); // 0x578 NEW_2
	var_157_bool = var_127_bool == 0; // 0x57a Not
	if(var_157_bool == 0) goto Label_1412; // 0x57b JumpB
	var_158_bool = 0; var_159_object = Obj(); // 0x57c PushV
	var_159_object = var_117_object; // 0x57d Mov
	func_1487(var_159_object); // 0x57e NEW_2
	var_193_bool = var_158_bool == 0; // 0x580 Not
	if(var_193_bool == 0) goto Label_1412; // 0x581 JumpB
	var_116_bool = 0; // 0x582 MovB
	return 4; // 0x583 Return
	
Label_1412:
	var_194_int = 2; // 0x584 PushI
	irand(var_124_int, var_194_int); // 0x585 Func
	var_195_int = var_124_int; // 0x587 Push
	if(var_195_int == 0) goto Label_1425; // 0x588 JumpB
	var_196_string = "voice_common"; // 0x589 PushS
	var_197_int = 1; // 0x58a PushI
	var_198_int = var_123_int + var_197_int; // 0x58b Add
	var_199_int = 3; // 0x58c PushI
	var_200_int = var_198_int / var_199_int; // 0x58d Mod
	SetVariable(var_196_string, var_200_int); // 0x58e Func
	goto Label_1429; // 0x590 Jump
	
Label_1429:
	goto Label_1448; // 0x595 Jump
	
Label_1448:
	var_116_bool = 1; // 0x5a8 MovB
	return 4; // 0x5a9 Return
	
Label_1425:
	var_201_string = "voice_common"; // 0x591 PushS
	var_202_int = 0; // 0x592 PushI
	SetVariable(var_201_string, var_202_int); // 0x593 Func
	
Label_1430:
	var_203_bool = 0; var_204_object = Obj(); // 0x596 PushV
	var_204_object = var_117_object; // 0x597 Mov
	func_1487(var_204_object); // 0x598 NEW_2
	var_205_bool = var_203_bool == 0; // 0x59a Not
	if(var_205_bool == 0) goto Label_1444; // 0x59b JumpB
	var_206_bool = 0; var_207_object = Obj(); // 0x59c PushV
	var_207_object = var_117_object; // 0x59d Mov
	func_1450(var_207_object); // 0x59e NEW_2
	var_208_bool = var_206_bool == 0; // 0x5a0 Not
	if(var_208_bool == 0) goto Label_1444; // 0x5a1 JumpB
	var_116_bool = 0; // 0x5a2 MovB
	return 4; // 0x5a3 Return
	
Label_1444:
	var_209_string = "voice_common"; // 0x5a4 PushS
	var_210_int = 1; // 0x5a5 PushI
	SetVariable(var_209_string, var_210_int); // 0x5a6 Func
}


func_1649(var_106_string)
{
	var_106_string = "ui/NPC_Spi4ka_b.png"; // 0x671 MovS
	return 0; // 0x672 Return
}


func_1266(var_59_bool)
{
	var_59_bool = 1; // 0x4f2 MovB
	return 0; // 0x4f3 Return
}


func_1651(var_98_bool)
{
	var_98_bool = 1; // 0x673 MovB
	return 0; // 0x674 Return
}


func_1268()
{
	StopAnimation(); // 0x4f4 Func
	StopGroup0(); // 0x4f6 Func
	return 0; // 0x4f8 Return
}


func_1653()
{
	var_29_string = "k8q01"; // 0x676 PushS
	var_30_int = 3; // 0x677 PushI
	SetVariable(var_29_string, var_30_int); // 0x678 Func
	func_1674(); // 0x67b NEW_2
	return 0; // 0x67d Return
}


func_1273(var_36_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x4f9 PushV
	GetPosition(var_41_cvector); // 0x4fa Func
	GetPosition(var_42_cvector); // 0x4fc ObjFunc
	var_43_cvector = var_42_cvector - var_41_cvector; // 0x4fe Sub2
	var_36_float = var_43_cvector | var_43_cvector; // 0x4ff Or2
	return 6; // 0x500 Return
}


func_1530(var_241_string)
{
	var_242_bool = 0; var_243_float = 0; var_244_float = 0; var_245_bool = 0; var_246_float = 0; var_247_float = 0; // 0x5fa PushV
	lshHasAnimation(var_245_bool, var_241_string); // 0x5fb Func
	var_248_bool = var_245_bool; // 0x5fd Push
	if(var_248_bool == 0) goto Label_1541; // 0x5fe JumpB
	lshGetAnimTimes(var_241_string, var_246_float, var_247_float); // 0x5ff Func
	var_249_bool = 0; // 0x601 PushB
	lshPlayAnimation(var_246_float, var_247_float, var_249_bool); // 0x602 Func
	goto Label_1545; // 0x604 Jump
	
Label_1545:
	return 6; // 0x609 Return
	
Label_1541:
	var_250_string = "Can't find lsh animation : "; // 0x605 PushS
	var_251_int = var_250_string + var_241_string; // 0x606 Add
	Trace(var_251_int); // 0x607 Func
}


func_252(var_0_object, var_271_int, var_272_object)
{
	var_274_object = Obj(); var_275_bool = 0; var_276_int = 0; var_277_bool = 0; var_278_object = Obj(); var_279_bool = 0; var_280_int = 0; var_281_bool = 0; // 0xfc PushV
	var_0_object = var_272_object; // 0xfd TMov
	var_282_bool = 0; var_283_object = Obj(); var_284_float = 0; // 0xfe PushV
	var_283_object = var_272_object; // 0xff Mov
	var_284_float = 70.0; // 0x100 MovF
	func_1305(var_283_object, var_284_float); // 0x101 NEW_2
	var_285_bool = var_282_bool == 0; // 0x103 Not
	if(var_285_bool == 0) goto Label_263; // 0x104 JumpB
	var_271_int = -2; // 0x105 MovI
	return 8; // 0x106 Return
	
Label_263:
	CreateDialog(var_278_object); // 0x107 Func
	var_286_int = 0; // 0x109 PushV
	func_1645(var_286_int); // 0x10a NEW_2
	SetNPCName(var_286_int); // 0x10c ObjFunc
	var_287_int = 0; // 0x10e PushV
	func_1643(var_287_int); // 0x10f NEW_2
	SetNPCDescription(var_287_int); // 0x111 ObjFunc
	var_288_string = ""; // 0x113 PushV
	func_1647(var_288_string); // 0x114 NEW_2
	SetPhoto(var_288_string); // 0x116 ObjFunc
	var_289_string = ""; // 0x118 PushV
	func_1649(var_289_string); // 0x119 NEW_2
	SetPhoto2(var_289_string); // 0x11b ObjFunc
	var_290_int = 0; // 0x11d PushV
	func_1728(var_290_int); // 0x11e NEW_2
	SetPlayerName(var_290_int); // 0x120 ObjFunc
	var_280_int = -1; // 0x122 MovI
	IsOverrideActive(var_279_bool); // 0x123 Func
	var_291_bool = var_279_bool; // 0x125 Push
	if(var_291_bool == 0) goto Label_297; // 0x126 JumpB
	var_271_int = -2; // 0x127 MovI
	return 8; // 0x128 Return
	
Label_297:
	DoDialog(var_278_object); // 0x129 Func
	var_292_bool = 0; var_293_object = Obj(); // 0x12b PushV
	var_294_object = Obj(); // 0x12c PushV
	func_1583(var_294_object); // 0x12d NEW_2
	var_293_object = var_294_object; // 0x12e Mov
	func_1392(var_292_bool, var_293_object); // 0x130 NEW_2
	var_295_object = Obj(); var_296_object = Obj(); // 0x132 PushV
	var_295_object = var_272_object; // 0x133 Mov
	var_296_object = var_278_object; // 0x134 Mov
	TaskCall(3); // 0x135 TaskCall
	func_333(var_297_object, var_298_object, var_299_string, var_300_bool, var_295_object, var_296_object); // 0x136 NEW_2
	TaskReturn(); // 0x137 TaskReturn
	IsDialogEnd(var_281_bool); // 0x139 ObjFunc
	
Label_315:
	var_336_bool = var_281_bool == 0; // 0x13b Not
	if(var_336_bool == 0) goto Label_322; // 0x13c JumpB
	sync(); // 0x13d Func
	IsDialogEnd(var_281_bool); // 0x13f ObjFunc
	goto Label_315; // 0x141 Jump
	
Label_322:
	var_337_object = Obj(); // 0x142 PushV
	var_337_object = var_272_object; // 0x143 Mov
	func_1374(); // 0x144 NEW_2
	StopDialog(var_278_object); // 0x146 Func
	GetReturnValue(var_280_int); // 0x148 ObjFunc
	var_271_int = var_280_int; // 0x14a Mov
	return 8; // 0x14b Return
}


func_1021(var_0_object)
{
	var_21_bool = 0; // 0x3fd PushV
	func_1300(var_21_bool); // 0x3fe NEW_2
	var_24_bool = var_21_bool == 0; // 0x400 Not
	if(var_24_bool == 0) goto Label_1028; // 0x401 JumpB
	Hold(); // 0x402 Func
	
Label_1028:
	GetDirection(var_0_object); // 0x404 Func
	
Label_1030:
	func_1197(); // 0x407 NEW_2
	goto Label_1030; // 0x409 Jump
}


func_1662(var_311_bool)
{
	var_313_int = 0; var_314_string = ""; // 0x67f PushV
	var_314_string = "k8q01"; // 0x680 MovS
	func_1599(var_313_int, var_314_string); // 0x681 NEW_2
	var_317_int = 2; // 0x683 PushI
	var_318_bool = var_313_int == var_317_int; // 0x684 Eq
	if(var_318_bool == 0) goto Label_1672; // 0x685 JumpB
	var_311_bool = 1; // 0x686 MovB
	return 0; // 0x687 Return
	
Label_1672:
	var_311_bool = 0; // 0x688 MovB
	return 0; // 0x689 Return
}


func_895(var_0_object, var_1_object, var_2_object, var_3_string, var_423_object, var_424_object)
{
	var_0_object = var_424_object; // 0x380 TMov
	var_1_object = var_423_object; // 0x381 TMov
	var_3_string = 0; // 0x382 TMovB
	var_429_int = 1; // 0x383 PushI
	if(var_429_int == 0) goto Label_923; // 0x384 JumpB
	var_430_string = ""; // 0x385 PushV
	var_430_string = "Neutral"; // 0x386 MovS
	func_953(var_424_object, var_430_string); // 0x387 NEW_2
	var_438_int = 540545; // 0x389 PushI
	SetMessage(var_438_int); // 0x38a TObjFunc
	ClearReplies(); // 0x38c TObjFunc
	var_439_int = 540546; // 0x38e PushI
	var_440_int = -1; // 0x38f PushI
	var_441_int = 42555; // 0x390 PushI
	AddReply(var_439_int, var_440_int, var_441_int); // 0x391 TObjFunc
	var_442_int = 540798; // 0x393 PushI
	var_443_int = -1; // 0x394 PushI
	var_444_int = 42847; // 0x395 PushI
	AddReply(var_442_int, var_443_int, var_444_int); // 0x396 TObjFunc
	goto Label_923; // 0x398 Jump
	
Label_923:
	var_445_bool = 0; // 0x39b PushV
	func_1651(var_445_bool); // 0x39c NEW_2
	if(var_445_bool == 0) goto Label_938; // 0x39e JumpB
	
Label_927:
	lshWaitForAnimEnd(); // 0x39f Func
	var_446_string = var_3_string; // 0x3a1 PushT
	if(var_446_string == 0) goto Label_932; // 0x3a2 JumpB
	goto Label_937; // 0x3a3 Jump
	
Label_937:
	goto Label_952; // 0x3a9 Jump
	
Label_952:
	return 0; // 0x3b8 Return
	
Label_932:
	var_447_string = ""; // 0x3a4 PushV
	var_447_string = var_2_object; // 0x3a5 MovT
	func_1530(var_447_string); // 0x3a6 NEW_2
	goto Label_927; // 0x3a8 Jump
	
Label_938:
	var_448_string = "all"; // 0x3aa PushS
	var_449_string = "idle"; // 0x3ab PushS
	PlayAnimation(var_448_string, var_449_string); // 0x3ac Func
	
Label_942:
	WaitForAnimEnd(); // 0x3ae Func
	var_450_string = var_3_string; // 0x3b0 PushT
	if(var_450_string == 0) goto Label_947; // 0x3b1 JumpB
	goto Label_952; // 0x3b2 Jump
	
Label_947:
	var_451_string = "all"; // 0x3b3 PushS
	var_452_string = "idle"; // 0x3b4 PushS
	PlayAnimation(var_451_string, var_452_string); // 0x3b5 Func
	goto Label_942; // 0x3b7 Jump
}


