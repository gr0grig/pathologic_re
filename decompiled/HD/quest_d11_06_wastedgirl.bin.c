task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xa0 PushI
	if(var_12_int == 0) goto Label_254; // 0xa1 JumpB
	func_583(); // 0xa3 NEW_2
	var_14_int = 36167; // 0xa5 PushI
	var_15_bool = var_11_object == var_14_int; // 0xa6 Eq
	if(var_15_bool == 0) goto Label_173; // 0xa7 JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xa8 PushV
	var_16_object = var_1_object; // 0xa9 MovT
	var_17_object = var_0_object; // 0xaa MovT
	func_658(); // 0xab NEW_2
	
Label_173:
	var_49_int = 36166; // 0xad PushI
	var_50_bool = var_10_bool == var_49_int; // 0xae Eq
	if(var_50_bool == 0) goto Label_201; // 0xaf JumpB
	var_51_string = ""; // 0xb0 PushV
	var_51_string = "Neutral"; // 0xb1 MovS
	func_137(var_11_object, var_51_string); // 0xb2 NEW_2
	var_68_int = 534525; // 0xb4 PushI
	SetMessage(var_68_int); // 0xb5 TObjFunc
	ClearReplies(); // 0xb7 TObjFunc
	var_69_bool = 0; var_70_object = Obj(); // 0xb9 PushV
	var_70_object = var_1_object; // 0xba MovT
	func_672(var_69_bool, var_70_object); // 0xbb NEW_2
	if(var_69_bool == 0) goto Label_195; // 0xbd JumpB
	var_88_int = 539591; // 0xbe PushI
	var_89_int = 41538; // 0xbf PushI
	var_90_int = 41537; // 0xc0 PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0xc1 TObjFunc
	
Label_195:
	var_91_int = 539590; // 0xc3 PushI
	var_92_int = -1; // 0xc4 PushI
	var_93_int = 41536; // 0xc5 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0xc6 TObjFunc
	return 0; // 0xc8 Return
	
Label_201:
	var_94_int = 41538; // 0xc9 PushI
	var_95_bool = var_10_bool == var_94_int; // 0xca Eq
	if(var_95_bool == 0) goto Label_224; // 0xcb JumpB
	var_96_string = ""; // 0xcc PushV
	var_96_string = "Neutral"; // 0xcd MovS
	func_137(var_11_object, var_96_string); // 0xce NEW_2
	var_97_int = 539592; // 0xd0 PushI
	SetMessage(var_97_int); // 0xd1 TObjFunc
	ClearReplies(); // 0xd3 TObjFunc
	var_98_int = 539593; // 0xd5 PushI
	var_99_int = 41540; // 0xd6 PushI
	var_100_int = 41539; // 0xd7 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0xd8 TObjFunc
	var_101_int = 539596; // 0xda PushI
	var_102_int = -1; // 0xdb PushI
	var_103_int = 41542; // 0xdc PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0xdd TObjFunc
	return 0; // 0xdf Return
	
Label_224:
	var_104_int = 41540; // 0xe0 PushI
	var_105_bool = var_10_bool == var_104_int; // 0xe1 Eq
	if(var_105_bool == 0) goto Label_242; // 0xe2 JumpB
	var_106_string = ""; // 0xe3 PushV
	var_106_string = "Neutral"; // 0xe4 MovS
	func_137(var_11_object, var_106_string); // 0xe5 NEW_2
	var_107_int = 539594; // 0xe7 PushI
	SetMessage(var_107_int); // 0xe8 TObjFunc
	ClearReplies(); // 0xea TObjFunc
	var_108_int = 534526; // 0xec PushI
	var_109_int = -1; // 0xed PushI
	var_110_int = 36167; // 0xee PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0xef TObjFunc
	return 0; // 0xf1 Return
	
Label_242:
	var_3_string = 1; // 0xf2 TMovB
	var_111_bool = 0; // 0xf3 PushV
	func_632(var_111_bool); // 0xf4 NEW_2
	if(var_111_bool == 0) goto Label_250; // 0xf6 JumpB
	lshStopAnimation(); // 0xf7 Func
	goto Label_252; // 0xf9 Jump
	
Label_252:
	return 0; // 0xfc Return
	
Label_250:
	StopAnimation(); // 0xfa Func
	
Label_254:
	return 0; // 0xfe Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_341(var_9_object, var_10_object); // 0x10b NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0x10d PushV
	var_15_object = var_10_object; // 0x10e Mov
	TaskCall(0); // 0x10f TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x110 NEW_2
	TaskReturn(); // 0x111 TaskReturn
	return 0; // 0x113 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x13f PushI
	var_12_bool = var_10_int == var_11_int; // 0x140 Eq
	if(var_12_bool == 0) goto Label_340; // 0x141 JumpB
	var_13_bool = 0; // 0x142 PushV
	func_303(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x143 NEW_2
	if(var_13_bool == 0) goto Label_334; // 0x145 JumpB
	var_26_bool = var_2_object == 0; // 0x146 Not
	if(var_26_bool == 0) goto Label_333; // 0x147 JumpB
	var_27_object = Obj(); // 0x148 PushV
	var_27_object = var_4_bool; // 0x149 MovT
	func_572(var_27_object); // 0x14a NEW_2
	var_2_object = 1; // 0x14c TMovB
	
Label_333:
	goto Label_340; // 0x14d Jump
	
Label_340:
	return 0; // 0x154 Return
	
Label_334:
	var_34_object = var_2_object; // 0x14e PushT
	if(var_34_object == 0) goto Label_340; // 0x14f JumpB
	var_35_string = "head"; // 0x150 PushS
	UnlookAsync(var_35_string); // 0x151 Func
	var_2_object = 0; // 0x153 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_255:
	var_10_float = 0; var_11_float = 0; // 0xff PushV
	var_10_float = 300; // 0x100 MovI
	var_11_float = 100; // 0x101 MovI
	func_276(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_float, var_11_float); // 0x102 NEW_2
	var_72_int = 3; // 0x104 PushI
	Sleep(var_72_int); // 0x105 Func
	goto Label_255; // 0x107 Jump
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 70.0; // 0x4 MovF
	func_454(var_26_object, var_27_float); // 0x5 NEW_2
	var_72_bool = var_25_bool == 0; // 0x7 Not
	if(var_72_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_73_int = 0; // 0xd PushV
	func_626(var_73_int); // 0xe NEW_2
	SetNPCName(var_73_int); // 0x10 ObjFunc
	var_74_int = 0; // 0x12 PushV
	func_624(var_74_int); // 0x13 NEW_2
	SetNPCDescription(var_74_int); // 0x15 ObjFunc
	var_75_string = ""; // 0x17 PushV
	func_628(var_75_string); // 0x18 NEW_2
	SetPhoto(var_75_string); // 0x1a ObjFunc
	var_76_string = ""; // 0x1c PushV
	func_630(var_76_string); // 0x1d NEW_2
	SetPhoto2(var_76_string); // 0x1f ObjFunc
	var_77_int = 0; // 0x21 PushV
	func_754(var_77_int); // 0x22 NEW_2
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
	func_523(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_641(var_35_int)
{
	var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_bool = 0; // 0x281 PushV
	var_38_int = 0; // 0x282 MovI
	
Label_643:
	var_40_string = "all"; // 0x283 PushS
	var_41_string = ""; var_42_int = 0; // 0x284 PushV
	var_42_int = var_38_int; // 0x285 Mov
	func_634(var_41_string, var_42_int); // 0x286 NEW_2
	HasAnimation(var_39_bool, var_40_string, var_41_string); // 0x288 Func
	var_46_bool = var_39_bool == 0; // 0x28a Not
	if(var_46_bool == 0) goto Label_653; // 0x28b JumpB
	goto Label_656; // 0x28c Jump
	
Label_656:
	var_35_int = var_38_int; // 0x290 Mov
	return 4; // 0x291 Return
	
Label_653:
	var_47_int = 1; // 0x28d PushI
	var_38_int = var_38_int + var_47_int; // 0x28e Add2
	goto Label_643; // 0x28f Jump
}


func_137(var_2_object, var_93_string)
{
	var_94_bool = 0; // 0x8a PushV
	func_632(var_94_bool); // 0x8b NEW_2
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
	func_557(var_97_string, var_98_bool); // 0x9b NEW_2
	var_2_object = var_93_string; // 0x9d TMov
	return 0; // 0x9e Return
	
Label_154:
	var_98_bool = 1; // 0x9a MovB
}


func_523()
{
	var_156_bool = 0; var_157_bool = 0; // 0x20b PushV
	var_158_bool = 1; // 0x20c PushB
	CameraSwitchToNormal(var_158_bool); // 0x20d Func
	var_159_bool = 0; // 0x20f PushV
	func_632(var_159_bool); // 0x210 NEW_2
	if(var_159_bool == 0) goto Label_532; // 0x212 JumpB
	goto Label_540; // 0x213 Jump
	
Label_540:
	return 2; // 0x21c Return
	
Label_532:
	var_160_string = "head"; // 0x214 PushS
	HasAnimationTrack(var_157_bool, var_160_string); // 0x215 Func
	var_161_bool = var_157_bool; // 0x217 Push
	if(var_161_bool == 0) goto Label_540; // 0x218 JumpB
	var_162_string = "head"; // 0x219 PushS
	UnlookAsync(var_162_string); // 0x21a Func
}


func_658()
{
	var_18_string = "d11q06"; // 0x293 PushS
	var_19_int = 3; // 0x294 PushI
	SetVariable(var_18_string, var_19_int); // 0x295 Func
	func_700(); // 0x298 NEW_2
	var_43_bool = 0; var_44_string = ""; var_45_string = ""; // 0x29a PushV
	var_44_string = "quest_d11_06"; // 0x29b MovS
	var_45_string = "place_maria"; // 0x29c MovS
	func_612(var_43_bool, var_44_string, var_45_string); // 0x29d NEW_2
	return 0; // 0x29f Return
}


func_276(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_10_float, var_11_float)
{
	var_12_bool = 0; // 0x115 PushV
	func_449(var_12_bool); // 0x116 NEW_2
	var_15_bool = var_12_bool == 0; // 0x118 Not
	if(var_15_bool == 0) goto Label_283; // 0x119 JumpB
	return 0; // 0x11a Return
	
Label_283:
	var_16_string = "player"; // 0x11b PushS
	FindActor(var_9_object, var_16_string); // 0x11c Func
	var_2_object = 0; // 0x11e TMovB
	var_3_string = 0; // 0x11f TMovB
	var_0_object = var_10_float; // 0x120 TMov
	var_1_object = var_11_float; // 0x121 TMov
	var_17_int = 10; // 0x122 PushI
	var_18_float = 1.0; // 0x123 PushF
	SetTimer(var_17_int, var_18_float); // 0x124 Func
	func_355(); // 0x127 NEW_2
	var_70_bool = var_3_string == 0; // 0x129 Not
	if(var_70_bool == 0) goto Label_302; // 0x12a JumpB
	var_71_int = 10; // 0x12b PushI
	KillTimer(var_71_int); // 0x12c Func
	
Label_302:
	return 0; // 0x12e Return
}


func_541(var_138_string)
{
	var_139_bool = 0; var_140_float = 0; var_141_float = 0; var_142_bool = 0; var_143_float = 0; var_144_float = 0; // 0x21d PushV
	lshHasAnimation(var_142_bool, var_138_string); // 0x21e Func
	var_145_bool = var_142_bool; // 0x220 Push
	if(var_145_bool == 0) goto Label_552; // 0x221 JumpB
	lshGetAnimTimes(var_138_string, var_143_float, var_144_float); // 0x222 Func
	var_146_bool = 0; // 0x224 PushB
	lshPlayAnimation(var_143_float, var_144_float, var_146_bool); // 0x225 Func
	goto Label_556; // 0x227 Jump
	
Label_556:
	return 6; // 0x22c Return
	
Label_552:
	var_147_string = "Can't find lsh animation : "; // 0x228 PushS
	var_148_int = var_147_string + var_138_string; // 0x229 Add
	Trace(var_148_int); // 0x22a Func
}


func_672(var_111_bool, var_112_object)
{
	var_113_bool = 0; // 0x2a1 PushV
	var_113_bool = 0; // 0x2a2 MovB
	var_114_bool = 0; var_115_object = Obj(); var_116_string = ""; // 0x2a3 PushV
	var_115_object = var_112_object; // 0x2a4 Mov
	var_116_string = "d11q06KapellaBeads"; // 0x2a5 MovS
	func_605(var_115_object, var_116_string); // 0x2a6 NEW_2
	if(var_114_bool == 0) goto Label_688; // 0x2a8 JumpB
	var_121_bool = 0; var_122_object = Obj(); var_123_string = ""; // 0x2a9 PushV
	var_122_object = var_112_object; // 0x2aa Mov
	var_123_string = "d11q06KlaraRing"; // 0x2ab MovS
	func_605(var_122_object, var_123_string); // 0x2ac NEW_2
	if(var_121_bool == 0) goto Label_688; // 0x2ae JumpB
	var_113_bool = 1; // 0x2af MovB
	
Label_688:
	if(var_113_bool == 0) goto Label_698; // 0x2b0 JumpB
	var_124_int = 0; var_125_string = ""; // 0x2b1 PushV
	var_125_string = "d11q06"; // 0x2b2 MovS
	func_600(var_124_int, var_125_string); // 0x2b3 NEW_2
	var_128_int = 2; // 0x2b5 PushI
	var_129_bool = var_124_int == var_128_int; // 0x2b6 Eq
	if(var_129_bool == 0) goto Label_698; // 0x2b7 JumpB
	var_111_bool = 1; // 0x2b8 MovB
	return 0; // 0x2b9 Return
	
Label_698:
	var_111_bool = 0; // 0x2ba MovB
	return 0; // 0x2bb Return
}


func_557(var_97_string, var_98_bool)
{
	var_101_bool = 0; var_102_float = 0; var_103_float = 0; var_104_bool = 0; var_105_float = 0; var_106_float = 0; // 0x22d PushV
	lshHasAnimation(var_104_bool, var_97_string); // 0x22e Func
	var_107_bool = var_104_bool; // 0x230 Push
	if(var_107_bool == 0) goto Label_567; // 0x231 JumpB
	lshGetAnimTimes(var_97_string, var_105_float, var_106_float); // 0x232 Func
	lshPlayAnimation(var_105_float, var_106_float, var_98_bool); // 0x234 Func
	goto Label_571; // 0x236 Jump
	
Label_571:
	return 6; // 0x23b Return
	
Label_567:
	var_108_string = "Can't find lsh animation : "; // 0x237 PushS
	var_109_int = var_108_string + var_97_string; // 0x238 Add
	Trace(var_109_int); // 0x239 Func
}


func_303(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x12f PushV
	var_16_bool = var_4_bool == 0; // 0x130 NullEq
	if(var_16_bool == 0) goto Label_308; // 0x131 JumpB
	var_13_bool = 0; // 0x132 MovB
	return 2; // 0x133 Return
	
Label_308:
	var_17_float = 0; var_18_object = Obj(); // 0x134 PushV
	var_18_object = var_4_bool; // 0x135 MovT
	func_441(var_18_object); // 0x136 NEW_2
	var_15_float = sqrt(var_17_float); // 0x138 Sqrt2
	var_25_object = var_2_object; // 0x139 PushT
	if(var_25_object == 0) goto Label_316; // 0x13a JumpB
	var_15_float = var_15_float - var_1_object; // 0x13b Sub2
	
Label_316:
	var_13_bool = var_15_float < var_0_object; // 0x13c LT2
	return 2; // 0x13d Return
}


func_434(var_60_bool)
{
	var_60_bool = 1; // 0x1b2 MovB
	return 0; // 0x1b3 Return
}


func_436()
{
	StopAnimation(); // 0x1b4 Func
	StopGroup0(); // 0x1b6 Func
	return 0; // 0x1b8 Return
}


func_441(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x1b9 PushV
	GetPosition(var_22_cvector); // 0x1ba Func
	GetPosition(var_23_cvector); // 0x1bc ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x1be Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x1bf Or2
	return 6; // 0x1c0 Return
}


func_700()
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x2bc PushV
	var_22_int = 691; // 0x2bd PushI
	var_23_int = 2; // 0x2be PushI
	var_24_int = 534539; // 0x2bf PushI
	CreateDiaryEntry(var_21_object, var_22_int, var_23_int, var_24_int); // 0x2c0 Func
	var_25_bool = 0; var_26_object = Obj(); var_27_int = 0; // 0x2c2 PushV
	var_26_object = var_21_object; // 0x2c3 Mov
	var_27_int = 686; // 0x2c4 MovI
	func_726(var_25_bool, var_26_object, var_27_int); // 0x2c5 NEW_2
	return 2; // 0x2c7 Return
}


func_572(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x23c PushV
	GetEyesHeight(var_30_float); // 0x23d ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x23f MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x240 PushE
	var_32_float = var_30_float; // 0x241 Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x242 PopE
	var_33_string = "head"; // 0x243 PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x244 Func
	return 4; // 0x246 Return
}


func_449(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0; // 0x1c1 PushV
	IsLoaded(var_14_bool); // 0x1c2 Func
	var_12_bool = var_14_bool; // 0x1c4 Mov
	return 2; // 0x1c5 Return
}


func_454(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x1c6 PushV
	GetPosition(var_38_cvector); // 0x1c7 ObjFunc
	GetEyesHeight(var_37_float); // 0x1c9 ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x1cb PushE
	var_46_float = var_46_float + var_37_float; // 0x1cc Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x1cd PopE
	GetPosition(var_39_cvector); // 0x1ce Func
	GetEyesHeight(var_37_float); // 0x1d0 Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x1d2 PushE
	var_47_float = var_47_float + var_37_float; // 0x1d3 Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x1d4 PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x1d5 Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x1d6 PushE
	var_48_float = 0; // 0x1d7 MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x1d8 PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x1d9 Or
	var_50_float = sqrt(var_49_int); // 0x1da Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x1db Div2
	var_41_cvector = -var_40_cvector; // 0x1dc Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x1dd Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x1de PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x1df PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x1e0 Xor2
	func_590(var_52_cvector, var_53_cvector); // 0x1e1 NEW_2
	var_60_int = 25; // 0x1e3 PushI
	var_61_float = var_52_cvector * var_60_int; // 0x1e4 Mult
	var_62_int = var_51_float + var_61_float; // 0x1e5 Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x1e6 PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x1e7 Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x1e8 Add2
	IsOverrideActive(var_44_bool); // 0x1e9 Func
	var_64_bool = var_44_bool; // 0x1eb Push
	if(var_64_bool == 0) goto Label_495; // 0x1ec JumpB
	var_25_bool = 0; // 0x1ed MovB
	return 18; // 0x1ee Return
	
Label_495:
	StopWorld(); // 0x1ef Func
	var_65_bool = 1; // 0x1f1 PushB
	CameraTransit(var_43_cvector, var_41_cvector, var_65_bool); // 0x1f2 Func
	var_66_float = GetByIndex(var_42_cvector, 0); // 0x1f4 PushE
	var_67_float = GetByIndex(var_42_cvector, 2); // 0x1f5 PushE
	Rotate(var_66_float, var_67_float); // 0x1f6 Func
	var_68_bool = 0; // 0x1f8 PushV
	func_632(var_68_bool); // 0x1f9 NEW_2
	if(var_68_bool == 0) goto Label_509; // 0x1fb JumpB
	goto Label_517; // 0x1fc Jump
	
Label_517:
	CameraWaitForPlayFinish(); // 0x205 Func
	ResumeWorld(); // 0x207 Func
	var_25_bool = 1; // 0x209 MovB
	return 18; // 0x20a Return
	
Label_509:
	var_69_string = "head"; // 0x1fd PushS
	HasAnimationTrack(var_45_bool, var_69_string); // 0x1fe Func
	var_70_bool = var_45_bool; // 0x200 Push
	if(var_70_bool == 0) goto Label_517; // 0x201 JumpB
	var_71_string = "head"; // 0x202 PushS
	LookAsyncCamera(var_71_string); // 0x203 Func
}


func_583()
{
	var_13_bool = 0; // 0x247 PushV
	func_632(var_13_bool); // 0x248 NEW_2
	if(var_13_bool == 0) goto Label_589; // 0x24a JumpB
	lshStopSpeech(); // 0x24b Func
	
Label_589:
	return 0; // 0x24d Return
}


func_713(var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); // 0x2c9 PushV
	GetDiaryRoot(var_36_object); // 0x2ca Func
	var_37_bool = var_36_object == 0; // 0x2cc Not
	if(var_37_bool == 0) goto Label_723; // 0x2cd JumpB
	var_38_string = "Can't retrieve diary root"; // 0x2ce PushS
	Trace(var_38_string); // 0x2cf Func
	var_34_object = 0; // 0x2d1 MovB
	return 2; // 0x2d2 Return
	
Label_723:
	var_34_object = var_36_object; // 0x2d3 Mov
	return 2; // 0x2d4 Return
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
	var_110_int = 534525; // 0x54 PushI
	SetMessage(var_110_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_111_bool = 0; var_112_object = Obj(); // 0x59 PushV
	var_112_object = var_1_object; // 0x5a MovT
	func_672(var_111_bool, var_112_object); // 0x5b NEW_2
	if(var_111_bool == 0) goto Label_99; // 0x5d JumpB
	var_130_int = 539591; // 0x5e PushI
	var_131_int = 41538; // 0x5f PushI
	var_132_int = 41537; // 0x60 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x61 TObjFunc
	
Label_99:
	var_133_int = 539590; // 0x63 PushI
	var_134_int = -1; // 0x64 PushI
	var_135_int = 41536; // 0x65 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x66 TObjFunc
	goto Label_107; // 0x68 Jump
	
Label_107:
	var_136_bool = 0; // 0x6b PushV
	func_632(var_136_bool); // 0x6c NEW_2
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
	func_541(var_138_string); // 0x76 NEW_2
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


func_590(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x24e PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x24f Or
	var_56_float = sqrt(var_57_int); // 0x250 Sqrt2
	var_58_float = 0.0; // 0x251 PushF
	var_59_bool = var_56_float < var_58_float; // 0x252 LT
	if(var_59_bool == 0) goto Label_598; // 0x253 JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x254 MovV
	return 2; // 0x255 Return
	
Label_598:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x256 Div2
	return 2; // 0x257 Return
}


func_341(var_2_object, var_3_string)
{
	func_436(); // 0x156 NEW_2
	var_11_int = 10; // 0x158 PushI
	KillTimer(var_11_int); // 0x159 Func
	var_12_object = var_2_object; // 0x15b PushT
	if(var_12_object == 0) goto Label_353; // 0x15c JumpB
	var_13_string = "head"; // 0x15d PushS
	UnlookAsync(var_13_string); // 0x15e Func
	var_2_object = 0; // 0x160 TMovB
	
Label_353:
	var_3_string = 1; // 0x161 TMovB
	return 0; // 0x162 Return
}


func_726(var_25_bool, var_26_object, var_27_int)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0; // 0x2d6 PushV
	var_34_object = Obj(); // 0x2d7 PushV
	func_713(var_34_object); // 0x2d8 NEW_2
	var_31_object = var_34_object; // 0x2d9 Mov
	Find(var_27_int, var_32_object); // 0x2db ObjFunc
	var_39_bool = var_32_object == 0; // 0x2dd Not
	if(var_39_bool == 0) goto Label_741; // 0x2de JumpB
	var_40_string = "Can't find diary parent with id: "; // 0x2df PushS
	var_41_int = var_40_string + var_27_int; // 0x2e0 Add
	Trace(var_41_int); // 0x2e1 Func
	var_25_bool = 0; // 0x2e3 MovB
	return 6; // 0x2e4 Return
	
Label_741:
	AddChild(var_26_object); // 0x2e5 ObjFunc
	var_42_int = 7; // 0x2e7 PushI
	SendWorldWndMessage(var_42_int); // 0x2e8 Func
	GetCategory(var_33_int); // 0x2ea ObjFunc
	SetDiarySection(var_33_int); // 0x2ec Func
	var_25_bool = 0; // 0x2ee MovB
	return 6; // 0x2ef Return
}


func_600(var_124_int, var_125_string)
{
	var_126_int = 0; var_127_int = 0; // 0x258 PushV
	GetVariable(var_125_string, var_127_int); // 0x259 Func
	var_124_int = var_127_int; // 0x25b Mov
	return 2; // 0x25c Return
}


func_605(var_114_bool, var_116_string)
{
	var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_bool = 0; // 0x25d PushV
	GetInvItemByName(var_119_int, var_116_string); // 0x25e Func
	HasItem(var_119_int, var_120_bool); // 0x260 ObjFunc
	var_114_bool = var_120_bool; // 0x262 Mov
	return 4; // 0x263 Return
}


func_355()
{
	var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_bool = 0; var_24_float = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_float = 0; var_32_bool = 0; // 0x163 PushV
	WaitForAnimEnd(); // 0x164 Func
	var_33_bool = 0; // 0x166 PushV
	func_449(var_33_bool); // 0x167 NEW_2
	var_34_bool = var_33_bool == 0; // 0x169 Not
	if(var_34_bool == 0) goto Label_364; // 0x16a JumpB
	return 14; // 0x16b Return
	
Label_364:
	var_35_int = 0; // 0x16c PushV
	func_641(var_35_int); // 0x16d NEW_2
	var_26_int = var_35_int; // 0x16e Mov
	var_27_int = 0; // 0x170 MovI
	
Label_369:
	var_48_bool = 0; // 0x171 PushV
	var_48_bool = 0; // 0x172 MovB
	var_49_int = 5; // 0x173 PushI
	var_50_bool = var_27_int < var_49_int; // 0x174 LT
	if(var_50_bool == 0) goto Label_379; // 0x175 JumpB
	var_51_bool = 0; // 0x176 PushV
	func_449(var_51_bool); // 0x177 NEW_2
	if(var_51_bool == 0) goto Label_379; // 0x179 JumpB
	var_48_bool = 1; // 0x17a MovB
	
Label_379:
	if(var_48_bool == 0) goto Label_431; // 0x17b JumpB
	var_52_int = 3; // 0x17c PushI
	irand(var_28_int, var_52_int); // 0x17d Func
	var_53_int = 0; // 0x17f PushI
	var_54_bool = var_28_int == var_53_int; // 0x180 Eq
	if(var_54_bool == 0) goto Label_403; // 0x181 JumpB
	var_55_int = var_26_int; // 0x182 Push
	if(var_55_int == 0) goto Label_402; // 0x183 JumpB
	irand(var_29_int, var_26_int); // 0x184 Func
	var_56_string = "all"; // 0x186 PushS
	var_57_string = ""; var_58_int = 0; // 0x187 PushV
	var_58_int = var_29_int; // 0x188 Mov
	func_634(var_57_string, var_58_int); // 0x189 NEW_2
	PlayAnimation(var_56_string, var_57_string); // 0x18b Func
	WaitForAnimEnd(var_30_bool); // 0x18d Func
	var_59_bool = var_30_bool == 0; // 0x18f Not
	if(var_59_bool == 0) goto Label_402; // 0x190 JumpB
	goto Label_431; // 0x191 Jump
	
Label_431:
	ResetAAS(); // 0x1af Func
	return 14; // 0x1b1 Return
	
Label_402:
	goto Label_420; // 0x192 Jump
	
Label_420:
	var_60_bool = 0; // 0x1a4 PushV
	func_434(var_60_bool); // 0x1a5 NEW_2
	var_61_bool = var_60_bool == 0; // 0x1a7 Not
	if(var_61_bool == 0) goto Label_426; // 0x1a8 JumpB
	goto Label_431; // 0x1a9 Jump
	
Label_426:
	ResetAAS(); // 0x1aa Func
	var_62_int = 1; // 0x1ac PushI
	var_27_int = var_27_int + var_62_int; // 0x1ad Add2
	goto Label_369; // 0x1ae Jump
	
Label_403:
	var_63_int = 1; // 0x193 PushI
	var_64_bool = var_28_int == var_63_int; // 0x194 Eq
	if(var_64_bool == 0) goto Label_417; // 0x195 JumpB
	var_65_int = 4; // 0x196 PushI
	rand(var_31_float, var_65_int); // 0x197 Func
	var_66_int = 1; // 0x199 PushI
	var_67_int = var_31_float + var_66_int; // 0x19a Add
	Sleep(var_67_int, var_32_bool); // 0x19b Func
	var_68_bool = var_32_bool == 0; // 0x19d Not
	if(var_68_bool == 0) goto Label_416; // 0x19e JumpB
	goto Label_431; // 0x19f Jump
	
Label_416:
	goto Label_420; // 0x1a0 Jump
	
Label_417:
	var_69_int = var_27_int; // 0x1a1 Push
	if(var_69_int == 0) goto Label_420; // 0x1a2 JumpB
	goto Label_431; // 0x1a3 Jump
}


func_612(var_43_bool, var_44_string, var_45_string)
{
	var_46_object = Obj(); var_47_object = Obj(); // 0x264 PushV
	FindActor(var_47_object, var_44_string); // 0x265 Func
	var_48_bool = var_47_object == 0; // 0x267 NullEq
	if(var_48_bool == 0) goto Label_619; // 0x268 JumpB
	var_43_bool = 0; // 0x269 MovB
	return 2; // 0x26a Return
	
Label_619:
	Trigger(var_47_object, var_45_string); // 0x26b Func
	var_43_bool = 1; // 0x26d MovB
	return 2; // 0x26e Return
}


func_624(var_74_int)
{
	var_74_int = 515555; // 0x270 MovI
	return 0; // 0x271 Return
}


func_626(var_73_int)
{
	var_73_int = 503340; // 0x272 MovI
	return 0; // 0x273 Return
}


func_754(var_77_int)
{
	var_78_int = 0; var_79_int = 0; // 0x2f2 PushV
	var_80_string = "branch"; // 0x2f3 PushS
	GetVariable(var_80_string, var_79_int); // 0x2f4 Func
	var_81_int = 0; // 0x2f6 PushI
	var_82_bool = var_79_int == var_81_int; // 0x2f7 Eq
	if(var_82_bool == 0) goto Label_764; // 0x2f8 JumpB
	var_77_int = 1; // 0x2f9 MovI
	return 2; // 0x2fa Return
	
Label_764:
	var_83_int = 1; // 0x2fc PushI
	var_84_bool = var_79_int == var_83_int; // 0x2fd Eq
	if(var_84_bool == 0) goto Label_769; // 0x2fe JumpB
	var_77_int = 2; // 0x2ff MovI
	return 2; // 0x300 Return
	
Label_769:
	var_77_int = 3; // 0x301 MovI
	return 2; // 0x302 Return
}


func_628(var_75_string)
{
	var_75_string = "ui/NPC_Citizen2.png"; // 0x274 MovS
	return 0; // 0x275 Return
}


func_630(var_76_string)
{
	var_76_string = "ui/NPC_Citizen2_b.png"; // 0x276 MovS
	return 0; // 0x277 Return
}


func_632(var_68_bool)
{
	var_68_bool = 0; // 0x278 MovB
	return 0; // 0x279 Return
}


func_634(var_41_string, var_42_int)
{
	var_43_string = ""; var_44_string = ""; // 0x27a PushV
	var_44_string = "idle"; // 0x27b MovS
	var_45_int = var_42_int; // 0x27c Push
	if(var_45_int == 0) goto Label_639; // 0x27d JumpB
	var_44_string = var_44_string + var_42_int; // 0x27e Add2
	
Label_639:
	var_41_string = var_44_string; // 0x27f Mov
	return 2; // 0x280 Return
}


