task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xaf PushI
	if(var_14_int == 0) goto Label_389; // 0xb0 JumpB
	func_783(); // 0xb2 NEW_2
	var_16_int = 16264; // 0xb4 PushI
	var_17_bool = var_13_bool == var_16_int; // 0xb5 Eq
	if(var_17_bool == 0) goto Label_188; // 0xb6 JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xb7 PushV
	var_18_object = var_1_object; // 0xb8 MovT
	var_19_object = var_0_object; // 0xb9 MovT
	func_849(); // 0xba NEW_2
	
Label_188:
	var_22_int = 16277; // 0xbc PushI
	var_23_bool = var_13_bool == var_22_int; // 0xbd Eq
	if(var_23_bool == 0) goto Label_196; // 0xbe JumpB
	var_24_object = Obj(); var_25_object = Obj(); // 0xbf PushV
	var_24_object = var_1_object; // 0xc0 MovT
	var_25_object = var_0_object; // 0xc1 MovT
	func_811(); // 0xc2 NEW_2
	
Label_196:
	var_28_int = 16263; // 0xc4 PushI
	var_29_bool = var_12_bool == var_28_int; // 0xc5 Eq
	if(var_29_bool == 0) goto Label_239; // 0xc6 JumpB
	var_30_object = Obj(); var_31_object = Obj(); // 0xc7 PushV
	var_30_object = var_1_object; // 0xc8 MovT
	var_31_object = var_0_object; // 0xc9 MovT
	func_817(); // 0xca NEW_2
	var_77_string = ""; // 0xcc PushV
	var_77_string = "Neutral"; // 0xcd MovS
	func_152(var_13_bool, var_77_string); // 0xce NEW_2
	var_94_int = 515005; // 0xd0 PushI
	SetMessage(var_94_int); // 0xd1 TObjFunc
	ClearReplies(); // 0xd3 TObjFunc
	var_95_bool = 0; var_96_object = Obj(); // 0xd5 PushV
	var_96_object = var_1_object; // 0xd6 MovT
	func_867(var_96_object); // 0xd7 NEW_2
	if(var_95_bool == 0) goto Label_223; // 0xd9 JumpB
	var_101_int = 515006; // 0xda PushI
	var_102_int = 42522; // 0xdb PushI
	var_103_int = 16264; // 0xdc PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0xdd TObjFunc
	
Label_223:
	var_104_bool = 0; var_105_object = Obj(); // 0xdf PushV
	var_105_object = var_1_object; // 0xe0 MovT
	func_855(var_105_object); // 0xe1 NEW_2
	if(var_104_bool == 0) goto Label_233; // 0xe3 JumpB
	var_110_int = 515018; // 0xe4 PushI
	var_111_int = 16278; // 0xe5 PushI
	var_112_int = 16277; // 0xe6 PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0xe7 TObjFunc
	
Label_233:
	var_113_int = 515017; // 0xe9 PushI
	var_114_int = -1; // 0xea PushI
	var_115_int = 16276; // 0xeb PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0xec TObjFunc
	return 0; // 0xee Return
	
Label_239:
	var_116_int = 16278; // 0xef PushI
	var_117_bool = var_12_bool == var_116_int; // 0xf0 Eq
	if(var_117_bool == 0) goto Label_262; // 0xf1 JumpB
	var_118_string = ""; // 0xf2 PushV
	var_118_string = "Neutral"; // 0xf3 MovS
	func_152(var_13_bool, var_118_string); // 0xf4 NEW_2
	var_119_int = 515019; // 0xf6 PushI
	SetMessage(var_119_int); // 0xf7 TObjFunc
	ClearReplies(); // 0xf9 TObjFunc
	var_120_int = 515020; // 0xfb PushI
	var_121_int = -1; // 0xfc PushI
	var_122_int = 16279; // 0xfd PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0xfe TObjFunc
	var_123_int = 515021; // 0x100 PushI
	var_124_int = -1; // 0x101 PushI
	var_125_int = 16280; // 0x102 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x103 TObjFunc
	return 0; // 0x105 Return
	
Label_262:
	var_126_int = 42522; // 0x106 PushI
	var_127_bool = var_12_bool == var_126_int; // 0x107 Eq
	if(var_127_bool == 0) goto Label_285; // 0x108 JumpB
	var_128_string = ""; // 0x109 PushV
	var_128_string = "Neutral"; // 0x10a MovS
	func_152(var_13_bool, var_128_string); // 0x10b NEW_2
	var_129_int = 540515; // 0x10d PushI
	SetMessage(var_129_int); // 0x10e TObjFunc
	ClearReplies(); // 0x110 TObjFunc
	var_130_int = 540516; // 0x112 PushI
	var_131_int = 16265; // 0x113 PushI
	var_132_int = 42523; // 0x114 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x115 TObjFunc
	var_133_int = 540517; // 0x117 PushI
	var_134_int = 42525; // 0x118 PushI
	var_135_int = 42524; // 0x119 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x11a TObjFunc
	return 0; // 0x11c Return
	
Label_285:
	var_136_int = 42525; // 0x11d PushI
	var_137_bool = var_12_bool == var_136_int; // 0x11e Eq
	if(var_137_bool == 0) goto Label_303; // 0x11f JumpB
	var_138_string = ""; // 0x120 PushV
	var_138_string = "Neutral"; // 0x121 MovS
	func_152(var_13_bool, var_138_string); // 0x122 NEW_2
	var_139_int = 540518; // 0x124 PushI
	SetMessage(var_139_int); // 0x125 TObjFunc
	ClearReplies(); // 0x127 TObjFunc
	var_140_int = 540519; // 0x129 PushI
	var_141_int = -1; // 0x12a PushI
	var_142_int = 42526; // 0x12b PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x12c TObjFunc
	return 0; // 0x12e Return
	
Label_303:
	var_143_int = 16265; // 0x12f PushI
	var_144_bool = var_12_bool == var_143_int; // 0x130 Eq
	if(var_144_bool == 0) goto Label_321; // 0x131 JumpB
	var_145_string = ""; // 0x132 PushV
	var_145_string = "Neutral"; // 0x133 MovS
	func_152(var_13_bool, var_145_string); // 0x134 NEW_2
	var_146_int = 515007; // 0x136 PushI
	SetMessage(var_146_int); // 0x137 TObjFunc
	ClearReplies(); // 0x139 TObjFunc
	var_147_int = 515008; // 0x13b PushI
	var_148_int = 16267; // 0x13c PushI
	var_149_int = 16266; // 0x13d PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x13e TObjFunc
	return 0; // 0x140 Return
	
Label_321:
	var_150_int = 16267; // 0x141 PushI
	var_151_bool = var_12_bool == var_150_int; // 0x142 Eq
	if(var_151_bool == 0) goto Label_354; // 0x143 JumpB
	var_152_string = ""; // 0x144 PushV
	var_152_string = "Neutral"; // 0x145 MovS
	func_152(var_13_bool, var_152_string); // 0x146 NEW_2
	var_153_int = 515009; // 0x148 PushI
	SetMessage(var_153_int); // 0x149 TObjFunc
	ClearReplies(); // 0x14b TObjFunc
	var_154_int = 515010; // 0x14d PushI
	var_155_int = -1; // 0x14e PushI
	var_156_int = 16268; // 0x14f PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x150 TObjFunc
	var_157_int = 515011; // 0x152 PushI
	var_158_int = -1; // 0x153 PushI
	var_159_int = 16269; // 0x154 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x155 TObjFunc
	var_160_int = 515012; // 0x157 PushI
	var_161_int = 16271; // 0x158 PushI
	var_162_int = 16270; // 0x159 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x15a TObjFunc
	var_163_int = 515016; // 0x15c PushI
	var_164_int = 16271; // 0x15d PushI
	var_165_int = 16274; // 0x15e PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x15f TObjFunc
	return 0; // 0x161 Return
	
Label_354:
	var_166_int = 16271; // 0x162 PushI
	var_167_bool = var_12_bool == var_166_int; // 0x163 Eq
	if(var_167_bool == 0) goto Label_377; // 0x164 JumpB
	var_168_string = ""; // 0x165 PushV
	var_168_string = "Neutral"; // 0x166 MovS
	func_152(var_13_bool, var_168_string); // 0x167 NEW_2
	var_169_int = 515013; // 0x169 PushI
	SetMessage(var_169_int); // 0x16a TObjFunc
	ClearReplies(); // 0x16c TObjFunc
	var_170_int = 515014; // 0x16e PushI
	var_171_int = -1; // 0x16f PushI
	var_172_int = 16272; // 0x170 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x171 TObjFunc
	var_173_int = 515015; // 0x173 PushI
	var_174_int = -1; // 0x174 PushI
	var_175_int = 16273; // 0x175 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x176 TObjFunc
	return 0; // 0x178 Return
	
Label_377:
	var_3_string = 1; // 0x179 TMovB
	var_176_bool = 0; // 0x17a PushV
	func_975(var_176_bool); // 0x17b NEW_2
	if(var_176_bool == 0) goto Label_385; // 0x17d JumpB
	lshStopAnimation(); // 0x17e Func
	goto Label_387; // 0x180 Jump
	
Label_387:
	return 0; // 0x183 Return
	
Label_385:
	StopAnimation(); // 0x181 Func
	
Label_389:
	return 0; // 0x185 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_541(var_11_bool, var_12_object); // 0x18e NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0x190 PushV
	var_17_object = var_12_object; // 0x191 Mov
	TaskCall(0); // 0x192 TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0x193 NEW_2
	TaskReturn(); // 0x194 TaskReturn
	return 0; // 0x196 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "cleanup"; // 0x1be PushS
	var_14_bool = var_12_string == var_13_string; // 0x1bf Eq
	if(var_14_bool == 0) goto Label_452; // 0x1c0 JumpB
	func_425(var_12_string); // 0x1c2 NEW_2
	
Label_452:
	return 0; // 0x1c4 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x1c5 PushT
	if(var_12_int == 0) goto Label_458; // 0x1c6 JumpB
	func_541(var_10_bool, var_11_bool); // 0x1c8 NEW_2
	
Label_458:
	var_16_bool = 0; // 0x1ca PushV
	var_16_bool = 0; // 0x1cb MovB
	var_17_int = var_5_int; // 0x1cc PushT
	if(var_17_int == 0) goto Label_467; // 0x1cd JumpB
	var_18_bool = 0; // 0x1ce PushV
	func_474(var_18_bool); // 0x1cf NEW_2
	if(var_18_bool == 0) goto Label_467; // 0x1d1 JumpB
	var_16_bool = 1; // 0x1d2 MovB
	
Label_467:
	if(var_16_bool == 0) goto Label_473; // 0x1d3 JumpB
	var_19_object = Obj(); // 0x1d4 PushV
	func_790(var_19_object); // 0x1d5 NEW_2
	RemoveActor(var_19_object); // 0x1d7 Func
	
Label_473:
	return 0; // 0x1d9 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x207 PushI
	var_14_bool = var_12_int == var_13_int; // 0x208 Eq
	if(var_14_bool == 0) goto Label_540; // 0x209 JumpB
	var_15_bool = 0; // 0x20a PushV
	func_503(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x20b NEW_2
	if(var_15_bool == 0) goto Label_534; // 0x20d JumpB
	var_28_bool = var_2_object == 0; // 0x20e Not
	if(var_28_bool == 0) goto Label_533; // 0x20f JumpB
	var_29_object = Obj(); // 0x210 PushV
	var_29_object = var_4_bool; // 0x211 MovT
	func_772(var_29_object); // 0x212 NEW_2
	var_2_object = 1; // 0x214 TMovB
	
Label_533:
	goto Label_540; // 0x215 Jump
	
Label_540:
	return 0; // 0x21c Return
	
Label_534:
	var_36_object = var_2_object; // 0x216 PushT
	if(var_36_object == 0) goto Label_540; // 0x217 JumpB
	var_37_string = "head"; // 0x218 PushS
	UnlookAsync(var_37_string); // 0x219 Func
	var_2_object = 0; // 0x21b TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0x186 PushV
	var_12_float = 300; // 0x187 MovI
	var_13_float = 100; // 0x188 MovI
	func_407(var_11_bool, var_12_float, var_13_float); // 0x189 NEW_2
	return 0; // 0x18b Return
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 70.0; // 0x4 MovF
	func_654(var_28_object, var_29_float); // 0x5 NEW_2
	var_74_bool = var_27_bool == 0; // 0x7 Not
	if(var_74_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_75_int = 0; // 0xd PushV
	func_969(var_75_int); // 0xe NEW_2
	SetNPCName(var_75_int); // 0x10 ObjFunc
	var_76_int = 0; // 0x12 PushV
	func_967(var_76_int); // 0x13 NEW_2
	SetNPCDescription(var_76_int); // 0x15 ObjFunc
	var_77_string = ""; // 0x17 PushV
	func_971(var_77_string); // 0x18 NEW_2
	SetPhoto(var_77_string); // 0x1a ObjFunc
	var_78_string = ""; // 0x1c PushV
	func_973(var_78_string); // 0x1d NEW_2
	SetPhoto2(var_78_string); // 0x1f ObjFunc
	var_79_int = 0; // 0x21 PushV
	func_950(var_79_int); // 0x22 NEW_2
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
	var_199_bool = var_26_bool == 0; // 0x38 Not
	if(var_199_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_200_object = Obj(); // 0x3f PushV
	var_200_object = var_17_object; // 0x40 Mov
	func_723(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_641(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x281 PushV
	GetPosition(var_24_cvector); // 0x282 Func
	GetPosition(var_25_cvector); // 0x284 ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x286 Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x287 Or2
	return 6; // 0x288 Return
}


func_636()
{
	StopAnimation(); // 0x27c Func
	StopGroup0(); // 0x27e Func
	return 0; // 0x280 Return
}


func_772(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x304 PushV
	GetEyesHeight(var_32_float); // 0x305 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x307 MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x308 PushE
	var_34_float = var_32_float; // 0x309 Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x30a PopE
	var_35_string = "head"; // 0x30b PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x30c Func
	return 4; // 0x30e Return
}


func_649(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x289 PushV
	IsLoaded(var_25_bool); // 0x28a Func
	var_23_bool = var_25_bool; // 0x28c Mov
	return 2; // 0x28d Return
}


func_905(var_110_bool, var_111_object, var_112_int)
{
	var_113_object = Obj(); var_114_object = Obj(); var_115_int = 0; var_116_object = Obj(); var_117_object = Obj(); var_118_int = 0; // 0x389 PushV
	var_119_object = Obj(); // 0x38a PushV
	func_892(var_119_object); // 0x38b NEW_2
	var_116_object = var_119_object; // 0x38c Mov
	Find(var_112_int, var_117_object); // 0x38e ObjFunc
	var_124_bool = var_117_object == 0; // 0x390 Not
	if(var_124_bool == 0) goto Label_920; // 0x391 JumpB
	var_125_string = "Can't find diary parent with id: "; // 0x392 PushS
	var_126_int = var_125_string + var_112_int; // 0x393 Add
	Trace(var_126_int); // 0x394 Func
	var_110_bool = 0; // 0x396 MovB
	return 6; // 0x397 Return
	
Label_920:
	AddChild(var_111_object); // 0x398 ObjFunc
	var_127_int = 7; // 0x39a PushI
	SendWorldWndMessage(var_127_int); // 0x39b Func
	GetCategory(var_118_int); // 0x39d ObjFunc
	SetDiarySection(var_118_int); // 0x39f Func
	var_110_bool = 0; // 0x3a1 MovB
	return 6; // 0x3a2 Return
}


func_654(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x28e PushV
	GetPosition(var_40_cvector); // 0x28f ObjFunc
	GetEyesHeight(var_39_float); // 0x291 ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x293 PushE
	var_48_float = var_48_float + var_39_float; // 0x294 Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x295 PopE
	GetPosition(var_41_cvector); // 0x296 Func
	GetEyesHeight(var_39_float); // 0x298 Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x29a PushE
	var_49_float = var_49_float + var_39_float; // 0x29b Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x29c PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x29d Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x29e PushE
	var_50_float = 0; // 0x29f MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x2a0 PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x2a1 Or
	var_52_float = sqrt(var_51_int); // 0x2a2 Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x2a3 Div2
	var_43_cvector = -var_42_cvector; // 0x2a4 Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x2a5 Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x2a6 PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x2a7 PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x2a8 Xor2
	func_796(var_54_cvector, var_55_cvector); // 0x2a9 NEW_2
	var_62_int = 25; // 0x2ab PushI
	var_63_float = var_54_cvector * var_62_int; // 0x2ac Mult
	var_64_int = var_53_float + var_63_float; // 0x2ad Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x2ae PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x2af Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x2b0 Add2
	IsOverrideActive(var_46_bool); // 0x2b1 Func
	var_66_bool = var_46_bool; // 0x2b3 Push
	if(var_66_bool == 0) goto Label_695; // 0x2b4 JumpB
	var_27_bool = 0; // 0x2b5 MovB
	return 18; // 0x2b6 Return
	
Label_695:
	StopWorld(); // 0x2b7 Func
	var_67_bool = 1; // 0x2b9 PushB
	CameraTransit(var_45_cvector, var_43_cvector, var_67_bool); // 0x2ba Func
	var_68_float = GetByIndex(var_44_cvector, 0); // 0x2bc PushE
	var_69_float = GetByIndex(var_44_cvector, 2); // 0x2bd PushE
	Rotate(var_68_float, var_69_float); // 0x2be Func
	var_70_bool = 0; // 0x2c0 PushV
	func_975(var_70_bool); // 0x2c1 NEW_2
	if(var_70_bool == 0) goto Label_709; // 0x2c3 JumpB
	goto Label_717; // 0x2c4 Jump
	
Label_717:
	CameraWaitForPlayFinish(); // 0x2cd Func
	ResumeWorld(); // 0x2cf Func
	var_27_bool = 1; // 0x2d1 MovB
	return 18; // 0x2d2 Return
	
Label_709:
	var_71_string = "head"; // 0x2c5 PushS
	HasAnimationTrack(var_47_bool, var_71_string); // 0x2c6 Func
	var_72_bool = var_47_bool; // 0x2c8 Push
	if(var_72_bool == 0) goto Label_717; // 0x2c9 JumpB
	var_73_string = "head"; // 0x2ca PushS
	LookAsyncCamera(var_73_string); // 0x2cb Func
}


func_783()
{
	var_15_bool = 0; // 0x30f PushV
	func_975(var_15_bool); // 0x310 NEW_2
	if(var_15_bool == 0) goto Label_789; // 0x312 JumpB
	lshStopSpeech(); // 0x313 Func
	
Label_789:
	return 0; // 0x315 Return
}


func_790(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x316 PushV
	self(var_21_object); // 0x317 Func
	var_19_object = var_21_object; // 0x319 Mov
	return 2; // 0x31a Return
}


func_407(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0x197 PushV
	var_6_int = 0; // 0x198 TMovB
	
Label_409:
	var_18_int = 3; // 0x199 PushI
	rand(var_16_float, var_18_int); // 0x19a Func
	var_19_int = 3; // 0x19c PushI
	var_20_int = var_16_float + var_19_int; // 0x19d Add
	Sleep(var_20_int, var_17_bool); // 0x19e Func
	var_6_int = 1; // 0x1a0 TMovB
	var_21_float = 0; var_22_float = 0; // 0x1a1 PushV
	var_21_float = var_12_float; // 0x1a2 Mov
	var_22_float = var_13_float; // 0x1a3 Mov
	func_476(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x1a4 NEW_2
	var_6_int = 0; // 0x1a6 TMovB
	goto Label_409; // 0x1a7 Jump
}


func_152(var_2_object, var_142_string)
{
	var_143_bool = 0; // 0x99 PushV
	func_975(var_143_bool); // 0x9a NEW_2
	var_144_bool = var_143_bool == 0; // 0x9c Not
	if(var_144_bool == 0) goto Label_159; // 0x9d JumpB
	return 0; // 0x9e Return
	
Label_159:
	var_145_bool = var_142_string == var_2_object; // 0x9f Eq
	if(var_145_bool == 0) goto Label_162; // 0xa0 JumpB
	return 0; // 0xa1 Return
	
Label_162:
	var_146_string = ""; var_147_bool = 0; // 0xa2 PushV
	var_146_string = var_142_string; // 0xa3 Mov
	var_148_string = ""; // 0xa4 PushS
	var_149_bool = var_142_string == var_148_string; // 0xa5 Eq
	if(var_149_bool == 0) goto Label_169; // 0xa6 JumpB
	var_147_bool = 0; // 0xa7 MovB
	goto Label_170; // 0xa8 Jump
	
Label_170:
	func_757(var_146_string, var_147_bool); // 0xaa NEW_2
	var_2_object = var_142_string; // 0xac TMov
	return 0; // 0xad Return
	
Label_169:
	var_147_bool = 1; // 0xa9 MovB
}


func_796(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x31c PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x31d Or
	var_58_float = sqrt(var_59_int); // 0x31e Sqrt2
	var_60_float = 0.0; // 0x31f PushF
	var_61_bool = var_58_float < var_60_float; // 0x320 LT
	if(var_61_bool == 0) goto Label_804; // 0x321 JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x322 MovV
	return 2; // 0x323 Return
	
Label_804:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x324 Div2
	return 2; // 0x325 Return
}


func_541(var_2_object, var_3_string)
{
	func_636(); // 0x21e NEW_2
	var_13_int = 10; // 0x220 PushI
	KillTimer(var_13_int); // 0x221 Func
	var_14_object = var_2_object; // 0x223 PushT
	if(var_14_object == 0) goto Label_553; // 0x224 JumpB
	var_15_string = "head"; // 0x225 PushS
	UnlookAsync(var_15_string); // 0x226 Func
	var_2_object = 0; // 0x228 TMovB
	
Label_553:
	var_3_string = 1; // 0x229 TMovB
	return 0; // 0x22a Return
}


func_933(var_128_bool, var_129_int)
{
	var_130_object = Obj(); var_131_object = Obj(); var_132_object = Obj(); var_133_object = Obj(); // 0x3a5 PushV
	var_134_object = Obj(); // 0x3a6 PushV
	func_892(var_134_object); // 0x3a7 NEW_2
	var_132_object = var_134_object; // 0x3a8 Mov
	Find(var_129_int, var_133_object); // 0x3aa ObjFunc
	var_135_bool = var_133_object == 0; // 0x3ac Not
	if(var_135_bool == 0) goto Label_944; // 0x3ad JumpB
	var_128_bool = 0; // 0x3ae MovB
	return 4; // 0x3af Return
	
Label_944:
	Remove(); // 0x3b0 ObjFunc
	var_128_bool = 1; // 0x3b2 MovB
	return 4; // 0x3b3 Return
}


func_806(var_97_int, var_98_string)
{
	var_99_int = 0; var_100_int = 0; // 0x326 PushV
	GetVariable(var_98_string, var_100_int); // 0x327 Func
	var_97_int = var_100_int; // 0x329 Mov
	return 2; // 0x32a Return
}


func_425(var_5_int)
{
	var_5_int = 1; // 0x1a9 TMovB
	var_15_bool = 0; // 0x1aa PushV
	var_15_bool = 0; // 0x1ab MovB
	var_16_bool = 0; // 0x1ac PushV
	func_649(var_16_bool); // 0x1ad NEW_2
	var_19_bool = var_16_bool == 0; // 0x1af Not
	if(var_19_bool == 0) goto Label_438; // 0x1b0 JumpB
	var_20_bool = 0; // 0x1b1 PushV
	func_474(var_20_bool); // 0x1b2 NEW_2
	if(var_20_bool == 0) goto Label_438; // 0x1b4 JumpB
	var_15_bool = 1; // 0x1b5 MovB
	
Label_438:
	if(var_15_bool == 0) goto Label_444; // 0x1b6 JumpB
	var_21_object = Obj(); // 0x1b7 PushV
	func_790(var_21_object); // 0x1b8 NEW_2
	RemoveActor(var_21_object); // 0x1ba Func
	
Label_444:
	return 0; // 0x1bc Return
}


func_811()
{
	var_26_string = "ood12Littlegirl2"; // 0x32c PushS
	var_27_int = 1; // 0x32d PushI
	SetVariable(var_26_string, var_27_int); // 0x32e Func
	return 0; // 0x330 Return
}


func_555()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x22b PushV
	WaitForAnimEnd(); // 0x22c Func
	var_44_bool = 0; // 0x22e PushV
	func_649(var_44_bool); // 0x22f NEW_2
	var_45_bool = var_44_bool == 0; // 0x231 Not
	if(var_45_bool == 0) goto Label_564; // 0x232 JumpB
	return 14; // 0x233 Return
	
Label_564:
	var_46_int = 0; // 0x234 PushV
	func_984(var_46_int); // 0x235 NEW_2
	var_37_int = var_46_int; // 0x236 Mov
	var_38_int = 0; // 0x238 MovI
	
Label_569:
	var_59_bool = 0; // 0x239 PushV
	var_59_bool = 0; // 0x23a MovB
	var_60_int = 5; // 0x23b PushI
	var_61_bool = var_38_int < var_60_int; // 0x23c LT
	if(var_61_bool == 0) goto Label_579; // 0x23d JumpB
	var_62_bool = 0; // 0x23e PushV
	func_649(var_62_bool); // 0x23f NEW_2
	if(var_62_bool == 0) goto Label_579; // 0x241 JumpB
	var_59_bool = 1; // 0x242 MovB
	
Label_579:
	if(var_59_bool == 0) goto Label_631; // 0x243 JumpB
	var_63_int = 3; // 0x244 PushI
	irand(var_39_int, var_63_int); // 0x245 Func
	var_64_int = 0; // 0x247 PushI
	var_65_bool = var_39_int == var_64_int; // 0x248 Eq
	if(var_65_bool == 0) goto Label_603; // 0x249 JumpB
	var_66_int = var_37_int; // 0x24a Push
	if(var_66_int == 0) goto Label_602; // 0x24b JumpB
	irand(var_40_int, var_37_int); // 0x24c Func
	var_67_string = "all"; // 0x24e PushS
	var_68_string = ""; var_69_int = 0; // 0x24f PushV
	var_69_int = var_40_int; // 0x250 Mov
	func_977(var_68_string, var_69_int); // 0x251 NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x253 Func
	WaitForAnimEnd(var_41_bool); // 0x255 Func
	var_70_bool = var_41_bool == 0; // 0x257 Not
	if(var_70_bool == 0) goto Label_602; // 0x258 JumpB
	goto Label_631; // 0x259 Jump
	
Label_631:
	ResetAAS(); // 0x277 Func
	return 14; // 0x279 Return
	
Label_602:
	goto Label_620; // 0x25a Jump
	
Label_620:
	var_71_bool = 0; // 0x26c PushV
	func_634(var_71_bool); // 0x26d NEW_2
	var_72_bool = var_71_bool == 0; // 0x26f Not
	if(var_72_bool == 0) goto Label_626; // 0x270 JumpB
	goto Label_631; // 0x271 Jump
	
Label_626:
	ResetAAS(); // 0x272 Func
	var_73_int = 1; // 0x274 PushI
	var_38_int = var_38_int + var_73_int; // 0x275 Add2
	goto Label_569; // 0x276 Jump
	
Label_603:
	var_74_int = 1; // 0x25b PushI
	var_75_bool = var_39_int == var_74_int; // 0x25c Eq
	if(var_75_bool == 0) goto Label_617; // 0x25d JumpB
	var_76_int = 4; // 0x25e PushI
	rand(var_42_float, var_76_int); // 0x25f Func
	var_77_int = 1; // 0x261 PushI
	var_78_int = var_42_float + var_77_int; // 0x262 Add
	Sleep(var_78_int, var_43_bool); // 0x263 Func
	var_79_bool = var_43_bool == 0; // 0x265 Not
	if(var_79_bool == 0) goto Label_616; // 0x266 JumpB
	goto Label_631; // 0x267 Jump
	
Label_616:
	goto Label_620; // 0x268 Jump
	
Label_617:
	var_80_int = var_38_int; // 0x269 Push
	if(var_80_int == 0) goto Label_620; // 0x26a JumpB
	goto Label_631; // 0x26b Jump
}


func_817()
{
	var_97_int = 0; var_98_string = ""; // 0x332 PushV
	var_98_string = "D_Mission5"; // 0x333 MovS
	func_806(var_97_int, var_98_string); // 0x334 NEW_2
	var_101_int = 0; // 0x336 PushI
	var_102_bool = var_97_int == var_101_int; // 0x337 Eq
	if(var_102_bool == 0) goto Label_848; // 0x338 JumpB
	var_103_string = "D_Mission5"; // 0x339 PushS
	var_104_int = 1; // 0x33a PushI
	SetVariable(var_103_string, var_104_int); // 0x33b Func
	func_879(); // 0x33e NEW_2
	var_128_bool = 0; var_129_int = 0; // 0x340 PushV
	var_129_int = 30; // 0x341 MovI
	func_933(var_128_bool, var_129_int); // 0x342 NEW_2
	var_136_bool = 0; var_137_int = 0; // 0x344 PushV
	var_137_int = 3; // 0x345 MovI
	func_933(var_136_bool, var_137_int); // 0x346 NEW_2
	var_138_bool = 0; var_139_int = 0; // 0x348 PushV
	var_139_int = 4; // 0x349 MovI
	func_933(var_138_bool, var_139_int); // 0x34a NEW_2
	var_140_bool = 0; var_141_int = 0; // 0x34c PushV
	var_141_int = 5; // 0x34d MovI
	func_933(var_140_bool, var_141_int); // 0x34e NEW_2
	
Label_848:
	return 0; // 0x350 Return
}


func_950(var_79_int)
{
	var_80_int = 0; var_81_int = 0; // 0x3b6 PushV
	var_82_string = "branch"; // 0x3b7 PushS
	GetVariable(var_82_string, var_81_int); // 0x3b8 Func
	var_83_int = 0; // 0x3ba PushI
	var_84_bool = var_81_int == var_83_int; // 0x3bb Eq
	if(var_84_bool == 0) goto Label_960; // 0x3bc JumpB
	var_79_int = 1; // 0x3bd MovI
	return 2; // 0x3be Return
	
Label_960:
	var_85_int = 1; // 0x3c0 PushI
	var_86_bool = var_81_int == var_85_int; // 0x3c1 Eq
	if(var_86_bool == 0) goto Label_965; // 0x3c2 JumpB
	var_79_int = 2; // 0x3c3 MovI
	return 2; // 0x3c4 Return
	
Label_965:
	var_79_int = 3; // 0x3c5 MovI
	return 2; // 0x3c6 Return
}


func_967(var_76_int)
{
	var_76_int = 515561; // 0x3c7 MovI
	return 0; // 0x3c8 Return
}


func_969(var_75_int)
{
	var_75_int = 503346; // 0x3c9 MovI
	return 0; // 0x3ca Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object; // 0x4b TMov
	var_1_object = var_88_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_94_int = 1; // 0x4e PushI
	if(var_94_int == 0) goto Label_122; // 0x4f JumpB
	var_95_object = Obj(); var_96_object = Obj(); // 0x50 PushV
	var_95_object = var_1_object; // 0x51 MovT
	var_96_object = var_0_object; // 0x52 MovT
	func_817(); // 0x53 NEW_2
	var_142_string = ""; // 0x55 PushV
	var_142_string = "Neutral"; // 0x56 MovS
	func_152(var_89_object, var_142_string); // 0x57 NEW_2
	var_159_int = 515005; // 0x59 PushI
	SetMessage(var_159_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_160_bool = 0; var_161_object = Obj(); // 0x5e PushV
	var_161_object = var_1_object; // 0x5f MovT
	func_867(var_161_object); // 0x60 NEW_2
	if(var_160_bool == 0) goto Label_104; // 0x62 JumpB
	var_166_int = 515006; // 0x63 PushI
	var_167_int = 42522; // 0x64 PushI
	var_168_int = 16264; // 0x65 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x66 TObjFunc
	
Label_104:
	var_169_bool = 0; var_170_object = Obj(); // 0x68 PushV
	var_170_object = var_1_object; // 0x69 MovT
	func_855(var_170_object); // 0x6a NEW_2
	if(var_169_bool == 0) goto Label_114; // 0x6c JumpB
	var_175_int = 515018; // 0x6d PushI
	var_176_int = 16278; // 0x6e PushI
	var_177_int = 16277; // 0x6f PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x70 TObjFunc
	
Label_114:
	var_178_int = 515017; // 0x72 PushI
	var_179_int = -1; // 0x73 PushI
	var_180_int = 16276; // 0x74 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x75 TObjFunc
	goto Label_122; // 0x77 Jump
	
Label_122:
	var_181_bool = 0; // 0x7a PushV
	func_975(var_181_bool); // 0x7b NEW_2
	if(var_181_bool == 0) goto Label_137; // 0x7d JumpB
	
Label_126:
	lshWaitForAnimEnd(); // 0x7e Func
	var_182_string = var_3_string; // 0x80 PushT
	if(var_182_string == 0) goto Label_131; // 0x81 JumpB
	goto Label_136; // 0x82 Jump
	
Label_136:
	goto Label_151; // 0x88 Jump
	
Label_151:
	return 0; // 0x97 Return
	
Label_131:
	var_183_string = ""; // 0x83 PushV
	var_183_string = var_2_object; // 0x84 MovT
	func_741(var_183_string); // 0x85 NEW_2
	goto Label_126; // 0x87 Jump
	
Label_137:
	var_194_string = "all"; // 0x89 PushS
	var_195_string = "idle"; // 0x8a PushS
	PlayAnimation(var_194_string, var_195_string); // 0x8b Func
	
Label_141:
	WaitForAnimEnd(); // 0x8d Func
	var_196_string = var_3_string; // 0x8f PushT
	if(var_196_string == 0) goto Label_146; // 0x90 JumpB
	goto Label_151; // 0x91 Jump
	
Label_146:
	var_197_string = "all"; // 0x92 PushS
	var_198_string = "idle"; // 0x93 PushS
	PlayAnimation(var_197_string, var_198_string); // 0x94 Func
	goto Label_141; // 0x96 Jump
}


func_971(var_77_string)
{
	var_77_string = "ui/NPC_Citizen1.png"; // 0x3cb MovS
	return 0; // 0x3cc Return
}


func_973(var_78_string)
{
	var_78_string = "ui/NPC_Citizen1_b.png"; // 0x3cd MovS
	return 0; // 0x3ce Return
}


func_975(var_70_bool)
{
	var_70_bool = 0; // 0x3cf MovB
	return 0; // 0x3d0 Return
}


func_849()
{
	var_20_string = "ood12Littlegirl1"; // 0x352 PushS
	var_21_int = 1; // 0x353 PushI
	SetVariable(var_20_string, var_21_int); // 0x354 Func
	return 0; // 0x356 Return
}


func_977(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x3d1 PushV
	var_55_string = "idle"; // 0x3d2 MovS
	var_56_int = var_53_int; // 0x3d3 Push
	if(var_56_int == 0) goto Label_982; // 0x3d4 JumpB
	var_55_string = var_55_string + var_53_int; // 0x3d5 Add2
	
Label_982:
	var_52_string = var_55_string; // 0x3d6 Mov
	return 2; // 0x3d7 Return
}


func_723()
{
	var_201_bool = 0; var_202_bool = 0; // 0x2d3 PushV
	var_203_bool = 1; // 0x2d4 PushB
	CameraSwitchToNormal(var_203_bool); // 0x2d5 Func
	var_204_bool = 0; // 0x2d7 PushV
	func_975(var_204_bool); // 0x2d8 NEW_2
	if(var_204_bool == 0) goto Label_732; // 0x2da JumpB
	goto Label_740; // 0x2db Jump
	
Label_740:
	return 2; // 0x2e4 Return
	
Label_732:
	var_205_string = "head"; // 0x2dc PushS
	HasAnimationTrack(var_202_bool, var_205_string); // 0x2dd Func
	var_206_bool = var_202_bool; // 0x2df Push
	if(var_206_bool == 0) goto Label_740; // 0x2e0 JumpB
	var_207_string = "head"; // 0x2e1 PushS
	UnlookAsync(var_207_string); // 0x2e2 Func
}


func_855(var_169_bool)
{
	var_171_int = 0; var_172_string = ""; // 0x358 PushV
	var_172_string = "ood12Littlegirl2"; // 0x359 MovS
	func_806(var_171_int, var_172_string); // 0x35a NEW_2
	var_173_int = 0; // 0x35c PushI
	var_174_bool = var_171_int == var_173_int; // 0x35d Eq
	if(var_174_bool == 0) goto Label_865; // 0x35e JumpB
	var_169_bool = 1; // 0x35f MovB
	return 0; // 0x360 Return
	
Label_865:
	var_169_bool = 0; // 0x361 MovB
	return 0; // 0x362 Return
}


func_984(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x3d8 PushV
	var_49_int = 0; // 0x3d9 MovI
	
Label_986:
	var_51_string = "all"; // 0x3da PushS
	var_52_string = ""; var_53_int = 0; // 0x3db PushV
	var_53_int = var_49_int; // 0x3dc Mov
	func_977(var_52_string, var_53_int); // 0x3dd NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x3df Func
	var_57_bool = var_50_bool == 0; // 0x3e1 Not
	if(var_57_bool == 0) goto Label_996; // 0x3e2 JumpB
	goto Label_999; // 0x3e3 Jump
	
Label_999:
	var_46_int = var_49_int; // 0x3e7 Mov
	return 4; // 0x3e8 Return
	
Label_996:
	var_58_int = 1; // 0x3e4 PushI
	var_49_int = var_49_int + var_58_int; // 0x3e5 Add2
	goto Label_986; // 0x3e6 Jump
}


func_474(var_18_bool)
{
	var_18_bool = 1; // 0x1da MovB
	return 0; // 0x1db Return
}


func_476(var_0_object, var_1_object, var_2_object, var_3_string, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x1dd PushV
	func_649(var_23_bool); // 0x1de NEW_2
	var_26_bool = var_23_bool == 0; // 0x1e0 Not
	if(var_26_bool == 0) goto Label_483; // 0x1e1 JumpB
	return 0; // 0x1e2 Return
	
Label_483:
	var_27_string = "player"; // 0x1e3 PushS
	FindActor(var_17_bool, var_27_string); // 0x1e4 Func
	var_2_object = 0; // 0x1e6 TMovB
	var_3_string = 0; // 0x1e7 TMovB
	var_0_object = var_21_float; // 0x1e8 TMov
	var_1_object = var_22_float; // 0x1e9 TMov
	var_28_int = 10; // 0x1ea PushI
	var_29_float = 1.0; // 0x1eb PushF
	SetTimer(var_28_int, var_29_float); // 0x1ec Func
	func_555(); // 0x1ef NEW_2
	var_81_bool = var_3_string == 0; // 0x1f1 Not
	if(var_81_bool == 0) goto Label_502; // 0x1f2 JumpB
	var_82_int = 10; // 0x1f3 PushI
	KillTimer(var_82_int); // 0x1f4 Func
	
Label_502:
	return 0; // 0x1f6 Return
}


func_867(var_160_bool)
{
	var_162_int = 0; var_163_string = ""; // 0x364 PushV
	var_163_string = "ood12Littlegirl1"; // 0x365 MovS
	func_806(var_162_int, var_163_string); // 0x366 NEW_2
	var_164_int = 0; // 0x368 PushI
	var_165_bool = var_162_int == var_164_int; // 0x369 Eq
	if(var_165_bool == 0) goto Label_877; // 0x36a JumpB
	var_160_bool = 1; // 0x36b MovB
	return 0; // 0x36c Return
	
Label_877:
	var_160_bool = 0; // 0x36d MovB
	return 0; // 0x36e Return
}


func_741(var_183_string)
{
	var_184_bool = 0; var_185_float = 0; var_186_float = 0; var_187_bool = 0; var_188_float = 0; var_189_float = 0; // 0x2e5 PushV
	lshHasAnimation(var_187_bool, var_183_string); // 0x2e6 Func
	var_190_bool = var_187_bool; // 0x2e8 Push
	if(var_190_bool == 0) goto Label_752; // 0x2e9 JumpB
	lshGetAnimTimes(var_183_string, var_188_float, var_189_float); // 0x2ea Func
	var_191_bool = 0; // 0x2ec PushB
	lshPlayAnimation(var_188_float, var_189_float, var_191_bool); // 0x2ed Func
	goto Label_756; // 0x2ef Jump
	
Label_756:
	return 6; // 0x2f4 Return
	
Label_752:
	var_192_string = "Can't find lsh animation : "; // 0x2f0 PushS
	var_193_int = var_192_string + var_183_string; // 0x2f1 Add
	Trace(var_193_int); // 0x2f2 Func
}


func_879()
{
	var_105_object = Obj(); var_106_object = Obj(); // 0x36f PushV
	var_107_int = 561; // 0x370 PushI
	var_108_int = 0; // 0x371 PushI
	var_109_int = 530575; // 0x372 PushI
	CreateDiaryEntry(var_106_object, var_107_int, var_108_int, var_109_int); // 0x373 Func
	var_110_bool = 0; var_111_object = Obj(); var_112_int = 0; // 0x375 PushV
	var_111_object = var_106_object; // 0x376 Mov
	var_112_int = -1; // 0x377 MovI
	func_905(var_110_bool, var_111_object, var_112_int); // 0x378 NEW_2
	return 2; // 0x37a Return
}


func_757(var_146_string, var_147_bool)
{
	var_150_bool = 0; var_151_float = 0; var_152_float = 0; var_153_bool = 0; var_154_float = 0; var_155_float = 0; // 0x2f5 PushV
	lshHasAnimation(var_153_bool, var_146_string); // 0x2f6 Func
	var_156_bool = var_153_bool; // 0x2f8 Push
	if(var_156_bool == 0) goto Label_767; // 0x2f9 JumpB
	lshGetAnimTimes(var_146_string, var_154_float, var_155_float); // 0x2fa Func
	lshPlayAnimation(var_154_float, var_155_float, var_147_bool); // 0x2fc Func
	goto Label_771; // 0x2fe Jump
	
Label_771:
	return 6; // 0x303 Return
	
Label_767:
	var_157_string = "Can't find lsh animation : "; // 0x2ff PushS
	var_158_int = var_157_string + var_146_string; // 0x300 Add
	Trace(var_158_int); // 0x301 Func
}


func_503(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x1f7 PushV
	var_18_bool = var_4_bool == 0; // 0x1f8 NullEq
	if(var_18_bool == 0) goto Label_508; // 0x1f9 JumpB
	var_15_bool = 0; // 0x1fa MovB
	return 2; // 0x1fb Return
	
Label_508:
	var_19_float = 0; var_20_object = Obj(); // 0x1fc PushV
	var_20_object = var_4_bool; // 0x1fd MovT
	func_641(var_20_object); // 0x1fe NEW_2
	var_17_float = sqrt(var_19_float); // 0x200 Sqrt2
	var_27_object = var_2_object; // 0x201 PushT
	if(var_27_object == 0) goto Label_516; // 0x202 JumpB
	var_17_float = var_17_float - var_1_object; // 0x203 Sub2
	
Label_516:
	var_15_bool = var_17_float < var_0_object; // 0x204 LT2
	return 2; // 0x205 Return
}


func_634(var_71_bool)
{
	var_71_bool = 1; // 0x27a MovB
	return 0; // 0x27b Return
}


func_892(var_119_object)
{
	var_120_object = Obj(); var_121_object = Obj(); // 0x37c PushV
	GetDiaryRoot(var_121_object); // 0x37d Func
	var_122_bool = var_121_object == 0; // 0x37f Not
	if(var_122_bool == 0) goto Label_902; // 0x380 JumpB
	var_123_string = "Can't retrieve diary root"; // 0x381 PushS
	Trace(var_123_string); // 0x382 Func
	var_119_object = 0; // 0x384 MovB
	return 2; // 0x385 Return
	
Label_902:
	var_119_object = var_121_object; // 0x386 Mov
	return 2; // 0x387 Return
}


