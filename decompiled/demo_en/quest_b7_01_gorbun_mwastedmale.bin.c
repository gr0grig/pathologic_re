task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xaf PushI
	if(var_8_int == 0) goto Label_397; // 0xb0 JumpB
	func_688(); // 0xb2 NEW_2
	var_10_int = 22211; // 0xb4 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xb5 Eq
	if(var_11_bool == 0) goto Label_193; // 0xb6 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xb7 PushV
	var_12_object = var_1_object; // 0xb8 MovT
	var_13_object = var_0_object; // 0xb9 MovT
	func_745(); // 0xba NEW_2
	var_55_object = Obj(); var_56_object = Obj(); // 0xbc PushV
	var_55_object = var_1_object; // 0xbd MovT
	var_56_object = var_0_object; // 0xbe MovT
	func_768(); // 0xbf NEW_2
	
Label_193:
	var_81_int = 22210; // 0xc1 PushI
	var_82_bool = var_6_int == var_81_int; // 0xc2 Eq
	if(var_82_bool == 0) goto Label_236; // 0xc3 JumpB
	var_83_bool = 0; var_84_object = Obj(); // 0xc4 PushV
	var_84_object = var_1_object; // 0xc5 MovT
	func_784(var_84_object); // 0xc6 NEW_2
	if(var_83_bool == 0) goto Label_221; // 0xc8 JumpB
	var_91_string = ""; // 0xc9 PushV
	var_91_string = "Neutral"; // 0xca MovS
	func_152(var_7_bool, var_91_string); // 0xcb NEW_2
	var_108_int = 520997; // 0xcd PushI
	SetMessage(var_108_int); // 0xce TObjFunc
	ClearReplies(); // 0xd0 TObjFunc
	var_109_int = 524092; // 0xd2 PushI
	var_110_int = 25396; // 0xd3 PushI
	var_111_int = 25395; // 0xd4 PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0xd5 TObjFunc
	var_112_int = 524096; // 0xd7 PushI
	var_113_int = 25405; // 0xd8 PushI
	var_114_int = 25399; // 0xd9 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0xda TObjFunc
	return 0; // 0xdc Return
	
Label_221:
	var_115_string = ""; // 0xdd PushV
	var_115_string = "Neutral"; // 0xde MovS
	func_152(var_7_bool, var_115_string); // 0xdf NEW_2
	var_116_int = 520999; // 0xe1 PushI
	SetMessage(var_116_int); // 0xe2 TObjFunc
	ClearReplies(); // 0xe4 TObjFunc
	var_117_int = 528488; // 0xe6 PushI
	var_118_int = -1; // 0xe7 PushI
	var_119_int = 29877; // 0xe8 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0xe9 TObjFunc
	return 0; // 0xeb Return
	
Label_236:
	var_120_int = 29872; // 0xec PushI
	var_121_bool = var_6_int == var_120_int; // 0xed Eq
	if(var_121_bool == 0) goto Label_239; // 0xee JumpB
	
Label_239:
	var_122_int = 29874; // 0xef PushI
	var_123_bool = var_6_int == var_122_int; // 0xf0 Eq
	if(var_123_bool == 0) goto Label_262; // 0xf1 JumpB
	var_124_string = ""; // 0xf2 PushV
	var_124_string = "Neutral"; // 0xf3 MovS
	func_152(var_7_bool, var_124_string); // 0xf4 NEW_2
	var_125_int = 528485; // 0xf6 PushI
	SetMessage(var_125_int); // 0xf7 TObjFunc
	ClearReplies(); // 0xf9 TObjFunc
	var_126_int = 528486; // 0xfb PushI
	var_127_int = -1; // 0xfc PushI
	var_128_int = 29875; // 0xfd PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0xfe TObjFunc
	var_129_int = 528487; // 0x100 PushI
	var_130_int = -1; // 0x101 PushI
	var_131_int = 29876; // 0x102 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x103 TObjFunc
	return 0; // 0x105 Return
	
Label_262:
	var_132_int = 25405; // 0x106 PushI
	var_133_bool = var_6_int == var_132_int; // 0x107 Eq
	if(var_133_bool == 0) goto Label_280; // 0x108 JumpB
	var_134_string = ""; // 0x109 PushV
	var_134_string = "Neutral"; // 0x10a MovS
	func_152(var_7_bool, var_134_string); // 0x10b NEW_2
	var_135_int = 524102; // 0x10d PushI
	SetMessage(var_135_int); // 0x10e TObjFunc
	ClearReplies(); // 0x110 TObjFunc
	var_136_int = 524103; // 0x112 PushI
	var_137_int = 25401; // 0x113 PushI
	var_138_int = 25406; // 0x114 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x115 TObjFunc
	return 0; // 0x117 Return
	
Label_280:
	var_139_int = 25396; // 0x118 PushI
	var_140_bool = var_6_int == var_139_int; // 0x119 Eq
	if(var_140_bool == 0) goto Label_303; // 0x11a JumpB
	var_141_string = ""; // 0x11b PushV
	var_141_string = "Neutral"; // 0x11c MovS
	func_152(var_7_bool, var_141_string); // 0x11d NEW_2
	var_142_int = 524093; // 0x11f PushI
	SetMessage(var_142_int); // 0x120 TObjFunc
	ClearReplies(); // 0x122 TObjFunc
	var_143_int = 524094; // 0x124 PushI
	var_144_int = 25398; // 0x125 PushI
	var_145_int = 25397; // 0x126 PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x127 TObjFunc
	var_146_int = 524101; // 0x129 PushI
	var_147_int = 25401; // 0x12a PushI
	var_148_int = 25404; // 0x12b PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x12c TObjFunc
	return 0; // 0x12e Return
	
Label_303:
	var_149_int = 25398; // 0x12f PushI
	var_150_bool = var_6_int == var_149_int; // 0x130 Eq
	if(var_150_bool == 0) goto Label_326; // 0x131 JumpB
	var_151_string = ""; // 0x132 PushV
	var_151_string = "Neutral"; // 0x133 MovS
	func_152(var_7_bool, var_151_string); // 0x134 NEW_2
	var_152_int = 524095; // 0x136 PushI
	SetMessage(var_152_int); // 0x137 TObjFunc
	ClearReplies(); // 0x139 TObjFunc
	var_153_int = 524097; // 0x13b PushI
	var_154_int = 25401; // 0x13c PushI
	var_155_int = 25400; // 0x13d PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x13e TObjFunc
	var_156_int = 524104; // 0x140 PushI
	var_157_int = 25408; // 0x141 PushI
	var_158_int = 25407; // 0x142 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x143 TObjFunc
	return 0; // 0x145 Return
	
Label_326:
	var_159_int = 25408; // 0x146 PushI
	var_160_bool = var_6_int == var_159_int; // 0x147 Eq
	if(var_160_bool == 0) goto Label_349; // 0x148 JumpB
	var_161_string = ""; // 0x149 PushV
	var_161_string = "Neutral"; // 0x14a MovS
	func_152(var_7_bool, var_161_string); // 0x14b NEW_2
	var_162_int = 524105; // 0x14d PushI
	SetMessage(var_162_int); // 0x14e TObjFunc
	ClearReplies(); // 0x150 TObjFunc
	var_163_int = 524106; // 0x152 PushI
	var_164_int = 25403; // 0x153 PushI
	var_165_int = 25411; // 0x154 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x155 TObjFunc
	var_166_int = 524107; // 0x157 PushI
	var_167_int = 25401; // 0x158 PushI
	var_168_int = 25412; // 0x159 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x15a TObjFunc
	return 0; // 0x15c Return
	
Label_349:
	var_169_int = 25401; // 0x15d PushI
	var_170_bool = var_6_int == var_169_int; // 0x15e Eq
	if(var_170_bool == 0) goto Label_367; // 0x15f JumpB
	var_171_string = ""; // 0x160 PushV
	var_171_string = "Neutral"; // 0x161 MovS
	func_152(var_7_bool, var_171_string); // 0x162 NEW_2
	var_172_int = 524098; // 0x164 PushI
	SetMessage(var_172_int); // 0x165 TObjFunc
	ClearReplies(); // 0x167 TObjFunc
	var_173_int = 524099; // 0x169 PushI
	var_174_int = 25403; // 0x16a PushI
	var_175_int = 25402; // 0x16b PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x16c TObjFunc
	return 0; // 0x16e Return
	
Label_367:
	var_176_int = 25403; // 0x16f PushI
	var_177_bool = var_6_int == var_176_int; // 0x170 Eq
	if(var_177_bool == 0) goto Label_385; // 0x171 JumpB
	var_178_string = ""; // 0x172 PushV
	var_178_string = "Neutral"; // 0x173 MovS
	func_152(var_7_bool, var_178_string); // 0x174 NEW_2
	var_179_int = 524100; // 0x176 PushI
	SetMessage(var_179_int); // 0x177 TObjFunc
	ClearReplies(); // 0x179 TObjFunc
	var_180_int = 520998; // 0x17b PushI
	var_181_int = -1; // 0x17c PushI
	var_182_int = 22211; // 0x17d PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x17e TObjFunc
	return 0; // 0x180 Return
	
Label_385:
	var_3_string = 1; // 0x181 TMovB
	var_183_bool = 0; // 0x182 PushV
	func_925(var_183_bool); // 0x183 NEW_2
	if(var_183_bool == 0) goto Label_393; // 0x185 JumpB
	lshStopAnimation(); // 0x186 Func
	goto Label_395; // 0x188 Jump
	
Label_395:
	return 0; // 0x18b Return
	
Label_393:
	StopAnimation(); // 0x189 Func
	
Label_397:
	return 0; // 0x18d Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	func_562(); // 0x190 NEW_2
	var_7_int = 0; var_8_object = Obj(); // 0x192 PushV
	var_8_object = var_6_object; // 0x193 Mov
	TaskCall(0); // 0x194 TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x195 NEW_2
	TaskReturn(); // 0x196 TaskReturn
	return 0; // 0x198 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_string = "cleanup"; // 0x1c3 PushS
	var_8_bool = var_6_string == var_7_string; // 0x1c4 Eq
	if(var_8_bool == 0) goto Label_457; // 0x1c5 JumpB
	func_430(var_6_string); // 0x1c7 NEW_2
	
Label_457:
	return 0; // 0x1c9 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	StopGroup0(); // 0x1ca Func
	sync(); // 0x1cc Func
	return 0; // 0x1ce Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x1cf PushV
	var_6_bool = 0; // 0x1d0 MovB
	var_7_object = var_0_object; // 0x1d1 PushT
	if(var_7_object == 0) goto Label_472; // 0x1d2 JumpB
	var_8_bool = 0; // 0x1d3 PushV
	func_479(var_8_bool); // 0x1d4 NEW_2
	if(var_8_bool == 0) goto Label_472; // 0x1d6 JumpB
	var_6_bool = 1; // 0x1d7 MovB
	
Label_472:
	if(var_6_bool == 0) goto Label_478; // 0x1d8 JumpB
	var_9_object = Obj(); // 0x1d9 PushV
	func_695(var_9_object); // 0x1da NEW_2
	RemoveActor(var_9_object); // 0x1dc Func
	
Label_478:
	return 0; // 0x1de Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_float = 0; var_7_float = 0; // 0x199 PushV
	
Label_410:
	var_8_bool = 0; // 0x19a PushV
	func_567(var_8_bool); // 0x19b NEW_2
	var_11_bool = var_8_bool == 0; // 0x19d Not
	if(var_11_bool == 0) goto Label_418; // 0x19e JumpB
	Hold(); // 0x19f Func
	goto Label_410; // 0x1a1 Jump
	
Label_418:
	var_12_int = 3; // 0x1a2 PushI
	rand(var_7_float, var_12_int); // 0x1a3 Func
	var_13_int = 3; // 0x1a5 PushI
	var_14_int = var_7_float + var_13_int; // 0x1a6 Add
	Sleep(var_14_int); // 0x1a7 Func
	func_481(); // 0x1aa NEW_2
	goto Label_410; // 0x1ac Jump
}


func_640()
{
	var_142_bool = 0; var_143_bool = 0; // 0x280 PushV
	CameraSwitchToNormal(); // 0x281 Func
	var_144_bool = 0; // 0x283 PushV
	func_925(var_144_bool); // 0x284 NEW_2
	if(var_144_bool == 0) goto Label_648; // 0x286 JumpB
	goto Label_656; // 0x287 Jump
	
Label_656:
	return 2; // 0x290 Return
	
Label_648:
	var_145_string = "head"; // 0x288 PushS
	HasAnimationTrack(var_143_bool, var_145_string); // 0x289 Func
	var_146_bool = var_143_bool; // 0x28b Push
	if(var_146_bool == 0) goto Label_656; // 0x28c JumpB
	var_147_string = "head"; // 0x28d PushS
	UnlookAsync(var_147_string); // 0x28e Func
}


func_768()
{
	var_57_object = Obj(); var_58_string = ""; var_59_float = 0; // 0x301 PushV
	var_60_object = Obj(); // 0x302 PushV
	func_850(var_60_object); // 0x303 NEW_2
	var_57_object = var_60_object; // 0x304 Mov
	var_58_string = "pt_map_viktor"; // 0x306 MovS
	var_59_float = 2; // 0x307 MovI
	func_867(var_57_object, var_58_string, var_59_float); // 0x308 NEW_2
	var_80_object = Obj(); // 0x30a PushV
	func_850(var_80_object); // 0x30b NEW_2
	ShowMap(var_80_object); // 0x30d ObjFunc
	return 0; // 0x30f Return
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_572(var_19_object, var_20_float); // 0x5 NEW_2
	var_64_bool = var_18_bool == 0; // 0x7 Not
	if(var_64_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_65_int = 0; // 0xd PushV
	func_919(var_65_int); // 0xe NEW_2
	SetNPCName(var_65_int); // 0x10 ObjFunc
	var_66_int = 0; // 0x12 PushV
	func_917(var_66_int); // 0x13 NEW_2
	SetNPCDescription(var_66_int); // 0x15 ObjFunc
	var_67_string = ""; // 0x17 PushV
	func_921(var_67_string); // 0x18 NEW_2
	SetPhoto(var_67_string); // 0x1a ObjFunc
	var_68_string = ""; // 0x1c PushV
	func_923(var_68_string); // 0x1d NEW_2
	SetPhoto2(var_68_string); // 0x1f ObjFunc
	var_69_int = 0; // 0x21 PushV
	func_900(var_69_int); // 0x22 NEW_2
	SetPlayerName(var_69_int); // 0x24 ObjFunc
	var_16_int = -1; // 0x26 MovI
	IsOverrideActive(var_15_bool); // 0x27 Func
	var_77_bool = var_15_bool; // 0x29 Push
	if(var_77_bool == 0) goto Label_45; // 0x2a JumpB
	var_7_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_14_object); // 0x2d Func
	var_78_object = Obj(); var_79_object = Obj(); // 0x2f PushV
	var_78_object = var_8_object; // 0x30 Mov
	var_79_object = var_14_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_80_object, var_81_object, var_82_string, var_83_bool, var_78_object, var_79_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_17_bool); // 0x36 ObjFunc
	
Label_56:
	var_140_bool = var_17_bool == 0; // 0x38 Not
	if(var_140_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_17_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_141_object = Obj(); // 0x3f PushV
	var_141_object = var_8_object; // 0x40 Mov
	func_640(); // 0x41 NEW_2
	StopDialog(var_14_object); // 0x43 Func
	GetReturnValue(var_16_int); // 0x45 ObjFunc
	var_7_int = var_16_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_900(var_69_int)
{
	var_70_int = 0; var_71_int = 0; // 0x384 PushV
	var_72_string = "branch"; // 0x385 PushS
	GetVariable(var_72_string, var_71_int); // 0x386 Func
	var_73_int = 0; // 0x388 PushI
	var_74_bool = var_71_int == var_73_int; // 0x389 Eq
	if(var_74_bool == 0) goto Label_910; // 0x38a JumpB
	var_69_int = 1; // 0x38b MovI
	return 2; // 0x38c Return
	
Label_910:
	var_75_int = 1; // 0x38e PushI
	var_76_bool = var_71_int == var_75_int; // 0x38f Eq
	if(var_76_bool == 0) goto Label_915; // 0x390 JumpB
	var_69_int = 2; // 0x391 MovI
	return 2; // 0x392 Return
	
Label_915:
	var_69_int = 3; // 0x393 MovI
	return 2; // 0x394 Return
}


func_784(var_85_bool)
{
	var_87_int = 0; var_88_string = ""; // 0x311 PushV
	var_88_string = "b7q01"; // 0x312 MovS
	func_711(var_87_int, var_88_string); // 0x313 NEW_2
	var_91_int = 4; // 0x315 PushI
	var_92_bool = var_87_int == var_91_int; // 0x316 Eq
	if(var_92_bool == 0) goto Label_794; // 0x317 JumpB
	var_85_bool = 1; // 0x318 MovB
	return 0; // 0x319 Return
	
Label_794:
	var_85_bool = 0; // 0x31a MovB
	return 0; // 0x31b Return
}


func_657(var_119_string)
{
	var_120_bool = 0; var_121_float = 0; var_122_float = 0; var_123_bool = 0; var_124_float = 0; var_125_float = 0; // 0x291 PushV
	lshHasAnimation(var_123_bool, var_119_string); // 0x292 Func
	var_126_bool = var_123_bool; // 0x294 Push
	if(var_126_bool == 0) goto Label_668; // 0x295 JumpB
	lshGetAnimTimes(var_119_string, var_124_float, var_125_float); // 0x296 Func
	var_127_bool = 0; // 0x298 PushB
	lshPlayAnimation(var_124_float, var_125_float, var_127_bool); // 0x299 Func
	goto Label_672; // 0x29b Jump
	
Label_672:
	return 6; // 0x2a0 Return
	
Label_668:
	var_128_string = "Can't find lsh animation : "; // 0x29c PushS
	var_129_int = var_128_string + var_119_string; // 0x29d Add
	Trace(var_129_int); // 0x29e Func
}


func_917(var_66_int)
{
	var_66_int = 515556; // 0x395 MovI
	return 0; // 0x396 Return
}


func_919(var_65_int)
{
	var_65_int = 503341; // 0x397 MovI
	return 0; // 0x398 Return
}


func_152(var_2_object, var_93_string)
{
	var_94_bool = 0; // 0x99 PushV
	func_925(var_94_bool); // 0x9a NEW_2
	var_95_bool = var_94_bool == 0; // 0x9c Not
	if(var_95_bool == 0) goto Label_159; // 0x9d JumpB
	return 0; // 0x9e Return
	
Label_159:
	var_96_bool = var_93_string == var_2_object; // 0x9f Eq
	if(var_96_bool == 0) goto Label_162; // 0xa0 JumpB
	return 0; // 0xa1 Return
	
Label_162:
	var_97_string = ""; var_98_bool = 0; // 0xa2 PushV
	var_97_string = var_93_string; // 0xa3 Mov
	var_99_string = ""; // 0xa4 PushS
	var_100_bool = var_93_string == var_99_string; // 0xa5 Eq
	if(var_100_bool == 0) goto Label_169; // 0xa6 JumpB
	var_98_bool = 0; // 0xa7 MovB
	goto Label_170; // 0xa8 Jump
	
Label_170:
	func_673(var_97_string, var_98_bool); // 0xaa NEW_2
	var_2_object = var_93_string; // 0xac TMov
	return 0; // 0xad Return
	
Label_169:
	var_98_bool = 1; // 0xa9 MovB
}


func_921(var_67_string)
{
	var_67_string = "ui/NPC_Citizen3.png"; // 0x399 MovS
	return 0; // 0x39a Return
}


func_923(var_68_string)
{
	var_68_string = "ui/NPC_Citizen3_b.png"; // 0x39b MovS
	return 0; // 0x39c Return
}


func_796()
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x31c PushV
	var_34_int = 258; // 0x31d PushI
	var_35_int = 1; // 0x31e PushI
	var_36_int = 521030; // 0x31f PushI
	CreateDiaryEntry(var_33_object, var_34_int, var_35_int, var_36_int); // 0x320 Func
	var_37_bool = 0; var_38_object = Obj(); var_39_int = 0; // 0x322 PushV
	var_38_object = var_33_object; // 0x323 Mov
	var_39_int = 253; // 0x324 MovI
	func_822(var_37_bool, var_38_object, var_39_int); // 0x325 NEW_2
	return 2; // 0x327 Return
}


func_925(var_60_bool)
{
	var_60_bool = 0; // 0x39d MovB
	return 0; // 0x39e Return
}


func_673(var_97_string, var_98_bool)
{
	var_101_bool = 0; var_102_float = 0; var_103_float = 0; var_104_bool = 0; var_105_float = 0; var_106_float = 0; // 0x2a1 PushV
	lshHasAnimation(var_104_bool, var_97_string); // 0x2a2 Func
	var_107_bool = var_104_bool; // 0x2a4 Push
	if(var_107_bool == 0) goto Label_683; // 0x2a5 JumpB
	lshGetAnimTimes(var_97_string, var_105_float, var_106_float); // 0x2a6 Func
	lshPlayAnimation(var_105_float, var_106_float, var_98_bool); // 0x2a8 Func
	goto Label_687; // 0x2aa Jump
	
Label_687:
	return 6; // 0x2af Return
	
Label_683:
	var_108_string = "Can't find lsh animation : "; // 0x2ab PushS
	var_109_int = var_108_string + var_97_string; // 0x2ac Add
	Trace(var_109_int); // 0x2ad Func
}


func_809(var_46_object)
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x329 PushV
	GetDiaryRoot(var_48_object); // 0x32a Func
	var_49_bool = var_48_object == 0; // 0x32c Not
	if(var_49_bool == 0) goto Label_819; // 0x32d JumpB
	var_50_string = "Can't retrieve diary root"; // 0x32e PushS
	Trace(var_50_string); // 0x32f Func
	var_46_object = 0; // 0x331 MovB
	return 2; // 0x332 Return
	
Label_819:
	var_46_object = var_48_object; // 0x333 Mov
	return 2; // 0x334 Return
}


func_430(var_0_object)
{
	var_9_bool = 0; var_10_bool = 0; // 0x1ae PushV
	var_0_object = 1; // 0x1af TMovB
	IsLoaded(var_10_bool); // 0x1b0 Func
	var_11_bool = 0; // 0x1b2 PushV
	var_11_bool = 0; // 0x1b3 MovB
	var_12_bool = var_10_bool == 0; // 0x1b4 Not
	if(var_12_bool == 0) goto Label_443; // 0x1b5 JumpB
	var_13_bool = 0; // 0x1b6 PushV
	func_479(var_13_bool); // 0x1b7 NEW_2
	if(var_13_bool == 0) goto Label_443; // 0x1b9 JumpB
	var_11_bool = 1; // 0x1ba MovB
	
Label_443:
	if(var_11_bool == 0) goto Label_449; // 0x1bb JumpB
	var_14_object = Obj(); // 0x1bc PushV
	func_695(var_14_object); // 0x1bd NEW_2
	RemoveActor(var_14_object); // 0x1bf Func
	
Label_449:
	return 2; // 0x1c1 Return
}


func_688()
{
	var_9_bool = 0; // 0x2b0 PushV
	func_925(var_9_bool); // 0x2b1 NEW_2
	if(var_9_bool == 0) goto Label_694; // 0x2b3 JumpB
	lshStopSpeech(); // 0x2b4 Func
	
Label_694:
	return 0; // 0x2b6 Return
}


func_560(var_56_bool)
{
	var_56_bool = 1; // 0x230 MovB
	return 0; // 0x231 Return
}


func_562()
{
	StopAnimation(); // 0x232 Func
	StopGroup0(); // 0x234 Func
	return 0; // 0x236 Return
}


func_822(var_37_bool, var_38_object, var_39_int)
{
	var_40_object = Obj(); var_41_object = Obj(); var_42_int = 0; var_43_object = Obj(); var_44_object = Obj(); var_45_int = 0; // 0x336 PushV
	var_46_object = Obj(); // 0x337 PushV
	func_809(var_46_object); // 0x338 NEW_2
	var_43_object = var_46_object; // 0x339 Mov
	Find(var_39_int, var_44_object); // 0x33b ObjFunc
	var_51_bool = var_44_object == 0; // 0x33d Not
	if(var_51_bool == 0) goto Label_837; // 0x33e JumpB
	var_52_string = "Can't find diary parent with id: "; // 0x33f PushS
	var_53_int = var_52_string + var_39_int; // 0x340 Add
	Trace(var_53_int); // 0x341 Func
	var_37_bool = 0; // 0x343 MovB
	return 6; // 0x344 Return
	
Label_837:
	AddChild(var_38_object); // 0x345 ObjFunc
	var_54_int = 7; // 0x347 PushI
	SendWorldWndMessage(var_54_int); // 0x348 Func
	GetCategory(var_45_int); // 0x34a ObjFunc
	SetDiarySection(var_45_int); // 0x34c Func
	var_37_bool = 0; // 0x34e MovB
	return 6; // 0x34f Return
}


func_567(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0; // 0x237 PushV
	IsLoaded(var_10_bool); // 0x238 Func
	var_8_bool = var_10_bool; // 0x23a Mov
	return 2; // 0x23b Return
}


func_695(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x2b7 PushV
	self(var_11_object); // 0x2b8 Func
	var_9_object = var_11_object; // 0x2ba Mov
	return 2; // 0x2bb Return
}


func_572(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x23c PushV
	GetPosition(var_31_cvector); // 0x23d ObjFunc
	GetEyesHeight(var_30_float); // 0x23f ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x241 PushE
	var_39_float = var_39_float + var_30_float; // 0x242 Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x243 PopE
	GetPosition(var_32_cvector); // 0x244 Func
	GetEyesHeight(var_30_float); // 0x246 Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x248 PushE
	var_40_float = var_40_float + var_30_float; // 0x249 Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x24a PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x24b Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x24c PushE
	var_41_float = 0; // 0x24d MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x24e PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x24f Or
	var_43_float = sqrt(var_42_int); // 0x250 Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x251 Div2
	var_34_cvector = -var_33_cvector; // 0x252 Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x253 Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x254 PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x255 PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x256 Xor2
	func_701(var_45_cvector, var_46_cvector); // 0x257 NEW_2
	var_53_int = 25; // 0x259 PushI
	var_54_float = var_45_cvector * var_53_int; // 0x25a Mult
	var_55_int = var_44_float + var_54_float; // 0x25b Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x25c PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x25d Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x25e Add2
	IsOverrideActive(var_37_bool); // 0x25f Func
	var_57_bool = var_37_bool; // 0x261 Push
	if(var_57_bool == 0) goto Label_613; // 0x262 JumpB
	var_18_bool = 0; // 0x263 MovB
	return 18; // 0x264 Return
	
Label_613:
	StopWorld(); // 0x265 Func
	CameraTransit(var_36_cvector, var_34_cvector); // 0x267 Func
	var_58_float = GetByIndex(var_35_cvector, 0); // 0x269 PushE
	var_59_float = GetByIndex(var_35_cvector, 2); // 0x26a PushE
	Rotate(var_58_float, var_59_float); // 0x26b Func
	var_60_bool = 0; // 0x26d PushV
	func_925(var_60_bool); // 0x26e NEW_2
	if(var_60_bool == 0) goto Label_626; // 0x270 JumpB
	goto Label_634; // 0x271 Jump
	
Label_634:
	CameraWaitForPlayFinish(); // 0x27a Func
	ResumeWorld(); // 0x27c Func
	var_18_bool = 1; // 0x27e MovB
	return 18; // 0x27f Return
	
Label_626:
	var_61_string = "head"; // 0x272 PushS
	HasAnimationTrack(var_38_bool, var_61_string); // 0x273 Func
	var_62_bool = var_38_bool; // 0x275 Push
	if(var_62_bool == 0) goto Label_634; // 0x276 JumpB
	var_63_string = "head"; // 0x277 PushS
	LookAsyncCamera(var_63_string); // 0x278 Func
}


func_701(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x2bd PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x2be Or
	var_49_float = sqrt(var_50_int); // 0x2bf Sqrt2
	var_51_float = 0.0; // 0x2c0 PushF
	var_52_bool = var_49_float < var_51_float; // 0x2c1 LT
	if(var_52_bool == 0) goto Label_709; // 0x2c2 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x2c3 MovV
	return 2; // 0x2c4 Return
	
Label_709:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x2c5 Div2
	return 2; // 0x2c6 Return
}


func_711(var_87_int, var_88_string)
{
	var_89_int = 0; var_90_int = 0; // 0x2c7 PushV
	GetVariable(var_88_string, var_90_int); // 0x2c8 Func
	var_87_int = var_90_int; // 0x2ca Mov
	return 2; // 0x2cb Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_78_object, var_79_object)
{
	var_0_object = var_79_object; // 0x4b TMov
	var_1_object = var_78_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_84_int = 1; // 0x4e PushI
	if(var_84_int == 0) goto Label_122; // 0x4f JumpB
	var_85_bool = 0; var_86_object = Obj(); // 0x50 PushV
	var_86_object = var_1_object; // 0x51 MovT
	func_784(var_86_object); // 0x52 NEW_2
	if(var_85_bool == 0) goto Label_105; // 0x54 JumpB
	var_93_string = ""; // 0x55 PushV
	var_93_string = "Neutral"; // 0x56 MovS
	func_152(var_79_object, var_93_string); // 0x57 NEW_2
	var_110_int = 520997; // 0x59 PushI
	SetMessage(var_110_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_111_int = 524092; // 0x5e PushI
	var_112_int = 25396; // 0x5f PushI
	var_113_int = 25395; // 0x60 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x61 TObjFunc
	var_114_int = 524096; // 0x63 PushI
	var_115_int = 25405; // 0x64 PushI
	var_116_int = 25399; // 0x65 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x66 TObjFunc
	goto Label_122; // 0x68 Jump
	
Label_122:
	var_117_bool = 0; // 0x7a PushV
	func_925(var_117_bool); // 0x7b NEW_2
	if(var_117_bool == 0) goto Label_137; // 0x7d JumpB
	
Label_126:
	lshWaitForAnimEnd(); // 0x7e Func
	var_118_string = var_3_string; // 0x80 PushT
	if(var_118_string == 0) goto Label_131; // 0x81 JumpB
	goto Label_136; // 0x82 Jump
	
Label_136:
	goto Label_151; // 0x88 Jump
	
Label_151:
	return 0; // 0x97 Return
	
Label_131:
	var_119_string = ""; // 0x83 PushV
	var_119_string = var_2_object; // 0x84 MovT
	func_657(var_119_string); // 0x85 NEW_2
	goto Label_126; // 0x87 Jump
	
Label_137:
	var_130_string = "all"; // 0x89 PushS
	var_131_string = "idle"; // 0x8a PushS
	PlayAnimation(var_130_string, var_131_string); // 0x8b Func
	
Label_141:
	WaitForAnimEnd(); // 0x8d Func
	var_132_string = var_3_string; // 0x8f PushT
	if(var_132_string == 0) goto Label_146; // 0x90 JumpB
	goto Label_151; // 0x91 Jump
	
Label_146:
	var_133_string = "all"; // 0x92 PushS
	var_134_string = "idle"; // 0x93 PushS
	PlayAnimation(var_133_string, var_134_string); // 0x94 Func
	goto Label_141; // 0x96 Jump
	
Label_105:
	var_135_string = ""; // 0x69 PushV
	var_135_string = "Neutral"; // 0x6a MovS
	func_152(var_79_object, var_135_string); // 0x6b NEW_2
	var_136_int = 520999; // 0x6d PushI
	SetMessage(var_136_int); // 0x6e TObjFunc
	ClearReplies(); // 0x70 TObjFunc
	var_137_int = 528488; // 0x72 PushI
	var_138_int = -1; // 0x73 PushI
	var_139_int = 29877; // 0x74 PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x75 TObjFunc
	goto Label_122; // 0x77 Jump
}


func_716(var_29_float)
{
	var_30_float = 0; var_31_float = 0; // 0x2cc PushV
	GetGameTime(var_31_float); // 0x2cd Func
	var_29_float = var_31_float; // 0x2cf Mov
	return 2; // 0x2d0 Return
}


func_721(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = ""; // 0x2d1 PushV
	var_40_string = "idle"; // 0x2d2 MovS
	var_41_int = var_38_int; // 0x2d3 Push
	if(var_41_int == 0) goto Label_726; // 0x2d4 JumpB
	var_40_string = var_40_string + var_38_int; // 0x2d5 Add2
	
Label_726:
	var_37_string = var_40_string; // 0x2d6 Mov
	return 2; // 0x2d7 Return
}


func_850(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); // 0x352 PushV
	GetMainOutdoorScene(var_21_object); // 0x353 Func
	var_23_bool = var_21_object == 0; // 0x355 NullEq
	if(var_23_bool == 0) goto Label_861; // 0x356 JumpB
	var_24_string = "Can't find main outdoor scene"; // 0x357 PushS
	Trace(var_24_string); // 0x358 Func
	var_22_object = 0; // 0x35a SetNull
	var_18_object = var_22_object; // 0x35b Mov
	return 4; // 0x35c Return
	
Label_861:
	GetMap(var_22_object); // 0x35d ObjFunc
	var_18_object = var_22_object; // 0x35f Mov
	return 4; // 0x360 Return
}


func_728(var_31_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0; // 0x2d8 PushV
	var_34_int = 0; // 0x2d9 MovI
	
Label_730:
	var_36_string = "all"; // 0x2da PushS
	var_37_string = ""; var_38_int = 0; // 0x2db PushV
	var_38_int = var_34_int; // 0x2dc Mov
	func_721(var_37_string, var_38_int); // 0x2dd NEW_2
	HasAnimation(var_35_bool, var_36_string, var_37_string); // 0x2df Func
	var_42_bool = var_35_bool == 0; // 0x2e1 Not
	if(var_42_bool == 0) goto Label_740; // 0x2e2 JumpB
	goto Label_743; // 0x2e3 Jump
	
Label_743:
	var_31_int = var_34_int; // 0x2e7 Mov
	return 4; // 0x2e8 Return
	
Label_740:
	var_43_int = 1; // 0x2e4 PushI
	var_34_int = var_34_int + var_43_int; // 0x2e5 Add2
	goto Label_730; // 0x2e6 Jump
}


func_479(var_8_bool)
{
	var_8_bool = 1; // 0x1df MovB
	return 0; // 0x1e0 Return
}


func_481()
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0; // 0x1e1 PushV
	WaitForAnimEnd(); // 0x1e2 Func
	var_29_bool = 0; // 0x1e4 PushV
	func_567(var_29_bool); // 0x1e5 NEW_2
	var_30_bool = var_29_bool == 0; // 0x1e7 Not
	if(var_30_bool == 0) goto Label_490; // 0x1e8 JumpB
	return 14; // 0x1e9 Return
	
Label_490:
	var_31_int = 0; // 0x1ea PushV
	func_728(var_31_int); // 0x1eb NEW_2
	var_22_int = var_31_int; // 0x1ec Mov
	var_23_int = 0; // 0x1ee MovI
	
Label_495:
	var_44_bool = 0; // 0x1ef PushV
	var_44_bool = 0; // 0x1f0 MovB
	var_45_int = 5; // 0x1f1 PushI
	var_46_bool = var_23_int < var_45_int; // 0x1f2 LT
	if(var_46_bool == 0) goto Label_505; // 0x1f3 JumpB
	var_47_bool = 0; // 0x1f4 PushV
	func_567(var_47_bool); // 0x1f5 NEW_2
	if(var_47_bool == 0) goto Label_505; // 0x1f7 JumpB
	var_44_bool = 1; // 0x1f8 MovB
	
Label_505:
	if(var_44_bool == 0) goto Label_557; // 0x1f9 JumpB
	var_48_int = 3; // 0x1fa PushI
	irand(var_24_int, var_48_int); // 0x1fb Func
	var_49_int = 0; // 0x1fd PushI
	var_50_bool = var_24_int == var_49_int; // 0x1fe Eq
	if(var_50_bool == 0) goto Label_529; // 0x1ff JumpB
	var_51_int = var_22_int; // 0x200 Push
	if(var_51_int == 0) goto Label_528; // 0x201 JumpB
	irand(var_25_int, var_22_int); // 0x202 Func
	var_52_string = "all"; // 0x204 PushS
	var_53_string = ""; var_54_int = 0; // 0x205 PushV
	var_54_int = var_25_int; // 0x206 Mov
	func_721(var_53_string, var_54_int); // 0x207 NEW_2
	PlayAnimation(var_52_string, var_53_string); // 0x209 Func
	WaitForAnimEnd(var_26_bool); // 0x20b Func
	var_55_bool = var_26_bool == 0; // 0x20d Not
	if(var_55_bool == 0) goto Label_528; // 0x20e JumpB
	goto Label_557; // 0x20f Jump
	
Label_557:
	ResetAAS(); // 0x22d Func
	return 14; // 0x22f Return
	
Label_528:
	goto Label_546; // 0x210 Jump
	
Label_546:
	var_56_bool = 0; // 0x222 PushV
	func_560(var_56_bool); // 0x223 NEW_2
	var_57_bool = var_56_bool == 0; // 0x225 Not
	if(var_57_bool == 0) goto Label_552; // 0x226 JumpB
	goto Label_557; // 0x227 Jump
	
Label_552:
	ResetAAS(); // 0x228 Func
	var_58_int = 1; // 0x22a PushI
	var_23_int = var_23_int + var_58_int; // 0x22b Add2
	goto Label_495; // 0x22c Jump
	
Label_529:
	var_59_int = 1; // 0x211 PushI
	var_60_bool = var_24_int == var_59_int; // 0x212 Eq
	if(var_60_bool == 0) goto Label_543; // 0x213 JumpB
	var_61_int = 4; // 0x214 PushI
	rand(var_27_float, var_61_int); // 0x215 Func
	var_62_int = 1; // 0x217 PushI
	var_63_int = var_27_float + var_62_int; // 0x218 Add
	Sleep(var_63_int, var_28_bool); // 0x219 Func
	var_64_bool = var_28_bool == 0; // 0x21b Not
	if(var_64_bool == 0) goto Label_542; // 0x21c JumpB
	goto Label_557; // 0x21d Jump
	
Label_542:
	goto Label_546; // 0x21e Jump
	
Label_543:
	var_65_int = var_23_int; // 0x21f Push
	if(var_65_int == 0) goto Label_546; // 0x220 JumpB
	goto Label_557; // 0x221 Jump
}


func_867(var_57_object, var_58_string, var_59_float)
{
	var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_object = Obj(); var_64_bool = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_object = Obj(); var_68_bool = 0; // 0x363 PushV
	GetMainOutdoorScene(var_67_object); // 0x364 Func
	var_69_bool = var_67_object == 0; // 0x366 NullEq
	if(var_69_bool == 0) goto Label_876; // 0x367 JumpB
	var_70_string = "Can't find main outdoor scene"; // 0x368 PushS
	Trace(var_70_string); // 0x369 Func
	return 8; // 0x36b Return
	
Label_876:
	GetLocator(var_58_string, var_68_bool, var_65_cvector, var_66_cvector); // 0x36c ObjFunc
	var_71_bool = var_68_bool == 0; // 0x36e Not
	if(var_71_bool == 0) goto Label_886; // 0x36f JumpB
	var_72_string = "Warning: outdoor scene locator "; // 0x370 PushS
	var_73_int = var_72_string + var_58_string; // 0x371 Add
	var_74_string = " doesnt exist"; // 0x372 PushS
	var_75_int = var_73_int + var_74_string; // 0x373 Add
	Trace(var_75_int); // 0x374 Func
	
Label_886:
	GetMap(var_57_object); // 0x376 ObjFunc
	var_76_bool = var_57_object == 0; // 0x378 NullEq
	if(var_76_bool == 0) goto Label_894; // 0x379 JumpB
	var_77_string = "Can't find map"; // 0x37a PushS
	Trace(var_77_string); // 0x37b Func
	return 8; // 0x37d Return
	
Label_894:
	var_78_float = GetByIndex(var_65_cvector, 0); // 0x37e PushE
	var_79_float = GetByIndex(var_65_cvector, 2); // 0x37f PushE
	SetMapParams(var_78_float, var_79_float, var_59_float); // 0x380 ObjFunc
	return 8; // 0x382 Return
}


func_745()
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x2e9 PushV
	var_16_string = "b7q01"; // 0x2ea PushS
	var_17_int = 5; // 0x2eb PushI
	SetVariable(var_16_string, var_17_int); // 0x2ec Func
	var_18_object = Obj(); // 0x2ee PushV
	func_850(var_18_object); // 0x2ef NEW_2
	var_15_object = var_18_object; // 0x2f0 Mov
	var_25_string = "b7q01WastedGotoViktor"; // 0x2f2 PushS
	var_26_string = "pt_map_viktor"; // 0x2f3 PushS
	var_27_int = 1; // 0x2f4 PushI
	var_28_int = 521026; // 0x2f5 PushI
	var_29_float = 0; // 0x2f6 PushV
	func_716(var_29_float); // 0x2f7 NEW_2
	AddMark(var_25_string, var_26_string, var_27_int, var_28_int, var_29_float); // 0x2f9 ObjFunc
	func_796(); // 0x2fc NEW_2
	return 2; // 0x2fe Return
}


