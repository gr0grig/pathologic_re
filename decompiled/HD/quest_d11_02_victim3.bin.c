task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool)
{
	var_9_int = 1; // 0x9b PushI
	if(var_9_int == 0) goto Label_231; // 0x9c JumpB
	func_457(); // 0x9e NEW_2
	var_11_int = 15392; // 0xa0 PushI
	var_12_bool = var_7_bool == var_11_int; // 0xa1 Eq
	if(var_12_bool == 0) goto Label_183; // 0xa2 JumpB
	var_13_string = ""; // 0xa3 PushV
	var_13_string = "Neutral"; // 0xa4 MovS
	func_132(var_8_bool, var_13_string); // 0xa5 NEW_2
	var_30_int = 514178; // 0xa7 PushI
	SetMessage(var_30_int); // 0xa8 TObjFunc
	ClearReplies(); // 0xaa TObjFunc
	var_31_int = 514179; // 0xac PushI
	var_32_int = 41568; // 0xad PushI
	var_33_int = 15393; // 0xae PushI
	AddReply(var_31_int, var_32_int, var_33_int); // 0xaf TObjFunc
	var_34_int = 539618; // 0xb1 PushI
	var_35_int = 41566; // 0xb2 PushI
	var_36_int = 41565; // 0xb3 PushI
	AddReply(var_34_int, var_35_int, var_36_int); // 0xb4 TObjFunc
	return 0; // 0xb6 Return
	
Label_183:
	var_37_int = 41566; // 0xb7 PushI
	var_38_bool = var_7_bool == var_37_int; // 0xb8 Eq
	if(var_38_bool == 0) goto Label_201; // 0xb9 JumpB
	var_39_string = ""; // 0xba PushV
	var_39_string = "Neutral"; // 0xbb MovS
	func_132(var_8_bool, var_39_string); // 0xbc NEW_2
	var_40_int = 539619; // 0xbe PushI
	SetMessage(var_40_int); // 0xbf TObjFunc
	ClearReplies(); // 0xc1 TObjFunc
	var_41_int = 539620; // 0xc3 PushI
	var_42_int = -1; // 0xc4 PushI
	var_43_int = 41567; // 0xc5 PushI
	AddReply(var_41_int, var_42_int, var_43_int); // 0xc6 TObjFunc
	return 0; // 0xc8 Return
	
Label_201:
	var_44_int = 41568; // 0xc9 PushI
	var_45_bool = var_7_bool == var_44_int; // 0xca Eq
	if(var_45_bool == 0) goto Label_219; // 0xcb JumpB
	var_46_string = ""; // 0xcc PushV
	var_46_string = "Neutral"; // 0xcd MovS
	func_132(var_8_bool, var_46_string); // 0xce NEW_2
	var_47_int = 539621; // 0xd0 PushI
	SetMessage(var_47_int); // 0xd1 TObjFunc
	ClearReplies(); // 0xd3 TObjFunc
	var_48_int = 539622; // 0xd5 PushI
	var_49_int = -1; // 0xd6 PushI
	var_50_int = 41569; // 0xd7 PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0xd8 TObjFunc
	return 0; // 0xda Return
	
Label_219:
	var_3_string = 1; // 0xdb TMovB
	var_51_bool = 0; // 0xdc PushV
	func_523(var_51_bool); // 0xdd NEW_2
	if(var_51_bool == 0) goto Label_227; // 0xdf JumpB
	lshStopAnimation(); // 0xe0 Func
	goto Label_229; // 0xe2 Jump
	
Label_229:
	return 0; // 0xe5 Return
	
Label_227:
	StopAnimation(); // 0xe3 Func
	
Label_231:
	return 0; // 0xe7 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0xf5 PushV
	var_10_string = "execute"; // 0xf6 PushS
	var_11_bool = var_7_string == var_10_string; // 0xf7 Eq
	if(var_11_bool == 0) goto Label_263; // 0xf8 JumpB
	var_1_object = 1; // 0xf9 TMovB
	var_12_string = "all"; // 0xfa PushS
	var_13_string = "bdie"; // 0xfb PushS
	PlayAnimation(var_12_string, var_13_string); // 0xfc Func
	WaitForAnimEnd(var_9_bool); // 0xfe Func
	var_14_bool = var_9_bool; // 0x100 Push
	if(var_14_bool == 0) goto Label_262; // 0x101 JumpB
	var_15_string = "all"; // 0x102 PushS
	var_16_string = "bdie"; // 0x103 PushS
	LockAnimationEnd(var_15_string, var_16_string); // 0x104 Func
	
Label_262:
	goto Label_267; // 0x106 Jump
	
Label_267:
	return 2; // 0x10b Return
	
Label_263:
	var_17_string = ""; // 0x107 PushV
	var_17_string = var_7_string; // 0x108 Mov
	func_293(var_9_bool, var_17_string); // 0x109 NEW_2
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_7_object = var_1_object; // 0x10c PushT
	if(var_7_object == 0) goto Label_274; // 0x10d JumpB
	var_8_string = "all"; // 0x10e PushS
	var_9_string = "bdie"; // 0x10f PushS
	LockAnimationEnd(var_8_string, var_9_string); // 0x110 Func
	
Label_274:
	return 0; // 0x112 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object)
{
	var_8_int = 0; var_9_int = 0; // 0x113 PushV
	var_10_string = "d11q02"; // 0x114 PushS
	GetVariable(var_10_string, var_9_int); // 0x115 Func
	var_11_bool = 0; // 0x117 PushV
	var_11_bool = 0; // 0x118 MovB
	var_12_int = 2; // 0x119 PushI
	var_13_bool = var_9_int == var_12_int; // 0x11a Eq
	if(var_13_bool == 0) goto Label_287; // 0x11b JumpB
	var_14_bool = var_1_object == 0; // 0x11c Not
	if(var_14_bool == 0) goto Label_287; // 0x11d JumpB
	var_11_bool = 1; // 0x11e MovB
	
Label_287:
	if(var_11_bool == 0) goto Label_292; // 0x11f JumpB
	var_15_object = Obj(); // 0x120 PushV
	var_15_object = var_7_object; // 0x121 Mov
	func_232(var_15_object); // 0x122 NEW_2
	
Label_292:
	return 2; // 0x124 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_7_bool = 0; // 0x141 PushV
	var_7_bool = 0; // 0x142 MovB
	var_8_object = var_0_object; // 0x143 PushT
	if(var_8_object == 0) goto Label_330; // 0x144 JumpB
	var_9_bool = 0; // 0x145 PushV
	func_337(var_9_bool); // 0x146 NEW_2
	if(var_9_bool == 0) goto Label_330; // 0x148 JumpB
	var_7_bool = 1; // 0x149 MovB
	
Label_330:
	if(var_7_bool == 0) goto Label_336; // 0x14a JumpB
	var_10_object = Obj(); // 0x14b PushV
	func_464(var_10_object); // 0x14c NEW_2
	RemoveActor(var_10_object); // 0x14e Func
	
Label_336:
	return 0; // 0x150 Return
}


event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_7_bool = 0; var_8_string = ""; var_9_string = ""; // 0x1ec PushV
	var_8_string = "quest_d11_02"; // 0x1ed MovS
	var_9_string = "actor_unload"; // 0x1ee MovS
	func_480(var_7_bool, var_8_string, var_9_string); // 0x1ef NEW_2
	return 0; // 0x1f1 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_1_object = 0; // 0xf0 TMovB
	
Label_241:
	Hold(); // 0xf1 Func
	goto Label_241; // 0xf3 Jump
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 70.0; // 0x4 MovF
	func_339(var_28_object, var_29_float); // 0x5 NEW_2
	var_74_bool = var_27_bool == 0; // 0x7 Not
	if(var_74_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_75_int = 0; // 0xd PushV
	func_517(var_75_int); // 0xe NEW_2
	SetNPCName(var_75_int); // 0x10 ObjFunc
	var_76_int = 0; // 0x12 PushV
	func_515(var_76_int); // 0x13 NEW_2
	SetNPCDescription(var_76_int); // 0x15 ObjFunc
	var_77_string = ""; // 0x17 PushV
	func_519(var_77_string); // 0x18 NEW_2
	SetPhoto(var_77_string); // 0x1a ObjFunc
	var_78_string = ""; // 0x1c PushV
	func_521(var_78_string); // 0x1d NEW_2
	SetPhoto2(var_78_string); // 0x1f ObjFunc
	var_79_int = 0; // 0x21 PushV
	func_498(var_79_int); // 0x22 NEW_2
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
	var_137_bool = var_26_bool == 0; // 0x38 Not
	if(var_137_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_138_object = Obj(); // 0x3f PushV
	var_138_object = var_17_object; // 0x40 Mov
	func_408(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_515(var_76_int)
{
	var_76_int = 515564; // 0x203 MovI
	return 0; // 0x204 Return
}


func_132(var_2_object, var_95_string)
{
	var_96_bool = 0; // 0x85 PushV
	func_523(var_96_bool); // 0x86 NEW_2
	var_97_bool = var_96_bool == 0; // 0x88 Not
	if(var_97_bool == 0) goto Label_139; // 0x89 JumpB
	return 0; // 0x8a Return
	
Label_139:
	var_98_bool = var_95_string == var_2_object; // 0x8b Eq
	if(var_98_bool == 0) goto Label_142; // 0x8c JumpB
	return 0; // 0x8d Return
	
Label_142:
	var_99_string = ""; var_100_bool = 0; // 0x8e PushV
	var_99_string = var_95_string; // 0x8f Mov
	var_101_string = ""; // 0x90 PushS
	var_102_bool = var_95_string == var_101_string; // 0x91 Eq
	if(var_102_bool == 0) goto Label_149; // 0x92 JumpB
	var_100_bool = 0; // 0x93 MovB
	goto Label_150; // 0x94 Jump
	
Label_150:
	func_442(var_99_string, var_100_bool); // 0x96 NEW_2
	var_2_object = var_95_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_100_bool = 1; // 0x95 MovB
}


func_517(var_75_int)
{
	var_75_int = 503349; // 0x205 MovI
	return 0; // 0x206 Return
}


func_519(var_77_string)
{
	var_77_string = "ui/NPC_Citizen2.png"; // 0x207 MovS
	return 0; // 0x208 Return
}


func_521(var_78_string)
{
	var_78_string = "ui/NPC_Citizen2_b.png"; // 0x209 MovS
	return 0; // 0x20a Return
}


func_523(var_70_bool)
{
	var_70_bool = 0; // 0x20b MovB
	return 0; // 0x20c Return
}


func_408()
{
	var_139_bool = 0; var_140_bool = 0; // 0x198 PushV
	var_141_bool = 1; // 0x199 PushB
	CameraSwitchToNormal(var_141_bool); // 0x19a Func
	var_142_bool = 0; // 0x19c PushV
	func_523(var_142_bool); // 0x19d NEW_2
	if(var_142_bool == 0) goto Label_417; // 0x19f JumpB
	goto Label_425; // 0x1a0 Jump
	
Label_425:
	return 2; // 0x1a9 Return
	
Label_417:
	var_143_string = "head"; // 0x1a1 PushS
	HasAnimationTrack(var_140_bool, var_143_string); // 0x1a2 Func
	var_144_bool = var_140_bool; // 0x1a4 Push
	if(var_144_bool == 0) goto Label_425; // 0x1a5 JumpB
	var_145_string = "head"; // 0x1a6 PushS
	UnlookAsync(var_145_string); // 0x1a7 Func
}


func_293(var_0_object, var_17_string)
{
	var_18_bool = 0; var_19_bool = 0; // 0x125 PushV
	var_20_string = "cleanup"; // 0x126 PushS
	var_21_bool = var_17_string == var_20_string; // 0x127 Eq
	if(var_21_bool == 0) goto Label_316; // 0x128 JumpB
	var_0_object = 1; // 0x129 TMovB
	IsLoaded(var_19_bool); // 0x12a Func
	var_22_bool = 0; // 0x12c PushV
	var_22_bool = 0; // 0x12d MovB
	var_23_bool = var_19_bool == 0; // 0x12e Not
	if(var_23_bool == 0) goto Label_309; // 0x12f JumpB
	var_24_bool = 0; // 0x130 PushV
	func_337(var_24_bool); // 0x131 NEW_2
	if(var_24_bool == 0) goto Label_309; // 0x133 JumpB
	var_22_bool = 1; // 0x134 MovB
	
Label_309:
	if(var_22_bool == 0) goto Label_315; // 0x135 JumpB
	var_25_object = Obj(); // 0x136 PushV
	func_464(var_25_object); // 0x137 NEW_2
	RemoveActor(var_25_object); // 0x139 Func
	
Label_315:
	goto Label_320; // 0x13b Jump
	
Label_320:
	return 2; // 0x140 Return
	
Label_316:
	var_28_string = "restore"; // 0x13c PushS
	var_29_bool = var_17_string == var_28_string; // 0x13d Eq
	if(var_29_bool == 0) goto Label_320; // 0x13e JumpB
	var_0_object = 0; // 0x13f TMovB
}


func_426(var_121_string)
{
	var_122_bool = 0; var_123_float = 0; var_124_float = 0; var_125_bool = 0; var_126_float = 0; var_127_float = 0; // 0x1aa PushV
	lshHasAnimation(var_125_bool, var_121_string); // 0x1ab Func
	var_128_bool = var_125_bool; // 0x1ad Push
	if(var_128_bool == 0) goto Label_437; // 0x1ae JumpB
	lshGetAnimTimes(var_121_string, var_126_float, var_127_float); // 0x1af Func
	var_129_bool = 0; // 0x1b1 PushB
	lshPlayAnimation(var_126_float, var_127_float, var_129_bool); // 0x1b2 Func
	goto Label_441; // 0x1b4 Jump
	
Label_441:
	return 6; // 0x1b9 Return
	
Label_437:
	var_130_string = "Can't find lsh animation : "; // 0x1b5 PushS
	var_131_int = var_130_string + var_121_string; // 0x1b6 Add
	Trace(var_131_int); // 0x1b7 Func
}


func_442(var_99_string, var_100_bool)
{
	var_103_bool = 0; var_104_float = 0; var_105_float = 0; var_106_bool = 0; var_107_float = 0; var_108_float = 0; // 0x1ba PushV
	lshHasAnimation(var_106_bool, var_99_string); // 0x1bb Func
	var_109_bool = var_106_bool; // 0x1bd Push
	if(var_109_bool == 0) goto Label_452; // 0x1be JumpB
	lshGetAnimTimes(var_99_string, var_107_float, var_108_float); // 0x1bf Func
	lshPlayAnimation(var_107_float, var_108_float, var_100_bool); // 0x1c1 Func
	goto Label_456; // 0x1c3 Jump
	
Label_456:
	return 6; // 0x1c8 Return
	
Label_452:
	var_110_string = "Can't find lsh animation : "; // 0x1c4 PushS
	var_111_int = var_110_string + var_99_string; // 0x1c5 Add
	Trace(var_111_int); // 0x1c6 Func
}


func_457()
{
	var_10_bool = 0; // 0x1c9 PushV
	func_523(var_10_bool); // 0x1ca NEW_2
	if(var_10_bool == 0) goto Label_463; // 0x1cc JumpB
	lshStopSpeech(); // 0x1cd Func
	
Label_463:
	return 0; // 0x1cf Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object; // 0x4b TMov
	var_1_object = var_88_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_94_int = 1; // 0x4e PushI
	if(var_94_int == 0) goto Label_102; // 0x4f JumpB
	var_95_string = ""; // 0x50 PushV
	var_95_string = "Neutral"; // 0x51 MovS
	func_132(var_89_object, var_95_string); // 0x52 NEW_2
	var_112_int = 514178; // 0x54 PushI
	SetMessage(var_112_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_113_int = 514179; // 0x59 PushI
	var_114_int = 41568; // 0x5a PushI
	var_115_int = 15393; // 0x5b PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x5c TObjFunc
	var_116_int = 539618; // 0x5e PushI
	var_117_int = 41566; // 0x5f PushI
	var_118_int = 41565; // 0x60 PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_119_bool = 0; // 0x66 PushV
	func_523(var_119_bool); // 0x67 NEW_2
	if(var_119_bool == 0) goto Label_117; // 0x69 JumpB
	
Label_106:
	lshWaitForAnimEnd(); // 0x6a Func
	var_120_string = var_3_string; // 0x6c PushT
	if(var_120_string == 0) goto Label_111; // 0x6d JumpB
	goto Label_116; // 0x6e Jump
	
Label_116:
	goto Label_131; // 0x74 Jump
	
Label_131:
	return 0; // 0x83 Return
	
Label_111:
	var_121_string = ""; // 0x6f PushV
	var_121_string = var_2_object; // 0x70 MovT
	func_426(var_121_string); // 0x71 NEW_2
	goto Label_106; // 0x73 Jump
	
Label_117:
	var_132_string = "all"; // 0x75 PushS
	var_133_string = "idle"; // 0x76 PushS
	PlayAnimation(var_132_string, var_133_string); // 0x77 Func
	
Label_121:
	WaitForAnimEnd(); // 0x79 Func
	var_134_string = var_3_string; // 0x7b PushT
	if(var_134_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_126:
	var_135_string = "all"; // 0x7e PushS
	var_136_string = "idle"; // 0x7f PushS
	PlayAnimation(var_135_string, var_136_string); // 0x80 Func
	goto Label_121; // 0x82 Jump
}


func_464(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x1d0 PushV
	self(var_12_object); // 0x1d1 Func
	var_10_object = var_12_object; // 0x1d3 Mov
	return 2; // 0x1d4 Return
}


func_337(var_9_bool)
{
	var_9_bool = 1; // 0x151 MovB
	return 0; // 0x152 Return
}


func_339(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x153 PushV
	GetPosition(var_40_cvector); // 0x154 ObjFunc
	GetEyesHeight(var_39_float); // 0x156 ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x158 PushE
	var_48_float = var_48_float + var_39_float; // 0x159 Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x15a PopE
	GetPosition(var_41_cvector); // 0x15b Func
	GetEyesHeight(var_39_float); // 0x15d Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x15f PushE
	var_49_float = var_49_float + var_39_float; // 0x160 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x161 PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x162 Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x163 PushE
	var_50_float = 0; // 0x164 MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x165 PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x166 Or
	var_52_float = sqrt(var_51_int); // 0x167 Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x168 Div2
	var_43_cvector = -var_42_cvector; // 0x169 Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x16a Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x16b PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x16c PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x16d Xor2
	func_470(var_54_cvector, var_55_cvector); // 0x16e NEW_2
	var_62_int = 25; // 0x170 PushI
	var_63_float = var_54_cvector * var_62_int; // 0x171 Mult
	var_64_int = var_53_float + var_63_float; // 0x172 Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x173 PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x174 Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x175 Add2
	IsOverrideActive(var_46_bool); // 0x176 Func
	var_66_bool = var_46_bool; // 0x178 Push
	if(var_66_bool == 0) goto Label_380; // 0x179 JumpB
	var_27_bool = 0; // 0x17a MovB
	return 18; // 0x17b Return
	
Label_380:
	StopWorld(); // 0x17c Func
	var_67_bool = 1; // 0x17e PushB
	CameraTransit(var_45_cvector, var_43_cvector, var_67_bool); // 0x17f Func
	var_68_float = GetByIndex(var_44_cvector, 0); // 0x181 PushE
	var_69_float = GetByIndex(var_44_cvector, 2); // 0x182 PushE
	Rotate(var_68_float, var_69_float); // 0x183 Func
	var_70_bool = 0; // 0x185 PushV
	func_523(var_70_bool); // 0x186 NEW_2
	if(var_70_bool == 0) goto Label_394; // 0x188 JumpB
	goto Label_402; // 0x189 Jump
	
Label_402:
	CameraWaitForPlayFinish(); // 0x192 Func
	ResumeWorld(); // 0x194 Func
	var_27_bool = 1; // 0x196 MovB
	return 18; // 0x197 Return
	
Label_394:
	var_71_string = "head"; // 0x18a PushS
	HasAnimationTrack(var_47_bool, var_71_string); // 0x18b Func
	var_72_bool = var_47_bool; // 0x18d Push
	if(var_72_bool == 0) goto Label_402; // 0x18e JumpB
	var_73_string = "head"; // 0x18f PushS
	LookAsyncCamera(var_73_string); // 0x190 Func
}


func_470(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x1d6 PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x1d7 Or
	var_58_float = sqrt(var_59_int); // 0x1d8 Sqrt2
	var_60_float = 0.0; // 0x1d9 PushF
	var_61_bool = var_58_float < var_60_float; // 0x1da LT
	if(var_61_bool == 0) goto Label_478; // 0x1db JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x1dc MovV
	return 2; // 0x1dd Return
	
Label_478:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x1de Div2
	return 2; // 0x1df Return
}


func_480(var_7_bool, var_8_string, var_9_string)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x1e0 PushV
	FindActor(var_11_object, var_8_string); // 0x1e1 Func
	var_12_bool = var_11_object == 0; // 0x1e3 NullEq
	if(var_12_bool == 0) goto Label_487; // 0x1e4 JumpB
	var_7_bool = 0; // 0x1e5 MovB
	return 2; // 0x1e6 Return
	
Label_487:
	Trigger(var_11_object, var_9_string); // 0x1e7 Func
	var_7_bool = 1; // 0x1e9 MovB
	return 2; // 0x1ea Return
}


func_232(var_15_object)
{
	var_16_int = 0; var_17_object = Obj(); // 0xe9 PushV
	var_17_object = var_15_object; // 0xea Mov
	TaskCall(0); // 0xeb TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0xec NEW_2
	TaskReturn(); // 0xed TaskReturn
	return 0; // 0xef Return
}


func_498(var_79_int)
{
	var_80_int = 0; var_81_int = 0; // 0x1f2 PushV
	var_82_string = "branch"; // 0x1f3 PushS
	GetVariable(var_82_string, var_81_int); // 0x1f4 Func
	var_83_int = 0; // 0x1f6 PushI
	var_84_bool = var_81_int == var_83_int; // 0x1f7 Eq
	if(var_84_bool == 0) goto Label_508; // 0x1f8 JumpB
	var_79_int = 1; // 0x1f9 MovI
	return 2; // 0x1fa Return
	
Label_508:
	var_85_int = 1; // 0x1fc PushI
	var_86_bool = var_81_int == var_85_int; // 0x1fd Eq
	if(var_86_bool == 0) goto Label_513; // 0x1fe JumpB
	var_79_int = 2; // 0x1ff MovI
	return 2; // 0x200 Return
	
Label_513:
	var_79_int = 3; // 0x201 MovI
	return 2; // 0x202 Return
}


