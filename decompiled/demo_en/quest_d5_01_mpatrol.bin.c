task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_int = 1; // 0xb4 PushI
	if(var_16_int == 0) goto Label_376; // 0xb5 JumpB
	func_1963(); // 0xb7 NEW_2
	var_18_int = 12905; // 0xb9 PushI
	var_19_bool = var_15_bool == var_18_int; // 0xba Eq
	if(var_19_bool == 0) goto Label_198; // 0xbb JumpB
	var_20_object = Obj(); var_21_object = Obj(); // 0xbc PushV
	var_20_object = var_1_object; // 0xbd MovT
	var_21_object = var_0_object; // 0xbe MovT
	func_2119(); // 0xbf NEW_2
	var_40_object = Obj(); var_41_object = Obj(); // 0xc1 PushV
	var_40_object = var_1_object; // 0xc2 MovT
	var_41_object = var_0_object; // 0xc3 MovT
	func_2097(); // 0xc4 NEW_2
	
Label_198:
	var_66_int = 12906; // 0xc6 PushI
	var_67_bool = var_15_bool == var_66_int; // 0xc7 Eq
	if(var_67_bool == 0) goto Label_206; // 0xc8 JumpB
	var_68_object = Obj(); var_69_object = Obj(); // 0xc9 PushV
	var_68_object = var_1_object; // 0xca MovT
	var_69_object = var_0_object; // 0xcb MovT
	func_2119(); // 0xcc NEW_2
	
Label_206:
	var_70_int = 16859; // 0xce PushI
	var_71_bool = var_15_bool == var_70_int; // 0xcf Eq
	if(var_71_bool == 0) goto Label_219; // 0xd0 JumpB
	var_72_object = Obj(); var_73_object = Obj(); // 0xd1 PushV
	var_72_object = var_1_object; // 0xd2 MovT
	var_73_object = var_0_object; // 0xd3 MovT
	func_2119(); // 0xd4 NEW_2
	var_74_object = Obj(); var_75_object = Obj(); // 0xd6 PushV
	var_74_object = var_1_object; // 0xd7 MovT
	var_75_object = var_0_object; // 0xd8 MovT
	func_2097(); // 0xd9 NEW_2
	
Label_219:
	var_76_int = 12892; // 0xdb PushI
	var_77_bool = var_14_object == var_76_int; // 0xdc Eq
	if(var_77_bool == 0) goto Label_267; // 0xdd JumpB
	var_78_bool = 0; var_79_object = Obj(); // 0xde PushV
	var_79_object = var_1_object; // 0xdf MovT
	func_2139(var_79_object); // 0xe0 NEW_2
	if(var_78_bool == 0) goto Label_247; // 0xe2 JumpB
	var_86_object = Obj(); var_87_object = Obj(); // 0xe3 PushV
	var_86_object = var_1_object; // 0xe4 MovT
	var_87_object = var_0_object; // 0xe5 MovT
	func_2113(); // 0xe6 NEW_2
	var_90_string = ""; // 0xe8 PushV
	var_90_string = "Neutral"; // 0xe9 MovS
	func_157(var_15_bool, var_90_string); // 0xea NEW_2
	var_107_int = 511690; // 0xec PushI
	SetMessage(var_107_int); // 0xed TObjFunc
	ClearReplies(); // 0xef TObjFunc
	var_108_int = 511691; // 0xf1 PushI
	var_109_int = 12894; // 0xf2 PushI
	var_110_int = 12893; // 0xf3 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0xf4 TObjFunc
	return 0; // 0xf6 Return
	
Label_247:
	var_111_string = ""; // 0xf7 PushV
	var_111_string = "Neutral"; // 0xf8 MovS
	func_157(var_15_bool, var_111_string); // 0xf9 NEW_2
	var_112_int = 512483; // 0xfb PushI
	SetMessage(var_112_int); // 0xfc TObjFunc
	ClearReplies(); // 0xfe TObjFunc
	var_113_int = 512484; // 0x100 PushI
	var_114_int = -1; // 0x101 PushI
	var_115_int = 13652; // 0x102 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x103 TObjFunc
	var_116_int = 515786; // 0x105 PushI
	var_117_int = -1; // 0x106 PushI
	var_118_int = 16858; // 0x107 PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x108 TObjFunc
	return 0; // 0x10a Return
	
Label_267:
	var_119_int = 12894; // 0x10b PushI
	var_120_bool = var_14_object == var_119_int; // 0x10c Eq
	if(var_120_bool == 0) goto Label_295; // 0x10d JumpB
	var_121_string = ""; // 0x10e PushV
	var_121_string = "Neutral"; // 0x10f MovS
	func_157(var_15_bool, var_121_string); // 0x110 NEW_2
	var_122_int = 511692; // 0x112 PushI
	SetMessage(var_122_int); // 0x113 TObjFunc
	ClearReplies(); // 0x115 TObjFunc
	var_123_int = 511693; // 0x117 PushI
	var_124_int = 12901; // 0x118 PushI
	var_125_int = 12895; // 0x119 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x11a TObjFunc
	var_126_int = 511694; // 0x11c PushI
	var_127_int = 12898; // 0x11d PushI
	var_128_int = 12896; // 0x11e PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x11f TObjFunc
	var_129_int = 511695; // 0x121 PushI
	var_130_int = 12898; // 0x122 PushI
	var_131_int = 12897; // 0x123 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x124 TObjFunc
	return 0; // 0x126 Return
	
Label_295:
	var_132_int = 12898; // 0x127 PushI
	var_133_bool = var_14_object == var_132_int; // 0x128 Eq
	if(var_133_bool == 0) goto Label_318; // 0x129 JumpB
	var_134_string = ""; // 0x12a PushV
	var_134_string = "Neutral"; // 0x12b MovS
	func_157(var_15_bool, var_134_string); // 0x12c NEW_2
	var_135_int = 511696; // 0x12e PushI
	SetMessage(var_135_int); // 0x12f TObjFunc
	ClearReplies(); // 0x131 TObjFunc
	var_136_int = 511697; // 0x133 PushI
	var_137_int = 12901; // 0x134 PushI
	var_138_int = 12900; // 0x135 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x136 TObjFunc
	var_139_int = 515787; // 0x138 PushI
	var_140_int = -1; // 0x139 PushI
	var_141_int = 16859; // 0x13a PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x13b TObjFunc
	return 0; // 0x13d Return
	
Label_318:
	var_142_int = 12901; // 0x13e PushI
	var_143_bool = var_14_object == var_142_int; // 0x13f Eq
	if(var_143_bool == 0) goto Label_341; // 0x140 JumpB
	var_144_string = ""; // 0x141 PushV
	var_144_string = "Neutral"; // 0x142 MovS
	func_157(var_15_bool, var_144_string); // 0x143 NEW_2
	var_145_int = 511698; // 0x145 PushI
	SetMessage(var_145_int); // 0x146 TObjFunc
	ClearReplies(); // 0x148 TObjFunc
	var_146_int = 511699; // 0x14a PushI
	var_147_int = 12904; // 0x14b PushI
	var_148_int = 12902; // 0x14c PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x14d TObjFunc
	var_149_int = 515788; // 0x14f PushI
	var_150_int = -1; // 0x150 PushI
	var_151_int = 16860; // 0x151 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x152 TObjFunc
	return 0; // 0x154 Return
	
Label_341:
	var_152_int = 12904; // 0x155 PushI
	var_153_bool = var_14_object == var_152_int; // 0x156 Eq
	if(var_153_bool == 0) goto Label_364; // 0x157 JumpB
	var_154_string = ""; // 0x158 PushV
	var_154_string = "Neutral"; // 0x159 MovS
	func_157(var_15_bool, var_154_string); // 0x15a NEW_2
	var_155_int = 511700; // 0x15c PushI
	SetMessage(var_155_int); // 0x15d TObjFunc
	ClearReplies(); // 0x15f TObjFunc
	var_156_int = 511701; // 0x161 PushI
	var_157_int = -1; // 0x162 PushI
	var_158_int = 12905; // 0x163 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x164 TObjFunc
	var_159_int = 511702; // 0x166 PushI
	var_160_int = -1; // 0x167 PushI
	var_161_int = 12906; // 0x168 PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x169 TObjFunc
	return 0; // 0x16b Return
	
Label_364:
	var_3_string = 1; // 0x16c TMovB
	var_162_bool = 0; // 0x16d PushV
	func_2323(var_162_bool); // 0x16e NEW_2
	if(var_162_bool == 0) goto Label_372; // 0x170 JumpB
	lshStopAnimation(); // 0x171 Func
	goto Label_374; // 0x173 Jump
	
Label_374:
	return 0; // 0x176 Return
	
Label_372:
	StopAnimation(); // 0x174 Func
	
Label_376:
	return 0; // 0x178 Return
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_int)
{
	var_15_int = 1; // 0x456 PushI
	var_16_bool = var_14_int == var_15_int; // 0x457 Eq
	if(var_16_bool == 0) goto Label_1118; // 0x458 JumpB
	var_17_object = Obj(); // 0x459 PushV
	var_17_object = var_1_object; // 0x45a MovT
	func_2077(var_17_object); // 0x45b NEW_2
	goto Label_1122; // 0x45d Jump
	
Label_1122:
	return 0; // 0x462 Return
	
Label_1118:
	var_22_int = 0; // 0x45e PushV
	var_22_int = var_14_int; // 0x45f Mov
	func_1267(var_13_bool, var_14_int, var_22_int); // 0x460 NEW_2
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	var_15_bool = 0; // 0x471 PushV
	var_15_bool = 0; // 0x472 MovB
	var_16_bool = var_1_object == var_14_object; // 0x473 Eq
	if(var_16_bool == 0) goto Label_1144; // 0x474 JumpB
	var_17_bool = var_2_object == 0; // 0x475 Not
	if(var_17_bool == 0) goto Label_1144; // 0x476 JumpB
	var_15_bool = 1; // 0x477 MovB
	
Label_1144:
	if(var_15_bool == 0) goto Label_1150; // 0x478 JumpB
	var_2_object = 1; // 0x479 TMovB
	var_18_object = Obj(); // 0x47a PushV
	var_18_object = var_14_object; // 0x47b Mov
	func_1952(var_18_object); // 0x47c NEW_2
	
Label_1150:
	return 0; // 0x47e Return
}


task_3_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	var_15_bool = 0; // 0x480 PushV
	var_15_bool = 0; // 0x481 MovB
	var_16_bool = var_1_object == var_14_object; // 0x482 Eq
	if(var_16_bool == 0) goto Label_1159; // 0x483 JumpB
	var_17_object = var_2_object; // 0x484 PushT
	if(var_17_object == 0) goto Label_1159; // 0x485 JumpB
	var_15_bool = 1; // 0x486 MovB
	
Label_1159:
	if(var_15_bool == 0) goto Label_1164; // 0x487 JumpB
	var_2_object = 0; // 0x488 TMovB
	var_18_string = "head"; // 0x489 PushS
	UnlookAsync(var_18_string); // 0x48a Func
	
Label_1164:
	return 0; // 0x48c Return
}


task_3_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	RequestClearPath(var_14_object); // 0x506 Func
	return 0; // 0x508 Return
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	func_1123(var_14_object); // 0x512 NEW_2
	var_19_object = Obj(); // 0x514 PushV
	var_19_object = var_14_object; // 0x515 Mov
	func_2309(); // 0x516 NEW_2
	return 0; // 0x518 Return
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0; // 0x539 PushV
	IsOverrideActive(var_16_bool); // 0x53a Func
	var_17_bool = var_16_bool == 0; // 0x53c Not
	if(var_17_bool == 0) goto Label_1346; // 0x53d JumpB
	var_18_object = Obj(); // 0x53e PushV
	var_18_object = var_14_object; // 0x53f Mov
	func_2224(var_18_object); // 0x540 NEW_2
	
Label_1346:
	return 2; // 0x542 Return
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_object = Obj(); // 0x543 PushV
	func_2011(var_14_object); // 0x544 NEW_2
	RemoveActor(var_14_object); // 0x546 Func
	Hold(); // 0x548 Func
	return 0; // 0x54a Return
}


task_4_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_float, var_17_float)
{
	return 0; // 0x5c1 Return
}


task_4_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_string)
{
	return 0; // 0x5c3 Return
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	return 0; // 0x5c5 Return
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	var_15_bool = 0; // 0x5d3 PushV
	func_1500(var_15_bool); // 0x5d4 NEW_2
	if(var_15_bool == 0) goto Label_1499; // 0x5d6 JumpB
	var_16_object = Obj(); // 0x5d7 PushV
	var_16_object = var_14_object; // 0x5d8 Mov
	func_1478(var_16_object); // 0x5d9 NEW_2
	
Label_1499:
	return 0; // 0x5db Return
}


task_5_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0; // 0x5de PushV
	IsPlayerActor(var_14_object, var_16_bool); // 0x5df Func
	var_17_bool = var_16_bool; // 0x5e1 Push
	if(var_17_bool == 0) goto Label_1512; // 0x5e2 JumpB
	var_18_bool = 0; var_19_string = ""; var_20_string = ""; // 0x5e3 PushV
	var_19_string = "quest_d5_01"; // 0x5e4 MovS
	var_20_string = "factory_fight"; // 0x5e5 MovS
	func_2060(var_18_bool, var_19_string, var_20_string); // 0x5e6 NEW_2
	
Label_1512:
	return 2; // 0x5e8 Return
}


task_5_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_string)
{
	var_15_string = "attack"; // 0x5ea PushS
	var_16_bool = var_14_string == var_15_string; // 0x5eb Eq
	if(var_16_bool == 0) goto Label_1522; // 0x5ec JumpB
	TaskCall(2); // 0x5ee TaskCall
	func_377(); // 0x5ef NEW_2
	TaskReturn(); // 0x5f0 TaskReturn
	
Label_1522:
	return 0; // 0x5f2 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_float, var_17_float)
{
	var_18_object = Obj(); var_19_int = 0; var_20_float = 0; // 0x8e7 PushV
	var_18_object = var_14_object; // 0x8e8 Mov
	var_19_int = var_15_int; // 0x8e9 Mov
	var_20_float = var_16_float; // 0x8ea Mov
	func_1743(var_18_object, var_19_int, var_20_float); // 0x8eb NEW_2
	return 0; // 0x8ed Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_float, var_17_float, var_18_cvector, var_19_cvector)
{
	var_20_object = Obj(); var_21_int = 0; var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x8ef PushV
	var_20_object = var_14_object; // 0x8f0 Mov
	var_21_int = var_15_int; // 0x8f1 Mov
	var_22_float = var_16_float; // 0x8f2 Mov
	var_23_cvector = var_18_cvector; // 0x8f3 Mov
	var_24_cvector = var_19_cvector; // 0x8f4 Mov
	func_1811(var_22_float, var_23_cvector, var_24_cvector); // 0x8f5 NEW_2
	return 0; // 0x8f7 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_string)
{
	var_16_float = 0; var_17_float = 0; // 0x8f8 PushV
	var_18_string = "health"; // 0x8f9 PushS
	var_19_bool = var_15_string == var_18_string; // 0x8fa Eq
	if(var_19_bool == 0) goto Label_2308; // 0x8fb JumpB
	var_20_string = "health"; // 0x8fc PushS
	GetProperty(var_20_string, var_17_float); // 0x8fd Func
	var_21_int = 0; // 0x8ff PushI
	var_22_bool = var_17_float <= var_21_int; // 0x900 LE
	if(var_22_bool == 0) goto Label_2308; // 0x901 JumpB
	SignalDeath(var_14_object); // 0x902 Func
	
Label_2308:
	return 2; // 0x904 Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	var_15_object = Obj(); // 0x906 PushV
	var_15_object = var_14_object; // 0x907 Mov
	func_2325(var_15_object); // 0x908 NEW_2
	return 0; // 0x90a Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	
Label_1486:
	Hold(); // 0x5ce Func
	goto Label_1486; // 0x5d0 Jump
}


func_0(var_0_object, var_17_int, var_18_object)
{
	var_20_object = Obj(); var_21_bool = 0; var_22_int = 0; var_23_bool = 0; var_24_object = Obj(); var_25_bool = 0; var_26_int = 0; var_27_bool = 0; // 0x0 PushV
	var_0_object = var_18_object; // 0x1 TMov
	var_28_bool = 0; var_29_object = Obj(); var_30_float = 0; // 0x2 PushV
	var_29_object = var_18_object; // 0x3 Mov
	var_30_float = 70.0; // 0x4 MovF
	func_1836(var_29_object, var_30_float); // 0x5 NEW_2
	var_74_bool = var_28_bool == 0; // 0x7 Not
	if(var_74_bool == 0) goto Label_11; // 0x8 JumpB
	var_17_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_24_object); // 0xb Func
	var_75_int = 0; // 0xd PushV
	func_2317(var_75_int); // 0xe NEW_2
	SetNPCName(var_75_int); // 0x10 ObjFunc
	var_76_int = 0; // 0x12 PushV
	func_2315(var_76_int); // 0x13 NEW_2
	SetNPCDescription(var_76_int); // 0x15 ObjFunc
	var_77_string = ""; // 0x17 PushV
	func_2319(var_77_string); // 0x18 NEW_2
	SetPhoto(var_77_string); // 0x1a ObjFunc
	var_78_string = ""; // 0x1c PushV
	func_2321(var_78_string); // 0x1d NEW_2
	SetPhoto2(var_78_string); // 0x1f ObjFunc
	var_79_int = 0; // 0x21 PushV
	func_2201(var_79_int); // 0x22 NEW_2
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
	func_1904(); // 0x41 NEW_2
	StopDialog(var_24_object); // 0x43 Func
	GetReturnValue(var_26_int); // 0x45 ObjFunc
	var_17_int = var_26_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1537(var_48_cvector)
{
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x601 PushV
	GetPosition(var_52_cvector); // 0x602 Func
	GetPosition(var_53_cvector); // 0x604 ObjFunc
	var_48_cvector = var_53_cvector - var_52_cvector; // 0x606 Sub2
	return 4; // 0x607 Return
}


func_2050(var_455_float)
{
	var_456_object = Obj(); var_457_object = Obj(); // 0x802 PushV
	CreateFloatVector(var_457_object); // 0x803 Func
	add(var_455_float); // 0x805 ObjFunc
	var_458_int = 15; // 0x807 PushI
	SendWorldWndMessage(var_458_int, var_457_object); // 0x808 Func
	return 2; // 0x80a Return
}


func_1544(var_154_bool, var_155_object)
{
	var_156_bool = 0; var_157_bool = 0; // 0x608 PushV
	IsPlayerActor(var_155_object, var_157_bool); // 0x609 Func
	var_154_bool = var_157_bool; // 0x60b Mov
	return 2; // 0x60c Return
}


func_1289(var_0_object)
{
	var_0_object = 1; // 0x509 TMovB
	var_18_int = 0; // 0x50a PushI
	KillTimer(var_18_int); // 0x50b Func
	Stop(); // 0x50d Func
	return 0; // 0x50f Return
}


func_2315(var_76_int)
{
	var_76_int = 515572; // 0x90b MovI
	return 0; // 0x90c Return
}


func_2060(var_25_bool, var_26_string, var_27_string)
{
	var_28_object = Obj(); var_29_object = Obj(); // 0x80c PushV
	FindActor(var_29_object, var_26_string); // 0x80d Func
	var_30_bool = var_29_object == 0; // 0x80f NullEq
	if(var_30_bool == 0) goto Label_2067; // 0x810 JumpB
	var_25_bool = 0; // 0x811 MovB
	return 2; // 0x812 Return
	
Label_2067:
	Trigger(var_29_object, var_27_string); // 0x813 Func
	var_25_bool = 1; // 0x815 MovB
	return 2; // 0x816 Return
}


func_1549(var_110_bool, var_111_object, var_112_string)
{
	var_113_bool = 0; var_114_bool = 0; // 0x60d PushV
	var_115_string = "HasProperty"; // 0x60e PushS
	var_116_int = 2; // 0x60f PushI
	var_117_bool = IsFuncExist(var_111_object, var_115_string, var_116_int); // 0x610 FuncExist
	var_118_bool = var_117_bool == 0; // 0x611 Not
	if(var_118_bool == 0) goto Label_1557; // 0x612 JumpB
	var_110_bool = 0; // 0x613 MovB
	return 2; // 0x614 Return
	
Label_1557:
	HasProperty(var_112_string, var_114_bool); // 0x615 ObjFunc
	var_110_bool = var_114_bool; // 0x617 Mov
	return 2; // 0x618 Return
}


func_2317(var_75_int)
{
	var_75_int = 504031; // 0x90d MovI
	return 0; // 0x90e Return
}


func_2319(var_77_string)
{
	var_77_string = "ui/NPC_Citizen2.png"; // 0x90f MovS
	return 0; // 0x910 Return
}


func_1040(var_0_object)
{
	var_123_object = Obj(); // 0x410 PushV
	var_123_object = var_0_object; // 0x411 MovT
	func_2077(var_123_object); // 0x412 NEW_2
	return 0; // 0x414 Return
}


func_2321(var_78_string)
{
	var_78_string = "ui/NPC_Citizen2_b.png"; // 0x911 MovS
	return 0; // 0x912 Return
}


func_2323(var_70_bool)
{
	var_70_bool = 0; // 0x913 MovB
	return 0; // 0x914 Return
}


func_1811(var_20_object, var_23_cvector, var_24_cvector)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); // 0x713 PushV
	GetScene(var_27_object); // 0x714 Func
	var_29_string = "scripted"; // 0x716 PushS
	var_30_string = "blood_dir.xml"; // 0x717 PushS
	AddActorByType(var_28_object, var_29_string, var_27_object, var_23_cvector, var_24_cvector, var_30_string); // 0x718 Func
	var_31_object = Obj(); // 0x71a PushV
	var_31_object = var_20_object; // 0x71b Mov
	func_1699(var_31_object); // 0x71c NEW_2
	return 4; // 0x71e Return
}


func_1045(var_460_int)
{
	var_460_int = 0; // 0x415 MovI
	return 0; // 0x416 Return
}


func_2325(var_15_object)
{
	var_16_bool = 0; var_17_bool = 0; // 0x915 PushV
	var_18_string = "revolver_ammo"; // 0x916 PushS
	var_19_int = 0; // 0x917 PushI
	var_20_int = 2; // 0x918 PushI
	AddItem(var_17_bool, var_18_string, var_19_int, var_20_int); // 0x919 Func
	var_21_string = "alpha_pills"; // 0x91b PushS
	var_22_int = 0; // 0x91c PushI
	var_23_int = 2; // 0x91d PushI
	AddItem(var_17_bool, var_21_string, var_22_int, var_23_int); // 0x91e Func
	var_24_object = Obj(); // 0x920 PushV
	var_24_object = var_15_object; // 0x921 Mov
	TaskCall(4); // 0x922 TaskCall
	func_1316(var_24_object); // 0x923 NEW_2
	TaskReturn(); // 0x924 TaskReturn
	return 2; // 0x926 Return
}


func_1047()
{
	var_256_string = ""; // 0x417 PushV
	var_256_string = "attack_stay"; // 0x418 MovS
	func_1970(var_256_string); // 0x419 NEW_2
	return 0; // 0x41b Return
}


func_2072(var_37_float)
{
	var_38_float = 0; var_39_float = 0; // 0x818 PushV
	GetGameTime(var_39_float); // 0x819 Func
	var_37_float = var_39_float; // 0x81b Mov
	return 2; // 0x81c Return
}


func_1561(var_399_float, var_400_object, var_401_float, var_402_int)
{
	var_406_int = 0; var_407_string = ""; var_408_int = 0; var_409_float = 0; var_410_float = 0; var_411_float = 0; var_412_int = 0; var_413_string = ""; var_414_int = 0; var_415_float = 0; var_416_float = 0; var_417_float = 0; // 0x619 PushV
	var_418_bool = 0; var_419_object = Obj(); var_420_string = ""; // 0x61a PushV
	var_419_object = var_400_object; // 0x61b Mov
	var_420_string = "health"; // 0x61c MovS
	func_1549(var_418_bool, var_419_object, var_420_string); // 0x61d NEW_2
	var_421_bool = var_418_bool == 0; // 0x61f Not
	if(var_421_bool == 0) goto Label_1571; // 0x620 JumpB
	var_399_float = 0.0; // 0x621 MovF
	return 12; // 0x622 Return
	
Label_1571:
	var_422_bool = 0; var_423_object = Obj(); var_424_string = ""; // 0x623 PushV
	var_423_object = var_400_object; // 0x624 Mov
	var_424_string = "armor"; // 0x625 MovS
	func_1549(var_422_bool, var_423_object, var_424_string); // 0x626 NEW_2
	var_425_bool = var_422_bool == 0; // 0x628 Not
	if(var_425_bool == 0) goto Label_1580; // 0x629 JumpB
	var_412_int = 0; // 0x62a MovI
	goto Label_1583; // 0x62b Jump
	
Label_1583:
	var_426_string = "armor_"; // 0x62f PushS
	var_427_string = ""; var_428_int = 0; // 0x630 PushV
	var_428_int = var_402_int; // 0x631 Mov
	func_1523(var_427_string, var_428_int); // 0x632 NEW_2
	var_413_string = var_426_string + var_427_string; // 0x634 Add2
	var_433_bool = 0; var_434_object = Obj(); var_435_string = ""; // 0x635 PushV
	var_434_object = var_400_object; // 0x636 Mov
	var_435_string = var_413_string; // 0x637 Mov
	func_1549(var_433_bool, var_434_object, var_435_string); // 0x638 NEW_2
	var_436_bool = var_433_bool == 0; // 0x63a Not
	if(var_436_bool == 0) goto Label_1598; // 0x63b JumpB
	var_414_int = 0; // 0x63c MovI
	goto Label_1600; // 0x63d Jump
	
Label_1600:
	var_437_float = 0; var_438_float = 0; var_439_float = 0; // 0x640 PushV
	var_440_int = var_412_int + var_414_int; // 0x641 Add
	var_441_float = 100.0; // 0x642 PushF
	var_438_float = var_440_int / var_440_int; // 0x643 Div2
	var_439_float = 1; // 0x644 MovI
	func_2027(var_437_float, var_438_float, var_439_float); // 0x645 NEW_2
	var_415_float = var_437_float; // 0x646 Mov
	var_443_string = "health"; // 0x648 PushS
	GetProperty(var_443_string, var_416_float); // 0x649 ObjFunc
	var_444_int = 1; // 0x64b PushI
	var_445_int = var_444_int - var_415_float; // 0x64c Sub
	var_417_float = var_401_float * var_445_int; // 0x64d Mult2
	var_446_string = "health"; // 0x64e PushS
	var_447_float = 0; var_448_float = 0; var_449_float = 0; var_450_float = 0; // 0x64f PushV
	var_448_float = var_416_float - var_417_float; // 0x650 Sub2
	var_449_float = 0; // 0x651 MovI
	var_450_float = 1; // 0x652 MovI
	func_2034(var_447_float, var_448_float, var_449_float, var_450_float); // 0x653 NEW_2
	SetProperty(var_446_string, var_447_float); // 0x655 ObjFunc
	var_453_bool = 0; var_454_object = Obj(); // 0x657 PushV
	var_454_object = var_400_object; // 0x658 Mov
	func_1544(var_453_bool, var_454_object); // 0x659 NEW_2
	if(var_453_bool == 0) goto Label_1632; // 0x65b JumpB
	var_455_float = 0; // 0x65c PushV
	var_455_float = -var_417_float; // 0x65d Neg2
	func_2050(var_455_float); // 0x65e NEW_2
	
Label_1632:
	var_399_float = var_417_float; // 0x660 Mov
	return 12; // 0x661 Return
	
Label_1598:
	GetProperty(var_413_string, var_414_int); // 0x63e ObjFunc
	
Label_1580:
	var_459_string = "armor"; // 0x62c PushS
	GetProperty(var_459_string, var_412_int); // 0x62d ObjFunc
}


func_1305(var_181_bool, var_182_object)
{
	var_183_bool = 0; var_184_object = Obj(); // 0x51a PushV
	var_184_object = var_182_object; // 0x51b Mov
	func_1675(var_183_bool, var_184_object); // 0x51c NEW_2
	var_181_bool = var_183_bool; // 0x51d Mov
	return 0; // 0x51f Return
}


func_1052()
{
	return 0; // 0x41d Return
}


func_2077(var_123_object)
{
	var_124_bool = 0; var_125_bool = 0; // 0x81d PushV
	IsPlayerActor(var_123_object, var_125_bool); // 0x81e Func
	var_126_bool = var_125_bool; // 0x820 Push
	if(var_126_bool == 0) goto Label_2085; // 0x821 JumpB
	var_127_string = "attack"; // 0x822 PushS
	PlayGlobalMusic(var_127_string); // 0x823 Func
	
Label_2085:
	return 2; // 0x825 Return
}


func_1054(var_485_bool)
{
	var_485_bool = 1; // 0x41e MovB
	return 0; // 0x41f Return
}


func_1056(var_381_int)
{
	var_381_int = 1; // 0x420 MovI
	return 0; // 0x421 Return
}


func_1312(var_199_string)
{
	var_199_string = "walk"; // 0x520 MovS
	return 0; // 0x521 Return
}


func_1058(var_376_float)
{
	var_376_float = 0.5; // 0x422 MovF
	return 0; // 0x423 Return
}


func_1825()
{
	var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_cvector = CVector(0,0,0); var_237_cvector = CVector(0,0,0); var_238_cvector = CVector(0,0,0); var_239_cvector = CVector(0,0,0); // 0x721 PushV
	GetPosition(var_237_cvector); // 0x722 ObjFunc
	GetPosition(var_238_cvector); // 0x724 Func
	var_239_cvector = var_237_cvector - var_238_cvector; // 0x726 Sub2
	var_240_float = GetByIndex(var_239_cvector, 0); // 0x727 PushE
	var_241_float = GetByIndex(var_239_cvector, 2); // 0x728 PushE
	RotateAsync(var_240_float, var_241_float); // 0x729 Func
	return 6; // 0x72b Return
}


func_1060(var_2_object, var_130_bool, var_131_object, var_132_float, var_133_float, var_134_bool, var_135_bool)
{
	var_139_bool = 0; var_140_bool = 0; var_141_bool = 0; var_142_bool = 0; // 0x424 PushV
	var_143_object = Obj(); // 0x425 PushV
	var_143_object = var_131_object; // 0x426 Mov
	func_2077(var_143_object); // 0x427 NEW_2
	var_144_int = 1; // 0x429 PushI
	var_145_int = 5; // 0x42a PushI
	SetTimer(var_144_int, var_145_int); // 0x42b Func
	CanSee(var_141_bool, var_131_object); // 0x42d Func
	var_146_bool = var_141_bool; // 0x42f Push
	if(var_146_bool == 0) goto Label_1079; // 0x430 JumpB
	var_2_object = 1; // 0x431 TMovB
	var_147_object = Obj(); // 0x432 PushV
	var_147_object = var_131_object; // 0x433 Mov
	func_1952(var_147_object); // 0x434 NEW_2
	goto Label_1080; // 0x436 Jump
	
Label_1080:
	var_154_bool = 0; var_155_object = Obj(); // 0x438 PushV
	var_155_object = var_131_object; // 0x439 Mov
	func_1544(var_154_bool, var_155_object); // 0x43a NEW_2
	if(var_154_bool == 0) goto Label_1090; // 0x43c JumpB
	var_158_object = Obj(); // 0x43d PushV
	func_2011(var_158_object); // 0x43e NEW_2
	SendPlayerEnemy(var_131_object, var_158_object); // 0x440 Func
	
Label_1090:
	var_159_bool = 0; var_160_object = Obj(); var_161_float = 0; var_162_float = 0; var_163_bool = 0; var_164_bool = 0; // 0x442 PushV
	var_160_object = var_131_object; // 0x443 Mov
	var_161_float = var_132_float; // 0x444 Mov
	var_162_float = var_133_float; // 0x445 Mov
	var_163_bool = var_134_bool; // 0x446 Mov
	var_164_bool = var_135_bool; // 0x447 Mov
	func_1165(var_141_bool, var_142_bool, var_159_bool, var_160_object, var_161_float, var_162_float, var_163_bool, var_164_bool); // 0x448 NEW_2
	var_142_bool = var_159_bool; // 0x449 Mov
	var_210_object = var_2_object; // 0x44b PushT
	if(var_210_object == 0) goto Label_1104; // 0x44c JumpB
	var_211_string = "head"; // 0x44d PushS
	UnlookAsync(var_211_string); // 0x44e Func
	
Label_1104:
	var_212_int = 1; // 0x450 PushI
	KillTimer(var_212_int); // 0x451 Func
	var_130_bool = var_142_bool; // 0x453 Mov
	return 4; // 0x454 Return
	
Label_1079:
	var_2_object = 0; // 0x437 TMovB
}


func_1314(var_200_string)
{
	var_200_string = "run"; // 0x522 MovS
	return 0; // 0x523 Return
}


func_2086()
{
	var_360_object = Obj(); var_361_object = Obj(); // 0x826 PushV
	GetScene(var_361_object); // 0x827 Func
	var_362_string = "battle"; // 0x829 PushS
	var_363_object = Obj(); // 0x82a PushV
	func_2011(var_363_object); // 0x82b NEW_2
	BroadcastMessage(var_362_string, var_363_object, var_361_object); // 0x82d Func
	return 2; // 0x82f Return
}


func_1316(var_24_object)
{
	var_25_bool = 0; var_26_string = ""; var_27_string = ""; // 0x525 PushV
	var_26_string = "quest_d5_01"; // 0x526 MovS
	var_27_string = "dead"; // 0x527 MovS
	func_2060(var_25_bool, var_26_string, var_27_string); // 0x528 NEW_2
	var_31_object = Obj(); // 0x52a PushV
	var_31_object = var_24_object; // 0x52b Mov
	func_1355(var_31_object); // 0x52c NEW_2
	var_111_int = 50; // 0x52e PushI
	var_112_int = 40; // 0x52f PushI
	SetRTEnvelope(var_111_int, var_112_int); // 0x530 Func
	func_2254(); // 0x533 NEW_2
	
Label_1333:
	Hold(); // 0x535 Func
	goto Label_1333; // 0x537 Jump
}


func_1836(var_28_bool, var_30_float)
{
	var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; // 0x72c PushV
	GetPosition(var_41_cvector); // 0x72d ObjFunc
	GetEyesHeight(var_40_float); // 0x72f ObjFunc
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x731 PushE
	var_49_float = var_49_float + var_40_float; // 0x732 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x733 PopE
	GetPosition(var_42_cvector); // 0x734 Func
	GetEyesHeight(var_40_float); // 0x736 Func
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x738 PushE
	var_50_float = var_50_float + var_40_float; // 0x739 Add2
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x73a PopE
	var_43_cvector = var_41_cvector - var_42_cvector; // 0x73b Sub2
	var_51_float = GetByIndex(var_43_cvector, 1); // 0x73c PushE
	var_51_float = 0; // 0x73d MovI
	SetByIndex(var_43_cvector, 1) = var_51_float; // 0x73e PopE
	var_52_int = var_43_cvector | var_43_cvector; // 0x73f Or
	var_53_float = sqrt(var_52_int); // 0x740 Sqrt
	var_43_cvector = var_43_cvector / var_43_cvector; // 0x741 Div2
	var_44_cvector = -var_43_cvector; // 0x742 Neg2
	var_54_float = var_43_cvector * var_30_float; // 0x743 Mult
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); // 0x744 PushV
	var_57_cvector = CVector(0.0, 1.0, 0.0); // 0x745 PushVec
	var_56_cvector = var_44_cvector ^ var_57_cvector; // 0x746 Xor2
	func_2017(var_55_cvector, var_56_cvector); // 0x747 NEW_2
	var_63_int = 25; // 0x749 PushI
	var_64_float = var_55_cvector * var_63_int; // 0x74a Mult
	var_65_int = var_54_float + var_64_float; // 0x74b Add
	var_66_cvector = CVector(0.0, 10.0, 0.0); // 0x74c PushVec
	var_45_cvector = var_65_int - var_66_cvector; // 0x74d Sub2
	var_46_cvector = var_42_cvector + var_45_cvector; // 0x74e Add2
	IsOverrideActive(var_47_bool); // 0x74f Func
	var_67_bool = var_47_bool; // 0x751 Push
	if(var_67_bool == 0) goto Label_1877; // 0x752 JumpB
	var_28_bool = 0; // 0x753 MovB
	return 18; // 0x754 Return
	
Label_1877:
	StopWorld(); // 0x755 Func
	CameraTransit(var_46_cvector, var_44_cvector); // 0x757 Func
	var_68_float = GetByIndex(var_45_cvector, 0); // 0x759 PushE
	var_69_float = GetByIndex(var_45_cvector, 2); // 0x75a PushE
	Rotate(var_68_float, var_69_float); // 0x75b Func
	var_70_bool = 0; // 0x75d PushV
	func_2323(var_70_bool); // 0x75e NEW_2
	if(var_70_bool == 0) goto Label_1890; // 0x760 JumpB
	goto Label_1898; // 0x761 Jump
	
Label_1898:
	CameraWaitForPlayFinish(); // 0x76a Func
	ResumeWorld(); // 0x76c Func
	var_28_bool = 1; // 0x76e MovB
	return 18; // 0x76f Return
	
Label_1890:
	var_71_string = "head"; // 0x762 PushS
	HasAnimationTrack(var_48_bool, var_71_string); // 0x763 Func
	var_72_bool = var_48_bool; // 0x765 Push
	if(var_72_bool == 0) goto Label_1898; // 0x766 JumpB
	var_73_string = "head"; // 0x767 PushS
	LookAsyncCamera(var_73_string); // 0x768 Func
}


func_2097()
{
	var_42_object = Obj(); var_43_string = ""; var_44_float = 0; // 0x832 PushV
	var_45_object = Obj(); // 0x833 PushV
	func_2151(var_45_object); // 0x834 NEW_2
	var_42_object = var_45_object; // 0x835 Mov
	var_43_string = "pt_map_grif"; // 0x837 MovS
	var_44_float = 2; // 0x838 MovI
	func_2168(var_42_object, var_43_string, var_44_float); // 0x839 NEW_2
	var_65_object = Obj(); // 0x83b PushV
	func_2151(var_65_object); // 0x83c NEW_2
	ShowMap(var_65_object); // 0x83e ObjFunc
	return 0; // 0x840 Return
}


func_2113()
{
	var_105_string = "ood5PatrolGuard1"; // 0x842 PushS
	var_106_int = 1; // 0x843 PushI
	SetVariable(var_105_string, var_106_int); // 0x844 Func
	return 0; // 0x846 Return
}


func_838(var_486_bool, var_487_float)
{
	var_488_float = 0; var_489_bool = 0; var_490_float = 0; var_491_bool = 0; // 0x346 PushV
	rand(var_490_float); // 0x347 Func
	var_492_bool = var_490_float < var_487_float; // 0x349 LT
	if(var_492_bool == 0) goto Label_858; // 0x34a JumpB
	
Label_843:
	IsAnimationPlaying(var_491_bool); // 0x34b Func
	var_493_bool = var_491_bool == 0; // 0x34d Not
	if(var_493_bool == 0) goto Label_848; // 0x34e JumpB
	goto Label_857; // 0x34f Jump
	
Label_857:
	goto Label_863; // 0x359 Jump
	
Label_863:
	var_486_bool = 0; // 0x35f MovB
	return 4; // 0x360 Return
	
Label_848:
	var_494_bool = 0; // 0x350 PushV
	func_936(var_494_bool); // 0x351 NEW_2
	if(var_494_bool == 0) goto Label_854; // 0x353 JumpB
	var_486_bool = 1; // 0x354 MovB
	return 4; // 0x355 Return
	
Label_854:
	sync(); // 0x356 Func
	goto Label_843; // 0x358 Jump
	
Label_858:
	WaitForAnimEnd(); // 0x35a Func
	func_1040(var_491_bool); // 0x35d NEW_2
}


func_2119()
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x847 PushV
	var_24_string = "d5q01"; // 0x848 PushS
	var_25_int = 6; // 0x849 PushI
	SetVariable(var_24_string, var_25_int); // 0x84a Func
	var_26_object = Obj(); // 0x84c PushV
	func_2151(var_26_object); // 0x84d NEW_2
	var_23_object = var_26_object; // 0x84e Mov
	var_33_string = "d5q01PatrolGotoGrif"; // 0x850 PushS
	var_34_string = "pt_map_grif"; // 0x851 PushS
	var_35_int = 1; // 0x852 PushI
	var_36_int = 515349; // 0x853 PushI
	var_37_float = 0; // 0x854 PushV
	func_2072(var_37_float); // 0x855 NEW_2
	AddMark(var_33_string, var_34_string, var_35_int, var_36_int, var_37_float); // 0x857 ObjFunc
	return 2; // 0x859 Return
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
	func_2139(var_96_object); // 0x52 NEW_2
	if(var_95_bool == 0) goto Label_105; // 0x54 JumpB
	var_103_object = Obj(); var_104_object = Obj(); // 0x55 PushV
	var_103_object = var_1_object; // 0x56 MovT
	var_104_object = var_0_object; // 0x57 MovT
	func_2113(); // 0x58 NEW_2
	var_107_string = ""; // 0x5a PushV
	var_107_string = "Neutral"; // 0x5b MovS
	func_157(var_89_object, var_107_string); // 0x5c NEW_2
	var_124_int = 511690; // 0x5e PushI
	SetMessage(var_124_int); // 0x5f TObjFunc
	ClearReplies(); // 0x61 TObjFunc
	var_125_int = 511691; // 0x63 PushI
	var_126_int = 12894; // 0x64 PushI
	var_127_int = 12893; // 0x65 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x66 TObjFunc
	goto Label_127; // 0x68 Jump
	
Label_127:
	var_128_bool = 0; // 0x7f PushV
	func_2323(var_128_bool); // 0x80 NEW_2
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
	func_1921(var_130_string); // 0x8a NEW_2
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
	var_147_int = 512483; // 0x6d PushI
	SetMessage(var_147_int); // 0x6e TObjFunc
	ClearReplies(); // 0x70 TObjFunc
	var_148_int = 512484; // 0x72 PushI
	var_149_int = -1; // 0x73 PushI
	var_150_int = 13652; // 0x74 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x75 TObjFunc
	var_151_int = 515786; // 0x77 PushI
	var_152_int = -1; // 0x78 PushI
	var_153_int = 16858; // 0x79 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x7a TObjFunc
	goto Label_127; // 0x7c Jump
}


func_1355(var_31_object)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = ""; var_37_object = Obj(); var_38_bool = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_string = ""; var_47_object = Obj(); var_48_bool = 0; var_49_bool = 0; var_50_float = 0; var_51_cvector = CVector(0,0,0); // 0x54b PushV
	var_52_bool = var_31_object == 0; // 0x54c NullEq
	if(var_52_bool == 0) goto Label_1363; // 0x54d JumpB
	var_53_string = ""; // 0x54e PushV
	var_53_string = "fdie"; // 0x54f MovS
	func_1446(var_53_string); // 0x550 NEW_2
	goto Label_1445; // 0x552 Jump
	
Label_1445:
	return 20; // 0x5a5 Return
	
Label_1363:
	GetPosition(var_42_cvector); // 0x553 ObjFunc
	GetPosition(var_43_cvector); // 0x555 Func
	GetDirection(var_44_cvector); // 0x557 Func
	var_45_cvector = var_43_cvector - var_42_cvector; // 0x559 Sub2
	var_85_float = GetByIndex(var_45_cvector, 0); // 0x55a PushE
	var_86_float = GetByIndex(var_44_cvector, 0); // 0x55b PushE
	var_87_float = var_85_float * var_86_float; // 0x55c Mult
	var_88_float = GetByIndex(var_45_cvector, 2); // 0x55d PushE
	var_89_float = GetByIndex(var_44_cvector, 2); // 0x55e PushE
	var_90_float = var_88_float * var_89_float; // 0x55f Mult
	var_91_int = var_87_float + var_90_float; // 0x560 Add
	var_92_int = 0; // 0x561 PushI
	var_93_bool = var_91_int >= var_92_int; // 0x562 GE
	if(var_93_bool == 0) goto Label_1382; // 0x563 JumpB
	var_46_string = "fdie"; // 0x564 MovS
	goto Label_1383; // 0x565 Jump
	
Label_1383:
	RemoveRTEnvelope(); // 0x567 Func
	SetDeathState(); // 0x569 Func
	Stop(); // 0x56b Func
	StopAsync(); // 0x56d Func
	var_47_object = var_31_object; // 0x56f Mov
	var_94_string = "GetScriptProperty"; // 0x570 PushS
	var_95_int = 2; // 0x571 PushI
	var_96_bool = IsFuncExist(var_31_object, var_94_string, var_95_int); // 0x572 FuncExist
	if(var_96_bool == 0) goto Label_1407; // 0x573 JumpB
	var_97_string = "Owner"; // 0x574 PushS
	HasScriptProperty(var_48_bool, var_97_string); // 0x575 ObjFunc
	var_98_bool = var_48_bool; // 0x577 Push
	if(var_98_bool == 0) goto Label_1407; // 0x578 JumpB
	var_99_string = "Owner"; // 0x579 PushS
	GetScriptProperty(var_47_object, var_99_string); // 0x57a ObjFunc
	var_100_bool = var_47_object == 0; // 0x57c NullEq
	if(var_100_bool == 0) goto Label_1407; // 0x57d JumpB
	var_47_object = var_31_object; // 0x57e Mov
	
Label_1407:
	var_101_string = "@GetEyesHeight"; // 0x57f PushS
	var_102_int = 1; // 0x580 PushI
	var_103_bool = IsFuncExist(var_47_object, var_101_string, var_102_int); // 0x581 FuncExist
	if(var_103_bool == 0) goto Label_1422; // 0x582 JumpB
	GetEyesHeight(var_50_float); // 0x583 ObjFunc
	var_51_cvector = CVector(0.0, 0.0, 0.0); // 0x585 MovV
	var_104_float = GetByIndex(var_51_cvector, 1); // 0x586 PushE
	var_104_float = var_50_float; // 0x587 Mov
	SetByIndex(var_51_cvector, 1) = var_104_float; // 0x588 PopE
	var_105_string = "head"; // 0x589 PushS
	LookAsync(var_31_object, var_105_string, var_51_cvector); // 0x58a Func
	var_49_bool = 1; // 0x58c MovB
	goto Label_1423; // 0x58d Jump
	
Label_1423:
	var_106_string = ""; // 0x58f PushV
	var_106_string = var_46_string; // 0x590 Mov
	func_1970(var_106_string); // 0x591 NEW_2
	var_107_string = "all"; // 0x593 PushS
	PlayAnimation(var_107_string, var_46_string); // 0x594 Func
	WaitForAnimEnd(); // 0x596 Func
	var_108_bool = var_49_bool; // 0x598 Push
	if(var_108_bool == 0) goto Label_1439; // 0x599 JumpB
	StopAsync(); // 0x59a Func
	var_109_string = "head"; // 0x59c PushS
	UnlookAsync(var_109_string); // 0x59d Func
	
Label_1439:
	var_110_string = "all"; // 0x59f PushS
	LockAnimationEnd(var_110_string, var_46_string); // 0x5a0 Func
	RemoveEnvelope(); // 0x5a2 Func
	var_47_object = 0; // 0x5a4 SetNull
	
Label_1422:
	var_49_bool = 0; // 0x58e MovB
	
Label_1382:
	var_46_string = "bdie"; // 0x566 MovS
}


func_2139(var_95_bool)
{
	var_97_int = 0; var_98_string = ""; // 0x85c PushV
	var_98_string = "ood5PatrolGuard1"; // 0x85d MovS
	func_2045(var_97_int, var_98_string); // 0x85e NEW_2
	var_101_int = 0; // 0x860 PushI
	var_102_bool = var_97_int == var_101_int; // 0x861 Eq
	if(var_102_bool == 0) goto Label_2149; // 0x862 JumpB
	var_95_bool = 1; // 0x863 MovB
	return 0; // 0x864 Return
	
Label_2149:
	var_95_bool = 0; // 0x865 MovB
	return 0; // 0x866 Return
}


func_865(var_0_object, var_287_bool, var_288_float)
{
	var_289_bool = 0; var_290_cvector = CVector(0,0,0); var_291_cvector = CVector(0,0,0); var_292_cvector = CVector(0,0,0); var_293_float = 0; var_294_bool = 0; var_295_cvector = CVector(0,0,0); var_296_cvector = CVector(0,0,0); var_297_cvector = CVector(0,0,0); var_298_float = 0; // 0x361 PushV
	
Label_866:
	IsAnimationPlaying(var_294_bool); // 0x362 Func
	var_299_bool = var_294_bool == 0; // 0x364 Not
	if(var_299_bool == 0) goto Label_871; // 0x365 JumpB
	goto Label_903; // 0x366 Jump
	
Label_903:
	func_1040(var_298_float); // 0x388 NEW_2
	var_287_bool = 0; // 0x38a MovB
	return 10; // 0x38b Return
	
Label_871:
	var_300_bool = 0; // 0x367 PushV
	func_936(var_300_bool); // 0x368 NEW_2
	if(var_300_bool == 0) goto Label_877; // 0x36a JumpB
	var_287_bool = 1; // 0x36b MovB
	return 10; // 0x36c Return
	
Label_877:
	var_343_bool = 0; var_344_object = Obj(); // 0x36d PushV
	var_344_object = var_0_object; // 0x36e MovT
	func_1675(var_343_bool, var_344_object); // 0x36f NEW_2
	var_345_bool = var_343_bool == 0; // 0x371 Not
	if(var_345_bool == 0) goto Label_885; // 0x372 JumpB
	var_287_bool = 0; // 0x373 MovB
	return 10; // 0x374 Return
	
Label_885:
	GetPFPosition(var_295_cvector); // 0x375 TObjFunc
	GetPFPosition(var_296_cvector); // 0x377 Func
	var_297_cvector = var_295_cvector - var_296_cvector; // 0x379 Sub2
	var_298_float = var_297_cvector | var_297_cvector; // 0x37a Or2
	var_346_float = var_288_float * var_288_float; // 0x37b Mult
	var_347_bool = var_298_float < var_346_float; // 0x37c LT
	if(var_347_bool == 0) goto Label_900; // 0x37d JumpB
	var_348_bool = 0; var_349_float = 0; // 0x37e PushV
	var_349_float = var_288_float; // 0x37f Mov
	func_701(var_298_float, var_348_bool, var_349_float); // 0x380 NEW_2
	var_287_bool = 1; // 0x382 MovB
	return 10; // 0x383 Return
	
Label_900:
	sync(); // 0x384 Func
	goto Label_866; // 0x386 Jump
}


func_1634(var_103_bool)
{
	var_105_bool = 0; var_106_bool = 0; // 0x662 PushV
	IsDead(var_106_bool); // 0x663 ObjFunc
	var_103_bool = var_106_bool; // 0x665 Mov
	return 2; // 0x666 Return
}


func_1123(var_2_object)
{
	var_15_int = 1; // 0x463 PushI
	KillTimer(var_15_int); // 0x464 Func
	var_16_object = var_2_object; // 0x466 PushT
	if(var_16_object == 0) goto Label_1132; // 0x467 JumpB
	var_2_object = 0; // 0x468 TMovB
	var_17_string = "head"; // 0x469 PushS
	UnlookAsync(var_17_string); // 0x46a Func
	
Label_1132:
	func_1289(var_14_object); // 0x46d NEW_2
	return 0; // 0x46f Return
}


func_1639(var_92_bool, var_93_object)
{
	var_94_object = Obj(); var_95_object = Obj(); var_96_object = Obj(); var_97_object = Obj(); // 0x667 PushV
	var_98_bool = var_93_object == 0; // 0x668 NullEq
	if(var_98_bool == 0) goto Label_1644; // 0x669 JumpB
	var_92_bool = 0; // 0x66a MovB
	return 4; // 0x66b Return
	
Label_1644:
	var_99_bool = 0; // 0x66c PushV
	var_99_bool = 0; // 0x66d MovB
	var_100_string = "IsDead"; // 0x66e PushS
	var_101_int = 1; // 0x66f PushI
	var_102_bool = IsFuncExist(var_93_object, var_100_string, var_101_int); // 0x670 FuncExist
	if(var_102_bool == 0) goto Label_1656; // 0x671 JumpB
	var_103_bool = 0; var_104_object = Obj(); // 0x672 PushV
	var_104_object = var_93_object; // 0x673 Mov
	func_1634(var_104_object); // 0x674 NEW_2
	if(var_103_bool == 0) goto Label_1656; // 0x676 JumpB
	var_99_bool = 1; // 0x677 MovB
	
Label_1656:
	if(var_99_bool == 0) goto Label_1659; // 0x678 JumpB
	var_92_bool = 0; // 0x679 MovB
	return 4; // 0x67a Return
	
Label_1659:
	GetScene(var_96_object); // 0x67b Func
	var_107_bool = var_96_object == 0; // 0x67d NullEq
	if(var_107_bool == 0) goto Label_1665; // 0x67e JumpB
	var_92_bool = 0; // 0x67f MovB
	return 4; // 0x680 Return
	
Label_1665:
	GetScene(var_97_object); // 0x681 ObjFunc
	var_108_bool = var_96_object != var_97_object; // 0x683 Neq
	if(var_108_bool == 0) goto Label_1671; // 0x684 JumpB
	var_92_bool = 0; // 0x685 MovB
	return 4; // 0x686 Return
	
Label_1671:
	var_92_bool = 1; // 0x687 MovB
	return 4; // 0x688 Return
}


func_2151(var_26_object)
{
	var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); // 0x867 PushV
	GetMainOutdoorScene(var_29_object); // 0x868 Func
	var_31_bool = var_29_object == 0; // 0x86a NullEq
	if(var_31_bool == 0) goto Label_2162; // 0x86b JumpB
	var_32_string = "Can't find main outdoor scene"; // 0x86c PushS
	Trace(var_32_string); // 0x86d Func
	var_30_object = 0; // 0x86f SetNull
	var_26_object = var_30_object; // 0x870 Mov
	return 4; // 0x871 Return
	
Label_2162:
	GetMap(var_30_object); // 0x872 ObjFunc
	var_26_object = var_30_object; // 0x874 Mov
	return 4; // 0x875 Return
}


func_1904()
{
	var_156_bool = 0; var_157_bool = 0; // 0x770 PushV
	CameraSwitchToNormal(); // 0x771 Func
	var_158_bool = 0; // 0x773 PushV
	func_2323(var_158_bool); // 0x774 NEW_2
	if(var_158_bool == 0) goto Label_1912; // 0x776 JumpB
	goto Label_1920; // 0x777 Jump
	
Label_1920:
	return 2; // 0x780 Return
	
Label_1912:
	var_159_string = "head"; // 0x778 PushS
	HasAnimationTrack(var_157_bool, var_159_string); // 0x779 Func
	var_160_bool = var_157_bool; // 0x77b Push
	if(var_160_bool == 0) goto Label_1920; // 0x77c JumpB
	var_161_string = "head"; // 0x77d PushS
	UnlookAsync(var_161_string); // 0x77e Func
}


func_627(var_1_object, var_2_object, var_4_bool)
{
	var_52_bool = 0; var_53_bool = 0; var_54_cvector = CVector(0,0,0); var_55_bool = 0; var_56_bool = 0; var_57_cvector = CVector(0,0,0); // 0x273 PushV
	var_1_object = 0; // 0x274 TMovI
	
Label_629:
	var_58_string = "all"; // 0x275 PushS
	var_59_string = "attack_begin"; // 0x276 PushS
	var_60_int = 1; // 0x277 PushI
	var_61_int = var_1_object + var_60_int; // 0x278 Add
	var_62_int = var_59_string + var_61_int; // 0x279 Add
	HasAnimation(var_55_bool, var_58_string, var_62_int); // 0x27a Func
	var_63_bool = var_55_bool == 0; // 0x27c Not
	if(var_63_bool == 0) goto Label_639; // 0x27d JumpB
	goto Label_642; // 0x27e Jump
	
Label_642:
	var_2_object = 0; // 0x282 TMovI
	
Label_643:
	var_64_string = "attack"; // 0x283 PushS
	var_65_int = 1; // 0x284 PushI
	var_66_int = var_2_object + var_65_int; // 0x285 Add
	var_67_int = var_64_string + var_66_int; // 0x286 Add
	IsExisting3DSound(var_56_bool, var_67_int); // 0x287 Func
	var_68_bool = var_56_bool == 0; // 0x289 Not
	if(var_68_bool == 0) goto Label_652; // 0x28a JumpB
	goto Label_655; // 0x28b Jump
	
Label_655:
	var_69_string = "all"; // 0x28f PushS
	var_70_string = "bjump"; // 0x290 PushS
	GetAnimationOffset(var_57_cvector, var_69_string, var_70_string); // 0x291 Func
	var_71_float = GetByIndex(var_57_cvector, 2); // 0x293 PushE
	var_4_bool = -var_71_float; // 0x294 Neg2
	return 6; // 0x295 Return
	
Label_652:
	var_72_int = 1; // 0x28c PushI
	var_2_object = var_2_object + var_72_int; // 0x28d Add2
	goto Label_643; // 0x28e Jump
	
Label_639:
	var_73_int = 1; // 0x27f PushI
	var_1_object = var_1_object + var_73_int; // 0x280 Add2
	goto Label_629; // 0x281 Jump
}


func_2168(var_42_object, var_43_string, var_44_float)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_object = Obj(); var_49_bool = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_object = Obj(); var_53_bool = 0; // 0x878 PushV
	GetMainOutdoorScene(var_52_object); // 0x879 Func
	var_54_bool = var_52_object == 0; // 0x87b NullEq
	if(var_54_bool == 0) goto Label_2177; // 0x87c JumpB
	var_55_string = "Can't find main outdoor scene"; // 0x87d PushS
	Trace(var_55_string); // 0x87e Func
	return 8; // 0x880 Return
	
Label_2177:
	GetLocator(var_43_string, var_53_bool, var_50_cvector, var_51_cvector); // 0x881 ObjFunc
	var_56_bool = var_53_bool == 0; // 0x883 Not
	if(var_56_bool == 0) goto Label_2187; // 0x884 JumpB
	var_57_string = "Warning: outdoor scene locator "; // 0x885 PushS
	var_58_int = var_57_string + var_43_string; // 0x886 Add
	var_59_string = " doesnt exist"; // 0x887 PushS
	var_60_int = var_58_int + var_59_string; // 0x888 Add
	Trace(var_60_int); // 0x889 Func
	
Label_2187:
	GetMap(var_42_object); // 0x88b ObjFunc
	var_61_bool = var_42_object == 0; // 0x88d NullEq
	if(var_61_bool == 0) goto Label_2195; // 0x88e JumpB
	var_62_string = "Can't find map"; // 0x88f PushS
	Trace(var_62_string); // 0x890 Func
	return 8; // 0x892 Return
	
Label_2195:
	var_63_float = GetByIndex(var_50_cvector, 0); // 0x893 PushE
	var_64_float = GetByIndex(var_50_cvector, 2); // 0x894 PushE
	SetMapParams(var_63_float, var_64_float, var_44_float); // 0x895 ObjFunc
	return 8; // 0x897 Return
}


func_377()
{
	var_23_object = Obj(); var_24_object = Obj(); // 0x179 PushV
	var_25_string = "player"; // 0x17a PushS
	FindActor(var_24_object, var_25_string); // 0x17b Func
	var_26_bool = var_24_object == 0; // 0x17d Not
	if(var_26_bool == 0) goto Label_384; // 0x17e JumpB
	return 2; // 0x17f Return
	
Label_384:
	var_27_object = Obj(); var_28_bool = 0; var_29_float = 0; // 0x180 PushV
	var_27_object = var_24_object; // 0x181 Mov
	var_28_bool = 1; // 0x182 MovB
	var_29_float = 180.0; // 0x183 MovF
	func_398(var_20_bool, var_21_float, var_22_int, var_23_object, var_24_object, var_27_object, var_28_bool, var_29_float); // 0x184 NEW_2
	return 2; // 0x186 Return
}


func_1921(var_130_string)
{
	var_131_bool = 0; var_132_float = 0; var_133_float = 0; var_134_bool = 0; var_135_float = 0; var_136_float = 0; // 0x781 PushV
	lshHasAnimation(var_134_bool, var_130_string); // 0x782 Func
	var_137_bool = var_134_bool; // 0x784 Push
	if(var_137_bool == 0) goto Label_1932; // 0x785 JumpB
	lshGetAnimTimes(var_130_string, var_135_float, var_136_float); // 0x786 Func
	var_138_bool = 0; // 0x788 PushB
	lshPlayAnimation(var_135_float, var_136_float, var_138_bool); // 0x789 Func
	goto Label_1936; // 0x78b Jump
	
Label_1936:
	return 6; // 0x790 Return
	
Label_1932:
	var_139_string = "Can't find lsh animation : "; // 0x78c PushS
	var_140_int = var_139_string + var_130_string; // 0x78d Add
	Trace(var_140_int); // 0x78e Func
}


func_392(var_396_float)
{
	var_396_float = 0.3; // 0x189 MovF
	return 0; // 0x18a Return
}


func_1675(var_88_bool, var_89_object)
{
	var_90_int = 0; var_91_int = 0; // 0x68b PushV
	var_92_bool = 0; var_93_object = Obj(); // 0x68c PushV
	var_93_object = var_89_object; // 0x68d Mov
	func_1639(var_92_bool, var_93_object); // 0x68e NEW_2
	var_109_bool = var_92_bool == 0; // 0x690 Not
	if(var_109_bool == 0) goto Label_1684; // 0x691 JumpB
	var_88_bool = 0; // 0x692 MovB
	return 2; // 0x693 Return
	
Label_1684:
	var_110_bool = 0; var_111_object = Obj(); var_112_string = ""; // 0x694 PushV
	var_111_object = var_89_object; // 0x695 Mov
	var_112_string = "noaccess"; // 0x696 MovS
	func_1549(var_110_bool, var_111_object, var_112_string); // 0x697 NEW_2
	var_119_bool = var_110_bool == 0; // 0x699 Not
	if(var_119_bool == 0) goto Label_1693; // 0x69a JumpB
	var_88_bool = 1; // 0x69b MovB
	return 2; // 0x69c Return
	
Label_1693:
	var_120_string = "noaccess"; // 0x69d PushS
	GetProperty(var_120_string, var_91_int); // 0x69e ObjFunc
	var_121_int = 0; // 0x6a0 PushI
	var_88_bool = var_91_int == var_121_int; // 0x6a1 Eq2
	return 2; // 0x6a2 Return
}


func_395(var_403_int)
{
	var_403_int = 0; // 0x18c MovI
	return 0; // 0x18d Return
}


func_1165(var_0_object, var_1_object, var_159_bool, var_160_object, var_161_float, var_162_float, var_163_bool, var_164_bool)
{
	var_165_bool = 0; var_166_bool = 0; var_167_object = Obj(); var_168_cvector = CVector(0,0,0); var_169_cvector = CVector(0,0,0); var_170_cvector = CVector(0,0,0); var_171_float = 0; var_172_object = Obj(); var_173_bool = 0; var_174_bool = 0; var_175_object = Obj(); var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); var_178_cvector = CVector(0,0,0); var_179_float = 0; var_180_object = Obj(); // 0x48d PushV
	var_0_object = 0; // 0x48e TMovB
	var_1_object = var_160_object; // 0x48f TMov
	var_174_bool = var_164_bool; // 0x490 Mov
	
Label_1169:
	var_181_bool = 0; var_182_object = Obj(); // 0x491 PushV
	var_182_object = var_160_object; // 0x492 Mov
	func_1305(var_181_bool, var_182_object); // 0x493 NEW_2
	var_185_bool = var_181_bool == 0; // 0x495 Not
	if(var_185_bool == 0) goto Label_1177; // 0x496 JumpB
	var_159_bool = 0; // 0x497 MovB
	return 16; // 0x498 Return
	
Label_1177:
	GetPosition(var_176_cvector); // 0x499 ObjFunc
	GetPosition(var_177_cvector); // 0x49b Func
	var_178_cvector = var_176_cvector - var_177_cvector; // 0x49d Sub2
	var_179_float = var_178_cvector | var_178_cvector; // 0x49e Or2
	var_186_bool = 0; // 0x49f PushV
	var_186_bool = 0; // 0x4a0 MovB
	var_187_int = 0; // 0x4a1 PushI
	var_188_bool = var_162_float > var_187_int; // 0x4a2 GT
	if(var_188_bool == 0) goto Label_1192; // 0x4a3 JumpB
	var_189_float = var_162_float * var_162_float; // 0x4a4 Mult
	var_190_bool = var_179_float > var_189_float; // 0x4a5 GT
	if(var_190_bool == 0) goto Label_1192; // 0x4a6 JumpB
	var_186_bool = 1; // 0x4a7 MovB
	
Label_1192:
	if(var_186_bool == 0) goto Label_1197; // 0x4a8 JumpB
	Stop(); // 0x4a9 Func
	var_159_bool = 0; // 0x4ab MovB
	return 16; // 0x4ac Return
	
Label_1197:
	var_191_float = var_161_float * var_161_float; // 0x4ad Mult
	var_192_bool = var_179_float > var_191_float; // 0x4ae GT
	if(var_192_bool == 0) goto Label_1259; // 0x4af JumpB
	GetPFPosition(var_176_cvector); // 0x4b0 ObjFunc
	FindPathTo(var_180_object, var_176_cvector); // 0x4b2 Func
	var_193_bool = var_180_object != 0; // 0x4b4 NullNeq
	if(var_193_bool == 0) goto Label_1208; // 0x4b5 JumpB
	var_175_object = var_180_object; // 0x4b6 Mov
	var_180_object = 0; // 0x4b7 SetNull
	
Label_1208:
	var_194_bool = var_175_object != 0; // 0x4b8 NullNeq
	if(var_194_bool == 0) goto Label_1241; // 0x4b9 JumpB
	var_195_bool = var_174_bool; // 0x4ba Push
	if(var_195_bool == 0) goto Label_1218; // 0x4bb JumpB
	var_174_bool = 0; // 0x4bc MovB
	RotatePath(var_175_object, var_173_bool); // 0x4bd Func
	var_196_bool = var_173_bool == 0; // 0x4bf Not
	if(var_196_bool == 0) goto Label_1218; // 0x4c0 JumpB
	goto Label_1265; // 0x4c1 Jump
	
Label_1265:
	var_159_bool = !var_0_object; // 0x4f1 Not2
	return 16; // 0x4f2 Return
	
Label_1218:
	var_197_int = 0; // 0x4c2 PushI
	var_198_float = 0.3; // 0x4c3 PushF
	SetTimer(var_197_int, var_198_float); // 0x4c4 Func
	var_199_string = ""; // 0x4c6 PushV
	func_1312(var_199_string); // 0x4c7 NEW_2
	var_200_string = ""; // 0x4c9 PushV
	func_1314(var_200_string); // 0x4ca NEW_2
	FollowPath(var_175_object, var_163_bool, var_173_bool, var_199_string, var_200_string); // 0x4cc Func
	var_201_bool = var_173_bool == 0; // 0x4ce Not
	if(var_201_bool == 0) goto Label_1239; // 0x4cf JumpB
	var_202_object = var_0_object; // 0x4d0 PushT
	if(var_202_object == 0) goto Label_1237; // 0x4d1 JumpB
	var_175_object = 0; // 0x4d2 SetNull
	goto Label_1265; // 0x4d3 Jump
	
Label_1237:
	goto Label_1264; // 0x4d5 Jump
	
Label_1264:
	goto Label_1169; // 0x4f0 Jump
	
Label_1239:
	var_175_object = 0; // 0x4d7 SetNull
	goto Label_1257; // 0x4d8 Jump
	
Label_1257:
	var_180_object = 0; // 0x4e9 SetNull
	goto Label_1263; // 0x4ea Jump
	
Label_1263:
	var_175_object = 0; // 0x4ef SetNull
	
Label_1241:
	var_203_int = 0; // 0x4d9 PushI
	KillTimer(var_203_int); // 0x4da Func
	var_204_float = 0.5; // 0x4dc PushF
	Sleep(var_204_float, var_173_bool); // 0x4dd Func
	var_205_bool = var_173_bool == 0; // 0x4df Not
	if(var_205_bool == 0) goto Label_1253; // 0x4e0 JumpB
	var_206_object = var_0_object; // 0x4e1 PushT
	if(var_206_object == 0) goto Label_1253; // 0x4e2 JumpB
	var_175_object = 0; // 0x4e3 SetNull
	goto Label_1265; // 0x4e4 Jump
	
Label_1253:
	var_207_int = 0; // 0x4e5 PushI
	var_208_float = 0.3; // 0x4e6 PushF
	SetTimer(var_207_int, var_208_float); // 0x4e7 Func
	
Label_1259:
	var_209_int = 0; // 0x4eb PushI
	KillTimer(var_209_int); // 0x4ec Func
	goto Label_1265; // 0x4ee Jump
}


func_908(var_0_object, var_302_bool)
{
	var_303_cvector = CVector(0,0,0); var_304_cvector = CVector(0,0,0); var_305_cvector = CVector(0,0,0); var_306_float = 0; var_307_float = 0; var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0); var_310_cvector = CVector(0,0,0); var_311_float = 0; var_312_float = 0; // 0x38c PushV
	var_313_bool = 0; var_314_object = Obj(); // 0x38d PushV
	var_314_object = var_0_object; // 0x38e MovT
	func_1675(var_313_bool, var_314_object); // 0x38f NEW_2
	var_315_bool = var_313_bool == 0; // 0x391 Not
	if(var_315_bool == 0) goto Label_917; // 0x392 JumpB
	var_302_bool = 0; // 0x393 MovB
	return 10; // 0x394 Return
	
Label_917:
	var_316_bool = 0; // 0x395 PushV
	func_997(var_312_float, var_316_bool); // 0x396 NEW_2
	if(var_316_bool == 0) goto Label_934; // 0x398 JumpB
	GetPFPosition(var_308_cvector); // 0x399 TObjFunc
	GetPFPosition(var_309_cvector); // 0x39b Func
	var_310_cvector = var_308_cvector - var_309_cvector; // 0x39d Sub2
	var_311_float = var_310_cvector | var_310_cvector; // 0x39e Or2
	GetAttackDistance(var_312_float); // 0x39f TObjFunc
	var_317_int = 50; // 0x3a1 PushI
	var_312_float = var_312_float + var_317_int; // 0x3a2 Add2
	var_318_float = var_312_float * var_312_float; // 0x3a3 Mult
	var_302_bool = var_311_float <= var_318_float; // 0x3a4 LE2
	return 10; // 0x3a5 Return
	
Label_934:
	var_302_bool = 0; // 0x3a6 MovB
	return 10; // 0x3a7 Return
}


func_398(var_0_object, var_3_string, var_5_object, var_27_object, var_28_bool, var_29_float, var_136_bool, var_228_bool)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_bool = 0; var_35_float = 0; var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_bool = 0; var_40_float = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; var_46_float = 0; var_47_cvector = CVector(0,0,0); var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_bool = 0; var_51_float = 0; // 0x18e PushV
	func_627(var_49_cvector, var_50_bool, var_51_float); // 0x190 NEW_2
	var_5_object = 0; // 0x192 TMovI
	var_74_string = "@GetAttackDistance"; // 0x193 PushS
	var_75_int = 1; // 0x194 PushI
	var_76_bool = IsFuncExist(var_27_object, var_74_string, var_75_int); // 0x195 FuncExist
	if(var_76_bool == 0) goto Label_412; // 0x196 JumpB
	GetAttackDistance(var_41_float); // 0x197 ObjFunc
	var_77_int = 50; // 0x199 PushI
	var_41_float = var_41_float + var_77_int; // 0x19a Add2
	goto Label_413; // 0x19b Jump
	
Label_413:
	var_78_int = 150; // 0x19d PushI
	var_79_bool = var_41_float >= var_78_int; // 0x19e GE
	if(var_79_bool == 0) goto Label_417; // 0x19f JumpB
	var_41_float = 150; // 0x1a0 MovI
	
Label_417:
	var_3_string = 0; // 0x1a1 TMovB
	var_0_object = var_27_object; // 0x1a2 TMov
	IsPlayerActor(var_0_object, var_44_bool); // 0x1a3 Func
	var_80_bool = var_44_bool; // 0x1a5 Push
	if(var_80_bool == 0) goto Label_431; // 0x1a6 JumpB
	var_81_string = "attack"; // 0x1a7 PushS
	PlayGlobalMusic(var_81_string); // 0x1a8 Func
	var_82_object = Obj(); // 0x1aa PushV
	func_2011(var_82_object); // 0x1ab NEW_2
	SendPlayerEnemy(var_27_object, var_82_object); // 0x1ad Func
	
Label_431:
	var_85_bool = var_28_bool; // 0x1af Push
	if(var_85_bool == 0) goto Label_435; // 0x1b0 JumpB
	var_45_bool = 0; // 0x1b1 MovB
	goto Label_436; // 0x1b2 Jump
	
Label_436:
	var_86_float = 400.0; // 0x1b4 PushF
	var_46_float = var_86_float + var_41_float; // 0x1b5 Add2
	
Label_438:
	var_87_bool = 0; // 0x1b6 PushV
	var_87_bool = 0; // 0x1b7 MovB
	var_88_bool = 0; var_89_object = Obj(); // 0x1b8 PushV
	var_89_object = var_0_object; // 0x1b9 MovT
	func_1675(var_88_bool, var_89_object); // 0x1ba NEW_2
	if(var_88_bool == 0) goto Label_448; // 0x1bc JumpB
	var_122_bool = var_3_string == 0; // 0x1bd Not
	if(var_122_bool == 0) goto Label_448; // 0x1be JumpB
	var_87_bool = 1; // 0x1bf MovB
	
Label_448:
	if(var_87_bool == 0) goto Label_610; // 0x1c0 JumpB
	func_1040(var_51_float); // 0x1c2 NEW_2
	GetPFPosition(var_42_cvector); // 0x1c4 TObjFunc
	GetPFPosition(var_43_cvector); // 0x1c6 Func
	var_47_cvector = var_42_cvector - var_43_cvector; // 0x1c8 Sub2
	var_48_float = var_47_cvector | var_47_cvector; // 0x1c9 Or2
	var_128_float = var_46_float * var_46_float; // 0x1ca Mult
	var_129_bool = var_48_float >= var_128_float; // 0x1cb GE
	if(var_129_bool == 0) goto Label_476; // 0x1cc JumpB
	var_130_bool = 0; var_131_object = Obj(); var_132_float = 0; var_133_float = 0; var_134_bool = 0; var_135_bool = 0; // 0x1cd PushV
	var_131_object = var_0_object; // 0x1ce MovT
	var_132_float = var_41_float; // 0x1cf Mov
	var_133_float = 10000.0; // 0x1d0 MovF
	var_134_bool = 1; // 0x1d1 MovB
	var_135_bool = 0; // 0x1d2 MovB
	TaskCall(3); // 0x1d3 TaskCall
	func_1060(var_138_bool, var_130_bool, var_131_object, var_132_float, var_133_float, var_134_bool, var_135_bool); // 0x1d4 NEW_2
	TaskReturn(); // 0x1d5 TaskReturn
	var_213_bool = var_136_bool == 0; // 0x1d7 Not
	if(var_213_bool == 0) goto Label_474; // 0x1d8 JumpB
	goto Label_610; // 0x1d9 Jump
	
Label_610:
	WaitForAnimEnd(); // 0x262 Func
	var_214_string = var_3_string; // 0x264 PushT
	if(var_214_string == 0) goto Label_615; // 0x265 JumpB
	return 22; // 0x266 Return
	
Label_615:
	var_215_string = "all"; // 0x267 PushS
	var_216_string = "attack_off"; // 0x268 PushS
	PlayAnimation(var_215_string, var_216_string); // 0x269 Func
	WaitForAnimEnd(); // 0x26b Func
	var_217_bool = var_44_bool; // 0x26d Push
	if(var_217_bool == 0) goto Label_626; // 0x26e JumpB
	var_218_float = 2.0; // 0x26f PushF
	Sleep(var_218_float); // 0x270 Func
	
Label_626:
	return 22; // 0x272 Return
	
Label_474:
	var_45_bool = 0; // 0x1da MovB
	goto Label_609; // 0x1db Jump
	
Label_609:
	goto Label_438; // 0x261 Jump
	
Label_476:
	var_219_float = var_29_float * var_29_float; // 0x1dc Mult
	var_220_bool = var_48_float >= var_219_float; // 0x1dd GE
	if(var_220_bool == 0) goto Label_601; // 0x1de JumpB
	GetPFPosition(var_49_cvector); // 0x1df TObjFunc
	CanReachByPF(var_50_bool, var_49_cvector); // 0x1e1 Func
	var_221_bool = var_50_bool == 0; // 0x1e3 Not
	if(var_221_bool == 0) goto Label_500; // 0x1e4 JumpB
	var_222_bool = 0; var_223_object = Obj(); var_224_float = 0; var_225_float = 0; var_226_bool = 0; var_227_bool = 0; // 0x1e5 PushV
	var_223_object = var_0_object; // 0x1e6 MovT
	var_224_float = var_41_float; // 0x1e7 Mov
	var_225_float = 10000.0; // 0x1e8 MovF
	var_226_bool = 1; // 0x1e9 MovB
	var_227_bool = 0; // 0x1ea MovB
	TaskCall(3); // 0x1eb TaskCall
	func_1060(var_230_bool, var_222_bool, var_223_object, var_224_float, var_225_float, var_226_bool, var_227_bool); // 0x1ec NEW_2
	TaskReturn(); // 0x1ed TaskReturn
	var_231_bool = var_228_bool == 0; // 0x1ef Not
	if(var_231_bool == 0) goto Label_498; // 0x1f0 JumpB
	goto Label_610; // 0x1f1 Jump
	
Label_498:
	var_45_bool = 0; // 0x1f2 MovB
	goto Label_438; // 0x1f3 Jump
	
Label_500:
	var_232_bool = var_45_bool == 0; // 0x1f4 Not
	if(var_232_bool == 0) goto Label_525; // 0x1f5 JumpB
	var_233_object = Obj(); // 0x1f6 PushV
	var_233_object = var_0_object; // 0x1f7 MovT
	func_1825(); // 0x1f8 NEW_2
	var_242_string = "all"; // 0x1fa PushS
	var_243_string = "attack_on"; // 0x1fb PushS
	PlayAnimation(var_242_string, var_243_string); // 0x1fc Func
	WaitForAnimEnd(); // 0x1fe Func
	func_1040(var_51_float); // 0x201 NEW_2
	StopAsync(); // 0x203 Func
	var_45_bool = 1; // 0x205 MovB
	var_244_bool = 0; var_245_object = Obj(); // 0x206 PushV
	var_245_object = var_0_object; // 0x207 MovT
	func_1675(var_244_bool, var_245_object); // 0x208 NEW_2
	var_246_bool = var_244_bool == 0; // 0x20a Not
	if(var_246_bool == 0) goto Label_525; // 0x20b JumpB
	goto Label_610; // 0x20c Jump
	
Label_525:
	rand(var_51_float); // 0x20d Func
	var_247_bool = 0; // 0x20f PushV
	var_247_bool = 1; // 0x210 MovB
	var_248_float = 0.25; // 0x211 PushF
	var_249_bool = var_51_float < var_248_float; // 0x212 LT
	if(var_249_bool == 0) goto Label_537; // 0x213 JumpB
	var_250_bool = 0; // 0x214 PushV
	func_997(var_247_bool, var_250_bool); // 0x215 NEW_2
	if(var_250_bool == 0) goto Label_537; // 0x217 JumpB
	var_247_bool = 0; // 0x218 MovB
	
Label_537:
	if(var_247_bool == 0) goto Label_554; // 0x219 JumpB
	Face(var_0_object); // 0x21a Func
	func_1047(); // 0x21d NEW_2
	var_285_string = "all"; // 0x21f PushS
	var_286_string = "attack_stay"; // 0x220 PushS
	PlayAnimation(var_285_string, var_286_string); // 0x221 Func
	var_287_bool = 0; var_288_float = 0; // 0x223 PushV
	var_288_float = var_29_float; // 0x224 Mov
	func_865(var_51_float, var_287_bool, var_288_float); // 0x225 NEW_2
	StopAsync(); // 0x227 Func
	goto Label_600; // 0x229 Jump
	
Label_600:
	goto Label_609; // 0x258 Jump
	
Label_554:
	Face(var_0_object); // 0x22a Func
	var_502_string = "all"; // 0x22c PushS
	var_503_string = "fjump"; // 0x22d PushS
	PlayAnimation(var_502_string, var_503_string); // 0x22e Func
	WaitForAnimEnd(); // 0x230 Func
	func_1040(var_51_float); // 0x233 NEW_2
	var_504_cvector = CVector(0.0, 0.0, 0.0); // 0x235 PushVec
	SetSpeed(var_504_cvector); // 0x236 Func
	Stop(); // 0x238 Func
	StopAsync(); // 0x23a Func
	var_505_bool = 0; // 0x23c PushV
	func_997(var_51_float, var_505_bool); // 0x23d NEW_2
	var_506_bool = var_505_bool == 0; // 0x23f Not
	if(var_506_bool == 0) goto Label_600; // 0x240 JumpB
	var_507_bool = 0; var_508_object = Obj(); // 0x241 PushV
	var_508_object = var_0_object; // 0x242 MovT
	func_1675(var_507_bool, var_508_object); // 0x243 NEW_2
	var_509_bool = var_507_bool == 0; // 0x245 Not
	if(var_509_bool == 0) goto Label_584; // 0x246 JumpB
	goto Label_610; // 0x247 Jump
	
Label_584:
	GetPFPosition(var_42_cvector); // 0x248 TObjFunc
	GetPFPosition(var_43_cvector); // 0x24a Func
	var_47_cvector = var_42_cvector - var_43_cvector; // 0x24c Sub2
	var_48_float = var_47_cvector | var_47_cvector; // 0x24d Or2
	var_510_float = var_29_float * var_29_float; // 0x24e Mult
	var_511_bool = var_48_float < var_510_float; // 0x24f LT
	if(var_511_bool == 0) goto Label_600; // 0x250 JumpB
	var_512_bool = 0; var_513_float = 0; // 0x251 PushV
	var_513_float = var_29_float; // 0x252 Mov
	func_701(var_51_float, var_512_bool, var_513_float); // 0x253 NEW_2
	var_514_bool = var_512_bool == 0; // 0x255 Not
	if(var_514_bool == 0) goto Label_600; // 0x256 JumpB
	goto Label_610; // 0x257 Jump
	
Label_601:
	var_515_bool = 0; var_516_float = 0; // 0x259 PushV
	var_516_float = var_29_float; // 0x25a Mov
	func_701(var_51_float, var_515_bool, var_516_float); // 0x25b NEW_2
	var_517_bool = var_515_bool == 0; // 0x25d Not
	if(var_517_bool == 0) goto Label_608; // 0x25e JumpB
	goto Label_610; // 0x25f Jump
	
Label_608:
	var_45_bool = 1; // 0x260 MovB
	
Label_435:
	var_45_bool = 1; // 0x1b3 MovB
	
Label_412:
	var_41_float = var_29_float; // 0x19c Mov
}


func_1937(var_111_string, var_112_bool)
{
	var_115_bool = 0; var_116_float = 0; var_117_float = 0; var_118_bool = 0; var_119_float = 0; var_120_float = 0; // 0x791 PushV
	lshHasAnimation(var_118_bool, var_111_string); // 0x792 Func
	var_121_bool = var_118_bool; // 0x794 Push
	if(var_121_bool == 0) goto Label_1947; // 0x795 JumpB
	lshGetAnimTimes(var_111_string, var_119_float, var_120_float); // 0x796 Func
	lshPlayAnimation(var_119_float, var_120_float, var_112_bool); // 0x798 Func
	goto Label_1951; // 0x79a Jump
	
Label_1951:
	return 6; // 0x79f Return
	
Label_1947:
	var_122_string = "Can't find lsh animation : "; // 0x79b PushS
	var_123_int = var_122_string + var_111_string; // 0x79c Add
	Trace(var_123_int); // 0x79d Func
}


func_662(var_0_object, var_385_float, var_386_int)
{
	var_387_object = Obj(); var_388_float = 0; var_389_float = 0; var_390_object = Obj(); var_391_float = 0; var_392_float = 0; // 0x296 PushV
	var_393_float = 0.9; // 0x297 PushF
	var_394_float = var_385_float * var_393_float; // 0x298 Mult
	GetVictim(var_394_float, var_390_object); // 0x299 Func
	ReportAttack(var_0_object); // 0x29b Func
	var_395_bool = var_390_object == var_0_object; // 0x29d Eq
	if(var_395_bool == 0) goto Label_699; // 0x29e JumpB
	var_396_float = 0; var_397_object = Obj(); var_398_int = 0; // 0x29f PushV
	var_397_object = var_390_object; // 0x2a0 Mov
	var_398_int = var_386_int; // 0x2a1 Mov
	func_392(var_398_int); // 0x2a2 NEW_2
	var_391_float = var_396_float; // 0x2a3 Mov
	var_399_float = 0; var_400_object = Obj(); var_401_float = 0; var_402_int = 0; // 0x2a5 PushV
	var_400_object = var_390_object; // 0x2a6 Mov
	var_401_float = var_391_float; // 0x2a7 Mov
	var_403_int = 0; var_404_object = Obj(); var_405_int = 0; // 0x2a8 PushV
	var_404_object = var_390_object; // 0x2a9 Mov
	var_405_int = var_386_int; // 0x2aa Mov
	func_395(var_405_int); // 0x2ab NEW_2
	var_402_int = var_403_int; // 0x2ac Mov
	func_1561(var_399_float, var_400_object, var_401_float, var_402_int); // 0x2ae NEW_2
	var_392_float = var_399_float; // 0x2af Mov
	var_460_int = 0; // 0x2b1 PushV
	func_1045(var_460_int); // 0x2b2 NEW_2
	ReportHit(var_0_object, var_460_int, var_392_float, var_391_float); // 0x2b4 Func
	var_461_object = Obj(); var_462_float = 0; // 0x2b6 PushV
	var_461_object = var_390_object; // 0x2b7 Mov
	var_462_float = var_392_float; // 0x2b8 Mov
	func_1052(); // 0x2b9 NEW_2
	
Label_699:
	return 6; // 0x2bb Return
}


func_2201(var_79_int)
{
	var_80_int = 0; var_81_int = 0; // 0x899 PushV
	var_82_string = "branch"; // 0x89a PushS
	GetVariable(var_82_string, var_81_int); // 0x89b Func
	var_83_int = 0; // 0x89d PushI
	var_84_bool = var_81_int == var_83_int; // 0x89e Eq
	if(var_84_bool == 0) goto Label_2211; // 0x89f JumpB
	var_79_int = 1; // 0x8a0 MovI
	return 2; // 0x8a1 Return
	
Label_2211:
	var_85_int = 1; // 0x8a3 PushI
	var_86_bool = var_81_int == var_85_int; // 0x8a4 Eq
	if(var_86_bool == 0) goto Label_2216; // 0x8a5 JumpB
	var_79_int = 2; // 0x8a6 MovI
	return 2; // 0x8a7 Return
	
Label_2216:
	var_79_int = 3; // 0x8a8 MovI
	return 2; // 0x8a9 Return
}


func_157(var_2_object, var_107_string)
{
	var_108_bool = 0; // 0x9e PushV
	func_2323(var_108_bool); // 0x9f NEW_2
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
	func_1937(var_111_string, var_112_bool); // 0xaf NEW_2
	var_2_object = var_107_string; // 0xb1 TMov
	return 0; // 0xb2 Return
	
Label_174:
	var_112_bool = 1; // 0xae MovB
}


func_1952(var_147_object)
{
	var_148_float = 0; var_149_cvector = CVector(0,0,0); var_150_float = 0; var_151_cvector = CVector(0,0,0); // 0x7a0 PushV
	GetEyesHeight(var_150_float); // 0x7a1 ObjFunc
	var_151_cvector = CVector(0.0, 0.0, 0.0); // 0x7a3 MovV
	var_152_float = GetByIndex(var_151_cvector, 1); // 0x7a4 PushE
	var_152_float = var_150_float; // 0x7a5 Mov
	SetByIndex(var_151_cvector, 1) = var_152_float; // 0x7a6 PopE
	var_153_string = "head"; // 0x7a7 PushS
	LookAsync(var_147_object, var_153_string, var_151_cvector); // 0x7a8 Func
	return 4; // 0x7aa Return
}


func_1699(var_31_object)
{
	var_32_bool = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_string = ""; var_39_bool = 0; var_40_int = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_string = ""; // 0x6a3 PushV
	var_46_bool = var_31_object == 0; // 0x6a4 NullEq
	if(var_46_bool == 0) goto Label_1703; // 0x6a5 JumpB
	return 14; // 0x6a6 Return
	
Label_1703:
	IsDead(var_39_bool); // 0x6a7 Func
	var_47_bool = var_39_bool; // 0x6a9 Push
	if(var_47_bool == 0) goto Label_1708; // 0x6aa JumpB
	return 14; // 0x6ab Return
	
Label_1708:
	GetSecondaryAnimationType(var_40_int); // 0x6ac Func
	var_48_int = 0; // 0x6ae PushI
	var_49_bool = var_40_int < var_48_int; // 0x6af LT
	if(var_49_bool == 0) goto Label_1714; // 0x6b0 JumpB
	return 14; // 0x6b1 Return
	
Label_1714:
	GetPosition(var_41_cvector); // 0x6b2 ObjFunc
	GetPosition(var_42_cvector); // 0x6b4 Func
	GetDirection(var_43_cvector); // 0x6b6 Func
	var_44_cvector = var_42_cvector - var_41_cvector; // 0x6b8 Sub2
	var_50_float = GetByIndex(var_44_cvector, 0); // 0x6b9 PushE
	var_51_float = GetByIndex(var_43_cvector, 0); // 0x6ba PushE
	var_52_float = var_50_float * var_51_float; // 0x6bb Mult
	var_53_float = GetByIndex(var_44_cvector, 2); // 0x6bc PushE
	var_54_float = GetByIndex(var_43_cvector, 2); // 0x6bd PushE
	var_55_float = var_53_float * var_54_float; // 0x6be Mult
	var_56_int = var_52_float + var_55_float; // 0x6bf Add
	var_57_int = 0; // 0x6c0 PushI
	var_58_bool = var_56_int >= var_57_int; // 0x6c1 GE
	if(var_58_bool == 0) goto Label_1733; // 0x6c2 JumpB
	var_45_string = "fhit"; // 0x6c3 MovS
	goto Label_1734; // 0x6c4 Jump
	
Label_1734:
	var_59_string = "hit_react"; // 0x6c6 PushS
	var_60_string = "1"; // 0x6c7 PushS
	var_61_int = var_45_string + var_60_string; // 0x6c8 Add
	var_62_string = "2"; // 0x6c9 PushS
	var_63_int = var_45_string + var_62_string; // 0x6ca Add
	var_64_int = -10; // 0x6cb PushI
	FadeSecondaryAnimation(var_59_string, var_61_int, var_63_int, var_64_int); // 0x6cc Func
	return 14; // 0x6ce Return
	
Label_1733:
	var_45_string = "bhit"; // 0x6c5 MovS
}


func_1446(var_53_string)
{
	RemoveRTEnvelope(); // 0x5a7 Func
	SetDeathState(); // 0x5a9 Func
	Stop(); // 0x5ab Func
	StopAsync(); // 0x5ad Func
	StopSecondaryAnimation(); // 0x5af Func
	var_54_string = ""; // 0x5b1 PushV
	var_54_string = var_53_string; // 0x5b2 Mov
	func_1970(var_54_string); // 0x5b3 NEW_2
	var_83_string = "all"; // 0x5b5 PushS
	PlayAnimation(var_83_string, var_53_string); // 0x5b6 Func
	WaitForAnimEnd(); // 0x5b8 Func
	var_84_string = "all"; // 0x5ba PushS
	LockAnimationEnd(var_84_string, var_53_string); // 0x5bb Func
	RemoveEnvelope(); // 0x5bd Func
	return 0; // 0x5bf Return
}


func_936(var_300_bool)
{
	var_301_bool = 0; // 0x3a8 PushV
	var_301_bool = 0; // 0x3a9 MovB
	var_302_bool = 0; // 0x3aa PushV
	func_908(var_301_bool, var_302_bool); // 0x3ab NEW_2
	if(var_302_bool == 0) goto Label_947; // 0x3ad JumpB
	var_319_bool = 0; // 0x3ae PushV
	func_952(var_300_bool, var_301_bool, var_319_bool); // 0x3af NEW_2
	if(var_319_bool == 0) goto Label_947; // 0x3b1 JumpB
	var_301_bool = 1; // 0x3b2 MovB
	
Label_947:
	if(var_301_bool == 0) goto Label_950; // 0x3b3 JumpB
	var_300_bool = 1; // 0x3b4 MovB
	return 0; // 0x3b5 Return
	
Label_950:
	var_300_bool = 0; // 0x3b6 MovB
	return 0; // 0x3b7 Return
}


func_2218(var_113_int)
{
	var_114_int = 0; var_115_int = 0; // 0x8aa PushV
	var_116_string = "branch"; // 0x8ab PushS
	GetVariable(var_116_string, var_115_int); // 0x8ac Func
	var_113_int = var_115_int; // 0x8ae Mov
	return 2; // 0x8af Return
}


func_1963()
{
	var_17_bool = 0; // 0x7ab PushV
	func_2323(var_17_bool); // 0x7ac NEW_2
	if(var_17_bool == 0) goto Label_1969; // 0x7ae JumpB
	lshStopSpeech(); // 0x7af Func
	
Label_1969:
	return 0; // 0x7b1 Return
}


func_2224(var_18_object)
{
	var_19_int = 0; // 0x8b1 PushV
	func_2218(var_19_int); // 0x8b2 NEW_2
	var_23_int = 1; // 0x8b4 PushI
	var_24_bool = var_19_int == var_23_int; // 0x8b5 Eq
	if(var_24_bool == 0) goto Label_2234; // 0x8b6 JumpB
	WorkWithCorpse(var_18_object); // 0x8b7 Func
	goto Label_2236; // 0x8b9 Jump
	
Label_2236:
	return 0; // 0x8bc Return
	
Label_2234:
	Barter(var_18_object); // 0x8ba Func
}


func_1970(var_54_string)
{
	var_55_bool = 0; var_56_int = 0; var_57_bool = 0; var_58_int = 0; var_59_bool = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_bool = 0; var_64_int = 0; var_65_bool = 0; var_66_int = 0; var_67_bool = 0; var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); // 0x7b2 PushV
	IsExisting3DSound(var_63_bool, var_54_string); // 0x7b3 Func
	var_71_bool = var_63_bool == 0; // 0x7b5 Not
	if(var_71_bool == 0) goto Label_1995; // 0x7b6 JumpB
	var_64_int = 0; // 0x7b7 MovI
	
Label_1976:
	var_72_int = 1; // 0x7b8 PushI
	var_73_int = var_64_int + var_72_int; // 0x7b9 Add
	var_74_int = var_54_string + var_73_int; // 0x7ba Add
	IsExisting3DSound(var_65_bool, var_74_int); // 0x7bb Func
	var_75_bool = var_65_bool == 0; // 0x7bd Not
	if(var_75_bool == 0) goto Label_1984; // 0x7be JumpB
	goto Label_1987; // 0x7bf Jump
	
Label_1987:
	var_76_bool = var_64_int == 0; // 0x7c3 Not
	if(var_76_bool == 0) goto Label_1990; // 0x7c4 JumpB
	return 16; // 0x7c5 Return
	
Label_1990:
	irand(var_66_int, var_64_int); // 0x7c6 Func
	var_77_int = 1; // 0x7c8 PushI
	var_78_int = var_66_int + var_77_int; // 0x7c9 Add
	var_54_string = var_54_string + var_78_int; // 0x7ca Add2
	
Label_1995:
	Is3DSoundLoaded(var_67_bool, var_54_string); // 0x7cb Func
	var_79_bool = var_67_bool; // 0x7cd Push
	if(var_79_bool == 0) goto Label_2010; // 0x7ce JumpB
	GetEyesHeight(var_68_float); // 0x7cf Func
	GetDirection(var_69_cvector); // 0x7d1 Func
	var_80_int = 50; // 0x7d3 PushI
	var_70_cvector = var_69_cvector * var_80_int; // 0x7d4 Mult2
	var_81_float = GetByIndex(var_70_cvector, 1); // 0x7d5 PushE
	var_81_float = var_81_float + var_68_float; // 0x7d6 Add2
	SetByIndex(var_70_cvector, 1) = var_81_float; // 0x7d7 PopE
	PlayGlobalSound(var_54_string, var_70_cvector); // 0x7d8 Func
	
Label_2010:
	return 16; // 0x7da Return
	
Label_1984:
	var_82_int = 1; // 0x7c0 PushI
	var_64_int = var_64_int + var_82_int; // 0x7c1 Add2
	goto Label_1976; // 0x7c2 Jump
}


func_952(var_0_object, var_4_bool, var_319_bool)
{
	var_320_object = Obj(); var_321_bool = 0; var_322_float = 0; var_323_cvector = CVector(0,0,0); var_324_cvector = CVector(0,0,0); var_325_object = Obj(); var_326_bool = 0; var_327_float = 0; var_328_cvector = CVector(0,0,0); var_329_cvector = CVector(0,0,0); // 0x3b8 PushV
	GetScene(var_325_object); // 0x3b9 Func
	var_326_bool = 0; // 0x3bb MovB
	
Label_956:
	var_330_cvector = CVector(0,0,0); var_331_object = Obj(); // 0x3bc PushV
	var_331_object = var_0_object; // 0x3bd MovT
	func_1537(var_331_object); // 0x3be NEW_2
	var_336_int = -var_330_cvector; // 0x3c0 Neg
	FindDirLength(var_327_float, var_336_int, var_327_float); // 0x3c1 Func
	var_337_bool = var_327_float < var_4_bool; // 0x3c3 LT
	if(var_337_bool == 0) goto Label_966; // 0x3c4 JumpB
	goto Label_994; // 0x3c5 Jump
	
Label_994:
	var_319_bool = var_326_bool; // 0x3e2 Mov
	return 10; // 0x3e3 Return
	
Label_966:
	Face(var_0_object); // 0x3c6 Func
	var_338_string = "all"; // 0x3c8 PushS
	var_339_string = "bjump"; // 0x3c9 PushS
	PlayAnimation(var_338_string, var_339_string); // 0x3ca Func
	GetPFPosition(var_328_cvector); // 0x3cc TObjFunc
	GetPFPosition(var_329_cvector); // 0x3ce Func
	WaitForAnimEnd(); // 0x3d0 Func
	func_1040(var_329_cvector); // 0x3d3 NEW_2
	StopAsync(); // 0x3d5 Func
	var_340_cvector = CVector(0.0, 0.0, 0.0); // 0x3d7 PushVec
	SetSpeed(var_340_cvector); // 0x3d8 Func
	var_326_bool = 1; // 0x3da MovB
	var_341_bool = 0; // 0x3db PushV
	func_908(var_329_cvector, var_341_bool); // 0x3dc NEW_2
	var_342_bool = var_341_bool == 0; // 0x3de Not
	if(var_342_bool == 0) goto Label_993; // 0x3df JumpB
	goto Label_994; // 0x3e0 Jump
	
Label_993:
	goto Label_956; // 0x3e1 Jump
}


func_701(var_0_object, var_348_bool, var_349_float)
{
	var_350_int = 0; var_351_bool = 0; var_352_int = 0; var_353_string = ""; var_354_int = 0; var_355_bool = 0; var_356_int = 0; var_357_string = ""; // 0x2bd PushV
	func_1040(var_357_string); // 0x2bf NEW_2
	irand(var_354_int, var_357_string); // 0x2c1 Func
	var_358_int = 1; // 0x2c3 PushI
	var_354_int = var_354_int + var_358_int; // 0x2c4 Add2
	Face(var_0_object); // 0x2c5 Func
	var_359_bool = 1; // 0x2c7 PushB
	SetAttackState(var_359_bool); // 0x2c8 Func
	func_2086(); // 0x2cb NEW_2
	var_364_string = "all"; // 0x2cd PushS
	var_365_string = "attack_begin"; // 0x2ce PushS
	var_366_int = var_365_string + var_354_int; // 0x2cf Add
	PlayAnimation(var_364_string, var_366_int); // 0x2d0 Func
	WaitForAnimEnd(); // 0x2d2 Func
	func_1008(var_356_int, var_357_string); // 0x2d5 NEW_2
	var_382_bool = 0; var_383_object = Obj(); // 0x2d7 PushV
	var_383_object = var_0_object; // 0x2d8 MovT
	func_1675(var_382_bool, var_383_object); // 0x2d9 NEW_2
	var_384_bool = var_382_bool == 0; // 0x2db Not
	if(var_384_bool == 0) goto Label_737; // 0x2dc JumpB
	StopAsync(); // 0x2dd Func
	var_348_bool = 0; // 0x2df MovB
	return 8; // 0x2e0 Return
	
Label_737:
	var_385_float = 0; var_386_int = 0; // 0x2e1 PushV
	var_385_float = var_349_float; // 0x2e2 Mov
	var_386_int = var_354_int; // 0x2e3 Mov
	func_662(var_357_string, var_385_float, var_386_int); // 0x2e4 NEW_2
	var_463_string = "all"; // 0x2e6 PushS
	var_464_string = "attack_middle"; // 0x2e7 PushS
	var_465_int = var_464_string + var_354_int; // 0x2e8 Add
	HasAnimation(var_355_bool, var_463_string, var_465_int); // 0x2e9 Func
	var_466_bool = var_355_bool; // 0x2eb Push
	if(var_466_bool == 0) goto Label_818; // 0x2ec JumpB
	func_2086(); // 0x2ee NEW_2
	var_467_string = "all"; // 0x2f0 PushS
	var_468_string = "attack_middle"; // 0x2f1 PushS
	var_469_int = var_468_string + var_354_int; // 0x2f2 Add
	PlayAnimation(var_467_string, var_469_int); // 0x2f3 Func
	WaitForAnimEnd(); // 0x2f5 Func
	func_1040(var_357_string); // 0x2f8 NEW_2
	var_470_bool = 0; var_471_object = Obj(); // 0x2fa PushV
	var_471_object = var_0_object; // 0x2fb MovT
	func_1675(var_470_bool, var_471_object); // 0x2fc NEW_2
	var_472_bool = var_470_bool == 0; // 0x2fe Not
	if(var_472_bool == 0) goto Label_772; // 0x2ff JumpB
	StopAsync(); // 0x300 Func
	var_348_bool = 0; // 0x302 MovB
	return 8; // 0x303 Return
	
Label_772:
	var_473_float = 0; var_474_int = 0; // 0x304 PushV
	var_473_float = var_349_float; // 0x305 Mov
	var_474_int = var_354_int; // 0x306 Mov
	func_662(var_357_string, var_473_float, var_474_int); // 0x307 NEW_2
	var_356_int = 1; // 0x309 MovI
	
Label_778:
	var_475_string = "attack_middle"; // 0x30a PushS
	var_476_int = var_475_string + var_354_int; // 0x30b Add
	var_477_string = "_"; // 0x30c PushS
	var_478_int = var_476_int + var_477_string; // 0x30d Add
	var_357_string = var_478_int + var_356_int; // 0x30e Add2
	var_479_string = "all"; // 0x30f PushS
	HasAnimation(var_355_bool, var_479_string, var_357_string); // 0x310 Func
	var_480_bool = var_355_bool == 0; // 0x312 Not
	if(var_480_bool == 0) goto Label_789; // 0x313 JumpB
	goto Label_818; // 0x314 Jump
	
Label_818:
	var_481_bool = 0; // 0x332 PushB
	SetAttackState(var_481_bool); // 0x333 Func
	var_482_string = "all"; // 0x335 PushS
	var_483_string = "attack_end"; // 0x336 PushS
	var_484_int = var_483_string + var_354_int; // 0x337 Add
	PlayAnimation(var_482_string, var_484_int); // 0x338 Func
	var_485_bool = 0; // 0x33a PushV
	func_1054(var_485_bool); // 0x33b NEW_2
	if(var_485_bool == 0) goto Label_836; // 0x33d JumpB
	var_486_bool = 0; var_487_float = 0; // 0x33e PushV
	var_487_float = 0.75; // 0x33f MovF
	func_838(var_486_bool, var_487_float); // 0x340 NEW_2
	StopAsync(); // 0x342 Func
	
Label_836:
	var_348_bool = 1; // 0x344 MovB
	return 8; // 0x345 Return
	
Label_789:
	func_2086(); // 0x316 NEW_2
	var_495_string = "all"; // 0x318 PushS
	PlayAnimation(var_495_string, var_357_string); // 0x319 Func
	WaitForAnimEnd(); // 0x31b Func
	func_1040(var_357_string); // 0x31e NEW_2
	var_496_bool = 0; var_497_object = Obj(); // 0x320 PushV
	var_497_object = var_0_object; // 0x321 MovT
	func_1675(var_496_bool, var_497_object); // 0x322 NEW_2
	var_498_bool = var_496_bool == 0; // 0x324 Not
	if(var_498_bool == 0) goto Label_810; // 0x325 JumpB
	StopAsync(); // 0x326 Func
	var_348_bool = 0; // 0x328 MovB
	return 8; // 0x329 Return
	
Label_810:
	var_499_float = 0; var_500_int = 0; // 0x32a PushV
	var_499_float = var_349_float; // 0x32b Mov
	var_500_int = var_354_int; // 0x32c Mov
	func_662(var_357_string, var_499_float, var_500_int); // 0x32d NEW_2
	var_501_int = 1; // 0x32f PushI
	var_356_int = var_356_int + var_501_int; // 0x330 Add2
	goto Label_778; // 0x331 Jump
}


func_2237(var_119_string)
{
	var_120_object = Obj(); var_121_int = 0; var_122_bool = 0; var_123_object = Obj(); var_124_int = 0; var_125_bool = 0; // 0x8bd PushV
	CreateInvItem(var_123_object); // 0x8be Func
	SetItemName(var_119_string); // 0x8c0 ObjFunc
	var_126_string = "Organ"; // 0x8c2 PushS
	var_127_int = 1; // 0x8c3 PushI
	SetProperty(var_126_string, var_127_int); // 0x8c4 ObjFunc
	GetItemID(var_124_int); // 0x8c6 ObjFunc
	var_128_int = 0; // 0x8c8 PushI
	var_129_int = 1; // 0x8c9 PushI
	AddItem(var_125_bool, var_123_object, var_128_int, var_129_int); // 0x8ca Func
	return 6; // 0x8cc Return
}


func_1478(var_16_object)
{
	var_17_int = 0; var_18_object = Obj(); // 0x5c7 PushV
	var_18_object = var_16_object; // 0x5c8 Mov
	TaskCall(0); // 0x5c9 TaskCall
	func_0(var_19_object, var_17_int, var_18_object); // 0x5ca NEW_2
	TaskReturn(); // 0x5cb TaskReturn
	return 0; // 0x5cd Return
}


func_2254()
{
	var_113_int = 0; // 0x8ce PushV
	func_2218(var_113_int); // 0x8cf NEW_2
	var_117_int = 1; // 0x8d1 PushI
	var_118_bool = var_113_int != var_117_int; // 0x8d2 Neq
	if(var_118_bool == 0) goto Label_2261; // 0x8d3 JumpB
	return 0; // 0x8d4 Return
	
Label_2261:
	var_119_string = ""; // 0x8d5 PushV
	var_119_string = "liver"; // 0x8d6 MovS
	func_2237(var_119_string); // 0x8d7 NEW_2
	var_130_string = ""; // 0x8d9 PushV
	var_130_string = "kidney"; // 0x8da MovS
	func_2237(var_130_string); // 0x8db NEW_2
	var_131_string = ""; // 0x8dd PushV
	var_131_string = "heart"; // 0x8de MovS
	func_2237(var_131_string); // 0x8df NEW_2
	var_132_string = ""; // 0x8e1 PushV
	var_132_string = "blood"; // 0x8e2 MovS
	func_2237(var_132_string); // 0x8e3 NEW_2
	return 0; // 0x8e5 Return
}


func_1743(var_18_object, var_19_int, var_20_float)
{
	var_21_cvector = CVector(0,0,0); var_22_object = Obj(); var_23_int = 0; var_24_bool = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_int = 0; var_28_int = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_object = Obj(); var_32_int = 0; var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_int = 0; var_37_int = 0; var_38_cvector = CVector(0,0,0); // 0x6cf PushV
	var_39_bool = 0; // 0x6d0 PushV
	var_39_bool = 0; // 0x6d1 MovB
	var_40_bool = 0; // 0x6d2 PushV
	var_40_bool = 0; // 0x6d3 MovB
	var_41_object = var_18_object; // 0x6d4 Push
	if(var_41_object == 0) goto Label_1754; // 0x6d5 JumpB
	var_42_int = 4; // 0x6d6 PushI
	var_43_bool = var_19_int != var_42_int; // 0x6d7 Neq
	if(var_43_bool == 0) goto Label_1754; // 0x6d8 JumpB
	var_40_bool = 1; // 0x6d9 MovB
	
Label_1754:
	if(var_40_bool == 0) goto Label_1759; // 0x6da JumpB
	var_44_int = 5; // 0x6db PushI
	var_45_bool = var_19_int != var_44_int; // 0x6dc Neq
	if(var_45_bool == 0) goto Label_1759; // 0x6dd JumpB
	var_39_bool = 1; // 0x6de MovB
	
Label_1759:
	if(var_39_bool == 0) goto Label_1806; // 0x6df JumpB
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); // 0x6e0 PushV
	var_48_cvector = CVector(0,0,0); var_49_object = Obj(); // 0x6e1 PushV
	var_49_object = var_18_object; // 0x6e2 Mov
	func_1537(var_49_object); // 0x6e3 NEW_2
	var_47_cvector = var_48_cvector; // 0x6e4 Mov
	func_2017(var_46_cvector, var_47_cvector); // 0x6e6 NEW_2
	var_30_cvector = var_46_cvector; // 0x6e7 Mov
	CreateVectorVector(var_31_object); // 0x6e9 Func
	var_32_int = 1; // 0x6eb MovI
	
Label_1772:
	var_59_string = "hit"; // 0x6ec PushS
	var_60_int = var_59_string + var_32_int; // 0x6ed Add
	GetGeometryLocator(var_60_int, var_33_bool, var_34_cvector, var_35_cvector); // 0x6ee Func
	var_61_bool = var_33_bool == 0; // 0x6f0 Not
	if(var_61_bool == 0) goto Label_1779; // 0x6f1 JumpB
	goto Label_1788; // 0x6f2 Jump
	
Label_1788:
	size(var_36_int); // 0x6fc ObjFunc
	var_62_int = var_36_int; // 0x6fe Push
	if(var_62_int == 0) goto Label_1805; // 0x6ff JumpB
	irand(var_37_int, var_36_int); // 0x700 Func
	get(var_38_cvector, var_37_int); // 0x702 ObjFunc
	var_63_object = Obj(); var_64_int = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); // 0x704 PushV
	var_63_object = var_18_object; // 0x705 Mov
	var_64_int = var_19_int; // 0x706 Mov
	var_65_float = var_20_float; // 0x707 Mov
	var_66_cvector = var_38_cvector; // 0x708 Mov
	var_67_cvector = -var_30_cvector; // 0x709 Neg2
	func_1811(var_65_float, var_66_cvector, var_67_cvector); // 0x70a NEW_2
	return 18; // 0x70c Return
	
Label_1805:
	var_31_object = 0; // 0x70d SetNull
	
Label_1806:
	var_108_object = Obj(); // 0x70e PushV
	var_108_object = var_18_object; // 0x70f Mov
	func_1699(var_108_object); // 0x710 NEW_2
	return 18; // 0x712 Return
	
Label_1779:
	var_109_int = var_35_cvector | var_30_cvector; // 0x6f3 Or
	var_110_float = 0.70711; // 0x6f4 PushF
	var_111_bool = var_109_int >= var_110_float; // 0x6f5 GE
	if(var_111_bool == 0) goto Label_1785; // 0x6f6 JumpB
	add(var_34_cvector); // 0x6f7 ObjFunc
	
Label_1785:
	var_112_int = 1; // 0x6f9 PushI
	var_32_int = var_32_int + var_112_int; // 0x6fa Add2
	goto Label_1772; // 0x6fb Jump
}


func_2011(var_82_object)
{
	var_83_object = Obj(); var_84_object = Obj(); // 0x7db PushV
	self(var_84_object); // 0x7dc Func
	var_82_object = var_84_object; // 0x7de Mov
	return 2; // 0x7df Return
}


func_1500(var_15_bool)
{
	var_15_bool = 1; // 0x5dc MovB
	return 0; // 0x5dd Return
}


func_2017(var_46_cvector, var_47_cvector)
{
	var_54_float = 0; var_55_float = 0; // 0x7e1 PushV
	var_56_int = var_47_cvector | var_47_cvector; // 0x7e2 Or
	var_55_float = sqrt(var_56_int); // 0x7e3 Sqrt2
	var_57_float = 0.0; // 0x7e4 PushF
	var_58_bool = var_55_float < var_57_float; // 0x7e5 LT
	if(var_58_bool == 0) goto Label_2025; // 0x7e6 JumpB
	var_46_cvector = CVector(0.0, 0.0, 0.0); // 0x7e7 MovV
	return 2; // 0x7e8 Return
	
Label_2025:
	var_46_cvector = var_47_cvector / var_47_cvector; // 0x7e9 Div2
	return 2; // 0x7ea Return
}


func_997(var_0_object, var_250_bool)
{
	var_251_bool = 0; var_252_bool = 0; // 0x3e5 PushV
	var_253_string = "IsAttacking"; // 0x3e6 PushS
	var_254_int = 1; // 0x3e7 PushI
	var_255_bool = IsFuncExist(var_0_object, var_253_string, var_254_int); // 0x3e8 FuncExist
	if(var_255_bool == 0) goto Label_1006; // 0x3e9 JumpB
	IsAttacking(var_252_bool); // 0x3ea TObjFunc
	var_250_bool = var_252_bool; // 0x3ec Mov
	return 2; // 0x3ed Return
	
Label_1006:
	var_250_bool = 0; // 0x3ee MovB
	return 2; // 0x3ef Return
}


func_2027(var_437_float, var_438_float, var_439_float)
{
	var_442_bool = var_438_float < var_439_float; // 0x7ec LT
	if(var_442_bool == 0) goto Label_2032; // 0x7ed JumpB
	var_437_float = var_438_float; // 0x7ee Mov
	goto Label_2033; // 0x7ef Jump
	
Label_2033:
	return 0; // 0x7f1 Return
	
Label_2032:
	var_437_float = var_439_float; // 0x7f0 Mov
}


func_1008(var_2_object, var_5_object)
{
	var_367_float = 0; var_368_int = 0; var_369_float = 0; var_370_int = 0; // 0x3f0 PushV
	var_371_bool = var_2_object == 0; // 0x3f1 Not
	if(var_371_bool == 0) goto Label_1012; // 0x3f2 JumpB
	return 4; // 0x3f3 Return
	
Label_1012:
	var_372_object = var_5_object; // 0x3f4 PushT
	if(var_372_object == 0) goto Label_1020; // 0x3f5 JumpB
	var_373_int = -1; // 0x3f6 PushI
	var_5_object = var_5_object + var_373_int; // 0x3f7 Add2
	var_374_int = 0; // 0x3f8 PushI
	var_375_bool = var_5_object > var_374_int; // 0x3f9 GT
	if(var_375_bool == 0) goto Label_1020; // 0x3fa JumpB
	return 4; // 0x3fb Return
	
Label_1020:
	rand(var_369_float); // 0x3fc Func
	var_376_float = 0; // 0x3fe PushV
	func_1058(var_376_float); // 0x3ff NEW_2
	var_377_bool = var_369_float < var_376_float; // 0x401 LT
	if(var_377_bool == 0) goto Label_1039; // 0x402 JumpB
	irand(var_370_int, var_369_float); // 0x403 Func
	var_378_int = 1; // 0x405 PushI
	var_370_int = var_370_int + var_378_int; // 0x406 Add2
	var_379_string = "attack"; // 0x407 PushS
	var_380_int = var_379_string + var_370_int; // 0x408 Add
	Speak(var_380_int); // 0x409 Func
	var_381_int = 0; // 0x40b PushV
	func_1056(var_381_int); // 0x40c NEW_2
	var_5_object = var_381_int; // 0x40d TMov
	
Label_1039:
	return 4; // 0x40f Return
}


func_2034(var_447_float, var_448_float, var_449_float, var_450_float)
{
	var_451_bool = var_448_float < var_449_float; // 0x7f3 LT
	if(var_451_bool == 0) goto Label_2039; // 0x7f4 JumpB
	var_447_float = var_449_float; // 0x7f5 Mov
	return 0; // 0x7f6 Return
	
Label_2039:
	var_452_bool = var_448_float > var_450_float; // 0x7f7 GT
	if(var_452_bool == 0) goto Label_2043; // 0x7f8 JumpB
	var_447_float = var_450_float; // 0x7f9 Mov
	return 0; // 0x7fa Return
	
Label_2043:
	var_447_float = var_448_float; // 0x7fb Mov
	return 0; // 0x7fc Return
}


func_1267(var_0_object, var_1_object, var_22_int)
{
	var_23_int = 0; // 0x4f4 PushI
	var_24_bool = var_22_int != var_23_int; // 0x4f5 Neq
	if(var_24_bool == 0) goto Label_1272; // 0x4f6 JumpB
	return 0; // 0x4f7 Return
	
Label_1272:
	var_25_bool = 0; var_26_object = Obj(); // 0x4f8 PushV
	var_26_object = var_1_object; // 0x4f9 MovT
	func_1305(var_25_bool, var_26_object); // 0x4fa NEW_2
	var_61_bool = var_25_bool == 0; // 0x4fc Not
	if(var_61_bool == 0) goto Label_1279; // 0x4fd JumpB
	var_0_object = 1; // 0x4fe TMovB
	
Label_1279:
	var_62_int = 0; // 0x4ff PushI
	KillTimer(var_62_int); // 0x500 Func
	Stop(); // 0x502 Func
	return 0; // 0x504 Return
}


func_1523(var_427_string, var_428_int)
{
	var_429_int = 2; // 0x5f4 PushI
	var_430_bool = var_428_int == var_429_int; // 0x5f5 Eq
	if(var_430_bool == 0) goto Label_1530; // 0x5f6 JumpB
	var_427_string = "fire"; // 0x5f7 MovS
	return 0; // 0x5f8 Return
	
Label_1530:
	var_431_int = 1; // 0x5fa PushI
	var_432_bool = var_428_int == var_431_int; // 0x5fb Eq
	if(var_432_bool == 0) goto Label_1535; // 0x5fc JumpB
	var_427_string = "bullet"; // 0x5fd MovS
	return 0; // 0x5fe Return
	
Label_1535:
	var_427_string = "phys"; // 0x5ff MovS
	return 0; // 0x600 Return
}


func_2045(var_97_int, var_98_string)
{
	var_99_int = 0; var_100_int = 0; // 0x7fd PushV
	GetVariable(var_98_string, var_100_int); // 0x7fe Func
	var_97_int = var_100_int; // 0x800 Mov
	return 2; // 0x801 Return
}


