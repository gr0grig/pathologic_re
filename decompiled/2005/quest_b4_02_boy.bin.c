task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_int = 1; // 0xd2 PushI
	if(var_17_int == 0) goto Label_421; // 0xd3 JumpB
	func_2213(); // 0xd5 NEW_2
	var_19_int = 19674; // 0xd7 PushI
	var_20_bool = var_16_bool == var_19_int; // 0xd8 Eq
	if(var_20_bool == 0) goto Label_223; // 0xd9 JumpB
	var_21_object = Obj(); var_22_object = Obj(); // 0xda PushV
	var_21_object = var_1_object; // 0xdb MovT
	var_22_object = var_0_object; // 0xdc MovT
	func_2427(); // 0xdd NEW_2
	
Label_223:
	var_29_int = 20848; // 0xdf PushI
	var_30_bool = var_16_bool == var_29_int; // 0xe0 Eq
	if(var_30_bool == 0) goto Label_231; // 0xe1 JumpB
	var_31_object = Obj(); var_32_object = Obj(); // 0xe2 PushV
	var_31_object = var_1_object; // 0xe3 MovT
	var_32_object = var_0_object; // 0xe4 MovT
	func_2427(); // 0xe5 NEW_2
	
Label_231:
	var_33_int = 19673; // 0xe7 PushI
	var_34_bool = var_15_object == var_33_int; // 0xe8 Eq
	if(var_34_bool == 0) goto Label_309; // 0xe9 JumpB
	var_35_bool = 0; var_36_object = Obj(); // 0xea PushV
	var_36_object = var_1_object; // 0xeb MovT
	func_2440(var_36_object); // 0xec NEW_2
	if(var_35_bool == 0) goto Label_259; // 0xee JumpB
	var_43_object = Obj(); var_44_object = Obj(); // 0xef PushV
	var_43_object = var_1_object; // 0xf0 MovT
	var_44_object = var_0_object; // 0xf1 MovT
	func_2421(); // 0xf2 NEW_2
	var_47_string = ""; // 0xf4 PushV
	var_47_string = "Neutral"; // 0xf5 MovS
	func_187(var_16_bool, var_47_string); // 0xf6 NEW_2
	var_64_int = 518563; // 0xf8 PushI
	SetMessage(var_64_int); // 0xf9 TObjFunc
	ClearReplies(); // 0xfb TObjFunc
	var_65_int = 518962; // 0xfd PushI
	var_66_int = 20075; // 0xfe PushI
	var_67_int = 20074; // 0xff PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0x100 TObjFunc
	return 0; // 0x102 Return
	
Label_259:
	var_68_bool = 0; var_69_object = Obj(); // 0x103 PushV
	var_69_object = var_1_object; // 0x104 MovT
	func_2452(var_69_object); // 0x105 NEW_2
	if(var_68_bool == 0) goto Label_289; // 0x107 JumpB
	var_74_object = Obj(); var_75_object = Obj(); // 0x108 PushV
	var_74_object = var_1_object; // 0x109 MovT
	var_75_object = var_0_object; // 0x10a MovT
	func_2434(); // 0x10b NEW_2
	var_78_string = ""; // 0x10d PushV
	var_78_string = "Neutral"; // 0x10e MovS
	func_187(var_16_bool, var_78_string); // 0x10f NEW_2
	var_79_int = 518565; // 0x111 PushI
	SetMessage(var_79_int); // 0x112 TObjFunc
	ClearReplies(); // 0x114 TObjFunc
	var_80_int = 518566; // 0x116 PushI
	var_81_int = 20046; // 0x117 PushI
	var_82_int = 19676; // 0x118 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x119 TObjFunc
	var_83_int = 518934; // 0x11b PushI
	var_84_int = -1; // 0x11c PushI
	var_85_int = 20045; // 0x11d PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x11e TObjFunc
	return 0; // 0x120 Return
	
Label_289:
	var_86_string = ""; // 0x121 PushV
	var_86_string = "Neutral"; // 0x122 MovS
	func_187(var_16_bool, var_86_string); // 0x123 NEW_2
	var_87_int = 518569; // 0x125 PushI
	SetMessage(var_87_int); // 0x126 TObjFunc
	ClearReplies(); // 0x128 TObjFunc
	var_88_int = 518570; // 0x12a PushI
	var_89_int = -1; // 0x12b PushI
	var_90_int = 19680; // 0x12c PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0x12d TObjFunc
	var_91_int = 518940; // 0x12f PushI
	var_92_int = -1; // 0x130 PushI
	var_93_int = 20051; // 0x131 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x132 TObjFunc
	return 0; // 0x134 Return
	
Label_309:
	var_94_int = 20046; // 0x135 PushI
	var_95_bool = var_15_object == var_94_int; // 0x136 Eq
	if(var_95_bool == 0) goto Label_327; // 0x137 JumpB
	var_96_string = ""; // 0x138 PushV
	var_96_string = "Neutral"; // 0x139 MovS
	func_187(var_16_bool, var_96_string); // 0x13a NEW_2
	var_97_int = 518935; // 0x13c PushI
	SetMessage(var_97_int); // 0x13d TObjFunc
	ClearReplies(); // 0x13f TObjFunc
	var_98_int = 518936; // 0x141 PushI
	var_99_int = 20048; // 0x142 PushI
	var_100_int = 20047; // 0x143 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x144 TObjFunc
	return 0; // 0x146 Return
	
Label_327:
	var_101_int = 20048; // 0x147 PushI
	var_102_bool = var_15_object == var_101_int; // 0x148 Eq
	if(var_102_bool == 0) goto Label_350; // 0x149 JumpB
	var_103_string = ""; // 0x14a PushV
	var_103_string = "Neutral"; // 0x14b MovS
	func_187(var_16_bool, var_103_string); // 0x14c NEW_2
	var_104_int = 518937; // 0x14e PushI
	SetMessage(var_104_int); // 0x14f TObjFunc
	ClearReplies(); // 0x151 TObjFunc
	var_105_int = 518938; // 0x153 PushI
	var_106_int = -1; // 0x154 PushI
	var_107_int = 20049; // 0x155 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x156 TObjFunc
	var_108_int = 518939; // 0x158 PushI
	var_109_int = -1; // 0x159 PushI
	var_110_int = 20050; // 0x15a PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x15b TObjFunc
	return 0; // 0x15d Return
	
Label_350:
	var_111_int = 20075; // 0x15e PushI
	var_112_bool = var_15_object == var_111_int; // 0x15f Eq
	if(var_112_bool == 0) goto Label_368; // 0x160 JumpB
	var_113_string = ""; // 0x161 PushV
	var_113_string = "Neutral"; // 0x162 MovS
	func_187(var_16_bool, var_113_string); // 0x163 NEW_2
	var_114_int = 518963; // 0x165 PushI
	SetMessage(var_114_int); // 0x166 TObjFunc
	ClearReplies(); // 0x168 TObjFunc
	var_115_int = 527872; // 0x16a PushI
	var_116_int = 29220; // 0x16b PushI
	var_117_int = 29219; // 0x16c PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x16d TObjFunc
	return 0; // 0x16f Return
	
Label_368:
	var_118_int = 29220; // 0x170 PushI
	var_119_bool = var_15_object == var_118_int; // 0x171 Eq
	if(var_119_bool == 0) goto Label_391; // 0x172 JumpB
	var_120_string = ""; // 0x173 PushV
	var_120_string = "Neutral"; // 0x174 MovS
	func_187(var_16_bool, var_120_string); // 0x175 NEW_2
	var_121_int = 527873; // 0x177 PushI
	SetMessage(var_121_int); // 0x178 TObjFunc
	ClearReplies(); // 0x17a TObjFunc
	var_122_int = 518564; // 0x17c PushI
	var_123_int = -1; // 0x17d PushI
	var_124_int = 19674; // 0x17e PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x17f TObjFunc
	var_125_int = 518933; // 0x181 PushI
	var_126_int = 20847; // 0x182 PushI
	var_127_int = 20044; // 0x183 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x184 TObjFunc
	return 0; // 0x186 Return
	
Label_391:
	var_128_int = 20847; // 0x187 PushI
	var_129_bool = var_15_object == var_128_int; // 0x188 Eq
	if(var_129_bool == 0) goto Label_409; // 0x189 JumpB
	var_130_string = ""; // 0x18a PushV
	var_130_string = "Neutral"; // 0x18b MovS
	func_187(var_16_bool, var_130_string); // 0x18c NEW_2
	var_131_int = 519689; // 0x18e PushI
	SetMessage(var_131_int); // 0x18f TObjFunc
	ClearReplies(); // 0x191 TObjFunc
	var_132_int = 519690; // 0x193 PushI
	var_133_int = -1; // 0x194 PushI
	var_134_int = 20848; // 0x195 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x196 TObjFunc
	return 0; // 0x198 Return
	
Label_409:
	var_3_string = 1; // 0x199 TMovB
	var_135_bool = 0; // 0x19a PushV
	func_2395(var_135_bool); // 0x19b NEW_2
	if(var_135_bool == 0) goto Label_417; // 0x19d JumpB
	lshStopAnimation(); // 0x19e Func
	goto Label_419; // 0x1a0 Jump
	
Label_419:
	return 0; // 0x1a3 Return
	
Label_417:
	StopAnimation(); // 0x1a1 Func
	
Label_421:
	return 0; // 0x1a5 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	func_552(); // 0x1b0 NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0x1b2 PushV
	var_17_object = var_15_bool; // 0x1b3 Mov
	TaskCall(0); // 0x1b4 TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0x1b5 NEW_2
	TaskReturn(); // 0x1b6 TaskReturn
	return 0; // 0x1b8 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_string, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_string = "run"; // 0x1ba PushS
	var_17_bool = var_15_bool == var_16_string; // 0x1bb Eq
	if(var_17_bool == 0) goto Label_450; // 0x1bc JumpB
	TaskCall(3); // 0x1be TaskCall
	func_557(); // 0x1bf NEW_2
	TaskReturn(); // 0x1c0 TaskReturn
	
Label_450:
	return 0; // 0x1c2 Return
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	func_552(); // 0x1c5 NEW_2
	var_16_object = Obj(); // 0x1c7 PushV
	var_16_object = var_15_bool; // 0x1c8 Mov
	TaskCall(4); // 0x1c9 TaskCall
	func_654(var_16_object); // 0x1ca NEW_2
	TaskReturn(); // 0x1cb TaskReturn
	return 0; // 0x1cd Return
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	func_552(); // 0x1d0 NEW_2
	var_16_object = Obj(); // 0x1d2 PushV
	var_16_object = var_15_bool; // 0x1d3 Mov
	func_2539(); // 0x1d4 NEW_2
	return 0; // 0x1d6 Return
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	func_646(var_15_bool); // 0x23f NEW_2
	var_16_object = Obj(); // 0x241 PushV
	var_16_object = var_15_bool; // 0x242 Mov
	TaskCall(4); // 0x243 TaskCall
	func_654(var_16_object); // 0x244 NEW_2
	TaskReturn(); // 0x245 TaskReturn
	return 0; // 0x247 Return
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	func_646(var_15_bool); // 0x24a NEW_2
	var_16_object = Obj(); // 0x24c PushV
	var_16_object = var_15_bool; // 0x24d Mov
	func_2539(); // 0x24e NEW_2
	return 0; // 0x250 Return
}


task_5_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_int)
{
	var_16_int = 1; // 0x570 PushI
	var_17_bool = var_15_int == var_16_int; // 0x571 Eq
	if(var_17_bool == 0) goto Label_1400; // 0x572 JumpB
	var_18_object = Obj(); // 0x573 PushV
	var_18_object = var_1_object; // 0x574 MovT
	func_2367(var_18_object); // 0x575 NEW_2
	goto Label_1404; // 0x577 Jump
	
Label_1404:
	return 0; // 0x57c Return
	
Label_1400:
	var_23_int = 0; // 0x578 PushV
	var_23_int = var_15_int; // 0x579 Mov
	func_1549(var_14_bool, var_15_int, var_23_int); // 0x57a NEW_2
}


task_5_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	var_16_bool = 0; // 0x58b PushV
	var_16_bool = 0; // 0x58c MovB
	var_17_bool = var_1_object == var_15_object; // 0x58d Eq
	if(var_17_bool == 0) goto Label_1426; // 0x58e JumpB
	var_18_bool = var_2_object == 0; // 0x58f Not
	if(var_18_bool == 0) goto Label_1426; // 0x590 JumpB
	var_16_bool = 1; // 0x591 MovB
	
Label_1426:
	if(var_16_bool == 0) goto Label_1432; // 0x592 JumpB
	var_2_object = 1; // 0x593 TMovB
	var_19_object = Obj(); // 0x594 PushV
	var_19_object = var_15_object; // 0x595 Mov
	func_2202(var_19_object); // 0x596 NEW_2
	
Label_1432:
	return 0; // 0x598 Return
}


task_5_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	var_16_bool = 0; // 0x59a PushV
	var_16_bool = 0; // 0x59b MovB
	var_17_bool = var_1_object == var_15_object; // 0x59c Eq
	if(var_17_bool == 0) goto Label_1441; // 0x59d JumpB
	var_18_object = var_2_object; // 0x59e PushT
	if(var_18_object == 0) goto Label_1441; // 0x59f JumpB
	var_16_bool = 1; // 0x5a0 MovB
	
Label_1441:
	if(var_16_bool == 0) goto Label_1446; // 0x5a1 JumpB
	var_2_object = 0; // 0x5a2 TMovB
	var_19_string = "head"; // 0x5a3 PushS
	UnlookAsync(var_19_string); // 0x5a4 Func
	
Label_1446:
	return 0; // 0x5a6 Return
}


task_5_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	RequestClearPath(var_15_object); // 0x620 Func
	return 0; // 0x622 Return
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	func_1405(var_15_object); // 0x62c NEW_2
	var_20_object = Obj(); // 0x62e PushV
	var_20_object = var_15_object; // 0x62f Mov
	func_2539(); // 0x630 NEW_2
	return 0; // 0x632 Return
}


task_6_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_bool = 0; // 0x64d PushV
	IsOverrideActive(var_17_bool); // 0x64e Func
	var_18_bool = var_17_bool == 0; // 0x650 Not
	if(var_18_bool == 0) goto Label_1622; // 0x651 JumpB
	var_19_object = Obj(); // 0x652 PushV
	var_19_object = var_15_object; // 0x653 Mov
	func_2487(var_19_object); // 0x654 NEW_2
	
Label_1622:
	return 2; // 0x656 Return
}


task_6_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float)
{
	return 0; // 0x6cd Return
}


task_6_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_string)
{
	return 0; // 0x6cf Return
}


task_6_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	return 0; // 0x6d1 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float)
{
	var_19_object = Obj(); var_20_int = 0; var_21_float = 0; // 0x9cd PushV
	var_19_object = var_15_object; // 0x9ce Mov
	var_20_int = var_16_int; // 0x9cf Mov
	var_21_float = var_17_float; // 0x9d0 Mov
	func_1988(var_19_object, var_20_int, var_21_float); // 0x9d1 NEW_2
	return 0; // 0x9d3 Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_int = 0; var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); // 0x9d5 PushV
	var_21_object = var_15_object; // 0x9d6 Mov
	var_22_int = var_16_int; // 0x9d7 Mov
	var_23_float = var_17_float; // 0x9d8 Mov
	var_24_cvector = var_19_cvector; // 0x9d9 Mov
	var_25_cvector = var_20_cvector; // 0x9da Mov
	func_2056(var_23_float, var_24_cvector, var_25_cvector); // 0x9db NEW_2
	return 0; // 0x9dd Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_string)
{
	var_17_float = 0; var_18_float = 0; // 0x9de PushV
	var_19_string = "health"; // 0x9df PushS
	var_20_bool = var_16_string == var_19_string; // 0x9e0 Eq
	if(var_20_bool == 0) goto Label_2538; // 0x9e1 JumpB
	var_21_string = "health"; // 0x9e2 PushS
	GetProperty(var_21_string, var_18_float); // 0x9e3 Func
	var_22_int = 0; // 0x9e5 PushI
	var_23_bool = var_18_float <= var_22_int; // 0x9e6 LE
	if(var_23_bool == 0) goto Label_2538; // 0x9e7 JumpB
	SignalDeath(var_15_object); // 0x9e8 Func
	
Label_2538:
	return 2; // 0x9ea Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_object = Obj(); // 0x9ec PushV
	var_17_object = var_15_object; // 0x9ed Mov
	func_1767(var_16_bool, var_17_object); // 0x9ee NEW_2
	if(var_16_bool == 0) goto Label_2550; // 0x9f0 JumpB
	var_20_bool = 0; var_21_object = Obj(); var_22_float = 0; // 0x9f1 PushV
	var_21_object = var_15_object; // 0x9f2 Mov
	var_22_float = -0.1; // 0x9f3 MovF
	func_2300(var_20_bool, var_21_object, var_22_float); // 0x9f4 NEW_2
	
Label_2550:
	var_58_object = Obj(); // 0x9f6 PushV
	var_58_object = var_15_object; // 0x9f7 Mov
	func_2500(var_58_object); // 0x9f8 NEW_2
	return 0; // 0x9fa Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	
Label_422:
	func_471(); // 0x1a7 NEW_2
	var_68_int = 3; // 0x1a9 PushI
	Sleep(var_68_int); // 0x1aa Func
	goto Label_422; // 0x1ac Jump
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 70.0; // 0x4 MovF
	func_2086(var_28_object, var_29_float); // 0x5 NEW_2
	var_73_bool = var_27_bool == 0; // 0x7 Not
	if(var_73_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_74_int = 0; // 0xd PushV
	func_2389(var_74_int); // 0xe NEW_2
	SetNPCName(var_74_int); // 0x10 ObjFunc
	var_75_int = 0; // 0x12 PushV
	func_2387(var_75_int); // 0x13 NEW_2
	SetNPCDescription(var_75_int); // 0x15 ObjFunc
	var_76_string = ""; // 0x17 PushV
	func_2391(var_76_string); // 0x18 NEW_2
	SetPhoto(var_76_string); // 0x1a ObjFunc
	var_77_string = ""; // 0x1c PushV
	func_2393(var_77_string); // 0x1d NEW_2
	SetPhoto2(var_77_string); // 0x1f ObjFunc
	var_78_int = 0; // 0x21 PushV
	func_2464(var_78_int); // 0x22 NEW_2
	SetPlayerName(var_78_int); // 0x24 ObjFunc
	var_25_int = -1; // 0x26 MovI
	IsOverrideActive(var_24_bool); // 0x27 Func
	var_86_bool = var_24_bool; // 0x29 Push
	if(var_86_bool == 0) goto Label_45; // 0x2a JumpB
	var_16_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_23_object); // 0x2d Func
	var_87_object = Obj(); var_88_object = Obj(); // 0x2f PushV
	var_87_object = var_17_object; // 0x30 Mov
	var_88_object = var_23_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_89_object, var_90_object, var_91_string, var_92_bool, var_87_object, var_88_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_26_bool); // 0x36 ObjFunc
	
Label_56:
	var_171_bool = var_26_bool == 0; // 0x38 Not
	if(var_171_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_172_object = Obj(); // 0x3f PushV
	var_172_object = var_17_object; // 0x40 Mov
	func_2154(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_2056(var_21_object, var_24_cvector, var_25_cvector)
{
	var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj(); // 0x808 PushV
	GetScene(var_28_object); // 0x809 Func
	var_30_string = "scripted"; // 0x80b PushS
	var_31_string = "blood_dir.xml"; // 0x80c PushS
	AddActorByType(var_29_object, var_30_string, var_28_object, var_24_cvector, var_25_cvector, var_31_string); // 0x80d Func
	var_32_object = Obj(); // 0x80f PushV
	var_32_object = var_21_object; // 0x810 Mov
	func_1944(var_32_object); // 0x811 NEW_2
	return 4; // 0x813 Return
}


func_1290(var_2_object, var_5_bool)
{
	var_366_float = 0; var_367_int = 0; var_368_float = 0; var_369_int = 0; // 0x50a PushV
	var_370_bool = var_2_object == 0; // 0x50b Not
	if(var_370_bool == 0) goto Label_1294; // 0x50c JumpB
	return 4; // 0x50d Return
	
Label_1294:
	var_371_bool = var_5_bool; // 0x50e PushT
	if(var_371_bool == 0) goto Label_1302; // 0x50f JumpB
	var_372_int = -1; // 0x510 PushI
	var_5_bool = var_5_bool + var_372_int; // 0x511 Add2
	var_373_int = 0; // 0x512 PushI
	var_374_bool = var_5_bool > var_373_int; // 0x513 GT
	if(var_374_bool == 0) goto Label_1302; // 0x514 JumpB
	return 4; // 0x515 Return
	
Label_1302:
	rand(var_368_float); // 0x516 Func
	var_375_float = 0; // 0x518 PushV
	func_1340(var_375_float); // 0x519 NEW_2
	var_376_bool = var_368_float < var_375_float; // 0x51b LT
	if(var_376_bool == 0) goto Label_1321; // 0x51c JumpB
	irand(var_369_int, var_368_float); // 0x51d Func
	var_377_int = 1; // 0x51f PushI
	var_369_int = var_369_int + var_377_int; // 0x520 Add2
	var_378_string = "attack"; // 0x521 PushS
	var_379_int = var_378_string + var_369_int; // 0x522 Add
	Speak(var_379_int); // 0x523 Func
	var_380_int = 0; // 0x525 PushV
	func_1338(var_380_int); // 0x526 NEW_2
	var_5_bool = var_380_int; // 0x527 TMov
	
Label_1321:
	return 4; // 0x529 Return
}


func_1549(var_0_object, var_1_object, var_23_int)
{
	var_24_int = 0; // 0x60e PushI
	var_25_bool = var_23_int != var_24_int; // 0x60f Neq
	if(var_25_bool == 0) goto Label_1554; // 0x610 JumpB
	return 0; // 0x611 Return
	
Label_1554:
	var_26_bool = 0; var_27_object = Obj(); // 0x612 PushV
	var_27_object = var_1_object; // 0x613 MovT
	func_1587(var_26_bool, var_27_object); // 0x614 NEW_2
	var_62_bool = var_26_bool == 0; // 0x616 Not
	if(var_62_bool == 0) goto Label_1561; // 0x617 JumpB
	var_0_object = 1; // 0x618 TMovB
	
Label_1561:
	var_63_int = 0; // 0x619 PushI
	KillTimer(var_63_int); // 0x61a Func
	Stop(); // 0x61c Func
	return 0; // 0x61e Return
}


func_1806(var_398_float, var_399_object, var_400_float, var_401_int)
{
	var_405_int = 0; var_406_string = ""; var_407_int = 0; var_408_float = 0; var_409_float = 0; var_410_float = 0; var_411_int = 0; var_412_string = ""; var_413_int = 0; var_414_float = 0; var_415_float = 0; var_416_float = 0; // 0x70e PushV
	var_417_bool = 0; var_418_object = Obj(); var_419_string = ""; // 0x70f PushV
	var_418_object = var_399_object; // 0x710 Mov
	var_419_string = "health"; // 0x711 MovS
	func_1772(var_417_bool, var_418_object, var_419_string); // 0x712 NEW_2
	var_420_bool = var_417_bool == 0; // 0x714 Not
	if(var_420_bool == 0) goto Label_1816; // 0x715 JumpB
	var_398_float = 0.0; // 0x716 MovF
	return 12; // 0x717 Return
	
Label_1816:
	var_421_bool = 0; var_422_object = Obj(); var_423_string = ""; // 0x718 PushV
	var_422_object = var_399_object; // 0x719 Mov
	var_423_string = "armor"; // 0x71a MovS
	func_1772(var_421_bool, var_422_object, var_423_string); // 0x71b NEW_2
	var_424_bool = var_421_bool == 0; // 0x71d Not
	if(var_424_bool == 0) goto Label_1825; // 0x71e JumpB
	var_411_int = 0; // 0x71f MovI
	goto Label_1828; // 0x720 Jump
	
Label_1828:
	var_425_string = "armor_"; // 0x724 PushS
	var_426_string = ""; var_427_int = 0; // 0x725 PushV
	var_427_int = var_401_int; // 0x726 Mov
	func_1746(var_426_string, var_427_int); // 0x727 NEW_2
	var_412_string = var_425_string + var_426_string; // 0x729 Add2
	var_432_bool = 0; var_433_object = Obj(); var_434_string = ""; // 0x72a PushV
	var_433_object = var_399_object; // 0x72b Mov
	var_434_string = var_412_string; // 0x72c Mov
	func_1772(var_432_bool, var_433_object, var_434_string); // 0x72d NEW_2
	var_435_bool = var_432_bool == 0; // 0x72f Not
	if(var_435_bool == 0) goto Label_1843; // 0x730 JumpB
	var_413_int = 0; // 0x731 MovI
	goto Label_1845; // 0x732 Jump
	
Label_1845:
	var_436_float = 0; var_437_float = 0; var_438_float = 0; // 0x735 PushV
	var_439_int = var_411_int + var_413_int; // 0x736 Add
	var_440_float = 100.0; // 0x737 PushF
	var_437_float = var_439_int / var_439_int; // 0x738 Div2
	var_438_float = 1; // 0x739 MovI
	func_2277(var_436_float, var_437_float, var_438_float); // 0x73a NEW_2
	var_414_float = var_436_float; // 0x73b Mov
	var_442_string = "health"; // 0x73d PushS
	GetProperty(var_442_string, var_415_float); // 0x73e ObjFunc
	var_443_int = 1; // 0x740 PushI
	var_444_int = var_443_int - var_414_float; // 0x741 Sub
	var_416_float = var_400_float * var_444_int; // 0x742 Mult2
	var_445_string = "health"; // 0x743 PushS
	var_446_float = 0; var_447_float = 0; var_448_float = 0; var_449_float = 0; // 0x744 PushV
	var_447_float = var_415_float - var_416_float; // 0x745 Sub2
	var_448_float = 0; // 0x746 MovI
	var_449_float = 1; // 0x747 MovI
	func_2284(var_446_float, var_447_float, var_448_float, var_449_float); // 0x748 NEW_2
	SetProperty(var_445_string, var_446_float); // 0x74a ObjFunc
	var_452_bool = 0; var_453_object = Obj(); // 0x74c PushV
	var_453_object = var_399_object; // 0x74d Mov
	func_1767(var_452_bool, var_453_object); // 0x74e NEW_2
	if(var_452_bool == 0) goto Label_1877; // 0x750 JumpB
	var_454_float = 0; // 0x751 PushV
	var_454_float = -var_416_float; // 0x752 Neg2
	func_2335(var_454_float); // 0x753 NEW_2
	
Label_1877:
	var_398_float = var_416_float; // 0x755 Mov
	return 12; // 0x756 Return
	
Label_1843:
	GetProperty(var_412_string, var_413_int); // 0x733 ObjFunc
	
Label_1825:
	var_458_string = "armor"; // 0x721 PushS
	GetProperty(var_458_string, var_411_int); // 0x722 ObjFunc
}


func_2070()
{
	var_233_cvector = CVector(0,0,0); var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_cvector = CVector(0,0,0); var_237_cvector = CVector(0,0,0); var_238_cvector = CVector(0,0,0); // 0x816 PushV
	GetPosition(var_236_cvector); // 0x817 ObjFunc
	GetPosition(var_237_cvector); // 0x819 Func
	var_238_cvector = var_236_cvector - var_237_cvector; // 0x81b Sub2
	var_239_float = GetByIndex(var_238_cvector, 0); // 0x81c PushE
	var_240_float = GetByIndex(var_238_cvector, 2); // 0x81d PushE
	RotateAsync(var_239_float, var_240_float); // 0x81e Func
	return 6; // 0x820 Return
}


func_2335(var_454_float)
{
	var_455_object = Obj(); var_456_object = Obj(); // 0x91f PushV
	CreateFloatVector(var_456_object); // 0x920 Func
	add(var_454_float); // 0x922 ObjFunc
	var_457_int = 15; // 0x924 PushI
	SendWorldWndMessage(var_457_int, var_456_object); // 0x925 Func
	return 2; // 0x927 Return
}


func_2081(var_29_bool)
{
	var_30_bool = 0; var_31_bool = 0; // 0x821 PushV
	IsLoaded(var_31_bool); // 0x822 Func
	var_29_bool = var_31_bool; // 0x824 Mov
	return 2; // 0x825 Return
}


func_1571(var_0_object)
{
	var_0_object = 1; // 0x623 TMovB
	var_19_int = 0; // 0x624 PushI
	KillTimer(var_19_int); // 0x625 Func
	Stop(); // 0x627 Func
	return 0; // 0x629 Return
}


func_2086(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x826 PushV
	GetPosition(var_40_cvector); // 0x827 ObjFunc
	GetEyesHeight(var_39_float); // 0x829 ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x82b PushE
	var_48_float = var_48_float + var_39_float; // 0x82c Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x82d PopE
	GetPosition(var_41_cvector); // 0x82e Func
	GetEyesHeight(var_39_float); // 0x830 Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x832 PushE
	var_49_float = var_49_float + var_39_float; // 0x833 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x834 PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x835 Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x836 PushE
	var_50_float = 0; // 0x837 MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x838 PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x839 Or
	var_52_float = sqrt(var_51_int); // 0x83a Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x83b Div2
	var_43_cvector = -var_42_cvector; // 0x83c Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x83d Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x83e PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x83f PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x840 Xor2
	func_2267(var_54_cvector, var_55_cvector); // 0x841 NEW_2
	var_62_int = 25; // 0x843 PushI
	var_63_float = var_54_cvector * var_62_int; // 0x844 Mult
	var_64_int = var_53_float + var_63_float; // 0x845 Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x846 PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x847 Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x848 Add2
	IsOverrideActive(var_46_bool); // 0x849 Func
	var_66_bool = var_46_bool; // 0x84b Push
	if(var_66_bool == 0) goto Label_2127; // 0x84c JumpB
	var_27_bool = 0; // 0x84d MovB
	return 18; // 0x84e Return
	
Label_2127:
	StopWorld(); // 0x84f Func
	CameraTransit(var_45_cvector, var_43_cvector); // 0x851 Func
	var_67_float = GetByIndex(var_44_cvector, 0); // 0x853 PushE
	var_68_float = GetByIndex(var_44_cvector, 2); // 0x854 PushE
	Rotate(var_67_float, var_68_float); // 0x855 Func
	var_69_bool = 0; // 0x857 PushV
	func_2395(var_69_bool); // 0x858 NEW_2
	if(var_69_bool == 0) goto Label_2140; // 0x85a JumpB
	goto Label_2148; // 0x85b Jump
	
Label_2148:
	CameraWaitForPlayFinish(); // 0x864 Func
	ResumeWorld(); // 0x866 Func
	var_27_bool = 1; // 0x868 MovB
	return 18; // 0x869 Return
	
Label_2140:
	var_70_string = "head"; // 0x85c PushS
	HasAnimationTrack(var_47_bool, var_70_string); // 0x85d Func
	var_71_bool = var_47_bool; // 0x85f Push
	if(var_71_bool == 0) goto Label_2148; // 0x860 JumpB
	var_72_string = "head"; // 0x861 PushS
	LookAsyncCamera(var_72_string); // 0x862 Func
}


func_550(var_58_bool)
{
	var_58_bool = 1; // 0x226 MovB
	return 0; // 0x227 Return
}


func_552()
{
	StopAnimation(); // 0x228 Func
	StopGroup0(); // 0x22a Func
	return 0; // 0x22c Return
}


func_2345(var_27_float)
{
	var_28_object = Obj(); var_29_object = Obj(); // 0x929 PushV
	CreateFloatVector(var_29_object); // 0x92a Func
	add(var_27_float); // 0x92c ObjFunc
	var_30_int = 16; // 0x92e PushI
	SendWorldWndMessage(var_30_int, var_29_object); // 0x92f Func
	return 2; // 0x931 Return
}


func_1322(var_0_object)
{
	var_122_object = Obj(); // 0x52a PushV
	var_122_object = var_0_object; // 0x52b MovT
	func_2367(var_122_object); // 0x52c NEW_2
	return 0; // 0x52e Return
}


func_557()
{
	var_19_object = Obj(); var_20_object = Obj(); // 0x22d PushV
	GetScene(var_20_object); // 0x22e Func
	var_21_object = Obj(); // 0x230 PushV
	func_2261(var_21_object); // 0x231 NEW_2
	RemoveStationaryActor(var_21_object); // 0x233 ObjFunc
	var_24_bool = 0; var_25_string = ""; var_26_int = 0; var_27_bool = 0; // 0x235 PushV
	var_25_string = "pt_b4q02_boy_path"; // 0x236 MovS
	var_26_int = 0; // 0x237 MovI
	var_27_bool = 1; // 0x238 MovB
	func_593(var_24_bool, var_25_string, var_26_int, var_27_bool); // 0x239 NEW_2
	return 2; // 0x23b Return
}


func_1327(var_459_int)
{
	var_459_int = 0; // 0x52f MovI
	return 0; // 0x530 Return
}


func_1329()
{
	var_255_string = ""; // 0x531 PushV
	var_255_string = "attack_stay"; // 0x532 MovS
	func_2220(var_255_string); // 0x533 NEW_2
	return 0; // 0x535 Return
}


func_1587(var_26_bool, var_27_object)
{
	var_28_bool = 0; var_29_object = Obj(); // 0x634 PushV
	var_29_object = var_27_object; // 0x635 Mov
	func_1920(var_28_bool, var_29_object); // 0x636 NEW_2
	var_26_bool = var_28_bool; // 0x637 Mov
	return 0; // 0x639 Return
}


func_2355(var_23_bool, var_24_string, var_25_string)
{
	var_26_object = Obj(); var_27_object = Obj(); // 0x933 PushV
	FindActor(var_27_object, var_24_string); // 0x934 Func
	var_28_bool = var_27_object == 0; // 0x936 NullEq
	if(var_28_bool == 0) goto Label_2362; // 0x937 JumpB
	var_23_bool = 0; // 0x938 MovB
	return 2; // 0x939 Return
	
Label_2362:
	Trigger(var_27_object, var_25_string); // 0x93a Func
	var_23_bool = 1; // 0x93c MovB
	return 2; // 0x93d Return
}


func_1334()
{
	return 0; // 0x537 Return
}


func_1336(var_484_bool)
{
	var_484_bool = 1; // 0x538 MovB
	return 0; // 0x539 Return
}


func_1594(var_198_string)
{
	var_198_string = "walk"; // 0x63a MovS
	return 0; // 0x63b Return
}


func_1338(var_380_int)
{
	var_380_int = 1; // 0x53a MovI
	return 0; // 0x53b Return
}


func_1596(var_199_string)
{
	var_199_string = "run"; // 0x63c MovS
	return 0; // 0x63d Return
}


func_1340(var_375_float)
{
	var_375_float = 0.5; // 0x53c MovF
	return 0; // 0x53d Return
}


func_1598(var_59_object)
{
	EventDisable(0); // 0x63f EventDisable
	var_60_object = Obj(); // 0x640 PushV
	var_60_object = var_59_object; // 0x641 Mov
	func_1623(var_60_object); // 0x642 NEW_2
	var_140_int = 50; // 0x644 PushI
	var_141_int = 40; // 0x645 PushI
	SetRTEnvelope(var_140_int, var_141_int); // 0x646 Func
	EventEnable(0); // 0x648 EventEnable
	
Label_1609:
	Hold(); // 0x649 Func
	goto Label_1609; // 0x64b Jump
}


func_1342(var_2_object, var_129_bool, var_130_object, var_131_float, var_132_float, var_133_bool, var_134_bool)
{
	var_138_bool = 0; var_139_bool = 0; var_140_bool = 0; var_141_bool = 0; // 0x53e PushV
	var_142_object = Obj(); // 0x53f PushV
	var_142_object = var_130_object; // 0x540 Mov
	func_2367(var_142_object); // 0x541 NEW_2
	var_143_int = 1; // 0x543 PushI
	var_144_int = 5; // 0x544 PushI
	SetTimer(var_143_int, var_144_int); // 0x545 Func
	CanSee(var_140_bool, var_130_object); // 0x547 Func
	var_145_bool = var_140_bool; // 0x549 Push
	if(var_145_bool == 0) goto Label_1361; // 0x54a JumpB
	var_2_object = 1; // 0x54b TMovB
	var_146_object = Obj(); // 0x54c PushV
	var_146_object = var_130_object; // 0x54d Mov
	func_2202(var_146_object); // 0x54e NEW_2
	goto Label_1362; // 0x550 Jump
	
Label_1362:
	var_153_bool = 0; var_154_object = Obj(); // 0x552 PushV
	var_154_object = var_130_object; // 0x553 Mov
	func_1767(var_153_bool, var_154_object); // 0x554 NEW_2
	if(var_153_bool == 0) goto Label_1372; // 0x556 JumpB
	var_157_object = Obj(); // 0x557 PushV
	func_2261(var_157_object); // 0x558 NEW_2
	SendPlayerEnemy(var_130_object, var_157_object); // 0x55a Func
	
Label_1372:
	var_158_bool = 0; var_159_object = Obj(); var_160_float = 0; var_161_float = 0; var_162_bool = 0; var_163_bool = 0; // 0x55c PushV
	var_159_object = var_130_object; // 0x55d Mov
	var_160_float = var_131_float; // 0x55e Mov
	var_161_float = var_132_float; // 0x55f Mov
	var_162_bool = var_133_bool; // 0x560 Mov
	var_163_bool = var_134_bool; // 0x561 Mov
	func_1447(var_140_bool, var_141_bool, var_158_bool, var_159_object, var_160_float, var_161_float, var_162_bool, var_163_bool); // 0x562 NEW_2
	var_141_bool = var_158_bool; // 0x563 Mov
	var_209_object = var_2_object; // 0x565 PushT
	if(var_209_object == 0) goto Label_1386; // 0x566 JumpB
	var_210_string = "head"; // 0x567 PushS
	UnlookAsync(var_210_string); // 0x568 Func
	
Label_1386:
	var_211_int = 1; // 0x56a PushI
	KillTimer(var_211_int); // 0x56b Func
	var_129_bool = var_141_bool; // 0x56d Mov
	return 4; // 0x56e Return
	
Label_1361:
	var_2_object = 0; // 0x551 TMovB
}


func_2367(var_18_object)
{
	var_19_bool = 0; var_20_bool = 0; // 0x93f PushV
	IsPlayerActor(var_18_object, var_20_bool); // 0x940 Func
	var_21_bool = var_20_bool; // 0x942 Push
	if(var_21_bool == 0) goto Label_2375; // 0x943 JumpB
	var_22_string = "attack"; // 0x944 PushS
	PlayGlobalMusic(var_22_string); // 0x945 Func
	
Label_2375:
	return 2; // 0x947 Return
}


func_2376()
{
	var_359_object = Obj(); var_360_object = Obj(); // 0x948 PushV
	GetScene(var_360_object); // 0x949 Func
	var_361_string = "battle"; // 0x94b PushS
	var_362_object = Obj(); // 0x94c PushV
	func_2261(var_362_object); // 0x94d NEW_2
	BroadcastMessage(var_361_string, var_362_object, var_360_object); // 0x94f Func
	return 2; // 0x951 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_87_object, var_88_object)
{
	var_0_object = var_88_object; // 0x4b TMov
	var_1_object = var_87_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_93_int = 1; // 0x4e PushI
	if(var_93_int == 0) goto Label_157; // 0x4f JumpB
	var_94_bool = 0; var_95_object = Obj(); // 0x50 PushV
	var_95_object = var_1_object; // 0x51 MovT
	func_2440(var_95_object); // 0x52 NEW_2
	if(var_94_bool == 0) goto Label_105; // 0x54 JumpB
	var_102_object = Obj(); var_103_object = Obj(); // 0x55 PushV
	var_102_object = var_1_object; // 0x56 MovT
	var_103_object = var_0_object; // 0x57 MovT
	func_2421(); // 0x58 NEW_2
	var_106_string = ""; // 0x5a PushV
	var_106_string = "Neutral"; // 0x5b MovS
	func_187(var_88_object, var_106_string); // 0x5c NEW_2
	var_123_int = 518563; // 0x5e PushI
	SetMessage(var_123_int); // 0x5f TObjFunc
	ClearReplies(); // 0x61 TObjFunc
	var_124_int = 518962; // 0x63 PushI
	var_125_int = 20075; // 0x64 PushI
	var_126_int = 20074; // 0x65 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x66 TObjFunc
	goto Label_157; // 0x68 Jump
	
Label_157:
	var_127_bool = 0; // 0x9d PushV
	func_2395(var_127_bool); // 0x9e NEW_2
	if(var_127_bool == 0) goto Label_172; // 0xa0 JumpB
	
Label_161:
	lshWaitForAnimEnd(); // 0xa1 Func
	var_128_string = var_3_string; // 0xa3 PushT
	if(var_128_string == 0) goto Label_166; // 0xa4 JumpB
	goto Label_171; // 0xa5 Jump
	
Label_171:
	goto Label_186; // 0xab Jump
	
Label_186:
	return 0; // 0xba Return
	
Label_166:
	var_129_string = ""; // 0xa6 PushV
	var_129_string = var_2_object; // 0xa7 MovT
	func_2171(var_129_string); // 0xa8 NEW_2
	goto Label_161; // 0xaa Jump
	
Label_172:
	var_140_string = "all"; // 0xac PushS
	var_141_string = "idle"; // 0xad PushS
	PlayAnimation(var_140_string, var_141_string); // 0xae Func
	
Label_176:
	WaitForAnimEnd(); // 0xb0 Func
	var_142_string = var_3_string; // 0xb2 PushT
	if(var_142_string == 0) goto Label_181; // 0xb3 JumpB
	goto Label_186; // 0xb4 Jump
	
Label_181:
	var_143_string = "all"; // 0xb5 PushS
	var_144_string = "idle"; // 0xb6 PushS
	PlayAnimation(var_143_string, var_144_string); // 0xb7 Func
	goto Label_176; // 0xb9 Jump
	
Label_105:
	var_145_bool = 0; var_146_object = Obj(); // 0x69 PushV
	var_146_object = var_1_object; // 0x6a MovT
	func_2452(var_146_object); // 0x6b NEW_2
	if(var_145_bool == 0) goto Label_135; // 0x6d JumpB
	var_151_object = Obj(); var_152_object = Obj(); // 0x6e PushV
	var_151_object = var_1_object; // 0x6f MovT
	var_152_object = var_0_object; // 0x70 MovT
	func_2434(); // 0x71 NEW_2
	var_155_string = ""; // 0x73 PushV
	var_155_string = "Neutral"; // 0x74 MovS
	func_187(var_88_object, var_155_string); // 0x75 NEW_2
	var_156_int = 518565; // 0x77 PushI
	SetMessage(var_156_int); // 0x78 TObjFunc
	ClearReplies(); // 0x7a TObjFunc
	var_157_int = 518566; // 0x7c PushI
	var_158_int = 20046; // 0x7d PushI
	var_159_int = 19676; // 0x7e PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x7f TObjFunc
	var_160_int = 518934; // 0x81 PushI
	var_161_int = -1; // 0x82 PushI
	var_162_int = 20045; // 0x83 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x84 TObjFunc
	goto Label_157; // 0x86 Jump
	
Label_135:
	var_163_string = ""; // 0x87 PushV
	var_163_string = "Neutral"; // 0x88 MovS
	func_187(var_88_object, var_163_string); // 0x89 NEW_2
	var_164_int = 518569; // 0x8b PushI
	SetMessage(var_164_int); // 0x8c TObjFunc
	ClearReplies(); // 0x8e TObjFunc
	var_165_int = 518570; // 0x90 PushI
	var_166_int = -1; // 0x91 PushI
	var_167_int = 19680; // 0x92 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x93 TObjFunc
	var_168_int = 518940; // 0x95 PushI
	var_169_int = -1; // 0x96 PushI
	var_170_int = 20051; // 0x97 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x98 TObjFunc
	goto Label_157; // 0x9a Jump
}


func_593(var_24_bool, var_25_string, var_26_int, var_27_bool)
{
	var_28_object = Obj(); var_29_cvector = CVector(0,0,0); var_30_bool = 0; var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; var_35_object = Obj(); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; // 0x251 PushV
	GetScene(var_35_object); // 0x252 Func
	
Label_596:
	var_42_int = 1; // 0x254 PushI
	var_43_int = var_26_int + var_42_int; // 0x255 Add
	var_44_int = var_25_string + var_43_int; // 0x256 Add
	GetLocator(var_44_int, var_38_bool, var_39_cvector, var_40_cvector); // 0x257 ObjFunc
	var_45_bool = var_38_bool == 0; // 0x259 Not
	if(var_45_bool == 0) goto Label_604; // 0x25a JumpB
	goto Label_623; // 0x25b Jump
	
Label_623:
	WaitForAnimEnd(var_37_bool); // 0x26f Func
	var_46_bool = var_37_bool == 0; // 0x271 Not
	if(var_46_bool == 0) goto Label_631; // 0x272 JumpB
	var_47_object = var_0_object; // 0x273 PushT
	if(var_47_object == 0) goto Label_631; // 0x274 JumpB
	var_24_bool = 0; // 0x275 MovB
	return 14; // 0x276 Return
	
Label_631:
	var_48_float = GetByIndex(var_36_cvector, 0); // 0x277 PushE
	var_49_float = GetByIndex(var_36_cvector, 2); // 0x278 PushE
	Rotate(var_48_float, var_49_float, var_41_bool); // 0x279 Func
	var_50_bool = var_41_bool; // 0x27b Push
	if(var_50_bool == 0) goto Label_638; // 0x27c JumpB
	goto Label_643; // 0x27d Jump
	
Label_643:
	var_24_bool = 1; // 0x283 MovB
	return 14; // 0x284 Return
	
Label_638:
	var_51_object = var_0_object; // 0x27e PushT
	if(var_51_object == 0) goto Label_642; // 0x27f JumpB
	var_24_bool = 0; // 0x280 MovB
	return 14; // 0x281 Return
	
Label_642:
	goto Label_631; // 0x282 Jump
	
Label_604:
	var_36_cvector = var_40_cvector; // 0x25c Mov
	MovePoint(var_39_cvector, var_27_bool, var_37_bool); // 0x25d Func
	var_52_bool = var_37_bool; // 0x25f Push
	if(var_52_bool == 0) goto Label_618; // 0x260 JumpB
	var_53_int = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x261 PushV
	var_53_int = var_26_int; // 0x262 Mov
	var_54_cvector = var_39_cvector; // 0x263 Mov
	var_55_cvector = var_40_cvector; // 0x264 Mov
	func_652(); // 0x265 NEW_2
	var_56_int = 1; // 0x267 PushI
	var_26_int = var_26_int + var_56_int; // 0x268 Add2
	goto Label_622; // 0x269 Jump
	
Label_622:
	goto Label_596; // 0x26e Jump
	
Label_618:
	var_57_object = var_0_object; // 0x26a PushT
	if(var_57_object == 0) goto Label_622; // 0x26b JumpB
	var_24_bool = 0; // 0x26c MovB
	return 14; // 0x26d Return
}


func_2387(var_75_int)
{
	var_75_int = 515558; // 0x953 MovI
	return 0; // 0x954 Return
}


func_2389(var_74_int)
{
	var_74_int = 503343; // 0x955 MovI
	return 0; // 0x956 Return
}


func_1623(var_60_object)
{
	var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_string = ""; var_66_object = Obj(); var_67_bool = 0; var_68_bool = 0; var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_string = ""; var_76_object = Obj(); var_77_bool = 0; var_78_bool = 0; var_79_float = 0; var_80_cvector = CVector(0,0,0); // 0x657 PushV
	var_81_bool = var_60_object == 0; // 0x658 NullEq
	if(var_81_bool == 0) goto Label_1631; // 0x659 JumpB
	var_82_string = ""; // 0x65a PushV
	var_82_string = "fdie"; // 0x65b MovS
	func_1714(var_82_string); // 0x65c NEW_2
	goto Label_1713; // 0x65e Jump
	
Label_1713:
	return 20; // 0x6b1 Return
	
Label_1631:
	GetPosition(var_71_cvector); // 0x65f ObjFunc
	GetPosition(var_72_cvector); // 0x661 Func
	GetDirection(var_73_cvector); // 0x663 Func
	var_74_cvector = var_72_cvector - var_71_cvector; // 0x665 Sub2
	var_114_float = GetByIndex(var_74_cvector, 0); // 0x666 PushE
	var_115_float = GetByIndex(var_73_cvector, 0); // 0x667 PushE
	var_116_float = var_114_float * var_115_float; // 0x668 Mult
	var_117_float = GetByIndex(var_74_cvector, 2); // 0x669 PushE
	var_118_float = GetByIndex(var_73_cvector, 2); // 0x66a PushE
	var_119_float = var_117_float * var_118_float; // 0x66b Mult
	var_120_int = var_116_float + var_119_float; // 0x66c Add
	var_121_int = 0; // 0x66d PushI
	var_122_bool = var_120_int >= var_121_int; // 0x66e GE
	if(var_122_bool == 0) goto Label_1650; // 0x66f JumpB
	var_75_string = "fdie"; // 0x670 MovS
	goto Label_1651; // 0x671 Jump
	
Label_1651:
	RemoveRTEnvelope(); // 0x673 Func
	SetDeathState(); // 0x675 Func
	Stop(); // 0x677 Func
	StopAsync(); // 0x679 Func
	var_76_object = var_60_object; // 0x67b Mov
	var_123_string = "GetScriptProperty"; // 0x67c PushS
	var_124_int = 2; // 0x67d PushI
	var_125_bool = IsFuncExist(var_60_object, var_123_string, var_124_int); // 0x67e FuncExist
	if(var_125_bool == 0) goto Label_1675; // 0x67f JumpB
	var_126_string = "Owner"; // 0x680 PushS
	HasScriptProperty(var_77_bool, var_126_string); // 0x681 ObjFunc
	var_127_bool = var_77_bool; // 0x683 Push
	if(var_127_bool == 0) goto Label_1675; // 0x684 JumpB
	var_128_string = "Owner"; // 0x685 PushS
	GetScriptProperty(var_76_object, var_128_string); // 0x686 ObjFunc
	var_129_bool = var_76_object == 0; // 0x688 NullEq
	if(var_129_bool == 0) goto Label_1675; // 0x689 JumpB
	var_76_object = var_60_object; // 0x68a Mov
	
Label_1675:
	var_130_string = "@GetEyesHeight"; // 0x68b PushS
	var_131_int = 1; // 0x68c PushI
	var_132_bool = IsFuncExist(var_76_object, var_130_string, var_131_int); // 0x68d FuncExist
	if(var_132_bool == 0) goto Label_1690; // 0x68e JumpB
	GetEyesHeight(var_79_float); // 0x68f ObjFunc
	var_80_cvector = CVector(0.0, 0.0, 0.0); // 0x691 MovV
	var_133_float = GetByIndex(var_80_cvector, 1); // 0x692 PushE
	var_133_float = var_79_float; // 0x693 Mov
	SetByIndex(var_80_cvector, 1) = var_133_float; // 0x694 PopE
	var_134_string = "head"; // 0x695 PushS
	LookAsync(var_60_object, var_134_string, var_80_cvector); // 0x696 Func
	var_78_bool = 1; // 0x698 MovB
	goto Label_1691; // 0x699 Jump
	
Label_1691:
	var_135_string = ""; // 0x69b PushV
	var_135_string = var_75_string; // 0x69c Mov
	func_2220(var_135_string); // 0x69d NEW_2
	var_136_string = "all"; // 0x69f PushS
	PlayAnimation(var_136_string, var_75_string); // 0x6a0 Func
	WaitForAnimEnd(); // 0x6a2 Func
	var_137_bool = var_78_bool; // 0x6a4 Push
	if(var_137_bool == 0) goto Label_1707; // 0x6a5 JumpB
	StopAsync(); // 0x6a6 Func
	var_138_string = "head"; // 0x6a8 PushS
	UnlookAsync(var_138_string); // 0x6a9 Func
	
Label_1707:
	var_139_string = "all"; // 0x6ab PushS
	LockAnimationEnd(var_139_string, var_75_string); // 0x6ac Func
	RemoveEnvelope(); // 0x6ae Func
	var_76_object = 0; // 0x6b0 SetNull
	
Label_1690:
	var_78_bool = 0; // 0x69a MovB
	
Label_1650:
	var_75_string = "bdie"; // 0x672 MovS
}


func_2391(var_76_string)
{
	var_76_string = "ui/NPC_Citizen3.png"; // 0x957 MovS
	return 0; // 0x958 Return
}


func_1879(var_43_bool)
{
	var_45_bool = 0; var_46_bool = 0; // 0x757 PushV
	IsDead(var_46_bool); // 0x758 ObjFunc
	var_43_bool = var_46_bool; // 0x75a Mov
	return 2; // 0x75b Return
}


func_2393(var_77_string)
{
	var_77_string = "ui/NPC_Citizen3_b.png"; // 0x959 MovS
	return 0; // 0x95a Return
}


func_2395(var_69_bool)
{
	var_69_bool = 0; // 0x95b MovB
	return 0; // 0x95c Return
}


func_1884(var_32_bool, var_33_object)
{
	var_34_object = Obj(); var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj(); // 0x75c PushV
	var_38_bool = var_33_object == 0; // 0x75d NullEq
	if(var_38_bool == 0) goto Label_1889; // 0x75e JumpB
	var_32_bool = 0; // 0x75f MovB
	return 4; // 0x760 Return
	
Label_1889:
	var_39_bool = 0; // 0x761 PushV
	var_39_bool = 0; // 0x762 MovB
	var_40_string = "IsDead"; // 0x763 PushS
	var_41_int = 1; // 0x764 PushI
	var_42_bool = IsFuncExist(var_33_object, var_40_string, var_41_int); // 0x765 FuncExist
	if(var_42_bool == 0) goto Label_1901; // 0x766 JumpB
	var_43_bool = 0; var_44_object = Obj(); // 0x767 PushV
	var_44_object = var_33_object; // 0x768 Mov
	func_1879(var_44_object); // 0x769 NEW_2
	if(var_43_bool == 0) goto Label_1901; // 0x76b JumpB
	var_39_bool = 1; // 0x76c MovB
	
Label_1901:
	if(var_39_bool == 0) goto Label_1904; // 0x76d JumpB
	var_32_bool = 0; // 0x76e MovB
	return 4; // 0x76f Return
	
Label_1904:
	GetScene(var_36_object); // 0x770 Func
	var_47_bool = var_36_object == 0; // 0x772 NullEq
	if(var_47_bool == 0) goto Label_1910; // 0x773 JumpB
	var_32_bool = 0; // 0x774 MovB
	return 4; // 0x775 Return
	
Label_1910:
	GetScene(var_37_object); // 0x776 ObjFunc
	var_48_bool = var_36_object != var_37_object; // 0x778 Neq
	if(var_48_bool == 0) goto Label_1916; // 0x779 JumpB
	var_32_bool = 0; // 0x77a MovB
	return 4; // 0x77b Return
	
Label_1916:
	var_32_bool = 1; // 0x77c MovB
	return 4; // 0x77d Return
}


func_2397(var_39_string, var_40_int)
{
	var_41_string = ""; var_42_string = ""; // 0x95d PushV
	var_42_string = "idle"; // 0x95e MovS
	var_43_int = var_40_int; // 0x95f Push
	if(var_43_int == 0) goto Label_2402; // 0x960 JumpB
	var_42_string = var_42_string + var_40_int; // 0x961 Add2
	
Label_2402:
	var_39_string = var_42_string; // 0x962 Mov
	return 2; // 0x963 Return
}


func_1120(var_485_bool, var_486_float)
{
	var_487_float = 0; var_488_bool = 0; var_489_float = 0; var_490_bool = 0; // 0x460 PushV
	rand(var_489_float); // 0x461 Func
	var_491_bool = var_489_float < var_486_float; // 0x463 LT
	if(var_491_bool == 0) goto Label_1140; // 0x464 JumpB
	
Label_1125:
	IsAnimationPlaying(var_490_bool); // 0x465 Func
	var_492_bool = var_490_bool == 0; // 0x467 Not
	if(var_492_bool == 0) goto Label_1130; // 0x468 JumpB
	goto Label_1139; // 0x469 Jump
	
Label_1139:
	goto Label_1145; // 0x473 Jump
	
Label_1145:
	var_485_bool = 0; // 0x479 MovB
	return 4; // 0x47a Return
	
Label_1130:
	var_493_bool = 0; // 0x46a PushV
	func_1218(var_493_bool); // 0x46b NEW_2
	if(var_493_bool == 0) goto Label_1136; // 0x46d JumpB
	var_485_bool = 1; // 0x46e MovB
	return 4; // 0x46f Return
	
Label_1136:
	sync(); // 0x470 Func
	goto Label_1125; // 0x472 Jump
	
Label_1140:
	WaitForAnimEnd(); // 0x474 Func
	func_1322(var_490_bool); // 0x477 NEW_2
}


func_2404(var_33_int)
{
	var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_bool = 0; // 0x964 PushV
	var_36_int = 0; // 0x965 MovI
	
Label_2406:
	var_38_string = "all"; // 0x966 PushS
	var_39_string = ""; var_40_int = 0; // 0x967 PushV
	var_40_int = var_36_int; // 0x968 Mov
	func_2397(var_39_string, var_40_int); // 0x969 NEW_2
	HasAnimation(var_37_bool, var_38_string, var_39_string); // 0x96b Func
	var_44_bool = var_37_bool == 0; // 0x96d Not
	if(var_44_bool == 0) goto Label_2416; // 0x96e JumpB
	goto Label_2419; // 0x96f Jump
	
Label_2419:
	var_33_int = var_36_int; // 0x973 Mov
	return 4; // 0x974 Return
	
Label_2416:
	var_45_int = 1; // 0x970 PushI
	var_36_int = var_36_int + var_45_int; // 0x971 Add2
	goto Label_2406; // 0x972 Jump
}


func_2154()
{
	var_173_bool = 0; var_174_bool = 0; // 0x86a PushV
	CameraSwitchToNormal(); // 0x86b Func
	var_175_bool = 0; // 0x86d PushV
	func_2395(var_175_bool); // 0x86e NEW_2
	if(var_175_bool == 0) goto Label_2162; // 0x870 JumpB
	goto Label_2170; // 0x871 Jump
	
Label_2170:
	return 2; // 0x87a Return
	
Label_2162:
	var_176_string = "head"; // 0x872 PushS
	HasAnimationTrack(var_174_bool, var_176_string); // 0x873 Func
	var_177_bool = var_174_bool; // 0x875 Push
	if(var_177_bool == 0) goto Label_2170; // 0x876 JumpB
	var_178_string = "head"; // 0x877 PushS
	UnlookAsync(var_178_string); // 0x878 Func
}


func_2421()
{
	var_104_string = "oob4boy1"; // 0x976 PushS
	var_105_int = 1; // 0x977 PushI
	SetVariable(var_104_string, var_105_int); // 0x978 Func
	return 0; // 0x97a Return
}


func_2171(var_129_string)
{
	var_130_bool = 0; var_131_float = 0; var_132_float = 0; var_133_bool = 0; var_134_float = 0; var_135_float = 0; // 0x87b PushV
	lshHasAnimation(var_133_bool, var_129_string); // 0x87c Func
	var_136_bool = var_133_bool; // 0x87e Push
	if(var_136_bool == 0) goto Label_2182; // 0x87f JumpB
	lshGetAnimTimes(var_129_string, var_134_float, var_135_float); // 0x880 Func
	var_137_bool = 0; // 0x882 PushB
	lshPlayAnimation(var_134_float, var_135_float, var_137_bool); // 0x883 Func
	goto Label_2186; // 0x885 Jump
	
Label_2186:
	return 6; // 0x88a Return
	
Label_2182:
	var_138_string = "Can't find lsh animation : "; // 0x886 PushS
	var_139_int = var_138_string + var_129_string; // 0x887 Add
	Trace(var_139_int); // 0x888 Func
}


func_1147(var_0_object, var_286_bool, var_287_float)
{
	var_288_bool = 0; var_289_cvector = CVector(0,0,0); var_290_cvector = CVector(0,0,0); var_291_cvector = CVector(0,0,0); var_292_float = 0; var_293_bool = 0; var_294_cvector = CVector(0,0,0); var_295_cvector = CVector(0,0,0); var_296_cvector = CVector(0,0,0); var_297_float = 0; // 0x47b PushV
	
Label_1148:
	IsAnimationPlaying(var_293_bool); // 0x47c Func
	var_298_bool = var_293_bool == 0; // 0x47e Not
	if(var_298_bool == 0) goto Label_1153; // 0x47f JumpB
	goto Label_1185; // 0x480 Jump
	
Label_1185:
	func_1322(var_297_float); // 0x4a2 NEW_2
	var_286_bool = 0; // 0x4a4 MovB
	return 10; // 0x4a5 Return
	
Label_1153:
	var_299_bool = 0; // 0x481 PushV
	func_1218(var_299_bool); // 0x482 NEW_2
	if(var_299_bool == 0) goto Label_1159; // 0x484 JumpB
	var_286_bool = 1; // 0x485 MovB
	return 10; // 0x486 Return
	
Label_1159:
	var_342_bool = 0; var_343_object = Obj(); // 0x487 PushV
	var_343_object = var_0_object; // 0x488 MovT
	func_1920(var_342_bool, var_343_object); // 0x489 NEW_2
	var_344_bool = var_342_bool == 0; // 0x48b Not
	if(var_344_bool == 0) goto Label_1167; // 0x48c JumpB
	var_286_bool = 0; // 0x48d MovB
	return 10; // 0x48e Return
	
Label_1167:
	GetPFPosition(var_294_cvector); // 0x48f TObjFunc
	GetPFPosition(var_295_cvector); // 0x491 Func
	var_296_cvector = var_294_cvector - var_295_cvector; // 0x493 Sub2
	var_297_float = var_296_cvector | var_296_cvector; // 0x494 Or2
	var_345_float = var_287_float * var_287_float; // 0x495 Mult
	var_346_bool = var_297_float < var_345_float; // 0x496 LT
	if(var_346_bool == 0) goto Label_1182; // 0x497 JumpB
	var_347_bool = 0; var_348_float = 0; // 0x498 PushV
	var_348_float = var_287_float; // 0x499 Mov
	func_983(var_297_float, var_347_bool, var_348_float); // 0x49a NEW_2
	var_286_bool = 1; // 0x49c MovB
	return 10; // 0x49d Return
	
Label_1182:
	sync(); // 0x49e Func
	goto Label_1148; // 0x4a0 Jump
}


func_2427()
{
	var_23_bool = 0; var_24_string = ""; var_25_string = ""; // 0x97c PushV
	var_24_string = "quest_b4_02"; // 0x97d MovS
	var_25_string = "boy_run"; // 0x97e MovS
	func_2355(var_23_bool, var_24_string, var_25_string); // 0x97f NEW_2
	return 0; // 0x981 Return
}


func_1405(var_2_object)
{
	var_16_int = 1; // 0x57d PushI
	KillTimer(var_16_int); // 0x57e Func
	var_17_object = var_2_object; // 0x580 PushT
	if(var_17_object == 0) goto Label_1414; // 0x581 JumpB
	var_2_object = 0; // 0x582 TMovB
	var_18_string = "head"; // 0x583 PushS
	UnlookAsync(var_18_string); // 0x584 Func
	
Label_1414:
	func_1571(var_15_object); // 0x587 NEW_2
	return 0; // 0x589 Return
}


func_1920(var_28_bool, var_29_object)
{
	var_30_int = 0; var_31_int = 0; // 0x780 PushV
	var_32_bool = 0; var_33_object = Obj(); // 0x781 PushV
	var_33_object = var_29_object; // 0x782 Mov
	func_1884(var_32_bool, var_33_object); // 0x783 NEW_2
	var_49_bool = var_32_bool == 0; // 0x785 Not
	if(var_49_bool == 0) goto Label_1929; // 0x786 JumpB
	var_28_bool = 0; // 0x787 MovB
	return 2; // 0x788 Return
	
Label_1929:
	var_50_bool = 0; var_51_object = Obj(); var_52_string = ""; // 0x789 PushV
	var_51_object = var_29_object; // 0x78a Mov
	var_52_string = "noaccess"; // 0x78b MovS
	func_1772(var_50_bool, var_51_object, var_52_string); // 0x78c NEW_2
	var_59_bool = var_50_bool == 0; // 0x78e Not
	if(var_59_bool == 0) goto Label_1938; // 0x78f JumpB
	var_28_bool = 1; // 0x790 MovB
	return 2; // 0x791 Return
	
Label_1938:
	var_60_string = "noaccess"; // 0x792 PushS
	GetProperty(var_60_string, var_31_int); // 0x793 ObjFunc
	var_61_int = 0; // 0x795 PushI
	var_28_bool = var_31_int == var_61_int; // 0x796 Eq2
	return 2; // 0x797 Return
}


func_2434()
{
	var_153_string = "oob4boy2"; // 0x983 PushS
	var_154_int = 1; // 0x984 PushI
	SetVariable(var_153_string, var_154_int); // 0x985 Func
	return 0; // 0x987 Return
}


func_646(var_0_object)
{
	Stop(); // 0x286 Func
	StopAnimation(); // 0x288 Func
	var_0_object = 1; // 0x28a TMovB
	return 0; // 0x28b Return
}


func_2440(var_94_bool)
{
	var_96_int = 0; var_97_string = ""; // 0x989 PushV
	var_97_string = "oob4boy1"; // 0x98a MovS
	func_2295(var_96_int, var_97_string); // 0x98b NEW_2
	var_100_int = 0; // 0x98d PushI
	var_101_bool = var_96_int == var_100_int; // 0x98e Eq
	if(var_101_bool == 0) goto Label_2450; // 0x98f JumpB
	var_94_bool = 1; // 0x990 MovB
	return 0; // 0x991 Return
	
Label_2450:
	var_94_bool = 0; // 0x992 MovB
	return 0; // 0x993 Return
}


func_2187(var_110_string, var_111_bool)
{
	var_114_bool = 0; var_115_float = 0; var_116_float = 0; var_117_bool = 0; var_118_float = 0; var_119_float = 0; // 0x88b PushV
	lshHasAnimation(var_117_bool, var_110_string); // 0x88c Func
	var_120_bool = var_117_bool; // 0x88e Push
	if(var_120_bool == 0) goto Label_2197; // 0x88f JumpB
	lshGetAnimTimes(var_110_string, var_118_float, var_119_float); // 0x890 Func
	lshPlayAnimation(var_118_float, var_119_float, var_111_bool); // 0x892 Func
	goto Label_2201; // 0x894 Jump
	
Label_2201:
	return 6; // 0x899 Return
	
Label_2197:
	var_121_string = "Can't find lsh animation : "; // 0x895 PushS
	var_122_int = var_121_string + var_110_string; // 0x896 Add
	Trace(var_122_int); // 0x897 Func
}


func_652()
{
	return 0; // 0x28d Return
}


func_909(var_1_object, var_2_object, var_4_bool)
{
	var_53_bool = 0; var_54_bool = 0; var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; var_58_cvector = CVector(0,0,0); // 0x38d PushV
	var_1_object = 0; // 0x38e TMovI
	
Label_911:
	var_59_string = "all"; // 0x38f PushS
	var_60_string = "attack_begin"; // 0x390 PushS
	var_61_int = 1; // 0x391 PushI
	var_62_int = var_1_object + var_61_int; // 0x392 Add
	var_63_int = var_60_string + var_62_int; // 0x393 Add
	HasAnimation(var_56_bool, var_59_string, var_63_int); // 0x394 Func
	var_64_bool = var_56_bool == 0; // 0x396 Not
	if(var_64_bool == 0) goto Label_921; // 0x397 JumpB
	goto Label_924; // 0x398 Jump
	
Label_924:
	var_2_object = 0; // 0x39c TMovI
	
Label_925:
	var_65_string = "attack"; // 0x39d PushS
	var_66_int = 1; // 0x39e PushI
	var_67_int = var_2_object + var_66_int; // 0x39f Add
	var_68_int = var_65_string + var_67_int; // 0x3a0 Add
	IsExisting3DSound(var_57_bool, var_68_int); // 0x3a1 Func
	var_69_bool = var_57_bool == 0; // 0x3a3 Not
	if(var_69_bool == 0) goto Label_934; // 0x3a4 JumpB
	goto Label_937; // 0x3a5 Jump
	
Label_937:
	var_70_string = "all"; // 0x3a9 PushS
	var_71_string = "bjump"; // 0x3aa PushS
	GetAnimationOffset(var_58_cvector, var_70_string, var_71_string); // 0x3ab Func
	var_72_float = GetByIndex(var_58_cvector, 2); // 0x3ad PushE
	var_4_bool = -var_72_float; // 0x3ae Neg2
	return 6; // 0x3af Return
	
Label_934:
	var_73_int = 1; // 0x3a6 PushI
	var_2_object = var_2_object + var_73_int; // 0x3a7 Add2
	goto Label_925; // 0x3a8 Jump
	
Label_921:
	var_74_int = 1; // 0x399 PushI
	var_1_object = var_1_object + var_74_int; // 0x39a Add2
	goto Label_911; // 0x39b Jump
}


func_654(var_16_object)
{
	var_23_object = Obj(); var_24_object = Obj(); // 0x28e PushV
	GetScene(var_24_object); // 0x28f Func
	var_25_object = Obj(); // 0x291 PushV
	func_2261(var_25_object); // 0x292 NEW_2
	RemoveStationaryActor(var_25_object); // 0x294 ObjFunc
	
Label_662:
	var_28_object = Obj(); var_29_bool = 0; var_30_float = 0; // 0x296 PushV
	var_28_object = var_16_object; // 0x297 Mov
	var_29_bool = 1; // 0x298 MovB
	var_30_float = 180.0; // 0x299 MovF
	func_680(var_21_float, var_22_int, var_16_object, var_23_object, var_24_object, var_28_object, var_29_bool, var_30_float); // 0x29a NEW_2
	var_517_int = 1; // 0x29c PushI
	Sleep(var_517_int); // 0x29d Func
	goto Label_662; // 0x29f Jump
}


func_2452(var_145_bool)
{
	var_147_int = 0; var_148_string = ""; // 0x995 PushV
	var_148_string = "oob4boy2"; // 0x996 MovS
	func_2295(var_147_int, var_148_string); // 0x997 NEW_2
	var_149_int = 0; // 0x999 PushI
	var_150_bool = var_147_int == var_149_int; // 0x99a Eq
	if(var_150_bool == 0) goto Label_2462; // 0x99b JumpB
	var_145_bool = 1; // 0x99c MovB
	return 0; // 0x99d Return
	
Label_2462:
	var_145_bool = 0; // 0x99e MovB
	return 0; // 0x99f Return
}


func_1944(var_32_object)
{
	var_33_bool = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_string = ""; var_40_bool = 0; var_41_int = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_string = ""; // 0x798 PushV
	var_47_bool = var_32_object == 0; // 0x799 NullEq
	if(var_47_bool == 0) goto Label_1948; // 0x79a JumpB
	return 14; // 0x79b Return
	
Label_1948:
	IsDead(var_40_bool); // 0x79c Func
	var_48_bool = var_40_bool; // 0x79e Push
	if(var_48_bool == 0) goto Label_1953; // 0x79f JumpB
	return 14; // 0x7a0 Return
	
Label_1953:
	GetSecondaryAnimationType(var_41_int); // 0x7a1 Func
	var_49_int = 0; // 0x7a3 PushI
	var_50_bool = var_41_int < var_49_int; // 0x7a4 LT
	if(var_50_bool == 0) goto Label_1959; // 0x7a5 JumpB
	return 14; // 0x7a6 Return
	
Label_1959:
	GetPosition(var_42_cvector); // 0x7a7 ObjFunc
	GetPosition(var_43_cvector); // 0x7a9 Func
	GetDirection(var_44_cvector); // 0x7ab Func
	var_45_cvector = var_43_cvector - var_42_cvector; // 0x7ad Sub2
	var_51_float = GetByIndex(var_45_cvector, 0); // 0x7ae PushE
	var_52_float = GetByIndex(var_44_cvector, 0); // 0x7af PushE
	var_53_float = var_51_float * var_52_float; // 0x7b0 Mult
	var_54_float = GetByIndex(var_45_cvector, 2); // 0x7b1 PushE
	var_55_float = GetByIndex(var_44_cvector, 2); // 0x7b2 PushE
	var_56_float = var_54_float * var_55_float; // 0x7b3 Mult
	var_57_int = var_53_float + var_56_float; // 0x7b4 Add
	var_58_int = 0; // 0x7b5 PushI
	var_59_bool = var_57_int >= var_58_int; // 0x7b6 GE
	if(var_59_bool == 0) goto Label_1978; // 0x7b7 JumpB
	var_46_string = "fhit"; // 0x7b8 MovS
	goto Label_1979; // 0x7b9 Jump
	
Label_1979:
	var_60_string = "hit_react"; // 0x7bb PushS
	var_61_string = "1"; // 0x7bc PushS
	var_62_int = var_46_string + var_61_string; // 0x7bd Add
	var_63_string = "2"; // 0x7be PushS
	var_64_int = var_46_string + var_63_string; // 0x7bf Add
	var_65_int = -10; // 0x7c0 PushI
	FadeSecondaryAnimation(var_60_string, var_62_int, var_64_int, var_65_int); // 0x7c1 Func
	return 14; // 0x7c3 Return
	
Label_1978:
	var_46_string = "bhit"; // 0x7ba MovS
}


func_2202(var_19_object)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); // 0x89a PushV
	GetEyesHeight(var_22_float); // 0x89b ObjFunc
	var_23_cvector = CVector(0.0, 0.0, 0.0); // 0x89d MovV
	var_24_float = GetByIndex(var_23_cvector, 1); // 0x89e PushE
	var_24_float = var_22_float; // 0x89f Mov
	SetByIndex(var_23_cvector, 1) = var_24_float; // 0x8a0 PopE
	var_25_string = "head"; // 0x8a1 PushS
	LookAsync(var_19_object, var_25_string, var_23_cvector); // 0x8a2 Func
	return 4; // 0x8a4 Return
}


func_2464(var_78_int)
{
	var_79_int = 0; var_80_int = 0; // 0x9a0 PushV
	var_81_string = "branch"; // 0x9a1 PushS
	GetVariable(var_81_string, var_80_int); // 0x9a2 Func
	var_82_int = 0; // 0x9a4 PushI
	var_83_bool = var_80_int == var_82_int; // 0x9a5 Eq
	if(var_83_bool == 0) goto Label_2474; // 0x9a6 JumpB
	var_78_int = 1; // 0x9a7 MovI
	return 2; // 0x9a8 Return
	
Label_2474:
	var_84_int = 1; // 0x9aa PushI
	var_85_bool = var_80_int == var_84_int; // 0x9ab Eq
	if(var_85_bool == 0) goto Label_2479; // 0x9ac JumpB
	var_78_int = 2; // 0x9ad MovI
	return 2; // 0x9ae Return
	
Label_2479:
	var_78_int = 3; // 0x9af MovI
	return 2; // 0x9b0 Return
}


func_674(var_395_float)
{
	var_395_float = 0.03; // 0x2a3 MovF
	return 0; // 0x2a4 Return
}


func_2213()
{
	var_18_bool = 0; // 0x8a5 PushV
	func_2395(var_18_bool); // 0x8a6 NEW_2
	if(var_18_bool == 0) goto Label_2219; // 0x8a8 JumpB
	lshStopSpeech(); // 0x8a9 Func
	
Label_2219:
	return 0; // 0x8ab Return
}


func_677(var_402_int)
{
	var_402_int = 0; // 0x2a6 MovI
	return 0; // 0x2a7 Return
}


func_1190(var_0_object, var_301_bool)
{
	var_302_cvector = CVector(0,0,0); var_303_cvector = CVector(0,0,0); var_304_cvector = CVector(0,0,0); var_305_float = 0; var_306_float = 0; var_307_cvector = CVector(0,0,0); var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0); var_310_float = 0; var_311_float = 0; // 0x4a6 PushV
	var_312_bool = 0; var_313_object = Obj(); // 0x4a7 PushV
	var_313_object = var_0_object; // 0x4a8 MovT
	func_1920(var_312_bool, var_313_object); // 0x4a9 NEW_2
	var_314_bool = var_312_bool == 0; // 0x4ab Not
	if(var_314_bool == 0) goto Label_1199; // 0x4ac JumpB
	var_301_bool = 0; // 0x4ad MovB
	return 10; // 0x4ae Return
	
Label_1199:
	var_315_bool = 0; // 0x4af PushV
	func_1279(var_311_float, var_315_bool); // 0x4b0 NEW_2
	if(var_315_bool == 0) goto Label_1216; // 0x4b2 JumpB
	GetPFPosition(var_307_cvector); // 0x4b3 TObjFunc
	GetPFPosition(var_308_cvector); // 0x4b5 Func
	var_309_cvector = var_307_cvector - var_308_cvector; // 0x4b7 Sub2
	var_310_float = var_309_cvector | var_309_cvector; // 0x4b8 Or2
	GetAttackDistance(var_311_float); // 0x4b9 TObjFunc
	var_316_int = 50; // 0x4bb PushI
	var_311_float = var_311_float + var_316_int; // 0x4bc Add2
	var_317_float = var_311_float * var_311_float; // 0x4bd Mult
	var_301_bool = var_310_float <= var_317_float; // 0x4be LE2
	return 10; // 0x4bf Return
	
Label_1216:
	var_301_bool = 0; // 0x4c0 MovB
	return 10; // 0x4c1 Return
}


func_680(var_0_object, var_3_string, var_5_bool, var_28_object, var_29_bool, var_30_float, var_135_bool, var_227_bool)
{
	var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; var_35_bool = 0; var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_bool = 0; var_41_float = 0; var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0; var_46_bool = 0; var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_bool = 0; var_52_float = 0; // 0x2a8 PushV
	func_909(var_50_cvector, var_51_bool, var_52_float); // 0x2aa NEW_2
	var_5_bool = 0; // 0x2ac TMovI
	var_75_string = "@GetAttackDistance"; // 0x2ad PushS
	var_76_int = 1; // 0x2ae PushI
	var_77_bool = IsFuncExist(var_28_object, var_75_string, var_76_int); // 0x2af FuncExist
	if(var_77_bool == 0) goto Label_694; // 0x2b0 JumpB
	GetAttackDistance(var_42_float); // 0x2b1 ObjFunc
	var_78_int = 50; // 0x2b3 PushI
	var_42_float = var_42_float + var_78_int; // 0x2b4 Add2
	goto Label_695; // 0x2b5 Jump
	
Label_695:
	var_79_int = 150; // 0x2b7 PushI
	var_80_bool = var_42_float >= var_79_int; // 0x2b8 GE
	if(var_80_bool == 0) goto Label_699; // 0x2b9 JumpB
	var_42_float = 150; // 0x2ba MovI
	
Label_699:
	var_3_string = 0; // 0x2bb TMovB
	var_0_object = var_28_object; // 0x2bc TMov
	IsPlayerActor(var_0_object, var_45_bool); // 0x2bd Func
	var_81_bool = var_45_bool; // 0x2bf Push
	if(var_81_bool == 0) goto Label_713; // 0x2c0 JumpB
	var_82_string = "attack"; // 0x2c1 PushS
	PlayGlobalMusic(var_82_string); // 0x2c2 Func
	var_83_object = Obj(); // 0x2c4 PushV
	func_2261(var_83_object); // 0x2c5 NEW_2
	SendPlayerEnemy(var_28_object, var_83_object); // 0x2c7 Func
	
Label_713:
	var_84_bool = var_29_bool; // 0x2c9 Push
	if(var_84_bool == 0) goto Label_717; // 0x2ca JumpB
	var_46_bool = 0; // 0x2cb MovB
	goto Label_718; // 0x2cc Jump
	
Label_718:
	var_85_float = 400.0; // 0x2ce PushF
	var_47_float = var_85_float + var_42_float; // 0x2cf Add2
	
Label_720:
	var_86_bool = 0; // 0x2d0 PushV
	var_86_bool = 0; // 0x2d1 MovB
	var_87_bool = 0; var_88_object = Obj(); // 0x2d2 PushV
	var_88_object = var_0_object; // 0x2d3 MovT
	func_1920(var_87_bool, var_88_object); // 0x2d4 NEW_2
	if(var_87_bool == 0) goto Label_730; // 0x2d6 JumpB
	var_121_bool = var_3_string == 0; // 0x2d7 Not
	if(var_121_bool == 0) goto Label_730; // 0x2d8 JumpB
	var_86_bool = 1; // 0x2d9 MovB
	
Label_730:
	if(var_86_bool == 0) goto Label_892; // 0x2da JumpB
	func_1322(var_52_float); // 0x2dc NEW_2
	GetPFPosition(var_43_cvector); // 0x2de TObjFunc
	GetPFPosition(var_44_cvector); // 0x2e0 Func
	var_48_cvector = var_43_cvector - var_44_cvector; // 0x2e2 Sub2
	var_49_float = var_48_cvector | var_48_cvector; // 0x2e3 Or2
	var_127_float = var_47_float * var_47_float; // 0x2e4 Mult
	var_128_bool = var_49_float >= var_127_float; // 0x2e5 GE
	if(var_128_bool == 0) goto Label_758; // 0x2e6 JumpB
	var_129_bool = 0; var_130_object = Obj(); var_131_float = 0; var_132_float = 0; var_133_bool = 0; var_134_bool = 0; // 0x2e7 PushV
	var_130_object = var_0_object; // 0x2e8 MovT
	var_131_float = var_42_float; // 0x2e9 Mov
	var_132_float = 10000.0; // 0x2ea MovF
	var_133_bool = 1; // 0x2eb MovB
	var_134_bool = 0; // 0x2ec MovB
	TaskCall(5); // 0x2ed TaskCall
	func_1342(var_137_bool, var_129_bool, var_130_object, var_131_float, var_132_float, var_133_bool, var_134_bool); // 0x2ee NEW_2
	TaskReturn(); // 0x2ef TaskReturn
	var_212_bool = var_135_bool == 0; // 0x2f1 Not
	if(var_212_bool == 0) goto Label_756; // 0x2f2 JumpB
	goto Label_892; // 0x2f3 Jump
	
Label_892:
	WaitForAnimEnd(); // 0x37c Func
	var_213_string = var_3_string; // 0x37e PushT
	if(var_213_string == 0) goto Label_897; // 0x37f JumpB
	return 22; // 0x380 Return
	
Label_897:
	var_214_string = "all"; // 0x381 PushS
	var_215_string = "attack_off"; // 0x382 PushS
	PlayAnimation(var_214_string, var_215_string); // 0x383 Func
	WaitForAnimEnd(); // 0x385 Func
	var_216_bool = var_45_bool; // 0x387 Push
	if(var_216_bool == 0) goto Label_908; // 0x388 JumpB
	var_217_float = 2.0; // 0x389 PushF
	Sleep(var_217_float); // 0x38a Func
	
Label_908:
	return 22; // 0x38c Return
	
Label_756:
	var_46_bool = 0; // 0x2f4 MovB
	goto Label_891; // 0x2f5 Jump
	
Label_891:
	goto Label_720; // 0x37b Jump
	
Label_758:
	var_218_float = var_30_float * var_30_float; // 0x2f6 Mult
	var_219_bool = var_49_float >= var_218_float; // 0x2f7 GE
	if(var_219_bool == 0) goto Label_883; // 0x2f8 JumpB
	GetPFPosition(var_50_cvector); // 0x2f9 TObjFunc
	CanReachByPF(var_51_bool, var_50_cvector); // 0x2fb Func
	var_220_bool = var_51_bool == 0; // 0x2fd Not
	if(var_220_bool == 0) goto Label_782; // 0x2fe JumpB
	var_221_bool = 0; var_222_object = Obj(); var_223_float = 0; var_224_float = 0; var_225_bool = 0; var_226_bool = 0; // 0x2ff PushV
	var_222_object = var_0_object; // 0x300 MovT
	var_223_float = var_42_float; // 0x301 Mov
	var_224_float = 10000.0; // 0x302 MovF
	var_225_bool = 1; // 0x303 MovB
	var_226_bool = 0; // 0x304 MovB
	TaskCall(5); // 0x305 TaskCall
	func_1342(var_229_bool, var_221_bool, var_222_object, var_223_float, var_224_float, var_225_bool, var_226_bool); // 0x306 NEW_2
	TaskReturn(); // 0x307 TaskReturn
	var_230_bool = var_227_bool == 0; // 0x309 Not
	if(var_230_bool == 0) goto Label_780; // 0x30a JumpB
	goto Label_892; // 0x30b Jump
	
Label_780:
	var_46_bool = 0; // 0x30c MovB
	goto Label_720; // 0x30d Jump
	
Label_782:
	var_231_bool = var_46_bool == 0; // 0x30e Not
	if(var_231_bool == 0) goto Label_807; // 0x30f JumpB
	var_232_object = Obj(); // 0x310 PushV
	var_232_object = var_0_object; // 0x311 MovT
	func_2070(); // 0x312 NEW_2
	var_241_string = "all"; // 0x314 PushS
	var_242_string = "attack_on"; // 0x315 PushS
	PlayAnimation(var_241_string, var_242_string); // 0x316 Func
	WaitForAnimEnd(); // 0x318 Func
	func_1322(var_52_float); // 0x31b NEW_2
	StopAsync(); // 0x31d Func
	var_46_bool = 1; // 0x31f MovB
	var_243_bool = 0; var_244_object = Obj(); // 0x320 PushV
	var_244_object = var_0_object; // 0x321 MovT
	func_1920(var_243_bool, var_244_object); // 0x322 NEW_2
	var_245_bool = var_243_bool == 0; // 0x324 Not
	if(var_245_bool == 0) goto Label_807; // 0x325 JumpB
	goto Label_892; // 0x326 Jump
	
Label_807:
	rand(var_52_float); // 0x327 Func
	var_246_bool = 0; // 0x329 PushV
	var_246_bool = 1; // 0x32a MovB
	var_247_float = 0.25; // 0x32b PushF
	var_248_bool = var_52_float < var_247_float; // 0x32c LT
	if(var_248_bool == 0) goto Label_819; // 0x32d JumpB
	var_249_bool = 0; // 0x32e PushV
	func_1279(var_246_bool, var_249_bool); // 0x32f NEW_2
	if(var_249_bool == 0) goto Label_819; // 0x331 JumpB
	var_246_bool = 0; // 0x332 MovB
	
Label_819:
	if(var_246_bool == 0) goto Label_836; // 0x333 JumpB
	Face(var_0_object); // 0x334 Func
	func_1329(); // 0x337 NEW_2
	var_284_string = "all"; // 0x339 PushS
	var_285_string = "attack_stay"; // 0x33a PushS
	PlayAnimation(var_284_string, var_285_string); // 0x33b Func
	var_286_bool = 0; var_287_float = 0; // 0x33d PushV
	var_287_float = var_30_float; // 0x33e Mov
	func_1147(var_52_float, var_286_bool, var_287_float); // 0x33f NEW_2
	StopAsync(); // 0x341 Func
	goto Label_882; // 0x343 Jump
	
Label_882:
	goto Label_891; // 0x372 Jump
	
Label_836:
	Face(var_0_object); // 0x344 Func
	var_501_string = "all"; // 0x346 PushS
	var_502_string = "fjump"; // 0x347 PushS
	PlayAnimation(var_501_string, var_502_string); // 0x348 Func
	WaitForAnimEnd(); // 0x34a Func
	func_1322(var_52_float); // 0x34d NEW_2
	var_503_cvector = CVector(0.0, 0.0, 0.0); // 0x34f PushVec
	SetSpeed(var_503_cvector); // 0x350 Func
	Stop(); // 0x352 Func
	StopAsync(); // 0x354 Func
	var_504_bool = 0; // 0x356 PushV
	func_1279(var_52_float, var_504_bool); // 0x357 NEW_2
	var_505_bool = var_504_bool == 0; // 0x359 Not
	if(var_505_bool == 0) goto Label_882; // 0x35a JumpB
	var_506_bool = 0; var_507_object = Obj(); // 0x35b PushV
	var_507_object = var_0_object; // 0x35c MovT
	func_1920(var_506_bool, var_507_object); // 0x35d NEW_2
	var_508_bool = var_506_bool == 0; // 0x35f Not
	if(var_508_bool == 0) goto Label_866; // 0x360 JumpB
	goto Label_892; // 0x361 Jump
	
Label_866:
	GetPFPosition(var_43_cvector); // 0x362 TObjFunc
	GetPFPosition(var_44_cvector); // 0x364 Func
	var_48_cvector = var_43_cvector - var_44_cvector; // 0x366 Sub2
	var_49_float = var_48_cvector | var_48_cvector; // 0x367 Or2
	var_509_float = var_30_float * var_30_float; // 0x368 Mult
	var_510_bool = var_49_float < var_509_float; // 0x369 LT
	if(var_510_bool == 0) goto Label_882; // 0x36a JumpB
	var_511_bool = 0; var_512_float = 0; // 0x36b PushV
	var_512_float = var_30_float; // 0x36c Mov
	func_983(var_52_float, var_511_bool, var_512_float); // 0x36d NEW_2
	var_513_bool = var_511_bool == 0; // 0x36f Not
	if(var_513_bool == 0) goto Label_882; // 0x370 JumpB
	goto Label_892; // 0x371 Jump
	
Label_883:
	var_514_bool = 0; var_515_float = 0; // 0x373 PushV
	var_515_float = var_30_float; // 0x374 Mov
	func_983(var_52_float, var_514_bool, var_515_float); // 0x375 NEW_2
	var_516_bool = var_514_bool == 0; // 0x377 Not
	if(var_516_bool == 0) goto Label_890; // 0x378 JumpB
	goto Label_892; // 0x379 Jump
	
Label_890:
	var_46_bool = 1; // 0x37a MovB
	
Label_717:
	var_46_bool = 1; // 0x2cd MovB
	
Label_694:
	var_42_float = var_30_float; // 0x2b6 Mov
}


func_1447(var_0_object, var_1_object, var_158_bool, var_159_object, var_160_float, var_161_float, var_162_bool, var_163_bool)
{
	var_164_bool = 0; var_165_bool = 0; var_166_object = Obj(); var_167_cvector = CVector(0,0,0); var_168_cvector = CVector(0,0,0); var_169_cvector = CVector(0,0,0); var_170_float = 0; var_171_object = Obj(); var_172_bool = 0; var_173_bool = 0; var_174_object = Obj(); var_175_cvector = CVector(0,0,0); var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); var_178_float = 0; var_179_object = Obj(); // 0x5a7 PushV
	var_0_object = 0; // 0x5a8 TMovB
	var_1_object = var_159_object; // 0x5a9 TMov
	var_173_bool = var_163_bool; // 0x5aa Mov
	
Label_1451:
	var_180_bool = 0; var_181_object = Obj(); // 0x5ab PushV
	var_181_object = var_159_object; // 0x5ac Mov
	func_1587(var_180_bool, var_181_object); // 0x5ad NEW_2
	var_184_bool = var_180_bool == 0; // 0x5af Not
	if(var_184_bool == 0) goto Label_1459; // 0x5b0 JumpB
	var_158_bool = 0; // 0x5b1 MovB
	return 16; // 0x5b2 Return
	
Label_1459:
	GetPosition(var_175_cvector); // 0x5b3 ObjFunc
	GetPosition(var_176_cvector); // 0x5b5 Func
	var_177_cvector = var_175_cvector - var_176_cvector; // 0x5b7 Sub2
	var_178_float = var_177_cvector | var_177_cvector; // 0x5b8 Or2
	var_185_bool = 0; // 0x5b9 PushV
	var_185_bool = 0; // 0x5ba MovB
	var_186_int = 0; // 0x5bb PushI
	var_187_bool = var_161_float > var_186_int; // 0x5bc GT
	if(var_187_bool == 0) goto Label_1474; // 0x5bd JumpB
	var_188_float = var_161_float * var_161_float; // 0x5be Mult
	var_189_bool = var_178_float > var_188_float; // 0x5bf GT
	if(var_189_bool == 0) goto Label_1474; // 0x5c0 JumpB
	var_185_bool = 1; // 0x5c1 MovB
	
Label_1474:
	if(var_185_bool == 0) goto Label_1479; // 0x5c2 JumpB
	Stop(); // 0x5c3 Func
	var_158_bool = 0; // 0x5c5 MovB
	return 16; // 0x5c6 Return
	
Label_1479:
	var_190_float = var_160_float * var_160_float; // 0x5c7 Mult
	var_191_bool = var_178_float > var_190_float; // 0x5c8 GT
	if(var_191_bool == 0) goto Label_1541; // 0x5c9 JumpB
	GetPFPosition(var_175_cvector); // 0x5ca ObjFunc
	FindPathTo(var_179_object, var_175_cvector); // 0x5cc Func
	var_192_bool = var_179_object != 0; // 0x5ce NullNeq
	if(var_192_bool == 0) goto Label_1490; // 0x5cf JumpB
	var_174_object = var_179_object; // 0x5d0 Mov
	var_179_object = 0; // 0x5d1 SetNull
	
Label_1490:
	var_193_bool = var_174_object != 0; // 0x5d2 NullNeq
	if(var_193_bool == 0) goto Label_1523; // 0x5d3 JumpB
	var_194_bool = var_173_bool; // 0x5d4 Push
	if(var_194_bool == 0) goto Label_1500; // 0x5d5 JumpB
	var_173_bool = 0; // 0x5d6 MovB
	RotatePath(var_174_object, var_172_bool); // 0x5d7 Func
	var_195_bool = var_172_bool == 0; // 0x5d9 Not
	if(var_195_bool == 0) goto Label_1500; // 0x5da JumpB
	goto Label_1547; // 0x5db Jump
	
Label_1547:
	var_158_bool = !var_0_object; // 0x60b Not2
	return 16; // 0x60c Return
	
Label_1500:
	var_196_int = 0; // 0x5dc PushI
	var_197_float = 0.3; // 0x5dd PushF
	SetTimer(var_196_int, var_197_float); // 0x5de Func
	var_198_string = ""; // 0x5e0 PushV
	func_1594(var_198_string); // 0x5e1 NEW_2
	var_199_string = ""; // 0x5e3 PushV
	func_1596(var_199_string); // 0x5e4 NEW_2
	FollowPath(var_174_object, var_162_bool, var_172_bool, var_198_string, var_199_string); // 0x5e6 Func
	var_200_bool = var_172_bool == 0; // 0x5e8 Not
	if(var_200_bool == 0) goto Label_1521; // 0x5e9 JumpB
	var_201_object = var_0_object; // 0x5ea PushT
	if(var_201_object == 0) goto Label_1519; // 0x5eb JumpB
	var_174_object = 0; // 0x5ec SetNull
	goto Label_1547; // 0x5ed Jump
	
Label_1519:
	goto Label_1546; // 0x5ef Jump
	
Label_1546:
	goto Label_1451; // 0x60a Jump
	
Label_1521:
	var_174_object = 0; // 0x5f1 SetNull
	goto Label_1539; // 0x5f2 Jump
	
Label_1539:
	var_179_object = 0; // 0x603 SetNull
	goto Label_1545; // 0x604 Jump
	
Label_1545:
	var_174_object = 0; // 0x609 SetNull
	
Label_1523:
	var_202_int = 0; // 0x5f3 PushI
	KillTimer(var_202_int); // 0x5f4 Func
	var_203_float = 0.5; // 0x5f6 PushF
	Sleep(var_203_float, var_172_bool); // 0x5f7 Func
	var_204_bool = var_172_bool == 0; // 0x5f9 Not
	if(var_204_bool == 0) goto Label_1535; // 0x5fa JumpB
	var_205_object = var_0_object; // 0x5fb PushT
	if(var_205_object == 0) goto Label_1535; // 0x5fc JumpB
	var_174_object = 0; // 0x5fd SetNull
	goto Label_1547; // 0x5fe Jump
	
Label_1535:
	var_206_int = 0; // 0x5ff PushI
	var_207_float = 0.3; // 0x600 PushF
	SetTimer(var_206_int, var_207_float); // 0x601 Func
	
Label_1541:
	var_208_int = 0; // 0x605 PushI
	KillTimer(var_208_int); // 0x606 Func
	goto Label_1547; // 0x608 Jump
}


func_2220(var_83_string)
{
	var_84_bool = 0; var_85_int = 0; var_86_bool = 0; var_87_int = 0; var_88_bool = 0; var_89_float = 0; var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_bool = 0; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_bool = 0; var_97_float = 0; var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); // 0x8ac PushV
	IsExisting3DSound(var_92_bool, var_83_string); // 0x8ad Func
	var_100_bool = var_92_bool == 0; // 0x8af Not
	if(var_100_bool == 0) goto Label_2245; // 0x8b0 JumpB
	var_93_int = 0; // 0x8b1 MovI
	
Label_2226:
	var_101_int = 1; // 0x8b2 PushI
	var_102_int = var_93_int + var_101_int; // 0x8b3 Add
	var_103_int = var_83_string + var_102_int; // 0x8b4 Add
	IsExisting3DSound(var_94_bool, var_103_int); // 0x8b5 Func
	var_104_bool = var_94_bool == 0; // 0x8b7 Not
	if(var_104_bool == 0) goto Label_2234; // 0x8b8 JumpB
	goto Label_2237; // 0x8b9 Jump
	
Label_2237:
	var_105_bool = var_93_int == 0; // 0x8bd Not
	if(var_105_bool == 0) goto Label_2240; // 0x8be JumpB
	return 16; // 0x8bf Return
	
Label_2240:
	irand(var_95_int, var_93_int); // 0x8c0 Func
	var_106_int = 1; // 0x8c2 PushI
	var_107_int = var_95_int + var_106_int; // 0x8c3 Add
	var_83_string = var_83_string + var_107_int; // 0x8c4 Add2
	
Label_2245:
	Is3DSoundLoaded(var_96_bool, var_83_string); // 0x8c5 Func
	var_108_bool = var_96_bool; // 0x8c7 Push
	if(var_108_bool == 0) goto Label_2260; // 0x8c8 JumpB
	GetEyesHeight(var_97_float); // 0x8c9 Func
	GetDirection(var_98_cvector); // 0x8cb Func
	var_109_int = 50; // 0x8cd PushI
	var_99_cvector = var_98_cvector * var_109_int; // 0x8ce Mult2
	var_110_float = GetByIndex(var_99_cvector, 1); // 0x8cf PushE
	var_110_float = var_110_float + var_97_float; // 0x8d0 Add2
	SetByIndex(var_99_cvector, 1) = var_110_float; // 0x8d1 PopE
	PlayGlobalSound(var_83_string, var_99_cvector); // 0x8d2 Func
	
Label_2260:
	return 16; // 0x8d4 Return
	
Label_2234:
	var_111_int = 1; // 0x8ba PushI
	var_93_int = var_93_int + var_111_int; // 0x8bb Add2
	goto Label_2226; // 0x8bc Jump
}


func_944(var_0_object, var_384_float, var_385_int)
{
	var_386_object = Obj(); var_387_float = 0; var_388_float = 0; var_389_object = Obj(); var_390_float = 0; var_391_float = 0; // 0x3b0 PushV
	var_392_float = 0.9; // 0x3b1 PushF
	var_393_float = var_384_float * var_392_float; // 0x3b2 Mult
	GetVictim(var_393_float, var_389_object); // 0x3b3 Func
	ReportAttack(var_0_object); // 0x3b5 Func
	var_394_bool = var_389_object == var_0_object; // 0x3b7 Eq
	if(var_394_bool == 0) goto Label_981; // 0x3b8 JumpB
	var_395_float = 0; var_396_object = Obj(); var_397_int = 0; // 0x3b9 PushV
	var_396_object = var_389_object; // 0x3ba Mov
	var_397_int = var_385_int; // 0x3bb Mov
	func_674(var_397_int); // 0x3bc NEW_2
	var_390_float = var_395_float; // 0x3bd Mov
	var_398_float = 0; var_399_object = Obj(); var_400_float = 0; var_401_int = 0; // 0x3bf PushV
	var_399_object = var_389_object; // 0x3c0 Mov
	var_400_float = var_390_float; // 0x3c1 Mov
	var_402_int = 0; var_403_object = Obj(); var_404_int = 0; // 0x3c2 PushV
	var_403_object = var_389_object; // 0x3c3 Mov
	var_404_int = var_385_int; // 0x3c4 Mov
	func_677(var_404_int); // 0x3c5 NEW_2
	var_401_int = var_402_int; // 0x3c6 Mov
	func_1806(var_398_float, var_399_object, var_400_float, var_401_int); // 0x3c8 NEW_2
	var_391_float = var_398_float; // 0x3c9 Mov
	var_459_int = 0; // 0x3cb PushV
	func_1327(var_459_int); // 0x3cc NEW_2
	ReportHit(var_0_object, var_459_int, var_391_float, var_390_float); // 0x3ce Func
	var_460_object = Obj(); var_461_float = 0; // 0x3d0 PushV
	var_460_object = var_389_object; // 0x3d1 Mov
	var_461_float = var_391_float; // 0x3d2 Mov
	func_1334(); // 0x3d3 NEW_2
	
Label_981:
	return 6; // 0x3d5 Return
}


func_2481(var_20_int)
{
	var_21_int = 0; var_22_int = 0; // 0x9b1 PushV
	var_23_string = "branch"; // 0x9b2 PushS
	GetVariable(var_23_string, var_22_int); // 0x9b3 Func
	var_20_int = var_22_int; // 0x9b5 Mov
	return 2; // 0x9b6 Return
}


func_1714(var_82_string)
{
	RemoveRTEnvelope(); // 0x6b3 Func
	SetDeathState(); // 0x6b5 Func
	Stop(); // 0x6b7 Func
	StopAsync(); // 0x6b9 Func
	StopSecondaryAnimation(); // 0x6bb Func
	var_83_string = ""; // 0x6bd PushV
	var_83_string = var_82_string; // 0x6be Mov
	func_2220(var_83_string); // 0x6bf NEW_2
	var_112_string = "all"; // 0x6c1 PushS
	PlayAnimation(var_112_string, var_82_string); // 0x6c2 Func
	WaitForAnimEnd(); // 0x6c4 Func
	var_113_string = "all"; // 0x6c6 PushS
	LockAnimationEnd(var_113_string, var_82_string); // 0x6c7 Func
	RemoveEnvelope(); // 0x6c9 Func
	return 0; // 0x6cb Return
}


func_2487(var_19_object)
{
	var_20_int = 0; // 0x9b8 PushV
	func_2481(var_20_int); // 0x9b9 NEW_2
	var_24_int = 1; // 0x9bb PushI
	var_25_bool = var_20_int == var_24_int; // 0x9bc Eq
	if(var_25_bool == 0) goto Label_2497; // 0x9bd JumpB
	WorkWithCorpse(var_19_object); // 0x9be Func
	goto Label_2499; // 0x9c0 Jump
	
Label_2499:
	return 0; // 0x9c3 Return
	
Label_2497:
	Barter(var_19_object); // 0x9c1 Func
}


func_187(var_2_object, var_106_string)
{
	var_107_bool = 0; // 0xbc PushV
	func_2395(var_107_bool); // 0xbd NEW_2
	var_108_bool = var_107_bool == 0; // 0xbf Not
	if(var_108_bool == 0) goto Label_194; // 0xc0 JumpB
	return 0; // 0xc1 Return
	
Label_194:
	var_109_bool = var_106_string == var_2_object; // 0xc2 Eq
	if(var_109_bool == 0) goto Label_197; // 0xc3 JumpB
	return 0; // 0xc4 Return
	
Label_197:
	var_110_string = ""; var_111_bool = 0; // 0xc5 PushV
	var_110_string = var_106_string; // 0xc6 Mov
	var_112_string = ""; // 0xc7 PushS
	var_113_bool = var_106_string == var_112_string; // 0xc8 Eq
	if(var_113_bool == 0) goto Label_204; // 0xc9 JumpB
	var_111_bool = 0; // 0xca MovB
	goto Label_205; // 0xcb Jump
	
Label_205:
	func_2187(var_110_string, var_111_bool); // 0xcd NEW_2
	var_2_object = var_106_string; // 0xcf TMov
	return 0; // 0xd0 Return
	
Label_204:
	var_111_bool = 1; // 0xcc MovB
}


func_1218(var_299_bool)
{
	var_300_bool = 0; // 0x4c2 PushV
	var_300_bool = 0; // 0x4c3 MovB
	var_301_bool = 0; // 0x4c4 PushV
	func_1190(var_300_bool, var_301_bool); // 0x4c5 NEW_2
	if(var_301_bool == 0) goto Label_1229; // 0x4c7 JumpB
	var_318_bool = 0; // 0x4c8 PushV
	func_1234(var_299_bool, var_300_bool, var_318_bool); // 0x4c9 NEW_2
	if(var_318_bool == 0) goto Label_1229; // 0x4cb JumpB
	var_300_bool = 1; // 0x4cc MovB
	
Label_1229:
	if(var_300_bool == 0) goto Label_1232; // 0x4cd JumpB
	var_299_bool = 1; // 0x4ce MovB
	return 0; // 0x4cf Return
	
Label_1232:
	var_299_bool = 0; // 0x4d0 MovB
	return 0; // 0x4d1 Return
}


func_1988(var_19_object, var_20_int, var_21_float)
{
	var_22_cvector = CVector(0,0,0); var_23_object = Obj(); var_24_int = 0; var_25_bool = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_int = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_object = Obj(); var_33_int = 0; var_34_bool = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_int = 0; var_38_int = 0; var_39_cvector = CVector(0,0,0); // 0x7c4 PushV
	var_40_bool = 0; // 0x7c5 PushV
	var_40_bool = 0; // 0x7c6 MovB
	var_41_bool = 0; // 0x7c7 PushV
	var_41_bool = 0; // 0x7c8 MovB
	var_42_object = var_19_object; // 0x7c9 Push
	if(var_42_object == 0) goto Label_1999; // 0x7ca JumpB
	var_43_int = 4; // 0x7cb PushI
	var_44_bool = var_20_int != var_43_int; // 0x7cc Neq
	if(var_44_bool == 0) goto Label_1999; // 0x7cd JumpB
	var_41_bool = 1; // 0x7ce MovB
	
Label_1999:
	if(var_41_bool == 0) goto Label_2004; // 0x7cf JumpB
	var_45_int = 5; // 0x7d0 PushI
	var_46_bool = var_20_int != var_45_int; // 0x7d1 Neq
	if(var_46_bool == 0) goto Label_2004; // 0x7d2 JumpB
	var_40_bool = 1; // 0x7d3 MovB
	
Label_2004:
	if(var_40_bool == 0) goto Label_2051; // 0x7d4 JumpB
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x7d5 PushV
	var_49_cvector = CVector(0,0,0); var_50_object = Obj(); // 0x7d6 PushV
	var_50_object = var_19_object; // 0x7d7 Mov
	func_1760(var_50_object); // 0x7d8 NEW_2
	var_48_cvector = var_49_cvector; // 0x7d9 Mov
	func_2267(var_47_cvector, var_48_cvector); // 0x7db NEW_2
	var_31_cvector = var_47_cvector; // 0x7dc Mov
	CreateVectorVector(var_32_object); // 0x7de Func
	var_33_int = 1; // 0x7e0 MovI
	
Label_2017:
	var_60_string = "hit"; // 0x7e1 PushS
	var_61_int = var_60_string + var_33_int; // 0x7e2 Add
	GetGeometryLocator(var_61_int, var_34_bool, var_35_cvector, var_36_cvector); // 0x7e3 Func
	var_62_bool = var_34_bool == 0; // 0x7e5 Not
	if(var_62_bool == 0) goto Label_2024; // 0x7e6 JumpB
	goto Label_2033; // 0x7e7 Jump
	
Label_2033:
	size(var_37_int); // 0x7f1 ObjFunc
	var_63_int = var_37_int; // 0x7f3 Push
	if(var_63_int == 0) goto Label_2050; // 0x7f4 JumpB
	irand(var_38_int, var_37_int); // 0x7f5 Func
	get(var_39_cvector, var_38_int); // 0x7f7 ObjFunc
	var_64_object = Obj(); var_65_int = 0; var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); // 0x7f9 PushV
	var_64_object = var_19_object; // 0x7fa Mov
	var_65_int = var_20_int; // 0x7fb Mov
	var_66_float = var_21_float; // 0x7fc Mov
	var_67_cvector = var_39_cvector; // 0x7fd Mov
	var_68_cvector = -var_31_cvector; // 0x7fe Neg2
	func_2056(var_66_float, var_67_cvector, var_68_cvector); // 0x7ff NEW_2
	return 18; // 0x801 Return
	
Label_2050:
	var_32_object = 0; // 0x802 SetNull
	
Label_2051:
	var_109_object = Obj(); // 0x803 PushV
	var_109_object = var_19_object; // 0x804 Mov
	func_1944(var_109_object); // 0x805 NEW_2
	return 18; // 0x807 Return
	
Label_2024:
	var_110_int = var_36_cvector | var_31_cvector; // 0x7e8 Or
	var_111_float = 0.70711; // 0x7e9 PushF
	var_112_bool = var_110_int >= var_111_float; // 0x7ea GE
	if(var_112_bool == 0) goto Label_2030; // 0x7eb JumpB
	add(var_35_cvector); // 0x7ec ObjFunc
	
Label_2030:
	var_113_int = 1; // 0x7ee PushI
	var_33_int = var_33_int + var_113_int; // 0x7ef Add2
	goto Label_2017; // 0x7f0 Jump
}


func_2500(var_58_object)
{
	var_59_object = Obj(); // 0x9c5 PushV
	var_59_object = var_58_object; // 0x9c6 Mov
	TaskCall(6); // 0x9c7 TaskCall
	func_1598(var_59_object); // 0x9c8 NEW_2
	TaskReturn(); // 0x9c9 TaskReturn
	return 0; // 0x9cb Return
}


func_1234(var_0_object, var_4_bool, var_318_bool)
{
	var_319_object = Obj(); var_320_bool = 0; var_321_float = 0; var_322_cvector = CVector(0,0,0); var_323_cvector = CVector(0,0,0); var_324_object = Obj(); var_325_bool = 0; var_326_float = 0; var_327_cvector = CVector(0,0,0); var_328_cvector = CVector(0,0,0); // 0x4d2 PushV
	GetScene(var_324_object); // 0x4d3 Func
	var_325_bool = 0; // 0x4d5 MovB
	
Label_1238:
	var_329_cvector = CVector(0,0,0); var_330_object = Obj(); // 0x4d6 PushV
	var_330_object = var_0_object; // 0x4d7 MovT
	func_1760(var_330_object); // 0x4d8 NEW_2
	var_335_int = -var_329_cvector; // 0x4da Neg
	FindDirLength(var_326_float, var_335_int, var_326_float); // 0x4db Func
	var_336_bool = var_326_float < var_4_bool; // 0x4dd LT
	if(var_336_bool == 0) goto Label_1248; // 0x4de JumpB
	goto Label_1276; // 0x4df Jump
	
Label_1276:
	var_318_bool = var_325_bool; // 0x4fc Mov
	return 10; // 0x4fd Return
	
Label_1248:
	Face(var_0_object); // 0x4e0 Func
	var_337_string = "all"; // 0x4e2 PushS
	var_338_string = "bjump"; // 0x4e3 PushS
	PlayAnimation(var_337_string, var_338_string); // 0x4e4 Func
	GetPFPosition(var_327_cvector); // 0x4e6 TObjFunc
	GetPFPosition(var_328_cvector); // 0x4e8 Func
	WaitForAnimEnd(); // 0x4ea Func
	func_1322(var_328_cvector); // 0x4ed NEW_2
	StopAsync(); // 0x4ef Func
	var_339_cvector = CVector(0.0, 0.0, 0.0); // 0x4f1 PushVec
	SetSpeed(var_339_cvector); // 0x4f2 Func
	var_325_bool = 1; // 0x4f4 MovB
	var_340_bool = 0; // 0x4f5 PushV
	func_1190(var_328_cvector, var_340_bool); // 0x4f6 NEW_2
	var_341_bool = var_340_bool == 0; // 0x4f8 Not
	if(var_341_bool == 0) goto Label_1275; // 0x4f9 JumpB
	goto Label_1276; // 0x4fa Jump
	
Label_1275:
	goto Label_1238; // 0x4fb Jump
}


func_1746(var_426_string, var_427_int)
{
	var_428_int = 2; // 0x6d3 PushI
	var_429_bool = var_427_int == var_428_int; // 0x6d4 Eq
	if(var_429_bool == 0) goto Label_1753; // 0x6d5 JumpB
	var_426_string = "fire"; // 0x6d6 MovS
	return 0; // 0x6d7 Return
	
Label_1753:
	var_430_int = 1; // 0x6d9 PushI
	var_431_bool = var_427_int == var_430_int; // 0x6da Eq
	if(var_431_bool == 0) goto Label_1758; // 0x6db JumpB
	var_426_string = "bullet"; // 0x6dc MovS
	return 0; // 0x6dd Return
	
Label_1758:
	var_426_string = "phys"; // 0x6de MovS
	return 0; // 0x6df Return
}


func_2261(var_25_object)
{
	var_26_object = Obj(); var_27_object = Obj(); // 0x8d5 PushV
	self(var_27_object); // 0x8d6 Func
	var_25_object = var_27_object; // 0x8d8 Mov
	return 2; // 0x8d9 Return
}


func_471()
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0; // 0x1d7 PushV
	WaitForAnimEnd(); // 0x1d8 Func
	var_29_bool = 0; // 0x1da PushV
	func_2081(var_29_bool); // 0x1db NEW_2
	var_32_bool = var_29_bool == 0; // 0x1dd Not
	if(var_32_bool == 0) goto Label_480; // 0x1de JumpB
	return 14; // 0x1df Return
	
Label_480:
	var_33_int = 0; // 0x1e0 PushV
	func_2404(var_33_int); // 0x1e1 NEW_2
	var_22_int = var_33_int; // 0x1e2 Mov
	var_23_int = 0; // 0x1e4 MovI
	
Label_485:
	var_46_bool = 0; // 0x1e5 PushV
	var_46_bool = 0; // 0x1e6 MovB
	var_47_int = 5; // 0x1e7 PushI
	var_48_bool = var_23_int < var_47_int; // 0x1e8 LT
	if(var_48_bool == 0) goto Label_495; // 0x1e9 JumpB
	var_49_bool = 0; // 0x1ea PushV
	func_2081(var_49_bool); // 0x1eb NEW_2
	if(var_49_bool == 0) goto Label_495; // 0x1ed JumpB
	var_46_bool = 1; // 0x1ee MovB
	
Label_495:
	if(var_46_bool == 0) goto Label_547; // 0x1ef JumpB
	var_50_int = 3; // 0x1f0 PushI
	irand(var_24_int, var_50_int); // 0x1f1 Func
	var_51_int = 0; // 0x1f3 PushI
	var_52_bool = var_24_int == var_51_int; // 0x1f4 Eq
	if(var_52_bool == 0) goto Label_519; // 0x1f5 JumpB
	var_53_int = var_22_int; // 0x1f6 Push
	if(var_53_int == 0) goto Label_518; // 0x1f7 JumpB
	irand(var_25_int, var_22_int); // 0x1f8 Func
	var_54_string = "all"; // 0x1fa PushS
	var_55_string = ""; var_56_int = 0; // 0x1fb PushV
	var_56_int = var_25_int; // 0x1fc Mov
	func_2397(var_55_string, var_56_int); // 0x1fd NEW_2
	PlayAnimation(var_54_string, var_55_string); // 0x1ff Func
	WaitForAnimEnd(var_26_bool); // 0x201 Func
	var_57_bool = var_26_bool == 0; // 0x203 Not
	if(var_57_bool == 0) goto Label_518; // 0x204 JumpB
	goto Label_547; // 0x205 Jump
	
Label_547:
	ResetAAS(); // 0x223 Func
	return 14; // 0x225 Return
	
Label_518:
	goto Label_536; // 0x206 Jump
	
Label_536:
	var_58_bool = 0; // 0x218 PushV
	func_550(var_58_bool); // 0x219 NEW_2
	var_59_bool = var_58_bool == 0; // 0x21b Not
	if(var_59_bool == 0) goto Label_542; // 0x21c JumpB
	goto Label_547; // 0x21d Jump
	
Label_542:
	ResetAAS(); // 0x21e Func
	var_60_int = 1; // 0x220 PushI
	var_23_int = var_23_int + var_60_int; // 0x221 Add2
	goto Label_485; // 0x222 Jump
	
Label_519:
	var_61_int = 1; // 0x207 PushI
	var_62_bool = var_24_int == var_61_int; // 0x208 Eq
	if(var_62_bool == 0) goto Label_533; // 0x209 JumpB
	var_63_int = 4; // 0x20a PushI
	rand(var_27_float, var_63_int); // 0x20b Func
	var_64_int = 1; // 0x20d PushI
	var_65_int = var_27_float + var_64_int; // 0x20e Add
	Sleep(var_65_int, var_28_bool); // 0x20f Func
	var_66_bool = var_28_bool == 0; // 0x211 Not
	if(var_66_bool == 0) goto Label_532; // 0x212 JumpB
	goto Label_547; // 0x213 Jump
	
Label_532:
	goto Label_536; // 0x214 Jump
	
Label_533:
	var_67_int = var_23_int; // 0x215 Push
	if(var_67_int == 0) goto Label_536; // 0x216 JumpB
	goto Label_547; // 0x217 Jump
}


func_983(var_0_object, var_347_bool, var_348_float)
{
	var_349_int = 0; var_350_bool = 0; var_351_int = 0; var_352_string = ""; var_353_int = 0; var_354_bool = 0; var_355_int = 0; var_356_string = ""; // 0x3d7 PushV
	func_1322(var_356_string); // 0x3d9 NEW_2
	irand(var_353_int, var_356_string); // 0x3db Func
	var_357_int = 1; // 0x3dd PushI
	var_353_int = var_353_int + var_357_int; // 0x3de Add2
	Face(var_0_object); // 0x3df Func
	var_358_bool = 1; // 0x3e1 PushB
	SetAttackState(var_358_bool); // 0x3e2 Func
	func_2376(); // 0x3e5 NEW_2
	var_363_string = "all"; // 0x3e7 PushS
	var_364_string = "attack_begin"; // 0x3e8 PushS
	var_365_int = var_364_string + var_353_int; // 0x3e9 Add
	PlayAnimation(var_363_string, var_365_int); // 0x3ea Func
	WaitForAnimEnd(); // 0x3ec Func
	func_1290(var_355_int, var_356_string); // 0x3ef NEW_2
	var_381_bool = 0; var_382_object = Obj(); // 0x3f1 PushV
	var_382_object = var_0_object; // 0x3f2 MovT
	func_1920(var_381_bool, var_382_object); // 0x3f3 NEW_2
	var_383_bool = var_381_bool == 0; // 0x3f5 Not
	if(var_383_bool == 0) goto Label_1019; // 0x3f6 JumpB
	StopAsync(); // 0x3f7 Func
	var_347_bool = 0; // 0x3f9 MovB
	return 8; // 0x3fa Return
	
Label_1019:
	var_384_float = 0; var_385_int = 0; // 0x3fb PushV
	var_384_float = var_348_float; // 0x3fc Mov
	var_385_int = var_353_int; // 0x3fd Mov
	func_944(var_356_string, var_384_float, var_385_int); // 0x3fe NEW_2
	var_462_string = "all"; // 0x400 PushS
	var_463_string = "attack_middle"; // 0x401 PushS
	var_464_int = var_463_string + var_353_int; // 0x402 Add
	HasAnimation(var_354_bool, var_462_string, var_464_int); // 0x403 Func
	var_465_bool = var_354_bool; // 0x405 Push
	if(var_465_bool == 0) goto Label_1100; // 0x406 JumpB
	func_2376(); // 0x408 NEW_2
	var_466_string = "all"; // 0x40a PushS
	var_467_string = "attack_middle"; // 0x40b PushS
	var_468_int = var_467_string + var_353_int; // 0x40c Add
	PlayAnimation(var_466_string, var_468_int); // 0x40d Func
	WaitForAnimEnd(); // 0x40f Func
	func_1322(var_356_string); // 0x412 NEW_2
	var_469_bool = 0; var_470_object = Obj(); // 0x414 PushV
	var_470_object = var_0_object; // 0x415 MovT
	func_1920(var_469_bool, var_470_object); // 0x416 NEW_2
	var_471_bool = var_469_bool == 0; // 0x418 Not
	if(var_471_bool == 0) goto Label_1054; // 0x419 JumpB
	StopAsync(); // 0x41a Func
	var_347_bool = 0; // 0x41c MovB
	return 8; // 0x41d Return
	
Label_1054:
	var_472_float = 0; var_473_int = 0; // 0x41e PushV
	var_472_float = var_348_float; // 0x41f Mov
	var_473_int = var_353_int; // 0x420 Mov
	func_944(var_356_string, var_472_float, var_473_int); // 0x421 NEW_2
	var_355_int = 1; // 0x423 MovI
	
Label_1060:
	var_474_string = "attack_middle"; // 0x424 PushS
	var_475_int = var_474_string + var_353_int; // 0x425 Add
	var_476_string = "_"; // 0x426 PushS
	var_477_int = var_475_int + var_476_string; // 0x427 Add
	var_356_string = var_477_int + var_355_int; // 0x428 Add2
	var_478_string = "all"; // 0x429 PushS
	HasAnimation(var_354_bool, var_478_string, var_356_string); // 0x42a Func
	var_479_bool = var_354_bool == 0; // 0x42c Not
	if(var_479_bool == 0) goto Label_1071; // 0x42d JumpB
	goto Label_1100; // 0x42e Jump
	
Label_1100:
	var_480_bool = 0; // 0x44c PushB
	SetAttackState(var_480_bool); // 0x44d Func
	var_481_string = "all"; // 0x44f PushS
	var_482_string = "attack_end"; // 0x450 PushS
	var_483_int = var_482_string + var_353_int; // 0x451 Add
	PlayAnimation(var_481_string, var_483_int); // 0x452 Func
	var_484_bool = 0; // 0x454 PushV
	func_1336(var_484_bool); // 0x455 NEW_2
	if(var_484_bool == 0) goto Label_1118; // 0x457 JumpB
	var_485_bool = 0; var_486_float = 0; // 0x458 PushV
	var_486_float = 0.75; // 0x459 MovF
	func_1120(var_485_bool, var_486_float); // 0x45a NEW_2
	StopAsync(); // 0x45c Func
	
Label_1118:
	var_347_bool = 1; // 0x45e MovB
	return 8; // 0x45f Return
	
Label_1071:
	func_2376(); // 0x430 NEW_2
	var_494_string = "all"; // 0x432 PushS
	PlayAnimation(var_494_string, var_356_string); // 0x433 Func
	WaitForAnimEnd(); // 0x435 Func
	func_1322(var_356_string); // 0x438 NEW_2
	var_495_bool = 0; var_496_object = Obj(); // 0x43a PushV
	var_496_object = var_0_object; // 0x43b MovT
	func_1920(var_495_bool, var_496_object); // 0x43c NEW_2
	var_497_bool = var_495_bool == 0; // 0x43e Not
	if(var_497_bool == 0) goto Label_1092; // 0x43f JumpB
	StopAsync(); // 0x440 Func
	var_347_bool = 0; // 0x442 MovB
	return 8; // 0x443 Return
	
Label_1092:
	var_498_float = 0; var_499_int = 0; // 0x444 PushV
	var_498_float = var_348_float; // 0x445 Mov
	var_499_int = var_353_int; // 0x446 Mov
	func_944(var_356_string, var_498_float, var_499_int); // 0x447 NEW_2
	var_500_int = 1; // 0x449 PushI
	var_355_int = var_355_int + var_500_int; // 0x44a Add2
	goto Label_1060; // 0x44b Jump
}


func_2267(var_47_cvector, var_48_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x8db PushV
	var_57_int = var_48_cvector | var_48_cvector; // 0x8dc Or
	var_56_float = sqrt(var_57_int); // 0x8dd Sqrt2
	var_58_float = 0.0; // 0x8de PushF
	var_59_bool = var_56_float < var_58_float; // 0x8df LT
	if(var_59_bool == 0) goto Label_2275; // 0x8e0 JumpB
	var_47_cvector = CVector(0.0, 0.0, 0.0); // 0x8e1 MovV
	return 2; // 0x8e2 Return
	
Label_2275:
	var_47_cvector = var_48_cvector / var_48_cvector; // 0x8e3 Div2
	return 2; // 0x8e4 Return
}


func_1760(var_49_cvector)
{
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); // 0x6e0 PushV
	GetPosition(var_53_cvector); // 0x6e1 Func
	GetPosition(var_54_cvector); // 0x6e3 ObjFunc
	var_49_cvector = var_54_cvector - var_53_cvector; // 0x6e5 Sub2
	return 4; // 0x6e6 Return
}


func_2277(var_436_float, var_437_float, var_438_float)
{
	var_441_bool = var_437_float < var_438_float; // 0x8e6 LT
	if(var_441_bool == 0) goto Label_2282; // 0x8e7 JumpB
	var_436_float = var_437_float; // 0x8e8 Mov
	goto Label_2283; // 0x8e9 Jump
	
Label_2283:
	return 0; // 0x8eb Return
	
Label_2282:
	var_436_float = var_438_float; // 0x8ea Mov
}


func_1767(var_16_bool, var_17_object)
{
	var_18_bool = 0; var_19_bool = 0; // 0x6e7 PushV
	IsPlayerActor(var_17_object, var_19_bool); // 0x6e8 Func
	var_16_bool = var_19_bool; // 0x6ea Mov
	return 2; // 0x6eb Return
}


func_1772(var_39_bool, var_40_object, var_41_string)
{
	var_42_bool = 0; var_43_bool = 0; // 0x6ec PushV
	var_44_string = "HasProperty"; // 0x6ed PushS
	var_45_int = 2; // 0x6ee PushI
	var_46_bool = IsFuncExist(var_40_object, var_44_string, var_45_int); // 0x6ef FuncExist
	var_47_bool = var_46_bool == 0; // 0x6f0 Not
	if(var_47_bool == 0) goto Label_1780; // 0x6f1 JumpB
	var_39_bool = 0; // 0x6f2 MovB
	return 2; // 0x6f3 Return
	
Label_1780:
	HasProperty(var_41_string, var_43_bool); // 0x6f4 ObjFunc
	var_39_bool = var_43_bool; // 0x6f6 Mov
	return 2; // 0x6f7 Return
}


func_2284(var_49_float, var_50_float, var_51_float, var_52_float)
{
	var_53_bool = var_50_float < var_51_float; // 0x8ed LT
	if(var_53_bool == 0) goto Label_2289; // 0x8ee JumpB
	var_49_float = var_51_float; // 0x8ef Mov
	return 0; // 0x8f0 Return
	
Label_2289:
	var_54_bool = var_50_float > var_52_float; // 0x8f1 GT
	if(var_54_bool == 0) goto Label_2293; // 0x8f2 JumpB
	var_49_float = var_52_float; // 0x8f3 Mov
	return 0; // 0x8f4 Return
	
Label_2293:
	var_49_float = var_50_float; // 0x8f5 Mov
	return 0; // 0x8f6 Return
}


func_2295(var_96_int, var_97_string)
{
	var_98_int = 0; var_99_int = 0; // 0x8f7 PushV
	GetVariable(var_97_string, var_99_int); // 0x8f8 Func
	var_96_int = var_99_int; // 0x8fa Mov
	return 2; // 0x8fb Return
}


func_1784(var_31_bool, var_32_object, var_33_string, var_34_float, var_35_float, var_36_float)
{
	var_37_float = 0; var_38_float = 0; // 0x6f8 PushV
	var_39_bool = 0; var_40_object = Obj(); var_41_string = ""; // 0x6f9 PushV
	var_40_object = var_32_object; // 0x6fa Mov
	var_41_string = var_33_string; // 0x6fb Mov
	func_1772(var_39_bool, var_40_object, var_41_string); // 0x6fc NEW_2
	var_48_bool = var_39_bool == 0; // 0x6fe Not
	if(var_48_bool == 0) goto Label_1794; // 0x6ff JumpB
	var_31_bool = 0; // 0x700 MovB
	return 2; // 0x701 Return
	
Label_1794:
	GetProperty(var_33_string, var_38_float); // 0x702 ObjFunc
	var_49_float = 0; var_50_float = 0; var_51_float = 0; var_52_float = 0; // 0x704 PushV
	var_50_float = var_38_float + var_34_float; // 0x705 Add2
	var_51_float = var_35_float; // 0x706 Mov
	var_52_float = var_36_float; // 0x707 Mov
	func_2284(var_49_float, var_50_float, var_51_float, var_52_float); // 0x708 NEW_2
	SetProperty(var_33_string, var_49_float); // 0x70a ObjFunc
	var_31_bool = 1; // 0x70c MovB
	return 2; // 0x70d Return
}


func_2300(var_20_bool, var_21_object, var_22_float)
{
	var_23_bool = var_21_object == 0; // 0x8fd Not
	if(var_23_bool == 0) goto Label_2305; // 0x8fe JumpB
	var_20_bool = 0; // 0x8ff MovB
	return 0; // 0x900 Return
	
Label_2305:
	var_24_int = 0; // 0x901 PushI
	var_25_bool = var_22_float > var_24_int; // 0x902 GT
	if(var_25_bool == 0) goto Label_2312; // 0x903 JumpB
	var_26_int = 8; // 0x904 PushI
	SendWorldWndMessage(var_26_int); // 0x905 Func
	goto Label_2321; // 0x907 Jump
	
Label_2321:
	var_27_float = 0; // 0x911 PushV
	var_27_float = var_22_float; // 0x912 Mov
	func_2345(var_27_float); // 0x913 NEW_2
	var_31_bool = 0; var_32_object = Obj(); var_33_string = ""; var_34_float = 0; var_35_float = 0; var_36_float = 0; // 0x915 PushV
	var_32_object = var_21_object; // 0x916 Mov
	var_33_string = "reputation"; // 0x917 MovS
	var_34_float = var_22_float; // 0x918 Mov
	var_35_float = 0; // 0x919 MovI
	var_36_float = 1; // 0x91a MovI
	func_1784(var_31_bool, var_32_object, var_33_string, var_34_float, var_35_float, var_36_float); // 0x91b NEW_2
	var_20_bool = 1; // 0x91d MovB
	return 0; // 0x91e Return
	
Label_2312:
	var_55_int = 0; // 0x908 PushI
	var_56_bool = var_22_float < var_55_int; // 0x909 LT
	if(var_56_bool == 0) goto Label_2319; // 0x90a JumpB
	var_57_int = 9; // 0x90b PushI
	SendWorldWndMessage(var_57_int); // 0x90c Func
	goto Label_2321; // 0x90e Jump
	
Label_2319:
	var_20_bool = 0; // 0x90f MovB
	return 0; // 0x910 Return
}


func_1279(var_0_object, var_249_bool)
{
	var_250_bool = 0; var_251_bool = 0; // 0x4ff PushV
	var_252_string = "IsAttacking"; // 0x500 PushS
	var_253_int = 1; // 0x501 PushI
	var_254_bool = IsFuncExist(var_0_object, var_252_string, var_253_int); // 0x502 FuncExist
	if(var_254_bool == 0) goto Label_1288; // 0x503 JumpB
	IsAttacking(var_251_bool); // 0x504 TObjFunc
	var_249_bool = var_251_bool; // 0x506 Mov
	return 2; // 0x507 Return
	
Label_1288:
	var_249_bool = 0; // 0x508 MovB
	return 2; // 0x509 Return
}


