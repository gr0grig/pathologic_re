task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xa0 PushI
	if(var_12_int == 0) goto Label_282; // 0xa1 JumpB
	func_611(); // 0xa3 NEW_2
	var_14_int = 4302; // 0xa5 PushI
	var_15_bool = var_11_object == var_14_int; // 0xa6 Eq
	if(var_15_bool == 0) goto Label_173; // 0xa7 JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xa8 PushV
	var_16_object = var_1_object; // 0xa9 MovT
	var_17_object = var_0_object; // 0xaa MovT
	func_667(); // 0xab NEW_2
	
Label_173:
	var_20_int = 4301; // 0xad PushI
	var_21_bool = var_10_bool == var_20_int; // 0xae Eq
	if(var_21_bool == 0) goto Label_201; // 0xaf JumpB
	var_22_string = ""; // 0xb0 PushV
	var_22_string = "Neutral"; // 0xb1 MovS
	func_137(var_11_object, var_22_string); // 0xb2 NEW_2
	var_39_int = 503950; // 0xb4 PushI
	SetMessage(var_39_int); // 0xb5 TObjFunc
	ClearReplies(); // 0xb7 TObjFunc
	var_40_bool = 0; var_41_object = Obj(); // 0xb9 PushV
	var_41_object = var_1_object; // 0xba MovT
	func_673(var_41_object); // 0xbb NEW_2
	if(var_40_bool == 0) goto Label_195; // 0xbd JumpB
	var_48_int = 503951; // 0xbe PushI
	var_49_int = 4304; // 0xbf PushI
	var_50_int = 4302; // 0xc0 PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0xc1 TObjFunc
	
Label_195:
	var_51_int = 503952; // 0xc3 PushI
	var_52_int = -1; // 0xc4 PushI
	var_53_int = 4303; // 0xc5 PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0xc6 TObjFunc
	return 0; // 0xc8 Return
	
Label_201:
	var_54_int = 4304; // 0xc9 PushI
	var_55_bool = var_10_bool == var_54_int; // 0xca Eq
	if(var_55_bool == 0) goto Label_224; // 0xcb JumpB
	var_56_string = ""; // 0xcc PushV
	var_56_string = "Neutral"; // 0xcd MovS
	func_137(var_11_object, var_56_string); // 0xce NEW_2
	var_57_int = 503953; // 0xd0 PushI
	SetMessage(var_57_int); // 0xd1 TObjFunc
	ClearReplies(); // 0xd3 TObjFunc
	var_58_int = 503954; // 0xd5 PushI
	var_59_int = 4306; // 0xd6 PushI
	var_60_int = 4305; // 0xd7 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0xd8 TObjFunc
	var_61_int = 503957; // 0xda PushI
	var_62_int = 4309; // 0xdb PushI
	var_63_int = 4308; // 0xdc PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0xdd TObjFunc
	return 0; // 0xdf Return
	
Label_224:
	var_64_int = 4309; // 0xe0 PushI
	var_65_bool = var_10_bool == var_64_int; // 0xe1 Eq
	if(var_65_bool == 0) goto Label_247; // 0xe2 JumpB
	var_66_string = ""; // 0xe3 PushV
	var_66_string = "Neutral"; // 0xe4 MovS
	func_137(var_11_object, var_66_string); // 0xe5 NEW_2
	var_67_int = 503958; // 0xe7 PushI
	SetMessage(var_67_int); // 0xe8 TObjFunc
	ClearReplies(); // 0xea TObjFunc
	var_68_int = 503959; // 0xec PushI
	var_69_int = -1; // 0xed PushI
	var_70_int = 4310; // 0xee PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0xef TObjFunc
	var_71_int = 503960; // 0xf1 PushI
	var_72_int = 4306; // 0xf2 PushI
	var_73_int = 4311; // 0xf3 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0xf4 TObjFunc
	return 0; // 0xf6 Return
	
Label_247:
	var_74_int = 4306; // 0xf7 PushI
	var_75_bool = var_10_bool == var_74_int; // 0xf8 Eq
	if(var_75_bool == 0) goto Label_270; // 0xf9 JumpB
	var_76_string = ""; // 0xfa PushV
	var_76_string = "Neutral"; // 0xfb MovS
	func_137(var_11_object, var_76_string); // 0xfc NEW_2
	var_77_int = 503955; // 0xfe PushI
	SetMessage(var_77_int); // 0xff TObjFunc
	ClearReplies(); // 0x101 TObjFunc
	var_78_int = 503956; // 0x103 PushI
	var_79_int = -1; // 0x104 PushI
	var_80_int = 4307; // 0x105 PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0x106 TObjFunc
	var_81_int = 503961; // 0x108 PushI
	var_82_int = -1; // 0x109 PushI
	var_83_int = 4313; // 0x10a PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x10b TObjFunc
	return 0; // 0x10d Return
	
Label_270:
	var_3_string = 1; // 0x10e TMovB
	var_84_bool = 0; // 0x10f PushV
	func_665(var_84_bool); // 0x110 NEW_2
	if(var_84_bool == 0) goto Label_278; // 0x112 JumpB
	lshStopAnimation(); // 0x113 Func
	goto Label_280; // 0x115 Jump
	
Label_280:
	return 0; // 0x118 Return
	
Label_278:
	StopAnimation(); // 0x116 Func
	
Label_282:
	return 0; // 0x11a Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_371(var_9_object, var_10_object); // 0x129 NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0x12b PushV
	var_15_object = var_10_object; // 0x12c Mov
	TaskCall(0); // 0x12d TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x12e NEW_2
	TaskReturn(); // 0x12f TaskReturn
	return 0; // 0x131 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x15d PushI
	var_12_bool = var_10_int == var_11_int; // 0x15e Eq
	if(var_12_bool == 0) goto Label_370; // 0x15f JumpB
	var_13_bool = 0; // 0x160 PushV
	func_333(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x161 NEW_2
	if(var_13_bool == 0) goto Label_364; // 0x163 JumpB
	var_26_bool = var_2_object == 0; // 0x164 Not
	if(var_26_bool == 0) goto Label_363; // 0x165 JumpB
	var_27_object = Obj(); // 0x166 PushV
	var_27_object = var_4_bool; // 0x167 MovT
	func_600(var_27_object); // 0x168 NEW_2
	var_2_object = 1; // 0x16a TMovB
	
Label_363:
	goto Label_370; // 0x16b Jump
	
Label_370:
	return 0; // 0x172 Return
	
Label_364:
	var_34_object = var_2_object; // 0x16c PushT
	if(var_34_object == 0) goto Label_370; // 0x16d JumpB
	var_35_string = "head"; // 0x16e PushS
	UnlookAsync(var_35_string); // 0x16f Func
	var_2_object = 0; // 0x171 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_283:
	var_10_bool = 1; // 0x11b PushB
	if(var_10_bool == 0) goto Label_294; // 0x11c JumpB
	var_11_int = 1; // 0x11d PushI
	Sleep(var_11_int); // 0x11e Func
	var_12_float = 0; var_13_float = 0; // 0x120 PushV
	var_12_float = 300; // 0x121 MovI
	var_13_float = 100; // 0x122 MovI
	func_306(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_12_float, var_13_float); // 0x123 NEW_2
	goto Label_283; // 0x125 Jump
	
Label_294:
	return 0; // 0x126 Return
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 70.0; // 0x4 MovF
	func_484(var_26_object, var_27_float); // 0x5 NEW_2
	var_71_bool = var_25_bool == 0; // 0x7 Not
	if(var_71_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_72_int = 0; // 0xd PushV
	func_659(var_72_int); // 0xe NEW_2
	SetNPCName(var_72_int); // 0x10 ObjFunc
	var_73_int = 0; // 0x12 PushV
	func_657(var_73_int); // 0x13 NEW_2
	SetNPCDescription(var_73_int); // 0x15 ObjFunc
	var_74_string = ""; // 0x17 PushV
	func_661(var_74_string); // 0x18 NEW_2
	SetPhoto(var_74_string); // 0x1a ObjFunc
	var_75_string = ""; // 0x1c PushV
	func_663(var_75_string); // 0x1d NEW_2
	SetPhoto2(var_75_string); // 0x1f ObjFunc
	var_76_int = 0; // 0x21 PushV
	func_685(var_76_int); // 0x22 NEW_2
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
	func_552(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_385()
{
	var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_float = 0; var_27_bool = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_float = 0; var_34_bool = 0; // 0x181 PushV
	WaitForAnimEnd(); // 0x182 Func
	var_35_bool = 0; // 0x184 PushV
	func_479(var_35_bool); // 0x185 NEW_2
	var_36_bool = var_35_bool == 0; // 0x187 Not
	if(var_36_bool == 0) goto Label_394; // 0x188 JumpB
	return 14; // 0x189 Return
	
Label_394:
	var_37_int = 0; // 0x18a PushV
	func_640(var_37_int); // 0x18b NEW_2
	var_28_int = var_37_int; // 0x18c Mov
	var_29_int = 0; // 0x18e MovI
	
Label_399:
	var_50_bool = 0; // 0x18f PushV
	var_50_bool = 0; // 0x190 MovB
	var_51_int = 5; // 0x191 PushI
	var_52_bool = var_29_int < var_51_int; // 0x192 LT
	if(var_52_bool == 0) goto Label_409; // 0x193 JumpB
	var_53_bool = 0; // 0x194 PushV
	func_479(var_53_bool); // 0x195 NEW_2
	if(var_53_bool == 0) goto Label_409; // 0x197 JumpB
	var_50_bool = 1; // 0x198 MovB
	
Label_409:
	if(var_50_bool == 0) goto Label_461; // 0x199 JumpB
	var_54_int = 3; // 0x19a PushI
	irand(var_30_int, var_54_int); // 0x19b Func
	var_55_int = 0; // 0x19d PushI
	var_56_bool = var_30_int == var_55_int; // 0x19e Eq
	if(var_56_bool == 0) goto Label_433; // 0x19f JumpB
	var_57_int = var_28_int; // 0x1a0 Push
	if(var_57_int == 0) goto Label_432; // 0x1a1 JumpB
	irand(var_31_int, var_28_int); // 0x1a2 Func
	var_58_string = "all"; // 0x1a4 PushS
	var_59_string = ""; var_60_int = 0; // 0x1a5 PushV
	var_60_int = var_31_int; // 0x1a6 Mov
	func_633(var_59_string, var_60_int); // 0x1a7 NEW_2
	PlayAnimation(var_58_string, var_59_string); // 0x1a9 Func
	WaitForAnimEnd(var_32_bool); // 0x1ab Func
	var_61_bool = var_32_bool == 0; // 0x1ad Not
	if(var_61_bool == 0) goto Label_432; // 0x1ae JumpB
	goto Label_461; // 0x1af Jump
	
Label_461:
	ResetAAS(); // 0x1cd Func
	return 14; // 0x1cf Return
	
Label_432:
	goto Label_450; // 0x1b0 Jump
	
Label_450:
	var_62_bool = 0; // 0x1c2 PushV
	func_464(var_62_bool); // 0x1c3 NEW_2
	var_63_bool = var_62_bool == 0; // 0x1c5 Not
	if(var_63_bool == 0) goto Label_456; // 0x1c6 JumpB
	goto Label_461; // 0x1c7 Jump
	
Label_456:
	ResetAAS(); // 0x1c8 Func
	var_64_int = 1; // 0x1ca PushI
	var_29_int = var_29_int + var_64_int; // 0x1cb Add2
	goto Label_399; // 0x1cc Jump
	
Label_433:
	var_65_int = 1; // 0x1b1 PushI
	var_66_bool = var_30_int == var_65_int; // 0x1b2 Eq
	if(var_66_bool == 0) goto Label_447; // 0x1b3 JumpB
	var_67_int = 4; // 0x1b4 PushI
	rand(var_33_float, var_67_int); // 0x1b5 Func
	var_68_int = 1; // 0x1b7 PushI
	var_69_int = var_33_float + var_68_int; // 0x1b8 Add
	Sleep(var_69_int, var_34_bool); // 0x1b9 Func
	var_70_bool = var_34_bool == 0; // 0x1bb Not
	if(var_70_bool == 0) goto Label_446; // 0x1bc JumpB
	goto Label_461; // 0x1bd Jump
	
Label_446:
	goto Label_450; // 0x1be Jump
	
Label_447:
	var_71_int = var_29_int; // 0x1bf Push
	if(var_71_int == 0) goto Label_450; // 0x1c0 JumpB
	goto Label_461; // 0x1c1 Jump
}


func_640(var_37_int)
{
	var_38_int = 0; var_39_bool = 0; var_40_int = 0; var_41_bool = 0; // 0x280 PushV
	var_40_int = 0; // 0x281 MovI
	
Label_642:
	var_42_string = "all"; // 0x282 PushS
	var_43_string = ""; var_44_int = 0; // 0x283 PushV
	var_44_int = var_40_int; // 0x284 Mov
	func_633(var_43_string, var_44_int); // 0x285 NEW_2
	HasAnimation(var_41_bool, var_42_string, var_43_string); // 0x287 Func
	var_48_bool = var_41_bool == 0; // 0x289 Not
	if(var_48_bool == 0) goto Label_652; // 0x28a JumpB
	goto Label_655; // 0x28b Jump
	
Label_655:
	var_37_int = var_40_int; // 0x28f Mov
	return 4; // 0x290 Return
	
Label_652:
	var_49_int = 1; // 0x28c PushI
	var_40_int = var_40_int + var_49_int; // 0x28d Add2
	goto Label_642; // 0x28e Jump
}


func_137(var_2_object, var_92_string)
{
	var_93_bool = 0; // 0x8a PushV
	func_665(var_93_bool); // 0x8b NEW_2
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
	func_585(var_96_string, var_97_bool); // 0x9b NEW_2
	var_2_object = var_92_string; // 0x9d TMov
	return 0; // 0x9e Return
	
Label_154:
	var_97_bool = 1; // 0x9a MovB
}


func_585(var_96_string, var_97_bool)
{
	var_100_bool = 0; var_101_float = 0; var_102_float = 0; var_103_bool = 0; var_104_float = 0; var_105_float = 0; // 0x249 PushV
	lshHasAnimation(var_103_bool, var_96_string); // 0x24a Func
	var_106_bool = var_103_bool; // 0x24c Push
	if(var_106_bool == 0) goto Label_595; // 0x24d JumpB
	lshGetAnimTimes(var_96_string, var_104_float, var_105_float); // 0x24e Func
	lshPlayAnimation(var_104_float, var_105_float, var_97_bool); // 0x250 Func
	goto Label_599; // 0x252 Jump
	
Label_599:
	return 6; // 0x257 Return
	
Label_595:
	var_107_string = "Can't find lsh animation : "; // 0x253 PushS
	var_108_int = var_107_string + var_96_string; // 0x254 Add
	Trace(var_108_int); // 0x255 Func
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
	var_109_int = 503950; // 0x54 PushI
	SetMessage(var_109_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_110_bool = 0; var_111_object = Obj(); // 0x59 PushV
	var_111_object = var_1_object; // 0x5a MovT
	func_673(var_111_object); // 0x5b NEW_2
	if(var_110_bool == 0) goto Label_99; // 0x5d JumpB
	var_118_int = 503951; // 0x5e PushI
	var_119_int = 4304; // 0x5f PushI
	var_120_int = 4302; // 0x60 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x61 TObjFunc
	
Label_99:
	var_121_int = 503952; // 0x63 PushI
	var_122_int = -1; // 0x64 PushI
	var_123_int = 4303; // 0x65 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x66 TObjFunc
	goto Label_107; // 0x68 Jump
	
Label_107:
	var_124_bool = 0; // 0x6b PushV
	func_665(var_124_bool); // 0x6c NEW_2
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
	func_569(var_126_string); // 0x76 NEW_2
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


func_333(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x14d PushV
	var_16_bool = var_4_bool == 0; // 0x14e NullEq
	if(var_16_bool == 0) goto Label_338; // 0x14f JumpB
	var_13_bool = 0; // 0x150 MovB
	return 2; // 0x151 Return
	
Label_338:
	var_17_float = 0; var_18_object = Obj(); // 0x152 PushV
	var_18_object = var_4_bool; // 0x153 MovT
	func_471(var_18_object); // 0x154 NEW_2
	var_15_float = sqrt(var_17_float); // 0x156 Sqrt2
	var_25_object = var_2_object; // 0x157 PushT
	if(var_25_object == 0) goto Label_346; // 0x158 JumpB
	var_15_float = var_15_float - var_1_object; // 0x159 Sub2
	
Label_346:
	var_13_bool = var_15_float < var_0_object; // 0x15a LT2
	return 2; // 0x15b Return
}


func_464(var_62_bool)
{
	var_62_bool = 1; // 0x1d0 MovB
	return 0; // 0x1d1 Return
}


func_657(var_73_int)
{
	var_73_int = 515568; // 0x291 MovI
	return 0; // 0x292 Return
}


func_466()
{
	StopAnimation(); // 0x1d2 Func
	StopGroup0(); // 0x1d4 Func
	return 0; // 0x1d6 Return
}


func_659(var_72_int)
{
	var_72_int = 503353; // 0x293 MovI
	return 0; // 0x294 Return
}


func_661(var_74_string)
{
	var_74_string = "ui/NPC_Citizen1.png"; // 0x295 MovS
	return 0; // 0x296 Return
}


func_663(var_75_string)
{
	var_75_string = "ui/NPC_Citizen1_b.png"; // 0x297 MovS
	return 0; // 0x298 Return
}


func_471(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x1d7 PushV
	GetPosition(var_22_cvector); // 0x1d8 Func
	GetPosition(var_23_cvector); // 0x1da ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x1dc Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x1dd Or2
	return 6; // 0x1de Return
}


func_665(var_67_bool)
{
	var_67_bool = 0; // 0x299 MovB
	return 0; // 0x29a Return
}


func_600(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x258 PushV
	GetEyesHeight(var_30_float); // 0x259 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x25b MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x25c PushE
	var_32_float = var_30_float; // 0x25d Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x25e PopE
	var_33_string = "head"; // 0x25f PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x260 Func
	return 4; // 0x262 Return
}


func_667()
{
	var_18_string = "ood6Worker1"; // 0x29c PushS
	var_19_int = 1; // 0x29d PushI
	SetVariable(var_18_string, var_19_int); // 0x29e Func
	return 0; // 0x2a0 Return
}


func_479(var_14_bool)
{
	var_15_bool = 0; var_16_bool = 0; // 0x1df PushV
	IsLoaded(var_16_bool); // 0x1e0 Func
	var_14_bool = var_16_bool; // 0x1e2 Mov
	return 2; // 0x1e3 Return
}


func_673(var_110_bool)
{
	var_112_int = 0; var_113_string = ""; // 0x2a2 PushV
	var_113_string = "ood6Worker1"; // 0x2a3 MovS
	func_628(var_112_int, var_113_string); // 0x2a4 NEW_2
	var_116_int = 0; // 0x2a6 PushI
	var_117_bool = var_112_int == var_116_int; // 0x2a7 Eq
	if(var_117_bool == 0) goto Label_683; // 0x2a8 JumpB
	var_110_bool = 1; // 0x2a9 MovB
	return 0; // 0x2aa Return
	
Label_683:
	var_110_bool = 0; // 0x2ab MovB
	return 0; // 0x2ac Return
}


func_611()
{
	var_13_bool = 0; // 0x263 PushV
	func_665(var_13_bool); // 0x264 NEW_2
	if(var_13_bool == 0) goto Label_617; // 0x266 JumpB
	lshStopSpeech(); // 0x267 Func
	
Label_617:
	return 0; // 0x269 Return
}


func_484(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x1e4 PushV
	GetPosition(var_38_cvector); // 0x1e5 ObjFunc
	GetEyesHeight(var_37_float); // 0x1e7 ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x1e9 PushE
	var_46_float = var_46_float + var_37_float; // 0x1ea Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x1eb PopE
	GetPosition(var_39_cvector); // 0x1ec Func
	GetEyesHeight(var_37_float); // 0x1ee Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x1f0 PushE
	var_47_float = var_47_float + var_37_float; // 0x1f1 Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x1f2 PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x1f3 Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x1f4 PushE
	var_48_float = 0; // 0x1f5 MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x1f6 PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x1f7 Or
	var_50_float = sqrt(var_49_int); // 0x1f8 Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x1f9 Div2
	var_41_cvector = -var_40_cvector; // 0x1fa Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x1fb Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x1fc PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x1fd PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x1fe Xor2
	func_618(var_52_cvector, var_53_cvector); // 0x1ff NEW_2
	var_60_int = 25; // 0x201 PushI
	var_61_float = var_52_cvector * var_60_int; // 0x202 Mult
	var_62_int = var_51_float + var_61_float; // 0x203 Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x204 PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x205 Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x206 Add2
	IsOverrideActive(var_44_bool); // 0x207 Func
	var_64_bool = var_44_bool; // 0x209 Push
	if(var_64_bool == 0) goto Label_525; // 0x20a JumpB
	var_25_bool = 0; // 0x20b MovB
	return 18; // 0x20c Return
	
Label_525:
	StopWorld(); // 0x20d Func
	CameraTransit(var_43_cvector, var_41_cvector); // 0x20f Func
	var_65_float = GetByIndex(var_42_cvector, 0); // 0x211 PushE
	var_66_float = GetByIndex(var_42_cvector, 2); // 0x212 PushE
	Rotate(var_65_float, var_66_float); // 0x213 Func
	var_67_bool = 0; // 0x215 PushV
	func_665(var_67_bool); // 0x216 NEW_2
	if(var_67_bool == 0) goto Label_538; // 0x218 JumpB
	goto Label_546; // 0x219 Jump
	
Label_546:
	CameraWaitForPlayFinish(); // 0x222 Func
	ResumeWorld(); // 0x224 Func
	var_25_bool = 1; // 0x226 MovB
	return 18; // 0x227 Return
	
Label_538:
	var_68_string = "head"; // 0x21a PushS
	HasAnimationTrack(var_45_bool, var_68_string); // 0x21b Func
	var_69_bool = var_45_bool; // 0x21d Push
	if(var_69_bool == 0) goto Label_546; // 0x21e JumpB
	var_70_string = "head"; // 0x21f PushS
	LookAsyncCamera(var_70_string); // 0x220 Func
}


func_552()
{
	var_144_bool = 0; var_145_bool = 0; // 0x228 PushV
	CameraSwitchToNormal(); // 0x229 Func
	var_146_bool = 0; // 0x22b PushV
	func_665(var_146_bool); // 0x22c NEW_2
	if(var_146_bool == 0) goto Label_560; // 0x22e JumpB
	goto Label_568; // 0x22f Jump
	
Label_568:
	return 2; // 0x238 Return
	
Label_560:
	var_147_string = "head"; // 0x230 PushS
	HasAnimationTrack(var_145_bool, var_147_string); // 0x231 Func
	var_148_bool = var_145_bool; // 0x233 Push
	if(var_148_bool == 0) goto Label_568; // 0x234 JumpB
	var_149_string = "head"; // 0x235 PushS
	UnlookAsync(var_149_string); // 0x236 Func
}


func_618(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x26a PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x26b Or
	var_56_float = sqrt(var_57_int); // 0x26c Sqrt2
	var_58_float = 0.0; // 0x26d PushF
	var_59_bool = var_56_float < var_58_float; // 0x26e LT
	if(var_59_bool == 0) goto Label_626; // 0x26f JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x270 MovV
	return 2; // 0x271 Return
	
Label_626:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x272 Div2
	return 2; // 0x273 Return
}


func_685(var_76_int)
{
	var_77_int = 0; var_78_int = 0; // 0x2ad PushV
	var_79_string = "branch"; // 0x2ae PushS
	GetVariable(var_79_string, var_78_int); // 0x2af Func
	var_80_int = 0; // 0x2b1 PushI
	var_81_bool = var_78_int == var_80_int; // 0x2b2 Eq
	if(var_81_bool == 0) goto Label_695; // 0x2b3 JumpB
	var_76_int = 1; // 0x2b4 MovI
	return 2; // 0x2b5 Return
	
Label_695:
	var_82_int = 1; // 0x2b7 PushI
	var_83_bool = var_78_int == var_82_int; // 0x2b8 Eq
	if(var_83_bool == 0) goto Label_700; // 0x2b9 JumpB
	var_76_int = 2; // 0x2ba MovI
	return 2; // 0x2bb Return
	
Label_700:
	var_76_int = 3; // 0x2bc MovI
	return 2; // 0x2bd Return
}


func_633(var_43_string, var_44_int)
{
	var_45_string = ""; var_46_string = ""; // 0x279 PushV
	var_46_string = "idle"; // 0x27a MovS
	var_47_int = var_44_int; // 0x27b Push
	if(var_47_int == 0) goto Label_638; // 0x27c JumpB
	var_46_string = var_46_string + var_44_int; // 0x27d Add2
	
Label_638:
	var_43_string = var_46_string; // 0x27e Mov
	return 2; // 0x27f Return
}


func_306(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_12_float, var_13_float)
{
	var_14_bool = 0; // 0x133 PushV
	func_479(var_14_bool); // 0x134 NEW_2
	var_17_bool = var_14_bool == 0; // 0x136 Not
	if(var_17_bool == 0) goto Label_313; // 0x137 JumpB
	return 0; // 0x138 Return
	
Label_313:
	var_18_string = "player"; // 0x139 PushS
	FindActor(var_9_object, var_18_string); // 0x13a Func
	var_2_object = 0; // 0x13c TMovB
	var_3_string = 0; // 0x13d TMovB
	var_0_object = var_12_float; // 0x13e TMov
	var_1_object = var_13_float; // 0x13f TMov
	var_19_int = 10; // 0x140 PushI
	var_20_float = 1.0; // 0x141 PushF
	SetTimer(var_19_int, var_20_float); // 0x142 Func
	func_385(); // 0x145 NEW_2
	var_72_bool = var_3_string == 0; // 0x147 Not
	if(var_72_bool == 0) goto Label_332; // 0x148 JumpB
	var_73_int = 10; // 0x149 PushI
	KillTimer(var_73_int); // 0x14a Func
	
Label_332:
	return 0; // 0x14c Return
}


func_371(var_2_object, var_3_string)
{
	func_466(); // 0x174 NEW_2
	var_11_int = 10; // 0x176 PushI
	KillTimer(var_11_int); // 0x177 Func
	var_12_object = var_2_object; // 0x179 PushT
	if(var_12_object == 0) goto Label_383; // 0x17a JumpB
	var_13_string = "head"; // 0x17b PushS
	UnlookAsync(var_13_string); // 0x17c Func
	var_2_object = 0; // 0x17e TMovB
	
Label_383:
	var_3_string = 1; // 0x17f TMovB
	return 0; // 0x180 Return
}


func_628(var_112_int, var_113_string)
{
	var_114_int = 0; var_115_int = 0; // 0x274 PushV
	GetVariable(var_113_string, var_115_int); // 0x275 Func
	var_112_int = var_115_int; // 0x277 Mov
	return 2; // 0x278 Return
}


func_569(var_126_string)
{
	var_127_bool = 0; var_128_float = 0; var_129_float = 0; var_130_bool = 0; var_131_float = 0; var_132_float = 0; // 0x239 PushV
	lshHasAnimation(var_130_bool, var_126_string); // 0x23a Func
	var_133_bool = var_130_bool; // 0x23c Push
	if(var_133_bool == 0) goto Label_580; // 0x23d JumpB
	lshGetAnimTimes(var_126_string, var_131_float, var_132_float); // 0x23e Func
	var_134_bool = 0; // 0x240 PushB
	lshPlayAnimation(var_131_float, var_132_float, var_134_bool); // 0x241 Func
	goto Label_584; // 0x243 Jump
	
Label_584:
	return 6; // 0x248 Return
	
Label_580:
	var_135_string = "Can't find lsh animation : "; // 0x244 PushS
	var_136_int = var_135_string + var_126_string; // 0x245 Add
	Trace(var_136_int); // 0x246 Func
}


