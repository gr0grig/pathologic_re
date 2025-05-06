task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool, var_17_float, var_18_int)
{
	var_19_bool = 0; // 0x1b PushV
	func_1450(var_19_bool); // 0x1c NEW_2
	if(var_19_bool == 0) goto Label_34; // 0x1e JumpB
	lshStopAnimation(); // 0x1f Func
	goto Label_36; // 0x21 Jump
	
Label_36:
	StopTrade(); // 0x24 Func
	var_0_bool = 1; // 0x26 TMovB
	return 0; // 0x27 Return
	
Label_34:
	StopAnimation(); // 0x22 Func
}


task_2_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_int, var_9_int, var_10_bool, var_11_bool, var_12_object, var_13_bool, var_14_bool, var_15_bool, var_16_bool, var_17_bool, var_18_float, var_19_int)
{
	var_20_int = 1; // 0xc3 PushI
	if(var_20_int == 0) goto Label_258; // 0xc4 JumpB
	func_860(); // 0xc6 NEW_2
	var_22_int = 21712; // 0xc8 PushI
	var_23_bool = var_18_float == var_22_int; // 0xc9 Eq
	if(var_23_bool == 0) goto Label_223; // 0xca JumpB
	var_24_string = ""; // 0xcb PushV
	var_24_string = "Neutral"; // 0xcc MovS
	func_172(var_19_int, var_24_string); // 0xcd NEW_2
	var_41_int = 520509; // 0xcf PushI
	SetMessage(var_41_int); // 0xd0 TObjFunc
	ClearReplies(); // 0xd2 TObjFunc
	var_42_int = 524384; // 0xd4 PushI
	var_43_int = 25709; // 0xd5 PushI
	var_44_int = 25708; // 0xd6 PushI
	AddReply(var_42_int, var_43_int, var_44_int); // 0xd7 TObjFunc
	var_45_int = 520510; // 0xd9 PushI
	var_46_int = -1; // 0xda PushI
	var_47_int = 21713; // 0xdb PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0xdc TObjFunc
	return 0; // 0xde Return
	
Label_223:
	var_48_int = 25709; // 0xdf PushI
	var_49_bool = var_18_float == var_48_int; // 0xe0 Eq
	if(var_49_bool == 0) goto Label_246; // 0xe1 JumpB
	var_50_string = ""; // 0xe2 PushV
	var_50_string = "Neutral"; // 0xe3 MovS
	func_172(var_19_int, var_50_string); // 0xe4 NEW_2
	var_51_int = 524385; // 0xe6 PushI
	SetMessage(var_51_int); // 0xe7 TObjFunc
	ClearReplies(); // 0xe9 TObjFunc
	var_52_int = 524387; // 0xeb PushI
	var_53_int = -1; // 0xec PushI
	var_54_int = 25711; // 0xed PushI
	AddReply(var_52_int, var_53_int, var_54_int); // 0xee TObjFunc
	var_55_int = 524386; // 0xf0 PushI
	var_56_int = -1; // 0xf1 PushI
	var_57_int = 25710; // 0xf2 PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0xf3 TObjFunc
	return 0; // 0xf5 Return
	
Label_246:
	var_3_object = 1; // 0xf6 TMovB
	var_58_bool = 0; // 0xf7 PushV
	func_1450(var_58_bool); // 0xf8 NEW_2
	if(var_58_bool == 0) goto Label_254; // 0xfa JumpB
	lshStopAnimation(); // 0xfb Func
	goto Label_256; // 0xfd Jump
	
Label_256:
	return 0; // 0x100 Return
	
Label_254:
	StopAnimation(); // 0xfe Func
	
Label_258:
	return 0; // 0x102 Return
}


task_3_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_float, var_17_int)
{
	func_549(var_16_float, var_17_int); // 0x118 NEW_2
	Hold(); // 0x11a Func
	return 0; // 0x11c Return
}


task_3_event_5(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_float, var_17_int)
{
	StopGroup0(); // 0x11d Func
	return 0; // 0x11f Return
}


task_3_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_float, var_17_int, var_18_object)
{
	var_19_float = 0; var_20_object = Obj(); // 0x121 PushV
	var_20_object = var_18_object; // 0x122 Mov
	func_1452(var_20_object); // 0x123 NEW_2
	var_24_bool = var_10_object > var_19_float; // 0x125 GT
	if(var_24_bool == 0) goto Label_302; // 0x126 JumpB
	var_25_int = 0; var_26_object = Obj(); // 0x127 PushV
	var_26_object = var_18_object; // 0x128 Mov
	TaskCall(1); // 0x129 TaskCall
	func_40(var_27_object, var_25_int, var_26_object); // 0x12a NEW_2
	TaskReturn(); // 0x12b TaskReturn
	return 0; // 0x12d Return
	
Label_302:
	var_153_int = 0; // 0x12e PushV
	func_957(var_153_int); // 0x12f NEW_2
	var_159_bool = var_11_bool != var_153_int; // 0x131 Neq
	if(var_159_bool == 0) goto Label_317; // 0x132 JumpB
	var_160_string = "Updating salesman"; // 0x133 PushS
	Trace(var_160_string); // 0x134 Func
	var_161_int = 0; // 0x136 PushV
	func_957(var_161_int); // 0x137 NEW_2
	var_11_bool = var_161_int; // 0x138 TMov
	func_420(); // 0x13b NEW_2
	
Label_317:
	var_477_bool = 0; var_478_object = Obj(); // 0x13d PushV
	var_478_object = var_18_object; // 0x13e Mov
	func_759(var_477_bool, var_478_object); // 0x13f NEW_2
	if(var_477_bool == 0) goto Label_332; // 0x141 JumpB
	var_508_object = Obj(); // 0x142 PushV
	var_508_object = var_18_object; // 0x143 Mov
	TaskCall(0); // 0x144 TaskCall
	func_0(var_508_object); // 0x145 NEW_2
	TaskReturn(); // 0x146 TaskReturn
	var_515_object = Obj(); // 0x148 PushV
	var_515_object = var_18_object; // 0x149 Mov
	func_814(); // 0x14a NEW_2
	
Label_332:
	return 0; // 0x14c Return
}


task_3_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_float, var_17_int, var_18_int)
{
	var_19_int = 10; // 0x20f PushI
	var_20_bool = var_18_int == var_19_int; // 0x210 Eq
	if(var_20_bool == 0) goto Label_548; // 0x211 JumpB
	var_21_bool = 0; // 0x212 PushV
	func_511(var_16_float, var_17_int, var_18_int, var_21_bool); // 0x213 NEW_2
	if(var_21_bool == 0) goto Label_542; // 0x215 JumpB
	var_34_bool = var_2_object == 0; // 0x216 Not
	if(var_34_bool == 0) goto Label_541; // 0x217 JumpB
	var_35_object = Obj(); // 0x218 PushV
	var_35_object = var_4_string; // 0x219 MovT
	func_849(var_35_object); // 0x21a NEW_2
	var_2_object = 1; // 0x21c TMovB
	
Label_541:
	goto Label_548; // 0x21d Jump
	
Label_548:
	return 0; // 0x224 Return
	
Label_542:
	var_42_object = var_2_object; // 0x21e PushT
	if(var_42_object == 0) goto Label_548; // 0x21f JumpB
	var_43_string = "head"; // 0x220 PushS
	UnlookAsync(var_43_string); // 0x221 Func
	var_2_object = 0; // 0x223 TMovB
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_float, var_17_int)
{
	var_11_bool = -1; // 0x103 TMovI
	func_333(var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_float, var_17_int); // 0x105 NEW_2
	var_73_bool = 0; // 0x107 PushV
	func_669(var_73_bool); // 0x108 NEW_2
	var_76_bool = var_73_bool == 0; // 0x10a Not
	if(var_76_bool == 0) goto Label_270; // 0x10b JumpB
	Hold(); // 0x10c Func
	
Label_270:
	var_77_bool = 1; // 0x10e PushB
	if(var_77_bool == 0) goto Label_278; // 0x10f JumpB
	var_78_float = 0; var_79_float = 0; // 0x110 PushV
	var_78_float = 300; // 0x111 MovI
	var_79_float = 100; // 0x112 MovI
	func_484(var_13_bool, var_14_bool, var_15_bool, var_16_float, var_17_int, var_78_float, var_79_float); // 0x113 NEW_2
	goto Label_270; // 0x115 Jump
	
Label_278:
	return 0; // 0x116 Return
}


func_0(var_0_bool)
{
	DoTrade(); // 0x1 Func
	var_0_bool = 0; // 0x3 TMovB
	
Label_4:
	var_510_bool = 0; // 0x4 PushV
	func_1450(var_510_bool); // 0x5 NEW_2
	if(var_510_bool == 0) goto Label_15; // 0x7 JumpB
	var_511_string = ""; // 0x8 PushV
	var_511_string = "Neutral"; // 0x9 MovS
	func_818(var_511_string); // 0xa NEW_2
	lshWaitForAnimEnd(); // 0xc Func
	goto Label_21; // 0xe Jump
	
Label_21:
	var_512_bool = var_0_bool; // 0x15 PushT
	if(var_512_bool == 0) goto Label_24; // 0x16 JumpB
	return 0; // 0x17 Return
	
Label_24:
	goto Label_4; // 0x18 Jump
	
Label_15:
	WaitForAnimEnd(); // 0xf Func
	var_513_string = "all"; // 0x11 PushS
	var_514_string = "idle"; // 0x12 PushS
	PlayAnimation(var_513_string, var_514_string); // 0x13 Func
}


func_642(var_126_bool)
{
	var_126_bool = 1; // 0x282 MovB
	return 0; // 0x283 Return
}


func_644()
{
	StopAnimation(); // 0x284 Func
	StopGroup0(); // 0x286 Func
	return 0; // 0x288 Return
}


func_904(var_356_string, var_357_int, var_358_int, var_359_int)
{
	var_360_int = 0; var_361_bool = 0; var_362_int = 0; var_363_bool = 0; // 0x388 PushV
	var_364_bool = 0; var_365_int = 0; var_366_int = 0; // 0x389 PushV
	var_365_int = var_357_int; // 0x38a Mov
	var_366_int = var_358_int; // 0x38b Mov
	func_952(var_364_bool, var_365_int, var_366_int); // 0x38c NEW_2
	if(var_364_bool == 0) goto Label_918; // 0x38e JumpB
	irand(var_362_int, var_359_int); // 0x38f Func
	var_367_int = 0; // 0x391 PushI
	var_368_int = 1; // 0x392 PushI
	var_369_int = var_362_int + var_368_int; // 0x393 Add
	AddItem(var_363_bool, var_356_string, var_367_int, var_369_int); // 0x394 Func
	
Label_918:
	return 4; // 0x396 Return
}


func_649(var_25_float)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); // 0x289 PushV
	GetPosition(var_30_cvector); // 0x28a Func
	GetPosition(var_31_cvector); // 0x28c ObjFunc
	var_32_cvector = var_31_cvector - var_30_cvector; // 0x28e Sub2
	var_25_float = var_32_cvector | var_32_cvector; // 0x28f Or2
	return 6; // 0x290 Return
}


func_1418(var_107_string, var_108_int)
{
	var_109_string = ""; var_110_string = ""; // 0x58a PushV
	var_110_string = "idle"; // 0x58b MovS
	var_111_int = var_108_int; // 0x58c Push
	if(var_111_int == 0) goto Label_1423; // 0x58d JumpB
	var_110_string = var_110_string + var_108_int; // 0x58e Add2
	
Label_1423:
	var_107_string = var_110_string; // 0x58f Mov
	return 2; // 0x590 Return
}


func_511(var_0_bool, var_1_object, var_4_string, var_21_bool)
{
	var_22_float = 0; var_23_float = 0; // 0x1ff PushV
	var_24_bool = var_4_string == 0; // 0x200 NullEq
	if(var_24_bool == 0) goto Label_516; // 0x201 JumpB
	var_21_bool = 0; // 0x202 MovB
	return 2; // 0x203 Return
	
Label_516:
	var_25_float = 0; var_26_object = Obj(); // 0x204 PushV
	var_26_object = var_4_string; // 0x205 MovT
	func_649(var_26_object); // 0x206 NEW_2
	var_23_float = sqrt(var_25_float); // 0x208 Sqrt2
	var_33_object = var_2_object; // 0x209 PushT
	if(var_33_object == 0) goto Label_524; // 0x20a JumpB
	var_23_float = var_23_float - var_1_object; // 0x20b Sub2
	
Label_524:
	var_21_bool = var_23_float < var_0_bool; // 0x20c LT2
	return 2; // 0x20d Return
}


func_657(var_30_bool, var_31_object, var_32_string)
{
	var_36_bool = 0; var_37_bool = 0; // 0x291 PushV
	var_38_string = "HasProperty"; // 0x292 PushS
	var_39_int = 2; // 0x293 PushI
	var_40_bool = IsFuncExist(var_31_object, var_38_string, var_39_int); // 0x294 FuncExist
	var_41_bool = var_40_bool == 0; // 0x295 Not
	if(var_41_bool == 0) goto Label_665; // 0x296 JumpB
	var_30_bool = 0; // 0x297 MovB
	return 2; // 0x298 Return
	
Label_665:
	HasProperty(var_32_string, var_37_bool); // 0x299 ObjFunc
	var_30_bool = var_37_bool; // 0x29b Mov
	return 2; // 0x29c Return
}


func_1425(var_101_int)
{
	var_102_int = 0; var_103_bool = 0; var_104_int = 0; var_105_bool = 0; // 0x591 PushV
	var_104_int = 0; // 0x592 MovI
	
Label_1427:
	var_106_string = "all"; // 0x593 PushS
	var_107_string = ""; var_108_int = 0; // 0x594 PushV
	var_108_int = var_104_int; // 0x595 Mov
	func_1418(var_107_string, var_108_int); // 0x596 NEW_2
	HasAnimation(var_105_bool, var_106_string, var_107_string); // 0x598 Func
	var_112_bool = var_105_bool == 0; // 0x59a Not
	if(var_112_bool == 0) goto Label_1437; // 0x59b JumpB
	goto Label_1440; // 0x59c Jump
	
Label_1440:
	var_101_int = var_104_int; // 0x5a0 Mov
	return 4; // 0x5a1 Return
	
Label_1437:
	var_113_int = 1; // 0x59d PushI
	var_104_int = var_104_int + var_113_int; // 0x59e Add2
	goto Label_1427; // 0x59f Jump
}


func_919(var_430_string, var_431_int, var_432_int, var_433_int, var_434_int)
{
	var_435_int = 0; var_436_bool = 0; var_437_int = 0; var_438_bool = 0; // 0x397 PushV
	var_439_bool = 0; var_440_int = 0; var_441_int = 0; // 0x398 PushV
	var_440_int = var_431_int; // 0x399 Mov
	var_441_int = var_432_int; // 0x39a Mov
	func_952(var_439_bool, var_440_int, var_441_int); // 0x39b NEW_2
	if(var_439_bool == 0) goto Label_935; // 0x39d JumpB
	var_442_int = var_434_int - var_433_int; // 0x39e Sub
	var_443_int = 1; // 0x39f PushI
	var_444_int = var_442_int + var_443_int; // 0x3a0 Add
	irand(var_437_int, var_444_int); // 0x3a1 Func
	var_445_int = 0; // 0x3a3 PushI
	var_446_int = var_437_int + var_433_int; // 0x3a4 Add
	AddItem(var_438_bool, var_430_string, var_445_int, var_446_int); // 0x3a5 Func
	
Label_935:
	return 4; // 0x3a7 Return
}


func_669(var_73_bool)
{
	var_74_bool = 0; var_75_bool = 0; // 0x29d PushV
	IsLoaded(var_75_bool); // 0x29e Func
	var_73_bool = var_75_bool; // 0x2a0 Mov
	return 2; // 0x2a1 Return
}


func_674(var_36_bool, var_38_float)
{
	var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_bool = 0; var_56_bool = 0; // 0x2a2 PushV
	GetPosition(var_49_cvector); // 0x2a3 ObjFunc
	GetEyesHeight(var_48_float); // 0x2a5 ObjFunc
	var_57_float = GetByIndex(var_49_cvector, 1); // 0x2a7 PushE
	var_57_float = var_57_float + var_48_float; // 0x2a8 Add2
	SetByIndex(var_49_cvector, 1) = var_57_float; // 0x2a9 PopE
	GetPosition(var_50_cvector); // 0x2aa Func
	GetEyesHeight(var_48_float); // 0x2ac Func
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x2ae PushE
	var_58_float = var_58_float + var_48_float; // 0x2af Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x2b0 PopE
	var_51_cvector = var_49_cvector - var_50_cvector; // 0x2b1 Sub2
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x2b2 PushE
	var_59_float = 0; // 0x2b3 MovI
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x2b4 PopE
	var_60_int = var_51_cvector | var_51_cvector; // 0x2b5 Or
	var_61_float = sqrt(var_60_int); // 0x2b6 Sqrt
	var_51_cvector = var_51_cvector / var_51_cvector; // 0x2b7 Div2
	var_52_cvector = -var_51_cvector; // 0x2b8 Neg2
	var_62_float = var_51_cvector * var_38_float; // 0x2b9 Mult
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); // 0x2ba PushV
	var_65_cvector = CVector(0.0, 1.0, 0.0); // 0x2bb PushVec
	var_64_cvector = var_52_cvector ^ var_65_cvector; // 0x2bc Xor2
	func_942(var_63_cvector, var_64_cvector); // 0x2bd NEW_2
	var_71_int = 25; // 0x2bf PushI
	var_72_float = var_63_cvector * var_71_int; // 0x2c0 Mult
	var_73_int = var_62_float + var_72_float; // 0x2c1 Add
	var_74_cvector = CVector(0.0, 10.0, 0.0); // 0x2c2 PushVec
	var_53_cvector = var_73_int - var_74_cvector; // 0x2c3 Sub2
	var_54_cvector = var_50_cvector + var_53_cvector; // 0x2c4 Add2
	IsOverrideActive(var_55_bool); // 0x2c5 Func
	var_75_bool = var_55_bool; // 0x2c7 Push
	if(var_75_bool == 0) goto Label_715; // 0x2c8 JumpB
	var_36_bool = 0; // 0x2c9 MovB
	return 18; // 0x2ca Return
	
Label_715:
	StopWorld(); // 0x2cb Func
	CameraTransit(var_54_cvector, var_52_cvector); // 0x2cd Func
	var_76_float = GetByIndex(var_53_cvector, 0); // 0x2cf PushE
	var_77_float = GetByIndex(var_53_cvector, 2); // 0x2d0 PushE
	Rotate(var_76_float, var_77_float); // 0x2d1 Func
	var_78_bool = 0; // 0x2d3 PushV
	func_1450(var_78_bool); // 0x2d4 NEW_2
	if(var_78_bool == 0) goto Label_728; // 0x2d6 JumpB
	goto Label_736; // 0x2d7 Jump
	
Label_736:
	CameraWaitForPlayFinish(); // 0x2e0 Func
	ResumeWorld(); // 0x2e2 Func
	var_36_bool = 1; // 0x2e4 MovB
	return 18; // 0x2e5 Return
	
Label_728:
	var_79_string = "head"; // 0x2d8 PushS
	HasAnimationTrack(var_56_bool, var_79_string); // 0x2d9 Func
	var_80_bool = var_56_bool; // 0x2db Push
	if(var_80_bool == 0) goto Label_736; // 0x2dc JumpB
	var_81_string = "head"; // 0x2dd PushS
	LookAsyncCamera(var_81_string); // 0x2de Func
}


func_1442(var_84_int)
{
	var_84_int = 531557; // 0x5a2 MovI
	return 0; // 0x5a3 Return
}


func_1444(var_83_int)
{
	var_83_int = 531556; // 0x5a4 MovI
	return 0; // 0x5a5 Return
}


func_549(var_2_object, var_3_object)
{
	func_644(); // 0x226 NEW_2
	var_18_int = 10; // 0x228 PushI
	KillTimer(var_18_int); // 0x229 Func
	var_19_object = var_2_object; // 0x22b PushT
	if(var_19_object == 0) goto Label_561; // 0x22c JumpB
	var_20_string = "head"; // 0x22d PushS
	UnlookAsync(var_20_string); // 0x22e Func
	var_2_object = 0; // 0x230 TMovB
	
Label_561:
	var_3_object = 1; // 0x231 TMovB
	return 0; // 0x232 Return
}


func_1446(var_85_string)
{
	var_85_string = "ui/NPC_Citizen1.png"; // 0x5a6 MovS
	return 0; // 0x5a7 Return
}


func_420()
{
	var_162_int = 0; var_163_int = 0; // 0x1a4 PushV
	var_164_int = 0; // 0x1a5 PushV
	func_957(var_164_int); // 0x1a6 NEW_2
	var_163_int = var_164_int; // 0x1a7 Mov
	var_165_int = 0; // 0x1a9 PushI
	ClearSubContainer(var_165_int); // 0x1aa Func
	var_166_bool = var_5_bool; // 0x1ac PushT
	if(var_166_bool == 0) goto Label_439; // 0x1ad JumpB
	var_167_bool = 0; var_168_object = Obj(); var_169_int = 0; var_170_int = 0; // 0x1ae PushV
	var_171_object = Obj(); // 0x1af PushV
	func_936(var_171_object); // 0x1b0 NEW_2
	var_168_object = var_171_object; // 0x1b1 Mov
	var_169_int = var_163_int; // 0x1b3 Mov
	var_170_int = 1; // 0x1b4 MovI
	func_966(var_167_bool, var_168_object, var_169_int, var_170_int); // 0x1b5 NEW_2
	
Label_439:
	var_453_int = var_6_int; // 0x1b7 PushT
	if(var_453_int == 0) goto Label_450; // 0x1b8 JumpB
	var_454_bool = 0; var_455_object = Obj(); var_456_int = 0; var_457_int = 0; // 0x1b9 PushV
	var_458_object = Obj(); // 0x1ba PushV
	func_936(var_458_object); // 0x1bb NEW_2
	var_455_object = var_458_object; // 0x1bc Mov
	var_456_int = var_163_int; // 0x1be Mov
	var_457_int = 0; // 0x1bf MovI
	func_966(var_454_bool, var_455_object, var_456_int, var_457_int); // 0x1c0 NEW_2
	
Label_450:
	var_459_int = var_7_int; // 0x1c2 PushT
	if(var_459_int == 0) goto Label_461; // 0x1c3 JumpB
	var_460_bool = 0; var_461_object = Obj(); var_462_int = 0; var_463_int = 0; // 0x1c4 PushV
	var_464_object = Obj(); // 0x1c5 PushV
	func_936(var_464_object); // 0x1c6 NEW_2
	var_461_object = var_464_object; // 0x1c7 Mov
	var_462_int = var_163_int; // 0x1c9 Mov
	var_463_int = 3; // 0x1ca MovI
	func_966(var_460_bool, var_461_object, var_462_int, var_463_int); // 0x1cb NEW_2
	
Label_461:
	var_465_bool = var_8_bool; // 0x1cd PushT
	if(var_465_bool == 0) goto Label_472; // 0x1ce JumpB
	var_466_bool = 0; var_467_object = Obj(); var_468_int = 0; var_469_int = 0; // 0x1cf PushV
	var_470_object = Obj(); // 0x1d0 PushV
	func_936(var_470_object); // 0x1d1 NEW_2
	var_467_object = var_470_object; // 0x1d2 Mov
	var_468_int = var_163_int; // 0x1d4 Mov
	var_469_int = 2; // 0x1d5 MovI
	func_966(var_466_bool, var_467_object, var_468_int, var_469_int); // 0x1d6 NEW_2
	
Label_472:
	var_471_bool = var_9_bool; // 0x1d8 PushT
	if(var_471_bool == 0) goto Label_483; // 0x1d9 JumpB
	var_472_bool = 0; var_473_object = Obj(); var_474_int = 0; var_475_int = 0; // 0x1da PushV
	var_476_object = Obj(); // 0x1db PushV
	func_936(var_476_object); // 0x1dc NEW_2
	var_473_object = var_476_object; // 0x1dd Mov
	var_474_int = var_163_int; // 0x1df Mov
	var_475_int = 4; // 0x1e0 MovI
	func_966(var_472_bool, var_473_object, var_474_int, var_475_int); // 0x1e1 NEW_2
	
Label_483:
	return 2; // 0x1e3 Return
}


func_1448(var_86_string)
{
	var_86_string = "ui/NPC_Citizen1_b.png"; // 0x5a8 MovS
	return 0; // 0x5a9 Return
}


func_40(var_0_bool, var_25_int, var_26_object)
{
	var_28_object = Obj(); var_29_bool = 0; var_30_int = 0; var_31_bool = 0; var_32_object = Obj(); var_33_bool = 0; var_34_int = 0; var_35_bool = 0; // 0x28 PushV
	var_0_bool = var_26_object; // 0x29 TMov
	var_36_bool = 0; var_37_object = Obj(); var_38_float = 0; // 0x2a PushV
	var_37_object = var_26_object; // 0x2b Mov
	var_38_float = 70.0; // 0x2c MovF
	func_674(var_37_object, var_38_float); // 0x2d NEW_2
	var_82_bool = var_36_bool == 0; // 0x2f Not
	if(var_82_bool == 0) goto Label_51; // 0x30 JumpB
	var_25_int = -2; // 0x31 MovI
	return 8; // 0x32 Return
	
Label_51:
	CreateDialog(var_32_object); // 0x33 Func
	var_83_int = 0; // 0x35 PushV
	func_1444(var_83_int); // 0x36 NEW_2
	SetNPCName(var_83_int); // 0x38 ObjFunc
	var_84_int = 0; // 0x3a PushV
	func_1442(var_84_int); // 0x3b NEW_2
	SetNPCDescription(var_84_int); // 0x3d ObjFunc
	var_85_string = ""; // 0x3f PushV
	func_1446(var_85_string); // 0x40 NEW_2
	SetPhoto(var_85_string); // 0x42 ObjFunc
	var_86_string = ""; // 0x44 PushV
	func_1448(var_86_string); // 0x45 NEW_2
	SetPhoto2(var_86_string); // 0x47 ObjFunc
	var_87_int = 0; // 0x49 PushV
	func_1401(var_87_int); // 0x4a NEW_2
	SetPlayerName(var_87_int); // 0x4c ObjFunc
	var_34_int = -1; // 0x4e MovI
	IsOverrideActive(var_33_bool); // 0x4f Func
	var_95_bool = var_33_bool; // 0x51 Push
	if(var_95_bool == 0) goto Label_85; // 0x52 JumpB
	var_25_int = -2; // 0x53 MovI
	return 8; // 0x54 Return
	
Label_85:
	DoDialog(var_32_object); // 0x55 Func
	var_96_object = Obj(); var_97_object = Obj(); // 0x57 PushV
	var_96_object = var_26_object; // 0x58 Mov
	var_97_object = var_32_object; // 0x59 Mov
	TaskCall(2); // 0x5a TaskCall
	func_114(var_98_object, var_99_object, var_100_string, var_101_bool, var_96_object, var_97_object); // 0x5b NEW_2
	TaskReturn(); // 0x5c TaskReturn
	IsDialogEnd(var_35_bool); // 0x5e ObjFunc
	
Label_96:
	var_145_bool = var_35_bool == 0; // 0x60 Not
	if(var_145_bool == 0) goto Label_103; // 0x61 JumpB
	sync(); // 0x62 Func
	IsDialogEnd(var_35_bool); // 0x64 ObjFunc
	goto Label_96; // 0x66 Jump
	
Label_103:
	var_146_object = Obj(); // 0x67 PushV
	var_146_object = var_26_object; // 0x68 Mov
	func_742(); // 0x69 NEW_2
	StopDialog(var_32_object); // 0x6b Func
	GetReturnValue(var_34_int); // 0x6d ObjFunc
	var_25_int = var_34_int; // 0x6f Mov
	return 8; // 0x70 Return
}


func_1450(var_78_bool)
{
	var_78_bool = 0; // 0x5aa MovB
	return 0; // 0x5ab Return
}


func_936(var_33_object)
{
	var_34_object = Obj(); var_35_object = Obj(); // 0x3a8 PushV
	self(var_35_object); // 0x3a9 Func
	var_33_object = var_35_object; // 0x3ab Mov
	return 2; // 0x3ac Return
}


func_172(var_2_object, var_103_string)
{
	var_104_bool = 0; // 0xad PushV
	func_1450(var_104_bool); // 0xae NEW_2
	var_105_bool = var_104_bool == 0; // 0xb0 Not
	if(var_105_bool == 0) goto Label_179; // 0xb1 JumpB
	return 0; // 0xb2 Return
	
Label_179:
	var_106_bool = var_103_string == var_2_object; // 0xb3 Eq
	if(var_106_bool == 0) goto Label_182; // 0xb4 JumpB
	return 0; // 0xb5 Return
	
Label_182:
	var_107_string = ""; var_108_bool = 0; // 0xb6 PushV
	var_107_string = var_103_string; // 0xb7 Mov
	var_109_string = ""; // 0xb8 PushS
	var_110_bool = var_103_string == var_109_string; // 0xb9 Eq
	if(var_110_bool == 0) goto Label_189; // 0xba JumpB
	var_108_bool = 0; // 0xbb MovB
	goto Label_190; // 0xbc Jump
	
Label_190:
	func_834(var_107_string, var_108_bool); // 0xbe NEW_2
	var_2_object = var_103_string; // 0xc0 TMov
	return 0; // 0xc1 Return
	
Label_189:
	var_108_bool = 1; // 0xbd MovB
}


func_1452(var_19_float)
{
	var_21_float = 0; var_22_float = 0; // 0x5ac PushV
	var_23_string = "reputation"; // 0x5ad PushS
	GetProperty(var_23_string, var_22_float); // 0x5ae ObjFunc
	var_19_float = var_22_float; // 0x5b0 Mov
	return 2; // 0x5b1 Return
}


func_814()
{
	CameraSwitchToNormal(); // 0x32f Func
	return 0; // 0x331 Return
}


func_942(var_63_cvector, var_64_cvector)
{
	var_66_float = 0; var_67_float = 0; // 0x3ae PushV
	var_68_int = var_64_cvector | var_64_cvector; // 0x3af Or
	var_67_float = sqrt(var_68_int); // 0x3b0 Sqrt2
	var_69_float = 0.0; // 0x3b1 PushF
	var_70_bool = var_67_float < var_69_float; // 0x3b2 LT
	if(var_70_bool == 0) goto Label_950; // 0x3b3 JumpB
	var_63_cvector = CVector(0.0, 0.0, 0.0); // 0x3b4 MovV
	return 2; // 0x3b5 Return
	
Label_950:
	var_63_cvector = var_64_cvector / var_64_cvector; // 0x3b6 Div2
	return 2; // 0x3b7 Return
}


func_818(var_129_string)
{
	var_130_bool = 0; var_131_float = 0; var_132_float = 0; var_133_bool = 0; var_134_float = 0; var_135_float = 0; // 0x332 PushV
	lshHasAnimation(var_133_bool, var_129_string); // 0x333 Func
	var_136_bool = var_133_bool; // 0x335 Push
	if(var_136_bool == 0) goto Label_829; // 0x336 JumpB
	lshGetAnimTimes(var_129_string, var_134_float, var_135_float); // 0x337 Func
	var_137_bool = 0; // 0x339 PushB
	lshPlayAnimation(var_134_float, var_135_float, var_137_bool); // 0x33a Func
	goto Label_833; // 0x33c Jump
	
Label_833:
	return 6; // 0x341 Return
	
Label_829:
	var_138_string = "Can't find lsh animation : "; // 0x33d PushS
	var_139_int = var_138_string + var_129_string; // 0x33e Add
	Trace(var_139_int); // 0x33f Func
}


func_563()
{
	var_85_int = 0; var_86_int = 0; var_87_int = 0; var_88_int = 0; var_89_bool = 0; var_90_float = 0; var_91_bool = 0; var_92_int = 0; var_93_int = 0; var_94_int = 0; var_95_int = 0; var_96_bool = 0; var_97_float = 0; var_98_bool = 0; // 0x233 PushV
	WaitForAnimEnd(); // 0x234 Func
	var_99_bool = 0; // 0x236 PushV
	func_669(var_99_bool); // 0x237 NEW_2
	var_100_bool = var_99_bool == 0; // 0x239 Not
	if(var_100_bool == 0) goto Label_572; // 0x23a JumpB
	return 14; // 0x23b Return
	
Label_572:
	var_101_int = 0; // 0x23c PushV
	func_1425(var_101_int); // 0x23d NEW_2
	var_92_int = var_101_int; // 0x23e Mov
	var_93_int = 0; // 0x240 MovI
	
Label_577:
	var_114_bool = 0; // 0x241 PushV
	var_114_bool = 0; // 0x242 MovB
	var_115_int = 5; // 0x243 PushI
	var_116_bool = var_93_int < var_115_int; // 0x244 LT
	if(var_116_bool == 0) goto Label_587; // 0x245 JumpB
	var_117_bool = 0; // 0x246 PushV
	func_669(var_117_bool); // 0x247 NEW_2
	if(var_117_bool == 0) goto Label_587; // 0x249 JumpB
	var_114_bool = 1; // 0x24a MovB
	
Label_587:
	if(var_114_bool == 0) goto Label_639; // 0x24b JumpB
	var_118_int = 3; // 0x24c PushI
	irand(var_94_int, var_118_int); // 0x24d Func
	var_119_int = 0; // 0x24f PushI
	var_120_bool = var_94_int == var_119_int; // 0x250 Eq
	if(var_120_bool == 0) goto Label_611; // 0x251 JumpB
	var_121_int = var_92_int; // 0x252 Push
	if(var_121_int == 0) goto Label_610; // 0x253 JumpB
	irand(var_95_int, var_92_int); // 0x254 Func
	var_122_string = "all"; // 0x256 PushS
	var_123_string = ""; var_124_int = 0; // 0x257 PushV
	var_124_int = var_95_int; // 0x258 Mov
	func_1418(var_123_string, var_124_int); // 0x259 NEW_2
	PlayAnimation(var_122_string, var_123_string); // 0x25b Func
	WaitForAnimEnd(var_96_bool); // 0x25d Func
	var_125_bool = var_96_bool == 0; // 0x25f Not
	if(var_125_bool == 0) goto Label_610; // 0x260 JumpB
	goto Label_639; // 0x261 Jump
	
Label_639:
	ResetAAS(); // 0x27f Func
	return 14; // 0x281 Return
	
Label_610:
	goto Label_628; // 0x262 Jump
	
Label_628:
	var_126_bool = 0; // 0x274 PushV
	func_642(var_126_bool); // 0x275 NEW_2
	var_127_bool = var_126_bool == 0; // 0x277 Not
	if(var_127_bool == 0) goto Label_634; // 0x278 JumpB
	goto Label_639; // 0x279 Jump
	
Label_634:
	ResetAAS(); // 0x27a Func
	var_128_int = 1; // 0x27c PushI
	var_93_int = var_93_int + var_128_int; // 0x27d Add2
	goto Label_577; // 0x27e Jump
	
Label_611:
	var_129_int = 1; // 0x263 PushI
	var_130_bool = var_94_int == var_129_int; // 0x264 Eq
	if(var_130_bool == 0) goto Label_625; // 0x265 JumpB
	var_131_int = 4; // 0x266 PushI
	rand(var_97_float, var_131_int); // 0x267 Func
	var_132_int = 1; // 0x269 PushI
	var_133_int = var_97_float + var_132_int; // 0x26a Add
	Sleep(var_133_int, var_98_bool); // 0x26b Func
	var_134_bool = var_98_bool == 0; // 0x26d Not
	if(var_134_bool == 0) goto Label_624; // 0x26e JumpB
	goto Label_639; // 0x26f Jump
	
Label_624:
	goto Label_628; // 0x270 Jump
	
Label_625:
	var_135_int = var_93_int; // 0x271 Push
	if(var_135_int == 0) goto Label_628; // 0x272 JumpB
	goto Label_639; // 0x273 Jump
}


func_952(var_189_bool, var_190_int, var_191_int)
{
	var_192_int = 0; var_193_int = 0; // 0x3b8 PushV
	irand(var_193_int, var_191_int); // 0x3b9 Func
	var_189_bool = var_193_int < var_190_int; // 0x3bb LT2
	return 2; // 0x3bc Return
}


func_957(var_153_int)
{
	var_154_float = 0; var_155_float = 0; // 0x3bd PushV
	GetGameTime(var_155_float); // 0x3be Func
	var_156_int = 1; // 0x3c0 PushI
	var_157_int = 0; // 0x3c1 PushV
	var_158_int = 24; // 0x3c2 PushI
	var_157_int = var_155_float / var_155_float; // 0x3c3 Div2
	var_153_int = var_156_int + var_157_int; // 0x3c4 Add2
	return 2; // 0x3c5 Return
}


func_834(var_107_string, var_108_bool)
{
	var_111_bool = 0; var_112_float = 0; var_113_float = 0; var_114_bool = 0; var_115_float = 0; var_116_float = 0; // 0x342 PushV
	lshHasAnimation(var_114_bool, var_107_string); // 0x343 Func
	var_117_bool = var_114_bool; // 0x345 Push
	if(var_117_bool == 0) goto Label_844; // 0x346 JumpB
	lshGetAnimTimes(var_107_string, var_115_float, var_116_float); // 0x347 Func
	lshPlayAnimation(var_115_float, var_116_float, var_108_bool); // 0x349 Func
	goto Label_848; // 0x34b Jump
	
Label_848:
	return 6; // 0x350 Return
	
Label_844:
	var_118_string = "Can't find lsh animation : "; // 0x34c PushS
	var_119_int = var_118_string + var_107_string; // 0x34d Add
	Trace(var_119_int); // 0x34e Func
}


func_966(var_167_bool, var_168_object, var_169_int, var_170_int)
{
	var_174_int = 0; // 0x3c7 PushI
	var_175_bool = var_170_int == var_174_int; // 0x3c8 Eq
	if(var_175_bool == 0) goto Label_978; // 0x3c9 JumpB
	var_176_bool = 0; var_177_object = Obj(); var_178_int = 0; // 0x3ca PushV
	var_177_object = var_168_object; // 0x3cb Mov
	var_178_int = var_169_int; // 0x3cc Mov
	func_1017(var_178_int); // 0x3cd NEW_2
	var_167_bool = var_176_bool; // 0x3ce Mov
	return 0; // 0x3d0 Return
	
Label_978:
	var_179_int = 1; // 0x3d2 PushI
	var_180_bool = var_170_int == var_179_int; // 0x3d3 Eq
	if(var_180_bool == 0) goto Label_989; // 0x3d4 JumpB
	var_181_bool = 0; var_182_object = Obj(); var_183_int = 0; // 0x3d5 PushV
	var_182_object = var_168_object; // 0x3d6 Mov
	var_183_int = var_169_int; // 0x3d7 Mov
	func_1020(var_182_object, var_183_int); // 0x3d8 NEW_2
	var_167_bool = var_181_bool; // 0x3d9 Mov
	return 0; // 0x3db Return
	
Label_989:
	var_240_int = 2; // 0x3dd PushI
	var_241_bool = var_170_int == var_240_int; // 0x3de Eq
	if(var_241_bool == 0) goto Label_1000; // 0x3df JumpB
	var_242_bool = 0; var_243_object = Obj(); var_244_int = 0; // 0x3e0 PushV
	var_243_object = var_168_object; // 0x3e1 Mov
	var_244_int = var_169_int; // 0x3e2 Mov
	func_1113(var_242_bool, var_243_object, var_244_int); // 0x3e3 NEW_2
	var_167_bool = var_242_bool; // 0x3e4 Mov
	return 0; // 0x3e6 Return
	
Label_1000:
	var_335_int = 3; // 0x3e8 PushI
	var_336_bool = var_170_int == var_335_int; // 0x3e9 Eq
	if(var_336_bool == 0) goto Label_1010; // 0x3ea JumpB
	var_337_bool = 0; var_338_object = Obj(); var_339_int = 0; // 0x3eb PushV
	var_338_object = var_168_object; // 0x3ec Mov
	var_339_int = var_169_int; // 0x3ed Mov
	func_1234(var_338_object, var_339_int); // 0x3ee NEW_2
	var_167_bool = var_337_bool; // 0x3ef Mov
	return 0; // 0x3f1 Return
	
Label_1010:
	var_420_bool = 0; var_421_object = Obj(); var_422_int = 0; // 0x3f2 PushV
	var_421_object = var_168_object; // 0x3f3 Mov
	var_422_int = var_169_int; // 0x3f4 Mov
	func_1367(var_421_object, var_422_int); // 0x3f5 NEW_2
	var_167_bool = var_420_bool; // 0x3f6 Mov
	return 0; // 0x3f8 Return
}


func_333(var_5_bool, var_6_int, var_7_int, var_8_bool, var_9_bool, var_10_object)
{
	var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_float = 0; var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_float = 0; // 0x14d PushV
	var_30_bool = 0; var_31_object = Obj(); var_32_string = ""; // 0x14e PushV
	var_33_object = Obj(); // 0x14f PushV
	func_936(var_33_object); // 0x150 NEW_2
	var_31_object = var_33_object; // 0x151 Mov
	var_32_string = "clothes"; // 0x153 MovS
	func_657(var_30_bool, var_31_object, var_32_string); // 0x154 NEW_2
	if(var_30_bool == 0) goto Label_346; // 0x156 JumpB
	var_42_string = "clothes"; // 0x157 PushS
	GetProperty(var_42_string, var_24_int); // 0x158 Func
	
Label_346:
	var_43_bool = 0; var_44_object = Obj(); var_45_string = ""; // 0x15a PushV
	var_46_object = Obj(); // 0x15b PushV
	func_936(var_46_object); // 0x15c NEW_2
	var_44_object = var_46_object; // 0x15d Mov
	var_45_string = "weapon"; // 0x15f MovS
	func_657(var_43_bool, var_44_object, var_45_string); // 0x160 NEW_2
	if(var_43_bool == 0) goto Label_358; // 0x162 JumpB
	var_47_string = "weapon"; // 0x163 PushS
	GetProperty(var_47_string, var_25_int); // 0x164 Func
	
Label_358:
	var_48_bool = 0; var_49_object = Obj(); var_50_string = ""; // 0x166 PushV
	var_51_object = Obj(); // 0x167 PushV
	func_936(var_51_object); // 0x168 NEW_2
	var_49_object = var_51_object; // 0x169 Mov
	var_50_string = "food"; // 0x16b MovS
	func_657(var_48_bool, var_49_object, var_50_string); // 0x16c NEW_2
	if(var_48_bool == 0) goto Label_370; // 0x16e JumpB
	var_52_string = "food"; // 0x16f PushS
	GetProperty(var_52_string, var_26_int); // 0x170 Func
	
Label_370:
	var_53_bool = 0; var_54_object = Obj(); var_55_string = ""; // 0x172 PushV
	var_56_object = Obj(); // 0x173 PushV
	func_936(var_56_object); // 0x174 NEW_2
	var_54_object = var_56_object; // 0x175 Mov
	var_55_string = "medcine"; // 0x177 MovS
	func_657(var_53_bool, var_54_object, var_55_string); // 0x178 NEW_2
	if(var_53_bool == 0) goto Label_382; // 0x17a JumpB
	var_57_string = "medcine"; // 0x17b PushS
	GetProperty(var_57_string, var_27_int); // 0x17c Func
	
Label_382:
	var_58_bool = 0; var_59_object = Obj(); var_60_string = ""; // 0x17e PushV
	var_61_object = Obj(); // 0x17f PushV
	func_936(var_61_object); // 0x180 NEW_2
	var_59_object = var_61_object; // 0x181 Mov
	var_60_string = "other"; // 0x183 MovS
	func_657(var_58_bool, var_59_object, var_60_string); // 0x184 NEW_2
	if(var_58_bool == 0) goto Label_394; // 0x186 JumpB
	var_62_string = "other"; // 0x187 PushS
	GetProperty(var_62_string, var_28_int); // 0x188 Func
	
Label_394:
	var_63_bool = 0; var_64_object = Obj(); var_65_string = ""; // 0x18a PushV
	var_66_object = Obj(); // 0x18b PushV
	func_936(var_66_object); // 0x18c NEW_2
	var_64_object = var_66_object; // 0x18d Mov
	var_65_string = "rep_threshold"; // 0x18f MovS
	func_657(var_63_bool, var_64_object, var_65_string); // 0x190 NEW_2
	if(var_63_bool == 0) goto Label_407; // 0x192 JumpB
	var_67_string = "rep_threshold"; // 0x193 PushS
	GetProperty(var_67_string, var_29_float); // 0x194 Func
	goto Label_408; // 0x196 Jump
	
Label_408:
	var_68_int = 0; // 0x198 PushI
	var_5_bool = var_24_int != var_68_int; // 0x199 Neq2
	var_69_int = 0; // 0x19a PushI
	var_6_int = var_25_int != var_69_int; // 0x19b Neq2
	var_70_int = 0; // 0x19c PushI
	var_7_int = var_26_int != var_70_int; // 0x19d Neq2
	var_71_int = 0; // 0x19e PushI
	var_8_bool = var_27_int != var_71_int; // 0x19f Neq2
	var_72_int = 0; // 0x1a0 PushI
	var_9_bool = var_28_int != var_72_int; // 0x1a1 Neq2
	var_10_object = var_29_float; // 0x1a2 TMov
	return 12; // 0x1a3 Return
	
Label_407:
	var_29_float = 0.33; // 0x197 MovF
}


func_849(var_35_object)
{
	var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_float = 0; var_39_cvector = CVector(0,0,0); // 0x351 PushV
	GetEyesHeight(var_38_float); // 0x352 ObjFunc
	var_39_cvector = CVector(0.0, 0.0, 0.0); // 0x354 MovV
	var_40_float = GetByIndex(var_39_cvector, 1); // 0x355 PushE
	var_40_float = var_38_float; // 0x356 Mov
	SetByIndex(var_39_cvector, 1) = var_40_float; // 0x357 PopE
	var_41_string = "head"; // 0x358 PushS
	LookAsync(var_35_object, var_41_string, var_39_cvector); // 0x359 Func
	return 4; // 0x35b Return
}


func_1234(var_337_bool, var_339_int)
{
	var_340_bool = 0; var_341_int = 0; var_342_int = 0; var_343_bool = 0; var_344_int = 0; var_345_int = 0; // 0x4d2 PushV
	var_346_int = 3; // 0x4d3 PushI
	var_347_bool = var_339_int < var_346_int; // 0x4d4 LT
	if(var_347_bool == 0) goto Label_1240; // 0x4d5 JumpB
	var_345_int = 2; // 0x4d6 MovI
	goto Label_1256; // 0x4d7 Jump
	
Label_1256:
	var_348_string = ""; var_349_int = 0; var_350_int = 0; // 0x4e8 PushV
	var_348_string = "lemon"; // 0x4e9 MovS
	var_349_int = 1; // 0x4ea MovI
	var_350_int = var_345_int; // 0x4eb Mov
	func_893(var_348_string, var_349_int, var_350_int); // 0x4ec NEW_2
	var_351_string = ""; var_352_int = 0; var_353_int = 0; // 0x4ee PushV
	var_351_string = "rusk"; // 0x4ef MovS
	var_352_int = 1; // 0x4f0 MovI
	var_353_int = var_345_int; // 0x4f1 Mov
	func_893(var_351_string, var_352_int, var_353_int); // 0x4f2 NEW_2
	var_354_int = 2; // 0x4f4 PushI
	var_355_bool = var_339_int == var_354_int; // 0x4f5 Eq
	if(var_355_bool == 0) goto Label_1293; // 0x4f6 JumpB
	var_356_string = ""; var_357_int = 0; var_358_int = 0; var_359_int = 0; // 0x4f7 PushV
	var_356_string = "dried_fish"; // 0x4f8 MovS
	var_357_int = 1; // 0x4f9 MovI
	var_358_int = 1; // 0x4fa MovI
	var_359_int = 2; // 0x4fb MovI
	func_904(var_356_string, var_357_int, var_358_int, var_359_int); // 0x4fc NEW_2
	var_370_string = ""; var_371_int = 0; var_372_int = 0; var_373_int = 0; // 0x4fe PushV
	var_370_string = "smoked_meat"; // 0x4ff MovS
	var_371_int = 1; // 0x500 MovI
	var_372_int = 1; // 0x501 MovI
	var_373_int = 2; // 0x502 MovI
	func_904(var_370_string, var_371_int, var_372_int, var_373_int); // 0x503 NEW_2
	var_374_string = ""; var_375_int = 0; var_376_int = 0; var_377_int = 0; // 0x505 PushV
	var_374_string = "bread"; // 0x506 MovS
	var_375_int = 1; // 0x507 MovI
	var_376_int = 1; // 0x508 MovI
	var_377_int = 2; // 0x509 MovI
	func_904(var_374_string, var_375_int, var_376_int, var_377_int); // 0x50a NEW_2
	goto Label_1311; // 0x50c Jump
	
Label_1311:
	var_378_string = ""; var_379_int = 0; var_380_int = 0; // 0x51f PushV
	var_378_string = "egg"; // 0x520 MovS
	var_379_int = 1; // 0x521 MovI
	var_380_int = var_345_int; // 0x522 Mov
	func_893(var_378_string, var_379_int, var_380_int); // 0x523 NEW_2
	var_381_string = ""; var_382_int = 0; var_383_int = 0; // 0x525 PushV
	var_381_string = "vegetables"; // 0x526 MovS
	var_382_int = 1; // 0x527 MovI
	var_383_int = var_345_int; // 0x528 Mov
	func_893(var_381_string, var_382_int, var_383_int); // 0x529 NEW_2
	var_384_string = ""; var_385_int = 0; var_386_int = 0; // 0x52b PushV
	var_384_string = "milk"; // 0x52c MovS
	var_385_int = 1; // 0x52d MovI
	var_386_int = var_345_int; // 0x52e Mov
	func_893(var_384_string, var_385_int, var_386_int); // 0x52f NEW_2
	var_387_string = ""; var_388_int = 0; var_389_int = 0; // 0x531 PushV
	var_387_string = "dried_meat"; // 0x532 MovS
	var_388_int = 1; // 0x533 MovI
	var_389_int = var_345_int; // 0x534 Mov
	func_893(var_387_string, var_388_int, var_389_int); // 0x535 NEW_2
	var_390_string = ""; var_391_int = 0; var_392_int = 0; // 0x537 PushV
	var_390_string = "fresh_fish"; // 0x538 MovS
	var_391_int = 1; // 0x539 MovI
	var_392_int = var_345_int; // 0x53a Mov
	func_893(var_390_string, var_391_int, var_392_int); // 0x53b NEW_2
	var_393_string = ""; var_394_int = 0; var_395_int = 0; // 0x53d PushV
	var_393_string = "fresh_meat"; // 0x53e MovS
	var_394_int = 1; // 0x53f MovI
	var_395_int = var_345_int; // 0x540 Mov
	func_893(var_393_string, var_394_int, var_395_int); // 0x541 NEW_2
	var_396_string = ""; var_397_int = 0; var_398_int = 0; // 0x543 PushV
	var_396_string = "funduk"; // 0x544 MovS
	var_397_int = 1; // 0x545 MovI
	var_398_int = 20; // 0x546 MovI
	func_893(var_396_string, var_397_int, var_398_int); // 0x547 NEW_2
	var_399_string = ""; var_400_int = 0; var_401_int = 0; // 0x549 PushV
	var_399_string = "peanut"; // 0x54a MovS
	var_400_int = 1; // 0x54b MovI
	var_401_int = 20; // 0x54c MovI
	func_893(var_399_string, var_400_int, var_401_int); // 0x54d NEW_2
	var_402_string = ""; var_403_int = 0; var_404_int = 0; // 0x54f PushV
	var_402_string = "walnut"; // 0x550 MovS
	var_403_int = 1; // 0x551 MovI
	var_404_int = 20; // 0x552 MovI
	func_893(var_402_string, var_403_int, var_404_int); // 0x553 NEW_2
	var_337_bool = 1; // 0x555 MovB
	return 6; // 0x556 Return
	
Label_1293:
	var_405_string = ""; var_406_int = 0; var_407_int = 0; // 0x50d PushV
	var_405_string = "dried_fish"; // 0x50e MovS
	var_406_int = 1; // 0x50f MovI
	var_407_int = var_345_int; // 0x510 Mov
	func_893(var_405_string, var_406_int, var_407_int); // 0x511 NEW_2
	var_408_string = ""; var_409_int = 0; var_410_int = 0; // 0x513 PushV
	var_408_string = "smoked_meat"; // 0x514 MovS
	var_409_int = 1; // 0x515 MovI
	var_410_int = var_345_int; // 0x516 Mov
	func_893(var_408_string, var_409_int, var_410_int); // 0x517 NEW_2
	var_411_string = ""; var_412_int = 0; var_413_int = 0; // 0x519 PushV
	var_411_string = "bread"; // 0x51a MovS
	var_412_int = 1; // 0x51b MovI
	var_413_int = var_345_int; // 0x51c Mov
	func_893(var_411_string, var_412_int, var_413_int); // 0x51d NEW_2
	
Label_1240:
	var_414_int = 5; // 0x4d8 PushI
	var_415_bool = var_339_int < var_414_int; // 0x4d9 LT
	if(var_415_bool == 0) goto Label_1245; // 0x4da JumpB
	var_345_int = 3; // 0x4db MovI
	goto Label_1256; // 0x4dc Jump
	
Label_1245:
	var_416_int = 7; // 0x4dd PushI
	var_417_bool = var_339_int < var_416_int; // 0x4de LT
	if(var_417_bool == 0) goto Label_1250; // 0x4df JumpB
	var_345_int = 3; // 0x4e0 MovI
	goto Label_1256; // 0x4e1 Jump
	
Label_1250:
	var_418_int = 7; // 0x4e2 PushI
	var_419_bool = var_339_int < var_418_int; // 0x4e3 LT
	if(var_419_bool == 0) goto Label_1255; // 0x4e4 JumpB
	var_345_int = 4; // 0x4e5 MovI
	goto Label_1256; // 0x4e6 Jump
	
Label_1255:
	var_345_int = 5; // 0x4e7 MovI
}


func_1367(var_420_bool, var_422_int)
{
	var_423_string = ""; var_424_int = 0; var_425_int = 0; // 0x558 PushV
	var_423_string = "hook"; // 0x559 MovS
	var_424_int = 1; // 0x55a MovI
	var_425_int = 5; // 0x55b MovI
	func_893(var_423_string, var_424_int, var_425_int); // 0x55c NEW_2
	var_426_string = ""; var_427_int = 0; var_428_int = 0; var_429_int = 0; // 0x55e PushV
	var_426_string = "needle"; // 0x55f MovS
	var_427_int = 2; // 0x560 MovI
	var_428_int = 3; // 0x561 MovI
	var_429_int = 3; // 0x562 MovI
	func_904(var_426_string, var_427_int, var_428_int, var_429_int); // 0x563 NEW_2
	var_430_string = ""; var_431_int = 0; var_432_int = 0; var_433_int = 0; var_434_int = 0; // 0x565 PushV
	var_430_string = "kerosene"; // 0x566 MovS
	var_431_int = 9; // 0x567 MovI
	var_432_int = 10; // 0x568 MovI
	var_433_int = 4; // 0x569 MovI
	var_434_int = 20; // 0x56a MovI
	func_919(var_430_string, var_431_int, var_432_int, var_433_int, var_434_int); // 0x56b NEW_2
	var_447_int = 9; // 0x56d PushI
	var_448_bool = var_422_int >= var_447_int; // 0x56e GE
	if(var_448_bool == 0) goto Label_1399; // 0x56f JumpB
	var_449_string = ""; var_450_int = 0; var_451_int = 0; var_452_int = 0; // 0x570 PushV
	var_449_string = "rifle_ammo"; // 0x571 MovS
	var_450_int = 1; // 0x572 MovI
	var_451_int = 2; // 0x573 MovI
	var_452_int = 5; // 0x574 MovI
	func_904(var_449_string, var_450_int, var_451_int, var_452_int); // 0x575 NEW_2
	
Label_1399:
	var_420_bool = 1; // 0x577 MovB
	return 0; // 0x578 Return
}


func_1113(var_242_bool, var_243_object, var_244_int)
{
	var_245_bool = 0; var_246_bool = 0; // 0x459 PushV
	var_247_object = Obj(); var_248_string = ""; var_249_int = 0; var_250_int = 0; var_251_int = 0; // 0x45a PushV
	var_247_object = var_243_object; // 0x45b Mov
	var_248_string = "tourniquet"; // 0x45c MovS
	var_249_int = 1; // 0x45d MovI
	var_250_int = 2; // 0x45e MovI
	var_251_int = 10; // 0x45f MovI
	func_878(var_248_string, var_249_int, var_250_int, var_251_int); // 0x460 NEW_2
	var_262_object = Obj(); var_263_string = ""; var_264_int = 0; var_265_int = 0; var_266_int = 0; // 0x462 PushV
	var_262_object = var_243_object; // 0x463 Mov
	var_263_string = "alpha_pills"; // 0x464 MovS
	var_264_int = 1; // 0x465 MovI
	var_265_int = 1; // 0x466 MovI
	var_266_int = 10; // 0x467 MovI
	func_878(var_263_string, var_264_int, var_265_int, var_266_int); // 0x468 NEW_2
	var_267_object = Obj(); var_268_string = ""; var_269_int = 0; var_270_int = 0; var_271_int = 0; // 0x46a PushV
	var_267_object = var_243_object; // 0x46b Mov
	var_268_string = "meradorm"; // 0x46c MovS
	var_269_int = 1; // 0x46d MovI
	var_270_int = 1; // 0x46e MovI
	var_271_int = 2; // 0x46f MovI
	func_878(var_268_string, var_269_int, var_270_int, var_271_int); // 0x470 NEW_2
	var_272_int = 3; // 0x472 PushI
	var_273_bool = var_244_int >= var_272_int; // 0x473 GE
	if(var_273_bool == 0) goto Label_1149; // 0x474 JumpB
	var_274_object = Obj(); var_275_string = ""; var_276_int = 0; var_277_int = 0; var_278_int = 0; // 0x475 PushV
	var_274_object = var_243_object; // 0x476 Mov
	var_275_string = "neomicin"; // 0x477 MovS
	var_276_int = 1; // 0x478 MovI
	var_277_int = 1; // 0x479 MovI
	var_278_int = 2; // 0x47a MovI
	func_878(var_275_string, var_276_int, var_277_int, var_278_int); // 0x47b NEW_2
	
Label_1149:
	var_279_int = 4; // 0x47d PushI
	var_280_bool = var_244_int >= var_279_int; // 0x47e GE
	if(var_280_bool == 0) goto Label_1175; // 0x47f JumpB
	var_281_object = Obj(); var_282_string = ""; var_283_int = 0; var_284_int = 0; // 0x480 PushV
	var_281_object = var_243_object; // 0x481 Mov
	var_282_string = "novocaine"; // 0x482 MovS
	var_283_int = 1; // 0x483 MovI
	var_284_int = 2; // 0x484 MovI
	func_867(var_282_string, var_283_int, var_284_int); // 0x485 NEW_2
	var_291_object = Obj(); var_292_string = ""; var_293_int = 0; var_294_int = 0; var_295_int = 0; // 0x487 PushV
	var_291_object = var_243_object; // 0x488 Mov
	var_292_string = "gamma_pills"; // 0x489 MovS
	var_293_int = 1; // 0x48a MovI
	var_294_int = 2; // 0x48b MovI
	var_295_int = 2; // 0x48c MovI
	func_878(var_292_string, var_293_int, var_294_int, var_295_int); // 0x48d NEW_2
	var_296_object = Obj(); var_297_string = ""; var_298_int = 0; var_299_int = 0; var_300_int = 0; // 0x48f PushV
	var_296_object = var_243_object; // 0x490 Mov
	var_297_string = "beta_pills"; // 0x491 MovS
	var_298_int = 1; // 0x492 MovI
	var_299_int = 2; // 0x493 MovI
	var_300_int = 2; // 0x494 MovI
	func_878(var_297_string, var_298_int, var_299_int, var_300_int); // 0x495 NEW_2
	
Label_1175:
	var_301_int = 6; // 0x497 PushI
	var_302_bool = var_244_int >= var_301_int; // 0x498 GE
	if(var_302_bool == 0) goto Label_1207; // 0x499 JumpB
	var_303_object = Obj(); var_304_string = ""; var_305_int = 0; var_306_int = 0; // 0x49a PushV
	var_303_object = var_243_object; // 0x49b Mov
	var_304_string = "packet"; // 0x49c MovS
	var_305_int = 1; // 0x49d MovI
	var_306_int = 4; // 0x49e MovI
	func_867(var_304_string, var_305_int, var_306_int); // 0x49f NEW_2
	var_307_object = Obj(); var_308_string = ""; var_309_int = 0; var_310_int = 0; // 0x4a1 PushV
	var_307_object = var_243_object; // 0x4a2 Mov
	var_308_string = "morfin"; // 0x4a3 MovS
	var_309_int = 1; // 0x4a4 MovI
	var_310_int = 2; // 0x4a5 MovI
	func_867(var_308_string, var_309_int, var_310_int); // 0x4a6 NEW_2
	var_311_object = Obj(); var_312_string = ""; var_313_int = 0; var_314_int = 0; // 0x4a8 PushV
	var_311_object = var_243_object; // 0x4a9 Mov
	var_312_string = "Scalpel"; // 0x4aa MovS
	var_313_int = 1; // 0x4ab MovI
	var_314_int = 8; // 0x4ac MovI
	func_867(var_312_string, var_313_int, var_314_int); // 0x4ad NEW_2
	var_315_object = Obj(); var_316_string = ""; var_317_int = 0; var_318_int = 0; var_319_int = 0; // 0x4af PushV
	var_315_object = var_243_object; // 0x4b0 Mov
	var_316_string = "monomicin"; // 0x4b1 MovS
	var_317_int = 1; // 0x4b2 MovI
	var_318_int = 2; // 0x4b3 MovI
	var_319_int = 2; // 0x4b4 MovI
	func_878(var_316_string, var_317_int, var_318_int, var_319_int); // 0x4b5 NEW_2
	
Label_1207:
	var_320_int = 9; // 0x4b7 PushI
	var_321_bool = var_244_int >= var_320_int; // 0x4b8 GE
	if(var_321_bool == 0) goto Label_1232; // 0x4b9 JumpB
	var_322_object = Obj(); var_323_string = ""; var_324_int = 0; var_325_int = 0; // 0x4ba PushV
	var_322_object = var_243_object; // 0x4bb Mov
	var_323_string = "etorfin"; // 0x4bc MovS
	var_324_int = 1; // 0x4bd MovI
	var_325_int = 2; // 0x4be MovI
	func_867(var_323_string, var_324_int, var_325_int); // 0x4bf NEW_2
	var_326_object = Obj(); var_327_string = ""; var_328_int = 0; var_329_int = 0; // 0x4c1 PushV
	var_326_object = var_243_object; // 0x4c2 Mov
	var_327_string = "feromicin"; // 0x4c3 MovS
	var_328_int = 1; // 0x4c4 MovI
	var_329_int = 2; // 0x4c5 MovI
	func_867(var_327_string, var_328_int, var_329_int); // 0x4c6 NEW_2
	var_330_object = Obj(); var_331_string = ""; var_332_int = 0; var_333_int = 0; var_334_int = 0; // 0x4c8 PushV
	var_330_object = var_243_object; // 0x4c9 Mov
	var_331_string = "delta_pills"; // 0x4ca MovS
	var_332_int = 1; // 0x4cb MovI
	var_333_int = 2; // 0x4cc MovI
	var_334_int = 2; // 0x4cd MovI
	func_878(var_331_string, var_332_int, var_333_int, var_334_int); // 0x4ce NEW_2
	
Label_1232:
	var_242_bool = 1; // 0x4d0 MovB
	return 2; // 0x4d1 Return
}


func_860()
{
	var_21_bool = 0; // 0x35c PushV
	func_1450(var_21_bool); // 0x35d NEW_2
	if(var_21_bool == 0) goto Label_866; // 0x35f JumpB
	lshStopSpeech(); // 0x360 Func
	
Label_866:
	return 0; // 0x362 Return
}


func_867(var_282_string, var_283_int, var_284_int)
{
	var_285_bool = 0; var_286_bool = 0; // 0x363 PushV
	var_287_bool = 0; var_288_int = 0; var_289_int = 0; // 0x364 PushV
	var_288_int = var_283_int; // 0x365 Mov
	var_289_int = var_284_int; // 0x366 Mov
	func_952(var_287_bool, var_288_int, var_289_int); // 0x367 NEW_2
	if(var_287_bool == 0) goto Label_877; // 0x369 JumpB
	var_290_int = 0; // 0x36a PushI
	AddItem(var_286_bool, var_282_string, var_290_int); // 0x36b ObjFunc
	
Label_877:
	return 2; // 0x36d Return
}


func_484(var_0_bool, var_1_object, var_2_object, var_3_object, var_17_int, var_78_float, var_79_float)
{
	var_80_bool = 0; // 0x1e5 PushV
	func_669(var_80_bool); // 0x1e6 NEW_2
	var_81_bool = var_80_bool == 0; // 0x1e8 Not
	if(var_81_bool == 0) goto Label_491; // 0x1e9 JumpB
	return 0; // 0x1ea Return
	
Label_491:
	var_82_string = "player"; // 0x1eb PushS
	FindActor(var_17_int, var_82_string); // 0x1ec Func
	var_2_object = 0; // 0x1ee TMovB
	var_3_object = 0; // 0x1ef TMovB
	var_0_bool = var_78_float; // 0x1f0 TMov
	var_1_object = var_79_float; // 0x1f1 TMov
	var_83_int = 10; // 0x1f2 PushI
	var_84_float = 1.0; // 0x1f3 PushF
	SetTimer(var_83_int, var_84_float); // 0x1f4 Func
	func_563(); // 0x1f7 NEW_2
	var_136_bool = var_3_object == 0; // 0x1f9 Not
	if(var_136_bool == 0) goto Label_510; // 0x1fa JumpB
	var_137_int = 10; // 0x1fb PushI
	KillTimer(var_137_int); // 0x1fc Func
	
Label_510:
	return 0; // 0x1fe Return
}


func_742()
{
	var_147_bool = 0; var_148_bool = 0; // 0x2e6 PushV
	CameraSwitchToNormal(); // 0x2e7 Func
	var_149_bool = 0; // 0x2e9 PushV
	func_1450(var_149_bool); // 0x2ea NEW_2
	if(var_149_bool == 0) goto Label_750; // 0x2ec JumpB
	goto Label_758; // 0x2ed Jump
	
Label_758:
	return 2; // 0x2f6 Return
	
Label_750:
	var_150_string = "head"; // 0x2ee PushS
	HasAnimationTrack(var_148_bool, var_150_string); // 0x2ef Func
	var_151_bool = var_148_bool; // 0x2f1 Push
	if(var_151_bool == 0) goto Label_758; // 0x2f2 JumpB
	var_152_string = "head"; // 0x2f3 PushS
	UnlookAsync(var_152_string); // 0x2f4 Func
}


func_878(var_248_string, var_249_int, var_250_int, var_251_int)
{
	var_252_int = 0; var_253_bool = 0; var_254_int = 0; var_255_bool = 0; // 0x36e PushV
	var_256_bool = 0; var_257_int = 0; var_258_int = 0; // 0x36f PushV
	var_257_int = var_249_int; // 0x370 Mov
	var_258_int = var_250_int; // 0x371 Mov
	func_952(var_256_bool, var_257_int, var_258_int); // 0x372 NEW_2
	if(var_256_bool == 0) goto Label_892; // 0x374 JumpB
	irand(var_254_int, var_251_int); // 0x375 Func
	var_259_int = 0; // 0x377 PushI
	var_260_int = 1; // 0x378 PushI
	var_261_int = var_251_int + var_260_int; // 0x379 Add
	AddItem(var_255_bool, var_248_string, var_259_int, var_261_int); // 0x37a ObjFunc
	
Label_892:
	return 4; // 0x37c Return
}


func_114(var_0_bool, var_1_object, var_2_object, var_3_object, var_96_object, var_97_object)
{
	var_0_bool = var_97_object; // 0x73 TMov
	var_1_object = var_96_object; // 0x74 TMov
	var_3_object = 0; // 0x75 TMovB
	var_102_int = 1; // 0x76 PushI
	if(var_102_int == 0) goto Label_142; // 0x77 JumpB
	var_103_string = ""; // 0x78 PushV
	var_103_string = "Neutral"; // 0x79 MovS
	func_172(var_97_object, var_103_string); // 0x7a NEW_2
	var_120_int = 520509; // 0x7c PushI
	SetMessage(var_120_int); // 0x7d TObjFunc
	ClearReplies(); // 0x7f TObjFunc
	var_121_int = 524384; // 0x81 PushI
	var_122_int = 25709; // 0x82 PushI
	var_123_int = 25708; // 0x83 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x84 TObjFunc
	var_124_int = 520510; // 0x86 PushI
	var_125_int = -1; // 0x87 PushI
	var_126_int = 21713; // 0x88 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x89 TObjFunc
	goto Label_142; // 0x8b Jump
	
Label_142:
	var_127_bool = 0; // 0x8e PushV
	func_1450(var_127_bool); // 0x8f NEW_2
	if(var_127_bool == 0) goto Label_157; // 0x91 JumpB
	
Label_146:
	lshWaitForAnimEnd(); // 0x92 Func
	var_128_object = var_3_object; // 0x94 PushT
	if(var_128_object == 0) goto Label_151; // 0x95 JumpB
	goto Label_156; // 0x96 Jump
	
Label_156:
	goto Label_171; // 0x9c Jump
	
Label_171:
	return 0; // 0xab Return
	
Label_151:
	var_129_string = ""; // 0x97 PushV
	var_129_string = var_2_object; // 0x98 MovT
	func_818(var_129_string); // 0x99 NEW_2
	goto Label_146; // 0x9b Jump
	
Label_157:
	var_140_string = "all"; // 0x9d PushS
	var_141_string = "idle"; // 0x9e PushS
	PlayAnimation(var_140_string, var_141_string); // 0x9f Func
	
Label_161:
	WaitForAnimEnd(); // 0xa1 Func
	var_142_object = var_3_object; // 0xa3 PushT
	if(var_142_object == 0) goto Label_166; // 0xa4 JumpB
	goto Label_171; // 0xa5 Jump
	
Label_166:
	var_143_string = "all"; // 0xa6 PushS
	var_144_string = "idle"; // 0xa7 PushS
	PlayAnimation(var_143_string, var_144_string); // 0xa8 Func
	goto Label_161; // 0xaa Jump
}


func_1017(var_176_bool)
{
	var_176_bool = 1; // 0x3fa MovB
	return 0; // 0x3fb Return
}


func_759(var_477_bool, var_478_object)
{
	var_479_bool = 0; var_480_object = Obj(); var_481_float = 0; // 0x2f8 PushV
	var_480_object = var_478_object; // 0x2f9 Mov
	var_481_float = 70; // 0x2fa MovI
	func_767(var_480_object, var_481_float); // 0x2fb NEW_2
	var_477_bool = var_479_bool; // 0x2fc Mov
	return 0; // 0x2fe Return
}


func_1401(var_87_int)
{
	var_88_int = 0; var_89_int = 0; // 0x579 PushV
	var_90_string = "branch"; // 0x57a PushS
	GetVariable(var_90_string, var_89_int); // 0x57b Func
	var_91_int = 0; // 0x57d PushI
	var_92_bool = var_89_int == var_91_int; // 0x57e Eq
	if(var_92_bool == 0) goto Label_1411; // 0x57f JumpB
	var_87_int = 1; // 0x580 MovI
	return 2; // 0x581 Return
	
Label_1411:
	var_93_int = 1; // 0x583 PushI
	var_94_bool = var_89_int == var_93_int; // 0x584 Eq
	if(var_94_bool == 0) goto Label_1416; // 0x585 JumpB
	var_87_int = 2; // 0x586 MovI
	return 2; // 0x587 Return
	
Label_1416:
	var_87_int = 3; // 0x588 MovI
	return 2; // 0x589 Return
}


func_1020(var_181_bool, var_183_int)
{
	var_184_string = ""; var_185_int = 0; var_186_int = 0; // 0x3fd PushV
	var_184_string = "drapery"; // 0x3fe MovS
	var_185_int = 1; // 0x3ff MovI
	var_186_int = 2; // 0x400 MovI
	func_893(var_184_string, var_185_int, var_186_int); // 0x401 NEW_2
	var_195_int = 2; // 0x403 PushI
	var_196_bool = var_183_int >= var_195_int; // 0x404 GE
	if(var_196_bool == 0) goto Label_1048; // 0x405 JumpB
	var_197_string = ""; var_198_int = 0; var_199_int = 0; // 0x406 PushV
	var_197_string = "halfboot_repel"; // 0x407 MovS
	var_198_int = 1; // 0x408 MovI
	var_199_int = 3; // 0x409 MovI
	func_893(var_197_string, var_198_int, var_199_int); // 0x40a NEW_2
	var_200_string = ""; var_201_int = 0; var_202_int = 0; // 0x40c PushV
	var_200_string = "glove_disp"; // 0x40d MovS
	var_201_int = 1; // 0x40e MovI
	var_202_int = 3; // 0x40f MovI
	func_893(var_200_string, var_201_int, var_202_int); // 0x410 NEW_2
	var_203_string = ""; var_204_int = 0; var_205_int = 0; // 0x412 PushV
	var_203_string = "drapery"; // 0x413 MovS
	var_204_int = 1; // 0x414 MovI
	var_205_int = 3; // 0x415 MovI
	func_893(var_203_string, var_204_int, var_205_int); // 0x416 NEW_2
	
Label_1048:
	var_206_int = 4; // 0x418 PushI
	var_207_bool = var_183_int >= var_206_int; // 0x419 GE
	if(var_207_bool == 0) goto Label_1063; // 0x41a JumpB
	var_208_string = ""; var_209_int = 0; var_210_int = 0; // 0x41b PushV
	var_208_string = "glove"; // 0x41c MovS
	var_209_int = 1; // 0x41d MovI
	var_210_int = 4; // 0x41e MovI
	func_893(var_208_string, var_209_int, var_210_int); // 0x41f NEW_2
	var_211_string = ""; var_212_int = 0; var_213_int = 0; // 0x421 PushV
	var_211_string = "cloak_repel"; // 0x422 MovS
	var_212_int = 1; // 0x423 MovI
	var_213_int = 4; // 0x424 MovI
	func_893(var_211_string, var_212_int, var_213_int); // 0x425 NEW_2
	
Label_1063:
	var_214_int = 5; // 0x427 PushI
	var_215_bool = var_183_int >= var_214_int; // 0x428 GE
	if(var_215_bool == 0) goto Label_1078; // 0x429 JumpB
	var_216_string = ""; var_217_int = 0; var_218_int = 0; // 0x42a PushV
	var_216_string = "mask"; // 0x42b MovS
	var_217_int = 1; // 0x42c MovI
	var_218_int = 8; // 0x42d MovI
	func_893(var_216_string, var_217_int, var_218_int); // 0x42e NEW_2
	var_219_string = ""; var_220_int = 0; var_221_int = 0; // 0x430 PushV
	var_219_string = "boot_repel"; // 0x431 MovS
	var_220_int = 1; // 0x432 MovI
	var_221_int = 4; // 0x433 MovI
	func_893(var_219_string, var_220_int, var_221_int); // 0x434 NEW_2
	
Label_1078:
	var_222_int = 7; // 0x436 PushI
	var_223_bool = var_183_int >= var_222_int; // 0x437 GE
	if(var_223_bool == 0) goto Label_1087; // 0x438 JumpB
	var_224_string = ""; var_225_int = 0; var_226_int = 0; // 0x439 PushV
	var_224_string = "raincoat_repel"; // 0x43a MovS
	var_225_int = 1; // 0x43b MovI
	var_226_int = 4; // 0x43c MovI
	func_893(var_224_string, var_225_int, var_226_int); // 0x43d NEW_2
	
Label_1087:
	var_227_int = 9; // 0x43f PushI
	var_228_bool = var_183_int >= var_227_int; // 0x440 GE
	if(var_228_bool == 0) goto Label_1102; // 0x441 JumpB
	var_229_string = ""; var_230_int = 0; var_231_int = 0; // 0x442 PushV
	var_229_string = "glove_army"; // 0x443 MovS
	var_230_int = 1; // 0x444 MovI
	var_231_int = 5; // 0x445 MovI
	func_893(var_229_string, var_230_int, var_231_int); // 0x446 NEW_2
	var_232_string = ""; var_233_int = 0; var_234_int = 0; // 0x448 PushV
	var_232_string = "boot_army"; // 0x449 MovS
	var_233_int = 1; // 0x44a MovI
	var_234_int = 5; // 0x44b MovI
	func_893(var_232_string, var_233_int, var_234_int); // 0x44c NEW_2
	
Label_1102:
	var_235_int = 10; // 0x44e PushI
	var_236_bool = var_183_int >= var_235_int; // 0x44f GE
	if(var_236_bool == 0) goto Label_1111; // 0x450 JumpB
	var_237_string = ""; var_238_int = 0; var_239_int = 0; // 0x451 PushV
	var_237_string = "balahon"; // 0x452 MovS
	var_238_int = 1; // 0x453 MovI
	var_239_int = 9; // 0x454 MovI
	func_893(var_237_string, var_238_int, var_239_int); // 0x455 NEW_2
	
Label_1111:
	var_181_bool = 1; // 0x457 MovB
	return 0; // 0x458 Return
}


func_893(var_184_string, var_185_int, var_186_int)
{
	var_187_bool = 0; var_188_bool = 0; // 0x37d PushV
	var_189_bool = 0; var_190_int = 0; var_191_int = 0; // 0x37e PushV
	var_190_int = var_185_int; // 0x37f Mov
	var_191_int = var_186_int; // 0x380 Mov
	func_952(var_189_bool, var_190_int, var_191_int); // 0x381 NEW_2
	if(var_189_bool == 0) goto Label_903; // 0x383 JumpB
	var_194_int = 0; // 0x384 PushI
	AddItem(var_188_bool, var_184_string, var_194_int); // 0x385 Func
	
Label_903:
	return 2; // 0x387 Return
}


func_767(var_479_bool, var_481_float)
{
	var_482_float = 0; var_483_cvector = CVector(0,0,0); var_484_cvector = CVector(0,0,0); var_485_cvector = CVector(0,0,0); var_486_cvector = CVector(0,0,0); var_487_cvector = CVector(0,0,0); var_488_cvector = CVector(0,0,0); var_489_bool = 0; var_490_float = 0; var_491_cvector = CVector(0,0,0); var_492_cvector = CVector(0,0,0); var_493_cvector = CVector(0,0,0); var_494_cvector = CVector(0,0,0); var_495_cvector = CVector(0,0,0); var_496_cvector = CVector(0,0,0); var_497_bool = 0; // 0x2ff PushV
	GetPosition(var_491_cvector); // 0x300 ObjFunc
	GetEyesHeight(var_490_float); // 0x302 ObjFunc
	var_498_float = GetByIndex(var_491_cvector, 1); // 0x304 PushE
	var_498_float = var_498_float + var_490_float; // 0x305 Add2
	SetByIndex(var_491_cvector, 1) = var_498_float; // 0x306 PopE
	GetPosition(var_492_cvector); // 0x307 Func
	GetEyesHeight(var_490_float); // 0x309 Func
	var_499_float = GetByIndex(var_492_cvector, 1); // 0x30b PushE
	var_499_float = var_499_float + var_490_float; // 0x30c Add2
	SetByIndex(var_492_cvector, 1) = var_499_float; // 0x30d PopE
	var_493_cvector = var_491_cvector - var_492_cvector; // 0x30e Sub2
	var_500_float = GetByIndex(var_493_cvector, 1); // 0x30f PushE
	var_500_float = 0; // 0x310 MovI
	SetByIndex(var_493_cvector, 1) = var_500_float; // 0x311 PopE
	var_501_int = var_493_cvector | var_493_cvector; // 0x312 Or
	var_502_float = sqrt(var_501_int); // 0x313 Sqrt
	var_493_cvector = var_493_cvector / var_493_cvector; // 0x314 Div2
	var_494_cvector = -var_493_cvector; // 0x315 Neg2
	var_503_float = var_493_cvector * var_481_float; // 0x316 Mult
	var_504_cvector = CVector(0.0, 10.0, 0.0); // 0x317 PushVec
	var_495_cvector = var_503_float - var_504_cvector; // 0x318 Sub2
	var_496_cvector = var_492_cvector + var_495_cvector; // 0x319 Add2
	IsOverrideActive(var_497_bool); // 0x31a Func
	var_505_bool = var_497_bool; // 0x31c Push
	if(var_505_bool == 0) goto Label_800; // 0x31d JumpB
	var_479_bool = 0; // 0x31e MovB
	return 16; // 0x31f Return
	
Label_800:
	StopWorld(); // 0x320 Func
	CameraTransit(var_496_cvector, var_494_cvector); // 0x322 Func
	var_506_float = GetByIndex(var_495_cvector, 0); // 0x324 PushE
	var_507_float = GetByIndex(var_495_cvector, 2); // 0x325 PushE
	Rotate(var_506_float, var_507_float); // 0x326 Func
	CameraWaitForPlayFinish(); // 0x328 Func
	ResumeWorld(); // 0x32a Func
	var_479_bool = 1; // 0x32c MovB
	return 16; // 0x32d Return
}


