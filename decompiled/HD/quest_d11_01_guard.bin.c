task_0_event_41(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	func_24(); // 0x22 NEW_2
	var_10_object = Obj(); // 0x24 PushV
	var_10_object = var_8_cvector; // 0x25 Mov
	func_1640(); // 0x26 NEW_2
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
	func_1327(); // 0x3b NEW_2
	
Label_61:
	return 0; // 0x3d Return
}


	task_0_event_17(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_97_object)
	{
	var_98_bool = 0; var_99_object = Obj(); // 0x3f PushV
	var_99_object = var_97_object; // 0x40 Mov
	func_1177(var_98_bool, var_99_object); // 0x41 NEW_2
	var_126_bool = var_98_bool == 0; // 0x43 Not
	if(var_126_bool == 0) goto Label_74; // 0x44 JumpB
	var_127_object = Obj(); // 0x45 PushV
	var_127_object = var_97_object; // 0x46 Mov
	func_1812(var_127_object); // 0x47 NEW_2
	return 0; // 0x49 Return
	
Label_74:
	func_24(); // 0x4b NEW_2
	var_143_object = Obj(); // 0x4d PushV
	var_143_object = var_97_object; // 0x4e Mov
	func_1836(var_143_object); // 0x4f NEW_2
	return 0; // 0x51 Return
	}


task_0_event_30(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_bool = 0; // 0x53 PushV
	var_12_object = var_8_bool; // 0x54 Mov
	var_13_object = var_9_cvector; // 0x55 Mov
	var_14_bool = var_10_cvector; // 0x56 Mov
	func_1984(var_11_bool, var_12_object, var_13_object, var_14_bool); // 0x57 NEW_2
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
	func_1956(var_9_bool, var_10_object); // 0x62 NEW_2
	if(var_9_bool == 0) goto Label_108; // 0x64 JumpB
	func_24(); // 0x66 NEW_2
	var_129_object = Obj(); // 0x68 PushV
	var_129_object = var_8_cvector; // 0x69 Mov
	func_1978(var_129_object); // 0x6a NEW_2
	
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
	var_98_bool = 0; var_99_object = Obj(); // 0xf2 PushV
	var_99_object = var_97_object; // 0xf3 Mov
	func_1177(var_98_bool, var_99_object); // 0xf4 NEW_2
	var_126_bool = var_98_bool == 0; // 0xf6 Not
	if(var_126_bool == 0) goto Label_253; // 0xf7 JumpB
	var_127_object = Obj(); // 0xf8 PushV
	var_127_object = var_97_object; // 0xf9 Mov
	func_1812(var_127_object); // 0xfa NEW_2
	return 0; // 0xfc Return
	
Label_253:
	func_274(); // 0xfe NEW_2
	var_142_object = Obj(); // 0x100 PushV
	var_142_object = var_97_object; // 0x101 Mov
	func_1836(var_142_object); // 0x102 NEW_2
	return 0; // 0x104 Return
	}


task_1_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_bool = 0; // 0x106 PushV
	var_12_object = var_8_bool; // 0x107 Mov
	var_13_object = var_9_cvector; // 0x108 Mov
	var_14_bool = var_10_cvector; // 0x109 Mov
	func_1984(var_11_bool, var_12_object, var_13_object, var_14_bool); // 0x10a NEW_2
	if(var_11_bool == 0) goto Label_273; // 0x10c JumpB
	var_97_object = Obj(); // 0x10d PushV
	var_97_object = var_8_bool; // 0x10e Mov
	func_241(); // 0x10f NEW_2
	
Label_273:
	return 0; // 0x111 Return
}


task_1_event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	func_274(); // 0x11b NEW_2
	var_9_object = Obj(); // 0x11d PushV
	var_9_object = var_8_cvector; // 0x11e Mov
	func_1640(); // 0x11f NEW_2
	return 0; // 0x121 Return
}


task_2_event_3(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_cvector, var_8_cvector)
{
	var_9_bool = 0; // 0x1b3 PushV
	var_9_bool = 0; // 0x1b4 MovB
	var_10_bool = var_2_bool; // 0x1b5 PushT
	if(var_10_bool == 0) goto Label_442; // 0x1b6 JumpB
	var_11_bool = var_8_cvector == var_0_object; // 0x1b7 Eq
	if(var_11_bool == 0) goto Label_442; // 0x1b8 JumpB
	var_9_bool = 1; // 0x1b9 MovB
	
Label_442:
	if(var_9_bool == 0) goto Label_447; // 0x1ba JumpB
	var_12_object = Obj(); // 0x1bb PushV
	var_12_object = var_0_object; // 0x1bc MovT
	func_1327(); // 0x1bd NEW_2
	
Label_447:
	return 0; // 0x1bf Return
}


task_2_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_cvector, var_8_cvector)
{
	var_9_bool = 0; // 0x1c1 PushV
	var_9_bool = 0; // 0x1c2 MovB
	var_10_bool = var_2_bool; // 0x1c3 PushT
	if(var_10_bool == 0) goto Label_456; // 0x1c4 JumpB
	var_11_bool = var_8_cvector == var_0_object; // 0x1c5 Eq
	if(var_11_bool == 0) goto Label_456; // 0x1c6 JumpB
	var_9_bool = 1; // 0x1c7 MovB
	
Label_456:
	if(var_9_bool == 0) goto Label_464; // 0x1c8 JumpB
	var_12_string = "@Stop hunt"; // 0x1c9 PushS
	Trace(var_12_string); // 0x1ca Func
	StopAnimation(); // 0x1cc Func
	StopGroup0(); // 0x1ce Func
	
Label_464:
	return 0; // 0x1d0 Return
}


	task_2_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_97_object)
	{
	var_98_bool = 0; var_99_object = Obj(); // 0x253 PushV
	var_99_object = var_97_object; // 0x254 Mov
	func_1177(var_98_bool, var_99_object); // 0x255 NEW_2
	var_126_bool = var_98_bool == 0; // 0x257 Not
	if(var_126_bool == 0) goto Label_602; // 0x258 JumpB
	return 0; // 0x259 Return
	
Label_602:
	var_127_object = Obj(); // 0x25a PushV
	var_127_object = var_97_object; // 0x25b Mov
	func_1812(var_127_object); // 0x25c NEW_2
	var_142_bool = var_97_object == var_0_object; // 0x25e Eq
	if(var_142_bool == 0) goto Label_610; // 0x25f JumpB
	var_1_object = 0; // 0x260 SetNullT
	goto Label_617; // 0x261 Jump
	
Label_617:
	return 0; // 0x269 Return
	
Label_610:
	var_1_object = var_97_object; // 0x262 TMov
	var_143_bool = var_2_bool; // 0x263 PushT
	if(var_143_bool == 0) goto Label_617; // 0x264 JumpB
	StopAnimation(); // 0x265 Func
	StopGroup0(); // 0x267 Func
	}


task_2_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_bool = 0; // 0x26b PushV
	var_12_object = var_8_bool; // 0x26c Mov
	var_13_object = var_9_cvector; // 0x26d Mov
	var_14_bool = var_10_cvector; // 0x26e Mov
	func_1984(var_11_bool, var_12_object, var_13_object, var_14_bool); // 0x26f NEW_2
	if(var_11_bool == 0) goto Label_630; // 0x271 JumpB
	var_97_object = Obj(); // 0x272 PushV
	var_97_object = var_8_bool; // 0x273 Mov
	func_594(); // 0x274 NEW_2
	
Label_630:
	return 0; // 0x276 Return
}


task_3_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_cvector, var_8_cvector)
{
	var_9_bool = 0; var_10_bool = 0; // 0x282 PushV
	IsPlayerActor(var_8_cvector, var_10_bool); // 0x283 Func
	var_11_bool = var_10_bool; // 0x285 Push
	if(var_11_bool == 0) goto Label_653; // 0x286 JumpB
	var_12_object = Obj(); // 0x287 PushV
	var_12_object = var_8_cvector; // 0x288 Mov
	TaskCall(4); // 0x289 TaskCall
	func_674(var_12_object); // 0x28a NEW_2
	TaskReturn(); // 0x28b TaskReturn
	
Label_653:
	return 2; // 0x28d Return
}


task_3_event_3(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_cvector, var_8_cvector)
{
	var_9_bool = 0; var_10_bool = 0; // 0x28e PushV
	IsPlayerActor(var_8_cvector, var_10_bool); // 0x28f Func
	var_11_bool = var_10_bool; // 0x291 Push
	if(var_11_bool == 0) goto Label_665; // 0x292 JumpB
	var_12_object = Obj(); // 0x293 PushV
	var_12_object = var_8_cvector; // 0x294 Mov
	TaskCall(4); // 0x295 TaskCall
	func_674(var_12_object); // 0x296 NEW_2
	TaskReturn(); // 0x297 TaskReturn
	
Label_665:
	return 2; // 0x299 Return
}


task_3_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_cvector, var_8_cvector)
{
	var_9_object = Obj(); // 0x29b PushV
	var_9_object = var_8_cvector; // 0x29c Mov
	TaskCall(4); // 0x29d TaskCall
	func_674(var_9_object); // 0x29e NEW_2
	TaskReturn(); // 0x29f TaskReturn
	return 0; // 0x2a1 Return
}


task_4_event_3(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object)
{
	var_9_bool = 0; var_10_bool = 0; // 0x2b8 PushV
	var_11_bool = 0; var_12_object = Obj(); // 0x2b9 PushV
	var_12_object = var_8_object; // 0x2ba Mov
	func_1177(var_11_bool, var_12_object); // 0x2bb NEW_2
	var_45_bool = var_11_bool == 0; // 0x2bd Not
	if(var_45_bool == 0) goto Label_704; // 0x2be JumpB
	return 2; // 0x2bf Return
	
Label_704:
	var_46_bool = 0; var_47_object = Obj(); // 0x2c0 PushV
	var_47_object = var_8_object; // 0x2c1 Mov
	func_1876(var_46_bool, var_47_object); // 0x2c2 NEW_2
	var_124_bool = var_46_bool == 0; // 0x2c4 Not
	if(var_124_bool == 0) goto Label_716; // 0x2c5 JumpB
	var_125_object = GlobalVars[0]; // 0x2c6 PushGE
	in(var_10_bool, var_8_object); // 0x2c7 ObjFunc
	var_126_bool = var_10_bool == 0; // 0x2c9 Not
	if(var_126_bool == 0) goto Label_716; // 0x2ca JumpB
	return 2; // 0x2cb Return
	
Label_716:
	func_857(); // 0x2cd NEW_2
	var_127_object = Obj(); // 0x2cf PushV
	var_127_object = var_8_object; // 0x2d0 Mov
	TaskCall(0); // 0x2d1 TaskCall
	func_0(var_128_object, var_127_object); // 0x2d2 NEW_2
	TaskReturn(); // 0x2d3 TaskReturn
	return 2; // 0x2d5 Return
}


	task_4_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_object, var_10_bool, var_97_object)
	{
	var_98_bool = 0; var_99_object = Obj(); // 0x2d7 PushV
	var_99_object = var_97_object; // 0x2d8 Mov
	func_1177(var_98_bool, var_99_object); // 0x2d9 NEW_2
	var_126_bool = var_98_bool == 0; // 0x2db Not
	if(var_126_bool == 0) goto Label_738; // 0x2dc JumpB
	var_127_object = Obj(); // 0x2dd PushV
	var_127_object = var_97_object; // 0x2de Mov
	func_1812(var_127_object); // 0x2df NEW_2
	return 0; // 0x2e1 Return
	
Label_738:
	func_857(); // 0x2e3 NEW_2
	var_142_object = Obj(); // 0x2e5 PushV
	var_142_object = var_97_object; // 0x2e6 Mov
	func_1836(var_142_object); // 0x2e7 NEW_2
	return 0; // 0x2e9 Return
	}


task_4_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_object, var_10_bool)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_bool = 0; // 0x2eb PushV
	var_12_object = var_8_object; // 0x2ec Mov
	var_13_object = var_9_object; // 0x2ed Mov
	var_14_bool = var_10_bool; // 0x2ee Mov
	func_1984(var_11_bool, var_12_object, var_13_object, var_14_bool); // 0x2ef NEW_2
	if(var_11_bool == 0) goto Label_758; // 0x2f1 JumpB
	var_97_object = Obj(); // 0x2f2 PushV
	var_97_object = var_8_object; // 0x2f3 Mov
	func_726(); // 0x2f4 NEW_2
	
Label_758:
	return 0; // 0x2f6 Return
}


task_4_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj(); // 0x2f8 PushV
	var_10_object = var_8_object; // 0x2f9 Mov
	func_1956(var_9_bool, var_10_object); // 0x2fa NEW_2
	if(var_9_bool == 0) goto Label_772; // 0x2fc JumpB
	func_857(); // 0x2fe NEW_2
	var_128_object = Obj(); // 0x300 PushV
	var_128_object = var_8_object; // 0x301 Mov
	func_2010(var_128_object); // 0x302 NEW_2
	
Label_772:
	return 0; // 0x304 Return
}


task_5_event_0(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object)
{
	var_9_bool = 0; var_10_bool = 0; // 0x374 PushV
	IsOverrideActive(var_10_bool); // 0x375 Func
	var_11_bool = var_10_bool == 0; // 0x377 Not
	if(var_11_bool == 0) goto Label_893; // 0x378 JumpB
	var_12_object = Obj(); // 0x379 PushV
	var_12_object = var_8_object; // 0x37a Mov
	func_1596(var_12_object); // 0x37b NEW_2
	
Label_893:
	return 2; // 0x37d Return
}


task_5_event_22(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_int, var_10_float, var_11_float)
{
	return 0; // 0x3f4 Return
}


task_5_event_16(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_string)
{
	return 0; // 0x3f6 Return
}


task_5_event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object)
{
	return 0; // 0x3f8 Return
}


event_22(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_int, var_10_float, var_11_float)
{
	var_12_object = Obj(); var_13_int = 0; var_14_float = 0; // 0x64a PushV
	var_12_object = var_8_object; // 0x64b Mov
	var_13_int = var_9_int; // 0x64c Mov
	var_14_float = var_10_float; // 0x64d Mov
	func_1245(var_12_object, var_13_int, var_14_float); // 0x64e NEW_2
	return 0; // 0x650 Return
}


event_43(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_int, var_10_float, var_11_float, var_12_cvector, var_13_cvector)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); // 0x652 PushV
	var_14_object = var_8_object; // 0x653 Mov
	var_15_int = var_9_int; // 0x654 Mov
	var_16_float = var_10_float; // 0x655 Mov
	var_17_cvector = var_12_cvector; // 0x656 Mov
	var_18_cvector = var_13_cvector; // 0x657 Mov
	func_1313(var_16_float, var_17_cvector, var_18_cvector); // 0x658 NEW_2
	return 0; // 0x65a Return
}


event_16(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_string)
{
	var_10_float = 0; var_11_float = 0; // 0x65b PushV
	var_12_string = "health"; // 0x65c PushS
	var_13_bool = var_9_string == var_12_string; // 0x65d Eq
	if(var_13_bool == 0) goto Label_1639; // 0x65e JumpB
	var_14_string = "health"; // 0x65f PushS
	GetProperty(var_14_string, var_11_float); // 0x660 Func
	var_15_int = 0; // 0x662 PushI
	var_16_bool = var_11_float <= var_15_int; // 0x663 LE
	if(var_16_bool == 0) goto Label_1639; // 0x664 JumpB
	SignalDeath(var_8_object); // 0x665 Func
	
Label_1639:
	return 2; // 0x667 Return
}


event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj(); // 0x669 PushV
	var_10_object = var_8_object; // 0x66a Mov
	func_1046(var_9_bool, var_10_object); // 0x66b NEW_2
	if(var_9_bool == 0) goto Label_1653; // 0x66d JumpB
	var_13_object = Obj(); // 0x66e PushV
	func_1473(var_13_object); // 0x66f NEW_2
	var_16_float = 0.05; // 0x671 PushF
	var_17_bool = 1; // 0x672 PushB
	ReportReputationChange(var_8_object, var_13_object, var_16_float, var_17_bool); // 0x673 Func
	
Label_1653:
	var_18_object = Obj(); // 0x675 PushV
	var_18_object = var_8_object; // 0x676 Mov
	func_2016(var_18_object); // 0x677 NEW_2
	return 0; // 0x679 Return
}


main(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector)
{
	EventDisable(1); // 0x277 EventDisable
	EventDisable(3); // 0x278 EventDisable
	var_8_int = 1; // 0x279 PushI
	Sleep(var_8_int); // 0x27a Func
	EventEnable(1); // 0x27c EventEnable
	EventEnable(3); // 0x27d EventEnable
	
Label_638:
	Hold(); // 0x27e Func
	goto Label_638; // 0x280 Jump
}


func_1536(var_204_float, var_205_cvector, var_206_cvector)
{
	var_207_float = 0; var_208_cvector = CVector(0,0,0); var_209_cvector = CVector(0,0,0); // 0x601 PushV
	var_208_cvector = var_205_cvector; // 0x602 Mov
	var_209_cvector = var_206_cvector; // 0x603 Mov
	func_1517(var_207_float, var_208_cvector, var_209_cvector); // 0x604 NEW_2
	var_216_float = 0; var_217_cvector = CVector(0,0,0); // 0x606 PushV
	var_217_cvector = var_205_cvector; // 0x607 Mov
	func_1526(var_216_float, var_217_cvector); // 0x608 NEW_2
	var_225_float = 0; var_226_cvector = CVector(0,0,0); // 0x60a PushV
	var_226_cvector = var_206_cvector; // 0x60b Mov
	func_1526(var_225_float, var_226_cvector); // 0x60c NEW_2
	var_227_float = var_216_float * var_225_float; // 0x60e Mult
	var_204_float = var_207_float / var_207_float; // 0x60f Div2
	return 0; // 0x610 Return
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
	func_1177(var_134_bool, var_135_object); // 0xd NEW_2
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


func_1794()
{
	var_12_object = GlobalVars[0]; // 0x702 PushGE
	var_13_object = Obj(); // 0x703 PushV
	func_1511(var_13_object); // 0x704 NEW_2
	var_12_object = var_13_object; // 0x705 Mov
	GlobalVars[0] = var_12_object; // 0x707 PopGE
	return 0; // 0x708 Return
}


func_773(var_0_object, var_1_object)
{
	var_294_int = 0; var_295_bool = 0; var_296_cvector = CVector(0,0,0); var_297_object = Obj(); var_298_int = 0; var_299_bool = 0; var_300_cvector = CVector(0,0,0); var_301_object = Obj(); // 0x305 PushV
	GetPFPosition(var_301_object); // 0x306 Func
	GetDirection(var_0_object); // 0x308 Func
	
Label_778:
	func_862(); // 0x30b NEW_2
	var_302_int = 10; // 0x30d PushI
	irand(var_298_int, var_302_int); // 0x30e Func
	var_303_int = 5; // 0x310 PushI
	var_304_int = var_298_int + var_303_int; // 0x311 Add
	Sleep(var_304_int, var_299_bool); // 0x312 Func
	var_305_bool = var_299_bool; // 0x314 Push
	if(var_305_bool == 0) goto Label_794; // 0x315 JumpB
	func_695(); // 0x317 NEW_2
	goto Label_855; // 0x319 Jump
	
Label_855:
	goto Label_778; // 0x357 Jump
	
Label_794:
	func_862(); // 0x31b NEW_2
	GetPFPosition(var_300_cvector); // 0x31d Func
	var_306_float = 0; var_307_cvector = CVector(0,0,0); var_308_cvector = CVector(0,0,0); // 0x31f PushV
	var_307_cvector = var_1_object; // 0x320 MovT
	var_308_cvector = var_300_cvector; // 0x321 Mov
	func_1489(var_306_float, var_307_cvector, var_308_cvector); // 0x322 NEW_2
	var_311_int = 40000; // 0x324 PushI
	var_312_bool = var_306_float > var_311_int; // 0x325 GT
	if(var_312_bool == 0) goto Label_841; // 0x326 JumpB
	FindPathTo(var_301_object, var_301_object); // 0x327 Func
	var_313_bool = var_301_object != 0; // 0x329 NullNeq
	if(var_313_bool == 0) goto Label_836; // 0x32a JumpB
	RotatePath(var_301_object, var_299_bool); // 0x32b Func
	var_314_bool = var_299_bool == 0; // 0x32d Not
	if(var_314_bool == 0) goto Label_816; // 0x32e JumpB
	goto Label_854; // 0x32f Jump
	
Label_854:
	goto Label_794; // 0x356 Jump
	
Label_816:
	var_315_bool = 0; // 0x330 PushB
	FollowPath(var_301_object, var_315_bool, var_299_bool); // 0x331 Func
	var_316_bool = var_299_bool == 0; // 0x333 Not
	if(var_316_bool == 0) goto Label_822; // 0x334 JumpB
	goto Label_854; // 0x335 Jump
	
Label_822:
	var_317_float = GetByIndex(var_0_object, 0); // 0x336 PushE
	var_318_float = GetByIndex(var_0_object, 2); // 0x337 PushE
	Rotate(var_317_float, var_318_float, var_299_bool); // 0x338 Func
	var_319_bool = var_299_bool == 0; // 0x33a Not
	if(var_319_bool == 0) goto Label_829; // 0x33b JumpB
	goto Label_854; // 0x33c Jump
	
Label_829:
	WaitForAnimEnd(var_299_bool); // 0x33d Func
	var_320_bool = var_299_bool == 0; // 0x33f Not
	if(var_320_bool == 0) goto Label_834; // 0x340 JumpB
	goto Label_854; // 0x341 Jump
	
Label_834:
	goto Label_855; // 0x342 Jump
	
Label_836:
	var_321_int = 1; // 0x344 PushI
	Sleep(var_321_int); // 0x345 Func
	var_301_object = 0; // 0x347 SetNull
	goto Label_854; // 0x348 Jump
	
Label_841:
	var_322_float = GetByIndex(var_0_object, 0); // 0x349 PushE
	var_323_float = GetByIndex(var_0_object, 2); // 0x34a PushE
	Rotate(var_322_float, var_323_float, var_299_bool); // 0x34b Func
	var_324_bool = var_299_bool == 0; // 0x34d Not
	if(var_324_bool == 0) goto Label_848; // 0x34e JumpB
	goto Label_854; // 0x34f Jump
	
Label_848:
	WaitForAnimEnd(var_299_bool); // 0x350 Func
	var_325_bool = var_299_bool == 0; // 0x352 Not
	if(var_325_bool == 0) goto Label_853; // 0x353 JumpB
	goto Label_854; // 0x354 Jump
	
Label_853:
	goto Label_855; // 0x355 Jump
}


func_1031(var_42_cvector)
{
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); // 0x407 PushV
	GetPosition(var_46_cvector); // 0x408 Func
	GetPosition(var_47_cvector); // 0x40a ObjFunc
	var_42_cvector = var_47_cvector - var_46_cvector; // 0x40c Sub2
	return 4; // 0x40d Return
}


func_1801(var_134_object, var_135_bool)
{
	var_136_object = Obj(); var_137_bool = 0; // 0x70a PushV
	var_136_object = var_134_object; // 0x70b Mov
	var_137_bool = var_135_bool; // 0x70c Mov
	TaskCall(2); // 0x70d TaskCall
	func_290(var_138_object, var_139_object, var_140_bool, var_136_object, var_137_bool); // 0x70e NEW_2
	TaskReturn(); // 0x70f TaskReturn
	ResetAAS(); // 0x711 Func
	return 0; // 0x713 Return
}


func_1038(var_374_float)
{
	var_376_cvector = CVector(0,0,0); var_377_cvector = CVector(0,0,0); var_378_cvector = CVector(0,0,0); var_379_cvector = CVector(0,0,0); var_380_cvector = CVector(0,0,0); var_381_cvector = CVector(0,0,0); // 0x40e PushV
	GetPosition(var_379_cvector); // 0x40f Func
	GetPosition(var_380_cvector); // 0x411 ObjFunc
	var_381_cvector = var_380_cvector - var_379_cvector; // 0x413 Sub2
	var_374_float = var_381_cvector | var_381_cvector; // 0x414 Or2
	return 6; // 0x415 Return
}


func_1553(var_305_float)
{
	var_306_object = Obj(); var_307_object = Obj(); // 0x611 PushV
	CreateFloatVector(var_307_object); // 0x612 Func
	add(var_305_float); // 0x614 ObjFunc
	var_308_int = 0; // 0x616 PushI
	var_309_bool = var_305_float < var_308_int; // 0x617 LT
	if(var_309_bool == 0) goto Label_1565; // 0x618 JumpB
	var_310_float = 0.7; // 0x619 PushF
	var_311_int = 500; // 0x61a PushI
	RumblePlay(var_310_float, var_311_int); // 0x61b Func
	
Label_1565:
	var_312_int = 15; // 0x61d PushI
	SendWorldWndMessage(var_312_int, var_307_object); // 0x61e Func
	return 2; // 0x620 Return
}


func_274()
{
	StopAsync(); // 0x112 Func
	StopGroup0(); // 0x114 Func
	Stop(); // 0x116 Func
	return 0; // 0x118 Return
}


func_1812(var_127_object)
{
	var_128_bool = 0; var_129_bool = 0; // 0x714 PushV
	var_130_bool = var_127_object == 0; // 0x715 NullEq
	if(var_130_bool == 0) goto Label_1816; // 0x716 JumpB
	return 2; // 0x717 Return
	
Label_1816:
	var_131_object = GlobalVars[0]; // 0x718 PushGE
	in(var_129_bool, var_127_object); // 0x719 ObjFunc
	var_132_bool = var_129_bool == 0; // 0x71b Not
	if(var_132_bool == 0) goto Label_1824; // 0x71c JumpB
	var_133_object = GlobalVars[0]; // 0x71d PushGE
	add(var_127_object); // 0x71e ObjFunc
	
Label_1824:
	var_134_bool = 0; var_135_object = Obj(); // 0x720 PushV
	var_135_object = var_127_object; // 0x721 Mov
	func_1046(var_134_bool, var_135_object); // 0x722 NEW_2
	if(var_134_bool == 0) goto Label_1835; // 0x724 JumpB
	var_138_object = Obj(); // 0x725 PushV
	func_1473(var_138_object); // 0x726 NEW_2
	var_141_float = 0.0; // 0x728 PushF
	ReportReputationChange(var_127_object, var_138_object, var_141_float); // 0x729 Func
	
Label_1835:
	return 2; // 0x72b Return
}


func_1046(var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0; // 0x416 PushV
	IsPlayerActor(var_10_object, var_12_bool); // 0x417 Func
	var_9_bool = var_12_bool; // 0x419 Mov
	return 2; // 0x41a Return
}


func_24()
{
	StopAsync(); // 0x18 Func
	var_128_int = 100; // 0x1a PushI
	KillTimer(var_128_int); // 0x1b Func
	StopGroup0(); // 0x1d Func
	return 0; // 0x1f Return
}


func_1177(var_13_bool, var_14_object)
{
	var_15_int = 0; var_16_int = 0; // 0x499 PushV
	var_17_bool = 0; var_18_object = Obj(); // 0x49a PushV
	var_18_object = var_14_object; // 0x49b Mov
	func_1141(var_17_bool, var_18_object); // 0x49c NEW_2
	var_34_bool = var_17_bool == 0; // 0x49e Not
	if(var_34_bool == 0) goto Label_1186; // 0x49f JumpB
	var_13_bool = 0; // 0x4a0 MovB
	return 2; // 0x4a1 Return
	
Label_1186:
	var_35_bool = 0; var_36_object = Obj(); var_37_string = ""; // 0x4a2 PushV
	var_36_object = var_14_object; // 0x4a3 Mov
	var_37_string = "noaccess"; // 0x4a4 MovS
	func_1051(var_35_bool, var_36_object, var_37_string); // 0x4a5 NEW_2
	var_44_bool = var_35_bool == 0; // 0x4a7 Not
	if(var_44_bool == 0) goto Label_1195; // 0x4a8 JumpB
	var_13_bool = 1; // 0x4a9 MovB
	return 2; // 0x4aa Return
	
Label_1195:
	var_45_string = "noaccess"; // 0x4ab PushS
	GetProperty(var_45_string, var_16_int); // 0x4ac ObjFunc
	var_46_int = 0; // 0x4ae PushI
	var_13_bool = var_16_int == var_46_int; // 0x4af Eq2
	return 2; // 0x4b0 Return
}


func_1051(var_35_bool, var_36_object, var_37_string)
{
	var_38_bool = 0; var_39_bool = 0; // 0x41b PushV
	var_40_string = "HasProperty"; // 0x41c PushS
	var_41_int = 2; // 0x41d PushI
	var_42_bool = IsFuncExist(var_36_object, var_40_string, var_41_int); // 0x41e FuncExist
	var_43_bool = var_42_bool == 0; // 0x41f Not
	if(var_43_bool == 0) goto Label_1059; // 0x420 JumpB
	var_35_bool = 0; // 0x421 MovB
	return 2; // 0x422 Return
	
Label_1059:
	HasProperty(var_37_string, var_39_bool); // 0x423 ObjFunc
	var_35_bool = var_39_bool; // 0x425 Mov
	return 2; // 0x426 Return
}


func_1313(var_14_object, var_17_cvector, var_18_cvector)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); // 0x521 PushV
	GetScene(var_21_object); // 0x522 Func
	var_23_string = "scripted"; // 0x524 PushS
	var_24_string = "blood_dir.xml"; // 0x525 PushS
	AddActorByType(var_22_object, var_23_string, var_21_object, var_17_cvector, var_18_cvector, var_24_string); // 0x526 Func
	var_25_object = Obj(); // 0x528 PushV
	var_25_object = var_14_object; // 0x529 Mov
	func_1201(var_25_object); // 0x52a NEW_2
	return 4; // 0x52c Return
}


func_1570(var_145_object)
{
	var_146_bool = 0; var_147_bool = 0; // 0x622 PushV
	IsPlayerActor(var_145_object, var_147_bool); // 0x623 Func
	var_148_bool = var_147_bool; // 0x625 Push
	if(var_148_bool == 0) goto Label_1578; // 0x626 JumpB
	var_149_string = "attack"; // 0x627 PushS
	PlayGlobalMusic(var_149_string); // 0x628 Func
	
Label_1578:
	return 2; // 0x62a Return
}


func_674(var_9_object)
{
	func_1794(); // 0x2a4 NEW_2
	var_16_object = Obj(); // 0x2a6 PushV
	var_16_object = var_9_object; // 0x2a7 Mov
	func_726(); // 0x2a8 NEW_2
	
Label_682:
	func_687(); // 0x2ab NEW_2
	goto Label_682; // 0x2ad Jump
}


func_1956(var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0; // 0x7a4 PushV
	var_13_bool = 0; var_14_object = Obj(); // 0x7a5 PushV
	var_14_object = var_10_object; // 0x7a6 Mov
	func_1177(var_13_bool, var_14_object); // 0x7a7 NEW_2
	var_47_bool = var_13_bool == 0; // 0x7a9 Not
	if(var_47_bool == 0) goto Label_1965; // 0x7aa JumpB
	var_9_bool = 0; // 0x7ab MovB
	return 2; // 0x7ac Return
	
Label_1965:
	var_48_object = GlobalVars[0]; // 0x7ad PushGE
	in(var_12_bool, var_10_object); // 0x7ae ObjFunc
	var_49_bool = var_12_bool; // 0x7b0 Push
	if(var_49_bool == 0) goto Label_1972; // 0x7b1 JumpB
	var_9_bool = 1; // 0x7b2 MovB
	return 2; // 0x7b3 Return
	
Label_1972:
	var_50_bool = 0; var_51_object = Obj(); // 0x7b4 PushV
	var_51_object = var_10_object; // 0x7b5 Mov
	func_1876(var_50_bool, var_51_object); // 0x7b6 NEW_2
	var_9_bool = var_50_bool; // 0x7b7 Mov
	return 2; // 0x7b9 Return
}


func_290(var_0_object, var_1_object, var_2_bool, var_136_object, var_137_bool)
{
	var_141_bool = 0; var_142_bool = 0; var_143_bool = 0; var_144_bool = 0; // 0x122 PushV
	var_0_object = var_136_object; // 0x123 TMov
	var_145_object = Obj(); // 0x124 PushV
	var_145_object = var_0_object; // 0x125 MovT
	func_1570(var_145_object); // 0x126 NEW_2
	func_1579(); // 0x129 NEW_2
	Face(var_0_object); // 0x12b Func
	var_156_bool = var_137_bool; // 0x12d Push
	if(var_156_bool == 0) goto Label_309; // 0x12e JumpB
	var_157_string = "all"; // 0x12f PushS
	var_158_string = "attack_on"; // 0x130 PushS
	PlayAnimation(var_157_string, var_158_string); // 0x131 Func
	WaitForAnimEnd(); // 0x133 Func
	
Label_309:
	var_159_string = "all"; // 0x135 PushS
	var_160_string = "attack_on"; // 0x136 PushS
	LockAnimationEnd(var_159_string, var_160_string); // 0x137 Func
	var_161_bool = 1; // 0x139 PushB
	SetAttackState(var_161_bool); // 0x13a Func
	
Label_316:
	var_162_bool = 0; var_163_object = Obj(); // 0x13c PushV
	var_163_object = var_0_object; // 0x13d MovT
	func_1177(var_162_bool, var_163_object); // 0x13e NEW_2
	if(var_162_bool == 0) goto Label_422; // 0x140 JumpB
	CanSee(var_144_bool, var_0_object); // 0x141 Func
	var_164_bool = var_144_bool; // 0x143 Push
	if(var_164_bool == 0) goto Label_333; // 0x144 JumpB
	var_165_object = Obj(); // 0x145 PushV
	var_165_object = var_0_object; // 0x146 MovT
	func_1570(var_165_object); // 0x147 NEW_2
	func_470(var_144_bool); // 0x14a NEW_2
	goto Label_412; // 0x14c Jump
	
Label_412:
	var_326_bool = var_1_object != 0; // 0x19c NullNeq
	if(var_326_bool == 0) goto Label_418; // 0x19d JumpB
	func_465(var_143_bool, var_144_bool); // 0x19f NEW_2
	goto Label_421; // 0x1a1 Jump
	
Label_421:
	goto Label_316; // 0x1a5 Jump
	
Label_418:
	var_327_int = 2; // 0x1a2 PushI
	Sleep(var_327_int); // 0x1a3 Func
	
Label_333:
	var_328_object = Obj(); // 0x14d PushV
	var_328_object = var_0_object; // 0x14e MovT
	func_1327(); // 0x14f NEW_2
	var_2_bool = 1; // 0x151 TMovB
	var_337_string = "all"; // 0x152 PushS
	var_338_string = "hunt"; // 0x153 PushS
	PlayAnimation(var_337_string, var_338_string); // 0x154 Func
	WaitForAnimEnd(var_143_bool); // 0x156 Func
	var_339_bool = var_143_bool == 0; // 0x158 Not
	if(var_339_bool == 0) goto Label_356; // 0x159 JumpB
	var_340_bool = var_1_object != 0; // 0x15a NullNeq
	if(var_340_bool == 0) goto Label_351; // 0x15b JumpB
	func_465(var_143_bool, var_144_bool); // 0x15d NEW_2
	
Label_351:
	var_341_string = "all"; // 0x15f PushS
	var_342_string = "attack_on"; // 0x160 PushS
	LockAnimationEnd(var_341_string, var_342_string); // 0x161 Func
	goto Label_316; // 0x163 Jump
	
Label_356:
	var_343_bool = 0; var_344_object = Obj(); // 0x164 PushV
	var_344_object = var_0_object; // 0x165 MovT
	func_1177(var_343_bool, var_344_object); // 0x166 NEW_2
	var_345_bool = var_343_bool == 0; // 0x168 Not
	if(var_345_bool == 0) goto Label_363; // 0x169 JumpB
	goto Label_422; // 0x16a Jump
	
Label_422:
	var_346_bool = 0; // 0x1a6 PushB
	SetAttackState(var_346_bool); // 0x1a7 Func
	StopAsync(); // 0x1a9 Func
	var_347_string = "all"; // 0x1ab PushS
	var_348_string = "attack_off"; // 0x1ac PushS
	PlayAnimation(var_347_string, var_348_string); // 0x1ad Func
	WaitForAnimEnd(); // 0x1af Func
	return 4; // 0x1b1 Return
	
Label_363:
	CanSee(var_144_bool, var_0_object); // 0x16b Func
	var_349_bool = var_144_bool; // 0x16d Push
	if(var_349_bool == 0) goto Label_374; // 0x16e JumpB
	var_2_bool = 0; // 0x16f TMovB
	Face(var_0_object); // 0x170 Func
	func_470(var_144_bool); // 0x173 NEW_2
	goto Label_412; // 0x175 Jump
	
Label_374:
	var_350_string = "all"; // 0x176 PushS
	var_351_string = "attack_on"; // 0x177 PushS
	LockAnimationEnd(var_350_string, var_351_string); // 0x178 Func
	var_352_int = 3; // 0x17a PushI
	Sleep(var_352_int, var_143_bool); // 0x17b Func
	var_353_bool = var_143_bool == 0; // 0x17d Not
	if(var_353_bool == 0) goto Label_393; // 0x17e JumpB
	var_354_bool = var_1_object != 0; // 0x17f NullNeq
	if(var_354_bool == 0) goto Label_388; // 0x180 JumpB
	func_465(var_143_bool, var_144_bool); // 0x182 NEW_2
	
Label_388:
	var_355_string = "all"; // 0x184 PushS
	var_356_string = "attack_on"; // 0x185 PushS
	LockAnimationEnd(var_355_string, var_356_string); // 0x186 Func
	goto Label_316; // 0x188 Jump
	
Label_393:
	var_357_bool = 0; var_358_object = Obj(); // 0x189 PushV
	var_358_object = var_0_object; // 0x18a MovT
	func_1177(var_357_bool, var_358_object); // 0x18b NEW_2
	var_359_bool = var_357_bool == 0; // 0x18d Not
	if(var_359_bool == 0) goto Label_400; // 0x18e JumpB
	goto Label_422; // 0x18f Jump
	
Label_400:
	var_2_bool = 0; // 0x190 TMovB
	CanSee(var_144_bool, var_0_object); // 0x191 Func
	var_360_bool = var_144_bool; // 0x193 Push
	if(var_360_bool == 0) goto Label_411; // 0x194 JumpB
	Face(var_0_object); // 0x195 Func
	func_470(var_144_bool); // 0x198 NEW_2
	goto Label_412; // 0x19a Jump
	
Label_411:
	goto Label_422; // 0x19b Jump
}


func_1063(var_252_float, var_253_object, var_254_float, var_255_int)
{
	var_256_int = 0; var_257_string = ""; var_258_int = 0; var_259_float = 0; var_260_float = 0; var_261_float = 0; var_262_int = 0; var_263_string = ""; var_264_int = 0; var_265_float = 0; var_266_float = 0; var_267_float = 0; // 0x427 PushV
	var_268_bool = 0; var_269_object = Obj(); var_270_string = ""; // 0x428 PushV
	var_269_object = var_253_object; // 0x429 Mov
	var_270_string = "health"; // 0x42a MovS
	func_1051(var_268_bool, var_269_object, var_270_string); // 0x42b NEW_2
	var_271_bool = var_268_bool == 0; // 0x42d Not
	if(var_271_bool == 0) goto Label_1073; // 0x42e JumpB
	var_252_float = 0.0; // 0x42f MovF
	return 12; // 0x430 Return
	
Label_1073:
	var_272_bool = 0; var_273_object = Obj(); var_274_string = ""; // 0x431 PushV
	var_273_object = var_253_object; // 0x432 Mov
	var_274_string = "armor"; // 0x433 MovS
	func_1051(var_272_bool, var_273_object, var_274_string); // 0x434 NEW_2
	var_275_bool = var_272_bool == 0; // 0x436 Not
	if(var_275_bool == 0) goto Label_1082; // 0x437 JumpB
	var_262_int = 0; // 0x438 MovI
	goto Label_1085; // 0x439 Jump
	
Label_1085:
	var_276_string = "armor_"; // 0x43d PushS
	var_277_string = ""; var_278_int = 0; // 0x43e PushV
	var_278_int = var_255_int; // 0x43f Mov
	func_1017(var_277_string, var_278_int); // 0x440 NEW_2
	var_263_string = var_276_string + var_277_string; // 0x442 Add2
	var_283_bool = 0; var_284_object = Obj(); var_285_string = ""; // 0x443 PushV
	var_284_object = var_253_object; // 0x444 Mov
	var_285_string = var_263_string; // 0x445 Mov
	func_1051(var_283_bool, var_284_object, var_285_string); // 0x446 NEW_2
	var_286_bool = var_283_bool == 0; // 0x448 Not
	if(var_286_bool == 0) goto Label_1100; // 0x449 JumpB
	var_264_int = 0; // 0x44a MovI
	goto Label_1102; // 0x44b Jump
	
Label_1102:
	var_287_float = 0; var_288_float = 0; var_289_float = 0; // 0x44e PushV
	var_290_int = var_262_int + var_264_int; // 0x44f Add
	var_291_float = 100.0; // 0x450 PushF
	var_288_float = var_290_int / var_290_int; // 0x451 Div2
	var_289_float = 1; // 0x452 MovI
	func_1493(var_287_float, var_288_float, var_289_float); // 0x453 NEW_2
	var_265_float = var_287_float; // 0x454 Mov
	var_293_string = "health"; // 0x456 PushS
	GetProperty(var_293_string, var_266_float); // 0x457 ObjFunc
	var_294_int = 1; // 0x459 PushI
	var_295_int = var_294_int - var_265_float; // 0x45a Sub
	var_267_float = var_254_float * var_295_int; // 0x45b Mult2
	var_296_string = "health"; // 0x45c PushS
	var_297_float = 0; var_298_float = 0; var_299_float = 0; var_300_float = 0; // 0x45d PushV
	var_298_float = var_266_float - var_267_float; // 0x45e Sub2
	var_299_float = 0; // 0x45f MovI
	var_300_float = 1; // 0x460 MovI
	func_1500(var_297_float, var_298_float, var_299_float, var_300_float); // 0x461 NEW_2
	SetProperty(var_296_string, var_297_float); // 0x463 ObjFunc
	var_303_bool = 0; var_304_object = Obj(); // 0x465 PushV
	var_304_object = var_253_object; // 0x466 Mov
	func_1046(var_303_bool, var_304_object); // 0x467 NEW_2
	if(var_303_bool == 0) goto Label_1134; // 0x469 JumpB
	var_305_float = 0; // 0x46a PushV
	var_305_float = -var_267_float; // 0x46b Neg2
	func_1553(var_305_float); // 0x46c NEW_2
	
Label_1134:
	var_252_float = var_267_float; // 0x46e Mov
	return 12; // 0x46f Return
	
Label_1100:
	GetProperty(var_263_string, var_264_int); // 0x44c ObjFunc
	
Label_1082:
	var_313_string = "armor"; // 0x43a PushS
	GetProperty(var_313_string, var_262_int); // 0x43b ObjFunc
}


func_1579()
{
	var_150_object = Obj(); var_151_object = Obj(); // 0x62b PushV
	GetScene(var_151_object); // 0x62c Func
	var_152_string = "battle"; // 0x62e PushS
	var_153_object = Obj(); // 0x62f PushV
	func_1473(var_153_object); // 0x630 NEW_2
	BroadcastMessage(var_152_string, var_153_object, var_151_object); // 0x632 Func
	return 2; // 0x634 Return
}


func_1836(var_142_object)
{
	var_143_object = Obj(); // 0x72d PushV
	var_143_object = var_142_object; // 0x72e Mov
	func_1812(var_143_object); // 0x72f NEW_2
	var_144_object = Obj(); var_145_bool = 0; // 0x731 PushV
	var_144_object = var_142_object; // 0x732 Mov
	var_145_bool = 1; // 0x733 MovB
	func_1801(var_144_object, var_145_bool); // 0x734 NEW_2
	return 0; // 0x736 Return
}


func_1327()
{
	var_329_cvector = CVector(0,0,0); var_330_cvector = CVector(0,0,0); var_331_cvector = CVector(0,0,0); var_332_cvector = CVector(0,0,0); var_333_cvector = CVector(0,0,0); var_334_cvector = CVector(0,0,0); // 0x52f PushV
	GetPosition(var_332_cvector); // 0x530 ObjFunc
	GetPosition(var_333_cvector); // 0x532 Func
	var_334_cvector = var_332_cvector - var_333_cvector; // 0x534 Sub2
	var_335_float = GetByIndex(var_334_cvector, 0); // 0x535 PushE
	var_336_float = GetByIndex(var_334_cvector, 2); // 0x536 PushE
	RotateAsync(var_335_float, var_336_float); // 0x537 Func
	return 6; // 0x539 Return
}


func_687()
{
	func_1794(); // 0x2b0 NEW_2
	
Label_690:
	func_773(var_11_cvector, var_9_object); // 0x2b3 NEW_2
	goto Label_690; // 0x2b5 Jump
}


func_1201(var_25_object)
{
	var_26_bool = 0; var_27_int = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_string = ""; var_33_bool = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_string = ""; // 0x4b1 PushV
	var_40_bool = var_25_object == 0; // 0x4b2 NullEq
	if(var_40_bool == 0) goto Label_1205; // 0x4b3 JumpB
	return 14; // 0x4b4 Return
	
Label_1205:
	IsDead(var_33_bool); // 0x4b5 Func
	var_41_bool = var_33_bool; // 0x4b7 Push
	if(var_41_bool == 0) goto Label_1210; // 0x4b8 JumpB
	return 14; // 0x4b9 Return
	
Label_1210:
	GetSecondaryAnimationType(var_34_int); // 0x4ba Func
	var_42_int = 0; // 0x4bc PushI
	var_43_bool = var_34_int < var_42_int; // 0x4bd LT
	if(var_43_bool == 0) goto Label_1216; // 0x4be JumpB
	return 14; // 0x4bf Return
	
Label_1216:
	GetPosition(var_35_cvector); // 0x4c0 ObjFunc
	GetPosition(var_36_cvector); // 0x4c2 Func
	GetDirection(var_37_cvector); // 0x4c4 Func
	var_38_cvector = var_36_cvector - var_35_cvector; // 0x4c6 Sub2
	var_44_float = GetByIndex(var_38_cvector, 0); // 0x4c7 PushE
	var_45_float = GetByIndex(var_37_cvector, 0); // 0x4c8 PushE
	var_46_float = var_44_float * var_45_float; // 0x4c9 Mult
	var_47_float = GetByIndex(var_38_cvector, 2); // 0x4ca PushE
	var_48_float = GetByIndex(var_37_cvector, 2); // 0x4cb PushE
	var_49_float = var_47_float * var_48_float; // 0x4cc Mult
	var_50_int = var_46_float + var_49_float; // 0x4cd Add
	var_51_int = 0; // 0x4ce PushI
	var_52_bool = var_50_int >= var_51_int; // 0x4cf GE
	if(var_52_bool == 0) goto Label_1235; // 0x4d0 JumpB
	var_39_string = "fhit"; // 0x4d1 MovS
	goto Label_1236; // 0x4d2 Jump
	
Label_1236:
	var_53_string = "hit_react"; // 0x4d4 PushS
	var_54_string = "1"; // 0x4d5 PushS
	var_55_int = var_39_string + var_54_string; // 0x4d6 Add
	var_56_string = "2"; // 0x4d7 PushS
	var_57_int = var_39_string + var_56_string; // 0x4d8 Add
	var_58_int = -10; // 0x4d9 PushI
	FadeSecondaryAnimation(var_53_string, var_55_int, var_57_int, var_58_int); // 0x4da Func
	return 14; // 0x4dc Return
	
Label_1235:
	var_39_string = "bhit"; // 0x4d3 MovS
}


func_1590(var_13_int)
{
	var_14_int = 0; var_15_int = 0; // 0x636 PushV
	var_16_string = "branch"; // 0x637 PushS
	GetVariable(var_16_string, var_15_int); // 0x638 Func
	var_13_int = var_15_int; // 0x63a Mov
	return 2; // 0x63b Return
}


func_695()
{
	return 0; // 0x2b7 Return
}


func_1847(var_129_object)
{
	var_130_bool = 0; var_131_bool = 0; // 0x737 PushV
	var_132_object = GlobalVars[0]; // 0x738 PushGE
	in(var_131_bool, var_129_object); // 0x739 ObjFunc
	var_133_bool = var_131_bool; // 0x73b Push
	if(var_133_bool == 0) goto Label_1859; // 0x73c JumpB
	var_134_object = Obj(); var_135_bool = 0; // 0x73d PushV
	var_134_object = var_129_object; // 0x73e Mov
	var_135_bool = 1; // 0x73f MovB
	func_1801(var_134_object, var_135_bool); // 0x740 NEW_2
	goto Label_1867; // 0x742 Jump
	
Label_1867:
	return 2; // 0x74b Return
	
Label_1859:
	var_361_object = Obj(); // 0x743 PushV
	var_361_object = var_129_object; // 0x744 Mov
	TaskCall(1); // 0x745 TaskCall
	func_120(var_363_bool, var_361_object); // 0x746 NEW_2
	TaskReturn(); // 0x747 TaskReturn
	ResetAAS(); // 0x749 Func
}


func_1978(var_129_object)
{
	var_130_object = Obj(); // 0x7bb PushV
	var_130_object = var_129_object; // 0x7bc Mov
	func_2010(var_130_object); // 0x7bd NEW_2
	return 0; // 0x7bf Return
}


func_1338(var_243_float)
{
	var_245_float = 0; var_246_float = 0; var_247_float = 0; var_248_float = 0; // 0x53a PushV
	GetEyesHeight(var_247_float); // 0x53b Func
	GetEyesHeight(var_248_float); // 0x53d ObjFunc
	var_243_float = var_248_float - var_247_float; // 0x53f Sub2
	return 4; // 0x540 Return
}


func_1596(var_12_object)
{
	var_13_int = 0; // 0x63d PushV
	func_1590(var_13_int); // 0x63e NEW_2
	var_17_int = 1; // 0x640 PushI
	var_18_bool = var_13_int == var_17_int; // 0x641 Eq
	if(var_18_bool == 0) goto Label_1606; // 0x642 JumpB
	WorkWithCorpse(var_12_object); // 0x643 Func
	goto Label_1608; // 0x645 Jump
	
Label_1608:
	return 0; // 0x648 Return
	
Label_1606:
	Barter(var_12_object); // 0x646 Func
}


func_1984(var_11_bool, var_12_object, var_13_object, var_14_bool)
{
	var_15_bool = 0; var_16_bool = 0; // 0x7c0 PushV
	var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x7c1 PushV
	var_18_object = var_13_object; // 0x7c2 Mov
	var_19_bool = !var_14_bool; // 0x7c3 Not2
	func_1658(var_17_bool, var_18_object, var_19_bool); // 0x7c4 NEW_2
	if(var_17_bool == 0) goto Label_2008; // 0x7c6 JumpB
	CanSee(var_16_bool, var_12_object); // 0x7c7 Func
	var_85_bool = 0; // 0x7c9 PushV
	var_85_bool = 1; // 0x7ca MovB
	var_86_bool = var_16_bool; // 0x7cb Push
	if(var_86_bool == 0) goto Label_2005; // 0x7cc JumpB
	var_87_float = 0; var_88_object = Obj(); // 0x7cd PushV
	var_88_object = var_12_object; // 0x7ce Mov
	func_1038(var_88_object); // 0x7cf NEW_2
	var_95_float = 490000.0; // 0x7d1 PushF
	var_96_bool = var_87_float <= var_95_float; // 0x7d2 LE
	if(var_96_bool == 0) goto Label_2005; // 0x7d3 JumpB
	var_85_bool = 0; // 0x7d4 MovB
	
Label_2005:
	if(var_85_bool == 0) goto Label_2008; // 0x7d5 JumpB
	var_11_bool = 1; // 0x7d6 MovB
	return 2; // 0x7d7 Return
	
Label_2008:
	var_11_bool = 0; // 0x7d8 MovB
	return 2; // 0x7d9 Return
}


func_1473(var_13_object)
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x5c1 PushV
	self(var_15_object); // 0x5c2 Func
	var_13_object = var_15_object; // 0x5c4 Mov
	return 2; // 0x5c5 Return
}


func_1345(var_47_string)
{
	var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_int = 0; var_52_bool = 0; var_53_float = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_int = 0; var_58_bool = 0; var_59_int = 0; var_60_bool = 0; var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x541 PushV
	IsExisting3DSound(var_56_bool, var_47_string); // 0x542 Func
	var_64_bool = var_56_bool == 0; // 0x544 Not
	if(var_64_bool == 0) goto Label_1370; // 0x545 JumpB
	var_57_int = 0; // 0x546 MovI
	
Label_1351:
	var_65_int = 1; // 0x547 PushI
	var_66_int = var_57_int + var_65_int; // 0x548 Add
	var_67_int = var_47_string + var_66_int; // 0x549 Add
	IsExisting3DSound(var_58_bool, var_67_int); // 0x54a Func
	var_68_bool = var_58_bool == 0; // 0x54c Not
	if(var_68_bool == 0) goto Label_1359; // 0x54d JumpB
	goto Label_1362; // 0x54e Jump
	
Label_1362:
	var_69_bool = var_57_int == 0; // 0x552 Not
	if(var_69_bool == 0) goto Label_1365; // 0x553 JumpB
	return 16; // 0x554 Return
	
Label_1365:
	irand(var_59_int, var_57_int); // 0x555 Func
	var_70_int = 1; // 0x557 PushI
	var_71_int = var_59_int + var_70_int; // 0x558 Add
	var_47_string = var_47_string + var_71_int; // 0x559 Add2
	
Label_1370:
	Is3DSoundLoaded(var_60_bool, var_47_string); // 0x55a Func
	var_72_bool = var_60_bool; // 0x55c Push
	if(var_72_bool == 0) goto Label_1385; // 0x55d JumpB
	GetEyesHeight(var_61_float); // 0x55e Func
	GetDirection(var_62_cvector); // 0x560 Func
	var_73_int = 50; // 0x562 PushI
	var_63_cvector = var_62_cvector * var_73_int; // 0x563 Mult2
	var_74_float = GetByIndex(var_63_cvector, 1); // 0x564 PushE
	var_74_float = var_74_float + var_61_float; // 0x565 Add2
	SetByIndex(var_63_cvector, 1) = var_74_float; // 0x566 PopE
	PlayGlobalSound(var_47_string, var_63_cvector); // 0x567 Func
	
Label_1385:
	return 16; // 0x569 Return
	
Label_1359:
	var_75_int = 1; // 0x54f PushI
	var_57_int = var_57_int + var_75_int; // 0x550 Add2
	goto Label_1351; // 0x551 Jump
}


func_1479(var_40_cvector, var_41_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x5c7 PushV
	var_50_int = var_41_cvector | var_41_cvector; // 0x5c8 Or
	var_49_float = sqrt(var_50_int); // 0x5c9 Sqrt2
	var_51_float = 0.0; // 0x5ca PushF
	var_52_bool = var_49_float < var_51_float; // 0x5cb LT
	if(var_52_bool == 0) goto Label_1487; // 0x5cc JumpB
	var_40_cvector = CVector(0.0, 0.0, 0.0); // 0x5cd MovV
	return 2; // 0x5ce Return
	
Label_1487:
	var_40_cvector = var_41_cvector / var_41_cvector; // 0x5cf Div2
	return 2; // 0x5d0 Return
}


func_1868(var_372_bool, var_373_object)
{
	var_374_float = 0; var_375_object = Obj(); // 0x74d PushV
	var_375_object = var_373_object; // 0x74e Mov
	func_1038(var_375_object); // 0x74f NEW_2
	var_382_float = 40000.0; // 0x751 PushF
	var_372_bool = var_374_float <= var_382_float; // 0x752 LE2
	return 0; // 0x753 Return
}


func_465(var_0_object, var_1_object)
{
	var_0_object = var_1_object; // 0x1d1 TMovT
	var_1_object = 0; // 0x1d2 SetNullT
	Face(var_0_object); // 0x1d3 Func
	return 0; // 0x1d5 Return
}


func_1489(var_306_float, var_307_cvector, var_308_cvector)
{
	var_309_cvector = CVector(0,0,0); var_310_cvector = CVector(0,0,0); // 0x5d1 PushV
	var_310_cvector = var_308_cvector - var_307_cvector; // 0x5d2 Sub2
	var_306_float = var_310_cvector | var_310_cvector; // 0x5d3 Or2
	return 2; // 0x5d4 Return
}


func_1876(var_50_bool, var_51_object)
{
	var_52_float = 0; var_53_string = ""; var_54_float = 0; var_55_float = 0; var_56_string = ""; var_57_float = 0; // 0x754 PushV
	var_58_bool = 0; var_59_object = Obj(); // 0x755 PushV
	var_59_object = var_51_object; // 0x756 Mov
	func_1177(var_58_bool, var_59_object); // 0x757 NEW_2
	var_60_bool = var_58_bool == 0; // 0x759 Not
	if(var_60_bool == 0) goto Label_1885; // 0x75a JumpB
	var_50_bool = 0; // 0x75b MovB
	return 6; // 0x75c Return
	
Label_1885:
	var_61_bool = 0; var_62_object = Obj(); // 0x75d PushV
	var_62_object = var_51_object; // 0x75e Mov
	func_1046(var_61_bool, var_62_object); // 0x75f NEW_2
	if(var_61_bool == 0) goto Label_1896; // 0x761 JumpB
	var_65_string = "reputation"; // 0x762 PushS
	GetProperty(var_65_string, var_55_float); // 0x763 ObjFunc
	var_66_float = 0.33; // 0x765 PushF
	var_50_bool = var_55_float < var_66_float; // 0x766 LT2
	return 6; // 0x767 Return
	
Label_1896:
	var_67_bool = 0; var_68_object = Obj(); var_69_string = ""; // 0x768 PushV
	var_68_object = var_51_object; // 0x769 Mov
	var_69_string = "class"; // 0x76a MovS
	func_1051(var_67_bool, var_68_object, var_69_string); // 0x76b NEW_2
	var_70_bool = var_67_bool == 0; // 0x76d Not
	if(var_70_bool == 0) goto Label_1905; // 0x76e JumpB
	var_50_bool = 0; // 0x76f MovB
	return 6; // 0x770 Return
	
Label_1905:
	var_71_string = "class"; // 0x771 PushS
	GetProperty(var_71_string, var_56_string); // 0x772 ObjFunc
	var_72_bool = 0; // 0x774 PushV
	var_72_bool = 1; // 0x775 MovB
	var_73_bool = 0; // 0x776 PushV
	var_73_bool = 1; // 0x777 MovB
	var_74_string = "bomber"; // 0x778 PushS
	var_75_bool = var_56_string == var_74_string; // 0x779 Eq
	if(var_75_bool == 0) goto Label_1919; // 0x77a JumpB
	var_76_string = "hunter"; // 0x77b PushS
	var_77_bool = var_56_string == var_76_string; // 0x77c Eq
	if(var_77_bool == 0) goto Label_1919; // 0x77d JumpB
	var_73_bool = 0; // 0x77e MovB
	
Label_1919:
	if(var_73_bool == 0) goto Label_1924; // 0x77f JumpB
	var_78_string = "grabitel"; // 0x780 PushS
	var_79_bool = var_56_string == var_78_string; // 0x781 Eq
	if(var_79_bool == 0) goto Label_1924; // 0x782 JumpB
	var_72_bool = 0; // 0x783 MovB
	
Label_1924:
	if(var_72_bool == 0) goto Label_1927; // 0x784 JumpB
	var_50_bool = 1; // 0x785 MovB
	return 6; // 0x786 Return
	
Label_1927:
	var_80_bool = 0; var_81_object = Obj(); var_82_string = ""; // 0x787 PushV
	var_81_object = var_51_object; // 0x788 Mov
	var_82_string = "disease"; // 0x789 MovS
	func_1051(var_80_bool, var_81_object, var_82_string); // 0x78a NEW_2
	var_83_bool = var_80_bool == 0; // 0x78c Not
	if(var_83_bool == 0) goto Label_1936; // 0x78d JumpB
	var_50_bool = 0; // 0x78e MovB
	return 6; // 0x78f Return
	
Label_1936:
	var_84_bool = 0; // 0x790 PushV
	var_84_bool = 1; // 0x791 MovB
	var_85_bool = 0; var_86_string = ""; // 0x792 PushV
	var_86_string = var_56_string; // 0x793 Mov
	func_1386(var_85_bool, var_86_string); // 0x794 NEW_2
	if(var_85_bool == 0) goto Label_1947; // 0x796 JumpB
	var_124_string = "dog"; // 0x797 PushS
	var_125_bool = var_56_string == var_124_string; // 0x798 Eq
	if(var_125_bool == 0) goto Label_1947; // 0x799 JumpB
	var_84_bool = 0; // 0x79a MovB
	
Label_1947:
	if(var_84_bool == 0) goto Label_1954; // 0x79b JumpB
	var_126_string = "disease"; // 0x79c PushS
	GetProperty(var_126_string, var_57_float); // 0x79d ObjFunc
	var_127_int = 0; // 0x79f PushI
	var_50_bool = var_57_float > var_127_int; // 0x7a0 GT2
	return 6; // 0x7a1 Return
	
Label_1954:
	var_50_bool = 0; // 0x7a2 MovB
	return 6; // 0x7a3 Return
}


func_1493(var_287_float, var_288_float, var_289_float)
{
	var_292_bool = var_288_float < var_289_float; // 0x5d6 LT
	if(var_292_bool == 0) goto Label_1498; // 0x5d7 JumpB
	var_287_float = var_288_float; // 0x5d8 Mov
	goto Label_1499; // 0x5d9 Jump
	
Label_1499:
	return 0; // 0x5db Return
	
Label_1498:
	var_287_float = var_289_float; // 0x5da Mov
}


func_470(var_0_object)
{
	var_166_cvector = CVector(0,0,0); var_167_cvector = CVector(0,0,0); var_168_bool = 0; var_169_cvector = CVector(0,0,0); var_170_cvector = CVector(0,0,0); var_171_object = Obj(); var_172_object = Obj(); var_173_cvector = CVector(0,0,0); var_174_object = Obj(); var_175_int = 0; var_176_cvector = CVector(0,0,0); var_177_float = 0; var_178_object = Obj(); var_179_object = Obj(); var_180_cvector = CVector(0,0,0); var_181_cvector = CVector(0,0,0); var_182_bool = 0; var_183_cvector = CVector(0,0,0); var_184_cvector = CVector(0,0,0); var_185_object = Obj(); var_186_object = Obj(); var_187_cvector = CVector(0,0,0); var_188_object = Obj(); var_189_int = 0; var_190_cvector = CVector(0,0,0); var_191_float = 0; var_192_object = Obj(); var_193_object = Obj(); // 0x1d6 PushV
	var_194_object = Obj(); // 0x1d7 PushV
	var_194_object = var_0_object; // 0x1d8 MovT
	func_1570(var_194_object); // 0x1d9 NEW_2
	ReportAttack(var_0_object); // 0x1db Func
	var_195_bool = 0; var_196_object = Obj(); // 0x1dd PushV
	var_196_object = var_0_object; // 0x1de MovT
	func_1046(var_195_bool, var_196_object); // 0x1df NEW_2
	if(var_195_bool == 0) goto Label_487; // 0x1e1 JumpB
	var_197_object = Obj(); // 0x1e2 PushV
	func_1473(var_197_object); // 0x1e3 NEW_2
	SendPlayerEnemy(var_0_object, var_197_object); // 0x1e5 Func
	
Label_487:
	GetDirection(var_180_cvector); // 0x1e7 Func
	var_198_cvector = CVector(0,0,0); var_199_object = Obj(); // 0x1e9 PushV
	var_199_object = var_0_object; // 0x1ea MovT
	func_1031(var_199_object); // 0x1eb NEW_2
	var_181_cvector = var_198_cvector; // 0x1ec Mov
	var_204_float = 0; var_205_cvector = CVector(0,0,0); var_206_cvector = CVector(0,0,0); // 0x1ee PushV
	var_205_cvector = var_180_cvector; // 0x1ef Mov
	var_206_cvector = var_181_cvector; // 0x1f0 Mov
	func_1536(var_204_float, var_205_cvector, var_206_cvector); // 0x1f1 NEW_2
	var_228_float = 0.99939; // 0x1f3 PushF
	var_229_bool = var_204_float < var_228_float; // 0x1f4 LT
	if(var_229_bool == 0) goto Label_503; // 0x1f5 JumpB
	return 28; // 0x1f6 Return
	
Label_503:
	func_1579(); // 0x1f8 NEW_2
	var_230_string = "all"; // 0x1fa PushS
	var_231_string = "attack_begin1"; // 0x1fb PushS
	PlayAnimation(var_230_string, var_231_string); // 0x1fc Func
	var_232_string = "attack"; // 0x1fe PushS
	GetGeometryLocator(var_232_string, var_182_bool, var_183_cvector, var_184_cvector); // 0x1ff Func
	var_233_bool = var_182_bool; // 0x201 Push
	if(var_233_bool == 0) goto Label_524; // 0x202 JumpB
	GetScene(var_186_object); // 0x203 Func
	var_234_string = "light-dynamic"; // 0x205 PushS
	var_235_string = "soldier_fire.xml"; // 0x206 PushS
	AddActorByType(var_185_object, var_234_string, var_186_object, var_183_cvector, var_184_cvector, var_235_string); // 0x207 Func
	var_186_object = 0; // 0x209 SetNull
	var_185_object = 0; // 0x20a SetNull
	goto Label_526; // 0x20b Jump
	
Label_526:
	var_236_string = "shot"; // 0x20e PushS
	var_237_cvector = CVector(0.0, 150.0, 0.0); // 0x20f PushVec
	var_238_int = 800; // 0x210 PushI
	var_239_int = 100000; // 0x211 PushI
	PlayGlobalSound(var_236_string, var_237_cvector, var_238_int, var_239_int); // 0x212 Func
	GetDirection(var_180_cvector); // 0x214 Func
	var_240_cvector = CVector(0,0,0); var_241_object = Obj(); // 0x216 PushV
	var_241_object = var_0_object; // 0x217 MovT
	func_1031(var_241_object); // 0x218 NEW_2
	var_181_cvector = var_240_cvector; // 0x219 Mov
	var_242_float = GetByIndex(var_181_cvector, 1); // 0x21b PushE
	var_243_float = 0; var_244_object = Obj(); // 0x21c PushV
	var_244_object = var_0_object; // 0x21d MovT
	func_1338(var_244_object); // 0x21e NEW_2
	var_242_float = var_242_float + var_243_float; // 0x220 Add2
	SetByIndex(var_181_cvector, 1) = var_242_float; // 0x221 PopE
	var_249_float = 0.03491; // 0x222 PushF
	RandVecCone3D(var_187_cvector, var_181_cvector, var_249_float); // 0x223 Func
	GetVictimMaterial(var_187_cvector, var_188_object, var_189_int, var_190_cvector); // 0x225 Func
	var_250_bool = var_188_object != 0; // 0x227 NullNeq
	if(var_250_bool == 0) goto Label_582; // 0x228 JumpB
	var_251_bool = var_188_object == var_0_object; // 0x229 Eq
	if(var_251_bool == 0) goto Label_567; // 0x22a JumpB
	var_252_float = 0; var_253_object = Obj(); var_254_float = 0; var_255_int = 0; // 0x22b PushV
	var_253_object = var_0_object; // 0x22c MovT
	var_254_float = 1.5; // 0x22d MovF
	var_255_int = 1; // 0x22e MovI
	func_1063(var_252_float, var_253_object, var_254_float, var_255_int); // 0x22f NEW_2
	var_191_float = var_252_float; // 0x230 Mov
	var_314_int = 2; // 0x232 PushI
	var_315_float = 1.5; // 0x233 PushF
	ReportHit(var_0_object, var_314_int, var_191_float, var_315_float); // 0x234 Func
	goto Label_582; // 0x236 Jump
	
Label_582:
	var_316_string = "all"; // 0x246 PushS
	var_317_string = "attack_end1"; // 0x247 PushS
	PlayAnimation(var_316_string, var_317_string); // 0x248 Func
	WaitForAnimEnd(); // 0x24a Func
	var_318_string = "all"; // 0x24c PushS
	var_319_string = "attack_on"; // 0x24d PushS
	LockAnimationEnd(var_318_string, var_319_string); // 0x24e Func
	return 28; // 0x250 Return
	
Label_567:
	var_320_int = -1; // 0x237 PushI
	var_321_bool = var_189_int != var_320_int; // 0x238 Neq
	if(var_321_bool == 0) goto Label_582; // 0x239 JumpB
	GetScene(var_192_object); // 0x23a Func
	var_322_string = "scripted"; // 0x23c PushS
	var_323_cvector = CVector(0.0, 0.0, 1.0); // 0x23d PushVec
	var_324_string = "richochet.xml"; // 0x23e PushS
	AddActorByType(var_193_object, var_322_string, var_192_object, var_190_cvector, var_323_cvector, var_324_string); // 0x23f Func
	var_325_string = "Material"; // 0x241 PushS
	SetScriptProperty(var_325_string, var_189_int); // 0x242 ObjFunc
	var_193_object = 0; // 0x244 SetNull
	var_192_object = 0; // 0x245 SetNull
	
Label_524:
	WaitForAnimEnd(); // 0x20c Func
}


func_857()
{
	StopGroup0(); // 0x359 Func
	Stop(); // 0x35b Func
	return 0; // 0x35d Return
}


func_2010(var_128_object)
{
	var_129_object = Obj(); // 0x7db PushV
	var_129_object = var_128_object; // 0x7dc Mov
	func_1847(var_129_object); // 0x7dd NEW_2
	return 0; // 0x7df Return
}


func_985(var_46_string)
{
	RemoveRTEnvelope(); // 0x3da Func
	SetDeathState(); // 0x3dc Func
	Stop(); // 0x3de Func
	StopAsync(); // 0x3e0 Func
	StopSecondaryAnimation(); // 0x3e2 Func
	var_47_string = ""; // 0x3e4 PushV
	var_47_string = var_46_string; // 0x3e5 Mov
	func_1345(var_47_string); // 0x3e6 NEW_2
	var_76_string = "all"; // 0x3e8 PushS
	PlayAnimation(var_76_string, var_46_string); // 0x3e9 Func
	WaitForAnimEnd(); // 0x3eb Func
	var_77_string = "all"; // 0x3ed PushS
	LockAnimationEnd(var_77_string, var_46_string); // 0x3ee Func
	RemoveEnvelope(); // 0x3f0 Func
	return 0; // 0x3f2 Return
}


func_1500(var_297_float, var_298_float, var_299_float, var_300_float)
{
	var_301_bool = var_298_float < var_299_float; // 0x5dd LT
	if(var_301_bool == 0) goto Label_1505; // 0x5de JumpB
	var_297_float = var_299_float; // 0x5df Mov
	return 0; // 0x5e0 Return
	
Label_1505:
	var_302_bool = var_298_float > var_300_float; // 0x5e1 GT
	if(var_302_bool == 0) goto Label_1509; // 0x5e2 JumpB
	var_297_float = var_300_float; // 0x5e3 Mov
	return 0; // 0x5e4 Return
	
Label_1509:
	var_297_float = var_298_float; // 0x5e5 Mov
	return 0; // 0x5e6 Return
}


func_1245(var_12_object, var_13_int, var_14_float)
{
	var_15_cvector = CVector(0,0,0); var_16_object = Obj(); var_17_int = 0; var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_int = 0; var_22_int = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_object = Obj(); var_26_int = 0; var_27_bool = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_int = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); // 0x4dd PushV
	var_33_bool = 0; // 0x4de PushV
	var_33_bool = 0; // 0x4df MovB
	var_34_bool = 0; // 0x4e0 PushV
	var_34_bool = 0; // 0x4e1 MovB
	var_35_object = var_12_object; // 0x4e2 Push
	if(var_35_object == 0) goto Label_1256; // 0x4e3 JumpB
	var_36_int = 4; // 0x4e4 PushI
	var_37_bool = var_13_int != var_36_int; // 0x4e5 Neq
	if(var_37_bool == 0) goto Label_1256; // 0x4e6 JumpB
	var_34_bool = 1; // 0x4e7 MovB
	
Label_1256:
	if(var_34_bool == 0) goto Label_1261; // 0x4e8 JumpB
	var_38_int = 5; // 0x4e9 PushI
	var_39_bool = var_13_int != var_38_int; // 0x4ea Neq
	if(var_39_bool == 0) goto Label_1261; // 0x4eb JumpB
	var_33_bool = 1; // 0x4ec MovB
	
Label_1261:
	if(var_33_bool == 0) goto Label_1308; // 0x4ed JumpB
	var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); // 0x4ee PushV
	var_42_cvector = CVector(0,0,0); var_43_object = Obj(); // 0x4ef PushV
	var_43_object = var_12_object; // 0x4f0 Mov
	func_1031(var_43_object); // 0x4f1 NEW_2
	var_41_cvector = var_42_cvector; // 0x4f2 Mov
	func_1479(var_40_cvector, var_41_cvector); // 0x4f4 NEW_2
	var_24_cvector = var_40_cvector; // 0x4f5 Mov
	CreateVectorVector(var_25_object); // 0x4f7 Func
	var_26_int = 1; // 0x4f9 MovI
	
Label_1274:
	var_53_string = "hit"; // 0x4fa PushS
	var_54_int = var_53_string + var_26_int; // 0x4fb Add
	GetGeometryLocator(var_54_int, var_27_bool, var_28_cvector, var_29_cvector); // 0x4fc Func
	var_55_bool = var_27_bool == 0; // 0x4fe Not
	if(var_55_bool == 0) goto Label_1281; // 0x4ff JumpB
	goto Label_1290; // 0x500 Jump
	
Label_1290:
	size(var_30_int); // 0x50a ObjFunc
	var_56_int = var_30_int; // 0x50c Push
	if(var_56_int == 0) goto Label_1307; // 0x50d JumpB
	irand(var_31_int, var_30_int); // 0x50e Func
	get(var_32_cvector, var_31_int); // 0x510 ObjFunc
	var_57_object = Obj(); var_58_int = 0; var_59_float = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); // 0x512 PushV
	var_57_object = var_12_object; // 0x513 Mov
	var_58_int = var_13_int; // 0x514 Mov
	var_59_float = var_14_float; // 0x515 Mov
	var_60_cvector = var_32_cvector; // 0x516 Mov
	var_61_cvector = -var_24_cvector; // 0x517 Neg2
	func_1313(var_59_float, var_60_cvector, var_61_cvector); // 0x518 NEW_2
	return 18; // 0x51a Return
	
Label_1307:
	var_25_object = 0; // 0x51b SetNull
	
Label_1308:
	var_102_object = Obj(); // 0x51c PushV
	var_102_object = var_12_object; // 0x51d Mov
	func_1201(var_102_object); // 0x51e NEW_2
	return 18; // 0x520 Return
	
Label_1281:
	var_103_int = var_29_cvector | var_24_cvector; // 0x501 Or
	var_104_float = 0.70711; // 0x502 PushF
	var_105_bool = var_103_int >= var_104_float; // 0x503 GE
	if(var_105_bool == 0) goto Label_1287; // 0x504 JumpB
	add(var_28_cvector); // 0x505 ObjFunc
	
Label_1287:
	var_106_int = 1; // 0x507 PushI
	var_26_int = var_26_int + var_106_int; // 0x508 Add2
	goto Label_1274; // 0x509 Jump
}


func_862()
{
	return 0; // 0x35e Return
}


func_863(var_22_object)
{
	var_23_object = Obj(); // 0x360 PushV
	var_23_object = var_22_object; // 0x361 Mov
	func_869(var_23_object); // 0x362 NEW_2
	return 0; // 0x364 Return
}


func_2016(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); // 0x7e0 PushV
	GetScene(var_20_object); // 0x7e1 Func
	var_21_object = Obj(); // 0x7e3 PushV
	func_1473(var_21_object); // 0x7e4 NEW_2
	RemoveStationaryActor(var_21_object); // 0x7e6 ObjFunc
	var_22_object = Obj(); // 0x7e8 PushV
	var_22_object = var_18_object; // 0x7e9 Mov
	TaskCall(5); // 0x7ea TaskCall
	func_863(var_22_object); // 0x7eb NEW_2
	TaskReturn(); // 0x7ec TaskReturn
	return 2; // 0x7ee Return
}


func_869(var_23_object)
{
	EventDisable(0); // 0x366 EventDisable
	var_24_object = Obj(); // 0x367 PushV
	var_24_object = var_23_object; // 0x368 Mov
	func_894(var_24_object); // 0x369 NEW_2
	var_104_int = 50; // 0x36b PushI
	var_105_int = 40; // 0x36c PushI
	SetRTEnvelope(var_104_int, var_105_int); // 0x36d Func
	EventEnable(0); // 0x36f EventEnable
	
Label_880:
	Hold(); // 0x370 Func
	goto Label_880; // 0x372 Jump
}


func_1511(var_13_object)
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x5e7 PushV
	CreateObjectSet(var_15_object); // 0x5e8 Func
	var_13_object = var_15_object; // 0x5ea Mov
	return 2; // 0x5eb Return
}


func_1386(var_85_bool, var_86_string)
{
	var_85_bool = 1; // 0x56b MovB
	var_87_bool = 0; // 0x56c PushV
	var_87_bool = 1; // 0x56d MovB
	var_88_bool = 0; // 0x56e PushV
	var_88_bool = 1; // 0x56f MovB
	var_89_bool = 0; // 0x570 PushV
	var_89_bool = 1; // 0x571 MovB
	var_90_bool = 0; // 0x572 PushV
	var_90_bool = 1; // 0x573 MovB
	var_91_bool = 0; // 0x574 PushV
	var_91_bool = 1; // 0x575 MovB
	var_92_bool = 0; // 0x576 PushV
	var_92_bool = 1; // 0x577 MovB
	var_93_bool = 0; // 0x578 PushV
	var_93_bool = 1; // 0x579 MovB
	var_94_bool = 0; // 0x57a PushV
	var_94_bool = 1; // 0x57b MovB
	var_95_bool = 0; // 0x57c PushV
	var_95_bool = 1; // 0x57d MovB
	var_96_bool = 0; // 0x57e PushV
	var_96_bool = 1; // 0x57f MovB
	var_97_bool = 0; // 0x580 PushV
	var_97_bool = 1; // 0x581 MovB
	var_98_string = "woman"; // 0x582 PushS
	var_99_bool = var_86_string == var_98_string; // 0x583 Eq
	if(var_99_bool == 0) goto Label_1417; // 0x584 JumpB
	var_100_string = "worker"; // 0x585 PushS
	var_101_bool = var_86_string == var_100_string; // 0x586 Eq
	if(var_101_bool == 0) goto Label_1417; // 0x587 JumpB
	var_97_bool = 0; // 0x588 MovB
	
Label_1417:
	if(var_97_bool == 0) goto Label_1422; // 0x589 JumpB
	var_102_string = "butcher"; // 0x58a PushS
	var_103_bool = var_86_string == var_102_string; // 0x58b Eq
	if(var_103_bool == 0) goto Label_1422; // 0x58c JumpB
	var_96_bool = 0; // 0x58d MovB
	
Label_1422:
	if(var_96_bool == 0) goto Label_1427; // 0x58e JumpB
	var_104_string = "wasted_girl"; // 0x58f PushS
	var_105_bool = var_86_string == var_104_string; // 0x590 Eq
	if(var_105_bool == 0) goto Label_1427; // 0x591 JumpB
	var_95_bool = 0; // 0x592 MovB
	
Label_1427:
	if(var_95_bool == 0) goto Label_1432; // 0x593 JumpB
	var_106_string = "boy"; // 0x594 PushS
	var_107_bool = var_86_string == var_106_string; // 0x595 Eq
	if(var_107_bool == 0) goto Label_1432; // 0x596 JumpB
	var_94_bool = 0; // 0x597 MovB
	
Label_1432:
	if(var_94_bool == 0) goto Label_1437; // 0x598 JumpB
	var_108_string = "vaxxabitka"; // 0x599 PushS
	var_109_bool = var_86_string == var_108_string; // 0x59a Eq
	if(var_109_bool == 0) goto Label_1437; // 0x59b JumpB
	var_93_bool = 0; // 0x59c MovB
	
Label_1437:
	if(var_93_bool == 0) goto Label_1442; // 0x59d JumpB
	var_110_string = "unosha"; // 0x59e PushS
	var_111_bool = var_86_string == var_110_string; // 0x59f Eq
	if(var_111_bool == 0) goto Label_1442; // 0x5a0 JumpB
	var_92_bool = 0; // 0x5a1 MovB
	
Label_1442:
	if(var_92_bool == 0) goto Label_1447; // 0x5a2 JumpB
	var_112_string = "wasted_male"; // 0x5a3 PushS
	var_113_bool = var_86_string == var_112_string; // 0x5a4 Eq
	if(var_113_bool == 0) goto Label_1447; // 0x5a5 JumpB
	var_91_bool = 0; // 0x5a6 MovB
	
Label_1447:
	if(var_91_bool == 0) goto Label_1452; // 0x5a7 JumpB
	var_114_string = "alkash"; // 0x5a8 PushS
	var_115_bool = var_86_string == var_114_string; // 0x5a9 Eq
	if(var_115_bool == 0) goto Label_1452; // 0x5aa JumpB
	var_90_bool = 0; // 0x5ab MovB
	
Label_1452:
	if(var_90_bool == 0) goto Label_1457; // 0x5ac JumpB
	var_116_string = "dohodyaga"; // 0x5ad PushS
	var_117_bool = var_86_string == var_116_string; // 0x5ae Eq
	if(var_117_bool == 0) goto Label_1457; // 0x5af JumpB
	var_89_bool = 0; // 0x5b0 MovB
	
Label_1457:
	if(var_89_bool == 0) goto Label_1462; // 0x5b1 JumpB
	var_118_string = "vaxxabit"; // 0x5b2 PushS
	var_119_bool = var_86_string == var_118_string; // 0x5b3 Eq
	if(var_119_bool == 0) goto Label_1462; // 0x5b4 JumpB
	var_88_bool = 0; // 0x5b5 MovB
	
Label_1462:
	if(var_88_bool == 0) goto Label_1467; // 0x5b6 JumpB
	var_120_string = "nudegirl"; // 0x5b7 PushS
	var_121_bool = var_86_string == var_120_string; // 0x5b8 Eq
	if(var_121_bool == 0) goto Label_1467; // 0x5b9 JumpB
	var_87_bool = 0; // 0x5ba MovB
	
Label_1467:
	if(var_87_bool == 0) goto Label_1472; // 0x5bb JumpB
	var_122_string = "morlok"; // 0x5bc PushS
	var_123_bool = var_86_string == var_122_string; // 0x5bd Eq
	if(var_123_bool == 0) goto Label_1472; // 0x5be JumpB
	var_85_bool = 0; // 0x5bf MovB
	
Label_1472:
	return 0; // 0x5c0 Return
}


func_1517(var_207_float, var_208_cvector, var_209_cvector)
{
	var_210_float = GetByIndex(var_208_cvector, 0); // 0x5ee PushE
	var_211_float = GetByIndex(var_209_cvector, 0); // 0x5ef PushE
	var_212_float = var_210_float * var_211_float; // 0x5f0 Mult
	var_213_float = GetByIndex(var_208_cvector, 2); // 0x5f1 PushE
	var_214_float = GetByIndex(var_209_cvector, 2); // 0x5f2 PushE
	var_215_float = var_213_float * var_214_float; // 0x5f3 Mult
	var_207_float = var_212_float + var_215_float; // 0x5f4 Add2
	return 0; // 0x5f5 Return
}


func_1136(var_28_bool)
{
	var_30_bool = 0; var_31_bool = 0; // 0x470 PushV
	IsDead(var_31_bool); // 0x471 ObjFunc
	var_28_bool = var_31_bool; // 0x473 Mov
	return 2; // 0x474 Return
}


func_1141(var_17_bool, var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); // 0x475 PushV
	var_23_bool = var_18_object == 0; // 0x476 NullEq
	if(var_23_bool == 0) goto Label_1146; // 0x477 JumpB
	var_17_bool = 0; // 0x478 MovB
	return 4; // 0x479 Return
	
Label_1146:
	var_24_bool = 0; // 0x47a PushV
	var_24_bool = 0; // 0x47b MovB
	var_25_string = "IsDead"; // 0x47c PushS
	var_26_int = 1; // 0x47d PushI
	var_27_bool = IsFuncExist(var_18_object, var_25_string, var_26_int); // 0x47e FuncExist
	if(var_27_bool == 0) goto Label_1158; // 0x47f JumpB
	var_28_bool = 0; var_29_object = Obj(); // 0x480 PushV
	var_29_object = var_18_object; // 0x481 Mov
	func_1136(var_29_object); // 0x482 NEW_2
	if(var_28_bool == 0) goto Label_1158; // 0x484 JumpB
	var_24_bool = 1; // 0x485 MovB
	
Label_1158:
	if(var_24_bool == 0) goto Label_1161; // 0x486 JumpB
	var_17_bool = 0; // 0x487 MovB
	return 4; // 0x488 Return
	
Label_1161:
	GetScene(var_21_object); // 0x489 Func
	var_32_bool = var_21_object == 0; // 0x48b NullEq
	if(var_32_bool == 0) goto Label_1167; // 0x48c JumpB
	var_17_bool = 0; // 0x48d MovB
	return 4; // 0x48e Return
	
Label_1167:
	GetScene(var_22_object); // 0x48f ObjFunc
	var_33_bool = var_21_object != var_22_object; // 0x491 Neq
	if(var_33_bool == 0) goto Label_1173; // 0x492 JumpB
	var_17_bool = 0; // 0x493 MovB
	return 4; // 0x494 Return
	
Label_1173:
	var_17_bool = 1; // 0x495 MovB
	return 4; // 0x496 Return
}


func_1526(var_216_float, var_217_cvector)
{
	var_218_float = GetByIndex(var_217_cvector, 0); // 0x5f7 PushE
	var_219_float = GetByIndex(var_217_cvector, 0); // 0x5f8 PushE
	var_220_float = var_218_float * var_219_float; // 0x5f9 Mult
	var_221_float = GetByIndex(var_217_cvector, 2); // 0x5fa PushE
	var_222_float = GetByIndex(var_217_cvector, 2); // 0x5fb PushE
	var_223_float = var_221_float * var_222_float; // 0x5fc Mult
	var_224_int = var_220_float + var_223_float; // 0x5fd Add
	var_216_float = sqrt(var_224_int); // 0x5fe Sqrt2
	return 0; // 0x5ff Return
}


func_120(var_0_object, var_361_object)
{
	var_364_bool = 0; var_365_int = 0; var_366_int = 0; var_367_bool = 0; var_368_int = 0; var_369_int = 0; // 0x78 PushV
	var_0_object = var_361_object; // 0x79 TMov
	var_370_object = Obj(); // 0x7a PushV
	var_370_object = var_0_object; // 0x7b MovT
	func_1570(var_370_object); // 0x7c NEW_2
	CanSee(var_369_int, var_0_object); // 0x7e Func
	var_371_object = var_1_object; // 0x80 PushT
	if(var_371_object == 0) goto Label_143; // 0x81 JumpB
	var_372_bool = 0; var_373_object = Obj(); // 0x82 PushV
	var_373_object = var_0_object; // 0x83 MovT
	func_1868(var_372_bool, var_373_object); // 0x84 NEW_2
	if(var_372_bool == 0) goto Label_141; // 0x86 JumpB
	var_383_object = Obj(); var_384_bool = 0; // 0x87 PushV
	var_383_object = var_0_object; // 0x88 MovT
	var_384_bool = 1; // 0x89 MovB
	func_1801(var_383_object, var_384_bool); // 0x8a NEW_2
	return 6; // 0x8c Return
	
Label_141:
	Face(var_0_object); // 0x8d Func
	
Label_143:
	func_1579(); // 0x90 NEW_2
	var_385_string = "all"; // 0x92 PushS
	var_386_string = "shoot_begin"; // 0x93 PushS
	PlayAnimation(var_385_string, var_386_string); // 0x94 Func
	WaitForAnimEnd(var_367_bool); // 0x96 Func
	var_387_bool = var_367_bool == 0; // 0x98 Not
	if(var_387_bool == 0) goto Label_157; // 0x99 JumpB
	StopAsync(); // 0x9a Func
	return 6; // 0x9c Return
	
Label_157:
	var_388_string = "shot"; // 0x9d PushS
	var_389_cvector = CVector(0.0, 150.0, 0.0); // 0x9e PushVec
	var_390_int = 800; // 0x9f PushI
	var_391_int = 100000; // 0xa0 PushI
	PlayGlobalSound(var_388_string, var_389_cvector, var_390_int, var_391_int); // 0xa1 Func
	var_392_string = "all"; // 0xa3 PushS
	var_393_string = "shoot_end"; // 0xa4 PushS
	PlayAnimation(var_392_string, var_393_string); // 0xa5 Func
	WaitForAnimEnd(var_367_bool); // 0xa7 Func
	var_394_bool = var_367_bool == 0; // 0xa9 Not
	if(var_394_bool == 0) goto Label_174; // 0xaa JumpB
	StopAsync(); // 0xab Func
	return 6; // 0xad Return
	
Label_174:
	var_395_string = "all"; // 0xae PushS
	var_396_string = "shoot_end"; // 0xaf PushS
	LockAnimationEnd(var_395_string, var_396_string); // 0xb0 Func
	var_368_int = 0; // 0xb2 MovI
	var_369_int = 0; // 0xb3 MovI
	
Label_180:
	var_397_int = 20; // 0xb4 PushI
	var_398_bool = var_369_int < var_397_int; // 0xb5 LT
	if(var_398_bool == 0) goto Label_232; // 0xb6 JumpB
	var_399_object = Obj(); // 0xb7 PushV
	var_399_object = var_0_object; // 0xb8 MovT
	func_1570(var_399_object); // 0xb9 NEW_2
	var_400_float = 0.5; // 0xbb PushF
	Sleep(var_400_float, var_367_bool); // 0xbc Func
	var_401_bool = var_367_bool == 0; // 0xbe Not
	if(var_401_bool == 0) goto Label_193; // 0xbf JumpB
	return 6; // 0xc0 Return
	
Label_193:
	CanSee(var_369_int, var_0_object); // 0xc1 Func
	var_402_object = var_1_object; // 0xc3 PushT
	if(var_402_object == 0) goto Label_215; // 0xc4 JumpB
	var_368_int = 0; // 0xc5 MovI
	var_403_bool = 0; var_404_object = Obj(); // 0xc6 PushV
	var_404_object = var_0_object; // 0xc7 MovT
	func_1868(var_403_bool, var_404_object); // 0xc8 NEW_2
	if(var_403_bool == 0) goto Label_212; // 0xca JumpB
	func_274(); // 0xcc NEW_2
	var_405_object = Obj(); var_406_bool = 0; // 0xce PushV
	var_405_object = var_0_object; // 0xcf MovT
	var_406_bool = 0; // 0xd0 MovB
	func_1801(var_405_object, var_406_bool); // 0xd1 NEW_2
	return 6; // 0xd3 Return
	
Label_212:
	Face(var_0_object); // 0xd4 Func
	goto Label_229; // 0xd6 Jump
	
Label_229:
	var_407_int = 1; // 0xe5 PushI
	var_369_int = var_369_int + var_407_int; // 0xe6 Add2
	goto Label_180; // 0xe7 Jump
	
Label_215:
	StopAsync(); // 0xd7 Func
	var_408_int = 1; // 0xd9 PushI
	var_368_int = var_368_int + var_408_int; // 0xda Add2
	var_409_int = 4; // 0xdb PushI
	var_410_bool = var_368_int == var_409_int; // 0xdc Eq
	if(var_410_bool == 0) goto Label_229; // 0xdd JumpB
	var_411_string = "all"; // 0xde PushS
	var_412_string = "attack_off"; // 0xdf PushS
	PlayAnimation(var_411_string, var_412_string); // 0xe0 Func
	WaitForAnimEnd(); // 0xe2 Func
	return 6; // 0xe4 Return
	
Label_232:
	func_274(); // 0xe9 NEW_2
	var_413_object = Obj(); var_414_bool = 0; // 0xeb PushV
	var_413_object = var_361_object; // 0xec Mov
	var_414_bool = 0; // 0xed MovB
	func_1801(var_413_object, var_414_bool); // 0xee NEW_2
	return 6; // 0xf0 Return
}


func_1017(var_277_string, var_278_int)
{
	var_279_int = 2; // 0x3fa PushI
	var_280_bool = var_278_int == var_279_int; // 0x3fb Eq
	if(var_280_bool == 0) goto Label_1024; // 0x3fc JumpB
	var_277_string = "fire"; // 0x3fd MovS
	return 0; // 0x3fe Return
	
Label_1024:
	var_281_int = 1; // 0x400 PushI
	var_282_bool = var_278_int == var_281_int; // 0x401 Eq
	if(var_282_bool == 0) goto Label_1029; // 0x402 JumpB
	var_277_string = "bullet"; // 0x403 MovS
	return 0; // 0x404 Return
	
Label_1029:
	var_277_string = "phys"; // 0x405 MovS
	return 0; // 0x406 Return
}


func_1658(var_17_bool, var_18_object, var_19_bool)
{
	var_20_string = ""; var_21_string = ""; // 0x67a PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x67b PushV
	var_23_object = var_18_object; // 0x67c Mov
	var_24_string = "class"; // 0x67d MovS
	func_1051(var_22_bool, var_23_object, var_24_string); // 0x67e NEW_2
	var_31_bool = var_22_bool == 0; // 0x680 Not
	if(var_31_bool == 0) goto Label_1668; // 0x681 JumpB
	var_17_bool = 0; // 0x682 MovB
	return 2; // 0x683 Return
	
Label_1668:
	var_32_string = "class"; // 0x684 PushS
	GetProperty(var_32_string, var_21_string); // 0x685 ObjFunc
	var_33_bool = 0; // 0x687 PushV
	var_33_bool = 1; // 0x688 MovB
	var_34_bool = 0; // 0x689 PushV
	var_34_bool = 1; // 0x68a MovB
	var_35_bool = 0; // 0x68b PushV
	var_35_bool = 1; // 0x68c MovB
	var_36_bool = 0; // 0x68d PushV
	var_36_bool = 1; // 0x68e MovB
	var_37_bool = 0; // 0x68f PushV
	var_37_bool = 1; // 0x690 MovB
	var_38_bool = 0; // 0x691 PushV
	var_38_bool = 1; // 0x692 MovB
	var_39_bool = 0; // 0x693 PushV
	var_39_bool = 1; // 0x694 MovB
	var_40_bool = 0; // 0x695 PushV
	var_40_bool = 1; // 0x696 MovB
	var_41_bool = 0; // 0x697 PushV
	var_41_bool = 1; // 0x698 MovB
	var_42_bool = 0; // 0x699 PushV
	var_42_bool = 1; // 0x69a MovB
	var_43_string = "patrol"; // 0x69b PushS
	var_44_bool = var_21_string == var_43_string; // 0x69c Eq
	if(var_44_bool == 0) goto Label_1698; // 0x69d JumpB
	var_45_string = "sanitar"; // 0x69e PushS
	var_46_bool = var_21_string == var_45_string; // 0x69f Eq
	if(var_46_bool == 0) goto Label_1698; // 0x6a0 JumpB
	var_42_bool = 0; // 0x6a1 MovB
	
Label_1698:
	if(var_42_bool == 0) goto Label_1703; // 0x6a2 JumpB
	var_47_string = "soldier"; // 0x6a3 PushS
	var_48_bool = var_21_string == var_47_string; // 0x6a4 Eq
	if(var_48_bool == 0) goto Label_1703; // 0x6a5 JumpB
	var_41_bool = 0; // 0x6a6 MovB
	
Label_1703:
	if(var_41_bool == 0) goto Label_1708; // 0x6a7 JumpB
	var_49_string = "woman"; // 0x6a8 PushS
	var_50_bool = var_21_string == var_49_string; // 0x6a9 Eq
	if(var_50_bool == 0) goto Label_1708; // 0x6aa JumpB
	var_40_bool = 0; // 0x6ab MovB
	
Label_1708:
	if(var_40_bool == 0) goto Label_1713; // 0x6ac JumpB
	var_51_string = "wasted_girl"; // 0x6ad PushS
	var_52_bool = var_21_string == var_51_string; // 0x6ae Eq
	if(var_52_bool == 0) goto Label_1713; // 0x6af JumpB
	var_39_bool = 0; // 0x6b0 MovB
	
Label_1713:
	if(var_39_bool == 0) goto Label_1718; // 0x6b1 JumpB
	var_53_string = "vaxxabitka"; // 0x6b2 PushS
	var_54_bool = var_21_string == var_53_string; // 0x6b3 Eq
	if(var_54_bool == 0) goto Label_1718; // 0x6b4 JumpB
	var_38_bool = 0; // 0x6b5 MovB
	
Label_1718:
	if(var_38_bool == 0) goto Label_1723; // 0x6b6 JumpB
	var_55_string = "vaxxabit"; // 0x6b7 PushS
	var_56_bool = var_21_string == var_55_string; // 0x6b8 Eq
	if(var_56_bool == 0) goto Label_1723; // 0x6b9 JumpB
	var_37_bool = 0; // 0x6ba MovB
	
Label_1723:
	if(var_37_bool == 0) goto Label_1728; // 0x6bb JumpB
	var_57_string = "little_girl"; // 0x6bc PushS
	var_58_bool = var_21_string == var_57_string; // 0x6bd Eq
	if(var_58_bool == 0) goto Label_1728; // 0x6be JumpB
	var_36_bool = 0; // 0x6bf MovB
	
Label_1728:
	if(var_36_bool == 0) goto Label_1733; // 0x6c0 JumpB
	var_59_string = "girl"; // 0x6c1 PushS
	var_60_bool = var_21_string == var_59_string; // 0x6c2 Eq
	if(var_60_bool == 0) goto Label_1733; // 0x6c3 JumpB
	var_35_bool = 0; // 0x6c4 MovB
	
Label_1733:
	if(var_35_bool == 0) goto Label_1738; // 0x6c5 JumpB
	var_61_string = "dohodyaga"; // 0x6c6 PushS
	var_62_bool = var_21_string == var_61_string; // 0x6c7 Eq
	if(var_62_bool == 0) goto Label_1738; // 0x6c8 JumpB
	var_34_bool = 0; // 0x6c9 MovB
	
Label_1738:
	if(var_34_bool == 0) goto Label_1743; // 0x6ca JumpB
	var_63_string = "nudegirl"; // 0x6cb PushS
	var_64_bool = var_21_string == var_63_string; // 0x6cc Eq
	if(var_64_bool == 0) goto Label_1743; // 0x6cd JumpB
	var_33_bool = 0; // 0x6ce MovB
	
Label_1743:
	if(var_33_bool == 0) goto Label_1746; // 0x6cf JumpB
	var_17_bool = 1; // 0x6d0 MovB
	return 2; // 0x6d1 Return
	
Label_1746:
	var_65_bool = var_19_bool; // 0x6d2 Push
	if(var_65_bool == 0) goto Label_1750; // 0x6d3 JumpB
	var_17_bool = 0; // 0x6d4 MovB
	return 2; // 0x6d5 Return
	
Label_1750:
	var_17_bool = 1; // 0x6d6 MovB
	var_66_bool = 0; // 0x6d7 PushV
	var_66_bool = 1; // 0x6d8 MovB
	var_67_bool = 0; // 0x6d9 PushV
	var_67_bool = 1; // 0x6da MovB
	var_68_bool = 0; // 0x6db PushV
	var_68_bool = 1; // 0x6dc MovB
	var_69_bool = 0; // 0x6dd PushV
	var_69_bool = 1; // 0x6de MovB
	var_70_bool = 0; // 0x6df PushV
	var_70_bool = 1; // 0x6e0 MovB
	var_71_string = "worker"; // 0x6e1 PushS
	var_72_bool = var_21_string == var_71_string; // 0x6e2 Eq
	if(var_72_bool == 0) goto Label_1768; // 0x6e3 JumpB
	var_73_string = "butcher"; // 0x6e4 PushS
	var_74_bool = var_21_string == var_73_string; // 0x6e5 Eq
	if(var_74_bool == 0) goto Label_1768; // 0x6e6 JumpB
	var_70_bool = 0; // 0x6e7 MovB
	
Label_1768:
	if(var_70_bool == 0) goto Label_1773; // 0x6e8 JumpB
	var_75_string = "boy"; // 0x6e9 PushS
	var_76_bool = var_21_string == var_75_string; // 0x6ea Eq
	if(var_76_bool == 0) goto Label_1773; // 0x6eb JumpB
	var_69_bool = 0; // 0x6ec MovB
	
Label_1773:
	if(var_69_bool == 0) goto Label_1778; // 0x6ed JumpB
	var_77_string = "unosha"; // 0x6ee PushS
	var_78_bool = var_21_string == var_77_string; // 0x6ef Eq
	if(var_78_bool == 0) goto Label_1778; // 0x6f0 JumpB
	var_68_bool = 0; // 0x6f1 MovB
	
Label_1778:
	if(var_68_bool == 0) goto Label_1783; // 0x6f2 JumpB
	var_79_string = "wasted_male"; // 0x6f3 PushS
	var_80_bool = var_21_string == var_79_string; // 0x6f4 Eq
	if(var_80_bool == 0) goto Label_1783; // 0x6f5 JumpB
	var_67_bool = 0; // 0x6f6 MovB
	
Label_1783:
	if(var_67_bool == 0) goto Label_1788; // 0x6f7 JumpB
	var_81_string = "alkash"; // 0x6f8 PushS
	var_82_bool = var_21_string == var_81_string; // 0x6f9 Eq
	if(var_82_bool == 0) goto Label_1788; // 0x6fa JumpB
	var_66_bool = 0; // 0x6fb MovB
	
Label_1788:
	if(var_66_bool == 0) goto Label_1793; // 0x6fc JumpB
	var_83_string = "morlok"; // 0x6fd PushS
	var_84_bool = var_21_string == var_83_string; // 0x6fe Eq
	if(var_84_bool == 0) goto Label_1793; // 0x6ff JumpB
	var_17_bool = 0; // 0x700 MovB
	
Label_1793:
	return 2; // 0x701 Return
}


func_894(var_24_object)
{
	var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_string = ""; var_30_object = Obj(); var_31_bool = 0; var_32_bool = 0; var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_string = ""; var_40_object = Obj(); var_41_bool = 0; var_42_bool = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0); // 0x37e PushV
	var_45_bool = var_24_object == 0; // 0x37f NullEq
	if(var_45_bool == 0) goto Label_902; // 0x380 JumpB
	var_46_string = ""; // 0x381 PushV
	var_46_string = "fdie"; // 0x382 MovS
	func_985(var_46_string); // 0x383 NEW_2
	goto Label_984; // 0x385 Jump
	
Label_984:
	return 20; // 0x3d8 Return
	
Label_902:
	GetPosition(var_35_cvector); // 0x386 ObjFunc
	GetPosition(var_36_cvector); // 0x388 Func
	GetDirection(var_37_cvector); // 0x38a Func
	var_38_cvector = var_36_cvector - var_35_cvector; // 0x38c Sub2
	var_78_float = GetByIndex(var_38_cvector, 0); // 0x38d PushE
	var_79_float = GetByIndex(var_37_cvector, 0); // 0x38e PushE
	var_80_float = var_78_float * var_79_float; // 0x38f Mult
	var_81_float = GetByIndex(var_38_cvector, 2); // 0x390 PushE
	var_82_float = GetByIndex(var_37_cvector, 2); // 0x391 PushE
	var_83_float = var_81_float * var_82_float; // 0x392 Mult
	var_84_int = var_80_float + var_83_float; // 0x393 Add
	var_85_int = 0; // 0x394 PushI
	var_86_bool = var_84_int >= var_85_int; // 0x395 GE
	if(var_86_bool == 0) goto Label_921; // 0x396 JumpB
	var_39_string = "fdie"; // 0x397 MovS
	goto Label_922; // 0x398 Jump
	
Label_922:
	RemoveRTEnvelope(); // 0x39a Func
	SetDeathState(); // 0x39c Func
	Stop(); // 0x39e Func
	StopAsync(); // 0x3a0 Func
	var_40_object = var_24_object; // 0x3a2 Mov
	var_87_string = "GetScriptProperty"; // 0x3a3 PushS
	var_88_int = 2; // 0x3a4 PushI
	var_89_bool = IsFuncExist(var_24_object, var_87_string, var_88_int); // 0x3a5 FuncExist
	if(var_89_bool == 0) goto Label_946; // 0x3a6 JumpB
	var_90_string = "Owner"; // 0x3a7 PushS
	HasScriptProperty(var_41_bool, var_90_string); // 0x3a8 ObjFunc
	var_91_bool = var_41_bool; // 0x3aa Push
	if(var_91_bool == 0) goto Label_946; // 0x3ab JumpB
	var_92_string = "Owner"; // 0x3ac PushS
	GetScriptProperty(var_40_object, var_92_string); // 0x3ad ObjFunc
	var_93_bool = var_40_object == 0; // 0x3af NullEq
	if(var_93_bool == 0) goto Label_946; // 0x3b0 JumpB
	var_40_object = var_24_object; // 0x3b1 Mov
	
Label_946:
	var_94_string = "@GetEyesHeight"; // 0x3b2 PushS
	var_95_int = 1; // 0x3b3 PushI
	var_96_bool = IsFuncExist(var_40_object, var_94_string, var_95_int); // 0x3b4 FuncExist
	if(var_96_bool == 0) goto Label_961; // 0x3b5 JumpB
	GetEyesHeight(var_43_float); // 0x3b6 ObjFunc
	var_44_cvector = CVector(0.0, 0.0, 0.0); // 0x3b8 MovV
	var_97_float = GetByIndex(var_44_cvector, 1); // 0x3b9 PushE
	var_97_float = var_43_float; // 0x3ba Mov
	SetByIndex(var_44_cvector, 1) = var_97_float; // 0x3bb PopE
	var_98_string = "head"; // 0x3bc PushS
	LookAsync(var_24_object, var_98_string, var_44_cvector); // 0x3bd Func
	var_42_bool = 1; // 0x3bf MovB
	goto Label_962; // 0x3c0 Jump
	
Label_962:
	var_99_string = ""; // 0x3c2 PushV
	var_99_string = var_39_string; // 0x3c3 Mov
	func_1345(var_99_string); // 0x3c4 NEW_2
	var_100_string = "all"; // 0x3c6 PushS
	PlayAnimation(var_100_string, var_39_string); // 0x3c7 Func
	WaitForAnimEnd(); // 0x3c9 Func
	var_101_bool = var_42_bool; // 0x3cb Push
	if(var_101_bool == 0) goto Label_978; // 0x3cc JumpB
	StopAsync(); // 0x3cd Func
	var_102_string = "head"; // 0x3cf PushS
	UnlookAsync(var_102_string); // 0x3d0 Func
	
Label_978:
	var_103_string = "all"; // 0x3d2 PushS
	LockAnimationEnd(var_103_string, var_39_string); // 0x3d3 Func
	RemoveEnvelope(); // 0x3d5 Func
	var_40_object = 0; // 0x3d7 SetNull
	
Label_961:
	var_42_bool = 0; // 0x3c1 MovB
	
Label_921:
	var_39_string = "bdie"; // 0x399 MovS
}


