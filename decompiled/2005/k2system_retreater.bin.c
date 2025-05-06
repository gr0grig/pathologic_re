task_0_event_26(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0xa PushV
	var_20_string = "wonder"; // 0xb PushS
	var_21_bool = var_17_bool == var_20_string; // 0xc Eq
	if(var_21_bool == 0) goto Label_27; // 0xd JumpB
	var_22_int = 1; // 0xe PushI
	Sleep(var_22_int); // 0xf Func
	var_23_string = "player"; // 0x11 PushS
	FindActor(var_19_object, var_23_string); // 0x12 Func
	var_24_object = Obj(); // 0x14 PushV
	var_24_object = var_19_object; // 0x15 Mov
	TaskCall(1); // 0x16 TaskCall
	func_174(var_24_object); // 0x17 NEW_2
	TaskReturn(); // 0x18 TaskReturn
	var_19_object = 0; // 0x1a SetNull
	
Label_27:
	return 2; // 0x1b Return
}


task_0_event_7(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 10; // 0x47 PushI
	var_19_bool = var_17_bool == var_18_int; // 0x48 Eq
	if(var_19_bool == 0) goto Label_92; // 0x49 JumpB
	var_20_bool = 0; // 0x4a PushV
	func_55(var_15_bool, var_16_object, var_17_bool, var_20_bool); // 0x4b NEW_2
	if(var_20_bool == 0) goto Label_86; // 0x4d JumpB
	var_33_bool = var_2_bool == 0; // 0x4e Not
	if(var_33_bool == 0) goto Label_85; // 0x4f JumpB
	var_34_object = Obj(); // 0x50 PushV
	var_34_object = var_4_object; // 0x51 MovT
	func_1835(var_34_object); // 0x52 NEW_2
	var_2_bool = 1; // 0x54 TMovB
	
Label_85:
	goto Label_92; // 0x55 Jump
	
Label_92:
	return 0; // 0x5c Return
	
Label_86:
	var_41_bool = var_2_bool; // 0x56 PushT
	if(var_41_bool == 0) goto Label_92; // 0x57 JumpB
	var_42_string = "head"; // 0x58 PushS
	UnlookAsync(var_42_string); // 0x59 Func
	var_2_bool = 0; // 0x5b TMovB
}


task_1_event_17(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_bool = 0; var_19_object = Obj(); // 0xb8 PushV
	var_19_object = var_17_bool; // 0xb9 Mov
	func_2104(var_18_bool, var_19_object); // 0xba NEW_2
	if(var_18_bool == 0) goto Label_196; // 0xbc JumpB
	func_352(var_17_bool); // 0xbe NEW_2
	var_55_object = Obj(); // 0xc0 PushV
	var_55_object = var_17_bool; // 0xc1 Mov
	func_2111(var_55_object); // 0xc2 NEW_2
	
Label_196:
	return 0; // 0xc4 Return
}


task_1_event_7(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_int, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_cvector = CVector(0,0,0); var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_float = 0; // 0x12c PushV
	var_26_int = 120; // 0x12d PushI
	var_27_bool = var_17_bool != var_26_int; // 0x12e Neq
	if(var_27_bool == 0) goto Label_305; // 0x12f JumpB
	return 8; // 0x130 Return
	
Label_305:
	var_28_bool = var_0_int == 0; // 0x131 NullEq
	if(var_28_bool == 0) goto Label_314; // 0x132 JumpB
	Stop(); // 0x133 Func
	var_29_int = 1; // 0x135 PushI
	KillTimer(var_29_int); // 0x136 Func
	var_2_bool = 1; // 0x138 TMovB
	goto Label_351; // 0x139 Jump
	
Label_351:
	return 8; // 0x15f Return
	
Label_314:
	GetDirection(var_22_cvector); // 0x13a Func
	var_30_float = 7000.0; // 0x13c PushF
	FindDirLength(var_23_float, var_22_cvector, var_30_float); // 0x13d Func
	var_31_cvector = CVector(0,0,0); var_32_float = 0; // 0x13f PushV
	var_32_float = 1.74533; // 0x140 MovF
	func_197(var_31_cvector, var_32_float); // 0x141 NEW_2
	var_24_cvector = var_31_cvector; // 0x142 Mov
	var_25_float = var_24_cvector | var_24_cvector; // 0x144 Or2
	var_61_bool = 0; // 0x145 PushV
	var_61_bool = 0; // 0x146 MovB
	var_62_float = 2500.0; // 0x147 PushF
	var_63_bool = var_25_float >= var_62_float; // 0x148 GE
	if(var_63_bool == 0) goto Label_344; // 0x149 JumpB
	var_64_bool = 0; // 0x14a PushV
	var_64_bool = 1; // 0x14b MovB
	var_65_float = var_23_float * var_23_float; // 0x14c Mult
	var_66_float = 2.25; // 0x14d PushF
	var_67_float = var_65_float * var_66_float; // 0x14e Mult
	var_68_bool = var_25_float >= var_67_float; // 0x14f GE
	if(var_68_bool == 0) goto Label_342; // 0x150 JumpB
	var_69_bool = 0; // 0x151 PushV
	func_368(var_64_bool, var_69_bool); // 0x152 NEW_2
	if(var_69_bool == 0) goto Label_342; // 0x154 JumpB
	var_64_bool = 0; // 0x155 MovB
	
Label_342:
	if(var_64_bool == 0) goto Label_344; // 0x156 JumpB
	var_61_bool = 1; // 0x157 MovB
	
Label_344:
	if(var_61_bool == 0) goto Label_351; // 0x158 JumpB
	Stop(); // 0x159 Func
	var_89_cvector = CVector(0,0,0); // 0x15b PushV
	func_1496(var_89_cvector); // 0x15c NEW_2
	var_1_int = var_89_cvector + var_24_cvector; // 0x15e Add2
}


task_1_event_41(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_352(var_17_bool); // 0x169 NEW_2
	var_19_object = Obj(); // 0x16b PushV
	var_19_object = var_17_bool; // 0x16c Mov
	func_2098(); // 0x16d NEW_2
	return 0; // 0x16f Return
}


task_3_event_7(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_int)
{
	var_18_int = 1; // 0x462 PushI
	var_19_bool = var_17_int == var_18_int; // 0x463 Eq
	if(var_19_bool == 0) goto Label_1130; // 0x464 JumpB
	var_20_object = Obj(); // 0x465 PushV
	var_20_object = var_1_int; // 0x466 MovT
	func_1984(var_20_object); // 0x467 NEW_2
	goto Label_1134; // 0x469 Jump
	
Label_1134:
	return 0; // 0x46e Return
	
Label_1130:
	var_25_int = 0; // 0x46a PushV
	var_25_int = var_17_int; // 0x46b Mov
	func_1279(var_16_bool, var_17_int, var_25_int); // 0x46c NEW_2
}


task_3_event_1(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	var_18_bool = 0; // 0x47d PushV
	var_18_bool = 0; // 0x47e MovB
	var_19_bool = var_1_int == var_17_object; // 0x47f Eq
	if(var_19_bool == 0) goto Label_1156; // 0x480 JumpB
	var_20_bool = var_2_bool == 0; // 0x481 Not
	if(var_20_bool == 0) goto Label_1156; // 0x482 JumpB
	var_18_bool = 1; // 0x483 MovB
	
Label_1156:
	if(var_18_bool == 0) goto Label_1162; // 0x484 JumpB
	var_2_bool = 1; // 0x485 TMovB
	var_21_object = Obj(); // 0x486 PushV
	var_21_object = var_17_object; // 0x487 Mov
	func_1835(var_21_object); // 0x488 NEW_2
	
Label_1162:
	return 0; // 0x48a Return
}


task_3_event_2(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	var_18_bool = 0; // 0x48c PushV
	var_18_bool = 0; // 0x48d MovB
	var_19_bool = var_1_int == var_17_object; // 0x48e Eq
	if(var_19_bool == 0) goto Label_1171; // 0x48f JumpB
	var_20_bool = var_2_bool; // 0x490 PushT
	if(var_20_bool == 0) goto Label_1171; // 0x491 JumpB
	var_18_bool = 1; // 0x492 MovB
	
Label_1171:
	if(var_18_bool == 0) goto Label_1176; // 0x493 JumpB
	var_2_bool = 0; // 0x494 TMovB
	var_21_string = "head"; // 0x495 PushS
	UnlookAsync(var_21_string); // 0x496 Func
	
Label_1176:
	return 0; // 0x498 Return
}


task_3_event_10(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	RequestClearPath(var_17_object); // 0x512 Func
	return 0; // 0x514 Return
}


task_3_event_41(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	func_1135(var_17_object); // 0x51e NEW_2
	var_22_object = Obj(); // 0x520 PushV
	var_22_object = var_17_object; // 0x521 Mov
	func_2098(); // 0x522 NEW_2
	return 0; // 0x524 Return
}


task_4_event_0(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	var_18_bool = 0; var_19_bool = 0; // 0x545 PushV
	IsOverrideActive(var_19_bool); // 0x546 Func
	var_20_bool = var_19_bool == 0; // 0x548 Not
	if(var_20_bool == 0) goto Label_1358; // 0x549 JumpB
	var_21_object = Obj(); // 0x54a PushV
	var_21_object = var_17_object; // 0x54b Mov
	func_2034(var_21_object); // 0x54c NEW_2
	
Label_1358:
	return 2; // 0x54e Return
}


task_4_event_22(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_int, var_19_float, var_20_float)
{
	return 0; // 0x5c5 Return
}


task_4_event_16(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_string)
{
	return 0; // 0x5c7 Return
}


task_4_event_41(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	return 0; // 0x5c9 Return
}


event_22(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_int, var_19_float, var_20_float)
{
	var_21_object = Obj(); var_22_int = 0; var_23_float = 0; // 0x81f PushV
	var_21_object = var_17_object; // 0x820 Mov
	var_22_int = var_18_int; // 0x821 Mov
	var_23_float = var_19_float; // 0x822 Mov
	func_1737(var_21_object, var_22_int, var_23_float); // 0x823 NEW_2
	return 0; // 0x825 Return
}


event_43(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_int, var_19_float, var_20_float, var_21_cvector, var_22_cvector)
{
	var_23_object = Obj(); var_24_int = 0; var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); // 0x827 PushV
	var_23_object = var_17_object; // 0x828 Mov
	var_24_int = var_18_int; // 0x829 Mov
	var_25_float = var_19_float; // 0x82a Mov
	var_26_cvector = var_21_cvector; // 0x82b Mov
	var_27_cvector = var_22_cvector; // 0x82c Mov
	func_1805(var_25_float, var_26_cvector, var_27_cvector); // 0x82d NEW_2
	return 0; // 0x82f Return
}


event_16(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_string)
{
	return 0; // 0x831 Return
}


event_41(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	var_18_object = Obj(); // 0x833 PushV
	var_18_object = var_17_object; // 0x834 Mov
	func_2057(var_18_object); // 0x835 NEW_2
	return 0; // 0x837 Return
}


main(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	
Label_0:
	var_17_int = 3; // 0x0 PushI
	Sleep(var_17_int); // 0x1 Func
	var_18_float = 0; var_19_float = 0; // 0x3 PushV
	var_18_float = 300; // 0x4 MovI
	var_19_float = 100; // 0x5 MovI
	func_28(var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_18_float, var_19_float); // 0x6 NEW_2
	goto Label_0; // 0x8 Jump
}


func_2057(var_18_object)
{
	var_19_bool = 0; var_20_object = Obj(); // 0x80a PushV
	var_20_object = var_18_object; // 0x80b Mov
	func_1516(var_19_bool, var_20_object); // 0x80c NEW_2
	if(var_19_bool == 0) goto Label_2068; // 0x80e JumpB
	var_23_bool = 0; var_24_object = Obj(); var_25_float = 0; // 0x80f PushV
	var_24_object = var_18_object; // 0x810 Mov
	var_25_float = -0.1; // 0x811 MovF
	func_1929(var_23_bool, var_24_object, var_25_float); // 0x812 NEW_2
	
Label_2068:
	func_2047(); // 0x815 NEW_2
	var_66_object = Obj(); // 0x817 PushV
	var_66_object = var_18_object; // 0x818 Mov
	TaskCall(4); // 0x819 TaskCall
	func_1328(var_66_object); // 0x81a NEW_2
	TaskReturn(); // 0x81b TaskReturn
	return 0; // 0x81d Return
}


func_1555(var_407_float, var_408_object, var_409_float, var_410_int)
{
	var_414_int = 0; var_415_string = ""; var_416_int = 0; var_417_float = 0; var_418_float = 0; var_419_float = 0; var_420_int = 0; var_421_string = ""; var_422_int = 0; var_423_float = 0; var_424_float = 0; var_425_float = 0; // 0x613 PushV
	var_426_bool = 0; var_427_object = Obj(); var_428_string = ""; // 0x614 PushV
	var_427_object = var_408_object; // 0x615 Mov
	var_428_string = "health"; // 0x616 MovS
	func_1521(var_426_bool, var_427_object, var_428_string); // 0x617 NEW_2
	var_429_bool = var_426_bool == 0; // 0x619 Not
	if(var_429_bool == 0) goto Label_1565; // 0x61a JumpB
	var_407_float = 0.0; // 0x61b MovF
	return 12; // 0x61c Return
	
Label_1565:
	var_430_bool = 0; var_431_object = Obj(); var_432_string = ""; // 0x61d PushV
	var_431_object = var_408_object; // 0x61e Mov
	var_432_string = "armor"; // 0x61f MovS
	func_1521(var_430_bool, var_431_object, var_432_string); // 0x620 NEW_2
	var_433_bool = var_430_bool == 0; // 0x622 Not
	if(var_433_bool == 0) goto Label_1574; // 0x623 JumpB
	var_420_int = 0; // 0x624 MovI
	goto Label_1577; // 0x625 Jump
	
Label_1577:
	var_434_string = "armor_"; // 0x629 PushS
	var_435_string = ""; var_436_int = 0; // 0x62a PushV
	var_436_int = var_410_int; // 0x62b Mov
	func_1482(var_435_string, var_436_int); // 0x62c NEW_2
	var_421_string = var_434_string + var_435_string; // 0x62e Add2
	var_441_bool = 0; var_442_object = Obj(); var_443_string = ""; // 0x62f PushV
	var_442_object = var_408_object; // 0x630 Mov
	var_443_string = var_421_string; // 0x631 Mov
	func_1521(var_441_bool, var_442_object, var_443_string); // 0x632 NEW_2
	var_444_bool = var_441_bool == 0; // 0x634 Not
	if(var_444_bool == 0) goto Label_1592; // 0x635 JumpB
	var_422_int = 0; // 0x636 MovI
	goto Label_1594; // 0x637 Jump
	
Label_1594:
	var_445_float = 0; var_446_float = 0; var_447_float = 0; // 0x63a PushV
	var_448_int = var_420_int + var_422_int; // 0x63b Add
	var_449_float = 100.0; // 0x63c PushF
	var_446_float = var_448_int / var_448_int; // 0x63d Div2
	var_447_float = 1; // 0x63e MovI
	func_1903(var_445_float, var_446_float, var_447_float); // 0x63f NEW_2
	var_423_float = var_445_float; // 0x640 Mov
	var_451_string = "health"; // 0x642 PushS
	GetProperty(var_451_string, var_424_float); // 0x643 ObjFunc
	var_452_int = 1; // 0x645 PushI
	var_453_int = var_452_int - var_423_float; // 0x646 Sub
	var_425_float = var_409_float * var_453_int; // 0x647 Mult2
	var_454_string = "health"; // 0x648 PushS
	var_455_float = 0; var_456_float = 0; var_457_float = 0; var_458_float = 0; // 0x649 PushV
	var_456_float = var_424_float - var_425_float; // 0x64a Sub2
	var_457_float = 0; // 0x64b MovI
	var_458_float = 1; // 0x64c MovI
	func_1910(var_455_float, var_456_float, var_457_float, var_458_float); // 0x64d NEW_2
	SetProperty(var_454_string, var_455_float); // 0x64f ObjFunc
	var_461_bool = 0; var_462_object = Obj(); // 0x651 PushV
	var_462_object = var_408_object; // 0x652 Mov
	func_1516(var_461_bool, var_462_object); // 0x653 NEW_2
	if(var_461_bool == 0) goto Label_1626; // 0x655 JumpB
	var_463_float = 0; // 0x656 PushV
	var_463_float = -var_425_float; // 0x657 Neg2
	func_1964(var_463_float); // 0x658 NEW_2
	
Label_1626:
	var_407_float = var_425_float; // 0x65a Mov
	return 12; // 0x65b Return
	
Label_1592:
	GetProperty(var_421_string, var_422_int); // 0x638 ObjFunc
	
Label_1574:
	var_467_string = "armor"; // 0x626 PushS
	GetProperty(var_467_string, var_420_int); // 0x627 ObjFunc
}


func_28(var_0_int, var_1_int, var_2_bool, var_3_bool, var_16_bool, var_18_float, var_19_float)
{
	var_20_bool = 0; // 0x1d PushV
	func_1830(var_20_bool); // 0x1e NEW_2
	var_23_bool = var_20_bool == 0; // 0x20 Not
	if(var_23_bool == 0) goto Label_35; // 0x21 JumpB
	return 0; // 0x22 Return
	
Label_35:
	var_24_string = "player"; // 0x23 PushS
	FindActor(var_16_bool, var_24_string); // 0x24 Func
	var_2_bool = 0; // 0x26 TMovB
	var_3_bool = 0; // 0x27 TMovB
	var_0_int = var_18_float; // 0x28 TMov
	var_1_int = var_19_float; // 0x29 TMov
	var_25_int = 10; // 0x2a PushI
	var_26_float = 1.0; // 0x2b PushF
	SetTimer(var_25_int, var_26_float); // 0x2c Func
	func_93(); // 0x2f NEW_2
	var_78_bool = var_3_bool == 0; // 0x31 Not
	if(var_78_bool == 0) goto Label_54; // 0x32 JumpB
	var_79_int = 10; // 0x33 PushI
	KillTimer(var_79_int); // 0x34 Func
	
Label_54:
	return 0; // 0x36 Return
}


func_1052(var_0_int)
{
	var_131_object = Obj(); // 0x41c PushV
	var_131_object = var_0_int; // 0x41d MovT
	func_1984(var_131_object); // 0x41e NEW_2
	return 0; // 0x420 Return
}


func_1057(var_468_int)
{
	var_468_int = 0; // 0x421 MovI
	return 0; // 0x422 Return
}


func_1059()
{
	var_264_string = ""; // 0x423 PushV
	var_264_string = "attack_stay"; // 0x424 MovS
	func_1846(var_264_string); // 0x425 NEW_2
	return 0; // 0x427 Return
}


func_1064()
{
	return 0; // 0x429 Return
}


func_1066(var_493_bool)
{
	var_493_bool = 1; // 0x42a MovB
	return 0; // 0x42b Return
}


func_1068(var_389_int)
{
	var_389_int = 1; // 0x42c MovI
	return 0; // 0x42d Return
}


func_1070(var_384_float)
{
	var_384_float = 0.5; // 0x42e MovF
	return 0; // 0x42f Return
}


func_1072(var_2_bool, var_138_bool, var_139_object, var_140_float, var_141_float, var_142_bool, var_143_bool)
{
	var_147_bool = 0; var_148_bool = 0; var_149_bool = 0; var_150_bool = 0; // 0x430 PushV
	var_151_object = Obj(); // 0x431 PushV
	var_151_object = var_139_object; // 0x432 Mov
	func_1984(var_151_object); // 0x433 NEW_2
	var_152_int = 1; // 0x435 PushI
	var_153_int = 5; // 0x436 PushI
	SetTimer(var_152_int, var_153_int); // 0x437 Func
	CanSee(var_149_bool, var_139_object); // 0x439 Func
	var_154_bool = var_149_bool; // 0x43b Push
	if(var_154_bool == 0) goto Label_1091; // 0x43c JumpB
	var_2_bool = 1; // 0x43d TMovB
	var_155_object = Obj(); // 0x43e PushV
	var_155_object = var_139_object; // 0x43f Mov
	func_1835(var_155_object); // 0x440 NEW_2
	goto Label_1092; // 0x442 Jump
	
Label_1092:
	var_162_bool = 0; var_163_object = Obj(); // 0x444 PushV
	var_163_object = var_139_object; // 0x445 Mov
	func_1516(var_162_bool, var_163_object); // 0x446 NEW_2
	if(var_162_bool == 0) goto Label_1102; // 0x448 JumpB
	var_166_object = Obj(); // 0x449 PushV
	func_1887(var_166_object); // 0x44a NEW_2
	SendPlayerEnemy(var_139_object, var_166_object); // 0x44c Func
	
Label_1102:
	var_167_bool = 0; var_168_object = Obj(); var_169_float = 0; var_170_float = 0; var_171_bool = 0; var_172_bool = 0; // 0x44e PushV
	var_168_object = var_139_object; // 0x44f Mov
	var_169_float = var_140_float; // 0x450 Mov
	var_170_float = var_141_float; // 0x451 Mov
	var_171_bool = var_142_bool; // 0x452 Mov
	var_172_bool = var_143_bool; // 0x453 Mov
	func_1177(var_149_bool, var_150_bool, var_167_bool, var_168_object, var_169_float, var_170_float, var_171_bool, var_172_bool); // 0x454 NEW_2
	var_150_bool = var_167_bool; // 0x455 Mov
	var_218_bool = var_2_bool; // 0x457 PushT
	if(var_218_bool == 0) goto Label_1116; // 0x458 JumpB
	var_219_string = "head"; // 0x459 PushS
	UnlookAsync(var_219_string); // 0x45a Func
	
Label_1116:
	var_220_int = 1; // 0x45c PushI
	KillTimer(var_220_int); // 0x45d Func
	var_138_bool = var_150_bool; // 0x45f Mov
	return 4; // 0x460 Return
	
Label_1091:
	var_2_bool = 0; // 0x443 TMovB
}


func_55(var_0_int, var_1_int, var_4_object, var_20_bool)
{
	var_21_float = 0; var_22_float = 0; // 0x37 PushV
	var_23_bool = var_4_object == 0; // 0x38 NullEq
	if(var_23_bool == 0) goto Label_60; // 0x39 JumpB
	var_20_bool = 0; // 0x3a MovB
	return 2; // 0x3b Return
	
Label_60:
	var_24_float = 0; var_25_object = Obj(); // 0x3c PushV
	var_25_object = var_4_object; // 0x3d MovT
	func_1508(var_25_object); // 0x3e NEW_2
	var_22_float = sqrt(var_24_float); // 0x40 Sqrt2
	var_32_bool = var_2_bool; // 0x41 PushT
	if(var_32_bool == 0) goto Label_68; // 0x42 JumpB
	var_22_float = var_22_float - var_1_int; // 0x43 Sub2
	
Label_68:
	var_20_bool = var_22_float < var_0_int; // 0x44 LT2
	return 2; // 0x45 Return
}


func_2104(var_18_bool, var_19_object)
{
	var_20_bool = 0; var_21_object = Obj(); // 0x839 PushV
	var_21_object = var_19_object; // 0x83a Mov
	func_1669(var_20_bool, var_21_object); // 0x83b NEW_2
	var_18_bool = var_20_bool; // 0x83c Mov
	return 0; // 0x83e Return
}


func_2111(var_55_object)
{
	var_56_object = Obj(); var_57_bool = 0; // 0x840 PushV
	var_56_object = var_55_object; // 0x841 Mov
	var_57_bool = 1; // 0x842 MovB
	TaskCall(2); // 0x843 TaskCall
	func_384(var_56_object, var_57_bool); // 0x844 NEW_2
	TaskReturn(); // 0x845 TaskReturn
	return 0; // 0x847 Return
}


func_1628(var_45_bool)
{
	var_47_bool = 0; var_48_bool = 0; // 0x65c PushV
	IsDead(var_48_bool); // 0x65d ObjFunc
	var_45_bool = var_48_bool; // 0x65f Mov
	return 2; // 0x660 Return
}


func_93()
{
	var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0; var_34_int = 0; var_35_int = 0; var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_float = 0; var_40_bool = 0; // 0x5d PushV
	WaitForAnimEnd(); // 0x5e Func
	var_41_bool = 0; // 0x60 PushV
	func_1830(var_41_bool); // 0x61 NEW_2
	var_42_bool = var_41_bool == 0; // 0x63 Not
	if(var_42_bool == 0) goto Label_102; // 0x64 JumpB
	return 14; // 0x65 Return
	
Label_102:
	var_43_int = 0; // 0x66 PushV
	func_2011(var_43_int); // 0x67 NEW_2
	var_34_int = var_43_int; // 0x68 Mov
	var_35_int = 0; // 0x6a MovI
	
Label_107:
	var_56_bool = 0; // 0x6b PushV
	var_56_bool = 0; // 0x6c MovB
	var_57_int = 5; // 0x6d PushI
	var_58_bool = var_35_int < var_57_int; // 0x6e LT
	if(var_58_bool == 0) goto Label_117; // 0x6f JumpB
	var_59_bool = 0; // 0x70 PushV
	func_1830(var_59_bool); // 0x71 NEW_2
	if(var_59_bool == 0) goto Label_117; // 0x73 JumpB
	var_56_bool = 1; // 0x74 MovB
	
Label_117:
	if(var_56_bool == 0) goto Label_169; // 0x75 JumpB
	var_60_int = 3; // 0x76 PushI
	irand(var_36_int, var_60_int); // 0x77 Func
	var_61_int = 0; // 0x79 PushI
	var_62_bool = var_36_int == var_61_int; // 0x7a Eq
	if(var_62_bool == 0) goto Label_141; // 0x7b JumpB
	var_63_int = var_34_int; // 0x7c Push
	if(var_63_int == 0) goto Label_140; // 0x7d JumpB
	irand(var_37_int, var_34_int); // 0x7e Func
	var_64_string = "all"; // 0x80 PushS
	var_65_string = ""; var_66_int = 0; // 0x81 PushV
	var_66_int = var_37_int; // 0x82 Mov
	func_2004(var_65_string, var_66_int); // 0x83 NEW_2
	PlayAnimation(var_64_string, var_65_string); // 0x85 Func
	WaitForAnimEnd(var_38_bool); // 0x87 Func
	var_67_bool = var_38_bool == 0; // 0x89 Not
	if(var_67_bool == 0) goto Label_140; // 0x8a JumpB
	goto Label_169; // 0x8b Jump
	
Label_169:
	ResetAAS(); // 0xa9 Func
	return 14; // 0xab Return
	
Label_140:
	goto Label_158; // 0x8c Jump
	
Label_158:
	var_68_bool = 0; // 0x9e PushV
	func_172(var_68_bool); // 0x9f NEW_2
	var_69_bool = var_68_bool == 0; // 0xa1 Not
	if(var_69_bool == 0) goto Label_164; // 0xa2 JumpB
	goto Label_169; // 0xa3 Jump
	
Label_164:
	ResetAAS(); // 0xa4 Func
	var_70_int = 1; // 0xa6 PushI
	var_35_int = var_35_int + var_70_int; // 0xa7 Add2
	goto Label_107; // 0xa8 Jump
	
Label_141:
	var_71_int = 1; // 0x8d PushI
	var_72_bool = var_36_int == var_71_int; // 0x8e Eq
	if(var_72_bool == 0) goto Label_155; // 0x8f JumpB
	var_73_int = 4; // 0x90 PushI
	rand(var_39_float, var_73_int); // 0x91 Func
	var_74_int = 1; // 0x93 PushI
	var_75_int = var_39_float + var_74_int; // 0x94 Add
	Sleep(var_75_int, var_40_bool); // 0x95 Func
	var_76_bool = var_40_bool == 0; // 0x97 Not
	if(var_76_bool == 0) goto Label_154; // 0x98 JumpB
	goto Label_169; // 0x99 Jump
	
Label_154:
	goto Label_158; // 0x9a Jump
	
Label_155:
	var_77_int = var_35_int; // 0x9b Push
	if(var_77_int == 0) goto Label_158; // 0x9c JumpB
	goto Label_169; // 0x9d Jump
}


func_1633(var_34_bool, var_35_object)
{
	var_36_object = Obj(); var_37_object = Obj(); var_38_object = Obj(); var_39_object = Obj(); // 0x661 PushV
	var_40_bool = var_35_object == 0; // 0x662 NullEq
	if(var_40_bool == 0) goto Label_1638; // 0x663 JumpB
	var_34_bool = 0; // 0x664 MovB
	return 4; // 0x665 Return
	
Label_1638:
	var_41_bool = 0; // 0x666 PushV
	var_41_bool = 0; // 0x667 MovB
	var_42_string = "IsDead"; // 0x668 PushS
	var_43_int = 1; // 0x669 PushI
	var_44_bool = IsFuncExist(var_35_object, var_42_string, var_43_int); // 0x66a FuncExist
	if(var_44_bool == 0) goto Label_1650; // 0x66b JumpB
	var_45_bool = 0; var_46_object = Obj(); // 0x66c PushV
	var_46_object = var_35_object; // 0x66d Mov
	func_1628(var_46_object); // 0x66e NEW_2
	if(var_45_bool == 0) goto Label_1650; // 0x670 JumpB
	var_41_bool = 1; // 0x671 MovB
	
Label_1650:
	if(var_41_bool == 0) goto Label_1653; // 0x672 JumpB
	var_34_bool = 0; // 0x673 MovB
	return 4; // 0x674 Return
	
Label_1653:
	GetScene(var_38_object); // 0x675 Func
	var_49_bool = var_38_object == 0; // 0x677 NullEq
	if(var_49_bool == 0) goto Label_1659; // 0x678 JumpB
	var_34_bool = 0; // 0x679 MovB
	return 4; // 0x67a Return
	
Label_1659:
	GetScene(var_39_object); // 0x67b ObjFunc
	var_50_bool = var_38_object != var_39_object; // 0x67d Neq
	if(var_50_bool == 0) goto Label_1665; // 0x67e JumpB
	var_34_bool = 0; // 0x67f MovB
	return 4; // 0x680 Return
	
Label_1665:
	var_34_bool = 1; // 0x681 MovB
	return 4; // 0x682 Return
}


func_1135(var_2_bool)
{
	var_18_int = 1; // 0x46f PushI
	KillTimer(var_18_int); // 0x470 Func
	var_19_bool = var_2_bool; // 0x472 PushT
	if(var_19_bool == 0) goto Label_1144; // 0x473 JumpB
	var_2_bool = 0; // 0x474 TMovB
	var_20_string = "head"; // 0x475 PushS
	UnlookAsync(var_20_string); // 0x476 Func
	
Label_1144:
	func_1301(var_17_object); // 0x479 NEW_2
	return 0; // 0x47b Return
}


func_639(var_1_int, var_2_bool, var_4_object)
{
	var_94_bool = 0; var_95_bool = 0; var_96_cvector = CVector(0,0,0); var_97_bool = 0; var_98_bool = 0; var_99_cvector = CVector(0,0,0); // 0x27f PushV
	var_1_int = 0; // 0x280 TMovI
	
Label_641:
	var_100_string = "all"; // 0x281 PushS
	var_101_string = "attack_begin"; // 0x282 PushS
	var_102_int = 1; // 0x283 PushI
	var_103_int = var_1_int + var_102_int; // 0x284 Add
	var_104_int = var_101_string + var_103_int; // 0x285 Add
	HasAnimation(var_97_bool, var_100_string, var_104_int); // 0x286 Func
	var_105_bool = var_97_bool == 0; // 0x288 Not
	if(var_105_bool == 0) goto Label_651; // 0x289 JumpB
	goto Label_654; // 0x28a Jump
	
Label_654:
	var_2_bool = 0; // 0x28e TMovI
	
Label_655:
	var_106_string = "attack"; // 0x28f PushS
	var_107_int = 1; // 0x290 PushI
	var_108_int = var_2_bool + var_107_int; // 0x291 Add
	var_109_int = var_106_string + var_108_int; // 0x292 Add
	IsExisting3DSound(var_98_bool, var_109_int); // 0x293 Func
	var_110_bool = var_98_bool == 0; // 0x295 Not
	if(var_110_bool == 0) goto Label_664; // 0x296 JumpB
	goto Label_667; // 0x297 Jump
	
Label_667:
	var_111_string = "all"; // 0x29b PushS
	var_112_string = "bjump"; // 0x29c PushS
	GetAnimationOffset(var_99_cvector, var_111_string, var_112_string); // 0x29d Func
	var_113_float = GetByIndex(var_99_cvector, 2); // 0x29f PushE
	var_4_object = -var_113_float; // 0x2a0 Neg2
	return 6; // 0x2a1 Return
	
Label_664:
	var_114_int = 1; // 0x298 PushI
	var_2_bool = var_2_bool + var_114_int; // 0x299 Add2
	goto Label_655; // 0x29a Jump
	
Label_651:
	var_115_int = 1; // 0x28b PushI
	var_1_int = var_1_int + var_115_int; // 0x28c Add2
	goto Label_641; // 0x28d Jump
}


func_1669(var_30_bool, var_31_object)
{
	var_32_int = 0; var_33_int = 0; // 0x685 PushV
	var_34_bool = 0; var_35_object = Obj(); // 0x686 PushV
	var_35_object = var_31_object; // 0x687 Mov
	func_1633(var_34_bool, var_35_object); // 0x688 NEW_2
	var_51_bool = var_34_bool == 0; // 0x68a Not
	if(var_51_bool == 0) goto Label_1678; // 0x68b JumpB
	var_30_bool = 0; // 0x68c MovB
	return 2; // 0x68d Return
	
Label_1678:
	var_52_bool = 0; var_53_object = Obj(); var_54_string = ""; // 0x68e PushV
	var_53_object = var_31_object; // 0x68f Mov
	var_54_string = "noaccess"; // 0x690 MovS
	func_1521(var_52_bool, var_53_object, var_54_string); // 0x691 NEW_2
	var_61_bool = var_52_bool == 0; // 0x693 Not
	if(var_61_bool == 0) goto Label_1687; // 0x694 JumpB
	var_30_bool = 1; // 0x695 MovB
	return 2; // 0x696 Return
	
Label_1687:
	var_62_string = "noaccess"; // 0x697 PushS
	GetProperty(var_62_string, var_33_int); // 0x698 ObjFunc
	var_63_int = 0; // 0x69a PushI
	var_30_bool = var_33_int == var_63_int; // 0x69b Eq2
	return 2; // 0x69c Return
}


func_1177(var_0_int, var_1_int, var_167_bool, var_168_object, var_169_float, var_170_float, var_171_bool, var_172_bool)
{
	var_173_bool = 0; var_174_bool = 0; var_175_object = Obj(); var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); var_178_cvector = CVector(0,0,0); var_179_float = 0; var_180_object = Obj(); var_181_bool = 0; var_182_bool = 0; var_183_object = Obj(); var_184_cvector = CVector(0,0,0); var_185_cvector = CVector(0,0,0); var_186_cvector = CVector(0,0,0); var_187_float = 0; var_188_object = Obj(); // 0x499 PushV
	var_0_int = 0; // 0x49a TMovB
	var_1_int = var_168_object; // 0x49b TMov
	var_182_bool = var_172_bool; // 0x49c Mov
	
Label_1181:
	var_189_bool = 0; var_190_object = Obj(); // 0x49d PushV
	var_190_object = var_168_object; // 0x49e Mov
	func_1317(var_189_bool, var_190_object); // 0x49f NEW_2
	var_193_bool = var_189_bool == 0; // 0x4a1 Not
	if(var_193_bool == 0) goto Label_1189; // 0x4a2 JumpB
	var_167_bool = 0; // 0x4a3 MovB
	return 16; // 0x4a4 Return
	
Label_1189:
	GetPosition(var_184_cvector); // 0x4a5 ObjFunc
	GetPosition(var_185_cvector); // 0x4a7 Func
	var_186_cvector = var_184_cvector - var_185_cvector; // 0x4a9 Sub2
	var_187_float = var_186_cvector | var_186_cvector; // 0x4aa Or2
	var_194_bool = 0; // 0x4ab PushV
	var_194_bool = 0; // 0x4ac MovB
	var_195_int = 0; // 0x4ad PushI
	var_196_bool = var_170_float > var_195_int; // 0x4ae GT
	if(var_196_bool == 0) goto Label_1204; // 0x4af JumpB
	var_197_float = var_170_float * var_170_float; // 0x4b0 Mult
	var_198_bool = var_187_float > var_197_float; // 0x4b1 GT
	if(var_198_bool == 0) goto Label_1204; // 0x4b2 JumpB
	var_194_bool = 1; // 0x4b3 MovB
	
Label_1204:
	if(var_194_bool == 0) goto Label_1209; // 0x4b4 JumpB
	Stop(); // 0x4b5 Func
	var_167_bool = 0; // 0x4b7 MovB
	return 16; // 0x4b8 Return
	
Label_1209:
	var_199_float = var_169_float * var_169_float; // 0x4b9 Mult
	var_200_bool = var_187_float > var_199_float; // 0x4ba GT
	if(var_200_bool == 0) goto Label_1271; // 0x4bb JumpB
	GetPFPosition(var_184_cvector); // 0x4bc ObjFunc
	FindPathTo(var_188_object, var_184_cvector); // 0x4be Func
	var_201_bool = var_188_object != 0; // 0x4c0 NullNeq
	if(var_201_bool == 0) goto Label_1220; // 0x4c1 JumpB
	var_183_object = var_188_object; // 0x4c2 Mov
	var_188_object = 0; // 0x4c3 SetNull
	
Label_1220:
	var_202_bool = var_183_object != 0; // 0x4c4 NullNeq
	if(var_202_bool == 0) goto Label_1253; // 0x4c5 JumpB
	var_203_bool = var_182_bool; // 0x4c6 Push
	if(var_203_bool == 0) goto Label_1230; // 0x4c7 JumpB
	var_182_bool = 0; // 0x4c8 MovB
	RotatePath(var_183_object, var_181_bool); // 0x4c9 Func
	var_204_bool = var_181_bool == 0; // 0x4cb Not
	if(var_204_bool == 0) goto Label_1230; // 0x4cc JumpB
	goto Label_1277; // 0x4cd Jump
	
Label_1277:
	var_167_bool = !var_0_int; // 0x4fd Not2
	return 16; // 0x4fe Return
	
Label_1230:
	var_205_int = 0; // 0x4ce PushI
	var_206_float = 0.3; // 0x4cf PushF
	SetTimer(var_205_int, var_206_float); // 0x4d0 Func
	var_207_string = ""; // 0x4d2 PushV
	func_1324(var_207_string); // 0x4d3 NEW_2
	var_208_string = ""; // 0x4d5 PushV
	func_1326(var_208_string); // 0x4d6 NEW_2
	FollowPath(var_183_object, var_171_bool, var_181_bool, var_207_string, var_208_string); // 0x4d8 Func
	var_209_bool = var_181_bool == 0; // 0x4da Not
	if(var_209_bool == 0) goto Label_1251; // 0x4db JumpB
	var_210_int = var_0_int; // 0x4dc PushT
	if(var_210_int == 0) goto Label_1249; // 0x4dd JumpB
	var_183_object = 0; // 0x4de SetNull
	goto Label_1277; // 0x4df Jump
	
Label_1249:
	goto Label_1276; // 0x4e1 Jump
	
Label_1276:
	goto Label_1181; // 0x4fc Jump
	
Label_1251:
	var_183_object = 0; // 0x4e3 SetNull
	goto Label_1269; // 0x4e4 Jump
	
Label_1269:
	var_188_object = 0; // 0x4f5 SetNull
	goto Label_1275; // 0x4f6 Jump
	
Label_1275:
	var_183_object = 0; // 0x4fb SetNull
	
Label_1253:
	var_211_int = 0; // 0x4e5 PushI
	KillTimer(var_211_int); // 0x4e6 Func
	var_212_float = 0.5; // 0x4e8 PushF
	Sleep(var_212_float, var_181_bool); // 0x4e9 Func
	var_213_bool = var_181_bool == 0; // 0x4eb Not
	if(var_213_bool == 0) goto Label_1265; // 0x4ec JumpB
	var_214_int = var_0_int; // 0x4ed PushT
	if(var_214_int == 0) goto Label_1265; // 0x4ee JumpB
	var_183_object = 0; // 0x4ef SetNull
	goto Label_1277; // 0x4f0 Jump
	
Label_1265:
	var_215_int = 0; // 0x4f1 PushI
	var_216_float = 0.3; // 0x4f2 PushF
	SetTimer(var_215_int, var_216_float); // 0x4f3 Func
	
Label_1271:
	var_217_int = 0; // 0x4f7 PushI
	KillTimer(var_217_int); // 0x4f8 Func
	goto Label_1277; // 0x4fa Jump
}


func_1693(var_34_object)
{
	var_35_bool = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = ""; var_42_bool = 0; var_43_int = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_string = ""; // 0x69d PushV
	var_49_bool = var_34_object == 0; // 0x69e NullEq
	if(var_49_bool == 0) goto Label_1697; // 0x69f JumpB
	return 14; // 0x6a0 Return
	
Label_1697:
	IsDead(var_42_bool); // 0x6a1 Func
	var_50_bool = var_42_bool; // 0x6a3 Push
	if(var_50_bool == 0) goto Label_1702; // 0x6a4 JumpB
	return 14; // 0x6a5 Return
	
Label_1702:
	GetSecondaryAnimationType(var_43_int); // 0x6a6 Func
	var_51_int = 0; // 0x6a8 PushI
	var_52_bool = var_43_int < var_51_int; // 0x6a9 LT
	if(var_52_bool == 0) goto Label_1708; // 0x6aa JumpB
	return 14; // 0x6ab Return
	
Label_1708:
	GetPosition(var_44_cvector); // 0x6ac ObjFunc
	GetPosition(var_45_cvector); // 0x6ae Func
	GetDirection(var_46_cvector); // 0x6b0 Func
	var_47_cvector = var_45_cvector - var_44_cvector; // 0x6b2 Sub2
	var_53_float = GetByIndex(var_47_cvector, 0); // 0x6b3 PushE
	var_54_float = GetByIndex(var_46_cvector, 0); // 0x6b4 PushE
	var_55_float = var_53_float * var_54_float; // 0x6b5 Mult
	var_56_float = GetByIndex(var_47_cvector, 2); // 0x6b6 PushE
	var_57_float = GetByIndex(var_46_cvector, 2); // 0x6b7 PushE
	var_58_float = var_56_float * var_57_float; // 0x6b8 Mult
	var_59_int = var_55_float + var_58_float; // 0x6b9 Add
	var_60_int = 0; // 0x6ba PushI
	var_61_bool = var_59_int >= var_60_int; // 0x6bb GE
	if(var_61_bool == 0) goto Label_1727; // 0x6bc JumpB
	var_48_string = "fhit"; // 0x6bd MovS
	goto Label_1728; // 0x6be Jump
	
Label_1728:
	var_62_string = "hit_react"; // 0x6c0 PushS
	var_63_string = "1"; // 0x6c1 PushS
	var_64_int = var_48_string + var_63_string; // 0x6c2 Add
	var_65_string = "2"; // 0x6c3 PushS
	var_66_int = var_48_string + var_65_string; // 0x6c4 Add
	var_67_int = -10; // 0x6c5 PushI
	FadeSecondaryAnimation(var_62_string, var_64_int, var_66_int, var_67_int); // 0x6c6 Func
	return 14; // 0x6c8 Return
	
Label_1727:
	var_48_string = "bhit"; // 0x6bf MovS
}


func_674(var_0_int, var_393_float, var_394_int)
{
	var_395_object = Obj(); var_396_float = 0; var_397_float = 0; var_398_object = Obj(); var_399_float = 0; var_400_float = 0; // 0x2a2 PushV
	var_401_float = 0.9; // 0x2a3 PushF
	var_402_float = var_393_float * var_401_float; // 0x2a4 Mult
	GetVictim(var_402_float, var_398_object); // 0x2a5 Func
	ReportAttack(var_0_int); // 0x2a7 Func
	var_403_bool = var_398_object == var_0_int; // 0x2a9 Eq
	if(var_403_bool == 0) goto Label_711; // 0x2aa JumpB
	var_404_float = 0; var_405_object = Obj(); var_406_int = 0; // 0x2ab PushV
	var_405_object = var_398_object; // 0x2ac Mov
	var_406_int = var_394_int; // 0x2ad Mov
	func_404(var_406_int); // 0x2ae NEW_2
	var_399_float = var_404_float; // 0x2af Mov
	var_407_float = 0; var_408_object = Obj(); var_409_float = 0; var_410_int = 0; // 0x2b1 PushV
	var_408_object = var_398_object; // 0x2b2 Mov
	var_409_float = var_399_float; // 0x2b3 Mov
	var_411_int = 0; var_412_object = Obj(); var_413_int = 0; // 0x2b4 PushV
	var_412_object = var_398_object; // 0x2b5 Mov
	var_413_int = var_394_int; // 0x2b6 Mov
	func_407(var_413_int); // 0x2b7 NEW_2
	var_410_int = var_411_int; // 0x2b8 Mov
	func_1555(var_407_float, var_408_object, var_409_float, var_410_int); // 0x2ba NEW_2
	var_400_float = var_407_float; // 0x2bb Mov
	var_468_int = 0; // 0x2bd PushV
	func_1057(var_468_int); // 0x2be NEW_2
	ReportHit(var_0_int, var_468_int, var_400_float, var_399_float); // 0x2c0 Func
	var_469_object = Obj(); var_470_float = 0; // 0x2c2 PushV
	var_469_object = var_398_object; // 0x2c3 Mov
	var_470_float = var_400_float; // 0x2c4 Mov
	func_1064(); // 0x2c5 NEW_2
	
Label_711:
	return 6; // 0x2c7 Return
}


func_172(var_68_bool)
{
	var_68_bool = 1; // 0xac MovB
	return 0; // 0xad Return
}


func_174(var_24_object)
{
	func_2047(); // 0xb0 NEW_2
	var_33_object = Obj(); // 0xb2 PushV
	var_33_object = var_24_object; // 0xb3 Mov
	func_227(var_26_cvector, var_27_bool, var_24_object, var_33_object); // 0xb4 NEW_2
	return 0; // 0xb6 Return
}


func_197(var_31_cvector, var_32_float)
{
	var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_float = 0; // 0xc5 PushV
	GetPosition(var_39_cvector); // 0xc6 Func
	GetPosition(var_40_cvector); // 0xc8 TObjFunc
	GetDirection(var_41_cvector); // 0xca Func
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0xcc PushV
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0xcd PushV
	var_48_cvector = var_39_cvector - var_40_cvector; // 0xce Sub2
	func_1893(var_47_cvector, var_48_cvector); // 0xcf NEW_2
	var_54_float = 0.75; // 0xd1 PushF
	var_55_float = var_41_cvector * var_54_float; // 0xd2 Mult
	var_46_cvector = var_47_cvector + var_55_float; // 0xd3 Add2
	func_1893(var_45_cvector, var_46_cvector); // 0xd4 NEW_2
	var_42_cvector = var_45_cvector; // 0xd5 Mov
	var_56_int = 32; // 0xd7 PushI
	var_57_float = 7000.0; // 0xd8 PushF
	FindLongestDir(var_43_cvector, var_44_float, var_42_cvector, var_32_float, var_56_int, var_57_float); // 0xd9 Func
	var_58_int = 100; // 0xdb PushI
	var_44_float = var_44_float - var_58_int; // 0xdc Sub2
	var_59_int = 0; // 0xdd PushI
	var_60_bool = var_44_float < var_59_int; // 0xde LT
	if(var_60_bool == 0) goto Label_225; // 0xdf JumpB
	var_44_float = 0; // 0xe0 MovI
	
Label_225:
	var_31_cvector = var_43_cvector * var_44_float; // 0xe1 Mult2
	return 12; // 0xe2 Return
}


func_713(var_0_int, var_356_bool, var_357_float)
{
	var_358_int = 0; var_359_bool = 0; var_360_int = 0; var_361_string = ""; var_362_int = 0; var_363_bool = 0; var_364_int = 0; var_365_string = ""; // 0x2c9 PushV
	func_1052(var_365_string); // 0x2cb NEW_2
	irand(var_362_int, var_365_string); // 0x2cd Func
	var_366_int = 1; // 0x2cf PushI
	var_362_int = var_362_int + var_366_int; // 0x2d0 Add2
	Face(var_0_int); // 0x2d1 Func
	var_367_bool = 1; // 0x2d3 PushB
	SetAttackState(var_367_bool); // 0x2d4 Func
	func_1993(); // 0x2d7 NEW_2
	var_372_string = "all"; // 0x2d9 PushS
	var_373_string = "attack_begin"; // 0x2da PushS
	var_374_int = var_373_string + var_362_int; // 0x2db Add
	PlayAnimation(var_372_string, var_374_int); // 0x2dc Func
	WaitForAnimEnd(); // 0x2de Func
	func_1020(var_364_int, var_365_string); // 0x2e1 NEW_2
	var_390_bool = 0; var_391_object = Obj(); // 0x2e3 PushV
	var_391_object = var_0_int; // 0x2e4 MovT
	func_1669(var_390_bool, var_391_object); // 0x2e5 NEW_2
	var_392_bool = var_390_bool == 0; // 0x2e7 Not
	if(var_392_bool == 0) goto Label_749; // 0x2e8 JumpB
	StopAsync(); // 0x2e9 Func
	var_356_bool = 0; // 0x2eb MovB
	return 8; // 0x2ec Return
	
Label_749:
	var_393_float = 0; var_394_int = 0; // 0x2ed PushV
	var_393_float = var_357_float; // 0x2ee Mov
	var_394_int = var_362_int; // 0x2ef Mov
	func_674(var_365_string, var_393_float, var_394_int); // 0x2f0 NEW_2
	var_471_string = "all"; // 0x2f2 PushS
	var_472_string = "attack_middle"; // 0x2f3 PushS
	var_473_int = var_472_string + var_362_int; // 0x2f4 Add
	HasAnimation(var_363_bool, var_471_string, var_473_int); // 0x2f5 Func
	var_474_bool = var_363_bool; // 0x2f7 Push
	if(var_474_bool == 0) goto Label_830; // 0x2f8 JumpB
	func_1993(); // 0x2fa NEW_2
	var_475_string = "all"; // 0x2fc PushS
	var_476_string = "attack_middle"; // 0x2fd PushS
	var_477_int = var_476_string + var_362_int; // 0x2fe Add
	PlayAnimation(var_475_string, var_477_int); // 0x2ff Func
	WaitForAnimEnd(); // 0x301 Func
	func_1052(var_365_string); // 0x304 NEW_2
	var_478_bool = 0; var_479_object = Obj(); // 0x306 PushV
	var_479_object = var_0_int; // 0x307 MovT
	func_1669(var_478_bool, var_479_object); // 0x308 NEW_2
	var_480_bool = var_478_bool == 0; // 0x30a Not
	if(var_480_bool == 0) goto Label_784; // 0x30b JumpB
	StopAsync(); // 0x30c Func
	var_356_bool = 0; // 0x30e MovB
	return 8; // 0x30f Return
	
Label_784:
	var_481_float = 0; var_482_int = 0; // 0x310 PushV
	var_481_float = var_357_float; // 0x311 Mov
	var_482_int = var_362_int; // 0x312 Mov
	func_674(var_365_string, var_481_float, var_482_int); // 0x313 NEW_2
	var_364_int = 1; // 0x315 MovI
	
Label_790:
	var_483_string = "attack_middle"; // 0x316 PushS
	var_484_int = var_483_string + var_362_int; // 0x317 Add
	var_485_string = "_"; // 0x318 PushS
	var_486_int = var_484_int + var_485_string; // 0x319 Add
	var_365_string = var_486_int + var_364_int; // 0x31a Add2
	var_487_string = "all"; // 0x31b PushS
	HasAnimation(var_363_bool, var_487_string, var_365_string); // 0x31c Func
	var_488_bool = var_363_bool == 0; // 0x31e Not
	if(var_488_bool == 0) goto Label_801; // 0x31f JumpB
	goto Label_830; // 0x320 Jump
	
Label_830:
	var_489_bool = 0; // 0x33e PushB
	SetAttackState(var_489_bool); // 0x33f Func
	var_490_string = "all"; // 0x341 PushS
	var_491_string = "attack_end"; // 0x342 PushS
	var_492_int = var_491_string + var_362_int; // 0x343 Add
	PlayAnimation(var_490_string, var_492_int); // 0x344 Func
	var_493_bool = 0; // 0x346 PushV
	func_1066(var_493_bool); // 0x347 NEW_2
	if(var_493_bool == 0) goto Label_848; // 0x349 JumpB
	var_494_bool = 0; var_495_float = 0; // 0x34a PushV
	var_495_float = 0.75; // 0x34b MovF
	func_850(var_494_bool, var_495_float); // 0x34c NEW_2
	StopAsync(); // 0x34e Func
	
Label_848:
	var_356_bool = 1; // 0x350 MovB
	return 8; // 0x351 Return
	
Label_801:
	func_1993(); // 0x322 NEW_2
	var_503_string = "all"; // 0x324 PushS
	PlayAnimation(var_503_string, var_365_string); // 0x325 Func
	WaitForAnimEnd(); // 0x327 Func
	func_1052(var_365_string); // 0x32a NEW_2
	var_504_bool = 0; var_505_object = Obj(); // 0x32c PushV
	var_505_object = var_0_int; // 0x32d MovT
	func_1669(var_504_bool, var_505_object); // 0x32e NEW_2
	var_506_bool = var_504_bool == 0; // 0x330 Not
	if(var_506_bool == 0) goto Label_822; // 0x331 JumpB
	StopAsync(); // 0x332 Func
	var_356_bool = 0; // 0x334 MovB
	return 8; // 0x335 Return
	
Label_822:
	var_507_float = 0; var_508_int = 0; // 0x336 PushV
	var_507_float = var_357_float; // 0x337 Mov
	var_508_int = var_362_int; // 0x338 Mov
	func_674(var_365_string, var_507_float, var_508_int); // 0x339 NEW_2
	var_509_int = 1; // 0x33b PushI
	var_364_int = var_364_int + var_509_int; // 0x33c Add2
	goto Label_790; // 0x33d Jump
}


func_1737(var_21_object, var_22_int, var_23_float)
{
	var_24_cvector = CVector(0,0,0); var_25_object = Obj(); var_26_int = 0; var_27_bool = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_int = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_object = Obj(); var_35_int = 0; var_36_bool = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_int = 0; var_40_int = 0; var_41_cvector = CVector(0,0,0); // 0x6c9 PushV
	var_42_bool = 0; // 0x6ca PushV
	var_42_bool = 0; // 0x6cb MovB
	var_43_bool = 0; // 0x6cc PushV
	var_43_bool = 0; // 0x6cd MovB
	var_44_object = var_21_object; // 0x6ce Push
	if(var_44_object == 0) goto Label_1748; // 0x6cf JumpB
	var_45_int = 4; // 0x6d0 PushI
	var_46_bool = var_22_int != var_45_int; // 0x6d1 Neq
	if(var_46_bool == 0) goto Label_1748; // 0x6d2 JumpB
	var_43_bool = 1; // 0x6d3 MovB
	
Label_1748:
	if(var_43_bool == 0) goto Label_1753; // 0x6d4 JumpB
	var_47_int = 5; // 0x6d5 PushI
	var_48_bool = var_22_int != var_47_int; // 0x6d6 Neq
	if(var_48_bool == 0) goto Label_1753; // 0x6d7 JumpB
	var_42_bool = 1; // 0x6d8 MovB
	
Label_1753:
	if(var_42_bool == 0) goto Label_1800; // 0x6d9 JumpB
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); // 0x6da PushV
	var_51_cvector = CVector(0,0,0); var_52_object = Obj(); // 0x6db PushV
	var_52_object = var_21_object; // 0x6dc Mov
	func_1501(var_52_object); // 0x6dd NEW_2
	var_50_cvector = var_51_cvector; // 0x6de Mov
	func_1893(var_49_cvector, var_50_cvector); // 0x6e0 NEW_2
	var_33_cvector = var_49_cvector; // 0x6e1 Mov
	CreateVectorVector(var_34_object); // 0x6e3 Func
	var_35_int = 1; // 0x6e5 MovI
	
Label_1766:
	var_62_string = "hit"; // 0x6e6 PushS
	var_63_int = var_62_string + var_35_int; // 0x6e7 Add
	GetGeometryLocator(var_63_int, var_36_bool, var_37_cvector, var_38_cvector); // 0x6e8 Func
	var_64_bool = var_36_bool == 0; // 0x6ea Not
	if(var_64_bool == 0) goto Label_1773; // 0x6eb JumpB
	goto Label_1782; // 0x6ec Jump
	
Label_1782:
	size(var_39_int); // 0x6f6 ObjFunc
	var_65_int = var_39_int; // 0x6f8 Push
	if(var_65_int == 0) goto Label_1799; // 0x6f9 JumpB
	irand(var_40_int, var_39_int); // 0x6fa Func
	get(var_41_cvector, var_40_int); // 0x6fc ObjFunc
	var_66_object = Obj(); var_67_int = 0; var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); // 0x6fe PushV
	var_66_object = var_21_object; // 0x6ff Mov
	var_67_int = var_22_int; // 0x700 Mov
	var_68_float = var_23_float; // 0x701 Mov
	var_69_cvector = var_41_cvector; // 0x702 Mov
	var_70_cvector = -var_33_cvector; // 0x703 Neg2
	func_1805(var_68_float, var_69_cvector, var_70_cvector); // 0x704 NEW_2
	return 18; // 0x706 Return
	
Label_1799:
	var_34_object = 0; // 0x707 SetNull
	
Label_1800:
	var_111_object = Obj(); // 0x708 PushV
	var_111_object = var_21_object; // 0x709 Mov
	func_1693(var_111_object); // 0x70a NEW_2
	return 18; // 0x70c Return
	
Label_1773:
	var_112_int = var_38_cvector | var_33_cvector; // 0x6ed Or
	var_113_float = 0.70711; // 0x6ee PushF
	var_114_bool = var_112_int >= var_113_float; // 0x6ef GE
	if(var_114_bool == 0) goto Label_1779; // 0x6f0 JumpB
	add(var_37_cvector); // 0x6f1 ObjFunc
	
Label_1779:
	var_115_int = 1; // 0x6f3 PushI
	var_35_int = var_35_int + var_115_int; // 0x6f4 Add2
	goto Label_1766; // 0x6f5 Jump
}


func_227(var_0_int, var_1_int, var_2_bool, var_33_object)
{
	var_34_cvector = CVector(0,0,0); var_35_float = 0; var_36_bool = 0; var_37_cvector = CVector(0,0,0); var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_float = 0; var_41_bool = 0; var_42_cvector = CVector(0,0,0); var_43_float = 0; // 0xe3 PushV
	var_0_int = var_33_object; // 0xe4 TMov
	var_44_cvector = CVector(0,0,0); var_45_float = 0; // 0xe5 PushV
	var_45_float = 1.74533; // 0xe6 MovF
	func_197(var_44_cvector, var_45_float); // 0xe7 NEW_2
	var_39_cvector = var_44_cvector; // 0xe8 Mov
	var_40_float = var_39_cvector | var_39_cvector; // 0xea Or2
	var_74_float = 2500.0; // 0xeb PushF
	var_75_bool = var_40_float < var_74_float; // 0xec LT
	if(var_75_bool == 0) goto Label_256; // 0xed JumpB
	var_76_cvector = CVector(0,0,0); var_77_float = 0; // 0xee PushV
	var_77_float = 2.61799; // 0xef MovF
	func_197(var_76_cvector, var_77_float); // 0xf0 NEW_2
	var_39_cvector = var_76_cvector; // 0xf1 Mov
	var_40_float = var_39_cvector | var_39_cvector; // 0xf3 Or2
	var_78_float = 2500.0; // 0xf4 PushF
	var_79_bool = var_40_float < var_78_float; // 0xf5 LT
	if(var_79_bool == 0) goto Label_256; // 0xf6 JumpB
	var_80_string = "Can't retreat, distance: "; // 0xf7 PushS
	var_81_float = sqrt(var_40_float); // 0xf8 Sqrt
	var_82_int = var_80_string + var_81_float; // 0xf9 Add
	Trace(var_82_int); // 0xfa Func
	var_83_float = 0.5; // 0xfc PushF
	Sleep(var_83_float); // 0xfd Func
	return 10; // 0xff Return
	
Label_256:
	var_84_float = GetByIndex(var_39_cvector, 0); // 0x100 PushE
	var_85_float = GetByIndex(var_39_cvector, 2); // 0x101 PushE
	Rotate(var_84_float, var_85_float); // 0x102 Func
	var_86_cvector = CVector(0,0,0); // 0x104 PushV
	func_1496(var_86_cvector); // 0x105 NEW_2
	var_1_int = var_86_cvector + var_39_cvector; // 0x107 Add2
	var_89_int = 120; // 0x108 PushI
	var_90_float = 0.5; // 0x109 PushF
	SetTimer(var_89_int, var_90_float); // 0x10a Func
	var_2_bool = 0; // 0x10c TMovB
	
Label_269:
	var_91_int = 1; // 0x10d PushI
	MovePoint(var_91_int, var_91_int, var_41_bool); // 0x10e Func
	var_92_bool = var_41_bool; // 0x110 Push
	if(var_92_bool == 0) goto Label_297; // 0x111 JumpB
	var_93_bool = var_0_int == 0; // 0x112 NullEq
	if(var_93_bool == 0) goto Label_278; // 0x113 JumpB
	goto Label_299; // 0x114 Jump
	
Label_299:
	return 10; // 0x12b Return
	
Label_278:
	var_94_cvector = CVector(0,0,0); var_95_float = 0; // 0x116 PushV
	var_95_float = 2.61799; // 0x117 MovF
	func_197(var_94_cvector, var_95_float); // 0x118 NEW_2
	var_42_cvector = var_94_cvector; // 0x119 Mov
	var_43_float = var_42_cvector | var_42_cvector; // 0x11b Or2
	var_96_float = 2500.0; // 0x11c PushF
	var_97_bool = var_43_float >= var_96_float; // 0x11d GE
	if(var_97_bool == 0) goto Label_296; // 0x11e JumpB
	var_98_cvector = CVector(0,0,0); // 0x11f PushV
	func_1496(var_98_cvector); // 0x120 NEW_2
	var_1_int = var_98_cvector + var_42_cvector; // 0x122 Add2
	var_99_int = 120; // 0x123 PushI
	var_100_float = 0.5; // 0x124 PushF
	SetTimer(var_99_int, var_100_float); // 0x125 Func
	goto Label_297; // 0x127 Jump
	
Label_297:
	var_101_bool = var_2_bool == 0; // 0x129 Not
	if(var_101_bool == 0) goto Label_269; // 0x12a JumpB
	
Label_296:
	goto Label_299; // 0x128 Jump
}


func_1279(var_0_int, var_1_int, var_25_int)
{
	var_26_int = 0; // 0x500 PushI
	var_27_bool = var_25_int != var_26_int; // 0x501 Neq
	if(var_27_bool == 0) goto Label_1284; // 0x502 JumpB
	return 0; // 0x503 Return
	
Label_1284:
	var_28_bool = 0; var_29_object = Obj(); // 0x504 PushV
	var_29_object = var_1_int; // 0x505 MovT
	func_1317(var_28_bool, var_29_object); // 0x506 NEW_2
	var_64_bool = var_28_bool == 0; // 0x508 Not
	if(var_64_bool == 0) goto Label_1291; // 0x509 JumpB
	var_0_int = 1; // 0x50a TMovB
	
Label_1291:
	var_65_int = 0; // 0x50b PushI
	KillTimer(var_65_int); // 0x50c Func
	Stop(); // 0x50e Func
	return 0; // 0x510 Return
}


func_1805(var_23_object, var_26_cvector, var_27_cvector)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); // 0x70d PushV
	GetScene(var_30_object); // 0x70e Func
	var_32_string = "scripted"; // 0x710 PushS
	var_33_string = "blood_dir.xml"; // 0x711 PushS
	AddActorByType(var_31_object, var_32_string, var_30_object, var_26_cvector, var_27_cvector, var_33_string); // 0x712 Func
	var_34_object = Obj(); // 0x714 PushV
	var_34_object = var_23_object; // 0x715 Mov
	func_1693(var_34_object); // 0x716 NEW_2
	return 4; // 0x718 Return
}


func_1301(var_0_int)
{
	var_0_int = 1; // 0x515 TMovB
	var_21_int = 0; // 0x516 PushI
	KillTimer(var_21_int); // 0x517 Func
	Stop(); // 0x519 Func
	return 0; // 0x51b Return
}


func_1819()
{
	var_242_cvector = CVector(0,0,0); var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); var_245_cvector = CVector(0,0,0); var_246_cvector = CVector(0,0,0); var_247_cvector = CVector(0,0,0); // 0x71b PushV
	GetPosition(var_245_cvector); // 0x71c ObjFunc
	GetPosition(var_246_cvector); // 0x71e Func
	var_247_cvector = var_245_cvector - var_246_cvector; // 0x720 Sub2
	var_248_float = GetByIndex(var_247_cvector, 0); // 0x721 PushE
	var_249_float = GetByIndex(var_247_cvector, 2); // 0x722 PushE
	RotateAsync(var_248_float, var_249_float); // 0x723 Func
	return 6; // 0x725 Return
}


func_1317(var_28_bool, var_29_object)
{
	var_30_bool = 0; var_31_object = Obj(); // 0x526 PushV
	var_31_object = var_29_object; // 0x527 Mov
	func_1669(var_30_bool, var_31_object); // 0x528 NEW_2
	var_28_bool = var_30_bool; // 0x529 Mov
	return 0; // 0x52b Return
}


func_1830(var_20_bool)
{
	var_21_bool = 0; var_22_bool = 0; // 0x726 PushV
	IsLoaded(var_22_bool); // 0x727 Func
	var_20_bool = var_22_bool; // 0x729 Mov
	return 2; // 0x72a Return
}


func_1835(var_21_object)
{
	var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); // 0x72b PushV
	GetEyesHeight(var_24_float); // 0x72c ObjFunc
	var_25_cvector = CVector(0.0, 0.0, 0.0); // 0x72e MovV
	var_26_float = GetByIndex(var_25_cvector, 1); // 0x72f PushE
	var_26_float = var_24_float; // 0x730 Mov
	SetByIndex(var_25_cvector, 1) = var_26_float; // 0x731 PopE
	var_27_string = "head"; // 0x732 PushS
	LookAsync(var_21_object, var_27_string, var_25_cvector); // 0x733 Func
	return 4; // 0x735 Return
}


func_1324(var_207_string)
{
	var_207_string = "walk"; // 0x52c MovS
	return 0; // 0x52d Return
}


func_1326(var_208_string)
{
	var_208_string = "run"; // 0x52e MovS
	return 0; // 0x52f Return
}


func_1328(var_66_object)
{
	var_67_object = Obj(); // 0x531 PushV
	var_67_object = var_66_object; // 0x532 Mov
	func_1334(var_67_object); // 0x533 NEW_2
	return 0; // 0x535 Return
}


func_1846(var_91_string)
{
	var_92_bool = 0; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_bool = 0; var_97_float = 0; var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_bool = 0; var_101_int = 0; var_102_bool = 0; var_103_int = 0; var_104_bool = 0; var_105_float = 0; var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); // 0x736 PushV
	IsExisting3DSound(var_100_bool, var_91_string); // 0x737 Func
	var_108_bool = var_100_bool == 0; // 0x739 Not
	if(var_108_bool == 0) goto Label_1871; // 0x73a JumpB
	var_101_int = 0; // 0x73b MovI
	
Label_1852:
	var_109_int = 1; // 0x73c PushI
	var_110_int = var_101_int + var_109_int; // 0x73d Add
	var_111_int = var_91_string + var_110_int; // 0x73e Add
	IsExisting3DSound(var_102_bool, var_111_int); // 0x73f Func
	var_112_bool = var_102_bool == 0; // 0x741 Not
	if(var_112_bool == 0) goto Label_1860; // 0x742 JumpB
	goto Label_1863; // 0x743 Jump
	
Label_1863:
	var_113_bool = var_101_int == 0; // 0x747 Not
	if(var_113_bool == 0) goto Label_1866; // 0x748 JumpB
	return 16; // 0x749 Return
	
Label_1866:
	irand(var_103_int, var_101_int); // 0x74a Func
	var_114_int = 1; // 0x74c PushI
	var_115_int = var_103_int + var_114_int; // 0x74d Add
	var_91_string = var_91_string + var_115_int; // 0x74e Add2
	
Label_1871:
	Is3DSoundLoaded(var_104_bool, var_91_string); // 0x74f Func
	var_116_bool = var_104_bool; // 0x751 Push
	if(var_116_bool == 0) goto Label_1886; // 0x752 JumpB
	GetEyesHeight(var_105_float); // 0x753 Func
	GetDirection(var_106_cvector); // 0x755 Func
	var_117_int = 50; // 0x757 PushI
	var_107_cvector = var_106_cvector * var_117_int; // 0x758 Mult2
	var_118_float = GetByIndex(var_107_cvector, 1); // 0x759 PushE
	var_118_float = var_118_float + var_105_float; // 0x75a Add2
	SetByIndex(var_107_cvector, 1) = var_118_float; // 0x75b PopE
	PlayGlobalSound(var_91_string, var_107_cvector); // 0x75c Func
	
Label_1886:
	return 16; // 0x75e Return
	
Label_1860:
	var_119_int = 1; // 0x744 PushI
	var_101_int = var_101_int + var_119_int; // 0x745 Add2
	goto Label_1852; // 0x746 Jump
}


func_1334(var_67_object)
{
	EventDisable(0); // 0x537 EventDisable
	var_68_object = Obj(); // 0x538 PushV
	var_68_object = var_67_object; // 0x539 Mov
	func_1359(var_68_object); // 0x53a NEW_2
	var_148_int = 50; // 0x53c PushI
	var_149_int = 40; // 0x53d PushI
	SetRTEnvelope(var_148_int, var_149_int); // 0x53e Func
	EventEnable(0); // 0x540 EventEnable
	
Label_1345:
	Hold(); // 0x541 Func
	goto Label_1345; // 0x543 Jump
}


func_1359(var_68_object)
{
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_string = ""; var_74_object = Obj(); var_75_bool = 0; var_76_bool = 0; var_77_float = 0; var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_string = ""; var_84_object = Obj(); var_85_bool = 0; var_86_bool = 0; var_87_float = 0; var_88_cvector = CVector(0,0,0); // 0x54f PushV
	var_89_bool = var_68_object == 0; // 0x550 NullEq
	if(var_89_bool == 0) goto Label_1367; // 0x551 JumpB
	var_90_string = ""; // 0x552 PushV
	var_90_string = "fdie"; // 0x553 MovS
	func_1450(var_90_string); // 0x554 NEW_2
	goto Label_1449; // 0x556 Jump
	
Label_1449:
	return 20; // 0x5a9 Return
	
Label_1367:
	GetPosition(var_79_cvector); // 0x557 ObjFunc
	GetPosition(var_80_cvector); // 0x559 Func
	GetDirection(var_81_cvector); // 0x55b Func
	var_82_cvector = var_80_cvector - var_79_cvector; // 0x55d Sub2
	var_122_float = GetByIndex(var_82_cvector, 0); // 0x55e PushE
	var_123_float = GetByIndex(var_81_cvector, 0); // 0x55f PushE
	var_124_float = var_122_float * var_123_float; // 0x560 Mult
	var_125_float = GetByIndex(var_82_cvector, 2); // 0x561 PushE
	var_126_float = GetByIndex(var_81_cvector, 2); // 0x562 PushE
	var_127_float = var_125_float * var_126_float; // 0x563 Mult
	var_128_int = var_124_float + var_127_float; // 0x564 Add
	var_129_int = 0; // 0x565 PushI
	var_130_bool = var_128_int >= var_129_int; // 0x566 GE
	if(var_130_bool == 0) goto Label_1386; // 0x567 JumpB
	var_83_string = "fdie"; // 0x568 MovS
	goto Label_1387; // 0x569 Jump
	
Label_1387:
	RemoveRTEnvelope(); // 0x56b Func
	SetDeathState(); // 0x56d Func
	Stop(); // 0x56f Func
	StopAsync(); // 0x571 Func
	var_84_object = var_68_object; // 0x573 Mov
	var_131_string = "GetScriptProperty"; // 0x574 PushS
	var_132_int = 2; // 0x575 PushI
	var_133_bool = IsFuncExist(var_68_object, var_131_string, var_132_int); // 0x576 FuncExist
	if(var_133_bool == 0) goto Label_1411; // 0x577 JumpB
	var_134_string = "Owner"; // 0x578 PushS
	HasScriptProperty(var_85_bool, var_134_string); // 0x579 ObjFunc
	var_135_bool = var_85_bool; // 0x57b Push
	if(var_135_bool == 0) goto Label_1411; // 0x57c JumpB
	var_136_string = "Owner"; // 0x57d PushS
	GetScriptProperty(var_84_object, var_136_string); // 0x57e ObjFunc
	var_137_bool = var_84_object == 0; // 0x580 NullEq
	if(var_137_bool == 0) goto Label_1411; // 0x581 JumpB
	var_84_object = var_68_object; // 0x582 Mov
	
Label_1411:
	var_138_string = "@GetEyesHeight"; // 0x583 PushS
	var_139_int = 1; // 0x584 PushI
	var_140_bool = IsFuncExist(var_84_object, var_138_string, var_139_int); // 0x585 FuncExist
	if(var_140_bool == 0) goto Label_1426; // 0x586 JumpB
	GetEyesHeight(var_87_float); // 0x587 ObjFunc
	var_88_cvector = CVector(0.0, 0.0, 0.0); // 0x589 MovV
	var_141_float = GetByIndex(var_88_cvector, 1); // 0x58a PushE
	var_141_float = var_87_float; // 0x58b Mov
	SetByIndex(var_88_cvector, 1) = var_141_float; // 0x58c PopE
	var_142_string = "head"; // 0x58d PushS
	LookAsync(var_68_object, var_142_string, var_88_cvector); // 0x58e Func
	var_86_bool = 1; // 0x590 MovB
	goto Label_1427; // 0x591 Jump
	
Label_1427:
	var_143_string = ""; // 0x593 PushV
	var_143_string = var_83_string; // 0x594 Mov
	func_1846(var_143_string); // 0x595 NEW_2
	var_144_string = "all"; // 0x597 PushS
	PlayAnimation(var_144_string, var_83_string); // 0x598 Func
	WaitForAnimEnd(); // 0x59a Func
	var_145_bool = var_86_bool; // 0x59c Push
	if(var_145_bool == 0) goto Label_1443; // 0x59d JumpB
	StopAsync(); // 0x59e Func
	var_146_string = "head"; // 0x5a0 PushS
	UnlookAsync(var_146_string); // 0x5a1 Func
	
Label_1443:
	var_147_string = "all"; // 0x5a3 PushS
	LockAnimationEnd(var_147_string, var_83_string); // 0x5a4 Func
	RemoveEnvelope(); // 0x5a6 Func
	var_84_object = 0; // 0x5a8 SetNull
	
Label_1426:
	var_86_bool = 0; // 0x592 MovB
	
Label_1386:
	var_83_string = "bdie"; // 0x56a MovS
}


func_850(var_494_bool, var_495_float)
{
	var_496_float = 0; var_497_bool = 0; var_498_float = 0; var_499_bool = 0; // 0x352 PushV
	rand(var_498_float); // 0x353 Func
	var_500_bool = var_498_float < var_495_float; // 0x355 LT
	if(var_500_bool == 0) goto Label_870; // 0x356 JumpB
	
Label_855:
	IsAnimationPlaying(var_499_bool); // 0x357 Func
	var_501_bool = var_499_bool == 0; // 0x359 Not
	if(var_501_bool == 0) goto Label_860; // 0x35a JumpB
	goto Label_869; // 0x35b Jump
	
Label_869:
	goto Label_875; // 0x365 Jump
	
Label_875:
	var_494_bool = 0; // 0x36b MovB
	return 4; // 0x36c Return
	
Label_860:
	var_502_bool = 0; // 0x35c PushV
	func_948(var_502_bool); // 0x35d NEW_2
	if(var_502_bool == 0) goto Label_866; // 0x35f JumpB
	var_494_bool = 1; // 0x360 MovB
	return 4; // 0x361 Return
	
Label_866:
	sync(); // 0x362 Func
	goto Label_855; // 0x364 Jump
	
Label_870:
	WaitForAnimEnd(); // 0x366 Func
	func_1052(var_499_bool); // 0x369 NEW_2
}


func_1887(var_63_object)
{
	var_64_object = Obj(); var_65_object = Obj(); // 0x75f PushV
	self(var_65_object); // 0x760 Func
	var_63_object = var_65_object; // 0x762 Mov
	return 2; // 0x763 Return
}


func_352(var_2_bool)
{
	Stop(); // 0x160 Func
	var_18_int = 120; // 0x162 PushI
	KillTimer(var_18_int); // 0x163 Func
	var_2_bool = 1; // 0x165 TMovB
	return 0; // 0x166 Return
}


func_1893(var_49_cvector, var_50_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x765 PushV
	var_59_int = var_50_cvector | var_50_cvector; // 0x766 Or
	var_58_float = sqrt(var_59_int); // 0x767 Sqrt2
	var_60_float = 0.0; // 0x768 PushF
	var_61_bool = var_58_float < var_60_float; // 0x769 LT
	if(var_61_bool == 0) goto Label_1901; // 0x76a JumpB
	var_49_cvector = CVector(0.0, 0.0, 0.0); // 0x76b MovV
	return 2; // 0x76c Return
	
Label_1901:
	var_49_cvector = var_50_cvector / var_50_cvector; // 0x76d Div2
	return 2; // 0x76e Return
}


func_877(var_0_int, var_295_bool, var_296_float)
{
	var_297_bool = 0; var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_cvector = CVector(0,0,0); var_301_float = 0; var_302_bool = 0; var_303_cvector = CVector(0,0,0); var_304_cvector = CVector(0,0,0); var_305_cvector = CVector(0,0,0); var_306_float = 0; // 0x36d PushV
	
Label_878:
	IsAnimationPlaying(var_302_bool); // 0x36e Func
	var_307_bool = var_302_bool == 0; // 0x370 Not
	if(var_307_bool == 0) goto Label_883; // 0x371 JumpB
	goto Label_915; // 0x372 Jump
	
Label_915:
	func_1052(var_306_float); // 0x394 NEW_2
	var_295_bool = 0; // 0x396 MovB
	return 10; // 0x397 Return
	
Label_883:
	var_308_bool = 0; // 0x373 PushV
	func_948(var_308_bool); // 0x374 NEW_2
	if(var_308_bool == 0) goto Label_889; // 0x376 JumpB
	var_295_bool = 1; // 0x377 MovB
	return 10; // 0x378 Return
	
Label_889:
	var_351_bool = 0; var_352_object = Obj(); // 0x379 PushV
	var_352_object = var_0_int; // 0x37a MovT
	func_1669(var_351_bool, var_352_object); // 0x37b NEW_2
	var_353_bool = var_351_bool == 0; // 0x37d Not
	if(var_353_bool == 0) goto Label_897; // 0x37e JumpB
	var_295_bool = 0; // 0x37f MovB
	return 10; // 0x380 Return
	
Label_897:
	GetPFPosition(var_303_cvector); // 0x381 TObjFunc
	GetPFPosition(var_304_cvector); // 0x383 Func
	var_305_cvector = var_303_cvector - var_304_cvector; // 0x385 Sub2
	var_306_float = var_305_cvector | var_305_cvector; // 0x386 Or2
	var_354_float = var_296_float * var_296_float; // 0x387 Mult
	var_355_bool = var_306_float < var_354_float; // 0x388 LT
	if(var_355_bool == 0) goto Label_912; // 0x389 JumpB
	var_356_bool = 0; var_357_float = 0; // 0x38a PushV
	var_357_float = var_296_float; // 0x38b Mov
	func_713(var_306_float, var_356_bool, var_357_float); // 0x38c NEW_2
	var_295_bool = 1; // 0x38e MovB
	return 10; // 0x38f Return
	
Label_912:
	sync(); // 0x390 Func
	goto Label_878; // 0x392 Jump
}


func_1903(var_445_float, var_446_float, var_447_float)
{
	var_450_bool = var_446_float < var_447_float; // 0x770 LT
	if(var_450_bool == 0) goto Label_1908; // 0x771 JumpB
	var_445_float = var_446_float; // 0x772 Mov
	goto Label_1909; // 0x773 Jump
	
Label_1909:
	return 0; // 0x775 Return
	
Label_1908:
	var_445_float = var_447_float; // 0x774 Mov
}


func_368(var_0_int, var_69_bool)
{
	var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); // 0x170 PushV
	GetDirection(var_72_cvector); // 0x171 Func
	var_74_cvector = CVector(0,0,0); var_75_object = Obj(); // 0x173 PushV
	var_75_object = var_0_int; // 0x174 MovT
	func_1501(var_75_object); // 0x175 NEW_2
	var_73_cvector = var_74_cvector; // 0x176 Mov
	var_80_float = 0; var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); // 0x178 PushV
	var_81_cvector = var_72_cvector; // 0x179 Mov
	var_82_cvector = var_73_cvector; // 0x17a Mov
	func_1921(var_80_float, var_81_cvector, var_82_cvector); // 0x17b NEW_2
	var_88_float = -0.34202; // 0x17d PushF
	var_69_bool = var_80_float >= var_88_float; // 0x17e GE2
	return 4; // 0x17f Return
}


func_1910(var_52_float, var_53_float, var_54_float, var_55_float)
{
	var_56_bool = var_53_float < var_54_float; // 0x777 LT
	if(var_56_bool == 0) goto Label_1915; // 0x778 JumpB
	var_52_float = var_54_float; // 0x779 Mov
	return 0; // 0x77a Return
	
Label_1915:
	var_57_bool = var_53_float > var_55_float; // 0x77b GT
	if(var_57_bool == 0) goto Label_1919; // 0x77c JumpB
	var_52_float = var_55_float; // 0x77d Mov
	return 0; // 0x77e Return
	
Label_1919:
	var_52_float = var_53_float; // 0x77f Mov
	return 0; // 0x780 Return
}


func_384(var_56_object, var_57_bool)
{
	var_64_object = Obj(); var_65_object = Obj(); // 0x180 PushV
	GetScene(var_65_object); // 0x181 Func
	var_66_object = Obj(); // 0x183 PushV
	func_1887(var_66_object); // 0x184 NEW_2
	RemoveStationaryActor(var_66_object); // 0x186 ObjFunc
	
Label_392:
	var_69_object = Obj(); var_70_bool = 0; var_71_float = 0; // 0x188 PushV
	var_69_object = var_56_object; // 0x189 Mov
	var_70_bool = var_57_bool; // 0x18a Mov
	var_71_float = 180.0; // 0x18b MovF
	func_410(var_63_int, var_56_object, var_57_bool, var_64_object, var_65_object, var_69_object, var_70_bool, var_71_float); // 0x18c NEW_2
	var_526_int = 1; // 0x18e PushI
	Sleep(var_526_int); // 0x18f Func
	goto Label_392; // 0x191 Jump
}


func_1921(var_80_float, var_81_cvector, var_82_cvector)
{
	var_83_int = var_81_cvector | var_82_cvector; // 0x782 Or
	var_84_int = var_81_cvector | var_81_cvector; // 0x783 Or
	var_85_int = var_82_cvector | var_82_cvector; // 0x784 Or
	var_86_float = var_84_int * var_85_int; // 0x785 Mult
	var_87_float = sqrt(var_86_float); // 0x786 Sqrt
	var_80_float = var_83_int / var_83_int; // 0x787 Div2
	return 0; // 0x788 Return
}


func_1929(var_23_bool, var_24_object, var_25_float)
{
	var_26_bool = var_24_object == 0; // 0x78a Not
	if(var_26_bool == 0) goto Label_1934; // 0x78b JumpB
	var_23_bool = 0; // 0x78c MovB
	return 0; // 0x78d Return
	
Label_1934:
	var_27_int = 0; // 0x78e PushI
	var_28_bool = var_25_float > var_27_int; // 0x78f GT
	if(var_28_bool == 0) goto Label_1941; // 0x790 JumpB
	var_29_int = 8; // 0x791 PushI
	SendWorldWndMessage(var_29_int); // 0x792 Func
	goto Label_1950; // 0x794 Jump
	
Label_1950:
	var_30_float = 0; // 0x79e PushV
	var_30_float = var_25_float; // 0x79f Mov
	func_1974(var_30_float); // 0x7a0 NEW_2
	var_34_bool = 0; var_35_object = Obj(); var_36_string = ""; var_37_float = 0; var_38_float = 0; var_39_float = 0; // 0x7a2 PushV
	var_35_object = var_24_object; // 0x7a3 Mov
	var_36_string = "reputation"; // 0x7a4 MovS
	var_37_float = var_25_float; // 0x7a5 Mov
	var_38_float = 0; // 0x7a6 MovI
	var_39_float = 1; // 0x7a7 MovI
	func_1533(var_34_bool, var_35_object, var_36_string, var_37_float, var_38_float, var_39_float); // 0x7a8 NEW_2
	var_23_bool = 1; // 0x7aa MovB
	return 0; // 0x7ab Return
	
Label_1941:
	var_58_int = 0; // 0x795 PushI
	var_59_bool = var_25_float < var_58_int; // 0x796 LT
	if(var_59_bool == 0) goto Label_1948; // 0x797 JumpB
	var_60_int = 9; // 0x798 PushI
	SendWorldWndMessage(var_60_int); // 0x799 Func
	goto Label_1950; // 0x79b Jump
	
Label_1948:
	var_23_bool = 0; // 0x79c MovB
	return 0; // 0x79d Return
}


func_404(var_404_float)
{
	var_404_float = 0.03; // 0x195 MovF
	return 0; // 0x196 Return
}


func_407(var_411_int)
{
	var_411_int = 0; // 0x198 MovI
	return 0; // 0x199 Return
}


func_920(var_0_int, var_310_bool)
{
	var_311_cvector = CVector(0,0,0); var_312_cvector = CVector(0,0,0); var_313_cvector = CVector(0,0,0); var_314_float = 0; var_315_float = 0; var_316_cvector = CVector(0,0,0); var_317_cvector = CVector(0,0,0); var_318_cvector = CVector(0,0,0); var_319_float = 0; var_320_float = 0; // 0x398 PushV
	var_321_bool = 0; var_322_object = Obj(); // 0x399 PushV
	var_322_object = var_0_int; // 0x39a MovT
	func_1669(var_321_bool, var_322_object); // 0x39b NEW_2
	var_323_bool = var_321_bool == 0; // 0x39d Not
	if(var_323_bool == 0) goto Label_929; // 0x39e JumpB
	var_310_bool = 0; // 0x39f MovB
	return 10; // 0x3a0 Return
	
Label_929:
	var_324_bool = 0; // 0x3a1 PushV
	func_1009(var_320_float, var_324_bool); // 0x3a2 NEW_2
	if(var_324_bool == 0) goto Label_946; // 0x3a4 JumpB
	GetPFPosition(var_316_cvector); // 0x3a5 TObjFunc
	GetPFPosition(var_317_cvector); // 0x3a7 Func
	var_318_cvector = var_316_cvector - var_317_cvector; // 0x3a9 Sub2
	var_319_float = var_318_cvector | var_318_cvector; // 0x3aa Or2
	GetAttackDistance(var_320_float); // 0x3ab TObjFunc
	var_325_int = 50; // 0x3ad PushI
	var_320_float = var_320_float + var_325_int; // 0x3ae Add2
	var_326_float = var_320_float * var_320_float; // 0x3af Mult
	var_310_bool = var_319_float <= var_326_float; // 0x3b0 LE2
	return 10; // 0x3b1 Return
	
Label_946:
	var_310_bool = 0; // 0x3b2 MovB
	return 10; // 0x3b3 Return
}


func_410(var_0_int, var_3_bool, var_5_object, var_69_object, var_70_bool, var_71_float, var_144_bool, var_236_bool)
{
	var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_bool = 0; var_76_bool = 0; var_77_float = 0; var_78_cvector = CVector(0,0,0); var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_bool = 0; var_82_float = 0; var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_bool = 0; var_87_bool = 0; var_88_float = 0; var_89_cvector = CVector(0,0,0); var_90_float = 0; var_91_cvector = CVector(0,0,0); var_92_bool = 0; var_93_float = 0; // 0x19a PushV
	func_639(var_91_cvector, var_92_bool, var_93_float); // 0x19c NEW_2
	var_5_object = 0; // 0x19e TMovI
	var_116_string = "@GetAttackDistance"; // 0x19f PushS
	var_117_int = 1; // 0x1a0 PushI
	var_118_bool = IsFuncExist(var_69_object, var_116_string, var_117_int); // 0x1a1 FuncExist
	if(var_118_bool == 0) goto Label_424; // 0x1a2 JumpB
	GetAttackDistance(var_83_float); // 0x1a3 ObjFunc
	var_119_int = 50; // 0x1a5 PushI
	var_83_float = var_83_float + var_119_int; // 0x1a6 Add2
	goto Label_425; // 0x1a7 Jump
	
Label_425:
	var_120_int = 150; // 0x1a9 PushI
	var_121_bool = var_83_float >= var_120_int; // 0x1aa GE
	if(var_121_bool == 0) goto Label_429; // 0x1ab JumpB
	var_83_float = 150; // 0x1ac MovI
	
Label_429:
	var_3_bool = 0; // 0x1ad TMovB
	var_0_int = var_69_object; // 0x1ae TMov
	IsPlayerActor(var_0_int, var_86_bool); // 0x1af Func
	var_122_bool = var_86_bool; // 0x1b1 Push
	if(var_122_bool == 0) goto Label_443; // 0x1b2 JumpB
	var_123_string = "attack"; // 0x1b3 PushS
	PlayGlobalMusic(var_123_string); // 0x1b4 Func
	var_124_object = Obj(); // 0x1b6 PushV
	func_1887(var_124_object); // 0x1b7 NEW_2
	SendPlayerEnemy(var_69_object, var_124_object); // 0x1b9 Func
	
Label_443:
	var_125_bool = var_70_bool; // 0x1bb Push
	if(var_125_bool == 0) goto Label_447; // 0x1bc JumpB
	var_87_bool = 0; // 0x1bd MovB
	goto Label_448; // 0x1be Jump
	
Label_448:
	var_126_float = 400.0; // 0x1c0 PushF
	var_88_float = var_126_float + var_83_float; // 0x1c1 Add2
	
Label_450:
	var_127_bool = 0; // 0x1c2 PushV
	var_127_bool = 0; // 0x1c3 MovB
	var_128_bool = 0; var_129_object = Obj(); // 0x1c4 PushV
	var_129_object = var_0_int; // 0x1c5 MovT
	func_1669(var_128_bool, var_129_object); // 0x1c6 NEW_2
	if(var_128_bool == 0) goto Label_460; // 0x1c8 JumpB
	var_130_bool = var_3_bool == 0; // 0x1c9 Not
	if(var_130_bool == 0) goto Label_460; // 0x1ca JumpB
	var_127_bool = 1; // 0x1cb MovB
	
Label_460:
	if(var_127_bool == 0) goto Label_622; // 0x1cc JumpB
	func_1052(var_93_float); // 0x1ce NEW_2
	GetPFPosition(var_84_cvector); // 0x1d0 TObjFunc
	GetPFPosition(var_85_cvector); // 0x1d2 Func
	var_89_cvector = var_84_cvector - var_85_cvector; // 0x1d4 Sub2
	var_90_float = var_89_cvector | var_89_cvector; // 0x1d5 Or2
	var_136_float = var_88_float * var_88_float; // 0x1d6 Mult
	var_137_bool = var_90_float >= var_136_float; // 0x1d7 GE
	if(var_137_bool == 0) goto Label_488; // 0x1d8 JumpB
	var_138_bool = 0; var_139_object = Obj(); var_140_float = 0; var_141_float = 0; var_142_bool = 0; var_143_bool = 0; // 0x1d9 PushV
	var_139_object = var_0_int; // 0x1da MovT
	var_140_float = var_83_float; // 0x1db Mov
	var_141_float = 10000.0; // 0x1dc MovF
	var_142_bool = 1; // 0x1dd MovB
	var_143_bool = 0; // 0x1de MovB
	TaskCall(3); // 0x1df TaskCall
	func_1072(var_146_bool, var_138_bool, var_139_object, var_140_float, var_141_float, var_142_bool, var_143_bool); // 0x1e0 NEW_2
	TaskReturn(); // 0x1e1 TaskReturn
	var_221_bool = var_144_bool == 0; // 0x1e3 Not
	if(var_221_bool == 0) goto Label_486; // 0x1e4 JumpB
	goto Label_622; // 0x1e5 Jump
	
Label_622:
	WaitForAnimEnd(); // 0x26e Func
	var_222_bool = var_3_bool; // 0x270 PushT
	if(var_222_bool == 0) goto Label_627; // 0x271 JumpB
	return 22; // 0x272 Return
	
Label_627:
	var_223_string = "all"; // 0x273 PushS
	var_224_string = "attack_off"; // 0x274 PushS
	PlayAnimation(var_223_string, var_224_string); // 0x275 Func
	WaitForAnimEnd(); // 0x277 Func
	var_225_bool = var_86_bool; // 0x279 Push
	if(var_225_bool == 0) goto Label_638; // 0x27a JumpB
	var_226_float = 2.0; // 0x27b PushF
	Sleep(var_226_float); // 0x27c Func
	
Label_638:
	return 22; // 0x27e Return
	
Label_486:
	var_87_bool = 0; // 0x1e6 MovB
	goto Label_621; // 0x1e7 Jump
	
Label_621:
	goto Label_450; // 0x26d Jump
	
Label_488:
	var_227_float = var_71_float * var_71_float; // 0x1e8 Mult
	var_228_bool = var_90_float >= var_227_float; // 0x1e9 GE
	if(var_228_bool == 0) goto Label_613; // 0x1ea JumpB
	GetPFPosition(var_91_cvector); // 0x1eb TObjFunc
	CanReachByPF(var_92_bool, var_91_cvector); // 0x1ed Func
	var_229_bool = var_92_bool == 0; // 0x1ef Not
	if(var_229_bool == 0) goto Label_512; // 0x1f0 JumpB
	var_230_bool = 0; var_231_object = Obj(); var_232_float = 0; var_233_float = 0; var_234_bool = 0; var_235_bool = 0; // 0x1f1 PushV
	var_231_object = var_0_int; // 0x1f2 MovT
	var_232_float = var_83_float; // 0x1f3 Mov
	var_233_float = 10000.0; // 0x1f4 MovF
	var_234_bool = 1; // 0x1f5 MovB
	var_235_bool = 0; // 0x1f6 MovB
	TaskCall(3); // 0x1f7 TaskCall
	func_1072(var_238_bool, var_230_bool, var_231_object, var_232_float, var_233_float, var_234_bool, var_235_bool); // 0x1f8 NEW_2
	TaskReturn(); // 0x1f9 TaskReturn
	var_239_bool = var_236_bool == 0; // 0x1fb Not
	if(var_239_bool == 0) goto Label_510; // 0x1fc JumpB
	goto Label_622; // 0x1fd Jump
	
Label_510:
	var_87_bool = 0; // 0x1fe MovB
	goto Label_450; // 0x1ff Jump
	
Label_512:
	var_240_bool = var_87_bool == 0; // 0x200 Not
	if(var_240_bool == 0) goto Label_537; // 0x201 JumpB
	var_241_object = Obj(); // 0x202 PushV
	var_241_object = var_0_int; // 0x203 MovT
	func_1819(); // 0x204 NEW_2
	var_250_string = "all"; // 0x206 PushS
	var_251_string = "attack_on"; // 0x207 PushS
	PlayAnimation(var_250_string, var_251_string); // 0x208 Func
	WaitForAnimEnd(); // 0x20a Func
	func_1052(var_93_float); // 0x20d NEW_2
	StopAsync(); // 0x20f Func
	var_87_bool = 1; // 0x211 MovB
	var_252_bool = 0; var_253_object = Obj(); // 0x212 PushV
	var_253_object = var_0_int; // 0x213 MovT
	func_1669(var_252_bool, var_253_object); // 0x214 NEW_2
	var_254_bool = var_252_bool == 0; // 0x216 Not
	if(var_254_bool == 0) goto Label_537; // 0x217 JumpB
	goto Label_622; // 0x218 Jump
	
Label_537:
	rand(var_93_float); // 0x219 Func
	var_255_bool = 0; // 0x21b PushV
	var_255_bool = 1; // 0x21c MovB
	var_256_float = 0.25; // 0x21d PushF
	var_257_bool = var_93_float < var_256_float; // 0x21e LT
	if(var_257_bool == 0) goto Label_549; // 0x21f JumpB
	var_258_bool = 0; // 0x220 PushV
	func_1009(var_255_bool, var_258_bool); // 0x221 NEW_2
	if(var_258_bool == 0) goto Label_549; // 0x223 JumpB
	var_255_bool = 0; // 0x224 MovB
	
Label_549:
	if(var_255_bool == 0) goto Label_566; // 0x225 JumpB
	Face(var_0_int); // 0x226 Func
	func_1059(); // 0x229 NEW_2
	var_293_string = "all"; // 0x22b PushS
	var_294_string = "attack_stay"; // 0x22c PushS
	PlayAnimation(var_293_string, var_294_string); // 0x22d Func
	var_295_bool = 0; var_296_float = 0; // 0x22f PushV
	var_296_float = var_71_float; // 0x230 Mov
	func_877(var_93_float, var_295_bool, var_296_float); // 0x231 NEW_2
	StopAsync(); // 0x233 Func
	goto Label_612; // 0x235 Jump
	
Label_612:
	goto Label_621; // 0x264 Jump
	
Label_566:
	Face(var_0_int); // 0x236 Func
	var_510_string = "all"; // 0x238 PushS
	var_511_string = "fjump"; // 0x239 PushS
	PlayAnimation(var_510_string, var_511_string); // 0x23a Func
	WaitForAnimEnd(); // 0x23c Func
	func_1052(var_93_float); // 0x23f NEW_2
	var_512_cvector = CVector(0.0, 0.0, 0.0); // 0x241 PushVec
	SetSpeed(var_512_cvector); // 0x242 Func
	Stop(); // 0x244 Func
	StopAsync(); // 0x246 Func
	var_513_bool = 0; // 0x248 PushV
	func_1009(var_93_float, var_513_bool); // 0x249 NEW_2
	var_514_bool = var_513_bool == 0; // 0x24b Not
	if(var_514_bool == 0) goto Label_612; // 0x24c JumpB
	var_515_bool = 0; var_516_object = Obj(); // 0x24d PushV
	var_516_object = var_0_int; // 0x24e MovT
	func_1669(var_515_bool, var_516_object); // 0x24f NEW_2
	var_517_bool = var_515_bool == 0; // 0x251 Not
	if(var_517_bool == 0) goto Label_596; // 0x252 JumpB
	goto Label_622; // 0x253 Jump
	
Label_596:
	GetPFPosition(var_84_cvector); // 0x254 TObjFunc
	GetPFPosition(var_85_cvector); // 0x256 Func
	var_89_cvector = var_84_cvector - var_85_cvector; // 0x258 Sub2
	var_90_float = var_89_cvector | var_89_cvector; // 0x259 Or2
	var_518_float = var_71_float * var_71_float; // 0x25a Mult
	var_519_bool = var_90_float < var_518_float; // 0x25b LT
	if(var_519_bool == 0) goto Label_612; // 0x25c JumpB
	var_520_bool = 0; var_521_float = 0; // 0x25d PushV
	var_521_float = var_71_float; // 0x25e Mov
	func_713(var_93_float, var_520_bool, var_521_float); // 0x25f NEW_2
	var_522_bool = var_520_bool == 0; // 0x261 Not
	if(var_522_bool == 0) goto Label_612; // 0x262 JumpB
	goto Label_622; // 0x263 Jump
	
Label_613:
	var_523_bool = 0; var_524_float = 0; // 0x265 PushV
	var_524_float = var_71_float; // 0x266 Mov
	func_713(var_93_float, var_523_bool, var_524_float); // 0x267 NEW_2
	var_525_bool = var_523_bool == 0; // 0x269 Not
	if(var_525_bool == 0) goto Label_620; // 0x26a JumpB
	goto Label_622; // 0x26b Jump
	
Label_620:
	var_87_bool = 1; // 0x26c MovB
	
Label_447:
	var_87_bool = 1; // 0x1bf MovB
	
Label_424:
	var_83_float = var_71_float; // 0x1a8 Mov
}


func_1450(var_90_string)
{
	RemoveRTEnvelope(); // 0x5ab Func
	SetDeathState(); // 0x5ad Func
	Stop(); // 0x5af Func
	StopAsync(); // 0x5b1 Func
	StopSecondaryAnimation(); // 0x5b3 Func
	var_91_string = ""; // 0x5b5 PushV
	var_91_string = var_90_string; // 0x5b6 Mov
	func_1846(var_91_string); // 0x5b7 NEW_2
	var_120_string = "all"; // 0x5b9 PushS
	PlayAnimation(var_120_string, var_90_string); // 0x5ba Func
	WaitForAnimEnd(); // 0x5bc Func
	var_121_string = "all"; // 0x5be PushS
	LockAnimationEnd(var_121_string, var_90_string); // 0x5bf Func
	RemoveEnvelope(); // 0x5c1 Func
	return 0; // 0x5c3 Return
}


func_1964(var_463_float)
{
	var_464_object = Obj(); var_465_object = Obj(); // 0x7ac PushV
	CreateFloatVector(var_465_object); // 0x7ad Func
	add(var_463_float); // 0x7af ObjFunc
	var_466_int = 15; // 0x7b1 PushI
	SendWorldWndMessage(var_466_int, var_465_object); // 0x7b2 Func
	return 2; // 0x7b4 Return
}


func_948(var_308_bool)
{
	var_309_bool = 0; // 0x3b4 PushV
	var_309_bool = 0; // 0x3b5 MovB
	var_310_bool = 0; // 0x3b6 PushV
	func_920(var_309_bool, var_310_bool); // 0x3b7 NEW_2
	if(var_310_bool == 0) goto Label_959; // 0x3b9 JumpB
	var_327_bool = 0; // 0x3ba PushV
	func_964(var_308_bool, var_309_bool, var_327_bool); // 0x3bb NEW_2
	if(var_327_bool == 0) goto Label_959; // 0x3bd JumpB
	var_309_bool = 1; // 0x3be MovB
	
Label_959:
	if(var_309_bool == 0) goto Label_962; // 0x3bf JumpB
	var_308_bool = 1; // 0x3c0 MovB
	return 0; // 0x3c1 Return
	
Label_962:
	var_308_bool = 0; // 0x3c2 MovB
	return 0; // 0x3c3 Return
}


func_1974(var_30_float)
{
	var_31_object = Obj(); var_32_object = Obj(); // 0x7b6 PushV
	CreateFloatVector(var_32_object); // 0x7b7 Func
	add(var_30_float); // 0x7b9 ObjFunc
	var_33_int = 16; // 0x7bb PushI
	SendWorldWndMessage(var_33_int, var_32_object); // 0x7bc Func
	return 2; // 0x7be Return
}


func_1984(var_20_object)
{
	var_21_bool = 0; var_22_bool = 0; // 0x7c0 PushV
	IsPlayerActor(var_20_object, var_22_bool); // 0x7c1 Func
	var_23_bool = var_22_bool; // 0x7c3 Push
	if(var_23_bool == 0) goto Label_1992; // 0x7c4 JumpB
	var_24_string = "attack"; // 0x7c5 PushS
	PlayGlobalMusic(var_24_string); // 0x7c6 Func
	
Label_1992:
	return 2; // 0x7c8 Return
}


func_964(var_0_int, var_4_object, var_327_bool)
{
	var_328_object = Obj(); var_329_bool = 0; var_330_float = 0; var_331_cvector = CVector(0,0,0); var_332_cvector = CVector(0,0,0); var_333_object = Obj(); var_334_bool = 0; var_335_float = 0; var_336_cvector = CVector(0,0,0); var_337_cvector = CVector(0,0,0); // 0x3c4 PushV
	GetScene(var_333_object); // 0x3c5 Func
	var_334_bool = 0; // 0x3c7 MovB
	
Label_968:
	var_338_cvector = CVector(0,0,0); var_339_object = Obj(); // 0x3c8 PushV
	var_339_object = var_0_int; // 0x3c9 MovT
	func_1501(var_339_object); // 0x3ca NEW_2
	var_344_int = -var_338_cvector; // 0x3cc Neg
	FindDirLength(var_335_float, var_344_int, var_335_float); // 0x3cd Func
	var_345_bool = var_335_float < var_4_object; // 0x3cf LT
	if(var_345_bool == 0) goto Label_978; // 0x3d0 JumpB
	goto Label_1006; // 0x3d1 Jump
	
Label_1006:
	var_327_bool = var_334_bool; // 0x3ee Mov
	return 10; // 0x3ef Return
	
Label_978:
	Face(var_0_int); // 0x3d2 Func
	var_346_string = "all"; // 0x3d4 PushS
	var_347_string = "bjump"; // 0x3d5 PushS
	PlayAnimation(var_346_string, var_347_string); // 0x3d6 Func
	GetPFPosition(var_336_cvector); // 0x3d8 TObjFunc
	GetPFPosition(var_337_cvector); // 0x3da Func
	WaitForAnimEnd(); // 0x3dc Func
	func_1052(var_337_cvector); // 0x3df NEW_2
	StopAsync(); // 0x3e1 Func
	var_348_cvector = CVector(0.0, 0.0, 0.0); // 0x3e3 PushVec
	SetSpeed(var_348_cvector); // 0x3e4 Func
	var_334_bool = 1; // 0x3e6 MovB
	var_349_bool = 0; // 0x3e7 PushV
	func_920(var_337_cvector, var_349_bool); // 0x3e8 NEW_2
	var_350_bool = var_349_bool == 0; // 0x3ea Not
	if(var_350_bool == 0) goto Label_1005; // 0x3eb JumpB
	goto Label_1006; // 0x3ec Jump
	
Label_1005:
	goto Label_968; // 0x3ed Jump
}


func_1993()
{
	var_368_object = Obj(); var_369_object = Obj(); // 0x7c9 PushV
	GetScene(var_369_object); // 0x7ca Func
	var_370_string = "battle"; // 0x7cc PushS
	var_371_object = Obj(); // 0x7cd PushV
	func_1887(var_371_object); // 0x7ce NEW_2
	BroadcastMessage(var_370_string, var_371_object, var_369_object); // 0x7d0 Func
	return 2; // 0x7d2 Return
}


func_1482(var_435_string, var_436_int)
{
	var_437_int = 2; // 0x5cb PushI
	var_438_bool = var_436_int == var_437_int; // 0x5cc Eq
	if(var_438_bool == 0) goto Label_1489; // 0x5cd JumpB
	var_435_string = "fire"; // 0x5ce MovS
	return 0; // 0x5cf Return
	
Label_1489:
	var_439_int = 1; // 0x5d1 PushI
	var_440_bool = var_436_int == var_439_int; // 0x5d2 Eq
	if(var_440_bool == 0) goto Label_1494; // 0x5d3 JumpB
	var_435_string = "bullet"; // 0x5d4 MovS
	return 0; // 0x5d5 Return
	
Label_1494:
	var_435_string = "phys"; // 0x5d6 MovS
	return 0; // 0x5d7 Return
}


func_2004(var_49_string, var_50_int)
{
	var_51_string = ""; var_52_string = ""; // 0x7d4 PushV
	var_52_string = "idle"; // 0x7d5 MovS
	var_53_int = var_50_int; // 0x7d6 Push
	if(var_53_int == 0) goto Label_2009; // 0x7d7 JumpB
	var_52_string = var_52_string + var_50_int; // 0x7d8 Add2
	
Label_2009:
	var_49_string = var_52_string; // 0x7d9 Mov
	return 2; // 0x7da Return
}


func_1496(var_89_cvector)
{
	var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); // 0x5d8 PushV
	GetPosition(var_91_cvector); // 0x5d9 Func
	var_89_cvector = var_91_cvector; // 0x5db Mov
	return 2; // 0x5dc Return
}


func_2011(var_43_int)
{
	var_44_int = 0; var_45_bool = 0; var_46_int = 0; var_47_bool = 0; // 0x7db PushV
	var_46_int = 0; // 0x7dc MovI
	
Label_2013:
	var_48_string = "all"; // 0x7dd PushS
	var_49_string = ""; var_50_int = 0; // 0x7de PushV
	var_50_int = var_46_int; // 0x7df Mov
	func_2004(var_49_string, var_50_int); // 0x7e0 NEW_2
	HasAnimation(var_47_bool, var_48_string, var_49_string); // 0x7e2 Func
	var_54_bool = var_47_bool == 0; // 0x7e4 Not
	if(var_54_bool == 0) goto Label_2023; // 0x7e5 JumpB
	goto Label_2026; // 0x7e6 Jump
	
Label_2026:
	var_43_int = var_46_int; // 0x7ea Mov
	return 4; // 0x7eb Return
	
Label_2023:
	var_55_int = 1; // 0x7e7 PushI
	var_46_int = var_46_int + var_55_int; // 0x7e8 Add2
	goto Label_2013; // 0x7e9 Jump
}


func_1501(var_51_cvector)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); // 0x5dd PushV
	GetPosition(var_55_cvector); // 0x5de Func
	GetPosition(var_56_cvector); // 0x5e0 ObjFunc
	var_51_cvector = var_56_cvector - var_55_cvector; // 0x5e2 Sub2
	return 4; // 0x5e3 Return
}


func_1508(var_24_float)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); // 0x5e4 PushV
	GetPosition(var_29_cvector); // 0x5e5 Func
	GetPosition(var_30_cvector); // 0x5e7 ObjFunc
	var_31_cvector = var_30_cvector - var_29_cvector; // 0x5e9 Sub2
	var_24_float = var_31_cvector | var_31_cvector; // 0x5ea Or2
	return 6; // 0x5eb Return
}


func_1516(var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_bool = 0; // 0x5ec PushV
	IsPlayerActor(var_20_object, var_22_bool); // 0x5ed Func
	var_19_bool = var_22_bool; // 0x5ef Mov
	return 2; // 0x5f0 Return
}


func_2028(var_22_int)
{
	var_23_int = 0; var_24_int = 0; // 0x7ec PushV
	var_25_string = "branch"; // 0x7ed PushS
	GetVariable(var_25_string, var_24_int); // 0x7ee Func
	var_22_int = var_24_int; // 0x7f0 Mov
	return 2; // 0x7f1 Return
}


func_1009(var_0_int, var_258_bool)
{
	var_259_bool = 0; var_260_bool = 0; // 0x3f1 PushV
	var_261_string = "IsAttacking"; // 0x3f2 PushS
	var_262_int = 1; // 0x3f3 PushI
	var_263_bool = IsFuncExist(var_0_int, var_261_string, var_262_int); // 0x3f4 FuncExist
	if(var_263_bool == 0) goto Label_1018; // 0x3f5 JumpB
	IsAttacking(var_260_bool); // 0x3f6 TObjFunc
	var_258_bool = var_260_bool; // 0x3f8 Mov
	return 2; // 0x3f9 Return
	
Label_1018:
	var_258_bool = 0; // 0x3fa MovB
	return 2; // 0x3fb Return
}


func_2034(var_21_object)
{
	var_22_int = 0; // 0x7f3 PushV
	func_2028(var_22_int); // 0x7f4 NEW_2
	var_26_int = 1; // 0x7f6 PushI
	var_27_bool = var_22_int == var_26_int; // 0x7f7 Eq
	if(var_27_bool == 0) goto Label_2044; // 0x7f8 JumpB
	WorkWithCorpse(var_21_object); // 0x7f9 Func
	goto Label_2046; // 0x7fb Jump
	
Label_2046:
	return 0; // 0x7fe Return
	
Label_2044:
	Barter(var_21_object); // 0x7fc Func
}


func_1521(var_42_bool, var_43_object, var_44_string)
{
	var_45_bool = 0; var_46_bool = 0; // 0x5f1 PushV
	var_47_string = "HasProperty"; // 0x5f2 PushS
	var_48_int = 2; // 0x5f3 PushI
	var_49_bool = IsFuncExist(var_43_object, var_47_string, var_48_int); // 0x5f4 FuncExist
	var_50_bool = var_49_bool == 0; // 0x5f5 Not
	if(var_50_bool == 0) goto Label_1529; // 0x5f6 JumpB
	var_42_bool = 0; // 0x5f7 MovB
	return 2; // 0x5f8 Return
	
Label_1529:
	HasProperty(var_44_string, var_46_bool); // 0x5f9 ObjFunc
	var_42_bool = var_46_bool; // 0x5fb Mov
	return 2; // 0x5fc Return
}


func_1020(var_2_bool, var_5_object)
{
	var_375_float = 0; var_376_int = 0; var_377_float = 0; var_378_int = 0; // 0x3fc PushV
	var_379_bool = var_2_bool == 0; // 0x3fd Not
	if(var_379_bool == 0) goto Label_1024; // 0x3fe JumpB
	return 4; // 0x3ff Return
	
Label_1024:
	var_380_object = var_5_object; // 0x400 PushT
	if(var_380_object == 0) goto Label_1032; // 0x401 JumpB
	var_381_int = -1; // 0x402 PushI
	var_5_object = var_5_object + var_381_int; // 0x403 Add2
	var_382_int = 0; // 0x404 PushI
	var_383_bool = var_5_object > var_382_int; // 0x405 GT
	if(var_383_bool == 0) goto Label_1032; // 0x406 JumpB
	return 4; // 0x407 Return
	
Label_1032:
	rand(var_377_float); // 0x408 Func
	var_384_float = 0; // 0x40a PushV
	func_1070(var_384_float); // 0x40b NEW_2
	var_385_bool = var_377_float < var_384_float; // 0x40d LT
	if(var_385_bool == 0) goto Label_1051; // 0x40e JumpB
	irand(var_378_int, var_377_float); // 0x40f Func
	var_386_int = 1; // 0x411 PushI
	var_378_int = var_378_int + var_386_int; // 0x412 Add2
	var_387_string = "attack"; // 0x413 PushS
	var_388_int = var_387_string + var_378_int; // 0x414 Add
	Speak(var_388_int); // 0x415 Func
	var_389_int = 0; // 0x417 PushV
	func_1068(var_389_int); // 0x418 NEW_2
	var_5_object = var_389_int; // 0x419 TMov
	
Label_1051:
	return 4; // 0x41b Return
}


func_1533(var_34_bool, var_35_object, var_36_string, var_37_float, var_38_float, var_39_float)
{
	var_40_float = 0; var_41_float = 0; // 0x5fd PushV
	var_42_bool = 0; var_43_object = Obj(); var_44_string = ""; // 0x5fe PushV
	var_43_object = var_35_object; // 0x5ff Mov
	var_44_string = var_36_string; // 0x600 Mov
	func_1521(var_42_bool, var_43_object, var_44_string); // 0x601 NEW_2
	var_51_bool = var_42_bool == 0; // 0x603 Not
	if(var_51_bool == 0) goto Label_1543; // 0x604 JumpB
	var_34_bool = 0; // 0x605 MovB
	return 2; // 0x606 Return
	
Label_1543:
	GetProperty(var_36_string, var_41_float); // 0x607 ObjFunc
	var_52_float = 0; var_53_float = 0; var_54_float = 0; var_55_float = 0; // 0x609 PushV
	var_53_float = var_41_float + var_37_float; // 0x60a Add2
	var_54_float = var_38_float; // 0x60b Mov
	var_55_float = var_39_float; // 0x60c Mov
	func_1910(var_52_float, var_53_float, var_54_float, var_55_float); // 0x60d NEW_2
	SetProperty(var_36_string, var_52_float); // 0x60f ObjFunc
	var_34_bool = 1; // 0x611 MovB
	return 2; // 0x612 Return
}


func_2047()
{
	var_61_object = Obj(); var_62_object = Obj(); // 0x7ff PushV
	GetScene(var_62_object); // 0x800 Func
	var_63_object = Obj(); // 0x802 PushV
	func_1887(var_63_object); // 0x803 NEW_2
	RemoveStationaryActor(var_63_object); // 0x805 ObjFunc
	return 2; // 0x807 Return
}


