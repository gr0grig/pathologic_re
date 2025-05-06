task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xb9 PushI
	if(var_14_int == 0) goto Label_355; // 0xba JumpB
	func_749(); // 0xbc NEW_2
	var_16_int = 31248; // 0xbe PushI
	var_17_bool = var_12_bool == var_16_int; // 0xbf Eq
	if(var_17_bool == 0) goto Label_243; // 0xc0 JumpB
	var_18_bool = 0; var_19_object = Obj(); // 0xc1 PushV
	var_19_object = var_1_object; // 0xc2 MovT
	func_803(var_19_object); // 0xc3 NEW_2
	if(var_18_bool == 0) goto Label_223; // 0xc5 JumpB
	var_26_object = Obj(); var_27_object = Obj(); // 0xc6 PushV
	var_26_object = var_1_object; // 0xc7 MovT
	var_27_object = var_0_object; // 0xc8 MovT
	func_777(); // 0xc9 NEW_2
	var_30_object = Obj(); var_31_object = Obj(); // 0xcb PushV
	var_30_object = var_1_object; // 0xcc MovT
	var_31_object = var_0_object; // 0xcd MovT
	func_783(); // 0xce NEW_2
	var_63_string = ""; // 0xd0 PushV
	var_63_string = "Neutral"; // 0xd1 MovS
	func_162(var_13_bool, var_63_string); // 0xd2 NEW_2
	var_80_int = 529790; // 0xd4 PushI
	SetMessage(var_80_int); // 0xd5 TObjFunc
	ClearReplies(); // 0xd7 TObjFunc
	var_81_int = 529794; // 0xd9 PushI
	var_82_int = 31253; // 0xda PushI
	var_83_int = 31252; // 0xdb PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0xdc TObjFunc
	return 0; // 0xde Return
	
Label_223:
	var_84_string = ""; // 0xdf PushV
	var_84_string = "Neutral"; // 0xe0 MovS
	func_162(var_13_bool, var_84_string); // 0xe1 NEW_2
	var_85_int = 529791; // 0xe3 PushI
	SetMessage(var_85_int); // 0xe4 TObjFunc
	ClearReplies(); // 0xe6 TObjFunc
	var_86_int = 529792; // 0xe8 PushI
	var_87_int = -1; // 0xe9 PushI
	var_88_int = 31250; // 0xea PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0xeb TObjFunc
	var_89_int = 529793; // 0xed PushI
	var_90_int = -1; // 0xee PushI
	var_91_int = 31251; // 0xef PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0xf0 TObjFunc
	return 0; // 0xf2 Return
	
Label_243:
	var_92_int = 31253; // 0xf3 PushI
	var_93_bool = var_12_bool == var_92_int; // 0xf4 Eq
	if(var_93_bool == 0) goto Label_261; // 0xf5 JumpB
	var_94_string = ""; // 0xf6 PushV
	var_94_string = "Neutral"; // 0xf7 MovS
	func_162(var_13_bool, var_94_string); // 0xf8 NEW_2
	var_95_int = 529795; // 0xfa PushI
	SetMessage(var_95_int); // 0xfb TObjFunc
	ClearReplies(); // 0xfd TObjFunc
	var_96_int = 529796; // 0xff PushI
	var_97_int = 31255; // 0x100 PushI
	var_98_int = 31254; // 0x101 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x102 TObjFunc
	return 0; // 0x104 Return
	
Label_261:
	var_99_int = 31255; // 0x105 PushI
	var_100_bool = var_12_bool == var_99_int; // 0x106 Eq
	if(var_100_bool == 0) goto Label_284; // 0x107 JumpB
	var_101_string = ""; // 0x108 PushV
	var_101_string = "Neutral"; // 0x109 MovS
	func_162(var_13_bool, var_101_string); // 0x10a NEW_2
	var_102_int = 529797; // 0x10c PushI
	SetMessage(var_102_int); // 0x10d TObjFunc
	ClearReplies(); // 0x10f TObjFunc
	var_103_int = 529798; // 0x111 PushI
	var_104_int = 31257; // 0x112 PushI
	var_105_int = 31256; // 0x113 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x114 TObjFunc
	var_106_int = 529803; // 0x116 PushI
	var_107_int = 31262; // 0x117 PushI
	var_108_int = 31261; // 0x118 PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x119 TObjFunc
	return 0; // 0x11b Return
	
Label_284:
	var_109_int = 31257; // 0x11c PushI
	var_110_bool = var_12_bool == var_109_int; // 0x11d Eq
	if(var_110_bool == 0) goto Label_302; // 0x11e JumpB
	var_111_string = ""; // 0x11f PushV
	var_111_string = "Neutral"; // 0x120 MovS
	func_162(var_13_bool, var_111_string); // 0x121 NEW_2
	var_112_int = 529799; // 0x123 PushI
	SetMessage(var_112_int); // 0x124 TObjFunc
	ClearReplies(); // 0x126 TObjFunc
	var_113_int = 529800; // 0x128 PushI
	var_114_int = 31259; // 0x129 PushI
	var_115_int = 31258; // 0x12a PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x12b TObjFunc
	return 0; // 0x12d Return
	
Label_302:
	var_116_int = 31259; // 0x12e PushI
	var_117_bool = var_12_bool == var_116_int; // 0x12f Eq
	if(var_117_bool == 0) goto Label_320; // 0x130 JumpB
	var_118_string = ""; // 0x131 PushV
	var_118_string = "Neutral"; // 0x132 MovS
	func_162(var_13_bool, var_118_string); // 0x133 NEW_2
	var_119_int = 529801; // 0x135 PushI
	SetMessage(var_119_int); // 0x136 TObjFunc
	ClearReplies(); // 0x138 TObjFunc
	var_120_int = 529802; // 0x13a PushI
	var_121_int = 31262; // 0x13b PushI
	var_122_int = 31260; // 0x13c PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x13d TObjFunc
	return 0; // 0x13f Return
	
Label_320:
	var_123_int = 31262; // 0x140 PushI
	var_124_bool = var_12_bool == var_123_int; // 0x141 Eq
	if(var_124_bool == 0) goto Label_343; // 0x142 JumpB
	var_125_string = ""; // 0x143 PushV
	var_125_string = "Neutral"; // 0x144 MovS
	func_162(var_13_bool, var_125_string); // 0x145 NEW_2
	var_126_int = 529804; // 0x147 PushI
	SetMessage(var_126_int); // 0x148 TObjFunc
	ClearReplies(); // 0x14a TObjFunc
	var_127_int = 529805; // 0x14c PushI
	var_128_int = -1; // 0x14d PushI
	var_129_int = 31264; // 0x14e PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x14f TObjFunc
	var_130_int = 529806; // 0x151 PushI
	var_131_int = -1; // 0x152 PushI
	var_132_int = 31265; // 0x153 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x154 TObjFunc
	return 0; // 0x156 Return
	
Label_343:
	var_3_string = 1; // 0x157 TMovB
	var_133_bool = 0; // 0x158 PushV
	func_894(var_133_bool); // 0x159 NEW_2
	if(var_133_bool == 0) goto Label_351; // 0x15b JumpB
	lshStopAnimation(); // 0x15c Func
	goto Label_353; // 0x15e Jump
	
Label_353:
	return 0; // 0x161 Return
	
Label_351:
	StopAnimation(); // 0x15f Func
	
Label_355:
	return 0; // 0x163 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_507(var_11_bool, var_12_object); // 0x16c NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0x16e PushV
	var_17_object = var_12_object; // 0x16f Mov
	TaskCall(0); // 0x170 TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0x171 NEW_2
	TaskReturn(); // 0x172 TaskReturn
	return 0; // 0x174 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "cleanup"; // 0x19c PushS
	var_14_bool = var_12_string == var_13_string; // 0x19d Eq
	if(var_14_bool == 0) goto Label_418; // 0x19e JumpB
	func_391(var_12_string); // 0x1a0 NEW_2
	
Label_418:
	return 0; // 0x1a2 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x1a3 PushT
	if(var_12_int == 0) goto Label_424; // 0x1a4 JumpB
	func_507(var_10_bool, var_11_bool); // 0x1a6 NEW_2
	
Label_424:
	var_16_bool = 0; // 0x1a8 PushV
	var_16_bool = 0; // 0x1a9 MovB
	var_17_int = var_5_int; // 0x1aa PushT
	if(var_17_int == 0) goto Label_433; // 0x1ab JumpB
	var_18_bool = 0; // 0x1ac PushV
	func_440(var_18_bool); // 0x1ad NEW_2
	if(var_18_bool == 0) goto Label_433; // 0x1af JumpB
	var_16_bool = 1; // 0x1b0 MovB
	
Label_433:
	if(var_16_bool == 0) goto Label_439; // 0x1b1 JumpB
	var_19_object = Obj(); // 0x1b2 PushV
	func_756(var_19_object); // 0x1b3 NEW_2
	RemoveActor(var_19_object); // 0x1b5 Func
	
Label_439:
	return 0; // 0x1b7 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x1e5 PushI
	var_14_bool = var_12_int == var_13_int; // 0x1e6 Eq
	if(var_14_bool == 0) goto Label_506; // 0x1e7 JumpB
	var_15_bool = 0; // 0x1e8 PushV
	func_469(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x1e9 NEW_2
	if(var_15_bool == 0) goto Label_500; // 0x1eb JumpB
	var_28_bool = var_2_object == 0; // 0x1ec Not
	if(var_28_bool == 0) goto Label_499; // 0x1ed JumpB
	var_29_object = Obj(); // 0x1ee PushV
	var_29_object = var_4_bool; // 0x1ef MovT
	func_738(var_29_object); // 0x1f0 NEW_2
	var_2_object = 1; // 0x1f2 TMovB
	
Label_499:
	goto Label_506; // 0x1f3 Jump
	
Label_506:
	return 0; // 0x1fa Return
	
Label_500:
	var_36_object = var_2_object; // 0x1f4 PushT
	if(var_36_object == 0) goto Label_506; // 0x1f5 JumpB
	var_37_string = "head"; // 0x1f6 PushS
	UnlookAsync(var_37_string); // 0x1f7 Func
	var_2_object = 0; // 0x1f9 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0x164 PushV
	var_12_float = 300; // 0x165 MovI
	var_13_float = 100; // 0x166 MovI
	func_373(var_11_bool, var_12_float, var_13_float); // 0x167 NEW_2
	return 0; // 0x169 Return
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 70.0; // 0x4 MovF
	func_620(var_28_object, var_29_float); // 0x5 NEW_2
	var_74_bool = var_27_bool == 0; // 0x7 Not
	if(var_74_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_75_int = 0; // 0xd PushV
	func_888(var_75_int); // 0xe NEW_2
	SetNPCName(var_75_int); // 0x10 ObjFunc
	var_76_int = 0; // 0x12 PushV
	func_886(var_76_int); // 0x13 NEW_2
	SetNPCDescription(var_76_int); // 0x15 ObjFunc
	var_77_string = ""; // 0x17 PushV
	func_890(var_77_string); // 0x18 NEW_2
	SetPhoto(var_77_string); // 0x1a ObjFunc
	var_78_string = ""; // 0x1c PushV
	func_892(var_78_string); // 0x1d NEW_2
	SetPhoto2(var_78_string); // 0x1f ObjFunc
	var_79_int = 0; // 0x21 PushV
	func_869(var_79_int); // 0x22 NEW_2
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
	var_187_bool = var_26_bool == 0; // 0x38 Not
	if(var_187_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_188_object = Obj(); // 0x3f PushV
	var_188_object = var_17_object; // 0x40 Mov
	func_689(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_896(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x380 PushV
	var_55_string = "idle"; // 0x381 MovS
	var_56_int = var_53_int; // 0x382 Push
	if(var_56_int == 0) goto Label_901; // 0x383 JumpB
	var_55_string = var_55_string + var_53_int; // 0x384 Add2
	
Label_901:
	var_52_string = var_55_string; // 0x385 Mov
	return 2; // 0x386 Return
}


func_772(var_97_int, var_98_string)
{
	var_99_int = 0; var_100_int = 0; // 0x304 PushV
	GetVariable(var_98_string, var_100_int); // 0x305 Func
	var_97_int = var_100_int; // 0x307 Mov
	return 2; // 0x308 Return
}


func_903(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x387 PushV
	var_49_int = 0; // 0x388 MovI
	
Label_905:
	var_51_string = "all"; // 0x389 PushS
	var_52_string = ""; var_53_int = 0; // 0x38a PushV
	var_53_int = var_49_int; // 0x38b Mov
	func_896(var_52_string, var_53_int); // 0x38c NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x38e Func
	var_57_bool = var_50_bool == 0; // 0x390 Not
	if(var_57_bool == 0) goto Label_915; // 0x391 JumpB
	goto Label_918; // 0x392 Jump
	
Label_918:
	var_46_int = var_49_int; // 0x396 Mov
	return 4; // 0x397 Return
	
Label_915:
	var_58_int = 1; // 0x393 PushI
	var_49_int = var_49_int + var_58_int; // 0x394 Add2
	goto Label_905; // 0x395 Jump
}


func_391(var_5_int)
{
	var_5_int = 1; // 0x187 TMovB
	var_15_bool = 0; // 0x188 PushV
	var_15_bool = 0; // 0x189 MovB
	var_16_bool = 0; // 0x18a PushV
	func_615(var_16_bool); // 0x18b NEW_2
	var_19_bool = var_16_bool == 0; // 0x18d Not
	if(var_19_bool == 0) goto Label_404; // 0x18e JumpB
	var_20_bool = 0; // 0x18f PushV
	func_440(var_20_bool); // 0x190 NEW_2
	if(var_20_bool == 0) goto Label_404; // 0x192 JumpB
	var_15_bool = 1; // 0x193 MovB
	
Label_404:
	if(var_15_bool == 0) goto Label_410; // 0x194 JumpB
	var_21_object = Obj(); // 0x195 PushV
	func_756(var_21_object); // 0x196 NEW_2
	RemoveActor(var_21_object); // 0x198 Func
	
Label_410:
	return 0; // 0x19a Return
}


func_777()
{
	var_105_string = "ook9Littleboy1"; // 0x30a PushS
	var_106_int = 1; // 0x30b PushI
	SetVariable(var_105_string, var_106_int); // 0x30c Func
	return 0; // 0x30e Return
}


func_521()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x209 PushV
	WaitForAnimEnd(); // 0x20a Func
	var_44_bool = 0; // 0x20c PushV
	func_615(var_44_bool); // 0x20d NEW_2
	var_45_bool = var_44_bool == 0; // 0x20f Not
	if(var_45_bool == 0) goto Label_530; // 0x210 JumpB
	return 14; // 0x211 Return
	
Label_530:
	var_46_int = 0; // 0x212 PushV
	func_903(var_46_int); // 0x213 NEW_2
	var_37_int = var_46_int; // 0x214 Mov
	var_38_int = 0; // 0x216 MovI
	
Label_535:
	var_59_bool = 0; // 0x217 PushV
	var_59_bool = 0; // 0x218 MovB
	var_60_int = 5; // 0x219 PushI
	var_61_bool = var_38_int < var_60_int; // 0x21a LT
	if(var_61_bool == 0) goto Label_545; // 0x21b JumpB
	var_62_bool = 0; // 0x21c PushV
	func_615(var_62_bool); // 0x21d NEW_2
	if(var_62_bool == 0) goto Label_545; // 0x21f JumpB
	var_59_bool = 1; // 0x220 MovB
	
Label_545:
	if(var_59_bool == 0) goto Label_597; // 0x221 JumpB
	var_63_int = 3; // 0x222 PushI
	irand(var_39_int, var_63_int); // 0x223 Func
	var_64_int = 0; // 0x225 PushI
	var_65_bool = var_39_int == var_64_int; // 0x226 Eq
	if(var_65_bool == 0) goto Label_569; // 0x227 JumpB
	var_66_int = var_37_int; // 0x228 Push
	if(var_66_int == 0) goto Label_568; // 0x229 JumpB
	irand(var_40_int, var_37_int); // 0x22a Func
	var_67_string = "all"; // 0x22c PushS
	var_68_string = ""; var_69_int = 0; // 0x22d PushV
	var_69_int = var_40_int; // 0x22e Mov
	func_896(var_68_string, var_69_int); // 0x22f NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x231 Func
	WaitForAnimEnd(var_41_bool); // 0x233 Func
	var_70_bool = var_41_bool == 0; // 0x235 Not
	if(var_70_bool == 0) goto Label_568; // 0x236 JumpB
	goto Label_597; // 0x237 Jump
	
Label_597:
	ResetAAS(); // 0x255 Func
	return 14; // 0x257 Return
	
Label_568:
	goto Label_586; // 0x238 Jump
	
Label_586:
	var_71_bool = 0; // 0x24a PushV
	func_600(var_71_bool); // 0x24b NEW_2
	var_72_bool = var_71_bool == 0; // 0x24d Not
	if(var_72_bool == 0) goto Label_592; // 0x24e JumpB
	goto Label_597; // 0x24f Jump
	
Label_592:
	ResetAAS(); // 0x250 Func
	var_73_int = 1; // 0x252 PushI
	var_38_int = var_38_int + var_73_int; // 0x253 Add2
	goto Label_535; // 0x254 Jump
	
Label_569:
	var_74_int = 1; // 0x239 PushI
	var_75_bool = var_39_int == var_74_int; // 0x23a Eq
	if(var_75_bool == 0) goto Label_583; // 0x23b JumpB
	var_76_int = 4; // 0x23c PushI
	rand(var_42_float, var_76_int); // 0x23d Func
	var_77_int = 1; // 0x23f PushI
	var_78_int = var_42_float + var_77_int; // 0x240 Add
	Sleep(var_78_int, var_43_bool); // 0x241 Func
	var_79_bool = var_43_bool == 0; // 0x243 Not
	if(var_79_bool == 0) goto Label_582; // 0x244 JumpB
	goto Label_597; // 0x245 Jump
	
Label_582:
	goto Label_586; // 0x246 Jump
	
Label_583:
	var_80_int = var_38_int; // 0x247 Push
	if(var_80_int == 0) goto Label_586; // 0x248 JumpB
	goto Label_597; // 0x249 Jump
}


func_783()
{
	var_109_int = 0; var_110_string = ""; // 0x310 PushV
	var_110_string = "k9q01ChildTalk"; // 0x311 MovS
	func_772(var_109_int, var_110_string); // 0x312 NEW_2
	var_111_int = 0; // 0x314 PushI
	var_112_bool = var_109_int == var_111_int; // 0x315 Eq
	if(var_112_bool == 0) goto Label_802; // 0x316 JumpB
	var_113_string = "k9q01ChildTalk"; // 0x317 PushS
	var_114_int = 1; // 0x318 PushI
	SetVariable(var_113_string, var_114_int); // 0x319 Func
	var_115_string = "k9q01"; // 0x31b PushS
	var_116_int = 7; // 0x31c PushI
	SetVariable(var_115_string, var_116_int); // 0x31d Func
	func_815(); // 0x320 NEW_2
	
Label_802:
	return 0; // 0x322 Return
}


func_894(var_70_bool)
{
	var_70_bool = 0; // 0x37e MovB
	return 0; // 0x37f Return
}


func_162(var_2_object, var_140_string)
{
	var_141_bool = 0; // 0xa3 PushV
	func_894(var_141_bool); // 0xa4 NEW_2
	var_142_bool = var_141_bool == 0; // 0xa6 Not
	if(var_142_bool == 0) goto Label_169; // 0xa7 JumpB
	return 0; // 0xa8 Return
	
Label_169:
	var_143_bool = var_140_string == var_2_object; // 0xa9 Eq
	if(var_143_bool == 0) goto Label_172; // 0xaa JumpB
	return 0; // 0xab Return
	
Label_172:
	var_144_string = ""; var_145_bool = 0; // 0xac PushV
	var_144_string = var_140_string; // 0xad Mov
	var_146_string = ""; // 0xae PushS
	var_147_bool = var_140_string == var_146_string; // 0xaf Eq
	if(var_147_bool == 0) goto Label_179; // 0xb0 JumpB
	var_145_bool = 0; // 0xb1 MovB
	goto Label_180; // 0xb2 Jump
	
Label_180:
	func_723(var_144_string, var_145_bool); // 0xb4 NEW_2
	var_2_object = var_140_string; // 0xb6 TMov
	return 0; // 0xb7 Return
	
Label_179:
	var_145_bool = 1; // 0xb3 MovB
}


func_803(var_95_bool)
{
	var_97_int = 0; var_98_string = ""; // 0x324 PushV
	var_98_string = "ook9Littleboy1"; // 0x325 MovS
	func_772(var_97_int, var_98_string); // 0x326 NEW_2
	var_101_int = 0; // 0x328 PushI
	var_102_bool = var_97_int == var_101_int; // 0x329 Eq
	if(var_102_bool == 0) goto Label_813; // 0x32a JumpB
	var_95_bool = 1; // 0x32b MovB
	return 0; // 0x32c Return
	
Label_813:
	var_95_bool = 0; // 0x32d MovB
	return 0; // 0x32e Return
}


func_815()
{
	var_117_object = Obj(); var_118_object = Obj(); // 0x32f PushV
	var_119_int = 524; // 0x330 PushI
	var_120_int = 1; // 0x331 PushI
	var_121_int = 529816; // 0x332 PushI
	CreateDiaryEntry(var_118_object, var_119_int, var_120_int, var_121_int); // 0x333 Func
	var_122_bool = 0; var_123_object = Obj(); var_124_int = 0; // 0x335 PushV
	var_123_object = var_118_object; // 0x336 Mov
	var_124_int = 517; // 0x337 MovI
	func_841(var_122_bool, var_123_object, var_124_int); // 0x338 NEW_2
	return 2; // 0x33a Return
}


func_689()
{
	var_189_bool = 0; var_190_bool = 0; // 0x2b1 PushV
	var_191_bool = 1; // 0x2b2 PushB
	CameraSwitchToNormal(var_191_bool); // 0x2b3 Func
	var_192_bool = 0; // 0x2b5 PushV
	func_894(var_192_bool); // 0x2b6 NEW_2
	if(var_192_bool == 0) goto Label_698; // 0x2b8 JumpB
	goto Label_706; // 0x2b9 Jump
	
Label_706:
	return 2; // 0x2c2 Return
	
Label_698:
	var_193_string = "head"; // 0x2ba PushS
	HasAnimationTrack(var_190_bool, var_193_string); // 0x2bb Func
	var_194_bool = var_190_bool; // 0x2bd Push
	if(var_194_bool == 0) goto Label_706; // 0x2be JumpB
	var_195_string = "head"; // 0x2bf PushS
	UnlookAsync(var_195_string); // 0x2c0 Func
}


func_440(var_18_bool)
{
	var_18_bool = 1; // 0x1b8 MovB
	return 0; // 0x1b9 Return
}


func_442(var_0_object, var_1_object, var_2_object, var_3_string, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x1bb PushV
	func_615(var_23_bool); // 0x1bc NEW_2
	var_26_bool = var_23_bool == 0; // 0x1be Not
	if(var_26_bool == 0) goto Label_449; // 0x1bf JumpB
	return 0; // 0x1c0 Return
	
Label_449:
	var_27_string = "player"; // 0x1c1 PushS
	FindActor(var_17_bool, var_27_string); // 0x1c2 Func
	var_2_object = 0; // 0x1c4 TMovB
	var_3_string = 0; // 0x1c5 TMovB
	var_0_object = var_21_float; // 0x1c6 TMov
	var_1_object = var_22_float; // 0x1c7 TMov
	var_28_int = 10; // 0x1c8 PushI
	var_29_float = 1.0; // 0x1c9 PushF
	SetTimer(var_28_int, var_29_float); // 0x1ca Func
	func_521(); // 0x1cd NEW_2
	var_81_bool = var_3_string == 0; // 0x1cf Not
	if(var_81_bool == 0) goto Label_468; // 0x1d0 JumpB
	var_82_int = 10; // 0x1d1 PushI
	KillTimer(var_82_int); // 0x1d2 Func
	
Label_468:
	return 0; // 0x1d4 Return
}


func_828(var_131_object)
{
	var_132_object = Obj(); var_133_object = Obj(); // 0x33c PushV
	GetDiaryRoot(var_133_object); // 0x33d Func
	var_134_bool = var_133_object == 0; // 0x33f Not
	if(var_134_bool == 0) goto Label_838; // 0x340 JumpB
	var_135_string = "Can't retrieve diary root"; // 0x341 PushS
	Trace(var_135_string); // 0x342 Func
	var_131_object = 0; // 0x344 MovB
	return 2; // 0x345 Return
	
Label_838:
	var_131_object = var_133_object; // 0x346 Mov
	return 2; // 0x347 Return
}


func_707(var_163_string)
{
	var_164_bool = 0; var_165_float = 0; var_166_float = 0; var_167_bool = 0; var_168_float = 0; var_169_float = 0; // 0x2c3 PushV
	lshHasAnimation(var_167_bool, var_163_string); // 0x2c4 Func
	var_170_bool = var_167_bool; // 0x2c6 Push
	if(var_170_bool == 0) goto Label_718; // 0x2c7 JumpB
	lshGetAnimTimes(var_163_string, var_168_float, var_169_float); // 0x2c8 Func
	var_171_bool = 0; // 0x2ca PushB
	lshPlayAnimation(var_168_float, var_169_float, var_171_bool); // 0x2cb Func
	goto Label_722; // 0x2cd Jump
	
Label_722:
	return 6; // 0x2d2 Return
	
Label_718:
	var_172_string = "Can't find lsh animation : "; // 0x2ce PushS
	var_173_int = var_172_string + var_163_string; // 0x2cf Add
	Trace(var_173_int); // 0x2d0 Func
}


func_841(var_122_bool, var_123_object, var_124_int)
{
	var_125_object = Obj(); var_126_object = Obj(); var_127_int = 0; var_128_object = Obj(); var_129_object = Obj(); var_130_int = 0; // 0x349 PushV
	var_131_object = Obj(); // 0x34a PushV
	func_828(var_131_object); // 0x34b NEW_2
	var_128_object = var_131_object; // 0x34c Mov
	Find(var_124_int, var_129_object); // 0x34e ObjFunc
	var_136_bool = var_129_object == 0; // 0x350 Not
	if(var_136_bool == 0) goto Label_856; // 0x351 JumpB
	var_137_string = "Can't find diary parent with id: "; // 0x352 PushS
	var_138_int = var_137_string + var_124_int; // 0x353 Add
	Trace(var_138_int); // 0x354 Func
	var_122_bool = 0; // 0x356 MovB
	return 6; // 0x357 Return
	
Label_856:
	AddChild(var_123_object); // 0x358 ObjFunc
	var_139_int = 7; // 0x35a PushI
	SendWorldWndMessage(var_139_int); // 0x35b Func
	GetCategory(var_130_int); // 0x35d ObjFunc
	SetDiarySection(var_130_int); // 0x35f Func
	var_122_bool = 0; // 0x361 MovB
	return 6; // 0x362 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object; // 0x4b TMov
	var_1_object = var_88_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_94_int = 1; // 0x4e PushI
	if(var_94_int == 0) goto Label_132; // 0x4f JumpB
	var_95_bool = 0; var_96_object = Obj(); // 0x50 PushV
	var_96_object = var_1_object; // 0x51 MovT
	func_803(var_96_object); // 0x52 NEW_2
	if(var_95_bool == 0) goto Label_110; // 0x54 JumpB
	var_103_object = Obj(); var_104_object = Obj(); // 0x55 PushV
	var_103_object = var_1_object; // 0x56 MovT
	var_104_object = var_0_object; // 0x57 MovT
	func_777(); // 0x58 NEW_2
	var_107_object = Obj(); var_108_object = Obj(); // 0x5a PushV
	var_107_object = var_1_object; // 0x5b MovT
	var_108_object = var_0_object; // 0x5c MovT
	func_783(); // 0x5d NEW_2
	var_140_string = ""; // 0x5f PushV
	var_140_string = "Neutral"; // 0x60 MovS
	func_162(var_89_object, var_140_string); // 0x61 NEW_2
	var_157_int = 529790; // 0x63 PushI
	SetMessage(var_157_int); // 0x64 TObjFunc
	ClearReplies(); // 0x66 TObjFunc
	var_158_int = 529794; // 0x68 PushI
	var_159_int = 31253; // 0x69 PushI
	var_160_int = 31252; // 0x6a PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x6b TObjFunc
	goto Label_132; // 0x6d Jump
	
Label_132:
	var_161_bool = 0; // 0x84 PushV
	func_894(var_161_bool); // 0x85 NEW_2
	if(var_161_bool == 0) goto Label_147; // 0x87 JumpB
	
Label_136:
	lshWaitForAnimEnd(); // 0x88 Func
	var_162_string = var_3_string; // 0x8a PushT
	if(var_162_string == 0) goto Label_141; // 0x8b JumpB
	goto Label_146; // 0x8c Jump
	
Label_146:
	goto Label_161; // 0x92 Jump
	
Label_161:
	return 0; // 0xa1 Return
	
Label_141:
	var_163_string = ""; // 0x8d PushV
	var_163_string = var_2_object; // 0x8e MovT
	func_707(var_163_string); // 0x8f NEW_2
	goto Label_136; // 0x91 Jump
	
Label_147:
	var_174_string = "all"; // 0x93 PushS
	var_175_string = "idle"; // 0x94 PushS
	PlayAnimation(var_174_string, var_175_string); // 0x95 Func
	
Label_151:
	WaitForAnimEnd(); // 0x97 Func
	var_176_string = var_3_string; // 0x99 PushT
	if(var_176_string == 0) goto Label_156; // 0x9a JumpB
	goto Label_161; // 0x9b Jump
	
Label_156:
	var_177_string = "all"; // 0x9c PushS
	var_178_string = "idle"; // 0x9d PushS
	PlayAnimation(var_177_string, var_178_string); // 0x9e Func
	goto Label_151; // 0xa0 Jump
	
Label_110:
	var_179_string = ""; // 0x6e PushV
	var_179_string = "Neutral"; // 0x6f MovS
	func_162(var_89_object, var_179_string); // 0x70 NEW_2
	var_180_int = 529791; // 0x72 PushI
	SetMessage(var_180_int); // 0x73 TObjFunc
	ClearReplies(); // 0x75 TObjFunc
	var_181_int = 529792; // 0x77 PushI
	var_182_int = -1; // 0x78 PushI
	var_183_int = 31250; // 0x79 PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x7a TObjFunc
	var_184_int = 529793; // 0x7c PushI
	var_185_int = -1; // 0x7d PushI
	var_186_int = 31251; // 0x7e PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x7f TObjFunc
	goto Label_132; // 0x81 Jump
}


func_723(var_144_string, var_145_bool)
{
	var_148_bool = 0; var_149_float = 0; var_150_float = 0; var_151_bool = 0; var_152_float = 0; var_153_float = 0; // 0x2d3 PushV
	lshHasAnimation(var_151_bool, var_144_string); // 0x2d4 Func
	var_154_bool = var_151_bool; // 0x2d6 Push
	if(var_154_bool == 0) goto Label_733; // 0x2d7 JumpB
	lshGetAnimTimes(var_144_string, var_152_float, var_153_float); // 0x2d8 Func
	lshPlayAnimation(var_152_float, var_153_float, var_145_bool); // 0x2da Func
	goto Label_737; // 0x2dc Jump
	
Label_737:
	return 6; // 0x2e1 Return
	
Label_733:
	var_155_string = "Can't find lsh animation : "; // 0x2dd PushS
	var_156_int = var_155_string + var_144_string; // 0x2de Add
	Trace(var_156_int); // 0x2df Func
}


func_469(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x1d5 PushV
	var_18_bool = var_4_bool == 0; // 0x1d6 NullEq
	if(var_18_bool == 0) goto Label_474; // 0x1d7 JumpB
	var_15_bool = 0; // 0x1d8 MovB
	return 2; // 0x1d9 Return
	
Label_474:
	var_19_float = 0; var_20_object = Obj(); // 0x1da PushV
	var_20_object = var_4_bool; // 0x1db MovT
	func_607(var_20_object); // 0x1dc NEW_2
	var_17_float = sqrt(var_19_float); // 0x1de Sqrt2
	var_27_object = var_2_object; // 0x1df PushT
	if(var_27_object == 0) goto Label_482; // 0x1e0 JumpB
	var_17_float = var_17_float - var_1_object; // 0x1e1 Sub2
	
Label_482:
	var_15_bool = var_17_float < var_0_object; // 0x1e2 LT2
	return 2; // 0x1e3 Return
}


func_600(var_71_bool)
{
	var_71_bool = 1; // 0x258 MovB
	return 0; // 0x259 Return
}


func_602()
{
	StopAnimation(); // 0x25a Func
	StopGroup0(); // 0x25c Func
	return 0; // 0x25e Return
}


func_607(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x25f PushV
	GetPosition(var_24_cvector); // 0x260 Func
	GetPosition(var_25_cvector); // 0x262 ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x264 Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x265 Or2
	return 6; // 0x266 Return
}


func_738(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x2e2 PushV
	GetEyesHeight(var_32_float); // 0x2e3 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x2e5 MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x2e6 PushE
	var_34_float = var_32_float; // 0x2e7 Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x2e8 PopE
	var_35_string = "head"; // 0x2e9 PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x2ea Func
	return 4; // 0x2ec Return
}


func_869(var_79_int)
{
	var_80_int = 0; var_81_int = 0; // 0x365 PushV
	var_82_string = "branch"; // 0x366 PushS
	GetVariable(var_82_string, var_81_int); // 0x367 Func
	var_83_int = 0; // 0x369 PushI
	var_84_bool = var_81_int == var_83_int; // 0x36a Eq
	if(var_84_bool == 0) goto Label_879; // 0x36b JumpB
	var_79_int = 1; // 0x36c MovI
	return 2; // 0x36d Return
	
Label_879:
	var_85_int = 1; // 0x36f PushI
	var_86_bool = var_81_int == var_85_int; // 0x370 Eq
	if(var_86_bool == 0) goto Label_884; // 0x371 JumpB
	var_79_int = 2; // 0x372 MovI
	return 2; // 0x373 Return
	
Label_884:
	var_79_int = 3; // 0x374 MovI
	return 2; // 0x375 Return
}


func_615(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x267 PushV
	IsLoaded(var_25_bool); // 0x268 Func
	var_23_bool = var_25_bool; // 0x26a Mov
	return 2; // 0x26b Return
}


func_620(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x26c PushV
	GetPosition(var_40_cvector); // 0x26d ObjFunc
	GetEyesHeight(var_39_float); // 0x26f ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x271 PushE
	var_48_float = var_48_float + var_39_float; // 0x272 Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x273 PopE
	GetPosition(var_41_cvector); // 0x274 Func
	GetEyesHeight(var_39_float); // 0x276 Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x278 PushE
	var_49_float = var_49_float + var_39_float; // 0x279 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x27a PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x27b Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x27c PushE
	var_50_float = 0; // 0x27d MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x27e PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x27f Or
	var_52_float = sqrt(var_51_int); // 0x280 Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x281 Div2
	var_43_cvector = -var_42_cvector; // 0x282 Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x283 Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x284 PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x285 PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x286 Xor2
	func_762(var_54_cvector, var_55_cvector); // 0x287 NEW_2
	var_62_int = 25; // 0x289 PushI
	var_63_float = var_54_cvector * var_62_int; // 0x28a Mult
	var_64_int = var_53_float + var_63_float; // 0x28b Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x28c PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x28d Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x28e Add2
	IsOverrideActive(var_46_bool); // 0x28f Func
	var_66_bool = var_46_bool; // 0x291 Push
	if(var_66_bool == 0) goto Label_661; // 0x292 JumpB
	var_27_bool = 0; // 0x293 MovB
	return 18; // 0x294 Return
	
Label_661:
	StopWorld(); // 0x295 Func
	var_67_bool = 1; // 0x297 PushB
	CameraTransit(var_45_cvector, var_43_cvector, var_67_bool); // 0x298 Func
	var_68_float = GetByIndex(var_44_cvector, 0); // 0x29a PushE
	var_69_float = GetByIndex(var_44_cvector, 2); // 0x29b PushE
	Rotate(var_68_float, var_69_float); // 0x29c Func
	var_70_bool = 0; // 0x29e PushV
	func_894(var_70_bool); // 0x29f NEW_2
	if(var_70_bool == 0) goto Label_675; // 0x2a1 JumpB
	goto Label_683; // 0x2a2 Jump
	
Label_683:
	CameraWaitForPlayFinish(); // 0x2ab Func
	ResumeWorld(); // 0x2ad Func
	var_27_bool = 1; // 0x2af MovB
	return 18; // 0x2b0 Return
	
Label_675:
	var_71_string = "head"; // 0x2a3 PushS
	HasAnimationTrack(var_47_bool, var_71_string); // 0x2a4 Func
	var_72_bool = var_47_bool; // 0x2a6 Push
	if(var_72_bool == 0) goto Label_683; // 0x2a7 JumpB
	var_73_string = "head"; // 0x2a8 PushS
	LookAsyncCamera(var_73_string); // 0x2a9 Func
}


func_749()
{
	var_15_bool = 0; // 0x2ed PushV
	func_894(var_15_bool); // 0x2ee NEW_2
	if(var_15_bool == 0) goto Label_755; // 0x2f0 JumpB
	lshStopSpeech(); // 0x2f1 Func
	
Label_755:
	return 0; // 0x2f3 Return
}


func_756(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x2f4 PushV
	self(var_21_object); // 0x2f5 Func
	var_19_object = var_21_object; // 0x2f7 Mov
	return 2; // 0x2f8 Return
}


func_373(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0x175 PushV
	var_6_int = 0; // 0x176 TMovB
	
Label_375:
	var_18_int = 3; // 0x177 PushI
	rand(var_16_float, var_18_int); // 0x178 Func
	var_19_int = 3; // 0x17a PushI
	var_20_int = var_16_float + var_19_int; // 0x17b Add
	Sleep(var_20_int, var_17_bool); // 0x17c Func
	var_6_int = 1; // 0x17e TMovB
	var_21_float = 0; var_22_float = 0; // 0x17f PushV
	var_21_float = var_12_float; // 0x180 Mov
	var_22_float = var_13_float; // 0x181 Mov
	func_442(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x182 NEW_2
	var_6_int = 0; // 0x184 TMovB
	goto Label_375; // 0x185 Jump
}


func_886(var_76_int)
{
	var_76_int = 515560; // 0x376 MovI
	return 0; // 0x377 Return
}


func_888(var_75_int)
{
	var_75_int = 503345; // 0x378 MovI
	return 0; // 0x379 Return
}


func_762(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x2fa PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x2fb Or
	var_58_float = sqrt(var_59_int); // 0x2fc Sqrt2
	var_60_float = 0.0; // 0x2fd PushF
	var_61_bool = var_58_float < var_60_float; // 0x2fe LT
	if(var_61_bool == 0) goto Label_770; // 0x2ff JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x300 MovV
	return 2; // 0x301 Return
	
Label_770:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x302 Div2
	return 2; // 0x303 Return
}


func_507(var_2_object, var_3_string)
{
	func_602(); // 0x1fc NEW_2
	var_13_int = 10; // 0x1fe PushI
	KillTimer(var_13_int); // 0x1ff Func
	var_14_object = var_2_object; // 0x201 PushT
	if(var_14_object == 0) goto Label_519; // 0x202 JumpB
	var_15_string = "head"; // 0x203 PushS
	UnlookAsync(var_15_string); // 0x204 Func
	var_2_object = 0; // 0x206 TMovB
	
Label_519:
	var_3_string = 1; // 0x207 TMovB
	return 0; // 0x208 Return
}


func_892(var_78_string)
{
	var_78_string = "ui/NPC_Citizen3_b.png"; // 0x37c MovS
	return 0; // 0x37d Return
}


func_890(var_77_string)
{
	var_77_string = "ui/NPC_Citizen3.png"; // 0x37a MovS
	return 0; // 0x37b Return
}


