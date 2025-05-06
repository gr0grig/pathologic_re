task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xa0 PushI
	if(var_12_int == 0) goto Label_249; // 0xa1 JumpB
	func_578(); // 0xa3 NEW_2
	var_14_int = 36162; // 0xa5 PushI
	var_15_bool = var_11_object == var_14_int; // 0xa6 Eq
	if(var_15_bool == 0) goto Label_173; // 0xa7 JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xa8 PushV
	var_16_object = var_1_object; // 0xa9 MovT
	var_17_object = var_0_object; // 0xaa MovT
	func_653(); // 0xab NEW_2
	
Label_173:
	var_49_int = 36161; // 0xad PushI
	var_50_bool = var_10_bool == var_49_int; // 0xae Eq
	if(var_50_bool == 0) goto Label_201; // 0xaf JumpB
	var_51_string = ""; // 0xb0 PushV
	var_51_string = "Neutral"; // 0xb1 MovS
	func_137(var_11_object, var_51_string); // 0xb2 NEW_2
	var_68_int = 534520; // 0xb4 PushI
	SetMessage(var_68_int); // 0xb5 TObjFunc
	ClearReplies(); // 0xb7 TObjFunc
	var_69_bool = 0; var_70_object = Obj(); // 0xb9 PushV
	var_70_object = var_1_object; // 0xba MovT
	func_667(var_69_bool, var_70_object); // 0xbb NEW_2
	if(var_69_bool == 0) goto Label_195; // 0xbd JumpB
	var_88_int = 539598; // 0xbe PushI
	var_89_int = 41545; // 0xbf PushI
	var_90_int = 41544; // 0xc0 PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0xc1 TObjFunc
	
Label_195:
	var_91_int = 539597; // 0xc3 PushI
	var_92_int = -1; // 0xc4 PushI
	var_93_int = 41543; // 0xc5 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0xc6 TObjFunc
	return 0; // 0xc8 Return
	
Label_201:
	var_94_int = 41545; // 0xc9 PushI
	var_95_bool = var_10_bool == var_94_int; // 0xca Eq
	if(var_95_bool == 0) goto Label_219; // 0xcb JumpB
	var_96_string = ""; // 0xcc PushV
	var_96_string = "Neutral"; // 0xcd MovS
	func_137(var_11_object, var_96_string); // 0xce NEW_2
	var_97_int = 539599; // 0xd0 PushI
	SetMessage(var_97_int); // 0xd1 TObjFunc
	ClearReplies(); // 0xd3 TObjFunc
	var_98_int = 540801; // 0xd5 PushI
	var_99_int = 42853; // 0xd6 PushI
	var_100_int = 42852; // 0xd7 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0xd8 TObjFunc
	return 0; // 0xda Return
	
Label_219:
	var_101_int = 42853; // 0xdb PushI
	var_102_bool = var_10_bool == var_101_int; // 0xdc Eq
	if(var_102_bool == 0) goto Label_237; // 0xdd JumpB
	var_103_string = ""; // 0xde PushV
	var_103_string = "Neutral"; // 0xdf MovS
	func_137(var_11_object, var_103_string); // 0xe0 NEW_2
	var_104_int = 540802; // 0xe2 PushI
	SetMessage(var_104_int); // 0xe3 TObjFunc
	ClearReplies(); // 0xe5 TObjFunc
	var_105_int = 534521; // 0xe7 PushI
	var_106_int = -1; // 0xe8 PushI
	var_107_int = 36162; // 0xe9 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0xea TObjFunc
	return 0; // 0xec Return
	
Label_237:
	var_3_string = 1; // 0xed TMovB
	var_108_bool = 0; // 0xee PushV
	func_627(var_108_bool); // 0xef NEW_2
	if(var_108_bool == 0) goto Label_245; // 0xf1 JumpB
	lshStopAnimation(); // 0xf2 Func
	goto Label_247; // 0xf4 Jump
	
Label_247:
	return 0; // 0xf7 Return
	
Label_245:
	StopAnimation(); // 0xf5 Func
	
Label_249:
	return 0; // 0xf9 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_336(var_9_object, var_10_object); // 0x106 NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0x108 PushV
	var_15_object = var_10_object; // 0x109 Mov
	TaskCall(0); // 0x10a TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x10b NEW_2
	TaskReturn(); // 0x10c TaskReturn
	return 0; // 0x10e Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x13a PushI
	var_12_bool = var_10_int == var_11_int; // 0x13b Eq
	if(var_12_bool == 0) goto Label_335; // 0x13c JumpB
	var_13_bool = 0; // 0x13d PushV
	func_298(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x13e NEW_2
	if(var_13_bool == 0) goto Label_329; // 0x140 JumpB
	var_26_bool = var_2_object == 0; // 0x141 Not
	if(var_26_bool == 0) goto Label_328; // 0x142 JumpB
	var_27_object = Obj(); // 0x143 PushV
	var_27_object = var_4_bool; // 0x144 MovT
	func_567(var_27_object); // 0x145 NEW_2
	var_2_object = 1; // 0x147 TMovB
	
Label_328:
	goto Label_335; // 0x148 Jump
	
Label_335:
	return 0; // 0x14f Return
	
Label_329:
	var_34_object = var_2_object; // 0x149 PushT
	if(var_34_object == 0) goto Label_335; // 0x14a JumpB
	var_35_string = "head"; // 0x14b PushS
	UnlookAsync(var_35_string); // 0x14c Func
	var_2_object = 0; // 0x14e TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_250:
	var_10_float = 0; var_11_float = 0; // 0xfa PushV
	var_10_float = 300; // 0xfb MovI
	var_11_float = 100; // 0xfc MovI
	func_271(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_float, var_11_float); // 0xfd NEW_2
	var_72_int = 3; // 0xff PushI
	Sleep(var_72_int); // 0x100 Func
	goto Label_250; // 0x102 Jump
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 70.0; // 0x4 MovF
	func_449(var_26_object, var_27_float); // 0x5 NEW_2
	var_72_bool = var_25_bool == 0; // 0x7 Not
	if(var_72_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_73_int = 0; // 0xd PushV
	func_621(var_73_int); // 0xe NEW_2
	SetNPCName(var_73_int); // 0x10 ObjFunc
	var_74_int = 0; // 0x12 PushV
	func_619(var_74_int); // 0x13 NEW_2
	SetNPCDescription(var_74_int); // 0x15 ObjFunc
	var_75_string = ""; // 0x17 PushV
	func_623(var_75_string); // 0x18 NEW_2
	SetPhoto(var_75_string); // 0x1a ObjFunc
	var_76_string = ""; // 0x1c PushV
	func_625(var_76_string); // 0x1d NEW_2
	SetPhoto2(var_76_string); // 0x1f ObjFunc
	var_77_int = 0; // 0x21 PushV
	func_749(var_77_int); // 0x22 NEW_2
	SetPlayerName(var_77_int); // 0x24 ObjFunc
	var_23_int = -1; // 0x26 MovI
	IsOverrideActive(var_22_bool); // 0x27 Func
	var_85_bool = var_22_bool; // 0x29 Push
	if(var_85_bool == 0) goto Label_45; // 0x2a JumpB
	var_14_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_21_object); // 0x2d Func
	var_86_object = Obj(); var_87_object = Obj(); // 0x2f PushV
	var_86_object = var_15_object; // 0x30 Mov
	var_87_object = var_21_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_88_object, var_89_object, var_90_string, var_91_bool, var_86_object, var_87_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_24_bool); // 0x36 ObjFunc
	
Label_56:
	var_154_bool = var_24_bool == 0; // 0x38 Not
	if(var_154_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_155_object = Obj(); // 0x3f PushV
	var_155_object = var_15_object; // 0x40 Mov
	func_518(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_518()
{
	var_156_bool = 0; var_157_bool = 0; // 0x206 PushV
	var_158_bool = 1; // 0x207 PushB
	CameraSwitchToNormal(var_158_bool); // 0x208 Func
	var_159_bool = 0; // 0x20a PushV
	func_627(var_159_bool); // 0x20b NEW_2
	if(var_159_bool == 0) goto Label_527; // 0x20d JumpB
	goto Label_535; // 0x20e Jump
	
Label_535:
	return 2; // 0x217 Return
	
Label_527:
	var_160_string = "head"; // 0x20f PushS
	HasAnimationTrack(var_157_bool, var_160_string); // 0x210 Func
	var_161_bool = var_157_bool; // 0x212 Push
	if(var_161_bool == 0) goto Label_535; // 0x213 JumpB
	var_162_string = "head"; // 0x214 PushS
	UnlookAsync(var_162_string); // 0x215 Func
}


func_137(var_2_object, var_93_string)
{
	var_94_bool = 0; // 0x8a PushV
	func_627(var_94_bool); // 0x8b NEW_2
	var_95_bool = var_94_bool == 0; // 0x8d Not
	if(var_95_bool == 0) goto Label_144; // 0x8e JumpB
	return 0; // 0x8f Return
	
Label_144:
	var_96_bool = var_93_string == var_2_object; // 0x90 Eq
	if(var_96_bool == 0) goto Label_147; // 0x91 JumpB
	return 0; // 0x92 Return
	
Label_147:
	var_97_string = ""; var_98_bool = 0; // 0x93 PushV
	var_97_string = var_93_string; // 0x94 Mov
	var_99_string = ""; // 0x95 PushS
	var_100_bool = var_93_string == var_99_string; // 0x96 Eq
	if(var_100_bool == 0) goto Label_154; // 0x97 JumpB
	var_98_bool = 0; // 0x98 MovB
	goto Label_155; // 0x99 Jump
	
Label_155:
	func_552(var_97_string, var_98_bool); // 0x9b NEW_2
	var_2_object = var_93_string; // 0x9d TMov
	return 0; // 0x9e Return
	
Label_154:
	var_98_bool = 1; // 0x9a MovB
}


func_653()
{
	var_18_string = "d11q06"; // 0x28e PushS
	var_19_int = 3; // 0x28f PushI
	SetVariable(var_18_string, var_19_int); // 0x290 Func
	func_695(); // 0x293 NEW_2
	var_43_bool = 0; var_44_string = ""; var_45_string = ""; // 0x295 PushV
	var_44_string = "quest_d11_06"; // 0x296 MovS
	var_45_string = "place_maria"; // 0x297 MovS
	func_607(var_43_bool, var_44_string, var_45_string); // 0x298 NEW_2
	return 0; // 0x29a Return
}


func_271(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_10_float, var_11_float)
{
	var_12_bool = 0; // 0x110 PushV
	func_444(var_12_bool); // 0x111 NEW_2
	var_15_bool = var_12_bool == 0; // 0x113 Not
	if(var_15_bool == 0) goto Label_278; // 0x114 JumpB
	return 0; // 0x115 Return
	
Label_278:
	var_16_string = "player"; // 0x116 PushS
	FindActor(var_9_object, var_16_string); // 0x117 Func
	var_2_object = 0; // 0x119 TMovB
	var_3_string = 0; // 0x11a TMovB
	var_0_object = var_10_float; // 0x11b TMov
	var_1_object = var_11_float; // 0x11c TMov
	var_17_int = 10; // 0x11d PushI
	var_18_float = 1.0; // 0x11e PushF
	SetTimer(var_17_int, var_18_float); // 0x11f Func
	func_350(); // 0x122 NEW_2
	var_70_bool = var_3_string == 0; // 0x124 Not
	if(var_70_bool == 0) goto Label_297; // 0x125 JumpB
	var_71_int = 10; // 0x126 PushI
	KillTimer(var_71_int); // 0x127 Func
	
Label_297:
	return 0; // 0x129 Return
}


func_536(var_138_string)
{
	var_139_bool = 0; var_140_float = 0; var_141_float = 0; var_142_bool = 0; var_143_float = 0; var_144_float = 0; // 0x218 PushV
	lshHasAnimation(var_142_bool, var_138_string); // 0x219 Func
	var_145_bool = var_142_bool; // 0x21b Push
	if(var_145_bool == 0) goto Label_547; // 0x21c JumpB
	lshGetAnimTimes(var_138_string, var_143_float, var_144_float); // 0x21d Func
	var_146_bool = 0; // 0x21f PushB
	lshPlayAnimation(var_143_float, var_144_float, var_146_bool); // 0x220 Func
	goto Label_551; // 0x222 Jump
	
Label_551:
	return 6; // 0x227 Return
	
Label_547:
	var_147_string = "Can't find lsh animation : "; // 0x223 PushS
	var_148_int = var_147_string + var_138_string; // 0x224 Add
	Trace(var_148_int); // 0x225 Func
}


func_667(var_111_bool, var_112_object)
{
	var_113_bool = 0; // 0x29c PushV
	var_113_bool = 0; // 0x29d MovB
	var_114_bool = 0; var_115_object = Obj(); var_116_string = ""; // 0x29e PushV
	var_115_object = var_112_object; // 0x29f Mov
	var_116_string = "d11q06KapellaBeads"; // 0x2a0 MovS
	func_600(var_115_object, var_116_string); // 0x2a1 NEW_2
	if(var_114_bool == 0) goto Label_683; // 0x2a3 JumpB
	var_121_bool = 0; var_122_object = Obj(); var_123_string = ""; // 0x2a4 PushV
	var_122_object = var_112_object; // 0x2a5 Mov
	var_123_string = "d11q06KlaraRing"; // 0x2a6 MovS
	func_600(var_122_object, var_123_string); // 0x2a7 NEW_2
	if(var_121_bool == 0) goto Label_683; // 0x2a9 JumpB
	var_113_bool = 1; // 0x2aa MovB
	
Label_683:
	if(var_113_bool == 0) goto Label_693; // 0x2ab JumpB
	var_124_int = 0; var_125_string = ""; // 0x2ac PushV
	var_125_string = "d11q06"; // 0x2ad MovS
	func_595(var_124_int, var_125_string); // 0x2ae NEW_2
	var_128_int = 2; // 0x2b0 PushI
	var_129_bool = var_124_int == var_128_int; // 0x2b1 Eq
	if(var_129_bool == 0) goto Label_693; // 0x2b2 JumpB
	var_111_bool = 1; // 0x2b3 MovB
	return 0; // 0x2b4 Return
	
Label_693:
	var_111_bool = 0; // 0x2b5 MovB
	return 0; // 0x2b6 Return
}


func_552(var_97_string, var_98_bool)
{
	var_101_bool = 0; var_102_float = 0; var_103_float = 0; var_104_bool = 0; var_105_float = 0; var_106_float = 0; // 0x228 PushV
	lshHasAnimation(var_104_bool, var_97_string); // 0x229 Func
	var_107_bool = var_104_bool; // 0x22b Push
	if(var_107_bool == 0) goto Label_562; // 0x22c JumpB
	lshGetAnimTimes(var_97_string, var_105_float, var_106_float); // 0x22d Func
	lshPlayAnimation(var_105_float, var_106_float, var_98_bool); // 0x22f Func
	goto Label_566; // 0x231 Jump
	
Label_566:
	return 6; // 0x236 Return
	
Label_562:
	var_108_string = "Can't find lsh animation : "; // 0x232 PushS
	var_109_int = var_108_string + var_97_string; // 0x233 Add
	Trace(var_109_int); // 0x234 Func
}


func_298(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x12a PushV
	var_16_bool = var_4_bool == 0; // 0x12b NullEq
	if(var_16_bool == 0) goto Label_303; // 0x12c JumpB
	var_13_bool = 0; // 0x12d MovB
	return 2; // 0x12e Return
	
Label_303:
	var_17_float = 0; var_18_object = Obj(); // 0x12f PushV
	var_18_object = var_4_bool; // 0x130 MovT
	func_436(var_18_object); // 0x131 NEW_2
	var_15_float = sqrt(var_17_float); // 0x133 Sqrt2
	var_25_object = var_2_object; // 0x134 PushT
	if(var_25_object == 0) goto Label_311; // 0x135 JumpB
	var_15_float = var_15_float - var_1_object; // 0x136 Sub2
	
Label_311:
	var_13_bool = var_15_float < var_0_object; // 0x137 LT2
	return 2; // 0x138 Return
}


func_429(var_60_bool)
{
	var_60_bool = 1; // 0x1ad MovB
	return 0; // 0x1ae Return
}


func_431()
{
	StopAnimation(); // 0x1af Func
	StopGroup0(); // 0x1b1 Func
	return 0; // 0x1b3 Return
}


func_436(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x1b4 PushV
	GetPosition(var_22_cvector); // 0x1b5 Func
	GetPosition(var_23_cvector); // 0x1b7 ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x1b9 Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x1ba Or2
	return 6; // 0x1bb Return
}


func_695()
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x2b7 PushV
	var_22_int = 691; // 0x2b8 PushI
	var_23_int = 2; // 0x2b9 PushI
	var_24_int = 534539; // 0x2ba PushI
	CreateDiaryEntry(var_21_object, var_22_int, var_23_int, var_24_int); // 0x2bb Func
	var_25_bool = 0; var_26_object = Obj(); var_27_int = 0; // 0x2bd PushV
	var_26_object = var_21_object; // 0x2be Mov
	var_27_int = 686; // 0x2bf MovI
	func_721(var_25_bool, var_26_object, var_27_int); // 0x2c0 NEW_2
	return 2; // 0x2c2 Return
}


func_567(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x237 PushV
	GetEyesHeight(var_30_float); // 0x238 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x23a MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x23b PushE
	var_32_float = var_30_float; // 0x23c Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x23d PopE
	var_33_string = "head"; // 0x23e PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x23f Func
	return 4; // 0x241 Return
}


func_444(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0; // 0x1bc PushV
	IsLoaded(var_14_bool); // 0x1bd Func
	var_12_bool = var_14_bool; // 0x1bf Mov
	return 2; // 0x1c0 Return
}


func_449(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x1c1 PushV
	GetPosition(var_38_cvector); // 0x1c2 ObjFunc
	GetEyesHeight(var_37_float); // 0x1c4 ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x1c6 PushE
	var_46_float = var_46_float + var_37_float; // 0x1c7 Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x1c8 PopE
	GetPosition(var_39_cvector); // 0x1c9 Func
	GetEyesHeight(var_37_float); // 0x1cb Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x1cd PushE
	var_47_float = var_47_float + var_37_float; // 0x1ce Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x1cf PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x1d0 Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x1d1 PushE
	var_48_float = 0; // 0x1d2 MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x1d3 PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x1d4 Or
	var_50_float = sqrt(var_49_int); // 0x1d5 Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x1d6 Div2
	var_41_cvector = -var_40_cvector; // 0x1d7 Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x1d8 Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x1d9 PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x1da PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x1db Xor2
	func_585(var_52_cvector, var_53_cvector); // 0x1dc NEW_2
	var_60_int = 25; // 0x1de PushI
	var_61_float = var_52_cvector * var_60_int; // 0x1df Mult
	var_62_int = var_51_float + var_61_float; // 0x1e0 Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x1e1 PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x1e2 Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x1e3 Add2
	IsOverrideActive(var_44_bool); // 0x1e4 Func
	var_64_bool = var_44_bool; // 0x1e6 Push
	if(var_64_bool == 0) goto Label_490; // 0x1e7 JumpB
	var_25_bool = 0; // 0x1e8 MovB
	return 18; // 0x1e9 Return
	
Label_490:
	StopWorld(); // 0x1ea Func
	var_65_bool = 1; // 0x1ec PushB
	CameraTransit(var_43_cvector, var_41_cvector, var_65_bool); // 0x1ed Func
	var_66_float = GetByIndex(var_42_cvector, 0); // 0x1ef PushE
	var_67_float = GetByIndex(var_42_cvector, 2); // 0x1f0 PushE
	Rotate(var_66_float, var_67_float); // 0x1f1 Func
	var_68_bool = 0; // 0x1f3 PushV
	func_627(var_68_bool); // 0x1f4 NEW_2
	if(var_68_bool == 0) goto Label_504; // 0x1f6 JumpB
	goto Label_512; // 0x1f7 Jump
	
Label_512:
	CameraWaitForPlayFinish(); // 0x200 Func
	ResumeWorld(); // 0x202 Func
	var_25_bool = 1; // 0x204 MovB
	return 18; // 0x205 Return
	
Label_504:
	var_69_string = "head"; // 0x1f8 PushS
	HasAnimationTrack(var_45_bool, var_69_string); // 0x1f9 Func
	var_70_bool = var_45_bool; // 0x1fb Push
	if(var_70_bool == 0) goto Label_512; // 0x1fc JumpB
	var_71_string = "head"; // 0x1fd PushS
	LookAsyncCamera(var_71_string); // 0x1fe Func
}


func_578()
{
	var_13_bool = 0; // 0x242 PushV
	func_627(var_13_bool); // 0x243 NEW_2
	if(var_13_bool == 0) goto Label_584; // 0x245 JumpB
	lshStopSpeech(); // 0x246 Func
	
Label_584:
	return 0; // 0x248 Return
}


func_708(var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); // 0x2c4 PushV
	GetDiaryRoot(var_36_object); // 0x2c5 Func
	var_37_bool = var_36_object == 0; // 0x2c7 Not
	if(var_37_bool == 0) goto Label_718; // 0x2c8 JumpB
	var_38_string = "Can't retrieve diary root"; // 0x2c9 PushS
	Trace(var_38_string); // 0x2ca Func
	var_34_object = 0; // 0x2cc MovB
	return 2; // 0x2cd Return
	
Label_718:
	var_34_object = var_36_object; // 0x2ce Mov
	return 2; // 0x2cf Return
}


func_585(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x249 PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x24a Or
	var_56_float = sqrt(var_57_int); // 0x24b Sqrt2
	var_58_float = 0.0; // 0x24c PushF
	var_59_bool = var_56_float < var_58_float; // 0x24d LT
	if(var_59_bool == 0) goto Label_593; // 0x24e JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x24f MovV
	return 2; // 0x250 Return
	
Label_593:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x251 Div2
	return 2; // 0x252 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object; // 0x4b TMov
	var_1_object = var_86_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_92_int = 1; // 0x4e PushI
	if(var_92_int == 0) goto Label_107; // 0x4f JumpB
	var_93_string = ""; // 0x50 PushV
	var_93_string = "Neutral"; // 0x51 MovS
	func_137(var_87_object, var_93_string); // 0x52 NEW_2
	var_110_int = 534520; // 0x54 PushI
	SetMessage(var_110_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_111_bool = 0; var_112_object = Obj(); // 0x59 PushV
	var_112_object = var_1_object; // 0x5a MovT
	func_667(var_111_bool, var_112_object); // 0x5b NEW_2
	if(var_111_bool == 0) goto Label_99; // 0x5d JumpB
	var_130_int = 539598; // 0x5e PushI
	var_131_int = 41545; // 0x5f PushI
	var_132_int = 41544; // 0x60 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x61 TObjFunc
	
Label_99:
	var_133_int = 539597; // 0x63 PushI
	var_134_int = -1; // 0x64 PushI
	var_135_int = 41543; // 0x65 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x66 TObjFunc
	goto Label_107; // 0x68 Jump
	
Label_107:
	var_136_bool = 0; // 0x6b PushV
	func_627(var_136_bool); // 0x6c NEW_2
	if(var_136_bool == 0) goto Label_122; // 0x6e JumpB
	
Label_111:
	lshWaitForAnimEnd(); // 0x6f Func
	var_137_string = var_3_string; // 0x71 PushT
	if(var_137_string == 0) goto Label_116; // 0x72 JumpB
	goto Label_121; // 0x73 Jump
	
Label_121:
	goto Label_136; // 0x79 Jump
	
Label_136:
	return 0; // 0x88 Return
	
Label_116:
	var_138_string = ""; // 0x74 PushV
	var_138_string = var_2_object; // 0x75 MovT
	func_536(var_138_string); // 0x76 NEW_2
	goto Label_111; // 0x78 Jump
	
Label_122:
	var_149_string = "all"; // 0x7a PushS
	var_150_string = "idle"; // 0x7b PushS
	PlayAnimation(var_149_string, var_150_string); // 0x7c Func
	
Label_126:
	WaitForAnimEnd(); // 0x7e Func
	var_151_string = var_3_string; // 0x80 PushT
	if(var_151_string == 0) goto Label_131; // 0x81 JumpB
	goto Label_136; // 0x82 Jump
	
Label_131:
	var_152_string = "all"; // 0x83 PushS
	var_153_string = "idle"; // 0x84 PushS
	PlayAnimation(var_152_string, var_153_string); // 0x85 Func
	goto Label_126; // 0x87 Jump
}


func_336(var_2_object, var_3_string)
{
	func_431(); // 0x151 NEW_2
	var_11_int = 10; // 0x153 PushI
	KillTimer(var_11_int); // 0x154 Func
	var_12_object = var_2_object; // 0x156 PushT
	if(var_12_object == 0) goto Label_348; // 0x157 JumpB
	var_13_string = "head"; // 0x158 PushS
	UnlookAsync(var_13_string); // 0x159 Func
	var_2_object = 0; // 0x15b TMovB
	
Label_348:
	var_3_string = 1; // 0x15c TMovB
	return 0; // 0x15d Return
}


func_721(var_25_bool, var_26_object, var_27_int)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0; // 0x2d1 PushV
	var_34_object = Obj(); // 0x2d2 PushV
	func_708(var_34_object); // 0x2d3 NEW_2
	var_31_object = var_34_object; // 0x2d4 Mov
	Find(var_27_int, var_32_object); // 0x2d6 ObjFunc
	var_39_bool = var_32_object == 0; // 0x2d8 Not
	if(var_39_bool == 0) goto Label_736; // 0x2d9 JumpB
	var_40_string = "Can't find diary parent with id: "; // 0x2da PushS
	var_41_int = var_40_string + var_27_int; // 0x2db Add
	Trace(var_41_int); // 0x2dc Func
	var_25_bool = 0; // 0x2de MovB
	return 6; // 0x2df Return
	
Label_736:
	AddChild(var_26_object); // 0x2e0 ObjFunc
	var_42_int = 7; // 0x2e2 PushI
	SendWorldWndMessage(var_42_int); // 0x2e3 Func
	GetCategory(var_33_int); // 0x2e5 ObjFunc
	SetDiarySection(var_33_int); // 0x2e7 Func
	var_25_bool = 0; // 0x2e9 MovB
	return 6; // 0x2ea Return
}


func_595(var_124_int, var_125_string)
{
	var_126_int = 0; var_127_int = 0; // 0x253 PushV
	GetVariable(var_125_string, var_127_int); // 0x254 Func
	var_124_int = var_127_int; // 0x256 Mov
	return 2; // 0x257 Return
}


func_600(var_114_bool, var_116_string)
{
	var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_bool = 0; // 0x258 PushV
	GetInvItemByName(var_119_int, var_116_string); // 0x259 Func
	HasItem(var_119_int, var_120_bool); // 0x25b ObjFunc
	var_114_bool = var_120_bool; // 0x25d Mov
	return 4; // 0x25e Return
}


func_350()
{
	var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_bool = 0; var_24_float = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_float = 0; var_32_bool = 0; // 0x15e PushV
	WaitForAnimEnd(); // 0x15f Func
	var_33_bool = 0; // 0x161 PushV
	func_444(var_33_bool); // 0x162 NEW_2
	var_34_bool = var_33_bool == 0; // 0x164 Not
	if(var_34_bool == 0) goto Label_359; // 0x165 JumpB
	return 14; // 0x166 Return
	
Label_359:
	var_35_int = 0; // 0x167 PushV
	func_636(var_35_int); // 0x168 NEW_2
	var_26_int = var_35_int; // 0x169 Mov
	var_27_int = 0; // 0x16b MovI
	
Label_364:
	var_48_bool = 0; // 0x16c PushV
	var_48_bool = 0; // 0x16d MovB
	var_49_int = 5; // 0x16e PushI
	var_50_bool = var_27_int < var_49_int; // 0x16f LT
	if(var_50_bool == 0) goto Label_374; // 0x170 JumpB
	var_51_bool = 0; // 0x171 PushV
	func_444(var_51_bool); // 0x172 NEW_2
	if(var_51_bool == 0) goto Label_374; // 0x174 JumpB
	var_48_bool = 1; // 0x175 MovB
	
Label_374:
	if(var_48_bool == 0) goto Label_426; // 0x176 JumpB
	var_52_int = 3; // 0x177 PushI
	irand(var_28_int, var_52_int); // 0x178 Func
	var_53_int = 0; // 0x17a PushI
	var_54_bool = var_28_int == var_53_int; // 0x17b Eq
	if(var_54_bool == 0) goto Label_398; // 0x17c JumpB
	var_55_int = var_26_int; // 0x17d Push
	if(var_55_int == 0) goto Label_397; // 0x17e JumpB
	irand(var_29_int, var_26_int); // 0x17f Func
	var_56_string = "all"; // 0x181 PushS
	var_57_string = ""; var_58_int = 0; // 0x182 PushV
	var_58_int = var_29_int; // 0x183 Mov
	func_629(var_57_string, var_58_int); // 0x184 NEW_2
	PlayAnimation(var_56_string, var_57_string); // 0x186 Func
	WaitForAnimEnd(var_30_bool); // 0x188 Func
	var_59_bool = var_30_bool == 0; // 0x18a Not
	if(var_59_bool == 0) goto Label_397; // 0x18b JumpB
	goto Label_426; // 0x18c Jump
	
Label_426:
	ResetAAS(); // 0x1aa Func
	return 14; // 0x1ac Return
	
Label_397:
	goto Label_415; // 0x18d Jump
	
Label_415:
	var_60_bool = 0; // 0x19f PushV
	func_429(var_60_bool); // 0x1a0 NEW_2
	var_61_bool = var_60_bool == 0; // 0x1a2 Not
	if(var_61_bool == 0) goto Label_421; // 0x1a3 JumpB
	goto Label_426; // 0x1a4 Jump
	
Label_421:
	ResetAAS(); // 0x1a5 Func
	var_62_int = 1; // 0x1a7 PushI
	var_27_int = var_27_int + var_62_int; // 0x1a8 Add2
	goto Label_364; // 0x1a9 Jump
	
Label_398:
	var_63_int = 1; // 0x18e PushI
	var_64_bool = var_28_int == var_63_int; // 0x18f Eq
	if(var_64_bool == 0) goto Label_412; // 0x190 JumpB
	var_65_int = 4; // 0x191 PushI
	rand(var_31_float, var_65_int); // 0x192 Func
	var_66_int = 1; // 0x194 PushI
	var_67_int = var_31_float + var_66_int; // 0x195 Add
	Sleep(var_67_int, var_32_bool); // 0x196 Func
	var_68_bool = var_32_bool == 0; // 0x198 Not
	if(var_68_bool == 0) goto Label_411; // 0x199 JumpB
	goto Label_426; // 0x19a Jump
	
Label_411:
	goto Label_415; // 0x19b Jump
	
Label_412:
	var_69_int = var_27_int; // 0x19c Push
	if(var_69_int == 0) goto Label_415; // 0x19d JumpB
	goto Label_426; // 0x19e Jump
}


func_607(var_43_bool, var_44_string, var_45_string)
{
	var_46_object = Obj(); var_47_object = Obj(); // 0x25f PushV
	FindActor(var_47_object, var_44_string); // 0x260 Func
	var_48_bool = var_47_object == 0; // 0x262 NullEq
	if(var_48_bool == 0) goto Label_614; // 0x263 JumpB
	var_43_bool = 0; // 0x264 MovB
	return 2; // 0x265 Return
	
Label_614:
	Trigger(var_47_object, var_45_string); // 0x266 Func
	var_43_bool = 1; // 0x268 MovB
	return 2; // 0x269 Return
}


func_619(var_74_int)
{
	var_74_int = 515556; // 0x26b MovI
	return 0; // 0x26c Return
}


func_621(var_73_int)
{
	var_73_int = 503341; // 0x26d MovI
	return 0; // 0x26e Return
}


func_749(var_77_int)
{
	var_78_int = 0; var_79_int = 0; // 0x2ed PushV
	var_80_string = "branch"; // 0x2ee PushS
	GetVariable(var_80_string, var_79_int); // 0x2ef Func
	var_81_int = 0; // 0x2f1 PushI
	var_82_bool = var_79_int == var_81_int; // 0x2f2 Eq
	if(var_82_bool == 0) goto Label_759; // 0x2f3 JumpB
	var_77_int = 1; // 0x2f4 MovI
	return 2; // 0x2f5 Return
	
Label_759:
	var_83_int = 1; // 0x2f7 PushI
	var_84_bool = var_79_int == var_83_int; // 0x2f8 Eq
	if(var_84_bool == 0) goto Label_764; // 0x2f9 JumpB
	var_77_int = 2; // 0x2fa MovI
	return 2; // 0x2fb Return
	
Label_764:
	var_77_int = 3; // 0x2fc MovI
	return 2; // 0x2fd Return
}


func_623(var_75_string)
{
	var_75_string = "ui/NPC_Citizen3.png"; // 0x26f MovS
	return 0; // 0x270 Return
}


func_625(var_76_string)
{
	var_76_string = "ui/NPC_Citizen3_b.png"; // 0x271 MovS
	return 0; // 0x272 Return
}


func_627(var_68_bool)
{
	var_68_bool = 0; // 0x273 MovB
	return 0; // 0x274 Return
}


func_629(var_41_string, var_42_int)
{
	var_43_string = ""; var_44_string = ""; // 0x275 PushV
	var_44_string = "idle"; // 0x276 MovS
	var_45_int = var_42_int; // 0x277 Push
	if(var_45_int == 0) goto Label_634; // 0x278 JumpB
	var_44_string = var_44_string + var_42_int; // 0x279 Add2
	
Label_634:
	var_41_string = var_44_string; // 0x27a Mov
	return 2; // 0x27b Return
}


func_636(var_35_int)
{
	var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_bool = 0; // 0x27c PushV
	var_38_int = 0; // 0x27d MovI
	
Label_638:
	var_40_string = "all"; // 0x27e PushS
	var_41_string = ""; var_42_int = 0; // 0x27f PushV
	var_42_int = var_38_int; // 0x280 Mov
	func_629(var_41_string, var_42_int); // 0x281 NEW_2
	HasAnimation(var_39_bool, var_40_string, var_41_string); // 0x283 Func
	var_46_bool = var_39_bool == 0; // 0x285 Not
	if(var_46_bool == 0) goto Label_648; // 0x286 JumpB
	goto Label_651; // 0x287 Jump
	
Label_651:
	var_35_int = var_38_int; // 0x28b Mov
	return 4; // 0x28c Return
	
Label_648:
	var_47_int = 1; // 0x288 PushI
	var_38_int = var_38_int + var_47_int; // 0x289 Add2
	goto Label_638; // 0x28a Jump
}


