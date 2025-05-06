task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xc0 PushI
	if(var_8_int == 0) goto Label_344; // 0xc1 JumpB
	func_672(); // 0xc3 NEW_2
	var_10_int = 34774; // 0xc5 PushI
	var_11_bool = var_6_int == var_10_int; // 0xc6 Eq
	if(var_11_bool == 0) goto Label_250; // 0xc7 JumpB
	var_12_bool = 0; var_13_object = Obj(); // 0xc8 PushV
	var_13_object = var_1_object; // 0xc9 MovT
	func_715(var_13_object); // 0xca NEW_2
	if(var_12_bool == 0) goto Label_230; // 0xcc JumpB
	var_20_object = Obj(); var_21_object = Obj(); // 0xcd PushV
	var_20_object = var_1_object; // 0xce MovT
	var_21_object = var_0_object; // 0xcf MovT
	func_709(); // 0xd0 NEW_2
	var_24_string = ""; // 0xd2 PushV
	var_24_string = "Rage"; // 0xd3 MovS
	func_169(var_7_bool, var_24_string); // 0xd4 NEW_2
	var_41_int = 533260; // 0xd6 PushI
	SetMessage(var_41_int); // 0xd7 TObjFunc
	ClearReplies(); // 0xd9 TObjFunc
	var_42_int = 533261; // 0xdb PushI
	var_43_int = 34776; // 0xdc PushI
	var_44_int = 34775; // 0xdd PushI
	AddReply(var_42_int, var_43_int, var_44_int); // 0xde TObjFunc
	var_45_int = 535781; // 0xe0 PushI
	var_46_int = 34776; // 0xe1 PushI
	var_47_int = 37465; // 0xe2 PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0xe3 TObjFunc
	return 0; // 0xe5 Return
	
Label_230:
	var_48_string = ""; // 0xe6 PushV
	var_48_string = "Angry"; // 0xe7 MovS
	func_169(var_7_bool, var_48_string); // 0xe8 NEW_2
	var_49_int = 533258; // 0xea PushI
	SetMessage(var_49_int); // 0xeb TObjFunc
	ClearReplies(); // 0xed TObjFunc
	var_50_int = 533259; // 0xef PushI
	var_51_int = -1; // 0xf0 PushI
	var_52_int = 34773; // 0xf1 PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0xf2 TObjFunc
	var_53_int = 535778; // 0xf4 PushI
	var_54_int = -1; // 0xf5 PushI
	var_55_int = 37462; // 0xf6 PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0xf7 TObjFunc
	return 0; // 0xf9 Return
	
Label_250:
	var_56_int = 34776; // 0xfa PushI
	var_57_bool = var_6_int == var_56_int; // 0xfb Eq
	if(var_57_bool == 0) goto Label_273; // 0xfc JumpB
	var_58_string = ""; // 0xfd PushV
	var_58_string = "Angry"; // 0xfe MovS
	func_169(var_7_bool, var_58_string); // 0xff NEW_2
	var_59_int = 533262; // 0x101 PushI
	SetMessage(var_59_int); // 0x102 TObjFunc
	ClearReplies(); // 0x104 TObjFunc
	var_60_int = 533263; // 0x106 PushI
	var_61_int = 37460; // 0x107 PushI
	var_62_int = 34777; // 0x108 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0x109 TObjFunc
	var_63_int = 535782; // 0x10b PushI
	var_64_int = 37467; // 0x10c PushI
	var_65_int = 37466; // 0x10d PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0x10e TObjFunc
	return 0; // 0x110 Return
	
Label_273:
	var_66_int = 37467; // 0x111 PushI
	var_67_bool = var_6_int == var_66_int; // 0x112 Eq
	if(var_67_bool == 0) goto Label_291; // 0x113 JumpB
	var_68_string = ""; // 0x114 PushV
	var_68_string = "Angry"; // 0x115 MovS
	func_169(var_7_bool, var_68_string); // 0x116 NEW_2
	var_69_int = 535783; // 0x118 PushI
	SetMessage(var_69_int); // 0x119 TObjFunc
	ClearReplies(); // 0x11b TObjFunc
	var_70_int = 535784; // 0x11d PushI
	var_71_int = 37463; // 0x11e PushI
	var_72_int = 37468; // 0x11f PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0x120 TObjFunc
	return 0; // 0x122 Return
	
Label_291:
	var_73_int = 37460; // 0x123 PushI
	var_74_bool = var_6_int == var_73_int; // 0x124 Eq
	if(var_74_bool == 0) goto Label_309; // 0x125 JumpB
	var_75_string = ""; // 0x126 PushV
	var_75_string = "Angry"; // 0x127 MovS
	func_169(var_7_bool, var_75_string); // 0x128 NEW_2
	var_76_int = 535776; // 0x12a PushI
	SetMessage(var_76_int); // 0x12b TObjFunc
	ClearReplies(); // 0x12d TObjFunc
	var_77_int = 535777; // 0x12f PushI
	var_78_int = 37463; // 0x130 PushI
	var_79_int = 37461; // 0x131 PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0x132 TObjFunc
	return 0; // 0x134 Return
	
Label_309:
	var_80_int = 37463; // 0x135 PushI
	var_81_bool = var_6_int == var_80_int; // 0x136 Eq
	if(var_81_bool == 0) goto Label_332; // 0x137 JumpB
	var_82_string = ""; // 0x138 PushV
	var_82_string = "Staring"; // 0x139 MovS
	func_169(var_7_bool, var_82_string); // 0x13a NEW_2
	var_83_int = 535779; // 0x13c PushI
	SetMessage(var_83_int); // 0x13d TObjFunc
	ClearReplies(); // 0x13f TObjFunc
	var_84_int = 535780; // 0x141 PushI
	var_85_int = -1; // 0x142 PushI
	var_86_int = 37464; // 0x143 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x144 TObjFunc
	var_87_int = 535785; // 0x146 PushI
	var_88_int = -1; // 0x147 PushI
	var_89_int = 37469; // 0x148 PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x149 TObjFunc
	return 0; // 0x14b Return
	
Label_332:
	var_3_string = 1; // 0x14c TMovB
	var_90_bool = 0; // 0x14d PushV
	func_752(var_90_bool); // 0x14e NEW_2
	if(var_90_bool == 0) goto Label_340; // 0x150 JumpB
	lshStopAnimation(); // 0x151 Func
	goto Label_342; // 0x153 Jump
	
Label_342:
	return 0; // 0x156 Return
	
Label_340:
	StopAnimation(); // 0x154 Func
	
Label_344:
	return 0; // 0x158 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x15a PushV
	var_8_object = var_6_object; // 0x15b Mov
	TaskCall(0); // 0x15c TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x15d NEW_2
	TaskReturn(); // 0x15e TaskReturn
	return 0; // 0x160 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x165 PushV
	var_9_string = "cleanup"; // 0x166 PushS
	var_10_bool = var_6_string == var_9_string; // 0x167 Eq
	if(var_10_bool == 0) goto Label_380; // 0x168 JumpB
	var_0_object = 1; // 0x169 TMovB
	IsLoaded(var_8_bool); // 0x16a Func
	var_11_bool = 0; // 0x16c PushV
	var_11_bool = 0; // 0x16d MovB
	var_12_bool = var_8_bool == 0; // 0x16e Not
	if(var_12_bool == 0) goto Label_373; // 0x16f JumpB
	var_13_bool = 0; // 0x170 PushV
	func_401(var_13_bool); // 0x171 NEW_2
	if(var_13_bool == 0) goto Label_373; // 0x173 JumpB
	var_11_bool = 1; // 0x174 MovB
	
Label_373:
	if(var_11_bool == 0) goto Label_379; // 0x175 JumpB
	var_14_object = Obj(); // 0x176 PushV
	func_679(var_14_object); // 0x177 NEW_2
	RemoveActor(var_14_object); // 0x179 Func
	
Label_379:
	goto Label_384; // 0x17b Jump
	
Label_384:
	return 2; // 0x180 Return
	
Label_380:
	var_17_string = "restore"; // 0x17c PushS
	var_18_bool = var_6_string == var_17_string; // 0x17d Eq
	if(var_18_bool == 0) goto Label_384; // 0x17e JumpB
	var_0_object = 0; // 0x17f TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x181 PushV
	var_6_bool = 0; // 0x182 MovB
	var_7_object = var_0_object; // 0x183 PushT
	if(var_7_object == 0) goto Label_394; // 0x184 JumpB
	var_8_bool = 0; // 0x185 PushV
	func_401(var_8_bool); // 0x186 NEW_2
	if(var_8_bool == 0) goto Label_394; // 0x188 JumpB
	var_6_bool = 1; // 0x189 MovB
	
Label_394:
	if(var_6_bool == 0) goto Label_400; // 0x18a JumpB
	var_9_object = Obj(); // 0x18b PushV
	func_679(var_9_object); // 0x18c NEW_2
	RemoveActor(var_9_object); // 0x18e Func
	
Label_400:
	return 0; // 0x190 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_353:
	Hold(); // 0x161 Func
	goto Label_353; // 0x163 Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_403(var_19_object, var_20_float); // 0x5 NEW_2
	var_64_bool = var_18_bool == 0; // 0x7 Not
	if(var_64_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_65_int = 0; // 0xd PushV
	func_746(var_65_int); // 0xe NEW_2
	SetNPCName(var_65_int); // 0x10 ObjFunc
	var_66_int = 0; // 0x12 PushV
	func_744(var_66_int); // 0x13 NEW_2
	SetNPCDescription(var_66_int); // 0x15 ObjFunc
	var_67_string = ""; // 0x17 PushV
	func_748(var_67_string); // 0x18 NEW_2
	SetPhoto(var_67_string); // 0x1a ObjFunc
	var_68_string = ""; // 0x1c PushV
	func_750(var_68_string); // 0x1d NEW_2
	SetPhoto2(var_68_string); // 0x1f ObjFunc
	var_69_int = 0; // 0x21 PushV
	func_727(var_69_int); // 0x22 NEW_2
	SetPlayerName(var_69_int); // 0x24 ObjFunc
	var_16_int = -1; // 0x26 MovI
	IsOverrideActive(var_15_bool); // 0x27 Func
	var_77_bool = var_15_bool; // 0x29 Push
	if(var_77_bool == 0) goto Label_45; // 0x2a JumpB
	var_7_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_14_object); // 0x2d Func
	var_78_bool = 0; var_79_object = Obj(); // 0x2f PushV
	var_80_object = Obj(); // 0x30 PushV
	func_679(var_80_object); // 0x31 NEW_2
	var_79_object = var_80_object; // 0x32 Mov
	func_488(var_78_bool, var_79_object); // 0x34 NEW_2
	var_173_object = Obj(); var_174_object = Obj(); // 0x36 PushV
	var_173_object = var_8_object; // 0x37 Mov
	var_174_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_175_object, var_176_object, var_177_string, var_178_bool, var_173_object, var_174_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_242_bool = var_17_bool == 0; // 0x3f Not
	if(var_242_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_243_object = Obj(); // 0x46 PushV
	var_243_object = var_8_object; // 0x47 Mov
	func_471(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_642(var_196_string, var_197_bool)
{
	var_200_bool = 0; var_201_float = 0; var_202_float = 0; var_203_bool = 0; var_204_float = 0; var_205_float = 0; // 0x282 PushV
	lshHasAnimation(var_203_bool, var_196_string); // 0x283 Func
	var_206_bool = var_203_bool; // 0x285 Push
	if(var_206_bool == 0) goto Label_652; // 0x286 JumpB
	lshGetAnimTimes(var_196_string, var_204_float, var_205_float); // 0x287 Func
	lshPlayAnimation(var_204_float, var_205_float, var_197_bool); // 0x289 Func
	goto Label_656; // 0x28b Jump
	
Label_656:
	return 6; // 0x290 Return
	
Label_652:
	var_207_string = "Can't find lsh animation : "; // 0x28c PushS
	var_208_int = var_207_string + var_196_string; // 0x28d Add
	Trace(var_208_int); // 0x28e Func
}


func_709()
{
	var_190_string = "ood7MariaPetr1"; // 0x2c6 PushS
	var_191_int = 1; // 0x2c7 PushI
	SetVariable(var_190_string, var_191_int); // 0x2c8 Func
	return 0; // 0x2ca Return
}


func_583(var_120_bool)
{
	var_122_string = ""; var_123_int = 0; var_124_bool = 0; var_125_int = 0; var_126_string = ""; var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; // 0x247 PushV
	var_132_string = "d"; // 0x248 PushS
	var_133_int = 0; // 0x249 PushV
	func_700(var_133_int); // 0x24a NEW_2
	var_139_int = var_132_string + var_133_int; // 0x24c Add
	var_140_string = "m"; // 0x24d PushS
	var_127_string = var_139_int + var_140_string; // 0x24e Add2
	var_128_int = 0; // 0x24f MovI
	
Label_592:
	var_141_int = 1; // 0x250 PushI
	if(var_141_int == 0) goto Label_605; // 0x251 JumpB
	var_142_int = 1; // 0x252 PushI
	var_143_int = var_128_int + var_142_int; // 0x253 Add
	var_144_int = var_127_string + var_143_int; // 0x254 Add
	HasProperty(var_144_int, var_129_bool); // 0x255 ObjFunc
	var_145_bool = var_129_bool == 0; // 0x257 Not
	if(var_145_bool == 0) goto Label_602; // 0x258 JumpB
	goto Label_605; // 0x259 Jump
	
Label_605:
	var_146_bool = var_128_int == 0; // 0x25d Not
	if(var_146_bool == 0) goto Label_609; // 0x25e JumpB
	var_120_bool = 0; // 0x25f MovB
	return 10; // 0x260 Return
	
Label_609:
	var_130_int = 0; // 0x261 MovI
	var_147_int = 1; // 0x262 PushI
	var_148_bool = var_128_int > var_147_int; // 0x263 GT
	if(var_148_bool == 0) goto Label_615; // 0x264 JumpB
	irand(var_130_int, var_128_int); // 0x265 Func
	
Label_615:
	var_149_int = 1; // 0x267 PushI
	var_150_int = var_130_int + var_149_int; // 0x268 Add
	var_151_int = var_127_string + var_150_int; // 0x269 Add
	GetProperty(var_151_int, var_131_string); // 0x26a ObjFunc
	var_152_bool = 0; var_153_string = ""; // 0x26c PushV
	var_153_string = var_131_string; // 0x26d Mov
	func_657(var_152_bool, var_153_string); // 0x26e NEW_2
	var_120_bool = var_152_bool; // 0x26f Mov
	return 10; // 0x271 Return
	
Label_602:
	var_154_int = 1; // 0x25a PushI
	var_128_int = var_128_int + var_154_int; // 0x25b Add2
	goto Label_592; // 0x25c Jump
}


func_715(var_180_bool)
{
	var_182_int = 0; var_183_string = ""; // 0x2cc PushV
	var_183_string = "ood7MariaPetr1"; // 0x2cd MovS
	func_695(var_182_int, var_183_string); // 0x2ce NEW_2
	var_186_int = 0; // 0x2d0 PushI
	var_187_bool = var_182_int == var_186_int; // 0x2d1 Eq
	if(var_187_bool == 0) goto Label_725; // 0x2d2 JumpB
	var_180_bool = 1; // 0x2d3 MovB
	return 0; // 0x2d4 Return
	
Label_725:
	var_180_bool = 0; // 0x2d5 MovB
	return 0; // 0x2d6 Return
}


func_401(var_8_bool)
{
	var_8_bool = 1; // 0x191 MovB
	return 0; // 0x192 Return
}


func_657(var_112_bool, var_113_string)
{
	var_114_bool = 0; var_115_bool = 0; // 0x291 PushV
	var_116_bool = 0; // 0x292 PushV
	func_752(var_116_bool); // 0x293 NEW_2
	if(var_116_bool == 0) goto Label_670; // 0x295 JumpB
	lshHasSpeech(var_115_bool, var_113_string); // 0x296 Func
	var_117_bool = var_115_bool; // 0x298 Push
	if(var_117_bool == 0) goto Label_670; // 0x299 JumpB
	lshPlaySpeech(var_113_string); // 0x29a Func
	var_112_bool = 1; // 0x29c MovB
	return 2; // 0x29d Return
	
Label_670:
	var_112_bool = 0; // 0x29e MovB
	return 2; // 0x29f Return
}


func_403(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x193 PushV
	GetPosition(var_31_cvector); // 0x194 ObjFunc
	GetEyesHeight(var_30_float); // 0x196 ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x198 PushE
	var_39_float = var_39_float + var_30_float; // 0x199 Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x19a PopE
	GetPosition(var_32_cvector); // 0x19b Func
	GetEyesHeight(var_30_float); // 0x19d Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x19f PushE
	var_40_float = var_40_float + var_30_float; // 0x1a0 Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x1a1 PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x1a2 Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x1a3 PushE
	var_41_float = 0; // 0x1a4 MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x1a5 PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x1a6 Or
	var_43_float = sqrt(var_42_int); // 0x1a7 Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x1a8 Div2
	var_34_cvector = -var_33_cvector; // 0x1a9 Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x1aa Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x1ab PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x1ac PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x1ad Xor2
	func_685(var_45_cvector, var_46_cvector); // 0x1ae NEW_2
	var_53_int = 25; // 0x1b0 PushI
	var_54_float = var_45_cvector * var_53_int; // 0x1b1 Mult
	var_55_int = var_44_float + var_54_float; // 0x1b2 Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x1b3 PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x1b4 Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x1b5 Add2
	IsOverrideActive(var_37_bool); // 0x1b6 Func
	var_57_bool = var_37_bool; // 0x1b8 Push
	if(var_57_bool == 0) goto Label_444; // 0x1b9 JumpB
	var_18_bool = 0; // 0x1ba MovB
	return 18; // 0x1bb Return
	
Label_444:
	StopWorld(); // 0x1bc Func
	CameraTransit(var_36_cvector, var_34_cvector); // 0x1be Func
	var_58_float = GetByIndex(var_35_cvector, 0); // 0x1c0 PushE
	var_59_float = GetByIndex(var_35_cvector, 2); // 0x1c1 PushE
	Rotate(var_58_float, var_59_float); // 0x1c2 Func
	var_60_bool = 0; // 0x1c4 PushV
	func_752(var_60_bool); // 0x1c5 NEW_2
	if(var_60_bool == 0) goto Label_457; // 0x1c7 JumpB
	goto Label_465; // 0x1c8 Jump
	
Label_465:
	CameraWaitForPlayFinish(); // 0x1d1 Func
	ResumeWorld(); // 0x1d3 Func
	var_18_bool = 1; // 0x1d5 MovB
	return 18; // 0x1d6 Return
	
Label_457:
	var_61_string = "head"; // 0x1c9 PushS
	HasAnimationTrack(var_38_bool, var_61_string); // 0x1ca Func
	var_62_bool = var_38_bool; // 0x1cc Push
	if(var_62_bool == 0) goto Label_465; // 0x1cd JumpB
	var_63_string = "head"; // 0x1ce PushS
	LookAsyncCamera(var_63_string); // 0x1cf Func
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_173_object, var_174_object)
{
	var_0_object = var_174_object; // 0x52 TMov
	var_1_object = var_173_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_179_int = 1; // 0x55 PushI
	if(var_179_int == 0) goto Label_139; // 0x56 JumpB
	var_180_bool = 0; var_181_object = Obj(); // 0x57 PushV
	var_181_object = var_1_object; // 0x58 MovT
	func_715(var_181_object); // 0x59 NEW_2
	if(var_180_bool == 0) goto Label_117; // 0x5b JumpB
	var_188_object = Obj(); var_189_object = Obj(); // 0x5c PushV
	var_188_object = var_1_object; // 0x5d MovT
	var_189_object = var_0_object; // 0x5e MovT
	func_709(); // 0x5f NEW_2
	var_192_string = ""; // 0x61 PushV
	var_192_string = "Rage"; // 0x62 MovS
	func_169(var_174_object, var_192_string); // 0x63 NEW_2
	var_209_int = 533260; // 0x65 PushI
	SetMessage(var_209_int); // 0x66 TObjFunc
	ClearReplies(); // 0x68 TObjFunc
	var_210_int = 533261; // 0x6a PushI
	var_211_int = 34776; // 0x6b PushI
	var_212_int = 34775; // 0x6c PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x6d TObjFunc
	var_213_int = 535781; // 0x6f PushI
	var_214_int = 34776; // 0x70 PushI
	var_215_int = 37465; // 0x71 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x72 TObjFunc
	goto Label_139; // 0x74 Jump
	
Label_139:
	var_216_bool = 0; // 0x8b PushV
	func_752(var_216_bool); // 0x8c NEW_2
	if(var_216_bool == 0) goto Label_154; // 0x8e JumpB
	
Label_143:
	lshWaitForAnimEnd(); // 0x8f Func
	var_217_string = var_3_string; // 0x91 PushT
	if(var_217_string == 0) goto Label_148; // 0x92 JumpB
	goto Label_153; // 0x93 Jump
	
Label_153:
	goto Label_168; // 0x99 Jump
	
Label_168:
	return 0; // 0xa8 Return
	
Label_148:
	var_218_string = ""; // 0x94 PushV
	var_218_string = var_2_object; // 0x95 MovT
	func_626(var_218_string); // 0x96 NEW_2
	goto Label_143; // 0x98 Jump
	
Label_154:
	var_229_string = "all"; // 0x9a PushS
	var_230_string = "idle"; // 0x9b PushS
	PlayAnimation(var_229_string, var_230_string); // 0x9c Func
	
Label_158:
	WaitForAnimEnd(); // 0x9e Func
	var_231_string = var_3_string; // 0xa0 PushT
	if(var_231_string == 0) goto Label_163; // 0xa1 JumpB
	goto Label_168; // 0xa2 Jump
	
Label_163:
	var_232_string = "all"; // 0xa3 PushS
	var_233_string = "idle"; // 0xa4 PushS
	PlayAnimation(var_232_string, var_233_string); // 0xa5 Func
	goto Label_158; // 0xa7 Jump
	
Label_117:
	var_234_string = ""; // 0x75 PushV
	var_234_string = "Angry"; // 0x76 MovS
	func_169(var_174_object, var_234_string); // 0x77 NEW_2
	var_235_int = 533258; // 0x79 PushI
	SetMessage(var_235_int); // 0x7a TObjFunc
	ClearReplies(); // 0x7c TObjFunc
	var_236_int = 533259; // 0x7e PushI
	var_237_int = -1; // 0x7f PushI
	var_238_int = 34773; // 0x80 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x81 TObjFunc
	var_239_int = 535778; // 0x83 PushI
	var_240_int = -1; // 0x84 PushI
	var_241_int = 37462; // 0x85 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x86 TObjFunc
	goto Label_139; // 0x88 Jump
}


func_471()
{
	var_244_bool = 0; var_245_bool = 0; // 0x1d7 PushV
	CameraSwitchToNormal(); // 0x1d8 Func
	var_246_bool = 0; // 0x1da PushV
	func_752(var_246_bool); // 0x1db NEW_2
	if(var_246_bool == 0) goto Label_479; // 0x1dd JumpB
	goto Label_487; // 0x1de Jump
	
Label_487:
	return 2; // 0x1e7 Return
	
Label_479:
	var_247_string = "head"; // 0x1df PushS
	HasAnimationTrack(var_245_bool, var_247_string); // 0x1e0 Func
	var_248_bool = var_245_bool; // 0x1e2 Push
	if(var_248_bool == 0) goto Label_487; // 0x1e3 JumpB
	var_249_string = "head"; // 0x1e4 PushS
	UnlookAsync(var_249_string); // 0x1e5 Func
}


func_727(var_69_int)
{
	var_70_int = 0; var_71_int = 0; // 0x2d7 PushV
	var_72_string = "branch"; // 0x2d8 PushS
	GetVariable(var_72_string, var_71_int); // 0x2d9 Func
	var_73_int = 0; // 0x2db PushI
	var_74_bool = var_71_int == var_73_int; // 0x2dc Eq
	if(var_74_bool == 0) goto Label_737; // 0x2dd JumpB
	var_69_int = 1; // 0x2de MovI
	return 2; // 0x2df Return
	
Label_737:
	var_75_int = 1; // 0x2e1 PushI
	var_76_bool = var_71_int == var_75_int; // 0x2e2 Eq
	if(var_76_bool == 0) goto Label_742; // 0x2e3 JumpB
	var_69_int = 2; // 0x2e4 MovI
	return 2; // 0x2e5 Return
	
Label_742:
	var_69_int = 3; // 0x2e6 MovI
	return 2; // 0x2e7 Return
}


func_672()
{
	var_9_bool = 0; // 0x2a0 PushV
	func_752(var_9_bool); // 0x2a1 NEW_2
	if(var_9_bool == 0) goto Label_678; // 0x2a3 JumpB
	lshStopSpeech(); // 0x2a4 Func
	
Label_678:
	return 0; // 0x2a6 Return
}


func_546(var_89_bool)
{
	var_91_string = ""; var_92_int = 0; var_93_bool = 0; var_94_int = 0; var_95_string = ""; var_96_string = ""; var_97_int = 0; var_98_bool = 0; var_99_int = 0; var_100_string = ""; // 0x222 PushV
	var_96_string = "c"; // 0x223 MovS
	var_97_int = 0; // 0x224 MovI
	
Label_549:
	var_101_int = 1; // 0x225 PushI
	if(var_101_int == 0) goto Label_562; // 0x226 JumpB
	var_102_int = 1; // 0x227 PushI
	var_103_int = var_97_int + var_102_int; // 0x228 Add
	var_104_int = var_96_string + var_103_int; // 0x229 Add
	HasProperty(var_104_int, var_98_bool); // 0x22a ObjFunc
	var_105_bool = var_98_bool == 0; // 0x22c Not
	if(var_105_bool == 0) goto Label_559; // 0x22d JumpB
	goto Label_562; // 0x22e Jump
	
Label_562:
	var_106_bool = var_97_int == 0; // 0x232 Not
	if(var_106_bool == 0) goto Label_566; // 0x233 JumpB
	var_89_bool = 0; // 0x234 MovB
	return 10; // 0x235 Return
	
Label_566:
	var_99_int = 0; // 0x236 MovI
	var_107_int = 1; // 0x237 PushI
	var_108_bool = var_97_int > var_107_int; // 0x238 GT
	if(var_108_bool == 0) goto Label_572; // 0x239 JumpB
	irand(var_99_int, var_97_int); // 0x23a Func
	
Label_572:
	var_109_int = 1; // 0x23c PushI
	var_110_int = var_99_int + var_109_int; // 0x23d Add
	var_111_int = var_96_string + var_110_int; // 0x23e Add
	GetProperty(var_111_int, var_100_string); // 0x23f ObjFunc
	var_112_bool = 0; var_113_string = ""; // 0x241 PushV
	var_113_string = var_100_string; // 0x242 Mov
	func_657(var_112_bool, var_113_string); // 0x243 NEW_2
	var_89_bool = var_112_bool; // 0x244 Mov
	return 10; // 0x246 Return
	
Label_559:
	var_118_int = 1; // 0x22f PushI
	var_97_int = var_97_int + var_118_int; // 0x230 Add2
	goto Label_549; // 0x231 Jump
}


func_679(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x2a7 PushV
	self(var_11_object); // 0x2a8 Func
	var_9_object = var_11_object; // 0x2aa Mov
	return 2; // 0x2ab Return
}


func_744(var_66_int)
{
	var_66_int = 515543; // 0x2e8 MovI
	return 0; // 0x2e9 Return
}


func_169(var_2_object, var_192_string)
{
	var_193_bool = 0; // 0xaa PushV
	func_752(var_193_bool); // 0xab NEW_2
	var_194_bool = var_193_bool == 0; // 0xad Not
	if(var_194_bool == 0) goto Label_176; // 0xae JumpB
	return 0; // 0xaf Return
	
Label_176:
	var_195_bool = var_192_string == var_2_object; // 0xb0 Eq
	if(var_195_bool == 0) goto Label_179; // 0xb1 JumpB
	return 0; // 0xb2 Return
	
Label_179:
	var_196_string = ""; var_197_bool = 0; // 0xb3 PushV
	var_196_string = var_192_string; // 0xb4 Mov
	var_198_string = ""; // 0xb5 PushS
	var_199_bool = var_192_string == var_198_string; // 0xb6 Eq
	if(var_199_bool == 0) goto Label_186; // 0xb7 JumpB
	var_197_bool = 0; // 0xb8 MovB
	goto Label_187; // 0xb9 Jump
	
Label_187:
	func_642(var_196_string, var_197_bool); // 0xbb NEW_2
	var_2_object = var_192_string; // 0xbd TMov
	return 0; // 0xbe Return
	
Label_186:
	var_197_bool = 1; // 0xba MovB
}


func_488(var_78_bool, var_79_object)
{
	var_83_int = 0; var_84_int = 0; var_85_int = 0; var_86_int = 0; // 0x1e8 PushV
	var_87_string = "voice_common"; // 0x1e9 PushS
	GetVariable(var_87_string, var_85_int); // 0x1ea Func
	var_88_int = var_85_int; // 0x1ec Push
	if(var_88_int == 0) goto Label_526; // 0x1ed JumpB
	var_89_bool = 0; var_90_object = Obj(); // 0x1ee PushV
	var_90_object = var_79_object; // 0x1ef Mov
	func_546(var_90_object); // 0x1f0 NEW_2
	var_119_bool = var_89_bool == 0; // 0x1f2 Not
	if(var_119_bool == 0) goto Label_508; // 0x1f3 JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x1f4 PushV
	var_121_object = var_79_object; // 0x1f5 Mov
	func_583(var_121_object); // 0x1f6 NEW_2
	var_155_bool = var_120_bool == 0; // 0x1f8 Not
	if(var_155_bool == 0) goto Label_508; // 0x1f9 JumpB
	var_78_bool = 0; // 0x1fa MovB
	return 4; // 0x1fb Return
	
Label_508:
	var_156_int = 2; // 0x1fc PushI
	irand(var_86_int, var_156_int); // 0x1fd Func
	var_157_int = var_86_int; // 0x1ff Push
	if(var_157_int == 0) goto Label_521; // 0x200 JumpB
	var_158_string = "voice_common"; // 0x201 PushS
	var_159_int = 1; // 0x202 PushI
	var_160_int = var_85_int + var_159_int; // 0x203 Add
	var_161_int = 3; // 0x204 PushI
	var_162_int = var_160_int / var_161_int; // 0x205 Mod
	SetVariable(var_158_string, var_162_int); // 0x206 Func
	goto Label_525; // 0x208 Jump
	
Label_525:
	goto Label_544; // 0x20d Jump
	
Label_544:
	var_78_bool = 1; // 0x220 MovB
	return 4; // 0x221 Return
	
Label_521:
	var_163_string = "voice_common"; // 0x209 PushS
	var_164_int = 0; // 0x20a PushI
	SetVariable(var_163_string, var_164_int); // 0x20b Func
	
Label_526:
	var_165_bool = 0; var_166_object = Obj(); // 0x20e PushV
	var_166_object = var_79_object; // 0x20f Mov
	func_583(var_166_object); // 0x210 NEW_2
	var_167_bool = var_165_bool == 0; // 0x212 Not
	if(var_167_bool == 0) goto Label_540; // 0x213 JumpB
	var_168_bool = 0; var_169_object = Obj(); // 0x214 PushV
	var_169_object = var_79_object; // 0x215 Mov
	func_546(var_169_object); // 0x216 NEW_2
	var_170_bool = var_168_bool == 0; // 0x218 Not
	if(var_170_bool == 0) goto Label_540; // 0x219 JumpB
	var_78_bool = 0; // 0x21a MovB
	return 4; // 0x21b Return
	
Label_540:
	var_171_string = "voice_common"; // 0x21c PushS
	var_172_int = 1; // 0x21d PushI
	SetVariable(var_171_string, var_172_int); // 0x21e Func
}


func_746(var_65_int)
{
	var_65_int = 502868; // 0x2ea MovI
	return 0; // 0x2eb Return
}


func_748(var_67_string)
{
	var_67_string = "ui/NPC_Maria.png"; // 0x2ec MovS
	return 0; // 0x2ed Return
}


func_685(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x2ad PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x2ae Or
	var_49_float = sqrt(var_50_int); // 0x2af Sqrt2
	var_51_float = 0.0; // 0x2b0 PushF
	var_52_bool = var_49_float < var_51_float; // 0x2b1 LT
	if(var_52_bool == 0) goto Label_693; // 0x2b2 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x2b3 MovV
	return 2; // 0x2b4 Return
	
Label_693:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x2b5 Div2
	return 2; // 0x2b6 Return
}


func_750(var_68_string)
{
	var_68_string = "ui/NPC_Maria_b.png"; // 0x2ee MovS
	return 0; // 0x2ef Return
}


func_752(var_60_bool)
{
	var_60_bool = 1; // 0x2f0 MovB
	return 0; // 0x2f1 Return
}


func_626(var_218_string)
{
	var_219_bool = 0; var_220_float = 0; var_221_float = 0; var_222_bool = 0; var_223_float = 0; var_224_float = 0; // 0x272 PushV
	lshHasAnimation(var_222_bool, var_218_string); // 0x273 Func
	var_225_bool = var_222_bool; // 0x275 Push
	if(var_225_bool == 0) goto Label_637; // 0x276 JumpB
	lshGetAnimTimes(var_218_string, var_223_float, var_224_float); // 0x277 Func
	var_226_bool = 0; // 0x279 PushB
	lshPlayAnimation(var_223_float, var_224_float, var_226_bool); // 0x27a Func
	goto Label_641; // 0x27c Jump
	
Label_641:
	return 6; // 0x281 Return
	
Label_637:
	var_227_string = "Can't find lsh animation : "; // 0x27d PushS
	var_228_int = var_227_string + var_218_string; // 0x27e Add
	Trace(var_228_int); // 0x27f Func
}


func_695(var_182_int, var_183_string)
{
	var_184_int = 0; var_185_int = 0; // 0x2b7 PushV
	GetVariable(var_183_string, var_185_int); // 0x2b8 Func
	var_182_int = var_185_int; // 0x2ba Mov
	return 2; // 0x2bb Return
}


func_700(var_133_int)
{
	var_134_float = 0; var_135_float = 0; // 0x2bc PushV
	GetGameTime(var_135_float); // 0x2bd Func
	var_136_int = 1; // 0x2bf PushI
	var_137_int = 0; // 0x2c0 PushV
	var_138_int = 24; // 0x2c1 PushI
	var_137_int = var_135_float / var_135_float; // 0x2c2 Div2
	var_133_int = var_136_int + var_137_int; // 0x2c3 Add2
	return 2; // 0x2c4 Return
}


