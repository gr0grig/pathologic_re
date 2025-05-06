task_1_event_17(var_0_bool, var_1_object, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_11_object = Obj(); // 0x91 PushV
	var_11_object = var_10_bool; // 0x92 Mov
	func_2201(); // 0x93 NEW_2
	return 0; // 0x95 Return
}


task_1_event_30(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); // 0x97 PushV
	var_14_object = var_10_bool; // 0x98 Mov
	var_15_object = var_11_object; // 0x99 Mov
	func_2203(var_15_object); // 0x9a NEW_2
	return 0; // 0x9c Return
}


task_1_event_26(var_0_bool, var_1_string, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_11_string = "kill"; // 0x9e PushS
	var_12_bool = var_10_bool == var_11_string; // 0x9f Eq
	if(var_12_bool == 0) goto Label_162; // 0xa0 JumpB
	var_0_bool = 1; // 0xa1 TMovB
	
Label_162:
	return 0; // 0xa2 Return
}


task_2_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_object, var_8_bool, var_9_object, var_10_bool)
{
	var_11_object = Obj(); // 0xdc PushV
	var_11_object = var_10_bool; // 0xdd Mov
	func_2201(); // 0xde NEW_2
	return 0; // 0xe0 Return
}


task_2_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_object, var_8_object, var_9_bool, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); // 0xe2 PushV
	var_14_object = var_10_bool; // 0xe3 Mov
	var_15_object = var_11_object; // 0xe4 Mov
	func_2203(var_15_object); // 0xe5 NEW_2
	return 0; // 0xe7 Return
}


task_2_event_26(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_string, var_8_bool, var_9_object, var_10_bool)
{
	var_11_string = "kill"; // 0xe9 PushS
	var_12_bool = var_10_bool == var_11_string; // 0xea Eq
	if(var_12_bool == 0) goto Label_239; // 0xeb JumpB
	var_13_bool = GlobalVars[0]; // 0xec PushGE
	var_13_bool = 1; // 0xed MovB
	GlobalVars[0] = var_13_bool; // 0xee PopGE
	
Label_239:
	return 0; // 0xef Return
}


task_3_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_object = Obj(); // 0x385 PushV
	var_11_object = var_10_object; // 0x386 Mov
	func_2201(); // 0x387 NEW_2
	return 0; // 0x389 Return
}


task_3_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); // 0x38b PushV
	var_14_object = var_10_object; // 0x38c Mov
	var_15_object = var_11_object; // 0x38d Mov
	func_2203(var_15_object); // 0x38e NEW_2
	return 0; // 0x390 Return
}


task_3_event_26(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_string)
{
	var_11_string = "kill"; // 0x392 PushS
	var_12_bool = var_10_string == var_11_string; // 0x393 Eq
	if(var_12_bool == 0) goto Label_923; // 0x394 JumpB
	var_13_bool = GlobalVars[0]; // 0x395 PushGE
	var_13_bool = 1; // 0x396 MovB
	GlobalVars[0] = var_13_bool; // 0x397 PopGE
	func_987(var_10_string); // 0x399 NEW_2
	
Label_923:
	return 0; // 0x39b Return
}


task_3_event_7(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_int)
{
	var_11_int = 1; // 0x3ce PushI
	var_12_bool = var_10_int == var_11_int; // 0x3cf Eq
	if(var_12_bool == 0) goto Label_982; // 0x3d0 JumpB
	var_13_object = Obj(); // 0x3d1 PushV
	var_13_object = var_1_object; // 0x3d2 MovT
	func_2063(var_13_object); // 0x3d3 NEW_2
	goto Label_986; // 0x3d5 Jump
	
Label_986:
	return 0; // 0x3da Return
	
Label_982:
	var_18_int = 0; // 0x3d6 PushV
	var_18_int = var_10_int; // 0x3d7 Mov
	func_1131(var_9_bool, var_10_int, var_18_int); // 0x3d8 NEW_2
}


task_3_event_1(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0; // 0x3e9 PushV
	var_11_bool = 0; // 0x3ea MovB
	var_12_bool = var_1_object == var_10_object; // 0x3eb Eq
	if(var_12_bool == 0) goto Label_1008; // 0x3ec JumpB
	var_13_bool = var_2_int == 0; // 0x3ed Not
	if(var_13_bool == 0) goto Label_1008; // 0x3ee JumpB
	var_11_bool = 1; // 0x3ef MovB
	
Label_1008:
	if(var_11_bool == 0) goto Label_1014; // 0x3f0 JumpB
	var_2_int = 1; // 0x3f1 TMovB
	var_14_object = Obj(); // 0x3f2 PushV
	var_14_object = var_10_object; // 0x3f3 Mov
	func_1883(var_14_object); // 0x3f4 NEW_2
	
Label_1014:
	return 0; // 0x3f6 Return
}


task_3_event_2(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0; // 0x3f8 PushV
	var_11_bool = 0; // 0x3f9 MovB
	var_12_bool = var_1_object == var_10_object; // 0x3fa Eq
	if(var_12_bool == 0) goto Label_1023; // 0x3fb JumpB
	var_13_int = var_2_int; // 0x3fc PushT
	if(var_13_int == 0) goto Label_1023; // 0x3fd JumpB
	var_11_bool = 1; // 0x3fe MovB
	
Label_1023:
	if(var_11_bool == 0) goto Label_1028; // 0x3ff JumpB
	var_2_int = 0; // 0x400 TMovB
	var_14_string = "head"; // 0x401 PushS
	UnlookAsync(var_14_string); // 0x402 Func
	
Label_1028:
	return 0; // 0x404 Return
}


task_3_event_10(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	RequestClearPath(var_10_object); // 0x47e Func
	return 0; // 0x480 Return
}


task_3_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	func_987(var_10_object); // 0x48a NEW_2
	var_15_object = Obj(); // 0x48c PushV
	var_15_object = var_10_object; // 0x48d Mov
	func_2128(); // 0x48e NEW_2
	return 0; // 0x490 Return
}


	task_5_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_14_object)
	{
	var_15_bool = 0; var_16_object = Obj(); // 0x4b8 PushV
	var_16_object = var_14_object; // 0x4b9 Mov
	func_2134(var_15_bool, var_16_object); // 0x4ba NEW_2
	if(var_15_bool == 0) goto Label_1220; // 0x4bc JumpB
	func_1312(); // 0x4be NEW_2
	var_51_object = Obj(); // 0x4c0 PushV
	var_51_object = var_14_object; // 0x4c1 Mov
	func_2141(var_51_object); // 0x4c2 NEW_2
	
Label_1220:
	return 0; // 0x4c4 Return
	}


task_5_event_1(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0; // 0x4c5 PushV
	IsPlayerActor(var_10_object, var_12_bool); // 0x4c6 Func
	var_13_bool = var_12_bool; // 0x4c8 Push
	if(var_13_bool == 0) goto Label_1230; // 0x4c9 JumpB
	var_14_object = Obj(); // 0x4ca PushV
	var_14_object = var_10_object; // 0x4cb Mov
	func_1207(); // 0x4cc NEW_2
	
Label_1230:
	return 2; // 0x4ce Return
}


task_5_event_3(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0; // 0x4cf PushV
	IsPlayerActor(var_10_object, var_12_bool); // 0x4d0 Func
	var_13_bool = var_12_bool; // 0x4d2 Push
	if(var_13_bool == 0) goto Label_1240; // 0x4d3 JumpB
	var_14_object = Obj(); // 0x4d4 PushV
	var_14_object = var_10_object; // 0x4d5 Mov
	func_1207(); // 0x4d6 NEW_2
	
Label_1240:
	return 2; // 0x4d8 Return
}


task_6_event_0(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0; // 0x548 PushV
	IsOverrideActive(var_12_bool); // 0x549 Func
	var_13_bool = var_12_bool == 0; // 0x54b Not
	if(var_13_bool == 0) goto Label_1361; // 0x54c JumpB
	var_14_object = Obj(); // 0x54d PushV
	var_14_object = var_10_object; // 0x54e Mov
	func_2153(var_14_object); // 0x54f NEW_2
	
Label_1361:
	return 2; // 0x551 Return
}


task_6_event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	return 0; // 0x5c8 Return
}


task_6_event_16(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_string)
{
	return 0; // 0x5ca Return
}


task_6_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	return 0; // 0x5cc Return
}


event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0; // 0x832 PushV
	var_14_object = var_10_object; // 0x833 Mov
	var_15_int = var_11_int; // 0x834 Mov
	var_16_float = var_12_float; // 0x835 Mov
	func_1785(var_14_object, var_15_int, var_16_float); // 0x836 NEW_2
	return 0; // 0x838 Return
}


event_43(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float, var_14_cvector, var_15_cvector)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); // 0x83a PushV
	var_16_object = var_10_object; // 0x83b Mov
	var_17_int = var_11_int; // 0x83c Mov
	var_18_float = var_12_float; // 0x83d Mov
	var_19_cvector = var_14_cvector; // 0x83e Mov
	var_20_cvector = var_15_cvector; // 0x83f Mov
	func_1853(var_18_float, var_19_cvector, var_20_cvector); // 0x840 NEW_2
	return 0; // 0x842 Return
}


event_16(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_string)
{
	var_12_float = 0; var_13_float = 0; // 0x843 PushV
	var_14_string = "health"; // 0x844 PushS
	var_15_bool = var_11_string == var_14_string; // 0x845 Eq
	if(var_15_bool == 0) goto Label_2127; // 0x846 JumpB
	var_16_string = "health"; // 0x847 PushS
	GetProperty(var_16_string, var_13_float); // 0x848 Func
	var_17_int = 0; // 0x84a PushI
	var_18_bool = var_13_float <= var_17_int; // 0x84b LE
	if(var_18_bool == 0) goto Label_2127; // 0x84c JumpB
	SignalDeath(var_10_object); // 0x84d Func
	
Label_2127:
	return 2; // 0x84f Return
}


event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_object = Obj(); // 0x851 PushV
	var_11_object = var_10_object; // 0x852 Mov
	func_2089(var_11_object); // 0x853 NEW_2
	return 0; // 0x855 Return
}


main(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	var_10_string = ""; // 0x4a8 PushV
	var_10_string = "hunt"; // 0x4a9 MovS
	func_1197(var_10_string); // 0x4aa NEW_2
	return 0; // 0x4ac Return
}


func_0(var_61_bool, var_62_object, var_84_bool, var_689_object)
{
	var_63_float = 0; var_64_float = 0; // 0x0 PushV
	var_65_bool = 0; var_66_object = Obj(); // 0x1 PushV
	var_66_object = var_62_object; // 0x2 Mov
	func_1698(var_65_bool, var_66_object); // 0x3 NEW_2
	var_67_bool = var_65_bool == 0; // 0x5 Not
	if(var_67_bool == 0) goto Label_9; // 0x6 JumpB
	var_61_bool = 0; // 0x7 MovB
	return 2; // 0x8 Return
	
Label_9:
	var_68_float = 0; var_69_object = Obj(); // 0x9 PushV
	var_69_object = var_62_object; // 0xa Mov
	func_1506(var_69_object); // 0xb NEW_2
	var_64_float = var_68_float; // 0xc Mov
	var_76_bool = 0; var_77_float = 0; var_78_float = 0; var_79_float = 0; // 0xe PushV
	var_77_float = var_64_float; // 0xf Mov
	var_78_float = 250000.0; // 0x10 MovF
	var_79_float = 3240000.0; // 0x11 MovF
	func_1993(var_76_bool, var_77_float, var_78_float, var_79_float); // 0x12 NEW_2
	if(var_76_bool == 0) goto Label_29; // 0x14 JumpB
	var_82_bool = 0; var_83_object = Obj(); // 0x15 PushV
	var_83_object = var_62_object; // 0x16 Mov
	TaskCall(1); // 0x17 TaskCall
	func_37(var_64_float, var_84_bool, var_82_bool, var_83_object); // 0x18 NEW_2
	TaskReturn(); // 0x19 TaskReturn
	var_61_bool = var_84_bool; // 0x1a Mov
	return 2; // 0x1c Return
	
Label_29:
	var_687_bool = 0; var_688_object = Obj(); // 0x1d PushV
	var_688_object = var_62_object; // 0x1e Mov
	TaskCall(2); // 0x1f TaskCall
	func_163(var_687_bool, var_688_object); // 0x20 NEW_2
	TaskReturn(); // 0x21 TaskReturn
	var_61_bool = var_689_object; // 0x22 Mov
	return 2; // 0x24 Return
}


func_1029(var_0_bool, var_1_object, var_301_bool, var_302_object, var_303_float, var_304_float, var_305_bool, var_306_bool)
{
	var_307_bool = 0; var_308_bool = 0; var_309_object = Obj(); var_310_cvector = CVector(0,0,0); var_311_cvector = CVector(0,0,0); var_312_cvector = CVector(0,0,0); var_313_float = 0; var_314_object = Obj(); var_315_bool = 0; var_316_bool = 0; var_317_object = Obj(); var_318_cvector = CVector(0,0,0); var_319_cvector = CVector(0,0,0); var_320_cvector = CVector(0,0,0); var_321_float = 0; var_322_object = Obj(); // 0x405 PushV
	var_0_bool = 0; // 0x406 TMovB
	var_1_object = var_302_object; // 0x407 TMov
	var_316_bool = var_306_bool; // 0x408 Mov
	
Label_1033:
	var_323_bool = 0; var_324_object = Obj(); // 0x409 PushV
	var_324_object = var_302_object; // 0x40a Mov
	func_1169(var_323_bool, var_324_object); // 0x40b NEW_2
	var_327_bool = var_323_bool == 0; // 0x40d Not
	if(var_327_bool == 0) goto Label_1041; // 0x40e JumpB
	var_301_bool = 0; // 0x40f MovB
	return 16; // 0x410 Return
	
Label_1041:
	GetPosition(var_318_cvector); // 0x411 ObjFunc
	GetPosition(var_319_cvector); // 0x413 Func
	var_320_cvector = var_318_cvector - var_319_cvector; // 0x415 Sub2
	var_321_float = var_320_cvector | var_320_cvector; // 0x416 Or2
	var_328_bool = 0; // 0x417 PushV
	var_328_bool = 0; // 0x418 MovB
	var_329_int = 0; // 0x419 PushI
	var_330_bool = var_304_float > var_329_int; // 0x41a GT
	if(var_330_bool == 0) goto Label_1056; // 0x41b JumpB
	var_331_float = var_304_float * var_304_float; // 0x41c Mult
	var_332_bool = var_321_float > var_331_float; // 0x41d GT
	if(var_332_bool == 0) goto Label_1056; // 0x41e JumpB
	var_328_bool = 1; // 0x41f MovB
	
Label_1056:
	if(var_328_bool == 0) goto Label_1061; // 0x420 JumpB
	Stop(); // 0x421 Func
	var_301_bool = 0; // 0x423 MovB
	return 16; // 0x424 Return
	
Label_1061:
	var_333_float = var_303_float * var_303_float; // 0x425 Mult
	var_334_bool = var_321_float > var_333_float; // 0x426 GT
	if(var_334_bool == 0) goto Label_1123; // 0x427 JumpB
	GetPFPosition(var_318_cvector); // 0x428 ObjFunc
	FindPathTo(var_322_object, var_318_cvector); // 0x42a Func
	var_335_bool = var_322_object != 0; // 0x42c NullNeq
	if(var_335_bool == 0) goto Label_1072; // 0x42d JumpB
	var_317_object = var_322_object; // 0x42e Mov
	var_322_object = 0; // 0x42f SetNull
	
Label_1072:
	var_336_bool = var_317_object != 0; // 0x430 NullNeq
	if(var_336_bool == 0) goto Label_1105; // 0x431 JumpB
	var_337_bool = var_316_bool; // 0x432 Push
	if(var_337_bool == 0) goto Label_1082; // 0x433 JumpB
	var_316_bool = 0; // 0x434 MovB
	RotatePath(var_317_object, var_315_bool); // 0x435 Func
	var_338_bool = var_315_bool == 0; // 0x437 Not
	if(var_338_bool == 0) goto Label_1082; // 0x438 JumpB
	goto Label_1129; // 0x439 Jump
	
Label_1129:
	var_301_bool = !var_0_bool; // 0x469 Not2
	return 16; // 0x46a Return
	
Label_1082:
	var_339_int = 0; // 0x43a PushI
	var_340_float = 0.3; // 0x43b PushF
	SetTimer(var_339_int, var_340_float); // 0x43c Func
	var_341_string = ""; // 0x43e PushV
	func_1176(var_341_string); // 0x43f NEW_2
	var_342_string = ""; // 0x441 PushV
	func_1178(var_342_string); // 0x442 NEW_2
	FollowPath(var_317_object, var_305_bool, var_315_bool, var_341_string, var_342_string); // 0x444 Func
	var_343_bool = var_315_bool == 0; // 0x446 Not
	if(var_343_bool == 0) goto Label_1103; // 0x447 JumpB
	var_344_bool = var_0_bool; // 0x448 PushT
	if(var_344_bool == 0) goto Label_1101; // 0x449 JumpB
	var_317_object = 0; // 0x44a SetNull
	goto Label_1129; // 0x44b Jump
	
Label_1101:
	goto Label_1128; // 0x44d Jump
	
Label_1128:
	goto Label_1033; // 0x468 Jump
	
Label_1103:
	var_317_object = 0; // 0x44f SetNull
	goto Label_1121; // 0x450 Jump
	
Label_1121:
	var_322_object = 0; // 0x461 SetNull
	goto Label_1127; // 0x462 Jump
	
Label_1127:
	var_317_object = 0; // 0x467 SetNull
	
Label_1105:
	var_345_int = 0; // 0x451 PushI
	KillTimer(var_345_int); // 0x452 Func
	var_346_float = 0.5; // 0x454 PushF
	Sleep(var_346_float, var_315_bool); // 0x455 Func
	var_347_bool = var_315_bool == 0; // 0x457 Not
	if(var_347_bool == 0) goto Label_1117; // 0x458 JumpB
	var_348_bool = var_0_bool; // 0x459 PushT
	if(var_348_bool == 0) goto Label_1117; // 0x45a JumpB
	var_317_object = 0; // 0x45b SetNull
	goto Label_1129; // 0x45c Jump
	
Label_1117:
	var_349_int = 0; // 0x45d PushI
	var_350_float = 0.3; // 0x45e PushF
	SetTimer(var_349_int, var_350_float); // 0x45f Func
	
Label_1123:
	var_351_int = 0; // 0x463 PushI
	KillTimer(var_351_int); // 0x464 Func
	goto Label_1129; // 0x466 Jump
}


func_2053(var_26_float)
{
	var_27_object = Obj(); var_28_object = Obj(); // 0x805 PushV
	CreateFloatVector(var_28_object); // 0x806 Func
	add(var_26_float); // 0x808 ObjFunc
	var_29_int = 16; // 0x80a PushI
	SendWorldWndMessage(var_29_int, var_28_object); // 0x80b Func
	return 2; // 0x80d Return
}


func_2063(var_99_object)
{
	var_100_bool = 0; var_101_bool = 0; // 0x80f PushV
	IsPlayerActor(var_99_object, var_101_bool); // 0x810 Func
	var_102_bool = var_101_bool; // 0x812 Push
	if(var_102_bool == 0) goto Label_2071; // 0x813 JumpB
	var_103_string = "attack"; // 0x814 PushS
	PlayGlobalMusic(var_103_string); // 0x815 Func
	
Label_2071:
	return 2; // 0x817 Return
}


func_1553(var_537_float, var_538_object, var_539_float, var_540_int)
{
	var_544_int = 0; var_545_string = ""; var_546_int = 0; var_547_float = 0; var_548_float = 0; var_549_float = 0; var_550_int = 0; var_551_string = ""; var_552_int = 0; var_553_float = 0; var_554_float = 0; var_555_float = 0; // 0x611 PushV
	var_556_bool = 0; var_557_object = Obj(); var_558_string = ""; // 0x612 PushV
	var_557_object = var_538_object; // 0x613 Mov
	var_558_string = "health"; // 0x614 MovS
	func_1519(var_556_bool, var_557_object, var_558_string); // 0x615 NEW_2
	var_559_bool = var_556_bool == 0; // 0x617 Not
	if(var_559_bool == 0) goto Label_1563; // 0x618 JumpB
	var_537_float = 0.0; // 0x619 MovF
	return 12; // 0x61a Return
	
Label_1563:
	var_560_bool = 0; var_561_object = Obj(); var_562_string = ""; // 0x61b PushV
	var_561_object = var_538_object; // 0x61c Mov
	var_562_string = "armor"; // 0x61d MovS
	func_1519(var_560_bool, var_561_object, var_562_string); // 0x61e NEW_2
	var_563_bool = var_560_bool == 0; // 0x620 Not
	if(var_563_bool == 0) goto Label_1572; // 0x621 JumpB
	var_550_int = 0; // 0x622 MovI
	goto Label_1575; // 0x623 Jump
	
Label_1575:
	var_564_string = "armor_"; // 0x627 PushS
	var_565_string = ""; var_566_int = 0; // 0x628 PushV
	var_566_int = var_540_int; // 0x629 Mov
	func_1485(var_565_string, var_566_int); // 0x62a NEW_2
	var_551_string = var_564_string + var_565_string; // 0x62c Add2
	var_571_bool = 0; var_572_object = Obj(); var_573_string = ""; // 0x62d PushV
	var_572_object = var_538_object; // 0x62e Mov
	var_573_string = var_551_string; // 0x62f Mov
	func_1519(var_571_bool, var_572_object, var_573_string); // 0x630 NEW_2
	var_574_bool = var_571_bool == 0; // 0x632 Not
	if(var_574_bool == 0) goto Label_1590; // 0x633 JumpB
	var_552_int = 0; // 0x634 MovI
	goto Label_1592; // 0x635 Jump
	
Label_1592:
	var_575_float = 0; var_576_float = 0; var_577_float = 0; // 0x638 PushV
	var_578_int = var_550_int + var_552_int; // 0x639 Add
	var_579_float = 100.0; // 0x63a PushF
	var_576_float = var_578_int / var_578_int; // 0x63b Div2
	var_577_float = 1; // 0x63c MovI
	func_1951(var_575_float, var_576_float, var_577_float); // 0x63d NEW_2
	var_553_float = var_575_float; // 0x63e Mov
	var_581_string = "health"; // 0x640 PushS
	GetProperty(var_581_string, var_554_float); // 0x641 ObjFunc
	var_582_int = 1; // 0x643 PushI
	var_583_int = var_582_int - var_553_float; // 0x644 Sub
	var_555_float = var_539_float * var_583_int; // 0x645 Mult2
	var_584_string = "health"; // 0x646 PushS
	var_585_float = 0; var_586_float = 0; var_587_float = 0; var_588_float = 0; // 0x647 PushV
	var_586_float = var_554_float - var_555_float; // 0x648 Sub2
	var_587_float = 0; // 0x649 MovI
	var_588_float = 1; // 0x64a MovI
	func_1982(var_585_float, var_586_float, var_587_float, var_588_float); // 0x64b NEW_2
	SetProperty(var_584_string, var_585_float); // 0x64d ObjFunc
	var_591_bool = 0; var_592_object = Obj(); // 0x64f PushV
	var_592_object = var_538_object; // 0x650 Mov
	func_1514(var_591_bool, var_592_object); // 0x651 NEW_2
	if(var_591_bool == 0) goto Label_1624; // 0x653 JumpB
	var_593_float = 0; // 0x654 PushV
	var_593_float = -var_555_float; // 0x655 Neg2
	func_2036(var_593_float); // 0x656 NEW_2
	
Label_1624:
	var_537_float = var_555_float; // 0x658 Mov
	return 12; // 0x659 Return
	
Label_1590:
	GetProperty(var_551_string, var_552_int); // 0x636 ObjFunc
	
Label_1572:
	var_601_string = "armor"; // 0x624 PushS
	GetProperty(var_601_string, var_550_int); // 0x625 ObjFunc
}


func_2072()
{
	var_121_object = Obj(); var_122_object = Obj(); // 0x818 PushV
	GetScene(var_122_object); // 0x819 Func
	var_123_string = "battle"; // 0x81b PushS
	var_124_object = Obj(); // 0x81c PushV
	func_1935(var_124_object); // 0x81d NEW_2
	BroadcastMessage(var_123_string, var_124_object, var_122_object); // 0x81f Func
	return 2; // 0x821 Return
}


func_543(var_0_bool, var_490_bool, var_491_float)
{
	var_492_int = 0; var_493_bool = 0; var_494_int = 0; var_495_string = ""; var_496_int = 0; var_497_bool = 0; var_498_int = 0; var_499_string = ""; // 0x21f PushV
	func_884(var_499_string); // 0x221 NEW_2
	irand(var_496_int, var_499_string); // 0x223 Func
	var_500_int = 1; // 0x225 PushI
	var_496_int = var_496_int + var_500_int; // 0x226 Add2
	Face(var_0_bool); // 0x227 Func
	var_501_bool = 1; // 0x229 PushB
	SetAttackState(var_501_bool); // 0x22a Func
	func_2072(); // 0x22d NEW_2
	var_502_string = "all"; // 0x22f PushS
	var_503_string = "attack_begin"; // 0x230 PushS
	var_504_int = var_503_string + var_496_int; // 0x231 Add
	PlayAnimation(var_502_string, var_504_int); // 0x232 Func
	WaitForAnimEnd(); // 0x234 Func
	func_852(var_498_int, var_499_string); // 0x237 NEW_2
	var_520_bool = 0; var_521_object = Obj(); // 0x239 PushV
	var_521_object = var_0_bool; // 0x23a MovT
	func_1698(var_520_bool, var_521_object); // 0x23b NEW_2
	var_522_bool = var_520_bool == 0; // 0x23d Not
	if(var_522_bool == 0) goto Label_579; // 0x23e JumpB
	StopAsync(); // 0x23f Func
	var_490_bool = 0; // 0x241 MovB
	return 8; // 0x242 Return
	
Label_579:
	var_523_float = 0; var_524_int = 0; // 0x243 PushV
	var_523_float = var_491_float; // 0x244 Mov
	var_524_int = var_496_int; // 0x245 Mov
	func_504(var_499_string, var_523_float, var_524_int); // 0x246 NEW_2
	var_626_string = "all"; // 0x248 PushS
	var_627_string = "attack_middle"; // 0x249 PushS
	var_628_int = var_627_string + var_496_int; // 0x24a Add
	HasAnimation(var_497_bool, var_626_string, var_628_int); // 0x24b Func
	var_629_bool = var_497_bool; // 0x24d Push
	if(var_629_bool == 0) goto Label_660; // 0x24e JumpB
	func_2072(); // 0x250 NEW_2
	var_630_string = "all"; // 0x252 PushS
	var_631_string = "attack_middle"; // 0x253 PushS
	var_632_int = var_631_string + var_496_int; // 0x254 Add
	PlayAnimation(var_630_string, var_632_int); // 0x255 Func
	WaitForAnimEnd(); // 0x257 Func
	func_884(var_499_string); // 0x25a NEW_2
	var_633_bool = 0; var_634_object = Obj(); // 0x25c PushV
	var_634_object = var_0_bool; // 0x25d MovT
	func_1698(var_633_bool, var_634_object); // 0x25e NEW_2
	var_635_bool = var_633_bool == 0; // 0x260 Not
	if(var_635_bool == 0) goto Label_614; // 0x261 JumpB
	StopAsync(); // 0x262 Func
	var_490_bool = 0; // 0x264 MovB
	return 8; // 0x265 Return
	
Label_614:
	var_636_float = 0; var_637_int = 0; // 0x266 PushV
	var_636_float = var_491_float; // 0x267 Mov
	var_637_int = var_496_int; // 0x268 Mov
	func_504(var_499_string, var_636_float, var_637_int); // 0x269 NEW_2
	var_498_int = 1; // 0x26b MovI
	
Label_620:
	var_638_string = "attack_middle"; // 0x26c PushS
	var_639_int = var_638_string + var_496_int; // 0x26d Add
	var_640_string = "_"; // 0x26e PushS
	var_641_int = var_639_int + var_640_string; // 0x26f Add
	var_499_string = var_641_int + var_498_int; // 0x270 Add2
	var_642_string = "all"; // 0x271 PushS
	HasAnimation(var_497_bool, var_642_string, var_499_string); // 0x272 Func
	var_643_bool = var_497_bool == 0; // 0x274 Not
	if(var_643_bool == 0) goto Label_631; // 0x275 JumpB
	goto Label_660; // 0x276 Jump
	
Label_660:
	var_644_bool = 0; // 0x294 PushB
	SetAttackState(var_644_bool); // 0x295 Func
	var_645_string = "all"; // 0x297 PushS
	var_646_string = "attack_end"; // 0x298 PushS
	var_647_int = var_646_string + var_496_int; // 0x299 Add
	PlayAnimation(var_645_string, var_647_int); // 0x29a Func
	var_648_bool = 0; // 0x29c PushV
	func_894(var_648_bool); // 0x29d NEW_2
	if(var_648_bool == 0) goto Label_678; // 0x29f JumpB
	var_649_bool = 0; var_650_float = 0; // 0x2a0 PushV
	var_650_float = 0.45; // 0x2a1 MovF
	func_682(var_649_bool, var_650_float); // 0x2a2 NEW_2
	StopAsync(); // 0x2a4 Func
	
Label_678:
	var_490_bool = 1; // 0x2a6 MovB
	return 8; // 0x2a7 Return
	
Label_631:
	func_2072(); // 0x278 NEW_2
	var_658_string = "all"; // 0x27a PushS
	PlayAnimation(var_658_string, var_499_string); // 0x27b Func
	WaitForAnimEnd(); // 0x27d Func
	func_884(var_499_string); // 0x280 NEW_2
	var_659_bool = 0; var_660_object = Obj(); // 0x282 PushV
	var_660_object = var_0_bool; // 0x283 MovT
	func_1698(var_659_bool, var_660_object); // 0x284 NEW_2
	var_661_bool = var_659_bool == 0; // 0x286 Not
	if(var_661_bool == 0) goto Label_652; // 0x287 JumpB
	StopAsync(); // 0x288 Func
	var_490_bool = 0; // 0x28a MovB
	return 8; // 0x28b Return
	
Label_652:
	var_662_float = 0; var_663_int = 0; // 0x28c PushV
	var_662_float = var_491_float; // 0x28d Mov
	var_663_int = var_496_int; // 0x28e Mov
	func_504(var_499_string, var_662_float, var_663_int); // 0x28f NEW_2
	var_664_int = 1; // 0x291 PushI
	var_498_int = var_498_int + var_664_int; // 0x292 Add2
	goto Label_620; // 0x293 Jump
}


func_2083(var_619_bool)
{
	var_620_bool = 0; var_621_bool = 0; // 0x823 PushV
	var_622_string = "god_mode"; // 0x824 PushS
	GetVariable(var_622_string, var_621_bool); // 0x825 Func
	var_619_bool = var_621_bool; // 0x827 Mov
	return 2; // 0x828 Return
}


func_37(var_0_bool, var_82_bool, var_83_object, var_200_object)
{
	var_85_object = Obj(); var_86_cvector = CVector(0,0,0); var_87_bool = 0; var_88_object = Obj(); var_89_cvector = CVector(0,0,0); var_90_float = 0; var_91_cvector = CVector(0,0,0); var_92_object = Obj(); var_93_cvector = CVector(0,0,0); var_94_bool = 0; var_95_object = Obj(); var_96_cvector = CVector(0,0,0); var_97_float = 0; var_98_cvector = CVector(0,0,0); // 0x25 PushV
	var_99_object = Obj(); // 0x26 PushV
	var_99_object = var_83_object; // 0x27 Mov
	func_2063(var_99_object); // 0x28 NEW_2
	var_0_bool = 0; // 0x2a TMovB
	var_104_bool = 0; var_105_object = Obj(); // 0x2b PushV
	var_105_object = var_83_object; // 0x2c Mov
	func_1732(var_105_object); // 0x2d NEW_2
	var_118_bool = 0; var_119_object = Obj(); // 0x2f PushV
	var_119_object = var_83_object; // 0x30 Mov
	func_1698(var_118_bool, var_119_object); // 0x31 NEW_2
	var_120_bool = var_118_bool == 0; // 0x33 Not
	if(var_120_bool == 0) goto Label_55; // 0x34 JumpB
	var_82_bool = 0; // 0x35 MovB
	return 14; // 0x36 Return
	
Label_55:
	func_2072(); // 0x38 NEW_2
	Face(var_83_object); // 0x3a Func
	var_125_string = "all"; // 0x3c PushS
	var_126_string = "aattack_begin1"; // 0x3d PushS
	PlayAnimation(var_125_string, var_126_string); // 0x3e Func
	WaitForAnimEnd(); // 0x40 Func
	var_127_bool = 0; var_128_object = Obj(); // 0x42 PushV
	var_128_object = var_83_object; // 0x43 Mov
	func_1698(var_127_bool, var_128_object); // 0x44 NEW_2
	var_129_bool = var_127_bool == 0; // 0x46 Not
	if(var_129_bool == 0) goto Label_76; // 0x47 JumpB
	StopAsync(); // 0x48 Func
	var_82_bool = 0; // 0x4a MovB
	return 14; // 0x4b Return
	
Label_76:
	var_130_string = "all"; // 0x4c PushS
	var_131_string = "aattack_end1"; // 0x4d PushS
	PlayAnimation(var_130_string, var_131_string); // 0x4e Func
	GetScene(var_92_object); // 0x50 Func
	var_132_string = "knife"; // 0x52 PushS
	GetGeometryLocator(var_132_string, var_94_bool, var_93_cvector); // 0x53 Func
	var_133_string = "scripted"; // 0x55 PushS
	var_134_cvector = CVector(0.0, 0.0, 1.0); // 0x56 PushVec
	var_135_string = "grabitel_knife.xml"; // 0x57 PushS
	AddActorByType(var_95_object, var_133_string, var_92_object, var_93_cvector, var_134_cvector, var_135_string); // 0x58 Func
	var_136_string = "Owner"; // 0x5a PushS
	var_137_object = Obj(); // 0x5b PushV
	func_1935(var_137_object); // 0x5c NEW_2
	SetScriptProperty(var_136_string, var_137_object); // 0x5e ObjFunc
	var_138_string = "Target"; // 0x60 PushS
	SetScriptProperty(var_138_string, var_83_object); // 0x61 ObjFunc
	GetPosition(var_96_cvector); // 0x63 ObjFunc
	GetEyesHeight(var_97_float); // 0x65 ObjFunc
	var_139_float = GetByIndex(var_96_cvector, 1); // 0x67 PushE
	var_140_int = 10; // 0x68 PushI
	var_141_int = var_97_float - var_140_int; // 0x69 Sub
	var_139_float = var_139_float + var_141_int; // 0x6a Add2
	SetByIndex(var_96_cvector, 1) = var_139_float; // 0x6b PopE
	var_142_cvector = CVector(0,0,0); var_143_cvector = CVector(0,0,0); var_144_cvector = CVector(0,0,0); var_145_float = 0; // 0x6c PushV
	var_143_cvector = var_93_cvector; // 0x6d Mov
	var_144_cvector = var_96_cvector; // 0x6e Mov
	var_145_float = 2000.0; // 0x6f MovF
	func_2166(var_142_cvector, var_143_cvector, var_144_cvector, var_145_float); // 0x70 NEW_2
	var_98_cvector = var_142_cvector; // 0x71 Mov
	var_193_string = "StartDirection"; // 0x73 PushS
	SetScriptProperty(var_193_string, var_98_cvector); // 0x74 ObjFunc
	WaitForAnimEnd(); // 0x76 Func
	StopAsync(); // 0x78 Func
	var_194_bool = var_0_bool; // 0x7a PushT
	if(var_194_bool == 0) goto Label_126; // 0x7b JumpB
	var_82_bool = 1; // 0x7c MovB
	return 14; // 0x7d Return
	
Label_126:
	var_195_bool = 0; var_196_object = Obj(); // 0x7e PushV
	var_196_object = var_83_object; // 0x7f Mov
	func_1698(var_195_bool, var_196_object); // 0x80 NEW_2
	var_197_bool = var_195_bool == 0; // 0x82 Not
	if(var_197_bool == 0) goto Label_134; // 0x83 JumpB
	var_82_bool = 0; // 0x84 MovB
	return 14; // 0x85 Return
	
Label_134:
	var_198_bool = 0; var_199_object = Obj(); // 0x86 PushV
	var_199_object = var_83_object; // 0x87 Mov
	TaskCall(2); // 0x88 TaskCall
	func_163(var_198_bool, var_199_object); // 0x89 NEW_2
	TaskReturn(); // 0x8a TaskReturn
	var_82_bool = var_200_object; // 0x8b Mov
	return 14; // 0x8d Return
}


func_2089(var_11_object)
{
	var_12_object = Obj(); // 0x82a PushV
	var_12_object = var_11_object; // 0x82b Mov
	TaskCall(6); // 0x82c TaskCall
	func_1317(var_12_object); // 0x82d NEW_2
	TaskReturn(); // 0x82e TaskReturn
	return 0; // 0x830 Return
}


func_2134(var_15_bool, var_16_object)
{
	var_17_bool = 0; var_18_object = Obj(); // 0x857 PushV
	var_18_object = var_16_object; // 0x858 Mov
	func_1698(var_17_bool, var_18_object); // 0x859 NEW_2
	var_15_bool = var_17_bool; // 0x85a Mov
	return 0; // 0x85c Return
}


func_1626(var_608_bool, var_609_object)
{
	var_610_float = 0; var_611_float = 0; // 0x65a PushV
	var_612_bool = 0; var_613_object = Obj(); var_614_string = ""; // 0x65b PushV
	var_613_object = var_609_object; // 0x65c Mov
	var_614_string = "health"; // 0x65d MovS
	func_1519(var_612_bool, var_613_object, var_614_string); // 0x65e NEW_2
	var_615_bool = var_612_bool == 0; // 0x660 Not
	if(var_615_bool == 0) goto Label_1636; // 0x661 JumpB
	var_608_bool = 0; // 0x662 MovB
	return 2; // 0x663 Return
	
Label_1636:
	var_616_bool = 0; // 0x664 PushV
	var_616_bool = 0; // 0x665 MovB
	var_617_bool = 0; var_618_object = Obj(); // 0x666 PushV
	var_618_object = var_609_object; // 0x667 Mov
	func_1514(var_617_bool, var_618_object); // 0x668 NEW_2
	if(var_617_bool == 0) goto Label_1648; // 0x66a JumpB
	var_619_bool = 0; // 0x66b PushV
	func_2083(var_619_bool); // 0x66c NEW_2
	if(var_619_bool == 0) goto Label_1648; // 0x66e JumpB
	var_616_bool = 1; // 0x66f MovB
	
Label_1648:
	if(var_616_bool == 0) goto Label_1651; // 0x670 JumpB
	var_608_bool = 0; // 0x671 MovB
	return 2; // 0x672 Return
	
Label_1651:
	var_623_string = "health"; // 0x673 PushS
	GetProperty(var_623_string, var_611_float); // 0x674 ObjFunc
	var_624_float = 0.0; // 0x676 PushF
	var_608_bool = var_611_float <= var_624_float; // 0x677 LE2
	return 2; // 0x678 Return
}


func_2141(var_51_object)
{
	var_52_object = Obj(); // 0x85e PushV
	var_52_object = var_51_object; // 0x85f Mov
	func_2206(var_52_object); // 0x860 NEW_2
	return 0; // 0x862 Return
}


func_2147(var_15_int)
{
	var_16_int = 0; var_17_int = 0; // 0x863 PushV
	var_18_string = "branch"; // 0x864 PushS
	GetVariable(var_18_string, var_17_int); // 0x865 Func
	var_15_int = var_17_int; // 0x867 Mov
	return 2; // 0x868 Return
}


func_2153(var_14_object)
{
	var_15_int = 0; // 0x86a PushV
	func_2147(var_15_int); // 0x86b NEW_2
	var_19_int = 1; // 0x86d PushI
	var_20_bool = var_15_int == var_19_int; // 0x86e Eq
	if(var_20_bool == 0) goto Label_2163; // 0x86f JumpB
	WorkWithCorpse(var_14_object); // 0x870 Func
	goto Label_2165; // 0x872 Jump
	
Label_2165:
	return 0; // 0x875 Return
	
Label_2163:
	Barter(var_14_object); // 0x873 Func
}


func_1131(var_0_bool, var_1_object, var_18_int)
{
	var_19_int = 0; // 0x46c PushI
	var_20_bool = var_18_int != var_19_int; // 0x46d Neq
	if(var_20_bool == 0) goto Label_1136; // 0x46e JumpB
	return 0; // 0x46f Return
	
Label_1136:
	var_21_bool = 0; var_22_object = Obj(); // 0x470 PushV
	var_22_object = var_1_object; // 0x471 MovT
	func_1169(var_21_bool, var_22_object); // 0x472 NEW_2
	var_57_bool = var_21_bool == 0; // 0x474 Not
	if(var_57_bool == 0) goto Label_1143; // 0x475 JumpB
	var_0_bool = 1; // 0x476 TMovB
	
Label_1143:
	var_58_int = 0; // 0x477 PushI
	KillTimer(var_58_int); // 0x478 Func
	Stop(); // 0x47a Func
	return 0; // 0x47c Return
}


func_2166(var_142_cvector, var_143_cvector, var_144_cvector, var_145_float)
{
	var_146_cvector = CVector(0,0,0); var_147_float = 0; var_148_float = 0; var_149_float = 0; var_150_float = 0; var_151_float = 0; var_152_cvector = CVector(0,0,0); var_153_float = 0; var_154_float = 0; var_155_float = 0; var_156_float = 0; var_157_float = 0; // 0x876 PushV
	var_152_cvector = var_144_cvector - var_143_cvector; // 0x877 Sub2
	var_153_float = 250000; // 0x878 MovI
	var_158_float = GetByIndex(var_152_cvector, 1); // 0x879 PushE
	var_159_int = 1000; // 0x87a PushI
	var_160_float = var_158_float * var_159_int; // 0x87b Mult
	var_161_float = var_145_float * var_145_float; // 0x87c Mult
	var_154_float = var_160_float - var_161_float; // 0x87d Sub2
	var_155_float = var_152_cvector | var_152_cvector; // 0x87e Or2
	var_162_float = 0; var_163_float = 0; var_164_float = 0; var_165_float = 0; // 0x87f PushV
	var_163_float = var_153_float; // 0x880 Mov
	var_164_float = var_154_float; // 0x881 Mov
	var_165_float = var_155_float; // 0x882 Mov
	func_1958(var_162_float, var_163_float, var_164_float, var_165_float); // 0x883 NEW_2
	var_156_float = var_162_float; // 0x884 Mov
	var_170_int = 0; // 0x886 PushI
	var_171_bool = var_156_float < var_170_int; // 0x887 LT
	if(var_171_bool == 0) goto Label_2187; // 0x888 JumpB
	var_157_float = 1; // 0x889 MovI
	goto Label_2195; // 0x88a Jump
	
Label_2195:
	var_172_cvector = CVector(0.0, 500.0, 0.0); // 0x893 PushVec
	var_173_float = var_172_cvector * var_157_float; // 0x894 Mult
	var_174_float = var_173_float * var_157_float; // 0x895 Mult
	var_175_int = var_152_cvector + var_174_float; // 0x896 Add
	var_142_cvector = var_175_int / var_175_int; // 0x897 Div2
	return 12; // 0x898 Return
	
Label_2187:
	var_176_float = 0; var_177_float = 0; var_178_float = 0; var_179_float = 0; var_180_float = 0; // 0x88b PushV
	var_177_float = var_153_float; // 0x88c Mov
	var_178_float = var_154_float; // 0x88d Mov
	var_179_float = var_155_float; // 0x88e Mov
	var_180_float = sqrt(var_156_float); // 0x88f Sqrt2
	func_1965(var_177_float, var_178_float, var_179_float, var_180_float); // 0x890 NEW_2
	var_157_float = sqrt(var_176_float); // 0x892 Sqrt2
}


func_1657(var_32_bool)
{
	var_34_bool = 0; var_35_bool = 0; // 0x679 PushV
	IsDead(var_35_bool); // 0x67a ObjFunc
	var_32_bool = var_35_bool; // 0x67c Mov
	return 2; // 0x67d Return
}


func_1662(var_21_bool, var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); // 0x67e PushV
	var_27_bool = var_22_object == 0; // 0x67f NullEq
	if(var_27_bool == 0) goto Label_1667; // 0x680 JumpB
	var_21_bool = 0; // 0x681 MovB
	return 4; // 0x682 Return
	
Label_1667:
	var_28_bool = 0; // 0x683 PushV
	var_28_bool = 0; // 0x684 MovB
	var_29_string = "IsDead"; // 0x685 PushS
	var_30_int = 1; // 0x686 PushI
	var_31_bool = IsFuncExist(var_22_object, var_29_string, var_30_int); // 0x687 FuncExist
	if(var_31_bool == 0) goto Label_1679; // 0x688 JumpB
	var_32_bool = 0; var_33_object = Obj(); // 0x689 PushV
	var_33_object = var_22_object; // 0x68a Mov
	func_1657(var_33_object); // 0x68b NEW_2
	if(var_32_bool == 0) goto Label_1679; // 0x68d JumpB
	var_28_bool = 1; // 0x68e MovB
	
Label_1679:
	if(var_28_bool == 0) goto Label_1682; // 0x68f JumpB
	var_21_bool = 0; // 0x690 MovB
	return 4; // 0x691 Return
	
Label_1682:
	GetScene(var_25_object); // 0x692 Func
	var_36_bool = var_25_object == 0; // 0x694 NullEq
	if(var_36_bool == 0) goto Label_1688; // 0x695 JumpB
	var_21_bool = 0; // 0x696 MovB
	return 4; // 0x697 Return
	
Label_1688:
	GetScene(var_26_object); // 0x698 ObjFunc
	var_37_bool = var_25_object != var_26_object; // 0x69a Neq
	if(var_37_bool == 0) goto Label_1694; // 0x69b JumpB
	var_21_bool = 0; // 0x69c MovB
	return 4; // 0x69d Return
	
Label_1694:
	var_21_bool = 1; // 0x69e MovB
	return 4; // 0x69f Return
}


func_1153(var_0_bool)
{
	var_0_bool = 1; // 0x481 TMovB
	var_14_int = 0; // 0x482 PushI
	KillTimer(var_14_int); // 0x483 Func
	Stop(); // 0x485 Func
	return 0; // 0x487 Return
}


func_1169(var_323_bool, var_324_object)
{
	var_325_bool = 0; var_326_object = Obj(); // 0x492 PushV
	var_326_object = var_324_object; // 0x493 Mov
	func_1698(var_325_bool, var_326_object); // 0x494 NEW_2
	var_323_bool = var_325_bool; // 0x495 Mov
	return 0; // 0x497 Return
}


func_1176(var_341_string)
{
	var_341_string = "walk"; // 0x498 MovS
	return 0; // 0x499 Return
}


func_2201()
{
	return 0; // 0x89a Return
}


func_1178(var_342_string)
{
	var_342_string = "run"; // 0x49a MovS
	return 0; // 0x49b Return
}


func_2203(var_13_bool)
{
	var_13_bool = 0; // 0x89c MovB
	return 0; // 0x89d Return
}


func_1180(var_60_object)
{
	
Label_1181:
	var_61_bool = 0; var_62_object = Obj(); // 0x49d PushV
	var_62_object = var_60_object; // 0x49e Mov
	TaskCall(0); // 0x49f TaskCall
	func_0(var_54_object, var_60_object, var_61_bool, var_62_object); // 0x4a0 NEW_2
	TaskReturn(); // 0x4a1 TaskReturn
	var_695_int = 1; // 0x4a3 PushI
	Sleep(var_695_int); // 0x4a4 Func
	goto Label_1181; // 0x4a6 Jump
}


func_2206(var_52_object)
{
	var_53_object = Obj(); var_54_object = Obj(); // 0x89e PushV
	var_55_string = "b1q04_attack"; // 0x89f PushS
	var_56_int = 1; // 0x8a0 PushI
	SetVariable(var_55_string, var_56_int); // 0x8a1 Func
	GetScene(var_54_object); // 0x8a3 Func
	var_57_object = Obj(); // 0x8a5 PushV
	func_1935(var_57_object); // 0x8a6 NEW_2
	RemoveStationaryActor(var_57_object); // 0x8a8 ObjFunc
	var_60_object = Obj(); // 0x8aa PushV
	var_60_object = var_52_object; // 0x8ab Mov
	TaskCall(4); // 0x8ac TaskCall
	func_1180(var_60_object); // 0x8ad NEW_2
	TaskReturn(); // 0x8ae TaskReturn
	return 2; // 0x8b0 Return
}


func_1698(var_17_bool, var_18_object)
{
	var_19_int = 0; var_20_int = 0; // 0x6a2 PushV
	var_21_bool = 0; var_22_object = Obj(); // 0x6a3 PushV
	var_22_object = var_18_object; // 0x6a4 Mov
	func_1662(var_21_bool, var_22_object); // 0x6a5 NEW_2
	var_38_bool = var_21_bool == 0; // 0x6a7 Not
	if(var_38_bool == 0) goto Label_1707; // 0x6a8 JumpB
	var_17_bool = 0; // 0x6a9 MovB
	return 2; // 0x6aa Return
	
Label_1707:
	var_39_bool = 0; var_40_object = Obj(); var_41_string = ""; // 0x6ab PushV
	var_40_object = var_18_object; // 0x6ac Mov
	var_41_string = "noaccess"; // 0x6ad MovS
	func_1519(var_39_bool, var_40_object, var_41_string); // 0x6ae NEW_2
	var_48_bool = var_39_bool == 0; // 0x6b0 Not
	if(var_48_bool == 0) goto Label_1716; // 0x6b1 JumpB
	var_17_bool = 1; // 0x6b2 MovB
	return 2; // 0x6b3 Return
	
Label_1716:
	var_49_string = "noaccess"; // 0x6b4 PushS
	GetProperty(var_49_string, var_20_int); // 0x6b5 ObjFunc
	var_50_int = 0; // 0x6b7 PushI
	var_17_bool = var_20_int == var_50_int; // 0x6b8 Eq2
	return 2; // 0x6b9 Return
}


func_163(var_198_bool, var_199_object)
{
	var_206_bool = GlobalVars[0]; // 0xa4 PushGE
	var_206_bool = 0; // 0xa5 MovB
	GlobalVars[0] = var_206_bool; // 0xa6 PopGE
	var_207_object = Obj(); var_208_bool = 0; var_209_float = 0; // 0xa7 PushV
	var_207_object = var_199_object; // 0xa8 Mov
	var_208_bool = 1; // 0xa9 MovB
	var_209_float = 200.0; // 0xaa MovF
	func_240(var_203_bool, var_204_float, var_205_int, var_198_bool, var_199_object, var_207_object, var_208_bool, var_209_float); // 0xab NEW_2
	var_681_bool = 0; // 0xad PushV
	var_681_bool = 0; // 0xae MovB
	var_682_bool = GlobalVars[0]; // 0xaf PushGE
	if(var_682_bool == 0) goto Label_180; // 0xb0 JumpB
	var_683_int = var_3_int; // 0xb1 PushT
	if(var_683_int == 0) goto Label_180; // 0xb2 JumpB
	var_681_bool = 1; // 0xb3 MovB
	
Label_180:
	if(var_681_bool == 0) goto Label_187; // 0xb4 JumpB
	var_684_string = "all"; // 0xb5 PushS
	var_685_string = "attack_off"; // 0xb6 PushS
	PlayAnimation(var_684_string, var_685_string); // 0xb7 Func
	WaitForAnimEnd(); // 0xb9 Func
	
Label_187:
	var_686_bool = GlobalVars[0]; // 0xbb PushGE
	var_198_bool = var_686_bool; // 0xbc Mov
	return 0; // 0xbe Return
}


func_680(var_3_int)
{
	var_3_int = 1; // 0x2a8 TMovB
	return 0; // 0x2a9 Return
}


func_682(var_649_bool, var_650_float)
{
	var_651_float = 0; var_652_bool = 0; var_653_float = 0; var_654_bool = 0; // 0x2aa PushV
	rand(var_653_float); // 0x2ab Func
	var_655_bool = var_653_float < var_650_float; // 0x2ad LT
	if(var_655_bool == 0) goto Label_702; // 0x2ae JumpB
	
Label_687:
	IsAnimationPlaying(var_654_bool); // 0x2af Func
	var_656_bool = var_654_bool == 0; // 0x2b1 Not
	if(var_656_bool == 0) goto Label_692; // 0x2b2 JumpB
	goto Label_701; // 0x2b3 Jump
	
Label_701:
	goto Label_707; // 0x2bd Jump
	
Label_707:
	var_649_bool = 0; // 0x2c3 MovB
	return 4; // 0x2c4 Return
	
Label_692:
	var_657_bool = 0; // 0x2b4 PushV
	func_780(var_657_bool); // 0x2b5 NEW_2
	if(var_657_bool == 0) goto Label_698; // 0x2b7 JumpB
	var_649_bool = 1; // 0x2b8 MovB
	return 4; // 0x2b9 Return
	
Label_698:
	sync(); // 0x2ba Func
	goto Label_687; // 0x2bc Jump
	
Label_702:
	WaitForAnimEnd(); // 0x2be Func
	func_884(var_654_bool); // 0x2c1 NEW_2
}


func_1197(var_10_string)
{
	
Label_1198:
	var_11_int = 3; // 0x4ae PushI
	Sleep(var_11_int); // 0x4af Func
	var_12_string = ""; // 0x4b1 PushV
	var_12_string = var_10_string; // 0x4b2 Mov
	func_1241(var_12_string); // 0x4b3 NEW_2
	goto Label_1198; // 0x4b5 Jump
}


func_1722(var_108_bool, var_109_cvector)
{
	var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); var_112_bool = 0; var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_bool = 0; // 0x6ba PushV
	GetPosition(var_113_cvector); // 0x6bb Func
	var_114_cvector = var_109_cvector - var_113_cvector; // 0x6bd Sub2
	var_116_float = GetByIndex(var_114_cvector, 0); // 0x6be PushE
	var_117_float = GetByIndex(var_114_cvector, 2); // 0x6bf PushE
	Rotate(var_116_float, var_117_float, var_115_bool); // 0x6c0 Func
	var_108_bool = var_115_bool; // 0x6c2 Mov
	return 6; // 0x6c3 Return
}


func_191(var_534_float)
{
	var_534_float = 0.15; // 0xc0 MovF
	return 0; // 0xc1 Return
}


func_194(var_541_int)
{
	var_541_int = 0; // 0xc3 MovI
	return 0; // 0xc4 Return
}


func_1732(var_104_bool)
{
	var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); // 0x6c4 PushV
	GetPosition(var_107_cvector); // 0x6c5 ObjFunc
	var_108_bool = 0; var_109_cvector = CVector(0,0,0); // 0x6c7 PushV
	var_109_cvector = var_107_cvector; // 0x6c8 Mov
	func_1722(var_108_bool, var_109_cvector); // 0x6c9 NEW_2
	var_104_bool = var_108_bool; // 0x6ca Mov
	return 2; // 0x6cc Return
}


func_709(var_0_bool, var_429_bool, var_430_float)
{
	var_431_bool = 0; var_432_cvector = CVector(0,0,0); var_433_cvector = CVector(0,0,0); var_434_cvector = CVector(0,0,0); var_435_float = 0; var_436_bool = 0; var_437_cvector = CVector(0,0,0); var_438_cvector = CVector(0,0,0); var_439_cvector = CVector(0,0,0); var_440_float = 0; // 0x2c5 PushV
	
Label_710:
	IsAnimationPlaying(var_436_bool); // 0x2c6 Func
	var_441_bool = var_436_bool == 0; // 0x2c8 Not
	if(var_441_bool == 0) goto Label_715; // 0x2c9 JumpB
	goto Label_747; // 0x2ca Jump
	
Label_747:
	func_884(var_440_float); // 0x2ec NEW_2
	var_429_bool = 0; // 0x2ee MovB
	return 10; // 0x2ef Return
	
Label_715:
	var_442_bool = 0; // 0x2cb PushV
	func_780(var_442_bool); // 0x2cc NEW_2
	if(var_442_bool == 0) goto Label_721; // 0x2ce JumpB
	var_429_bool = 1; // 0x2cf MovB
	return 10; // 0x2d0 Return
	
Label_721:
	var_485_bool = 0; var_486_object = Obj(); // 0x2d1 PushV
	var_486_object = var_0_bool; // 0x2d2 MovT
	func_1698(var_485_bool, var_486_object); // 0x2d3 NEW_2
	var_487_bool = var_485_bool == 0; // 0x2d5 Not
	if(var_487_bool == 0) goto Label_729; // 0x2d6 JumpB
	var_429_bool = 0; // 0x2d7 MovB
	return 10; // 0x2d8 Return
	
Label_729:
	GetPFPosition(var_437_cvector); // 0x2d9 TObjFunc
	GetPFPosition(var_438_cvector); // 0x2db Func
	var_439_cvector = var_437_cvector - var_438_cvector; // 0x2dd Sub2
	var_440_float = var_439_cvector | var_439_cvector; // 0x2de Or2
	var_488_float = var_430_float * var_430_float; // 0x2df Mult
	var_489_bool = var_440_float < var_488_float; // 0x2e0 LT
	if(var_489_bool == 0) goto Label_744; // 0x2e1 JumpB
	var_490_bool = 0; var_491_float = 0; // 0x2e2 PushV
	var_491_float = var_430_float; // 0x2e3 Mov
	func_543(var_440_float, var_490_bool, var_491_float); // 0x2e4 NEW_2
	var_429_bool = 1; // 0x2e6 MovB
	return 10; // 0x2e7 Return
	
Label_744:
	sync(); // 0x2e8 Func
	goto Label_710; // 0x2ea Jump
}


func_197(var_602_int)
{
	var_602_int = 1; // 0xc5 MovI
	return 0; // 0xc6 Return
}


func_199(var_603_object, var_604_float)
{
	var_605_bool = 0; // 0xc8 PushV
	var_605_bool = 0; // 0xc9 MovB
	var_606_int = 0; // 0xca PushI
	var_607_bool = var_604_float > var_606_int; // 0xcb GT
	if(var_607_bool == 0) goto Label_211; // 0xcc JumpB
	var_608_bool = 0; var_609_object = Obj(); // 0xcd PushV
	var_609_object = var_603_object; // 0xce Mov
	func_1626(var_608_bool, var_609_object); // 0xcf NEW_2
	if(var_608_bool == 0) goto Label_211; // 0xd1 JumpB
	var_605_bool = 1; // 0xd2 MovB
	
Label_211:
	if(var_605_bool == 0) goto Label_218; // 0xd3 JumpB
	var_625_bool = GlobalVars[0]; // 0xd4 PushGE
	var_625_bool = 1; // 0xd5 MovB
	GlobalVars[0] = var_625_bool; // 0xd6 PopGE
	func_680(var_604_float); // 0xd8 NEW_2
	
Label_218:
	return 0; // 0xda Return
}


func_1741(var_27_object)
{
	var_28_bool = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; var_35_bool = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = ""; // 0x6cd PushV
	var_42_bool = var_27_object == 0; // 0x6ce NullEq
	if(var_42_bool == 0) goto Label_1745; // 0x6cf JumpB
	return 14; // 0x6d0 Return
	
Label_1745:
	IsDead(var_35_bool); // 0x6d1 Func
	var_43_bool = var_35_bool; // 0x6d3 Push
	if(var_43_bool == 0) goto Label_1750; // 0x6d4 JumpB
	return 14; // 0x6d5 Return
	
Label_1750:
	GetSecondaryAnimationType(var_36_int); // 0x6d6 Func
	var_44_int = 0; // 0x6d8 PushI
	var_45_bool = var_36_int < var_44_int; // 0x6d9 LT
	if(var_45_bool == 0) goto Label_1756; // 0x6da JumpB
	return 14; // 0x6db Return
	
Label_1756:
	GetPosition(var_37_cvector); // 0x6dc ObjFunc
	GetPosition(var_38_cvector); // 0x6de Func
	GetDirection(var_39_cvector); // 0x6e0 Func
	var_40_cvector = var_38_cvector - var_37_cvector; // 0x6e2 Sub2
	var_46_float = GetByIndex(var_40_cvector, 0); // 0x6e3 PushE
	var_47_float = GetByIndex(var_39_cvector, 0); // 0x6e4 PushE
	var_48_float = var_46_float * var_47_float; // 0x6e5 Mult
	var_49_float = GetByIndex(var_40_cvector, 2); // 0x6e6 PushE
	var_50_float = GetByIndex(var_39_cvector, 2); // 0x6e7 PushE
	var_51_float = var_49_float * var_50_float; // 0x6e8 Mult
	var_52_int = var_48_float + var_51_float; // 0x6e9 Add
	var_53_int = 0; // 0x6ea PushI
	var_54_bool = var_52_int >= var_53_int; // 0x6eb GE
	if(var_54_bool == 0) goto Label_1775; // 0x6ec JumpB
	var_41_string = "fhit"; // 0x6ed MovS
	goto Label_1776; // 0x6ee Jump
	
Label_1776:
	var_55_string = "hit_react"; // 0x6f0 PushS
	var_56_string = "1"; // 0x6f1 PushS
	var_57_int = var_41_string + var_56_string; // 0x6f2 Add
	var_58_string = "2"; // 0x6f3 PushS
	var_59_int = var_41_string + var_58_string; // 0x6f4 Add
	var_60_int = -10; // 0x6f5 PushI
	FadeSecondaryAnimation(var_55_string, var_57_int, var_59_int, var_60_int); // 0x6f6 Func
	return 14; // 0x6f8 Return
	
Label_1775:
	var_41_string = "bhit"; // 0x6ef MovS
}


func_1241(var_12_string)
{
	var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_float = 0; var_18_bool = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; var_23_float = 0; var_24_bool = 0; // 0x4d9 PushV
	WaitForAnimEnd(); // 0x4da Func
	var_25_bool = 0; // 0x4dc PushV
	func_1878(var_25_bool); // 0x4dd NEW_2
	var_28_bool = var_25_bool == 0; // 0x4df Not
	if(var_28_bool == 0) goto Label_1250; // 0x4e0 JumpB
	return 12; // 0x4e1 Return
	
Label_1250:
	var_29_string = "all"; // 0x4e2 PushS
	HasAnimation(var_19_bool, var_29_string, var_12_string); // 0x4e3 Func
	var_30_bool = var_19_bool == 0; // 0x4e5 Not
	if(var_30_bool == 0) goto Label_1256; // 0x4e6 JumpB
	return 12; // 0x4e7 Return
	
Label_1256:
	var_20_int = 0; // 0x4e8 MovI
	
Label_1257:
	var_31_bool = 0; // 0x4e9 PushV
	var_31_bool = 0; // 0x4ea MovB
	var_32_int = 5; // 0x4eb PushI
	var_33_bool = var_20_int < var_32_int; // 0x4ec LT
	if(var_33_bool == 0) goto Label_1267; // 0x4ed JumpB
	var_34_bool = 0; // 0x4ee PushV
	func_1878(var_34_bool); // 0x4ef NEW_2
	if(var_34_bool == 0) goto Label_1267; // 0x4f1 JumpB
	var_31_bool = 1; // 0x4f2 MovB
	
Label_1267:
	if(var_31_bool == 0) goto Label_1309; // 0x4f3 JumpB
	var_35_int = 3; // 0x4f4 PushI
	irand(var_21_int, var_35_int); // 0x4f5 Func
	var_36_int = 0; // 0x4f7 PushI
	var_37_bool = var_21_int == var_36_int; // 0x4f8 Eq
	if(var_37_bool == 0) goto Label_1283; // 0x4f9 JumpB
	var_38_string = "all"; // 0x4fa PushS
	PlayAnimation(var_38_string, var_12_string); // 0x4fb Func
	WaitForAnimEnd(var_22_bool); // 0x4fd Func
	var_39_bool = var_22_bool == 0; // 0x4ff Not
	if(var_39_bool == 0) goto Label_1282; // 0x500 JumpB
	goto Label_1309; // 0x501 Jump
	
Label_1309:
	return 12; // 0x51d Return
	
Label_1282:
	goto Label_1300; // 0x502 Jump
	
Label_1300:
	var_40_bool = 0; // 0x514 PushV
	func_1310(var_40_bool); // 0x515 NEW_2
	var_41_bool = var_40_bool == 0; // 0x517 Not
	if(var_41_bool == 0) goto Label_1306; // 0x518 JumpB
	goto Label_1309; // 0x519 Jump
	
Label_1306:
	var_42_int = 1; // 0x51a PushI
	var_20_int = var_20_int + var_42_int; // 0x51b Add2
	goto Label_1257; // 0x51c Jump
	
Label_1283:
	var_43_int = 1; // 0x503 PushI
	var_44_bool = var_21_int == var_43_int; // 0x504 Eq
	if(var_44_bool == 0) goto Label_1297; // 0x505 JumpB
	var_45_int = 4; // 0x506 PushI
	rand(var_23_float, var_45_int); // 0x507 Func
	var_46_int = 1; // 0x509 PushI
	var_47_int = var_23_float + var_46_int; // 0x50a Add
	Sleep(var_47_int, var_24_bool); // 0x50b Func
	var_48_bool = var_24_bool == 0; // 0x50d Not
	if(var_48_bool == 0) goto Label_1296; // 0x50e JumpB
	goto Label_1309; // 0x50f Jump
	
Label_1296:
	goto Label_1300; // 0x510 Jump
	
Label_1297:
	var_49_int = var_20_int; // 0x511 Push
	if(var_49_int == 0) goto Label_1300; // 0x512 JumpB
	goto Label_1309; // 0x513 Jump
}


func_240(var_0_bool, var_3_int, var_5_float, var_207_object, var_208_bool, var_209_float, var_278_bool, var_370_bool)
{
	var_210_float = 0; var_211_cvector = CVector(0,0,0); var_212_cvector = CVector(0,0,0); var_213_bool = 0; var_214_bool = 0; var_215_float = 0; var_216_cvector = CVector(0,0,0); var_217_float = 0; var_218_cvector = CVector(0,0,0); var_219_bool = 0; var_220_float = 0; var_221_float = 0; var_222_cvector = CVector(0,0,0); var_223_cvector = CVector(0,0,0); var_224_bool = 0; var_225_bool = 0; var_226_float = 0; var_227_cvector = CVector(0,0,0); var_228_float = 0; var_229_cvector = CVector(0,0,0); var_230_bool = 0; var_231_float = 0; // 0xf0 PushV
	func_469(var_229_cvector, var_230_bool, var_231_float); // 0xf2 NEW_2
	var_5_float = 0; // 0xf4 TMovI
	var_254_string = "@GetAttackDistance"; // 0xf5 PushS
	var_255_int = 1; // 0xf6 PushI
	var_256_bool = IsFuncExist(var_207_object, var_254_string, var_255_int); // 0xf7 FuncExist
	if(var_256_bool == 0) goto Label_254; // 0xf8 JumpB
	GetAttackDistance(var_221_float); // 0xf9 ObjFunc
	var_257_int = 50; // 0xfb PushI
	var_221_float = var_221_float + var_257_int; // 0xfc Add2
	goto Label_255; // 0xfd Jump
	
Label_255:
	var_258_int = 150; // 0xff PushI
	var_259_bool = var_221_float >= var_258_int; // 0x100 GE
	if(var_259_bool == 0) goto Label_259; // 0x101 JumpB
	var_221_float = 150; // 0x102 MovI
	
Label_259:
	var_3_int = 0; // 0x103 TMovB
	var_0_bool = var_207_object; // 0x104 TMov
	IsPlayerActor(var_0_bool, var_224_bool); // 0x105 Func
	var_260_bool = var_224_bool; // 0x107 Push
	if(var_260_bool == 0) goto Label_273; // 0x108 JumpB
	var_261_string = "attack"; // 0x109 PushS
	PlayGlobalMusic(var_261_string); // 0x10a Func
	var_262_object = Obj(); // 0x10c PushV
	func_1935(var_262_object); // 0x10d NEW_2
	SendPlayerEnemy(var_207_object, var_262_object); // 0x10f Func
	
Label_273:
	var_263_bool = var_208_bool; // 0x111 Push
	if(var_263_bool == 0) goto Label_277; // 0x112 JumpB
	var_225_bool = 0; // 0x113 MovB
	goto Label_278; // 0x114 Jump
	
Label_278:
	var_264_float = 300.0; // 0x116 PushF
	var_226_float = var_264_float + var_221_float; // 0x117 Add2
	
Label_280:
	var_265_bool = 0; // 0x118 PushV
	var_265_bool = 0; // 0x119 MovB
	var_266_bool = 0; var_267_object = Obj(); // 0x11a PushV
	var_267_object = var_0_bool; // 0x11b MovT
	func_1698(var_266_bool, var_267_object); // 0x11c NEW_2
	if(var_266_bool == 0) goto Label_290; // 0x11e JumpB
	var_268_bool = var_3_int == 0; // 0x11f Not
	if(var_268_bool == 0) goto Label_290; // 0x120 JumpB
	var_265_bool = 1; // 0x121 MovB
	
Label_290:
	if(var_265_bool == 0) goto Label_452; // 0x122 JumpB
	func_884(var_231_float); // 0x124 NEW_2
	GetPFPosition(var_222_cvector); // 0x126 TObjFunc
	GetPFPosition(var_223_cvector); // 0x128 Func
	var_227_cvector = var_222_cvector - var_223_cvector; // 0x12a Sub2
	var_228_float = var_227_cvector | var_227_cvector; // 0x12b Or2
	var_270_float = var_226_float * var_226_float; // 0x12c Mult
	var_271_bool = var_228_float >= var_270_float; // 0x12d GE
	if(var_271_bool == 0) goto Label_318; // 0x12e JumpB
	var_272_bool = 0; var_273_object = Obj(); var_274_float = 0; var_275_float = 0; var_276_bool = 0; var_277_bool = 0; // 0x12f PushV
	var_273_object = var_0_bool; // 0x130 MovT
	var_274_float = var_221_float; // 0x131 Mov
	var_275_float = 3000.0; // 0x132 MovF
	var_276_bool = 1; // 0x133 MovB
	var_277_bool = 0; // 0x134 MovB
	TaskCall(3); // 0x135 TaskCall
	func_924(var_280_bool, var_272_bool, var_273_object, var_274_float, var_275_float, var_276_bool, var_277_bool); // 0x136 NEW_2
	TaskReturn(); // 0x137 TaskReturn
	var_355_bool = var_278_bool == 0; // 0x139 Not
	if(var_355_bool == 0) goto Label_316; // 0x13a JumpB
	goto Label_452; // 0x13b Jump
	
Label_452:
	WaitForAnimEnd(); // 0x1c4 Func
	var_356_int = var_3_int; // 0x1c6 PushT
	if(var_356_int == 0) goto Label_457; // 0x1c7 JumpB
	return 22; // 0x1c8 Return
	
Label_457:
	var_357_string = "all"; // 0x1c9 PushS
	var_358_string = "attack_off"; // 0x1ca PushS
	PlayAnimation(var_357_string, var_358_string); // 0x1cb Func
	WaitForAnimEnd(); // 0x1cd Func
	var_359_bool = var_224_bool; // 0x1cf Push
	if(var_359_bool == 0) goto Label_468; // 0x1d0 JumpB
	var_360_float = 2.0; // 0x1d1 PushF
	Sleep(var_360_float); // 0x1d2 Func
	
Label_468:
	return 22; // 0x1d4 Return
	
Label_316:
	var_225_bool = 0; // 0x13c MovB
	goto Label_451; // 0x13d Jump
	
Label_451:
	goto Label_280; // 0x1c3 Jump
	
Label_318:
	var_361_float = var_209_float * var_209_float; // 0x13e Mult
	var_362_bool = var_228_float >= var_361_float; // 0x13f GE
	if(var_362_bool == 0) goto Label_443; // 0x140 JumpB
	GetPFPosition(var_229_cvector); // 0x141 TObjFunc
	CanReachByPF(var_230_bool, var_229_cvector); // 0x143 Func
	var_363_bool = var_230_bool == 0; // 0x145 Not
	if(var_363_bool == 0) goto Label_342; // 0x146 JumpB
	var_364_bool = 0; var_365_object = Obj(); var_366_float = 0; var_367_float = 0; var_368_bool = 0; var_369_bool = 0; // 0x147 PushV
	var_365_object = var_0_bool; // 0x148 MovT
	var_366_float = var_221_float; // 0x149 Mov
	var_367_float = 3000.0; // 0x14a MovF
	var_368_bool = 1; // 0x14b MovB
	var_369_bool = 0; // 0x14c MovB
	TaskCall(3); // 0x14d TaskCall
	func_924(var_372_bool, var_364_bool, var_365_object, var_366_float, var_367_float, var_368_bool, var_369_bool); // 0x14e NEW_2
	TaskReturn(); // 0x14f TaskReturn
	var_373_bool = var_370_bool == 0; // 0x151 Not
	if(var_373_bool == 0) goto Label_340; // 0x152 JumpB
	goto Label_452; // 0x153 Jump
	
Label_340:
	var_225_bool = 0; // 0x154 MovB
	goto Label_280; // 0x155 Jump
	
Label_342:
	var_374_bool = var_225_bool == 0; // 0x156 Not
	if(var_374_bool == 0) goto Label_367; // 0x157 JumpB
	var_375_object = Obj(); // 0x158 PushV
	var_375_object = var_0_bool; // 0x159 MovT
	func_1867(); // 0x15a NEW_2
	var_384_string = "all"; // 0x15c PushS
	var_385_string = "attack_on"; // 0x15d PushS
	PlayAnimation(var_384_string, var_385_string); // 0x15e Func
	WaitForAnimEnd(); // 0x160 Func
	func_884(var_231_float); // 0x163 NEW_2
	StopAsync(); // 0x165 Func
	var_225_bool = 1; // 0x167 MovB
	var_386_bool = 0; var_387_object = Obj(); // 0x168 PushV
	var_387_object = var_0_bool; // 0x169 MovT
	func_1698(var_386_bool, var_387_object); // 0x16a NEW_2
	var_388_bool = var_386_bool == 0; // 0x16c Not
	if(var_388_bool == 0) goto Label_367; // 0x16d JumpB
	goto Label_452; // 0x16e Jump
	
Label_367:
	rand(var_231_float); // 0x16f Func
	var_389_bool = 0; // 0x171 PushV
	var_389_bool = 1; // 0x172 MovB
	var_390_float = 0.2; // 0x173 PushF
	var_391_bool = var_231_float < var_390_float; // 0x174 LT
	if(var_391_bool == 0) goto Label_379; // 0x175 JumpB
	var_392_bool = 0; // 0x176 PushV
	func_841(var_389_bool, var_392_bool); // 0x177 NEW_2
	if(var_392_bool == 0) goto Label_379; // 0x179 JumpB
	var_389_bool = 0; // 0x17a MovB
	
Label_379:
	if(var_389_bool == 0) goto Label_396; // 0x17b JumpB
	Face(var_0_bool); // 0x17c Func
	func_889(); // 0x17f NEW_2
	var_427_string = "all"; // 0x181 PushS
	var_428_string = "attack_stay"; // 0x182 PushS
	PlayAnimation(var_427_string, var_428_string); // 0x183 Func
	var_429_bool = 0; var_430_float = 0; // 0x185 PushV
	var_430_float = var_209_float; // 0x186 Mov
	func_709(var_231_float, var_429_bool, var_430_float); // 0x187 NEW_2
	StopAsync(); // 0x189 Func
	goto Label_442; // 0x18b Jump
	
Label_442:
	goto Label_451; // 0x1ba Jump
	
Label_396:
	Face(var_0_bool); // 0x18c Func
	var_665_string = "all"; // 0x18e PushS
	var_666_string = "fjump"; // 0x18f PushS
	PlayAnimation(var_665_string, var_666_string); // 0x190 Func
	WaitForAnimEnd(); // 0x192 Func
	func_884(var_231_float); // 0x195 NEW_2
	var_667_cvector = CVector(0.0, 0.0, 0.0); // 0x197 PushVec
	SetSpeed(var_667_cvector); // 0x198 Func
	Stop(); // 0x19a Func
	StopAsync(); // 0x19c Func
	var_668_bool = 0; // 0x19e PushV
	func_841(var_231_float, var_668_bool); // 0x19f NEW_2
	var_669_bool = var_668_bool == 0; // 0x1a1 Not
	if(var_669_bool == 0) goto Label_442; // 0x1a2 JumpB
	var_670_bool = 0; var_671_object = Obj(); // 0x1a3 PushV
	var_671_object = var_0_bool; // 0x1a4 MovT
	func_1698(var_670_bool, var_671_object); // 0x1a5 NEW_2
	var_672_bool = var_670_bool == 0; // 0x1a7 Not
	if(var_672_bool == 0) goto Label_426; // 0x1a8 JumpB
	goto Label_452; // 0x1a9 Jump
	
Label_426:
	GetPFPosition(var_222_cvector); // 0x1aa TObjFunc
	GetPFPosition(var_223_cvector); // 0x1ac Func
	var_227_cvector = var_222_cvector - var_223_cvector; // 0x1ae Sub2
	var_228_float = var_227_cvector | var_227_cvector; // 0x1af Or2
	var_673_float = var_209_float * var_209_float; // 0x1b0 Mult
	var_674_bool = var_228_float < var_673_float; // 0x1b1 LT
	if(var_674_bool == 0) goto Label_442; // 0x1b2 JumpB
	var_675_bool = 0; var_676_float = 0; // 0x1b3 PushV
	var_676_float = var_209_float; // 0x1b4 Mov
	func_543(var_231_float, var_675_bool, var_676_float); // 0x1b5 NEW_2
	var_677_bool = var_675_bool == 0; // 0x1b7 Not
	if(var_677_bool == 0) goto Label_442; // 0x1b8 JumpB
	goto Label_452; // 0x1b9 Jump
	
Label_443:
	var_678_bool = 0; var_679_float = 0; // 0x1bb PushV
	var_679_float = var_209_float; // 0x1bc Mov
	func_543(var_231_float, var_678_bool, var_679_float); // 0x1bd NEW_2
	var_680_bool = var_678_bool == 0; // 0x1bf Not
	if(var_680_bool == 0) goto Label_450; // 0x1c0 JumpB
	goto Label_452; // 0x1c1 Jump
	
Label_450:
	var_225_bool = 1; // 0x1c2 MovB
	
Label_277:
	var_225_bool = 1; // 0x115 MovB
	
Label_254:
	var_221_float = var_209_float; // 0xfe Mov
}


func_752(var_0_bool, var_444_bool)
{
	var_445_cvector = CVector(0,0,0); var_446_cvector = CVector(0,0,0); var_447_cvector = CVector(0,0,0); var_448_float = 0; var_449_float = 0; var_450_cvector = CVector(0,0,0); var_451_cvector = CVector(0,0,0); var_452_cvector = CVector(0,0,0); var_453_float = 0; var_454_float = 0; // 0x2f0 PushV
	var_455_bool = 0; var_456_object = Obj(); // 0x2f1 PushV
	var_456_object = var_0_bool; // 0x2f2 MovT
	func_1698(var_455_bool, var_456_object); // 0x2f3 NEW_2
	var_457_bool = var_455_bool == 0; // 0x2f5 Not
	if(var_457_bool == 0) goto Label_761; // 0x2f6 JumpB
	var_444_bool = 0; // 0x2f7 MovB
	return 10; // 0x2f8 Return
	
Label_761:
	var_458_bool = 0; // 0x2f9 PushV
	func_841(var_454_float, var_458_bool); // 0x2fa NEW_2
	if(var_458_bool == 0) goto Label_778; // 0x2fc JumpB
	GetPFPosition(var_450_cvector); // 0x2fd TObjFunc
	GetPFPosition(var_451_cvector); // 0x2ff Func
	var_452_cvector = var_450_cvector - var_451_cvector; // 0x301 Sub2
	var_453_float = var_452_cvector | var_452_cvector; // 0x302 Or2
	GetAttackDistance(var_454_float); // 0x303 TObjFunc
	var_459_int = 50; // 0x305 PushI
	var_454_float = var_454_float + var_459_int; // 0x306 Add2
	var_460_float = var_454_float * var_454_float; // 0x307 Mult
	var_444_bool = var_453_float <= var_460_float; // 0x308 LE2
	return 10; // 0x309 Return
	
Label_778:
	var_444_bool = 0; // 0x30a MovB
	return 10; // 0x30b Return
}


func_1785(var_14_object, var_15_int, var_16_float)
{
	var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_int = 0; var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_int = 0; var_24_int = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_int = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); // 0x6f9 PushV
	var_35_bool = 0; // 0x6fa PushV
	var_35_bool = 0; // 0x6fb MovB
	var_36_bool = 0; // 0x6fc PushV
	var_36_bool = 0; // 0x6fd MovB
	var_37_object = var_14_object; // 0x6fe Push
	if(var_37_object == 0) goto Label_1796; // 0x6ff JumpB
	var_38_int = 4; // 0x700 PushI
	var_39_bool = var_15_int != var_38_int; // 0x701 Neq
	if(var_39_bool == 0) goto Label_1796; // 0x702 JumpB
	var_36_bool = 1; // 0x703 MovB
	
Label_1796:
	if(var_36_bool == 0) goto Label_1801; // 0x704 JumpB
	var_40_int = 5; // 0x705 PushI
	var_41_bool = var_15_int != var_40_int; // 0x706 Neq
	if(var_41_bool == 0) goto Label_1801; // 0x707 JumpB
	var_35_bool = 1; // 0x708 MovB
	
Label_1801:
	if(var_35_bool == 0) goto Label_1848; // 0x709 JumpB
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x70a PushV
	var_44_cvector = CVector(0,0,0); var_45_object = Obj(); // 0x70b PushV
	var_45_object = var_14_object; // 0x70c Mov
	func_1499(var_45_object); // 0x70d NEW_2
	var_43_cvector = var_44_cvector; // 0x70e Mov
	func_1941(var_42_cvector, var_43_cvector); // 0x710 NEW_2
	var_26_cvector = var_42_cvector; // 0x711 Mov
	CreateVectorVector(var_27_object); // 0x713 Func
	var_28_int = 1; // 0x715 MovI
	
Label_1814:
	var_55_string = "hit"; // 0x716 PushS
	var_56_int = var_55_string + var_28_int; // 0x717 Add
	GetGeometryLocator(var_56_int, var_29_bool, var_30_cvector, var_31_cvector); // 0x718 Func
	var_57_bool = var_29_bool == 0; // 0x71a Not
	if(var_57_bool == 0) goto Label_1821; // 0x71b JumpB
	goto Label_1830; // 0x71c Jump
	
Label_1830:
	size(var_32_int); // 0x726 ObjFunc
	var_58_int = var_32_int; // 0x728 Push
	if(var_58_int == 0) goto Label_1847; // 0x729 JumpB
	irand(var_33_int, var_32_int); // 0x72a Func
	get(var_34_cvector, var_33_int); // 0x72c ObjFunc
	var_59_object = Obj(); var_60_int = 0; var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x72e PushV
	var_59_object = var_14_object; // 0x72f Mov
	var_60_int = var_15_int; // 0x730 Mov
	var_61_float = var_16_float; // 0x731 Mov
	var_62_cvector = var_34_cvector; // 0x732 Mov
	var_63_cvector = -var_26_cvector; // 0x733 Neg2
	func_1853(var_61_float, var_62_cvector, var_63_cvector); // 0x734 NEW_2
	return 18; // 0x736 Return
	
Label_1847:
	var_27_object = 0; // 0x737 SetNull
	
Label_1848:
	var_104_object = Obj(); // 0x738 PushV
	var_104_object = var_14_object; // 0x739 Mov
	func_1741(var_104_object); // 0x73a NEW_2
	return 18; // 0x73c Return
	
Label_1821:
	var_105_int = var_31_cvector | var_26_cvector; // 0x71d Or
	var_106_float = 0.70711; // 0x71e PushF
	var_107_bool = var_105_int >= var_106_float; // 0x71f GE
	if(var_107_bool == 0) goto Label_1827; // 0x720 JumpB
	add(var_30_cvector); // 0x721 ObjFunc
	
Label_1827:
	var_108_int = 1; // 0x723 PushI
	var_28_int = var_28_int + var_108_int; // 0x724 Add2
	goto Label_1814; // 0x725 Jump
}


func_780(var_442_bool)
{
	var_443_bool = 0; // 0x30c PushV
	var_443_bool = 0; // 0x30d MovB
	var_444_bool = 0; // 0x30e PushV
	func_752(var_443_bool, var_444_bool); // 0x30f NEW_2
	if(var_444_bool == 0) goto Label_791; // 0x311 JumpB
	var_461_bool = 0; // 0x312 PushV
	func_796(var_442_bool, var_443_bool, var_461_bool); // 0x313 NEW_2
	if(var_461_bool == 0) goto Label_791; // 0x315 JumpB
	var_443_bool = 1; // 0x316 MovB
	
Label_791:
	if(var_443_bool == 0) goto Label_794; // 0x317 JumpB
	var_442_bool = 1; // 0x318 MovB
	return 0; // 0x319 Return
	
Label_794:
	var_442_bool = 0; // 0x31a MovB
	return 0; // 0x31b Return
}


func_796(var_0_bool, var_4_bool, var_461_bool)
{
	var_462_object = Obj(); var_463_bool = 0; var_464_float = 0; var_465_cvector = CVector(0,0,0); var_466_cvector = CVector(0,0,0); var_467_object = Obj(); var_468_bool = 0; var_469_float = 0; var_470_cvector = CVector(0,0,0); var_471_cvector = CVector(0,0,0); // 0x31c PushV
	GetScene(var_467_object); // 0x31d Func
	var_468_bool = 0; // 0x31f MovB
	
Label_800:
	var_472_cvector = CVector(0,0,0); var_473_object = Obj(); // 0x320 PushV
	var_473_object = var_0_bool; // 0x321 MovT
	func_1499(var_473_object); // 0x322 NEW_2
	var_478_int = -var_472_cvector; // 0x324 Neg
	FindDirLength(var_469_float, var_478_int, var_469_float); // 0x325 Func
	var_479_bool = var_469_float < var_4_bool; // 0x327 LT
	if(var_479_bool == 0) goto Label_810; // 0x328 JumpB
	goto Label_838; // 0x329 Jump
	
Label_838:
	var_461_bool = var_468_bool; // 0x346 Mov
	return 10; // 0x347 Return
	
Label_810:
	Face(var_0_bool); // 0x32a Func
	var_480_string = "all"; // 0x32c PushS
	var_481_string = "bjump"; // 0x32d PushS
	PlayAnimation(var_480_string, var_481_string); // 0x32e Func
	GetPFPosition(var_470_cvector); // 0x330 TObjFunc
	GetPFPosition(var_471_cvector); // 0x332 Func
	WaitForAnimEnd(); // 0x334 Func
	func_884(var_471_cvector); // 0x337 NEW_2
	StopAsync(); // 0x339 Func
	var_482_cvector = CVector(0.0, 0.0, 0.0); // 0x33b PushVec
	SetSpeed(var_482_cvector); // 0x33c Func
	var_468_bool = 1; // 0x33e MovB
	var_483_bool = 0; // 0x33f PushV
	func_752(var_471_cvector, var_483_bool); // 0x340 NEW_2
	var_484_bool = var_483_bool == 0; // 0x342 Not
	if(var_484_bool == 0) goto Label_837; // 0x343 JumpB
	goto Label_838; // 0x344 Jump
	
Label_837:
	goto Label_800; // 0x345 Jump
}


func_1310(var_40_bool)
{
	var_40_bool = 1; // 0x51e MovB
	return 0; // 0x51f Return
}


func_1312()
{
	StopAnimation(); // 0x520 Func
	StopGroup0(); // 0x522 Func
	return 0; // 0x524 Return
}


func_1317(var_12_object)
{
	var_13_string = "b1q04_dead"; // 0x526 PushS
	var_14_int = 1; // 0x527 PushI
	SetVariable(var_13_string, var_14_int); // 0x528 Func
	var_15_bool = 0; var_16_object = Obj(); // 0x52a PushV
	var_16_object = var_12_object; // 0x52b Mov
	func_1514(var_15_bool, var_16_object); // 0x52c NEW_2
	if(var_15_bool == 0) goto Label_1332; // 0x52e JumpB
	var_19_bool = 0; var_20_object = Obj(); var_21_float = 0; // 0x52f PushV
	var_20_object = var_12_object; // 0x530 Mov
	var_21_float = 0.03; // 0x531 MovF
	func_2001(var_19_bool, var_20_object, var_21_float); // 0x532 NEW_2
	
Label_1332:
	var_57_object = Obj(); // 0x534 PushV
	var_57_object = var_12_object; // 0x535 Mov
	func_1337(var_57_object); // 0x536 NEW_2
	return 0; // 0x538 Return
}


func_1337(var_57_object)
{
	EventDisable(0); // 0x53a EventDisable
	var_58_object = Obj(); // 0x53b PushV
	var_58_object = var_57_object; // 0x53c Mov
	func_1362(var_58_object); // 0x53d NEW_2
	var_138_int = 50; // 0x53f PushI
	var_139_int = 40; // 0x540 PushI
	SetRTEnvelope(var_138_int, var_139_int); // 0x541 Func
	EventEnable(0); // 0x543 EventEnable
	
Label_1348:
	Hold(); // 0x544 Func
	goto Label_1348; // 0x546 Jump
}


func_1853(var_16_object, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); // 0x73d PushV
	GetScene(var_23_object); // 0x73e Func
	var_25_string = "scripted"; // 0x740 PushS
	var_26_string = "blood_dir.xml"; // 0x741 PushS
	AddActorByType(var_24_object, var_25_string, var_23_object, var_19_cvector, var_20_cvector, var_26_string); // 0x742 Func
	var_27_object = Obj(); // 0x744 PushV
	var_27_object = var_16_object; // 0x745 Mov
	func_1741(var_27_object); // 0x746 NEW_2
	return 4; // 0x748 Return
}


func_841(var_0_bool, var_392_bool)
{
	var_393_bool = 0; var_394_bool = 0; // 0x349 PushV
	var_395_string = "IsAttacking"; // 0x34a PushS
	var_396_int = 1; // 0x34b PushI
	var_397_bool = IsFuncExist(var_0_bool, var_395_string, var_396_int); // 0x34c FuncExist
	if(var_397_bool == 0) goto Label_850; // 0x34d JumpB
	IsAttacking(var_394_bool); // 0x34e TObjFunc
	var_392_bool = var_394_bool; // 0x350 Mov
	return 2; // 0x351 Return
	
Label_850:
	var_392_bool = 0; // 0x352 MovB
	return 2; // 0x353 Return
}


func_1867()
{
	var_376_cvector = CVector(0,0,0); var_377_cvector = CVector(0,0,0); var_378_cvector = CVector(0,0,0); var_379_cvector = CVector(0,0,0); var_380_cvector = CVector(0,0,0); var_381_cvector = CVector(0,0,0); // 0x74b PushV
	GetPosition(var_379_cvector); // 0x74c ObjFunc
	GetPosition(var_380_cvector); // 0x74e Func
	var_381_cvector = var_379_cvector - var_380_cvector; // 0x750 Sub2
	var_382_float = GetByIndex(var_381_cvector, 0); // 0x751 PushE
	var_383_float = GetByIndex(var_381_cvector, 2); // 0x752 PushE
	RotateAsync(var_382_float, var_383_float); // 0x753 Func
	return 6; // 0x755 Return
}


func_1362(var_58_object)
{
	var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_string = ""; var_64_object = Obj(); var_65_bool = 0; var_66_bool = 0; var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_string = ""; var_74_object = Obj(); var_75_bool = 0; var_76_bool = 0; var_77_float = 0; var_78_cvector = CVector(0,0,0); // 0x552 PushV
	var_79_bool = var_58_object == 0; // 0x553 NullEq
	if(var_79_bool == 0) goto Label_1370; // 0x554 JumpB
	var_80_string = ""; // 0x555 PushV
	var_80_string = "fdie"; // 0x556 MovS
	func_1453(var_80_string); // 0x557 NEW_2
	goto Label_1452; // 0x559 Jump
	
Label_1452:
	return 20; // 0x5ac Return
	
Label_1370:
	GetPosition(var_69_cvector); // 0x55a ObjFunc
	GetPosition(var_70_cvector); // 0x55c Func
	GetDirection(var_71_cvector); // 0x55e Func
	var_72_cvector = var_70_cvector - var_69_cvector; // 0x560 Sub2
	var_112_float = GetByIndex(var_72_cvector, 0); // 0x561 PushE
	var_113_float = GetByIndex(var_71_cvector, 0); // 0x562 PushE
	var_114_float = var_112_float * var_113_float; // 0x563 Mult
	var_115_float = GetByIndex(var_72_cvector, 2); // 0x564 PushE
	var_116_float = GetByIndex(var_71_cvector, 2); // 0x565 PushE
	var_117_float = var_115_float * var_116_float; // 0x566 Mult
	var_118_int = var_114_float + var_117_float; // 0x567 Add
	var_119_int = 0; // 0x568 PushI
	var_120_bool = var_118_int >= var_119_int; // 0x569 GE
	if(var_120_bool == 0) goto Label_1389; // 0x56a JumpB
	var_73_string = "fdie"; // 0x56b MovS
	goto Label_1390; // 0x56c Jump
	
Label_1390:
	RemoveRTEnvelope(); // 0x56e Func
	SetDeathState(); // 0x570 Func
	Stop(); // 0x572 Func
	StopAsync(); // 0x574 Func
	var_74_object = var_58_object; // 0x576 Mov
	var_121_string = "GetScriptProperty"; // 0x577 PushS
	var_122_int = 2; // 0x578 PushI
	var_123_bool = IsFuncExist(var_58_object, var_121_string, var_122_int); // 0x579 FuncExist
	if(var_123_bool == 0) goto Label_1414; // 0x57a JumpB
	var_124_string = "Owner"; // 0x57b PushS
	HasScriptProperty(var_75_bool, var_124_string); // 0x57c ObjFunc
	var_125_bool = var_75_bool; // 0x57e Push
	if(var_125_bool == 0) goto Label_1414; // 0x57f JumpB
	var_126_string = "Owner"; // 0x580 PushS
	GetScriptProperty(var_74_object, var_126_string); // 0x581 ObjFunc
	var_127_bool = var_74_object == 0; // 0x583 NullEq
	if(var_127_bool == 0) goto Label_1414; // 0x584 JumpB
	var_74_object = var_58_object; // 0x585 Mov
	
Label_1414:
	var_128_string = "@GetEyesHeight"; // 0x586 PushS
	var_129_int = 1; // 0x587 PushI
	var_130_bool = IsFuncExist(var_74_object, var_128_string, var_129_int); // 0x588 FuncExist
	if(var_130_bool == 0) goto Label_1429; // 0x589 JumpB
	GetEyesHeight(var_77_float); // 0x58a ObjFunc
	var_78_cvector = CVector(0.0, 0.0, 0.0); // 0x58c MovV
	var_131_float = GetByIndex(var_78_cvector, 1); // 0x58d PushE
	var_131_float = var_77_float; // 0x58e Mov
	SetByIndex(var_78_cvector, 1) = var_131_float; // 0x58f PopE
	var_132_string = "head"; // 0x590 PushS
	LookAsync(var_58_object, var_132_string, var_78_cvector); // 0x591 Func
	var_76_bool = 1; // 0x593 MovB
	goto Label_1430; // 0x594 Jump
	
Label_1430:
	var_133_string = ""; // 0x596 PushV
	var_133_string = var_73_string; // 0x597 Mov
	func_1894(var_133_string); // 0x598 NEW_2
	var_134_string = "all"; // 0x59a PushS
	PlayAnimation(var_134_string, var_73_string); // 0x59b Func
	WaitForAnimEnd(); // 0x59d Func
	var_135_bool = var_76_bool; // 0x59f Push
	if(var_135_bool == 0) goto Label_1446; // 0x5a0 JumpB
	StopAsync(); // 0x5a1 Func
	var_136_string = "head"; // 0x5a3 PushS
	UnlookAsync(var_136_string); // 0x5a4 Func
	
Label_1446:
	var_137_string = "all"; // 0x5a6 PushS
	LockAnimationEnd(var_137_string, var_73_string); // 0x5a7 Func
	RemoveEnvelope(); // 0x5a9 Func
	var_74_object = 0; // 0x5ab SetNull
	
Label_1429:
	var_76_bool = 0; // 0x595 MovB
	
Label_1389:
	var_73_string = "bdie"; // 0x56d MovS
}


func_852(var_2_int, var_5_float)
{
	var_505_float = 0; var_506_int = 0; var_507_float = 0; var_508_int = 0; // 0x354 PushV
	var_509_bool = var_2_int == 0; // 0x355 Not
	if(var_509_bool == 0) goto Label_856; // 0x356 JumpB
	return 4; // 0x357 Return
	
Label_856:
	var_510_float = var_5_float; // 0x358 PushT
	if(var_510_float == 0) goto Label_864; // 0x359 JumpB
	var_511_int = -1; // 0x35a PushI
	var_5_float = var_5_float + var_511_int; // 0x35b Add2
	var_512_int = 0; // 0x35c PushI
	var_513_bool = var_5_float > var_512_int; // 0x35d GT
	if(var_513_bool == 0) goto Label_864; // 0x35e JumpB
	return 4; // 0x35f Return
	
Label_864:
	rand(var_507_float); // 0x360 Func
	var_514_float = 0; // 0x362 PushV
	func_898(var_514_float); // 0x363 NEW_2
	var_515_bool = var_507_float < var_514_float; // 0x365 LT
	if(var_515_bool == 0) goto Label_883; // 0x366 JumpB
	irand(var_508_int, var_507_float); // 0x367 Func
	var_516_int = 1; // 0x369 PushI
	var_508_int = var_508_int + var_516_int; // 0x36a Add2
	var_517_string = "attack"; // 0x36b PushS
	var_518_int = var_517_string + var_508_int; // 0x36c Add
	Speak(var_518_int); // 0x36d Func
	var_519_int = 0; // 0x36f PushV
	func_896(var_519_int); // 0x370 NEW_2
	var_5_float = var_519_int; // 0x371 TMov
	
Label_883:
	return 4; // 0x373 Return
}


func_1878(var_25_bool)
{
	var_26_bool = 0; var_27_bool = 0; // 0x756 PushV
	IsLoaded(var_27_bool); // 0x757 Func
	var_25_bool = var_27_bool; // 0x759 Mov
	return 2; // 0x75a Return
}


func_1883(var_289_object)
{
	var_290_float = 0; var_291_cvector = CVector(0,0,0); var_292_float = 0; var_293_cvector = CVector(0,0,0); // 0x75b PushV
	GetEyesHeight(var_292_float); // 0x75c ObjFunc
	var_293_cvector = CVector(0.0, 0.0, 0.0); // 0x75e MovV
	var_294_float = GetByIndex(var_293_cvector, 1); // 0x75f PushE
	var_294_float = var_292_float; // 0x760 Mov
	SetByIndex(var_293_cvector, 1) = var_294_float; // 0x761 PopE
	var_295_string = "head"; // 0x762 PushS
	LookAsync(var_289_object, var_295_string, var_293_cvector); // 0x763 Func
	return 4; // 0x765 Return
}


func_1894(var_81_string)
{
	var_82_bool = 0; var_83_int = 0; var_84_bool = 0; var_85_int = 0; var_86_bool = 0; var_87_float = 0; var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_bool = 0; var_91_int = 0; var_92_bool = 0; var_93_int = 0; var_94_bool = 0; var_95_float = 0; var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); // 0x766 PushV
	IsExisting3DSound(var_90_bool, var_81_string); // 0x767 Func
	var_98_bool = var_90_bool == 0; // 0x769 Not
	if(var_98_bool == 0) goto Label_1919; // 0x76a JumpB
	var_91_int = 0; // 0x76b MovI
	
Label_1900:
	var_99_int = 1; // 0x76c PushI
	var_100_int = var_91_int + var_99_int; // 0x76d Add
	var_101_int = var_81_string + var_100_int; // 0x76e Add
	IsExisting3DSound(var_92_bool, var_101_int); // 0x76f Func
	var_102_bool = var_92_bool == 0; // 0x771 Not
	if(var_102_bool == 0) goto Label_1908; // 0x772 JumpB
	goto Label_1911; // 0x773 Jump
	
Label_1911:
	var_103_bool = var_91_int == 0; // 0x777 Not
	if(var_103_bool == 0) goto Label_1914; // 0x778 JumpB
	return 16; // 0x779 Return
	
Label_1914:
	irand(var_93_int, var_91_int); // 0x77a Func
	var_104_int = 1; // 0x77c PushI
	var_105_int = var_93_int + var_104_int; // 0x77d Add
	var_81_string = var_81_string + var_105_int; // 0x77e Add2
	
Label_1919:
	Is3DSoundLoaded(var_94_bool, var_81_string); // 0x77f Func
	var_106_bool = var_94_bool; // 0x781 Push
	if(var_106_bool == 0) goto Label_1934; // 0x782 JumpB
	GetEyesHeight(var_95_float); // 0x783 Func
	GetDirection(var_96_cvector); // 0x785 Func
	var_107_int = 50; // 0x787 PushI
	var_97_cvector = var_96_cvector * var_107_int; // 0x788 Mult2
	var_108_float = GetByIndex(var_97_cvector, 1); // 0x789 PushE
	var_108_float = var_108_float + var_95_float; // 0x78a Add2
	SetByIndex(var_97_cvector, 1) = var_108_float; // 0x78b PopE
	PlayGlobalSound(var_81_string, var_97_cvector); // 0x78c Func
	
Label_1934:
	return 16; // 0x78e Return
	
Label_1908:
	var_109_int = 1; // 0x774 PushI
	var_91_int = var_91_int + var_109_int; // 0x775 Add2
	goto Label_1900; // 0x776 Jump
}


func_884(var_0_bool)
{
	var_269_object = Obj(); // 0x374 PushV
	var_269_object = var_0_bool; // 0x375 MovT
	func_2063(var_269_object); // 0x376 NEW_2
	return 0; // 0x378 Return
}


func_889()
{
	var_398_string = ""; // 0x379 PushV
	var_398_string = "attack_stay"; // 0x37a MovS
	func_1894(var_398_string); // 0x37b NEW_2
	return 0; // 0x37d Return
}


func_894(var_648_bool)
{
	var_648_bool = 1; // 0x37e MovB
	return 0; // 0x37f Return
}


func_896(var_519_int)
{
	var_519_int = 1; // 0x380 MovI
	return 0; // 0x381 Return
}


func_898(var_514_float)
{
	var_514_float = 0.5; // 0x382 MovF
	return 0; // 0x383 Return
}


func_1935(var_57_object)
{
	var_58_object = Obj(); var_59_object = Obj(); // 0x78f PushV
	self(var_59_object); // 0x790 Func
	var_57_object = var_59_object; // 0x792 Mov
	return 2; // 0x793 Return
}


func_1941(var_42_cvector, var_43_cvector)
{
	var_50_float = 0; var_51_float = 0; // 0x795 PushV
	var_52_int = var_43_cvector | var_43_cvector; // 0x796 Or
	var_51_float = sqrt(var_52_int); // 0x797 Sqrt2
	var_53_float = 0.0; // 0x798 PushF
	var_54_bool = var_51_float < var_53_float; // 0x799 LT
	if(var_54_bool == 0) goto Label_1949; // 0x79a JumpB
	var_42_cvector = CVector(0.0, 0.0, 0.0); // 0x79b MovV
	return 2; // 0x79c Return
	
Label_1949:
	var_42_cvector = var_43_cvector / var_43_cvector; // 0x79d Div2
	return 2; // 0x79e Return
}


func_924(var_2_int, var_272_bool, var_273_object, var_274_float, var_275_float, var_276_bool, var_277_bool)
{
	var_281_bool = 0; var_282_bool = 0; var_283_bool = 0; var_284_bool = 0; // 0x39c PushV
	var_285_object = Obj(); // 0x39d PushV
	var_285_object = var_273_object; // 0x39e Mov
	func_2063(var_285_object); // 0x39f NEW_2
	var_286_int = 1; // 0x3a1 PushI
	var_287_int = 5; // 0x3a2 PushI
	SetTimer(var_286_int, var_287_int); // 0x3a3 Func
	CanSee(var_283_bool, var_273_object); // 0x3a5 Func
	var_288_bool = var_283_bool; // 0x3a7 Push
	if(var_288_bool == 0) goto Label_943; // 0x3a8 JumpB
	var_2_int = 1; // 0x3a9 TMovB
	var_289_object = Obj(); // 0x3aa PushV
	var_289_object = var_273_object; // 0x3ab Mov
	func_1883(var_289_object); // 0x3ac NEW_2
	goto Label_944; // 0x3ae Jump
	
Label_944:
	var_296_bool = 0; var_297_object = Obj(); // 0x3b0 PushV
	var_297_object = var_273_object; // 0x3b1 Mov
	func_1514(var_296_bool, var_297_object); // 0x3b2 NEW_2
	if(var_296_bool == 0) goto Label_954; // 0x3b4 JumpB
	var_300_object = Obj(); // 0x3b5 PushV
	func_1935(var_300_object); // 0x3b6 NEW_2
	SendPlayerEnemy(var_273_object, var_300_object); // 0x3b8 Func
	
Label_954:
	var_301_bool = 0; var_302_object = Obj(); var_303_float = 0; var_304_float = 0; var_305_bool = 0; var_306_bool = 0; // 0x3ba PushV
	var_302_object = var_273_object; // 0x3bb Mov
	var_303_float = var_274_float; // 0x3bc Mov
	var_304_float = var_275_float; // 0x3bd Mov
	var_305_bool = var_276_bool; // 0x3be Mov
	var_306_bool = var_277_bool; // 0x3bf Mov
	func_1029(var_283_bool, var_284_bool, var_301_bool, var_302_object, var_303_float, var_304_float, var_305_bool, var_306_bool); // 0x3c0 NEW_2
	var_284_bool = var_301_bool; // 0x3c1 Mov
	var_352_int = var_2_int; // 0x3c3 PushT
	if(var_352_int == 0) goto Label_968; // 0x3c4 JumpB
	var_353_string = "head"; // 0x3c5 PushS
	UnlookAsync(var_353_string); // 0x3c6 Func
	
Label_968:
	var_354_int = 1; // 0x3c8 PushI
	KillTimer(var_354_int); // 0x3c9 Func
	var_272_bool = var_284_bool; // 0x3cb Mov
	return 4; // 0x3cc Return
	
Label_943:
	var_2_int = 0; // 0x3af TMovB
}


func_1951(var_575_float, var_576_float, var_577_float)
{
	var_580_bool = var_576_float < var_577_float; // 0x7a0 LT
	if(var_580_bool == 0) goto Label_1956; // 0x7a1 JumpB
	var_575_float = var_576_float; // 0x7a2 Mov
	goto Label_1957; // 0x7a3 Jump
	
Label_1957:
	return 0; // 0x7a5 Return
	
Label_1956:
	var_575_float = var_577_float; // 0x7a4 Mov
}


func_1958(var_162_float, var_163_float, var_164_float, var_165_float)
{
	var_166_float = var_164_float * var_164_float; // 0x7a7 Mult
	var_167_int = 4; // 0x7a8 PushI
	var_168_float = var_167_int * var_163_float; // 0x7a9 Mult
	var_169_float = var_168_float * var_165_float; // 0x7aa Mult
	var_162_float = var_166_float - var_169_float; // 0x7ab Sub2
	return 0; // 0x7ac Return
}


func_1453(var_80_string)
{
	RemoveRTEnvelope(); // 0x5ae Func
	SetDeathState(); // 0x5b0 Func
	Stop(); // 0x5b2 Func
	StopAsync(); // 0x5b4 Func
	StopSecondaryAnimation(); // 0x5b6 Func
	var_81_string = ""; // 0x5b8 PushV
	var_81_string = var_80_string; // 0x5b9 Mov
	func_1894(var_81_string); // 0x5ba NEW_2
	var_110_string = "all"; // 0x5bc PushS
	PlayAnimation(var_110_string, var_80_string); // 0x5bd Func
	WaitForAnimEnd(); // 0x5bf Func
	var_111_string = "all"; // 0x5c1 PushS
	LockAnimationEnd(var_111_string, var_80_string); // 0x5c2 Func
	RemoveEnvelope(); // 0x5c4 Func
	return 0; // 0x5c6 Return
}


func_1965(var_176_float, var_177_float, var_178_float, var_180_float)
{
	var_181_float = 0; var_182_float = 0; // 0x7ad PushV
	var_183_int = -var_178_float; // 0x7ae Neg
	var_184_int = var_183_int - var_180_float; // 0x7af Sub
	var_185_int = 2; // 0x7b0 PushI
	var_186_float = var_185_int * var_177_float; // 0x7b1 Mult
	var_182_float = var_184_int / var_184_int; // 0x7b2 Div2
	var_187_int = 0; // 0x7b3 PushI
	var_188_bool = var_182_float > var_187_int; // 0x7b4 GT
	if(var_188_bool == 0) goto Label_1976; // 0x7b5 JumpB
	var_176_float = var_182_float; // 0x7b6 Mov
	return 2; // 0x7b7 Return
	
Label_1976:
	var_189_int = -var_178_float; // 0x7b8 Neg
	var_190_int = var_189_int + var_180_float; // 0x7b9 Add
	var_191_int = 2; // 0x7ba PushI
	var_192_float = var_191_int * var_177_float; // 0x7bb Mult
	var_176_float = var_190_int / var_190_int; // 0x7bc Div2
	return 2; // 0x7bd Return
}


func_1982(var_48_float, var_49_float, var_50_float, var_51_float)
{
	var_52_bool = var_49_float < var_50_float; // 0x7bf LT
	if(var_52_bool == 0) goto Label_1987; // 0x7c0 JumpB
	var_48_float = var_50_float; // 0x7c1 Mov
	return 0; // 0x7c2 Return
	
Label_1987:
	var_53_bool = var_49_float > var_51_float; // 0x7c3 GT
	if(var_53_bool == 0) goto Label_1991; // 0x7c4 JumpB
	var_48_float = var_51_float; // 0x7c5 Mov
	return 0; // 0x7c6 Return
	
Label_1991:
	var_48_float = var_49_float; // 0x7c7 Mov
	return 0; // 0x7c8 Return
}


func_1993(var_76_bool, var_77_float, var_78_float, var_79_float)
{
	var_76_bool = 0; // 0x7ca MovB
	var_80_bool = var_77_float >= var_78_float; // 0x7cb GE
	if(var_80_bool == 0) goto Label_2000; // 0x7cc JumpB
	var_81_bool = var_77_float <= var_79_float; // 0x7cd LE
	if(var_81_bool == 0) goto Label_2000; // 0x7ce JumpB
	var_76_bool = 1; // 0x7cf MovB
	
Label_2000:
	return 0; // 0x7d0 Return
}


func_1485(var_565_string, var_566_int)
{
	var_567_int = 2; // 0x5ce PushI
	var_568_bool = var_566_int == var_567_int; // 0x5cf Eq
	if(var_568_bool == 0) goto Label_1492; // 0x5d0 JumpB
	var_565_string = "fire"; // 0x5d1 MovS
	return 0; // 0x5d2 Return
	
Label_1492:
	var_569_int = 1; // 0x5d4 PushI
	var_570_bool = var_566_int == var_569_int; // 0x5d5 Eq
	if(var_570_bool == 0) goto Label_1497; // 0x5d6 JumpB
	var_565_string = "bullet"; // 0x5d7 MovS
	return 0; // 0x5d8 Return
	
Label_1497:
	var_565_string = "phys"; // 0x5d9 MovS
	return 0; // 0x5da Return
}


func_2001(var_19_bool, var_20_object, var_21_float)
{
	var_22_bool = var_20_object == 0; // 0x7d2 Not
	if(var_22_bool == 0) goto Label_2006; // 0x7d3 JumpB
	var_19_bool = 0; // 0x7d4 MovB
	return 0; // 0x7d5 Return
	
Label_2006:
	var_23_int = 0; // 0x7d6 PushI
	var_24_bool = var_21_float > var_23_int; // 0x7d7 GT
	if(var_24_bool == 0) goto Label_2013; // 0x7d8 JumpB
	var_25_int = 8; // 0x7d9 PushI
	SendWorldWndMessage(var_25_int); // 0x7da Func
	goto Label_2022; // 0x7dc Jump
	
Label_2022:
	var_26_float = 0; // 0x7e6 PushV
	var_26_float = var_21_float; // 0x7e7 Mov
	func_2053(var_26_float); // 0x7e8 NEW_2
	var_30_bool = 0; var_31_object = Obj(); var_32_string = ""; var_33_float = 0; var_34_float = 0; var_35_float = 0; // 0x7ea PushV
	var_31_object = var_20_object; // 0x7eb Mov
	var_32_string = "reputation"; // 0x7ec MovS
	var_33_float = var_21_float; // 0x7ed Mov
	var_34_float = 0; // 0x7ee MovI
	var_35_float = 1; // 0x7ef MovI
	func_1531(var_30_bool, var_31_object, var_32_string, var_33_float, var_34_float, var_35_float); // 0x7f0 NEW_2
	var_19_bool = 1; // 0x7f2 MovB
	return 0; // 0x7f3 Return
	
Label_2013:
	var_54_int = 0; // 0x7dd PushI
	var_55_bool = var_21_float < var_54_int; // 0x7de LT
	if(var_55_bool == 0) goto Label_2020; // 0x7df JumpB
	var_56_int = 9; // 0x7e0 PushI
	SendWorldWndMessage(var_56_int); // 0x7e1 Func
	goto Label_2022; // 0x7e3 Jump
	
Label_2020:
	var_19_bool = 0; // 0x7e4 MovB
	return 0; // 0x7e5 Return
}


func_469(var_1_object, var_2_int, var_4_bool)
{
	var_232_bool = 0; var_233_bool = 0; var_234_cvector = CVector(0,0,0); var_235_bool = 0; var_236_bool = 0; var_237_cvector = CVector(0,0,0); // 0x1d5 PushV
	var_1_object = 0; // 0x1d6 TMovI
	
Label_471:
	var_238_string = "all"; // 0x1d7 PushS
	var_239_string = "attack_begin"; // 0x1d8 PushS
	var_240_int = 1; // 0x1d9 PushI
	var_241_int = var_1_object + var_240_int; // 0x1da Add
	var_242_int = var_239_string + var_241_int; // 0x1db Add
	HasAnimation(var_235_bool, var_238_string, var_242_int); // 0x1dc Func
	var_243_bool = var_235_bool == 0; // 0x1de Not
	if(var_243_bool == 0) goto Label_481; // 0x1df JumpB
	goto Label_484; // 0x1e0 Jump
	
Label_484:
	var_2_int = 0; // 0x1e4 TMovI
	
Label_485:
	var_244_string = "attack"; // 0x1e5 PushS
	var_245_int = 1; // 0x1e6 PushI
	var_246_int = var_2_int + var_245_int; // 0x1e7 Add
	var_247_int = var_244_string + var_246_int; // 0x1e8 Add
	IsExisting3DSound(var_236_bool, var_247_int); // 0x1e9 Func
	var_248_bool = var_236_bool == 0; // 0x1eb Not
	if(var_248_bool == 0) goto Label_494; // 0x1ec JumpB
	goto Label_497; // 0x1ed Jump
	
Label_497:
	var_249_string = "all"; // 0x1f1 PushS
	var_250_string = "bjump"; // 0x1f2 PushS
	GetAnimationOffset(var_237_cvector, var_249_string, var_250_string); // 0x1f3 Func
	var_251_float = GetByIndex(var_237_cvector, 2); // 0x1f5 PushE
	var_4_bool = -var_251_float; // 0x1f6 Neg2
	return 6; // 0x1f7 Return
	
Label_494:
	var_252_int = 1; // 0x1ee PushI
	var_2_int = var_2_int + var_252_int; // 0x1ef Add2
	goto Label_485; // 0x1f0 Jump
	
Label_481:
	var_253_int = 1; // 0x1e1 PushI
	var_1_object = var_1_object + var_253_int; // 0x1e2 Add2
	goto Label_471; // 0x1e3 Jump
}


func_1499(var_44_cvector)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x5db PushV
	GetPosition(var_48_cvector); // 0x5dc Func
	GetPosition(var_49_cvector); // 0x5de ObjFunc
	var_44_cvector = var_49_cvector - var_48_cvector; // 0x5e0 Sub2
	return 4; // 0x5e1 Return
}


func_987(var_2_int)
{
	var_11_int = 1; // 0x3db PushI
	KillTimer(var_11_int); // 0x3dc Func
	var_12_int = var_2_int; // 0x3de PushT
	if(var_12_int == 0) goto Label_996; // 0x3df JumpB
	var_2_int = 0; // 0x3e0 TMovB
	var_13_string = "head"; // 0x3e1 PushS
	UnlookAsync(var_13_string); // 0x3e2 Func
	
Label_996:
	func_1153(var_10_object); // 0x3e5 NEW_2
	return 0; // 0x3e7 Return
}


func_1506(var_68_float)
{
	var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); // 0x5e2 PushV
	GetPosition(var_73_cvector); // 0x5e3 Func
	GetPosition(var_74_cvector); // 0x5e5 ObjFunc
	var_75_cvector = var_74_cvector - var_73_cvector; // 0x5e7 Sub2
	var_68_float = var_75_cvector | var_75_cvector; // 0x5e8 Or2
	return 6; // 0x5e9 Return
}


func_1514(var_15_bool, var_16_object)
{
	var_17_bool = 0; var_18_bool = 0; // 0x5ea PushV
	IsPlayerActor(var_16_object, var_18_bool); // 0x5eb Func
	var_15_bool = var_18_bool; // 0x5ed Mov
	return 2; // 0x5ee Return
}


func_1519(var_38_bool, var_39_object, var_40_string)
{
	var_41_bool = 0; var_42_bool = 0; // 0x5ef PushV
	var_43_string = "HasProperty"; // 0x5f0 PushS
	var_44_int = 2; // 0x5f1 PushI
	var_45_bool = IsFuncExist(var_39_object, var_43_string, var_44_int); // 0x5f2 FuncExist
	var_46_bool = var_45_bool == 0; // 0x5f3 Not
	if(var_46_bool == 0) goto Label_1527; // 0x5f4 JumpB
	var_38_bool = 0; // 0x5f5 MovB
	return 2; // 0x5f6 Return
	
Label_1527:
	HasProperty(var_40_string, var_42_bool); // 0x5f7 ObjFunc
	var_38_bool = var_42_bool; // 0x5f9 Mov
	return 2; // 0x5fa Return
}


func_2036(var_593_float)
{
	var_594_object = Obj(); var_595_object = Obj(); // 0x7f4 PushV
	CreateFloatVector(var_595_object); // 0x7f5 Func
	add(var_593_float); // 0x7f7 ObjFunc
	var_596_int = 0; // 0x7f9 PushI
	var_597_bool = var_593_float < var_596_int; // 0x7fa LT
	if(var_597_bool == 0) goto Label_2048; // 0x7fb JumpB
	var_598_float = 0.7; // 0x7fc PushF
	var_599_int = 500; // 0x7fd PushI
	RumblePlay(var_598_float, var_599_int); // 0x7fe Func
	
Label_2048:
	var_600_int = 15; // 0x800 PushI
	SendWorldWndMessage(var_600_int, var_595_object); // 0x801 Func
	return 2; // 0x803 Return
}


func_504(var_0_bool, var_523_float, var_524_int)
{
	var_525_object = Obj(); var_526_float = 0; var_527_float = 0; var_528_object = Obj(); var_529_float = 0; var_530_float = 0; // 0x1f8 PushV
	var_531_float = 0.9; // 0x1f9 PushF
	var_532_float = var_523_float * var_531_float; // 0x1fa Mult
	GetVictim(var_532_float, var_528_object); // 0x1fb Func
	ReportAttack(var_0_bool); // 0x1fd Func
	var_533_bool = var_528_object == var_0_bool; // 0x1ff Eq
	if(var_533_bool == 0) goto Label_541; // 0x200 JumpB
	var_534_float = 0; var_535_object = Obj(); var_536_int = 0; // 0x201 PushV
	var_535_object = var_528_object; // 0x202 Mov
	var_536_int = var_524_int; // 0x203 Mov
	func_191(var_536_int); // 0x204 NEW_2
	var_529_float = var_534_float; // 0x205 Mov
	var_537_float = 0; var_538_object = Obj(); var_539_float = 0; var_540_int = 0; // 0x207 PushV
	var_538_object = var_528_object; // 0x208 Mov
	var_539_float = var_529_float; // 0x209 Mov
	var_541_int = 0; var_542_object = Obj(); var_543_int = 0; // 0x20a PushV
	var_542_object = var_528_object; // 0x20b Mov
	var_543_int = var_524_int; // 0x20c Mov
	func_194(var_543_int); // 0x20d NEW_2
	var_540_int = var_541_int; // 0x20e Mov
	func_1553(var_537_float, var_538_object, var_539_float, var_540_int); // 0x210 NEW_2
	var_530_float = var_537_float; // 0x211 Mov
	var_602_int = 0; // 0x213 PushV
	func_197(var_602_int); // 0x214 NEW_2
	ReportHit(var_0_bool, var_602_int, var_530_float, var_529_float); // 0x216 Func
	var_603_object = Obj(); var_604_float = 0; // 0x218 PushV
	var_603_object = var_528_object; // 0x219 Mov
	var_604_float = var_530_float; // 0x21a Mov
	func_199(var_603_object, var_604_float); // 0x21b NEW_2
	
Label_541:
	return 6; // 0x21d Return
}


func_1531(var_30_bool, var_31_object, var_32_string, var_33_float, var_34_float, var_35_float)
{
	var_36_float = 0; var_37_float = 0; // 0x5fb PushV
	var_38_bool = 0; var_39_object = Obj(); var_40_string = ""; // 0x5fc PushV
	var_39_object = var_31_object; // 0x5fd Mov
	var_40_string = var_32_string; // 0x5fe Mov
	func_1519(var_38_bool, var_39_object, var_40_string); // 0x5ff NEW_2
	var_47_bool = var_38_bool == 0; // 0x601 Not
	if(var_47_bool == 0) goto Label_1541; // 0x602 JumpB
	var_30_bool = 0; // 0x603 MovB
	return 2; // 0x604 Return
	
Label_1541:
	GetProperty(var_32_string, var_37_float); // 0x605 ObjFunc
	var_48_float = 0; var_49_float = 0; var_50_float = 0; var_51_float = 0; // 0x607 PushV
	var_49_float = var_37_float + var_33_float; // 0x608 Add2
	var_50_float = var_34_float; // 0x609 Mov
	var_51_float = var_35_float; // 0x60a Mov
	func_1982(var_48_float, var_49_float, var_50_float, var_51_float); // 0x60b NEW_2
	SetProperty(var_32_string, var_48_float); // 0x60d ObjFunc
	var_30_bool = 1; // 0x60f MovB
	return 2; // 0x610 Return
}


