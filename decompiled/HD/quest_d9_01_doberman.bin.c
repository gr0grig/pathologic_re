task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0x9b PushI
	if(var_12_int == 0) goto Label_275; // 0x9c JumpB
	func_601(); // 0x9e NEW_2
	var_14_int = 38151; // 0xa0 PushI
	var_15_bool = var_11_object == var_14_int; // 0xa1 Eq
	if(var_15_bool == 0) goto Label_168; // 0xa2 JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xa3 PushV
	var_16_object = var_1_object; // 0xa4 MovT
	var_17_object = var_0_object; // 0xa5 MovT
	func_664(); // 0xa6 NEW_2
	
Label_168:
	var_24_int = 40373; // 0xa8 PushI
	var_25_bool = var_11_object == var_24_int; // 0xa9 Eq
	if(var_25_bool == 0) goto Label_176; // 0xaa JumpB
	var_26_object = Obj(); var_27_object = Obj(); // 0xab PushV
	var_26_object = var_1_object; // 0xac MovT
	var_27_object = var_0_object; // 0xad MovT
	func_664(); // 0xae NEW_2
	
Label_176:
	var_28_int = 38148; // 0xb0 PushI
	var_29_bool = var_10_bool == var_28_int; // 0xb1 Eq
	if(var_29_bool == 0) goto Label_199; // 0xb2 JumpB
	var_30_string = ""; // 0xb3 PushV
	var_30_string = "Neutral"; // 0xb4 MovS
	func_132(var_11_object, var_30_string); // 0xb5 NEW_2
	var_47_int = 536373; // 0xb7 PushI
	SetMessage(var_47_int); // 0xb8 TObjFunc
	ClearReplies(); // 0xba TObjFunc
	var_48_int = 536374; // 0xbc PushI
	var_49_int = 38150; // 0xbd PushI
	var_50_int = 38149; // 0xbe PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0xbf TObjFunc
	var_51_int = 538483; // 0xc1 PushI
	var_52_int = -1; // 0xc2 PushI
	var_53_int = 40367; // 0xc3 PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0xc4 TObjFunc
	return 0; // 0xc6 Return
	
Label_199:
	var_54_int = 38150; // 0xc7 PushI
	var_55_bool = var_10_bool == var_54_int; // 0xc8 Eq
	if(var_55_bool == 0) goto Label_222; // 0xc9 JumpB
	var_56_string = ""; // 0xca PushV
	var_56_string = "Neutral"; // 0xcb MovS
	func_132(var_11_object, var_56_string); // 0xcc NEW_2
	var_57_int = 536375; // 0xce PushI
	SetMessage(var_57_int); // 0xcf TObjFunc
	ClearReplies(); // 0xd1 TObjFunc
	var_58_int = 538484; // 0xd3 PushI
	var_59_int = 40369; // 0xd4 PushI
	var_60_int = 40368; // 0xd5 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0xd6 TObjFunc
	var_61_int = 538489; // 0xd8 PushI
	var_62_int = -1; // 0xd9 PushI
	var_63_int = 40373; // 0xda PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0xdb TObjFunc
	return 0; // 0xdd Return
	
Label_222:
	var_64_int = 40369; // 0xde PushI
	var_65_bool = var_10_bool == var_64_int; // 0xdf Eq
	if(var_65_bool == 0) goto Label_245; // 0xe0 JumpB
	var_66_string = ""; // 0xe1 PushV
	var_66_string = "Neutral"; // 0xe2 MovS
	func_132(var_11_object, var_66_string); // 0xe3 NEW_2
	var_67_int = 538485; // 0xe5 PushI
	SetMessage(var_67_int); // 0xe6 TObjFunc
	ClearReplies(); // 0xe8 TObjFunc
	var_68_int = 538486; // 0xea PushI
	var_69_int = 40371; // 0xeb PushI
	var_70_int = 40370; // 0xec PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0xed TObjFunc
	var_71_int = 538488; // 0xef PushI
	var_72_int = 40371; // 0xf0 PushI
	var_73_int = 40372; // 0xf1 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0xf2 TObjFunc
	return 0; // 0xf4 Return
	
Label_245:
	var_74_int = 40371; // 0xf5 PushI
	var_75_bool = var_10_bool == var_74_int; // 0xf6 Eq
	if(var_75_bool == 0) goto Label_263; // 0xf7 JumpB
	var_76_string = ""; // 0xf8 PushV
	var_76_string = "Neutral"; // 0xf9 MovS
	func_132(var_11_object, var_76_string); // 0xfa NEW_2
	var_77_int = 538487; // 0xfc PushI
	SetMessage(var_77_int); // 0xfd TObjFunc
	ClearReplies(); // 0xff TObjFunc
	var_78_int = 536376; // 0x101 PushI
	var_79_int = -1; // 0x102 PushI
	var_80_int = 38151; // 0x103 PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0x104 TObjFunc
	return 0; // 0x106 Return
	
Label_263:
	var_3_string = 1; // 0x107 TMovB
	var_81_bool = 0; // 0x108 PushV
	func_662(var_81_bool); // 0x109 NEW_2
	if(var_81_bool == 0) goto Label_271; // 0x10b JumpB
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
	func_359(var_9_object, var_10_object); // 0x11d NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0x11f PushV
	var_15_object = var_10_object; // 0x120 Mov
	TaskCall(0); // 0x121 TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x122 NEW_2
	TaskReturn(); // 0x123 TaskReturn
	return 0; // 0x125 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x151 PushI
	var_12_bool = var_10_int == var_11_int; // 0x152 Eq
	if(var_12_bool == 0) goto Label_358; // 0x153 JumpB
	var_13_bool = 0; // 0x154 PushV
	func_321(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x155 NEW_2
	if(var_13_bool == 0) goto Label_352; // 0x157 JumpB
	var_26_bool = var_2_object == 0; // 0x158 Not
	if(var_26_bool == 0) goto Label_351; // 0x159 JumpB
	var_27_object = Obj(); // 0x15a PushV
	var_27_object = var_4_bool; // 0x15b MovT
	func_590(var_27_object); // 0x15c NEW_2
	var_2_object = 1; // 0x15e TMovB
	
Label_351:
	goto Label_358; // 0x15f Jump
	
Label_358:
	return 0; // 0x166 Return
	
Label_352:
	var_34_object = var_2_object; // 0x160 PushT
	if(var_34_object == 0) goto Label_358; // 0x161 JumpB
	var_35_string = "head"; // 0x162 PushS
	UnlookAsync(var_35_string); // 0x163 Func
	var_2_object = 0; // 0x165 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_276:
	var_10_float = 0; var_11_float = 0; // 0x114 PushV
	var_10_float = 300; // 0x115 MovI
	var_11_float = 100; // 0x116 MovI
	func_294(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_float, var_11_float); // 0x117 NEW_2
	goto Label_276; // 0x119 Jump
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 70.0; // 0x4 MovF
	func_472(var_26_object, var_27_float); // 0x5 NEW_2
	var_72_bool = var_25_bool == 0; // 0x7 Not
	if(var_72_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_73_int = 0; // 0xd PushV
	func_656(var_73_int); // 0xe NEW_2
	SetNPCName(var_73_int); // 0x10 ObjFunc
	var_74_int = 0; // 0x12 PushV
	func_654(var_74_int); // 0x13 NEW_2
	SetNPCDescription(var_74_int); // 0x15 ObjFunc
	var_75_string = ""; // 0x17 PushV
	func_658(var_75_string); // 0x18 NEW_2
	SetPhoto(var_75_string); // 0x1a ObjFunc
	var_76_string = ""; // 0x1c PushV
	func_660(var_76_string); // 0x1d NEW_2
	SetPhoto2(var_76_string); // 0x1f ObjFunc
	var_77_int = 0; // 0x21 PushV
	func_671(var_77_int); // 0x22 NEW_2
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
	var_135_bool = var_24_bool == 0; // 0x38 Not
	if(var_135_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_136_object = Obj(); // 0x3f PushV
	var_136_object = var_15_object; // 0x40 Mov
	func_541(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_321(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x141 PushV
	var_16_bool = var_4_bool == 0; // 0x142 NullEq
	if(var_16_bool == 0) goto Label_326; // 0x143 JumpB
	var_13_bool = 0; // 0x144 MovB
	return 2; // 0x145 Return
	
Label_326:
	var_17_float = 0; var_18_object = Obj(); // 0x146 PushV
	var_18_object = var_4_bool; // 0x147 MovT
	func_459(var_18_object); // 0x148 NEW_2
	var_15_float = sqrt(var_17_float); // 0x14a Sqrt2
	var_25_object = var_2_object; // 0x14b PushT
	if(var_25_object == 0) goto Label_334; // 0x14c JumpB
	var_15_float = var_15_float - var_1_object; // 0x14d Sub2
	
Label_334:
	var_13_bool = var_15_float < var_0_object; // 0x14e LT2
	return 2; // 0x14f Return
}


func_132(var_2_object, var_93_string)
{
	var_94_bool = 0; // 0x85 PushV
	func_662(var_94_bool); // 0x86 NEW_2
	var_95_bool = var_94_bool == 0; // 0x88 Not
	if(var_95_bool == 0) goto Label_139; // 0x89 JumpB
	return 0; // 0x8a Return
	
Label_139:
	var_96_bool = var_93_string == var_2_object; // 0x8b Eq
	if(var_96_bool == 0) goto Label_142; // 0x8c JumpB
	return 0; // 0x8d Return
	
Label_142:
	var_97_string = ""; var_98_bool = 0; // 0x8e PushV
	var_97_string = var_93_string; // 0x8f Mov
	var_99_string = ""; // 0x90 PushS
	var_100_bool = var_93_string == var_99_string; // 0x91 Eq
	if(var_100_bool == 0) goto Label_149; // 0x92 JumpB
	var_98_bool = 0; // 0x93 MovB
	goto Label_150; // 0x94 Jump
	
Label_150:
	func_575(var_97_string, var_98_bool); // 0x96 NEW_2
	var_2_object = var_93_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_98_bool = 1; // 0x95 MovB
}


func_452(var_60_bool)
{
	var_60_bool = 1; // 0x1c4 MovB
	return 0; // 0x1c5 Return
}


func_454()
{
	StopAnimation(); // 0x1c6 Func
	StopGroup0(); // 0x1c8 Func
	return 0; // 0x1ca Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object; // 0x4b TMov
	var_1_object = var_86_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_92_int = 1; // 0x4e PushI
	if(var_92_int == 0) goto Label_102; // 0x4f JumpB
	var_93_string = ""; // 0x50 PushV
	var_93_string = "Neutral"; // 0x51 MovS
	func_132(var_87_object, var_93_string); // 0x52 NEW_2
	var_110_int = 536373; // 0x54 PushI
	SetMessage(var_110_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_111_int = 536374; // 0x59 PushI
	var_112_int = 38150; // 0x5a PushI
	var_113_int = 38149; // 0x5b PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x5c TObjFunc
	var_114_int = 538483; // 0x5e PushI
	var_115_int = -1; // 0x5f PushI
	var_116_int = 40367; // 0x60 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_117_bool = 0; // 0x66 PushV
	func_662(var_117_bool); // 0x67 NEW_2
	if(var_117_bool == 0) goto Label_117; // 0x69 JumpB
	
Label_106:
	lshWaitForAnimEnd(); // 0x6a Func
	var_118_string = var_3_string; // 0x6c PushT
	if(var_118_string == 0) goto Label_111; // 0x6d JumpB
	goto Label_116; // 0x6e Jump
	
Label_116:
	goto Label_131; // 0x74 Jump
	
Label_131:
	return 0; // 0x83 Return
	
Label_111:
	var_119_string = ""; // 0x6f PushV
	var_119_string = var_2_object; // 0x70 MovT
	func_559(var_119_string); // 0x71 NEW_2
	goto Label_106; // 0x73 Jump
	
Label_117:
	var_130_string = "all"; // 0x75 PushS
	var_131_string = "idle"; // 0x76 PushS
	PlayAnimation(var_130_string, var_131_string); // 0x77 Func
	
Label_121:
	WaitForAnimEnd(); // 0x79 Func
	var_132_string = var_3_string; // 0x7b PushT
	if(var_132_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_126:
	var_133_string = "all"; // 0x7e PushS
	var_134_string = "idle"; // 0x7f PushS
	PlayAnimation(var_133_string, var_134_string); // 0x80 Func
	goto Label_121; // 0x82 Jump
}


func_459(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x1cb PushV
	GetPosition(var_22_cvector); // 0x1cc Func
	GetPosition(var_23_cvector); // 0x1ce ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x1d0 Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x1d1 Or2
	return 6; // 0x1d2 Return
}


func_654(var_74_int)
{
	var_74_int = 518097; // 0x28e MovI
	return 0; // 0x28f Return
}


func_590(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x24e PushV
	GetEyesHeight(var_30_float); // 0x24f ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x251 MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x252 PushE
	var_32_float = var_30_float; // 0x253 Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x254 PopE
	var_33_string = "head"; // 0x255 PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x256 Func
	return 4; // 0x258 Return
}


func_656(var_73_int)
{
	var_73_int = 518096; // 0x290 MovI
	return 0; // 0x291 Return
}


func_658(var_75_string)
{
	var_75_string = "ui/NPC_Citizen2.png"; // 0x292 MovS
	return 0; // 0x293 Return
}


func_467(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0; // 0x1d3 PushV
	IsLoaded(var_14_bool); // 0x1d4 Func
	var_12_bool = var_14_bool; // 0x1d6 Mov
	return 2; // 0x1d7 Return
}


func_660(var_76_string)
{
	var_76_string = "ui/NPC_Citizen2_b.png"; // 0x294 MovS
	return 0; // 0x295 Return
}


func_662(var_68_bool)
{
	var_68_bool = 0; // 0x296 MovB
	return 0; // 0x297 Return
}


func_664()
{
	var_18_bool = 0; var_19_string = ""; var_20_string = ""; // 0x299 PushV
	var_19_string = "quest_d9_01"; // 0x29a MovS
	var_20_string = "teleport_to_han"; // 0x29b MovS
	func_618(var_18_bool, var_19_string, var_20_string); // 0x29c NEW_2
	return 0; // 0x29e Return
}


func_472(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x1d8 PushV
	GetPosition(var_38_cvector); // 0x1d9 ObjFunc
	GetEyesHeight(var_37_float); // 0x1db ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x1dd PushE
	var_46_float = var_46_float + var_37_float; // 0x1de Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x1df PopE
	GetPosition(var_39_cvector); // 0x1e0 Func
	GetEyesHeight(var_37_float); // 0x1e2 Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x1e4 PushE
	var_47_float = var_47_float + var_37_float; // 0x1e5 Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x1e6 PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x1e7 Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x1e8 PushE
	var_48_float = 0; // 0x1e9 MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x1ea PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x1eb Or
	var_50_float = sqrt(var_49_int); // 0x1ec Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x1ed Div2
	var_41_cvector = -var_40_cvector; // 0x1ee Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x1ef Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x1f0 PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x1f1 PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x1f2 Xor2
	func_608(var_52_cvector, var_53_cvector); // 0x1f3 NEW_2
	var_60_int = 25; // 0x1f5 PushI
	var_61_float = var_52_cvector * var_60_int; // 0x1f6 Mult
	var_62_int = var_51_float + var_61_float; // 0x1f7 Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x1f8 PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x1f9 Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x1fa Add2
	IsOverrideActive(var_44_bool); // 0x1fb Func
	var_64_bool = var_44_bool; // 0x1fd Push
	if(var_64_bool == 0) goto Label_513; // 0x1fe JumpB
	var_25_bool = 0; // 0x1ff MovB
	return 18; // 0x200 Return
	
Label_513:
	StopWorld(); // 0x201 Func
	var_65_bool = 1; // 0x203 PushB
	CameraTransit(var_43_cvector, var_41_cvector, var_65_bool); // 0x204 Func
	var_66_float = GetByIndex(var_42_cvector, 0); // 0x206 PushE
	var_67_float = GetByIndex(var_42_cvector, 2); // 0x207 PushE
	Rotate(var_66_float, var_67_float); // 0x208 Func
	var_68_bool = 0; // 0x20a PushV
	func_662(var_68_bool); // 0x20b NEW_2
	if(var_68_bool == 0) goto Label_527; // 0x20d JumpB
	goto Label_535; // 0x20e Jump
	
Label_535:
	CameraWaitForPlayFinish(); // 0x217 Func
	ResumeWorld(); // 0x219 Func
	var_25_bool = 1; // 0x21b MovB
	return 18; // 0x21c Return
	
Label_527:
	var_69_string = "head"; // 0x20f PushS
	HasAnimationTrack(var_45_bool, var_69_string); // 0x210 Func
	var_70_bool = var_45_bool; // 0x212 Push
	if(var_70_bool == 0) goto Label_535; // 0x213 JumpB
	var_71_string = "head"; // 0x214 PushS
	LookAsyncCamera(var_71_string); // 0x215 Func
}


func_601()
{
	var_13_bool = 0; // 0x259 PushV
	func_662(var_13_bool); // 0x25a NEW_2
	if(var_13_bool == 0) goto Label_607; // 0x25c JumpB
	lshStopSpeech(); // 0x25d Func
	
Label_607:
	return 0; // 0x25f Return
}


func_541()
{
	var_137_bool = 0; var_138_bool = 0; // 0x21d PushV
	var_139_bool = 1; // 0x21e PushB
	CameraSwitchToNormal(var_139_bool); // 0x21f Func
	var_140_bool = 0; // 0x221 PushV
	func_662(var_140_bool); // 0x222 NEW_2
	if(var_140_bool == 0) goto Label_550; // 0x224 JumpB
	goto Label_558; // 0x225 Jump
	
Label_558:
	return 2; // 0x22e Return
	
Label_550:
	var_141_string = "head"; // 0x226 PushS
	HasAnimationTrack(var_138_bool, var_141_string); // 0x227 Func
	var_142_bool = var_138_bool; // 0x229 Push
	if(var_142_bool == 0) goto Label_558; // 0x22a JumpB
	var_143_string = "head"; // 0x22b PushS
	UnlookAsync(var_143_string); // 0x22c Func
}


func_671(var_77_int)
{
	var_78_int = 0; var_79_int = 0; // 0x29f PushV
	var_80_string = "branch"; // 0x2a0 PushS
	GetVariable(var_80_string, var_79_int); // 0x2a1 Func
	var_81_int = 0; // 0x2a3 PushI
	var_82_bool = var_79_int == var_81_int; // 0x2a4 Eq
	if(var_82_bool == 0) goto Label_681; // 0x2a5 JumpB
	var_77_int = 1; // 0x2a6 MovI
	return 2; // 0x2a7 Return
	
Label_681:
	var_83_int = 1; // 0x2a9 PushI
	var_84_bool = var_79_int == var_83_int; // 0x2aa Eq
	if(var_84_bool == 0) goto Label_686; // 0x2ab JumpB
	var_77_int = 2; // 0x2ac MovI
	return 2; // 0x2ad Return
	
Label_686:
	var_77_int = 3; // 0x2ae MovI
	return 2; // 0x2af Return
}


func_608(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x260 PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x261 Or
	var_56_float = sqrt(var_57_int); // 0x262 Sqrt2
	var_58_float = 0.0; // 0x263 PushF
	var_59_bool = var_56_float < var_58_float; // 0x264 LT
	if(var_59_bool == 0) goto Label_616; // 0x265 JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x266 MovV
	return 2; // 0x267 Return
	
Label_616:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x268 Div2
	return 2; // 0x269 Return
}


func_294(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_10_float, var_11_float)
{
	var_12_bool = 0; // 0x127 PushV
	func_467(var_12_bool); // 0x128 NEW_2
	var_15_bool = var_12_bool == 0; // 0x12a Not
	if(var_15_bool == 0) goto Label_301; // 0x12b JumpB
	return 0; // 0x12c Return
	
Label_301:
	var_16_string = "player"; // 0x12d PushS
	FindActor(var_9_object, var_16_string); // 0x12e Func
	var_2_object = 0; // 0x130 TMovB
	var_3_string = 0; // 0x131 TMovB
	var_0_object = var_10_float; // 0x132 TMov
	var_1_object = var_11_float; // 0x133 TMov
	var_17_int = 10; // 0x134 PushI
	var_18_float = 1.0; // 0x135 PushF
	SetTimer(var_17_int, var_18_float); // 0x136 Func
	func_373(); // 0x139 NEW_2
	var_70_bool = var_3_string == 0; // 0x13b Not
	if(var_70_bool == 0) goto Label_320; // 0x13c JumpB
	var_71_int = 10; // 0x13d PushI
	KillTimer(var_71_int); // 0x13e Func
	
Label_320:
	return 0; // 0x140 Return
}


func_359(var_2_object, var_3_string)
{
	func_454(); // 0x168 NEW_2
	var_11_int = 10; // 0x16a PushI
	KillTimer(var_11_int); // 0x16b Func
	var_12_object = var_2_object; // 0x16d PushT
	if(var_12_object == 0) goto Label_371; // 0x16e JumpB
	var_13_string = "head"; // 0x16f PushS
	UnlookAsync(var_13_string); // 0x170 Func
	var_2_object = 0; // 0x172 TMovB
	
Label_371:
	var_3_string = 1; // 0x173 TMovB
	return 0; // 0x174 Return
}


func_618(var_18_bool, var_19_string, var_20_string)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x26a PushV
	FindActor(var_22_object, var_19_string); // 0x26b Func
	var_23_bool = var_22_object == 0; // 0x26d NullEq
	if(var_23_bool == 0) goto Label_625; // 0x26e JumpB
	var_18_bool = 0; // 0x26f MovB
	return 2; // 0x270 Return
	
Label_625:
	Trigger(var_22_object, var_20_string); // 0x271 Func
	var_18_bool = 1; // 0x273 MovB
	return 2; // 0x274 Return
}


func_559(var_119_string)
{
	var_120_bool = 0; var_121_float = 0; var_122_float = 0; var_123_bool = 0; var_124_float = 0; var_125_float = 0; // 0x22f PushV
	lshHasAnimation(var_123_bool, var_119_string); // 0x230 Func
	var_126_bool = var_123_bool; // 0x232 Push
	if(var_126_bool == 0) goto Label_570; // 0x233 JumpB
	lshGetAnimTimes(var_119_string, var_124_float, var_125_float); // 0x234 Func
	var_127_bool = 0; // 0x236 PushB
	lshPlayAnimation(var_124_float, var_125_float, var_127_bool); // 0x237 Func
	goto Label_574; // 0x239 Jump
	
Label_574:
	return 6; // 0x23e Return
	
Label_570:
	var_128_string = "Can't find lsh animation : "; // 0x23a PushS
	var_129_int = var_128_string + var_119_string; // 0x23b Add
	Trace(var_129_int); // 0x23c Func
}


func_373()
{
	var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_bool = 0; var_24_float = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_float = 0; var_32_bool = 0; // 0x175 PushV
	WaitForAnimEnd(); // 0x176 Func
	var_33_bool = 0; // 0x178 PushV
	func_467(var_33_bool); // 0x179 NEW_2
	var_34_bool = var_33_bool == 0; // 0x17b Not
	if(var_34_bool == 0) goto Label_382; // 0x17c JumpB
	return 14; // 0x17d Return
	
Label_382:
	var_35_int = 0; // 0x17e PushV
	func_637(var_35_int); // 0x17f NEW_2
	var_26_int = var_35_int; // 0x180 Mov
	var_27_int = 0; // 0x182 MovI
	
Label_387:
	var_48_bool = 0; // 0x183 PushV
	var_48_bool = 0; // 0x184 MovB
	var_49_int = 5; // 0x185 PushI
	var_50_bool = var_27_int < var_49_int; // 0x186 LT
	if(var_50_bool == 0) goto Label_397; // 0x187 JumpB
	var_51_bool = 0; // 0x188 PushV
	func_467(var_51_bool); // 0x189 NEW_2
	if(var_51_bool == 0) goto Label_397; // 0x18b JumpB
	var_48_bool = 1; // 0x18c MovB
	
Label_397:
	if(var_48_bool == 0) goto Label_449; // 0x18d JumpB
	var_52_int = 3; // 0x18e PushI
	irand(var_28_int, var_52_int); // 0x18f Func
	var_53_int = 0; // 0x191 PushI
	var_54_bool = var_28_int == var_53_int; // 0x192 Eq
	if(var_54_bool == 0) goto Label_421; // 0x193 JumpB
	var_55_int = var_26_int; // 0x194 Push
	if(var_55_int == 0) goto Label_420; // 0x195 JumpB
	irand(var_29_int, var_26_int); // 0x196 Func
	var_56_string = "all"; // 0x198 PushS
	var_57_string = ""; var_58_int = 0; // 0x199 PushV
	var_58_int = var_29_int; // 0x19a Mov
	func_630(var_57_string, var_58_int); // 0x19b NEW_2
	PlayAnimation(var_56_string, var_57_string); // 0x19d Func
	WaitForAnimEnd(var_30_bool); // 0x19f Func
	var_59_bool = var_30_bool == 0; // 0x1a1 Not
	if(var_59_bool == 0) goto Label_420; // 0x1a2 JumpB
	goto Label_449; // 0x1a3 Jump
	
Label_449:
	ResetAAS(); // 0x1c1 Func
	return 14; // 0x1c3 Return
	
Label_420:
	goto Label_438; // 0x1a4 Jump
	
Label_438:
	var_60_bool = 0; // 0x1b6 PushV
	func_452(var_60_bool); // 0x1b7 NEW_2
	var_61_bool = var_60_bool == 0; // 0x1b9 Not
	if(var_61_bool == 0) goto Label_444; // 0x1ba JumpB
	goto Label_449; // 0x1bb Jump
	
Label_444:
	ResetAAS(); // 0x1bc Func
	var_62_int = 1; // 0x1be PushI
	var_27_int = var_27_int + var_62_int; // 0x1bf Add2
	goto Label_387; // 0x1c0 Jump
	
Label_421:
	var_63_int = 1; // 0x1a5 PushI
	var_64_bool = var_28_int == var_63_int; // 0x1a6 Eq
	if(var_64_bool == 0) goto Label_435; // 0x1a7 JumpB
	var_65_int = 4; // 0x1a8 PushI
	rand(var_31_float, var_65_int); // 0x1a9 Func
	var_66_int = 1; // 0x1ab PushI
	var_67_int = var_31_float + var_66_int; // 0x1ac Add
	Sleep(var_67_int, var_32_bool); // 0x1ad Func
	var_68_bool = var_32_bool == 0; // 0x1af Not
	if(var_68_bool == 0) goto Label_434; // 0x1b0 JumpB
	goto Label_449; // 0x1b1 Jump
	
Label_434:
	goto Label_438; // 0x1b2 Jump
	
Label_435:
	var_69_int = var_27_int; // 0x1b3 Push
	if(var_69_int == 0) goto Label_438; // 0x1b4 JumpB
	goto Label_449; // 0x1b5 Jump
}


func_630(var_41_string, var_42_int)
{
	var_43_string = ""; var_44_string = ""; // 0x276 PushV
	var_44_string = "idle"; // 0x277 MovS
	var_45_int = var_42_int; // 0x278 Push
	if(var_45_int == 0) goto Label_635; // 0x279 JumpB
	var_44_string = var_44_string + var_42_int; // 0x27a Add2
	
Label_635:
	var_41_string = var_44_string; // 0x27b Mov
	return 2; // 0x27c Return
}


func_637(var_35_int)
{
	var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_bool = 0; // 0x27d PushV
	var_38_int = 0; // 0x27e MovI
	
Label_639:
	var_40_string = "all"; // 0x27f PushS
	var_41_string = ""; var_42_int = 0; // 0x280 PushV
	var_42_int = var_38_int; // 0x281 Mov
	func_630(var_41_string, var_42_int); // 0x282 NEW_2
	HasAnimation(var_39_bool, var_40_string, var_41_string); // 0x284 Func
	var_46_bool = var_39_bool == 0; // 0x286 Not
	if(var_46_bool == 0) goto Label_649; // 0x287 JumpB
	goto Label_652; // 0x288 Jump
	
Label_652:
	var_35_int = var_38_int; // 0x28c Mov
	return 4; // 0x28d Return
	
Label_649:
	var_47_int = 1; // 0x289 PushI
	var_38_int = var_38_int + var_47_int; // 0x28a Add2
	goto Label_639; // 0x28b Jump
}


func_575(var_97_string, var_98_bool)
{
	var_101_bool = 0; var_102_float = 0; var_103_float = 0; var_104_bool = 0; var_105_float = 0; var_106_float = 0; // 0x23f PushV
	lshHasAnimation(var_104_bool, var_97_string); // 0x240 Func
	var_107_bool = var_104_bool; // 0x242 Push
	if(var_107_bool == 0) goto Label_585; // 0x243 JumpB
	lshGetAnimTimes(var_97_string, var_105_float, var_106_float); // 0x244 Func
	lshPlayAnimation(var_105_float, var_106_float, var_98_bool); // 0x246 Func
	goto Label_589; // 0x248 Jump
	
Label_589:
	return 6; // 0x24d Return
	
Label_585:
	var_108_string = "Can't find lsh animation : "; // 0x249 PushS
	var_109_int = var_108_string + var_97_string; // 0x24a Add
	Trace(var_109_int); // 0x24b Func
}


