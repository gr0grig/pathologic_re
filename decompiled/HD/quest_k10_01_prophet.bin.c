task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xa5 PushI
	if(var_12_int == 0) goto Label_287; // 0xa6 JumpB
	func_616(); // 0xa8 NEW_2
	var_14_int = 28288; // 0xaa PushI
	var_15_bool = var_11_object == var_14_int; // 0xab Eq
	if(var_15_bool == 0) goto Label_178; // 0xac JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xad PushV
	var_16_object = var_1_object; // 0xae MovT
	var_17_object = var_0_object; // 0xaf MovT
	func_684(); // 0xb0 NEW_2
	
Label_178:
	var_24_int = 28285; // 0xb2 PushI
	var_25_bool = var_10_bool == var_24_int; // 0xb3 Eq
	if(var_25_bool == 0) goto Label_211; // 0xb4 JumpB
	var_26_string = ""; // 0xb5 PushV
	var_26_string = "Neutral"; // 0xb6 MovS
	func_142(var_11_object, var_26_string); // 0xb7 NEW_2
	var_43_int = 526993; // 0xb9 PushI
	SetMessage(var_43_int); // 0xba TObjFunc
	ClearReplies(); // 0xbc TObjFunc
	var_44_bool = 0; var_45_object = Obj(); // 0xbe PushV
	var_45_object = var_1_object; // 0xbf MovT
	func_691(var_45_object); // 0xc0 NEW_2
	if(var_44_bool == 0) goto Label_200; // 0xc2 JumpB
	var_52_int = 526994; // 0xc3 PushI
	var_53_int = 28287; // 0xc4 PushI
	var_54_int = 28286; // 0xc5 PushI
	AddReply(var_52_int, var_53_int, var_54_int); // 0xc6 TObjFunc
	
Label_200:
	var_55_int = 526997; // 0xc8 PushI
	var_56_int = -1; // 0xc9 PushI
	var_57_int = 28289; // 0xca PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0xcb TObjFunc
	var_58_int = 528127; // 0xcd PushI
	var_59_int = -1; // 0xce PushI
	var_60_int = 29475; // 0xcf PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0xd0 TObjFunc
	return 0; // 0xd2 Return
	
Label_211:
	var_61_int = 28287; // 0xd3 PushI
	var_62_bool = var_10_bool == var_61_int; // 0xd4 Eq
	if(var_62_bool == 0) goto Label_234; // 0xd5 JumpB
	var_63_string = ""; // 0xd6 PushV
	var_63_string = "Neutral"; // 0xd7 MovS
	func_142(var_11_object, var_63_string); // 0xd8 NEW_2
	var_64_int = 526995; // 0xda PushI
	SetMessage(var_64_int); // 0xdb TObjFunc
	ClearReplies(); // 0xdd TObjFunc
	var_65_int = 528128; // 0xdf PushI
	var_66_int = 29478; // 0xe0 PushI
	var_67_int = 29476; // 0xe1 PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0xe2 TObjFunc
	var_68_int = 528129; // 0xe4 PushI
	var_69_int = 29478; // 0xe5 PushI
	var_70_int = 29477; // 0xe6 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0xe7 TObjFunc
	return 0; // 0xe9 Return
	
Label_234:
	var_71_int = 29478; // 0xea PushI
	var_72_bool = var_10_bool == var_71_int; // 0xeb Eq
	if(var_72_bool == 0) goto Label_257; // 0xec JumpB
	var_73_string = ""; // 0xed PushV
	var_73_string = "Neutral"; // 0xee MovS
	func_142(var_11_object, var_73_string); // 0xef NEW_2
	var_74_int = 528130; // 0xf1 PushI
	SetMessage(var_74_int); // 0xf2 TObjFunc
	ClearReplies(); // 0xf4 TObjFunc
	var_75_int = 528131; // 0xf6 PushI
	var_76_int = 29481; // 0xf7 PushI
	var_77_int = 29479; // 0xf8 PushI
	AddReply(var_75_int, var_76_int, var_77_int); // 0xf9 TObjFunc
	var_78_int = 528132; // 0xfb PushI
	var_79_int = 29481; // 0xfc PushI
	var_80_int = 29480; // 0xfd PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0xfe TObjFunc
	return 0; // 0x100 Return
	
Label_257:
	var_81_int = 29481; // 0x101 PushI
	var_82_bool = var_10_bool == var_81_int; // 0x102 Eq
	if(var_82_bool == 0) goto Label_275; // 0x103 JumpB
	var_83_string = ""; // 0x104 PushV
	var_83_string = "Neutral"; // 0x105 MovS
	func_142(var_11_object, var_83_string); // 0x106 NEW_2
	var_84_int = 528133; // 0x108 PushI
	SetMessage(var_84_int); // 0x109 TObjFunc
	ClearReplies(); // 0x10b TObjFunc
	var_85_int = 526996; // 0x10d PushI
	var_86_int = -1; // 0x10e PushI
	var_87_int = 28288; // 0x10f PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0x110 TObjFunc
	return 0; // 0x112 Return
	
Label_275:
	var_3_string = 1; // 0x113 TMovB
	var_88_bool = 0; // 0x114 PushV
	func_658(var_88_bool); // 0x115 NEW_2
	if(var_88_bool == 0) goto Label_283; // 0x117 JumpB
	lshStopAnimation(); // 0x118 Func
	goto Label_285; // 0x11a Jump
	
Label_285:
	return 0; // 0x11d Return
	
Label_283:
	StopAnimation(); // 0x11b Func
	
Label_287:
	return 0; // 0x11f Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_374(var_9_object, var_10_object); // 0x12c NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0x12e PushV
	var_15_object = var_10_object; // 0x12f Mov
	TaskCall(0); // 0x130 TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x131 NEW_2
	TaskReturn(); // 0x132 TaskReturn
	return 0; // 0x134 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x160 PushI
	var_12_bool = var_10_int == var_11_int; // 0x161 Eq
	if(var_12_bool == 0) goto Label_373; // 0x162 JumpB
	var_13_bool = 0; // 0x163 PushV
	func_336(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x164 NEW_2
	if(var_13_bool == 0) goto Label_367; // 0x166 JumpB
	var_26_bool = var_2_object == 0; // 0x167 Not
	if(var_26_bool == 0) goto Label_366; // 0x168 JumpB
	var_27_object = Obj(); // 0x169 PushV
	var_27_object = var_4_bool; // 0x16a MovT
	func_605(var_27_object); // 0x16b NEW_2
	var_2_object = 1; // 0x16d TMovB
	
Label_366:
	goto Label_373; // 0x16e Jump
	
Label_373:
	return 0; // 0x175 Return
	
Label_367:
	var_34_object = var_2_object; // 0x16f PushT
	if(var_34_object == 0) goto Label_373; // 0x170 JumpB
	var_35_string = "head"; // 0x171 PushS
	UnlookAsync(var_35_string); // 0x172 Func
	var_2_object = 0; // 0x174 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_288:
	var_10_float = 0; var_11_float = 0; // 0x120 PushV
	var_10_float = 300; // 0x121 MovI
	var_11_float = 100; // 0x122 MovI
	func_309(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_float, var_11_float); // 0x123 NEW_2
	var_72_int = 3; // 0x125 PushI
	Sleep(var_72_int); // 0x126 Func
	goto Label_288; // 0x128 Jump
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 70.0; // 0x4 MovF
	func_487(var_26_object, var_27_float); // 0x5 NEW_2
	var_72_bool = var_25_bool == 0; // 0x7 Not
	if(var_72_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_73_int = 0; // 0xd PushV
	func_652(var_73_int); // 0xe NEW_2
	SetNPCName(var_73_int); // 0x10 ObjFunc
	var_74_int = 0; // 0x12 PushV
	func_650(var_74_int); // 0x13 NEW_2
	SetNPCDescription(var_74_int); // 0x15 ObjFunc
	var_75_string = ""; // 0x17 PushV
	func_654(var_75_string); // 0x18 NEW_2
	SetPhoto(var_75_string); // 0x1a ObjFunc
	var_76_string = ""; // 0x1c PushV
	func_656(var_76_string); // 0x1d NEW_2
	SetPhoto2(var_76_string); // 0x1f ObjFunc
	var_77_int = 0; // 0x21 PushV
	func_703(var_77_int); // 0x22 NEW_2
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
	var_146_bool = var_24_bool == 0; // 0x38 Not
	if(var_146_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_147_object = Obj(); // 0x3f PushV
	var_147_object = var_15_object; // 0x40 Mov
	func_556(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_388()
{
	var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_bool = 0; var_24_float = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_float = 0; var_32_bool = 0; // 0x184 PushV
	WaitForAnimEnd(); // 0x185 Func
	var_33_bool = 0; // 0x187 PushV
	func_482(var_33_bool); // 0x188 NEW_2
	var_34_bool = var_33_bool == 0; // 0x18a Not
	if(var_34_bool == 0) goto Label_397; // 0x18b JumpB
	return 14; // 0x18c Return
	
Label_397:
	var_35_int = 0; // 0x18d PushV
	func_667(var_35_int); // 0x18e NEW_2
	var_26_int = var_35_int; // 0x18f Mov
	var_27_int = 0; // 0x191 MovI
	
Label_402:
	var_48_bool = 0; // 0x192 PushV
	var_48_bool = 0; // 0x193 MovB
	var_49_int = 5; // 0x194 PushI
	var_50_bool = var_27_int < var_49_int; // 0x195 LT
	if(var_50_bool == 0) goto Label_412; // 0x196 JumpB
	var_51_bool = 0; // 0x197 PushV
	func_482(var_51_bool); // 0x198 NEW_2
	if(var_51_bool == 0) goto Label_412; // 0x19a JumpB
	var_48_bool = 1; // 0x19b MovB
	
Label_412:
	if(var_48_bool == 0) goto Label_464; // 0x19c JumpB
	var_52_int = 3; // 0x19d PushI
	irand(var_28_int, var_52_int); // 0x19e Func
	var_53_int = 0; // 0x1a0 PushI
	var_54_bool = var_28_int == var_53_int; // 0x1a1 Eq
	if(var_54_bool == 0) goto Label_436; // 0x1a2 JumpB
	var_55_int = var_26_int; // 0x1a3 Push
	if(var_55_int == 0) goto Label_435; // 0x1a4 JumpB
	irand(var_29_int, var_26_int); // 0x1a5 Func
	var_56_string = "all"; // 0x1a7 PushS
	var_57_string = ""; var_58_int = 0; // 0x1a8 PushV
	var_58_int = var_29_int; // 0x1a9 Mov
	func_660(var_57_string, var_58_int); // 0x1aa NEW_2
	PlayAnimation(var_56_string, var_57_string); // 0x1ac Func
	WaitForAnimEnd(var_30_bool); // 0x1ae Func
	var_59_bool = var_30_bool == 0; // 0x1b0 Not
	if(var_59_bool == 0) goto Label_435; // 0x1b1 JumpB
	goto Label_464; // 0x1b2 Jump
	
Label_464:
	ResetAAS(); // 0x1d0 Func
	return 14; // 0x1d2 Return
	
Label_435:
	goto Label_453; // 0x1b3 Jump
	
Label_453:
	var_60_bool = 0; // 0x1c5 PushV
	func_467(var_60_bool); // 0x1c6 NEW_2
	var_61_bool = var_60_bool == 0; // 0x1c8 Not
	if(var_61_bool == 0) goto Label_459; // 0x1c9 JumpB
	goto Label_464; // 0x1ca Jump
	
Label_459:
	ResetAAS(); // 0x1cb Func
	var_62_int = 1; // 0x1cd PushI
	var_27_int = var_27_int + var_62_int; // 0x1ce Add2
	goto Label_402; // 0x1cf Jump
	
Label_436:
	var_63_int = 1; // 0x1b4 PushI
	var_64_bool = var_28_int == var_63_int; // 0x1b5 Eq
	if(var_64_bool == 0) goto Label_450; // 0x1b6 JumpB
	var_65_int = 4; // 0x1b7 PushI
	rand(var_31_float, var_65_int); // 0x1b8 Func
	var_66_int = 1; // 0x1ba PushI
	var_67_int = var_31_float + var_66_int; // 0x1bb Add
	Sleep(var_67_int, var_32_bool); // 0x1bc Func
	var_68_bool = var_32_bool == 0; // 0x1be Not
	if(var_68_bool == 0) goto Label_449; // 0x1bf JumpB
	goto Label_464; // 0x1c0 Jump
	
Label_449:
	goto Label_453; // 0x1c1 Jump
	
Label_450:
	var_69_int = var_27_int; // 0x1c2 Push
	if(var_69_int == 0) goto Label_453; // 0x1c3 JumpB
	goto Label_464; // 0x1c4 Jump
}


func_650(var_74_int)
{
	var_74_int = 518716; // 0x28a MovI
	return 0; // 0x28b Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object; // 0x4b TMov
	var_1_object = var_86_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_92_int = 1; // 0x4e PushI
	if(var_92_int == 0) goto Label_112; // 0x4f JumpB
	var_93_string = ""; // 0x50 PushV
	var_93_string = "Neutral"; // 0x51 MovS
	func_142(var_87_object, var_93_string); // 0x52 NEW_2
	var_110_int = 526993; // 0x54 PushI
	SetMessage(var_110_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_111_bool = 0; var_112_object = Obj(); // 0x59 PushV
	var_112_object = var_1_object; // 0x5a MovT
	func_691(var_112_object); // 0x5b NEW_2
	if(var_111_bool == 0) goto Label_99; // 0x5d JumpB
	var_119_int = 526994; // 0x5e PushI
	var_120_int = 28287; // 0x5f PushI
	var_121_int = 28286; // 0x60 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x61 TObjFunc
	
Label_99:
	var_122_int = 526997; // 0x63 PushI
	var_123_int = -1; // 0x64 PushI
	var_124_int = 28289; // 0x65 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x66 TObjFunc
	var_125_int = 528127; // 0x68 PushI
	var_126_int = -1; // 0x69 PushI
	var_127_int = 29475; // 0x6a PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x6b TObjFunc
	goto Label_112; // 0x6d Jump
	
Label_112:
	var_128_bool = 0; // 0x70 PushV
	func_658(var_128_bool); // 0x71 NEW_2
	if(var_128_bool == 0) goto Label_127; // 0x73 JumpB
	
Label_116:
	lshWaitForAnimEnd(); // 0x74 Func
	var_129_string = var_3_string; // 0x76 PushT
	if(var_129_string == 0) goto Label_121; // 0x77 JumpB
	goto Label_126; // 0x78 Jump
	
Label_126:
	goto Label_141; // 0x7e Jump
	
Label_141:
	return 0; // 0x8d Return
	
Label_121:
	var_130_string = ""; // 0x79 PushV
	var_130_string = var_2_object; // 0x7a MovT
	func_574(var_130_string); // 0x7b NEW_2
	goto Label_116; // 0x7d Jump
	
Label_127:
	var_141_string = "all"; // 0x7f PushS
	var_142_string = "idle"; // 0x80 PushS
	PlayAnimation(var_141_string, var_142_string); // 0x81 Func
	
Label_131:
	WaitForAnimEnd(); // 0x83 Func
	var_143_string = var_3_string; // 0x85 PushT
	if(var_143_string == 0) goto Label_136; // 0x86 JumpB
	goto Label_141; // 0x87 Jump
	
Label_136:
	var_144_string = "all"; // 0x88 PushS
	var_145_string = "idle"; // 0x89 PushS
	PlayAnimation(var_144_string, var_145_string); // 0x8a Func
	goto Label_131; // 0x8c Jump
}


func_652(var_73_int)
{
	var_73_int = 518715; // 0x28c MovI
	return 0; // 0x28d Return
}


func_638(var_18_bool, var_19_string, var_20_string)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x27e PushV
	FindActor(var_22_object, var_19_string); // 0x27f Func
	var_23_bool = var_22_object == 0; // 0x281 NullEq
	if(var_23_bool == 0) goto Label_645; // 0x282 JumpB
	var_18_bool = 0; // 0x283 MovB
	return 2; // 0x284 Return
	
Label_645:
	Trigger(var_22_object, var_20_string); // 0x285 Func
	var_18_bool = 1; // 0x287 MovB
	return 2; // 0x288 Return
}


func_654(var_75_string)
{
	var_75_string = "ui/NPC_Prophet.png"; // 0x28e MovS
	return 0; // 0x28f Return
}


func_142(var_2_object, var_93_string)
{
	var_94_bool = 0; // 0x8f PushV
	func_658(var_94_bool); // 0x90 NEW_2
	var_95_bool = var_94_bool == 0; // 0x92 Not
	if(var_95_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_96_bool = var_93_string == var_2_object; // 0x95 Eq
	if(var_96_bool == 0) goto Label_152; // 0x96 JumpB
	return 0; // 0x97 Return
	
Label_152:
	var_97_string = ""; var_98_bool = 0; // 0x98 PushV
	var_97_string = var_93_string; // 0x99 Mov
	var_99_string = ""; // 0x9a PushS
	var_100_bool = var_93_string == var_99_string; // 0x9b Eq
	if(var_100_bool == 0) goto Label_159; // 0x9c JumpB
	var_98_bool = 0; // 0x9d MovB
	goto Label_160; // 0x9e Jump
	
Label_160:
	func_590(var_97_string, var_98_bool); // 0xa0 NEW_2
	var_2_object = var_93_string; // 0xa2 TMov
	return 0; // 0xa3 Return
	
Label_159:
	var_98_bool = 1; // 0x9f MovB
}


func_656(var_76_string)
{
	var_76_string = "ui/NPC_Prophet_b.png"; // 0x290 MovS
	return 0; // 0x291 Return
}


func_590(var_97_string, var_98_bool)
{
	var_101_bool = 0; var_102_float = 0; var_103_float = 0; var_104_bool = 0; var_105_float = 0; var_106_float = 0; // 0x24e PushV
	lshHasAnimation(var_104_bool, var_97_string); // 0x24f Func
	var_107_bool = var_104_bool; // 0x251 Push
	if(var_107_bool == 0) goto Label_600; // 0x252 JumpB
	lshGetAnimTimes(var_97_string, var_105_float, var_106_float); // 0x253 Func
	lshPlayAnimation(var_105_float, var_106_float, var_98_bool); // 0x255 Func
	goto Label_604; // 0x257 Jump
	
Label_604:
	return 6; // 0x25c Return
	
Label_600:
	var_108_string = "Can't find lsh animation : "; // 0x258 PushS
	var_109_int = var_108_string + var_97_string; // 0x259 Add
	Trace(var_109_int); // 0x25a Func
}


func_658(var_68_bool)
{
	var_68_bool = 0; // 0x292 MovB
	return 0; // 0x293 Return
}


func_336(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x150 PushV
	var_16_bool = var_4_bool == 0; // 0x151 NullEq
	if(var_16_bool == 0) goto Label_341; // 0x152 JumpB
	var_13_bool = 0; // 0x153 MovB
	return 2; // 0x154 Return
	
Label_341:
	var_17_float = 0; var_18_object = Obj(); // 0x155 PushV
	var_18_object = var_4_bool; // 0x156 MovT
	func_474(var_18_object); // 0x157 NEW_2
	var_15_float = sqrt(var_17_float); // 0x159 Sqrt2
	var_25_object = var_2_object; // 0x15a PushT
	if(var_25_object == 0) goto Label_349; // 0x15b JumpB
	var_15_float = var_15_float - var_1_object; // 0x15c Sub2
	
Label_349:
	var_13_bool = var_15_float < var_0_object; // 0x15d LT2
	return 2; // 0x15e Return
}


func_660(var_41_string, var_42_int)
{
	var_43_string = ""; var_44_string = ""; // 0x294 PushV
	var_44_string = "idle"; // 0x295 MovS
	var_45_int = var_42_int; // 0x296 Push
	if(var_45_int == 0) goto Label_665; // 0x297 JumpB
	var_44_string = var_44_string + var_42_int; // 0x298 Add2
	
Label_665:
	var_41_string = var_44_string; // 0x299 Mov
	return 2; // 0x29a Return
}


func_467(var_60_bool)
{
	var_60_bool = 1; // 0x1d3 MovB
	return 0; // 0x1d4 Return
}


func_469()
{
	StopAnimation(); // 0x1d5 Func
	StopGroup0(); // 0x1d7 Func
	return 0; // 0x1d9 Return
}


func_474(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x1da PushV
	GetPosition(var_22_cvector); // 0x1db Func
	GetPosition(var_23_cvector); // 0x1dd ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x1df Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x1e0 Or2
	return 6; // 0x1e1 Return
}


func_667(var_35_int)
{
	var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_bool = 0; // 0x29b PushV
	var_38_int = 0; // 0x29c MovI
	
Label_669:
	var_40_string = "all"; // 0x29d PushS
	var_41_string = ""; var_42_int = 0; // 0x29e PushV
	var_42_int = var_38_int; // 0x29f Mov
	func_660(var_41_string, var_42_int); // 0x2a0 NEW_2
	HasAnimation(var_39_bool, var_40_string, var_41_string); // 0x2a2 Func
	var_46_bool = var_39_bool == 0; // 0x2a4 Not
	if(var_46_bool == 0) goto Label_679; // 0x2a5 JumpB
	goto Label_682; // 0x2a6 Jump
	
Label_682:
	var_35_int = var_38_int; // 0x2aa Mov
	return 4; // 0x2ab Return
	
Label_679:
	var_47_int = 1; // 0x2a7 PushI
	var_38_int = var_38_int + var_47_int; // 0x2a8 Add2
	goto Label_669; // 0x2a9 Jump
}


func_605(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x25d PushV
	GetEyesHeight(var_30_float); // 0x25e ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x260 MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x261 PushE
	var_32_float = var_30_float; // 0x262 Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x263 PopE
	var_33_string = "head"; // 0x264 PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x265 Func
	return 4; // 0x267 Return
}


func_482(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0; // 0x1e2 PushV
	IsLoaded(var_14_bool); // 0x1e3 Func
	var_12_bool = var_14_bool; // 0x1e5 Mov
	return 2; // 0x1e6 Return
}


func_487(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x1e7 PushV
	GetPosition(var_38_cvector); // 0x1e8 ObjFunc
	GetEyesHeight(var_37_float); // 0x1ea ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x1ec PushE
	var_46_float = var_46_float + var_37_float; // 0x1ed Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x1ee PopE
	GetPosition(var_39_cvector); // 0x1ef Func
	GetEyesHeight(var_37_float); // 0x1f1 Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x1f3 PushE
	var_47_float = var_47_float + var_37_float; // 0x1f4 Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x1f5 PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x1f6 Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x1f7 PushE
	var_48_float = 0; // 0x1f8 MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x1f9 PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x1fa Or
	var_50_float = sqrt(var_49_int); // 0x1fb Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x1fc Div2
	var_41_cvector = -var_40_cvector; // 0x1fd Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x1fe Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x1ff PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x200 PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x201 Xor2
	func_623(var_52_cvector, var_53_cvector); // 0x202 NEW_2
	var_60_int = 25; // 0x204 PushI
	var_61_float = var_52_cvector * var_60_int; // 0x205 Mult
	var_62_int = var_51_float + var_61_float; // 0x206 Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x207 PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x208 Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x209 Add2
	IsOverrideActive(var_44_bool); // 0x20a Func
	var_64_bool = var_44_bool; // 0x20c Push
	if(var_64_bool == 0) goto Label_528; // 0x20d JumpB
	var_25_bool = 0; // 0x20e MovB
	return 18; // 0x20f Return
	
Label_528:
	StopWorld(); // 0x210 Func
	var_65_bool = 1; // 0x212 PushB
	CameraTransit(var_43_cvector, var_41_cvector, var_65_bool); // 0x213 Func
	var_66_float = GetByIndex(var_42_cvector, 0); // 0x215 PushE
	var_67_float = GetByIndex(var_42_cvector, 2); // 0x216 PushE
	Rotate(var_66_float, var_67_float); // 0x217 Func
	var_68_bool = 0; // 0x219 PushV
	func_658(var_68_bool); // 0x21a NEW_2
	if(var_68_bool == 0) goto Label_542; // 0x21c JumpB
	goto Label_550; // 0x21d Jump
	
Label_550:
	CameraWaitForPlayFinish(); // 0x226 Func
	ResumeWorld(); // 0x228 Func
	var_25_bool = 1; // 0x22a MovB
	return 18; // 0x22b Return
	
Label_542:
	var_69_string = "head"; // 0x21e PushS
	HasAnimationTrack(var_45_bool, var_69_string); // 0x21f Func
	var_70_bool = var_45_bool; // 0x221 Push
	if(var_70_bool == 0) goto Label_550; // 0x222 JumpB
	var_71_string = "head"; // 0x223 PushS
	LookAsyncCamera(var_71_string); // 0x224 Func
}


func_616()
{
	var_13_bool = 0; // 0x268 PushV
	func_658(var_13_bool); // 0x269 NEW_2
	if(var_13_bool == 0) goto Label_622; // 0x26b JumpB
	lshStopSpeech(); // 0x26c Func
	
Label_622:
	return 0; // 0x26e Return
}


func_556()
{
	var_148_bool = 0; var_149_bool = 0; // 0x22c PushV
	var_150_bool = 1; // 0x22d PushB
	CameraSwitchToNormal(var_150_bool); // 0x22e Func
	var_151_bool = 0; // 0x230 PushV
	func_658(var_151_bool); // 0x231 NEW_2
	if(var_151_bool == 0) goto Label_565; // 0x233 JumpB
	goto Label_573; // 0x234 Jump
	
Label_573:
	return 2; // 0x23d Return
	
Label_565:
	var_152_string = "head"; // 0x235 PushS
	HasAnimationTrack(var_149_bool, var_152_string); // 0x236 Func
	var_153_bool = var_149_bool; // 0x238 Push
	if(var_153_bool == 0) goto Label_573; // 0x239 JumpB
	var_154_string = "head"; // 0x23a PushS
	UnlookAsync(var_154_string); // 0x23b Func
}


func_684()
{
	var_18_bool = 0; var_19_string = ""; var_20_string = ""; // 0x2ad PushV
	var_19_string = "quest_k10_01"; // 0x2ae MovS
	var_20_string = "teleport"; // 0x2af MovS
	func_638(var_18_bool, var_19_string, var_20_string); // 0x2b0 NEW_2
	return 0; // 0x2b2 Return
}


func_623(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x26f PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x270 Or
	var_56_float = sqrt(var_57_int); // 0x271 Sqrt2
	var_58_float = 0.0; // 0x272 PushF
	var_59_bool = var_56_float < var_58_float; // 0x273 LT
	if(var_59_bool == 0) goto Label_631; // 0x274 JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x275 MovV
	return 2; // 0x276 Return
	
Label_631:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x277 Div2
	return 2; // 0x278 Return
}


func_691(var_111_bool)
{
	var_113_int = 0; var_114_string = ""; // 0x2b4 PushV
	var_114_string = "k10q01"; // 0x2b5 MovS
	func_633(var_113_int, var_114_string); // 0x2b6 NEW_2
	var_117_int = 7; // 0x2b8 PushI
	var_118_bool = var_113_int == var_117_int; // 0x2b9 Eq
	if(var_118_bool == 0) goto Label_701; // 0x2ba JumpB
	var_111_bool = 1; // 0x2bb MovB
	return 0; // 0x2bc Return
	
Label_701:
	var_111_bool = 0; // 0x2bd MovB
	return 0; // 0x2be Return
}


func_309(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_10_float, var_11_float)
{
	var_12_bool = 0; // 0x136 PushV
	func_482(var_12_bool); // 0x137 NEW_2
	var_15_bool = var_12_bool == 0; // 0x139 Not
	if(var_15_bool == 0) goto Label_316; // 0x13a JumpB
	return 0; // 0x13b Return
	
Label_316:
	var_16_string = "player"; // 0x13c PushS
	FindActor(var_9_object, var_16_string); // 0x13d Func
	var_2_object = 0; // 0x13f TMovB
	var_3_string = 0; // 0x140 TMovB
	var_0_object = var_10_float; // 0x141 TMov
	var_1_object = var_11_float; // 0x142 TMov
	var_17_int = 10; // 0x143 PushI
	var_18_float = 1.0; // 0x144 PushF
	SetTimer(var_17_int, var_18_float); // 0x145 Func
	func_388(); // 0x148 NEW_2
	var_70_bool = var_3_string == 0; // 0x14a Not
	if(var_70_bool == 0) goto Label_335; // 0x14b JumpB
	var_71_int = 10; // 0x14c PushI
	KillTimer(var_71_int); // 0x14d Func
	
Label_335:
	return 0; // 0x14f Return
}


func_374(var_2_object, var_3_string)
{
	func_469(); // 0x177 NEW_2
	var_11_int = 10; // 0x179 PushI
	KillTimer(var_11_int); // 0x17a Func
	var_12_object = var_2_object; // 0x17c PushT
	if(var_12_object == 0) goto Label_386; // 0x17d JumpB
	var_13_string = "head"; // 0x17e PushS
	UnlookAsync(var_13_string); // 0x17f Func
	var_2_object = 0; // 0x181 TMovB
	
Label_386:
	var_3_string = 1; // 0x182 TMovB
	return 0; // 0x183 Return
}


func_633(var_113_int, var_114_string)
{
	var_115_int = 0; var_116_int = 0; // 0x279 PushV
	GetVariable(var_114_string, var_116_int); // 0x27a Func
	var_113_int = var_116_int; // 0x27c Mov
	return 2; // 0x27d Return
}


func_574(var_130_string)
{
	var_131_bool = 0; var_132_float = 0; var_133_float = 0; var_134_bool = 0; var_135_float = 0; var_136_float = 0; // 0x23e PushV
	lshHasAnimation(var_134_bool, var_130_string); // 0x23f Func
	var_137_bool = var_134_bool; // 0x241 Push
	if(var_137_bool == 0) goto Label_585; // 0x242 JumpB
	lshGetAnimTimes(var_130_string, var_135_float, var_136_float); // 0x243 Func
	var_138_bool = 0; // 0x245 PushB
	lshPlayAnimation(var_135_float, var_136_float, var_138_bool); // 0x246 Func
	goto Label_589; // 0x248 Jump
	
Label_589:
	return 6; // 0x24d Return
	
Label_585:
	var_139_string = "Can't find lsh animation : "; // 0x249 PushS
	var_140_int = var_139_string + var_130_string; // 0x24a Add
	Trace(var_140_int); // 0x24b Func
}


func_703(var_77_int)
{
	var_78_int = 0; var_79_int = 0; // 0x2bf PushV
	var_80_string = "branch"; // 0x2c0 PushS
	GetVariable(var_80_string, var_79_int); // 0x2c1 Func
	var_81_int = 0; // 0x2c3 PushI
	var_82_bool = var_79_int == var_81_int; // 0x2c4 Eq
	if(var_82_bool == 0) goto Label_713; // 0x2c5 JumpB
	var_77_int = 1; // 0x2c6 MovI
	return 2; // 0x2c7 Return
	
Label_713:
	var_83_int = 1; // 0x2c9 PushI
	var_84_bool = var_79_int == var_83_int; // 0x2ca Eq
	if(var_84_bool == 0) goto Label_718; // 0x2cb JumpB
	var_77_int = 2; // 0x2cc MovI
	return 2; // 0x2cd Return
	
Label_718:
	var_77_int = 3; // 0x2ce MovI
	return 2; // 0x2cf Return
}


