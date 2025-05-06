task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0x9b PushI
	if(var_8_int == 0) goto Label_293; // 0x9c JumpB
	func_529(); // 0x9e NEW_2
	var_10_int = 10626; // 0xa0 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xa1 Eq
	if(var_11_bool == 0) goto Label_173; // 0xa2 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xa3 PushV
	var_12_object = var_1_object; // 0xa4 MovT
	var_13_object = var_0_object; // 0xa5 MovT
	func_587(); // 0xa6 NEW_2
	var_30_object = Obj(); var_31_object = Obj(); // 0xa8 PushV
	var_30_object = var_1_object; // 0xa9 MovT
	var_31_object = var_0_object; // 0xaa MovT
	func_603(); // 0xab NEW_2
	
Label_173:
	var_56_int = 10627; // 0xad PushI
	var_57_bool = var_7_bool == var_56_int; // 0xae Eq
	if(var_57_bool == 0) goto Label_186; // 0xaf JumpB
	var_58_object = Obj(); var_59_object = Obj(); // 0xb0 PushV
	var_58_object = var_1_object; // 0xb1 MovT
	var_59_object = var_0_object; // 0xb2 MovT
	func_587(); // 0xb3 NEW_2
	var_60_object = Obj(); var_61_object = Obj(); // 0xb5 PushV
	var_60_object = var_1_object; // 0xb6 MovT
	var_61_object = var_0_object; // 0xb7 MovT
	func_603(); // 0xb8 NEW_2
	
Label_186:
	var_62_int = 10619; // 0xba PushI
	var_63_bool = var_6_int == var_62_int; // 0xbb Eq
	if(var_63_bool == 0) goto Label_209; // 0xbc JumpB
	var_64_string = ""; // 0xbd PushV
	var_64_string = "Neutral"; // 0xbe MovS
	func_132(var_7_bool, var_64_string); // 0xbf NEW_2
	var_81_int = 509650; // 0xc1 PushI
	SetMessage(var_81_int); // 0xc2 TObjFunc
	ClearReplies(); // 0xc4 TObjFunc
	var_82_int = 509651; // 0xc6 PushI
	var_83_int = 10621; // 0xc7 PushI
	var_84_int = 10620; // 0xc8 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0xc9 TObjFunc
	var_85_int = 509665; // 0xcb PushI
	var_86_int = 10625; // 0xcc PushI
	var_87_int = 10638; // 0xcd PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0xce TObjFunc
	return 0; // 0xd0 Return
	
Label_209:
	var_88_int = 10633; // 0xd1 PushI
	var_89_bool = var_6_int == var_88_int; // 0xd2 Eq
	if(var_89_bool == 0) goto Label_212; // 0xd3 JumpB
	
Label_212:
	var_90_int = 10621; // 0xd4 PushI
	var_91_bool = var_6_int == var_90_int; // 0xd5 Eq
	if(var_91_bool == 0) goto Label_235; // 0xd6 JumpB
	var_92_string = ""; // 0xd7 PushV
	var_92_string = "Neutral"; // 0xd8 MovS
	func_132(var_7_bool, var_92_string); // 0xd9 NEW_2
	var_93_int = 509652; // 0xdb PushI
	SetMessage(var_93_int); // 0xdc TObjFunc
	ClearReplies(); // 0xde TObjFunc
	var_94_int = 509653; // 0xe0 PushI
	var_95_int = 10623; // 0xe1 PushI
	var_96_int = 10622; // 0xe2 PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0xe3 TObjFunc
	var_97_int = 509660; // 0xe5 PushI
	var_98_int = 10625; // 0xe6 PushI
	var_99_int = 10630; // 0xe7 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0xe8 TObjFunc
	return 0; // 0xea Return
	
Label_235:
	var_100_int = 10623; // 0xeb PushI
	var_101_bool = var_6_int == var_100_int; // 0xec Eq
	if(var_101_bool == 0) goto Label_258; // 0xed JumpB
	var_102_string = ""; // 0xee PushV
	var_102_string = "Neutral"; // 0xef MovS
	func_132(var_7_bool, var_102_string); // 0xf0 NEW_2
	var_103_int = 509654; // 0xf2 PushI
	SetMessage(var_103_int); // 0xf3 TObjFunc
	ClearReplies(); // 0xf5 TObjFunc
	var_104_int = 509655; // 0xf7 PushI
	var_105_int = 10625; // 0xf8 PushI
	var_106_int = 10624; // 0xf9 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0xfa TObjFunc
	var_107_int = 509659; // 0xfc PushI
	var_108_int = 10625; // 0xfd PushI
	var_109_int = 10628; // 0xfe PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0xff TObjFunc
	return 0; // 0x101 Return
	
Label_258:
	var_110_int = 10625; // 0x102 PushI
	var_111_bool = var_6_int == var_110_int; // 0x103 Eq
	if(var_111_bool == 0) goto Label_281; // 0x104 JumpB
	var_112_string = ""; // 0x105 PushV
	var_112_string = "Neutral"; // 0x106 MovS
	func_132(var_7_bool, var_112_string); // 0x107 NEW_2
	var_113_int = 509656; // 0x109 PushI
	SetMessage(var_113_int); // 0x10a TObjFunc
	ClearReplies(); // 0x10c TObjFunc
	var_114_int = 509657; // 0x10e PushI
	var_115_int = -1; // 0x10f PushI
	var_116_int = 10626; // 0x110 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x111 TObjFunc
	var_117_int = 509658; // 0x113 PushI
	var_118_int = -1; // 0x114 PushI
	var_119_int = 10627; // 0x115 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x116 TObjFunc
	return 0; // 0x118 Return
	
Label_281:
	var_3_string = 1; // 0x119 TMovB
	var_120_bool = 0; // 0x11a PushV
	func_694(var_120_bool); // 0x11b NEW_2
	if(var_120_bool == 0) goto Label_289; // 0x11d JumpB
	lshStopAnimation(); // 0x11e Func
	goto Label_291; // 0x120 Jump
	
Label_291:
	return 0; // 0x123 Return
	
Label_289:
	StopAnimation(); // 0x121 Func
	
Label_293:
	return 0; // 0x125 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_bool = var_0_object == 0; // 0x130 Not
	if(var_7_bool == 0) goto Label_321; // 0x131 JumpB
	var_0_object = 1; // 0x132 TMovB
	func_403(); // 0x134 NEW_2
	var_8_int = 0; var_9_object = Obj(); // 0x136 PushV
	var_9_object = var_6_object; // 0x137 Mov
	TaskCall(0); // 0x138 TaskCall
	func_0(var_10_object, var_8_int, var_9_object); // 0x139 NEW_2
	TaskReturn(); // 0x13a TaskReturn
	var_136_bool = 0; var_137_string = ""; var_138_string = ""; // 0x13c PushV
	var_137_string = "quest_d4_01"; // 0x13d MovS
	var_138_string = "birdmask_done"; // 0x13e MovS
	func_546(var_136_bool, var_137_string, var_138_string); // 0x13f NEW_2
	
Label_321:
	return 0; // 0x141 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_0_object = 0; // 0x126 TMovB
	
Label_295:
	var_6_int = 3; // 0x127 PushI
	Sleep(var_6_int); // 0x128 Func
	func_322(); // 0x12b NEW_2
	goto Label_295; // 0x12d Jump
}


func_0(var_0_object, var_8_int, var_9_object)
{
	var_11_object = Obj(); var_12_bool = 0; var_13_int = 0; var_14_bool = 0; var_15_object = Obj(); var_16_bool = 0; var_17_int = 0; var_18_bool = 0; // 0x0 PushV
	var_0_object = var_9_object; // 0x1 TMov
	var_19_bool = 0; var_20_object = Obj(); var_21_float = 0; // 0x2 PushV
	var_20_object = var_9_object; // 0x3 Mov
	var_21_float = 130.0; // 0x4 MovF
	func_413(var_20_object, var_21_float); // 0x5 NEW_2
	var_65_bool = var_19_bool == 0; // 0x7 Not
	if(var_65_bool == 0) goto Label_11; // 0x8 JumpB
	var_8_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_15_object); // 0xb Func
	var_66_int = 0; // 0xd PushV
	func_688(var_66_int); // 0xe NEW_2
	SetNPCName(var_66_int); // 0x10 ObjFunc
	var_67_int = 0; // 0x12 PushV
	func_686(var_67_int); // 0x13 NEW_2
	SetNPCDescription(var_67_int); // 0x15 ObjFunc
	var_68_string = ""; // 0x17 PushV
	func_690(var_68_string); // 0x18 NEW_2
	SetPhoto(var_68_string); // 0x1a ObjFunc
	var_69_string = ""; // 0x1c PushV
	func_692(var_69_string); // 0x1d NEW_2
	SetPhoto2(var_69_string); // 0x1f ObjFunc
	var_70_int = 0; // 0x21 PushV
	func_669(var_70_int); // 0x22 NEW_2
	SetPlayerName(var_70_int); // 0x24 ObjFunc
	var_17_int = -1; // 0x26 MovI
	IsOverrideActive(var_16_bool); // 0x27 Func
	var_78_bool = var_16_bool; // 0x29 Push
	if(var_78_bool == 0) goto Label_45; // 0x2a JumpB
	var_8_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_15_object); // 0x2d Func
	var_79_object = Obj(); var_80_object = Obj(); // 0x2f PushV
	var_79_object = var_9_object; // 0x30 Mov
	var_80_object = var_15_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_81_object, var_82_object, var_83_string, var_84_bool, var_79_object, var_80_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_18_bool); // 0x36 ObjFunc
	
Label_56:
	var_128_bool = var_18_bool == 0; // 0x38 Not
	if(var_128_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_18_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_129_object = Obj(); // 0x3f PushV
	var_129_object = var_9_object; // 0x40 Mov
	func_481(); // 0x41 NEW_2
	StopDialog(var_15_object); // 0x43 Func
	GetReturnValue(var_17_int); // 0x45 ObjFunc
	var_8_int = var_17_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_514(var_90_string, var_91_bool)
{
	var_94_bool = 0; var_95_float = 0; var_96_float = 0; var_97_bool = 0; var_98_float = 0; var_99_float = 0; // 0x202 PushV
	lshHasAnimation(var_97_bool, var_90_string); // 0x203 Func
	var_100_bool = var_97_bool; // 0x205 Push
	if(var_100_bool == 0) goto Label_524; // 0x206 JumpB
	lshGetAnimTimes(var_90_string, var_98_float, var_99_float); // 0x207 Func
	lshPlayAnimation(var_98_float, var_99_float, var_91_bool); // 0x209 Func
	goto Label_528; // 0x20b Jump
	
Label_528:
	return 6; // 0x210 Return
	
Label_524:
	var_101_string = "Can't find lsh animation : "; // 0x20c PushS
	var_102_int = var_101_string + var_90_string; // 0x20d Add
	Trace(var_102_int); // 0x20e Func
}


func_322()
{
	var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_bool = 0; var_12_float = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_bool = 0; var_19_float = 0; var_20_bool = 0; // 0x142 PushV
	WaitForAnimEnd(); // 0x143 Func
	var_21_bool = 0; // 0x145 PushV
	func_408(var_21_bool); // 0x146 NEW_2
	var_24_bool = var_21_bool == 0; // 0x148 Not
	if(var_24_bool == 0) goto Label_331; // 0x149 JumpB
	return 14; // 0x14a Return
	
Label_331:
	var_25_int = 0; // 0x14b PushV
	func_570(var_25_int); // 0x14c NEW_2
	var_14_int = var_25_int; // 0x14d Mov
	var_15_int = 0; // 0x14f MovI
	
Label_336:
	var_38_bool = 0; // 0x150 PushV
	var_38_bool = 0; // 0x151 MovB
	var_39_int = 5; // 0x152 PushI
	var_40_bool = var_15_int < var_39_int; // 0x153 LT
	if(var_40_bool == 0) goto Label_346; // 0x154 JumpB
	var_41_bool = 0; // 0x155 PushV
	func_408(var_41_bool); // 0x156 NEW_2
	if(var_41_bool == 0) goto Label_346; // 0x158 JumpB
	var_38_bool = 1; // 0x159 MovB
	
Label_346:
	if(var_38_bool == 0) goto Label_398; // 0x15a JumpB
	var_42_int = 3; // 0x15b PushI
	irand(var_16_int, var_42_int); // 0x15c Func
	var_43_int = 0; // 0x15e PushI
	var_44_bool = var_16_int == var_43_int; // 0x15f Eq
	if(var_44_bool == 0) goto Label_370; // 0x160 JumpB
	var_45_int = var_14_int; // 0x161 Push
	if(var_45_int == 0) goto Label_369; // 0x162 JumpB
	irand(var_17_int, var_14_int); // 0x163 Func
	var_46_string = "all"; // 0x165 PushS
	var_47_string = ""; var_48_int = 0; // 0x166 PushV
	var_48_int = var_17_int; // 0x167 Mov
	func_563(var_47_string, var_48_int); // 0x168 NEW_2
	PlayAnimation(var_46_string, var_47_string); // 0x16a Func
	WaitForAnimEnd(var_18_bool); // 0x16c Func
	var_49_bool = var_18_bool == 0; // 0x16e Not
	if(var_49_bool == 0) goto Label_369; // 0x16f JumpB
	goto Label_398; // 0x170 Jump
	
Label_398:
	ResetAAS(); // 0x18e Func
	return 14; // 0x190 Return
	
Label_369:
	goto Label_387; // 0x171 Jump
	
Label_387:
	var_50_bool = 0; // 0x183 PushV
	func_401(var_50_bool); // 0x184 NEW_2
	var_51_bool = var_50_bool == 0; // 0x186 Not
	if(var_51_bool == 0) goto Label_393; // 0x187 JumpB
	goto Label_398; // 0x188 Jump
	
Label_393:
	ResetAAS(); // 0x189 Func
	var_52_int = 1; // 0x18b PushI
	var_15_int = var_15_int + var_52_int; // 0x18c Add2
	goto Label_336; // 0x18d Jump
	
Label_370:
	var_53_int = 1; // 0x172 PushI
	var_54_bool = var_16_int == var_53_int; // 0x173 Eq
	if(var_54_bool == 0) goto Label_384; // 0x174 JumpB
	var_55_int = 4; // 0x175 PushI
	rand(var_19_float, var_55_int); // 0x176 Func
	var_56_int = 1; // 0x178 PushI
	var_57_int = var_19_float + var_56_int; // 0x179 Add
	Sleep(var_57_int, var_20_bool); // 0x17a Func
	var_58_bool = var_20_bool == 0; // 0x17c Not
	if(var_58_bool == 0) goto Label_383; // 0x17d JumpB
	goto Label_398; // 0x17e Jump
	
Label_383:
	goto Label_387; // 0x17f Jump
	
Label_384:
	var_59_int = var_15_int; // 0x180 Push
	if(var_59_int == 0) goto Label_387; // 0x181 JumpB
	goto Label_398; // 0x182 Jump
}


func_132(var_2_object, var_86_string)
{
	var_87_bool = 0; // 0x85 PushV
	func_694(var_87_bool); // 0x86 NEW_2
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
	func_514(var_90_string, var_91_bool); // 0x96 NEW_2
	var_2_object = var_86_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_91_bool = 1; // 0x95 MovB
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
	var_103_int = 509650; // 0x54 PushI
	SetMessage(var_103_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_104_int = 509651; // 0x59 PushI
	var_105_int = 10621; // 0x5a PushI
	var_106_int = 10620; // 0x5b PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x5c TObjFunc
	var_107_int = 509665; // 0x5e PushI
	var_108_int = 10625; // 0x5f PushI
	var_109_int = 10638; // 0x60 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_110_bool = 0; // 0x66 PushV
	func_694(var_110_bool); // 0x67 NEW_2
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
	func_498(var_112_string); // 0x71 NEW_2
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


func_587()
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x24b PushV
	var_16_object = Obj(); // 0x24c PushV
	func_619(var_16_object); // 0x24d NEW_2
	var_15_object = var_16_object; // 0x24e Mov
	var_23_string = "d4q01Whitemask"; // 0x250 PushS
	var_24_string = "pt_d4q01_key1_region"; // 0x251 PushS
	var_25_int = 1; // 0x252 PushI
	var_26_int = 511523; // 0x253 PushI
	var_27_float = 0; // 0x254 PushV
	func_558(var_27_float); // 0x255 NEW_2
	AddMark(var_23_string, var_24_string, var_25_int, var_26_int, var_27_float); // 0x257 ObjFunc
	return 2; // 0x259 Return
}


func_529()
{
	var_9_bool = 0; // 0x211 PushV
	func_694(var_9_bool); // 0x212 NEW_2
	if(var_9_bool == 0) goto Label_535; // 0x214 JumpB
	lshStopSpeech(); // 0x215 Func
	
Label_535:
	return 0; // 0x217 Return
}


func_401(var_50_bool)
{
	var_50_bool = 1; // 0x191 MovB
	return 0; // 0x192 Return
}


func_403()
{
	StopAnimation(); // 0x193 Func
	StopGroup0(); // 0x195 Func
	return 0; // 0x197 Return
}


func_536(var_46_cvector, var_47_cvector)
{
	var_49_float = 0; var_50_float = 0; // 0x218 PushV
	var_51_int = var_47_cvector | var_47_cvector; // 0x219 Or
	var_50_float = sqrt(var_51_int); // 0x21a Sqrt2
	var_52_float = 0.0; // 0x21b PushF
	var_53_bool = var_50_float < var_52_float; // 0x21c LT
	if(var_53_bool == 0) goto Label_544; // 0x21d JumpB
	var_46_cvector = CVector(0.0, 0.0, 0.0); // 0x21e MovV
	return 2; // 0x21f Return
	
Label_544:
	var_46_cvector = var_47_cvector / var_47_cvector; // 0x220 Div2
	return 2; // 0x221 Return
}


func_408(var_21_bool)
{
	var_22_bool = 0; var_23_bool = 0; // 0x198 PushV
	IsLoaded(var_23_bool); // 0x199 Func
	var_21_bool = var_23_bool; // 0x19b Mov
	return 2; // 0x19c Return
}


func_603()
{
	var_32_object = Obj(); var_33_string = ""; var_34_float = 0; // 0x25c PushV
	var_35_object = Obj(); // 0x25d PushV
	func_619(var_35_object); // 0x25e NEW_2
	var_32_object = var_35_object; // 0x25f Mov
	var_33_string = "pt_d4q01_key1_region"; // 0x261 MovS
	var_34_float = 2; // 0x262 MovI
	func_636(var_32_object, var_33_string, var_34_float); // 0x263 NEW_2
	var_55_object = Obj(); // 0x265 PushV
	func_619(var_55_object); // 0x266 NEW_2
	ShowMap(var_55_object); // 0x268 ObjFunc
	return 0; // 0x26a Return
}


func_669(var_70_int)
{
	var_71_int = 0; var_72_int = 0; // 0x29d PushV
	var_73_string = "branch"; // 0x29e PushS
	GetVariable(var_73_string, var_72_int); // 0x29f Func
	var_74_int = 0; // 0x2a1 PushI
	var_75_bool = var_72_int == var_74_int; // 0x2a2 Eq
	if(var_75_bool == 0) goto Label_679; // 0x2a3 JumpB
	var_70_int = 1; // 0x2a4 MovI
	return 2; // 0x2a5 Return
	
Label_679:
	var_76_int = 1; // 0x2a7 PushI
	var_77_bool = var_72_int == var_76_int; // 0x2a8 Eq
	if(var_77_bool == 0) goto Label_684; // 0x2a9 JumpB
	var_70_int = 2; // 0x2aa MovI
	return 2; // 0x2ab Return
	
Label_684:
	var_70_int = 3; // 0x2ac MovI
	return 2; // 0x2ad Return
}


func_413(var_19_bool, var_21_float)
{
	var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_bool = 0; var_30_bool = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_bool = 0; // 0x19d PushV
	GetPosition(var_32_cvector); // 0x19e ObjFunc
	GetEyesHeight(var_31_float); // 0x1a0 ObjFunc
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x1a2 PushE
	var_40_float = var_40_float + var_31_float; // 0x1a3 Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x1a4 PopE
	GetPosition(var_33_cvector); // 0x1a5 Func
	GetEyesHeight(var_31_float); // 0x1a7 Func
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x1a9 PushE
	var_41_float = var_41_float + var_31_float; // 0x1aa Add2
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x1ab PopE
	var_34_cvector = var_32_cvector - var_33_cvector; // 0x1ac Sub2
	var_42_float = GetByIndex(var_34_cvector, 1); // 0x1ad PushE
	var_42_float = 0; // 0x1ae MovI
	SetByIndex(var_34_cvector, 1) = var_42_float; // 0x1af PopE
	var_43_int = var_34_cvector | var_34_cvector; // 0x1b0 Or
	var_44_float = sqrt(var_43_int); // 0x1b1 Sqrt
	var_34_cvector = var_34_cvector / var_34_cvector; // 0x1b2 Div2
	var_35_cvector = -var_34_cvector; // 0x1b3 Neg2
	var_45_float = var_34_cvector * var_21_float; // 0x1b4 Mult
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); // 0x1b5 PushV
	var_48_cvector = CVector(0.0, 1.0, 0.0); // 0x1b6 PushVec
	var_47_cvector = var_35_cvector ^ var_48_cvector; // 0x1b7 Xor2
	func_536(var_46_cvector, var_47_cvector); // 0x1b8 NEW_2
	var_54_int = 25; // 0x1ba PushI
	var_55_float = var_46_cvector * var_54_int; // 0x1bb Mult
	var_56_int = var_45_float + var_55_float; // 0x1bc Add
	var_57_cvector = CVector(0.0, 10.0, 0.0); // 0x1bd PushVec
	var_36_cvector = var_56_int - var_57_cvector; // 0x1be Sub2
	var_37_cvector = var_33_cvector + var_36_cvector; // 0x1bf Add2
	IsOverrideActive(var_38_bool); // 0x1c0 Func
	var_58_bool = var_38_bool; // 0x1c2 Push
	if(var_58_bool == 0) goto Label_454; // 0x1c3 JumpB
	var_19_bool = 0; // 0x1c4 MovB
	return 18; // 0x1c5 Return
	
Label_454:
	StopWorld(); // 0x1c6 Func
	CameraTransit(var_37_cvector, var_35_cvector); // 0x1c8 Func
	var_59_float = GetByIndex(var_36_cvector, 0); // 0x1ca PushE
	var_60_float = GetByIndex(var_36_cvector, 2); // 0x1cb PushE
	Rotate(var_59_float, var_60_float); // 0x1cc Func
	var_61_bool = 0; // 0x1ce PushV
	func_694(var_61_bool); // 0x1cf NEW_2
	if(var_61_bool == 0) goto Label_467; // 0x1d1 JumpB
	goto Label_475; // 0x1d2 Jump
	
Label_475:
	CameraWaitForPlayFinish(); // 0x1db Func
	ResumeWorld(); // 0x1dd Func
	var_19_bool = 1; // 0x1df MovB
	return 18; // 0x1e0 Return
	
Label_467:
	var_62_string = "head"; // 0x1d3 PushS
	HasAnimationTrack(var_39_bool, var_62_string); // 0x1d4 Func
	var_63_bool = var_39_bool; // 0x1d6 Push
	if(var_63_bool == 0) goto Label_475; // 0x1d7 JumpB
	var_64_string = "head"; // 0x1d8 PushS
	LookAsyncCamera(var_64_string); // 0x1d9 Func
}


func_481()
{
	var_130_bool = 0; var_131_bool = 0; // 0x1e1 PushV
	CameraSwitchToNormal(); // 0x1e2 Func
	var_132_bool = 0; // 0x1e4 PushV
	func_694(var_132_bool); // 0x1e5 NEW_2
	if(var_132_bool == 0) goto Label_489; // 0x1e7 JumpB
	goto Label_497; // 0x1e8 Jump
	
Label_497:
	return 2; // 0x1f1 Return
	
Label_489:
	var_133_string = "head"; // 0x1e9 PushS
	HasAnimationTrack(var_131_bool, var_133_string); // 0x1ea Func
	var_134_bool = var_131_bool; // 0x1ec Push
	if(var_134_bool == 0) goto Label_497; // 0x1ed JumpB
	var_135_string = "head"; // 0x1ee PushS
	UnlookAsync(var_135_string); // 0x1ef Func
}


func_546(var_136_bool, var_137_string, var_138_string)
{
	var_139_object = Obj(); var_140_object = Obj(); // 0x222 PushV
	FindActor(var_140_object, var_137_string); // 0x223 Func
	var_141_bool = var_140_object == 0; // 0x225 NullEq
	if(var_141_bool == 0) goto Label_553; // 0x226 JumpB
	var_136_bool = 0; // 0x227 MovB
	return 2; // 0x228 Return
	
Label_553:
	Trigger(var_140_object, var_138_string); // 0x229 Func
	var_136_bool = 1; // 0x22b MovB
	return 2; // 0x22c Return
}


func_619(var_16_object)
{
	var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); var_20_object = Obj(); // 0x26b PushV
	GetMainOutdoorScene(var_19_object); // 0x26c Func
	var_21_bool = var_19_object == 0; // 0x26e NullEq
	if(var_21_bool == 0) goto Label_630; // 0x26f JumpB
	var_22_string = "Can't find main outdoor scene"; // 0x270 PushS
	Trace(var_22_string); // 0x271 Func
	var_20_object = 0; // 0x273 SetNull
	var_16_object = var_20_object; // 0x274 Mov
	return 4; // 0x275 Return
	
Label_630:
	GetMap(var_20_object); // 0x276 ObjFunc
	var_16_object = var_20_object; // 0x278 Mov
	return 4; // 0x279 Return
}


func_686(var_67_int)
{
	var_67_int = 515571; // 0x2ae MovI
	return 0; // 0x2af Return
}


func_558(var_27_float)
{
	var_28_float = 0; var_29_float = 0; // 0x22e PushV
	GetGameTime(var_29_float); // 0x22f Func
	var_27_float = var_29_float; // 0x231 Mov
	return 2; // 0x232 Return
}


func_688(var_66_int)
{
	var_66_int = 504029; // 0x2b0 MovI
	return 0; // 0x2b1 Return
}


func_690(var_68_string)
{
	var_68_string = "ui/NPC_bmask.png"; // 0x2b2 MovS
	return 0; // 0x2b3 Return
}


func_563(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x233 PushV
	var_34_string = "idle"; // 0x234 MovS
	var_35_int = var_32_int; // 0x235 Push
	if(var_35_int == 0) goto Label_568; // 0x236 JumpB
	var_34_string = var_34_string + var_32_int; // 0x237 Add2
	
Label_568:
	var_31_string = var_34_string; // 0x238 Mov
	return 2; // 0x239 Return
}


func_692(var_69_string)
{
	var_69_string = "ui/NPC_bmask_b.png"; // 0x2b4 MovS
	return 0; // 0x2b5 Return
}


func_498(var_112_string)
{
	var_113_bool = 0; var_114_float = 0; var_115_float = 0; var_116_bool = 0; var_117_float = 0; var_118_float = 0; // 0x1f2 PushV
	lshHasAnimation(var_116_bool, var_112_string); // 0x1f3 Func
	var_119_bool = var_116_bool; // 0x1f5 Push
	if(var_119_bool == 0) goto Label_509; // 0x1f6 JumpB
	lshGetAnimTimes(var_112_string, var_117_float, var_118_float); // 0x1f7 Func
	var_120_bool = 0; // 0x1f9 PushB
	lshPlayAnimation(var_117_float, var_118_float, var_120_bool); // 0x1fa Func
	goto Label_513; // 0x1fc Jump
	
Label_513:
	return 6; // 0x201 Return
	
Label_509:
	var_121_string = "Can't find lsh animation : "; // 0x1fd PushS
	var_122_int = var_121_string + var_112_string; // 0x1fe Add
	Trace(var_122_int); // 0x1ff Func
}


func_694(var_61_bool)
{
	var_61_bool = 0; // 0x2b6 MovB
	return 0; // 0x2b7 Return
}


func_570(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x23a PushV
	var_28_int = 0; // 0x23b MovI
	
Label_572:
	var_30_string = "all"; // 0x23c PushS
	var_31_string = ""; var_32_int = 0; // 0x23d PushV
	var_32_int = var_28_int; // 0x23e Mov
	func_563(var_31_string, var_32_int); // 0x23f NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x241 Func
	var_36_bool = var_29_bool == 0; // 0x243 Not
	if(var_36_bool == 0) goto Label_582; // 0x244 JumpB
	goto Label_585; // 0x245 Jump
	
Label_585:
	var_25_int = var_28_int; // 0x249 Mov
	return 4; // 0x24a Return
	
Label_582:
	var_37_int = 1; // 0x246 PushI
	var_28_int = var_28_int + var_37_int; // 0x247 Add2
	goto Label_572; // 0x248 Jump
}


func_636(var_32_object, var_33_string, var_34_float)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_object = Obj(); var_39_bool = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_object = Obj(); var_43_bool = 0; // 0x27c PushV
	GetMainOutdoorScene(var_42_object); // 0x27d Func
	var_44_bool = var_42_object == 0; // 0x27f NullEq
	if(var_44_bool == 0) goto Label_645; // 0x280 JumpB
	var_45_string = "Can't find main outdoor scene"; // 0x281 PushS
	Trace(var_45_string); // 0x282 Func
	return 8; // 0x284 Return
	
Label_645:
	GetLocator(var_33_string, var_43_bool, var_40_cvector, var_41_cvector); // 0x285 ObjFunc
	var_46_bool = var_43_bool == 0; // 0x287 Not
	if(var_46_bool == 0) goto Label_655; // 0x288 JumpB
	var_47_string = "Warning: outdoor scene locator "; // 0x289 PushS
	var_48_int = var_47_string + var_33_string; // 0x28a Add
	var_49_string = " doesnt exist"; // 0x28b PushS
	var_50_int = var_48_int + var_49_string; // 0x28c Add
	Trace(var_50_int); // 0x28d Func
	
Label_655:
	GetMap(var_32_object); // 0x28f ObjFunc
	var_51_bool = var_32_object == 0; // 0x291 NullEq
	if(var_51_bool == 0) goto Label_663; // 0x292 JumpB
	var_52_string = "Can't find map"; // 0x293 PushS
	Trace(var_52_string); // 0x294 Func
	return 8; // 0x296 Return
	
Label_663:
	var_53_float = GetByIndex(var_40_cvector, 0); // 0x297 PushE
	var_54_float = GetByIndex(var_40_cvector, 2); // 0x298 PushE
	SetMapParams(var_53_float, var_54_float, var_34_float); // 0x299 ObjFunc
	return 8; // 0x29b Return
}


