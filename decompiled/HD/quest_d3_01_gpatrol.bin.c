task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_cvector, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 1; // 0x9b PushI
	if(var_18_int == 0) goto Label_377; // 0x9c JumpB
	func_2065(); // 0x9e NEW_2
	var_20_int = 10025; // 0xa0 PushI
	var_21_bool = var_17_bool == var_20_int; // 0xa1 Eq
	if(var_21_bool == 0) goto Label_178; // 0xa2 JumpB
	var_22_object = Obj(); var_23_object = Obj(); // 0xa3 PushV
	var_22_object = var_1_object; // 0xa4 MovT
	var_23_object = var_0_object; // 0xa5 MovT
	func_2287(var_23_object); // 0xa6 NEW_2
	var_42_object = Obj(); var_43_object = Obj(); // 0xa8 PushV
	var_42_object = var_1_object; // 0xa9 MovT
	var_43_object = var_0_object; // 0xaa MovT
	func_2294(); // 0xab NEW_2
	var_50_object = Obj(); var_51_object = Obj(); // 0xad PushV
	var_50_object = var_1_object; // 0xae MovT
	var_51_object = var_0_object; // 0xaf MovT
	func_2301(); // 0xb0 NEW_2
	
Label_178:
	var_54_int = 10024; // 0xb2 PushI
	var_55_bool = var_17_bool == var_54_int; // 0xb3 Eq
	if(var_55_bool == 0) goto Label_196; // 0xb4 JumpB
	var_56_object = Obj(); var_57_object = Obj(); // 0xb5 PushV
	var_56_object = var_1_object; // 0xb6 MovT
	var_57_object = var_0_object; // 0xb7 MovT
	func_2287(var_57_object); // 0xb8 NEW_2
	var_58_object = Obj(); var_59_object = Obj(); // 0xba PushV
	var_58_object = var_1_object; // 0xbb MovT
	var_59_object = var_0_object; // 0xbc MovT
	func_2294(); // 0xbd NEW_2
	var_60_object = Obj(); var_61_object = Obj(); // 0xbf PushV
	var_60_object = var_1_object; // 0xc0 MovT
	var_61_object = var_0_object; // 0xc1 MovT
	func_2301(); // 0xc2 NEW_2
	
Label_196:
	var_62_int = 10017; // 0xc4 PushI
	var_63_bool = var_17_bool == var_62_int; // 0xc5 Eq
	if(var_63_bool == 0) goto Label_209; // 0xc6 JumpB
	var_64_object = Obj(); var_65_object = Obj(); // 0xc7 PushV
	var_64_object = var_1_object; // 0xc8 MovT
	var_65_object = var_0_object; // 0xc9 MovT
	func_2276(); // 0xca NEW_2
	var_71_object = Obj(); var_72_object = Obj(); // 0xcc PushV
	var_71_object = var_1_object; // 0xcd MovT
	var_72_object = var_0_object; // 0xce MovT
	func_2307(var_72_object); // 0xcf NEW_2
	
Label_209:
	var_111_int = 10018; // 0xd1 PushI
	var_112_bool = var_17_bool == var_111_int; // 0xd2 Eq
	if(var_112_bool == 0) goto Label_222; // 0xd3 JumpB
	var_113_object = Obj(); var_114_object = Obj(); // 0xd4 PushV
	var_113_object = var_1_object; // 0xd5 MovT
	var_114_object = var_0_object; // 0xd6 MovT
	func_2276(); // 0xd7 NEW_2
	var_115_object = Obj(); var_116_object = Obj(); // 0xd9 PushV
	var_115_object = var_1_object; // 0xda MovT
	var_116_object = var_0_object; // 0xdb MovT
	func_2307(var_116_object); // 0xdc NEW_2
	
Label_222:
	var_117_int = 10011; // 0xde PushI
	var_118_bool = var_16_object == var_117_int; // 0xdf Eq
	if(var_118_bool == 0) goto Label_245; // 0xe0 JumpB
	var_119_string = ""; // 0xe1 PushV
	var_119_string = "Neutral"; // 0xe2 MovS
	func_132(var_17_bool, var_119_string); // 0xe3 NEW_2
	var_136_int = 509131; // 0xe5 PushI
	SetMessage(var_136_int); // 0xe6 TObjFunc
	ClearReplies(); // 0xe8 TObjFunc
	var_137_int = 509132; // 0xea PushI
	var_138_int = 10013; // 0xeb PushI
	var_139_int = 10012; // 0xec PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0xed TObjFunc
	var_140_int = 534051; // 0xef PushI
	var_141_int = -1; // 0xf0 PushI
	var_142_int = 35632; // 0xf1 PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0xf2 TObjFunc
	return 0; // 0xf4 Return
	
Label_245:
	var_143_int = 10013; // 0xf5 PushI
	var_144_bool = var_16_object == var_143_int; // 0xf6 Eq
	if(var_144_bool == 0) goto Label_268; // 0xf7 JumpB
	var_145_string = ""; // 0xf8 PushV
	var_145_string = "Neutral"; // 0xf9 MovS
	func_132(var_17_bool, var_145_string); // 0xfa NEW_2
	var_146_int = 509133; // 0xfc PushI
	SetMessage(var_146_int); // 0xfd TObjFunc
	ClearReplies(); // 0xff TObjFunc
	var_147_int = 509134; // 0x101 PushI
	var_148_int = 10019; // 0x102 PushI
	var_149_int = 10014; // 0x103 PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x104 TObjFunc
	var_150_int = 509135; // 0x106 PushI
	var_151_int = 10016; // 0x107 PushI
	var_152_int = 10015; // 0x108 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x109 TObjFunc
	return 0; // 0x10b Return
	
Label_268:
	var_153_int = 10016; // 0x10c PushI
	var_154_bool = var_16_object == var_153_int; // 0x10d Eq
	if(var_154_bool == 0) goto Label_291; // 0x10e JumpB
	var_155_string = ""; // 0x10f PushV
	var_155_string = "Neutral"; // 0x110 MovS
	func_132(var_17_bool, var_155_string); // 0x111 NEW_2
	var_156_int = 509136; // 0x113 PushI
	SetMessage(var_156_int); // 0x114 TObjFunc
	ClearReplies(); // 0x116 TObjFunc
	var_157_int = 509137; // 0x118 PushI
	var_158_int = -1; // 0x119 PushI
	var_159_int = 10017; // 0x11a PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x11b TObjFunc
	var_160_int = 509138; // 0x11d PushI
	var_161_int = -1; // 0x11e PushI
	var_162_int = 10018; // 0x11f PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x120 TObjFunc
	return 0; // 0x122 Return
	
Label_291:
	var_163_int = 10019; // 0x123 PushI
	var_164_bool = var_16_object == var_163_int; // 0x124 Eq
	if(var_164_bool == 0) goto Label_309; // 0x125 JumpB
	var_165_string = ""; // 0x126 PushV
	var_165_string = "Neutral"; // 0x127 MovS
	func_132(var_17_bool, var_165_string); // 0x128 NEW_2
	var_166_int = 509139; // 0x12a PushI
	SetMessage(var_166_int); // 0x12b TObjFunc
	ClearReplies(); // 0x12d TObjFunc
	var_167_int = 509140; // 0x12f PushI
	var_168_int = 10021; // 0x130 PushI
	var_169_int = 10020; // 0x131 PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x132 TObjFunc
	return 0; // 0x134 Return
	
Label_309:
	var_170_int = 10021; // 0x135 PushI
	var_171_bool = var_16_object == var_170_int; // 0x136 Eq
	if(var_171_bool == 0) goto Label_337; // 0x137 JumpB
	var_172_string = ""; // 0x138 PushV
	var_172_string = "Neutral"; // 0x139 MovS
	func_132(var_17_bool, var_172_string); // 0x13a NEW_2
	var_173_int = 509141; // 0x13c PushI
	SetMessage(var_173_int); // 0x13d TObjFunc
	ClearReplies(); // 0x13f TObjFunc
	var_174_int = 509142; // 0x141 PushI
	var_175_int = 10023; // 0x142 PushI
	var_176_int = 10022; // 0x143 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x144 TObjFunc
	var_177_bool = 0; var_178_object = Obj(); // 0x146 PushV
	var_178_object = var_1_object; // 0x147 MovT
	func_2314(var_177_bool, var_178_object); // 0x148 NEW_2
	if(var_177_bool == 0) goto Label_336; // 0x14a JumpB
	var_185_int = 509144; // 0x14b PushI
	var_186_int = -1; // 0x14c PushI
	var_187_int = 10024; // 0x14d PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x14e TObjFunc
	
Label_336:
	return 0; // 0x150 Return
	
Label_337:
	var_188_int = 10023; // 0x151 PushI
	var_189_bool = var_16_object == var_188_int; // 0x152 Eq
	if(var_189_bool == 0) goto Label_365; // 0x153 JumpB
	var_190_string = ""; // 0x154 PushV
	var_190_string = "Neutral"; // 0x155 MovS
	func_132(var_17_bool, var_190_string); // 0x156 NEW_2
	var_191_int = 509143; // 0x158 PushI
	SetMessage(var_191_int); // 0x159 TObjFunc
	ClearReplies(); // 0x15b TObjFunc
	var_192_bool = 0; var_193_object = Obj(); // 0x15d PushV
	var_193_object = var_1_object; // 0x15e MovT
	func_2314(var_192_bool, var_193_object); // 0x15f NEW_2
	if(var_192_bool == 0) goto Label_359; // 0x161 JumpB
	var_194_int = 509145; // 0x162 PushI
	var_195_int = -1; // 0x163 PushI
	var_196_int = 10025; // 0x164 PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x165 TObjFunc
	
Label_359:
	var_197_int = 509146; // 0x167 PushI
	var_198_int = 10016; // 0x168 PushI
	var_199_int = 10026; // 0x169 PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x16a TObjFunc
	return 0; // 0x16c Return
	
Label_365:
	var_3_string = 1; // 0x16d TMovB
	var_200_bool = 0; // 0x16e PushV
	func_2416(var_200_bool); // 0x16f NEW_2
	if(var_200_bool == 0) goto Label_373; // 0x171 JumpB
	lshStopAnimation(); // 0x172 Func
	goto Label_375; // 0x174 Jump
	
Label_375:
	return 0; // 0x177 Return
	
Label_373:
	StopAnimation(); // 0x175 Func
	
Label_377:
	return 0; // 0x179 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	func_503(); // 0x17d NEW_2
	var_17_int = 0; var_18_object = Obj(); // 0x17f PushV
	var_18_object = var_16_bool; // 0x180 Mov
	TaskCall(0); // 0x181 TaskCall
	func_0(var_19_object, var_17_int, var_18_object); // 0x182 NEW_2
	TaskReturn(); // 0x183 TaskReturn
	return 0; // 0x185 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_string, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_string = "kill_player"; // 0x187 PushS
	var_18_bool = var_16_bool == var_17_string; // 0x188 Eq
	if(var_18_bool == 0) goto Label_403; // 0x189 JumpB
	func_503(); // 0x18b NEW_2
	TaskCall(3); // 0x18e TaskCall
	func_509(); // 0x18f NEW_2
	TaskReturn(); // 0x190 TaskReturn
	goto Label_407; // 0x192 Jump
	
Label_407:
	return 0; // 0x197 Return
	
Label_403:
	var_524_string = "talk_player"; // 0x193 PushS
	var_525_bool = var_16_bool == var_524_string; // 0x194 Eq
	if(var_525_bool == 0) goto Label_407; // 0x195 JumpB
	EventDisable(0); // 0x196 EventDisable
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_bool = 0; var_18_bool = 0; // 0x198 PushV
	IsPlayerActor(var_16_bool, var_18_bool); // 0x199 Func
	var_19_bool = var_18_bool; // 0x19b Push
	if(var_19_bool == 0) goto Label_418; // 0x19c JumpB
	var_20_bool = 0; var_21_string = ""; var_22_string = ""; // 0x19d PushV
	var_21_string = "quest_d3_01"; // 0x19e MovS
	var_22_string = "kill_player"; // 0x19f MovS
	func_2244(var_20_bool, var_21_string, var_22_string); // 0x1a0 NEW_2
	
Label_418:
	return 2; // 0x1a2 Return
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_int)
{
	var_17_int = 1; // 0x4da PushI
	var_18_bool = var_16_int == var_17_int; // 0x4db Eq
	if(var_18_bool == 0) goto Label_1250; // 0x4dc JumpB
	var_19_object = Obj(); // 0x4dd PushV
	var_19_object = var_1_object; // 0x4de MovT
	func_2256(var_19_object); // 0x4df NEW_2
	goto Label_1254; // 0x4e1 Jump
	
Label_1254:
	return 0; // 0x4e6 Return
	
Label_1250:
	var_24_int = 0; // 0x4e2 PushV
	var_24_int = var_16_int; // 0x4e3 Mov
	func_1399(var_15_bool, var_16_int, var_24_int); // 0x4e4 NEW_2
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	var_17_bool = 0; // 0x4f5 PushV
	var_17_bool = 0; // 0x4f6 MovB
	var_18_bool = var_1_object == var_16_object; // 0x4f7 Eq
	if(var_18_bool == 0) goto Label_1276; // 0x4f8 JumpB
	var_19_bool = var_2_object == 0; // 0x4f9 Not
	if(var_19_bool == 0) goto Label_1276; // 0x4fa JumpB
	var_17_bool = 1; // 0x4fb MovB
	
Label_1276:
	if(var_17_bool == 0) goto Label_1282; // 0x4fc JumpB
	var_2_object = 1; // 0x4fd TMovB
	var_20_object = Obj(); // 0x4fe PushV
	var_20_object = var_16_object; // 0x4ff Mov
	func_2054(var_20_object); // 0x500 NEW_2
	
Label_1282:
	return 0; // 0x502 Return
}


task_4_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	var_17_bool = 0; // 0x504 PushV
	var_17_bool = 0; // 0x505 MovB
	var_18_bool = var_1_object == var_16_object; // 0x506 Eq
	if(var_18_bool == 0) goto Label_1291; // 0x507 JumpB
	var_19_object = var_2_object; // 0x508 PushT
	if(var_19_object == 0) goto Label_1291; // 0x509 JumpB
	var_17_bool = 1; // 0x50a MovB
	
Label_1291:
	if(var_17_bool == 0) goto Label_1296; // 0x50b JumpB
	var_2_object = 0; // 0x50c TMovB
	var_20_string = "head"; // 0x50d PushS
	UnlookAsync(var_20_string); // 0x50e Func
	
Label_1296:
	return 0; // 0x510 Return
}


task_4_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	RequestClearPath(var_16_object); // 0x58a Func
	return 0; // 0x58c Return
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	func_1255(var_16_object); // 0x596 NEW_2
	var_21_object = Obj(); // 0x598 PushV
	var_21_object = var_16_object; // 0x599 Mov
	func_2470(); // 0x59a NEW_2
	return 0; // 0x59c Return
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	var_17_bool = 0; var_18_bool = 0; // 0x5b5 PushV
	IsOverrideActive(var_18_bool); // 0x5b6 Func
	var_19_bool = var_18_bool == 0; // 0x5b8 Not
	if(var_19_bool == 0) goto Label_1470; // 0x5b9 JumpB
	var_20_object = Obj(); // 0x5ba PushV
	var_20_object = var_16_object; // 0x5bb Mov
	func_2354(var_20_object); // 0x5bc NEW_2
	
Label_1470:
	return 2; // 0x5be Return
}


task_5_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float)
{
	return 0; // 0x635 Return
}


task_5_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_string)
{
	return 0; // 0x637 Return
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	return 0; // 0x639 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float)
{
	var_20_object = Obj(); var_21_int = 0; var_22_float = 0; // 0x988 PushV
	var_20_object = var_16_object; // 0x989 Mov
	var_21_int = var_17_int; // 0x98a Mov
	var_22_float = var_18_float; // 0x98b Mov
	func_1843(var_20_object, var_21_int, var_22_float); // 0x98c NEW_2
	return 0; // 0x98e Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float, var_20_cvector, var_21_cvector)
{
	var_22_object = Obj(); var_23_int = 0; var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x990 PushV
	var_22_object = var_16_object; // 0x991 Mov
	var_23_int = var_17_int; // 0x992 Mov
	var_24_float = var_18_float; // 0x993 Mov
	var_25_cvector = var_20_cvector; // 0x994 Mov
	var_26_cvector = var_21_cvector; // 0x995 Mov
	func_1911(var_24_float, var_25_cvector, var_26_cvector); // 0x996 NEW_2
	return 0; // 0x998 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_string)
{
	var_18_float = 0; var_19_float = 0; // 0x999 PushV
	var_20_string = "health"; // 0x99a PushS
	var_21_bool = var_17_string == var_20_string; // 0x99b Eq
	if(var_21_bool == 0) goto Label_2469; // 0x99c JumpB
	var_22_string = "health"; // 0x99d PushS
	GetProperty(var_22_string, var_19_float); // 0x99e Func
	var_23_int = 0; // 0x9a0 PushI
	var_24_bool = var_19_float <= var_23_int; // 0x9a1 LE
	if(var_24_bool == 0) goto Label_2469; // 0x9a2 JumpB
	SignalDeath(var_16_object); // 0x9a3 Func
	
Label_2469:
	return 2; // 0x9a5 Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	var_17_object = Obj(); // 0x9a7 PushV
	var_17_object = var_16_object; // 0x9a8 Mov
	func_2418(var_17_object); // 0x9a9 NEW_2
	return 0; // 0x9ab Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_int = 0; var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_object = Obj(); var_20_int = 0; var_21_bool = 0; var_22_cvector = CVector(0,0,0); var_23_object = Obj(); // 0x1a3 PushV
	GetPFPosition(var_23_object); // 0x1a4 Func
	GetDirection(var_0_object); // 0x1a6 Func
	
Label_424:
	func_508(); // 0x1a9 NEW_2
	var_24_int = 10; // 0x1ab PushI
	irand(var_20_int, var_24_int); // 0x1ac Func
	var_25_int = 5; // 0x1ae PushI
	var_26_int = var_20_int + var_25_int; // 0x1af Add
	Sleep(var_26_int, var_21_bool); // 0x1b0 Func
	var_27_bool = var_21_bool; // 0x1b2 Push
	if(var_27_bool == 0) goto Label_440; // 0x1b3 JumpB
	func_378(); // 0x1b5 NEW_2
	goto Label_501; // 0x1b7 Jump
	
Label_501:
	goto Label_424; // 0x1f5 Jump
	
Label_440:
	func_508(); // 0x1b9 NEW_2
	GetPFPosition(var_22_cvector); // 0x1bb Func
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); // 0x1bd PushV
	var_29_cvector = var_1_object; // 0x1be MovT
	var_30_cvector = var_22_cvector; // 0x1bf Mov
	func_2129(var_28_float, var_29_cvector, var_30_cvector); // 0x1c0 NEW_2
	var_33_int = 40000; // 0x1c2 PushI
	var_34_bool = var_28_float > var_33_int; // 0x1c3 GT
	if(var_34_bool == 0) goto Label_487; // 0x1c4 JumpB
	FindPathTo(var_23_object, var_23_object); // 0x1c5 Func
	var_35_bool = var_23_object != 0; // 0x1c7 NullNeq
	if(var_35_bool == 0) goto Label_482; // 0x1c8 JumpB
	RotatePath(var_23_object, var_21_bool); // 0x1c9 Func
	var_36_bool = var_21_bool == 0; // 0x1cb Not
	if(var_36_bool == 0) goto Label_462; // 0x1cc JumpB
	goto Label_500; // 0x1cd Jump
	
Label_500:
	goto Label_440; // 0x1f4 Jump
	
Label_462:
	var_37_bool = 0; // 0x1ce PushB
	FollowPath(var_23_object, var_37_bool, var_21_bool); // 0x1cf Func
	var_38_bool = var_21_bool == 0; // 0x1d1 Not
	if(var_38_bool == 0) goto Label_468; // 0x1d2 JumpB
	goto Label_500; // 0x1d3 Jump
	
Label_468:
	var_39_float = GetByIndex(var_0_object, 0); // 0x1d4 PushE
	var_40_float = GetByIndex(var_0_object, 2); // 0x1d5 PushE
	Rotate(var_39_float, var_40_float, var_21_bool); // 0x1d6 Func
	var_41_bool = var_21_bool == 0; // 0x1d8 Not
	if(var_41_bool == 0) goto Label_475; // 0x1d9 JumpB
	goto Label_500; // 0x1da Jump
	
Label_475:
	WaitForAnimEnd(var_21_bool); // 0x1db Func
	var_42_bool = var_21_bool == 0; // 0x1dd Not
	if(var_42_bool == 0) goto Label_480; // 0x1de JumpB
	goto Label_500; // 0x1df Jump
	
Label_480:
	goto Label_501; // 0x1e0 Jump
	
Label_482:
	var_43_int = 1; // 0x1e2 PushI
	Sleep(var_43_int); // 0x1e3 Func
	var_23_object = 0; // 0x1e5 SetNull
	goto Label_500; // 0x1e6 Jump
	
Label_487:
	var_44_float = GetByIndex(var_0_object, 0); // 0x1e7 PushE
	var_45_float = GetByIndex(var_0_object, 2); // 0x1e8 PushE
	Rotate(var_44_float, var_45_float, var_21_bool); // 0x1e9 Func
	var_46_bool = var_21_bool == 0; // 0x1eb Not
	if(var_46_bool == 0) goto Label_494; // 0x1ec JumpB
	goto Label_500; // 0x1ed Jump
	
Label_494:
	WaitForAnimEnd(var_21_bool); // 0x1ee Func
	var_47_bool = var_21_bool == 0; // 0x1f0 Not
	if(var_47_bool == 0) goto Label_499; // 0x1f1 JumpB
	goto Label_500; // 0x1f2 Jump
	
Label_499:
	goto Label_501; // 0x1f3 Jump
}


func_0(var_0_object, var_17_int, var_18_object)
{
	var_20_object = Obj(); var_21_bool = 0; var_22_int = 0; var_23_bool = 0; var_24_object = Obj(); var_25_bool = 0; var_26_int = 0; var_27_bool = 0; // 0x0 PushV
	var_0_object = var_18_object; // 0x1 TMov
	var_28_bool = 0; var_29_object = Obj(); var_30_float = 0; // 0x2 PushV
	var_29_object = var_18_object; // 0x3 Mov
	var_30_float = 70.0; // 0x4 MovF
	func_1936(var_29_object, var_30_float); // 0x5 NEW_2
	var_75_bool = var_28_bool == 0; // 0x7 Not
	if(var_75_bool == 0) goto Label_11; // 0x8 JumpB
	var_17_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_24_object); // 0xb Func
	var_76_int = 0; // 0xd PushV
	func_2410(var_76_int); // 0xe NEW_2
	SetNPCName(var_76_int); // 0x10 ObjFunc
	var_77_int = 0; // 0x12 PushV
	func_2408(var_77_int); // 0x13 NEW_2
	SetNPCDescription(var_77_int); // 0x15 ObjFunc
	var_78_string = ""; // 0x17 PushV
	func_2412(var_78_string); // 0x18 NEW_2
	SetPhoto(var_78_string); // 0x1a ObjFunc
	var_79_string = ""; // 0x1c PushV
	func_2414(var_79_string); // 0x1d NEW_2
	SetPhoto2(var_79_string); // 0x1f ObjFunc
	var_80_int = 0; // 0x21 PushV
	func_2331(var_80_int); // 0x22 NEW_2
	SetPlayerName(var_80_int); // 0x24 ObjFunc
	var_26_int = -1; // 0x26 MovI
	IsOverrideActive(var_25_bool); // 0x27 Func
	var_88_bool = var_25_bool; // 0x29 Push
	if(var_88_bool == 0) goto Label_45; // 0x2a JumpB
	var_17_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_24_object); // 0x2d Func
	var_89_object = Obj(); var_90_object = Obj(); // 0x2f PushV
	var_89_object = var_18_object; // 0x30 Mov
	var_90_object = var_24_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_91_object, var_92_object, var_93_string, var_94_bool, var_89_object, var_90_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_27_bool); // 0x36 ObjFunc
	
Label_56:
	var_138_bool = var_27_bool == 0; // 0x38 Not
	if(var_138_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_27_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_139_object = Obj(); // 0x3f PushV
	var_139_object = var_18_object; // 0x40 Mov
	func_2005(); // 0x41 NEW_2
	StopDialog(var_24_object); // 0x43 Func
	GetReturnValue(var_26_int); // 0x45 ObjFunc
	var_17_int = var_26_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_509()
{
	var_25_object = Obj(); var_26_object = Obj(); // 0x1fd PushV
	var_27_string = "player"; // 0x1fe PushS
	FindActor(var_26_object, var_27_string); // 0x1ff Func
	var_28_bool = var_26_object == 0; // 0x201 Not
	if(var_28_bool == 0) goto Label_516; // 0x202 JumpB
	return 2; // 0x203 Return
	
Label_516:
	var_29_object = Obj(); var_30_bool = 0; var_31_float = 0; // 0x204 PushV
	var_29_object = var_26_object; // 0x205 Mov
	var_30_bool = 1; // 0x206 MovB
	var_31_float = 180.0; // 0x207 MovF
	func_530(var_22_bool, var_23_float, var_24_int, var_25_object, var_26_object, var_29_object, var_30_bool, var_31_float); // 0x208 NEW_2
	return 2; // 0x20a Return
}


func_2307(var_71_object)
{
	var_73_bool = 0; var_74_object = Obj(); var_75_float = 0; // 0x904 PushV
	var_74_object = var_71_object; // 0x905 Mov
	var_75_float = -0.3; // 0x906 MovF
	func_2182(var_73_bool, var_74_object, var_75_float); // 0x907 NEW_2
	return 0; // 0x909 Return
}


func_2054(var_20_object)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_float = 0; var_24_cvector = CVector(0,0,0); // 0x806 PushV
	GetEyesHeight(var_23_float); // 0x807 ObjFunc
	var_24_cvector = CVector(0.0, 0.0, 0.0); // 0x809 MovV
	var_25_float = GetByIndex(var_24_cvector, 1); // 0x80a PushE
	var_25_float = var_23_float; // 0x80b Mov
	SetByIndex(var_24_cvector, 1) = var_25_float; // 0x80c PopE
	var_26_string = "head"; // 0x80d PushS
	LookAsync(var_20_object, var_26_string, var_24_cvector); // 0x80e Func
	return 4; // 0x810 Return
}


func_1799(var_33_object)
{
	var_34_bool = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; var_41_bool = 0; var_42_int = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_string = ""; // 0x707 PushV
	var_48_bool = var_33_object == 0; // 0x708 NullEq
	if(var_48_bool == 0) goto Label_1803; // 0x709 JumpB
	return 14; // 0x70a Return
	
Label_1803:
	IsDead(var_41_bool); // 0x70b Func
	var_49_bool = var_41_bool; // 0x70d Push
	if(var_49_bool == 0) goto Label_1808; // 0x70e JumpB
	return 14; // 0x70f Return
	
Label_1808:
	GetSecondaryAnimationType(var_42_int); // 0x710 Func
	var_50_int = 0; // 0x712 PushI
	var_51_bool = var_42_int < var_50_int; // 0x713 LT
	if(var_51_bool == 0) goto Label_1814; // 0x714 JumpB
	return 14; // 0x715 Return
	
Label_1814:
	GetPosition(var_43_cvector); // 0x716 ObjFunc
	GetPosition(var_44_cvector); // 0x718 Func
	GetDirection(var_45_cvector); // 0x71a Func
	var_46_cvector = var_44_cvector - var_43_cvector; // 0x71c Sub2
	var_52_float = GetByIndex(var_46_cvector, 0); // 0x71d PushE
	var_53_float = GetByIndex(var_45_cvector, 0); // 0x71e PushE
	var_54_float = var_52_float * var_53_float; // 0x71f Mult
	var_55_float = GetByIndex(var_46_cvector, 2); // 0x720 PushE
	var_56_float = GetByIndex(var_45_cvector, 2); // 0x721 PushE
	var_57_float = var_55_float * var_56_float; // 0x722 Mult
	var_58_int = var_54_float + var_57_float; // 0x723 Add
	var_59_int = 0; // 0x724 PushI
	var_60_bool = var_58_int >= var_59_int; // 0x725 GE
	if(var_60_bool == 0) goto Label_1833; // 0x726 JumpB
	var_47_string = "fhit"; // 0x727 MovS
	goto Label_1834; // 0x728 Jump
	
Label_1834:
	var_61_string = "hit_react"; // 0x72a PushS
	var_62_string = "1"; // 0x72b PushS
	var_63_int = var_47_string + var_62_string; // 0x72c Add
	var_64_string = "2"; // 0x72d PushS
	var_65_int = var_47_string + var_64_string; // 0x72e Add
	var_66_int = -10; // 0x72f PushI
	FadeSecondaryAnimation(var_61_string, var_63_int, var_65_int, var_66_int); // 0x730 Func
	return 14; // 0x732 Return
	
Label_1833:
	var_47_string = "bhit"; // 0x729 MovS
}


func_2314(var_177_bool, var_178_object)
{
	var_179_bool = 0; var_180_object = Obj(); // 0x90b PushV
	var_180_object = var_178_object; // 0x90c Mov
	func_2324(var_180_object); // 0x90d NEW_2
	if(var_179_bool == 0) goto Label_2322; // 0x90f JumpB
	var_177_bool = 1; // 0x910 MovB
	return 0; // 0x911 Return
	
Label_2322:
	var_177_bool = 0; // 0x912 MovB
	return 0; // 0x913 Return
}


func_524(var_398_float)
{
	var_398_float = 0.15; // 0x20d MovF
	return 0; // 0x20e Return
}


func_527(var_405_int)
{
	var_405_int = 0; // 0x210 MovI
	return 0; // 0x211 Return
}


func_1040(var_0_object, var_304_bool)
{
	var_305_cvector = CVector(0,0,0); var_306_cvector = CVector(0,0,0); var_307_cvector = CVector(0,0,0); var_308_float = 0; var_309_float = 0; var_310_cvector = CVector(0,0,0); var_311_cvector = CVector(0,0,0); var_312_cvector = CVector(0,0,0); var_313_float = 0; var_314_float = 0; // 0x410 PushV
	var_315_bool = 0; var_316_object = Obj(); // 0x411 PushV
	var_316_object = var_0_object; // 0x412 MovT
	func_1775(var_315_bool, var_316_object); // 0x413 NEW_2
	var_317_bool = var_315_bool == 0; // 0x415 Not
	if(var_317_bool == 0) goto Label_1049; // 0x416 JumpB
	var_304_bool = 0; // 0x417 MovB
	return 10; // 0x418 Return
	
Label_1049:
	var_318_bool = 0; // 0x419 PushV
	func_1129(var_314_float, var_318_bool); // 0x41a NEW_2
	if(var_318_bool == 0) goto Label_1066; // 0x41c JumpB
	GetPFPosition(var_310_cvector); // 0x41d TObjFunc
	GetPFPosition(var_311_cvector); // 0x41f Func
	var_312_cvector = var_310_cvector - var_311_cvector; // 0x421 Sub2
	var_313_float = var_312_cvector | var_312_cvector; // 0x422 Or2
	GetAttackDistance(var_314_float); // 0x423 TObjFunc
	var_319_int = 50; // 0x425 PushI
	var_314_float = var_314_float + var_319_int; // 0x426 Add2
	var_320_float = var_314_float * var_314_float; // 0x427 Mult
	var_304_bool = var_313_float <= var_320_float; // 0x428 LE2
	return 10; // 0x429 Return
	
Label_1066:
	var_304_bool = 0; // 0x42a MovB
	return 10; // 0x42b Return
}


func_2065()
{
	var_19_bool = 0; // 0x811 PushV
	func_2416(var_19_bool); // 0x812 NEW_2
	if(var_19_bool == 0) goto Label_2071; // 0x814 JumpB
	lshStopSpeech(); // 0x815 Func
	
Label_2071:
	return 0; // 0x817 Return
}


func_530(var_0_object, var_3_string, var_5_cvector, var_29_object, var_30_bool, var_31_float, var_138_bool, var_230_bool)
{
	var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_float = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_bool = 0; var_53_float = 0; // 0x212 PushV
	func_759(var_51_cvector, var_52_bool, var_53_float); // 0x214 NEW_2
	var_5_cvector = 0; // 0x216 TMovI
	var_76_string = "@GetAttackDistance"; // 0x217 PushS
	var_77_int = 1; // 0x218 PushI
	var_78_bool = IsFuncExist(var_29_object, var_76_string, var_77_int); // 0x219 FuncExist
	if(var_78_bool == 0) goto Label_544; // 0x21a JumpB
	GetAttackDistance(var_43_float); // 0x21b ObjFunc
	var_79_int = 50; // 0x21d PushI
	var_43_float = var_43_float + var_79_int; // 0x21e Add2
	goto Label_545; // 0x21f Jump
	
Label_545:
	var_80_int = 150; // 0x221 PushI
	var_81_bool = var_43_float >= var_80_int; // 0x222 GE
	if(var_81_bool == 0) goto Label_549; // 0x223 JumpB
	var_43_float = 150; // 0x224 MovI
	
Label_549:
	var_3_string = 0; // 0x225 TMovB
	var_0_object = var_29_object; // 0x226 TMov
	IsPlayerActor(var_0_object, var_46_bool); // 0x227 Func
	var_82_bool = var_46_bool; // 0x229 Push
	if(var_82_bool == 0) goto Label_563; // 0x22a JumpB
	var_83_string = "attack"; // 0x22b PushS
	PlayGlobalMusic(var_83_string); // 0x22c Func
	var_84_object = Obj(); // 0x22e PushV
	func_2113(var_84_object); // 0x22f NEW_2
	SendPlayerEnemy(var_29_object, var_84_object); // 0x231 Func
	
Label_563:
	var_87_bool = var_30_bool; // 0x233 Push
	if(var_87_bool == 0) goto Label_567; // 0x234 JumpB
	var_47_bool = 0; // 0x235 MovB
	goto Label_568; // 0x236 Jump
	
Label_568:
	var_88_float = 400.0; // 0x238 PushF
	var_48_float = var_88_float + var_43_float; // 0x239 Add2
	
Label_570:
	var_89_bool = 0; // 0x23a PushV
	var_89_bool = 0; // 0x23b MovB
	var_90_bool = 0; var_91_object = Obj(); // 0x23c PushV
	var_91_object = var_0_object; // 0x23d MovT
	func_1775(var_90_bool, var_91_object); // 0x23e NEW_2
	if(var_90_bool == 0) goto Label_580; // 0x240 JumpB
	var_124_bool = var_3_string == 0; // 0x241 Not
	if(var_124_bool == 0) goto Label_580; // 0x242 JumpB
	var_89_bool = 1; // 0x243 MovB
	
Label_580:
	if(var_89_bool == 0) goto Label_742; // 0x244 JumpB
	func_1172(var_53_float); // 0x246 NEW_2
	GetPFPosition(var_44_cvector); // 0x248 TObjFunc
	GetPFPosition(var_45_cvector); // 0x24a Func
	var_49_cvector = var_44_cvector - var_45_cvector; // 0x24c Sub2
	var_50_float = var_49_cvector | var_49_cvector; // 0x24d Or2
	var_130_float = var_48_float * var_48_float; // 0x24e Mult
	var_131_bool = var_50_float >= var_130_float; // 0x24f GE
	if(var_131_bool == 0) goto Label_608; // 0x250 JumpB
	var_132_bool = 0; var_133_object = Obj(); var_134_float = 0; var_135_float = 0; var_136_bool = 0; var_137_bool = 0; // 0x251 PushV
	var_133_object = var_0_object; // 0x252 MovT
	var_134_float = var_43_float; // 0x253 Mov
	var_135_float = 10000.0; // 0x254 MovF
	var_136_bool = 1; // 0x255 MovB
	var_137_bool = 0; // 0x256 MovB
	TaskCall(4); // 0x257 TaskCall
	func_1192(var_140_bool, var_132_bool, var_133_object, var_134_float, var_135_float, var_136_bool, var_137_bool); // 0x258 NEW_2
	TaskReturn(); // 0x259 TaskReturn
	var_215_bool = var_138_bool == 0; // 0x25b Not
	if(var_215_bool == 0) goto Label_606; // 0x25c JumpB
	goto Label_742; // 0x25d Jump
	
Label_742:
	WaitForAnimEnd(); // 0x2e6 Func
	var_216_string = var_3_string; // 0x2e8 PushT
	if(var_216_string == 0) goto Label_747; // 0x2e9 JumpB
	return 22; // 0x2ea Return
	
Label_747:
	var_217_string = "all"; // 0x2eb PushS
	var_218_string = "attack_off"; // 0x2ec PushS
	PlayAnimation(var_217_string, var_218_string); // 0x2ed Func
	WaitForAnimEnd(); // 0x2ef Func
	var_219_bool = var_46_bool; // 0x2f1 Push
	if(var_219_bool == 0) goto Label_758; // 0x2f2 JumpB
	var_220_float = 2.0; // 0x2f3 PushF
	Sleep(var_220_float); // 0x2f4 Func
	
Label_758:
	return 22; // 0x2f6 Return
	
Label_606:
	var_47_bool = 0; // 0x25e MovB
	goto Label_741; // 0x25f Jump
	
Label_741:
	goto Label_570; // 0x2e5 Jump
	
Label_608:
	var_221_float = var_31_float * var_31_float; // 0x260 Mult
	var_222_bool = var_50_float >= var_221_float; // 0x261 GE
	if(var_222_bool == 0) goto Label_733; // 0x262 JumpB
	GetPFPosition(var_51_cvector); // 0x263 TObjFunc
	CanReachByPF(var_52_bool, var_51_cvector); // 0x265 Func
	var_223_bool = var_52_bool == 0; // 0x267 Not
	if(var_223_bool == 0) goto Label_632; // 0x268 JumpB
	var_224_bool = 0; var_225_object = Obj(); var_226_float = 0; var_227_float = 0; var_228_bool = 0; var_229_bool = 0; // 0x269 PushV
	var_225_object = var_0_object; // 0x26a MovT
	var_226_float = var_43_float; // 0x26b Mov
	var_227_float = 10000.0; // 0x26c MovF
	var_228_bool = 1; // 0x26d MovB
	var_229_bool = 0; // 0x26e MovB
	TaskCall(4); // 0x26f TaskCall
	func_1192(var_232_bool, var_224_bool, var_225_object, var_226_float, var_227_float, var_228_bool, var_229_bool); // 0x270 NEW_2
	TaskReturn(); // 0x271 TaskReturn
	var_233_bool = var_230_bool == 0; // 0x273 Not
	if(var_233_bool == 0) goto Label_630; // 0x274 JumpB
	goto Label_742; // 0x275 Jump
	
Label_630:
	var_47_bool = 0; // 0x276 MovB
	goto Label_570; // 0x277 Jump
	
Label_632:
	var_234_bool = var_47_bool == 0; // 0x278 Not
	if(var_234_bool == 0) goto Label_657; // 0x279 JumpB
	var_235_object = Obj(); // 0x27a PushV
	var_235_object = var_0_object; // 0x27b MovT
	func_1925(); // 0x27c NEW_2
	var_244_string = "all"; // 0x27e PushS
	var_245_string = "attack_on"; // 0x27f PushS
	PlayAnimation(var_244_string, var_245_string); // 0x280 Func
	WaitForAnimEnd(); // 0x282 Func
	func_1172(var_53_float); // 0x285 NEW_2
	StopAsync(); // 0x287 Func
	var_47_bool = 1; // 0x289 MovB
	var_246_bool = 0; var_247_object = Obj(); // 0x28a PushV
	var_247_object = var_0_object; // 0x28b MovT
	func_1775(var_246_bool, var_247_object); // 0x28c NEW_2
	var_248_bool = var_246_bool == 0; // 0x28e Not
	if(var_248_bool == 0) goto Label_657; // 0x28f JumpB
	goto Label_742; // 0x290 Jump
	
Label_657:
	rand(var_53_float); // 0x291 Func
	var_249_bool = 0; // 0x293 PushV
	var_249_bool = 1; // 0x294 MovB
	var_250_float = 0.25; // 0x295 PushF
	var_251_bool = var_53_float < var_250_float; // 0x296 LT
	if(var_251_bool == 0) goto Label_669; // 0x297 JumpB
	var_252_bool = 0; // 0x298 PushV
	func_1129(var_249_bool, var_252_bool); // 0x299 NEW_2
	if(var_252_bool == 0) goto Label_669; // 0x29b JumpB
	var_249_bool = 0; // 0x29c MovB
	
Label_669:
	if(var_249_bool == 0) goto Label_686; // 0x29d JumpB
	Face(var_0_object); // 0x29e Func
	func_1179(); // 0x2a1 NEW_2
	var_287_string = "all"; // 0x2a3 PushS
	var_288_string = "attack_stay"; // 0x2a4 PushS
	PlayAnimation(var_287_string, var_288_string); // 0x2a5 Func
	var_289_bool = 0; var_290_float = 0; // 0x2a7 PushV
	var_290_float = var_31_float; // 0x2a8 Mov
	func_997(var_53_float, var_289_bool, var_290_float); // 0x2a9 NEW_2
	StopAsync(); // 0x2ab Func
	goto Label_732; // 0x2ad Jump
	
Label_732:
	goto Label_741; // 0x2dc Jump
	
Label_686:
	Face(var_0_object); // 0x2ae Func
	var_508_string = "all"; // 0x2b0 PushS
	var_509_string = "fjump"; // 0x2b1 PushS
	PlayAnimation(var_508_string, var_509_string); // 0x2b2 Func
	WaitForAnimEnd(); // 0x2b4 Func
	func_1172(var_53_float); // 0x2b7 NEW_2
	var_510_cvector = CVector(0.0, 0.0, 0.0); // 0x2b9 PushVec
	SetSpeed(var_510_cvector); // 0x2ba Func
	Stop(); // 0x2bc Func
	StopAsync(); // 0x2be Func
	var_511_bool = 0; // 0x2c0 PushV
	func_1129(var_53_float, var_511_bool); // 0x2c1 NEW_2
	var_512_bool = var_511_bool == 0; // 0x2c3 Not
	if(var_512_bool == 0) goto Label_732; // 0x2c4 JumpB
	var_513_bool = 0; var_514_object = Obj(); // 0x2c5 PushV
	var_514_object = var_0_object; // 0x2c6 MovT
	func_1775(var_513_bool, var_514_object); // 0x2c7 NEW_2
	var_515_bool = var_513_bool == 0; // 0x2c9 Not
	if(var_515_bool == 0) goto Label_716; // 0x2ca JumpB
	goto Label_742; // 0x2cb Jump
	
Label_716:
	GetPFPosition(var_44_cvector); // 0x2cc TObjFunc
	GetPFPosition(var_45_cvector); // 0x2ce Func
	var_49_cvector = var_44_cvector - var_45_cvector; // 0x2d0 Sub2
	var_50_float = var_49_cvector | var_49_cvector; // 0x2d1 Or2
	var_516_float = var_31_float * var_31_float; // 0x2d2 Mult
	var_517_bool = var_50_float < var_516_float; // 0x2d3 LT
	if(var_517_bool == 0) goto Label_732; // 0x2d4 JumpB
	var_518_bool = 0; var_519_float = 0; // 0x2d5 PushV
	var_519_float = var_31_float; // 0x2d6 Mov
	func_833(var_53_float, var_518_bool, var_519_float); // 0x2d7 NEW_2
	var_520_bool = var_518_bool == 0; // 0x2d9 Not
	if(var_520_bool == 0) goto Label_732; // 0x2da JumpB
	goto Label_742; // 0x2db Jump
	
Label_733:
	var_521_bool = 0; var_522_float = 0; // 0x2dd PushV
	var_522_float = var_31_float; // 0x2de Mov
	func_833(var_53_float, var_521_bool, var_522_float); // 0x2df NEW_2
	var_523_bool = var_521_bool == 0; // 0x2e1 Not
	if(var_523_bool == 0) goto Label_740; // 0x2e2 JumpB
	goto Label_742; // 0x2e3 Jump
	
Label_740:
	var_47_bool = 1; // 0x2e4 MovB
	
Label_567:
	var_47_bool = 1; // 0x237 MovB
	
Label_544:
	var_43_float = var_31_float; // 0x220 Mov
}


func_1297(var_0_object, var_1_object, var_161_bool, var_162_object, var_163_float, var_164_float, var_165_bool, var_166_bool)
{
	var_167_bool = 0; var_168_bool = 0; var_169_object = Obj(); var_170_cvector = CVector(0,0,0); var_171_cvector = CVector(0,0,0); var_172_cvector = CVector(0,0,0); var_173_float = 0; var_174_object = Obj(); var_175_bool = 0; var_176_bool = 0; var_177_object = Obj(); var_178_cvector = CVector(0,0,0); var_179_cvector = CVector(0,0,0); var_180_cvector = CVector(0,0,0); var_181_float = 0; var_182_object = Obj(); // 0x511 PushV
	var_0_object = 0; // 0x512 TMovB
	var_1_object = var_162_object; // 0x513 TMov
	var_176_bool = var_166_bool; // 0x514 Mov
	
Label_1301:
	var_183_bool = 0; var_184_object = Obj(); // 0x515 PushV
	var_184_object = var_162_object; // 0x516 Mov
	func_1437(var_183_bool, var_184_object); // 0x517 NEW_2
	var_187_bool = var_183_bool == 0; // 0x519 Not
	if(var_187_bool == 0) goto Label_1309; // 0x51a JumpB
	var_161_bool = 0; // 0x51b MovB
	return 16; // 0x51c Return
	
Label_1309:
	GetPosition(var_178_cvector); // 0x51d ObjFunc
	GetPosition(var_179_cvector); // 0x51f Func
	var_180_cvector = var_178_cvector - var_179_cvector; // 0x521 Sub2
	var_181_float = var_180_cvector | var_180_cvector; // 0x522 Or2
	var_188_bool = 0; // 0x523 PushV
	var_188_bool = 0; // 0x524 MovB
	var_189_int = 0; // 0x525 PushI
	var_190_bool = var_164_float > var_189_int; // 0x526 GT
	if(var_190_bool == 0) goto Label_1324; // 0x527 JumpB
	var_191_float = var_164_float * var_164_float; // 0x528 Mult
	var_192_bool = var_181_float > var_191_float; // 0x529 GT
	if(var_192_bool == 0) goto Label_1324; // 0x52a JumpB
	var_188_bool = 1; // 0x52b MovB
	
Label_1324:
	if(var_188_bool == 0) goto Label_1329; // 0x52c JumpB
	Stop(); // 0x52d Func
	var_161_bool = 0; // 0x52f MovB
	return 16; // 0x530 Return
	
Label_1329:
	var_193_float = var_163_float * var_163_float; // 0x531 Mult
	var_194_bool = var_181_float > var_193_float; // 0x532 GT
	if(var_194_bool == 0) goto Label_1391; // 0x533 JumpB
	GetPFPosition(var_178_cvector); // 0x534 ObjFunc
	FindPathTo(var_182_object, var_178_cvector); // 0x536 Func
	var_195_bool = var_182_object != 0; // 0x538 NullNeq
	if(var_195_bool == 0) goto Label_1340; // 0x539 JumpB
	var_177_object = var_182_object; // 0x53a Mov
	var_182_object = 0; // 0x53b SetNull
	
Label_1340:
	var_196_bool = var_177_object != 0; // 0x53c NullNeq
	if(var_196_bool == 0) goto Label_1373; // 0x53d JumpB
	var_197_bool = var_176_bool; // 0x53e Push
	if(var_197_bool == 0) goto Label_1350; // 0x53f JumpB
	var_176_bool = 0; // 0x540 MovB
	RotatePath(var_177_object, var_175_bool); // 0x541 Func
	var_198_bool = var_175_bool == 0; // 0x543 Not
	if(var_198_bool == 0) goto Label_1350; // 0x544 JumpB
	goto Label_1397; // 0x545 Jump
	
Label_1397:
	var_161_bool = !var_0_object; // 0x575 Not2
	return 16; // 0x576 Return
	
Label_1350:
	var_199_int = 0; // 0x546 PushI
	var_200_float = 0.3; // 0x547 PushF
	SetTimer(var_199_int, var_200_float); // 0x548 Func
	var_201_string = ""; // 0x54a PushV
	func_1444(var_201_string); // 0x54b NEW_2
	var_202_string = ""; // 0x54d PushV
	func_1446(var_202_string); // 0x54e NEW_2
	FollowPath(var_177_object, var_165_bool, var_175_bool, var_201_string, var_202_string); // 0x550 Func
	var_203_bool = var_175_bool == 0; // 0x552 Not
	if(var_203_bool == 0) goto Label_1371; // 0x553 JumpB
	var_204_object = var_0_object; // 0x554 PushT
	if(var_204_object == 0) goto Label_1369; // 0x555 JumpB
	var_177_object = 0; // 0x556 SetNull
	goto Label_1397; // 0x557 Jump
	
Label_1369:
	goto Label_1396; // 0x559 Jump
	
Label_1396:
	goto Label_1301; // 0x574 Jump
	
Label_1371:
	var_177_object = 0; // 0x55b SetNull
	goto Label_1389; // 0x55c Jump
	
Label_1389:
	var_182_object = 0; // 0x56d SetNull
	goto Label_1395; // 0x56e Jump
	
Label_1395:
	var_177_object = 0; // 0x573 SetNull
	
Label_1373:
	var_205_int = 0; // 0x55d PushI
	KillTimer(var_205_int); // 0x55e Func
	var_206_float = 0.5; // 0x560 PushF
	Sleep(var_206_float, var_175_bool); // 0x561 Func
	var_207_bool = var_175_bool == 0; // 0x563 Not
	if(var_207_bool == 0) goto Label_1385; // 0x564 JumpB
	var_208_object = var_0_object; // 0x565 PushT
	if(var_208_object == 0) goto Label_1385; // 0x566 JumpB
	var_177_object = 0; // 0x567 SetNull
	goto Label_1397; // 0x568 Jump
	
Label_1385:
	var_209_int = 0; // 0x569 PushI
	var_210_float = 0.3; // 0x56a PushF
	SetTimer(var_209_int, var_210_float); // 0x56b Func
	
Label_1391:
	var_211_int = 0; // 0x56f PushI
	KillTimer(var_211_int); // 0x570 Func
	goto Label_1397; // 0x572 Jump
}


func_2324(var_179_bool)
{
	var_181_int = 0; var_182_int = 0; // 0x914 PushV
	var_183_string = "money"; // 0x915 PushS
	GetProperty(var_183_string, var_182_int); // 0x916 ObjFunc
	var_184_int = 10000; // 0x918 PushI
	var_179_bool = var_182_int >= var_184_int; // 0x919 GE2
	return 2; // 0x91a Return
}


func_2039(var_100_string, var_101_bool)
{
	var_104_bool = 0; var_105_float = 0; var_106_float = 0; var_107_bool = 0; var_108_float = 0; var_109_float = 0; // 0x7f7 PushV
	lshHasAnimation(var_107_bool, var_100_string); // 0x7f8 Func
	var_110_bool = var_107_bool; // 0x7fa Push
	if(var_110_bool == 0) goto Label_2049; // 0x7fb JumpB
	lshGetAnimTimes(var_100_string, var_108_float, var_109_float); // 0x7fc Func
	lshPlayAnimation(var_108_float, var_109_float, var_101_bool); // 0x7fe Func
	goto Label_2053; // 0x800 Jump
	
Label_2053:
	return 6; // 0x805 Return
	
Label_2049:
	var_111_string = "Can't find lsh animation : "; // 0x801 PushS
	var_112_int = var_111_string + var_100_string; // 0x802 Add
	Trace(var_112_int); // 0x803 Func
}


func_2072(var_70_string)
{
	var_71_bool = 0; var_72_int = 0; var_73_bool = 0; var_74_int = 0; var_75_bool = 0; var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_bool = 0; var_80_int = 0; var_81_bool = 0; var_82_int = 0; var_83_bool = 0; var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); // 0x818 PushV
	IsExisting3DSound(var_79_bool, var_70_string); // 0x819 Func
	var_87_bool = var_79_bool == 0; // 0x81b Not
	if(var_87_bool == 0) goto Label_2097; // 0x81c JumpB
	var_80_int = 0; // 0x81d MovI
	
Label_2078:
	var_88_int = 1; // 0x81e PushI
	var_89_int = var_80_int + var_88_int; // 0x81f Add
	var_90_int = var_70_string + var_89_int; // 0x820 Add
	IsExisting3DSound(var_81_bool, var_90_int); // 0x821 Func
	var_91_bool = var_81_bool == 0; // 0x823 Not
	if(var_91_bool == 0) goto Label_2086; // 0x824 JumpB
	goto Label_2089; // 0x825 Jump
	
Label_2089:
	var_92_bool = var_80_int == 0; // 0x829 Not
	if(var_92_bool == 0) goto Label_2092; // 0x82a JumpB
	return 16; // 0x82b Return
	
Label_2092:
	irand(var_82_int, var_80_int); // 0x82c Func
	var_93_int = 1; // 0x82e PushI
	var_94_int = var_82_int + var_93_int; // 0x82f Add
	var_70_string = var_70_string + var_94_int; // 0x830 Add2
	
Label_2097:
	Is3DSoundLoaded(var_83_bool, var_70_string); // 0x831 Func
	var_95_bool = var_83_bool; // 0x833 Push
	if(var_95_bool == 0) goto Label_2112; // 0x834 JumpB
	GetEyesHeight(var_84_float); // 0x835 Func
	GetDirection(var_85_cvector); // 0x837 Func
	var_96_int = 50; // 0x839 PushI
	var_86_cvector = var_85_cvector * var_96_int; // 0x83a Mult2
	var_97_float = GetByIndex(var_86_cvector, 1); // 0x83b PushE
	var_97_float = var_97_float + var_84_float; // 0x83c Add2
	SetByIndex(var_86_cvector, 1) = var_97_float; // 0x83d PopE
	PlayGlobalSound(var_70_string, var_86_cvector); // 0x83e Func
	
Label_2112:
	return 16; // 0x840 Return
	
Label_2086:
	var_98_int = 1; // 0x826 PushI
	var_80_int = var_80_int + var_98_int; // 0x827 Add2
	goto Label_2078; // 0x828 Jump
}


func_1562(var_69_string)
{
	RemoveRTEnvelope(); // 0x61b Func
	SetDeathState(); // 0x61d Func
	Stop(); // 0x61f Func
	StopAsync(); // 0x621 Func
	StopSecondaryAnimation(); // 0x623 Func
	var_70_string = ""; // 0x625 PushV
	var_70_string = var_69_string; // 0x626 Mov
	func_2072(var_70_string); // 0x627 NEW_2
	var_99_string = "all"; // 0x629 PushS
	PlayAnimation(var_99_string, var_69_string); // 0x62a Func
	WaitForAnimEnd(); // 0x62c Func
	var_100_string = "all"; // 0x62e PushS
	LockAnimationEnd(var_100_string, var_69_string); // 0x62f Func
	RemoveEnvelope(); // 0x631 Func
	return 0; // 0x633 Return
}


func_794(var_0_object, var_387_float, var_388_int)
{
	var_389_object = Obj(); var_390_float = 0; var_391_float = 0; var_392_object = Obj(); var_393_float = 0; var_394_float = 0; // 0x31a PushV
	var_395_float = 0.9; // 0x31b PushF
	var_396_float = var_387_float * var_395_float; // 0x31c Mult
	GetVictim(var_396_float, var_392_object); // 0x31d Func
	ReportAttack(var_0_object); // 0x31f Func
	var_397_bool = var_392_object == var_0_object; // 0x321 Eq
	if(var_397_bool == 0) goto Label_831; // 0x322 JumpB
	var_398_float = 0; var_399_object = Obj(); var_400_int = 0; // 0x323 PushV
	var_399_object = var_392_object; // 0x324 Mov
	var_400_int = var_388_int; // 0x325 Mov
	func_524(var_400_int); // 0x326 NEW_2
	var_393_float = var_398_float; // 0x327 Mov
	var_401_float = 0; var_402_object = Obj(); var_403_float = 0; var_404_int = 0; // 0x329 PushV
	var_402_object = var_392_object; // 0x32a Mov
	var_403_float = var_393_float; // 0x32b Mov
	var_405_int = 0; var_406_object = Obj(); var_407_int = 0; // 0x32c PushV
	var_406_object = var_392_object; // 0x32d Mov
	var_407_int = var_388_int; // 0x32e Mov
	func_527(var_407_int); // 0x32f NEW_2
	var_404_int = var_405_int; // 0x330 Mov
	func_1661(var_401_float, var_402_object, var_403_float, var_404_int); // 0x332 NEW_2
	var_394_float = var_401_float; // 0x333 Mov
	var_466_int = 0; // 0x335 PushV
	func_1177(var_466_int); // 0x336 NEW_2
	ReportHit(var_0_object, var_466_int, var_394_float, var_393_float); // 0x338 Func
	var_467_object = Obj(); var_468_float = 0; // 0x33a PushV
	var_467_object = var_392_object; // 0x33b Mov
	var_468_float = var_394_float; // 0x33c Mov
	func_1184(); // 0x33d NEW_2
	
Label_831:
	return 6; // 0x33f Return
}


func_2331(var_80_int)
{
	var_81_int = 0; var_82_int = 0; // 0x91b PushV
	var_83_string = "branch"; // 0x91c PushS
	GetVariable(var_83_string, var_82_int); // 0x91d Func
	var_84_int = 0; // 0x91f PushI
	var_85_bool = var_82_int == var_84_int; // 0x920 Eq
	if(var_85_bool == 0) goto Label_2341; // 0x921 JumpB
	var_80_int = 1; // 0x922 MovI
	return 2; // 0x923 Return
	
Label_2341:
	var_86_int = 1; // 0x925 PushI
	var_87_bool = var_82_int == var_86_int; // 0x926 Eq
	if(var_87_bool == 0) goto Label_2346; // 0x927 JumpB
	var_80_int = 2; // 0x928 MovI
	return 2; // 0x929 Return
	
Label_2346:
	var_80_int = 3; // 0x92a MovI
	return 2; // 0x92b Return
}


func_1068(var_302_bool)
{
	var_303_bool = 0; // 0x42c PushV
	var_303_bool = 0; // 0x42d MovB
	var_304_bool = 0; // 0x42e PushV
	func_1040(var_303_bool, var_304_bool); // 0x42f NEW_2
	if(var_304_bool == 0) goto Label_1079; // 0x431 JumpB
	var_321_bool = 0; // 0x432 PushV
	func_1084(var_302_bool, var_303_bool, var_321_bool); // 0x433 NEW_2
	if(var_321_bool == 0) goto Label_1079; // 0x435 JumpB
	var_303_bool = 1; // 0x436 MovB
	
Label_1079:
	if(var_303_bool == 0) goto Label_1082; // 0x437 JumpB
	var_302_bool = 1; // 0x438 MovB
	return 0; // 0x439 Return
	
Label_1082:
	var_302_bool = 0; // 0x43a MovB
	return 0; // 0x43b Return
}


func_2348(var_26_int)
{
	var_27_int = 0; var_28_int = 0; // 0x92c PushV
	var_29_string = "branch"; // 0x92d PushS
	GetVariable(var_29_string, var_28_int); // 0x92e Func
	var_26_int = var_28_int; // 0x930 Mov
	return 2; // 0x931 Return
}


func_2354(var_20_object)
{
	var_21_int = 0; // 0x933 PushV
	func_2348(var_21_int); // 0x934 NEW_2
	var_25_int = 1; // 0x936 PushI
	var_26_bool = var_21_int == var_25_int; // 0x937 Eq
	if(var_26_bool == 0) goto Label_2364; // 0x938 JumpB
	WorkWithCorpse(var_20_object); // 0x939 Func
	goto Label_2366; // 0x93b Jump
	
Label_2366:
	return 0; // 0x93e Return
	
Label_2364:
	Barter(var_20_object); // 0x93c Func
}


func_1843(var_20_object, var_21_int, var_22_float)
{
	var_23_cvector = CVector(0,0,0); var_24_object = Obj(); var_25_int = 0; var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_int = 0; var_30_int = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_object = Obj(); var_34_int = 0; var_35_bool = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_int = 0; var_39_int = 0; var_40_cvector = CVector(0,0,0); // 0x733 PushV
	var_41_bool = 0; // 0x734 PushV
	var_41_bool = 0; // 0x735 MovB
	var_42_bool = 0; // 0x736 PushV
	var_42_bool = 0; // 0x737 MovB
	var_43_object = var_20_object; // 0x738 Push
	if(var_43_object == 0) goto Label_1854; // 0x739 JumpB
	var_44_int = 4; // 0x73a PushI
	var_45_bool = var_21_int != var_44_int; // 0x73b Neq
	if(var_45_bool == 0) goto Label_1854; // 0x73c JumpB
	var_42_bool = 1; // 0x73d MovB
	
Label_1854:
	if(var_42_bool == 0) goto Label_1859; // 0x73e JumpB
	var_46_int = 5; // 0x73f PushI
	var_47_bool = var_21_int != var_46_int; // 0x740 Neq
	if(var_47_bool == 0) goto Label_1859; // 0x741 JumpB
	var_41_bool = 1; // 0x742 MovB
	
Label_1859:
	if(var_41_bool == 0) goto Label_1906; // 0x743 JumpB
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x744 PushV
	var_50_cvector = CVector(0,0,0); var_51_object = Obj(); // 0x745 PushV
	var_51_object = var_20_object; // 0x746 Mov
	func_1608(var_51_object); // 0x747 NEW_2
	var_49_cvector = var_50_cvector; // 0x748 Mov
	func_2119(var_48_cvector, var_49_cvector); // 0x74a NEW_2
	var_32_cvector = var_48_cvector; // 0x74b Mov
	CreateVectorVector(var_33_object); // 0x74d Func
	var_34_int = 1; // 0x74f MovI
	
Label_1872:
	var_61_string = "hit"; // 0x750 PushS
	var_62_int = var_61_string + var_34_int; // 0x751 Add
	GetGeometryLocator(var_62_int, var_35_bool, var_36_cvector, var_37_cvector); // 0x752 Func
	var_63_bool = var_35_bool == 0; // 0x754 Not
	if(var_63_bool == 0) goto Label_1879; // 0x755 JumpB
	goto Label_1888; // 0x756 Jump
	
Label_1888:
	size(var_38_int); // 0x760 ObjFunc
	var_64_int = var_38_int; // 0x762 Push
	if(var_64_int == 0) goto Label_1905; // 0x763 JumpB
	irand(var_39_int, var_38_int); // 0x764 Func
	get(var_40_cvector, var_39_int); // 0x766 ObjFunc
	var_65_object = Obj(); var_66_int = 0; var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); // 0x768 PushV
	var_65_object = var_20_object; // 0x769 Mov
	var_66_int = var_21_int; // 0x76a Mov
	var_67_float = var_22_float; // 0x76b Mov
	var_68_cvector = var_40_cvector; // 0x76c Mov
	var_69_cvector = -var_32_cvector; // 0x76d Neg2
	func_1911(var_67_float, var_68_cvector, var_69_cvector); // 0x76e NEW_2
	return 18; // 0x770 Return
	
Label_1905:
	var_33_object = 0; // 0x771 SetNull
	
Label_1906:
	var_110_object = Obj(); // 0x772 PushV
	var_110_object = var_20_object; // 0x773 Mov
	func_1799(var_110_object); // 0x774 NEW_2
	return 18; // 0x776 Return
	
Label_1879:
	var_111_int = var_37_cvector | var_32_cvector; // 0x757 Or
	var_112_float = 0.70711; // 0x758 PushF
	var_113_bool = var_111_int >= var_112_float; // 0x759 GE
	if(var_113_bool == 0) goto Label_1885; // 0x75a JumpB
	add(var_36_cvector); // 0x75b ObjFunc
	
Label_1885:
	var_114_int = 1; // 0x75d PushI
	var_34_int = var_34_int + var_114_int; // 0x75e Add2
	goto Label_1872; // 0x75f Jump
}


func_1594(var_429_string, var_430_int)
{
	var_431_int = 2; // 0x63b PushI
	var_432_bool = var_430_int == var_431_int; // 0x63c Eq
	if(var_432_bool == 0) goto Label_1601; // 0x63d JumpB
	var_429_string = "fire"; // 0x63e MovS
	return 0; // 0x63f Return
	
Label_1601:
	var_433_int = 1; // 0x641 PushI
	var_434_bool = var_430_int == var_433_int; // 0x642 Eq
	if(var_434_bool == 0) goto Label_1606; // 0x643 JumpB
	var_429_string = "bullet"; // 0x644 MovS
	return 0; // 0x645 Return
	
Label_1606:
	var_429_string = "phys"; // 0x646 MovS
	return 0; // 0x647 Return
}


func_1084(var_0_object, var_4_bool, var_321_bool)
{
	var_322_object = Obj(); var_323_bool = 0; var_324_float = 0; var_325_cvector = CVector(0,0,0); var_326_cvector = CVector(0,0,0); var_327_object = Obj(); var_328_bool = 0; var_329_float = 0; var_330_cvector = CVector(0,0,0); var_331_cvector = CVector(0,0,0); // 0x43c PushV
	GetScene(var_327_object); // 0x43d Func
	var_328_bool = 0; // 0x43f MovB
	
Label_1088:
	var_332_cvector = CVector(0,0,0); var_333_object = Obj(); // 0x440 PushV
	var_333_object = var_0_object; // 0x441 MovT
	func_1608(var_333_object); // 0x442 NEW_2
	var_338_int = -var_332_cvector; // 0x444 Neg
	FindDirLength(var_329_float, var_338_int, var_329_float); // 0x445 Func
	var_339_bool = var_329_float < var_4_bool; // 0x447 LT
	if(var_339_bool == 0) goto Label_1098; // 0x448 JumpB
	goto Label_1126; // 0x449 Jump
	
Label_1126:
	var_321_bool = var_328_bool; // 0x466 Mov
	return 10; // 0x467 Return
	
Label_1098:
	Face(var_0_object); // 0x44a Func
	var_340_string = "all"; // 0x44c PushS
	var_341_string = "bjump"; // 0x44d PushS
	PlayAnimation(var_340_string, var_341_string); // 0x44e Func
	GetPFPosition(var_330_cvector); // 0x450 TObjFunc
	GetPFPosition(var_331_cvector); // 0x452 Func
	WaitForAnimEnd(); // 0x454 Func
	func_1172(var_331_cvector); // 0x457 NEW_2
	StopAsync(); // 0x459 Func
	var_342_cvector = CVector(0.0, 0.0, 0.0); // 0x45b PushVec
	SetSpeed(var_342_cvector); // 0x45c Func
	var_328_bool = 1; // 0x45e MovB
	var_343_bool = 0; // 0x45f PushV
	func_1040(var_331_cvector, var_343_bool); // 0x460 NEW_2
	var_344_bool = var_343_bool == 0; // 0x462 Not
	if(var_344_bool == 0) goto Label_1125; // 0x463 JumpB
	goto Label_1126; // 0x464 Jump
	
Label_1125:
	goto Label_1088; // 0x465 Jump
}


func_2367(var_32_string)
{
	var_33_object = Obj(); var_34_int = 0; var_35_bool = 0; var_36_object = Obj(); var_37_int = 0; var_38_bool = 0; // 0x93f PushV
	CreateInvItem(var_36_object); // 0x940 Func
	SetItemName(var_32_string); // 0x942 ObjFunc
	var_39_string = "Organ"; // 0x944 PushS
	var_40_int = 1; // 0x945 PushI
	SetProperty(var_39_string, var_40_int); // 0x946 ObjFunc
	GetItemID(var_37_int); // 0x948 ObjFunc
	var_41_int = 0; // 0x94a PushI
	var_42_int = 1; // 0x94b PushI
	AddItem(var_38_bool, var_36_object, var_41_int, var_42_int); // 0x94c Func
	return 6; // 0x94e Return
}


func_2113(var_84_object)
{
	var_85_object = Obj(); var_86_object = Obj(); // 0x841 PushV
	self(var_86_object); // 0x842 Func
	var_84_object = var_86_object; // 0x844 Mov
	return 2; // 0x845 Return
}


func_833(var_0_object, var_350_bool, var_351_float)
{
	var_352_int = 0; var_353_bool = 0; var_354_int = 0; var_355_string = ""; var_356_int = 0; var_357_bool = 0; var_358_int = 0; var_359_string = ""; // 0x341 PushV
	func_1172(var_359_string); // 0x343 NEW_2
	irand(var_356_int, var_359_string); // 0x345 Func
	var_360_int = 1; // 0x347 PushI
	var_356_int = var_356_int + var_360_int; // 0x348 Add2
	Face(var_0_object); // 0x349 Func
	var_361_bool = 1; // 0x34b PushB
	SetAttackState(var_361_bool); // 0x34c Func
	func_2265(); // 0x34f NEW_2
	var_366_string = "all"; // 0x351 PushS
	var_367_string = "attack_begin"; // 0x352 PushS
	var_368_int = var_367_string + var_356_int; // 0x353 Add
	PlayAnimation(var_366_string, var_368_int); // 0x354 Func
	WaitForAnimEnd(); // 0x356 Func
	func_1140(var_358_int, var_359_string); // 0x359 NEW_2
	var_384_bool = 0; var_385_object = Obj(); // 0x35b PushV
	var_385_object = var_0_object; // 0x35c MovT
	func_1775(var_384_bool, var_385_object); // 0x35d NEW_2
	var_386_bool = var_384_bool == 0; // 0x35f Not
	if(var_386_bool == 0) goto Label_869; // 0x360 JumpB
	StopAsync(); // 0x361 Func
	var_350_bool = 0; // 0x363 MovB
	return 8; // 0x364 Return
	
Label_869:
	var_387_float = 0; var_388_int = 0; // 0x365 PushV
	var_387_float = var_351_float; // 0x366 Mov
	var_388_int = var_356_int; // 0x367 Mov
	func_794(var_359_string, var_387_float, var_388_int); // 0x368 NEW_2
	var_469_string = "all"; // 0x36a PushS
	var_470_string = "attack_middle"; // 0x36b PushS
	var_471_int = var_470_string + var_356_int; // 0x36c Add
	HasAnimation(var_357_bool, var_469_string, var_471_int); // 0x36d Func
	var_472_bool = var_357_bool; // 0x36f Push
	if(var_472_bool == 0) goto Label_950; // 0x370 JumpB
	func_2265(); // 0x372 NEW_2
	var_473_string = "all"; // 0x374 PushS
	var_474_string = "attack_middle"; // 0x375 PushS
	var_475_int = var_474_string + var_356_int; // 0x376 Add
	PlayAnimation(var_473_string, var_475_int); // 0x377 Func
	WaitForAnimEnd(); // 0x379 Func
	func_1172(var_359_string); // 0x37c NEW_2
	var_476_bool = 0; var_477_object = Obj(); // 0x37e PushV
	var_477_object = var_0_object; // 0x37f MovT
	func_1775(var_476_bool, var_477_object); // 0x380 NEW_2
	var_478_bool = var_476_bool == 0; // 0x382 Not
	if(var_478_bool == 0) goto Label_904; // 0x383 JumpB
	StopAsync(); // 0x384 Func
	var_350_bool = 0; // 0x386 MovB
	return 8; // 0x387 Return
	
Label_904:
	var_479_float = 0; var_480_int = 0; // 0x388 PushV
	var_479_float = var_351_float; // 0x389 Mov
	var_480_int = var_356_int; // 0x38a Mov
	func_794(var_359_string, var_479_float, var_480_int); // 0x38b NEW_2
	var_358_int = 1; // 0x38d MovI
	
Label_910:
	var_481_string = "attack_middle"; // 0x38e PushS
	var_482_int = var_481_string + var_356_int; // 0x38f Add
	var_483_string = "_"; // 0x390 PushS
	var_484_int = var_482_int + var_483_string; // 0x391 Add
	var_359_string = var_484_int + var_358_int; // 0x392 Add2
	var_485_string = "all"; // 0x393 PushS
	HasAnimation(var_357_bool, var_485_string, var_359_string); // 0x394 Func
	var_486_bool = var_357_bool == 0; // 0x396 Not
	if(var_486_bool == 0) goto Label_921; // 0x397 JumpB
	goto Label_950; // 0x398 Jump
	
Label_950:
	var_487_bool = 0; // 0x3b6 PushB
	SetAttackState(var_487_bool); // 0x3b7 Func
	var_488_string = "all"; // 0x3b9 PushS
	var_489_string = "attack_end"; // 0x3ba PushS
	var_490_int = var_489_string + var_356_int; // 0x3bb Add
	PlayAnimation(var_488_string, var_490_int); // 0x3bc Func
	var_491_bool = 0; // 0x3be PushV
	func_1186(var_491_bool); // 0x3bf NEW_2
	if(var_491_bool == 0) goto Label_968; // 0x3c1 JumpB
	var_492_bool = 0; var_493_float = 0; // 0x3c2 PushV
	var_493_float = 0.75; // 0x3c3 MovF
	func_970(var_492_bool, var_493_float); // 0x3c4 NEW_2
	StopAsync(); // 0x3c6 Func
	
Label_968:
	var_350_bool = 1; // 0x3c8 MovB
	return 8; // 0x3c9 Return
	
Label_921:
	func_2265(); // 0x39a NEW_2
	var_501_string = "all"; // 0x39c PushS
	PlayAnimation(var_501_string, var_359_string); // 0x39d Func
	WaitForAnimEnd(); // 0x39f Func
	func_1172(var_359_string); // 0x3a2 NEW_2
	var_502_bool = 0; var_503_object = Obj(); // 0x3a4 PushV
	var_503_object = var_0_object; // 0x3a5 MovT
	func_1775(var_502_bool, var_503_object); // 0x3a6 NEW_2
	var_504_bool = var_502_bool == 0; // 0x3a8 Not
	if(var_504_bool == 0) goto Label_942; // 0x3a9 JumpB
	StopAsync(); // 0x3aa Func
	var_350_bool = 0; // 0x3ac MovB
	return 8; // 0x3ad Return
	
Label_942:
	var_505_float = 0; var_506_int = 0; // 0x3ae PushV
	var_505_float = var_351_float; // 0x3af Mov
	var_506_int = var_356_int; // 0x3b0 Mov
	func_794(var_359_string, var_505_float, var_506_int); // 0x3b1 NEW_2
	var_507_int = 1; // 0x3b3 PushI
	var_358_int = var_358_int + var_507_int; // 0x3b4 Add2
	goto Label_910; // 0x3b5 Jump
}


func_2119(var_48_cvector, var_49_cvector)
{
	var_56_float = 0; var_57_float = 0; // 0x847 PushV
	var_58_int = var_49_cvector | var_49_cvector; // 0x848 Or
	var_57_float = sqrt(var_58_int); // 0x849 Sqrt2
	var_59_float = 0.0; // 0x84a PushF
	var_60_bool = var_57_float < var_59_float; // 0x84b LT
	if(var_60_bool == 0) goto Label_2127; // 0x84c JumpB
	var_48_cvector = CVector(0.0, 0.0, 0.0); // 0x84d MovV
	return 2; // 0x84e Return
	
Label_2127:
	var_48_cvector = var_49_cvector / var_49_cvector; // 0x84f Div2
	return 2; // 0x850 Return
}


func_1608(var_50_cvector)
{
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x648 PushV
	GetPosition(var_54_cvector); // 0x649 Func
	GetPosition(var_55_cvector); // 0x64b ObjFunc
	var_50_cvector = var_55_cvector - var_54_cvector; // 0x64d Sub2
	return 4; // 0x64e Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_89_object, var_90_object)
{
	var_0_object = var_90_object; // 0x4b TMov
	var_1_object = var_89_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_95_int = 1; // 0x4e PushI
	if(var_95_int == 0) goto Label_102; // 0x4f JumpB
	var_96_string = ""; // 0x50 PushV
	var_96_string = "Neutral"; // 0x51 MovS
	func_132(var_90_object, var_96_string); // 0x52 NEW_2
	var_113_int = 509131; // 0x54 PushI
	SetMessage(var_113_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_114_int = 509132; // 0x59 PushI
	var_115_int = 10013; // 0x5a PushI
	var_116_int = 10012; // 0x5b PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x5c TObjFunc
	var_117_int = 534051; // 0x5e PushI
	var_118_int = -1; // 0x5f PushI
	var_119_int = 35632; // 0x60 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_120_bool = 0; // 0x66 PushV
	func_2416(var_120_bool); // 0x67 NEW_2
	if(var_120_bool == 0) goto Label_117; // 0x69 JumpB
	
Label_106:
	lshWaitForAnimEnd(); // 0x6a Func
	var_121_string = var_3_string; // 0x6c PushT
	if(var_121_string == 0) goto Label_111; // 0x6d JumpB
	goto Label_116; // 0x6e Jump
	
Label_116:
	goto Label_131; // 0x74 Jump
	
Label_131:
	return 0; // 0x83 Return
	
Label_111:
	var_122_string = ""; // 0x6f PushV
	var_122_string = var_2_object; // 0x70 MovT
	func_2023(var_122_string); // 0x71 NEW_2
	goto Label_106; // 0x73 Jump
	
Label_117:
	var_133_string = "all"; // 0x75 PushS
	var_134_string = "idle"; // 0x76 PushS
	PlayAnimation(var_133_string, var_134_string); // 0x77 Func
	
Label_121:
	WaitForAnimEnd(); // 0x79 Func
	var_135_string = var_3_string; // 0x7b PushT
	if(var_135_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_126:
	var_136_string = "all"; // 0x7e PushS
	var_137_string = "idle"; // 0x7f PushS
	PlayAnimation(var_136_string, var_137_string); // 0x80 Func
	goto Label_121; // 0x82 Jump
}


func_1615(var_156_bool, var_157_object)
{
	var_158_bool = 0; var_159_bool = 0; // 0x64f PushV
	IsPlayerActor(var_157_object, var_159_bool); // 0x650 Func
	var_156_bool = var_159_bool; // 0x652 Mov
	return 2; // 0x653 Return
}


func_2384()
{
	var_26_int = 0; // 0x950 PushV
	func_2348(var_26_int); // 0x951 NEW_2
	var_30_int = 1; // 0x953 PushI
	var_31_bool = var_26_int != var_30_int; // 0x954 Neq
	if(var_31_bool == 0) goto Label_2391; // 0x955 JumpB
	return 0; // 0x956 Return
	
Label_2391:
	var_32_string = ""; // 0x957 PushV
	var_32_string = "liver"; // 0x958 MovS
	func_2367(var_32_string); // 0x959 NEW_2
	var_43_string = ""; // 0x95b PushV
	var_43_string = "kidney"; // 0x95c MovS
	func_2367(var_43_string); // 0x95d NEW_2
	var_44_string = ""; // 0x95f PushV
	var_44_string = "heart"; // 0x960 MovS
	func_2367(var_44_string); // 0x961 NEW_2
	var_45_string = ""; // 0x963 PushV
	var_45_string = "blood"; // 0x964 MovS
	func_2367(var_45_string); // 0x965 NEW_2
	return 0; // 0x967 Return
}


func_2129(var_28_float, var_29_cvector, var_30_cvector)
{
	var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); // 0x851 PushV
	var_32_cvector = var_30_cvector - var_29_cvector; // 0x852 Sub2
	var_28_float = var_32_cvector | var_32_cvector; // 0x853 Or2
	return 2; // 0x854 Return
}


func_1620(var_51_bool, var_52_object, var_53_string)
{
	var_54_bool = 0; var_55_bool = 0; // 0x654 PushV
	var_56_string = "HasProperty"; // 0x655 PushS
	var_57_int = 2; // 0x656 PushI
	var_58_bool = IsFuncExist(var_52_object, var_56_string, var_57_int); // 0x657 FuncExist
	var_59_bool = var_58_bool == 0; // 0x658 Not
	if(var_59_bool == 0) goto Label_1628; // 0x659 JumpB
	var_51_bool = 0; // 0x65a MovB
	return 2; // 0x65b Return
	
Label_1628:
	HasProperty(var_53_string, var_55_bool); // 0x65c ObjFunc
	var_51_bool = var_55_bool; // 0x65e Mov
	return 2; // 0x65f Return
}


func_2133(var_439_float, var_440_float, var_441_float)
{
	var_444_bool = var_440_float < var_441_float; // 0x856 LT
	if(var_444_bool == 0) goto Label_2138; // 0x857 JumpB
	var_439_float = var_440_float; // 0x858 Mov
	goto Label_2139; // 0x859 Jump
	
Label_2139:
	return 0; // 0x85b Return
	
Label_2138:
	var_439_float = var_441_float; // 0x85a Mov
}


func_2140(var_449_float, var_450_float, var_451_float, var_452_float)
{
	var_453_bool = var_450_float < var_451_float; // 0x85d LT
	if(var_453_bool == 0) goto Label_2145; // 0x85e JumpB
	var_449_float = var_451_float; // 0x85f Mov
	return 0; // 0x860 Return
	
Label_2145:
	var_454_bool = var_450_float > var_452_float; // 0x861 GT
	if(var_454_bool == 0) goto Label_2149; // 0x862 JumpB
	var_449_float = var_452_float; // 0x863 Mov
	return 0; // 0x864 Return
	
Label_2149:
	var_449_float = var_450_float; // 0x865 Mov
	return 0; // 0x866 Return
}


func_1632(var_84_bool, var_85_object, var_86_string, var_87_float, var_88_float, var_89_float)
{
	var_90_float = 0; var_91_float = 0; // 0x660 PushV
	var_92_bool = 0; var_93_object = Obj(); var_94_string = ""; // 0x661 PushV
	var_93_object = var_85_object; // 0x662 Mov
	var_94_string = var_86_string; // 0x663 Mov
	func_1620(var_92_bool, var_93_object, var_94_string); // 0x664 NEW_2
	var_101_bool = var_92_bool == 0; // 0x666 Not
	if(var_101_bool == 0) goto Label_1642; // 0x667 JumpB
	var_84_bool = 0; // 0x668 MovB
	return 2; // 0x669 Return
	
Label_1642:
	GetProperty(var_86_string, var_91_float); // 0x66a ObjFunc
	var_102_float = 0; var_103_float = 0; var_104_float = 0; var_105_float = 0; // 0x66c PushV
	var_103_float = var_91_float + var_87_float; // 0x66d Add2
	var_104_float = var_88_float; // 0x66e Mov
	var_105_float = var_89_float; // 0x66f Mov
	func_2140(var_102_float, var_103_float, var_104_float, var_105_float); // 0x670 NEW_2
	SetProperty(var_86_string, var_102_float); // 0x672 ObjFunc
	var_84_bool = 1; // 0x674 MovB
	return 2; // 0x675 Return
}


func_2151(var_37_int, var_38_int)
{
	var_39_object = Obj(); var_40_object = Obj(); // 0x867 PushV
	CreateIntVector(var_40_object); // 0x868 Func
	add(var_37_int); // 0x86a ObjFunc
	add(var_38_int); // 0x86c ObjFunc
	var_41_int = 3; // 0x86e PushI
	SendWorldWndMessage(var_41_int, var_40_object); // 0x86f Func
	return 2; // 0x871 Return
}


func_2408(var_77_int)
{
	var_77_int = 515572; // 0x968 MovI
	return 0; // 0x969 Return
}


func_1129(var_0_object, var_252_bool)
{
	var_253_bool = 0; var_254_bool = 0; // 0x469 PushV
	var_255_string = "IsAttacking"; // 0x46a PushS
	var_256_int = 1; // 0x46b PushI
	var_257_bool = IsFuncExist(var_0_object, var_255_string, var_256_int); // 0x46c FuncExist
	if(var_257_bool == 0) goto Label_1138; // 0x46d JumpB
	IsAttacking(var_254_bool); // 0x46e TObjFunc
	var_252_bool = var_254_bool; // 0x470 Mov
	return 2; // 0x471 Return
	
Label_1138:
	var_252_bool = 0; // 0x472 MovB
	return 2; // 0x473 Return
}


func_2410(var_76_int)
{
	var_76_int = 504031; // 0x96a MovI
	return 0; // 0x96b Return
}


func_2412(var_78_string)
{
	var_78_string = "ui/NPC_Citizen2.png"; // 0x96c MovS
	return 0; // 0x96d Return
}


func_2414(var_79_string)
{
	var_79_string = "ui/NPC_Citizen2_b.png"; // 0x96e MovS
	return 0; // 0x96f Return
}


func_2416(var_71_bool)
{
	var_71_bool = 0; // 0x970 MovB
	return 0; // 0x971 Return
}


func_2418(var_17_object)
{
	var_18_bool = 0; var_19_bool = 0; // 0x972 PushV
	var_20_string = "revolver_ammo"; // 0x973 PushS
	var_21_int = 0; // 0x974 PushI
	var_22_int = 2; // 0x975 PushI
	AddItem(var_19_bool, var_20_string, var_21_int, var_22_int); // 0x976 Func
	var_23_string = "alpha_pills"; // 0x978 PushS
	var_24_int = 0; // 0x979 PushI
	var_25_int = 2; // 0x97a PushI
	AddItem(var_19_bool, var_23_string, var_24_int, var_25_int); // 0x97b Func
	func_2384(); // 0x97e NEW_2
	var_46_object = Obj(); // 0x980 PushV
	var_46_object = var_17_object; // 0x981 Mov
	TaskCall(5); // 0x982 TaskCall
	func_1448(var_46_object); // 0x983 NEW_2
	TaskReturn(); // 0x984 TaskReturn
	return 2; // 0x986 Return
}


func_2163(var_24_object, var_25_int)
{
	var_26_int = 0; var_27_int = 0; // 0x873 PushV
	var_28_object = Obj(); var_29_string = ""; var_30_int = 0; // 0x874 PushV
	var_28_object = var_24_object; // 0x875 Mov
	var_29_string = "money"; // 0x876 MovS
	var_30_int = var_25_int; // 0x877 Mov
	func_1654(var_29_string, var_30_int); // 0x878 NEW_2
	var_34_int = 0; // 0x87a PushI
	var_35_bool = var_25_int > var_34_int; // 0x87b GT
	if(var_35_bool == 0) goto Label_2181; // 0x87c JumpB
	var_36_string = "Money"; // 0x87d PushS
	GetInvItemByName(var_27_int, var_36_string); // 0x87e Func
	var_37_int = 0; var_38_int = 0; // 0x880 PushV
	var_37_int = var_27_int; // 0x881 Mov
	var_38_int = var_25_int; // 0x882 Mov
	func_2151(var_37_int, var_38_int); // 0x883 NEW_2
	
Label_2181:
	return 2; // 0x885 Return
}


func_1140(var_2_object, var_5_cvector)
{
	var_369_float = 0; var_370_int = 0; var_371_float = 0; var_372_int = 0; // 0x474 PushV
	var_373_bool = var_2_object == 0; // 0x475 Not
	if(var_373_bool == 0) goto Label_1144; // 0x476 JumpB
	return 4; // 0x477 Return
	
Label_1144:
	var_374_cvector = var_5_cvector; // 0x478 PushT
	if(var_374_cvector == 0) goto Label_1152; // 0x479 JumpB
	var_375_int = -1; // 0x47a PushI
	var_5_cvector = var_5_cvector + var_375_int; // 0x47b Add2
	var_376_int = 0; // 0x47c PushI
	var_377_bool = var_5_cvector > var_376_int; // 0x47d GT
	if(var_377_bool == 0) goto Label_1152; // 0x47e JumpB
	return 4; // 0x47f Return
	
Label_1152:
	rand(var_371_float); // 0x480 Func
	var_378_float = 0; // 0x482 PushV
	func_1190(var_378_float); // 0x483 NEW_2
	var_379_bool = var_371_float < var_378_float; // 0x485 LT
	if(var_379_bool == 0) goto Label_1171; // 0x486 JumpB
	irand(var_372_int, var_371_float); // 0x487 Func
	var_380_int = 1; // 0x489 PushI
	var_372_int = var_372_int + var_380_int; // 0x48a Add2
	var_381_string = "attack"; // 0x48b PushS
	var_382_int = var_381_string + var_372_int; // 0x48c Add
	Speak(var_382_int); // 0x48d Func
	var_383_int = 0; // 0x48f PushV
	func_1188(var_383_int); // 0x490 NEW_2
	var_5_cvector = var_383_int; // 0x491 TMov
	
Label_1171:
	return 4; // 0x493 Return
}


func_1654(var_29_string, var_30_int)
{
	var_31_int = 0; var_32_int = 0; // 0x676 PushV
	GetProperty(var_29_string, var_32_int); // 0x677 ObjFunc
	var_33_int = var_32_int + var_30_int; // 0x679 Add
	SetProperty(var_29_string, var_33_int); // 0x67a ObjFunc
	return 2; // 0x67c Return
}


func_1911(var_22_object, var_25_cvector, var_26_cvector)
{
	var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); // 0x777 PushV
	GetScene(var_29_object); // 0x778 Func
	var_31_string = "scripted"; // 0x77a PushS
	var_32_string = "blood_dir.xml"; // 0x77b PushS
	AddActorByType(var_30_object, var_31_string, var_29_object, var_25_cvector, var_26_cvector, var_32_string); // 0x77c Func
	var_33_object = Obj(); // 0x77e PushV
	var_33_object = var_22_object; // 0x77f Mov
	func_1799(var_33_object); // 0x780 NEW_2
	return 4; // 0x782 Return
}


func_1399(var_0_object, var_1_object, var_24_int)
{
	var_25_int = 0; // 0x578 PushI
	var_26_bool = var_24_int != var_25_int; // 0x579 Neq
	if(var_26_bool == 0) goto Label_1404; // 0x57a JumpB
	return 0; // 0x57b Return
	
Label_1404:
	var_27_bool = 0; var_28_object = Obj(); // 0x57c PushV
	var_28_object = var_1_object; // 0x57d MovT
	func_1437(var_27_bool, var_28_object); // 0x57e NEW_2
	var_63_bool = var_27_bool == 0; // 0x580 Not
	if(var_63_bool == 0) goto Label_1411; // 0x581 JumpB
	var_0_object = 1; // 0x582 TMovB
	
Label_1411:
	var_64_int = 0; // 0x583 PushI
	KillTimer(var_64_int); // 0x584 Func
	Stop(); // 0x586 Func
	return 0; // 0x588 Return
}


func_378()
{
	return 0; // 0x17a Return
}


func_1661(var_401_float, var_402_object, var_403_float, var_404_int)
{
	var_408_int = 0; var_409_string = ""; var_410_int = 0; var_411_float = 0; var_412_float = 0; var_413_float = 0; var_414_int = 0; var_415_string = ""; var_416_int = 0; var_417_float = 0; var_418_float = 0; var_419_float = 0; // 0x67d PushV
	var_420_bool = 0; var_421_object = Obj(); var_422_string = ""; // 0x67e PushV
	var_421_object = var_402_object; // 0x67f Mov
	var_422_string = "health"; // 0x680 MovS
	func_1620(var_420_bool, var_421_object, var_422_string); // 0x681 NEW_2
	var_423_bool = var_420_bool == 0; // 0x683 Not
	if(var_423_bool == 0) goto Label_1671; // 0x684 JumpB
	var_401_float = 0.0; // 0x685 MovF
	return 12; // 0x686 Return
	
Label_1671:
	var_424_bool = 0; var_425_object = Obj(); var_426_string = ""; // 0x687 PushV
	var_425_object = var_402_object; // 0x688 Mov
	var_426_string = "armor"; // 0x689 MovS
	func_1620(var_424_bool, var_425_object, var_426_string); // 0x68a NEW_2
	var_427_bool = var_424_bool == 0; // 0x68c Not
	if(var_427_bool == 0) goto Label_1680; // 0x68d JumpB
	var_414_int = 0; // 0x68e MovI
	goto Label_1683; // 0x68f Jump
	
Label_1683:
	var_428_string = "armor_"; // 0x693 PushS
	var_429_string = ""; var_430_int = 0; // 0x694 PushV
	var_430_int = var_404_int; // 0x695 Mov
	func_1594(var_429_string, var_430_int); // 0x696 NEW_2
	var_415_string = var_428_string + var_429_string; // 0x698 Add2
	var_435_bool = 0; var_436_object = Obj(); var_437_string = ""; // 0x699 PushV
	var_436_object = var_402_object; // 0x69a Mov
	var_437_string = var_415_string; // 0x69b Mov
	func_1620(var_435_bool, var_436_object, var_437_string); // 0x69c NEW_2
	var_438_bool = var_435_bool == 0; // 0x69e Not
	if(var_438_bool == 0) goto Label_1698; // 0x69f JumpB
	var_416_int = 0; // 0x6a0 MovI
	goto Label_1700; // 0x6a1 Jump
	
Label_1700:
	var_439_float = 0; var_440_float = 0; var_441_float = 0; // 0x6a4 PushV
	var_442_int = var_414_int + var_416_int; // 0x6a5 Add
	var_443_float = 100.0; // 0x6a6 PushF
	var_440_float = var_442_int / var_442_int; // 0x6a7 Div2
	var_441_float = 1; // 0x6a8 MovI
	func_2133(var_439_float, var_440_float, var_441_float); // 0x6a9 NEW_2
	var_417_float = var_439_float; // 0x6aa Mov
	var_445_string = "health"; // 0x6ac PushS
	GetProperty(var_445_string, var_418_float); // 0x6ad ObjFunc
	var_446_int = 1; // 0x6af PushI
	var_447_int = var_446_int - var_417_float; // 0x6b0 Sub
	var_419_float = var_403_float * var_447_int; // 0x6b1 Mult2
	var_448_string = "health"; // 0x6b2 PushS
	var_449_float = 0; var_450_float = 0; var_451_float = 0; var_452_float = 0; // 0x6b3 PushV
	var_450_float = var_418_float - var_419_float; // 0x6b4 Sub2
	var_451_float = 0; // 0x6b5 MovI
	var_452_float = 1; // 0x6b6 MovI
	func_2140(var_449_float, var_450_float, var_451_float, var_452_float); // 0x6b7 NEW_2
	SetProperty(var_448_string, var_449_float); // 0x6b9 ObjFunc
	var_455_bool = 0; var_456_object = Obj(); // 0x6bb PushV
	var_456_object = var_402_object; // 0x6bc Mov
	func_1615(var_455_bool, var_456_object); // 0x6bd NEW_2
	if(var_455_bool == 0) goto Label_1732; // 0x6bf JumpB
	var_457_float = 0; // 0x6c0 PushV
	var_457_float = -var_419_float; // 0x6c1 Neg2
	func_2217(var_457_float); // 0x6c2 NEW_2
	
Label_1732:
	var_401_float = var_419_float; // 0x6c4 Mov
	return 12; // 0x6c5 Return
	
Label_1698:
	GetProperty(var_415_string, var_416_int); // 0x6a2 ObjFunc
	
Label_1680:
	var_465_string = "armor"; // 0x690 PushS
	GetProperty(var_465_string, var_414_int); // 0x691 ObjFunc
}


func_132(var_2_object, var_96_string)
{
	var_97_bool = 0; // 0x85 PushV
	func_2416(var_97_bool); // 0x86 NEW_2
	var_98_bool = var_97_bool == 0; // 0x88 Not
	if(var_98_bool == 0) goto Label_139; // 0x89 JumpB
	return 0; // 0x8a Return
	
Label_139:
	var_99_bool = var_96_string == var_2_object; // 0x8b Eq
	if(var_99_bool == 0) goto Label_142; // 0x8c JumpB
	return 0; // 0x8d Return
	
Label_142:
	var_100_string = ""; var_101_bool = 0; // 0x8e PushV
	var_100_string = var_96_string; // 0x8f Mov
	var_102_string = ""; // 0x90 PushS
	var_103_bool = var_96_string == var_102_string; // 0x91 Eq
	if(var_103_bool == 0) goto Label_149; // 0x92 JumpB
	var_101_bool = 0; // 0x93 MovB
	goto Label_150; // 0x94 Jump
	
Label_150:
	func_2039(var_100_string, var_101_bool); // 0x96 NEW_2
	var_2_object = var_96_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_101_bool = 1; // 0x95 MovB
}


func_1925()
{
	var_236_cvector = CVector(0,0,0); var_237_cvector = CVector(0,0,0); var_238_cvector = CVector(0,0,0); var_239_cvector = CVector(0,0,0); var_240_cvector = CVector(0,0,0); var_241_cvector = CVector(0,0,0); // 0x785 PushV
	GetPosition(var_239_cvector); // 0x786 ObjFunc
	GetPosition(var_240_cvector); // 0x788 Func
	var_241_cvector = var_239_cvector - var_240_cvector; // 0x78a Sub2
	var_242_float = GetByIndex(var_241_cvector, 0); // 0x78b PushE
	var_243_float = GetByIndex(var_241_cvector, 2); // 0x78c PushE
	RotateAsync(var_242_float, var_243_float); // 0x78d Func
	return 6; // 0x78f Return
}


func_2182(var_73_bool, var_74_object, var_75_float)
{
	var_76_bool = var_74_object == 0; // 0x887 Not
	if(var_76_bool == 0) goto Label_2187; // 0x888 JumpB
	var_73_bool = 0; // 0x889 MovB
	return 0; // 0x88a Return
	
Label_2187:
	var_77_int = 0; // 0x88b PushI
	var_78_bool = var_75_float > var_77_int; // 0x88c GT
	if(var_78_bool == 0) goto Label_2194; // 0x88d JumpB
	var_79_int = 8; // 0x88e PushI
	SendWorldWndMessage(var_79_int); // 0x88f Func
	goto Label_2203; // 0x891 Jump
	
Label_2203:
	var_80_float = 0; // 0x89b PushV
	var_80_float = var_75_float; // 0x89c Mov
	func_2234(var_80_float); // 0x89d NEW_2
	var_84_bool = 0; var_85_object = Obj(); var_86_string = ""; var_87_float = 0; var_88_float = 0; var_89_float = 0; // 0x89f PushV
	var_85_object = var_74_object; // 0x8a0 Mov
	var_86_string = "reputation"; // 0x8a1 MovS
	var_87_float = var_75_float; // 0x8a2 Mov
	var_88_float = 0; // 0x8a3 MovI
	var_89_float = 1; // 0x8a4 MovI
	func_1632(var_84_bool, var_85_object, var_86_string, var_87_float, var_88_float, var_89_float); // 0x8a5 NEW_2
	var_73_bool = 1; // 0x8a7 MovB
	return 0; // 0x8a8 Return
	
Label_2194:
	var_108_int = 0; // 0x892 PushI
	var_109_bool = var_75_float < var_108_int; // 0x893 LT
	if(var_109_bool == 0) goto Label_2201; // 0x894 JumpB
	var_110_int = 9; // 0x895 PushI
	SendWorldWndMessage(var_110_int); // 0x896 Func
	goto Label_2203; // 0x898 Jump
	
Label_2201:
	var_73_bool = 0; // 0x899 MovB
	return 0; // 0x89a Return
}


func_1421(var_0_object)
{
	var_0_object = 1; // 0x58d TMovB
	var_20_int = 0; // 0x58e PushI
	KillTimer(var_20_int); // 0x58f Func
	Stop(); // 0x591 Func
	return 0; // 0x593 Return
}


func_1936(var_28_bool, var_30_float)
{
	var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; // 0x790 PushV
	GetPosition(var_41_cvector); // 0x791 ObjFunc
	GetEyesHeight(var_40_float); // 0x793 ObjFunc
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x795 PushE
	var_49_float = var_49_float + var_40_float; // 0x796 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x797 PopE
	GetPosition(var_42_cvector); // 0x798 Func
	GetEyesHeight(var_40_float); // 0x79a Func
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x79c PushE
	var_50_float = var_50_float + var_40_float; // 0x79d Add2
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x79e PopE
	var_43_cvector = var_41_cvector - var_42_cvector; // 0x79f Sub2
	var_51_float = GetByIndex(var_43_cvector, 1); // 0x7a0 PushE
	var_51_float = 0; // 0x7a1 MovI
	SetByIndex(var_43_cvector, 1) = var_51_float; // 0x7a2 PopE
	var_52_int = var_43_cvector | var_43_cvector; // 0x7a3 Or
	var_53_float = sqrt(var_52_int); // 0x7a4 Sqrt
	var_43_cvector = var_43_cvector / var_43_cvector; // 0x7a5 Div2
	var_44_cvector = -var_43_cvector; // 0x7a6 Neg2
	var_54_float = var_43_cvector * var_30_float; // 0x7a7 Mult
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); // 0x7a8 PushV
	var_57_cvector = CVector(0.0, 1.0, 0.0); // 0x7a9 PushVec
	var_56_cvector = var_44_cvector ^ var_57_cvector; // 0x7aa Xor2
	func_2119(var_55_cvector, var_56_cvector); // 0x7ab NEW_2
	var_63_int = 25; // 0x7ad PushI
	var_64_float = var_55_cvector * var_63_int; // 0x7ae Mult
	var_65_int = var_54_float + var_64_float; // 0x7af Add
	var_66_cvector = CVector(0.0, 10.0, 0.0); // 0x7b0 PushVec
	var_45_cvector = var_65_int - var_66_cvector; // 0x7b1 Sub2
	var_46_cvector = var_42_cvector + var_45_cvector; // 0x7b2 Add2
	IsOverrideActive(var_47_bool); // 0x7b3 Func
	var_67_bool = var_47_bool; // 0x7b5 Push
	if(var_67_bool == 0) goto Label_1977; // 0x7b6 JumpB
	var_28_bool = 0; // 0x7b7 MovB
	return 18; // 0x7b8 Return
	
Label_1977:
	StopWorld(); // 0x7b9 Func
	var_68_bool = 1; // 0x7bb PushB
	CameraTransit(var_46_cvector, var_44_cvector, var_68_bool); // 0x7bc Func
	var_69_float = GetByIndex(var_45_cvector, 0); // 0x7be PushE
	var_70_float = GetByIndex(var_45_cvector, 2); // 0x7bf PushE
	Rotate(var_69_float, var_70_float); // 0x7c0 Func
	var_71_bool = 0; // 0x7c2 PushV
	func_2416(var_71_bool); // 0x7c3 NEW_2
	if(var_71_bool == 0) goto Label_1991; // 0x7c5 JumpB
	goto Label_1999; // 0x7c6 Jump
	
Label_1999:
	CameraWaitForPlayFinish(); // 0x7cf Func
	ResumeWorld(); // 0x7d1 Func
	var_28_bool = 1; // 0x7d3 MovB
	return 18; // 0x7d4 Return
	
Label_1991:
	var_72_string = "head"; // 0x7c7 PushS
	HasAnimationTrack(var_48_bool, var_72_string); // 0x7c8 Func
	var_73_bool = var_48_bool; // 0x7ca Push
	if(var_73_bool == 0) goto Label_1999; // 0x7cb JumpB
	var_74_string = "head"; // 0x7cc PushS
	LookAsyncCamera(var_74_string); // 0x7cd Func
}


func_1172(var_0_object)
{
	var_125_object = Obj(); // 0x494 PushV
	var_125_object = var_0_object; // 0x495 MovT
	func_2256(var_125_object); // 0x496 NEW_2
	return 0; // 0x498 Return
}


func_1177(var_466_int)
{
	var_466_int = 0; // 0x499 MovI
	return 0; // 0x49a Return
}


func_1179()
{
	var_258_string = ""; // 0x49b PushV
	var_258_string = "attack_stay"; // 0x49c MovS
	func_2072(var_258_string); // 0x49d NEW_2
	return 0; // 0x49f Return
}


func_1437(var_27_bool, var_28_object)
{
	var_29_bool = 0; var_30_object = Obj(); // 0x59e PushV
	var_30_object = var_28_object; // 0x59f Mov
	func_1775(var_29_bool, var_30_object); // 0x5a0 NEW_2
	var_27_bool = var_29_bool; // 0x5a1 Mov
	return 0; // 0x5a3 Return
}


func_1184()
{
	return 0; // 0x4a1 Return
}


func_1186(var_491_bool)
{
	var_491_bool = 1; // 0x4a2 MovB
	return 0; // 0x4a3 Return
}


func_1188(var_383_int)
{
	var_383_int = 1; // 0x4a4 MovI
	return 0; // 0x4a5 Return
}


func_1444(var_201_string)
{
	var_201_string = "walk"; // 0x5a4 MovS
	return 0; // 0x5a5 Return
}


func_1190(var_378_float)
{
	var_378_float = 0.5; // 0x4a6 MovF
	return 0; // 0x4a7 Return
}


func_1446(var_202_string)
{
	var_202_string = "run"; // 0x5a6 MovS
	return 0; // 0x5a7 Return
}


func_1192(var_2_object, var_132_bool, var_133_object, var_134_float, var_135_float, var_136_bool, var_137_bool)
{
	var_141_bool = 0; var_142_bool = 0; var_143_bool = 0; var_144_bool = 0; // 0x4a8 PushV
	var_145_object = Obj(); // 0x4a9 PushV
	var_145_object = var_133_object; // 0x4aa Mov
	func_2256(var_145_object); // 0x4ab NEW_2
	var_146_int = 1; // 0x4ad PushI
	var_147_int = 5; // 0x4ae PushI
	SetTimer(var_146_int, var_147_int); // 0x4af Func
	CanSee(var_143_bool, var_133_object); // 0x4b1 Func
	var_148_bool = var_143_bool; // 0x4b3 Push
	if(var_148_bool == 0) goto Label_1211; // 0x4b4 JumpB
	var_2_object = 1; // 0x4b5 TMovB
	var_149_object = Obj(); // 0x4b6 PushV
	var_149_object = var_133_object; // 0x4b7 Mov
	func_2054(var_149_object); // 0x4b8 NEW_2
	goto Label_1212; // 0x4ba Jump
	
Label_1212:
	var_156_bool = 0; var_157_object = Obj(); // 0x4bc PushV
	var_157_object = var_133_object; // 0x4bd Mov
	func_1615(var_156_bool, var_157_object); // 0x4be NEW_2
	if(var_156_bool == 0) goto Label_1222; // 0x4c0 JumpB
	var_160_object = Obj(); // 0x4c1 PushV
	func_2113(var_160_object); // 0x4c2 NEW_2
	SendPlayerEnemy(var_133_object, var_160_object); // 0x4c4 Func
	
Label_1222:
	var_161_bool = 0; var_162_object = Obj(); var_163_float = 0; var_164_float = 0; var_165_bool = 0; var_166_bool = 0; // 0x4c6 PushV
	var_162_object = var_133_object; // 0x4c7 Mov
	var_163_float = var_134_float; // 0x4c8 Mov
	var_164_float = var_135_float; // 0x4c9 Mov
	var_165_bool = var_136_bool; // 0x4ca Mov
	var_166_bool = var_137_bool; // 0x4cb Mov
	func_1297(var_143_bool, var_144_bool, var_161_bool, var_162_object, var_163_float, var_164_float, var_165_bool, var_166_bool); // 0x4cc NEW_2
	var_144_bool = var_161_bool; // 0x4cd Mov
	var_212_object = var_2_object; // 0x4cf PushT
	if(var_212_object == 0) goto Label_1236; // 0x4d0 JumpB
	var_213_string = "head"; // 0x4d1 PushS
	UnlookAsync(var_213_string); // 0x4d2 Func
	
Label_1236:
	var_214_int = 1; // 0x4d4 PushI
	KillTimer(var_214_int); // 0x4d5 Func
	var_132_bool = var_144_bool; // 0x4d7 Mov
	return 4; // 0x4d8 Return
	
Label_1211:
	var_2_object = 0; // 0x4bb TMovB
}


func_2217(var_457_float)
{
	var_458_object = Obj(); var_459_object = Obj(); // 0x8a9 PushV
	CreateFloatVector(var_459_object); // 0x8aa Func
	add(var_457_float); // 0x8ac ObjFunc
	var_460_int = 0; // 0x8ae PushI
	var_461_bool = var_457_float < var_460_int; // 0x8af LT
	if(var_461_bool == 0) goto Label_2229; // 0x8b0 JumpB
	var_462_float = 0.7; // 0x8b1 PushF
	var_463_int = 500; // 0x8b2 PushI
	RumblePlay(var_462_float, var_463_int); // 0x8b3 Func
	
Label_2229:
	var_464_int = 15; // 0x8b5 PushI
	SendWorldWndMessage(var_464_int, var_459_object); // 0x8b6 Func
	return 2; // 0x8b8 Return
}


func_1448(var_46_object)
{
	var_47_object = Obj(); // 0x5a9 PushV
	var_47_object = var_46_object; // 0x5aa Mov
	func_1471(var_47_object); // 0x5ab NEW_2
	var_127_int = 50; // 0x5ad PushI
	var_128_int = 40; // 0x5ae PushI
	SetRTEnvelope(var_127_int, var_128_int); // 0x5af Func
	
Label_1457:
	Hold(); // 0x5b1 Func
	goto Label_1457; // 0x5b3 Jump
}


func_2234(var_80_float)
{
	var_81_object = Obj(); var_82_object = Obj(); // 0x8ba PushV
	CreateFloatVector(var_82_object); // 0x8bb Func
	add(var_80_float); // 0x8bd ObjFunc
	var_83_int = 16; // 0x8bf PushI
	SendWorldWndMessage(var_83_int, var_82_object); // 0x8c0 Func
	return 2; // 0x8c2 Return
}


func_1471(var_47_object)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_string = ""; var_53_object = Obj(); var_54_bool = 0; var_55_bool = 0; var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_string = ""; var_63_object = Obj(); var_64_bool = 0; var_65_bool = 0; var_66_float = 0; var_67_cvector = CVector(0,0,0); // 0x5bf PushV
	var_68_bool = var_47_object == 0; // 0x5c0 NullEq
	if(var_68_bool == 0) goto Label_1479; // 0x5c1 JumpB
	var_69_string = ""; // 0x5c2 PushV
	var_69_string = "fdie"; // 0x5c3 MovS
	func_1562(var_69_string); // 0x5c4 NEW_2
	goto Label_1561; // 0x5c6 Jump
	
Label_1561:
	return 20; // 0x619 Return
	
Label_1479:
	GetPosition(var_58_cvector); // 0x5c7 ObjFunc
	GetPosition(var_59_cvector); // 0x5c9 Func
	GetDirection(var_60_cvector); // 0x5cb Func
	var_61_cvector = var_59_cvector - var_58_cvector; // 0x5cd Sub2
	var_101_float = GetByIndex(var_61_cvector, 0); // 0x5ce PushE
	var_102_float = GetByIndex(var_60_cvector, 0); // 0x5cf PushE
	var_103_float = var_101_float * var_102_float; // 0x5d0 Mult
	var_104_float = GetByIndex(var_61_cvector, 2); // 0x5d1 PushE
	var_105_float = GetByIndex(var_60_cvector, 2); // 0x5d2 PushE
	var_106_float = var_104_float * var_105_float; // 0x5d3 Mult
	var_107_int = var_103_float + var_106_float; // 0x5d4 Add
	var_108_int = 0; // 0x5d5 PushI
	var_109_bool = var_107_int >= var_108_int; // 0x5d6 GE
	if(var_109_bool == 0) goto Label_1498; // 0x5d7 JumpB
	var_62_string = "fdie"; // 0x5d8 MovS
	goto Label_1499; // 0x5d9 Jump
	
Label_1499:
	RemoveRTEnvelope(); // 0x5db Func
	SetDeathState(); // 0x5dd Func
	Stop(); // 0x5df Func
	StopAsync(); // 0x5e1 Func
	var_63_object = var_47_object; // 0x5e3 Mov
	var_110_string = "GetScriptProperty"; // 0x5e4 PushS
	var_111_int = 2; // 0x5e5 PushI
	var_112_bool = IsFuncExist(var_47_object, var_110_string, var_111_int); // 0x5e6 FuncExist
	if(var_112_bool == 0) goto Label_1523; // 0x5e7 JumpB
	var_113_string = "Owner"; // 0x5e8 PushS
	HasScriptProperty(var_64_bool, var_113_string); // 0x5e9 ObjFunc
	var_114_bool = var_64_bool; // 0x5eb Push
	if(var_114_bool == 0) goto Label_1523; // 0x5ec JumpB
	var_115_string = "Owner"; // 0x5ed PushS
	GetScriptProperty(var_63_object, var_115_string); // 0x5ee ObjFunc
	var_116_bool = var_63_object == 0; // 0x5f0 NullEq
	if(var_116_bool == 0) goto Label_1523; // 0x5f1 JumpB
	var_63_object = var_47_object; // 0x5f2 Mov
	
Label_1523:
	var_117_string = "@GetEyesHeight"; // 0x5f3 PushS
	var_118_int = 1; // 0x5f4 PushI
	var_119_bool = IsFuncExist(var_63_object, var_117_string, var_118_int); // 0x5f5 FuncExist
	if(var_119_bool == 0) goto Label_1538; // 0x5f6 JumpB
	GetEyesHeight(var_66_float); // 0x5f7 ObjFunc
	var_67_cvector = CVector(0.0, 0.0, 0.0); // 0x5f9 MovV
	var_120_float = GetByIndex(var_67_cvector, 1); // 0x5fa PushE
	var_120_float = var_66_float; // 0x5fb Mov
	SetByIndex(var_67_cvector, 1) = var_120_float; // 0x5fc PopE
	var_121_string = "head"; // 0x5fd PushS
	LookAsync(var_47_object, var_121_string, var_67_cvector); // 0x5fe Func
	var_65_bool = 1; // 0x600 MovB
	goto Label_1539; // 0x601 Jump
	
Label_1539:
	var_122_string = ""; // 0x603 PushV
	var_122_string = var_62_string; // 0x604 Mov
	func_2072(var_122_string); // 0x605 NEW_2
	var_123_string = "all"; // 0x607 PushS
	PlayAnimation(var_123_string, var_62_string); // 0x608 Func
	WaitForAnimEnd(); // 0x60a Func
	var_124_bool = var_65_bool; // 0x60c Push
	if(var_124_bool == 0) goto Label_1555; // 0x60d JumpB
	StopAsync(); // 0x60e Func
	var_125_string = "head"; // 0x610 PushS
	UnlookAsync(var_125_string); // 0x611 Func
	
Label_1555:
	var_126_string = "all"; // 0x613 PushS
	LockAnimationEnd(var_126_string, var_62_string); // 0x614 Func
	RemoveEnvelope(); // 0x616 Func
	var_63_object = 0; // 0x618 SetNull
	
Label_1538:
	var_65_bool = 0; // 0x602 MovB
	
Label_1498:
	var_62_string = "bdie"; // 0x5da MovS
}


func_2244(var_20_bool, var_21_string, var_22_string)
{
	var_23_object = Obj(); var_24_object = Obj(); // 0x8c4 PushV
	FindActor(var_24_object, var_21_string); // 0x8c5 Func
	var_25_bool = var_24_object == 0; // 0x8c7 NullEq
	if(var_25_bool == 0) goto Label_2251; // 0x8c8 JumpB
	var_20_bool = 0; // 0x8c9 MovB
	return 2; // 0x8ca Return
	
Label_2251:
	Trigger(var_24_object, var_22_string); // 0x8cb Func
	var_20_bool = 1; // 0x8cd MovB
	return 2; // 0x8ce Return
}


func_1734(var_44_bool)
{
	var_46_bool = 0; var_47_bool = 0; // 0x6c6 PushV
	IsDead(var_47_bool); // 0x6c7 ObjFunc
	var_44_bool = var_47_bool; // 0x6c9 Mov
	return 2; // 0x6ca Return
}


func_970(var_492_bool, var_493_float)
{
	var_494_float = 0; var_495_bool = 0; var_496_float = 0; var_497_bool = 0; // 0x3ca PushV
	rand(var_496_float); // 0x3cb Func
	var_498_bool = var_496_float < var_493_float; // 0x3cd LT
	if(var_498_bool == 0) goto Label_990; // 0x3ce JumpB
	
Label_975:
	IsAnimationPlaying(var_497_bool); // 0x3cf Func
	var_499_bool = var_497_bool == 0; // 0x3d1 Not
	if(var_499_bool == 0) goto Label_980; // 0x3d2 JumpB
	goto Label_989; // 0x3d3 Jump
	
Label_989:
	goto Label_995; // 0x3dd Jump
	
Label_995:
	var_492_bool = 0; // 0x3e3 MovB
	return 4; // 0x3e4 Return
	
Label_980:
	var_500_bool = 0; // 0x3d4 PushV
	func_1068(var_500_bool); // 0x3d5 NEW_2
	if(var_500_bool == 0) goto Label_986; // 0x3d7 JumpB
	var_492_bool = 1; // 0x3d8 MovB
	return 4; // 0x3d9 Return
	
Label_986:
	sync(); // 0x3da Func
	goto Label_975; // 0x3dc Jump
	
Label_990:
	WaitForAnimEnd(); // 0x3de Func
	func_1172(var_497_bool); // 0x3e1 NEW_2
}


func_1739(var_33_bool, var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj(); var_38_object = Obj(); // 0x6cb PushV
	var_39_bool = var_34_object == 0; // 0x6cc NullEq
	if(var_39_bool == 0) goto Label_1744; // 0x6cd JumpB
	var_33_bool = 0; // 0x6ce MovB
	return 4; // 0x6cf Return
	
Label_1744:
	var_40_bool = 0; // 0x6d0 PushV
	var_40_bool = 0; // 0x6d1 MovB
	var_41_string = "IsDead"; // 0x6d2 PushS
	var_42_int = 1; // 0x6d3 PushI
	var_43_bool = IsFuncExist(var_34_object, var_41_string, var_42_int); // 0x6d4 FuncExist
	if(var_43_bool == 0) goto Label_1756; // 0x6d5 JumpB
	var_44_bool = 0; var_45_object = Obj(); // 0x6d6 PushV
	var_45_object = var_34_object; // 0x6d7 Mov
	func_1734(var_45_object); // 0x6d8 NEW_2
	if(var_44_bool == 0) goto Label_1756; // 0x6da JumpB
	var_40_bool = 1; // 0x6db MovB
	
Label_1756:
	if(var_40_bool == 0) goto Label_1759; // 0x6dc JumpB
	var_33_bool = 0; // 0x6dd MovB
	return 4; // 0x6de Return
	
Label_1759:
	GetScene(var_37_object); // 0x6df Func
	var_48_bool = var_37_object == 0; // 0x6e1 NullEq
	if(var_48_bool == 0) goto Label_1765; // 0x6e2 JumpB
	var_33_bool = 0; // 0x6e3 MovB
	return 4; // 0x6e4 Return
	
Label_1765:
	GetScene(var_38_object); // 0x6e5 ObjFunc
	var_49_bool = var_37_object != var_38_object; // 0x6e7 Neq
	if(var_49_bool == 0) goto Label_1771; // 0x6e8 JumpB
	var_33_bool = 0; // 0x6e9 MovB
	return 4; // 0x6ea Return
	
Label_1771:
	var_33_bool = 1; // 0x6eb MovB
	return 4; // 0x6ec Return
}


func_2256(var_19_object)
{
	var_20_bool = 0; var_21_bool = 0; // 0x8d0 PushV
	IsPlayerActor(var_19_object, var_21_bool); // 0x8d1 Func
	var_22_bool = var_21_bool; // 0x8d3 Push
	if(var_22_bool == 0) goto Label_2264; // 0x8d4 JumpB
	var_23_string = "attack"; // 0x8d5 PushS
	PlayGlobalMusic(var_23_string); // 0x8d6 Func
	
Label_2264:
	return 2; // 0x8d8 Return
}


func_2005()
{
	var_140_bool = 0; var_141_bool = 0; // 0x7d5 PushV
	var_142_bool = 1; // 0x7d6 PushB
	CameraSwitchToNormal(var_142_bool); // 0x7d7 Func
	var_143_bool = 0; // 0x7d9 PushV
	func_2416(var_143_bool); // 0x7da NEW_2
	if(var_143_bool == 0) goto Label_2014; // 0x7dc JumpB
	goto Label_2022; // 0x7dd Jump
	
Label_2022:
	return 2; // 0x7e6 Return
	
Label_2014:
	var_144_string = "head"; // 0x7de PushS
	HasAnimationTrack(var_141_bool, var_144_string); // 0x7df Func
	var_145_bool = var_141_bool; // 0x7e1 Push
	if(var_145_bool == 0) goto Label_2022; // 0x7e2 JumpB
	var_146_string = "head"; // 0x7e3 PushS
	UnlookAsync(var_146_string); // 0x7e4 Func
}


func_2265()
{
	var_362_object = Obj(); var_363_object = Obj(); // 0x8d9 PushV
	GetScene(var_363_object); // 0x8da Func
	var_364_string = "battle"; // 0x8dc PushS
	var_365_object = Obj(); // 0x8dd PushV
	func_2113(var_365_object); // 0x8de NEW_2
	BroadcastMessage(var_364_string, var_365_object, var_363_object); // 0x8e0 Func
	return 2; // 0x8e2 Return
}


func_503()
{
	StopGroup0(); // 0x1f7 Func
	Stop(); // 0x1f9 Func
	return 0; // 0x1fb Return
}


func_2276()
{
	var_66_string = "d3q01"; // 0x8e5 PushS
	var_67_int = 8; // 0x8e6 PushI
	SetVariable(var_66_string, var_67_int); // 0x8e7 Func
	var_68_bool = 0; var_69_string = ""; var_70_string = ""; // 0x8e9 PushV
	var_69_string = "quest_d3_01"; // 0x8ea MovS
	var_70_string = "gpatrol_attack"; // 0x8eb MovS
	func_2244(var_68_bool, var_69_string, var_70_string); // 0x8ec NEW_2
	return 0; // 0x8ee Return
}


func_997(var_0_object, var_289_bool, var_290_float)
{
	var_291_bool = 0; var_292_cvector = CVector(0,0,0); var_293_cvector = CVector(0,0,0); var_294_cvector = CVector(0,0,0); var_295_float = 0; var_296_bool = 0; var_297_cvector = CVector(0,0,0); var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_float = 0; // 0x3e5 PushV
	
Label_998:
	IsAnimationPlaying(var_296_bool); // 0x3e6 Func
	var_301_bool = var_296_bool == 0; // 0x3e8 Not
	if(var_301_bool == 0) goto Label_1003; // 0x3e9 JumpB
	goto Label_1035; // 0x3ea Jump
	
Label_1035:
	func_1172(var_300_float); // 0x40c NEW_2
	var_289_bool = 0; // 0x40e MovB
	return 10; // 0x40f Return
	
Label_1003:
	var_302_bool = 0; // 0x3eb PushV
	func_1068(var_302_bool); // 0x3ec NEW_2
	if(var_302_bool == 0) goto Label_1009; // 0x3ee JumpB
	var_289_bool = 1; // 0x3ef MovB
	return 10; // 0x3f0 Return
	
Label_1009:
	var_345_bool = 0; var_346_object = Obj(); // 0x3f1 PushV
	var_346_object = var_0_object; // 0x3f2 MovT
	func_1775(var_345_bool, var_346_object); // 0x3f3 NEW_2
	var_347_bool = var_345_bool == 0; // 0x3f5 Not
	if(var_347_bool == 0) goto Label_1017; // 0x3f6 JumpB
	var_289_bool = 0; // 0x3f7 MovB
	return 10; // 0x3f8 Return
	
Label_1017:
	GetPFPosition(var_297_cvector); // 0x3f9 TObjFunc
	GetPFPosition(var_298_cvector); // 0x3fb Func
	var_299_cvector = var_297_cvector - var_298_cvector; // 0x3fd Sub2
	var_300_float = var_299_cvector | var_299_cvector; // 0x3fe Or2
	var_348_float = var_290_float * var_290_float; // 0x3ff Mult
	var_349_bool = var_300_float < var_348_float; // 0x400 LT
	if(var_349_bool == 0) goto Label_1032; // 0x401 JumpB
	var_350_bool = 0; var_351_float = 0; // 0x402 PushV
	var_351_float = var_290_float; // 0x403 Mov
	func_833(var_300_float, var_350_bool, var_351_float); // 0x404 NEW_2
	var_289_bool = 1; // 0x406 MovB
	return 10; // 0x407 Return
	
Label_1032:
	sync(); // 0x408 Func
	goto Label_998; // 0x40a Jump
}


func_1255(var_2_object)
{
	var_17_int = 1; // 0x4e7 PushI
	KillTimer(var_17_int); // 0x4e8 Func
	var_18_object = var_2_object; // 0x4ea PushT
	if(var_18_object == 0) goto Label_1264; // 0x4eb JumpB
	var_2_object = 0; // 0x4ec TMovB
	var_19_string = "head"; // 0x4ed PushS
	UnlookAsync(var_19_string); // 0x4ee Func
	
Label_1264:
	func_1421(var_16_object); // 0x4f1 NEW_2
	return 0; // 0x4f3 Return
}


func_2023(var_122_string)
{
	var_123_bool = 0; var_124_float = 0; var_125_float = 0; var_126_bool = 0; var_127_float = 0; var_128_float = 0; // 0x7e7 PushV
	lshHasAnimation(var_126_bool, var_122_string); // 0x7e8 Func
	var_129_bool = var_126_bool; // 0x7ea Push
	if(var_129_bool == 0) goto Label_2034; // 0x7eb JumpB
	lshGetAnimTimes(var_122_string, var_127_float, var_128_float); // 0x7ec Func
	var_130_bool = 0; // 0x7ee PushB
	lshPlayAnimation(var_127_float, var_128_float, var_130_bool); // 0x7ef Func
	goto Label_2038; // 0x7f1 Jump
	
Label_2038:
	return 6; // 0x7f6 Return
	
Label_2034:
	var_131_string = "Can't find lsh animation : "; // 0x7f2 PushS
	var_132_int = var_131_string + var_122_string; // 0x7f3 Add
	Trace(var_132_int); // 0x7f4 Func
}


func_2287(var_22_object)
{
	var_24_object = Obj(); var_25_int = 0; // 0x8f0 PushV
	var_24_object = var_22_object; // 0x8f1 Mov
	var_25_int = -10000; // 0x8f2 MovI
	func_2163(var_24_object, var_25_int); // 0x8f3 NEW_2
	return 0; // 0x8f5 Return
}


func_1775(var_29_bool, var_30_object)
{
	var_31_int = 0; var_32_int = 0; // 0x6ef PushV
	var_33_bool = 0; var_34_object = Obj(); // 0x6f0 PushV
	var_34_object = var_30_object; // 0x6f1 Mov
	func_1739(var_33_bool, var_34_object); // 0x6f2 NEW_2
	var_50_bool = var_33_bool == 0; // 0x6f4 Not
	if(var_50_bool == 0) goto Label_1784; // 0x6f5 JumpB
	var_29_bool = 0; // 0x6f6 MovB
	return 2; // 0x6f7 Return
	
Label_1784:
	var_51_bool = 0; var_52_object = Obj(); var_53_string = ""; // 0x6f8 PushV
	var_52_object = var_30_object; // 0x6f9 Mov
	var_53_string = "noaccess"; // 0x6fa MovS
	func_1620(var_51_bool, var_52_object, var_53_string); // 0x6fb NEW_2
	var_60_bool = var_51_bool == 0; // 0x6fd Not
	if(var_60_bool == 0) goto Label_1793; // 0x6fe JumpB
	var_29_bool = 1; // 0x6ff MovB
	return 2; // 0x700 Return
	
Label_1793:
	var_61_string = "noaccess"; // 0x701 PushS
	GetProperty(var_61_string, var_32_int); // 0x702 ObjFunc
	var_62_int = 0; // 0x704 PushI
	var_29_bool = var_32_int == var_62_int; // 0x705 Eq2
	return 2; // 0x706 Return
}


func_2294()
{
	var_44_bool = 0; var_45_string = ""; var_46_string = ""; // 0x8f7 PushV
	var_45_string = "quest_d3_01"; // 0x8f8 MovS
	var_46_string = "gpatrol_talk"; // 0x8f9 MovS
	func_2244(var_44_bool, var_45_string, var_46_string); // 0x8fa NEW_2
	return 0; // 0x8fc Return
}


func_759(var_1_object, var_2_object, var_4_bool)
{
	var_54_bool = 0; var_55_bool = 0; var_56_cvector = CVector(0,0,0); var_57_bool = 0; var_58_bool = 0; var_59_cvector = CVector(0,0,0); // 0x2f7 PushV
	var_1_object = 0; // 0x2f8 TMovI
	
Label_761:
	var_60_string = "all"; // 0x2f9 PushS
	var_61_string = "attack_begin"; // 0x2fa PushS
	var_62_int = 1; // 0x2fb PushI
	var_63_int = var_1_object + var_62_int; // 0x2fc Add
	var_64_int = var_61_string + var_63_int; // 0x2fd Add
	HasAnimation(var_57_bool, var_60_string, var_64_int); // 0x2fe Func
	var_65_bool = var_57_bool == 0; // 0x300 Not
	if(var_65_bool == 0) goto Label_771; // 0x301 JumpB
	goto Label_774; // 0x302 Jump
	
Label_774:
	var_2_object = 0; // 0x306 TMovI
	
Label_775:
	var_66_string = "attack"; // 0x307 PushS
	var_67_int = 1; // 0x308 PushI
	var_68_int = var_2_object + var_67_int; // 0x309 Add
	var_69_int = var_66_string + var_68_int; // 0x30a Add
	IsExisting3DSound(var_58_bool, var_69_int); // 0x30b Func
	var_70_bool = var_58_bool == 0; // 0x30d Not
	if(var_70_bool == 0) goto Label_784; // 0x30e JumpB
	goto Label_787; // 0x30f Jump
	
Label_787:
	var_71_string = "all"; // 0x313 PushS
	var_72_string = "bjump"; // 0x314 PushS
	GetAnimationOffset(var_59_cvector, var_71_string, var_72_string); // 0x315 Func
	var_73_float = GetByIndex(var_59_cvector, 2); // 0x317 PushE
	var_4_bool = -var_73_float; // 0x318 Neg2
	return 6; // 0x319 Return
	
Label_784:
	var_74_int = 1; // 0x310 PushI
	var_2_object = var_2_object + var_74_int; // 0x311 Add2
	goto Label_775; // 0x312 Jump
	
Label_771:
	var_75_int = 1; // 0x303 PushI
	var_1_object = var_1_object + var_75_int; // 0x304 Add2
	goto Label_761; // 0x305 Jump
}


func_508()
{
	return 0; // 0x1fc Return
}


func_2301()
{
	var_52_string = "playsound"; // 0x8fe PushS
	var_53_string = "givemoney"; // 0x8ff PushS
	TriggerWorld(var_52_string, var_53_string); // 0x900 Func
	return 0; // 0x902 Return
}


