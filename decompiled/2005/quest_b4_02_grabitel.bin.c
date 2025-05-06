task_1_event_17(var_0_bool, var_1_object, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_11_object = Obj(); // 0x91 PushV
	var_11_object = var_10_bool; // 0x92 Mov
	func_2362(); // 0x93 NEW_2
	return 0; // 0x95 Return
}


task_1_event_30(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); // 0x97 PushV
	var_14_object = var_10_bool; // 0x98 Mov
	var_15_object = var_11_object; // 0x99 Mov
	func_2364(var_15_object); // 0x9a NEW_2
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
	func_2362(); // 0xde NEW_2
	return 0; // 0xe0 Return
}


task_2_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_object, var_8_object, var_9_bool, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); // 0xe2 PushV
	var_14_object = var_10_bool; // 0xe3 Mov
	var_15_object = var_11_object; // 0xe4 Mov
	func_2364(var_15_object); // 0xe5 NEW_2
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
	func_2362(); // 0x387 NEW_2
	return 0; // 0x389 Return
}


task_3_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); // 0x38b PushV
	var_14_object = var_10_object; // 0x38c Mov
	var_15_object = var_11_object; // 0x38d Mov
	func_2364(var_15_object); // 0x38e NEW_2
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
	func_2077(var_13_object); // 0x3d3 NEW_2
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
	func_1888(var_14_object); // 0x3f4 NEW_2
	
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
	func_2166(); // 0x48e NEW_2
	return 0; // 0x490 Return
}


	task_4_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_14_object)
	{
	var_15_bool = 0; var_16_object = Obj(); // 0x4a5 PushV
	var_16_object = var_14_object; // 0x4a6 Mov
	func_2172(var_15_bool, var_16_object); // 0x4a7 NEW_2
	if(var_15_bool == 0) goto Label_1201; // 0x4a9 JumpB
	func_1303(); // 0x4ab NEW_2
	var_51_object = Obj(); // 0x4ad PushV
	var_51_object = var_14_object; // 0x4ae Mov
	func_2179(var_51_object); // 0x4af NEW_2
	
Label_1201:
	return 0; // 0x4b1 Return
	}


task_4_event_1(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0; // 0x4b2 PushV
	IsPlayerActor(var_10_object, var_12_bool); // 0x4b3 Func
	var_13_bool = var_12_bool; // 0x4b5 Push
	if(var_13_bool == 0) goto Label_1211; // 0x4b6 JumpB
	var_14_object = Obj(); // 0x4b7 PushV
	var_14_object = var_10_object; // 0x4b8 Mov
	func_1188(); // 0x4b9 NEW_2
	
Label_1211:
	return 2; // 0x4bb Return
}


task_4_event_3(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0; // 0x4bc PushV
	IsPlayerActor(var_10_object, var_12_bool); // 0x4bd Func
	var_13_bool = var_12_bool; // 0x4bf Push
	if(var_13_bool == 0) goto Label_1221; // 0x4c0 JumpB
	var_14_object = Obj(); // 0x4c1 PushV
	var_14_object = var_10_object; // 0x4c2 Mov
	func_1188(); // 0x4c3 NEW_2
	
Label_1221:
	return 2; // 0x4c5 Return
}


task_6_event_0(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0; // 0x54d PushV
	IsOverrideActive(var_12_bool); // 0x54e Func
	var_13_bool = var_12_bool == 0; // 0x550 Not
	if(var_13_bool == 0) goto Label_1366; // 0x551 JumpB
	var_14_object = Obj(); // 0x552 PushV
	var_14_object = var_10_object; // 0x553 Mov
	func_2191(var_14_object); // 0x554 NEW_2
	
Label_1366:
	return 2; // 0x556 Return
}


task_6_event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	return 0; // 0x5cd Return
}


task_6_event_16(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_string)
{
	return 0; // 0x5cf Return
}


task_6_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	return 0; // 0x5d1 Return
}


event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0; // 0x858 PushV
	var_14_object = var_10_object; // 0x859 Mov
	var_15_int = var_11_int; // 0x85a Mov
	var_16_float = var_12_float; // 0x85b Mov
	func_1790(var_14_object, var_15_int, var_16_float); // 0x85c NEW_2
	return 0; // 0x85e Return
}


event_43(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float, var_14_cvector, var_15_cvector)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); // 0x860 PushV
	var_16_object = var_10_object; // 0x861 Mov
	var_17_int = var_11_int; // 0x862 Mov
	var_18_float = var_12_float; // 0x863 Mov
	var_19_cvector = var_14_cvector; // 0x864 Mov
	var_20_cvector = var_15_cvector; // 0x865 Mov
	func_1858(var_18_float, var_19_cvector, var_20_cvector); // 0x866 NEW_2
	return 0; // 0x868 Return
}


event_16(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_string)
{
	var_12_float = 0; var_13_float = 0; // 0x869 PushV
	var_14_string = "health"; // 0x86a PushS
	var_15_bool = var_11_string == var_14_string; // 0x86b Eq
	if(var_15_bool == 0) goto Label_2165; // 0x86c JumpB
	var_16_string = "health"; // 0x86d PushS
	GetProperty(var_16_string, var_13_float); // 0x86e Func
	var_17_int = 0; // 0x870 PushI
	var_18_bool = var_13_float <= var_17_int; // 0x871 LE
	if(var_18_bool == 0) goto Label_2165; // 0x872 JumpB
	SignalDeath(var_10_object); // 0x873 Func
	
Label_2165:
	return 2; // 0x875 Return
}


event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_object = Obj(); // 0x877 PushV
	var_11_object = var_10_object; // 0x878 Mov
	func_2127(var_11_object); // 0x879 NEW_2
	return 0; // 0x87b Return
}


main(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	
Label_1180:
	var_10_int = 3; // 0x49c PushI
	Sleep(var_10_int); // 0x49d Func
	func_1222(); // 0x4a0 NEW_2
	goto Label_1180; // 0x4a2 Jump
}


func_0(var_59_bool, var_60_object, var_82_bool, var_683_object)
{
	var_61_float = 0; var_62_float = 0; // 0x0 PushV
	var_63_bool = 0; var_64_object = Obj(); // 0x1 PushV
	var_64_object = var_60_object; // 0x2 Mov
	func_1703(var_63_bool, var_64_object); // 0x3 NEW_2
	var_65_bool = var_63_bool == 0; // 0x5 Not
	if(var_65_bool == 0) goto Label_9; // 0x6 JumpB
	var_59_bool = 0; // 0x7 MovB
	return 2; // 0x8 Return
	
Label_9:
	var_66_float = 0; var_67_object = Obj(); // 0x9 PushV
	var_67_object = var_60_object; // 0xa Mov
	func_1511(var_67_object); // 0xb NEW_2
	var_62_float = var_66_float; // 0xc Mov
	var_74_bool = 0; var_75_float = 0; var_76_float = 0; var_77_float = 0; // 0xe PushV
	var_75_float = var_62_float; // 0xf Mov
	var_76_float = 250000.0; // 0x10 MovF
	var_77_float = 3240000.0; // 0x11 MovF
	func_2009(var_74_bool, var_75_float, var_76_float, var_77_float); // 0x12 NEW_2
	if(var_74_bool == 0) goto Label_29; // 0x14 JumpB
	var_80_bool = 0; var_81_object = Obj(); // 0x15 PushV
	var_81_object = var_60_object; // 0x16 Mov
	TaskCall(1); // 0x17 TaskCall
	func_37(var_62_float, var_82_bool, var_80_bool, var_81_object); // 0x18 NEW_2
	TaskReturn(); // 0x19 TaskReturn
	var_59_bool = var_82_bool; // 0x1a Mov
	return 2; // 0x1c Return
	
Label_29:
	var_681_bool = 0; var_682_object = Obj(); // 0x1d PushV
	var_682_object = var_60_object; // 0x1e Mov
	TaskCall(2); // 0x1f TaskCall
	func_163(var_681_bool, var_682_object); // 0x20 NEW_2
	TaskReturn(); // 0x21 TaskReturn
	var_59_bool = var_683_object; // 0x22 Mov
	return 2; // 0x24 Return
}


func_1536(var_90_bool, var_91_object, var_92_string, var_93_float, var_94_float, var_95_float)
{
	var_96_float = 0; var_97_float = 0; // 0x600 PushV
	var_98_bool = 0; var_99_object = Obj(); var_100_string = ""; // 0x601 PushV
	var_99_object = var_91_object; // 0x602 Mov
	var_100_string = var_92_string; // 0x603 Mov
	func_1524(var_98_bool, var_99_object, var_100_string); // 0x604 NEW_2
	var_107_bool = var_98_bool == 0; // 0x606 Not
	if(var_107_bool == 0) goto Label_1546; // 0x607 JumpB
	var_90_bool = 0; // 0x608 MovB
	return 2; // 0x609 Return
	
Label_1546:
	GetProperty(var_92_string, var_97_float); // 0x60a ObjFunc
	var_108_float = 0; var_109_float = 0; var_110_float = 0; var_111_float = 0; // 0x60c PushV
	var_109_float = var_97_float + var_93_float; // 0x60d Add2
	var_110_float = var_94_float; // 0x60e Mov
	var_111_float = var_95_float; // 0x60f Mov
	func_1998(var_108_float, var_109_float, var_110_float, var_111_float); // 0x610 NEW_2
	SetProperty(var_92_string, var_108_float); // 0x612 ObjFunc
	var_90_bool = 1; // 0x614 MovB
	return 2; // 0x615 Return
}


func_1029(var_0_bool, var_1_object, var_299_bool, var_300_object, var_301_float, var_302_float, var_303_bool, var_304_bool)
{
	var_305_bool = 0; var_306_bool = 0; var_307_object = Obj(); var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0); var_310_cvector = CVector(0,0,0); var_311_float = 0; var_312_object = Obj(); var_313_bool = 0; var_314_bool = 0; var_315_object = Obj(); var_316_cvector = CVector(0,0,0); var_317_cvector = CVector(0,0,0); var_318_cvector = CVector(0,0,0); var_319_float = 0; var_320_object = Obj(); // 0x405 PushV
	var_0_bool = 0; // 0x406 TMovB
	var_1_object = var_300_object; // 0x407 TMov
	var_314_bool = var_304_bool; // 0x408 Mov
	
Label_1033:
	var_321_bool = 0; var_322_object = Obj(); // 0x409 PushV
	var_322_object = var_300_object; // 0x40a Mov
	func_1169(var_321_bool, var_322_object); // 0x40b NEW_2
	var_325_bool = var_321_bool == 0; // 0x40d Not
	if(var_325_bool == 0) goto Label_1041; // 0x40e JumpB
	var_299_bool = 0; // 0x40f MovB
	return 16; // 0x410 Return
	
Label_1041:
	GetPosition(var_316_cvector); // 0x411 ObjFunc
	GetPosition(var_317_cvector); // 0x413 Func
	var_318_cvector = var_316_cvector - var_317_cvector; // 0x415 Sub2
	var_319_float = var_318_cvector | var_318_cvector; // 0x416 Or2
	var_326_bool = 0; // 0x417 PushV
	var_326_bool = 0; // 0x418 MovB
	var_327_int = 0; // 0x419 PushI
	var_328_bool = var_302_float > var_327_int; // 0x41a GT
	if(var_328_bool == 0) goto Label_1056; // 0x41b JumpB
	var_329_float = var_302_float * var_302_float; // 0x41c Mult
	var_330_bool = var_319_float > var_329_float; // 0x41d GT
	if(var_330_bool == 0) goto Label_1056; // 0x41e JumpB
	var_326_bool = 1; // 0x41f MovB
	
Label_1056:
	if(var_326_bool == 0) goto Label_1061; // 0x420 JumpB
	Stop(); // 0x421 Func
	var_299_bool = 0; // 0x423 MovB
	return 16; // 0x424 Return
	
Label_1061:
	var_331_float = var_301_float * var_301_float; // 0x425 Mult
	var_332_bool = var_319_float > var_331_float; // 0x426 GT
	if(var_332_bool == 0) goto Label_1123; // 0x427 JumpB
	GetPFPosition(var_316_cvector); // 0x428 ObjFunc
	FindPathTo(var_320_object, var_316_cvector); // 0x42a Func
	var_333_bool = var_320_object != 0; // 0x42c NullNeq
	if(var_333_bool == 0) goto Label_1072; // 0x42d JumpB
	var_315_object = var_320_object; // 0x42e Mov
	var_320_object = 0; // 0x42f SetNull
	
Label_1072:
	var_334_bool = var_315_object != 0; // 0x430 NullNeq
	if(var_334_bool == 0) goto Label_1105; // 0x431 JumpB
	var_335_bool = var_314_bool; // 0x432 Push
	if(var_335_bool == 0) goto Label_1082; // 0x433 JumpB
	var_314_bool = 0; // 0x434 MovB
	RotatePath(var_315_object, var_313_bool); // 0x435 Func
	var_336_bool = var_313_bool == 0; // 0x437 Not
	if(var_336_bool == 0) goto Label_1082; // 0x438 JumpB
	goto Label_1129; // 0x439 Jump
	
Label_1129:
	var_299_bool = !var_0_bool; // 0x469 Not2
	return 16; // 0x46a Return
	
Label_1082:
	var_337_int = 0; // 0x43a PushI
	var_338_float = 0.3; // 0x43b PushF
	SetTimer(var_337_int, var_338_float); // 0x43c Func
	var_339_string = ""; // 0x43e PushV
	func_1176(var_339_string); // 0x43f NEW_2
	var_340_string = ""; // 0x441 PushV
	func_1178(var_340_string); // 0x442 NEW_2
	FollowPath(var_315_object, var_303_bool, var_313_bool, var_339_string, var_340_string); // 0x444 Func
	var_341_bool = var_313_bool == 0; // 0x446 Not
	if(var_341_bool == 0) goto Label_1103; // 0x447 JumpB
	var_342_bool = var_0_bool; // 0x448 PushT
	if(var_342_bool == 0) goto Label_1101; // 0x449 JumpB
	var_315_object = 0; // 0x44a SetNull
	goto Label_1129; // 0x44b Jump
	
Label_1101:
	goto Label_1128; // 0x44d Jump
	
Label_1128:
	goto Label_1033; // 0x468 Jump
	
Label_1103:
	var_315_object = 0; // 0x44f SetNull
	goto Label_1121; // 0x450 Jump
	
Label_1121:
	var_320_object = 0; // 0x461 SetNull
	goto Label_1127; // 0x462 Jump
	
Label_1127:
	var_315_object = 0; // 0x467 SetNull
	
Label_1105:
	var_343_int = 0; // 0x451 PushI
	KillTimer(var_343_int); // 0x452 Func
	var_344_float = 0.5; // 0x454 PushF
	Sleep(var_344_float, var_313_bool); // 0x455 Func
	var_345_bool = var_313_bool == 0; // 0x457 Not
	if(var_345_bool == 0) goto Label_1117; // 0x458 JumpB
	var_346_bool = var_0_bool; // 0x459 PushT
	if(var_346_bool == 0) goto Label_1117; // 0x45a JumpB
	var_315_object = 0; // 0x45b SetNull
	goto Label_1129; // 0x45c Jump
	
Label_1117:
	var_347_int = 0; // 0x45d PushI
	var_348_float = 0.3; // 0x45e PushF
	SetTimer(var_347_int, var_348_float); // 0x45f Func
	
Label_1123:
	var_349_int = 0; // 0x463 PushI
	KillTimer(var_349_int); // 0x464 Func
	goto Label_1129; // 0x466 Jump
}


func_2057(var_591_float)
{
	var_592_object = Obj(); var_593_object = Obj(); // 0x809 PushV
	CreateFloatVector(var_593_object); // 0x80a Func
	add(var_591_float); // 0x80c ObjFunc
	var_594_int = 15; // 0x80e PushI
	SendWorldWndMessage(var_594_int, var_593_object); // 0x80f Func
	return 2; // 0x811 Return
}


func_2067(var_86_float)
{
	var_87_object = Obj(); var_88_object = Obj(); // 0x813 PushV
	CreateFloatVector(var_88_object); // 0x814 Func
	add(var_86_float); // 0x816 ObjFunc
	var_89_int = 16; // 0x818 PushI
	SendWorldWndMessage(var_89_int, var_88_object); // 0x819 Func
	return 2; // 0x81b Return
}


func_1558(var_535_float, var_536_object, var_537_float, var_538_int)
{
	var_542_int = 0; var_543_string = ""; var_544_int = 0; var_545_float = 0; var_546_float = 0; var_547_float = 0; var_548_int = 0; var_549_string = ""; var_550_int = 0; var_551_float = 0; var_552_float = 0; var_553_float = 0; // 0x616 PushV
	var_554_bool = 0; var_555_object = Obj(); var_556_string = ""; // 0x617 PushV
	var_555_object = var_536_object; // 0x618 Mov
	var_556_string = "health"; // 0x619 MovS
	func_1524(var_554_bool, var_555_object, var_556_string); // 0x61a NEW_2
	var_557_bool = var_554_bool == 0; // 0x61c Not
	if(var_557_bool == 0) goto Label_1568; // 0x61d JumpB
	var_535_float = 0.0; // 0x61e MovF
	return 12; // 0x61f Return
	
Label_1568:
	var_558_bool = 0; var_559_object = Obj(); var_560_string = ""; // 0x620 PushV
	var_559_object = var_536_object; // 0x621 Mov
	var_560_string = "armor"; // 0x622 MovS
	func_1524(var_558_bool, var_559_object, var_560_string); // 0x623 NEW_2
	var_561_bool = var_558_bool == 0; // 0x625 Not
	if(var_561_bool == 0) goto Label_1577; // 0x626 JumpB
	var_548_int = 0; // 0x627 MovI
	goto Label_1580; // 0x628 Jump
	
Label_1580:
	var_562_string = "armor_"; // 0x62c PushS
	var_563_string = ""; var_564_int = 0; // 0x62d PushV
	var_564_int = var_538_int; // 0x62e Mov
	func_1490(var_563_string, var_564_int); // 0x62f NEW_2
	var_549_string = var_562_string + var_563_string; // 0x631 Add2
	var_569_bool = 0; var_570_object = Obj(); var_571_string = ""; // 0x632 PushV
	var_570_object = var_536_object; // 0x633 Mov
	var_571_string = var_549_string; // 0x634 Mov
	func_1524(var_569_bool, var_570_object, var_571_string); // 0x635 NEW_2
	var_572_bool = var_569_bool == 0; // 0x637 Not
	if(var_572_bool == 0) goto Label_1595; // 0x638 JumpB
	var_550_int = 0; // 0x639 MovI
	goto Label_1597; // 0x63a Jump
	
Label_1597:
	var_573_float = 0; var_574_float = 0; var_575_float = 0; // 0x63d PushV
	var_576_int = var_548_int + var_550_int; // 0x63e Add
	var_577_float = 100.0; // 0x63f PushF
	var_574_float = var_576_int / var_576_int; // 0x640 Div2
	var_575_float = 1; // 0x641 MovI
	func_1967(var_573_float, var_574_float, var_575_float); // 0x642 NEW_2
	var_551_float = var_573_float; // 0x643 Mov
	var_579_string = "health"; // 0x645 PushS
	GetProperty(var_579_string, var_552_float); // 0x646 ObjFunc
	var_580_int = 1; // 0x648 PushI
	var_581_int = var_580_int - var_551_float; // 0x649 Sub
	var_553_float = var_537_float * var_581_int; // 0x64a Mult2
	var_582_string = "health"; // 0x64b PushS
	var_583_float = 0; var_584_float = 0; var_585_float = 0; var_586_float = 0; // 0x64c PushV
	var_584_float = var_552_float - var_553_float; // 0x64d Sub2
	var_585_float = 0; // 0x64e MovI
	var_586_float = 1; // 0x64f MovI
	func_1998(var_583_float, var_584_float, var_585_float, var_586_float); // 0x650 NEW_2
	SetProperty(var_582_string, var_583_float); // 0x652 ObjFunc
	var_589_bool = 0; var_590_object = Obj(); // 0x654 PushV
	var_590_object = var_536_object; // 0x655 Mov
	func_1519(var_589_bool, var_590_object); // 0x656 NEW_2
	if(var_589_bool == 0) goto Label_1629; // 0x658 JumpB
	var_591_float = 0; // 0x659 PushV
	var_591_float = -var_553_float; // 0x65a Neg2
	func_2057(var_591_float); // 0x65b NEW_2
	
Label_1629:
	var_535_float = var_553_float; // 0x65d Mov
	return 12; // 0x65e Return
	
Label_1595:
	GetProperty(var_549_string, var_550_int); // 0x63b ObjFunc
	
Label_1577:
	var_595_string = "armor"; // 0x629 PushS
	GetProperty(var_595_string, var_548_int); // 0x62a ObjFunc
}


func_2077(var_97_object)
{
	var_98_bool = 0; var_99_bool = 0; // 0x81d PushV
	IsPlayerActor(var_97_object, var_99_bool); // 0x81e Func
	var_100_bool = var_99_bool; // 0x820 Push
	if(var_100_bool == 0) goto Label_2085; // 0x821 JumpB
	var_101_string = "attack"; // 0x822 PushS
	PlayGlobalMusic(var_101_string); // 0x823 Func
	
Label_2085:
	return 2; // 0x825 Return
}


func_543(var_0_bool, var_488_bool, var_489_float)
{
	var_490_int = 0; var_491_bool = 0; var_492_int = 0; var_493_string = ""; var_494_int = 0; var_495_bool = 0; var_496_int = 0; var_497_string = ""; // 0x21f PushV
	func_884(var_497_string); // 0x221 NEW_2
	irand(var_494_int, var_497_string); // 0x223 Func
	var_498_int = 1; // 0x225 PushI
	var_494_int = var_494_int + var_498_int; // 0x226 Add2
	Face(var_0_bool); // 0x227 Func
	var_499_bool = 1; // 0x229 PushB
	SetAttackState(var_499_bool); // 0x22a Func
	func_2086(); // 0x22d NEW_2
	var_500_string = "all"; // 0x22f PushS
	var_501_string = "attack_begin"; // 0x230 PushS
	var_502_int = var_501_string + var_494_int; // 0x231 Add
	PlayAnimation(var_500_string, var_502_int); // 0x232 Func
	WaitForAnimEnd(); // 0x234 Func
	func_852(var_496_int, var_497_string); // 0x237 NEW_2
	var_518_bool = 0; var_519_object = Obj(); // 0x239 PushV
	var_519_object = var_0_bool; // 0x23a MovT
	func_1703(var_518_bool, var_519_object); // 0x23b NEW_2
	var_520_bool = var_518_bool == 0; // 0x23d Not
	if(var_520_bool == 0) goto Label_579; // 0x23e JumpB
	StopAsync(); // 0x23f Func
	var_488_bool = 0; // 0x241 MovB
	return 8; // 0x242 Return
	
Label_579:
	var_521_float = 0; var_522_int = 0; // 0x243 PushV
	var_521_float = var_489_float; // 0x244 Mov
	var_522_int = var_494_int; // 0x245 Mov
	func_504(var_497_string, var_521_float, var_522_int); // 0x246 NEW_2
	var_620_string = "all"; // 0x248 PushS
	var_621_string = "attack_middle"; // 0x249 PushS
	var_622_int = var_621_string + var_494_int; // 0x24a Add
	HasAnimation(var_495_bool, var_620_string, var_622_int); // 0x24b Func
	var_623_bool = var_495_bool; // 0x24d Push
	if(var_623_bool == 0) goto Label_660; // 0x24e JumpB
	func_2086(); // 0x250 NEW_2
	var_624_string = "all"; // 0x252 PushS
	var_625_string = "attack_middle"; // 0x253 PushS
	var_626_int = var_625_string + var_494_int; // 0x254 Add
	PlayAnimation(var_624_string, var_626_int); // 0x255 Func
	WaitForAnimEnd(); // 0x257 Func
	func_884(var_497_string); // 0x25a NEW_2
	var_627_bool = 0; var_628_object = Obj(); // 0x25c PushV
	var_628_object = var_0_bool; // 0x25d MovT
	func_1703(var_627_bool, var_628_object); // 0x25e NEW_2
	var_629_bool = var_627_bool == 0; // 0x260 Not
	if(var_629_bool == 0) goto Label_614; // 0x261 JumpB
	StopAsync(); // 0x262 Func
	var_488_bool = 0; // 0x264 MovB
	return 8; // 0x265 Return
	
Label_614:
	var_630_float = 0; var_631_int = 0; // 0x266 PushV
	var_630_float = var_489_float; // 0x267 Mov
	var_631_int = var_494_int; // 0x268 Mov
	func_504(var_497_string, var_630_float, var_631_int); // 0x269 NEW_2
	var_496_int = 1; // 0x26b MovI
	
Label_620:
	var_632_string = "attack_middle"; // 0x26c PushS
	var_633_int = var_632_string + var_494_int; // 0x26d Add
	var_634_string = "_"; // 0x26e PushS
	var_635_int = var_633_int + var_634_string; // 0x26f Add
	var_497_string = var_635_int + var_496_int; // 0x270 Add2
	var_636_string = "all"; // 0x271 PushS
	HasAnimation(var_495_bool, var_636_string, var_497_string); // 0x272 Func
	var_637_bool = var_495_bool == 0; // 0x274 Not
	if(var_637_bool == 0) goto Label_631; // 0x275 JumpB
	goto Label_660; // 0x276 Jump
	
Label_660:
	var_638_bool = 0; // 0x294 PushB
	SetAttackState(var_638_bool); // 0x295 Func
	var_639_string = "all"; // 0x297 PushS
	var_640_string = "attack_end"; // 0x298 PushS
	var_641_int = var_640_string + var_494_int; // 0x299 Add
	PlayAnimation(var_639_string, var_641_int); // 0x29a Func
	var_642_bool = 0; // 0x29c PushV
	func_894(var_642_bool); // 0x29d NEW_2
	if(var_642_bool == 0) goto Label_678; // 0x29f JumpB
	var_643_bool = 0; var_644_float = 0; // 0x2a0 PushV
	var_644_float = 0.45; // 0x2a1 MovF
	func_682(var_643_bool, var_644_float); // 0x2a2 NEW_2
	StopAsync(); // 0x2a4 Func
	
Label_678:
	var_488_bool = 1; // 0x2a6 MovB
	return 8; // 0x2a7 Return
	
Label_631:
	func_2086(); // 0x278 NEW_2
	var_652_string = "all"; // 0x27a PushS
	PlayAnimation(var_652_string, var_497_string); // 0x27b Func
	WaitForAnimEnd(); // 0x27d Func
	func_884(var_497_string); // 0x280 NEW_2
	var_653_bool = 0; var_654_object = Obj(); // 0x282 PushV
	var_654_object = var_0_bool; // 0x283 MovT
	func_1703(var_653_bool, var_654_object); // 0x284 NEW_2
	var_655_bool = var_653_bool == 0; // 0x286 Not
	if(var_655_bool == 0) goto Label_652; // 0x287 JumpB
	StopAsync(); // 0x288 Func
	var_488_bool = 0; // 0x28a MovB
	return 8; // 0x28b Return
	
Label_652:
	var_656_float = 0; var_657_int = 0; // 0x28c PushV
	var_656_float = var_489_float; // 0x28d Mov
	var_657_int = var_494_int; // 0x28e Mov
	func_504(var_497_string, var_656_float, var_657_int); // 0x28f NEW_2
	var_658_int = 1; // 0x291 PushI
	var_496_int = var_496_int + var_658_int; // 0x292 Add2
	goto Label_620; // 0x293 Jump
}


func_37(var_0_bool, var_80_bool, var_81_object, var_198_object)
{
	var_83_object = Obj(); var_84_cvector = CVector(0,0,0); var_85_bool = 0; var_86_object = Obj(); var_87_cvector = CVector(0,0,0); var_88_float = 0; var_89_cvector = CVector(0,0,0); var_90_object = Obj(); var_91_cvector = CVector(0,0,0); var_92_bool = 0; var_93_object = Obj(); var_94_cvector = CVector(0,0,0); var_95_float = 0; var_96_cvector = CVector(0,0,0); // 0x25 PushV
	var_97_object = Obj(); // 0x26 PushV
	var_97_object = var_81_object; // 0x27 Mov
	func_2077(var_97_object); // 0x28 NEW_2
	var_0_bool = 0; // 0x2a TMovB
	var_102_bool = 0; var_103_object = Obj(); // 0x2b PushV
	var_103_object = var_81_object; // 0x2c Mov
	func_1737(var_103_object); // 0x2d NEW_2
	var_116_bool = 0; var_117_object = Obj(); // 0x2f PushV
	var_117_object = var_81_object; // 0x30 Mov
	func_1703(var_116_bool, var_117_object); // 0x31 NEW_2
	var_118_bool = var_116_bool == 0; // 0x33 Not
	if(var_118_bool == 0) goto Label_55; // 0x34 JumpB
	var_80_bool = 0; // 0x35 MovB
	return 14; // 0x36 Return
	
Label_55:
	func_2086(); // 0x38 NEW_2
	Face(var_81_object); // 0x3a Func
	var_123_string = "all"; // 0x3c PushS
	var_124_string = "aattack_begin1"; // 0x3d PushS
	PlayAnimation(var_123_string, var_124_string); // 0x3e Func
	WaitForAnimEnd(); // 0x40 Func
	var_125_bool = 0; var_126_object = Obj(); // 0x42 PushV
	var_126_object = var_81_object; // 0x43 Mov
	func_1703(var_125_bool, var_126_object); // 0x44 NEW_2
	var_127_bool = var_125_bool == 0; // 0x46 Not
	if(var_127_bool == 0) goto Label_76; // 0x47 JumpB
	StopAsync(); // 0x48 Func
	var_80_bool = 0; // 0x4a MovB
	return 14; // 0x4b Return
	
Label_76:
	var_128_string = "all"; // 0x4c PushS
	var_129_string = "aattack_end1"; // 0x4d PushS
	PlayAnimation(var_128_string, var_129_string); // 0x4e Func
	GetScene(var_90_object); // 0x50 Func
	var_130_string = "knife"; // 0x52 PushS
	GetGeometryLocator(var_130_string, var_92_bool, var_91_cvector); // 0x53 Func
	var_131_string = "scripted"; // 0x55 PushS
	var_132_cvector = CVector(0.0, 0.0, 1.0); // 0x56 PushVec
	var_133_string = "grabitel_knife.xml"; // 0x57 PushS
	AddActorByType(var_93_object, var_131_string, var_90_object, var_91_cvector, var_132_cvector, var_133_string); // 0x58 Func
	var_134_string = "Owner"; // 0x5a PushS
	var_135_object = Obj(); // 0x5b PushV
	func_1951(var_135_object); // 0x5c NEW_2
	SetScriptProperty(var_134_string, var_135_object); // 0x5e ObjFunc
	var_136_string = "Target"; // 0x60 PushS
	SetScriptProperty(var_136_string, var_81_object); // 0x61 ObjFunc
	GetPosition(var_94_cvector); // 0x63 ObjFunc
	GetEyesHeight(var_95_float); // 0x65 ObjFunc
	var_137_float = GetByIndex(var_94_cvector, 1); // 0x67 PushE
	var_138_int = 10; // 0x68 PushI
	var_139_int = var_95_float - var_138_int; // 0x69 Sub
	var_137_float = var_137_float + var_139_int; // 0x6a Add2
	SetByIndex(var_94_cvector, 1) = var_137_float; // 0x6b PopE
	var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_cvector = CVector(0,0,0); var_143_float = 0; // 0x6c PushV
	var_141_cvector = var_91_cvector; // 0x6d Mov
	var_142_cvector = var_94_cvector; // 0x6e Mov
	var_143_float = 2000.0; // 0x6f MovF
	func_2311(var_140_cvector, var_141_cvector, var_142_cvector, var_143_float); // 0x70 NEW_2
	var_96_cvector = var_140_cvector; // 0x71 Mov
	var_191_string = "StartDirection"; // 0x73 PushS
	SetScriptProperty(var_191_string, var_96_cvector); // 0x74 ObjFunc
	WaitForAnimEnd(); // 0x76 Func
	StopAsync(); // 0x78 Func
	var_192_bool = var_0_bool; // 0x7a PushT
	if(var_192_bool == 0) goto Label_126; // 0x7b JumpB
	var_80_bool = 1; // 0x7c MovB
	return 14; // 0x7d Return
	
Label_126:
	var_193_bool = 0; var_194_object = Obj(); // 0x7e PushV
	var_194_object = var_81_object; // 0x7f Mov
	func_1703(var_193_bool, var_194_object); // 0x80 NEW_2
	var_195_bool = var_193_bool == 0; // 0x82 Not
	if(var_195_bool == 0) goto Label_134; // 0x83 JumpB
	var_80_bool = 0; // 0x84 MovB
	return 14; // 0x85 Return
	
Label_134:
	var_196_bool = 0; var_197_object = Obj(); // 0x86 PushV
	var_197_object = var_81_object; // 0x87 Mov
	TaskCall(2); // 0x88 TaskCall
	func_163(var_196_bool, var_197_object); // 0x89 NEW_2
	TaskReturn(); // 0x8a TaskReturn
	var_80_bool = var_198_object; // 0x8b Mov
	return 14; // 0x8d Return
}


func_2086()
{
	var_119_object = Obj(); var_120_object = Obj(); // 0x826 PushV
	GetScene(var_120_object); // 0x827 Func
	var_121_string = "battle"; // 0x829 PushS
	var_122_object = Obj(); // 0x82a PushV
	func_1951(var_122_object); // 0x82b NEW_2
	BroadcastMessage(var_121_string, var_122_object, var_120_object); // 0x82d Func
	return 2; // 0x82f Return
}


func_2097(var_613_bool)
{
	var_614_bool = 0; var_615_bool = 0; // 0x831 PushV
	var_616_string = "god_mode"; // 0x832 PushS
	GetVariable(var_616_string, var_615_bool); // 0x833 Func
	var_613_bool = var_615_bool; // 0x835 Mov
	return 2; // 0x836 Return
}


func_2103(var_35_string, var_36_int)
{
	var_37_string = ""; var_38_string = ""; // 0x837 PushV
	var_38_string = "idle"; // 0x838 MovS
	var_39_int = var_36_int; // 0x839 Push
	if(var_39_int == 0) goto Label_2108; // 0x83a JumpB
	var_38_string = var_38_string + var_36_int; // 0x83b Add2
	
Label_2108:
	var_35_string = var_38_string; // 0x83c Mov
	return 2; // 0x83d Return
}


func_2110(var_29_int)
{
	var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_bool = 0; // 0x83e PushV
	var_32_int = 0; // 0x83f MovI
	
Label_2112:
	var_34_string = "all"; // 0x840 PushS
	var_35_string = ""; var_36_int = 0; // 0x841 PushV
	var_36_int = var_32_int; // 0x842 Mov
	func_2103(var_35_string, var_36_int); // 0x843 NEW_2
	HasAnimation(var_33_bool, var_34_string, var_35_string); // 0x845 Func
	var_40_bool = var_33_bool == 0; // 0x847 Not
	if(var_40_bool == 0) goto Label_2122; // 0x848 JumpB
	goto Label_2125; // 0x849 Jump
	
Label_2125:
	var_29_int = var_32_int; // 0x84d Mov
	return 4; // 0x84e Return
	
Label_2122:
	var_41_int = 1; // 0x84a PushI
	var_32_int = var_32_int + var_41_int; // 0x84b Add2
	goto Label_2112; // 0x84c Jump
}


func_2127(var_11_object)
{
	var_12_object = Obj(); // 0x850 PushV
	var_12_object = var_11_object; // 0x851 Mov
	TaskCall(6); // 0x852 TaskCall
	func_1320(var_12_object); // 0x853 NEW_2
	TaskReturn(); // 0x854 TaskReturn
	return 0; // 0x856 Return
}


func_1631(var_602_bool, var_603_object)
{
	var_604_float = 0; var_605_float = 0; // 0x65f PushV
	var_606_bool = 0; var_607_object = Obj(); var_608_string = ""; // 0x660 PushV
	var_607_object = var_603_object; // 0x661 Mov
	var_608_string = "health"; // 0x662 MovS
	func_1524(var_606_bool, var_607_object, var_608_string); // 0x663 NEW_2
	var_609_bool = var_606_bool == 0; // 0x665 Not
	if(var_609_bool == 0) goto Label_1641; // 0x666 JumpB
	var_602_bool = 0; // 0x667 MovB
	return 2; // 0x668 Return
	
Label_1641:
	var_610_bool = 0; // 0x669 PushV
	var_610_bool = 0; // 0x66a MovB
	var_611_bool = 0; var_612_object = Obj(); // 0x66b PushV
	var_612_object = var_603_object; // 0x66c Mov
	func_1519(var_611_bool, var_612_object); // 0x66d NEW_2
	if(var_611_bool == 0) goto Label_1653; // 0x66f JumpB
	var_613_bool = 0; // 0x670 PushV
	func_2097(var_613_bool); // 0x671 NEW_2
	if(var_613_bool == 0) goto Label_1653; // 0x673 JumpB
	var_610_bool = 1; // 0x674 MovB
	
Label_1653:
	if(var_610_bool == 0) goto Label_1656; // 0x675 JumpB
	var_602_bool = 0; // 0x676 MovB
	return 2; // 0x677 Return
	
Label_1656:
	var_617_string = "health"; // 0x678 PushS
	GetProperty(var_617_string, var_605_float); // 0x679 ObjFunc
	var_618_float = 0.0; // 0x67b PushF
	var_602_bool = var_605_float <= var_618_float; // 0x67c LE2
	return 2; // 0x67d Return
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


func_2172(var_15_bool, var_16_object)
{
	var_17_bool = 0; var_18_object = Obj(); // 0x87d PushV
	var_18_object = var_16_object; // 0x87e Mov
	func_1703(var_17_bool, var_18_object); // 0x87f NEW_2
	var_15_bool = var_17_bool; // 0x880 Mov
	return 0; // 0x882 Return
}


func_1662(var_32_bool)
{
	var_34_bool = 0; var_35_bool = 0; // 0x67e PushV
	IsDead(var_35_bool); // 0x67f ObjFunc
	var_32_bool = var_35_bool; // 0x681 Mov
	return 2; // 0x682 Return
}


func_1153(var_0_bool)
{
	var_0_bool = 1; // 0x481 TMovB
	var_14_int = 0; // 0x482 PushI
	KillTimer(var_14_int); // 0x483 Func
	Stop(); // 0x485 Func
	return 0; // 0x487 Return
}


func_2179(var_51_object)
{
	var_52_object = Obj(); // 0x884 PushV
	var_52_object = var_51_object; // 0x885 Mov
	func_2346(var_52_object); // 0x886 NEW_2
	return 0; // 0x888 Return
}


func_1667(var_21_bool, var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); // 0x683 PushV
	var_27_bool = var_22_object == 0; // 0x684 NullEq
	if(var_27_bool == 0) goto Label_1672; // 0x685 JumpB
	var_21_bool = 0; // 0x686 MovB
	return 4; // 0x687 Return
	
Label_1672:
	var_28_bool = 0; // 0x688 PushV
	var_28_bool = 0; // 0x689 MovB
	var_29_string = "IsDead"; // 0x68a PushS
	var_30_int = 1; // 0x68b PushI
	var_31_bool = IsFuncExist(var_22_object, var_29_string, var_30_int); // 0x68c FuncExist
	if(var_31_bool == 0) goto Label_1684; // 0x68d JumpB
	var_32_bool = 0; var_33_object = Obj(); // 0x68e PushV
	var_33_object = var_22_object; // 0x68f Mov
	func_1662(var_33_object); // 0x690 NEW_2
	if(var_32_bool == 0) goto Label_1684; // 0x692 JumpB
	var_28_bool = 1; // 0x693 MovB
	
Label_1684:
	if(var_28_bool == 0) goto Label_1687; // 0x694 JumpB
	var_21_bool = 0; // 0x695 MovB
	return 4; // 0x696 Return
	
Label_1687:
	GetScene(var_25_object); // 0x697 Func
	var_36_bool = var_25_object == 0; // 0x699 NullEq
	if(var_36_bool == 0) goto Label_1693; // 0x69a JumpB
	var_21_bool = 0; // 0x69b MovB
	return 4; // 0x69c Return
	
Label_1693:
	GetScene(var_26_object); // 0x69d ObjFunc
	var_37_bool = var_25_object != var_26_object; // 0x69f Neq
	if(var_37_bool == 0) goto Label_1699; // 0x6a0 JumpB
	var_21_bool = 0; // 0x6a1 MovB
	return 4; // 0x6a2 Return
	
Label_1699:
	var_21_bool = 1; // 0x6a3 MovB
	return 4; // 0x6a4 Return
}


func_2185(var_55_int)
{
	var_56_int = 0; var_57_int = 0; // 0x889 PushV
	var_58_string = "branch"; // 0x88a PushS
	GetVariable(var_58_string, var_57_int); // 0x88b Func
	var_55_int = var_57_int; // 0x88d Mov
	return 2; // 0x88e Return
}


func_2191(var_14_object)
{
	var_15_int = 0; // 0x890 PushV
	func_2185(var_15_int); // 0x891 NEW_2
	var_19_int = 1; // 0x893 PushI
	var_20_bool = var_15_int == var_19_int; // 0x894 Eq
	if(var_20_bool == 0) goto Label_2201; // 0x895 JumpB
	WorkWithCorpse(var_14_object); // 0x896 Func
	goto Label_2203; // 0x898 Jump
	
Label_2203:
	return 0; // 0x89b Return
	
Label_2201:
	Barter(var_14_object); // 0x899 Func
}


func_1169(var_321_bool, var_322_object)
{
	var_323_bool = 0; var_324_object = Obj(); // 0x492 PushV
	var_324_object = var_322_object; // 0x493 Mov
	func_1703(var_323_bool, var_324_object); // 0x494 NEW_2
	var_321_bool = var_323_bool; // 0x495 Mov
	return 0; // 0x497 Return
}


func_1176(var_339_string)
{
	var_339_string = "walk"; // 0x498 MovS
	return 0; // 0x499 Return
}


func_1178(var_340_string)
{
	var_340_string = "run"; // 0x49a MovS
	return 0; // 0x49b Return
}


func_2204(var_18_int, var_19_int)
{
	var_20_int = 0; var_21_bool = 0; var_22_int = 0; var_23_bool = 0; // 0x89c PushV
	var_24_bool = var_18_int > var_19_int; // 0x89d GT
	if(var_24_bool == 0) goto Label_2211; // 0x89e JumpB
	var_25_string = "GenerateMoney: iMin > iMax"; // 0x89f PushS
	Trace(var_25_string); // 0x8a0 Func
	return 4; // 0x8a2 Return
	
Label_2211:
	var_22_int = 0; // 0x8a3 MovI
	var_26_bool = var_18_int != var_19_int; // 0x8a4 Neq
	if(var_26_bool == 0) goto Label_2218; // 0x8a5 JumpB
	var_27_int = var_19_int - var_18_int; // 0x8a6 Sub
	irand(var_22_int, var_27_int); // 0x8a7 Func
	goto Label_2222; // 0x8a9 Jump
	
Label_2222:
	var_22_int = var_22_int + var_18_int; // 0x8ae Add2
	var_28_int = 0; // 0x8af PushI
	var_29_bool = var_22_int == var_28_int; // 0x8b0 Eq
	if(var_29_bool == 0) goto Label_2227; // 0x8b1 JumpB
	return 4; // 0x8b2 Return
	
Label_2227:
	var_30_int = 0; var_31_string = ""; // 0x8b3 PushV
	var_31_string = "Money"; // 0x8b4 MovS
	func_2306(var_30_int, var_31_string); // 0x8b5 NEW_2
	var_34_int = 0; // 0x8b7 PushI
	AddItem(var_23_bool, var_30_int, var_34_int, var_22_int); // 0x8b8 Func
	return 4; // 0x8ba Return
	
Label_2218:
	var_35_int = 0; // 0x8aa PushI
	var_36_bool = var_18_int == var_35_int; // 0x8ab Eq
	if(var_36_bool == 0) goto Label_2222; // 0x8ac JumpB
	return 4; // 0x8ad Return
}


func_163(var_196_bool, var_197_object)
{
	var_204_bool = GlobalVars[0]; // 0xa4 PushGE
	var_204_bool = 0; // 0xa5 MovB
	GlobalVars[0] = var_204_bool; // 0xa6 PopGE
	var_205_object = Obj(); var_206_bool = 0; var_207_float = 0; // 0xa7 PushV
	var_205_object = var_197_object; // 0xa8 Mov
	var_206_bool = 1; // 0xa9 MovB
	var_207_float = 200.0; // 0xaa MovF
	func_240(var_201_bool, var_202_float, var_203_int, var_196_bool, var_197_object, var_205_object, var_206_bool, var_207_float); // 0xab NEW_2
	var_675_bool = 0; // 0xad PushV
	var_675_bool = 0; // 0xae MovB
	var_676_bool = GlobalVars[0]; // 0xaf PushGE
	if(var_676_bool == 0) goto Label_180; // 0xb0 JumpB
	var_677_int = var_3_int; // 0xb1 PushT
	if(var_677_int == 0) goto Label_180; // 0xb2 JumpB
	var_675_bool = 1; // 0xb3 MovB
	
Label_180:
	if(var_675_bool == 0) goto Label_187; // 0xb4 JumpB
	var_678_string = "all"; // 0xb5 PushS
	var_679_string = "attack_off"; // 0xb6 PushS
	PlayAnimation(var_678_string, var_679_string); // 0xb7 Func
	WaitForAnimEnd(); // 0xb9 Func
	
Label_187:
	var_680_bool = GlobalVars[0]; // 0xbb PushGE
	var_196_bool = var_680_bool; // 0xbc Mov
	return 0; // 0xbe Return
}


func_1703(var_17_bool, var_18_object)
{
	var_19_int = 0; var_20_int = 0; // 0x6a7 PushV
	var_21_bool = 0; var_22_object = Obj(); // 0x6a8 PushV
	var_22_object = var_18_object; // 0x6a9 Mov
	func_1667(var_21_bool, var_22_object); // 0x6aa NEW_2
	var_38_bool = var_21_bool == 0; // 0x6ac Not
	if(var_38_bool == 0) goto Label_1712; // 0x6ad JumpB
	var_17_bool = 0; // 0x6ae MovB
	return 2; // 0x6af Return
	
Label_1712:
	var_39_bool = 0; var_40_object = Obj(); var_41_string = ""; // 0x6b0 PushV
	var_40_object = var_18_object; // 0x6b1 Mov
	var_41_string = "noaccess"; // 0x6b2 MovS
	func_1524(var_39_bool, var_40_object, var_41_string); // 0x6b3 NEW_2
	var_48_bool = var_39_bool == 0; // 0x6b5 Not
	if(var_48_bool == 0) goto Label_1721; // 0x6b6 JumpB
	var_17_bool = 1; // 0x6b7 MovB
	return 2; // 0x6b8 Return
	
Label_1721:
	var_49_string = "noaccess"; // 0x6b9 PushS
	GetProperty(var_49_string, var_20_int); // 0x6ba ObjFunc
	var_50_int = 0; // 0x6bc PushI
	var_17_bool = var_20_int == var_50_int; // 0x6bd Eq2
	return 2; // 0x6be Return
}


func_680(var_3_int)
{
	var_3_int = 1; // 0x2a8 TMovB
	return 0; // 0x2a9 Return
}


func_682(var_643_bool, var_644_float)
{
	var_645_float = 0; var_646_bool = 0; var_647_float = 0; var_648_bool = 0; // 0x2aa PushV
	rand(var_647_float); // 0x2ab Func
	var_649_bool = var_647_float < var_644_float; // 0x2ad LT
	if(var_649_bool == 0) goto Label_702; // 0x2ae JumpB
	
Label_687:
	IsAnimationPlaying(var_648_bool); // 0x2af Func
	var_650_bool = var_648_bool == 0; // 0x2b1 Not
	if(var_650_bool == 0) goto Label_692; // 0x2b2 JumpB
	goto Label_701; // 0x2b3 Jump
	
Label_701:
	goto Label_707; // 0x2bd Jump
	
Label_707:
	var_643_bool = 0; // 0x2c3 MovB
	return 4; // 0x2c4 Return
	
Label_692:
	var_651_bool = 0; // 0x2b4 PushV
	func_780(var_651_bool); // 0x2b5 NEW_2
	if(var_651_bool == 0) goto Label_698; // 0x2b7 JumpB
	var_643_bool = 1; // 0x2b8 MovB
	return 4; // 0x2b9 Return
	
Label_698:
	sync(); // 0x2ba Func
	goto Label_687; // 0x2bc Jump
	
Label_702:
	WaitForAnimEnd(); // 0x2be Func
	func_884(var_648_bool); // 0x2c1 NEW_2
}


func_2235(var_61_string)
{
	var_62_object = Obj(); var_63_int = 0; var_64_bool = 0; var_65_object = Obj(); var_66_int = 0; var_67_bool = 0; // 0x8bb PushV
	CreateInvItem(var_65_object); // 0x8bc Func
	SetItemName(var_61_string); // 0x8be ObjFunc
	var_68_string = "Organ"; // 0x8c0 PushS
	var_69_int = 1; // 0x8c1 PushI
	SetProperty(var_68_string, var_69_int); // 0x8c2 ObjFunc
	GetItemID(var_66_int); // 0x8c4 ObjFunc
	var_70_int = 0; // 0x8c6 PushI
	var_71_int = 1; // 0x8c7 PushI
	AddItem(var_67_bool, var_65_object, var_70_int, var_71_int); // 0x8c8 Func
	return 6; // 0x8ca Return
}


func_191(var_532_float)
{
	var_532_float = 0.15; // 0xc0 MovF
	return 0; // 0xc1 Return
}


func_1727(var_106_bool, var_107_cvector)
{
	var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); var_110_bool = 0; var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); var_113_bool = 0; // 0x6bf PushV
	GetPosition(var_111_cvector); // 0x6c0 Func
	var_112_cvector = var_107_cvector - var_111_cvector; // 0x6c2 Sub2
	var_114_float = GetByIndex(var_112_cvector, 0); // 0x6c3 PushE
	var_115_float = GetByIndex(var_112_cvector, 2); // 0x6c4 PushE
	Rotate(var_114_float, var_115_float, var_113_bool); // 0x6c5 Func
	var_106_bool = var_113_bool; // 0x6c7 Mov
	return 6; // 0x6c8 Return
}


func_194(var_539_int)
{
	var_539_int = 0; // 0xc3 MovI
	return 0; // 0xc4 Return
}


func_709(var_0_bool, var_427_bool, var_428_float)
{
	var_429_bool = 0; var_430_cvector = CVector(0,0,0); var_431_cvector = CVector(0,0,0); var_432_cvector = CVector(0,0,0); var_433_float = 0; var_434_bool = 0; var_435_cvector = CVector(0,0,0); var_436_cvector = CVector(0,0,0); var_437_cvector = CVector(0,0,0); var_438_float = 0; // 0x2c5 PushV
	
Label_710:
	IsAnimationPlaying(var_434_bool); // 0x2c6 Func
	var_439_bool = var_434_bool == 0; // 0x2c8 Not
	if(var_439_bool == 0) goto Label_715; // 0x2c9 JumpB
	goto Label_747; // 0x2ca Jump
	
Label_747:
	func_884(var_438_float); // 0x2ec NEW_2
	var_427_bool = 0; // 0x2ee MovB
	return 10; // 0x2ef Return
	
Label_715:
	var_440_bool = 0; // 0x2cb PushV
	func_780(var_440_bool); // 0x2cc NEW_2
	if(var_440_bool == 0) goto Label_721; // 0x2ce JumpB
	var_427_bool = 1; // 0x2cf MovB
	return 10; // 0x2d0 Return
	
Label_721:
	var_483_bool = 0; var_484_object = Obj(); // 0x2d1 PushV
	var_484_object = var_0_bool; // 0x2d2 MovT
	func_1703(var_483_bool, var_484_object); // 0x2d3 NEW_2
	var_485_bool = var_483_bool == 0; // 0x2d5 Not
	if(var_485_bool == 0) goto Label_729; // 0x2d6 JumpB
	var_427_bool = 0; // 0x2d7 MovB
	return 10; // 0x2d8 Return
	
Label_729:
	GetPFPosition(var_435_cvector); // 0x2d9 TObjFunc
	GetPFPosition(var_436_cvector); // 0x2db Func
	var_437_cvector = var_435_cvector - var_436_cvector; // 0x2dd Sub2
	var_438_float = var_437_cvector | var_437_cvector; // 0x2de Or2
	var_486_float = var_428_float * var_428_float; // 0x2df Mult
	var_487_bool = var_438_float < var_486_float; // 0x2e0 LT
	if(var_487_bool == 0) goto Label_744; // 0x2e1 JumpB
	var_488_bool = 0; var_489_float = 0; // 0x2e2 PushV
	var_489_float = var_428_float; // 0x2e3 Mov
	func_543(var_438_float, var_488_bool, var_489_float); // 0x2e4 NEW_2
	var_427_bool = 1; // 0x2e6 MovB
	return 10; // 0x2e7 Return
	
Label_744:
	sync(); // 0x2e8 Func
	goto Label_710; // 0x2ea Jump
}


func_197(var_596_int)
{
	var_596_int = 1; // 0xc5 MovI
	return 0; // 0xc6 Return
}


func_199(var_597_object, var_598_float)
{
	var_599_bool = 0; // 0xc8 PushV
	var_599_bool = 0; // 0xc9 MovB
	var_600_int = 0; // 0xca PushI
	var_601_bool = var_598_float > var_600_int; // 0xcb GT
	if(var_601_bool == 0) goto Label_211; // 0xcc JumpB
	var_602_bool = 0; var_603_object = Obj(); // 0xcd PushV
	var_603_object = var_597_object; // 0xce Mov
	func_1631(var_602_bool, var_603_object); // 0xcf NEW_2
	if(var_602_bool == 0) goto Label_211; // 0xd1 JumpB
	var_599_bool = 1; // 0xd2 MovB
	
Label_211:
	if(var_599_bool == 0) goto Label_218; // 0xd3 JumpB
	var_619_bool = GlobalVars[0]; // 0xd4 PushGE
	var_619_bool = 1; // 0xd5 MovB
	GlobalVars[0] = var_619_bool; // 0xd6 PopGE
	func_680(var_598_float); // 0xd8 NEW_2
	
Label_218:
	return 0; // 0xda Return
}


func_1222()
{
	var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; var_23_float = 0; var_24_bool = 0; // 0x4c6 PushV
	WaitForAnimEnd(); // 0x4c7 Func
	var_25_bool = 0; // 0x4c9 PushV
	func_1883(var_25_bool); // 0x4ca NEW_2
	var_28_bool = var_25_bool == 0; // 0x4cc Not
	if(var_28_bool == 0) goto Label_1231; // 0x4cd JumpB
	return 14; // 0x4ce Return
	
Label_1231:
	var_29_int = 0; // 0x4cf PushV
	func_2110(var_29_int); // 0x4d0 NEW_2
	var_18_int = var_29_int; // 0x4d1 Mov
	var_19_int = 0; // 0x4d3 MovI
	
Label_1236:
	var_42_bool = 0; // 0x4d4 PushV
	var_42_bool = 0; // 0x4d5 MovB
	var_43_int = 5; // 0x4d6 PushI
	var_44_bool = var_19_int < var_43_int; // 0x4d7 LT
	if(var_44_bool == 0) goto Label_1246; // 0x4d8 JumpB
	var_45_bool = 0; // 0x4d9 PushV
	func_1883(var_45_bool); // 0x4da NEW_2
	if(var_45_bool == 0) goto Label_1246; // 0x4dc JumpB
	var_42_bool = 1; // 0x4dd MovB
	
Label_1246:
	if(var_42_bool == 0) goto Label_1298; // 0x4de JumpB
	var_46_int = 3; // 0x4df PushI
	irand(var_20_int, var_46_int); // 0x4e0 Func
	var_47_int = 0; // 0x4e2 PushI
	var_48_bool = var_20_int == var_47_int; // 0x4e3 Eq
	if(var_48_bool == 0) goto Label_1270; // 0x4e4 JumpB
	var_49_int = var_18_int; // 0x4e5 Push
	if(var_49_int == 0) goto Label_1269; // 0x4e6 JumpB
	irand(var_21_int, var_18_int); // 0x4e7 Func
	var_50_string = "all"; // 0x4e9 PushS
	var_51_string = ""; var_52_int = 0; // 0x4ea PushV
	var_52_int = var_21_int; // 0x4eb Mov
	func_2103(var_51_string, var_52_int); // 0x4ec NEW_2
	PlayAnimation(var_50_string, var_51_string); // 0x4ee Func
	WaitForAnimEnd(var_22_bool); // 0x4f0 Func
	var_53_bool = var_22_bool == 0; // 0x4f2 Not
	if(var_53_bool == 0) goto Label_1269; // 0x4f3 JumpB
	goto Label_1298; // 0x4f4 Jump
	
Label_1298:
	ResetAAS(); // 0x512 Func
	return 14; // 0x514 Return
	
Label_1269:
	goto Label_1287; // 0x4f5 Jump
	
Label_1287:
	var_54_bool = 0; // 0x507 PushV
	func_1301(var_54_bool); // 0x508 NEW_2
	var_55_bool = var_54_bool == 0; // 0x50a Not
	if(var_55_bool == 0) goto Label_1293; // 0x50b JumpB
	goto Label_1298; // 0x50c Jump
	
Label_1293:
	ResetAAS(); // 0x50d Func
	var_56_int = 1; // 0x50f PushI
	var_19_int = var_19_int + var_56_int; // 0x510 Add2
	goto Label_1236; // 0x511 Jump
	
Label_1270:
	var_57_int = 1; // 0x4f6 PushI
	var_58_bool = var_20_int == var_57_int; // 0x4f7 Eq
	if(var_58_bool == 0) goto Label_1284; // 0x4f8 JumpB
	var_59_int = 4; // 0x4f9 PushI
	rand(var_23_float, var_59_int); // 0x4fa Func
	var_60_int = 1; // 0x4fc PushI
	var_61_int = var_23_float + var_60_int; // 0x4fd Add
	Sleep(var_61_int, var_24_bool); // 0x4fe Func
	var_62_bool = var_24_bool == 0; // 0x500 Not
	if(var_62_bool == 0) goto Label_1283; // 0x501 JumpB
	goto Label_1298; // 0x502 Jump
	
Label_1283:
	goto Label_1287; // 0x503 Jump
	
Label_1284:
	var_63_int = var_19_int; // 0x504 Push
	if(var_63_int == 0) goto Label_1287; // 0x505 JumpB
	goto Label_1298; // 0x506 Jump
}


func_1737(var_102_bool)
{
	var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); // 0x6c9 PushV
	GetPosition(var_105_cvector); // 0x6ca ObjFunc
	var_106_bool = 0; var_107_cvector = CVector(0,0,0); // 0x6cc PushV
	var_107_cvector = var_105_cvector; // 0x6cd Mov
	func_1727(var_106_bool, var_107_cvector); // 0x6ce NEW_2
	var_102_bool = var_106_bool; // 0x6cf Mov
	return 2; // 0x6d1 Return
}


func_2252()
{
	var_55_int = 0; // 0x8cc PushV
	func_2185(var_55_int); // 0x8cd NEW_2
	var_59_int = 1; // 0x8cf PushI
	var_60_bool = var_55_int != var_59_int; // 0x8d0 Neq
	if(var_60_bool == 0) goto Label_2259; // 0x8d1 JumpB
	return 0; // 0x8d2 Return
	
Label_2259:
	var_61_string = ""; // 0x8d3 PushV
	var_61_string = "liver"; // 0x8d4 MovS
	func_2235(var_61_string); // 0x8d5 NEW_2
	var_72_string = ""; // 0x8d7 PushV
	var_72_string = "kidney"; // 0x8d8 MovS
	func_2235(var_72_string); // 0x8d9 NEW_2
	var_73_string = ""; // 0x8db PushV
	var_73_string = "heart"; // 0x8dc MovS
	func_2235(var_73_string); // 0x8dd NEW_2
	var_74_string = ""; // 0x8df PushV
	var_74_string = "blood"; // 0x8e0 MovS
	func_2235(var_74_string); // 0x8e1 NEW_2
	return 0; // 0x8e3 Return
}


func_1746(var_27_object)
{
	var_28_bool = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; var_35_bool = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = ""; // 0x6d2 PushV
	var_42_bool = var_27_object == 0; // 0x6d3 NullEq
	if(var_42_bool == 0) goto Label_1750; // 0x6d4 JumpB
	return 14; // 0x6d5 Return
	
Label_1750:
	IsDead(var_35_bool); // 0x6d6 Func
	var_43_bool = var_35_bool; // 0x6d8 Push
	if(var_43_bool == 0) goto Label_1755; // 0x6d9 JumpB
	return 14; // 0x6da Return
	
Label_1755:
	GetSecondaryAnimationType(var_36_int); // 0x6db Func
	var_44_int = 0; // 0x6dd PushI
	var_45_bool = var_36_int < var_44_int; // 0x6de LT
	if(var_45_bool == 0) goto Label_1761; // 0x6df JumpB
	return 14; // 0x6e0 Return
	
Label_1761:
	GetPosition(var_37_cvector); // 0x6e1 ObjFunc
	GetPosition(var_38_cvector); // 0x6e3 Func
	GetDirection(var_39_cvector); // 0x6e5 Func
	var_40_cvector = var_38_cvector - var_37_cvector; // 0x6e7 Sub2
	var_46_float = GetByIndex(var_40_cvector, 0); // 0x6e8 PushE
	var_47_float = GetByIndex(var_39_cvector, 0); // 0x6e9 PushE
	var_48_float = var_46_float * var_47_float; // 0x6ea Mult
	var_49_float = GetByIndex(var_40_cvector, 2); // 0x6eb PushE
	var_50_float = GetByIndex(var_39_cvector, 2); // 0x6ec PushE
	var_51_float = var_49_float * var_50_float; // 0x6ed Mult
	var_52_int = var_48_float + var_51_float; // 0x6ee Add
	var_53_int = 0; // 0x6ef PushI
	var_54_bool = var_52_int >= var_53_int; // 0x6f0 GE
	if(var_54_bool == 0) goto Label_1780; // 0x6f1 JumpB
	var_41_string = "fhit"; // 0x6f2 MovS
	goto Label_1781; // 0x6f3 Jump
	
Label_1781:
	var_55_string = "hit_react"; // 0x6f5 PushS
	var_56_string = "1"; // 0x6f6 PushS
	var_57_int = var_41_string + var_56_string; // 0x6f7 Add
	var_58_string = "2"; // 0x6f8 PushS
	var_59_int = var_41_string + var_58_string; // 0x6f9 Add
	var_60_int = -10; // 0x6fa PushI
	FadeSecondaryAnimation(var_55_string, var_57_int, var_59_int, var_60_int); // 0x6fb Func
	return 14; // 0x6fd Return
	
Label_1780:
	var_41_string = "bhit"; // 0x6f4 MovS
}


func_2276()
{
	var_13_int = 0; var_14_bool = 0; var_15_int = 0; var_16_bool = 0; // 0x8e4 PushV
	var_17_int = 0; // 0x8e5 PushI
	ClearSubContainer(var_17_int); // 0x8e6 Func
	var_18_int = 0; var_19_int = 0; // 0x8e8 PushV
	var_18_int = 300; // 0x8e9 MovI
	var_19_int = 750; // 0x8ea MovI
	func_2204(var_18_int, var_19_int); // 0x8eb NEW_2
	var_37_string = ""; var_38_int = 0; var_39_int = 0; // 0x8ed PushV
	var_37_string = "Knife"; // 0x8ee MovS
	var_38_int = 1; // 0x8ef MovI
	var_39_int = 8; // 0x8f0 MovI
	func_1899(var_37_string, var_38_int, var_39_int); // 0x8f1 NEW_2
	var_48_string = ""; var_49_int = 0; var_50_int = 0; // 0x8f3 PushV
	var_48_string = "lockpick"; // 0x8f4 MovS
	var_49_int = 1; // 0x8f5 MovI
	var_50_int = 6; // 0x8f6 MovI
	func_1899(var_48_string, var_49_int, var_50_int); // 0x8f7 NEW_2
	var_51_int = 0; var_52_string = ""; // 0x8f9 PushV
	var_52_string = "grabitel_mark"; // 0x8fa MovS
	func_2306(var_51_int, var_52_string); // 0x8fb NEW_2
	var_53_int = 0; // 0x8fd PushI
	var_54_int = 1; // 0x8fe PushI
	AddItem(var_16_bool, var_51_int, var_53_int, var_54_int); // 0x8ff Func
	return 4; // 0x901 Return
}


func_240(var_0_bool, var_3_int, var_5_float, var_205_object, var_206_bool, var_207_float, var_276_bool, var_368_bool)
{
	var_208_float = 0; var_209_cvector = CVector(0,0,0); var_210_cvector = CVector(0,0,0); var_211_bool = 0; var_212_bool = 0; var_213_float = 0; var_214_cvector = CVector(0,0,0); var_215_float = 0; var_216_cvector = CVector(0,0,0); var_217_bool = 0; var_218_float = 0; var_219_float = 0; var_220_cvector = CVector(0,0,0); var_221_cvector = CVector(0,0,0); var_222_bool = 0; var_223_bool = 0; var_224_float = 0; var_225_cvector = CVector(0,0,0); var_226_float = 0; var_227_cvector = CVector(0,0,0); var_228_bool = 0; var_229_float = 0; // 0xf0 PushV
	func_469(var_227_cvector, var_228_bool, var_229_float); // 0xf2 NEW_2
	var_5_float = 0; // 0xf4 TMovI
	var_252_string = "@GetAttackDistance"; // 0xf5 PushS
	var_253_int = 1; // 0xf6 PushI
	var_254_bool = IsFuncExist(var_205_object, var_252_string, var_253_int); // 0xf7 FuncExist
	if(var_254_bool == 0) goto Label_254; // 0xf8 JumpB
	GetAttackDistance(var_219_float); // 0xf9 ObjFunc
	var_255_int = 50; // 0xfb PushI
	var_219_float = var_219_float + var_255_int; // 0xfc Add2
	goto Label_255; // 0xfd Jump
	
Label_255:
	var_256_int = 150; // 0xff PushI
	var_257_bool = var_219_float >= var_256_int; // 0x100 GE
	if(var_257_bool == 0) goto Label_259; // 0x101 JumpB
	var_219_float = 150; // 0x102 MovI
	
Label_259:
	var_3_int = 0; // 0x103 TMovB
	var_0_bool = var_205_object; // 0x104 TMov
	IsPlayerActor(var_0_bool, var_222_bool); // 0x105 Func
	var_258_bool = var_222_bool; // 0x107 Push
	if(var_258_bool == 0) goto Label_273; // 0x108 JumpB
	var_259_string = "attack"; // 0x109 PushS
	PlayGlobalMusic(var_259_string); // 0x10a Func
	var_260_object = Obj(); // 0x10c PushV
	func_1951(var_260_object); // 0x10d NEW_2
	SendPlayerEnemy(var_205_object, var_260_object); // 0x10f Func
	
Label_273:
	var_261_bool = var_206_bool; // 0x111 Push
	if(var_261_bool == 0) goto Label_277; // 0x112 JumpB
	var_223_bool = 0; // 0x113 MovB
	goto Label_278; // 0x114 Jump
	
Label_278:
	var_262_float = 300.0; // 0x116 PushF
	var_224_float = var_262_float + var_219_float; // 0x117 Add2
	
Label_280:
	var_263_bool = 0; // 0x118 PushV
	var_263_bool = 0; // 0x119 MovB
	var_264_bool = 0; var_265_object = Obj(); // 0x11a PushV
	var_265_object = var_0_bool; // 0x11b MovT
	func_1703(var_264_bool, var_265_object); // 0x11c NEW_2
	if(var_264_bool == 0) goto Label_290; // 0x11e JumpB
	var_266_bool = var_3_int == 0; // 0x11f Not
	if(var_266_bool == 0) goto Label_290; // 0x120 JumpB
	var_263_bool = 1; // 0x121 MovB
	
Label_290:
	if(var_263_bool == 0) goto Label_452; // 0x122 JumpB
	func_884(var_229_float); // 0x124 NEW_2
	GetPFPosition(var_220_cvector); // 0x126 TObjFunc
	GetPFPosition(var_221_cvector); // 0x128 Func
	var_225_cvector = var_220_cvector - var_221_cvector; // 0x12a Sub2
	var_226_float = var_225_cvector | var_225_cvector; // 0x12b Or2
	var_268_float = var_224_float * var_224_float; // 0x12c Mult
	var_269_bool = var_226_float >= var_268_float; // 0x12d GE
	if(var_269_bool == 0) goto Label_318; // 0x12e JumpB
	var_270_bool = 0; var_271_object = Obj(); var_272_float = 0; var_273_float = 0; var_274_bool = 0; var_275_bool = 0; // 0x12f PushV
	var_271_object = var_0_bool; // 0x130 MovT
	var_272_float = var_219_float; // 0x131 Mov
	var_273_float = 3000.0; // 0x132 MovF
	var_274_bool = 1; // 0x133 MovB
	var_275_bool = 0; // 0x134 MovB
	TaskCall(3); // 0x135 TaskCall
	func_924(var_278_bool, var_270_bool, var_271_object, var_272_float, var_273_float, var_274_bool, var_275_bool); // 0x136 NEW_2
	TaskReturn(); // 0x137 TaskReturn
	var_353_bool = var_276_bool == 0; // 0x139 Not
	if(var_353_bool == 0) goto Label_316; // 0x13a JumpB
	goto Label_452; // 0x13b Jump
	
Label_452:
	WaitForAnimEnd(); // 0x1c4 Func
	var_354_int = var_3_int; // 0x1c6 PushT
	if(var_354_int == 0) goto Label_457; // 0x1c7 JumpB
	return 22; // 0x1c8 Return
	
Label_457:
	var_355_string = "all"; // 0x1c9 PushS
	var_356_string = "attack_off"; // 0x1ca PushS
	PlayAnimation(var_355_string, var_356_string); // 0x1cb Func
	WaitForAnimEnd(); // 0x1cd Func
	var_357_bool = var_222_bool; // 0x1cf Push
	if(var_357_bool == 0) goto Label_468; // 0x1d0 JumpB
	var_358_float = 2.0; // 0x1d1 PushF
	Sleep(var_358_float); // 0x1d2 Func
	
Label_468:
	return 22; // 0x1d4 Return
	
Label_316:
	var_223_bool = 0; // 0x13c MovB
	goto Label_451; // 0x13d Jump
	
Label_451:
	goto Label_280; // 0x1c3 Jump
	
Label_318:
	var_359_float = var_207_float * var_207_float; // 0x13e Mult
	var_360_bool = var_226_float >= var_359_float; // 0x13f GE
	if(var_360_bool == 0) goto Label_443; // 0x140 JumpB
	GetPFPosition(var_227_cvector); // 0x141 TObjFunc
	CanReachByPF(var_228_bool, var_227_cvector); // 0x143 Func
	var_361_bool = var_228_bool == 0; // 0x145 Not
	if(var_361_bool == 0) goto Label_342; // 0x146 JumpB
	var_362_bool = 0; var_363_object = Obj(); var_364_float = 0; var_365_float = 0; var_366_bool = 0; var_367_bool = 0; // 0x147 PushV
	var_363_object = var_0_bool; // 0x148 MovT
	var_364_float = var_219_float; // 0x149 Mov
	var_365_float = 3000.0; // 0x14a MovF
	var_366_bool = 1; // 0x14b MovB
	var_367_bool = 0; // 0x14c MovB
	TaskCall(3); // 0x14d TaskCall
	func_924(var_370_bool, var_362_bool, var_363_object, var_364_float, var_365_float, var_366_bool, var_367_bool); // 0x14e NEW_2
	TaskReturn(); // 0x14f TaskReturn
	var_371_bool = var_368_bool == 0; // 0x151 Not
	if(var_371_bool == 0) goto Label_340; // 0x152 JumpB
	goto Label_452; // 0x153 Jump
	
Label_340:
	var_223_bool = 0; // 0x154 MovB
	goto Label_280; // 0x155 Jump
	
Label_342:
	var_372_bool = var_223_bool == 0; // 0x156 Not
	if(var_372_bool == 0) goto Label_367; // 0x157 JumpB
	var_373_object = Obj(); // 0x158 PushV
	var_373_object = var_0_bool; // 0x159 MovT
	func_1872(); // 0x15a NEW_2
	var_382_string = "all"; // 0x15c PushS
	var_383_string = "attack_on"; // 0x15d PushS
	PlayAnimation(var_382_string, var_383_string); // 0x15e Func
	WaitForAnimEnd(); // 0x160 Func
	func_884(var_229_float); // 0x163 NEW_2
	StopAsync(); // 0x165 Func
	var_223_bool = 1; // 0x167 MovB
	var_384_bool = 0; var_385_object = Obj(); // 0x168 PushV
	var_385_object = var_0_bool; // 0x169 MovT
	func_1703(var_384_bool, var_385_object); // 0x16a NEW_2
	var_386_bool = var_384_bool == 0; // 0x16c Not
	if(var_386_bool == 0) goto Label_367; // 0x16d JumpB
	goto Label_452; // 0x16e Jump
	
Label_367:
	rand(var_229_float); // 0x16f Func
	var_387_bool = 0; // 0x171 PushV
	var_387_bool = 1; // 0x172 MovB
	var_388_float = 0.2; // 0x173 PushF
	var_389_bool = var_229_float < var_388_float; // 0x174 LT
	if(var_389_bool == 0) goto Label_379; // 0x175 JumpB
	var_390_bool = 0; // 0x176 PushV
	func_841(var_387_bool, var_390_bool); // 0x177 NEW_2
	if(var_390_bool == 0) goto Label_379; // 0x179 JumpB
	var_387_bool = 0; // 0x17a MovB
	
Label_379:
	if(var_387_bool == 0) goto Label_396; // 0x17b JumpB
	Face(var_0_bool); // 0x17c Func
	func_889(); // 0x17f NEW_2
	var_425_string = "all"; // 0x181 PushS
	var_426_string = "attack_stay"; // 0x182 PushS
	PlayAnimation(var_425_string, var_426_string); // 0x183 Func
	var_427_bool = 0; var_428_float = 0; // 0x185 PushV
	var_428_float = var_207_float; // 0x186 Mov
	func_709(var_229_float, var_427_bool, var_428_float); // 0x187 NEW_2
	StopAsync(); // 0x189 Func
	goto Label_442; // 0x18b Jump
	
Label_442:
	goto Label_451; // 0x1ba Jump
	
Label_396:
	Face(var_0_bool); // 0x18c Func
	var_659_string = "all"; // 0x18e PushS
	var_660_string = "fjump"; // 0x18f PushS
	PlayAnimation(var_659_string, var_660_string); // 0x190 Func
	WaitForAnimEnd(); // 0x192 Func
	func_884(var_229_float); // 0x195 NEW_2
	var_661_cvector = CVector(0.0, 0.0, 0.0); // 0x197 PushVec
	SetSpeed(var_661_cvector); // 0x198 Func
	Stop(); // 0x19a Func
	StopAsync(); // 0x19c Func
	var_662_bool = 0; // 0x19e PushV
	func_841(var_229_float, var_662_bool); // 0x19f NEW_2
	var_663_bool = var_662_bool == 0; // 0x1a1 Not
	if(var_663_bool == 0) goto Label_442; // 0x1a2 JumpB
	var_664_bool = 0; var_665_object = Obj(); // 0x1a3 PushV
	var_665_object = var_0_bool; // 0x1a4 MovT
	func_1703(var_664_bool, var_665_object); // 0x1a5 NEW_2
	var_666_bool = var_664_bool == 0; // 0x1a7 Not
	if(var_666_bool == 0) goto Label_426; // 0x1a8 JumpB
	goto Label_452; // 0x1a9 Jump
	
Label_426:
	GetPFPosition(var_220_cvector); // 0x1aa TObjFunc
	GetPFPosition(var_221_cvector); // 0x1ac Func
	var_225_cvector = var_220_cvector - var_221_cvector; // 0x1ae Sub2
	var_226_float = var_225_cvector | var_225_cvector; // 0x1af Or2
	var_667_float = var_207_float * var_207_float; // 0x1b0 Mult
	var_668_bool = var_226_float < var_667_float; // 0x1b1 LT
	if(var_668_bool == 0) goto Label_442; // 0x1b2 JumpB
	var_669_bool = 0; var_670_float = 0; // 0x1b3 PushV
	var_670_float = var_207_float; // 0x1b4 Mov
	func_543(var_229_float, var_669_bool, var_670_float); // 0x1b5 NEW_2
	var_671_bool = var_669_bool == 0; // 0x1b7 Not
	if(var_671_bool == 0) goto Label_442; // 0x1b8 JumpB
	goto Label_452; // 0x1b9 Jump
	
Label_443:
	var_672_bool = 0; var_673_float = 0; // 0x1bb PushV
	var_673_float = var_207_float; // 0x1bc Mov
	func_543(var_229_float, var_672_bool, var_673_float); // 0x1bd NEW_2
	var_674_bool = var_672_bool == 0; // 0x1bf Not
	if(var_674_bool == 0) goto Label_450; // 0x1c0 JumpB
	goto Label_452; // 0x1c1 Jump
	
Label_450:
	var_223_bool = 1; // 0x1c2 MovB
	
Label_277:
	var_223_bool = 1; // 0x115 MovB
	
Label_254:
	var_219_float = var_207_float; // 0xfe Mov
}


func_752(var_0_bool, var_442_bool)
{
	var_443_cvector = CVector(0,0,0); var_444_cvector = CVector(0,0,0); var_445_cvector = CVector(0,0,0); var_446_float = 0; var_447_float = 0; var_448_cvector = CVector(0,0,0); var_449_cvector = CVector(0,0,0); var_450_cvector = CVector(0,0,0); var_451_float = 0; var_452_float = 0; // 0x2f0 PushV
	var_453_bool = 0; var_454_object = Obj(); // 0x2f1 PushV
	var_454_object = var_0_bool; // 0x2f2 MovT
	func_1703(var_453_bool, var_454_object); // 0x2f3 NEW_2
	var_455_bool = var_453_bool == 0; // 0x2f5 Not
	if(var_455_bool == 0) goto Label_761; // 0x2f6 JumpB
	var_442_bool = 0; // 0x2f7 MovB
	return 10; // 0x2f8 Return
	
Label_761:
	var_456_bool = 0; // 0x2f9 PushV
	func_841(var_452_float, var_456_bool); // 0x2fa NEW_2
	if(var_456_bool == 0) goto Label_778; // 0x2fc JumpB
	GetPFPosition(var_448_cvector); // 0x2fd TObjFunc
	GetPFPosition(var_449_cvector); // 0x2ff Func
	var_450_cvector = var_448_cvector - var_449_cvector; // 0x301 Sub2
	var_451_float = var_450_cvector | var_450_cvector; // 0x302 Or2
	GetAttackDistance(var_452_float); // 0x303 TObjFunc
	var_457_int = 50; // 0x305 PushI
	var_452_float = var_452_float + var_457_int; // 0x306 Add2
	var_458_float = var_452_float * var_452_float; // 0x307 Mult
	var_442_bool = var_451_float <= var_458_float; // 0x308 LE2
	return 10; // 0x309 Return
	
Label_778:
	var_442_bool = 0; // 0x30a MovB
	return 10; // 0x30b Return
}


func_1790(var_14_object, var_15_int, var_16_float)
{
	var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_int = 0; var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_int = 0; var_24_int = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_int = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); // 0x6fe PushV
	var_35_bool = 0; // 0x6ff PushV
	var_35_bool = 0; // 0x700 MovB
	var_36_bool = 0; // 0x701 PushV
	var_36_bool = 0; // 0x702 MovB
	var_37_object = var_14_object; // 0x703 Push
	if(var_37_object == 0) goto Label_1801; // 0x704 JumpB
	var_38_int = 4; // 0x705 PushI
	var_39_bool = var_15_int != var_38_int; // 0x706 Neq
	if(var_39_bool == 0) goto Label_1801; // 0x707 JumpB
	var_36_bool = 1; // 0x708 MovB
	
Label_1801:
	if(var_36_bool == 0) goto Label_1806; // 0x709 JumpB
	var_40_int = 5; // 0x70a PushI
	var_41_bool = var_15_int != var_40_int; // 0x70b Neq
	if(var_41_bool == 0) goto Label_1806; // 0x70c JumpB
	var_35_bool = 1; // 0x70d MovB
	
Label_1806:
	if(var_35_bool == 0) goto Label_1853; // 0x70e JumpB
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x70f PushV
	var_44_cvector = CVector(0,0,0); var_45_object = Obj(); // 0x710 PushV
	var_45_object = var_14_object; // 0x711 Mov
	func_1504(var_45_object); // 0x712 NEW_2
	var_43_cvector = var_44_cvector; // 0x713 Mov
	func_1957(var_42_cvector, var_43_cvector); // 0x715 NEW_2
	var_26_cvector = var_42_cvector; // 0x716 Mov
	CreateVectorVector(var_27_object); // 0x718 Func
	var_28_int = 1; // 0x71a MovI
	
Label_1819:
	var_55_string = "hit"; // 0x71b PushS
	var_56_int = var_55_string + var_28_int; // 0x71c Add
	GetGeometryLocator(var_56_int, var_29_bool, var_30_cvector, var_31_cvector); // 0x71d Func
	var_57_bool = var_29_bool == 0; // 0x71f Not
	if(var_57_bool == 0) goto Label_1826; // 0x720 JumpB
	goto Label_1835; // 0x721 Jump
	
Label_1835:
	size(var_32_int); // 0x72b ObjFunc
	var_58_int = var_32_int; // 0x72d Push
	if(var_58_int == 0) goto Label_1852; // 0x72e JumpB
	irand(var_33_int, var_32_int); // 0x72f Func
	get(var_34_cvector, var_33_int); // 0x731 ObjFunc
	var_59_object = Obj(); var_60_int = 0; var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x733 PushV
	var_59_object = var_14_object; // 0x734 Mov
	var_60_int = var_15_int; // 0x735 Mov
	var_61_float = var_16_float; // 0x736 Mov
	var_62_cvector = var_34_cvector; // 0x737 Mov
	var_63_cvector = -var_26_cvector; // 0x738 Neg2
	func_1858(var_61_float, var_62_cvector, var_63_cvector); // 0x739 NEW_2
	return 18; // 0x73b Return
	
Label_1852:
	var_27_object = 0; // 0x73c SetNull
	
Label_1853:
	var_104_object = Obj(); // 0x73d PushV
	var_104_object = var_14_object; // 0x73e Mov
	func_1746(var_104_object); // 0x73f NEW_2
	return 18; // 0x741 Return
	
Label_1826:
	var_105_int = var_31_cvector | var_26_cvector; // 0x722 Or
	var_106_float = 0.70711; // 0x723 PushF
	var_107_bool = var_105_int >= var_106_float; // 0x724 GE
	if(var_107_bool == 0) goto Label_1832; // 0x725 JumpB
	add(var_30_cvector); // 0x726 ObjFunc
	
Label_1832:
	var_108_int = 1; // 0x728 PushI
	var_28_int = var_28_int + var_108_int; // 0x729 Add2
	goto Label_1819; // 0x72a Jump
}


func_2306(var_30_int, var_31_string)
{
	var_32_int = 0; var_33_int = 0; // 0x902 PushV
	GetInvItemByName(var_33_int, var_31_string); // 0x903 Func
	var_30_int = var_33_int; // 0x905 Mov
	return 2; // 0x906 Return
}


func_2311(var_140_cvector, var_141_cvector, var_142_cvector, var_143_float)
{
	var_144_cvector = CVector(0,0,0); var_145_float = 0; var_146_float = 0; var_147_float = 0; var_148_float = 0; var_149_float = 0; var_150_cvector = CVector(0,0,0); var_151_float = 0; var_152_float = 0; var_153_float = 0; var_154_float = 0; var_155_float = 0; // 0x907 PushV
	var_150_cvector = var_142_cvector - var_141_cvector; // 0x908 Sub2
	var_151_float = 250000; // 0x909 MovI
	var_156_float = GetByIndex(var_150_cvector, 1); // 0x90a PushE
	var_157_int = 1000; // 0x90b PushI
	var_158_float = var_156_float * var_157_int; // 0x90c Mult
	var_159_float = var_143_float * var_143_float; // 0x90d Mult
	var_152_float = var_158_float - var_159_float; // 0x90e Sub2
	var_153_float = var_150_cvector | var_150_cvector; // 0x90f Or2
	var_160_float = 0; var_161_float = 0; var_162_float = 0; var_163_float = 0; // 0x910 PushV
	var_161_float = var_151_float; // 0x911 Mov
	var_162_float = var_152_float; // 0x912 Mov
	var_163_float = var_153_float; // 0x913 Mov
	func_1974(var_160_float, var_161_float, var_162_float, var_163_float); // 0x914 NEW_2
	var_154_float = var_160_float; // 0x915 Mov
	var_168_int = 0; // 0x917 PushI
	var_169_bool = var_154_float < var_168_int; // 0x918 LT
	if(var_169_bool == 0) goto Label_2332; // 0x919 JumpB
	var_155_float = 1; // 0x91a MovI
	goto Label_2340; // 0x91b Jump
	
Label_2340:
	var_170_cvector = CVector(0.0, 500.0, 0.0); // 0x924 PushVec
	var_171_float = var_170_cvector * var_155_float; // 0x925 Mult
	var_172_float = var_171_float * var_155_float; // 0x926 Mult
	var_173_int = var_150_cvector + var_172_float; // 0x927 Add
	var_140_cvector = var_173_int / var_173_int; // 0x928 Div2
	return 12; // 0x929 Return
	
Label_2332:
	var_174_float = 0; var_175_float = 0; var_176_float = 0; var_177_float = 0; var_178_float = 0; // 0x91c PushV
	var_175_float = var_151_float; // 0x91d Mov
	var_176_float = var_152_float; // 0x91e Mov
	var_177_float = var_153_float; // 0x91f Mov
	var_178_float = sqrt(var_154_float); // 0x920 Sqrt2
	func_1981(var_175_float, var_176_float, var_177_float, var_178_float); // 0x921 NEW_2
	var_155_float = sqrt(var_174_float); // 0x923 Sqrt2
}


func_780(var_440_bool)
{
	var_441_bool = 0; // 0x30c PushV
	var_441_bool = 0; // 0x30d MovB
	var_442_bool = 0; // 0x30e PushV
	func_752(var_441_bool, var_442_bool); // 0x30f NEW_2
	if(var_442_bool == 0) goto Label_791; // 0x311 JumpB
	var_459_bool = 0; // 0x312 PushV
	func_796(var_440_bool, var_441_bool, var_459_bool); // 0x313 NEW_2
	if(var_459_bool == 0) goto Label_791; // 0x315 JumpB
	var_441_bool = 1; // 0x316 MovB
	
Label_791:
	if(var_441_bool == 0) goto Label_794; // 0x317 JumpB
	var_440_bool = 1; // 0x318 MovB
	return 0; // 0x319 Return
	
Label_794:
	var_440_bool = 0; // 0x31a MovB
	return 0; // 0x31b Return
}


func_1301(var_54_bool)
{
	var_54_bool = 1; // 0x515 MovB
	return 0; // 0x516 Return
}


func_1303()
{
	StopAnimation(); // 0x517 Func
	StopGroup0(); // 0x519 Func
	return 0; // 0x51b Return
}


func_796(var_0_bool, var_4_bool, var_459_bool)
{
	var_460_object = Obj(); var_461_bool = 0; var_462_float = 0; var_463_cvector = CVector(0,0,0); var_464_cvector = CVector(0,0,0); var_465_object = Obj(); var_466_bool = 0; var_467_float = 0; var_468_cvector = CVector(0,0,0); var_469_cvector = CVector(0,0,0); // 0x31c PushV
	GetScene(var_465_object); // 0x31d Func
	var_466_bool = 0; // 0x31f MovB
	
Label_800:
	var_470_cvector = CVector(0,0,0); var_471_object = Obj(); // 0x320 PushV
	var_471_object = var_0_bool; // 0x321 MovT
	func_1504(var_471_object); // 0x322 NEW_2
	var_476_int = -var_470_cvector; // 0x324 Neg
	FindDirLength(var_467_float, var_476_int, var_467_float); // 0x325 Func
	var_477_bool = var_467_float < var_4_bool; // 0x327 LT
	if(var_477_bool == 0) goto Label_810; // 0x328 JumpB
	goto Label_838; // 0x329 Jump
	
Label_838:
	var_459_bool = var_466_bool; // 0x346 Mov
	return 10; // 0x347 Return
	
Label_810:
	Face(var_0_bool); // 0x32a Func
	var_478_string = "all"; // 0x32c PushS
	var_479_string = "bjump"; // 0x32d PushS
	PlayAnimation(var_478_string, var_479_string); // 0x32e Func
	GetPFPosition(var_468_cvector); // 0x330 TObjFunc
	GetPFPosition(var_469_cvector); // 0x332 Func
	WaitForAnimEnd(); // 0x334 Func
	func_884(var_469_cvector); // 0x337 NEW_2
	StopAsync(); // 0x339 Func
	var_480_cvector = CVector(0.0, 0.0, 0.0); // 0x33b PushVec
	SetSpeed(var_480_cvector); // 0x33c Func
	var_466_bool = 1; // 0x33e MovB
	var_481_bool = 0; // 0x33f PushV
	func_752(var_469_cvector, var_481_bool); // 0x340 NEW_2
	var_482_bool = var_481_bool == 0; // 0x342 Not
	if(var_482_bool == 0) goto Label_837; // 0x343 JumpB
	goto Label_838; // 0x344 Jump
	
Label_837:
	goto Label_800; // 0x345 Jump
}


func_1308(var_58_object)
{
	
Label_1309:
	var_59_bool = 0; var_60_object = Obj(); // 0x51d PushV
	var_60_object = var_58_object; // 0x51e Mov
	TaskCall(0); // 0x51f TaskCall
	func_0(var_54_object, var_58_object, var_59_bool, var_60_object); // 0x520 NEW_2
	TaskReturn(); // 0x521 TaskReturn
	var_689_int = 1; // 0x523 PushI
	Sleep(var_689_int); // 0x524 Func
	goto Label_1309; // 0x526 Jump
}


func_1320(var_12_object)
{
	func_2276(); // 0x52a NEW_2
	func_2252(); // 0x52d NEW_2
	var_75_bool = 0; var_76_object = Obj(); // 0x52f PushV
	var_76_object = var_12_object; // 0x530 Mov
	func_1519(var_75_bool, var_76_object); // 0x531 NEW_2
	if(var_75_bool == 0) goto Label_1337; // 0x533 JumpB
	var_79_bool = 0; var_80_object = Obj(); var_81_float = 0; // 0x534 PushV
	var_80_object = var_12_object; // 0x535 Mov
	var_81_float = 0.02; // 0x536 MovF
	func_2022(var_79_bool, var_80_object, var_81_float); // 0x537 NEW_2
	
Label_1337:
	var_117_object = Obj(); // 0x539 PushV
	var_117_object = var_12_object; // 0x53a Mov
	func_1342(var_117_object); // 0x53b NEW_2
	return 0; // 0x53d Return
}


func_2346(var_52_object)
{
	var_53_object = Obj(); var_54_object = Obj(); // 0x92a PushV
	GetScene(var_54_object); // 0x92b Func
	var_55_object = Obj(); // 0x92d PushV
	func_1951(var_55_object); // 0x92e NEW_2
	RemoveStationaryActor(var_55_object); // 0x930 ObjFunc
	var_58_object = Obj(); // 0x932 PushV
	var_58_object = var_52_object; // 0x933 Mov
	TaskCall(5); // 0x934 TaskCall
	func_1308(var_58_object); // 0x935 NEW_2
	TaskReturn(); // 0x936 TaskReturn
	return 2; // 0x938 Return
}


func_2362()
{
	return 0; // 0x93b Return
}


func_2364(var_13_bool)
{
	var_13_bool = 0; // 0x93d MovB
	return 0; // 0x93e Return
}


func_1342(var_117_object)
{
	EventDisable(0); // 0x53f EventDisable
	var_118_object = Obj(); // 0x540 PushV
	var_118_object = var_117_object; // 0x541 Mov
	func_1367(var_118_object); // 0x542 NEW_2
	var_198_int = 50; // 0x544 PushI
	var_199_int = 40; // 0x545 PushI
	SetRTEnvelope(var_198_int, var_199_int); // 0x546 Func
	EventEnable(0); // 0x548 EventEnable
	
Label_1353:
	Hold(); // 0x549 Func
	goto Label_1353; // 0x54b Jump
}


func_1858(var_16_object, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); // 0x742 PushV
	GetScene(var_23_object); // 0x743 Func
	var_25_string = "scripted"; // 0x745 PushS
	var_26_string = "blood_dir.xml"; // 0x746 PushS
	AddActorByType(var_24_object, var_25_string, var_23_object, var_19_cvector, var_20_cvector, var_26_string); // 0x747 Func
	var_27_object = Obj(); // 0x749 PushV
	var_27_object = var_16_object; // 0x74a Mov
	func_1746(var_27_object); // 0x74b NEW_2
	return 4; // 0x74d Return
}


func_841(var_0_bool, var_390_bool)
{
	var_391_bool = 0; var_392_bool = 0; // 0x349 PushV
	var_393_string = "IsAttacking"; // 0x34a PushS
	var_394_int = 1; // 0x34b PushI
	var_395_bool = IsFuncExist(var_0_bool, var_393_string, var_394_int); // 0x34c FuncExist
	if(var_395_bool == 0) goto Label_850; // 0x34d JumpB
	IsAttacking(var_392_bool); // 0x34e TObjFunc
	var_390_bool = var_392_bool; // 0x350 Mov
	return 2; // 0x351 Return
	
Label_850:
	var_390_bool = 0; // 0x352 MovB
	return 2; // 0x353 Return
}


func_1872()
{
	var_374_cvector = CVector(0,0,0); var_375_cvector = CVector(0,0,0); var_376_cvector = CVector(0,0,0); var_377_cvector = CVector(0,0,0); var_378_cvector = CVector(0,0,0); var_379_cvector = CVector(0,0,0); // 0x750 PushV
	GetPosition(var_377_cvector); // 0x751 ObjFunc
	GetPosition(var_378_cvector); // 0x753 Func
	var_379_cvector = var_377_cvector - var_378_cvector; // 0x755 Sub2
	var_380_float = GetByIndex(var_379_cvector, 0); // 0x756 PushE
	var_381_float = GetByIndex(var_379_cvector, 2); // 0x757 PushE
	RotateAsync(var_380_float, var_381_float); // 0x758 Func
	return 6; // 0x75a Return
}


func_852(var_2_int, var_5_float)
{
	var_503_float = 0; var_504_int = 0; var_505_float = 0; var_506_int = 0; // 0x354 PushV
	var_507_bool = var_2_int == 0; // 0x355 Not
	if(var_507_bool == 0) goto Label_856; // 0x356 JumpB
	return 4; // 0x357 Return
	
Label_856:
	var_508_float = var_5_float; // 0x358 PushT
	if(var_508_float == 0) goto Label_864; // 0x359 JumpB
	var_509_int = -1; // 0x35a PushI
	var_5_float = var_5_float + var_509_int; // 0x35b Add2
	var_510_int = 0; // 0x35c PushI
	var_511_bool = var_5_float > var_510_int; // 0x35d GT
	if(var_511_bool == 0) goto Label_864; // 0x35e JumpB
	return 4; // 0x35f Return
	
Label_864:
	rand(var_505_float); // 0x360 Func
	var_512_float = 0; // 0x362 PushV
	func_898(var_512_float); // 0x363 NEW_2
	var_513_bool = var_505_float < var_512_float; // 0x365 LT
	if(var_513_bool == 0) goto Label_883; // 0x366 JumpB
	irand(var_506_int, var_505_float); // 0x367 Func
	var_514_int = 1; // 0x369 PushI
	var_506_int = var_506_int + var_514_int; // 0x36a Add2
	var_515_string = "attack"; // 0x36b PushS
	var_516_int = var_515_string + var_506_int; // 0x36c Add
	Speak(var_516_int); // 0x36d Func
	var_517_int = 0; // 0x36f PushV
	func_896(var_517_int); // 0x370 NEW_2
	var_5_float = var_517_int; // 0x371 TMov
	
Label_883:
	return 4; // 0x373 Return
}


func_1367(var_118_object)
{
	var_119_cvector = CVector(0,0,0); var_120_cvector = CVector(0,0,0); var_121_cvector = CVector(0,0,0); var_122_cvector = CVector(0,0,0); var_123_string = ""; var_124_object = Obj(); var_125_bool = 0; var_126_bool = 0; var_127_float = 0; var_128_cvector = CVector(0,0,0); var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0); var_131_cvector = CVector(0,0,0); var_132_cvector = CVector(0,0,0); var_133_string = ""; var_134_object = Obj(); var_135_bool = 0; var_136_bool = 0; var_137_float = 0; var_138_cvector = CVector(0,0,0); // 0x557 PushV
	var_139_bool = var_118_object == 0; // 0x558 NullEq
	if(var_139_bool == 0) goto Label_1375; // 0x559 JumpB
	var_140_string = ""; // 0x55a PushV
	var_140_string = "fdie"; // 0x55b MovS
	func_1458(var_140_string); // 0x55c NEW_2
	goto Label_1457; // 0x55e Jump
	
Label_1457:
	return 20; // 0x5b1 Return
	
Label_1375:
	GetPosition(var_129_cvector); // 0x55f ObjFunc
	GetPosition(var_130_cvector); // 0x561 Func
	GetDirection(var_131_cvector); // 0x563 Func
	var_132_cvector = var_130_cvector - var_129_cvector; // 0x565 Sub2
	var_172_float = GetByIndex(var_132_cvector, 0); // 0x566 PushE
	var_173_float = GetByIndex(var_131_cvector, 0); // 0x567 PushE
	var_174_float = var_172_float * var_173_float; // 0x568 Mult
	var_175_float = GetByIndex(var_132_cvector, 2); // 0x569 PushE
	var_176_float = GetByIndex(var_131_cvector, 2); // 0x56a PushE
	var_177_float = var_175_float * var_176_float; // 0x56b Mult
	var_178_int = var_174_float + var_177_float; // 0x56c Add
	var_179_int = 0; // 0x56d PushI
	var_180_bool = var_178_int >= var_179_int; // 0x56e GE
	if(var_180_bool == 0) goto Label_1394; // 0x56f JumpB
	var_133_string = "fdie"; // 0x570 MovS
	goto Label_1395; // 0x571 Jump
	
Label_1395:
	RemoveRTEnvelope(); // 0x573 Func
	SetDeathState(); // 0x575 Func
	Stop(); // 0x577 Func
	StopAsync(); // 0x579 Func
	var_134_object = var_118_object; // 0x57b Mov
	var_181_string = "GetScriptProperty"; // 0x57c PushS
	var_182_int = 2; // 0x57d PushI
	var_183_bool = IsFuncExist(var_118_object, var_181_string, var_182_int); // 0x57e FuncExist
	if(var_183_bool == 0) goto Label_1419; // 0x57f JumpB
	var_184_string = "Owner"; // 0x580 PushS
	HasScriptProperty(var_135_bool, var_184_string); // 0x581 ObjFunc
	var_185_bool = var_135_bool; // 0x583 Push
	if(var_185_bool == 0) goto Label_1419; // 0x584 JumpB
	var_186_string = "Owner"; // 0x585 PushS
	GetScriptProperty(var_134_object, var_186_string); // 0x586 ObjFunc
	var_187_bool = var_134_object == 0; // 0x588 NullEq
	if(var_187_bool == 0) goto Label_1419; // 0x589 JumpB
	var_134_object = var_118_object; // 0x58a Mov
	
Label_1419:
	var_188_string = "@GetEyesHeight"; // 0x58b PushS
	var_189_int = 1; // 0x58c PushI
	var_190_bool = IsFuncExist(var_134_object, var_188_string, var_189_int); // 0x58d FuncExist
	if(var_190_bool == 0) goto Label_1434; // 0x58e JumpB
	GetEyesHeight(var_137_float); // 0x58f ObjFunc
	var_138_cvector = CVector(0.0, 0.0, 0.0); // 0x591 MovV
	var_191_float = GetByIndex(var_138_cvector, 1); // 0x592 PushE
	var_191_float = var_137_float; // 0x593 Mov
	SetByIndex(var_138_cvector, 1) = var_191_float; // 0x594 PopE
	var_192_string = "head"; // 0x595 PushS
	LookAsync(var_118_object, var_192_string, var_138_cvector); // 0x596 Func
	var_136_bool = 1; // 0x598 MovB
	goto Label_1435; // 0x599 Jump
	
Label_1435:
	var_193_string = ""; // 0x59b PushV
	var_193_string = var_133_string; // 0x59c Mov
	func_1910(var_193_string); // 0x59d NEW_2
	var_194_string = "all"; // 0x59f PushS
	PlayAnimation(var_194_string, var_133_string); // 0x5a0 Func
	WaitForAnimEnd(); // 0x5a2 Func
	var_195_bool = var_136_bool; // 0x5a4 Push
	if(var_195_bool == 0) goto Label_1451; // 0x5a5 JumpB
	StopAsync(); // 0x5a6 Func
	var_196_string = "head"; // 0x5a8 PushS
	UnlookAsync(var_196_string); // 0x5a9 Func
	
Label_1451:
	var_197_string = "all"; // 0x5ab PushS
	LockAnimationEnd(var_197_string, var_133_string); // 0x5ac Func
	RemoveEnvelope(); // 0x5ae Func
	var_134_object = 0; // 0x5b0 SetNull
	
Label_1434:
	var_136_bool = 0; // 0x59a MovB
	
Label_1394:
	var_133_string = "bdie"; // 0x572 MovS
}


func_1883(var_25_bool)
{
	var_26_bool = 0; var_27_bool = 0; // 0x75b PushV
	IsLoaded(var_27_bool); // 0x75c Func
	var_25_bool = var_27_bool; // 0x75e Mov
	return 2; // 0x75f Return
}


func_1888(var_287_object)
{
	var_288_float = 0; var_289_cvector = CVector(0,0,0); var_290_float = 0; var_291_cvector = CVector(0,0,0); // 0x760 PushV
	GetEyesHeight(var_290_float); // 0x761 ObjFunc
	var_291_cvector = CVector(0.0, 0.0, 0.0); // 0x763 MovV
	var_292_float = GetByIndex(var_291_cvector, 1); // 0x764 PushE
	var_292_float = var_290_float; // 0x765 Mov
	SetByIndex(var_291_cvector, 1) = var_292_float; // 0x766 PopE
	var_293_string = "head"; // 0x767 PushS
	LookAsync(var_287_object, var_293_string, var_291_cvector); // 0x768 Func
	return 4; // 0x76a Return
}


func_1899(var_37_string, var_38_int, var_39_int)
{
	var_40_bool = 0; var_41_bool = 0; // 0x76b PushV
	var_42_bool = 0; var_43_int = 0; var_44_int = 0; // 0x76c PushV
	var_43_int = var_38_int; // 0x76d Mov
	var_44_int = var_39_int; // 0x76e Mov
	func_2017(var_42_bool, var_43_int, var_44_int); // 0x76f NEW_2
	if(var_42_bool == 0) goto Label_1909; // 0x771 JumpB
	var_47_int = 0; // 0x772 PushI
	AddItem(var_41_bool, var_37_string, var_47_int); // 0x773 Func
	
Label_1909:
	return 2; // 0x775 Return
}


func_884(var_0_bool)
{
	var_267_object = Obj(); // 0x374 PushV
	var_267_object = var_0_bool; // 0x375 MovT
	func_2077(var_267_object); // 0x376 NEW_2
	return 0; // 0x378 Return
}


func_1910(var_141_string)
{
	var_142_bool = 0; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_bool = 0; var_147_float = 0; var_148_cvector = CVector(0,0,0); var_149_cvector = CVector(0,0,0); var_150_bool = 0; var_151_int = 0; var_152_bool = 0; var_153_int = 0; var_154_bool = 0; var_155_float = 0; var_156_cvector = CVector(0,0,0); var_157_cvector = CVector(0,0,0); // 0x776 PushV
	IsExisting3DSound(var_150_bool, var_141_string); // 0x777 Func
	var_158_bool = var_150_bool == 0; // 0x779 Not
	if(var_158_bool == 0) goto Label_1935; // 0x77a JumpB
	var_151_int = 0; // 0x77b MovI
	
Label_1916:
	var_159_int = 1; // 0x77c PushI
	var_160_int = var_151_int + var_159_int; // 0x77d Add
	var_161_int = var_141_string + var_160_int; // 0x77e Add
	IsExisting3DSound(var_152_bool, var_161_int); // 0x77f Func
	var_162_bool = var_152_bool == 0; // 0x781 Not
	if(var_162_bool == 0) goto Label_1924; // 0x782 JumpB
	goto Label_1927; // 0x783 Jump
	
Label_1927:
	var_163_bool = var_151_int == 0; // 0x787 Not
	if(var_163_bool == 0) goto Label_1930; // 0x788 JumpB
	return 16; // 0x789 Return
	
Label_1930:
	irand(var_153_int, var_151_int); // 0x78a Func
	var_164_int = 1; // 0x78c PushI
	var_165_int = var_153_int + var_164_int; // 0x78d Add
	var_141_string = var_141_string + var_165_int; // 0x78e Add2
	
Label_1935:
	Is3DSoundLoaded(var_154_bool, var_141_string); // 0x78f Func
	var_166_bool = var_154_bool; // 0x791 Push
	if(var_166_bool == 0) goto Label_1950; // 0x792 JumpB
	GetEyesHeight(var_155_float); // 0x793 Func
	GetDirection(var_156_cvector); // 0x795 Func
	var_167_int = 50; // 0x797 PushI
	var_157_cvector = var_156_cvector * var_167_int; // 0x798 Mult2
	var_168_float = GetByIndex(var_157_cvector, 1); // 0x799 PushE
	var_168_float = var_168_float + var_155_float; // 0x79a Add2
	SetByIndex(var_157_cvector, 1) = var_168_float; // 0x79b PopE
	PlayGlobalSound(var_141_string, var_157_cvector); // 0x79c Func
	
Label_1950:
	return 16; // 0x79e Return
	
Label_1924:
	var_169_int = 1; // 0x784 PushI
	var_151_int = var_151_int + var_169_int; // 0x785 Add2
	goto Label_1916; // 0x786 Jump
}


func_889()
{
	var_396_string = ""; // 0x379 PushV
	var_396_string = "attack_stay"; // 0x37a MovS
	func_1910(var_396_string); // 0x37b NEW_2
	return 0; // 0x37d Return
}


func_894(var_642_bool)
{
	var_642_bool = 1; // 0x37e MovB
	return 0; // 0x37f Return
}


func_896(var_517_int)
{
	var_517_int = 1; // 0x380 MovI
	return 0; // 0x381 Return
}


func_898(var_512_float)
{
	var_512_float = 0.5; // 0x382 MovF
	return 0; // 0x383 Return
}


func_924(var_2_int, var_270_bool, var_271_object, var_272_float, var_273_float, var_274_bool, var_275_bool)
{
	var_279_bool = 0; var_280_bool = 0; var_281_bool = 0; var_282_bool = 0; // 0x39c PushV
	var_283_object = Obj(); // 0x39d PushV
	var_283_object = var_271_object; // 0x39e Mov
	func_2077(var_283_object); // 0x39f NEW_2
	var_284_int = 1; // 0x3a1 PushI
	var_285_int = 5; // 0x3a2 PushI
	SetTimer(var_284_int, var_285_int); // 0x3a3 Func
	CanSee(var_281_bool, var_271_object); // 0x3a5 Func
	var_286_bool = var_281_bool; // 0x3a7 Push
	if(var_286_bool == 0) goto Label_943; // 0x3a8 JumpB
	var_2_int = 1; // 0x3a9 TMovB
	var_287_object = Obj(); // 0x3aa PushV
	var_287_object = var_271_object; // 0x3ab Mov
	func_1888(var_287_object); // 0x3ac NEW_2
	goto Label_944; // 0x3ae Jump
	
Label_944:
	var_294_bool = 0; var_295_object = Obj(); // 0x3b0 PushV
	var_295_object = var_271_object; // 0x3b1 Mov
	func_1519(var_294_bool, var_295_object); // 0x3b2 NEW_2
	if(var_294_bool == 0) goto Label_954; // 0x3b4 JumpB
	var_298_object = Obj(); // 0x3b5 PushV
	func_1951(var_298_object); // 0x3b6 NEW_2
	SendPlayerEnemy(var_271_object, var_298_object); // 0x3b8 Func
	
Label_954:
	var_299_bool = 0; var_300_object = Obj(); var_301_float = 0; var_302_float = 0; var_303_bool = 0; var_304_bool = 0; // 0x3ba PushV
	var_300_object = var_271_object; // 0x3bb Mov
	var_301_float = var_272_float; // 0x3bc Mov
	var_302_float = var_273_float; // 0x3bd Mov
	var_303_bool = var_274_bool; // 0x3be Mov
	var_304_bool = var_275_bool; // 0x3bf Mov
	func_1029(var_281_bool, var_282_bool, var_299_bool, var_300_object, var_301_float, var_302_float, var_303_bool, var_304_bool); // 0x3c0 NEW_2
	var_282_bool = var_299_bool; // 0x3c1 Mov
	var_350_int = var_2_int; // 0x3c3 PushT
	if(var_350_int == 0) goto Label_968; // 0x3c4 JumpB
	var_351_string = "head"; // 0x3c5 PushS
	UnlookAsync(var_351_string); // 0x3c6 Func
	
Label_968:
	var_352_int = 1; // 0x3c8 PushI
	KillTimer(var_352_int); // 0x3c9 Func
	var_270_bool = var_282_bool; // 0x3cb Mov
	return 4; // 0x3cc Return
	
Label_943:
	var_2_int = 0; // 0x3af TMovB
}


func_1951(var_55_object)
{
	var_56_object = Obj(); var_57_object = Obj(); // 0x79f PushV
	self(var_57_object); // 0x7a0 Func
	var_55_object = var_57_object; // 0x7a2 Mov
	return 2; // 0x7a3 Return
}


func_1957(var_42_cvector, var_43_cvector)
{
	var_50_float = 0; var_51_float = 0; // 0x7a5 PushV
	var_52_int = var_43_cvector | var_43_cvector; // 0x7a6 Or
	var_51_float = sqrt(var_52_int); // 0x7a7 Sqrt2
	var_53_float = 0.0; // 0x7a8 PushF
	var_54_bool = var_51_float < var_53_float; // 0x7a9 LT
	if(var_54_bool == 0) goto Label_1965; // 0x7aa JumpB
	var_42_cvector = CVector(0.0, 0.0, 0.0); // 0x7ab MovV
	return 2; // 0x7ac Return
	
Label_1965:
	var_42_cvector = var_43_cvector / var_43_cvector; // 0x7ad Div2
	return 2; // 0x7ae Return
}


func_1967(var_573_float, var_574_float, var_575_float)
{
	var_578_bool = var_574_float < var_575_float; // 0x7b0 LT
	if(var_578_bool == 0) goto Label_1972; // 0x7b1 JumpB
	var_573_float = var_574_float; // 0x7b2 Mov
	goto Label_1973; // 0x7b3 Jump
	
Label_1973:
	return 0; // 0x7b5 Return
	
Label_1972:
	var_573_float = var_575_float; // 0x7b4 Mov
}


func_1458(var_140_string)
{
	RemoveRTEnvelope(); // 0x5b3 Func
	SetDeathState(); // 0x5b5 Func
	Stop(); // 0x5b7 Func
	StopAsync(); // 0x5b9 Func
	StopSecondaryAnimation(); // 0x5bb Func
	var_141_string = ""; // 0x5bd PushV
	var_141_string = var_140_string; // 0x5be Mov
	func_1910(var_141_string); // 0x5bf NEW_2
	var_170_string = "all"; // 0x5c1 PushS
	PlayAnimation(var_170_string, var_140_string); // 0x5c2 Func
	WaitForAnimEnd(); // 0x5c4 Func
	var_171_string = "all"; // 0x5c6 PushS
	LockAnimationEnd(var_171_string, var_140_string); // 0x5c7 Func
	RemoveEnvelope(); // 0x5c9 Func
	return 0; // 0x5cb Return
}


func_1974(var_160_float, var_161_float, var_162_float, var_163_float)
{
	var_164_float = var_162_float * var_162_float; // 0x7b7 Mult
	var_165_int = 4; // 0x7b8 PushI
	var_166_float = var_165_int * var_161_float; // 0x7b9 Mult
	var_167_float = var_166_float * var_163_float; // 0x7ba Mult
	var_160_float = var_164_float - var_167_float; // 0x7bb Sub2
	return 0; // 0x7bc Return
}


func_1981(var_174_float, var_175_float, var_176_float, var_178_float)
{
	var_179_float = 0; var_180_float = 0; // 0x7bd PushV
	var_181_int = -var_176_float; // 0x7be Neg
	var_182_int = var_181_int - var_178_float; // 0x7bf Sub
	var_183_int = 2; // 0x7c0 PushI
	var_184_float = var_183_int * var_175_float; // 0x7c1 Mult
	var_180_float = var_182_int / var_182_int; // 0x7c2 Div2
	var_185_int = 0; // 0x7c3 PushI
	var_186_bool = var_180_float > var_185_int; // 0x7c4 GT
	if(var_186_bool == 0) goto Label_1992; // 0x7c5 JumpB
	var_174_float = var_180_float; // 0x7c6 Mov
	return 2; // 0x7c7 Return
	
Label_1992:
	var_187_int = -var_176_float; // 0x7c8 Neg
	var_188_int = var_187_int + var_178_float; // 0x7c9 Add
	var_189_int = 2; // 0x7ca PushI
	var_190_float = var_189_int * var_175_float; // 0x7cb Mult
	var_174_float = var_188_int / var_188_int; // 0x7cc Div2
	return 2; // 0x7cd Return
}


func_1998(var_108_float, var_109_float, var_110_float, var_111_float)
{
	var_112_bool = var_109_float < var_110_float; // 0x7cf LT
	if(var_112_bool == 0) goto Label_2003; // 0x7d0 JumpB
	var_108_float = var_110_float; // 0x7d1 Mov
	return 0; // 0x7d2 Return
	
Label_2003:
	var_113_bool = var_109_float > var_111_float; // 0x7d3 GT
	if(var_113_bool == 0) goto Label_2007; // 0x7d4 JumpB
	var_108_float = var_111_float; // 0x7d5 Mov
	return 0; // 0x7d6 Return
	
Label_2007:
	var_108_float = var_109_float; // 0x7d7 Mov
	return 0; // 0x7d8 Return
}


func_1490(var_563_string, var_564_int)
{
	var_565_int = 2; // 0x5d3 PushI
	var_566_bool = var_564_int == var_565_int; // 0x5d4 Eq
	if(var_566_bool == 0) goto Label_1497; // 0x5d5 JumpB
	var_563_string = "fire"; // 0x5d6 MovS
	return 0; // 0x5d7 Return
	
Label_1497:
	var_567_int = 1; // 0x5d9 PushI
	var_568_bool = var_564_int == var_567_int; // 0x5da Eq
	if(var_568_bool == 0) goto Label_1502; // 0x5db JumpB
	var_563_string = "bullet"; // 0x5dc MovS
	return 0; // 0x5dd Return
	
Label_1502:
	var_563_string = "phys"; // 0x5de MovS
	return 0; // 0x5df Return
}


func_469(var_1_object, var_2_int, var_4_bool)
{
	var_230_bool = 0; var_231_bool = 0; var_232_cvector = CVector(0,0,0); var_233_bool = 0; var_234_bool = 0; var_235_cvector = CVector(0,0,0); // 0x1d5 PushV
	var_1_object = 0; // 0x1d6 TMovI
	
Label_471:
	var_236_string = "all"; // 0x1d7 PushS
	var_237_string = "attack_begin"; // 0x1d8 PushS
	var_238_int = 1; // 0x1d9 PushI
	var_239_int = var_1_object + var_238_int; // 0x1da Add
	var_240_int = var_237_string + var_239_int; // 0x1db Add
	HasAnimation(var_233_bool, var_236_string, var_240_int); // 0x1dc Func
	var_241_bool = var_233_bool == 0; // 0x1de Not
	if(var_241_bool == 0) goto Label_481; // 0x1df JumpB
	goto Label_484; // 0x1e0 Jump
	
Label_484:
	var_2_int = 0; // 0x1e4 TMovI
	
Label_485:
	var_242_string = "attack"; // 0x1e5 PushS
	var_243_int = 1; // 0x1e6 PushI
	var_244_int = var_2_int + var_243_int; // 0x1e7 Add
	var_245_int = var_242_string + var_244_int; // 0x1e8 Add
	IsExisting3DSound(var_234_bool, var_245_int); // 0x1e9 Func
	var_246_bool = var_234_bool == 0; // 0x1eb Not
	if(var_246_bool == 0) goto Label_494; // 0x1ec JumpB
	goto Label_497; // 0x1ed Jump
	
Label_497:
	var_247_string = "all"; // 0x1f1 PushS
	var_248_string = "bjump"; // 0x1f2 PushS
	GetAnimationOffset(var_235_cvector, var_247_string, var_248_string); // 0x1f3 Func
	var_249_float = GetByIndex(var_235_cvector, 2); // 0x1f5 PushE
	var_4_bool = -var_249_float; // 0x1f6 Neg2
	return 6; // 0x1f7 Return
	
Label_494:
	var_250_int = 1; // 0x1ee PushI
	var_2_int = var_2_int + var_250_int; // 0x1ef Add2
	goto Label_485; // 0x1f0 Jump
	
Label_481:
	var_251_int = 1; // 0x1e1 PushI
	var_1_object = var_1_object + var_251_int; // 0x1e2 Add2
	goto Label_471; // 0x1e3 Jump
}


func_2009(var_74_bool, var_75_float, var_76_float, var_77_float)
{
	var_74_bool = 0; // 0x7da MovB
	var_78_bool = var_75_float >= var_76_float; // 0x7db GE
	if(var_78_bool == 0) goto Label_2016; // 0x7dc JumpB
	var_79_bool = var_75_float <= var_77_float; // 0x7dd LE
	if(var_79_bool == 0) goto Label_2016; // 0x7de JumpB
	var_74_bool = 1; // 0x7df MovB
	
Label_2016:
	return 0; // 0x7e0 Return
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


func_1504(var_44_cvector)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x5e0 PushV
	GetPosition(var_48_cvector); // 0x5e1 Func
	GetPosition(var_49_cvector); // 0x5e3 ObjFunc
	var_44_cvector = var_49_cvector - var_48_cvector; // 0x5e5 Sub2
	return 4; // 0x5e6 Return
}


func_2017(var_42_bool, var_43_int, var_44_int)
{
	var_45_int = 0; var_46_int = 0; // 0x7e1 PushV
	irand(var_46_int, var_44_int); // 0x7e2 Func
	var_42_bool = var_46_int < var_43_int; // 0x7e4 LT2
	return 2; // 0x7e5 Return
}


func_2022(var_79_bool, var_80_object, var_81_float)
{
	var_82_bool = var_80_object == 0; // 0x7e7 Not
	if(var_82_bool == 0) goto Label_2027; // 0x7e8 JumpB
	var_79_bool = 0; // 0x7e9 MovB
	return 0; // 0x7ea Return
	
Label_2027:
	var_83_int = 0; // 0x7eb PushI
	var_84_bool = var_81_float > var_83_int; // 0x7ec GT
	if(var_84_bool == 0) goto Label_2034; // 0x7ed JumpB
	var_85_int = 8; // 0x7ee PushI
	SendWorldWndMessage(var_85_int); // 0x7ef Func
	goto Label_2043; // 0x7f1 Jump
	
Label_2043:
	var_86_float = 0; // 0x7fb PushV
	var_86_float = var_81_float; // 0x7fc Mov
	func_2067(var_86_float); // 0x7fd NEW_2
	var_90_bool = 0; var_91_object = Obj(); var_92_string = ""; var_93_float = 0; var_94_float = 0; var_95_float = 0; // 0x7ff PushV
	var_91_object = var_80_object; // 0x800 Mov
	var_92_string = "reputation"; // 0x801 MovS
	var_93_float = var_81_float; // 0x802 Mov
	var_94_float = 0; // 0x803 MovI
	var_95_float = 1; // 0x804 MovI
	func_1536(var_90_bool, var_91_object, var_92_string, var_93_float, var_94_float, var_95_float); // 0x805 NEW_2
	var_79_bool = 1; // 0x807 MovB
	return 0; // 0x808 Return
	
Label_2034:
	var_114_int = 0; // 0x7f2 PushI
	var_115_bool = var_81_float < var_114_int; // 0x7f3 LT
	if(var_115_bool == 0) goto Label_2041; // 0x7f4 JumpB
	var_116_int = 9; // 0x7f5 PushI
	SendWorldWndMessage(var_116_int); // 0x7f6 Func
	goto Label_2043; // 0x7f8 Jump
	
Label_2041:
	var_79_bool = 0; // 0x7f9 MovB
	return 0; // 0x7fa Return
}


func_1511(var_66_float)
{
	var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); // 0x5e7 PushV
	GetPosition(var_71_cvector); // 0x5e8 Func
	GetPosition(var_72_cvector); // 0x5ea ObjFunc
	var_73_cvector = var_72_cvector - var_71_cvector; // 0x5ec Sub2
	var_66_float = var_73_cvector | var_73_cvector; // 0x5ed Or2
	return 6; // 0x5ee Return
}


func_1519(var_75_bool, var_76_object)
{
	var_77_bool = 0; var_78_bool = 0; // 0x5ef PushV
	IsPlayerActor(var_76_object, var_78_bool); // 0x5f0 Func
	var_75_bool = var_78_bool; // 0x5f2 Mov
	return 2; // 0x5f3 Return
}


func_1524(var_98_bool, var_99_object, var_100_string)
{
	var_101_bool = 0; var_102_bool = 0; // 0x5f4 PushV
	var_103_string = "HasProperty"; // 0x5f5 PushS
	var_104_int = 2; // 0x5f6 PushI
	var_105_bool = IsFuncExist(var_99_object, var_103_string, var_104_int); // 0x5f7 FuncExist
	var_106_bool = var_105_bool == 0; // 0x5f8 Not
	if(var_106_bool == 0) goto Label_1532; // 0x5f9 JumpB
	var_98_bool = 0; // 0x5fa MovB
	return 2; // 0x5fb Return
	
Label_1532:
	HasProperty(var_100_string, var_102_bool); // 0x5fc ObjFunc
	var_98_bool = var_102_bool; // 0x5fe Mov
	return 2; // 0x5ff Return
}


func_504(var_0_bool, var_521_float, var_522_int)
{
	var_523_object = Obj(); var_524_float = 0; var_525_float = 0; var_526_object = Obj(); var_527_float = 0; var_528_float = 0; // 0x1f8 PushV
	var_529_float = 0.9; // 0x1f9 PushF
	var_530_float = var_521_float * var_529_float; // 0x1fa Mult
	GetVictim(var_530_float, var_526_object); // 0x1fb Func
	ReportAttack(var_0_bool); // 0x1fd Func
	var_531_bool = var_526_object == var_0_bool; // 0x1ff Eq
	if(var_531_bool == 0) goto Label_541; // 0x200 JumpB
	var_532_float = 0; var_533_object = Obj(); var_534_int = 0; // 0x201 PushV
	var_533_object = var_526_object; // 0x202 Mov
	var_534_int = var_522_int; // 0x203 Mov
	func_191(var_534_int); // 0x204 NEW_2
	var_527_float = var_532_float; // 0x205 Mov
	var_535_float = 0; var_536_object = Obj(); var_537_float = 0; var_538_int = 0; // 0x207 PushV
	var_536_object = var_526_object; // 0x208 Mov
	var_537_float = var_527_float; // 0x209 Mov
	var_539_int = 0; var_540_object = Obj(); var_541_int = 0; // 0x20a PushV
	var_540_object = var_526_object; // 0x20b Mov
	var_541_int = var_522_int; // 0x20c Mov
	func_194(var_541_int); // 0x20d NEW_2
	var_538_int = var_539_int; // 0x20e Mov
	func_1558(var_535_float, var_536_object, var_537_float, var_538_int); // 0x210 NEW_2
	var_528_float = var_535_float; // 0x211 Mov
	var_596_int = 0; // 0x213 PushV
	func_197(var_596_int); // 0x214 NEW_2
	ReportHit(var_0_bool, var_596_int, var_528_float, var_527_float); // 0x216 Func
	var_597_object = Obj(); var_598_float = 0; // 0x218 PushV
	var_597_object = var_526_object; // 0x219 Mov
	var_598_float = var_528_float; // 0x21a Mov
	func_199(var_597_object, var_598_float); // 0x21b NEW_2
	
Label_541:
	return 6; // 0x21d Return
}


