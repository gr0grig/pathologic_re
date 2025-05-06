task_0_event_0(var_0_object, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_bool, var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0; // 0x1b PushV
	IsOverrideActive(var_14_bool); // 0x1c Func
	var_15_bool = var_14_bool == 0; // 0x1e Not
	if(var_15_bool == 0) goto Label_36; // 0x1f JumpB
	var_16_object = Obj(); // 0x20 PushV
	var_16_object = var_12_bool; // 0x21 Mov
	func_2040(var_16_object); // 0x22 NEW_2
	
Label_36:
	return 2; // 0x24 Return
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_object, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_bool, var_15_bool)
{
	return 0; // 0x9b Return
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_bool, var_13_bool)
{
	return 0; // 0x9d Return
}


task_0_event_41(var_0_object, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_bool, var_12_bool)
{
	return 0; // 0x9f Return
}


task_1_event_17(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_bool, var_12_bool)
{
	var_13_object = Obj(); // 0xa1 PushV
	var_13_object = var_12_bool; // 0xa2 Mov
	func_2344(var_13_object); // 0xa3 NEW_2
	return 0; // 0xa5 Return
}


task_1_event_7(var_0_bool, var_1_object, var_2_bool, var_3_int, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_bool, var_12_bool)
{
	var_13_int = 1; // 0xd8 PushI
	var_14_bool = var_12_bool == var_13_int; // 0xd9 Eq
	if(var_14_bool == 0) goto Label_224; // 0xda JumpB
	var_15_object = Obj(); // 0xdb PushV
	var_15_object = var_1_object; // 0xdc MovT
	func_2014(var_15_object); // 0xdd NEW_2
	goto Label_228; // 0xdf Jump
	
Label_228:
	return 0; // 0xe4 Return
	
Label_224:
	var_20_int = 0; // 0xe0 PushV
	var_20_int = var_12_bool; // 0xe1 Mov
	func_373(var_11_bool, var_12_bool, var_20_int); // 0xe2 NEW_2
}


task_1_event_1(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_bool, var_12_bool)
{
	var_13_bool = 0; // 0xf3 PushV
	var_13_bool = 0; // 0xf4 MovB
	var_14_bool = var_1_object == var_12_bool; // 0xf5 Eq
	if(var_14_bool == 0) goto Label_250; // 0xf6 JumpB
	var_15_bool = var_2_bool == 0; // 0xf7 Not
	if(var_15_bool == 0) goto Label_250; // 0xf8 JumpB
	var_13_bool = 1; // 0xf9 MovB
	
Label_250:
	if(var_13_bool == 0) goto Label_256; // 0xfa JumpB
	var_2_bool = 1; // 0xfb TMovB
	var_16_object = Obj(); // 0xfc PushV
	var_16_object = var_12_bool; // 0xfd Mov
	func_1829(var_16_object); // 0xfe NEW_2
	
Label_256:
	return 0; // 0x100 Return
}


task_1_event_2(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_bool, var_12_bool)
{
	var_13_bool = 0; // 0x102 PushV
	var_13_bool = 0; // 0x103 MovB
	var_14_bool = var_1_object == var_12_bool; // 0x104 Eq
	if(var_14_bool == 0) goto Label_265; // 0x105 JumpB
	var_15_bool = var_2_bool; // 0x106 PushT
	if(var_15_bool == 0) goto Label_265; // 0x107 JumpB
	var_13_bool = 1; // 0x108 MovB
	
Label_265:
	if(var_13_bool == 0) goto Label_270; // 0x109 JumpB
	var_2_bool = 0; // 0x10a TMovB
	var_16_string = "head"; // 0x10b PushS
	UnlookAsync(var_16_string); // 0x10c Func
	
Label_270:
	return 0; // 0x10e Return
}


task_1_event_10(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_bool, var_12_bool)
{
	RequestClearPath(var_12_bool); // 0x188 Func
	return 0; // 0x18a Return
}


task_1_event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_bool, var_12_bool)
{
	func_229(var_12_bool); // 0x194 NEW_2
	var_17_object = Obj(); // 0x196 PushV
	var_17_object = var_12_bool; // 0x197 Mov
	func_2243(); // 0x198 NEW_2
	return 0; // 0x19a Return
}


task_2_event_17(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_bool)
{
	var_13_object = Obj(); // 0x1b5 PushV
	var_13_object = var_12_bool; // 0x1b6 Mov
	func_2344(var_13_object); // 0x1b7 NEW_2
	return 0; // 0x1b9 Return
}


task_3_event_1(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_bool, var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); // 0x4bd PushV
	var_14_object = var_12_object; // 0x4be Mov
	func_2320(var_13_bool, var_14_object); // 0x4bf NEW_2
	if(var_13_bool == 0) goto Label_1225; // 0x4c1 JumpB
	func_1331(var_11_bool, var_12_object); // 0x4c3 NEW_2
	var_23_object = Obj(); // 0x4c5 PushV
	var_23_object = var_12_object; // 0x4c6 Mov
	func_2327(var_23_object); // 0x4c7 NEW_2
	
Label_1225:
	return 0; // 0x4c9 Return
}


task_3_event_3(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_bool, var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); // 0x4cb PushV
	var_14_object = var_12_object; // 0x4cc Mov
	func_2292(var_13_bool, var_14_object); // 0x4cd NEW_2
	if(var_13_bool == 0) goto Label_1239; // 0x4cf JumpB
	func_1331(var_11_bool, var_12_object); // 0x4d1 NEW_2
	var_37_object = Obj(); // 0x4d3 PushV
	var_37_object = var_12_object; // 0x4d4 Mov
	func_2314(var_37_object); // 0x4d5 NEW_2
	
Label_1239:
	return 0; // 0x4d7 Return
}


task_3_event_17(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_bool, var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); // 0x4d9 PushV
	var_14_object = var_12_object; // 0x4da Mov
	func_1663(var_13_bool, var_14_object); // 0x4db NEW_2
	var_47_bool = var_13_bool == 0; // 0x4dd Not
	if(var_47_bool == 0) goto Label_1252; // 0x4de JumpB
	var_48_object = Obj(); // 0x4df PushV
	var_48_object = var_12_object; // 0x4e0 Mov
	func_2344(var_48_object); // 0x4e1 NEW_2
	return 0; // 0x4e3 Return
	
Label_1252:
	func_1331(var_11_bool, var_12_object); // 0x4e5 NEW_2
	var_55_object = Obj(); // 0x4e7 PushV
	var_55_object = var_12_object; // 0x4e8 Mov
	func_2357(var_55_object); // 0x4e9 NEW_2
	return 0; // 0x4eb Return
}


task_3_event_10(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_bool, var_11_bool, var_12_object)
{
	RequestClearPath(var_12_object); // 0x52d Func
	return 0; // 0x52f Return
}


task_3_event_28(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_bool, var_11_bool)
{
	Stop(); // 0x530 Func
	return 0; // 0x532 Return
}


task_3_event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_bool, var_11_bool, var_12_object)
{
	func_1331(var_11_bool, var_12_object); // 0x53c NEW_2
	var_13_object = Obj(); // 0x53e PushV
	var_13_object = var_12_object; // 0x53f Mov
	func_2243(); // 0x540 NEW_2
	return 0; // 0x542 Return
}


task_4_event_1(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_bool, var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); // 0x54c PushV
	var_14_object = var_12_object; // 0x54d Mov
	func_2320(var_13_bool, var_14_object); // 0x54e NEW_2
	if(var_13_bool == 0) goto Label_1368; // 0x550 JumpB
	func_1484(); // 0x552 NEW_2
	var_23_object = Obj(); // 0x554 PushV
	var_23_object = var_12_object; // 0x555 Mov
	func_2327(var_23_object); // 0x556 NEW_2
	
Label_1368:
	return 0; // 0x558 Return
}


task_4_event_3(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_bool, var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); // 0x55a PushV
	var_14_object = var_12_object; // 0x55b Mov
	func_2292(var_13_bool, var_14_object); // 0x55c NEW_2
	if(var_13_bool == 0) goto Label_1382; // 0x55e JumpB
	func_1484(); // 0x560 NEW_2
	var_37_object = Obj(); // 0x562 PushV
	var_37_object = var_12_object; // 0x563 Mov
	func_2314(var_37_object); // 0x564 NEW_2
	
Label_1382:
	return 0; // 0x566 Return
}


task_4_event_17(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_bool, var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); // 0x568 PushV
	var_14_object = var_12_object; // 0x569 Mov
	func_1663(var_13_bool, var_14_object); // 0x56a NEW_2
	var_47_bool = var_13_bool == 0; // 0x56c Not
	if(var_47_bool == 0) goto Label_1395; // 0x56d JumpB
	var_48_object = Obj(); // 0x56e PushV
	var_48_object = var_12_object; // 0x56f Mov
	func_2344(var_48_object); // 0x570 NEW_2
	return 0; // 0x572 Return
	
Label_1395:
	func_1484(); // 0x574 NEW_2
	var_55_object = Obj(); // 0x576 PushV
	var_55_object = var_12_object; // 0x577 Mov
	func_2357(var_55_object); // 0x578 NEW_2
	return 0; // 0x57a Return
}


event_22(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_float, var_15_float)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0; // 0x8a5 PushV
	var_16_object = var_12_object; // 0x8a6 Mov
	var_17_int = var_13_int; // 0x8a7 Mov
	var_18_float = var_14_float; // 0x8a8 Mov
	func_1731(var_16_object, var_17_int, var_18_float); // 0x8a9 NEW_2
	return 0; // 0x8ab Return
}


event_43(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_float, var_15_float, var_16_cvector, var_17_cvector)
{
	var_18_object = Obj(); var_19_int = 0; var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); // 0x8ad PushV
	var_18_object = var_12_object; // 0x8ae Mov
	var_19_int = var_13_int; // 0x8af Mov
	var_20_float = var_14_float; // 0x8b0 Mov
	var_21_cvector = var_16_cvector; // 0x8b1 Mov
	var_22_cvector = var_17_cvector; // 0x8b2 Mov
	func_1799(var_20_float, var_21_cvector, var_22_cvector); // 0x8b3 NEW_2
	return 0; // 0x8b5 Return
}


event_16(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_bool, var_11_bool, var_12_object, var_13_string)
{
	var_14_float = 0; var_15_float = 0; // 0x8b6 PushV
	var_16_string = "health"; // 0x8b7 PushS
	var_17_bool = var_13_string == var_16_string; // 0x8b8 Eq
	if(var_17_bool == 0) goto Label_2242; // 0x8b9 JumpB
	var_18_string = "health"; // 0x8ba PushS
	GetProperty(var_18_string, var_15_float); // 0x8bb Func
	var_19_int = 0; // 0x8bd PushI
	var_20_bool = var_15_float <= var_19_int; // 0x8be LE
	if(var_20_bool == 0) goto Label_2242; // 0x8bf JumpB
	SignalDeath(var_12_object); // 0x8c0 Func
	
Label_2242:
	return 2; // 0x8c2 Return
}


event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_bool, var_11_bool, var_12_object)
{
	var_13_object = Obj(); // 0x8c4 PushV
	var_13_object = var_12_object; // 0x8c5 Mov
	func_2172(var_13_object); // 0x8c6 NEW_2
	return 0; // 0x8c8 Return
}


main(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_bool, var_11_bool)
{
	func_2273(); // 0x4b5 NEW_2
	
Label_1207:
	func_1260(var_10_bool, var_11_bool); // 0x4b8 NEW_2
	goto Label_1207; // 0x4ba Jump
}


func_0(var_71_object)
{
	func_2125(); // 0x2 NEW_2
	func_2101(); // 0x5 NEW_2
	var_137_object = Obj(); // 0x7 PushV
	var_137_object = var_71_object; // 0x8 Mov
	func_12(var_137_object); // 0x9 NEW_2
	return 0; // 0xb Return
}


func_2053(var_77_int, var_78_int)
{
	var_79_int = 0; var_80_bool = 0; var_81_int = 0; var_82_bool = 0; // 0x805 PushV
	var_83_bool = var_77_int > var_78_int; // 0x806 GT
	if(var_83_bool == 0) goto Label_2060; // 0x807 JumpB
	var_84_string = "GenerateMoney: iMin > iMax"; // 0x808 PushS
	Trace(var_84_string); // 0x809 Func
	return 4; // 0x80b Return
	
Label_2060:
	var_81_int = 0; // 0x80c MovI
	var_85_bool = var_77_int != var_78_int; // 0x80d Neq
	if(var_85_bool == 0) goto Label_2067; // 0x80e JumpB
	var_86_int = var_78_int - var_77_int; // 0x80f Sub
	irand(var_81_int, var_86_int); // 0x810 Func
	goto Label_2071; // 0x812 Jump
	
Label_2071:
	var_81_int = var_81_int + var_77_int; // 0x817 Add2
	var_87_int = 0; // 0x818 PushI
	var_88_bool = var_81_int == var_87_int; // 0x819 Eq
	if(var_88_bool == 0) goto Label_2076; // 0x81a JumpB
	return 4; // 0x81b Return
	
Label_2076:
	var_89_int = 0; var_90_string = ""; // 0x81c PushV
	var_90_string = "Money"; // 0x81d MovS
	func_2167(var_89_int, var_90_string); // 0x81e NEW_2
	var_93_int = 0; // 0x820 PushI
	AddItem(var_82_bool, var_89_int, var_93_int, var_81_int); // 0x821 Func
	return 4; // 0x823 Return
	
Label_2067:
	var_94_int = 0; // 0x813 PushI
	var_95_bool = var_77_int == var_94_int; // 0x814 Eq
	if(var_95_bool == 0) goto Label_2071; // 0x815 JumpB
	return 4; // 0x816 Return
}


func_12(var_137_object)
{
	EventDisable(0); // 0xd EventDisable
	var_138_object = Obj(); // 0xe PushV
	var_138_object = var_137_object; // 0xf Mov
	func_37(var_138_object); // 0x10 NEW_2
	var_218_int = 50; // 0x12 PushI
	var_219_int = 40; // 0x13 PushI
	SetRTEnvelope(var_218_int, var_219_int); // 0x14 Func
	EventEnable(0); // 0x16 EventEnable
	
Label_23:
	Hold(); // 0x17 Func
	goto Label_23; // 0x19 Jump
}


func_1549(var_406_float, var_407_object, var_408_float, var_409_int)
{
	var_413_int = 0; var_414_string = ""; var_415_int = 0; var_416_float = 0; var_417_float = 0; var_418_float = 0; var_419_int = 0; var_420_string = ""; var_421_int = 0; var_422_float = 0; var_423_float = 0; var_424_float = 0; // 0x60d PushV
	var_425_bool = 0; var_426_object = Obj(); var_427_string = ""; // 0x60e PushV
	var_426_object = var_407_object; // 0x60f Mov
	var_427_string = "health"; // 0x610 MovS
	func_1515(var_425_bool, var_426_object, var_427_string); // 0x611 NEW_2
	var_428_bool = var_425_bool == 0; // 0x613 Not
	if(var_428_bool == 0) goto Label_1559; // 0x614 JumpB
	var_406_float = 0.0; // 0x615 MovF
	return 12; // 0x616 Return
	
Label_1559:
	var_429_bool = 0; var_430_object = Obj(); var_431_string = ""; // 0x617 PushV
	var_430_object = var_407_object; // 0x618 Mov
	var_431_string = "armor"; // 0x619 MovS
	func_1515(var_429_bool, var_430_object, var_431_string); // 0x61a NEW_2
	var_432_bool = var_429_bool == 0; // 0x61c Not
	if(var_432_bool == 0) goto Label_1568; // 0x61d JumpB
	var_419_int = 0; // 0x61e MovI
	goto Label_1571; // 0x61f Jump
	
Label_1571:
	var_433_string = "armor_"; // 0x623 PushS
	var_434_string = ""; var_435_int = 0; // 0x624 PushV
	var_435_int = var_409_int; // 0x625 Mov
	func_1489(var_434_string, var_435_int); // 0x626 NEW_2
	var_420_string = var_433_string + var_434_string; // 0x628 Add2
	var_440_bool = 0; var_441_object = Obj(); var_442_string = ""; // 0x629 PushV
	var_441_object = var_407_object; // 0x62a Mov
	var_442_string = var_420_string; // 0x62b Mov
	func_1515(var_440_bool, var_441_object, var_442_string); // 0x62c NEW_2
	var_443_bool = var_440_bool == 0; // 0x62e Not
	if(var_443_bool == 0) goto Label_1586; // 0x62f JumpB
	var_421_int = 0; // 0x630 MovI
	goto Label_1588; // 0x631 Jump
	
Label_1588:
	var_444_float = 0; var_445_float = 0; var_446_float = 0; // 0x634 PushV
	var_447_int = var_419_int + var_421_int; // 0x635 Add
	var_448_float = 100.0; // 0x636 PushF
	var_445_float = var_447_int / var_447_int; // 0x637 Div2
	var_446_float = 1; // 0x638 MovI
	func_1908(var_444_float, var_445_float, var_446_float); // 0x639 NEW_2
	var_422_float = var_444_float; // 0x63a Mov
	var_450_string = "health"; // 0x63c PushS
	GetProperty(var_450_string, var_423_float); // 0x63d ObjFunc
	var_451_int = 1; // 0x63f PushI
	var_452_int = var_451_int - var_422_float; // 0x640 Sub
	var_424_float = var_408_float * var_452_int; // 0x641 Mult2
	var_453_string = "health"; // 0x642 PushS
	var_454_float = 0; var_455_float = 0; var_456_float = 0; var_457_float = 0; // 0x643 PushV
	var_455_float = var_423_float - var_424_float; // 0x644 Sub2
	var_456_float = 0; // 0x645 MovI
	var_457_float = 1; // 0x646 MovI
	func_1923(var_454_float, var_455_float, var_456_float, var_457_float); // 0x647 NEW_2
	SetProperty(var_453_string, var_454_float); // 0x649 ObjFunc
	var_460_bool = 0; var_461_object = Obj(); // 0x64b PushV
	var_461_object = var_407_object; // 0x64c Mov
	func_1510(var_460_bool, var_461_object); // 0x64d NEW_2
	if(var_460_bool == 0) goto Label_1620; // 0x64f JumpB
	var_462_float = 0; // 0x650 PushV
	var_462_float = -var_424_float; // 0x651 Neg2
	func_1985(var_462_float); // 0x652 NEW_2
	
Label_1620:
	var_406_float = var_424_float; // 0x654 Mov
	return 12; // 0x655 Return
	
Label_1586:
	GetProperty(var_420_string, var_421_int); // 0x632 ObjFunc
	
Label_1568:
	var_466_string = "armor"; // 0x620 PushS
	GetProperty(var_466_string, var_419_int); // 0x621 ObjFunc
}


func_1054(var_0_bool, var_309_bool)
{
	var_310_cvector = CVector(0,0,0); var_311_cvector = CVector(0,0,0); var_312_cvector = CVector(0,0,0); var_313_float = 0; var_314_float = 0; var_315_cvector = CVector(0,0,0); var_316_cvector = CVector(0,0,0); var_317_cvector = CVector(0,0,0); var_318_float = 0; var_319_float = 0; // 0x41e PushV
	var_320_bool = 0; var_321_object = Obj(); // 0x41f PushV
	var_321_object = var_0_bool; // 0x420 MovT
	func_1663(var_320_bool, var_321_object); // 0x421 NEW_2
	var_322_bool = var_320_bool == 0; // 0x423 Not
	if(var_322_bool == 0) goto Label_1063; // 0x424 JumpB
	var_309_bool = 0; // 0x425 MovB
	return 10; // 0x426 Return
	
Label_1063:
	var_323_bool = 0; // 0x427 PushV
	func_1143(var_319_float, var_323_bool); // 0x428 NEW_2
	if(var_323_bool == 0) goto Label_1080; // 0x42a JumpB
	GetPFPosition(var_315_cvector); // 0x42b TObjFunc
	GetPFPosition(var_316_cvector); // 0x42d Func
	var_317_cvector = var_315_cvector - var_316_cvector; // 0x42f Sub2
	var_318_float = var_317_cvector | var_317_cvector; // 0x430 Or2
	GetAttackDistance(var_319_float); // 0x431 TObjFunc
	var_324_int = 50; // 0x433 PushI
	var_319_float = var_319_float + var_324_int; // 0x434 Add2
	var_325_float = var_319_float * var_319_float; // 0x435 Mult
	var_309_bool = var_318_float <= var_325_float; // 0x436 LE2
	return 10; // 0x437 Return
	
Label_1080:
	var_309_bool = 0; // 0x438 MovB
	return 10; // 0x439 Return
}


func_544(var_0_bool, var_3_object, var_5_int, var_66_object, var_67_bool, var_68_float, var_143_bool, var_235_bool)
{
	var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_bool = 0; var_73_bool = 0; var_74_float = 0; var_75_cvector = CVector(0,0,0); var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_bool = 0; var_79_float = 0; var_80_float = 0; var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_bool = 0; var_84_bool = 0; var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_float = 0; var_88_cvector = CVector(0,0,0); var_89_bool = 0; var_90_float = 0; // 0x220 PushV
	func_773(var_88_cvector, var_89_bool, var_90_float); // 0x222 NEW_2
	var_5_int = 0; // 0x224 TMovI
	var_113_string = "@GetAttackDistance"; // 0x225 PushS
	var_114_int = 1; // 0x226 PushI
	var_115_bool = IsFuncExist(var_66_object, var_113_string, var_114_int); // 0x227 FuncExist
	if(var_115_bool == 0) goto Label_558; // 0x228 JumpB
	GetAttackDistance(var_80_float); // 0x229 ObjFunc
	var_116_int = 50; // 0x22b PushI
	var_80_float = var_80_float + var_116_int; // 0x22c Add2
	goto Label_559; // 0x22d Jump
	
Label_559:
	var_117_int = 150; // 0x22f PushI
	var_118_bool = var_80_float >= var_117_int; // 0x230 GE
	if(var_118_bool == 0) goto Label_563; // 0x231 JumpB
	var_80_float = 150; // 0x232 MovI
	
Label_563:
	var_3_object = 0; // 0x233 TMovB
	var_0_bool = var_66_object; // 0x234 TMov
	IsPlayerActor(var_0_bool, var_83_bool); // 0x235 Func
	var_119_bool = var_83_bool; // 0x237 Push
	if(var_119_bool == 0) goto Label_577; // 0x238 JumpB
	var_120_string = "attack"; // 0x239 PushS
	PlayGlobalMusic(var_120_string); // 0x23a Func
	var_121_object = Obj(); // 0x23c PushV
	func_1892(var_121_object); // 0x23d NEW_2
	SendPlayerEnemy(var_66_object, var_121_object); // 0x23f Func
	
Label_577:
	var_124_bool = var_67_bool; // 0x241 Push
	if(var_124_bool == 0) goto Label_581; // 0x242 JumpB
	var_84_bool = 0; // 0x243 MovB
	goto Label_582; // 0x244 Jump
	
Label_582:
	var_125_float = 300.0; // 0x246 PushF
	var_85_float = var_125_float + var_80_float; // 0x247 Add2
	
Label_584:
	var_126_bool = 0; // 0x248 PushV
	var_126_bool = 0; // 0x249 MovB
	var_127_bool = 0; var_128_object = Obj(); // 0x24a PushV
	var_128_object = var_0_bool; // 0x24b MovT
	func_1663(var_127_bool, var_128_object); // 0x24c NEW_2
	if(var_127_bool == 0) goto Label_594; // 0x24e JumpB
	var_129_bool = var_3_object == 0; // 0x24f Not
	if(var_129_bool == 0) goto Label_594; // 0x250 JumpB
	var_126_bool = 1; // 0x251 MovB
	
Label_594:
	if(var_126_bool == 0) goto Label_756; // 0x252 JumpB
	func_1186(var_90_float); // 0x254 NEW_2
	GetPFPosition(var_81_cvector); // 0x256 TObjFunc
	GetPFPosition(var_82_cvector); // 0x258 Func
	var_86_cvector = var_81_cvector - var_82_cvector; // 0x25a Sub2
	var_87_float = var_86_cvector | var_86_cvector; // 0x25b Or2
	var_135_float = var_85_float * var_85_float; // 0x25c Mult
	var_136_bool = var_87_float >= var_135_float; // 0x25d GE
	if(var_136_bool == 0) goto Label_622; // 0x25e JumpB
	var_137_bool = 0; var_138_object = Obj(); var_139_float = 0; var_140_float = 0; var_141_bool = 0; var_142_bool = 0; // 0x25f PushV
	var_138_object = var_0_bool; // 0x260 MovT
	var_139_float = var_80_float; // 0x261 Mov
	var_140_float = 3000.0; // 0x262 MovF
	var_141_bool = 1; // 0x263 MovB
	var_142_bool = 0; // 0x264 MovB
	TaskCall(1); // 0x265 TaskCall
	func_166(var_145_bool, var_137_bool, var_138_object, var_139_float, var_140_float, var_141_bool, var_142_bool); // 0x266 NEW_2
	TaskReturn(); // 0x267 TaskReturn
	var_220_bool = var_143_bool == 0; // 0x269 Not
	if(var_220_bool == 0) goto Label_620; // 0x26a JumpB
	goto Label_756; // 0x26b Jump
	
Label_756:
	WaitForAnimEnd(); // 0x2f4 Func
	var_221_object = var_3_object; // 0x2f6 PushT
	if(var_221_object == 0) goto Label_761; // 0x2f7 JumpB
	return 22; // 0x2f8 Return
	
Label_761:
	var_222_string = "all"; // 0x2f9 PushS
	var_223_string = "attack_off"; // 0x2fa PushS
	PlayAnimation(var_222_string, var_223_string); // 0x2fb Func
	WaitForAnimEnd(); // 0x2fd Func
	var_224_bool = var_83_bool; // 0x2ff Push
	if(var_224_bool == 0) goto Label_772; // 0x300 JumpB
	var_225_float = 2.0; // 0x301 PushF
	Sleep(var_225_float); // 0x302 Func
	
Label_772:
	return 22; // 0x304 Return
	
Label_620:
	var_84_bool = 0; // 0x26c MovB
	goto Label_755; // 0x26d Jump
	
Label_755:
	goto Label_584; // 0x2f3 Jump
	
Label_622:
	var_226_float = var_68_float * var_68_float; // 0x26e Mult
	var_227_bool = var_87_float >= var_226_float; // 0x26f GE
	if(var_227_bool == 0) goto Label_747; // 0x270 JumpB
	GetPFPosition(var_88_cvector); // 0x271 TObjFunc
	CanReachByPF(var_89_bool, var_88_cvector); // 0x273 Func
	var_228_bool = var_89_bool == 0; // 0x275 Not
	if(var_228_bool == 0) goto Label_646; // 0x276 JumpB
	var_229_bool = 0; var_230_object = Obj(); var_231_float = 0; var_232_float = 0; var_233_bool = 0; var_234_bool = 0; // 0x277 PushV
	var_230_object = var_0_bool; // 0x278 MovT
	var_231_float = var_80_float; // 0x279 Mov
	var_232_float = 3000.0; // 0x27a MovF
	var_233_bool = 1; // 0x27b MovB
	var_234_bool = 0; // 0x27c MovB
	TaskCall(1); // 0x27d TaskCall
	func_166(var_237_bool, var_229_bool, var_230_object, var_231_float, var_232_float, var_233_bool, var_234_bool); // 0x27e NEW_2
	TaskReturn(); // 0x27f TaskReturn
	var_238_bool = var_235_bool == 0; // 0x281 Not
	if(var_238_bool == 0) goto Label_644; // 0x282 JumpB
	goto Label_756; // 0x283 Jump
	
Label_644:
	var_84_bool = 0; // 0x284 MovB
	goto Label_584; // 0x285 Jump
	
Label_646:
	var_239_bool = var_84_bool == 0; // 0x286 Not
	if(var_239_bool == 0) goto Label_671; // 0x287 JumpB
	var_240_object = Obj(); // 0x288 PushV
	var_240_object = var_0_bool; // 0x289 MovT
	func_1813(); // 0x28a NEW_2
	var_249_string = "all"; // 0x28c PushS
	var_250_string = "attack_on"; // 0x28d PushS
	PlayAnimation(var_249_string, var_250_string); // 0x28e Func
	WaitForAnimEnd(); // 0x290 Func
	func_1186(var_90_float); // 0x293 NEW_2
	StopAsync(); // 0x295 Func
	var_84_bool = 1; // 0x297 MovB
	var_251_bool = 0; var_252_object = Obj(); // 0x298 PushV
	var_252_object = var_0_bool; // 0x299 MovT
	func_1663(var_251_bool, var_252_object); // 0x29a NEW_2
	var_253_bool = var_251_bool == 0; // 0x29c Not
	if(var_253_bool == 0) goto Label_671; // 0x29d JumpB
	goto Label_756; // 0x29e Jump
	
Label_671:
	rand(var_90_float); // 0x29f Func
	var_254_bool = 0; // 0x2a1 PushV
	var_254_bool = 1; // 0x2a2 MovB
	var_255_float = 0.6; // 0x2a3 PushF
	var_256_bool = var_90_float < var_255_float; // 0x2a4 LT
	if(var_256_bool == 0) goto Label_683; // 0x2a5 JumpB
	var_257_bool = 0; // 0x2a6 PushV
	func_1143(var_254_bool, var_257_bool); // 0x2a7 NEW_2
	if(var_257_bool == 0) goto Label_683; // 0x2a9 JumpB
	var_254_bool = 0; // 0x2aa MovB
	
Label_683:
	if(var_254_bool == 0) goto Label_700; // 0x2ab JumpB
	Face(var_0_bool); // 0x2ac Func
	func_1193(); // 0x2af NEW_2
	var_292_string = "all"; // 0x2b1 PushS
	var_293_string = "attack_stay"; // 0x2b2 PushS
	PlayAnimation(var_292_string, var_293_string); // 0x2b3 Func
	var_294_bool = 0; var_295_float = 0; // 0x2b5 PushV
	var_295_float = var_68_float; // 0x2b6 Mov
	func_1011(var_90_float, var_294_bool, var_295_float); // 0x2b7 NEW_2
	StopAsync(); // 0x2b9 Func
	goto Label_746; // 0x2bb Jump
	
Label_746:
	goto Label_755; // 0x2ea Jump
	
Label_700:
	Face(var_0_bool); // 0x2bc Func
	var_581_string = "all"; // 0x2be PushS
	var_582_string = "fjump"; // 0x2bf PushS
	PlayAnimation(var_581_string, var_582_string); // 0x2c0 Func
	WaitForAnimEnd(); // 0x2c2 Func
	func_1186(var_90_float); // 0x2c5 NEW_2
	var_583_cvector = CVector(0.0, 0.0, 0.0); // 0x2c7 PushVec
	SetSpeed(var_583_cvector); // 0x2c8 Func
	Stop(); // 0x2ca Func
	StopAsync(); // 0x2cc Func
	var_584_bool = 0; // 0x2ce PushV
	func_1143(var_90_float, var_584_bool); // 0x2cf NEW_2
	var_585_bool = var_584_bool == 0; // 0x2d1 Not
	if(var_585_bool == 0) goto Label_746; // 0x2d2 JumpB
	var_586_bool = 0; var_587_object = Obj(); // 0x2d3 PushV
	var_587_object = var_0_bool; // 0x2d4 MovT
	func_1663(var_586_bool, var_587_object); // 0x2d5 NEW_2
	var_588_bool = var_586_bool == 0; // 0x2d7 Not
	if(var_588_bool == 0) goto Label_730; // 0x2d8 JumpB
	goto Label_756; // 0x2d9 Jump
	
Label_730:
	GetPFPosition(var_81_cvector); // 0x2da TObjFunc
	GetPFPosition(var_82_cvector); // 0x2dc Func
	var_86_cvector = var_81_cvector - var_82_cvector; // 0x2de Sub2
	var_87_float = var_86_cvector | var_86_cvector; // 0x2df Or2
	var_589_float = var_68_float * var_68_float; // 0x2e0 Mult
	var_590_bool = var_87_float < var_589_float; // 0x2e1 LT
	if(var_590_bool == 0) goto Label_746; // 0x2e2 JumpB
	var_591_bool = 0; var_592_float = 0; // 0x2e3 PushV
	var_592_float = var_68_float; // 0x2e4 Mov
	func_847(var_90_float, var_591_bool, var_592_float); // 0x2e5 NEW_2
	var_593_bool = var_591_bool == 0; // 0x2e7 Not
	if(var_593_bool == 0) goto Label_746; // 0x2e8 JumpB
	goto Label_756; // 0x2e9 Jump
	
Label_747:
	var_594_bool = 0; var_595_float = 0; // 0x2eb PushV
	var_595_float = var_68_float; // 0x2ec Mov
	func_847(var_90_float, var_594_bool, var_595_float); // 0x2ed NEW_2
	var_596_bool = var_594_bool == 0; // 0x2ef Not
	if(var_596_bool == 0) goto Label_754; // 0x2f0 JumpB
	goto Label_756; // 0x2f1 Jump
	
Label_754:
	var_84_bool = 1; // 0x2f2 MovB
	
Label_581:
	var_84_bool = 1; // 0x245 MovB
	
Label_558:
	var_80_float = var_68_float; // 0x22e Mov
}


func_2084(var_123_string)
{
	var_124_object = Obj(); var_125_int = 0; var_126_bool = 0; var_127_object = Obj(); var_128_int = 0; var_129_bool = 0; // 0x824 PushV
	CreateInvItem(var_127_object); // 0x825 Func
	SetItemName(var_123_string); // 0x827 ObjFunc
	var_130_string = "Organ"; // 0x829 PushS
	var_131_int = 1; // 0x82a PushI
	SetProperty(var_130_string, var_131_int); // 0x82b ObjFunc
	GetItemID(var_128_int); // 0x82d ObjFunc
	var_132_int = 0; // 0x82f PushI
	var_133_int = 1; // 0x830 PushI
	AddItem(var_129_bool, var_127_object, var_132_int, var_133_int); // 0x831 Func
	return 6; // 0x833 Return
}


func_37(var_138_object)
{
	var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_cvector = CVector(0,0,0); var_143_string = ""; var_144_object = Obj(); var_145_bool = 0; var_146_bool = 0; var_147_float = 0; var_148_cvector = CVector(0,0,0); var_149_cvector = CVector(0,0,0); var_150_cvector = CVector(0,0,0); var_151_cvector = CVector(0,0,0); var_152_cvector = CVector(0,0,0); var_153_string = ""; var_154_object = Obj(); var_155_bool = 0; var_156_bool = 0; var_157_float = 0; var_158_cvector = CVector(0,0,0); // 0x25 PushV
	var_159_bool = var_138_object == 0; // 0x26 NullEq
	if(var_159_bool == 0) goto Label_45; // 0x27 JumpB
	var_160_string = ""; // 0x28 PushV
	var_160_string = "fdie"; // 0x29 MovS
	func_128(var_160_string); // 0x2a NEW_2
	goto Label_127; // 0x2c Jump
	
Label_127:
	return 20; // 0x7f Return
	
Label_45:
	GetPosition(var_149_cvector); // 0x2d ObjFunc
	GetPosition(var_150_cvector); // 0x2f Func
	GetDirection(var_151_cvector); // 0x31 Func
	var_152_cvector = var_150_cvector - var_149_cvector; // 0x33 Sub2
	var_192_float = GetByIndex(var_152_cvector, 0); // 0x34 PushE
	var_193_float = GetByIndex(var_151_cvector, 0); // 0x35 PushE
	var_194_float = var_192_float * var_193_float; // 0x36 Mult
	var_195_float = GetByIndex(var_152_cvector, 2); // 0x37 PushE
	var_196_float = GetByIndex(var_151_cvector, 2); // 0x38 PushE
	var_197_float = var_195_float * var_196_float; // 0x39 Mult
	var_198_int = var_194_float + var_197_float; // 0x3a Add
	var_199_int = 0; // 0x3b PushI
	var_200_bool = var_198_int >= var_199_int; // 0x3c GE
	if(var_200_bool == 0) goto Label_64; // 0x3d JumpB
	var_153_string = "fdie"; // 0x3e MovS
	goto Label_65; // 0x3f Jump
	
Label_65:
	RemoveRTEnvelope(); // 0x41 Func
	SetDeathState(); // 0x43 Func
	Stop(); // 0x45 Func
	StopAsync(); // 0x47 Func
	var_154_object = var_138_object; // 0x49 Mov
	var_201_string = "GetScriptProperty"; // 0x4a PushS
	var_202_int = 2; // 0x4b PushI
	var_203_bool = IsFuncExist(var_138_object, var_201_string, var_202_int); // 0x4c FuncExist
	if(var_203_bool == 0) goto Label_89; // 0x4d JumpB
	var_204_string = "Owner"; // 0x4e PushS
	HasScriptProperty(var_155_bool, var_204_string); // 0x4f ObjFunc
	var_205_bool = var_155_bool; // 0x51 Push
	if(var_205_bool == 0) goto Label_89; // 0x52 JumpB
	var_206_string = "Owner"; // 0x53 PushS
	GetScriptProperty(var_154_object, var_206_string); // 0x54 ObjFunc
	var_207_bool = var_154_object == 0; // 0x56 NullEq
	if(var_207_bool == 0) goto Label_89; // 0x57 JumpB
	var_154_object = var_138_object; // 0x58 Mov
	
Label_89:
	var_208_string = "@GetEyesHeight"; // 0x59 PushS
	var_209_int = 1; // 0x5a PushI
	var_210_bool = IsFuncExist(var_154_object, var_208_string, var_209_int); // 0x5b FuncExist
	if(var_210_bool == 0) goto Label_104; // 0x5c JumpB
	GetEyesHeight(var_157_float); // 0x5d ObjFunc
	var_158_cvector = CVector(0.0, 0.0, 0.0); // 0x5f MovV
	var_211_float = GetByIndex(var_158_cvector, 1); // 0x60 PushE
	var_211_float = var_157_float; // 0x61 Mov
	SetByIndex(var_158_cvector, 1) = var_211_float; // 0x62 PopE
	var_212_string = "head"; // 0x63 PushS
	LookAsync(var_138_object, var_212_string, var_158_cvector); // 0x64 Func
	var_156_bool = 1; // 0x66 MovB
	goto Label_105; // 0x67 Jump
	
Label_105:
	var_213_string = ""; // 0x69 PushV
	var_213_string = var_153_string; // 0x6a Mov
	func_1851(var_213_string); // 0x6b NEW_2
	var_214_string = "all"; // 0x6d PushS
	PlayAnimation(var_214_string, var_153_string); // 0x6e Func
	WaitForAnimEnd(); // 0x70 Func
	var_215_bool = var_156_bool; // 0x72 Push
	if(var_215_bool == 0) goto Label_121; // 0x73 JumpB
	StopAsync(); // 0x74 Func
	var_216_string = "head"; // 0x76 PushS
	UnlookAsync(var_216_string); // 0x77 Func
	
Label_121:
	var_217_string = "all"; // 0x79 PushS
	LockAnimationEnd(var_217_string, var_153_string); // 0x7a Func
	RemoveEnvelope(); // 0x7c Func
	var_154_object = 0; // 0x7e SetNull
	
Label_104:
	var_156_bool = 0; // 0x68 MovB
	
Label_64:
	var_153_string = "bdie"; // 0x40 MovS
}


func_2101()
{
	var_120_int = 0; // 0x835 PushV
	func_2034(var_120_int); // 0x836 NEW_2
	var_121_int = 1; // 0x838 PushI
	var_122_bool = var_120_int != var_121_int; // 0x839 Neq
	if(var_122_bool == 0) goto Label_2108; // 0x83a JumpB
	return 0; // 0x83b Return
	
Label_2108:
	var_123_string = ""; // 0x83c PushV
	var_123_string = "liver"; // 0x83d MovS
	func_2084(var_123_string); // 0x83e NEW_2
	var_134_string = ""; // 0x840 PushV
	var_134_string = "kidney"; // 0x841 MovS
	func_2084(var_134_string); // 0x842 NEW_2
	var_135_string = ""; // 0x844 PushV
	var_135_string = "heart"; // 0x845 MovS
	func_2084(var_135_string); // 0x846 NEW_2
	var_136_string = ""; // 0x848 PushV
	var_136_string = "blood"; // 0x849 MovS
	func_2084(var_136_string); // 0x84a NEW_2
	return 0; // 0x84c Return
}


func_1082(var_307_bool)
{
	var_308_bool = 0; // 0x43a PushV
	var_308_bool = 0; // 0x43b MovB
	var_309_bool = 0; // 0x43c PushV
	func_1054(var_308_bool, var_309_bool); // 0x43d NEW_2
	if(var_309_bool == 0) goto Label_1093; // 0x43f JumpB
	var_326_bool = 0; // 0x440 PushV
	func_1098(var_307_bool, var_308_bool, var_326_bool); // 0x441 NEW_2
	if(var_326_bool == 0) goto Label_1093; // 0x443 JumpB
	var_308_bool = 1; // 0x444 MovB
	
Label_1093:
	if(var_308_bool == 0) goto Label_1096; // 0x445 JumpB
	var_307_bool = 1; // 0x446 MovB
	return 0; // 0x447 Return
	
Label_1096:
	var_307_bool = 0; // 0x448 MovB
	return 0; // 0x449 Return
}


func_1098(var_0_bool, var_4_int, var_326_bool)
{
	var_327_object = Obj(); var_328_bool = 0; var_329_float = 0; var_330_cvector = CVector(0,0,0); var_331_cvector = CVector(0,0,0); var_332_object = Obj(); var_333_bool = 0; var_334_float = 0; var_335_cvector = CVector(0,0,0); var_336_cvector = CVector(0,0,0); // 0x44a PushV
	GetScene(var_332_object); // 0x44b Func
	var_333_bool = 0; // 0x44d MovB
	
Label_1102:
	var_337_cvector = CVector(0,0,0); var_338_object = Obj(); // 0x44e PushV
	var_338_object = var_0_bool; // 0x44f MovT
	func_1503(var_338_object); // 0x450 NEW_2
	var_343_int = -var_337_cvector; // 0x452 Neg
	FindDirLength(var_334_float, var_343_int, var_334_float); // 0x453 Func
	var_344_bool = var_334_float < var_4_int; // 0x455 LT
	if(var_344_bool == 0) goto Label_1112; // 0x456 JumpB
	goto Label_1140; // 0x457 Jump
	
Label_1140:
	var_326_bool = var_333_bool; // 0x474 Mov
	return 10; // 0x475 Return
	
Label_1112:
	Face(var_0_bool); // 0x458 Func
	var_345_string = "all"; // 0x45a PushS
	var_346_string = "bjump"; // 0x45b PushS
	PlayAnimation(var_345_string, var_346_string); // 0x45c Func
	GetPFPosition(var_335_cvector); // 0x45e TObjFunc
	GetPFPosition(var_336_cvector); // 0x460 Func
	WaitForAnimEnd(); // 0x462 Func
	func_1186(var_336_cvector); // 0x465 NEW_2
	StopAsync(); // 0x467 Func
	var_347_cvector = CVector(0.0, 0.0, 0.0); // 0x469 PushVec
	SetSpeed(var_347_cvector); // 0x46a Func
	var_333_bool = 1; // 0x46c MovB
	var_348_bool = 0; // 0x46d PushV
	func_1054(var_336_cvector, var_348_bool); // 0x46e NEW_2
	var_349_bool = var_348_bool == 0; // 0x470 Not
	if(var_349_bool == 0) goto Label_1139; // 0x471 JumpB
	goto Label_1140; // 0x472 Jump
	
Label_1139:
	goto Label_1102; // 0x473 Jump
}


func_2125()
{
	var_72_int = 0; var_73_bool = 0; var_74_int = 0; var_75_bool = 0; // 0x84d PushV
	var_76_int = 0; // 0x84e PushI
	ClearSubContainer(var_76_int); // 0x84f Func
	var_77_int = 0; var_78_int = 0; // 0x851 PushV
	var_77_int = 200; // 0x852 MovI
	var_78_int = 500; // 0x853 MovI
	func_2053(var_77_int, var_78_int); // 0x854 NEW_2
	var_96_string = ""; var_97_int = 0; var_98_int = 0; // 0x856 PushV
	var_96_string = "revolver_ammo"; // 0x857 MovS
	var_97_int = 1; // 0x858 MovI
	var_98_int = 80; // 0x859 MovI
	func_1840(var_96_string, var_97_int, var_98_int); // 0x85a NEW_2
	var_107_string = ""; var_108_int = 0; var_109_int = 0; // 0x85c PushV
	var_107_string = "samopal_ammo"; // 0x85d MovS
	var_108_int = 1; // 0x85e MovI
	var_109_int = 80; // 0x85f MovI
	func_1840(var_107_string, var_108_int, var_109_int); // 0x860 NEW_2
	var_110_string = ""; var_111_int = 0; var_112_int = 0; // 0x862 PushV
	var_110_string = "rifle_ammo"; // 0x863 MovS
	var_111_int = 1; // 0x864 MovI
	var_112_int = 80; // 0x865 MovI
	func_1840(var_110_string, var_111_int, var_112_int); // 0x866 NEW_2
	var_113_string = ""; var_114_int = 0; var_115_int = 0; // 0x868 PushV
	var_113_string = "lockpick"; // 0x869 MovS
	var_114_int = 1; // 0x86a MovI
	var_115_int = 80; // 0x86b MovI
	func_1840(var_113_string, var_114_int, var_115_int); // 0x86c NEW_2
	var_116_int = 0; var_117_string = ""; // 0x86e PushV
	var_117_string = "hunter_mark"; // 0x86f MovS
	func_2167(var_116_int, var_117_string); // 0x870 NEW_2
	var_118_int = 0; // 0x872 PushI
	var_119_int = 1; // 0x873 PushI
	AddItem(var_75_bool, var_116_int, var_118_int, var_119_int); // 0x874 Func
	return 4; // 0x876 Return
}


func_1622(var_28_bool)
{
	var_30_bool = 0; var_31_bool = 0; // 0x656 PushV
	IsDead(var_31_bool); // 0x657 ObjFunc
	var_28_bool = var_31_bool; // 0x659 Mov
	return 2; // 0x65a Return
}


func_1627(var_17_bool, var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); // 0x65b PushV
	var_23_bool = var_18_object == 0; // 0x65c NullEq
	if(var_23_bool == 0) goto Label_1632; // 0x65d JumpB
	var_17_bool = 0; // 0x65e MovB
	return 4; // 0x65f Return
	
Label_1632:
	var_24_bool = 0; // 0x660 PushV
	var_24_bool = 0; // 0x661 MovB
	var_25_string = "IsDead"; // 0x662 PushS
	var_26_int = 1; // 0x663 PushI
	var_27_bool = IsFuncExist(var_18_object, var_25_string, var_26_int); // 0x664 FuncExist
	if(var_27_bool == 0) goto Label_1644; // 0x665 JumpB
	var_28_bool = 0; var_29_object = Obj(); // 0x666 PushV
	var_29_object = var_18_object; // 0x667 Mov
	func_1622(var_29_object); // 0x668 NEW_2
	if(var_28_bool == 0) goto Label_1644; // 0x66a JumpB
	var_24_bool = 1; // 0x66b MovB
	
Label_1644:
	if(var_24_bool == 0) goto Label_1647; // 0x66c JumpB
	var_17_bool = 0; // 0x66d MovB
	return 4; // 0x66e Return
	
Label_1647:
	GetScene(var_21_object); // 0x66f Func
	var_32_bool = var_21_object == 0; // 0x671 NullEq
	if(var_32_bool == 0) goto Label_1653; // 0x672 JumpB
	var_17_bool = 0; // 0x673 MovB
	return 4; // 0x674 Return
	
Label_1653:
	GetScene(var_22_object); // 0x675 ObjFunc
	var_33_bool = var_21_object != var_22_object; // 0x677 Neq
	if(var_33_bool == 0) goto Label_1659; // 0x678 JumpB
	var_17_bool = 0; // 0x679 MovB
	return 4; // 0x67a Return
	
Label_1659:
	var_17_bool = 1; // 0x67b MovB
	return 4; // 0x67c Return
}


func_1143(var_0_bool, var_257_bool)
{
	var_258_bool = 0; var_259_bool = 0; // 0x477 PushV
	var_260_string = "IsAttacking"; // 0x478 PushS
	var_261_int = 1; // 0x479 PushI
	var_262_bool = IsFuncExist(var_0_bool, var_260_string, var_261_int); // 0x47a FuncExist
	if(var_262_bool == 0) goto Label_1152; // 0x47b JumpB
	IsAttacking(var_259_bool); // 0x47c TObjFunc
	var_257_bool = var_259_bool; // 0x47e Mov
	return 2; // 0x47f Return
	
Label_1152:
	var_257_bool = 0; // 0x480 MovB
	return 2; // 0x481 Return
}


func_2167(var_89_int, var_90_string)
{
	var_91_int = 0; var_92_int = 0; // 0x877 PushV
	GetInvItemByName(var_92_int, var_90_string); // 0x878 Func
	var_89_int = var_92_int; // 0x87a Mov
	return 2; // 0x87b Return
}


func_2172(var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); // 0x87d PushV
	var_15_object = var_13_object; // 0x87e Mov
	func_1510(var_14_bool, var_15_object); // 0x87f NEW_2
	if(var_14_bool == 0) goto Label_2205; // 0x881 JumpB
	var_18_bool = 0; // 0x882 PushV
	var_18_bool = 0; // 0x883 MovB
	var_19_int = 0; // 0x884 PushV
	func_2034(var_19_int); // 0x885 NEW_2
	var_23_int = 2; // 0x887 PushI
	var_24_bool = var_19_int == var_23_int; // 0x888 Eq
	if(var_24_bool == 0) goto Label_2193; // 0x889 JumpB
	var_25_int = 0; // 0x88a PushV
	func_2005(var_25_int); // 0x88b NEW_2
	var_31_int = 6; // 0x88d PushI
	var_32_bool = var_25_int == var_31_int; // 0x88e Eq
	if(var_32_bool == 0) goto Label_2193; // 0x88f JumpB
	var_18_bool = 1; // 0x890 MovB
	
Label_2193:
	if(var_18_bool == 0) goto Label_2200; // 0x891 JumpB
	var_33_bool = 0; var_34_object = Obj(); var_35_float = 0; // 0x892 PushV
	var_34_object = var_13_object; // 0x893 Mov
	var_35_float = 0.1; // 0x894 MovF
	func_1950(var_33_bool, var_34_object, var_35_float); // 0x895 NEW_2
	goto Label_2205; // 0x897 Jump
	
Label_2205:
	var_71_object = Obj(); // 0x89d PushV
	var_71_object = var_13_object; // 0x89e Mov
	TaskCall(0); // 0x89f TaskCall
	func_0(var_71_object); // 0x8a0 NEW_2
	TaskReturn(); // 0x8a1 TaskReturn
	return 0; // 0x8a3 Return
	
Label_2200:
	var_220_bool = 0; var_221_object = Obj(); var_222_float = 0; // 0x898 PushV
	var_221_object = var_13_object; // 0x899 Mov
	var_222_float = 0.05; // 0x89a MovF
	func_1950(var_220_bool, var_221_object, var_222_float); // 0x89b NEW_2
}


func_1663(var_13_bool, var_14_object)
{
	var_15_int = 0; var_16_int = 0; // 0x67f PushV
	var_17_bool = 0; var_18_object = Obj(); // 0x680 PushV
	var_18_object = var_14_object; // 0x681 Mov
	func_1627(var_17_bool, var_18_object); // 0x682 NEW_2
	var_34_bool = var_17_bool == 0; // 0x684 Not
	if(var_34_bool == 0) goto Label_1672; // 0x685 JumpB
	var_13_bool = 0; // 0x686 MovB
	return 2; // 0x687 Return
	
Label_1672:
	var_35_bool = 0; var_36_object = Obj(); var_37_string = ""; // 0x688 PushV
	var_36_object = var_14_object; // 0x689 Mov
	var_37_string = "noaccess"; // 0x68a MovS
	func_1515(var_35_bool, var_36_object, var_37_string); // 0x68b NEW_2
	var_44_bool = var_35_bool == 0; // 0x68d Not
	if(var_44_bool == 0) goto Label_1681; // 0x68e JumpB
	var_13_bool = 1; // 0x68f MovB
	return 2; // 0x690 Return
	
Label_1681:
	var_45_string = "noaccess"; // 0x691 PushS
	GetProperty(var_45_string, var_16_int); // 0x692 ObjFunc
	var_46_int = 0; // 0x694 PushI
	var_13_bool = var_16_int == var_46_int; // 0x695 Eq2
	return 2; // 0x696 Return
}


func_128(var_160_string)
{
	RemoveRTEnvelope(); // 0x81 Func
	SetDeathState(); // 0x83 Func
	Stop(); // 0x85 Func
	StopAsync(); // 0x87 Func
	StopSecondaryAnimation(); // 0x89 Func
	var_161_string = ""; // 0x8b PushV
	var_161_string = var_160_string; // 0x8c Mov
	func_1851(var_161_string); // 0x8d NEW_2
	var_190_string = "all"; // 0x8f PushS
	PlayAnimation(var_190_string, var_160_string); // 0x90 Func
	WaitForAnimEnd(); // 0x92 Func
	var_191_string = "all"; // 0x94 PushS
	LockAnimationEnd(var_191_string, var_160_string); // 0x95 Func
	RemoveEnvelope(); // 0x97 Func
	return 0; // 0x99 Return
}


func_1154(var_2_bool, var_5_int)
{
	var_374_float = 0; var_375_int = 0; var_376_float = 0; var_377_int = 0; // 0x482 PushV
	var_378_bool = var_2_bool == 0; // 0x483 Not
	if(var_378_bool == 0) goto Label_1158; // 0x484 JumpB
	return 4; // 0x485 Return
	
Label_1158:
	var_379_int = var_5_int; // 0x486 PushT
	if(var_379_int == 0) goto Label_1166; // 0x487 JumpB
	var_380_int = -1; // 0x488 PushI
	var_5_int = var_5_int + var_380_int; // 0x489 Add2
	var_381_int = 0; // 0x48a PushI
	var_382_bool = var_5_int > var_381_int; // 0x48b GT
	if(var_382_bool == 0) goto Label_1166; // 0x48c JumpB
	return 4; // 0x48d Return
	
Label_1166:
	rand(var_376_float); // 0x48e Func
	var_383_float = 0; // 0x490 PushV
	func_1202(var_383_float); // 0x491 NEW_2
	var_384_bool = var_376_float < var_383_float; // 0x493 LT
	if(var_384_bool == 0) goto Label_1185; // 0x494 JumpB
	irand(var_377_int, var_376_float); // 0x495 Func
	var_385_int = 1; // 0x497 PushI
	var_377_int = var_377_int + var_385_int; // 0x498 Add2
	var_386_string = "attack"; // 0x499 PushS
	var_387_int = var_386_string + var_377_int; // 0x49a Add
	Speak(var_387_int); // 0x49b Func
	var_388_int = 0; // 0x49d PushV
	func_1200(var_388_int); // 0x49e NEW_2
	var_5_int = var_388_int; // 0x49f TMov
	
Label_1185:
	return 4; // 0x4a1 Return
}


func_1687(var_29_object)
{
	var_30_bool = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = ""; var_37_bool = 0; var_38_int = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_string = ""; // 0x697 PushV
	var_44_bool = var_29_object == 0; // 0x698 NullEq
	if(var_44_bool == 0) goto Label_1691; // 0x699 JumpB
	return 14; // 0x69a Return
	
Label_1691:
	IsDead(var_37_bool); // 0x69b Func
	var_45_bool = var_37_bool; // 0x69d Push
	if(var_45_bool == 0) goto Label_1696; // 0x69e JumpB
	return 14; // 0x69f Return
	
Label_1696:
	GetSecondaryAnimationType(var_38_int); // 0x6a0 Func
	var_46_int = 0; // 0x6a2 PushI
	var_47_bool = var_38_int < var_46_int; // 0x6a3 LT
	if(var_47_bool == 0) goto Label_1702; // 0x6a4 JumpB
	return 14; // 0x6a5 Return
	
Label_1702:
	GetPosition(var_39_cvector); // 0x6a6 ObjFunc
	GetPosition(var_40_cvector); // 0x6a8 Func
	GetDirection(var_41_cvector); // 0x6aa Func
	var_42_cvector = var_40_cvector - var_39_cvector; // 0x6ac Sub2
	var_48_float = GetByIndex(var_42_cvector, 0); // 0x6ad PushE
	var_49_float = GetByIndex(var_41_cvector, 0); // 0x6ae PushE
	var_50_float = var_48_float * var_49_float; // 0x6af Mult
	var_51_float = GetByIndex(var_42_cvector, 2); // 0x6b0 PushE
	var_52_float = GetByIndex(var_41_cvector, 2); // 0x6b1 PushE
	var_53_float = var_51_float * var_52_float; // 0x6b2 Mult
	var_54_int = var_50_float + var_53_float; // 0x6b3 Add
	var_55_int = 0; // 0x6b4 PushI
	var_56_bool = var_54_int >= var_55_int; // 0x6b5 GE
	if(var_56_bool == 0) goto Label_1721; // 0x6b6 JumpB
	var_43_string = "fhit"; // 0x6b7 MovS
	goto Label_1722; // 0x6b8 Jump
	
Label_1722:
	var_57_string = "hit_react"; // 0x6ba PushS
	var_58_string = "1"; // 0x6bb PushS
	var_59_int = var_43_string + var_58_string; // 0x6bc Add
	var_60_string = "2"; // 0x6bd PushS
	var_61_int = var_43_string + var_60_string; // 0x6be Add
	var_62_int = -10; // 0x6bf PushI
	FadeSecondaryAnimation(var_57_string, var_59_int, var_61_int, var_62_int); // 0x6c0 Func
	return 14; // 0x6c2 Return
	
Label_1721:
	var_43_string = "bhit"; // 0x6b9 MovS
}


func_1186(var_0_bool)
{
	var_130_object = Obj(); // 0x4a2 PushV
	var_130_object = var_0_bool; // 0x4a3 MovT
	func_2014(var_130_object); // 0x4a4 NEW_2
	return 0; // 0x4a6 Return
}


func_166(var_2_bool, var_137_bool, var_138_object, var_139_float, var_140_float, var_141_bool, var_142_bool)
{
	var_146_bool = 0; var_147_bool = 0; var_148_bool = 0; var_149_bool = 0; // 0xa6 PushV
	var_150_object = Obj(); // 0xa7 PushV
	var_150_object = var_138_object; // 0xa8 Mov
	func_2014(var_150_object); // 0xa9 NEW_2
	var_151_int = 1; // 0xab PushI
	var_152_int = 5; // 0xac PushI
	SetTimer(var_151_int, var_152_int); // 0xad Func
	CanSee(var_148_bool, var_138_object); // 0xaf Func
	var_153_bool = var_148_bool; // 0xb1 Push
	if(var_153_bool == 0) goto Label_185; // 0xb2 JumpB
	var_2_bool = 1; // 0xb3 TMovB
	var_154_object = Obj(); // 0xb4 PushV
	var_154_object = var_138_object; // 0xb5 Mov
	func_1829(var_154_object); // 0xb6 NEW_2
	goto Label_186; // 0xb8 Jump
	
Label_186:
	var_161_bool = 0; var_162_object = Obj(); // 0xba PushV
	var_162_object = var_138_object; // 0xbb Mov
	func_1510(var_161_bool, var_162_object); // 0xbc NEW_2
	if(var_161_bool == 0) goto Label_196; // 0xbe JumpB
	var_165_object = Obj(); // 0xbf PushV
	func_1892(var_165_object); // 0xc0 NEW_2
	SendPlayerEnemy(var_138_object, var_165_object); // 0xc2 Func
	
Label_196:
	var_166_bool = 0; var_167_object = Obj(); var_168_float = 0; var_169_float = 0; var_170_bool = 0; var_171_bool = 0; // 0xc4 PushV
	var_167_object = var_138_object; // 0xc5 Mov
	var_168_float = var_139_float; // 0xc6 Mov
	var_169_float = var_140_float; // 0xc7 Mov
	var_170_bool = var_141_bool; // 0xc8 Mov
	var_171_bool = var_142_bool; // 0xc9 Mov
	func_271(var_148_bool, var_149_bool, var_166_bool, var_167_object, var_168_float, var_169_float, var_170_bool, var_171_bool); // 0xca NEW_2
	var_149_bool = var_166_bool; // 0xcb Mov
	var_217_bool = var_2_bool; // 0xcd PushT
	if(var_217_bool == 0) goto Label_210; // 0xce JumpB
	var_218_string = "head"; // 0xcf PushS
	UnlookAsync(var_218_string); // 0xd0 Func
	
Label_210:
	var_219_int = 1; // 0xd2 PushI
	KillTimer(var_219_int); // 0xd3 Func
	var_137_bool = var_149_bool; // 0xd5 Mov
	return 4; // 0xd6 Return
	
Label_185:
	var_2_bool = 0; // 0xb9 TMovB
}


func_1191(var_467_int)
{
	var_467_int = 0; // 0x4a7 MovI
	return 0; // 0x4a8 Return
}


func_1193()
{
	var_263_string = ""; // 0x4a9 PushV
	var_263_string = "attack_stay"; // 0x4aa MovS
	func_1851(var_263_string); // 0x4ab NEW_2
	return 0; // 0x4ad Return
}


func_1198()
{
	return 0; // 0x4af Return
}


func_1200(var_388_int)
{
	var_388_int = 1; // 0x4b0 MovI
	return 0; // 0x4b1 Return
}


func_1202(var_383_float)
{
	var_383_float = 0.5; // 0x4b2 MovF
	return 0; // 0x4b3 Return
}


func_1731(var_16_object, var_17_int, var_18_float)
{
	var_19_cvector = CVector(0,0,0); var_20_object = Obj(); var_21_int = 0; var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_int = 0; var_26_int = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_object = Obj(); var_30_int = 0; var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_int = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); // 0x6c3 PushV
	var_37_bool = 0; // 0x6c4 PushV
	var_37_bool = 0; // 0x6c5 MovB
	var_38_bool = 0; // 0x6c6 PushV
	var_38_bool = 0; // 0x6c7 MovB
	var_39_object = var_16_object; // 0x6c8 Push
	if(var_39_object == 0) goto Label_1742; // 0x6c9 JumpB
	var_40_int = 4; // 0x6ca PushI
	var_41_bool = var_17_int != var_40_int; // 0x6cb Neq
	if(var_41_bool == 0) goto Label_1742; // 0x6cc JumpB
	var_38_bool = 1; // 0x6cd MovB
	
Label_1742:
	if(var_38_bool == 0) goto Label_1747; // 0x6ce JumpB
	var_42_int = 5; // 0x6cf PushI
	var_43_bool = var_17_int != var_42_int; // 0x6d0 Neq
	if(var_43_bool == 0) goto Label_1747; // 0x6d1 JumpB
	var_37_bool = 1; // 0x6d2 MovB
	
Label_1747:
	if(var_37_bool == 0) goto Label_1794; // 0x6d3 JumpB
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); // 0x6d4 PushV
	var_46_cvector = CVector(0,0,0); var_47_object = Obj(); // 0x6d5 PushV
	var_47_object = var_16_object; // 0x6d6 Mov
	func_1503(var_47_object); // 0x6d7 NEW_2
	var_45_cvector = var_46_cvector; // 0x6d8 Mov
	func_1898(var_44_cvector, var_45_cvector); // 0x6da NEW_2
	var_28_cvector = var_44_cvector; // 0x6db Mov
	CreateVectorVector(var_29_object); // 0x6dd Func
	var_30_int = 1; // 0x6df MovI
	
Label_1760:
	var_57_string = "hit"; // 0x6e0 PushS
	var_58_int = var_57_string + var_30_int; // 0x6e1 Add
	GetGeometryLocator(var_58_int, var_31_bool, var_32_cvector, var_33_cvector); // 0x6e2 Func
	var_59_bool = var_31_bool == 0; // 0x6e4 Not
	if(var_59_bool == 0) goto Label_1767; // 0x6e5 JumpB
	goto Label_1776; // 0x6e6 Jump
	
Label_1776:
	size(var_34_int); // 0x6f0 ObjFunc
	var_60_int = var_34_int; // 0x6f2 Push
	if(var_60_int == 0) goto Label_1793; // 0x6f3 JumpB
	irand(var_35_int, var_34_int); // 0x6f4 Func
	get(var_36_cvector, var_35_int); // 0x6f6 ObjFunc
	var_61_object = Obj(); var_62_int = 0; var_63_float = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x6f8 PushV
	var_61_object = var_16_object; // 0x6f9 Mov
	var_62_int = var_17_int; // 0x6fa Mov
	var_63_float = var_18_float; // 0x6fb Mov
	var_64_cvector = var_36_cvector; // 0x6fc Mov
	var_65_cvector = -var_28_cvector; // 0x6fd Neg2
	func_1799(var_63_float, var_64_cvector, var_65_cvector); // 0x6fe NEW_2
	return 18; // 0x700 Return
	
Label_1793:
	var_29_object = 0; // 0x701 SetNull
	
Label_1794:
	var_106_object = Obj(); // 0x702 PushV
	var_106_object = var_16_object; // 0x703 Mov
	func_1687(var_106_object); // 0x704 NEW_2
	return 18; // 0x706 Return
	
Label_1767:
	var_107_int = var_33_cvector | var_28_cvector; // 0x6e7 Or
	var_108_float = 0.70711; // 0x6e8 PushF
	var_109_bool = var_107_int >= var_108_float; // 0x6e9 GE
	if(var_109_bool == 0) goto Label_1773; // 0x6ea JumpB
	add(var_32_cvector); // 0x6eb ObjFunc
	
Label_1773:
	var_110_int = 1; // 0x6ed PushI
	var_30_int = var_30_int + var_110_int; // 0x6ee Add2
	goto Label_1760; // 0x6ef Jump
}


func_2249(var_67_string, var_68_int)
{
	var_69_string = ""; var_70_string = ""; // 0x8c9 PushV
	var_70_string = "idle"; // 0x8ca MovS
	var_71_int = var_68_int; // 0x8cb Push
	if(var_71_int == 0) goto Label_2254; // 0x8cc JumpB
	var_70_string = var_70_string + var_68_int; // 0x8cd Add2
	
Label_2254:
	var_67_string = var_70_string; // 0x8ce Mov
	return 2; // 0x8cf Return
}


func_2256(var_61_int)
{
	var_62_int = 0; var_63_bool = 0; var_64_int = 0; var_65_bool = 0; // 0x8d0 PushV
	var_64_int = 0; // 0x8d1 MovI
	
Label_2258:
	var_66_string = "all"; // 0x8d2 PushS
	var_67_string = ""; var_68_int = 0; // 0x8d3 PushV
	var_68_int = var_64_int; // 0x8d4 Mov
	func_2249(var_67_string, var_68_int); // 0x8d5 NEW_2
	HasAnimation(var_65_bool, var_66_string, var_67_string); // 0x8d7 Func
	var_72_bool = var_65_bool == 0; // 0x8d9 Not
	if(var_72_bool == 0) goto Label_2268; // 0x8da JumpB
	goto Label_2271; // 0x8db Jump
	
Label_2271:
	var_61_int = var_64_int; // 0x8df Mov
	return 4; // 0x8e0 Return
	
Label_2268:
	var_73_int = 1; // 0x8dc PushI
	var_64_int = var_64_int + var_73_int; // 0x8dd Add2
	goto Label_2258; // 0x8de Jump
}


func_2273()
{
	var_12_object = GlobalVars[0]; // 0x8e1 PushGE
	var_13_object = Obj(); // 0x8e2 PushV
	func_1944(var_13_object); // 0x8e3 NEW_2
	var_12_object = var_13_object; // 0x8e4 Mov
	GlobalVars[0] = var_12_object; // 0x8e6 PopGE
	return 0; // 0x8e7 Return
}


func_229(var_2_bool)
{
	var_13_int = 1; // 0xe5 PushI
	KillTimer(var_13_int); // 0xe6 Func
	var_14_bool = var_2_bool; // 0xe8 PushT
	if(var_14_bool == 0) goto Label_238; // 0xe9 JumpB
	var_2_bool = 0; // 0xea TMovB
	var_15_string = "head"; // 0xeb PushS
	UnlookAsync(var_15_string); // 0xec Func
	
Label_238:
	func_395(var_12_bool); // 0xef NEW_2
	return 0; // 0xf1 Return
}


func_2280(var_17_bool, var_18_object)
{
	var_19_bool = 0; var_20_bool = 0; var_21_bool = 0; var_22_bool = 0; // 0x8e8 PushV
	var_23_object = GlobalVars[0]; // 0x8e9 PushGE
	in(var_21_bool, var_18_object); // 0x8ea ObjFunc
	var_24_bool = var_21_bool; // 0x8ec Push
	if(var_24_bool == 0) goto Label_2288; // 0x8ed JumpB
	var_17_bool = 1; // 0x8ee MovB
	return 4; // 0x8ef Return
	
Label_2288:
	IsPlayerActor(var_18_object, var_22_bool); // 0x8f0 Func
	var_17_bool = var_22_bool; // 0x8f2 Mov
	return 4; // 0x8f3 Return
}


func_1260(var_0_bool, var_1_object)
{
	var_16_float = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_object = Obj(); var_21_bool = 0; var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_bool = 0; var_26_object = Obj(); var_27_bool = 0; // 0x4ec PushV
	var_0_bool = 0; // 0x4ed TMovB
	var_1_object = 0; // 0x4ee TMovB
	var_28_float = 0.5; // 0x4ef PushF
	rand(var_22_float, var_28_float); // 0x4f0 Func
	Sleep(var_22_float); // 0x4f2 Func
	
Label_1268:
	var_29_bool = var_0_bool == 0; // 0x4f4 Not
	if(var_29_bool == 0) goto Label_1318; // 0x4f5 JumpB
	var_30_bool = var_1_object == 0; // 0x4f6 Not
	if(var_30_bool == 0) goto Label_1287; // 0x4f7 JumpB
	
Label_1272:
	GetPosition(var_24_cvector); // 0x4f8 Func
	var_31_float = 0; // 0x4fa PushV
	func_1319(var_31_float); // 0x4fb NEW_2
	GetRandomPFPointInCircle(var_23_cvector, var_24_cvector, var_31_float, var_25_bool); // 0x4fd Func
	var_34_bool = var_25_bool; // 0x4ff Push
	if(var_34_bool == 0) goto Label_1282; // 0x500 JumpB
	goto Label_1286; // 0x501 Jump
	
Label_1286:
	goto Label_1288; // 0x506 Jump
	
Label_1288:
	var_35_object = Obj(); var_36_cvector = CVector(0,0,0); // 0x508 PushV
	var_36_cvector = var_23_cvector; // 0x509 Mov
	func_1349(var_35_object, var_36_cvector); // 0x50a NEW_2
	var_26_object = var_35_object; // 0x50b Mov
	var_39_bool = var_26_object != 0; // 0x50d NullNeq
	if(var_39_bool == 0) goto Label_1313; // 0x50e JumpB
	RotatePath(var_26_object, var_27_bool); // 0x50f Func
	var_40_bool = var_27_bool; // 0x511 Push
	if(var_40_bool == 0) goto Label_1312; // 0x512 JumpB
	var_41_bool = 0; // 0x513 PushV
	func_1347(var_41_bool); // 0x514 NEW_2
	FollowPath(var_26_object, var_41_bool, var_27_bool); // 0x516 Func
	var_26_object = 0; // 0x518 SetNull
	var_42_bool = var_27_bool; // 0x519 Push
	if(var_42_bool == 0) goto Label_1312; // 0x51a JumpB
	TaskCall(4); // 0x51c TaskCall
	func_1403(); // 0x51d NEW_2
	TaskReturn(); // 0x51e TaskReturn
	
Label_1312:
	goto Label_1316; // 0x520 Jump
	
Label_1316:
	var_26_object = 0; // 0x524 SetNull
	goto Label_1268; // 0x525 Jump
	
Label_1313:
	var_96_int = 1; // 0x521 PushI
	Sleep(var_96_int); // 0x522 Func
	
Label_1282:
	var_97_int = 1; // 0x502 PushI
	Sleep(var_97_int); // 0x503 Func
	goto Label_1272; // 0x505 Jump
	
Label_1287:
	var_1_object = 0; // 0x507 TMovB
	
Label_1318:
	return 12; // 0x526 Return
}


func_2292(var_13_bool, var_14_object)
{
	var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); // 0x8f4 PushV
	var_17_bool = 0; var_18_object = Obj(); // 0x8f5 PushV
	var_18_object = var_14_object; // 0x8f6 Mov
	func_2280(var_17_bool, var_18_object); // 0x8f7 NEW_2
	if(var_17_bool == 0) goto Label_2312; // 0x8f9 JumpB
	var_25_cvector = CVector(0,0,0); var_26_object = Obj(); // 0x8fa PushV
	var_26_object = var_14_object; // 0x8fb Mov
	func_1503(var_26_object); // 0x8fc NEW_2
	var_16_cvector = var_25_cvector; // 0x8fd Mov
	var_31_float = 0; var_32_float = 0; // 0x8ff PushV
	var_33_float = GetByIndex(var_16_cvector, 1); // 0x900 PushE
	var_32_float = var_33_float; // 0x901 Mov
	func_1915(var_31_float, var_32_float); // 0x903 NEW_2
	var_36_int = 200; // 0x905 PushI
	var_13_bool = var_31_float < var_36_int; // 0x906 LT2
	return 2; // 0x907 Return
	
Label_2312:
	var_13_bool = 0; // 0x908 MovB
	return 2; // 0x909 Return
}


func_773(var_1_object, var_2_bool, var_4_int)
{
	var_91_bool = 0; var_92_bool = 0; var_93_cvector = CVector(0,0,0); var_94_bool = 0; var_95_bool = 0; var_96_cvector = CVector(0,0,0); // 0x305 PushV
	var_1_object = 0; // 0x306 TMovI
	
Label_775:
	var_97_string = "all"; // 0x307 PushS
	var_98_string = "attack_begin"; // 0x308 PushS
	var_99_int = 1; // 0x309 PushI
	var_100_int = var_1_object + var_99_int; // 0x30a Add
	var_101_int = var_98_string + var_100_int; // 0x30b Add
	HasAnimation(var_94_bool, var_97_string, var_101_int); // 0x30c Func
	var_102_bool = var_94_bool == 0; // 0x30e Not
	if(var_102_bool == 0) goto Label_785; // 0x30f JumpB
	goto Label_788; // 0x310 Jump
	
Label_788:
	var_2_bool = 0; // 0x314 TMovI
	
Label_789:
	var_103_string = "attack"; // 0x315 PushS
	var_104_int = 1; // 0x316 PushI
	var_105_int = var_2_bool + var_104_int; // 0x317 Add
	var_106_int = var_103_string + var_105_int; // 0x318 Add
	IsExisting3DSound(var_95_bool, var_106_int); // 0x319 Func
	var_107_bool = var_95_bool == 0; // 0x31b Not
	if(var_107_bool == 0) goto Label_798; // 0x31c JumpB
	goto Label_801; // 0x31d Jump
	
Label_801:
	var_108_string = "all"; // 0x321 PushS
	var_109_string = "bjump"; // 0x322 PushS
	GetAnimationOffset(var_96_cvector, var_108_string, var_109_string); // 0x323 Func
	var_110_float = GetByIndex(var_96_cvector, 2); // 0x325 PushE
	var_4_int = -var_110_float; // 0x326 Neg2
	return 6; // 0x327 Return
	
Label_798:
	var_111_int = 1; // 0x31e PushI
	var_2_bool = var_2_bool + var_111_int; // 0x31f Add2
	goto Label_789; // 0x320 Jump
	
Label_785:
	var_112_int = 1; // 0x311 PushI
	var_1_object = var_1_object + var_112_int; // 0x312 Add2
	goto Label_775; // 0x313 Jump
}


func_1799(var_18_object, var_21_cvector, var_22_cvector)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); // 0x707 PushV
	GetScene(var_25_object); // 0x708 Func
	var_27_string = "scripted"; // 0x70a PushS
	var_28_string = "blood_dir.xml"; // 0x70b PushS
	AddActorByType(var_26_object, var_27_string, var_25_object, var_21_cvector, var_22_cvector, var_28_string); // 0x70c Func
	var_29_object = Obj(); // 0x70e PushV
	var_29_object = var_18_object; // 0x70f Mov
	func_1687(var_29_object); // 0x710 NEW_2
	return 4; // 0x712 Return
}


func_2314(var_37_object)
{
	var_38_object = Obj(); // 0x90b PushV
	var_38_object = var_37_object; // 0x90c Mov
	func_2333(var_38_object); // 0x90d NEW_2
	return 0; // 0x90f Return
}


func_271(var_0_bool, var_1_object, var_166_bool, var_167_object, var_168_float, var_169_float, var_170_bool, var_171_bool)
{
	var_172_bool = 0; var_173_bool = 0; var_174_object = Obj(); var_175_cvector = CVector(0,0,0); var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); var_178_float = 0; var_179_object = Obj(); var_180_bool = 0; var_181_bool = 0; var_182_object = Obj(); var_183_cvector = CVector(0,0,0); var_184_cvector = CVector(0,0,0); var_185_cvector = CVector(0,0,0); var_186_float = 0; var_187_object = Obj(); // 0x10f PushV
	var_0_bool = 0; // 0x110 TMovB
	var_1_object = var_167_object; // 0x111 TMov
	var_181_bool = var_171_bool; // 0x112 Mov
	
Label_275:
	var_188_bool = 0; var_189_object = Obj(); // 0x113 PushV
	var_189_object = var_167_object; // 0x114 Mov
	func_411(var_188_bool, var_189_object); // 0x115 NEW_2
	var_192_bool = var_188_bool == 0; // 0x117 Not
	if(var_192_bool == 0) goto Label_283; // 0x118 JumpB
	var_166_bool = 0; // 0x119 MovB
	return 16; // 0x11a Return
	
Label_283:
	GetPosition(var_183_cvector); // 0x11b ObjFunc
	GetPosition(var_184_cvector); // 0x11d Func
	var_185_cvector = var_183_cvector - var_184_cvector; // 0x11f Sub2
	var_186_float = var_185_cvector | var_185_cvector; // 0x120 Or2
	var_193_bool = 0; // 0x121 PushV
	var_193_bool = 0; // 0x122 MovB
	var_194_int = 0; // 0x123 PushI
	var_195_bool = var_169_float > var_194_int; // 0x124 GT
	if(var_195_bool == 0) goto Label_298; // 0x125 JumpB
	var_196_float = var_169_float * var_169_float; // 0x126 Mult
	var_197_bool = var_186_float > var_196_float; // 0x127 GT
	if(var_197_bool == 0) goto Label_298; // 0x128 JumpB
	var_193_bool = 1; // 0x129 MovB
	
Label_298:
	if(var_193_bool == 0) goto Label_303; // 0x12a JumpB
	Stop(); // 0x12b Func
	var_166_bool = 0; // 0x12d MovB
	return 16; // 0x12e Return
	
Label_303:
	var_198_float = var_168_float * var_168_float; // 0x12f Mult
	var_199_bool = var_186_float > var_198_float; // 0x130 GT
	if(var_199_bool == 0) goto Label_365; // 0x131 JumpB
	GetPFPosition(var_183_cvector); // 0x132 ObjFunc
	FindPathTo(var_187_object, var_183_cvector); // 0x134 Func
	var_200_bool = var_187_object != 0; // 0x136 NullNeq
	if(var_200_bool == 0) goto Label_314; // 0x137 JumpB
	var_182_object = var_187_object; // 0x138 Mov
	var_187_object = 0; // 0x139 SetNull
	
Label_314:
	var_201_bool = var_182_object != 0; // 0x13a NullNeq
	if(var_201_bool == 0) goto Label_347; // 0x13b JumpB
	var_202_bool = var_181_bool; // 0x13c Push
	if(var_202_bool == 0) goto Label_324; // 0x13d JumpB
	var_181_bool = 0; // 0x13e MovB
	RotatePath(var_182_object, var_180_bool); // 0x13f Func
	var_203_bool = var_180_bool == 0; // 0x141 Not
	if(var_203_bool == 0) goto Label_324; // 0x142 JumpB
	goto Label_371; // 0x143 Jump
	
Label_371:
	var_166_bool = !var_0_bool; // 0x173 Not2
	return 16; // 0x174 Return
	
Label_324:
	var_204_int = 0; // 0x144 PushI
	var_205_float = 0.3; // 0x145 PushF
	SetTimer(var_204_int, var_205_float); // 0x146 Func
	var_206_string = ""; // 0x148 PushV
	func_418(var_206_string); // 0x149 NEW_2
	var_207_string = ""; // 0x14b PushV
	func_420(var_207_string); // 0x14c NEW_2
	FollowPath(var_182_object, var_170_bool, var_180_bool, var_206_string, var_207_string); // 0x14e Func
	var_208_bool = var_180_bool == 0; // 0x150 Not
	if(var_208_bool == 0) goto Label_345; // 0x151 JumpB
	var_209_bool = var_0_bool; // 0x152 PushT
	if(var_209_bool == 0) goto Label_343; // 0x153 JumpB
	var_182_object = 0; // 0x154 SetNull
	goto Label_371; // 0x155 Jump
	
Label_343:
	goto Label_370; // 0x157 Jump
	
Label_370:
	goto Label_275; // 0x172 Jump
	
Label_345:
	var_182_object = 0; // 0x159 SetNull
	goto Label_363; // 0x15a Jump
	
Label_363:
	var_187_object = 0; // 0x16b SetNull
	goto Label_369; // 0x16c Jump
	
Label_369:
	var_182_object = 0; // 0x171 SetNull
	
Label_347:
	var_210_int = 0; // 0x15b PushI
	KillTimer(var_210_int); // 0x15c Func
	var_211_float = 0.5; // 0x15e PushF
	Sleep(var_211_float, var_180_bool); // 0x15f Func
	var_212_bool = var_180_bool == 0; // 0x161 Not
	if(var_212_bool == 0) goto Label_359; // 0x162 JumpB
	var_213_bool = var_0_bool; // 0x163 PushT
	if(var_213_bool == 0) goto Label_359; // 0x164 JumpB
	var_182_object = 0; // 0x165 SetNull
	goto Label_371; // 0x166 Jump
	
Label_359:
	var_214_int = 0; // 0x167 PushI
	var_215_float = 0.3; // 0x168 PushF
	SetTimer(var_214_int, var_215_float); // 0x169 Func
	
Label_365:
	var_216_int = 0; // 0x16d PushI
	KillTimer(var_216_int); // 0x16e Func
	goto Label_371; // 0x170 Jump
}


func_2320(var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_object = Obj(); // 0x911 PushV
	var_16_object = var_14_object; // 0x912 Mov
	func_2280(var_15_bool, var_16_object); // 0x913 NEW_2
	var_13_bool = var_15_bool; // 0x914 Mov
	return 0; // 0x916 Return
}


func_1813()
{
	var_241_cvector = CVector(0,0,0); var_242_cvector = CVector(0,0,0); var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); var_245_cvector = CVector(0,0,0); var_246_cvector = CVector(0,0,0); // 0x715 PushV
	GetPosition(var_244_cvector); // 0x716 ObjFunc
	GetPosition(var_245_cvector); // 0x718 Func
	var_246_cvector = var_244_cvector - var_245_cvector; // 0x71a Sub2
	var_247_float = GetByIndex(var_246_cvector, 0); // 0x71b PushE
	var_248_float = GetByIndex(var_246_cvector, 2); // 0x71c PushE
	RotateAsync(var_247_float, var_248_float); // 0x71d Func
	return 6; // 0x71f Return
}


func_2327(var_23_object)
{
	var_24_object = Obj(); // 0x918 PushV
	var_24_object = var_23_object; // 0x919 Mov
	func_2333(var_24_object); // 0x91a NEW_2
	return 0; // 0x91c Return
}


func_2333(var_38_object)
{
	var_39_object = Obj(); var_40_bool = 0; // 0x91e PushV
	var_39_object = var_38_object; // 0x91f Mov
	var_40_bool = 1; // 0x920 MovB
	TaskCall(2); // 0x921 TaskCall
	func_422(var_39_object, var_40_bool); // 0x922 NEW_2
	TaskReturn(); // 0x923 TaskReturn
	ResetAAS(); // 0x925 Func
	return 0; // 0x927 Return
}


func_1824(var_57_bool)
{
	var_58_bool = 0; var_59_bool = 0; // 0x720 PushV
	IsLoaded(var_59_bool); // 0x721 Func
	var_57_bool = var_59_bool; // 0x723 Mov
	return 2; // 0x724 Return
}


func_1829(var_154_object)
{
	var_155_float = 0; var_156_cvector = CVector(0,0,0); var_157_float = 0; var_158_cvector = CVector(0,0,0); // 0x725 PushV
	GetEyesHeight(var_157_float); // 0x726 ObjFunc
	var_158_cvector = CVector(0.0, 0.0, 0.0); // 0x728 MovV
	var_159_float = GetByIndex(var_158_cvector, 1); // 0x729 PushE
	var_159_float = var_157_float; // 0x72a Mov
	SetByIndex(var_158_cvector, 1) = var_159_float; // 0x72b PopE
	var_160_string = "head"; // 0x72c PushS
	LookAsync(var_154_object, var_160_string, var_158_cvector); // 0x72d Func
	return 4; // 0x72f Return
}


func_1319(var_31_float)
{
	var_32_float = 0; var_33_float = 0; // 0x527 PushV
	GetCameraFarDistance(var_33_float); // 0x528 Func
	var_31_float = var_33_float; // 0x52a Mov
	return 2; // 0x52b Return
}


func_2344(var_48_object)
{
	var_49_bool = 0; var_50_bool = 0; // 0x928 PushV
	var_51_bool = var_48_object == 0; // 0x929 NullEq
	if(var_51_bool == 0) goto Label_2348; // 0x92a JumpB
	return 2; // 0x92b Return
	
Label_2348:
	var_52_object = GlobalVars[0]; // 0x92c PushGE
	in(var_50_bool, var_48_object); // 0x92d ObjFunc
	var_53_bool = var_50_bool == 0; // 0x92f Not
	if(var_53_bool == 0) goto Label_2356; // 0x930 JumpB
	var_54_object = GlobalVars[0]; // 0x931 PushGE
	add(var_48_object); // 0x932 ObjFunc
	
Label_2356:
	return 2; // 0x934 Return
}


func_808(var_0_bool, var_392_float, var_393_int)
{
	var_394_object = Obj(); var_395_float = 0; var_396_float = 0; var_397_object = Obj(); var_398_float = 0; var_399_float = 0; // 0x328 PushV
	var_400_float = 0.9; // 0x329 PushF
	var_401_float = var_392_float * var_400_float; // 0x32a Mult
	GetVictim(var_401_float, var_397_object); // 0x32b Func
	ReportAttack(var_0_bool); // 0x32d Func
	var_402_bool = var_397_object == var_0_bool; // 0x32f Eq
	if(var_402_bool == 0) goto Label_845; // 0x330 JumpB
	var_403_float = 0; var_404_object = Obj(); var_405_int = 0; // 0x331 PushV
	var_404_object = var_397_object; // 0x332 Mov
	var_405_int = var_393_int; // 0x333 Mov
	func_430(var_405_int); // 0x334 NEW_2
	var_398_float = var_403_float; // 0x335 Mov
	var_406_float = 0; var_407_object = Obj(); var_408_float = 0; var_409_int = 0; // 0x337 PushV
	var_407_object = var_397_object; // 0x338 Mov
	var_408_float = var_398_float; // 0x339 Mov
	var_410_int = 0; var_411_object = Obj(); var_412_int = 0; // 0x33a PushV
	var_411_object = var_397_object; // 0x33b Mov
	var_412_int = var_393_int; // 0x33c Mov
	func_433(var_412_int); // 0x33d NEW_2
	var_409_int = var_410_int; // 0x33e Mov
	func_1549(var_406_float, var_407_object, var_408_float, var_409_int); // 0x340 NEW_2
	var_399_float = var_406_float; // 0x341 Mov
	var_467_int = 0; // 0x343 PushV
	func_1191(var_467_int); // 0x344 NEW_2
	ReportHit(var_0_bool, var_467_int, var_399_float, var_398_float); // 0x346 Func
	var_468_object = Obj(); var_469_float = 0; // 0x348 PushV
	var_468_object = var_397_object; // 0x349 Mov
	var_469_float = var_399_float; // 0x34a Mov
	func_1198(); // 0x34b NEW_2
	
Label_845:
	return 6; // 0x34d Return
}


func_1840(var_96_string, var_97_int, var_98_int)
{
	var_99_bool = 0; var_100_bool = 0; // 0x730 PushV
	var_101_bool = 0; var_102_int = 0; var_103_int = 0; // 0x731 PushV
	var_102_int = var_97_int; // 0x732 Mov
	var_103_int = var_98_int; // 0x733 Mov
	func_1939(var_101_bool, var_102_int, var_103_int); // 0x734 NEW_2
	if(var_101_bool == 0) goto Label_1850; // 0x736 JumpB
	var_106_int = 0; // 0x737 PushI
	AddItem(var_100_bool, var_96_string, var_106_int); // 0x738 Func
	
Label_1850:
	return 2; // 0x73a Return
}


func_1331(var_0_bool, var_1_object)
{
	var_0_bool = 1; // 0x533 TMovB
	var_1_object = 0; // 0x534 TMovB
	Stop(); // 0x535 Func
	StopGroup0(); // 0x537 Func
	return 0; // 0x539 Return
}


func_2357(var_55_object)
{
	var_56_object = Obj(); // 0x936 PushV
	var_56_object = var_55_object; // 0x937 Mov
	func_2344(var_56_object); // 0x938 NEW_2
	var_57_object = Obj(); var_58_bool = 0; // 0x93a PushV
	var_57_object = var_55_object; // 0x93b Mov
	var_58_bool = 1; // 0x93c MovB
	TaskCall(2); // 0x93d TaskCall
	func_422(var_57_object, var_58_bool); // 0x93e NEW_2
	TaskReturn(); // 0x93f TaskReturn
	ResetAAS(); // 0x941 Func
	return 0; // 0x943 Return
}


func_1851(var_161_string)
{
	var_162_bool = 0; var_163_int = 0; var_164_bool = 0; var_165_int = 0; var_166_bool = 0; var_167_float = 0; var_168_cvector = CVector(0,0,0); var_169_cvector = CVector(0,0,0); var_170_bool = 0; var_171_int = 0; var_172_bool = 0; var_173_int = 0; var_174_bool = 0; var_175_float = 0; var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); // 0x73b PushV
	IsExisting3DSound(var_170_bool, var_161_string); // 0x73c Func
	var_178_bool = var_170_bool == 0; // 0x73e Not
	if(var_178_bool == 0) goto Label_1876; // 0x73f JumpB
	var_171_int = 0; // 0x740 MovI
	
Label_1857:
	var_179_int = 1; // 0x741 PushI
	var_180_int = var_171_int + var_179_int; // 0x742 Add
	var_181_int = var_161_string + var_180_int; // 0x743 Add
	IsExisting3DSound(var_172_bool, var_181_int); // 0x744 Func
	var_182_bool = var_172_bool == 0; // 0x746 Not
	if(var_182_bool == 0) goto Label_1865; // 0x747 JumpB
	goto Label_1868; // 0x748 Jump
	
Label_1868:
	var_183_bool = var_171_int == 0; // 0x74c Not
	if(var_183_bool == 0) goto Label_1871; // 0x74d JumpB
	return 16; // 0x74e Return
	
Label_1871:
	irand(var_173_int, var_171_int); // 0x74f Func
	var_184_int = 1; // 0x751 PushI
	var_185_int = var_173_int + var_184_int; // 0x752 Add
	var_161_string = var_161_string + var_185_int; // 0x753 Add2
	
Label_1876:
	Is3DSoundLoaded(var_174_bool, var_161_string); // 0x754 Func
	var_186_bool = var_174_bool; // 0x756 Push
	if(var_186_bool == 0) goto Label_1891; // 0x757 JumpB
	GetEyesHeight(var_175_float); // 0x758 Func
	GetDirection(var_176_cvector); // 0x75a Func
	var_187_int = 50; // 0x75c PushI
	var_177_cvector = var_176_cvector * var_187_int; // 0x75d Mult2
	var_188_float = GetByIndex(var_177_cvector, 1); // 0x75e PushE
	var_188_float = var_188_float + var_175_float; // 0x75f Add2
	SetByIndex(var_177_cvector, 1) = var_188_float; // 0x760 PopE
	PlayGlobalSound(var_161_string, var_177_cvector); // 0x761 Func
	
Label_1891:
	return 16; // 0x763 Return
	
Label_1865:
	var_189_int = 1; // 0x749 PushI
	var_171_int = var_171_int + var_189_int; // 0x74a Add2
	goto Label_1857; // 0x74b Jump
}


func_1347(var_41_bool)
{
	var_41_bool = 0; // 0x543 MovB
	return 0; // 0x544 Return
}


func_1349(var_35_object, var_36_cvector)
{
	var_37_object = Obj(); var_38_object = Obj(); // 0x545 PushV
	FindShiftedPathTo(var_38_object, var_36_cvector); // 0x546 Func
	var_35_object = var_38_object; // 0x548 Mov
	return 2; // 0x549 Return
}


func_847(var_0_bool, var_355_bool, var_356_float)
{
	var_357_int = 0; var_358_bool = 0; var_359_int = 0; var_360_string = ""; var_361_int = 0; var_362_bool = 0; var_363_int = 0; var_364_string = ""; // 0x34f PushV
	func_1186(var_364_string); // 0x351 NEW_2
	irand(var_361_int, var_364_string); // 0x353 Func
	var_365_int = 1; // 0x355 PushI
	var_361_int = var_361_int + var_365_int; // 0x356 Add2
	Face(var_0_bool); // 0x357 Func
	var_366_bool = 1; // 0x359 PushB
	SetAttackState(var_366_bool); // 0x35a Func
	func_2023(); // 0x35d NEW_2
	var_371_string = "all"; // 0x35f PushS
	var_372_string = "attack_begin"; // 0x360 PushS
	var_373_int = var_372_string + var_361_int; // 0x361 Add
	PlayAnimation(var_371_string, var_373_int); // 0x362 Func
	WaitForAnimEnd(); // 0x364 Func
	func_1154(var_363_int, var_364_string); // 0x367 NEW_2
	var_389_bool = 0; var_390_object = Obj(); // 0x369 PushV
	var_390_object = var_0_bool; // 0x36a MovT
	func_1663(var_389_bool, var_390_object); // 0x36b NEW_2
	var_391_bool = var_389_bool == 0; // 0x36d Not
	if(var_391_bool == 0) goto Label_883; // 0x36e JumpB
	StopAsync(); // 0x36f Func
	var_355_bool = 0; // 0x371 MovB
	return 8; // 0x372 Return
	
Label_883:
	var_392_float = 0; var_393_int = 0; // 0x373 PushV
	var_392_float = var_356_float; // 0x374 Mov
	var_393_int = var_361_int; // 0x375 Mov
	func_808(var_364_string, var_392_float, var_393_int); // 0x376 NEW_2
	var_470_string = "all"; // 0x378 PushS
	var_471_string = "attack_middle"; // 0x379 PushS
	var_472_int = var_471_string + var_361_int; // 0x37a Add
	HasAnimation(var_362_bool, var_470_string, var_472_int); // 0x37b Func
	var_473_bool = var_362_bool; // 0x37d Push
	if(var_473_bool == 0) goto Label_964; // 0x37e JumpB
	func_2023(); // 0x380 NEW_2
	var_474_string = "all"; // 0x382 PushS
	var_475_string = "attack_middle"; // 0x383 PushS
	var_476_int = var_475_string + var_361_int; // 0x384 Add
	PlayAnimation(var_474_string, var_476_int); // 0x385 Func
	WaitForAnimEnd(); // 0x387 Func
	func_1186(var_364_string); // 0x38a NEW_2
	var_477_bool = 0; var_478_object = Obj(); // 0x38c PushV
	var_478_object = var_0_bool; // 0x38d MovT
	func_1663(var_477_bool, var_478_object); // 0x38e NEW_2
	var_479_bool = var_477_bool == 0; // 0x390 Not
	if(var_479_bool == 0) goto Label_918; // 0x391 JumpB
	StopAsync(); // 0x392 Func
	var_355_bool = 0; // 0x394 MovB
	return 8; // 0x395 Return
	
Label_918:
	var_480_float = 0; var_481_int = 0; // 0x396 PushV
	var_480_float = var_356_float; // 0x397 Mov
	var_481_int = var_361_int; // 0x398 Mov
	func_808(var_364_string, var_480_float, var_481_int); // 0x399 NEW_2
	var_363_int = 1; // 0x39b MovI
	
Label_924:
	var_482_string = "attack_middle"; // 0x39c PushS
	var_483_int = var_482_string + var_361_int; // 0x39d Add
	var_484_string = "_"; // 0x39e PushS
	var_485_int = var_483_int + var_484_string; // 0x39f Add
	var_364_string = var_485_int + var_363_int; // 0x3a0 Add2
	var_486_string = "all"; // 0x3a1 PushS
	HasAnimation(var_362_bool, var_486_string, var_364_string); // 0x3a2 Func
	var_487_bool = var_362_bool == 0; // 0x3a4 Not
	if(var_487_bool == 0) goto Label_935; // 0x3a5 JumpB
	goto Label_964; // 0x3a6 Jump
	
Label_964:
	var_488_bool = 0; // 0x3c4 PushB
	SetAttackState(var_488_bool); // 0x3c5 Func
	var_489_string = "all"; // 0x3c7 PushS
	var_490_string = "attack_end"; // 0x3c8 PushS
	var_491_int = var_490_string + var_361_int; // 0x3c9 Add
	PlayAnimation(var_489_string, var_491_int); // 0x3ca Func
	var_492_bool = 0; // 0x3cc PushV
	func_442(var_363_int, var_364_string, var_492_bool); // 0x3cd NEW_2
	if(var_492_bool == 0) goto Label_982; // 0x3cf JumpB
	var_565_bool = 0; var_566_float = 0; // 0x3d0 PushV
	var_566_float = 0.75; // 0x3d1 MovF
	func_984(var_565_bool, var_566_float); // 0x3d2 NEW_2
	StopAsync(); // 0x3d4 Func
	
Label_982:
	var_355_bool = 1; // 0x3d6 MovB
	return 8; // 0x3d7 Return
	
Label_935:
	func_2023(); // 0x3a8 NEW_2
	var_574_string = "all"; // 0x3aa PushS
	PlayAnimation(var_574_string, var_364_string); // 0x3ab Func
	WaitForAnimEnd(); // 0x3ad Func
	func_1186(var_364_string); // 0x3b0 NEW_2
	var_575_bool = 0; var_576_object = Obj(); // 0x3b2 PushV
	var_576_object = var_0_bool; // 0x3b3 MovT
	func_1663(var_575_bool, var_576_object); // 0x3b4 NEW_2
	var_577_bool = var_575_bool == 0; // 0x3b6 Not
	if(var_577_bool == 0) goto Label_956; // 0x3b7 JumpB
	StopAsync(); // 0x3b8 Func
	var_355_bool = 0; // 0x3ba MovB
	return 8; // 0x3bb Return
	
Label_956:
	var_578_float = 0; var_579_int = 0; // 0x3bc PushV
	var_578_float = var_356_float; // 0x3bd Mov
	var_579_int = var_361_int; // 0x3be Mov
	func_808(var_364_string, var_578_float, var_579_int); // 0x3bf NEW_2
	var_580_int = 1; // 0x3c1 PushI
	var_363_int = var_363_int + var_580_int; // 0x3c2 Add2
	goto Label_924; // 0x3c3 Jump
}


func_1892(var_121_object)
{
	var_122_object = Obj(); var_123_object = Obj(); // 0x764 PushV
	self(var_123_object); // 0x765 Func
	var_121_object = var_123_object; // 0x767 Mov
	return 2; // 0x768 Return
}


func_1898(var_44_cvector, var_45_cvector)
{
	var_52_float = 0; var_53_float = 0; // 0x76a PushV
	var_54_int = var_45_cvector | var_45_cvector; // 0x76b Or
	var_53_float = sqrt(var_54_int); // 0x76c Sqrt2
	var_55_float = 0.0; // 0x76d PushF
	var_56_bool = var_53_float < var_55_float; // 0x76e LT
	if(var_56_bool == 0) goto Label_1906; // 0x76f JumpB
	var_44_cvector = CVector(0.0, 0.0, 0.0); // 0x770 MovV
	return 2; // 0x771 Return
	
Label_1906:
	var_44_cvector = var_45_cvector / var_45_cvector; // 0x772 Div2
	return 2; // 0x773 Return
}


func_1908(var_444_float, var_445_float, var_446_float)
{
	var_449_bool = var_445_float < var_446_float; // 0x775 LT
	if(var_449_bool == 0) goto Label_1913; // 0x776 JumpB
	var_444_float = var_445_float; // 0x777 Mov
	goto Label_1914; // 0x778 Jump
	
Label_1914:
	return 0; // 0x77a Return
	
Label_1913:
	var_444_float = var_446_float; // 0x779 Mov
}


func_373(var_0_bool, var_1_object, var_20_int)
{
	var_21_int = 0; // 0x176 PushI
	var_22_bool = var_20_int != var_21_int; // 0x177 Neq
	if(var_22_bool == 0) goto Label_378; // 0x178 JumpB
	return 0; // 0x179 Return
	
Label_378:
	var_23_bool = 0; var_24_object = Obj(); // 0x17a PushV
	var_24_object = var_1_object; // 0x17b MovT
	func_411(var_23_bool, var_24_object); // 0x17c NEW_2
	var_59_bool = var_23_bool == 0; // 0x17e Not
	if(var_59_bool == 0) goto Label_385; // 0x17f JumpB
	var_0_bool = 1; // 0x180 TMovB
	
Label_385:
	var_60_int = 0; // 0x181 PushI
	KillTimer(var_60_int); // 0x182 Func
	Stop(); // 0x184 Func
	return 0; // 0x186 Return
}


func_1403()
{
	var_43_int = 0; var_44_int = 0; var_45_int = 0; var_46_int = 0; var_47_bool = 0; var_48_float = 0; var_49_bool = 0; var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_bool = 0; var_55_float = 0; var_56_bool = 0; // 0x57b PushV
	WaitForAnimEnd(); // 0x57c Func
	var_57_bool = 0; // 0x57e PushV
	func_1824(var_57_bool); // 0x57f NEW_2
	var_60_bool = var_57_bool == 0; // 0x581 Not
	if(var_60_bool == 0) goto Label_1412; // 0x582 JumpB
	return 14; // 0x583 Return
	
Label_1412:
	var_61_int = 0; // 0x584 PushV
	func_2256(var_61_int); // 0x585 NEW_2
	var_50_int = var_61_int; // 0x586 Mov
	var_51_int = 0; // 0x588 MovI
	
Label_1417:
	var_74_bool = 0; // 0x589 PushV
	var_74_bool = 0; // 0x58a MovB
	var_75_int = 5; // 0x58b PushI
	var_76_bool = var_51_int < var_75_int; // 0x58c LT
	if(var_76_bool == 0) goto Label_1427; // 0x58d JumpB
	var_77_bool = 0; // 0x58e PushV
	func_1824(var_77_bool); // 0x58f NEW_2
	if(var_77_bool == 0) goto Label_1427; // 0x591 JumpB
	var_74_bool = 1; // 0x592 MovB
	
Label_1427:
	if(var_74_bool == 0) goto Label_1479; // 0x593 JumpB
	var_78_int = 3; // 0x594 PushI
	irand(var_52_int, var_78_int); // 0x595 Func
	var_79_int = 0; // 0x597 PushI
	var_80_bool = var_52_int == var_79_int; // 0x598 Eq
	if(var_80_bool == 0) goto Label_1451; // 0x599 JumpB
	var_81_int = var_50_int; // 0x59a Push
	if(var_81_int == 0) goto Label_1450; // 0x59b JumpB
	irand(var_53_int, var_50_int); // 0x59c Func
	var_82_string = "all"; // 0x59e PushS
	var_83_string = ""; var_84_int = 0; // 0x59f PushV
	var_84_int = var_53_int; // 0x5a0 Mov
	func_2249(var_83_string, var_84_int); // 0x5a1 NEW_2
	PlayAnimation(var_82_string, var_83_string); // 0x5a3 Func
	WaitForAnimEnd(var_54_bool); // 0x5a5 Func
	var_85_bool = var_54_bool == 0; // 0x5a7 Not
	if(var_85_bool == 0) goto Label_1450; // 0x5a8 JumpB
	goto Label_1479; // 0x5a9 Jump
	
Label_1479:
	ResetAAS(); // 0x5c7 Func
	return 14; // 0x5c9 Return
	
Label_1450:
	goto Label_1468; // 0x5aa Jump
	
Label_1468:
	var_86_bool = 0; // 0x5bc PushV
	func_1482(var_86_bool); // 0x5bd NEW_2
	var_87_bool = var_86_bool == 0; // 0x5bf Not
	if(var_87_bool == 0) goto Label_1474; // 0x5c0 JumpB
	goto Label_1479; // 0x5c1 Jump
	
Label_1474:
	ResetAAS(); // 0x5c2 Func
	var_88_int = 1; // 0x5c4 PushI
	var_51_int = var_51_int + var_88_int; // 0x5c5 Add2
	goto Label_1417; // 0x5c6 Jump
	
Label_1451:
	var_89_int = 1; // 0x5ab PushI
	var_90_bool = var_52_int == var_89_int; // 0x5ac Eq
	if(var_90_bool == 0) goto Label_1465; // 0x5ad JumpB
	var_91_int = 4; // 0x5ae PushI
	rand(var_55_float, var_91_int); // 0x5af Func
	var_92_int = 1; // 0x5b1 PushI
	var_93_int = var_55_float + var_92_int; // 0x5b2 Add
	Sleep(var_93_int, var_56_bool); // 0x5b3 Func
	var_94_bool = var_56_bool == 0; // 0x5b5 Not
	if(var_94_bool == 0) goto Label_1464; // 0x5b6 JumpB
	goto Label_1479; // 0x5b7 Jump
	
Label_1464:
	goto Label_1468; // 0x5b8 Jump
	
Label_1465:
	var_95_int = var_51_int; // 0x5b9 Push
	if(var_95_int == 0) goto Label_1468; // 0x5ba JumpB
	goto Label_1479; // 0x5bb Jump
}


func_1915(var_31_float, var_32_float)
{
	var_34_int = 0; // 0x77c PushI
	var_35_bool = var_32_float < var_34_int; // 0x77d LT
	if(var_35_bool == 0) goto Label_1921; // 0x77e JumpB
	var_31_float = -var_32_float; // 0x77f Neg2
	goto Label_1922; // 0x780 Jump
	
Label_1922:
	return 0; // 0x782 Return
	
Label_1921:
	var_31_float = var_32_float; // 0x781 Mov
}


func_1923(var_62_float, var_63_float, var_64_float, var_65_float)
{
	var_66_bool = var_63_float < var_64_float; // 0x784 LT
	if(var_66_bool == 0) goto Label_1928; // 0x785 JumpB
	var_62_float = var_64_float; // 0x786 Mov
	return 0; // 0x787 Return
	
Label_1928:
	var_67_bool = var_63_float > var_65_float; // 0x788 GT
	if(var_67_bool == 0) goto Label_1932; // 0x789 JumpB
	var_62_float = var_65_float; // 0x78a Mov
	return 0; // 0x78b Return
	
Label_1932:
	var_62_float = var_63_float; // 0x78c Mov
	return 0; // 0x78d Return
}


func_395(var_0_bool)
{
	var_0_bool = 1; // 0x18b TMovB
	var_16_int = 0; // 0x18c PushI
	KillTimer(var_16_int); // 0x18d Func
	Stop(); // 0x18f Func
	return 0; // 0x191 Return
}


func_1934(var_518_bool, var_519_float)
{
	var_520_float = 0; var_521_float = 0; // 0x78e PushV
	rand(var_521_float); // 0x78f Func
	var_518_bool = var_521_float < var_519_float; // 0x791 LT2
	return 2; // 0x792 Return
}


func_1939(var_101_bool, var_102_int, var_103_int)
{
	var_104_int = 0; var_105_int = 0; // 0x793 PushV
	irand(var_105_int, var_103_int); // 0x794 Func
	var_101_bool = var_105_int < var_102_int; // 0x796 LT2
	return 2; // 0x797 Return
}


func_1944(var_13_object)
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x798 PushV
	CreateObjectSet(var_15_object); // 0x799 Func
	var_13_object = var_15_object; // 0x79b Mov
	return 2; // 0x79c Return
}


func_411(var_188_bool, var_189_object)
{
	var_190_bool = 0; var_191_object = Obj(); // 0x19c PushV
	var_191_object = var_189_object; // 0x19d Mov
	func_1663(var_190_bool, var_191_object); // 0x19e NEW_2
	var_188_bool = var_190_bool; // 0x19f Mov
	return 0; // 0x1a1 Return
}


func_1950(var_33_bool, var_34_object, var_35_float)
{
	var_36_bool = var_34_object == 0; // 0x79f Not
	if(var_36_bool == 0) goto Label_1955; // 0x7a0 JumpB
	var_33_bool = 0; // 0x7a1 MovB
	return 0; // 0x7a2 Return
	
Label_1955:
	var_37_int = 0; // 0x7a3 PushI
	var_38_bool = var_35_float > var_37_int; // 0x7a4 GT
	if(var_38_bool == 0) goto Label_1962; // 0x7a5 JumpB
	var_39_int = 8; // 0x7a6 PushI
	SendWorldWndMessage(var_39_int); // 0x7a7 Func
	goto Label_1971; // 0x7a9 Jump
	
Label_1971:
	var_40_float = 0; // 0x7b3 PushV
	var_40_float = var_35_float; // 0x7b4 Mov
	func_1995(var_40_float); // 0x7b5 NEW_2
	var_44_bool = 0; var_45_object = Obj(); var_46_string = ""; var_47_float = 0; var_48_float = 0; var_49_float = 0; // 0x7b7 PushV
	var_45_object = var_34_object; // 0x7b8 Mov
	var_46_string = "reputation"; // 0x7b9 MovS
	var_47_float = var_35_float; // 0x7ba Mov
	var_48_float = 0; // 0x7bb MovI
	var_49_float = 1; // 0x7bc MovI
	func_1527(var_44_bool, var_45_object, var_46_string, var_47_float, var_48_float, var_49_float); // 0x7bd NEW_2
	var_33_bool = 1; // 0x7bf MovB
	return 0; // 0x7c0 Return
	
Label_1962:
	var_68_int = 0; // 0x7aa PushI
	var_69_bool = var_35_float < var_68_int; // 0x7ab LT
	if(var_69_bool == 0) goto Label_1969; // 0x7ac JumpB
	var_70_int = 9; // 0x7ad PushI
	SendWorldWndMessage(var_70_int); // 0x7ae Func
	goto Label_1971; // 0x7b0 Jump
	
Label_1969:
	var_33_bool = 0; // 0x7b1 MovB
	return 0; // 0x7b2 Return
}


func_418(var_206_string)
{
	var_206_string = "walk"; // 0x1a2 MovS
	return 0; // 0x1a3 Return
}


func_420(var_207_string)
{
	var_207_string = "run"; // 0x1a4 MovS
	return 0; // 0x1a5 Return
}


func_422(var_57_object, var_58_bool)
{
	var_66_object = Obj(); var_67_bool = 0; var_68_float = 0; // 0x1a7 PushV
	var_66_object = var_57_object; // 0x1a8 Mov
	var_67_bool = var_58_bool; // 0x1a9 Mov
	var_68_float = 180.0; // 0x1aa MovF
	func_544(var_63_float, var_64_int, var_65_bool, var_57_object, var_58_bool, var_66_object, var_67_bool, var_68_float); // 0x1ab NEW_2
	return 0; // 0x1ad Return
}


func_430(var_403_float)
{
	var_403_float = 0.2; // 0x1af MovF
	return 0; // 0x1b0 Return
}


func_433(var_410_int)
{
	var_410_int = 0; // 0x1b2 MovI
	return 0; // 0x1b3 Return
}


func_442(var_0_bool, var_6_bool, var_492_bool)
{
	var_493_cvector = CVector(0,0,0); var_494_cvector = CVector(0,0,0); var_495_cvector = CVector(0,0,0); var_496_cvector = CVector(0,0,0); var_497_cvector = CVector(0,0,0); var_498_cvector = CVector(0,0,0); var_499_float = 0; var_500_float = 0; var_501_cvector = CVector(0,0,0); var_502_float = 0; var_503_int = 0; var_504_cvector = CVector(0,0,0); var_505_cvector = CVector(0,0,0); var_506_cvector = CVector(0,0,0); var_507_cvector = CVector(0,0,0); var_508_cvector = CVector(0,0,0); var_509_cvector = CVector(0,0,0); var_510_float = 0; var_511_float = 0; var_512_cvector = CVector(0,0,0); var_513_float = 0; var_514_int = 0; // 0x1ba PushV
	var_515_bool = 0; // 0x1bb PushV
	var_515_bool = 0; // 0x1bc MovB
	var_516_bool = 0; var_517_object = Obj(); // 0x1bd PushV
	var_517_object = var_0_bool; // 0x1be MovT
	func_1663(var_516_bool, var_517_object); // 0x1bf NEW_2
	if(var_516_bool == 0) goto Label_456; // 0x1c1 JumpB
	var_518_bool = 0; var_519_float = 0; // 0x1c2 PushV
	var_519_float = 0.5; // 0x1c3 MovF
	func_1934(var_518_bool, var_519_float); // 0x1c4 NEW_2
	if(var_518_bool == 0) goto Label_456; // 0x1c6 JumpB
	var_515_bool = 1; // 0x1c7 MovB
	
Label_456:
	if(var_515_bool == 0) goto Label_542; // 0x1c8 JumpB
	GetPosition(var_504_cvector); // 0x1c9 Func
	GetPosition(var_505_cvector); // 0x1cb TObjFunc
	GetDirection(var_506_cvector); // 0x1cd Func
	var_522_cvector = CVector(0,0,0); var_523_cvector = CVector(0,0,0); // 0x1cf PushV
	var_523_cvector = var_504_cvector - var_505_cvector; // 0x1d0 Sub2
	func_1898(var_522_cvector, var_523_cvector); // 0x1d1 NEW_2
	var_507_cvector = var_522_cvector; // 0x1d2 Mov
	var_529_string = "all"; // 0x1d4 PushS
	var_530_string = "jump1"; // 0x1d5 PushS
	GetAnimationOffset(var_508_cvector, var_529_string, var_530_string); // 0x1d6 Func
	var_531_string = "all"; // 0x1d8 PushS
	var_532_string = "jump2"; // 0x1d9 PushS
	GetAnimationOffset(var_509_cvector, var_531_string, var_532_string); // 0x1da Func
	var_533_float = GetByIndex(var_508_cvector, 2); // 0x1dc PushE
	var_534_float = GetByIndex(var_509_cvector, 2); // 0x1dd PushE
	var_535_bool = var_533_float < var_534_float; // 0x1de LT
	if(var_535_bool == 0) goto Label_485; // 0x1df JumpB
	var_536_float = GetByIndex(var_509_cvector, 2); // 0x1e0 PushE
	var_510_float = -var_536_float; // 0x1e1 Neg2
	var_537_float = GetByIndex(var_508_cvector, 2); // 0x1e2 PushE
	var_511_float = -var_537_float; // 0x1e3 Neg2
	goto Label_489; // 0x1e4 Jump
	
Label_489:
	var_538_float = 0.17453; // 0x1e9 PushF
	var_539_int = 6; // 0x1ea PushI
	var_540_int = 3; // 0x1eb PushI
	var_541_float = var_511_float * var_540_int; // 0x1ec Mult
	FindLongestDir(var_512_cvector, var_513_float, var_507_cvector, var_538_float, var_539_int, var_541_float); // 0x1ed Func
	var_542_bool = var_513_float < var_510_float; // 0x1ef LT
	if(var_542_bool == 0) goto Label_503; // 0x1f0 JumpB
	var_543_float = 0.5236; // 0x1f1 PushF
	var_544_int = 16; // 0x1f2 PushI
	var_545_int = 3; // 0x1f3 PushI
	var_546_float = var_511_float * var_545_int; // 0x1f4 Mult
	FindLongestDir(var_512_cvector, var_513_float, var_507_cvector, var_543_float, var_544_int, var_546_float); // 0x1f5 Func
	
Label_503:
	var_547_bool = var_513_float >= var_510_float; // 0x1f7 GE
	if(var_547_bool == 0) goto Label_542; // 0x1f8 JumpB
	StopAsync(); // 0x1f9 Func
	var_548_int = -var_512_cvector; // 0x1fb Neg
	SetDirection(var_548_int); // 0x1fc Func
	var_6_bool = 1; // 0x1fe TMovB
	var_549_bool = var_513_float >= var_511_float; // 0x1ff GE
	if(var_549_bool == 0) goto Label_524; // 0x200 JumpB
	var_550_int = 2; // 0x201 PushI
	irand(var_514_int, var_550_int); // 0x202 Func
	var_551_string = "all"; // 0x204 PushS
	var_552_string = "jump"; // 0x205 PushS
	var_553_int = 1; // 0x206 PushI
	var_554_int = var_514_int + var_553_int; // 0x207 Add
	var_555_int = var_552_string + var_554_int; // 0x208 Add
	PlayAnimation(var_551_string, var_555_int); // 0x209 Func
	goto Label_537; // 0x20b Jump
	
Label_537:
	WaitForAnimEnd(); // 0x219 Func
	var_6_bool = 0; // 0x21b TMovB
	var_492_bool = 0; // 0x21c MovB
	return 22; // 0x21d Return
	
Label_524:
	var_556_float = GetByIndex(var_508_cvector, 2); // 0x20c PushE
	var_557_int = -var_556_float; // 0x20d Neg
	var_558_bool = var_557_int <= var_513_float; // 0x20e LE
	if(var_558_bool == 0) goto Label_533; // 0x20f JumpB
	var_559_string = "all"; // 0x210 PushS
	var_560_string = "jump1"; // 0x211 PushS
	PlayAnimation(var_559_string, var_560_string); // 0x212 Func
	goto Label_537; // 0x214 Jump
	
Label_533:
	var_561_string = "all"; // 0x215 PushS
	var_562_string = "jump2"; // 0x216 PushS
	PlayAnimation(var_561_string, var_562_string); // 0x217 Func
	
Label_542:
	var_492_bool = 1; // 0x21e MovB
	return 22; // 0x21f Return
	
Label_485:
	var_563_float = GetByIndex(var_508_cvector, 2); // 0x1e5 PushE
	var_510_float = -var_563_float; // 0x1e6 Neg2
	var_564_float = GetByIndex(var_509_cvector, 2); // 0x1e7 PushE
	var_511_float = -var_564_float; // 0x1e8 Neg2
}


func_1985(var_462_float)
{
	var_463_object = Obj(); var_464_object = Obj(); // 0x7c1 PushV
	CreateFloatVector(var_464_object); // 0x7c2 Func
	add(var_462_float); // 0x7c4 ObjFunc
	var_465_int = 15; // 0x7c6 PushI
	SendWorldWndMessage(var_465_int, var_464_object); // 0x7c7 Func
	return 2; // 0x7c9 Return
}


func_1482(var_86_bool)
{
	var_86_bool = 1; // 0x5ca MovB
	return 0; // 0x5cb Return
}


func_1995(var_40_float)
{
	var_41_object = Obj(); var_42_object = Obj(); // 0x7cb PushV
	CreateFloatVector(var_42_object); // 0x7cc Func
	add(var_40_float); // 0x7ce ObjFunc
	var_43_int = 16; // 0x7d0 PushI
	SendWorldWndMessage(var_43_int, var_42_object); // 0x7d1 Func
	return 2; // 0x7d3 Return
}


func_1484()
{
	StopAnimation(); // 0x5cc Func
	StopGroup0(); // 0x5ce Func
	return 0; // 0x5d0 Return
}


func_1489(var_434_string, var_435_int)
{
	var_436_int = 2; // 0x5d2 PushI
	var_437_bool = var_435_int == var_436_int; // 0x5d3 Eq
	if(var_437_bool == 0) goto Label_1496; // 0x5d4 JumpB
	var_434_string = "fire"; // 0x5d5 MovS
	return 0; // 0x5d6 Return
	
Label_1496:
	var_438_int = 1; // 0x5d8 PushI
	var_439_bool = var_435_int == var_438_int; // 0x5d9 Eq
	if(var_439_bool == 0) goto Label_1501; // 0x5da JumpB
	var_434_string = "bullet"; // 0x5db MovS
	return 0; // 0x5dc Return
	
Label_1501:
	var_434_string = "phys"; // 0x5dd MovS
	return 0; // 0x5de Return
}


func_2005(var_25_int)
{
	var_26_float = 0; var_27_float = 0; // 0x7d5 PushV
	GetGameTime(var_27_float); // 0x7d6 Func
	var_28_int = 1; // 0x7d8 PushI
	var_29_int = 0; // 0x7d9 PushV
	var_30_int = 24; // 0x7da PushI
	var_29_int = var_27_float / var_27_float; // 0x7db Div2
	var_25_int = var_28_int + var_29_int; // 0x7dc Add2
	return 2; // 0x7dd Return
}


func_984(var_565_bool, var_566_float)
{
	var_567_float = 0; var_568_bool = 0; var_569_float = 0; var_570_bool = 0; // 0x3d8 PushV
	rand(var_569_float); // 0x3d9 Func
	var_571_bool = var_569_float < var_566_float; // 0x3db LT
	if(var_571_bool == 0) goto Label_1004; // 0x3dc JumpB
	
Label_989:
	IsAnimationPlaying(var_570_bool); // 0x3dd Func
	var_572_bool = var_570_bool == 0; // 0x3df Not
	if(var_572_bool == 0) goto Label_994; // 0x3e0 JumpB
	goto Label_1003; // 0x3e1 Jump
	
Label_1003:
	goto Label_1009; // 0x3eb Jump
	
Label_1009:
	var_565_bool = 0; // 0x3f1 MovB
	return 4; // 0x3f2 Return
	
Label_994:
	var_573_bool = 0; // 0x3e2 PushV
	func_1082(var_573_bool); // 0x3e3 NEW_2
	if(var_573_bool == 0) goto Label_1000; // 0x3e5 JumpB
	var_565_bool = 1; // 0x3e6 MovB
	return 4; // 0x3e7 Return
	
Label_1000:
	sync(); // 0x3e8 Func
	goto Label_989; // 0x3ea Jump
	
Label_1004:
	WaitForAnimEnd(); // 0x3ec Func
	func_1186(var_570_bool); // 0x3ef NEW_2
}


func_2014(var_130_object)
{
	var_131_bool = 0; var_132_bool = 0; // 0x7de PushV
	IsPlayerActor(var_130_object, var_132_bool); // 0x7df Func
	var_133_bool = var_132_bool; // 0x7e1 Push
	if(var_133_bool == 0) goto Label_2022; // 0x7e2 JumpB
	var_134_string = "attack"; // 0x7e3 PushS
	PlayGlobalMusic(var_134_string); // 0x7e4 Func
	
Label_2022:
	return 2; // 0x7e6 Return
}


func_1503(var_46_cvector)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0x5df PushV
	GetPosition(var_50_cvector); // 0x5e0 Func
	GetPosition(var_51_cvector); // 0x5e2 ObjFunc
	var_46_cvector = var_51_cvector - var_50_cvector; // 0x5e4 Sub2
	return 4; // 0x5e5 Return
}


func_1510(var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_bool = 0; // 0x5e6 PushV
	IsPlayerActor(var_15_object, var_17_bool); // 0x5e7 Func
	var_14_bool = var_17_bool; // 0x5e9 Mov
	return 2; // 0x5ea Return
}


func_2023()
{
	var_367_object = Obj(); var_368_object = Obj(); // 0x7e7 PushV
	GetScene(var_368_object); // 0x7e8 Func
	var_369_string = "battle"; // 0x7ea PushS
	var_370_object = Obj(); // 0x7eb PushV
	func_1892(var_370_object); // 0x7ec NEW_2
	BroadcastMessage(var_369_string, var_370_object, var_368_object); // 0x7ee Func
	return 2; // 0x7f0 Return
}


func_1515(var_52_bool, var_53_object, var_54_string)
{
	var_55_bool = 0; var_56_bool = 0; // 0x5eb PushV
	var_57_string = "HasProperty"; // 0x5ec PushS
	var_58_int = 2; // 0x5ed PushI
	var_59_bool = IsFuncExist(var_53_object, var_57_string, var_58_int); // 0x5ee FuncExist
	var_60_bool = var_59_bool == 0; // 0x5ef Not
	if(var_60_bool == 0) goto Label_1523; // 0x5f0 JumpB
	var_52_bool = 0; // 0x5f1 MovB
	return 2; // 0x5f2 Return
	
Label_1523:
	HasProperty(var_54_string, var_56_bool); // 0x5f3 ObjFunc
	var_52_bool = var_56_bool; // 0x5f5 Mov
	return 2; // 0x5f6 Return
}


func_2034(var_19_int)
{
	var_20_int = 0; var_21_int = 0; // 0x7f2 PushV
	var_22_string = "branch"; // 0x7f3 PushS
	GetVariable(var_22_string, var_21_int); // 0x7f4 Func
	var_19_int = var_21_int; // 0x7f6 Mov
	return 2; // 0x7f7 Return
}


func_1011(var_0_bool, var_294_bool, var_295_float)
{
	var_296_bool = 0; var_297_cvector = CVector(0,0,0); var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_float = 0; var_301_bool = 0; var_302_cvector = CVector(0,0,0); var_303_cvector = CVector(0,0,0); var_304_cvector = CVector(0,0,0); var_305_float = 0; // 0x3f3 PushV
	
Label_1012:
	IsAnimationPlaying(var_301_bool); // 0x3f4 Func
	var_306_bool = var_301_bool == 0; // 0x3f6 Not
	if(var_306_bool == 0) goto Label_1017; // 0x3f7 JumpB
	goto Label_1049; // 0x3f8 Jump
	
Label_1049:
	func_1186(var_305_float); // 0x41a NEW_2
	var_294_bool = 0; // 0x41c MovB
	return 10; // 0x41d Return
	
Label_1017:
	var_307_bool = 0; // 0x3f9 PushV
	func_1082(var_307_bool); // 0x3fa NEW_2
	if(var_307_bool == 0) goto Label_1023; // 0x3fc JumpB
	var_294_bool = 1; // 0x3fd MovB
	return 10; // 0x3fe Return
	
Label_1023:
	var_350_bool = 0; var_351_object = Obj(); // 0x3ff PushV
	var_351_object = var_0_bool; // 0x400 MovT
	func_1663(var_350_bool, var_351_object); // 0x401 NEW_2
	var_352_bool = var_350_bool == 0; // 0x403 Not
	if(var_352_bool == 0) goto Label_1031; // 0x404 JumpB
	var_294_bool = 0; // 0x405 MovB
	return 10; // 0x406 Return
	
Label_1031:
	GetPFPosition(var_302_cvector); // 0x407 TObjFunc
	GetPFPosition(var_303_cvector); // 0x409 Func
	var_304_cvector = var_302_cvector - var_303_cvector; // 0x40b Sub2
	var_305_float = var_304_cvector | var_304_cvector; // 0x40c Or2
	var_353_float = var_295_float * var_295_float; // 0x40d Mult
	var_354_bool = var_305_float < var_353_float; // 0x40e LT
	if(var_354_bool == 0) goto Label_1046; // 0x40f JumpB
	var_355_bool = 0; var_356_float = 0; // 0x410 PushV
	var_356_float = var_295_float; // 0x411 Mov
	func_847(var_305_float, var_355_bool, var_356_float); // 0x412 NEW_2
	var_294_bool = 1; // 0x414 MovB
	return 10; // 0x415 Return
	
Label_1046:
	sync(); // 0x416 Func
	goto Label_1012; // 0x418 Jump
}


func_1527(var_44_bool, var_45_object, var_46_string, var_47_float, var_48_float, var_49_float)
{
	var_50_float = 0; var_51_float = 0; // 0x5f7 PushV
	var_52_bool = 0; var_53_object = Obj(); var_54_string = ""; // 0x5f8 PushV
	var_53_object = var_45_object; // 0x5f9 Mov
	var_54_string = var_46_string; // 0x5fa Mov
	func_1515(var_52_bool, var_53_object, var_54_string); // 0x5fb NEW_2
	var_61_bool = var_52_bool == 0; // 0x5fd Not
	if(var_61_bool == 0) goto Label_1537; // 0x5fe JumpB
	var_44_bool = 0; // 0x5ff MovB
	return 2; // 0x600 Return
	
Label_1537:
	GetProperty(var_46_string, var_51_float); // 0x601 ObjFunc
	var_62_float = 0; var_63_float = 0; var_64_float = 0; var_65_float = 0; // 0x603 PushV
	var_63_float = var_51_float + var_47_float; // 0x604 Add2
	var_64_float = var_48_float; // 0x605 Mov
	var_65_float = var_49_float; // 0x606 Mov
	func_1923(var_62_float, var_63_float, var_64_float, var_65_float); // 0x607 NEW_2
	SetProperty(var_46_string, var_62_float); // 0x609 ObjFunc
	var_44_bool = 1; // 0x60b MovB
	return 2; // 0x60c Return
}


func_2040(var_16_object)
{
	var_17_int = 0; // 0x7f9 PushV
	func_2034(var_17_int); // 0x7fa NEW_2
	var_21_int = 1; // 0x7fc PushI
	var_22_bool = var_17_int == var_21_int; // 0x7fd Eq
	if(var_22_bool == 0) goto Label_2050; // 0x7fe JumpB
	WorkWithCorpse(var_16_object); // 0x7ff Func
	goto Label_2052; // 0x801 Jump
	
Label_2052:
	return 0; // 0x804 Return
	
Label_2050:
	Barter(var_16_object); // 0x802 Func
}


