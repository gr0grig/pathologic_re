task_0_event_17(var_0_bool, var_1_object, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	var_16_object = Obj(); // 0x6c PushV
	var_16_object = var_15_bool; // 0x6d Mov
	func_2976(); // 0x6e NEW_2
	return 0; // 0x70 Return
}


task_0_event_30(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_bool = 0; var_19_object = Obj(); var_20_object = Obj(); // 0x72 PushV
	var_19_object = var_15_object; // 0x73 Mov
	var_20_object = var_16_string; // 0x74 Mov
	func_2978(var_20_object); // 0x75 NEW_2
	return 0; // 0x77 Return
}


task_0_event_26(var_0_bool, var_1_string, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	var_16_string = "kill"; // 0x79 PushS
	var_17_bool = var_15_bool == var_16_string; // 0x7a Eq
	if(var_17_bool == 0) goto Label_125; // 0x7b JumpB
	var_0_bool = 1; // 0x7c TMovB
	
Label_125:
	return 0; // 0x7d Return
}


task_1_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_object, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	var_16_object = Obj(); // 0xb7 PushV
	var_16_object = var_15_bool; // 0xb8 Mov
	func_2976(); // 0xb9 NEW_2
	return 0; // 0xbb Return
}


task_1_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_object, var_8_object, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_bool = 0; var_19_object = Obj(); var_20_object = Obj(); // 0xbd PushV
	var_19_object = var_15_object; // 0xbe Mov
	var_20_object = var_16_string; // 0xbf Mov
	func_2978(var_20_object); // 0xc0 NEW_2
	return 0; // 0xc2 Return
}


task_1_event_26(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_string, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	var_16_string = "kill"; // 0xc4 PushS
	var_17_bool = var_15_bool == var_16_string; // 0xc5 Eq
	if(var_17_bool == 0) goto Label_202; // 0xc6 JumpB
	var_18_bool = GlobalVars[0]; // 0xc7 PushGE
	var_18_bool = 1; // 0xc8 MovB
	GlobalVars[0] = var_18_bool; // 0xc9 PopGE
	
Label_202:
	return 0; // 0xca Return
}


task_2_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	var_16_object = Obj(); // 0x360 PushV
	var_16_object = var_15_bool; // 0x361 Mov
	func_2976(); // 0x362 NEW_2
	return 0; // 0x364 Return
}


task_2_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_bool = 0; var_19_object = Obj(); var_20_object = Obj(); // 0x366 PushV
	var_19_object = var_15_object; // 0x367 Mov
	var_20_object = var_16_string; // 0x368 Mov
	func_2978(var_20_object); // 0x369 NEW_2
	return 0; // 0x36b Return
}


task_2_event_26(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_string, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	var_16_string = "kill"; // 0x36d PushS
	var_17_bool = var_15_bool == var_16_string; // 0x36e Eq
	if(var_17_bool == 0) goto Label_886; // 0x36f JumpB
	var_18_bool = GlobalVars[0]; // 0x370 PushGE
	var_18_bool = 1; // 0x371 MovB
	GlobalVars[0] = var_18_bool; // 0x372 PopGE
	func_950(var_15_bool); // 0x374 NEW_2
	
Label_886:
	return 0; // 0x376 Return
}


task_2_event_7(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_int, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	var_16_int = 1; // 0x3a9 PushI
	var_17_bool = var_15_bool == var_16_int; // 0x3aa Eq
	if(var_17_bool == 0) goto Label_945; // 0x3ab JumpB
	var_18_object = Obj(); // 0x3ac PushV
	var_18_object = var_1_object; // 0x3ad MovT
	func_2645(var_18_object); // 0x3ae NEW_2
	goto Label_949; // 0x3b0 Jump
	
Label_949:
	return 0; // 0x3b5 Return
	
Label_945:
	var_23_int = 0; // 0x3b1 PushV
	var_23_int = var_15_bool; // 0x3b2 Mov
	func_1094(var_14_string, var_15_bool, var_23_int); // 0x3b3 NEW_2
}


task_2_event_1(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	var_16_bool = 0; // 0x3c4 PushV
	var_16_bool = 0; // 0x3c5 MovB
	var_17_bool = var_1_object == var_15_bool; // 0x3c6 Eq
	if(var_17_bool == 0) goto Label_971; // 0x3c7 JumpB
	var_18_bool = var_2_int == 0; // 0x3c8 Not
	if(var_18_bool == 0) goto Label_971; // 0x3c9 JumpB
	var_16_bool = 1; // 0x3ca MovB
	
Label_971:
	if(var_16_bool == 0) goto Label_977; // 0x3cb JumpB
	var_2_int = 1; // 0x3cc TMovB
	var_19_object = Obj(); // 0x3cd PushV
	var_19_object = var_15_bool; // 0x3ce Mov
	func_2425(var_19_object); // 0x3cf NEW_2
	
Label_977:
	return 0; // 0x3d1 Return
}


task_2_event_2(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	var_16_bool = 0; // 0x3d3 PushV
	var_16_bool = 0; // 0x3d4 MovB
	var_17_bool = var_1_object == var_15_bool; // 0x3d5 Eq
	if(var_17_bool == 0) goto Label_986; // 0x3d6 JumpB
	var_18_int = var_2_int; // 0x3d7 PushT
	if(var_18_int == 0) goto Label_986; // 0x3d8 JumpB
	var_16_bool = 1; // 0x3d9 MovB
	
Label_986:
	if(var_16_bool == 0) goto Label_991; // 0x3da JumpB
	var_2_int = 0; // 0x3db TMovB
	var_19_string = "head"; // 0x3dc PushS
	UnlookAsync(var_19_string); // 0x3dd Func
	
Label_991:
	return 0; // 0x3df Return
}


task_2_event_10(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	RequestClearPath(var_15_bool); // 0x459 Func
	return 0; // 0x45b Return
}


task_2_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	func_950(var_15_bool); // 0x465 NEW_2
	var_20_object = Obj(); // 0x467 PushV
	var_20_object = var_15_bool; // 0x468 Mov
	func_2970(); // 0x469 NEW_2
	return 0; // 0x46b Return
}


task_4_event_11(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int)
{
	var_17_int = 1; // 0x53b PushI
	if(var_17_int == 0) goto Label_1567; // 0x53c JumpB
	func_2436(); // 0x53e NEW_2
	var_19_int = 20248; // 0x540 PushI
	var_20_bool = var_16_int == var_19_int; // 0x541 Eq
	if(var_20_bool == 0) goto Label_1352; // 0x542 JumpB
	var_21_object = Obj(); var_22_object = Obj(); // 0x543 PushV
	var_21_object = var_1_object; // 0x544 MovT
	var_22_object = var_0_bool; // 0x545 MovT
	func_2746(); // 0x546 NEW_2
	
Label_1352:
	var_29_int = 20242; // 0x548 PushI
	var_30_bool = var_16_int == var_29_int; // 0x549 Eq
	if(var_30_bool == 0) goto Label_1360; // 0x54a JumpB
	var_31_object = Obj(); var_32_object = Obj(); // 0x54b PushV
	var_31_object = var_1_object; // 0x54c MovT
	var_32_object = var_0_bool; // 0x54d MovT
	func_2746(); // 0x54e NEW_2
	
Label_1360:
	var_33_int = 20258; // 0x550 PushI
	var_34_bool = var_16_int == var_33_int; // 0x551 Eq
	if(var_34_bool == 0) goto Label_1368; // 0x552 JumpB
	var_35_object = Obj(); var_36_object = Obj(); // 0x553 PushV
	var_35_object = var_1_object; // 0x554 MovT
	var_36_object = var_0_bool; // 0x555 MovT
	func_2746(); // 0x556 NEW_2
	
Label_1368:
	var_37_int = 20255; // 0x558 PushI
	var_38_bool = var_16_int == var_37_int; // 0x559 Eq
	if(var_38_bool == 0) goto Label_1376; // 0x55a JumpB
	var_39_object = Obj(); var_40_object = Obj(); // 0x55b PushV
	var_39_object = var_1_object; // 0x55c MovT
	var_40_object = var_0_bool; // 0x55d MovT
	func_2746(); // 0x55e NEW_2
	
Label_1376:
	var_41_int = 19494; // 0x560 PushI
	var_42_bool = var_15_int == var_41_int; // 0x561 Eq
	if(var_42_bool == 0) goto Label_1440; // 0x562 JumpB
	var_43_bool = 0; var_44_object = Obj(); // 0x563 PushV
	var_44_object = var_1_object; // 0x564 MovT
	func_2753(var_44_object); // 0x565 NEW_2
	var_51_bool = var_43_bool == 0; // 0x567 Not
	if(var_51_bool == 0) goto Label_1410; // 0x568 JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0x569 PushV
	var_52_object = var_1_object; // 0x56a MovT
	var_53_object = var_0_bool; // 0x56b MovT
	func_2740(); // 0x56c NEW_2
	var_56_string = ""; // 0x56e PushV
	var_56_string = "Neutral"; // 0x56f MovS
	func_1316(var_16_int, var_56_string); // 0x570 NEW_2
	var_73_int = 518381; // 0x572 PushI
	SetMessage(var_73_int); // 0x573 TObjFunc
	ClearReplies(); // 0x575 TObjFunc
	var_74_int = 519109; // 0x577 PushI
	var_75_int = 20244; // 0x578 PushI
	var_76_int = 20240; // 0x579 PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0x57a TObjFunc
	var_77_int = 518382; // 0x57c PushI
	var_78_int = 20241; // 0x57d PushI
	var_79_int = 19495; // 0x57e PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0x57f TObjFunc
	return 0; // 0x581 Return
	
Label_1410:
	var_80_bool = 0; var_81_object = Obj(); // 0x582 PushV
	var_81_object = var_1_object; // 0x583 MovT
	func_2753(var_81_object); // 0x584 NEW_2
	if(var_80_bool == 0) goto Label_1440; // 0x586 JumpB
	var_82_object = Obj(); var_83_object = Obj(); // 0x587 PushV
	var_82_object = var_1_object; // 0x588 MovT
	var_83_object = var_0_bool; // 0x589 MovT
	func_2740(); // 0x58a NEW_2
	var_84_string = ""; // 0x58c PushV
	var_84_string = "Neutral"; // 0x58d MovS
	func_1316(var_16_int, var_84_string); // 0x58e NEW_2
	var_85_int = 518383; // 0x590 PushI
	SetMessage(var_85_int); // 0x591 TObjFunc
	ClearReplies(); // 0x593 TObjFunc
	var_86_int = 518384; // 0x595 PushI
	var_87_int = 20252; // 0x596 PushI
	var_88_int = 19497; // 0x597 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x598 TObjFunc
	var_89_int = 519119; // 0x59a PushI
	var_90_int = 20252; // 0x59b PushI
	var_91_int = 20251; // 0x59c PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x59d TObjFunc
	return 0; // 0x59f Return
	
Label_1440:
	var_92_int = 20252; // 0x5a0 PushI
	var_93_bool = var_15_int == var_92_int; // 0x5a1 Eq
	if(var_93_bool == 0) goto Label_1463; // 0x5a2 JumpB
	var_94_string = ""; // 0x5a3 PushV
	var_94_string = "Neutral"; // 0x5a4 MovS
	func_1316(var_16_int, var_94_string); // 0x5a5 NEW_2
	var_95_int = 519120; // 0x5a7 PushI
	SetMessage(var_95_int); // 0x5a8 TObjFunc
	ClearReplies(); // 0x5aa TObjFunc
	var_96_int = 519121; // 0x5ac PushI
	var_97_int = 20256; // 0x5ad PushI
	var_98_int = 20254; // 0x5ae PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x5af TObjFunc
	var_99_int = 519122; // 0x5b1 PushI
	var_100_int = -1; // 0x5b2 PushI
	var_101_int = 20255; // 0x5b3 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x5b4 TObjFunc
	return 0; // 0x5b6 Return
	
Label_1463:
	var_102_int = 20256; // 0x5b7 PushI
	var_103_bool = var_15_int == var_102_int; // 0x5b8 Eq
	if(var_103_bool == 0) goto Label_1486; // 0x5b9 JumpB
	var_104_string = ""; // 0x5ba PushV
	var_104_string = "Neutral"; // 0x5bb MovS
	func_1316(var_16_int, var_104_string); // 0x5bc NEW_2
	var_105_int = 519123; // 0x5be PushI
	SetMessage(var_105_int); // 0x5bf TObjFunc
	ClearReplies(); // 0x5c1 TObjFunc
	var_106_int = 519124; // 0x5c3 PushI
	var_107_int = -1; // 0x5c4 PushI
	var_108_int = 20257; // 0x5c5 PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x5c6 TObjFunc
	var_109_int = 519125; // 0x5c8 PushI
	var_110_int = -1; // 0x5c9 PushI
	var_111_int = 20258; // 0x5ca PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x5cb TObjFunc
	return 0; // 0x5cd Return
	
Label_1486:
	var_112_int = 20241; // 0x5ce PushI
	var_113_bool = var_15_int == var_112_int; // 0x5cf Eq
	if(var_113_bool == 0) goto Label_1509; // 0x5d0 JumpB
	var_114_string = ""; // 0x5d1 PushV
	var_114_string = "Neutral"; // 0x5d2 MovS
	func_1316(var_16_int, var_114_string); // 0x5d3 NEW_2
	var_115_int = 519110; // 0x5d5 PushI
	SetMessage(var_115_int); // 0x5d6 TObjFunc
	ClearReplies(); // 0x5d8 TObjFunc
	var_116_int = 519111; // 0x5da PushI
	var_117_int = -1; // 0x5db PushI
	var_118_int = 20242; // 0x5dc PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x5dd TObjFunc
	var_119_int = 519112; // 0x5df PushI
	var_120_int = -1; // 0x5e0 PushI
	var_121_int = 20243; // 0x5e1 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x5e2 TObjFunc
	return 0; // 0x5e4 Return
	
Label_1509:
	var_122_int = 20244; // 0x5e5 PushI
	var_123_bool = var_15_int == var_122_int; // 0x5e6 Eq
	if(var_123_bool == 0) goto Label_1532; // 0x5e7 JumpB
	var_124_string = ""; // 0x5e8 PushV
	var_124_string = "Neutral"; // 0x5e9 MovS
	func_1316(var_16_int, var_124_string); // 0x5ea NEW_2
	var_125_int = 519113; // 0x5ec PushI
	SetMessage(var_125_int); // 0x5ed TObjFunc
	ClearReplies(); // 0x5ef TObjFunc
	var_126_int = 519114; // 0x5f1 PushI
	var_127_int = 20247; // 0x5f2 PushI
	var_128_int = 20245; // 0x5f3 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x5f4 TObjFunc
	var_129_int = 519115; // 0x5f6 PushI
	var_130_int = 20247; // 0x5f7 PushI
	var_131_int = 20246; // 0x5f8 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x5f9 TObjFunc
	return 0; // 0x5fb Return
	
Label_1532:
	var_132_int = 20247; // 0x5fc PushI
	var_133_bool = var_15_int == var_132_int; // 0x5fd Eq
	if(var_133_bool == 0) goto Label_1555; // 0x5fe JumpB
	var_134_string = ""; // 0x5ff PushV
	var_134_string = "Neutral"; // 0x600 MovS
	func_1316(var_16_int, var_134_string); // 0x601 NEW_2
	var_135_int = 519116; // 0x603 PushI
	SetMessage(var_135_int); // 0x604 TObjFunc
	ClearReplies(); // 0x606 TObjFunc
	var_136_int = 519117; // 0x608 PushI
	var_137_int = -1; // 0x609 PushI
	var_138_int = 20248; // 0x60a PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x60b TObjFunc
	var_139_int = 519118; // 0x60d PushI
	var_140_int = -1; // 0x60e PushI
	var_141_int = 20250; // 0x60f PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x610 TObjFunc
	return 0; // 0x612 Return
	
Label_1555:
	var_3_int = 1; // 0x613 TMovB
	var_142_bool = 0; // 0x614 PushV
	func_2714(var_142_bool); // 0x615 NEW_2
	if(var_142_bool == 0) goto Label_1563; // 0x617 JumpB
	lshStopAnimation(); // 0x618 Func
	goto Label_1565; // 0x61a Jump
	
Label_1565:
	return 0; // 0x61d Return
	
Label_1563:
	StopAnimation(); // 0x61b Func
	
Label_1567:
	return 0; // 0x61f Return
}


task_5_event_0(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object)
{
	func_1685(); // 0x62a NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0x62c PushV
	var_17_object = var_15_object; // 0x62d Mov
	TaskCall(3); // 0x62e TaskCall
	func_1143(var_18_object, var_16_int, var_17_object); // 0x62f NEW_2
	TaskReturn(); // 0x630 TaskReturn
	return 0; // 0x632 Return
}


task_5_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_string = ""; var_18_string = ""; // 0x634 PushV
	var_17_string = "quest_b3_02"; // 0x635 MovS
	var_18_string = "grabitel_attack"; // 0x636 MovS
	func_2633(var_16_bool, var_17_string, var_18_string); // 0x637 NEW_2
	return 0; // 0x639 Return
}


task_5_event_26(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_string)
{
	var_16_string = "attack"; // 0x63b PushS
	var_17_bool = var_15_string == var_16_string; // 0x63c Eq
	if(var_17_bool == 0) goto Label_1603; // 0x63d JumpB
	TaskCall(6); // 0x63f TaskCall
	func_1690(); // 0x640 NEW_2
	TaskReturn(); // 0x641 TaskReturn
	
Label_1603:
	return 0; // 0x643 Return
}


task_7_event_0(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_bool = 0; // 0x6e9 PushV
	IsOverrideActive(var_17_bool); // 0x6ea Func
	var_18_bool = var_17_bool == 0; // 0x6ec Not
	if(var_18_bool == 0) goto Label_1778; // 0x6ed JumpB
	var_19_object = Obj(); // 0x6ee PushV
	var_19_object = var_15_object; // 0x6ef Mov
	func_2788(var_19_object); // 0x6f0 NEW_2
	
Label_1778:
	return 2; // 0x6f2 Return
}


task_7_event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float)
{
	return 0; // 0x769 Return
}


task_7_event_16(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_string)
{
	return 0; // 0x76b Return
}


task_7_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object)
{
	return 0; // 0x76d Return
}


event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float)
{
	var_19_object = Obj(); var_20_int = 0; var_21_float = 0; // 0xb7c PushV
	var_19_object = var_15_object; // 0xb7d Mov
	var_20_int = var_16_int; // 0xb7e Mov
	var_21_float = var_17_float; // 0xb7f Mov
	func_2209(var_19_object, var_20_int, var_21_float); // 0xb80 NEW_2
	return 0; // 0xb82 Return
}


event_43(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_int = 0; var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); // 0xb84 PushV
	var_21_object = var_15_object; // 0xb85 Mov
	var_22_int = var_16_int; // 0xb86 Mov
	var_23_float = var_17_float; // 0xb87 Mov
	var_24_cvector = var_19_cvector; // 0xb88 Mov
	var_25_cvector = var_20_cvector; // 0xb89 Mov
	func_2277(var_23_float, var_24_cvector, var_25_cvector); // 0xb8a NEW_2
	return 0; // 0xb8c Return
}


event_16(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_string)
{
	var_17_float = 0; var_18_float = 0; // 0xb8d PushV
	var_19_string = "health"; // 0xb8e PushS
	var_20_bool = var_16_string == var_19_string; // 0xb8f Eq
	if(var_20_bool == 0) goto Label_2969; // 0xb90 JumpB
	var_21_string = "health"; // 0xb91 PushS
	GetProperty(var_21_string, var_18_float); // 0xb92 Func
	var_22_int = 0; // 0xb94 PushI
	var_23_bool = var_18_float <= var_22_int; // 0xb95 LE
	if(var_23_bool == 0) goto Label_2969; // 0xb96 JumpB
	SignalDeath(var_15_object); // 0xb97 Func
	
Label_2969:
	return 2; // 0xb99 Return
}


event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object)
{
	var_16_object = Obj(); // 0xb9b PushV
	var_16_object = var_15_object; // 0xb9c Mov
	func_2908(var_16_object); // 0xb9d NEW_2
	return 0; // 0xb9f Return
}


main(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool)
{
	
Label_1568:
	func_1604(); // 0x621 NEW_2
	var_68_int = 3; // 0x623 PushI
	Sleep(var_68_int); // 0x624 Func
	goto Label_1568; // 0x626 Jump
}


func_0(var_0_bool, var_76_bool, var_77_object, var_196_object)
{
	var_79_object = Obj(); var_80_cvector = CVector(0,0,0); var_81_bool = 0; var_82_object = Obj(); var_83_cvector = CVector(0,0,0); var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_object = Obj(); var_87_cvector = CVector(0,0,0); var_88_bool = 0; var_89_object = Obj(); var_90_cvector = CVector(0,0,0); var_91_float = 0; var_92_cvector = CVector(0,0,0); // 0x0 PushV
	var_93_object = Obj(); // 0x1 PushV
	var_93_object = var_77_object; // 0x2 Mov
	func_2645(var_93_object); // 0x3 NEW_2
	var_0_bool = 0; // 0x5 TMovB
	var_98_bool = 0; var_99_object = Obj(); // 0x6 PushV
	var_99_object = var_77_object; // 0x7 Mov
	func_2156(var_99_object); // 0x8 NEW_2
	var_112_bool = 0; var_113_object = Obj(); // 0xa PushV
	var_113_object = var_77_object; // 0xb Mov
	func_2122(var_112_bool, var_113_object); // 0xc NEW_2
	var_114_bool = var_112_bool == 0; // 0xe Not
	if(var_114_bool == 0) goto Label_18; // 0xf JumpB
	var_76_bool = 0; // 0x10 MovB
	return 14; // 0x11 Return
	
Label_18:
	func_2654(); // 0x13 NEW_2
	Face(var_77_object); // 0x15 Func
	var_121_string = "all"; // 0x17 PushS
	var_122_string = "aattack_begin1"; // 0x18 PushS
	PlayAnimation(var_121_string, var_122_string); // 0x19 Func
	WaitForAnimEnd(); // 0x1b Func
	var_123_bool = 0; var_124_object = Obj(); // 0x1d PushV
	var_124_object = var_77_object; // 0x1e Mov
	func_2122(var_123_bool, var_124_object); // 0x1f NEW_2
	var_125_bool = var_123_bool == 0; // 0x21 Not
	if(var_125_bool == 0) goto Label_39; // 0x22 JumpB
	StopAsync(); // 0x23 Func
	var_76_bool = 0; // 0x25 MovB
	return 14; // 0x26 Return
	
Label_39:
	var_126_string = "all"; // 0x27 PushS
	var_127_string = "aattack_end1"; // 0x28 PushS
	PlayAnimation(var_126_string, var_127_string); // 0x29 Func
	GetScene(var_86_object); // 0x2b Func
	var_128_string = "knife"; // 0x2d PushS
	GetGeometryLocator(var_128_string, var_88_bool, var_87_cvector); // 0x2e Func
	var_129_string = "scripted"; // 0x30 PushS
	var_130_cvector = CVector(0.0, 0.0, 1.0); // 0x31 PushVec
	var_131_string = "grabitel_knife.xml"; // 0x32 PushS
	AddActorByType(var_89_object, var_129_string, var_86_object, var_87_cvector, var_130_cvector, var_131_string); // 0x33 Func
	var_132_string = "Owner"; // 0x35 PushS
	var_133_object = Obj(); // 0x36 PushV
	func_2495(var_133_object); // 0x37 NEW_2
	SetScriptProperty(var_132_string, var_133_object); // 0x39 ObjFunc
	var_134_string = "Target"; // 0x3b PushS
	SetScriptProperty(var_134_string, var_77_object); // 0x3c ObjFunc
	GetPosition(var_90_cvector); // 0x3e ObjFunc
	GetEyesHeight(var_91_float); // 0x40 ObjFunc
	var_135_float = GetByIndex(var_90_cvector, 1); // 0x42 PushE
	var_136_int = 10; // 0x43 PushI
	var_137_int = var_91_float - var_136_int; // 0x44 Sub
	var_135_float = var_135_float + var_137_int; // 0x45 Add2
	SetByIndex(var_90_cvector, 1) = var_135_float; // 0x46 PopE
	var_138_cvector = CVector(0,0,0); var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_float = 0; // 0x47 PushV
	var_139_cvector = var_87_cvector; // 0x48 Mov
	var_140_cvector = var_90_cvector; // 0x49 Mov
	var_141_float = 2000.0; // 0x4a MovF
	func_2671(var_138_cvector, var_139_cvector, var_140_cvector, var_141_float); // 0x4b NEW_2
	var_92_cvector = var_138_cvector; // 0x4c Mov
	var_189_string = "StartDirection"; // 0x4e PushS
	SetScriptProperty(var_189_string, var_92_cvector); // 0x4f ObjFunc
	WaitForAnimEnd(); // 0x51 Func
	StopAsync(); // 0x53 Func
	var_190_bool = var_0_bool; // 0x55 PushT
	if(var_190_bool == 0) goto Label_89; // 0x56 JumpB
	var_76_bool = 1; // 0x57 MovB
	return 14; // 0x58 Return
	
Label_89:
	var_191_bool = 0; var_192_object = Obj(); // 0x59 PushV
	var_192_object = var_77_object; // 0x5a Mov
	func_2122(var_191_bool, var_192_object); // 0x5b NEW_2
	var_193_bool = var_191_bool == 0; // 0x5d Not
	if(var_193_bool == 0) goto Label_97; // 0x5e JumpB
	var_76_bool = 0; // 0x5f MovB
	return 14; // 0x60 Return
	
Label_97:
	var_194_bool = 0; var_195_object = Obj(); // 0x61 PushV
	var_195_object = var_77_object; // 0x62 Mov
	TaskCall(1); // 0x63 TaskCall
	func_126(var_194_bool, var_195_object); // 0x64 NEW_2
	TaskReturn(); // 0x65 TaskReturn
	var_76_bool = var_196_object; // 0x66 Mov
	return 14; // 0x68 Return
}


func_2561(var_100_bool, var_101_int, var_102_int)
{
	var_103_int = 0; var_104_int = 0; // 0xa01 PushV
	irand(var_104_int, var_102_int); // 0xa02 Func
	var_100_bool = var_104_int < var_101_int; // 0xa04 LT2
	return 2; // 0xa05 Return
}


func_2050(var_604_bool, var_605_object)
{
	var_606_float = 0; var_607_float = 0; // 0x802 PushV
	var_608_bool = 0; var_609_object = Obj(); var_610_string = ""; // 0x803 PushV
	var_609_object = var_605_object; // 0x804 Mov
	var_610_string = "health"; // 0x805 MovS
	func_1943(var_608_bool, var_609_object, var_610_string); // 0x806 NEW_2
	var_611_bool = var_608_bool == 0; // 0x808 Not
	if(var_611_bool == 0) goto Label_2060; // 0x809 JumpB
	var_604_bool = 0; // 0x80a MovB
	return 2; // 0x80b Return
	
Label_2060:
	var_612_bool = 0; // 0x80c PushV
	var_612_bool = 0; // 0x80d MovB
	var_613_bool = 0; var_614_object = Obj(); // 0x80e PushV
	var_614_object = var_605_object; // 0x80f Mov
	func_1938(var_613_bool, var_614_object); // 0x810 NEW_2
	if(var_613_bool == 0) goto Label_2072; // 0x812 JumpB
	var_615_bool = 0; // 0x813 PushV
	func_2665(var_615_bool); // 0x814 NEW_2
	if(var_615_bool == 0) goto Label_2072; // 0x816 JumpB
	var_612_bool = 1; // 0x817 MovB
	
Label_2072:
	if(var_612_bool == 0) goto Label_2075; // 0x818 JumpB
	var_604_bool = 0; // 0x819 MovB
	return 2; // 0x81a Return
	
Label_2075:
	var_619_string = "health"; // 0x81b PushS
	GetProperty(var_619_string, var_607_float); // 0x81c ObjFunc
	var_620_float = 0.0; // 0x81e PushF
	var_604_bool = var_607_float <= var_620_float; // 0x81f LE2
	return 2; // 0x820 Return
}


func_2566(var_97_int, var_98_string)
{
	var_99_int = 0; var_100_int = 0; // 0xa06 PushV
	GetVariable(var_98_string, var_100_int); // 0xa07 Func
	var_97_int = var_100_int; // 0xa09 Mov
	return 2; // 0xa0a Return
}


func_2571(var_32_bool, var_33_object, var_34_float)
{
	var_35_bool = var_33_object == 0; // 0xa0c Not
	if(var_35_bool == 0) goto Label_2576; // 0xa0d JumpB
	var_32_bool = 0; // 0xa0e MovB
	return 0; // 0xa0f Return
	
Label_2576:
	var_36_int = 0; // 0xa10 PushI
	var_37_bool = var_34_float > var_36_int; // 0xa11 GT
	if(var_37_bool == 0) goto Label_2583; // 0xa12 JumpB
	var_38_int = 8; // 0xa13 PushI
	SendWorldWndMessage(var_38_int); // 0xa14 Func
	goto Label_2592; // 0xa16 Jump
	
Label_2592:
	var_39_float = 0; // 0xa20 PushV
	var_39_float = var_34_float; // 0xa21 Mov
	func_2623(var_39_float); // 0xa22 NEW_2
	var_43_bool = 0; var_44_object = Obj(); var_45_string = ""; var_46_float = 0; var_47_float = 0; var_48_float = 0; // 0xa24 PushV
	var_44_object = var_33_object; // 0xa25 Mov
	var_45_string = "reputation"; // 0xa26 MovS
	var_46_float = var_34_float; // 0xa27 Mov
	var_47_float = 0; // 0xa28 MovI
	var_48_float = 1; // 0xa29 MovI
	func_1955(var_43_bool, var_44_object, var_45_string, var_46_float, var_47_float, var_48_float); // 0xa2a NEW_2
	var_32_bool = 1; // 0xa2c MovB
	return 0; // 0xa2d Return
	
Label_2583:
	var_67_int = 0; // 0xa17 PushI
	var_68_bool = var_34_float < var_67_int; // 0xa18 LT
	if(var_68_bool == 0) goto Label_2590; // 0xa19 JumpB
	var_69_int = 9; // 0xa1a PushI
	SendWorldWndMessage(var_69_int); // 0xa1b Func
	goto Label_2592; // 0xa1d Jump
	
Label_2590:
	var_32_bool = 0; // 0xa1e MovB
	return 0; // 0xa1f Return
}


func_2081(var_42_bool)
{
	var_44_bool = 0; var_45_bool = 0; // 0x821 PushV
	IsDead(var_45_bool); // 0x822 ObjFunc
	var_42_bool = var_45_bool; // 0x824 Mov
	return 2; // 0x825 Return
}


func_2086(var_31_bool, var_32_object)
{
	var_33_object = Obj(); var_34_object = Obj(); var_35_object = Obj(); var_36_object = Obj(); // 0x826 PushV
	var_37_bool = var_32_object == 0; // 0x827 NullEq
	if(var_37_bool == 0) goto Label_2091; // 0x828 JumpB
	var_31_bool = 0; // 0x829 MovB
	return 4; // 0x82a Return
	
Label_2091:
	var_38_bool = 0; // 0x82b PushV
	var_38_bool = 0; // 0x82c MovB
	var_39_string = "IsDead"; // 0x82d PushS
	var_40_int = 1; // 0x82e PushI
	var_41_bool = IsFuncExist(var_32_object, var_39_string, var_40_int); // 0x82f FuncExist
	if(var_41_bool == 0) goto Label_2103; // 0x830 JumpB
	var_42_bool = 0; var_43_object = Obj(); // 0x831 PushV
	var_43_object = var_32_object; // 0x832 Mov
	func_2081(var_43_object); // 0x833 NEW_2
	if(var_42_bool == 0) goto Label_2103; // 0x835 JumpB
	var_38_bool = 1; // 0x836 MovB
	
Label_2103:
	if(var_38_bool == 0) goto Label_2106; // 0x837 JumpB
	var_31_bool = 0; // 0x838 MovB
	return 4; // 0x839 Return
	
Label_2106:
	GetScene(var_35_object); // 0x83a Func
	var_46_bool = var_35_object == 0; // 0x83c NullEq
	if(var_46_bool == 0) goto Label_2112; // 0x83d JumpB
	var_31_bool = 0; // 0x83e MovB
	return 4; // 0x83f Return
	
Label_2112:
	GetScene(var_36_object); // 0x840 ObjFunc
	var_47_bool = var_35_object != var_36_object; // 0x842 Neq
	if(var_47_bool == 0) goto Label_2118; // 0x843 JumpB
	var_31_bool = 0; // 0x844 MovB
	return 4; // 0x845 Return
	
Label_2118:
	var_31_bool = 1; // 0x846 MovB
	return 4; // 0x847 Return
}


func_2606(var_589_float)
{
	var_590_object = Obj(); var_591_object = Obj(); // 0xa2e PushV
	CreateFloatVector(var_591_object); // 0xa2f Func
	add(var_589_float); // 0xa31 ObjFunc
	var_592_int = 0; // 0xa33 PushI
	var_593_bool = var_589_float < var_592_int; // 0xa34 LT
	if(var_593_bool == 0) goto Label_2618; // 0xa35 JumpB
	var_594_float = 0.7; // 0xa36 PushF
	var_595_int = 500; // 0xa37 PushI
	RumblePlay(var_594_float, var_595_int); // 0xa38 Func
	
Label_2618:
	var_596_int = 15; // 0xa3a PushI
	SendWorldWndMessage(var_596_int, var_591_object); // 0xa3b Func
	return 2; // 0xa3d Return
}


func_2623(var_39_float)
{
	var_40_object = Obj(); var_41_object = Obj(); // 0xa3f PushV
	CreateFloatVector(var_41_object); // 0xa40 Func
	add(var_39_float); // 0xa42 ObjFunc
	var_42_int = 16; // 0xa44 PushI
	SendWorldWndMessage(var_42_int, var_41_object); // 0xa45 Func
	return 2; // 0xa47 Return
}


func_1604()
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0; // 0x644 PushV
	WaitForAnimEnd(); // 0x645 Func
	var_29_bool = 0; // 0x647 PushV
	func_2302(var_29_bool); // 0x648 NEW_2
	var_32_bool = var_29_bool == 0; // 0x64a Not
	if(var_32_bool == 0) goto Label_1613; // 0x64b JumpB
	return 14; // 0x64c Return
	
Label_1613:
	var_33_int = 0; // 0x64d PushV
	func_2723(var_33_int); // 0x64e NEW_2
	var_22_int = var_33_int; // 0x64f Mov
	var_23_int = 0; // 0x651 MovI
	
Label_1618:
	var_46_bool = 0; // 0x652 PushV
	var_46_bool = 0; // 0x653 MovB
	var_47_int = 5; // 0x654 PushI
	var_48_bool = var_23_int < var_47_int; // 0x655 LT
	if(var_48_bool == 0) goto Label_1628; // 0x656 JumpB
	var_49_bool = 0; // 0x657 PushV
	func_2302(var_49_bool); // 0x658 NEW_2
	if(var_49_bool == 0) goto Label_1628; // 0x65a JumpB
	var_46_bool = 1; // 0x65b MovB
	
Label_1628:
	if(var_46_bool == 0) goto Label_1680; // 0x65c JumpB
	var_50_int = 3; // 0x65d PushI
	irand(var_24_int, var_50_int); // 0x65e Func
	var_51_int = 0; // 0x660 PushI
	var_52_bool = var_24_int == var_51_int; // 0x661 Eq
	if(var_52_bool == 0) goto Label_1652; // 0x662 JumpB
	var_53_int = var_22_int; // 0x663 Push
	if(var_53_int == 0) goto Label_1651; // 0x664 JumpB
	irand(var_25_int, var_22_int); // 0x665 Func
	var_54_string = "all"; // 0x667 PushS
	var_55_string = ""; var_56_int = 0; // 0x668 PushV
	var_56_int = var_25_int; // 0x669 Mov
	func_2716(var_55_string, var_56_int); // 0x66a NEW_2
	PlayAnimation(var_54_string, var_55_string); // 0x66c Func
	WaitForAnimEnd(var_26_bool); // 0x66e Func
	var_57_bool = var_26_bool == 0; // 0x670 Not
	if(var_57_bool == 0) goto Label_1651; // 0x671 JumpB
	goto Label_1680; // 0x672 Jump
	
Label_1680:
	ResetAAS(); // 0x690 Func
	return 14; // 0x692 Return
	
Label_1651:
	goto Label_1669; // 0x673 Jump
	
Label_1669:
	var_58_bool = 0; // 0x685 PushV
	func_1683(var_58_bool); // 0x686 NEW_2
	var_59_bool = var_58_bool == 0; // 0x688 Not
	if(var_59_bool == 0) goto Label_1675; // 0x689 JumpB
	goto Label_1680; // 0x68a Jump
	
Label_1675:
	ResetAAS(); // 0x68b Func
	var_60_int = 1; // 0x68d PushI
	var_23_int = var_23_int + var_60_int; // 0x68e Add2
	goto Label_1618; // 0x68f Jump
	
Label_1652:
	var_61_int = 1; // 0x674 PushI
	var_62_bool = var_24_int == var_61_int; // 0x675 Eq
	if(var_62_bool == 0) goto Label_1666; // 0x676 JumpB
	var_63_int = 4; // 0x677 PushI
	rand(var_27_float, var_63_int); // 0x678 Func
	var_64_int = 1; // 0x67a PushI
	var_65_int = var_27_float + var_64_int; // 0x67b Add
	Sleep(var_65_int, var_28_bool); // 0x67c Func
	var_66_bool = var_28_bool == 0; // 0x67e Not
	if(var_66_bool == 0) goto Label_1665; // 0x67f JumpB
	goto Label_1680; // 0x680 Jump
	
Label_1665:
	goto Label_1669; // 0x681 Jump
	
Label_1666:
	var_67_int = var_23_int; // 0x682 Push
	if(var_67_int == 0) goto Label_1669; // 0x683 JumpB
	goto Label_1680; // 0x684 Jump
}


func_1094(var_0_bool, var_1_object, var_23_int)
{
	var_24_int = 0; // 0x447 PushI
	var_25_bool = var_23_int != var_24_int; // 0x448 Neq
	if(var_25_bool == 0) goto Label_1099; // 0x449 JumpB
	return 0; // 0x44a Return
	
Label_1099:
	var_26_bool = 0; var_27_object = Obj(); // 0x44b PushV
	var_27_object = var_1_object; // 0x44c MovT
	func_1132(var_26_bool, var_27_object); // 0x44d NEW_2
	var_62_bool = var_26_bool == 0; // 0x44f Not
	if(var_62_bool == 0) goto Label_1106; // 0x450 JumpB
	var_0_bool = 1; // 0x451 TMovB
	
Label_1106:
	var_63_int = 0; // 0x452 PushI
	KillTimer(var_63_int); // 0x453 Func
	Stop(); // 0x455 Func
	return 0; // 0x457 Return
}


func_2633(var_22_bool, var_23_string, var_24_string)
{
	var_25_object = Obj(); var_26_object = Obj(); // 0xa49 PushV
	FindActor(var_26_object, var_23_string); // 0xa4a Func
	var_27_bool = var_26_object == 0; // 0xa4c NullEq
	if(var_27_bool == 0) goto Label_2640; // 0xa4d JumpB
	var_22_bool = 0; // 0xa4e MovB
	return 2; // 0xa4f Return
	
Label_2640:
	Trigger(var_26_object, var_24_string); // 0xa50 Func
	var_22_bool = 1; // 0xa52 MovB
	return 2; // 0xa53 Return
}


func_2122(var_27_bool, var_28_object)
{
	var_29_int = 0; var_30_int = 0; // 0x84a PushV
	var_31_bool = 0; var_32_object = Obj(); // 0x84b PushV
	var_32_object = var_28_object; // 0x84c Mov
	func_2086(var_31_bool, var_32_object); // 0x84d NEW_2
	var_48_bool = var_31_bool == 0; // 0x84f Not
	if(var_48_bool == 0) goto Label_2131; // 0x850 JumpB
	var_27_bool = 0; // 0x851 MovB
	return 2; // 0x852 Return
	
Label_2131:
	var_49_bool = 0; var_50_object = Obj(); var_51_string = ""; // 0x853 PushV
	var_50_object = var_28_object; // 0x854 Mov
	var_51_string = "noaccess"; // 0x855 MovS
	func_1943(var_49_bool, var_50_object, var_51_string); // 0x856 NEW_2
	var_58_bool = var_49_bool == 0; // 0x858 Not
	if(var_58_bool == 0) goto Label_2140; // 0x859 JumpB
	var_27_bool = 1; // 0x85a MovB
	return 2; // 0x85b Return
	
Label_2140:
	var_59_string = "noaccess"; // 0x85c PushS
	GetProperty(var_59_string, var_30_int); // 0x85d ObjFunc
	var_60_int = 0; // 0x85f PushI
	var_27_bool = var_30_int == var_60_int; // 0x860 Eq2
	return 2; // 0x861 Return
}


func_2645(var_93_object)
{
	var_94_bool = 0; var_95_bool = 0; // 0xa55 PushV
	IsPlayerActor(var_93_object, var_95_bool); // 0xa56 Func
	var_96_bool = var_95_bool; // 0xa58 Push
	if(var_96_bool == 0) goto Label_2653; // 0xa59 JumpB
	var_97_string = "attack"; // 0xa5a PushS
	PlayGlobalMusic(var_97_string); // 0xa5b Func
	
Label_2653:
	return 2; // 0xa5d Return
}


func_1116(var_0_bool)
{
	var_0_bool = 1; // 0x45c TMovB
	var_19_int = 0; // 0x45d PushI
	KillTimer(var_19_int); // 0x45e Func
	Stop(); // 0x460 Func
	return 0; // 0x462 Return
}


func_2654()
{
	var_115_object = Obj(); var_116_object = Obj(); // 0xa5e PushV
	GetScene(var_116_object); // 0xa5f Func
	var_117_string = "battle"; // 0xa61 PushS
	var_118_object = Obj(); // 0xa62 PushV
	func_2495(var_118_object); // 0xa63 NEW_2
	BroadcastMessage(var_117_string, var_118_object, var_116_object); // 0xa65 Func
	return 2; // 0xa67 Return
}


func_2146(var_102_bool, var_103_cvector)
{
	var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_bool = 0; var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_bool = 0; // 0x862 PushV
	GetPosition(var_107_cvector); // 0x863 Func
	var_108_cvector = var_103_cvector - var_107_cvector; // 0x865 Sub2
	var_110_float = GetByIndex(var_108_cvector, 0); // 0x866 PushE
	var_111_float = GetByIndex(var_108_cvector, 2); // 0x867 PushE
	Rotate(var_110_float, var_111_float, var_109_bool); // 0x868 Func
	var_102_bool = var_109_bool; // 0x86a Mov
	return 6; // 0x86b Return
}


func_2665(var_615_bool)
{
	var_616_bool = 0; var_617_bool = 0; // 0xa69 PushV
	var_618_string = "god_mode"; // 0xa6a PushS
	GetVariable(var_618_string, var_617_bool); // 0xa6b Func
	var_615_bool = var_617_bool; // 0xa6d Mov
	return 2; // 0xa6e Return
}


func_2156(var_98_bool)
{
	var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); // 0x86c PushV
	GetPosition(var_101_cvector); // 0x86d ObjFunc
	var_102_bool = 0; var_103_cvector = CVector(0,0,0); // 0x86f PushV
	var_103_cvector = var_101_cvector; // 0x870 Mov
	func_2146(var_102_bool, var_103_cvector); // 0x871 NEW_2
	var_98_bool = var_102_bool; // 0x872 Mov
	return 2; // 0x874 Return
}


func_1132(var_319_bool, var_320_object)
{
	var_321_bool = 0; var_322_object = Obj(); // 0x46d PushV
	var_322_object = var_320_object; // 0x46e Mov
	func_2122(var_321_bool, var_322_object); // 0x46f NEW_2
	var_319_bool = var_321_bool; // 0x470 Mov
	return 0; // 0x472 Return
}


func_2671(var_138_cvector, var_139_cvector, var_140_cvector, var_141_float)
{
	var_142_cvector = CVector(0,0,0); var_143_float = 0; var_144_float = 0; var_145_float = 0; var_146_float = 0; var_147_float = 0; var_148_cvector = CVector(0,0,0); var_149_float = 0; var_150_float = 0; var_151_float = 0; var_152_float = 0; var_153_float = 0; // 0xa6f PushV
	var_148_cvector = var_140_cvector - var_139_cvector; // 0xa70 Sub2
	var_149_float = 250000; // 0xa71 MovI
	var_154_float = GetByIndex(var_148_cvector, 1); // 0xa72 PushE
	var_155_int = 1000; // 0xa73 PushI
	var_156_float = var_154_float * var_155_int; // 0xa74 Mult
	var_157_float = var_141_float * var_141_float; // 0xa75 Mult
	var_150_float = var_156_float - var_157_float; // 0xa76 Sub2
	var_151_float = var_148_cvector | var_148_cvector; // 0xa77 Or2
	var_158_float = 0; var_159_float = 0; var_160_float = 0; var_161_float = 0; // 0xa78 PushV
	var_159_float = var_149_float; // 0xa79 Mov
	var_160_float = var_150_float; // 0xa7a Mov
	var_161_float = var_151_float; // 0xa7b Mov
	func_2518(var_158_float, var_159_float, var_160_float, var_161_float); // 0xa7c NEW_2
	var_152_float = var_158_float; // 0xa7d Mov
	var_166_int = 0; // 0xa7f PushI
	var_167_bool = var_152_float < var_166_int; // 0xa80 LT
	if(var_167_bool == 0) goto Label_2692; // 0xa81 JumpB
	var_153_float = 1; // 0xa82 MovI
	goto Label_2700; // 0xa83 Jump
	
Label_2700:
	var_168_cvector = CVector(0.0, 500.0, 0.0); // 0xa8c PushVec
	var_169_float = var_168_cvector * var_153_float; // 0xa8d Mult
	var_170_float = var_169_float * var_153_float; // 0xa8e Mult
	var_171_int = var_148_cvector + var_170_float; // 0xa8f Add
	var_138_cvector = var_171_int / var_171_int; // 0xa90 Div2
	return 12; // 0xa91 Return
	
Label_2692:
	var_172_float = 0; var_173_float = 0; var_174_float = 0; var_175_float = 0; var_176_float = 0; // 0xa84 PushV
	var_173_float = var_149_float; // 0xa85 Mov
	var_174_float = var_150_float; // 0xa86 Mov
	var_175_float = var_151_float; // 0xa87 Mov
	var_176_float = sqrt(var_152_float); // 0xa88 Sqrt2
	func_2525(var_173_float, var_174_float, var_175_float, var_176_float); // 0xa89 NEW_2
	var_153_float = sqrt(var_172_float); // 0xa8b Sqrt2
}


func_1139(var_337_string)
{
	var_337_string = "walk"; // 0x473 MovS
	return 0; // 0x474 Return
}


func_1141(var_338_string)
{
	var_338_string = "run"; // 0x475 MovS
	return 0; // 0x476 Return
}


func_2165(var_32_object)
{
	var_33_bool = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_string = ""; var_40_bool = 0; var_41_int = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_string = ""; // 0x875 PushV
	var_47_bool = var_32_object == 0; // 0x876 NullEq
	if(var_47_bool == 0) goto Label_2169; // 0x877 JumpB
	return 14; // 0x878 Return
	
Label_2169:
	IsDead(var_40_bool); // 0x879 Func
	var_48_bool = var_40_bool; // 0x87b Push
	if(var_48_bool == 0) goto Label_2174; // 0x87c JumpB
	return 14; // 0x87d Return
	
Label_2174:
	GetSecondaryAnimationType(var_41_int); // 0x87e Func
	var_49_int = 0; // 0x880 PushI
	var_50_bool = var_41_int < var_49_int; // 0x881 LT
	if(var_50_bool == 0) goto Label_2180; // 0x882 JumpB
	return 14; // 0x883 Return
	
Label_2180:
	GetPosition(var_42_cvector); // 0x884 ObjFunc
	GetPosition(var_43_cvector); // 0x886 Func
	GetDirection(var_44_cvector); // 0x888 Func
	var_45_cvector = var_43_cvector - var_42_cvector; // 0x88a Sub2
	var_51_float = GetByIndex(var_45_cvector, 0); // 0x88b PushE
	var_52_float = GetByIndex(var_44_cvector, 0); // 0x88c PushE
	var_53_float = var_51_float * var_52_float; // 0x88d Mult
	var_54_float = GetByIndex(var_45_cvector, 2); // 0x88e PushE
	var_55_float = GetByIndex(var_44_cvector, 2); // 0x88f PushE
	var_56_float = var_54_float * var_55_float; // 0x890 Mult
	var_57_int = var_53_float + var_56_float; // 0x891 Add
	var_58_int = 0; // 0x892 PushI
	var_59_bool = var_57_int >= var_58_int; // 0x893 GE
	if(var_59_bool == 0) goto Label_2199; // 0x894 JumpB
	var_46_string = "fhit"; // 0x895 MovS
	goto Label_2200; // 0x896 Jump
	
Label_2200:
	var_60_string = "hit_react"; // 0x898 PushS
	var_61_string = "1"; // 0x899 PushS
	var_62_int = var_46_string + var_61_string; // 0x89a Add
	var_63_string = "2"; // 0x89b PushS
	var_64_int = var_46_string + var_63_string; // 0x89c Add
	var_65_int = -10; // 0x89d PushI
	FadeSecondaryAnimation(var_60_string, var_62_int, var_64_int, var_65_int); // 0x89e Func
	return 14; // 0x8a0 Return
	
Label_2199:
	var_46_string = "bhit"; // 0x897 MovS
}


func_1143(var_0_bool, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x477 PushV
	var_0_bool = var_17_object; // 0x478 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x479 PushV
	var_28_object = var_17_object; // 0x47a Mov
	var_29_float = 70.0; // 0x47b MovF
	func_2307(var_28_object, var_29_float); // 0x47c NEW_2
	var_74_bool = var_27_bool == 0; // 0x47e Not
	if(var_74_bool == 0) goto Label_1154; // 0x47f JumpB
	var_16_int = -2; // 0x480 MovI
	return 8; // 0x481 Return
	
Label_1154:
	CreateDialog(var_23_object); // 0x482 Func
	var_75_int = 0; // 0x484 PushV
	func_2708(var_75_int); // 0x485 NEW_2
	SetNPCName(var_75_int); // 0x487 ObjFunc
	var_76_int = 0; // 0x489 PushV
	func_2706(var_76_int); // 0x48a NEW_2
	SetNPCDescription(var_76_int); // 0x48c ObjFunc
	var_77_string = ""; // 0x48e PushV
	func_2710(var_77_string); // 0x48f NEW_2
	SetPhoto(var_77_string); // 0x491 ObjFunc
	var_78_string = ""; // 0x493 PushV
	func_2712(var_78_string); // 0x494 NEW_2
	SetPhoto2(var_78_string); // 0x496 ObjFunc
	var_79_int = 0; // 0x498 PushV
	func_2765(var_79_int); // 0x499 NEW_2
	SetPlayerName(var_79_int); // 0x49b ObjFunc
	var_25_int = -1; // 0x49d MovI
	IsOverrideActive(var_24_bool); // 0x49e Func
	var_87_bool = var_24_bool; // 0x4a0 Push
	if(var_87_bool == 0) goto Label_1188; // 0x4a1 JumpB
	var_16_int = -2; // 0x4a2 MovI
	return 8; // 0x4a3 Return
	
Label_1188:
	DoDialog(var_23_object); // 0x4a4 Func
	var_88_object = Obj(); var_89_object = Obj(); // 0x4a6 PushV
	var_88_object = var_17_object; // 0x4a7 Mov
	var_89_object = var_23_object; // 0x4a8 Mov
	TaskCall(4); // 0x4a9 TaskCall
	func_1217(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object); // 0x4aa NEW_2
	TaskReturn(); // 0x4ab TaskReturn
	IsDialogEnd(var_26_bool); // 0x4ad ObjFunc
	
Label_1199:
	var_162_bool = var_26_bool == 0; // 0x4af Not
	if(var_162_bool == 0) goto Label_1206; // 0x4b0 JumpB
	sync(); // 0x4b1 Func
	IsDialogEnd(var_26_bool); // 0x4b3 ObjFunc
	goto Label_1199; // 0x4b5 Jump
	
Label_1206:
	var_163_object = Obj(); // 0x4b6 PushV
	var_163_object = var_17_object; // 0x4b7 Mov
	func_2376(); // 0x4b8 NEW_2
	StopDialog(var_23_object); // 0x4ba Func
	GetReturnValue(var_25_int); // 0x4bc ObjFunc
	var_16_int = var_25_int; // 0x4be Mov
	return 8; // 0x4bf Return
}


func_126(var_194_bool, var_195_object)
{
	var_202_bool = GlobalVars[0]; // 0x7f PushGE
	var_202_bool = 0; // 0x80 MovB
	GlobalVars[0] = var_202_bool; // 0x81 PopGE
	var_203_object = Obj(); var_204_bool = 0; var_205_float = 0; // 0x82 PushV
	var_203_object = var_195_object; // 0x83 Mov
	var_204_bool = 1; // 0x84 MovB
	var_205_float = 200.0; // 0x85 MovF
	func_203(var_199_bool, var_200_float, var_201_int, var_194_bool, var_195_object, var_203_object, var_204_bool, var_205_float); // 0x86 NEW_2
	var_677_bool = 0; // 0x88 PushV
	var_677_bool = 0; // 0x89 MovB
	var_678_bool = GlobalVars[0]; // 0x8a PushGE
	if(var_678_bool == 0) goto Label_143; // 0x8b JumpB
	var_679_int = var_3_int; // 0x8c PushT
	if(var_679_int == 0) goto Label_143; // 0x8d JumpB
	var_677_bool = 1; // 0x8e MovB
	
Label_143:
	if(var_677_bool == 0) goto Label_150; // 0x8f JumpB
	var_680_string = "all"; // 0x90 PushS
	var_681_string = "attack_off"; // 0x91 PushS
	PlayAnimation(var_680_string, var_681_string); // 0x92 Func
	WaitForAnimEnd(); // 0x94 Func
	
Label_150:
	var_682_bool = GlobalVars[0]; // 0x96 PushGE
	var_194_bool = var_682_bool; // 0x97 Mov
	return 0; // 0x99 Return
}


func_643(var_3_int)
{
	var_3_int = 1; // 0x283 TMovB
	return 0; // 0x284 Return
}


func_645(var_645_bool, var_646_float)
{
	var_647_float = 0; var_648_bool = 0; var_649_float = 0; var_650_bool = 0; // 0x285 PushV
	rand(var_649_float); // 0x286 Func
	var_651_bool = var_649_float < var_646_float; // 0x288 LT
	if(var_651_bool == 0) goto Label_665; // 0x289 JumpB
	
Label_650:
	IsAnimationPlaying(var_650_bool); // 0x28a Func
	var_652_bool = var_650_bool == 0; // 0x28c Not
	if(var_652_bool == 0) goto Label_655; // 0x28d JumpB
	goto Label_664; // 0x28e Jump
	
Label_664:
	goto Label_670; // 0x298 Jump
	
Label_670:
	var_645_bool = 0; // 0x29e MovB
	return 4; // 0x29f Return
	
Label_655:
	var_653_bool = 0; // 0x28f PushV
	func_743(var_653_bool); // 0x290 NEW_2
	if(var_653_bool == 0) goto Label_661; // 0x292 JumpB
	var_645_bool = 1; // 0x293 MovB
	return 4; // 0x294 Return
	
Label_661:
	sync(); // 0x295 Func
	goto Label_650; // 0x297 Jump
	
Label_665:
	WaitForAnimEnd(); // 0x299 Func
	func_847(var_650_bool); // 0x29c NEW_2
}


func_2706(var_76_int)
{
	var_76_int = 518411; // 0xa92 MovI
	return 0; // 0xa93 Return
}


func_1683(var_58_bool)
{
	var_58_bool = 1; // 0x693 MovB
	return 0; // 0x694 Return
}


func_2708(var_75_int)
{
	var_75_int = 518410; // 0xa94 MovI
	return 0; // 0xa95 Return
}


func_1685()
{
	StopAnimation(); // 0x695 Func
	StopGroup0(); // 0x697 Func
	return 0; // 0x699 Return
}


func_2710(var_77_string)
{
	var_77_string = "ui/NPC_Citizen1.png"; // 0xa96 MovS
	return 0; // 0xa97 Return
}


func_2712(var_78_string)
{
	var_78_string = "ui/NPC_Citizen1_b.png"; // 0xa98 MovS
	return 0; // 0xa99 Return
}


func_154(var_530_float)
{
	var_530_float = 0.15; // 0x9b MovF
	return 0; // 0x9c Return
}


func_2714(var_70_bool)
{
	var_70_bool = 0; // 0xa9a MovB
	return 0; // 0xa9b Return
}


func_1690()
{
	var_18_bool = GlobalVars[2]; // 0x69a PushGE
	var_18_bool = 1; // 0x69b MovB
	GlobalVars[2] = var_18_bool; // 0x69c PopGE
	
Label_1693:
	var_19_bool = 0; var_20_object = Obj(); // 0x69d PushV
	var_21_object = Obj(); // 0x69e PushV
	func_1931(var_21_object); // 0x69f NEW_2
	var_20_object = var_21_object; // 0x6a0 Mov
	func_1705(var_14_bool, var_15_string, var_19_bool, var_20_object); // 0x6a2 NEW_2
	var_691_int = 1; // 0x6a4 PushI
	Sleep(var_691_int); // 0x6a5 Func
	goto Label_1693; // 0x6a7 Jump
}


func_157(var_537_int)
{
	var_537_int = 0; // 0x9e MovI
	return 0; // 0x9f Return
}


func_2716(var_39_string, var_40_int)
{
	var_41_string = ""; var_42_string = ""; // 0xa9c PushV
	var_42_string = "idle"; // 0xa9d MovS
	var_43_int = var_40_int; // 0xa9e Push
	if(var_43_int == 0) goto Label_2721; // 0xa9f JumpB
	var_42_string = var_42_string + var_40_int; // 0xaa0 Add2
	
Label_2721:
	var_39_string = var_42_string; // 0xaa1 Mov
	return 2; // 0xaa2 Return
}


func_672(var_0_bool, var_425_bool, var_426_float)
{
	var_427_bool = 0; var_428_cvector = CVector(0,0,0); var_429_cvector = CVector(0,0,0); var_430_cvector = CVector(0,0,0); var_431_float = 0; var_432_bool = 0; var_433_cvector = CVector(0,0,0); var_434_cvector = CVector(0,0,0); var_435_cvector = CVector(0,0,0); var_436_float = 0; // 0x2a0 PushV
	
Label_673:
	IsAnimationPlaying(var_432_bool); // 0x2a1 Func
	var_437_bool = var_432_bool == 0; // 0x2a3 Not
	if(var_437_bool == 0) goto Label_678; // 0x2a4 JumpB
	goto Label_710; // 0x2a5 Jump
	
Label_710:
	func_847(var_436_float); // 0x2c7 NEW_2
	var_425_bool = 0; // 0x2c9 MovB
	return 10; // 0x2ca Return
	
Label_678:
	var_438_bool = 0; // 0x2a6 PushV
	func_743(var_438_bool); // 0x2a7 NEW_2
	if(var_438_bool == 0) goto Label_684; // 0x2a9 JumpB
	var_425_bool = 1; // 0x2aa MovB
	return 10; // 0x2ab Return
	
Label_684:
	var_481_bool = 0; var_482_object = Obj(); // 0x2ac PushV
	var_482_object = var_0_bool; // 0x2ad MovT
	func_2122(var_481_bool, var_482_object); // 0x2ae NEW_2
	var_483_bool = var_481_bool == 0; // 0x2b0 Not
	if(var_483_bool == 0) goto Label_692; // 0x2b1 JumpB
	var_425_bool = 0; // 0x2b2 MovB
	return 10; // 0x2b3 Return
	
Label_692:
	GetPFPosition(var_433_cvector); // 0x2b4 TObjFunc
	GetPFPosition(var_434_cvector); // 0x2b6 Func
	var_435_cvector = var_433_cvector - var_434_cvector; // 0x2b8 Sub2
	var_436_float = var_435_cvector | var_435_cvector; // 0x2b9 Or2
	var_484_float = var_426_float * var_426_float; // 0x2ba Mult
	var_485_bool = var_436_float < var_484_float; // 0x2bb LT
	if(var_485_bool == 0) goto Label_707; // 0x2bc JumpB
	var_486_bool = 0; var_487_float = 0; // 0x2bd PushV
	var_487_float = var_426_float; // 0x2be Mov
	func_506(var_436_float, var_486_bool, var_487_float); // 0x2bf NEW_2
	var_425_bool = 1; // 0x2c1 MovB
	return 10; // 0x2c2 Return
	
Label_707:
	sync(); // 0x2c3 Func
	goto Label_673; // 0x2c5 Jump
}


func_160(var_598_int)
{
	var_598_int = 1; // 0xa0 MovI
	return 0; // 0xa1 Return
}


func_162(var_599_object, var_600_float)
{
	var_601_bool = 0; // 0xa3 PushV
	var_601_bool = 0; // 0xa4 MovB
	var_602_int = 0; // 0xa5 PushI
	var_603_bool = var_600_float > var_602_int; // 0xa6 GT
	if(var_603_bool == 0) goto Label_174; // 0xa7 JumpB
	var_604_bool = 0; var_605_object = Obj(); // 0xa8 PushV
	var_605_object = var_599_object; // 0xa9 Mov
	func_2050(var_604_bool, var_605_object); // 0xaa NEW_2
	if(var_604_bool == 0) goto Label_174; // 0xac JumpB
	var_601_bool = 1; // 0xad MovB
	
Label_174:
	if(var_601_bool == 0) goto Label_181; // 0xae JumpB
	var_621_bool = GlobalVars[0]; // 0xaf PushGE
	var_621_bool = 1; // 0xb0 MovB
	GlobalVars[0] = var_621_bool; // 0xb1 PopGE
	func_643(var_600_float); // 0xb3 NEW_2
	
Label_181:
	return 0; // 0xb5 Return
}


func_2723(var_33_int)
{
	var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_bool = 0; // 0xaa3 PushV
	var_36_int = 0; // 0xaa4 MovI
	
Label_2725:
	var_38_string = "all"; // 0xaa5 PushS
	var_39_string = ""; var_40_int = 0; // 0xaa6 PushV
	var_40_int = var_36_int; // 0xaa7 Mov
	func_2716(var_39_string, var_40_int); // 0xaa8 NEW_2
	HasAnimation(var_37_bool, var_38_string, var_39_string); // 0xaaa Func
	var_44_bool = var_37_bool == 0; // 0xaac Not
	if(var_44_bool == 0) goto Label_2735; // 0xaad JumpB
	goto Label_2738; // 0xaae Jump
	
Label_2738:
	var_33_int = var_36_int; // 0xab2 Mov
	return 4; // 0xab3 Return
	
Label_2735:
	var_45_int = 1; // 0xaaf PushI
	var_36_int = var_36_int + var_45_int; // 0xab0 Add2
	goto Label_2725; // 0xab1 Jump
}


func_2209(var_19_object, var_20_int, var_21_float)
{
	var_22_cvector = CVector(0,0,0); var_23_object = Obj(); var_24_int = 0; var_25_bool = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_int = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_object = Obj(); var_33_int = 0; var_34_bool = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_int = 0; var_38_int = 0; var_39_cvector = CVector(0,0,0); // 0x8a1 PushV
	var_40_bool = 0; // 0x8a2 PushV
	var_40_bool = 0; // 0x8a3 MovB
	var_41_bool = 0; // 0x8a4 PushV
	var_41_bool = 0; // 0x8a5 MovB
	var_42_object = var_19_object; // 0x8a6 Push
	if(var_42_object == 0) goto Label_2220; // 0x8a7 JumpB
	var_43_int = 4; // 0x8a8 PushI
	var_44_bool = var_20_int != var_43_int; // 0x8a9 Neq
	if(var_44_bool == 0) goto Label_2220; // 0x8aa JumpB
	var_41_bool = 1; // 0x8ab MovB
	
Label_2220:
	if(var_41_bool == 0) goto Label_2225; // 0x8ac JumpB
	var_45_int = 5; // 0x8ad PushI
	var_46_bool = var_20_int != var_45_int; // 0x8ae Neq
	if(var_46_bool == 0) goto Label_2225; // 0x8af JumpB
	var_40_bool = 1; // 0x8b0 MovB
	
Label_2225:
	if(var_40_bool == 0) goto Label_2272; // 0x8b1 JumpB
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x8b2 PushV
	var_49_cvector = CVector(0,0,0); var_50_object = Obj(); // 0x8b3 PushV
	var_50_object = var_19_object; // 0x8b4 Mov
	func_1916(var_50_object); // 0x8b5 NEW_2
	var_48_cvector = var_49_cvector; // 0x8b6 Mov
	func_2501(var_47_cvector, var_48_cvector); // 0x8b8 NEW_2
	var_31_cvector = var_47_cvector; // 0x8b9 Mov
	CreateVectorVector(var_32_object); // 0x8bb Func
	var_33_int = 1; // 0x8bd MovI
	
Label_2238:
	var_60_string = "hit"; // 0x8be PushS
	var_61_int = var_60_string + var_33_int; // 0x8bf Add
	GetGeometryLocator(var_61_int, var_34_bool, var_35_cvector, var_36_cvector); // 0x8c0 Func
	var_62_bool = var_34_bool == 0; // 0x8c2 Not
	if(var_62_bool == 0) goto Label_2245; // 0x8c3 JumpB
	goto Label_2254; // 0x8c4 Jump
	
Label_2254:
	size(var_37_int); // 0x8ce ObjFunc
	var_63_int = var_37_int; // 0x8d0 Push
	if(var_63_int == 0) goto Label_2271; // 0x8d1 JumpB
	irand(var_38_int, var_37_int); // 0x8d2 Func
	get(var_39_cvector, var_38_int); // 0x8d4 ObjFunc
	var_64_object = Obj(); var_65_int = 0; var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); // 0x8d6 PushV
	var_64_object = var_19_object; // 0x8d7 Mov
	var_65_int = var_20_int; // 0x8d8 Mov
	var_66_float = var_21_float; // 0x8d9 Mov
	var_67_cvector = var_39_cvector; // 0x8da Mov
	var_68_cvector = -var_31_cvector; // 0x8db Neg2
	func_2277(var_66_float, var_67_cvector, var_68_cvector); // 0x8dc NEW_2
	return 18; // 0x8de Return
	
Label_2271:
	var_32_object = 0; // 0x8df SetNull
	
Label_2272:
	var_109_object = Obj(); // 0x8e0 PushV
	var_109_object = var_19_object; // 0x8e1 Mov
	func_2165(var_109_object); // 0x8e2 NEW_2
	return 18; // 0x8e4 Return
	
Label_2245:
	var_110_int = var_36_cvector | var_31_cvector; // 0x8c5 Or
	var_111_float = 0.70711; // 0x8c6 PushF
	var_112_bool = var_110_int >= var_111_float; // 0x8c7 GE
	if(var_112_bool == 0) goto Label_2251; // 0x8c8 JumpB
	add(var_35_cvector); // 0x8c9 ObjFunc
	
Label_2251:
	var_113_int = 1; // 0x8cb PushI
	var_33_int = var_33_int + var_113_int; // 0x8cc Add2
	goto Label_2238; // 0x8cd Jump
}


func_1705(var_19_bool, var_20_object, var_78_bool, var_685_object)
{
	var_25_float = 0; var_26_float = 0; // 0x6a9 PushV
	var_27_bool = 0; var_28_object = Obj(); // 0x6aa PushV
	var_28_object = var_20_object; // 0x6ab Mov
	func_2122(var_27_bool, var_28_object); // 0x6ac NEW_2
	var_61_bool = var_27_bool == 0; // 0x6ae Not
	if(var_61_bool == 0) goto Label_1714; // 0x6af JumpB
	var_19_bool = 0; // 0x6b0 MovB
	return 2; // 0x6b1 Return
	
Label_1714:
	var_62_float = 0; var_63_object = Obj(); // 0x6b2 PushV
	var_63_object = var_20_object; // 0x6b3 Mov
	func_1923(var_63_object); // 0x6b4 NEW_2
	var_26_float = var_62_float; // 0x6b5 Mov
	var_70_bool = 0; var_71_float = 0; var_72_float = 0; var_73_float = 0; // 0x6b7 PushV
	var_71_float = var_26_float; // 0x6b8 Mov
	var_72_float = 250000.0; // 0x6b9 MovF
	var_73_float = 3240000.0; // 0x6ba MovF
	func_2553(var_70_bool, var_71_float, var_72_float, var_73_float); // 0x6bb NEW_2
	if(var_70_bool == 0) goto Label_1734; // 0x6bd JumpB
	var_76_bool = 0; var_77_object = Obj(); // 0x6be PushV
	var_77_object = var_20_object; // 0x6bf Mov
	TaskCall(0); // 0x6c0 TaskCall
	func_0(var_26_float, var_78_bool, var_76_bool, var_77_object); // 0x6c1 NEW_2
	TaskReturn(); // 0x6c2 TaskReturn
	var_19_bool = var_78_bool; // 0x6c3 Mov
	return 2; // 0x6c5 Return
	
Label_1734:
	var_683_bool = 0; var_684_object = Obj(); // 0x6c6 PushV
	var_684_object = var_20_object; // 0x6c7 Mov
	TaskCall(1); // 0x6c8 TaskCall
	func_126(var_683_bool, var_684_object); // 0x6c9 NEW_2
	TaskReturn(); // 0x6ca TaskReturn
	var_19_bool = var_685_object; // 0x6cb Mov
	return 2; // 0x6cd Return
}


func_2740()
{
	var_106_string = "b3q02GrabitelTalk"; // 0xab5 PushS
	var_107_int = 1; // 0xab6 PushI
	SetVariable(var_106_string, var_107_int); // 0xab7 Func
	return 0; // 0xab9 Return
}


func_2746()
{
	var_23_bool = 0; var_24_string = ""; var_25_string = ""; // 0xabb PushV
	var_24_string = "quest_b3_02"; // 0xabc MovS
	var_25_string = "grabitel_attack"; // 0xabd MovS
	func_2633(var_23_bool, var_24_string, var_25_string); // 0xabe NEW_2
	return 0; // 0xac0 Return
}


func_1217(var_0_bool, var_1_object, var_2_int, var_3_int, var_88_object, var_89_object)
{
	var_0_bool = var_89_object; // 0x4c2 TMov
	var_1_object = var_88_object; // 0x4c3 TMov
	var_3_int = 0; // 0x4c4 TMovB
	var_94_int = 1; // 0x4c5 PushI
	if(var_94_int == 0) goto Label_1286; // 0x4c6 JumpB
	var_95_bool = 0; var_96_object = Obj(); // 0x4c7 PushV
	var_96_object = var_1_object; // 0x4c8 MovT
	func_2753(var_96_object); // 0x4c9 NEW_2
	var_103_bool = var_95_bool == 0; // 0x4cb Not
	if(var_103_bool == 0) goto Label_1254; // 0x4cc JumpB
	var_104_object = Obj(); var_105_object = Obj(); // 0x4cd PushV
	var_104_object = var_1_object; // 0x4ce MovT
	var_105_object = var_0_bool; // 0x4cf MovT
	func_2740(); // 0x4d0 NEW_2
	var_108_string = ""; // 0x4d2 PushV
	var_108_string = "Neutral"; // 0x4d3 MovS
	func_1316(var_89_object, var_108_string); // 0x4d4 NEW_2
	var_125_int = 518381; // 0x4d6 PushI
	SetMessage(var_125_int); // 0x4d7 TObjFunc
	ClearReplies(); // 0x4d9 TObjFunc
	var_126_int = 519109; // 0x4db PushI
	var_127_int = 20244; // 0x4dc PushI
	var_128_int = 20240; // 0x4dd PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x4de TObjFunc
	var_129_int = 518382; // 0x4e0 PushI
	var_130_int = 20241; // 0x4e1 PushI
	var_131_int = 19495; // 0x4e2 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x4e3 TObjFunc
	goto Label_1286; // 0x4e5 Jump
	
Label_1286:
	var_132_bool = 0; // 0x506 PushV
	func_2714(var_132_bool); // 0x507 NEW_2
	if(var_132_bool == 0) goto Label_1301; // 0x509 JumpB
	
Label_1290:
	lshWaitForAnimEnd(); // 0x50a Func
	var_133_int = var_3_int; // 0x50c PushT
	if(var_133_int == 0) goto Label_1295; // 0x50d JumpB
	goto Label_1300; // 0x50e Jump
	
Label_1300:
	goto Label_1315; // 0x514 Jump
	
Label_1315:
	return 0; // 0x523 Return
	
Label_1295:
	var_134_string = ""; // 0x50f PushV
	var_134_string = var_2_int; // 0x510 MovT
	func_2394(var_134_string); // 0x511 NEW_2
	goto Label_1290; // 0x513 Jump
	
Label_1301:
	var_145_string = "all"; // 0x515 PushS
	var_146_string = "idle"; // 0x516 PushS
	PlayAnimation(var_145_string, var_146_string); // 0x517 Func
	
Label_1305:
	WaitForAnimEnd(); // 0x519 Func
	var_147_int = var_3_int; // 0x51b PushT
	if(var_147_int == 0) goto Label_1310; // 0x51c JumpB
	goto Label_1315; // 0x51d Jump
	
Label_1310:
	var_148_string = "all"; // 0x51e PushS
	var_149_string = "idle"; // 0x51f PushS
	PlayAnimation(var_148_string, var_149_string); // 0x520 Func
	goto Label_1305; // 0x522 Jump
	
Label_1254:
	var_150_bool = 0; var_151_object = Obj(); // 0x4e6 PushV
	var_151_object = var_1_object; // 0x4e7 MovT
	func_2753(var_151_object); // 0x4e8 NEW_2
	if(var_150_bool == 0) goto Label_1284; // 0x4ea JumpB
	var_152_object = Obj(); var_153_object = Obj(); // 0x4eb PushV
	var_152_object = var_1_object; // 0x4ec MovT
	var_153_object = var_0_bool; // 0x4ed MovT
	func_2740(); // 0x4ee NEW_2
	var_154_string = ""; // 0x4f0 PushV
	var_154_string = "Neutral"; // 0x4f1 MovS
	func_1316(var_89_object, var_154_string); // 0x4f2 NEW_2
	var_155_int = 518383; // 0x4f4 PushI
	SetMessage(var_155_int); // 0x4f5 TObjFunc
	ClearReplies(); // 0x4f7 TObjFunc
	var_156_int = 518384; // 0x4f9 PushI
	var_157_int = 20252; // 0x4fa PushI
	var_158_int = 19497; // 0x4fb PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x4fc TObjFunc
	var_159_int = 519119; // 0x4fe PushI
	var_160_int = 20252; // 0x4ff PushI
	var_161_int = 20251; // 0x500 PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x501 TObjFunc
	goto Label_1286; // 0x503 Jump
	
Label_1284:
	return 0; // 0x504 Return
}


func_2753(var_95_bool)
{
	var_97_int = 0; var_98_string = ""; // 0xac2 PushV
	var_98_string = "b3q02"; // 0xac3 MovS
	func_2566(var_97_int, var_98_string); // 0xac4 NEW_2
	var_101_int = 3; // 0xac6 PushI
	var_102_bool = var_97_int > var_101_int; // 0xac7 GT
	if(var_102_bool == 0) goto Label_2763; // 0xac8 JumpB
	var_95_bool = 1; // 0xac9 MovB
	return 0; // 0xaca Return
	
Label_2763:
	var_95_bool = 0; // 0xacb MovB
	return 0; // 0xacc Return
}


func_203(var_0_bool, var_3_int, var_5_float, var_203_object, var_204_bool, var_205_float, var_274_bool, var_366_bool)
{
	var_206_float = 0; var_207_cvector = CVector(0,0,0); var_208_cvector = CVector(0,0,0); var_209_bool = 0; var_210_bool = 0; var_211_float = 0; var_212_cvector = CVector(0,0,0); var_213_float = 0; var_214_cvector = CVector(0,0,0); var_215_bool = 0; var_216_float = 0; var_217_float = 0; var_218_cvector = CVector(0,0,0); var_219_cvector = CVector(0,0,0); var_220_bool = 0; var_221_bool = 0; var_222_float = 0; var_223_cvector = CVector(0,0,0); var_224_float = 0; var_225_cvector = CVector(0,0,0); var_226_bool = 0; var_227_float = 0; // 0xcb PushV
	func_432(var_225_cvector, var_226_bool, var_227_float); // 0xcd NEW_2
	var_5_float = 0; // 0xcf TMovI
	var_250_string = "@GetAttackDistance"; // 0xd0 PushS
	var_251_int = 1; // 0xd1 PushI
	var_252_bool = IsFuncExist(var_203_object, var_250_string, var_251_int); // 0xd2 FuncExist
	if(var_252_bool == 0) goto Label_217; // 0xd3 JumpB
	GetAttackDistance(var_217_float); // 0xd4 ObjFunc
	var_253_int = 50; // 0xd6 PushI
	var_217_float = var_217_float + var_253_int; // 0xd7 Add2
	goto Label_218; // 0xd8 Jump
	
Label_218:
	var_254_int = 150; // 0xda PushI
	var_255_bool = var_217_float >= var_254_int; // 0xdb GE
	if(var_255_bool == 0) goto Label_222; // 0xdc JumpB
	var_217_float = 150; // 0xdd MovI
	
Label_222:
	var_3_int = 0; // 0xde TMovB
	var_0_bool = var_203_object; // 0xdf TMov
	IsPlayerActor(var_0_bool, var_220_bool); // 0xe0 Func
	var_256_bool = var_220_bool; // 0xe2 Push
	if(var_256_bool == 0) goto Label_236; // 0xe3 JumpB
	var_257_string = "attack"; // 0xe4 PushS
	PlayGlobalMusic(var_257_string); // 0xe5 Func
	var_258_object = Obj(); // 0xe7 PushV
	func_2495(var_258_object); // 0xe8 NEW_2
	SendPlayerEnemy(var_203_object, var_258_object); // 0xea Func
	
Label_236:
	var_259_bool = var_204_bool; // 0xec Push
	if(var_259_bool == 0) goto Label_240; // 0xed JumpB
	var_221_bool = 0; // 0xee MovB
	goto Label_241; // 0xef Jump
	
Label_241:
	var_260_float = 300.0; // 0xf1 PushF
	var_222_float = var_260_float + var_217_float; // 0xf2 Add2
	
Label_243:
	var_261_bool = 0; // 0xf3 PushV
	var_261_bool = 0; // 0xf4 MovB
	var_262_bool = 0; var_263_object = Obj(); // 0xf5 PushV
	var_263_object = var_0_bool; // 0xf6 MovT
	func_2122(var_262_bool, var_263_object); // 0xf7 NEW_2
	if(var_262_bool == 0) goto Label_253; // 0xf9 JumpB
	var_264_bool = var_3_int == 0; // 0xfa Not
	if(var_264_bool == 0) goto Label_253; // 0xfb JumpB
	var_261_bool = 1; // 0xfc MovB
	
Label_253:
	if(var_261_bool == 0) goto Label_415; // 0xfd JumpB
	func_847(var_227_float); // 0xff NEW_2
	GetPFPosition(var_218_cvector); // 0x101 TObjFunc
	GetPFPosition(var_219_cvector); // 0x103 Func
	var_223_cvector = var_218_cvector - var_219_cvector; // 0x105 Sub2
	var_224_float = var_223_cvector | var_223_cvector; // 0x106 Or2
	var_266_float = var_222_float * var_222_float; // 0x107 Mult
	var_267_bool = var_224_float >= var_266_float; // 0x108 GE
	if(var_267_bool == 0) goto Label_281; // 0x109 JumpB
	var_268_bool = 0; var_269_object = Obj(); var_270_float = 0; var_271_float = 0; var_272_bool = 0; var_273_bool = 0; // 0x10a PushV
	var_269_object = var_0_bool; // 0x10b MovT
	var_270_float = var_217_float; // 0x10c Mov
	var_271_float = 3000.0; // 0x10d MovF
	var_272_bool = 1; // 0x10e MovB
	var_273_bool = 0; // 0x10f MovB
	TaskCall(2); // 0x110 TaskCall
	func_887(var_276_bool, var_268_bool, var_269_object, var_270_float, var_271_float, var_272_bool, var_273_bool); // 0x111 NEW_2
	TaskReturn(); // 0x112 TaskReturn
	var_351_bool = var_274_bool == 0; // 0x114 Not
	if(var_351_bool == 0) goto Label_279; // 0x115 JumpB
	goto Label_415; // 0x116 Jump
	
Label_415:
	WaitForAnimEnd(); // 0x19f Func
	var_352_int = var_3_int; // 0x1a1 PushT
	if(var_352_int == 0) goto Label_420; // 0x1a2 JumpB
	return 22; // 0x1a3 Return
	
Label_420:
	var_353_string = "all"; // 0x1a4 PushS
	var_354_string = "attack_off"; // 0x1a5 PushS
	PlayAnimation(var_353_string, var_354_string); // 0x1a6 Func
	WaitForAnimEnd(); // 0x1a8 Func
	var_355_bool = var_220_bool; // 0x1aa Push
	if(var_355_bool == 0) goto Label_431; // 0x1ab JumpB
	var_356_float = 2.0; // 0x1ac PushF
	Sleep(var_356_float); // 0x1ad Func
	
Label_431:
	return 22; // 0x1af Return
	
Label_279:
	var_221_bool = 0; // 0x117 MovB
	goto Label_414; // 0x118 Jump
	
Label_414:
	goto Label_243; // 0x19e Jump
	
Label_281:
	var_357_float = var_205_float * var_205_float; // 0x119 Mult
	var_358_bool = var_224_float >= var_357_float; // 0x11a GE
	if(var_358_bool == 0) goto Label_406; // 0x11b JumpB
	GetPFPosition(var_225_cvector); // 0x11c TObjFunc
	CanReachByPF(var_226_bool, var_225_cvector); // 0x11e Func
	var_359_bool = var_226_bool == 0; // 0x120 Not
	if(var_359_bool == 0) goto Label_305; // 0x121 JumpB
	var_360_bool = 0; var_361_object = Obj(); var_362_float = 0; var_363_float = 0; var_364_bool = 0; var_365_bool = 0; // 0x122 PushV
	var_361_object = var_0_bool; // 0x123 MovT
	var_362_float = var_217_float; // 0x124 Mov
	var_363_float = 3000.0; // 0x125 MovF
	var_364_bool = 1; // 0x126 MovB
	var_365_bool = 0; // 0x127 MovB
	TaskCall(2); // 0x128 TaskCall
	func_887(var_368_bool, var_360_bool, var_361_object, var_362_float, var_363_float, var_364_bool, var_365_bool); // 0x129 NEW_2
	TaskReturn(); // 0x12a TaskReturn
	var_369_bool = var_366_bool == 0; // 0x12c Not
	if(var_369_bool == 0) goto Label_303; // 0x12d JumpB
	goto Label_415; // 0x12e Jump
	
Label_303:
	var_221_bool = 0; // 0x12f MovB
	goto Label_243; // 0x130 Jump
	
Label_305:
	var_370_bool = var_221_bool == 0; // 0x131 Not
	if(var_370_bool == 0) goto Label_330; // 0x132 JumpB
	var_371_object = Obj(); // 0x133 PushV
	var_371_object = var_0_bool; // 0x134 MovT
	func_2291(); // 0x135 NEW_2
	var_380_string = "all"; // 0x137 PushS
	var_381_string = "attack_on"; // 0x138 PushS
	PlayAnimation(var_380_string, var_381_string); // 0x139 Func
	WaitForAnimEnd(); // 0x13b Func
	func_847(var_227_float); // 0x13e NEW_2
	StopAsync(); // 0x140 Func
	var_221_bool = 1; // 0x142 MovB
	var_382_bool = 0; var_383_object = Obj(); // 0x143 PushV
	var_383_object = var_0_bool; // 0x144 MovT
	func_2122(var_382_bool, var_383_object); // 0x145 NEW_2
	var_384_bool = var_382_bool == 0; // 0x147 Not
	if(var_384_bool == 0) goto Label_330; // 0x148 JumpB
	goto Label_415; // 0x149 Jump
	
Label_330:
	rand(var_227_float); // 0x14a Func
	var_385_bool = 0; // 0x14c PushV
	var_385_bool = 1; // 0x14d MovB
	var_386_float = 0.2; // 0x14e PushF
	var_387_bool = var_227_float < var_386_float; // 0x14f LT
	if(var_387_bool == 0) goto Label_342; // 0x150 JumpB
	var_388_bool = 0; // 0x151 PushV
	func_804(var_385_bool, var_388_bool); // 0x152 NEW_2
	if(var_388_bool == 0) goto Label_342; // 0x154 JumpB
	var_385_bool = 0; // 0x155 MovB
	
Label_342:
	if(var_385_bool == 0) goto Label_359; // 0x156 JumpB
	Face(var_0_bool); // 0x157 Func
	func_852(); // 0x15a NEW_2
	var_423_string = "all"; // 0x15c PushS
	var_424_string = "attack_stay"; // 0x15d PushS
	PlayAnimation(var_423_string, var_424_string); // 0x15e Func
	var_425_bool = 0; var_426_float = 0; // 0x160 PushV
	var_426_float = var_205_float; // 0x161 Mov
	func_672(var_227_float, var_425_bool, var_426_float); // 0x162 NEW_2
	StopAsync(); // 0x164 Func
	goto Label_405; // 0x166 Jump
	
Label_405:
	goto Label_414; // 0x195 Jump
	
Label_359:
	Face(var_0_bool); // 0x167 Func
	var_661_string = "all"; // 0x169 PushS
	var_662_string = "fjump"; // 0x16a PushS
	PlayAnimation(var_661_string, var_662_string); // 0x16b Func
	WaitForAnimEnd(); // 0x16d Func
	func_847(var_227_float); // 0x170 NEW_2
	var_663_cvector = CVector(0.0, 0.0, 0.0); // 0x172 PushVec
	SetSpeed(var_663_cvector); // 0x173 Func
	Stop(); // 0x175 Func
	StopAsync(); // 0x177 Func
	var_664_bool = 0; // 0x179 PushV
	func_804(var_227_float, var_664_bool); // 0x17a NEW_2
	var_665_bool = var_664_bool == 0; // 0x17c Not
	if(var_665_bool == 0) goto Label_405; // 0x17d JumpB
	var_666_bool = 0; var_667_object = Obj(); // 0x17e PushV
	var_667_object = var_0_bool; // 0x17f MovT
	func_2122(var_666_bool, var_667_object); // 0x180 NEW_2
	var_668_bool = var_666_bool == 0; // 0x182 Not
	if(var_668_bool == 0) goto Label_389; // 0x183 JumpB
	goto Label_415; // 0x184 Jump
	
Label_389:
	GetPFPosition(var_218_cvector); // 0x185 TObjFunc
	GetPFPosition(var_219_cvector); // 0x187 Func
	var_223_cvector = var_218_cvector - var_219_cvector; // 0x189 Sub2
	var_224_float = var_223_cvector | var_223_cvector; // 0x18a Or2
	var_669_float = var_205_float * var_205_float; // 0x18b Mult
	var_670_bool = var_224_float < var_669_float; // 0x18c LT
	if(var_670_bool == 0) goto Label_405; // 0x18d JumpB
	var_671_bool = 0; var_672_float = 0; // 0x18e PushV
	var_672_float = var_205_float; // 0x18f Mov
	func_506(var_227_float, var_671_bool, var_672_float); // 0x190 NEW_2
	var_673_bool = var_671_bool == 0; // 0x192 Not
	if(var_673_bool == 0) goto Label_405; // 0x193 JumpB
	goto Label_415; // 0x194 Jump
	
Label_406:
	var_674_bool = 0; var_675_float = 0; // 0x196 PushV
	var_675_float = var_205_float; // 0x197 Mov
	func_506(var_227_float, var_674_bool, var_675_float); // 0x198 NEW_2
	var_676_bool = var_674_bool == 0; // 0x19a Not
	if(var_676_bool == 0) goto Label_413; // 0x19b JumpB
	goto Label_415; // 0x19c Jump
	
Label_413:
	var_221_bool = 1; // 0x19d MovB
	
Label_240:
	var_221_bool = 1; // 0xf0 MovB
	
Label_217:
	var_217_float = var_205_float; // 0xd9 Mov
}


func_715(var_0_bool, var_440_bool)
{
	var_441_cvector = CVector(0,0,0); var_442_cvector = CVector(0,0,0); var_443_cvector = CVector(0,0,0); var_444_float = 0; var_445_float = 0; var_446_cvector = CVector(0,0,0); var_447_cvector = CVector(0,0,0); var_448_cvector = CVector(0,0,0); var_449_float = 0; var_450_float = 0; // 0x2cb PushV
	var_451_bool = 0; var_452_object = Obj(); // 0x2cc PushV
	var_452_object = var_0_bool; // 0x2cd MovT
	func_2122(var_451_bool, var_452_object); // 0x2ce NEW_2
	var_453_bool = var_451_bool == 0; // 0x2d0 Not
	if(var_453_bool == 0) goto Label_724; // 0x2d1 JumpB
	var_440_bool = 0; // 0x2d2 MovB
	return 10; // 0x2d3 Return
	
Label_724:
	var_454_bool = 0; // 0x2d4 PushV
	func_804(var_450_float, var_454_bool); // 0x2d5 NEW_2
	if(var_454_bool == 0) goto Label_741; // 0x2d7 JumpB
	GetPFPosition(var_446_cvector); // 0x2d8 TObjFunc
	GetPFPosition(var_447_cvector); // 0x2da Func
	var_448_cvector = var_446_cvector - var_447_cvector; // 0x2dc Sub2
	var_449_float = var_448_cvector | var_448_cvector; // 0x2dd Or2
	GetAttackDistance(var_450_float); // 0x2de TObjFunc
	var_455_int = 50; // 0x2e0 PushI
	var_450_float = var_450_float + var_455_int; // 0x2e1 Add2
	var_456_float = var_450_float * var_450_float; // 0x2e2 Mult
	var_440_bool = var_449_float <= var_456_float; // 0x2e3 LE2
	return 10; // 0x2e4 Return
	
Label_741:
	var_440_bool = 0; // 0x2e5 MovB
	return 10; // 0x2e6 Return
}


func_2765(var_79_int)
{
	var_80_int = 0; var_81_int = 0; // 0xacd PushV
	var_82_string = "branch"; // 0xace PushS
	GetVariable(var_82_string, var_81_int); // 0xacf Func
	var_83_int = 0; // 0xad1 PushI
	var_84_bool = var_81_int == var_83_int; // 0xad2 Eq
	if(var_84_bool == 0) goto Label_2775; // 0xad3 JumpB
	var_79_int = 1; // 0xad4 MovI
	return 2; // 0xad5 Return
	
Label_2775:
	var_85_int = 1; // 0xad7 PushI
	var_86_bool = var_81_int == var_85_int; // 0xad8 Eq
	if(var_86_bool == 0) goto Label_2780; // 0xad9 JumpB
	var_79_int = 2; // 0xada MovI
	return 2; // 0xadb Return
	
Label_2780:
	var_79_int = 3; // 0xadc MovI
	return 2; // 0xadd Return
}


func_1742(var_70_object)
{
	func_2873(); // 0x6d0 NEW_2
	func_2849(); // 0x6d3 NEW_2
	var_133_object = Obj(); // 0x6d5 PushV
	var_133_object = var_70_object; // 0x6d6 Mov
	func_1754(var_133_object); // 0x6d7 NEW_2
	return 0; // 0x6d9 Return
}


func_1754(var_133_object)
{
	EventDisable(0); // 0x6db EventDisable
	var_134_object = Obj(); // 0x6dc PushV
	var_134_object = var_133_object; // 0x6dd Mov
	func_1779(var_134_object); // 0x6de NEW_2
	var_214_int = 50; // 0x6e0 PushI
	var_215_int = 40; // 0x6e1 PushI
	SetRTEnvelope(var_214_int, var_215_int); // 0x6e2 Func
	EventEnable(0); // 0x6e4 EventEnable
	
Label_1765:
	Hold(); // 0x6e5 Func
	goto Label_1765; // 0x6e7 Jump
}


func_2782(var_113_int)
{
	var_114_int = 0; var_115_int = 0; // 0xade PushV
	var_116_string = "branch"; // 0xadf PushS
	GetVariable(var_116_string, var_115_int); // 0xae0 Func
	var_113_int = var_115_int; // 0xae2 Mov
	return 2; // 0xae3 Return
}


func_2788(var_19_object)
{
	var_20_int = 0; // 0xae5 PushV
	func_2782(var_20_int); // 0xae6 NEW_2
	var_24_int = 1; // 0xae8 PushI
	var_25_bool = var_20_int == var_24_int; // 0xae9 Eq
	if(var_25_bool == 0) goto Label_2798; // 0xaea JumpB
	WorkWithCorpse(var_19_object); // 0xaeb Func
	goto Label_2800; // 0xaed Jump
	
Label_2800:
	return 0; // 0xaf0 Return
	
Label_2798:
	Barter(var_19_object); // 0xaee Func
}


func_2277(var_21_object, var_24_cvector, var_25_cvector)
{
	var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj(); // 0x8e5 PushV
	GetScene(var_28_object); // 0x8e6 Func
	var_30_string = "scripted"; // 0x8e8 PushS
	var_31_string = "blood_dir.xml"; // 0x8e9 PushS
	AddActorByType(var_29_object, var_30_string, var_28_object, var_24_cvector, var_25_cvector, var_31_string); // 0x8ea Func
	var_32_object = Obj(); // 0x8ec PushV
	var_32_object = var_21_object; // 0x8ed Mov
	func_2165(var_32_object); // 0x8ee NEW_2
	return 4; // 0x8f0 Return
}


func_743(var_438_bool)
{
	var_439_bool = 0; // 0x2e7 PushV
	var_439_bool = 0; // 0x2e8 MovB
	var_440_bool = 0; // 0x2e9 PushV
	func_715(var_439_bool, var_440_bool); // 0x2ea NEW_2
	if(var_440_bool == 0) goto Label_754; // 0x2ec JumpB
	var_457_bool = 0; // 0x2ed PushV
	func_759(var_438_bool, var_439_bool, var_457_bool); // 0x2ee NEW_2
	if(var_457_bool == 0) goto Label_754; // 0x2f0 JumpB
	var_439_bool = 1; // 0x2f1 MovB
	
Label_754:
	if(var_439_bool == 0) goto Label_757; // 0x2f2 JumpB
	var_438_bool = 1; // 0x2f3 MovB
	return 0; // 0x2f4 Return
	
Label_757:
	var_438_bool = 0; // 0x2f5 MovB
	return 0; // 0x2f6 Return
}


func_2801(var_76_int, var_77_int)
{
	var_78_int = 0; var_79_bool = 0; var_80_int = 0; var_81_bool = 0; // 0xaf1 PushV
	var_82_bool = var_76_int > var_77_int; // 0xaf2 GT
	if(var_82_bool == 0) goto Label_2808; // 0xaf3 JumpB
	var_83_string = "GenerateMoney: iMin > iMax"; // 0xaf4 PushS
	Trace(var_83_string); // 0xaf5 Func
	return 4; // 0xaf7 Return
	
Label_2808:
	var_80_int = 0; // 0xaf8 MovI
	var_84_bool = var_76_int != var_77_int; // 0xaf9 Neq
	if(var_84_bool == 0) goto Label_2815; // 0xafa JumpB
	var_85_int = var_77_int - var_76_int; // 0xafb Sub
	irand(var_80_int, var_85_int); // 0xafc Func
	goto Label_2819; // 0xafe Jump
	
Label_2819:
	var_80_int = var_80_int + var_76_int; // 0xb03 Add2
	var_86_int = 0; // 0xb04 PushI
	var_87_bool = var_80_int == var_86_int; // 0xb05 Eq
	if(var_87_bool == 0) goto Label_2824; // 0xb06 JumpB
	return 4; // 0xb07 Return
	
Label_2824:
	var_88_int = 0; var_89_string = ""; // 0xb08 PushV
	var_89_string = "Money"; // 0xb09 MovS
	func_2903(var_88_int, var_89_string); // 0xb0a NEW_2
	var_92_int = 0; // 0xb0c PushI
	AddItem(var_81_bool, var_88_int, var_92_int, var_80_int); // 0xb0d Func
	return 4; // 0xb0f Return
	
Label_2815:
	var_93_int = 0; // 0xaff PushI
	var_94_bool = var_76_int == var_93_int; // 0xb00 Eq
	if(var_94_bool == 0) goto Label_2819; // 0xb01 JumpB
	return 4; // 0xb02 Return
}


func_2291()
{
	var_372_cvector = CVector(0,0,0); var_373_cvector = CVector(0,0,0); var_374_cvector = CVector(0,0,0); var_375_cvector = CVector(0,0,0); var_376_cvector = CVector(0,0,0); var_377_cvector = CVector(0,0,0); // 0x8f3 PushV
	GetPosition(var_375_cvector); // 0x8f4 ObjFunc
	GetPosition(var_376_cvector); // 0x8f6 Func
	var_377_cvector = var_375_cvector - var_376_cvector; // 0x8f8 Sub2
	var_378_float = GetByIndex(var_377_cvector, 0); // 0x8f9 PushE
	var_379_float = GetByIndex(var_377_cvector, 2); // 0x8fa PushE
	RotateAsync(var_378_float, var_379_float); // 0x8fb Func
	return 6; // 0x8fd Return
}


func_1779(var_134_object)
{
	var_135_cvector = CVector(0,0,0); var_136_cvector = CVector(0,0,0); var_137_cvector = CVector(0,0,0); var_138_cvector = CVector(0,0,0); var_139_string = ""; var_140_object = Obj(); var_141_bool = 0; var_142_bool = 0; var_143_float = 0; var_144_cvector = CVector(0,0,0); var_145_cvector = CVector(0,0,0); var_146_cvector = CVector(0,0,0); var_147_cvector = CVector(0,0,0); var_148_cvector = CVector(0,0,0); var_149_string = ""; var_150_object = Obj(); var_151_bool = 0; var_152_bool = 0; var_153_float = 0; var_154_cvector = CVector(0,0,0); // 0x6f3 PushV
	var_155_bool = var_134_object == 0; // 0x6f4 NullEq
	if(var_155_bool == 0) goto Label_1787; // 0x6f5 JumpB
	var_156_string = ""; // 0x6f6 PushV
	var_156_string = "fdie"; // 0x6f7 MovS
	func_1870(var_156_string); // 0x6f8 NEW_2
	goto Label_1869; // 0x6fa Jump
	
Label_1869:
	return 20; // 0x74d Return
	
Label_1787:
	GetPosition(var_145_cvector); // 0x6fb ObjFunc
	GetPosition(var_146_cvector); // 0x6fd Func
	GetDirection(var_147_cvector); // 0x6ff Func
	var_148_cvector = var_146_cvector - var_145_cvector; // 0x701 Sub2
	var_188_float = GetByIndex(var_148_cvector, 0); // 0x702 PushE
	var_189_float = GetByIndex(var_147_cvector, 0); // 0x703 PushE
	var_190_float = var_188_float * var_189_float; // 0x704 Mult
	var_191_float = GetByIndex(var_148_cvector, 2); // 0x705 PushE
	var_192_float = GetByIndex(var_147_cvector, 2); // 0x706 PushE
	var_193_float = var_191_float * var_192_float; // 0x707 Mult
	var_194_int = var_190_float + var_193_float; // 0x708 Add
	var_195_int = 0; // 0x709 PushI
	var_196_bool = var_194_int >= var_195_int; // 0x70a GE
	if(var_196_bool == 0) goto Label_1806; // 0x70b JumpB
	var_149_string = "fdie"; // 0x70c MovS
	goto Label_1807; // 0x70d Jump
	
Label_1807:
	RemoveRTEnvelope(); // 0x70f Func
	SetDeathState(); // 0x711 Func
	Stop(); // 0x713 Func
	StopAsync(); // 0x715 Func
	var_150_object = var_134_object; // 0x717 Mov
	var_197_string = "GetScriptProperty"; // 0x718 PushS
	var_198_int = 2; // 0x719 PushI
	var_199_bool = IsFuncExist(var_134_object, var_197_string, var_198_int); // 0x71a FuncExist
	if(var_199_bool == 0) goto Label_1831; // 0x71b JumpB
	var_200_string = "Owner"; // 0x71c PushS
	HasScriptProperty(var_151_bool, var_200_string); // 0x71d ObjFunc
	var_201_bool = var_151_bool; // 0x71f Push
	if(var_201_bool == 0) goto Label_1831; // 0x720 JumpB
	var_202_string = "Owner"; // 0x721 PushS
	GetScriptProperty(var_150_object, var_202_string); // 0x722 ObjFunc
	var_203_bool = var_150_object == 0; // 0x724 NullEq
	if(var_203_bool == 0) goto Label_1831; // 0x725 JumpB
	var_150_object = var_134_object; // 0x726 Mov
	
Label_1831:
	var_204_string = "@GetEyesHeight"; // 0x727 PushS
	var_205_int = 1; // 0x728 PushI
	var_206_bool = IsFuncExist(var_150_object, var_204_string, var_205_int); // 0x729 FuncExist
	if(var_206_bool == 0) goto Label_1846; // 0x72a JumpB
	GetEyesHeight(var_153_float); // 0x72b ObjFunc
	var_154_cvector = CVector(0.0, 0.0, 0.0); // 0x72d MovV
	var_207_float = GetByIndex(var_154_cvector, 1); // 0x72e PushE
	var_207_float = var_153_float; // 0x72f Mov
	SetByIndex(var_154_cvector, 1) = var_207_float; // 0x730 PopE
	var_208_string = "head"; // 0x731 PushS
	LookAsync(var_134_object, var_208_string, var_154_cvector); // 0x732 Func
	var_152_bool = 1; // 0x734 MovB
	goto Label_1847; // 0x735 Jump
	
Label_1847:
	var_209_string = ""; // 0x737 PushV
	var_209_string = var_149_string; // 0x738 Mov
	func_2454(var_209_string); // 0x739 NEW_2
	var_210_string = "all"; // 0x73b PushS
	PlayAnimation(var_210_string, var_149_string); // 0x73c Func
	WaitForAnimEnd(); // 0x73e Func
	var_211_bool = var_152_bool; // 0x740 Push
	if(var_211_bool == 0) goto Label_1863; // 0x741 JumpB
	StopAsync(); // 0x742 Func
	var_212_string = "head"; // 0x744 PushS
	UnlookAsync(var_212_string); // 0x745 Func
	
Label_1863:
	var_213_string = "all"; // 0x747 PushS
	LockAnimationEnd(var_213_string, var_149_string); // 0x748 Func
	RemoveEnvelope(); // 0x74a Func
	var_150_object = 0; // 0x74c SetNull
	
Label_1846:
	var_152_bool = 0; // 0x736 MovB
	
Label_1806:
	var_149_string = "bdie"; // 0x70e MovS
}


func_759(var_0_bool, var_4_bool, var_457_bool)
{
	var_458_object = Obj(); var_459_bool = 0; var_460_float = 0; var_461_cvector = CVector(0,0,0); var_462_cvector = CVector(0,0,0); var_463_object = Obj(); var_464_bool = 0; var_465_float = 0; var_466_cvector = CVector(0,0,0); var_467_cvector = CVector(0,0,0); // 0x2f7 PushV
	GetScene(var_463_object); // 0x2f8 Func
	var_464_bool = 0; // 0x2fa MovB
	
Label_763:
	var_468_cvector = CVector(0,0,0); var_469_object = Obj(); // 0x2fb PushV
	var_469_object = var_0_bool; // 0x2fc MovT
	func_1916(var_469_object); // 0x2fd NEW_2
	var_474_int = -var_468_cvector; // 0x2ff Neg
	FindDirLength(var_465_float, var_474_int, var_465_float); // 0x300 Func
	var_475_bool = var_465_float < var_4_bool; // 0x302 LT
	if(var_475_bool == 0) goto Label_773; // 0x303 JumpB
	goto Label_801; // 0x304 Jump
	
Label_801:
	var_457_bool = var_464_bool; // 0x321 Mov
	return 10; // 0x322 Return
	
Label_773:
	Face(var_0_bool); // 0x305 Func
	var_476_string = "all"; // 0x307 PushS
	var_477_string = "bjump"; // 0x308 PushS
	PlayAnimation(var_476_string, var_477_string); // 0x309 Func
	GetPFPosition(var_466_cvector); // 0x30b TObjFunc
	GetPFPosition(var_467_cvector); // 0x30d Func
	WaitForAnimEnd(); // 0x30f Func
	func_847(var_467_cvector); // 0x312 NEW_2
	StopAsync(); // 0x314 Func
	var_478_cvector = CVector(0.0, 0.0, 0.0); // 0x316 PushVec
	SetSpeed(var_478_cvector); // 0x317 Func
	var_464_bool = 1; // 0x319 MovB
	var_479_bool = 0; // 0x31a PushV
	func_715(var_467_cvector, var_479_bool); // 0x31b NEW_2
	var_480_bool = var_479_bool == 0; // 0x31d Not
	if(var_480_bool == 0) goto Label_800; // 0x31e JumpB
	goto Label_801; // 0x31f Jump
	
Label_800:
	goto Label_763; // 0x320 Jump
}


func_2302(var_29_bool)
{
	var_30_bool = 0; var_31_bool = 0; // 0x8fe PushV
	IsLoaded(var_31_bool); // 0x8ff Func
	var_29_bool = var_31_bool; // 0x901 Mov
	return 2; // 0x902 Return
}


func_2307(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x903 PushV
	GetPosition(var_40_cvector); // 0x904 ObjFunc
	GetEyesHeight(var_39_float); // 0x906 ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x908 PushE
	var_48_float = var_48_float + var_39_float; // 0x909 Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x90a PopE
	GetPosition(var_41_cvector); // 0x90b Func
	GetEyesHeight(var_39_float); // 0x90d Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x90f PushE
	var_49_float = var_49_float + var_39_float; // 0x910 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x911 PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x912 Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x913 PushE
	var_50_float = 0; // 0x914 MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x915 PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x916 Or
	var_52_float = sqrt(var_51_int); // 0x917 Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x918 Div2
	var_43_cvector = -var_42_cvector; // 0x919 Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x91a Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x91b PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x91c PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x91d Xor2
	func_2501(var_54_cvector, var_55_cvector); // 0x91e NEW_2
	var_62_int = 25; // 0x920 PushI
	var_63_float = var_54_cvector * var_62_int; // 0x921 Mult
	var_64_int = var_53_float + var_63_float; // 0x922 Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x923 PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x924 Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x925 Add2
	IsOverrideActive(var_46_bool); // 0x926 Func
	var_66_bool = var_46_bool; // 0x928 Push
	if(var_66_bool == 0) goto Label_2348; // 0x929 JumpB
	var_27_bool = 0; // 0x92a MovB
	return 18; // 0x92b Return
	
Label_2348:
	StopWorld(); // 0x92c Func
	var_67_bool = 1; // 0x92e PushB
	CameraTransit(var_45_cvector, var_43_cvector, var_67_bool); // 0x92f Func
	var_68_float = GetByIndex(var_44_cvector, 0); // 0x931 PushE
	var_69_float = GetByIndex(var_44_cvector, 2); // 0x932 PushE
	Rotate(var_68_float, var_69_float); // 0x933 Func
	var_70_bool = 0; // 0x935 PushV
	func_2714(var_70_bool); // 0x936 NEW_2
	if(var_70_bool == 0) goto Label_2362; // 0x938 JumpB
	goto Label_2370; // 0x939 Jump
	
Label_2370:
	CameraWaitForPlayFinish(); // 0x942 Func
	ResumeWorld(); // 0x944 Func
	var_27_bool = 1; // 0x946 MovB
	return 18; // 0x947 Return
	
Label_2362:
	var_71_string = "head"; // 0x93a PushS
	HasAnimationTrack(var_47_bool, var_71_string); // 0x93b Func
	var_72_bool = var_47_bool; // 0x93d Push
	if(var_72_bool == 0) goto Label_2370; // 0x93e JumpB
	var_73_string = "head"; // 0x93f PushS
	LookAsyncCamera(var_73_string); // 0x940 Func
}


func_2832(var_119_string)
{
	var_120_object = Obj(); var_121_int = 0; var_122_bool = 0; var_123_object = Obj(); var_124_int = 0; var_125_bool = 0; // 0xb10 PushV
	CreateInvItem(var_123_object); // 0xb11 Func
	SetItemName(var_119_string); // 0xb13 ObjFunc
	var_126_string = "Organ"; // 0xb15 PushS
	var_127_int = 1; // 0xb16 PushI
	SetProperty(var_126_string, var_127_int); // 0xb17 ObjFunc
	GetItemID(var_124_int); // 0xb19 ObjFunc
	var_128_int = 0; // 0xb1b PushI
	var_129_int = 1; // 0xb1c PushI
	AddItem(var_125_bool, var_123_object, var_128_int, var_129_int); // 0xb1d Func
	return 6; // 0xb1f Return
}


func_2849()
{
	var_113_int = 0; // 0xb21 PushV
	func_2782(var_113_int); // 0xb22 NEW_2
	var_117_int = 1; // 0xb24 PushI
	var_118_bool = var_113_int != var_117_int; // 0xb25 Neq
	if(var_118_bool == 0) goto Label_2856; // 0xb26 JumpB
	return 0; // 0xb27 Return
	
Label_2856:
	var_119_string = ""; // 0xb28 PushV
	var_119_string = "liver"; // 0xb29 MovS
	func_2832(var_119_string); // 0xb2a NEW_2
	var_130_string = ""; // 0xb2c PushV
	var_130_string = "kidney"; // 0xb2d MovS
	func_2832(var_130_string); // 0xb2e NEW_2
	var_131_string = ""; // 0xb30 PushV
	var_131_string = "heart"; // 0xb31 MovS
	func_2832(var_131_string); // 0xb32 NEW_2
	var_132_string = ""; // 0xb34 PushV
	var_132_string = "blood"; // 0xb35 MovS
	func_2832(var_132_string); // 0xb36 NEW_2
	return 0; // 0xb38 Return
}


func_804(var_0_bool, var_388_bool)
{
	var_389_bool = 0; var_390_bool = 0; // 0x324 PushV
	var_391_string = "IsAttacking"; // 0x325 PushS
	var_392_int = 1; // 0x326 PushI
	var_393_bool = IsFuncExist(var_0_bool, var_391_string, var_392_int); // 0x327 FuncExist
	if(var_393_bool == 0) goto Label_813; // 0x328 JumpB
	IsAttacking(var_390_bool); // 0x329 TObjFunc
	var_388_bool = var_390_bool; // 0x32b Mov
	return 2; // 0x32c Return
	
Label_813:
	var_388_bool = 0; // 0x32d MovB
	return 2; // 0x32e Return
}


func_1316(var_2_int, var_108_string)
{
	var_109_bool = 0; // 0x525 PushV
	func_2714(var_109_bool); // 0x526 NEW_2
	var_110_bool = var_109_bool == 0; // 0x528 Not
	if(var_110_bool == 0) goto Label_1323; // 0x529 JumpB
	return 0; // 0x52a Return
	
Label_1323:
	var_111_bool = var_108_string == var_2_int; // 0x52b Eq
	if(var_111_bool == 0) goto Label_1326; // 0x52c JumpB
	return 0; // 0x52d Return
	
Label_1326:
	var_112_string = ""; var_113_bool = 0; // 0x52e PushV
	var_112_string = var_108_string; // 0x52f Mov
	var_114_string = ""; // 0x530 PushS
	var_115_bool = var_108_string == var_114_string; // 0x531 Eq
	if(var_115_bool == 0) goto Label_1333; // 0x532 JumpB
	var_113_bool = 0; // 0x533 MovB
	goto Label_1334; // 0x534 Jump
	
Label_1334:
	func_2410(var_112_string, var_113_bool); // 0x536 NEW_2
	var_2_int = var_108_string; // 0x538 TMov
	return 0; // 0x539 Return
	
Label_1333:
	var_113_bool = 1; // 0x535 MovB
}


func_815(var_2_int, var_5_float)
{
	var_501_float = 0; var_502_int = 0; var_503_float = 0; var_504_int = 0; // 0x32f PushV
	var_505_bool = var_2_int == 0; // 0x330 Not
	if(var_505_bool == 0) goto Label_819; // 0x331 JumpB
	return 4; // 0x332 Return
	
Label_819:
	var_506_float = var_5_float; // 0x333 PushT
	if(var_506_float == 0) goto Label_827; // 0x334 JumpB
	var_507_int = -1; // 0x335 PushI
	var_5_float = var_5_float + var_507_int; // 0x336 Add2
	var_508_int = 0; // 0x337 PushI
	var_509_bool = var_5_float > var_508_int; // 0x338 GT
	if(var_509_bool == 0) goto Label_827; // 0x339 JumpB
	return 4; // 0x33a Return
	
Label_827:
	rand(var_503_float); // 0x33b Func
	var_510_float = 0; // 0x33d PushV
	func_861(var_510_float); // 0x33e NEW_2
	var_511_bool = var_503_float < var_510_float; // 0x340 LT
	if(var_511_bool == 0) goto Label_846; // 0x341 JumpB
	irand(var_504_int, var_503_float); // 0x342 Func
	var_512_int = 1; // 0x344 PushI
	var_504_int = var_504_int + var_512_int; // 0x345 Add2
	var_513_string = "attack"; // 0x346 PushS
	var_514_int = var_513_string + var_504_int; // 0x347 Add
	Speak(var_514_int); // 0x348 Func
	var_515_int = 0; // 0x34a PushV
	func_859(var_515_int); // 0x34b NEW_2
	var_5_float = var_515_int; // 0x34c TMov
	
Label_846:
	return 4; // 0x34e Return
}


func_2873()
{
	var_71_int = 0; var_72_bool = 0; var_73_int = 0; var_74_bool = 0; // 0xb39 PushV
	var_75_int = 0; // 0xb3a PushI
	ClearSubContainer(var_75_int); // 0xb3b Func
	var_76_int = 0; var_77_int = 0; // 0xb3d PushV
	var_76_int = 300; // 0xb3e MovI
	var_77_int = 750; // 0xb3f MovI
	func_2801(var_76_int, var_77_int); // 0xb40 NEW_2
	var_95_string = ""; var_96_int = 0; var_97_int = 0; // 0xb42 PushV
	var_95_string = "Knife"; // 0xb43 MovS
	var_96_int = 1; // 0xb44 MovI
	var_97_int = 8; // 0xb45 MovI
	func_2443(var_95_string, var_96_int, var_97_int); // 0xb46 NEW_2
	var_106_string = ""; var_107_int = 0; var_108_int = 0; // 0xb48 PushV
	var_106_string = "lockpick"; // 0xb49 MovS
	var_107_int = 1; // 0xb4a MovI
	var_108_int = 6; // 0xb4b MovI
	func_2443(var_106_string, var_107_int, var_108_int); // 0xb4c NEW_2
	var_109_int = 0; var_110_string = ""; // 0xb4e PushV
	var_110_string = "grabitel_mark"; // 0xb4f MovS
	func_2903(var_109_int, var_110_string); // 0xb50 NEW_2
	var_111_int = 0; // 0xb52 PushI
	var_112_int = 1; // 0xb53 PushI
	AddItem(var_74_bool, var_109_int, var_111_int, var_112_int); // 0xb54 Func
	return 4; // 0xb56 Return
}


func_2376()
{
	var_164_bool = 0; var_165_bool = 0; // 0x948 PushV
	var_166_bool = 1; // 0x949 PushB
	CameraSwitchToNormal(var_166_bool); // 0x94a Func
	var_167_bool = 0; // 0x94c PushV
	func_2714(var_167_bool); // 0x94d NEW_2
	if(var_167_bool == 0) goto Label_2385; // 0x94f JumpB
	goto Label_2393; // 0x950 Jump
	
Label_2393:
	return 2; // 0x959 Return
	
Label_2385:
	var_168_string = "head"; // 0x951 PushS
	HasAnimationTrack(var_165_bool, var_168_string); // 0x952 Func
	var_169_bool = var_165_bool; // 0x954 Push
	if(var_169_bool == 0) goto Label_2393; // 0x955 JumpB
	var_170_string = "head"; // 0x956 PushS
	UnlookAsync(var_170_string); // 0x957 Func
}


func_1870(var_156_string)
{
	RemoveRTEnvelope(); // 0x74f Func
	SetDeathState(); // 0x751 Func
	Stop(); // 0x753 Func
	StopAsync(); // 0x755 Func
	StopSecondaryAnimation(); // 0x757 Func
	var_157_string = ""; // 0x759 PushV
	var_157_string = var_156_string; // 0x75a Mov
	func_2454(var_157_string); // 0x75b NEW_2
	var_186_string = "all"; // 0x75d PushS
	PlayAnimation(var_186_string, var_156_string); // 0x75e Func
	WaitForAnimEnd(); // 0x760 Func
	var_187_string = "all"; // 0x762 PushS
	LockAnimationEnd(var_187_string, var_156_string); // 0x763 Func
	RemoveEnvelope(); // 0x765 Func
	return 0; // 0x767 Return
}


func_847(var_0_bool)
{
	var_265_object = Obj(); // 0x34f PushV
	var_265_object = var_0_bool; // 0x350 MovT
	func_2645(var_265_object); // 0x351 NEW_2
	return 0; // 0x353 Return
}


func_852()
{
	var_394_string = ""; // 0x354 PushV
	var_394_string = "attack_stay"; // 0x355 MovS
	func_2454(var_394_string); // 0x356 NEW_2
	return 0; // 0x358 Return
}


func_2903(var_88_int, var_89_string)
{
	var_90_int = 0; var_91_int = 0; // 0xb57 PushV
	GetInvItemByName(var_91_int, var_89_string); // 0xb58 Func
	var_88_int = var_91_int; // 0xb5a Mov
	return 2; // 0xb5b Return
}


func_857(var_644_bool)
{
	var_644_bool = 1; // 0x359 MovB
	return 0; // 0x35a Return
}


func_2394(var_134_string)
{
	var_135_bool = 0; var_136_float = 0; var_137_float = 0; var_138_bool = 0; var_139_float = 0; var_140_float = 0; // 0x95a PushV
	lshHasAnimation(var_138_bool, var_134_string); // 0x95b Func
	var_141_bool = var_138_bool; // 0x95d Push
	if(var_141_bool == 0) goto Label_2405; // 0x95e JumpB
	lshGetAnimTimes(var_134_string, var_139_float, var_140_float); // 0x95f Func
	var_142_bool = 0; // 0x961 PushB
	lshPlayAnimation(var_139_float, var_140_float, var_142_bool); // 0x962 Func
	goto Label_2409; // 0x964 Jump
	
Label_2409:
	return 6; // 0x969 Return
	
Label_2405:
	var_143_string = "Can't find lsh animation : "; // 0x965 PushS
	var_144_int = var_143_string + var_134_string; // 0x966 Add
	Trace(var_144_int); // 0x967 Func
}


func_859(var_515_int)
{
	var_515_int = 1; // 0x35b MovI
	return 0; // 0x35c Return
}


func_2908(var_16_object)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0xb5c PushV
	GetScene(var_18_object); // 0xb5d Func
	var_19_object = Obj(); // 0xb5f PushV
	func_2495(var_19_object); // 0xb60 NEW_2
	RemoveStationaryActor(var_19_object); // 0xb62 ObjFunc
	var_22_bool = 0; var_23_string = ""; var_24_string = ""; // 0xb64 PushV
	var_23_string = "quest_b3_02"; // 0xb65 MovS
	var_24_string = "grabitel_dead"; // 0xb66 MovS
	func_2633(var_22_bool, var_23_string, var_24_string); // 0xb67 NEW_2
	var_28_bool = 0; var_29_object = Obj(); // 0xb69 PushV
	var_29_object = var_16_object; // 0xb6a Mov
	func_1938(var_28_bool, var_29_object); // 0xb6b NEW_2
	if(var_28_bool == 0) goto Label_2931; // 0xb6d JumpB
	var_32_bool = 0; var_33_object = Obj(); var_34_float = 0; // 0xb6e PushV
	var_33_object = var_16_object; // 0xb6f Mov
	var_34_float = 0.03; // 0xb70 MovF
	func_2571(var_32_bool, var_33_object, var_34_float); // 0xb71 NEW_2
	
Label_2931:
	var_70_object = Obj(); // 0xb73 PushV
	var_70_object = var_16_object; // 0xb74 Mov
	TaskCall(7); // 0xb75 TaskCall
	func_1742(var_70_object); // 0xb76 NEW_2
	TaskReturn(); // 0xb77 TaskReturn
	return 2; // 0xb79 Return
}


func_861(var_510_float)
{
	var_510_float = 0.5; // 0x35d MovF
	return 0; // 0x35e Return
}


func_2410(var_112_string, var_113_bool)
{
	var_116_bool = 0; var_117_float = 0; var_118_float = 0; var_119_bool = 0; var_120_float = 0; var_121_float = 0; // 0x96a PushV
	lshHasAnimation(var_119_bool, var_112_string); // 0x96b Func
	var_122_bool = var_119_bool; // 0x96d Push
	if(var_122_bool == 0) goto Label_2420; // 0x96e JumpB
	lshGetAnimTimes(var_112_string, var_120_float, var_121_float); // 0x96f Func
	lshPlayAnimation(var_120_float, var_121_float, var_113_bool); // 0x971 Func
	goto Label_2424; // 0x973 Jump
	
Label_2424:
	return 6; // 0x978 Return
	
Label_2420:
	var_123_string = "Can't find lsh animation : "; // 0x974 PushS
	var_124_int = var_123_string + var_112_string; // 0x975 Add
	Trace(var_124_int); // 0x976 Func
}


func_1902(var_561_string, var_562_int)
{
	var_563_int = 2; // 0x76f PushI
	var_564_bool = var_562_int == var_563_int; // 0x770 Eq
	if(var_564_bool == 0) goto Label_1909; // 0x771 JumpB
	var_561_string = "fire"; // 0x772 MovS
	return 0; // 0x773 Return
	
Label_1909:
	var_565_int = 1; // 0x775 PushI
	var_566_bool = var_562_int == var_565_int; // 0x776 Eq
	if(var_566_bool == 0) goto Label_1914; // 0x777 JumpB
	var_561_string = "bullet"; // 0x778 MovS
	return 0; // 0x779 Return
	
Label_1914:
	var_561_string = "phys"; // 0x77a MovS
	return 0; // 0x77b Return
}


func_887(var_2_int, var_268_bool, var_269_object, var_270_float, var_271_float, var_272_bool, var_273_bool)
{
	var_277_bool = 0; var_278_bool = 0; var_279_bool = 0; var_280_bool = 0; // 0x377 PushV
	var_281_object = Obj(); // 0x378 PushV
	var_281_object = var_269_object; // 0x379 Mov
	func_2645(var_281_object); // 0x37a NEW_2
	var_282_int = 1; // 0x37c PushI
	var_283_int = 5; // 0x37d PushI
	SetTimer(var_282_int, var_283_int); // 0x37e Func
	CanSee(var_279_bool, var_269_object); // 0x380 Func
	var_284_bool = var_279_bool; // 0x382 Push
	if(var_284_bool == 0) goto Label_906; // 0x383 JumpB
	var_2_int = 1; // 0x384 TMovB
	var_285_object = Obj(); // 0x385 PushV
	var_285_object = var_269_object; // 0x386 Mov
	func_2425(var_285_object); // 0x387 NEW_2
	goto Label_907; // 0x389 Jump
	
Label_907:
	var_292_bool = 0; var_293_object = Obj(); // 0x38b PushV
	var_293_object = var_269_object; // 0x38c Mov
	func_1938(var_292_bool, var_293_object); // 0x38d NEW_2
	if(var_292_bool == 0) goto Label_917; // 0x38f JumpB
	var_296_object = Obj(); // 0x390 PushV
	func_2495(var_296_object); // 0x391 NEW_2
	SendPlayerEnemy(var_269_object, var_296_object); // 0x393 Func
	
Label_917:
	var_297_bool = 0; var_298_object = Obj(); var_299_float = 0; var_300_float = 0; var_301_bool = 0; var_302_bool = 0; // 0x395 PushV
	var_298_object = var_269_object; // 0x396 Mov
	var_299_float = var_270_float; // 0x397 Mov
	var_300_float = var_271_float; // 0x398 Mov
	var_301_bool = var_272_bool; // 0x399 Mov
	var_302_bool = var_273_bool; // 0x39a Mov
	func_992(var_279_bool, var_280_bool, var_297_bool, var_298_object, var_299_float, var_300_float, var_301_bool, var_302_bool); // 0x39b NEW_2
	var_280_bool = var_297_bool; // 0x39c Mov
	var_348_int = var_2_int; // 0x39e PushT
	if(var_348_int == 0) goto Label_931; // 0x39f JumpB
	var_349_string = "head"; // 0x3a0 PushS
	UnlookAsync(var_349_string); // 0x3a1 Func
	
Label_931:
	var_350_int = 1; // 0x3a3 PushI
	KillTimer(var_350_int); // 0x3a4 Func
	var_268_bool = var_280_bool; // 0x3a6 Mov
	return 4; // 0x3a7 Return
	
Label_906:
	var_2_int = 0; // 0x38a TMovB
}


func_2425(var_285_object)
{
	var_286_float = 0; var_287_cvector = CVector(0,0,0); var_288_float = 0; var_289_cvector = CVector(0,0,0); // 0x979 PushV
	GetEyesHeight(var_288_float); // 0x97a ObjFunc
	var_289_cvector = CVector(0.0, 0.0, 0.0); // 0x97c MovV
	var_290_float = GetByIndex(var_289_cvector, 1); // 0x97d PushE
	var_290_float = var_288_float; // 0x97e Mov
	SetByIndex(var_289_cvector, 1) = var_290_float; // 0x97f PopE
	var_291_string = "head"; // 0x980 PushS
	LookAsync(var_285_object, var_291_string, var_289_cvector); // 0x981 Func
	return 4; // 0x983 Return
}


func_1916(var_49_cvector)
{
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); // 0x77c PushV
	GetPosition(var_53_cvector); // 0x77d Func
	GetPosition(var_54_cvector); // 0x77f ObjFunc
	var_49_cvector = var_54_cvector - var_53_cvector; // 0x781 Sub2
	return 4; // 0x782 Return
}


func_1923(var_62_float)
{
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); // 0x783 PushV
	GetPosition(var_67_cvector); // 0x784 Func
	GetPosition(var_68_cvector); // 0x786 ObjFunc
	var_69_cvector = var_68_cvector - var_67_cvector; // 0x788 Sub2
	var_62_float = var_69_cvector | var_69_cvector; // 0x789 Or2
	return 6; // 0x78a Return
}


func_2436()
{
	var_18_bool = 0; // 0x984 PushV
	func_2714(var_18_bool); // 0x985 NEW_2
	if(var_18_bool == 0) goto Label_2442; // 0x987 JumpB
	lshStopSpeech(); // 0x988 Func
	
Label_2442:
	return 0; // 0x98a Return
}


func_1931(var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x78b PushV
	var_24_string = "player"; // 0x78c PushS
	FindActor(var_23_object, var_24_string); // 0x78d Func
	var_21_object = var_23_object; // 0x78f Mov
	return 2; // 0x790 Return
}


func_2443(var_95_string, var_96_int, var_97_int)
{
	var_98_bool = 0; var_99_bool = 0; // 0x98b PushV
	var_100_bool = 0; var_101_int = 0; var_102_int = 0; // 0x98c PushV
	var_101_int = var_96_int; // 0x98d Mov
	var_102_int = var_97_int; // 0x98e Mov
	func_2561(var_100_bool, var_101_int, var_102_int); // 0x98f NEW_2
	if(var_100_bool == 0) goto Label_2453; // 0x991 JumpB
	var_105_int = 0; // 0x992 PushI
	AddItem(var_99_bool, var_95_string, var_105_int); // 0x993 Func
	
Label_2453:
	return 2; // 0x995 Return
}


func_1938(var_28_bool, var_29_object)
{
	var_30_bool = 0; var_31_bool = 0; // 0x792 PushV
	IsPlayerActor(var_29_object, var_31_bool); // 0x793 Func
	var_28_bool = var_31_bool; // 0x795 Mov
	return 2; // 0x796 Return
}


func_2454(var_157_string)
{
	var_158_bool = 0; var_159_int = 0; var_160_bool = 0; var_161_int = 0; var_162_bool = 0; var_163_float = 0; var_164_cvector = CVector(0,0,0); var_165_cvector = CVector(0,0,0); var_166_bool = 0; var_167_int = 0; var_168_bool = 0; var_169_int = 0; var_170_bool = 0; var_171_float = 0; var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0); // 0x996 PushV
	IsExisting3DSound(var_166_bool, var_157_string); // 0x997 Func
	var_174_bool = var_166_bool == 0; // 0x999 Not
	if(var_174_bool == 0) goto Label_2479; // 0x99a JumpB
	var_167_int = 0; // 0x99b MovI
	
Label_2460:
	var_175_int = 1; // 0x99c PushI
	var_176_int = var_167_int + var_175_int; // 0x99d Add
	var_177_int = var_157_string + var_176_int; // 0x99e Add
	IsExisting3DSound(var_168_bool, var_177_int); // 0x99f Func
	var_178_bool = var_168_bool == 0; // 0x9a1 Not
	if(var_178_bool == 0) goto Label_2468; // 0x9a2 JumpB
	goto Label_2471; // 0x9a3 Jump
	
Label_2471:
	var_179_bool = var_167_int == 0; // 0x9a7 Not
	if(var_179_bool == 0) goto Label_2474; // 0x9a8 JumpB
	return 16; // 0x9a9 Return
	
Label_2474:
	irand(var_169_int, var_167_int); // 0x9aa Func
	var_180_int = 1; // 0x9ac PushI
	var_181_int = var_169_int + var_180_int; // 0x9ad Add
	var_157_string = var_157_string + var_181_int; // 0x9ae Add2
	
Label_2479:
	Is3DSoundLoaded(var_170_bool, var_157_string); // 0x9af Func
	var_182_bool = var_170_bool; // 0x9b1 Push
	if(var_182_bool == 0) goto Label_2494; // 0x9b2 JumpB
	GetEyesHeight(var_171_float); // 0x9b3 Func
	GetDirection(var_172_cvector); // 0x9b5 Func
	var_183_int = 50; // 0x9b7 PushI
	var_173_cvector = var_172_cvector * var_183_int; // 0x9b8 Mult2
	var_184_float = GetByIndex(var_173_cvector, 1); // 0x9b9 PushE
	var_184_float = var_184_float + var_171_float; // 0x9ba Add2
	SetByIndex(var_173_cvector, 1) = var_184_float; // 0x9bb PopE
	PlayGlobalSound(var_157_string, var_173_cvector); // 0x9bc Func
	
Label_2494:
	return 16; // 0x9be Return
	
Label_2468:
	var_185_int = 1; // 0x9a4 PushI
	var_167_int = var_167_int + var_185_int; // 0x9a5 Add2
	goto Label_2460; // 0x9a6 Jump
}


func_1943(var_51_bool, var_52_object, var_53_string)
{
	var_54_bool = 0; var_55_bool = 0; // 0x797 PushV
	var_56_string = "HasProperty"; // 0x798 PushS
	var_57_int = 2; // 0x799 PushI
	var_58_bool = IsFuncExist(var_52_object, var_56_string, var_57_int); // 0x79a FuncExist
	var_59_bool = var_58_bool == 0; // 0x79b Not
	if(var_59_bool == 0) goto Label_1951; // 0x79c JumpB
	var_51_bool = 0; // 0x79d MovB
	return 2; // 0x79e Return
	
Label_1951:
	HasProperty(var_53_string, var_55_bool); // 0x79f ObjFunc
	var_51_bool = var_55_bool; // 0x7a1 Mov
	return 2; // 0x7a2 Return
}


func_2976()
{
	return 0; // 0xba1 Return
}


func_2978(var_18_bool)
{
	var_18_bool = 0; // 0xba3 MovB
	return 0; // 0xba4 Return
}


func_1955(var_43_bool, var_44_object, var_45_string, var_46_float, var_47_float, var_48_float)
{
	var_49_float = 0; var_50_float = 0; // 0x7a3 PushV
	var_51_bool = 0; var_52_object = Obj(); var_53_string = ""; // 0x7a4 PushV
	var_52_object = var_44_object; // 0x7a5 Mov
	var_53_string = var_45_string; // 0x7a6 Mov
	func_1943(var_51_bool, var_52_object, var_53_string); // 0x7a7 NEW_2
	var_60_bool = var_51_bool == 0; // 0x7a9 Not
	if(var_60_bool == 0) goto Label_1965; // 0x7aa JumpB
	var_43_bool = 0; // 0x7ab MovB
	return 2; // 0x7ac Return
	
Label_1965:
	GetProperty(var_45_string, var_50_float); // 0x7ad ObjFunc
	var_61_float = 0; var_62_float = 0; var_63_float = 0; var_64_float = 0; // 0x7af PushV
	var_62_float = var_50_float + var_46_float; // 0x7b0 Add2
	var_63_float = var_47_float; // 0x7b1 Mov
	var_64_float = var_48_float; // 0x7b2 Mov
	func_2542(var_61_float, var_62_float, var_63_float, var_64_float); // 0x7b3 NEW_2
	SetProperty(var_45_string, var_61_float); // 0x7b5 ObjFunc
	var_43_bool = 1; // 0x7b7 MovB
	return 2; // 0x7b8 Return
}


func_432(var_1_object, var_2_int, var_4_bool)
{
	var_228_bool = 0; var_229_bool = 0; var_230_cvector = CVector(0,0,0); var_231_bool = 0; var_232_bool = 0; var_233_cvector = CVector(0,0,0); // 0x1b0 PushV
	var_1_object = 0; // 0x1b1 TMovI
	
Label_434:
	var_234_string = "all"; // 0x1b2 PushS
	var_235_string = "attack_begin"; // 0x1b3 PushS
	var_236_int = 1; // 0x1b4 PushI
	var_237_int = var_1_object + var_236_int; // 0x1b5 Add
	var_238_int = var_235_string + var_237_int; // 0x1b6 Add
	HasAnimation(var_231_bool, var_234_string, var_238_int); // 0x1b7 Func
	var_239_bool = var_231_bool == 0; // 0x1b9 Not
	if(var_239_bool == 0) goto Label_444; // 0x1ba JumpB
	goto Label_447; // 0x1bb Jump
	
Label_447:
	var_2_int = 0; // 0x1bf TMovI
	
Label_448:
	var_240_string = "attack"; // 0x1c0 PushS
	var_241_int = 1; // 0x1c1 PushI
	var_242_int = var_2_int + var_241_int; // 0x1c2 Add
	var_243_int = var_240_string + var_242_int; // 0x1c3 Add
	IsExisting3DSound(var_232_bool, var_243_int); // 0x1c4 Func
	var_244_bool = var_232_bool == 0; // 0x1c6 Not
	if(var_244_bool == 0) goto Label_457; // 0x1c7 JumpB
	goto Label_460; // 0x1c8 Jump
	
Label_460:
	var_245_string = "all"; // 0x1cc PushS
	var_246_string = "bjump"; // 0x1cd PushS
	GetAnimationOffset(var_233_cvector, var_245_string, var_246_string); // 0x1ce Func
	var_247_float = GetByIndex(var_233_cvector, 2); // 0x1d0 PushE
	var_4_bool = -var_247_float; // 0x1d1 Neg2
	return 6; // 0x1d2 Return
	
Label_457:
	var_248_int = 1; // 0x1c9 PushI
	var_2_int = var_2_int + var_248_int; // 0x1ca Add2
	goto Label_448; // 0x1cb Jump
	
Label_444:
	var_249_int = 1; // 0x1bc PushI
	var_1_object = var_1_object + var_249_int; // 0x1bd Add2
	goto Label_434; // 0x1be Jump
}


func_950(var_2_int)
{
	var_16_int = 1; // 0x3b6 PushI
	KillTimer(var_16_int); // 0x3b7 Func
	var_17_int = var_2_int; // 0x3b9 PushT
	if(var_17_int == 0) goto Label_959; // 0x3ba JumpB
	var_2_int = 0; // 0x3bb TMovB
	var_18_string = "head"; // 0x3bc PushS
	UnlookAsync(var_18_string); // 0x3bd Func
	
Label_959:
	func_1116(var_15_bool); // 0x3c0 NEW_2
	return 0; // 0x3c2 Return
}


func_1977(var_533_float, var_534_object, var_535_float, var_536_int)
{
	var_540_int = 0; var_541_string = ""; var_542_int = 0; var_543_float = 0; var_544_float = 0; var_545_float = 0; var_546_int = 0; var_547_string = ""; var_548_int = 0; var_549_float = 0; var_550_float = 0; var_551_float = 0; // 0x7b9 PushV
	var_552_bool = 0; var_553_object = Obj(); var_554_string = ""; // 0x7ba PushV
	var_553_object = var_534_object; // 0x7bb Mov
	var_554_string = "health"; // 0x7bc MovS
	func_1943(var_552_bool, var_553_object, var_554_string); // 0x7bd NEW_2
	var_555_bool = var_552_bool == 0; // 0x7bf Not
	if(var_555_bool == 0) goto Label_1987; // 0x7c0 JumpB
	var_533_float = 0.0; // 0x7c1 MovF
	return 12; // 0x7c2 Return
	
Label_1987:
	var_556_bool = 0; var_557_object = Obj(); var_558_string = ""; // 0x7c3 PushV
	var_557_object = var_534_object; // 0x7c4 Mov
	var_558_string = "armor"; // 0x7c5 MovS
	func_1943(var_556_bool, var_557_object, var_558_string); // 0x7c6 NEW_2
	var_559_bool = var_556_bool == 0; // 0x7c8 Not
	if(var_559_bool == 0) goto Label_1996; // 0x7c9 JumpB
	var_546_int = 0; // 0x7ca MovI
	goto Label_1999; // 0x7cb Jump
	
Label_1999:
	var_560_string = "armor_"; // 0x7cf PushS
	var_561_string = ""; var_562_int = 0; // 0x7d0 PushV
	var_562_int = var_536_int; // 0x7d1 Mov
	func_1902(var_561_string, var_562_int); // 0x7d2 NEW_2
	var_547_string = var_560_string + var_561_string; // 0x7d4 Add2
	var_567_bool = 0; var_568_object = Obj(); var_569_string = ""; // 0x7d5 PushV
	var_568_object = var_534_object; // 0x7d6 Mov
	var_569_string = var_547_string; // 0x7d7 Mov
	func_1943(var_567_bool, var_568_object, var_569_string); // 0x7d8 NEW_2
	var_570_bool = var_567_bool == 0; // 0x7da Not
	if(var_570_bool == 0) goto Label_2014; // 0x7db JumpB
	var_548_int = 0; // 0x7dc MovI
	goto Label_2016; // 0x7dd Jump
	
Label_2016:
	var_571_float = 0; var_572_float = 0; var_573_float = 0; // 0x7e0 PushV
	var_574_int = var_546_int + var_548_int; // 0x7e1 Add
	var_575_float = 100.0; // 0x7e2 PushF
	var_572_float = var_574_int / var_574_int; // 0x7e3 Div2
	var_573_float = 1; // 0x7e4 MovI
	func_2511(var_571_float, var_572_float, var_573_float); // 0x7e5 NEW_2
	var_549_float = var_571_float; // 0x7e6 Mov
	var_577_string = "health"; // 0x7e8 PushS
	GetProperty(var_577_string, var_550_float); // 0x7e9 ObjFunc
	var_578_int = 1; // 0x7eb PushI
	var_579_int = var_578_int - var_549_float; // 0x7ec Sub
	var_551_float = var_535_float * var_579_int; // 0x7ed Mult2
	var_580_string = "health"; // 0x7ee PushS
	var_581_float = 0; var_582_float = 0; var_583_float = 0; var_584_float = 0; // 0x7ef PushV
	var_582_float = var_550_float - var_551_float; // 0x7f0 Sub2
	var_583_float = 0; // 0x7f1 MovI
	var_584_float = 1; // 0x7f2 MovI
	func_2542(var_581_float, var_582_float, var_583_float, var_584_float); // 0x7f3 NEW_2
	SetProperty(var_580_string, var_581_float); // 0x7f5 ObjFunc
	var_587_bool = 0; var_588_object = Obj(); // 0x7f7 PushV
	var_588_object = var_534_object; // 0x7f8 Mov
	func_1938(var_587_bool, var_588_object); // 0x7f9 NEW_2
	if(var_587_bool == 0) goto Label_2048; // 0x7fb JumpB
	var_589_float = 0; // 0x7fc PushV
	var_589_float = -var_551_float; // 0x7fd Neg2
	func_2606(var_589_float); // 0x7fe NEW_2
	
Label_2048:
	var_533_float = var_551_float; // 0x800 Mov
	return 12; // 0x801 Return
	
Label_2014:
	GetProperty(var_547_string, var_548_int); // 0x7de ObjFunc
	
Label_1996:
	var_597_string = "armor"; // 0x7cc PushS
	GetProperty(var_597_string, var_546_int); // 0x7cd ObjFunc
}


func_2495(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x9bf PushV
	self(var_21_object); // 0x9c0 Func
	var_19_object = var_21_object; // 0x9c2 Mov
	return 2; // 0x9c3 Return
}


func_2501(var_47_cvector, var_48_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x9c5 PushV
	var_57_int = var_48_cvector | var_48_cvector; // 0x9c6 Or
	var_56_float = sqrt(var_57_int); // 0x9c7 Sqrt2
	var_58_float = 0.0; // 0x9c8 PushF
	var_59_bool = var_56_float < var_58_float; // 0x9c9 LT
	if(var_59_bool == 0) goto Label_2509; // 0x9ca JumpB
	var_47_cvector = CVector(0.0, 0.0, 0.0); // 0x9cb MovV
	return 2; // 0x9cc Return
	
Label_2509:
	var_47_cvector = var_48_cvector / var_48_cvector; // 0x9cd Div2
	return 2; // 0x9ce Return
}


func_2511(var_571_float, var_572_float, var_573_float)
{
	var_576_bool = var_572_float < var_573_float; // 0x9d0 LT
	if(var_576_bool == 0) goto Label_2516; // 0x9d1 JumpB
	var_571_float = var_572_float; // 0x9d2 Mov
	goto Label_2517; // 0x9d3 Jump
	
Label_2517:
	return 0; // 0x9d5 Return
	
Label_2516:
	var_571_float = var_573_float; // 0x9d4 Mov
}


func_467(var_0_bool, var_519_float, var_520_int)
{
	var_521_object = Obj(); var_522_float = 0; var_523_float = 0; var_524_object = Obj(); var_525_float = 0; var_526_float = 0; // 0x1d3 PushV
	var_527_float = 0.9; // 0x1d4 PushF
	var_528_float = var_519_float * var_527_float; // 0x1d5 Mult
	GetVictim(var_528_float, var_524_object); // 0x1d6 Func
	ReportAttack(var_0_bool); // 0x1d8 Func
	var_529_bool = var_524_object == var_0_bool; // 0x1da Eq
	if(var_529_bool == 0) goto Label_504; // 0x1db JumpB
	var_530_float = 0; var_531_object = Obj(); var_532_int = 0; // 0x1dc PushV
	var_531_object = var_524_object; // 0x1dd Mov
	var_532_int = var_520_int; // 0x1de Mov
	func_154(var_532_int); // 0x1df NEW_2
	var_525_float = var_530_float; // 0x1e0 Mov
	var_533_float = 0; var_534_object = Obj(); var_535_float = 0; var_536_int = 0; // 0x1e2 PushV
	var_534_object = var_524_object; // 0x1e3 Mov
	var_535_float = var_525_float; // 0x1e4 Mov
	var_537_int = 0; var_538_object = Obj(); var_539_int = 0; // 0x1e5 PushV
	var_538_object = var_524_object; // 0x1e6 Mov
	var_539_int = var_520_int; // 0x1e7 Mov
	func_157(var_539_int); // 0x1e8 NEW_2
	var_536_int = var_537_int; // 0x1e9 Mov
	func_1977(var_533_float, var_534_object, var_535_float, var_536_int); // 0x1eb NEW_2
	var_526_float = var_533_float; // 0x1ec Mov
	var_598_int = 0; // 0x1ee PushV
	func_160(var_598_int); // 0x1ef NEW_2
	ReportHit(var_0_bool, var_598_int, var_526_float, var_525_float); // 0x1f1 Func
	var_599_object = Obj(); var_600_float = 0; // 0x1f3 PushV
	var_599_object = var_524_object; // 0x1f4 Mov
	var_600_float = var_526_float; // 0x1f5 Mov
	func_162(var_599_object, var_600_float); // 0x1f6 NEW_2
	
Label_504:
	return 6; // 0x1f8 Return
}


func_2518(var_158_float, var_159_float, var_160_float, var_161_float)
{
	var_162_float = var_160_float * var_160_float; // 0x9d7 Mult
	var_163_int = 4; // 0x9d8 PushI
	var_164_float = var_163_int * var_159_float; // 0x9d9 Mult
	var_165_float = var_164_float * var_161_float; // 0x9da Mult
	var_158_float = var_162_float - var_165_float; // 0x9db Sub2
	return 0; // 0x9dc Return
}


func_2525(var_172_float, var_173_float, var_174_float, var_176_float)
{
	var_177_float = 0; var_178_float = 0; // 0x9dd PushV
	var_179_int = -var_174_float; // 0x9de Neg
	var_180_int = var_179_int - var_176_float; // 0x9df Sub
	var_181_int = 2; // 0x9e0 PushI
	var_182_float = var_181_int * var_173_float; // 0x9e1 Mult
	var_178_float = var_180_int / var_180_int; // 0x9e2 Div2
	var_183_int = 0; // 0x9e3 PushI
	var_184_bool = var_178_float > var_183_int; // 0x9e4 GT
	if(var_184_bool == 0) goto Label_2536; // 0x9e5 JumpB
	var_172_float = var_178_float; // 0x9e6 Mov
	return 2; // 0x9e7 Return
	
Label_2536:
	var_185_int = -var_174_float; // 0x9e8 Neg
	var_186_int = var_185_int + var_176_float; // 0x9e9 Add
	var_187_int = 2; // 0x9ea PushI
	var_188_float = var_187_int * var_173_float; // 0x9eb Mult
	var_172_float = var_186_int / var_186_int; // 0x9ec Div2
	return 2; // 0x9ed Return
}


func_992(var_0_bool, var_1_object, var_297_bool, var_298_object, var_299_float, var_300_float, var_301_bool, var_302_bool)
{
	var_303_bool = 0; var_304_bool = 0; var_305_object = Obj(); var_306_cvector = CVector(0,0,0); var_307_cvector = CVector(0,0,0); var_308_cvector = CVector(0,0,0); var_309_float = 0; var_310_object = Obj(); var_311_bool = 0; var_312_bool = 0; var_313_object = Obj(); var_314_cvector = CVector(0,0,0); var_315_cvector = CVector(0,0,0); var_316_cvector = CVector(0,0,0); var_317_float = 0; var_318_object = Obj(); // 0x3e0 PushV
	var_0_bool = 0; // 0x3e1 TMovB
	var_1_object = var_298_object; // 0x3e2 TMov
	var_312_bool = var_302_bool; // 0x3e3 Mov
	
Label_996:
	var_319_bool = 0; var_320_object = Obj(); // 0x3e4 PushV
	var_320_object = var_298_object; // 0x3e5 Mov
	func_1132(var_319_bool, var_320_object); // 0x3e6 NEW_2
	var_323_bool = var_319_bool == 0; // 0x3e8 Not
	if(var_323_bool == 0) goto Label_1004; // 0x3e9 JumpB
	var_297_bool = 0; // 0x3ea MovB
	return 16; // 0x3eb Return
	
Label_1004:
	GetPosition(var_314_cvector); // 0x3ec ObjFunc
	GetPosition(var_315_cvector); // 0x3ee Func
	var_316_cvector = var_314_cvector - var_315_cvector; // 0x3f0 Sub2
	var_317_float = var_316_cvector | var_316_cvector; // 0x3f1 Or2
	var_324_bool = 0; // 0x3f2 PushV
	var_324_bool = 0; // 0x3f3 MovB
	var_325_int = 0; // 0x3f4 PushI
	var_326_bool = var_300_float > var_325_int; // 0x3f5 GT
	if(var_326_bool == 0) goto Label_1019; // 0x3f6 JumpB
	var_327_float = var_300_float * var_300_float; // 0x3f7 Mult
	var_328_bool = var_317_float > var_327_float; // 0x3f8 GT
	if(var_328_bool == 0) goto Label_1019; // 0x3f9 JumpB
	var_324_bool = 1; // 0x3fa MovB
	
Label_1019:
	if(var_324_bool == 0) goto Label_1024; // 0x3fb JumpB
	Stop(); // 0x3fc Func
	var_297_bool = 0; // 0x3fe MovB
	return 16; // 0x3ff Return
	
Label_1024:
	var_329_float = var_299_float * var_299_float; // 0x400 Mult
	var_330_bool = var_317_float > var_329_float; // 0x401 GT
	if(var_330_bool == 0) goto Label_1086; // 0x402 JumpB
	GetPFPosition(var_314_cvector); // 0x403 ObjFunc
	FindPathTo(var_318_object, var_314_cvector); // 0x405 Func
	var_331_bool = var_318_object != 0; // 0x407 NullNeq
	if(var_331_bool == 0) goto Label_1035; // 0x408 JumpB
	var_313_object = var_318_object; // 0x409 Mov
	var_318_object = 0; // 0x40a SetNull
	
Label_1035:
	var_332_bool = var_313_object != 0; // 0x40b NullNeq
	if(var_332_bool == 0) goto Label_1068; // 0x40c JumpB
	var_333_bool = var_312_bool; // 0x40d Push
	if(var_333_bool == 0) goto Label_1045; // 0x40e JumpB
	var_312_bool = 0; // 0x40f MovB
	RotatePath(var_313_object, var_311_bool); // 0x410 Func
	var_334_bool = var_311_bool == 0; // 0x412 Not
	if(var_334_bool == 0) goto Label_1045; // 0x413 JumpB
	goto Label_1092; // 0x414 Jump
	
Label_1092:
	var_297_bool = !var_0_bool; // 0x444 Not2
	return 16; // 0x445 Return
	
Label_1045:
	var_335_int = 0; // 0x415 PushI
	var_336_float = 0.3; // 0x416 PushF
	SetTimer(var_335_int, var_336_float); // 0x417 Func
	var_337_string = ""; // 0x419 PushV
	func_1139(var_337_string); // 0x41a NEW_2
	var_338_string = ""; // 0x41c PushV
	func_1141(var_338_string); // 0x41d NEW_2
	FollowPath(var_313_object, var_301_bool, var_311_bool, var_337_string, var_338_string); // 0x41f Func
	var_339_bool = var_311_bool == 0; // 0x421 Not
	if(var_339_bool == 0) goto Label_1066; // 0x422 JumpB
	var_340_bool = var_0_bool; // 0x423 PushT
	if(var_340_bool == 0) goto Label_1064; // 0x424 JumpB
	var_313_object = 0; // 0x425 SetNull
	goto Label_1092; // 0x426 Jump
	
Label_1064:
	goto Label_1091; // 0x428 Jump
	
Label_1091:
	goto Label_996; // 0x443 Jump
	
Label_1066:
	var_313_object = 0; // 0x42a SetNull
	goto Label_1084; // 0x42b Jump
	
Label_1084:
	var_318_object = 0; // 0x43c SetNull
	goto Label_1090; // 0x43d Jump
	
Label_1090:
	var_313_object = 0; // 0x442 SetNull
	
Label_1068:
	var_341_int = 0; // 0x42c PushI
	KillTimer(var_341_int); // 0x42d Func
	var_342_float = 0.5; // 0x42f PushF
	Sleep(var_342_float, var_311_bool); // 0x430 Func
	var_343_bool = var_311_bool == 0; // 0x432 Not
	if(var_343_bool == 0) goto Label_1080; // 0x433 JumpB
	var_344_bool = var_0_bool; // 0x434 PushT
	if(var_344_bool == 0) goto Label_1080; // 0x435 JumpB
	var_313_object = 0; // 0x436 SetNull
	goto Label_1092; // 0x437 Jump
	
Label_1080:
	var_345_int = 0; // 0x438 PushI
	var_346_float = 0.3; // 0x439 PushF
	SetTimer(var_345_int, var_346_float); // 0x43a Func
	
Label_1086:
	var_347_int = 0; // 0x43e PushI
	KillTimer(var_347_int); // 0x43f Func
	goto Label_1092; // 0x441 Jump
}


func_2542(var_61_float, var_62_float, var_63_float, var_64_float)
{
	var_65_bool = var_62_float < var_63_float; // 0x9ef LT
	if(var_65_bool == 0) goto Label_2547; // 0x9f0 JumpB
	var_61_float = var_63_float; // 0x9f1 Mov
	return 0; // 0x9f2 Return
	
Label_2547:
	var_66_bool = var_62_float > var_64_float; // 0x9f3 GT
	if(var_66_bool == 0) goto Label_2551; // 0x9f4 JumpB
	var_61_float = var_64_float; // 0x9f5 Mov
	return 0; // 0x9f6 Return
	
Label_2551:
	var_61_float = var_62_float; // 0x9f7 Mov
	return 0; // 0x9f8 Return
}


func_2553(var_70_bool, var_71_float, var_72_float, var_73_float)
{
	var_70_bool = 0; // 0x9fa MovB
	var_74_bool = var_71_float >= var_72_float; // 0x9fb GE
	if(var_74_bool == 0) goto Label_2560; // 0x9fc JumpB
	var_75_bool = var_71_float <= var_73_float; // 0x9fd LE
	if(var_75_bool == 0) goto Label_2560; // 0x9fe JumpB
	var_70_bool = 1; // 0x9ff MovB
	
Label_2560:
	return 0; // 0xa00 Return
}


func_506(var_0_bool, var_486_bool, var_487_float)
{
	var_488_int = 0; var_489_bool = 0; var_490_int = 0; var_491_string = ""; var_492_int = 0; var_493_bool = 0; var_494_int = 0; var_495_string = ""; // 0x1fa PushV
	func_847(var_495_string); // 0x1fc NEW_2
	irand(var_492_int, var_495_string); // 0x1fe Func
	var_496_int = 1; // 0x200 PushI
	var_492_int = var_492_int + var_496_int; // 0x201 Add2
	Face(var_0_bool); // 0x202 Func
	var_497_bool = 1; // 0x204 PushB
	SetAttackState(var_497_bool); // 0x205 Func
	func_2654(); // 0x208 NEW_2
	var_498_string = "all"; // 0x20a PushS
	var_499_string = "attack_begin"; // 0x20b PushS
	var_500_int = var_499_string + var_492_int; // 0x20c Add
	PlayAnimation(var_498_string, var_500_int); // 0x20d Func
	WaitForAnimEnd(); // 0x20f Func
	func_815(var_494_int, var_495_string); // 0x212 NEW_2
	var_516_bool = 0; var_517_object = Obj(); // 0x214 PushV
	var_517_object = var_0_bool; // 0x215 MovT
	func_2122(var_516_bool, var_517_object); // 0x216 NEW_2
	var_518_bool = var_516_bool == 0; // 0x218 Not
	if(var_518_bool == 0) goto Label_542; // 0x219 JumpB
	StopAsync(); // 0x21a Func
	var_486_bool = 0; // 0x21c MovB
	return 8; // 0x21d Return
	
Label_542:
	var_519_float = 0; var_520_int = 0; // 0x21e PushV
	var_519_float = var_487_float; // 0x21f Mov
	var_520_int = var_492_int; // 0x220 Mov
	func_467(var_495_string, var_519_float, var_520_int); // 0x221 NEW_2
	var_622_string = "all"; // 0x223 PushS
	var_623_string = "attack_middle"; // 0x224 PushS
	var_624_int = var_623_string + var_492_int; // 0x225 Add
	HasAnimation(var_493_bool, var_622_string, var_624_int); // 0x226 Func
	var_625_bool = var_493_bool; // 0x228 Push
	if(var_625_bool == 0) goto Label_623; // 0x229 JumpB
	func_2654(); // 0x22b NEW_2
	var_626_string = "all"; // 0x22d PushS
	var_627_string = "attack_middle"; // 0x22e PushS
	var_628_int = var_627_string + var_492_int; // 0x22f Add
	PlayAnimation(var_626_string, var_628_int); // 0x230 Func
	WaitForAnimEnd(); // 0x232 Func
	func_847(var_495_string); // 0x235 NEW_2
	var_629_bool = 0; var_630_object = Obj(); // 0x237 PushV
	var_630_object = var_0_bool; // 0x238 MovT
	func_2122(var_629_bool, var_630_object); // 0x239 NEW_2
	var_631_bool = var_629_bool == 0; // 0x23b Not
	if(var_631_bool == 0) goto Label_577; // 0x23c JumpB
	StopAsync(); // 0x23d Func
	var_486_bool = 0; // 0x23f MovB
	return 8; // 0x240 Return
	
Label_577:
	var_632_float = 0; var_633_int = 0; // 0x241 PushV
	var_632_float = var_487_float; // 0x242 Mov
	var_633_int = var_492_int; // 0x243 Mov
	func_467(var_495_string, var_632_float, var_633_int); // 0x244 NEW_2
	var_494_int = 1; // 0x246 MovI
	
Label_583:
	var_634_string = "attack_middle"; // 0x247 PushS
	var_635_int = var_634_string + var_492_int; // 0x248 Add
	var_636_string = "_"; // 0x249 PushS
	var_637_int = var_635_int + var_636_string; // 0x24a Add
	var_495_string = var_637_int + var_494_int; // 0x24b Add2
	var_638_string = "all"; // 0x24c PushS
	HasAnimation(var_493_bool, var_638_string, var_495_string); // 0x24d Func
	var_639_bool = var_493_bool == 0; // 0x24f Not
	if(var_639_bool == 0) goto Label_594; // 0x250 JumpB
	goto Label_623; // 0x251 Jump
	
Label_623:
	var_640_bool = 0; // 0x26f PushB
	SetAttackState(var_640_bool); // 0x270 Func
	var_641_string = "all"; // 0x272 PushS
	var_642_string = "attack_end"; // 0x273 PushS
	var_643_int = var_642_string + var_492_int; // 0x274 Add
	PlayAnimation(var_641_string, var_643_int); // 0x275 Func
	var_644_bool = 0; // 0x277 PushV
	func_857(var_644_bool); // 0x278 NEW_2
	if(var_644_bool == 0) goto Label_641; // 0x27a JumpB
	var_645_bool = 0; var_646_float = 0; // 0x27b PushV
	var_646_float = 0.45; // 0x27c MovF
	func_645(var_645_bool, var_646_float); // 0x27d NEW_2
	StopAsync(); // 0x27f Func
	
Label_641:
	var_486_bool = 1; // 0x281 MovB
	return 8; // 0x282 Return
	
Label_594:
	func_2654(); // 0x253 NEW_2
	var_654_string = "all"; // 0x255 PushS
	PlayAnimation(var_654_string, var_495_string); // 0x256 Func
	WaitForAnimEnd(); // 0x258 Func
	func_847(var_495_string); // 0x25b NEW_2
	var_655_bool = 0; var_656_object = Obj(); // 0x25d PushV
	var_656_object = var_0_bool; // 0x25e MovT
	func_2122(var_655_bool, var_656_object); // 0x25f NEW_2
	var_657_bool = var_655_bool == 0; // 0x261 Not
	if(var_657_bool == 0) goto Label_615; // 0x262 JumpB
	StopAsync(); // 0x263 Func
	var_486_bool = 0; // 0x265 MovB
	return 8; // 0x266 Return
	
Label_615:
	var_658_float = 0; var_659_int = 0; // 0x267 PushV
	var_658_float = var_487_float; // 0x268 Mov
	var_659_int = var_492_int; // 0x269 Mov
	func_467(var_495_string, var_658_float, var_659_int); // 0x26a NEW_2
	var_660_int = 1; // 0x26c PushI
	var_494_int = var_494_int + var_660_int; // 0x26d Add2
	goto Label_583; // 0x26e Jump
}


