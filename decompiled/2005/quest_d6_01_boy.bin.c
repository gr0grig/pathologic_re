task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xa0 PushI
	if(var_12_int == 0) goto Label_275; // 0xa1 JumpB
	func_604(); // 0xa3 NEW_2
	var_14_int = 4344; // 0xa5 PushI
	var_15_bool = var_11_object == var_14_int; // 0xa6 Eq
	if(var_15_bool == 0) goto Label_173; // 0xa7 JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xa8 PushV
	var_16_object = var_1_object; // 0xa9 MovT
	var_17_object = var_0_object; // 0xaa MovT
	func_660(); // 0xab NEW_2
	
Label_173:
	var_20_int = 4342; // 0xad PushI
	var_21_bool = var_10_bool == var_20_int; // 0xae Eq
	if(var_21_bool == 0) goto Label_201; // 0xaf JumpB
	var_22_string = ""; // 0xb0 PushV
	var_22_string = "Neutral"; // 0xb1 MovS
	func_137(var_11_object, var_22_string); // 0xb2 NEW_2
	var_39_int = 503989; // 0xb4 PushI
	SetMessage(var_39_int); // 0xb5 TObjFunc
	ClearReplies(); // 0xb7 TObjFunc
	var_40_bool = 0; var_41_object = Obj(); // 0xb9 PushV
	var_41_object = var_1_object; // 0xba MovT
	func_666(var_41_object); // 0xbb NEW_2
	if(var_40_bool == 0) goto Label_195; // 0xbd JumpB
	var_48_int = 503991; // 0xbe PushI
	var_49_int = 38108; // 0xbf PushI
	var_50_int = 4344; // 0xc0 PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0xc1 TObjFunc
	
Label_195:
	var_51_int = 536326; // 0xc3 PushI
	var_52_int = -1; // 0xc4 PushI
	var_53_int = 38107; // 0xc5 PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0xc6 TObjFunc
	return 0; // 0xc8 Return
	
Label_201:
	var_54_int = 38108; // 0xc9 PushI
	var_55_bool = var_10_bool == var_54_int; // 0xca Eq
	if(var_55_bool == 0) goto Label_219; // 0xcb JumpB
	var_56_string = ""; // 0xcc PushV
	var_56_string = "Neutral"; // 0xcd MovS
	func_137(var_11_object, var_56_string); // 0xce NEW_2
	var_57_int = 536327; // 0xd0 PushI
	SetMessage(var_57_int); // 0xd1 TObjFunc
	ClearReplies(); // 0xd3 TObjFunc
	var_58_int = 536328; // 0xd5 PushI
	var_59_int = 4345; // 0xd6 PushI
	var_60_int = 38109; // 0xd7 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0xd8 TObjFunc
	return 0; // 0xda Return
	
Label_219:
	var_61_int = 4350; // 0xdb PushI
	var_62_bool = var_10_bool == var_61_int; // 0xdc Eq
	if(var_62_bool == 0) goto Label_222; // 0xdd JumpB
	
Label_222:
	var_63_int = 4345; // 0xde PushI
	var_64_bool = var_10_bool == var_63_int; // 0xdf Eq
	if(var_64_bool == 0) goto Label_240; // 0xe0 JumpB
	var_65_string = ""; // 0xe1 PushV
	var_65_string = "Neutral"; // 0xe2 MovS
	func_137(var_11_object, var_65_string); // 0xe3 NEW_2
	var_66_int = 503992; // 0xe5 PushI
	SetMessage(var_66_int); // 0xe6 TObjFunc
	ClearReplies(); // 0xe8 TObjFunc
	var_67_int = 503993; // 0xea PushI
	var_68_int = 4347; // 0xeb PushI
	var_69_int = 4346; // 0xec PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0xed TObjFunc
	return 0; // 0xef Return
	
Label_240:
	var_70_int = 4347; // 0xf0 PushI
	var_71_bool = var_10_bool == var_70_int; // 0xf1 Eq
	if(var_71_bool == 0) goto Label_263; // 0xf2 JumpB
	var_72_string = ""; // 0xf3 PushV
	var_72_string = "Neutral"; // 0xf4 MovS
	func_137(var_11_object, var_72_string); // 0xf5 NEW_2
	var_73_int = 503994; // 0xf7 PushI
	SetMessage(var_73_int); // 0xf8 TObjFunc
	ClearReplies(); // 0xfa TObjFunc
	var_74_int = 503995; // 0xfc PushI
	var_75_int = -1; // 0xfd PushI
	var_76_int = 4348; // 0xfe PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0xff TObjFunc
	var_77_int = 503996; // 0x101 PushI
	var_78_int = -1; // 0x102 PushI
	var_79_int = 4349; // 0x103 PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0x104 TObjFunc
	return 0; // 0x106 Return
	
Label_263:
	var_3_string = 1; // 0x107 TMovB
	var_80_bool = 0; // 0x108 PushV
	func_658(var_80_bool); // 0x109 NEW_2
	if(var_80_bool == 0) goto Label_271; // 0x10b JumpB
	lshStopAnimation(); // 0x10c Func
	goto Label_273; // 0x10e Jump
	
Label_273:
	return 0; // 0x111 Return
	
Label_271:
	StopAnimation(); // 0x10f Func
	
Label_275:
	return 0; // 0x113 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_364(var_9_object, var_10_object); // 0x122 NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0x124 PushV
	var_15_object = var_10_object; // 0x125 Mov
	TaskCall(0); // 0x126 TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x127 NEW_2
	TaskReturn(); // 0x128 TaskReturn
	return 0; // 0x12a Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x156 PushI
	var_12_bool = var_10_int == var_11_int; // 0x157 Eq
	if(var_12_bool == 0) goto Label_363; // 0x158 JumpB
	var_13_bool = 0; // 0x159 PushV
	func_326(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x15a NEW_2
	if(var_13_bool == 0) goto Label_357; // 0x15c JumpB
	var_26_bool = var_2_object == 0; // 0x15d Not
	if(var_26_bool == 0) goto Label_356; // 0x15e JumpB
	var_27_object = Obj(); // 0x15f PushV
	var_27_object = var_4_bool; // 0x160 MovT
	func_593(var_27_object); // 0x161 NEW_2
	var_2_object = 1; // 0x163 TMovB
	
Label_356:
	goto Label_363; // 0x164 Jump
	
Label_363:
	return 0; // 0x16b Return
	
Label_357:
	var_34_object = var_2_object; // 0x165 PushT
	if(var_34_object == 0) goto Label_363; // 0x166 JumpB
	var_35_string = "head"; // 0x167 PushS
	UnlookAsync(var_35_string); // 0x168 Func
	var_2_object = 0; // 0x16a TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_276:
	var_10_bool = 1; // 0x114 PushB
	if(var_10_bool == 0) goto Label_287; // 0x115 JumpB
	var_11_int = 1; // 0x116 PushI
	Sleep(var_11_int); // 0x117 Func
	var_12_float = 0; var_13_float = 0; // 0x119 PushV
	var_12_float = 300; // 0x11a MovI
	var_13_float = 100; // 0x11b MovI
	func_299(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_12_float, var_13_float); // 0x11c NEW_2
	goto Label_276; // 0x11e Jump
	
Label_287:
	return 0; // 0x11f Return
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 70.0; // 0x4 MovF
	func_477(var_26_object, var_27_float); // 0x5 NEW_2
	var_71_bool = var_25_bool == 0; // 0x7 Not
	if(var_71_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_72_int = 0; // 0xd PushV
	func_652(var_72_int); // 0xe NEW_2
	SetNPCName(var_72_int); // 0x10 ObjFunc
	var_73_int = 0; // 0x12 PushV
	func_650(var_73_int); // 0x13 NEW_2
	SetNPCDescription(var_73_int); // 0x15 ObjFunc
	var_74_string = ""; // 0x17 PushV
	func_654(var_74_string); // 0x18 NEW_2
	SetPhoto(var_74_string); // 0x1a ObjFunc
	var_75_string = ""; // 0x1c PushV
	func_656(var_75_string); // 0x1d NEW_2
	SetPhoto2(var_75_string); // 0x1f ObjFunc
	var_76_int = 0; // 0x21 PushV
	func_678(var_76_int); // 0x22 NEW_2
	SetPlayerName(var_76_int); // 0x24 ObjFunc
	var_23_int = -1; // 0x26 MovI
	IsOverrideActive(var_22_bool); // 0x27 Func
	var_84_bool = var_22_bool; // 0x29 Push
	if(var_84_bool == 0) goto Label_45; // 0x2a JumpB
	var_14_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_21_object); // 0x2d Func
	var_85_object = Obj(); var_86_object = Obj(); // 0x2f PushV
	var_85_object = var_15_object; // 0x30 Mov
	var_86_object = var_21_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_87_object, var_88_object, var_89_string, var_90_bool, var_85_object, var_86_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_24_bool); // 0x36 ObjFunc
	
Label_56:
	var_142_bool = var_24_bool == 0; // 0x38 Not
	if(var_142_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_143_object = Obj(); // 0x3f PushV
	var_143_object = var_15_object; // 0x40 Mov
	func_545(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_578(var_96_string, var_97_bool)
{
	var_100_bool = 0; var_101_float = 0; var_102_float = 0; var_103_bool = 0; var_104_float = 0; var_105_float = 0; // 0x242 PushV
	lshHasAnimation(var_103_bool, var_96_string); // 0x243 Func
	var_106_bool = var_103_bool; // 0x245 Push
	if(var_106_bool == 0) goto Label_588; // 0x246 JumpB
	lshGetAnimTimes(var_96_string, var_104_float, var_105_float); // 0x247 Func
	lshPlayAnimation(var_104_float, var_105_float, var_97_bool); // 0x249 Func
	goto Label_592; // 0x24b Jump
	
Label_592:
	return 6; // 0x250 Return
	
Label_588:
	var_107_string = "Can't find lsh animation : "; // 0x24c PushS
	var_108_int = var_107_string + var_96_string; // 0x24d Add
	Trace(var_108_int); // 0x24e Func
}


func_326(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x146 PushV
	var_16_bool = var_4_bool == 0; // 0x147 NullEq
	if(var_16_bool == 0) goto Label_331; // 0x148 JumpB
	var_13_bool = 0; // 0x149 MovB
	return 2; // 0x14a Return
	
Label_331:
	var_17_float = 0; var_18_object = Obj(); // 0x14b PushV
	var_18_object = var_4_bool; // 0x14c MovT
	func_464(var_18_object); // 0x14d NEW_2
	var_15_float = sqrt(var_17_float); // 0x14f Sqrt2
	var_25_object = var_2_object; // 0x150 PushT
	if(var_25_object == 0) goto Label_339; // 0x151 JumpB
	var_15_float = var_15_float - var_1_object; // 0x152 Sub2
	
Label_339:
	var_13_bool = var_15_float < var_0_object; // 0x153 LT2
	return 2; // 0x154 Return
}


func_137(var_2_object, var_92_string)
{
	var_93_bool = 0; // 0x8a PushV
	func_658(var_93_bool); // 0x8b NEW_2
	var_94_bool = var_93_bool == 0; // 0x8d Not
	if(var_94_bool == 0) goto Label_144; // 0x8e JumpB
	return 0; // 0x8f Return
	
Label_144:
	var_95_bool = var_92_string == var_2_object; // 0x90 Eq
	if(var_95_bool == 0) goto Label_147; // 0x91 JumpB
	return 0; // 0x92 Return
	
Label_147:
	var_96_string = ""; var_97_bool = 0; // 0x93 PushV
	var_96_string = var_92_string; // 0x94 Mov
	var_98_string = ""; // 0x95 PushS
	var_99_bool = var_92_string == var_98_string; // 0x96 Eq
	if(var_99_bool == 0) goto Label_154; // 0x97 JumpB
	var_97_bool = 0; // 0x98 MovB
	goto Label_155; // 0x99 Jump
	
Label_155:
	func_578(var_96_string, var_97_bool); // 0x9b NEW_2
	var_2_object = var_92_string; // 0x9d TMov
	return 0; // 0x9e Return
	
Label_154:
	var_97_bool = 1; // 0x9a MovB
}


func_650(var_73_int)
{
	var_73_int = 515558; // 0x28a MovI
	return 0; // 0x28b Return
}


func_457(var_62_bool)
{
	var_62_bool = 1; // 0x1c9 MovB
	return 0; // 0x1ca Return
}


func_652(var_72_int)
{
	var_72_int = 503343; // 0x28c MovI
	return 0; // 0x28d Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_85_object, var_86_object)
{
	var_0_object = var_86_object; // 0x4b TMov
	var_1_object = var_85_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_91_int = 1; // 0x4e PushI
	if(var_91_int == 0) goto Label_107; // 0x4f JumpB
	var_92_string = ""; // 0x50 PushV
	var_92_string = "Neutral"; // 0x51 MovS
	func_137(var_86_object, var_92_string); // 0x52 NEW_2
	var_109_int = 503989; // 0x54 PushI
	SetMessage(var_109_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_110_bool = 0; var_111_object = Obj(); // 0x59 PushV
	var_111_object = var_1_object; // 0x5a MovT
	func_666(var_111_object); // 0x5b NEW_2
	if(var_110_bool == 0) goto Label_99; // 0x5d JumpB
	var_118_int = 503991; // 0x5e PushI
	var_119_int = 38108; // 0x5f PushI
	var_120_int = 4344; // 0x60 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x61 TObjFunc
	
Label_99:
	var_121_int = 536326; // 0x63 PushI
	var_122_int = -1; // 0x64 PushI
	var_123_int = 38107; // 0x65 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x66 TObjFunc
	goto Label_107; // 0x68 Jump
	
Label_107:
	var_124_bool = 0; // 0x6b PushV
	func_658(var_124_bool); // 0x6c NEW_2
	if(var_124_bool == 0) goto Label_122; // 0x6e JumpB
	
Label_111:
	lshWaitForAnimEnd(); // 0x6f Func
	var_125_string = var_3_string; // 0x71 PushT
	if(var_125_string == 0) goto Label_116; // 0x72 JumpB
	goto Label_121; // 0x73 Jump
	
Label_121:
	goto Label_136; // 0x79 Jump
	
Label_136:
	return 0; // 0x88 Return
	
Label_116:
	var_126_string = ""; // 0x74 PushV
	var_126_string = var_2_object; // 0x75 MovT
	func_562(var_126_string); // 0x76 NEW_2
	goto Label_111; // 0x78 Jump
	
Label_122:
	var_137_string = "all"; // 0x7a PushS
	var_138_string = "idle"; // 0x7b PushS
	PlayAnimation(var_137_string, var_138_string); // 0x7c Func
	
Label_126:
	WaitForAnimEnd(); // 0x7e Func
	var_139_string = var_3_string; // 0x80 PushT
	if(var_139_string == 0) goto Label_131; // 0x81 JumpB
	goto Label_136; // 0x82 Jump
	
Label_131:
	var_140_string = "all"; // 0x83 PushS
	var_141_string = "idle"; // 0x84 PushS
	PlayAnimation(var_140_string, var_141_string); // 0x85 Func
	goto Label_126; // 0x87 Jump
}


func_654(var_74_string)
{
	var_74_string = "ui/NPC_Citizen3.png"; // 0x28e MovS
	return 0; // 0x28f Return
}


func_459()
{
	StopAnimation(); // 0x1cb Func
	StopGroup0(); // 0x1cd Func
	return 0; // 0x1cf Return
}


func_656(var_75_string)
{
	var_75_string = "ui/NPC_Citizen3_b.png"; // 0x290 MovS
	return 0; // 0x291 Return
}


func_464(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x1d0 PushV
	GetPosition(var_22_cvector); // 0x1d1 Func
	GetPosition(var_23_cvector); // 0x1d3 ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x1d5 Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x1d6 Or2
	return 6; // 0x1d7 Return
}


func_658(var_67_bool)
{
	var_67_bool = 0; // 0x292 MovB
	return 0; // 0x293 Return
}


func_593(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x251 PushV
	GetEyesHeight(var_30_float); // 0x252 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x254 MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x255 PushE
	var_32_float = var_30_float; // 0x256 Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x257 PopE
	var_33_string = "head"; // 0x258 PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x259 Func
	return 4; // 0x25b Return
}


func_660()
{
	var_18_string = "ood6Boy1"; // 0x295 PushS
	var_19_int = 1; // 0x296 PushI
	SetVariable(var_18_string, var_19_int); // 0x297 Func
	return 0; // 0x299 Return
}


func_472(var_14_bool)
{
	var_15_bool = 0; var_16_bool = 0; // 0x1d8 PushV
	IsLoaded(var_16_bool); // 0x1d9 Func
	var_14_bool = var_16_bool; // 0x1db Mov
	return 2; // 0x1dc Return
}


func_666(var_110_bool)
{
	var_112_int = 0; var_113_string = ""; // 0x29b PushV
	var_113_string = "ood6Boy1"; // 0x29c MovS
	func_621(var_112_int, var_113_string); // 0x29d NEW_2
	var_116_int = 0; // 0x29f PushI
	var_117_bool = var_112_int == var_116_int; // 0x2a0 Eq
	if(var_117_bool == 0) goto Label_676; // 0x2a1 JumpB
	var_110_bool = 1; // 0x2a2 MovB
	return 0; // 0x2a3 Return
	
Label_676:
	var_110_bool = 0; // 0x2a4 MovB
	return 0; // 0x2a5 Return
}


func_604()
{
	var_13_bool = 0; // 0x25c PushV
	func_658(var_13_bool); // 0x25d NEW_2
	if(var_13_bool == 0) goto Label_610; // 0x25f JumpB
	lshStopSpeech(); // 0x260 Func
	
Label_610:
	return 0; // 0x262 Return
}


func_477(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x1dd PushV
	GetPosition(var_38_cvector); // 0x1de ObjFunc
	GetEyesHeight(var_37_float); // 0x1e0 ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x1e2 PushE
	var_46_float = var_46_float + var_37_float; // 0x1e3 Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x1e4 PopE
	GetPosition(var_39_cvector); // 0x1e5 Func
	GetEyesHeight(var_37_float); // 0x1e7 Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x1e9 PushE
	var_47_float = var_47_float + var_37_float; // 0x1ea Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x1eb PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x1ec Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x1ed PushE
	var_48_float = 0; // 0x1ee MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x1ef PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x1f0 Or
	var_50_float = sqrt(var_49_int); // 0x1f1 Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x1f2 Div2
	var_41_cvector = -var_40_cvector; // 0x1f3 Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x1f4 Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x1f5 PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x1f6 PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x1f7 Xor2
	func_611(var_52_cvector, var_53_cvector); // 0x1f8 NEW_2
	var_60_int = 25; // 0x1fa PushI
	var_61_float = var_52_cvector * var_60_int; // 0x1fb Mult
	var_62_int = var_51_float + var_61_float; // 0x1fc Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x1fd PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x1fe Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x1ff Add2
	IsOverrideActive(var_44_bool); // 0x200 Func
	var_64_bool = var_44_bool; // 0x202 Push
	if(var_64_bool == 0) goto Label_518; // 0x203 JumpB
	var_25_bool = 0; // 0x204 MovB
	return 18; // 0x205 Return
	
Label_518:
	StopWorld(); // 0x206 Func
	CameraTransit(var_43_cvector, var_41_cvector); // 0x208 Func
	var_65_float = GetByIndex(var_42_cvector, 0); // 0x20a PushE
	var_66_float = GetByIndex(var_42_cvector, 2); // 0x20b PushE
	Rotate(var_65_float, var_66_float); // 0x20c Func
	var_67_bool = 0; // 0x20e PushV
	func_658(var_67_bool); // 0x20f NEW_2
	if(var_67_bool == 0) goto Label_531; // 0x211 JumpB
	goto Label_539; // 0x212 Jump
	
Label_539:
	CameraWaitForPlayFinish(); // 0x21b Func
	ResumeWorld(); // 0x21d Func
	var_25_bool = 1; // 0x21f MovB
	return 18; // 0x220 Return
	
Label_531:
	var_68_string = "head"; // 0x213 PushS
	HasAnimationTrack(var_45_bool, var_68_string); // 0x214 Func
	var_69_bool = var_45_bool; // 0x216 Push
	if(var_69_bool == 0) goto Label_539; // 0x217 JumpB
	var_70_string = "head"; // 0x218 PushS
	LookAsyncCamera(var_70_string); // 0x219 Func
}


func_545()
{
	var_144_bool = 0; var_145_bool = 0; // 0x221 PushV
	CameraSwitchToNormal(); // 0x222 Func
	var_146_bool = 0; // 0x224 PushV
	func_658(var_146_bool); // 0x225 NEW_2
	if(var_146_bool == 0) goto Label_553; // 0x227 JumpB
	goto Label_561; // 0x228 Jump
	
Label_561:
	return 2; // 0x231 Return
	
Label_553:
	var_147_string = "head"; // 0x229 PushS
	HasAnimationTrack(var_145_bool, var_147_string); // 0x22a Func
	var_148_bool = var_145_bool; // 0x22c Push
	if(var_148_bool == 0) goto Label_561; // 0x22d JumpB
	var_149_string = "head"; // 0x22e PushS
	UnlookAsync(var_149_string); // 0x22f Func
}


func_611(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x263 PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x264 Or
	var_56_float = sqrt(var_57_int); // 0x265 Sqrt2
	var_58_float = 0.0; // 0x266 PushF
	var_59_bool = var_56_float < var_58_float; // 0x267 LT
	if(var_59_bool == 0) goto Label_619; // 0x268 JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x269 MovV
	return 2; // 0x26a Return
	
Label_619:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x26b Div2
	return 2; // 0x26c Return
}


func_678(var_76_int)
{
	var_77_int = 0; var_78_int = 0; // 0x2a6 PushV
	var_79_string = "branch"; // 0x2a7 PushS
	GetVariable(var_79_string, var_78_int); // 0x2a8 Func
	var_80_int = 0; // 0x2aa PushI
	var_81_bool = var_78_int == var_80_int; // 0x2ab Eq
	if(var_81_bool == 0) goto Label_688; // 0x2ac JumpB
	var_76_int = 1; // 0x2ad MovI
	return 2; // 0x2ae Return
	
Label_688:
	var_82_int = 1; // 0x2b0 PushI
	var_83_bool = var_78_int == var_82_int; // 0x2b1 Eq
	if(var_83_bool == 0) goto Label_693; // 0x2b2 JumpB
	var_76_int = 2; // 0x2b3 MovI
	return 2; // 0x2b4 Return
	
Label_693:
	var_76_int = 3; // 0x2b5 MovI
	return 2; // 0x2b6 Return
}


func_299(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_12_float, var_13_float)
{
	var_14_bool = 0; // 0x12c PushV
	func_472(var_14_bool); // 0x12d NEW_2
	var_17_bool = var_14_bool == 0; // 0x12f Not
	if(var_17_bool == 0) goto Label_306; // 0x130 JumpB
	return 0; // 0x131 Return
	
Label_306:
	var_18_string = "player"; // 0x132 PushS
	FindActor(var_9_object, var_18_string); // 0x133 Func
	var_2_object = 0; // 0x135 TMovB
	var_3_string = 0; // 0x136 TMovB
	var_0_object = var_12_float; // 0x137 TMov
	var_1_object = var_13_float; // 0x138 TMov
	var_19_int = 10; // 0x139 PushI
	var_20_float = 1.0; // 0x13a PushF
	SetTimer(var_19_int, var_20_float); // 0x13b Func
	func_378(); // 0x13e NEW_2
	var_72_bool = var_3_string == 0; // 0x140 Not
	if(var_72_bool == 0) goto Label_325; // 0x141 JumpB
	var_73_int = 10; // 0x142 PushI
	KillTimer(var_73_int); // 0x143 Func
	
Label_325:
	return 0; // 0x145 Return
}


func_364(var_2_object, var_3_string)
{
	func_459(); // 0x16d NEW_2
	var_11_int = 10; // 0x16f PushI
	KillTimer(var_11_int); // 0x170 Func
	var_12_object = var_2_object; // 0x172 PushT
	if(var_12_object == 0) goto Label_376; // 0x173 JumpB
	var_13_string = "head"; // 0x174 PushS
	UnlookAsync(var_13_string); // 0x175 Func
	var_2_object = 0; // 0x177 TMovB
	
Label_376:
	var_3_string = 1; // 0x178 TMovB
	return 0; // 0x179 Return
}


func_621(var_112_int, var_113_string)
{
	var_114_int = 0; var_115_int = 0; // 0x26d PushV
	GetVariable(var_113_string, var_115_int); // 0x26e Func
	var_112_int = var_115_int; // 0x270 Mov
	return 2; // 0x271 Return
}


func_562(var_126_string)
{
	var_127_bool = 0; var_128_float = 0; var_129_float = 0; var_130_bool = 0; var_131_float = 0; var_132_float = 0; // 0x232 PushV
	lshHasAnimation(var_130_bool, var_126_string); // 0x233 Func
	var_133_bool = var_130_bool; // 0x235 Push
	if(var_133_bool == 0) goto Label_573; // 0x236 JumpB
	lshGetAnimTimes(var_126_string, var_131_float, var_132_float); // 0x237 Func
	var_134_bool = 0; // 0x239 PushB
	lshPlayAnimation(var_131_float, var_132_float, var_134_bool); // 0x23a Func
	goto Label_577; // 0x23c Jump
	
Label_577:
	return 6; // 0x241 Return
	
Label_573:
	var_135_string = "Can't find lsh animation : "; // 0x23d PushS
	var_136_int = var_135_string + var_126_string; // 0x23e Add
	Trace(var_136_int); // 0x23f Func
}


func_626(var_43_string, var_44_int)
{
	var_45_string = ""; var_46_string = ""; // 0x272 PushV
	var_46_string = "idle"; // 0x273 MovS
	var_47_int = var_44_int; // 0x274 Push
	if(var_47_int == 0) goto Label_631; // 0x275 JumpB
	var_46_string = var_46_string + var_44_int; // 0x276 Add2
	
Label_631:
	var_43_string = var_46_string; // 0x277 Mov
	return 2; // 0x278 Return
}


func_633(var_37_int)
{
	var_38_int = 0; var_39_bool = 0; var_40_int = 0; var_41_bool = 0; // 0x279 PushV
	var_40_int = 0; // 0x27a MovI
	
Label_635:
	var_42_string = "all"; // 0x27b PushS
	var_43_string = ""; var_44_int = 0; // 0x27c PushV
	var_44_int = var_40_int; // 0x27d Mov
	func_626(var_43_string, var_44_int); // 0x27e NEW_2
	HasAnimation(var_41_bool, var_42_string, var_43_string); // 0x280 Func
	var_48_bool = var_41_bool == 0; // 0x282 Not
	if(var_48_bool == 0) goto Label_645; // 0x283 JumpB
	goto Label_648; // 0x284 Jump
	
Label_648:
	var_37_int = var_40_int; // 0x288 Mov
	return 4; // 0x289 Return
	
Label_645:
	var_49_int = 1; // 0x285 PushI
	var_40_int = var_40_int + var_49_int; // 0x286 Add2
	goto Label_635; // 0x287 Jump
}


func_378()
{
	var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_float = 0; var_27_bool = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_float = 0; var_34_bool = 0; // 0x17a PushV
	WaitForAnimEnd(); // 0x17b Func
	var_35_bool = 0; // 0x17d PushV
	func_472(var_35_bool); // 0x17e NEW_2
	var_36_bool = var_35_bool == 0; // 0x180 Not
	if(var_36_bool == 0) goto Label_387; // 0x181 JumpB
	return 14; // 0x182 Return
	
Label_387:
	var_37_int = 0; // 0x183 PushV
	func_633(var_37_int); // 0x184 NEW_2
	var_28_int = var_37_int; // 0x185 Mov
	var_29_int = 0; // 0x187 MovI
	
Label_392:
	var_50_bool = 0; // 0x188 PushV
	var_50_bool = 0; // 0x189 MovB
	var_51_int = 5; // 0x18a PushI
	var_52_bool = var_29_int < var_51_int; // 0x18b LT
	if(var_52_bool == 0) goto Label_402; // 0x18c JumpB
	var_53_bool = 0; // 0x18d PushV
	func_472(var_53_bool); // 0x18e NEW_2
	if(var_53_bool == 0) goto Label_402; // 0x190 JumpB
	var_50_bool = 1; // 0x191 MovB
	
Label_402:
	if(var_50_bool == 0) goto Label_454; // 0x192 JumpB
	var_54_int = 3; // 0x193 PushI
	irand(var_30_int, var_54_int); // 0x194 Func
	var_55_int = 0; // 0x196 PushI
	var_56_bool = var_30_int == var_55_int; // 0x197 Eq
	if(var_56_bool == 0) goto Label_426; // 0x198 JumpB
	var_57_int = var_28_int; // 0x199 Push
	if(var_57_int == 0) goto Label_425; // 0x19a JumpB
	irand(var_31_int, var_28_int); // 0x19b Func
	var_58_string = "all"; // 0x19d PushS
	var_59_string = ""; var_60_int = 0; // 0x19e PushV
	var_60_int = var_31_int; // 0x19f Mov
	func_626(var_59_string, var_60_int); // 0x1a0 NEW_2
	PlayAnimation(var_58_string, var_59_string); // 0x1a2 Func
	WaitForAnimEnd(var_32_bool); // 0x1a4 Func
	var_61_bool = var_32_bool == 0; // 0x1a6 Not
	if(var_61_bool == 0) goto Label_425; // 0x1a7 JumpB
	goto Label_454; // 0x1a8 Jump
	
Label_454:
	ResetAAS(); // 0x1c6 Func
	return 14; // 0x1c8 Return
	
Label_425:
	goto Label_443; // 0x1a9 Jump
	
Label_443:
	var_62_bool = 0; // 0x1bb PushV
	func_457(var_62_bool); // 0x1bc NEW_2
	var_63_bool = var_62_bool == 0; // 0x1be Not
	if(var_63_bool == 0) goto Label_449; // 0x1bf JumpB
	goto Label_454; // 0x1c0 Jump
	
Label_449:
	ResetAAS(); // 0x1c1 Func
	var_64_int = 1; // 0x1c3 PushI
	var_29_int = var_29_int + var_64_int; // 0x1c4 Add2
	goto Label_392; // 0x1c5 Jump
	
Label_426:
	var_65_int = 1; // 0x1aa PushI
	var_66_bool = var_30_int == var_65_int; // 0x1ab Eq
	if(var_66_bool == 0) goto Label_440; // 0x1ac JumpB
	var_67_int = 4; // 0x1ad PushI
	rand(var_33_float, var_67_int); // 0x1ae Func
	var_68_int = 1; // 0x1b0 PushI
	var_69_int = var_33_float + var_68_int; // 0x1b1 Add
	Sleep(var_69_int, var_34_bool); // 0x1b2 Func
	var_70_bool = var_34_bool == 0; // 0x1b4 Not
	if(var_70_bool == 0) goto Label_439; // 0x1b5 JumpB
	goto Label_454; // 0x1b6 Jump
	
Label_439:
	goto Label_443; // 0x1b7 Jump
	
Label_440:
	var_71_int = var_29_int; // 0x1b8 Push
	if(var_71_int == 0) goto Label_443; // 0x1b9 JumpB
	goto Label_454; // 0x1ba Jump
}


