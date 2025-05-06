task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0xa2 PushI
	if(var_23_int == 0) goto Label_225; // 0xa3 JumpB
	func_1568(); // 0xa5 NEW_2
	var_25_int = 19178; // 0xa7 PushI
	var_26_bool = var_21_bool == var_25_int; // 0xa8 Eq
	if(var_26_bool == 0) goto Label_190; // 0xa9 JumpB
	var_27_string = ""; // 0xaa PushV
	var_27_string = "Neutral"; // 0xab MovS
	func_139(var_22_cvector, var_27_string); // 0xac NEW_2
	var_44_int = 518045; // 0xae PushI
	SetMessage(var_44_int); // 0xaf TObjFunc
	ClearReplies(); // 0xb1 TObjFunc
	var_45_int = 518046; // 0xb3 PushI
	var_46_int = 32123; // 0xb4 PushI
	var_47_int = 19179; // 0xb5 PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0xb6 TObjFunc
	var_48_int = 530814; // 0xb8 PushI
	var_49_int = 32123; // 0xb9 PushI
	var_50_int = 32122; // 0xba PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0xbb TObjFunc
	return 0; // 0xbd Return
	
Label_190:
	var_51_int = 32123; // 0xbe PushI
	var_52_bool = var_21_bool == var_51_int; // 0xbf Eq
	if(var_52_bool == 0) goto Label_213; // 0xc0 JumpB
	var_53_string = ""; // 0xc1 PushV
	var_53_string = "Neutral"; // 0xc2 MovS
	func_139(var_22_cvector, var_53_string); // 0xc3 NEW_2
	var_54_int = 530815; // 0xc5 PushI
	SetMessage(var_54_int); // 0xc6 TObjFunc
	ClearReplies(); // 0xc8 TObjFunc
	var_55_int = 530816; // 0xca PushI
	var_56_int = -1; // 0xcb PushI
	var_57_int = 32125; // 0xcc PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0xcd TObjFunc
	var_58_int = 530817; // 0xcf PushI
	var_59_int = -1; // 0xd0 PushI
	var_60_int = 32126; // 0xd1 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0xd2 TObjFunc
	return 0; // 0xd4 Return
	
Label_213:
	var_3_string = 1; // 0xd5 TMovB
	var_61_bool = 0; // 0xd6 PushV
	func_1643(var_61_bool); // 0xd7 NEW_2
	if(var_61_bool == 0) goto Label_221; // 0xd9 JumpB
	lshStopAnimation(); // 0xda Func
	goto Label_223; // 0xdc Jump
	
Label_223:
	return 0; // 0xdf Return
	
Label_221:
	StopAnimation(); // 0xdd Func
	
Label_225:
	return 0; // 0xe1 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0x189 PushI
	if(var_23_int == 0) goto Label_546; // 0x18a JumpB
	func_1568(); // 0x18c NEW_2
	var_25_int = 20596; // 0x18e PushI
	var_26_bool = var_22_cvector == var_25_int; // 0x18f Eq
	if(var_26_bool == 0) goto Label_406; // 0x190 JumpB
	var_27_object = Obj(); var_28_object = Obj(); // 0x191 PushV
	var_27_object = var_1_object; // 0x192 MovT
	var_28_object = var_0_object; // 0x193 MovT
	func_1645(); // 0x194 NEW_2
	
Label_406:
	var_31_int = 19322; // 0x196 PushI
	var_32_bool = var_21_bool == var_31_int; // 0x197 Eq
	if(var_32_bool == 0) goto Label_434; // 0x198 JumpB
	var_33_string = ""; // 0x199 PushV
	var_33_string = "Neutral"; // 0x19a MovS
	func_370(var_22_cvector, var_33_string); // 0x19b NEW_2
	var_50_int = 518209; // 0x19d PushI
	SetMessage(var_50_int); // 0x19e TObjFunc
	ClearReplies(); // 0x1a0 TObjFunc
	var_51_bool = 0; var_52_object = Obj(); // 0x1a2 PushV
	var_52_object = var_1_object; // 0x1a3 MovT
	func_1651(var_52_object); // 0x1a4 NEW_2
	if(var_51_bool == 0) goto Label_428; // 0x1a6 JumpB
	var_59_int = 519429; // 0x1a7 PushI
	var_60_int = 20597; // 0x1a8 PushI
	var_61_int = 20596; // 0x1a9 PushI
	AddReply(var_59_int, var_60_int, var_61_int); // 0x1aa TObjFunc
	
Label_428:
	var_62_int = 518211; // 0x1ac PushI
	var_63_int = -1; // 0x1ad PushI
	var_64_int = 19324; // 0x1ae PushI
	AddReply(var_62_int, var_63_int, var_64_int); // 0x1af TObjFunc
	return 0; // 0x1b1 Return
	
Label_434:
	var_65_int = 20597; // 0x1b2 PushI
	var_66_bool = var_21_bool == var_65_int; // 0x1b3 Eq
	if(var_66_bool == 0) goto Label_457; // 0x1b4 JumpB
	var_67_string = ""; // 0x1b5 PushV
	var_67_string = "Neutral"; // 0x1b6 MovS
	func_370(var_22_cvector, var_67_string); // 0x1b7 NEW_2
	var_68_int = 519430; // 0x1b9 PushI
	SetMessage(var_68_int); // 0x1ba TObjFunc
	ClearReplies(); // 0x1bc TObjFunc
	var_69_int = 519431; // 0x1be PushI
	var_70_int = 20599; // 0x1bf PushI
	var_71_int = 20598; // 0x1c0 PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0x1c1 TObjFunc
	var_72_int = 519438; // 0x1c3 PushI
	var_73_int = -1; // 0x1c4 PushI
	var_74_int = 20605; // 0x1c5 PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0x1c6 TObjFunc
	return 0; // 0x1c8 Return
	
Label_457:
	var_75_int = 20599; // 0x1c9 PushI
	var_76_bool = var_21_bool == var_75_int; // 0x1ca Eq
	if(var_76_bool == 0) goto Label_480; // 0x1cb JumpB
	var_77_string = ""; // 0x1cc PushV
	var_77_string = "Untrust"; // 0x1cd MovS
	func_370(var_22_cvector, var_77_string); // 0x1ce NEW_2
	var_78_int = 519432; // 0x1d0 PushI
	SetMessage(var_78_int); // 0x1d1 TObjFunc
	ClearReplies(); // 0x1d3 TObjFunc
	var_79_int = 519433; // 0x1d5 PushI
	var_80_int = 20601; // 0x1d6 PushI
	var_81_int = 20600; // 0x1d7 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0x1d8 TObjFunc
	var_82_int = 519439; // 0x1da PushI
	var_83_int = 20607; // 0x1db PushI
	var_84_int = 20606; // 0x1dc PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x1dd TObjFunc
	return 0; // 0x1df Return
	
Label_480:
	var_85_int = 20607; // 0x1e0 PushI
	var_86_bool = var_21_bool == var_85_int; // 0x1e1 Eq
	if(var_86_bool == 0) goto Label_498; // 0x1e2 JumpB
	var_87_string = ""; // 0x1e3 PushV
	var_87_string = "Neutral"; // 0x1e4 MovS
	func_370(var_22_cvector, var_87_string); // 0x1e5 NEW_2
	var_88_int = 519440; // 0x1e7 PushI
	SetMessage(var_88_int); // 0x1e8 TObjFunc
	ClearReplies(); // 0x1ea TObjFunc
	var_89_int = 519441; // 0x1ec PushI
	var_90_int = 20601; // 0x1ed PushI
	var_91_int = 20608; // 0x1ee PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x1ef TObjFunc
	return 0; // 0x1f1 Return
	
Label_498:
	var_92_int = 20601; // 0x1f2 PushI
	var_93_bool = var_21_bool == var_92_int; // 0x1f3 Eq
	if(var_93_bool == 0) goto Label_516; // 0x1f4 JumpB
	var_94_string = ""; // 0x1f5 PushV
	var_94_string = "Untrust"; // 0x1f6 MovS
	func_370(var_22_cvector, var_94_string); // 0x1f7 NEW_2
	var_95_int = 519434; // 0x1f9 PushI
	SetMessage(var_95_int); // 0x1fa TObjFunc
	ClearReplies(); // 0x1fc TObjFunc
	var_96_int = 519435; // 0x1fe PushI
	var_97_int = 20603; // 0x1ff PushI
	var_98_int = 20602; // 0x200 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x201 TObjFunc
	return 0; // 0x203 Return
	
Label_516:
	var_99_int = 20603; // 0x204 PushI
	var_100_bool = var_21_bool == var_99_int; // 0x205 Eq
	if(var_100_bool == 0) goto Label_534; // 0x206 JumpB
	var_101_string = ""; // 0x207 PushV
	var_101_string = "Untrust"; // 0x208 MovS
	func_370(var_22_cvector, var_101_string); // 0x209 NEW_2
	var_102_int = 519436; // 0x20b PushI
	SetMessage(var_102_int); // 0x20c TObjFunc
	ClearReplies(); // 0x20e TObjFunc
	var_103_int = 519437; // 0x210 PushI
	var_104_int = -1; // 0x211 PushI
	var_105_int = 20604; // 0x212 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x213 TObjFunc
	return 0; // 0x215 Return
	
Label_534:
	var_3_string = 1; // 0x216 TMovB
	var_106_bool = 0; // 0x217 PushV
	func_1643(var_106_bool); // 0x218 NEW_2
	if(var_106_bool == 0) goto Label_542; // 0x21a JumpB
	lshStopAnimation(); // 0x21b Func
	goto Label_544; // 0x21d Jump
	
Label_544:
	return 0; // 0x220 Return
	
Label_542:
	StopAnimation(); // 0x21e Func
	
Label_546:
	return 0; // 0x222 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0x2ca PushI
	if(var_23_int == 0) goto Label_805; // 0x2cb JumpB
	func_1568(); // 0x2cd NEW_2
	var_25_int = 36906; // 0x2cf PushI
	var_26_bool = var_21_bool == var_25_int; // 0x2d0 Eq
	if(var_26_bool == 0) goto Label_747; // 0x2d1 JumpB
	var_27_string = ""; // 0x2d2 PushV
	var_27_string = "Neutral"; // 0x2d3 MovS
	func_691(var_22_cvector, var_27_string); // 0x2d4 NEW_2
	var_44_int = 535231; // 0x2d6 PushI
	SetMessage(var_44_int); // 0x2d7 TObjFunc
	ClearReplies(); // 0x2d9 TObjFunc
	var_45_int = 535232; // 0x2db PushI
	var_46_int = 36953; // 0x2dc PushI
	var_47_int = 36907; // 0x2dd PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0x2de TObjFunc
	var_48_int = 535233; // 0x2e0 PushI
	var_49_int = -1; // 0x2e1 PushI
	var_50_int = 36908; // 0x2e2 PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0x2e3 TObjFunc
	var_51_int = 535280; // 0x2e5 PushI
	var_52_int = -1; // 0x2e6 PushI
	var_53_int = 36956; // 0x2e7 PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0x2e8 TObjFunc
	return 0; // 0x2ea Return
	
Label_747:
	var_54_int = 36953; // 0x2eb PushI
	var_55_bool = var_21_bool == var_54_int; // 0x2ec Eq
	if(var_55_bool == 0) goto Label_770; // 0x2ed JumpB
	var_56_string = ""; // 0x2ee PushV
	var_56_string = "Neutral"; // 0x2ef MovS
	func_691(var_22_cvector, var_56_string); // 0x2f0 NEW_2
	var_57_int = 535277; // 0x2f2 PushI
	SetMessage(var_57_int); // 0x2f3 TObjFunc
	ClearReplies(); // 0x2f5 TObjFunc
	var_58_int = 535278; // 0x2f7 PushI
	var_59_int = 36957; // 0x2f8 PushI
	var_60_int = 36954; // 0x2f9 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0x2fa TObjFunc
	var_61_int = 535279; // 0x2fc PushI
	var_62_int = 36957; // 0x2fd PushI
	var_63_int = 36955; // 0x2fe PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0x2ff TObjFunc
	return 0; // 0x301 Return
	
Label_770:
	var_64_int = 36957; // 0x302 PushI
	var_65_bool = var_21_bool == var_64_int; // 0x303 Eq
	if(var_65_bool == 0) goto Label_793; // 0x304 JumpB
	var_66_string = ""; // 0x305 PushV
	var_66_string = "Neutral"; // 0x306 MovS
	func_691(var_22_cvector, var_66_string); // 0x307 NEW_2
	var_67_int = 535281; // 0x309 PushI
	SetMessage(var_67_int); // 0x30a TObjFunc
	ClearReplies(); // 0x30c TObjFunc
	var_68_int = 535282; // 0x30e PushI
	var_69_int = -1; // 0x30f PushI
	var_70_int = 36958; // 0x310 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0x311 TObjFunc
	var_71_int = 535283; // 0x313 PushI
	var_72_int = -1; // 0x314 PushI
	var_73_int = 36959; // 0x315 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x316 TObjFunc
	return 0; // 0x318 Return
	
Label_793:
	var_3_string = 1; // 0x319 TMovB
	var_74_bool = 0; // 0x31a PushV
	func_1643(var_74_bool); // 0x31b NEW_2
	if(var_74_bool == 0) goto Label_801; // 0x31d JumpB
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
	func_1568(); // 0x3cb NEW_2
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
	func_1643(var_51_bool); // 0x3e6 NEW_2
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
	func_1575(var_67_object); // 0x453 NEW_2
	var_66_object = var_67_object; // 0x454 Mov
	func_1442(var_66_object); // 0x456 NEW_2
	
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
	func_1522(var_22_string); // 0x476 NEW_2
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
	func_1522(var_28_string); // 0x485 NEW_2
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
	func_1680(var_39_object); // 0x498 NEW_2
	var_462_string = ""; // 0x49a PushV
	var_462_string = "Neutral"; // 0x49b MovS
	func_1522(var_462_string); // 0x49c NEW_2
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


func_0(var_0_object, var_46_int, var_47_object)
{
	var_49_object = Obj(); var_50_bool = 0; var_51_int = 0; var_52_bool = 0; var_53_object = Obj(); var_54_bool = 0; var_55_int = 0; var_56_bool = 0; // 0x0 PushV
	var_0_object = var_47_object; // 0x1 TMov
	var_57_bool = 0; var_58_object = Obj(); var_59_float = 0; // 0x2 PushV
	var_58_object = var_47_object; // 0x3 Mov
	var_59_float = 70.0; // 0x4 MovF
	func_1297(var_58_object, var_59_float); // 0x5 NEW_2
	var_104_bool = var_57_bool == 0; // 0x7 Not
	if(var_104_bool == 0) goto Label_11; // 0x8 JumpB
	var_46_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_53_object); // 0xb Func
	var_105_int = 0; // 0xd PushV
	func_1637(var_105_int); // 0xe NEW_2
	SetNPCName(var_105_int); // 0x10 ObjFunc
	var_106_int = 0; // 0x12 PushV
	func_1635(var_106_int); // 0x13 NEW_2
	SetNPCDescription(var_106_int); // 0x15 ObjFunc
	var_107_string = ""; // 0x17 PushV
	func_1639(var_107_string); // 0x18 NEW_2
	SetPhoto(var_107_string); // 0x1a ObjFunc
	var_108_string = ""; // 0x1c PushV
	func_1641(var_108_string); // 0x1d NEW_2
	SetPhoto2(var_108_string); // 0x1f ObjFunc
	var_109_int = 0; // 0x21 PushV
	func_1663(var_109_int); // 0x22 NEW_2
	SetPlayerName(var_109_int); // 0x24 ObjFunc
	var_55_int = -1; // 0x26 MovI
	IsOverrideActive(var_54_bool); // 0x27 Func
	var_117_bool = var_54_bool; // 0x29 Push
	if(var_117_bool == 0) goto Label_45; // 0x2a JumpB
	var_46_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_53_object); // 0x2d Func
	var_118_bool = 0; var_119_object = Obj(); // 0x2f PushV
	var_120_object = Obj(); // 0x30 PushV
	func_1575(var_120_object); // 0x31 NEW_2
	var_119_object = var_120_object; // 0x32 Mov
	func_1384(var_118_bool, var_119_object); // 0x34 NEW_2
	var_213_object = Obj(); var_214_object = Obj(); // 0x36 PushV
	var_213_object = var_47_object; // 0x37 Mov
	var_214_object = var_53_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_215_object, var_216_object, var_217_string, var_218_bool, var_213_object, var_214_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_56_bool); // 0x3d ObjFunc
	
Label_63:
	var_262_bool = var_56_bool == 0; // 0x3f Not
	if(var_262_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_56_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_263_object = Obj(); // 0x46 PushV
	var_263_object = var_47_object; // 0x47 Mov
	func_1366(); // 0x48 NEW_2
	StopDialog(var_53_object); // 0x4a Func
	GetReturnValue(var_55_int); // 0x4c ObjFunc
	var_46_int = var_55_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1538(var_224_string, var_225_bool)
{
	var_228_bool = 0; var_229_float = 0; var_230_float = 0; var_231_bool = 0; var_232_float = 0; var_233_float = 0; // 0x602 PushV
	lshHasAnimation(var_231_bool, var_224_string); // 0x603 Func
	var_234_bool = var_231_bool; // 0x605 Push
	if(var_234_bool == 0) goto Label_1548; // 0x606 JumpB
	lshGetAnimTimes(var_224_string, var_232_float, var_233_float); // 0x607 Func
	lshPlayAnimation(var_232_float, var_233_float, var_225_bool); // 0x609 Func
	goto Label_1552; // 0x60b Jump
	
Label_1552:
	return 6; // 0x610 Return
	
Label_1548:
	var_235_string = "Can't find lsh animation : "; // 0x60c PushS
	var_236_int = var_235_string + var_224_string; // 0x60d Add
	Trace(var_236_int); // 0x60e Func
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


func_139(var_2_object, var_220_string)
{
	var_221_bool = 0; // 0x8c PushV
	func_1643(var_221_bool); // 0x8d NEW_2
	var_222_bool = var_221_bool == 0; // 0x8f Not
	if(var_222_bool == 0) goto Label_146; // 0x90 JumpB
	return 0; // 0x91 Return
	
Label_146:
	var_223_bool = var_220_string == var_2_object; // 0x92 Eq
	if(var_223_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_224_string = ""; var_225_bool = 0; // 0x95 PushV
	var_224_string = var_220_string; // 0x96 Mov
	var_226_string = ""; // 0x97 PushS
	var_227_bool = var_220_string == var_226_string; // 0x98 Eq
	if(var_227_bool == 0) goto Label_156; // 0x99 JumpB
	var_225_bool = 0; // 0x9a MovB
	goto Label_157; // 0x9b Jump
	
Label_157:
	func_1538(var_224_string, var_225_bool); // 0x9d NEW_2
	var_2_object = var_220_string; // 0x9f TMov
	return 0; // 0xa0 Return
	
Label_156:
	var_225_bool = 1; // 0x9c MovB
}


func_1292(var_21_bool)
{
	var_22_bool = 0; var_23_bool = 0; // 0x50c PushV
	IsLoaded(var_23_bool); // 0x50d Func
	var_21_bool = var_23_bool; // 0x50f Mov
	return 2; // 0x510 Return
}


func_1680(var_39_object)
{
	var_40_int = 0; var_41_int = 0; var_42_int = 0; var_43_int = 0; // 0x690 PushV
	var_44_string = "mt_petr"; // 0x691 PushS
	GetVariable(var_44_string, var_42_int); // 0x692 Func
	var_45_bool = var_42_int == 0; // 0x694 Not
	if(var_45_bool == 0) goto Label_1696; // 0x695 JumpB
	var_46_int = 0; var_47_object = Obj(); // 0x696 PushV
	var_47_object = var_39_object; // 0x697 Mov
	TaskCall(0); // 0x698 TaskCall
	func_0(var_48_object, var_46_int, var_47_object); // 0x699 NEW_2
	TaskReturn(); // 0x69a TaskReturn
	var_271_string = "mt_petr"; // 0x69c PushS
	var_272_int = 1; // 0x69d PushI
	SetVariable(var_271_string, var_272_int); // 0x69e Func
	
Label_1696:
	var_273_bool = 0; var_274_int = 0; // 0x6a0 PushV
	var_274_int = 2; // 0x6a1 MovI
	func_1605(var_273_bool, var_274_int); // 0x6a2 NEW_2
	if(var_273_bool == 0) goto Label_1708; // 0x6a4 JumpB
	var_276_int = 0; var_277_object = Obj(); // 0x6a5 PushV
	var_277_object = var_39_object; // 0x6a6 Mov
	TaskCall(2); // 0x6a7 TaskCall
	func_226(var_278_object, var_276_int, var_277_object); // 0x6a8 NEW_2
	TaskReturn(); // 0x6a9 TaskReturn
	return 4; // 0x6ab Return
	
Label_1708:
	var_340_string = "d12_petr"; // 0x6ac PushS
	GetVariable(var_340_string, var_43_int); // 0x6ad Func
	var_341_bool = 0; // 0x6af PushV
	var_341_bool = 0; // 0x6b0 MovB
	var_342_bool = 0; var_343_int = 0; // 0x6b1 PushV
	var_343_int = 12; // 0x6b2 MovI
	func_1605(var_342_bool, var_343_int); // 0x6b3 NEW_2
	if(var_342_bool == 0) goto Label_1721; // 0x6b5 JumpB
	var_344_int = var_43_int; // 0x6b6 Push
	if(var_344_int == 0) goto Label_1721; // 0x6b7 JumpB
	var_341_bool = 1; // 0x6b8 MovB
	
Label_1721:
	if(var_341_bool == 0) goto Label_1733; // 0x6b9 JumpB
	var_345_int = 0; var_346_object = Obj(); // 0x6ba PushV
	var_346_object = var_39_object; // 0x6bb Mov
	TaskCall(4); // 0x6bc TaskCall
	func_547(var_347_object, var_345_int, var_346_object); // 0x6bd NEW_2
	TaskReturn(); // 0x6be TaskReturn
	var_404_string = "d12_petr"; // 0x6c0 PushS
	var_405_int = 1; // 0x6c1 PushI
	SetVariable(var_404_string, var_405_int); // 0x6c2 Func
	return 4; // 0x6c4 Return
	
Label_1733:
	var_406_int = 0; var_407_object = Obj(); // 0x6c5 PushV
	var_407_object = var_39_object; // 0x6c6 Mov
	TaskCall(6); // 0x6c7 TaskCall
	func_806(var_408_object, var_406_int, var_407_object); // 0x6c8 NEW_2
	TaskReturn(); // 0x6c9 TaskReturn
	return 4; // 0x6cb Return
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
	func_1581(var_84_cvector, var_85_cvector); // 0x52c NEW_2
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
	var_97_bool = 1; // 0x53c PushB
	CameraTransit(var_75_cvector, var_73_cvector, var_97_bool); // 0x53d Func
	var_98_float = GetByIndex(var_74_cvector, 0); // 0x53f PushE
	var_99_float = GetByIndex(var_74_cvector, 2); // 0x540 PushE
	Rotate(var_98_float, var_99_float); // 0x541 Func
	var_100_bool = 0; // 0x543 PushV
	func_1643(var_100_bool); // 0x544 NEW_2
	if(var_100_bool == 0) goto Label_1352; // 0x546 JumpB
	goto Label_1360; // 0x547 Jump
	
Label_1360:
	CameraWaitForPlayFinish(); // 0x550 Func
	ResumeWorld(); // 0x552 Func
	var_57_bool = 1; // 0x554 MovB
	return 18; // 0x555 Return
	
Label_1352:
	var_101_string = "head"; // 0x548 PushS
	HasAnimationTrack(var_77_bool, var_101_string); // 0x549 Func
	var_102_bool = var_77_bool; // 0x54b Push
	if(var_102_bool == 0) goto Label_1360; // 0x54c JumpB
	var_103_string = "head"; // 0x54d PushS
	LookAsyncCamera(var_103_string); // 0x54e Func
}


func_1042(var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0); // 0x412 PushE
	var_99_float = GetByIndex(var_0_object, 2); // 0x413 PushE
	RotateAsync(var_98_float, var_99_float); // 0x414 Func
	return 0; // 0x416 Return
}


func_1553(var_152_bool, var_153_string)
{
	var_154_bool = 0; var_155_bool = 0; // 0x611 PushV
	var_156_bool = 0; // 0x612 PushV
	func_1643(var_156_bool); // 0x613 NEW_2
	if(var_156_bool == 0) goto Label_1566; // 0x615 JumpB
	lshHasSpeech(var_155_bool, var_153_string); // 0x616 Func
	var_157_bool = var_155_bool; // 0x618 Push
	if(var_157_bool == 0) goto Label_1566; // 0x619 JumpB
	lshPlaySpeech(var_153_string); // 0x61a Func
	var_152_bool = 1; // 0x61c MovB
	return 2; // 0x61d Return
	
Label_1566:
	var_152_bool = 0; // 0x61e MovB
	return 2; // 0x61f Return
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


func_1568()
{
	var_24_bool = 0; // 0x620 PushV
	func_1643(var_24_bool); // 0x621 NEW_2
	if(var_24_bool == 0) goto Label_1574; // 0x623 JumpB
	lshStopSpeech(); // 0x624 Func
	
Label_1574:
	return 0; // 0x626 Return
}


func_1442(var_129_bool)
{
	var_131_string = ""; var_132_int = 0; var_133_bool = 0; var_134_int = 0; var_135_string = ""; var_136_string = ""; var_137_int = 0; var_138_bool = 0; var_139_int = 0; var_140_string = ""; // 0x5a2 PushV
	var_136_string = "c"; // 0x5a3 MovS
	var_137_int = 0; // 0x5a4 MovI
	
Label_1445:
	var_141_int = 1; // 0x5a5 PushI
	if(var_141_int == 0) goto Label_1458; // 0x5a6 JumpB
	var_142_int = 1; // 0x5a7 PushI
	var_143_int = var_137_int + var_142_int; // 0x5a8 Add
	var_144_int = var_136_string + var_143_int; // 0x5a9 Add
	HasProperty(var_144_int, var_138_bool); // 0x5aa ObjFunc
	var_145_bool = var_138_bool == 0; // 0x5ac Not
	if(var_145_bool == 0) goto Label_1455; // 0x5ad JumpB
	goto Label_1458; // 0x5ae Jump
	
Label_1458:
	var_146_bool = var_137_int == 0; // 0x5b2 Not
	if(var_146_bool == 0) goto Label_1462; // 0x5b3 JumpB
	var_129_bool = 0; // 0x5b4 MovB
	return 10; // 0x5b5 Return
	
Label_1462:
	var_139_int = 0; // 0x5b6 MovI
	var_147_int = 1; // 0x5b7 PushI
	var_148_bool = var_137_int > var_147_int; // 0x5b8 GT
	if(var_148_bool == 0) goto Label_1468; // 0x5b9 JumpB
	irand(var_139_int, var_137_int); // 0x5ba Func
	
Label_1468:
	var_149_int = 1; // 0x5bc PushI
	var_150_int = var_139_int + var_149_int; // 0x5bd Add
	var_151_int = var_136_string + var_150_int; // 0x5be Add
	GetProperty(var_151_int, var_140_string); // 0x5bf ObjFunc
	var_152_bool = 0; var_153_string = ""; // 0x5c1 PushV
	var_153_string = var_140_string; // 0x5c2 Mov
	func_1553(var_152_bool, var_153_string); // 0x5c3 NEW_2
	var_129_bool = var_152_bool; // 0x5c4 Mov
	return 10; // 0x5c6 Return
	
Label_1455:
	var_158_int = 1; // 0x5af PushI
	var_137_int = var_137_int + var_158_int; // 0x5b0 Add2
	goto Label_1445; // 0x5b1 Jump
}


func_547(var_0_object, var_345_int, var_346_object)
{
	var_348_object = Obj(); var_349_bool = 0; var_350_int = 0; var_351_bool = 0; var_352_object = Obj(); var_353_bool = 0; var_354_int = 0; var_355_bool = 0; // 0x223 PushV
	var_0_object = var_346_object; // 0x224 TMov
	var_356_bool = 0; var_357_object = Obj(); var_358_float = 0; // 0x225 PushV
	var_357_object = var_346_object; // 0x226 Mov
	var_358_float = 70.0; // 0x227 MovF
	func_1297(var_357_object, var_358_float); // 0x228 NEW_2
	var_359_bool = var_356_bool == 0; // 0x22a Not
	if(var_359_bool == 0) goto Label_558; // 0x22b JumpB
	var_345_int = -2; // 0x22c MovI
	return 8; // 0x22d Return
	
Label_558:
	CreateDialog(var_352_object); // 0x22e Func
	var_360_int = 0; // 0x230 PushV
	func_1637(var_360_int); // 0x231 NEW_2
	SetNPCName(var_360_int); // 0x233 ObjFunc
	var_361_int = 0; // 0x235 PushV
	func_1635(var_361_int); // 0x236 NEW_2
	SetNPCDescription(var_361_int); // 0x238 ObjFunc
	var_362_string = ""; // 0x23a PushV
	func_1639(var_362_string); // 0x23b NEW_2
	SetPhoto(var_362_string); // 0x23d ObjFunc
	var_363_string = ""; // 0x23f PushV
	func_1641(var_363_string); // 0x240 NEW_2
	SetPhoto2(var_363_string); // 0x242 ObjFunc
	var_364_int = 0; // 0x244 PushV
	func_1663(var_364_int); // 0x245 NEW_2
	SetPlayerName(var_364_int); // 0x247 ObjFunc
	var_354_int = -1; // 0x249 MovI
	IsOverrideActive(var_353_bool); // 0x24a Func
	var_365_bool = var_353_bool; // 0x24c Push
	if(var_365_bool == 0) goto Label_592; // 0x24d JumpB
	var_345_int = -2; // 0x24e MovI
	return 8; // 0x24f Return
	
Label_592:
	DoDialog(var_352_object); // 0x250 Func
	var_366_bool = 0; var_367_object = Obj(); // 0x252 PushV
	var_368_object = Obj(); // 0x253 PushV
	func_1575(var_368_object); // 0x254 NEW_2
	var_367_object = var_368_object; // 0x255 Mov
	func_1384(var_366_bool, var_367_object); // 0x257 NEW_2
	var_369_object = Obj(); var_370_object = Obj(); // 0x259 PushV
	var_369_object = var_346_object; // 0x25a Mov
	var_370_object = var_352_object; // 0x25b Mov
	TaskCall(5); // 0x25c TaskCall
	func_628(var_371_object, var_372_object, var_373_string, var_374_bool, var_369_object, var_370_object); // 0x25d NEW_2
	TaskReturn(); // 0x25e TaskReturn
	IsDialogEnd(var_355_bool); // 0x260 ObjFunc
	
Label_610:
	var_402_bool = var_355_bool == 0; // 0x262 Not
	if(var_402_bool == 0) goto Label_617; // 0x263 JumpB
	sync(); // 0x264 Func
	IsDialogEnd(var_355_bool); // 0x266 ObjFunc
	goto Label_610; // 0x268 Jump
	
Label_617:
	var_403_object = Obj(); // 0x269 PushV
	var_403_object = var_346_object; // 0x26a Mov
	func_1366(); // 0x26b NEW_2
	StopDialog(var_352_object); // 0x26d Func
	GetReturnValue(var_354_int); // 0x26f ObjFunc
	var_345_int = var_354_int; // 0x271 Mov
	return 8; // 0x272 Return
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
	func_1618(var_39_int); // 0x4af NEW_2
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
	func_1611(var_66_string, var_67_int); // 0x4d3 NEW_2
	PlayAnimation(var_65_string, var_66_string); // 0x4d5 Func
	WaitForAnimEnd(var_36_bool); // 0x4d7 Func
	var_68_bool = var_36_bool == 0; // 0x4d9 Not
	if(var_68_bool == 0) goto Label_1244; // 0x4da JumpB
	goto Label_1255; // 0x4db Jump
}


func_806(var_0_object, var_406_int, var_407_object)
{
	var_409_object = Obj(); var_410_bool = 0; var_411_int = 0; var_412_bool = 0; var_413_object = Obj(); var_414_bool = 0; var_415_int = 0; var_416_bool = 0; // 0x326 PushV
	var_0_object = var_407_object; // 0x327 TMov
	var_417_bool = 0; var_418_object = Obj(); var_419_float = 0; // 0x328 PushV
	var_418_object = var_407_object; // 0x329 Mov
	var_419_float = 70.0; // 0x32a MovF
	func_1297(var_418_object, var_419_float); // 0x32b NEW_2
	var_420_bool = var_417_bool == 0; // 0x32d Not
	if(var_420_bool == 0) goto Label_817; // 0x32e JumpB
	var_406_int = -2; // 0x32f MovI
	return 8; // 0x330 Return
	
Label_817:
	CreateDialog(var_413_object); // 0x331 Func
	var_421_int = 0; // 0x333 PushV
	func_1637(var_421_int); // 0x334 NEW_2
	SetNPCName(var_421_int); // 0x336 ObjFunc
	var_422_int = 0; // 0x338 PushV
	func_1635(var_422_int); // 0x339 NEW_2
	SetNPCDescription(var_422_int); // 0x33b ObjFunc
	var_423_string = ""; // 0x33d PushV
	func_1639(var_423_string); // 0x33e NEW_2
	SetPhoto(var_423_string); // 0x340 ObjFunc
	var_424_string = ""; // 0x342 PushV
	func_1641(var_424_string); // 0x343 NEW_2
	SetPhoto2(var_424_string); // 0x345 ObjFunc
	var_425_int = 0; // 0x347 PushV
	func_1663(var_425_int); // 0x348 NEW_2
	SetPlayerName(var_425_int); // 0x34a ObjFunc
	var_415_int = -1; // 0x34c MovI
	IsOverrideActive(var_414_bool); // 0x34d Func
	var_426_bool = var_414_bool; // 0x34f Push
	if(var_426_bool == 0) goto Label_851; // 0x350 JumpB
	var_406_int = -2; // 0x351 MovI
	return 8; // 0x352 Return
	
Label_851:
	DoDialog(var_413_object); // 0x353 Func
	var_427_bool = 0; var_428_object = Obj(); // 0x355 PushV
	var_429_object = Obj(); // 0x356 PushV
	func_1575(var_429_object); // 0x357 NEW_2
	var_428_object = var_429_object; // 0x358 Mov
	func_1384(var_427_bool, var_428_object); // 0x35a NEW_2
	var_430_object = Obj(); var_431_object = Obj(); // 0x35c PushV
	var_430_object = var_407_object; // 0x35d Mov
	var_431_object = var_413_object; // 0x35e Mov
	TaskCall(7); // 0x35f TaskCall
	func_887(var_432_object, var_433_object, var_434_string, var_435_bool, var_430_object, var_431_object); // 0x360 NEW_2
	TaskReturn(); // 0x361 TaskReturn
	IsDialogEnd(var_416_bool); // 0x363 ObjFunc
	
Label_869:
	var_460_bool = var_416_bool == 0; // 0x365 Not
	if(var_460_bool == 0) goto Label_876; // 0x366 JumpB
	sync(); // 0x367 Func
	IsDialogEnd(var_416_bool); // 0x369 ObjFunc
	goto Label_869; // 0x36b Jump
	
Label_876:
	var_461_object = Obj(); // 0x36c PushV
	var_461_object = var_407_object; // 0x36d Mov
	func_1366(); // 0x36e NEW_2
	StopDialog(var_413_object); // 0x370 Func
	GetReturnValue(var_415_int); // 0x372 ObjFunc
	var_406_int = var_415_int; // 0x374 Mov
	return 8; // 0x375 Return
}


func_1575(var_120_object)
{
	var_121_object = Obj(); var_122_object = Obj(); // 0x627 PushV
	self(var_122_object); // 0x628 Func
	var_120_object = var_122_object; // 0x62a Mov
	return 2; // 0x62b Return
}


func_1069()
{
	var_464_float = 0; var_465_float = 0; // 0x42d PushV
	var_466_int = 8; // 0x42e PushI
	var_467_int = 16; // 0x42f PushI
	rand(var_465_float, var_466_int, var_467_int); // 0x430 Func
	var_468_int = 10; // 0x432 PushI
	SetTimer(var_468_int, var_465_float); // 0x433 Func
	return 2; // 0x435 Return
}


func_1581(var_84_cvector, var_85_cvector)
{
	var_87_float = 0; var_88_float = 0; // 0x62d PushV
	var_89_int = var_85_cvector | var_85_cvector; // 0x62e Or
	var_88_float = sqrt(var_89_int); // 0x62f Sqrt2
	var_90_float = 0.0; // 0x630 PushF
	var_91_bool = var_88_float < var_90_float; // 0x631 LT
	if(var_91_bool == 0) goto Label_1589; // 0x632 JumpB
	var_84_cvector = CVector(0.0, 0.0, 0.0); // 0x633 MovV
	return 2; // 0x634 Return
	
Label_1589:
	var_84_cvector = var_85_cvector / var_85_cvector; // 0x635 Div2
	return 2; // 0x636 Return
}


func_945(var_2_object, var_437_string)
{
	var_438_bool = 0; // 0x3b2 PushV
	func_1643(var_438_bool); // 0x3b3 NEW_2
	var_439_bool = var_438_bool == 0; // 0x3b5 Not
	if(var_439_bool == 0) goto Label_952; // 0x3b6 JumpB
	return 0; // 0x3b7 Return
	
Label_952:
	var_440_bool = var_437_string == var_2_object; // 0x3b8 Eq
	if(var_440_bool == 0) goto Label_955; // 0x3b9 JumpB
	return 0; // 0x3ba Return
	
Label_955:
	var_441_string = ""; var_442_bool = 0; // 0x3bb PushV
	var_441_string = var_437_string; // 0x3bc Mov
	var_443_string = ""; // 0x3bd PushS
	var_444_bool = var_437_string == var_443_string; // 0x3be Eq
	if(var_444_bool == 0) goto Label_962; // 0x3bf JumpB
	var_442_bool = 0; // 0x3c0 MovB
	goto Label_963; // 0x3c1 Jump
	
Label_963:
	func_1538(var_441_string, var_442_bool); // 0x3c3 NEW_2
	var_2_object = var_437_string; // 0x3c5 TMov
	return 0; // 0x3c6 Return
	
Label_962:
	var_442_bool = 1; // 0x3c2 MovB
}


func_307(var_0_object, var_1_object, var_2_object, var_3_string, var_300_object, var_301_object)
{
	var_0_object = var_301_object; // 0x134 TMov
	var_1_object = var_300_object; // 0x135 TMov
	var_3_string = 0; // 0x136 TMovB
	var_306_int = 1; // 0x137 PushI
	if(var_306_int == 0) goto Label_340; // 0x138 JumpB
	var_307_string = ""; // 0x139 PushV
	var_307_string = "Neutral"; // 0x13a MovS
	func_370(var_301_object, var_307_string); // 0x13b NEW_2
	var_315_int = 518209; // 0x13d PushI
	SetMessage(var_315_int); // 0x13e TObjFunc
	ClearReplies(); // 0x140 TObjFunc
	var_316_bool = 0; var_317_object = Obj(); // 0x142 PushV
	var_317_object = var_1_object; // 0x143 MovT
	func_1651(var_317_object); // 0x144 NEW_2
	if(var_316_bool == 0) goto Label_332; // 0x146 JumpB
	var_324_int = 519429; // 0x147 PushI
	var_325_int = 20597; // 0x148 PushI
	var_326_int = 20596; // 0x149 PushI
	AddReply(var_324_int, var_325_int, var_326_int); // 0x14a TObjFunc
	
Label_332:
	var_327_int = 518211; // 0x14c PushI
	var_328_int = -1; // 0x14d PushI
	var_329_int = 19324; // 0x14e PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0x14f TObjFunc
	goto Label_340; // 0x151 Jump
	
Label_340:
	var_330_bool = 0; // 0x154 PushV
	func_1643(var_330_bool); // 0x155 NEW_2
	if(var_330_bool == 0) goto Label_355; // 0x157 JumpB
	
Label_344:
	lshWaitForAnimEnd(); // 0x158 Func
	var_331_string = var_3_string; // 0x15a PushT
	if(var_331_string == 0) goto Label_349; // 0x15b JumpB
	goto Label_354; // 0x15c Jump
	
Label_354:
	goto Label_369; // 0x162 Jump
	
Label_369:
	return 0; // 0x171 Return
	
Label_349:
	var_332_string = ""; // 0x15d PushV
	var_332_string = var_2_object; // 0x15e MovT
	func_1522(var_332_string); // 0x15f NEW_2
	goto Label_344; // 0x161 Jump
	
Label_355:
	var_333_string = "all"; // 0x163 PushS
	var_334_string = "idle"; // 0x164 PushS
	PlayAnimation(var_333_string, var_334_string); // 0x165 Func
	
Label_359:
	WaitForAnimEnd(); // 0x167 Func
	var_335_string = var_3_string; // 0x169 PushT
	if(var_335_string == 0) goto Label_364; // 0x16a JumpB
	goto Label_369; // 0x16b Jump
	
Label_364:
	var_336_string = "all"; // 0x16c PushS
	var_337_string = "idle"; // 0x16d PushS
	PlayAnimation(var_336_string, var_337_string); // 0x16e Func
	goto Label_359; // 0x170 Jump
}


func_691(var_2_object, var_376_string)
{
	var_377_bool = 0; // 0x2b4 PushV
	func_1643(var_377_bool); // 0x2b5 NEW_2
	var_378_bool = var_377_bool == 0; // 0x2b7 Not
	if(var_378_bool == 0) goto Label_698; // 0x2b8 JumpB
	return 0; // 0x2b9 Return
	
Label_698:
	var_379_bool = var_376_string == var_2_object; // 0x2ba Eq
	if(var_379_bool == 0) goto Label_701; // 0x2bb JumpB
	return 0; // 0x2bc Return
	
Label_701:
	var_380_string = ""; var_381_bool = 0; // 0x2bd PushV
	var_380_string = var_376_string; // 0x2be Mov
	var_382_string = ""; // 0x2bf PushS
	var_383_bool = var_376_string == var_382_string; // 0x2c0 Eq
	if(var_383_bool == 0) goto Label_708; // 0x2c1 JumpB
	var_381_bool = 0; // 0x2c2 MovB
	goto Label_709; // 0x2c3 Jump
	
Label_709:
	func_1538(var_380_string, var_381_bool); // 0x2c5 NEW_2
	var_2_object = var_376_string; // 0x2c7 TMov
	return 0; // 0x2c8 Return
	
Label_708:
	var_381_bool = 1; // 0x2c4 MovB
}


func_1078()
{
	var_463_int = 10; // 0x436 PushI
	KillTimer(var_463_int); // 0x437 Func
	return 0; // 0x439 Return
}


func_1591(var_318_int, var_319_string)
{
	var_320_int = 0; var_321_int = 0; // 0x637 PushV
	GetVariable(var_319_string, var_321_int); // 0x638 Func
	var_318_int = var_321_int; // 0x63a Mov
	return 2; // 0x63b Return
}


func_1596(var_173_int)
{
	var_174_float = 0; var_175_float = 0; // 0x63c PushV
	GetGameTime(var_175_float); // 0x63d Func
	var_176_int = 1; // 0x63f PushI
	var_177_int = 0; // 0x640 PushV
	var_178_int = 24; // 0x641 PushI
	var_177_int = var_175_float / var_175_float; // 0x642 Div2
	var_173_int = var_176_int + var_177_int; // 0x643 Add2
	return 2; // 0x644 Return
}


func_1605(var_273_bool, var_274_int)
{
	var_275_int = 0; // 0x646 PushV
	func_1596(var_275_int); // 0x647 NEW_2
	var_273_bool = var_275_int == var_274_int; // 0x649 Eq2
	return 0; // 0x64a Return
}


func_1479(var_160_bool)
{
	var_162_string = ""; var_163_int = 0; var_164_bool = 0; var_165_int = 0; var_166_string = ""; var_167_string = ""; var_168_int = 0; var_169_bool = 0; var_170_int = 0; var_171_string = ""; // 0x5c7 PushV
	var_172_string = "d"; // 0x5c8 PushS
	var_173_int = 0; // 0x5c9 PushV
	func_1596(var_173_int); // 0x5ca NEW_2
	var_179_int = var_172_string + var_173_int; // 0x5cc Add
	var_180_string = "m"; // 0x5cd PushS
	var_167_string = var_179_int + var_180_string; // 0x5ce Add2
	var_168_int = 0; // 0x5cf MovI
	
Label_1488:
	var_181_int = 1; // 0x5d0 PushI
	if(var_181_int == 0) goto Label_1501; // 0x5d1 JumpB
	var_182_int = 1; // 0x5d2 PushI
	var_183_int = var_168_int + var_182_int; // 0x5d3 Add
	var_184_int = var_167_string + var_183_int; // 0x5d4 Add
	HasProperty(var_184_int, var_169_bool); // 0x5d5 ObjFunc
	var_185_bool = var_169_bool == 0; // 0x5d7 Not
	if(var_185_bool == 0) goto Label_1498; // 0x5d8 JumpB
	goto Label_1501; // 0x5d9 Jump
	
Label_1501:
	var_186_bool = var_168_int == 0; // 0x5dd Not
	if(var_186_bool == 0) goto Label_1505; // 0x5de JumpB
	var_160_bool = 0; // 0x5df MovB
	return 10; // 0x5e0 Return
	
Label_1505:
	var_170_int = 0; // 0x5e1 MovI
	var_187_int = 1; // 0x5e2 PushI
	var_188_bool = var_168_int > var_187_int; // 0x5e3 GT
	if(var_188_bool == 0) goto Label_1511; // 0x5e4 JumpB
	irand(var_170_int, var_168_int); // 0x5e5 Func
	
Label_1511:
	var_189_int = 1; // 0x5e7 PushI
	var_190_int = var_170_int + var_189_int; // 0x5e8 Add
	var_191_int = var_167_string + var_190_int; // 0x5e9 Add
	GetProperty(var_191_int, var_171_string); // 0x5ea ObjFunc
	var_192_bool = 0; var_193_string = ""; // 0x5ec PushV
	var_193_string = var_171_string; // 0x5ed Mov
	func_1553(var_192_bool, var_193_string); // 0x5ee NEW_2
	var_160_bool = var_192_bool; // 0x5ef Mov
	return 10; // 0x5f1 Return
	
Label_1498:
	var_194_int = 1; // 0x5da PushI
	var_168_int = var_168_int + var_194_int; // 0x5db Add2
	goto Label_1488; // 0x5dc Jump
}


func_1611(var_45_string, var_46_int)
{
	var_47_string = ""; var_48_string = ""; // 0x64b PushV
	var_48_string = "idle"; // 0x64c MovS
	var_49_int = var_46_int; // 0x64d Push
	if(var_49_int == 0) goto Label_1616; // 0x64e JumpB
	var_48_string = var_48_string + var_46_int; // 0x64f Add2
	
Label_1616:
	var_45_string = var_48_string; // 0x650 Mov
	return 2; // 0x651 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_213_object, var_214_object)
{
	var_0_object = var_214_object; // 0x52 TMov
	var_1_object = var_213_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_219_int = 1; // 0x55 PushI
	if(var_219_int == 0) goto Label_109; // 0x56 JumpB
	var_220_string = ""; // 0x57 PushV
	var_220_string = "Neutral"; // 0x58 MovS
	func_139(var_214_object, var_220_string); // 0x59 NEW_2
	var_237_int = 518045; // 0x5b PushI
	SetMessage(var_237_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_238_int = 518046; // 0x60 PushI
	var_239_int = 32123; // 0x61 PushI
	var_240_int = 19179; // 0x62 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x63 TObjFunc
	var_241_int = 530814; // 0x65 PushI
	var_242_int = 32123; // 0x66 PushI
	var_243_int = 32122; // 0x67 PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x68 TObjFunc
	goto Label_109; // 0x6a Jump
	
Label_109:
	var_244_bool = 0; // 0x6d PushV
	func_1643(var_244_bool); // 0x6e NEW_2
	if(var_244_bool == 0) goto Label_124; // 0x70 JumpB
	
Label_113:
	lshWaitForAnimEnd(); // 0x71 Func
	var_245_string = var_3_string; // 0x73 PushT
	if(var_245_string == 0) goto Label_118; // 0x74 JumpB
	goto Label_123; // 0x75 Jump
	
Label_123:
	goto Label_138; // 0x7b Jump
	
Label_138:
	return 0; // 0x8a Return
	
Label_118:
	var_246_string = ""; // 0x76 PushV
	var_246_string = var_2_object; // 0x77 MovT
	func_1522(var_246_string); // 0x78 NEW_2
	goto Label_113; // 0x7a Jump
	
Label_124:
	var_257_string = "all"; // 0x7c PushS
	var_258_string = "idle"; // 0x7d PushS
	PlayAnimation(var_257_string, var_258_string); // 0x7e Func
	
Label_128:
	WaitForAnimEnd(); // 0x80 Func
	var_259_string = var_3_string; // 0x82 PushT
	if(var_259_string == 0) goto Label_133; // 0x83 JumpB
	goto Label_138; // 0x84 Jump
	
Label_133:
	var_260_string = "all"; // 0x85 PushS
	var_261_string = "idle"; // 0x86 PushS
	PlayAnimation(var_260_string, var_261_string); // 0x87 Func
	goto Label_128; // 0x89 Jump
}


func_1618(var_39_int)
{
	var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_bool = 0; // 0x652 PushV
	var_42_int = 0; // 0x653 MovI
	
Label_1620:
	var_44_string = "all"; // 0x654 PushS
	var_45_string = ""; var_46_int = 0; // 0x655 PushV
	var_46_int = var_42_int; // 0x656 Mov
	func_1611(var_45_string, var_46_int); // 0x657 NEW_2
	HasAnimation(var_43_bool, var_44_string, var_45_string); // 0x659 Func
	var_50_bool = var_43_bool == 0; // 0x65b Not
	if(var_50_bool == 0) goto Label_1630; // 0x65c JumpB
	goto Label_1633; // 0x65d Jump
	
Label_1633:
	var_39_int = var_42_int; // 0x661 Mov
	return 4; // 0x662 Return
	
Label_1630:
	var_51_int = 1; // 0x65e PushI
	var_42_int = var_42_int + var_51_int; // 0x65f Add2
	goto Label_1620; // 0x660 Jump
}


func_1366()
{
	var_264_bool = 0; var_265_bool = 0; // 0x556 PushV
	var_266_bool = 1; // 0x557 PushB
	CameraSwitchToNormal(var_266_bool); // 0x558 Func
	var_267_bool = 0; // 0x55a PushV
	func_1643(var_267_bool); // 0x55b NEW_2
	if(var_267_bool == 0) goto Label_1375; // 0x55d JumpB
	goto Label_1383; // 0x55e Jump
	
Label_1383:
	return 2; // 0x567 Return
	
Label_1375:
	var_268_string = "head"; // 0x55f PushS
	HasAnimationTrack(var_265_bool, var_268_string); // 0x560 Func
	var_269_bool = var_265_bool; // 0x562 Push
	if(var_269_bool == 0) goto Label_1383; // 0x563 JumpB
	var_270_string = "head"; // 0x564 PushS
	UnlookAsync(var_270_string); // 0x565 Func
}


func_226(var_0_object, var_276_int, var_277_object)
{
	var_279_object = Obj(); var_280_bool = 0; var_281_int = 0; var_282_bool = 0; var_283_object = Obj(); var_284_bool = 0; var_285_int = 0; var_286_bool = 0; // 0xe2 PushV
	var_0_object = var_277_object; // 0xe3 TMov
	var_287_bool = 0; var_288_object = Obj(); var_289_float = 0; // 0xe4 PushV
	var_288_object = var_277_object; // 0xe5 Mov
	var_289_float = 70.0; // 0xe6 MovF
	func_1297(var_288_object, var_289_float); // 0xe7 NEW_2
	var_290_bool = var_287_bool == 0; // 0xe9 Not
	if(var_290_bool == 0) goto Label_237; // 0xea JumpB
	var_276_int = -2; // 0xeb MovI
	return 8; // 0xec Return
	
Label_237:
	CreateDialog(var_283_object); // 0xed Func
	var_291_int = 0; // 0xef PushV
	func_1637(var_291_int); // 0xf0 NEW_2
	SetNPCName(var_291_int); // 0xf2 ObjFunc
	var_292_int = 0; // 0xf4 PushV
	func_1635(var_292_int); // 0xf5 NEW_2
	SetNPCDescription(var_292_int); // 0xf7 ObjFunc
	var_293_string = ""; // 0xf9 PushV
	func_1639(var_293_string); // 0xfa NEW_2
	SetPhoto(var_293_string); // 0xfc ObjFunc
	var_294_string = ""; // 0xfe PushV
	func_1641(var_294_string); // 0xff NEW_2
	SetPhoto2(var_294_string); // 0x101 ObjFunc
	var_295_int = 0; // 0x103 PushV
	func_1663(var_295_int); // 0x104 NEW_2
	SetPlayerName(var_295_int); // 0x106 ObjFunc
	var_285_int = -1; // 0x108 MovI
	IsOverrideActive(var_284_bool); // 0x109 Func
	var_296_bool = var_284_bool; // 0x10b Push
	if(var_296_bool == 0) goto Label_271; // 0x10c JumpB
	var_276_int = -2; // 0x10d MovI
	return 8; // 0x10e Return
	
Label_271:
	DoDialog(var_283_object); // 0x10f Func
	var_297_bool = 0; var_298_object = Obj(); // 0x111 PushV
	var_299_object = Obj(); // 0x112 PushV
	func_1575(var_299_object); // 0x113 NEW_2
	var_298_object = var_299_object; // 0x114 Mov
	func_1384(var_297_bool, var_298_object); // 0x116 NEW_2
	var_300_object = Obj(); var_301_object = Obj(); // 0x118 PushV
	var_300_object = var_277_object; // 0x119 Mov
	var_301_object = var_283_object; // 0x11a Mov
	TaskCall(3); // 0x11b TaskCall
	func_307(var_302_object, var_303_object, var_304_string, var_305_bool, var_300_object, var_301_object); // 0x11c NEW_2
	TaskReturn(); // 0x11d TaskReturn
	IsDialogEnd(var_286_bool); // 0x11f ObjFunc
	
Label_289:
	var_338_bool = var_286_bool == 0; // 0x121 Not
	if(var_338_bool == 0) goto Label_296; // 0x122 JumpB
	sync(); // 0x123 Func
	IsDialogEnd(var_286_bool); // 0x125 ObjFunc
	goto Label_289; // 0x127 Jump
	
Label_296:
	var_339_object = Obj(); // 0x128 PushV
	var_339_object = var_277_object; // 0x129 Mov
	func_1366(); // 0x12a NEW_2
	StopDialog(var_283_object); // 0x12c Func
	GetReturnValue(var_285_int); // 0x12e ObjFunc
	var_276_int = var_285_int; // 0x130 Mov
	return 8; // 0x131 Return
}


func_1635(var_106_int)
{
	var_106_int = 515550; // 0x663 MovI
	return 0; // 0x664 Return
}


func_1637(var_105_int)
{
	var_105_int = 502875; // 0x665 MovI
	return 0; // 0x666 Return
}


func_1639(var_107_string)
{
	var_107_string = "ui/NPC_Petr.png"; // 0x667 MovS
	return 0; // 0x668 Return
}


func_1384(var_118_bool, var_119_object)
{
	var_123_int = 0; var_124_int = 0; var_125_int = 0; var_126_int = 0; // 0x568 PushV
	var_127_string = "voice_common"; // 0x569 PushS
	GetVariable(var_127_string, var_125_int); // 0x56a Func
	var_128_int = var_125_int; // 0x56c Push
	if(var_128_int == 0) goto Label_1422; // 0x56d JumpB
	var_129_bool = 0; var_130_object = Obj(); // 0x56e PushV
	var_130_object = var_119_object; // 0x56f Mov
	func_1442(var_130_object); // 0x570 NEW_2
	var_159_bool = var_129_bool == 0; // 0x572 Not
	if(var_159_bool == 0) goto Label_1404; // 0x573 JumpB
	var_160_bool = 0; var_161_object = Obj(); // 0x574 PushV
	var_161_object = var_119_object; // 0x575 Mov
	func_1479(var_161_object); // 0x576 NEW_2
	var_195_bool = var_160_bool == 0; // 0x578 Not
	if(var_195_bool == 0) goto Label_1404; // 0x579 JumpB
	var_118_bool = 0; // 0x57a MovB
	return 4; // 0x57b Return
	
Label_1404:
	var_196_int = 2; // 0x57c PushI
	irand(var_126_int, var_196_int); // 0x57d Func
	var_197_int = var_126_int; // 0x57f Push
	if(var_197_int == 0) goto Label_1417; // 0x580 JumpB
	var_198_string = "voice_common"; // 0x581 PushS
	var_199_int = 1; // 0x582 PushI
	var_200_int = var_125_int + var_199_int; // 0x583 Add
	var_201_int = 3; // 0x584 PushI
	var_202_int = var_200_int / var_201_int; // 0x585 Mod
	SetVariable(var_198_string, var_202_int); // 0x586 Func
	goto Label_1421; // 0x588 Jump
	
Label_1421:
	goto Label_1440; // 0x58d Jump
	
Label_1440:
	var_118_bool = 1; // 0x5a0 MovB
	return 4; // 0x5a1 Return
	
Label_1417:
	var_203_string = "voice_common"; // 0x589 PushS
	var_204_int = 0; // 0x58a PushI
	SetVariable(var_203_string, var_204_int); // 0x58b Func
	
Label_1422:
	var_205_bool = 0; var_206_object = Obj(); // 0x58e PushV
	var_206_object = var_119_object; // 0x58f Mov
	func_1479(var_206_object); // 0x590 NEW_2
	var_207_bool = var_205_bool == 0; // 0x592 Not
	if(var_207_bool == 0) goto Label_1436; // 0x593 JumpB
	var_208_bool = 0; var_209_object = Obj(); // 0x594 PushV
	var_209_object = var_119_object; // 0x595 Mov
	func_1442(var_209_object); // 0x596 NEW_2
	var_210_bool = var_208_bool == 0; // 0x598 Not
	if(var_210_bool == 0) goto Label_1436; // 0x599 JumpB
	var_118_bool = 0; // 0x59a MovB
	return 4; // 0x59b Return
	
Label_1436:
	var_211_string = "voice_common"; // 0x59c PushS
	var_212_int = 1; // 0x59d PushI
	SetVariable(var_211_string, var_212_int); // 0x59e Func
}


func_1641(var_108_string)
{
	var_108_string = "ui/NPC_Petr_b.png"; // 0x669 MovS
	return 0; // 0x66a Return
}


func_1258(var_59_bool)
{
	var_59_bool = 1; // 0x4ea MovB
	return 0; // 0x4eb Return
}


func_1643(var_100_bool)
{
	var_100_bool = 1; // 0x66b MovB
	return 0; // 0x66c Return
}


func_1260()
{
	StopAnimation(); // 0x4ec Func
	StopGroup0(); // 0x4ee Func
	return 0; // 0x4f0 Return
}


func_1645()
{
	var_29_string = "oob2Petr1"; // 0x66e PushS
	var_30_int = 1; // 0x66f PushI
	SetVariable(var_29_string, var_30_int); // 0x670 Func
	return 0; // 0x672 Return
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


func_1522(var_246_string)
{
	var_247_bool = 0; var_248_float = 0; var_249_float = 0; var_250_bool = 0; var_251_float = 0; var_252_float = 0; // 0x5f2 PushV
	lshHasAnimation(var_250_bool, var_246_string); // 0x5f3 Func
	var_253_bool = var_250_bool; // 0x5f5 Push
	if(var_253_bool == 0) goto Label_1533; // 0x5f6 JumpB
	lshGetAnimTimes(var_246_string, var_251_float, var_252_float); // 0x5f7 Func
	var_254_bool = 0; // 0x5f9 PushB
	lshPlayAnimation(var_251_float, var_252_float, var_254_bool); // 0x5fa Func
	goto Label_1537; // 0x5fc Jump
	
Label_1537:
	return 6; // 0x601 Return
	
Label_1533:
	var_255_string = "Can't find lsh animation : "; // 0x5fd PushS
	var_256_int = var_255_string + var_246_string; // 0x5fe Add
	Trace(var_256_int); // 0x5ff Func
}


func_370(var_2_object, var_307_string)
{
	var_308_bool = 0; // 0x173 PushV
	func_1643(var_308_bool); // 0x174 NEW_2
	var_309_bool = var_308_bool == 0; // 0x176 Not
	if(var_309_bool == 0) goto Label_377; // 0x177 JumpB
	return 0; // 0x178 Return
	
Label_377:
	var_310_bool = var_307_string == var_2_object; // 0x179 Eq
	if(var_310_bool == 0) goto Label_380; // 0x17a JumpB
	return 0; // 0x17b Return
	
Label_380:
	var_311_string = ""; var_312_bool = 0; // 0x17c PushV
	var_311_string = var_307_string; // 0x17d Mov
	var_313_string = ""; // 0x17e PushS
	var_314_bool = var_307_string == var_313_string; // 0x17f Eq
	if(var_314_bool == 0) goto Label_387; // 0x180 JumpB
	var_312_bool = 0; // 0x181 MovB
	goto Label_388; // 0x182 Jump
	
Label_388:
	func_1538(var_311_string, var_312_bool); // 0x184 NEW_2
	var_2_object = var_307_string; // 0x186 TMov
	return 0; // 0x187 Return
	
Label_387:
	var_312_bool = 1; // 0x183 MovB
}


func_1651(var_316_bool)
{
	var_318_int = 0; var_319_string = ""; // 0x674 PushV
	var_319_string = "oob2Petr1"; // 0x675 MovS
	func_1591(var_318_int, var_319_string); // 0x676 NEW_2
	var_322_int = 0; // 0x678 PushI
	var_323_bool = var_318_int == var_322_int; // 0x679 Eq
	if(var_323_bool == 0) goto Label_1661; // 0x67a JumpB
	var_316_bool = 1; // 0x67b MovB
	return 0; // 0x67c Return
	
Label_1661:
	var_316_bool = 0; // 0x67d MovB
	return 0; // 0x67e Return
}


func_628(var_0_object, var_1_object, var_2_object, var_3_string, var_369_object, var_370_object)
{
	var_0_object = var_370_object; // 0x275 TMov
	var_1_object = var_369_object; // 0x276 TMov
	var_3_string = 0; // 0x277 TMovB
	var_375_int = 1; // 0x278 PushI
	if(var_375_int == 0) goto Label_661; // 0x279 JumpB
	var_376_string = ""; // 0x27a PushV
	var_376_string = "Neutral"; // 0x27b MovS
	func_691(var_370_object, var_376_string); // 0x27c NEW_2
	var_384_int = 535231; // 0x27e PushI
	SetMessage(var_384_int); // 0x27f TObjFunc
	ClearReplies(); // 0x281 TObjFunc
	var_385_int = 535232; // 0x283 PushI
	var_386_int = 36953; // 0x284 PushI
	var_387_int = 36907; // 0x285 PushI
	AddReply(var_385_int, var_386_int, var_387_int); // 0x286 TObjFunc
	var_388_int = 535233; // 0x288 PushI
	var_389_int = -1; // 0x289 PushI
	var_390_int = 36908; // 0x28a PushI
	AddReply(var_388_int, var_389_int, var_390_int); // 0x28b TObjFunc
	var_391_int = 535280; // 0x28d PushI
	var_392_int = -1; // 0x28e PushI
	var_393_int = 36956; // 0x28f PushI
	AddReply(var_391_int, var_392_int, var_393_int); // 0x290 TObjFunc
	goto Label_661; // 0x292 Jump
	
Label_661:
	var_394_bool = 0; // 0x295 PushV
	func_1643(var_394_bool); // 0x296 NEW_2
	if(var_394_bool == 0) goto Label_676; // 0x298 JumpB
	
Label_665:
	lshWaitForAnimEnd(); // 0x299 Func
	var_395_string = var_3_string; // 0x29b PushT
	if(var_395_string == 0) goto Label_670; // 0x29c JumpB
	goto Label_675; // 0x29d Jump
	
Label_675:
	goto Label_690; // 0x2a3 Jump
	
Label_690:
	return 0; // 0x2b2 Return
	
Label_670:
	var_396_string = ""; // 0x29e PushV
	var_396_string = var_2_object; // 0x29f MovT
	func_1522(var_396_string); // 0x2a0 NEW_2
	goto Label_665; // 0x2a2 Jump
	
Label_676:
	var_397_string = "all"; // 0x2a4 PushS
	var_398_string = "idle"; // 0x2a5 PushS
	PlayAnimation(var_397_string, var_398_string); // 0x2a6 Func
	
Label_680:
	WaitForAnimEnd(); // 0x2a8 Func
	var_399_string = var_3_string; // 0x2aa PushT
	if(var_399_string == 0) goto Label_685; // 0x2ab JumpB
	goto Label_690; // 0x2ac Jump
	
Label_685:
	var_400_string = "all"; // 0x2ad PushS
	var_401_string = "idle"; // 0x2ae PushS
	PlayAnimation(var_400_string, var_401_string); // 0x2af Func
	goto Label_680; // 0x2b1 Jump
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


func_887(var_0_object, var_1_object, var_2_object, var_3_string, var_430_object, var_431_object)
{
	var_0_object = var_431_object; // 0x378 TMov
	var_1_object = var_430_object; // 0x379 TMov
	var_3_string = 0; // 0x37a TMovB
	var_436_int = 1; // 0x37b PushI
	if(var_436_int == 0) goto Label_915; // 0x37c JumpB
	var_437_string = ""; // 0x37d PushV
	var_437_string = "Neutral"; // 0x37e MovS
	func_945(var_431_object, var_437_string); // 0x37f NEW_2
	var_445_int = 540554; // 0x381 PushI
	SetMessage(var_445_int); // 0x382 TObjFunc
	ClearReplies(); // 0x384 TObjFunc
	var_446_int = 540555; // 0x386 PushI
	var_447_int = -1; // 0x387 PushI
	var_448_int = 42564; // 0x388 PushI
	AddReply(var_446_int, var_447_int, var_448_int); // 0x389 TObjFunc
	var_449_int = 540794; // 0x38b PushI
	var_450_int = -1; // 0x38c PushI
	var_451_int = 42843; // 0x38d PushI
	AddReply(var_449_int, var_450_int, var_451_int); // 0x38e TObjFunc
	goto Label_915; // 0x390 Jump
	
Label_915:
	var_452_bool = 0; // 0x393 PushV
	func_1643(var_452_bool); // 0x394 NEW_2
	if(var_452_bool == 0) goto Label_930; // 0x396 JumpB
	
Label_919:
	lshWaitForAnimEnd(); // 0x397 Func
	var_453_string = var_3_string; // 0x399 PushT
	if(var_453_string == 0) goto Label_924; // 0x39a JumpB
	goto Label_929; // 0x39b Jump
	
Label_929:
	goto Label_944; // 0x3a1 Jump
	
Label_944:
	return 0; // 0x3b0 Return
	
Label_924:
	var_454_string = ""; // 0x39c PushV
	var_454_string = var_2_object; // 0x39d MovT
	func_1522(var_454_string); // 0x39e NEW_2
	goto Label_919; // 0x3a0 Jump
	
Label_930:
	var_455_string = "all"; // 0x3a2 PushS
	var_456_string = "idle"; // 0x3a3 PushS
	PlayAnimation(var_455_string, var_456_string); // 0x3a4 Func
	
Label_934:
	WaitForAnimEnd(); // 0x3a6 Func
	var_457_string = var_3_string; // 0x3a8 PushT
	if(var_457_string == 0) goto Label_939; // 0x3a9 JumpB
	goto Label_944; // 0x3aa Jump
	
Label_939:
	var_458_string = "all"; // 0x3ab PushS
	var_459_string = "idle"; // 0x3ac PushS
	PlayAnimation(var_458_string, var_459_string); // 0x3ad Func
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


func_1663(var_109_int)
{
	var_110_int = 0; var_111_int = 0; // 0x67f PushV
	var_112_string = "branch"; // 0x680 PushS
	GetVariable(var_112_string, var_111_int); // 0x681 Func
	var_113_int = 0; // 0x683 PushI
	var_114_bool = var_111_int == var_113_int; // 0x684 Eq
	if(var_114_bool == 0) goto Label_1673; // 0x685 JumpB
	var_109_int = 1; // 0x686 MovI
	return 2; // 0x687 Return
	
Label_1673:
	var_115_int = 1; // 0x689 PushI
	var_116_bool = var_111_int == var_115_int; // 0x68a Eq
	if(var_116_bool == 0) goto Label_1678; // 0x68b JumpB
	var_109_int = 2; // 0x68c MovI
	return 2; // 0x68d Return
	
Label_1678:
	var_109_int = 3; // 0x68e MovI
	return 2; // 0x68f Return
}


