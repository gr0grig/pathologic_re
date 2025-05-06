task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_int = 1; // 0xb9 PushI
	if(var_15_int == 0) goto Label_365; // 0xba JumpB
	func_1214(); // 0xbc NEW_2
	var_17_int = 19748; // 0xbe PushI
	var_18_bool = var_13_cvector == var_17_int; // 0xbf Eq
	if(var_18_bool == 0) goto Label_243; // 0xc0 JumpB
	var_19_bool = 0; var_20_object = Obj(); // 0xc1 PushV
	var_20_object = var_1_object; // 0xc2 MovT
	func_1333(var_20_object); // 0xc3 NEW_2
	if(var_19_bool == 0) goto Label_223; // 0xc5 JumpB
	var_27_object = Obj(); var_28_object = Obj(); // 0xc6 PushV
	var_27_object = var_1_object; // 0xc7 MovT
	var_28_object = var_0_object; // 0xc8 MovT
	func_1327(); // 0xc9 NEW_2
	var_31_string = ""; // 0xcb PushV
	var_31_string = "Neutral"; // 0xcc MovS
	func_162(var_14_bool, var_31_string); // 0xcd NEW_2
	var_48_int = 518656; // 0xcf PushI
	SetMessage(var_48_int); // 0xd0 TObjFunc
	ClearReplies(); // 0xd2 TObjFunc
	var_49_int = 518795; // 0xd4 PushI
	var_50_int = 19900; // 0xd5 PushI
	var_51_int = 19898; // 0xd6 PushI
	AddReply(var_49_int, var_50_int, var_51_int); // 0xd7 TObjFunc
	var_52_int = 518796; // 0xd9 PushI
	var_53_int = 19900; // 0xda PushI
	var_54_int = 19899; // 0xdb PushI
	AddReply(var_52_int, var_53_int, var_54_int); // 0xdc TObjFunc
	return 0; // 0xde Return
	
Label_223:
	var_55_string = ""; // 0xdf PushV
	var_55_string = "Neutral"; // 0xe0 MovS
	func_162(var_14_bool, var_55_string); // 0xe1 NEW_2
	var_56_int = 518660; // 0xe3 PushI
	SetMessage(var_56_int); // 0xe4 TObjFunc
	ClearReplies(); // 0xe6 TObjFunc
	var_57_int = 518661; // 0xe8 PushI
	var_58_int = -1; // 0xe9 PushI
	var_59_int = 19753; // 0xea PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0xeb TObjFunc
	var_60_int = 518800; // 0xed PushI
	var_61_int = -1; // 0xee PushI
	var_62_int = 19903; // 0xef PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0xf0 TObjFunc
	return 0; // 0xf2 Return
	
Label_243:
	var_63_int = 19900; // 0xf3 PushI
	var_64_bool = var_13_cvector == var_63_int; // 0xf4 Eq
	if(var_64_bool == 0) goto Label_266; // 0xf5 JumpB
	var_65_string = ""; // 0xf6 PushV
	var_65_string = "Neutral"; // 0xf7 MovS
	func_162(var_14_bool, var_65_string); // 0xf8 NEW_2
	var_66_int = 518797; // 0xfa PushI
	SetMessage(var_66_int); // 0xfb TObjFunc
	ClearReplies(); // 0xfd TObjFunc
	var_67_int = 518799; // 0xff PushI
	var_68_int = 19750; // 0x100 PushI
	var_69_int = 19902; // 0x101 PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0x102 TObjFunc
	var_70_int = 518798; // 0x104 PushI
	var_71_int = 19907; // 0x105 PushI
	var_72_int = 19901; // 0x106 PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0x107 TObjFunc
	return 0; // 0x109 Return
	
Label_266:
	var_73_int = 19907; // 0x10a PushI
	var_74_bool = var_13_cvector == var_73_int; // 0x10b Eq
	if(var_74_bool == 0) goto Label_289; // 0x10c JumpB
	var_75_string = ""; // 0x10d PushV
	var_75_string = "Neutral"; // 0x10e MovS
	func_162(var_14_bool, var_75_string); // 0x10f NEW_2
	var_76_int = 518804; // 0x111 PushI
	SetMessage(var_76_int); // 0x112 TObjFunc
	ClearReplies(); // 0x114 TObjFunc
	var_77_int = 518805; // 0x116 PushI
	var_78_int = 19750; // 0x117 PushI
	var_79_int = 19908; // 0x118 PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0x119 TObjFunc
	var_80_int = 518806; // 0x11b PushI
	var_81_int = -1; // 0x11c PushI
	var_82_int = 19909; // 0x11d PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x11e TObjFunc
	return 0; // 0x120 Return
	
Label_289:
	var_83_int = 19750; // 0x121 PushI
	var_84_bool = var_13_cvector == var_83_int; // 0x122 Eq
	if(var_84_bool == 0) goto Label_312; // 0x123 JumpB
	var_85_string = ""; // 0x124 PushV
	var_85_string = "Neutral"; // 0x125 MovS
	func_162(var_14_bool, var_85_string); // 0x126 NEW_2
	var_86_int = 518658; // 0x128 PushI
	SetMessage(var_86_int); // 0x129 TObjFunc
	ClearReplies(); // 0x12b TObjFunc
	var_87_int = 518659; // 0x12d PushI
	var_88_int = 19904; // 0x12e PushI
	var_89_int = 19751; // 0x12f PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x130 TObjFunc
	var_90_int = 518802; // 0x132 PushI
	var_91_int = -1; // 0x133 PushI
	var_92_int = 19905; // 0x134 PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x135 TObjFunc
	return 0; // 0x137 Return
	
Label_312:
	var_93_int = 19904; // 0x138 PushI
	var_94_bool = var_13_cvector == var_93_int; // 0x139 Eq
	if(var_94_bool == 0) goto Label_330; // 0x13a JumpB
	var_95_string = ""; // 0x13b PushV
	var_95_string = "Neutral"; // 0x13c MovS
	func_162(var_14_bool, var_95_string); // 0x13d NEW_2
	var_96_int = 518801; // 0x13f PushI
	SetMessage(var_96_int); // 0x140 TObjFunc
	ClearReplies(); // 0x142 TObjFunc
	var_97_int = 518807; // 0x144 PushI
	var_98_int = 19911; // 0x145 PushI
	var_99_int = 19910; // 0x146 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x147 TObjFunc
	return 0; // 0x149 Return
	
Label_330:
	var_100_int = 19911; // 0x14a PushI
	var_101_bool = var_13_cvector == var_100_int; // 0x14b Eq
	if(var_101_bool == 0) goto Label_353; // 0x14c JumpB
	var_102_string = ""; // 0x14d PushV
	var_102_string = "Neutral"; // 0x14e MovS
	func_162(var_14_bool, var_102_string); // 0x14f NEW_2
	var_103_int = 518808; // 0x151 PushI
	SetMessage(var_103_int); // 0x152 TObjFunc
	ClearReplies(); // 0x154 TObjFunc
	var_104_int = 518809; // 0x156 PushI
	var_105_int = -1; // 0x157 PushI
	var_106_int = 19914; // 0x158 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x159 TObjFunc
	var_107_int = 518810; // 0x15b PushI
	var_108_int = -1; // 0x15c PushI
	var_109_int = 19915; // 0x15d PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x15e TObjFunc
	return 0; // 0x160 Return
	
Label_353:
	var_3_string = 1; // 0x161 TMovB
	var_110_bool = 0; // 0x162 PushV
	func_1389(var_110_bool); // 0x163 NEW_2
	if(var_110_bool == 0) goto Label_361; // 0x165 JumpB
	lshStopAnimation(); // 0x166 Func
	goto Label_363; // 0x168 Jump
	
Label_363:
	return 0; // 0x16b Return
	
Label_361:
	StopAnimation(); // 0x169 Func
	
Label_365:
	return 0; // 0x16d Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool)
{
	func_469(var_12_cvector, var_13_bool); // 0x17a NEW_2
	var_17_int = 0; var_18_object = Obj(); // 0x17c PushV
	var_18_object = var_13_bool; // 0x17d Mov
	TaskCall(0); // 0x17e TaskCall
	func_0(var_19_object, var_17_int, var_18_object); // 0x17f NEW_2
	TaskReturn(); // 0x180 TaskReturn
	return 0; // 0x182 Return
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool)
{
	SignalDeath(var_13_bool); // 0x184 Func
	return 0; // 0x186 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_string = "retreat"; // 0x188 PushS
	var_15_bool = var_13_bool == var_14_string; // 0x189 Eq
	if(var_15_bool == 0) goto Label_403; // 0x18a JumpB
	func_469(var_12_cvector, var_13_bool); // 0x18c NEW_2
	TaskCall(3); // 0x18f TaskCall
	func_569(); // 0x190 NEW_2
	TaskReturn(); // 0x191 TaskReturn
	
Label_403:
	return 0; // 0x193 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_int = 10; // 0x1bf PushI
	var_15_bool = var_13_bool == var_14_int; // 0x1c0 Eq
	if(var_15_bool == 0) goto Label_468; // 0x1c1 JumpB
	var_16_bool = 0; // 0x1c2 PushV
	func_431(var_11_object, var_12_cvector, var_13_bool, var_16_bool); // 0x1c3 NEW_2
	if(var_16_bool == 0) goto Label_462; // 0x1c5 JumpB
	var_29_bool = var_2_object == 0; // 0x1c6 Not
	if(var_29_bool == 0) goto Label_461; // 0x1c7 JumpB
	var_30_object = Obj(); // 0x1c8 PushV
	var_30_object = var_4_bool; // 0x1c9 MovT
	func_1203(var_30_object); // 0x1ca NEW_2
	var_2_object = 1; // 0x1cc TMovB
	
Label_461:
	goto Label_468; // 0x1cd Jump
	
Label_468:
	return 0; // 0x1d4 Return
	
Label_462:
	var_37_object = var_2_object; // 0x1ce PushT
	if(var_37_object == 0) goto Label_468; // 0x1cf JumpB
	var_38_string = "head"; // 0x1d0 PushS
	UnlookAsync(var_38_string); // 0x1d1 Func
	var_2_object = 0; // 0x1d3 TMovB
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object)
{
	SignalDeath(var_13_object); // 0x24f Func
	return 0; // 0x251 Return
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_int)
{
	var_14_cvector = CVector(0,0,0); var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_float = 0; // 0x2b9 PushV
	var_22_int = 120; // 0x2ba PushI
	var_23_bool = var_13_int != var_22_int; // 0x2bb Neq
	if(var_23_bool == 0) goto Label_702; // 0x2bc JumpB
	return 8; // 0x2bd Return
	
Label_702:
	var_24_bool = var_0_object == 0; // 0x2be NullEq
	if(var_24_bool == 0) goto Label_711; // 0x2bf JumpB
	Stop(); // 0x2c0 Func
	var_25_int = 1; // 0x2c2 PushI
	KillTimer(var_25_int); // 0x2c3 Func
	var_2_object = 1; // 0x2c5 TMovB
	goto Label_748; // 0x2c6 Jump
	
Label_748:
	return 8; // 0x2ec Return
	
Label_711:
	GetDirection(var_18_cvector); // 0x2c7 Func
	var_26_float = 7000.0; // 0x2c9 PushF
	FindDirLength(var_19_float, var_18_cvector, var_26_float); // 0x2ca Func
	var_27_cvector = CVector(0,0,0); var_28_float = 0; // 0x2cc PushV
	var_28_float = 1.74533; // 0x2cd MovF
	func_594(var_27_cvector, var_28_float); // 0x2ce NEW_2
	var_20_cvector = var_27_cvector; // 0x2cf Mov
	var_21_float = var_20_cvector | var_20_cvector; // 0x2d1 Or2
	var_57_bool = 0; // 0x2d2 PushV
	var_57_bool = 0; // 0x2d3 MovB
	var_58_float = 2500.0; // 0x2d4 PushF
	var_59_bool = var_21_float >= var_58_float; // 0x2d5 GE
	if(var_59_bool == 0) goto Label_741; // 0x2d6 JumpB
	var_60_bool = 0; // 0x2d7 PushV
	var_60_bool = 1; // 0x2d8 MovB
	var_61_float = var_19_float * var_19_float; // 0x2d9 Mult
	var_62_float = 2.25; // 0x2da PushF
	var_63_float = var_61_float * var_62_float; // 0x2db Mult
	var_64_bool = var_21_float >= var_63_float; // 0x2dc GE
	if(var_64_bool == 0) goto Label_739; // 0x2dd JumpB
	var_65_bool = 0; // 0x2de PushV
	func_765(var_60_bool, var_65_bool); // 0x2df NEW_2
	if(var_65_bool == 0) goto Label_739; // 0x2e1 JumpB
	var_60_bool = 0; // 0x2e2 MovB
	
Label_739:
	if(var_60_bool == 0) goto Label_741; // 0x2e3 JumpB
	var_57_bool = 1; // 0x2e4 MovB
	
Label_741:
	if(var_57_bool == 0) goto Label_748; // 0x2e5 JumpB
	Stop(); // 0x2e6 Func
	var_85_cvector = CVector(0,0,0); // 0x2e8 PushV
	func_929(var_85_cvector); // 0x2e9 NEW_2
	var_1_object = var_85_cvector + var_20_cvector; // 0x2eb Add2
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object)
{
	func_749(var_13_object); // 0x2f6 NEW_2
	var_15_object = Obj(); // 0x2f8 PushV
	var_15_object = var_13_object; // 0x2f9 Mov
	func_1434(); // 0x2fa NEW_2
	return 0; // 0x2fc Return
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_bool = 0; // 0x31c PushV
	IsOverrideActive(var_15_bool); // 0x31d Func
	var_16_bool = var_15_bool == 0; // 0x31f Not
	if(var_16_bool == 0) goto Label_805; // 0x320 JumpB
	var_17_object = Obj(); // 0x321 PushV
	var_17_object = var_13_object; // 0x322 Mov
	func_1368(var_17_object); // 0x323 NEW_2
	
Label_805:
	return 2; // 0x325 Return
}


task_4_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_int, var_15_float, var_16_float)
{
	return 0; // 0x39c Return
}


task_4_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_string)
{
	return 0; // 0x39e Return
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object)
{
	return 0; // 0x3a0 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_int, var_15_float, var_16_float)
{
	var_17_object = Obj(); var_18_int = 0; var_19_float = 0; // 0x589 PushV
	var_17_object = var_13_object; // 0x58a Mov
	var_18_int = var_14_int; // 0x58b Mov
	var_19_float = var_15_float; // 0x58c Mov
	func_1000(var_17_object, var_18_int, var_19_float); // 0x58d NEW_2
	return 0; // 0x58f Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_int, var_15_float, var_16_float, var_17_cvector, var_18_cvector)
{
	var_19_object = Obj(); var_20_int = 0; var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); // 0x591 PushV
	var_19_object = var_13_object; // 0x592 Mov
	var_20_int = var_14_int; // 0x593 Mov
	var_21_float = var_15_float; // 0x594 Mov
	var_22_cvector = var_17_cvector; // 0x595 Mov
	var_23_cvector = var_18_cvector; // 0x596 Mov
	func_1068(var_21_float, var_22_cvector, var_23_cvector); // 0x597 NEW_2
	return 0; // 0x599 Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object)
{
	var_14_object = Obj(); // 0x59b PushV
	var_14_object = var_13_object; // 0x59c Mov
	func_1391(var_14_object); // 0x59d NEW_2
	return 0; // 0x59f Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool)
{
	
Label_366:
	var_13_float = 0; var_14_float = 0; // 0x16e PushV
	var_13_float = 300; // 0x16f MovI
	var_14_float = 100; // 0x170 MovI
	func_404(var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_float, var_14_float); // 0x171 NEW_2
	var_75_int = 3; // 0x173 PushI
	Sleep(var_75_int); // 0x174 Func
	goto Label_366; // 0x176 Jump
}


func_0(var_0_object, var_17_int, var_18_object)
{
	var_20_object = Obj(); var_21_bool = 0; var_22_int = 0; var_23_bool = 0; var_24_object = Obj(); var_25_bool = 0; var_26_int = 0; var_27_bool = 0; // 0x0 PushV
	var_0_object = var_18_object; // 0x1 TMov
	var_28_bool = 0; var_29_object = Obj(); var_30_float = 0; // 0x2 PushV
	var_29_object = var_18_object; // 0x3 Mov
	var_30_float = 70.0; // 0x4 MovF
	func_1087(var_29_object, var_30_float); // 0x5 NEW_2
	var_74_bool = var_28_bool == 0; // 0x7 Not
	if(var_74_bool == 0) goto Label_11; // 0x8 JumpB
	var_17_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_24_object); // 0xb Func
	var_75_int = 0; // 0xd PushV
	func_1383(var_75_int); // 0xe NEW_2
	SetNPCName(var_75_int); // 0x10 ObjFunc
	var_76_int = 0; // 0x12 PushV
	func_1381(var_76_int); // 0x13 NEW_2
	SetNPCDescription(var_76_int); // 0x15 ObjFunc
	var_77_string = ""; // 0x17 PushV
	func_1385(var_77_string); // 0x18 NEW_2
	SetPhoto(var_77_string); // 0x1a ObjFunc
	var_78_string = ""; // 0x1c PushV
	func_1387(var_78_string); // 0x1d NEW_2
	SetPhoto2(var_78_string); // 0x1f ObjFunc
	var_79_int = 0; // 0x21 PushV
	func_1345(var_79_int); // 0x22 NEW_2
	SetPlayerName(var_79_int); // 0x24 ObjFunc
	var_26_int = -1; // 0x26 MovI
	IsOverrideActive(var_25_bool); // 0x27 Func
	var_87_bool = var_25_bool; // 0x29 Push
	if(var_87_bool == 0) goto Label_45; // 0x2a JumpB
	var_17_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_24_object); // 0x2d Func
	var_88_object = Obj(); var_89_object = Obj(); // 0x2f PushV
	var_88_object = var_18_object; // 0x30 Mov
	var_89_object = var_24_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_27_bool); // 0x36 ObjFunc
	
Label_56:
	var_157_bool = var_27_bool == 0; // 0x38 Not
	if(var_157_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_27_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_158_object = Obj(); // 0x3f PushV
	var_158_object = var_18_object; // 0x40 Mov
	func_1155(); // 0x41 NEW_2
	StopDialog(var_24_object); // 0x43 Func
	GetReturnValue(var_26_int); // 0x45 ObjFunc
	var_17_int = var_26_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_897(var_51_string)
{
	RemoveRTEnvelope(); // 0x382 Func
	SetDeathState(); // 0x384 Func
	Stop(); // 0x386 Func
	StopAsync(); // 0x388 Func
	StopSecondaryAnimation(); // 0x38a Func
	var_52_string = ""; // 0x38c PushV
	var_52_string = var_51_string; // 0x38d Mov
	func_1221(var_52_string); // 0x38e NEW_2
	var_81_string = "all"; // 0x390 PushS
	PlayAnimation(var_81_string, var_51_string); // 0x391 Func
	WaitForAnimEnd(); // 0x393 Func
	var_82_string = "all"; // 0x395 PushS
	LockAnimationEnd(var_82_string, var_51_string); // 0x396 Func
	RemoveEnvelope(); // 0x398 Func
	return 0; // 0x39a Return
}


func_1155()
{
	var_159_bool = 0; var_160_bool = 0; // 0x483 PushV
	CameraSwitchToNormal(); // 0x484 Func
	var_161_bool = 0; // 0x486 PushV
	func_1389(var_161_bool); // 0x487 NEW_2
	if(var_161_bool == 0) goto Label_1163; // 0x489 JumpB
	goto Label_1171; // 0x48a Jump
	
Label_1171:
	return 2; // 0x493 Return
	
Label_1163:
	var_162_string = "head"; // 0x48b PushS
	HasAnimationTrack(var_160_bool, var_162_string); // 0x48c Func
	var_163_bool = var_160_bool; // 0x48e Push
	if(var_163_bool == 0) goto Label_1171; // 0x48f JumpB
	var_164_string = "head"; // 0x490 PushS
	UnlookAsync(var_164_string); // 0x491 Func
}


func_1286(var_97_int, var_98_string)
{
	var_99_int = 0; var_100_int = 0; // 0x506 PushV
	GetVariable(var_98_string, var_100_int); // 0x507 Func
	var_97_int = var_100_int; // 0x509 Mov
	return 2; // 0x50a Return
}


func_1291(var_22_bool, var_23_string, var_24_string)
{
	var_25_object = Obj(); var_26_object = Obj(); // 0x50b PushV
	FindActor(var_26_object, var_23_string); // 0x50c Func
	var_27_bool = var_26_object == 0; // 0x50e NullEq
	if(var_27_bool == 0) goto Label_1298; // 0x50f JumpB
	var_22_bool = 0; // 0x510 MovB
	return 2; // 0x511 Return
	
Label_1298:
	Trigger(var_26_object, var_24_string); // 0x512 Func
	var_22_bool = 1; // 0x514 MovB
	return 2; // 0x515 Return
}


func_781(var_28_object)
{
	EventDisable(0); // 0x30e EventDisable
	var_29_object = Obj(); // 0x30f PushV
	var_29_object = var_28_object; // 0x310 Mov
	func_806(var_29_object); // 0x311 NEW_2
	var_109_int = 50; // 0x313 PushI
	var_110_int = 40; // 0x314 PushI
	SetRTEnvelope(var_109_int, var_110_int); // 0x315 Func
	EventEnable(0); // 0x317 EventEnable
	
Label_792:
	Hold(); // 0x318 Func
	goto Label_792; // 0x31a Jump
}


func_1172(var_133_string)
{
	var_134_bool = 0; var_135_float = 0; var_136_float = 0; var_137_bool = 0; var_138_float = 0; var_139_float = 0; // 0x494 PushV
	lshHasAnimation(var_137_bool, var_133_string); // 0x495 Func
	var_140_bool = var_137_bool; // 0x497 Push
	if(var_140_bool == 0) goto Label_1183; // 0x498 JumpB
	lshGetAnimTimes(var_133_string, var_138_float, var_139_float); // 0x499 Func
	var_141_bool = 0; // 0x49b PushB
	lshPlayAnimation(var_138_float, var_139_float, var_141_bool); // 0x49c Func
	goto Label_1187; // 0x49e Jump
	
Label_1187:
	return 6; // 0x4a3 Return
	
Label_1183:
	var_142_string = "Can't find lsh animation : "; // 0x49f PushS
	var_143_int = var_142_string + var_133_string; // 0x4a0 Add
	Trace(var_143_int); // 0x4a1 Func
}


func_404(var_0_object, var_1_object, var_2_object, var_3_string, var_12_bool, var_13_float, var_14_float)
{
	var_15_bool = 0; // 0x195 PushV
	func_1082(var_15_bool); // 0x196 NEW_2
	var_18_bool = var_15_bool == 0; // 0x198 Not
	if(var_18_bool == 0) goto Label_411; // 0x199 JumpB
	return 0; // 0x19a Return
	
Label_411:
	var_19_string = "player"; // 0x19b PushS
	FindActor(var_12_bool, var_19_string); // 0x19c Func
	var_2_object = 0; // 0x19e TMovB
	var_3_string = 0; // 0x19f TMovB
	var_0_object = var_13_float; // 0x1a0 TMov
	var_1_object = var_14_float; // 0x1a1 TMov
	var_20_int = 10; // 0x1a2 PushI
	var_21_float = 1.0; // 0x1a3 PushF
	SetTimer(var_20_int, var_21_float); // 0x1a4 Func
	func_483(); // 0x1a7 NEW_2
	var_73_bool = var_3_string == 0; // 0x1a9 Not
	if(var_73_bool == 0) goto Label_430; // 0x1aa JumpB
	var_74_int = 10; // 0x1ab PushI
	KillTimer(var_74_int); // 0x1ac Func
	
Label_430:
	return 0; // 0x1ae Return
}


func_1303(var_44_string, var_45_int)
{
	var_46_string = ""; var_47_string = ""; // 0x517 PushV
	var_47_string = "idle"; // 0x518 MovS
	var_48_int = var_45_int; // 0x519 Push
	if(var_48_int == 0) goto Label_1308; // 0x51a JumpB
	var_47_string = var_47_string + var_45_int; // 0x51b Add2
	
Label_1308:
	var_44_string = var_47_string; // 0x51c Mov
	return 2; // 0x51d Return
}


func_1310(var_38_int)
{
	var_39_int = 0; var_40_bool = 0; var_41_int = 0; var_42_bool = 0; // 0x51e PushV
	var_41_int = 0; // 0x51f MovI
	
Label_1312:
	var_43_string = "all"; // 0x520 PushS
	var_44_string = ""; var_45_int = 0; // 0x521 PushV
	var_45_int = var_41_int; // 0x522 Mov
	func_1303(var_44_string, var_45_int); // 0x523 NEW_2
	HasAnimation(var_42_bool, var_43_string, var_44_string); // 0x525 Func
	var_49_bool = var_42_bool == 0; // 0x527 Not
	if(var_49_bool == 0) goto Label_1322; // 0x528 JumpB
	goto Label_1325; // 0x529 Jump
	
Label_1325:
	var_38_int = var_41_int; // 0x52d Mov
	return 4; // 0x52e Return
	
Label_1322:
	var_50_int = 1; // 0x52a PushI
	var_41_int = var_41_int + var_50_int; // 0x52b Add2
	goto Label_1312; // 0x52c Jump
}


func_929(var_85_cvector)
{
	var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x3a1 PushV
	GetPosition(var_87_cvector); // 0x3a2 Func
	var_85_cvector = var_87_cvector; // 0x3a4 Mov
	return 2; // 0x3a5 Return
}


func_162(var_2_object, var_107_string)
{
	var_108_bool = 0; // 0xa3 PushV
	func_1389(var_108_bool); // 0xa4 NEW_2
	var_109_bool = var_108_bool == 0; // 0xa6 Not
	if(var_109_bool == 0) goto Label_169; // 0xa7 JumpB
	return 0; // 0xa8 Return
	
Label_169:
	var_110_bool = var_107_string == var_2_object; // 0xa9 Eq
	if(var_110_bool == 0) goto Label_172; // 0xaa JumpB
	return 0; // 0xab Return
	
Label_172:
	var_111_string = ""; var_112_bool = 0; // 0xac PushV
	var_111_string = var_107_string; // 0xad Mov
	var_113_string = ""; // 0xae PushS
	var_114_bool = var_107_string == var_113_string; // 0xaf Eq
	if(var_114_bool == 0) goto Label_179; // 0xb0 JumpB
	var_112_bool = 0; // 0xb1 MovB
	goto Label_180; // 0xb2 Jump
	
Label_180:
	func_1188(var_111_string, var_112_bool); // 0xb4 NEW_2
	var_2_object = var_107_string; // 0xb6 TMov
	return 0; // 0xb7 Return
	
Label_179:
	var_112_bool = 1; // 0xb3 MovB
}


func_1188(var_111_string, var_112_bool)
{
	var_115_bool = 0; var_116_float = 0; var_117_float = 0; var_118_bool = 0; var_119_float = 0; var_120_float = 0; // 0x4a4 PushV
	lshHasAnimation(var_118_bool, var_111_string); // 0x4a5 Func
	var_121_bool = var_118_bool; // 0x4a7 Push
	if(var_121_bool == 0) goto Label_1198; // 0x4a8 JumpB
	lshGetAnimTimes(var_111_string, var_119_float, var_120_float); // 0x4a9 Func
	lshPlayAnimation(var_119_float, var_120_float, var_112_bool); // 0x4ab Func
	goto Label_1202; // 0x4ad Jump
	
Label_1202:
	return 6; // 0x4b2 Return
	
Label_1198:
	var_122_string = "Can't find lsh animation : "; // 0x4ae PushS
	var_123_int = var_122_string + var_111_string; // 0x4af Add
	Trace(var_123_int); // 0x4b0 Func
}


func_934(var_47_cvector)
{
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); // 0x3a6 PushV
	GetPosition(var_51_cvector); // 0x3a7 Func
	GetPosition(var_52_cvector); // 0x3a9 ObjFunc
	var_47_cvector = var_52_cvector - var_51_cvector; // 0x3ab Sub2
	return 4; // 0x3ac Return
}


func_806(var_29_object)
{
	var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; var_35_object = Obj(); var_36_bool = 0; var_37_bool = 0; var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_string = ""; var_45_object = Obj(); var_46_bool = 0; var_47_bool = 0; var_48_float = 0; var_49_cvector = CVector(0,0,0); // 0x326 PushV
	var_50_bool = var_29_object == 0; // 0x327 NullEq
	if(var_50_bool == 0) goto Label_814; // 0x328 JumpB
	var_51_string = ""; // 0x329 PushV
	var_51_string = "fdie"; // 0x32a MovS
	func_897(var_51_string); // 0x32b NEW_2
	goto Label_896; // 0x32d Jump
	
Label_896:
	return 20; // 0x380 Return
	
Label_814:
	GetPosition(var_40_cvector); // 0x32e ObjFunc
	GetPosition(var_41_cvector); // 0x330 Func
	GetDirection(var_42_cvector); // 0x332 Func
	var_43_cvector = var_41_cvector - var_40_cvector; // 0x334 Sub2
	var_83_float = GetByIndex(var_43_cvector, 0); // 0x335 PushE
	var_84_float = GetByIndex(var_42_cvector, 0); // 0x336 PushE
	var_85_float = var_83_float * var_84_float; // 0x337 Mult
	var_86_float = GetByIndex(var_43_cvector, 2); // 0x338 PushE
	var_87_float = GetByIndex(var_42_cvector, 2); // 0x339 PushE
	var_88_float = var_86_float * var_87_float; // 0x33a Mult
	var_89_int = var_85_float + var_88_float; // 0x33b Add
	var_90_int = 0; // 0x33c PushI
	var_91_bool = var_89_int >= var_90_int; // 0x33d GE
	if(var_91_bool == 0) goto Label_833; // 0x33e JumpB
	var_44_string = "fdie"; // 0x33f MovS
	goto Label_834; // 0x340 Jump
	
Label_834:
	RemoveRTEnvelope(); // 0x342 Func
	SetDeathState(); // 0x344 Func
	Stop(); // 0x346 Func
	StopAsync(); // 0x348 Func
	var_45_object = var_29_object; // 0x34a Mov
	var_92_string = "GetScriptProperty"; // 0x34b PushS
	var_93_int = 2; // 0x34c PushI
	var_94_bool = IsFuncExist(var_29_object, var_92_string, var_93_int); // 0x34d FuncExist
	if(var_94_bool == 0) goto Label_858; // 0x34e JumpB
	var_95_string = "Owner"; // 0x34f PushS
	HasScriptProperty(var_46_bool, var_95_string); // 0x350 ObjFunc
	var_96_bool = var_46_bool; // 0x352 Push
	if(var_96_bool == 0) goto Label_858; // 0x353 JumpB
	var_97_string = "Owner"; // 0x354 PushS
	GetScriptProperty(var_45_object, var_97_string); // 0x355 ObjFunc
	var_98_bool = var_45_object == 0; // 0x357 NullEq
	if(var_98_bool == 0) goto Label_858; // 0x358 JumpB
	var_45_object = var_29_object; // 0x359 Mov
	
Label_858:
	var_99_string = "@GetEyesHeight"; // 0x35a PushS
	var_100_int = 1; // 0x35b PushI
	var_101_bool = IsFuncExist(var_45_object, var_99_string, var_100_int); // 0x35c FuncExist
	if(var_101_bool == 0) goto Label_873; // 0x35d JumpB
	GetEyesHeight(var_48_float); // 0x35e ObjFunc
	var_49_cvector = CVector(0.0, 0.0, 0.0); // 0x360 MovV
	var_102_float = GetByIndex(var_49_cvector, 1); // 0x361 PushE
	var_102_float = var_48_float; // 0x362 Mov
	SetByIndex(var_49_cvector, 1) = var_102_float; // 0x363 PopE
	var_103_string = "head"; // 0x364 PushS
	LookAsync(var_29_object, var_103_string, var_49_cvector); // 0x365 Func
	var_47_bool = 1; // 0x367 MovB
	goto Label_874; // 0x368 Jump
	
Label_874:
	var_104_string = ""; // 0x36a PushV
	var_104_string = var_44_string; // 0x36b Mov
	func_1221(var_104_string); // 0x36c NEW_2
	var_105_string = "all"; // 0x36e PushS
	PlayAnimation(var_105_string, var_44_string); // 0x36f Func
	WaitForAnimEnd(); // 0x371 Func
	var_106_bool = var_47_bool; // 0x373 Push
	if(var_106_bool == 0) goto Label_890; // 0x374 JumpB
	StopAsync(); // 0x375 Func
	var_107_string = "head"; // 0x377 PushS
	UnlookAsync(var_107_string); // 0x378 Func
	
Label_890:
	var_108_string = "all"; // 0x37a PushS
	LockAnimationEnd(var_108_string, var_44_string); // 0x37b Func
	RemoveEnvelope(); // 0x37d Func
	var_45_object = 0; // 0x37f SetNull
	
Label_873:
	var_47_bool = 0; // 0x369 MovB
	
Label_833:
	var_44_string = "bdie"; // 0x341 MovS
}


func_1068(var_19_object, var_22_cvector, var_23_cvector)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); // 0x42c PushV
	GetScene(var_26_object); // 0x42d Func
	var_28_string = "scripted"; // 0x42f PushS
	var_29_string = "blood_dir.xml"; // 0x430 PushS
	AddActorByType(var_27_object, var_28_string, var_26_object, var_22_cvector, var_23_cvector, var_29_string); // 0x431 Func
	var_30_object = Obj(); // 0x433 PushV
	var_30_object = var_19_object; // 0x434 Mov
	func_956(var_30_object); // 0x435 NEW_2
	return 4; // 0x437 Return
}


func_941(var_20_float)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); // 0x3ad PushV
	GetPosition(var_25_cvector); // 0x3ae Func
	GetPosition(var_26_cvector); // 0x3b0 ObjFunc
	var_27_cvector = var_26_cvector - var_25_cvector; // 0x3b2 Sub2
	var_20_float = var_27_cvector | var_27_cvector; // 0x3b3 Or2
	return 6; // 0x3b4 Return
}


func_1327()
{
	var_105_string = "oob5GathererWife1"; // 0x530 PushS
	var_106_int = 1; // 0x531 PushI
	SetVariable(var_105_string, var_106_int); // 0x532 Func
	return 0; // 0x534 Return
}


func_431(var_0_object, var_1_object, var_4_bool, var_16_bool)
{
	var_17_float = 0; var_18_float = 0; // 0x1af PushV
	var_19_bool = var_4_bool == 0; // 0x1b0 NullEq
	if(var_19_bool == 0) goto Label_436; // 0x1b1 JumpB
	var_16_bool = 0; // 0x1b2 MovB
	return 2; // 0x1b3 Return
	
Label_436:
	var_20_float = 0; var_21_object = Obj(); // 0x1b4 PushV
	var_21_object = var_4_bool; // 0x1b5 MovT
	func_941(var_21_object); // 0x1b6 NEW_2
	var_18_float = sqrt(var_20_float); // 0x1b8 Sqrt2
	var_28_object = var_2_object; // 0x1b9 PushT
	if(var_28_object == 0) goto Label_444; // 0x1ba JumpB
	var_18_float = var_18_float - var_1_object; // 0x1bb Sub2
	
Label_444:
	var_16_bool = var_18_float < var_0_object; // 0x1bc LT2
	return 2; // 0x1bd Return
}


func_562(var_63_bool)
{
	var_63_bool = 1; // 0x232 MovB
	return 0; // 0x233 Return
}


func_1203(var_30_object)
{
	var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_float = 0; var_34_cvector = CVector(0,0,0); // 0x4b3 PushV
	GetEyesHeight(var_33_float); // 0x4b4 ObjFunc
	var_34_cvector = CVector(0.0, 0.0, 0.0); // 0x4b6 MovV
	var_35_float = GetByIndex(var_34_cvector, 1); // 0x4b7 PushE
	var_35_float = var_33_float; // 0x4b8 Mov
	SetByIndex(var_34_cvector, 1) = var_35_float; // 0x4b9 PopE
	var_36_string = "head"; // 0x4ba PushS
	LookAsync(var_30_object, var_36_string, var_34_cvector); // 0x4bb Func
	return 4; // 0x4bd Return
}


func_564()
{
	StopAnimation(); // 0x234 Func
	StopGroup0(); // 0x236 Func
	return 0; // 0x238 Return
}


func_1333(var_95_bool)
{
	var_97_int = 0; var_98_string = ""; // 0x536 PushV
	var_98_string = "oob5GathererWife1"; // 0x537 MovS
	func_1286(var_97_int, var_98_string); // 0x538 NEW_2
	var_101_int = 0; // 0x53a PushI
	var_102_bool = var_97_int == var_101_int; // 0x53b Eq
	if(var_102_bool == 0) goto Label_1343; // 0x53c JumpB
	var_95_bool = 1; // 0x53d MovB
	return 0; // 0x53e Return
	
Label_1343:
	var_95_bool = 0; // 0x53f MovB
	return 0; // 0x540 Return
}


func_949(var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj(); // 0x3b5 PushV
	var_31_string = "player"; // 0x3b6 PushS
	FindActor(var_30_object, var_31_string); // 0x3b7 Func
	var_28_object = var_30_object; // 0x3b9 Mov
	return 2; // 0x3ba Return
}


func_569()
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x239 PushV
	GetScene(var_23_object); // 0x23a Func
	var_24_object = Obj(); // 0x23c PushV
	func_1262(var_24_object); // 0x23d NEW_2
	RemoveStationaryActor(var_24_object); // 0x23f ObjFunc
	
Label_577:
	var_27_object = Obj(); // 0x241 PushV
	var_28_object = Obj(); // 0x242 PushV
	func_949(var_28_object); // 0x243 NEW_2
	var_27_object = var_28_object; // 0x244 Mov
	func_624(var_21_bool, var_22_object, var_23_object, var_27_object); // 0x246 NEW_2
	var_100_int = 1; // 0x248 PushI
	Sleep(var_100_int); // 0x249 Func
	goto Label_577; // 0x24b Jump
}


func_1082(var_15_bool)
{
	var_16_bool = 0; var_17_bool = 0; // 0x43a PushV
	IsLoaded(var_17_bool); // 0x43b Func
	var_15_bool = var_17_bool; // 0x43d Mov
	return 2; // 0x43e Return
}


func_956(var_30_object)
{
	var_31_bool = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_string = ""; var_38_bool = 0; var_39_int = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_string = ""; // 0x3bc PushV
	var_45_bool = var_30_object == 0; // 0x3bd NullEq
	if(var_45_bool == 0) goto Label_960; // 0x3be JumpB
	return 14; // 0x3bf Return
	
Label_960:
	IsDead(var_38_bool); // 0x3c0 Func
	var_46_bool = var_38_bool; // 0x3c2 Push
	if(var_46_bool == 0) goto Label_965; // 0x3c3 JumpB
	return 14; // 0x3c4 Return
	
Label_965:
	GetSecondaryAnimationType(var_39_int); // 0x3c5 Func
	var_47_int = 0; // 0x3c7 PushI
	var_48_bool = var_39_int < var_47_int; // 0x3c8 LT
	if(var_48_bool == 0) goto Label_971; // 0x3c9 JumpB
	return 14; // 0x3ca Return
	
Label_971:
	GetPosition(var_40_cvector); // 0x3cb ObjFunc
	GetPosition(var_41_cvector); // 0x3cd Func
	GetDirection(var_42_cvector); // 0x3cf Func
	var_43_cvector = var_41_cvector - var_40_cvector; // 0x3d1 Sub2
	var_49_float = GetByIndex(var_43_cvector, 0); // 0x3d2 PushE
	var_50_float = GetByIndex(var_42_cvector, 0); // 0x3d3 PushE
	var_51_float = var_49_float * var_50_float; // 0x3d4 Mult
	var_52_float = GetByIndex(var_43_cvector, 2); // 0x3d5 PushE
	var_53_float = GetByIndex(var_42_cvector, 2); // 0x3d6 PushE
	var_54_float = var_52_float * var_53_float; // 0x3d7 Mult
	var_55_int = var_51_float + var_54_float; // 0x3d8 Add
	var_56_int = 0; // 0x3d9 PushI
	var_57_bool = var_55_int >= var_56_int; // 0x3da GE
	if(var_57_bool == 0) goto Label_990; // 0x3db JumpB
	var_44_string = "fhit"; // 0x3dc MovS
	goto Label_991; // 0x3dd Jump
	
Label_991:
	var_58_string = "hit_react"; // 0x3df PushS
	var_59_string = "1"; // 0x3e0 PushS
	var_60_int = var_44_string + var_59_string; // 0x3e1 Add
	var_61_string = "2"; // 0x3e2 PushS
	var_62_int = var_44_string + var_61_string; // 0x3e3 Add
	var_63_int = -10; // 0x3e4 PushI
	FadeSecondaryAnimation(var_58_string, var_60_int, var_62_int, var_63_int); // 0x3e5 Func
	return 14; // 0x3e7 Return
	
Label_990:
	var_44_string = "bhit"; // 0x3de MovS
}


func_1214()
{
	var_16_bool = 0; // 0x4be PushV
	func_1389(var_16_bool); // 0x4bf NEW_2
	if(var_16_bool == 0) goto Label_1220; // 0x4c1 JumpB
	lshStopSpeech(); // 0x4c2 Func
	
Label_1220:
	return 0; // 0x4c4 Return
}


func_1087(var_28_bool, var_30_float)
{
	var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; // 0x43f PushV
	GetPosition(var_41_cvector); // 0x440 ObjFunc
	GetEyesHeight(var_40_float); // 0x442 ObjFunc
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x444 PushE
	var_49_float = var_49_float + var_40_float; // 0x445 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x446 PopE
	GetPosition(var_42_cvector); // 0x447 Func
	GetEyesHeight(var_40_float); // 0x449 Func
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x44b PushE
	var_50_float = var_50_float + var_40_float; // 0x44c Add2
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x44d PopE
	var_43_cvector = var_41_cvector - var_42_cvector; // 0x44e Sub2
	var_51_float = GetByIndex(var_43_cvector, 1); // 0x44f PushE
	var_51_float = 0; // 0x450 MovI
	SetByIndex(var_43_cvector, 1) = var_51_float; // 0x451 PopE
	var_52_int = var_43_cvector | var_43_cvector; // 0x452 Or
	var_53_float = sqrt(var_52_int); // 0x453 Sqrt
	var_43_cvector = var_43_cvector / var_43_cvector; // 0x454 Div2
	var_44_cvector = -var_43_cvector; // 0x455 Neg2
	var_54_float = var_43_cvector * var_30_float; // 0x456 Mult
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); // 0x457 PushV
	var_57_cvector = CVector(0.0, 1.0, 0.0); // 0x458 PushVec
	var_56_cvector = var_44_cvector ^ var_57_cvector; // 0x459 Xor2
	func_1268(var_55_cvector, var_56_cvector); // 0x45a NEW_2
	var_63_int = 25; // 0x45c PushI
	var_64_float = var_55_cvector * var_63_int; // 0x45d Mult
	var_65_int = var_54_float + var_64_float; // 0x45e Add
	var_66_cvector = CVector(0.0, 10.0, 0.0); // 0x45f PushVec
	var_45_cvector = var_65_int - var_66_cvector; // 0x460 Sub2
	var_46_cvector = var_42_cvector + var_45_cvector; // 0x461 Add2
	IsOverrideActive(var_47_bool); // 0x462 Func
	var_67_bool = var_47_bool; // 0x464 Push
	if(var_67_bool == 0) goto Label_1128; // 0x465 JumpB
	var_28_bool = 0; // 0x466 MovB
	return 18; // 0x467 Return
	
Label_1128:
	StopWorld(); // 0x468 Func
	CameraTransit(var_46_cvector, var_44_cvector); // 0x46a Func
	var_68_float = GetByIndex(var_45_cvector, 0); // 0x46c PushE
	var_69_float = GetByIndex(var_45_cvector, 2); // 0x46d PushE
	Rotate(var_68_float, var_69_float); // 0x46e Func
	var_70_bool = 0; // 0x470 PushV
	func_1389(var_70_bool); // 0x471 NEW_2
	if(var_70_bool == 0) goto Label_1141; // 0x473 JumpB
	goto Label_1149; // 0x474 Jump
	
Label_1149:
	CameraWaitForPlayFinish(); // 0x47d Func
	ResumeWorld(); // 0x47f Func
	var_28_bool = 1; // 0x481 MovB
	return 18; // 0x482 Return
	
Label_1141:
	var_71_string = "head"; // 0x475 PushS
	HasAnimationTrack(var_48_bool, var_71_string); // 0x476 Func
	var_72_bool = var_48_bool; // 0x478 Push
	if(var_72_bool == 0) goto Label_1149; // 0x479 JumpB
	var_73_string = "head"; // 0x47a PushS
	LookAsyncCamera(var_73_string); // 0x47b Func
}


func_1345(var_79_int)
{
	var_80_int = 0; var_81_int = 0; // 0x541 PushV
	var_82_string = "branch"; // 0x542 PushS
	GetVariable(var_82_string, var_81_int); // 0x543 Func
	var_83_int = 0; // 0x545 PushI
	var_84_bool = var_81_int == var_83_int; // 0x546 Eq
	if(var_84_bool == 0) goto Label_1355; // 0x547 JumpB
	var_79_int = 1; // 0x548 MovI
	return 2; // 0x549 Return
	
Label_1355:
	var_85_int = 1; // 0x54b PushI
	var_86_bool = var_81_int == var_85_int; // 0x54c Eq
	if(var_86_bool == 0) goto Label_1360; // 0x54d JumpB
	var_79_int = 2; // 0x54e MovI
	return 2; // 0x54f Return
	
Label_1360:
	var_79_int = 3; // 0x550 MovI
	return 2; // 0x551 Return
}


func_1221(var_52_string)
{
	var_53_bool = 0; var_54_int = 0; var_55_bool = 0; var_56_int = 0; var_57_bool = 0; var_58_float = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_bool = 0; var_62_int = 0; var_63_bool = 0; var_64_int = 0; var_65_bool = 0; var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); // 0x4c5 PushV
	IsExisting3DSound(var_61_bool, var_52_string); // 0x4c6 Func
	var_69_bool = var_61_bool == 0; // 0x4c8 Not
	if(var_69_bool == 0) goto Label_1246; // 0x4c9 JumpB
	var_62_int = 0; // 0x4ca MovI
	
Label_1227:
	var_70_int = 1; // 0x4cb PushI
	var_71_int = var_62_int + var_70_int; // 0x4cc Add
	var_72_int = var_52_string + var_71_int; // 0x4cd Add
	IsExisting3DSound(var_63_bool, var_72_int); // 0x4ce Func
	var_73_bool = var_63_bool == 0; // 0x4d0 Not
	if(var_73_bool == 0) goto Label_1235; // 0x4d1 JumpB
	goto Label_1238; // 0x4d2 Jump
	
Label_1238:
	var_74_bool = var_62_int == 0; // 0x4d6 Not
	if(var_74_bool == 0) goto Label_1241; // 0x4d7 JumpB
	return 16; // 0x4d8 Return
	
Label_1241:
	irand(var_64_int, var_62_int); // 0x4d9 Func
	var_75_int = 1; // 0x4db PushI
	var_76_int = var_64_int + var_75_int; // 0x4dc Add
	var_52_string = var_52_string + var_76_int; // 0x4dd Add2
	
Label_1246:
	Is3DSoundLoaded(var_65_bool, var_52_string); // 0x4de Func
	var_77_bool = var_65_bool; // 0x4e0 Push
	if(var_77_bool == 0) goto Label_1261; // 0x4e1 JumpB
	GetEyesHeight(var_66_float); // 0x4e2 Func
	GetDirection(var_67_cvector); // 0x4e4 Func
	var_78_int = 50; // 0x4e6 PushI
	var_68_cvector = var_67_cvector * var_78_int; // 0x4e7 Mult2
	var_79_float = GetByIndex(var_68_cvector, 1); // 0x4e8 PushE
	var_79_float = var_79_float + var_66_float; // 0x4e9 Add2
	SetByIndex(var_68_cvector, 1) = var_79_float; // 0x4ea PopE
	PlayGlobalSound(var_52_string, var_68_cvector); // 0x4eb Func
	
Label_1261:
	return 16; // 0x4ed Return
	
Label_1235:
	var_80_int = 1; // 0x4d3 PushI
	var_62_int = var_62_int + var_80_int; // 0x4d4 Add2
	goto Label_1227; // 0x4d5 Jump
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object; // 0x4b TMov
	var_1_object = var_88_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_94_int = 1; // 0x4e PushI
	if(var_94_int == 0) goto Label_132; // 0x4f JumpB
	var_95_bool = 0; var_96_object = Obj(); // 0x50 PushV
	var_96_object = var_1_object; // 0x51 MovT
	func_1333(var_96_object); // 0x52 NEW_2
	if(var_95_bool == 0) goto Label_110; // 0x54 JumpB
	var_103_object = Obj(); var_104_object = Obj(); // 0x55 PushV
	var_103_object = var_1_object; // 0x56 MovT
	var_104_object = var_0_object; // 0x57 MovT
	func_1327(); // 0x58 NEW_2
	var_107_string = ""; // 0x5a PushV
	var_107_string = "Neutral"; // 0x5b MovS
	func_162(var_89_object, var_107_string); // 0x5c NEW_2
	var_124_int = 518656; // 0x5e PushI
	SetMessage(var_124_int); // 0x5f TObjFunc
	ClearReplies(); // 0x61 TObjFunc
	var_125_int = 518795; // 0x63 PushI
	var_126_int = 19900; // 0x64 PushI
	var_127_int = 19898; // 0x65 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x66 TObjFunc
	var_128_int = 518796; // 0x68 PushI
	var_129_int = 19900; // 0x69 PushI
	var_130_int = 19899; // 0x6a PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x6b TObjFunc
	goto Label_132; // 0x6d Jump
	
Label_132:
	var_131_bool = 0; // 0x84 PushV
	func_1389(var_131_bool); // 0x85 NEW_2
	if(var_131_bool == 0) goto Label_147; // 0x87 JumpB
	
Label_136:
	lshWaitForAnimEnd(); // 0x88 Func
	var_132_string = var_3_string; // 0x8a PushT
	if(var_132_string == 0) goto Label_141; // 0x8b JumpB
	goto Label_146; // 0x8c Jump
	
Label_146:
	goto Label_161; // 0x92 Jump
	
Label_161:
	return 0; // 0xa1 Return
	
Label_141:
	var_133_string = ""; // 0x8d PushV
	var_133_string = var_2_object; // 0x8e MovT
	func_1172(var_133_string); // 0x8f NEW_2
	goto Label_136; // 0x91 Jump
	
Label_147:
	var_144_string = "all"; // 0x93 PushS
	var_145_string = "idle"; // 0x94 PushS
	PlayAnimation(var_144_string, var_145_string); // 0x95 Func
	
Label_151:
	WaitForAnimEnd(); // 0x97 Func
	var_146_string = var_3_string; // 0x99 PushT
	if(var_146_string == 0) goto Label_156; // 0x9a JumpB
	goto Label_161; // 0x9b Jump
	
Label_156:
	var_147_string = "all"; // 0x9c PushS
	var_148_string = "idle"; // 0x9d PushS
	PlayAnimation(var_147_string, var_148_string); // 0x9e Func
	goto Label_151; // 0xa0 Jump
	
Label_110:
	var_149_string = ""; // 0x6e PushV
	var_149_string = "Neutral"; // 0x6f MovS
	func_162(var_89_object, var_149_string); // 0x70 NEW_2
	var_150_int = 518660; // 0x72 PushI
	SetMessage(var_150_int); // 0x73 TObjFunc
	ClearReplies(); // 0x75 TObjFunc
	var_151_int = 518661; // 0x77 PushI
	var_152_int = -1; // 0x78 PushI
	var_153_int = 19753; // 0x79 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x7a TObjFunc
	var_154_int = 518800; // 0x7c PushI
	var_155_int = -1; // 0x7d PushI
	var_156_int = 19903; // 0x7e PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x7f TObjFunc
	goto Label_132; // 0x81 Jump
}


func_594(var_27_cvector, var_28_float)
{
	var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_float = 0; // 0x252 PushV
	GetPosition(var_35_cvector); // 0x253 Func
	GetPosition(var_36_cvector); // 0x255 TObjFunc
	GetDirection(var_37_cvector); // 0x257 Func
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); // 0x259 PushV
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0x25a PushV
	var_44_cvector = var_35_cvector - var_36_cvector; // 0x25b Sub2
	func_1268(var_43_cvector, var_44_cvector); // 0x25c NEW_2
	var_50_float = 0.75; // 0x25e PushF
	var_51_float = var_37_cvector * var_50_float; // 0x25f Mult
	var_42_cvector = var_43_cvector + var_51_float; // 0x260 Add2
	func_1268(var_41_cvector, var_42_cvector); // 0x261 NEW_2
	var_38_cvector = var_41_cvector; // 0x262 Mov
	var_52_int = 32; // 0x264 PushI
	var_53_float = 7000.0; // 0x265 PushF
	FindLongestDir(var_39_cvector, var_40_float, var_38_cvector, var_28_float, var_52_int, var_53_float); // 0x266 Func
	var_54_int = 100; // 0x268 PushI
	var_40_float = var_40_float - var_54_int; // 0x269 Sub2
	var_55_int = 0; // 0x26a PushI
	var_56_bool = var_40_float < var_55_int; // 0x26b LT
	if(var_56_bool == 0) goto Label_622; // 0x26c JumpB
	var_40_float = 0; // 0x26d MovI
	
Label_622:
	var_27_cvector = var_39_cvector * var_40_float; // 0x26e Mult2
	return 12; // 0x26f Return
}


func_1362(var_18_int)
{
	var_19_int = 0; var_20_int = 0; // 0x552 PushV
	var_21_string = "branch"; // 0x553 PushS
	GetVariable(var_21_string, var_20_int); // 0x554 Func
	var_18_int = var_20_int; // 0x556 Mov
	return 2; // 0x557 Return
}


func_469(var_2_object, var_3_string)
{
	func_564(); // 0x1d6 NEW_2
	var_16_int = 10; // 0x1d8 PushI
	KillTimer(var_16_int); // 0x1d9 Func
	var_17_object = var_2_object; // 0x1db PushT
	if(var_17_object == 0) goto Label_481; // 0x1dc JumpB
	var_18_string = "head"; // 0x1dd PushS
	UnlookAsync(var_18_string); // 0x1de Func
	var_2_object = 0; // 0x1e0 TMovB
	
Label_481:
	var_3_string = 1; // 0x1e1 TMovB
	return 0; // 0x1e2 Return
}


func_1368(var_17_object)
{
	var_18_int = 0; // 0x559 PushV
	func_1362(var_18_int); // 0x55a NEW_2
	var_22_int = 1; // 0x55c PushI
	var_23_bool = var_18_int == var_22_int; // 0x55d Eq
	if(var_23_bool == 0) goto Label_1378; // 0x55e JumpB
	WorkWithCorpse(var_17_object); // 0x55f Func
	goto Label_1380; // 0x561 Jump
	
Label_1380:
	return 0; // 0x564 Return
	
Label_1378:
	Barter(var_17_object); // 0x562 Func
}


func_483()
{
	var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_float = 0; var_35_bool = 0; // 0x1e3 PushV
	WaitForAnimEnd(); // 0x1e4 Func
	var_36_bool = 0; // 0x1e6 PushV
	func_1082(var_36_bool); // 0x1e7 NEW_2
	var_37_bool = var_36_bool == 0; // 0x1e9 Not
	if(var_37_bool == 0) goto Label_492; // 0x1ea JumpB
	return 14; // 0x1eb Return
	
Label_492:
	var_38_int = 0; // 0x1ec PushV
	func_1310(var_38_int); // 0x1ed NEW_2
	var_29_int = var_38_int; // 0x1ee Mov
	var_30_int = 0; // 0x1f0 MovI
	
Label_497:
	var_51_bool = 0; // 0x1f1 PushV
	var_51_bool = 0; // 0x1f2 MovB
	var_52_int = 5; // 0x1f3 PushI
	var_53_bool = var_30_int < var_52_int; // 0x1f4 LT
	if(var_53_bool == 0) goto Label_507; // 0x1f5 JumpB
	var_54_bool = 0; // 0x1f6 PushV
	func_1082(var_54_bool); // 0x1f7 NEW_2
	if(var_54_bool == 0) goto Label_507; // 0x1f9 JumpB
	var_51_bool = 1; // 0x1fa MovB
	
Label_507:
	if(var_51_bool == 0) goto Label_559; // 0x1fb JumpB
	var_55_int = 3; // 0x1fc PushI
	irand(var_31_int, var_55_int); // 0x1fd Func
	var_56_int = 0; // 0x1ff PushI
	var_57_bool = var_31_int == var_56_int; // 0x200 Eq
	if(var_57_bool == 0) goto Label_531; // 0x201 JumpB
	var_58_int = var_29_int; // 0x202 Push
	if(var_58_int == 0) goto Label_530; // 0x203 JumpB
	irand(var_32_int, var_29_int); // 0x204 Func
	var_59_string = "all"; // 0x206 PushS
	var_60_string = ""; var_61_int = 0; // 0x207 PushV
	var_61_int = var_32_int; // 0x208 Mov
	func_1303(var_60_string, var_61_int); // 0x209 NEW_2
	PlayAnimation(var_59_string, var_60_string); // 0x20b Func
	WaitForAnimEnd(var_33_bool); // 0x20d Func
	var_62_bool = var_33_bool == 0; // 0x20f Not
	if(var_62_bool == 0) goto Label_530; // 0x210 JumpB
	goto Label_559; // 0x211 Jump
	
Label_559:
	ResetAAS(); // 0x22f Func
	return 14; // 0x231 Return
	
Label_530:
	goto Label_548; // 0x212 Jump
	
Label_548:
	var_63_bool = 0; // 0x224 PushV
	func_562(var_63_bool); // 0x225 NEW_2
	var_64_bool = var_63_bool == 0; // 0x227 Not
	if(var_64_bool == 0) goto Label_554; // 0x228 JumpB
	goto Label_559; // 0x229 Jump
	
Label_554:
	ResetAAS(); // 0x22a Func
	var_65_int = 1; // 0x22c PushI
	var_30_int = var_30_int + var_65_int; // 0x22d Add2
	goto Label_497; // 0x22e Jump
	
Label_531:
	var_66_int = 1; // 0x213 PushI
	var_67_bool = var_31_int == var_66_int; // 0x214 Eq
	if(var_67_bool == 0) goto Label_545; // 0x215 JumpB
	var_68_int = 4; // 0x216 PushI
	rand(var_34_float, var_68_int); // 0x217 Func
	var_69_int = 1; // 0x219 PushI
	var_70_int = var_34_float + var_69_int; // 0x21a Add
	Sleep(var_70_int, var_35_bool); // 0x21b Func
	var_71_bool = var_35_bool == 0; // 0x21d Not
	if(var_71_bool == 0) goto Label_544; // 0x21e JumpB
	goto Label_559; // 0x21f Jump
	
Label_544:
	goto Label_548; // 0x220 Jump
	
Label_545:
	var_72_int = var_30_int; // 0x221 Push
	if(var_72_int == 0) goto Label_548; // 0x222 JumpB
	goto Label_559; // 0x223 Jump
}


func_1381(var_76_int)
{
	var_76_int = 518607; // 0x565 MovI
	return 0; // 0x566 Return
}


func_1383(var_75_int)
{
	var_75_int = 518606; // 0x567 MovI
	return 0; // 0x568 Return
}


func_1000(var_17_object, var_18_int, var_19_float)
{
	var_20_cvector = CVector(0,0,0); var_21_object = Obj(); var_22_int = 0; var_23_bool = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_int = 0; var_27_int = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_object = Obj(); var_31_int = 0; var_32_bool = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_int = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); // 0x3e8 PushV
	var_38_bool = 0; // 0x3e9 PushV
	var_38_bool = 0; // 0x3ea MovB
	var_39_bool = 0; // 0x3eb PushV
	var_39_bool = 0; // 0x3ec MovB
	var_40_object = var_17_object; // 0x3ed Push
	if(var_40_object == 0) goto Label_1011; // 0x3ee JumpB
	var_41_int = 4; // 0x3ef PushI
	var_42_bool = var_18_int != var_41_int; // 0x3f0 Neq
	if(var_42_bool == 0) goto Label_1011; // 0x3f1 JumpB
	var_39_bool = 1; // 0x3f2 MovB
	
Label_1011:
	if(var_39_bool == 0) goto Label_1016; // 0x3f3 JumpB
	var_43_int = 5; // 0x3f4 PushI
	var_44_bool = var_18_int != var_43_int; // 0x3f5 Neq
	if(var_44_bool == 0) goto Label_1016; // 0x3f6 JumpB
	var_38_bool = 1; // 0x3f7 MovB
	
Label_1016:
	if(var_38_bool == 0) goto Label_1063; // 0x3f8 JumpB
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x3f9 PushV
	var_47_cvector = CVector(0,0,0); var_48_object = Obj(); // 0x3fa PushV
	var_48_object = var_17_object; // 0x3fb Mov
	func_934(var_48_object); // 0x3fc NEW_2
	var_46_cvector = var_47_cvector; // 0x3fd Mov
	func_1268(var_45_cvector, var_46_cvector); // 0x3ff NEW_2
	var_29_cvector = var_45_cvector; // 0x400 Mov
	CreateVectorVector(var_30_object); // 0x402 Func
	var_31_int = 1; // 0x404 MovI
	
Label_1029:
	var_58_string = "hit"; // 0x405 PushS
	var_59_int = var_58_string + var_31_int; // 0x406 Add
	GetGeometryLocator(var_59_int, var_32_bool, var_33_cvector, var_34_cvector); // 0x407 Func
	var_60_bool = var_32_bool == 0; // 0x409 Not
	if(var_60_bool == 0) goto Label_1036; // 0x40a JumpB
	goto Label_1045; // 0x40b Jump
	
Label_1045:
	size(var_35_int); // 0x415 ObjFunc
	var_61_int = var_35_int; // 0x417 Push
	if(var_61_int == 0) goto Label_1062; // 0x418 JumpB
	irand(var_36_int, var_35_int); // 0x419 Func
	get(var_37_cvector, var_36_int); // 0x41b ObjFunc
	var_62_object = Obj(); var_63_int = 0; var_64_float = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); // 0x41d PushV
	var_62_object = var_17_object; // 0x41e Mov
	var_63_int = var_18_int; // 0x41f Mov
	var_64_float = var_19_float; // 0x420 Mov
	var_65_cvector = var_37_cvector; // 0x421 Mov
	var_66_cvector = -var_29_cvector; // 0x422 Neg2
	func_1068(var_64_float, var_65_cvector, var_66_cvector); // 0x423 NEW_2
	return 18; // 0x425 Return
	
Label_1062:
	var_30_object = 0; // 0x426 SetNull
	
Label_1063:
	var_107_object = Obj(); // 0x427 PushV
	var_107_object = var_17_object; // 0x428 Mov
	func_956(var_107_object); // 0x429 NEW_2
	return 18; // 0x42b Return
	
Label_1036:
	var_108_int = var_34_cvector | var_29_cvector; // 0x40c Or
	var_109_float = 0.70711; // 0x40d PushF
	var_110_bool = var_108_int >= var_109_float; // 0x40e GE
	if(var_110_bool == 0) goto Label_1042; // 0x40f JumpB
	add(var_33_cvector); // 0x410 ObjFunc
	
Label_1042:
	var_111_int = 1; // 0x412 PushI
	var_31_int = var_31_int + var_111_int; // 0x413 Add2
	goto Label_1029; // 0x414 Jump
}


func_1385(var_77_string)
{
	var_77_string = "ui/NPC_Citizen2.png"; // 0x569 MovS
	return 0; // 0x56a Return
}


func_1387(var_78_string)
{
	var_78_string = "ui/NPC_Citizen2_b.png"; // 0x56b MovS
	return 0; // 0x56c Return
}


func_1389(var_70_bool)
{
	var_70_bool = 0; // 0x56d MovB
	return 0; // 0x56e Return
}


func_1262(var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x4ee PushV
	self(var_19_object); // 0x4ef Func
	var_17_object = var_19_object; // 0x4f1 Mov
	return 2; // 0x4f2 Return
}


func_749(var_2_object)
{
	Stop(); // 0x2ed Func
	var_14_int = 120; // 0x2ef PushI
	KillTimer(var_14_int); // 0x2f0 Func
	var_2_object = 1; // 0x2f2 TMovB
	return 0; // 0x2f3 Return
}


func_624(var_0_object, var_1_object, var_2_object, var_27_object)
{
	var_32_cvector = CVector(0,0,0); var_33_float = 0; var_34_bool = 0; var_35_cvector = CVector(0,0,0); var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_float = 0; var_39_bool = 0; var_40_cvector = CVector(0,0,0); var_41_float = 0; // 0x270 PushV
	var_0_object = var_27_object; // 0x271 TMov
	var_42_cvector = CVector(0,0,0); var_43_float = 0; // 0x272 PushV
	var_43_float = 1.74533; // 0x273 MovF
	func_594(var_42_cvector, var_43_float); // 0x274 NEW_2
	var_37_cvector = var_42_cvector; // 0x275 Mov
	var_38_float = var_37_cvector | var_37_cvector; // 0x277 Or2
	var_72_float = 2500.0; // 0x278 PushF
	var_73_bool = var_38_float < var_72_float; // 0x279 LT
	if(var_73_bool == 0) goto Label_653; // 0x27a JumpB
	var_74_cvector = CVector(0,0,0); var_75_float = 0; // 0x27b PushV
	var_75_float = 2.61799; // 0x27c MovF
	func_594(var_74_cvector, var_75_float); // 0x27d NEW_2
	var_37_cvector = var_74_cvector; // 0x27e Mov
	var_38_float = var_37_cvector | var_37_cvector; // 0x280 Or2
	var_76_float = 2500.0; // 0x281 PushF
	var_77_bool = var_38_float < var_76_float; // 0x282 LT
	if(var_77_bool == 0) goto Label_653; // 0x283 JumpB
	var_78_string = "Can't retreat, distance: "; // 0x284 PushS
	var_79_float = sqrt(var_38_float); // 0x285 Sqrt
	var_80_int = var_78_string + var_79_float; // 0x286 Add
	Trace(var_80_int); // 0x287 Func
	var_81_float = 0.5; // 0x289 PushF
	Sleep(var_81_float); // 0x28a Func
	return 10; // 0x28c Return
	
Label_653:
	var_82_float = GetByIndex(var_37_cvector, 0); // 0x28d PushE
	var_83_float = GetByIndex(var_37_cvector, 2); // 0x28e PushE
	Rotate(var_82_float, var_83_float); // 0x28f Func
	var_84_cvector = CVector(0,0,0); // 0x291 PushV
	func_929(var_84_cvector); // 0x292 NEW_2
	var_1_object = var_84_cvector + var_37_cvector; // 0x294 Add2
	var_87_int = 120; // 0x295 PushI
	var_88_float = 0.5; // 0x296 PushF
	SetTimer(var_87_int, var_88_float); // 0x297 Func
	var_2_object = 0; // 0x299 TMovB
	
Label_666:
	var_89_int = 1; // 0x29a PushI
	MovePoint(var_89_int, var_89_int, var_39_bool); // 0x29b Func
	var_90_bool = var_39_bool; // 0x29d Push
	if(var_90_bool == 0) goto Label_694; // 0x29e JumpB
	var_91_bool = var_0_object == 0; // 0x29f NullEq
	if(var_91_bool == 0) goto Label_675; // 0x2a0 JumpB
	goto Label_696; // 0x2a1 Jump
	
Label_696:
	return 10; // 0x2b8 Return
	
Label_675:
	var_92_cvector = CVector(0,0,0); var_93_float = 0; // 0x2a3 PushV
	var_93_float = 2.61799; // 0x2a4 MovF
	func_594(var_92_cvector, var_93_float); // 0x2a5 NEW_2
	var_40_cvector = var_92_cvector; // 0x2a6 Mov
	var_41_float = var_40_cvector | var_40_cvector; // 0x2a8 Or2
	var_94_float = 2500.0; // 0x2a9 PushF
	var_95_bool = var_41_float >= var_94_float; // 0x2aa GE
	if(var_95_bool == 0) goto Label_693; // 0x2ab JumpB
	var_96_cvector = CVector(0,0,0); // 0x2ac PushV
	func_929(var_96_cvector); // 0x2ad NEW_2
	var_1_object = var_96_cvector + var_40_cvector; // 0x2af Add2
	var_97_int = 120; // 0x2b0 PushI
	var_98_float = 0.5; // 0x2b1 PushF
	SetTimer(var_97_int, var_98_float); // 0x2b2 Func
	goto Label_694; // 0x2b4 Jump
	
Label_694:
	var_99_bool = var_2_object == 0; // 0x2b6 Not
	if(var_99_bool == 0) goto Label_666; // 0x2b7 JumpB
	
Label_693:
	goto Label_696; // 0x2b5 Jump
}


func_1391(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x56f PushV
	GetScene(var_16_object); // 0x570 Func
	var_17_object = Obj(); // 0x572 PushV
	func_1262(var_17_object); // 0x573 NEW_2
	RemoveStationaryActor(var_17_object); // 0x575 ObjFunc
	var_20_string = "b5q01NudeDead"; // 0x577 PushS
	var_21_bool = 1; // 0x578 PushB
	SetVariable(var_20_string, var_21_bool); // 0x579 Func
	var_22_bool = 0; var_23_string = ""; var_24_string = ""; // 0x57b PushV
	var_23_string = "quest_b5_01"; // 0x57c MovS
	var_24_string = "gwife_dead"; // 0x57d MovS
	func_1291(var_22_bool, var_23_string, var_24_string); // 0x57e NEW_2
	var_28_object = Obj(); // 0x580 PushV
	var_28_object = var_14_object; // 0x581 Mov
	TaskCall(4); // 0x582 TaskCall
	func_781(var_28_object); // 0x583 NEW_2
	TaskReturn(); // 0x584 TaskReturn
	return 2; // 0x586 Return
}


func_1268(var_45_cvector, var_46_cvector)
{
	var_53_float = 0; var_54_float = 0; // 0x4f4 PushV
	var_55_int = var_46_cvector | var_46_cvector; // 0x4f5 Or
	var_54_float = sqrt(var_55_int); // 0x4f6 Sqrt2
	var_56_float = 0.0; // 0x4f7 PushF
	var_57_bool = var_54_float < var_56_float; // 0x4f8 LT
	if(var_57_bool == 0) goto Label_1276; // 0x4f9 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x4fa MovV
	return 2; // 0x4fb Return
	
Label_1276:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x4fc Div2
	return 2; // 0x4fd Return
}


func_765(var_0_object, var_65_bool)
{
	var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); // 0x2fd PushV
	GetDirection(var_68_cvector); // 0x2fe Func
	var_70_cvector = CVector(0,0,0); var_71_object = Obj(); // 0x300 PushV
	var_71_object = var_0_object; // 0x301 MovT
	func_934(var_71_object); // 0x302 NEW_2
	var_69_cvector = var_70_cvector; // 0x303 Mov
	var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x305 PushV
	var_77_cvector = var_68_cvector; // 0x306 Mov
	var_78_cvector = var_69_cvector; // 0x307 Mov
	func_1278(var_76_float, var_77_cvector, var_78_cvector); // 0x308 NEW_2
	var_84_float = -0.34202; // 0x30a PushF
	var_65_bool = var_76_float >= var_84_float; // 0x30b GE2
	return 4; // 0x30c Return
}


func_1278(var_76_float, var_77_cvector, var_78_cvector)
{
	var_79_int = var_77_cvector | var_78_cvector; // 0x4ff Or
	var_80_int = var_77_cvector | var_77_cvector; // 0x500 Or
	var_81_int = var_78_cvector | var_78_cvector; // 0x501 Or
	var_82_float = var_80_int * var_81_int; // 0x502 Mult
	var_83_float = sqrt(var_82_float); // 0x503 Sqrt
	var_76_float = var_79_int / var_79_int; // 0x504 Div2
	return 0; // 0x505 Return
}


