task_0_event_41(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	func_24(); // 0x22 NEW_2
	var_10_object = Obj(); // 0x24 PushV
	var_10_object = var_8_cvector; // 0x25 Mov
	func_1627(); // 0x26 NEW_2
	return 0; // 0x28 Return
}


task_0_event_3(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	var_9_bool = var_8_cvector == var_0_object; // 0x2a Eq
	if(var_9_bool == 0) goto Label_49; // 0x2b JumpB
	var_10_int = 100; // 0x2c PushI
	KillTimer(var_10_int); // 0x2d Func
	Face(var_0_object); // 0x2f Func
	
Label_49:
	return 0; // 0x31 Return
}


task_0_event_4(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	var_9_bool = var_8_cvector == var_0_object; // 0x33 Eq
	if(var_9_bool == 0) goto Label_61; // 0x34 JumpB
	var_10_int = 100; // 0x35 PushI
	var_11_float = 3.0; // 0x36 PushF
	SetTimer(var_10_int, var_11_float); // 0x37 Func
	var_12_object = Obj(); // 0x39 PushV
	var_12_object = var_0_object; // 0x3a MovT
	func_1321(); // 0x3b NEW_2
	
Label_61:
	return 0; // 0x3d Return
}


	task_0_event_17(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_97_object)
	{
	var_98_bool = 0; var_99_object = Obj(); // 0x3f PushV
	var_99_object = var_97_object; // 0x40 Mov
	func_1171(var_98_bool, var_99_object); // 0x41 NEW_2
	var_126_bool = var_98_bool == 0; // 0x43 Not
	if(var_126_bool == 0) goto Label_74; // 0x44 JumpB
	var_127_object = Obj(); // 0x45 PushV
	var_127_object = var_97_object; // 0x46 Mov
	func_1799(var_127_object); // 0x47 NEW_2
	return 0; // 0x49 Return
	
Label_74:
	func_24(); // 0x4b NEW_2
	var_143_object = Obj(); // 0x4d PushV
	var_143_object = var_97_object; // 0x4e Mov
	func_1823(var_143_object); // 0x4f NEW_2
	return 0; // 0x51 Return
	}


task_0_event_30(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_bool = 0; // 0x53 PushV
	var_12_object = var_8_bool; // 0x54 Mov
	var_13_object = var_9_cvector; // 0x55 Mov
	var_14_bool = var_10_cvector; // 0x56 Mov
	func_1971(var_11_bool, var_12_object, var_13_object, var_14_bool); // 0x57 NEW_2
	if(var_11_bool == 0) goto Label_94; // 0x59 JumpB
	var_97_object = Obj(); // 0x5a PushV
	var_97_object = var_8_bool; // 0x5b Mov
	func_62(); // 0x5c NEW_2
	
Label_94:
	return 0; // 0x5e Return
}


task_0_event_1(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	var_9_bool = 0; var_10_object = Obj(); // 0x60 PushV
	var_10_object = var_8_cvector; // 0x61 Mov
	func_1943(var_9_bool, var_10_object); // 0x62 NEW_2
	if(var_9_bool == 0) goto Label_108; // 0x64 JumpB
	func_24(); // 0x66 NEW_2
	var_129_object = Obj(); // 0x68 PushV
	var_129_object = var_8_cvector; // 0x69 Mov
	func_1965(var_129_object); // 0x6a NEW_2
	
Label_108:
	return 0; // 0x6c Return
}


task_0_event_7(var_0_object, var_1_int, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	var_9_int = 100; // 0x6e PushI
	var_10_bool = var_8_cvector != var_9_int; // 0x6f Neq
	if(var_10_bool == 0) goto Label_114; // 0x70 JumpB
	return 0; // 0x71 Return
	
Label_114:
	var_11_int = 100; // 0x72 PushI
	KillTimer(var_11_int); // 0x73 Func
	StopGroup0(); // 0x75 Func
	return 0; // 0x77 Return
}


	task_1_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_97_object)
	{
	var_98_bool = 0; var_99_object = Obj(); // 0xef PushV
	var_99_object = var_97_object; // 0xf0 Mov
	func_1171(var_98_bool, var_99_object); // 0xf1 NEW_2
	var_126_bool = var_98_bool == 0; // 0xf3 Not
	if(var_126_bool == 0) goto Label_250; // 0xf4 JumpB
	var_127_object = Obj(); // 0xf5 PushV
	var_127_object = var_97_object; // 0xf6 Mov
	func_1799(var_127_object); // 0xf7 NEW_2
	return 0; // 0xf9 Return
	
Label_250:
	func_271(); // 0xfb NEW_2
	var_142_object = Obj(); // 0xfd PushV
	var_142_object = var_97_object; // 0xfe Mov
	func_1823(var_142_object); // 0xff NEW_2
	return 0; // 0x101 Return
	}


task_1_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_bool = 0; // 0x103 PushV
	var_12_object = var_8_bool; // 0x104 Mov
	var_13_object = var_9_cvector; // 0x105 Mov
	var_14_bool = var_10_cvector; // 0x106 Mov
	func_1971(var_11_bool, var_12_object, var_13_object, var_14_bool); // 0x107 NEW_2
	if(var_11_bool == 0) goto Label_270; // 0x109 JumpB
	var_97_object = Obj(); // 0x10a PushV
	var_97_object = var_8_bool; // 0x10b Mov
	func_238(); // 0x10c NEW_2
	
Label_270:
	return 0; // 0x10e Return
}


task_1_event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	func_271(); // 0x118 NEW_2
	var_9_object = Obj(); // 0x11a PushV
	var_9_object = var_8_cvector; // 0x11b Mov
	func_1627(); // 0x11c NEW_2
	return 0; // 0x11e Return
}


task_2_event_3(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_cvector, var_8_cvector)
{
	var_9_bool = 0; // 0x1b0 PushV
	var_9_bool = 0; // 0x1b1 MovB
	var_10_bool = var_2_bool; // 0x1b2 PushT
	if(var_10_bool == 0) goto Label_439; // 0x1b3 JumpB
	var_11_bool = var_8_cvector == var_0_object; // 0x1b4 Eq
	if(var_11_bool == 0) goto Label_439; // 0x1b5 JumpB
	var_9_bool = 1; // 0x1b6 MovB
	
Label_439:
	if(var_9_bool == 0) goto Label_444; // 0x1b7 JumpB
	var_12_object = Obj(); // 0x1b8 PushV
	var_12_object = var_0_object; // 0x1b9 MovT
	func_1321(); // 0x1ba NEW_2
	
Label_444:
	return 0; // 0x1bc Return
}


task_2_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_cvector, var_8_cvector)
{
	var_9_bool = 0; // 0x1be PushV
	var_9_bool = 0; // 0x1bf MovB
	var_10_bool = var_2_bool; // 0x1c0 PushT
	if(var_10_bool == 0) goto Label_453; // 0x1c1 JumpB
	var_11_bool = var_8_cvector == var_0_object; // 0x1c2 Eq
	if(var_11_bool == 0) goto Label_453; // 0x1c3 JumpB
	var_9_bool = 1; // 0x1c4 MovB
	
Label_453:
	if(var_9_bool == 0) goto Label_461; // 0x1c5 JumpB
	var_12_string = "@Stop hunt"; // 0x1c6 PushS
	Trace(var_12_string); // 0x1c7 Func
	StopAnimation(); // 0x1c9 Func
	StopGroup0(); // 0x1cb Func
	
Label_461:
	return 0; // 0x1cd Return
}


	task_2_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_97_object)
	{
	var_98_bool = 0; var_99_object = Obj(); // 0x24d PushV
	var_99_object = var_97_object; // 0x24e Mov
	func_1171(var_98_bool, var_99_object); // 0x24f NEW_2
	var_126_bool = var_98_bool == 0; // 0x251 Not
	if(var_126_bool == 0) goto Label_596; // 0x252 JumpB
	return 0; // 0x253 Return
	
Label_596:
	var_127_object = Obj(); // 0x254 PushV
	var_127_object = var_97_object; // 0x255 Mov
	func_1799(var_127_object); // 0x256 NEW_2
	var_142_bool = var_97_object == var_0_object; // 0x258 Eq
	if(var_142_bool == 0) goto Label_604; // 0x259 JumpB
	var_1_object = 0; // 0x25a SetNullT
	goto Label_611; // 0x25b Jump
	
Label_611:
	return 0; // 0x263 Return
	
Label_604:
	var_1_object = var_97_object; // 0x25c TMov
	var_143_bool = var_2_bool; // 0x25d PushT
	if(var_143_bool == 0) goto Label_611; // 0x25e JumpB
	StopAnimation(); // 0x25f Func
	StopGroup0(); // 0x261 Func
	}


task_2_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_bool = 0; // 0x265 PushV
	var_12_object = var_8_bool; // 0x266 Mov
	var_13_object = var_9_cvector; // 0x267 Mov
	var_14_bool = var_10_cvector; // 0x268 Mov
	func_1971(var_11_bool, var_12_object, var_13_object, var_14_bool); // 0x269 NEW_2
	if(var_11_bool == 0) goto Label_624; // 0x26b JumpB
	var_97_object = Obj(); // 0x26c PushV
	var_97_object = var_8_bool; // 0x26d Mov
	func_588(); // 0x26e NEW_2
	
Label_624:
	return 0; // 0x270 Return
}


task_3_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_cvector, var_8_cvector)
{
	var_9_bool = 0; var_10_bool = 0; // 0x27c PushV
	IsPlayerActor(var_8_cvector, var_10_bool); // 0x27d Func
	var_11_bool = var_10_bool; // 0x27f Push
	if(var_11_bool == 0) goto Label_647; // 0x280 JumpB
	var_12_object = Obj(); // 0x281 PushV
	var_12_object = var_8_cvector; // 0x282 Mov
	TaskCall(4); // 0x283 TaskCall
	func_668(var_12_object); // 0x284 NEW_2
	TaskReturn(); // 0x285 TaskReturn
	
Label_647:
	return 2; // 0x287 Return
}


task_3_event_3(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_cvector, var_8_cvector)
{
	var_9_bool = 0; var_10_bool = 0; // 0x288 PushV
	IsPlayerActor(var_8_cvector, var_10_bool); // 0x289 Func
	var_11_bool = var_10_bool; // 0x28b Push
	if(var_11_bool == 0) goto Label_659; // 0x28c JumpB
	var_12_object = Obj(); // 0x28d PushV
	var_12_object = var_8_cvector; // 0x28e Mov
	TaskCall(4); // 0x28f TaskCall
	func_668(var_12_object); // 0x290 NEW_2
	TaskReturn(); // 0x291 TaskReturn
	
Label_659:
	return 2; // 0x293 Return
}


task_3_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_cvector, var_8_cvector)
{
	var_9_object = Obj(); // 0x295 PushV
	var_9_object = var_8_cvector; // 0x296 Mov
	TaskCall(4); // 0x297 TaskCall
	func_668(var_9_object); // 0x298 NEW_2
	TaskReturn(); // 0x299 TaskReturn
	return 0; // 0x29b Return
}


task_4_event_3(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object)
{
	var_9_bool = 0; var_10_bool = 0; // 0x2b2 PushV
	var_11_bool = 0; var_12_object = Obj(); // 0x2b3 PushV
	var_12_object = var_8_object; // 0x2b4 Mov
	func_1171(var_11_bool, var_12_object); // 0x2b5 NEW_2
	var_45_bool = var_11_bool == 0; // 0x2b7 Not
	if(var_45_bool == 0) goto Label_698; // 0x2b8 JumpB
	return 2; // 0x2b9 Return
	
Label_698:
	var_46_bool = 0; var_47_object = Obj(); // 0x2ba PushV
	var_47_object = var_8_object; // 0x2bb Mov
	func_1863(var_46_bool, var_47_object); // 0x2bc NEW_2
	var_124_bool = var_46_bool == 0; // 0x2be Not
	if(var_124_bool == 0) goto Label_710; // 0x2bf JumpB
	var_125_object = GlobalVars[0]; // 0x2c0 PushGE
	in(var_10_bool, var_8_object); // 0x2c1 ObjFunc
	var_126_bool = var_10_bool == 0; // 0x2c3 Not
	if(var_126_bool == 0) goto Label_710; // 0x2c4 JumpB
	return 2; // 0x2c5 Return
	
Label_710:
	func_851(); // 0x2c7 NEW_2
	var_127_object = Obj(); // 0x2c9 PushV
	var_127_object = var_8_object; // 0x2ca Mov
	TaskCall(0); // 0x2cb TaskCall
	func_0(var_128_object, var_127_object); // 0x2cc NEW_2
	TaskReturn(); // 0x2cd TaskReturn
	return 2; // 0x2cf Return
}


	task_4_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_object, var_10_bool, var_97_object)
	{
	var_98_bool = 0; var_99_object = Obj(); // 0x2d1 PushV
	var_99_object = var_97_object; // 0x2d2 Mov
	func_1171(var_98_bool, var_99_object); // 0x2d3 NEW_2
	var_126_bool = var_98_bool == 0; // 0x2d5 Not
	if(var_126_bool == 0) goto Label_732; // 0x2d6 JumpB
	var_127_object = Obj(); // 0x2d7 PushV
	var_127_object = var_97_object; // 0x2d8 Mov
	func_1799(var_127_object); // 0x2d9 NEW_2
	return 0; // 0x2db Return
	
Label_732:
	func_851(); // 0x2dd NEW_2
	var_142_object = Obj(); // 0x2df PushV
	var_142_object = var_97_object; // 0x2e0 Mov
	func_1823(var_142_object); // 0x2e1 NEW_2
	return 0; // 0x2e3 Return
	}


task_4_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_object, var_10_bool)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_bool = 0; // 0x2e5 PushV
	var_12_object = var_8_object; // 0x2e6 Mov
	var_13_object = var_9_object; // 0x2e7 Mov
	var_14_bool = var_10_bool; // 0x2e8 Mov
	func_1971(var_11_bool, var_12_object, var_13_object, var_14_bool); // 0x2e9 NEW_2
	if(var_11_bool == 0) goto Label_752; // 0x2eb JumpB
	var_97_object = Obj(); // 0x2ec PushV
	var_97_object = var_8_object; // 0x2ed Mov
	func_720(); // 0x2ee NEW_2
	
Label_752:
	return 0; // 0x2f0 Return
}


task_4_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj(); // 0x2f2 PushV
	var_10_object = var_8_object; // 0x2f3 Mov
	func_1943(var_9_bool, var_10_object); // 0x2f4 NEW_2
	if(var_9_bool == 0) goto Label_766; // 0x2f6 JumpB
	func_851(); // 0x2f8 NEW_2
	var_128_object = Obj(); // 0x2fa PushV
	var_128_object = var_8_object; // 0x2fb Mov
	func_1997(var_128_object); // 0x2fc NEW_2
	
Label_766:
	return 0; // 0x2fe Return
}


task_5_event_0(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object)
{
	var_9_bool = 0; var_10_bool = 0; // 0x36e PushV
	IsOverrideActive(var_10_bool); // 0x36f Func
	var_11_bool = var_10_bool == 0; // 0x371 Not
	if(var_11_bool == 0) goto Label_887; // 0x372 JumpB
	var_12_object = Obj(); // 0x373 PushV
	var_12_object = var_8_object; // 0x374 Mov
	func_1583(var_12_object); // 0x375 NEW_2
	
Label_887:
	return 2; // 0x377 Return
}


task_5_event_22(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_int, var_10_float, var_11_float)
{
	return 0; // 0x3ee Return
}


task_5_event_16(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_string)
{
	return 0; // 0x3f0 Return
}


task_5_event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object)
{
	return 0; // 0x3f2 Return
}


event_22(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_int, var_10_float, var_11_float)
{
	var_12_object = Obj(); var_13_int = 0; var_14_float = 0; // 0x63d PushV
	var_12_object = var_8_object; // 0x63e Mov
	var_13_int = var_9_int; // 0x63f Mov
	var_14_float = var_10_float; // 0x640 Mov
	func_1239(var_12_object, var_13_int, var_14_float); // 0x641 NEW_2
	return 0; // 0x643 Return
}


event_43(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_int, var_10_float, var_11_float, var_12_cvector, var_13_cvector)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); // 0x645 PushV
	var_14_object = var_8_object; // 0x646 Mov
	var_15_int = var_9_int; // 0x647 Mov
	var_16_float = var_10_float; // 0x648 Mov
	var_17_cvector = var_12_cvector; // 0x649 Mov
	var_18_cvector = var_13_cvector; // 0x64a Mov
	func_1307(var_16_float, var_17_cvector, var_18_cvector); // 0x64b NEW_2
	return 0; // 0x64d Return
}


event_16(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_string)
{
	var_10_float = 0; var_11_float = 0; // 0x64e PushV
	var_12_string = "health"; // 0x64f PushS
	var_13_bool = var_9_string == var_12_string; // 0x650 Eq
	if(var_13_bool == 0) goto Label_1626; // 0x651 JumpB
	var_14_string = "health"; // 0x652 PushS
	GetProperty(var_14_string, var_11_float); // 0x653 Func
	var_15_int = 0; // 0x655 PushI
	var_16_bool = var_11_float <= var_15_int; // 0x656 LE
	if(var_16_bool == 0) goto Label_1626; // 0x657 JumpB
	SignalDeath(var_8_object); // 0x658 Func
	
Label_1626:
	return 2; // 0x65a Return
}


event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj(); // 0x65c PushV
	var_10_object = var_8_object; // 0x65d Mov
	func_1040(var_9_bool, var_10_object); // 0x65e NEW_2
	if(var_9_bool == 0) goto Label_1640; // 0x660 JumpB
	var_13_object = Obj(); // 0x661 PushV
	func_1467(var_13_object); // 0x662 NEW_2
	var_16_float = 0.05; // 0x664 PushF
	var_17_bool = 1; // 0x665 PushB
	ReportReputationChange(var_8_object, var_13_object, var_16_float, var_17_bool); // 0x666 Func
	
Label_1640:
	var_18_object = Obj(); // 0x668 PushV
	var_18_object = var_8_object; // 0x669 Mov
	func_2003(var_18_object); // 0x66a NEW_2
	return 0; // 0x66c Return
}


main(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector)
{
	EventDisable(1); // 0x271 EventDisable
	EventDisable(3); // 0x272 EventDisable
	var_8_int = 1; // 0x273 PushI
	Sleep(var_8_int); // 0x274 Func
	EventEnable(1); // 0x276 EventEnable
	EventEnable(3); // 0x277 EventEnable
	
Label_632:
	Hold(); // 0x278 Func
	goto Label_632; // 0x27a Jump
}


func_0(var_0_object, var_127_object)
{
	var_129_bool = 0; var_130_bool = 0; // 0x0 PushV
	var_0_object = var_127_object; // 0x1 TMov
	Face(var_127_object); // 0x2 Func
	
Label_4:
	var_131_float = 0.5; // 0x4 PushF
	Sleep(var_131_float, var_130_bool); // 0x5 Func
	var_132_bool = 0; // 0x7 PushV
	var_132_bool = 1; // 0x8 MovB
	var_133_bool = var_130_bool == 0; // 0x9 Not
	if(var_133_bool == 0) goto Label_18; // 0xa JumpB
	var_134_bool = 0; var_135_object = Obj(); // 0xb PushV
	var_135_object = var_0_object; // 0xc MovT
	func_1171(var_134_bool, var_135_object); // 0xd NEW_2
	var_136_bool = var_134_bool == 0; // 0xf Not
	if(var_136_bool == 0) goto Label_18; // 0x10 JumpB
	var_132_bool = 0; // 0x11 MovB
	
Label_18:
	if(var_132_bool == 0) goto Label_20; // 0x12 JumpB
	goto Label_21; // 0x13 Jump
	
Label_21:
	StopAsync(); // 0x15 Func
	return 2; // 0x17 Return
	
Label_20:
	goto Label_4; // 0x14 Jump
}


func_1025(var_42_cvector)
{
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); // 0x401 PushV
	GetPosition(var_46_cvector); // 0x402 Func
	GetPosition(var_47_cvector); // 0x404 ObjFunc
	var_42_cvector = var_47_cvector - var_46_cvector; // 0x406 Sub2
	return 4; // 0x407 Return
}


func_1799(var_127_object)
{
	var_128_bool = 0; var_129_bool = 0; // 0x707 PushV
	var_130_bool = var_127_object == 0; // 0x708 NullEq
	if(var_130_bool == 0) goto Label_1803; // 0x709 JumpB
	return 2; // 0x70a Return
	
Label_1803:
	var_131_object = GlobalVars[0]; // 0x70b PushGE
	in(var_129_bool, var_127_object); // 0x70c ObjFunc
	var_132_bool = var_129_bool == 0; // 0x70e Not
	if(var_132_bool == 0) goto Label_1811; // 0x70f JumpB
	var_133_object = GlobalVars[0]; // 0x710 PushGE
	add(var_127_object); // 0x711 ObjFunc
	
Label_1811:
	var_134_bool = 0; var_135_object = Obj(); // 0x713 PushV
	var_135_object = var_127_object; // 0x714 Mov
	func_1040(var_134_bool, var_135_object); // 0x715 NEW_2
	if(var_134_bool == 0) goto Label_1822; // 0x717 JumpB
	var_138_object = Obj(); // 0x718 PushV
	func_1467(var_138_object); // 0x719 NEW_2
	var_141_float = 0.0; // 0x71b PushF
	ReportReputationChange(var_127_object, var_138_object, var_141_float); // 0x71c Func
	
Label_1822:
	return 2; // 0x71e Return
}


func_1032(var_367_float)
{
	var_369_cvector = CVector(0,0,0); var_370_cvector = CVector(0,0,0); var_371_cvector = CVector(0,0,0); var_372_cvector = CVector(0,0,0); var_373_cvector = CVector(0,0,0); var_374_cvector = CVector(0,0,0); // 0x408 PushV
	GetPosition(var_372_cvector); // 0x409 Func
	GetPosition(var_373_cvector); // 0x40b ObjFunc
	var_374_cvector = var_373_cvector - var_372_cvector; // 0x40d Sub2
	var_367_float = var_374_cvector | var_374_cvector; // 0x40e Or2
	return 6; // 0x40f Return
}


func_1547(var_302_float)
{
	var_303_object = Obj(); var_304_object = Obj(); // 0x60b PushV
	CreateFloatVector(var_304_object); // 0x60c Func
	add(var_302_float); // 0x60e ObjFunc
	var_305_int = 15; // 0x610 PushI
	SendWorldWndMessage(var_305_int, var_304_object); // 0x611 Func
	return 2; // 0x613 Return
}


func_271()
{
	StopAsync(); // 0x10f Func
	StopGroup0(); // 0x111 Func
	Stop(); // 0x113 Func
	return 0; // 0x115 Return
}


func_1040(var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0; // 0x410 PushV
	IsPlayerActor(var_10_object, var_12_bool); // 0x411 Func
	var_9_bool = var_12_bool; // 0x413 Mov
	return 2; // 0x414 Return
}


func_1171(var_13_bool, var_14_object)
{
	var_15_int = 0; var_16_int = 0; // 0x493 PushV
	var_17_bool = 0; var_18_object = Obj(); // 0x494 PushV
	var_18_object = var_14_object; // 0x495 Mov
	func_1135(var_17_bool, var_18_object); // 0x496 NEW_2
	var_34_bool = var_17_bool == 0; // 0x498 Not
	if(var_34_bool == 0) goto Label_1180; // 0x499 JumpB
	var_13_bool = 0; // 0x49a MovB
	return 2; // 0x49b Return
	
Label_1180:
	var_35_bool = 0; var_36_object = Obj(); var_37_string = ""; // 0x49c PushV
	var_36_object = var_14_object; // 0x49d Mov
	var_37_string = "noaccess"; // 0x49e MovS
	func_1045(var_35_bool, var_36_object, var_37_string); // 0x49f NEW_2
	var_44_bool = var_35_bool == 0; // 0x4a1 Not
	if(var_44_bool == 0) goto Label_1189; // 0x4a2 JumpB
	var_13_bool = 1; // 0x4a3 MovB
	return 2; // 0x4a4 Return
	
Label_1189:
	var_45_string = "noaccess"; // 0x4a5 PushS
	GetProperty(var_45_string, var_16_int); // 0x4a6 ObjFunc
	var_46_int = 0; // 0x4a8 PushI
	var_13_bool = var_16_int == var_46_int; // 0x4a9 Eq2
	return 2; // 0x4aa Return
}


func_1557(var_145_object)
{
	var_146_bool = 0; var_147_bool = 0; // 0x615 PushV
	IsPlayerActor(var_145_object, var_147_bool); // 0x616 Func
	var_148_bool = var_147_bool; // 0x618 Push
	if(var_148_bool == 0) goto Label_1565; // 0x619 JumpB
	var_149_string = "attack"; // 0x61a PushS
	PlayGlobalMusic(var_149_string); // 0x61b Func
	
Label_1565:
	return 2; // 0x61d Return
}


func_1045(var_35_bool, var_36_object, var_37_string)
{
	var_38_bool = 0; var_39_bool = 0; // 0x415 PushV
	var_40_string = "HasProperty"; // 0x416 PushS
	var_41_int = 2; // 0x417 PushI
	var_42_bool = IsFuncExist(var_36_object, var_40_string, var_41_int); // 0x418 FuncExist
	var_43_bool = var_42_bool == 0; // 0x419 Not
	if(var_43_bool == 0) goto Label_1053; // 0x41a JumpB
	var_35_bool = 0; // 0x41b MovB
	return 2; // 0x41c Return
	
Label_1053:
	HasProperty(var_37_string, var_39_bool); // 0x41d ObjFunc
	var_35_bool = var_39_bool; // 0x41f Mov
	return 2; // 0x420 Return
}


func_1943(var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0; // 0x797 PushV
	var_13_bool = 0; var_14_object = Obj(); // 0x798 PushV
	var_14_object = var_10_object; // 0x799 Mov
	func_1171(var_13_bool, var_14_object); // 0x79a NEW_2
	var_47_bool = var_13_bool == 0; // 0x79c Not
	if(var_47_bool == 0) goto Label_1952; // 0x79d JumpB
	var_9_bool = 0; // 0x79e MovB
	return 2; // 0x79f Return
	
Label_1952:
	var_48_object = GlobalVars[0]; // 0x7a0 PushGE
	in(var_12_bool, var_10_object); // 0x7a1 ObjFunc
	var_49_bool = var_12_bool; // 0x7a3 Push
	if(var_49_bool == 0) goto Label_1959; // 0x7a4 JumpB
	var_9_bool = 1; // 0x7a5 MovB
	return 2; // 0x7a6 Return
	
Label_1959:
	var_50_bool = 0; var_51_object = Obj(); // 0x7a7 PushV
	var_51_object = var_10_object; // 0x7a8 Mov
	func_1863(var_50_bool, var_51_object); // 0x7a9 NEW_2
	var_9_bool = var_50_bool; // 0x7aa Mov
	return 2; // 0x7ac Return
}


func_24()
{
	StopAsync(); // 0x18 Func
	var_128_int = 100; // 0x1a PushI
	KillTimer(var_128_int); // 0x1b Func
	StopGroup0(); // 0x1d Func
	return 0; // 0x1f Return
}


func_1307(var_14_object, var_17_cvector, var_18_cvector)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); // 0x51b PushV
	GetScene(var_21_object); // 0x51c Func
	var_23_string = "scripted"; // 0x51e PushS
	var_24_string = "blood_dir.xml"; // 0x51f PushS
	AddActorByType(var_22_object, var_23_string, var_21_object, var_17_cvector, var_18_cvector, var_24_string); // 0x520 Func
	var_25_object = Obj(); // 0x522 PushV
	var_25_object = var_14_object; // 0x523 Mov
	func_1195(var_25_object); // 0x524 NEW_2
	return 4; // 0x526 Return
}


func_668(var_9_object)
{
	func_1781(); // 0x29e NEW_2
	var_16_object = Obj(); // 0x2a0 PushV
	var_16_object = var_9_object; // 0x2a1 Mov
	func_720(); // 0x2a2 NEW_2
	
Label_676:
	func_681(); // 0x2a5 NEW_2
	goto Label_676; // 0x2a7 Jump
}


func_1566()
{
	var_150_object = Obj(); var_151_object = Obj(); // 0x61e PushV
	GetScene(var_151_object); // 0x61f Func
	var_152_string = "battle"; // 0x621 PushS
	var_153_object = Obj(); // 0x622 PushV
	func_1467(var_153_object); // 0x623 NEW_2
	BroadcastMessage(var_152_string, var_153_object, var_151_object); // 0x625 Func
	return 2; // 0x627 Return
}


func_1823(var_142_object)
{
	var_143_object = Obj(); // 0x720 PushV
	var_143_object = var_142_object; // 0x721 Mov
	func_1799(var_143_object); // 0x722 NEW_2
	var_144_object = Obj(); var_145_bool = 0; // 0x724 PushV
	var_144_object = var_142_object; // 0x725 Mov
	var_145_bool = 1; // 0x726 MovB
	func_1788(var_144_object, var_145_bool); // 0x727 NEW_2
	return 0; // 0x729 Return
}


func_287(var_0_object, var_1_object, var_2_bool, var_136_object, var_137_bool)
{
	var_141_bool = 0; var_142_bool = 0; var_143_bool = 0; var_144_bool = 0; // 0x11f PushV
	var_0_object = var_136_object; // 0x120 TMov
	var_145_object = Obj(); // 0x121 PushV
	var_145_object = var_0_object; // 0x122 MovT
	func_1557(var_145_object); // 0x123 NEW_2
	func_1566(); // 0x126 NEW_2
	Face(var_0_object); // 0x128 Func
	var_156_bool = var_137_bool; // 0x12a Push
	if(var_156_bool == 0) goto Label_306; // 0x12b JumpB
	var_157_string = "all"; // 0x12c PushS
	var_158_string = "attack_on"; // 0x12d PushS
	PlayAnimation(var_157_string, var_158_string); // 0x12e Func
	WaitForAnimEnd(); // 0x130 Func
	
Label_306:
	var_159_string = "all"; // 0x132 PushS
	var_160_string = "attack_on"; // 0x133 PushS
	LockAnimationEnd(var_159_string, var_160_string); // 0x134 Func
	var_161_bool = 1; // 0x136 PushB
	SetAttackState(var_161_bool); // 0x137 Func
	
Label_313:
	var_162_bool = 0; var_163_object = Obj(); // 0x139 PushV
	var_163_object = var_0_object; // 0x13a MovT
	func_1171(var_162_bool, var_163_object); // 0x13b NEW_2
	if(var_162_bool == 0) goto Label_419; // 0x13d JumpB
	CanSee(var_144_bool, var_0_object); // 0x13e Func
	var_164_bool = var_144_bool; // 0x140 Push
	if(var_164_bool == 0) goto Label_330; // 0x141 JumpB
	var_165_object = Obj(); // 0x142 PushV
	var_165_object = var_0_object; // 0x143 MovT
	func_1557(var_165_object); // 0x144 NEW_2
	func_467(var_144_bool); // 0x147 NEW_2
	goto Label_409; // 0x149 Jump
	
Label_409:
	var_319_bool = var_1_object != 0; // 0x199 NullNeq
	if(var_319_bool == 0) goto Label_415; // 0x19a JumpB
	func_462(var_143_bool, var_144_bool); // 0x19c NEW_2
	goto Label_418; // 0x19e Jump
	
Label_418:
	goto Label_313; // 0x1a2 Jump
	
Label_415:
	var_320_int = 2; // 0x19f PushI
	Sleep(var_320_int); // 0x1a0 Func
	
Label_330:
	var_321_object = Obj(); // 0x14a PushV
	var_321_object = var_0_object; // 0x14b MovT
	func_1321(); // 0x14c NEW_2
	var_2_bool = 1; // 0x14e TMovB
	var_330_string = "all"; // 0x14f PushS
	var_331_string = "hunt"; // 0x150 PushS
	PlayAnimation(var_330_string, var_331_string); // 0x151 Func
	WaitForAnimEnd(var_143_bool); // 0x153 Func
	var_332_bool = var_143_bool == 0; // 0x155 Not
	if(var_332_bool == 0) goto Label_353; // 0x156 JumpB
	var_333_bool = var_1_object != 0; // 0x157 NullNeq
	if(var_333_bool == 0) goto Label_348; // 0x158 JumpB
	func_462(var_143_bool, var_144_bool); // 0x15a NEW_2
	
Label_348:
	var_334_string = "all"; // 0x15c PushS
	var_335_string = "attack_on"; // 0x15d PushS
	LockAnimationEnd(var_334_string, var_335_string); // 0x15e Func
	goto Label_313; // 0x160 Jump
	
Label_353:
	var_336_bool = 0; var_337_object = Obj(); // 0x161 PushV
	var_337_object = var_0_object; // 0x162 MovT
	func_1171(var_336_bool, var_337_object); // 0x163 NEW_2
	var_338_bool = var_336_bool == 0; // 0x165 Not
	if(var_338_bool == 0) goto Label_360; // 0x166 JumpB
	goto Label_419; // 0x167 Jump
	
Label_419:
	var_339_bool = 0; // 0x1a3 PushB
	SetAttackState(var_339_bool); // 0x1a4 Func
	StopAsync(); // 0x1a6 Func
	var_340_string = "all"; // 0x1a8 PushS
	var_341_string = "attack_off"; // 0x1a9 PushS
	PlayAnimation(var_340_string, var_341_string); // 0x1aa Func
	WaitForAnimEnd(); // 0x1ac Func
	return 4; // 0x1ae Return
	
Label_360:
	CanSee(var_144_bool, var_0_object); // 0x168 Func
	var_342_bool = var_144_bool; // 0x16a Push
	if(var_342_bool == 0) goto Label_371; // 0x16b JumpB
	var_2_bool = 0; // 0x16c TMovB
	Face(var_0_object); // 0x16d Func
	func_467(var_144_bool); // 0x170 NEW_2
	goto Label_409; // 0x172 Jump
	
Label_371:
	var_343_string = "all"; // 0x173 PushS
	var_344_string = "attack_on"; // 0x174 PushS
	LockAnimationEnd(var_343_string, var_344_string); // 0x175 Func
	var_345_int = 3; // 0x177 PushI
	Sleep(var_345_int, var_143_bool); // 0x178 Func
	var_346_bool = var_143_bool == 0; // 0x17a Not
	if(var_346_bool == 0) goto Label_390; // 0x17b JumpB
	var_347_bool = var_1_object != 0; // 0x17c NullNeq
	if(var_347_bool == 0) goto Label_385; // 0x17d JumpB
	func_462(var_143_bool, var_144_bool); // 0x17f NEW_2
	
Label_385:
	var_348_string = "all"; // 0x181 PushS
	var_349_string = "attack_on"; // 0x182 PushS
	LockAnimationEnd(var_348_string, var_349_string); // 0x183 Func
	goto Label_313; // 0x185 Jump
	
Label_390:
	var_350_bool = 0; var_351_object = Obj(); // 0x186 PushV
	var_351_object = var_0_object; // 0x187 MovT
	func_1171(var_350_bool, var_351_object); // 0x188 NEW_2
	var_352_bool = var_350_bool == 0; // 0x18a Not
	if(var_352_bool == 0) goto Label_397; // 0x18b JumpB
	goto Label_419; // 0x18c Jump
	
Label_397:
	var_2_bool = 0; // 0x18d TMovB
	CanSee(var_144_bool, var_0_object); // 0x18e Func
	var_353_bool = var_144_bool; // 0x190 Push
	if(var_353_bool == 0) goto Label_408; // 0x191 JumpB
	Face(var_0_object); // 0x192 Func
	func_467(var_144_bool); // 0x195 NEW_2
	goto Label_409; // 0x197 Jump
	
Label_408:
	goto Label_419; // 0x198 Jump
}


func_1057(var_249_float, var_250_object, var_251_float, var_252_int)
{
	var_253_int = 0; var_254_string = ""; var_255_int = 0; var_256_float = 0; var_257_float = 0; var_258_float = 0; var_259_int = 0; var_260_string = ""; var_261_int = 0; var_262_float = 0; var_263_float = 0; var_264_float = 0; // 0x421 PushV
	var_265_bool = 0; var_266_object = Obj(); var_267_string = ""; // 0x422 PushV
	var_266_object = var_250_object; // 0x423 Mov
	var_267_string = "health"; // 0x424 MovS
	func_1045(var_265_bool, var_266_object, var_267_string); // 0x425 NEW_2
	var_268_bool = var_265_bool == 0; // 0x427 Not
	if(var_268_bool == 0) goto Label_1067; // 0x428 JumpB
	var_249_float = 0.0; // 0x429 MovF
	return 12; // 0x42a Return
	
Label_1067:
	var_269_bool = 0; var_270_object = Obj(); var_271_string = ""; // 0x42b PushV
	var_270_object = var_250_object; // 0x42c Mov
	var_271_string = "armor"; // 0x42d MovS
	func_1045(var_269_bool, var_270_object, var_271_string); // 0x42e NEW_2
	var_272_bool = var_269_bool == 0; // 0x430 Not
	if(var_272_bool == 0) goto Label_1076; // 0x431 JumpB
	var_259_int = 0; // 0x432 MovI
	goto Label_1079; // 0x433 Jump
	
Label_1079:
	var_273_string = "armor_"; // 0x437 PushS
	var_274_string = ""; var_275_int = 0; // 0x438 PushV
	var_275_int = var_252_int; // 0x439 Mov
	func_1011(var_274_string, var_275_int); // 0x43a NEW_2
	var_260_string = var_273_string + var_274_string; // 0x43c Add2
	var_280_bool = 0; var_281_object = Obj(); var_282_string = ""; // 0x43d PushV
	var_281_object = var_250_object; // 0x43e Mov
	var_282_string = var_260_string; // 0x43f Mov
	func_1045(var_280_bool, var_281_object, var_282_string); // 0x440 NEW_2
	var_283_bool = var_280_bool == 0; // 0x442 Not
	if(var_283_bool == 0) goto Label_1094; // 0x443 JumpB
	var_261_int = 0; // 0x444 MovI
	goto Label_1096; // 0x445 Jump
	
Label_1096:
	var_284_float = 0; var_285_float = 0; var_286_float = 0; // 0x448 PushV
	var_287_int = var_259_int + var_261_int; // 0x449 Add
	var_288_float = 100.0; // 0x44a PushF
	var_285_float = var_287_int / var_287_int; // 0x44b Div2
	var_286_float = 1; // 0x44c MovI
	func_1487(var_284_float, var_285_float, var_286_float); // 0x44d NEW_2
	var_262_float = var_284_float; // 0x44e Mov
	var_290_string = "health"; // 0x450 PushS
	GetProperty(var_290_string, var_263_float); // 0x451 ObjFunc
	var_291_int = 1; // 0x453 PushI
	var_292_int = var_291_int - var_262_float; // 0x454 Sub
	var_264_float = var_251_float * var_292_int; // 0x455 Mult2
	var_293_string = "health"; // 0x456 PushS
	var_294_float = 0; var_295_float = 0; var_296_float = 0; var_297_float = 0; // 0x457 PushV
	var_295_float = var_263_float - var_264_float; // 0x458 Sub2
	var_296_float = 0; // 0x459 MovI
	var_297_float = 1; // 0x45a MovI
	func_1494(var_294_float, var_295_float, var_296_float, var_297_float); // 0x45b NEW_2
	SetProperty(var_293_string, var_294_float); // 0x45d ObjFunc
	var_300_bool = 0; var_301_object = Obj(); // 0x45f PushV
	var_301_object = var_250_object; // 0x460 Mov
	func_1040(var_300_bool, var_301_object); // 0x461 NEW_2
	if(var_300_bool == 0) goto Label_1128; // 0x463 JumpB
	var_302_float = 0; // 0x464 PushV
	var_302_float = -var_264_float; // 0x465 Neg2
	func_1547(var_302_float); // 0x466 NEW_2
	
Label_1128:
	var_249_float = var_264_float; // 0x468 Mov
	return 12; // 0x469 Return
	
Label_1094:
	GetProperty(var_260_string, var_261_int); // 0x446 ObjFunc
	
Label_1076:
	var_306_string = "armor"; // 0x434 PushS
	GetProperty(var_306_string, var_259_int); // 0x435 ObjFunc
}


func_1321()
{
	var_322_cvector = CVector(0,0,0); var_323_cvector = CVector(0,0,0); var_324_cvector = CVector(0,0,0); var_325_cvector = CVector(0,0,0); var_326_cvector = CVector(0,0,0); var_327_cvector = CVector(0,0,0); // 0x529 PushV
	GetPosition(var_325_cvector); // 0x52a ObjFunc
	GetPosition(var_326_cvector); // 0x52c Func
	var_327_cvector = var_325_cvector - var_326_cvector; // 0x52e Sub2
	var_328_float = GetByIndex(var_327_cvector, 0); // 0x52f PushE
	var_329_float = GetByIndex(var_327_cvector, 2); // 0x530 PushE
	RotateAsync(var_328_float, var_329_float); // 0x531 Func
	return 6; // 0x533 Return
}


func_681()
{
	func_1781(); // 0x2aa NEW_2
	
Label_684:
	func_767(var_11_cvector, var_9_object); // 0x2ad NEW_2
	goto Label_684; // 0x2af Jump
}


func_1195(var_25_object)
{
	var_26_bool = 0; var_27_int = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_string = ""; var_33_bool = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_string = ""; // 0x4ab PushV
	var_40_bool = var_25_object == 0; // 0x4ac NullEq
	if(var_40_bool == 0) goto Label_1199; // 0x4ad JumpB
	return 14; // 0x4ae Return
	
Label_1199:
	IsDead(var_33_bool); // 0x4af Func
	var_41_bool = var_33_bool; // 0x4b1 Push
	if(var_41_bool == 0) goto Label_1204; // 0x4b2 JumpB
	return 14; // 0x4b3 Return
	
Label_1204:
	GetSecondaryAnimationType(var_34_int); // 0x4b4 Func
	var_42_int = 0; // 0x4b6 PushI
	var_43_bool = var_34_int < var_42_int; // 0x4b7 LT
	if(var_43_bool == 0) goto Label_1210; // 0x4b8 JumpB
	return 14; // 0x4b9 Return
	
Label_1210:
	GetPosition(var_35_cvector); // 0x4ba ObjFunc
	GetPosition(var_36_cvector); // 0x4bc Func
	GetDirection(var_37_cvector); // 0x4be Func
	var_38_cvector = var_36_cvector - var_35_cvector; // 0x4c0 Sub2
	var_44_float = GetByIndex(var_38_cvector, 0); // 0x4c1 PushE
	var_45_float = GetByIndex(var_37_cvector, 0); // 0x4c2 PushE
	var_46_float = var_44_float * var_45_float; // 0x4c3 Mult
	var_47_float = GetByIndex(var_38_cvector, 2); // 0x4c4 PushE
	var_48_float = GetByIndex(var_37_cvector, 2); // 0x4c5 PushE
	var_49_float = var_47_float * var_48_float; // 0x4c6 Mult
	var_50_int = var_46_float + var_49_float; // 0x4c7 Add
	var_51_int = 0; // 0x4c8 PushI
	var_52_bool = var_50_int >= var_51_int; // 0x4c9 GE
	if(var_52_bool == 0) goto Label_1229; // 0x4ca JumpB
	var_39_string = "fhit"; // 0x4cb MovS
	goto Label_1230; // 0x4cc Jump
	
Label_1230:
	var_53_string = "hit_react"; // 0x4ce PushS
	var_54_string = "1"; // 0x4cf PushS
	var_55_int = var_39_string + var_54_string; // 0x4d0 Add
	var_56_string = "2"; // 0x4d1 PushS
	var_57_int = var_39_string + var_56_string; // 0x4d2 Add
	var_58_int = -10; // 0x4d3 PushI
	FadeSecondaryAnimation(var_53_string, var_55_int, var_57_int, var_58_int); // 0x4d4 Func
	return 14; // 0x4d6 Return
	
Label_1229:
	var_39_string = "bhit"; // 0x4cd MovS
}


func_1577(var_13_int)
{
	var_14_int = 0; var_15_int = 0; // 0x629 PushV
	var_16_string = "branch"; // 0x62a PushS
	GetVariable(var_16_string, var_15_int); // 0x62b Func
	var_13_int = var_15_int; // 0x62d Mov
	return 2; // 0x62e Return
}


func_1965(var_129_object)
{
	var_130_object = Obj(); // 0x7ae PushV
	var_130_object = var_129_object; // 0x7af Mov
	func_1997(var_130_object); // 0x7b0 NEW_2
	return 0; // 0x7b2 Return
}


func_1834(var_129_object)
{
	var_130_bool = 0; var_131_bool = 0; // 0x72a PushV
	var_132_object = GlobalVars[0]; // 0x72b PushGE
	in(var_131_bool, var_129_object); // 0x72c ObjFunc
	var_133_bool = var_131_bool; // 0x72e Push
	if(var_133_bool == 0) goto Label_1846; // 0x72f JumpB
	var_134_object = Obj(); var_135_bool = 0; // 0x730 PushV
	var_134_object = var_129_object; // 0x731 Mov
	var_135_bool = 1; // 0x732 MovB
	func_1788(var_134_object, var_135_bool); // 0x733 NEW_2
	goto Label_1854; // 0x735 Jump
	
Label_1854:
	return 2; // 0x73e Return
	
Label_1846:
	var_354_object = Obj(); // 0x736 PushV
	var_354_object = var_129_object; // 0x737 Mov
	TaskCall(1); // 0x738 TaskCall
	func_120(var_356_bool, var_354_object); // 0x739 NEW_2
	TaskReturn(); // 0x73a TaskReturn
	ResetAAS(); // 0x73c Func
}


func_1583(var_12_object)
{
	var_13_int = 0; // 0x630 PushV
	func_1577(var_13_int); // 0x631 NEW_2
	var_17_int = 1; // 0x633 PushI
	var_18_bool = var_13_int == var_17_int; // 0x634 Eq
	if(var_18_bool == 0) goto Label_1593; // 0x635 JumpB
	WorkWithCorpse(var_12_object); // 0x636 Func
	goto Label_1595; // 0x638 Jump
	
Label_1595:
	return 0; // 0x63b Return
	
Label_1593:
	Barter(var_12_object); // 0x639 Func
}


func_689()
{
	return 0; // 0x2b1 Return
}


func_1971(var_11_bool, var_12_object, var_13_object, var_14_bool)
{
	var_15_bool = 0; var_16_bool = 0; // 0x7b3 PushV
	var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x7b4 PushV
	var_18_object = var_13_object; // 0x7b5 Mov
	var_19_bool = !var_14_bool; // 0x7b6 Not2
	func_1645(var_17_bool, var_18_object, var_19_bool); // 0x7b7 NEW_2
	if(var_17_bool == 0) goto Label_1995; // 0x7b9 JumpB
	CanSee(var_16_bool, var_12_object); // 0x7ba Func
	var_85_bool = 0; // 0x7bc PushV
	var_85_bool = 1; // 0x7bd MovB
	var_86_bool = var_16_bool; // 0x7be Push
	if(var_86_bool == 0) goto Label_1992; // 0x7bf JumpB
	var_87_float = 0; var_88_object = Obj(); // 0x7c0 PushV
	var_88_object = var_12_object; // 0x7c1 Mov
	func_1032(var_88_object); // 0x7c2 NEW_2
	var_95_float = 490000.0; // 0x7c4 PushF
	var_96_bool = var_87_float <= var_95_float; // 0x7c5 LE
	if(var_96_bool == 0) goto Label_1992; // 0x7c6 JumpB
	var_85_bool = 0; // 0x7c7 MovB
	
Label_1992:
	if(var_85_bool == 0) goto Label_1995; // 0x7c8 JumpB
	var_11_bool = 1; // 0x7c9 MovB
	return 2; // 0x7ca Return
	
Label_1995:
	var_11_bool = 0; // 0x7cb MovB
	return 2; // 0x7cc Return
}


func_1332(var_240_float)
{
	var_242_float = 0; var_243_float = 0; var_244_float = 0; var_245_float = 0; // 0x534 PushV
	GetEyesHeight(var_244_float); // 0x535 Func
	GetEyesHeight(var_245_float); // 0x537 ObjFunc
	var_240_float = var_245_float - var_244_float; // 0x539 Sub2
	return 4; // 0x53a Return
}


func_1467(var_13_object)
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x5bb PushV
	self(var_15_object); // 0x5bc Func
	var_13_object = var_15_object; // 0x5be Mov
	return 2; // 0x5bf Return
}


func_1339(var_47_string)
{
	var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_int = 0; var_52_bool = 0; var_53_float = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_int = 0; var_58_bool = 0; var_59_int = 0; var_60_bool = 0; var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x53b PushV
	IsExisting3DSound(var_56_bool, var_47_string); // 0x53c Func
	var_64_bool = var_56_bool == 0; // 0x53e Not
	if(var_64_bool == 0) goto Label_1364; // 0x53f JumpB
	var_57_int = 0; // 0x540 MovI
	
Label_1345:
	var_65_int = 1; // 0x541 PushI
	var_66_int = var_57_int + var_65_int; // 0x542 Add
	var_67_int = var_47_string + var_66_int; // 0x543 Add
	IsExisting3DSound(var_58_bool, var_67_int); // 0x544 Func
	var_68_bool = var_58_bool == 0; // 0x546 Not
	if(var_68_bool == 0) goto Label_1353; // 0x547 JumpB
	goto Label_1356; // 0x548 Jump
	
Label_1356:
	var_69_bool = var_57_int == 0; // 0x54c Not
	if(var_69_bool == 0) goto Label_1359; // 0x54d JumpB
	return 16; // 0x54e Return
	
Label_1359:
	irand(var_59_int, var_57_int); // 0x54f Func
	var_70_int = 1; // 0x551 PushI
	var_71_int = var_59_int + var_70_int; // 0x552 Add
	var_47_string = var_47_string + var_71_int; // 0x553 Add2
	
Label_1364:
	Is3DSoundLoaded(var_60_bool, var_47_string); // 0x554 Func
	var_72_bool = var_60_bool; // 0x556 Push
	if(var_72_bool == 0) goto Label_1379; // 0x557 JumpB
	GetEyesHeight(var_61_float); // 0x558 Func
	GetDirection(var_62_cvector); // 0x55a Func
	var_73_int = 50; // 0x55c PushI
	var_63_cvector = var_62_cvector * var_73_int; // 0x55d Mult2
	var_74_float = GetByIndex(var_63_cvector, 1); // 0x55e PushE
	var_74_float = var_74_float + var_61_float; // 0x55f Add2
	SetByIndex(var_63_cvector, 1) = var_74_float; // 0x560 PopE
	PlayGlobalSound(var_47_string, var_63_cvector); // 0x561 Func
	
Label_1379:
	return 16; // 0x563 Return
	
Label_1353:
	var_75_int = 1; // 0x549 PushI
	var_57_int = var_57_int + var_75_int; // 0x54a Add2
	goto Label_1345; // 0x54b Jump
}


func_1855(var_365_bool, var_366_object)
{
	var_367_float = 0; var_368_object = Obj(); // 0x740 PushV
	var_368_object = var_366_object; // 0x741 Mov
	func_1032(var_368_object); // 0x742 NEW_2
	var_375_float = 40000.0; // 0x744 PushF
	var_365_bool = var_367_float <= var_375_float; // 0x745 LE2
	return 0; // 0x746 Return
}


func_1473(var_40_cvector, var_41_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x5c1 PushV
	var_50_int = var_41_cvector | var_41_cvector; // 0x5c2 Or
	var_49_float = sqrt(var_50_int); // 0x5c3 Sqrt2
	var_51_float = 0.0; // 0x5c4 PushF
	var_52_bool = var_49_float < var_51_float; // 0x5c5 LT
	if(var_52_bool == 0) goto Label_1481; // 0x5c6 JumpB
	var_40_cvector = CVector(0.0, 0.0, 0.0); // 0x5c7 MovV
	return 2; // 0x5c8 Return
	
Label_1481:
	var_40_cvector = var_41_cvector / var_41_cvector; // 0x5c9 Div2
	return 2; // 0x5ca Return
}


func_1863(var_50_bool, var_51_object)
{
	var_52_float = 0; var_53_string = ""; var_54_float = 0; var_55_float = 0; var_56_string = ""; var_57_float = 0; // 0x747 PushV
	var_58_bool = 0; var_59_object = Obj(); // 0x748 PushV
	var_59_object = var_51_object; // 0x749 Mov
	func_1171(var_58_bool, var_59_object); // 0x74a NEW_2
	var_60_bool = var_58_bool == 0; // 0x74c Not
	if(var_60_bool == 0) goto Label_1872; // 0x74d JumpB
	var_50_bool = 0; // 0x74e MovB
	return 6; // 0x74f Return
	
Label_1872:
	var_61_bool = 0; var_62_object = Obj(); // 0x750 PushV
	var_62_object = var_51_object; // 0x751 Mov
	func_1040(var_61_bool, var_62_object); // 0x752 NEW_2
	if(var_61_bool == 0) goto Label_1883; // 0x754 JumpB
	var_65_string = "reputation"; // 0x755 PushS
	GetProperty(var_65_string, var_55_float); // 0x756 ObjFunc
	var_66_float = 0.33; // 0x758 PushF
	var_50_bool = var_55_float < var_66_float; // 0x759 LT2
	return 6; // 0x75a Return
	
Label_1883:
	var_67_bool = 0; var_68_object = Obj(); var_69_string = ""; // 0x75b PushV
	var_68_object = var_51_object; // 0x75c Mov
	var_69_string = "class"; // 0x75d MovS
	func_1045(var_67_bool, var_68_object, var_69_string); // 0x75e NEW_2
	var_70_bool = var_67_bool == 0; // 0x760 Not
	if(var_70_bool == 0) goto Label_1892; // 0x761 JumpB
	var_50_bool = 0; // 0x762 MovB
	return 6; // 0x763 Return
	
Label_1892:
	var_71_string = "class"; // 0x764 PushS
	GetProperty(var_71_string, var_56_string); // 0x765 ObjFunc
	var_72_bool = 0; // 0x767 PushV
	var_72_bool = 1; // 0x768 MovB
	var_73_bool = 0; // 0x769 PushV
	var_73_bool = 1; // 0x76a MovB
	var_74_string = "bomber"; // 0x76b PushS
	var_75_bool = var_56_string == var_74_string; // 0x76c Eq
	if(var_75_bool == 0) goto Label_1906; // 0x76d JumpB
	var_76_string = "hunter"; // 0x76e PushS
	var_77_bool = var_56_string == var_76_string; // 0x76f Eq
	if(var_77_bool == 0) goto Label_1906; // 0x770 JumpB
	var_73_bool = 0; // 0x771 MovB
	
Label_1906:
	if(var_73_bool == 0) goto Label_1911; // 0x772 JumpB
	var_78_string = "grabitel"; // 0x773 PushS
	var_79_bool = var_56_string == var_78_string; // 0x774 Eq
	if(var_79_bool == 0) goto Label_1911; // 0x775 JumpB
	var_72_bool = 0; // 0x776 MovB
	
Label_1911:
	if(var_72_bool == 0) goto Label_1914; // 0x777 JumpB
	var_50_bool = 1; // 0x778 MovB
	return 6; // 0x779 Return
	
Label_1914:
	var_80_bool = 0; var_81_object = Obj(); var_82_string = ""; // 0x77a PushV
	var_81_object = var_51_object; // 0x77b Mov
	var_82_string = "disease"; // 0x77c MovS
	func_1045(var_80_bool, var_81_object, var_82_string); // 0x77d NEW_2
	var_83_bool = var_80_bool == 0; // 0x77f Not
	if(var_83_bool == 0) goto Label_1923; // 0x780 JumpB
	var_50_bool = 0; // 0x781 MovB
	return 6; // 0x782 Return
	
Label_1923:
	var_84_bool = 0; // 0x783 PushV
	var_84_bool = 1; // 0x784 MovB
	var_85_bool = 0; var_86_string = ""; // 0x785 PushV
	var_86_string = var_56_string; // 0x786 Mov
	func_1380(var_85_bool, var_86_string); // 0x787 NEW_2
	if(var_85_bool == 0) goto Label_1934; // 0x789 JumpB
	var_124_string = "dog"; // 0x78a PushS
	var_125_bool = var_56_string == var_124_string; // 0x78b Eq
	if(var_125_bool == 0) goto Label_1934; // 0x78c JumpB
	var_84_bool = 0; // 0x78d MovB
	
Label_1934:
	if(var_84_bool == 0) goto Label_1941; // 0x78e JumpB
	var_126_string = "disease"; // 0x78f PushS
	GetProperty(var_126_string, var_57_float); // 0x790 ObjFunc
	var_127_int = 0; // 0x792 PushI
	var_50_bool = var_57_float > var_127_int; // 0x793 GT2
	return 6; // 0x794 Return
	
Label_1941:
	var_50_bool = 0; // 0x795 MovB
	return 6; // 0x796 Return
}


func_1483(var_299_float, var_300_cvector, var_301_cvector)
{
	var_302_cvector = CVector(0,0,0); var_303_cvector = CVector(0,0,0); // 0x5cb PushV
	var_303_cvector = var_301_cvector - var_300_cvector; // 0x5cc Sub2
	var_299_float = var_303_cvector | var_303_cvector; // 0x5cd Or2
	return 2; // 0x5ce Return
}


func_1997(var_128_object)
{
	var_129_object = Obj(); // 0x7ce PushV
	var_129_object = var_128_object; // 0x7cf Mov
	func_1834(var_129_object); // 0x7d0 NEW_2
	return 0; // 0x7d2 Return
}


func_462(var_0_object, var_1_object)
{
	var_0_object = var_1_object; // 0x1ce TMovT
	var_1_object = 0; // 0x1cf SetNullT
	Face(var_0_object); // 0x1d0 Func
	return 0; // 0x1d2 Return
}


func_1487(var_284_float, var_285_float, var_286_float)
{
	var_289_bool = var_285_float < var_286_float; // 0x5d0 LT
	if(var_289_bool == 0) goto Label_1492; // 0x5d1 JumpB
	var_284_float = var_285_float; // 0x5d2 Mov
	goto Label_1493; // 0x5d3 Jump
	
Label_1493:
	return 0; // 0x5d5 Return
	
Label_1492:
	var_284_float = var_286_float; // 0x5d4 Mov
}


func_467(var_0_object)
{
	var_166_cvector = CVector(0,0,0); var_167_cvector = CVector(0,0,0); var_168_bool = 0; var_169_cvector = CVector(0,0,0); var_170_cvector = CVector(0,0,0); var_171_object = Obj(); var_172_object = Obj(); var_173_cvector = CVector(0,0,0); var_174_object = Obj(); var_175_int = 0; var_176_cvector = CVector(0,0,0); var_177_float = 0; var_178_object = Obj(); var_179_object = Obj(); var_180_cvector = CVector(0,0,0); var_181_cvector = CVector(0,0,0); var_182_bool = 0; var_183_cvector = CVector(0,0,0); var_184_cvector = CVector(0,0,0); var_185_object = Obj(); var_186_object = Obj(); var_187_cvector = CVector(0,0,0); var_188_object = Obj(); var_189_int = 0; var_190_cvector = CVector(0,0,0); var_191_float = 0; var_192_object = Obj(); var_193_object = Obj(); // 0x1d3 PushV
	var_194_object = Obj(); // 0x1d4 PushV
	var_194_object = var_0_object; // 0x1d5 MovT
	func_1557(var_194_object); // 0x1d6 NEW_2
	ReportAttack(var_0_object); // 0x1d8 Func
	var_195_bool = 0; var_196_object = Obj(); // 0x1da PushV
	var_196_object = var_0_object; // 0x1db MovT
	func_1040(var_195_bool, var_196_object); // 0x1dc NEW_2
	if(var_195_bool == 0) goto Label_484; // 0x1de JumpB
	var_197_object = Obj(); // 0x1df PushV
	func_1467(var_197_object); // 0x1e0 NEW_2
	SendPlayerEnemy(var_0_object, var_197_object); // 0x1e2 Func
	
Label_484:
	GetDirection(var_180_cvector); // 0x1e4 Func
	var_198_cvector = CVector(0,0,0); var_199_object = Obj(); // 0x1e6 PushV
	var_199_object = var_0_object; // 0x1e7 MovT
	func_1025(var_199_object); // 0x1e8 NEW_2
	var_181_cvector = var_198_cvector; // 0x1e9 Mov
	var_204_float = 0; var_205_cvector = CVector(0,0,0); var_206_cvector = CVector(0,0,0); // 0x1eb PushV
	var_205_cvector = var_180_cvector; // 0x1ec Mov
	var_206_cvector = var_181_cvector; // 0x1ed Mov
	func_1530(var_204_float, var_205_cvector, var_206_cvector); // 0x1ee NEW_2
	var_228_float = 0.99939; // 0x1f0 PushF
	var_229_bool = var_204_float < var_228_float; // 0x1f1 LT
	if(var_229_bool == 0) goto Label_500; // 0x1f2 JumpB
	return 28; // 0x1f3 Return
	
Label_500:
	func_1566(); // 0x1f5 NEW_2
	var_230_string = "all"; // 0x1f7 PushS
	var_231_string = "attack_begin1"; // 0x1f8 PushS
	PlayAnimation(var_230_string, var_231_string); // 0x1f9 Func
	var_232_string = "attack"; // 0x1fb PushS
	GetGeometryLocator(var_232_string, var_182_bool, var_183_cvector, var_184_cvector); // 0x1fc Func
	var_233_bool = var_182_bool; // 0x1fe Push
	if(var_233_bool == 0) goto Label_521; // 0x1ff JumpB
	GetScene(var_186_object); // 0x200 Func
	var_234_string = "light-dynamic"; // 0x202 PushS
	var_235_string = "soldier_fire.xml"; // 0x203 PushS
	AddActorByType(var_185_object, var_234_string, var_186_object, var_183_cvector, var_184_cvector, var_235_string); // 0x204 Func
	var_186_object = 0; // 0x206 SetNull
	var_185_object = 0; // 0x207 SetNull
	goto Label_523; // 0x208 Jump
	
Label_523:
	var_236_string = "shot"; // 0x20b PushS
	Speak(var_236_string); // 0x20c Func
	GetDirection(var_180_cvector); // 0x20e Func
	var_237_cvector = CVector(0,0,0); var_238_object = Obj(); // 0x210 PushV
	var_238_object = var_0_object; // 0x211 MovT
	func_1025(var_238_object); // 0x212 NEW_2
	var_181_cvector = var_237_cvector; // 0x213 Mov
	var_239_float = GetByIndex(var_181_cvector, 1); // 0x215 PushE
	var_240_float = 0; var_241_object = Obj(); // 0x216 PushV
	var_241_object = var_0_object; // 0x217 MovT
	func_1332(var_241_object); // 0x218 NEW_2
	var_239_float = var_239_float + var_240_float; // 0x21a Add2
	SetByIndex(var_181_cvector, 1) = var_239_float; // 0x21b PopE
	var_246_float = 0.03491; // 0x21c PushF
	RandVecCone3D(var_187_cvector, var_181_cvector, var_246_float); // 0x21d Func
	GetVictimMaterial(var_187_cvector, var_188_object, var_189_int, var_190_cvector); // 0x21f Func
	var_247_bool = var_188_object != 0; // 0x221 NullNeq
	if(var_247_bool == 0) goto Label_576; // 0x222 JumpB
	var_248_bool = var_188_object == var_0_object; // 0x223 Eq
	if(var_248_bool == 0) goto Label_561; // 0x224 JumpB
	var_249_float = 0; var_250_object = Obj(); var_251_float = 0; var_252_int = 0; // 0x225 PushV
	var_250_object = var_0_object; // 0x226 MovT
	var_251_float = 1.5; // 0x227 MovF
	var_252_int = 1; // 0x228 MovI
	func_1057(var_249_float, var_250_object, var_251_float, var_252_int); // 0x229 NEW_2
	var_191_float = var_249_float; // 0x22a Mov
	var_307_int = 2; // 0x22c PushI
	var_308_float = 1.5; // 0x22d PushF
	ReportHit(var_0_object, var_307_int, var_191_float, var_308_float); // 0x22e Func
	goto Label_576; // 0x230 Jump
	
Label_576:
	var_309_string = "all"; // 0x240 PushS
	var_310_string = "attack_end1"; // 0x241 PushS
	PlayAnimation(var_309_string, var_310_string); // 0x242 Func
	WaitForAnimEnd(); // 0x244 Func
	var_311_string = "all"; // 0x246 PushS
	var_312_string = "attack_on"; // 0x247 PushS
	LockAnimationEnd(var_311_string, var_312_string); // 0x248 Func
	return 28; // 0x24a Return
	
Label_561:
	var_313_int = -1; // 0x231 PushI
	var_314_bool = var_189_int != var_313_int; // 0x232 Neq
	if(var_314_bool == 0) goto Label_576; // 0x233 JumpB
	GetScene(var_192_object); // 0x234 Func
	var_315_string = "scripted"; // 0x236 PushS
	var_316_cvector = CVector(0.0, 0.0, 1.0); // 0x237 PushVec
	var_317_string = "richochet.xml"; // 0x238 PushS
	AddActorByType(var_193_object, var_315_string, var_192_object, var_190_cvector, var_316_cvector, var_317_string); // 0x239 Func
	var_318_string = "Material"; // 0x23b PushS
	SetScriptProperty(var_318_string, var_189_int); // 0x23c ObjFunc
	var_193_object = 0; // 0x23e SetNull
	var_192_object = 0; // 0x23f SetNull
	
Label_521:
	WaitForAnimEnd(); // 0x209 Func
}


func_851()
{
	StopGroup0(); // 0x353 Func
	Stop(); // 0x355 Func
	return 0; // 0x357 Return
}


func_979(var_46_string)
{
	RemoveRTEnvelope(); // 0x3d4 Func
	SetDeathState(); // 0x3d6 Func
	Stop(); // 0x3d8 Func
	StopAsync(); // 0x3da Func
	StopSecondaryAnimation(); // 0x3dc Func
	var_47_string = ""; // 0x3de PushV
	var_47_string = var_46_string; // 0x3df Mov
	func_1339(var_47_string); // 0x3e0 NEW_2
	var_76_string = "all"; // 0x3e2 PushS
	PlayAnimation(var_76_string, var_46_string); // 0x3e3 Func
	WaitForAnimEnd(); // 0x3e5 Func
	var_77_string = "all"; // 0x3e7 PushS
	LockAnimationEnd(var_77_string, var_46_string); // 0x3e8 Func
	RemoveEnvelope(); // 0x3ea Func
	return 0; // 0x3ec Return
}


func_1494(var_294_float, var_295_float, var_296_float, var_297_float)
{
	var_298_bool = var_295_float < var_296_float; // 0x5d7 LT
	if(var_298_bool == 0) goto Label_1499; // 0x5d8 JumpB
	var_294_float = var_296_float; // 0x5d9 Mov
	return 0; // 0x5da Return
	
Label_1499:
	var_299_bool = var_295_float > var_297_float; // 0x5db GT
	if(var_299_bool == 0) goto Label_1503; // 0x5dc JumpB
	var_294_float = var_297_float; // 0x5dd Mov
	return 0; // 0x5de Return
	
Label_1503:
	var_294_float = var_295_float; // 0x5df Mov
	return 0; // 0x5e0 Return
}


func_1239(var_12_object, var_13_int, var_14_float)
{
	var_15_cvector = CVector(0,0,0); var_16_object = Obj(); var_17_int = 0; var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_int = 0; var_22_int = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_object = Obj(); var_26_int = 0; var_27_bool = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_int = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); // 0x4d7 PushV
	var_33_bool = 0; // 0x4d8 PushV
	var_33_bool = 0; // 0x4d9 MovB
	var_34_bool = 0; // 0x4da PushV
	var_34_bool = 0; // 0x4db MovB
	var_35_object = var_12_object; // 0x4dc Push
	if(var_35_object == 0) goto Label_1250; // 0x4dd JumpB
	var_36_int = 4; // 0x4de PushI
	var_37_bool = var_13_int != var_36_int; // 0x4df Neq
	if(var_37_bool == 0) goto Label_1250; // 0x4e0 JumpB
	var_34_bool = 1; // 0x4e1 MovB
	
Label_1250:
	if(var_34_bool == 0) goto Label_1255; // 0x4e2 JumpB
	var_38_int = 5; // 0x4e3 PushI
	var_39_bool = var_13_int != var_38_int; // 0x4e4 Neq
	if(var_39_bool == 0) goto Label_1255; // 0x4e5 JumpB
	var_33_bool = 1; // 0x4e6 MovB
	
Label_1255:
	if(var_33_bool == 0) goto Label_1302; // 0x4e7 JumpB
	var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); // 0x4e8 PushV
	var_42_cvector = CVector(0,0,0); var_43_object = Obj(); // 0x4e9 PushV
	var_43_object = var_12_object; // 0x4ea Mov
	func_1025(var_43_object); // 0x4eb NEW_2
	var_41_cvector = var_42_cvector; // 0x4ec Mov
	func_1473(var_40_cvector, var_41_cvector); // 0x4ee NEW_2
	var_24_cvector = var_40_cvector; // 0x4ef Mov
	CreateVectorVector(var_25_object); // 0x4f1 Func
	var_26_int = 1; // 0x4f3 MovI
	
Label_1268:
	var_53_string = "hit"; // 0x4f4 PushS
	var_54_int = var_53_string + var_26_int; // 0x4f5 Add
	GetGeometryLocator(var_54_int, var_27_bool, var_28_cvector, var_29_cvector); // 0x4f6 Func
	var_55_bool = var_27_bool == 0; // 0x4f8 Not
	if(var_55_bool == 0) goto Label_1275; // 0x4f9 JumpB
	goto Label_1284; // 0x4fa Jump
	
Label_1284:
	size(var_30_int); // 0x504 ObjFunc
	var_56_int = var_30_int; // 0x506 Push
	if(var_56_int == 0) goto Label_1301; // 0x507 JumpB
	irand(var_31_int, var_30_int); // 0x508 Func
	get(var_32_cvector, var_31_int); // 0x50a ObjFunc
	var_57_object = Obj(); var_58_int = 0; var_59_float = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); // 0x50c PushV
	var_57_object = var_12_object; // 0x50d Mov
	var_58_int = var_13_int; // 0x50e Mov
	var_59_float = var_14_float; // 0x50f Mov
	var_60_cvector = var_32_cvector; // 0x510 Mov
	var_61_cvector = -var_24_cvector; // 0x511 Neg2
	func_1307(var_59_float, var_60_cvector, var_61_cvector); // 0x512 NEW_2
	return 18; // 0x514 Return
	
Label_1301:
	var_25_object = 0; // 0x515 SetNull
	
Label_1302:
	var_102_object = Obj(); // 0x516 PushV
	var_102_object = var_12_object; // 0x517 Mov
	func_1195(var_102_object); // 0x518 NEW_2
	return 18; // 0x51a Return
	
Label_1275:
	var_103_int = var_29_cvector | var_24_cvector; // 0x4fb Or
	var_104_float = 0.70711; // 0x4fc PushF
	var_105_bool = var_103_int >= var_104_float; // 0x4fd GE
	if(var_105_bool == 0) goto Label_1281; // 0x4fe JumpB
	add(var_28_cvector); // 0x4ff ObjFunc
	
Label_1281:
	var_106_int = 1; // 0x501 PushI
	var_26_int = var_26_int + var_106_int; // 0x502 Add2
	goto Label_1268; // 0x503 Jump
}


func_856()
{
	return 0; // 0x358 Return
}


func_2003(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); // 0x7d3 PushV
	GetScene(var_20_object); // 0x7d4 Func
	var_21_object = Obj(); // 0x7d6 PushV
	func_1467(var_21_object); // 0x7d7 NEW_2
	RemoveStationaryActor(var_21_object); // 0x7d9 ObjFunc
	var_22_object = Obj(); // 0x7db PushV
	var_22_object = var_18_object; // 0x7dc Mov
	TaskCall(5); // 0x7dd TaskCall
	func_857(var_22_object); // 0x7de NEW_2
	TaskReturn(); // 0x7df TaskReturn
	return 2; // 0x7e1 Return
}


func_857(var_22_object)
{
	var_23_object = Obj(); // 0x35a PushV
	var_23_object = var_22_object; // 0x35b Mov
	func_863(var_23_object); // 0x35c NEW_2
	return 0; // 0x35e Return
}


func_120(var_0_object, var_354_object)
{
	var_357_bool = 0; var_358_int = 0; var_359_int = 0; var_360_bool = 0; var_361_int = 0; var_362_int = 0; // 0x78 PushV
	var_0_object = var_354_object; // 0x79 TMov
	var_363_object = Obj(); // 0x7a PushV
	var_363_object = var_0_object; // 0x7b MovT
	func_1557(var_363_object); // 0x7c NEW_2
	CanSee(var_362_int, var_0_object); // 0x7e Func
	var_364_object = var_1_object; // 0x80 PushT
	if(var_364_object == 0) goto Label_143; // 0x81 JumpB
	var_365_bool = 0; var_366_object = Obj(); // 0x82 PushV
	var_366_object = var_0_object; // 0x83 MovT
	func_1855(var_365_bool, var_366_object); // 0x84 NEW_2
	if(var_365_bool == 0) goto Label_141; // 0x86 JumpB
	var_376_object = Obj(); var_377_bool = 0; // 0x87 PushV
	var_376_object = var_0_object; // 0x88 MovT
	var_377_bool = 1; // 0x89 MovB
	func_1788(var_376_object, var_377_bool); // 0x8a NEW_2
	return 6; // 0x8c Return
	
Label_141:
	Face(var_0_object); // 0x8d Func
	
Label_143:
	func_1566(); // 0x90 NEW_2
	var_378_string = "all"; // 0x92 PushS
	var_379_string = "shoot_begin"; // 0x93 PushS
	PlayAnimation(var_378_string, var_379_string); // 0x94 Func
	WaitForAnimEnd(var_360_bool); // 0x96 Func
	var_380_bool = var_360_bool == 0; // 0x98 Not
	if(var_380_bool == 0) goto Label_157; // 0x99 JumpB
	StopAsync(); // 0x9a Func
	return 6; // 0x9c Return
	
Label_157:
	var_381_string = "shot"; // 0x9d PushS
	Speak(var_381_string); // 0x9e Func
	var_382_string = "all"; // 0xa0 PushS
	var_383_string = "shoot_end"; // 0xa1 PushS
	PlayAnimation(var_382_string, var_383_string); // 0xa2 Func
	WaitForAnimEnd(var_360_bool); // 0xa4 Func
	var_384_bool = var_360_bool == 0; // 0xa6 Not
	if(var_384_bool == 0) goto Label_171; // 0xa7 JumpB
	StopAsync(); // 0xa8 Func
	return 6; // 0xaa Return
	
Label_171:
	var_385_string = "all"; // 0xab PushS
	var_386_string = "shoot_end"; // 0xac PushS
	LockAnimationEnd(var_385_string, var_386_string); // 0xad Func
	var_361_int = 0; // 0xaf MovI
	var_362_int = 0; // 0xb0 MovI
	
Label_177:
	var_387_int = 20; // 0xb1 PushI
	var_388_bool = var_362_int < var_387_int; // 0xb2 LT
	if(var_388_bool == 0) goto Label_229; // 0xb3 JumpB
	var_389_object = Obj(); // 0xb4 PushV
	var_389_object = var_0_object; // 0xb5 MovT
	func_1557(var_389_object); // 0xb6 NEW_2
	var_390_float = 0.5; // 0xb8 PushF
	Sleep(var_390_float, var_360_bool); // 0xb9 Func
	var_391_bool = var_360_bool == 0; // 0xbb Not
	if(var_391_bool == 0) goto Label_190; // 0xbc JumpB
	return 6; // 0xbd Return
	
Label_190:
	CanSee(var_362_int, var_0_object); // 0xbe Func
	var_392_object = var_1_object; // 0xc0 PushT
	if(var_392_object == 0) goto Label_212; // 0xc1 JumpB
	var_361_int = 0; // 0xc2 MovI
	var_393_bool = 0; var_394_object = Obj(); // 0xc3 PushV
	var_394_object = var_0_object; // 0xc4 MovT
	func_1855(var_393_bool, var_394_object); // 0xc5 NEW_2
	if(var_393_bool == 0) goto Label_209; // 0xc7 JumpB
	func_271(); // 0xc9 NEW_2
	var_395_object = Obj(); var_396_bool = 0; // 0xcb PushV
	var_395_object = var_0_object; // 0xcc MovT
	var_396_bool = 0; // 0xcd MovB
	func_1788(var_395_object, var_396_bool); // 0xce NEW_2
	return 6; // 0xd0 Return
	
Label_209:
	Face(var_0_object); // 0xd1 Func
	goto Label_226; // 0xd3 Jump
	
Label_226:
	var_397_int = 1; // 0xe2 PushI
	var_362_int = var_362_int + var_397_int; // 0xe3 Add2
	goto Label_177; // 0xe4 Jump
	
Label_212:
	StopAsync(); // 0xd4 Func
	var_398_int = 1; // 0xd6 PushI
	var_361_int = var_361_int + var_398_int; // 0xd7 Add2
	var_399_int = 4; // 0xd8 PushI
	var_400_bool = var_361_int == var_399_int; // 0xd9 Eq
	if(var_400_bool == 0) goto Label_226; // 0xda JumpB
	var_401_string = "all"; // 0xdb PushS
	var_402_string = "attack_off"; // 0xdc PushS
	PlayAnimation(var_401_string, var_402_string); // 0xdd Func
	WaitForAnimEnd(); // 0xdf Func
	return 6; // 0xe1 Return
	
Label_229:
	func_271(); // 0xe6 NEW_2
	var_403_object = Obj(); var_404_bool = 0; // 0xe8 PushV
	var_403_object = var_354_object; // 0xe9 Mov
	var_404_bool = 0; // 0xea MovB
	func_1788(var_403_object, var_404_bool); // 0xeb NEW_2
	return 6; // 0xed Return
}


func_863(var_23_object)
{
	EventDisable(0); // 0x360 EventDisable
	var_24_object = Obj(); // 0x361 PushV
	var_24_object = var_23_object; // 0x362 Mov
	func_888(var_24_object); // 0x363 NEW_2
	var_104_int = 50; // 0x365 PushI
	var_105_int = 40; // 0x366 PushI
	SetRTEnvelope(var_104_int, var_105_int); // 0x367 Func
	EventEnable(0); // 0x369 EventEnable
	
Label_874:
	Hold(); // 0x36a Func
	goto Label_874; // 0x36c Jump
}


func_1505(var_13_object)
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x5e1 PushV
	CreateObjectSet(var_15_object); // 0x5e2 Func
	var_13_object = var_15_object; // 0x5e4 Mov
	return 2; // 0x5e5 Return
}


func_1380(var_85_bool, var_86_string)
{
	var_85_bool = 1; // 0x565 MovB
	var_87_bool = 0; // 0x566 PushV
	var_87_bool = 1; // 0x567 MovB
	var_88_bool = 0; // 0x568 PushV
	var_88_bool = 1; // 0x569 MovB
	var_89_bool = 0; // 0x56a PushV
	var_89_bool = 1; // 0x56b MovB
	var_90_bool = 0; // 0x56c PushV
	var_90_bool = 1; // 0x56d MovB
	var_91_bool = 0; // 0x56e PushV
	var_91_bool = 1; // 0x56f MovB
	var_92_bool = 0; // 0x570 PushV
	var_92_bool = 1; // 0x571 MovB
	var_93_bool = 0; // 0x572 PushV
	var_93_bool = 1; // 0x573 MovB
	var_94_bool = 0; // 0x574 PushV
	var_94_bool = 1; // 0x575 MovB
	var_95_bool = 0; // 0x576 PushV
	var_95_bool = 1; // 0x577 MovB
	var_96_bool = 0; // 0x578 PushV
	var_96_bool = 1; // 0x579 MovB
	var_97_bool = 0; // 0x57a PushV
	var_97_bool = 1; // 0x57b MovB
	var_98_string = "woman"; // 0x57c PushS
	var_99_bool = var_86_string == var_98_string; // 0x57d Eq
	if(var_99_bool == 0) goto Label_1411; // 0x57e JumpB
	var_100_string = "worker"; // 0x57f PushS
	var_101_bool = var_86_string == var_100_string; // 0x580 Eq
	if(var_101_bool == 0) goto Label_1411; // 0x581 JumpB
	var_97_bool = 0; // 0x582 MovB
	
Label_1411:
	if(var_97_bool == 0) goto Label_1416; // 0x583 JumpB
	var_102_string = "butcher"; // 0x584 PushS
	var_103_bool = var_86_string == var_102_string; // 0x585 Eq
	if(var_103_bool == 0) goto Label_1416; // 0x586 JumpB
	var_96_bool = 0; // 0x587 MovB
	
Label_1416:
	if(var_96_bool == 0) goto Label_1421; // 0x588 JumpB
	var_104_string = "wasted_girl"; // 0x589 PushS
	var_105_bool = var_86_string == var_104_string; // 0x58a Eq
	if(var_105_bool == 0) goto Label_1421; // 0x58b JumpB
	var_95_bool = 0; // 0x58c MovB
	
Label_1421:
	if(var_95_bool == 0) goto Label_1426; // 0x58d JumpB
	var_106_string = "boy"; // 0x58e PushS
	var_107_bool = var_86_string == var_106_string; // 0x58f Eq
	if(var_107_bool == 0) goto Label_1426; // 0x590 JumpB
	var_94_bool = 0; // 0x591 MovB
	
Label_1426:
	if(var_94_bool == 0) goto Label_1431; // 0x592 JumpB
	var_108_string = "vaxxabitka"; // 0x593 PushS
	var_109_bool = var_86_string == var_108_string; // 0x594 Eq
	if(var_109_bool == 0) goto Label_1431; // 0x595 JumpB
	var_93_bool = 0; // 0x596 MovB
	
Label_1431:
	if(var_93_bool == 0) goto Label_1436; // 0x597 JumpB
	var_110_string = "unosha"; // 0x598 PushS
	var_111_bool = var_86_string == var_110_string; // 0x599 Eq
	if(var_111_bool == 0) goto Label_1436; // 0x59a JumpB
	var_92_bool = 0; // 0x59b MovB
	
Label_1436:
	if(var_92_bool == 0) goto Label_1441; // 0x59c JumpB
	var_112_string = "wasted_male"; // 0x59d PushS
	var_113_bool = var_86_string == var_112_string; // 0x59e Eq
	if(var_113_bool == 0) goto Label_1441; // 0x59f JumpB
	var_91_bool = 0; // 0x5a0 MovB
	
Label_1441:
	if(var_91_bool == 0) goto Label_1446; // 0x5a1 JumpB
	var_114_string = "alkash"; // 0x5a2 PushS
	var_115_bool = var_86_string == var_114_string; // 0x5a3 Eq
	if(var_115_bool == 0) goto Label_1446; // 0x5a4 JumpB
	var_90_bool = 0; // 0x5a5 MovB
	
Label_1446:
	if(var_90_bool == 0) goto Label_1451; // 0x5a6 JumpB
	var_116_string = "dohodyaga"; // 0x5a7 PushS
	var_117_bool = var_86_string == var_116_string; // 0x5a8 Eq
	if(var_117_bool == 0) goto Label_1451; // 0x5a9 JumpB
	var_89_bool = 0; // 0x5aa MovB
	
Label_1451:
	if(var_89_bool == 0) goto Label_1456; // 0x5ab JumpB
	var_118_string = "vaxxabit"; // 0x5ac PushS
	var_119_bool = var_86_string == var_118_string; // 0x5ad Eq
	if(var_119_bool == 0) goto Label_1456; // 0x5ae JumpB
	var_88_bool = 0; // 0x5af MovB
	
Label_1456:
	if(var_88_bool == 0) goto Label_1461; // 0x5b0 JumpB
	var_120_string = "nudegirl"; // 0x5b1 PushS
	var_121_bool = var_86_string == var_120_string; // 0x5b2 Eq
	if(var_121_bool == 0) goto Label_1461; // 0x5b3 JumpB
	var_87_bool = 0; // 0x5b4 MovB
	
Label_1461:
	if(var_87_bool == 0) goto Label_1466; // 0x5b5 JumpB
	var_122_string = "morlok"; // 0x5b6 PushS
	var_123_bool = var_86_string == var_122_string; // 0x5b7 Eq
	if(var_123_bool == 0) goto Label_1466; // 0x5b8 JumpB
	var_85_bool = 0; // 0x5b9 MovB
	
Label_1466:
	return 0; // 0x5ba Return
}


func_1511(var_207_float, var_208_cvector, var_209_cvector)
{
	var_210_float = GetByIndex(var_208_cvector, 0); // 0x5e8 PushE
	var_211_float = GetByIndex(var_209_cvector, 0); // 0x5e9 PushE
	var_212_float = var_210_float * var_211_float; // 0x5ea Mult
	var_213_float = GetByIndex(var_208_cvector, 2); // 0x5eb PushE
	var_214_float = GetByIndex(var_209_cvector, 2); // 0x5ec PushE
	var_215_float = var_213_float * var_214_float; // 0x5ed Mult
	var_207_float = var_212_float + var_215_float; // 0x5ee Add2
	return 0; // 0x5ef Return
}


func_1130(var_28_bool)
{
	var_30_bool = 0; var_31_bool = 0; // 0x46a PushV
	IsDead(var_31_bool); // 0x46b ObjFunc
	var_28_bool = var_31_bool; // 0x46d Mov
	return 2; // 0x46e Return
}


func_1645(var_17_bool, var_18_object, var_19_bool)
{
	var_20_string = ""; var_21_string = ""; // 0x66d PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x66e PushV
	var_23_object = var_18_object; // 0x66f Mov
	var_24_string = "class"; // 0x670 MovS
	func_1045(var_22_bool, var_23_object, var_24_string); // 0x671 NEW_2
	var_31_bool = var_22_bool == 0; // 0x673 Not
	if(var_31_bool == 0) goto Label_1655; // 0x674 JumpB
	var_17_bool = 0; // 0x675 MovB
	return 2; // 0x676 Return
	
Label_1655:
	var_32_string = "class"; // 0x677 PushS
	GetProperty(var_32_string, var_21_string); // 0x678 ObjFunc
	var_33_bool = 0; // 0x67a PushV
	var_33_bool = 1; // 0x67b MovB
	var_34_bool = 0; // 0x67c PushV
	var_34_bool = 1; // 0x67d MovB
	var_35_bool = 0; // 0x67e PushV
	var_35_bool = 1; // 0x67f MovB
	var_36_bool = 0; // 0x680 PushV
	var_36_bool = 1; // 0x681 MovB
	var_37_bool = 0; // 0x682 PushV
	var_37_bool = 1; // 0x683 MovB
	var_38_bool = 0; // 0x684 PushV
	var_38_bool = 1; // 0x685 MovB
	var_39_bool = 0; // 0x686 PushV
	var_39_bool = 1; // 0x687 MovB
	var_40_bool = 0; // 0x688 PushV
	var_40_bool = 1; // 0x689 MovB
	var_41_bool = 0; // 0x68a PushV
	var_41_bool = 1; // 0x68b MovB
	var_42_bool = 0; // 0x68c PushV
	var_42_bool = 1; // 0x68d MovB
	var_43_string = "patrol"; // 0x68e PushS
	var_44_bool = var_21_string == var_43_string; // 0x68f Eq
	if(var_44_bool == 0) goto Label_1685; // 0x690 JumpB
	var_45_string = "sanitar"; // 0x691 PushS
	var_46_bool = var_21_string == var_45_string; // 0x692 Eq
	if(var_46_bool == 0) goto Label_1685; // 0x693 JumpB
	var_42_bool = 0; // 0x694 MovB
	
Label_1685:
	if(var_42_bool == 0) goto Label_1690; // 0x695 JumpB
	var_47_string = "soldier"; // 0x696 PushS
	var_48_bool = var_21_string == var_47_string; // 0x697 Eq
	if(var_48_bool == 0) goto Label_1690; // 0x698 JumpB
	var_41_bool = 0; // 0x699 MovB
	
Label_1690:
	if(var_41_bool == 0) goto Label_1695; // 0x69a JumpB
	var_49_string = "woman"; // 0x69b PushS
	var_50_bool = var_21_string == var_49_string; // 0x69c Eq
	if(var_50_bool == 0) goto Label_1695; // 0x69d JumpB
	var_40_bool = 0; // 0x69e MovB
	
Label_1695:
	if(var_40_bool == 0) goto Label_1700; // 0x69f JumpB
	var_51_string = "wasted_girl"; // 0x6a0 PushS
	var_52_bool = var_21_string == var_51_string; // 0x6a1 Eq
	if(var_52_bool == 0) goto Label_1700; // 0x6a2 JumpB
	var_39_bool = 0; // 0x6a3 MovB
	
Label_1700:
	if(var_39_bool == 0) goto Label_1705; // 0x6a4 JumpB
	var_53_string = "vaxxabitka"; // 0x6a5 PushS
	var_54_bool = var_21_string == var_53_string; // 0x6a6 Eq
	if(var_54_bool == 0) goto Label_1705; // 0x6a7 JumpB
	var_38_bool = 0; // 0x6a8 MovB
	
Label_1705:
	if(var_38_bool == 0) goto Label_1710; // 0x6a9 JumpB
	var_55_string = "vaxxabit"; // 0x6aa PushS
	var_56_bool = var_21_string == var_55_string; // 0x6ab Eq
	if(var_56_bool == 0) goto Label_1710; // 0x6ac JumpB
	var_37_bool = 0; // 0x6ad MovB
	
Label_1710:
	if(var_37_bool == 0) goto Label_1715; // 0x6ae JumpB
	var_57_string = "little_girl"; // 0x6af PushS
	var_58_bool = var_21_string == var_57_string; // 0x6b0 Eq
	if(var_58_bool == 0) goto Label_1715; // 0x6b1 JumpB
	var_36_bool = 0; // 0x6b2 MovB
	
Label_1715:
	if(var_36_bool == 0) goto Label_1720; // 0x6b3 JumpB
	var_59_string = "girl"; // 0x6b4 PushS
	var_60_bool = var_21_string == var_59_string; // 0x6b5 Eq
	if(var_60_bool == 0) goto Label_1720; // 0x6b6 JumpB
	var_35_bool = 0; // 0x6b7 MovB
	
Label_1720:
	if(var_35_bool == 0) goto Label_1725; // 0x6b8 JumpB
	var_61_string = "dohodyaga"; // 0x6b9 PushS
	var_62_bool = var_21_string == var_61_string; // 0x6ba Eq
	if(var_62_bool == 0) goto Label_1725; // 0x6bb JumpB
	var_34_bool = 0; // 0x6bc MovB
	
Label_1725:
	if(var_34_bool == 0) goto Label_1730; // 0x6bd JumpB
	var_63_string = "nudegirl"; // 0x6be PushS
	var_64_bool = var_21_string == var_63_string; // 0x6bf Eq
	if(var_64_bool == 0) goto Label_1730; // 0x6c0 JumpB
	var_33_bool = 0; // 0x6c1 MovB
	
Label_1730:
	if(var_33_bool == 0) goto Label_1733; // 0x6c2 JumpB
	var_17_bool = 1; // 0x6c3 MovB
	return 2; // 0x6c4 Return
	
Label_1733:
	var_65_bool = var_19_bool; // 0x6c5 Push
	if(var_65_bool == 0) goto Label_1737; // 0x6c6 JumpB
	var_17_bool = 0; // 0x6c7 MovB
	return 2; // 0x6c8 Return
	
Label_1737:
	var_17_bool = 1; // 0x6c9 MovB
	var_66_bool = 0; // 0x6ca PushV
	var_66_bool = 1; // 0x6cb MovB
	var_67_bool = 0; // 0x6cc PushV
	var_67_bool = 1; // 0x6cd MovB
	var_68_bool = 0; // 0x6ce PushV
	var_68_bool = 1; // 0x6cf MovB
	var_69_bool = 0; // 0x6d0 PushV
	var_69_bool = 1; // 0x6d1 MovB
	var_70_bool = 0; // 0x6d2 PushV
	var_70_bool = 1; // 0x6d3 MovB
	var_71_string = "worker"; // 0x6d4 PushS
	var_72_bool = var_21_string == var_71_string; // 0x6d5 Eq
	if(var_72_bool == 0) goto Label_1755; // 0x6d6 JumpB
	var_73_string = "butcher"; // 0x6d7 PushS
	var_74_bool = var_21_string == var_73_string; // 0x6d8 Eq
	if(var_74_bool == 0) goto Label_1755; // 0x6d9 JumpB
	var_70_bool = 0; // 0x6da MovB
	
Label_1755:
	if(var_70_bool == 0) goto Label_1760; // 0x6db JumpB
	var_75_string = "boy"; // 0x6dc PushS
	var_76_bool = var_21_string == var_75_string; // 0x6dd Eq
	if(var_76_bool == 0) goto Label_1760; // 0x6de JumpB
	var_69_bool = 0; // 0x6df MovB
	
Label_1760:
	if(var_69_bool == 0) goto Label_1765; // 0x6e0 JumpB
	var_77_string = "unosha"; // 0x6e1 PushS
	var_78_bool = var_21_string == var_77_string; // 0x6e2 Eq
	if(var_78_bool == 0) goto Label_1765; // 0x6e3 JumpB
	var_68_bool = 0; // 0x6e4 MovB
	
Label_1765:
	if(var_68_bool == 0) goto Label_1770; // 0x6e5 JumpB
	var_79_string = "wasted_male"; // 0x6e6 PushS
	var_80_bool = var_21_string == var_79_string; // 0x6e7 Eq
	if(var_80_bool == 0) goto Label_1770; // 0x6e8 JumpB
	var_67_bool = 0; // 0x6e9 MovB
	
Label_1770:
	if(var_67_bool == 0) goto Label_1775; // 0x6ea JumpB
	var_81_string = "alkash"; // 0x6eb PushS
	var_82_bool = var_21_string == var_81_string; // 0x6ec Eq
	if(var_82_bool == 0) goto Label_1775; // 0x6ed JumpB
	var_66_bool = 0; // 0x6ee MovB
	
Label_1775:
	if(var_66_bool == 0) goto Label_1780; // 0x6ef JumpB
	var_83_string = "morlok"; // 0x6f0 PushS
	var_84_bool = var_21_string == var_83_string; // 0x6f1 Eq
	if(var_84_bool == 0) goto Label_1780; // 0x6f2 JumpB
	var_17_bool = 0; // 0x6f3 MovB
	
Label_1780:
	return 2; // 0x6f4 Return
}


func_1135(var_17_bool, var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); // 0x46f PushV
	var_23_bool = var_18_object == 0; // 0x470 NullEq
	if(var_23_bool == 0) goto Label_1140; // 0x471 JumpB
	var_17_bool = 0; // 0x472 MovB
	return 4; // 0x473 Return
	
Label_1140:
	var_24_bool = 0; // 0x474 PushV
	var_24_bool = 0; // 0x475 MovB
	var_25_string = "IsDead"; // 0x476 PushS
	var_26_int = 1; // 0x477 PushI
	var_27_bool = IsFuncExist(var_18_object, var_25_string, var_26_int); // 0x478 FuncExist
	if(var_27_bool == 0) goto Label_1152; // 0x479 JumpB
	var_28_bool = 0; var_29_object = Obj(); // 0x47a PushV
	var_29_object = var_18_object; // 0x47b Mov
	func_1130(var_29_object); // 0x47c NEW_2
	if(var_28_bool == 0) goto Label_1152; // 0x47e JumpB
	var_24_bool = 1; // 0x47f MovB
	
Label_1152:
	if(var_24_bool == 0) goto Label_1155; // 0x480 JumpB
	var_17_bool = 0; // 0x481 MovB
	return 4; // 0x482 Return
	
Label_1155:
	GetScene(var_21_object); // 0x483 Func
	var_32_bool = var_21_object == 0; // 0x485 NullEq
	if(var_32_bool == 0) goto Label_1161; // 0x486 JumpB
	var_17_bool = 0; // 0x487 MovB
	return 4; // 0x488 Return
	
Label_1161:
	GetScene(var_22_object); // 0x489 ObjFunc
	var_33_bool = var_21_object != var_22_object; // 0x48b Neq
	if(var_33_bool == 0) goto Label_1167; // 0x48c JumpB
	var_17_bool = 0; // 0x48d MovB
	return 4; // 0x48e Return
	
Label_1167:
	var_17_bool = 1; // 0x48f MovB
	return 4; // 0x490 Return
}


func_1520(var_216_float, var_217_cvector)
{
	var_218_float = GetByIndex(var_217_cvector, 0); // 0x5f1 PushE
	var_219_float = GetByIndex(var_217_cvector, 0); // 0x5f2 PushE
	var_220_float = var_218_float * var_219_float; // 0x5f3 Mult
	var_221_float = GetByIndex(var_217_cvector, 2); // 0x5f4 PushE
	var_222_float = GetByIndex(var_217_cvector, 2); // 0x5f5 PushE
	var_223_float = var_221_float * var_222_float; // 0x5f6 Mult
	var_224_int = var_220_float + var_223_float; // 0x5f7 Add
	var_216_float = sqrt(var_224_int); // 0x5f8 Sqrt2
	return 0; // 0x5f9 Return
}


func_1011(var_274_string, var_275_int)
{
	var_276_int = 2; // 0x3f4 PushI
	var_277_bool = var_275_int == var_276_int; // 0x3f5 Eq
	if(var_277_bool == 0) goto Label_1018; // 0x3f6 JumpB
	var_274_string = "fire"; // 0x3f7 MovS
	return 0; // 0x3f8 Return
	
Label_1018:
	var_278_int = 1; // 0x3fa PushI
	var_279_bool = var_275_int == var_278_int; // 0x3fb Eq
	if(var_279_bool == 0) goto Label_1023; // 0x3fc JumpB
	var_274_string = "bullet"; // 0x3fd MovS
	return 0; // 0x3fe Return
	
Label_1023:
	var_274_string = "phys"; // 0x3ff MovS
	return 0; // 0x400 Return
}


func_1781()
{
	var_12_object = GlobalVars[0]; // 0x6f5 PushGE
	var_13_object = Obj(); // 0x6f6 PushV
	func_1505(var_13_object); // 0x6f7 NEW_2
	var_12_object = var_13_object; // 0x6f8 Mov
	GlobalVars[0] = var_12_object; // 0x6fa PopGE
	return 0; // 0x6fb Return
}


func_888(var_24_object)
{
	var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_string = ""; var_30_object = Obj(); var_31_bool = 0; var_32_bool = 0; var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_string = ""; var_40_object = Obj(); var_41_bool = 0; var_42_bool = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0); // 0x378 PushV
	var_45_bool = var_24_object == 0; // 0x379 NullEq
	if(var_45_bool == 0) goto Label_896; // 0x37a JumpB
	var_46_string = ""; // 0x37b PushV
	var_46_string = "fdie"; // 0x37c MovS
	func_979(var_46_string); // 0x37d NEW_2
	goto Label_978; // 0x37f Jump
	
Label_978:
	return 20; // 0x3d2 Return
	
Label_896:
	GetPosition(var_35_cvector); // 0x380 ObjFunc
	GetPosition(var_36_cvector); // 0x382 Func
	GetDirection(var_37_cvector); // 0x384 Func
	var_38_cvector = var_36_cvector - var_35_cvector; // 0x386 Sub2
	var_78_float = GetByIndex(var_38_cvector, 0); // 0x387 PushE
	var_79_float = GetByIndex(var_37_cvector, 0); // 0x388 PushE
	var_80_float = var_78_float * var_79_float; // 0x389 Mult
	var_81_float = GetByIndex(var_38_cvector, 2); // 0x38a PushE
	var_82_float = GetByIndex(var_37_cvector, 2); // 0x38b PushE
	var_83_float = var_81_float * var_82_float; // 0x38c Mult
	var_84_int = var_80_float + var_83_float; // 0x38d Add
	var_85_int = 0; // 0x38e PushI
	var_86_bool = var_84_int >= var_85_int; // 0x38f GE
	if(var_86_bool == 0) goto Label_915; // 0x390 JumpB
	var_39_string = "fdie"; // 0x391 MovS
	goto Label_916; // 0x392 Jump
	
Label_916:
	RemoveRTEnvelope(); // 0x394 Func
	SetDeathState(); // 0x396 Func
	Stop(); // 0x398 Func
	StopAsync(); // 0x39a Func
	var_40_object = var_24_object; // 0x39c Mov
	var_87_string = "GetScriptProperty"; // 0x39d PushS
	var_88_int = 2; // 0x39e PushI
	var_89_bool = IsFuncExist(var_24_object, var_87_string, var_88_int); // 0x39f FuncExist
	if(var_89_bool == 0) goto Label_940; // 0x3a0 JumpB
	var_90_string = "Owner"; // 0x3a1 PushS
	HasScriptProperty(var_41_bool, var_90_string); // 0x3a2 ObjFunc
	var_91_bool = var_41_bool; // 0x3a4 Push
	if(var_91_bool == 0) goto Label_940; // 0x3a5 JumpB
	var_92_string = "Owner"; // 0x3a6 PushS
	GetScriptProperty(var_40_object, var_92_string); // 0x3a7 ObjFunc
	var_93_bool = var_40_object == 0; // 0x3a9 NullEq
	if(var_93_bool == 0) goto Label_940; // 0x3aa JumpB
	var_40_object = var_24_object; // 0x3ab Mov
	
Label_940:
	var_94_string = "@GetEyesHeight"; // 0x3ac PushS
	var_95_int = 1; // 0x3ad PushI
	var_96_bool = IsFuncExist(var_40_object, var_94_string, var_95_int); // 0x3ae FuncExist
	if(var_96_bool == 0) goto Label_955; // 0x3af JumpB
	GetEyesHeight(var_43_float); // 0x3b0 ObjFunc
	var_44_cvector = CVector(0.0, 0.0, 0.0); // 0x3b2 MovV
	var_97_float = GetByIndex(var_44_cvector, 1); // 0x3b3 PushE
	var_97_float = var_43_float; // 0x3b4 Mov
	SetByIndex(var_44_cvector, 1) = var_97_float; // 0x3b5 PopE
	var_98_string = "head"; // 0x3b6 PushS
	LookAsync(var_24_object, var_98_string, var_44_cvector); // 0x3b7 Func
	var_42_bool = 1; // 0x3b9 MovB
	goto Label_956; // 0x3ba Jump
	
Label_956:
	var_99_string = ""; // 0x3bc PushV
	var_99_string = var_39_string; // 0x3bd Mov
	func_1339(var_99_string); // 0x3be NEW_2
	var_100_string = "all"; // 0x3c0 PushS
	PlayAnimation(var_100_string, var_39_string); // 0x3c1 Func
	WaitForAnimEnd(); // 0x3c3 Func
	var_101_bool = var_42_bool; // 0x3c5 Push
	if(var_101_bool == 0) goto Label_972; // 0x3c6 JumpB
	StopAsync(); // 0x3c7 Func
	var_102_string = "head"; // 0x3c9 PushS
	UnlookAsync(var_102_string); // 0x3ca Func
	
Label_972:
	var_103_string = "all"; // 0x3cc PushS
	LockAnimationEnd(var_103_string, var_39_string); // 0x3cd Func
	RemoveEnvelope(); // 0x3cf Func
	var_40_object = 0; // 0x3d1 SetNull
	
Label_955:
	var_42_bool = 0; // 0x3bb MovB
	
Label_915:
	var_39_string = "bdie"; // 0x393 MovS
}


func_1530(var_204_float, var_205_cvector, var_206_cvector)
{
	var_207_float = 0; var_208_cvector = CVector(0,0,0); var_209_cvector = CVector(0,0,0); // 0x5fb PushV
	var_208_cvector = var_205_cvector; // 0x5fc Mov
	var_209_cvector = var_206_cvector; // 0x5fd Mov
	func_1511(var_207_float, var_208_cvector, var_209_cvector); // 0x5fe NEW_2
	var_216_float = 0; var_217_cvector = CVector(0,0,0); // 0x600 PushV
	var_217_cvector = var_205_cvector; // 0x601 Mov
	func_1520(var_216_float, var_217_cvector); // 0x602 NEW_2
	var_225_float = 0; var_226_cvector = CVector(0,0,0); // 0x604 PushV
	var_226_cvector = var_206_cvector; // 0x605 Mov
	func_1520(var_225_float, var_226_cvector); // 0x606 NEW_2
	var_227_float = var_216_float * var_225_float; // 0x608 Mult
	var_204_float = var_207_float / var_207_float; // 0x609 Div2
	return 0; // 0x60a Return
}


func_1788(var_134_object, var_135_bool)
{
	var_136_object = Obj(); var_137_bool = 0; // 0x6fd PushV
	var_136_object = var_134_object; // 0x6fe Mov
	var_137_bool = var_135_bool; // 0x6ff Mov
	TaskCall(2); // 0x700 TaskCall
	func_287(var_138_object, var_139_object, var_140_bool, var_136_object, var_137_bool); // 0x701 NEW_2
	TaskReturn(); // 0x702 TaskReturn
	ResetAAS(); // 0x704 Func
	return 0; // 0x706 Return
}


func_767(var_0_object, var_1_object)
{
	var_287_int = 0; var_288_bool = 0; var_289_cvector = CVector(0,0,0); var_290_object = Obj(); var_291_int = 0; var_292_bool = 0; var_293_cvector = CVector(0,0,0); var_294_object = Obj(); // 0x2ff PushV
	GetPFPosition(var_294_object); // 0x300 Func
	GetDirection(var_0_object); // 0x302 Func
	
Label_772:
	func_856(); // 0x305 NEW_2
	var_295_int = 10; // 0x307 PushI
	irand(var_291_int, var_295_int); // 0x308 Func
	var_296_int = 5; // 0x30a PushI
	var_297_int = var_291_int + var_296_int; // 0x30b Add
	Sleep(var_297_int, var_292_bool); // 0x30c Func
	var_298_bool = var_292_bool; // 0x30e Push
	if(var_298_bool == 0) goto Label_788; // 0x30f JumpB
	func_689(); // 0x311 NEW_2
	goto Label_849; // 0x313 Jump
	
Label_849:
	goto Label_772; // 0x351 Jump
	
Label_788:
	func_856(); // 0x315 NEW_2
	GetPFPosition(var_293_cvector); // 0x317 Func
	var_299_float = 0; var_300_cvector = CVector(0,0,0); var_301_cvector = CVector(0,0,0); // 0x319 PushV
	var_300_cvector = var_1_object; // 0x31a MovT
	var_301_cvector = var_293_cvector; // 0x31b Mov
	func_1483(var_299_float, var_300_cvector, var_301_cvector); // 0x31c NEW_2
	var_304_int = 40000; // 0x31e PushI
	var_305_bool = var_299_float > var_304_int; // 0x31f GT
	if(var_305_bool == 0) goto Label_835; // 0x320 JumpB
	FindPathTo(var_294_object, var_294_object); // 0x321 Func
	var_306_bool = var_294_object != 0; // 0x323 NullNeq
	if(var_306_bool == 0) goto Label_830; // 0x324 JumpB
	RotatePath(var_294_object, var_292_bool); // 0x325 Func
	var_307_bool = var_292_bool == 0; // 0x327 Not
	if(var_307_bool == 0) goto Label_810; // 0x328 JumpB
	goto Label_848; // 0x329 Jump
	
Label_848:
	goto Label_788; // 0x350 Jump
	
Label_810:
	var_308_bool = 0; // 0x32a PushB
	FollowPath(var_294_object, var_308_bool, var_292_bool); // 0x32b Func
	var_309_bool = var_292_bool == 0; // 0x32d Not
	if(var_309_bool == 0) goto Label_816; // 0x32e JumpB
	goto Label_848; // 0x32f Jump
	
Label_816:
	var_310_float = GetByIndex(var_0_object, 0); // 0x330 PushE
	var_311_float = GetByIndex(var_0_object, 2); // 0x331 PushE
	Rotate(var_310_float, var_311_float, var_292_bool); // 0x332 Func
	var_312_bool = var_292_bool == 0; // 0x334 Not
	if(var_312_bool == 0) goto Label_823; // 0x335 JumpB
	goto Label_848; // 0x336 Jump
	
Label_823:
	WaitForAnimEnd(var_292_bool); // 0x337 Func
	var_313_bool = var_292_bool == 0; // 0x339 Not
	if(var_313_bool == 0) goto Label_828; // 0x33a JumpB
	goto Label_848; // 0x33b Jump
	
Label_828:
	goto Label_849; // 0x33c Jump
	
Label_830:
	var_314_int = 1; // 0x33e PushI
	Sleep(var_314_int); // 0x33f Func
	var_294_object = 0; // 0x341 SetNull
	goto Label_848; // 0x342 Jump
	
Label_835:
	var_315_float = GetByIndex(var_0_object, 0); // 0x343 PushE
	var_316_float = GetByIndex(var_0_object, 2); // 0x344 PushE
	Rotate(var_315_float, var_316_float, var_292_bool); // 0x345 Func
	var_317_bool = var_292_bool == 0; // 0x347 Not
	if(var_317_bool == 0) goto Label_842; // 0x348 JumpB
	goto Label_848; // 0x349 Jump
	
Label_842:
	WaitForAnimEnd(var_292_bool); // 0x34a Func
	var_318_bool = var_292_bool == 0; // 0x34c Not
	if(var_318_bool == 0) goto Label_847; // 0x34d JumpB
	goto Label_848; // 0x34e Jump
	
Label_847:
	goto Label_849; // 0x34f Jump
}


