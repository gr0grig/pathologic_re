task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0xa7 PushI
	if(var_23_int == 0) goto Label_258; // 0xa8 JumpB
	func_1566(); // 0xaa NEW_2
	var_25_int = 36906; // 0xac PushI
	var_26_bool = var_21_bool == var_25_int; // 0xad Eq
	if(var_26_bool == 0) goto Label_200; // 0xae JumpB
	var_27_string = ""; // 0xaf PushV
	var_27_string = "Neutral"; // 0xb0 MovS
	func_144(var_22_cvector, var_27_string); // 0xb1 NEW_2
	var_44_int = 535231; // 0xb3 PushI
	SetMessage(var_44_int); // 0xb4 TObjFunc
	ClearReplies(); // 0xb6 TObjFunc
	var_45_int = 535232; // 0xb8 PushI
	var_46_int = 36953; // 0xb9 PushI
	var_47_int = 36907; // 0xba PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0xbb TObjFunc
	var_48_int = 535233; // 0xbd PushI
	var_49_int = -1; // 0xbe PushI
	var_50_int = 36908; // 0xbf PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0xc0 TObjFunc
	var_51_int = 535280; // 0xc2 PushI
	var_52_int = -1; // 0xc3 PushI
	var_53_int = 36956; // 0xc4 PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0xc5 TObjFunc
	return 0; // 0xc7 Return
	
Label_200:
	var_54_int = 36953; // 0xc8 PushI
	var_55_bool = var_21_bool == var_54_int; // 0xc9 Eq
	if(var_55_bool == 0) goto Label_223; // 0xca JumpB
	var_56_string = ""; // 0xcb PushV
	var_56_string = "Neutral"; // 0xcc MovS
	func_144(var_22_cvector, var_56_string); // 0xcd NEW_2
	var_57_int = 535277; // 0xcf PushI
	SetMessage(var_57_int); // 0xd0 TObjFunc
	ClearReplies(); // 0xd2 TObjFunc
	var_58_int = 535278; // 0xd4 PushI
	var_59_int = 36957; // 0xd5 PushI
	var_60_int = 36954; // 0xd6 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0xd7 TObjFunc
	var_61_int = 535279; // 0xd9 PushI
	var_62_int = 36957; // 0xda PushI
	var_63_int = 36955; // 0xdb PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0xdc TObjFunc
	return 0; // 0xde Return
	
Label_223:
	var_64_int = 36957; // 0xdf PushI
	var_65_bool = var_21_bool == var_64_int; // 0xe0 Eq
	if(var_65_bool == 0) goto Label_246; // 0xe1 JumpB
	var_66_string = ""; // 0xe2 PushV
	var_66_string = "Neutral"; // 0xe3 MovS
	func_144(var_22_cvector, var_66_string); // 0xe4 NEW_2
	var_67_int = 535281; // 0xe6 PushI
	SetMessage(var_67_int); // 0xe7 TObjFunc
	ClearReplies(); // 0xe9 TObjFunc
	var_68_int = 535282; // 0xeb PushI
	var_69_int = -1; // 0xec PushI
	var_70_int = 36958; // 0xed PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0xee TObjFunc
	var_71_int = 535283; // 0xf0 PushI
	var_72_int = -1; // 0xf1 PushI
	var_73_int = 36959; // 0xf2 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0xf3 TObjFunc
	return 0; // 0xf5 Return
	
Label_246:
	var_3_string = 1; // 0xf6 TMovB
	var_74_bool = 0; // 0xf7 PushV
	func_1641(var_74_bool); // 0xf8 NEW_2
	if(var_74_bool == 0) goto Label_254; // 0xfa JumpB
	lshStopAnimation(); // 0xfb Func
	goto Label_256; // 0xfd Jump
	
Label_256:
	return 0; // 0x100 Return
	
Label_254:
	StopAnimation(); // 0xfe Func
	
Label_258:
	return 0; // 0x102 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0x1a5 PushI
	if(var_23_int == 0) goto Label_484; // 0x1a6 JumpB
	func_1566(); // 0x1a8 NEW_2
	var_25_int = 19178; // 0x1aa PushI
	var_26_bool = var_21_bool == var_25_int; // 0x1ab Eq
	if(var_26_bool == 0) goto Label_449; // 0x1ac JumpB
	var_27_string = ""; // 0x1ad PushV
	var_27_string = "Neutral"; // 0x1ae MovS
	func_398(var_22_cvector, var_27_string); // 0x1af NEW_2
	var_44_int = 518045; // 0x1b1 PushI
	SetMessage(var_44_int); // 0x1b2 TObjFunc
	ClearReplies(); // 0x1b4 TObjFunc
	var_45_int = 518046; // 0x1b6 PushI
	var_46_int = 32123; // 0x1b7 PushI
	var_47_int = 19179; // 0x1b8 PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0x1b9 TObjFunc
	var_48_int = 530814; // 0x1bb PushI
	var_49_int = 32123; // 0x1bc PushI
	var_50_int = 32122; // 0x1bd PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0x1be TObjFunc
	return 0; // 0x1c0 Return
	
Label_449:
	var_51_int = 32123; // 0x1c1 PushI
	var_52_bool = var_21_bool == var_51_int; // 0x1c2 Eq
	if(var_52_bool == 0) goto Label_472; // 0x1c3 JumpB
	var_53_string = ""; // 0x1c4 PushV
	var_53_string = "Neutral"; // 0x1c5 MovS
	func_398(var_22_cvector, var_53_string); // 0x1c6 NEW_2
	var_54_int = 530815; // 0x1c8 PushI
	SetMessage(var_54_int); // 0x1c9 TObjFunc
	ClearReplies(); // 0x1cb TObjFunc
	var_55_int = 530816; // 0x1cd PushI
	var_56_int = -1; // 0x1ce PushI
	var_57_int = 32125; // 0x1cf PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0x1d0 TObjFunc
	var_58_int = 530817; // 0x1d2 PushI
	var_59_int = -1; // 0x1d3 PushI
	var_60_int = 32126; // 0x1d4 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0x1d5 TObjFunc
	return 0; // 0x1d7 Return
	
Label_472:
	var_3_string = 1; // 0x1d8 TMovB
	var_61_bool = 0; // 0x1d9 PushV
	func_1641(var_61_bool); // 0x1da NEW_2
	if(var_61_bool == 0) goto Label_480; // 0x1dc JumpB
	lshStopAnimation(); // 0x1dd Func
	goto Label_482; // 0x1df Jump
	
Label_482:
	return 0; // 0x1e2 Return
	
Label_480:
	StopAnimation(); // 0x1e0 Func
	
Label_484:
	return 0; // 0x1e4 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0x28c PushI
	if(var_23_int == 0) goto Label_805; // 0x28d JumpB
	func_1566(); // 0x28f NEW_2
	var_25_int = 20596; // 0x291 PushI
	var_26_bool = var_22_cvector == var_25_int; // 0x292 Eq
	if(var_26_bool == 0) goto Label_665; // 0x293 JumpB
	var_27_object = Obj(); var_28_object = Obj(); // 0x294 PushV
	var_27_object = var_1_object; // 0x295 MovT
	var_28_object = var_0_object; // 0x296 MovT
	func_1643(); // 0x297 NEW_2
	
Label_665:
	var_31_int = 19322; // 0x299 PushI
	var_32_bool = var_21_bool == var_31_int; // 0x29a Eq
	if(var_32_bool == 0) goto Label_693; // 0x29b JumpB
	var_33_string = ""; // 0x29c PushV
	var_33_string = "Neutral"; // 0x29d MovS
	func_629(var_22_cvector, var_33_string); // 0x29e NEW_2
	var_50_int = 518209; // 0x2a0 PushI
	SetMessage(var_50_int); // 0x2a1 TObjFunc
	ClearReplies(); // 0x2a3 TObjFunc
	var_51_bool = 0; var_52_object = Obj(); // 0x2a5 PushV
	var_52_object = var_1_object; // 0x2a6 MovT
	func_1649(var_52_object); // 0x2a7 NEW_2
	if(var_51_bool == 0) goto Label_687; // 0x2a9 JumpB
	var_59_int = 519429; // 0x2aa PushI
	var_60_int = 20597; // 0x2ab PushI
	var_61_int = 20596; // 0x2ac PushI
	AddReply(var_59_int, var_60_int, var_61_int); // 0x2ad TObjFunc
	
Label_687:
	var_62_int = 518211; // 0x2af PushI
	var_63_int = -1; // 0x2b0 PushI
	var_64_int = 19324; // 0x2b1 PushI
	AddReply(var_62_int, var_63_int, var_64_int); // 0x2b2 TObjFunc
	return 0; // 0x2b4 Return
	
Label_693:
	var_65_int = 20597; // 0x2b5 PushI
	var_66_bool = var_21_bool == var_65_int; // 0x2b6 Eq
	if(var_66_bool == 0) goto Label_716; // 0x2b7 JumpB
	var_67_string = ""; // 0x2b8 PushV
	var_67_string = "Neutral"; // 0x2b9 MovS
	func_629(var_22_cvector, var_67_string); // 0x2ba NEW_2
	var_68_int = 519430; // 0x2bc PushI
	SetMessage(var_68_int); // 0x2bd TObjFunc
	ClearReplies(); // 0x2bf TObjFunc
	var_69_int = 519431; // 0x2c1 PushI
	var_70_int = 20599; // 0x2c2 PushI
	var_71_int = 20598; // 0x2c3 PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0x2c4 TObjFunc
	var_72_int = 519438; // 0x2c6 PushI
	var_73_int = -1; // 0x2c7 PushI
	var_74_int = 20605; // 0x2c8 PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0x2c9 TObjFunc
	return 0; // 0x2cb Return
	
Label_716:
	var_75_int = 20599; // 0x2cc PushI
	var_76_bool = var_21_bool == var_75_int; // 0x2cd Eq
	if(var_76_bool == 0) goto Label_739; // 0x2ce JumpB
	var_77_string = ""; // 0x2cf PushV
	var_77_string = "Untrust"; // 0x2d0 MovS
	func_629(var_22_cvector, var_77_string); // 0x2d1 NEW_2
	var_78_int = 519432; // 0x2d3 PushI
	SetMessage(var_78_int); // 0x2d4 TObjFunc
	ClearReplies(); // 0x2d6 TObjFunc
	var_79_int = 519433; // 0x2d8 PushI
	var_80_int = 20601; // 0x2d9 PushI
	var_81_int = 20600; // 0x2da PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0x2db TObjFunc
	var_82_int = 519439; // 0x2dd PushI
	var_83_int = 20607; // 0x2de PushI
	var_84_int = 20606; // 0x2df PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x2e0 TObjFunc
	return 0; // 0x2e2 Return
	
Label_739:
	var_85_int = 20607; // 0x2e3 PushI
	var_86_bool = var_21_bool == var_85_int; // 0x2e4 Eq
	if(var_86_bool == 0) goto Label_757; // 0x2e5 JumpB
	var_87_string = ""; // 0x2e6 PushV
	var_87_string = "Neutral"; // 0x2e7 MovS
	func_629(var_22_cvector, var_87_string); // 0x2e8 NEW_2
	var_88_int = 519440; // 0x2ea PushI
	SetMessage(var_88_int); // 0x2eb TObjFunc
	ClearReplies(); // 0x2ed TObjFunc
	var_89_int = 519441; // 0x2ef PushI
	var_90_int = 20601; // 0x2f0 PushI
	var_91_int = 20608; // 0x2f1 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x2f2 TObjFunc
	return 0; // 0x2f4 Return
	
Label_757:
	var_92_int = 20601; // 0x2f5 PushI
	var_93_bool = var_21_bool == var_92_int; // 0x2f6 Eq
	if(var_93_bool == 0) goto Label_775; // 0x2f7 JumpB
	var_94_string = ""; // 0x2f8 PushV
	var_94_string = "Untrust"; // 0x2f9 MovS
	func_629(var_22_cvector, var_94_string); // 0x2fa NEW_2
	var_95_int = 519434; // 0x2fc PushI
	SetMessage(var_95_int); // 0x2fd TObjFunc
	ClearReplies(); // 0x2ff TObjFunc
	var_96_int = 519435; // 0x301 PushI
	var_97_int = 20603; // 0x302 PushI
	var_98_int = 20602; // 0x303 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x304 TObjFunc
	return 0; // 0x306 Return
	
Label_775:
	var_99_int = 20603; // 0x307 PushI
	var_100_bool = var_21_bool == var_99_int; // 0x308 Eq
	if(var_100_bool == 0) goto Label_793; // 0x309 JumpB
	var_101_string = ""; // 0x30a PushV
	var_101_string = "Untrust"; // 0x30b MovS
	func_629(var_22_cvector, var_101_string); // 0x30c NEW_2
	var_102_int = 519436; // 0x30e PushI
	SetMessage(var_102_int); // 0x30f TObjFunc
	ClearReplies(); // 0x311 TObjFunc
	var_103_int = 519437; // 0x313 PushI
	var_104_int = -1; // 0x314 PushI
	var_105_int = 20604; // 0x315 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x316 TObjFunc
	return 0; // 0x318 Return
	
Label_793:
	var_3_string = 1; // 0x319 TMovB
	var_106_bool = 0; // 0x31a PushV
	func_1641(var_106_bool); // 0x31b NEW_2
	if(var_106_bool == 0) goto Label_801; // 0x31d JumpB
	lshStopAnimation(); // 0x31e Func
	goto Label_803; // 0x320 Jump
	
Label_803:
	return 0; // 0x323 Return
	
Label_801:
	StopAnimation(); // 0x321 Func
	
Label_805:
	return 0; // 0x325 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_cvector)
{
	var_23_int = 1; // 0x3c8 PushI
	if(var_23_int == 0) goto Label_1008; // 0x3c9 JumpB
	func_1566(); // 0x3cb NEW_2
	var_25_int = 42563; // 0x3cd PushI
	var_26_bool = var_21_int == var_25_int; // 0x3ce Eq
	if(var_26_bool == 0) goto Label_996; // 0x3cf JumpB
	var_27_string = ""; // 0x3d0 PushV
	var_27_string = "Neutral"; // 0x3d1 MovS
	func_945(var_22_cvector, var_27_string); // 0x3d2 NEW_2
	var_44_int = 540554; // 0x3d4 PushI
	SetMessage(var_44_int); // 0x3d5 TObjFunc
	ClearReplies(); // 0x3d7 TObjFunc
	var_45_int = 540555; // 0x3d9 PushI
	var_46_int = -1; // 0x3da PushI
	var_47_int = 42564; // 0x3db PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0x3dc TObjFunc
	var_48_int = 540794; // 0x3de PushI
	var_49_int = -1; // 0x3df PushI
	var_50_int = 42843; // 0x3e0 PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0x3e1 TObjFunc
	return 0; // 0x3e3 Return
	
Label_996:
	var_3_string = 1; // 0x3e4 TMovB
	var_51_bool = 0; // 0x3e5 PushV
	func_1641(var_51_bool); // 0x3e6 NEW_2
	if(var_51_bool == 0) goto Label_1004; // 0x3e8 JumpB
	lshStopAnimation(); // 0x3e9 Func
	goto Label_1006; // 0x3eb Jump
	
Label_1006:
	return 0; // 0x3ee Return
	
Label_1004:
	StopAnimation(); // 0x3ec Func
	
Label_1008:
	return 0; // 0x3f0 Return
}


task_8_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_int)
{
	var_22_int = 10; // 0x43b PushI
	var_23_bool = var_21_int == var_22_int; // 0x43c Eq
	if(var_23_bool == 0) goto Label_1119; // 0x43d JumpB
	func_1078(); // 0x43f NEW_2
	var_25_bool = 0; // 0x441 PushV
	var_25_bool = 0; // 0x442 MovB
	var_26_bool = 0; // 0x443 PushV
	func_1292(var_26_bool); // 0x444 NEW_2
	if(var_26_bool == 0) goto Label_1100; // 0x446 JumpB
	var_29_bool = 0; // 0x447 PushV
	func_1047(var_29_bool); // 0x448 NEW_2
	if(var_29_bool == 0) goto Label_1100; // 0x44a JumpB
	var_25_bool = 1; // 0x44b MovB
	
Label_1100:
	if(var_25_bool == 0) goto Label_1113; // 0x44c JumpB
	var_46_bool = 0; // 0x44d PushV
	func_1027(var_46_bool); // 0x44e NEW_2
	if(var_46_bool == 0) goto Label_1112; // 0x450 JumpB
	var_65_bool = 0; var_66_object = Obj(); // 0x451 PushV
	var_67_object = Obj(); // 0x452 PushV
	func_1573(var_67_object); // 0x453 NEW_2
	var_66_object = var_67_object; // 0x454 Mov
	func_1440(var_66_object); // 0x456 NEW_2
	
Label_1112:
	goto Label_1119; // 0x458 Jump
	
Label_1119:
	return 0; // 0x45f Return
	
Label_1113:
	func_1042(var_21_int); // 0x45a NEW_2
	func_1069(); // 0x45d NEW_2
}


task_8_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	func_1260(); // 0x461 NEW_2
	func_1078(); // 0x464 NEW_2
	lshStopSpeech(); // 0x466 Func
	lshStopAnimation(); // 0x468 Func
	StopAsync(); // 0x46a Func
	Hold(); // 0x46c Func
	return 0; // 0x46e Return
}


task_8_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	StopGroup0(); // 0x46f Func
	func_1078(); // 0x472 NEW_2
	var_22_string = ""; // 0x474 PushV
	var_22_string = "Neutral"; // 0x475 MovS
	func_1520(var_22_string); // 0x476 NEW_2
	func_1069(); // 0x479 NEW_2
	return 0; // 0x47b Return
}


task_8_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_bool)
{
	var_22_bool = var_21_bool; // 0x47d Push
	if(var_22_bool == 0) goto Label_1155; // 0x47e JumpB
	func_1069(); // 0x480 NEW_2
	goto Label_1159; // 0x482 Jump
	
Label_1159:
	return 0; // 0x487 Return
	
Label_1155:
	var_28_string = ""; // 0x483 PushV
	var_28_string = "Neutral"; // 0x484 MovS
	func_1520(var_28_string); // 0x485 NEW_2
}


task_8_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0x488 PushV
	IsOverrideActive(var_23_bool); // 0x489 Func
	var_24_bool = var_23_bool == 0; // 0x48b Not
	if(var_24_bool == 0) goto Label_1188; // 0x48c JumpB
	EventDisable(0); // 0x48d EventDisable
	func_1260(); // 0x48f NEW_2
	var_25_bool = 0; var_26_object = Obj(); // 0x491 PushV
	var_26_object = var_21_object; // 0x492 Mov
	func_1283(var_26_object); // 0x493 NEW_2
	EventEnable(0); // 0x495 EventEnable
	var_39_object = Obj(); // 0x496 PushV
	var_39_object = var_21_object; // 0x497 Mov
	func_1678(var_39_object); // 0x498 NEW_2
	var_460_string = ""; // 0x49a PushV
	var_460_string = "Neutral"; // 0x49b MovS
	func_1520(var_460_string); // 0x49c NEW_2
	func_1078(); // 0x49f NEW_2
	func_1069(); // 0x4a2 NEW_2
	
Label_1188:
	return 2; // 0x4a4 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	func_1013(var_20_cvector); // 0x3f2 NEW_2
	return 0; // 0x3f4 Return
}


func_1536(var_223_string, var_224_bool)
{
	var_227_bool = 0; var_228_float = 0; var_229_float = 0; var_230_bool = 0; var_231_float = 0; var_232_float = 0; // 0x600 PushV
	lshHasAnimation(var_230_bool, var_223_string); // 0x601 Func
	var_233_bool = var_230_bool; // 0x603 Push
	if(var_233_bool == 0) goto Label_1546; // 0x604 JumpB
	lshGetAnimTimes(var_223_string, var_231_float, var_232_float); // 0x605 Func
	lshPlayAnimation(var_231_float, var_232_float, var_224_bool); // 0x607 Func
	goto Label_1550; // 0x609 Jump
	
Label_1550:
	return 6; // 0x60e Return
	
Label_1546:
	var_234_string = "Can't find lsh animation : "; // 0x60a PushS
	var_235_int = var_234_string + var_223_string; // 0x60b Add
	Trace(var_235_int); // 0x60c Func
}


func_0(var_0_object, var_343_int, var_344_object)
{
	var_346_object = Obj(); var_347_bool = 0; var_348_int = 0; var_349_bool = 0; var_350_object = Obj(); var_351_bool = 0; var_352_int = 0; var_353_bool = 0; // 0x0 PushV
	var_0_object = var_344_object; // 0x1 TMov
	var_354_bool = 0; var_355_object = Obj(); var_356_float = 0; // 0x2 PushV
	var_355_object = var_344_object; // 0x3 Mov
	var_356_float = 70.0; // 0x4 MovF
	func_1297(var_355_object, var_356_float); // 0x5 NEW_2
	var_357_bool = var_354_bool == 0; // 0x7 Not
	if(var_357_bool == 0) goto Label_11; // 0x8 JumpB
	var_343_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_350_object); // 0xb Func
	var_358_int = 0; // 0xd PushV
	func_1635(var_358_int); // 0xe NEW_2
	SetNPCName(var_358_int); // 0x10 ObjFunc
	var_359_int = 0; // 0x12 PushV
	func_1633(var_359_int); // 0x13 NEW_2
	SetNPCDescription(var_359_int); // 0x15 ObjFunc
	var_360_string = ""; // 0x17 PushV
	func_1637(var_360_string); // 0x18 NEW_2
	SetPhoto(var_360_string); // 0x1a ObjFunc
	var_361_string = ""; // 0x1c PushV
	func_1639(var_361_string); // 0x1d NEW_2
	SetPhoto2(var_361_string); // 0x1f ObjFunc
	var_362_int = 0; // 0x21 PushV
	func_1661(var_362_int); // 0x22 NEW_2
	SetPlayerName(var_362_int); // 0x24 ObjFunc
	var_352_int = -1; // 0x26 MovI
	IsOverrideActive(var_351_bool); // 0x27 Func
	var_363_bool = var_351_bool; // 0x29 Push
	if(var_363_bool == 0) goto Label_45; // 0x2a JumpB
	var_343_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_350_object); // 0x2d Func
	var_364_bool = 0; var_365_object = Obj(); // 0x2f PushV
	var_366_object = Obj(); // 0x30 PushV
	func_1573(var_366_object); // 0x31 NEW_2
	var_365_object = var_366_object; // 0x32 Mov
	func_1382(var_364_bool, var_365_object); // 0x34 NEW_2
	var_367_object = Obj(); var_368_object = Obj(); // 0x36 PushV
	var_367_object = var_344_object; // 0x37 Mov
	var_368_object = var_350_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_369_object, var_370_object, var_371_string, var_372_bool, var_367_object, var_368_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_353_bool); // 0x3d ObjFunc
	
Label_63:
	var_400_bool = var_353_bool == 0; // 0x3f Not
	if(var_400_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_353_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_401_object = Obj(); // 0x46 PushV
	var_401_object = var_344_object; // 0x47 Mov
	func_1365(); // 0x48 NEW_2
	StopDialog(var_350_object); // 0x4a Func
	GetReturnValue(var_352_int); // 0x4c ObjFunc
	var_343_int = var_352_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1027(var_46_bool)
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x403 PushV
	var_49_string = "player"; // 0x404 PushS
	FindActor(var_48_object, var_49_string); // 0x405 Func
	var_50_bool = var_48_object == 0; // 0x407 Not
	if(var_50_bool == 0) goto Label_1035; // 0x408 JumpB
	var_46_bool = 0; // 0x409 MovB
	return 2; // 0x40a Return
	
Label_1035:
	var_51_bool = 0; var_52_object = Obj(); // 0x40b PushV
	var_52_object = var_48_object; // 0x40c Mov
	func_1283(var_52_object); // 0x40d NEW_2
	var_46_bool = var_51_bool; // 0x40e Mov
	return 2; // 0x410 Return
}


func_1283(var_25_bool)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); // 0x503 PushV
	GetPosition(var_28_cvector); // 0x504 ObjFunc
	var_29_bool = 0; var_30_cvector = CVector(0,0,0); // 0x506 PushV
	var_30_cvector = var_28_cvector; // 0x507 Mov
	func_1273(var_29_bool, var_30_cvector); // 0x508 NEW_2
	var_25_bool = var_29_bool; // 0x509 Mov
	return 2; // 0x50b Return
}


func_259(var_0_object, var_46_int, var_47_object)
{
	var_49_object = Obj(); var_50_bool = 0; var_51_int = 0; var_52_bool = 0; var_53_object = Obj(); var_54_bool = 0; var_55_int = 0; var_56_bool = 0; // 0x103 PushV
	var_0_object = var_47_object; // 0x104 TMov
	var_57_bool = 0; var_58_object = Obj(); var_59_float = 0; // 0x105 PushV
	var_58_object = var_47_object; // 0x106 Mov
	var_59_float = 70.0; // 0x107 MovF
	func_1297(var_58_object, var_59_float); // 0x108 NEW_2
	var_103_bool = var_57_bool == 0; // 0x10a Not
	if(var_103_bool == 0) goto Label_270; // 0x10b JumpB
	var_46_int = -2; // 0x10c MovI
	return 8; // 0x10d Return
	
Label_270:
	CreateDialog(var_53_object); // 0x10e Func
	var_104_int = 0; // 0x110 PushV
	func_1635(var_104_int); // 0x111 NEW_2
	SetNPCName(var_104_int); // 0x113 ObjFunc
	var_105_int = 0; // 0x115 PushV
	func_1633(var_105_int); // 0x116 NEW_2
	SetNPCDescription(var_105_int); // 0x118 ObjFunc
	var_106_string = ""; // 0x11a PushV
	func_1637(var_106_string); // 0x11b NEW_2
	SetPhoto(var_106_string); // 0x11d ObjFunc
	var_107_string = ""; // 0x11f PushV
	func_1639(var_107_string); // 0x120 NEW_2
	SetPhoto2(var_107_string); // 0x122 ObjFunc
	var_108_int = 0; // 0x124 PushV
	func_1661(var_108_int); // 0x125 NEW_2
	SetPlayerName(var_108_int); // 0x127 ObjFunc
	var_55_int = -1; // 0x129 MovI
	IsOverrideActive(var_54_bool); // 0x12a Func
	var_116_bool = var_54_bool; // 0x12c Push
	if(var_116_bool == 0) goto Label_304; // 0x12d JumpB
	var_46_int = -2; // 0x12e MovI
	return 8; // 0x12f Return
	
Label_304:
	DoDialog(var_53_object); // 0x130 Func
	var_117_bool = 0; var_118_object = Obj(); // 0x132 PushV
	var_119_object = Obj(); // 0x133 PushV
	func_1573(var_119_object); // 0x134 NEW_2
	var_118_object = var_119_object; // 0x135 Mov
	func_1382(var_117_bool, var_118_object); // 0x137 NEW_2
	var_212_object = Obj(); var_213_object = Obj(); // 0x139 PushV
	var_212_object = var_47_object; // 0x13a Mov
	var_213_object = var_53_object; // 0x13b Mov
	TaskCall(3); // 0x13c TaskCall
	func_340(var_214_object, var_215_object, var_216_string, var_217_bool, var_212_object, var_213_object); // 0x13d NEW_2
	TaskReturn(); // 0x13e TaskReturn
	IsDialogEnd(var_56_bool); // 0x140 ObjFunc
	
Label_322:
	var_261_bool = var_56_bool == 0; // 0x142 Not
	if(var_261_bool == 0) goto Label_329; // 0x143 JumpB
	sync(); // 0x144 Func
	IsDialogEnd(var_56_bool); // 0x146 ObjFunc
	goto Label_322; // 0x148 Jump
	
Label_329:
	var_262_object = Obj(); // 0x149 PushV
	var_262_object = var_47_object; // 0x14a Mov
	func_1365(); // 0x14b NEW_2
	StopDialog(var_53_object); // 0x14d Func
	GetReturnValue(var_55_int); // 0x14f ObjFunc
	var_46_int = var_55_int; // 0x151 Mov
	return 8; // 0x152 Return
}


func_1292(var_21_bool)
{
	var_22_bool = 0; var_23_bool = 0; // 0x50c PushV
	IsLoaded(var_23_bool); // 0x50d Func
	var_21_bool = var_23_bool; // 0x50f Mov
	return 2; // 0x510 Return
}


func_398(var_2_object, var_219_string)
{
	var_220_bool = 0; // 0x18f PushV
	func_1641(var_220_bool); // 0x190 NEW_2
	var_221_bool = var_220_bool == 0; // 0x192 Not
	if(var_221_bool == 0) goto Label_405; // 0x193 JumpB
	return 0; // 0x194 Return
	
Label_405:
	var_222_bool = var_219_string == var_2_object; // 0x195 Eq
	if(var_222_bool == 0) goto Label_408; // 0x196 JumpB
	return 0; // 0x197 Return
	
Label_408:
	var_223_string = ""; var_224_bool = 0; // 0x198 PushV
	var_223_string = var_219_string; // 0x199 Mov
	var_225_string = ""; // 0x19a PushS
	var_226_bool = var_219_string == var_225_string; // 0x19b Eq
	if(var_226_bool == 0) goto Label_415; // 0x19c JumpB
	var_224_bool = 0; // 0x19d MovB
	goto Label_416; // 0x19e Jump
	
Label_416:
	func_1536(var_223_string, var_224_bool); // 0x1a0 NEW_2
	var_2_object = var_219_string; // 0x1a2 TMov
	return 0; // 0x1a3 Return
	
Label_415:
	var_224_bool = 1; // 0x19f MovB
}


func_1678(var_39_object)
{
	var_40_int = 0; var_41_int = 0; var_42_int = 0; var_43_int = 0; // 0x68e PushV
	var_44_string = "mt_petr"; // 0x68f PushS
	GetVariable(var_44_string, var_42_int); // 0x690 Func
	var_45_bool = var_42_int == 0; // 0x692 Not
	if(var_45_bool == 0) goto Label_1694; // 0x693 JumpB
	var_46_int = 0; var_47_object = Obj(); // 0x694 PushV
	var_47_object = var_39_object; // 0x695 Mov
	TaskCall(2); // 0x696 TaskCall
	func_259(var_48_object, var_46_int, var_47_object); // 0x697 NEW_2
	TaskReturn(); // 0x698 TaskReturn
	var_269_string = "mt_petr"; // 0x69a PushS
	var_270_int = 1; // 0x69b PushI
	SetVariable(var_269_string, var_270_int); // 0x69c Func
	
Label_1694:
	var_271_bool = 0; var_272_int = 0; // 0x69e PushV
	var_272_int = 2; // 0x69f MovI
	func_1603(var_271_bool, var_272_int); // 0x6a0 NEW_2
	if(var_271_bool == 0) goto Label_1706; // 0x6a2 JumpB
	var_274_int = 0; var_275_object = Obj(); // 0x6a3 PushV
	var_275_object = var_39_object; // 0x6a4 Mov
	TaskCall(4); // 0x6a5 TaskCall
	func_485(var_276_object, var_274_int, var_275_object); // 0x6a6 NEW_2
	TaskReturn(); // 0x6a7 TaskReturn
	return 4; // 0x6a9 Return
	
Label_1706:
	var_338_string = "d12_petr"; // 0x6aa PushS
	GetVariable(var_338_string, var_43_int); // 0x6ab Func
	var_339_bool = 0; // 0x6ad PushV
	var_339_bool = 0; // 0x6ae MovB
	var_340_bool = 0; var_341_int = 0; // 0x6af PushV
	var_341_int = 12; // 0x6b0 MovI
	func_1603(var_340_bool, var_341_int); // 0x6b1 NEW_2
	if(var_340_bool == 0) goto Label_1719; // 0x6b3 JumpB
	var_342_int = var_43_int; // 0x6b4 Push
	if(var_342_int == 0) goto Label_1719; // 0x6b5 JumpB
	var_339_bool = 1; // 0x6b6 MovB
	
Label_1719:
	if(var_339_bool == 0) goto Label_1731; // 0x6b7 JumpB
	var_343_int = 0; var_344_object = Obj(); // 0x6b8 PushV
	var_344_object = var_39_object; // 0x6b9 Mov
	TaskCall(0); // 0x6ba TaskCall
	func_0(var_345_object, var_343_int, var_344_object); // 0x6bb NEW_2
	TaskReturn(); // 0x6bc TaskReturn
	var_402_string = "d12_petr"; // 0x6be PushS
	var_403_int = 1; // 0x6bf PushI
	SetVariable(var_402_string, var_403_int); // 0x6c0 Func
	return 4; // 0x6c2 Return
	
Label_1731:
	var_404_int = 0; var_405_object = Obj(); // 0x6c3 PushV
	var_405_object = var_39_object; // 0x6c4 Mov
	TaskCall(6); // 0x6c5 TaskCall
	func_806(var_406_object, var_404_int, var_405_object); // 0x6c6 NEW_2
	TaskReturn(); // 0x6c7 TaskReturn
	return 4; // 0x6c9 Return
}


func_144(var_2_object, var_374_string)
{
	var_375_bool = 0; // 0x91 PushV
	func_1641(var_375_bool); // 0x92 NEW_2
	var_376_bool = var_375_bool == 0; // 0x94 Not
	if(var_376_bool == 0) goto Label_151; // 0x95 JumpB
	return 0; // 0x96 Return
	
Label_151:
	var_377_bool = var_374_string == var_2_object; // 0x97 Eq
	if(var_377_bool == 0) goto Label_154; // 0x98 JumpB
	return 0; // 0x99 Return
	
Label_154:
	var_378_string = ""; var_379_bool = 0; // 0x9a PushV
	var_378_string = var_374_string; // 0x9b Mov
	var_380_string = ""; // 0x9c PushS
	var_381_bool = var_374_string == var_380_string; // 0x9d Eq
	if(var_381_bool == 0) goto Label_161; // 0x9e JumpB
	var_379_bool = 0; // 0x9f MovB
	goto Label_162; // 0xa0 Jump
	
Label_162:
	func_1536(var_378_string, var_379_bool); // 0xa2 NEW_2
	var_2_object = var_374_string; // 0xa4 TMov
	return 0; // 0xa5 Return
	
Label_161:
	var_379_bool = 1; // 0xa1 MovB
}


func_1297(var_57_bool, var_59_float)
{
	var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_bool = 0; var_68_bool = 0; var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_bool = 0; var_77_bool = 0; // 0x511 PushV
	GetPosition(var_70_cvector); // 0x512 ObjFunc
	GetEyesHeight(var_69_float); // 0x514 ObjFunc
	var_78_float = GetByIndex(var_70_cvector, 1); // 0x516 PushE
	var_78_float = var_78_float + var_69_float; // 0x517 Add2
	SetByIndex(var_70_cvector, 1) = var_78_float; // 0x518 PopE
	GetPosition(var_71_cvector); // 0x519 Func
	GetEyesHeight(var_69_float); // 0x51b Func
	var_79_float = GetByIndex(var_71_cvector, 1); // 0x51d PushE
	var_79_float = var_79_float + var_69_float; // 0x51e Add2
	SetByIndex(var_71_cvector, 1) = var_79_float; // 0x51f PopE
	var_72_cvector = var_70_cvector - var_71_cvector; // 0x520 Sub2
	var_80_float = GetByIndex(var_72_cvector, 1); // 0x521 PushE
	var_80_float = 0; // 0x522 MovI
	SetByIndex(var_72_cvector, 1) = var_80_float; // 0x523 PopE
	var_81_int = var_72_cvector | var_72_cvector; // 0x524 Or
	var_82_float = sqrt(var_81_int); // 0x525 Sqrt
	var_72_cvector = var_72_cvector / var_72_cvector; // 0x526 Div2
	var_73_cvector = -var_72_cvector; // 0x527 Neg2
	var_83_float = var_72_cvector * var_59_float; // 0x528 Mult
	var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); // 0x529 PushV
	var_86_cvector = CVector(0.0, 1.0, 0.0); // 0x52a PushVec
	var_85_cvector = var_73_cvector ^ var_86_cvector; // 0x52b Xor2
	func_1579(var_84_cvector, var_85_cvector); // 0x52c NEW_2
	var_92_int = 25; // 0x52e PushI
	var_93_float = var_84_cvector * var_92_int; // 0x52f Mult
	var_94_int = var_83_float + var_93_float; // 0x530 Add
	var_95_cvector = CVector(0.0, 10.0, 0.0); // 0x531 PushVec
	var_74_cvector = var_94_int - var_95_cvector; // 0x532 Sub2
	var_75_cvector = var_71_cvector + var_74_cvector; // 0x533 Add2
	IsOverrideActive(var_76_bool); // 0x534 Func
	var_96_bool = var_76_bool; // 0x536 Push
	if(var_96_bool == 0) goto Label_1338; // 0x537 JumpB
	var_57_bool = 0; // 0x538 MovB
	return 18; // 0x539 Return
	
Label_1338:
	StopWorld(); // 0x53a Func
	CameraTransit(var_75_cvector, var_73_cvector); // 0x53c Func
	var_97_float = GetByIndex(var_74_cvector, 0); // 0x53e PushE
	var_98_float = GetByIndex(var_74_cvector, 2); // 0x53f PushE
	Rotate(var_97_float, var_98_float); // 0x540 Func
	var_99_bool = 0; // 0x542 PushV
	func_1641(var_99_bool); // 0x543 NEW_2
	if(var_99_bool == 0) goto Label_1351; // 0x545 JumpB
	goto Label_1359; // 0x546 Jump
	
Label_1359:
	CameraWaitForPlayFinish(); // 0x54f Func
	ResumeWorld(); // 0x551 Func
	var_57_bool = 1; // 0x553 MovB
	return 18; // 0x554 Return
	
Label_1351:
	var_100_string = "head"; // 0x547 PushS
	HasAnimationTrack(var_77_bool, var_100_string); // 0x548 Func
	var_101_bool = var_77_bool; // 0x54a Push
	if(var_101_bool == 0) goto Label_1359; // 0x54b JumpB
	var_102_string = "head"; // 0x54c PushS
	LookAsyncCamera(var_102_string); // 0x54d Func
}


func_1042(var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0); // 0x412 PushE
	var_99_float = GetByIndex(var_0_object, 2); // 0x413 PushE
	RotateAsync(var_98_float, var_99_float); // 0x414 Func
	return 0; // 0x416 Return
}


func_1551(var_151_bool, var_152_string)
{
	var_153_bool = 0; var_154_bool = 0; // 0x60f PushV
	var_155_bool = 0; // 0x610 PushV
	func_1641(var_155_bool); // 0x611 NEW_2
	if(var_155_bool == 0) goto Label_1564; // 0x613 JumpB
	lshHasSpeech(var_154_bool, var_152_string); // 0x614 Func
	var_156_bool = var_154_bool; // 0x616 Push
	if(var_156_bool == 0) goto Label_1564; // 0x617 JumpB
	lshPlaySpeech(var_152_string); // 0x618 Func
	var_151_bool = 1; // 0x61a MovB
	return 2; // 0x61b Return
	
Label_1564:
	var_151_bool = 0; // 0x61c MovB
	return 2; // 0x61d Return
}


func_1047(var_29_bool)
{
	var_30_object = Obj(); var_31_bool = 0; var_32_object = Obj(); var_33_bool = 0; // 0x417 PushV
	var_34_string = "player"; // 0x418 PushS
	FindActor(var_32_object, var_34_string); // 0x419 Func
	var_35_bool = var_32_object == 0; // 0x41b Not
	if(var_35_bool == 0) goto Label_1055; // 0x41c JumpB
	var_29_bool = 0; // 0x41d MovB
	return 4; // 0x41e Return
	
Label_1055:
	var_36_float = 0; var_37_object = Obj(); // 0x41f PushV
	var_37_object = var_32_object; // 0x420 Mov
	func_1265(var_37_object); // 0x421 NEW_2
	var_44_float = 90000.0; // 0x423 PushF
	var_45_bool = var_36_float > var_44_float; // 0x424 GT
	if(var_45_bool == 0) goto Label_1064; // 0x425 JumpB
	var_29_bool = 0; // 0x426 MovB
	return 4; // 0x427 Return
	
Label_1064:
	CanSee(var_33_bool, var_32_object); // 0x428 Func
	var_29_bool = var_33_bool; // 0x42a Mov
	return 4; // 0x42b Return
}


func_1566()
{
	var_24_bool = 0; // 0x61e PushV
	func_1641(var_24_bool); // 0x61f NEW_2
	if(var_24_bool == 0) goto Label_1572; // 0x621 JumpB
	lshStopSpeech(); // 0x622 Func
	
Label_1572:
	return 0; // 0x624 Return
}


func_1440(var_128_bool)
{
	var_130_string = ""; var_131_int = 0; var_132_bool = 0; var_133_int = 0; var_134_string = ""; var_135_string = ""; var_136_int = 0; var_137_bool = 0; var_138_int = 0; var_139_string = ""; // 0x5a0 PushV
	var_135_string = "c"; // 0x5a1 MovS
	var_136_int = 0; // 0x5a2 MovI
	
Label_1443:
	var_140_int = 1; // 0x5a3 PushI
	if(var_140_int == 0) goto Label_1456; // 0x5a4 JumpB
	var_141_int = 1; // 0x5a5 PushI
	var_142_int = var_136_int + var_141_int; // 0x5a6 Add
	var_143_int = var_135_string + var_142_int; // 0x5a7 Add
	HasProperty(var_143_int, var_137_bool); // 0x5a8 ObjFunc
	var_144_bool = var_137_bool == 0; // 0x5aa Not
	if(var_144_bool == 0) goto Label_1453; // 0x5ab JumpB
	goto Label_1456; // 0x5ac Jump
	
Label_1456:
	var_145_bool = var_136_int == 0; // 0x5b0 Not
	if(var_145_bool == 0) goto Label_1460; // 0x5b1 JumpB
	var_128_bool = 0; // 0x5b2 MovB
	return 10; // 0x5b3 Return
	
Label_1460:
	var_138_int = 0; // 0x5b4 MovI
	var_146_int = 1; // 0x5b5 PushI
	var_147_bool = var_136_int > var_146_int; // 0x5b6 GT
	if(var_147_bool == 0) goto Label_1466; // 0x5b7 JumpB
	irand(var_138_int, var_136_int); // 0x5b8 Func
	
Label_1466:
	var_148_int = 1; // 0x5ba PushI
	var_149_int = var_138_int + var_148_int; // 0x5bb Add
	var_150_int = var_135_string + var_149_int; // 0x5bc Add
	GetProperty(var_150_int, var_139_string); // 0x5bd ObjFunc
	var_151_bool = 0; var_152_string = ""; // 0x5bf PushV
	var_152_string = var_139_string; // 0x5c0 Mov
	func_1551(var_151_bool, var_152_string); // 0x5c1 NEW_2
	var_128_bool = var_151_bool; // 0x5c2 Mov
	return 10; // 0x5c4 Return
	
Label_1453:
	var_157_int = 1; // 0x5ad PushI
	var_136_int = var_136_int + var_157_int; // 0x5ae Add2
	goto Label_1443; // 0x5af Jump
}


func_1573(var_119_object)
{
	var_120_object = Obj(); var_121_object = Obj(); // 0x625 PushV
	self(var_121_object); // 0x626 Func
	var_119_object = var_121_object; // 0x628 Mov
	return 2; // 0x629 Return
}


func_1189()
{
	var_25_int = 0; var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_int = 0; var_36_bool = 0; // 0x4a5 PushV
	WaitForAnimEnd(); // 0x4a6 Func
	var_37_bool = 0; // 0x4a8 PushV
	func_1292(var_37_bool); // 0x4a9 NEW_2
	var_38_bool = var_37_bool == 0; // 0x4ab Not
	if(var_38_bool == 0) goto Label_1198; // 0x4ac JumpB
	return 12; // 0x4ad Return
	
Label_1198:
	var_39_int = 0; // 0x4ae PushV
	func_1616(var_39_int); // 0x4af NEW_2
	var_31_int = var_39_int; // 0x4b0 Mov
	var_32_int = 0; // 0x4b2 MovI
	
Label_1203:
	var_52_bool = 0; // 0x4b3 PushV
	var_52_bool = 0; // 0x4b4 MovB
	var_53_int = 5; // 0x4b5 PushI
	var_54_bool = var_32_int < var_53_int; // 0x4b6 LT
	if(var_54_bool == 0) goto Label_1213; // 0x4b7 JumpB
	var_55_bool = 0; // 0x4b8 PushV
	func_1292(var_55_bool); // 0x4b9 NEW_2
	if(var_55_bool == 0) goto Label_1213; // 0x4bb JumpB
	var_52_bool = 1; // 0x4bc MovB
	
Label_1213:
	if(var_52_bool == 0) goto Label_1255; // 0x4bd JumpB
	var_56_bool = var_31_int == 0; // 0x4be Not
	if(var_56_bool == 0) goto Label_1223; // 0x4bf JumpB
	var_57_int = 3; // 0x4c0 PushI
	Sleep(var_57_int, var_33_bool); // 0x4c1 Func
	var_58_bool = var_33_bool == 0; // 0x4c3 Not
	if(var_58_bool == 0) goto Label_1222; // 0x4c4 JumpB
	goto Label_1255; // 0x4c5 Jump
	
Label_1255:
	ResetAAS(); // 0x4e7 Func
	return 12; // 0x4e9 Return
	
Label_1222:
	goto Label_1244; // 0x4c6 Jump
	
Label_1244:
	var_59_bool = 0; // 0x4dc PushV
	func_1258(var_59_bool); // 0x4dd NEW_2
	var_60_bool = var_59_bool == 0; // 0x4df Not
	if(var_60_bool == 0) goto Label_1250; // 0x4e0 JumpB
	goto Label_1255; // 0x4e1 Jump
	
Label_1250:
	ResetAAS(); // 0x4e2 Func
	var_61_int = 1; // 0x4e4 PushI
	var_32_int = var_32_int + var_61_int; // 0x4e5 Add2
	goto Label_1203; // 0x4e6 Jump
	
Label_1223:
	irand(var_34_int, var_31_int); // 0x4c7 Func
	var_62_int = 5; // 0x4c9 PushI
	irand(var_35_int, var_62_int); // 0x4ca Func
	var_63_int = 0; // 0x4cc PushI
	var_64_bool = var_35_int != var_63_int; // 0x4cd Neq
	if(var_64_bool == 0) goto Label_1232; // 0x4ce JumpB
	var_34_int = 0; // 0x4cf MovI
	
Label_1232:
	var_65_string = "all"; // 0x4d0 PushS
	var_66_string = ""; var_67_int = 0; // 0x4d1 PushV
	var_67_int = var_34_int; // 0x4d2 Mov
	func_1609(var_66_string, var_67_int); // 0x4d3 NEW_2
	PlayAnimation(var_65_string, var_66_string); // 0x4d5 Func
	WaitForAnimEnd(var_36_bool); // 0x4d7 Func
	var_68_bool = var_36_bool == 0; // 0x4d9 Not
	if(var_68_bool == 0) goto Label_1244; // 0x4da JumpB
	goto Label_1255; // 0x4db Jump
}


func_806(var_0_object, var_404_int, var_405_object)
{
	var_407_object = Obj(); var_408_bool = 0; var_409_int = 0; var_410_bool = 0; var_411_object = Obj(); var_412_bool = 0; var_413_int = 0; var_414_bool = 0; // 0x326 PushV
	var_0_object = var_405_object; // 0x327 TMov
	var_415_bool = 0; var_416_object = Obj(); var_417_float = 0; // 0x328 PushV
	var_416_object = var_405_object; // 0x329 Mov
	var_417_float = 70.0; // 0x32a MovF
	func_1297(var_416_object, var_417_float); // 0x32b NEW_2
	var_418_bool = var_415_bool == 0; // 0x32d Not
	if(var_418_bool == 0) goto Label_817; // 0x32e JumpB
	var_404_int = -2; // 0x32f MovI
	return 8; // 0x330 Return
	
Label_817:
	CreateDialog(var_411_object); // 0x331 Func
	var_419_int = 0; // 0x333 PushV
	func_1635(var_419_int); // 0x334 NEW_2
	SetNPCName(var_419_int); // 0x336 ObjFunc
	var_420_int = 0; // 0x338 PushV
	func_1633(var_420_int); // 0x339 NEW_2
	SetNPCDescription(var_420_int); // 0x33b ObjFunc
	var_421_string = ""; // 0x33d PushV
	func_1637(var_421_string); // 0x33e NEW_2
	SetPhoto(var_421_string); // 0x340 ObjFunc
	var_422_string = ""; // 0x342 PushV
	func_1639(var_422_string); // 0x343 NEW_2
	SetPhoto2(var_422_string); // 0x345 ObjFunc
	var_423_int = 0; // 0x347 PushV
	func_1661(var_423_int); // 0x348 NEW_2
	SetPlayerName(var_423_int); // 0x34a ObjFunc
	var_413_int = -1; // 0x34c MovI
	IsOverrideActive(var_412_bool); // 0x34d Func
	var_424_bool = var_412_bool; // 0x34f Push
	if(var_424_bool == 0) goto Label_851; // 0x350 JumpB
	var_404_int = -2; // 0x351 MovI
	return 8; // 0x352 Return
	
Label_851:
	DoDialog(var_411_object); // 0x353 Func
	var_425_bool = 0; var_426_object = Obj(); // 0x355 PushV
	var_427_object = Obj(); // 0x356 PushV
	func_1573(var_427_object); // 0x357 NEW_2
	var_426_object = var_427_object; // 0x358 Mov
	func_1382(var_425_bool, var_426_object); // 0x35a NEW_2
	var_428_object = Obj(); var_429_object = Obj(); // 0x35c PushV
	var_428_object = var_405_object; // 0x35d Mov
	var_429_object = var_411_object; // 0x35e Mov
	TaskCall(7); // 0x35f TaskCall
	func_887(var_430_object, var_431_object, var_432_string, var_433_bool, var_428_object, var_429_object); // 0x360 NEW_2
	TaskReturn(); // 0x361 TaskReturn
	IsDialogEnd(var_414_bool); // 0x363 ObjFunc
	
Label_869:
	var_458_bool = var_414_bool == 0; // 0x365 Not
	if(var_458_bool == 0) goto Label_876; // 0x366 JumpB
	sync(); // 0x367 Func
	IsDialogEnd(var_414_bool); // 0x369 ObjFunc
	goto Label_869; // 0x36b Jump
	
Label_876:
	var_459_object = Obj(); // 0x36c PushV
	var_459_object = var_405_object; // 0x36d Mov
	func_1365(); // 0x36e NEW_2
	StopDialog(var_411_object); // 0x370 Func
	GetReturnValue(var_413_int); // 0x372 ObjFunc
	var_404_int = var_413_int; // 0x374 Mov
	return 8; // 0x375 Return
}


func_1579(var_84_cvector, var_85_cvector)
{
	var_87_float = 0; var_88_float = 0; // 0x62b PushV
	var_89_int = var_85_cvector | var_85_cvector; // 0x62c Or
	var_88_float = sqrt(var_89_int); // 0x62d Sqrt2
	var_90_float = 0.0; // 0x62e PushF
	var_91_bool = var_88_float < var_90_float; // 0x62f LT
	if(var_91_bool == 0) goto Label_1587; // 0x630 JumpB
	var_84_cvector = CVector(0.0, 0.0, 0.0); // 0x631 MovV
	return 2; // 0x632 Return
	
Label_1587:
	var_84_cvector = var_85_cvector / var_85_cvector; // 0x633 Div2
	return 2; // 0x634 Return
}


func_1069()
{
	var_462_float = 0; var_463_float = 0; // 0x42d PushV
	var_464_int = 8; // 0x42e PushI
	var_465_int = 16; // 0x42f PushI
	rand(var_463_float, var_464_int, var_465_int); // 0x430 Func
	var_466_int = 10; // 0x432 PushI
	SetTimer(var_466_int, var_463_float); // 0x433 Func
	return 2; // 0x435 Return
}


func_945(var_2_object, var_435_string)
{
	var_436_bool = 0; // 0x3b2 PushV
	func_1641(var_436_bool); // 0x3b3 NEW_2
	var_437_bool = var_436_bool == 0; // 0x3b5 Not
	if(var_437_bool == 0) goto Label_952; // 0x3b6 JumpB
	return 0; // 0x3b7 Return
	
Label_952:
	var_438_bool = var_435_string == var_2_object; // 0x3b8 Eq
	if(var_438_bool == 0) goto Label_955; // 0x3b9 JumpB
	return 0; // 0x3ba Return
	
Label_955:
	var_439_string = ""; var_440_bool = 0; // 0x3bb PushV
	var_439_string = var_435_string; // 0x3bc Mov
	var_441_string = ""; // 0x3bd PushS
	var_442_bool = var_435_string == var_441_string; // 0x3be Eq
	if(var_442_bool == 0) goto Label_962; // 0x3bf JumpB
	var_440_bool = 0; // 0x3c0 MovB
	goto Label_963; // 0x3c1 Jump
	
Label_963:
	func_1536(var_439_string, var_440_bool); // 0x3c3 NEW_2
	var_2_object = var_435_string; // 0x3c5 TMov
	return 0; // 0x3c6 Return
	
Label_962:
	var_440_bool = 1; // 0x3c2 MovB
}


func_1589(var_316_int, var_317_string)
{
	var_318_int = 0; var_319_int = 0; // 0x635 PushV
	GetVariable(var_317_string, var_319_int); // 0x636 Func
	var_316_int = var_319_int; // 0x638 Mov
	return 2; // 0x639 Return
}


func_566(var_0_object, var_1_object, var_2_object, var_3_string, var_298_object, var_299_object)
{
	var_0_object = var_299_object; // 0x237 TMov
	var_1_object = var_298_object; // 0x238 TMov
	var_3_string = 0; // 0x239 TMovB
	var_304_int = 1; // 0x23a PushI
	if(var_304_int == 0) goto Label_599; // 0x23b JumpB
	var_305_string = ""; // 0x23c PushV
	var_305_string = "Neutral"; // 0x23d MovS
	func_629(var_299_object, var_305_string); // 0x23e NEW_2
	var_313_int = 518209; // 0x240 PushI
	SetMessage(var_313_int); // 0x241 TObjFunc
	ClearReplies(); // 0x243 TObjFunc
	var_314_bool = 0; var_315_object = Obj(); // 0x245 PushV
	var_315_object = var_1_object; // 0x246 MovT
	func_1649(var_315_object); // 0x247 NEW_2
	if(var_314_bool == 0) goto Label_591; // 0x249 JumpB
	var_322_int = 519429; // 0x24a PushI
	var_323_int = 20597; // 0x24b PushI
	var_324_int = 20596; // 0x24c PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0x24d TObjFunc
	
Label_591:
	var_325_int = 518211; // 0x24f PushI
	var_326_int = -1; // 0x250 PushI
	var_327_int = 19324; // 0x251 PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0x252 TObjFunc
	goto Label_599; // 0x254 Jump
	
Label_599:
	var_328_bool = 0; // 0x257 PushV
	func_1641(var_328_bool); // 0x258 NEW_2
	if(var_328_bool == 0) goto Label_614; // 0x25a JumpB
	
Label_603:
	lshWaitForAnimEnd(); // 0x25b Func
	var_329_string = var_3_string; // 0x25d PushT
	if(var_329_string == 0) goto Label_608; // 0x25e JumpB
	goto Label_613; // 0x25f Jump
	
Label_613:
	goto Label_628; // 0x265 Jump
	
Label_628:
	return 0; // 0x274 Return
	
Label_608:
	var_330_string = ""; // 0x260 PushV
	var_330_string = var_2_object; // 0x261 MovT
	func_1520(var_330_string); // 0x262 NEW_2
	goto Label_603; // 0x264 Jump
	
Label_614:
	var_331_string = "all"; // 0x266 PushS
	var_332_string = "idle"; // 0x267 PushS
	PlayAnimation(var_331_string, var_332_string); // 0x268 Func
	
Label_618:
	WaitForAnimEnd(); // 0x26a Func
	var_333_string = var_3_string; // 0x26c PushT
	if(var_333_string == 0) goto Label_623; // 0x26d JumpB
	goto Label_628; // 0x26e Jump
	
Label_623:
	var_334_string = "all"; // 0x26f PushS
	var_335_string = "idle"; // 0x270 PushS
	PlayAnimation(var_334_string, var_335_string); // 0x271 Func
	goto Label_618; // 0x273 Jump
}


func_1078()
{
	var_461_int = 10; // 0x436 PushI
	KillTimer(var_461_int); // 0x437 Func
	return 0; // 0x439 Return
}


func_1594(var_172_int)
{
	var_173_float = 0; var_174_float = 0; // 0x63a PushV
	GetGameTime(var_174_float); // 0x63b Func
	var_175_int = 1; // 0x63d PushI
	var_176_int = 0; // 0x63e PushV
	var_177_int = 24; // 0x63f PushI
	var_176_int = var_174_float / var_174_float; // 0x640 Div2
	var_172_int = var_175_int + var_176_int; // 0x641 Add2
	return 2; // 0x642 Return
}


func_1603(var_271_bool, var_272_int)
{
	var_273_int = 0; // 0x644 PushV
	func_1594(var_273_int); // 0x645 NEW_2
	var_271_bool = var_273_int == var_272_int; // 0x647 Eq2
	return 0; // 0x648 Return
}


func_1477(var_159_bool)
{
	var_161_string = ""; var_162_int = 0; var_163_bool = 0; var_164_int = 0; var_165_string = ""; var_166_string = ""; var_167_int = 0; var_168_bool = 0; var_169_int = 0; var_170_string = ""; // 0x5c5 PushV
	var_171_string = "d"; // 0x5c6 PushS
	var_172_int = 0; // 0x5c7 PushV
	func_1594(var_172_int); // 0x5c8 NEW_2
	var_178_int = var_171_string + var_172_int; // 0x5ca Add
	var_179_string = "m"; // 0x5cb PushS
	var_166_string = var_178_int + var_179_string; // 0x5cc Add2
	var_167_int = 0; // 0x5cd MovI
	
Label_1486:
	var_180_int = 1; // 0x5ce PushI
	if(var_180_int == 0) goto Label_1499; // 0x5cf JumpB
	var_181_int = 1; // 0x5d0 PushI
	var_182_int = var_167_int + var_181_int; // 0x5d1 Add
	var_183_int = var_166_string + var_182_int; // 0x5d2 Add
	HasProperty(var_183_int, var_168_bool); // 0x5d3 ObjFunc
	var_184_bool = var_168_bool == 0; // 0x5d5 Not
	if(var_184_bool == 0) goto Label_1496; // 0x5d6 JumpB
	goto Label_1499; // 0x5d7 Jump
	
Label_1499:
	var_185_bool = var_167_int == 0; // 0x5db Not
	if(var_185_bool == 0) goto Label_1503; // 0x5dc JumpB
	var_159_bool = 0; // 0x5dd MovB
	return 10; // 0x5de Return
	
Label_1503:
	var_169_int = 0; // 0x5df MovI
	var_186_int = 1; // 0x5e0 PushI
	var_187_bool = var_167_int > var_186_int; // 0x5e1 GT
	if(var_187_bool == 0) goto Label_1509; // 0x5e2 JumpB
	irand(var_169_int, var_167_int); // 0x5e3 Func
	
Label_1509:
	var_188_int = 1; // 0x5e5 PushI
	var_189_int = var_169_int + var_188_int; // 0x5e6 Add
	var_190_int = var_166_string + var_189_int; // 0x5e7 Add
	GetProperty(var_190_int, var_170_string); // 0x5e8 ObjFunc
	var_191_bool = 0; var_192_string = ""; // 0x5ea PushV
	var_192_string = var_170_string; // 0x5eb Mov
	func_1551(var_191_bool, var_192_string); // 0x5ec NEW_2
	var_159_bool = var_191_bool; // 0x5ed Mov
	return 10; // 0x5ef Return
	
Label_1496:
	var_193_int = 1; // 0x5d8 PushI
	var_167_int = var_167_int + var_193_int; // 0x5d9 Add2
	goto Label_1486; // 0x5da Jump
}


func_1609(var_45_string, var_46_int)
{
	var_47_string = ""; var_48_string = ""; // 0x649 PushV
	var_48_string = "idle"; // 0x64a MovS
	var_49_int = var_46_int; // 0x64b Push
	if(var_49_int == 0) goto Label_1614; // 0x64c JumpB
	var_48_string = var_48_string + var_46_int; // 0x64d Add2
	
Label_1614:
	var_45_string = var_48_string; // 0x64e Mov
	return 2; // 0x64f Return
}


func_1616(var_39_int)
{
	var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_bool = 0; // 0x650 PushV
	var_42_int = 0; // 0x651 MovI
	
Label_1618:
	var_44_string = "all"; // 0x652 PushS
	var_45_string = ""; var_46_int = 0; // 0x653 PushV
	var_46_int = var_42_int; // 0x654 Mov
	func_1609(var_45_string, var_46_int); // 0x655 NEW_2
	HasAnimation(var_43_bool, var_44_string, var_45_string); // 0x657 Func
	var_50_bool = var_43_bool == 0; // 0x659 Not
	if(var_50_bool == 0) goto Label_1628; // 0x65a JumpB
	goto Label_1631; // 0x65b Jump
	
Label_1631:
	var_39_int = var_42_int; // 0x65f Mov
	return 4; // 0x660 Return
	
Label_1628:
	var_51_int = 1; // 0x65c PushI
	var_42_int = var_42_int + var_51_int; // 0x65d Add2
	goto Label_1618; // 0x65e Jump
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_367_object, var_368_object)
{
	var_0_object = var_368_object; // 0x52 TMov
	var_1_object = var_367_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_373_int = 1; // 0x55 PushI
	if(var_373_int == 0) goto Label_114; // 0x56 JumpB
	var_374_string = ""; // 0x57 PushV
	var_374_string = "Neutral"; // 0x58 MovS
	func_144(var_368_object, var_374_string); // 0x59 NEW_2
	var_382_int = 535231; // 0x5b PushI
	SetMessage(var_382_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_383_int = 535232; // 0x60 PushI
	var_384_int = 36953; // 0x61 PushI
	var_385_int = 36907; // 0x62 PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0x63 TObjFunc
	var_386_int = 535233; // 0x65 PushI
	var_387_int = -1; // 0x66 PushI
	var_388_int = 36908; // 0x67 PushI
	AddReply(var_386_int, var_387_int, var_388_int); // 0x68 TObjFunc
	var_389_int = 535280; // 0x6a PushI
	var_390_int = -1; // 0x6b PushI
	var_391_int = 36956; // 0x6c PushI
	AddReply(var_389_int, var_390_int, var_391_int); // 0x6d TObjFunc
	goto Label_114; // 0x6f Jump
	
Label_114:
	var_392_bool = 0; // 0x72 PushV
	func_1641(var_392_bool); // 0x73 NEW_2
	if(var_392_bool == 0) goto Label_129; // 0x75 JumpB
	
Label_118:
	lshWaitForAnimEnd(); // 0x76 Func
	var_393_string = var_3_string; // 0x78 PushT
	if(var_393_string == 0) goto Label_123; // 0x79 JumpB
	goto Label_128; // 0x7a Jump
	
Label_128:
	goto Label_143; // 0x80 Jump
	
Label_143:
	return 0; // 0x8f Return
	
Label_123:
	var_394_string = ""; // 0x7b PushV
	var_394_string = var_2_object; // 0x7c MovT
	func_1520(var_394_string); // 0x7d NEW_2
	goto Label_118; // 0x7f Jump
	
Label_129:
	var_395_string = "all"; // 0x81 PushS
	var_396_string = "idle"; // 0x82 PushS
	PlayAnimation(var_395_string, var_396_string); // 0x83 Func
	
Label_133:
	WaitForAnimEnd(); // 0x85 Func
	var_397_string = var_3_string; // 0x87 PushT
	if(var_397_string == 0) goto Label_138; // 0x88 JumpB
	goto Label_143; // 0x89 Jump
	
Label_138:
	var_398_string = "all"; // 0x8a PushS
	var_399_string = "idle"; // 0x8b PushS
	PlayAnimation(var_398_string, var_399_string); // 0x8c Func
	goto Label_133; // 0x8e Jump
}


func_340(var_0_object, var_1_object, var_2_object, var_3_string, var_212_object, var_213_object)
{
	var_0_object = var_213_object; // 0x155 TMov
	var_1_object = var_212_object; // 0x156 TMov
	var_3_string = 0; // 0x157 TMovB
	var_218_int = 1; // 0x158 PushI
	if(var_218_int == 0) goto Label_368; // 0x159 JumpB
	var_219_string = ""; // 0x15a PushV
	var_219_string = "Neutral"; // 0x15b MovS
	func_398(var_213_object, var_219_string); // 0x15c NEW_2
	var_236_int = 518045; // 0x15e PushI
	SetMessage(var_236_int); // 0x15f TObjFunc
	ClearReplies(); // 0x161 TObjFunc
	var_237_int = 518046; // 0x163 PushI
	var_238_int = 32123; // 0x164 PushI
	var_239_int = 19179; // 0x165 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x166 TObjFunc
	var_240_int = 530814; // 0x168 PushI
	var_241_int = 32123; // 0x169 PushI
	var_242_int = 32122; // 0x16a PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x16b TObjFunc
	goto Label_368; // 0x16d Jump
	
Label_368:
	var_243_bool = 0; // 0x170 PushV
	func_1641(var_243_bool); // 0x171 NEW_2
	if(var_243_bool == 0) goto Label_383; // 0x173 JumpB
	
Label_372:
	lshWaitForAnimEnd(); // 0x174 Func
	var_244_string = var_3_string; // 0x176 PushT
	if(var_244_string == 0) goto Label_377; // 0x177 JumpB
	goto Label_382; // 0x178 Jump
	
Label_382:
	goto Label_397; // 0x17e Jump
	
Label_397:
	return 0; // 0x18d Return
	
Label_377:
	var_245_string = ""; // 0x179 PushV
	var_245_string = var_2_object; // 0x17a MovT
	func_1520(var_245_string); // 0x17b NEW_2
	goto Label_372; // 0x17d Jump
	
Label_383:
	var_256_string = "all"; // 0x17f PushS
	var_257_string = "idle"; // 0x180 PushS
	PlayAnimation(var_256_string, var_257_string); // 0x181 Func
	
Label_387:
	WaitForAnimEnd(); // 0x183 Func
	var_258_string = var_3_string; // 0x185 PushT
	if(var_258_string == 0) goto Label_392; // 0x186 JumpB
	goto Label_397; // 0x187 Jump
	
Label_392:
	var_259_string = "all"; // 0x188 PushS
	var_260_string = "idle"; // 0x189 PushS
	PlayAnimation(var_259_string, var_260_string); // 0x18a Func
	goto Label_387; // 0x18c Jump
}


func_1365()
{
	var_263_bool = 0; var_264_bool = 0; // 0x555 PushV
	CameraSwitchToNormal(); // 0x556 Func
	var_265_bool = 0; // 0x558 PushV
	func_1641(var_265_bool); // 0x559 NEW_2
	if(var_265_bool == 0) goto Label_1373; // 0x55b JumpB
	goto Label_1381; // 0x55c Jump
	
Label_1381:
	return 2; // 0x565 Return
	
Label_1373:
	var_266_string = "head"; // 0x55d PushS
	HasAnimationTrack(var_264_bool, var_266_string); // 0x55e Func
	var_267_bool = var_264_bool; // 0x560 Push
	if(var_267_bool == 0) goto Label_1381; // 0x561 JumpB
	var_268_string = "head"; // 0x562 PushS
	UnlookAsync(var_268_string); // 0x563 Func
}


func_1633(var_105_int)
{
	var_105_int = 515550; // 0x661 MovI
	return 0; // 0x662 Return
}


func_1635(var_104_int)
{
	var_104_int = 502875; // 0x663 MovI
	return 0; // 0x664 Return
}


func_1637(var_106_string)
{
	var_106_string = "ui/NPC_Petr.png"; // 0x665 MovS
	return 0; // 0x666 Return
}


func_1382(var_117_bool, var_118_object)
{
	var_122_int = 0; var_123_int = 0; var_124_int = 0; var_125_int = 0; // 0x566 PushV
	var_126_string = "voice_common"; // 0x567 PushS
	GetVariable(var_126_string, var_124_int); // 0x568 Func
	var_127_int = var_124_int; // 0x56a Push
	if(var_127_int == 0) goto Label_1420; // 0x56b JumpB
	var_128_bool = 0; var_129_object = Obj(); // 0x56c PushV
	var_129_object = var_118_object; // 0x56d Mov
	func_1440(var_129_object); // 0x56e NEW_2
	var_158_bool = var_128_bool == 0; // 0x570 Not
	if(var_158_bool == 0) goto Label_1402; // 0x571 JumpB
	var_159_bool = 0; var_160_object = Obj(); // 0x572 PushV
	var_160_object = var_118_object; // 0x573 Mov
	func_1477(var_160_object); // 0x574 NEW_2
	var_194_bool = var_159_bool == 0; // 0x576 Not
	if(var_194_bool == 0) goto Label_1402; // 0x577 JumpB
	var_117_bool = 0; // 0x578 MovB
	return 4; // 0x579 Return
	
Label_1402:
	var_195_int = 2; // 0x57a PushI
	irand(var_125_int, var_195_int); // 0x57b Func
	var_196_int = var_125_int; // 0x57d Push
	if(var_196_int == 0) goto Label_1415; // 0x57e JumpB
	var_197_string = "voice_common"; // 0x57f PushS
	var_198_int = 1; // 0x580 PushI
	var_199_int = var_124_int + var_198_int; // 0x581 Add
	var_200_int = 3; // 0x582 PushI
	var_201_int = var_199_int / var_200_int; // 0x583 Mod
	SetVariable(var_197_string, var_201_int); // 0x584 Func
	goto Label_1419; // 0x586 Jump
	
Label_1419:
	goto Label_1438; // 0x58b Jump
	
Label_1438:
	var_117_bool = 1; // 0x59e MovB
	return 4; // 0x59f Return
	
Label_1415:
	var_202_string = "voice_common"; // 0x587 PushS
	var_203_int = 0; // 0x588 PushI
	SetVariable(var_202_string, var_203_int); // 0x589 Func
	
Label_1420:
	var_204_bool = 0; var_205_object = Obj(); // 0x58c PushV
	var_205_object = var_118_object; // 0x58d Mov
	func_1477(var_205_object); // 0x58e NEW_2
	var_206_bool = var_204_bool == 0; // 0x590 Not
	if(var_206_bool == 0) goto Label_1434; // 0x591 JumpB
	var_207_bool = 0; var_208_object = Obj(); // 0x592 PushV
	var_208_object = var_118_object; // 0x593 Mov
	func_1440(var_208_object); // 0x594 NEW_2
	var_209_bool = var_207_bool == 0; // 0x596 Not
	if(var_209_bool == 0) goto Label_1434; // 0x597 JumpB
	var_117_bool = 0; // 0x598 MovB
	return 4; // 0x599 Return
	
Label_1434:
	var_210_string = "voice_common"; // 0x59a PushS
	var_211_int = 1; // 0x59b PushI
	SetVariable(var_210_string, var_211_int); // 0x59c Func
}


func_1639(var_107_string)
{
	var_107_string = "ui/NPC_Petr_b.png"; // 0x667 MovS
	return 0; // 0x668 Return
}


func_485(var_0_object, var_274_int, var_275_object)
{
	var_277_object = Obj(); var_278_bool = 0; var_279_int = 0; var_280_bool = 0; var_281_object = Obj(); var_282_bool = 0; var_283_int = 0; var_284_bool = 0; // 0x1e5 PushV
	var_0_object = var_275_object; // 0x1e6 TMov
	var_285_bool = 0; var_286_object = Obj(); var_287_float = 0; // 0x1e7 PushV
	var_286_object = var_275_object; // 0x1e8 Mov
	var_287_float = 70.0; // 0x1e9 MovF
	func_1297(var_286_object, var_287_float); // 0x1ea NEW_2
	var_288_bool = var_285_bool == 0; // 0x1ec Not
	if(var_288_bool == 0) goto Label_496; // 0x1ed JumpB
	var_274_int = -2; // 0x1ee MovI
	return 8; // 0x1ef Return
	
Label_496:
	CreateDialog(var_281_object); // 0x1f0 Func
	var_289_int = 0; // 0x1f2 PushV
	func_1635(var_289_int); // 0x1f3 NEW_2
	SetNPCName(var_289_int); // 0x1f5 ObjFunc
	var_290_int = 0; // 0x1f7 PushV
	func_1633(var_290_int); // 0x1f8 NEW_2
	SetNPCDescription(var_290_int); // 0x1fa ObjFunc
	var_291_string = ""; // 0x1fc PushV
	func_1637(var_291_string); // 0x1fd NEW_2
	SetPhoto(var_291_string); // 0x1ff ObjFunc
	var_292_string = ""; // 0x201 PushV
	func_1639(var_292_string); // 0x202 NEW_2
	SetPhoto2(var_292_string); // 0x204 ObjFunc
	var_293_int = 0; // 0x206 PushV
	func_1661(var_293_int); // 0x207 NEW_2
	SetPlayerName(var_293_int); // 0x209 ObjFunc
	var_283_int = -1; // 0x20b MovI
	IsOverrideActive(var_282_bool); // 0x20c Func
	var_294_bool = var_282_bool; // 0x20e Push
	if(var_294_bool == 0) goto Label_530; // 0x20f JumpB
	var_274_int = -2; // 0x210 MovI
	return 8; // 0x211 Return
	
Label_530:
	DoDialog(var_281_object); // 0x212 Func
	var_295_bool = 0; var_296_object = Obj(); // 0x214 PushV
	var_297_object = Obj(); // 0x215 PushV
	func_1573(var_297_object); // 0x216 NEW_2
	var_296_object = var_297_object; // 0x217 Mov
	func_1382(var_295_bool, var_296_object); // 0x219 NEW_2
	var_298_object = Obj(); var_299_object = Obj(); // 0x21b PushV
	var_298_object = var_275_object; // 0x21c Mov
	var_299_object = var_281_object; // 0x21d Mov
	TaskCall(5); // 0x21e TaskCall
	func_566(var_300_object, var_301_object, var_302_string, var_303_bool, var_298_object, var_299_object); // 0x21f NEW_2
	TaskReturn(); // 0x220 TaskReturn
	IsDialogEnd(var_284_bool); // 0x222 ObjFunc
	
Label_548:
	var_336_bool = var_284_bool == 0; // 0x224 Not
	if(var_336_bool == 0) goto Label_555; // 0x225 JumpB
	sync(); // 0x226 Func
	IsDialogEnd(var_284_bool); // 0x228 ObjFunc
	goto Label_548; // 0x22a Jump
	
Label_555:
	var_337_object = Obj(); // 0x22b PushV
	var_337_object = var_275_object; // 0x22c Mov
	func_1365(); // 0x22d NEW_2
	StopDialog(var_281_object); // 0x22f Func
	GetReturnValue(var_283_int); // 0x231 ObjFunc
	var_274_int = var_283_int; // 0x233 Mov
	return 8; // 0x234 Return
}


func_1641(var_99_bool)
{
	var_99_bool = 1; // 0x669 MovB
	return 0; // 0x66a Return
}


func_1258(var_59_bool)
{
	var_59_bool = 1; // 0x4ea MovB
	return 0; // 0x4eb Return
}


func_1643()
{
	var_29_string = "oob2Petr1"; // 0x66c PushS
	var_30_int = 1; // 0x66d PushI
	SetVariable(var_29_string, var_30_int); // 0x66e Func
	return 0; // 0x670 Return
}


func_1260()
{
	StopAnimation(); // 0x4ec Func
	StopGroup0(); // 0x4ee Func
	return 0; // 0x4f0 Return
}


func_1520(var_245_string)
{
	var_246_bool = 0; var_247_float = 0; var_248_float = 0; var_249_bool = 0; var_250_float = 0; var_251_float = 0; // 0x5f0 PushV
	lshHasAnimation(var_249_bool, var_245_string); // 0x5f1 Func
	var_252_bool = var_249_bool; // 0x5f3 Push
	if(var_252_bool == 0) goto Label_1531; // 0x5f4 JumpB
	lshGetAnimTimes(var_245_string, var_250_float, var_251_float); // 0x5f5 Func
	var_253_bool = 0; // 0x5f7 PushB
	lshPlayAnimation(var_250_float, var_251_float, var_253_bool); // 0x5f8 Func
	goto Label_1535; // 0x5fa Jump
	
Label_1535:
	return 6; // 0x5ff Return
	
Label_1531:
	var_254_string = "Can't find lsh animation : "; // 0x5fb PushS
	var_255_int = var_254_string + var_245_string; // 0x5fc Add
	Trace(var_255_int); // 0x5fd Func
}


func_1649(var_314_bool)
{
	var_316_int = 0; var_317_string = ""; // 0x672 PushV
	var_317_string = "oob2Petr1"; // 0x673 MovS
	func_1589(var_316_int, var_317_string); // 0x674 NEW_2
	var_320_int = 0; // 0x676 PushI
	var_321_bool = var_316_int == var_320_int; // 0x677 Eq
	if(var_321_bool == 0) goto Label_1659; // 0x678 JumpB
	var_314_bool = 1; // 0x679 MovB
	return 0; // 0x67a Return
	
Label_1659:
	var_314_bool = 0; // 0x67b MovB
	return 0; // 0x67c Return
}


func_1265(var_36_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x4f1 PushV
	GetPosition(var_41_cvector); // 0x4f2 Func
	GetPosition(var_42_cvector); // 0x4f4 ObjFunc
	var_43_cvector = var_42_cvector - var_41_cvector; // 0x4f6 Sub2
	var_36_float = var_43_cvector | var_43_cvector; // 0x4f7 Or2
	return 6; // 0x4f8 Return
}


func_629(var_2_object, var_305_string)
{
	var_306_bool = 0; // 0x276 PushV
	func_1641(var_306_bool); // 0x277 NEW_2
	var_307_bool = var_306_bool == 0; // 0x279 Not
	if(var_307_bool == 0) goto Label_636; // 0x27a JumpB
	return 0; // 0x27b Return
	
Label_636:
	var_308_bool = var_305_string == var_2_object; // 0x27c Eq
	if(var_308_bool == 0) goto Label_639; // 0x27d JumpB
	return 0; // 0x27e Return
	
Label_639:
	var_309_string = ""; var_310_bool = 0; // 0x27f PushV
	var_309_string = var_305_string; // 0x280 Mov
	var_311_string = ""; // 0x281 PushS
	var_312_bool = var_305_string == var_311_string; // 0x282 Eq
	if(var_312_bool == 0) goto Label_646; // 0x283 JumpB
	var_310_bool = 0; // 0x284 MovB
	goto Label_647; // 0x285 Jump
	
Label_647:
	func_1536(var_309_string, var_310_bool); // 0x287 NEW_2
	var_2_object = var_305_string; // 0x289 TMov
	return 0; // 0x28a Return
	
Label_646:
	var_310_bool = 1; // 0x286 MovB
}


func_1013(var_0_object)
{
	var_21_bool = 0; // 0x3f5 PushV
	func_1292(var_21_bool); // 0x3f6 NEW_2
	var_24_bool = var_21_bool == 0; // 0x3f8 Not
	if(var_24_bool == 0) goto Label_1020; // 0x3f9 JumpB
	Hold(); // 0x3fa Func
	
Label_1020:
	GetDirection(var_0_object); // 0x3fc Func
	
Label_1022:
	func_1189(); // 0x3ff NEW_2
	goto Label_1022; // 0x401 Jump
}


func_887(var_0_object, var_1_object, var_2_object, var_3_string, var_428_object, var_429_object)
{
	var_0_object = var_429_object; // 0x378 TMov
	var_1_object = var_428_object; // 0x379 TMov
	var_3_string = 0; // 0x37a TMovB
	var_434_int = 1; // 0x37b PushI
	if(var_434_int == 0) goto Label_915; // 0x37c JumpB
	var_435_string = ""; // 0x37d PushV
	var_435_string = "Neutral"; // 0x37e MovS
	func_945(var_429_object, var_435_string); // 0x37f NEW_2
	var_443_int = 540554; // 0x381 PushI
	SetMessage(var_443_int); // 0x382 TObjFunc
	ClearReplies(); // 0x384 TObjFunc
	var_444_int = 540555; // 0x386 PushI
	var_445_int = -1; // 0x387 PushI
	var_446_int = 42564; // 0x388 PushI
	AddReply(var_444_int, var_445_int, var_446_int); // 0x389 TObjFunc
	var_447_int = 540794; // 0x38b PushI
	var_448_int = -1; // 0x38c PushI
	var_449_int = 42843; // 0x38d PushI
	AddReply(var_447_int, var_448_int, var_449_int); // 0x38e TObjFunc
	goto Label_915; // 0x390 Jump
	
Label_915:
	var_450_bool = 0; // 0x393 PushV
	func_1641(var_450_bool); // 0x394 NEW_2
	if(var_450_bool == 0) goto Label_930; // 0x396 JumpB
	
Label_919:
	lshWaitForAnimEnd(); // 0x397 Func
	var_451_string = var_3_string; // 0x399 PushT
	if(var_451_string == 0) goto Label_924; // 0x39a JumpB
	goto Label_929; // 0x39b Jump
	
Label_929:
	goto Label_944; // 0x3a1 Jump
	
Label_944:
	return 0; // 0x3b0 Return
	
Label_924:
	var_452_string = ""; // 0x39c PushV
	var_452_string = var_2_object; // 0x39d MovT
	func_1520(var_452_string); // 0x39e NEW_2
	goto Label_919; // 0x3a0 Jump
	
Label_930:
	var_453_string = "all"; // 0x3a2 PushS
	var_454_string = "idle"; // 0x3a3 PushS
	PlayAnimation(var_453_string, var_454_string); // 0x3a4 Func
	
Label_934:
	WaitForAnimEnd(); // 0x3a6 Func
	var_455_string = var_3_string; // 0x3a8 PushT
	if(var_455_string == 0) goto Label_939; // 0x3a9 JumpB
	goto Label_944; // 0x3aa Jump
	
Label_939:
	var_456_string = "all"; // 0x3ab PushS
	var_457_string = "idle"; // 0x3ac PushS
	PlayAnimation(var_456_string, var_457_string); // 0x3ad Func
	goto Label_934; // 0x3af Jump
}


func_1273(var_29_bool, var_30_cvector)
{
	var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; // 0x4f9 PushV
	GetPosition(var_34_cvector); // 0x4fa Func
	var_35_cvector = var_30_cvector - var_34_cvector; // 0x4fc Sub2
	var_37_float = GetByIndex(var_35_cvector, 0); // 0x4fd PushE
	var_38_float = GetByIndex(var_35_cvector, 2); // 0x4fe PushE
	Rotate(var_37_float, var_38_float, var_36_bool); // 0x4ff Func
	var_29_bool = var_36_bool; // 0x501 Mov
	return 6; // 0x502 Return
}


func_1661(var_108_int)
{
	var_109_int = 0; var_110_int = 0; // 0x67d PushV
	var_111_string = "branch"; // 0x67e PushS
	GetVariable(var_111_string, var_110_int); // 0x67f Func
	var_112_int = 0; // 0x681 PushI
	var_113_bool = var_110_int == var_112_int; // 0x682 Eq
	if(var_113_bool == 0) goto Label_1671; // 0x683 JumpB
	var_108_int = 1; // 0x684 MovI
	return 2; // 0x685 Return
	
Label_1671:
	var_114_int = 1; // 0x687 PushI
	var_115_bool = var_110_int == var_114_int; // 0x688 Eq
	if(var_115_bool == 0) goto Label_1676; // 0x689 JumpB
	var_108_int = 2; // 0x68a MovI
	return 2; // 0x68b Return
	
Label_1676:
	var_108_int = 3; // 0x68c MovI
	return 2; // 0x68d Return
}


