task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_int, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 1; // 0xa0 PushI
	if(var_17_int == 0) goto Label_379; // 0xa1 JumpB
	func_1455(); // 0xa3 NEW_2
	var_19_int = 28021; // 0xa5 PushI
	var_20_bool = var_15_cvector == var_19_int; // 0xa6 Eq
	if(var_20_bool == 0) goto Label_193; // 0xa7 JumpB
	var_21_object = Obj(); var_22_object = Obj(); // 0xa8 PushV
	var_21_object = var_1_object; // 0xa9 MovT
	var_22_object = var_0_object; // 0xaa MovT
	func_1646(); // 0xab NEW_2
	var_52_string = ""; // 0xad PushV
	var_52_string = "Neutral"; // 0xae MovS
	func_137(var_16_bool, var_52_string); // 0xaf NEW_2
	var_69_int = 526744; // 0xb1 PushI
	SetMessage(var_69_int); // 0xb2 TObjFunc
	ClearReplies(); // 0xb4 TObjFunc
	var_70_int = 528787; // 0xb6 PushI
	var_71_int = 30200; // 0xb7 PushI
	var_72_int = 30199; // 0xb8 PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0xb9 TObjFunc
	var_73_int = 528791; // 0xbb PushI
	var_74_int = 30200; // 0xbc PushI
	var_75_int = 30203; // 0xbd PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0xbe TObjFunc
	return 0; // 0xc0 Return
	
Label_193:
	var_76_int = 30200; // 0xc1 PushI
	var_77_bool = var_15_cvector == var_76_int; // 0xc2 Eq
	if(var_77_bool == 0) goto Label_216; // 0xc3 JumpB
	var_78_string = ""; // 0xc4 PushV
	var_78_string = "Neutral"; // 0xc5 MovS
	func_137(var_16_bool, var_78_string); // 0xc6 NEW_2
	var_79_int = 528788; // 0xc8 PushI
	SetMessage(var_79_int); // 0xc9 TObjFunc
	ClearReplies(); // 0xcb TObjFunc
	var_80_int = 528789; // 0xcd PushI
	var_81_int = 30202; // 0xce PushI
	var_82_int = 30201; // 0xcf PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0xd0 TObjFunc
	var_83_int = 541036; // 0xd2 PushI
	var_84_int = 30202; // 0xd3 PushI
	var_85_int = 43130; // 0xd4 PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0xd5 TObjFunc
	return 0; // 0xd7 Return
	
Label_216:
	var_86_int = 30202; // 0xd8 PushI
	var_87_bool = var_15_cvector == var_86_int; // 0xd9 Eq
	if(var_87_bool == 0) goto Label_239; // 0xda JumpB
	var_88_string = ""; // 0xdb PushV
	var_88_string = "Neutral"; // 0xdc MovS
	func_137(var_16_bool, var_88_string); // 0xdd NEW_2
	var_89_int = 528790; // 0xdf PushI
	SetMessage(var_89_int); // 0xe0 TObjFunc
	ClearReplies(); // 0xe2 TObjFunc
	var_90_int = 526745; // 0xe4 PushI
	var_91_int = 28023; // 0xe5 PushI
	var_92_int = 28022; // 0xe6 PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0xe7 TObjFunc
	var_93_int = 526752; // 0xe9 PushI
	var_94_int = 28030; // 0xea PushI
	var_95_int = 28029; // 0xeb PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0xec TObjFunc
	return 0; // 0xee Return
	
Label_239:
	var_96_int = 28030; // 0xef PushI
	var_97_bool = var_15_cvector == var_96_int; // 0xf0 Eq
	if(var_97_bool == 0) goto Label_262; // 0xf1 JumpB
	var_98_string = ""; // 0xf2 PushV
	var_98_string = "Neutral"; // 0xf3 MovS
	func_137(var_16_bool, var_98_string); // 0xf4 NEW_2
	var_99_int = 526753; // 0xf6 PushI
	SetMessage(var_99_int); // 0xf7 TObjFunc
	ClearReplies(); // 0xf9 TObjFunc
	var_100_int = 526754; // 0xfb PushI
	var_101_int = -1; // 0xfc PushI
	var_102_int = 28031; // 0xfd PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0xfe TObjFunc
	var_103_int = 528786; // 0x100 PushI
	var_104_int = -1; // 0x101 PushI
	var_105_int = 30198; // 0x102 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x103 TObjFunc
	return 0; // 0x105 Return
	
Label_262:
	var_106_int = 28023; // 0x106 PushI
	var_107_bool = var_15_cvector == var_106_int; // 0x107 Eq
	if(var_107_bool == 0) goto Label_285; // 0x108 JumpB
	var_108_string = ""; // 0x109 PushV
	var_108_string = "Neutral"; // 0x10a MovS
	func_137(var_16_bool, var_108_string); // 0x10b NEW_2
	var_109_int = 526746; // 0x10d PushI
	SetMessage(var_109_int); // 0x10e TObjFunc
	ClearReplies(); // 0x110 TObjFunc
	var_110_int = 528792; // 0x112 PushI
	var_111_int = 30206; // 0x113 PushI
	var_112_int = 30205; // 0x114 PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x115 TObjFunc
	var_113_int = 541037; // 0x117 PushI
	var_114_int = 43133; // 0x118 PushI
	var_115_int = 43132; // 0x119 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x11a TObjFunc
	return 0; // 0x11c Return
	
Label_285:
	var_116_int = 43133; // 0x11d PushI
	var_117_bool = var_15_cvector == var_116_int; // 0x11e Eq
	if(var_117_bool == 0) goto Label_308; // 0x11f JumpB
	var_118_string = ""; // 0x120 PushV
	var_118_string = "Neutral"; // 0x121 MovS
	func_137(var_16_bool, var_118_string); // 0x122 NEW_2
	var_119_int = 541038; // 0x124 PushI
	SetMessage(var_119_int); // 0x125 TObjFunc
	ClearReplies(); // 0x127 TObjFunc
	var_120_int = 541039; // 0x129 PushI
	var_121_int = 30206; // 0x12a PushI
	var_122_int = 43134; // 0x12b PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x12c TObjFunc
	var_123_int = 541040; // 0x12e PushI
	var_124_int = 30206; // 0x12f PushI
	var_125_int = 43135; // 0x130 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x131 TObjFunc
	return 0; // 0x133 Return
	
Label_308:
	var_126_int = 30206; // 0x134 PushI
	var_127_bool = var_15_cvector == var_126_int; // 0x135 Eq
	if(var_127_bool == 0) goto Label_326; // 0x136 JumpB
	var_128_string = ""; // 0x137 PushV
	var_128_string = "Neutral"; // 0x138 MovS
	func_137(var_16_bool, var_128_string); // 0x139 NEW_2
	var_129_int = 528793; // 0x13b PushI
	SetMessage(var_129_int); // 0x13c TObjFunc
	ClearReplies(); // 0x13e TObjFunc
	var_130_int = 526747; // 0x140 PushI
	var_131_int = 28025; // 0x141 PushI
	var_132_int = 28024; // 0x142 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x143 TObjFunc
	return 0; // 0x145 Return
	
Label_326:
	var_133_int = 28025; // 0x146 PushI
	var_134_bool = var_15_cvector == var_133_int; // 0x147 Eq
	if(var_134_bool == 0) goto Label_344; // 0x148 JumpB
	var_135_string = ""; // 0x149 PushV
	var_135_string = "Neutral"; // 0x14a MovS
	func_137(var_16_bool, var_135_string); // 0x14b NEW_2
	var_136_int = 526748; // 0x14d PushI
	SetMessage(var_136_int); // 0x14e TObjFunc
	ClearReplies(); // 0x150 TObjFunc
	var_137_int = 526749; // 0x152 PushI
	var_138_int = 28027; // 0x153 PushI
	var_139_int = 28026; // 0x154 PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x155 TObjFunc
	return 0; // 0x157 Return
	
Label_344:
	var_140_int = 28027; // 0x158 PushI
	var_141_bool = var_15_cvector == var_140_int; // 0x159 Eq
	if(var_141_bool == 0) goto Label_367; // 0x15a JumpB
	var_142_string = ""; // 0x15b PushV
	var_142_string = "Neutral"; // 0x15c MovS
	func_137(var_16_bool, var_142_string); // 0x15d NEW_2
	var_143_int = 526750; // 0x15f PushI
	SetMessage(var_143_int); // 0x160 TObjFunc
	ClearReplies(); // 0x162 TObjFunc
	var_144_int = 526751; // 0x164 PushI
	var_145_int = -1; // 0x165 PushI
	var_146_int = 28028; // 0x166 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x167 TObjFunc
	var_147_int = 528794; // 0x169 PushI
	var_148_int = -1; // 0x16a PushI
	var_149_int = 30207; // 0x16b PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x16c TObjFunc
	return 0; // 0x16e Return
	
Label_367:
	var_3_string = 1; // 0x16f TMovB
	var_150_bool = 0; // 0x170 PushV
	func_1620(var_150_bool); // 0x171 NEW_2
	if(var_150_bool == 0) goto Label_375; // 0x173 JumpB
	lshStopAnimation(); // 0x174 Func
	goto Label_377; // 0x176 Jump
	
Label_377:
	return 0; // 0x179 Return
	
Label_375:
	StopAnimation(); // 0x177 Func
	
Label_379:
	return 0; // 0x17b Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_int, var_13_object, var_14_cvector, var_15_bool)
{
	func_492(var_14_cvector, var_15_bool); // 0x188 NEW_2
	var_19_int = 0; var_20_object = Obj(); // 0x18a PushV
	var_20_object = var_15_bool; // 0x18b Mov
	TaskCall(0); // 0x18c TaskCall
	func_0(var_21_object, var_19_int, var_20_object); // 0x18d NEW_2
	TaskReturn(); // 0x18e TaskReturn
	var_178_object = Obj(); var_179_bool = 0; // 0x190 PushV
	var_178_object = var_15_bool; // 0x191 Mov
	var_179_bool = 0; // 0x192 MovB
	TaskCall(4); // 0x193 TaskCall
	func_699(var_178_object, var_179_bool); // 0x194 NEW_2
	TaskReturn(); // 0x195 TaskReturn
	return 0; // 0x197 Return
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_int, var_13_object, var_14_cvector, var_15_bool)
{
	return 0; // 0x199 Return
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_int, var_13_object, var_14_cvector, var_15_bool)
{
	func_492(var_14_cvector, var_15_bool); // 0x19c NEW_2
	var_19_object = Obj(); // 0x19e PushV
	var_19_object = var_15_bool; // 0x19f Mov
	func_1792(); // 0x1a0 NEW_2
	return 0; // 0x1a2 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_bool = 0; var_16_string = ""; var_17_string = ""; // 0x1a3 PushV
	var_16_string = "quest_k6_03"; // 0x1a4 MovS
	var_17_string = "abinos_unload"; // 0x1a5 MovS
	func_1600(var_15_bool, var_16_string, var_17_string); // 0x1a6 NEW_2
	Hold(); // 0x1a8 Func
	return 0; // 0x1aa Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_bool, var_12_int, var_13_object, var_14_cvector, var_15_bool)
{
	var_16_int = 10; // 0x1d6 PushI
	var_17_bool = var_15_bool == var_16_int; // 0x1d7 Eq
	if(var_17_bool == 0) goto Label_491; // 0x1d8 JumpB
	var_18_bool = 0; // 0x1d9 PushV
	func_454(var_13_object, var_14_cvector, var_15_bool, var_18_bool); // 0x1da NEW_2
	if(var_18_bool == 0) goto Label_485; // 0x1dc JumpB
	var_31_bool = var_2_object == 0; // 0x1dd Not
	if(var_31_bool == 0) goto Label_484; // 0x1de JumpB
	var_32_object = Obj(); // 0x1df PushV
	var_32_object = var_4_bool; // 0x1e0 MovT
	func_1444(var_32_object); // 0x1e1 NEW_2
	var_2_object = 1; // 0x1e3 TMovB
	
Label_484:
	goto Label_491; // 0x1e4 Jump
	
Label_491:
	return 0; // 0x1eb Return
	
Label_485:
	var_39_object = var_2_object; // 0x1e5 PushT
	if(var_39_object == 0) goto Label_491; // 0x1e6 JumpB
	var_40_string = "head"; // 0x1e7 PushS
	UnlookAsync(var_40_string); // 0x1e8 Func
	var_2_object = 0; // 0x1ea TMovB
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_object, var_14_cvector, var_15_bool)
{
	return 0; // 0x26c Return
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_object, var_14_cvector, var_15_bool)
{
	func_691(var_15_bool); // 0x26f NEW_2
	var_16_object = Obj(); // 0x271 PushV
	var_16_object = var_15_bool; // 0x272 Mov
	func_1792(); // 0x273 NEW_2
	return 0; // 0x275 Return
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_bool = 0; var_16_string = ""; var_17_string = ""; // 0x276 PushV
	var_16_string = "quest_k6_03"; // 0x277 MovS
	var_17_string = "abinos_unload"; // 0x278 MovS
	func_1600(var_15_bool, var_16_string, var_17_string); // 0x279 NEW_2
	Hold(); // 0x27b Func
	return 0; // 0x27d Return
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_bool = 0; var_16_string = ""; var_17_string = ""; // 0x2c7 PushV
	var_16_string = "quest_k6_03"; // 0x2c8 MovS
	var_17_string = "albinos_retreated"; // 0x2c9 MovS
	func_1600(var_15_bool, var_16_string, var_17_string); // 0x2ca NEW_2
	Hold(); // 0x2cc Func
	return 0; // 0x2ce Return
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool, var_15_int)
{
	var_16_int = 100; // 0x2d0 PushI
	var_17_bool = var_15_int == var_16_int; // 0x2d1 Eq
	if(var_17_bool == 0) goto Label_727; // 0x2d2 JumpB
	func_1727(); // 0x2d4 NEW_2
	goto Label_731; // 0x2d6 Jump
	
Label_731:
	return 0; // 0x2db Return
	
Label_727:
	var_102_int = 0; // 0x2d7 PushV
	var_102_int = var_15_int; // 0x2d8 Mov
	func_835(var_13_cvector, var_14_bool, var_15_int, var_102_int); // 0x2d9 NEW_2
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool, var_15_object)
{
	func_887(var_15_object); // 0x380 NEW_2
	var_17_object = Obj(); // 0x382 PushV
	var_17_object = var_15_object; // 0x383 Mov
	func_1792(); // 0x384 NEW_2
	return 0; // 0x386 Return
}


task_5_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float)
{
	return 0; // 0x416 Return
}


task_5_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_string)
{
	return 0; // 0x418 Return
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool, var_15_object)
{
	return 0; // 0x41a Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float)
{
	var_19_object = Obj(); var_20_int = 0; var_21_float = 0; // 0x6e2 PushV
	var_19_object = var_15_object; // 0x6e3 Mov
	var_20_int = var_16_int; // 0x6e4 Mov
	var_21_float = var_17_float; // 0x6e5 Mov
	func_1241(var_19_object, var_20_int, var_21_float); // 0x6e6 NEW_2
	return 0; // 0x6e8 Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_int = 0; var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); // 0x6ea PushV
	var_21_object = var_15_object; // 0x6eb Mov
	var_22_int = var_16_int; // 0x6ec Mov
	var_23_float = var_17_float; // 0x6ed Mov
	var_24_cvector = var_19_cvector; // 0x6ee Mov
	var_25_cvector = var_20_cvector; // 0x6ef Mov
	func_1309(var_23_float, var_24_cvector, var_25_cvector); // 0x6f0 NEW_2
	return 0; // 0x6f2 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_string)
{
	var_17_float = 0; var_18_float = 0; // 0x6f3 PushV
	var_19_string = "health"; // 0x6f4 PushS
	var_20_bool = var_16_string == var_19_string; // 0x6f5 Eq
	if(var_20_bool == 0) goto Label_1791; // 0x6f6 JumpB
	var_21_string = "health"; // 0x6f7 PushS
	GetProperty(var_21_string, var_18_float); // 0x6f8 Func
	var_22_int = 0; // 0x6fa PushI
	var_23_bool = var_18_float <= var_22_int; // 0x6fb LE
	if(var_23_bool == 0) goto Label_1791; // 0x6fc JumpB
	SignalDeath(var_15_object); // 0x6fd Func
	
Label_1791:
	return 2; // 0x6ff Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_object = Obj(); // 0x701 PushV
	var_17_object = var_15_object; // 0x702 Mov
	func_1085(var_16_bool, var_17_object); // 0x703 NEW_2
	if(var_16_bool == 0) goto Label_1803; // 0x705 JumpB
	var_20_bool = 0; var_21_object = Obj(); var_22_float = 0; // 0x706 PushV
	var_21_object = var_15_object; // 0x707 Mov
	var_22_float = -0.1; // 0x708 MovF
	func_1545(var_20_bool, var_21_object, var_22_float); // 0x709 NEW_2
	
Label_1803:
	var_58_object = Obj(); // 0x70b PushV
	var_58_object = var_15_object; // 0x70c Mov
	func_1753(var_58_object); // 0x70d NEW_2
	return 0; // 0x70f Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x250 PushV
	GetScene(var_16_object); // 0x251 Func
	var_17_object = Obj(); // 0x253 PushV
	func_1503(var_17_object); // 0x254 NEW_2
	RemoveStationaryActor(var_17_object); // 0x256 ObjFunc
	var_20_string = "pt_k6q03_albinos_path"; // 0x258 PushS
	GetVariable(var_20_string, var_20_string); // 0x259 Func
	var_21_int = -1; // 0x25b PushI
	var_22_bool = var_1_object != var_21_int; // 0x25c Neq
	if(var_22_bool == 0) goto Label_612; // 0x25d JumpB
	var_23_bool = 0; var_24_string = ""; var_25_int = 0; var_26_bool = 0; // 0x25e PushV
	var_24_string = "pt_k6q03_albinos_path"; // 0x25f MovS
	var_25_int = var_1_object; // 0x260 MovT
	var_26_bool = 1; // 0x261 MovB
	func_638(var_23_bool, var_24_string, var_25_int, var_26_bool); // 0x262 NEW_2
	
Label_612:
	TaskCall(2); // 0x265 TaskCall
	func_380(); // 0x266 NEW_2
	TaskReturn(); // 0x267 TaskReturn
	return 2; // 0x269 Return
}


func_0(var_0_object, var_19_int, var_20_object)
{
	var_22_object = Obj(); var_23_bool = 0; var_24_int = 0; var_25_bool = 0; var_26_object = Obj(); var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x0 PushV
	var_0_object = var_20_object; // 0x1 TMov
	var_30_bool = 0; var_31_object = Obj(); var_32_float = 0; // 0x2 PushV
	var_31_object = var_20_object; // 0x3 Mov
	var_32_float = 70.0; // 0x4 MovF
	func_1328(var_31_object, var_32_float); // 0x5 NEW_2
	var_76_bool = var_30_bool == 0; // 0x7 Not
	if(var_76_bool == 0) goto Label_11; // 0x8 JumpB
	var_19_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_26_object); // 0xb Func
	var_77_int = 0; // 0xd PushV
	func_1614(var_77_int); // 0xe NEW_2
	SetNPCName(var_77_int); // 0x10 ObjFunc
	var_78_int = 0; // 0x12 PushV
	func_1612(var_78_int); // 0x13 NEW_2
	SetNPCDescription(var_78_int); // 0x15 ObjFunc
	var_79_string = ""; // 0x17 PushV
	func_1616(var_79_string); // 0x18 NEW_2
	SetPhoto(var_79_string); // 0x1a ObjFunc
	var_80_string = ""; // 0x1c PushV
	func_1618(var_80_string); // 0x1d NEW_2
	SetPhoto2(var_80_string); // 0x1f ObjFunc
	var_81_int = 0; // 0x21 PushV
	func_1710(var_81_int); // 0x22 NEW_2
	SetPlayerName(var_81_int); // 0x24 ObjFunc
	var_28_int = -1; // 0x26 MovI
	IsOverrideActive(var_27_bool); // 0x27 Func
	var_89_bool = var_27_bool; // 0x29 Push
	if(var_89_bool == 0) goto Label_45; // 0x2a JumpB
	var_19_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_26_object); // 0x2d Func
	var_90_object = Obj(); var_91_object = Obj(); // 0x2f PushV
	var_90_object = var_20_object; // 0x30 Mov
	var_91_object = var_26_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_92_object, var_93_object, var_94_string, var_95_bool, var_90_object, var_91_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_29_bool); // 0x36 ObjFunc
	
Label_56:
	var_170_bool = var_29_bool == 0; // 0x38 Not
	if(var_170_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_29_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_171_object = Obj(); // 0x3f PushV
	var_171_object = var_20_object; // 0x40 Mov
	func_1396(); // 0x41 NEW_2
	StopDialog(var_26_object); // 0x43 Func
	GetReturnValue(var_28_int); // 0x45 ObjFunc
	var_19_int = var_28_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1537(var_165_float, var_166_cvector, var_167_cvector)
{
	var_168_int = var_166_cvector | var_167_cvector; // 0x602 Or
	var_169_int = var_166_cvector | var_166_cvector; // 0x603 Or
	var_170_int = var_167_cvector | var_167_cvector; // 0x604 Or
	var_171_float = var_169_int * var_170_int; // 0x605 Mult
	var_172_float = sqrt(var_171_float); // 0x606 Sqrt
	var_165_float = var_168_int / var_168_int; // 0x607 Div2
	return 0; // 0x608 Return
}


func_1413(var_154_string)
{
	var_155_bool = 0; var_156_float = 0; var_157_float = 0; var_158_bool = 0; var_159_float = 0; var_160_float = 0; // 0x585 PushV
	lshHasAnimation(var_158_bool, var_154_string); // 0x586 Func
	var_161_bool = var_158_bool; // 0x588 Push
	if(var_161_bool == 0) goto Label_1424; // 0x589 JumpB
	lshGetAnimTimes(var_154_string, var_159_float, var_160_float); // 0x58a Func
	var_162_bool = 0; // 0x58c PushB
	lshPlayAnimation(var_159_float, var_160_float, var_162_bool); // 0x58d Func
	goto Label_1428; // 0x58f Jump
	
Label_1428:
	return 6; // 0x594 Return
	
Label_1424:
	var_163_string = "Can't find lsh animation : "; // 0x590 PushS
	var_164_int = var_163_string + var_154_string; // 0x591 Add
	Trace(var_164_int); // 0x592 Func
}


func_1669(var_113_object)
{
	var_114_object = Obj(); var_115_object = Obj(); // 0x685 PushV
	GetDiaryRoot(var_115_object); // 0x686 Func
	var_116_bool = var_115_object == 0; // 0x688 Not
	if(var_116_bool == 0) goto Label_1679; // 0x689 JumpB
	var_117_string = "Can't retrieve diary root"; // 0x68a PushS
	Trace(var_117_string); // 0x68b Func
	var_113_object = 0; // 0x68d MovB
	return 2; // 0x68e Return
	
Label_1679:
	var_113_object = var_115_object; // 0x68f Mov
	return 2; // 0x690 Return
}


func_903(var_0_object, var_154_bool)
{
	var_155_cvector = CVector(0,0,0); var_156_cvector = CVector(0,0,0); var_157_cvector = CVector(0,0,0); var_158_cvector = CVector(0,0,0); // 0x387 PushV
	GetDirection(var_157_cvector); // 0x388 Func
	var_159_cvector = CVector(0,0,0); var_160_object = Obj(); // 0x38a PushV
	var_160_object = var_0_object; // 0x38b MovT
	func_1070(var_160_object); // 0x38c NEW_2
	var_158_cvector = var_159_cvector; // 0x38d Mov
	var_165_float = 0; var_166_cvector = CVector(0,0,0); var_167_cvector = CVector(0,0,0); // 0x38f PushV
	var_166_cvector = var_157_cvector; // 0x390 Mov
	var_167_cvector = var_158_cvector; // 0x391 Mov
	func_1537(var_165_float, var_166_cvector, var_167_cvector); // 0x392 NEW_2
	var_173_float = -0.34202; // 0x394 PushF
	var_154_bool = var_165_float >= var_173_float; // 0x395 GE2
	return 4; // 0x396 Return
}


func_137(var_2_object, var_128_string)
{
	var_129_bool = 0; // 0x8a PushV
	func_1620(var_129_bool); // 0x8b NEW_2
	var_130_bool = var_129_bool == 0; // 0x8d Not
	if(var_130_bool == 0) goto Label_144; // 0x8e JumpB
	return 0; // 0x8f Return
	
Label_144:
	var_131_bool = var_128_string == var_2_object; // 0x90 Eq
	if(var_131_bool == 0) goto Label_147; // 0x91 JumpB
	return 0; // 0x92 Return
	
Label_147:
	var_132_string = ""; var_133_bool = 0; // 0x93 PushV
	var_132_string = var_128_string; // 0x94 Mov
	var_134_string = ""; // 0x95 PushS
	var_135_bool = var_128_string == var_134_string; // 0x96 Eq
	if(var_135_bool == 0) goto Label_154; // 0x97 JumpB
	var_133_bool = 0; // 0x98 MovB
	goto Label_155; // 0x99 Jump
	
Label_155:
	func_1429(var_132_string, var_133_bool); // 0x9b NEW_2
	var_2_object = var_128_string; // 0x9d TMov
	return 0; // 0x9e Return
	
Label_154:
	var_133_bool = 1; // 0x9a MovB
}


func_1545(var_20_bool, var_21_object, var_22_float)
{
	var_23_bool = var_21_object == 0; // 0x60a Not
	if(var_23_bool == 0) goto Label_1550; // 0x60b JumpB
	var_20_bool = 0; // 0x60c MovB
	return 0; // 0x60d Return
	
Label_1550:
	var_24_int = 0; // 0x60e PushI
	var_25_bool = var_22_float > var_24_int; // 0x60f GT
	if(var_25_bool == 0) goto Label_1557; // 0x610 JumpB
	var_26_int = 8; // 0x611 PushI
	SendWorldWndMessage(var_26_int); // 0x612 Func
	goto Label_1566; // 0x614 Jump
	
Label_1566:
	var_27_float = 0; // 0x61e PushV
	var_27_float = var_22_float; // 0x61f Mov
	func_1590(var_27_float); // 0x620 NEW_2
	var_31_bool = 0; var_32_object = Obj(); var_33_string = ""; var_34_float = 0; var_35_float = 0; var_36_float = 0; // 0x622 PushV
	var_32_object = var_21_object; // 0x623 Mov
	var_33_string = "reputation"; // 0x624 MovS
	var_34_float = var_22_float; // 0x625 Mov
	var_35_float = 0; // 0x626 MovI
	var_36_float = 1; // 0x627 MovI
	func_1102(var_31_bool, var_32_object, var_33_string, var_34_float, var_35_float, var_36_float); // 0x628 NEW_2
	var_20_bool = 1; // 0x62a MovB
	return 0; // 0x62b Return
	
Label_1557:
	var_55_int = 0; // 0x615 PushI
	var_56_bool = var_22_float < var_55_int; // 0x616 LT
	if(var_56_bool == 0) goto Label_1564; // 0x617 JumpB
	var_57_int = 9; // 0x618 PushI
	SendWorldWndMessage(var_57_int); // 0x619 Func
	goto Label_1566; // 0x61b Jump
	
Label_1564:
	var_20_bool = 0; // 0x61c MovB
	return 0; // 0x61d Return
}


func_1682(var_104_bool, var_105_object, var_106_int)
{
	var_107_object = Obj(); var_108_object = Obj(); var_109_int = 0; var_110_object = Obj(); var_111_object = Obj(); var_112_int = 0; // 0x692 PushV
	var_113_object = Obj(); // 0x693 PushV
	func_1669(var_113_object); // 0x694 NEW_2
	var_110_object = var_113_object; // 0x695 Mov
	Find(var_106_int, var_111_object); // 0x697 ObjFunc
	var_118_bool = var_111_object == 0; // 0x699 Not
	if(var_118_bool == 0) goto Label_1697; // 0x69a JumpB
	var_119_string = "Can't find diary parent with id: "; // 0x69b PushS
	var_120_int = var_119_string + var_106_int; // 0x69c Add
	Trace(var_120_int); // 0x69d Func
	var_104_bool = 0; // 0x69f MovB
	return 6; // 0x6a0 Return
	
Label_1697:
	AddChild(var_105_object); // 0x6a1 ObjFunc
	var_121_int = 7; // 0x6a3 PushI
	SendWorldWndMessage(var_121_int); // 0x6a4 Func
	GetCategory(var_112_int); // 0x6a6 ObjFunc
	SetDiarySection(var_112_int); // 0x6a8 Func
	var_104_bool = 0; // 0x6aa MovB
	return 6; // 0x6ab Return
}


func_1429(var_132_string, var_133_bool)
{
	var_136_bool = 0; var_137_float = 0; var_138_float = 0; var_139_bool = 0; var_140_float = 0; var_141_float = 0; // 0x595 PushV
	lshHasAnimation(var_139_bool, var_132_string); // 0x596 Func
	var_142_bool = var_139_bool; // 0x598 Push
	if(var_142_bool == 0) goto Label_1439; // 0x599 JumpB
	lshGetAnimTimes(var_132_string, var_140_float, var_141_float); // 0x59a Func
	lshPlayAnimation(var_140_float, var_141_float, var_133_bool); // 0x59c Func
	goto Label_1443; // 0x59e Jump
	
Label_1443:
	return 6; // 0x5a3 Return
	
Label_1439:
	var_143_string = "Can't find lsh animation : "; // 0x59f PushS
	var_144_int = var_143_string + var_132_string; // 0x5a0 Add
	Trace(var_144_int); // 0x5a1 Func
}


func_919(var_59_object)
{
	var_60_object = Obj(); // 0x398 PushV
	var_60_object = var_59_object; // 0x399 Mov
	func_928(var_60_object); // 0x39a NEW_2
	
Label_924:
	Hold(); // 0x39c Func
	goto Label_924; // 0x39e Jump
}


func_1051(var_65_string, var_66_int)
{
	var_67_int = 2; // 0x41c PushI
	var_68_bool = var_66_int == var_67_int; // 0x41d Eq
	if(var_68_bool == 0) goto Label_1058; // 0x41e JumpB
	var_65_string = "fire"; // 0x41f MovS
	return 0; // 0x420 Return
	
Label_1058:
	var_69_int = 1; // 0x422 PushI
	var_70_bool = var_66_int == var_69_int; // 0x423 Eq
	if(var_70_bool == 0) goto Label_1063; // 0x424 JumpB
	var_65_string = "bullet"; // 0x425 MovS
	return 0; // 0x426 Return
	
Label_1063:
	var_65_string = "phys"; // 0x427 MovS
	return 0; // 0x428 Return
}


func_1309(var_21_object, var_24_cvector, var_25_cvector)
{
	var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj(); // 0x51d PushV
	GetScene(var_28_object); // 0x51e Func
	var_30_string = "scripted"; // 0x520 PushS
	var_31_string = "blood_dir.xml"; // 0x521 PushS
	AddActorByType(var_29_object, var_30_string, var_28_object, var_24_cvector, var_25_cvector, var_31_string); // 0x522 Func
	var_32_object = Obj(); // 0x524 PushV
	var_32_object = var_21_object; // 0x525 Mov
	func_1197(var_32_object); // 0x526 NEW_2
	return 4; // 0x528 Return
}


func_928(var_60_object)
{
	var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_string = ""; var_66_object = Obj(); var_67_bool = 0; var_68_bool = 0; var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_string = ""; var_76_object = Obj(); var_77_bool = 0; var_78_bool = 0; var_79_float = 0; var_80_cvector = CVector(0,0,0); // 0x3a0 PushV
	var_81_bool = var_60_object == 0; // 0x3a1 NullEq
	if(var_81_bool == 0) goto Label_936; // 0x3a2 JumpB
	var_82_string = ""; // 0x3a3 PushV
	var_82_string = "fdie"; // 0x3a4 MovS
	func_1019(var_82_string); // 0x3a5 NEW_2
	goto Label_1018; // 0x3a7 Jump
	
Label_1018:
	return 20; // 0x3fa Return
	
Label_936:
	GetPosition(var_71_cvector); // 0x3a8 ObjFunc
	GetPosition(var_72_cvector); // 0x3aa Func
	GetDirection(var_73_cvector); // 0x3ac Func
	var_74_cvector = var_72_cvector - var_71_cvector; // 0x3ae Sub2
	var_114_float = GetByIndex(var_74_cvector, 0); // 0x3af PushE
	var_115_float = GetByIndex(var_73_cvector, 0); // 0x3b0 PushE
	var_116_float = var_114_float * var_115_float; // 0x3b1 Mult
	var_117_float = GetByIndex(var_74_cvector, 2); // 0x3b2 PushE
	var_118_float = GetByIndex(var_73_cvector, 2); // 0x3b3 PushE
	var_119_float = var_117_float * var_118_float; // 0x3b4 Mult
	var_120_int = var_116_float + var_119_float; // 0x3b5 Add
	var_121_int = 0; // 0x3b6 PushI
	var_122_bool = var_120_int >= var_121_int; // 0x3b7 GE
	if(var_122_bool == 0) goto Label_955; // 0x3b8 JumpB
	var_75_string = "fdie"; // 0x3b9 MovS
	goto Label_956; // 0x3ba Jump
	
Label_956:
	RemoveRTEnvelope(); // 0x3bc Func
	SetDeathState(); // 0x3be Func
	Stop(); // 0x3c0 Func
	StopAsync(); // 0x3c2 Func
	var_76_object = var_60_object; // 0x3c4 Mov
	var_123_string = "GetScriptProperty"; // 0x3c5 PushS
	var_124_int = 2; // 0x3c6 PushI
	var_125_bool = IsFuncExist(var_60_object, var_123_string, var_124_int); // 0x3c7 FuncExist
	if(var_125_bool == 0) goto Label_980; // 0x3c8 JumpB
	var_126_string = "Owner"; // 0x3c9 PushS
	HasScriptProperty(var_77_bool, var_126_string); // 0x3ca ObjFunc
	var_127_bool = var_77_bool; // 0x3cc Push
	if(var_127_bool == 0) goto Label_980; // 0x3cd JumpB
	var_128_string = "Owner"; // 0x3ce PushS
	GetScriptProperty(var_76_object, var_128_string); // 0x3cf ObjFunc
	var_129_bool = var_76_object == 0; // 0x3d1 NullEq
	if(var_129_bool == 0) goto Label_980; // 0x3d2 JumpB
	var_76_object = var_60_object; // 0x3d3 Mov
	
Label_980:
	var_130_string = "@GetEyesHeight"; // 0x3d4 PushS
	var_131_int = 1; // 0x3d5 PushI
	var_132_bool = IsFuncExist(var_76_object, var_130_string, var_131_int); // 0x3d6 FuncExist
	if(var_132_bool == 0) goto Label_995; // 0x3d7 JumpB
	GetEyesHeight(var_79_float); // 0x3d8 ObjFunc
	var_80_cvector = CVector(0.0, 0.0, 0.0); // 0x3da MovV
	var_133_float = GetByIndex(var_80_cvector, 1); // 0x3db PushE
	var_133_float = var_79_float; // 0x3dc Mov
	SetByIndex(var_80_cvector, 1) = var_133_float; // 0x3dd PopE
	var_134_string = "head"; // 0x3de PushS
	LookAsync(var_60_object, var_134_string, var_80_cvector); // 0x3df Func
	var_78_bool = 1; // 0x3e1 MovB
	goto Label_996; // 0x3e2 Jump
	
Label_996:
	var_135_string = ""; // 0x3e4 PushV
	var_135_string = var_75_string; // 0x3e5 Mov
	func_1462(var_135_string); // 0x3e6 NEW_2
	var_136_string = "all"; // 0x3e8 PushS
	PlayAnimation(var_136_string, var_75_string); // 0x3e9 Func
	WaitForAnimEnd(); // 0x3eb Func
	var_137_bool = var_78_bool; // 0x3ed Push
	if(var_137_bool == 0) goto Label_1012; // 0x3ee JumpB
	StopAsync(); // 0x3ef Func
	var_138_string = "head"; // 0x3f1 PushS
	UnlookAsync(var_138_string); // 0x3f2 Func
	
Label_1012:
	var_139_string = "all"; // 0x3f4 PushS
	LockAnimationEnd(var_139_string, var_75_string); // 0x3f5 Func
	RemoveEnvelope(); // 0x3f7 Func
	var_76_object = 0; // 0x3f9 SetNull
	
Label_995:
	var_78_bool = 0; // 0x3e3 MovB
	
Label_955:
	var_75_string = "bdie"; // 0x3bb MovS
}


func_1444(var_32_object)
{
	var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_float = 0; var_36_cvector = CVector(0,0,0); // 0x5a4 PushV
	GetEyesHeight(var_35_float); // 0x5a5 ObjFunc
	var_36_cvector = CVector(0.0, 0.0, 0.0); // 0x5a7 MovV
	var_37_float = GetByIndex(var_36_cvector, 1); // 0x5a8 PushE
	var_37_float = var_35_float; // 0x5a9 Mov
	SetByIndex(var_36_cvector, 1) = var_37_float; // 0x5aa PopE
	var_38_string = "head"; // 0x5ab PushS
	LookAsync(var_32_object, var_38_string, var_36_cvector); // 0x5ac Func
	return 4; // 0x5ae Return
}


func_1065(var_174_cvector)
{
	var_175_cvector = CVector(0,0,0); var_176_cvector = CVector(0,0,0); // 0x429 PushV
	GetPosition(var_176_cvector); // 0x42a Func
	var_174_cvector = var_176_cvector; // 0x42c Mov
	return 2; // 0x42d Return
}


func_427(var_0_object, var_1_object, var_2_object, var_3_string, var_61_object, var_62_float, var_63_float)
{
	var_64_bool = 0; // 0x1ac PushV
	func_1323(var_64_bool); // 0x1ad NEW_2
	var_67_bool = var_64_bool == 0; // 0x1af Not
	if(var_67_bool == 0) goto Label_434; // 0x1b0 JumpB
	return 0; // 0x1b1 Return
	
Label_434:
	var_68_string = "player"; // 0x1b2 PushS
	FindActor(var_61_object, var_68_string); // 0x1b3 Func
	var_2_object = 0; // 0x1b5 TMovB
	var_3_string = 0; // 0x1b6 TMovB
	var_0_object = var_62_float; // 0x1b7 TMov
	var_1_object = var_63_float; // 0x1b8 TMov
	var_69_int = 10; // 0x1b9 PushI
	var_70_float = 1.0; // 0x1ba PushF
	SetTimer(var_69_int, var_70_float); // 0x1bb Func
	func_506(); // 0x1be NEW_2
	var_122_bool = var_3_string == 0; // 0x1c0 Not
	if(var_122_bool == 0) goto Label_453; // 0x1c1 JumpB
	var_123_int = 10; // 0x1c2 PushI
	KillTimer(var_123_int); // 0x1c3 Func
	
Label_453:
	return 0; // 0x1c5 Return
}


func_1323(var_64_bool)
{
	var_65_bool = 0; var_66_bool = 0; // 0x52b PushV
	IsLoaded(var_66_bool); // 0x52c Func
	var_64_bool = var_66_bool; // 0x52e Mov
	return 2; // 0x52f Return
}


func_1580(var_95_float)
{
	var_96_object = Obj(); var_97_object = Obj(); // 0x62c PushV
	CreateFloatVector(var_97_object); // 0x62d Func
	add(var_95_float); // 0x62f ObjFunc
	var_98_int = 15; // 0x631 PushI
	SendWorldWndMessage(var_98_int, var_97_object); // 0x632 Func
	return 2; // 0x634 Return
}


func_1710(var_81_int)
{
	var_82_int = 0; var_83_int = 0; // 0x6ae PushV
	var_84_string = "branch"; // 0x6af PushS
	GetVariable(var_84_string, var_83_int); // 0x6b0 Func
	var_85_int = 0; // 0x6b2 PushI
	var_86_bool = var_83_int == var_85_int; // 0x6b3 Eq
	if(var_86_bool == 0) goto Label_1720; // 0x6b4 JumpB
	var_81_int = 1; // 0x6b5 MovI
	return 2; // 0x6b6 Return
	
Label_1720:
	var_87_int = 1; // 0x6b8 PushI
	var_88_bool = var_83_int == var_87_int; // 0x6b9 Eq
	if(var_88_bool == 0) goto Label_1725; // 0x6ba JumpB
	var_81_int = 2; // 0x6bb MovI
	return 2; // 0x6bc Return
	
Label_1725:
	var_81_int = 3; // 0x6bd MovI
	return 2; // 0x6be Return
}


func_1455()
{
	var_18_bool = 0; // 0x5af PushV
	func_1620(var_18_bool); // 0x5b0 NEW_2
	if(var_18_bool == 0) goto Label_1461; // 0x5b2 JumpB
	lshStopSpeech(); // 0x5b3 Func
	
Label_1461:
	return 0; // 0x5b5 Return
}


func_1328(var_30_bool, var_32_float)
{
	var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_bool = 0; var_41_bool = 0; var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_bool = 0; var_50_bool = 0; // 0x530 PushV
	GetPosition(var_43_cvector); // 0x531 ObjFunc
	GetEyesHeight(var_42_float); // 0x533 ObjFunc
	var_51_float = GetByIndex(var_43_cvector, 1); // 0x535 PushE
	var_51_float = var_51_float + var_42_float; // 0x536 Add2
	SetByIndex(var_43_cvector, 1) = var_51_float; // 0x537 PopE
	GetPosition(var_44_cvector); // 0x538 Func
	GetEyesHeight(var_42_float); // 0x53a Func
	var_52_float = GetByIndex(var_44_cvector, 1); // 0x53c PushE
	var_52_float = var_52_float + var_42_float; // 0x53d Add2
	SetByIndex(var_44_cvector, 1) = var_52_float; // 0x53e PopE
	var_45_cvector = var_43_cvector - var_44_cvector; // 0x53f Sub2
	var_53_float = GetByIndex(var_45_cvector, 1); // 0x540 PushE
	var_53_float = 0; // 0x541 MovI
	SetByIndex(var_45_cvector, 1) = var_53_float; // 0x542 PopE
	var_54_int = var_45_cvector | var_45_cvector; // 0x543 Or
	var_55_float = sqrt(var_54_int); // 0x544 Sqrt
	var_45_cvector = var_45_cvector / var_45_cvector; // 0x545 Div2
	var_46_cvector = -var_45_cvector; // 0x546 Neg2
	var_56_float = var_45_cvector * var_32_float; // 0x547 Mult
	var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); // 0x548 PushV
	var_59_cvector = CVector(0.0, 1.0, 0.0); // 0x549 PushVec
	var_58_cvector = var_46_cvector ^ var_59_cvector; // 0x54a Xor2
	func_1509(var_57_cvector, var_58_cvector); // 0x54b NEW_2
	var_65_int = 25; // 0x54d PushI
	var_66_float = var_57_cvector * var_65_int; // 0x54e Mult
	var_67_int = var_56_float + var_66_float; // 0x54f Add
	var_68_cvector = CVector(0.0, 10.0, 0.0); // 0x550 PushVec
	var_47_cvector = var_67_int - var_68_cvector; // 0x551 Sub2
	var_48_cvector = var_44_cvector + var_47_cvector; // 0x552 Add2
	IsOverrideActive(var_49_bool); // 0x553 Func
	var_69_bool = var_49_bool; // 0x555 Push
	if(var_69_bool == 0) goto Label_1369; // 0x556 JumpB
	var_30_bool = 0; // 0x557 MovB
	return 18; // 0x558 Return
	
Label_1369:
	StopWorld(); // 0x559 Func
	CameraTransit(var_48_cvector, var_46_cvector); // 0x55b Func
	var_70_float = GetByIndex(var_47_cvector, 0); // 0x55d PushE
	var_71_float = GetByIndex(var_47_cvector, 2); // 0x55e PushE
	Rotate(var_70_float, var_71_float); // 0x55f Func
	var_72_bool = 0; // 0x561 PushV
	func_1620(var_72_bool); // 0x562 NEW_2
	if(var_72_bool == 0) goto Label_1382; // 0x564 JumpB
	goto Label_1390; // 0x565 Jump
	
Label_1390:
	CameraWaitForPlayFinish(); // 0x56e Func
	ResumeWorld(); // 0x570 Func
	var_30_bool = 1; // 0x572 MovB
	return 18; // 0x573 Return
	
Label_1382:
	var_73_string = "head"; // 0x566 PushS
	HasAnimationTrack(var_50_bool, var_73_string); // 0x567 Func
	var_74_bool = var_50_bool; // 0x569 Push
	if(var_74_bool == 0) goto Label_1390; // 0x56a JumpB
	var_75_string = "head"; // 0x56b PushS
	LookAsyncCamera(var_75_string); // 0x56c Func
}


func_1070(var_49_cvector)
{
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); // 0x42e PushV
	GetPosition(var_53_cvector); // 0x42f Func
	GetPosition(var_54_cvector); // 0x431 ObjFunc
	var_49_cvector = var_54_cvector - var_53_cvector; // 0x433 Sub2
	return 4; // 0x434 Return
}


func_1197(var_32_object)
{
	var_33_bool = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_string = ""; var_40_bool = 0; var_41_int = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_string = ""; // 0x4ad PushV
	var_47_bool = var_32_object == 0; // 0x4ae NullEq
	if(var_47_bool == 0) goto Label_1201; // 0x4af JumpB
	return 14; // 0x4b0 Return
	
Label_1201:
	IsDead(var_40_bool); // 0x4b1 Func
	var_48_bool = var_40_bool; // 0x4b3 Push
	if(var_48_bool == 0) goto Label_1206; // 0x4b4 JumpB
	return 14; // 0x4b5 Return
	
Label_1206:
	GetSecondaryAnimationType(var_41_int); // 0x4b6 Func
	var_49_int = 0; // 0x4b8 PushI
	var_50_bool = var_41_int < var_49_int; // 0x4b9 LT
	if(var_50_bool == 0) goto Label_1212; // 0x4ba JumpB
	return 14; // 0x4bb Return
	
Label_1212:
	GetPosition(var_42_cvector); // 0x4bc ObjFunc
	GetPosition(var_43_cvector); // 0x4be Func
	GetDirection(var_44_cvector); // 0x4c0 Func
	var_45_cvector = var_43_cvector - var_42_cvector; // 0x4c2 Sub2
	var_51_float = GetByIndex(var_45_cvector, 0); // 0x4c3 PushE
	var_52_float = GetByIndex(var_44_cvector, 0); // 0x4c4 PushE
	var_53_float = var_51_float * var_52_float; // 0x4c5 Mult
	var_54_float = GetByIndex(var_45_cvector, 2); // 0x4c6 PushE
	var_55_float = GetByIndex(var_44_cvector, 2); // 0x4c7 PushE
	var_56_float = var_54_float * var_55_float; // 0x4c8 Mult
	var_57_int = var_53_float + var_56_float; // 0x4c9 Add
	var_58_int = 0; // 0x4ca PushI
	var_59_bool = var_57_int >= var_58_int; // 0x4cb GE
	if(var_59_bool == 0) goto Label_1231; // 0x4cc JumpB
	var_46_string = "fhit"; // 0x4cd MovS
	goto Label_1232; // 0x4ce Jump
	
Label_1232:
	var_60_string = "hit_react"; // 0x4d0 PushS
	var_61_string = "1"; // 0x4d1 PushS
	var_62_int = var_46_string + var_61_string; // 0x4d2 Add
	var_63_string = "2"; // 0x4d3 PushS
	var_64_int = var_46_string + var_63_string; // 0x4d4 Add
	var_65_int = -10; // 0x4d5 PushI
	FadeSecondaryAnimation(var_60_string, var_62_int, var_64_int, var_65_int); // 0x4d6 Func
	return 14; // 0x4d8 Return
	
Label_1231:
	var_46_string = "bhit"; // 0x4cf MovS
}


func_691(var_0_object)
{
	Stop(); // 0x2b3 Func
	StopAnimation(); // 0x2b5 Func
	var_0_object = 1; // 0x2b7 TMovB
	return 0; // 0x2b8 Return
}


func_1077(var_24_float)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); // 0x435 PushV
	GetPosition(var_29_cvector); // 0x436 Func
	GetPosition(var_30_cvector); // 0x438 ObjFunc
	var_31_cvector = var_30_cvector - var_29_cvector; // 0x43a Sub2
	var_24_float = var_31_cvector | var_31_cvector; // 0x43b Or2
	return 6; // 0x43c Return
}


func_1462(var_83_string)
{
	var_84_bool = 0; var_85_int = 0; var_86_bool = 0; var_87_int = 0; var_88_bool = 0; var_89_float = 0; var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_bool = 0; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_bool = 0; var_97_float = 0; var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); // 0x5b6 PushV
	IsExisting3DSound(var_92_bool, var_83_string); // 0x5b7 Func
	var_100_bool = var_92_bool == 0; // 0x5b9 Not
	if(var_100_bool == 0) goto Label_1487; // 0x5ba JumpB
	var_93_int = 0; // 0x5bb MovI
	
Label_1468:
	var_101_int = 1; // 0x5bc PushI
	var_102_int = var_93_int + var_101_int; // 0x5bd Add
	var_103_int = var_83_string + var_102_int; // 0x5be Add
	IsExisting3DSound(var_94_bool, var_103_int); // 0x5bf Func
	var_104_bool = var_94_bool == 0; // 0x5c1 Not
	if(var_104_bool == 0) goto Label_1476; // 0x5c2 JumpB
	goto Label_1479; // 0x5c3 Jump
	
Label_1479:
	var_105_bool = var_93_int == 0; // 0x5c7 Not
	if(var_105_bool == 0) goto Label_1482; // 0x5c8 JumpB
	return 16; // 0x5c9 Return
	
Label_1482:
	irand(var_95_int, var_93_int); // 0x5ca Func
	var_106_int = 1; // 0x5cc PushI
	var_107_int = var_95_int + var_106_int; // 0x5cd Add
	var_83_string = var_83_string + var_107_int; // 0x5ce Add2
	
Label_1487:
	Is3DSoundLoaded(var_96_bool, var_83_string); // 0x5cf Func
	var_108_bool = var_96_bool; // 0x5d1 Push
	if(var_108_bool == 0) goto Label_1502; // 0x5d2 JumpB
	GetEyesHeight(var_97_float); // 0x5d3 Func
	GetDirection(var_98_cvector); // 0x5d5 Func
	var_109_int = 50; // 0x5d7 PushI
	var_99_cvector = var_98_cvector * var_109_int; // 0x5d8 Mult2
	var_110_float = GetByIndex(var_99_cvector, 1); // 0x5d9 PushE
	var_110_float = var_110_float + var_97_float; // 0x5da Add2
	SetByIndex(var_99_cvector, 1) = var_110_float; // 0x5db PopE
	PlayGlobalSound(var_83_string, var_99_cvector); // 0x5dc Func
	
Label_1502:
	return 16; // 0x5de Return
	
Label_1476:
	var_111_int = 1; // 0x5c4 PushI
	var_93_int = var_93_int + var_111_int; // 0x5c5 Add2
	goto Label_1468; // 0x5c6 Jump
}


func_1590(var_27_float)
{
	var_28_object = Obj(); var_29_object = Obj(); // 0x636 PushV
	CreateFloatVector(var_29_object); // 0x637 Func
	add(var_27_float); // 0x639 ObjFunc
	var_30_int = 16; // 0x63b PushI
	SendWorldWndMessage(var_30_int, var_29_object); // 0x63c Func
	return 2; // 0x63e Return
}


func_697()
{
	return 0; // 0x2ba Return
}


func_699(var_178_object, var_179_bool)
{
	var_183_bool = var_179_bool; // 0x2bc Push
	if(var_183_bool == 0) goto Label_706; // 0x2bd JumpB
	var_184_int = 100; // 0x2be PushI
	var_185_float = 1.0; // 0x2bf PushF
	SetTimer(var_184_int, var_185_float); // 0x2c0 Func
	
Label_706:
	var_186_object = Obj(); // 0x2c2 PushV
	var_186_object = var_178_object; // 0x2c3 Mov
	func_762(var_182_bool, var_178_object, var_179_bool, var_186_object); // 0x2c4 NEW_2
	return 0; // 0x2c6 Return
}


func_1085(var_16_bool, var_17_object)
{
	var_18_bool = 0; var_19_bool = 0; // 0x43d PushV
	IsPlayerActor(var_17_object, var_19_bool); // 0x43e Func
	var_16_bool = var_19_bool; // 0x440 Mov
	return 2; // 0x441 Return
}


func_1727()
{
	var_18_object = Obj(); var_19_float = 0; var_20_object = Obj(); var_21_float = 0; // 0x6bf PushV
	var_22_string = "player"; // 0x6c0 PushS
	FindActor(var_20_object, var_22_string); // 0x6c1 Func
	var_23_object = var_20_object; // 0x6c3 Push
	if(var_23_object == 0) goto Label_1751; // 0x6c4 JumpB
	var_24_float = 0; var_25_object = Obj(); // 0x6c5 PushV
	var_25_object = var_20_object; // 0x6c6 Mov
	func_1077(var_25_object); // 0x6c7 NEW_2
	var_32_float = 640000.0; // 0x6c9 PushF
	var_33_bool = var_24_float <= var_32_float; // 0x6ca LE
	if(var_33_bool == 0) goto Label_1751; // 0x6cb JumpB
	var_34_float = 0; var_35_object = Obj(); var_36_float = 0; var_37_int = 0; // 0x6cc PushV
	var_35_object = var_20_object; // 0x6cd Mov
	var_36_float = 0.05; // 0x6ce MovF
	var_37_int = 0; // 0x6cf MovI
	func_1124(var_34_float, var_35_object, var_36_float, var_37_int); // 0x6d0 NEW_2
	var_21_float = var_34_float; // 0x6d1 Mov
	var_100_int = 6; // 0x6d3 PushI
	var_101_float = 0.05; // 0x6d4 PushF
	ReportHit(var_20_object, var_100_int, var_21_float, var_101_float); // 0x6d5 Func
	
Label_1751:
	return 4; // 0x6d7 Return
}


func_1600(var_15_bool, var_16_string, var_17_string)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x640 PushV
	FindActor(var_19_object, var_16_string); // 0x641 Func
	var_20_bool = var_19_object == 0; // 0x643 NullEq
	if(var_20_bool == 0) goto Label_1607; // 0x644 JumpB
	var_15_bool = 0; // 0x645 MovB
	return 2; // 0x646 Return
	
Label_1607:
	Trigger(var_19_object, var_17_string); // 0x647 Func
	var_15_bool = 1; // 0x649 MovB
	return 2; // 0x64a Return
}


func_1090(var_39_bool, var_40_object, var_41_string)
{
	var_42_bool = 0; var_43_bool = 0; // 0x442 PushV
	var_44_string = "HasProperty"; // 0x443 PushS
	var_45_int = 2; // 0x444 PushI
	var_46_bool = IsFuncExist(var_40_object, var_44_string, var_45_int); // 0x445 FuncExist
	var_47_bool = var_46_bool == 0; // 0x446 Not
	if(var_47_bool == 0) goto Label_1098; // 0x447 JumpB
	var_39_bool = 0; // 0x448 MovB
	return 2; // 0x449 Return
	
Label_1098:
	HasProperty(var_41_string, var_43_bool); // 0x44a ObjFunc
	var_39_bool = var_43_bool; // 0x44c Mov
	return 2; // 0x44d Return
}


func_835(var_0_object, var_1_object, var_2_object, var_102_int)
{
	var_103_cvector = CVector(0,0,0); var_104_float = 0; var_105_cvector = CVector(0,0,0); var_106_float = 0; var_107_cvector = CVector(0,0,0); var_108_float = 0; var_109_cvector = CVector(0,0,0); var_110_float = 0; // 0x343 PushV
	var_111_int = 120; // 0x344 PushI
	var_112_bool = var_102_int != var_111_int; // 0x345 Neq
	if(var_112_bool == 0) goto Label_840; // 0x346 JumpB
	return 8; // 0x347 Return
	
Label_840:
	var_113_bool = var_0_object == 0; // 0x348 NullEq
	if(var_113_bool == 0) goto Label_849; // 0x349 JumpB
	Stop(); // 0x34a Func
	var_114_int = 1; // 0x34c PushI
	KillTimer(var_114_int); // 0x34d Func
	var_2_object = 1; // 0x34f TMovB
	goto Label_886; // 0x350 Jump
	
Label_886:
	return 8; // 0x376 Return
	
Label_849:
	GetDirection(var_107_cvector); // 0x351 Func
	var_115_float = 7000.0; // 0x353 PushF
	FindDirLength(var_108_float, var_107_cvector, var_115_float); // 0x354 Func
	var_116_cvector = CVector(0,0,0); var_117_float = 0; // 0x356 PushV
	var_117_float = 1.74533; // 0x357 MovF
	func_732(var_116_cvector, var_117_float); // 0x358 NEW_2
	var_109_cvector = var_116_cvector; // 0x359 Mov
	var_110_float = var_109_cvector | var_109_cvector; // 0x35b Or2
	var_146_bool = 0; // 0x35c PushV
	var_146_bool = 0; // 0x35d MovB
	var_147_float = 2500.0; // 0x35e PushF
	var_148_bool = var_110_float >= var_147_float; // 0x35f GE
	if(var_148_bool == 0) goto Label_879; // 0x360 JumpB
	var_149_bool = 0; // 0x361 PushV
	var_149_bool = 1; // 0x362 MovB
	var_150_float = var_108_float * var_108_float; // 0x363 Mult
	var_151_float = 2.25; // 0x364 PushF
	var_152_float = var_150_float * var_151_float; // 0x365 Mult
	var_153_bool = var_110_float >= var_152_float; // 0x366 GE
	if(var_153_bool == 0) goto Label_877; // 0x367 JumpB
	var_154_bool = 0; // 0x368 PushV
	func_903(var_149_bool, var_154_bool); // 0x369 NEW_2
	if(var_154_bool == 0) goto Label_877; // 0x36b JumpB
	var_149_bool = 0; // 0x36c MovB
	
Label_877:
	if(var_149_bool == 0) goto Label_879; // 0x36d JumpB
	var_146_bool = 1; // 0x36e MovB
	
Label_879:
	if(var_146_bool == 0) goto Label_886; // 0x36f JumpB
	Stop(); // 0x370 Func
	var_174_cvector = CVector(0,0,0); // 0x372 PushV
	func_1065(var_174_cvector); // 0x373 NEW_2
	var_1_object = var_174_cvector + var_109_cvector; // 0x375 Add2
}


func_454(var_0_object, var_1_object, var_4_bool, var_18_bool)
{
	var_19_float = 0; var_20_float = 0; // 0x1c6 PushV
	var_21_bool = var_4_bool == 0; // 0x1c7 NullEq
	if(var_21_bool == 0) goto Label_459; // 0x1c8 JumpB
	var_18_bool = 0; // 0x1c9 MovB
	return 2; // 0x1ca Return
	
Label_459:
	var_22_float = 0; var_23_object = Obj(); // 0x1cb PushV
	var_23_object = var_4_bool; // 0x1cc MovT
	func_1077(var_23_object); // 0x1cd NEW_2
	var_20_float = sqrt(var_22_float); // 0x1cf Sqrt2
	var_30_object = var_2_object; // 0x1d0 PushT
	if(var_30_object == 0) goto Label_467; // 0x1d1 JumpB
	var_20_float = var_20_float - var_1_object; // 0x1d2 Sub2
	
Label_467:
	var_18_bool = var_20_float < var_0_object; // 0x1d3 LT2
	return 2; // 0x1d4 Return
}


func_585(var_112_bool)
{
	var_112_bool = 1; // 0x249 MovB
	return 0; // 0x24a Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_90_object, var_91_object)
{
	var_0_object = var_91_object; // 0x4b TMov
	var_1_object = var_90_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_96_int = 1; // 0x4e PushI
	if(var_96_int == 0) goto Label_107; // 0x4f JumpB
	var_97_object = Obj(); var_98_object = Obj(); // 0x50 PushV
	var_97_object = var_1_object; // 0x51 MovT
	var_98_object = var_0_object; // 0x52 MovT
	func_1646(); // 0x53 NEW_2
	var_128_string = ""; // 0x55 PushV
	var_128_string = "Neutral"; // 0x56 MovS
	func_137(var_91_object, var_128_string); // 0x57 NEW_2
	var_145_int = 526744; // 0x59 PushI
	SetMessage(var_145_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_146_int = 528787; // 0x5e PushI
	var_147_int = 30200; // 0x5f PushI
	var_148_int = 30199; // 0x60 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x61 TObjFunc
	var_149_int = 528791; // 0x63 PushI
	var_150_int = 30200; // 0x64 PushI
	var_151_int = 30203; // 0x65 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x66 TObjFunc
	goto Label_107; // 0x68 Jump
	
Label_107:
	var_152_bool = 0; // 0x6b PushV
	func_1620(var_152_bool); // 0x6c NEW_2
	if(var_152_bool == 0) goto Label_122; // 0x6e JumpB
	
Label_111:
	lshWaitForAnimEnd(); // 0x6f Func
	var_153_string = var_3_string; // 0x71 PushT
	if(var_153_string == 0) goto Label_116; // 0x72 JumpB
	goto Label_121; // 0x73 Jump
	
Label_121:
	goto Label_136; // 0x79 Jump
	
Label_136:
	return 0; // 0x88 Return
	
Label_116:
	var_154_string = ""; // 0x74 PushV
	var_154_string = var_2_object; // 0x75 MovT
	func_1413(var_154_string); // 0x76 NEW_2
	goto Label_111; // 0x78 Jump
	
Label_122:
	var_165_string = "all"; // 0x7a PushS
	var_166_string = "idle"; // 0x7b PushS
	PlayAnimation(var_165_string, var_166_string); // 0x7c Func
	
Label_126:
	WaitForAnimEnd(); // 0x7e Func
	var_167_string = var_3_string; // 0x80 PushT
	if(var_167_string == 0) goto Label_131; // 0x81 JumpB
	goto Label_136; // 0x82 Jump
	
Label_131:
	var_168_string = "all"; // 0x83 PushS
	var_169_string = "idle"; // 0x84 PushS
	PlayAnimation(var_168_string, var_169_string); // 0x85 Func
	goto Label_126; // 0x87 Jump
}


func_587()
{
	StopAnimation(); // 0x24b Func
	StopGroup0(); // 0x24d Func
	return 0; // 0x24f Return
}


func_1612(var_78_int)
{
	var_78_int = 515595; // 0x64c MovI
	return 0; // 0x64d Return
}


func_1614(var_77_int)
{
	var_77_int = 512611; // 0x64e MovI
	return 0; // 0x64f Return
}


func_1102(var_31_bool, var_32_object, var_33_string, var_34_float, var_35_float, var_36_float)
{
	var_37_float = 0; var_38_float = 0; // 0x44e PushV
	var_39_bool = 0; var_40_object = Obj(); var_41_string = ""; // 0x44f PushV
	var_40_object = var_32_object; // 0x450 Mov
	var_41_string = var_33_string; // 0x451 Mov
	func_1090(var_39_bool, var_40_object, var_41_string); // 0x452 NEW_2
	var_48_bool = var_39_bool == 0; // 0x454 Not
	if(var_48_bool == 0) goto Label_1112; // 0x455 JumpB
	var_31_bool = 0; // 0x456 MovB
	return 2; // 0x457 Return
	
Label_1112:
	GetProperty(var_33_string, var_38_float); // 0x458 ObjFunc
	var_49_float = 0; var_50_float = 0; var_51_float = 0; var_52_float = 0; // 0x45a PushV
	var_50_float = var_38_float + var_34_float; // 0x45b Add2
	var_51_float = var_35_float; // 0x45c Mov
	var_52_float = var_36_float; // 0x45d Mov
	func_1526(var_49_float, var_50_float, var_51_float, var_52_float); // 0x45e NEW_2
	SetProperty(var_33_string, var_49_float); // 0x460 ObjFunc
	var_31_bool = 1; // 0x462 MovB
	return 2; // 0x463 Return
}


func_1616(var_79_string)
{
	var_79_string = "ui/NPC_Albinos.png"; // 0x650 MovS
	return 0; // 0x651 Return
}


func_1618(var_80_string)
{
	var_80_string = "ui/NPC_Albinos_b.png"; // 0x652 MovS
	return 0; // 0x653 Return
}


func_1620(var_72_bool)
{
	var_72_bool = 0; // 0x654 MovB
	return 0; // 0x655 Return
}


func_1622(var_93_string, var_94_int)
{
	var_95_string = ""; var_96_string = ""; // 0x656 PushV
	var_96_string = "idle"; // 0x657 MovS
	var_97_int = var_94_int; // 0x658 Push
	if(var_97_int == 0) goto Label_1627; // 0x659 JumpB
	var_96_string = var_96_string + var_94_int; // 0x65a Add2
	
Label_1627:
	var_93_string = var_96_string; // 0x65b Mov
	return 2; // 0x65c Return
}


func_1241(var_19_object, var_20_int, var_21_float)
{
	var_22_cvector = CVector(0,0,0); var_23_object = Obj(); var_24_int = 0; var_25_bool = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_int = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_object = Obj(); var_33_int = 0; var_34_bool = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_int = 0; var_38_int = 0; var_39_cvector = CVector(0,0,0); // 0x4d9 PushV
	var_40_bool = 0; // 0x4da PushV
	var_40_bool = 0; // 0x4db MovB
	var_41_bool = 0; // 0x4dc PushV
	var_41_bool = 0; // 0x4dd MovB
	var_42_object = var_19_object; // 0x4de Push
	if(var_42_object == 0) goto Label_1252; // 0x4df JumpB
	var_43_int = 4; // 0x4e0 PushI
	var_44_bool = var_20_int != var_43_int; // 0x4e1 Neq
	if(var_44_bool == 0) goto Label_1252; // 0x4e2 JumpB
	var_41_bool = 1; // 0x4e3 MovB
	
Label_1252:
	if(var_41_bool == 0) goto Label_1257; // 0x4e4 JumpB
	var_45_int = 5; // 0x4e5 PushI
	var_46_bool = var_20_int != var_45_int; // 0x4e6 Neq
	if(var_46_bool == 0) goto Label_1257; // 0x4e7 JumpB
	var_40_bool = 1; // 0x4e8 MovB
	
Label_1257:
	if(var_40_bool == 0) goto Label_1304; // 0x4e9 JumpB
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x4ea PushV
	var_49_cvector = CVector(0,0,0); var_50_object = Obj(); // 0x4eb PushV
	var_50_object = var_19_object; // 0x4ec Mov
	func_1070(var_50_object); // 0x4ed NEW_2
	var_48_cvector = var_49_cvector; // 0x4ee Mov
	func_1509(var_47_cvector, var_48_cvector); // 0x4f0 NEW_2
	var_31_cvector = var_47_cvector; // 0x4f1 Mov
	CreateVectorVector(var_32_object); // 0x4f3 Func
	var_33_int = 1; // 0x4f5 MovI
	
Label_1270:
	var_60_string = "hit"; // 0x4f6 PushS
	var_61_int = var_60_string + var_33_int; // 0x4f7 Add
	GetGeometryLocator(var_61_int, var_34_bool, var_35_cvector, var_36_cvector); // 0x4f8 Func
	var_62_bool = var_34_bool == 0; // 0x4fa Not
	if(var_62_bool == 0) goto Label_1277; // 0x4fb JumpB
	goto Label_1286; // 0x4fc Jump
	
Label_1286:
	size(var_37_int); // 0x506 ObjFunc
	var_63_int = var_37_int; // 0x508 Push
	if(var_63_int == 0) goto Label_1303; // 0x509 JumpB
	irand(var_38_int, var_37_int); // 0x50a Func
	get(var_39_cvector, var_38_int); // 0x50c ObjFunc
	var_64_object = Obj(); var_65_int = 0; var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); // 0x50e PushV
	var_64_object = var_19_object; // 0x50f Mov
	var_65_int = var_20_int; // 0x510 Mov
	var_66_float = var_21_float; // 0x511 Mov
	var_67_cvector = var_39_cvector; // 0x512 Mov
	var_68_cvector = -var_31_cvector; // 0x513 Neg2
	func_1309(var_66_float, var_67_cvector, var_68_cvector); // 0x514 NEW_2
	return 18; // 0x516 Return
	
Label_1303:
	var_32_object = 0; // 0x517 SetNull
	
Label_1304:
	var_109_object = Obj(); // 0x518 PushV
	var_109_object = var_19_object; // 0x519 Mov
	func_1197(var_109_object); // 0x51a NEW_2
	return 18; // 0x51c Return
	
Label_1277:
	var_110_int = var_36_cvector | var_31_cvector; // 0x4fd Or
	var_111_float = 0.70711; // 0x4fe PushF
	var_112_bool = var_110_int >= var_111_float; // 0x4ff GE
	if(var_112_bool == 0) goto Label_1283; // 0x500 JumpB
	add(var_35_cvector); // 0x501 ObjFunc
	
Label_1283:
	var_113_int = 1; // 0x503 PushI
	var_33_int = var_33_int + var_113_int; // 0x504 Add2
	goto Label_1270; // 0x505 Jump
}


func_1753(var_58_object)
{
	var_59_object = Obj(); // 0x6da PushV
	var_59_object = var_58_object; // 0x6db Mov
	TaskCall(5); // 0x6dc TaskCall
	func_919(var_59_object); // 0x6dd NEW_2
	TaskReturn(); // 0x6de TaskReturn
	return 0; // 0x6e0 Return
}


func_732(var_116_cvector, var_117_float)
{
	var_118_cvector = CVector(0,0,0); var_119_cvector = CVector(0,0,0); var_120_cvector = CVector(0,0,0); var_121_cvector = CVector(0,0,0); var_122_cvector = CVector(0,0,0); var_123_float = 0; var_124_cvector = CVector(0,0,0); var_125_cvector = CVector(0,0,0); var_126_cvector = CVector(0,0,0); var_127_cvector = CVector(0,0,0); var_128_cvector = CVector(0,0,0); var_129_float = 0; // 0x2dc PushV
	GetPosition(var_124_cvector); // 0x2dd Func
	GetPosition(var_125_cvector); // 0x2df TObjFunc
	GetDirection(var_126_cvector); // 0x2e1 Func
	var_130_cvector = CVector(0,0,0); var_131_cvector = CVector(0,0,0); // 0x2e3 PushV
	var_132_cvector = CVector(0,0,0); var_133_cvector = CVector(0,0,0); // 0x2e4 PushV
	var_133_cvector = var_124_cvector - var_125_cvector; // 0x2e5 Sub2
	func_1509(var_132_cvector, var_133_cvector); // 0x2e6 NEW_2
	var_139_float = 0.75; // 0x2e8 PushF
	var_140_float = var_126_cvector * var_139_float; // 0x2e9 Mult
	var_131_cvector = var_132_cvector + var_140_float; // 0x2ea Add2
	func_1509(var_130_cvector, var_131_cvector); // 0x2eb NEW_2
	var_127_cvector = var_130_cvector; // 0x2ec Mov
	var_141_int = 32; // 0x2ee PushI
	var_142_float = 7000.0; // 0x2ef PushF
	FindLongestDir(var_128_cvector, var_129_float, var_127_cvector, var_117_float, var_141_int, var_142_float); // 0x2f0 Func
	var_143_int = 100; // 0x2f2 PushI
	var_129_float = var_129_float - var_143_int; // 0x2f3 Sub2
	var_144_int = 0; // 0x2f4 PushI
	var_145_bool = var_129_float < var_144_int; // 0x2f5 LT
	if(var_145_bool == 0) goto Label_760; // 0x2f6 JumpB
	var_129_float = 0; // 0x2f7 MovI
	
Label_760:
	var_116_cvector = var_128_cvector * var_129_float; // 0x2f8 Mult2
	return 12; // 0x2f9 Return
}


func_1629(var_87_int)
{
	var_88_int = 0; var_89_bool = 0; var_90_int = 0; var_91_bool = 0; // 0x65d PushV
	var_90_int = 0; // 0x65e MovI
	
Label_1631:
	var_92_string = "all"; // 0x65f PushS
	var_93_string = ""; var_94_int = 0; // 0x660 PushV
	var_94_int = var_90_int; // 0x661 Mov
	func_1622(var_93_string, var_94_int); // 0x662 NEW_2
	HasAnimation(var_91_bool, var_92_string, var_93_string); // 0x664 Func
	var_98_bool = var_91_bool == 0; // 0x666 Not
	if(var_98_bool == 0) goto Label_1641; // 0x667 JumpB
	goto Label_1644; // 0x668 Jump
	
Label_1644:
	var_87_int = var_90_int; // 0x66c Mov
	return 4; // 0x66d Return
	
Label_1641:
	var_99_int = 1; // 0x669 PushI
	var_90_int = var_90_int + var_99_int; // 0x66a Add2
	goto Label_1631; // 0x66b Jump
}


func_1503(var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x5df PushV
	self(var_19_object); // 0x5e0 Func
	var_17_object = var_19_object; // 0x5e2 Mov
	return 2; // 0x5e3 Return
}


func_762(var_0_object, var_1_object, var_2_object, var_186_object)
{
	var_187_cvector = CVector(0,0,0); var_188_float = 0; var_189_bool = 0; var_190_cvector = CVector(0,0,0); var_191_float = 0; var_192_cvector = CVector(0,0,0); var_193_float = 0; var_194_bool = 0; var_195_cvector = CVector(0,0,0); var_196_float = 0; // 0x2fa PushV
	var_0_object = var_186_object; // 0x2fb TMov
	var_197_cvector = CVector(0,0,0); var_198_float = 0; // 0x2fc PushV
	var_198_float = 1.74533; // 0x2fd MovF
	func_732(var_197_cvector, var_198_float); // 0x2fe NEW_2
	var_192_cvector = var_197_cvector; // 0x2ff Mov
	var_193_float = var_192_cvector | var_192_cvector; // 0x301 Or2
	var_222_float = 2500.0; // 0x302 PushF
	var_223_bool = var_193_float < var_222_float; // 0x303 LT
	if(var_223_bool == 0) goto Label_791; // 0x304 JumpB
	var_224_cvector = CVector(0,0,0); var_225_float = 0; // 0x305 PushV
	var_225_float = 2.61799; // 0x306 MovF
	func_732(var_224_cvector, var_225_float); // 0x307 NEW_2
	var_192_cvector = var_224_cvector; // 0x308 Mov
	var_193_float = var_192_cvector | var_192_cvector; // 0x30a Or2
	var_226_float = 2500.0; // 0x30b PushF
	var_227_bool = var_193_float < var_226_float; // 0x30c LT
	if(var_227_bool == 0) goto Label_791; // 0x30d JumpB
	var_228_string = "Can't retreat, distance: "; // 0x30e PushS
	var_229_float = sqrt(var_193_float); // 0x30f Sqrt
	var_230_int = var_228_string + var_229_float; // 0x310 Add
	Trace(var_230_int); // 0x311 Func
	var_231_float = 0.5; // 0x313 PushF
	Sleep(var_231_float); // 0x314 Func
	return 10; // 0x316 Return
	
Label_791:
	var_232_float = GetByIndex(var_192_cvector, 0); // 0x317 PushE
	var_233_float = GetByIndex(var_192_cvector, 2); // 0x318 PushE
	Rotate(var_232_float, var_233_float); // 0x319 Func
	var_234_cvector = CVector(0,0,0); // 0x31b PushV
	func_1065(var_234_cvector); // 0x31c NEW_2
	var_1_object = var_234_cvector + var_192_cvector; // 0x31e Add2
	var_237_int = 120; // 0x31f PushI
	var_238_float = 0.5; // 0x320 PushF
	SetTimer(var_237_int, var_238_float); // 0x321 Func
	var_2_object = 0; // 0x323 TMovB
	
Label_804:
	var_239_int = 1; // 0x324 PushI
	MovePoint(var_239_int, var_239_int, var_194_bool); // 0x325 Func
	var_240_bool = var_194_bool; // 0x327 Push
	if(var_240_bool == 0) goto Label_832; // 0x328 JumpB
	var_241_bool = var_0_object == 0; // 0x329 NullEq
	if(var_241_bool == 0) goto Label_813; // 0x32a JumpB
	goto Label_834; // 0x32b Jump
	
Label_834:
	return 10; // 0x342 Return
	
Label_813:
	var_242_cvector = CVector(0,0,0); var_243_float = 0; // 0x32d PushV
	var_243_float = 2.61799; // 0x32e MovF
	func_732(var_242_cvector, var_243_float); // 0x32f NEW_2
	var_195_cvector = var_242_cvector; // 0x330 Mov
	var_196_float = var_195_cvector | var_195_cvector; // 0x332 Or2
	var_244_float = 2500.0; // 0x333 PushF
	var_245_bool = var_196_float >= var_244_float; // 0x334 GE
	if(var_245_bool == 0) goto Label_831; // 0x335 JumpB
	var_246_cvector = CVector(0,0,0); // 0x336 PushV
	func_1065(var_246_cvector); // 0x337 NEW_2
	var_1_object = var_246_cvector + var_195_cvector; // 0x339 Add2
	var_247_int = 120; // 0x33a PushI
	var_248_float = 0.5; // 0x33b PushF
	SetTimer(var_247_int, var_248_float); // 0x33c Func
	goto Label_832; // 0x33e Jump
	
Label_832:
	var_249_bool = var_2_object == 0; // 0x340 Not
	if(var_249_bool == 0) goto Label_804; // 0x341 JumpB
	
Label_831:
	goto Label_834; // 0x33f Jump
}


func_1124(var_34_float, var_35_object, var_36_float, var_37_int)
{
	var_38_int = 0; var_39_string = ""; var_40_int = 0; var_41_float = 0; var_42_float = 0; var_43_float = 0; var_44_int = 0; var_45_string = ""; var_46_int = 0; var_47_float = 0; var_48_float = 0; var_49_float = 0; // 0x464 PushV
	var_50_bool = 0; var_51_object = Obj(); var_52_string = ""; // 0x465 PushV
	var_51_object = var_35_object; // 0x466 Mov
	var_52_string = "health"; // 0x467 MovS
	func_1090(var_50_bool, var_51_object, var_52_string); // 0x468 NEW_2
	var_59_bool = var_50_bool == 0; // 0x46a Not
	if(var_59_bool == 0) goto Label_1134; // 0x46b JumpB
	var_34_float = 0.0; // 0x46c MovF
	return 12; // 0x46d Return
	
Label_1134:
	var_60_bool = 0; var_61_object = Obj(); var_62_string = ""; // 0x46e PushV
	var_61_object = var_35_object; // 0x46f Mov
	var_62_string = "armor"; // 0x470 MovS
	func_1090(var_60_bool, var_61_object, var_62_string); // 0x471 NEW_2
	var_63_bool = var_60_bool == 0; // 0x473 Not
	if(var_63_bool == 0) goto Label_1143; // 0x474 JumpB
	var_44_int = 0; // 0x475 MovI
	goto Label_1146; // 0x476 Jump
	
Label_1146:
	var_64_string = "armor_"; // 0x47a PushS
	var_65_string = ""; var_66_int = 0; // 0x47b PushV
	var_66_int = var_37_int; // 0x47c Mov
	func_1051(var_65_string, var_66_int); // 0x47d NEW_2
	var_45_string = var_64_string + var_65_string; // 0x47f Add2
	var_71_bool = 0; var_72_object = Obj(); var_73_string = ""; // 0x480 PushV
	var_72_object = var_35_object; // 0x481 Mov
	var_73_string = var_45_string; // 0x482 Mov
	func_1090(var_71_bool, var_72_object, var_73_string); // 0x483 NEW_2
	var_74_bool = var_71_bool == 0; // 0x485 Not
	if(var_74_bool == 0) goto Label_1161; // 0x486 JumpB
	var_46_int = 0; // 0x487 MovI
	goto Label_1163; // 0x488 Jump
	
Label_1163:
	var_75_float = 0; var_76_float = 0; var_77_float = 0; // 0x48b PushV
	var_78_int = var_44_int + var_46_int; // 0x48c Add
	var_79_float = 100.0; // 0x48d PushF
	var_76_float = var_78_int / var_78_int; // 0x48e Div2
	var_77_float = 1; // 0x48f MovI
	func_1519(var_75_float, var_76_float, var_77_float); // 0x490 NEW_2
	var_47_float = var_75_float; // 0x491 Mov
	var_81_string = "health"; // 0x493 PushS
	GetProperty(var_81_string, var_48_float); // 0x494 ObjFunc
	var_82_int = 1; // 0x496 PushI
	var_83_int = var_82_int - var_47_float; // 0x497 Sub
	var_49_float = var_36_float * var_83_int; // 0x498 Mult2
	var_84_string = "health"; // 0x499 PushS
	var_85_float = 0; var_86_float = 0; var_87_float = 0; var_88_float = 0; // 0x49a PushV
	var_86_float = var_48_float - var_49_float; // 0x49b Sub2
	var_87_float = 0; // 0x49c MovI
	var_88_float = 1; // 0x49d MovI
	func_1526(var_85_float, var_86_float, var_87_float, var_88_float); // 0x49e NEW_2
	SetProperty(var_84_string, var_85_float); // 0x4a0 ObjFunc
	var_91_bool = 0; var_92_object = Obj(); // 0x4a2 PushV
	var_92_object = var_35_object; // 0x4a3 Mov
	func_1085(var_91_bool, var_92_object); // 0x4a4 NEW_2
	if(var_91_bool == 0) goto Label_1195; // 0x4a6 JumpB
	var_95_float = 0; // 0x4a7 PushV
	var_95_float = -var_49_float; // 0x4a8 Neg2
	func_1580(var_95_float); // 0x4a9 NEW_2
	
Label_1195:
	var_34_float = var_49_float; // 0x4ab Mov
	return 12; // 0x4ac Return
	
Label_1161:
	GetProperty(var_45_string, var_46_int); // 0x489 ObjFunc
	
Label_1143:
	var_99_string = "armor"; // 0x477 PushS
	GetProperty(var_99_string, var_44_int); // 0x478 ObjFunc
}


func_1509(var_47_cvector, var_48_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x5e5 PushV
	var_57_int = var_48_cvector | var_48_cvector; // 0x5e6 Or
	var_56_float = sqrt(var_57_int); // 0x5e7 Sqrt2
	var_58_float = 0.0; // 0x5e8 PushF
	var_59_bool = var_56_float < var_58_float; // 0x5e9 LT
	if(var_59_bool == 0) goto Label_1517; // 0x5ea JumpB
	var_47_cvector = CVector(0.0, 0.0, 0.0); // 0x5eb MovV
	return 2; // 0x5ec Return
	
Label_1517:
	var_47_cvector = var_48_cvector / var_48_cvector; // 0x5ed Div2
	return 2; // 0x5ee Return
}


func_492(var_2_object, var_3_string)
{
	func_587(); // 0x1ed NEW_2
	var_16_int = 10; // 0x1ef PushI
	KillTimer(var_16_int); // 0x1f0 Func
	var_17_object = var_2_object; // 0x1f2 PushT
	if(var_17_object == 0) goto Label_504; // 0x1f3 JumpB
	var_18_string = "head"; // 0x1f4 PushS
	UnlookAsync(var_18_string); // 0x1f5 Func
	var_2_object = 0; // 0x1f7 TMovB
	
Label_504:
	var_3_string = 1; // 0x1f8 TMovB
	return 0; // 0x1f9 Return
}


func_1646()
{
	func_1656(); // 0x670 NEW_2
	var_122_bool = 0; var_123_string = ""; var_124_string = ""; // 0x672 PushV
	var_123_string = "quest_k6_03"; // 0x673 MovS
	var_124_string = "completed"; // 0x674 MovS
	func_1600(var_122_bool, var_123_string, var_124_string); // 0x675 NEW_2
	return 0; // 0x677 Return
}


func_1519(var_75_float, var_76_float, var_77_float)
{
	var_80_bool = var_76_float < var_77_float; // 0x5f0 LT
	if(var_80_bool == 0) goto Label_1524; // 0x5f1 JumpB
	var_75_float = var_76_float; // 0x5f2 Mov
	goto Label_1525; // 0x5f3 Jump
	
Label_1525:
	return 0; // 0x5f5 Return
	
Label_1524:
	var_75_float = var_77_float; // 0x5f4 Mov
}


func_1396()
{
	var_172_bool = 0; var_173_bool = 0; // 0x574 PushV
	CameraSwitchToNormal(); // 0x575 Func
	var_174_bool = 0; // 0x577 PushV
	func_1620(var_174_bool); // 0x578 NEW_2
	if(var_174_bool == 0) goto Label_1404; // 0x57a JumpB
	goto Label_1412; // 0x57b Jump
	
Label_1412:
	return 2; // 0x584 Return
	
Label_1404:
	var_175_string = "head"; // 0x57c PushS
	HasAnimationTrack(var_173_bool, var_175_string); // 0x57d Func
	var_176_bool = var_173_bool; // 0x57f Push
	if(var_176_bool == 0) goto Label_1412; // 0x580 JumpB
	var_177_string = "head"; // 0x581 PushS
	UnlookAsync(var_177_string); // 0x582 Func
}


func_1526(var_49_float, var_50_float, var_51_float, var_52_float)
{
	var_53_bool = var_50_float < var_51_float; // 0x5f7 LT
	if(var_53_bool == 0) goto Label_1531; // 0x5f8 JumpB
	var_49_float = var_51_float; // 0x5f9 Mov
	return 0; // 0x5fa Return
	
Label_1531:
	var_54_bool = var_50_float > var_52_float; // 0x5fb GT
	if(var_54_bool == 0) goto Label_1535; // 0x5fc JumpB
	var_49_float = var_52_float; // 0x5fd Mov
	return 0; // 0x5fe Return
	
Label_1535:
	var_49_float = var_50_float; // 0x5ff Mov
	return 0; // 0x600 Return
}


func_887(var_2_object)
{
	Stop(); // 0x377 Func
	var_16_int = 120; // 0x379 PushI
	KillTimer(var_16_int); // 0x37a Func
	var_2_object = 1; // 0x37c TMovB
	return 0; // 0x37d Return
}


func_1656()
{
	var_99_object = Obj(); var_100_object = Obj(); // 0x678 PushV
	var_101_int = 750; // 0x679 PushI
	var_102_int = 2; // 0x67a PushI
	var_103_int = 539629; // 0x67b PushI
	CreateDiaryEntry(var_100_object, var_101_int, var_102_int, var_103_int); // 0x67c Func
	var_104_bool = 0; var_105_object = Obj(); var_106_int = 0; // 0x67e PushV
	var_105_object = var_100_object; // 0x67f Mov
	var_106_int = 748; // 0x680 MovI
	func_1682(var_104_bool, var_105_object, var_106_int); // 0x681 NEW_2
	return 2; // 0x683 Return
}


func_506()
{
	var_71_int = 0; var_72_int = 0; var_73_int = 0; var_74_int = 0; var_75_bool = 0; var_76_float = 0; var_77_bool = 0; var_78_int = 0; var_79_int = 0; var_80_int = 0; var_81_int = 0; var_82_bool = 0; var_83_float = 0; var_84_bool = 0; // 0x1fa PushV
	WaitForAnimEnd(); // 0x1fb Func
	var_85_bool = 0; // 0x1fd PushV
	func_1323(var_85_bool); // 0x1fe NEW_2
	var_86_bool = var_85_bool == 0; // 0x200 Not
	if(var_86_bool == 0) goto Label_515; // 0x201 JumpB
	return 14; // 0x202 Return
	
Label_515:
	var_87_int = 0; // 0x203 PushV
	func_1629(var_87_int); // 0x204 NEW_2
	var_78_int = var_87_int; // 0x205 Mov
	var_79_int = 0; // 0x207 MovI
	
Label_520:
	var_100_bool = 0; // 0x208 PushV
	var_100_bool = 0; // 0x209 MovB
	var_101_int = 5; // 0x20a PushI
	var_102_bool = var_79_int < var_101_int; // 0x20b LT
	if(var_102_bool == 0) goto Label_530; // 0x20c JumpB
	var_103_bool = 0; // 0x20d PushV
	func_1323(var_103_bool); // 0x20e NEW_2
	if(var_103_bool == 0) goto Label_530; // 0x210 JumpB
	var_100_bool = 1; // 0x211 MovB
	
Label_530:
	if(var_100_bool == 0) goto Label_582; // 0x212 JumpB
	var_104_int = 3; // 0x213 PushI
	irand(var_80_int, var_104_int); // 0x214 Func
	var_105_int = 0; // 0x216 PushI
	var_106_bool = var_80_int == var_105_int; // 0x217 Eq
	if(var_106_bool == 0) goto Label_554; // 0x218 JumpB
	var_107_int = var_78_int; // 0x219 Push
	if(var_107_int == 0) goto Label_553; // 0x21a JumpB
	irand(var_81_int, var_78_int); // 0x21b Func
	var_108_string = "all"; // 0x21d PushS
	var_109_string = ""; var_110_int = 0; // 0x21e PushV
	var_110_int = var_81_int; // 0x21f Mov
	func_1622(var_109_string, var_110_int); // 0x220 NEW_2
	PlayAnimation(var_108_string, var_109_string); // 0x222 Func
	WaitForAnimEnd(var_82_bool); // 0x224 Func
	var_111_bool = var_82_bool == 0; // 0x226 Not
	if(var_111_bool == 0) goto Label_553; // 0x227 JumpB
	goto Label_582; // 0x228 Jump
	
Label_582:
	ResetAAS(); // 0x246 Func
	return 14; // 0x248 Return
	
Label_553:
	goto Label_571; // 0x229 Jump
	
Label_571:
	var_112_bool = 0; // 0x23b PushV
	func_585(var_112_bool); // 0x23c NEW_2
	var_113_bool = var_112_bool == 0; // 0x23e Not
	if(var_113_bool == 0) goto Label_577; // 0x23f JumpB
	goto Label_582; // 0x240 Jump
	
Label_577:
	ResetAAS(); // 0x241 Func
	var_114_int = 1; // 0x243 PushI
	var_79_int = var_79_int + var_114_int; // 0x244 Add2
	goto Label_520; // 0x245 Jump
	
Label_554:
	var_115_int = 1; // 0x22a PushI
	var_116_bool = var_80_int == var_115_int; // 0x22b Eq
	if(var_116_bool == 0) goto Label_568; // 0x22c JumpB
	var_117_int = 4; // 0x22d PushI
	rand(var_83_float, var_117_int); // 0x22e Func
	var_118_int = 1; // 0x230 PushI
	var_119_int = var_83_float + var_118_int; // 0x231 Add
	Sleep(var_119_int, var_84_bool); // 0x232 Func
	var_120_bool = var_84_bool == 0; // 0x234 Not
	if(var_120_bool == 0) goto Label_567; // 0x235 JumpB
	goto Label_582; // 0x236 Jump
	
Label_567:
	goto Label_571; // 0x237 Jump
	
Label_568:
	var_121_int = var_79_int; // 0x238 Push
	if(var_121_int == 0) goto Label_571; // 0x239 JumpB
	goto Label_582; // 0x23a Jump
}


func_1019(var_82_string)
{
	RemoveRTEnvelope(); // 0x3fc Func
	SetDeathState(); // 0x3fe Func
	Stop(); // 0x400 Func
	StopAsync(); // 0x402 Func
	StopSecondaryAnimation(); // 0x404 Func
	var_83_string = ""; // 0x406 PushV
	var_83_string = var_82_string; // 0x407 Mov
	func_1462(var_83_string); // 0x408 NEW_2
	var_112_string = "all"; // 0x40a PushS
	PlayAnimation(var_112_string, var_82_string); // 0x40b Func
	WaitForAnimEnd(); // 0x40d Func
	var_113_string = "all"; // 0x40f PushS
	LockAnimationEnd(var_113_string, var_82_string); // 0x410 Func
	RemoveEnvelope(); // 0x412 Func
	return 0; // 0x414 Return
}


func_380()
{
	
Label_380:
	var_62_float = 0; var_63_float = 0; // 0x17c PushV
	var_62_float = 300; // 0x17d MovI
	var_63_float = 100; // 0x17e MovI
	func_427(var_57_int, var_58_int, var_59_bool, var_60_bool, var_61_object, var_62_float, var_63_float); // 0x17f NEW_2
	var_124_int = 3; // 0x181 PushI
	Sleep(var_124_int); // 0x182 Func
	goto Label_380; // 0x184 Jump
}


func_638(var_23_bool, var_24_string, var_25_int, var_26_bool)
{
	var_27_object = Obj(); var_28_cvector = CVector(0,0,0); var_29_bool = 0; var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_object = Obj(); var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_bool = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_bool = 0; // 0x27e PushV
	GetScene(var_34_object); // 0x27f Func
	
Label_641:
	var_41_int = 1; // 0x281 PushI
	var_42_int = var_25_int + var_41_int; // 0x282 Add
	var_43_int = var_24_string + var_42_int; // 0x283 Add
	GetLocator(var_43_int, var_37_bool, var_38_cvector, var_39_cvector); // 0x284 ObjFunc
	var_44_bool = var_37_bool == 0; // 0x286 Not
	if(var_44_bool == 0) goto Label_649; // 0x287 JumpB
	goto Label_668; // 0x288 Jump
	
Label_668:
	WaitForAnimEnd(var_36_bool); // 0x29c Func
	var_45_bool = var_36_bool == 0; // 0x29e Not
	if(var_45_bool == 0) goto Label_676; // 0x29f JumpB
	var_46_object = var_0_object; // 0x2a0 PushT
	if(var_46_object == 0) goto Label_676; // 0x2a1 JumpB
	var_23_bool = 0; // 0x2a2 MovB
	return 14; // 0x2a3 Return
	
Label_676:
	var_47_float = GetByIndex(var_35_cvector, 0); // 0x2a4 PushE
	var_48_float = GetByIndex(var_35_cvector, 2); // 0x2a5 PushE
	Rotate(var_47_float, var_48_float, var_40_bool); // 0x2a6 Func
	var_49_bool = var_40_bool; // 0x2a8 Push
	if(var_49_bool == 0) goto Label_683; // 0x2a9 JumpB
	goto Label_688; // 0x2aa Jump
	
Label_688:
	var_23_bool = 1; // 0x2b0 MovB
	return 14; // 0x2b1 Return
	
Label_683:
	var_50_object = var_0_object; // 0x2ab PushT
	if(var_50_object == 0) goto Label_687; // 0x2ac JumpB
	var_23_bool = 0; // 0x2ad MovB
	return 14; // 0x2ae Return
	
Label_687:
	goto Label_676; // 0x2af Jump
	
Label_649:
	var_35_cvector = var_39_cvector; // 0x289 Mov
	MovePoint(var_38_cvector, var_26_bool, var_36_bool); // 0x28a Func
	var_51_bool = var_36_bool; // 0x28c Push
	if(var_51_bool == 0) goto Label_663; // 0x28d JumpB
	var_52_int = 0; var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); // 0x28e PushV
	var_52_int = var_25_int; // 0x28f Mov
	var_53_cvector = var_38_cvector; // 0x290 Mov
	var_54_cvector = var_39_cvector; // 0x291 Mov
	func_697(); // 0x292 NEW_2
	var_55_int = 1; // 0x294 PushI
	var_25_int = var_25_int + var_55_int; // 0x295 Add2
	goto Label_667; // 0x296 Jump
	
Label_667:
	goto Label_641; // 0x29b Jump
	
Label_663:
	var_56_object = var_0_object; // 0x297 PushT
	if(var_56_object == 0) goto Label_667; // 0x298 JumpB
	var_23_bool = 0; // 0x299 MovB
	return 14; // 0x29a Return
}


