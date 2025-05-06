task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 1; // 0x85 PushI
	if(var_12_int == 0) goto Label_263; // 0x86 JumpB
	func_1020(); // 0x88 Call
	var_14_int = 12062; // 0x8a PushI
	var_15_bool = var_11_bool == var_14_int; // 0x8b Eq
	if(var_15_bool == 0) goto Label_156; // 0x8c JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0x8d PushV
	var_16_object = var_1_object; // 0x8e MovT
	var_17_object = var_0_object; // 0x8f MovT
	func_1113(); // 0x90 Call
	var_52_object = Obj(); var_53_object = Obj(); // 0x92 PushV
	var_52_object = var_1_object; // 0x93 MovT
	var_53_object = var_0_object; // 0x94 MovT
	func_1132(var_53_object); // 0x95 Call
	var_71_object = Obj(); var_72_object = Obj(); // 0x97 PushV
	var_71_object = var_1_object; // 0x98 MovT
	var_72_object = var_0_object; // 0x99 MovT
	func_1107(); // 0x9a Call
	
Label_156:
	var_75_int = 12052; // 0x9c PushI
	var_76_bool = var_10_cvector == var_75_int; // 0x9d Eq
	if(var_76_bool == 0) goto Label_174; // 0x9e JumpB
	var_77_string = ""; // 0x9f PushV
	var_77_string = "Neutral"; // 0xa0 MovS
	func_116(var_11_bool, var_77_string); // 0xa1 Call
	var_92_int = 10904; // 0xa3 PushI
	SetMessage(var_92_int); // 0xa4 TObjFunc
	ClearReplies(); // 0xa6 TObjFunc
	var_93_int = 10905; // 0xa8 PushI
	var_94_int = 12054; // 0xa9 PushI
	var_95_int = 12053; // 0xaa PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0xab TObjFunc
	return 0; // 0xad Return
	
Label_174:
	var_96_int = 12054; // 0xae PushI
	var_97_bool = var_10_cvector == var_96_int; // 0xaf Eq
	if(var_97_bool == 0) goto Label_192; // 0xb0 JumpB
	var_98_string = ""; // 0xb1 PushV
	var_98_string = "Neutral"; // 0xb2 MovS
	func_116(var_11_bool, var_98_string); // 0xb3 Call
	var_99_int = 10906; // 0xb5 PushI
	SetMessage(var_99_int); // 0xb6 TObjFunc
	ClearReplies(); // 0xb8 TObjFunc
	var_100_int = 10907; // 0xba PushI
	var_101_int = 12056; // 0xbb PushI
	var_102_int = 12055; // 0xbc PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0xbd TObjFunc
	return 0; // 0xbf Return
	
Label_192:
	var_103_int = 12056; // 0xc0 PushI
	var_104_bool = var_10_cvector == var_103_int; // 0xc1 Eq
	if(var_104_bool == 0) goto Label_210; // 0xc2 JumpB
	var_105_string = ""; // 0xc3 PushV
	var_105_string = "Neutral"; // 0xc4 MovS
	func_116(var_11_bool, var_105_string); // 0xc5 Call
	var_106_int = 10908; // 0xc7 PushI
	SetMessage(var_106_int); // 0xc8 TObjFunc
	ClearReplies(); // 0xca TObjFunc
	var_107_int = 10909; // 0xcc PushI
	var_108_int = 12058; // 0xcd PushI
	var_109_int = 12057; // 0xce PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0xcf TObjFunc
	return 0; // 0xd1 Return
	
Label_210:
	var_110_int = 12058; // 0xd2 PushI
	var_111_bool = var_10_cvector == var_110_int; // 0xd3 Eq
	if(var_111_bool == 0) goto Label_233; // 0xd4 JumpB
	var_112_string = ""; // 0xd5 PushV
	var_112_string = "Neutral"; // 0xd6 MovS
	func_116(var_11_bool, var_112_string); // 0xd7 Call
	var_113_int = 10910; // 0xd9 PushI
	SetMessage(var_113_int); // 0xda TObjFunc
	ClearReplies(); // 0xdc TObjFunc
	var_114_int = 10911; // 0xde PushI
	var_115_int = 12061; // 0xdf PushI
	var_116_int = 12059; // 0xe0 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0xe1 TObjFunc
	var_117_int = 10912; // 0xe3 PushI
	var_118_int = 12061; // 0xe4 PushI
	var_119_int = 12060; // 0xe5 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0xe6 TObjFunc
	return 0; // 0xe8 Return
	
Label_233:
	var_120_int = 12061; // 0xe9 PushI
	var_121_bool = var_10_cvector == var_120_int; // 0xea Eq
	if(var_121_bool == 0) goto Label_251; // 0xeb JumpB
	var_122_string = ""; // 0xec PushV
	var_122_string = "Neutral"; // 0xed MovS
	func_116(var_11_bool, var_122_string); // 0xee Call
	var_123_int = 10913; // 0xf0 PushI
	SetMessage(var_123_int); // 0xf1 TObjFunc
	ClearReplies(); // 0xf3 TObjFunc
	var_124_int = 10914; // 0xf5 PushI
	var_125_int = -1; // 0xf6 PushI
	var_126_int = 12062; // 0xf7 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0xf8 TObjFunc
	return 0; // 0xfa Return
	
Label_251:
	var_3_string = 1; // 0xfb TMovB
	var_127_bool = 0; // 0xfc PushV
	func_1222(var_127_bool); // 0xfd Call
	if(var_127_bool == 0) goto Label_259; // 0xff JumpB
	lshStopAnimation(); // 0x100 Func
	goto Label_261; // 0x102 Jump
	
Label_261:
	return 0; // 0x105 Return
	
Label_259:
	StopAnimation(); // 0x103 Func
	
Label_263:
	return 0; // 0x107 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 0; var_12_object = Obj(); // 0x10d PushV
	var_12_object = var_10_bool; // 0x10e Mov
	TaskCall(0); // 0x10f TaskCall
	func_0(var_13_object, var_11_int, var_12_object); // 0x110 Call
	TaskReturn(); // 0x111 TaskReturn
	TaskCall(3); // 0x114 TaskCall
	func_281(); // 0x115 Call
	TaskReturn(); // 0x116 TaskReturn
	return 0; // 0x118 Return
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_bool = 0; var_12_object = Obj(); // 0x128 PushV
	var_12_object = var_10_bool; // 0x129 Mov
	func_1259(var_11_bool, var_12_object); // 0x12a Call
	if(var_11_bool == 0) goto Label_308; // 0x12c JumpB
	func_373(var_9_cvector, var_10_bool); // 0x12e Call
	var_47_object = Obj(); // 0x130 PushV
	var_47_object = var_10_bool; // 0x131 Mov
	func_1266(var_47_object); // 0x132 Call
	
Label_308:
	return 0; // 0x134 Return
}


task_3_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool)
{
	RequestClearPath(var_10_bool); // 0x16f Func
	return 0; // 0x171 Return
}


task_3_event_28(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	Stop(); // 0x172 Func
	return 0; // 0x174 Return
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool)
{
	func_373(var_9_cvector, var_10_bool); // 0x17e Call
	var_11_object = Obj(); // 0x180 PushV
	var_11_object = var_10_bool; // 0x181 Mov
	func_1253(); // 0x182 Call
	return 0; // 0x184 Return
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_bool = 0; var_12_object = Obj(); // 0x188 PushV
	var_12_object = var_10_bool; // 0x189 Mov
	func_1259(var_11_bool, var_12_object); // 0x18a Call
	if(var_11_bool == 0) goto Label_404; // 0x18c JumpB
	func_474(); // 0x18e Call
	var_47_object = Obj(); // 0x190 PushV
	var_47_object = var_10_bool; // 0x191 Mov
	func_1266(var_47_object); // 0x192 Call
	
Label_404:
	return 0; // 0x194 Return
}


task_5_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_int)
{
	var_11_cvector = CVector(0,0,0); var_12_float = 0; var_13_cvector = CVector(0,0,0); var_14_float = 0; var_15_cvector = CVector(0,0,0); var_16_float = 0; var_17_cvector = CVector(0,0,0); var_18_float = 0; // 0x23d PushV
	var_19_int = 120; // 0x23e PushI
	var_20_bool = var_10_int != var_19_int; // 0x23f Neq
	if(var_20_bool == 0) goto Label_578; // 0x240 JumpB
	return 8; // 0x241 Return
	
Label_578:
	var_21_bool = var_0_object == 0; // 0x242 NullEq
	if(var_21_bool == 0) goto Label_587; // 0x243 JumpB
	Stop(); // 0x244 Func
	var_22_int = 1; // 0x246 PushI
	KillTimer(var_22_int); // 0x247 Func
	var_2_object = 1; // 0x249 TMovB
	goto Label_624; // 0x24a Jump
	
Label_624:
	return 8; // 0x270 Return
	
Label_587:
	GetDirection(var_15_cvector); // 0x24b Func
	var_23_float = 7000.0; // 0x24d PushF
	FindDirLength(var_16_float, var_15_cvector, var_23_float); // 0x24e Func
	var_24_cvector = CVector(0,0,0); var_25_float = 0; // 0x250 PushV
	var_25_float = 1.74533; // 0x251 MovF
	func_479(var_24_cvector, var_25_float); // 0x252 Call
	var_17_cvector = var_24_cvector; // 0x253 Mov
	var_18_float = var_17_cvector | var_17_cvector; // 0x255 Or2
	var_54_bool = 0; // 0x256 PushV
	var_54_bool = 0; // 0x257 MovB
	var_55_float = 10000.0; // 0x258 PushF
	var_56_bool = var_18_float >= var_55_float; // 0x259 GE
	if(var_56_bool == 0) goto Label_617; // 0x25a JumpB
	var_57_bool = 0; // 0x25b PushV
	var_57_bool = 1; // 0x25c MovB
	var_58_float = var_16_float * var_16_float; // 0x25d Mult
	var_59_float = 2.25; // 0x25e PushF
	var_60_float = var_58_float * var_59_float; // 0x25f Mult
	var_61_bool = var_18_float >= var_60_float; // 0x260 GE
	if(var_61_bool == 0) goto Label_615; // 0x261 JumpB
	var_62_bool = 0; // 0x262 PushV
	func_641(var_57_bool, var_62_bool); // 0x263 Call
	if(var_62_bool == 0) goto Label_615; // 0x265 JumpB
	var_57_bool = 0; // 0x266 MovB
	
Label_615:
	if(var_57_bool == 0) goto Label_617; // 0x267 JumpB
	var_54_bool = 1; // 0x268 MovB
	
Label_617:
	if(var_54_bool == 0) goto Label_624; // 0x269 JumpB
	Stop(); // 0x26a Func
	var_82_cvector = CVector(0,0,0); // 0x26c PushV
	func_781(var_82_cvector); // 0x26d Call
	var_1_object = var_82_cvector + var_17_cvector; // 0x26f Add2
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	func_625(var_10_object); // 0x27a Call
	var_12_object = Obj(); // 0x27c PushV
	var_12_object = var_10_object; // 0x27d Mov
	func_1253(); // 0x27e Call
	return 0; // 0x280 Return
}


task_6_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	return 0; // 0x308 Return
}


task_6_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_string)
{
	return 0; // 0x30a Return
}


task_6_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	return 0; // 0x30c Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0; // 0x4d1 PushV
	var_14_object = var_10_object; // 0x4d2 Mov
	var_15_int = var_11_int; // 0x4d3 Mov
	var_16_float = var_12_float; // 0x4d4 Mov
	func_870(var_15_int, var_16_float); // 0x4d5 Call
	return 0; // 0x4d7 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_string)
{
	var_12_float = 0; var_13_float = 0; // 0x4d8 PushV
	var_14_string = "health"; // 0x4d9 PushS
	var_15_bool = var_11_string == var_14_string; // 0x4da Eq
	if(var_15_bool == 0) goto Label_1252; // 0x4db JumpB
	var_16_string = "health"; // 0x4dc PushS
	GetProperty(var_16_string, var_13_float); // 0x4dd Func
	var_17_int = 0; // 0x4df PushI
	var_18_bool = var_13_float <= var_17_int; // 0x4e0 LE
	if(var_18_bool == 0) goto Label_1252; // 0x4e1 JumpB
	SignalDeath(var_10_object); // 0x4e2 Func
	
Label_1252:
	return 2; // 0x4e4 Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	var_11_object = Obj(); // 0x4e6 PushV
	var_11_object = var_10_object; // 0x4e7 Mov
	func_1224(var_11_object); // 0x4e8 Call
	return 0; // 0x4ea Return
}


event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0; // 0x4fa PushV
	IsPlayerActor(var_10_object, var_12_bool); // 0x4fb Func
	var_13_bool = var_12_bool; // 0x4fd Push
	if(var_13_bool == 0) goto Label_1284; // 0x4fe JumpB
	var_14_bool = 0; var_15_string = ""; var_16_string = ""; // 0x4ff PushV
	var_15_string = "quest_d3_03"; // 0x500 MovS
	var_16_string = "boy_attacked"; // 0x501 MovS
	func_1071(var_14_bool, var_15_string, var_16_string); // 0x502 Call
	
Label_1284:
	return 2; // 0x504 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	
Label_264:
	Hold(); // 0x108 Func
	goto Label_264; // 0x10a Jump
}


func_0(var_0_object, var_11_int, var_12_object)
{
	var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; var_20_int = 0; var_21_bool = 0; // 0x0 PushV
	var_0_object = var_12_object; // 0x1 TMov
	var_22_bool = 0; var_23_object = Obj(); // 0x2 PushV
	var_23_object = var_12_object; // 0x3 Mov
	func_942(var_23_object); // 0x4 Call
	var_62_bool = var_22_bool == 0; // 0x6 Not
	if(var_62_bool == 0) goto Label_10; // 0x7 JumpB
	var_11_int = -2; // 0x8 MovI
	return 8; // 0x9 Return
	
Label_10:
	CreateDialog(var_18_object); // 0xa Func
	var_63_int = 0; // 0xc PushV
	func_1218(var_63_int); // 0xd Call
	SetNPCName(var_63_int); // 0xf ObjFunc
	var_64_string = ""; // 0x11 PushV
	func_1220(var_64_string); // 0x12 Call
	SetPhoto(var_64_string); // 0x14 ObjFunc
	var_65_int = 0; // 0x16 PushV
	func_1185(var_65_int); // 0x17 Call
	SetPlayerName(var_65_int); // 0x19 ObjFunc
	var_20_int = -1; // 0x1b MovI
	IsOverrideActive(var_19_bool); // 0x1c Func
	var_73_bool = var_19_bool; // 0x1e Push
	if(var_73_bool == 0) goto Label_34; // 0x1f JumpB
	var_11_int = -2; // 0x20 MovI
	return 8; // 0x21 Return
	
Label_34:
	DoDialog(var_18_object); // 0x22 Func
	var_74_object = Obj(); var_75_object = Obj(); // 0x24 PushV
	var_74_object = var_12_object; // 0x25 Mov
	var_75_object = var_18_object; // 0x26 Mov
	TaskCall(1); // 0x27 TaskCall
	func_63(var_76_object, var_77_object, var_78_string, var_79_bool, var_74_object, var_75_object); // 0x28 Call
	TaskReturn(); // 0x29 TaskReturn
	IsDialogEnd(var_21_bool); // 0x2b ObjFunc
	
Label_45:
	var_108_bool = var_21_bool == 0; // 0x2d Not
	if(var_108_bool == 0) goto Label_52; // 0x2e JumpB
	sync(); // 0x2f Func
	IsDialogEnd(var_21_bool); // 0x31 ObjFunc
	goto Label_45; // 0x33 Jump
	
Label_52:
	var_109_object = Obj(); // 0x34 PushV
	var_109_object = var_12_object; // 0x35 Mov
	func_998(); // 0x36 Call
	StopDialog(var_18_object); // 0x38 Func
	GetReturnValue(var_20_int); // 0x3a ObjFunc
	var_11_int = var_20_int; // 0x3c Mov
	return 8; // 0x3d Return
}


func_641(var_0_object, var_62_bool)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); // 0x281 PushV
	GetDirection(var_65_cvector); // 0x282 Func
	var_67_cvector = CVector(0,0,0); var_68_object = Obj(); // 0x284 PushV
	var_68_object = var_0_object; // 0x285 MovT
	func_786(var_68_object); // 0x286 Call
	var_66_cvector = var_67_cvector; // 0x287 Mov
	var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); // 0x289 PushV
	var_74_cvector = var_65_cvector; // 0x28a Mov
	var_75_cvector = var_66_cvector; // 0x28b Mov
	func_1037(var_73_float, var_74_cvector, var_75_cvector); // 0x28c Call
	var_81_float = -0.34202; // 0x28e PushF
	var_62_bool = var_73_float >= var_81_float; // 0x28f GE2
	return 4; // 0x290 Return
}


func_1027(var_40_cvector, var_41_cvector)
{
	var_42_float = 0; var_43_float = 0; // 0x403 PushV
	var_44_int = var_41_cvector | var_41_cvector; // 0x404 Or
	var_43_float = sqrt(var_44_int); // 0x405 Sqrt2
	var_45_float = 0.0; // 0x406 PushF
	var_46_bool = var_43_float < var_45_float; // 0x407 LT
	if(var_46_bool == 0) goto Label_1035; // 0x408 JumpB
	var_40_cvector = CVector(0.0, 0.0, 0.0); // 0x409 MovV
	return 2; // 0x40a Return
	
Label_1035:
	var_40_cvector = var_41_cvector / var_41_cvector; // 0x40b Div2
	return 2; // 0x40c Return
}


func_1156(var_28_bool, var_29_object, var_30_int)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0; var_34_object = Obj(); var_35_object = Obj(); var_36_int = 0; // 0x484 PushV
	var_37_object = Obj(); // 0x485 PushV
	func_1143(var_37_object); // 0x486 Call
	var_34_object = var_37_object; // 0x487 Mov
	Find(var_30_int, var_35_object); // 0x489 ObjFunc
	var_42_bool = var_35_object == 0; // 0x48b Not
	if(var_42_bool == 0) goto Label_1171; // 0x48c JumpB
	var_43_string = "Can't find diary parent with id: "; // 0x48d PushS
	var_44_int = var_43_string + var_30_int; // 0x48e Add
	Trace(var_44_int); // 0x48f Func
	var_28_bool = 0; // 0x491 MovB
	return 6; // 0x492 Return
	
Label_1171:
	AddChild(var_29_object); // 0x493 ObjFunc
	var_45_string = "player_diary"; // 0x495 PushS
	var_46_int = 1; // 0x496 PushI
	SetVariable(var_45_string, var_46_int); // 0x497 Func
	GetCategory(var_36_int); // 0x499 ObjFunc
	SetDiarySection(var_36_int); // 0x49b Func
	var_28_bool = 0; // 0x49d MovB
	return 6; // 0x49e Return
}


func_389(var_141_bool)
{
	var_141_bool = 0; // 0x185 MovB
	return 0; // 0x186 Return
}


func_781(var_82_cvector)
{
	var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); // 0x30d PushV
	GetPosition(var_84_cvector); // 0x30e Func
	var_82_cvector = var_84_cvector; // 0x310 Mov
	return 2; // 0x311 Return
}


func_1037(var_73_float, var_74_cvector, var_75_cvector)
{
	var_76_int = var_74_cvector | var_75_cvector; // 0x40e Or
	var_77_int = var_74_cvector | var_74_cvector; // 0x40f Or
	var_78_int = var_75_cvector | var_75_cvector; // 0x410 Or
	var_79_float = var_77_int * var_78_int; // 0x411 Mult
	var_80_float = sqrt(var_79_float); // 0x412 Sqrt
	var_73_float = var_76_int / var_76_int; // 0x413 Div2
	return 0; // 0x414 Return
}


func_657(var_12_object)
{
	var_13_object = Obj(); // 0x292 PushV
	var_13_object = var_12_object; // 0x293 Mov
	func_666(var_13_object); // 0x294 Call
	
Label_662:
	Hold(); // 0x296 Func
	goto Label_662; // 0x298 Jump
}


func_786(var_67_cvector)
{
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x312 PushV
	GetPosition(var_71_cvector); // 0x313 Func
	GetPosition(var_72_cvector); // 0x315 ObjFunc
	var_67_cvector = var_72_cvector - var_71_cvector; // 0x317 Sub2
	return 4; // 0x318 Return
}


func_405()
{
	var_143_int = 0; var_144_int = 0; var_145_int = 0; var_146_int = 0; var_147_bool = 0; var_148_float = 0; var_149_bool = 0; var_150_int = 0; var_151_int = 0; var_152_int = 0; var_153_int = 0; var_154_bool = 0; var_155_float = 0; var_156_bool = 0; // 0x195 PushV
	WaitForAnimEnd(); // 0x196 Func
	var_157_bool = 0; // 0x198 PushV
	func_937(var_157_bool); // 0x199 Call
	var_160_bool = var_157_bool == 0; // 0x19b Not
	if(var_160_bool == 0) goto Label_414; // 0x19c JumpB
	return 14; // 0x19d Return
	
Label_414:
	var_161_int = 0; // 0x19e PushV
	func_1090(var_161_int); // 0x19f Call
	var_150_int = var_161_int; // 0x1a0 Mov
	var_151_int = 0; // 0x1a2 MovI
	
Label_419:
	var_174_bool = 0; // 0x1a3 PushV
	var_174_bool = 0; // 0x1a4 MovB
	var_175_int = 5; // 0x1a5 PushI
	var_176_bool = var_151_int < var_175_int; // 0x1a6 LT
	if(var_176_bool == 0) goto Label_429; // 0x1a7 JumpB
	var_177_bool = 0; // 0x1a8 PushV
	func_937(var_177_bool); // 0x1a9 Call
	if(var_177_bool == 0) goto Label_429; // 0x1ab JumpB
	var_174_bool = 1; // 0x1ac MovB
	
Label_429:
	if(var_174_bool == 0) goto Label_473; // 0x1ad JumpB
	var_178_int = 3; // 0x1ae PushI
	irand(var_152_int, var_178_int); // 0x1af Func
	var_179_int = 0; // 0x1b1 PushI
	var_180_bool = var_152_int == var_179_int; // 0x1b2 Eq
	if(var_180_bool == 0) goto Label_453; // 0x1b3 JumpB
	var_181_int = var_150_int; // 0x1b4 Push
	if(var_181_int == 0) goto Label_452; // 0x1b5 JumpB
	irand(var_153_int, var_150_int); // 0x1b6 Func
	var_182_string = "all"; // 0x1b8 PushS
	var_183_string = ""; var_184_int = 0; // 0x1b9 PushV
	var_184_int = var_153_int; // 0x1ba Mov
	func_1083(var_183_string, var_184_int); // 0x1bb Call
	PlayAnimation(var_182_string, var_183_string); // 0x1bd Func
	WaitForAnimEnd(var_154_bool); // 0x1bf Func
	var_185_bool = var_154_bool == 0; // 0x1c1 Not
	if(var_185_bool == 0) goto Label_452; // 0x1c2 JumpB
	goto Label_473; // 0x1c3 Jump
	
Label_473:
	return 14; // 0x1d9 Return
	
Label_452:
	goto Label_470; // 0x1c4 Jump
	
Label_470:
	var_186_int = 1; // 0x1d6 PushI
	var_151_int = var_151_int + var_186_int; // 0x1d7 Add2
	goto Label_419; // 0x1d8 Jump
	
Label_453:
	var_187_int = 1; // 0x1c5 PushI
	var_188_bool = var_152_int == var_187_int; // 0x1c6 Eq
	if(var_188_bool == 0) goto Label_467; // 0x1c7 JumpB
	var_189_int = 4; // 0x1c8 PushI
	rand(var_155_float, var_189_int); // 0x1c9 Func
	var_190_int = 1; // 0x1cb PushI
	var_191_int = var_155_float + var_190_int; // 0x1cc Add
	Sleep(var_191_int, var_156_bool); // 0x1cd Func
	var_192_bool = var_156_bool == 0; // 0x1cf Not
	if(var_192_bool == 0) goto Label_466; // 0x1d0 JumpB
	goto Label_473; // 0x1d1 Jump
	
Label_466:
	goto Label_470; // 0x1d2 Jump
	
Label_467:
	var_193_int = var_151_int; // 0x1d3 Push
	if(var_193_int == 0) goto Label_470; // 0x1d4 JumpB
	goto Label_473; // 0x1d5 Jump
}


func_1045(var_61_object, var_62_int)
{
	var_63_int = 0; var_64_int = 0; var_65_bool = 0; var_66_int = 0; var_67_int = 0; var_68_bool = 0; // 0x415 PushV
	GetItemID(var_66_int); // 0x416 ObjFunc
	var_69_string = "Category"; // 0x418 PushS
	GetInvItemProperty(var_67_int, var_66_int, var_69_string); // 0x419 Func
	AddItem(var_68_bool, var_61_object, var_67_int, var_62_int); // 0x41b ObjFunc
	var_70_bool = var_68_bool == 0; // 0x41d Not
	if(var_70_bool == 0) goto Label_1057; // 0x41e JumpB
	DropItems(var_61_object, var_62_int); // 0x41f ObjFunc
	
Label_1057:
	return 6; // 0x421 Return
}


func_281()
{
	var_112_bool = 0; var_113_string = ""; var_114_string = ""; // 0x119 PushV
	var_113_string = "quest_d3_03"; // 0x11a MovS
	var_114_string = "boy_free"; // 0x11b MovS
	func_1071(var_112_bool, var_113_string, var_114_string); // 0x11c Call
	var_118_string = "noaccess"; // 0x11e PushS
	var_119_int = 0; // 0x11f PushI
	SetProperty(var_118_string, var_119_int); // 0x120 Func
	
Label_290:
	func_309(var_110_bool, var_111_bool); // 0x123 Call
	goto Label_290; // 0x125 Jump
}


func_793(var_35_bool, var_36_object, var_37_string)
{
	var_38_bool = 0; var_39_bool = 0; // 0x319 PushV
	var_40_string = "HasProperty"; // 0x31a PushS
	var_41_int = 2; // 0x31b PushI
	var_42_bool = IsFuncExist(var_36_object, var_40_string, var_41_int); // 0x31c FuncExist
	var_43_bool = var_42_bool == 0; // 0x31d Not
	if(var_43_bool == 0) goto Label_801; // 0x31e JumpB
	var_35_bool = 0; // 0x31f MovB
	return 2; // 0x320 Return
	
Label_801:
	HasProperty(var_37_string, var_39_bool); // 0x321 ObjFunc
	var_35_bool = var_39_bool; // 0x323 Mov
	return 2; // 0x324 Return
}


func_666(var_13_object)
{
	var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_string = ""; var_19_object = Obj(); var_20_bool = 0; var_21_bool = 0; var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_string = ""; var_29_object = Obj(); var_30_bool = 0; var_31_bool = 0; var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x29a PushV
	var_34_bool = var_13_object == 0; // 0x29b NullEq
	if(var_34_bool == 0) goto Label_674; // 0x29c JumpB
	var_35_string = ""; // 0x29d PushV
	var_35_string = "fdie"; // 0x29e MovS
	func_753(var_35_string); // 0x29f Call
	goto Label_752; // 0x2a1 Jump
	
Label_752:
	return 20; // 0x2f0 Return
	
Label_674:
	GetPosition(var_24_cvector); // 0x2a2 ObjFunc
	GetPosition(var_25_cvector); // 0x2a4 Func
	GetDirection(var_26_cvector); // 0x2a6 Func
	var_27_cvector = var_25_cvector - var_24_cvector; // 0x2a8 Sub2
	var_38_float = GetByIndex(var_27_cvector, 0); // 0x2a9 PushE
	var_39_float = GetByIndex(var_26_cvector, 0); // 0x2aa PushE
	var_40_float = var_38_float * var_39_float; // 0x2ab Mult
	var_41_float = GetByIndex(var_27_cvector, 2); // 0x2ac PushE
	var_42_float = GetByIndex(var_26_cvector, 2); // 0x2ad PushE
	var_43_float = var_41_float * var_42_float; // 0x2ae Mult
	var_44_int = var_40_float + var_43_float; // 0x2af Add
	var_45_int = 0; // 0x2b0 PushI
	var_46_bool = var_44_int >= var_45_int; // 0x2b1 GE
	if(var_46_bool == 0) goto Label_693; // 0x2b2 JumpB
	var_28_string = "fdie"; // 0x2b3 MovS
	goto Label_694; // 0x2b4 Jump
	
Label_694:
	RemoveRTEnvelope(); // 0x2b6 Func
	SetDeathState(); // 0x2b8 Func
	Stop(); // 0x2ba Func
	StopAsync(); // 0x2bc Func
	var_29_object = var_13_object; // 0x2be Mov
	var_47_string = "GetScriptProperty"; // 0x2bf PushS
	var_48_int = 2; // 0x2c0 PushI
	var_49_bool = IsFuncExist(var_13_object, var_47_string, var_48_int); // 0x2c1 FuncExist
	if(var_49_bool == 0) goto Label_718; // 0x2c2 JumpB
	var_50_string = "Owner"; // 0x2c3 PushS
	HasScriptProperty(var_30_bool, var_50_string); // 0x2c4 ObjFunc
	var_51_bool = var_30_bool; // 0x2c6 Push
	if(var_51_bool == 0) goto Label_718; // 0x2c7 JumpB
	var_52_string = "Owner"; // 0x2c8 PushS
	GetScriptProperty(var_29_object, var_52_string); // 0x2c9 ObjFunc
	var_53_bool = var_29_object == 0; // 0x2cb NullEq
	if(var_53_bool == 0) goto Label_718; // 0x2cc JumpB
	var_29_object = var_13_object; // 0x2cd Mov
	
Label_718:
	var_54_string = "@GetEyesHeight"; // 0x2ce PushS
	var_55_int = 1; // 0x2cf PushI
	var_56_bool = IsFuncExist(var_29_object, var_54_string, var_55_int); // 0x2d0 FuncExist
	if(var_56_bool == 0) goto Label_733; // 0x2d1 JumpB
	GetEyesHeight(var_32_float); // 0x2d2 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x2d4 MovV
	var_57_float = GetByIndex(var_33_cvector, 1); // 0x2d5 PushE
	var_57_float = var_32_float; // 0x2d6 Mov
	SetByIndex(var_33_cvector, 1) = var_57_float; // 0x2d7 PopE
	var_58_string = "head"; // 0x2d8 PushS
	LookAsync(var_13_object, var_58_string, var_33_cvector); // 0x2d9 Func
	var_31_bool = 1; // 0x2db MovB
	goto Label_734; // 0x2dc Jump
	
Label_734:
	var_59_string = "all"; // 0x2de PushS
	PlayAnimation(var_59_string, var_28_string); // 0x2df Func
	WaitForAnimEnd(); // 0x2e1 Func
	var_60_bool = var_31_bool; // 0x2e3 Push
	if(var_60_bool == 0) goto Label_746; // 0x2e4 JumpB
	StopAsync(); // 0x2e5 Func
	var_61_string = "head"; // 0x2e7 PushS
	UnlookAsync(var_61_string); // 0x2e8 Func
	
Label_746:
	var_62_string = "all"; // 0x2ea PushS
	LockAnimationEnd(var_62_string, var_28_string); // 0x2eb Func
	RemoveEnvelope(); // 0x2ed Func
	var_29_object = 0; // 0x2ef SetNull
	
Label_733:
	var_31_bool = 0; // 0x2dd MovB
	
Label_693:
	var_28_string = "bdie"; // 0x2b5 MovS
}


func_1185(var_65_int)
{
	var_66_int = 0; var_67_int = 0; // 0x4a1 PushV
	var_68_string = "player"; // 0x4a2 PushS
	GetVariable(var_68_string, var_67_int); // 0x4a3 Func
	var_69_int = 0; // 0x4a5 PushI
	var_70_bool = var_67_int == var_69_int; // 0x4a6 Eq
	if(var_70_bool == 0) goto Label_1195; // 0x4a7 JumpB
	var_65_int = 200001; // 0x4a8 MovI
	return 2; // 0x4a9 Return
	
Label_1195:
	var_71_int = 1; // 0x4ab PushI
	var_72_bool = var_67_int == var_71_int; // 0x4ac Eq
	if(var_72_bool == 0) goto Label_1200; // 0x4ad JumpB
	var_65_int = 200002; // 0x4ae MovI
	return 2; // 0x4af Return
	
Label_1200:
	var_65_int = 200003; // 0x4b0 MovI
	return 2; // 0x4b1 Return
}


func_1058(var_55_object, var_56_string, var_57_int)
{
	var_58_object = Obj(); var_59_object = Obj(); // 0x422 PushV
	CreateInvItem(var_59_object); // 0x423 Func
	SetItemName(var_56_string); // 0x425 ObjFunc
	var_60_object = Obj(); var_61_object = Obj(); var_62_int = 0; // 0x427 PushV
	var_60_object = var_55_object; // 0x428 Mov
	var_61_object = var_59_object; // 0x429 Mov
	var_62_int = var_57_int; // 0x42a Mov
	func_1045(var_61_object, var_62_int); // 0x42b Call
	return 2; // 0x42d Return
}


func_805(var_28_bool)
{
	var_30_bool = 0; var_31_bool = 0; // 0x325 PushV
	IsDead(var_31_bool); // 0x326 ObjFunc
	var_28_bool = var_31_bool; // 0x328 Mov
	return 2; // 0x329 Return
}


func_937(var_157_bool)
{
	var_158_bool = 0; var_159_bool = 0; // 0x3a9 PushV
	IsLoaded(var_159_bool); // 0x3aa Func
	var_157_bool = var_159_bool; // 0x3ac Mov
	return 2; // 0x3ad Return
}


func_810(var_17_bool, var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); // 0x32a PushV
	var_23_bool = var_18_object == 0; // 0x32b NullEq
	if(var_23_bool == 0) goto Label_815; // 0x32c JumpB
	var_17_bool = 0; // 0x32d MovB
	return 4; // 0x32e Return
	
Label_815:
	var_24_bool = 0; // 0x32f PushV
	var_24_bool = 0; // 0x330 MovB
	var_25_string = "IsDead"; // 0x331 PushS
	var_26_int = 1; // 0x332 PushI
	var_27_bool = IsFuncExist(var_18_object, var_25_string, var_26_int); // 0x333 FuncExist
	if(var_27_bool == 0) goto Label_827; // 0x334 JumpB
	var_28_bool = 0; var_29_object = Obj(); // 0x335 PushV
	var_29_object = var_18_object; // 0x336 Mov
	func_805(var_29_object); // 0x337 Call
	if(var_28_bool == 0) goto Label_827; // 0x339 JumpB
	var_24_bool = 1; // 0x33a MovB
	
Label_827:
	if(var_24_bool == 0) goto Label_830; // 0x33b JumpB
	var_17_bool = 0; // 0x33c MovB
	return 4; // 0x33d Return
	
Label_830:
	GetScene(var_21_object); // 0x33e Func
	var_32_bool = var_21_object == 0; // 0x340 NullEq
	if(var_32_bool == 0) goto Label_836; // 0x341 JumpB
	var_17_bool = 0; // 0x342 MovB
	return 4; // 0x343 Return
	
Label_836:
	GetScene(var_22_object); // 0x344 ObjFunc
	var_33_bool = var_21_object != var_22_object; // 0x346 Neq
	if(var_33_bool == 0) goto Label_842; // 0x347 JumpB
	var_17_bool = 0; // 0x348 MovB
	return 4; // 0x349 Return
	
Label_842:
	var_17_bool = 1; // 0x34a MovB
	return 4; // 0x34b Return
}


func_942(var_22_bool)
{
	var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_bool = 0; var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_bool = 0; // 0x3ae PushV
	GetPosition(var_33_cvector); // 0x3af ObjFunc
	GetEyesHeight(var_32_float); // 0x3b1 ObjFunc
	var_40_float = GetByIndex(var_33_cvector, 1); // 0x3b3 PushE
	var_40_float = var_40_float + var_32_float; // 0x3b4 Add2
	SetByIndex(var_33_cvector, 1) = var_40_float; // 0x3b5 PopE
	GetPosition(var_34_cvector); // 0x3b6 Func
	GetEyesHeight(var_32_float); // 0x3b8 Func
	var_41_float = GetByIndex(var_34_cvector, 1); // 0x3ba PushE
	var_41_float = var_41_float + var_32_float; // 0x3bb Add2
	SetByIndex(var_34_cvector, 1) = var_41_float; // 0x3bc PopE
	var_35_cvector = var_33_cvector - var_34_cvector; // 0x3bd Sub2
	var_42_float = GetByIndex(var_35_cvector, 1); // 0x3be PushE
	var_42_float = 0; // 0x3bf MovI
	SetByIndex(var_35_cvector, 1) = var_42_float; // 0x3c0 PopE
	var_43_int = var_35_cvector | var_35_cvector; // 0x3c1 Or
	var_44_float = sqrt(var_43_int); // 0x3c2 Sqrt
	var_35_cvector = var_35_cvector / var_35_cvector; // 0x3c3 Div2
	var_36_cvector = -var_35_cvector; // 0x3c4 Neg2
	var_45_int = 70; // 0x3c5 PushI
	var_46_float = var_35_cvector * var_45_int; // 0x3c6 Mult
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x3c7 PushV
	var_49_cvector = CVector(0.0, 1.0, 0.0); // 0x3c8 PushVec
	var_48_cvector = var_36_cvector ^ var_49_cvector; // 0x3c9 Xor2
	func_1027(var_47_cvector, var_48_cvector); // 0x3ca Call
	var_55_int = 25; // 0x3cc PushI
	var_56_float = var_47_cvector * var_55_int; // 0x3cd Mult
	var_57_int = var_46_float + var_56_float; // 0x3ce Add
	var_58_cvector = CVector(0.0, 10.0, 0.0); // 0x3cf PushVec
	var_37_cvector = var_57_int - var_58_cvector; // 0x3d0 Sub2
	var_38_cvector = var_34_cvector + var_37_cvector; // 0x3d1 Add2
	IsOverrideActive(var_39_bool); // 0x3d2 Func
	var_59_bool = var_39_bool; // 0x3d4 Push
	if(var_59_bool == 0) goto Label_984; // 0x3d5 JumpB
	var_22_bool = 0; // 0x3d6 MovB
	return 16; // 0x3d7 Return
	
Label_984:
	StopWorld(); // 0x3d8 Func
	CameraTransit(var_38_cvector, var_36_cvector); // 0x3da Func
	var_60_float = GetByIndex(var_37_cvector, 0); // 0x3dc PushE
	var_61_float = GetByIndex(var_37_cvector, 2); // 0x3dd PushE
	Rotate(var_60_float, var_61_float); // 0x3de Func
	CameraWaitForPlayFinish(); // 0x3e0 Func
	ResumeWorld(); // 0x3e2 Func
	var_22_bool = 1; // 0x3e4 MovB
	return 16; // 0x3e5 Return
}


func_1071(var_14_bool, var_15_string, var_16_string)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x42f PushV
	FindActor(var_18_object, var_15_string); // 0x430 Func
	var_19_bool = var_18_object == 0; // 0x432 NullEq
	if(var_19_bool == 0) goto Label_1078; // 0x433 JumpB
	var_14_bool = 0; // 0x434 MovB
	return 2; // 0x435 Return
	
Label_1078:
	Trigger(var_18_object, var_16_string); // 0x436 Func
	var_14_bool = 1; // 0x438 MovB
	return 2; // 0x439 Return
}


func_1202()
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x4b2 PushV
	var_24_string = "Adding diary entry"; // 0x4b3 PushS
	Trace(var_24_string); // 0x4b4 Func
	var_25_int = 84; // 0x4b6 PushI
	var_26_int = 2; // 0x4b7 PushI
	var_27_int = 12166; // 0x4b8 PushI
	CreateDiaryEntry(var_23_object, var_25_int, var_26_int, var_27_int); // 0x4b9 Func
	var_28_bool = 0; var_29_object = Obj(); var_30_int = 0; // 0x4bb PushV
	var_29_object = var_23_object; // 0x4bc Mov
	var_30_int = 27; // 0x4bd MovI
	func_1156(var_28_bool, var_29_object, var_30_int); // 0x4be Call
	return 2; // 0x4c0 Return
}


func_309(var_0_object, var_1_object)
{
	var_120_float = 0; var_121_cvector = CVector(0,0,0); var_122_cvector = CVector(0,0,0); var_123_float = 0; var_124_bool = 0; var_125_object = Obj(); var_126_bool = 0; var_127_float = 0; var_128_cvector = CVector(0,0,0); var_129_cvector = CVector(0,0,0); var_130_float = 0; var_131_bool = 0; var_132_object = Obj(); var_133_bool = 0; // 0x135 PushV
	var_0_object = 0; // 0x136 TMovB
	var_1_object = 0; // 0x137 TMovB
	var_134_float = 0.5; // 0x138 PushF
	rand(var_127_float, var_134_float); // 0x139 Func
	Sleep(var_127_float); // 0x13b Func
	
Label_317:
	var_135_bool = var_0_object == 0; // 0x13d Not
	if(var_135_bool == 0) goto Label_365; // 0x13e JumpB
	var_136_bool = var_1_object == 0; // 0x13f Not
	if(var_136_bool == 0) goto Label_337; // 0x140 JumpB
	
Label_321:
	GetPosition(var_129_cvector); // 0x141 Func
	GetCameraFarDistance(var_130_float); // 0x143 Func
	var_137_float = 2.5; // 0x145 PushF
	var_130_float = var_130_float * var_137_float; // 0x146 Mult2
	GetRandomPFPointInCircle(var_128_cvector, var_129_cvector, var_130_float, var_131_bool); // 0x147 Func
	var_138_bool = var_131_bool; // 0x149 Push
	if(var_138_bool == 0) goto Label_332; // 0x14a JumpB
	goto Label_336; // 0x14b Jump
	
Label_336:
	goto Label_338; // 0x150 Jump
	
Label_338:
	FindShiftedPathTo(var_132_object, var_128_cvector); // 0x152 Func
	var_139_bool = var_132_object != 0; // 0x154 NullNeq
	if(var_139_bool == 0) goto Label_360; // 0x155 JumpB
	RotatePath(var_132_object, var_133_bool); // 0x156 Func
	var_140_bool = var_133_bool; // 0x158 Push
	if(var_140_bool == 0) goto Label_359; // 0x159 JumpB
	var_141_bool = 0; // 0x15a PushV
	func_389(var_141_bool); // 0x15b Call
	FollowPath(var_132_object, var_141_bool, var_133_bool); // 0x15d Func
	var_132_object = 0; // 0x15f SetNull
	var_142_bool = var_133_bool; // 0x160 Push
	if(var_142_bool == 0) goto Label_359; // 0x161 JumpB
	TaskCall(4); // 0x163 TaskCall
	func_405(); // 0x164 Call
	TaskReturn(); // 0x165 TaskReturn
	
Label_359:
	goto Label_363; // 0x167 Jump
	
Label_363:
	var_132_object = 0; // 0x16b SetNull
	goto Label_317; // 0x16c Jump
	
Label_360:
	var_194_int = 1; // 0x168 PushI
	Sleep(var_194_int); // 0x169 Func
	
Label_332:
	var_195_int = 1; // 0x14c PushI
	Sleep(var_195_int); // 0x14d Func
	goto Label_321; // 0x14f Jump
	
Label_337:
	var_1_object = 0; // 0x151 TMovB
	
Label_365:
	return 14; // 0x16d Return
}


func_1083(var_167_string, var_168_int)
{
	var_169_string = ""; var_170_string = ""; // 0x43b PushV
	var_170_string = "idle"; // 0x43c MovS
	var_171_int = var_168_int; // 0x43d Push
	if(var_171_int == 0) goto Label_1088; // 0x43e JumpB
	var_170_string = var_170_string + var_168_int; // 0x43f Add2
	
Label_1088:
	var_167_string = var_170_string; // 0x440 Mov
	return 2; // 0x441 Return
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_74_object, var_75_object)
{
	var_0_object = var_75_object; // 0x40 TMov
	var_1_object = var_74_object; // 0x41 TMov
	var_3_string = 0; // 0x42 TMovB
	var_80_int = 1; // 0x43 PushI
	if(var_80_int == 0) goto Label_86; // 0x44 JumpB
	var_81_string = ""; // 0x45 PushV
	var_81_string = "Neutral"; // 0x46 MovS
	func_116(var_75_object, var_81_string); // 0x47 Call
	var_96_int = 10904; // 0x49 PushI
	SetMessage(var_96_int); // 0x4a TObjFunc
	ClearReplies(); // 0x4c TObjFunc
	var_97_int = 10905; // 0x4e PushI
	var_98_int = 12054; // 0x4f PushI
	var_99_int = 12053; // 0x50 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x51 TObjFunc
	goto Label_86; // 0x53 Jump
	
Label_86:
	var_100_bool = 0; // 0x56 PushV
	func_1222(var_100_bool); // 0x57 Call
	if(var_100_bool == 0) goto Label_101; // 0x59 JumpB
	
Label_90:
	lshWaitForAnimEnd(); // 0x5a Func
	var_101_string = var_3_string; // 0x5c PushT
	if(var_101_string == 0) goto Label_95; // 0x5d JumpB
	goto Label_100; // 0x5e Jump
	
Label_100:
	goto Label_115; // 0x64 Jump
	
Label_115:
	return 0; // 0x73 Return
	
Label_95:
	var_102_string = ""; // 0x5f PushV
	var_102_string = var_2_object; // 0x60 MovT
	func_1002(var_102_string); // 0x61 Call
	goto Label_90; // 0x63 Jump
	
Label_101:
	var_103_string = "all"; // 0x65 PushS
	var_104_string = "idle"; // 0x66 PushS
	PlayAnimation(var_103_string, var_104_string); // 0x67 Func
	
Label_105:
	WaitForAnimEnd(); // 0x69 Func
	var_105_string = var_3_string; // 0x6b PushT
	if(var_105_string == 0) goto Label_110; // 0x6c JumpB
	goto Label_115; // 0x6d Jump
	
Label_110:
	var_106_string = "all"; // 0x6e PushS
	var_107_string = "idle"; // 0x6f PushS
	PlayAnimation(var_106_string, var_107_string); // 0x70 Func
	goto Label_105; // 0x72 Jump
}


func_1218(var_63_int)
{
	var_63_int = 3345; // 0x4c2 MovI
	return 0; // 0x4c3 Return
}


func_1090(var_161_int)
{
	var_162_int = 0; var_163_bool = 0; var_164_int = 0; var_165_bool = 0; // 0x442 PushV
	var_164_int = 0; // 0x443 MovI
	
Label_1092:
	var_166_string = "all"; // 0x444 PushS
	var_167_string = ""; var_168_int = 0; // 0x445 PushV
	var_168_int = var_164_int; // 0x446 Mov
	func_1083(var_167_string, var_168_int); // 0x447 Call
	HasAnimation(var_165_bool, var_166_string, var_167_string); // 0x449 Func
	var_172_bool = var_165_bool == 0; // 0x44b Not
	if(var_172_bool == 0) goto Label_1102; // 0x44c JumpB
	goto Label_1105; // 0x44d Jump
	
Label_1105:
	var_161_int = var_164_int; // 0x451 Mov
	return 4; // 0x452 Return
	
Label_1102:
	var_173_int = 1; // 0x44e PushI
	var_164_int = var_164_int + var_173_int; // 0x44f Add2
	goto Label_1092; // 0x450 Jump
}


func_1220(var_64_string)
{
	var_64_string = "ui/NPC_None.png"; // 0x4c4 MovS
	return 0; // 0x4c5 Return
}


func_1222(var_82_bool)
{
	var_82_bool = 0; // 0x4c6 MovB
	return 0; // 0x4c7 Return
}


func_1224(var_11_object)
{
	var_12_object = Obj(); // 0x4c9 PushV
	var_12_object = var_11_object; // 0x4ca Mov
	TaskCall(6); // 0x4cb TaskCall
	func_657(var_12_object); // 0x4cc Call
	TaskReturn(); // 0x4cd TaskReturn
	return 0; // 0x4cf Return
}


func_846(var_13_bool, var_14_object)
{
	var_15_int = 0; var_16_int = 0; // 0x34e PushV
	var_17_bool = 0; var_18_object = Obj(); // 0x34f PushV
	var_18_object = var_14_object; // 0x350 Mov
	func_810(var_17_bool, var_18_object); // 0x351 Call
	var_34_bool = var_17_bool == 0; // 0x353 Not
	if(var_34_bool == 0) goto Label_855; // 0x354 JumpB
	var_13_bool = 0; // 0x355 MovB
	return 2; // 0x356 Return
	
Label_855:
	var_35_bool = 0; var_36_object = Obj(); var_37_string = ""; // 0x357 PushV
	var_36_object = var_14_object; // 0x358 Mov
	var_37_string = "noaccess"; // 0x359 MovS
	func_793(var_35_bool, var_36_object, var_37_string); // 0x35a Call
	var_44_bool = var_35_bool == 0; // 0x35c Not
	if(var_44_bool == 0) goto Label_864; // 0x35d JumpB
	var_13_bool = 1; // 0x35e MovB
	return 2; // 0x35f Return
	
Label_864:
	var_45_string = "noaccess"; // 0x360 PushS
	GetProperty(var_45_string, var_16_int); // 0x361 ObjFunc
	var_46_int = 0; // 0x363 PushI
	var_13_bool = var_16_int == var_46_int; // 0x364 Eq2
	return 2; // 0x365 Return
}


func_1107()
{
	var_73_string = "playsound"; // 0x454 PushS
	var_74_string = "giveitem"; // 0x455 PushS
	TriggerWorld(var_73_string, var_74_string); // 0x456 Func
	return 0; // 0x458 Return
}


func_1113()
{
	var_18_float = 0; var_19_float = 0; // 0x459 PushV
	var_20_string = "d3q03"; // 0x45a PushS
	var_21_int = 2; // 0x45b PushI
	SetVariable(var_20_string, var_21_int); // 0x45c Func
	func_1202(); // 0x45f Call
	var_47_string = "disease"; // 0x461 PushS
	GetProperty(var_47_string, var_19_float); // 0x462 ObjFunc
	var_48_float = 0.5; // 0x464 PushF
	var_49_bool = var_19_float < var_48_float; // 0x465 LT
	if(var_49_bool == 0) goto Label_1131; // 0x466 JumpB
	var_50_string = "disease"; // 0x467 PushS
	var_51_float = 0.5; // 0x468 PushF
	SetProperty(var_50_string, var_51_float); // 0x469 ObjFunc
	
Label_1131:
	return 2; // 0x46b Return
}


func_474()
{
	StopAnimation(); // 0x1da Func
	StopGroup0(); // 0x1dc Func
	return 0; // 0x1de Return
}


func_479(var_24_cvector, var_25_float)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_float = 0; // 0x1df PushV
	GetPosition(var_32_cvector); // 0x1e0 Func
	GetPosition(var_33_cvector); // 0x1e2 TObjFunc
	GetDirection(var_34_cvector); // 0x1e4 Func
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); // 0x1e6 PushV
	var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); // 0x1e7 PushV
	var_41_cvector = var_32_cvector - var_33_cvector; // 0x1e8 Sub2
	func_1027(var_40_cvector, var_41_cvector); // 0x1e9 Call
	var_47_float = 0.75; // 0x1eb PushF
	var_48_float = var_34_cvector * var_47_float; // 0x1ec Mult
	var_39_cvector = var_40_cvector + var_48_float; // 0x1ed Add2
	func_1027(var_38_cvector, var_39_cvector); // 0x1ee Call
	var_35_cvector = var_38_cvector; // 0x1ef Mov
	var_49_int = 32; // 0x1f1 PushI
	var_50_float = 7000.0; // 0x1f2 PushF
	FindLongestDir(var_36_cvector, var_37_float, var_35_cvector, var_25_float, var_49_int, var_50_float); // 0x1f3 Func
	var_51_int = 100; // 0x1f5 PushI
	var_37_float = var_37_float - var_51_int; // 0x1f6 Sub2
	var_52_int = 0; // 0x1f7 PushI
	var_53_bool = var_37_float < var_52_int; // 0x1f8 LT
	if(var_53_bool == 0) goto Label_507; // 0x1f9 JumpB
	var_37_float = 0; // 0x1fa MovI
	
Label_507:
	var_24_cvector = var_36_cvector * var_37_float; // 0x1fb Mult2
	return 12; // 0x1fc Return
}


func_998()
{
	CameraSwitchToNormal(); // 0x3e7 Func
	return 0; // 0x3e9 Return
}


func_870(var_14_object, var_15_int)
{
	var_17_object = Obj(); var_18_object = Obj(); var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_int = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_string = ""; var_27_object = Obj(); var_28_object = Obj(); var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = ""; // 0x366 PushV
	var_37_bool = 0; // 0x367 PushV
	var_37_bool = 0; // 0x368 MovB
	var_38_int = 4; // 0x369 PushI
	var_39_bool = var_15_int != var_38_int; // 0x36a Neq
	if(var_39_bool == 0) goto Label_880; // 0x36b JumpB
	var_40_int = 5; // 0x36c PushI
	var_41_bool = var_15_int != var_40_int; // 0x36d Neq
	if(var_41_bool == 0) goto Label_880; // 0x36e JumpB
	var_37_bool = 1; // 0x36f MovB
	
Label_880:
	if(var_37_bool == 0) goto Label_899; // 0x370 JumpB
	GetScene(var_27_object); // 0x371 Func
	GetPosition(var_29_cvector); // 0x373 Func
	GetEyesHeight(var_30_float); // 0x375 Func
	var_42_float = GetByIndex(var_29_cvector, 1); // 0x377 PushE
	var_43_int = 2; // 0x378 PushI
	var_44_float = var_30_float / var_43_int; // 0x379 Div
	var_42_float = var_42_float + var_44_float; // 0x37a Add2
	SetByIndex(var_29_cvector, 1) = var_42_float; // 0x37b PopE
	var_45_string = "scripted"; // 0x37c PushS
	var_46_cvector = CVector(0.0, 0.0, 1.0); // 0x37d PushVec
	var_47_string = "blood.xml"; // 0x37e PushS
	AddActorByType(var_28_object, var_45_string, var_27_object, var_29_cvector, var_46_cvector, var_47_string); // 0x37f Func
	var_28_object = 0; // 0x381 SetNull
	var_27_object = 0; // 0x382 SetNull
	
Label_899:
	var_48_bool = var_14_object == 0; // 0x383 NullEq
	if(var_48_bool == 0) goto Label_902; // 0x384 JumpB
	return 20; // 0x385 Return
	
Label_902:
	GetSecondaryAnimationType(var_31_int); // 0x386 Func
	var_49_int = 0; // 0x388 PushI
	var_50_bool = var_31_int < var_49_int; // 0x389 LT
	if(var_50_bool == 0) goto Label_908; // 0x38a JumpB
	return 20; // 0x38b Return
	
Label_908:
	GetPosition(var_32_cvector); // 0x38c ObjFunc
	GetPosition(var_33_cvector); // 0x38e Func
	GetDirection(var_34_cvector); // 0x390 Func
	var_35_cvector = var_33_cvector - var_32_cvector; // 0x392 Sub2
	var_51_float = GetByIndex(var_35_cvector, 0); // 0x393 PushE
	var_52_float = GetByIndex(var_34_cvector, 0); // 0x394 PushE
	var_53_float = var_51_float * var_52_float; // 0x395 Mult
	var_54_float = GetByIndex(var_35_cvector, 2); // 0x396 PushE
	var_55_float = GetByIndex(var_34_cvector, 2); // 0x397 PushE
	var_56_float = var_54_float * var_55_float; // 0x398 Mult
	var_57_int = var_53_float + var_56_float; // 0x399 Add
	var_58_int = 0; // 0x39a PushI
	var_59_bool = var_57_int >= var_58_int; // 0x39b GE
	if(var_59_bool == 0) goto Label_927; // 0x39c JumpB
	var_36_string = "fhit"; // 0x39d MovS
	goto Label_928; // 0x39e Jump
	
Label_928:
	var_60_string = "hit_react"; // 0x3a0 PushS
	var_61_string = "1"; // 0x3a1 PushS
	var_62_int = var_36_string + var_61_string; // 0x3a2 Add
	var_63_string = "2"; // 0x3a3 PushS
	var_64_int = var_36_string + var_63_string; // 0x3a4 Add
	var_65_int = -10; // 0x3a5 PushI
	FadeSecondaryAnimation(var_60_string, var_62_int, var_64_int, var_65_int); // 0x3a6 Func
	return 20; // 0x3a8 Return
	
Label_927:
	var_36_string = "bhit"; // 0x39f MovS
}


func_1002(var_85_string)
{
	var_86_float = 0; var_87_float = 0; var_88_float = 0; var_89_float = 0; // 0x3ea PushV
	var_90_string = "playing "; // 0x3eb PushS
	var_91_int = var_90_string + var_85_string; // 0x3ec Add
	Trace(var_91_int); // 0x3ed Func
	lshGetAnimTimes(var_85_string, var_88_float, var_89_float); // 0x3ef Func
	lshPlayAnimation(var_88_float, var_89_float); // 0x3f1 Func
	var_92_string = "start: "; // 0x3f3 PushS
	var_93_int = var_92_string + var_88_float; // 0x3f4 Add
	Trace(var_93_int); // 0x3f5 Func
	var_94_string = "end: "; // 0x3f7 PushS
	var_95_int = var_94_string + var_89_float; // 0x3f8 Add
	Trace(var_95_int); // 0x3f9 Func
	return 4; // 0x3fb Return
}


func_1259(var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); // 0x4ec PushV
	var_14_object = var_12_object; // 0x4ed Mov
	func_846(var_13_bool, var_14_object); // 0x4ee Call
	var_11_bool = var_13_bool; // 0x4ef Mov
	return 0; // 0x4f1 Return
}


func_1132(var_52_object)
{
	var_54_string = "powder is given"; // 0x46d PushS
	Trace(var_54_string); // 0x46e Func
	var_55_object = Obj(); var_56_string = ""; var_57_int = 0; // 0x470 PushV
	var_55_object = var_52_object; // 0x471 Mov
	var_56_string = "powder"; // 0x472 MovS
	var_57_int = 1; // 0x473 MovI
	func_1058(var_55_object, var_56_string, var_57_int); // 0x474 Call
	return 0; // 0x476 Return
}


func_625(var_2_object)
{
	Stop(); // 0x271 Func
	var_11_int = 120; // 0x273 PushI
	KillTimer(var_11_int); // 0x274 Func
	var_2_object = 1; // 0x276 TMovB
	return 0; // 0x277 Return
}


func_1266(var_47_object)
{
	var_48_object = Obj(); // 0x4f3 PushV
	var_48_object = var_47_object; // 0x4f4 Mov
	TaskCall(5); // 0x4f5 TaskCall
	func_509(var_49_object, var_50_cvector, var_51_bool, var_48_object); // 0x4f6 Call
	TaskReturn(); // 0x4f7 TaskReturn
	return 0; // 0x4f9 Return
}


func_753(var_35_string)
{
	RemoveRTEnvelope(); // 0x2f2 Func
	SetDeathState(); // 0x2f4 Func
	Stop(); // 0x2f6 Func
	StopAsync(); // 0x2f8 Func
	StopSecondaryAnimation(); // 0x2fa Func
	var_36_string = "all"; // 0x2fc PushS
	PlayAnimation(var_36_string, var_35_string); // 0x2fd Func
	WaitForAnimEnd(); // 0x2ff Func
	var_37_string = "all"; // 0x301 PushS
	LockAnimationEnd(var_37_string, var_35_string); // 0x302 Func
	RemoveEnvelope(); // 0x304 Func
	return 0; // 0x306 Return
}


func_116(var_2_object, var_81_string)
{
	var_82_bool = 0; // 0x75 PushV
	func_1222(var_82_bool); // 0x76 Call
	var_83_bool = var_82_bool == 0; // 0x78 Not
	if(var_83_bool == 0) goto Label_123; // 0x79 JumpB
	return 0; // 0x7a Return
	
Label_123:
	var_84_bool = var_81_string == var_2_object; // 0x7b Eq
	if(var_84_bool == 0) goto Label_126; // 0x7c JumpB
	return 0; // 0x7d Return
	
Label_126:
	var_85_string = ""; // 0x7e PushV
	var_85_string = var_81_string; // 0x7f Mov
	func_1002(var_85_string); // 0x80 Call
	var_2_object = var_81_string; // 0x82 TMov
	return 0; // 0x83 Return
}


func_373(var_0_object, var_1_object)
{
	var_0_object = 1; // 0x175 TMovB
	var_1_object = 0; // 0x176 TMovB
	Stop(); // 0x177 Func
	StopGroup0(); // 0x179 Func
	return 0; // 0x17b Return
}


func_1143(var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj(); // 0x477 PushV
	GetDiaryRoot(var_39_object); // 0x478 Func
	var_40_bool = var_39_object == 0; // 0x47a Not
	if(var_40_bool == 0) goto Label_1153; // 0x47b JumpB
	var_41_string = "Can't retrieve diary root"; // 0x47c PushS
	Trace(var_41_string); // 0x47d Func
	var_37_object = 0; // 0x47f MovB
	return 2; // 0x480 Return
	
Label_1153:
	var_37_object = var_39_object; // 0x481 Mov
	return 2; // 0x482 Return
}


func_1020()
{
	var_13_bool = 0; // 0x3fc PushV
	func_1222(var_13_bool); // 0x3fd Call
	if(var_13_bool == 0) goto Label_1026; // 0x3ff JumpB
	lshStopSpeech(); // 0x400 Func
	
Label_1026:
	return 0; // 0x402 Return
}


func_509(var_0_object, var_1_object, var_2_object, var_48_object)
{
	var_52_cvector = CVector(0,0,0); var_53_float = 0; var_54_bool = 0; var_55_cvector = CVector(0,0,0); var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_float = 0; var_59_bool = 0; var_60_cvector = CVector(0,0,0); var_61_float = 0; // 0x1fd PushV
	var_0_object = var_48_object; // 0x1fe TMov
	var_62_cvector = CVector(0,0,0); var_63_float = 0; // 0x1ff PushV
	var_63_float = 1.74533; // 0x200 MovF
	func_479(var_62_cvector, var_63_float); // 0x201 Call
	var_57_cvector = var_62_cvector; // 0x202 Mov
	var_58_float = var_57_cvector | var_57_cvector; // 0x204 Or2
	var_92_float = 10000.0; // 0x205 PushF
	var_93_bool = var_58_float < var_92_float; // 0x206 LT
	if(var_93_bool == 0) goto Label_529; // 0x207 JumpB
	var_94_string = "Can't retreat, distance: "; // 0x208 PushS
	var_95_float = sqrt(var_58_float); // 0x209 Sqrt
	var_96_int = var_94_string + var_95_float; // 0x20a Add
	Trace(var_96_int); // 0x20b Func
	var_97_float = 0.5; // 0x20d PushF
	Sleep(var_97_float); // 0x20e Func
	return 10; // 0x210 Return
	
Label_529:
	var_98_float = GetByIndex(var_57_cvector, 0); // 0x211 PushE
	var_99_float = GetByIndex(var_57_cvector, 2); // 0x212 PushE
	Rotate(var_98_float, var_99_float); // 0x213 Func
	var_100_cvector = CVector(0,0,0); // 0x215 PushV
	func_781(var_100_cvector); // 0x216 Call
	var_1_object = var_100_cvector + var_57_cvector; // 0x218 Add2
	var_103_int = 120; // 0x219 PushI
	var_104_float = 0.5; // 0x21a PushF
	SetTimer(var_103_int, var_104_float); // 0x21b Func
	var_2_object = 0; // 0x21d TMovB
	
Label_542:
	var_105_int = 1; // 0x21e PushI
	MovePoint(var_105_int, var_105_int, var_59_bool); // 0x21f Func
	var_106_bool = var_59_bool; // 0x221 Push
	if(var_106_bool == 0) goto Label_570; // 0x222 JumpB
	var_107_bool = var_0_object == 0; // 0x223 NullEq
	if(var_107_bool == 0) goto Label_551; // 0x224 JumpB
	goto Label_572; // 0x225 Jump
	
Label_572:
	return 10; // 0x23c Return
	
Label_551:
	var_108_cvector = CVector(0,0,0); var_109_float = 0; // 0x227 PushV
	var_109_float = 2.61799; // 0x228 MovF
	func_479(var_108_cvector, var_109_float); // 0x229 Call
	var_60_cvector = var_108_cvector; // 0x22a Mov
	var_61_float = var_60_cvector | var_60_cvector; // 0x22c Or2
	var_110_float = 10000.0; // 0x22d PushF
	var_111_bool = var_61_float >= var_110_float; // 0x22e GE
	if(var_111_bool == 0) goto Label_569; // 0x22f JumpB
	var_112_cvector = CVector(0,0,0); // 0x230 PushV
	func_781(var_112_cvector); // 0x231 Call
	var_1_object = var_112_cvector + var_60_cvector; // 0x233 Add2
	var_113_int = 120; // 0x234 PushI
	var_114_float = 0.5; // 0x235 PushF
	SetTimer(var_113_int, var_114_float); // 0x236 Func
	goto Label_570; // 0x238 Jump
	
Label_570:
	var_115_bool = var_2_object == 0; // 0x23a Not
	if(var_115_bool == 0) goto Label_542; // 0x23b JumpB
	
Label_569:
	goto Label_572; // 0x239 Jump
}


