task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_int = 1; // 0xb4 PushI
	if(var_15_int == 0) goto Label_384; // 0xb5 JumpB
	func_1054(); // 0xb7 NEW_2
	var_17_int = 28267; // 0xb9 PushI
	var_18_bool = var_14_bool == var_17_int; // 0xba Eq
	if(var_18_bool == 0) goto Label_193; // 0xbb JumpB
	var_19_object = Obj(); var_20_object = Obj(); // 0xbc PushV
	var_19_object = var_1_object; // 0xbd MovT
	var_20_object = var_0_object; // 0xbe MovT
	func_1141(); // 0xbf NEW_2
	
Label_193:
	var_46_int = 28275; // 0xc1 PushI
	var_47_bool = var_14_bool == var_46_int; // 0xc2 Eq
	if(var_47_bool == 0) goto Label_211; // 0xc3 JumpB
	var_48_object = Obj(); var_49_object = Obj(); // 0xc4 PushV
	var_48_object = var_1_object; // 0xc5 MovT
	var_49_object = var_0_object; // 0xc6 MovT
	func_1150(); // 0xc7 NEW_2
	var_82_object = Obj(); var_83_object = Obj(); // 0xc9 PushV
	var_82_object = var_1_object; // 0xca MovT
	var_83_object = var_0_object; // 0xcb MovT
	func_1194(); // 0xcc NEW_2
	var_85_object = Obj(); var_86_object = Obj(); // 0xce PushV
	var_85_object = var_1_object; // 0xcf MovT
	var_86_object = var_0_object; // 0xd0 MovT
	func_1178(); // 0xd1 NEW_2
	
Label_211:
	var_111_int = 29417; // 0xd3 PushI
	var_112_bool = var_14_bool == var_111_int; // 0xd4 Eq
	if(var_112_bool == 0) goto Label_229; // 0xd5 JumpB
	var_113_object = Obj(); var_114_object = Obj(); // 0xd6 PushV
	var_113_object = var_1_object; // 0xd7 MovT
	var_114_object = var_0_object; // 0xd8 MovT
	func_1150(); // 0xd9 NEW_2
	var_115_object = Obj(); var_116_object = Obj(); // 0xdb PushV
	var_115_object = var_1_object; // 0xdc MovT
	var_116_object = var_0_object; // 0xdd MovT
	func_1194(); // 0xde NEW_2
	var_117_object = Obj(); var_118_object = Obj(); // 0xe0 PushV
	var_117_object = var_1_object; // 0xe1 MovT
	var_118_object = var_0_object; // 0xe2 MovT
	func_1178(); // 0xe3 NEW_2
	
Label_229:
	var_119_int = 28264; // 0xe5 PushI
	var_120_bool = var_13_cvector == var_119_int; // 0xe6 Eq
	if(var_120_bool == 0) goto Label_277; // 0xe7 JumpB
	var_121_bool = 0; var_122_object = Obj(); // 0xe8 PushV
	var_122_object = var_1_object; // 0xe9 MovT
	func_1199(var_122_object); // 0xea NEW_2
	if(var_121_bool == 0) goto Label_252; // 0xec JumpB
	var_129_string = ""; // 0xed PushV
	var_129_string = "Neutral"; // 0xee MovS
	func_157(var_14_bool, var_129_string); // 0xef NEW_2
	var_146_int = 526972; // 0xf1 PushI
	SetMessage(var_146_int); // 0xf2 TObjFunc
	ClearReplies(); // 0xf4 TObjFunc
	var_147_int = 528069; // 0xf6 PushI
	var_148_int = 29412; // 0xf7 PushI
	var_149_int = 29411; // 0xf8 PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0xf9 TObjFunc
	return 0; // 0xfb Return
	
Label_252:
	var_150_string = ""; // 0xfc PushV
	var_150_string = "Neutral"; // 0xfd MovS
	func_157(var_14_bool, var_150_string); // 0xfe NEW_2
	var_151_int = 526976; // 0x100 PushI
	SetMessage(var_151_int); // 0x101 TObjFunc
	ClearReplies(); // 0x103 TObjFunc
	var_152_bool = 0; var_153_object = Obj(); // 0x105 PushV
	var_153_object = var_1_object; // 0x106 MovT
	func_1211(var_153_object); // 0x107 NEW_2
	if(var_152_bool == 0) goto Label_271; // 0x109 JumpB
	var_158_int = 526981; // 0x10a PushI
	var_159_int = 28274; // 0x10b PushI
	var_160_int = 28273; // 0x10c PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x10d TObjFunc
	
Label_271:
	var_161_int = 526977; // 0x10f PushI
	var_162_int = -1; // 0x110 PushI
	var_163_int = 28269; // 0x111 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x112 TObjFunc
	return 0; // 0x114 Return
	
Label_277:
	var_164_int = 28274; // 0x115 PushI
	var_165_bool = var_13_cvector == var_164_int; // 0x116 Eq
	if(var_165_bool == 0) goto Label_300; // 0x117 JumpB
	var_166_string = ""; // 0x118 PushV
	var_166_string = "Neutral"; // 0x119 MovS
	func_157(var_14_bool, var_166_string); // 0x11a NEW_2
	var_167_int = 526982; // 0x11c PushI
	SetMessage(var_167_int); // 0x11d TObjFunc
	ClearReplies(); // 0x11f TObjFunc
	var_168_int = 528073; // 0x121 PushI
	var_169_int = 29416; // 0x122 PushI
	var_170_int = 29415; // 0x123 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x124 TObjFunc
	var_171_int = 528075; // 0x126 PushI
	var_172_int = -1; // 0x127 PushI
	var_173_int = 29417; // 0x128 PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x129 TObjFunc
	return 0; // 0x12b Return
	
Label_300:
	var_174_int = 29416; // 0x12c PushI
	var_175_bool = var_13_cvector == var_174_int; // 0x12d Eq
	if(var_175_bool == 0) goto Label_318; // 0x12e JumpB
	var_176_string = ""; // 0x12f PushV
	var_176_string = "Neutral"; // 0x130 MovS
	func_157(var_14_bool, var_176_string); // 0x131 NEW_2
	var_177_int = 528074; // 0x133 PushI
	SetMessage(var_177_int); // 0x134 TObjFunc
	ClearReplies(); // 0x136 TObjFunc
	var_178_int = 526983; // 0x138 PushI
	var_179_int = -1; // 0x139 PushI
	var_180_int = 28275; // 0x13a PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x13b TObjFunc
	return 0; // 0x13d Return
	
Label_318:
	var_181_int = 29412; // 0x13e PushI
	var_182_bool = var_13_cvector == var_181_int; // 0x13f Eq
	if(var_182_bool == 0) goto Label_336; // 0x140 JumpB
	var_183_string = ""; // 0x141 PushV
	var_183_string = "Neutral"; // 0x142 MovS
	func_157(var_14_bool, var_183_string); // 0x143 NEW_2
	var_184_int = 528070; // 0x145 PushI
	SetMessage(var_184_int); // 0x146 TObjFunc
	ClearReplies(); // 0x148 TObjFunc
	var_185_int = 528071; // 0x14a PushI
	var_186_int = 29414; // 0x14b PushI
	var_187_int = 29413; // 0x14c PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x14d TObjFunc
	return 0; // 0x14f Return
	
Label_336:
	var_188_int = 29414; // 0x150 PushI
	var_189_bool = var_13_cvector == var_188_int; // 0x151 Eq
	if(var_189_bool == 0) goto Label_354; // 0x152 JumpB
	var_190_string = ""; // 0x153 PushV
	var_190_string = "Neutral"; // 0x154 MovS
	func_157(var_14_bool, var_190_string); // 0x155 NEW_2
	var_191_int = 528072; // 0x157 PushI
	SetMessage(var_191_int); // 0x158 TObjFunc
	ClearReplies(); // 0x15a TObjFunc
	var_192_int = 526973; // 0x15c PushI
	var_193_int = 28266; // 0x15d PushI
	var_194_int = 28265; // 0x15e PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x15f TObjFunc
	return 0; // 0x161 Return
	
Label_354:
	var_195_int = 28266; // 0x162 PushI
	var_196_bool = var_13_cvector == var_195_int; // 0x163 Eq
	if(var_196_bool == 0) goto Label_372; // 0x164 JumpB
	var_197_string = ""; // 0x165 PushV
	var_197_string = "Neutral"; // 0x166 MovS
	func_157(var_14_bool, var_197_string); // 0x167 NEW_2
	var_198_int = 526974; // 0x169 PushI
	SetMessage(var_198_int); // 0x16a TObjFunc
	ClearReplies(); // 0x16c TObjFunc
	var_199_int = 526975; // 0x16e PushI
	var_200_int = -1; // 0x16f PushI
	var_201_int = 28267; // 0x170 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x171 TObjFunc
	return 0; // 0x173 Return
	
Label_372:
	var_3_string = 1; // 0x174 TMovB
	var_202_bool = 0; // 0x175 PushV
	func_1139(var_202_bool); // 0x176 NEW_2
	if(var_202_bool == 0) goto Label_380; // 0x178 JumpB
	lshStopAnimation(); // 0x179 Func
	goto Label_382; // 0x17b Jump
	
Label_382:
	return 0; // 0x17e Return
	
Label_380:
	StopAnimation(); // 0x17c Func
	
Label_384:
	return 0; // 0x180 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_int = 0; var_15_object = Obj(); var_16_int = 0; var_17_object = Obj(); // 0x18b PushV
	func_489(var_16_int, var_17_object); // 0x18d NEW_2
	var_21_int = 0; var_22_object = Obj(); // 0x18f PushV
	var_22_object = var_13_bool; // 0x190 Mov
	TaskCall(0); // 0x191 TaskCall
	func_0(var_23_object, var_21_int, var_22_object); // 0x192 NEW_2
	TaskReturn(); // 0x193 TaskReturn
	var_16_int = var_23_object; // 0x194 Mov
	var_168_int = 0; // 0x196 PushI
	var_169_bool = var_16_int == var_168_int; // 0x197 Eq
	if(var_169_bool == 0) goto Label_423; // 0x198 JumpB
	GetScene(var_17_object); // 0x199 Func
	var_170_object = Obj(); // 0x19b PushV
	func_1061(var_170_object); // 0x19c NEW_2
	RemoveStationaryActor(var_170_object); // 0x19e ObjFunc
	var_173_object = Obj(); // 0x1a0 PushV
	var_173_object = var_13_bool; // 0x1a1 Mov
	TaskCall(3); // 0x1a2 TaskCall
	func_619(var_174_object, var_175_cvector, var_176_bool, var_173_object); // 0x1a3 NEW_2
	TaskReturn(); // 0x1a4 TaskReturn
	var_17_object = 0; // 0x1a6 SetNull
	
Label_423:
	return 4; // 0x1a7 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_int = 10; // 0x1d3 PushI
	var_15_bool = var_13_bool == var_14_int; // 0x1d4 Eq
	if(var_15_bool == 0) goto Label_488; // 0x1d5 JumpB
	var_16_bool = 0; // 0x1d6 PushV
	func_451(var_11_object, var_12_cvector, var_13_bool, var_16_bool); // 0x1d7 NEW_2
	if(var_16_bool == 0) goto Label_482; // 0x1d9 JumpB
	var_29_bool = var_2_object == 0; // 0x1da Not
	if(var_29_bool == 0) goto Label_481; // 0x1db JumpB
	var_30_object = Obj(); // 0x1dc PushV
	var_30_object = var_4_bool; // 0x1dd MovT
	func_1043(var_30_object); // 0x1de NEW_2
	var_2_object = 1; // 0x1e0 TMovB
	
Label_481:
	goto Label_488; // 0x1e1 Jump
	
Label_488:
	return 0; // 0x1e8 Return
	
Label_482:
	var_37_object = var_2_object; // 0x1e2 PushT
	if(var_37_object == 0) goto Label_488; // 0x1e3 JumpB
	var_38_string = "head"; // 0x1e4 PushS
	UnlookAsync(var_38_string); // 0x1e5 Func
	var_2_object = 0; // 0x1e7 TMovB
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_int)
{
	var_14_cvector = CVector(0,0,0); var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_float = 0; // 0x2b4 PushV
	var_22_int = 120; // 0x2b5 PushI
	var_23_bool = var_13_int != var_22_int; // 0x2b6 Neq
	if(var_23_bool == 0) goto Label_697; // 0x2b7 JumpB
	return 8; // 0x2b8 Return
	
Label_697:
	var_24_bool = var_0_object == 0; // 0x2b9 NullEq
	if(var_24_bool == 0) goto Label_706; // 0x2ba JumpB
	Stop(); // 0x2bb Func
	var_25_int = 1; // 0x2bd PushI
	KillTimer(var_25_int); // 0x2be Func
	var_2_object = 1; // 0x2c0 TMovB
	goto Label_743; // 0x2c1 Jump
	
Label_743:
	return 8; // 0x2e7 Return
	
Label_706:
	GetDirection(var_18_cvector); // 0x2c2 Func
	var_26_float = 7000.0; // 0x2c4 PushF
	FindDirLength(var_19_float, var_18_cvector, var_26_float); // 0x2c5 Func
	var_27_cvector = CVector(0,0,0); var_28_float = 0; // 0x2c7 PushV
	var_28_float = 1.74533; // 0x2c8 MovF
	func_589(var_27_cvector, var_28_float); // 0x2c9 NEW_2
	var_20_cvector = var_27_cvector; // 0x2ca Mov
	var_21_float = var_20_cvector | var_20_cvector; // 0x2cc Or2
	var_57_bool = 0; // 0x2cd PushV
	var_57_bool = 0; // 0x2ce MovB
	var_58_float = 2500.0; // 0x2cf PushF
	var_59_bool = var_21_float >= var_58_float; // 0x2d0 GE
	if(var_59_bool == 0) goto Label_736; // 0x2d1 JumpB
	var_60_bool = 0; // 0x2d2 PushV
	var_60_bool = 1; // 0x2d3 MovB
	var_61_float = var_19_float * var_19_float; // 0x2d4 Mult
	var_62_float = 2.25; // 0x2d5 PushF
	var_63_float = var_61_float * var_62_float; // 0x2d6 Mult
	var_64_bool = var_21_float >= var_63_float; // 0x2d7 GE
	if(var_64_bool == 0) goto Label_734; // 0x2d8 JumpB
	var_65_bool = 0; // 0x2d9 PushV
	func_760(var_60_bool, var_65_bool); // 0x2da NEW_2
	if(var_65_bool == 0) goto Label_734; // 0x2dc JumpB
	var_60_bool = 0; // 0x2dd MovB
	
Label_734:
	if(var_60_bool == 0) goto Label_736; // 0x2de JumpB
	var_57_bool = 1; // 0x2df MovB
	
Label_736:
	if(var_57_bool == 0) goto Label_743; // 0x2e0 JumpB
	Stop(); // 0x2e1 Func
	var_85_cvector = CVector(0,0,0); // 0x2e3 PushV
	func_776(var_85_cvector); // 0x2e4 NEW_2
	var_1_object = var_85_cvector + var_20_cvector; // 0x2e6 Add2
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object)
{
	func_744(var_13_object); // 0x2f1 NEW_2
	var_15_object = Obj(); // 0x2f3 PushV
	var_15_object = var_13_object; // 0x2f4 Mov
	func_1375(); // 0x2f5 NEW_2
	return 0; // 0x2f7 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_int, var_15_float, var_16_float)
{
	var_17_object = Obj(); var_18_int = 0; var_19_float = 0; // 0x54e PushV
	var_17_object = var_13_object; // 0x54f Mov
	var_18_int = var_14_int; // 0x550 Mov
	var_19_float = var_15_float; // 0x551 Mov
	func_840(var_17_object, var_18_int, var_19_float); // 0x552 NEW_2
	return 0; // 0x554 Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_int, var_15_float, var_16_float, var_17_cvector, var_18_cvector)
{
	var_19_object = Obj(); var_20_int = 0; var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); // 0x556 PushV
	var_19_object = var_13_object; // 0x557 Mov
	var_20_int = var_14_int; // 0x558 Mov
	var_21_float = var_15_float; // 0x559 Mov
	var_22_cvector = var_17_cvector; // 0x55a Mov
	var_23_cvector = var_18_cvector; // 0x55b Mov
	func_908(var_21_float, var_22_cvector, var_23_cvector); // 0x55c NEW_2
	return 0; // 0x55e Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object)
{
	return 0; // 0x560 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool)
{
	
Label_385:
	var_13_int = 3; // 0x181 PushI
	Sleep(var_13_int); // 0x182 Func
	var_14_float = 0; var_15_float = 0; // 0x184 PushV
	var_14_float = 300; // 0x185 MovI
	var_15_float = 100; // 0x186 MovI
	func_424(var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_14_float, var_15_float); // 0x187 NEW_2
	goto Label_385; // 0x189 Jump
}


func_0(var_0_object, var_21_int, var_22_object)
{
	var_24_object = Obj(); var_25_bool = 0; var_26_int = 0; var_27_bool = 0; var_28_object = Obj(); var_29_bool = 0; var_30_int = 0; var_31_bool = 0; // 0x0 PushV
	var_0_object = var_22_object; // 0x1 TMov
	var_32_bool = 0; var_33_object = Obj(); var_34_float = 0; // 0x2 PushV
	var_33_object = var_22_object; // 0x3 Mov
	var_34_float = 70.0; // 0x4 MovF
	func_927(var_33_object, var_34_float); // 0x5 NEW_2
	var_78_bool = var_32_bool == 0; // 0x7 Not
	if(var_78_bool == 0) goto Label_11; // 0x8 JumpB
	var_21_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_28_object); // 0xb Func
	var_79_int = 0; // 0xd PushV
	func_1133(var_79_int); // 0xe NEW_2
	SetNPCName(var_79_int); // 0x10 ObjFunc
	var_80_int = 0; // 0x12 PushV
	func_1131(var_80_int); // 0x13 NEW_2
	SetNPCDescription(var_80_int); // 0x15 ObjFunc
	var_81_string = ""; // 0x17 PushV
	func_1135(var_81_string); // 0x18 NEW_2
	SetPhoto(var_81_string); // 0x1a ObjFunc
	var_82_string = ""; // 0x1c PushV
	func_1137(var_82_string); // 0x1d NEW_2
	SetPhoto2(var_82_string); // 0x1f ObjFunc
	var_83_int = 0; // 0x21 PushV
	func_1340(var_83_int); // 0x22 NEW_2
	SetPlayerName(var_83_int); // 0x24 ObjFunc
	var_30_int = -1; // 0x26 MovI
	IsOverrideActive(var_29_bool); // 0x27 Func
	var_91_bool = var_29_bool; // 0x29 Push
	if(var_91_bool == 0) goto Label_45; // 0x2a JumpB
	var_21_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_28_object); // 0x2d Func
	var_92_object = Obj(); var_93_object = Obj(); // 0x2f PushV
	var_92_object = var_22_object; // 0x30 Mov
	var_93_object = var_28_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_94_object, var_95_object, var_96_string, var_97_bool, var_92_object, var_93_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_31_bool); // 0x36 ObjFunc
	
Label_56:
	var_160_bool = var_31_bool == 0; // 0x38 Not
	if(var_160_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_31_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_161_object = Obj(); // 0x3f PushV
	var_161_object = var_22_object; // 0x40 Mov
	func_995(); // 0x41 NEW_2
	StopDialog(var_28_object); // 0x43 Func
	GetReturnValue(var_30_int); // 0x45 ObjFunc
	var_21_int = var_30_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1028(var_111_string, var_112_bool)
{
	var_115_bool = 0; var_116_float = 0; var_117_float = 0; var_118_bool = 0; var_119_float = 0; var_120_float = 0; // 0x404 PushV
	lshHasAnimation(var_118_bool, var_111_string); // 0x405 Func
	var_121_bool = var_118_bool; // 0x407 Push
	if(var_121_bool == 0) goto Label_1038; // 0x408 JumpB
	lshGetAnimTimes(var_111_string, var_119_float, var_120_float); // 0x409 Func
	lshPlayAnimation(var_119_float, var_120_float, var_112_bool); // 0x40b Func
	goto Label_1042; // 0x40d Jump
	
Label_1042:
	return 6; // 0x412 Return
	
Label_1038:
	var_122_string = "Can't find lsh animation : "; // 0x40e PushS
	var_123_int = var_122_string + var_111_string; // 0x40f Add
	Trace(var_123_int); // 0x410 Func
}


func_776(var_85_cvector)
{
	var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x308 PushV
	GetPosition(var_87_cvector); // 0x309 Func
	var_85_cvector = var_87_cvector; // 0x30b Mov
	return 2; // 0x30c Return
}


func_1290(var_54_object)
{
	var_55_object = Obj(); var_56_object = Obj(); var_57_object = Obj(); var_58_object = Obj(); // 0x50a PushV
	GetMainOutdoorScene(var_57_object); // 0x50b Func
	var_59_bool = var_57_object == 0; // 0x50d NullEq
	if(var_59_bool == 0) goto Label_1301; // 0x50e JumpB
	var_60_string = "Can't find main outdoor scene"; // 0x50f PushS
	Trace(var_60_string); // 0x510 Func
	var_58_object = 0; // 0x512 SetNull
	var_54_object = var_58_object; // 0x513 Mov
	return 4; // 0x514 Return
	
Label_1301:
	GetMap(var_58_object); // 0x515 ObjFunc
	var_54_object = var_58_object; // 0x517 Mov
	return 4; // 0x518 Return
}


func_908(var_19_object, var_22_cvector, var_23_cvector)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); // 0x38c PushV
	GetScene(var_26_object); // 0x38d Func
	var_28_string = "scripted"; // 0x38f PushS
	var_29_string = "blood_dir.xml"; // 0x390 PushS
	AddActorByType(var_27_object, var_28_string, var_26_object, var_22_cvector, var_23_cvector, var_29_string); // 0x391 Func
	var_30_object = Obj(); // 0x393 PushV
	var_30_object = var_19_object; // 0x394 Mov
	func_796(var_30_object); // 0x395 NEW_2
	return 4; // 0x397 Return
}


func_781(var_47_cvector)
{
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); // 0x30d PushV
	GetPosition(var_51_cvector); // 0x30e Func
	GetPosition(var_52_cvector); // 0x310 ObjFunc
	var_47_cvector = var_52_cvector - var_51_cvector; // 0x312 Sub2
	return 4; // 0x313 Return
}


func_1043(var_30_object)
{
	var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_float = 0; var_34_cvector = CVector(0,0,0); // 0x413 PushV
	GetEyesHeight(var_33_float); // 0x414 ObjFunc
	var_34_cvector = CVector(0.0, 0.0, 0.0); // 0x416 MovV
	var_35_float = GetByIndex(var_34_cvector, 1); // 0x417 PushE
	var_35_float = var_33_float; // 0x418 Mov
	SetByIndex(var_34_cvector, 1) = var_35_float; // 0x419 PopE
	var_36_string = "head"; // 0x41a PushS
	LookAsync(var_30_object, var_36_string, var_34_cvector); // 0x41b Func
	return 4; // 0x41d Return
}


func_788(var_20_float)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); // 0x314 PushV
	GetPosition(var_25_cvector); // 0x315 Func
	GetPosition(var_26_cvector); // 0x317 ObjFunc
	var_27_cvector = var_26_cvector - var_25_cvector; // 0x319 Sub2
	var_20_float = var_27_cvector | var_27_cvector; // 0x31a Or2
	return 6; // 0x31b Return
}


func_1178()
{
	var_87_object = Obj(); var_88_string = ""; var_89_float = 0; // 0x49b PushV
	var_90_object = Obj(); // 0x49c PushV
	func_1290(var_90_object); // 0x49d NEW_2
	var_87_object = var_90_object; // 0x49e Mov
	var_88_string = "pt_gmap_factory"; // 0x4a0 MovS
	var_89_float = 2; // 0x4a1 MovI
	func_1307(var_87_object, var_88_string, var_89_float); // 0x4a2 NEW_2
	var_110_object = Obj(); // 0x4a4 PushV
	func_1290(var_110_object); // 0x4a5 NEW_2
	ShowMap(var_110_object); // 0x4a7 ObjFunc
	return 0; // 0x4a9 Return
}


func_1307(var_87_object, var_88_string, var_89_float)
{
	var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_object = Obj(); var_94_bool = 0; var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_object = Obj(); var_98_bool = 0; // 0x51b PushV
	GetMainOutdoorScene(var_97_object); // 0x51c Func
	var_99_bool = var_97_object == 0; // 0x51e NullEq
	if(var_99_bool == 0) goto Label_1316; // 0x51f JumpB
	var_100_string = "Can't find main outdoor scene"; // 0x520 PushS
	Trace(var_100_string); // 0x521 Func
	return 8; // 0x523 Return
	
Label_1316:
	GetLocator(var_88_string, var_98_bool, var_95_cvector, var_96_cvector); // 0x524 ObjFunc
	var_101_bool = var_98_bool == 0; // 0x526 Not
	if(var_101_bool == 0) goto Label_1326; // 0x527 JumpB
	var_102_string = "Warning: outdoor scene locator "; // 0x528 PushS
	var_103_int = var_102_string + var_88_string; // 0x529 Add
	var_104_string = " doesnt exist"; // 0x52a PushS
	var_105_int = var_103_int + var_104_string; // 0x52b Add
	Trace(var_105_int); // 0x52c Func
	
Label_1326:
	GetMap(var_87_object); // 0x52e ObjFunc
	var_106_bool = var_87_object == 0; // 0x530 NullEq
	if(var_106_bool == 0) goto Label_1334; // 0x531 JumpB
	var_107_string = "Can't find map"; // 0x532 PushS
	Trace(var_107_string); // 0x533 Func
	return 8; // 0x535 Return
	
Label_1334:
	var_108_float = GetByIndex(var_95_cvector, 0); // 0x536 PushE
	var_109_float = GetByIndex(var_95_cvector, 2); // 0x537 PushE
	SetMapParams(var_108_float, var_109_float, var_89_float); // 0x538 ObjFunc
	return 8; // 0x53a Return
}


func_796(var_30_object)
{
	var_31_bool = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_string = ""; var_38_bool = 0; var_39_int = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_string = ""; // 0x31c PushV
	var_45_bool = var_30_object == 0; // 0x31d NullEq
	if(var_45_bool == 0) goto Label_800; // 0x31e JumpB
	return 14; // 0x31f Return
	
Label_800:
	IsDead(var_38_bool); // 0x320 Func
	var_46_bool = var_38_bool; // 0x322 Push
	if(var_46_bool == 0) goto Label_805; // 0x323 JumpB
	return 14; // 0x324 Return
	
Label_805:
	GetSecondaryAnimationType(var_39_int); // 0x325 Func
	var_47_int = 0; // 0x327 PushI
	var_48_bool = var_39_int < var_47_int; // 0x328 LT
	if(var_48_bool == 0) goto Label_811; // 0x329 JumpB
	return 14; // 0x32a Return
	
Label_811:
	GetPosition(var_40_cvector); // 0x32b ObjFunc
	GetPosition(var_41_cvector); // 0x32d Func
	GetDirection(var_42_cvector); // 0x32f Func
	var_43_cvector = var_41_cvector - var_40_cvector; // 0x331 Sub2
	var_49_float = GetByIndex(var_43_cvector, 0); // 0x332 PushE
	var_50_float = GetByIndex(var_42_cvector, 0); // 0x333 PushE
	var_51_float = var_49_float * var_50_float; // 0x334 Mult
	var_52_float = GetByIndex(var_43_cvector, 2); // 0x335 PushE
	var_53_float = GetByIndex(var_42_cvector, 2); // 0x336 PushE
	var_54_float = var_52_float * var_53_float; // 0x337 Mult
	var_55_int = var_51_float + var_54_float; // 0x338 Add
	var_56_int = 0; // 0x339 PushI
	var_57_bool = var_55_int >= var_56_int; // 0x33a GE
	if(var_57_bool == 0) goto Label_830; // 0x33b JumpB
	var_44_string = "fhit"; // 0x33c MovS
	goto Label_831; // 0x33d Jump
	
Label_831:
	var_58_string = "hit_react"; // 0x33f PushS
	var_59_string = "1"; // 0x340 PushS
	var_60_int = var_44_string + var_59_string; // 0x341 Add
	var_61_string = "2"; // 0x342 PushS
	var_62_int = var_44_string + var_61_string; // 0x343 Add
	var_63_int = -10; // 0x344 PushI
	FadeSecondaryAnimation(var_58_string, var_60_int, var_62_int, var_63_int); // 0x345 Func
	return 14; // 0x347 Return
	
Label_830:
	var_44_string = "bhit"; // 0x33e MovS
}


func_157(var_2_object, var_107_string)
{
	var_108_bool = 0; // 0x9e PushV
	func_1139(var_108_bool); // 0x9f NEW_2
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
	func_1028(var_111_string, var_112_bool); // 0xaf NEW_2
	var_2_object = var_107_string; // 0xb1 TMov
	return 0; // 0xb2 Return
	
Label_174:
	var_112_bool = 1; // 0xae MovB
}


func_1054()
{
	var_16_bool = 0; // 0x41e PushV
	func_1139(var_16_bool); // 0x41f NEW_2
	if(var_16_bool == 0) goto Label_1060; // 0x421 JumpB
	lshStopSpeech(); // 0x422 Func
	
Label_1060:
	return 0; // 0x424 Return
}


func_927(var_32_bool, var_34_float)
{
	var_35_float = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_bool = 0; var_43_bool = 0; var_44_float = 0; var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_bool = 0; var_52_bool = 0; // 0x39f PushV
	GetPosition(var_45_cvector); // 0x3a0 ObjFunc
	GetEyesHeight(var_44_float); // 0x3a2 ObjFunc
	var_53_float = GetByIndex(var_45_cvector, 1); // 0x3a4 PushE
	var_53_float = var_53_float + var_44_float; // 0x3a5 Add2
	SetByIndex(var_45_cvector, 1) = var_53_float; // 0x3a6 PopE
	GetPosition(var_46_cvector); // 0x3a7 Func
	GetEyesHeight(var_44_float); // 0x3a9 Func
	var_54_float = GetByIndex(var_46_cvector, 1); // 0x3ab PushE
	var_54_float = var_54_float + var_44_float; // 0x3ac Add2
	SetByIndex(var_46_cvector, 1) = var_54_float; // 0x3ad PopE
	var_47_cvector = var_45_cvector - var_46_cvector; // 0x3ae Sub2
	var_55_float = GetByIndex(var_47_cvector, 1); // 0x3af PushE
	var_55_float = 0; // 0x3b0 MovI
	SetByIndex(var_47_cvector, 1) = var_55_float; // 0x3b1 PopE
	var_56_int = var_47_cvector | var_47_cvector; // 0x3b2 Or
	var_57_float = sqrt(var_56_int); // 0x3b3 Sqrt
	var_47_cvector = var_47_cvector / var_47_cvector; // 0x3b4 Div2
	var_48_cvector = -var_47_cvector; // 0x3b5 Neg2
	var_58_float = var_47_cvector * var_34_float; // 0x3b6 Mult
	var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); // 0x3b7 PushV
	var_61_cvector = CVector(0.0, 1.0, 0.0); // 0x3b8 PushVec
	var_60_cvector = var_48_cvector ^ var_61_cvector; // 0x3b9 Xor2
	func_1067(var_59_cvector, var_60_cvector); // 0x3ba NEW_2
	var_67_int = 25; // 0x3bc PushI
	var_68_float = var_59_cvector * var_67_int; // 0x3bd Mult
	var_69_int = var_58_float + var_68_float; // 0x3be Add
	var_70_cvector = CVector(0.0, 10.0, 0.0); // 0x3bf PushVec
	var_49_cvector = var_69_int - var_70_cvector; // 0x3c0 Sub2
	var_50_cvector = var_46_cvector + var_49_cvector; // 0x3c1 Add2
	IsOverrideActive(var_51_bool); // 0x3c2 Func
	var_71_bool = var_51_bool; // 0x3c4 Push
	if(var_71_bool == 0) goto Label_968; // 0x3c5 JumpB
	var_32_bool = 0; // 0x3c6 MovB
	return 18; // 0x3c7 Return
	
Label_968:
	StopWorld(); // 0x3c8 Func
	CameraTransit(var_50_cvector, var_48_cvector); // 0x3ca Func
	var_72_float = GetByIndex(var_49_cvector, 0); // 0x3cc PushE
	var_73_float = GetByIndex(var_49_cvector, 2); // 0x3cd PushE
	Rotate(var_72_float, var_73_float); // 0x3ce Func
	var_74_bool = 0; // 0x3d0 PushV
	func_1139(var_74_bool); // 0x3d1 NEW_2
	if(var_74_bool == 0) goto Label_981; // 0x3d3 JumpB
	goto Label_989; // 0x3d4 Jump
	
Label_989:
	CameraWaitForPlayFinish(); // 0x3dd Func
	ResumeWorld(); // 0x3df Func
	var_32_bool = 1; // 0x3e1 MovB
	return 18; // 0x3e2 Return
	
Label_981:
	var_75_string = "head"; // 0x3d5 PushS
	HasAnimationTrack(var_52_bool, var_75_string); // 0x3d6 Func
	var_76_bool = var_52_bool; // 0x3d8 Push
	if(var_76_bool == 0) goto Label_989; // 0x3d9 JumpB
	var_77_string = "head"; // 0x3da PushS
	LookAsyncCamera(var_77_string); // 0x3db Func
}


func_922(var_16_bool)
{
	var_17_bool = 0; var_18_bool = 0; // 0x39a PushV
	IsLoaded(var_18_bool); // 0x39b Func
	var_16_bool = var_18_bool; // 0x39d Mov
	return 2; // 0x39e Return
}


func_1061(var_170_object)
{
	var_171_object = Obj(); var_172_object = Obj(); // 0x425 PushV
	self(var_172_object); // 0x426 Func
	var_170_object = var_172_object; // 0x428 Mov
	return 2; // 0x429 Return
}


func_424(var_0_object, var_1_object, var_2_object, var_3_string, var_12_bool, var_14_float, var_15_float)
{
	var_16_bool = 0; // 0x1a9 PushV
	func_922(var_16_bool); // 0x1aa NEW_2
	var_19_bool = var_16_bool == 0; // 0x1ac Not
	if(var_19_bool == 0) goto Label_431; // 0x1ad JumpB
	return 0; // 0x1ae Return
	
Label_431:
	var_20_string = "player"; // 0x1af PushS
	FindActor(var_12_bool, var_20_string); // 0x1b0 Func
	var_2_object = 0; // 0x1b2 TMovB
	var_3_string = 0; // 0x1b3 TMovB
	var_0_object = var_14_float; // 0x1b4 TMov
	var_1_object = var_15_float; // 0x1b5 TMov
	var_21_int = 10; // 0x1b6 PushI
	var_22_float = 1.0; // 0x1b7 PushF
	SetTimer(var_21_int, var_22_float); // 0x1b8 Func
	func_503(); // 0x1bb NEW_2
	var_74_bool = var_3_string == 0; // 0x1bd Not
	if(var_74_bool == 0) goto Label_450; // 0x1be JumpB
	var_75_int = 10; // 0x1bf PushI
	KillTimer(var_75_int); // 0x1c0 Func
	
Label_450:
	return 0; // 0x1c2 Return
}


func_1194()
{
	var_84_int = 0; // 0x4ab PushI
	SetReturnValue(var_84_int); // 0x4ac ObjFunc
	return 0; // 0x4ae Return
}


func_1067(var_45_cvector, var_46_cvector)
{
	var_53_float = 0; var_54_float = 0; // 0x42b PushV
	var_55_int = var_46_cvector | var_46_cvector; // 0x42c Or
	var_54_float = sqrt(var_55_int); // 0x42d Sqrt2
	var_56_float = 0.0; // 0x42e PushF
	var_57_bool = var_54_float < var_56_float; // 0x42f LT
	if(var_57_bool == 0) goto Label_1075; // 0x430 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x431 MovV
	return 2; // 0x432 Return
	
Label_1075:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x433 Div2
	return 2; // 0x434 Return
}


func_1199(var_99_bool)
{
	var_101_int = 0; var_102_string = ""; // 0x4b0 PushV
	var_102_string = "k10q01"; // 0x4b1 MovS
	func_1085(var_101_int, var_102_string); // 0x4b2 NEW_2
	var_105_int = 3; // 0x4b4 PushI
	var_106_bool = var_101_int == var_105_int; // 0x4b5 Eq
	if(var_106_bool == 0) goto Label_1209; // 0x4b6 JumpB
	var_99_bool = 1; // 0x4b7 MovB
	return 0; // 0x4b8 Return
	
Label_1209:
	var_99_bool = 0; // 0x4b9 MovB
	return 0; // 0x4ba Return
}


func_1077(var_76_float, var_77_cvector, var_78_cvector)
{
	var_79_int = var_77_cvector | var_78_cvector; // 0x436 Or
	var_80_int = var_77_cvector | var_77_cvector; // 0x437 Or
	var_81_int = var_78_cvector | var_78_cvector; // 0x438 Or
	var_82_float = var_80_int * var_81_int; // 0x439 Mult
	var_83_float = sqrt(var_82_float); // 0x43a Sqrt
	var_76_float = var_79_int / var_79_int; // 0x43b Div2
	return 0; // 0x43c Return
}


func_1211(var_148_bool)
{
	var_150_int = 0; var_151_string = ""; // 0x4bc PushV
	var_151_string = "k10q01"; // 0x4bd MovS
	func_1085(var_150_int, var_151_string); // 0x4be NEW_2
	var_152_int = 5; // 0x4c0 PushI
	var_153_bool = var_150_int == var_152_int; // 0x4c1 Eq
	if(var_153_bool == 0) goto Label_1221; // 0x4c2 JumpB
	var_148_bool = 1; // 0x4c3 MovB
	return 0; // 0x4c4 Return
	
Label_1221:
	var_148_bool = 0; // 0x4c5 MovB
	return 0; // 0x4c6 Return
}


func_1340(var_83_int)
{
	var_84_int = 0; var_85_int = 0; // 0x53c PushV
	var_86_string = "branch"; // 0x53d PushS
	GetVariable(var_86_string, var_85_int); // 0x53e Func
	var_87_int = 0; // 0x540 PushI
	var_88_bool = var_85_int == var_87_int; // 0x541 Eq
	if(var_88_bool == 0) goto Label_1350; // 0x542 JumpB
	var_83_int = 1; // 0x543 MovI
	return 2; // 0x544 Return
	
Label_1350:
	var_89_int = 1; // 0x546 PushI
	var_90_bool = var_85_int == var_89_int; // 0x547 Eq
	if(var_90_bool == 0) goto Label_1355; // 0x548 JumpB
	var_83_int = 2; // 0x549 MovI
	return 2; // 0x54a Return
	
Label_1355:
	var_83_int = 3; // 0x54b MovI
	return 2; // 0x54c Return
}


func_1085(var_101_int, var_102_string)
{
	var_103_int = 0; var_104_int = 0; // 0x43d PushV
	GetVariable(var_102_string, var_104_int); // 0x43e Func
	var_101_int = var_104_int; // 0x440 Mov
	return 2; // 0x441 Return
}


func_1090(var_76_bool, var_77_string, var_78_string)
{
	var_79_object = Obj(); var_80_object = Obj(); // 0x442 PushV
	FindActor(var_80_object, var_77_string); // 0x443 Func
	var_81_bool = var_80_object == 0; // 0x445 NullEq
	if(var_81_bool == 0) goto Label_1097; // 0x446 JumpB
	var_76_bool = 0; // 0x447 MovB
	return 2; // 0x448 Return
	
Label_1097:
	Trigger(var_80_object, var_78_string); // 0x449 Func
	var_76_bool = 1; // 0x44b MovB
	return 2; // 0x44c Return
}


func_451(var_0_object, var_1_object, var_4_bool, var_16_bool)
{
	var_17_float = 0; var_18_float = 0; // 0x1c3 PushV
	var_19_bool = var_4_bool == 0; // 0x1c4 NullEq
	if(var_19_bool == 0) goto Label_456; // 0x1c5 JumpB
	var_16_bool = 0; // 0x1c6 MovB
	return 2; // 0x1c7 Return
	
Label_456:
	var_20_float = 0; var_21_object = Obj(); // 0x1c8 PushV
	var_21_object = var_4_bool; // 0x1c9 MovT
	func_788(var_21_object); // 0x1ca NEW_2
	var_18_float = sqrt(var_20_float); // 0x1cc Sqrt2
	var_28_object = var_2_object; // 0x1cd PushT
	if(var_28_object == 0) goto Label_464; // 0x1ce JumpB
	var_18_float = var_18_float - var_1_object; // 0x1cf Sub2
	
Label_464:
	var_16_bool = var_18_float < var_0_object; // 0x1d0 LT2
	return 2; // 0x1d1 Return
}


func_582(var_64_bool)
{
	var_64_bool = 1; // 0x246 MovB
	return 0; // 0x247 Return
}


func_1223()
{
	var_23_object = Obj(); var_24_object = Obj(); // 0x4c7 PushV
	var_25_int = 451; // 0x4c8 PushI
	var_26_int = 1; // 0x4c9 PushI
	var_27_int = 527009; // 0x4ca PushI
	CreateDiaryEntry(var_24_object, var_25_int, var_26_int, var_27_int); // 0x4cb Func
	var_28_bool = 0; var_29_object = Obj(); var_30_int = 0; // 0x4cd PushV
	var_29_object = var_24_object; // 0x4ce Mov
	var_30_int = 447; // 0x4cf MovI
	func_1262(var_28_bool, var_29_object, var_30_int); // 0x4d0 NEW_2
	return 2; // 0x4d2 Return
}


func_584()
{
	StopAnimation(); // 0x248 Func
	StopGroup0(); // 0x24a Func
	return 0; // 0x24c Return
}


func_840(var_17_object, var_18_int, var_19_float)
{
	var_20_cvector = CVector(0,0,0); var_21_object = Obj(); var_22_int = 0; var_23_bool = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_int = 0; var_27_int = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_object = Obj(); var_31_int = 0; var_32_bool = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_int = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); // 0x348 PushV
	var_38_bool = 0; // 0x349 PushV
	var_38_bool = 0; // 0x34a MovB
	var_39_bool = 0; // 0x34b PushV
	var_39_bool = 0; // 0x34c MovB
	var_40_object = var_17_object; // 0x34d Push
	if(var_40_object == 0) goto Label_851; // 0x34e JumpB
	var_41_int = 4; // 0x34f PushI
	var_42_bool = var_18_int != var_41_int; // 0x350 Neq
	if(var_42_bool == 0) goto Label_851; // 0x351 JumpB
	var_39_bool = 1; // 0x352 MovB
	
Label_851:
	if(var_39_bool == 0) goto Label_856; // 0x353 JumpB
	var_43_int = 5; // 0x354 PushI
	var_44_bool = var_18_int != var_43_int; // 0x355 Neq
	if(var_44_bool == 0) goto Label_856; // 0x356 JumpB
	var_38_bool = 1; // 0x357 MovB
	
Label_856:
	if(var_38_bool == 0) goto Label_903; // 0x358 JumpB
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x359 PushV
	var_47_cvector = CVector(0,0,0); var_48_object = Obj(); // 0x35a PushV
	var_48_object = var_17_object; // 0x35b Mov
	func_781(var_48_object); // 0x35c NEW_2
	var_46_cvector = var_47_cvector; // 0x35d Mov
	func_1067(var_45_cvector, var_46_cvector); // 0x35f NEW_2
	var_29_cvector = var_45_cvector; // 0x360 Mov
	CreateVectorVector(var_30_object); // 0x362 Func
	var_31_int = 1; // 0x364 MovI
	
Label_869:
	var_58_string = "hit"; // 0x365 PushS
	var_59_int = var_58_string + var_31_int; // 0x366 Add
	GetGeometryLocator(var_59_int, var_32_bool, var_33_cvector, var_34_cvector); // 0x367 Func
	var_60_bool = var_32_bool == 0; // 0x369 Not
	if(var_60_bool == 0) goto Label_876; // 0x36a JumpB
	goto Label_885; // 0x36b Jump
	
Label_885:
	size(var_35_int); // 0x375 ObjFunc
	var_61_int = var_35_int; // 0x377 Push
	if(var_61_int == 0) goto Label_902; // 0x378 JumpB
	irand(var_36_int, var_35_int); // 0x379 Func
	get(var_37_cvector, var_36_int); // 0x37b ObjFunc
	var_62_object = Obj(); var_63_int = 0; var_64_float = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); // 0x37d PushV
	var_62_object = var_17_object; // 0x37e Mov
	var_63_int = var_18_int; // 0x37f Mov
	var_64_float = var_19_float; // 0x380 Mov
	var_65_cvector = var_37_cvector; // 0x381 Mov
	var_66_cvector = -var_29_cvector; // 0x382 Neg2
	func_908(var_64_float, var_65_cvector, var_66_cvector); // 0x383 NEW_2
	return 18; // 0x385 Return
	
Label_902:
	var_30_object = 0; // 0x386 SetNull
	
Label_903:
	var_107_object = Obj(); // 0x387 PushV
	var_107_object = var_17_object; // 0x388 Mov
	func_796(var_107_object); // 0x389 NEW_2
	return 18; // 0x38b Return
	
Label_876:
	var_108_int = var_34_cvector | var_29_cvector; // 0x36c Or
	var_109_float = 0.70711; // 0x36d PushF
	var_110_bool = var_108_int >= var_109_float; // 0x36e GE
	if(var_110_bool == 0) goto Label_882; // 0x36f JumpB
	add(var_33_cvector); // 0x370 ObjFunc
	
Label_882:
	var_111_int = 1; // 0x372 PushI
	var_31_int = var_31_int + var_111_int; // 0x373 Add2
	goto Label_869; // 0x374 Jump
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_92_object, var_93_object)
{
	var_0_object = var_93_object; // 0x4b TMov
	var_1_object = var_92_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_98_int = 1; // 0x4e PushI
	if(var_98_int == 0) goto Label_127; // 0x4f JumpB
	var_99_bool = 0; var_100_object = Obj(); // 0x50 PushV
	var_100_object = var_1_object; // 0x51 MovT
	func_1199(var_100_object); // 0x52 NEW_2
	if(var_99_bool == 0) goto Label_100; // 0x54 JumpB
	var_107_string = ""; // 0x55 PushV
	var_107_string = "Neutral"; // 0x56 MovS
	func_157(var_93_object, var_107_string); // 0x57 NEW_2
	var_124_int = 526972; // 0x59 PushI
	SetMessage(var_124_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_125_int = 528069; // 0x5e PushI
	var_126_int = 29412; // 0x5f PushI
	var_127_int = 29411; // 0x60 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x61 TObjFunc
	goto Label_127; // 0x63 Jump
	
Label_127:
	var_128_bool = 0; // 0x7f PushV
	func_1139(var_128_bool); // 0x80 NEW_2
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
	func_1012(var_130_string); // 0x8a NEW_2
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
	
Label_100:
	var_146_string = ""; // 0x64 PushV
	var_146_string = "Neutral"; // 0x65 MovS
	func_157(var_93_object, var_146_string); // 0x66 NEW_2
	var_147_int = 526976; // 0x68 PushI
	SetMessage(var_147_int); // 0x69 TObjFunc
	ClearReplies(); // 0x6b TObjFunc
	var_148_bool = 0; var_149_object = Obj(); // 0x6d PushV
	var_149_object = var_1_object; // 0x6e MovT
	func_1211(var_149_object); // 0x6f NEW_2
	if(var_148_bool == 0) goto Label_119; // 0x71 JumpB
	var_154_int = 526981; // 0x72 PushI
	var_155_int = 28274; // 0x73 PushI
	var_156_int = 28273; // 0x74 PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x75 TObjFunc
	
Label_119:
	var_157_int = 526977; // 0x77 PushI
	var_158_int = -1; // 0x78 PushI
	var_159_int = 28269; // 0x79 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x7a TObjFunc
	goto Label_127; // 0x7c Jump
}


func_589(var_27_cvector, var_28_float)
{
	var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_float = 0; // 0x24d PushV
	GetPosition(var_35_cvector); // 0x24e Func
	GetPosition(var_36_cvector); // 0x250 TObjFunc
	GetDirection(var_37_cvector); // 0x252 Func
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); // 0x254 PushV
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0x255 PushV
	var_44_cvector = var_35_cvector - var_36_cvector; // 0x256 Sub2
	func_1067(var_43_cvector, var_44_cvector); // 0x257 NEW_2
	var_50_float = 0.75; // 0x259 PushF
	var_51_float = var_37_cvector * var_50_float; // 0x25a Mult
	var_42_cvector = var_43_cvector + var_51_float; // 0x25b Add2
	func_1067(var_41_cvector, var_42_cvector); // 0x25c NEW_2
	var_38_cvector = var_41_cvector; // 0x25d Mov
	var_52_int = 32; // 0x25f PushI
	var_53_float = 7000.0; // 0x260 PushF
	FindLongestDir(var_39_cvector, var_40_float, var_38_cvector, var_28_float, var_52_int, var_53_float); // 0x261 Func
	var_54_int = 100; // 0x263 PushI
	var_40_float = var_40_float - var_54_int; // 0x264 Sub2
	var_55_int = 0; // 0x265 PushI
	var_56_bool = var_40_float < var_55_int; // 0x266 LT
	if(var_56_bool == 0) goto Label_617; // 0x267 JumpB
	var_40_float = 0; // 0x268 MovI
	
Label_617:
	var_27_cvector = var_39_cvector * var_40_float; // 0x269 Mult2
	return 12; // 0x26a Return
}


func_1102(var_65_float)
{
	var_66_float = 0; var_67_float = 0; // 0x44e PushV
	GetGameTime(var_67_float); // 0x44f Func
	var_65_float = var_67_float; // 0x451 Mov
	return 2; // 0x452 Return
}


func_1107(var_45_string, var_46_int)
{
	var_47_string = ""; var_48_string = ""; // 0x453 PushV
	var_48_string = "idle"; // 0x454 MovS
	var_49_int = var_46_int; // 0x455 Push
	if(var_49_int == 0) goto Label_1112; // 0x456 JumpB
	var_48_string = var_48_string + var_46_int; // 0x457 Add2
	
Label_1112:
	var_45_string = var_48_string; // 0x458 Mov
	return 2; // 0x459 Return
}


func_1236()
{
	var_68_object = Obj(); var_69_object = Obj(); // 0x4d4 PushV
	var_70_int = 453; // 0x4d5 PushI
	var_71_int = 1; // 0x4d6 PushI
	var_72_int = 527011; // 0x4d7 PushI
	CreateDiaryEntry(var_69_object, var_70_int, var_71_int, var_72_int); // 0x4d8 Func
	var_73_bool = 0; var_74_object = Obj(); var_75_int = 0; // 0x4da PushV
	var_74_object = var_69_object; // 0x4db Mov
	var_75_int = 447; // 0x4dc MovI
	func_1262(var_73_bool, var_74_object, var_75_int); // 0x4dd NEW_2
	return 2; // 0x4df Return
}


func_1114(var_39_int)
{
	var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_bool = 0; // 0x45a PushV
	var_42_int = 0; // 0x45b MovI
	
Label_1116:
	var_44_string = "all"; // 0x45c PushS
	var_45_string = ""; var_46_int = 0; // 0x45d PushV
	var_46_int = var_42_int; // 0x45e Mov
	func_1107(var_45_string, var_46_int); // 0x45f NEW_2
	HasAnimation(var_43_bool, var_44_string, var_45_string); // 0x461 Func
	var_50_bool = var_43_bool == 0; // 0x463 Not
	if(var_50_bool == 0) goto Label_1126; // 0x464 JumpB
	goto Label_1129; // 0x465 Jump
	
Label_1129:
	var_39_int = var_42_int; // 0x469 Mov
	return 4; // 0x46a Return
	
Label_1126:
	var_51_int = 1; // 0x466 PushI
	var_42_int = var_42_int + var_51_int; // 0x467 Add2
	goto Label_1116; // 0x468 Jump
}


func_1249(var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj(); // 0x4e1 PushV
	GetDiaryRoot(var_39_object); // 0x4e2 Func
	var_40_bool = var_39_object == 0; // 0x4e4 Not
	if(var_40_bool == 0) goto Label_1259; // 0x4e5 JumpB
	var_41_string = "Can't retrieve diary root"; // 0x4e6 PushS
	Trace(var_41_string); // 0x4e7 Func
	var_37_object = 0; // 0x4e9 MovB
	return 2; // 0x4ea Return
	
Label_1259:
	var_37_object = var_39_object; // 0x4eb Mov
	return 2; // 0x4ec Return
}


func_995()
{
	var_162_bool = 0; var_163_bool = 0; // 0x3e3 PushV
	CameraSwitchToNormal(); // 0x3e4 Func
	var_164_bool = 0; // 0x3e6 PushV
	func_1139(var_164_bool); // 0x3e7 NEW_2
	if(var_164_bool == 0) goto Label_1003; // 0x3e9 JumpB
	goto Label_1011; // 0x3ea Jump
	
Label_1011:
	return 2; // 0x3f3 Return
	
Label_1003:
	var_165_string = "head"; // 0x3eb PushS
	HasAnimationTrack(var_163_bool, var_165_string); // 0x3ec Func
	var_166_bool = var_163_bool; // 0x3ee Push
	if(var_166_bool == 0) goto Label_1011; // 0x3ef JumpB
	var_167_string = "head"; // 0x3f0 PushS
	UnlookAsync(var_167_string); // 0x3f1 Func
}


func_744(var_2_object)
{
	Stop(); // 0x2e8 Func
	var_14_int = 120; // 0x2ea PushI
	KillTimer(var_14_int); // 0x2eb Func
	var_2_object = 1; // 0x2ed TMovB
	return 0; // 0x2ee Return
}


func_489(var_2_object, var_3_string)
{
	func_584(); // 0x1ea NEW_2
	var_18_int = 10; // 0x1ec PushI
	KillTimer(var_18_int); // 0x1ed Func
	var_19_object = var_2_object; // 0x1ef PushT
	if(var_19_object == 0) goto Label_501; // 0x1f0 JumpB
	var_20_string = "head"; // 0x1f1 PushS
	UnlookAsync(var_20_string); // 0x1f2 Func
	var_2_object = 0; // 0x1f4 TMovB
	
Label_501:
	var_3_string = 1; // 0x1f5 TMovB
	return 0; // 0x1f6 Return
}


func_1131(var_80_int)
{
	var_80_int = 515556; // 0x46b MovI
	return 0; // 0x46c Return
}


func_619(var_0_object, var_1_object, var_2_object, var_173_object)
{
	var_177_cvector = CVector(0,0,0); var_178_float = 0; var_179_bool = 0; var_180_cvector = CVector(0,0,0); var_181_float = 0; var_182_cvector = CVector(0,0,0); var_183_float = 0; var_184_bool = 0; var_185_cvector = CVector(0,0,0); var_186_float = 0; // 0x26b PushV
	var_0_object = var_173_object; // 0x26c TMov
	var_187_cvector = CVector(0,0,0); var_188_float = 0; // 0x26d PushV
	var_188_float = 1.74533; // 0x26e MovF
	func_589(var_187_cvector, var_188_float); // 0x26f NEW_2
	var_182_cvector = var_187_cvector; // 0x270 Mov
	var_183_float = var_182_cvector | var_182_cvector; // 0x272 Or2
	var_212_float = 2500.0; // 0x273 PushF
	var_213_bool = var_183_float < var_212_float; // 0x274 LT
	if(var_213_bool == 0) goto Label_648; // 0x275 JumpB
	var_214_cvector = CVector(0,0,0); var_215_float = 0; // 0x276 PushV
	var_215_float = 2.61799; // 0x277 MovF
	func_589(var_214_cvector, var_215_float); // 0x278 NEW_2
	var_182_cvector = var_214_cvector; // 0x279 Mov
	var_183_float = var_182_cvector | var_182_cvector; // 0x27b Or2
	var_216_float = 2500.0; // 0x27c PushF
	var_217_bool = var_183_float < var_216_float; // 0x27d LT
	if(var_217_bool == 0) goto Label_648; // 0x27e JumpB
	var_218_string = "Can't retreat, distance: "; // 0x27f PushS
	var_219_float = sqrt(var_183_float); // 0x280 Sqrt
	var_220_int = var_218_string + var_219_float; // 0x281 Add
	Trace(var_220_int); // 0x282 Func
	var_221_float = 0.5; // 0x284 PushF
	Sleep(var_221_float); // 0x285 Func
	return 10; // 0x287 Return
	
Label_648:
	var_222_float = GetByIndex(var_182_cvector, 0); // 0x288 PushE
	var_223_float = GetByIndex(var_182_cvector, 2); // 0x289 PushE
	Rotate(var_222_float, var_223_float); // 0x28a Func
	var_224_cvector = CVector(0,0,0); // 0x28c PushV
	func_776(var_224_cvector); // 0x28d NEW_2
	var_1_object = var_224_cvector + var_182_cvector; // 0x28f Add2
	var_227_int = 120; // 0x290 PushI
	var_228_float = 0.5; // 0x291 PushF
	SetTimer(var_227_int, var_228_float); // 0x292 Func
	var_2_object = 0; // 0x294 TMovB
	
Label_661:
	var_229_int = 1; // 0x295 PushI
	MovePoint(var_229_int, var_229_int, var_184_bool); // 0x296 Func
	var_230_bool = var_184_bool; // 0x298 Push
	if(var_230_bool == 0) goto Label_689; // 0x299 JumpB
	var_231_bool = var_0_object == 0; // 0x29a NullEq
	if(var_231_bool == 0) goto Label_670; // 0x29b JumpB
	goto Label_691; // 0x29c Jump
	
Label_691:
	return 10; // 0x2b3 Return
	
Label_670:
	var_232_cvector = CVector(0,0,0); var_233_float = 0; // 0x29e PushV
	var_233_float = 2.61799; // 0x29f MovF
	func_589(var_232_cvector, var_233_float); // 0x2a0 NEW_2
	var_185_cvector = var_232_cvector; // 0x2a1 Mov
	var_186_float = var_185_cvector | var_185_cvector; // 0x2a3 Or2
	var_234_float = 2500.0; // 0x2a4 PushF
	var_235_bool = var_186_float >= var_234_float; // 0x2a5 GE
	if(var_235_bool == 0) goto Label_688; // 0x2a6 JumpB
	var_236_cvector = CVector(0,0,0); // 0x2a7 PushV
	func_776(var_236_cvector); // 0x2a8 NEW_2
	var_1_object = var_236_cvector + var_185_cvector; // 0x2aa Add2
	var_237_int = 120; // 0x2ab PushI
	var_238_float = 0.5; // 0x2ac PushF
	SetTimer(var_237_int, var_238_float); // 0x2ad Func
	goto Label_689; // 0x2af Jump
	
Label_689:
	var_239_bool = var_2_object == 0; // 0x2b1 Not
	if(var_239_bool == 0) goto Label_661; // 0x2b2 JumpB
	
Label_688:
	goto Label_691; // 0x2b0 Jump
}


func_1133(var_79_int)
{
	var_79_int = 503341; // 0x46d MovI
	return 0; // 0x46e Return
}


func_1262(var_28_bool, var_29_object, var_30_int)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0; var_34_object = Obj(); var_35_object = Obj(); var_36_int = 0; // 0x4ee PushV
	var_37_object = Obj(); // 0x4ef PushV
	func_1249(var_37_object); // 0x4f0 NEW_2
	var_34_object = var_37_object; // 0x4f1 Mov
	Find(var_30_int, var_35_object); // 0x4f3 ObjFunc
	var_42_bool = var_35_object == 0; // 0x4f5 Not
	if(var_42_bool == 0) goto Label_1277; // 0x4f6 JumpB
	var_43_string = "Can't find diary parent with id: "; // 0x4f7 PushS
	var_44_int = var_43_string + var_30_int; // 0x4f8 Add
	Trace(var_44_int); // 0x4f9 Func
	var_28_bool = 0; // 0x4fb MovB
	return 6; // 0x4fc Return
	
Label_1277:
	AddChild(var_29_object); // 0x4fd ObjFunc
	var_45_int = 7; // 0x4ff PushI
	SendWorldWndMessage(var_45_int); // 0x500 Func
	GetCategory(var_36_int); // 0x502 ObjFunc
	SetDiarySection(var_36_int); // 0x504 Func
	var_28_bool = 0; // 0x506 MovB
	return 6; // 0x507 Return
}


func_1135(var_81_string)
{
	var_81_string = "ui/NPC_Citizen3.png"; // 0x46f MovS
	return 0; // 0x470 Return
}


func_1137(var_82_string)
{
	var_82_string = "ui/NPC_Citizen3_b.png"; // 0x471 MovS
	return 0; // 0x472 Return
}


func_1139(var_74_bool)
{
	var_74_bool = 0; // 0x473 MovB
	return 0; // 0x474 Return
}


func_1012(var_130_string)
{
	var_131_bool = 0; var_132_float = 0; var_133_float = 0; var_134_bool = 0; var_135_float = 0; var_136_float = 0; // 0x3f4 PushV
	lshHasAnimation(var_134_bool, var_130_string); // 0x3f5 Func
	var_137_bool = var_134_bool; // 0x3f7 Push
	if(var_137_bool == 0) goto Label_1023; // 0x3f8 JumpB
	lshGetAnimTimes(var_130_string, var_135_float, var_136_float); // 0x3f9 Func
	var_138_bool = 0; // 0x3fb PushB
	lshPlayAnimation(var_135_float, var_136_float, var_138_bool); // 0x3fc Func
	goto Label_1027; // 0x3fe Jump
	
Label_1027:
	return 6; // 0x403 Return
	
Label_1023:
	var_139_string = "Can't find lsh animation : "; // 0x3ff PushS
	var_140_int = var_139_string + var_130_string; // 0x400 Add
	Trace(var_140_int); // 0x401 Func
}


func_1141()
{
	var_21_string = "k10q01"; // 0x476 PushS
	var_22_int = 4; // 0x477 PushI
	SetVariable(var_21_string, var_22_int); // 0x478 Func
	func_1223(); // 0x47b NEW_2
	return 0; // 0x47d Return
}


func_503()
{
	var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_bool = 0; var_28_float = 0; var_29_bool = 0; var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; // 0x1f7 PushV
	WaitForAnimEnd(); // 0x1f8 Func
	var_37_bool = 0; // 0x1fa PushV
	func_922(var_37_bool); // 0x1fb NEW_2
	var_38_bool = var_37_bool == 0; // 0x1fd Not
	if(var_38_bool == 0) goto Label_512; // 0x1fe JumpB
	return 14; // 0x1ff Return
	
Label_512:
	var_39_int = 0; // 0x200 PushV
	func_1114(var_39_int); // 0x201 NEW_2
	var_30_int = var_39_int; // 0x202 Mov
	var_31_int = 0; // 0x204 MovI
	
Label_517:
	var_52_bool = 0; // 0x205 PushV
	var_52_bool = 0; // 0x206 MovB
	var_53_int = 5; // 0x207 PushI
	var_54_bool = var_31_int < var_53_int; // 0x208 LT
	if(var_54_bool == 0) goto Label_527; // 0x209 JumpB
	var_55_bool = 0; // 0x20a PushV
	func_922(var_55_bool); // 0x20b NEW_2
	if(var_55_bool == 0) goto Label_527; // 0x20d JumpB
	var_52_bool = 1; // 0x20e MovB
	
Label_527:
	if(var_52_bool == 0) goto Label_579; // 0x20f JumpB
	var_56_int = 3; // 0x210 PushI
	irand(var_32_int, var_56_int); // 0x211 Func
	var_57_int = 0; // 0x213 PushI
	var_58_bool = var_32_int == var_57_int; // 0x214 Eq
	if(var_58_bool == 0) goto Label_551; // 0x215 JumpB
	var_59_int = var_30_int; // 0x216 Push
	if(var_59_int == 0) goto Label_550; // 0x217 JumpB
	irand(var_33_int, var_30_int); // 0x218 Func
	var_60_string = "all"; // 0x21a PushS
	var_61_string = ""; var_62_int = 0; // 0x21b PushV
	var_62_int = var_33_int; // 0x21c Mov
	func_1107(var_61_string, var_62_int); // 0x21d NEW_2
	PlayAnimation(var_60_string, var_61_string); // 0x21f Func
	WaitForAnimEnd(var_34_bool); // 0x221 Func
	var_63_bool = var_34_bool == 0; // 0x223 Not
	if(var_63_bool == 0) goto Label_550; // 0x224 JumpB
	goto Label_579; // 0x225 Jump
	
Label_579:
	ResetAAS(); // 0x243 Func
	return 14; // 0x245 Return
	
Label_550:
	goto Label_568; // 0x226 Jump
	
Label_568:
	var_64_bool = 0; // 0x238 PushV
	func_582(var_64_bool); // 0x239 NEW_2
	var_65_bool = var_64_bool == 0; // 0x23b Not
	if(var_65_bool == 0) goto Label_574; // 0x23c JumpB
	goto Label_579; // 0x23d Jump
	
Label_574:
	ResetAAS(); // 0x23e Func
	var_66_int = 1; // 0x240 PushI
	var_31_int = var_31_int + var_66_int; // 0x241 Add2
	goto Label_517; // 0x242 Jump
	
Label_551:
	var_67_int = 1; // 0x227 PushI
	var_68_bool = var_32_int == var_67_int; // 0x228 Eq
	if(var_68_bool == 0) goto Label_565; // 0x229 JumpB
	var_69_int = 4; // 0x22a PushI
	rand(var_35_float, var_69_int); // 0x22b Func
	var_70_int = 1; // 0x22d PushI
	var_71_int = var_35_float + var_70_int; // 0x22e Add
	Sleep(var_71_int, var_36_bool); // 0x22f Func
	var_72_bool = var_36_bool == 0; // 0x231 Not
	if(var_72_bool == 0) goto Label_564; // 0x232 JumpB
	goto Label_579; // 0x233 Jump
	
Label_564:
	goto Label_568; // 0x234 Jump
	
Label_565:
	var_73_int = var_31_int; // 0x235 Push
	if(var_73_int == 0) goto Label_568; // 0x236 JumpB
	goto Label_579; // 0x237 Jump
}


func_760(var_0_object, var_65_bool)
{
	var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); // 0x2f8 PushV
	GetDirection(var_68_cvector); // 0x2f9 Func
	var_70_cvector = CVector(0,0,0); var_71_object = Obj(); // 0x2fb PushV
	var_71_object = var_0_object; // 0x2fc MovT
	func_781(var_71_object); // 0x2fd NEW_2
	var_69_cvector = var_70_cvector; // 0x2fe Mov
	var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x300 PushV
	var_77_cvector = var_68_cvector; // 0x301 Mov
	var_78_cvector = var_69_cvector; // 0x302 Mov
	func_1077(var_76_float, var_77_cvector, var_78_cvector); // 0x303 NEW_2
	var_84_float = -0.34202; // 0x305 PushF
	var_65_bool = var_76_float >= var_84_float; // 0x306 GE2
	return 4; // 0x307 Return
}


func_1150()
{
	var_50_object = Obj(); var_51_object = Obj(); // 0x47e PushV
	var_52_string = "k10q01"; // 0x47f PushS
	var_53_int = 6; // 0x480 PushI
	SetVariable(var_52_string, var_53_int); // 0x481 Func
	var_54_object = Obj(); // 0x483 PushV
	func_1290(var_54_object); // 0x484 NEW_2
	var_51_object = var_54_object; // 0x485 Mov
	var_61_string = "k10q01WastedGotoBurah"; // 0x487 PushS
	var_62_string = "pt_gmap_factory"; // 0x488 PushS
	var_63_int = 1; // 0x489 PushI
	var_64_int = 530196; // 0x48a PushI
	var_65_float = 0; // 0x48b PushV
	func_1102(var_65_float); // 0x48c NEW_2
	AddMark(var_61_string, var_62_string, var_63_int, var_64_int, var_65_float); // 0x48e ObjFunc
	func_1236(); // 0x491 NEW_2
	var_76_bool = 0; var_77_string = ""; var_78_string = ""; // 0x493 PushV
	var_77_string = "quest_k10_01"; // 0x494 MovS
	var_78_string = "init_factory"; // 0x495 MovS
	func_1090(var_76_bool, var_77_string, var_78_string); // 0x496 NEW_2
	return 2; // 0x498 Return
}


