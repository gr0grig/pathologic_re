task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_int = 1; // 0xb4 PushI
	if(var_15_int == 0) goto Label_377; // 0xb5 JumpB
	func_1267(); // 0xb7 NEW_2
	var_17_int = 19925; // 0xb9 PushI
	var_18_bool = var_14_bool == var_17_int; // 0xba Eq
	if(var_18_bool == 0) goto Label_193; // 0xbb JumpB
	var_19_object = Obj(); var_20_object = Obj(); // 0xbc PushV
	var_19_object = var_1_object; // 0xbd MovT
	var_20_object = var_0_object; // 0xbe MovT
	func_1436(); // 0xbf NEW_2
	
Label_193:
	var_27_int = 19761; // 0xc1 PushI
	var_28_bool = var_14_bool == var_27_int; // 0xc2 Eq
	if(var_28_bool == 0) goto Label_201; // 0xc3 JumpB
	var_29_object = Obj(); var_30_object = Obj(); // 0xc4 PushV
	var_29_object = var_1_object; // 0xc5 MovT
	var_30_object = var_0_object; // 0xc6 MovT
	func_1436(); // 0xc7 NEW_2
	
Label_201:
	var_31_int = 20903; // 0xc9 PushI
	var_32_bool = var_14_bool == var_31_int; // 0xca Eq
	if(var_32_bool == 0) goto Label_209; // 0xcb JumpB
	var_33_object = Obj(); var_34_object = Obj(); // 0xcc PushV
	var_33_object = var_1_object; // 0xcd MovT
	var_34_object = var_0_object; // 0xce MovT
	func_1436(); // 0xcf NEW_2
	
Label_209:
	var_35_int = 19760; // 0xd1 PushI
	var_36_bool = var_13_cvector == var_35_int; // 0xd2 Eq
	if(var_36_bool == 0) goto Label_257; // 0xd3 JumpB
	var_37_bool = 0; var_38_object = Obj(); // 0xd4 PushV
	var_38_object = var_1_object; // 0xd5 MovT
	func_1449(var_38_object); // 0xd6 NEW_2
	if(var_37_bool == 0) goto Label_237; // 0xd8 JumpB
	var_45_object = Obj(); var_46_object = Obj(); // 0xd9 PushV
	var_45_object = var_1_object; // 0xda MovT
	var_46_object = var_0_object; // 0xdb MovT
	func_1443(); // 0xdc NEW_2
	var_49_string = ""; // 0xde PushV
	var_49_string = "Neutral"; // 0xdf MovS
	func_157(var_14_bool, var_49_string); // 0xe0 NEW_2
	var_66_int = 518668; // 0xe2 PushI
	SetMessage(var_66_int); // 0xe3 TObjFunc
	ClearReplies(); // 0xe5 TObjFunc
	var_67_int = 518670; // 0xe7 PushI
	var_68_int = 19916; // 0xe8 PushI
	var_69_int = 19762; // 0xe9 PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0xea TObjFunc
	return 0; // 0xec Return
	
Label_237:
	var_70_string = ""; // 0xed PushV
	var_70_string = "Neutral"; // 0xee MovS
	func_157(var_14_bool, var_70_string); // 0xef NEW_2
	var_71_int = 519748; // 0xf1 PushI
	SetMessage(var_71_int); // 0xf2 TObjFunc
	ClearReplies(); // 0xf4 TObjFunc
	var_72_int = 519749; // 0xf6 PushI
	var_73_int = -1; // 0xf7 PushI
	var_74_int = 20903; // 0xf8 PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0xf9 TObjFunc
	var_75_int = 519750; // 0xfb PushI
	var_76_int = -1; // 0xfc PushI
	var_77_int = 20904; // 0xfd PushI
	AddReply(var_75_int, var_76_int, var_77_int); // 0xfe TObjFunc
	return 0; // 0x100 Return
	
Label_257:
	var_78_int = 19916; // 0x101 PushI
	var_79_bool = var_13_cvector == var_78_int; // 0x102 Eq
	if(var_79_bool == 0) goto Label_275; // 0x103 JumpB
	var_80_string = ""; // 0x104 PushV
	var_80_string = "Neutral"; // 0x105 MovS
	func_157(var_14_bool, var_80_string); // 0x106 NEW_2
	var_81_int = 518811; // 0x108 PushI
	SetMessage(var_81_int); // 0x109 TObjFunc
	ClearReplies(); // 0x10b TObjFunc
	var_82_int = 518812; // 0x10d PushI
	var_83_int = 19918; // 0x10e PushI
	var_84_int = 19917; // 0x10f PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x110 TObjFunc
	return 0; // 0x112 Return
	
Label_275:
	var_85_int = 19926; // 0x113 PushI
	var_86_bool = var_13_cvector == var_85_int; // 0x114 Eq
	if(var_86_bool == 0) goto Label_278; // 0x115 JumpB
	
Label_278:
	var_87_int = 19928; // 0x116 PushI
	var_88_bool = var_13_cvector == var_87_int; // 0x117 Eq
	if(var_88_bool == 0) goto Label_296; // 0x118 JumpB
	var_89_string = ""; // 0x119 PushV
	var_89_string = "Neutral"; // 0x11a MovS
	func_157(var_14_bool, var_89_string); // 0x11b NEW_2
	var_90_int = 518823; // 0x11d PushI
	SetMessage(var_90_int); // 0x11e TObjFunc
	ClearReplies(); // 0x120 TObjFunc
	var_91_int = 518824; // 0x122 PushI
	var_92_int = 19930; // 0x123 PushI
	var_93_int = 19929; // 0x124 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x125 TObjFunc
	return 0; // 0x127 Return
	
Label_296:
	var_94_int = 19930; // 0x128 PushI
	var_95_bool = var_13_cvector == var_94_int; // 0x129 Eq
	if(var_95_bool == 0) goto Label_319; // 0x12a JumpB
	var_96_string = ""; // 0x12b PushV
	var_96_string = "Neutral"; // 0x12c MovS
	func_157(var_14_bool, var_96_string); // 0x12d NEW_2
	var_97_int = 518825; // 0x12f PushI
	SetMessage(var_97_int); // 0x130 TObjFunc
	ClearReplies(); // 0x132 TObjFunc
	var_98_int = 518826; // 0x134 PushI
	var_99_int = -1; // 0x135 PushI
	var_100_int = 19931; // 0x136 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x137 TObjFunc
	var_101_int = 518827; // 0x139 PushI
	var_102_int = -1; // 0x13a PushI
	var_103_int = 19932; // 0x13b PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x13c TObjFunc
	return 0; // 0x13e Return
	
Label_319:
	var_104_int = 19918; // 0x13f PushI
	var_105_bool = var_13_cvector == var_104_int; // 0x140 Eq
	if(var_105_bool == 0) goto Label_342; // 0x141 JumpB
	var_106_string = ""; // 0x142 PushV
	var_106_string = "Neutral"; // 0x143 MovS
	func_157(var_14_bool, var_106_string); // 0x144 NEW_2
	var_107_int = 518813; // 0x146 PushI
	SetMessage(var_107_int); // 0x147 TObjFunc
	ClearReplies(); // 0x149 TObjFunc
	var_108_int = 518815; // 0x14b PushI
	var_109_int = 19921; // 0x14c PushI
	var_110_int = 19920; // 0x14d PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x14e TObjFunc
	var_111_int = 518669; // 0x150 PushI
	var_112_int = -1; // 0x151 PushI
	var_113_int = 19761; // 0x152 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x153 TObjFunc
	return 0; // 0x155 Return
	
Label_342:
	var_114_int = 19921; // 0x156 PushI
	var_115_bool = var_13_cvector == var_114_int; // 0x157 Eq
	if(var_115_bool == 0) goto Label_365; // 0x158 JumpB
	var_116_string = ""; // 0x159 PushV
	var_116_string = "Neutral"; // 0x15a MovS
	func_157(var_14_bool, var_116_string); // 0x15b NEW_2
	var_117_int = 518816; // 0x15d PushI
	SetMessage(var_117_int); // 0x15e TObjFunc
	ClearReplies(); // 0x160 TObjFunc
	var_118_int = 518819; // 0x162 PushI
	var_119_int = -1; // 0x163 PushI
	var_120_int = 19924; // 0x164 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x165 TObjFunc
	var_121_int = 518820; // 0x167 PushI
	var_122_int = -1; // 0x168 PushI
	var_123_int = 19925; // 0x169 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x16a TObjFunc
	return 0; // 0x16c Return
	
Label_365:
	var_3_string = 1; // 0x16d TMovB
	var_124_bool = 0; // 0x16e PushV
	func_1505(var_124_bool); // 0x16f NEW_2
	if(var_124_bool == 0) goto Label_373; // 0x171 JumpB
	lshStopAnimation(); // 0x172 Func
	goto Label_375; // 0x174 Jump
	
Label_375:
	return 0; // 0x177 Return
	
Label_373:
	StopAnimation(); // 0x175 Func
	
Label_377:
	return 0; // 0x179 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool)
{
	func_487(var_12_cvector, var_13_bool); // 0x186 NEW_2
	var_17_int = 0; var_18_object = Obj(); // 0x188 PushV
	var_18_object = var_13_bool; // 0x189 Mov
	TaskCall(0); // 0x18a TaskCall
	func_0(var_19_object, var_17_int, var_18_object); // 0x18b NEW_2
	TaskReturn(); // 0x18c TaskReturn
	return 0; // 0x18e Return
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool)
{
	func_487(var_12_cvector, var_13_bool); // 0x191 NEW_2
	TaskCall(3); // 0x194 TaskCall
	func_587(); // 0x195 NEW_2
	TaskReturn(); // 0x196 TaskReturn
	return 0; // 0x198 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_string = "retreat"; // 0x19a PushS
	var_15_bool = var_13_bool == var_14_string; // 0x19b Eq
	if(var_15_bool == 0) goto Label_421; // 0x19c JumpB
	func_487(var_12_cvector, var_13_bool); // 0x19e NEW_2
	TaskCall(3); // 0x1a1 TaskCall
	func_587(); // 0x1a2 NEW_2
	TaskReturn(); // 0x1a3 TaskReturn
	
Label_421:
	return 0; // 0x1a5 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_int = 10; // 0x1d1 PushI
	var_15_bool = var_13_bool == var_14_int; // 0x1d2 Eq
	if(var_15_bool == 0) goto Label_486; // 0x1d3 JumpB
	var_16_bool = 0; // 0x1d4 PushV
	func_449(var_11_object, var_12_cvector, var_13_bool, var_16_bool); // 0x1d5 NEW_2
	if(var_16_bool == 0) goto Label_480; // 0x1d7 JumpB
	var_29_bool = var_2_object == 0; // 0x1d8 Not
	if(var_29_bool == 0) goto Label_479; // 0x1d9 JumpB
	var_30_object = Obj(); // 0x1da PushV
	var_30_object = var_4_bool; // 0x1db MovT
	func_1256(var_30_object); // 0x1dc NEW_2
	var_2_object = 1; // 0x1de TMovB
	
Label_479:
	goto Label_486; // 0x1df Jump
	
Label_486:
	return 0; // 0x1e6 Return
	
Label_480:
	var_37_object = var_2_object; // 0x1e0 PushT
	if(var_37_object == 0) goto Label_486; // 0x1e1 JumpB
	var_38_string = "head"; // 0x1e2 PushS
	UnlookAsync(var_38_string); // 0x1e3 Func
	var_2_object = 0; // 0x1e5 TMovB
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_int)
{
	var_14_cvector = CVector(0,0,0); var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_float = 0; // 0x2c7 PushV
	var_22_int = 120; // 0x2c8 PushI
	var_23_bool = var_13_int != var_22_int; // 0x2c9 Neq
	if(var_23_bool == 0) goto Label_716; // 0x2ca JumpB
	return 8; // 0x2cb Return
	
Label_716:
	var_24_bool = var_0_object == 0; // 0x2cc NullEq
	if(var_24_bool == 0) goto Label_725; // 0x2cd JumpB
	Stop(); // 0x2ce Func
	var_25_int = 1; // 0x2d0 PushI
	KillTimer(var_25_int); // 0x2d1 Func
	var_2_object = 1; // 0x2d3 TMovB
	goto Label_762; // 0x2d4 Jump
	
Label_762:
	return 8; // 0x2fa Return
	
Label_725:
	GetDirection(var_18_cvector); // 0x2d5 Func
	var_26_float = 7000.0; // 0x2d7 PushF
	FindDirLength(var_19_float, var_18_cvector, var_26_float); // 0x2d8 Func
	var_27_cvector = CVector(0,0,0); var_28_float = 0; // 0x2da PushV
	var_28_float = 1.74533; // 0x2db MovF
	func_608(var_27_cvector, var_28_float); // 0x2dc NEW_2
	var_20_cvector = var_27_cvector; // 0x2dd Mov
	var_21_float = var_20_cvector | var_20_cvector; // 0x2df Or2
	var_57_bool = 0; // 0x2e0 PushV
	var_57_bool = 0; // 0x2e1 MovB
	var_58_float = 2500.0; // 0x2e2 PushF
	var_59_bool = var_21_float >= var_58_float; // 0x2e3 GE
	if(var_59_bool == 0) goto Label_755; // 0x2e4 JumpB
	var_60_bool = 0; // 0x2e5 PushV
	var_60_bool = 1; // 0x2e6 MovB
	var_61_float = var_19_float * var_19_float; // 0x2e7 Mult
	var_62_float = 2.25; // 0x2e8 PushF
	var_63_float = var_61_float * var_62_float; // 0x2e9 Mult
	var_64_bool = var_21_float >= var_63_float; // 0x2ea GE
	if(var_64_bool == 0) goto Label_753; // 0x2eb JumpB
	var_65_bool = 0; // 0x2ec PushV
	func_779(var_60_bool, var_65_bool); // 0x2ed NEW_2
	if(var_65_bool == 0) goto Label_753; // 0x2ef JumpB
	var_60_bool = 0; // 0x2f0 MovB
	
Label_753:
	if(var_60_bool == 0) goto Label_755; // 0x2f1 JumpB
	var_57_bool = 1; // 0x2f2 MovB
	
Label_755:
	if(var_57_bool == 0) goto Label_762; // 0x2f3 JumpB
	Stop(); // 0x2f4 Func
	var_85_cvector = CVector(0,0,0); // 0x2f6 PushV
	func_943(var_85_cvector); // 0x2f7 NEW_2
	var_1_object = var_85_cvector + var_20_cvector; // 0x2f9 Add2
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object)
{
	func_763(var_13_object); // 0x304 NEW_2
	var_15_object = Obj(); // 0x306 PushV
	var_15_object = var_13_object; // 0x307 Mov
	func_1568(); // 0x308 NEW_2
	return 0; // 0x30a Return
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_bool = 0; // 0x32a PushV
	IsOverrideActive(var_15_bool); // 0x32b Func
	var_16_bool = var_15_bool == 0; // 0x32d Not
	if(var_16_bool == 0) goto Label_819; // 0x32e JumpB
	var_17_object = Obj(); // 0x32f PushV
	var_17_object = var_13_object; // 0x330 Mov
	func_1484(var_17_object); // 0x331 NEW_2
	
Label_819:
	return 2; // 0x333 Return
}


task_4_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_int, var_15_float, var_16_float)
{
	return 0; // 0x3aa Return
}


task_4_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_string)
{
	return 0; // 0x3ac Return
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object)
{
	return 0; // 0x3ae Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_int, var_15_float, var_16_float)
{
	var_17_object = Obj(); var_18_int = 0; var_19_float = 0; // 0x602 PushV
	var_17_object = var_13_object; // 0x603 Mov
	var_18_int = var_14_int; // 0x604 Mov
	var_19_float = var_15_float; // 0x605 Mov
	func_1053(var_17_object, var_18_int, var_19_float); // 0x606 NEW_2
	return 0; // 0x608 Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_int, var_15_float, var_16_float, var_17_cvector, var_18_cvector)
{
	var_19_object = Obj(); var_20_int = 0; var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); // 0x60a PushV
	var_19_object = var_13_object; // 0x60b Mov
	var_20_int = var_14_int; // 0x60c Mov
	var_21_float = var_15_float; // 0x60d Mov
	var_22_cvector = var_17_cvector; // 0x60e Mov
	var_23_cvector = var_18_cvector; // 0x60f Mov
	func_1121(var_21_float, var_22_cvector, var_23_cvector); // 0x610 NEW_2
	return 0; // 0x612 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_string)
{
	var_15_float = 0; var_16_float = 0; // 0x613 PushV
	var_17_string = "health"; // 0x614 PushS
	var_18_bool = var_14_string == var_17_string; // 0x615 Eq
	if(var_18_bool == 0) goto Label_1567; // 0x616 JumpB
	var_19_string = "health"; // 0x617 PushS
	GetProperty(var_19_string, var_16_float); // 0x618 Func
	var_20_int = 0; // 0x61a PushI
	var_21_bool = var_16_float <= var_20_int; // 0x61b LE
	if(var_21_bool == 0) goto Label_1567; // 0x61c JumpB
	SignalDeath(var_13_object); // 0x61d Func
	
Label_1567:
	return 2; // 0x61f Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object)
{
	var_14_object = Obj(); // 0x621 PushV
	var_14_object = var_13_object; // 0x622 Mov
	func_1507(var_14_object); // 0x623 NEW_2
	return 0; // 0x625 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool)
{
	
Label_378:
	var_13_float = 0; var_14_float = 0; // 0x17a PushV
	var_13_float = 300; // 0x17b MovI
	var_14_float = 100; // 0x17c MovI
	func_422(var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_float, var_14_float); // 0x17d NEW_2
	var_75_int = 3; // 0x17f PushI
	Sleep(var_75_int); // 0x180 Func
	goto Label_378; // 0x182 Jump
}


func_0(var_0_object, var_17_int, var_18_object)
{
	var_20_object = Obj(); var_21_bool = 0; var_22_int = 0; var_23_bool = 0; var_24_object = Obj(); var_25_bool = 0; var_26_int = 0; var_27_bool = 0; // 0x0 PushV
	var_0_object = var_18_object; // 0x1 TMov
	var_28_bool = 0; var_29_object = Obj(); var_30_float = 0; // 0x2 PushV
	var_29_object = var_18_object; // 0x3 Mov
	var_30_float = 70.0; // 0x4 MovF
	func_1140(var_29_object, var_30_float); // 0x5 NEW_2
	var_74_bool = var_28_bool == 0; // 0x7 Not
	if(var_74_bool == 0) goto Label_11; // 0x8 JumpB
	var_17_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_24_object); // 0xb Func
	var_75_int = 0; // 0xd PushV
	func_1499(var_75_int); // 0xe NEW_2
	SetNPCName(var_75_int); // 0x10 ObjFunc
	var_76_int = 0; // 0x12 PushV
	func_1497(var_76_int); // 0x13 NEW_2
	SetNPCDescription(var_76_int); // 0x15 ObjFunc
	var_77_string = ""; // 0x17 PushV
	func_1501(var_77_string); // 0x18 NEW_2
	SetPhoto(var_77_string); // 0x1a ObjFunc
	var_78_string = ""; // 0x1c PushV
	func_1503(var_78_string); // 0x1d NEW_2
	SetPhoto2(var_78_string); // 0x1f ObjFunc
	var_79_int = 0; // 0x21 PushV
	func_1461(var_79_int); // 0x22 NEW_2
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
	var_154_bool = var_27_bool == 0; // 0x38 Not
	if(var_154_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_27_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_155_object = Obj(); // 0x3f PushV
	var_155_object = var_18_object; // 0x40 Mov
	func_1208(); // 0x41 NEW_2
	StopDialog(var_24_object); // 0x43 Func
	GetReturnValue(var_26_int); // 0x45 ObjFunc
	var_17_int = var_26_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1412(var_44_string, var_45_int)
{
	var_46_string = ""; var_47_string = ""; // 0x584 PushV
	var_47_string = "idle"; // 0x585 MovS
	var_48_int = var_45_int; // 0x586 Push
	if(var_48_int == 0) goto Label_1417; // 0x587 JumpB
	var_47_string = var_47_string + var_45_int; // 0x588 Add2
	
Label_1417:
	var_44_string = var_47_string; // 0x589 Mov
	return 2; // 0x58a Return
}


func_779(var_0_object, var_65_bool)
{
	var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); // 0x30b PushV
	GetDirection(var_68_cvector); // 0x30c Func
	var_70_cvector = CVector(0,0,0); var_71_object = Obj(); // 0x30e PushV
	var_71_object = var_0_object; // 0x30f MovT
	func_948(var_71_object); // 0x310 NEW_2
	var_69_cvector = var_70_cvector; // 0x311 Mov
	var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x313 PushV
	var_77_cvector = var_68_cvector; // 0x314 Mov
	var_78_cvector = var_69_cvector; // 0x315 Mov
	func_1342(var_76_float, var_77_cvector, var_78_cvector); // 0x316 NEW_2
	var_84_float = -0.34202; // 0x318 PushF
	var_65_bool = var_76_float >= var_84_float; // 0x319 GE2
	return 4; // 0x31a Return
}


func_1419(var_38_int)
{
	var_39_int = 0; var_40_bool = 0; var_41_int = 0; var_42_bool = 0; // 0x58b PushV
	var_41_int = 0; // 0x58c MovI
	
Label_1421:
	var_43_string = "all"; // 0x58d PushS
	var_44_string = ""; var_45_int = 0; // 0x58e PushV
	var_45_int = var_41_int; // 0x58f Mov
	func_1412(var_44_string, var_45_int); // 0x590 NEW_2
	HasAnimation(var_42_bool, var_43_string, var_44_string); // 0x592 Func
	var_49_bool = var_42_bool == 0; // 0x594 Not
	if(var_49_bool == 0) goto Label_1431; // 0x595 JumpB
	goto Label_1434; // 0x596 Jump
	
Label_1434:
	var_38_int = var_41_int; // 0x59a Mov
	return 4; // 0x59b Return
	
Label_1431:
	var_50_int = 1; // 0x597 PushI
	var_41_int = var_41_int + var_50_int; // 0x598 Add2
	goto Label_1421; // 0x599 Jump
}


func_911(var_87_string)
{
	RemoveRTEnvelope(); // 0x390 Func
	SetDeathState(); // 0x392 Func
	Stop(); // 0x394 Func
	StopAsync(); // 0x396 Func
	StopSecondaryAnimation(); // 0x398 Func
	var_88_string = ""; // 0x39a PushV
	var_88_string = var_87_string; // 0x39b Mov
	func_1274(var_88_string); // 0x39c NEW_2
	var_117_string = "all"; // 0x39e PushS
	PlayAnimation(var_117_string, var_87_string); // 0x39f Func
	WaitForAnimEnd(); // 0x3a1 Func
	var_118_string = "all"; // 0x3a3 PushS
	LockAnimationEnd(var_118_string, var_87_string); // 0x3a4 Func
	RemoveEnvelope(); // 0x3a6 Func
	return 0; // 0x3a8 Return
}


func_795(var_64_object)
{
	EventDisable(0); // 0x31c EventDisable
	var_65_object = Obj(); // 0x31d PushV
	var_65_object = var_64_object; // 0x31e Mov
	func_820(var_65_object); // 0x31f NEW_2
	var_145_int = 50; // 0x321 PushI
	var_146_int = 40; // 0x322 PushI
	SetRTEnvelope(var_145_int, var_146_int); // 0x323 Func
	EventEnable(0); // 0x325 EventEnable
	
Label_806:
	Hold(); // 0x326 Func
	goto Label_806; // 0x328 Jump
}


func_1436()
{
	var_21_bool = 0; var_22_string = ""; var_23_string = ""; // 0x59d PushV
	var_22_string = "quest_b5_01"; // 0x59e MovS
	var_23_string = "vera_retreat"; // 0x59f MovS
	func_1400(var_21_bool, var_22_string, var_23_string); // 0x5a0 NEW_2
	return 0; // 0x5a2 Return
}


func_157(var_2_object, var_107_string)
{
	var_108_bool = 0; // 0x9e PushV
	func_1505(var_108_bool); // 0x9f NEW_2
	var_109_bool = var_108_bool == 0; // 0xa1 Not
	if(var_109_bool == 0) goto Label_164; // 0xa2 JumpB
	return 0; // 0xa3 Return
	
Label_164:
	var_110_bool = var_107_string == var_2_object; // 0xa4 Eq
	if(var_110_bool == 0) goto Label_167; // 0xa5 JumpB
	return 0; // 0xa6 Return
	
Label_167:
	var_111_string = ""; var_112_bool = 0; // 0xa7 PushV
	var_111_string = var_107_string; // 0xa8 Mov
	var_113_string = ""; // 0xa9 PushS
	var_114_bool = var_107_string == var_113_string; // 0xaa Eq
	if(var_114_bool == 0) goto Label_174; // 0xab JumpB
	var_112_bool = 0; // 0xac MovB
	goto Label_175; // 0xad Jump
	
Label_175:
	func_1241(var_111_string, var_112_bool); // 0xaf NEW_2
	var_2_object = var_107_string; // 0xb1 TMov
	return 0; // 0xb2 Return
	
Label_174:
	var_112_bool = 1; // 0xae MovB
}


func_1053(var_17_object, var_18_int, var_19_float)
{
	var_20_cvector = CVector(0,0,0); var_21_object = Obj(); var_22_int = 0; var_23_bool = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_int = 0; var_27_int = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_object = Obj(); var_31_int = 0; var_32_bool = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_int = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); // 0x41d PushV
	var_38_bool = 0; // 0x41e PushV
	var_38_bool = 0; // 0x41f MovB
	var_39_bool = 0; // 0x420 PushV
	var_39_bool = 0; // 0x421 MovB
	var_40_object = var_17_object; // 0x422 Push
	if(var_40_object == 0) goto Label_1064; // 0x423 JumpB
	var_41_int = 4; // 0x424 PushI
	var_42_bool = var_18_int != var_41_int; // 0x425 Neq
	if(var_42_bool == 0) goto Label_1064; // 0x426 JumpB
	var_39_bool = 1; // 0x427 MovB
	
Label_1064:
	if(var_39_bool == 0) goto Label_1069; // 0x428 JumpB
	var_43_int = 5; // 0x429 PushI
	var_44_bool = var_18_int != var_43_int; // 0x42a Neq
	if(var_44_bool == 0) goto Label_1069; // 0x42b JumpB
	var_38_bool = 1; // 0x42c MovB
	
Label_1069:
	if(var_38_bool == 0) goto Label_1116; // 0x42d JumpB
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x42e PushV
	var_47_cvector = CVector(0,0,0); var_48_object = Obj(); // 0x42f PushV
	var_48_object = var_17_object; // 0x430 Mov
	func_948(var_48_object); // 0x431 NEW_2
	var_46_cvector = var_47_cvector; // 0x432 Mov
	func_1321(var_45_cvector, var_46_cvector); // 0x434 NEW_2
	var_29_cvector = var_45_cvector; // 0x435 Mov
	CreateVectorVector(var_30_object); // 0x437 Func
	var_31_int = 1; // 0x439 MovI
	
Label_1082:
	var_58_string = "hit"; // 0x43a PushS
	var_59_int = var_58_string + var_31_int; // 0x43b Add
	GetGeometryLocator(var_59_int, var_32_bool, var_33_cvector, var_34_cvector); // 0x43c Func
	var_60_bool = var_32_bool == 0; // 0x43e Not
	if(var_60_bool == 0) goto Label_1089; // 0x43f JumpB
	goto Label_1098; // 0x440 Jump
	
Label_1098:
	size(var_35_int); // 0x44a ObjFunc
	var_61_int = var_35_int; // 0x44c Push
	if(var_61_int == 0) goto Label_1115; // 0x44d JumpB
	irand(var_36_int, var_35_int); // 0x44e Func
	get(var_37_cvector, var_36_int); // 0x450 ObjFunc
	var_62_object = Obj(); var_63_int = 0; var_64_float = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); // 0x452 PushV
	var_62_object = var_17_object; // 0x453 Mov
	var_63_int = var_18_int; // 0x454 Mov
	var_64_float = var_19_float; // 0x455 Mov
	var_65_cvector = var_37_cvector; // 0x456 Mov
	var_66_cvector = -var_29_cvector; // 0x457 Neg2
	func_1121(var_64_float, var_65_cvector, var_66_cvector); // 0x458 NEW_2
	return 18; // 0x45a Return
	
Label_1115:
	var_30_object = 0; // 0x45b SetNull
	
Label_1116:
	var_107_object = Obj(); // 0x45c PushV
	var_107_object = var_17_object; // 0x45d Mov
	func_1009(var_107_object); // 0x45e NEW_2
	return 18; // 0x460 Return
	
Label_1089:
	var_108_int = var_34_cvector | var_29_cvector; // 0x441 Or
	var_109_float = 0.70711; // 0x442 PushF
	var_110_bool = var_108_int >= var_109_float; // 0x443 GE
	if(var_110_bool == 0) goto Label_1095; // 0x444 JumpB
	add(var_33_cvector); // 0x445 ObjFunc
	
Label_1095:
	var_111_int = 1; // 0x447 PushI
	var_31_int = var_31_int + var_111_int; // 0x448 Add2
	goto Label_1082; // 0x449 Jump
}


func_1443()
{
	var_105_string = "oob5Vera2_1"; // 0x5a4 PushS
	var_106_int = 1; // 0x5a5 PushI
	SetVariable(var_105_string, var_106_int); // 0x5a6 Func
	return 0; // 0x5a8 Return
}


func_1315(var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x523 PushV
	self(var_19_object); // 0x524 Func
	var_17_object = var_19_object; // 0x526 Mov
	return 2; // 0x527 Return
}


func_422(var_0_object, var_1_object, var_2_object, var_3_string, var_12_bool, var_13_float, var_14_float)
{
	var_15_bool = 0; // 0x1a7 PushV
	func_1135(var_15_bool); // 0x1a8 NEW_2
	var_18_bool = var_15_bool == 0; // 0x1aa Not
	if(var_18_bool == 0) goto Label_429; // 0x1ab JumpB
	return 0; // 0x1ac Return
	
Label_429:
	var_19_string = "player"; // 0x1ad PushS
	FindActor(var_12_bool, var_19_string); // 0x1ae Func
	var_2_object = 0; // 0x1b0 TMovB
	var_3_string = 0; // 0x1b1 TMovB
	var_0_object = var_13_float; // 0x1b2 TMov
	var_1_object = var_14_float; // 0x1b3 TMov
	var_20_int = 10; // 0x1b4 PushI
	var_21_float = 1.0; // 0x1b5 PushF
	SetTimer(var_20_int, var_21_float); // 0x1b6 Func
	func_501(); // 0x1b9 NEW_2
	var_73_bool = var_3_string == 0; // 0x1bb Not
	if(var_73_bool == 0) goto Label_448; // 0x1bc JumpB
	var_74_int = 10; // 0x1bd PushI
	KillTimer(var_74_int); // 0x1be Func
	
Label_448:
	return 0; // 0x1c0 Return
}


func_1449(var_95_bool)
{
	var_97_int = 0; var_98_string = ""; // 0x5aa PushV
	var_98_string = "oob5Vera2_1"; // 0x5ab MovS
	func_1350(var_97_int, var_98_string); // 0x5ac NEW_2
	var_101_int = 0; // 0x5ae PushI
	var_102_bool = var_97_int == var_101_int; // 0x5af Eq
	if(var_102_bool == 0) goto Label_1459; // 0x5b0 JumpB
	var_95_bool = 1; // 0x5b1 MovB
	return 0; // 0x5b2 Return
	
Label_1459:
	var_95_bool = 0; // 0x5b3 MovB
	return 0; // 0x5b4 Return
}


func_1321(var_45_cvector, var_46_cvector)
{
	var_53_float = 0; var_54_float = 0; // 0x529 PushV
	var_55_int = var_46_cvector | var_46_cvector; // 0x52a Or
	var_54_float = sqrt(var_55_int); // 0x52b Sqrt2
	var_56_float = 0.0; // 0x52c PushF
	var_57_bool = var_54_float < var_56_float; // 0x52d LT
	if(var_57_bool == 0) goto Label_1329; // 0x52e JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x52f MovV
	return 2; // 0x530 Return
	
Label_1329:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x531 Div2
	return 2; // 0x532 Return
}


func_943(var_85_cvector)
{
	var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x3af PushV
	GetPosition(var_87_cvector); // 0x3b0 Func
	var_85_cvector = var_87_cvector; // 0x3b2 Mov
	return 2; // 0x3b3 Return
}


func_1331(var_53_float, var_54_float, var_55_float, var_56_float)
{
	var_57_bool = var_54_float < var_55_float; // 0x534 LT
	if(var_57_bool == 0) goto Label_1336; // 0x535 JumpB
	var_53_float = var_55_float; // 0x536 Mov
	return 0; // 0x537 Return
	
Label_1336:
	var_58_bool = var_54_float > var_56_float; // 0x538 GT
	if(var_58_bool == 0) goto Label_1340; // 0x539 JumpB
	var_53_float = var_56_float; // 0x53a Mov
	return 0; // 0x53b Return
	
Label_1340:
	var_53_float = var_54_float; // 0x53c Mov
	return 0; // 0x53d Return
}


func_948(var_47_cvector)
{
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); // 0x3b4 PushV
	GetPosition(var_51_cvector); // 0x3b5 Func
	GetPosition(var_52_cvector); // 0x3b7 ObjFunc
	var_47_cvector = var_52_cvector - var_51_cvector; // 0x3b9 Sub2
	return 4; // 0x3ba Return
}


func_1461(var_79_int)
{
	var_80_int = 0; var_81_int = 0; // 0x5b5 PushV
	var_82_string = "branch"; // 0x5b6 PushS
	GetVariable(var_82_string, var_81_int); // 0x5b7 Func
	var_83_int = 0; // 0x5b9 PushI
	var_84_bool = var_81_int == var_83_int; // 0x5ba Eq
	if(var_84_bool == 0) goto Label_1471; // 0x5bb JumpB
	var_79_int = 1; // 0x5bc MovI
	return 2; // 0x5bd Return
	
Label_1471:
	var_85_int = 1; // 0x5bf PushI
	var_86_bool = var_81_int == var_85_int; // 0x5c0 Eq
	if(var_86_bool == 0) goto Label_1476; // 0x5c1 JumpB
	var_79_int = 2; // 0x5c2 MovI
	return 2; // 0x5c3 Return
	
Label_1476:
	var_79_int = 3; // 0x5c4 MovI
	return 2; // 0x5c5 Return
}


func_820(var_65_object)
{
	var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_string = ""; var_71_object = Obj(); var_72_bool = 0; var_73_bool = 0; var_74_float = 0; var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_string = ""; var_81_object = Obj(); var_82_bool = 0; var_83_bool = 0; var_84_float = 0; var_85_cvector = CVector(0,0,0); // 0x334 PushV
	var_86_bool = var_65_object == 0; // 0x335 NullEq
	if(var_86_bool == 0) goto Label_828; // 0x336 JumpB
	var_87_string = ""; // 0x337 PushV
	var_87_string = "fdie"; // 0x338 MovS
	func_911(var_87_string); // 0x339 NEW_2
	goto Label_910; // 0x33b Jump
	
Label_910:
	return 20; // 0x38e Return
	
Label_828:
	GetPosition(var_76_cvector); // 0x33c ObjFunc
	GetPosition(var_77_cvector); // 0x33e Func
	GetDirection(var_78_cvector); // 0x340 Func
	var_79_cvector = var_77_cvector - var_76_cvector; // 0x342 Sub2
	var_119_float = GetByIndex(var_79_cvector, 0); // 0x343 PushE
	var_120_float = GetByIndex(var_78_cvector, 0); // 0x344 PushE
	var_121_float = var_119_float * var_120_float; // 0x345 Mult
	var_122_float = GetByIndex(var_79_cvector, 2); // 0x346 PushE
	var_123_float = GetByIndex(var_78_cvector, 2); // 0x347 PushE
	var_124_float = var_122_float * var_123_float; // 0x348 Mult
	var_125_int = var_121_float + var_124_float; // 0x349 Add
	var_126_int = 0; // 0x34a PushI
	var_127_bool = var_125_int >= var_126_int; // 0x34b GE
	if(var_127_bool == 0) goto Label_847; // 0x34c JumpB
	var_80_string = "fdie"; // 0x34d MovS
	goto Label_848; // 0x34e Jump
	
Label_848:
	RemoveRTEnvelope(); // 0x350 Func
	SetDeathState(); // 0x352 Func
	Stop(); // 0x354 Func
	StopAsync(); // 0x356 Func
	var_81_object = var_65_object; // 0x358 Mov
	var_128_string = "GetScriptProperty"; // 0x359 PushS
	var_129_int = 2; // 0x35a PushI
	var_130_bool = IsFuncExist(var_65_object, var_128_string, var_129_int); // 0x35b FuncExist
	if(var_130_bool == 0) goto Label_872; // 0x35c JumpB
	var_131_string = "Owner"; // 0x35d PushS
	HasScriptProperty(var_82_bool, var_131_string); // 0x35e ObjFunc
	var_132_bool = var_82_bool; // 0x360 Push
	if(var_132_bool == 0) goto Label_872; // 0x361 JumpB
	var_133_string = "Owner"; // 0x362 PushS
	GetScriptProperty(var_81_object, var_133_string); // 0x363 ObjFunc
	var_134_bool = var_81_object == 0; // 0x365 NullEq
	if(var_134_bool == 0) goto Label_872; // 0x366 JumpB
	var_81_object = var_65_object; // 0x367 Mov
	
Label_872:
	var_135_string = "@GetEyesHeight"; // 0x368 PushS
	var_136_int = 1; // 0x369 PushI
	var_137_bool = IsFuncExist(var_81_object, var_135_string, var_136_int); // 0x36a FuncExist
	if(var_137_bool == 0) goto Label_887; // 0x36b JumpB
	GetEyesHeight(var_84_float); // 0x36c ObjFunc
	var_85_cvector = CVector(0.0, 0.0, 0.0); // 0x36e MovV
	var_138_float = GetByIndex(var_85_cvector, 1); // 0x36f PushE
	var_138_float = var_84_float; // 0x370 Mov
	SetByIndex(var_85_cvector, 1) = var_138_float; // 0x371 PopE
	var_139_string = "head"; // 0x372 PushS
	LookAsync(var_65_object, var_139_string, var_85_cvector); // 0x373 Func
	var_83_bool = 1; // 0x375 MovB
	goto Label_888; // 0x376 Jump
	
Label_888:
	var_140_string = ""; // 0x378 PushV
	var_140_string = var_80_string; // 0x379 Mov
	func_1274(var_140_string); // 0x37a NEW_2
	var_141_string = "all"; // 0x37c PushS
	PlayAnimation(var_141_string, var_80_string); // 0x37d Func
	WaitForAnimEnd(); // 0x37f Func
	var_142_bool = var_83_bool; // 0x381 Push
	if(var_142_bool == 0) goto Label_904; // 0x382 JumpB
	StopAsync(); // 0x383 Func
	var_143_string = "head"; // 0x385 PushS
	UnlookAsync(var_143_string); // 0x386 Func
	
Label_904:
	var_144_string = "all"; // 0x388 PushS
	LockAnimationEnd(var_144_string, var_80_string); // 0x389 Func
	RemoveEnvelope(); // 0x38b Func
	var_81_object = 0; // 0x38d SetNull
	
Label_887:
	var_83_bool = 0; // 0x377 MovB
	
Label_847:
	var_80_string = "bdie"; // 0x34f MovS
}


func_1208()
{
	var_156_bool = 0; var_157_bool = 0; // 0x4b8 PushV
	CameraSwitchToNormal(); // 0x4b9 Func
	var_158_bool = 0; // 0x4bb PushV
	func_1505(var_158_bool); // 0x4bc NEW_2
	if(var_158_bool == 0) goto Label_1216; // 0x4be JumpB
	goto Label_1224; // 0x4bf Jump
	
Label_1224:
	return 2; // 0x4c8 Return
	
Label_1216:
	var_159_string = "head"; // 0x4c0 PushS
	HasAnimationTrack(var_157_bool, var_159_string); // 0x4c1 Func
	var_160_bool = var_157_bool; // 0x4c3 Push
	if(var_160_bool == 0) goto Label_1224; // 0x4c4 JumpB
	var_161_string = "head"; // 0x4c5 PushS
	UnlookAsync(var_161_string); // 0x4c6 Func
}


func_955(var_20_float)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); // 0x3bb PushV
	GetPosition(var_25_cvector); // 0x3bc Func
	GetPosition(var_26_cvector); // 0x3be ObjFunc
	var_27_cvector = var_26_cvector - var_25_cvector; // 0x3c0 Sub2
	var_20_float = var_27_cvector | var_27_cvector; // 0x3c1 Or2
	return 6; // 0x3c2 Return
}


func_1342(var_76_float, var_77_cvector, var_78_cvector)
{
	var_79_int = var_77_cvector | var_78_cvector; // 0x53f Or
	var_80_int = var_77_cvector | var_77_cvector; // 0x540 Or
	var_81_int = var_78_cvector | var_78_cvector; // 0x541 Or
	var_82_float = var_80_int * var_81_int; // 0x542 Mult
	var_83_float = sqrt(var_82_float); // 0x543 Sqrt
	var_76_float = var_79_int / var_79_int; // 0x544 Div2
	return 0; // 0x545 Return
}


func_449(var_0_object, var_1_object, var_4_bool, var_16_bool)
{
	var_17_float = 0; var_18_float = 0; // 0x1c1 PushV
	var_19_bool = var_4_bool == 0; // 0x1c2 NullEq
	if(var_19_bool == 0) goto Label_454; // 0x1c3 JumpB
	var_16_bool = 0; // 0x1c4 MovB
	return 2; // 0x1c5 Return
	
Label_454:
	var_20_float = 0; var_21_object = Obj(); // 0x1c6 PushV
	var_21_object = var_4_bool; // 0x1c7 MovT
	func_955(var_21_object); // 0x1c8 NEW_2
	var_18_float = sqrt(var_20_float); // 0x1ca Sqrt2
	var_28_object = var_2_object; // 0x1cb PushT
	if(var_28_object == 0) goto Label_462; // 0x1cc JumpB
	var_18_float = var_18_float - var_1_object; // 0x1cd Sub2
	
Label_462:
	var_16_bool = var_18_float < var_0_object; // 0x1ce LT2
	return 2; // 0x1cf Return
}


func_963(var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj(); // 0x3c3 PushV
	var_31_string = "player"; // 0x3c4 PushS
	FindActor(var_30_object, var_31_string); // 0x3c5 Func
	var_28_object = var_30_object; // 0x3c7 Mov
	return 2; // 0x3c8 Return
}


func_580(var_63_bool)
{
	var_63_bool = 1; // 0x244 MovB
	return 0; // 0x245 Return
}


func_582()
{
	StopAnimation(); // 0x246 Func
	StopGroup0(); // 0x248 Func
	return 0; // 0x24a Return
}


func_1350(var_97_int, var_98_string)
{
	var_99_int = 0; var_100_int = 0; // 0x546 PushV
	GetVariable(var_98_string, var_100_int); // 0x547 Func
	var_97_int = var_100_int; // 0x549 Mov
	return 2; // 0x54a Return
}


func_1478(var_18_int)
{
	var_19_int = 0; var_20_int = 0; // 0x5c6 PushV
	var_21_string = "branch"; // 0x5c7 PushS
	GetVariable(var_21_string, var_20_int); // 0x5c8 Func
	var_18_int = var_20_int; // 0x5ca Mov
	return 2; // 0x5cb Return
}


func_1225(var_130_string)
{
	var_131_bool = 0; var_132_float = 0; var_133_float = 0; var_134_bool = 0; var_135_float = 0; var_136_float = 0; // 0x4c9 PushV
	lshHasAnimation(var_134_bool, var_130_string); // 0x4ca Func
	var_137_bool = var_134_bool; // 0x4cc Push
	if(var_137_bool == 0) goto Label_1236; // 0x4cd JumpB
	lshGetAnimTimes(var_130_string, var_135_float, var_136_float); // 0x4ce Func
	var_138_bool = 0; // 0x4d0 PushB
	lshPlayAnimation(var_135_float, var_136_float, var_138_bool); // 0x4d1 Func
	goto Label_1240; // 0x4d3 Jump
	
Label_1240:
	return 6; // 0x4d8 Return
	
Label_1236:
	var_139_string = "Can't find lsh animation : "; // 0x4d4 PushS
	var_140_int = var_139_string + var_130_string; // 0x4d5 Add
	Trace(var_140_int); // 0x4d6 Func
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object; // 0x4b TMov
	var_1_object = var_88_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_94_int = 1; // 0x4e PushI
	if(var_94_int == 0) goto Label_127; // 0x4f JumpB
	var_95_bool = 0; var_96_object = Obj(); // 0x50 PushV
	var_96_object = var_1_object; // 0x51 MovT
	func_1449(var_96_object); // 0x52 NEW_2
	if(var_95_bool == 0) goto Label_105; // 0x54 JumpB
	var_103_object = Obj(); var_104_object = Obj(); // 0x55 PushV
	var_103_object = var_1_object; // 0x56 MovT
	var_104_object = var_0_object; // 0x57 MovT
	func_1443(); // 0x58 NEW_2
	var_107_string = ""; // 0x5a PushV
	var_107_string = "Neutral"; // 0x5b MovS
	func_157(var_89_object, var_107_string); // 0x5c NEW_2
	var_124_int = 518668; // 0x5e PushI
	SetMessage(var_124_int); // 0x5f TObjFunc
	ClearReplies(); // 0x61 TObjFunc
	var_125_int = 518670; // 0x63 PushI
	var_126_int = 19916; // 0x64 PushI
	var_127_int = 19762; // 0x65 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x66 TObjFunc
	goto Label_127; // 0x68 Jump
	
Label_127:
	var_128_bool = 0; // 0x7f PushV
	func_1505(var_128_bool); // 0x80 NEW_2
	if(var_128_bool == 0) goto Label_142; // 0x82 JumpB
	
Label_131:
	lshWaitForAnimEnd(); // 0x83 Func
	var_129_string = var_3_string; // 0x85 PushT
	if(var_129_string == 0) goto Label_136; // 0x86 JumpB
	goto Label_141; // 0x87 Jump
	
Label_141:
	goto Label_156; // 0x8d Jump
	
Label_156:
	return 0; // 0x9c Return
	
Label_136:
	var_130_string = ""; // 0x88 PushV
	var_130_string = var_2_object; // 0x89 MovT
	func_1225(var_130_string); // 0x8a NEW_2
	goto Label_131; // 0x8c Jump
	
Label_142:
	var_141_string = "all"; // 0x8e PushS
	var_142_string = "idle"; // 0x8f PushS
	PlayAnimation(var_141_string, var_142_string); // 0x90 Func
	
Label_146:
	WaitForAnimEnd(); // 0x92 Func
	var_143_string = var_3_string; // 0x94 PushT
	if(var_143_string == 0) goto Label_151; // 0x95 JumpB
	goto Label_156; // 0x96 Jump
	
Label_151:
	var_144_string = "all"; // 0x97 PushS
	var_145_string = "idle"; // 0x98 PushS
	PlayAnimation(var_144_string, var_145_string); // 0x99 Func
	goto Label_146; // 0x9b Jump
	
Label_105:
	var_146_string = ""; // 0x69 PushV
	var_146_string = "Neutral"; // 0x6a MovS
	func_157(var_89_object, var_146_string); // 0x6b NEW_2
	var_147_int = 519748; // 0x6d PushI
	SetMessage(var_147_int); // 0x6e TObjFunc
	ClearReplies(); // 0x70 TObjFunc
	var_148_int = 519749; // 0x72 PushI
	var_149_int = -1; // 0x73 PushI
	var_150_int = 20903; // 0x74 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x75 TObjFunc
	var_151_int = 519750; // 0x77 PushI
	var_152_int = -1; // 0x78 PushI
	var_153_int = 20904; // 0x79 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x7a TObjFunc
	goto Label_127; // 0x7c Jump
}


func_587()
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x24b PushV
	GetScene(var_23_object); // 0x24c Func
	var_24_object = Obj(); // 0x24e PushV
	func_1315(var_24_object); // 0x24f NEW_2
	RemoveStationaryActor(var_24_object); // 0x251 ObjFunc
	
Label_595:
	var_27_object = Obj(); // 0x253 PushV
	var_28_object = Obj(); // 0x254 PushV
	func_963(var_28_object); // 0x255 NEW_2
	var_27_object = var_28_object; // 0x256 Mov
	func_638(var_21_bool, var_22_object, var_23_object, var_27_object); // 0x258 NEW_2
	var_100_int = 1; // 0x25a PushI
	Sleep(var_100_int); // 0x25b Func
	goto Label_595; // 0x25d Jump
}


func_1484(var_17_object)
{
	var_18_int = 0; // 0x5cd PushV
	func_1478(var_18_int); // 0x5ce NEW_2
	var_22_int = 1; // 0x5d0 PushI
	var_23_bool = var_18_int == var_22_int; // 0x5d1 Eq
	if(var_23_bool == 0) goto Label_1494; // 0x5d2 JumpB
	WorkWithCorpse(var_17_object); // 0x5d3 Func
	goto Label_1496; // 0x5d5 Jump
	
Label_1496:
	return 0; // 0x5d8 Return
	
Label_1494:
	Barter(var_17_object); // 0x5d6 Func
}


func_970(var_20_bool, var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0x3ca PushV
	IsPlayerActor(var_21_object, var_23_bool); // 0x3cb Func
	var_20_bool = var_23_bool; // 0x3cd Mov
	return 2; // 0x3ce Return
}


func_1355(var_24_bool, var_25_object, var_26_float)
{
	var_27_bool = var_25_object == 0; // 0x54c Not
	if(var_27_bool == 0) goto Label_1360; // 0x54d JumpB
	var_24_bool = 0; // 0x54e MovB
	return 0; // 0x54f Return
	
Label_1360:
	var_28_int = 0; // 0x550 PushI
	var_29_bool = var_26_float > var_28_int; // 0x551 GT
	if(var_29_bool == 0) goto Label_1367; // 0x552 JumpB
	var_30_int = 8; // 0x553 PushI
	SendWorldWndMessage(var_30_int); // 0x554 Func
	goto Label_1376; // 0x556 Jump
	
Label_1376:
	var_31_float = 0; // 0x560 PushV
	var_31_float = var_26_float; // 0x561 Mov
	func_1390(var_31_float); // 0x562 NEW_2
	var_35_bool = 0; var_36_object = Obj(); var_37_string = ""; var_38_float = 0; var_39_float = 0; var_40_float = 0; // 0x564 PushV
	var_36_object = var_25_object; // 0x565 Mov
	var_37_string = "reputation"; // 0x566 MovS
	var_38_float = var_26_float; // 0x567 Mov
	var_39_float = 0; // 0x568 MovI
	var_40_float = 1; // 0x569 MovI
	func_987(var_35_bool, var_36_object, var_37_string, var_38_float, var_39_float, var_40_float); // 0x56a NEW_2
	var_24_bool = 1; // 0x56c MovB
	return 0; // 0x56d Return
	
Label_1367:
	var_59_int = 0; // 0x557 PushI
	var_60_bool = var_26_float < var_59_int; // 0x558 LT
	if(var_60_bool == 0) goto Label_1374; // 0x559 JumpB
	var_61_int = 9; // 0x55a PushI
	SendWorldWndMessage(var_61_int); // 0x55b Func
	goto Label_1376; // 0x55d Jump
	
Label_1374:
	var_24_bool = 0; // 0x55e MovB
	return 0; // 0x55f Return
}


func_975(var_43_bool, var_44_object, var_45_string)
{
	var_46_bool = 0; var_47_bool = 0; // 0x3cf PushV
	var_48_string = "HasProperty"; // 0x3d0 PushS
	var_49_int = 2; // 0x3d1 PushI
	var_50_bool = IsFuncExist(var_44_object, var_48_string, var_49_int); // 0x3d2 FuncExist
	var_51_bool = var_50_bool == 0; // 0x3d3 Not
	if(var_51_bool == 0) goto Label_983; // 0x3d4 JumpB
	var_43_bool = 0; // 0x3d5 MovB
	return 2; // 0x3d6 Return
	
Label_983:
	HasProperty(var_45_string, var_47_bool); // 0x3d7 ObjFunc
	var_43_bool = var_47_bool; // 0x3d9 Mov
	return 2; // 0x3da Return
}


func_1241(var_111_string, var_112_bool)
{
	var_115_bool = 0; var_116_float = 0; var_117_float = 0; var_118_bool = 0; var_119_float = 0; var_120_float = 0; // 0x4d9 PushV
	lshHasAnimation(var_118_bool, var_111_string); // 0x4da Func
	var_121_bool = var_118_bool; // 0x4dc Push
	if(var_121_bool == 0) goto Label_1251; // 0x4dd JumpB
	lshGetAnimTimes(var_111_string, var_119_float, var_120_float); // 0x4de Func
	lshPlayAnimation(var_119_float, var_120_float, var_112_bool); // 0x4e0 Func
	goto Label_1255; // 0x4e2 Jump
	
Label_1255:
	return 6; // 0x4e7 Return
	
Label_1251:
	var_122_string = "Can't find lsh animation : "; // 0x4e3 PushS
	var_123_int = var_122_string + var_111_string; // 0x4e4 Add
	Trace(var_123_int); // 0x4e5 Func
}


func_1497(var_76_int)
{
	var_76_int = 515593; // 0x5d9 MovI
	return 0; // 0x5da Return
}


func_1499(var_75_int)
{
	var_75_int = 512582; // 0x5db MovI
	return 0; // 0x5dc Return
}


func_987(var_35_bool, var_36_object, var_37_string, var_38_float, var_39_float, var_40_float)
{
	var_41_float = 0; var_42_float = 0; // 0x3db PushV
	var_43_bool = 0; var_44_object = Obj(); var_45_string = ""; // 0x3dc PushV
	var_44_object = var_36_object; // 0x3dd Mov
	var_45_string = var_37_string; // 0x3de Mov
	func_975(var_43_bool, var_44_object, var_45_string); // 0x3df NEW_2
	var_52_bool = var_43_bool == 0; // 0x3e1 Not
	if(var_52_bool == 0) goto Label_997; // 0x3e2 JumpB
	var_35_bool = 0; // 0x3e3 MovB
	return 2; // 0x3e4 Return
	
Label_997:
	GetProperty(var_37_string, var_42_float); // 0x3e5 ObjFunc
	var_53_float = 0; var_54_float = 0; var_55_float = 0; var_56_float = 0; // 0x3e7 PushV
	var_54_float = var_42_float + var_38_float; // 0x3e8 Add2
	var_55_float = var_39_float; // 0x3e9 Mov
	var_56_float = var_40_float; // 0x3ea Mov
	func_1331(var_53_float, var_54_float, var_55_float, var_56_float); // 0x3eb NEW_2
	SetProperty(var_37_string, var_53_float); // 0x3ed ObjFunc
	var_35_bool = 1; // 0x3ef MovB
	return 2; // 0x3f0 Return
}


func_1501(var_77_string)
{
	var_77_string = "ui/NPC_Citizen1.png"; // 0x5dd MovS
	return 0; // 0x5de Return
}


func_1503(var_78_string)
{
	var_78_string = "ui/NPC_Citizen1_b.png"; // 0x5df MovS
	return 0; // 0x5e0 Return
}


func_608(var_27_cvector, var_28_float)
{
	var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_float = 0; // 0x260 PushV
	GetPosition(var_35_cvector); // 0x261 Func
	GetPosition(var_36_cvector); // 0x263 TObjFunc
	GetDirection(var_37_cvector); // 0x265 Func
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); // 0x267 PushV
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0x268 PushV
	var_44_cvector = var_35_cvector - var_36_cvector; // 0x269 Sub2
	func_1321(var_43_cvector, var_44_cvector); // 0x26a NEW_2
	var_50_float = 0.75; // 0x26c PushF
	var_51_float = var_37_cvector * var_50_float; // 0x26d Mult
	var_42_cvector = var_43_cvector + var_51_float; // 0x26e Add2
	func_1321(var_41_cvector, var_42_cvector); // 0x26f NEW_2
	var_38_cvector = var_41_cvector; // 0x270 Mov
	var_52_int = 32; // 0x272 PushI
	var_53_float = 7000.0; // 0x273 PushF
	FindLongestDir(var_39_cvector, var_40_float, var_38_cvector, var_28_float, var_52_int, var_53_float); // 0x274 Func
	var_54_int = 100; // 0x276 PushI
	var_40_float = var_40_float - var_54_int; // 0x277 Sub2
	var_55_int = 0; // 0x278 PushI
	var_56_bool = var_40_float < var_55_int; // 0x279 LT
	if(var_56_bool == 0) goto Label_636; // 0x27a JumpB
	var_40_float = 0; // 0x27b MovI
	
Label_636:
	var_27_cvector = var_39_cvector * var_40_float; // 0x27c Mult2
	return 12; // 0x27d Return
}


func_1505(var_70_bool)
{
	var_70_bool = 0; // 0x5e1 MovB
	return 0; // 0x5e2 Return
}


func_1121(var_19_object, var_22_cvector, var_23_cvector)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); // 0x461 PushV
	GetScene(var_26_object); // 0x462 Func
	var_28_string = "scripted"; // 0x464 PushS
	var_29_string = "blood_dir.xml"; // 0x465 PushS
	AddActorByType(var_27_object, var_28_string, var_26_object, var_22_cvector, var_23_cvector, var_29_string); // 0x466 Func
	var_30_object = Obj(); // 0x468 PushV
	var_30_object = var_19_object; // 0x469 Mov
	func_1009(var_30_object); // 0x46a NEW_2
	return 4; // 0x46c Return
}


func_1507(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x5e3 PushV
	GetScene(var_16_object); // 0x5e4 Func
	var_17_object = Obj(); // 0x5e6 PushV
	func_1315(var_17_object); // 0x5e7 NEW_2
	RemoveStationaryActor(var_17_object); // 0x5e9 ObjFunc
	var_20_bool = 0; var_21_object = Obj(); // 0x5eb PushV
	var_21_object = var_14_object; // 0x5ec Mov
	func_970(var_20_bool, var_21_object); // 0x5ed NEW_2
	if(var_20_bool == 0) goto Label_1525; // 0x5ef JumpB
	var_24_bool = 0; var_25_object = Obj(); var_26_float = 0; // 0x5f0 PushV
	var_25_object = var_14_object; // 0x5f1 Mov
	var_26_float = -0.1; // 0x5f2 MovF
	func_1355(var_24_bool, var_25_object, var_26_float); // 0x5f3 NEW_2
	
Label_1525:
	var_62_string = "b5q01VeraDead"; // 0x5f5 PushS
	var_63_bool = 1; // 0x5f6 PushB
	SetVariable(var_62_string, var_63_bool); // 0x5f7 Func
	var_64_object = Obj(); // 0x5f9 PushV
	var_64_object = var_14_object; // 0x5fa Mov
	TaskCall(4); // 0x5fb TaskCall
	func_795(var_64_object); // 0x5fc NEW_2
	TaskReturn(); // 0x5fd TaskReturn
	return 2; // 0x5ff Return
}


func_487(var_2_object, var_3_string)
{
	func_582(); // 0x1e8 NEW_2
	var_16_int = 10; // 0x1ea PushI
	KillTimer(var_16_int); // 0x1eb Func
	var_17_object = var_2_object; // 0x1ed PushT
	if(var_17_object == 0) goto Label_499; // 0x1ee JumpB
	var_18_string = "head"; // 0x1ef PushS
	UnlookAsync(var_18_string); // 0x1f0 Func
	var_2_object = 0; // 0x1f2 TMovB
	
Label_499:
	var_3_string = 1; // 0x1f3 TMovB
	return 0; // 0x1f4 Return
}


func_1256(var_30_object)
{
	var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_float = 0; var_34_cvector = CVector(0,0,0); // 0x4e8 PushV
	GetEyesHeight(var_33_float); // 0x4e9 ObjFunc
	var_34_cvector = CVector(0.0, 0.0, 0.0); // 0x4eb MovV
	var_35_float = GetByIndex(var_34_cvector, 1); // 0x4ec PushE
	var_35_float = var_33_float; // 0x4ed Mov
	SetByIndex(var_34_cvector, 1) = var_35_float; // 0x4ee PopE
	var_36_string = "head"; // 0x4ef PushS
	LookAsync(var_30_object, var_36_string, var_34_cvector); // 0x4f0 Func
	return 4; // 0x4f2 Return
}


func_1390(var_31_float)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x56e PushV
	CreateFloatVector(var_33_object); // 0x56f Func
	add(var_31_float); // 0x571 ObjFunc
	var_34_int = 16; // 0x573 PushI
	SendWorldWndMessage(var_34_int, var_33_object); // 0x574 Func
	return 2; // 0x576 Return
}


func_1135(var_15_bool)
{
	var_16_bool = 0; var_17_bool = 0; // 0x46f PushV
	IsLoaded(var_17_bool); // 0x470 Func
	var_15_bool = var_17_bool; // 0x472 Mov
	return 2; // 0x473 Return
}


func_1009(var_30_object)
{
	var_31_bool = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_string = ""; var_38_bool = 0; var_39_int = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_string = ""; // 0x3f1 PushV
	var_45_bool = var_30_object == 0; // 0x3f2 NullEq
	if(var_45_bool == 0) goto Label_1013; // 0x3f3 JumpB
	return 14; // 0x3f4 Return
	
Label_1013:
	IsDead(var_38_bool); // 0x3f5 Func
	var_46_bool = var_38_bool; // 0x3f7 Push
	if(var_46_bool == 0) goto Label_1018; // 0x3f8 JumpB
	return 14; // 0x3f9 Return
	
Label_1018:
	GetSecondaryAnimationType(var_39_int); // 0x3fa Func
	var_47_int = 0; // 0x3fc PushI
	var_48_bool = var_39_int < var_47_int; // 0x3fd LT
	if(var_48_bool == 0) goto Label_1024; // 0x3fe JumpB
	return 14; // 0x3ff Return
	
Label_1024:
	GetPosition(var_40_cvector); // 0x400 ObjFunc
	GetPosition(var_41_cvector); // 0x402 Func
	GetDirection(var_42_cvector); // 0x404 Func
	var_43_cvector = var_41_cvector - var_40_cvector; // 0x406 Sub2
	var_49_float = GetByIndex(var_43_cvector, 0); // 0x407 PushE
	var_50_float = GetByIndex(var_42_cvector, 0); // 0x408 PushE
	var_51_float = var_49_float * var_50_float; // 0x409 Mult
	var_52_float = GetByIndex(var_43_cvector, 2); // 0x40a PushE
	var_53_float = GetByIndex(var_42_cvector, 2); // 0x40b PushE
	var_54_float = var_52_float * var_53_float; // 0x40c Mult
	var_55_int = var_51_float + var_54_float; // 0x40d Add
	var_56_int = 0; // 0x40e PushI
	var_57_bool = var_55_int >= var_56_int; // 0x40f GE
	if(var_57_bool == 0) goto Label_1043; // 0x410 JumpB
	var_44_string = "fhit"; // 0x411 MovS
	goto Label_1044; // 0x412 Jump
	
Label_1044:
	var_58_string = "hit_react"; // 0x414 PushS
	var_59_string = "1"; // 0x415 PushS
	var_60_int = var_44_string + var_59_string; // 0x416 Add
	var_61_string = "2"; // 0x417 PushS
	var_62_int = var_44_string + var_61_string; // 0x418 Add
	var_63_int = -10; // 0x419 PushI
	FadeSecondaryAnimation(var_58_string, var_60_int, var_62_int, var_63_int); // 0x41a Func
	return 14; // 0x41c Return
	
Label_1043:
	var_44_string = "bhit"; // 0x413 MovS
}


func_1267()
{
	var_16_bool = 0; // 0x4f3 PushV
	func_1505(var_16_bool); // 0x4f4 NEW_2
	if(var_16_bool == 0) goto Label_1273; // 0x4f6 JumpB
	lshStopSpeech(); // 0x4f7 Func
	
Label_1273:
	return 0; // 0x4f9 Return
}


func_1140(var_28_bool, var_30_float)
{
	var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; // 0x474 PushV
	GetPosition(var_41_cvector); // 0x475 ObjFunc
	GetEyesHeight(var_40_float); // 0x477 ObjFunc
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x479 PushE
	var_49_float = var_49_float + var_40_float; // 0x47a Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x47b PopE
	GetPosition(var_42_cvector); // 0x47c Func
	GetEyesHeight(var_40_float); // 0x47e Func
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x480 PushE
	var_50_float = var_50_float + var_40_float; // 0x481 Add2
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x482 PopE
	var_43_cvector = var_41_cvector - var_42_cvector; // 0x483 Sub2
	var_51_float = GetByIndex(var_43_cvector, 1); // 0x484 PushE
	var_51_float = 0; // 0x485 MovI
	SetByIndex(var_43_cvector, 1) = var_51_float; // 0x486 PopE
	var_52_int = var_43_cvector | var_43_cvector; // 0x487 Or
	var_53_float = sqrt(var_52_int); // 0x488 Sqrt
	var_43_cvector = var_43_cvector / var_43_cvector; // 0x489 Div2
	var_44_cvector = -var_43_cvector; // 0x48a Neg2
	var_54_float = var_43_cvector * var_30_float; // 0x48b Mult
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); // 0x48c PushV
	var_57_cvector = CVector(0.0, 1.0, 0.0); // 0x48d PushVec
	var_56_cvector = var_44_cvector ^ var_57_cvector; // 0x48e Xor2
	func_1321(var_55_cvector, var_56_cvector); // 0x48f NEW_2
	var_63_int = 25; // 0x491 PushI
	var_64_float = var_55_cvector * var_63_int; // 0x492 Mult
	var_65_int = var_54_float + var_64_float; // 0x493 Add
	var_66_cvector = CVector(0.0, 10.0, 0.0); // 0x494 PushVec
	var_45_cvector = var_65_int - var_66_cvector; // 0x495 Sub2
	var_46_cvector = var_42_cvector + var_45_cvector; // 0x496 Add2
	IsOverrideActive(var_47_bool); // 0x497 Func
	var_67_bool = var_47_bool; // 0x499 Push
	if(var_67_bool == 0) goto Label_1181; // 0x49a JumpB
	var_28_bool = 0; // 0x49b MovB
	return 18; // 0x49c Return
	
Label_1181:
	StopWorld(); // 0x49d Func
	CameraTransit(var_46_cvector, var_44_cvector); // 0x49f Func
	var_68_float = GetByIndex(var_45_cvector, 0); // 0x4a1 PushE
	var_69_float = GetByIndex(var_45_cvector, 2); // 0x4a2 PushE
	Rotate(var_68_float, var_69_float); // 0x4a3 Func
	var_70_bool = 0; // 0x4a5 PushV
	func_1505(var_70_bool); // 0x4a6 NEW_2
	if(var_70_bool == 0) goto Label_1194; // 0x4a8 JumpB
	goto Label_1202; // 0x4a9 Jump
	
Label_1202:
	CameraWaitForPlayFinish(); // 0x4b2 Func
	ResumeWorld(); // 0x4b4 Func
	var_28_bool = 1; // 0x4b6 MovB
	return 18; // 0x4b7 Return
	
Label_1194:
	var_71_string = "head"; // 0x4aa PushS
	HasAnimationTrack(var_48_bool, var_71_string); // 0x4ab Func
	var_72_bool = var_48_bool; // 0x4ad Push
	if(var_72_bool == 0) goto Label_1202; // 0x4ae JumpB
	var_73_string = "head"; // 0x4af PushS
	LookAsyncCamera(var_73_string); // 0x4b0 Func
}


func_501()
{
	var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_float = 0; var_35_bool = 0; // 0x1f5 PushV
	WaitForAnimEnd(); // 0x1f6 Func
	var_36_bool = 0; // 0x1f8 PushV
	func_1135(var_36_bool); // 0x1f9 NEW_2
	var_37_bool = var_36_bool == 0; // 0x1fb Not
	if(var_37_bool == 0) goto Label_510; // 0x1fc JumpB
	return 14; // 0x1fd Return
	
Label_510:
	var_38_int = 0; // 0x1fe PushV
	func_1419(var_38_int); // 0x1ff NEW_2
	var_29_int = var_38_int; // 0x200 Mov
	var_30_int = 0; // 0x202 MovI
	
Label_515:
	var_51_bool = 0; // 0x203 PushV
	var_51_bool = 0; // 0x204 MovB
	var_52_int = 5; // 0x205 PushI
	var_53_bool = var_30_int < var_52_int; // 0x206 LT
	if(var_53_bool == 0) goto Label_525; // 0x207 JumpB
	var_54_bool = 0; // 0x208 PushV
	func_1135(var_54_bool); // 0x209 NEW_2
	if(var_54_bool == 0) goto Label_525; // 0x20b JumpB
	var_51_bool = 1; // 0x20c MovB
	
Label_525:
	if(var_51_bool == 0) goto Label_577; // 0x20d JumpB
	var_55_int = 3; // 0x20e PushI
	irand(var_31_int, var_55_int); // 0x20f Func
	var_56_int = 0; // 0x211 PushI
	var_57_bool = var_31_int == var_56_int; // 0x212 Eq
	if(var_57_bool == 0) goto Label_549; // 0x213 JumpB
	var_58_int = var_29_int; // 0x214 Push
	if(var_58_int == 0) goto Label_548; // 0x215 JumpB
	irand(var_32_int, var_29_int); // 0x216 Func
	var_59_string = "all"; // 0x218 PushS
	var_60_string = ""; var_61_int = 0; // 0x219 PushV
	var_61_int = var_32_int; // 0x21a Mov
	func_1412(var_60_string, var_61_int); // 0x21b NEW_2
	PlayAnimation(var_59_string, var_60_string); // 0x21d Func
	WaitForAnimEnd(var_33_bool); // 0x21f Func
	var_62_bool = var_33_bool == 0; // 0x221 Not
	if(var_62_bool == 0) goto Label_548; // 0x222 JumpB
	goto Label_577; // 0x223 Jump
	
Label_577:
	ResetAAS(); // 0x241 Func
	return 14; // 0x243 Return
	
Label_548:
	goto Label_566; // 0x224 Jump
	
Label_566:
	var_63_bool = 0; // 0x236 PushV
	func_580(var_63_bool); // 0x237 NEW_2
	var_64_bool = var_63_bool == 0; // 0x239 Not
	if(var_64_bool == 0) goto Label_572; // 0x23a JumpB
	goto Label_577; // 0x23b Jump
	
Label_572:
	ResetAAS(); // 0x23c Func
	var_65_int = 1; // 0x23e PushI
	var_30_int = var_30_int + var_65_int; // 0x23f Add2
	goto Label_515; // 0x240 Jump
	
Label_549:
	var_66_int = 1; // 0x225 PushI
	var_67_bool = var_31_int == var_66_int; // 0x226 Eq
	if(var_67_bool == 0) goto Label_563; // 0x227 JumpB
	var_68_int = 4; // 0x228 PushI
	rand(var_34_float, var_68_int); // 0x229 Func
	var_69_int = 1; // 0x22b PushI
	var_70_int = var_34_float + var_69_int; // 0x22c Add
	Sleep(var_70_int, var_35_bool); // 0x22d Func
	var_71_bool = var_35_bool == 0; // 0x22f Not
	if(var_71_bool == 0) goto Label_562; // 0x230 JumpB
	goto Label_577; // 0x231 Jump
	
Label_562:
	goto Label_566; // 0x232 Jump
	
Label_563:
	var_72_int = var_30_int; // 0x233 Push
	if(var_72_int == 0) goto Label_566; // 0x234 JumpB
	goto Label_577; // 0x235 Jump
}


func_1400(var_21_bool, var_22_string, var_23_string)
{
	var_24_object = Obj(); var_25_object = Obj(); // 0x578 PushV
	FindActor(var_25_object, var_22_string); // 0x579 Func
	var_26_bool = var_25_object == 0; // 0x57b NullEq
	if(var_26_bool == 0) goto Label_1407; // 0x57c JumpB
	var_21_bool = 0; // 0x57d MovB
	return 2; // 0x57e Return
	
Label_1407:
	Trigger(var_25_object, var_23_string); // 0x57f Func
	var_21_bool = 1; // 0x581 MovB
	return 2; // 0x582 Return
}


func_1274(var_88_string)
{
	var_89_bool = 0; var_90_int = 0; var_91_bool = 0; var_92_int = 0; var_93_bool = 0; var_94_float = 0; var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_bool = 0; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_bool = 0; var_102_float = 0; var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); // 0x4fa PushV
	IsExisting3DSound(var_97_bool, var_88_string); // 0x4fb Func
	var_105_bool = var_97_bool == 0; // 0x4fd Not
	if(var_105_bool == 0) goto Label_1299; // 0x4fe JumpB
	var_98_int = 0; // 0x4ff MovI
	
Label_1280:
	var_106_int = 1; // 0x500 PushI
	var_107_int = var_98_int + var_106_int; // 0x501 Add
	var_108_int = var_88_string + var_107_int; // 0x502 Add
	IsExisting3DSound(var_99_bool, var_108_int); // 0x503 Func
	var_109_bool = var_99_bool == 0; // 0x505 Not
	if(var_109_bool == 0) goto Label_1288; // 0x506 JumpB
	goto Label_1291; // 0x507 Jump
	
Label_1291:
	var_110_bool = var_98_int == 0; // 0x50b Not
	if(var_110_bool == 0) goto Label_1294; // 0x50c JumpB
	return 16; // 0x50d Return
	
Label_1294:
	irand(var_100_int, var_98_int); // 0x50e Func
	var_111_int = 1; // 0x510 PushI
	var_112_int = var_100_int + var_111_int; // 0x511 Add
	var_88_string = var_88_string + var_112_int; // 0x512 Add2
	
Label_1299:
	Is3DSoundLoaded(var_101_bool, var_88_string); // 0x513 Func
	var_113_bool = var_101_bool; // 0x515 Push
	if(var_113_bool == 0) goto Label_1314; // 0x516 JumpB
	GetEyesHeight(var_102_float); // 0x517 Func
	GetDirection(var_103_cvector); // 0x519 Func
	var_114_int = 50; // 0x51b PushI
	var_104_cvector = var_103_cvector * var_114_int; // 0x51c Mult2
	var_115_float = GetByIndex(var_104_cvector, 1); // 0x51d PushE
	var_115_float = var_115_float + var_102_float; // 0x51e Add2
	SetByIndex(var_104_cvector, 1) = var_115_float; // 0x51f PopE
	PlayGlobalSound(var_88_string, var_104_cvector); // 0x520 Func
	
Label_1314:
	return 16; // 0x522 Return
	
Label_1288:
	var_116_int = 1; // 0x508 PushI
	var_98_int = var_98_int + var_116_int; // 0x509 Add2
	goto Label_1280; // 0x50a Jump
}


func_763(var_2_object)
{
	Stop(); // 0x2fb Func
	var_14_int = 120; // 0x2fd PushI
	KillTimer(var_14_int); // 0x2fe Func
	var_2_object = 1; // 0x300 TMovB
	return 0; // 0x301 Return
}


func_638(var_0_object, var_1_object, var_2_object, var_27_object)
{
	var_32_cvector = CVector(0,0,0); var_33_float = 0; var_34_bool = 0; var_35_cvector = CVector(0,0,0); var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_float = 0; var_39_bool = 0; var_40_cvector = CVector(0,0,0); var_41_float = 0; // 0x27e PushV
	var_0_object = var_27_object; // 0x27f TMov
	var_42_cvector = CVector(0,0,0); var_43_float = 0; // 0x280 PushV
	var_43_float = 1.74533; // 0x281 MovF
	func_608(var_42_cvector, var_43_float); // 0x282 NEW_2
	var_37_cvector = var_42_cvector; // 0x283 Mov
	var_38_float = var_37_cvector | var_37_cvector; // 0x285 Or2
	var_72_float = 2500.0; // 0x286 PushF
	var_73_bool = var_38_float < var_72_float; // 0x287 LT
	if(var_73_bool == 0) goto Label_667; // 0x288 JumpB
	var_74_cvector = CVector(0,0,0); var_75_float = 0; // 0x289 PushV
	var_75_float = 2.61799; // 0x28a MovF
	func_608(var_74_cvector, var_75_float); // 0x28b NEW_2
	var_37_cvector = var_74_cvector; // 0x28c Mov
	var_38_float = var_37_cvector | var_37_cvector; // 0x28e Or2
	var_76_float = 2500.0; // 0x28f PushF
	var_77_bool = var_38_float < var_76_float; // 0x290 LT
	if(var_77_bool == 0) goto Label_667; // 0x291 JumpB
	var_78_string = "Can't retreat, distance: "; // 0x292 PushS
	var_79_float = sqrt(var_38_float); // 0x293 Sqrt
	var_80_int = var_78_string + var_79_float; // 0x294 Add
	Trace(var_80_int); // 0x295 Func
	var_81_float = 0.5; // 0x297 PushF
	Sleep(var_81_float); // 0x298 Func
	return 10; // 0x29a Return
	
Label_667:
	var_82_float = GetByIndex(var_37_cvector, 0); // 0x29b PushE
	var_83_float = GetByIndex(var_37_cvector, 2); // 0x29c PushE
	Rotate(var_82_float, var_83_float); // 0x29d Func
	var_84_cvector = CVector(0,0,0); // 0x29f PushV
	func_943(var_84_cvector); // 0x2a0 NEW_2
	var_1_object = var_84_cvector + var_37_cvector; // 0x2a2 Add2
	var_87_int = 120; // 0x2a3 PushI
	var_88_float = 0.5; // 0x2a4 PushF
	SetTimer(var_87_int, var_88_float); // 0x2a5 Func
	var_2_object = 0; // 0x2a7 TMovB
	
Label_680:
	var_89_int = 1; // 0x2a8 PushI
	MovePoint(var_89_int, var_89_int, var_39_bool); // 0x2a9 Func
	var_90_bool = var_39_bool; // 0x2ab Push
	if(var_90_bool == 0) goto Label_708; // 0x2ac JumpB
	var_91_bool = var_0_object == 0; // 0x2ad NullEq
	if(var_91_bool == 0) goto Label_689; // 0x2ae JumpB
	goto Label_710; // 0x2af Jump
	
Label_710:
	return 10; // 0x2c6 Return
	
Label_689:
	var_92_cvector = CVector(0,0,0); var_93_float = 0; // 0x2b1 PushV
	var_93_float = 2.61799; // 0x2b2 MovF
	func_608(var_92_cvector, var_93_float); // 0x2b3 NEW_2
	var_40_cvector = var_92_cvector; // 0x2b4 Mov
	var_41_float = var_40_cvector | var_40_cvector; // 0x2b6 Or2
	var_94_float = 2500.0; // 0x2b7 PushF
	var_95_bool = var_41_float >= var_94_float; // 0x2b8 GE
	if(var_95_bool == 0) goto Label_707; // 0x2b9 JumpB
	var_96_cvector = CVector(0,0,0); // 0x2ba PushV
	func_943(var_96_cvector); // 0x2bb NEW_2
	var_1_object = var_96_cvector + var_40_cvector; // 0x2bd Add2
	var_97_int = 120; // 0x2be PushI
	var_98_float = 0.5; // 0x2bf PushF
	SetTimer(var_97_int, var_98_float); // 0x2c0 Func
	goto Label_708; // 0x2c2 Jump
	
Label_708:
	var_99_bool = var_2_object == 0; // 0x2c4 Not
	if(var_99_bool == 0) goto Label_680; // 0x2c5 JumpB
	
Label_707:
	goto Label_710; // 0x2c3 Jump
}


