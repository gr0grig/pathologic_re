task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xa0 PushI
	if(var_12_int == 0) goto Label_236; // 0xa1 JumpB
	func_567(); // 0xa3 NEW_2
	var_14_int = 4367; // 0xa5 PushI
	var_15_bool = var_11_object == var_14_int; // 0xa6 Eq
	if(var_15_bool == 0) goto Label_173; // 0xa7 JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xa8 PushV
	var_16_object = var_1_object; // 0xa9 MovT
	var_17_object = var_0_object; // 0xaa MovT
	func_623(); // 0xab NEW_2
	
Label_173:
	var_20_int = 4366; // 0xad PushI
	var_21_bool = var_10_bool == var_20_int; // 0xae Eq
	if(var_21_bool == 0) goto Label_201; // 0xaf JumpB
	var_22_string = ""; // 0xb0 PushV
	var_22_string = "Neutral"; // 0xb1 MovS
	func_137(var_11_object, var_22_string); // 0xb2 NEW_2
	var_39_int = 504011; // 0xb4 PushI
	SetMessage(var_39_int); // 0xb5 TObjFunc
	ClearReplies(); // 0xb7 TObjFunc
	var_40_bool = 0; var_41_object = Obj(); // 0xb9 PushV
	var_41_object = var_1_object; // 0xba MovT
	func_629(var_41_object); // 0xbb NEW_2
	if(var_40_bool == 0) goto Label_195; // 0xbd JumpB
	var_48_int = 504012; // 0xbe PushI
	var_49_int = 4369; // 0xbf PushI
	var_50_int = 4367; // 0xc0 PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0xc1 TObjFunc
	
Label_195:
	var_51_int = 504013; // 0xc3 PushI
	var_52_int = -1; // 0xc4 PushI
	var_53_int = 4368; // 0xc5 PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0xc6 TObjFunc
	return 0; // 0xc8 Return
	
Label_201:
	var_54_int = 4369; // 0xc9 PushI
	var_55_bool = var_10_bool == var_54_int; // 0xca Eq
	if(var_55_bool == 0) goto Label_224; // 0xcb JumpB
	var_56_string = ""; // 0xcc PushV
	var_56_string = "Neutral"; // 0xcd MovS
	func_137(var_11_object, var_56_string); // 0xce NEW_2
	var_57_int = 504014; // 0xd0 PushI
	SetMessage(var_57_int); // 0xd1 TObjFunc
	ClearReplies(); // 0xd3 TObjFunc
	var_58_int = 504015; // 0xd5 PushI
	var_59_int = -1; // 0xd6 PushI
	var_60_int = 4370; // 0xd7 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0xd8 TObjFunc
	var_61_int = 504016; // 0xda PushI
	var_62_int = -1; // 0xdb PushI
	var_63_int = 4371; // 0xdc PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0xdd TObjFunc
	return 0; // 0xdf Return
	
Label_224:
	var_3_string = 1; // 0xe0 TMovB
	var_64_bool = 0; // 0xe1 PushV
	func_621(var_64_bool); // 0xe2 NEW_2
	if(var_64_bool == 0) goto Label_232; // 0xe4 JumpB
	lshStopAnimation(); // 0xe5 Func
	goto Label_234; // 0xe7 Jump
	
Label_234:
	return 0; // 0xea Return
	
Label_232:
	StopAnimation(); // 0xe8 Func
	
Label_236:
	return 0; // 0xec Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_325(var_9_object, var_10_object); // 0xfb NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0xfd PushV
	var_15_object = var_10_object; // 0xfe Mov
	TaskCall(0); // 0xff TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x100 NEW_2
	TaskReturn(); // 0x101 TaskReturn
	return 0; // 0x103 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x12f PushI
	var_12_bool = var_10_int == var_11_int; // 0x130 Eq
	if(var_12_bool == 0) goto Label_324; // 0x131 JumpB
	var_13_bool = 0; // 0x132 PushV
	func_287(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x133 NEW_2
	if(var_13_bool == 0) goto Label_318; // 0x135 JumpB
	var_26_bool = var_2_object == 0; // 0x136 Not
	if(var_26_bool == 0) goto Label_317; // 0x137 JumpB
	var_27_object = Obj(); // 0x138 PushV
	var_27_object = var_4_bool; // 0x139 MovT
	func_556(var_27_object); // 0x13a NEW_2
	var_2_object = 1; // 0x13c TMovB
	
Label_317:
	goto Label_324; // 0x13d Jump
	
Label_324:
	return 0; // 0x144 Return
	
Label_318:
	var_34_object = var_2_object; // 0x13e PushT
	if(var_34_object == 0) goto Label_324; // 0x13f JumpB
	var_35_string = "head"; // 0x140 PushS
	UnlookAsync(var_35_string); // 0x141 Func
	var_2_object = 0; // 0x143 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_237:
	var_10_bool = 1; // 0xed PushB
	if(var_10_bool == 0) goto Label_248; // 0xee JumpB
	var_11_int = 1; // 0xef PushI
	Sleep(var_11_int); // 0xf0 Func
	var_12_float = 0; var_13_float = 0; // 0xf2 PushV
	var_12_float = 300; // 0xf3 MovI
	var_13_float = 100; // 0xf4 MovI
	func_260(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_12_float, var_13_float); // 0xf5 NEW_2
	goto Label_237; // 0xf7 Jump
	
Label_248:
	return 0; // 0xf8 Return
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 70.0; // 0x4 MovF
	func_438(var_26_object, var_27_float); // 0x5 NEW_2
	var_72_bool = var_25_bool == 0; // 0x7 Not
	if(var_72_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_73_int = 0; // 0xd PushV
	func_615(var_73_int); // 0xe NEW_2
	SetNPCName(var_73_int); // 0x10 ObjFunc
	var_74_int = 0; // 0x12 PushV
	func_613(var_74_int); // 0x13 NEW_2
	SetNPCDescription(var_74_int); // 0x15 ObjFunc
	var_75_string = ""; // 0x17 PushV
	func_617(var_75_string); // 0x18 NEW_2
	SetPhoto(var_75_string); // 0x1a ObjFunc
	var_76_string = ""; // 0x1c PushV
	func_619(var_76_string); // 0x1d NEW_2
	SetPhoto2(var_76_string); // 0x1f ObjFunc
	var_77_int = 0; // 0x21 PushV
	func_641(var_77_int); // 0x22 NEW_2
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
	var_143_bool = var_24_bool == 0; // 0x38 Not
	if(var_143_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_144_object = Obj(); // 0x3f PushV
	var_144_object = var_15_object; // 0x40 Mov
	func_507(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_641(var_77_int)
{
	var_78_int = 0; var_79_int = 0; // 0x281 PushV
	var_80_string = "branch"; // 0x282 PushS
	GetVariable(var_80_string, var_79_int); // 0x283 Func
	var_81_int = 0; // 0x285 PushI
	var_82_bool = var_79_int == var_81_int; // 0x286 Eq
	if(var_82_bool == 0) goto Label_651; // 0x287 JumpB
	var_77_int = 1; // 0x288 MovI
	return 2; // 0x289 Return
	
Label_651:
	var_83_int = 1; // 0x28b PushI
	var_84_bool = var_79_int == var_83_int; // 0x28c Eq
	if(var_84_bool == 0) goto Label_656; // 0x28d JumpB
	var_77_int = 2; // 0x28e MovI
	return 2; // 0x28f Return
	
Label_656:
	var_77_int = 3; // 0x290 MovI
	return 2; // 0x291 Return
}


func_260(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_12_float, var_13_float)
{
	var_14_bool = 0; // 0x105 PushV
	func_433(var_14_bool); // 0x106 NEW_2
	var_17_bool = var_14_bool == 0; // 0x108 Not
	if(var_17_bool == 0) goto Label_267; // 0x109 JumpB
	return 0; // 0x10a Return
	
Label_267:
	var_18_string = "player"; // 0x10b PushS
	FindActor(var_9_object, var_18_string); // 0x10c Func
	var_2_object = 0; // 0x10e TMovB
	var_3_string = 0; // 0x10f TMovB
	var_0_object = var_12_float; // 0x110 TMov
	var_1_object = var_13_float; // 0x111 TMov
	var_19_int = 10; // 0x112 PushI
	var_20_float = 1.0; // 0x113 PushF
	SetTimer(var_19_int, var_20_float); // 0x114 Func
	func_339(); // 0x117 NEW_2
	var_72_bool = var_3_string == 0; // 0x119 Not
	if(var_72_bool == 0) goto Label_286; // 0x11a JumpB
	var_73_int = 10; // 0x11b PushI
	KillTimer(var_73_int); // 0x11c Func
	
Label_286:
	return 0; // 0x11e Return
}


func_325(var_2_object, var_3_string)
{
	func_420(); // 0x146 NEW_2
	var_11_int = 10; // 0x148 PushI
	KillTimer(var_11_int); // 0x149 Func
	var_12_object = var_2_object; // 0x14b PushT
	if(var_12_object == 0) goto Label_337; // 0x14c JumpB
	var_13_string = "head"; // 0x14d PushS
	UnlookAsync(var_13_string); // 0x14e Func
	var_2_object = 0; // 0x150 TMovB
	
Label_337:
	var_3_string = 1; // 0x151 TMovB
	return 0; // 0x152 Return
}


func_584(var_113_int, var_114_string)
{
	var_115_int = 0; var_116_int = 0; // 0x248 PushV
	GetVariable(var_114_string, var_116_int); // 0x249 Func
	var_113_int = var_116_int; // 0x24b Mov
	return 2; // 0x24c Return
}


func_137(var_2_object, var_93_string)
{
	var_94_bool = 0; // 0x8a PushV
	func_621(var_94_bool); // 0x8b NEW_2
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
	func_541(var_97_string, var_98_bool); // 0x9b NEW_2
	var_2_object = var_93_string; // 0x9d TMov
	return 0; // 0x9e Return
	
Label_154:
	var_98_bool = 1; // 0x9a MovB
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
	var_110_int = 504011; // 0x54 PushI
	SetMessage(var_110_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_111_bool = 0; var_112_object = Obj(); // 0x59 PushV
	var_112_object = var_1_object; // 0x5a MovT
	func_629(var_112_object); // 0x5b NEW_2
	if(var_111_bool == 0) goto Label_99; // 0x5d JumpB
	var_119_int = 504012; // 0x5e PushI
	var_120_int = 4369; // 0x5f PushI
	var_121_int = 4367; // 0x60 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x61 TObjFunc
	
Label_99:
	var_122_int = 504013; // 0x63 PushI
	var_123_int = -1; // 0x64 PushI
	var_124_int = 4368; // 0x65 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x66 TObjFunc
	goto Label_107; // 0x68 Jump
	
Label_107:
	var_125_bool = 0; // 0x6b PushV
	func_621(var_125_bool); // 0x6c NEW_2
	if(var_125_bool == 0) goto Label_122; // 0x6e JumpB
	
Label_111:
	lshWaitForAnimEnd(); // 0x6f Func
	var_126_string = var_3_string; // 0x71 PushT
	if(var_126_string == 0) goto Label_116; // 0x72 JumpB
	goto Label_121; // 0x73 Jump
	
Label_121:
	goto Label_136; // 0x79 Jump
	
Label_136:
	return 0; // 0x88 Return
	
Label_116:
	var_127_string = ""; // 0x74 PushV
	var_127_string = var_2_object; // 0x75 MovT
	func_525(var_127_string); // 0x76 NEW_2
	goto Label_111; // 0x78 Jump
	
Label_122:
	var_138_string = "all"; // 0x7a PushS
	var_139_string = "idle"; // 0x7b PushS
	PlayAnimation(var_138_string, var_139_string); // 0x7c Func
	
Label_126:
	WaitForAnimEnd(); // 0x7e Func
	var_140_string = var_3_string; // 0x80 PushT
	if(var_140_string == 0) goto Label_131; // 0x81 JumpB
	goto Label_136; // 0x82 Jump
	
Label_131:
	var_141_string = "all"; // 0x83 PushS
	var_142_string = "idle"; // 0x84 PushS
	PlayAnimation(var_141_string, var_142_string); // 0x85 Func
	goto Label_126; // 0x87 Jump
}


func_525(var_127_string)
{
	var_128_bool = 0; var_129_float = 0; var_130_float = 0; var_131_bool = 0; var_132_float = 0; var_133_float = 0; // 0x20d PushV
	lshHasAnimation(var_131_bool, var_127_string); // 0x20e Func
	var_134_bool = var_131_bool; // 0x210 Push
	if(var_134_bool == 0) goto Label_536; // 0x211 JumpB
	lshGetAnimTimes(var_127_string, var_132_float, var_133_float); // 0x212 Func
	var_135_bool = 0; // 0x214 PushB
	lshPlayAnimation(var_132_float, var_133_float, var_135_bool); // 0x215 Func
	goto Label_540; // 0x217 Jump
	
Label_540:
	return 6; // 0x21c Return
	
Label_536:
	var_136_string = "Can't find lsh animation : "; // 0x218 PushS
	var_137_int = var_136_string + var_127_string; // 0x219 Add
	Trace(var_137_int); // 0x21a Func
}


func_589(var_43_string, var_44_int)
{
	var_45_string = ""; var_46_string = ""; // 0x24d PushV
	var_46_string = "idle"; // 0x24e MovS
	var_47_int = var_44_int; // 0x24f Push
	if(var_47_int == 0) goto Label_594; // 0x250 JumpB
	var_46_string = var_46_string + var_44_int; // 0x251 Add2
	
Label_594:
	var_43_string = var_46_string; // 0x252 Mov
	return 2; // 0x253 Return
}


func_339()
{
	var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_float = 0; var_27_bool = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_float = 0; var_34_bool = 0; // 0x153 PushV
	WaitForAnimEnd(); // 0x154 Func
	var_35_bool = 0; // 0x156 PushV
	func_433(var_35_bool); // 0x157 NEW_2
	var_36_bool = var_35_bool == 0; // 0x159 Not
	if(var_36_bool == 0) goto Label_348; // 0x15a JumpB
	return 14; // 0x15b Return
	
Label_348:
	var_37_int = 0; // 0x15c PushV
	func_596(var_37_int); // 0x15d NEW_2
	var_28_int = var_37_int; // 0x15e Mov
	var_29_int = 0; // 0x160 MovI
	
Label_353:
	var_50_bool = 0; // 0x161 PushV
	var_50_bool = 0; // 0x162 MovB
	var_51_int = 5; // 0x163 PushI
	var_52_bool = var_29_int < var_51_int; // 0x164 LT
	if(var_52_bool == 0) goto Label_363; // 0x165 JumpB
	var_53_bool = 0; // 0x166 PushV
	func_433(var_53_bool); // 0x167 NEW_2
	if(var_53_bool == 0) goto Label_363; // 0x169 JumpB
	var_50_bool = 1; // 0x16a MovB
	
Label_363:
	if(var_50_bool == 0) goto Label_415; // 0x16b JumpB
	var_54_int = 3; // 0x16c PushI
	irand(var_30_int, var_54_int); // 0x16d Func
	var_55_int = 0; // 0x16f PushI
	var_56_bool = var_30_int == var_55_int; // 0x170 Eq
	if(var_56_bool == 0) goto Label_387; // 0x171 JumpB
	var_57_int = var_28_int; // 0x172 Push
	if(var_57_int == 0) goto Label_386; // 0x173 JumpB
	irand(var_31_int, var_28_int); // 0x174 Func
	var_58_string = "all"; // 0x176 PushS
	var_59_string = ""; var_60_int = 0; // 0x177 PushV
	var_60_int = var_31_int; // 0x178 Mov
	func_589(var_59_string, var_60_int); // 0x179 NEW_2
	PlayAnimation(var_58_string, var_59_string); // 0x17b Func
	WaitForAnimEnd(var_32_bool); // 0x17d Func
	var_61_bool = var_32_bool == 0; // 0x17f Not
	if(var_61_bool == 0) goto Label_386; // 0x180 JumpB
	goto Label_415; // 0x181 Jump
	
Label_415:
	ResetAAS(); // 0x19f Func
	return 14; // 0x1a1 Return
	
Label_386:
	goto Label_404; // 0x182 Jump
	
Label_404:
	var_62_bool = 0; // 0x194 PushV
	func_418(var_62_bool); // 0x195 NEW_2
	var_63_bool = var_62_bool == 0; // 0x197 Not
	if(var_63_bool == 0) goto Label_410; // 0x198 JumpB
	goto Label_415; // 0x199 Jump
	
Label_410:
	ResetAAS(); // 0x19a Func
	var_64_int = 1; // 0x19c PushI
	var_29_int = var_29_int + var_64_int; // 0x19d Add2
	goto Label_353; // 0x19e Jump
	
Label_387:
	var_65_int = 1; // 0x183 PushI
	var_66_bool = var_30_int == var_65_int; // 0x184 Eq
	if(var_66_bool == 0) goto Label_401; // 0x185 JumpB
	var_67_int = 4; // 0x186 PushI
	rand(var_33_float, var_67_int); // 0x187 Func
	var_68_int = 1; // 0x189 PushI
	var_69_int = var_33_float + var_68_int; // 0x18a Add
	Sleep(var_69_int, var_34_bool); // 0x18b Func
	var_70_bool = var_34_bool == 0; // 0x18d Not
	if(var_70_bool == 0) goto Label_400; // 0x18e JumpB
	goto Label_415; // 0x18f Jump
	
Label_400:
	goto Label_404; // 0x190 Jump
	
Label_401:
	var_71_int = var_29_int; // 0x191 Push
	if(var_71_int == 0) goto Label_404; // 0x192 JumpB
	goto Label_415; // 0x193 Jump
}


func_596(var_37_int)
{
	var_38_int = 0; var_39_bool = 0; var_40_int = 0; var_41_bool = 0; // 0x254 PushV
	var_40_int = 0; // 0x255 MovI
	
Label_598:
	var_42_string = "all"; // 0x256 PushS
	var_43_string = ""; var_44_int = 0; // 0x257 PushV
	var_44_int = var_40_int; // 0x258 Mov
	func_589(var_43_string, var_44_int); // 0x259 NEW_2
	HasAnimation(var_41_bool, var_42_string, var_43_string); // 0x25b Func
	var_48_bool = var_41_bool == 0; // 0x25d Not
	if(var_48_bool == 0) goto Label_608; // 0x25e JumpB
	goto Label_611; // 0x25f Jump
	
Label_611:
	var_37_int = var_40_int; // 0x263 Mov
	return 4; // 0x264 Return
	
Label_608:
	var_49_int = 1; // 0x260 PushI
	var_40_int = var_40_int + var_49_int; // 0x261 Add2
	goto Label_598; // 0x262 Jump
}


func_541(var_97_string, var_98_bool)
{
	var_101_bool = 0; var_102_float = 0; var_103_float = 0; var_104_bool = 0; var_105_float = 0; var_106_float = 0; // 0x21d PushV
	lshHasAnimation(var_104_bool, var_97_string); // 0x21e Func
	var_107_bool = var_104_bool; // 0x220 Push
	if(var_107_bool == 0) goto Label_551; // 0x221 JumpB
	lshGetAnimTimes(var_97_string, var_105_float, var_106_float); // 0x222 Func
	lshPlayAnimation(var_105_float, var_106_float, var_98_bool); // 0x224 Func
	goto Label_555; // 0x226 Jump
	
Label_555:
	return 6; // 0x22b Return
	
Label_551:
	var_108_string = "Can't find lsh animation : "; // 0x227 PushS
	var_109_int = var_108_string + var_97_string; // 0x228 Add
	Trace(var_109_int); // 0x229 Func
}


func_287(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x11f PushV
	var_16_bool = var_4_bool == 0; // 0x120 NullEq
	if(var_16_bool == 0) goto Label_292; // 0x121 JumpB
	var_13_bool = 0; // 0x122 MovB
	return 2; // 0x123 Return
	
Label_292:
	var_17_float = 0; var_18_object = Obj(); // 0x124 PushV
	var_18_object = var_4_bool; // 0x125 MovT
	func_425(var_18_object); // 0x126 NEW_2
	var_15_float = sqrt(var_17_float); // 0x128 Sqrt2
	var_25_object = var_2_object; // 0x129 PushT
	if(var_25_object == 0) goto Label_300; // 0x12a JumpB
	var_15_float = var_15_float - var_1_object; // 0x12b Sub2
	
Label_300:
	var_13_bool = var_15_float < var_0_object; // 0x12c LT2
	return 2; // 0x12d Return
}


func_418(var_62_bool)
{
	var_62_bool = 1; // 0x1a2 MovB
	return 0; // 0x1a3 Return
}


func_420()
{
	StopAnimation(); // 0x1a4 Func
	StopGroup0(); // 0x1a6 Func
	return 0; // 0x1a8 Return
}


func_613(var_74_int)
{
	var_74_int = 515560; // 0x265 MovI
	return 0; // 0x266 Return
}


func_615(var_73_int)
{
	var_73_int = 503345; // 0x267 MovI
	return 0; // 0x268 Return
}


func_425(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x1a9 PushV
	GetPosition(var_22_cvector); // 0x1aa Func
	GetPosition(var_23_cvector); // 0x1ac ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x1ae Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x1af Or2
	return 6; // 0x1b0 Return
}


func_617(var_75_string)
{
	var_75_string = "ui/NPC_Citizen3.png"; // 0x269 MovS
	return 0; // 0x26a Return
}


func_619(var_76_string)
{
	var_76_string = "ui/NPC_Citizen3_b.png"; // 0x26b MovS
	return 0; // 0x26c Return
}


func_556(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x22c PushV
	GetEyesHeight(var_30_float); // 0x22d ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x22f MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x230 PushE
	var_32_float = var_30_float; // 0x231 Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x232 PopE
	var_33_string = "head"; // 0x233 PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x234 Func
	return 4; // 0x236 Return
}


func_621(var_68_bool)
{
	var_68_bool = 0; // 0x26d MovB
	return 0; // 0x26e Return
}


func_623()
{
	var_18_string = "ood6Littleboy1"; // 0x270 PushS
	var_19_int = 1; // 0x271 PushI
	SetVariable(var_18_string, var_19_int); // 0x272 Func
	return 0; // 0x274 Return
}


func_433(var_14_bool)
{
	var_15_bool = 0; var_16_bool = 0; // 0x1b1 PushV
	IsLoaded(var_16_bool); // 0x1b2 Func
	var_14_bool = var_16_bool; // 0x1b4 Mov
	return 2; // 0x1b5 Return
}


func_629(var_111_bool)
{
	var_113_int = 0; var_114_string = ""; // 0x276 PushV
	var_114_string = "ood6Littleboy1"; // 0x277 MovS
	func_584(var_113_int, var_114_string); // 0x278 NEW_2
	var_117_int = 0; // 0x27a PushI
	var_118_bool = var_113_int == var_117_int; // 0x27b Eq
	if(var_118_bool == 0) goto Label_639; // 0x27c JumpB
	var_111_bool = 1; // 0x27d MovB
	return 0; // 0x27e Return
	
Label_639:
	var_111_bool = 0; // 0x27f MovB
	return 0; // 0x280 Return
}


func_438(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x1b6 PushV
	GetPosition(var_38_cvector); // 0x1b7 ObjFunc
	GetEyesHeight(var_37_float); // 0x1b9 ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x1bb PushE
	var_46_float = var_46_float + var_37_float; // 0x1bc Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x1bd PopE
	GetPosition(var_39_cvector); // 0x1be Func
	GetEyesHeight(var_37_float); // 0x1c0 Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x1c2 PushE
	var_47_float = var_47_float + var_37_float; // 0x1c3 Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x1c4 PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x1c5 Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x1c6 PushE
	var_48_float = 0; // 0x1c7 MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x1c8 PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x1c9 Or
	var_50_float = sqrt(var_49_int); // 0x1ca Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x1cb Div2
	var_41_cvector = -var_40_cvector; // 0x1cc Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x1cd Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x1ce PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x1cf PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x1d0 Xor2
	func_574(var_52_cvector, var_53_cvector); // 0x1d1 NEW_2
	var_60_int = 25; // 0x1d3 PushI
	var_61_float = var_52_cvector * var_60_int; // 0x1d4 Mult
	var_62_int = var_51_float + var_61_float; // 0x1d5 Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x1d6 PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x1d7 Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x1d8 Add2
	IsOverrideActive(var_44_bool); // 0x1d9 Func
	var_64_bool = var_44_bool; // 0x1db Push
	if(var_64_bool == 0) goto Label_479; // 0x1dc JumpB
	var_25_bool = 0; // 0x1dd MovB
	return 18; // 0x1de Return
	
Label_479:
	StopWorld(); // 0x1df Func
	var_65_bool = 1; // 0x1e1 PushB
	CameraTransit(var_43_cvector, var_41_cvector, var_65_bool); // 0x1e2 Func
	var_66_float = GetByIndex(var_42_cvector, 0); // 0x1e4 PushE
	var_67_float = GetByIndex(var_42_cvector, 2); // 0x1e5 PushE
	Rotate(var_66_float, var_67_float); // 0x1e6 Func
	var_68_bool = 0; // 0x1e8 PushV
	func_621(var_68_bool); // 0x1e9 NEW_2
	if(var_68_bool == 0) goto Label_493; // 0x1eb JumpB
	goto Label_501; // 0x1ec Jump
	
Label_501:
	CameraWaitForPlayFinish(); // 0x1f5 Func
	ResumeWorld(); // 0x1f7 Func
	var_25_bool = 1; // 0x1f9 MovB
	return 18; // 0x1fa Return
	
Label_493:
	var_69_string = "head"; // 0x1ed PushS
	HasAnimationTrack(var_45_bool, var_69_string); // 0x1ee Func
	var_70_bool = var_45_bool; // 0x1f0 Push
	if(var_70_bool == 0) goto Label_501; // 0x1f1 JumpB
	var_71_string = "head"; // 0x1f2 PushS
	LookAsyncCamera(var_71_string); // 0x1f3 Func
}


func_567()
{
	var_13_bool = 0; // 0x237 PushV
	func_621(var_13_bool); // 0x238 NEW_2
	if(var_13_bool == 0) goto Label_573; // 0x23a JumpB
	lshStopSpeech(); // 0x23b Func
	
Label_573:
	return 0; // 0x23d Return
}


func_507()
{
	var_145_bool = 0; var_146_bool = 0; // 0x1fb PushV
	var_147_bool = 1; // 0x1fc PushB
	CameraSwitchToNormal(var_147_bool); // 0x1fd Func
	var_148_bool = 0; // 0x1ff PushV
	func_621(var_148_bool); // 0x200 NEW_2
	if(var_148_bool == 0) goto Label_516; // 0x202 JumpB
	goto Label_524; // 0x203 Jump
	
Label_524:
	return 2; // 0x20c Return
	
Label_516:
	var_149_string = "head"; // 0x204 PushS
	HasAnimationTrack(var_146_bool, var_149_string); // 0x205 Func
	var_150_bool = var_146_bool; // 0x207 Push
	if(var_150_bool == 0) goto Label_524; // 0x208 JumpB
	var_151_string = "head"; // 0x209 PushS
	UnlookAsync(var_151_string); // 0x20a Func
}


func_574(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x23e PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x23f Or
	var_56_float = sqrt(var_57_int); // 0x240 Sqrt2
	var_58_float = 0.0; // 0x241 PushF
	var_59_bool = var_56_float < var_58_float; // 0x242 LT
	if(var_59_bool == 0) goto Label_582; // 0x243 JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x244 MovV
	return 2; // 0x245 Return
	
Label_582:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x246 Div2
	return 2; // 0x247 Return
}


