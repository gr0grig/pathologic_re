task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0x9b PushI
	if(var_8_int == 0) goto Label_195; // 0x9c JumpB
	func_488(); // 0x9e NEW_2
	var_10_int = 22215; // 0xa0 PushI
	var_11_bool = var_6_int == var_10_int; // 0xa1 Eq
	if(var_11_bool == 0) goto Label_183; // 0xa2 JumpB
	var_12_string = ""; // 0xa3 PushV
	var_12_string = "Neutral"; // 0xa4 MovS
	func_132(var_7_bool, var_12_string); // 0xa5 NEW_2
	var_29_int = 521002; // 0xa7 PushI
	SetMessage(var_29_int); // 0xa8 TObjFunc
	ClearReplies(); // 0xaa TObjFunc
	var_30_int = 521003; // 0xac PushI
	var_31_int = -1; // 0xad PushI
	var_32_int = 22216; // 0xae PushI
	AddReply(var_30_int, var_31_int, var_32_int); // 0xaf TObjFunc
	var_33_int = 528489; // 0xb1 PushI
	var_34_int = -1; // 0xb2 PushI
	var_35_int = 29878; // 0xb3 PushI
	AddReply(var_33_int, var_34_int, var_35_int); // 0xb4 TObjFunc
	return 0; // 0xb6 Return
	
Label_183:
	var_3_string = 1; // 0xb7 TMovB
	var_36_bool = 0; // 0xb8 PushV
	func_560(var_36_bool); // 0xb9 NEW_2
	if(var_36_bool == 0) goto Label_191; // 0xbb JumpB
	lshStopAnimation(); // 0xbc Func
	goto Label_193; // 0xbe Jump
	
Label_193:
	return 0; // 0xc1 Return
	
Label_191:
	StopAnimation(); // 0xbf Func
	
Label_195:
	return 0; // 0xc3 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	func_360(); // 0xc6 NEW_2
	var_7_int = 0; var_8_object = Obj(); // 0xc8 PushV
	var_8_object = var_6_object; // 0xc9 Mov
	TaskCall(0); // 0xca TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0xcb NEW_2
	TaskReturn(); // 0xcc TaskReturn
	return 0; // 0xce Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_string = "cleanup"; // 0xf9 PushS
	var_8_bool = var_6_string == var_7_string; // 0xfa Eq
	if(var_8_bool == 0) goto Label_255; // 0xfb JumpB
	func_228(var_6_string); // 0xfd NEW_2
	
Label_255:
	return 0; // 0xff Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	StopGroup0(); // 0x100 Func
	sync(); // 0x102 Func
	return 0; // 0x104 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x105 PushV
	var_6_bool = 0; // 0x106 MovB
	var_7_object = var_0_object; // 0x107 PushT
	if(var_7_object == 0) goto Label_270; // 0x108 JumpB
	var_8_bool = 0; // 0x109 PushV
	func_277(var_8_bool); // 0x10a NEW_2
	if(var_8_bool == 0) goto Label_270; // 0x10c JumpB
	var_6_bool = 1; // 0x10d MovB
	
Label_270:
	if(var_6_bool == 0) goto Label_276; // 0x10e JumpB
	var_9_object = Obj(); // 0x10f PushV
	func_495(var_9_object); // 0x110 NEW_2
	RemoveActor(var_9_object); // 0x112 Func
	
Label_276:
	return 0; // 0x114 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_float = 0; var_7_float = 0; // 0xcf PushV
	
Label_208:
	var_8_bool = 0; // 0xd0 PushV
	func_365(var_8_bool); // 0xd1 NEW_2
	var_11_bool = var_8_bool == 0; // 0xd3 Not
	if(var_11_bool == 0) goto Label_216; // 0xd4 JumpB
	Hold(); // 0xd5 Func
	goto Label_208; // 0xd7 Jump
	
Label_216:
	var_12_int = 3; // 0xd8 PushI
	rand(var_7_float, var_12_int); // 0xd9 Func
	var_13_int = 3; // 0xdb PushI
	var_14_int = var_7_float + var_13_int; // 0xdc Add
	Sleep(var_14_int); // 0xdd Func
	func_279(); // 0xe0 NEW_2
	goto Label_208; // 0xe2 Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_370(var_19_object, var_20_float); // 0x5 NEW_2
	var_65_bool = var_18_bool == 0; // 0x7 Not
	if(var_65_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_66_int = 0; // 0xd PushV
	func_554(var_66_int); // 0xe NEW_2
	SetNPCName(var_66_int); // 0x10 ObjFunc
	var_67_int = 0; // 0x12 PushV
	func_552(var_67_int); // 0x13 NEW_2
	SetNPCDescription(var_67_int); // 0x15 ObjFunc
	var_68_string = ""; // 0x17 PushV
	func_556(var_68_string); // 0x18 NEW_2
	SetPhoto(var_68_string); // 0x1a ObjFunc
	var_69_string = ""; // 0x1c PushV
	func_558(var_69_string); // 0x1d NEW_2
	SetPhoto2(var_69_string); // 0x1f ObjFunc
	var_70_int = 0; // 0x21 PushV
	func_535(var_70_int); // 0x22 NEW_2
	SetPlayerName(var_70_int); // 0x24 ObjFunc
	var_16_int = -1; // 0x26 MovI
	IsOverrideActive(var_15_bool); // 0x27 Func
	var_78_bool = var_15_bool; // 0x29 Push
	if(var_78_bool == 0) goto Label_45; // 0x2a JumpB
	var_7_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_14_object); // 0x2d Func
	var_79_object = Obj(); var_80_object = Obj(); // 0x2f PushV
	var_79_object = var_8_object; // 0x30 Mov
	var_80_object = var_14_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_81_object, var_82_object, var_83_string, var_84_bool, var_79_object, var_80_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_17_bool); // 0x36 ObjFunc
	
Label_56:
	var_128_bool = var_17_bool == 0; // 0x38 Not
	if(var_128_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_17_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_129_object = Obj(); // 0x3f PushV
	var_129_object = var_8_object; // 0x40 Mov
	func_439(); // 0x41 NEW_2
	StopDialog(var_14_object); // 0x43 Func
	GetReturnValue(var_16_int); // 0x45 ObjFunc
	var_7_int = var_16_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_132(var_2_object, var_86_string)
{
	var_87_bool = 0; // 0x85 PushV
	func_560(var_87_bool); // 0x86 NEW_2
	var_88_bool = var_87_bool == 0; // 0x88 Not
	if(var_88_bool == 0) goto Label_139; // 0x89 JumpB
	return 0; // 0x8a Return
	
Label_139:
	var_89_bool = var_86_string == var_2_object; // 0x8b Eq
	if(var_89_bool == 0) goto Label_142; // 0x8c JumpB
	return 0; // 0x8d Return
	
Label_142:
	var_90_string = ""; var_91_bool = 0; // 0x8e PushV
	var_90_string = var_86_string; // 0x8f Mov
	var_92_string = ""; // 0x90 PushS
	var_93_bool = var_86_string == var_92_string; // 0x91 Eq
	if(var_93_bool == 0) goto Label_149; // 0x92 JumpB
	var_91_bool = 0; // 0x93 MovB
	goto Label_150; // 0x94 Jump
	
Label_150:
	func_473(var_90_string, var_91_bool); // 0x96 NEW_2
	var_2_object = var_86_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_91_bool = 1; // 0x95 MovB
}


func_518(var_31_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0; // 0x206 PushV
	var_34_int = 0; // 0x207 MovI
	
Label_520:
	var_36_string = "all"; // 0x208 PushS
	var_37_string = ""; var_38_int = 0; // 0x209 PushV
	var_38_int = var_34_int; // 0x20a Mov
	func_511(var_37_string, var_38_int); // 0x20b NEW_2
	HasAnimation(var_35_bool, var_36_string, var_37_string); // 0x20d Func
	var_42_bool = var_35_bool == 0; // 0x20f Not
	if(var_42_bool == 0) goto Label_530; // 0x210 JumpB
	goto Label_533; // 0x211 Jump
	
Label_533:
	var_31_int = var_34_int; // 0x215 Mov
	return 4; // 0x216 Return
	
Label_530:
	var_43_int = 1; // 0x212 PushI
	var_34_int = var_34_int + var_43_int; // 0x213 Add2
	goto Label_520; // 0x214 Jump
}


func_277(var_8_bool)
{
	var_8_bool = 1; // 0x115 MovB
	return 0; // 0x116 Return
}


func_535(var_70_int)
{
	var_71_int = 0; var_72_int = 0; // 0x217 PushV
	var_73_string = "branch"; // 0x218 PushS
	GetVariable(var_73_string, var_72_int); // 0x219 Func
	var_74_int = 0; // 0x21b PushI
	var_75_bool = var_72_int == var_74_int; // 0x21c Eq
	if(var_75_bool == 0) goto Label_545; // 0x21d JumpB
	var_70_int = 1; // 0x21e MovI
	return 2; // 0x21f Return
	
Label_545:
	var_76_int = 1; // 0x221 PushI
	var_77_bool = var_72_int == var_76_int; // 0x222 Eq
	if(var_77_bool == 0) goto Label_550; // 0x223 JumpB
	var_70_int = 2; // 0x224 MovI
	return 2; // 0x225 Return
	
Label_550:
	var_70_int = 3; // 0x226 MovI
	return 2; // 0x227 Return
}


func_279()
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0; // 0x117 PushV
	WaitForAnimEnd(); // 0x118 Func
	var_29_bool = 0; // 0x11a PushV
	func_365(var_29_bool); // 0x11b NEW_2
	var_30_bool = var_29_bool == 0; // 0x11d Not
	if(var_30_bool == 0) goto Label_288; // 0x11e JumpB
	return 14; // 0x11f Return
	
Label_288:
	var_31_int = 0; // 0x120 PushV
	func_518(var_31_int); // 0x121 NEW_2
	var_22_int = var_31_int; // 0x122 Mov
	var_23_int = 0; // 0x124 MovI
	
Label_293:
	var_44_bool = 0; // 0x125 PushV
	var_44_bool = 0; // 0x126 MovB
	var_45_int = 5; // 0x127 PushI
	var_46_bool = var_23_int < var_45_int; // 0x128 LT
	if(var_46_bool == 0) goto Label_303; // 0x129 JumpB
	var_47_bool = 0; // 0x12a PushV
	func_365(var_47_bool); // 0x12b NEW_2
	if(var_47_bool == 0) goto Label_303; // 0x12d JumpB
	var_44_bool = 1; // 0x12e MovB
	
Label_303:
	if(var_44_bool == 0) goto Label_355; // 0x12f JumpB
	var_48_int = 3; // 0x130 PushI
	irand(var_24_int, var_48_int); // 0x131 Func
	var_49_int = 0; // 0x133 PushI
	var_50_bool = var_24_int == var_49_int; // 0x134 Eq
	if(var_50_bool == 0) goto Label_327; // 0x135 JumpB
	var_51_int = var_22_int; // 0x136 Push
	if(var_51_int == 0) goto Label_326; // 0x137 JumpB
	irand(var_25_int, var_22_int); // 0x138 Func
	var_52_string = "all"; // 0x13a PushS
	var_53_string = ""; var_54_int = 0; // 0x13b PushV
	var_54_int = var_25_int; // 0x13c Mov
	func_511(var_53_string, var_54_int); // 0x13d NEW_2
	PlayAnimation(var_52_string, var_53_string); // 0x13f Func
	WaitForAnimEnd(var_26_bool); // 0x141 Func
	var_55_bool = var_26_bool == 0; // 0x143 Not
	if(var_55_bool == 0) goto Label_326; // 0x144 JumpB
	goto Label_355; // 0x145 Jump
	
Label_355:
	ResetAAS(); // 0x163 Func
	return 14; // 0x165 Return
	
Label_326:
	goto Label_344; // 0x146 Jump
	
Label_344:
	var_56_bool = 0; // 0x158 PushV
	func_358(var_56_bool); // 0x159 NEW_2
	var_57_bool = var_56_bool == 0; // 0x15b Not
	if(var_57_bool == 0) goto Label_350; // 0x15c JumpB
	goto Label_355; // 0x15d Jump
	
Label_350:
	ResetAAS(); // 0x15e Func
	var_58_int = 1; // 0x160 PushI
	var_23_int = var_23_int + var_58_int; // 0x161 Add2
	goto Label_293; // 0x162 Jump
	
Label_327:
	var_59_int = 1; // 0x147 PushI
	var_60_bool = var_24_int == var_59_int; // 0x148 Eq
	if(var_60_bool == 0) goto Label_341; // 0x149 JumpB
	var_61_int = 4; // 0x14a PushI
	rand(var_27_float, var_61_int); // 0x14b Func
	var_62_int = 1; // 0x14d PushI
	var_63_int = var_27_float + var_62_int; // 0x14e Add
	Sleep(var_63_int, var_28_bool); // 0x14f Func
	var_64_bool = var_28_bool == 0; // 0x151 Not
	if(var_64_bool == 0) goto Label_340; // 0x152 JumpB
	goto Label_355; // 0x153 Jump
	
Label_340:
	goto Label_344; // 0x154 Jump
	
Label_341:
	var_65_int = var_23_int; // 0x155 Push
	if(var_65_int == 0) goto Label_344; // 0x156 JumpB
	goto Label_355; // 0x157 Jump
}


func_552(var_67_int)
{
	var_67_int = 515556; // 0x228 MovI
	return 0; // 0x229 Return
}


func_554(var_66_int)
{
	var_66_int = 503341; // 0x22a MovI
	return 0; // 0x22b Return
}


func_556(var_68_string)
{
	var_68_string = "ui/NPC_Citizen3.png"; // 0x22c MovS
	return 0; // 0x22d Return
}


func_558(var_69_string)
{
	var_69_string = "ui/NPC_Citizen3_b.png"; // 0x22e MovS
	return 0; // 0x22f Return
}


func_560(var_61_bool)
{
	var_61_bool = 0; // 0x230 MovB
	return 0; // 0x231 Return
}


func_439()
{
	var_130_bool = 0; var_131_bool = 0; // 0x1b7 PushV
	var_132_bool = 1; // 0x1b8 PushB
	CameraSwitchToNormal(var_132_bool); // 0x1b9 Func
	var_133_bool = 0; // 0x1bb PushV
	func_560(var_133_bool); // 0x1bc NEW_2
	if(var_133_bool == 0) goto Label_448; // 0x1be JumpB
	goto Label_456; // 0x1bf Jump
	
Label_456:
	return 2; // 0x1c8 Return
	
Label_448:
	var_134_string = "head"; // 0x1c0 PushS
	HasAnimationTrack(var_131_bool, var_134_string); // 0x1c1 Func
	var_135_bool = var_131_bool; // 0x1c3 Push
	if(var_135_bool == 0) goto Label_456; // 0x1c4 JumpB
	var_136_string = "head"; // 0x1c5 PushS
	UnlookAsync(var_136_string); // 0x1c6 Func
}


func_457(var_112_string)
{
	var_113_bool = 0; var_114_float = 0; var_115_float = 0; var_116_bool = 0; var_117_float = 0; var_118_float = 0; // 0x1c9 PushV
	lshHasAnimation(var_116_bool, var_112_string); // 0x1ca Func
	var_119_bool = var_116_bool; // 0x1cc Push
	if(var_119_bool == 0) goto Label_468; // 0x1cd JumpB
	lshGetAnimTimes(var_112_string, var_117_float, var_118_float); // 0x1ce Func
	var_120_bool = 0; // 0x1d0 PushB
	lshPlayAnimation(var_117_float, var_118_float, var_120_bool); // 0x1d1 Func
	goto Label_472; // 0x1d3 Jump
	
Label_472:
	return 6; // 0x1d8 Return
	
Label_468:
	var_121_string = "Can't find lsh animation : "; // 0x1d4 PushS
	var_122_int = var_121_string + var_112_string; // 0x1d5 Add
	Trace(var_122_int); // 0x1d6 Func
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_79_object, var_80_object)
{
	var_0_object = var_80_object; // 0x4b TMov
	var_1_object = var_79_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_85_int = 1; // 0x4e PushI
	if(var_85_int == 0) goto Label_102; // 0x4f JumpB
	var_86_string = ""; // 0x50 PushV
	var_86_string = "Neutral"; // 0x51 MovS
	func_132(var_80_object, var_86_string); // 0x52 NEW_2
	var_103_int = 521002; // 0x54 PushI
	SetMessage(var_103_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_104_int = 521003; // 0x59 PushI
	var_105_int = -1; // 0x5a PushI
	var_106_int = 22216; // 0x5b PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x5c TObjFunc
	var_107_int = 528489; // 0x5e PushI
	var_108_int = -1; // 0x5f PushI
	var_109_int = 29878; // 0x60 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_110_bool = 0; // 0x66 PushV
	func_560(var_110_bool); // 0x67 NEW_2
	if(var_110_bool == 0) goto Label_117; // 0x69 JumpB
	
Label_106:
	lshWaitForAnimEnd(); // 0x6a Func
	var_111_string = var_3_string; // 0x6c PushT
	if(var_111_string == 0) goto Label_111; // 0x6d JumpB
	goto Label_116; // 0x6e Jump
	
Label_116:
	goto Label_131; // 0x74 Jump
	
Label_131:
	return 0; // 0x83 Return
	
Label_111:
	var_112_string = ""; // 0x6f PushV
	var_112_string = var_2_object; // 0x70 MovT
	func_457(var_112_string); // 0x71 NEW_2
	goto Label_106; // 0x73 Jump
	
Label_117:
	var_123_string = "all"; // 0x75 PushS
	var_124_string = "idle"; // 0x76 PushS
	PlayAnimation(var_123_string, var_124_string); // 0x77 Func
	
Label_121:
	WaitForAnimEnd(); // 0x79 Func
	var_125_string = var_3_string; // 0x7b PushT
	if(var_125_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_126:
	var_126_string = "all"; // 0x7e PushS
	var_127_string = "idle"; // 0x7f PushS
	PlayAnimation(var_126_string, var_127_string); // 0x80 Func
	goto Label_121; // 0x82 Jump
}


func_473(var_90_string, var_91_bool)
{
	var_94_bool = 0; var_95_float = 0; var_96_float = 0; var_97_bool = 0; var_98_float = 0; var_99_float = 0; // 0x1d9 PushV
	lshHasAnimation(var_97_bool, var_90_string); // 0x1da Func
	var_100_bool = var_97_bool; // 0x1dc Push
	if(var_100_bool == 0) goto Label_483; // 0x1dd JumpB
	lshGetAnimTimes(var_90_string, var_98_float, var_99_float); // 0x1de Func
	lshPlayAnimation(var_98_float, var_99_float, var_91_bool); // 0x1e0 Func
	goto Label_487; // 0x1e2 Jump
	
Label_487:
	return 6; // 0x1e7 Return
	
Label_483:
	var_101_string = "Can't find lsh animation : "; // 0x1e3 PushS
	var_102_int = var_101_string + var_90_string; // 0x1e4 Add
	Trace(var_102_int); // 0x1e5 Func
}


func_228(var_0_object)
{
	var_9_bool = 0; var_10_bool = 0; // 0xe4 PushV
	var_0_object = 1; // 0xe5 TMovB
	IsLoaded(var_10_bool); // 0xe6 Func
	var_11_bool = 0; // 0xe8 PushV
	var_11_bool = 0; // 0xe9 MovB
	var_12_bool = var_10_bool == 0; // 0xea Not
	if(var_12_bool == 0) goto Label_241; // 0xeb JumpB
	var_13_bool = 0; // 0xec PushV
	func_277(var_13_bool); // 0xed NEW_2
	if(var_13_bool == 0) goto Label_241; // 0xef JumpB
	var_11_bool = 1; // 0xf0 MovB
	
Label_241:
	if(var_11_bool == 0) goto Label_247; // 0xf1 JumpB
	var_14_object = Obj(); // 0xf2 PushV
	func_495(var_14_object); // 0xf3 NEW_2
	RemoveActor(var_14_object); // 0xf5 Func
	
Label_247:
	return 2; // 0xf7 Return
}


func_358(var_56_bool)
{
	var_56_bool = 1; // 0x166 MovB
	return 0; // 0x167 Return
}


func_488()
{
	var_9_bool = 0; // 0x1e8 PushV
	func_560(var_9_bool); // 0x1e9 NEW_2
	if(var_9_bool == 0) goto Label_494; // 0x1eb JumpB
	lshStopSpeech(); // 0x1ec Func
	
Label_494:
	return 0; // 0x1ee Return
}


func_360()
{
	StopAnimation(); // 0x168 Func
	StopGroup0(); // 0x16a Func
	return 0; // 0x16c Return
}


func_365(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0; // 0x16d PushV
	IsLoaded(var_10_bool); // 0x16e Func
	var_8_bool = var_10_bool; // 0x170 Mov
	return 2; // 0x171 Return
}


func_495(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x1ef PushV
	self(var_11_object); // 0x1f0 Func
	var_9_object = var_11_object; // 0x1f2 Mov
	return 2; // 0x1f3 Return
}


func_370(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x172 PushV
	GetPosition(var_31_cvector); // 0x173 ObjFunc
	GetEyesHeight(var_30_float); // 0x175 ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x177 PushE
	var_39_float = var_39_float + var_30_float; // 0x178 Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x179 PopE
	GetPosition(var_32_cvector); // 0x17a Func
	GetEyesHeight(var_30_float); // 0x17c Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x17e PushE
	var_40_float = var_40_float + var_30_float; // 0x17f Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x180 PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x181 Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x182 PushE
	var_41_float = 0; // 0x183 MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x184 PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x185 Or
	var_43_float = sqrt(var_42_int); // 0x186 Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x187 Div2
	var_34_cvector = -var_33_cvector; // 0x188 Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x189 Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x18a PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x18b PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x18c Xor2
	func_501(var_45_cvector, var_46_cvector); // 0x18d NEW_2
	var_53_int = 25; // 0x18f PushI
	var_54_float = var_45_cvector * var_53_int; // 0x190 Mult
	var_55_int = var_44_float + var_54_float; // 0x191 Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x192 PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x193 Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x194 Add2
	IsOverrideActive(var_37_bool); // 0x195 Func
	var_57_bool = var_37_bool; // 0x197 Push
	if(var_57_bool == 0) goto Label_411; // 0x198 JumpB
	var_18_bool = 0; // 0x199 MovB
	return 18; // 0x19a Return
	
Label_411:
	StopWorld(); // 0x19b Func
	var_58_bool = 1; // 0x19d PushB
	CameraTransit(var_36_cvector, var_34_cvector, var_58_bool); // 0x19e Func
	var_59_float = GetByIndex(var_35_cvector, 0); // 0x1a0 PushE
	var_60_float = GetByIndex(var_35_cvector, 2); // 0x1a1 PushE
	Rotate(var_59_float, var_60_float); // 0x1a2 Func
	var_61_bool = 0; // 0x1a4 PushV
	func_560(var_61_bool); // 0x1a5 NEW_2
	if(var_61_bool == 0) goto Label_425; // 0x1a7 JumpB
	goto Label_433; // 0x1a8 Jump
	
Label_433:
	CameraWaitForPlayFinish(); // 0x1b1 Func
	ResumeWorld(); // 0x1b3 Func
	var_18_bool = 1; // 0x1b5 MovB
	return 18; // 0x1b6 Return
	
Label_425:
	var_62_string = "head"; // 0x1a9 PushS
	HasAnimationTrack(var_38_bool, var_62_string); // 0x1aa Func
	var_63_bool = var_38_bool; // 0x1ac Push
	if(var_63_bool == 0) goto Label_433; // 0x1ad JumpB
	var_64_string = "head"; // 0x1ae PushS
	LookAsyncCamera(var_64_string); // 0x1af Func
}


func_501(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x1f5 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x1f6 Or
	var_49_float = sqrt(var_50_int); // 0x1f7 Sqrt2
	var_51_float = 0.0; // 0x1f8 PushF
	var_52_bool = var_49_float < var_51_float; // 0x1f9 LT
	if(var_52_bool == 0) goto Label_509; // 0x1fa JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x1fb MovV
	return 2; // 0x1fc Return
	
Label_509:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x1fd Div2
	return 2; // 0x1fe Return
}


func_511(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = ""; // 0x1ff PushV
	var_40_string = "idle"; // 0x200 MovS
	var_41_int = var_38_int; // 0x201 Push
	if(var_41_int == 0) goto Label_516; // 0x202 JumpB
	var_40_string = var_40_string + var_38_int; // 0x203 Add2
	
Label_516:
	var_37_string = var_40_string; // 0x204 Mov
	return 2; // 0x205 Return
}


