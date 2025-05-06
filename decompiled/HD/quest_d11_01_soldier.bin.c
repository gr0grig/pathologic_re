task_0_event_41(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	func_24(); // 0x22 NEW_2
	var_13_object = Obj(); // 0x24 PushV
	var_13_object = var_11_cvector; // 0x25 Mov
	func_1842(); // 0x26 NEW_2
	return 0; // 0x28 Return
}


task_0_event_3(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = var_11_cvector == var_0_object; // 0x2a Eq
	if(var_12_bool == 0) goto Label_49; // 0x2b JumpB
	var_13_int = 100; // 0x2c PushI
	KillTimer(var_13_int); // 0x2d Func
	Face(var_0_object); // 0x2f Func
	
Label_49:
	return 0; // 0x31 Return
}


task_0_event_4(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = var_11_cvector == var_0_object; // 0x33 Eq
	if(var_12_bool == 0) goto Label_61; // 0x34 JumpB
	var_13_int = 100; // 0x35 PushI
	var_14_float = 3.0; // 0x36 PushF
	SetTimer(var_13_int, var_14_float); // 0x37 Func
	var_15_object = Obj(); // 0x39 PushV
	var_15_object = var_0_object; // 0x3a MovT
	func_1506(); // 0x3b NEW_2
	
Label_61:
	return 0; // 0x3d Return
}


	task_0_event_17(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_cvector, var_13_cvector, var_100_object)
	{
	var_101_bool = 0; var_102_object = Obj(); // 0x3f PushV
	var_102_object = var_100_object; // 0x40 Mov
	func_1356(var_101_bool, var_102_object); // 0x41 NEW_2
	var_129_bool = var_101_bool == 0; // 0x43 Not
	if(var_129_bool == 0) goto Label_74; // 0x44 JumpB
	var_130_object = Obj(); // 0x45 PushV
	var_130_object = var_100_object; // 0x46 Mov
	func_2014(var_130_object); // 0x47 NEW_2
	return 0; // 0x49 Return
	
Label_74:
	func_24(); // 0x4b NEW_2
	var_146_object = Obj(); // 0x4d PushV
	var_146_object = var_100_object; // 0x4e Mov
	func_2038(var_146_object); // 0x4f NEW_2
	return 0; // 0x51 Return
	}


task_0_event_30(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_cvector, var_13_cvector)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_bool = 0; // 0x53 PushV
	var_15_object = var_11_object; // 0x54 Mov
	var_16_object = var_12_cvector; // 0x55 Mov
	var_17_bool = var_13_cvector; // 0x56 Mov
	func_2186(var_14_bool, var_15_object, var_16_object, var_17_bool); // 0x57 NEW_2
	if(var_14_bool == 0) goto Label_94; // 0x59 JumpB
	var_100_object = Obj(); // 0x5a PushV
	var_100_object = var_11_object; // 0x5b Mov
	func_62(); // 0x5c NEW_2
	
Label_94:
	return 0; // 0x5e Return
}


task_0_event_1(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x60 PushV
	var_13_object = var_11_cvector; // 0x61 Mov
	func_2158(var_12_bool, var_13_object); // 0x62 NEW_2
	if(var_12_bool == 0) goto Label_108; // 0x64 JumpB
	func_24(); // 0x66 NEW_2
	var_132_object = Obj(); // 0x68 PushV
	var_132_object = var_11_cvector; // 0x69 Mov
	func_2180(var_132_object); // 0x6a NEW_2
	
Label_108:
	return 0; // 0x6c Return
}


task_0_event_7(var_0_object, var_1_int, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_int = 100; // 0x6e PushI
	var_13_bool = var_11_cvector != var_12_int; // 0x6f Neq
	if(var_13_bool == 0) goto Label_114; // 0x70 JumpB
	return 0; // 0x71 Return
	
Label_114:
	var_14_int = 100; // 0x72 PushI
	KillTimer(var_14_int); // 0x73 Func
	StopGroup0(); // 0x75 Func
	return 0; // 0x77 Return
}


	task_1_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_cvector, var_13_cvector, var_100_object)
	{
	var_101_bool = 0; var_102_object = Obj(); // 0xf2 PushV
	var_102_object = var_100_object; // 0xf3 Mov
	func_1356(var_101_bool, var_102_object); // 0xf4 NEW_2
	var_129_bool = var_101_bool == 0; // 0xf6 Not
	if(var_129_bool == 0) goto Label_253; // 0xf7 JumpB
	var_130_object = Obj(); // 0xf8 PushV
	var_130_object = var_100_object; // 0xf9 Mov
	func_2014(var_130_object); // 0xfa NEW_2
	return 0; // 0xfc Return
	
Label_253:
	func_274(); // 0xfe NEW_2
	var_145_object = Obj(); // 0x100 PushV
	var_145_object = var_100_object; // 0x101 Mov
	func_2038(var_145_object); // 0x102 NEW_2
	return 0; // 0x104 Return
	}


task_1_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_cvector, var_13_cvector)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_bool = 0; // 0x106 PushV
	var_15_object = var_11_object; // 0x107 Mov
	var_16_object = var_12_cvector; // 0x108 Mov
	var_17_bool = var_13_cvector; // 0x109 Mov
	func_2186(var_14_bool, var_15_object, var_16_object, var_17_bool); // 0x10a NEW_2
	if(var_14_bool == 0) goto Label_273; // 0x10c JumpB
	var_100_object = Obj(); // 0x10d PushV
	var_100_object = var_11_object; // 0x10e Mov
	func_241(); // 0x10f NEW_2
	
Label_273:
	return 0; // 0x111 Return
}


task_1_event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	func_274(); // 0x11b NEW_2
	var_12_object = Obj(); // 0x11d PushV
	var_12_object = var_11_cvector; // 0x11e Mov
	func_1842(); // 0x11f NEW_2
	return 0; // 0x121 Return
}


task_2_event_3(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; // 0x1b3 PushV
	var_12_bool = 0; // 0x1b4 MovB
	var_13_bool = var_2_bool; // 0x1b5 PushT
	if(var_13_bool == 0) goto Label_442; // 0x1b6 JumpB
	var_14_bool = var_11_cvector == var_0_object; // 0x1b7 Eq
	if(var_14_bool == 0) goto Label_442; // 0x1b8 JumpB
	var_12_bool = 1; // 0x1b9 MovB
	
Label_442:
	if(var_12_bool == 0) goto Label_447; // 0x1ba JumpB
	var_15_object = Obj(); // 0x1bb PushV
	var_15_object = var_0_object; // 0x1bc MovT
	func_1506(); // 0x1bd NEW_2
	
Label_447:
	return 0; // 0x1bf Return
}


task_2_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; // 0x1c1 PushV
	var_12_bool = 0; // 0x1c2 MovB
	var_13_bool = var_2_bool; // 0x1c3 PushT
	if(var_13_bool == 0) goto Label_456; // 0x1c4 JumpB
	var_14_bool = var_11_cvector == var_0_object; // 0x1c5 Eq
	if(var_14_bool == 0) goto Label_456; // 0x1c6 JumpB
	var_12_bool = 1; // 0x1c7 MovB
	
Label_456:
	if(var_12_bool == 0) goto Label_464; // 0x1c8 JumpB
	var_15_string = "@Stop hunt"; // 0x1c9 PushS
	Trace(var_15_string); // 0x1ca Func
	StopAnimation(); // 0x1cc Func
	StopGroup0(); // 0x1ce Func
	
Label_464:
	return 0; // 0x1d0 Return
}


	task_2_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_cvector, var_13_cvector, var_100_object)
	{
	var_101_bool = 0; var_102_object = Obj(); // 0x253 PushV
	var_102_object = var_100_object; // 0x254 Mov
	func_1356(var_101_bool, var_102_object); // 0x255 NEW_2
	var_129_bool = var_101_bool == 0; // 0x257 Not
	if(var_129_bool == 0) goto Label_602; // 0x258 JumpB
	return 0; // 0x259 Return
	
Label_602:
	var_130_object = Obj(); // 0x25a PushV
	var_130_object = var_100_object; // 0x25b Mov
	func_2014(var_130_object); // 0x25c NEW_2
	var_145_bool = var_100_object == var_0_object; // 0x25e Eq
	if(var_145_bool == 0) goto Label_610; // 0x25f JumpB
	var_1_object = 0; // 0x260 SetNullT
	goto Label_617; // 0x261 Jump
	
Label_617:
	return 0; // 0x269 Return
	
Label_610:
	var_1_object = var_100_object; // 0x262 TMov
	var_146_bool = var_2_bool; // 0x263 PushT
	if(var_146_bool == 0) goto Label_617; // 0x264 JumpB
	StopAnimation(); // 0x265 Func
	StopGroup0(); // 0x267 Func
	}


task_2_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_cvector, var_13_cvector)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_bool = 0; // 0x26b PushV
	var_15_object = var_11_object; // 0x26c Mov
	var_16_object = var_12_cvector; // 0x26d Mov
	var_17_bool = var_13_cvector; // 0x26e Mov
	func_2186(var_14_bool, var_15_object, var_16_object, var_17_bool); // 0x26f NEW_2
	if(var_14_bool == 0) goto Label_630; // 0x271 JumpB
	var_100_object = Obj(); // 0x272 PushV
	var_100_object = var_11_object; // 0x273 Mov
	func_594(); // 0x274 NEW_2
	
Label_630:
	return 0; // 0x276 Return
}


task_3_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; var_13_bool = 0; // 0x27b PushV
	IsPlayerActor(var_11_cvector, var_13_bool); // 0x27c Func
	var_14_bool = var_13_bool; // 0x27e Push
	if(var_14_bool == 0) goto Label_656; // 0x27f JumpB
	var_15_bool = 0; // 0x280 PushV
	func_2212(var_15_bool); // 0x281 NEW_2
	if(var_15_bool == 0) goto Label_650; // 0x283 JumpB
	var_20_bool = 0; var_21_string = ""; var_22_string = ""; // 0x284 PushV
	var_21_string = "quest_d11_01"; // 0x285 MovS
	var_22_string = "soldier_attack"; // 0x286 MovS
	func_1760(var_20_bool, var_21_string, var_22_string); // 0x287 NEW_2
	goto Label_656; // 0x289 Jump
	
Label_656:
	return 2; // 0x290 Return
	
Label_650:
	var_26_object = Obj(); // 0x28a PushV
	var_26_object = var_11_cvector; // 0x28b Mov
	TaskCall(4); // 0x28c TaskCall
	func_678(var_26_object); // 0x28d NEW_2
	TaskReturn(); // 0x28e TaskReturn
}


task_3_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; var_13_string = ""; var_14_string = ""; // 0x292 PushV
	var_13_string = "quest_d11_01"; // 0x293 MovS
	var_14_string = "soldier_attack"; // 0x294 MovS
	func_1760(var_12_bool, var_13_string, var_14_string); // 0x295 NEW_2
	return 0; // 0x297 Return
}


task_3_event_26(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_string, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_string = "attack"; // 0x299 PushS
	var_13_bool = var_11_cvector == var_12_string; // 0x29a Eq
	if(var_13_bool == 0) goto Label_677; // 0x29b JumpB
	var_14_object = Obj(); // 0x29c PushV
	var_15_object = Obj(); // 0x29d PushV
	func_1218(var_15_object); // 0x29e NEW_2
	var_14_object = var_15_object; // 0x29f Mov
	TaskCall(6); // 0x2a1 TaskCall
	func_846(var_14_object); // 0x2a2 NEW_2
	TaskReturn(); // 0x2a3 TaskReturn
	
Label_677:
	return 0; // 0x2a5 Return
}


task_4_event_2(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = var_11_cvector == var_0_object; // 0x2b8 Eq
	if(var_12_bool == 0) goto Label_701; // 0x2b9 JumpB
	func_790(var_11_cvector); // 0x2bb NEW_2
	
Label_701:
	return 0; // 0x2bd Return
}


task_4_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; var_13_string = ""; var_14_string = ""; // 0x2bf PushV
	var_13_string = "quest_d11_01"; // 0x2c0 MovS
	var_14_string = "soldier_attack"; // 0x2c1 MovS
	func_1760(var_12_bool, var_13_string, var_14_string); // 0x2c2 NEW_2
	return 0; // 0x2c4 Return
}


task_4_event_26(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_string, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_string = "attack"; // 0x2c6 PushS
	var_13_bool = var_11_cvector == var_12_string; // 0x2c7 Eq
	if(var_13_bool == 0) goto Label_722; // 0x2c8 JumpB
	var_14_object = Obj(); // 0x2c9 PushV
	var_15_object = Obj(); // 0x2ca PushV
	func_1218(var_15_object); // 0x2cb NEW_2
	var_14_object = var_15_object; // 0x2cc Mov
	TaskCall(6); // 0x2ce TaskCall
	func_846(var_14_object); // 0x2cf NEW_2
	TaskReturn(); // 0x2d0 TaskReturn
	
Label_722:
	return 0; // 0x2d2 Return
}


task_5_event_6(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector)
{
	StopAnimation(); // 0x330 Func
	return 0; // 0x332 Return
}


task_5_event_2(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = var_11_cvector == var_0_object; // 0x334 Eq
	if(var_12_bool == 0) goto Label_824; // 0x335 JumpB
	StopAnimation(); // 0x336 Func
	
Label_824:
	return 0; // 0x338 Return
}


task_5_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; var_13_string = ""; var_14_string = ""; // 0x33a PushV
	var_13_string = "quest_d11_01"; // 0x33b MovS
	var_14_string = "soldier_attack"; // 0x33c MovS
	func_1760(var_12_bool, var_13_string, var_14_string); // 0x33d NEW_2
	return 0; // 0x33f Return
}


task_5_event_26(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_string, var_10_cvector, var_11_cvector)
{
	var_12_string = "attack"; // 0x341 PushS
	var_13_bool = var_11_cvector == var_12_string; // 0x342 Eq
	if(var_13_bool == 0) goto Label_845; // 0x343 JumpB
	var_14_object = Obj(); // 0x344 PushV
	var_15_object = Obj(); // 0x345 PushV
	func_1218(var_15_object); // 0x346 NEW_2
	var_14_object = var_15_object; // 0x347 Mov
	TaskCall(6); // 0x349 TaskCall
	func_846(var_14_object); // 0x34a NEW_2
	TaskReturn(); // 0x34b TaskReturn
	
Label_845:
	return 0; // 0x34d Return
}


task_6_event_3(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object)
{
	var_12_bool = 0; var_13_bool = 0; // 0x364 PushV
	var_14_bool = 0; var_15_object = Obj(); // 0x365 PushV
	var_15_object = var_11_object; // 0x366 Mov
	func_1356(var_14_bool, var_15_object); // 0x367 NEW_2
	var_48_bool = var_14_bool == 0; // 0x369 Not
	if(var_48_bool == 0) goto Label_876; // 0x36a JumpB
	return 2; // 0x36b Return
	
Label_876:
	var_49_bool = 0; var_50_object = Obj(); // 0x36c PushV
	var_50_object = var_11_object; // 0x36d Mov
	func_2078(var_49_bool, var_50_object); // 0x36e NEW_2
	var_127_bool = var_49_bool == 0; // 0x370 Not
	if(var_127_bool == 0) goto Label_888; // 0x371 JumpB
	var_128_object = GlobalVars[0]; // 0x372 PushGE
	in(var_13_bool, var_11_object); // 0x373 ObjFunc
	var_129_bool = var_13_bool == 0; // 0x375 Not
	if(var_129_bool == 0) goto Label_888; // 0x376 JumpB
	return 2; // 0x377 Return
	
Label_888:
	func_1029(); // 0x379 NEW_2
	var_130_object = Obj(); // 0x37b PushV
	var_130_object = var_11_object; // 0x37c Mov
	TaskCall(0); // 0x37d TaskCall
	func_0(var_131_object, var_130_object); // 0x37e NEW_2
	TaskReturn(); // 0x37f TaskReturn
	return 2; // 0x381 Return
}


	task_6_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object, var_12_object, var_13_bool, var_100_object)
	{
	var_101_bool = 0; var_102_object = Obj(); // 0x383 PushV
	var_102_object = var_100_object; // 0x384 Mov
	func_1356(var_101_bool, var_102_object); // 0x385 NEW_2
	var_129_bool = var_101_bool == 0; // 0x387 Not
	if(var_129_bool == 0) goto Label_910; // 0x388 JumpB
	var_130_object = Obj(); // 0x389 PushV
	var_130_object = var_100_object; // 0x38a Mov
	func_2014(var_130_object); // 0x38b NEW_2
	return 0; // 0x38d Return
	
Label_910:
	func_1029(); // 0x38f NEW_2
	var_145_object = Obj(); // 0x391 PushV
	var_145_object = var_100_object; // 0x392 Mov
	func_2038(var_145_object); // 0x393 NEW_2
	return 0; // 0x395 Return
	}


task_6_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object, var_12_object, var_13_bool)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_bool = 0; // 0x397 PushV
	var_15_object = var_11_object; // 0x398 Mov
	var_16_object = var_12_object; // 0x399 Mov
	var_17_bool = var_13_bool; // 0x39a Mov
	func_2186(var_14_bool, var_15_object, var_16_object, var_17_bool); // 0x39b NEW_2
	if(var_14_bool == 0) goto Label_930; // 0x39d JumpB
	var_100_object = Obj(); // 0x39e PushV
	var_100_object = var_11_object; // 0x39f Mov
	func_898(); // 0x3a0 NEW_2
	
Label_930:
	return 0; // 0x3a2 Return
}


task_6_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x3a4 PushV
	var_13_object = var_11_object; // 0x3a5 Mov
	func_2158(var_12_bool, var_13_object); // 0x3a6 NEW_2
	if(var_12_bool == 0) goto Label_944; // 0x3a8 JumpB
	func_1029(); // 0x3aa NEW_2
	var_131_object = Obj(); // 0x3ac PushV
	var_131_object = var_11_object; // 0x3ad Mov
	func_2219(var_131_object); // 0x3ae NEW_2
	
Label_944:
	return 0; // 0x3b0 Return
}


task_7_event_0(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object)
{
	var_12_bool = 0; var_13_bool = 0; // 0x420 PushV
	IsOverrideActive(var_13_bool); // 0x421 Func
	var_14_bool = var_13_bool == 0; // 0x423 Not
	if(var_14_bool == 0) goto Label_1065; // 0x424 JumpB
	var_15_object = Obj(); // 0x425 PushV
	var_15_object = var_11_object; // 0x426 Mov
	func_1798(var_15_object); // 0x427 NEW_2
	
Label_1065:
	return 2; // 0x429 Return
}


task_7_event_22(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object, var_12_int, var_13_float, var_14_float)
{
	return 0; // 0x4a0 Return
}


task_7_event_16(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object, var_12_string)
{
	return 0; // 0x4a2 Return
}


task_7_event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object)
{
	return 0; // 0x4a4 Return
}


event_22(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object, var_12_int, var_13_float, var_14_float)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0; // 0x714 PushV
	var_15_object = var_11_object; // 0x715 Mov
	var_16_int = var_12_int; // 0x716 Mov
	var_17_float = var_13_float; // 0x717 Mov
	func_1424(var_15_object, var_16_int, var_17_float); // 0x718 NEW_2
	return 0; // 0x71a Return
}


event_43(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object, var_12_int, var_13_float, var_14_float, var_15_cvector, var_16_cvector)
{
	var_17_object = Obj(); var_18_int = 0; var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); // 0x71c PushV
	var_17_object = var_11_object; // 0x71d Mov
	var_18_int = var_12_int; // 0x71e Mov
	var_19_float = var_13_float; // 0x71f Mov
	var_20_cvector = var_15_cvector; // 0x720 Mov
	var_21_cvector = var_16_cvector; // 0x721 Mov
	func_1492(var_19_float, var_20_cvector, var_21_cvector); // 0x722 NEW_2
	return 0; // 0x724 Return
}


event_16(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object, var_12_string)
{
	var_13_float = 0; var_14_float = 0; // 0x725 PushV
	var_15_string = "health"; // 0x726 PushS
	var_16_bool = var_12_string == var_15_string; // 0x727 Eq
	if(var_16_bool == 0) goto Label_1841; // 0x728 JumpB
	var_17_string = "health"; // 0x729 PushS
	GetProperty(var_17_string, var_14_float); // 0x72a Func
	var_18_int = 0; // 0x72c PushI
	var_19_bool = var_14_float <= var_18_int; // 0x72d LE
	if(var_19_bool == 0) goto Label_1841; // 0x72e JumpB
	SignalDeath(var_11_object); // 0x72f Func
	
Label_1841:
	return 2; // 0x731 Return
}


event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x733 PushV
	var_13_object = var_11_object; // 0x734 Mov
	func_1225(var_12_bool, var_13_object); // 0x735 NEW_2
	if(var_12_bool == 0) goto Label_1855; // 0x737 JumpB
	var_16_object = Obj(); // 0x738 PushV
	func_1663(var_16_object); // 0x739 NEW_2
	var_19_float = 0.05; // 0x73b PushF
	var_20_bool = 1; // 0x73c PushB
	ReportReputationChange(var_11_object, var_16_object, var_19_float, var_20_bool); // 0x73d Func
	
Label_1855:
	var_21_object = Obj(); // 0x73f PushV
	var_21_object = var_11_object; // 0x740 Mov
	func_2225(var_21_object); // 0x741 NEW_2
	return 0; // 0x743 Return
}


main(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector)
{
	
Label_631:
	Hold(); // 0x277 Func
	goto Label_631; // 0x279 Jump
}


func_0(var_0_object, var_130_object)
{
	var_132_bool = 0; var_133_bool = 0; // 0x0 PushV
	var_0_object = var_130_object; // 0x1 TMov
	Face(var_130_object); // 0x2 Func
	
Label_4:
	var_134_float = 0.5; // 0x4 PushF
	Sleep(var_134_float, var_133_bool); // 0x5 Func
	var_135_bool = 0; // 0x7 PushV
	var_135_bool = 1; // 0x8 MovB
	var_136_bool = var_133_bool == 0; // 0x9 Not
	if(var_136_bool == 0) goto Label_18; // 0xa JumpB
	var_137_bool = 0; var_138_object = Obj(); // 0xb PushV
	var_138_object = var_0_object; // 0xc MovT
	func_1356(var_137_bool, var_138_object); // 0xd NEW_2
	var_139_bool = var_137_bool == 0; // 0xf Not
	if(var_139_bool == 0) goto Label_18; // 0x10 JumpB
	var_135_bool = 0; // 0x11 MovB
	
Label_18:
	if(var_135_bool == 0) goto Label_20; // 0x12 JumpB
	goto Label_21; // 0x13 Jump
	
Label_21:
	StopAsync(); // 0x15 Func
	return 2; // 0x17 Return
	
Label_20:
	goto Label_4; // 0x14 Jump
}


func_1792(var_16_int)
{
	var_17_int = 0; var_18_int = 0; // 0x700 PushV
	var_19_string = "branch"; // 0x701 PushS
	GetVariable(var_19_string, var_18_int); // 0x702 Func
	var_16_int = var_18_int; // 0x704 Mov
	return 2; // 0x705 Return
}


func_2049(var_132_object)
{
	var_133_bool = 0; var_134_bool = 0; // 0x801 PushV
	var_135_object = GlobalVars[0]; // 0x802 PushGE
	in(var_134_bool, var_132_object); // 0x803 ObjFunc
	var_136_bool = var_134_bool; // 0x805 Push
	if(var_136_bool == 0) goto Label_2061; // 0x806 JumpB
	var_137_object = Obj(); var_138_bool = 0; // 0x807 PushV
	var_137_object = var_132_object; // 0x808 Mov
	var_138_bool = 1; // 0x809 MovB
	func_2003(var_137_object, var_138_bool); // 0x80a NEW_2
	goto Label_2069; // 0x80c Jump
	
Label_2069:
	return 2; // 0x815 Return
	
Label_2061:
	var_364_object = Obj(); // 0x80d PushV
	var_364_object = var_132_object; // 0x80e Mov
	TaskCall(1); // 0x80f TaskCall
	func_120(var_366_bool, var_364_object); // 0x810 NEW_2
	TaskReturn(); // 0x811 TaskReturn
	ResetAAS(); // 0x813 Func
}


func_2180(var_132_object)
{
	var_133_object = Obj(); // 0x885 PushV
	var_133_object = var_132_object; // 0x886 Mov
	func_2219(var_133_object); // 0x887 NEW_2
	return 0; // 0x889 Return
}


func_1029()
{
	StopGroup0(); // 0x405 Func
	Stop(); // 0x407 Func
	return 0; // 0x409 Return
}


func_1798(var_15_object)
{
	var_16_int = 0; // 0x707 PushV
	func_1792(var_16_int); // 0x708 NEW_2
	var_20_int = 1; // 0x70a PushI
	var_21_bool = var_16_int == var_20_int; // 0x70b Eq
	if(var_21_bool == 0) goto Label_1808; // 0x70c JumpB
	WorkWithCorpse(var_15_object); // 0x70d Func
	goto Label_1810; // 0x70f Jump
	
Label_1810:
	return 0; // 0x712 Return
	
Label_1808:
	Barter(var_15_object); // 0x710 Func
}


func_1157(var_55_string)
{
	RemoveRTEnvelope(); // 0x486 Func
	SetDeathState(); // 0x488 Func
	Stop(); // 0x48a Func
	StopAsync(); // 0x48c Func
	StopSecondaryAnimation(); // 0x48e Func
	var_56_string = ""; // 0x490 PushV
	var_56_string = var_55_string; // 0x491 Mov
	func_1535(var_56_string); // 0x492 NEW_2
	var_85_string = "all"; // 0x494 PushS
	PlayAnimation(var_85_string, var_55_string); // 0x495 Func
	WaitForAnimEnd(); // 0x497 Func
	var_86_string = "all"; // 0x499 PushS
	LockAnimationEnd(var_86_string, var_55_string); // 0x49a Func
	RemoveEnvelope(); // 0x49c Func
	return 0; // 0x49e Return
}


func_1669(var_43_cvector, var_44_cvector)
{
	var_51_float = 0; var_52_float = 0; // 0x685 PushV
	var_53_int = var_44_cvector | var_44_cvector; // 0x686 Or
	var_52_float = sqrt(var_53_int); // 0x687 Sqrt2
	var_54_float = 0.0; // 0x688 PushF
	var_55_bool = var_52_float < var_54_float; // 0x689 LT
	if(var_55_bool == 0) goto Label_1677; // 0x68a JumpB
	var_43_cvector = CVector(0.0, 0.0, 0.0); // 0x68b MovV
	return 2; // 0x68c Return
	
Label_1677:
	var_43_cvector = var_44_cvector / var_44_cvector; // 0x68d Div2
	return 2; // 0x68e Return
}


func_777(var_0_object)
{
	var_53_float = 0; var_54_float = 0; var_55_cvector = CVector(0,0,0); var_56_float = 0; var_57_float = 0; var_58_cvector = CVector(0,0,0); // 0x309 PushV
	GetEyesHeight(var_56_float); // 0x30a Func
	GetEyesHeight(var_57_float); // 0x30c TObjFunc
	var_58_cvector = CVector(0.0, 0.0, 0.0); // 0x30e MovV
	var_59_float = GetByIndex(var_58_cvector, 1); // 0x30f PushE
	var_59_float = var_57_float - var_56_float; // 0x310 Sub2
	SetByIndex(var_58_cvector, 1) = var_59_float; // 0x311 PopE
	var_60_string = "spine"; // 0x312 PushS
	DirLookAsyncRel(var_0_object, var_60_string, var_58_cvector); // 0x313 Func
	return 6; // 0x315 Return
}


func_2186(var_14_bool, var_15_object, var_16_object, var_17_bool)
{
	var_18_bool = 0; var_19_bool = 0; // 0x88a PushV
	var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; // 0x88b PushV
	var_21_object = var_16_object; // 0x88c Mov
	var_22_bool = !var_17_bool; // 0x88d Not2
	func_1860(var_20_bool, var_21_object, var_22_bool); // 0x88e NEW_2
	if(var_20_bool == 0) goto Label_2210; // 0x890 JumpB
	CanSee(var_19_bool, var_15_object); // 0x891 Func
	var_88_bool = 0; // 0x893 PushV
	var_88_bool = 1; // 0x894 MovB
	var_89_bool = var_19_bool; // 0x895 Push
	if(var_89_bool == 0) goto Label_2207; // 0x896 JumpB
	var_90_float = 0; var_91_object = Obj(); // 0x897 PushV
	var_91_object = var_15_object; // 0x898 Mov
	func_1210(var_91_object); // 0x899 NEW_2
	var_98_float = 490000.0; // 0x89b PushF
	var_99_bool = var_90_float <= var_98_float; // 0x89c LE
	if(var_99_bool == 0) goto Label_2207; // 0x89d JumpB
	var_88_bool = 0; // 0x89e MovB
	
Label_2207:
	if(var_88_bool == 0) goto Label_2210; // 0x89f JumpB
	var_14_bool = 1; // 0x8a0 MovB
	return 2; // 0x8a1 Return
	
Label_2210:
	var_14_bool = 0; // 0x8a2 MovB
	return 2; // 0x8a3 Return
}


func_1034()
{
	return 0; // 0x40a Return
}


func_1035(var_31_object)
{
	var_32_object = Obj(); // 0x40c PushV
	var_32_object = var_31_object; // 0x40d Mov
	func_1041(var_32_object); // 0x40e NEW_2
	return 0; // 0x410 Return
}


func_1679(var_315_float, var_316_cvector, var_317_cvector)
{
	var_318_cvector = CVector(0,0,0); var_319_cvector = CVector(0,0,0); // 0x68f PushV
	var_319_cvector = var_317_cvector - var_316_cvector; // 0x690 Sub2
	var_315_float = var_319_cvector | var_319_cvector; // 0x691 Or2
	return 2; // 0x692 Return
}


func_1424(var_15_object, var_16_int, var_17_float)
{
	var_18_cvector = CVector(0,0,0); var_19_object = Obj(); var_20_int = 0; var_21_bool = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_int = 0; var_25_int = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_object = Obj(); var_29_int = 0; var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_int = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); // 0x590 PushV
	var_36_bool = 0; // 0x591 PushV
	var_36_bool = 0; // 0x592 MovB
	var_37_bool = 0; // 0x593 PushV
	var_37_bool = 0; // 0x594 MovB
	var_38_object = var_15_object; // 0x595 Push
	if(var_38_object == 0) goto Label_1435; // 0x596 JumpB
	var_39_int = 4; // 0x597 PushI
	var_40_bool = var_16_int != var_39_int; // 0x598 Neq
	if(var_40_bool == 0) goto Label_1435; // 0x599 JumpB
	var_37_bool = 1; // 0x59a MovB
	
Label_1435:
	if(var_37_bool == 0) goto Label_1440; // 0x59b JumpB
	var_41_int = 5; // 0x59c PushI
	var_42_bool = var_16_int != var_41_int; // 0x59d Neq
	if(var_42_bool == 0) goto Label_1440; // 0x59e JumpB
	var_36_bool = 1; // 0x59f MovB
	
Label_1440:
	if(var_36_bool == 0) goto Label_1487; // 0x5a0 JumpB
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0x5a1 PushV
	var_45_cvector = CVector(0,0,0); var_46_object = Obj(); // 0x5a2 PushV
	var_46_object = var_15_object; // 0x5a3 Mov
	func_1203(var_46_object); // 0x5a4 NEW_2
	var_44_cvector = var_45_cvector; // 0x5a5 Mov
	func_1669(var_43_cvector, var_44_cvector); // 0x5a7 NEW_2
	var_27_cvector = var_43_cvector; // 0x5a8 Mov
	CreateVectorVector(var_28_object); // 0x5aa Func
	var_29_int = 1; // 0x5ac MovI
	
Label_1453:
	var_56_string = "hit"; // 0x5ad PushS
	var_57_int = var_56_string + var_29_int; // 0x5ae Add
	GetGeometryLocator(var_57_int, var_30_bool, var_31_cvector, var_32_cvector); // 0x5af Func
	var_58_bool = var_30_bool == 0; // 0x5b1 Not
	if(var_58_bool == 0) goto Label_1460; // 0x5b2 JumpB
	goto Label_1469; // 0x5b3 Jump
	
Label_1469:
	size(var_33_int); // 0x5bd ObjFunc
	var_59_int = var_33_int; // 0x5bf Push
	if(var_59_int == 0) goto Label_1486; // 0x5c0 JumpB
	irand(var_34_int, var_33_int); // 0x5c1 Func
	get(var_35_cvector, var_34_int); // 0x5c3 ObjFunc
	var_60_object = Obj(); var_61_int = 0; var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); // 0x5c5 PushV
	var_60_object = var_15_object; // 0x5c6 Mov
	var_61_int = var_16_int; // 0x5c7 Mov
	var_62_float = var_17_float; // 0x5c8 Mov
	var_63_cvector = var_35_cvector; // 0x5c9 Mov
	var_64_cvector = -var_27_cvector; // 0x5ca Neg2
	func_1492(var_62_float, var_63_cvector, var_64_cvector); // 0x5cb NEW_2
	return 18; // 0x5cd Return
	
Label_1486:
	var_28_object = 0; // 0x5ce SetNull
	
Label_1487:
	var_105_object = Obj(); // 0x5cf PushV
	var_105_object = var_15_object; // 0x5d0 Mov
	func_1380(var_105_object); // 0x5d1 NEW_2
	return 18; // 0x5d3 Return
	
Label_1460:
	var_106_int = var_32_cvector | var_27_cvector; // 0x5b4 Or
	var_107_float = 0.70711; // 0x5b5 PushF
	var_108_bool = var_106_int >= var_107_float; // 0x5b6 GE
	if(var_108_bool == 0) goto Label_1466; // 0x5b7 JumpB
	add(var_31_cvector); // 0x5b8 ObjFunc
	
Label_1466:
	var_109_int = 1; // 0x5ba PushI
	var_29_int = var_29_int + var_109_int; // 0x5bb Add2
	goto Label_1453; // 0x5bc Jump
}


func_1041(var_32_object)
{
	EventDisable(0); // 0x412 EventDisable
	var_33_object = Obj(); // 0x413 PushV
	var_33_object = var_32_object; // 0x414 Mov
	func_1066(var_33_object); // 0x415 NEW_2
	var_113_int = 50; // 0x417 PushI
	var_114_int = 40; // 0x418 PushI
	SetRTEnvelope(var_113_int, var_114_int); // 0x419 Func
	EventEnable(0); // 0x41b EventEnable
	
Label_1052:
	Hold(); // 0x41c Func
	goto Label_1052; // 0x41e Jump
}


func_274()
{
	StopAsync(); // 0x112 Func
	StopGroup0(); // 0x114 Func
	Stop(); // 0x116 Func
	return 0; // 0x118 Return
}


func_1683(var_290_float, var_291_float, var_292_float)
{
	var_295_bool = var_291_float < var_292_float; // 0x694 LT
	if(var_295_bool == 0) goto Label_1688; // 0x695 JumpB
	var_290_float = var_291_float; // 0x696 Mov
	goto Label_1689; // 0x697 Jump
	
Label_1689:
	return 0; // 0x699 Return
	
Label_1688:
	var_290_float = var_292_float; // 0x698 Mov
}


func_2070(var_375_bool, var_376_object)
{
	var_377_float = 0; var_378_object = Obj(); // 0x817 PushV
	var_378_object = var_376_object; // 0x818 Mov
	func_1210(var_378_object); // 0x819 NEW_2
	var_385_float = 40000.0; // 0x81b PushF
	var_375_bool = var_377_float <= var_385_float; // 0x81c LE2
	return 0; // 0x81d Return
}


func_790(var_1_object)
{
	StopGroup0(); // 0x316 Func
	var_1_object = 1; // 0x318 TMovB
	return 0; // 0x319 Return
}


func_24()
{
	StopAsync(); // 0x18 Func
	var_131_int = 100; // 0x1a PushI
	KillTimer(var_131_int); // 0x1b Func
	StopGroup0(); // 0x1d Func
	return 0; // 0x1f Return
}


func_794(var_0_object, var_29_bool, var_30_object)
{
	var_32_bool = 0; var_33_bool = 0; // 0x31a PushV
	var_0_object = var_30_object; // 0x31b TMov
	var_34_object = Obj(); // 0x31c PushV
	var_34_object = var_0_object; // 0x31d MovT
	func_1506(); // 0x31e NEW_2
	var_43_string = "all"; // 0x320 PushS
	var_44_string = "attack_on"; // 0x321 PushS
	PlayAnimation(var_43_string, var_44_string); // 0x322 Func
	WaitForAnimEnd(var_33_bool); // 0x324 Func
	var_45_bool = var_33_bool == 0; // 0x326 Not
	if(var_45_bool == 0) goto Label_810; // 0x327 JumpB
	var_29_bool = 0; // 0x328 MovB
	return 2; // 0x329 Return
	
Label_810:
	var_46_string = "all"; // 0x32a PushS
	var_47_string = "attack_on"; // 0x32b PushS
	LockAnimationEnd(var_46_string, var_47_string); // 0x32c Func
	var_29_bool = 1; // 0x32e MovB
	return 2; // 0x32f Return
}


func_1690(var_300_float, var_301_float, var_302_float, var_303_float)
{
	var_304_bool = var_301_float < var_302_float; // 0x69b LT
	if(var_304_bool == 0) goto Label_1695; // 0x69c JumpB
	var_300_float = var_302_float; // 0x69d Mov
	return 0; // 0x69e Return
	
Label_1695:
	var_305_bool = var_301_float > var_303_float; // 0x69f GT
	if(var_305_bool == 0) goto Label_1699; // 0x6a0 JumpB
	var_300_float = var_303_float; // 0x6a1 Mov
	return 0; // 0x6a2 Return
	
Label_1699:
	var_300_float = var_301_float; // 0x6a3 Mov
	return 0; // 0x6a4 Return
}


func_2078(var_53_bool, var_54_object)
{
	var_55_float = 0; var_56_string = ""; var_57_float = 0; var_58_float = 0; var_59_string = ""; var_60_float = 0; // 0x81e PushV
	var_61_bool = 0; var_62_object = Obj(); // 0x81f PushV
	var_62_object = var_54_object; // 0x820 Mov
	func_1356(var_61_bool, var_62_object); // 0x821 NEW_2
	var_63_bool = var_61_bool == 0; // 0x823 Not
	if(var_63_bool == 0) goto Label_2087; // 0x824 JumpB
	var_53_bool = 0; // 0x825 MovB
	return 6; // 0x826 Return
	
Label_2087:
	var_64_bool = 0; var_65_object = Obj(); // 0x827 PushV
	var_65_object = var_54_object; // 0x828 Mov
	func_1225(var_64_bool, var_65_object); // 0x829 NEW_2
	if(var_64_bool == 0) goto Label_2098; // 0x82b JumpB
	var_68_string = "reputation"; // 0x82c PushS
	GetProperty(var_68_string, var_58_float); // 0x82d ObjFunc
	var_69_float = 0.33; // 0x82f PushF
	var_53_bool = var_58_float < var_69_float; // 0x830 LT2
	return 6; // 0x831 Return
	
Label_2098:
	var_70_bool = 0; var_71_object = Obj(); var_72_string = ""; // 0x832 PushV
	var_71_object = var_54_object; // 0x833 Mov
	var_72_string = "class"; // 0x834 MovS
	func_1230(var_70_bool, var_71_object, var_72_string); // 0x835 NEW_2
	var_73_bool = var_70_bool == 0; // 0x837 Not
	if(var_73_bool == 0) goto Label_2107; // 0x838 JumpB
	var_53_bool = 0; // 0x839 MovB
	return 6; // 0x83a Return
	
Label_2107:
	var_74_string = "class"; // 0x83b PushS
	GetProperty(var_74_string, var_59_string); // 0x83c ObjFunc
	var_75_bool = 0; // 0x83e PushV
	var_75_bool = 1; // 0x83f MovB
	var_76_bool = 0; // 0x840 PushV
	var_76_bool = 1; // 0x841 MovB
	var_77_string = "bomber"; // 0x842 PushS
	var_78_bool = var_59_string == var_77_string; // 0x843 Eq
	if(var_78_bool == 0) goto Label_2121; // 0x844 JumpB
	var_79_string = "hunter"; // 0x845 PushS
	var_80_bool = var_59_string == var_79_string; // 0x846 Eq
	if(var_80_bool == 0) goto Label_2121; // 0x847 JumpB
	var_76_bool = 0; // 0x848 MovB
	
Label_2121:
	if(var_76_bool == 0) goto Label_2126; // 0x849 JumpB
	var_81_string = "grabitel"; // 0x84a PushS
	var_82_bool = var_59_string == var_81_string; // 0x84b Eq
	if(var_82_bool == 0) goto Label_2126; // 0x84c JumpB
	var_75_bool = 0; // 0x84d MovB
	
Label_2126:
	if(var_75_bool == 0) goto Label_2129; // 0x84e JumpB
	var_53_bool = 1; // 0x84f MovB
	return 6; // 0x850 Return
	
Label_2129:
	var_83_bool = 0; var_84_object = Obj(); var_85_string = ""; // 0x851 PushV
	var_84_object = var_54_object; // 0x852 Mov
	var_85_string = "disease"; // 0x853 MovS
	func_1230(var_83_bool, var_84_object, var_85_string); // 0x854 NEW_2
	var_86_bool = var_83_bool == 0; // 0x856 Not
	if(var_86_bool == 0) goto Label_2138; // 0x857 JumpB
	var_53_bool = 0; // 0x858 MovB
	return 6; // 0x859 Return
	
Label_2138:
	var_87_bool = 0; // 0x85a PushV
	var_87_bool = 1; // 0x85b MovB
	var_88_bool = 0; var_89_string = ""; // 0x85c PushV
	var_89_string = var_59_string; // 0x85d Mov
	func_1576(var_88_bool, var_89_string); // 0x85e NEW_2
	if(var_88_bool == 0) goto Label_2149; // 0x860 JumpB
	var_127_string = "dog"; // 0x861 PushS
	var_128_bool = var_59_string == var_127_string; // 0x862 Eq
	if(var_128_bool == 0) goto Label_2149; // 0x863 JumpB
	var_87_bool = 0; // 0x864 MovB
	
Label_2149:
	if(var_87_bool == 0) goto Label_2156; // 0x865 JumpB
	var_129_string = "disease"; // 0x866 PushS
	GetProperty(var_129_string, var_60_float); // 0x867 ObjFunc
	var_130_int = 0; // 0x869 PushI
	var_53_bool = var_60_float > var_130_int; // 0x86a GT2
	return 6; // 0x86b Return
	
Label_2156:
	var_53_bool = 0; // 0x86c MovB
	return 6; // 0x86d Return
}


func_290(var_0_object, var_1_object, var_2_bool, var_139_object, var_140_bool)
{
	var_144_bool = 0; var_145_bool = 0; var_146_bool = 0; var_147_bool = 0; // 0x122 PushV
	var_0_object = var_139_object; // 0x123 TMov
	var_148_object = Obj(); // 0x124 PushV
	var_148_object = var_0_object; // 0x125 MovT
	func_1772(var_148_object); // 0x126 NEW_2
	func_1781(); // 0x129 NEW_2
	Face(var_0_object); // 0x12b Func
	var_159_bool = var_140_bool; // 0x12d Push
	if(var_159_bool == 0) goto Label_309; // 0x12e JumpB
	var_160_string = "all"; // 0x12f PushS
	var_161_string = "attack_on"; // 0x130 PushS
	PlayAnimation(var_160_string, var_161_string); // 0x131 Func
	WaitForAnimEnd(); // 0x133 Func
	
Label_309:
	var_162_string = "all"; // 0x135 PushS
	var_163_string = "attack_on"; // 0x136 PushS
	LockAnimationEnd(var_162_string, var_163_string); // 0x137 Func
	var_164_bool = 1; // 0x139 PushB
	SetAttackState(var_164_bool); // 0x13a Func
	
Label_316:
	var_165_bool = 0; var_166_object = Obj(); // 0x13c PushV
	var_166_object = var_0_object; // 0x13d MovT
	func_1356(var_165_bool, var_166_object); // 0x13e NEW_2
	if(var_165_bool == 0) goto Label_422; // 0x140 JumpB
	CanSee(var_147_bool, var_0_object); // 0x141 Func
	var_167_bool = var_147_bool; // 0x143 Push
	if(var_167_bool == 0) goto Label_333; // 0x144 JumpB
	var_168_object = Obj(); // 0x145 PushV
	var_168_object = var_0_object; // 0x146 MovT
	func_1772(var_168_object); // 0x147 NEW_2
	func_470(var_147_bool); // 0x14a NEW_2
	goto Label_412; // 0x14c Jump
	
Label_412:
	var_329_bool = var_1_object != 0; // 0x19c NullNeq
	if(var_329_bool == 0) goto Label_418; // 0x19d JumpB
	func_465(var_146_bool, var_147_bool); // 0x19f NEW_2
	goto Label_421; // 0x1a1 Jump
	
Label_421:
	goto Label_316; // 0x1a5 Jump
	
Label_418:
	var_330_int = 2; // 0x1a2 PushI
	Sleep(var_330_int); // 0x1a3 Func
	
Label_333:
	var_331_object = Obj(); // 0x14d PushV
	var_331_object = var_0_object; // 0x14e MovT
	func_1506(); // 0x14f NEW_2
	var_2_bool = 1; // 0x151 TMovB
	var_340_string = "all"; // 0x152 PushS
	var_341_string = "hunt"; // 0x153 PushS
	PlayAnimation(var_340_string, var_341_string); // 0x154 Func
	WaitForAnimEnd(var_146_bool); // 0x156 Func
	var_342_bool = var_146_bool == 0; // 0x158 Not
	if(var_342_bool == 0) goto Label_356; // 0x159 JumpB
	var_343_bool = var_1_object != 0; // 0x15a NullNeq
	if(var_343_bool == 0) goto Label_351; // 0x15b JumpB
	func_465(var_146_bool, var_147_bool); // 0x15d NEW_2
	
Label_351:
	var_344_string = "all"; // 0x15f PushS
	var_345_string = "attack_on"; // 0x160 PushS
	LockAnimationEnd(var_344_string, var_345_string); // 0x161 Func
	goto Label_316; // 0x163 Jump
	
Label_356:
	var_346_bool = 0; var_347_object = Obj(); // 0x164 PushV
	var_347_object = var_0_object; // 0x165 MovT
	func_1356(var_346_bool, var_347_object); // 0x166 NEW_2
	var_348_bool = var_346_bool == 0; // 0x168 Not
	if(var_348_bool == 0) goto Label_363; // 0x169 JumpB
	goto Label_422; // 0x16a Jump
	
Label_422:
	var_349_bool = 0; // 0x1a6 PushB
	SetAttackState(var_349_bool); // 0x1a7 Func
	StopAsync(); // 0x1a9 Func
	var_350_string = "all"; // 0x1ab PushS
	var_351_string = "attack_off"; // 0x1ac PushS
	PlayAnimation(var_350_string, var_351_string); // 0x1ad Func
	WaitForAnimEnd(); // 0x1af Func
	return 4; // 0x1b1 Return
	
Label_363:
	CanSee(var_147_bool, var_0_object); // 0x16b Func
	var_352_bool = var_147_bool; // 0x16d Push
	if(var_352_bool == 0) goto Label_374; // 0x16e JumpB
	var_2_bool = 0; // 0x16f TMovB
	Face(var_0_object); // 0x170 Func
	func_470(var_147_bool); // 0x173 NEW_2
	goto Label_412; // 0x175 Jump
	
Label_374:
	var_353_string = "all"; // 0x176 PushS
	var_354_string = "attack_on"; // 0x177 PushS
	LockAnimationEnd(var_353_string, var_354_string); // 0x178 Func
	var_355_int = 3; // 0x17a PushI
	Sleep(var_355_int, var_146_bool); // 0x17b Func
	var_356_bool = var_146_bool == 0; // 0x17d Not
	if(var_356_bool == 0) goto Label_393; // 0x17e JumpB
	var_357_bool = var_1_object != 0; // 0x17f NullNeq
	if(var_357_bool == 0) goto Label_388; // 0x180 JumpB
	func_465(var_146_bool, var_147_bool); // 0x182 NEW_2
	
Label_388:
	var_358_string = "all"; // 0x184 PushS
	var_359_string = "attack_on"; // 0x185 PushS
	LockAnimationEnd(var_358_string, var_359_string); // 0x186 Func
	goto Label_316; // 0x188 Jump
	
Label_393:
	var_360_bool = 0; var_361_object = Obj(); // 0x189 PushV
	var_361_object = var_0_object; // 0x18a MovT
	func_1356(var_360_bool, var_361_object); // 0x18b NEW_2
	var_362_bool = var_360_bool == 0; // 0x18d Not
	if(var_362_bool == 0) goto Label_400; // 0x18e JumpB
	goto Label_422; // 0x18f Jump
	
Label_400:
	var_2_bool = 0; // 0x190 TMovB
	CanSee(var_147_bool, var_0_object); // 0x191 Func
	var_363_bool = var_147_bool; // 0x193 Push
	if(var_363_bool == 0) goto Label_411; // 0x194 JumpB
	Face(var_0_object); // 0x195 Func
	func_470(var_147_bool); // 0x198 NEW_2
	goto Label_412; // 0x19a Jump
	
Label_411:
	goto Label_422; // 0x19b Jump
}


func_1315(var_31_bool)
{
	var_33_bool = 0; var_34_bool = 0; // 0x523 PushV
	IsDead(var_34_bool); // 0x524 ObjFunc
	var_31_bool = var_34_bool; // 0x526 Mov
	return 2; // 0x527 Return
}


func_2212(var_15_bool)
{
	var_16_int = 0; var_17_int = 0; // 0x8a4 PushV
	var_18_string = "d11q01SoldierAttack"; // 0x8a5 PushS
	GetVariable(var_18_string, var_17_int); // 0x8a6 Func
	var_19_int = 0; // 0x8a8 PushI
	var_15_bool = var_17_int != var_19_int; // 0x8a9 Neq2
	return 2; // 0x8aa Return
}


func_1189(var_280_string, var_281_int)
{
	var_282_int = 2; // 0x4a6 PushI
	var_283_bool = var_281_int == var_282_int; // 0x4a7 Eq
	if(var_283_bool == 0) goto Label_1196; // 0x4a8 JumpB
	var_280_string = "fire"; // 0x4a9 MovS
	return 0; // 0x4aa Return
	
Label_1196:
	var_284_int = 1; // 0x4ac PushI
	var_285_bool = var_281_int == var_284_int; // 0x4ad Eq
	if(var_285_bool == 0) goto Label_1201; // 0x4ae JumpB
	var_280_string = "bullet"; // 0x4af MovS
	return 0; // 0x4b0 Return
	
Label_1201:
	var_280_string = "phys"; // 0x4b1 MovS
	return 0; // 0x4b2 Return
}


func_678(var_26_object)
{
	var_29_bool = 0; var_30_object = Obj(); // 0x2a7 PushV
	var_30_object = var_26_object; // 0x2a8 Mov
	TaskCall(5); // 0x2a9 TaskCall
	func_794(var_31_object, var_29_bool, var_30_object); // 0x2aa NEW_2
	TaskReturn(); // 0x2ab TaskReturn
	if(var_31_object == 0) goto Label_694; // 0x2ad JumpB
	var_48_object = Obj(); // 0x2ae PushV
	var_48_object = var_26_object; // 0x2af Mov
	func_728(var_28_bool, var_26_object, var_48_object); // 0x2b0 NEW_2
	var_143_string = "all"; // 0x2b2 PushS
	var_144_string = "attack_off"; // 0x2b3 PushS
	PlayAnimation(var_143_string, var_144_string); // 0x2b4 Func
	
Label_694:
	return 0; // 0x2b6 Return
}


func_1701(var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj(); // 0x6a5 PushV
	CreateObjectSet(var_24_object); // 0x6a6 Func
	var_22_object = var_24_object; // 0x6a8 Mov
	return 2; // 0x6a9 Return
}


func_1320(var_20_bool, var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); // 0x528 PushV
	var_26_bool = var_21_object == 0; // 0x529 NullEq
	if(var_26_bool == 0) goto Label_1325; // 0x52a JumpB
	var_20_bool = 0; // 0x52b MovB
	return 4; // 0x52c Return
	
Label_1325:
	var_27_bool = 0; // 0x52d PushV
	var_27_bool = 0; // 0x52e MovB
	var_28_string = "IsDead"; // 0x52f PushS
	var_29_int = 1; // 0x530 PushI
	var_30_bool = IsFuncExist(var_21_object, var_28_string, var_29_int); // 0x531 FuncExist
	if(var_30_bool == 0) goto Label_1337; // 0x532 JumpB
	var_31_bool = 0; var_32_object = Obj(); // 0x533 PushV
	var_32_object = var_21_object; // 0x534 Mov
	func_1315(var_32_object); // 0x535 NEW_2
	if(var_31_bool == 0) goto Label_1337; // 0x537 JumpB
	var_27_bool = 1; // 0x538 MovB
	
Label_1337:
	if(var_27_bool == 0) goto Label_1340; // 0x539 JumpB
	var_20_bool = 0; // 0x53a MovB
	return 4; // 0x53b Return
	
Label_1340:
	GetScene(var_24_object); // 0x53c Func
	var_35_bool = var_24_object == 0; // 0x53e NullEq
	if(var_35_bool == 0) goto Label_1346; // 0x53f JumpB
	var_20_bool = 0; // 0x540 MovB
	return 4; // 0x541 Return
	
Label_1346:
	GetScene(var_25_object); // 0x542 ObjFunc
	var_36_bool = var_24_object != var_25_object; // 0x544 Neq
	if(var_36_bool == 0) goto Label_1352; // 0x545 JumpB
	var_20_bool = 0; // 0x546 MovB
	return 4; // 0x547 Return
	
Label_1352:
	var_20_bool = 1; // 0x548 MovB
	return 4; // 0x549 Return
}


func_1576(var_88_bool, var_89_string)
{
	var_88_bool = 1; // 0x629 MovB
	var_90_bool = 0; // 0x62a PushV
	var_90_bool = 1; // 0x62b MovB
	var_91_bool = 0; // 0x62c PushV
	var_91_bool = 1; // 0x62d MovB
	var_92_bool = 0; // 0x62e PushV
	var_92_bool = 1; // 0x62f MovB
	var_93_bool = 0; // 0x630 PushV
	var_93_bool = 1; // 0x631 MovB
	var_94_bool = 0; // 0x632 PushV
	var_94_bool = 1; // 0x633 MovB
	var_95_bool = 0; // 0x634 PushV
	var_95_bool = 1; // 0x635 MovB
	var_96_bool = 0; // 0x636 PushV
	var_96_bool = 1; // 0x637 MovB
	var_97_bool = 0; // 0x638 PushV
	var_97_bool = 1; // 0x639 MovB
	var_98_bool = 0; // 0x63a PushV
	var_98_bool = 1; // 0x63b MovB
	var_99_bool = 0; // 0x63c PushV
	var_99_bool = 1; // 0x63d MovB
	var_100_bool = 0; // 0x63e PushV
	var_100_bool = 1; // 0x63f MovB
	var_101_string = "woman"; // 0x640 PushS
	var_102_bool = var_89_string == var_101_string; // 0x641 Eq
	if(var_102_bool == 0) goto Label_1607; // 0x642 JumpB
	var_103_string = "worker"; // 0x643 PushS
	var_104_bool = var_89_string == var_103_string; // 0x644 Eq
	if(var_104_bool == 0) goto Label_1607; // 0x645 JumpB
	var_100_bool = 0; // 0x646 MovB
	
Label_1607:
	if(var_100_bool == 0) goto Label_1612; // 0x647 JumpB
	var_105_string = "butcher"; // 0x648 PushS
	var_106_bool = var_89_string == var_105_string; // 0x649 Eq
	if(var_106_bool == 0) goto Label_1612; // 0x64a JumpB
	var_99_bool = 0; // 0x64b MovB
	
Label_1612:
	if(var_99_bool == 0) goto Label_1617; // 0x64c JumpB
	var_107_string = "wasted_girl"; // 0x64d PushS
	var_108_bool = var_89_string == var_107_string; // 0x64e Eq
	if(var_108_bool == 0) goto Label_1617; // 0x64f JumpB
	var_98_bool = 0; // 0x650 MovB
	
Label_1617:
	if(var_98_bool == 0) goto Label_1622; // 0x651 JumpB
	var_109_string = "boy"; // 0x652 PushS
	var_110_bool = var_89_string == var_109_string; // 0x653 Eq
	if(var_110_bool == 0) goto Label_1622; // 0x654 JumpB
	var_97_bool = 0; // 0x655 MovB
	
Label_1622:
	if(var_97_bool == 0) goto Label_1627; // 0x656 JumpB
	var_111_string = "vaxxabitka"; // 0x657 PushS
	var_112_bool = var_89_string == var_111_string; // 0x658 Eq
	if(var_112_bool == 0) goto Label_1627; // 0x659 JumpB
	var_96_bool = 0; // 0x65a MovB
	
Label_1627:
	if(var_96_bool == 0) goto Label_1632; // 0x65b JumpB
	var_113_string = "unosha"; // 0x65c PushS
	var_114_bool = var_89_string == var_113_string; // 0x65d Eq
	if(var_114_bool == 0) goto Label_1632; // 0x65e JumpB
	var_95_bool = 0; // 0x65f MovB
	
Label_1632:
	if(var_95_bool == 0) goto Label_1637; // 0x660 JumpB
	var_115_string = "wasted_male"; // 0x661 PushS
	var_116_bool = var_89_string == var_115_string; // 0x662 Eq
	if(var_116_bool == 0) goto Label_1637; // 0x663 JumpB
	var_94_bool = 0; // 0x664 MovB
	
Label_1637:
	if(var_94_bool == 0) goto Label_1642; // 0x665 JumpB
	var_117_string = "alkash"; // 0x666 PushS
	var_118_bool = var_89_string == var_117_string; // 0x667 Eq
	if(var_118_bool == 0) goto Label_1642; // 0x668 JumpB
	var_93_bool = 0; // 0x669 MovB
	
Label_1642:
	if(var_93_bool == 0) goto Label_1647; // 0x66a JumpB
	var_119_string = "dohodyaga"; // 0x66b PushS
	var_120_bool = var_89_string == var_119_string; // 0x66c Eq
	if(var_120_bool == 0) goto Label_1647; // 0x66d JumpB
	var_92_bool = 0; // 0x66e MovB
	
Label_1647:
	if(var_92_bool == 0) goto Label_1652; // 0x66f JumpB
	var_121_string = "vaxxabit"; // 0x670 PushS
	var_122_bool = var_89_string == var_121_string; // 0x671 Eq
	if(var_122_bool == 0) goto Label_1652; // 0x672 JumpB
	var_91_bool = 0; // 0x673 MovB
	
Label_1652:
	if(var_91_bool == 0) goto Label_1657; // 0x674 JumpB
	var_123_string = "nudegirl"; // 0x675 PushS
	var_124_bool = var_89_string == var_123_string; // 0x676 Eq
	if(var_124_bool == 0) goto Label_1657; // 0x677 JumpB
	var_90_bool = 0; // 0x678 MovB
	
Label_1657:
	if(var_90_bool == 0) goto Label_1662; // 0x679 JumpB
	var_125_string = "morlok"; // 0x67a PushS
	var_126_bool = var_89_string == var_125_string; // 0x67b Eq
	if(var_126_bool == 0) goto Label_1662; // 0x67c JumpB
	var_88_bool = 0; // 0x67d MovB
	
Label_1662:
	return 0; // 0x67e Return
}


func_1066(var_33_object)
{
	var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_string = ""; var_39_object = Obj(); var_40_bool = 0; var_41_bool = 0; var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_string = ""; var_49_object = Obj(); var_50_bool = 0; var_51_bool = 0; var_52_float = 0; var_53_cvector = CVector(0,0,0); // 0x42a PushV
	var_54_bool = var_33_object == 0; // 0x42b NullEq
	if(var_54_bool == 0) goto Label_1074; // 0x42c JumpB
	var_55_string = ""; // 0x42d PushV
	var_55_string = "fdie"; // 0x42e MovS
	func_1157(var_55_string); // 0x42f NEW_2
	goto Label_1156; // 0x431 Jump
	
Label_1156:
	return 20; // 0x484 Return
	
Label_1074:
	GetPosition(var_44_cvector); // 0x432 ObjFunc
	GetPosition(var_45_cvector); // 0x434 Func
	GetDirection(var_46_cvector); // 0x436 Func
	var_47_cvector = var_45_cvector - var_44_cvector; // 0x438 Sub2
	var_87_float = GetByIndex(var_47_cvector, 0); // 0x439 PushE
	var_88_float = GetByIndex(var_46_cvector, 0); // 0x43a PushE
	var_89_float = var_87_float * var_88_float; // 0x43b Mult
	var_90_float = GetByIndex(var_47_cvector, 2); // 0x43c PushE
	var_91_float = GetByIndex(var_46_cvector, 2); // 0x43d PushE
	var_92_float = var_90_float * var_91_float; // 0x43e Mult
	var_93_int = var_89_float + var_92_float; // 0x43f Add
	var_94_int = 0; // 0x440 PushI
	var_95_bool = var_93_int >= var_94_int; // 0x441 GE
	if(var_95_bool == 0) goto Label_1093; // 0x442 JumpB
	var_48_string = "fdie"; // 0x443 MovS
	goto Label_1094; // 0x444 Jump
	
Label_1094:
	RemoveRTEnvelope(); // 0x446 Func
	SetDeathState(); // 0x448 Func
	Stop(); // 0x44a Func
	StopAsync(); // 0x44c Func
	var_49_object = var_33_object; // 0x44e Mov
	var_96_string = "GetScriptProperty"; // 0x44f PushS
	var_97_int = 2; // 0x450 PushI
	var_98_bool = IsFuncExist(var_33_object, var_96_string, var_97_int); // 0x451 FuncExist
	if(var_98_bool == 0) goto Label_1118; // 0x452 JumpB
	var_99_string = "Owner"; // 0x453 PushS
	HasScriptProperty(var_50_bool, var_99_string); // 0x454 ObjFunc
	var_100_bool = var_50_bool; // 0x456 Push
	if(var_100_bool == 0) goto Label_1118; // 0x457 JumpB
	var_101_string = "Owner"; // 0x458 PushS
	GetScriptProperty(var_49_object, var_101_string); // 0x459 ObjFunc
	var_102_bool = var_49_object == 0; // 0x45b NullEq
	if(var_102_bool == 0) goto Label_1118; // 0x45c JumpB
	var_49_object = var_33_object; // 0x45d Mov
	
Label_1118:
	var_103_string = "@GetEyesHeight"; // 0x45e PushS
	var_104_int = 1; // 0x45f PushI
	var_105_bool = IsFuncExist(var_49_object, var_103_string, var_104_int); // 0x460 FuncExist
	if(var_105_bool == 0) goto Label_1133; // 0x461 JumpB
	GetEyesHeight(var_52_float); // 0x462 ObjFunc
	var_53_cvector = CVector(0.0, 0.0, 0.0); // 0x464 MovV
	var_106_float = GetByIndex(var_53_cvector, 1); // 0x465 PushE
	var_106_float = var_52_float; // 0x466 Mov
	SetByIndex(var_53_cvector, 1) = var_106_float; // 0x467 PopE
	var_107_string = "head"; // 0x468 PushS
	LookAsync(var_33_object, var_107_string, var_53_cvector); // 0x469 Func
	var_51_bool = 1; // 0x46b MovB
	goto Label_1134; // 0x46c Jump
	
Label_1134:
	var_108_string = ""; // 0x46e PushV
	var_108_string = var_48_string; // 0x46f Mov
	func_1535(var_108_string); // 0x470 NEW_2
	var_109_string = "all"; // 0x472 PushS
	PlayAnimation(var_109_string, var_48_string); // 0x473 Func
	WaitForAnimEnd(); // 0x475 Func
	var_110_bool = var_51_bool; // 0x477 Push
	if(var_110_bool == 0) goto Label_1150; // 0x478 JumpB
	StopAsync(); // 0x479 Func
	var_111_string = "head"; // 0x47b PushS
	UnlookAsync(var_111_string); // 0x47c Func
	
Label_1150:
	var_112_string = "all"; // 0x47e PushS
	LockAnimationEnd(var_112_string, var_48_string); // 0x47f Func
	RemoveEnvelope(); // 0x481 Func
	var_49_object = 0; // 0x483 SetNull
	
Label_1133:
	var_51_bool = 0; // 0x46d MovB
	
Label_1093:
	var_48_string = "bdie"; // 0x445 MovS
}


func_2219(var_131_object)
{
	var_132_object = Obj(); // 0x8ac PushV
	var_132_object = var_131_object; // 0x8ad Mov
	func_2049(var_132_object); // 0x8ae NEW_2
	return 0; // 0x8b0 Return
}


func_1707(var_210_float, var_211_cvector, var_212_cvector)
{
	var_213_float = GetByIndex(var_211_cvector, 0); // 0x6ac PushE
	var_214_float = GetByIndex(var_212_cvector, 0); // 0x6ad PushE
	var_215_float = var_213_float * var_214_float; // 0x6ae Mult
	var_216_float = GetByIndex(var_211_cvector, 2); // 0x6af PushE
	var_217_float = GetByIndex(var_212_cvector, 2); // 0x6b0 PushE
	var_218_float = var_216_float * var_217_float; // 0x6b1 Mult
	var_210_float = var_215_float + var_218_float; // 0x6b2 Add2
	return 0; // 0x6b3 Return
}


func_1535(var_56_string)
{
	var_57_bool = 0; var_58_int = 0; var_59_bool = 0; var_60_int = 0; var_61_bool = 0; var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_bool = 0; var_66_int = 0; var_67_bool = 0; var_68_int = 0; var_69_bool = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x5ff PushV
	IsExisting3DSound(var_65_bool, var_56_string); // 0x600 Func
	var_73_bool = var_65_bool == 0; // 0x602 Not
	if(var_73_bool == 0) goto Label_1560; // 0x603 JumpB
	var_66_int = 0; // 0x604 MovI
	
Label_1541:
	var_74_int = 1; // 0x605 PushI
	var_75_int = var_66_int + var_74_int; // 0x606 Add
	var_76_int = var_56_string + var_75_int; // 0x607 Add
	IsExisting3DSound(var_67_bool, var_76_int); // 0x608 Func
	var_77_bool = var_67_bool == 0; // 0x60a Not
	if(var_77_bool == 0) goto Label_1549; // 0x60b JumpB
	goto Label_1552; // 0x60c Jump
	
Label_1552:
	var_78_bool = var_66_int == 0; // 0x610 Not
	if(var_78_bool == 0) goto Label_1555; // 0x611 JumpB
	return 16; // 0x612 Return
	
Label_1555:
	irand(var_68_int, var_66_int); // 0x613 Func
	var_79_int = 1; // 0x615 PushI
	var_80_int = var_68_int + var_79_int; // 0x616 Add
	var_56_string = var_56_string + var_80_int; // 0x617 Add2
	
Label_1560:
	Is3DSoundLoaded(var_69_bool, var_56_string); // 0x618 Func
	var_81_bool = var_69_bool; // 0x61a Push
	if(var_81_bool == 0) goto Label_1575; // 0x61b JumpB
	GetEyesHeight(var_70_float); // 0x61c Func
	GetDirection(var_71_cvector); // 0x61e Func
	var_82_int = 50; // 0x620 PushI
	var_72_cvector = var_71_cvector * var_82_int; // 0x621 Mult2
	var_83_float = GetByIndex(var_72_cvector, 1); // 0x622 PushE
	var_83_float = var_83_float + var_70_float; // 0x623 Add2
	SetByIndex(var_72_cvector, 1) = var_83_float; // 0x624 PopE
	PlayGlobalSound(var_56_string, var_72_cvector); // 0x625 Func
	
Label_1575:
	return 16; // 0x627 Return
	
Label_1549:
	var_84_int = 1; // 0x60d PushI
	var_66_int = var_66_int + var_84_int; // 0x60e Add2
	goto Label_1541; // 0x60f Jump
}


func_945(var_0_object, var_1_object)
{
	var_303_int = 0; var_304_bool = 0; var_305_cvector = CVector(0,0,0); var_306_object = Obj(); var_307_int = 0; var_308_bool = 0; var_309_cvector = CVector(0,0,0); var_310_object = Obj(); // 0x3b1 PushV
	GetPFPosition(var_310_object); // 0x3b2 Func
	GetDirection(var_0_object); // 0x3b4 Func
	
Label_950:
	func_1034(); // 0x3b7 NEW_2
	var_311_int = 10; // 0x3b9 PushI
	irand(var_307_int, var_311_int); // 0x3ba Func
	var_312_int = 5; // 0x3bc PushI
	var_313_int = var_307_int + var_312_int; // 0x3bd Add
	Sleep(var_313_int, var_308_bool); // 0x3be Func
	var_314_bool = var_308_bool; // 0x3c0 Push
	if(var_314_bool == 0) goto Label_966; // 0x3c1 JumpB
	func_867(); // 0x3c3 NEW_2
	goto Label_1027; // 0x3c5 Jump
	
Label_1027:
	goto Label_950; // 0x403 Jump
	
Label_966:
	func_1034(); // 0x3c7 NEW_2
	GetPFPosition(var_309_cvector); // 0x3c9 Func
	var_315_float = 0; var_316_cvector = CVector(0,0,0); var_317_cvector = CVector(0,0,0); // 0x3cb PushV
	var_316_cvector = var_1_object; // 0x3cc MovT
	var_317_cvector = var_309_cvector; // 0x3cd Mov
	func_1679(var_315_float, var_316_cvector, var_317_cvector); // 0x3ce NEW_2
	var_320_int = 40000; // 0x3d0 PushI
	var_321_bool = var_315_float > var_320_int; // 0x3d1 GT
	if(var_321_bool == 0) goto Label_1013; // 0x3d2 JumpB
	FindPathTo(var_310_object, var_310_object); // 0x3d3 Func
	var_322_bool = var_310_object != 0; // 0x3d5 NullNeq
	if(var_322_bool == 0) goto Label_1008; // 0x3d6 JumpB
	RotatePath(var_310_object, var_308_bool); // 0x3d7 Func
	var_323_bool = var_308_bool == 0; // 0x3d9 Not
	if(var_323_bool == 0) goto Label_988; // 0x3da JumpB
	goto Label_1026; // 0x3db Jump
	
Label_1026:
	goto Label_966; // 0x402 Jump
	
Label_988:
	var_324_bool = 0; // 0x3dc PushB
	FollowPath(var_310_object, var_324_bool, var_308_bool); // 0x3dd Func
	var_325_bool = var_308_bool == 0; // 0x3df Not
	if(var_325_bool == 0) goto Label_994; // 0x3e0 JumpB
	goto Label_1026; // 0x3e1 Jump
	
Label_994:
	var_326_float = GetByIndex(var_0_object, 0); // 0x3e2 PushE
	var_327_float = GetByIndex(var_0_object, 2); // 0x3e3 PushE
	Rotate(var_326_float, var_327_float, var_308_bool); // 0x3e4 Func
	var_328_bool = var_308_bool == 0; // 0x3e6 Not
	if(var_328_bool == 0) goto Label_1001; // 0x3e7 JumpB
	goto Label_1026; // 0x3e8 Jump
	
Label_1001:
	WaitForAnimEnd(var_308_bool); // 0x3e9 Func
	var_329_bool = var_308_bool == 0; // 0x3eb Not
	if(var_329_bool == 0) goto Label_1006; // 0x3ec JumpB
	goto Label_1026; // 0x3ed Jump
	
Label_1006:
	goto Label_1027; // 0x3ee Jump
	
Label_1008:
	var_330_int = 1; // 0x3f0 PushI
	Sleep(var_330_int); // 0x3f1 Func
	var_310_object = 0; // 0x3f3 SetNull
	goto Label_1026; // 0x3f4 Jump
	
Label_1013:
	var_331_float = GetByIndex(var_0_object, 0); // 0x3f5 PushE
	var_332_float = GetByIndex(var_0_object, 2); // 0x3f6 PushE
	Rotate(var_331_float, var_332_float, var_308_bool); // 0x3f7 Func
	var_333_bool = var_308_bool == 0; // 0x3f9 Not
	if(var_333_bool == 0) goto Label_1020; // 0x3fa JumpB
	goto Label_1026; // 0x3fb Jump
	
Label_1020:
	WaitForAnimEnd(var_308_bool); // 0x3fc Func
	var_334_bool = var_308_bool == 0; // 0x3fe Not
	if(var_334_bool == 0) goto Label_1025; // 0x3ff JumpB
	goto Label_1026; // 0x400 Jump
	
Label_1025:
	goto Label_1027; // 0x401 Jump
}


func_2225(var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x8b1 PushV
	GetScene(var_23_object); // 0x8b2 Func
	var_24_object = Obj(); // 0x8b4 PushV
	func_1663(var_24_object); // 0x8b5 NEW_2
	RemoveStationaryActor(var_24_object); // 0x8b7 ObjFunc
	var_25_bool = 0; var_26_string = ""; var_27_string = ""; // 0x8b9 PushV
	var_26_string = "quest_d11_01"; // 0x8ba MovS
	var_27_string = "soldier_death"; // 0x8bb MovS
	func_1760(var_25_bool, var_26_string, var_27_string); // 0x8bc NEW_2
	var_31_object = Obj(); // 0x8be PushV
	var_31_object = var_21_object; // 0x8bf Mov
	TaskCall(7); // 0x8c0 TaskCall
	func_1035(var_31_object); // 0x8c1 NEW_2
	TaskReturn(); // 0x8c2 TaskReturn
	return 2; // 0x8c4 Return
}


func_1203(var_45_cvector)
{
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); // 0x4b3 PushV
	GetPosition(var_49_cvector); // 0x4b4 Func
	GetPosition(var_50_cvector); // 0x4b6 ObjFunc
	var_45_cvector = var_50_cvector - var_49_cvector; // 0x4b8 Sub2
	return 4; // 0x4b9 Return
}


func_1716(var_219_float, var_220_cvector)
{
	var_221_float = GetByIndex(var_220_cvector, 0); // 0x6b5 PushE
	var_222_float = GetByIndex(var_220_cvector, 0); // 0x6b6 PushE
	var_223_float = var_221_float * var_222_float; // 0x6b7 Mult
	var_224_float = GetByIndex(var_220_cvector, 2); // 0x6b8 PushE
	var_225_float = GetByIndex(var_220_cvector, 2); // 0x6b9 PushE
	var_226_float = var_224_float * var_225_float; // 0x6ba Mult
	var_227_int = var_223_float + var_226_float; // 0x6bb Add
	var_219_float = sqrt(var_227_int); // 0x6bc Sqrt2
	return 0; // 0x6bd Return
}


func_1210(var_377_float)
{
	var_379_cvector = CVector(0,0,0); var_380_cvector = CVector(0,0,0); var_381_cvector = CVector(0,0,0); var_382_cvector = CVector(0,0,0); var_383_cvector = CVector(0,0,0); var_384_cvector = CVector(0,0,0); // 0x4ba PushV
	GetPosition(var_382_cvector); // 0x4bb Func
	GetPosition(var_383_cvector); // 0x4bd ObjFunc
	var_384_cvector = var_383_cvector - var_382_cvector; // 0x4bf Sub2
	var_377_float = var_384_cvector | var_384_cvector; // 0x4c0 Or2
	return 6; // 0x4c1 Return
}


func_1726(var_207_float, var_208_cvector, var_209_cvector)
{
	var_210_float = 0; var_211_cvector = CVector(0,0,0); var_212_cvector = CVector(0,0,0); // 0x6bf PushV
	var_211_cvector = var_208_cvector; // 0x6c0 Mov
	var_212_cvector = var_209_cvector; // 0x6c1 Mov
	func_1707(var_210_float, var_211_cvector, var_212_cvector); // 0x6c2 NEW_2
	var_219_float = 0; var_220_cvector = CVector(0,0,0); // 0x6c4 PushV
	var_220_cvector = var_208_cvector; // 0x6c5 Mov
	func_1716(var_219_float, var_220_cvector); // 0x6c6 NEW_2
	var_228_float = 0; var_229_cvector = CVector(0,0,0); // 0x6c8 PushV
	var_229_cvector = var_209_cvector; // 0x6c9 Mov
	func_1716(var_228_float, var_229_cvector); // 0x6ca NEW_2
	var_230_float = var_219_float * var_228_float; // 0x6cc Mult
	var_207_float = var_210_float / var_210_float; // 0x6cd Div2
	return 0; // 0x6ce Return
}


func_1218(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj(); // 0x4c2 PushV
	var_18_string = "player"; // 0x4c3 PushS
	FindActor(var_17_object, var_18_string); // 0x4c4 Func
	var_15_object = var_17_object; // 0x4c6 Mov
	return 2; // 0x4c7 Return
}


func_1860(var_20_bool, var_21_object, var_22_bool)
{
	var_23_string = ""; var_24_string = ""; // 0x744 PushV
	var_25_bool = 0; var_26_object = Obj(); var_27_string = ""; // 0x745 PushV
	var_26_object = var_21_object; // 0x746 Mov
	var_27_string = "class"; // 0x747 MovS
	func_1230(var_25_bool, var_26_object, var_27_string); // 0x748 NEW_2
	var_34_bool = var_25_bool == 0; // 0x74a Not
	if(var_34_bool == 0) goto Label_1870; // 0x74b JumpB
	var_20_bool = 0; // 0x74c MovB
	return 2; // 0x74d Return
	
Label_1870:
	var_35_string = "class"; // 0x74e PushS
	GetProperty(var_35_string, var_24_string); // 0x74f ObjFunc
	var_36_bool = 0; // 0x751 PushV
	var_36_bool = 1; // 0x752 MovB
	var_37_bool = 0; // 0x753 PushV
	var_37_bool = 1; // 0x754 MovB
	var_38_bool = 0; // 0x755 PushV
	var_38_bool = 1; // 0x756 MovB
	var_39_bool = 0; // 0x757 PushV
	var_39_bool = 1; // 0x758 MovB
	var_40_bool = 0; // 0x759 PushV
	var_40_bool = 1; // 0x75a MovB
	var_41_bool = 0; // 0x75b PushV
	var_41_bool = 1; // 0x75c MovB
	var_42_bool = 0; // 0x75d PushV
	var_42_bool = 1; // 0x75e MovB
	var_43_bool = 0; // 0x75f PushV
	var_43_bool = 1; // 0x760 MovB
	var_44_bool = 0; // 0x761 PushV
	var_44_bool = 1; // 0x762 MovB
	var_45_bool = 0; // 0x763 PushV
	var_45_bool = 1; // 0x764 MovB
	var_46_string = "patrol"; // 0x765 PushS
	var_47_bool = var_24_string == var_46_string; // 0x766 Eq
	if(var_47_bool == 0) goto Label_1900; // 0x767 JumpB
	var_48_string = "sanitar"; // 0x768 PushS
	var_49_bool = var_24_string == var_48_string; // 0x769 Eq
	if(var_49_bool == 0) goto Label_1900; // 0x76a JumpB
	var_45_bool = 0; // 0x76b MovB
	
Label_1900:
	if(var_45_bool == 0) goto Label_1905; // 0x76c JumpB
	var_50_string = "soldier"; // 0x76d PushS
	var_51_bool = var_24_string == var_50_string; // 0x76e Eq
	if(var_51_bool == 0) goto Label_1905; // 0x76f JumpB
	var_44_bool = 0; // 0x770 MovB
	
Label_1905:
	if(var_44_bool == 0) goto Label_1910; // 0x771 JumpB
	var_52_string = "woman"; // 0x772 PushS
	var_53_bool = var_24_string == var_52_string; // 0x773 Eq
	if(var_53_bool == 0) goto Label_1910; // 0x774 JumpB
	var_43_bool = 0; // 0x775 MovB
	
Label_1910:
	if(var_43_bool == 0) goto Label_1915; // 0x776 JumpB
	var_54_string = "wasted_girl"; // 0x777 PushS
	var_55_bool = var_24_string == var_54_string; // 0x778 Eq
	if(var_55_bool == 0) goto Label_1915; // 0x779 JumpB
	var_42_bool = 0; // 0x77a MovB
	
Label_1915:
	if(var_42_bool == 0) goto Label_1920; // 0x77b JumpB
	var_56_string = "vaxxabitka"; // 0x77c PushS
	var_57_bool = var_24_string == var_56_string; // 0x77d Eq
	if(var_57_bool == 0) goto Label_1920; // 0x77e JumpB
	var_41_bool = 0; // 0x77f MovB
	
Label_1920:
	if(var_41_bool == 0) goto Label_1925; // 0x780 JumpB
	var_58_string = "vaxxabit"; // 0x781 PushS
	var_59_bool = var_24_string == var_58_string; // 0x782 Eq
	if(var_59_bool == 0) goto Label_1925; // 0x783 JumpB
	var_40_bool = 0; // 0x784 MovB
	
Label_1925:
	if(var_40_bool == 0) goto Label_1930; // 0x785 JumpB
	var_60_string = "little_girl"; // 0x786 PushS
	var_61_bool = var_24_string == var_60_string; // 0x787 Eq
	if(var_61_bool == 0) goto Label_1930; // 0x788 JumpB
	var_39_bool = 0; // 0x789 MovB
	
Label_1930:
	if(var_39_bool == 0) goto Label_1935; // 0x78a JumpB
	var_62_string = "girl"; // 0x78b PushS
	var_63_bool = var_24_string == var_62_string; // 0x78c Eq
	if(var_63_bool == 0) goto Label_1935; // 0x78d JumpB
	var_38_bool = 0; // 0x78e MovB
	
Label_1935:
	if(var_38_bool == 0) goto Label_1940; // 0x78f JumpB
	var_64_string = "dohodyaga"; // 0x790 PushS
	var_65_bool = var_24_string == var_64_string; // 0x791 Eq
	if(var_65_bool == 0) goto Label_1940; // 0x792 JumpB
	var_37_bool = 0; // 0x793 MovB
	
Label_1940:
	if(var_37_bool == 0) goto Label_1945; // 0x794 JumpB
	var_66_string = "nudegirl"; // 0x795 PushS
	var_67_bool = var_24_string == var_66_string; // 0x796 Eq
	if(var_67_bool == 0) goto Label_1945; // 0x797 JumpB
	var_36_bool = 0; // 0x798 MovB
	
Label_1945:
	if(var_36_bool == 0) goto Label_1948; // 0x799 JumpB
	var_20_bool = 1; // 0x79a MovB
	return 2; // 0x79b Return
	
Label_1948:
	var_68_bool = var_22_bool; // 0x79c Push
	if(var_68_bool == 0) goto Label_1952; // 0x79d JumpB
	var_20_bool = 0; // 0x79e MovB
	return 2; // 0x79f Return
	
Label_1952:
	var_20_bool = 1; // 0x7a0 MovB
	var_69_bool = 0; // 0x7a1 PushV
	var_69_bool = 1; // 0x7a2 MovB
	var_70_bool = 0; // 0x7a3 PushV
	var_70_bool = 1; // 0x7a4 MovB
	var_71_bool = 0; // 0x7a5 PushV
	var_71_bool = 1; // 0x7a6 MovB
	var_72_bool = 0; // 0x7a7 PushV
	var_72_bool = 1; // 0x7a8 MovB
	var_73_bool = 0; // 0x7a9 PushV
	var_73_bool = 1; // 0x7aa MovB
	var_74_string = "worker"; // 0x7ab PushS
	var_75_bool = var_24_string == var_74_string; // 0x7ac Eq
	if(var_75_bool == 0) goto Label_1970; // 0x7ad JumpB
	var_76_string = "butcher"; // 0x7ae PushS
	var_77_bool = var_24_string == var_76_string; // 0x7af Eq
	if(var_77_bool == 0) goto Label_1970; // 0x7b0 JumpB
	var_73_bool = 0; // 0x7b1 MovB
	
Label_1970:
	if(var_73_bool == 0) goto Label_1975; // 0x7b2 JumpB
	var_78_string = "boy"; // 0x7b3 PushS
	var_79_bool = var_24_string == var_78_string; // 0x7b4 Eq
	if(var_79_bool == 0) goto Label_1975; // 0x7b5 JumpB
	var_72_bool = 0; // 0x7b6 MovB
	
Label_1975:
	if(var_72_bool == 0) goto Label_1980; // 0x7b7 JumpB
	var_80_string = "unosha"; // 0x7b8 PushS
	var_81_bool = var_24_string == var_80_string; // 0x7b9 Eq
	if(var_81_bool == 0) goto Label_1980; // 0x7ba JumpB
	var_71_bool = 0; // 0x7bb MovB
	
Label_1980:
	if(var_71_bool == 0) goto Label_1985; // 0x7bc JumpB
	var_82_string = "wasted_male"; // 0x7bd PushS
	var_83_bool = var_24_string == var_82_string; // 0x7be Eq
	if(var_83_bool == 0) goto Label_1985; // 0x7bf JumpB
	var_70_bool = 0; // 0x7c0 MovB
	
Label_1985:
	if(var_70_bool == 0) goto Label_1990; // 0x7c1 JumpB
	var_84_string = "alkash"; // 0x7c2 PushS
	var_85_bool = var_24_string == var_84_string; // 0x7c3 Eq
	if(var_85_bool == 0) goto Label_1990; // 0x7c4 JumpB
	var_69_bool = 0; // 0x7c5 MovB
	
Label_1990:
	if(var_69_bool == 0) goto Label_1995; // 0x7c6 JumpB
	var_86_string = "morlok"; // 0x7c7 PushS
	var_87_bool = var_24_string == var_86_string; // 0x7c8 Eq
	if(var_87_bool == 0) goto Label_1995; // 0x7c9 JumpB
	var_20_bool = 0; // 0x7ca MovB
	
Label_1995:
	return 2; // 0x7cb Return
}


func_1225(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_bool = 0; // 0x4c9 PushV
	IsPlayerActor(var_13_object, var_15_bool); // 0x4ca Func
	var_12_bool = var_15_bool; // 0x4cc Mov
	return 2; // 0x4cd Return
}


func_1356(var_16_bool, var_17_object)
{
	var_18_int = 0; var_19_int = 0; // 0x54c PushV
	var_20_bool = 0; var_21_object = Obj(); // 0x54d PushV
	var_21_object = var_17_object; // 0x54e Mov
	func_1320(var_20_bool, var_21_object); // 0x54f NEW_2
	var_37_bool = var_20_bool == 0; // 0x551 Not
	if(var_37_bool == 0) goto Label_1365; // 0x552 JumpB
	var_16_bool = 0; // 0x553 MovB
	return 2; // 0x554 Return
	
Label_1365:
	var_38_bool = 0; var_39_object = Obj(); var_40_string = ""; // 0x555 PushV
	var_39_object = var_17_object; // 0x556 Mov
	var_40_string = "noaccess"; // 0x557 MovS
	func_1230(var_38_bool, var_39_object, var_40_string); // 0x558 NEW_2
	var_47_bool = var_38_bool == 0; // 0x55a Not
	if(var_47_bool == 0) goto Label_1374; // 0x55b JumpB
	var_16_bool = 1; // 0x55c MovB
	return 2; // 0x55d Return
	
Label_1374:
	var_48_string = "noaccess"; // 0x55e PushS
	GetProperty(var_48_string, var_19_int); // 0x55f ObjFunc
	var_49_int = 0; // 0x561 PushI
	var_16_bool = var_19_int == var_49_int; // 0x562 Eq2
	return 2; // 0x563 Return
}


func_1996()
{
	var_21_object = GlobalVars[0]; // 0x7cc PushGE
	var_22_object = Obj(); // 0x7cd PushV
	func_1701(var_22_object); // 0x7ce NEW_2
	var_21_object = var_22_object; // 0x7cf Mov
	GlobalVars[0] = var_21_object; // 0x7d1 PopGE
	return 0; // 0x7d2 Return
}


func_846(var_14_object)
{
	func_1996(); // 0x350 NEW_2
	var_25_object = Obj(); // 0x352 PushV
	var_25_object = var_14_object; // 0x353 Mov
	func_898(); // 0x354 NEW_2
	
Label_854:
	func_859(); // 0x357 NEW_2
	goto Label_854; // 0x359 Jump
}


func_1230(var_38_bool, var_39_object, var_40_string)
{
	var_41_bool = 0; var_42_bool = 0; // 0x4ce PushV
	var_43_string = "HasProperty"; // 0x4cf PushS
	var_44_int = 2; // 0x4d0 PushI
	var_45_bool = IsFuncExist(var_39_object, var_43_string, var_44_int); // 0x4d1 FuncExist
	var_46_bool = var_45_bool == 0; // 0x4d2 Not
	if(var_46_bool == 0) goto Label_1238; // 0x4d3 JumpB
	var_38_bool = 0; // 0x4d4 MovB
	return 2; // 0x4d5 Return
	
Label_1238:
	HasProperty(var_40_string, var_42_bool); // 0x4d6 ObjFunc
	var_38_bool = var_42_bool; // 0x4d8 Mov
	return 2; // 0x4d9 Return
}


func_1743(var_308_float)
{
	var_309_object = Obj(); var_310_object = Obj(); // 0x6cf PushV
	CreateFloatVector(var_310_object); // 0x6d0 Func
	add(var_308_float); // 0x6d2 ObjFunc
	var_311_int = 0; // 0x6d4 PushI
	var_312_bool = var_308_float < var_311_int; // 0x6d5 LT
	if(var_312_bool == 0) goto Label_1755; // 0x6d6 JumpB
	var_313_float = 0.7; // 0x6d7 PushF
	var_314_int = 500; // 0x6d8 PushI
	RumblePlay(var_313_float, var_314_int); // 0x6d9 Func
	
Label_1755:
	var_315_int = 15; // 0x6db PushI
	SendWorldWndMessage(var_315_int, var_310_object); // 0x6dc Func
	return 2; // 0x6de Return
}


func_465(var_0_object, var_1_object)
{
	var_0_object = var_1_object; // 0x1d1 TMovT
	var_1_object = 0; // 0x1d2 SetNullT
	Face(var_0_object); // 0x1d3 Func
	return 0; // 0x1d5 Return
}


func_2003(var_137_object, var_138_bool)
{
	var_139_object = Obj(); var_140_bool = 0; // 0x7d4 PushV
	var_139_object = var_137_object; // 0x7d5 Mov
	var_140_bool = var_138_bool; // 0x7d6 Mov
	TaskCall(2); // 0x7d7 TaskCall
	func_290(var_141_object, var_142_object, var_143_bool, var_139_object, var_140_bool); // 0x7d8 NEW_2
	TaskReturn(); // 0x7d9 TaskReturn
	ResetAAS(); // 0x7db Func
	return 0; // 0x7dd Return
}


func_723()
{
	var_103_string = "all"; // 0x2d3 PushS
	var_104_string = "attack_on"; // 0x2d4 PushS
	LockAnimationEnd(var_103_string, var_104_string); // 0x2d5 Func
	return 0; // 0x2d7 Return
}


func_1492(var_17_object, var_20_cvector, var_21_cvector)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); // 0x5d4 PushV
	GetScene(var_24_object); // 0x5d5 Func
	var_26_string = "scripted"; // 0x5d7 PushS
	var_27_string = "blood_dir.xml"; // 0x5d8 PushS
	AddActorByType(var_25_object, var_26_string, var_24_object, var_20_cvector, var_21_cvector, var_27_string); // 0x5d9 Func
	var_28_object = Obj(); // 0x5db PushV
	var_28_object = var_17_object; // 0x5dc Mov
	func_1380(var_28_object); // 0x5dd NEW_2
	return 4; // 0x5df Return
}


func_470(var_0_object)
{
	var_169_cvector = CVector(0,0,0); var_170_cvector = CVector(0,0,0); var_171_bool = 0; var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0); var_174_object = Obj(); var_175_object = Obj(); var_176_cvector = CVector(0,0,0); var_177_object = Obj(); var_178_int = 0; var_179_cvector = CVector(0,0,0); var_180_float = 0; var_181_object = Obj(); var_182_object = Obj(); var_183_cvector = CVector(0,0,0); var_184_cvector = CVector(0,0,0); var_185_bool = 0; var_186_cvector = CVector(0,0,0); var_187_cvector = CVector(0,0,0); var_188_object = Obj(); var_189_object = Obj(); var_190_cvector = CVector(0,0,0); var_191_object = Obj(); var_192_int = 0; var_193_cvector = CVector(0,0,0); var_194_float = 0; var_195_object = Obj(); var_196_object = Obj(); // 0x1d6 PushV
	var_197_object = Obj(); // 0x1d7 PushV
	var_197_object = var_0_object; // 0x1d8 MovT
	func_1772(var_197_object); // 0x1d9 NEW_2
	ReportAttack(var_0_object); // 0x1db Func
	var_198_bool = 0; var_199_object = Obj(); // 0x1dd PushV
	var_199_object = var_0_object; // 0x1de MovT
	func_1225(var_198_bool, var_199_object); // 0x1df NEW_2
	if(var_198_bool == 0) goto Label_487; // 0x1e1 JumpB
	var_200_object = Obj(); // 0x1e2 PushV
	func_1663(var_200_object); // 0x1e3 NEW_2
	SendPlayerEnemy(var_0_object, var_200_object); // 0x1e5 Func
	
Label_487:
	GetDirection(var_183_cvector); // 0x1e7 Func
	var_201_cvector = CVector(0,0,0); var_202_object = Obj(); // 0x1e9 PushV
	var_202_object = var_0_object; // 0x1ea MovT
	func_1203(var_202_object); // 0x1eb NEW_2
	var_184_cvector = var_201_cvector; // 0x1ec Mov
	var_207_float = 0; var_208_cvector = CVector(0,0,0); var_209_cvector = CVector(0,0,0); // 0x1ee PushV
	var_208_cvector = var_183_cvector; // 0x1ef Mov
	var_209_cvector = var_184_cvector; // 0x1f0 Mov
	func_1726(var_207_float, var_208_cvector, var_209_cvector); // 0x1f1 NEW_2
	var_231_float = 0.99939; // 0x1f3 PushF
	var_232_bool = var_207_float < var_231_float; // 0x1f4 LT
	if(var_232_bool == 0) goto Label_503; // 0x1f5 JumpB
	return 28; // 0x1f6 Return
	
Label_503:
	func_1781(); // 0x1f8 NEW_2
	var_233_string = "all"; // 0x1fa PushS
	var_234_string = "attack_begin1"; // 0x1fb PushS
	PlayAnimation(var_233_string, var_234_string); // 0x1fc Func
	var_235_string = "attack"; // 0x1fe PushS
	GetGeometryLocator(var_235_string, var_185_bool, var_186_cvector, var_187_cvector); // 0x1ff Func
	var_236_bool = var_185_bool; // 0x201 Push
	if(var_236_bool == 0) goto Label_524; // 0x202 JumpB
	GetScene(var_189_object); // 0x203 Func
	var_237_string = "light-dynamic"; // 0x205 PushS
	var_238_string = "soldier_fire.xml"; // 0x206 PushS
	AddActorByType(var_188_object, var_237_string, var_189_object, var_186_cvector, var_187_cvector, var_238_string); // 0x207 Func
	var_189_object = 0; // 0x209 SetNull
	var_188_object = 0; // 0x20a SetNull
	goto Label_526; // 0x20b Jump
	
Label_526:
	var_239_string = "shot"; // 0x20e PushS
	var_240_cvector = CVector(0.0, 150.0, 0.0); // 0x20f PushVec
	var_241_int = 800; // 0x210 PushI
	var_242_int = 100000; // 0x211 PushI
	PlayGlobalSound(var_239_string, var_240_cvector, var_241_int, var_242_int); // 0x212 Func
	GetDirection(var_183_cvector); // 0x214 Func
	var_243_cvector = CVector(0,0,0); var_244_object = Obj(); // 0x216 PushV
	var_244_object = var_0_object; // 0x217 MovT
	func_1203(var_244_object); // 0x218 NEW_2
	var_184_cvector = var_243_cvector; // 0x219 Mov
	var_245_float = GetByIndex(var_184_cvector, 1); // 0x21b PushE
	var_246_float = 0; var_247_object = Obj(); // 0x21c PushV
	var_247_object = var_0_object; // 0x21d MovT
	func_1528(var_247_object); // 0x21e NEW_2
	var_245_float = var_245_float + var_246_float; // 0x220 Add2
	SetByIndex(var_184_cvector, 1) = var_245_float; // 0x221 PopE
	var_252_float = 0.03491; // 0x222 PushF
	RandVecCone3D(var_190_cvector, var_184_cvector, var_252_float); // 0x223 Func
	GetVictimMaterial(var_190_cvector, var_191_object, var_192_int, var_193_cvector); // 0x225 Func
	var_253_bool = var_191_object != 0; // 0x227 NullNeq
	if(var_253_bool == 0) goto Label_582; // 0x228 JumpB
	var_254_bool = var_191_object == var_0_object; // 0x229 Eq
	if(var_254_bool == 0) goto Label_567; // 0x22a JumpB
	var_255_float = 0; var_256_object = Obj(); var_257_float = 0; var_258_int = 0; // 0x22b PushV
	var_256_object = var_0_object; // 0x22c MovT
	var_257_float = 1.5; // 0x22d MovF
	var_258_int = 1; // 0x22e MovI
	func_1242(var_255_float, var_256_object, var_257_float, var_258_int); // 0x22f NEW_2
	var_194_float = var_255_float; // 0x230 Mov
	var_317_int = 2; // 0x232 PushI
	var_318_float = 1.5; // 0x233 PushF
	ReportHit(var_0_object, var_317_int, var_194_float, var_318_float); // 0x234 Func
	goto Label_582; // 0x236 Jump
	
Label_582:
	var_319_string = "all"; // 0x246 PushS
	var_320_string = "attack_end1"; // 0x247 PushS
	PlayAnimation(var_319_string, var_320_string); // 0x248 Func
	WaitForAnimEnd(); // 0x24a Func
	var_321_string = "all"; // 0x24c PushS
	var_322_string = "attack_on"; // 0x24d PushS
	LockAnimationEnd(var_321_string, var_322_string); // 0x24e Func
	return 28; // 0x250 Return
	
Label_567:
	var_323_int = -1; // 0x237 PushI
	var_324_bool = var_192_int != var_323_int; // 0x238 Neq
	if(var_324_bool == 0) goto Label_582; // 0x239 JumpB
	GetScene(var_195_object); // 0x23a Func
	var_325_string = "scripted"; // 0x23c PushS
	var_326_cvector = CVector(0.0, 0.0, 1.0); // 0x23d PushVec
	var_327_string = "richochet.xml"; // 0x23e PushS
	AddActorByType(var_196_object, var_325_string, var_195_object, var_193_cvector, var_326_cvector, var_327_string); // 0x23f Func
	var_328_string = "Material"; // 0x241 PushS
	SetScriptProperty(var_328_string, var_192_int); // 0x242 ObjFunc
	var_196_object = 0; // 0x244 SetNull
	var_195_object = 0; // 0x245 SetNull
	
Label_524:
	WaitForAnimEnd(); // 0x20c Func
}


func_728(var_0_object, var_1_object, var_48_object)
{
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); // 0x2d8 PushV
	var_0_object = var_48_object; // 0x2d9 TMov
	var_1_object = 0; // 0x2da TMovB
	func_777(var_52_cvector); // 0x2dc NEW_2
	
Label_734:
	GetDirection(var_51_cvector); // 0x2de Func
	var_61_cvector = CVector(0,0,0); var_62_object = Obj(); // 0x2e0 PushV
	var_62_object = var_0_object; // 0x2e1 MovT
	func_1203(var_62_object); // 0x2e2 NEW_2
	var_52_cvector = var_61_cvector; // 0x2e3 Mov
	var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); // 0x2e5 PushV
	var_68_cvector = var_51_cvector; // 0x2e6 Mov
	var_69_cvector = var_52_cvector; // 0x2e7 Mov
	func_1726(var_67_float, var_68_cvector, var_69_cvector); // 0x2e8 NEW_2
	var_91_float = 0.70711; // 0x2ea PushF
	var_92_bool = var_67_float < var_91_float; // 0x2eb LT
	if(var_92_bool == 0) goto Label_757; // 0x2ec JumpB
	var_93_object = Obj(); var_94_float = 0; // 0x2ed PushV
	var_93_object = var_0_object; // 0x2ee MovT
	var_94_float = 4.71239; // 0x2ef MovF
	func_1517(var_94_float); // 0x2f0 NEW_2
	func_723(); // 0x2f3 NEW_2
	
Label_757:
	var_105_float = 0.5; // 0x2f5 PushF
	Sleep(var_105_float); // 0x2f6 Func
	var_106_bool = 0; // 0x2f8 PushV
	var_106_bool = 0; // 0x2f9 MovB
	var_107_bool = var_1_object == 0; // 0x2fa Not
	if(var_107_bool == 0) goto Label_770; // 0x2fb JumpB
	var_108_bool = 0; var_109_object = Obj(); // 0x2fc PushV
	var_109_object = var_0_object; // 0x2fd MovT
	func_1356(var_108_bool, var_109_object); // 0x2fe NEW_2
	if(var_108_bool == 0) goto Label_770; // 0x300 JumpB
	var_106_bool = 1; // 0x301 MovB
	
Label_770:
	if(var_106_bool == 0) goto Label_734; // 0x302 JumpB
	StopAsync(); // 0x303 Func
	var_142_string = "spine"; // 0x305 PushS
	UnlookAsync(var_142_string); // 0x306 Func
	return 4; // 0x308 Return
}


func_1242(var_255_float, var_256_object, var_257_float, var_258_int)
{
	var_259_int = 0; var_260_string = ""; var_261_int = 0; var_262_float = 0; var_263_float = 0; var_264_float = 0; var_265_int = 0; var_266_string = ""; var_267_int = 0; var_268_float = 0; var_269_float = 0; var_270_float = 0; // 0x4da PushV
	var_271_bool = 0; var_272_object = Obj(); var_273_string = ""; // 0x4db PushV
	var_272_object = var_256_object; // 0x4dc Mov
	var_273_string = "health"; // 0x4dd MovS
	func_1230(var_271_bool, var_272_object, var_273_string); // 0x4de NEW_2
	var_274_bool = var_271_bool == 0; // 0x4e0 Not
	if(var_274_bool == 0) goto Label_1252; // 0x4e1 JumpB
	var_255_float = 0.0; // 0x4e2 MovF
	return 12; // 0x4e3 Return
	
Label_1252:
	var_275_bool = 0; var_276_object = Obj(); var_277_string = ""; // 0x4e4 PushV
	var_276_object = var_256_object; // 0x4e5 Mov
	var_277_string = "armor"; // 0x4e6 MovS
	func_1230(var_275_bool, var_276_object, var_277_string); // 0x4e7 NEW_2
	var_278_bool = var_275_bool == 0; // 0x4e9 Not
	if(var_278_bool == 0) goto Label_1261; // 0x4ea JumpB
	var_265_int = 0; // 0x4eb MovI
	goto Label_1264; // 0x4ec Jump
	
Label_1264:
	var_279_string = "armor_"; // 0x4f0 PushS
	var_280_string = ""; var_281_int = 0; // 0x4f1 PushV
	var_281_int = var_258_int; // 0x4f2 Mov
	func_1189(var_280_string, var_281_int); // 0x4f3 NEW_2
	var_266_string = var_279_string + var_280_string; // 0x4f5 Add2
	var_286_bool = 0; var_287_object = Obj(); var_288_string = ""; // 0x4f6 PushV
	var_287_object = var_256_object; // 0x4f7 Mov
	var_288_string = var_266_string; // 0x4f8 Mov
	func_1230(var_286_bool, var_287_object, var_288_string); // 0x4f9 NEW_2
	var_289_bool = var_286_bool == 0; // 0x4fb Not
	if(var_289_bool == 0) goto Label_1279; // 0x4fc JumpB
	var_267_int = 0; // 0x4fd MovI
	goto Label_1281; // 0x4fe Jump
	
Label_1281:
	var_290_float = 0; var_291_float = 0; var_292_float = 0; // 0x501 PushV
	var_293_int = var_265_int + var_267_int; // 0x502 Add
	var_294_float = 100.0; // 0x503 PushF
	var_291_float = var_293_int / var_293_int; // 0x504 Div2
	var_292_float = 1; // 0x505 MovI
	func_1683(var_290_float, var_291_float, var_292_float); // 0x506 NEW_2
	var_268_float = var_290_float; // 0x507 Mov
	var_296_string = "health"; // 0x509 PushS
	GetProperty(var_296_string, var_269_float); // 0x50a ObjFunc
	var_297_int = 1; // 0x50c PushI
	var_298_int = var_297_int - var_268_float; // 0x50d Sub
	var_270_float = var_257_float * var_298_int; // 0x50e Mult2
	var_299_string = "health"; // 0x50f PushS
	var_300_float = 0; var_301_float = 0; var_302_float = 0; var_303_float = 0; // 0x510 PushV
	var_301_float = var_269_float - var_270_float; // 0x511 Sub2
	var_302_float = 0; // 0x512 MovI
	var_303_float = 1; // 0x513 MovI
	func_1690(var_300_float, var_301_float, var_302_float, var_303_float); // 0x514 NEW_2
	SetProperty(var_299_string, var_300_float); // 0x516 ObjFunc
	var_306_bool = 0; var_307_object = Obj(); // 0x518 PushV
	var_307_object = var_256_object; // 0x519 Mov
	func_1225(var_306_bool, var_307_object); // 0x51a NEW_2
	if(var_306_bool == 0) goto Label_1313; // 0x51c JumpB
	var_308_float = 0; // 0x51d PushV
	var_308_float = -var_270_float; // 0x51e Neg2
	func_1743(var_308_float); // 0x51f NEW_2
	
Label_1313:
	var_255_float = var_270_float; // 0x521 Mov
	return 12; // 0x522 Return
	
Label_1279:
	GetProperty(var_266_string, var_267_int); // 0x4ff ObjFunc
	
Label_1261:
	var_316_string = "armor"; // 0x4ed PushS
	GetProperty(var_316_string, var_265_int); // 0x4ee ObjFunc
}


func_859()
{
	func_1996(); // 0x35c NEW_2
	
Label_862:
	func_945(var_20_cvector, var_14_object); // 0x35f NEW_2
	goto Label_862; // 0x361 Jump
}


func_120(var_0_object, var_364_object)
{
	var_367_bool = 0; var_368_int = 0; var_369_int = 0; var_370_bool = 0; var_371_int = 0; var_372_int = 0; // 0x78 PushV
	var_0_object = var_364_object; // 0x79 TMov
	var_373_object = Obj(); // 0x7a PushV
	var_373_object = var_0_object; // 0x7b MovT
	func_1772(var_373_object); // 0x7c NEW_2
	CanSee(var_372_int, var_0_object); // 0x7e Func
	var_374_object = var_1_object; // 0x80 PushT
	if(var_374_object == 0) goto Label_143; // 0x81 JumpB
	var_375_bool = 0; var_376_object = Obj(); // 0x82 PushV
	var_376_object = var_0_object; // 0x83 MovT
	func_2070(var_375_bool, var_376_object); // 0x84 NEW_2
	if(var_375_bool == 0) goto Label_141; // 0x86 JumpB
	var_386_object = Obj(); var_387_bool = 0; // 0x87 PushV
	var_386_object = var_0_object; // 0x88 MovT
	var_387_bool = 1; // 0x89 MovB
	func_2003(var_386_object, var_387_bool); // 0x8a NEW_2
	return 6; // 0x8c Return
	
Label_141:
	Face(var_0_object); // 0x8d Func
	
Label_143:
	func_1781(); // 0x90 NEW_2
	var_388_string = "all"; // 0x92 PushS
	var_389_string = "shoot_begin"; // 0x93 PushS
	PlayAnimation(var_388_string, var_389_string); // 0x94 Func
	WaitForAnimEnd(var_370_bool); // 0x96 Func
	var_390_bool = var_370_bool == 0; // 0x98 Not
	if(var_390_bool == 0) goto Label_157; // 0x99 JumpB
	StopAsync(); // 0x9a Func
	return 6; // 0x9c Return
	
Label_157:
	var_391_string = "shot"; // 0x9d PushS
	var_392_cvector = CVector(0.0, 150.0, 0.0); // 0x9e PushVec
	var_393_int = 800; // 0x9f PushI
	var_394_int = 100000; // 0xa0 PushI
	PlayGlobalSound(var_391_string, var_392_cvector, var_393_int, var_394_int); // 0xa1 Func
	var_395_string = "all"; // 0xa3 PushS
	var_396_string = "shoot_end"; // 0xa4 PushS
	PlayAnimation(var_395_string, var_396_string); // 0xa5 Func
	WaitForAnimEnd(var_370_bool); // 0xa7 Func
	var_397_bool = var_370_bool == 0; // 0xa9 Not
	if(var_397_bool == 0) goto Label_174; // 0xaa JumpB
	StopAsync(); // 0xab Func
	return 6; // 0xad Return
	
Label_174:
	var_398_string = "all"; // 0xae PushS
	var_399_string = "shoot_end"; // 0xaf PushS
	LockAnimationEnd(var_398_string, var_399_string); // 0xb0 Func
	var_371_int = 0; // 0xb2 MovI
	var_372_int = 0; // 0xb3 MovI
	
Label_180:
	var_400_int = 20; // 0xb4 PushI
	var_401_bool = var_372_int < var_400_int; // 0xb5 LT
	if(var_401_bool == 0) goto Label_232; // 0xb6 JumpB
	var_402_object = Obj(); // 0xb7 PushV
	var_402_object = var_0_object; // 0xb8 MovT
	func_1772(var_402_object); // 0xb9 NEW_2
	var_403_float = 0.5; // 0xbb PushF
	Sleep(var_403_float, var_370_bool); // 0xbc Func
	var_404_bool = var_370_bool == 0; // 0xbe Not
	if(var_404_bool == 0) goto Label_193; // 0xbf JumpB
	return 6; // 0xc0 Return
	
Label_193:
	CanSee(var_372_int, var_0_object); // 0xc1 Func
	var_405_object = var_1_object; // 0xc3 PushT
	if(var_405_object == 0) goto Label_215; // 0xc4 JumpB
	var_371_int = 0; // 0xc5 MovI
	var_406_bool = 0; var_407_object = Obj(); // 0xc6 PushV
	var_407_object = var_0_object; // 0xc7 MovT
	func_2070(var_406_bool, var_407_object); // 0xc8 NEW_2
	if(var_406_bool == 0) goto Label_212; // 0xca JumpB
	func_274(); // 0xcc NEW_2
	var_408_object = Obj(); var_409_bool = 0; // 0xce PushV
	var_408_object = var_0_object; // 0xcf MovT
	var_409_bool = 0; // 0xd0 MovB
	func_2003(var_408_object, var_409_bool); // 0xd1 NEW_2
	return 6; // 0xd3 Return
	
Label_212:
	Face(var_0_object); // 0xd4 Func
	goto Label_229; // 0xd6 Jump
	
Label_229:
	var_410_int = 1; // 0xe5 PushI
	var_372_int = var_372_int + var_410_int; // 0xe6 Add2
	goto Label_180; // 0xe7 Jump
	
Label_215:
	StopAsync(); // 0xd7 Func
	var_411_int = 1; // 0xd9 PushI
	var_371_int = var_371_int + var_411_int; // 0xda Add2
	var_412_int = 4; // 0xdb PushI
	var_413_bool = var_371_int == var_412_int; // 0xdc Eq
	if(var_413_bool == 0) goto Label_229; // 0xdd JumpB
	var_414_string = "all"; // 0xde PushS
	var_415_string = "attack_off"; // 0xdf PushS
	PlayAnimation(var_414_string, var_415_string); // 0xe0 Func
	WaitForAnimEnd(); // 0xe2 Func
	return 6; // 0xe4 Return
	
Label_232:
	func_274(); // 0xe9 NEW_2
	var_416_object = Obj(); var_417_bool = 0; // 0xeb PushV
	var_416_object = var_364_object; // 0xec Mov
	var_417_bool = 0; // 0xed MovB
	func_2003(var_416_object, var_417_bool); // 0xee NEW_2
	return 6; // 0xf0 Return
}


func_2014(var_130_object)
{
	var_131_bool = 0; var_132_bool = 0; // 0x7de PushV
	var_133_bool = var_130_object == 0; // 0x7df NullEq
	if(var_133_bool == 0) goto Label_2018; // 0x7e0 JumpB
	return 2; // 0x7e1 Return
	
Label_2018:
	var_134_object = GlobalVars[0]; // 0x7e2 PushGE
	in(var_132_bool, var_130_object); // 0x7e3 ObjFunc
	var_135_bool = var_132_bool == 0; // 0x7e5 Not
	if(var_135_bool == 0) goto Label_2026; // 0x7e6 JumpB
	var_136_object = GlobalVars[0]; // 0x7e7 PushGE
	add(var_130_object); // 0x7e8 ObjFunc
	
Label_2026:
	var_137_bool = 0; var_138_object = Obj(); // 0x7ea PushV
	var_138_object = var_130_object; // 0x7eb Mov
	func_1225(var_137_bool, var_138_object); // 0x7ec NEW_2
	if(var_137_bool == 0) goto Label_2037; // 0x7ee JumpB
	var_141_object = Obj(); // 0x7ef PushV
	func_1663(var_141_object); // 0x7f0 NEW_2
	var_144_float = 0.0; // 0x7f2 PushF
	ReportReputationChange(var_130_object, var_141_object, var_144_float); // 0x7f3 Func
	
Label_2037:
	return 2; // 0x7f5 Return
}


func_1760(var_25_bool, var_26_string, var_27_string)
{
	var_28_object = Obj(); var_29_object = Obj(); // 0x6e0 PushV
	FindActor(var_29_object, var_26_string); // 0x6e1 Func
	var_30_bool = var_29_object == 0; // 0x6e3 NullEq
	if(var_30_bool == 0) goto Label_1767; // 0x6e4 JumpB
	var_25_bool = 0; // 0x6e5 MovB
	return 2; // 0x6e6 Return
	
Label_1767:
	Trigger(var_29_object, var_27_string); // 0x6e7 Func
	var_25_bool = 1; // 0x6e9 MovB
	return 2; // 0x6ea Return
}


func_1506()
{
	var_332_cvector = CVector(0,0,0); var_333_cvector = CVector(0,0,0); var_334_cvector = CVector(0,0,0); var_335_cvector = CVector(0,0,0); var_336_cvector = CVector(0,0,0); var_337_cvector = CVector(0,0,0); // 0x5e2 PushV
	GetPosition(var_335_cvector); // 0x5e3 ObjFunc
	GetPosition(var_336_cvector); // 0x5e5 Func
	var_337_cvector = var_335_cvector - var_336_cvector; // 0x5e7 Sub2
	var_338_float = GetByIndex(var_337_cvector, 0); // 0x5e8 PushE
	var_339_float = GetByIndex(var_337_cvector, 2); // 0x5e9 PushE
	RotateAsync(var_338_float, var_339_float); // 0x5ea Func
	return 6; // 0x5ec Return
}


func_867()
{
	return 0; // 0x363 Return
}


func_1380(var_28_object)
{
	var_29_bool = 0; var_30_int = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_string = ""; var_36_bool = 0; var_37_int = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_string = ""; // 0x564 PushV
	var_43_bool = var_28_object == 0; // 0x565 NullEq
	if(var_43_bool == 0) goto Label_1384; // 0x566 JumpB
	return 14; // 0x567 Return
	
Label_1384:
	IsDead(var_36_bool); // 0x568 Func
	var_44_bool = var_36_bool; // 0x56a Push
	if(var_44_bool == 0) goto Label_1389; // 0x56b JumpB
	return 14; // 0x56c Return
	
Label_1389:
	GetSecondaryAnimationType(var_37_int); // 0x56d Func
	var_45_int = 0; // 0x56f PushI
	var_46_bool = var_37_int < var_45_int; // 0x570 LT
	if(var_46_bool == 0) goto Label_1395; // 0x571 JumpB
	return 14; // 0x572 Return
	
Label_1395:
	GetPosition(var_38_cvector); // 0x573 ObjFunc
	GetPosition(var_39_cvector); // 0x575 Func
	GetDirection(var_40_cvector); // 0x577 Func
	var_41_cvector = var_39_cvector - var_38_cvector; // 0x579 Sub2
	var_47_float = GetByIndex(var_41_cvector, 0); // 0x57a PushE
	var_48_float = GetByIndex(var_40_cvector, 0); // 0x57b PushE
	var_49_float = var_47_float * var_48_float; // 0x57c Mult
	var_50_float = GetByIndex(var_41_cvector, 2); // 0x57d PushE
	var_51_float = GetByIndex(var_40_cvector, 2); // 0x57e PushE
	var_52_float = var_50_float * var_51_float; // 0x57f Mult
	var_53_int = var_49_float + var_52_float; // 0x580 Add
	var_54_int = 0; // 0x581 PushI
	var_55_bool = var_53_int >= var_54_int; // 0x582 GE
	if(var_55_bool == 0) goto Label_1414; // 0x583 JumpB
	var_42_string = "fhit"; // 0x584 MovS
	goto Label_1415; // 0x585 Jump
	
Label_1415:
	var_56_string = "hit_react"; // 0x587 PushS
	var_57_string = "1"; // 0x588 PushS
	var_58_int = var_42_string + var_57_string; // 0x589 Add
	var_59_string = "2"; // 0x58a PushS
	var_60_int = var_42_string + var_59_string; // 0x58b Add
	var_61_int = -10; // 0x58c PushI
	FadeSecondaryAnimation(var_56_string, var_58_int, var_60_int, var_61_int); // 0x58d Func
	return 14; // 0x58f Return
	
Label_1414:
	var_42_string = "bhit"; // 0x586 MovS
}


func_1772(var_148_object)
{
	var_149_bool = 0; var_150_bool = 0; // 0x6ec PushV
	IsPlayerActor(var_148_object, var_150_bool); // 0x6ed Func
	var_151_bool = var_150_bool; // 0x6ef Push
	if(var_151_bool == 0) goto Label_1780; // 0x6f0 JumpB
	var_152_string = "attack"; // 0x6f1 PushS
	PlayGlobalMusic(var_152_string); // 0x6f2 Func
	
Label_1780:
	return 2; // 0x6f4 Return
}


func_1517(var_94_float)
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); // 0x5ed PushV
	GetPosition(var_98_cvector); // 0x5ee ObjFunc
	GetPosition(var_99_cvector); // 0x5f0 Func
	var_100_cvector = var_98_cvector - var_99_cvector; // 0x5f2 Sub2
	var_101_float = GetByIndex(var_100_cvector, 0); // 0x5f3 PushE
	var_102_float = GetByIndex(var_100_cvector, 2); // 0x5f4 PushE
	RotateAsync(var_101_float, var_102_float, var_94_float); // 0x5f5 Func
	return 6; // 0x5f7 Return
}


func_2158(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_bool = 0; // 0x86e PushV
	var_16_bool = 0; var_17_object = Obj(); // 0x86f PushV
	var_17_object = var_13_object; // 0x870 Mov
	func_1356(var_16_bool, var_17_object); // 0x871 NEW_2
	var_50_bool = var_16_bool == 0; // 0x873 Not
	if(var_50_bool == 0) goto Label_2167; // 0x874 JumpB
	var_12_bool = 0; // 0x875 MovB
	return 2; // 0x876 Return
	
Label_2167:
	var_51_object = GlobalVars[0]; // 0x877 PushGE
	in(var_15_bool, var_13_object); // 0x878 ObjFunc
	var_52_bool = var_15_bool; // 0x87a Push
	if(var_52_bool == 0) goto Label_2174; // 0x87b JumpB
	var_12_bool = 1; // 0x87c MovB
	return 2; // 0x87d Return
	
Label_2174:
	var_53_bool = 0; var_54_object = Obj(); // 0x87e PushV
	var_54_object = var_13_object; // 0x87f Mov
	func_2078(var_53_bool, var_54_object); // 0x880 NEW_2
	var_12_bool = var_53_bool; // 0x881 Mov
	return 2; // 0x883 Return
}


func_1781()
{
	var_153_object = Obj(); var_154_object = Obj(); // 0x6f5 PushV
	GetScene(var_154_object); // 0x6f6 Func
	var_155_string = "battle"; // 0x6f8 PushS
	var_156_object = Obj(); // 0x6f9 PushV
	func_1663(var_156_object); // 0x6fa NEW_2
	BroadcastMessage(var_155_string, var_156_object, var_154_object); // 0x6fc Func
	return 2; // 0x6fe Return
}


func_2038(var_145_object)
{
	var_146_object = Obj(); // 0x7f7 PushV
	var_146_object = var_145_object; // 0x7f8 Mov
	func_2014(var_146_object); // 0x7f9 NEW_2
	var_147_object = Obj(); var_148_bool = 0; // 0x7fb PushV
	var_147_object = var_145_object; // 0x7fc Mov
	var_148_bool = 1; // 0x7fd MovB
	func_2003(var_147_object, var_148_bool); // 0x7fe NEW_2
	return 0; // 0x800 Return
}


func_1528(var_246_float)
{
	var_248_float = 0; var_249_float = 0; var_250_float = 0; var_251_float = 0; // 0x5f8 PushV
	GetEyesHeight(var_250_float); // 0x5f9 Func
	GetEyesHeight(var_251_float); // 0x5fb ObjFunc
	var_246_float = var_251_float - var_250_float; // 0x5fd Sub2
	return 4; // 0x5fe Return
}


func_1663(var_16_object)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x67f PushV
	self(var_18_object); // 0x680 Func
	var_16_object = var_18_object; // 0x682 Mov
	return 2; // 0x683 Return
}


