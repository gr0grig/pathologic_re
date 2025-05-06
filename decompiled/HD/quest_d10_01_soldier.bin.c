task_0_event_26(var_0_string, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector, var_7_bool)
{
	var_8_string = "cleanup"; // 0x1 PushS
	var_9_bool = var_7_bool == var_8_string; // 0x2 Eq
	if(var_9_bool == 0) goto Label_11; // 0x3 JumpB
	var_10_object = Obj(); // 0x4 PushV
	func_1342(var_10_object); // 0x5 NEW_2
	RemoveActor(var_10_object); // 0x7 Func
	Hold(); // 0x9 Func
	
Label_11:
	return 0; // 0xb Return
}


task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool)
{
	StopGroup0(); // 0x14 Func
	sync(); // 0x16 Func
	return 0; // 0x18 Return
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector, var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x39 PushV
	IsOverrideActive(var_9_bool); // 0x3a Func
	var_10_bool = var_9_bool == 0; // 0x3c Not
	if(var_10_bool == 0) goto Label_66; // 0x3d JumpB
	var_11_object = Obj(); // 0x3e PushV
	var_11_object = var_7_bool; // 0x3f Mov
	func_1482(var_11_object); // 0x40 NEW_2
	
Label_66:
	return 2; // 0x42 Return
}


task_1_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	return 0; // 0xb9 Return
}


task_1_event_16(var_0_object, var_1_string, var_2_object, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool)
{
	return 0; // 0xbb Return
}


task_1_event_41(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector, var_7_bool)
{
	return 0; // 0xbd Return
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector, var_7_bool)
{
	func_214(); // 0xe0 NEW_2
	var_9_object = Obj(); // 0xe2 PushV
	var_9_object = var_7_bool; // 0xe3 Mov
	func_1647(); // 0xe4 NEW_2
	return 0; // 0xe6 Return
}


task_2_event_3(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector, var_7_bool)
{
	var_8_bool = var_7_bool == var_0_object; // 0xe8 Eq
	if(var_8_bool == 0) goto Label_239; // 0xe9 JumpB
	var_9_int = 100; // 0xea PushI
	KillTimer(var_9_int); // 0xeb Func
	Face(var_0_object); // 0xed Func
	
Label_239:
	return 0; // 0xef Return
}


task_2_event_4(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector, var_7_bool)
{
	var_8_bool = var_7_bool == var_0_object; // 0xf1 Eq
	if(var_8_bool == 0) goto Label_251; // 0xf2 JumpB
	var_9_int = 100; // 0xf3 PushI
	var_10_float = 3.0; // 0xf4 PushF
	SetTimer(var_9_int, var_10_float); // 0xf5 Func
	var_11_object = Obj(); // 0xf7 PushV
	var_11_object = var_0_object; // 0xf8 MovT
	func_1165(); // 0xf9 NEW_2
	
Label_251:
	return 0; // 0xfb Return
}


	task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool, var_96_object)
	{
	var_97_bool = 0; var_98_object = Obj(); // 0xfd PushV
	var_98_object = var_96_object; // 0xfe Mov
	func_1015(var_97_bool, var_98_object); // 0xff NEW_2
	var_125_bool = var_97_bool == 0; // 0x101 Not
	if(var_125_bool == 0) goto Label_264; // 0x102 JumpB
	var_126_object = Obj(); // 0x103 PushV
	var_126_object = var_96_object; // 0x104 Mov
	func_1819(var_126_object); // 0x105 NEW_2
	return 0; // 0x107 Return
	
Label_264:
	func_214(); // 0x109 NEW_2
	var_142_object = Obj(); // 0x10b PushV
	var_142_object = var_96_object; // 0x10c Mov
	func_1843(var_142_object); // 0x10d NEW_2
	return 0; // 0x10f Return
	}


task_2_event_30(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool)
{
	var_10_bool = 0; var_11_object = Obj(); var_12_object = Obj(); var_13_bool = 0; // 0x111 PushV
	var_11_object = var_7_cvector; // 0x112 Mov
	var_12_object = var_8_cvector; // 0x113 Mov
	var_13_bool = var_9_bool; // 0x114 Mov
	func_1962(var_10_bool, var_11_object, var_12_object, var_13_bool); // 0x115 NEW_2
	if(var_10_bool == 0) goto Label_284; // 0x117 JumpB
	var_96_object = Obj(); // 0x118 PushV
	var_96_object = var_7_cvector; // 0x119 Mov
	func_252(); // 0x11a NEW_2
	
Label_284:
	return 0; // 0x11c Return
}


task_2_event_1(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector, var_7_bool)
{
	var_8_bool = 0; var_9_object = Obj(); // 0x11e PushV
	var_9_object = var_7_bool; // 0x11f Mov
	func_1934(var_8_bool, var_9_object); // 0x120 NEW_2
	if(var_8_bool == 0) goto Label_298; // 0x122 JumpB
	func_214(); // 0x124 NEW_2
	var_128_object = Obj(); // 0x126 PushV
	var_128_object = var_7_bool; // 0x127 Mov
	func_1956(var_128_object); // 0x128 NEW_2
	
Label_298:
	return 0; // 0x12a Return
}


task_2_event_7(var_0_object, var_1_int, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector, var_7_bool)
{
	var_8_int = 100; // 0x12c PushI
	var_9_bool = var_7_bool != var_8_int; // 0x12d Neq
	if(var_9_bool == 0) goto Label_304; // 0x12e JumpB
	return 0; // 0x12f Return
	
Label_304:
	var_10_int = 100; // 0x130 PushI
	KillTimer(var_10_int); // 0x131 Func
	StopGroup0(); // 0x133 Func
	return 0; // 0x135 Return
}


task_3_event_3(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_cvector, var_6_cvector, var_7_bool)
{
	var_8_bool = 0; // 0x1c7 PushV
	var_8_bool = 0; // 0x1c8 MovB
	var_9_object = var_2_object; // 0x1c9 PushT
	if(var_9_object == 0) goto Label_462; // 0x1ca JumpB
	var_10_bool = var_7_bool == var_0_object; // 0x1cb Eq
	if(var_10_bool == 0) goto Label_462; // 0x1cc JumpB
	var_8_bool = 1; // 0x1cd MovB
	
Label_462:
	if(var_8_bool == 0) goto Label_467; // 0x1ce JumpB
	var_11_object = Obj(); // 0x1cf PushV
	var_11_object = var_0_object; // 0x1d0 MovT
	func_1165(); // 0x1d1 NEW_2
	
Label_467:
	return 0; // 0x1d3 Return
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_cvector, var_6_cvector, var_7_bool)
{
	var_8_bool = 0; // 0x1d5 PushV
	var_8_bool = 0; // 0x1d6 MovB
	var_9_object = var_2_object; // 0x1d7 PushT
	if(var_9_object == 0) goto Label_476; // 0x1d8 JumpB
	var_10_bool = var_7_bool == var_0_object; // 0x1d9 Eq
	if(var_10_bool == 0) goto Label_476; // 0x1da JumpB
	var_8_bool = 1; // 0x1db MovB
	
Label_476:
	if(var_8_bool == 0) goto Label_484; // 0x1dc JumpB
	var_11_string = "@Stop hunt"; // 0x1dd PushS
	Trace(var_11_string); // 0x1de Func
	StopAnimation(); // 0x1e0 Func
	StopGroup0(); // 0x1e2 Func
	
Label_484:
	return 0; // 0x1e4 Return
}


	task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool, var_96_object)
	{
	var_97_bool = 0; var_98_object = Obj(); // 0x267 PushV
	var_98_object = var_96_object; // 0x268 Mov
	func_1015(var_97_bool, var_98_object); // 0x269 NEW_2
	var_125_bool = var_97_bool == 0; // 0x26b Not
	if(var_125_bool == 0) goto Label_622; // 0x26c JumpB
	return 0; // 0x26d Return
	
Label_622:
	var_126_object = Obj(); // 0x26e PushV
	var_126_object = var_96_object; // 0x26f Mov
	func_1819(var_126_object); // 0x270 NEW_2
	var_141_bool = var_96_object == var_0_object; // 0x272 Eq
	if(var_141_bool == 0) goto Label_630; // 0x273 JumpB
	var_1_object = 0; // 0x274 SetNullT
	goto Label_637; // 0x275 Jump
	
Label_637:
	return 0; // 0x27d Return
	
Label_630:
	var_1_object = var_96_object; // 0x276 TMov
	var_142_object = var_2_object; // 0x277 PushT
	if(var_142_object == 0) goto Label_637; // 0x278 JumpB
	StopAnimation(); // 0x279 Func
	StopGroup0(); // 0x27b Func
	}


task_3_event_30(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool)
{
	var_10_bool = 0; var_11_object = Obj(); var_12_object = Obj(); var_13_bool = 0; // 0x27f PushV
	var_11_object = var_7_cvector; // 0x280 Mov
	var_12_object = var_8_cvector; // 0x281 Mov
	var_13_bool = var_9_bool; // 0x282 Mov
	func_1962(var_10_bool, var_11_object, var_12_object, var_13_bool); // 0x283 NEW_2
	if(var_10_bool == 0) goto Label_650; // 0x285 JumpB
	var_96_object = Obj(); // 0x286 PushV
	var_96_object = var_7_cvector; // 0x287 Mov
	func_614(); // 0x288 NEW_2
	
Label_650:
	return 0; // 0x28a Return
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x29e PushV
	var_10_object = GlobalVars[0]; // 0x29f PushGE
	in(var_9_bool, var_7_object); // 0x2a0 ObjFunc
	var_11_bool = var_9_bool == 0; // 0x2a2 Not
	if(var_11_bool == 0) goto Label_680; // 0x2a3 JumpB
	var_12_object = Obj(); // 0x2a4 PushV
	var_12_object = var_7_object; // 0x2a5 Mov
	func_651(); // 0x2a6 NEW_2
	
Label_680:
	return 2; // 0x2a8 Return
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_object = Obj(); var_9_object = Obj(); // 0x2a9 PushV
	var_10_string = "attack"; // 0x2aa PushS
	var_11_bool = var_7_string == var_10_string; // 0x2ab Eq
	if(var_11_bool == 0) goto Label_698; // 0x2ac JumpB
	var_12_object = Obj(); // 0x2ad PushV
	func_877(var_12_object); // 0x2ae NEW_2
	var_9_object = var_12_object; // 0x2af Mov
	func_842(); // 0x2b2 NEW_2
	var_16_object = Obj(); // 0x2b4 PushV
	var_16_object = var_9_object; // 0x2b5 Mov
	func_1843(var_16_object); // 0x2b6 NEW_2
	var_9_object = 0; // 0x2b8 SetNull
	goto Label_702; // 0x2b9 Jump
	
Label_702:
	return 2; // 0x2be Return
	
Label_698:
	var_289_string = "cleanup"; // 0x2ba PushS
	var_290_bool = var_7_string == var_289_string; // 0x2bb Eq
	if(var_290_bool == 0) goto Label_702; // 0x2bc JumpB
	var_2_object = 1; // 0x2bd TMovB
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_string = ""; var_10_string = ""; // 0x2c0 PushV
	var_9_string = "quest_d10_01"; // 0x2c1 MovS
	var_10_string = "soldier_fight"; // 0x2c2 MovS
	func_1444(var_8_bool, var_9_string, var_10_string); // 0x2c3 NEW_2
	return 0; // 0x2c5 Return
}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool, var_7_object, var_8_object, var_9_bool)
{
	return 0; // 0x2c7 Return
}


task_4_event_3(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x2c8 PushV
	var_10_bool = 0; var_11_object = Obj(); // 0x2c9 PushV
	var_11_object = var_7_object; // 0x2ca Mov
	func_1015(var_10_bool, var_11_object); // 0x2cb NEW_2
	var_44_bool = var_10_bool == 0; // 0x2cd Not
	if(var_44_bool == 0) goto Label_720; // 0x2ce JumpB
	return 2; // 0x2cf Return
	
Label_720:
	var_45_object = GlobalVars[0]; // 0x2d0 PushGE
	in(var_9_bool, var_7_object); // 0x2d1 ObjFunc
	var_46_bool = var_9_bool; // 0x2d3 Push
	if(var_46_bool == 0) goto Label_734; // 0x2d4 JumpB
	func_842(); // 0x2d6 NEW_2
	var_47_object = Obj(); // 0x2d8 PushV
	var_47_object = var_7_object; // 0x2d9 Mov
	TaskCall(2); // 0x2da TaskCall
	func_190(var_48_object, var_47_object); // 0x2db NEW_2
	TaskReturn(); // 0x2dc TaskReturn
	
Label_734:
	return 2; // 0x2de Return
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_object = Obj(); // 0x2e9 PushV
	var_9_object = var_7_object; // 0x2ea Mov
	func_1934(var_8_bool, var_9_object); // 0x2eb NEW_2
	if(var_8_bool == 0) goto Label_757; // 0x2ed JumpB
	func_842(); // 0x2ef NEW_2
	var_127_object = Obj(); // 0x2f1 PushV
	var_127_object = var_7_object; // 0x2f2 Mov
	func_1988(var_127_object); // 0x2f3 NEW_2
	
Label_757:
	return 0; // 0x2f5 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool, var_7_object, var_8_int, var_9_float, var_10_float)
{
	var_11_object = Obj(); var_12_int = 0; var_13_float = 0; // 0x651 PushV
	var_11_object = var_7_object; // 0x652 Mov
	var_12_int = var_8_int; // 0x653 Mov
	var_13_float = var_9_float; // 0x654 Mov
	func_1083(var_11_object, var_12_int, var_13_float); // 0x655 NEW_2
	return 0; // 0x657 Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool, var_7_object, var_8_int, var_9_float, var_10_float, var_11_cvector, var_12_cvector)
{
	var_13_object = Obj(); var_14_int = 0; var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); // 0x659 PushV
	var_13_object = var_7_object; // 0x65a Mov
	var_14_int = var_8_int; // 0x65b Mov
	var_15_float = var_9_float; // 0x65c Mov
	var_16_cvector = var_11_cvector; // 0x65d Mov
	var_17_cvector = var_12_cvector; // 0x65e Mov
	func_1151(var_15_float, var_16_cvector, var_17_cvector); // 0x65f NEW_2
	return 0; // 0x661 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool, var_7_object, var_8_string)
{
	var_9_float = 0; var_10_float = 0; // 0x662 PushV
	var_11_string = "health"; // 0x663 PushS
	var_12_bool = var_8_string == var_11_string; // 0x664 Eq
	if(var_12_bool == 0) goto Label_1646; // 0x665 JumpB
	var_13_string = "health"; // 0x666 PushS
	GetProperty(var_13_string, var_10_float); // 0x667 Func
	var_14_int = 0; // 0x669 PushI
	var_15_bool = var_10_float <= var_14_int; // 0x66a LE
	if(var_15_bool == 0) goto Label_1646; // 0x66b JumpB
	SignalDeath(var_7_object); // 0x66c Func
	
Label_1646:
	return 2; // 0x66e Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_object = Obj(); // 0x670 PushV
	var_9_object = var_7_object; // 0x671 Mov
	func_884(var_8_bool, var_9_object); // 0x672 NEW_2
	if(var_8_bool == 0) goto Label_1660; // 0x674 JumpB
	var_12_object = Obj(); // 0x675 PushV
	func_1342(var_12_object); // 0x676 NEW_2
	var_15_float = 0.0; // 0x678 PushF
	var_16_bool = 1; // 0x679 PushB
	ReportReputationChange(var_7_object, var_12_object, var_15_float, var_16_bool); // 0x67a Func
	
Label_1660:
	var_17_object = Obj(); // 0x67c PushV
	var_17_object = var_7_object; // 0x67d Mov
	func_2008(var_17_object); // 0x67e NEW_2
	return 0; // 0x680 Return
}


event_6(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool)
{
	var_7_object = Obj(); // 0x7d0 PushV
	func_1342(var_7_object); // 0x7d1 NEW_2
	RemoveActor(var_7_object); // 0x7d3 Func
	Hold(); // 0x7d5 Func
	return 0; // 0x7d7 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool)
{
	var_7_bool = 0; // 0x290 PushV
	func_1183(var_7_bool); // 0x291 NEW_2
	var_10_bool = var_7_bool == 0; // 0x293 Not
	if(var_10_bool == 0) goto Label_666; // 0x294 JumpB
	TaskCall(0); // 0x296 TaskCall
	func_12(); // 0x297 NEW_2
	TaskReturn(); // 0x298 TaskReturn
	
Label_666:
	func_735(); // 0x29b NEW_2
	return 0; // 0x29d Return
}


func_1665(var_16_bool, var_17_object, var_18_bool)
{
	var_19_string = ""; var_20_string = ""; // 0x681 PushV
	var_21_bool = 0; var_22_object = Obj(); var_23_string = ""; // 0x682 PushV
	var_22_object = var_17_object; // 0x683 Mov
	var_23_string = "class"; // 0x684 MovS
	func_889(var_21_bool, var_22_object, var_23_string); // 0x685 NEW_2
	var_30_bool = var_21_bool == 0; // 0x687 Not
	if(var_30_bool == 0) goto Label_1675; // 0x688 JumpB
	var_16_bool = 0; // 0x689 MovB
	return 2; // 0x68a Return
	
Label_1675:
	var_31_string = "class"; // 0x68b PushS
	GetProperty(var_31_string, var_20_string); // 0x68c ObjFunc
	var_32_bool = 0; // 0x68e PushV
	var_32_bool = 1; // 0x68f MovB
	var_33_bool = 0; // 0x690 PushV
	var_33_bool = 1; // 0x691 MovB
	var_34_bool = 0; // 0x692 PushV
	var_34_bool = 1; // 0x693 MovB
	var_35_bool = 0; // 0x694 PushV
	var_35_bool = 1; // 0x695 MovB
	var_36_bool = 0; // 0x696 PushV
	var_36_bool = 1; // 0x697 MovB
	var_37_bool = 0; // 0x698 PushV
	var_37_bool = 1; // 0x699 MovB
	var_38_bool = 0; // 0x69a PushV
	var_38_bool = 1; // 0x69b MovB
	var_39_bool = 0; // 0x69c PushV
	var_39_bool = 1; // 0x69d MovB
	var_40_bool = 0; // 0x69e PushV
	var_40_bool = 1; // 0x69f MovB
	var_41_bool = 0; // 0x6a0 PushV
	var_41_bool = 1; // 0x6a1 MovB
	var_42_string = "patrol"; // 0x6a2 PushS
	var_43_bool = var_20_string == var_42_string; // 0x6a3 Eq
	if(var_43_bool == 0) goto Label_1705; // 0x6a4 JumpB
	var_44_string = "sanitar"; // 0x6a5 PushS
	var_45_bool = var_20_string == var_44_string; // 0x6a6 Eq
	if(var_45_bool == 0) goto Label_1705; // 0x6a7 JumpB
	var_41_bool = 0; // 0x6a8 MovB
	
Label_1705:
	if(var_41_bool == 0) goto Label_1710; // 0x6a9 JumpB
	var_46_string = "soldier"; // 0x6aa PushS
	var_47_bool = var_20_string == var_46_string; // 0x6ab Eq
	if(var_47_bool == 0) goto Label_1710; // 0x6ac JumpB
	var_40_bool = 0; // 0x6ad MovB
	
Label_1710:
	if(var_40_bool == 0) goto Label_1715; // 0x6ae JumpB
	var_48_string = "woman"; // 0x6af PushS
	var_49_bool = var_20_string == var_48_string; // 0x6b0 Eq
	if(var_49_bool == 0) goto Label_1715; // 0x6b1 JumpB
	var_39_bool = 0; // 0x6b2 MovB
	
Label_1715:
	if(var_39_bool == 0) goto Label_1720; // 0x6b3 JumpB
	var_50_string = "wasted_girl"; // 0x6b4 PushS
	var_51_bool = var_20_string == var_50_string; // 0x6b5 Eq
	if(var_51_bool == 0) goto Label_1720; // 0x6b6 JumpB
	var_38_bool = 0; // 0x6b7 MovB
	
Label_1720:
	if(var_38_bool == 0) goto Label_1725; // 0x6b8 JumpB
	var_52_string = "vaxxabitka"; // 0x6b9 PushS
	var_53_bool = var_20_string == var_52_string; // 0x6ba Eq
	if(var_53_bool == 0) goto Label_1725; // 0x6bb JumpB
	var_37_bool = 0; // 0x6bc MovB
	
Label_1725:
	if(var_37_bool == 0) goto Label_1730; // 0x6bd JumpB
	var_54_string = "vaxxabit"; // 0x6be PushS
	var_55_bool = var_20_string == var_54_string; // 0x6bf Eq
	if(var_55_bool == 0) goto Label_1730; // 0x6c0 JumpB
	var_36_bool = 0; // 0x6c1 MovB
	
Label_1730:
	if(var_36_bool == 0) goto Label_1735; // 0x6c2 JumpB
	var_56_string = "little_girl"; // 0x6c3 PushS
	var_57_bool = var_20_string == var_56_string; // 0x6c4 Eq
	if(var_57_bool == 0) goto Label_1735; // 0x6c5 JumpB
	var_35_bool = 0; // 0x6c6 MovB
	
Label_1735:
	if(var_35_bool == 0) goto Label_1740; // 0x6c7 JumpB
	var_58_string = "girl"; // 0x6c8 PushS
	var_59_bool = var_20_string == var_58_string; // 0x6c9 Eq
	if(var_59_bool == 0) goto Label_1740; // 0x6ca JumpB
	var_34_bool = 0; // 0x6cb MovB
	
Label_1740:
	if(var_34_bool == 0) goto Label_1745; // 0x6cc JumpB
	var_60_string = "dohodyaga"; // 0x6cd PushS
	var_61_bool = var_20_string == var_60_string; // 0x6ce Eq
	if(var_61_bool == 0) goto Label_1745; // 0x6cf JumpB
	var_33_bool = 0; // 0x6d0 MovB
	
Label_1745:
	if(var_33_bool == 0) goto Label_1750; // 0x6d1 JumpB
	var_62_string = "nudegirl"; // 0x6d2 PushS
	var_63_bool = var_20_string == var_62_string; // 0x6d3 Eq
	if(var_63_bool == 0) goto Label_1750; // 0x6d4 JumpB
	var_32_bool = 0; // 0x6d5 MovB
	
Label_1750:
	if(var_32_bool == 0) goto Label_1753; // 0x6d6 JumpB
	var_16_bool = 1; // 0x6d7 MovB
	return 2; // 0x6d8 Return
	
Label_1753:
	var_64_bool = var_18_bool; // 0x6d9 Push
	if(var_64_bool == 0) goto Label_1757; // 0x6da JumpB
	var_16_bool = 0; // 0x6db MovB
	return 2; // 0x6dc Return
	
Label_1757:
	var_16_bool = 1; // 0x6dd MovB
	var_65_bool = 0; // 0x6de PushV
	var_65_bool = 1; // 0x6df MovB
	var_66_bool = 0; // 0x6e0 PushV
	var_66_bool = 1; // 0x6e1 MovB
	var_67_bool = 0; // 0x6e2 PushV
	var_67_bool = 1; // 0x6e3 MovB
	var_68_bool = 0; // 0x6e4 PushV
	var_68_bool = 1; // 0x6e5 MovB
	var_69_bool = 0; // 0x6e6 PushV
	var_69_bool = 1; // 0x6e7 MovB
	var_70_string = "worker"; // 0x6e8 PushS
	var_71_bool = var_20_string == var_70_string; // 0x6e9 Eq
	if(var_71_bool == 0) goto Label_1775; // 0x6ea JumpB
	var_72_string = "butcher"; // 0x6eb PushS
	var_73_bool = var_20_string == var_72_string; // 0x6ec Eq
	if(var_73_bool == 0) goto Label_1775; // 0x6ed JumpB
	var_69_bool = 0; // 0x6ee MovB
	
Label_1775:
	if(var_69_bool == 0) goto Label_1780; // 0x6ef JumpB
	var_74_string = "boy"; // 0x6f0 PushS
	var_75_bool = var_20_string == var_74_string; // 0x6f1 Eq
	if(var_75_bool == 0) goto Label_1780; // 0x6f2 JumpB
	var_68_bool = 0; // 0x6f3 MovB
	
Label_1780:
	if(var_68_bool == 0) goto Label_1785; // 0x6f4 JumpB
	var_76_string = "unosha"; // 0x6f5 PushS
	var_77_bool = var_20_string == var_76_string; // 0x6f6 Eq
	if(var_77_bool == 0) goto Label_1785; // 0x6f7 JumpB
	var_67_bool = 0; // 0x6f8 MovB
	
Label_1785:
	if(var_67_bool == 0) goto Label_1790; // 0x6f9 JumpB
	var_78_string = "wasted_male"; // 0x6fa PushS
	var_79_bool = var_20_string == var_78_string; // 0x6fb Eq
	if(var_79_bool == 0) goto Label_1790; // 0x6fc JumpB
	var_66_bool = 0; // 0x6fd MovB
	
Label_1790:
	if(var_66_bool == 0) goto Label_1795; // 0x6fe JumpB
	var_80_string = "alkash"; // 0x6ff PushS
	var_81_bool = var_20_string == var_80_string; // 0x700 Eq
	if(var_81_bool == 0) goto Label_1795; // 0x701 JumpB
	var_65_bool = 0; // 0x702 MovB
	
Label_1795:
	if(var_65_bool == 0) goto Label_1800; // 0x703 JumpB
	var_82_string = "morlok"; // 0x704 PushS
	var_83_bool = var_20_string == var_82_string; // 0x705 Eq
	if(var_83_bool == 0) goto Label_1800; // 0x706 JumpB
	var_16_bool = 0; // 0x707 MovB
	
Label_1800:
	return 2; // 0x708 Return
}


func_1410(var_202_float, var_203_cvector, var_204_cvector)
{
	var_205_float = 0; var_206_cvector = CVector(0,0,0); var_207_cvector = CVector(0,0,0); // 0x583 PushV
	var_206_cvector = var_203_cvector; // 0x584 Mov
	var_207_cvector = var_204_cvector; // 0x585 Mov
	func_1391(var_205_float, var_206_cvector, var_207_cvector); // 0x586 NEW_2
	var_214_float = 0; var_215_cvector = CVector(0,0,0); // 0x588 PushV
	var_215_cvector = var_203_cvector; // 0x589 Mov
	func_1400(var_214_float, var_215_cvector); // 0x58a NEW_2
	var_223_float = 0; var_224_cvector = CVector(0,0,0); // 0x58c PushV
	var_224_cvector = var_204_cvector; // 0x58d Mov
	func_1400(var_223_float, var_224_cvector); // 0x58e NEW_2
	var_225_float = var_214_float * var_223_float; // 0x590 Mult
	var_202_float = var_205_float / var_205_float; // 0x591 Div2
	return 0; // 0x592 Return
}


func_901(var_250_float, var_251_object, var_252_float, var_253_int)
{
	var_254_int = 0; var_255_string = ""; var_256_int = 0; var_257_float = 0; var_258_float = 0; var_259_float = 0; var_260_int = 0; var_261_string = ""; var_262_int = 0; var_263_float = 0; var_264_float = 0; var_265_float = 0; // 0x385 PushV
	var_266_bool = 0; var_267_object = Obj(); var_268_string = ""; // 0x386 PushV
	var_267_object = var_251_object; // 0x387 Mov
	var_268_string = "health"; // 0x388 MovS
	func_889(var_266_bool, var_267_object, var_268_string); // 0x389 NEW_2
	var_269_bool = var_266_bool == 0; // 0x38b Not
	if(var_269_bool == 0) goto Label_911; // 0x38c JumpB
	var_250_float = 0.0; // 0x38d MovF
	return 12; // 0x38e Return
	
Label_911:
	var_270_bool = 0; var_271_object = Obj(); var_272_string = ""; // 0x38f PushV
	var_271_object = var_251_object; // 0x390 Mov
	var_272_string = "armor"; // 0x391 MovS
	func_889(var_270_bool, var_271_object, var_272_string); // 0x392 NEW_2
	var_273_bool = var_270_bool == 0; // 0x394 Not
	if(var_273_bool == 0) goto Label_920; // 0x395 JumpB
	var_260_int = 0; // 0x396 MovI
	goto Label_923; // 0x397 Jump
	
Label_923:
	var_274_string = "armor_"; // 0x39b PushS
	var_275_string = ""; var_276_int = 0; // 0x39c PushV
	var_276_int = var_253_int; // 0x39d Mov
	func_848(var_275_string, var_276_int); // 0x39e NEW_2
	var_261_string = var_274_string + var_275_string; // 0x3a0 Add2
	var_281_bool = 0; var_282_object = Obj(); var_283_string = ""; // 0x3a1 PushV
	var_282_object = var_251_object; // 0x3a2 Mov
	var_283_string = var_261_string; // 0x3a3 Mov
	func_889(var_281_bool, var_282_object, var_283_string); // 0x3a4 NEW_2
	var_284_bool = var_281_bool == 0; // 0x3a6 Not
	if(var_284_bool == 0) goto Label_938; // 0x3a7 JumpB
	var_262_int = 0; // 0x3a8 MovI
	goto Label_940; // 0x3a9 Jump
	
Label_940:
	var_285_float = 0; var_286_float = 0; var_287_float = 0; // 0x3ac PushV
	var_288_int = var_260_int + var_262_int; // 0x3ad Add
	var_289_float = 100.0; // 0x3ae PushF
	var_286_float = var_288_int / var_288_int; // 0x3af Div2
	var_287_float = 1; // 0x3b0 MovI
	func_1362(var_285_float, var_286_float, var_287_float); // 0x3b1 NEW_2
	var_263_float = var_285_float; // 0x3b2 Mov
	var_291_string = "health"; // 0x3b4 PushS
	GetProperty(var_291_string, var_264_float); // 0x3b5 ObjFunc
	var_292_int = 1; // 0x3b7 PushI
	var_293_int = var_292_int - var_263_float; // 0x3b8 Sub
	var_265_float = var_252_float * var_293_int; // 0x3b9 Mult2
	var_294_string = "health"; // 0x3ba PushS
	var_295_float = 0; var_296_float = 0; var_297_float = 0; var_298_float = 0; // 0x3bb PushV
	var_296_float = var_264_float - var_265_float; // 0x3bc Sub2
	var_297_float = 0; // 0x3bd MovI
	var_298_float = 1; // 0x3be MovI
	func_1369(var_295_float, var_296_float, var_297_float, var_298_float); // 0x3bf NEW_2
	SetProperty(var_294_string, var_295_float); // 0x3c1 ObjFunc
	var_301_bool = 0; var_302_object = Obj(); // 0x3c3 PushV
	var_302_object = var_251_object; // 0x3c4 Mov
	func_884(var_301_bool, var_302_object); // 0x3c5 NEW_2
	if(var_301_bool == 0) goto Label_972; // 0x3c7 JumpB
	var_303_float = 0; // 0x3c8 PushV
	var_303_float = -var_265_float; // 0x3c9 Neg2
	func_1427(var_303_float); // 0x3ca NEW_2
	
Label_972:
	var_250_float = var_265_float; // 0x3cc Mov
	return 12; // 0x3cd Return
	
Label_938:
	GetProperty(var_261_string, var_262_int); // 0x3aa ObjFunc
	
Label_920:
	var_311_string = "armor"; // 0x398 PushS
	GetProperty(var_311_string, var_260_int); // 0x399 ObjFunc
}


func_1543()
{
	var_78_int = 0; // 0x607 PushV
	func_1476(var_78_int); // 0x608 NEW_2
	var_82_int = 1; // 0x60a PushI
	var_83_bool = var_78_int != var_82_int; // 0x60b Neq
	if(var_83_bool == 0) goto Label_1550; // 0x60c JumpB
	return 0; // 0x60d Return
	
Label_1550:
	var_84_string = ""; // 0x60e PushV
	var_84_string = "liver"; // 0x60f MovS
	func_1526(var_84_string); // 0x610 NEW_2
	var_95_string = ""; // 0x612 PushV
	var_95_string = "kidney"; // 0x613 MovS
	func_1526(var_95_string); // 0x614 NEW_2
	var_96_string = ""; // 0x616 PushV
	var_96_string = "heart"; // 0x617 MovS
	func_1526(var_96_string); // 0x618 NEW_2
	var_97_string = ""; // 0x61a PushV
	var_97_string = "blood"; // 0x61b MovS
	func_1526(var_97_string); // 0x61c NEW_2
	return 0; // 0x61e Return
}


func_1801()
{
	var_13_object = GlobalVars[0]; // 0x709 PushGE
	var_14_object = Obj(); // 0x70a PushV
	func_1385(var_14_object); // 0x70b NEW_2
	var_13_object = var_14_object; // 0x70c Mov
	GlobalVars[0] = var_13_object; // 0x70e PopGE
	return 0; // 0x70f Return
}


func_651()
{
	func_842(); // 0x28d NEW_2
	return 0; // 0x28f Return
}


func_12()
{
	
Label_12:
	Hold(); // 0xc Func
	var_11_bool = 0; // 0xe PushV
	func_1183(var_11_bool); // 0xf NEW_2
	var_12_bool = var_11_bool == 0; // 0x11 Not
	if(var_12_bool == 0) goto Label_12; // 0x12 JumpB
	return 0; // 0x13 Return
}


func_1165()
{
	var_327_cvector = CVector(0,0,0); var_328_cvector = CVector(0,0,0); var_329_cvector = CVector(0,0,0); var_330_cvector = CVector(0,0,0); var_331_cvector = CVector(0,0,0); var_332_cvector = CVector(0,0,0); // 0x48d PushV
	GetPosition(var_330_cvector); // 0x48e ObjFunc
	GetPosition(var_331_cvector); // 0x490 Func
	var_332_cvector = var_330_cvector - var_331_cvector; // 0x492 Sub2
	var_333_float = GetByIndex(var_332_cvector, 0); // 0x493 PushE
	var_334_float = GetByIndex(var_332_cvector, 2); // 0x494 PushE
	RotateAsync(var_333_float, var_334_float); // 0x495 Func
	return 6; // 0x497 Return
}


func_1934(var_8_bool, var_9_object)
{
	var_10_bool = 0; var_11_bool = 0; // 0x78e PushV
	var_12_bool = 0; var_13_object = Obj(); // 0x78f PushV
	var_13_object = var_9_object; // 0x790 Mov
	func_1015(var_12_bool, var_13_object); // 0x791 NEW_2
	var_46_bool = var_12_bool == 0; // 0x793 Not
	if(var_46_bool == 0) goto Label_1943; // 0x794 JumpB
	var_8_bool = 0; // 0x795 MovB
	return 2; // 0x796 Return
	
Label_1943:
	var_47_object = GlobalVars[0]; // 0x797 PushGE
	in(var_11_bool, var_9_object); // 0x798 ObjFunc
	var_48_bool = var_11_bool; // 0x79a Push
	if(var_48_bool == 0) goto Label_1950; // 0x79b JumpB
	var_8_bool = 1; // 0x79c MovB
	return 2; // 0x79d Return
	
Label_1950:
	var_49_bool = 0; var_50_object = Obj(); // 0x79e PushV
	var_50_object = var_9_object; // 0x79f Mov
	func_1854(var_49_bool, var_50_object); // 0x7a0 NEW_2
	var_8_bool = var_49_bool; // 0x7a1 Mov
	return 2; // 0x7a3 Return
}


func_1039(var_24_object)
{
	var_25_bool = 0; var_26_int = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_string = ""; var_32_bool = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_string = ""; // 0x40f PushV
	var_39_bool = var_24_object == 0; // 0x410 NullEq
	if(var_39_bool == 0) goto Label_1043; // 0x411 JumpB
	return 14; // 0x412 Return
	
Label_1043:
	IsDead(var_32_bool); // 0x413 Func
	var_40_bool = var_32_bool; // 0x415 Push
	if(var_40_bool == 0) goto Label_1048; // 0x416 JumpB
	return 14; // 0x417 Return
	
Label_1048:
	GetSecondaryAnimationType(var_33_int); // 0x418 Func
	var_41_int = 0; // 0x41a PushI
	var_42_bool = var_33_int < var_41_int; // 0x41b LT
	if(var_42_bool == 0) goto Label_1054; // 0x41c JumpB
	return 14; // 0x41d Return
	
Label_1054:
	GetPosition(var_34_cvector); // 0x41e ObjFunc
	GetPosition(var_35_cvector); // 0x420 Func
	GetDirection(var_36_cvector); // 0x422 Func
	var_37_cvector = var_35_cvector - var_34_cvector; // 0x424 Sub2
	var_43_float = GetByIndex(var_37_cvector, 0); // 0x425 PushE
	var_44_float = GetByIndex(var_36_cvector, 0); // 0x426 PushE
	var_45_float = var_43_float * var_44_float; // 0x427 Mult
	var_46_float = GetByIndex(var_37_cvector, 2); // 0x428 PushE
	var_47_float = GetByIndex(var_36_cvector, 2); // 0x429 PushE
	var_48_float = var_46_float * var_47_float; // 0x42a Mult
	var_49_int = var_45_float + var_48_float; // 0x42b Add
	var_50_int = 0; // 0x42c PushI
	var_51_bool = var_49_int >= var_50_int; // 0x42d GE
	if(var_51_bool == 0) goto Label_1073; // 0x42e JumpB
	var_38_string = "fhit"; // 0x42f MovS
	goto Label_1074; // 0x430 Jump
	
Label_1074:
	var_52_string = "hit_react"; // 0x432 PushS
	var_53_string = "1"; // 0x433 PushS
	var_54_int = var_38_string + var_53_string; // 0x434 Add
	var_55_string = "2"; // 0x435 PushS
	var_56_int = var_38_string + var_55_string; // 0x436 Add
	var_57_int = -10; // 0x437 PushI
	FadeSecondaryAnimation(var_52_string, var_54_int, var_56_int, var_57_int); // 0x438 Func
	return 14; // 0x43a Return
	
Label_1073:
	var_38_string = "bhit"; // 0x431 MovS
}


func_1808(var_132_object, var_133_bool)
{
	var_134_object = Obj(); var_135_bool = 0; // 0x711 PushV
	var_134_object = var_132_object; // 0x712 Mov
	var_135_bool = var_133_bool; // 0x713 Mov
	TaskCall(3); // 0x714 TaskCall
	func_310(var_136_object, var_137_object, var_138_bool, var_134_object, var_135_bool); // 0x715 NEW_2
	TaskReturn(); // 0x716 TaskReturn
	ResetAAS(); // 0x718 Func
	return 0; // 0x71a Return
}


func_1427(var_303_float)
{
	var_304_object = Obj(); var_305_object = Obj(); // 0x593 PushV
	CreateFloatVector(var_305_object); // 0x594 Func
	add(var_303_float); // 0x596 ObjFunc
	var_306_int = 0; // 0x598 PushI
	var_307_bool = var_303_float < var_306_int; // 0x599 LT
	if(var_307_bool == 0) goto Label_1439; // 0x59a JumpB
	var_308_float = 0.7; // 0x59b PushF
	var_309_int = 500; // 0x59c PushI
	RumblePlay(var_308_float, var_309_int); // 0x59d Func
	
Label_1439:
	var_310_int = 15; // 0x59f PushI
	SendWorldWndMessage(var_310_int, var_305_object); // 0x5a0 Func
	return 2; // 0x5a2 Return
}


func_1176(var_241_float)
{
	var_243_float = 0; var_244_float = 0; var_245_float = 0; var_246_float = 0; // 0x498 PushV
	GetEyesHeight(var_245_float); // 0x499 Func
	GetEyesHeight(var_246_float); // 0x49b ObjFunc
	var_241_float = var_246_float - var_245_float; // 0x49d Sub2
	return 4; // 0x49e Return
}


func_25(var_19_object)
{
	var_20_bool = 0; var_21_object = Obj(); // 0x1a PushV
	var_21_object = var_19_object; // 0x1b Mov
	func_884(var_20_bool, var_21_object); // 0x1c NEW_2
	if(var_20_bool == 0) goto Label_34; // 0x1e JumpB
	func_1567(); // 0x20 NEW_2
	
Label_34:
	func_1543(); // 0x23 NEW_2
	var_98_object = Obj(); // 0x25 PushV
	var_98_object = var_19_object; // 0x26 Mov
	func_42(var_98_object); // 0x27 NEW_2
	return 0; // 0x29 Return
}


func_1819(var_17_object)
{
	var_18_bool = 0; var_19_bool = 0; // 0x71b PushV
	var_20_bool = var_17_object == 0; // 0x71c NullEq
	if(var_20_bool == 0) goto Label_1823; // 0x71d JumpB
	return 2; // 0x71e Return
	
Label_1823:
	var_21_object = GlobalVars[0]; // 0x71f PushGE
	in(var_19_bool, var_17_object); // 0x720 ObjFunc
	var_22_bool = var_19_bool == 0; // 0x722 Not
	if(var_22_bool == 0) goto Label_1831; // 0x723 JumpB
	var_23_object = GlobalVars[0]; // 0x724 PushGE
	add(var_17_object); // 0x725 ObjFunc
	
Label_1831:
	var_24_bool = 0; var_25_object = Obj(); // 0x727 PushV
	var_25_object = var_17_object; // 0x728 Mov
	func_884(var_24_bool, var_25_object); // 0x729 NEW_2
	if(var_24_bool == 0) goto Label_1842; // 0x72b JumpB
	var_28_object = Obj(); // 0x72c PushV
	func_1342(var_28_object); // 0x72d NEW_2
	var_31_float = 0.0; // 0x72f PushF
	ReportReputationChange(var_17_object, var_28_object, var_31_float); // 0x730 Func
	
Label_1842:
	return 2; // 0x732 Return
}


func_158(var_121_string)
{
	RemoveRTEnvelope(); // 0x9f Func
	SetDeathState(); // 0xa1 Func
	Stop(); // 0xa3 Func
	StopAsync(); // 0xa5 Func
	StopSecondaryAnimation(); // 0xa7 Func
	var_122_string = ""; // 0xa9 PushV
	var_122_string = var_121_string; // 0xaa Mov
	func_1214(var_122_string); // 0xab NEW_2
	var_151_string = "all"; // 0xad PushS
	PlayAnimation(var_151_string, var_121_string); // 0xae Func
	WaitForAnimEnd(); // 0xb0 Func
	var_152_string = "all"; // 0xb2 PushS
	LockAnimationEnd(var_152_string, var_121_string); // 0xb3 Func
	RemoveEnvelope(); // 0xb5 Func
	return 0; // 0xb7 Return
}


func_1183(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x49f PushV
	IsLoaded(var_9_bool); // 0x4a0 Func
	var_7_bool = var_9_bool; // 0x4a2 Mov
	return 2; // 0x4a3 Return
}


func_1567()
{
	var_22_int = 0; var_23_bool = 0; var_24_int = 0; var_25_bool = 0; // 0x61f PushV
	var_26_int = 0; // 0x620 PushI
	ClearSubContainer(var_26_int); // 0x621 Func
	var_27_int = 0; var_28_int = 0; // 0x623 PushV
	var_27_int = 500; // 0x624 MovI
	var_28_int = 1000; // 0x625 MovI
	func_1495(var_27_int, var_28_int); // 0x626 NEW_2
	var_46_string = ""; var_47_int = 0; var_48_int = 0; var_49_int = 0; // 0x628 PushV
	var_46_string = "rifle_ammo"; // 0x629 MovS
	var_47_int = 1; // 0x62a MovI
	var_48_int = 3; // 0x62b MovI
	var_49_int = 3; // 0x62c MovI
	func_1199(var_46_string, var_47_int, var_48_int, var_49_int); // 0x62d NEW_2
	var_62_string = ""; var_63_int = 0; var_64_int = 0; var_65_int = 0; // 0x62f PushV
	var_62_string = "rusk"; // 0x630 MovS
	var_63_int = 1; // 0x631 MovI
	var_64_int = 3; // 0x632 MovI
	var_65_int = 2; // 0x633 MovI
	func_1199(var_62_string, var_63_int, var_64_int, var_65_int); // 0x634 NEW_2
	var_66_string = ""; var_67_int = 0; var_68_int = 0; // 0x636 PushV
	var_66_string = "bandage"; // 0x637 MovS
	var_67_int = 1; // 0x638 MovI
	var_68_int = 6; // 0x639 MovI
	func_1188(var_66_string, var_67_int, var_68_int); // 0x63a NEW_2
	var_75_string = ""; var_76_int = 0; var_77_int = 0; // 0x63c PushV
	var_75_string = "tourniquet"; // 0x63d MovS
	var_76_int = 1; // 0x63e MovI
	var_77_int = 6; // 0x63f MovI
	func_1188(var_75_string, var_76_int, var_77_int); // 0x640 NEW_2
	return 4; // 0x642 Return
}


func_1956(var_128_object)
{
	var_129_object = Obj(); // 0x7a5 PushV
	var_129_object = var_128_object; // 0x7a6 Mov
	func_1988(var_129_object); // 0x7a7 NEW_2
	return 0; // 0x7a9 Return
}


func_1444(var_8_bool, var_9_string, var_10_string)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x5a4 PushV
	FindActor(var_12_object, var_9_string); // 0x5a5 Func
	var_13_bool = var_12_object == 0; // 0x5a7 NullEq
	if(var_13_bool == 0) goto Label_1451; // 0x5a8 JumpB
	var_8_bool = 0; // 0x5a9 MovB
	return 2; // 0x5aa Return
	
Label_1451:
	Trigger(var_12_object, var_10_string); // 0x5ab Func
	var_8_bool = 1; // 0x5ad MovB
	return 2; // 0x5ae Return
}


func_1188(var_66_string, var_67_int, var_68_int)
{
	var_69_bool = 0; var_70_bool = 0; // 0x4a4 PushV
	var_71_bool = 0; var_72_int = 0; var_73_int = 0; // 0x4a5 PushV
	var_72_int = var_67_int; // 0x4a6 Mov
	var_73_int = var_68_int; // 0x4a7 Mov
	func_1380(var_71_bool, var_72_int, var_73_int); // 0x4a8 NEW_2
	if(var_71_bool == 0) goto Label_1198; // 0x4aa JumpB
	var_74_int = 0; // 0x4ab PushI
	AddItem(var_70_bool, var_66_string, var_74_int); // 0x4ac Func
	
Label_1198:
	return 2; // 0x4ae Return
}


func_42(var_98_object)
{
	EventDisable(0); // 0x2b EventDisable
	var_99_object = Obj(); // 0x2c PushV
	var_99_object = var_98_object; // 0x2d Mov
	func_67(var_99_object); // 0x2e NEW_2
	var_179_int = 50; // 0x30 PushI
	var_180_int = 40; // 0x31 PushI
	SetRTEnvelope(var_179_int, var_180_int); // 0x32 Func
	EventEnable(0); // 0x34 EventEnable
	
Label_53:
	Hold(); // 0x35 Func
	goto Label_53; // 0x37 Jump
}


func_1962(var_10_bool, var_11_object, var_12_object, var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0; // 0x7aa PushV
	var_16_bool = 0; var_17_object = Obj(); var_18_bool = 0; // 0x7ab PushV
	var_17_object = var_12_object; // 0x7ac Mov
	var_18_bool = !var_13_bool; // 0x7ad Not2
	func_1665(var_16_bool, var_17_object, var_18_bool); // 0x7ae NEW_2
	if(var_16_bool == 0) goto Label_1986; // 0x7b0 JumpB
	CanSee(var_15_bool, var_11_object); // 0x7b1 Func
	var_84_bool = 0; // 0x7b3 PushV
	var_84_bool = 1; // 0x7b4 MovB
	var_85_bool = var_15_bool; // 0x7b5 Push
	if(var_85_bool == 0) goto Label_1983; // 0x7b6 JumpB
	var_86_float = 0; var_87_object = Obj(); // 0x7b7 PushV
	var_87_object = var_11_object; // 0x7b8 Mov
	func_869(var_87_object); // 0x7b9 NEW_2
	var_94_float = 490000.0; // 0x7bb PushF
	var_95_bool = var_86_float <= var_94_float; // 0x7bc LE
	if(var_95_bool == 0) goto Label_1983; // 0x7bd JumpB
	var_84_bool = 0; // 0x7be MovB
	
Label_1983:
	if(var_84_bool == 0) goto Label_1986; // 0x7bf JumpB
	var_10_bool = 1; // 0x7c0 MovB
	return 2; // 0x7c1 Return
	
Label_1986:
	var_10_bool = 0; // 0x7c2 MovB
	return 2; // 0x7c3 Return
}


func_1199(var_46_string, var_47_int, var_48_int, var_49_int)
{
	var_50_int = 0; var_51_bool = 0; var_52_int = 0; var_53_bool = 0; // 0x4af PushV
	var_54_bool = 0; var_55_int = 0; var_56_int = 0; // 0x4b0 PushV
	var_55_int = var_47_int; // 0x4b1 Mov
	var_56_int = var_48_int; // 0x4b2 Mov
	func_1380(var_54_bool, var_55_int, var_56_int); // 0x4b3 NEW_2
	if(var_54_bool == 0) goto Label_1213; // 0x4b5 JumpB
	irand(var_52_int, var_49_int); // 0x4b6 Func
	var_59_int = 0; // 0x4b8 PushI
	var_60_int = 1; // 0x4b9 PushI
	var_61_int = var_52_int + var_60_int; // 0x4ba Add
	AddItem(var_53_bool, var_46_string, var_59_int, var_61_int); // 0x4bb Func
	
Label_1213:
	return 4; // 0x4bd Return
}


func_1456(var_143_object)
{
	var_144_bool = 0; var_145_bool = 0; // 0x5b0 PushV
	IsPlayerActor(var_143_object, var_145_bool); // 0x5b1 Func
	var_146_bool = var_145_bool; // 0x5b3 Push
	if(var_146_bool == 0) goto Label_1464; // 0x5b4 JumpB
	var_147_string = "attack"; // 0x5b5 PushS
	PlayGlobalMusic(var_147_string); // 0x5b6 Func
	
Label_1464:
	return 2; // 0x5b8 Return
}


func_1843(var_16_object)
{
	var_17_object = Obj(); // 0x734 PushV
	var_17_object = var_16_object; // 0x735 Mov
	func_1819(var_17_object); // 0x736 NEW_2
	var_32_object = Obj(); var_33_bool = 0; // 0x738 PushV
	var_32_object = var_16_object; // 0x739 Mov
	var_33_bool = 1; // 0x73a MovB
	func_1808(var_32_object, var_33_bool); // 0x73b NEW_2
	return 0; // 0x73d Return
}


func_310(var_0_object, var_1_object, var_2_object, var_134_object, var_135_bool)
{
	var_139_bool = 0; var_140_bool = 0; var_141_bool = 0; var_142_bool = 0; // 0x136 PushV
	var_0_object = var_134_object; // 0x137 TMov
	var_143_object = Obj(); // 0x138 PushV
	var_143_object = var_0_object; // 0x139 MovT
	func_1456(var_143_object); // 0x13a NEW_2
	func_1465(); // 0x13d NEW_2
	Face(var_0_object); // 0x13f Func
	var_154_bool = var_135_bool; // 0x141 Push
	if(var_154_bool == 0) goto Label_329; // 0x142 JumpB
	var_155_string = "all"; // 0x143 PushS
	var_156_string = "attack_on"; // 0x144 PushS
	PlayAnimation(var_155_string, var_156_string); // 0x145 Func
	WaitForAnimEnd(); // 0x147 Func
	
Label_329:
	var_157_string = "all"; // 0x149 PushS
	var_158_string = "attack_on"; // 0x14a PushS
	LockAnimationEnd(var_157_string, var_158_string); // 0x14b Func
	var_159_bool = 1; // 0x14d PushB
	SetAttackState(var_159_bool); // 0x14e Func
	
Label_336:
	var_160_bool = 0; var_161_object = Obj(); // 0x150 PushV
	var_161_object = var_0_object; // 0x151 MovT
	func_1015(var_160_bool, var_161_object); // 0x152 NEW_2
	if(var_160_bool == 0) goto Label_442; // 0x154 JumpB
	CanSee(var_142_bool, var_0_object); // 0x155 Func
	var_162_bool = var_142_bool; // 0x157 Push
	if(var_162_bool == 0) goto Label_353; // 0x158 JumpB
	var_163_object = Obj(); // 0x159 PushV
	var_163_object = var_0_object; // 0x15a MovT
	func_1456(var_163_object); // 0x15b NEW_2
	func_490(var_142_bool); // 0x15e NEW_2
	goto Label_432; // 0x160 Jump
	
Label_432:
	var_324_bool = var_1_object != 0; // 0x1b0 NullNeq
	if(var_324_bool == 0) goto Label_438; // 0x1b1 JumpB
	func_485(var_141_bool, var_142_bool); // 0x1b3 NEW_2
	goto Label_441; // 0x1b5 Jump
	
Label_441:
	goto Label_336; // 0x1b9 Jump
	
Label_438:
	var_325_int = 2; // 0x1b6 PushI
	Sleep(var_325_int); // 0x1b7 Func
	
Label_353:
	var_326_object = Obj(); // 0x161 PushV
	var_326_object = var_0_object; // 0x162 MovT
	func_1165(); // 0x163 NEW_2
	var_2_object = 1; // 0x165 TMovB
	var_335_string = "all"; // 0x166 PushS
	var_336_string = "hunt"; // 0x167 PushS
	PlayAnimation(var_335_string, var_336_string); // 0x168 Func
	WaitForAnimEnd(var_141_bool); // 0x16a Func
	var_337_bool = var_141_bool == 0; // 0x16c Not
	if(var_337_bool == 0) goto Label_376; // 0x16d JumpB
	var_338_bool = var_1_object != 0; // 0x16e NullNeq
	if(var_338_bool == 0) goto Label_371; // 0x16f JumpB
	func_485(var_141_bool, var_142_bool); // 0x171 NEW_2
	
Label_371:
	var_339_string = "all"; // 0x173 PushS
	var_340_string = "attack_on"; // 0x174 PushS
	LockAnimationEnd(var_339_string, var_340_string); // 0x175 Func
	goto Label_336; // 0x177 Jump
	
Label_376:
	var_341_bool = 0; var_342_object = Obj(); // 0x178 PushV
	var_342_object = var_0_object; // 0x179 MovT
	func_1015(var_341_bool, var_342_object); // 0x17a NEW_2
	var_343_bool = var_341_bool == 0; // 0x17c Not
	if(var_343_bool == 0) goto Label_383; // 0x17d JumpB
	goto Label_442; // 0x17e Jump
	
Label_442:
	var_344_bool = 0; // 0x1ba PushB
	SetAttackState(var_344_bool); // 0x1bb Func
	StopAsync(); // 0x1bd Func
	var_345_string = "all"; // 0x1bf PushS
	var_346_string = "attack_off"; // 0x1c0 PushS
	PlayAnimation(var_345_string, var_346_string); // 0x1c1 Func
	WaitForAnimEnd(); // 0x1c3 Func
	return 4; // 0x1c5 Return
	
Label_383:
	CanSee(var_142_bool, var_0_object); // 0x17f Func
	var_347_bool = var_142_bool; // 0x181 Push
	if(var_347_bool == 0) goto Label_394; // 0x182 JumpB
	var_2_object = 0; // 0x183 TMovB
	Face(var_0_object); // 0x184 Func
	func_490(var_142_bool); // 0x187 NEW_2
	goto Label_432; // 0x189 Jump
	
Label_394:
	var_348_string = "all"; // 0x18a PushS
	var_349_string = "attack_on"; // 0x18b PushS
	LockAnimationEnd(var_348_string, var_349_string); // 0x18c Func
	var_350_int = 3; // 0x18e PushI
	Sleep(var_350_int, var_141_bool); // 0x18f Func
	var_351_bool = var_141_bool == 0; // 0x191 Not
	if(var_351_bool == 0) goto Label_413; // 0x192 JumpB
	var_352_bool = var_1_object != 0; // 0x193 NullNeq
	if(var_352_bool == 0) goto Label_408; // 0x194 JumpB
	func_485(var_141_bool, var_142_bool); // 0x196 NEW_2
	
Label_408:
	var_353_string = "all"; // 0x198 PushS
	var_354_string = "attack_on"; // 0x199 PushS
	LockAnimationEnd(var_353_string, var_354_string); // 0x19a Func
	goto Label_336; // 0x19c Jump
	
Label_413:
	var_355_bool = 0; var_356_object = Obj(); // 0x19d PushV
	var_356_object = var_0_object; // 0x19e MovT
	func_1015(var_355_bool, var_356_object); // 0x19f NEW_2
	var_357_bool = var_355_bool == 0; // 0x1a1 Not
	if(var_357_bool == 0) goto Label_420; // 0x1a2 JumpB
	goto Label_442; // 0x1a3 Jump
	
Label_420:
	var_2_object = 0; // 0x1a4 TMovB
	CanSee(var_142_bool, var_0_object); // 0x1a5 Func
	var_358_bool = var_142_bool; // 0x1a7 Push
	if(var_358_bool == 0) goto Label_431; // 0x1a8 JumpB
	Face(var_0_object); // 0x1a9 Func
	func_490(var_142_bool); // 0x1ac NEW_2
	goto Label_432; // 0x1ae Jump
	
Label_431:
	goto Label_442; // 0x1af Jump
}


func_1465()
{
	var_148_object = Obj(); var_149_object = Obj(); // 0x5b9 PushV
	GetScene(var_149_object); // 0x5ba Func
	var_150_string = "battle"; // 0x5bc PushS
	var_151_object = Obj(); // 0x5bd PushV
	func_1342(var_151_object); // 0x5be NEW_2
	BroadcastMessage(var_150_string, var_151_object, var_149_object); // 0x5c0 Func
	return 2; // 0x5c2 Return
}


func_1083(var_11_object, var_12_int, var_13_float)
{
	var_14_cvector = CVector(0,0,0); var_15_object = Obj(); var_16_int = 0; var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_int = 0; var_21_int = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_object = Obj(); var_25_int = 0; var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_int = 0; var_30_int = 0; var_31_cvector = CVector(0,0,0); // 0x43b PushV
	var_32_bool = 0; // 0x43c PushV
	var_32_bool = 0; // 0x43d MovB
	var_33_bool = 0; // 0x43e PushV
	var_33_bool = 0; // 0x43f MovB
	var_34_object = var_11_object; // 0x440 Push
	if(var_34_object == 0) goto Label_1094; // 0x441 JumpB
	var_35_int = 4; // 0x442 PushI
	var_36_bool = var_12_int != var_35_int; // 0x443 Neq
	if(var_36_bool == 0) goto Label_1094; // 0x444 JumpB
	var_33_bool = 1; // 0x445 MovB
	
Label_1094:
	if(var_33_bool == 0) goto Label_1099; // 0x446 JumpB
	var_37_int = 5; // 0x447 PushI
	var_38_bool = var_12_int != var_37_int; // 0x448 Neq
	if(var_38_bool == 0) goto Label_1099; // 0x449 JumpB
	var_32_bool = 1; // 0x44a MovB
	
Label_1099:
	if(var_32_bool == 0) goto Label_1146; // 0x44b JumpB
	var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); // 0x44c PushV
	var_41_cvector = CVector(0,0,0); var_42_object = Obj(); // 0x44d PushV
	var_42_object = var_11_object; // 0x44e Mov
	func_862(var_42_object); // 0x44f NEW_2
	var_40_cvector = var_41_cvector; // 0x450 Mov
	func_1348(var_39_cvector, var_40_cvector); // 0x452 NEW_2
	var_23_cvector = var_39_cvector; // 0x453 Mov
	CreateVectorVector(var_24_object); // 0x455 Func
	var_25_int = 1; // 0x457 MovI
	
Label_1112:
	var_52_string = "hit"; // 0x458 PushS
	var_53_int = var_52_string + var_25_int; // 0x459 Add
	GetGeometryLocator(var_53_int, var_26_bool, var_27_cvector, var_28_cvector); // 0x45a Func
	var_54_bool = var_26_bool == 0; // 0x45c Not
	if(var_54_bool == 0) goto Label_1119; // 0x45d JumpB
	goto Label_1128; // 0x45e Jump
	
Label_1128:
	size(var_29_int); // 0x468 ObjFunc
	var_55_int = var_29_int; // 0x46a Push
	if(var_55_int == 0) goto Label_1145; // 0x46b JumpB
	irand(var_30_int, var_29_int); // 0x46c Func
	get(var_31_cvector, var_30_int); // 0x46e ObjFunc
	var_56_object = Obj(); var_57_int = 0; var_58_float = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); // 0x470 PushV
	var_56_object = var_11_object; // 0x471 Mov
	var_57_int = var_12_int; // 0x472 Mov
	var_58_float = var_13_float; // 0x473 Mov
	var_59_cvector = var_31_cvector; // 0x474 Mov
	var_60_cvector = -var_23_cvector; // 0x475 Neg2
	func_1151(var_58_float, var_59_cvector, var_60_cvector); // 0x476 NEW_2
	return 18; // 0x478 Return
	
Label_1145:
	var_24_object = 0; // 0x479 SetNull
	
Label_1146:
	var_101_object = Obj(); // 0x47a PushV
	var_101_object = var_11_object; // 0x47b Mov
	func_1039(var_101_object); // 0x47c NEW_2
	return 18; // 0x47e Return
	
Label_1119:
	var_102_int = var_28_cvector | var_23_cvector; // 0x45f Or
	var_103_float = 0.70711; // 0x460 PushF
	var_104_bool = var_102_int >= var_103_float; // 0x461 GE
	if(var_104_bool == 0) goto Label_1125; // 0x462 JumpB
	add(var_27_cvector); // 0x463 ObjFunc
	
Label_1125:
	var_105_int = 1; // 0x465 PushI
	var_25_int = var_25_int + var_105_int; // 0x466 Add2
	goto Label_1112; // 0x467 Jump
}


func_1214(var_122_string)
{
	var_123_bool = 0; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_bool = 0; var_128_float = 0; var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0); var_131_bool = 0; var_132_int = 0; var_133_bool = 0; var_134_int = 0; var_135_bool = 0; var_136_float = 0; var_137_cvector = CVector(0,0,0); var_138_cvector = CVector(0,0,0); // 0x4be PushV
	IsExisting3DSound(var_131_bool, var_122_string); // 0x4bf Func
	var_139_bool = var_131_bool == 0; // 0x4c1 Not
	if(var_139_bool == 0) goto Label_1239; // 0x4c2 JumpB
	var_132_int = 0; // 0x4c3 MovI
	
Label_1220:
	var_140_int = 1; // 0x4c4 PushI
	var_141_int = var_132_int + var_140_int; // 0x4c5 Add
	var_142_int = var_122_string + var_141_int; // 0x4c6 Add
	IsExisting3DSound(var_133_bool, var_142_int); // 0x4c7 Func
	var_143_bool = var_133_bool == 0; // 0x4c9 Not
	if(var_143_bool == 0) goto Label_1228; // 0x4ca JumpB
	goto Label_1231; // 0x4cb Jump
	
Label_1231:
	var_144_bool = var_132_int == 0; // 0x4cf Not
	if(var_144_bool == 0) goto Label_1234; // 0x4d0 JumpB
	return 16; // 0x4d1 Return
	
Label_1234:
	irand(var_134_int, var_132_int); // 0x4d2 Func
	var_145_int = 1; // 0x4d4 PushI
	var_146_int = var_134_int + var_145_int; // 0x4d5 Add
	var_122_string = var_122_string + var_146_int; // 0x4d6 Add2
	
Label_1239:
	Is3DSoundLoaded(var_135_bool, var_122_string); // 0x4d7 Func
	var_147_bool = var_135_bool; // 0x4d9 Push
	if(var_147_bool == 0) goto Label_1254; // 0x4da JumpB
	GetEyesHeight(var_136_float); // 0x4db Func
	GetDirection(var_137_cvector); // 0x4dd Func
	var_148_int = 50; // 0x4df PushI
	var_138_cvector = var_137_cvector * var_148_int; // 0x4e0 Mult2
	var_149_float = GetByIndex(var_138_cvector, 1); // 0x4e1 PushE
	var_149_float = var_149_float + var_136_float; // 0x4e2 Add2
	SetByIndex(var_138_cvector, 1) = var_149_float; // 0x4e3 PopE
	PlayGlobalSound(var_122_string, var_138_cvector); // 0x4e4 Func
	
Label_1254:
	return 16; // 0x4e6 Return
	
Label_1228:
	var_150_int = 1; // 0x4cc PushI
	var_132_int = var_132_int + var_150_int; // 0x4cd Add2
	goto Label_1220; // 0x4ce Jump
}


func_1342(var_7_object)
{
	var_8_object = Obj(); var_9_object = Obj(); // 0x53e PushV
	self(var_9_object); // 0x53f Func
	var_7_object = var_9_object; // 0x541 Mov
	return 2; // 0x542 Return
}


func_190(var_0_object, var_47_object)
{
	var_49_bool = 0; var_50_bool = 0; // 0xbe PushV
	var_0_object = var_47_object; // 0xbf TMov
	Face(var_47_object); // 0xc0 Func
	
Label_194:
	var_51_float = 0.5; // 0xc2 PushF
	Sleep(var_51_float, var_50_bool); // 0xc3 Func
	var_52_bool = 0; // 0xc5 PushV
	var_52_bool = 1; // 0xc6 MovB
	var_53_bool = var_50_bool == 0; // 0xc7 Not
	if(var_53_bool == 0) goto Label_208; // 0xc8 JumpB
	var_54_bool = 0; var_55_object = Obj(); // 0xc9 PushV
	var_55_object = var_0_object; // 0xca MovT
	func_1015(var_54_bool, var_55_object); // 0xcb NEW_2
	var_56_bool = var_54_bool == 0; // 0xcd Not
	if(var_56_bool == 0) goto Label_208; // 0xce JumpB
	var_52_bool = 0; // 0xcf MovB
	
Label_208:
	if(var_52_bool == 0) goto Label_210; // 0xd0 JumpB
	goto Label_211; // 0xd1 Jump
	
Label_211:
	StopAsync(); // 0xd3 Func
	return 2; // 0xd5 Return
	
Label_210:
	goto Label_194; // 0xd2 Jump
}


func_1854(var_49_bool, var_50_object)
{
	var_51_float = 0; var_52_string = ""; var_53_float = 0; var_54_float = 0; var_55_string = ""; var_56_float = 0; // 0x73e PushV
	var_57_bool = 0; var_58_object = Obj(); // 0x73f PushV
	var_58_object = var_50_object; // 0x740 Mov
	func_1015(var_57_bool, var_58_object); // 0x741 NEW_2
	var_59_bool = var_57_bool == 0; // 0x743 Not
	if(var_59_bool == 0) goto Label_1863; // 0x744 JumpB
	var_49_bool = 0; // 0x745 MovB
	return 6; // 0x746 Return
	
Label_1863:
	var_60_bool = 0; var_61_object = Obj(); // 0x747 PushV
	var_61_object = var_50_object; // 0x748 Mov
	func_884(var_60_bool, var_61_object); // 0x749 NEW_2
	if(var_60_bool == 0) goto Label_1874; // 0x74b JumpB
	var_64_string = "reputation"; // 0x74c PushS
	GetProperty(var_64_string, var_54_float); // 0x74d ObjFunc
	var_65_float = 0.33; // 0x74f PushF
	var_49_bool = var_54_float < var_65_float; // 0x750 LT2
	return 6; // 0x751 Return
	
Label_1874:
	var_66_bool = 0; var_67_object = Obj(); var_68_string = ""; // 0x752 PushV
	var_67_object = var_50_object; // 0x753 Mov
	var_68_string = "class"; // 0x754 MovS
	func_889(var_66_bool, var_67_object, var_68_string); // 0x755 NEW_2
	var_69_bool = var_66_bool == 0; // 0x757 Not
	if(var_69_bool == 0) goto Label_1883; // 0x758 JumpB
	var_49_bool = 0; // 0x759 MovB
	return 6; // 0x75a Return
	
Label_1883:
	var_70_string = "class"; // 0x75b PushS
	GetProperty(var_70_string, var_55_string); // 0x75c ObjFunc
	var_71_bool = 0; // 0x75e PushV
	var_71_bool = 1; // 0x75f MovB
	var_72_bool = 0; // 0x760 PushV
	var_72_bool = 1; // 0x761 MovB
	var_73_string = "bomber"; // 0x762 PushS
	var_74_bool = var_55_string == var_73_string; // 0x763 Eq
	if(var_74_bool == 0) goto Label_1897; // 0x764 JumpB
	var_75_string = "hunter"; // 0x765 PushS
	var_76_bool = var_55_string == var_75_string; // 0x766 Eq
	if(var_76_bool == 0) goto Label_1897; // 0x767 JumpB
	var_72_bool = 0; // 0x768 MovB
	
Label_1897:
	if(var_72_bool == 0) goto Label_1902; // 0x769 JumpB
	var_77_string = "grabitel"; // 0x76a PushS
	var_78_bool = var_55_string == var_77_string; // 0x76b Eq
	if(var_78_bool == 0) goto Label_1902; // 0x76c JumpB
	var_71_bool = 0; // 0x76d MovB
	
Label_1902:
	if(var_71_bool == 0) goto Label_1905; // 0x76e JumpB
	var_49_bool = 1; // 0x76f MovB
	return 6; // 0x770 Return
	
Label_1905:
	var_79_bool = 0; var_80_object = Obj(); var_81_string = ""; // 0x771 PushV
	var_80_object = var_50_object; // 0x772 Mov
	var_81_string = "disease"; // 0x773 MovS
	func_889(var_79_bool, var_80_object, var_81_string); // 0x774 NEW_2
	var_82_bool = var_79_bool == 0; // 0x776 Not
	if(var_82_bool == 0) goto Label_1914; // 0x777 JumpB
	var_49_bool = 0; // 0x778 MovB
	return 6; // 0x779 Return
	
Label_1914:
	var_83_bool = 0; // 0x77a PushV
	var_83_bool = 1; // 0x77b MovB
	var_84_bool = 0; var_85_string = ""; // 0x77c PushV
	var_85_string = var_55_string; // 0x77d Mov
	func_1255(var_84_bool, var_85_string); // 0x77e NEW_2
	if(var_84_bool == 0) goto Label_1925; // 0x780 JumpB
	var_123_string = "dog"; // 0x781 PushS
	var_124_bool = var_55_string == var_123_string; // 0x782 Eq
	if(var_124_bool == 0) goto Label_1925; // 0x783 JumpB
	var_83_bool = 0; // 0x784 MovB
	
Label_1925:
	if(var_83_bool == 0) goto Label_1932; // 0x785 JumpB
	var_125_string = "disease"; // 0x786 PushS
	GetProperty(var_125_string, var_56_float); // 0x787 ObjFunc
	var_126_int = 0; // 0x789 PushI
	var_49_bool = var_56_float > var_126_int; // 0x78a GT2
	return 6; // 0x78b Return
	
Label_1932:
	var_49_bool = 0; // 0x78c MovB
	return 6; // 0x78d Return
}


func_67(var_99_object)
{
	var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_string = ""; var_105_object = Obj(); var_106_bool = 0; var_107_bool = 0; var_108_float = 0; var_109_cvector = CVector(0,0,0); var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); var_113_cvector = CVector(0,0,0); var_114_string = ""; var_115_object = Obj(); var_116_bool = 0; var_117_bool = 0; var_118_float = 0; var_119_cvector = CVector(0,0,0); // 0x43 PushV
	var_120_bool = var_99_object == 0; // 0x44 NullEq
	if(var_120_bool == 0) goto Label_75; // 0x45 JumpB
	var_121_string = ""; // 0x46 PushV
	var_121_string = "fdie"; // 0x47 MovS
	func_158(var_121_string); // 0x48 NEW_2
	goto Label_157; // 0x4a Jump
	
Label_157:
	return 20; // 0x9d Return
	
Label_75:
	GetPosition(var_110_cvector); // 0x4b ObjFunc
	GetPosition(var_111_cvector); // 0x4d Func
	GetDirection(var_112_cvector); // 0x4f Func
	var_113_cvector = var_111_cvector - var_110_cvector; // 0x51 Sub2
	var_153_float = GetByIndex(var_113_cvector, 0); // 0x52 PushE
	var_154_float = GetByIndex(var_112_cvector, 0); // 0x53 PushE
	var_155_float = var_153_float * var_154_float; // 0x54 Mult
	var_156_float = GetByIndex(var_113_cvector, 2); // 0x55 PushE
	var_157_float = GetByIndex(var_112_cvector, 2); // 0x56 PushE
	var_158_float = var_156_float * var_157_float; // 0x57 Mult
	var_159_int = var_155_float + var_158_float; // 0x58 Add
	var_160_int = 0; // 0x59 PushI
	var_161_bool = var_159_int >= var_160_int; // 0x5a GE
	if(var_161_bool == 0) goto Label_94; // 0x5b JumpB
	var_114_string = "fdie"; // 0x5c MovS
	goto Label_95; // 0x5d Jump
	
Label_95:
	RemoveRTEnvelope(); // 0x5f Func
	SetDeathState(); // 0x61 Func
	Stop(); // 0x63 Func
	StopAsync(); // 0x65 Func
	var_115_object = var_99_object; // 0x67 Mov
	var_162_string = "GetScriptProperty"; // 0x68 PushS
	var_163_int = 2; // 0x69 PushI
	var_164_bool = IsFuncExist(var_99_object, var_162_string, var_163_int); // 0x6a FuncExist
	if(var_164_bool == 0) goto Label_119; // 0x6b JumpB
	var_165_string = "Owner"; // 0x6c PushS
	HasScriptProperty(var_116_bool, var_165_string); // 0x6d ObjFunc
	var_166_bool = var_116_bool; // 0x6f Push
	if(var_166_bool == 0) goto Label_119; // 0x70 JumpB
	var_167_string = "Owner"; // 0x71 PushS
	GetScriptProperty(var_115_object, var_167_string); // 0x72 ObjFunc
	var_168_bool = var_115_object == 0; // 0x74 NullEq
	if(var_168_bool == 0) goto Label_119; // 0x75 JumpB
	var_115_object = var_99_object; // 0x76 Mov
	
Label_119:
	var_169_string = "@GetEyesHeight"; // 0x77 PushS
	var_170_int = 1; // 0x78 PushI
	var_171_bool = IsFuncExist(var_115_object, var_169_string, var_170_int); // 0x79 FuncExist
	if(var_171_bool == 0) goto Label_134; // 0x7a JumpB
	GetEyesHeight(var_118_float); // 0x7b ObjFunc
	var_119_cvector = CVector(0.0, 0.0, 0.0); // 0x7d MovV
	var_172_float = GetByIndex(var_119_cvector, 1); // 0x7e PushE
	var_172_float = var_118_float; // 0x7f Mov
	SetByIndex(var_119_cvector, 1) = var_172_float; // 0x80 PopE
	var_173_string = "head"; // 0x81 PushS
	LookAsync(var_99_object, var_173_string, var_119_cvector); // 0x82 Func
	var_117_bool = 1; // 0x84 MovB
	goto Label_135; // 0x85 Jump
	
Label_135:
	var_174_string = ""; // 0x87 PushV
	var_174_string = var_114_string; // 0x88 Mov
	func_1214(var_174_string); // 0x89 NEW_2
	var_175_string = "all"; // 0x8b PushS
	PlayAnimation(var_175_string, var_114_string); // 0x8c Func
	WaitForAnimEnd(); // 0x8e Func
	var_176_bool = var_117_bool; // 0x90 Push
	if(var_176_bool == 0) goto Label_151; // 0x91 JumpB
	StopAsync(); // 0x92 Func
	var_177_string = "head"; // 0x94 PushS
	UnlookAsync(var_177_string); // 0x95 Func
	
Label_151:
	var_178_string = "all"; // 0x97 PushS
	LockAnimationEnd(var_178_string, var_114_string); // 0x98 Func
	RemoveEnvelope(); // 0x9a Func
	var_115_object = 0; // 0x9c SetNull
	
Label_134:
	var_117_bool = 0; // 0x86 MovB
	
Label_94:
	var_114_string = "bdie"; // 0x5e MovS
}


func_1988(var_127_object)
{
	var_128_bool = 0; var_129_bool = 0; // 0x7c4 PushV
	var_130_object = GlobalVars[0]; // 0x7c5 PushGE
	in(var_129_bool, var_127_object); // 0x7c6 ObjFunc
	var_131_bool = var_129_bool; // 0x7c8 Push
	if(var_131_bool == 0) goto Label_1999; // 0x7c9 JumpB
	var_132_object = Obj(); var_133_bool = 0; // 0x7ca PushV
	var_132_object = var_127_object; // 0x7cb Mov
	var_133_bool = 1; // 0x7cc MovB
	func_1808(var_132_object, var_133_bool); // 0x7cd NEW_2
	
Label_1999:
	return 2; // 0x7cf Return
}


func_1348(var_39_cvector, var_40_cvector)
{
	var_47_float = 0; var_48_float = 0; // 0x544 PushV
	var_49_int = var_40_cvector | var_40_cvector; // 0x545 Or
	var_48_float = sqrt(var_49_int); // 0x546 Sqrt2
	var_50_float = 0.0; // 0x547 PushF
	var_51_bool = var_48_float < var_50_float; // 0x548 LT
	if(var_51_bool == 0) goto Label_1356; // 0x549 JumpB
	var_39_cvector = CVector(0.0, 0.0, 0.0); // 0x54a MovV
	return 2; // 0x54b Return
	
Label_1356:
	var_39_cvector = var_40_cvector / var_40_cvector; // 0x54c Div2
	return 2; // 0x54d Return
}


func_1476(var_78_int)
{
	var_79_int = 0; var_80_int = 0; // 0x5c4 PushV
	var_81_string = "branch"; // 0x5c5 PushS
	GetVariable(var_81_string, var_80_int); // 0x5c6 Func
	var_78_int = var_80_int; // 0x5c8 Mov
	return 2; // 0x5c9 Return
}


func_1603(var_39_int, var_40_string)
{
	var_41_int = 0; var_42_int = 0; // 0x643 PushV
	GetInvItemByName(var_42_int, var_40_string); // 0x644 Func
	var_39_int = var_42_int; // 0x646 Mov
	return 2; // 0x647 Return
}


func_1608(var_18_object)
{
	var_19_object = Obj(); // 0x649 PushV
	var_19_object = var_18_object; // 0x64a Mov
	TaskCall(1); // 0x64b TaskCall
	func_25(var_19_object); // 0x64c NEW_2
	TaskReturn(); // 0x64d TaskReturn
	return 0; // 0x64f Return
}


func_1482(var_11_object)
{
	var_12_int = 0; // 0x5cb PushV
	func_1476(var_12_int); // 0x5cc NEW_2
	var_16_int = 1; // 0x5ce PushI
	var_17_bool = var_12_int == var_16_int; // 0x5cf Eq
	if(var_17_bool == 0) goto Label_1492; // 0x5d0 JumpB
	WorkWithCorpse(var_11_object); // 0x5d1 Func
	goto Label_1494; // 0x5d3 Jump
	
Label_1494:
	return 0; // 0x5d6 Return
	
Label_1492:
	Barter(var_11_object); // 0x5d4 Func
}


func_842()
{
	StopGroup0(); // 0x34a Func
	Stop(); // 0x34c Func
	return 0; // 0x34e Return
}


func_1358(var_29_float, var_30_cvector, var_31_cvector)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); // 0x54e PushV
	var_33_cvector = var_31_cvector - var_30_cvector; // 0x54f Sub2
	var_29_float = var_33_cvector | var_33_cvector; // 0x550 Or2
	return 2; // 0x551 Return
}


func_847()
{
	return 0; // 0x34f Return
}


func_848(var_275_string, var_276_int)
{
	var_277_int = 2; // 0x351 PushI
	var_278_bool = var_276_int == var_277_int; // 0x352 Eq
	if(var_278_bool == 0) goto Label_855; // 0x353 JumpB
	var_275_string = "fire"; // 0x354 MovS
	return 0; // 0x355 Return
	
Label_855:
	var_279_int = 1; // 0x357 PushI
	var_280_bool = var_276_int == var_279_int; // 0x358 Eq
	if(var_280_bool == 0) goto Label_860; // 0x359 JumpB
	var_275_string = "bullet"; // 0x35a MovS
	return 0; // 0x35b Return
	
Label_860:
	var_275_string = "phys"; // 0x35c MovS
	return 0; // 0x35d Return
}


func_974(var_27_bool)
{
	var_29_bool = 0; var_30_bool = 0; // 0x3ce PushV
	IsDead(var_30_bool); // 0x3cf ObjFunc
	var_27_bool = var_30_bool; // 0x3d1 Mov
	return 2; // 0x3d2 Return
}


func_1362(var_285_float, var_286_float, var_287_float)
{
	var_290_bool = var_286_float < var_287_float; // 0x553 LT
	if(var_290_bool == 0) goto Label_1367; // 0x554 JumpB
	var_285_float = var_286_float; // 0x555 Mov
	goto Label_1368; // 0x556 Jump
	
Label_1368:
	return 0; // 0x558 Return
	
Label_1367:
	var_285_float = var_287_float; // 0x557 Mov
}


func_979(var_16_bool, var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); // 0x3d3 PushV
	var_22_bool = var_17_object == 0; // 0x3d4 NullEq
	if(var_22_bool == 0) goto Label_984; // 0x3d5 JumpB
	var_16_bool = 0; // 0x3d6 MovB
	return 4; // 0x3d7 Return
	
Label_984:
	var_23_bool = 0; // 0x3d8 PushV
	var_23_bool = 0; // 0x3d9 MovB
	var_24_string = "IsDead"; // 0x3da PushS
	var_25_int = 1; // 0x3db PushI
	var_26_bool = IsFuncExist(var_17_object, var_24_string, var_25_int); // 0x3dc FuncExist
	if(var_26_bool == 0) goto Label_996; // 0x3dd JumpB
	var_27_bool = 0; var_28_object = Obj(); // 0x3de PushV
	var_28_object = var_17_object; // 0x3df Mov
	func_974(var_28_object); // 0x3e0 NEW_2
	if(var_27_bool == 0) goto Label_996; // 0x3e2 JumpB
	var_23_bool = 1; // 0x3e3 MovB
	
Label_996:
	if(var_23_bool == 0) goto Label_999; // 0x3e4 JumpB
	var_16_bool = 0; // 0x3e5 MovB
	return 4; // 0x3e6 Return
	
Label_999:
	GetScene(var_20_object); // 0x3e7 Func
	var_31_bool = var_20_object == 0; // 0x3e9 NullEq
	if(var_31_bool == 0) goto Label_1005; // 0x3ea JumpB
	var_16_bool = 0; // 0x3eb MovB
	return 4; // 0x3ec Return
	
Label_1005:
	GetScene(var_21_object); // 0x3ed ObjFunc
	var_32_bool = var_20_object != var_21_object; // 0x3ef Neq
	if(var_32_bool == 0) goto Label_1011; // 0x3f0 JumpB
	var_16_bool = 0; // 0x3f1 MovB
	return 4; // 0x3f2 Return
	
Label_1011:
	var_16_bool = 1; // 0x3f3 MovB
	return 4; // 0x3f4 Return
}


func_214()
{
	StopAsync(); // 0xd6 Func
	var_127_int = 100; // 0xd8 PushI
	KillTimer(var_127_int); // 0xd9 Func
	StopGroup0(); // 0xdb Func
	return 0; // 0xdd Return
}


func_1495(var_27_int, var_28_int)
{
	var_29_int = 0; var_30_bool = 0; var_31_int = 0; var_32_bool = 0; // 0x5d7 PushV
	var_33_bool = var_27_int > var_28_int; // 0x5d8 GT
	if(var_33_bool == 0) goto Label_1502; // 0x5d9 JumpB
	var_34_string = "GenerateMoney: iMin > iMax"; // 0x5da PushS
	Trace(var_34_string); // 0x5db Func
	return 4; // 0x5dd Return
	
Label_1502:
	var_31_int = 0; // 0x5de MovI
	var_35_bool = var_27_int != var_28_int; // 0x5df Neq
	if(var_35_bool == 0) goto Label_1509; // 0x5e0 JumpB
	var_36_int = var_28_int - var_27_int; // 0x5e1 Sub
	irand(var_31_int, var_36_int); // 0x5e2 Func
	goto Label_1513; // 0x5e4 Jump
	
Label_1513:
	var_31_int = var_31_int + var_27_int; // 0x5e9 Add2
	var_37_int = 0; // 0x5ea PushI
	var_38_bool = var_31_int == var_37_int; // 0x5eb Eq
	if(var_38_bool == 0) goto Label_1518; // 0x5ec JumpB
	return 4; // 0x5ed Return
	
Label_1518:
	var_39_int = 0; var_40_string = ""; // 0x5ee PushV
	var_40_string = "Money"; // 0x5ef MovS
	func_1603(var_39_int, var_40_string); // 0x5f0 NEW_2
	var_43_int = 0; // 0x5f2 PushI
	AddItem(var_32_bool, var_39_int, var_43_int, var_31_int); // 0x5f3 Func
	return 4; // 0x5f5 Return
	
Label_1509:
	var_44_int = 0; // 0x5e5 PushI
	var_45_bool = var_27_int == var_44_int; // 0x5e6 Eq
	if(var_45_bool == 0) goto Label_1513; // 0x5e7 JumpB
	return 4; // 0x5e8 Return
}


func_2008(var_17_object)
{
	var_18_object = Obj(); // 0x7d9 PushV
	var_18_object = var_17_object; // 0x7da Mov
	func_1608(var_18_object); // 0x7db NEW_2
	return 0; // 0x7dd Return
}


func_1369(var_295_float, var_296_float, var_297_float, var_298_float)
{
	var_299_bool = var_296_float < var_297_float; // 0x55a LT
	if(var_299_bool == 0) goto Label_1374; // 0x55b JumpB
	var_295_float = var_297_float; // 0x55c Mov
	return 0; // 0x55d Return
	
Label_1374:
	var_300_bool = var_296_float > var_298_float; // 0x55e GT
	if(var_300_bool == 0) goto Label_1378; // 0x55f JumpB
	var_295_float = var_298_float; // 0x560 Mov
	return 0; // 0x561 Return
	
Label_1378:
	var_295_float = var_296_float; // 0x562 Mov
	return 0; // 0x563 Return
}


func_862(var_41_cvector)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x35e PushV
	GetPosition(var_45_cvector); // 0x35f Func
	GetPosition(var_46_cvector); // 0x361 ObjFunc
	var_41_cvector = var_46_cvector - var_45_cvector; // 0x363 Sub2
	return 4; // 0x364 Return
}


func_735()
{
	func_1801(); // 0x2e0 NEW_2
	
Label_738:
	func_758(var_5_cvector, var_6_bool); // 0x2e3 NEW_2
	goto Label_738; // 0x2e5 Jump
}


func_1380(var_54_bool, var_55_int, var_56_int)
{
	var_57_int = 0; var_58_int = 0; // 0x564 PushV
	irand(var_58_int, var_56_int); // 0x565 Func
	var_54_bool = var_58_int < var_55_int; // 0x567 LT2
	return 2; // 0x568 Return
}


func_485(var_0_object, var_1_object)
{
	var_0_object = var_1_object; // 0x1e5 TMovT
	var_1_object = 0; // 0x1e6 SetNullT
	Face(var_0_object); // 0x1e7 Func
	return 0; // 0x1e9 Return
}


func_869(var_86_float)
{
	var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); // 0x365 PushV
	GetPosition(var_91_cvector); // 0x366 Func
	GetPosition(var_92_cvector); // 0x368 ObjFunc
	var_93_cvector = var_92_cvector - var_91_cvector; // 0x36a Sub2
	var_86_float = var_93_cvector | var_93_cvector; // 0x36b Or2
	return 6; // 0x36c Return
}


func_743()
{
	return 0; // 0x2e7 Return
}


func_1255(var_84_bool, var_85_string)
{
	var_84_bool = 1; // 0x4e8 MovB
	var_86_bool = 0; // 0x4e9 PushV
	var_86_bool = 1; // 0x4ea MovB
	var_87_bool = 0; // 0x4eb PushV
	var_87_bool = 1; // 0x4ec MovB
	var_88_bool = 0; // 0x4ed PushV
	var_88_bool = 1; // 0x4ee MovB
	var_89_bool = 0; // 0x4ef PushV
	var_89_bool = 1; // 0x4f0 MovB
	var_90_bool = 0; // 0x4f1 PushV
	var_90_bool = 1; // 0x4f2 MovB
	var_91_bool = 0; // 0x4f3 PushV
	var_91_bool = 1; // 0x4f4 MovB
	var_92_bool = 0; // 0x4f5 PushV
	var_92_bool = 1; // 0x4f6 MovB
	var_93_bool = 0; // 0x4f7 PushV
	var_93_bool = 1; // 0x4f8 MovB
	var_94_bool = 0; // 0x4f9 PushV
	var_94_bool = 1; // 0x4fa MovB
	var_95_bool = 0; // 0x4fb PushV
	var_95_bool = 1; // 0x4fc MovB
	var_96_bool = 0; // 0x4fd PushV
	var_96_bool = 1; // 0x4fe MovB
	var_97_string = "woman"; // 0x4ff PushS
	var_98_bool = var_85_string == var_97_string; // 0x500 Eq
	if(var_98_bool == 0) goto Label_1286; // 0x501 JumpB
	var_99_string = "worker"; // 0x502 PushS
	var_100_bool = var_85_string == var_99_string; // 0x503 Eq
	if(var_100_bool == 0) goto Label_1286; // 0x504 JumpB
	var_96_bool = 0; // 0x505 MovB
	
Label_1286:
	if(var_96_bool == 0) goto Label_1291; // 0x506 JumpB
	var_101_string = "butcher"; // 0x507 PushS
	var_102_bool = var_85_string == var_101_string; // 0x508 Eq
	if(var_102_bool == 0) goto Label_1291; // 0x509 JumpB
	var_95_bool = 0; // 0x50a MovB
	
Label_1291:
	if(var_95_bool == 0) goto Label_1296; // 0x50b JumpB
	var_103_string = "wasted_girl"; // 0x50c PushS
	var_104_bool = var_85_string == var_103_string; // 0x50d Eq
	if(var_104_bool == 0) goto Label_1296; // 0x50e JumpB
	var_94_bool = 0; // 0x50f MovB
	
Label_1296:
	if(var_94_bool == 0) goto Label_1301; // 0x510 JumpB
	var_105_string = "boy"; // 0x511 PushS
	var_106_bool = var_85_string == var_105_string; // 0x512 Eq
	if(var_106_bool == 0) goto Label_1301; // 0x513 JumpB
	var_93_bool = 0; // 0x514 MovB
	
Label_1301:
	if(var_93_bool == 0) goto Label_1306; // 0x515 JumpB
	var_107_string = "vaxxabitka"; // 0x516 PushS
	var_108_bool = var_85_string == var_107_string; // 0x517 Eq
	if(var_108_bool == 0) goto Label_1306; // 0x518 JumpB
	var_92_bool = 0; // 0x519 MovB
	
Label_1306:
	if(var_92_bool == 0) goto Label_1311; // 0x51a JumpB
	var_109_string = "unosha"; // 0x51b PushS
	var_110_bool = var_85_string == var_109_string; // 0x51c Eq
	if(var_110_bool == 0) goto Label_1311; // 0x51d JumpB
	var_91_bool = 0; // 0x51e MovB
	
Label_1311:
	if(var_91_bool == 0) goto Label_1316; // 0x51f JumpB
	var_111_string = "wasted_male"; // 0x520 PushS
	var_112_bool = var_85_string == var_111_string; // 0x521 Eq
	if(var_112_bool == 0) goto Label_1316; // 0x522 JumpB
	var_90_bool = 0; // 0x523 MovB
	
Label_1316:
	if(var_90_bool == 0) goto Label_1321; // 0x524 JumpB
	var_113_string = "alkash"; // 0x525 PushS
	var_114_bool = var_85_string == var_113_string; // 0x526 Eq
	if(var_114_bool == 0) goto Label_1321; // 0x527 JumpB
	var_89_bool = 0; // 0x528 MovB
	
Label_1321:
	if(var_89_bool == 0) goto Label_1326; // 0x529 JumpB
	var_115_string = "dohodyaga"; // 0x52a PushS
	var_116_bool = var_85_string == var_115_string; // 0x52b Eq
	if(var_116_bool == 0) goto Label_1326; // 0x52c JumpB
	var_88_bool = 0; // 0x52d MovB
	
Label_1326:
	if(var_88_bool == 0) goto Label_1331; // 0x52e JumpB
	var_117_string = "vaxxabit"; // 0x52f PushS
	var_118_bool = var_85_string == var_117_string; // 0x530 Eq
	if(var_118_bool == 0) goto Label_1331; // 0x531 JumpB
	var_87_bool = 0; // 0x532 MovB
	
Label_1331:
	if(var_87_bool == 0) goto Label_1336; // 0x533 JumpB
	var_119_string = "nudegirl"; // 0x534 PushS
	var_120_bool = var_85_string == var_119_string; // 0x535 Eq
	if(var_120_bool == 0) goto Label_1336; // 0x536 JumpB
	var_86_bool = 0; // 0x537 MovB
	
Label_1336:
	if(var_86_bool == 0) goto Label_1341; // 0x538 JumpB
	var_121_string = "morlok"; // 0x539 PushS
	var_122_bool = var_85_string == var_121_string; // 0x53a Eq
	if(var_122_bool == 0) goto Label_1341; // 0x53b JumpB
	var_84_bool = 0; // 0x53c MovB
	
Label_1341:
	return 0; // 0x53d Return
}


func_1385(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x569 PushV
	CreateObjectSet(var_16_object); // 0x56a Func
	var_14_object = var_16_object; // 0x56c Mov
	return 2; // 0x56d Return
}


func_490(var_0_object)
{
	var_164_cvector = CVector(0,0,0); var_165_cvector = CVector(0,0,0); var_166_bool = 0; var_167_cvector = CVector(0,0,0); var_168_cvector = CVector(0,0,0); var_169_object = Obj(); var_170_object = Obj(); var_171_cvector = CVector(0,0,0); var_172_object = Obj(); var_173_int = 0; var_174_cvector = CVector(0,0,0); var_175_float = 0; var_176_object = Obj(); var_177_object = Obj(); var_178_cvector = CVector(0,0,0); var_179_cvector = CVector(0,0,0); var_180_bool = 0; var_181_cvector = CVector(0,0,0); var_182_cvector = CVector(0,0,0); var_183_object = Obj(); var_184_object = Obj(); var_185_cvector = CVector(0,0,0); var_186_object = Obj(); var_187_int = 0; var_188_cvector = CVector(0,0,0); var_189_float = 0; var_190_object = Obj(); var_191_object = Obj(); // 0x1ea PushV
	var_192_object = Obj(); // 0x1eb PushV
	var_192_object = var_0_object; // 0x1ec MovT
	func_1456(var_192_object); // 0x1ed NEW_2
	ReportAttack(var_0_object); // 0x1ef Func
	var_193_bool = 0; var_194_object = Obj(); // 0x1f1 PushV
	var_194_object = var_0_object; // 0x1f2 MovT
	func_884(var_193_bool, var_194_object); // 0x1f3 NEW_2
	if(var_193_bool == 0) goto Label_507; // 0x1f5 JumpB
	var_195_object = Obj(); // 0x1f6 PushV
	func_1342(var_195_object); // 0x1f7 NEW_2
	SendPlayerEnemy(var_0_object, var_195_object); // 0x1f9 Func
	
Label_507:
	GetDirection(var_178_cvector); // 0x1fb Func
	var_196_cvector = CVector(0,0,0); var_197_object = Obj(); // 0x1fd PushV
	var_197_object = var_0_object; // 0x1fe MovT
	func_862(var_197_object); // 0x1ff NEW_2
	var_179_cvector = var_196_cvector; // 0x200 Mov
	var_202_float = 0; var_203_cvector = CVector(0,0,0); var_204_cvector = CVector(0,0,0); // 0x202 PushV
	var_203_cvector = var_178_cvector; // 0x203 Mov
	var_204_cvector = var_179_cvector; // 0x204 Mov
	func_1410(var_202_float, var_203_cvector, var_204_cvector); // 0x205 NEW_2
	var_226_float = 0.99939; // 0x207 PushF
	var_227_bool = var_202_float < var_226_float; // 0x208 LT
	if(var_227_bool == 0) goto Label_523; // 0x209 JumpB
	return 28; // 0x20a Return
	
Label_523:
	func_1465(); // 0x20c NEW_2
	var_228_string = "all"; // 0x20e PushS
	var_229_string = "attack_begin1"; // 0x20f PushS
	PlayAnimation(var_228_string, var_229_string); // 0x210 Func
	var_230_string = "attack"; // 0x212 PushS
	GetGeometryLocator(var_230_string, var_180_bool, var_181_cvector, var_182_cvector); // 0x213 Func
	var_231_bool = var_180_bool; // 0x215 Push
	if(var_231_bool == 0) goto Label_544; // 0x216 JumpB
	GetScene(var_184_object); // 0x217 Func
	var_232_string = "light-dynamic"; // 0x219 PushS
	var_233_string = "soldier_fire.xml"; // 0x21a PushS
	AddActorByType(var_183_object, var_232_string, var_184_object, var_181_cvector, var_182_cvector, var_233_string); // 0x21b Func
	var_184_object = 0; // 0x21d SetNull
	var_183_object = 0; // 0x21e SetNull
	goto Label_546; // 0x21f Jump
	
Label_546:
	var_234_string = "shot"; // 0x222 PushS
	var_235_cvector = CVector(0.0, 150.0, 0.0); // 0x223 PushVec
	var_236_int = 800; // 0x224 PushI
	var_237_int = 100000; // 0x225 PushI
	PlayGlobalSound(var_234_string, var_235_cvector, var_236_int, var_237_int); // 0x226 Func
	GetDirection(var_178_cvector); // 0x228 Func
	var_238_cvector = CVector(0,0,0); var_239_object = Obj(); // 0x22a PushV
	var_239_object = var_0_object; // 0x22b MovT
	func_862(var_239_object); // 0x22c NEW_2
	var_179_cvector = var_238_cvector; // 0x22d Mov
	var_240_float = GetByIndex(var_179_cvector, 1); // 0x22f PushE
	var_241_float = 0; var_242_object = Obj(); // 0x230 PushV
	var_242_object = var_0_object; // 0x231 MovT
	func_1176(var_242_object); // 0x232 NEW_2
	var_240_float = var_240_float + var_241_float; // 0x234 Add2
	SetByIndex(var_179_cvector, 1) = var_240_float; // 0x235 PopE
	var_247_float = 0.03491; // 0x236 PushF
	RandVecCone3D(var_185_cvector, var_179_cvector, var_247_float); // 0x237 Func
	GetVictimMaterial(var_185_cvector, var_186_object, var_187_int, var_188_cvector); // 0x239 Func
	var_248_bool = var_186_object != 0; // 0x23b NullNeq
	if(var_248_bool == 0) goto Label_602; // 0x23c JumpB
	var_249_bool = var_186_object == var_0_object; // 0x23d Eq
	if(var_249_bool == 0) goto Label_587; // 0x23e JumpB
	var_250_float = 0; var_251_object = Obj(); var_252_float = 0; var_253_int = 0; // 0x23f PushV
	var_251_object = var_0_object; // 0x240 MovT
	var_252_float = 1.5; // 0x241 MovF
	var_253_int = 1; // 0x242 MovI
	func_901(var_250_float, var_251_object, var_252_float, var_253_int); // 0x243 NEW_2
	var_189_float = var_250_float; // 0x244 Mov
	var_312_int = 2; // 0x246 PushI
	var_313_float = 1.5; // 0x247 PushF
	ReportHit(var_0_object, var_312_int, var_189_float, var_313_float); // 0x248 Func
	goto Label_602; // 0x24a Jump
	
Label_602:
	var_314_string = "all"; // 0x25a PushS
	var_315_string = "attack_end1"; // 0x25b PushS
	PlayAnimation(var_314_string, var_315_string); // 0x25c Func
	WaitForAnimEnd(); // 0x25e Func
	var_316_string = "all"; // 0x260 PushS
	var_317_string = "attack_on"; // 0x261 PushS
	LockAnimationEnd(var_316_string, var_317_string); // 0x262 Func
	return 28; // 0x264 Return
	
Label_587:
	var_318_int = -1; // 0x24b PushI
	var_319_bool = var_187_int != var_318_int; // 0x24c Neq
	if(var_319_bool == 0) goto Label_602; // 0x24d JumpB
	GetScene(var_190_object); // 0x24e Func
	var_320_string = "scripted"; // 0x250 PushS
	var_321_cvector = CVector(0.0, 0.0, 1.0); // 0x251 PushVec
	var_322_string = "richochet.xml"; // 0x252 PushS
	AddActorByType(var_191_object, var_320_string, var_190_object, var_188_cvector, var_321_cvector, var_322_string); // 0x253 Func
	var_323_string = "Material"; // 0x255 PushS
	SetScriptProperty(var_323_string, var_187_int); // 0x256 ObjFunc
	var_191_object = 0; // 0x258 SetNull
	var_190_object = 0; // 0x259 SetNull
	
Label_544:
	WaitForAnimEnd(); // 0x220 Func
}


func_877(var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0x36d PushV
	var_15_string = "player"; // 0x36e PushS
	FindActor(var_14_object, var_15_string); // 0x36f Func
	var_12_object = var_14_object; // 0x371 Mov
	return 2; // 0x372 Return
}


func_1391(var_205_float, var_206_cvector, var_207_cvector)
{
	var_208_float = GetByIndex(var_206_cvector, 0); // 0x570 PushE
	var_209_float = GetByIndex(var_207_cvector, 0); // 0x571 PushE
	var_210_float = var_208_float * var_209_float; // 0x572 Mult
	var_211_float = GetByIndex(var_206_cvector, 2); // 0x573 PushE
	var_212_float = GetByIndex(var_207_cvector, 2); // 0x574 PushE
	var_213_float = var_211_float * var_212_float; // 0x575 Mult
	var_205_float = var_210_float + var_213_float; // 0x576 Add2
	return 0; // 0x577 Return
}


func_884(var_8_bool, var_9_object)
{
	var_10_bool = 0; var_11_bool = 0; // 0x374 PushV
	IsPlayerActor(var_9_object, var_11_bool); // 0x375 Func
	var_8_bool = var_11_bool; // 0x377 Mov
	return 2; // 0x378 Return
}


func_758(var_0_object, var_1_object)
{
	var_17_int = 0; var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_object = Obj(); var_21_int = 0; var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_object = Obj(); // 0x2f6 PushV
	GetPFPosition(var_24_object); // 0x2f7 Func
	GetDirection(var_0_object); // 0x2f9 Func
	
Label_763:
	func_847(); // 0x2fc NEW_2
	var_25_int = 10; // 0x2fe PushI
	irand(var_21_int, var_25_int); // 0x2ff Func
	var_26_int = 5; // 0x301 PushI
	var_27_int = var_21_int + var_26_int; // 0x302 Add
	Sleep(var_27_int, var_22_bool); // 0x303 Func
	var_28_bool = var_22_bool; // 0x305 Push
	if(var_28_bool == 0) goto Label_779; // 0x306 JumpB
	func_743(); // 0x308 NEW_2
	goto Label_840; // 0x30a Jump
	
Label_840:
	goto Label_763; // 0x348 Jump
	
Label_779:
	func_847(); // 0x30c NEW_2
	GetPFPosition(var_23_cvector); // 0x30e Func
	var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); // 0x310 PushV
	var_30_cvector = var_1_object; // 0x311 MovT
	var_31_cvector = var_23_cvector; // 0x312 Mov
	func_1358(var_29_float, var_30_cvector, var_31_cvector); // 0x313 NEW_2
	var_34_int = 40000; // 0x315 PushI
	var_35_bool = var_29_float > var_34_int; // 0x316 GT
	if(var_35_bool == 0) goto Label_826; // 0x317 JumpB
	FindPathTo(var_24_object, var_24_object); // 0x318 Func
	var_36_bool = var_24_object != 0; // 0x31a NullNeq
	if(var_36_bool == 0) goto Label_821; // 0x31b JumpB
	RotatePath(var_24_object, var_22_bool); // 0x31c Func
	var_37_bool = var_22_bool == 0; // 0x31e Not
	if(var_37_bool == 0) goto Label_801; // 0x31f JumpB
	goto Label_839; // 0x320 Jump
	
Label_839:
	goto Label_779; // 0x347 Jump
	
Label_801:
	var_38_bool = 0; // 0x321 PushB
	FollowPath(var_24_object, var_38_bool, var_22_bool); // 0x322 Func
	var_39_bool = var_22_bool == 0; // 0x324 Not
	if(var_39_bool == 0) goto Label_807; // 0x325 JumpB
	goto Label_839; // 0x326 Jump
	
Label_807:
	var_40_float = GetByIndex(var_0_object, 0); // 0x327 PushE
	var_41_float = GetByIndex(var_0_object, 2); // 0x328 PushE
	Rotate(var_40_float, var_41_float, var_22_bool); // 0x329 Func
	var_42_bool = var_22_bool == 0; // 0x32b Not
	if(var_42_bool == 0) goto Label_814; // 0x32c JumpB
	goto Label_839; // 0x32d Jump
	
Label_814:
	WaitForAnimEnd(var_22_bool); // 0x32e Func
	var_43_bool = var_22_bool == 0; // 0x330 Not
	if(var_43_bool == 0) goto Label_819; // 0x331 JumpB
	goto Label_839; // 0x332 Jump
	
Label_819:
	goto Label_840; // 0x333 Jump
	
Label_821:
	var_44_int = 1; // 0x335 PushI
	Sleep(var_44_int); // 0x336 Func
	var_24_object = 0; // 0x338 SetNull
	goto Label_839; // 0x339 Jump
	
Label_826:
	var_45_float = GetByIndex(var_0_object, 0); // 0x33a PushE
	var_46_float = GetByIndex(var_0_object, 2); // 0x33b PushE
	Rotate(var_45_float, var_46_float, var_22_bool); // 0x33c Func
	var_47_bool = var_22_bool == 0; // 0x33e Not
	if(var_47_bool == 0) goto Label_833; // 0x33f JumpB
	goto Label_839; // 0x340 Jump
	
Label_833:
	WaitForAnimEnd(var_22_bool); // 0x341 Func
	var_48_bool = var_22_bool == 0; // 0x343 Not
	if(var_48_bool == 0) goto Label_838; // 0x344 JumpB
	goto Label_839; // 0x345 Jump
	
Label_838:
	goto Label_840; // 0x346 Jump
}


func_1015(var_12_bool, var_13_object)
{
	var_14_int = 0; var_15_int = 0; // 0x3f7 PushV
	var_16_bool = 0; var_17_object = Obj(); // 0x3f8 PushV
	var_17_object = var_13_object; // 0x3f9 Mov
	func_979(var_16_bool, var_17_object); // 0x3fa NEW_2
	var_33_bool = var_16_bool == 0; // 0x3fc Not
	if(var_33_bool == 0) goto Label_1024; // 0x3fd JumpB
	var_12_bool = 0; // 0x3fe MovB
	return 2; // 0x3ff Return
	
Label_1024:
	var_34_bool = 0; var_35_object = Obj(); var_36_string = ""; // 0x400 PushV
	var_35_object = var_13_object; // 0x401 Mov
	var_36_string = "noaccess"; // 0x402 MovS
	func_889(var_34_bool, var_35_object, var_36_string); // 0x403 NEW_2
	var_43_bool = var_34_bool == 0; // 0x405 Not
	if(var_43_bool == 0) goto Label_1033; // 0x406 JumpB
	var_12_bool = 1; // 0x407 MovB
	return 2; // 0x408 Return
	
Label_1033:
	var_44_string = "noaccess"; // 0x409 PushS
	GetProperty(var_44_string, var_15_int); // 0x40a ObjFunc
	var_45_int = 0; // 0x40c PushI
	var_12_bool = var_15_int == var_45_int; // 0x40d Eq2
	return 2; // 0x40e Return
}


func_1400(var_214_float, var_215_cvector)
{
	var_216_float = GetByIndex(var_215_cvector, 0); // 0x579 PushE
	var_217_float = GetByIndex(var_215_cvector, 0); // 0x57a PushE
	var_218_float = var_216_float * var_217_float; // 0x57b Mult
	var_219_float = GetByIndex(var_215_cvector, 2); // 0x57c PushE
	var_220_float = GetByIndex(var_215_cvector, 2); // 0x57d PushE
	var_221_float = var_219_float * var_220_float; // 0x57e Mult
	var_222_int = var_218_float + var_221_float; // 0x57f Add
	var_214_float = sqrt(var_222_int); // 0x580 Sqrt2
	return 0; // 0x581 Return
}


func_889(var_34_bool, var_35_object, var_36_string)
{
	var_37_bool = 0; var_38_bool = 0; // 0x379 PushV
	var_39_string = "HasProperty"; // 0x37a PushS
	var_40_int = 2; // 0x37b PushI
	var_41_bool = IsFuncExist(var_35_object, var_39_string, var_40_int); // 0x37c FuncExist
	var_42_bool = var_41_bool == 0; // 0x37d Not
	if(var_42_bool == 0) goto Label_897; // 0x37e JumpB
	var_34_bool = 0; // 0x37f MovB
	return 2; // 0x380 Return
	
Label_897:
	HasProperty(var_36_string, var_38_bool); // 0x381 ObjFunc
	var_34_bool = var_38_bool; // 0x383 Mov
	return 2; // 0x384 Return
}


func_1526(var_84_string)
{
	var_85_object = Obj(); var_86_int = 0; var_87_bool = 0; var_88_object = Obj(); var_89_int = 0; var_90_bool = 0; // 0x5f6 PushV
	CreateInvItem(var_88_object); // 0x5f7 Func
	SetItemName(var_84_string); // 0x5f9 ObjFunc
	var_91_string = "Organ"; // 0x5fb PushS
	var_92_int = 1; // 0x5fc PushI
	SetProperty(var_91_string, var_92_int); // 0x5fd ObjFunc
	GetItemID(var_89_int); // 0x5ff ObjFunc
	var_93_int = 0; // 0x601 PushI
	var_94_int = 1; // 0x602 PushI
	AddItem(var_90_bool, var_88_object, var_93_int, var_94_int); // 0x603 Func
	return 6; // 0x605 Return
}


func_1151(var_13_object, var_16_cvector, var_17_cvector)
{
	var_18_object = Obj(); var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); // 0x47f PushV
	GetScene(var_20_object); // 0x480 Func
	var_22_string = "scripted"; // 0x482 PushS
	var_23_string = "blood_dir.xml"; // 0x483 PushS
	AddActorByType(var_21_object, var_22_string, var_20_object, var_16_cvector, var_17_cvector, var_23_string); // 0x484 Func
	var_24_object = Obj(); // 0x486 PushV
	var_24_object = var_13_object; // 0x487 Mov
	func_1039(var_24_object); // 0x488 NEW_2
	return 4; // 0x48a Return
}


