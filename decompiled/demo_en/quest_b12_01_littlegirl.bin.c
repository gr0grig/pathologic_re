task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xb9 PushI
	if(var_14_int == 0) goto Label_404; // 0xba JumpB
	func_796(); // 0xbc NEW_2
	var_16_int = 24105; // 0xbe PushI
	var_17_bool = var_13_bool == var_16_int; // 0xbf Eq
	if(var_17_bool == 0) goto Label_198; // 0xc0 JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xc1 PushV
	var_18_object = var_1_object; // 0xc2 MovT
	var_19_object = var_0_object; // 0xc3 MovT
	func_841(); // 0xc4 NEW_2
	
Label_198:
	var_22_int = 24118; // 0xc6 PushI
	var_23_bool = var_13_bool == var_22_int; // 0xc7 Eq
	if(var_23_bool == 0) goto Label_206; // 0xc8 JumpB
	var_24_object = Obj(); var_25_object = Obj(); // 0xc9 PushV
	var_24_object = var_1_object; // 0xca MovT
	var_25_object = var_0_object; // 0xcb MovT
	func_847(); // 0xcc NEW_2
	
Label_206:
	var_28_int = 24104; // 0xce PushI
	var_29_bool = var_12_bool == var_28_int; // 0xcf Eq
	if(var_29_bool == 0) goto Label_259; // 0xd0 JumpB
	var_30_object = Obj(); var_31_object = Obj(); // 0xd1 PushV
	var_30_object = var_1_object; // 0xd2 MovT
	var_31_object = var_0_object; // 0xd3 MovT
	func_853(); // 0xd4 NEW_2
	var_42_object = Obj(); var_43_object = Obj(); // 0xd6 PushV
	var_42_object = var_1_object; // 0xd7 MovT
	var_43_object = var_0_object; // 0xd8 MovT
	func_892(); // 0xd9 NEW_2
	var_46_object = Obj(); var_47_object = Obj(); // 0xdb PushV
	var_46_object = var_1_object; // 0xdc MovT
	var_47_object = var_0_object; // 0xdd MovT
	func_860(); // 0xde NEW_2
	var_93_string = ""; // 0xe0 PushV
	var_93_string = "Neutral"; // 0xe1 MovS
	func_162(var_13_bool, var_93_string); // 0xe2 NEW_2
	var_110_int = 522914; // 0xe4 PushI
	SetMessage(var_110_int); // 0xe5 TObjFunc
	ClearReplies(); // 0xe7 TObjFunc
	var_111_bool = 0; var_112_object = Obj(); // 0xe9 PushV
	var_112_object = var_1_object; // 0xea MovT
	func_898(var_112_object); // 0xeb NEW_2
	if(var_111_bool == 0) goto Label_243; // 0xed JumpB
	var_117_int = 522915; // 0xee PushI
	var_118_int = 37091; // 0xef PushI
	var_119_int = 24105; // 0xf0 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0xf1 TObjFunc
	
Label_243:
	var_120_bool = 0; var_121_object = Obj(); // 0xf3 PushV
	var_121_object = var_1_object; // 0xf4 MovT
	func_910(var_121_object); // 0xf5 NEW_2
	if(var_120_bool == 0) goto Label_253; // 0xf7 JumpB
	var_126_int = 522927; // 0xf8 PushI
	var_127_int = 24119; // 0xf9 PushI
	var_128_int = 24118; // 0xfa PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0xfb TObjFunc
	
Label_253:
	var_129_int = 522926; // 0xfd PushI
	var_130_int = -1; // 0xfe PushI
	var_131_int = 24117; // 0xff PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x100 TObjFunc
	return 0; // 0x102 Return
	
Label_259:
	var_132_int = 24119; // 0x103 PushI
	var_133_bool = var_12_bool == var_132_int; // 0x104 Eq
	if(var_133_bool == 0) goto Label_282; // 0x105 JumpB
	var_134_string = ""; // 0x106 PushV
	var_134_string = "Neutral"; // 0x107 MovS
	func_162(var_13_bool, var_134_string); // 0x108 NEW_2
	var_135_int = 522928; // 0x10a PushI
	SetMessage(var_135_int); // 0x10b TObjFunc
	ClearReplies(); // 0x10d TObjFunc
	var_136_int = 522929; // 0x10f PushI
	var_137_int = -1; // 0x110 PushI
	var_138_int = 24120; // 0x111 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x112 TObjFunc
	var_139_int = 522930; // 0x114 PushI
	var_140_int = -1; // 0x115 PushI
	var_141_int = 24121; // 0x116 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x117 TObjFunc
	return 0; // 0x119 Return
	
Label_282:
	var_142_int = 37091; // 0x11a PushI
	var_143_bool = var_12_bool == var_142_int; // 0x11b Eq
	if(var_143_bool == 0) goto Label_300; // 0x11c JumpB
	var_144_string = ""; // 0x11d PushV
	var_144_string = "Neutral"; // 0x11e MovS
	func_162(var_13_bool, var_144_string); // 0x11f NEW_2
	var_145_int = 535411; // 0x121 PushI
	SetMessage(var_145_int); // 0x122 TObjFunc
	ClearReplies(); // 0x124 TObjFunc
	var_146_int = 535412; // 0x126 PushI
	var_147_int = 37093; // 0x127 PushI
	var_148_int = 37092; // 0x128 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x129 TObjFunc
	return 0; // 0x12b Return
	
Label_300:
	var_149_int = 37093; // 0x12c PushI
	var_150_bool = var_12_bool == var_149_int; // 0x12d Eq
	if(var_150_bool == 0) goto Label_323; // 0x12e JumpB
	var_151_string = ""; // 0x12f PushV
	var_151_string = "Neutral"; // 0x130 MovS
	func_162(var_13_bool, var_151_string); // 0x131 NEW_2
	var_152_int = 535413; // 0x133 PushI
	SetMessage(var_152_int); // 0x134 TObjFunc
	ClearReplies(); // 0x136 TObjFunc
	var_153_int = 535414; // 0x138 PushI
	var_154_int = 24106; // 0x139 PushI
	var_155_int = 37094; // 0x13a PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x13b TObjFunc
	var_156_int = 535415; // 0x13d PushI
	var_157_int = -1; // 0x13e PushI
	var_158_int = 37095; // 0x13f PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x140 TObjFunc
	return 0; // 0x142 Return
	
Label_323:
	var_159_int = 24106; // 0x143 PushI
	var_160_bool = var_12_bool == var_159_int; // 0x144 Eq
	if(var_160_bool == 0) goto Label_341; // 0x145 JumpB
	var_161_string = ""; // 0x146 PushV
	var_161_string = "Neutral"; // 0x147 MovS
	func_162(var_13_bool, var_161_string); // 0x148 NEW_2
	var_162_int = 522916; // 0x14a PushI
	SetMessage(var_162_int); // 0x14b TObjFunc
	ClearReplies(); // 0x14d TObjFunc
	var_163_int = 522917; // 0x14f PushI
	var_164_int = 24108; // 0x150 PushI
	var_165_int = 24107; // 0x151 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x152 TObjFunc
	return 0; // 0x154 Return
	
Label_341:
	var_166_int = 24108; // 0x155 PushI
	var_167_bool = var_12_bool == var_166_int; // 0x156 Eq
	if(var_167_bool == 0) goto Label_369; // 0x157 JumpB
	var_168_string = ""; // 0x158 PushV
	var_168_string = "Neutral"; // 0x159 MovS
	func_162(var_13_bool, var_168_string); // 0x15a NEW_2
	var_169_int = 522918; // 0x15c PushI
	SetMessage(var_169_int); // 0x15d TObjFunc
	ClearReplies(); // 0x15f TObjFunc
	var_170_int = 522920; // 0x161 PushI
	var_171_int = -1; // 0x162 PushI
	var_172_int = 24110; // 0x163 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x164 TObjFunc
	var_173_int = 522921; // 0x166 PushI
	var_174_int = 24112; // 0x167 PushI
	var_175_int = 24111; // 0x168 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x169 TObjFunc
	var_176_int = 522925; // 0x16b PushI
	var_177_int = 24112; // 0x16c PushI
	var_178_int = 24115; // 0x16d PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x16e TObjFunc
	return 0; // 0x170 Return
	
Label_369:
	var_179_int = 24112; // 0x171 PushI
	var_180_bool = var_12_bool == var_179_int; // 0x172 Eq
	if(var_180_bool == 0) goto Label_392; // 0x173 JumpB
	var_181_string = ""; // 0x174 PushV
	var_181_string = "Neutral"; // 0x175 MovS
	func_162(var_13_bool, var_181_string); // 0x176 NEW_2
	var_182_int = 522922; // 0x178 PushI
	SetMessage(var_182_int); // 0x179 TObjFunc
	ClearReplies(); // 0x17b TObjFunc
	var_183_int = 522923; // 0x17d PushI
	var_184_int = -1; // 0x17e PushI
	var_185_int = 24113; // 0x17f PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x180 TObjFunc
	var_186_int = 522924; // 0x182 PushI
	var_187_int = -1; // 0x183 PushI
	var_188_int = 24114; // 0x184 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x185 TObjFunc
	return 0; // 0x187 Return
	
Label_392:
	var_3_string = 1; // 0x188 TMovB
	var_189_bool = 0; // 0x189 PushV
	func_1018(var_189_bool); // 0x18a NEW_2
	if(var_189_bool == 0) goto Label_400; // 0x18c JumpB
	lshStopAnimation(); // 0x18d Func
	goto Label_402; // 0x18f Jump
	
Label_402:
	return 0; // 0x192 Return
	
Label_400:
	StopAnimation(); // 0x190 Func
	
Label_404:
	return 0; // 0x194 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_556(var_11_bool, var_12_object); // 0x19d NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0x19f PushV
	var_17_object = var_12_object; // 0x1a0 Mov
	TaskCall(0); // 0x1a1 TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0x1a2 NEW_2
	TaskReturn(); // 0x1a3 TaskReturn
	return 0; // 0x1a5 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "cleanup"; // 0x1cd PushS
	var_14_bool = var_12_string == var_13_string; // 0x1ce Eq
	if(var_14_bool == 0) goto Label_467; // 0x1cf JumpB
	func_440(var_12_string); // 0x1d1 NEW_2
	
Label_467:
	return 0; // 0x1d3 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x1d4 PushT
	if(var_12_int == 0) goto Label_473; // 0x1d5 JumpB
	func_556(var_10_bool, var_11_bool); // 0x1d7 NEW_2
	
Label_473:
	var_16_bool = 0; // 0x1d9 PushV
	var_16_bool = 0; // 0x1da MovB
	var_17_int = var_5_int; // 0x1db PushT
	if(var_17_int == 0) goto Label_482; // 0x1dc JumpB
	var_18_bool = 0; // 0x1dd PushV
	func_489(var_18_bool); // 0x1de NEW_2
	if(var_18_bool == 0) goto Label_482; // 0x1e0 JumpB
	var_16_bool = 1; // 0x1e1 MovB
	
Label_482:
	if(var_16_bool == 0) goto Label_488; // 0x1e2 JumpB
	var_19_object = Obj(); // 0x1e3 PushV
	func_803(var_19_object); // 0x1e4 NEW_2
	RemoveActor(var_19_object); // 0x1e6 Func
	
Label_488:
	return 0; // 0x1e8 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x216 PushI
	var_14_bool = var_12_int == var_13_int; // 0x217 Eq
	if(var_14_bool == 0) goto Label_555; // 0x218 JumpB
	var_15_bool = 0; // 0x219 PushV
	func_518(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x21a NEW_2
	if(var_15_bool == 0) goto Label_549; // 0x21c JumpB
	var_28_bool = var_2_object == 0; // 0x21d Not
	if(var_28_bool == 0) goto Label_548; // 0x21e JumpB
	var_29_object = Obj(); // 0x21f PushV
	var_29_object = var_4_bool; // 0x220 MovT
	func_785(var_29_object); // 0x221 NEW_2
	var_2_object = 1; // 0x223 TMovB
	
Label_548:
	goto Label_555; // 0x224 Jump
	
Label_555:
	return 0; // 0x22b Return
	
Label_549:
	var_36_object = var_2_object; // 0x225 PushT
	if(var_36_object == 0) goto Label_555; // 0x226 JumpB
	var_37_string = "head"; // 0x227 PushS
	UnlookAsync(var_37_string); // 0x228 Func
	var_2_object = 0; // 0x22a TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0x195 PushV
	var_12_float = 300; // 0x196 MovI
	var_13_float = 100; // 0x197 MovI
	func_422(var_11_bool, var_12_float, var_13_float); // 0x198 NEW_2
	return 0; // 0x19a Return
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 70.0; // 0x4 MovF
	func_669(var_28_object, var_29_float); // 0x5 NEW_2
	var_73_bool = var_27_bool == 0; // 0x7 Not
	if(var_73_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_74_int = 0; // 0xd PushV
	func_1012(var_74_int); // 0xe NEW_2
	SetNPCName(var_74_int); // 0x10 ObjFunc
	var_75_int = 0; // 0x12 PushV
	func_1010(var_75_int); // 0x13 NEW_2
	SetNPCDescription(var_75_int); // 0x15 ObjFunc
	var_76_string = ""; // 0x17 PushV
	func_1014(var_76_string); // 0x18 NEW_2
	SetPhoto(var_76_string); // 0x1a ObjFunc
	var_77_string = ""; // 0x1c PushV
	func_1016(var_77_string); // 0x1d NEW_2
	SetPhoto2(var_77_string); // 0x1f ObjFunc
	var_78_int = 0; // 0x21 PushV
	func_993(var_78_int); // 0x22 NEW_2
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
	var_214_bool = var_26_bool == 0; // 0x38 Not
	if(var_214_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_215_object = Obj(); // 0x3f PushV
	var_215_object = var_17_object; // 0x40 Mov
	func_737(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_898(var_175_bool)
{
	var_177_int = 0; var_178_string = ""; // 0x383 PushV
	var_178_string = "oob12Littlegirl1"; // 0x384 MovS
	func_819(var_177_int, var_178_string); // 0x385 NEW_2
	var_179_int = 0; // 0x387 PushI
	var_180_bool = var_177_int == var_179_int; // 0x388 Eq
	if(var_180_bool == 0) goto Label_908; // 0x389 JumpB
	var_175_bool = 1; // 0x38a MovB
	return 0; // 0x38b Return
	
Label_908:
	var_175_bool = 0; // 0x38c MovB
	return 0; // 0x38d Return
}


func_1027(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x403 PushV
	var_49_int = 0; // 0x404 MovI
	
Label_1029:
	var_51_string = "all"; // 0x405 PushS
	var_52_string = ""; var_53_int = 0; // 0x406 PushV
	var_53_int = var_49_int; // 0x407 Mov
	func_1020(var_52_string, var_53_int); // 0x408 NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x40a Func
	var_57_bool = var_50_bool == 0; // 0x40c Not
	if(var_57_bool == 0) goto Label_1039; // 0x40d JumpB
	goto Label_1042; // 0x40e Jump
	
Label_1042:
	var_46_int = var_49_int; // 0x412 Mov
	return 4; // 0x413 Return
	
Label_1039:
	var_58_int = 1; // 0x40f PushI
	var_49_int = var_49_int + var_58_int; // 0x410 Add2
	goto Label_1029; // 0x411 Jump
}


func_770(var_161_string, var_162_bool)
{
	var_165_bool = 0; var_166_float = 0; var_167_float = 0; var_168_bool = 0; var_169_float = 0; var_170_float = 0; // 0x302 PushV
	lshHasAnimation(var_168_bool, var_161_string); // 0x303 Func
	var_171_bool = var_168_bool; // 0x305 Push
	if(var_171_bool == 0) goto Label_780; // 0x306 JumpB
	lshGetAnimTimes(var_161_string, var_169_float, var_170_float); // 0x307 Func
	lshPlayAnimation(var_169_float, var_170_float, var_162_bool); // 0x309 Func
	goto Label_784; // 0x30b Jump
	
Label_784:
	return 6; // 0x310 Return
	
Label_780:
	var_172_string = "Can't find lsh animation : "; // 0x30c PushS
	var_173_int = var_172_string + var_161_string; // 0x30d Add
	Trace(var_173_int); // 0x30e Func
}


func_518(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x206 PushV
	var_18_bool = var_4_bool == 0; // 0x207 NullEq
	if(var_18_bool == 0) goto Label_523; // 0x208 JumpB
	var_15_bool = 0; // 0x209 MovB
	return 2; // 0x20a Return
	
Label_523:
	var_19_float = 0; var_20_object = Obj(); // 0x20b PushV
	var_20_object = var_4_bool; // 0x20c MovT
	func_656(var_20_object); // 0x20d NEW_2
	var_17_float = sqrt(var_19_float); // 0x20f Sqrt2
	var_27_object = var_2_object; // 0x210 PushT
	if(var_27_object == 0) goto Label_531; // 0x211 JumpB
	var_17_float = var_17_float - var_1_object; // 0x212 Sub2
	
Label_531:
	var_15_bool = var_17_float < var_0_object; // 0x213 LT2
	return 2; // 0x214 Return
}


func_892()
{
	var_108_string = "b12q01ChildsAreVisited"; // 0x37d PushS
	var_109_int = 1; // 0x37e PushI
	SetVariable(var_108_string, var_109_int); // 0x37f Func
	return 0; // 0x381 Return
}


func_649(var_71_bool)
{
	var_71_bool = 1; // 0x289 MovB
	return 0; // 0x28a Return
}


func_651()
{
	StopAnimation(); // 0x28b Func
	StopGroup0(); // 0x28d Func
	return 0; // 0x28f Return
}


func_910(var_184_bool)
{
	var_186_int = 0; var_187_string = ""; // 0x38f PushV
	var_187_string = "oob12Littlegirl2"; // 0x390 MovS
	func_819(var_186_int, var_187_string); // 0x391 NEW_2
	var_188_int = 0; // 0x393 PushI
	var_189_bool = var_186_int == var_188_int; // 0x394 Eq
	if(var_189_bool == 0) goto Label_920; // 0x395 JumpB
	var_184_bool = 1; // 0x396 MovB
	return 0; // 0x397 Return
	
Label_920:
	var_184_bool = 0; // 0x398 MovB
	return 0; // 0x399 Return
}


func_656(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x290 PushV
	GetPosition(var_24_cvector); // 0x291 Func
	GetPosition(var_25_cvector); // 0x293 ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x295 Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x296 Or2
	return 6; // 0x297 Return
}


func_785(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x311 PushV
	GetEyesHeight(var_32_float); // 0x312 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x314 MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x315 PushE
	var_34_float = var_32_float; // 0x316 Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x317 PopE
	var_35_string = "head"; // 0x318 PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x319 Func
	return 4; // 0x31b Return
}


func_664(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x298 PushV
	IsLoaded(var_25_bool); // 0x299 Func
	var_23_bool = var_25_bool; // 0x29b Mov
	return 2; // 0x29c Return
}


func_922()
{
	var_120_object = Obj(); var_121_object = Obj(); // 0x39a PushV
	var_122_int = 566; // 0x39b PushI
	var_123_int = 0; // 0x39c PushI
	var_124_int = 530580; // 0x39d PushI
	CreateDiaryEntry(var_121_object, var_122_int, var_123_int, var_124_int); // 0x39e Func
	var_125_bool = 0; var_126_object = Obj(); var_127_int = 0; // 0x3a0 PushV
	var_126_object = var_121_object; // 0x3a1 Mov
	var_127_int = -1; // 0x3a2 MovI
	func_948(var_125_bool, var_126_object, var_127_int); // 0x3a3 NEW_2
	return 2; // 0x3a5 Return
}


func_796()
{
	var_15_bool = 0; // 0x31c PushV
	func_1018(var_15_bool); // 0x31d NEW_2
	if(var_15_bool == 0) goto Label_802; // 0x31f JumpB
	lshStopSpeech(); // 0x320 Func
	
Label_802:
	return 0; // 0x322 Return
}


func_669(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x29d PushV
	GetPosition(var_40_cvector); // 0x29e ObjFunc
	GetEyesHeight(var_39_float); // 0x2a0 ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x2a2 PushE
	var_48_float = var_48_float + var_39_float; // 0x2a3 Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x2a4 PopE
	GetPosition(var_41_cvector); // 0x2a5 Func
	GetEyesHeight(var_39_float); // 0x2a7 Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x2a9 PushE
	var_49_float = var_49_float + var_39_float; // 0x2aa Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x2ab PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x2ac Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x2ad PushE
	var_50_float = 0; // 0x2ae MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x2af PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x2b0 Or
	var_52_float = sqrt(var_51_int); // 0x2b1 Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x2b2 Div2
	var_43_cvector = -var_42_cvector; // 0x2b3 Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x2b4 Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x2b5 PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x2b6 PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x2b7 Xor2
	func_809(var_54_cvector, var_55_cvector); // 0x2b8 NEW_2
	var_62_int = 25; // 0x2ba PushI
	var_63_float = var_54_cvector * var_62_int; // 0x2bb Mult
	var_64_int = var_53_float + var_63_float; // 0x2bc Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x2bd PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x2be Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x2bf Add2
	IsOverrideActive(var_46_bool); // 0x2c0 Func
	var_66_bool = var_46_bool; // 0x2c2 Push
	if(var_66_bool == 0) goto Label_710; // 0x2c3 JumpB
	var_27_bool = 0; // 0x2c4 MovB
	return 18; // 0x2c5 Return
	
Label_710:
	StopWorld(); // 0x2c6 Func
	CameraTransit(var_45_cvector, var_43_cvector); // 0x2c8 Func
	var_67_float = GetByIndex(var_44_cvector, 0); // 0x2ca PushE
	var_68_float = GetByIndex(var_44_cvector, 2); // 0x2cb PushE
	Rotate(var_67_float, var_68_float); // 0x2cc Func
	var_69_bool = 0; // 0x2ce PushV
	func_1018(var_69_bool); // 0x2cf NEW_2
	if(var_69_bool == 0) goto Label_723; // 0x2d1 JumpB
	goto Label_731; // 0x2d2 Jump
	
Label_731:
	CameraWaitForPlayFinish(); // 0x2db Func
	ResumeWorld(); // 0x2dd Func
	var_27_bool = 1; // 0x2df MovB
	return 18; // 0x2e0 Return
	
Label_723:
	var_70_string = "head"; // 0x2d3 PushS
	HasAnimationTrack(var_47_bool, var_70_string); // 0x2d4 Func
	var_71_bool = var_47_bool; // 0x2d6 Push
	if(var_71_bool == 0) goto Label_731; // 0x2d7 JumpB
	var_72_string = "head"; // 0x2d8 PushS
	LookAsyncCamera(var_72_string); // 0x2d9 Func
}


func_162(var_2_object, var_157_string)
{
	var_158_bool = 0; // 0xa3 PushV
	func_1018(var_158_bool); // 0xa4 NEW_2
	var_159_bool = var_158_bool == 0; // 0xa6 Not
	if(var_159_bool == 0) goto Label_169; // 0xa7 JumpB
	return 0; // 0xa8 Return
	
Label_169:
	var_160_bool = var_157_string == var_2_object; // 0xa9 Eq
	if(var_160_bool == 0) goto Label_172; // 0xaa JumpB
	return 0; // 0xab Return
	
Label_172:
	var_161_string = ""; var_162_bool = 0; // 0xac PushV
	var_161_string = var_157_string; // 0xad Mov
	var_163_string = ""; // 0xae PushS
	var_164_bool = var_157_string == var_163_string; // 0xaf Eq
	if(var_164_bool == 0) goto Label_179; // 0xb0 JumpB
	var_162_bool = 0; // 0xb1 MovB
	goto Label_180; // 0xb2 Jump
	
Label_180:
	func_770(var_161_string, var_162_bool); // 0xb4 NEW_2
	var_2_object = var_157_string; // 0xb6 TMov
	return 0; // 0xb7 Return
	
Label_179:
	var_162_bool = 1; // 0xb3 MovB
}


func_803(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x323 PushV
	self(var_21_object); // 0x324 Func
	var_19_object = var_21_object; // 0x326 Mov
	return 2; // 0x327 Return
}


func_422(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0x1a6 PushV
	var_6_int = 0; // 0x1a7 TMovB
	
Label_424:
	var_18_int = 3; // 0x1a8 PushI
	rand(var_16_float, var_18_int); // 0x1a9 Func
	var_19_int = 3; // 0x1ab PushI
	var_20_int = var_16_float + var_19_int; // 0x1ac Add
	Sleep(var_20_int, var_17_bool); // 0x1ad Func
	var_6_int = 1; // 0x1af TMovB
	var_21_float = 0; var_22_float = 0; // 0x1b0 PushV
	var_21_float = var_12_float; // 0x1b1 Mov
	var_22_float = var_13_float; // 0x1b2 Mov
	func_491(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x1b3 NEW_2
	var_6_int = 0; // 0x1b5 TMovB
	goto Label_424; // 0x1b6 Jump
}


func_935(var_134_object)
{
	var_135_object = Obj(); var_136_object = Obj(); // 0x3a7 PushV
	GetDiaryRoot(var_136_object); // 0x3a8 Func
	var_137_bool = var_136_object == 0; // 0x3aa Not
	if(var_137_bool == 0) goto Label_945; // 0x3ab JumpB
	var_138_string = "Can't retrieve diary root"; // 0x3ac PushS
	Trace(var_138_string); // 0x3ad Func
	var_134_object = 0; // 0x3af MovB
	return 2; // 0x3b0 Return
	
Label_945:
	var_134_object = var_136_object; // 0x3b1 Mov
	return 2; // 0x3b2 Return
}


func_809(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x329 PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x32a Or
	var_58_float = sqrt(var_59_int); // 0x32b Sqrt2
	var_60_float = 0.0; // 0x32c PushF
	var_61_bool = var_58_float < var_60_float; // 0x32d LT
	if(var_61_bool == 0) goto Label_817; // 0x32e JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x32f MovV
	return 2; // 0x330 Return
	
Label_817:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x331 Div2
	return 2; // 0x332 Return
}


func_556(var_2_object, var_3_string)
{
	func_651(); // 0x22d NEW_2
	var_13_int = 10; // 0x22f PushI
	KillTimer(var_13_int); // 0x230 Func
	var_14_object = var_2_object; // 0x232 PushT
	if(var_14_object == 0) goto Label_568; // 0x233 JumpB
	var_15_string = "head"; // 0x234 PushS
	UnlookAsync(var_15_string); // 0x235 Func
	var_2_object = 0; // 0x237 TMovB
	
Label_568:
	var_3_string = 1; // 0x238 TMovB
	return 0; // 0x239 Return
}


func_819(var_112_int, var_113_string)
{
	var_114_int = 0; var_115_int = 0; // 0x333 PushV
	GetVariable(var_113_string, var_115_int); // 0x334 Func
	var_112_int = var_115_int; // 0x336 Mov
	return 2; // 0x337 Return
}


func_948(var_125_bool, var_126_object, var_127_int)
{
	var_128_object = Obj(); var_129_object = Obj(); var_130_int = 0; var_131_object = Obj(); var_132_object = Obj(); var_133_int = 0; // 0x3b4 PushV
	var_134_object = Obj(); // 0x3b5 PushV
	func_935(var_134_object); // 0x3b6 NEW_2
	var_131_object = var_134_object; // 0x3b7 Mov
	Find(var_127_int, var_132_object); // 0x3b9 ObjFunc
	var_139_bool = var_132_object == 0; // 0x3bb Not
	if(var_139_bool == 0) goto Label_963; // 0x3bc JumpB
	var_140_string = "Can't find diary parent with id: "; // 0x3bd PushS
	var_141_int = var_140_string + var_127_int; // 0x3be Add
	Trace(var_141_int); // 0x3bf Func
	var_125_bool = 0; // 0x3c1 MovB
	return 6; // 0x3c2 Return
	
Label_963:
	AddChild(var_126_object); // 0x3c3 ObjFunc
	var_142_int = 7; // 0x3c5 PushI
	SendWorldWndMessage(var_142_int); // 0x3c6 Func
	GetCategory(var_133_int); // 0x3c8 ObjFunc
	SetDiarySection(var_133_int); // 0x3ca Func
	var_125_bool = 0; // 0x3cc MovB
	return 6; // 0x3cd Return
}


func_440(var_5_int)
{
	var_5_int = 1; // 0x1b8 TMovB
	var_15_bool = 0; // 0x1b9 PushV
	var_15_bool = 0; // 0x1ba MovB
	var_16_bool = 0; // 0x1bb PushV
	func_664(var_16_bool); // 0x1bc NEW_2
	var_19_bool = var_16_bool == 0; // 0x1be Not
	if(var_19_bool == 0) goto Label_453; // 0x1bf JumpB
	var_20_bool = 0; // 0x1c0 PushV
	func_489(var_20_bool); // 0x1c1 NEW_2
	if(var_20_bool == 0) goto Label_453; // 0x1c3 JumpB
	var_15_bool = 1; // 0x1c4 MovB
	
Label_453:
	if(var_15_bool == 0) goto Label_459; // 0x1c5 JumpB
	var_21_object = Obj(); // 0x1c6 PushV
	func_803(var_21_object); // 0x1c7 NEW_2
	RemoveActor(var_21_object); // 0x1c9 Func
	
Label_459:
	return 0; // 0x1cb Return
}


func_824(var_96_string, var_97_bool)
{
	var_98_object = Obj(); var_99_object = Obj(); // 0x338 PushV
	FindActor(var_99_object, var_96_string); // 0x339 Func
	var_100_bool = var_99_object == 0; // 0x33b Not
	if(var_100_bool == 0) goto Label_836; // 0x33c JumpB
	var_101_string = "Door "; // 0x33d PushS
	var_102_int = var_101_string + var_96_string; // 0x33e Add
	var_103_string = " not found"; // 0x33f PushS
	var_104_int = var_102_int + var_103_string; // 0x340 Add
	Trace(var_104_int); // 0x341 Func
	goto Label_839; // 0x343 Jump
	
Label_839:
	return 2; // 0x347 Return
	
Label_836:
	var_105_string = "locked"; // 0x344 PushS
	SetProperty(var_105_string, var_97_bool); // 0x345 ObjFunc
}


func_570()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x23a PushV
	WaitForAnimEnd(); // 0x23b Func
	var_44_bool = 0; // 0x23d PushV
	func_664(var_44_bool); // 0x23e NEW_2
	var_45_bool = var_44_bool == 0; // 0x240 Not
	if(var_45_bool == 0) goto Label_579; // 0x241 JumpB
	return 14; // 0x242 Return
	
Label_579:
	var_46_int = 0; // 0x243 PushV
	func_1027(var_46_int); // 0x244 NEW_2
	var_37_int = var_46_int; // 0x245 Mov
	var_38_int = 0; // 0x247 MovI
	
Label_584:
	var_59_bool = 0; // 0x248 PushV
	var_59_bool = 0; // 0x249 MovB
	var_60_int = 5; // 0x24a PushI
	var_61_bool = var_38_int < var_60_int; // 0x24b LT
	if(var_61_bool == 0) goto Label_594; // 0x24c JumpB
	var_62_bool = 0; // 0x24d PushV
	func_664(var_62_bool); // 0x24e NEW_2
	if(var_62_bool == 0) goto Label_594; // 0x250 JumpB
	var_59_bool = 1; // 0x251 MovB
	
Label_594:
	if(var_59_bool == 0) goto Label_646; // 0x252 JumpB
	var_63_int = 3; // 0x253 PushI
	irand(var_39_int, var_63_int); // 0x254 Func
	var_64_int = 0; // 0x256 PushI
	var_65_bool = var_39_int == var_64_int; // 0x257 Eq
	if(var_65_bool == 0) goto Label_618; // 0x258 JumpB
	var_66_int = var_37_int; // 0x259 Push
	if(var_66_int == 0) goto Label_617; // 0x25a JumpB
	irand(var_40_int, var_37_int); // 0x25b Func
	var_67_string = "all"; // 0x25d PushS
	var_68_string = ""; var_69_int = 0; // 0x25e PushV
	var_69_int = var_40_int; // 0x25f Mov
	func_1020(var_68_string, var_69_int); // 0x260 NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x262 Func
	WaitForAnimEnd(var_41_bool); // 0x264 Func
	var_70_bool = var_41_bool == 0; // 0x266 Not
	if(var_70_bool == 0) goto Label_617; // 0x267 JumpB
	goto Label_646; // 0x268 Jump
	
Label_646:
	ResetAAS(); // 0x286 Func
	return 14; // 0x288 Return
	
Label_617:
	goto Label_635; // 0x269 Jump
	
Label_635:
	var_71_bool = 0; // 0x27b PushV
	func_649(var_71_bool); // 0x27c NEW_2
	var_72_bool = var_71_bool == 0; // 0x27e Not
	if(var_72_bool == 0) goto Label_641; // 0x27f JumpB
	goto Label_646; // 0x280 Jump
	
Label_641:
	ResetAAS(); // 0x281 Func
	var_73_int = 1; // 0x283 PushI
	var_38_int = var_38_int + var_73_int; // 0x284 Add2
	goto Label_584; // 0x285 Jump
	
Label_618:
	var_74_int = 1; // 0x26a PushI
	var_75_bool = var_39_int == var_74_int; // 0x26b Eq
	if(var_75_bool == 0) goto Label_632; // 0x26c JumpB
	var_76_int = 4; // 0x26d PushI
	rand(var_42_float, var_76_int); // 0x26e Func
	var_77_int = 1; // 0x270 PushI
	var_78_int = var_42_float + var_77_int; // 0x271 Add
	Sleep(var_78_int, var_43_bool); // 0x272 Func
	var_79_bool = var_43_bool == 0; // 0x274 Not
	if(var_79_bool == 0) goto Label_631; // 0x275 JumpB
	goto Label_646; // 0x276 Jump
	
Label_631:
	goto Label_635; // 0x277 Jump
	
Label_632:
	var_80_int = var_38_int; // 0x278 Push
	if(var_80_int == 0) goto Label_635; // 0x279 JumpB
	goto Label_646; // 0x27a Jump
}


func_841()
{
	var_20_string = "oob12Littlegirl1"; // 0x34a PushS
	var_21_int = 1; // 0x34b PushI
	SetVariable(var_20_string, var_21_int); // 0x34c Func
	return 0; // 0x34e Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_87_object, var_88_object)
{
	var_0_object = var_88_object; // 0x4b TMov
	var_1_object = var_87_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_93_int = 1; // 0x4e PushI
	if(var_93_int == 0) goto Label_132; // 0x4f JumpB
	var_94_object = Obj(); var_95_object = Obj(); // 0x50 PushV
	var_94_object = var_1_object; // 0x51 MovT
	var_95_object = var_0_object; // 0x52 MovT
	func_853(); // 0x53 NEW_2
	var_106_object = Obj(); var_107_object = Obj(); // 0x55 PushV
	var_106_object = var_1_object; // 0x56 MovT
	var_107_object = var_0_object; // 0x57 MovT
	func_892(); // 0x58 NEW_2
	var_110_object = Obj(); var_111_object = Obj(); // 0x5a PushV
	var_110_object = var_1_object; // 0x5b MovT
	var_111_object = var_0_object; // 0x5c MovT
	func_860(); // 0x5d NEW_2
	var_157_string = ""; // 0x5f PushV
	var_157_string = "Neutral"; // 0x60 MovS
	func_162(var_88_object, var_157_string); // 0x61 NEW_2
	var_174_int = 522914; // 0x63 PushI
	SetMessage(var_174_int); // 0x64 TObjFunc
	ClearReplies(); // 0x66 TObjFunc
	var_175_bool = 0; var_176_object = Obj(); // 0x68 PushV
	var_176_object = var_1_object; // 0x69 MovT
	func_898(var_176_object); // 0x6a NEW_2
	if(var_175_bool == 0) goto Label_114; // 0x6c JumpB
	var_181_int = 522915; // 0x6d PushI
	var_182_int = 37091; // 0x6e PushI
	var_183_int = 24105; // 0x6f PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x70 TObjFunc
	
Label_114:
	var_184_bool = 0; var_185_object = Obj(); // 0x72 PushV
	var_185_object = var_1_object; // 0x73 MovT
	func_910(var_185_object); // 0x74 NEW_2
	if(var_184_bool == 0) goto Label_124; // 0x76 JumpB
	var_190_int = 522927; // 0x77 PushI
	var_191_int = 24119; // 0x78 PushI
	var_192_int = 24118; // 0x79 PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x7a TObjFunc
	
Label_124:
	var_193_int = 522926; // 0x7c PushI
	var_194_int = -1; // 0x7d PushI
	var_195_int = 24117; // 0x7e PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x7f TObjFunc
	goto Label_132; // 0x81 Jump
	
Label_132:
	var_196_bool = 0; // 0x84 PushV
	func_1018(var_196_bool); // 0x85 NEW_2
	if(var_196_bool == 0) goto Label_147; // 0x87 JumpB
	
Label_136:
	lshWaitForAnimEnd(); // 0x88 Func
	var_197_string = var_3_string; // 0x8a PushT
	if(var_197_string == 0) goto Label_141; // 0x8b JumpB
	goto Label_146; // 0x8c Jump
	
Label_146:
	goto Label_161; // 0x92 Jump
	
Label_161:
	return 0; // 0xa1 Return
	
Label_141:
	var_198_string = ""; // 0x8d PushV
	var_198_string = var_2_object; // 0x8e MovT
	func_754(var_198_string); // 0x8f NEW_2
	goto Label_136; // 0x91 Jump
	
Label_147:
	var_209_string = "all"; // 0x93 PushS
	var_210_string = "idle"; // 0x94 PushS
	PlayAnimation(var_209_string, var_210_string); // 0x95 Func
	
Label_151:
	WaitForAnimEnd(); // 0x97 Func
	var_211_string = var_3_string; // 0x99 PushT
	if(var_211_string == 0) goto Label_156; // 0x9a JumpB
	goto Label_161; // 0x9b Jump
	
Label_156:
	var_212_string = "all"; // 0x9c PushS
	var_213_string = "idle"; // 0x9d PushS
	PlayAnimation(var_212_string, var_213_string); // 0x9e Func
	goto Label_151; // 0xa0 Jump
}


func_847()
{
	var_26_string = "oob12Littlegirl2"; // 0x350 PushS
	var_27_int = 1; // 0x351 PushI
	SetVariable(var_26_string, var_27_int); // 0x352 Func
	return 0; // 0x354 Return
}


func_976(var_143_bool, var_144_int)
{
	var_145_object = Obj(); var_146_object = Obj(); var_147_object = Obj(); var_148_object = Obj(); // 0x3d0 PushV
	var_149_object = Obj(); // 0x3d1 PushV
	func_935(var_149_object); // 0x3d2 NEW_2
	var_147_object = var_149_object; // 0x3d3 Mov
	Find(var_144_int, var_148_object); // 0x3d5 ObjFunc
	var_150_bool = var_148_object == 0; // 0x3d7 Not
	if(var_150_bool == 0) goto Label_987; // 0x3d8 JumpB
	var_143_bool = 0; // 0x3d9 MovB
	return 4; // 0x3da Return
	
Label_987:
	Remove(); // 0x3db ObjFunc
	var_143_bool = 1; // 0x3dd MovB
	return 4; // 0x3de Return
}


func_853()
{
	var_96_string = ""; var_97_bool = 0; // 0x356 PushV
	var_96_string = "mnogogrannik@door2"; // 0x357 MovS
	var_97_bool = 0; // 0x358 MovB
	func_824(var_96_string, var_97_bool); // 0x359 NEW_2
	return 0; // 0x35b Return
}


func_860()
{
	var_112_int = 0; var_113_string = ""; // 0x35d PushV
	var_113_string = "B_Mission5"; // 0x35e MovS
	func_819(var_112_int, var_113_string); // 0x35f NEW_2
	var_116_int = 0; // 0x361 PushI
	var_117_bool = var_112_int == var_116_int; // 0x362 Eq
	if(var_117_bool == 0) goto Label_891; // 0x363 JumpB
	var_118_string = "B_Mission5"; // 0x364 PushS
	var_119_int = 1; // 0x365 PushI
	SetVariable(var_118_string, var_119_int); // 0x366 Func
	func_922(); // 0x369 NEW_2
	var_143_bool = 0; var_144_int = 0; // 0x36b PushV
	var_144_int = 562; // 0x36c MovI
	func_976(var_143_bool, var_144_int); // 0x36d NEW_2
	var_151_bool = 0; var_152_int = 0; // 0x36f PushV
	var_152_int = 563; // 0x370 MovI
	func_976(var_151_bool, var_152_int); // 0x371 NEW_2
	var_153_bool = 0; var_154_int = 0; // 0x373 PushV
	var_154_int = 564; // 0x374 MovI
	func_976(var_153_bool, var_154_int); // 0x375 NEW_2
	var_155_bool = 0; var_156_int = 0; // 0x377 PushV
	var_156_int = 565; // 0x378 MovI
	func_976(var_155_bool, var_156_int); // 0x379 NEW_2
	
Label_891:
	return 0; // 0x37b Return
}


func_993(var_78_int)
{
	var_79_int = 0; var_80_int = 0; // 0x3e1 PushV
	var_81_string = "branch"; // 0x3e2 PushS
	GetVariable(var_81_string, var_80_int); // 0x3e3 Func
	var_82_int = 0; // 0x3e5 PushI
	var_83_bool = var_80_int == var_82_int; // 0x3e6 Eq
	if(var_83_bool == 0) goto Label_1003; // 0x3e7 JumpB
	var_78_int = 1; // 0x3e8 MovI
	return 2; // 0x3e9 Return
	
Label_1003:
	var_84_int = 1; // 0x3eb PushI
	var_85_bool = var_80_int == var_84_int; // 0x3ec Eq
	if(var_85_bool == 0) goto Label_1008; // 0x3ed JumpB
	var_78_int = 2; // 0x3ee MovI
	return 2; // 0x3ef Return
	
Label_1008:
	var_78_int = 3; // 0x3f0 MovI
	return 2; // 0x3f1 Return
}


func_737()
{
	var_216_bool = 0; var_217_bool = 0; // 0x2e1 PushV
	CameraSwitchToNormal(); // 0x2e2 Func
	var_218_bool = 0; // 0x2e4 PushV
	func_1018(var_218_bool); // 0x2e5 NEW_2
	if(var_218_bool == 0) goto Label_745; // 0x2e7 JumpB
	goto Label_753; // 0x2e8 Jump
	
Label_753:
	return 2; // 0x2f1 Return
	
Label_745:
	var_219_string = "head"; // 0x2e9 PushS
	HasAnimationTrack(var_217_bool, var_219_string); // 0x2ea Func
	var_220_bool = var_217_bool; // 0x2ec Push
	if(var_220_bool == 0) goto Label_753; // 0x2ed JumpB
	var_221_string = "head"; // 0x2ee PushS
	UnlookAsync(var_221_string); // 0x2ef Func
}


func_489(var_18_bool)
{
	var_18_bool = 1; // 0x1e9 MovB
	return 0; // 0x1ea Return
}


func_491(var_0_object, var_1_object, var_2_object, var_3_string, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x1ec PushV
	func_664(var_23_bool); // 0x1ed NEW_2
	var_26_bool = var_23_bool == 0; // 0x1ef Not
	if(var_26_bool == 0) goto Label_498; // 0x1f0 JumpB
	return 0; // 0x1f1 Return
	
Label_498:
	var_27_string = "player"; // 0x1f2 PushS
	FindActor(var_17_bool, var_27_string); // 0x1f3 Func
	var_2_object = 0; // 0x1f5 TMovB
	var_3_string = 0; // 0x1f6 TMovB
	var_0_object = var_21_float; // 0x1f7 TMov
	var_1_object = var_22_float; // 0x1f8 TMov
	var_28_int = 10; // 0x1f9 PushI
	var_29_float = 1.0; // 0x1fa PushF
	SetTimer(var_28_int, var_29_float); // 0x1fb Func
	func_570(); // 0x1fe NEW_2
	var_81_bool = var_3_string == 0; // 0x200 Not
	if(var_81_bool == 0) goto Label_517; // 0x201 JumpB
	var_82_int = 10; // 0x202 PushI
	KillTimer(var_82_int); // 0x203 Func
	
Label_517:
	return 0; // 0x205 Return
}


func_1010(var_75_int)
{
	var_75_int = 515561; // 0x3f2 MovI
	return 0; // 0x3f3 Return
}


func_754(var_198_string)
{
	var_199_bool = 0; var_200_float = 0; var_201_float = 0; var_202_bool = 0; var_203_float = 0; var_204_float = 0; // 0x2f2 PushV
	lshHasAnimation(var_202_bool, var_198_string); // 0x2f3 Func
	var_205_bool = var_202_bool; // 0x2f5 Push
	if(var_205_bool == 0) goto Label_765; // 0x2f6 JumpB
	lshGetAnimTimes(var_198_string, var_203_float, var_204_float); // 0x2f7 Func
	var_206_bool = 0; // 0x2f9 PushB
	lshPlayAnimation(var_203_float, var_204_float, var_206_bool); // 0x2fa Func
	goto Label_769; // 0x2fc Jump
	
Label_769:
	return 6; // 0x301 Return
	
Label_765:
	var_207_string = "Can't find lsh animation : "; // 0x2fd PushS
	var_208_int = var_207_string + var_198_string; // 0x2fe Add
	Trace(var_208_int); // 0x2ff Func
}


func_1012(var_74_int)
{
	var_74_int = 503346; // 0x3f4 MovI
	return 0; // 0x3f5 Return
}


func_1014(var_76_string)
{
	var_76_string = "ui/NPC_Citizen1.png"; // 0x3f6 MovS
	return 0; // 0x3f7 Return
}


func_1016(var_77_string)
{
	var_77_string = "ui/NPC_Citizen1_b.png"; // 0x3f8 MovS
	return 0; // 0x3f9 Return
}


func_1018(var_69_bool)
{
	var_69_bool = 0; // 0x3fa MovB
	return 0; // 0x3fb Return
}


func_1020(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x3fc PushV
	var_55_string = "idle"; // 0x3fd MovS
	var_56_int = var_53_int; // 0x3fe Push
	if(var_56_int == 0) goto Label_1025; // 0x3ff JumpB
	var_55_string = var_55_string + var_53_int; // 0x400 Add2
	
Label_1025:
	var_52_string = var_55_string; // 0x401 Mov
	return 2; // 0x402 Return
}


