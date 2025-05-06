task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_cvector, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_int, var_14_bool, var_15_object)
{
	var_16_int = 1; // 0x85 PushI
	if(var_16_int == 0) goto Label_340; // 0x86 JumpB
	func_1576(); // 0x88 Call
	var_18_int = 10025; // 0x8a PushI
	var_19_bool = var_15_object == var_18_int; // 0x8b Eq
	if(var_19_bool == 0) goto Label_156; // 0x8c JumpB
	var_20_object = Obj(); var_21_object = Obj(); // 0x8d PushV
	var_20_object = var_1_object; // 0x8e MovT
	var_21_object = var_0_object; // 0x8f MovT
	func_1638(var_21_object); // 0x90 Call
	var_28_object = Obj(); var_29_object = Obj(); // 0x92 PushV
	var_28_object = var_1_object; // 0x93 MovT
	var_29_object = var_0_object; // 0x94 MovT
	func_1646(); // 0x95 Call
	var_36_object = Obj(); var_37_object = Obj(); // 0x97 PushV
	var_36_object = var_1_object; // 0x98 MovT
	var_37_object = var_0_object; // 0x99 MovT
	func_1653(); // 0x9a Call
	
Label_156:
	var_40_int = 10024; // 0x9c PushI
	var_41_bool = var_15_object == var_40_int; // 0x9d Eq
	if(var_41_bool == 0) goto Label_174; // 0x9e JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x9f PushV
	var_42_object = var_1_object; // 0xa0 MovT
	var_43_object = var_0_object; // 0xa1 MovT
	func_1638(var_43_object); // 0xa2 Call
	var_44_object = Obj(); var_45_object = Obj(); // 0xa4 PushV
	var_44_object = var_1_object; // 0xa5 MovT
	var_45_object = var_0_object; // 0xa6 MovT
	func_1646(); // 0xa7 Call
	var_46_object = Obj(); var_47_object = Obj(); // 0xa9 PushV
	var_46_object = var_1_object; // 0xaa MovT
	var_47_object = var_0_object; // 0xab MovT
	func_1653(); // 0xac Call
	
Label_174:
	var_48_int = 10017; // 0xae PushI
	var_49_bool = var_15_object == var_48_int; // 0xaf Eq
	if(var_49_bool == 0) goto Label_182; // 0xb0 JumpB
	var_50_object = Obj(); var_51_object = Obj(); // 0xb1 PushV
	var_50_object = var_1_object; // 0xb2 MovT
	var_51_object = var_0_object; // 0xb3 MovT
	func_1627(); // 0xb4 Call
	
Label_182:
	var_57_int = 10018; // 0xb6 PushI
	var_58_bool = var_15_object == var_57_int; // 0xb7 Eq
	if(var_58_bool == 0) goto Label_190; // 0xb8 JumpB
	var_59_object = Obj(); var_60_object = Obj(); // 0xb9 PushV
	var_59_object = var_1_object; // 0xba MovT
	var_60_object = var_0_object; // 0xbb MovT
	func_1627(); // 0xbc Call
	
Label_190:
	var_61_int = 10011; // 0xbe PushI
	var_62_bool = var_14_bool == var_61_int; // 0xbf Eq
	if(var_62_bool == 0) goto Label_208; // 0xc0 JumpB
	var_63_string = ""; // 0xc1 PushV
	var_63_string = "Neutral"; // 0xc2 MovS
	func_116(var_15_object, var_63_string); // 0xc3 Call
	var_78_int = 9131; // 0xc5 PushI
	SetMessage(var_78_int); // 0xc6 TObjFunc
	ClearReplies(); // 0xc8 TObjFunc
	var_79_int = 9132; // 0xca PushI
	var_80_int = 10013; // 0xcb PushI
	var_81_int = 10012; // 0xcc PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0xcd TObjFunc
	return 0; // 0xcf Return
	
Label_208:
	var_82_int = 10013; // 0xd0 PushI
	var_83_bool = var_14_bool == var_82_int; // 0xd1 Eq
	if(var_83_bool == 0) goto Label_231; // 0xd2 JumpB
	var_84_string = ""; // 0xd3 PushV
	var_84_string = "Neutral"; // 0xd4 MovS
	func_116(var_15_object, var_84_string); // 0xd5 Call
	var_85_int = 9133; // 0xd7 PushI
	SetMessage(var_85_int); // 0xd8 TObjFunc
	ClearReplies(); // 0xda TObjFunc
	var_86_int = 9134; // 0xdc PushI
	var_87_int = 10019; // 0xdd PushI
	var_88_int = 10014; // 0xde PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0xdf TObjFunc
	var_89_int = 9135; // 0xe1 PushI
	var_90_int = 10016; // 0xe2 PushI
	var_91_int = 10015; // 0xe3 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0xe4 TObjFunc
	return 0; // 0xe6 Return
	
Label_231:
	var_92_int = 10016; // 0xe7 PushI
	var_93_bool = var_14_bool == var_92_int; // 0xe8 Eq
	if(var_93_bool == 0) goto Label_254; // 0xe9 JumpB
	var_94_string = ""; // 0xea PushV
	var_94_string = "Neutral"; // 0xeb MovS
	func_116(var_15_object, var_94_string); // 0xec Call
	var_95_int = 9136; // 0xee PushI
	SetMessage(var_95_int); // 0xef TObjFunc
	ClearReplies(); // 0xf1 TObjFunc
	var_96_int = 9137; // 0xf3 PushI
	var_97_int = -1; // 0xf4 PushI
	var_98_int = 10017; // 0xf5 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0xf6 TObjFunc
	var_99_int = 9138; // 0xf8 PushI
	var_100_int = -1; // 0xf9 PushI
	var_101_int = 10018; // 0xfa PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0xfb TObjFunc
	return 0; // 0xfd Return
	
Label_254:
	var_102_int = 10019; // 0xfe PushI
	var_103_bool = var_14_bool == var_102_int; // 0xff Eq
	if(var_103_bool == 0) goto Label_272; // 0x100 JumpB
	var_104_string = ""; // 0x101 PushV
	var_104_string = "Neutral"; // 0x102 MovS
	func_116(var_15_object, var_104_string); // 0x103 Call
	var_105_int = 9139; // 0x105 PushI
	SetMessage(var_105_int); // 0x106 TObjFunc
	ClearReplies(); // 0x108 TObjFunc
	var_106_int = 9140; // 0x10a PushI
	var_107_int = 10021; // 0x10b PushI
	var_108_int = 10020; // 0x10c PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x10d TObjFunc
	return 0; // 0x10f Return
	
Label_272:
	var_109_int = 10021; // 0x110 PushI
	var_110_bool = var_14_bool == var_109_int; // 0x111 Eq
	if(var_110_bool == 0) goto Label_300; // 0x112 JumpB
	var_111_string = ""; // 0x113 PushV
	var_111_string = "Neutral"; // 0x114 MovS
	func_116(var_15_object, var_111_string); // 0x115 Call
	var_112_int = 9141; // 0x117 PushI
	SetMessage(var_112_int); // 0x118 TObjFunc
	ClearReplies(); // 0x11a TObjFunc
	var_113_int = 9142; // 0x11c PushI
	var_114_int = 10023; // 0x11d PushI
	var_115_int = 10022; // 0x11e PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x11f TObjFunc
	var_116_bool = 0; var_117_object = Obj(); // 0x121 PushV
	var_117_object = var_1_object; // 0x122 MovT
	func_1659(var_116_bool, var_117_object); // 0x123 Call
	if(var_116_bool == 0) goto Label_299; // 0x125 JumpB
	var_124_int = 9144; // 0x126 PushI
	var_125_int = -1; // 0x127 PushI
	var_126_int = 10024; // 0x128 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x129 TObjFunc
	
Label_299:
	return 0; // 0x12b Return
	
Label_300:
	var_127_int = 10023; // 0x12c PushI
	var_128_bool = var_14_bool == var_127_int; // 0x12d Eq
	if(var_128_bool == 0) goto Label_328; // 0x12e JumpB
	var_129_string = ""; // 0x12f PushV
	var_129_string = "Neutral"; // 0x130 MovS
	func_116(var_15_object, var_129_string); // 0x131 Call
	var_130_int = 9143; // 0x133 PushI
	SetMessage(var_130_int); // 0x134 TObjFunc
	ClearReplies(); // 0x136 TObjFunc
	var_131_bool = 0; var_132_object = Obj(); // 0x138 PushV
	var_132_object = var_1_object; // 0x139 MovT
	func_1659(var_131_bool, var_132_object); // 0x13a Call
	if(var_131_bool == 0) goto Label_322; // 0x13c JumpB
	var_133_int = 9145; // 0x13d PushI
	var_134_int = -1; // 0x13e PushI
	var_135_int = 10025; // 0x13f PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x140 TObjFunc
	
Label_322:
	var_136_int = 9146; // 0x142 PushI
	var_137_int = 10016; // 0x143 PushI
	var_138_int = 10026; // 0x144 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x145 TObjFunc
	return 0; // 0x147 Return
	
Label_328:
	var_3_string = 1; // 0x148 TMovB
	var_139_bool = 0; // 0x149 PushV
	func_1697(var_139_bool); // 0x14a Call
	if(var_139_bool == 0) goto Label_336; // 0x14c JumpB
	lshStopAnimation(); // 0x14d Func
	goto Label_338; // 0x14f Jump
	
Label_338:
	return 0; // 0x152 Return
	
Label_336:
	StopAnimation(); // 0x150 Func
	
Label_340:
	return 0; // 0x154 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int, var_13_bool, var_14_object)
{
	func_460(); // 0x158 Call
	var_15_int = 0; var_16_object = Obj(); // 0x15a PushV
	var_16_object = var_14_object; // 0x15b Mov
	TaskCall(0); // 0x15c TaskCall
	func_0(var_17_object, var_15_int, var_16_object); // 0x15d Call
	TaskReturn(); // 0x15e TaskReturn
	return 0; // 0x160 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_string, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int, var_13_bool, var_14_object)
{
	var_15_string = "kill_player"; // 0x162 PushS
	var_16_bool = var_14_object == var_15_string; // 0x163 Eq
	if(var_16_bool == 0) goto Label_366; // 0x164 JumpB
	func_460(); // 0x166 Call
	TaskCall(3); // 0x169 TaskCall
	func_465(); // 0x16a Call
	TaskReturn(); // 0x16b TaskReturn
	goto Label_370; // 0x16d Jump
	
Label_370:
	return 0; // 0x172 Return
	
Label_366:
	var_378_string = "talk_player"; // 0x16e PushS
	var_379_bool = var_14_object == var_378_string; // 0x16f Eq
	if(var_379_bool == 0) goto Label_370; // 0x170 JumpB
	EventDisable(0); // 0x171 EventDisable
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int, var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0; // 0x173 PushV
	IsPlayerActor(var_14_object, var_16_bool); // 0x174 Func
	var_17_bool = var_16_bool; // 0x176 Push
	if(var_17_bool == 0) goto Label_381; // 0x177 JumpB
	var_18_bool = 0; var_19_string = ""; var_20_string = ""; // 0x178 PushV
	var_19_string = "quest_d3_01"; // 0x179 MovS
	var_20_string = "kill_player"; // 0x17a MovS
	func_1615(var_18_bool, var_19_string, var_20_string); // 0x17b Call
	
Label_381:
	return 2; // 0x17d Return
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_int)
{
	var_15_int = 0; // 0x438 PushI
	var_16_bool = var_14_int != var_15_int; // 0x439 Neq
	if(var_16_bool == 0) goto Label_1084; // 0x43a JumpB
	return 0; // 0x43b Return
	
Label_1084:
	var_17_bool = 0; var_18_object = Obj(); // 0x43c PushV
	var_18_object = var_1_object; // 0x43d MovT
	func_1117(var_17_bool, var_18_object); // 0x43e Call
	var_53_bool = var_17_bool == 0; // 0x440 Not
	if(var_53_bool == 0) goto Label_1091; // 0x441 JumpB
	var_0_object = 1; // 0x442 TMovB
	
Label_1091:
	var_54_int = 0; // 0x443 PushI
	KillTimer(var_54_int); // 0x444 Func
	Stop(); // 0x446 Func
	return 0; // 0x448 Return
}


task_4_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object)
{
	RequestClearPath(var_14_object); // 0x44a Func
	return 0; // 0x44c Return
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object)
{
	func_1101(var_14_object); // 0x456 Call
	var_16_object = Obj(); // 0x458 PushV
	var_16_object = var_14_object; // 0x459 Mov
	func_1738(); // 0x45a Call
	return 0; // 0x45c Return
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0; // 0x475 PushV
	IsOverrideActive(var_16_bool); // 0x476 Func
	var_17_bool = var_16_bool == 0; // 0x478 Not
	if(var_17_bool == 0) goto Label_1148; // 0x479 JumpB
	WorkWithCorpse(var_14_object); // 0x47a Func
	
Label_1148:
	return 2; // 0x47c Return
}


task_5_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_int, var_16_float, var_17_float)
{
	return 0; // 0x4eb Return
}


task_5_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_string)
{
	return 0; // 0x4ed Return
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object)
{
	return 0; // 0x4ef Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_int, var_16_float, var_17_float)
{
	var_18_object = Obj(); var_19_int = 0; var_20_float = 0; // 0x6b6 PushV
	var_18_object = var_14_object; // 0x6b7 Mov
	var_19_int = var_15_int; // 0x6b8 Mov
	var_20_float = var_16_float; // 0x6b9 Mov
	func_1420(var_19_int, var_20_float); // 0x6ba Call
	return 0; // 0x6bc Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_string)
{
	var_16_float = 0; var_17_float = 0; // 0x6bd PushV
	var_18_string = "health"; // 0x6be PushS
	var_19_bool = var_15_string == var_18_string; // 0x6bf Eq
	if(var_19_bool == 0) goto Label_1737; // 0x6c0 JumpB
	var_20_string = "health"; // 0x6c1 PushS
	GetProperty(var_20_string, var_17_float); // 0x6c2 Func
	var_21_int = 0; // 0x6c4 PushI
	var_22_bool = var_17_float <= var_21_int; // 0x6c5 LE
	if(var_22_bool == 0) goto Label_1737; // 0x6c6 JumpB
	SignalDeath(var_14_object); // 0x6c7 Func
	
Label_1737:
	return 2; // 0x6c9 Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object)
{
	var_15_object = Obj(); // 0x6cb PushV
	var_15_object = var_14_object; // 0x6cc Mov
	func_1699(var_15_object); // 0x6cd Call
	return 0; // 0x6cf Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object)
{
	var_14_int = 0; var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_object = Obj(); var_18_int = 0; var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_object = Obj(); // 0x17e PushV
	GetPFPosition(var_21_object); // 0x17f Func
	GetDirection(var_0_object); // 0x181 Func
	
Label_387:
	var_22_int = 60; // 0x183 PushI
	irand(var_18_int, var_22_int); // 0x184 Func
	var_23_int = 30; // 0x186 PushI
	var_24_int = var_18_int + var_23_int; // 0x187 Add
	Sleep(var_24_int, var_19_bool); // 0x188 Func
	var_25_bool = var_19_bool; // 0x18a Push
	if(var_25_bool == 0) goto Label_400; // 0x18b JumpB
	func_341(); // 0x18d Call
	goto Label_458; // 0x18f Jump
	
Label_458:
	goto Label_387; // 0x1ca Jump
	
Label_400:
	GetPFPosition(var_20_cvector); // 0x190 Func
	var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); // 0x192 PushV
	var_27_cvector = var_1_object; // 0x193 MovT
	var_28_cvector = var_20_cvector; // 0x194 Mov
	func_1593(var_26_float, var_27_cvector, var_28_cvector); // 0x195 Call
	var_31_int = 40000; // 0x197 PushI
	var_32_bool = var_26_float > var_31_int; // 0x198 GT
	if(var_32_bool == 0) goto Label_444; // 0x199 JumpB
	FindPathTo(var_21_object, var_21_object); // 0x19a Func
	var_33_bool = var_21_object != 0; // 0x19c NullNeq
	if(var_33_bool == 0) goto Label_439; // 0x19d JumpB
	RotatePath(var_21_object, var_19_bool); // 0x19e Func
	var_34_bool = var_19_bool == 0; // 0x1a0 Not
	if(var_34_bool == 0) goto Label_419; // 0x1a1 JumpB
	goto Label_457; // 0x1a2 Jump
	
Label_457:
	goto Label_400; // 0x1c9 Jump
	
Label_419:
	var_35_bool = 0; // 0x1a3 PushB
	FollowPath(var_21_object, var_35_bool, var_19_bool); // 0x1a4 Func
	var_36_bool = var_19_bool == 0; // 0x1a6 Not
	if(var_36_bool == 0) goto Label_425; // 0x1a7 JumpB
	goto Label_457; // 0x1a8 Jump
	
Label_425:
	var_37_float = GetByIndex(var_0_object, 0); // 0x1a9 PushE
	var_38_float = GetByIndex(var_0_object, 2); // 0x1aa PushE
	Rotate(var_37_float, var_38_float, var_19_bool); // 0x1ab Func
	var_39_bool = var_19_bool == 0; // 0x1ad Not
	if(var_39_bool == 0) goto Label_432; // 0x1ae JumpB
	goto Label_457; // 0x1af Jump
	
Label_432:
	WaitForAnimEnd(var_19_bool); // 0x1b0 Func
	var_40_bool = var_19_bool == 0; // 0x1b2 Not
	if(var_40_bool == 0) goto Label_437; // 0x1b3 JumpB
	goto Label_457; // 0x1b4 Jump
	
Label_437:
	goto Label_458; // 0x1b5 Jump
	
Label_439:
	var_41_int = 1; // 0x1b7 PushI
	Sleep(var_41_int); // 0x1b8 Func
	var_21_object = 0; // 0x1ba SetNull
	goto Label_457; // 0x1bb Jump
	
Label_444:
	var_42_float = GetByIndex(var_0_object, 0); // 0x1bc PushE
	var_43_float = GetByIndex(var_0_object, 2); // 0x1bd PushE
	Rotate(var_42_float, var_43_float, var_19_bool); // 0x1be Func
	var_44_bool = var_19_bool == 0; // 0x1c0 Not
	if(var_44_bool == 0) goto Label_451; // 0x1c1 JumpB
	goto Label_457; // 0x1c2 Jump
	
Label_451:
	WaitForAnimEnd(var_19_bool); // 0x1c3 Func
	var_45_bool = var_19_bool == 0; // 0x1c5 Not
	if(var_45_bool == 0) goto Label_456; // 0x1c6 JumpB
	goto Label_457; // 0x1c7 Jump
	
Label_456:
	goto Label_458; // 0x1c8 Jump
}


func_0(var_0_object, var_15_int, var_16_object)
{
	var_18_object = Obj(); var_19_bool = 0; var_20_int = 0; var_21_bool = 0; var_22_object = Obj(); var_23_bool = 0; var_24_int = 0; var_25_bool = 0; // 0x0 PushV
	var_0_object = var_16_object; // 0x1 TMov
	var_26_bool = 0; var_27_object = Obj(); // 0x2 PushV
	var_27_object = var_16_object; // 0x3 Mov
	func_1498(var_27_object); // 0x4 Call
	var_66_bool = var_26_bool == 0; // 0x6 Not
	if(var_66_bool == 0) goto Label_10; // 0x7 JumpB
	var_15_int = -2; // 0x8 MovI
	return 8; // 0x9 Return
	
Label_10:
	CreateDialog(var_22_object); // 0xa Func
	var_67_int = 0; // 0xc PushV
	func_1693(var_67_int); // 0xd Call
	SetNPCName(var_67_int); // 0xf ObjFunc
	var_68_string = ""; // 0x11 PushV
	func_1695(var_68_string); // 0x12 Call
	SetPhoto(var_68_string); // 0x14 ObjFunc
	var_69_int = 0; // 0x16 PushV
	func_1676(var_69_int); // 0x17 Call
	SetPlayerName(var_69_int); // 0x19 ObjFunc
	var_24_int = -1; // 0x1b MovI
	IsOverrideActive(var_23_bool); // 0x1c Func
	var_77_bool = var_23_bool; // 0x1e Push
	if(var_77_bool == 0) goto Label_34; // 0x1f JumpB
	var_15_int = -2; // 0x20 MovI
	return 8; // 0x21 Return
	
Label_34:
	DoDialog(var_22_object); // 0x22 Func
	var_78_object = Obj(); var_79_object = Obj(); // 0x24 PushV
	var_78_object = var_16_object; // 0x25 Mov
	var_79_object = var_22_object; // 0x26 Mov
	TaskCall(1); // 0x27 TaskCall
	func_63(var_80_object, var_81_object, var_82_string, var_83_bool, var_78_object, var_79_object); // 0x28 Call
	TaskReturn(); // 0x29 TaskReturn
	IsDialogEnd(var_25_bool); // 0x2b ObjFunc
	
Label_45:
	var_112_bool = var_25_bool == 0; // 0x2d Not
	if(var_112_bool == 0) goto Label_52; // 0x2e JumpB
	sync(); // 0x2f Func
	IsDialogEnd(var_25_bool); // 0x31 ObjFunc
	goto Label_45; // 0x33 Jump
	
Label_52:
	var_113_object = Obj(); // 0x34 PushV
	var_113_object = var_16_object; // 0x35 Mov
	func_1554(); // 0x36 Call
	StopDialog(var_22_object); // 0x38 Func
	GetReturnValue(var_24_int); // 0x3a ObjFunc
	var_15_int = var_24_int; // 0x3c Mov
	return 8; // 0x3d Return
}


func_1284(var_23_string, var_24_int)
{
	var_25_int = 0; var_26_int = 0; // 0x504 PushV
	GetProperty(var_23_string, var_26_int); // 0x505 ObjFunc
	var_27_int = var_26_int + var_24_int; // 0x507 Add
	SetProperty(var_23_string, var_27_int); // 0x508 ObjFunc
	return 2; // 0x50a Return
}


func_1669(var_118_bool)
{
	var_120_int = 0; var_121_int = 0; // 0x685 PushV
	var_122_string = "money"; // 0x686 PushS
	GetProperty(var_122_string, var_121_int); // 0x687 ObjFunc
	var_123_int = 10000; // 0x689 PushI
	var_118_bool = var_121_int >= var_123_int; // 0x68a GE2
	return 2; // 0x68b Return
}


func_1291(var_279_float, var_280_object, var_281_float, var_282_int)
{
	var_286_int = 0; var_287_string = ""; var_288_int = 0; var_289_float = 0; var_290_float = 0; var_291_float = 0; var_292_int = 0; var_293_string = ""; var_294_int = 0; var_295_float = 0; var_296_float = 0; var_297_float = 0; // 0x50b PushV
	var_298_bool = 0; var_299_object = Obj(); var_300_string = ""; // 0x50c PushV
	var_299_object = var_280_object; // 0x50d Mov
	var_300_string = "health"; // 0x50e MovS
	func_1272(var_298_bool, var_299_object, var_300_string); // 0x50f Call
	var_301_bool = var_298_bool == 0; // 0x511 Not
	if(var_301_bool == 0) goto Label_1301; // 0x512 JumpB
	var_279_float = 0.0; // 0x513 MovF
	return 12; // 0x514 Return
	
Label_1301:
	var_302_bool = 0; var_303_object = Obj(); var_304_string = ""; // 0x515 PushV
	var_303_object = var_280_object; // 0x516 Mov
	var_304_string = "armor"; // 0x517 MovS
	func_1272(var_302_bool, var_303_object, var_304_string); // 0x518 Call
	var_305_bool = var_302_bool == 0; // 0x51a Not
	if(var_305_bool == 0) goto Label_1310; // 0x51b JumpB
	var_292_int = 0; // 0x51c MovI
	goto Label_1313; // 0x51d Jump
	
Label_1313:
	var_306_string = "armor_"; // 0x521 PushS
	var_307_string = ""; var_308_int = 0; // 0x522 PushV
	var_308_int = var_282_int; // 0x523 Mov
	func_1264(var_307_string, var_308_int); // 0x524 Call
	var_293_string = var_306_string + var_307_string; // 0x526 Add2
	var_311_bool = 0; var_312_object = Obj(); var_313_string = ""; // 0x527 PushV
	var_312_object = var_280_object; // 0x528 Mov
	var_313_string = var_293_string; // 0x529 Mov
	func_1272(var_311_bool, var_312_object, var_313_string); // 0x52a Call
	var_314_bool = var_311_bool == 0; // 0x52c Not
	if(var_314_bool == 0) goto Label_1328; // 0x52d JumpB
	var_294_int = 0; // 0x52e MovI
	goto Label_1330; // 0x52f Jump
	
Label_1330:
	var_315_float = 0; var_316_float = 0; var_317_float = 0; // 0x532 PushV
	var_318_int = var_292_int + var_294_int; // 0x533 Add
	var_319_float = 100.0; // 0x534 PushF
	var_316_float = var_318_int / var_318_int; // 0x535 Div2
	var_317_float = 1; // 0x536 MovI
	func_1597(var_315_float, var_316_float, var_317_float); // 0x537 Call
	var_295_float = var_315_float; // 0x538 Mov
	var_321_string = "health"; // 0x53a PushS
	GetProperty(var_321_string, var_296_float); // 0x53b ObjFunc
	var_322_int = 1; // 0x53d PushI
	var_323_int = var_322_int - var_295_float; // 0x53e Sub
	var_297_float = var_281_float * var_323_int; // 0x53f Mult2
	var_324_string = "health"; // 0x540 PushS
	var_325_float = 0; var_326_float = 0; var_327_float = 0; var_328_float = 0; // 0x541 PushV
	var_326_float = var_296_float - var_297_float; // 0x542 Sub2
	var_327_float = 0; // 0x543 MovI
	var_328_float = 1; // 0x544 MovI
	func_1604(var_325_float, var_326_float, var_327_float, var_328_float); // 0x545 Call
	SetProperty(var_324_string, var_325_float); // 0x547 ObjFunc
	var_279_float = var_297_float; // 0x549 Mov
	return 12; // 0x54a Return
	
Label_1328:
	GetProperty(var_293_string, var_294_int); // 0x530 ObjFunc
	
Label_1310:
	var_331_string = "armor"; // 0x51e PushS
	GetProperty(var_331_string, var_292_int); // 0x51f ObjFunc
}


func_1676(var_69_int)
{
	var_70_int = 0; var_71_int = 0; // 0x68c PushV
	var_72_string = "player"; // 0x68d PushS
	GetVariable(var_72_string, var_71_int); // 0x68e Func
	var_73_int = 0; // 0x690 PushI
	var_74_bool = var_71_int == var_73_int; // 0x691 Eq
	if(var_74_bool == 0) goto Label_1686; // 0x692 JumpB
	var_69_int = 200001; // 0x693 MovI
	return 2; // 0x694 Return
	
Label_1686:
	var_75_int = 1; // 0x696 PushI
	var_76_bool = var_71_int == var_75_int; // 0x697 Eq
	if(var_76_bool == 0) goto Label_1691; // 0x698 JumpB
	var_69_int = 200002; // 0x699 MovI
	return 2; // 0x69a Return
	
Label_1691:
	var_69_int = 200003; // 0x69b MovI
	return 2; // 0x69c Return
}


func_907(var_0_object)
{
	var_224_cvector = CVector(0,0,0); var_225_cvector = CVector(0,0,0); var_226_cvector = CVector(0,0,0); var_227_cvector = CVector(0,0,0); // 0x38b PushV
	Face(var_0_object); // 0x38c Func
	var_228_string = "all"; // 0x38e PushS
	var_229_string = "bjump"; // 0x38f PushS
	PlayAnimation(var_228_string, var_229_string); // 0x390 Func
	GetPFPosition(var_226_cvector); // 0x392 TObjFunc
	GetPFPosition(var_227_cvector); // 0x394 Func
	WaitForAnimEnd(); // 0x396 Func
	StopAsync(); // 0x398 Func
	var_230_cvector = CVector(0.0, 0.0, 0.0); // 0x39a PushVec
	SetSpeed(var_230_cvector); // 0x39b Func
	return 4; // 0x39d Return
}


func_1420(var_18_object, var_19_int)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_int = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_string = ""; var_31_object = Obj(); var_32_object = Obj(); var_33_cvector = CVector(0,0,0); var_34_float = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; // 0x58c PushV
	var_41_bool = 0; // 0x58d PushV
	var_41_bool = 0; // 0x58e MovB
	var_42_int = 4; // 0x58f PushI
	var_43_bool = var_19_int != var_42_int; // 0x590 Neq
	if(var_43_bool == 0) goto Label_1430; // 0x591 JumpB
	var_44_int = 5; // 0x592 PushI
	var_45_bool = var_19_int != var_44_int; // 0x593 Neq
	if(var_45_bool == 0) goto Label_1430; // 0x594 JumpB
	var_41_bool = 1; // 0x595 MovB
	
Label_1430:
	if(var_41_bool == 0) goto Label_1449; // 0x596 JumpB
	GetScene(var_31_object); // 0x597 Func
	GetPosition(var_33_cvector); // 0x599 Func
	GetEyesHeight(var_34_float); // 0x59b Func
	var_46_float = GetByIndex(var_33_cvector, 1); // 0x59d PushE
	var_47_int = 2; // 0x59e PushI
	var_48_float = var_34_float / var_47_int; // 0x59f Div
	var_46_float = var_46_float + var_48_float; // 0x5a0 Add2
	SetByIndex(var_33_cvector, 1) = var_46_float; // 0x5a1 PopE
	var_49_string = "scripted"; // 0x5a2 PushS
	var_50_cvector = CVector(0.0, 0.0, 1.0); // 0x5a3 PushVec
	var_51_string = "blood.xml"; // 0x5a4 PushS
	AddActorByType(var_32_object, var_49_string, var_31_object, var_33_cvector, var_50_cvector, var_51_string); // 0x5a5 Func
	var_32_object = 0; // 0x5a7 SetNull
	var_31_object = 0; // 0x5a8 SetNull
	
Label_1449:
	var_52_bool = var_18_object == 0; // 0x5a9 NullEq
	if(var_52_bool == 0) goto Label_1452; // 0x5aa JumpB
	return 20; // 0x5ab Return
	
Label_1452:
	GetSecondaryAnimationType(var_35_int); // 0x5ac Func
	var_53_int = 0; // 0x5ae PushI
	var_54_bool = var_35_int < var_53_int; // 0x5af LT
	if(var_54_bool == 0) goto Label_1458; // 0x5b0 JumpB
	return 20; // 0x5b1 Return
	
Label_1458:
	GetPosition(var_36_cvector); // 0x5b2 ObjFunc
	GetPosition(var_37_cvector); // 0x5b4 Func
	GetDirection(var_38_cvector); // 0x5b6 Func
	var_39_cvector = var_37_cvector - var_36_cvector; // 0x5b8 Sub2
	var_55_float = GetByIndex(var_39_cvector, 0); // 0x5b9 PushE
	var_56_float = GetByIndex(var_38_cvector, 0); // 0x5ba PushE
	var_57_float = var_55_float * var_56_float; // 0x5bb Mult
	var_58_float = GetByIndex(var_39_cvector, 2); // 0x5bc PushE
	var_59_float = GetByIndex(var_38_cvector, 2); // 0x5bd PushE
	var_60_float = var_58_float * var_59_float; // 0x5be Mult
	var_61_int = var_57_float + var_60_float; // 0x5bf Add
	var_62_int = 0; // 0x5c0 PushI
	var_63_bool = var_61_int >= var_62_int; // 0x5c1 GE
	if(var_63_bool == 0) goto Label_1477; // 0x5c2 JumpB
	var_40_string = "fhit"; // 0x5c3 MovS
	goto Label_1478; // 0x5c4 Jump
	
Label_1478:
	var_64_string = "hit_react"; // 0x5c6 PushS
	var_65_string = "1"; // 0x5c7 PushS
	var_66_int = var_40_string + var_65_string; // 0x5c8 Add
	var_67_string = "2"; // 0x5c9 PushS
	var_68_int = var_40_string + var_67_string; // 0x5ca Add
	var_69_int = -10; // 0x5cb PushI
	FadeSecondaryAnimation(var_64_string, var_66_int, var_68_int, var_69_int); // 0x5cc Func
	return 20; // 0x5ce Return
	
Label_1477:
	var_40_string = "bhit"; // 0x5c5 MovS
}


func_1554()
{
	CameraSwitchToNormal(); // 0x613 Func
	return 0; // 0x615 Return
}


func_1558(var_89_string)
{
	var_90_float = 0; var_91_float = 0; var_92_float = 0; var_93_float = 0; // 0x616 PushV
	var_94_string = "playing "; // 0x617 PushS
	var_95_int = var_94_string + var_89_string; // 0x618 Add
	Trace(var_95_int); // 0x619 Func
	lshGetAnimTimes(var_89_string, var_92_float, var_93_float); // 0x61b Func
	lshPlayAnimation(var_92_float, var_93_float); // 0x61d Func
	var_96_string = "start: "; // 0x61f PushS
	var_97_int = var_96_string + var_92_float; // 0x620 Add
	Trace(var_97_int); // 0x621 Func
	var_98_string = "end: "; // 0x623 PushS
	var_99_int = var_98_string + var_93_float; // 0x624 Add
	Trace(var_99_int); // 0x625 Func
	return 4; // 0x627 Return
}


func_1693(var_67_int)
{
	var_67_int = 4031; // 0x69d MovI
	return 0; // 0x69e Return
}


func_926(var_0_object, var_185_bool)
{
	var_186_bool = 0; var_187_bool = 0; // 0x39e PushV
	var_188_string = "IsAttacking"; // 0x39f PushS
	var_189_int = 1; // 0x3a0 PushI
	var_190_bool = IsFuncExist(var_0_object, var_188_string, var_189_int); // 0x3a1 FuncExist
	if(var_190_bool == 0) goto Label_935; // 0x3a2 JumpB
	IsAttacking(var_187_bool); // 0x3a3 TObjFunc
	var_185_bool = var_187_bool; // 0x3a5 Mov
	return 2; // 0x3a6 Return
	
Label_935:
	var_185_bool = 0; // 0x3a7 MovB
	return 2; // 0x3a8 Return
}


func_1695(var_68_string)
{
	var_68_string = "ui/NPC_Black.png"; // 0x69f MovS
	return 0; // 0x6a0 Return
}


func_1697(var_86_bool)
{
	var_86_bool = 0; // 0x6a1 MovB
	return 0; // 0x6a2 Return
}


func_1699(var_15_object)
{
	var_16_bool = 0; var_17_bool = 0; // 0x6a3 PushV
	var_18_string = "revolver_ammo"; // 0x6a4 PushS
	var_19_int = 0; // 0x6a5 PushI
	var_20_int = 2; // 0x6a6 PushI
	AddItem(var_17_bool, var_18_string, var_19_int, var_20_int); // 0x6a7 Func
	var_21_string = "alpha_pills"; // 0x6a9 PushS
	var_22_int = 0; // 0x6aa PushI
	var_23_int = 2; // 0x6ab PushI
	AddItem(var_17_bool, var_21_string, var_22_int, var_23_int); // 0x6ac Func
	var_24_object = Obj(); // 0x6ae PushV
	var_24_object = var_15_object; // 0x6af Mov
	TaskCall(5); // 0x6b0 TaskCall
	func_1128(var_24_object); // 0x6b1 Call
	TaskReturn(); // 0x6b2 TaskReturn
	return 2; // 0x6b4 Return
}


func_1576()
{
	var_17_bool = 0; // 0x628 PushV
	func_1697(var_17_bool); // 0x629 Call
	if(var_17_bool == 0) goto Label_1582; // 0x62b JumpB
	lshStopSpeech(); // 0x62c Func
	
Label_1582:
	return 0; // 0x62e Return
}


func_937(var_2_object, var_4_bool)
{
	var_247_float = 0; var_248_int = 0; var_249_float = 0; var_250_int = 0; // 0x3a9 PushV
	var_251_bool = var_2_object == 0; // 0x3aa Not
	if(var_251_bool == 0) goto Label_941; // 0x3ab JumpB
	return 4; // 0x3ac Return
	
Label_941:
	var_252_bool = var_4_bool; // 0x3ad PushT
	if(var_252_bool == 0) goto Label_949; // 0x3ae JumpB
	var_253_int = -1; // 0x3af PushI
	var_4_bool = var_4_bool + var_253_int; // 0x3b0 Add2
	var_254_int = 0; // 0x3b1 PushI
	var_255_bool = var_4_bool > var_254_int; // 0x3b2 GT
	if(var_255_bool == 0) goto Label_949; // 0x3b3 JumpB
	return 4; // 0x3b4 Return
	
Label_949:
	rand(var_249_float); // 0x3b5 Func
	var_256_float = 0; // 0x3b7 PushV
	func_975(var_256_float); // 0x3b8 Call
	var_257_bool = var_249_float < var_256_float; // 0x3ba LT
	if(var_257_bool == 0) goto Label_968; // 0x3bb JumpB
	irand(var_250_int, var_249_float); // 0x3bc Func
	var_258_int = 1; // 0x3be PushI
	var_250_int = var_250_int + var_258_int; // 0x3bf Add2
	var_259_string = "attack"; // 0x3c0 PushS
	var_260_int = var_259_string + var_250_int; // 0x3c1 Add
	Speak(var_260_int); // 0x3c2 Func
	var_261_int = 0; // 0x3c4 PushV
	func_973(var_261_int); // 0x3c5 Call
	var_4_bool = var_261_int; // 0x3c6 TMov
	
Label_968:
	return 4; // 0x3c8 Return
}


func_810(var_351_bool, var_352_float)
{
	var_353_float = 0; var_354_bool = 0; var_355_float = 0; var_356_bool = 0; // 0x32a PushV
	rand(var_355_float); // 0x32b Func
	var_357_bool = var_355_float < var_352_float; // 0x32d LT
	if(var_357_bool == 0) goto Label_830; // 0x32e JumpB
	
Label_815:
	IsAnimationPlaying(var_356_bool); // 0x32f Func
	var_358_bool = var_356_bool == 0; // 0x331 Not
	if(var_358_bool == 0) goto Label_820; // 0x332 JumpB
	goto Label_829; // 0x333 Jump
	
Label_829:
	goto Label_832; // 0x33d Jump
	
Label_832:
	var_351_bool = 0; // 0x340 MovB
	return 4; // 0x341 Return
	
Label_820:
	var_359_bool = 0; // 0x334 PushV
	func_874(var_356_bool, var_359_bool); // 0x335 Call
	if(var_359_bool == 0) goto Label_826; // 0x337 JumpB
	var_351_bool = 1; // 0x338 MovB
	return 4; // 0x339 Return
	
Label_826:
	sync(); // 0x33a Func
	goto Label_815; // 0x33c Jump
	
Label_830:
	WaitForAnimEnd(); // 0x33e Func
}


func_1583(var_51_cvector, var_52_cvector)
{
	var_54_float = 0; var_55_float = 0; // 0x62f PushV
	var_56_int = var_52_cvector | var_52_cvector; // 0x630 Or
	var_55_float = sqrt(var_56_int); // 0x631 Sqrt2
	var_57_float = 0.0; // 0x632 PushF
	var_58_bool = var_55_float < var_57_float; // 0x633 LT
	if(var_58_bool == 0) goto Label_1591; // 0x634 JumpB
	var_51_cvector = CVector(0.0, 0.0, 0.0); // 0x635 MovV
	return 2; // 0x636 Return
	
Label_1591:
	var_51_cvector = var_52_cvector / var_52_cvector; // 0x637 Div2
	return 2; // 0x638 Return
}


func_691(var_0_object, var_265_float, var_266_int)
{
	var_267_object = Obj(); var_268_float = 0; var_269_float = 0; var_270_object = Obj(); var_271_float = 0; var_272_float = 0; // 0x2b3 PushV
	var_273_float = 0.9; // 0x2b4 PushF
	var_274_float = var_265_float * var_273_float; // 0x2b5 Mult
	GetVictim(var_274_float, var_270_object); // 0x2b6 Func
	ReportAttack(var_0_object); // 0x2b8 Func
	var_275_bool = var_270_object == var_0_object; // 0x2ba Eq
	if(var_275_bool == 0) goto Label_728; // 0x2bb JumpB
	var_276_float = 0; var_277_object = Obj(); var_278_int = 0; // 0x2bc PushV
	var_277_object = var_270_object; // 0x2bd Mov
	var_278_int = var_266_int; // 0x2be Mov
	func_480(var_278_int); // 0x2bf Call
	var_271_float = var_276_float; // 0x2c0 Mov
	var_279_float = 0; var_280_object = Obj(); var_281_float = 0; var_282_int = 0; // 0x2c2 PushV
	var_280_object = var_270_object; // 0x2c3 Mov
	var_281_float = var_271_float; // 0x2c4 Mov
	var_283_int = 0; var_284_object = Obj(); var_285_int = 0; // 0x2c5 PushV
	var_284_object = var_270_object; // 0x2c6 Mov
	var_285_int = var_266_int; // 0x2c7 Mov
	func_483(var_285_int); // 0x2c8 Call
	var_282_int = var_283_int; // 0x2c9 Mov
	func_1291(var_279_float, var_280_object, var_281_float, var_282_int); // 0x2cb Call
	var_272_float = var_279_float; // 0x2cc Mov
	var_332_int = 0; // 0x2ce PushV
	func_969(var_332_int); // 0x2cf Call
	ReportHit(var_0_object, var_332_int, var_272_float, var_271_float); // 0x2d1 Func
	var_333_object = Obj(); var_334_float = 0; // 0x2d3 PushV
	var_333_object = var_270_object; // 0x2d4 Mov
	var_334_float = var_272_float; // 0x2d5 Mov
	func_971(); // 0x2d6 Call
	
Label_728:
	return 6; // 0x2d8 Return
}


func_1593(var_26_float, var_27_cvector, var_28_cvector)
{
	var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); // 0x639 PushV
	var_30_cvector = var_28_cvector - var_27_cvector; // 0x63a Sub2
	var_26_float = var_30_cvector | var_30_cvector; // 0x63b Or2
	return 2; // 0x63c Return
}


func_1597(var_315_float, var_316_float, var_317_float)
{
	var_320_bool = var_316_float < var_317_float; // 0x63e LT
	if(var_320_bool == 0) goto Label_1602; // 0x63f JumpB
	var_315_float = var_316_float; // 0x640 Mov
	goto Label_1603; // 0x641 Jump
	
Label_1603:
	return 0; // 0x643 Return
	
Label_1602:
	var_315_float = var_317_float; // 0x642 Mov
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_78_object, var_79_object)
{
	var_0_object = var_79_object; // 0x40 TMov
	var_1_object = var_78_object; // 0x41 TMov
	var_3_string = 0; // 0x42 TMovB
	var_84_int = 1; // 0x43 PushI
	if(var_84_int == 0) goto Label_86; // 0x44 JumpB
	var_85_string = ""; // 0x45 PushV
	var_85_string = "Neutral"; // 0x46 MovS
	func_116(var_79_object, var_85_string); // 0x47 Call
	var_100_int = 9131; // 0x49 PushI
	SetMessage(var_100_int); // 0x4a TObjFunc
	ClearReplies(); // 0x4c TObjFunc
	var_101_int = 9132; // 0x4e PushI
	var_102_int = 10013; // 0x4f PushI
	var_103_int = 10012; // 0x50 PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x51 TObjFunc
	goto Label_86; // 0x53 Jump
	
Label_86:
	var_104_bool = 0; // 0x56 PushV
	func_1697(var_104_bool); // 0x57 Call
	if(var_104_bool == 0) goto Label_101; // 0x59 JumpB
	
Label_90:
	lshWaitForAnimEnd(); // 0x5a Func
	var_105_string = var_3_string; // 0x5c PushT
	if(var_105_string == 0) goto Label_95; // 0x5d JumpB
	goto Label_100; // 0x5e Jump
	
Label_100:
	goto Label_115; // 0x64 Jump
	
Label_115:
	return 0; // 0x73 Return
	
Label_95:
	var_106_string = ""; // 0x5f PushV
	var_106_string = var_2_object; // 0x60 MovT
	func_1558(var_106_string); // 0x61 Call
	goto Label_90; // 0x63 Jump
	
Label_101:
	var_107_string = "all"; // 0x65 PushS
	var_108_string = "idle"; // 0x66 PushS
	PlayAnimation(var_107_string, var_108_string); // 0x67 Func
	
Label_105:
	WaitForAnimEnd(); // 0x69 Func
	var_109_string = var_3_string; // 0x6b PushT
	if(var_109_string == 0) goto Label_110; // 0x6c JumpB
	goto Label_115; // 0x6d Jump
	
Label_110:
	var_110_string = "all"; // 0x6e PushS
	var_111_string = "idle"; // 0x6f PushS
	PlayAnimation(var_110_string, var_111_string); // 0x70 Func
	goto Label_105; // 0x72 Jump
}


func_834(var_0_object, var_193_bool, var_194_float)
{
	var_195_bool = 0; var_196_cvector = CVector(0,0,0); var_197_cvector = CVector(0,0,0); var_198_cvector = CVector(0,0,0); var_199_float = 0; var_200_bool = 0; var_201_cvector = CVector(0,0,0); var_202_cvector = CVector(0,0,0); var_203_cvector = CVector(0,0,0); var_204_float = 0; // 0x342 PushV
	
Label_835:
	IsAnimationPlaying(var_200_bool); // 0x343 Func
	var_205_bool = var_200_bool == 0; // 0x345 Not
	if(var_205_bool == 0) goto Label_840; // 0x346 JumpB
	goto Label_872; // 0x347 Jump
	
Label_872:
	var_193_bool = 0; // 0x368 MovB
	return 10; // 0x369 Return
	
Label_840:
	var_206_bool = 0; // 0x348 PushV
	func_874(var_204_float, var_206_bool); // 0x349 Call
	if(var_206_bool == 0) goto Label_846; // 0x34b JumpB
	var_193_bool = 1; // 0x34c MovB
	return 10; // 0x34d Return
	
Label_846:
	var_231_bool = 0; var_232_object = Obj(); // 0x34e PushV
	var_232_object = var_0_object; // 0x34f MovT
	func_1396(var_231_bool, var_232_object); // 0x350 Call
	var_233_bool = var_231_bool == 0; // 0x352 Not
	if(var_233_bool == 0) goto Label_854; // 0x353 JumpB
	var_193_bool = 0; // 0x354 MovB
	return 10; // 0x355 Return
	
Label_854:
	GetPFPosition(var_201_cvector); // 0x356 TObjFunc
	GetPFPosition(var_202_cvector); // 0x358 Func
	var_203_cvector = var_201_cvector - var_202_cvector; // 0x35a Sub2
	var_204_float = var_203_cvector | var_203_cvector; // 0x35b Or2
	var_234_float = var_194_float * var_194_float; // 0x35c Mult
	var_235_bool = var_204_float < var_234_float; // 0x35d LT
	if(var_235_bool == 0) goto Label_869; // 0x35e JumpB
	var_236_bool = 0; var_237_float = 0; // 0x35f PushV
	var_237_float = var_194_float; // 0x360 Mov
	func_730(var_204_float, var_236_bool, var_237_float); // 0x361 Call
	var_193_bool = 1; // 0x363 MovB
	return 10; // 0x364 Return
	
Label_869:
	sync(); // 0x365 Func
	goto Label_835; // 0x367 Jump
}


func_1604(var_325_float, var_326_float, var_327_float, var_328_float)
{
	var_329_bool = var_326_float < var_327_float; // 0x645 LT
	if(var_329_bool == 0) goto Label_1609; // 0x646 JumpB
	var_325_float = var_327_float; // 0x647 Mov
	return 0; // 0x648 Return
	
Label_1609:
	var_330_bool = var_326_float > var_328_float; // 0x649 GT
	if(var_330_bool == 0) goto Label_1613; // 0x64a JumpB
	var_325_float = var_328_float; // 0x64b Mov
	return 0; // 0x64c Return
	
Label_1613:
	var_325_float = var_326_float; // 0x64d Mov
	return 0; // 0x64e Return
}


func_969(var_332_int)
{
	var_332_int = 0; // 0x3c9 MovI
	return 0; // 0x3ca Return
}


func_1355(var_34_bool)
{
	var_36_bool = 0; var_37_bool = 0; // 0x54b PushV
	IsDead(var_37_bool); // 0x54c ObjFunc
	var_34_bool = var_37_bool; // 0x54e Mov
	return 2; // 0x54f Return
}


func_971()
{
	return 0; // 0x3cc Return
}


func_460()
{
	StopGroup0(); // 0x1cc Func
	Stop(); // 0x1ce Func
	return 0; // 0x1d0 Return
}


func_973(var_261_int)
{
	var_261_int = 1; // 0x3cd MovI
	return 0; // 0x3ce Return
}


func_1101(var_0_object)
{
	var_0_object = 1; // 0x44d TMovB
	var_15_int = 0; // 0x44e PushI
	KillTimer(var_15_int); // 0x44f Func
	Stop(); // 0x451 Func
	return 0; // 0x453 Return
}


func_1615(var_18_bool, var_19_string, var_20_string)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x64f PushV
	FindActor(var_22_object, var_19_string); // 0x650 Func
	var_23_bool = var_22_object == 0; // 0x652 NullEq
	if(var_23_bool == 0) goto Label_1622; // 0x653 JumpB
	var_18_bool = 0; // 0x654 MovB
	return 2; // 0x655 Return
	
Label_1622:
	Trigger(var_22_object, var_20_string); // 0x656 Func
	var_18_bool = 1; // 0x658 MovB
	return 2; // 0x659 Return
}


func_1487()
{
	var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0); var_174_cvector = CVector(0,0,0); var_175_cvector = CVector(0,0,0); var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); // 0x5cf PushV
	GetPosition(var_175_cvector); // 0x5d0 ObjFunc
	GetPosition(var_176_cvector); // 0x5d2 Func
	var_177_cvector = var_175_cvector - var_176_cvector; // 0x5d4 Sub2
	var_178_float = GetByIndex(var_177_cvector, 0); // 0x5d5 PushE
	var_179_float = GetByIndex(var_177_cvector, 2); // 0x5d6 PushE
	RotateAsync(var_178_float, var_179_float); // 0x5d7 Func
	return 6; // 0x5d9 Return
}


func_465()
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x1d1 PushV
	var_24_string = "player"; // 0x1d2 PushS
	FindActor(var_23_object, var_24_string); // 0x1d3 Func
	var_25_bool = var_23_object == 0; // 0x1d5 Not
	if(var_25_bool == 0) goto Label_472; // 0x1d6 JumpB
	return 2; // 0x1d7 Return
	
Label_472:
	var_26_object = Obj(); var_27_bool = 0; var_28_float = 0; // 0x1d8 PushV
	var_26_object = var_23_object; // 0x1d9 Mov
	var_27_bool = 1; // 0x1da MovB
	var_28_float = 180.0; // 0x1db MovF
	func_486(var_18_int, var_19_int, var_20_bool, var_21_int, var_22_object, var_23_object, var_26_object, var_27_bool, var_28_float); // 0x1dc Call
	return 2; // 0x1de Return
}


func_977(var_0_object, var_1_object, var_109_bool, var_110_object, var_111_float, var_112_float, var_113_bool, var_114_bool)
{
	var_117_bool = 0; var_118_bool = 0; var_119_object = Obj(); var_120_cvector = CVector(0,0,0); var_121_cvector = CVector(0,0,0); var_122_cvector = CVector(0,0,0); var_123_float = 0; var_124_object = Obj(); var_125_bool = 0; var_126_bool = 0; var_127_object = Obj(); var_128_cvector = CVector(0,0,0); var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0); var_131_float = 0; var_132_object = Obj(); // 0x3d1 PushV
	var_0_object = 0; // 0x3d2 TMovB
	var_1_object = var_110_object; // 0x3d3 TMov
	var_126_bool = var_114_bool; // 0x3d4 Mov
	
Label_981:
	var_133_bool = 0; var_134_object = Obj(); // 0x3d5 PushV
	var_134_object = var_110_object; // 0x3d6 Mov
	func_1117(var_133_bool, var_134_object); // 0x3d7 Call
	var_137_bool = var_133_bool == 0; // 0x3d9 Not
	if(var_137_bool == 0) goto Label_989; // 0x3da JumpB
	var_109_bool = 0; // 0x3db MovB
	return 16; // 0x3dc Return
	
Label_989:
	GetPosition(var_128_cvector); // 0x3dd ObjFunc
	GetPosition(var_129_cvector); // 0x3df Func
	var_130_cvector = var_128_cvector - var_129_cvector; // 0x3e1 Sub2
	var_131_float = var_130_cvector | var_130_cvector; // 0x3e2 Or2
	var_138_bool = 0; // 0x3e3 PushV
	var_138_bool = 0; // 0x3e4 MovB
	var_139_int = 0; // 0x3e5 PushI
	var_140_bool = var_112_float > var_139_int; // 0x3e6 GT
	if(var_140_bool == 0) goto Label_1004; // 0x3e7 JumpB
	var_141_float = var_112_float * var_112_float; // 0x3e8 Mult
	var_142_bool = var_131_float > var_141_float; // 0x3e9 GT
	if(var_142_bool == 0) goto Label_1004; // 0x3ea JumpB
	var_138_bool = 1; // 0x3eb MovB
	
Label_1004:
	if(var_138_bool == 0) goto Label_1009; // 0x3ec JumpB
	Stop(); // 0x3ed Func
	var_109_bool = 0; // 0x3ef MovB
	return 16; // 0x3f0 Return
	
Label_1009:
	var_143_float = var_111_float * var_111_float; // 0x3f1 Mult
	var_144_bool = var_131_float > var_143_float; // 0x3f2 GT
	if(var_144_bool == 0) goto Label_1071; // 0x3f3 JumpB
	GetPFPosition(var_128_cvector); // 0x3f4 ObjFunc
	FindPathTo(var_132_object, var_128_cvector); // 0x3f6 Func
	var_145_bool = var_132_object != 0; // 0x3f8 NullNeq
	if(var_145_bool == 0) goto Label_1020; // 0x3f9 JumpB
	var_127_object = var_132_object; // 0x3fa Mov
	var_132_object = 0; // 0x3fb SetNull
	
Label_1020:
	var_146_bool = var_127_object != 0; // 0x3fc NullNeq
	if(var_146_bool == 0) goto Label_1053; // 0x3fd JumpB
	var_147_bool = var_126_bool; // 0x3fe Push
	if(var_147_bool == 0) goto Label_1030; // 0x3ff JumpB
	var_126_bool = 0; // 0x400 MovB
	RotatePath(var_127_object, var_125_bool); // 0x401 Func
	var_148_bool = var_125_bool == 0; // 0x403 Not
	if(var_148_bool == 0) goto Label_1030; // 0x404 JumpB
	goto Label_1077; // 0x405 Jump
	
Label_1077:
	var_109_bool = !var_0_object; // 0x435 Not2
	return 16; // 0x436 Return
	
Label_1030:
	var_149_int = 0; // 0x406 PushI
	var_150_float = 0.3; // 0x407 PushF
	SetTimer(var_149_int, var_150_float); // 0x408 Func
	var_151_string = ""; // 0x40a PushV
	func_1124(var_151_string); // 0x40b Call
	var_152_string = ""; // 0x40d PushV
	func_1126(var_152_string); // 0x40e Call
	FollowPath(var_127_object, var_113_bool, var_125_bool, var_151_string, var_152_string); // 0x410 Func
	var_153_bool = var_125_bool == 0; // 0x412 Not
	if(var_153_bool == 0) goto Label_1051; // 0x413 JumpB
	var_154_object = var_0_object; // 0x414 PushT
	if(var_154_object == 0) goto Label_1049; // 0x415 JumpB
	var_127_object = 0; // 0x416 SetNull
	goto Label_1077; // 0x417 Jump
	
Label_1049:
	goto Label_1076; // 0x419 Jump
	
Label_1076:
	goto Label_981; // 0x434 Jump
	
Label_1051:
	var_127_object = 0; // 0x41b SetNull
	goto Label_1069; // 0x41c Jump
	
Label_1069:
	var_132_object = 0; // 0x42d SetNull
	goto Label_1075; // 0x42e Jump
	
Label_1075:
	var_127_object = 0; // 0x433 SetNull
	
Label_1053:
	var_155_int = 0; // 0x41d PushI
	KillTimer(var_155_int); // 0x41e Func
	var_156_float = 0.5; // 0x420 PushF
	Sleep(var_156_float, var_125_bool); // 0x421 Func
	var_157_bool = var_125_bool == 0; // 0x423 Not
	if(var_157_bool == 0) goto Label_1065; // 0x424 JumpB
	var_158_object = var_0_object; // 0x425 PushT
	if(var_158_object == 0) goto Label_1065; // 0x426 JumpB
	var_127_object = 0; // 0x427 SetNull
	goto Label_1077; // 0x428 Jump
	
Label_1065:
	var_159_int = 0; // 0x429 PushI
	var_160_float = 0.3; // 0x42a PushF
	SetTimer(var_159_int, var_160_float); // 0x42b Func
	
Label_1071:
	var_161_int = 0; // 0x42f PushI
	KillTimer(var_161_int); // 0x430 Func
	goto Label_1077; // 0x432 Jump
}


func_975(var_256_float)
{
	var_256_float = 0.5; // 0x3cf MovF
	return 0; // 0x3d0 Return
}


func_1236(var_47_string)
{
	RemoveRTEnvelope(); // 0x4d5 Func
	SetDeathState(); // 0x4d7 Func
	Stop(); // 0x4d9 Func
	StopAsync(); // 0x4db Func
	StopSecondaryAnimation(); // 0x4dd Func
	var_48_string = "all"; // 0x4df PushS
	PlayAnimation(var_48_string, var_47_string); // 0x4e0 Func
	WaitForAnimEnd(); // 0x4e2 Func
	var_49_string = "all"; // 0x4e4 PushS
	LockAnimationEnd(var_49_string, var_47_string); // 0x4e5 Func
	RemoveEnvelope(); // 0x4e7 Func
	return 0; // 0x4e9 Return
}


func_341()
{
	return 0; // 0x155 Return
}


func_1360(var_23_bool, var_24_object)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); // 0x550 PushV
	var_29_bool = var_24_object == 0; // 0x551 NullEq
	if(var_29_bool == 0) goto Label_1365; // 0x552 JumpB
	var_23_bool = 0; // 0x553 MovB
	return 4; // 0x554 Return
	
Label_1365:
	var_30_bool = 0; // 0x555 PushV
	var_30_bool = 0; // 0x556 MovB
	var_31_string = "IsDead"; // 0x557 PushS
	var_32_int = 1; // 0x558 PushI
	var_33_bool = IsFuncExist(var_24_object, var_31_string, var_32_int); // 0x559 FuncExist
	if(var_33_bool == 0) goto Label_1377; // 0x55a JumpB
	var_34_bool = 0; var_35_object = Obj(); // 0x55b PushV
	var_35_object = var_24_object; // 0x55c Mov
	func_1355(var_35_object); // 0x55d Call
	if(var_34_bool == 0) goto Label_1377; // 0x55f JumpB
	var_30_bool = 1; // 0x560 MovB
	
Label_1377:
	if(var_30_bool == 0) goto Label_1380; // 0x561 JumpB
	var_23_bool = 0; // 0x562 MovB
	return 4; // 0x563 Return
	
Label_1380:
	GetScene(var_27_object); // 0x564 Func
	var_38_bool = var_27_object == 0; // 0x566 NullEq
	if(var_38_bool == 0) goto Label_1386; // 0x567 JumpB
	var_23_bool = 0; // 0x568 MovB
	return 4; // 0x569 Return
	
Label_1386:
	GetScene(var_28_object); // 0x56a ObjFunc
	var_39_bool = var_27_object != var_28_object; // 0x56c Neq
	if(var_39_bool == 0) goto Label_1392; // 0x56d JumpB
	var_23_bool = 0; // 0x56e MovB
	return 4; // 0x56f Return
	
Label_1392:
	var_23_bool = 1; // 0x570 MovB
	return 4; // 0x571 Return
}


func_1498(var_26_bool)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0; // 0x5da PushV
	GetPosition(var_37_cvector); // 0x5db ObjFunc
	GetEyesHeight(var_36_float); // 0x5dd ObjFunc
	var_44_float = GetByIndex(var_37_cvector, 1); // 0x5df PushE
	var_44_float = var_44_float + var_36_float; // 0x5e0 Add2
	SetByIndex(var_37_cvector, 1) = var_44_float; // 0x5e1 PopE
	GetPosition(var_38_cvector); // 0x5e2 Func
	GetEyesHeight(var_36_float); // 0x5e4 Func
	var_45_float = GetByIndex(var_38_cvector, 1); // 0x5e6 PushE
	var_45_float = var_45_float + var_36_float; // 0x5e7 Add2
	SetByIndex(var_38_cvector, 1) = var_45_float; // 0x5e8 PopE
	var_39_cvector = var_37_cvector - var_38_cvector; // 0x5e9 Sub2
	var_46_float = GetByIndex(var_39_cvector, 1); // 0x5ea PushE
	var_46_float = 0; // 0x5eb MovI
	SetByIndex(var_39_cvector, 1) = var_46_float; // 0x5ec PopE
	var_47_int = var_39_cvector | var_39_cvector; // 0x5ed Or
	var_48_float = sqrt(var_47_int); // 0x5ee Sqrt
	var_39_cvector = var_39_cvector / var_39_cvector; // 0x5ef Div2
	var_40_cvector = -var_39_cvector; // 0x5f0 Neg2
	var_49_int = 70; // 0x5f1 PushI
	var_50_float = var_39_cvector * var_49_int; // 0x5f2 Mult
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); // 0x5f3 PushV
	var_53_cvector = CVector(0.0, 1.0, 0.0); // 0x5f4 PushVec
	var_52_cvector = var_40_cvector ^ var_53_cvector; // 0x5f5 Xor2
	func_1583(var_51_cvector, var_52_cvector); // 0x5f6 Call
	var_59_int = 25; // 0x5f8 PushI
	var_60_float = var_51_cvector * var_59_int; // 0x5f9 Mult
	var_61_int = var_50_float + var_60_float; // 0x5fa Add
	var_62_cvector = CVector(0.0, 10.0, 0.0); // 0x5fb PushVec
	var_41_cvector = var_61_int - var_62_cvector; // 0x5fc Sub2
	var_42_cvector = var_38_cvector + var_41_cvector; // 0x5fd Add2
	IsOverrideActive(var_43_bool); // 0x5fe Func
	var_63_bool = var_43_bool; // 0x600 Push
	if(var_63_bool == 0) goto Label_1540; // 0x601 JumpB
	var_26_bool = 0; // 0x602 MovB
	return 16; // 0x603 Return
	
Label_1540:
	StopWorld(); // 0x604 Func
	CameraTransit(var_42_cvector, var_40_cvector); // 0x606 Func
	var_64_float = GetByIndex(var_41_cvector, 0); // 0x608 PushE
	var_65_float = GetByIndex(var_41_cvector, 2); // 0x609 PushE
	Rotate(var_64_float, var_65_float); // 0x60a Func
	CameraWaitForPlayFinish(); // 0x60c Func
	ResumeWorld(); // 0x60e Func
	var_26_bool = 1; // 0x610 MovB
	return 16; // 0x611 Return
}


func_1627()
{
	var_52_string = "d3q01"; // 0x65c PushS
	var_53_int = 8; // 0x65d PushI
	SetVariable(var_52_string, var_53_int); // 0x65e Func
	var_54_bool = 0; var_55_string = ""; var_56_string = ""; // 0x660 PushV
	var_55_string = "quest_d3_01"; // 0x661 MovS
	var_56_string = "gpatrol_attack"; // 0x662 MovS
	func_1615(var_54_bool, var_55_string, var_56_string); // 0x663 Call
	return 0; // 0x665 Return
}


func_730(var_0_object, var_236_bool, var_237_float)
{
	var_238_int = 0; var_239_bool = 0; var_240_int = 0; var_241_bool = 0; // 0x2da PushV
	irand(var_240_int, var_241_bool); // 0x2db Func
	var_242_int = 1; // 0x2dd PushI
	var_240_int = var_240_int + var_242_int; // 0x2de Add2
	Face(var_0_object); // 0x2df Func
	var_243_bool = 1; // 0x2e1 PushB
	SetAttackState(var_243_bool); // 0x2e2 Func
	var_244_string = "all"; // 0x2e4 PushS
	var_245_string = "attack_begin"; // 0x2e5 PushS
	var_246_int = var_245_string + var_240_int; // 0x2e6 Add
	PlayAnimation(var_244_string, var_246_int); // 0x2e7 Func
	WaitForAnimEnd(); // 0x2e9 Func
	func_937(var_240_int, var_241_bool); // 0x2ec Call
	var_262_bool = 0; var_263_object = Obj(); // 0x2ee PushV
	var_263_object = var_0_object; // 0x2ef MovT
	func_1396(var_262_bool, var_263_object); // 0x2f0 Call
	var_264_bool = var_262_bool == 0; // 0x2f2 Not
	if(var_264_bool == 0) goto Label_760; // 0x2f3 JumpB
	StopAsync(); // 0x2f4 Func
	var_236_bool = 0; // 0x2f6 MovB
	return 4; // 0x2f7 Return
	
Label_760:
	var_265_float = 0; var_266_int = 0; // 0x2f8 PushV
	var_265_float = var_237_float; // 0x2f9 Mov
	var_266_int = var_240_int; // 0x2fa Mov
	func_691(var_241_bool, var_265_float, var_266_int); // 0x2fb Call
	var_335_string = "all"; // 0x2fd PushS
	var_336_string = "attack_middle"; // 0x2fe PushS
	var_337_int = var_336_string + var_240_int; // 0x2ff Add
	HasAnimation(var_241_bool, var_335_string, var_337_int); // 0x300 Func
	var_338_bool = var_241_bool; // 0x302 Push
	if(var_338_bool == 0) goto Label_794; // 0x303 JumpB
	var_339_string = "all"; // 0x304 PushS
	var_340_string = "attack_middle"; // 0x305 PushS
	var_341_int = var_340_string + var_240_int; // 0x306 Add
	PlayAnimation(var_339_string, var_341_int); // 0x307 Func
	WaitForAnimEnd(); // 0x309 Func
	var_342_bool = 0; var_343_object = Obj(); // 0x30b PushV
	var_343_object = var_0_object; // 0x30c MovT
	func_1396(var_342_bool, var_343_object); // 0x30d Call
	var_344_bool = var_342_bool == 0; // 0x30f Not
	if(var_344_bool == 0) goto Label_789; // 0x310 JumpB
	StopAsync(); // 0x311 Func
	var_236_bool = 0; // 0x313 MovB
	return 4; // 0x314 Return
	
Label_789:
	var_345_float = 0; var_346_int = 0; // 0x315 PushV
	var_345_float = var_237_float; // 0x316 Mov
	var_346_int = var_240_int; // 0x317 Mov
	func_691(var_241_bool, var_345_float, var_346_int); // 0x318 Call
	
Label_794:
	var_347_bool = 0; // 0x31a PushB
	SetAttackState(var_347_bool); // 0x31b Func
	var_348_string = "all"; // 0x31d PushS
	var_349_string = "attack_end"; // 0x31e PushS
	var_350_int = var_349_string + var_240_int; // 0x31f Add
	PlayAnimation(var_348_string, var_350_int); // 0x320 Func
	var_351_bool = 0; var_352_float = 0; // 0x322 PushV
	var_352_float = 0.75; // 0x323 MovF
	func_810(var_351_bool, var_352_float); // 0x324 Call
	StopAsync(); // 0x326 Func
	var_236_bool = 1; // 0x328 MovB
	return 4; // 0x329 Return
}


func_1117(var_17_bool, var_18_object)
{
	var_19_bool = 0; var_20_object = Obj(); // 0x45e PushV
	var_20_object = var_18_object; // 0x45f Mov
	func_1396(var_19_bool, var_20_object); // 0x460 Call
	var_17_bool = var_19_bool; // 0x461 Mov
	return 0; // 0x463 Return
}


func_480(var_276_float)
{
	var_276_float = 0.15; // 0x1e1 MovF
	return 0; // 0x1e2 Return
}


func_483(var_283_int)
{
	var_283_int = 0; // 0x1e4 MovI
	return 0; // 0x1e5 Return
}


func_1124(var_151_string)
{
	var_151_string = "walk"; // 0x464 MovS
	return 0; // 0x465 Return
}


func_1638(var_20_object)
{
	var_22_object = Obj(); var_23_string = ""; var_24_int = 0; // 0x667 PushV
	var_22_object = var_20_object; // 0x668 Mov
	var_23_string = "money"; // 0x669 MovS
	var_24_int = -10000; // 0x66a MovI
	func_1284(var_23_string, var_24_int); // 0x66b Call
	return 0; // 0x66d Return
}


func_486(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_26_object, var_27_bool, var_28_float, var_115_bool)
{
	var_29_bool = 0; var_30_bool = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; var_35_bool = 0; var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_float = 0; var_39_bool = 0; var_40_bool = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; var_46_cvector = CVector(0,0,0); var_47_float = 0; var_48_float = 0; // 0x1e6 PushV
	var_1_object = 0; // 0x1e7 TMovI
	
Label_488:
	var_49_string = "all"; // 0x1e8 PushS
	var_50_string = "attack_begin"; // 0x1e9 PushS
	var_51_int = 1; // 0x1ea PushI
	var_52_int = var_1_object + var_51_int; // 0x1eb Add
	var_53_int = var_50_string + var_52_int; // 0x1ec Add
	HasAnimation(var_39_bool, var_49_string, var_53_int); // 0x1ed Func
	var_54_bool = var_39_bool == 0; // 0x1ef Not
	if(var_54_bool == 0) goto Label_498; // 0x1f0 JumpB
	goto Label_501; // 0x1f1 Jump
	
Label_501:
	var_2_object = 0; // 0x1f5 TMovI
	
Label_502:
	var_55_string = "attack"; // 0x1f6 PushS
	var_56_int = 1; // 0x1f7 PushI
	var_57_int = var_2_object + var_56_int; // 0x1f8 Add
	var_58_int = var_55_string + var_57_int; // 0x1f9 Add
	IsExisting3DSound(var_40_bool, var_58_int); // 0x1fa Func
	var_59_bool = var_40_bool == 0; // 0x1fc Not
	if(var_59_bool == 0) goto Label_511; // 0x1fd JumpB
	goto Label_514; // 0x1fe Jump
	
Label_514:
	var_4_bool = 0; // 0x202 TMovI
	var_60_string = "@GetAttackDistance"; // 0x203 PushS
	var_61_int = 1; // 0x204 PushI
	var_62_bool = IsFuncExist(var_26_object, var_60_string, var_61_int); // 0x205 FuncExist
	if(var_62_bool == 0) goto Label_524; // 0x206 JumpB
	GetAttackDistance(var_41_float); // 0x207 ObjFunc
	var_63_int = 50; // 0x209 PushI
	var_41_float = var_41_float + var_63_int; // 0x20a Add2
	goto Label_525; // 0x20b Jump
	
Label_525:
	var_64_int = 150; // 0x20d PushI
	var_65_bool = var_41_float >= var_64_int; // 0x20e GE
	if(var_65_bool == 0) goto Label_529; // 0x20f JumpB
	var_41_float = 150; // 0x210 MovI
	
Label_529:
	var_3_string = 0; // 0x211 TMovB
	var_0_object = var_26_object; // 0x212 TMov
	IsPlayerActor(var_0_object, var_44_bool); // 0x213 Func
	var_66_bool = var_27_bool; // 0x215 Push
	if(var_66_bool == 0) goto Label_537; // 0x216 JumpB
	var_45_bool = 0; // 0x217 MovB
	goto Label_538; // 0x218 Jump
	
Label_538:
	var_67_bool = 0; // 0x21a PushV
	var_67_bool = 0; // 0x21b MovB
	var_68_bool = 0; var_69_object = Obj(); // 0x21c PushV
	var_69_object = var_0_object; // 0x21d MovT
	func_1396(var_68_bool, var_69_object); // 0x21e Call
	if(var_68_bool == 0) goto Label_548; // 0x220 JumpB
	var_102_bool = var_3_string == 0; // 0x221 Not
	if(var_102_bool == 0) goto Label_548; // 0x222 JumpB
	var_67_bool = 1; // 0x223 MovB
	
Label_548:
	if(var_67_bool == 0) goto Label_674; // 0x224 JumpB
	GetPFPosition(var_42_cvector); // 0x225 TObjFunc
	GetPFPosition(var_43_cvector); // 0x227 Func
	var_46_cvector = var_42_cvector - var_43_cvector; // 0x229 Sub2
	var_47_float = var_46_cvector | var_46_cvector; // 0x22a Or2
	var_103_float = 400.0; // 0x22b PushF
	var_104_int = var_103_float + var_41_float; // 0x22c Add
	var_105_float = 400.0; // 0x22d PushF
	var_106_int = var_105_float + var_41_float; // 0x22e Add
	var_107_float = var_104_int * var_106_int; // 0x22f Mult
	var_108_bool = var_47_float >= var_107_float; // 0x230 GE
	if(var_108_bool == 0) goto Label_577; // 0x231 JumpB
	var_109_bool = 0; var_110_object = Obj(); var_111_float = 0; var_112_float = 0; var_113_bool = 0; var_114_bool = 0; // 0x232 PushV
	var_110_object = var_0_object; // 0x233 MovT
	var_111_float = var_41_float; // 0x234 Mov
	var_112_float = 10000.0; // 0x235 MovF
	var_113_bool = 1; // 0x236 MovB
	var_114_bool = 0; // 0x237 MovB
	TaskCall(4); // 0x238 TaskCall
	func_977(var_115_bool, var_116_object, var_109_bool, var_110_object, var_111_float, var_112_float, var_113_bool, var_114_bool); // 0x239 Call
	TaskReturn(); // 0x23a TaskReturn
	var_162_bool = var_115_bool == 0; // 0x23c Not
	if(var_162_bool == 0) goto Label_575; // 0x23d JumpB
	goto Label_674; // 0x23e Jump
	
Label_674:
	WaitForAnimEnd(); // 0x2a2 Func
	var_163_string = var_3_string; // 0x2a4 PushT
	if(var_163_string == 0) goto Label_679; // 0x2a5 JumpB
	return 20; // 0x2a6 Return
	
Label_679:
	var_164_string = "all"; // 0x2a7 PushS
	var_165_string = "attack_off"; // 0x2a8 PushS
	PlayAnimation(var_164_string, var_165_string); // 0x2a9 Func
	WaitForAnimEnd(); // 0x2ab Func
	var_166_bool = var_44_bool; // 0x2ad Push
	if(var_166_bool == 0) goto Label_690; // 0x2ae JumpB
	var_167_float = 2.0; // 0x2af PushF
	Sleep(var_167_float); // 0x2b0 Func
	
Label_690:
	return 20; // 0x2b2 Return
	
Label_575:
	var_45_bool = 0; // 0x23f MovB
	goto Label_673; // 0x240 Jump
	
Label_673:
	goto Label_538; // 0x2a1 Jump
	
Label_577:
	var_168_float = var_28_float * var_28_float; // 0x241 Mult
	var_169_bool = var_47_float >= var_168_float; // 0x242 GE
	if(var_169_bool == 0) goto Label_665; // 0x243 JumpB
	var_170_bool = var_45_bool == 0; // 0x244 Not
	if(var_170_bool == 0) goto Label_595; // 0x245 JumpB
	var_171_object = Obj(); // 0x246 PushV
	var_171_object = var_0_object; // 0x247 MovT
	func_1487(); // 0x248 Call
	var_180_string = "all"; // 0x24a PushS
	var_181_string = "attack_on"; // 0x24b PushS
	PlayAnimation(var_180_string, var_181_string); // 0x24c Func
	WaitForAnimEnd(); // 0x24e Func
	StopAsync(); // 0x250 Func
	var_45_bool = 1; // 0x252 MovB
	
Label_595:
	rand(var_48_float); // 0x253 Func
	var_182_bool = 0; // 0x255 PushV
	var_182_bool = 1; // 0x256 MovB
	var_183_float = 0.6; // 0x257 PushF
	var_184_bool = var_48_float < var_183_float; // 0x258 LT
	if(var_184_bool == 0) goto Label_607; // 0x259 JumpB
	var_185_bool = 0; // 0x25a PushV
	func_926(var_182_bool, var_185_bool); // 0x25b Call
	if(var_185_bool == 0) goto Label_607; // 0x25d JumpB
	var_182_bool = 0; // 0x25e MovB
	
Label_607:
	if(var_182_bool == 0) goto Label_621; // 0x25f JumpB
	Face(var_0_object); // 0x260 Func
	var_191_string = "all"; // 0x262 PushS
	var_192_string = "attack_stay"; // 0x263 PushS
	PlayAnimation(var_191_string, var_192_string); // 0x264 Func
	var_193_bool = 0; var_194_float = 0; // 0x266 PushV
	var_194_float = var_28_float; // 0x267 Mov
	func_834(var_48_float, var_193_bool, var_194_float); // 0x268 Call
	StopAsync(); // 0x26a Func
	goto Label_664; // 0x26c Jump
	
Label_664:
	goto Label_673; // 0x298 Jump
	
Label_621:
	Face(var_0_object); // 0x26d Func
	var_360_string = "all"; // 0x26f PushS
	var_361_string = "fjump"; // 0x270 PushS
	PlayAnimation(var_360_string, var_361_string); // 0x271 Func
	WaitForAnimEnd(); // 0x273 Func
	var_362_cvector = CVector(0.0, 0.0, 0.0); // 0x275 PushVec
	SetSpeed(var_362_cvector); // 0x276 Func
	Stop(); // 0x278 Func
	StopAsync(); // 0x27a Func
	var_363_bool = 0; // 0x27c PushV
	func_926(var_48_float, var_363_bool); // 0x27d Call
	var_364_bool = var_363_bool == 0; // 0x27f Not
	if(var_364_bool == 0) goto Label_664; // 0x280 JumpB
	var_365_bool = 0; var_366_object = Obj(); // 0x281 PushV
	var_366_object = var_0_object; // 0x282 MovT
	func_1396(var_365_bool, var_366_object); // 0x283 Call
	var_367_bool = var_365_bool == 0; // 0x285 Not
	if(var_367_bool == 0) goto Label_648; // 0x286 JumpB
	goto Label_674; // 0x287 Jump
	
Label_648:
	GetPFPosition(var_42_cvector); // 0x288 TObjFunc
	GetPFPosition(var_43_cvector); // 0x28a Func
	var_46_cvector = var_42_cvector - var_43_cvector; // 0x28c Sub2
	var_47_float = var_46_cvector | var_46_cvector; // 0x28d Or2
	var_368_float = var_28_float * var_28_float; // 0x28e Mult
	var_369_bool = var_47_float < var_368_float; // 0x28f LT
	if(var_369_bool == 0) goto Label_664; // 0x290 JumpB
	var_370_bool = 0; var_371_float = 0; // 0x291 PushV
	var_371_float = var_28_float; // 0x292 Mov
	func_730(var_48_float, var_370_bool, var_371_float); // 0x293 Call
	var_372_bool = var_370_bool == 0; // 0x295 Not
	if(var_372_bool == 0) goto Label_664; // 0x296 JumpB
	goto Label_674; // 0x297 Jump
	
Label_665:
	var_373_bool = 0; var_374_float = 0; // 0x299 PushV
	var_374_float = var_28_float; // 0x29a Mov
	func_730(var_48_float, var_373_bool, var_374_float); // 0x29b Call
	var_375_bool = var_373_bool == 0; // 0x29d Not
	if(var_375_bool == 0) goto Label_672; // 0x29e JumpB
	goto Label_674; // 0x29f Jump
	
Label_672:
	var_45_bool = 1; // 0x2a0 MovB
	
Label_537:
	var_45_bool = 1; // 0x219 MovB
	
Label_524:
	var_41_float = var_28_float; // 0x20c Mov
	
Label_511:
	var_376_int = 1; // 0x1ff PushI
	var_2_object = var_2_object + var_376_int; // 0x200 Add2
	goto Label_502; // 0x201 Jump
	
Label_498:
	var_377_int = 1; // 0x1f2 PushI
	var_1_object = var_1_object + var_377_int; // 0x1f3 Add2
	goto Label_488; // 0x1f4 Jump
}


func_1126(var_152_string)
{
	var_152_string = "run"; // 0x466 MovS
	return 0; // 0x467 Return
}


func_1128(var_24_object)
{
	var_25_object = Obj(); // 0x469 PushV
	var_25_object = var_24_object; // 0x46a Mov
	func_1149(var_25_object); // 0x46b Call
	var_75_int = 50; // 0x46d PushI
	var_76_int = 40; // 0x46e PushI
	SetRTEnvelope(var_75_int, var_76_int); // 0x46f Func
	
Label_1137:
	Hold(); // 0x471 Func
	goto Label_1137; // 0x473 Jump
}


func_874(var_0_object, var_206_bool)
{
	var_207_cvector = CVector(0,0,0); var_208_cvector = CVector(0,0,0); var_209_cvector = CVector(0,0,0); var_210_float = 0; var_211_float = 0; var_212_cvector = CVector(0,0,0); var_213_cvector = CVector(0,0,0); var_214_cvector = CVector(0,0,0); var_215_float = 0; var_216_float = 0; // 0x36a PushV
	var_217_bool = 0; var_218_object = Obj(); // 0x36b PushV
	var_218_object = var_0_object; // 0x36c MovT
	func_1396(var_217_bool, var_218_object); // 0x36d Call
	var_219_bool = var_217_bool == 0; // 0x36f Not
	if(var_219_bool == 0) goto Label_883; // 0x370 JumpB
	var_206_bool = 0; // 0x371 MovB
	return 10; // 0x372 Return
	
Label_883:
	var_220_bool = 0; // 0x373 PushV
	func_926(var_216_float, var_220_bool); // 0x374 Call
	if(var_220_bool == 0) goto Label_905; // 0x376 JumpB
	GetPFPosition(var_212_cvector); // 0x377 TObjFunc
	GetPFPosition(var_213_cvector); // 0x379 Func
	var_214_cvector = var_212_cvector - var_213_cvector; // 0x37b Sub2
	var_215_float = var_214_cvector | var_214_cvector; // 0x37c Or2
	GetAttackDistance(var_216_float); // 0x37d TObjFunc
	var_221_int = 50; // 0x37f PushI
	var_216_float = var_216_float + var_221_int; // 0x380 Add2
	var_222_float = var_216_float * var_216_float; // 0x381 Mult
	var_223_bool = var_215_float <= var_222_float; // 0x382 LE
	if(var_223_bool == 0) goto Label_905; // 0x383 JumpB
	func_907(var_216_float); // 0x385 Call
	var_206_bool = 1; // 0x387 MovB
	return 10; // 0x388 Return
	
Label_905:
	var_206_bool = 0; // 0x389 MovB
	return 10; // 0x38a Return
}


func_1646()
{
	var_30_bool = 0; var_31_string = ""; var_32_string = ""; // 0x66f PushV
	var_31_string = "quest_d3_01"; // 0x670 MovS
	var_32_string = "gpatrol_talk"; // 0x671 MovS
	func_1615(var_30_bool, var_31_string, var_32_string); // 0x672 Call
	return 0; // 0x674 Return
}


func_1264(var_307_string, var_308_int)
{
	var_309_int = 1; // 0x4f1 PushI
	var_310_bool = var_308_int == var_309_int; // 0x4f2 Eq
	if(var_310_bool == 0) goto Label_1270; // 0x4f3 JumpB
	var_307_string = "fire"; // 0x4f4 MovS
	return 0; // 0x4f5 Return
	
Label_1270:
	var_307_string = "phys"; // 0x4f6 MovS
	return 0; // 0x4f7 Return
}


func_116(var_2_object, var_85_string)
{
	var_86_bool = 0; // 0x75 PushV
	func_1697(var_86_bool); // 0x76 Call
	var_87_bool = var_86_bool == 0; // 0x78 Not
	if(var_87_bool == 0) goto Label_123; // 0x79 JumpB
	return 0; // 0x7a Return
	
Label_123:
	var_88_bool = var_85_string == var_2_object; // 0x7b Eq
	if(var_88_bool == 0) goto Label_126; // 0x7c JumpB
	return 0; // 0x7d Return
	
Label_126:
	var_89_string = ""; // 0x7e PushV
	var_89_string = var_85_string; // 0x7f Mov
	func_1558(var_89_string); // 0x80 Call
	var_2_object = var_85_string; // 0x82 TMov
	return 0; // 0x83 Return
}


func_1653()
{
	var_38_string = "playsound"; // 0x676 PushS
	var_39_string = "givemoney"; // 0x677 PushS
	TriggerWorld(var_38_string, var_39_string); // 0x678 Func
	return 0; // 0x67a Return
}


func_1396(var_19_bool, var_20_object)
{
	var_21_int = 0; var_22_int = 0; // 0x574 PushV
	var_23_bool = 0; var_24_object = Obj(); // 0x575 PushV
	var_24_object = var_20_object; // 0x576 Mov
	func_1360(var_23_bool, var_24_object); // 0x577 Call
	var_40_bool = var_23_bool == 0; // 0x579 Not
	if(var_40_bool == 0) goto Label_1405; // 0x57a JumpB
	var_19_bool = 0; // 0x57b MovB
	return 2; // 0x57c Return
	
Label_1405:
	var_41_bool = 0; var_42_object = Obj(); var_43_string = ""; // 0x57d PushV
	var_42_object = var_20_object; // 0x57e Mov
	var_43_string = "noaccess"; // 0x57f MovS
	func_1272(var_41_bool, var_42_object, var_43_string); // 0x580 Call
	var_50_bool = var_41_bool == 0; // 0x582 Not
	if(var_50_bool == 0) goto Label_1414; // 0x583 JumpB
	var_19_bool = 1; // 0x584 MovB
	return 2; // 0x585 Return
	
Label_1414:
	var_51_string = "noaccess"; // 0x586 PushS
	GetProperty(var_51_string, var_22_int); // 0x587 ObjFunc
	var_52_int = 0; // 0x589 PushI
	var_19_bool = var_22_int == var_52_int; // 0x58a Eq2
	return 2; // 0x58b Return
}


func_1272(var_41_bool, var_42_object, var_43_string)
{
	var_44_bool = 0; var_45_bool = 0; // 0x4f8 PushV
	var_46_string = "HasProperty"; // 0x4f9 PushS
	var_47_int = 2; // 0x4fa PushI
	var_48_bool = IsFuncExist(var_42_object, var_46_string, var_47_int); // 0x4fb FuncExist
	var_49_bool = var_48_bool == 0; // 0x4fc Not
	if(var_49_bool == 0) goto Label_1280; // 0x4fd JumpB
	var_41_bool = 0; // 0x4fe MovB
	return 2; // 0x4ff Return
	
Label_1280:
	HasProperty(var_43_string, var_45_bool); // 0x500 ObjFunc
	var_41_bool = var_45_bool; // 0x502 Mov
	return 2; // 0x503 Return
}


func_1659(var_116_bool, var_117_object)
{
	var_118_bool = 0; var_119_object = Obj(); // 0x67c PushV
	var_119_object = var_117_object; // 0x67d Mov
	func_1669(var_119_object); // 0x67e Call
	if(var_118_bool == 0) goto Label_1667; // 0x680 JumpB
	var_116_bool = 1; // 0x681 MovB
	return 0; // 0x682 Return
	
Label_1667:
	var_116_bool = 0; // 0x683 MovB
	return 0; // 0x684 Return
}


func_1149(var_25_object)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_string = ""; var_31_object = Obj(); var_32_bool = 0; var_33_bool = 0; var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; var_41_object = Obj(); var_42_bool = 0; var_43_bool = 0; var_44_float = 0; var_45_cvector = CVector(0,0,0); // 0x47d PushV
	var_46_bool = var_25_object == 0; // 0x47e NullEq
	if(var_46_bool == 0) goto Label_1157; // 0x47f JumpB
	var_47_string = ""; // 0x480 PushV
	var_47_string = "fdie"; // 0x481 MovS
	func_1236(var_47_string); // 0x482 Call
	goto Label_1235; // 0x484 Jump
	
Label_1235:
	return 20; // 0x4d3 Return
	
Label_1157:
	GetPosition(var_36_cvector); // 0x485 ObjFunc
	GetPosition(var_37_cvector); // 0x487 Func
	GetDirection(var_38_cvector); // 0x489 Func
	var_39_cvector = var_37_cvector - var_36_cvector; // 0x48b Sub2
	var_50_float = GetByIndex(var_39_cvector, 0); // 0x48c PushE
	var_51_float = GetByIndex(var_38_cvector, 0); // 0x48d PushE
	var_52_float = var_50_float * var_51_float; // 0x48e Mult
	var_53_float = GetByIndex(var_39_cvector, 2); // 0x48f PushE
	var_54_float = GetByIndex(var_38_cvector, 2); // 0x490 PushE
	var_55_float = var_53_float * var_54_float; // 0x491 Mult
	var_56_int = var_52_float + var_55_float; // 0x492 Add
	var_57_int = 0; // 0x493 PushI
	var_58_bool = var_56_int >= var_57_int; // 0x494 GE
	if(var_58_bool == 0) goto Label_1176; // 0x495 JumpB
	var_40_string = "fdie"; // 0x496 MovS
	goto Label_1177; // 0x497 Jump
	
Label_1177:
	RemoveRTEnvelope(); // 0x499 Func
	SetDeathState(); // 0x49b Func
	Stop(); // 0x49d Func
	StopAsync(); // 0x49f Func
	var_41_object = var_25_object; // 0x4a1 Mov
	var_59_string = "GetScriptProperty"; // 0x4a2 PushS
	var_60_int = 2; // 0x4a3 PushI
	var_61_bool = IsFuncExist(var_25_object, var_59_string, var_60_int); // 0x4a4 FuncExist
	if(var_61_bool == 0) goto Label_1201; // 0x4a5 JumpB
	var_62_string = "Owner"; // 0x4a6 PushS
	HasScriptProperty(var_42_bool, var_62_string); // 0x4a7 ObjFunc
	var_63_bool = var_42_bool; // 0x4a9 Push
	if(var_63_bool == 0) goto Label_1201; // 0x4aa JumpB
	var_64_string = "Owner"; // 0x4ab PushS
	GetScriptProperty(var_41_object, var_64_string); // 0x4ac ObjFunc
	var_65_bool = var_41_object == 0; // 0x4ae NullEq
	if(var_65_bool == 0) goto Label_1201; // 0x4af JumpB
	var_41_object = var_25_object; // 0x4b0 Mov
	
Label_1201:
	var_66_string = "@GetEyesHeight"; // 0x4b1 PushS
	var_67_int = 1; // 0x4b2 PushI
	var_68_bool = IsFuncExist(var_41_object, var_66_string, var_67_int); // 0x4b3 FuncExist
	if(var_68_bool == 0) goto Label_1216; // 0x4b4 JumpB
	GetEyesHeight(var_44_float); // 0x4b5 ObjFunc
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x4b7 MovV
	var_69_float = GetByIndex(var_45_cvector, 1); // 0x4b8 PushE
	var_69_float = var_44_float; // 0x4b9 Mov
	SetByIndex(var_45_cvector, 1) = var_69_float; // 0x4ba PopE
	var_70_string = "head"; // 0x4bb PushS
	LookAsync(var_25_object, var_70_string, var_45_cvector); // 0x4bc Func
	var_43_bool = 1; // 0x4be MovB
	goto Label_1217; // 0x4bf Jump
	
Label_1217:
	var_71_string = "all"; // 0x4c1 PushS
	PlayAnimation(var_71_string, var_40_string); // 0x4c2 Func
	WaitForAnimEnd(); // 0x4c4 Func
	var_72_bool = var_43_bool; // 0x4c6 Push
	if(var_72_bool == 0) goto Label_1229; // 0x4c7 JumpB
	StopAsync(); // 0x4c8 Func
	var_73_string = "head"; // 0x4ca PushS
	UnlookAsync(var_73_string); // 0x4cb Func
	
Label_1229:
	var_74_string = "all"; // 0x4cd PushS
	LockAnimationEnd(var_74_string, var_40_string); // 0x4ce Func
	RemoveEnvelope(); // 0x4d0 Func
	var_41_object = 0; // 0x4d2 SetNull
	
Label_1216:
	var_43_bool = 0; // 0x4c0 MovB
	
Label_1176:
	var_40_string = "bdie"; // 0x498 MovS
}


