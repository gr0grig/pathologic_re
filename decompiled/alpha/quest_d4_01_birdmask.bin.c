task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0x8f PushI
	if(var_8_int == 0) goto Label_306; // 0x90 JumpB
	func_492(); // 0x92 Call
	var_10_int = 10626; // 0x94 PushI
	var_11_bool = var_7_bool == var_10_int; // 0x95 Eq
	if(var_11_bool == 0) goto Label_161; // 0x96 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0x97 PushV
	var_12_object = var_1_object; // 0x98 MovT
	var_13_object = var_0_object; // 0x99 MovT
	func_550(); // 0x9a Call
	var_30_object = Obj(); var_31_object = Obj(); // 0x9c PushV
	var_30_object = var_1_object; // 0x9d MovT
	var_31_object = var_0_object; // 0x9e MovT
	func_566(); // 0x9f Call
	
Label_161:
	var_56_int = 10627; // 0xa1 PushI
	var_57_bool = var_7_bool == var_56_int; // 0xa2 Eq
	if(var_57_bool == 0) goto Label_174; // 0xa3 JumpB
	var_58_object = Obj(); var_59_object = Obj(); // 0xa4 PushV
	var_58_object = var_1_object; // 0xa5 MovT
	var_59_object = var_0_object; // 0xa6 MovT
	func_550(); // 0xa7 Call
	var_60_object = Obj(); var_61_object = Obj(); // 0xa9 PushV
	var_60_object = var_1_object; // 0xaa MovT
	var_61_object = var_0_object; // 0xab MovT
	func_566(); // 0xac Call
	
Label_174:
	var_62_int = 10619; // 0xae PushI
	var_63_bool = var_6_int == var_62_int; // 0xaf Eq
	if(var_63_bool == 0) goto Label_202; // 0xb0 JumpB
	var_64_string = ""; // 0xb1 PushV
	var_64_string = "Neutral"; // 0xb2 MovS
	func_126(var_7_bool, var_64_string); // 0xb3 Call
	var_79_int = 9650; // 0xb5 PushI
	SetMessage(var_79_int); // 0xb6 TObjFunc
	ClearReplies(); // 0xb8 TObjFunc
	var_80_int = 9651; // 0xba PushI
	var_81_int = 10621; // 0xbb PushI
	var_82_int = 10620; // 0xbc PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0xbd TObjFunc
	var_83_int = 9661; // 0xbf PushI
	var_84_int = 10633; // 0xc0 PushI
	var_85_int = 10632; // 0xc1 PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0xc2 TObjFunc
	var_86_int = 9665; // 0xc4 PushI
	var_87_int = 10625; // 0xc5 PushI
	var_88_int = 10638; // 0xc6 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0xc7 TObjFunc
	return 0; // 0xc9 Return
	
Label_202:
	var_89_int = 10633; // 0xca PushI
	var_90_bool = var_6_int == var_89_int; // 0xcb Eq
	if(var_90_bool == 0) goto Label_225; // 0xcc JumpB
	var_91_string = ""; // 0xcd PushV
	var_91_string = "Neutral"; // 0xce MovS
	func_126(var_7_bool, var_91_string); // 0xcf Call
	var_92_int = 9662; // 0xd1 PushI
	SetMessage(var_92_int); // 0xd2 TObjFunc
	ClearReplies(); // 0xd4 TObjFunc
	var_93_int = 9663; // 0xd6 PushI
	var_94_int = 10625; // 0xd7 PushI
	var_95_int = 10634; // 0xd8 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0xd9 TObjFunc
	var_96_int = 9664; // 0xdb PushI
	var_97_int = 10621; // 0xdc PushI
	var_98_int = 10636; // 0xdd PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0xde TObjFunc
	return 0; // 0xe0 Return
	
Label_225:
	var_99_int = 10621; // 0xe1 PushI
	var_100_bool = var_6_int == var_99_int; // 0xe2 Eq
	if(var_100_bool == 0) goto Label_248; // 0xe3 JumpB
	var_101_string = ""; // 0xe4 PushV
	var_101_string = "Neutral"; // 0xe5 MovS
	func_126(var_7_bool, var_101_string); // 0xe6 Call
	var_102_int = 9652; // 0xe8 PushI
	SetMessage(var_102_int); // 0xe9 TObjFunc
	ClearReplies(); // 0xeb TObjFunc
	var_103_int = 9653; // 0xed PushI
	var_104_int = 10623; // 0xee PushI
	var_105_int = 10622; // 0xef PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0xf0 TObjFunc
	var_106_int = 9660; // 0xf2 PushI
	var_107_int = 10625; // 0xf3 PushI
	var_108_int = 10630; // 0xf4 PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0xf5 TObjFunc
	return 0; // 0xf7 Return
	
Label_248:
	var_109_int = 10623; // 0xf8 PushI
	var_110_bool = var_6_int == var_109_int; // 0xf9 Eq
	if(var_110_bool == 0) goto Label_271; // 0xfa JumpB
	var_111_string = ""; // 0xfb PushV
	var_111_string = "Neutral"; // 0xfc MovS
	func_126(var_7_bool, var_111_string); // 0xfd Call
	var_112_int = 9654; // 0xff PushI
	SetMessage(var_112_int); // 0x100 TObjFunc
	ClearReplies(); // 0x102 TObjFunc
	var_113_int = 9655; // 0x104 PushI
	var_114_int = 10625; // 0x105 PushI
	var_115_int = 10624; // 0x106 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x107 TObjFunc
	var_116_int = 9659; // 0x109 PushI
	var_117_int = 10625; // 0x10a PushI
	var_118_int = 10628; // 0x10b PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x10c TObjFunc
	return 0; // 0x10e Return
	
Label_271:
	var_119_int = 10625; // 0x10f PushI
	var_120_bool = var_6_int == var_119_int; // 0x110 Eq
	if(var_120_bool == 0) goto Label_294; // 0x111 JumpB
	var_121_string = ""; // 0x112 PushV
	var_121_string = "Neutral"; // 0x113 MovS
	func_126(var_7_bool, var_121_string); // 0x114 Call
	var_122_int = 9656; // 0x116 PushI
	SetMessage(var_122_int); // 0x117 TObjFunc
	ClearReplies(); // 0x119 TObjFunc
	var_123_int = 9657; // 0x11b PushI
	var_124_int = -1; // 0x11c PushI
	var_125_int = 10626; // 0x11d PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x11e TObjFunc
	var_126_int = 9658; // 0x120 PushI
	var_127_int = -1; // 0x121 PushI
	var_128_int = 10627; // 0x122 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x123 TObjFunc
	return 0; // 0x125 Return
	
Label_294:
	var_3_string = 1; // 0x126 TMovB
	var_129_bool = 0; // 0x127 PushV
	func_653(var_129_bool); // 0x128 Call
	if(var_129_bool == 0) goto Label_302; // 0x12a JumpB
	lshStopAnimation(); // 0x12b Func
	goto Label_304; // 0x12d Jump
	
Label_304:
	return 0; // 0x130 Return
	
Label_302:
	StopAnimation(); // 0x12e Func
	
Label_306:
	return 0; // 0x132 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_bool = var_0_object == 0; // 0x13d Not
	if(var_7_bool == 0) goto Label_334; // 0x13e JumpB
	var_0_object = 1; // 0x13f TMovB
	func_404(); // 0x141 Call
	var_8_int = 0; var_9_object = Obj(); // 0x143 PushV
	var_9_object = var_6_object; // 0x144 Mov
	TaskCall(0); // 0x145 TaskCall
	func_0(var_10_object, var_8_int, var_9_object); // 0x146 Call
	TaskReturn(); // 0x147 TaskReturn
	var_113_bool = 0; var_114_string = ""; var_115_string = ""; // 0x149 PushV
	var_114_string = "quest_d4_01"; // 0x14a MovS
	var_115_string = "birdmask_done"; // 0x14b MovS
	func_509(var_113_bool, var_114_string, var_115_string); // 0x14c Call
	
Label_334:
	return 0; // 0x14e Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_0_object = 0; // 0x133 TMovB
	
Label_308:
	var_6_int = 3; // 0x134 PushI
	Sleep(var_6_int); // 0x135 Func
	func_335(); // 0x138 Call
	goto Label_308; // 0x13a Jump
}


func_0(var_0_object, var_8_int, var_9_object)
{
	var_11_object = Obj(); var_12_bool = 0; var_13_int = 0; var_14_bool = 0; var_15_object = Obj(); var_16_bool = 0; var_17_int = 0; var_18_bool = 0; // 0x0 PushV
	var_0_object = var_9_object; // 0x1 TMov
	var_19_bool = 0; var_20_object = Obj(); // 0x2 PushV
	var_20_object = var_9_object; // 0x3 Mov
	func_414(var_20_object); // 0x4 Call
	var_59_bool = var_19_bool == 0; // 0x6 Not
	if(var_59_bool == 0) goto Label_10; // 0x7 JumpB
	var_8_int = -2; // 0x8 MovI
	return 8; // 0x9 Return
	
Label_10:
	CreateDialog(var_15_object); // 0xa Func
	var_60_int = 0; // 0xc PushV
	func_649(var_60_int); // 0xd Call
	SetNPCName(var_60_int); // 0xf ObjFunc
	var_61_string = ""; // 0x11 PushV
	func_651(var_61_string); // 0x12 Call
	SetPhoto(var_61_string); // 0x14 ObjFunc
	var_62_int = 0; // 0x16 PushV
	func_632(var_62_int); // 0x17 Call
	SetPlayerName(var_62_int); // 0x19 ObjFunc
	var_17_int = -1; // 0x1b MovI
	IsOverrideActive(var_16_bool); // 0x1c Func
	var_70_bool = var_16_bool; // 0x1e Push
	if(var_70_bool == 0) goto Label_34; // 0x1f JumpB
	var_8_int = -2; // 0x20 MovI
	return 8; // 0x21 Return
	
Label_34:
	DoDialog(var_15_object); // 0x22 Func
	var_71_object = Obj(); var_72_object = Obj(); // 0x24 PushV
	var_71_object = var_9_object; // 0x25 Mov
	var_72_object = var_15_object; // 0x26 Mov
	TaskCall(1); // 0x27 TaskCall
	func_63(var_73_object, var_74_object, var_75_string, var_76_bool, var_71_object, var_72_object); // 0x28 Call
	TaskReturn(); // 0x29 TaskReturn
	IsDialogEnd(var_18_bool); // 0x2b ObjFunc
	
Label_45:
	var_111_bool = var_18_bool == 0; // 0x2d Not
	if(var_111_bool == 0) goto Label_52; // 0x2e JumpB
	sync(); // 0x2f Func
	IsDialogEnd(var_18_bool); // 0x31 ObjFunc
	goto Label_45; // 0x33 Jump
	
Label_52:
	var_112_object = Obj(); // 0x34 PushV
	var_112_object = var_9_object; // 0x35 Mov
	func_470(); // 0x36 Call
	StopDialog(var_15_object); // 0x38 Func
	GetReturnValue(var_17_int); // 0x3a ObjFunc
	var_8_int = var_17_int; // 0x3c Mov
	return 8; // 0x3d Return
}


func_582(var_16_object)
{
	var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); var_20_object = Obj(); // 0x246 PushV
	GetMainOutdoorScene(var_19_object); // 0x247 Func
	var_21_bool = var_19_object == 0; // 0x249 NullEq
	if(var_21_bool == 0) goto Label_593; // 0x24a JumpB
	var_22_string = "Can't find main outdoor scene"; // 0x24b PushS
	Trace(var_22_string); // 0x24c Func
	var_20_object = 0; // 0x24e SetNull
	var_16_object = var_20_object; // 0x24f Mov
	return 4; // 0x250 Return
	
Label_593:
	GetMap(var_20_object); // 0x251 ObjFunc
	var_16_object = var_20_object; // 0x253 Mov
	return 4; // 0x254 Return
}


func_649(var_60_int)
{
	var_60_int = 4029; // 0x289 MovI
	return 0; // 0x28a Return
}


func_521(var_27_float)
{
	var_28_float = 0; var_29_float = 0; // 0x209 PushV
	GetGameTime(var_29_float); // 0x20a Func
	var_27_float = var_29_float; // 0x20c Mov
	return 2; // 0x20d Return
}


func_651(var_61_string)
{
	var_61_string = "ui/NPC_Black.png"; // 0x28b MovS
	return 0; // 0x28c Return
}


func_653(var_79_bool)
{
	var_79_bool = 0; // 0x28d MovB
	return 0; // 0x28e Return
}


func_526(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x20e PushV
	var_34_string = "idle"; // 0x20f MovS
	var_35_int = var_32_int; // 0x210 Push
	if(var_35_int == 0) goto Label_531; // 0x211 JumpB
	var_34_string = var_34_string + var_32_int; // 0x212 Add2
	
Label_531:
	var_31_string = var_34_string; // 0x213 Mov
	return 2; // 0x214 Return
}


func_335()
{
	var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_bool = 0; var_12_float = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_bool = 0; var_19_float = 0; var_20_bool = 0; // 0x14f PushV
	WaitForAnimEnd(); // 0x150 Func
	var_21_bool = 0; // 0x152 PushV
	func_409(var_21_bool); // 0x153 Call
	var_24_bool = var_21_bool == 0; // 0x155 Not
	if(var_24_bool == 0) goto Label_344; // 0x156 JumpB
	return 14; // 0x157 Return
	
Label_344:
	var_25_int = 0; // 0x158 PushV
	func_533(var_25_int); // 0x159 Call
	var_14_int = var_25_int; // 0x15a Mov
	var_15_int = 0; // 0x15c MovI
	
Label_349:
	var_38_bool = 0; // 0x15d PushV
	var_38_bool = 0; // 0x15e MovB
	var_39_int = 5; // 0x15f PushI
	var_40_bool = var_15_int < var_39_int; // 0x160 LT
	if(var_40_bool == 0) goto Label_359; // 0x161 JumpB
	var_41_bool = 0; // 0x162 PushV
	func_409(var_41_bool); // 0x163 Call
	if(var_41_bool == 0) goto Label_359; // 0x165 JumpB
	var_38_bool = 1; // 0x166 MovB
	
Label_359:
	if(var_38_bool == 0) goto Label_403; // 0x167 JumpB
	var_42_int = 3; // 0x168 PushI
	irand(var_16_int, var_42_int); // 0x169 Func
	var_43_int = 0; // 0x16b PushI
	var_44_bool = var_16_int == var_43_int; // 0x16c Eq
	if(var_44_bool == 0) goto Label_383; // 0x16d JumpB
	var_45_int = var_14_int; // 0x16e Push
	if(var_45_int == 0) goto Label_382; // 0x16f JumpB
	irand(var_17_int, var_14_int); // 0x170 Func
	var_46_string = "all"; // 0x172 PushS
	var_47_string = ""; var_48_int = 0; // 0x173 PushV
	var_48_int = var_17_int; // 0x174 Mov
	func_526(var_47_string, var_48_int); // 0x175 Call
	PlayAnimation(var_46_string, var_47_string); // 0x177 Func
	WaitForAnimEnd(var_18_bool); // 0x179 Func
	var_49_bool = var_18_bool == 0; // 0x17b Not
	if(var_49_bool == 0) goto Label_382; // 0x17c JumpB
	goto Label_403; // 0x17d Jump
	
Label_403:
	return 14; // 0x193 Return
	
Label_382:
	goto Label_400; // 0x17e Jump
	
Label_400:
	var_50_int = 1; // 0x190 PushI
	var_15_int = var_15_int + var_50_int; // 0x191 Add2
	goto Label_349; // 0x192 Jump
	
Label_383:
	var_51_int = 1; // 0x17f PushI
	var_52_bool = var_16_int == var_51_int; // 0x180 Eq
	if(var_52_bool == 0) goto Label_397; // 0x181 JumpB
	var_53_int = 4; // 0x182 PushI
	rand(var_19_float, var_53_int); // 0x183 Func
	var_54_int = 1; // 0x185 PushI
	var_55_int = var_19_float + var_54_int; // 0x186 Add
	Sleep(var_55_int, var_20_bool); // 0x187 Func
	var_56_bool = var_20_bool == 0; // 0x189 Not
	if(var_56_bool == 0) goto Label_396; // 0x18a JumpB
	goto Label_403; // 0x18b Jump
	
Label_396:
	goto Label_400; // 0x18c Jump
	
Label_397:
	var_57_int = var_15_int; // 0x18d Push
	if(var_57_int == 0) goto Label_400; // 0x18e JumpB
	goto Label_403; // 0x18f Jump
}


func_404()
{
	StopAnimation(); // 0x194 Func
	StopGroup0(); // 0x196 Func
	return 0; // 0x198 Return
}


func_533(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x215 PushV
	var_28_int = 0; // 0x216 MovI
	
Label_535:
	var_30_string = "all"; // 0x217 PushS
	var_31_string = ""; var_32_int = 0; // 0x218 PushV
	var_32_int = var_28_int; // 0x219 Mov
	func_526(var_31_string, var_32_int); // 0x21a Call
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x21c Func
	var_36_bool = var_29_bool == 0; // 0x21e Not
	if(var_36_bool == 0) goto Label_545; // 0x21f JumpB
	goto Label_548; // 0x220 Jump
	
Label_548:
	var_25_int = var_28_int; // 0x224 Mov
	return 4; // 0x225 Return
	
Label_545:
	var_37_int = 1; // 0x221 PushI
	var_28_int = var_28_int + var_37_int; // 0x222 Add2
	goto Label_535; // 0x223 Jump
}


func_470()
{
	CameraSwitchToNormal(); // 0x1d7 Func
	return 0; // 0x1d9 Return
}


func_599(var_32_object, var_33_string, var_34_float)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_object = Obj(); var_39_bool = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_object = Obj(); var_43_bool = 0; // 0x257 PushV
	GetMainOutdoorScene(var_42_object); // 0x258 Func
	var_44_bool = var_42_object == 0; // 0x25a NullEq
	if(var_44_bool == 0) goto Label_608; // 0x25b JumpB
	var_45_string = "Can't find main outdoor scene"; // 0x25c PushS
	Trace(var_45_string); // 0x25d Func
	return 8; // 0x25f Return
	
Label_608:
	GetLocator(var_33_string, var_43_bool, var_40_cvector, var_41_cvector); // 0x260 ObjFunc
	var_46_bool = var_43_bool == 0; // 0x262 Not
	if(var_46_bool == 0) goto Label_618; // 0x263 JumpB
	var_47_string = "Warning: outdoor scene locator "; // 0x264 PushS
	var_48_int = var_47_string + var_33_string; // 0x265 Add
	var_49_string = " doesnt exist"; // 0x266 PushS
	var_50_int = var_48_int + var_49_string; // 0x267 Add
	Trace(var_50_int); // 0x268 Func
	
Label_618:
	GetMap(var_32_object); // 0x26a ObjFunc
	var_51_bool = var_32_object == 0; // 0x26c NullEq
	if(var_51_bool == 0) goto Label_626; // 0x26d JumpB
	var_52_string = "Can't find map"; // 0x26e PushS
	Trace(var_52_string); // 0x26f Func
	return 8; // 0x271 Return
	
Label_626:
	var_53_float = GetByIndex(var_40_cvector, 0); // 0x272 PushE
	var_54_float = GetByIndex(var_40_cvector, 2); // 0x273 PushE
	SetMapParams(var_53_float, var_54_float, var_34_float); // 0x274 ObjFunc
	return 8; // 0x276 Return
}


func_409(var_21_bool)
{
	var_22_bool = 0; var_23_bool = 0; // 0x199 PushV
	IsLoaded(var_23_bool); // 0x19a Func
	var_21_bool = var_23_bool; // 0x19c Mov
	return 2; // 0x19d Return
}


func_474(var_82_string)
{
	var_83_float = 0; var_84_float = 0; var_85_float = 0; var_86_float = 0; // 0x1da PushV
	var_87_string = "playing "; // 0x1db PushS
	var_88_int = var_87_string + var_82_string; // 0x1dc Add
	Trace(var_88_int); // 0x1dd Func
	lshGetAnimTimes(var_82_string, var_85_float, var_86_float); // 0x1df Func
	lshPlayAnimation(var_85_float, var_86_float); // 0x1e1 Func
	var_89_string = "start: "; // 0x1e3 PushS
	var_90_int = var_89_string + var_85_float; // 0x1e4 Add
	Trace(var_90_int); // 0x1e5 Func
	var_91_string = "end: "; // 0x1e7 PushS
	var_92_int = var_91_string + var_86_float; // 0x1e8 Add
	Trace(var_92_int); // 0x1e9 Func
	return 4; // 0x1eb Return
}


func_414(var_19_bool)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; // 0x19e PushV
	GetPosition(var_30_cvector); // 0x19f ObjFunc
	GetEyesHeight(var_29_float); // 0x1a1 ObjFunc
	var_37_float = GetByIndex(var_30_cvector, 1); // 0x1a3 PushE
	var_37_float = var_37_float + var_29_float; // 0x1a4 Add2
	SetByIndex(var_30_cvector, 1) = var_37_float; // 0x1a5 PopE
	GetPosition(var_31_cvector); // 0x1a6 Func
	GetEyesHeight(var_29_float); // 0x1a8 Func
	var_38_float = GetByIndex(var_31_cvector, 1); // 0x1aa PushE
	var_38_float = var_38_float + var_29_float; // 0x1ab Add2
	SetByIndex(var_31_cvector, 1) = var_38_float; // 0x1ac PopE
	var_32_cvector = var_30_cvector - var_31_cvector; // 0x1ad Sub2
	var_39_float = GetByIndex(var_32_cvector, 1); // 0x1ae PushE
	var_39_float = 0; // 0x1af MovI
	SetByIndex(var_32_cvector, 1) = var_39_float; // 0x1b0 PopE
	var_40_int = var_32_cvector | var_32_cvector; // 0x1b1 Or
	var_41_float = sqrt(var_40_int); // 0x1b2 Sqrt
	var_32_cvector = var_32_cvector / var_32_cvector; // 0x1b3 Div2
	var_33_cvector = -var_32_cvector; // 0x1b4 Neg2
	var_42_int = 70; // 0x1b5 PushI
	var_43_float = var_32_cvector * var_42_int; // 0x1b6 Mult
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); // 0x1b7 PushV
	var_46_cvector = CVector(0.0, 1.0, 0.0); // 0x1b8 PushVec
	var_45_cvector = var_33_cvector ^ var_46_cvector; // 0x1b9 Xor2
	func_499(var_44_cvector, var_45_cvector); // 0x1ba Call
	var_52_int = 25; // 0x1bc PushI
	var_53_float = var_44_cvector * var_52_int; // 0x1bd Mult
	var_54_int = var_43_float + var_53_float; // 0x1be Add
	var_55_cvector = CVector(0.0, 10.0, 0.0); // 0x1bf PushVec
	var_34_cvector = var_54_int - var_55_cvector; // 0x1c0 Sub2
	var_35_cvector = var_31_cvector + var_34_cvector; // 0x1c1 Add2
	IsOverrideActive(var_36_bool); // 0x1c2 Func
	var_56_bool = var_36_bool; // 0x1c4 Push
	if(var_56_bool == 0) goto Label_456; // 0x1c5 JumpB
	var_19_bool = 0; // 0x1c6 MovB
	return 16; // 0x1c7 Return
	
Label_456:
	StopWorld(); // 0x1c8 Func
	CameraTransit(var_35_cvector, var_33_cvector); // 0x1ca Func
	var_57_float = GetByIndex(var_34_cvector, 0); // 0x1cc PushE
	var_58_float = GetByIndex(var_34_cvector, 2); // 0x1cd PushE
	Rotate(var_57_float, var_58_float); // 0x1ce Func
	CameraWaitForPlayFinish(); // 0x1d0 Func
	ResumeWorld(); // 0x1d2 Func
	var_19_bool = 1; // 0x1d4 MovB
	return 16; // 0x1d5 Return
}


func_550()
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x226 PushV
	var_16_object = Obj(); // 0x227 PushV
	func_582(var_16_object); // 0x228 Call
	var_15_object = var_16_object; // 0x229 Mov
	var_23_string = "d4q01Whitemask"; // 0x22b PushS
	var_24_string = "pt_d4q01_key1"; // 0x22c PushS
	var_25_int = 1; // 0x22d PushI
	var_26_int = 11523; // 0x22e PushI
	var_27_float = 0; // 0x22f PushV
	func_521(var_27_float); // 0x230 Call
	AddMark(var_23_string, var_24_string, var_25_int, var_26_int, var_27_float); // 0x232 ObjFunc
	return 2; // 0x234 Return
}


func_492()
{
	var_9_bool = 0; // 0x1ec PushV
	func_653(var_9_bool); // 0x1ed Call
	if(var_9_bool == 0) goto Label_498; // 0x1ef JumpB
	lshStopSpeech(); // 0x1f0 Func
	
Label_498:
	return 0; // 0x1f2 Return
}


func_499(var_44_cvector, var_45_cvector)
{
	var_47_float = 0; var_48_float = 0; // 0x1f3 PushV
	var_49_int = var_45_cvector | var_45_cvector; // 0x1f4 Or
	var_48_float = sqrt(var_49_int); // 0x1f5 Sqrt2
	var_50_float = 0.0; // 0x1f6 PushF
	var_51_bool = var_48_float < var_50_float; // 0x1f7 LT
	if(var_51_bool == 0) goto Label_507; // 0x1f8 JumpB
	var_44_cvector = CVector(0.0, 0.0, 0.0); // 0x1f9 MovV
	return 2; // 0x1fa Return
	
Label_507:
	var_44_cvector = var_45_cvector / var_45_cvector; // 0x1fb Div2
	return 2; // 0x1fc Return
}


func_566()
{
	var_32_object = Obj(); var_33_string = ""; var_34_float = 0; // 0x237 PushV
	var_35_object = Obj(); // 0x238 PushV
	func_582(var_35_object); // 0x239 Call
	var_32_object = var_35_object; // 0x23a Mov
	var_33_string = "pt_d4q01_whitemask"; // 0x23c MovS
	var_34_float = 2; // 0x23d MovI
	func_599(var_32_object, var_33_string, var_34_float); // 0x23e Call
	var_55_object = Obj(); // 0x240 PushV
	func_582(var_55_object); // 0x241 Call
	ShowMap(var_55_object); // 0x243 ObjFunc
	return 0; // 0x245 Return
}


func_632(var_62_int)
{
	var_63_int = 0; var_64_int = 0; // 0x278 PushV
	var_65_string = "player"; // 0x279 PushS
	GetVariable(var_65_string, var_64_int); // 0x27a Func
	var_66_int = 0; // 0x27c PushI
	var_67_bool = var_64_int == var_66_int; // 0x27d Eq
	if(var_67_bool == 0) goto Label_642; // 0x27e JumpB
	var_62_int = 200001; // 0x27f MovI
	return 2; // 0x280 Return
	
Label_642:
	var_68_int = 1; // 0x282 PushI
	var_69_bool = var_64_int == var_68_int; // 0x283 Eq
	if(var_69_bool == 0) goto Label_647; // 0x284 JumpB
	var_62_int = 200002; // 0x285 MovI
	return 2; // 0x286 Return
	
Label_647:
	var_62_int = 200003; // 0x287 MovI
	return 2; // 0x288 Return
}


func_509(var_113_bool, var_114_string, var_115_string)
{
	var_116_object = Obj(); var_117_object = Obj(); // 0x1fd PushV
	FindActor(var_117_object, var_114_string); // 0x1fe Func
	var_118_bool = var_117_object == 0; // 0x200 NullEq
	if(var_118_bool == 0) goto Label_516; // 0x201 JumpB
	var_113_bool = 0; // 0x202 MovB
	return 2; // 0x203 Return
	
Label_516:
	Trigger(var_117_object, var_115_string); // 0x204 Func
	var_113_bool = 1; // 0x206 MovB
	return 2; // 0x207 Return
}


func_126(var_2_object, var_78_string)
{
	var_79_bool = 0; // 0x7f PushV
	func_653(var_79_bool); // 0x80 Call
	var_80_bool = var_79_bool == 0; // 0x82 Not
	if(var_80_bool == 0) goto Label_133; // 0x83 JumpB
	return 0; // 0x84 Return
	
Label_133:
	var_81_bool = var_78_string == var_2_object; // 0x85 Eq
	if(var_81_bool == 0) goto Label_136; // 0x86 JumpB
	return 0; // 0x87 Return
	
Label_136:
	var_82_string = ""; // 0x88 PushV
	var_82_string = var_78_string; // 0x89 Mov
	func_474(var_82_string); // 0x8a Call
	var_2_object = var_78_string; // 0x8c TMov
	return 0; // 0x8d Return
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_71_object, var_72_object)
{
	var_0_object = var_72_object; // 0x40 TMov
	var_1_object = var_71_object; // 0x41 TMov
	var_3_string = 0; // 0x42 TMovB
	var_77_int = 1; // 0x43 PushI
	if(var_77_int == 0) goto Label_96; // 0x44 JumpB
	var_78_string = ""; // 0x45 PushV
	var_78_string = "Neutral"; // 0x46 MovS
	func_126(var_72_object, var_78_string); // 0x47 Call
	var_93_int = 9650; // 0x49 PushI
	SetMessage(var_93_int); // 0x4a TObjFunc
	ClearReplies(); // 0x4c TObjFunc
	var_94_int = 9651; // 0x4e PushI
	var_95_int = 10621; // 0x4f PushI
	var_96_int = 10620; // 0x50 PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x51 TObjFunc
	var_97_int = 9661; // 0x53 PushI
	var_98_int = 10633; // 0x54 PushI
	var_99_int = 10632; // 0x55 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x56 TObjFunc
	var_100_int = 9665; // 0x58 PushI
	var_101_int = 10625; // 0x59 PushI
	var_102_int = 10638; // 0x5a PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x5b TObjFunc
	goto Label_96; // 0x5d Jump
	
Label_96:
	var_103_bool = 0; // 0x60 PushV
	func_653(var_103_bool); // 0x61 Call
	if(var_103_bool == 0) goto Label_111; // 0x63 JumpB
	
Label_100:
	lshWaitForAnimEnd(); // 0x64 Func
	var_104_string = var_3_string; // 0x66 PushT
	if(var_104_string == 0) goto Label_105; // 0x67 JumpB
	goto Label_110; // 0x68 Jump
	
Label_110:
	goto Label_125; // 0x6e Jump
	
Label_125:
	return 0; // 0x7d Return
	
Label_105:
	var_105_string = ""; // 0x69 PushV
	var_105_string = var_2_object; // 0x6a MovT
	func_474(var_105_string); // 0x6b Call
	goto Label_100; // 0x6d Jump
	
Label_111:
	var_106_string = "all"; // 0x6f PushS
	var_107_string = "idle"; // 0x70 PushS
	PlayAnimation(var_106_string, var_107_string); // 0x71 Func
	
Label_115:
	WaitForAnimEnd(); // 0x73 Func
	var_108_string = var_3_string; // 0x75 PushT
	if(var_108_string == 0) goto Label_120; // 0x76 JumpB
	goto Label_125; // 0x77 Jump
	
Label_120:
	var_109_string = "all"; // 0x78 PushS
	var_110_string = "idle"; // 0x79 PushS
	PlayAnimation(var_109_string, var_110_string); // 0x7a Func
	goto Label_115; // 0x7c Jump
}


