task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xb4 PushI
	if(var_14_int == 0) goto Label_384; // 0xb5 JumpB
	func_778(); // 0xb7 NEW_2
	var_16_int = 28267; // 0xb9 PushI
	var_17_bool = var_13_bool == var_16_int; // 0xba Eq
	if(var_17_bool == 0) goto Label_193; // 0xbb JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xbc PushV
	var_18_object = var_1_object; // 0xbd MovT
	var_19_object = var_0_object; // 0xbe MovT
	func_847(); // 0xbf NEW_2
	
Label_193:
	var_45_int = 28275; // 0xc1 PushI
	var_46_bool = var_13_bool == var_45_int; // 0xc2 Eq
	if(var_46_bool == 0) goto Label_211; // 0xc3 JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0xc4 PushV
	var_47_object = var_1_object; // 0xc5 MovT
	var_48_object = var_0_object; // 0xc6 MovT
	func_856(); // 0xc7 NEW_2
	var_81_object = Obj(); var_82_object = Obj(); // 0xc9 PushV
	var_81_object = var_1_object; // 0xca MovT
	var_82_object = var_0_object; // 0xcb MovT
	func_900(); // 0xcc NEW_2
	var_84_object = Obj(); var_85_object = Obj(); // 0xce PushV
	var_84_object = var_1_object; // 0xcf MovT
	var_85_object = var_0_object; // 0xd0 MovT
	func_884(); // 0xd1 NEW_2
	
Label_211:
	var_110_int = 29417; // 0xd3 PushI
	var_111_bool = var_13_bool == var_110_int; // 0xd4 Eq
	if(var_111_bool == 0) goto Label_229; // 0xd5 JumpB
	var_112_object = Obj(); var_113_object = Obj(); // 0xd6 PushV
	var_112_object = var_1_object; // 0xd7 MovT
	var_113_object = var_0_object; // 0xd8 MovT
	func_856(); // 0xd9 NEW_2
	var_114_object = Obj(); var_115_object = Obj(); // 0xdb PushV
	var_114_object = var_1_object; // 0xdc MovT
	var_115_object = var_0_object; // 0xdd MovT
	func_900(); // 0xde NEW_2
	var_116_object = Obj(); var_117_object = Obj(); // 0xe0 PushV
	var_116_object = var_1_object; // 0xe1 MovT
	var_117_object = var_0_object; // 0xe2 MovT
	func_884(); // 0xe3 NEW_2
	
Label_229:
	var_118_int = 28264; // 0xe5 PushI
	var_119_bool = var_12_bool == var_118_int; // 0xe6 Eq
	if(var_119_bool == 0) goto Label_277; // 0xe7 JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0xe8 PushV
	var_121_object = var_1_object; // 0xe9 MovT
	func_905(var_121_object); // 0xea NEW_2
	if(var_120_bool == 0) goto Label_252; // 0xec JumpB
	var_128_string = ""; // 0xed PushV
	var_128_string = "Neutral"; // 0xee MovS
	func_157(var_13_bool, var_128_string); // 0xef NEW_2
	var_145_int = 526972; // 0xf1 PushI
	SetMessage(var_145_int); // 0xf2 TObjFunc
	ClearReplies(); // 0xf4 TObjFunc
	var_146_int = 528069; // 0xf6 PushI
	var_147_int = 29412; // 0xf7 PushI
	var_148_int = 29411; // 0xf8 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0xf9 TObjFunc
	return 0; // 0xfb Return
	
Label_252:
	var_149_string = ""; // 0xfc PushV
	var_149_string = "Neutral"; // 0xfd MovS
	func_157(var_13_bool, var_149_string); // 0xfe NEW_2
	var_150_int = 526976; // 0x100 PushI
	SetMessage(var_150_int); // 0x101 TObjFunc
	ClearReplies(); // 0x103 TObjFunc
	var_151_bool = 0; var_152_object = Obj(); // 0x105 PushV
	var_152_object = var_1_object; // 0x106 MovT
	func_917(var_152_object); // 0x107 NEW_2
	if(var_151_bool == 0) goto Label_271; // 0x109 JumpB
	var_157_int = 526981; // 0x10a PushI
	var_158_int = 28274; // 0x10b PushI
	var_159_int = 28273; // 0x10c PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x10d TObjFunc
	
Label_271:
	var_160_int = 526977; // 0x10f PushI
	var_161_int = -1; // 0x110 PushI
	var_162_int = 28269; // 0x111 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x112 TObjFunc
	return 0; // 0x114 Return
	
Label_277:
	var_163_int = 28274; // 0x115 PushI
	var_164_bool = var_12_bool == var_163_int; // 0x116 Eq
	if(var_164_bool == 0) goto Label_300; // 0x117 JumpB
	var_165_string = ""; // 0x118 PushV
	var_165_string = "Neutral"; // 0x119 MovS
	func_157(var_13_bool, var_165_string); // 0x11a NEW_2
	var_166_int = 526982; // 0x11c PushI
	SetMessage(var_166_int); // 0x11d TObjFunc
	ClearReplies(); // 0x11f TObjFunc
	var_167_int = 528073; // 0x121 PushI
	var_168_int = 29416; // 0x122 PushI
	var_169_int = 29415; // 0x123 PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x124 TObjFunc
	var_170_int = 528075; // 0x126 PushI
	var_171_int = -1; // 0x127 PushI
	var_172_int = 29417; // 0x128 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x129 TObjFunc
	return 0; // 0x12b Return
	
Label_300:
	var_173_int = 29416; // 0x12c PushI
	var_174_bool = var_12_bool == var_173_int; // 0x12d Eq
	if(var_174_bool == 0) goto Label_318; // 0x12e JumpB
	var_175_string = ""; // 0x12f PushV
	var_175_string = "Neutral"; // 0x130 MovS
	func_157(var_13_bool, var_175_string); // 0x131 NEW_2
	var_176_int = 528074; // 0x133 PushI
	SetMessage(var_176_int); // 0x134 TObjFunc
	ClearReplies(); // 0x136 TObjFunc
	var_177_int = 526983; // 0x138 PushI
	var_178_int = -1; // 0x139 PushI
	var_179_int = 28275; // 0x13a PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x13b TObjFunc
	return 0; // 0x13d Return
	
Label_318:
	var_180_int = 29412; // 0x13e PushI
	var_181_bool = var_12_bool == var_180_int; // 0x13f Eq
	if(var_181_bool == 0) goto Label_336; // 0x140 JumpB
	var_182_string = ""; // 0x141 PushV
	var_182_string = "Neutral"; // 0x142 MovS
	func_157(var_13_bool, var_182_string); // 0x143 NEW_2
	var_183_int = 528070; // 0x145 PushI
	SetMessage(var_183_int); // 0x146 TObjFunc
	ClearReplies(); // 0x148 TObjFunc
	var_184_int = 528071; // 0x14a PushI
	var_185_int = 29414; // 0x14b PushI
	var_186_int = 29413; // 0x14c PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x14d TObjFunc
	return 0; // 0x14f Return
	
Label_336:
	var_187_int = 29414; // 0x150 PushI
	var_188_bool = var_12_bool == var_187_int; // 0x151 Eq
	if(var_188_bool == 0) goto Label_354; // 0x152 JumpB
	var_189_string = ""; // 0x153 PushV
	var_189_string = "Neutral"; // 0x154 MovS
	func_157(var_13_bool, var_189_string); // 0x155 NEW_2
	var_190_int = 528072; // 0x157 PushI
	SetMessage(var_190_int); // 0x158 TObjFunc
	ClearReplies(); // 0x15a TObjFunc
	var_191_int = 526973; // 0x15c PushI
	var_192_int = 28266; // 0x15d PushI
	var_193_int = 28265; // 0x15e PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x15f TObjFunc
	return 0; // 0x161 Return
	
Label_354:
	var_194_int = 28266; // 0x162 PushI
	var_195_bool = var_12_bool == var_194_int; // 0x163 Eq
	if(var_195_bool == 0) goto Label_372; // 0x164 JumpB
	var_196_string = ""; // 0x165 PushV
	var_196_string = "Neutral"; // 0x166 MovS
	func_157(var_13_bool, var_196_string); // 0x167 NEW_2
	var_197_int = 526974; // 0x169 PushI
	SetMessage(var_197_int); // 0x16a TObjFunc
	ClearReplies(); // 0x16c TObjFunc
	var_198_int = 526975; // 0x16e PushI
	var_199_int = -1; // 0x16f PushI
	var_200_int = 28267; // 0x170 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x171 TObjFunc
	return 0; // 0x173 Return
	
Label_372:
	var_3_string = 1; // 0x174 TMovB
	var_201_bool = 0; // 0x175 PushV
	func_1071(var_201_bool); // 0x176 NEW_2
	if(var_201_bool == 0) goto Label_380; // 0x178 JumpB
	lshStopAnimation(); // 0x179 Func
	goto Label_382; // 0x17b Jump
	
Label_382:
	return 0; // 0x17e Return
	
Label_380:
	StopAnimation(); // 0x17c Func
	
Label_384:
	return 0; // 0x180 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_536(var_11_bool, var_12_object); // 0x189 NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0x18b PushV
	var_17_object = var_12_object; // 0x18c Mov
	TaskCall(0); // 0x18d TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0x18e NEW_2
	TaskReturn(); // 0x18f TaskReturn
	return 0; // 0x191 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "cleanup"; // 0x1b9 PushS
	var_14_bool = var_12_string == var_13_string; // 0x1ba Eq
	if(var_14_bool == 0) goto Label_447; // 0x1bb JumpB
	func_420(var_12_string); // 0x1bd NEW_2
	
Label_447:
	return 0; // 0x1bf Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x1c0 PushT
	if(var_12_int == 0) goto Label_453; // 0x1c1 JumpB
	func_536(var_10_bool, var_11_bool); // 0x1c3 NEW_2
	
Label_453:
	var_16_bool = 0; // 0x1c5 PushV
	var_16_bool = 0; // 0x1c6 MovB
	var_17_int = var_5_int; // 0x1c7 PushT
	if(var_17_int == 0) goto Label_462; // 0x1c8 JumpB
	var_18_bool = 0; // 0x1c9 PushV
	func_469(var_18_bool); // 0x1ca NEW_2
	if(var_18_bool == 0) goto Label_462; // 0x1cc JumpB
	var_16_bool = 1; // 0x1cd MovB
	
Label_462:
	if(var_16_bool == 0) goto Label_468; // 0x1ce JumpB
	var_19_object = Obj(); // 0x1cf PushV
	func_785(var_19_object); // 0x1d0 NEW_2
	RemoveActor(var_19_object); // 0x1d2 Func
	
Label_468:
	return 0; // 0x1d4 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x202 PushI
	var_14_bool = var_12_int == var_13_int; // 0x203 Eq
	if(var_14_bool == 0) goto Label_535; // 0x204 JumpB
	var_15_bool = 0; // 0x205 PushV
	func_498(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x206 NEW_2
	if(var_15_bool == 0) goto Label_529; // 0x208 JumpB
	var_28_bool = var_2_object == 0; // 0x209 Not
	if(var_28_bool == 0) goto Label_528; // 0x20a JumpB
	var_29_object = Obj(); // 0x20b PushV
	var_29_object = var_4_bool; // 0x20c MovT
	func_767(var_29_object); // 0x20d NEW_2
	var_2_object = 1; // 0x20f TMovB
	
Label_528:
	goto Label_535; // 0x210 Jump
	
Label_535:
	return 0; // 0x217 Return
	
Label_529:
	var_36_object = var_2_object; // 0x211 PushT
	if(var_36_object == 0) goto Label_535; // 0x212 JumpB
	var_37_string = "head"; // 0x213 PushS
	UnlookAsync(var_37_string); // 0x214 Func
	var_2_object = 0; // 0x216 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0x181 PushV
	var_12_float = 300; // 0x182 MovI
	var_13_float = 100; // 0x183 MovI
	func_402(var_11_bool, var_12_float, var_13_float); // 0x184 NEW_2
	return 0; // 0x186 Return
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 70.0; // 0x4 MovF
	func_649(var_28_object, var_29_float); // 0x5 NEW_2
	var_74_bool = var_27_bool == 0; // 0x7 Not
	if(var_74_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_75_int = 0; // 0xd PushV
	func_1065(var_75_int); // 0xe NEW_2
	SetNPCName(var_75_int); // 0x10 ObjFunc
	var_76_int = 0; // 0x12 PushV
	func_1063(var_76_int); // 0x13 NEW_2
	SetNPCDescription(var_76_int); // 0x15 ObjFunc
	var_77_string = ""; // 0x17 PushV
	func_1067(var_77_string); // 0x18 NEW_2
	SetPhoto(var_77_string); // 0x1a ObjFunc
	var_78_string = ""; // 0x1c PushV
	func_1069(var_78_string); // 0x1d NEW_2
	SetPhoto2(var_78_string); // 0x1f ObjFunc
	var_79_int = 0; // 0x21 PushV
	func_1046(var_79_int); // 0x22 NEW_2
	SetPlayerName(var_79_int); // 0x24 ObjFunc
	var_25_int = -1; // 0x26 MovI
	IsOverrideActive(var_24_bool); // 0x27 Func
	var_87_bool = var_24_bool; // 0x29 Push
	if(var_87_bool == 0) goto Label_45; // 0x2a JumpB
	var_16_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_23_object); // 0x2d Func
	var_88_object = Obj(); var_89_object = Obj(); // 0x2f PushV
	var_88_object = var_17_object; // 0x30 Mov
	var_89_object = var_23_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_26_bool); // 0x36 ObjFunc
	
Label_56:
	var_156_bool = var_26_bool == 0; // 0x38 Not
	if(var_156_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_157_object = Obj(); // 0x3f PushV
	var_157_object = var_17_object; // 0x40 Mov
	func_718(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_644(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x284 PushV
	IsLoaded(var_25_bool); // 0x285 Func
	var_23_bool = var_25_bool; // 0x287 Mov
	return 2; // 0x288 Return
}


func_900()
{
	var_83_int = 0; // 0x385 PushI
	SetReturnValue(var_83_int); // 0x386 ObjFunc
	return 0; // 0x388 Return
}


func_649(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x289 PushV
	GetPosition(var_40_cvector); // 0x28a ObjFunc
	GetEyesHeight(var_39_float); // 0x28c ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x28e PushE
	var_48_float = var_48_float + var_39_float; // 0x28f Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x290 PopE
	GetPosition(var_41_cvector); // 0x291 Func
	GetEyesHeight(var_39_float); // 0x293 Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x295 PushE
	var_49_float = var_49_float + var_39_float; // 0x296 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x297 PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x298 Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x299 PushE
	var_50_float = 0; // 0x29a MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x29b PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x29c Or
	var_52_float = sqrt(var_51_int); // 0x29d Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x29e Div2
	var_43_cvector = -var_42_cvector; // 0x29f Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x2a0 Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x2a1 PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x2a2 PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x2a3 Xor2
	func_791(var_54_cvector, var_55_cvector); // 0x2a4 NEW_2
	var_62_int = 25; // 0x2a6 PushI
	var_63_float = var_54_cvector * var_62_int; // 0x2a7 Mult
	var_64_int = var_53_float + var_63_float; // 0x2a8 Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x2a9 PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x2aa Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x2ab Add2
	IsOverrideActive(var_46_bool); // 0x2ac Func
	var_66_bool = var_46_bool; // 0x2ae Push
	if(var_66_bool == 0) goto Label_690; // 0x2af JumpB
	var_27_bool = 0; // 0x2b0 MovB
	return 18; // 0x2b1 Return
	
Label_690:
	StopWorld(); // 0x2b2 Func
	var_67_bool = 1; // 0x2b4 PushB
	CameraTransit(var_45_cvector, var_43_cvector, var_67_bool); // 0x2b5 Func
	var_68_float = GetByIndex(var_44_cvector, 0); // 0x2b7 PushE
	var_69_float = GetByIndex(var_44_cvector, 2); // 0x2b8 PushE
	Rotate(var_68_float, var_69_float); // 0x2b9 Func
	var_70_bool = 0; // 0x2bb PushV
	func_1071(var_70_bool); // 0x2bc NEW_2
	if(var_70_bool == 0) goto Label_704; // 0x2be JumpB
	goto Label_712; // 0x2bf Jump
	
Label_712:
	CameraWaitForPlayFinish(); // 0x2c8 Func
	ResumeWorld(); // 0x2ca Func
	var_27_bool = 1; // 0x2cc MovB
	return 18; // 0x2cd Return
	
Label_704:
	var_71_string = "head"; // 0x2c0 PushS
	HasAnimationTrack(var_47_bool, var_71_string); // 0x2c1 Func
	var_72_bool = var_47_bool; // 0x2c3 Push
	if(var_72_bool == 0) goto Label_712; // 0x2c4 JumpB
	var_73_string = "head"; // 0x2c5 PushS
	LookAsyncCamera(var_73_string); // 0x2c6 Func
}


func_905(var_95_bool)
{
	var_97_int = 0; var_98_string = ""; // 0x38a PushV
	var_98_string = "k10q01"; // 0x38b MovS
	func_801(var_97_int, var_98_string); // 0x38c NEW_2
	var_101_int = 3; // 0x38e PushI
	var_102_bool = var_97_int == var_101_int; // 0x38f Eq
	if(var_102_bool == 0) goto Label_915; // 0x390 JumpB
	var_95_bool = 1; // 0x391 MovB
	return 0; // 0x392 Return
	
Label_915:
	var_95_bool = 0; // 0x393 MovB
	return 0; // 0x394 Return
}


func_778()
{
	var_15_bool = 0; // 0x30a PushV
	func_1071(var_15_bool); // 0x30b NEW_2
	if(var_15_bool == 0) goto Label_784; // 0x30d JumpB
	lshStopSpeech(); // 0x30e Func
	
Label_784:
	return 0; // 0x310 Return
}


func_785(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x311 PushV
	self(var_21_object); // 0x312 Func
	var_19_object = var_21_object; // 0x314 Mov
	return 2; // 0x315 Return
}


func_402(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0x192 PushV
	var_6_int = 0; // 0x193 TMovB
	
Label_404:
	var_18_int = 3; // 0x194 PushI
	rand(var_16_float, var_18_int); // 0x195 Func
	var_19_int = 3; // 0x197 PushI
	var_20_int = var_16_float + var_19_int; // 0x198 Add
	Sleep(var_20_int, var_17_bool); // 0x199 Func
	var_6_int = 1; // 0x19b TMovB
	var_21_float = 0; var_22_float = 0; // 0x19c PushV
	var_21_float = var_12_float; // 0x19d Mov
	var_22_float = var_13_float; // 0x19e Mov
	func_471(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x19f NEW_2
	var_6_int = 0; // 0x1a1 TMovB
	goto Label_404; // 0x1a2 Jump
}


func_917(var_144_bool)
{
	var_146_int = 0; var_147_string = ""; // 0x396 PushV
	var_147_string = "k10q01"; // 0x397 MovS
	func_801(var_146_int, var_147_string); // 0x398 NEW_2
	var_148_int = 5; // 0x39a PushI
	var_149_bool = var_146_int == var_148_int; // 0x39b Eq
	if(var_149_bool == 0) goto Label_927; // 0x39c JumpB
	var_144_bool = 1; // 0x39d MovB
	return 0; // 0x39e Return
	
Label_927:
	var_144_bool = 0; // 0x39f MovB
	return 0; // 0x3a0 Return
}


func_1046(var_79_int)
{
	var_80_int = 0; var_81_int = 0; // 0x416 PushV
	var_82_string = "branch"; // 0x417 PushS
	GetVariable(var_82_string, var_81_int); // 0x418 Func
	var_83_int = 0; // 0x41a PushI
	var_84_bool = var_81_int == var_83_int; // 0x41b Eq
	if(var_84_bool == 0) goto Label_1056; // 0x41c JumpB
	var_79_int = 1; // 0x41d MovI
	return 2; // 0x41e Return
	
Label_1056:
	var_85_int = 1; // 0x420 PushI
	var_86_bool = var_81_int == var_85_int; // 0x421 Eq
	if(var_86_bool == 0) goto Label_1061; // 0x422 JumpB
	var_79_int = 2; // 0x423 MovI
	return 2; // 0x424 Return
	
Label_1061:
	var_79_int = 3; // 0x425 MovI
	return 2; // 0x426 Return
}


func_791(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x317 PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x318 Or
	var_58_float = sqrt(var_59_int); // 0x319 Sqrt2
	var_60_float = 0.0; // 0x31a PushF
	var_61_bool = var_58_float < var_60_float; // 0x31b LT
	if(var_61_bool == 0) goto Label_799; // 0x31c JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x31d MovV
	return 2; // 0x31e Return
	
Label_799:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x31f Div2
	return 2; // 0x320 Return
}


func_536(var_2_object, var_3_string)
{
	func_631(); // 0x219 NEW_2
	var_13_int = 10; // 0x21b PushI
	KillTimer(var_13_int); // 0x21c Func
	var_14_object = var_2_object; // 0x21e PushT
	if(var_14_object == 0) goto Label_548; // 0x21f JumpB
	var_15_string = "head"; // 0x220 PushS
	UnlookAsync(var_15_string); // 0x221 Func
	var_2_object = 0; // 0x223 TMovB
	
Label_548:
	var_3_string = 1; // 0x224 TMovB
	return 0; // 0x225 Return
}


func_157(var_2_object, var_103_string)
{
	var_104_bool = 0; // 0x9e PushV
	func_1071(var_104_bool); // 0x9f NEW_2
	var_105_bool = var_104_bool == 0; // 0xa1 Not
	if(var_105_bool == 0) goto Label_164; // 0xa2 JumpB
	return 0; // 0xa3 Return
	
Label_164:
	var_106_bool = var_103_string == var_2_object; // 0xa4 Eq
	if(var_106_bool == 0) goto Label_167; // 0xa5 JumpB
	return 0; // 0xa6 Return
	
Label_167:
	var_107_string = ""; var_108_bool = 0; // 0xa7 PushV
	var_107_string = var_103_string; // 0xa8 Mov
	var_109_string = ""; // 0xa9 PushS
	var_110_bool = var_103_string == var_109_string; // 0xaa Eq
	if(var_110_bool == 0) goto Label_174; // 0xab JumpB
	var_108_bool = 0; // 0xac MovB
	goto Label_175; // 0xad Jump
	
Label_175:
	func_752(var_107_string, var_108_bool); // 0xaf NEW_2
	var_2_object = var_103_string; // 0xb1 TMov
	return 0; // 0xb2 Return
	
Label_174:
	var_108_bool = 1; // 0xae MovB
}


func_929()
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x3a1 PushV
	var_24_int = 451; // 0x3a2 PushI
	var_25_int = 1; // 0x3a3 PushI
	var_26_int = 527009; // 0x3a4 PushI
	CreateDiaryEntry(var_23_object, var_24_int, var_25_int, var_26_int); // 0x3a5 Func
	var_27_bool = 0; var_28_object = Obj(); var_29_int = 0; // 0x3a7 PushV
	var_28_object = var_23_object; // 0x3a8 Mov
	var_29_int = 447; // 0x3a9 MovI
	func_968(var_27_bool, var_28_object, var_29_int); // 0x3aa NEW_2
	return 2; // 0x3ac Return
}


func_801(var_97_int, var_98_string)
{
	var_99_int = 0; var_100_int = 0; // 0x321 PushV
	GetVariable(var_98_string, var_100_int); // 0x322 Func
	var_97_int = var_100_int; // 0x324 Mov
	return 2; // 0x325 Return
}


func_420(var_5_int)
{
	var_5_int = 1; // 0x1a4 TMovB
	var_15_bool = 0; // 0x1a5 PushV
	var_15_bool = 0; // 0x1a6 MovB
	var_16_bool = 0; // 0x1a7 PushV
	func_644(var_16_bool); // 0x1a8 NEW_2
	var_19_bool = var_16_bool == 0; // 0x1aa Not
	if(var_19_bool == 0) goto Label_433; // 0x1ab JumpB
	var_20_bool = 0; // 0x1ac PushV
	func_469(var_20_bool); // 0x1ad NEW_2
	if(var_20_bool == 0) goto Label_433; // 0x1af JumpB
	var_15_bool = 1; // 0x1b0 MovB
	
Label_433:
	if(var_15_bool == 0) goto Label_439; // 0x1b1 JumpB
	var_21_object = Obj(); // 0x1b2 PushV
	func_785(var_21_object); // 0x1b3 NEW_2
	RemoveActor(var_21_object); // 0x1b5 Func
	
Label_439:
	return 0; // 0x1b7 Return
}


func_550()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x226 PushV
	WaitForAnimEnd(); // 0x227 Func
	var_44_bool = 0; // 0x229 PushV
	func_644(var_44_bool); // 0x22a NEW_2
	var_45_bool = var_44_bool == 0; // 0x22c Not
	if(var_45_bool == 0) goto Label_559; // 0x22d JumpB
	return 14; // 0x22e Return
	
Label_559:
	var_46_int = 0; // 0x22f PushV
	func_830(var_46_int); // 0x230 NEW_2
	var_37_int = var_46_int; // 0x231 Mov
	var_38_int = 0; // 0x233 MovI
	
Label_564:
	var_59_bool = 0; // 0x234 PushV
	var_59_bool = 0; // 0x235 MovB
	var_60_int = 5; // 0x236 PushI
	var_61_bool = var_38_int < var_60_int; // 0x237 LT
	if(var_61_bool == 0) goto Label_574; // 0x238 JumpB
	var_62_bool = 0; // 0x239 PushV
	func_644(var_62_bool); // 0x23a NEW_2
	if(var_62_bool == 0) goto Label_574; // 0x23c JumpB
	var_59_bool = 1; // 0x23d MovB
	
Label_574:
	if(var_59_bool == 0) goto Label_626; // 0x23e JumpB
	var_63_int = 3; // 0x23f PushI
	irand(var_39_int, var_63_int); // 0x240 Func
	var_64_int = 0; // 0x242 PushI
	var_65_bool = var_39_int == var_64_int; // 0x243 Eq
	if(var_65_bool == 0) goto Label_598; // 0x244 JumpB
	var_66_int = var_37_int; // 0x245 Push
	if(var_66_int == 0) goto Label_597; // 0x246 JumpB
	irand(var_40_int, var_37_int); // 0x247 Func
	var_67_string = "all"; // 0x249 PushS
	var_68_string = ""; var_69_int = 0; // 0x24a PushV
	var_69_int = var_40_int; // 0x24b Mov
	func_823(var_68_string, var_69_int); // 0x24c NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x24e Func
	WaitForAnimEnd(var_41_bool); // 0x250 Func
	var_70_bool = var_41_bool == 0; // 0x252 Not
	if(var_70_bool == 0) goto Label_597; // 0x253 JumpB
	goto Label_626; // 0x254 Jump
	
Label_626:
	ResetAAS(); // 0x272 Func
	return 14; // 0x274 Return
	
Label_597:
	goto Label_615; // 0x255 Jump
	
Label_615:
	var_71_bool = 0; // 0x267 PushV
	func_629(var_71_bool); // 0x268 NEW_2
	var_72_bool = var_71_bool == 0; // 0x26a Not
	if(var_72_bool == 0) goto Label_621; // 0x26b JumpB
	goto Label_626; // 0x26c Jump
	
Label_621:
	ResetAAS(); // 0x26d Func
	var_73_int = 1; // 0x26f PushI
	var_38_int = var_38_int + var_73_int; // 0x270 Add2
	goto Label_564; // 0x271 Jump
	
Label_598:
	var_74_int = 1; // 0x256 PushI
	var_75_bool = var_39_int == var_74_int; // 0x257 Eq
	if(var_75_bool == 0) goto Label_612; // 0x258 JumpB
	var_76_int = 4; // 0x259 PushI
	rand(var_42_float, var_76_int); // 0x25a Func
	var_77_int = 1; // 0x25c PushI
	var_78_int = var_42_float + var_77_int; // 0x25d Add
	Sleep(var_78_int, var_43_bool); // 0x25e Func
	var_79_bool = var_43_bool == 0; // 0x260 Not
	if(var_79_bool == 0) goto Label_611; // 0x261 JumpB
	goto Label_626; // 0x262 Jump
	
Label_611:
	goto Label_615; // 0x263 Jump
	
Label_612:
	var_80_int = var_38_int; // 0x264 Push
	if(var_80_int == 0) goto Label_615; // 0x265 JumpB
	goto Label_626; // 0x266 Jump
}


func_1063(var_76_int)
{
	var_76_int = 515556; // 0x427 MovI
	return 0; // 0x428 Return
}


func_806(var_75_bool, var_76_string, var_77_string)
{
	var_78_object = Obj(); var_79_object = Obj(); // 0x326 PushV
	FindActor(var_79_object, var_76_string); // 0x327 Func
	var_80_bool = var_79_object == 0; // 0x329 NullEq
	if(var_80_bool == 0) goto Label_813; // 0x32a JumpB
	var_75_bool = 0; // 0x32b MovB
	return 2; // 0x32c Return
	
Label_813:
	Trigger(var_79_object, var_77_string); // 0x32d Func
	var_75_bool = 1; // 0x32f MovB
	return 2; // 0x330 Return
}


func_1065(var_75_int)
{
	var_75_int = 503341; // 0x429 MovI
	return 0; // 0x42a Return
}


func_1067(var_77_string)
{
	var_77_string = "ui/NPC_Citizen3.png"; // 0x42b MovS
	return 0; // 0x42c Return
}


func_1069(var_78_string)
{
	var_78_string = "ui/NPC_Citizen3_b.png"; // 0x42d MovS
	return 0; // 0x42e Return
}


func_942()
{
	var_67_object = Obj(); var_68_object = Obj(); // 0x3ae PushV
	var_69_int = 453; // 0x3af PushI
	var_70_int = 1; // 0x3b0 PushI
	var_71_int = 527011; // 0x3b1 PushI
	CreateDiaryEntry(var_68_object, var_69_int, var_70_int, var_71_int); // 0x3b2 Func
	var_72_bool = 0; var_73_object = Obj(); var_74_int = 0; // 0x3b4 PushV
	var_73_object = var_68_object; // 0x3b5 Mov
	var_74_int = 447; // 0x3b6 MovI
	func_968(var_72_bool, var_73_object, var_74_int); // 0x3b7 NEW_2
	return 2; // 0x3b9 Return
}


func_1071(var_70_bool)
{
	var_70_bool = 0; // 0x42f MovB
	return 0; // 0x430 Return
}


func_818(var_64_float)
{
	var_65_float = 0; var_66_float = 0; // 0x332 PushV
	GetGameTime(var_66_float); // 0x333 Func
	var_64_float = var_66_float; // 0x335 Mov
	return 2; // 0x336 Return
}


func_823(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x337 PushV
	var_55_string = "idle"; // 0x338 MovS
	var_56_int = var_53_int; // 0x339 Push
	if(var_56_int == 0) goto Label_828; // 0x33a JumpB
	var_55_string = var_55_string + var_53_int; // 0x33b Add2
	
Label_828:
	var_52_string = var_55_string; // 0x33c Mov
	return 2; // 0x33d Return
}


func_955(var_36_object)
{
	var_37_object = Obj(); var_38_object = Obj(); // 0x3bb PushV
	GetDiaryRoot(var_38_object); // 0x3bc Func
	var_39_bool = var_38_object == 0; // 0x3be Not
	if(var_39_bool == 0) goto Label_965; // 0x3bf JumpB
	var_40_string = "Can't retrieve diary root"; // 0x3c0 PushS
	Trace(var_40_string); // 0x3c1 Func
	var_36_object = 0; // 0x3c3 MovB
	return 2; // 0x3c4 Return
	
Label_965:
	var_36_object = var_38_object; // 0x3c5 Mov
	return 2; // 0x3c6 Return
}


func_830(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x33e PushV
	var_49_int = 0; // 0x33f MovI
	
Label_832:
	var_51_string = "all"; // 0x340 PushS
	var_52_string = ""; var_53_int = 0; // 0x341 PushV
	var_53_int = var_49_int; // 0x342 Mov
	func_823(var_52_string, var_53_int); // 0x343 NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x345 Func
	var_57_bool = var_50_bool == 0; // 0x347 Not
	if(var_57_bool == 0) goto Label_842; // 0x348 JumpB
	goto Label_845; // 0x349 Jump
	
Label_845:
	var_46_int = var_49_int; // 0x34d Mov
	return 4; // 0x34e Return
	
Label_842:
	var_58_int = 1; // 0x34a PushI
	var_49_int = var_49_int + var_58_int; // 0x34b Add2
	goto Label_832; // 0x34c Jump
}


func_968(var_27_bool, var_28_object, var_29_int)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0; var_33_object = Obj(); var_34_object = Obj(); var_35_int = 0; // 0x3c8 PushV
	var_36_object = Obj(); // 0x3c9 PushV
	func_955(var_36_object); // 0x3ca NEW_2
	var_33_object = var_36_object; // 0x3cb Mov
	Find(var_29_int, var_34_object); // 0x3cd ObjFunc
	var_41_bool = var_34_object == 0; // 0x3cf Not
	if(var_41_bool == 0) goto Label_983; // 0x3d0 JumpB
	var_42_string = "Can't find diary parent with id: "; // 0x3d1 PushS
	var_43_int = var_42_string + var_29_int; // 0x3d2 Add
	Trace(var_43_int); // 0x3d3 Func
	var_27_bool = 0; // 0x3d5 MovB
	return 6; // 0x3d6 Return
	
Label_983:
	AddChild(var_28_object); // 0x3d7 ObjFunc
	var_44_int = 7; // 0x3d9 PushI
	SendWorldWndMessage(var_44_int); // 0x3da Func
	GetCategory(var_35_int); // 0x3dc ObjFunc
	SetDiarySection(var_35_int); // 0x3de Func
	var_27_bool = 0; // 0x3e0 MovB
	return 6; // 0x3e1 Return
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
	func_905(var_96_object); // 0x52 NEW_2
	if(var_95_bool == 0) goto Label_100; // 0x54 JumpB
	var_103_string = ""; // 0x55 PushV
	var_103_string = "Neutral"; // 0x56 MovS
	func_157(var_89_object, var_103_string); // 0x57 NEW_2
	var_120_int = 526972; // 0x59 PushI
	SetMessage(var_120_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_121_int = 528069; // 0x5e PushI
	var_122_int = 29412; // 0x5f PushI
	var_123_int = 29411; // 0x60 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x61 TObjFunc
	goto Label_127; // 0x63 Jump
	
Label_127:
	var_124_bool = 0; // 0x7f PushV
	func_1071(var_124_bool); // 0x80 NEW_2
	if(var_124_bool == 0) goto Label_142; // 0x82 JumpB
	
Label_131:
	lshWaitForAnimEnd(); // 0x83 Func
	var_125_string = var_3_string; // 0x85 PushT
	if(var_125_string == 0) goto Label_136; // 0x86 JumpB
	goto Label_141; // 0x87 Jump
	
Label_141:
	goto Label_156; // 0x8d Jump
	
Label_156:
	return 0; // 0x9c Return
	
Label_136:
	var_126_string = ""; // 0x88 PushV
	var_126_string = var_2_object; // 0x89 MovT
	func_736(var_126_string); // 0x8a NEW_2
	goto Label_131; // 0x8c Jump
	
Label_142:
	var_137_string = "all"; // 0x8e PushS
	var_138_string = "idle"; // 0x8f PushS
	PlayAnimation(var_137_string, var_138_string); // 0x90 Func
	
Label_146:
	WaitForAnimEnd(); // 0x92 Func
	var_139_string = var_3_string; // 0x94 PushT
	if(var_139_string == 0) goto Label_151; // 0x95 JumpB
	goto Label_156; // 0x96 Jump
	
Label_151:
	var_140_string = "all"; // 0x97 PushS
	var_141_string = "idle"; // 0x98 PushS
	PlayAnimation(var_140_string, var_141_string); // 0x99 Func
	goto Label_146; // 0x9b Jump
	
Label_100:
	var_142_string = ""; // 0x64 PushV
	var_142_string = "Neutral"; // 0x65 MovS
	func_157(var_89_object, var_142_string); // 0x66 NEW_2
	var_143_int = 526976; // 0x68 PushI
	SetMessage(var_143_int); // 0x69 TObjFunc
	ClearReplies(); // 0x6b TObjFunc
	var_144_bool = 0; var_145_object = Obj(); // 0x6d PushV
	var_145_object = var_1_object; // 0x6e MovT
	func_917(var_145_object); // 0x6f NEW_2
	if(var_144_bool == 0) goto Label_119; // 0x71 JumpB
	var_150_int = 526981; // 0x72 PushI
	var_151_int = 28274; // 0x73 PushI
	var_152_int = 28273; // 0x74 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x75 TObjFunc
	
Label_119:
	var_153_int = 526977; // 0x77 PushI
	var_154_int = -1; // 0x78 PushI
	var_155_int = 28269; // 0x79 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x7a TObjFunc
	goto Label_127; // 0x7c Jump
}


func_718()
{
	var_158_bool = 0; var_159_bool = 0; // 0x2ce PushV
	var_160_bool = 1; // 0x2cf PushB
	CameraSwitchToNormal(var_160_bool); // 0x2d0 Func
	var_161_bool = 0; // 0x2d2 PushV
	func_1071(var_161_bool); // 0x2d3 NEW_2
	if(var_161_bool == 0) goto Label_727; // 0x2d5 JumpB
	goto Label_735; // 0x2d6 Jump
	
Label_735:
	return 2; // 0x2df Return
	
Label_727:
	var_162_string = "head"; // 0x2d7 PushS
	HasAnimationTrack(var_159_bool, var_162_string); // 0x2d8 Func
	var_163_bool = var_159_bool; // 0x2da Push
	if(var_163_bool == 0) goto Label_735; // 0x2db JumpB
	var_164_string = "head"; // 0x2dc PushS
	UnlookAsync(var_164_string); // 0x2dd Func
}


func_847()
{
	var_20_string = "k10q01"; // 0x350 PushS
	var_21_int = 4; // 0x351 PushI
	SetVariable(var_20_string, var_21_int); // 0x352 Func
	func_929(); // 0x355 NEW_2
	return 0; // 0x357 Return
}


func_469(var_18_bool)
{
	var_18_bool = 1; // 0x1d5 MovB
	return 0; // 0x1d6 Return
}


func_471(var_0_object, var_1_object, var_2_object, var_3_string, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x1d8 PushV
	func_644(var_23_bool); // 0x1d9 NEW_2
	var_26_bool = var_23_bool == 0; // 0x1db Not
	if(var_26_bool == 0) goto Label_478; // 0x1dc JumpB
	return 0; // 0x1dd Return
	
Label_478:
	var_27_string = "player"; // 0x1de PushS
	FindActor(var_17_bool, var_27_string); // 0x1df Func
	var_2_object = 0; // 0x1e1 TMovB
	var_3_string = 0; // 0x1e2 TMovB
	var_0_object = var_21_float; // 0x1e3 TMov
	var_1_object = var_22_float; // 0x1e4 TMov
	var_28_int = 10; // 0x1e5 PushI
	var_29_float = 1.0; // 0x1e6 PushF
	SetTimer(var_28_int, var_29_float); // 0x1e7 Func
	func_550(); // 0x1ea NEW_2
	var_81_bool = var_3_string == 0; // 0x1ec Not
	if(var_81_bool == 0) goto Label_497; // 0x1ed JumpB
	var_82_int = 10; // 0x1ee PushI
	KillTimer(var_82_int); // 0x1ef Func
	
Label_497:
	return 0; // 0x1f1 Return
}


func_856()
{
	var_49_object = Obj(); var_50_object = Obj(); // 0x358 PushV
	var_51_string = "k10q01"; // 0x359 PushS
	var_52_int = 6; // 0x35a PushI
	SetVariable(var_51_string, var_52_int); // 0x35b Func
	var_53_object = Obj(); // 0x35d PushV
	func_996(var_53_object); // 0x35e NEW_2
	var_50_object = var_53_object; // 0x35f Mov
	var_60_string = "k10q01WastedGotoBurah"; // 0x361 PushS
	var_61_string = "pt_gmap_factory"; // 0x362 PushS
	var_62_int = 1; // 0x363 PushI
	var_63_int = 530196; // 0x364 PushI
	var_64_float = 0; // 0x365 PushV
	func_818(var_64_float); // 0x366 NEW_2
	AddMark(var_60_string, var_61_string, var_62_int, var_63_int, var_64_float); // 0x368 ObjFunc
	func_942(); // 0x36b NEW_2
	var_75_bool = 0; var_76_string = ""; var_77_string = ""; // 0x36d PushV
	var_76_string = "quest_k10_01"; // 0x36e MovS
	var_77_string = "init_factory"; // 0x36f MovS
	func_806(var_75_bool, var_76_string, var_77_string); // 0x370 NEW_2
	return 2; // 0x372 Return
}


func_736(var_126_string)
{
	var_127_bool = 0; var_128_float = 0; var_129_float = 0; var_130_bool = 0; var_131_float = 0; var_132_float = 0; // 0x2e0 PushV
	lshHasAnimation(var_130_bool, var_126_string); // 0x2e1 Func
	var_133_bool = var_130_bool; // 0x2e3 Push
	if(var_133_bool == 0) goto Label_747; // 0x2e4 JumpB
	lshGetAnimTimes(var_126_string, var_131_float, var_132_float); // 0x2e5 Func
	var_134_bool = 0; // 0x2e7 PushB
	lshPlayAnimation(var_131_float, var_132_float, var_134_bool); // 0x2e8 Func
	goto Label_751; // 0x2ea Jump
	
Label_751:
	return 6; // 0x2ef Return
	
Label_747:
	var_135_string = "Can't find lsh animation : "; // 0x2eb PushS
	var_136_int = var_135_string + var_126_string; // 0x2ec Add
	Trace(var_136_int); // 0x2ed Func
}


func_996(var_53_object)
{
	var_54_object = Obj(); var_55_object = Obj(); var_56_object = Obj(); var_57_object = Obj(); // 0x3e4 PushV
	GetMainOutdoorScene(var_56_object); // 0x3e5 Func
	var_58_bool = var_56_object == 0; // 0x3e7 NullEq
	if(var_58_bool == 0) goto Label_1007; // 0x3e8 JumpB
	var_59_string = "Can't find main outdoor scene"; // 0x3e9 PushS
	Trace(var_59_string); // 0x3ea Func
	var_57_object = 0; // 0x3ec SetNull
	var_53_object = var_57_object; // 0x3ed Mov
	return 4; // 0x3ee Return
	
Label_1007:
	GetMap(var_57_object); // 0x3ef ObjFunc
	var_53_object = var_57_object; // 0x3f1 Mov
	return 4; // 0x3f2 Return
}


func_752(var_107_string, var_108_bool)
{
	var_111_bool = 0; var_112_float = 0; var_113_float = 0; var_114_bool = 0; var_115_float = 0; var_116_float = 0; // 0x2f0 PushV
	lshHasAnimation(var_114_bool, var_107_string); // 0x2f1 Func
	var_117_bool = var_114_bool; // 0x2f3 Push
	if(var_117_bool == 0) goto Label_762; // 0x2f4 JumpB
	lshGetAnimTimes(var_107_string, var_115_float, var_116_float); // 0x2f5 Func
	lshPlayAnimation(var_115_float, var_116_float, var_108_bool); // 0x2f7 Func
	goto Label_766; // 0x2f9 Jump
	
Label_766:
	return 6; // 0x2fe Return
	
Label_762:
	var_118_string = "Can't find lsh animation : "; // 0x2fa PushS
	var_119_int = var_118_string + var_107_string; // 0x2fb Add
	Trace(var_119_int); // 0x2fc Func
}


func_498(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x1f2 PushV
	var_18_bool = var_4_bool == 0; // 0x1f3 NullEq
	if(var_18_bool == 0) goto Label_503; // 0x1f4 JumpB
	var_15_bool = 0; // 0x1f5 MovB
	return 2; // 0x1f6 Return
	
Label_503:
	var_19_float = 0; var_20_object = Obj(); // 0x1f7 PushV
	var_20_object = var_4_bool; // 0x1f8 MovT
	func_636(var_20_object); // 0x1f9 NEW_2
	var_17_float = sqrt(var_19_float); // 0x1fb Sqrt2
	var_27_object = var_2_object; // 0x1fc PushT
	if(var_27_object == 0) goto Label_511; // 0x1fd JumpB
	var_17_float = var_17_float - var_1_object; // 0x1fe Sub2
	
Label_511:
	var_15_bool = var_17_float < var_0_object; // 0x1ff LT2
	return 2; // 0x200 Return
}


func_884()
{
	var_86_object = Obj(); var_87_string = ""; var_88_float = 0; // 0x375 PushV
	var_89_object = Obj(); // 0x376 PushV
	func_996(var_89_object); // 0x377 NEW_2
	var_86_object = var_89_object; // 0x378 Mov
	var_87_string = "pt_gmap_factory"; // 0x37a MovS
	var_88_float = 2; // 0x37b MovI
	func_1013(var_86_object, var_87_string, var_88_float); // 0x37c NEW_2
	var_109_object = Obj(); // 0x37e PushV
	func_996(var_109_object); // 0x37f NEW_2
	ShowMap(var_109_object); // 0x381 ObjFunc
	return 0; // 0x383 Return
}


func_629(var_71_bool)
{
	var_71_bool = 1; // 0x275 MovB
	return 0; // 0x276 Return
}


func_1013(var_86_object, var_87_string, var_88_float)
{
	var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_object = Obj(); var_93_bool = 0; var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_object = Obj(); var_97_bool = 0; // 0x3f5 PushV
	GetMainOutdoorScene(var_96_object); // 0x3f6 Func
	var_98_bool = var_96_object == 0; // 0x3f8 NullEq
	if(var_98_bool == 0) goto Label_1022; // 0x3f9 JumpB
	var_99_string = "Can't find main outdoor scene"; // 0x3fa PushS
	Trace(var_99_string); // 0x3fb Func
	return 8; // 0x3fd Return
	
Label_1022:
	GetLocator(var_87_string, var_97_bool, var_94_cvector, var_95_cvector); // 0x3fe ObjFunc
	var_100_bool = var_97_bool == 0; // 0x400 Not
	if(var_100_bool == 0) goto Label_1032; // 0x401 JumpB
	var_101_string = "Warning: outdoor scene locator "; // 0x402 PushS
	var_102_int = var_101_string + var_87_string; // 0x403 Add
	var_103_string = " doesnt exist"; // 0x404 PushS
	var_104_int = var_102_int + var_103_string; // 0x405 Add
	Trace(var_104_int); // 0x406 Func
	
Label_1032:
	GetMap(var_86_object); // 0x408 ObjFunc
	var_105_bool = var_86_object == 0; // 0x40a NullEq
	if(var_105_bool == 0) goto Label_1040; // 0x40b JumpB
	var_106_string = "Can't find map"; // 0x40c PushS
	Trace(var_106_string); // 0x40d Func
	return 8; // 0x40f Return
	
Label_1040:
	var_107_float = GetByIndex(var_94_cvector, 0); // 0x410 PushE
	var_108_float = GetByIndex(var_94_cvector, 2); // 0x411 PushE
	SetMapParams(var_107_float, var_108_float, var_88_float); // 0x412 ObjFunc
	return 8; // 0x414 Return
}


func_631()
{
	StopAnimation(); // 0x277 Func
	StopGroup0(); // 0x279 Func
	return 0; // 0x27b Return
}


func_636(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x27c PushV
	GetPosition(var_24_cvector); // 0x27d Func
	GetPosition(var_25_cvector); // 0x27f ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x281 Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x282 Or2
	return 6; // 0x283 Return
}


func_767(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x2ff PushV
	GetEyesHeight(var_32_float); // 0x300 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x302 MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x303 PushE
	var_34_float = var_32_float; // 0x304 Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x305 PopE
	var_35_string = "head"; // 0x306 PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x307 Func
	return 4; // 0x309 Return
}


