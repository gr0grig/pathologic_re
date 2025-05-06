task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xc0 PushI
	if(var_8_int == 0) goto Label_344; // 0xc1 JumpB
	func_674(); // 0xc3 NEW_2
	var_10_int = 34774; // 0xc5 PushI
	var_11_bool = var_6_int == var_10_int; // 0xc6 Eq
	if(var_11_bool == 0) goto Label_250; // 0xc7 JumpB
	var_12_bool = 0; var_13_object = Obj(); // 0xc8 PushV
	var_13_object = var_1_object; // 0xc9 MovT
	func_717(var_13_object); // 0xca NEW_2
	if(var_12_bool == 0) goto Label_230; // 0xcc JumpB
	var_20_object = Obj(); var_21_object = Obj(); // 0xcd PushV
	var_20_object = var_1_object; // 0xce MovT
	var_21_object = var_0_object; // 0xcf MovT
	func_711(); // 0xd0 NEW_2
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
	func_754(var_90_bool); // 0x14e NEW_2
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
	func_681(var_14_object); // 0x177 NEW_2
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
	func_681(var_9_object); // 0x18c NEW_2
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
	var_65_bool = var_18_bool == 0; // 0x7 Not
	if(var_65_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_66_int = 0; // 0xd PushV
	func_748(var_66_int); // 0xe NEW_2
	SetNPCName(var_66_int); // 0x10 ObjFunc
	var_67_int = 0; // 0x12 PushV
	func_746(var_67_int); // 0x13 NEW_2
	SetNPCDescription(var_67_int); // 0x15 ObjFunc
	var_68_string = ""; // 0x17 PushV
	func_750(var_68_string); // 0x18 NEW_2
	SetPhoto(var_68_string); // 0x1a ObjFunc
	var_69_string = ""; // 0x1c PushV
	func_752(var_69_string); // 0x1d NEW_2
	SetPhoto2(var_69_string); // 0x1f ObjFunc
	var_70_int = 0; // 0x21 PushV
	func_729(var_70_int); // 0x22 NEW_2
	SetPlayerName(var_70_int); // 0x24 ObjFunc
	var_16_int = -1; // 0x26 MovI
	IsOverrideActive(var_15_bool); // 0x27 Func
	var_78_bool = var_15_bool; // 0x29 Push
	if(var_78_bool == 0) goto Label_45; // 0x2a JumpB
	var_7_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_14_object); // 0x2d Func
	var_79_bool = 0; var_80_object = Obj(); // 0x2f PushV
	var_81_object = Obj(); // 0x30 PushV
	func_681(var_81_object); // 0x31 NEW_2
	var_80_object = var_81_object; // 0x32 Mov
	func_490(var_79_bool, var_80_object); // 0x34 NEW_2
	var_174_object = Obj(); var_175_object = Obj(); // 0x36 PushV
	var_174_object = var_8_object; // 0x37 Mov
	var_175_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_243_bool = var_17_bool == 0; // 0x3f Not
	if(var_243_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_244_object = Obj(); // 0x46 PushV
	var_244_object = var_8_object; // 0x47 Mov
	func_472(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_644(var_197_string, var_198_bool)
{
	var_201_bool = 0; var_202_float = 0; var_203_float = 0; var_204_bool = 0; var_205_float = 0; var_206_float = 0; // 0x284 PushV
	lshHasAnimation(var_204_bool, var_197_string); // 0x285 Func
	var_207_bool = var_204_bool; // 0x287 Push
	if(var_207_bool == 0) goto Label_654; // 0x288 JumpB
	lshGetAnimTimes(var_197_string, var_205_float, var_206_float); // 0x289 Func
	lshPlayAnimation(var_205_float, var_206_float, var_198_bool); // 0x28b Func
	goto Label_658; // 0x28d Jump
	
Label_658:
	return 6; // 0x292 Return
	
Label_654:
	var_208_string = "Can't find lsh animation : "; // 0x28e PushS
	var_209_int = var_208_string + var_197_string; // 0x28f Add
	Trace(var_209_int); // 0x290 Func
}


func_711()
{
	var_191_string = "ood7MariaPetr1"; // 0x2c8 PushS
	var_192_int = 1; // 0x2c9 PushI
	SetVariable(var_191_string, var_192_int); // 0x2ca Func
	return 0; // 0x2cc Return
}


func_585(var_121_bool)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = ""; // 0x249 PushV
	var_133_string = "d"; // 0x24a PushS
	var_134_int = 0; // 0x24b PushV
	func_702(var_134_int); // 0x24c NEW_2
	var_140_int = var_133_string + var_134_int; // 0x24e Add
	var_141_string = "m"; // 0x24f PushS
	var_128_string = var_140_int + var_141_string; // 0x250 Add2
	var_129_int = 0; // 0x251 MovI
	
Label_594:
	var_142_int = 1; // 0x252 PushI
	if(var_142_int == 0) goto Label_607; // 0x253 JumpB
	var_143_int = 1; // 0x254 PushI
	var_144_int = var_129_int + var_143_int; // 0x255 Add
	var_145_int = var_128_string + var_144_int; // 0x256 Add
	HasProperty(var_145_int, var_130_bool); // 0x257 ObjFunc
	var_146_bool = var_130_bool == 0; // 0x259 Not
	if(var_146_bool == 0) goto Label_604; // 0x25a JumpB
	goto Label_607; // 0x25b Jump
	
Label_607:
	var_147_bool = var_129_int == 0; // 0x25f Not
	if(var_147_bool == 0) goto Label_611; // 0x260 JumpB
	var_121_bool = 0; // 0x261 MovB
	return 10; // 0x262 Return
	
Label_611:
	var_131_int = 0; // 0x263 MovI
	var_148_int = 1; // 0x264 PushI
	var_149_bool = var_129_int > var_148_int; // 0x265 GT
	if(var_149_bool == 0) goto Label_617; // 0x266 JumpB
	irand(var_131_int, var_129_int); // 0x267 Func
	
Label_617:
	var_150_int = 1; // 0x269 PushI
	var_151_int = var_131_int + var_150_int; // 0x26a Add
	var_152_int = var_128_string + var_151_int; // 0x26b Add
	GetProperty(var_152_int, var_132_string); // 0x26c ObjFunc
	var_153_bool = 0; var_154_string = ""; // 0x26e PushV
	var_154_string = var_132_string; // 0x26f Mov
	func_659(var_153_bool, var_154_string); // 0x270 NEW_2
	var_121_bool = var_153_bool; // 0x271 Mov
	return 10; // 0x273 Return
	
Label_604:
	var_155_int = 1; // 0x25c PushI
	var_129_int = var_129_int + var_155_int; // 0x25d Add2
	goto Label_594; // 0x25e Jump
}


func_717(var_181_bool)
{
	var_183_int = 0; var_184_string = ""; // 0x2ce PushV
	var_184_string = "ood7MariaPetr1"; // 0x2cf MovS
	func_697(var_183_int, var_184_string); // 0x2d0 NEW_2
	var_187_int = 0; // 0x2d2 PushI
	var_188_bool = var_183_int == var_187_int; // 0x2d3 Eq
	if(var_188_bool == 0) goto Label_727; // 0x2d4 JumpB
	var_181_bool = 1; // 0x2d5 MovB
	return 0; // 0x2d6 Return
	
Label_727:
	var_181_bool = 0; // 0x2d7 MovB
	return 0; // 0x2d8 Return
}


func_401(var_8_bool)
{
	var_8_bool = 1; // 0x191 MovB
	return 0; // 0x192 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_174_object, var_175_object)
{
	var_0_object = var_175_object; // 0x52 TMov
	var_1_object = var_174_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_180_int = 1; // 0x55 PushI
	if(var_180_int == 0) goto Label_139; // 0x56 JumpB
	var_181_bool = 0; var_182_object = Obj(); // 0x57 PushV
	var_182_object = var_1_object; // 0x58 MovT
	func_717(var_182_object); // 0x59 NEW_2
	if(var_181_bool == 0) goto Label_117; // 0x5b JumpB
	var_189_object = Obj(); var_190_object = Obj(); // 0x5c PushV
	var_189_object = var_1_object; // 0x5d MovT
	var_190_object = var_0_object; // 0x5e MovT
	func_711(); // 0x5f NEW_2
	var_193_string = ""; // 0x61 PushV
	var_193_string = "Rage"; // 0x62 MovS
	func_169(var_175_object, var_193_string); // 0x63 NEW_2
	var_210_int = 533260; // 0x65 PushI
	SetMessage(var_210_int); // 0x66 TObjFunc
	ClearReplies(); // 0x68 TObjFunc
	var_211_int = 533261; // 0x6a PushI
	var_212_int = 34776; // 0x6b PushI
	var_213_int = 34775; // 0x6c PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x6d TObjFunc
	var_214_int = 535781; // 0x6f PushI
	var_215_int = 34776; // 0x70 PushI
	var_216_int = 37465; // 0x71 PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x72 TObjFunc
	goto Label_139; // 0x74 Jump
	
Label_139:
	var_217_bool = 0; // 0x8b PushV
	func_754(var_217_bool); // 0x8c NEW_2
	if(var_217_bool == 0) goto Label_154; // 0x8e JumpB
	
Label_143:
	lshWaitForAnimEnd(); // 0x8f Func
	var_218_string = var_3_string; // 0x91 PushT
	if(var_218_string == 0) goto Label_148; // 0x92 JumpB
	goto Label_153; // 0x93 Jump
	
Label_153:
	goto Label_168; // 0x99 Jump
	
Label_168:
	return 0; // 0xa8 Return
	
Label_148:
	var_219_string = ""; // 0x94 PushV
	var_219_string = var_2_object; // 0x95 MovT
	func_628(var_219_string); // 0x96 NEW_2
	goto Label_143; // 0x98 Jump
	
Label_154:
	var_230_string = "all"; // 0x9a PushS
	var_231_string = "idle"; // 0x9b PushS
	PlayAnimation(var_230_string, var_231_string); // 0x9c Func
	
Label_158:
	WaitForAnimEnd(); // 0x9e Func
	var_232_string = var_3_string; // 0xa0 PushT
	if(var_232_string == 0) goto Label_163; // 0xa1 JumpB
	goto Label_168; // 0xa2 Jump
	
Label_163:
	var_233_string = "all"; // 0xa3 PushS
	var_234_string = "idle"; // 0xa4 PushS
	PlayAnimation(var_233_string, var_234_string); // 0xa5 Func
	goto Label_158; // 0xa7 Jump
	
Label_117:
	var_235_string = ""; // 0x75 PushV
	var_235_string = "Angry"; // 0x76 MovS
	func_169(var_175_object, var_235_string); // 0x77 NEW_2
	var_236_int = 533258; // 0x79 PushI
	SetMessage(var_236_int); // 0x7a TObjFunc
	ClearReplies(); // 0x7c TObjFunc
	var_237_int = 533259; // 0x7e PushI
	var_238_int = -1; // 0x7f PushI
	var_239_int = 34773; // 0x80 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x81 TObjFunc
	var_240_int = 535778; // 0x83 PushI
	var_241_int = -1; // 0x84 PushI
	var_242_int = 37462; // 0x85 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x86 TObjFunc
	goto Label_139; // 0x88 Jump
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
	func_687(var_45_cvector, var_46_cvector); // 0x1ae NEW_2
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
	var_58_bool = 1; // 0x1be PushB
	CameraTransit(var_36_cvector, var_34_cvector, var_58_bool); // 0x1bf Func
	var_59_float = GetByIndex(var_35_cvector, 0); // 0x1c1 PushE
	var_60_float = GetByIndex(var_35_cvector, 2); // 0x1c2 PushE
	Rotate(var_59_float, var_60_float); // 0x1c3 Func
	var_61_bool = 0; // 0x1c5 PushV
	func_754(var_61_bool); // 0x1c6 NEW_2
	if(var_61_bool == 0) goto Label_458; // 0x1c8 JumpB
	goto Label_466; // 0x1c9 Jump
	
Label_466:
	CameraWaitForPlayFinish(); // 0x1d2 Func
	ResumeWorld(); // 0x1d4 Func
	var_18_bool = 1; // 0x1d6 MovB
	return 18; // 0x1d7 Return
	
Label_458:
	var_62_string = "head"; // 0x1ca PushS
	HasAnimationTrack(var_38_bool, var_62_string); // 0x1cb Func
	var_63_bool = var_38_bool; // 0x1cd Push
	if(var_63_bool == 0) goto Label_466; // 0x1ce JumpB
	var_64_string = "head"; // 0x1cf PushS
	LookAsyncCamera(var_64_string); // 0x1d0 Func
}


func_659(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0; // 0x293 PushV
	var_117_bool = 0; // 0x294 PushV
	func_754(var_117_bool); // 0x295 NEW_2
	if(var_117_bool == 0) goto Label_672; // 0x297 JumpB
	lshHasSpeech(var_116_bool, var_114_string); // 0x298 Func
	var_118_bool = var_116_bool; // 0x29a Push
	if(var_118_bool == 0) goto Label_672; // 0x29b JumpB
	lshPlaySpeech(var_114_string); // 0x29c Func
	var_113_bool = 1; // 0x29e MovB
	return 2; // 0x29f Return
	
Label_672:
	var_113_bool = 0; // 0x2a0 MovB
	return 2; // 0x2a1 Return
}


func_472()
{
	var_245_bool = 0; var_246_bool = 0; // 0x1d8 PushV
	var_247_bool = 1; // 0x1d9 PushB
	CameraSwitchToNormal(var_247_bool); // 0x1da Func
	var_248_bool = 0; // 0x1dc PushV
	func_754(var_248_bool); // 0x1dd NEW_2
	if(var_248_bool == 0) goto Label_481; // 0x1df JumpB
	goto Label_489; // 0x1e0 Jump
	
Label_489:
	return 2; // 0x1e9 Return
	
Label_481:
	var_249_string = "head"; // 0x1e1 PushS
	HasAnimationTrack(var_246_bool, var_249_string); // 0x1e2 Func
	var_250_bool = var_246_bool; // 0x1e4 Push
	if(var_250_bool == 0) goto Label_489; // 0x1e5 JumpB
	var_251_string = "head"; // 0x1e6 PushS
	UnlookAsync(var_251_string); // 0x1e7 Func
}


func_729(var_70_int)
{
	var_71_int = 0; var_72_int = 0; // 0x2d9 PushV
	var_73_string = "branch"; // 0x2da PushS
	GetVariable(var_73_string, var_72_int); // 0x2db Func
	var_74_int = 0; // 0x2dd PushI
	var_75_bool = var_72_int == var_74_int; // 0x2de Eq
	if(var_75_bool == 0) goto Label_739; // 0x2df JumpB
	var_70_int = 1; // 0x2e0 MovI
	return 2; // 0x2e1 Return
	
Label_739:
	var_76_int = 1; // 0x2e3 PushI
	var_77_bool = var_72_int == var_76_int; // 0x2e4 Eq
	if(var_77_bool == 0) goto Label_744; // 0x2e5 JumpB
	var_70_int = 2; // 0x2e6 MovI
	return 2; // 0x2e7 Return
	
Label_744:
	var_70_int = 3; // 0x2e8 MovI
	return 2; // 0x2e9 Return
}


func_674()
{
	var_9_bool = 0; // 0x2a2 PushV
	func_754(var_9_bool); // 0x2a3 NEW_2
	if(var_9_bool == 0) goto Label_680; // 0x2a5 JumpB
	lshStopSpeech(); // 0x2a6 Func
	
Label_680:
	return 0; // 0x2a8 Return
}


func_548(var_90_bool)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = ""; // 0x224 PushV
	var_97_string = "c"; // 0x225 MovS
	var_98_int = 0; // 0x226 MovI
	
Label_551:
	var_102_int = 1; // 0x227 PushI
	if(var_102_int == 0) goto Label_564; // 0x228 JumpB
	var_103_int = 1; // 0x229 PushI
	var_104_int = var_98_int + var_103_int; // 0x22a Add
	var_105_int = var_97_string + var_104_int; // 0x22b Add
	HasProperty(var_105_int, var_99_bool); // 0x22c ObjFunc
	var_106_bool = var_99_bool == 0; // 0x22e Not
	if(var_106_bool == 0) goto Label_561; // 0x22f JumpB
	goto Label_564; // 0x230 Jump
	
Label_564:
	var_107_bool = var_98_int == 0; // 0x234 Not
	if(var_107_bool == 0) goto Label_568; // 0x235 JumpB
	var_90_bool = 0; // 0x236 MovB
	return 10; // 0x237 Return
	
Label_568:
	var_100_int = 0; // 0x238 MovI
	var_108_int = 1; // 0x239 PushI
	var_109_bool = var_98_int > var_108_int; // 0x23a GT
	if(var_109_bool == 0) goto Label_574; // 0x23b JumpB
	irand(var_100_int, var_98_int); // 0x23c Func
	
Label_574:
	var_110_int = 1; // 0x23e PushI
	var_111_int = var_100_int + var_110_int; // 0x23f Add
	var_112_int = var_97_string + var_111_int; // 0x240 Add
	GetProperty(var_112_int, var_101_string); // 0x241 ObjFunc
	var_113_bool = 0; var_114_string = ""; // 0x243 PushV
	var_114_string = var_101_string; // 0x244 Mov
	func_659(var_113_bool, var_114_string); // 0x245 NEW_2
	var_90_bool = var_113_bool; // 0x246 Mov
	return 10; // 0x248 Return
	
Label_561:
	var_119_int = 1; // 0x231 PushI
	var_98_int = var_98_int + var_119_int; // 0x232 Add2
	goto Label_551; // 0x233 Jump
}


func_681(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x2a9 PushV
	self(var_11_object); // 0x2aa Func
	var_9_object = var_11_object; // 0x2ac Mov
	return 2; // 0x2ad Return
}


func_169(var_2_object, var_193_string)
{
	var_194_bool = 0; // 0xaa PushV
	func_754(var_194_bool); // 0xab NEW_2
	var_195_bool = var_194_bool == 0; // 0xad Not
	if(var_195_bool == 0) goto Label_176; // 0xae JumpB
	return 0; // 0xaf Return
	
Label_176:
	var_196_bool = var_193_string == var_2_object; // 0xb0 Eq
	if(var_196_bool == 0) goto Label_179; // 0xb1 JumpB
	return 0; // 0xb2 Return
	
Label_179:
	var_197_string = ""; var_198_bool = 0; // 0xb3 PushV
	var_197_string = var_193_string; // 0xb4 Mov
	var_199_string = ""; // 0xb5 PushS
	var_200_bool = var_193_string == var_199_string; // 0xb6 Eq
	if(var_200_bool == 0) goto Label_186; // 0xb7 JumpB
	var_198_bool = 0; // 0xb8 MovB
	goto Label_187; // 0xb9 Jump
	
Label_187:
	func_644(var_197_string, var_198_bool); // 0xbb NEW_2
	var_2_object = var_193_string; // 0xbd TMov
	return 0; // 0xbe Return
	
Label_186:
	var_198_bool = 1; // 0xba MovB
}


func_746(var_67_int)
{
	var_67_int = 515543; // 0x2ea MovI
	return 0; // 0x2eb Return
}


func_490(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0; // 0x1ea PushV
	var_88_string = "voice_common"; // 0x1eb PushS
	GetVariable(var_88_string, var_86_int); // 0x1ec Func
	var_89_int = var_86_int; // 0x1ee Push
	if(var_89_int == 0) goto Label_528; // 0x1ef JumpB
	var_90_bool = 0; var_91_object = Obj(); // 0x1f0 PushV
	var_91_object = var_80_object; // 0x1f1 Mov
	func_548(var_91_object); // 0x1f2 NEW_2
	var_120_bool = var_90_bool == 0; // 0x1f4 Not
	if(var_120_bool == 0) goto Label_510; // 0x1f5 JumpB
	var_121_bool = 0; var_122_object = Obj(); // 0x1f6 PushV
	var_122_object = var_80_object; // 0x1f7 Mov
	func_585(var_122_object); // 0x1f8 NEW_2
	var_156_bool = var_121_bool == 0; // 0x1fa Not
	if(var_156_bool == 0) goto Label_510; // 0x1fb JumpB
	var_79_bool = 0; // 0x1fc MovB
	return 4; // 0x1fd Return
	
Label_510:
	var_157_int = 2; // 0x1fe PushI
	irand(var_87_int, var_157_int); // 0x1ff Func
	var_158_int = var_87_int; // 0x201 Push
	if(var_158_int == 0) goto Label_523; // 0x202 JumpB
	var_159_string = "voice_common"; // 0x203 PushS
	var_160_int = 1; // 0x204 PushI
	var_161_int = var_86_int + var_160_int; // 0x205 Add
	var_162_int = 3; // 0x206 PushI
	var_163_int = var_161_int / var_162_int; // 0x207 Mod
	SetVariable(var_159_string, var_163_int); // 0x208 Func
	goto Label_527; // 0x20a Jump
	
Label_527:
	goto Label_546; // 0x20f Jump
	
Label_546:
	var_79_bool = 1; // 0x222 MovB
	return 4; // 0x223 Return
	
Label_523:
	var_164_string = "voice_common"; // 0x20b PushS
	var_165_int = 0; // 0x20c PushI
	SetVariable(var_164_string, var_165_int); // 0x20d Func
	
Label_528:
	var_166_bool = 0; var_167_object = Obj(); // 0x210 PushV
	var_167_object = var_80_object; // 0x211 Mov
	func_585(var_167_object); // 0x212 NEW_2
	var_168_bool = var_166_bool == 0; // 0x214 Not
	if(var_168_bool == 0) goto Label_542; // 0x215 JumpB
	var_169_bool = 0; var_170_object = Obj(); // 0x216 PushV
	var_170_object = var_80_object; // 0x217 Mov
	func_548(var_170_object); // 0x218 NEW_2
	var_171_bool = var_169_bool == 0; // 0x21a Not
	if(var_171_bool == 0) goto Label_542; // 0x21b JumpB
	var_79_bool = 0; // 0x21c MovB
	return 4; // 0x21d Return
	
Label_542:
	var_172_string = "voice_common"; // 0x21e PushS
	var_173_int = 1; // 0x21f PushI
	SetVariable(var_172_string, var_173_int); // 0x220 Func
}


func_748(var_66_int)
{
	var_66_int = 502868; // 0x2ec MovI
	return 0; // 0x2ed Return
}


func_750(var_68_string)
{
	var_68_string = "ui/NPC_Maria.png"; // 0x2ee MovS
	return 0; // 0x2ef Return
}


func_687(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x2af PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x2b0 Or
	var_49_float = sqrt(var_50_int); // 0x2b1 Sqrt2
	var_51_float = 0.0; // 0x2b2 PushF
	var_52_bool = var_49_float < var_51_float; // 0x2b3 LT
	if(var_52_bool == 0) goto Label_695; // 0x2b4 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x2b5 MovV
	return 2; // 0x2b6 Return
	
Label_695:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x2b7 Div2
	return 2; // 0x2b8 Return
}


func_752(var_69_string)
{
	var_69_string = "ui/NPC_Maria_b.png"; // 0x2f0 MovS
	return 0; // 0x2f1 Return
}


func_754(var_61_bool)
{
	var_61_bool = 1; // 0x2f2 MovB
	return 0; // 0x2f3 Return
}


func_628(var_219_string)
{
	var_220_bool = 0; var_221_float = 0; var_222_float = 0; var_223_bool = 0; var_224_float = 0; var_225_float = 0; // 0x274 PushV
	lshHasAnimation(var_223_bool, var_219_string); // 0x275 Func
	var_226_bool = var_223_bool; // 0x277 Push
	if(var_226_bool == 0) goto Label_639; // 0x278 JumpB
	lshGetAnimTimes(var_219_string, var_224_float, var_225_float); // 0x279 Func
	var_227_bool = 0; // 0x27b PushB
	lshPlayAnimation(var_224_float, var_225_float, var_227_bool); // 0x27c Func
	goto Label_643; // 0x27e Jump
	
Label_643:
	return 6; // 0x283 Return
	
Label_639:
	var_228_string = "Can't find lsh animation : "; // 0x27f PushS
	var_229_int = var_228_string + var_219_string; // 0x280 Add
	Trace(var_229_int); // 0x281 Func
}


func_697(var_183_int, var_184_string)
{
	var_185_int = 0; var_186_int = 0; // 0x2b9 PushV
	GetVariable(var_184_string, var_186_int); // 0x2ba Func
	var_183_int = var_186_int; // 0x2bc Mov
	return 2; // 0x2bd Return
}


func_702(var_134_int)
{
	var_135_float = 0; var_136_float = 0; // 0x2be PushV
	GetGameTime(var_136_float); // 0x2bf Func
	var_137_int = 1; // 0x2c1 PushI
	var_138_int = 0; // 0x2c2 PushV
	var_139_int = 24; // 0x2c3 PushI
	var_138_int = var_136_float / var_136_float; // 0x2c4 Div2
	var_134_int = var_137_int + var_138_int; // 0x2c5 Add2
	return 2; // 0x2c6 Return
}


