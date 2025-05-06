task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xaf PushI
	if(var_14_int == 0) goto Label_389; // 0xb0 JumpB
	func_781(); // 0xb2 NEW_2
	var_16_int = 16264; // 0xb4 PushI
	var_17_bool = var_13_bool == var_16_int; // 0xb5 Eq
	if(var_17_bool == 0) goto Label_188; // 0xb6 JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xb7 PushV
	var_18_object = var_1_object; // 0xb8 MovT
	var_19_object = var_0_object; // 0xb9 MovT
	func_847(); // 0xba NEW_2
	
Label_188:
	var_22_int = 16277; // 0xbc PushI
	var_23_bool = var_13_bool == var_22_int; // 0xbd Eq
	if(var_23_bool == 0) goto Label_196; // 0xbe JumpB
	var_24_object = Obj(); var_25_object = Obj(); // 0xbf PushV
	var_24_object = var_1_object; // 0xc0 MovT
	var_25_object = var_0_object; // 0xc1 MovT
	func_809(); // 0xc2 NEW_2
	
Label_196:
	var_28_int = 16263; // 0xc4 PushI
	var_29_bool = var_12_bool == var_28_int; // 0xc5 Eq
	if(var_29_bool == 0) goto Label_239; // 0xc6 JumpB
	var_30_object = Obj(); var_31_object = Obj(); // 0xc7 PushV
	var_30_object = var_1_object; // 0xc8 MovT
	var_31_object = var_0_object; // 0xc9 MovT
	func_815(); // 0xca NEW_2
	var_77_string = ""; // 0xcc PushV
	var_77_string = "Neutral"; // 0xcd MovS
	func_152(var_13_bool, var_77_string); // 0xce NEW_2
	var_94_int = 515005; // 0xd0 PushI
	SetMessage(var_94_int); // 0xd1 TObjFunc
	ClearReplies(); // 0xd3 TObjFunc
	var_95_bool = 0; var_96_object = Obj(); // 0xd5 PushV
	var_96_object = var_1_object; // 0xd6 MovT
	func_865(var_96_object); // 0xd7 NEW_2
	if(var_95_bool == 0) goto Label_223; // 0xd9 JumpB
	var_101_int = 515006; // 0xda PushI
	var_102_int = 42522; // 0xdb PushI
	var_103_int = 16264; // 0xdc PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0xdd TObjFunc
	
Label_223:
	var_104_bool = 0; var_105_object = Obj(); // 0xdf PushV
	var_105_object = var_1_object; // 0xe0 MovT
	func_853(var_105_object); // 0xe1 NEW_2
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
	func_973(var_176_bool); // 0x17b NEW_2
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
	func_788(var_19_object); // 0x1d5 NEW_2
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
	func_770(var_29_object); // 0x212 NEW_2
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
	var_73_bool = var_27_bool == 0; // 0x7 Not
	if(var_73_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_74_int = 0; // 0xd PushV
	func_967(var_74_int); // 0xe NEW_2
	SetNPCName(var_74_int); // 0x10 ObjFunc
	var_75_int = 0; // 0x12 PushV
	func_965(var_75_int); // 0x13 NEW_2
	SetNPCDescription(var_75_int); // 0x15 ObjFunc
	var_76_string = ""; // 0x17 PushV
	func_969(var_76_string); // 0x18 NEW_2
	SetPhoto(var_76_string); // 0x1a ObjFunc
	var_77_string = ""; // 0x1c PushV
	func_971(var_77_string); // 0x1d NEW_2
	SetPhoto2(var_77_string); // 0x1f ObjFunc
	var_78_int = 0; // 0x21 PushV
	func_948(var_78_int); // 0x22 NEW_2
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
	var_198_bool = var_26_bool == 0; // 0x38 Not
	if(var_198_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_199_object = Obj(); // 0x3f PushV
	var_199_object = var_17_object; // 0x40 Mov
	func_722(); // 0x41 NEW_2
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


func_770(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x302 PushV
	GetEyesHeight(var_32_float); // 0x303 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x305 MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x306 PushE
	var_34_float = var_32_float; // 0x307 Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x308 PopE
	var_35_string = "head"; // 0x309 PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x30a Func
	return 4; // 0x30c Return
}


func_903(var_109_bool, var_110_object, var_111_int)
{
	var_112_object = Obj(); var_113_object = Obj(); var_114_int = 0; var_115_object = Obj(); var_116_object = Obj(); var_117_int = 0; // 0x387 PushV
	var_118_object = Obj(); // 0x388 PushV
	func_890(var_118_object); // 0x389 NEW_2
	var_115_object = var_118_object; // 0x38a Mov
	Find(var_111_int, var_116_object); // 0x38c ObjFunc
	var_123_bool = var_116_object == 0; // 0x38e Not
	if(var_123_bool == 0) goto Label_918; // 0x38f JumpB
	var_124_string = "Can't find diary parent with id: "; // 0x390 PushS
	var_125_int = var_124_string + var_111_int; // 0x391 Add
	Trace(var_125_int); // 0x392 Func
	var_109_bool = 0; // 0x394 MovB
	return 6; // 0x395 Return
	
Label_918:
	AddChild(var_110_object); // 0x396 ObjFunc
	var_126_int = 7; // 0x398 PushI
	SendWorldWndMessage(var_126_int); // 0x399 Func
	GetCategory(var_117_int); // 0x39b ObjFunc
	SetDiarySection(var_117_int); // 0x39d Func
	var_109_bool = 0; // 0x39f MovB
	return 6; // 0x3a0 Return
}


func_649(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x289 PushV
	IsLoaded(var_25_bool); // 0x28a Func
	var_23_bool = var_25_bool; // 0x28c Mov
	return 2; // 0x28d Return
}


func_781()
{
	var_15_bool = 0; // 0x30d PushV
	func_973(var_15_bool); // 0x30e NEW_2
	if(var_15_bool == 0) goto Label_787; // 0x310 JumpB
	lshStopSpeech(); // 0x311 Func
	
Label_787:
	return 0; // 0x313 Return
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
	func_794(var_54_cvector, var_55_cvector); // 0x2a9 NEW_2
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
	CameraTransit(var_45_cvector, var_43_cvector); // 0x2b9 Func
	var_67_float = GetByIndex(var_44_cvector, 0); // 0x2bb PushE
	var_68_float = GetByIndex(var_44_cvector, 2); // 0x2bc PushE
	Rotate(var_67_float, var_68_float); // 0x2bd Func
	var_69_bool = 0; // 0x2bf PushV
	func_973(var_69_bool); // 0x2c0 NEW_2
	if(var_69_bool == 0) goto Label_708; // 0x2c2 JumpB
	goto Label_716; // 0x2c3 Jump
	
Label_716:
	CameraWaitForPlayFinish(); // 0x2cc Func
	ResumeWorld(); // 0x2ce Func
	var_27_bool = 1; // 0x2d0 MovB
	return 18; // 0x2d1 Return
	
Label_708:
	var_70_string = "head"; // 0x2c4 PushS
	HasAnimationTrack(var_47_bool, var_70_string); // 0x2c5 Func
	var_71_bool = var_47_bool; // 0x2c7 Push
	if(var_71_bool == 0) goto Label_716; // 0x2c8 JumpB
	var_72_string = "head"; // 0x2c9 PushS
	LookAsyncCamera(var_72_string); // 0x2ca Func
}


func_788(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x314 PushV
	self(var_21_object); // 0x315 Func
	var_19_object = var_21_object; // 0x317 Mov
	return 2; // 0x318 Return
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


func_152(var_2_object, var_141_string)
{
	var_142_bool = 0; // 0x99 PushV
	func_973(var_142_bool); // 0x9a NEW_2
	var_143_bool = var_142_bool == 0; // 0x9c Not
	if(var_143_bool == 0) goto Label_159; // 0x9d JumpB
	return 0; // 0x9e Return
	
Label_159:
	var_144_bool = var_141_string == var_2_object; // 0x9f Eq
	if(var_144_bool == 0) goto Label_162; // 0xa0 JumpB
	return 0; // 0xa1 Return
	
Label_162:
	var_145_string = ""; var_146_bool = 0; // 0xa2 PushV
	var_145_string = var_141_string; // 0xa3 Mov
	var_147_string = ""; // 0xa4 PushS
	var_148_bool = var_141_string == var_147_string; // 0xa5 Eq
	if(var_148_bool == 0) goto Label_169; // 0xa6 JumpB
	var_146_bool = 0; // 0xa7 MovB
	goto Label_170; // 0xa8 Jump
	
Label_170:
	func_755(var_145_string, var_146_bool); // 0xaa NEW_2
	var_2_object = var_141_string; // 0xac TMov
	return 0; // 0xad Return
	
Label_169:
	var_146_bool = 1; // 0xa9 MovB
}


func_794(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x31a PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x31b Or
	var_58_float = sqrt(var_59_int); // 0x31c Sqrt2
	var_60_float = 0.0; // 0x31d PushF
	var_61_bool = var_58_float < var_60_float; // 0x31e LT
	if(var_61_bool == 0) goto Label_802; // 0x31f JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x320 MovV
	return 2; // 0x321 Return
	
Label_802:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x322 Div2
	return 2; // 0x323 Return
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


func_931(var_127_bool, var_128_int)
{
	var_129_object = Obj(); var_130_object = Obj(); var_131_object = Obj(); var_132_object = Obj(); // 0x3a3 PushV
	var_133_object = Obj(); // 0x3a4 PushV
	func_890(var_133_object); // 0x3a5 NEW_2
	var_131_object = var_133_object; // 0x3a6 Mov
	Find(var_128_int, var_132_object); // 0x3a8 ObjFunc
	var_134_bool = var_132_object == 0; // 0x3aa Not
	if(var_134_bool == 0) goto Label_942; // 0x3ab JumpB
	var_127_bool = 0; // 0x3ac MovB
	return 4; // 0x3ad Return
	
Label_942:
	Remove(); // 0x3ae ObjFunc
	var_127_bool = 1; // 0x3b0 MovB
	return 4; // 0x3b1 Return
}


func_804(var_96_int, var_97_string)
{
	var_98_int = 0; var_99_int = 0; // 0x324 PushV
	GetVariable(var_97_string, var_99_int); // 0x325 Func
	var_96_int = var_99_int; // 0x327 Mov
	return 2; // 0x328 Return
}


func_809()
{
	var_26_string = "ood12Littlegirl2"; // 0x32a PushS
	var_27_int = 1; // 0x32b PushI
	SetVariable(var_26_string, var_27_int); // 0x32c Func
	return 0; // 0x32e Return
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
	func_788(var_21_object); // 0x1b8 NEW_2
	RemoveActor(var_21_object); // 0x1ba Func
	
Label_444:
	return 0; // 0x1bc Return
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
	func_982(var_46_int); // 0x235 NEW_2
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
	func_975(var_68_string, var_69_int); // 0x251 NEW_2
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


func_815()
{
	var_96_int = 0; var_97_string = ""; // 0x330 PushV
	var_97_string = "D_Mission5"; // 0x331 MovS
	func_804(var_96_int, var_97_string); // 0x332 NEW_2
	var_100_int = 0; // 0x334 PushI
	var_101_bool = var_96_int == var_100_int; // 0x335 Eq
	if(var_101_bool == 0) goto Label_846; // 0x336 JumpB
	var_102_string = "D_Mission5"; // 0x337 PushS
	var_103_int = 1; // 0x338 PushI
	SetVariable(var_102_string, var_103_int); // 0x339 Func
	func_877(); // 0x33c NEW_2
	var_127_bool = 0; var_128_int = 0; // 0x33e PushV
	var_128_int = 30; // 0x33f MovI
	func_931(var_127_bool, var_128_int); // 0x340 NEW_2
	var_135_bool = 0; var_136_int = 0; // 0x342 PushV
	var_136_int = 3; // 0x343 MovI
	func_931(var_135_bool, var_136_int); // 0x344 NEW_2
	var_137_bool = 0; var_138_int = 0; // 0x346 PushV
	var_138_int = 4; // 0x347 MovI
	func_931(var_137_bool, var_138_int); // 0x348 NEW_2
	var_139_bool = 0; var_140_int = 0; // 0x34a PushV
	var_140_int = 5; // 0x34b MovI
	func_931(var_139_bool, var_140_int); // 0x34c NEW_2
	
Label_846:
	return 0; // 0x34e Return
}


func_948(var_78_int)
{
	var_79_int = 0; var_80_int = 0; // 0x3b4 PushV
	var_81_string = "branch"; // 0x3b5 PushS
	GetVariable(var_81_string, var_80_int); // 0x3b6 Func
	var_82_int = 0; // 0x3b8 PushI
	var_83_bool = var_80_int == var_82_int; // 0x3b9 Eq
	if(var_83_bool == 0) goto Label_958; // 0x3ba JumpB
	var_78_int = 1; // 0x3bb MovI
	return 2; // 0x3bc Return
	
Label_958:
	var_84_int = 1; // 0x3be PushI
	var_85_bool = var_80_int == var_84_int; // 0x3bf Eq
	if(var_85_bool == 0) goto Label_963; // 0x3c0 JumpB
	var_78_int = 2; // 0x3c1 MovI
	return 2; // 0x3c2 Return
	
Label_963:
	var_78_int = 3; // 0x3c3 MovI
	return 2; // 0x3c4 Return
}


func_965(var_75_int)
{
	var_75_int = 515561; // 0x3c5 MovI
	return 0; // 0x3c6 Return
}


func_967(var_74_int)
{
	var_74_int = 503346; // 0x3c7 MovI
	return 0; // 0x3c8 Return
}


func_969(var_76_string)
{
	var_76_string = "ui/NPC_Citizen1.png"; // 0x3c9 MovS
	return 0; // 0x3ca Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_87_object, var_88_object)
{
	var_0_object = var_88_object; // 0x4b TMov
	var_1_object = var_87_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_93_int = 1; // 0x4e PushI
	if(var_93_int == 0) goto Label_122; // 0x4f JumpB
	var_94_object = Obj(); var_95_object = Obj(); // 0x50 PushV
	var_94_object = var_1_object; // 0x51 MovT
	var_95_object = var_0_object; // 0x52 MovT
	func_815(); // 0x53 NEW_2
	var_141_string = ""; // 0x55 PushV
	var_141_string = "Neutral"; // 0x56 MovS
	func_152(var_88_object, var_141_string); // 0x57 NEW_2
	var_158_int = 515005; // 0x59 PushI
	SetMessage(var_158_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_159_bool = 0; var_160_object = Obj(); // 0x5e PushV
	var_160_object = var_1_object; // 0x5f MovT
	func_865(var_160_object); // 0x60 NEW_2
	if(var_159_bool == 0) goto Label_104; // 0x62 JumpB
	var_165_int = 515006; // 0x63 PushI
	var_166_int = 42522; // 0x64 PushI
	var_167_int = 16264; // 0x65 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x66 TObjFunc
	
Label_104:
	var_168_bool = 0; var_169_object = Obj(); // 0x68 PushV
	var_169_object = var_1_object; // 0x69 MovT
	func_853(var_169_object); // 0x6a NEW_2
	if(var_168_bool == 0) goto Label_114; // 0x6c JumpB
	var_174_int = 515018; // 0x6d PushI
	var_175_int = 16278; // 0x6e PushI
	var_176_int = 16277; // 0x6f PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x70 TObjFunc
	
Label_114:
	var_177_int = 515017; // 0x72 PushI
	var_178_int = -1; // 0x73 PushI
	var_179_int = 16276; // 0x74 PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x75 TObjFunc
	goto Label_122; // 0x77 Jump
	
Label_122:
	var_180_bool = 0; // 0x7a PushV
	func_973(var_180_bool); // 0x7b NEW_2
	if(var_180_bool == 0) goto Label_137; // 0x7d JumpB
	
Label_126:
	lshWaitForAnimEnd(); // 0x7e Func
	var_181_string = var_3_string; // 0x80 PushT
	if(var_181_string == 0) goto Label_131; // 0x81 JumpB
	goto Label_136; // 0x82 Jump
	
Label_136:
	goto Label_151; // 0x88 Jump
	
Label_151:
	return 0; // 0x97 Return
	
Label_131:
	var_182_string = ""; // 0x83 PushV
	var_182_string = var_2_object; // 0x84 MovT
	func_739(var_182_string); // 0x85 NEW_2
	goto Label_126; // 0x87 Jump
	
Label_137:
	var_193_string = "all"; // 0x89 PushS
	var_194_string = "idle"; // 0x8a PushS
	PlayAnimation(var_193_string, var_194_string); // 0x8b Func
	
Label_141:
	WaitForAnimEnd(); // 0x8d Func
	var_195_string = var_3_string; // 0x8f PushT
	if(var_195_string == 0) goto Label_146; // 0x90 JumpB
	goto Label_151; // 0x91 Jump
	
Label_146:
	var_196_string = "all"; // 0x92 PushS
	var_197_string = "idle"; // 0x93 PushS
	PlayAnimation(var_196_string, var_197_string); // 0x94 Func
	goto Label_141; // 0x96 Jump
}


func_971(var_77_string)
{
	var_77_string = "ui/NPC_Citizen1_b.png"; // 0x3cb MovS
	return 0; // 0x3cc Return
}


func_973(var_69_bool)
{
	var_69_bool = 0; // 0x3cd MovB
	return 0; // 0x3ce Return
}


func_847()
{
	var_20_string = "ood12Littlegirl1"; // 0x350 PushS
	var_21_int = 1; // 0x351 PushI
	SetVariable(var_20_string, var_21_int); // 0x352 Func
	return 0; // 0x354 Return
}


func_975(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x3cf PushV
	var_55_string = "idle"; // 0x3d0 MovS
	var_56_int = var_53_int; // 0x3d1 Push
	if(var_56_int == 0) goto Label_980; // 0x3d2 JumpB
	var_55_string = var_55_string + var_53_int; // 0x3d3 Add2
	
Label_980:
	var_52_string = var_55_string; // 0x3d4 Mov
	return 2; // 0x3d5 Return
}


func_722()
{
	var_200_bool = 0; var_201_bool = 0; // 0x2d2 PushV
	CameraSwitchToNormal(); // 0x2d3 Func
	var_202_bool = 0; // 0x2d5 PushV
	func_973(var_202_bool); // 0x2d6 NEW_2
	if(var_202_bool == 0) goto Label_730; // 0x2d8 JumpB
	goto Label_738; // 0x2d9 Jump
	
Label_738:
	return 2; // 0x2e2 Return
	
Label_730:
	var_203_string = "head"; // 0x2da PushS
	HasAnimationTrack(var_201_bool, var_203_string); // 0x2db Func
	var_204_bool = var_201_bool; // 0x2dd Push
	if(var_204_bool == 0) goto Label_738; // 0x2de JumpB
	var_205_string = "head"; // 0x2df PushS
	UnlookAsync(var_205_string); // 0x2e0 Func
}


func_853(var_168_bool)
{
	var_170_int = 0; var_171_string = ""; // 0x356 PushV
	var_171_string = "ood12Littlegirl2"; // 0x357 MovS
	func_804(var_170_int, var_171_string); // 0x358 NEW_2
	var_172_int = 0; // 0x35a PushI
	var_173_bool = var_170_int == var_172_int; // 0x35b Eq
	if(var_173_bool == 0) goto Label_863; // 0x35c JumpB
	var_168_bool = 1; // 0x35d MovB
	return 0; // 0x35e Return
	
Label_863:
	var_168_bool = 0; // 0x35f MovB
	return 0; // 0x360 Return
}


func_982(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x3d6 PushV
	var_49_int = 0; // 0x3d7 MovI
	
Label_984:
	var_51_string = "all"; // 0x3d8 PushS
	var_52_string = ""; var_53_int = 0; // 0x3d9 PushV
	var_53_int = var_49_int; // 0x3da Mov
	func_975(var_52_string, var_53_int); // 0x3db NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x3dd Func
	var_57_bool = var_50_bool == 0; // 0x3df Not
	if(var_57_bool == 0) goto Label_994; // 0x3e0 JumpB
	goto Label_997; // 0x3e1 Jump
	
Label_997:
	var_46_int = var_49_int; // 0x3e5 Mov
	return 4; // 0x3e6 Return
	
Label_994:
	var_58_int = 1; // 0x3e2 PushI
	var_49_int = var_49_int + var_58_int; // 0x3e3 Add2
	goto Label_984; // 0x3e4 Jump
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


func_865(var_159_bool)
{
	var_161_int = 0; var_162_string = ""; // 0x362 PushV
	var_162_string = "ood12Littlegirl1"; // 0x363 MovS
	func_804(var_161_int, var_162_string); // 0x364 NEW_2
	var_163_int = 0; // 0x366 PushI
	var_164_bool = var_161_int == var_163_int; // 0x367 Eq
	if(var_164_bool == 0) goto Label_875; // 0x368 JumpB
	var_159_bool = 1; // 0x369 MovB
	return 0; // 0x36a Return
	
Label_875:
	var_159_bool = 0; // 0x36b MovB
	return 0; // 0x36c Return
}


func_739(var_182_string)
{
	var_183_bool = 0; var_184_float = 0; var_185_float = 0; var_186_bool = 0; var_187_float = 0; var_188_float = 0; // 0x2e3 PushV
	lshHasAnimation(var_186_bool, var_182_string); // 0x2e4 Func
	var_189_bool = var_186_bool; // 0x2e6 Push
	if(var_189_bool == 0) goto Label_750; // 0x2e7 JumpB
	lshGetAnimTimes(var_182_string, var_187_float, var_188_float); // 0x2e8 Func
	var_190_bool = 0; // 0x2ea PushB
	lshPlayAnimation(var_187_float, var_188_float, var_190_bool); // 0x2eb Func
	goto Label_754; // 0x2ed Jump
	
Label_754:
	return 6; // 0x2f2 Return
	
Label_750:
	var_191_string = "Can't find lsh animation : "; // 0x2ee PushS
	var_192_int = var_191_string + var_182_string; // 0x2ef Add
	Trace(var_192_int); // 0x2f0 Func
}


func_877()
{
	var_104_object = Obj(); var_105_object = Obj(); // 0x36d PushV
	var_106_int = 561; // 0x36e PushI
	var_107_int = 0; // 0x36f PushI
	var_108_int = 530575; // 0x370 PushI
	CreateDiaryEntry(var_105_object, var_106_int, var_107_int, var_108_int); // 0x371 Func
	var_109_bool = 0; var_110_object = Obj(); var_111_int = 0; // 0x373 PushV
	var_110_object = var_105_object; // 0x374 Mov
	var_111_int = -1; // 0x375 MovI
	func_903(var_109_bool, var_110_object, var_111_int); // 0x376 NEW_2
	return 2; // 0x378 Return
}


func_755(var_145_string, var_146_bool)
{
	var_149_bool = 0; var_150_float = 0; var_151_float = 0; var_152_bool = 0; var_153_float = 0; var_154_float = 0; // 0x2f3 PushV
	lshHasAnimation(var_152_bool, var_145_string); // 0x2f4 Func
	var_155_bool = var_152_bool; // 0x2f6 Push
	if(var_155_bool == 0) goto Label_765; // 0x2f7 JumpB
	lshGetAnimTimes(var_145_string, var_153_float, var_154_float); // 0x2f8 Func
	lshPlayAnimation(var_153_float, var_154_float, var_146_bool); // 0x2fa Func
	goto Label_769; // 0x2fc Jump
	
Label_769:
	return 6; // 0x301 Return
	
Label_765:
	var_156_string = "Can't find lsh animation : "; // 0x2fd PushS
	var_157_int = var_156_string + var_145_string; // 0x2fe Add
	Trace(var_157_int); // 0x2ff Func
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


func_636()
{
	StopAnimation(); // 0x27c Func
	StopGroup0(); // 0x27e Func
	return 0; // 0x280 Return
}


func_890(var_118_object)
{
	var_119_object = Obj(); var_120_object = Obj(); // 0x37a PushV
	GetDiaryRoot(var_120_object); // 0x37b Func
	var_121_bool = var_120_object == 0; // 0x37d Not
	if(var_121_bool == 0) goto Label_900; // 0x37e JumpB
	var_122_string = "Can't retrieve diary root"; // 0x37f PushS
	Trace(var_122_string); // 0x380 Func
	var_118_object = 0; // 0x382 MovB
	return 2; // 0x383 Return
	
Label_900:
	var_118_object = var_120_object; // 0x384 Mov
	return 2; // 0x385 Return
}


