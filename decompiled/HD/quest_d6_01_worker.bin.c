task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xa0 PushI
	if(var_12_int == 0) goto Label_282; // 0xa1 JumpB
	func_613(); // 0xa3 NEW_2
	var_14_int = 4302; // 0xa5 PushI
	var_15_bool = var_11_object == var_14_int; // 0xa6 Eq
	if(var_15_bool == 0) goto Label_173; // 0xa7 JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xa8 PushV
	var_16_object = var_1_object; // 0xa9 MovT
	var_17_object = var_0_object; // 0xaa MovT
	func_669(); // 0xab NEW_2
	
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
	func_675(var_41_object); // 0xbb NEW_2
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
	func_667(var_84_bool); // 0x110 NEW_2
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
	func_602(var_27_object); // 0x168 NEW_2
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
	var_72_bool = var_25_bool == 0; // 0x7 Not
	if(var_72_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_73_int = 0; // 0xd PushV
	func_661(var_73_int); // 0xe NEW_2
	SetNPCName(var_73_int); // 0x10 ObjFunc
	var_74_int = 0; // 0x12 PushV
	func_659(var_74_int); // 0x13 NEW_2
	SetNPCDescription(var_74_int); // 0x15 ObjFunc
	var_75_string = ""; // 0x17 PushV
	func_663(var_75_string); // 0x18 NEW_2
	SetPhoto(var_75_string); // 0x1a ObjFunc
	var_76_string = ""; // 0x1c PushV
	func_665(var_76_string); // 0x1d NEW_2
	SetPhoto2(var_76_string); // 0x1f ObjFunc
	var_77_int = 0; // 0x21 PushV
	func_687(var_77_int); // 0x22 NEW_2
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
	func_553(); // 0x41 NEW_2
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
	func_642(var_37_int); // 0x18b NEW_2
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
	func_635(var_59_string, var_60_int); // 0x1a7 NEW_2
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


func_642(var_37_int)
{
	var_38_int = 0; var_39_bool = 0; var_40_int = 0; var_41_bool = 0; // 0x282 PushV
	var_40_int = 0; // 0x283 MovI
	
Label_644:
	var_42_string = "all"; // 0x284 PushS
	var_43_string = ""; var_44_int = 0; // 0x285 PushV
	var_44_int = var_40_int; // 0x286 Mov
	func_635(var_43_string, var_44_int); // 0x287 NEW_2
	HasAnimation(var_41_bool, var_42_string, var_43_string); // 0x289 Func
	var_48_bool = var_41_bool == 0; // 0x28b Not
	if(var_48_bool == 0) goto Label_654; // 0x28c JumpB
	goto Label_657; // 0x28d Jump
	
Label_657:
	var_37_int = var_40_int; // 0x291 Mov
	return 4; // 0x292 Return
	
Label_654:
	var_49_int = 1; // 0x28e PushI
	var_40_int = var_40_int + var_49_int; // 0x28f Add2
	goto Label_644; // 0x290 Jump
}


func_137(var_2_object, var_93_string)
{
	var_94_bool = 0; // 0x8a PushV
	func_667(var_94_bool); // 0x8b NEW_2
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
	func_587(var_97_string, var_98_bool); // 0x9b NEW_2
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
	var_110_int = 503950; // 0x54 PushI
	SetMessage(var_110_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_111_bool = 0; var_112_object = Obj(); // 0x59 PushV
	var_112_object = var_1_object; // 0x5a MovT
	func_675(var_112_object); // 0x5b NEW_2
	if(var_111_bool == 0) goto Label_99; // 0x5d JumpB
	var_119_int = 503951; // 0x5e PushI
	var_120_int = 4304; // 0x5f PushI
	var_121_int = 4302; // 0x60 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x61 TObjFunc
	
Label_99:
	var_122_int = 503952; // 0x63 PushI
	var_123_int = -1; // 0x64 PushI
	var_124_int = 4303; // 0x65 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x66 TObjFunc
	goto Label_107; // 0x68 Jump
	
Label_107:
	var_125_bool = 0; // 0x6b PushV
	func_667(var_125_bool); // 0x6c NEW_2
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
	func_571(var_127_string); // 0x76 NEW_2
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


func_587(var_97_string, var_98_bool)
{
	var_101_bool = 0; var_102_float = 0; var_103_float = 0; var_104_bool = 0; var_105_float = 0; var_106_float = 0; // 0x24b PushV
	lshHasAnimation(var_104_bool, var_97_string); // 0x24c Func
	var_107_bool = var_104_bool; // 0x24e Push
	if(var_107_bool == 0) goto Label_597; // 0x24f JumpB
	lshGetAnimTimes(var_97_string, var_105_float, var_106_float); // 0x250 Func
	lshPlayAnimation(var_105_float, var_106_float, var_98_bool); // 0x252 Func
	goto Label_601; // 0x254 Jump
	
Label_601:
	return 6; // 0x259 Return
	
Label_597:
	var_108_string = "Can't find lsh animation : "; // 0x255 PushS
	var_109_int = var_108_string + var_97_string; // 0x256 Add
	Trace(var_109_int); // 0x257 Func
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


func_466()
{
	StopAnimation(); // 0x1d2 Func
	StopGroup0(); // 0x1d4 Func
	return 0; // 0x1d6 Return
}


func_659(var_74_int)
{
	var_74_int = 515568; // 0x293 MovI
	return 0; // 0x294 Return
}


func_661(var_73_int)
{
	var_73_int = 503353; // 0x295 MovI
	return 0; // 0x296 Return
}


func_663(var_75_string)
{
	var_75_string = "ui/NPC_Citizen1.png"; // 0x297 MovS
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


func_665(var_76_string)
{
	var_76_string = "ui/NPC_Citizen1_b.png"; // 0x299 MovS
	return 0; // 0x29a Return
}


func_602(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x25a PushV
	GetEyesHeight(var_30_float); // 0x25b ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x25d MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x25e PushE
	var_32_float = var_30_float; // 0x25f Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x260 PopE
	var_33_string = "head"; // 0x261 PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x262 Func
	return 4; // 0x264 Return
}


func_667(var_68_bool)
{
	var_68_bool = 0; // 0x29b MovB
	return 0; // 0x29c Return
}


func_669()
{
	var_18_string = "ood6Worker1"; // 0x29e PushS
	var_19_int = 1; // 0x29f PushI
	SetVariable(var_18_string, var_19_int); // 0x2a0 Func
	return 0; // 0x2a2 Return
}


func_479(var_14_bool)
{
	var_15_bool = 0; var_16_bool = 0; // 0x1df PushV
	IsLoaded(var_16_bool); // 0x1e0 Func
	var_14_bool = var_16_bool; // 0x1e2 Mov
	return 2; // 0x1e3 Return
}


func_675(var_111_bool)
{
	var_113_int = 0; var_114_string = ""; // 0x2a4 PushV
	var_114_string = "ood6Worker1"; // 0x2a5 MovS
	func_630(var_113_int, var_114_string); // 0x2a6 NEW_2
	var_117_int = 0; // 0x2a8 PushI
	var_118_bool = var_113_int == var_117_int; // 0x2a9 Eq
	if(var_118_bool == 0) goto Label_685; // 0x2aa JumpB
	var_111_bool = 1; // 0x2ab MovB
	return 0; // 0x2ac Return
	
Label_685:
	var_111_bool = 0; // 0x2ad MovB
	return 0; // 0x2ae Return
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
	func_620(var_52_cvector, var_53_cvector); // 0x1ff NEW_2
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
	var_65_bool = 1; // 0x20f PushB
	CameraTransit(var_43_cvector, var_41_cvector, var_65_bool); // 0x210 Func
	var_66_float = GetByIndex(var_42_cvector, 0); // 0x212 PushE
	var_67_float = GetByIndex(var_42_cvector, 2); // 0x213 PushE
	Rotate(var_66_float, var_67_float); // 0x214 Func
	var_68_bool = 0; // 0x216 PushV
	func_667(var_68_bool); // 0x217 NEW_2
	if(var_68_bool == 0) goto Label_539; // 0x219 JumpB
	goto Label_547; // 0x21a Jump
	
Label_547:
	CameraWaitForPlayFinish(); // 0x223 Func
	ResumeWorld(); // 0x225 Func
	var_25_bool = 1; // 0x227 MovB
	return 18; // 0x228 Return
	
Label_539:
	var_69_string = "head"; // 0x21b PushS
	HasAnimationTrack(var_45_bool, var_69_string); // 0x21c Func
	var_70_bool = var_45_bool; // 0x21e Push
	if(var_70_bool == 0) goto Label_547; // 0x21f JumpB
	var_71_string = "head"; // 0x220 PushS
	LookAsyncCamera(var_71_string); // 0x221 Func
}


func_613()
{
	var_13_bool = 0; // 0x265 PushV
	func_667(var_13_bool); // 0x266 NEW_2
	if(var_13_bool == 0) goto Label_619; // 0x268 JumpB
	lshStopSpeech(); // 0x269 Func
	
Label_619:
	return 0; // 0x26b Return
}


func_635(var_43_string, var_44_int)
{
	var_45_string = ""; var_46_string = ""; // 0x27b PushV
	var_46_string = "idle"; // 0x27c MovS
	var_47_int = var_44_int; // 0x27d Push
	if(var_47_int == 0) goto Label_640; // 0x27e JumpB
	var_46_string = var_46_string + var_44_int; // 0x27f Add2
	
Label_640:
	var_43_string = var_46_string; // 0x280 Mov
	return 2; // 0x281 Return
}


func_553()
{
	var_145_bool = 0; var_146_bool = 0; // 0x229 PushV
	var_147_bool = 1; // 0x22a PushB
	CameraSwitchToNormal(var_147_bool); // 0x22b Func
	var_148_bool = 0; // 0x22d PushV
	func_667(var_148_bool); // 0x22e NEW_2
	if(var_148_bool == 0) goto Label_562; // 0x230 JumpB
	goto Label_570; // 0x231 Jump
	
Label_570:
	return 2; // 0x23a Return
	
Label_562:
	var_149_string = "head"; // 0x232 PushS
	HasAnimationTrack(var_146_bool, var_149_string); // 0x233 Func
	var_150_bool = var_146_bool; // 0x235 Push
	if(var_150_bool == 0) goto Label_570; // 0x236 JumpB
	var_151_string = "head"; // 0x237 PushS
	UnlookAsync(var_151_string); // 0x238 Func
}


func_620(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x26c PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x26d Or
	var_56_float = sqrt(var_57_int); // 0x26e Sqrt2
	var_58_float = 0.0; // 0x26f PushF
	var_59_bool = var_56_float < var_58_float; // 0x270 LT
	if(var_59_bool == 0) goto Label_628; // 0x271 JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x272 MovV
	return 2; // 0x273 Return
	
Label_628:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x274 Div2
	return 2; // 0x275 Return
}


func_687(var_77_int)
{
	var_78_int = 0; var_79_int = 0; // 0x2af PushV
	var_80_string = "branch"; // 0x2b0 PushS
	GetVariable(var_80_string, var_79_int); // 0x2b1 Func
	var_81_int = 0; // 0x2b3 PushI
	var_82_bool = var_79_int == var_81_int; // 0x2b4 Eq
	if(var_82_bool == 0) goto Label_697; // 0x2b5 JumpB
	var_77_int = 1; // 0x2b6 MovI
	return 2; // 0x2b7 Return
	
Label_697:
	var_83_int = 1; // 0x2b9 PushI
	var_84_bool = var_79_int == var_83_int; // 0x2ba Eq
	if(var_84_bool == 0) goto Label_702; // 0x2bb JumpB
	var_77_int = 2; // 0x2bc MovI
	return 2; // 0x2bd Return
	
Label_702:
	var_77_int = 3; // 0x2be MovI
	return 2; // 0x2bf Return
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


func_630(var_113_int, var_114_string)
{
	var_115_int = 0; var_116_int = 0; // 0x276 PushV
	GetVariable(var_114_string, var_116_int); // 0x277 Func
	var_113_int = var_116_int; // 0x279 Mov
	return 2; // 0x27a Return
}


func_571(var_127_string)
{
	var_128_bool = 0; var_129_float = 0; var_130_float = 0; var_131_bool = 0; var_132_float = 0; var_133_float = 0; // 0x23b PushV
	lshHasAnimation(var_131_bool, var_127_string); // 0x23c Func
	var_134_bool = var_131_bool; // 0x23e Push
	if(var_134_bool == 0) goto Label_582; // 0x23f JumpB
	lshGetAnimTimes(var_127_string, var_132_float, var_133_float); // 0x240 Func
	var_135_bool = 0; // 0x242 PushB
	lshPlayAnimation(var_132_float, var_133_float, var_135_bool); // 0x243 Func
	goto Label_586; // 0x245 Jump
	
Label_586:
	return 6; // 0x24a Return
	
Label_582:
	var_136_string = "Can't find lsh animation : "; // 0x246 PushS
	var_137_int = var_136_string + var_127_string; // 0x247 Add
	Trace(var_137_int); // 0x248 Func
}


