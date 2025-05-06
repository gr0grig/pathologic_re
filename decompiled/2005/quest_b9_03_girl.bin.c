task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xb4 PushI
	if(var_14_int == 0) goto Label_330; // 0xb5 JumpB
	func_722(); // 0xb7 NEW_2
	var_16_int = 31717; // 0xb9 PushI
	var_17_bool = var_13_bool == var_16_int; // 0xba Eq
	if(var_17_bool == 0) goto Label_193; // 0xbb JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xbc PushV
	var_18_object = var_1_object; // 0xbd MovT
	var_19_object = var_0_object; // 0xbe MovT
	func_790(); // 0xbf NEW_2
	
Label_193:
	var_43_int = 31716; // 0xc1 PushI
	var_44_bool = var_12_bool == var_43_int; // 0xc2 Eq
	if(var_44_bool == 0) goto Label_241; // 0xc3 JumpB
	var_45_bool = 0; var_46_object = Obj(); // 0xc4 PushV
	var_46_object = var_1_object; // 0xc5 MovT
	func_795(var_46_object); // 0xc6 NEW_2
	if(var_45_bool == 0) goto Label_226; // 0xc8 JumpB
	var_53_object = Obj(); var_54_object = Obj(); // 0xc9 PushV
	var_53_object = var_1_object; // 0xca MovT
	var_54_object = var_0_object; // 0xcb MovT
	func_784(); // 0xcc NEW_2
	var_57_string = ""; // 0xce PushV
	var_57_string = "Neutral"; // 0xcf MovS
	func_157(var_13_bool, var_57_string); // 0xd0 NEW_2
	var_74_int = 530329; // 0xd2 PushI
	SetMessage(var_74_int); // 0xd3 TObjFunc
	ClearReplies(); // 0xd5 TObjFunc
	var_75_int = 531028; // 0xd7 PushI
	var_76_int = 32359; // 0xd8 PushI
	var_77_int = 32357; // 0xd9 PushI
	AddReply(var_75_int, var_76_int, var_77_int); // 0xda TObjFunc
	var_78_int = 531029; // 0xdc PushI
	var_79_int = 32365; // 0xdd PushI
	var_80_int = 32358; // 0xde PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0xdf TObjFunc
	return 0; // 0xe1 Return
	
Label_226:
	var_81_string = ""; // 0xe2 PushV
	var_81_string = "Neutral"; // 0xe3 MovS
	func_157(var_13_bool, var_81_string); // 0xe4 NEW_2
	var_82_int = 530331; // 0xe6 PushI
	SetMessage(var_82_int); // 0xe7 TObjFunc
	ClearReplies(); // 0xe9 TObjFunc
	var_83_int = 531033; // 0xeb PushI
	var_84_int = -1; // 0xec PushI
	var_85_int = 32362; // 0xed PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0xee TObjFunc
	return 0; // 0xf0 Return
	
Label_241:
	var_86_int = 32359; // 0xf1 PushI
	var_87_bool = var_12_bool == var_86_int; // 0xf2 Eq
	if(var_87_bool == 0) goto Label_264; // 0xf3 JumpB
	var_88_string = ""; // 0xf4 PushV
	var_88_string = "Neutral"; // 0xf5 MovS
	func_157(var_13_bool, var_88_string); // 0xf6 NEW_2
	var_89_int = 531030; // 0xf8 PushI
	SetMessage(var_89_int); // 0xf9 TObjFunc
	ClearReplies(); // 0xfb TObjFunc
	var_90_int = 531031; // 0xfd PushI
	var_91_int = 32361; // 0xfe PushI
	var_92_int = 32360; // 0xff PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x100 TObjFunc
	var_93_int = 530332; // 0x102 PushI
	var_94_int = 32363; // 0x103 PushI
	var_95_int = 31719; // 0x104 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0x105 TObjFunc
	return 0; // 0x107 Return
	
Label_264:
	var_96_int = 32363; // 0x108 PushI
	var_97_bool = var_12_bool == var_96_int; // 0x109 Eq
	if(var_97_bool == 0) goto Label_282; // 0x10a JumpB
	var_98_string = ""; // 0x10b PushV
	var_98_string = "Neutral"; // 0x10c MovS
	func_157(var_13_bool, var_98_string); // 0x10d NEW_2
	var_99_int = 531034; // 0x10f PushI
	SetMessage(var_99_int); // 0x110 TObjFunc
	ClearReplies(); // 0x112 TObjFunc
	var_100_int = 531035; // 0x114 PushI
	var_101_int = 32365; // 0x115 PushI
	var_102_int = 32364; // 0x116 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x117 TObjFunc
	return 0; // 0x119 Return
	
Label_282:
	var_103_int = 32365; // 0x11a PushI
	var_104_bool = var_12_bool == var_103_int; // 0x11b Eq
	if(var_104_bool == 0) goto Label_300; // 0x11c JumpB
	var_105_string = ""; // 0x11d PushV
	var_105_string = "Neutral"; // 0x11e MovS
	func_157(var_13_bool, var_105_string); // 0x11f NEW_2
	var_106_int = 531036; // 0x121 PushI
	SetMessage(var_106_int); // 0x122 TObjFunc
	ClearReplies(); // 0x124 TObjFunc
	var_107_int = 531037; // 0x126 PushI
	var_108_int = 32361; // 0x127 PushI
	var_109_int = 32367; // 0x128 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x129 TObjFunc
	return 0; // 0x12b Return
	
Label_300:
	var_110_int = 32361; // 0x12c PushI
	var_111_bool = var_12_bool == var_110_int; // 0x12d Eq
	if(var_111_bool == 0) goto Label_318; // 0x12e JumpB
	var_112_string = ""; // 0x12f PushV
	var_112_string = "Neutral"; // 0x130 MovS
	func_157(var_13_bool, var_112_string); // 0x131 NEW_2
	var_113_int = 531032; // 0x133 PushI
	SetMessage(var_113_int); // 0x134 TObjFunc
	ClearReplies(); // 0x136 TObjFunc
	var_114_int = 530330; // 0x138 PushI
	var_115_int = -1; // 0x139 PushI
	var_116_int = 31717; // 0x13a PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x13b TObjFunc
	return 0; // 0x13d Return
	
Label_318:
	var_3_string = 1; // 0x13e TMovB
	var_117_bool = 0; // 0x13f PushV
	func_782(var_117_bool); // 0x140 NEW_2
	if(var_117_bool == 0) goto Label_326; // 0x142 JumpB
	lshStopAnimation(); // 0x143 Func
	goto Label_328; // 0x145 Jump
	
Label_328:
	return 0; // 0x148 Return
	
Label_326:
	StopAnimation(); // 0x146 Func
	
Label_330:
	return 0; // 0x14a Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_482(var_11_bool, var_12_object); // 0x153 NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0x155 PushV
	var_17_object = var_12_object; // 0x156 Mov
	TaskCall(0); // 0x157 TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0x158 NEW_2
	TaskReturn(); // 0x159 TaskReturn
	return 0; // 0x15b Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "cleanup"; // 0x183 PushS
	var_14_bool = var_12_string == var_13_string; // 0x184 Eq
	if(var_14_bool == 0) goto Label_393; // 0x185 JumpB
	func_366(var_12_string); // 0x187 NEW_2
	
Label_393:
	return 0; // 0x189 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x18a PushT
	if(var_12_int == 0) goto Label_399; // 0x18b JumpB
	func_482(var_10_bool, var_11_bool); // 0x18d NEW_2
	
Label_399:
	var_16_bool = 0; // 0x18f PushV
	var_16_bool = 0; // 0x190 MovB
	var_17_int = var_5_int; // 0x191 PushT
	if(var_17_int == 0) goto Label_408; // 0x192 JumpB
	var_18_bool = 0; // 0x193 PushV
	func_415(var_18_bool); // 0x194 NEW_2
	if(var_18_bool == 0) goto Label_408; // 0x196 JumpB
	var_16_bool = 1; // 0x197 MovB
	
Label_408:
	if(var_16_bool == 0) goto Label_414; // 0x198 JumpB
	var_19_object = Obj(); // 0x199 PushV
	func_729(var_19_object); // 0x19a NEW_2
	RemoveActor(var_19_object); // 0x19c Func
	
Label_414:
	return 0; // 0x19e Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x1cc PushI
	var_14_bool = var_12_int == var_13_int; // 0x1cd Eq
	if(var_14_bool == 0) goto Label_481; // 0x1ce JumpB
	var_15_bool = 0; // 0x1cf PushV
	func_444(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x1d0 NEW_2
	if(var_15_bool == 0) goto Label_475; // 0x1d2 JumpB
	var_28_bool = var_2_object == 0; // 0x1d3 Not
	if(var_28_bool == 0) goto Label_474; // 0x1d4 JumpB
	var_29_object = Obj(); // 0x1d5 PushV
	var_29_object = var_4_bool; // 0x1d6 MovT
	func_711(var_29_object); // 0x1d7 NEW_2
	var_2_object = 1; // 0x1d9 TMovB
	
Label_474:
	goto Label_481; // 0x1da Jump
	
Label_481:
	return 0; // 0x1e1 Return
	
Label_475:
	var_36_object = var_2_object; // 0x1db PushT
	if(var_36_object == 0) goto Label_481; // 0x1dc JumpB
	var_37_string = "head"; // 0x1dd PushS
	UnlookAsync(var_37_string); // 0x1de Func
	var_2_object = 0; // 0x1e0 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0x14b PushV
	var_12_float = 300; // 0x14c MovI
	var_13_float = 100; // 0x14d MovI
	func_348(var_11_bool, var_12_float, var_13_float); // 0x14e NEW_2
	return 0; // 0x150 Return
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 70.0; // 0x4 MovF
	func_595(var_28_object, var_29_float); // 0x5 NEW_2
	var_73_bool = var_27_bool == 0; // 0x7 Not
	if(var_73_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_74_int = 0; // 0xd PushV
	func_776(var_74_int); // 0xe NEW_2
	SetNPCName(var_74_int); // 0x10 ObjFunc
	var_75_int = 0; // 0x12 PushV
	func_774(var_75_int); // 0x13 NEW_2
	SetNPCDescription(var_75_int); // 0x15 ObjFunc
	var_76_string = ""; // 0x17 PushV
	func_778(var_76_string); // 0x18 NEW_2
	SetPhoto(var_76_string); // 0x1a ObjFunc
	var_77_string = ""; // 0x1c PushV
	func_780(var_77_string); // 0x1d NEW_2
	SetPhoto2(var_77_string); // 0x1f ObjFunc
	var_78_int = 0; // 0x21 PushV
	func_861(var_78_int); // 0x22 NEW_2
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
	var_153_bool = var_26_bool == 0; // 0x38 Not
	if(var_153_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_154_object = Obj(); // 0x3f PushV
	var_154_object = var_17_object; // 0x40 Mov
	func_663(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_774(var_75_int)
{
	var_75_int = 515559; // 0x306 MovI
	return 0; // 0x307 Return
}


func_776(var_74_int)
{
	var_74_int = 503344; // 0x308 MovI
	return 0; // 0x309 Return
}


func_778(var_76_string)
{
	var_76_string = "ui/NPC_Citizen1.png"; // 0x30a MovS
	return 0; // 0x30b Return
}


func_780(var_77_string)
{
	var_77_string = "ui/NPC_Citizen1_b.png"; // 0x30c MovS
	return 0; // 0x30d Return
}


func_782(var_69_bool)
{
	var_69_bool = 0; // 0x30e MovB
	return 0; // 0x30f Return
}


func_784()
{
	var_104_string = "oob9Girl1"; // 0x311 PushS
	var_105_int = 1; // 0x312 PushI
	SetVariable(var_104_string, var_105_int); // 0x313 Func
	return 0; // 0x315 Return
}


func_790()
{
	func_807(); // 0x318 NEW_2
	return 0; // 0x31a Return
}


func_663()
{
	var_155_bool = 0; var_156_bool = 0; // 0x297 PushV
	CameraSwitchToNormal(); // 0x298 Func
	var_157_bool = 0; // 0x29a PushV
	func_782(var_157_bool); // 0x29b NEW_2
	if(var_157_bool == 0) goto Label_671; // 0x29d JumpB
	goto Label_679; // 0x29e Jump
	
Label_679:
	return 2; // 0x2a7 Return
	
Label_671:
	var_158_string = "head"; // 0x29f PushS
	HasAnimationTrack(var_156_bool, var_158_string); // 0x2a0 Func
	var_159_bool = var_156_bool; // 0x2a2 Push
	if(var_159_bool == 0) goto Label_679; // 0x2a3 JumpB
	var_160_string = "head"; // 0x2a4 PushS
	UnlookAsync(var_160_string); // 0x2a5 Func
}


func_795(var_94_bool)
{
	var_96_int = 0; var_97_string = ""; // 0x31c PushV
	var_97_string = "oob9Girl1"; // 0x31d MovS
	func_745(var_96_int, var_97_string); // 0x31e NEW_2
	var_100_int = 0; // 0x320 PushI
	var_101_bool = var_96_int == var_100_int; // 0x321 Eq
	if(var_101_bool == 0) goto Label_805; // 0x322 JumpB
	var_94_bool = 1; // 0x323 MovB
	return 0; // 0x324 Return
	
Label_805:
	var_94_bool = 0; // 0x325 MovB
	return 0; // 0x326 Return
}


func_157(var_2_object, var_106_string)
{
	var_107_bool = 0; // 0x9e PushV
	func_782(var_107_bool); // 0x9f NEW_2
	var_108_bool = var_107_bool == 0; // 0xa1 Not
	if(var_108_bool == 0) goto Label_164; // 0xa2 JumpB
	return 0; // 0xa3 Return
	
Label_164:
	var_109_bool = var_106_string == var_2_object; // 0xa4 Eq
	if(var_109_bool == 0) goto Label_167; // 0xa5 JumpB
	return 0; // 0xa6 Return
	
Label_167:
	var_110_string = ""; var_111_bool = 0; // 0xa7 PushV
	var_110_string = var_106_string; // 0xa8 Mov
	var_112_string = ""; // 0xa9 PushS
	var_113_bool = var_106_string == var_112_string; // 0xaa Eq
	if(var_113_bool == 0) goto Label_174; // 0xab JumpB
	var_111_bool = 0; // 0xac MovB
	goto Label_175; // 0xad Jump
	
Label_175:
	func_696(var_110_string, var_111_bool); // 0xaf NEW_2
	var_2_object = var_106_string; // 0xb1 TMov
	return 0; // 0xb2 Return
	
Label_174:
	var_111_bool = 1; // 0xae MovB
}


func_415(var_18_bool)
{
	var_18_bool = 1; // 0x19f MovB
	return 0; // 0x1a0 Return
}


func_417(var_0_object, var_1_object, var_2_object, var_3_string, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x1a2 PushV
	func_590(var_23_bool); // 0x1a3 NEW_2
	var_26_bool = var_23_bool == 0; // 0x1a5 Not
	if(var_26_bool == 0) goto Label_424; // 0x1a6 JumpB
	return 0; // 0x1a7 Return
	
Label_424:
	var_27_string = "player"; // 0x1a8 PushS
	FindActor(var_17_bool, var_27_string); // 0x1a9 Func
	var_2_object = 0; // 0x1ab TMovB
	var_3_string = 0; // 0x1ac TMovB
	var_0_object = var_21_float; // 0x1ad TMov
	var_1_object = var_22_float; // 0x1ae TMov
	var_28_int = 10; // 0x1af PushI
	var_29_float = 1.0; // 0x1b0 PushF
	SetTimer(var_28_int, var_29_float); // 0x1b1 Func
	func_496(); // 0x1b4 NEW_2
	var_81_bool = var_3_string == 0; // 0x1b6 Not
	if(var_81_bool == 0) goto Label_443; // 0x1b7 JumpB
	var_82_int = 10; // 0x1b8 PushI
	KillTimer(var_82_int); // 0x1b9 Func
	
Label_443:
	return 0; // 0x1bb Return
}


func_807()
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x327 PushV
	var_22_int = 540; // 0x328 PushI
	var_23_int = 2; // 0x329 PushI
	var_24_int = 530352; // 0x32a PushI
	CreateDiaryEntry(var_21_object, var_22_int, var_23_int, var_24_int); // 0x32b Func
	var_25_bool = 0; var_26_object = Obj(); var_27_int = 0; // 0x32d PushV
	var_26_object = var_21_object; // 0x32e Mov
	var_27_int = 532; // 0x32f MovI
	func_833(var_25_bool, var_26_object, var_27_int); // 0x330 NEW_2
	return 2; // 0x332 Return
}


func_680(var_132_string)
{
	var_133_bool = 0; var_134_float = 0; var_135_float = 0; var_136_bool = 0; var_137_float = 0; var_138_float = 0; // 0x2a8 PushV
	lshHasAnimation(var_136_bool, var_132_string); // 0x2a9 Func
	var_139_bool = var_136_bool; // 0x2ab Push
	if(var_139_bool == 0) goto Label_691; // 0x2ac JumpB
	lshGetAnimTimes(var_132_string, var_137_float, var_138_float); // 0x2ad Func
	var_140_bool = 0; // 0x2af PushB
	lshPlayAnimation(var_137_float, var_138_float, var_140_bool); // 0x2b0 Func
	goto Label_695; // 0x2b2 Jump
	
Label_695:
	return 6; // 0x2b7 Return
	
Label_691:
	var_141_string = "Can't find lsh animation : "; // 0x2b3 PushS
	var_142_int = var_141_string + var_132_string; // 0x2b4 Add
	Trace(var_142_int); // 0x2b5 Func
}


func_820(var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); // 0x334 PushV
	GetDiaryRoot(var_36_object); // 0x335 Func
	var_37_bool = var_36_object == 0; // 0x337 Not
	if(var_37_bool == 0) goto Label_830; // 0x338 JumpB
	var_38_string = "Can't retrieve diary root"; // 0x339 PushS
	Trace(var_38_string); // 0x33a Func
	var_34_object = 0; // 0x33c MovB
	return 2; // 0x33d Return
	
Label_830:
	var_34_object = var_36_object; // 0x33e Mov
	return 2; // 0x33f Return
}


func_696(var_110_string, var_111_bool)
{
	var_114_bool = 0; var_115_float = 0; var_116_float = 0; var_117_bool = 0; var_118_float = 0; var_119_float = 0; // 0x2b8 PushV
	lshHasAnimation(var_117_bool, var_110_string); // 0x2b9 Func
	var_120_bool = var_117_bool; // 0x2bb Push
	if(var_120_bool == 0) goto Label_706; // 0x2bc JumpB
	lshGetAnimTimes(var_110_string, var_118_float, var_119_float); // 0x2bd Func
	lshPlayAnimation(var_118_float, var_119_float, var_111_bool); // 0x2bf Func
	goto Label_710; // 0x2c1 Jump
	
Label_710:
	return 6; // 0x2c6 Return
	
Label_706:
	var_121_string = "Can't find lsh animation : "; // 0x2c2 PushS
	var_122_int = var_121_string + var_110_string; // 0x2c3 Add
	Trace(var_122_int); // 0x2c4 Func
}


func_444(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x1bc PushV
	var_18_bool = var_4_bool == 0; // 0x1bd NullEq
	if(var_18_bool == 0) goto Label_449; // 0x1be JumpB
	var_15_bool = 0; // 0x1bf MovB
	return 2; // 0x1c0 Return
	
Label_449:
	var_19_float = 0; var_20_object = Obj(); // 0x1c1 PushV
	var_20_object = var_4_bool; // 0x1c2 MovT
	func_582(var_20_object); // 0x1c3 NEW_2
	var_17_float = sqrt(var_19_float); // 0x1c5 Sqrt2
	var_27_object = var_2_object; // 0x1c6 PushT
	if(var_27_object == 0) goto Label_457; // 0x1c7 JumpB
	var_17_float = var_17_float - var_1_object; // 0x1c8 Sub2
	
Label_457:
	var_15_bool = var_17_float < var_0_object; // 0x1c9 LT2
	return 2; // 0x1ca Return
}


func_575(var_71_bool)
{
	var_71_bool = 1; // 0x23f MovB
	return 0; // 0x240 Return
}


func_577()
{
	StopAnimation(); // 0x241 Func
	StopGroup0(); // 0x243 Func
	return 0; // 0x245 Return
}


func_833(var_25_bool, var_26_object, var_27_int)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0; // 0x341 PushV
	var_34_object = Obj(); // 0x342 PushV
	func_820(var_34_object); // 0x343 NEW_2
	var_31_object = var_34_object; // 0x344 Mov
	Find(var_27_int, var_32_object); // 0x346 ObjFunc
	var_39_bool = var_32_object == 0; // 0x348 Not
	if(var_39_bool == 0) goto Label_848; // 0x349 JumpB
	var_40_string = "Can't find diary parent with id: "; // 0x34a PushS
	var_41_int = var_40_string + var_27_int; // 0x34b Add
	Trace(var_41_int); // 0x34c Func
	var_25_bool = 0; // 0x34e MovB
	return 6; // 0x34f Return
	
Label_848:
	AddChild(var_26_object); // 0x350 ObjFunc
	var_42_int = 7; // 0x352 PushI
	SendWorldWndMessage(var_42_int); // 0x353 Func
	GetCategory(var_33_int); // 0x355 ObjFunc
	SetDiarySection(var_33_int); // 0x357 Func
	var_25_bool = 0; // 0x359 MovB
	return 6; // 0x35a Return
}


func_582(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x246 PushV
	GetPosition(var_24_cvector); // 0x247 Func
	GetPosition(var_25_cvector); // 0x249 ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x24b Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x24c Or2
	return 6; // 0x24d Return
}


func_711(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x2c7 PushV
	GetEyesHeight(var_32_float); // 0x2c8 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x2ca MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x2cb PushE
	var_34_float = var_32_float; // 0x2cc Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x2cd PopE
	var_35_string = "head"; // 0x2ce PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x2cf Func
	return 4; // 0x2d1 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_87_object, var_88_object)
{
	var_0_object = var_88_object; // 0x4b TMov
	var_1_object = var_87_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_93_int = 1; // 0x4e PushI
	if(var_93_int == 0) goto Label_127; // 0x4f JumpB
	var_94_bool = 0; var_95_object = Obj(); // 0x50 PushV
	var_95_object = var_1_object; // 0x51 MovT
	func_795(var_95_object); // 0x52 NEW_2
	if(var_94_bool == 0) goto Label_110; // 0x54 JumpB
	var_102_object = Obj(); var_103_object = Obj(); // 0x55 PushV
	var_102_object = var_1_object; // 0x56 MovT
	var_103_object = var_0_object; // 0x57 MovT
	func_784(); // 0x58 NEW_2
	var_106_string = ""; // 0x5a PushV
	var_106_string = "Neutral"; // 0x5b MovS
	func_157(var_88_object, var_106_string); // 0x5c NEW_2
	var_123_int = 530329; // 0x5e PushI
	SetMessage(var_123_int); // 0x5f TObjFunc
	ClearReplies(); // 0x61 TObjFunc
	var_124_int = 531028; // 0x63 PushI
	var_125_int = 32359; // 0x64 PushI
	var_126_int = 32357; // 0x65 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x66 TObjFunc
	var_127_int = 531029; // 0x68 PushI
	var_128_int = 32365; // 0x69 PushI
	var_129_int = 32358; // 0x6a PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x6b TObjFunc
	goto Label_127; // 0x6d Jump
	
Label_127:
	var_130_bool = 0; // 0x7f PushV
	func_782(var_130_bool); // 0x80 NEW_2
	if(var_130_bool == 0) goto Label_142; // 0x82 JumpB
	
Label_131:
	lshWaitForAnimEnd(); // 0x83 Func
	var_131_string = var_3_string; // 0x85 PushT
	if(var_131_string == 0) goto Label_136; // 0x86 JumpB
	goto Label_141; // 0x87 Jump
	
Label_141:
	goto Label_156; // 0x8d Jump
	
Label_156:
	return 0; // 0x9c Return
	
Label_136:
	var_132_string = ""; // 0x88 PushV
	var_132_string = var_2_object; // 0x89 MovT
	func_680(var_132_string); // 0x8a NEW_2
	goto Label_131; // 0x8c Jump
	
Label_142:
	var_143_string = "all"; // 0x8e PushS
	var_144_string = "idle"; // 0x8f PushS
	PlayAnimation(var_143_string, var_144_string); // 0x90 Func
	
Label_146:
	WaitForAnimEnd(); // 0x92 Func
	var_145_string = var_3_string; // 0x94 PushT
	if(var_145_string == 0) goto Label_151; // 0x95 JumpB
	goto Label_156; // 0x96 Jump
	
Label_151:
	var_146_string = "all"; // 0x97 PushS
	var_147_string = "idle"; // 0x98 PushS
	PlayAnimation(var_146_string, var_147_string); // 0x99 Func
	goto Label_146; // 0x9b Jump
	
Label_110:
	var_148_string = ""; // 0x6e PushV
	var_148_string = "Neutral"; // 0x6f MovS
	func_157(var_88_object, var_148_string); // 0x70 NEW_2
	var_149_int = 530331; // 0x72 PushI
	SetMessage(var_149_int); // 0x73 TObjFunc
	ClearReplies(); // 0x75 TObjFunc
	var_150_int = 531033; // 0x77 PushI
	var_151_int = -1; // 0x78 PushI
	var_152_int = 32362; // 0x79 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x7a TObjFunc
	goto Label_127; // 0x7c Jump
}


func_590(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x24e PushV
	IsLoaded(var_25_bool); // 0x24f Func
	var_23_bool = var_25_bool; // 0x251 Mov
	return 2; // 0x252 Return
}


func_722()
{
	var_15_bool = 0; // 0x2d2 PushV
	func_782(var_15_bool); // 0x2d3 NEW_2
	if(var_15_bool == 0) goto Label_728; // 0x2d5 JumpB
	lshStopSpeech(); // 0x2d6 Func
	
Label_728:
	return 0; // 0x2d8 Return
}


func_595(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x253 PushV
	GetPosition(var_40_cvector); // 0x254 ObjFunc
	GetEyesHeight(var_39_float); // 0x256 ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x258 PushE
	var_48_float = var_48_float + var_39_float; // 0x259 Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x25a PopE
	GetPosition(var_41_cvector); // 0x25b Func
	GetEyesHeight(var_39_float); // 0x25d Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x25f PushE
	var_49_float = var_49_float + var_39_float; // 0x260 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x261 PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x262 Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x263 PushE
	var_50_float = 0; // 0x264 MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x265 PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x266 Or
	var_52_float = sqrt(var_51_int); // 0x267 Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x268 Div2
	var_43_cvector = -var_42_cvector; // 0x269 Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x26a Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x26b PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x26c PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x26d Xor2
	func_735(var_54_cvector, var_55_cvector); // 0x26e NEW_2
	var_62_int = 25; // 0x270 PushI
	var_63_float = var_54_cvector * var_62_int; // 0x271 Mult
	var_64_int = var_53_float + var_63_float; // 0x272 Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x273 PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x274 Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x275 Add2
	IsOverrideActive(var_46_bool); // 0x276 Func
	var_66_bool = var_46_bool; // 0x278 Push
	if(var_66_bool == 0) goto Label_636; // 0x279 JumpB
	var_27_bool = 0; // 0x27a MovB
	return 18; // 0x27b Return
	
Label_636:
	StopWorld(); // 0x27c Func
	CameraTransit(var_45_cvector, var_43_cvector); // 0x27e Func
	var_67_float = GetByIndex(var_44_cvector, 0); // 0x280 PushE
	var_68_float = GetByIndex(var_44_cvector, 2); // 0x281 PushE
	Rotate(var_67_float, var_68_float); // 0x282 Func
	var_69_bool = 0; // 0x284 PushV
	func_782(var_69_bool); // 0x285 NEW_2
	if(var_69_bool == 0) goto Label_649; // 0x287 JumpB
	goto Label_657; // 0x288 Jump
	
Label_657:
	CameraWaitForPlayFinish(); // 0x291 Func
	ResumeWorld(); // 0x293 Func
	var_27_bool = 1; // 0x295 MovB
	return 18; // 0x296 Return
	
Label_649:
	var_70_string = "head"; // 0x289 PushS
	HasAnimationTrack(var_47_bool, var_70_string); // 0x28a Func
	var_71_bool = var_47_bool; // 0x28c Push
	if(var_71_bool == 0) goto Label_657; // 0x28d JumpB
	var_72_string = "head"; // 0x28e PushS
	LookAsyncCamera(var_72_string); // 0x28f Func
}


func_729(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x2d9 PushV
	self(var_21_object); // 0x2da Func
	var_19_object = var_21_object; // 0x2dc Mov
	return 2; // 0x2dd Return
}


func_348(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0x15c PushV
	var_6_int = 0; // 0x15d TMovB
	
Label_350:
	var_18_int = 3; // 0x15e PushI
	rand(var_16_float, var_18_int); // 0x15f Func
	var_19_int = 3; // 0x161 PushI
	var_20_int = var_16_float + var_19_int; // 0x162 Add
	Sleep(var_20_int, var_17_bool); // 0x163 Func
	var_6_int = 1; // 0x165 TMovB
	var_21_float = 0; var_22_float = 0; // 0x166 PushV
	var_21_float = var_12_float; // 0x167 Mov
	var_22_float = var_13_float; // 0x168 Mov
	func_417(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x169 NEW_2
	var_6_int = 0; // 0x16b TMovB
	goto Label_350; // 0x16c Jump
}


func_861(var_78_int)
{
	var_79_int = 0; var_80_int = 0; // 0x35d PushV
	var_81_string = "branch"; // 0x35e PushS
	GetVariable(var_81_string, var_80_int); // 0x35f Func
	var_82_int = 0; // 0x361 PushI
	var_83_bool = var_80_int == var_82_int; // 0x362 Eq
	if(var_83_bool == 0) goto Label_871; // 0x363 JumpB
	var_78_int = 1; // 0x364 MovI
	return 2; // 0x365 Return
	
Label_871:
	var_84_int = 1; // 0x367 PushI
	var_85_bool = var_80_int == var_84_int; // 0x368 Eq
	if(var_85_bool == 0) goto Label_876; // 0x369 JumpB
	var_78_int = 2; // 0x36a MovI
	return 2; // 0x36b Return
	
Label_876:
	var_78_int = 3; // 0x36c MovI
	return 2; // 0x36d Return
}


func_735(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x2df PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x2e0 Or
	var_58_float = sqrt(var_59_int); // 0x2e1 Sqrt2
	var_60_float = 0.0; // 0x2e2 PushF
	var_61_bool = var_58_float < var_60_float; // 0x2e3 LT
	if(var_61_bool == 0) goto Label_743; // 0x2e4 JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x2e5 MovV
	return 2; // 0x2e6 Return
	
Label_743:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x2e7 Div2
	return 2; // 0x2e8 Return
}


func_482(var_2_object, var_3_string)
{
	func_577(); // 0x1e3 NEW_2
	var_13_int = 10; // 0x1e5 PushI
	KillTimer(var_13_int); // 0x1e6 Func
	var_14_object = var_2_object; // 0x1e8 PushT
	if(var_14_object == 0) goto Label_494; // 0x1e9 JumpB
	var_15_string = "head"; // 0x1ea PushS
	UnlookAsync(var_15_string); // 0x1eb Func
	var_2_object = 0; // 0x1ed TMovB
	
Label_494:
	var_3_string = 1; // 0x1ee TMovB
	return 0; // 0x1ef Return
}


func_745(var_96_int, var_97_string)
{
	var_98_int = 0; var_99_int = 0; // 0x2e9 PushV
	GetVariable(var_97_string, var_99_int); // 0x2ea Func
	var_96_int = var_99_int; // 0x2ec Mov
	return 2; // 0x2ed Return
}


func_366(var_5_int)
{
	var_5_int = 1; // 0x16e TMovB
	var_15_bool = 0; // 0x16f PushV
	var_15_bool = 0; // 0x170 MovB
	var_16_bool = 0; // 0x171 PushV
	func_590(var_16_bool); // 0x172 NEW_2
	var_19_bool = var_16_bool == 0; // 0x174 Not
	if(var_19_bool == 0) goto Label_379; // 0x175 JumpB
	var_20_bool = 0; // 0x176 PushV
	func_415(var_20_bool); // 0x177 NEW_2
	if(var_20_bool == 0) goto Label_379; // 0x179 JumpB
	var_15_bool = 1; // 0x17a MovB
	
Label_379:
	if(var_15_bool == 0) goto Label_385; // 0x17b JumpB
	var_21_object = Obj(); // 0x17c PushV
	func_729(var_21_object); // 0x17d NEW_2
	RemoveActor(var_21_object); // 0x17f Func
	
Label_385:
	return 0; // 0x181 Return
}


func_750(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x2ee PushV
	var_55_string = "idle"; // 0x2ef MovS
	var_56_int = var_53_int; // 0x2f0 Push
	if(var_56_int == 0) goto Label_755; // 0x2f1 JumpB
	var_55_string = var_55_string + var_53_int; // 0x2f2 Add2
	
Label_755:
	var_52_string = var_55_string; // 0x2f3 Mov
	return 2; // 0x2f4 Return
}


func_496()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x1f0 PushV
	WaitForAnimEnd(); // 0x1f1 Func
	var_44_bool = 0; // 0x1f3 PushV
	func_590(var_44_bool); // 0x1f4 NEW_2
	var_45_bool = var_44_bool == 0; // 0x1f6 Not
	if(var_45_bool == 0) goto Label_505; // 0x1f7 JumpB
	return 14; // 0x1f8 Return
	
Label_505:
	var_46_int = 0; // 0x1f9 PushV
	func_757(var_46_int); // 0x1fa NEW_2
	var_37_int = var_46_int; // 0x1fb Mov
	var_38_int = 0; // 0x1fd MovI
	
Label_510:
	var_59_bool = 0; // 0x1fe PushV
	var_59_bool = 0; // 0x1ff MovB
	var_60_int = 5; // 0x200 PushI
	var_61_bool = var_38_int < var_60_int; // 0x201 LT
	if(var_61_bool == 0) goto Label_520; // 0x202 JumpB
	var_62_bool = 0; // 0x203 PushV
	func_590(var_62_bool); // 0x204 NEW_2
	if(var_62_bool == 0) goto Label_520; // 0x206 JumpB
	var_59_bool = 1; // 0x207 MovB
	
Label_520:
	if(var_59_bool == 0) goto Label_572; // 0x208 JumpB
	var_63_int = 3; // 0x209 PushI
	irand(var_39_int, var_63_int); // 0x20a Func
	var_64_int = 0; // 0x20c PushI
	var_65_bool = var_39_int == var_64_int; // 0x20d Eq
	if(var_65_bool == 0) goto Label_544; // 0x20e JumpB
	var_66_int = var_37_int; // 0x20f Push
	if(var_66_int == 0) goto Label_543; // 0x210 JumpB
	irand(var_40_int, var_37_int); // 0x211 Func
	var_67_string = "all"; // 0x213 PushS
	var_68_string = ""; var_69_int = 0; // 0x214 PushV
	var_69_int = var_40_int; // 0x215 Mov
	func_750(var_68_string, var_69_int); // 0x216 NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x218 Func
	WaitForAnimEnd(var_41_bool); // 0x21a Func
	var_70_bool = var_41_bool == 0; // 0x21c Not
	if(var_70_bool == 0) goto Label_543; // 0x21d JumpB
	goto Label_572; // 0x21e Jump
	
Label_572:
	ResetAAS(); // 0x23c Func
	return 14; // 0x23e Return
	
Label_543:
	goto Label_561; // 0x21f Jump
	
Label_561:
	var_71_bool = 0; // 0x231 PushV
	func_575(var_71_bool); // 0x232 NEW_2
	var_72_bool = var_71_bool == 0; // 0x234 Not
	if(var_72_bool == 0) goto Label_567; // 0x235 JumpB
	goto Label_572; // 0x236 Jump
	
Label_567:
	ResetAAS(); // 0x237 Func
	var_73_int = 1; // 0x239 PushI
	var_38_int = var_38_int + var_73_int; // 0x23a Add2
	goto Label_510; // 0x23b Jump
	
Label_544:
	var_74_int = 1; // 0x220 PushI
	var_75_bool = var_39_int == var_74_int; // 0x221 Eq
	if(var_75_bool == 0) goto Label_558; // 0x222 JumpB
	var_76_int = 4; // 0x223 PushI
	rand(var_42_float, var_76_int); // 0x224 Func
	var_77_int = 1; // 0x226 PushI
	var_78_int = var_42_float + var_77_int; // 0x227 Add
	Sleep(var_78_int, var_43_bool); // 0x228 Func
	var_79_bool = var_43_bool == 0; // 0x22a Not
	if(var_79_bool == 0) goto Label_557; // 0x22b JumpB
	goto Label_572; // 0x22c Jump
	
Label_557:
	goto Label_561; // 0x22d Jump
	
Label_558:
	var_80_int = var_38_int; // 0x22e Push
	if(var_80_int == 0) goto Label_561; // 0x22f JumpB
	goto Label_572; // 0x230 Jump
}


func_757(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x2f5 PushV
	var_49_int = 0; // 0x2f6 MovI
	
Label_759:
	var_51_string = "all"; // 0x2f7 PushS
	var_52_string = ""; var_53_int = 0; // 0x2f8 PushV
	var_53_int = var_49_int; // 0x2f9 Mov
	func_750(var_52_string, var_53_int); // 0x2fa NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x2fc Func
	var_57_bool = var_50_bool == 0; // 0x2fe Not
	if(var_57_bool == 0) goto Label_769; // 0x2ff JumpB
	goto Label_772; // 0x300 Jump
	
Label_772:
	var_46_int = var_49_int; // 0x304 Mov
	return 4; // 0x305 Return
	
Label_769:
	var_58_int = 1; // 0x301 PushI
	var_49_int = var_49_int + var_58_int; // 0x302 Add2
	goto Label_759; // 0x303 Jump
}


