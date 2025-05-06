task_0_event_41(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	func_24(); // 0x22 NEW_2
	var_13_object = Obj(); // 0x24 PushV
	var_13_object = var_11_cvector; // 0x25 Mov
	func_1829(); // 0x26 NEW_2
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
	func_1500(); // 0x3b NEW_2
	
Label_61:
	return 0; // 0x3d Return
}


	task_0_event_17(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_cvector, var_13_cvector, var_100_object)
	{
	var_101_bool = 0; var_102_object = Obj(); // 0x3f PushV
	var_102_object = var_100_object; // 0x40 Mov
	func_1350(var_101_bool, var_102_object); // 0x41 NEW_2
	var_129_bool = var_101_bool == 0; // 0x43 Not
	if(var_129_bool == 0) goto Label_74; // 0x44 JumpB
	var_130_object = Obj(); // 0x45 PushV
	var_130_object = var_100_object; // 0x46 Mov
	func_2001(var_130_object); // 0x47 NEW_2
	return 0; // 0x49 Return
	
Label_74:
	func_24(); // 0x4b NEW_2
	var_146_object = Obj(); // 0x4d PushV
	var_146_object = var_100_object; // 0x4e Mov
	func_2025(var_146_object); // 0x4f NEW_2
	return 0; // 0x51 Return
	}


task_0_event_30(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_cvector, var_13_cvector)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_bool = 0; // 0x53 PushV
	var_15_object = var_11_object; // 0x54 Mov
	var_16_object = var_12_cvector; // 0x55 Mov
	var_17_bool = var_13_cvector; // 0x56 Mov
	func_2173(var_14_bool, var_15_object, var_16_object, var_17_bool); // 0x57 NEW_2
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
	func_2145(var_12_bool, var_13_object); // 0x62 NEW_2
	if(var_12_bool == 0) goto Label_108; // 0x64 JumpB
	func_24(); // 0x66 NEW_2
	var_132_object = Obj(); // 0x68 PushV
	var_132_object = var_11_cvector; // 0x69 Mov
	func_2167(var_132_object); // 0x6a NEW_2
	
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
	var_101_bool = 0; var_102_object = Obj(); // 0xef PushV
	var_102_object = var_100_object; // 0xf0 Mov
	func_1350(var_101_bool, var_102_object); // 0xf1 NEW_2
	var_129_bool = var_101_bool == 0; // 0xf3 Not
	if(var_129_bool == 0) goto Label_250; // 0xf4 JumpB
	var_130_object = Obj(); // 0xf5 PushV
	var_130_object = var_100_object; // 0xf6 Mov
	func_2001(var_130_object); // 0xf7 NEW_2
	return 0; // 0xf9 Return
	
Label_250:
	func_271(); // 0xfb NEW_2
	var_145_object = Obj(); // 0xfd PushV
	var_145_object = var_100_object; // 0xfe Mov
	func_2025(var_145_object); // 0xff NEW_2
	return 0; // 0x101 Return
	}


task_1_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_cvector, var_13_cvector)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_bool = 0; // 0x103 PushV
	var_15_object = var_11_object; // 0x104 Mov
	var_16_object = var_12_cvector; // 0x105 Mov
	var_17_bool = var_13_cvector; // 0x106 Mov
	func_2173(var_14_bool, var_15_object, var_16_object, var_17_bool); // 0x107 NEW_2
	if(var_14_bool == 0) goto Label_270; // 0x109 JumpB
	var_100_object = Obj(); // 0x10a PushV
	var_100_object = var_11_object; // 0x10b Mov
	func_238(); // 0x10c NEW_2
	
Label_270:
	return 0; // 0x10e Return
}


task_1_event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	func_271(); // 0x118 NEW_2
	var_12_object = Obj(); // 0x11a PushV
	var_12_object = var_11_cvector; // 0x11b Mov
	func_1829(); // 0x11c NEW_2
	return 0; // 0x11e Return
}


task_2_event_3(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; // 0x1b0 PushV
	var_12_bool = 0; // 0x1b1 MovB
	var_13_bool = var_2_bool; // 0x1b2 PushT
	if(var_13_bool == 0) goto Label_439; // 0x1b3 JumpB
	var_14_bool = var_11_cvector == var_0_object; // 0x1b4 Eq
	if(var_14_bool == 0) goto Label_439; // 0x1b5 JumpB
	var_12_bool = 1; // 0x1b6 MovB
	
Label_439:
	if(var_12_bool == 0) goto Label_444; // 0x1b7 JumpB
	var_15_object = Obj(); // 0x1b8 PushV
	var_15_object = var_0_object; // 0x1b9 MovT
	func_1500(); // 0x1ba NEW_2
	
Label_444:
	return 0; // 0x1bc Return
}


task_2_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; // 0x1be PushV
	var_12_bool = 0; // 0x1bf MovB
	var_13_bool = var_2_bool; // 0x1c0 PushT
	if(var_13_bool == 0) goto Label_453; // 0x1c1 JumpB
	var_14_bool = var_11_cvector == var_0_object; // 0x1c2 Eq
	if(var_14_bool == 0) goto Label_453; // 0x1c3 JumpB
	var_12_bool = 1; // 0x1c4 MovB
	
Label_453:
	if(var_12_bool == 0) goto Label_461; // 0x1c5 JumpB
	var_15_string = "@Stop hunt"; // 0x1c6 PushS
	Trace(var_15_string); // 0x1c7 Func
	StopAnimation(); // 0x1c9 Func
	StopGroup0(); // 0x1cb Func
	
Label_461:
	return 0; // 0x1cd Return
}


	task_2_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_cvector, var_13_cvector, var_100_object)
	{
	var_101_bool = 0; var_102_object = Obj(); // 0x24d PushV
	var_102_object = var_100_object; // 0x24e Mov
	func_1350(var_101_bool, var_102_object); // 0x24f NEW_2
	var_129_bool = var_101_bool == 0; // 0x251 Not
	if(var_129_bool == 0) goto Label_596; // 0x252 JumpB
	return 0; // 0x253 Return
	
Label_596:
	var_130_object = Obj(); // 0x254 PushV
	var_130_object = var_100_object; // 0x255 Mov
	func_2001(var_130_object); // 0x256 NEW_2
	var_145_bool = var_100_object == var_0_object; // 0x258 Eq
	if(var_145_bool == 0) goto Label_604; // 0x259 JumpB
	var_1_object = 0; // 0x25a SetNullT
	goto Label_611; // 0x25b Jump
	
Label_611:
	return 0; // 0x263 Return
	
Label_604:
	var_1_object = var_100_object; // 0x25c TMov
	var_146_bool = var_2_bool; // 0x25d PushT
	if(var_146_bool == 0) goto Label_611; // 0x25e JumpB
	StopAnimation(); // 0x25f Func
	StopGroup0(); // 0x261 Func
	}


task_2_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_cvector, var_13_cvector)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_bool = 0; // 0x265 PushV
	var_15_object = var_11_object; // 0x266 Mov
	var_16_object = var_12_cvector; // 0x267 Mov
	var_17_bool = var_13_cvector; // 0x268 Mov
	func_2173(var_14_bool, var_15_object, var_16_object, var_17_bool); // 0x269 NEW_2
	if(var_14_bool == 0) goto Label_624; // 0x26b JumpB
	var_100_object = Obj(); // 0x26c PushV
	var_100_object = var_11_object; // 0x26d Mov
	func_588(); // 0x26e NEW_2
	
Label_624:
	return 0; // 0x270 Return
}


task_3_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; var_13_bool = 0; // 0x275 PushV
	IsPlayerActor(var_11_cvector, var_13_bool); // 0x276 Func
	var_14_bool = var_13_bool; // 0x278 Push
	if(var_14_bool == 0) goto Label_650; // 0x279 JumpB
	var_15_bool = 0; // 0x27a PushV
	func_2199(var_15_bool); // 0x27b NEW_2
	if(var_15_bool == 0) goto Label_644; // 0x27d JumpB
	var_20_bool = 0; var_21_string = ""; var_22_string = ""; // 0x27e PushV
	var_21_string = "quest_d11_01"; // 0x27f MovS
	var_22_string = "soldier_attack"; // 0x280 MovS
	func_1747(var_20_bool, var_21_string, var_22_string); // 0x281 NEW_2
	goto Label_650; // 0x283 Jump
	
Label_650:
	return 2; // 0x28a Return
	
Label_644:
	var_26_object = Obj(); // 0x284 PushV
	var_26_object = var_11_cvector; // 0x285 Mov
	TaskCall(4); // 0x286 TaskCall
	func_672(var_26_object); // 0x287 NEW_2
	TaskReturn(); // 0x288 TaskReturn
}


task_3_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; var_13_string = ""; var_14_string = ""; // 0x28c PushV
	var_13_string = "quest_d11_01"; // 0x28d MovS
	var_14_string = "soldier_attack"; // 0x28e MovS
	func_1747(var_12_bool, var_13_string, var_14_string); // 0x28f NEW_2
	return 0; // 0x291 Return
}


task_3_event_26(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_string, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_string = "attack"; // 0x293 PushS
	var_13_bool = var_11_cvector == var_12_string; // 0x294 Eq
	if(var_13_bool == 0) goto Label_671; // 0x295 JumpB
	var_14_object = Obj(); // 0x296 PushV
	var_15_object = Obj(); // 0x297 PushV
	func_1212(var_15_object); // 0x298 NEW_2
	var_14_object = var_15_object; // 0x299 Mov
	TaskCall(6); // 0x29b TaskCall
	func_840(var_14_object); // 0x29c NEW_2
	TaskReturn(); // 0x29d TaskReturn
	
Label_671:
	return 0; // 0x29f Return
}


task_4_event_2(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = var_11_cvector == var_0_object; // 0x2b2 Eq
	if(var_12_bool == 0) goto Label_695; // 0x2b3 JumpB
	func_784(var_11_cvector); // 0x2b5 NEW_2
	
Label_695:
	return 0; // 0x2b7 Return
}


task_4_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; var_13_string = ""; var_14_string = ""; // 0x2b9 PushV
	var_13_string = "quest_d11_01"; // 0x2ba MovS
	var_14_string = "soldier_attack"; // 0x2bb MovS
	func_1747(var_12_bool, var_13_string, var_14_string); // 0x2bc NEW_2
	return 0; // 0x2be Return
}


task_4_event_26(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_string, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_string = "attack"; // 0x2c0 PushS
	var_13_bool = var_11_cvector == var_12_string; // 0x2c1 Eq
	if(var_13_bool == 0) goto Label_716; // 0x2c2 JumpB
	var_14_object = Obj(); // 0x2c3 PushV
	var_15_object = Obj(); // 0x2c4 PushV
	func_1212(var_15_object); // 0x2c5 NEW_2
	var_14_object = var_15_object; // 0x2c6 Mov
	TaskCall(6); // 0x2c8 TaskCall
	func_840(var_14_object); // 0x2c9 NEW_2
	TaskReturn(); // 0x2ca TaskReturn
	
Label_716:
	return 0; // 0x2cc Return
}


task_5_event_6(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector)
{
	StopAnimation(); // 0x32a Func
	return 0; // 0x32c Return
}


task_5_event_2(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = var_11_cvector == var_0_object; // 0x32e Eq
	if(var_12_bool == 0) goto Label_818; // 0x32f JumpB
	StopAnimation(); // 0x330 Func
	
Label_818:
	return 0; // 0x332 Return
}


task_5_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; var_13_string = ""; var_14_string = ""; // 0x334 PushV
	var_13_string = "quest_d11_01"; // 0x335 MovS
	var_14_string = "soldier_attack"; // 0x336 MovS
	func_1747(var_12_bool, var_13_string, var_14_string); // 0x337 NEW_2
	return 0; // 0x339 Return
}


task_5_event_26(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_string, var_10_cvector, var_11_cvector)
{
	var_12_string = "attack"; // 0x33b PushS
	var_13_bool = var_11_cvector == var_12_string; // 0x33c Eq
	if(var_13_bool == 0) goto Label_839; // 0x33d JumpB
	var_14_object = Obj(); // 0x33e PushV
	var_15_object = Obj(); // 0x33f PushV
	func_1212(var_15_object); // 0x340 NEW_2
	var_14_object = var_15_object; // 0x341 Mov
	TaskCall(6); // 0x343 TaskCall
	func_840(var_14_object); // 0x344 NEW_2
	TaskReturn(); // 0x345 TaskReturn
	
Label_839:
	return 0; // 0x347 Return
}


task_6_event_3(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object)
{
	var_12_bool = 0; var_13_bool = 0; // 0x35e PushV
	var_14_bool = 0; var_15_object = Obj(); // 0x35f PushV
	var_15_object = var_11_object; // 0x360 Mov
	func_1350(var_14_bool, var_15_object); // 0x361 NEW_2
	var_48_bool = var_14_bool == 0; // 0x363 Not
	if(var_48_bool == 0) goto Label_870; // 0x364 JumpB
	return 2; // 0x365 Return
	
Label_870:
	var_49_bool = 0; var_50_object = Obj(); // 0x366 PushV
	var_50_object = var_11_object; // 0x367 Mov
	func_2065(var_49_bool, var_50_object); // 0x368 NEW_2
	var_127_bool = var_49_bool == 0; // 0x36a Not
	if(var_127_bool == 0) goto Label_882; // 0x36b JumpB
	var_128_object = GlobalVars[0]; // 0x36c PushGE
	in(var_13_bool, var_11_object); // 0x36d ObjFunc
	var_129_bool = var_13_bool == 0; // 0x36f Not
	if(var_129_bool == 0) goto Label_882; // 0x370 JumpB
	return 2; // 0x371 Return
	
Label_882:
	func_1023(); // 0x373 NEW_2
	var_130_object = Obj(); // 0x375 PushV
	var_130_object = var_11_object; // 0x376 Mov
	TaskCall(0); // 0x377 TaskCall
	func_0(var_131_object, var_130_object); // 0x378 NEW_2
	TaskReturn(); // 0x379 TaskReturn
	return 2; // 0x37b Return
}


	task_6_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object, var_12_object, var_13_bool, var_100_object)
	{
	var_101_bool = 0; var_102_object = Obj(); // 0x37d PushV
	var_102_object = var_100_object; // 0x37e Mov
	func_1350(var_101_bool, var_102_object); // 0x37f NEW_2
	var_129_bool = var_101_bool == 0; // 0x381 Not
	if(var_129_bool == 0) goto Label_904; // 0x382 JumpB
	var_130_object = Obj(); // 0x383 PushV
	var_130_object = var_100_object; // 0x384 Mov
	func_2001(var_130_object); // 0x385 NEW_2
	return 0; // 0x387 Return
	
Label_904:
	func_1023(); // 0x389 NEW_2
	var_145_object = Obj(); // 0x38b PushV
	var_145_object = var_100_object; // 0x38c Mov
	func_2025(var_145_object); // 0x38d NEW_2
	return 0; // 0x38f Return
	}


task_6_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object, var_12_object, var_13_bool)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_bool = 0; // 0x391 PushV
	var_15_object = var_11_object; // 0x392 Mov
	var_16_object = var_12_object; // 0x393 Mov
	var_17_bool = var_13_bool; // 0x394 Mov
	func_2173(var_14_bool, var_15_object, var_16_object, var_17_bool); // 0x395 NEW_2
	if(var_14_bool == 0) goto Label_924; // 0x397 JumpB
	var_100_object = Obj(); // 0x398 PushV
	var_100_object = var_11_object; // 0x399 Mov
	func_892(); // 0x39a NEW_2
	
Label_924:
	return 0; // 0x39c Return
}


task_6_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x39e PushV
	var_13_object = var_11_object; // 0x39f Mov
	func_2145(var_12_bool, var_13_object); // 0x3a0 NEW_2
	if(var_12_bool == 0) goto Label_938; // 0x3a2 JumpB
	func_1023(); // 0x3a4 NEW_2
	var_131_object = Obj(); // 0x3a6 PushV
	var_131_object = var_11_object; // 0x3a7 Mov
	func_2206(var_131_object); // 0x3a8 NEW_2
	
Label_938:
	return 0; // 0x3aa Return
}


task_7_event_0(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object)
{
	var_12_bool = 0; var_13_bool = 0; // 0x41a PushV
	IsOverrideActive(var_13_bool); // 0x41b Func
	var_14_bool = var_13_bool == 0; // 0x41d Not
	if(var_14_bool == 0) goto Label_1059; // 0x41e JumpB
	var_15_object = Obj(); // 0x41f PushV
	var_15_object = var_11_object; // 0x420 Mov
	func_1785(var_15_object); // 0x421 NEW_2
	
Label_1059:
	return 2; // 0x423 Return
}


task_7_event_22(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object, var_12_int, var_13_float, var_14_float)
{
	return 0; // 0x49a Return
}


task_7_event_16(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object, var_12_string)
{
	return 0; // 0x49c Return
}


task_7_event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object)
{
	return 0; // 0x49e Return
}


event_22(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object, var_12_int, var_13_float, var_14_float)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0; // 0x707 PushV
	var_15_object = var_11_object; // 0x708 Mov
	var_16_int = var_12_int; // 0x709 Mov
	var_17_float = var_13_float; // 0x70a Mov
	func_1418(var_15_object, var_16_int, var_17_float); // 0x70b NEW_2
	return 0; // 0x70d Return
}


event_43(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object, var_12_int, var_13_float, var_14_float, var_15_cvector, var_16_cvector)
{
	var_17_object = Obj(); var_18_int = 0; var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); // 0x70f PushV
	var_17_object = var_11_object; // 0x710 Mov
	var_18_int = var_12_int; // 0x711 Mov
	var_19_float = var_13_float; // 0x712 Mov
	var_20_cvector = var_15_cvector; // 0x713 Mov
	var_21_cvector = var_16_cvector; // 0x714 Mov
	func_1486(var_19_float, var_20_cvector, var_21_cvector); // 0x715 NEW_2
	return 0; // 0x717 Return
}


event_16(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object, var_12_string)
{
	var_13_float = 0; var_14_float = 0; // 0x718 PushV
	var_15_string = "health"; // 0x719 PushS
	var_16_bool = var_12_string == var_15_string; // 0x71a Eq
	if(var_16_bool == 0) goto Label_1828; // 0x71b JumpB
	var_17_string = "health"; // 0x71c PushS
	GetProperty(var_17_string, var_14_float); // 0x71d Func
	var_18_int = 0; // 0x71f PushI
	var_19_bool = var_14_float <= var_18_int; // 0x720 LE
	if(var_19_bool == 0) goto Label_1828; // 0x721 JumpB
	SignalDeath(var_11_object); // 0x722 Func
	
Label_1828:
	return 2; // 0x724 Return
}


event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x726 PushV
	var_13_object = var_11_object; // 0x727 Mov
	func_1219(var_12_bool, var_13_object); // 0x728 NEW_2
	if(var_12_bool == 0) goto Label_1842; // 0x72a JumpB
	var_16_object = Obj(); // 0x72b PushV
	func_1657(var_16_object); // 0x72c NEW_2
	var_19_float = 0.05; // 0x72e PushF
	var_20_bool = 1; // 0x72f PushB
	ReportReputationChange(var_11_object, var_16_object, var_19_float, var_20_bool); // 0x730 Func
	
Label_1842:
	var_21_object = Obj(); // 0x732 PushV
	var_21_object = var_11_object; // 0x733 Mov
	func_2212(var_21_object); // 0x734 NEW_2
	return 0; // 0x736 Return
}


main(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector)
{
	
Label_625:
	Hold(); // 0x271 Func
	goto Label_625; // 0x273 Jump
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
	func_1350(var_137_bool, var_138_object); // 0xd NEW_2
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


func_771(var_0_object)
{
	var_53_float = 0; var_54_float = 0; var_55_cvector = CVector(0,0,0); var_56_float = 0; var_57_float = 0; var_58_cvector = CVector(0,0,0); // 0x303 PushV
	GetEyesHeight(var_56_float); // 0x304 Func
	GetEyesHeight(var_57_float); // 0x306 TObjFunc
	var_58_cvector = CVector(0.0, 0.0, 0.0); // 0x308 MovV
	var_59_float = GetByIndex(var_58_cvector, 1); // 0x309 PushE
	var_59_float = var_57_float - var_56_float; // 0x30a Sub2
	SetByIndex(var_58_cvector, 1) = var_59_float; // 0x30b PopE
	var_60_string = "spine"; // 0x30c PushS
	DirLookAsyncRel(var_0_object, var_60_string, var_58_cvector); // 0x30d Func
	return 6; // 0x30f Return
}


func_1028()
{
	return 0; // 0x404 Return
}


func_1029(var_31_object)
{
	var_32_object = Obj(); // 0x406 PushV
	var_32_object = var_31_object; // 0x407 Mov
	func_1035(var_32_object); // 0x408 NEW_2
	return 0; // 0x40a Return
}


func_2057(var_368_bool, var_369_object)
{
	var_370_float = 0; var_371_object = Obj(); // 0x80a PushV
	var_371_object = var_369_object; // 0x80b Mov
	func_1204(var_371_object); // 0x80c NEW_2
	var_378_float = 40000.0; // 0x80e PushF
	var_368_bool = var_370_float <= var_378_float; // 0x80f LE2
	return 0; // 0x810 Return
}


func_1673(var_308_float, var_309_cvector, var_310_cvector)
{
	var_311_cvector = CVector(0,0,0); var_312_cvector = CVector(0,0,0); // 0x689 PushV
	var_312_cvector = var_310_cvector - var_309_cvector; // 0x68a Sub2
	var_308_float = var_312_cvector | var_312_cvector; // 0x68b Or2
	return 2; // 0x68c Return
}


func_1035(var_32_object)
{
	EventDisable(0); // 0x40c EventDisable
	var_33_object = Obj(); // 0x40d PushV
	var_33_object = var_32_object; // 0x40e Mov
	func_1060(var_33_object); // 0x40f NEW_2
	var_113_int = 50; // 0x411 PushI
	var_114_int = 40; // 0x412 PushI
	SetRTEnvelope(var_113_int, var_114_int); // 0x413 Func
	EventEnable(0); // 0x415 EventEnable
	
Label_1046:
	Hold(); // 0x416 Func
	goto Label_1046; // 0x418 Jump
}


func_1418(var_15_object, var_16_int, var_17_float)
{
	var_18_cvector = CVector(0,0,0); var_19_object = Obj(); var_20_int = 0; var_21_bool = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_int = 0; var_25_int = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_object = Obj(); var_29_int = 0; var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_int = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); // 0x58a PushV
	var_36_bool = 0; // 0x58b PushV
	var_36_bool = 0; // 0x58c MovB
	var_37_bool = 0; // 0x58d PushV
	var_37_bool = 0; // 0x58e MovB
	var_38_object = var_15_object; // 0x58f Push
	if(var_38_object == 0) goto Label_1429; // 0x590 JumpB
	var_39_int = 4; // 0x591 PushI
	var_40_bool = var_16_int != var_39_int; // 0x592 Neq
	if(var_40_bool == 0) goto Label_1429; // 0x593 JumpB
	var_37_bool = 1; // 0x594 MovB
	
Label_1429:
	if(var_37_bool == 0) goto Label_1434; // 0x595 JumpB
	var_41_int = 5; // 0x596 PushI
	var_42_bool = var_16_int != var_41_int; // 0x597 Neq
	if(var_42_bool == 0) goto Label_1434; // 0x598 JumpB
	var_36_bool = 1; // 0x599 MovB
	
Label_1434:
	if(var_36_bool == 0) goto Label_1481; // 0x59a JumpB
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0x59b PushV
	var_45_cvector = CVector(0,0,0); var_46_object = Obj(); // 0x59c PushV
	var_46_object = var_15_object; // 0x59d Mov
	func_1197(var_46_object); // 0x59e NEW_2
	var_44_cvector = var_45_cvector; // 0x59f Mov
	func_1663(var_43_cvector, var_44_cvector); // 0x5a1 NEW_2
	var_27_cvector = var_43_cvector; // 0x5a2 Mov
	CreateVectorVector(var_28_object); // 0x5a4 Func
	var_29_int = 1; // 0x5a6 MovI
	
Label_1447:
	var_56_string = "hit"; // 0x5a7 PushS
	var_57_int = var_56_string + var_29_int; // 0x5a8 Add
	GetGeometryLocator(var_57_int, var_30_bool, var_31_cvector, var_32_cvector); // 0x5a9 Func
	var_58_bool = var_30_bool == 0; // 0x5ab Not
	if(var_58_bool == 0) goto Label_1454; // 0x5ac JumpB
	goto Label_1463; // 0x5ad Jump
	
Label_1463:
	size(var_33_int); // 0x5b7 ObjFunc
	var_59_int = var_33_int; // 0x5b9 Push
	if(var_59_int == 0) goto Label_1480; // 0x5ba JumpB
	irand(var_34_int, var_33_int); // 0x5bb Func
	get(var_35_cvector, var_34_int); // 0x5bd ObjFunc
	var_60_object = Obj(); var_61_int = 0; var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); // 0x5bf PushV
	var_60_object = var_15_object; // 0x5c0 Mov
	var_61_int = var_16_int; // 0x5c1 Mov
	var_62_float = var_17_float; // 0x5c2 Mov
	var_63_cvector = var_35_cvector; // 0x5c3 Mov
	var_64_cvector = -var_27_cvector; // 0x5c4 Neg2
	func_1486(var_62_float, var_63_cvector, var_64_cvector); // 0x5c5 NEW_2
	return 18; // 0x5c7 Return
	
Label_1480:
	var_28_object = 0; // 0x5c8 SetNull
	
Label_1481:
	var_105_object = Obj(); // 0x5c9 PushV
	var_105_object = var_15_object; // 0x5ca Mov
	func_1374(var_105_object); // 0x5cb NEW_2
	return 18; // 0x5cd Return
	
Label_1454:
	var_106_int = var_32_cvector | var_27_cvector; // 0x5ae Or
	var_107_float = 0.70711; // 0x5af PushF
	var_108_bool = var_106_int >= var_107_float; // 0x5b0 GE
	if(var_108_bool == 0) goto Label_1460; // 0x5b1 JumpB
	add(var_31_cvector); // 0x5b2 ObjFunc
	
Label_1460:
	var_109_int = 1; // 0x5b4 PushI
	var_29_int = var_29_int + var_109_int; // 0x5b5 Add2
	goto Label_1447; // 0x5b6 Jump
}


func_1677(var_287_float, var_288_float, var_289_float)
{
	var_292_bool = var_288_float < var_289_float; // 0x68e LT
	if(var_292_bool == 0) goto Label_1682; // 0x68f JumpB
	var_287_float = var_288_float; // 0x690 Mov
	goto Label_1683; // 0x691 Jump
	
Label_1683:
	return 0; // 0x693 Return
	
Label_1682:
	var_287_float = var_289_float; // 0x692 Mov
}


func_1529(var_56_string)
{
	var_57_bool = 0; var_58_int = 0; var_59_bool = 0; var_60_int = 0; var_61_bool = 0; var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_bool = 0; var_66_int = 0; var_67_bool = 0; var_68_int = 0; var_69_bool = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x5f9 PushV
	IsExisting3DSound(var_65_bool, var_56_string); // 0x5fa Func
	var_73_bool = var_65_bool == 0; // 0x5fc Not
	if(var_73_bool == 0) goto Label_1554; // 0x5fd JumpB
	var_66_int = 0; // 0x5fe MovI
	
Label_1535:
	var_74_int = 1; // 0x5ff PushI
	var_75_int = var_66_int + var_74_int; // 0x600 Add
	var_76_int = var_56_string + var_75_int; // 0x601 Add
	IsExisting3DSound(var_67_bool, var_76_int); // 0x602 Func
	var_77_bool = var_67_bool == 0; // 0x604 Not
	if(var_77_bool == 0) goto Label_1543; // 0x605 JumpB
	goto Label_1546; // 0x606 Jump
	
Label_1546:
	var_78_bool = var_66_int == 0; // 0x60a Not
	if(var_78_bool == 0) goto Label_1549; // 0x60b JumpB
	return 16; // 0x60c Return
	
Label_1549:
	irand(var_68_int, var_66_int); // 0x60d Func
	var_79_int = 1; // 0x60f PushI
	var_80_int = var_68_int + var_79_int; // 0x610 Add
	var_56_string = var_56_string + var_80_int; // 0x611 Add2
	
Label_1554:
	Is3DSoundLoaded(var_69_bool, var_56_string); // 0x612 Func
	var_81_bool = var_69_bool; // 0x614 Push
	if(var_81_bool == 0) goto Label_1569; // 0x615 JumpB
	GetEyesHeight(var_70_float); // 0x616 Func
	GetDirection(var_71_cvector); // 0x618 Func
	var_82_int = 50; // 0x61a PushI
	var_72_cvector = var_71_cvector * var_82_int; // 0x61b Mult2
	var_83_float = GetByIndex(var_72_cvector, 1); // 0x61c PushE
	var_83_float = var_83_float + var_70_float; // 0x61d Add2
	SetByIndex(var_72_cvector, 1) = var_83_float; // 0x61e PopE
	PlayGlobalSound(var_56_string, var_72_cvector); // 0x61f Func
	
Label_1569:
	return 16; // 0x621 Return
	
Label_1543:
	var_84_int = 1; // 0x607 PushI
	var_66_int = var_66_int + var_84_int; // 0x608 Add2
	goto Label_1535; // 0x609 Jump
}


func_271()
{
	StopAsync(); // 0x10f Func
	StopGroup0(); // 0x111 Func
	Stop(); // 0x113 Func
	return 0; // 0x115 Return
}


func_784(var_1_object)
{
	StopGroup0(); // 0x310 Func
	var_1_object = 1; // 0x312 TMovB
	return 0; // 0x313 Return
}


func_2065(var_53_bool, var_54_object)
{
	var_55_float = 0; var_56_string = ""; var_57_float = 0; var_58_float = 0; var_59_string = ""; var_60_float = 0; // 0x811 PushV
	var_61_bool = 0; var_62_object = Obj(); // 0x812 PushV
	var_62_object = var_54_object; // 0x813 Mov
	func_1350(var_61_bool, var_62_object); // 0x814 NEW_2
	var_63_bool = var_61_bool == 0; // 0x816 Not
	if(var_63_bool == 0) goto Label_2074; // 0x817 JumpB
	var_53_bool = 0; // 0x818 MovB
	return 6; // 0x819 Return
	
Label_2074:
	var_64_bool = 0; var_65_object = Obj(); // 0x81a PushV
	var_65_object = var_54_object; // 0x81b Mov
	func_1219(var_64_bool, var_65_object); // 0x81c NEW_2
	if(var_64_bool == 0) goto Label_2085; // 0x81e JumpB
	var_68_string = "reputation"; // 0x81f PushS
	GetProperty(var_68_string, var_58_float); // 0x820 ObjFunc
	var_69_float = 0.33; // 0x822 PushF
	var_53_bool = var_58_float < var_69_float; // 0x823 LT2
	return 6; // 0x824 Return
	
Label_2085:
	var_70_bool = 0; var_71_object = Obj(); var_72_string = ""; // 0x825 PushV
	var_71_object = var_54_object; // 0x826 Mov
	var_72_string = "class"; // 0x827 MovS
	func_1224(var_70_bool, var_71_object, var_72_string); // 0x828 NEW_2
	var_73_bool = var_70_bool == 0; // 0x82a Not
	if(var_73_bool == 0) goto Label_2094; // 0x82b JumpB
	var_53_bool = 0; // 0x82c MovB
	return 6; // 0x82d Return
	
Label_2094:
	var_74_string = "class"; // 0x82e PushS
	GetProperty(var_74_string, var_59_string); // 0x82f ObjFunc
	var_75_bool = 0; // 0x831 PushV
	var_75_bool = 1; // 0x832 MovB
	var_76_bool = 0; // 0x833 PushV
	var_76_bool = 1; // 0x834 MovB
	var_77_string = "bomber"; // 0x835 PushS
	var_78_bool = var_59_string == var_77_string; // 0x836 Eq
	if(var_78_bool == 0) goto Label_2108; // 0x837 JumpB
	var_79_string = "hunter"; // 0x838 PushS
	var_80_bool = var_59_string == var_79_string; // 0x839 Eq
	if(var_80_bool == 0) goto Label_2108; // 0x83a JumpB
	var_76_bool = 0; // 0x83b MovB
	
Label_2108:
	if(var_76_bool == 0) goto Label_2113; // 0x83c JumpB
	var_81_string = "grabitel"; // 0x83d PushS
	var_82_bool = var_59_string == var_81_string; // 0x83e Eq
	if(var_82_bool == 0) goto Label_2113; // 0x83f JumpB
	var_75_bool = 0; // 0x840 MovB
	
Label_2113:
	if(var_75_bool == 0) goto Label_2116; // 0x841 JumpB
	var_53_bool = 1; // 0x842 MovB
	return 6; // 0x843 Return
	
Label_2116:
	var_83_bool = 0; var_84_object = Obj(); var_85_string = ""; // 0x844 PushV
	var_84_object = var_54_object; // 0x845 Mov
	var_85_string = "disease"; // 0x846 MovS
	func_1224(var_83_bool, var_84_object, var_85_string); // 0x847 NEW_2
	var_86_bool = var_83_bool == 0; // 0x849 Not
	if(var_86_bool == 0) goto Label_2125; // 0x84a JumpB
	var_53_bool = 0; // 0x84b MovB
	return 6; // 0x84c Return
	
Label_2125:
	var_87_bool = 0; // 0x84d PushV
	var_87_bool = 1; // 0x84e MovB
	var_88_bool = 0; var_89_string = ""; // 0x84f PushV
	var_89_string = var_59_string; // 0x850 Mov
	func_1570(var_88_bool, var_89_string); // 0x851 NEW_2
	if(var_88_bool == 0) goto Label_2136; // 0x853 JumpB
	var_127_string = "dog"; // 0x854 PushS
	var_128_bool = var_59_string == var_127_string; // 0x855 Eq
	if(var_128_bool == 0) goto Label_2136; // 0x856 JumpB
	var_87_bool = 0; // 0x857 MovB
	
Label_2136:
	if(var_87_bool == 0) goto Label_2143; // 0x858 JumpB
	var_129_string = "disease"; // 0x859 PushS
	GetProperty(var_129_string, var_60_float); // 0x85a ObjFunc
	var_130_int = 0; // 0x85c PushI
	var_53_bool = var_60_float > var_130_int; // 0x85d GT2
	return 6; // 0x85e Return
	
Label_2143:
	var_53_bool = 0; // 0x85f MovB
	return 6; // 0x860 Return
}


func_788(var_0_object, var_29_bool, var_30_object)
{
	var_32_bool = 0; var_33_bool = 0; // 0x314 PushV
	var_0_object = var_30_object; // 0x315 TMov
	var_34_object = Obj(); // 0x316 PushV
	var_34_object = var_0_object; // 0x317 MovT
	func_1500(); // 0x318 NEW_2
	var_43_string = "all"; // 0x31a PushS
	var_44_string = "attack_on"; // 0x31b PushS
	PlayAnimation(var_43_string, var_44_string); // 0x31c Func
	WaitForAnimEnd(var_33_bool); // 0x31e Func
	var_45_bool = var_33_bool == 0; // 0x320 Not
	if(var_45_bool == 0) goto Label_804; // 0x321 JumpB
	var_29_bool = 0; // 0x322 MovB
	return 2; // 0x323 Return
	
Label_804:
	var_46_string = "all"; // 0x324 PushS
	var_47_string = "attack_on"; // 0x325 PushS
	LockAnimationEnd(var_46_string, var_47_string); // 0x326 Func
	var_29_bool = 1; // 0x328 MovB
	return 2; // 0x329 Return
}


func_1684(var_297_float, var_298_float, var_299_float, var_300_float)
{
	var_301_bool = var_298_float < var_299_float; // 0x695 LT
	if(var_301_bool == 0) goto Label_1689; // 0x696 JumpB
	var_297_float = var_299_float; // 0x697 Mov
	return 0; // 0x698 Return
	
Label_1689:
	var_302_bool = var_298_float > var_300_float; // 0x699 GT
	if(var_302_bool == 0) goto Label_1693; // 0x69a JumpB
	var_297_float = var_300_float; // 0x69b Mov
	return 0; // 0x69c Return
	
Label_1693:
	var_297_float = var_298_float; // 0x69d Mov
	return 0; // 0x69e Return
}


func_1785(var_15_object)
{
	var_16_int = 0; // 0x6fa PushV
	func_1779(var_16_int); // 0x6fb NEW_2
	var_20_int = 1; // 0x6fd PushI
	var_21_bool = var_16_int == var_20_int; // 0x6fe Eq
	if(var_21_bool == 0) goto Label_1795; // 0x6ff JumpB
	WorkWithCorpse(var_15_object); // 0x700 Func
	goto Label_1797; // 0x702 Jump
	
Label_1797:
	return 0; // 0x705 Return
	
Label_1795:
	Barter(var_15_object); // 0x703 Func
}


func_2199(var_15_bool)
{
	var_16_int = 0; var_17_int = 0; // 0x897 PushV
	var_18_string = "d11q01SoldierAttack"; // 0x898 PushS
	GetVariable(var_18_string, var_17_int); // 0x899 Func
	var_19_int = 0; // 0x89b PushI
	var_15_bool = var_17_int != var_19_int; // 0x89c Neq2
	return 2; // 0x89d Return
}


func_24()
{
	StopAsync(); // 0x18 Func
	var_131_int = 100; // 0x1a PushI
	KillTimer(var_131_int); // 0x1b Func
	StopGroup0(); // 0x1d Func
	return 0; // 0x1f Return
}


func_1309(var_31_bool)
{
	var_33_bool = 0; var_34_bool = 0; // 0x51d PushV
	IsDead(var_34_bool); // 0x51e ObjFunc
	var_31_bool = var_34_bool; // 0x520 Mov
	return 2; // 0x521 Return
}


func_2206(var_131_object)
{
	var_132_object = Obj(); // 0x89f PushV
	var_132_object = var_131_object; // 0x8a0 Mov
	func_2036(var_132_object); // 0x8a1 NEW_2
	return 0; // 0x8a3 Return
}


func_1183(var_277_string, var_278_int)
{
	var_279_int = 2; // 0x4a0 PushI
	var_280_bool = var_278_int == var_279_int; // 0x4a1 Eq
	if(var_280_bool == 0) goto Label_1190; // 0x4a2 JumpB
	var_277_string = "fire"; // 0x4a3 MovS
	return 0; // 0x4a4 Return
	
Label_1190:
	var_281_int = 1; // 0x4a6 PushI
	var_282_bool = var_278_int == var_281_int; // 0x4a7 Eq
	if(var_282_bool == 0) goto Label_1195; // 0x4a8 JumpB
	var_277_string = "bullet"; // 0x4a9 MovS
	return 0; // 0x4aa Return
	
Label_1195:
	var_277_string = "phys"; // 0x4ab MovS
	return 0; // 0x4ac Return
}


func_672(var_26_object)
{
	var_29_bool = 0; var_30_object = Obj(); // 0x2a1 PushV
	var_30_object = var_26_object; // 0x2a2 Mov
	TaskCall(5); // 0x2a3 TaskCall
	func_788(var_31_object, var_29_bool, var_30_object); // 0x2a4 NEW_2
	TaskReturn(); // 0x2a5 TaskReturn
	if(var_31_object == 0) goto Label_688; // 0x2a7 JumpB
	var_48_object = Obj(); // 0x2a8 PushV
	var_48_object = var_26_object; // 0x2a9 Mov
	func_722(var_28_bool, var_26_object, var_48_object); // 0x2aa NEW_2
	var_143_string = "all"; // 0x2ac PushS
	var_144_string = "attack_off"; // 0x2ad PushS
	PlayAnimation(var_143_string, var_144_string); // 0x2ae Func
	
Label_688:
	return 0; // 0x2b0 Return
}


func_1695(var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj(); // 0x69f PushV
	CreateObjectSet(var_24_object); // 0x6a0 Func
	var_22_object = var_24_object; // 0x6a2 Mov
	return 2; // 0x6a3 Return
}


func_1314(var_20_bool, var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); // 0x522 PushV
	var_26_bool = var_21_object == 0; // 0x523 NullEq
	if(var_26_bool == 0) goto Label_1319; // 0x524 JumpB
	var_20_bool = 0; // 0x525 MovB
	return 4; // 0x526 Return
	
Label_1319:
	var_27_bool = 0; // 0x527 PushV
	var_27_bool = 0; // 0x528 MovB
	var_28_string = "IsDead"; // 0x529 PushS
	var_29_int = 1; // 0x52a PushI
	var_30_bool = IsFuncExist(var_21_object, var_28_string, var_29_int); // 0x52b FuncExist
	if(var_30_bool == 0) goto Label_1331; // 0x52c JumpB
	var_31_bool = 0; var_32_object = Obj(); // 0x52d PushV
	var_32_object = var_21_object; // 0x52e Mov
	func_1309(var_32_object); // 0x52f NEW_2
	if(var_31_bool == 0) goto Label_1331; // 0x531 JumpB
	var_27_bool = 1; // 0x532 MovB
	
Label_1331:
	if(var_27_bool == 0) goto Label_1334; // 0x533 JumpB
	var_20_bool = 0; // 0x534 MovB
	return 4; // 0x535 Return
	
Label_1334:
	GetScene(var_24_object); // 0x536 Func
	var_35_bool = var_24_object == 0; // 0x538 NullEq
	if(var_35_bool == 0) goto Label_1340; // 0x539 JumpB
	var_20_bool = 0; // 0x53a MovB
	return 4; // 0x53b Return
	
Label_1340:
	GetScene(var_25_object); // 0x53c ObjFunc
	var_36_bool = var_24_object != var_25_object; // 0x53e Neq
	if(var_36_bool == 0) goto Label_1346; // 0x53f JumpB
	var_20_bool = 0; // 0x540 MovB
	return 4; // 0x541 Return
	
Label_1346:
	var_20_bool = 1; // 0x542 MovB
	return 4; // 0x543 Return
}


func_287(var_0_object, var_1_object, var_2_bool, var_139_object, var_140_bool)
{
	var_144_bool = 0; var_145_bool = 0; var_146_bool = 0; var_147_bool = 0; // 0x11f PushV
	var_0_object = var_139_object; // 0x120 TMov
	var_148_object = Obj(); // 0x121 PushV
	var_148_object = var_0_object; // 0x122 MovT
	func_1759(var_148_object); // 0x123 NEW_2
	func_1768(); // 0x126 NEW_2
	Face(var_0_object); // 0x128 Func
	var_159_bool = var_140_bool; // 0x12a Push
	if(var_159_bool == 0) goto Label_306; // 0x12b JumpB
	var_160_string = "all"; // 0x12c PushS
	var_161_string = "attack_on"; // 0x12d PushS
	PlayAnimation(var_160_string, var_161_string); // 0x12e Func
	WaitForAnimEnd(); // 0x130 Func
	
Label_306:
	var_162_string = "all"; // 0x132 PushS
	var_163_string = "attack_on"; // 0x133 PushS
	LockAnimationEnd(var_162_string, var_163_string); // 0x134 Func
	var_164_bool = 1; // 0x136 PushB
	SetAttackState(var_164_bool); // 0x137 Func
	
Label_313:
	var_165_bool = 0; var_166_object = Obj(); // 0x139 PushV
	var_166_object = var_0_object; // 0x13a MovT
	func_1350(var_165_bool, var_166_object); // 0x13b NEW_2
	if(var_165_bool == 0) goto Label_419; // 0x13d JumpB
	CanSee(var_147_bool, var_0_object); // 0x13e Func
	var_167_bool = var_147_bool; // 0x140 Push
	if(var_167_bool == 0) goto Label_330; // 0x141 JumpB
	var_168_object = Obj(); // 0x142 PushV
	var_168_object = var_0_object; // 0x143 MovT
	func_1759(var_168_object); // 0x144 NEW_2
	func_467(var_147_bool); // 0x147 NEW_2
	goto Label_409; // 0x149 Jump
	
Label_409:
	var_322_bool = var_1_object != 0; // 0x199 NullNeq
	if(var_322_bool == 0) goto Label_415; // 0x19a JumpB
	func_462(var_146_bool, var_147_bool); // 0x19c NEW_2
	goto Label_418; // 0x19e Jump
	
Label_418:
	goto Label_313; // 0x1a2 Jump
	
Label_415:
	var_323_int = 2; // 0x19f PushI
	Sleep(var_323_int); // 0x1a0 Func
	
Label_330:
	var_324_object = Obj(); // 0x14a PushV
	var_324_object = var_0_object; // 0x14b MovT
	func_1500(); // 0x14c NEW_2
	var_2_bool = 1; // 0x14e TMovB
	var_333_string = "all"; // 0x14f PushS
	var_334_string = "hunt"; // 0x150 PushS
	PlayAnimation(var_333_string, var_334_string); // 0x151 Func
	WaitForAnimEnd(var_146_bool); // 0x153 Func
	var_335_bool = var_146_bool == 0; // 0x155 Not
	if(var_335_bool == 0) goto Label_353; // 0x156 JumpB
	var_336_bool = var_1_object != 0; // 0x157 NullNeq
	if(var_336_bool == 0) goto Label_348; // 0x158 JumpB
	func_462(var_146_bool, var_147_bool); // 0x15a NEW_2
	
Label_348:
	var_337_string = "all"; // 0x15c PushS
	var_338_string = "attack_on"; // 0x15d PushS
	LockAnimationEnd(var_337_string, var_338_string); // 0x15e Func
	goto Label_313; // 0x160 Jump
	
Label_353:
	var_339_bool = 0; var_340_object = Obj(); // 0x161 PushV
	var_340_object = var_0_object; // 0x162 MovT
	func_1350(var_339_bool, var_340_object); // 0x163 NEW_2
	var_341_bool = var_339_bool == 0; // 0x165 Not
	if(var_341_bool == 0) goto Label_360; // 0x166 JumpB
	goto Label_419; // 0x167 Jump
	
Label_419:
	var_342_bool = 0; // 0x1a3 PushB
	SetAttackState(var_342_bool); // 0x1a4 Func
	StopAsync(); // 0x1a6 Func
	var_343_string = "all"; // 0x1a8 PushS
	var_344_string = "attack_off"; // 0x1a9 PushS
	PlayAnimation(var_343_string, var_344_string); // 0x1aa Func
	WaitForAnimEnd(); // 0x1ac Func
	return 4; // 0x1ae Return
	
Label_360:
	CanSee(var_147_bool, var_0_object); // 0x168 Func
	var_345_bool = var_147_bool; // 0x16a Push
	if(var_345_bool == 0) goto Label_371; // 0x16b JumpB
	var_2_bool = 0; // 0x16c TMovB
	Face(var_0_object); // 0x16d Func
	func_467(var_147_bool); // 0x170 NEW_2
	goto Label_409; // 0x172 Jump
	
Label_371:
	var_346_string = "all"; // 0x173 PushS
	var_347_string = "attack_on"; // 0x174 PushS
	LockAnimationEnd(var_346_string, var_347_string); // 0x175 Func
	var_348_int = 3; // 0x177 PushI
	Sleep(var_348_int, var_146_bool); // 0x178 Func
	var_349_bool = var_146_bool == 0; // 0x17a Not
	if(var_349_bool == 0) goto Label_390; // 0x17b JumpB
	var_350_bool = var_1_object != 0; // 0x17c NullNeq
	if(var_350_bool == 0) goto Label_385; // 0x17d JumpB
	func_462(var_146_bool, var_147_bool); // 0x17f NEW_2
	
Label_385:
	var_351_string = "all"; // 0x181 PushS
	var_352_string = "attack_on"; // 0x182 PushS
	LockAnimationEnd(var_351_string, var_352_string); // 0x183 Func
	goto Label_313; // 0x185 Jump
	
Label_390:
	var_353_bool = 0; var_354_object = Obj(); // 0x186 PushV
	var_354_object = var_0_object; // 0x187 MovT
	func_1350(var_353_bool, var_354_object); // 0x188 NEW_2
	var_355_bool = var_353_bool == 0; // 0x18a Not
	if(var_355_bool == 0) goto Label_397; // 0x18b JumpB
	goto Label_419; // 0x18c Jump
	
Label_397:
	var_2_bool = 0; // 0x18d TMovB
	CanSee(var_147_bool, var_0_object); // 0x18e Func
	var_356_bool = var_147_bool; // 0x190 Push
	if(var_356_bool == 0) goto Label_408; // 0x191 JumpB
	Face(var_0_object); // 0x192 Func
	func_467(var_147_bool); // 0x195 NEW_2
	goto Label_409; // 0x197 Jump
	
Label_408:
	goto Label_419; // 0x198 Jump
}


func_1060(var_33_object)
{
	var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_string = ""; var_39_object = Obj(); var_40_bool = 0; var_41_bool = 0; var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_string = ""; var_49_object = Obj(); var_50_bool = 0; var_51_bool = 0; var_52_float = 0; var_53_cvector = CVector(0,0,0); // 0x424 PushV
	var_54_bool = var_33_object == 0; // 0x425 NullEq
	if(var_54_bool == 0) goto Label_1068; // 0x426 JumpB
	var_55_string = ""; // 0x427 PushV
	var_55_string = "fdie"; // 0x428 MovS
	func_1151(var_55_string); // 0x429 NEW_2
	goto Label_1150; // 0x42b Jump
	
Label_1150:
	return 20; // 0x47e Return
	
Label_1068:
	GetPosition(var_44_cvector); // 0x42c ObjFunc
	GetPosition(var_45_cvector); // 0x42e Func
	GetDirection(var_46_cvector); // 0x430 Func
	var_47_cvector = var_45_cvector - var_44_cvector; // 0x432 Sub2
	var_87_float = GetByIndex(var_47_cvector, 0); // 0x433 PushE
	var_88_float = GetByIndex(var_46_cvector, 0); // 0x434 PushE
	var_89_float = var_87_float * var_88_float; // 0x435 Mult
	var_90_float = GetByIndex(var_47_cvector, 2); // 0x436 PushE
	var_91_float = GetByIndex(var_46_cvector, 2); // 0x437 PushE
	var_92_float = var_90_float * var_91_float; // 0x438 Mult
	var_93_int = var_89_float + var_92_float; // 0x439 Add
	var_94_int = 0; // 0x43a PushI
	var_95_bool = var_93_int >= var_94_int; // 0x43b GE
	if(var_95_bool == 0) goto Label_1087; // 0x43c JumpB
	var_48_string = "fdie"; // 0x43d MovS
	goto Label_1088; // 0x43e Jump
	
Label_1088:
	RemoveRTEnvelope(); // 0x440 Func
	SetDeathState(); // 0x442 Func
	Stop(); // 0x444 Func
	StopAsync(); // 0x446 Func
	var_49_object = var_33_object; // 0x448 Mov
	var_96_string = "GetScriptProperty"; // 0x449 PushS
	var_97_int = 2; // 0x44a PushI
	var_98_bool = IsFuncExist(var_33_object, var_96_string, var_97_int); // 0x44b FuncExist
	if(var_98_bool == 0) goto Label_1112; // 0x44c JumpB
	var_99_string = "Owner"; // 0x44d PushS
	HasScriptProperty(var_50_bool, var_99_string); // 0x44e ObjFunc
	var_100_bool = var_50_bool; // 0x450 Push
	if(var_100_bool == 0) goto Label_1112; // 0x451 JumpB
	var_101_string = "Owner"; // 0x452 PushS
	GetScriptProperty(var_49_object, var_101_string); // 0x453 ObjFunc
	var_102_bool = var_49_object == 0; // 0x455 NullEq
	if(var_102_bool == 0) goto Label_1112; // 0x456 JumpB
	var_49_object = var_33_object; // 0x457 Mov
	
Label_1112:
	var_103_string = "@GetEyesHeight"; // 0x458 PushS
	var_104_int = 1; // 0x459 PushI
	var_105_bool = IsFuncExist(var_49_object, var_103_string, var_104_int); // 0x45a FuncExist
	if(var_105_bool == 0) goto Label_1127; // 0x45b JumpB
	GetEyesHeight(var_52_float); // 0x45c ObjFunc
	var_53_cvector = CVector(0.0, 0.0, 0.0); // 0x45e MovV
	var_106_float = GetByIndex(var_53_cvector, 1); // 0x45f PushE
	var_106_float = var_52_float; // 0x460 Mov
	SetByIndex(var_53_cvector, 1) = var_106_float; // 0x461 PopE
	var_107_string = "head"; // 0x462 PushS
	LookAsync(var_33_object, var_107_string, var_53_cvector); // 0x463 Func
	var_51_bool = 1; // 0x465 MovB
	goto Label_1128; // 0x466 Jump
	
Label_1128:
	var_108_string = ""; // 0x468 PushV
	var_108_string = var_48_string; // 0x469 Mov
	func_1529(var_108_string); // 0x46a NEW_2
	var_109_string = "all"; // 0x46c PushS
	PlayAnimation(var_109_string, var_48_string); // 0x46d Func
	WaitForAnimEnd(); // 0x46f Func
	var_110_bool = var_51_bool; // 0x471 Push
	if(var_110_bool == 0) goto Label_1144; // 0x472 JumpB
	StopAsync(); // 0x473 Func
	var_111_string = "head"; // 0x475 PushS
	UnlookAsync(var_111_string); // 0x476 Func
	
Label_1144:
	var_112_string = "all"; // 0x478 PushS
	LockAnimationEnd(var_112_string, var_48_string); // 0x479 Func
	RemoveEnvelope(); // 0x47b Func
	var_49_object = 0; // 0x47d SetNull
	
Label_1127:
	var_51_bool = 0; // 0x467 MovB
	
Label_1087:
	var_48_string = "bdie"; // 0x43f MovS
}


func_1701(var_210_float, var_211_cvector, var_212_cvector)
{
	var_213_float = GetByIndex(var_211_cvector, 0); // 0x6a6 PushE
	var_214_float = GetByIndex(var_212_cvector, 0); // 0x6a7 PushE
	var_215_float = var_213_float * var_214_float; // 0x6a8 Mult
	var_216_float = GetByIndex(var_211_cvector, 2); // 0x6a9 PushE
	var_217_float = GetByIndex(var_212_cvector, 2); // 0x6aa PushE
	var_218_float = var_216_float * var_217_float; // 0x6ab Mult
	var_210_float = var_215_float + var_218_float; // 0x6ac Add2
	return 0; // 0x6ad Return
}


func_2212(var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x8a4 PushV
	GetScene(var_23_object); // 0x8a5 Func
	var_24_object = Obj(); // 0x8a7 PushV
	func_1657(var_24_object); // 0x8a8 NEW_2
	RemoveStationaryActor(var_24_object); // 0x8aa ObjFunc
	var_25_bool = 0; var_26_string = ""; var_27_string = ""; // 0x8ac PushV
	var_26_string = "quest_d11_01"; // 0x8ad MovS
	var_27_string = "soldier_death"; // 0x8ae MovS
	func_1747(var_25_bool, var_26_string, var_27_string); // 0x8af NEW_2
	var_31_object = Obj(); // 0x8b1 PushV
	var_31_object = var_21_object; // 0x8b2 Mov
	TaskCall(7); // 0x8b3 TaskCall
	func_1029(var_31_object); // 0x8b4 NEW_2
	TaskReturn(); // 0x8b5 TaskReturn
	return 2; // 0x8b7 Return
}


func_1570(var_88_bool, var_89_string)
{
	var_88_bool = 1; // 0x623 MovB
	var_90_bool = 0; // 0x624 PushV
	var_90_bool = 1; // 0x625 MovB
	var_91_bool = 0; // 0x626 PushV
	var_91_bool = 1; // 0x627 MovB
	var_92_bool = 0; // 0x628 PushV
	var_92_bool = 1; // 0x629 MovB
	var_93_bool = 0; // 0x62a PushV
	var_93_bool = 1; // 0x62b MovB
	var_94_bool = 0; // 0x62c PushV
	var_94_bool = 1; // 0x62d MovB
	var_95_bool = 0; // 0x62e PushV
	var_95_bool = 1; // 0x62f MovB
	var_96_bool = 0; // 0x630 PushV
	var_96_bool = 1; // 0x631 MovB
	var_97_bool = 0; // 0x632 PushV
	var_97_bool = 1; // 0x633 MovB
	var_98_bool = 0; // 0x634 PushV
	var_98_bool = 1; // 0x635 MovB
	var_99_bool = 0; // 0x636 PushV
	var_99_bool = 1; // 0x637 MovB
	var_100_bool = 0; // 0x638 PushV
	var_100_bool = 1; // 0x639 MovB
	var_101_string = "woman"; // 0x63a PushS
	var_102_bool = var_89_string == var_101_string; // 0x63b Eq
	if(var_102_bool == 0) goto Label_1601; // 0x63c JumpB
	var_103_string = "worker"; // 0x63d PushS
	var_104_bool = var_89_string == var_103_string; // 0x63e Eq
	if(var_104_bool == 0) goto Label_1601; // 0x63f JumpB
	var_100_bool = 0; // 0x640 MovB
	
Label_1601:
	if(var_100_bool == 0) goto Label_1606; // 0x641 JumpB
	var_105_string = "butcher"; // 0x642 PushS
	var_106_bool = var_89_string == var_105_string; // 0x643 Eq
	if(var_106_bool == 0) goto Label_1606; // 0x644 JumpB
	var_99_bool = 0; // 0x645 MovB
	
Label_1606:
	if(var_99_bool == 0) goto Label_1611; // 0x646 JumpB
	var_107_string = "wasted_girl"; // 0x647 PushS
	var_108_bool = var_89_string == var_107_string; // 0x648 Eq
	if(var_108_bool == 0) goto Label_1611; // 0x649 JumpB
	var_98_bool = 0; // 0x64a MovB
	
Label_1611:
	if(var_98_bool == 0) goto Label_1616; // 0x64b JumpB
	var_109_string = "boy"; // 0x64c PushS
	var_110_bool = var_89_string == var_109_string; // 0x64d Eq
	if(var_110_bool == 0) goto Label_1616; // 0x64e JumpB
	var_97_bool = 0; // 0x64f MovB
	
Label_1616:
	if(var_97_bool == 0) goto Label_1621; // 0x650 JumpB
	var_111_string = "vaxxabitka"; // 0x651 PushS
	var_112_bool = var_89_string == var_111_string; // 0x652 Eq
	if(var_112_bool == 0) goto Label_1621; // 0x653 JumpB
	var_96_bool = 0; // 0x654 MovB
	
Label_1621:
	if(var_96_bool == 0) goto Label_1626; // 0x655 JumpB
	var_113_string = "unosha"; // 0x656 PushS
	var_114_bool = var_89_string == var_113_string; // 0x657 Eq
	if(var_114_bool == 0) goto Label_1626; // 0x658 JumpB
	var_95_bool = 0; // 0x659 MovB
	
Label_1626:
	if(var_95_bool == 0) goto Label_1631; // 0x65a JumpB
	var_115_string = "wasted_male"; // 0x65b PushS
	var_116_bool = var_89_string == var_115_string; // 0x65c Eq
	if(var_116_bool == 0) goto Label_1631; // 0x65d JumpB
	var_94_bool = 0; // 0x65e MovB
	
Label_1631:
	if(var_94_bool == 0) goto Label_1636; // 0x65f JumpB
	var_117_string = "alkash"; // 0x660 PushS
	var_118_bool = var_89_string == var_117_string; // 0x661 Eq
	if(var_118_bool == 0) goto Label_1636; // 0x662 JumpB
	var_93_bool = 0; // 0x663 MovB
	
Label_1636:
	if(var_93_bool == 0) goto Label_1641; // 0x664 JumpB
	var_119_string = "dohodyaga"; // 0x665 PushS
	var_120_bool = var_89_string == var_119_string; // 0x666 Eq
	if(var_120_bool == 0) goto Label_1641; // 0x667 JumpB
	var_92_bool = 0; // 0x668 MovB
	
Label_1641:
	if(var_92_bool == 0) goto Label_1646; // 0x669 JumpB
	var_121_string = "vaxxabit"; // 0x66a PushS
	var_122_bool = var_89_string == var_121_string; // 0x66b Eq
	if(var_122_bool == 0) goto Label_1646; // 0x66c JumpB
	var_91_bool = 0; // 0x66d MovB
	
Label_1646:
	if(var_91_bool == 0) goto Label_1651; // 0x66e JumpB
	var_123_string = "nudegirl"; // 0x66f PushS
	var_124_bool = var_89_string == var_123_string; // 0x670 Eq
	if(var_124_bool == 0) goto Label_1651; // 0x671 JumpB
	var_90_bool = 0; // 0x672 MovB
	
Label_1651:
	if(var_90_bool == 0) goto Label_1656; // 0x673 JumpB
	var_125_string = "morlok"; // 0x674 PushS
	var_126_bool = var_89_string == var_125_string; // 0x675 Eq
	if(var_126_bool == 0) goto Label_1656; // 0x676 JumpB
	var_88_bool = 0; // 0x677 MovB
	
Label_1656:
	return 0; // 0x678 Return
}


func_1151(var_55_string)
{
	RemoveRTEnvelope(); // 0x480 Func
	SetDeathState(); // 0x482 Func
	Stop(); // 0x484 Func
	StopAsync(); // 0x486 Func
	StopSecondaryAnimation(); // 0x488 Func
	var_56_string = ""; // 0x48a PushV
	var_56_string = var_55_string; // 0x48b Mov
	func_1529(var_56_string); // 0x48c NEW_2
	var_85_string = "all"; // 0x48e PushS
	PlayAnimation(var_85_string, var_55_string); // 0x48f Func
	WaitForAnimEnd(); // 0x491 Func
	var_86_string = "all"; // 0x493 PushS
	LockAnimationEnd(var_86_string, var_55_string); // 0x494 Func
	RemoveEnvelope(); // 0x496 Func
	return 0; // 0x498 Return
}


func_939(var_0_object, var_1_object)
{
	var_296_int = 0; var_297_bool = 0; var_298_cvector = CVector(0,0,0); var_299_object = Obj(); var_300_int = 0; var_301_bool = 0; var_302_cvector = CVector(0,0,0); var_303_object = Obj(); // 0x3ab PushV
	GetPFPosition(var_303_object); // 0x3ac Func
	GetDirection(var_0_object); // 0x3ae Func
	
Label_944:
	func_1028(); // 0x3b1 NEW_2
	var_304_int = 10; // 0x3b3 PushI
	irand(var_300_int, var_304_int); // 0x3b4 Func
	var_305_int = 5; // 0x3b6 PushI
	var_306_int = var_300_int + var_305_int; // 0x3b7 Add
	Sleep(var_306_int, var_301_bool); // 0x3b8 Func
	var_307_bool = var_301_bool; // 0x3ba Push
	if(var_307_bool == 0) goto Label_960; // 0x3bb JumpB
	func_861(); // 0x3bd NEW_2
	goto Label_1021; // 0x3bf Jump
	
Label_1021:
	goto Label_944; // 0x3fd Jump
	
Label_960:
	func_1028(); // 0x3c1 NEW_2
	GetPFPosition(var_302_cvector); // 0x3c3 Func
	var_308_float = 0; var_309_cvector = CVector(0,0,0); var_310_cvector = CVector(0,0,0); // 0x3c5 PushV
	var_309_cvector = var_1_object; // 0x3c6 MovT
	var_310_cvector = var_302_cvector; // 0x3c7 Mov
	func_1673(var_308_float, var_309_cvector, var_310_cvector); // 0x3c8 NEW_2
	var_313_int = 40000; // 0x3ca PushI
	var_314_bool = var_308_float > var_313_int; // 0x3cb GT
	if(var_314_bool == 0) goto Label_1007; // 0x3cc JumpB
	FindPathTo(var_303_object, var_303_object); // 0x3cd Func
	var_315_bool = var_303_object != 0; // 0x3cf NullNeq
	if(var_315_bool == 0) goto Label_1002; // 0x3d0 JumpB
	RotatePath(var_303_object, var_301_bool); // 0x3d1 Func
	var_316_bool = var_301_bool == 0; // 0x3d3 Not
	if(var_316_bool == 0) goto Label_982; // 0x3d4 JumpB
	goto Label_1020; // 0x3d5 Jump
	
Label_1020:
	goto Label_960; // 0x3fc Jump
	
Label_982:
	var_317_bool = 0; // 0x3d6 PushB
	FollowPath(var_303_object, var_317_bool, var_301_bool); // 0x3d7 Func
	var_318_bool = var_301_bool == 0; // 0x3d9 Not
	if(var_318_bool == 0) goto Label_988; // 0x3da JumpB
	goto Label_1020; // 0x3db Jump
	
Label_988:
	var_319_float = GetByIndex(var_0_object, 0); // 0x3dc PushE
	var_320_float = GetByIndex(var_0_object, 2); // 0x3dd PushE
	Rotate(var_319_float, var_320_float, var_301_bool); // 0x3de Func
	var_321_bool = var_301_bool == 0; // 0x3e0 Not
	if(var_321_bool == 0) goto Label_995; // 0x3e1 JumpB
	goto Label_1020; // 0x3e2 Jump
	
Label_995:
	WaitForAnimEnd(var_301_bool); // 0x3e3 Func
	var_322_bool = var_301_bool == 0; // 0x3e5 Not
	if(var_322_bool == 0) goto Label_1000; // 0x3e6 JumpB
	goto Label_1020; // 0x3e7 Jump
	
Label_1000:
	goto Label_1021; // 0x3e8 Jump
	
Label_1002:
	var_323_int = 1; // 0x3ea PushI
	Sleep(var_323_int); // 0x3eb Func
	var_303_object = 0; // 0x3ed SetNull
	goto Label_1020; // 0x3ee Jump
	
Label_1007:
	var_324_float = GetByIndex(var_0_object, 0); // 0x3ef PushE
	var_325_float = GetByIndex(var_0_object, 2); // 0x3f0 PushE
	Rotate(var_324_float, var_325_float, var_301_bool); // 0x3f1 Func
	var_326_bool = var_301_bool == 0; // 0x3f3 Not
	if(var_326_bool == 0) goto Label_1014; // 0x3f4 JumpB
	goto Label_1020; // 0x3f5 Jump
	
Label_1014:
	WaitForAnimEnd(var_301_bool); // 0x3f6 Func
	var_327_bool = var_301_bool == 0; // 0x3f8 Not
	if(var_327_bool == 0) goto Label_1019; // 0x3f9 JumpB
	goto Label_1020; // 0x3fa Jump
	
Label_1019:
	goto Label_1021; // 0x3fb Jump
}


func_1197(var_45_cvector)
{
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); // 0x4ad PushV
	GetPosition(var_49_cvector); // 0x4ae Func
	GetPosition(var_50_cvector); // 0x4b0 ObjFunc
	var_45_cvector = var_50_cvector - var_49_cvector; // 0x4b2 Sub2
	return 4; // 0x4b3 Return
}


func_1710(var_219_float, var_220_cvector)
{
	var_221_float = GetByIndex(var_220_cvector, 0); // 0x6af PushE
	var_222_float = GetByIndex(var_220_cvector, 0); // 0x6b0 PushE
	var_223_float = var_221_float * var_222_float; // 0x6b1 Mult
	var_224_float = GetByIndex(var_220_cvector, 2); // 0x6b2 PushE
	var_225_float = GetByIndex(var_220_cvector, 2); // 0x6b3 PushE
	var_226_float = var_224_float * var_225_float; // 0x6b4 Mult
	var_227_int = var_223_float + var_226_float; // 0x6b5 Add
	var_219_float = sqrt(var_227_int); // 0x6b6 Sqrt2
	return 0; // 0x6b7 Return
}


func_1663(var_43_cvector, var_44_cvector)
{
	var_51_float = 0; var_52_float = 0; // 0x67f PushV
	var_53_int = var_44_cvector | var_44_cvector; // 0x680 Or
	var_52_float = sqrt(var_53_int); // 0x681 Sqrt2
	var_54_float = 0.0; // 0x682 PushF
	var_55_bool = var_52_float < var_54_float; // 0x683 LT
	if(var_55_bool == 0) goto Label_1671; // 0x684 JumpB
	var_43_cvector = CVector(0.0, 0.0, 0.0); // 0x685 MovV
	return 2; // 0x686 Return
	
Label_1671:
	var_43_cvector = var_44_cvector / var_44_cvector; // 0x687 Div2
	return 2; // 0x688 Return
}


func_1204(var_370_float)
{
	var_372_cvector = CVector(0,0,0); var_373_cvector = CVector(0,0,0); var_374_cvector = CVector(0,0,0); var_375_cvector = CVector(0,0,0); var_376_cvector = CVector(0,0,0); var_377_cvector = CVector(0,0,0); // 0x4b4 PushV
	GetPosition(var_375_cvector); // 0x4b5 Func
	GetPosition(var_376_cvector); // 0x4b7 ObjFunc
	var_377_cvector = var_376_cvector - var_375_cvector; // 0x4b9 Sub2
	var_370_float = var_377_cvector | var_377_cvector; // 0x4ba Or2
	return 6; // 0x4bb Return
}


func_1847(var_20_bool, var_21_object, var_22_bool)
{
	var_23_string = ""; var_24_string = ""; // 0x737 PushV
	var_25_bool = 0; var_26_object = Obj(); var_27_string = ""; // 0x738 PushV
	var_26_object = var_21_object; // 0x739 Mov
	var_27_string = "class"; // 0x73a MovS
	func_1224(var_25_bool, var_26_object, var_27_string); // 0x73b NEW_2
	var_34_bool = var_25_bool == 0; // 0x73d Not
	if(var_34_bool == 0) goto Label_1857; // 0x73e JumpB
	var_20_bool = 0; // 0x73f MovB
	return 2; // 0x740 Return
	
Label_1857:
	var_35_string = "class"; // 0x741 PushS
	GetProperty(var_35_string, var_24_string); // 0x742 ObjFunc
	var_36_bool = 0; // 0x744 PushV
	var_36_bool = 1; // 0x745 MovB
	var_37_bool = 0; // 0x746 PushV
	var_37_bool = 1; // 0x747 MovB
	var_38_bool = 0; // 0x748 PushV
	var_38_bool = 1; // 0x749 MovB
	var_39_bool = 0; // 0x74a PushV
	var_39_bool = 1; // 0x74b MovB
	var_40_bool = 0; // 0x74c PushV
	var_40_bool = 1; // 0x74d MovB
	var_41_bool = 0; // 0x74e PushV
	var_41_bool = 1; // 0x74f MovB
	var_42_bool = 0; // 0x750 PushV
	var_42_bool = 1; // 0x751 MovB
	var_43_bool = 0; // 0x752 PushV
	var_43_bool = 1; // 0x753 MovB
	var_44_bool = 0; // 0x754 PushV
	var_44_bool = 1; // 0x755 MovB
	var_45_bool = 0; // 0x756 PushV
	var_45_bool = 1; // 0x757 MovB
	var_46_string = "patrol"; // 0x758 PushS
	var_47_bool = var_24_string == var_46_string; // 0x759 Eq
	if(var_47_bool == 0) goto Label_1887; // 0x75a JumpB
	var_48_string = "sanitar"; // 0x75b PushS
	var_49_bool = var_24_string == var_48_string; // 0x75c Eq
	if(var_49_bool == 0) goto Label_1887; // 0x75d JumpB
	var_45_bool = 0; // 0x75e MovB
	
Label_1887:
	if(var_45_bool == 0) goto Label_1892; // 0x75f JumpB
	var_50_string = "soldier"; // 0x760 PushS
	var_51_bool = var_24_string == var_50_string; // 0x761 Eq
	if(var_51_bool == 0) goto Label_1892; // 0x762 JumpB
	var_44_bool = 0; // 0x763 MovB
	
Label_1892:
	if(var_44_bool == 0) goto Label_1897; // 0x764 JumpB
	var_52_string = "woman"; // 0x765 PushS
	var_53_bool = var_24_string == var_52_string; // 0x766 Eq
	if(var_53_bool == 0) goto Label_1897; // 0x767 JumpB
	var_43_bool = 0; // 0x768 MovB
	
Label_1897:
	if(var_43_bool == 0) goto Label_1902; // 0x769 JumpB
	var_54_string = "wasted_girl"; // 0x76a PushS
	var_55_bool = var_24_string == var_54_string; // 0x76b Eq
	if(var_55_bool == 0) goto Label_1902; // 0x76c JumpB
	var_42_bool = 0; // 0x76d MovB
	
Label_1902:
	if(var_42_bool == 0) goto Label_1907; // 0x76e JumpB
	var_56_string = "vaxxabitka"; // 0x76f PushS
	var_57_bool = var_24_string == var_56_string; // 0x770 Eq
	if(var_57_bool == 0) goto Label_1907; // 0x771 JumpB
	var_41_bool = 0; // 0x772 MovB
	
Label_1907:
	if(var_41_bool == 0) goto Label_1912; // 0x773 JumpB
	var_58_string = "vaxxabit"; // 0x774 PushS
	var_59_bool = var_24_string == var_58_string; // 0x775 Eq
	if(var_59_bool == 0) goto Label_1912; // 0x776 JumpB
	var_40_bool = 0; // 0x777 MovB
	
Label_1912:
	if(var_40_bool == 0) goto Label_1917; // 0x778 JumpB
	var_60_string = "little_girl"; // 0x779 PushS
	var_61_bool = var_24_string == var_60_string; // 0x77a Eq
	if(var_61_bool == 0) goto Label_1917; // 0x77b JumpB
	var_39_bool = 0; // 0x77c MovB
	
Label_1917:
	if(var_39_bool == 0) goto Label_1922; // 0x77d JumpB
	var_62_string = "girl"; // 0x77e PushS
	var_63_bool = var_24_string == var_62_string; // 0x77f Eq
	if(var_63_bool == 0) goto Label_1922; // 0x780 JumpB
	var_38_bool = 0; // 0x781 MovB
	
Label_1922:
	if(var_38_bool == 0) goto Label_1927; // 0x782 JumpB
	var_64_string = "dohodyaga"; // 0x783 PushS
	var_65_bool = var_24_string == var_64_string; // 0x784 Eq
	if(var_65_bool == 0) goto Label_1927; // 0x785 JumpB
	var_37_bool = 0; // 0x786 MovB
	
Label_1927:
	if(var_37_bool == 0) goto Label_1932; // 0x787 JumpB
	var_66_string = "nudegirl"; // 0x788 PushS
	var_67_bool = var_24_string == var_66_string; // 0x789 Eq
	if(var_67_bool == 0) goto Label_1932; // 0x78a JumpB
	var_36_bool = 0; // 0x78b MovB
	
Label_1932:
	if(var_36_bool == 0) goto Label_1935; // 0x78c JumpB
	var_20_bool = 1; // 0x78d MovB
	return 2; // 0x78e Return
	
Label_1935:
	var_68_bool = var_22_bool; // 0x78f Push
	if(var_68_bool == 0) goto Label_1939; // 0x790 JumpB
	var_20_bool = 0; // 0x791 MovB
	return 2; // 0x792 Return
	
Label_1939:
	var_20_bool = 1; // 0x793 MovB
	var_69_bool = 0; // 0x794 PushV
	var_69_bool = 1; // 0x795 MovB
	var_70_bool = 0; // 0x796 PushV
	var_70_bool = 1; // 0x797 MovB
	var_71_bool = 0; // 0x798 PushV
	var_71_bool = 1; // 0x799 MovB
	var_72_bool = 0; // 0x79a PushV
	var_72_bool = 1; // 0x79b MovB
	var_73_bool = 0; // 0x79c PushV
	var_73_bool = 1; // 0x79d MovB
	var_74_string = "worker"; // 0x79e PushS
	var_75_bool = var_24_string == var_74_string; // 0x79f Eq
	if(var_75_bool == 0) goto Label_1957; // 0x7a0 JumpB
	var_76_string = "butcher"; // 0x7a1 PushS
	var_77_bool = var_24_string == var_76_string; // 0x7a2 Eq
	if(var_77_bool == 0) goto Label_1957; // 0x7a3 JumpB
	var_73_bool = 0; // 0x7a4 MovB
	
Label_1957:
	if(var_73_bool == 0) goto Label_1962; // 0x7a5 JumpB
	var_78_string = "boy"; // 0x7a6 PushS
	var_79_bool = var_24_string == var_78_string; // 0x7a7 Eq
	if(var_79_bool == 0) goto Label_1962; // 0x7a8 JumpB
	var_72_bool = 0; // 0x7a9 MovB
	
Label_1962:
	if(var_72_bool == 0) goto Label_1967; // 0x7aa JumpB
	var_80_string = "unosha"; // 0x7ab PushS
	var_81_bool = var_24_string == var_80_string; // 0x7ac Eq
	if(var_81_bool == 0) goto Label_1967; // 0x7ad JumpB
	var_71_bool = 0; // 0x7ae MovB
	
Label_1967:
	if(var_71_bool == 0) goto Label_1972; // 0x7af JumpB
	var_82_string = "wasted_male"; // 0x7b0 PushS
	var_83_bool = var_24_string == var_82_string; // 0x7b1 Eq
	if(var_83_bool == 0) goto Label_1972; // 0x7b2 JumpB
	var_70_bool = 0; // 0x7b3 MovB
	
Label_1972:
	if(var_70_bool == 0) goto Label_1977; // 0x7b4 JumpB
	var_84_string = "alkash"; // 0x7b5 PushS
	var_85_bool = var_24_string == var_84_string; // 0x7b6 Eq
	if(var_85_bool == 0) goto Label_1977; // 0x7b7 JumpB
	var_69_bool = 0; // 0x7b8 MovB
	
Label_1977:
	if(var_69_bool == 0) goto Label_1982; // 0x7b9 JumpB
	var_86_string = "morlok"; // 0x7ba PushS
	var_87_bool = var_24_string == var_86_string; // 0x7bb Eq
	if(var_87_bool == 0) goto Label_1982; // 0x7bc JumpB
	var_20_bool = 0; // 0x7bd MovB
	
Label_1982:
	return 2; // 0x7be Return
}


func_1720(var_207_float, var_208_cvector, var_209_cvector)
{
	var_210_float = 0; var_211_cvector = CVector(0,0,0); var_212_cvector = CVector(0,0,0); // 0x6b9 PushV
	var_211_cvector = var_208_cvector; // 0x6ba Mov
	var_212_cvector = var_209_cvector; // 0x6bb Mov
	func_1701(var_210_float, var_211_cvector, var_212_cvector); // 0x6bc NEW_2
	var_219_float = 0; var_220_cvector = CVector(0,0,0); // 0x6be PushV
	var_220_cvector = var_208_cvector; // 0x6bf Mov
	func_1710(var_219_float, var_220_cvector); // 0x6c0 NEW_2
	var_228_float = 0; var_229_cvector = CVector(0,0,0); // 0x6c2 PushV
	var_229_cvector = var_209_cvector; // 0x6c3 Mov
	func_1710(var_228_float, var_229_cvector); // 0x6c4 NEW_2
	var_230_float = var_219_float * var_228_float; // 0x6c6 Mult
	var_207_float = var_210_float / var_210_float; // 0x6c7 Div2
	return 0; // 0x6c8 Return
}


func_1212(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj(); // 0x4bc PushV
	var_18_string = "player"; // 0x4bd PushS
	FindActor(var_17_object, var_18_string); // 0x4be Func
	var_15_object = var_17_object; // 0x4c0 Mov
	return 2; // 0x4c1 Return
}


func_1983()
{
	var_21_object = GlobalVars[0]; // 0x7bf PushGE
	var_22_object = Obj(); // 0x7c0 PushV
	func_1695(var_22_object); // 0x7c1 NEW_2
	var_21_object = var_22_object; // 0x7c2 Mov
	GlobalVars[0] = var_21_object; // 0x7c4 PopGE
	return 0; // 0x7c5 Return
}


func_1219(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_bool = 0; // 0x4c3 PushV
	IsPlayerActor(var_13_object, var_15_bool); // 0x4c4 Func
	var_12_bool = var_15_bool; // 0x4c6 Mov
	return 2; // 0x4c7 Return
}


func_1350(var_16_bool, var_17_object)
{
	var_18_int = 0; var_19_int = 0; // 0x546 PushV
	var_20_bool = 0; var_21_object = Obj(); // 0x547 PushV
	var_21_object = var_17_object; // 0x548 Mov
	func_1314(var_20_bool, var_21_object); // 0x549 NEW_2
	var_37_bool = var_20_bool == 0; // 0x54b Not
	if(var_37_bool == 0) goto Label_1359; // 0x54c JumpB
	var_16_bool = 0; // 0x54d MovB
	return 2; // 0x54e Return
	
Label_1359:
	var_38_bool = 0; var_39_object = Obj(); var_40_string = ""; // 0x54f PushV
	var_39_object = var_17_object; // 0x550 Mov
	var_40_string = "noaccess"; // 0x551 MovS
	func_1224(var_38_bool, var_39_object, var_40_string); // 0x552 NEW_2
	var_47_bool = var_38_bool == 0; // 0x554 Not
	if(var_47_bool == 0) goto Label_1368; // 0x555 JumpB
	var_16_bool = 1; // 0x556 MovB
	return 2; // 0x557 Return
	
Label_1368:
	var_48_string = "noaccess"; // 0x558 PushS
	GetProperty(var_48_string, var_19_int); // 0x559 ObjFunc
	var_49_int = 0; // 0x55b PushI
	var_16_bool = var_19_int == var_49_int; // 0x55c Eq2
	return 2; // 0x55d Return
}


func_1990(var_137_object, var_138_bool)
{
	var_139_object = Obj(); var_140_bool = 0; // 0x7c7 PushV
	var_139_object = var_137_object; // 0x7c8 Mov
	var_140_bool = var_138_bool; // 0x7c9 Mov
	TaskCall(2); // 0x7ca TaskCall
	func_287(var_141_object, var_142_object, var_143_bool, var_139_object, var_140_bool); // 0x7cb NEW_2
	TaskReturn(); // 0x7cc TaskReturn
	ResetAAS(); // 0x7ce Func
	return 0; // 0x7d0 Return
}


func_840(var_14_object)
{
	func_1983(); // 0x34a NEW_2
	var_25_object = Obj(); // 0x34c PushV
	var_25_object = var_14_object; // 0x34d Mov
	func_892(); // 0x34e NEW_2
	
Label_848:
	func_853(); // 0x351 NEW_2
	goto Label_848; // 0x353 Jump
}


func_1224(var_38_bool, var_39_object, var_40_string)
{
	var_41_bool = 0; var_42_bool = 0; // 0x4c8 PushV
	var_43_string = "HasProperty"; // 0x4c9 PushS
	var_44_int = 2; // 0x4ca PushI
	var_45_bool = IsFuncExist(var_39_object, var_43_string, var_44_int); // 0x4cb FuncExist
	var_46_bool = var_45_bool == 0; // 0x4cc Not
	if(var_46_bool == 0) goto Label_1232; // 0x4cd JumpB
	var_38_bool = 0; // 0x4ce MovB
	return 2; // 0x4cf Return
	
Label_1232:
	HasProperty(var_40_string, var_42_bool); // 0x4d0 ObjFunc
	var_38_bool = var_42_bool; // 0x4d2 Mov
	return 2; // 0x4d3 Return
}


func_1737(var_305_float)
{
	var_306_object = Obj(); var_307_object = Obj(); // 0x6c9 PushV
	CreateFloatVector(var_307_object); // 0x6ca Func
	add(var_305_float); // 0x6cc ObjFunc
	var_308_int = 15; // 0x6ce PushI
	SendWorldWndMessage(var_308_int, var_307_object); // 0x6cf Func
	return 2; // 0x6d1 Return
}


func_717()
{
	var_103_string = "all"; // 0x2cd PushS
	var_104_string = "attack_on"; // 0x2ce PushS
	LockAnimationEnd(var_103_string, var_104_string); // 0x2cf Func
	return 0; // 0x2d1 Return
}


func_462(var_0_object, var_1_object)
{
	var_0_object = var_1_object; // 0x1ce TMovT
	var_1_object = 0; // 0x1cf SetNullT
	Face(var_0_object); // 0x1d0 Func
	return 0; // 0x1d2 Return
}


func_1486(var_17_object, var_20_cvector, var_21_cvector)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); // 0x5ce PushV
	GetScene(var_24_object); // 0x5cf Func
	var_26_string = "scripted"; // 0x5d1 PushS
	var_27_string = "blood_dir.xml"; // 0x5d2 PushS
	AddActorByType(var_25_object, var_26_string, var_24_object, var_20_cvector, var_21_cvector, var_27_string); // 0x5d3 Func
	var_28_object = Obj(); // 0x5d5 PushV
	var_28_object = var_17_object; // 0x5d6 Mov
	func_1374(var_28_object); // 0x5d7 NEW_2
	return 4; // 0x5d9 Return
}


func_2001(var_130_object)
{
	var_131_bool = 0; var_132_bool = 0; // 0x7d1 PushV
	var_133_bool = var_130_object == 0; // 0x7d2 NullEq
	if(var_133_bool == 0) goto Label_2005; // 0x7d3 JumpB
	return 2; // 0x7d4 Return
	
Label_2005:
	var_134_object = GlobalVars[0]; // 0x7d5 PushGE
	in(var_132_bool, var_130_object); // 0x7d6 ObjFunc
	var_135_bool = var_132_bool == 0; // 0x7d8 Not
	if(var_135_bool == 0) goto Label_2013; // 0x7d9 JumpB
	var_136_object = GlobalVars[0]; // 0x7da PushGE
	add(var_130_object); // 0x7db ObjFunc
	
Label_2013:
	var_137_bool = 0; var_138_object = Obj(); // 0x7dd PushV
	var_138_object = var_130_object; // 0x7de Mov
	func_1219(var_137_bool, var_138_object); // 0x7df NEW_2
	if(var_137_bool == 0) goto Label_2024; // 0x7e1 JumpB
	var_141_object = Obj(); // 0x7e2 PushV
	func_1657(var_141_object); // 0x7e3 NEW_2
	var_144_float = 0.0; // 0x7e5 PushF
	ReportReputationChange(var_130_object, var_141_object, var_144_float); // 0x7e6 Func
	
Label_2024:
	return 2; // 0x7e8 Return
}


func_722(var_0_object, var_1_object, var_48_object)
{
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); // 0x2d2 PushV
	var_0_object = var_48_object; // 0x2d3 TMov
	var_1_object = 0; // 0x2d4 TMovB
	func_771(var_52_cvector); // 0x2d6 NEW_2
	
Label_728:
	GetDirection(var_51_cvector); // 0x2d8 Func
	var_61_cvector = CVector(0,0,0); var_62_object = Obj(); // 0x2da PushV
	var_62_object = var_0_object; // 0x2db MovT
	func_1197(var_62_object); // 0x2dc NEW_2
	var_52_cvector = var_61_cvector; // 0x2dd Mov
	var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); // 0x2df PushV
	var_68_cvector = var_51_cvector; // 0x2e0 Mov
	var_69_cvector = var_52_cvector; // 0x2e1 Mov
	func_1720(var_67_float, var_68_cvector, var_69_cvector); // 0x2e2 NEW_2
	var_91_float = 0.70711; // 0x2e4 PushF
	var_92_bool = var_67_float < var_91_float; // 0x2e5 LT
	if(var_92_bool == 0) goto Label_751; // 0x2e6 JumpB
	var_93_object = Obj(); var_94_float = 0; // 0x2e7 PushV
	var_93_object = var_0_object; // 0x2e8 MovT
	var_94_float = 4.71239; // 0x2e9 MovF
	func_1511(var_94_float); // 0x2ea NEW_2
	func_717(); // 0x2ed NEW_2
	
Label_751:
	var_105_float = 0.5; // 0x2ef PushF
	Sleep(var_105_float); // 0x2f0 Func
	var_106_bool = 0; // 0x2f2 PushV
	var_106_bool = 0; // 0x2f3 MovB
	var_107_bool = var_1_object == 0; // 0x2f4 Not
	if(var_107_bool == 0) goto Label_764; // 0x2f5 JumpB
	var_108_bool = 0; var_109_object = Obj(); // 0x2f6 PushV
	var_109_object = var_0_object; // 0x2f7 MovT
	func_1350(var_108_bool, var_109_object); // 0x2f8 NEW_2
	if(var_108_bool == 0) goto Label_764; // 0x2fa JumpB
	var_106_bool = 1; // 0x2fb MovB
	
Label_764:
	if(var_106_bool == 0) goto Label_728; // 0x2fc JumpB
	StopAsync(); // 0x2fd Func
	var_142_string = "spine"; // 0x2ff PushS
	UnlookAsync(var_142_string); // 0x300 Func
	return 4; // 0x302 Return
}


func_467(var_0_object)
{
	var_169_cvector = CVector(0,0,0); var_170_cvector = CVector(0,0,0); var_171_bool = 0; var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0); var_174_object = Obj(); var_175_object = Obj(); var_176_cvector = CVector(0,0,0); var_177_object = Obj(); var_178_int = 0; var_179_cvector = CVector(0,0,0); var_180_float = 0; var_181_object = Obj(); var_182_object = Obj(); var_183_cvector = CVector(0,0,0); var_184_cvector = CVector(0,0,0); var_185_bool = 0; var_186_cvector = CVector(0,0,0); var_187_cvector = CVector(0,0,0); var_188_object = Obj(); var_189_object = Obj(); var_190_cvector = CVector(0,0,0); var_191_object = Obj(); var_192_int = 0; var_193_cvector = CVector(0,0,0); var_194_float = 0; var_195_object = Obj(); var_196_object = Obj(); // 0x1d3 PushV
	var_197_object = Obj(); // 0x1d4 PushV
	var_197_object = var_0_object; // 0x1d5 MovT
	func_1759(var_197_object); // 0x1d6 NEW_2
	ReportAttack(var_0_object); // 0x1d8 Func
	var_198_bool = 0; var_199_object = Obj(); // 0x1da PushV
	var_199_object = var_0_object; // 0x1db MovT
	func_1219(var_198_bool, var_199_object); // 0x1dc NEW_2
	if(var_198_bool == 0) goto Label_484; // 0x1de JumpB
	var_200_object = Obj(); // 0x1df PushV
	func_1657(var_200_object); // 0x1e0 NEW_2
	SendPlayerEnemy(var_0_object, var_200_object); // 0x1e2 Func
	
Label_484:
	GetDirection(var_183_cvector); // 0x1e4 Func
	var_201_cvector = CVector(0,0,0); var_202_object = Obj(); // 0x1e6 PushV
	var_202_object = var_0_object; // 0x1e7 MovT
	func_1197(var_202_object); // 0x1e8 NEW_2
	var_184_cvector = var_201_cvector; // 0x1e9 Mov
	var_207_float = 0; var_208_cvector = CVector(0,0,0); var_209_cvector = CVector(0,0,0); // 0x1eb PushV
	var_208_cvector = var_183_cvector; // 0x1ec Mov
	var_209_cvector = var_184_cvector; // 0x1ed Mov
	func_1720(var_207_float, var_208_cvector, var_209_cvector); // 0x1ee NEW_2
	var_231_float = 0.99939; // 0x1f0 PushF
	var_232_bool = var_207_float < var_231_float; // 0x1f1 LT
	if(var_232_bool == 0) goto Label_500; // 0x1f2 JumpB
	return 28; // 0x1f3 Return
	
Label_500:
	func_1768(); // 0x1f5 NEW_2
	var_233_string = "all"; // 0x1f7 PushS
	var_234_string = "attack_begin1"; // 0x1f8 PushS
	PlayAnimation(var_233_string, var_234_string); // 0x1f9 Func
	var_235_string = "attack"; // 0x1fb PushS
	GetGeometryLocator(var_235_string, var_185_bool, var_186_cvector, var_187_cvector); // 0x1fc Func
	var_236_bool = var_185_bool; // 0x1fe Push
	if(var_236_bool == 0) goto Label_521; // 0x1ff JumpB
	GetScene(var_189_object); // 0x200 Func
	var_237_string = "light-dynamic"; // 0x202 PushS
	var_238_string = "soldier_fire.xml"; // 0x203 PushS
	AddActorByType(var_188_object, var_237_string, var_189_object, var_186_cvector, var_187_cvector, var_238_string); // 0x204 Func
	var_189_object = 0; // 0x206 SetNull
	var_188_object = 0; // 0x207 SetNull
	goto Label_523; // 0x208 Jump
	
Label_523:
	var_239_string = "shot"; // 0x20b PushS
	Speak(var_239_string); // 0x20c Func
	GetDirection(var_183_cvector); // 0x20e Func
	var_240_cvector = CVector(0,0,0); var_241_object = Obj(); // 0x210 PushV
	var_241_object = var_0_object; // 0x211 MovT
	func_1197(var_241_object); // 0x212 NEW_2
	var_184_cvector = var_240_cvector; // 0x213 Mov
	var_242_float = GetByIndex(var_184_cvector, 1); // 0x215 PushE
	var_243_float = 0; var_244_object = Obj(); // 0x216 PushV
	var_244_object = var_0_object; // 0x217 MovT
	func_1522(var_244_object); // 0x218 NEW_2
	var_242_float = var_242_float + var_243_float; // 0x21a Add2
	SetByIndex(var_184_cvector, 1) = var_242_float; // 0x21b PopE
	var_249_float = 0.03491; // 0x21c PushF
	RandVecCone3D(var_190_cvector, var_184_cvector, var_249_float); // 0x21d Func
	GetVictimMaterial(var_190_cvector, var_191_object, var_192_int, var_193_cvector); // 0x21f Func
	var_250_bool = var_191_object != 0; // 0x221 NullNeq
	if(var_250_bool == 0) goto Label_576; // 0x222 JumpB
	var_251_bool = var_191_object == var_0_object; // 0x223 Eq
	if(var_251_bool == 0) goto Label_561; // 0x224 JumpB
	var_252_float = 0; var_253_object = Obj(); var_254_float = 0; var_255_int = 0; // 0x225 PushV
	var_253_object = var_0_object; // 0x226 MovT
	var_254_float = 1.5; // 0x227 MovF
	var_255_int = 1; // 0x228 MovI
	func_1236(var_252_float, var_253_object, var_254_float, var_255_int); // 0x229 NEW_2
	var_194_float = var_252_float; // 0x22a Mov
	var_310_int = 2; // 0x22c PushI
	var_311_float = 1.5; // 0x22d PushF
	ReportHit(var_0_object, var_310_int, var_194_float, var_311_float); // 0x22e Func
	goto Label_576; // 0x230 Jump
	
Label_576:
	var_312_string = "all"; // 0x240 PushS
	var_313_string = "attack_end1"; // 0x241 PushS
	PlayAnimation(var_312_string, var_313_string); // 0x242 Func
	WaitForAnimEnd(); // 0x244 Func
	var_314_string = "all"; // 0x246 PushS
	var_315_string = "attack_on"; // 0x247 PushS
	LockAnimationEnd(var_314_string, var_315_string); // 0x248 Func
	return 28; // 0x24a Return
	
Label_561:
	var_316_int = -1; // 0x231 PushI
	var_317_bool = var_192_int != var_316_int; // 0x232 Neq
	if(var_317_bool == 0) goto Label_576; // 0x233 JumpB
	GetScene(var_195_object); // 0x234 Func
	var_318_string = "scripted"; // 0x236 PushS
	var_319_cvector = CVector(0.0, 0.0, 1.0); // 0x237 PushVec
	var_320_string = "richochet.xml"; // 0x238 PushS
	AddActorByType(var_196_object, var_318_string, var_195_object, var_193_cvector, var_319_cvector, var_320_string); // 0x239 Func
	var_321_string = "Material"; // 0x23b PushS
	SetScriptProperty(var_321_string, var_192_int); // 0x23c ObjFunc
	var_196_object = 0; // 0x23e SetNull
	var_195_object = 0; // 0x23f SetNull
	
Label_521:
	WaitForAnimEnd(); // 0x209 Func
}


func_1236(var_252_float, var_253_object, var_254_float, var_255_int)
{
	var_256_int = 0; var_257_string = ""; var_258_int = 0; var_259_float = 0; var_260_float = 0; var_261_float = 0; var_262_int = 0; var_263_string = ""; var_264_int = 0; var_265_float = 0; var_266_float = 0; var_267_float = 0; // 0x4d4 PushV
	var_268_bool = 0; var_269_object = Obj(); var_270_string = ""; // 0x4d5 PushV
	var_269_object = var_253_object; // 0x4d6 Mov
	var_270_string = "health"; // 0x4d7 MovS
	func_1224(var_268_bool, var_269_object, var_270_string); // 0x4d8 NEW_2
	var_271_bool = var_268_bool == 0; // 0x4da Not
	if(var_271_bool == 0) goto Label_1246; // 0x4db JumpB
	var_252_float = 0.0; // 0x4dc MovF
	return 12; // 0x4dd Return
	
Label_1246:
	var_272_bool = 0; var_273_object = Obj(); var_274_string = ""; // 0x4de PushV
	var_273_object = var_253_object; // 0x4df Mov
	var_274_string = "armor"; // 0x4e0 MovS
	func_1224(var_272_bool, var_273_object, var_274_string); // 0x4e1 NEW_2
	var_275_bool = var_272_bool == 0; // 0x4e3 Not
	if(var_275_bool == 0) goto Label_1255; // 0x4e4 JumpB
	var_262_int = 0; // 0x4e5 MovI
	goto Label_1258; // 0x4e6 Jump
	
Label_1258:
	var_276_string = "armor_"; // 0x4ea PushS
	var_277_string = ""; var_278_int = 0; // 0x4eb PushV
	var_278_int = var_255_int; // 0x4ec Mov
	func_1183(var_277_string, var_278_int); // 0x4ed NEW_2
	var_263_string = var_276_string + var_277_string; // 0x4ef Add2
	var_283_bool = 0; var_284_object = Obj(); var_285_string = ""; // 0x4f0 PushV
	var_284_object = var_253_object; // 0x4f1 Mov
	var_285_string = var_263_string; // 0x4f2 Mov
	func_1224(var_283_bool, var_284_object, var_285_string); // 0x4f3 NEW_2
	var_286_bool = var_283_bool == 0; // 0x4f5 Not
	if(var_286_bool == 0) goto Label_1273; // 0x4f6 JumpB
	var_264_int = 0; // 0x4f7 MovI
	goto Label_1275; // 0x4f8 Jump
	
Label_1275:
	var_287_float = 0; var_288_float = 0; var_289_float = 0; // 0x4fb PushV
	var_290_int = var_262_int + var_264_int; // 0x4fc Add
	var_291_float = 100.0; // 0x4fd PushF
	var_288_float = var_290_int / var_290_int; // 0x4fe Div2
	var_289_float = 1; // 0x4ff MovI
	func_1677(var_287_float, var_288_float, var_289_float); // 0x500 NEW_2
	var_265_float = var_287_float; // 0x501 Mov
	var_293_string = "health"; // 0x503 PushS
	GetProperty(var_293_string, var_266_float); // 0x504 ObjFunc
	var_294_int = 1; // 0x506 PushI
	var_295_int = var_294_int - var_265_float; // 0x507 Sub
	var_267_float = var_254_float * var_295_int; // 0x508 Mult2
	var_296_string = "health"; // 0x509 PushS
	var_297_float = 0; var_298_float = 0; var_299_float = 0; var_300_float = 0; // 0x50a PushV
	var_298_float = var_266_float - var_267_float; // 0x50b Sub2
	var_299_float = 0; // 0x50c MovI
	var_300_float = 1; // 0x50d MovI
	func_1684(var_297_float, var_298_float, var_299_float, var_300_float); // 0x50e NEW_2
	SetProperty(var_296_string, var_297_float); // 0x510 ObjFunc
	var_303_bool = 0; var_304_object = Obj(); // 0x512 PushV
	var_304_object = var_253_object; // 0x513 Mov
	func_1219(var_303_bool, var_304_object); // 0x514 NEW_2
	if(var_303_bool == 0) goto Label_1307; // 0x516 JumpB
	var_305_float = 0; // 0x517 PushV
	var_305_float = -var_267_float; // 0x518 Neg2
	func_1737(var_305_float); // 0x519 NEW_2
	
Label_1307:
	var_252_float = var_267_float; // 0x51b Mov
	return 12; // 0x51c Return
	
Label_1273:
	GetProperty(var_263_string, var_264_int); // 0x4f9 ObjFunc
	
Label_1255:
	var_309_string = "armor"; // 0x4e7 PushS
	GetProperty(var_309_string, var_262_int); // 0x4e8 ObjFunc
}


func_1747(var_25_bool, var_26_string, var_27_string)
{
	var_28_object = Obj(); var_29_object = Obj(); // 0x6d3 PushV
	FindActor(var_29_object, var_26_string); // 0x6d4 Func
	var_30_bool = var_29_object == 0; // 0x6d6 NullEq
	if(var_30_bool == 0) goto Label_1754; // 0x6d7 JumpB
	var_25_bool = 0; // 0x6d8 MovB
	return 2; // 0x6d9 Return
	
Label_1754:
	Trigger(var_29_object, var_27_string); // 0x6da Func
	var_25_bool = 1; // 0x6dc MovB
	return 2; // 0x6dd Return
}


func_853()
{
	func_1983(); // 0x356 NEW_2
	
Label_856:
	func_939(var_20_cvector, var_14_object); // 0x359 NEW_2
	goto Label_856; // 0x35b Jump
}


func_1500()
{
	var_325_cvector = CVector(0,0,0); var_326_cvector = CVector(0,0,0); var_327_cvector = CVector(0,0,0); var_328_cvector = CVector(0,0,0); var_329_cvector = CVector(0,0,0); var_330_cvector = CVector(0,0,0); // 0x5dc PushV
	GetPosition(var_328_cvector); // 0x5dd ObjFunc
	GetPosition(var_329_cvector); // 0x5df Func
	var_330_cvector = var_328_cvector - var_329_cvector; // 0x5e1 Sub2
	var_331_float = GetByIndex(var_330_cvector, 0); // 0x5e2 PushE
	var_332_float = GetByIndex(var_330_cvector, 2); // 0x5e3 PushE
	RotateAsync(var_331_float, var_332_float); // 0x5e4 Func
	return 6; // 0x5e6 Return
}


func_861()
{
	return 0; // 0x35d Return
}


func_1374(var_28_object)
{
	var_29_bool = 0; var_30_int = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_string = ""; var_36_bool = 0; var_37_int = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_string = ""; // 0x55e PushV
	var_43_bool = var_28_object == 0; // 0x55f NullEq
	if(var_43_bool == 0) goto Label_1378; // 0x560 JumpB
	return 14; // 0x561 Return
	
Label_1378:
	IsDead(var_36_bool); // 0x562 Func
	var_44_bool = var_36_bool; // 0x564 Push
	if(var_44_bool == 0) goto Label_1383; // 0x565 JumpB
	return 14; // 0x566 Return
	
Label_1383:
	GetSecondaryAnimationType(var_37_int); // 0x567 Func
	var_45_int = 0; // 0x569 PushI
	var_46_bool = var_37_int < var_45_int; // 0x56a LT
	if(var_46_bool == 0) goto Label_1389; // 0x56b JumpB
	return 14; // 0x56c Return
	
Label_1389:
	GetPosition(var_38_cvector); // 0x56d ObjFunc
	GetPosition(var_39_cvector); // 0x56f Func
	GetDirection(var_40_cvector); // 0x571 Func
	var_41_cvector = var_39_cvector - var_38_cvector; // 0x573 Sub2
	var_47_float = GetByIndex(var_41_cvector, 0); // 0x574 PushE
	var_48_float = GetByIndex(var_40_cvector, 0); // 0x575 PushE
	var_49_float = var_47_float * var_48_float; // 0x576 Mult
	var_50_float = GetByIndex(var_41_cvector, 2); // 0x577 PushE
	var_51_float = GetByIndex(var_40_cvector, 2); // 0x578 PushE
	var_52_float = var_50_float * var_51_float; // 0x579 Mult
	var_53_int = var_49_float + var_52_float; // 0x57a Add
	var_54_int = 0; // 0x57b PushI
	var_55_bool = var_53_int >= var_54_int; // 0x57c GE
	if(var_55_bool == 0) goto Label_1408; // 0x57d JumpB
	var_42_string = "fhit"; // 0x57e MovS
	goto Label_1409; // 0x57f Jump
	
Label_1409:
	var_56_string = "hit_react"; // 0x581 PushS
	var_57_string = "1"; // 0x582 PushS
	var_58_int = var_42_string + var_57_string; // 0x583 Add
	var_59_string = "2"; // 0x584 PushS
	var_60_int = var_42_string + var_59_string; // 0x585 Add
	var_61_int = -10; // 0x586 PushI
	FadeSecondaryAnimation(var_56_string, var_58_int, var_60_int, var_61_int); // 0x587 Func
	return 14; // 0x589 Return
	
Label_1408:
	var_42_string = "bhit"; // 0x580 MovS
}


func_1759(var_148_object)
{
	var_149_bool = 0; var_150_bool = 0; // 0x6df PushV
	IsPlayerActor(var_148_object, var_150_bool); // 0x6e0 Func
	var_151_bool = var_150_bool; // 0x6e2 Push
	if(var_151_bool == 0) goto Label_1767; // 0x6e3 JumpB
	var_152_string = "attack"; // 0x6e4 PushS
	PlayGlobalMusic(var_152_string); // 0x6e5 Func
	
Label_1767:
	return 2; // 0x6e7 Return
}


func_2145(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_bool = 0; // 0x861 PushV
	var_16_bool = 0; var_17_object = Obj(); // 0x862 PushV
	var_17_object = var_13_object; // 0x863 Mov
	func_1350(var_16_bool, var_17_object); // 0x864 NEW_2
	var_50_bool = var_16_bool == 0; // 0x866 Not
	if(var_50_bool == 0) goto Label_2154; // 0x867 JumpB
	var_12_bool = 0; // 0x868 MovB
	return 2; // 0x869 Return
	
Label_2154:
	var_51_object = GlobalVars[0]; // 0x86a PushGE
	in(var_15_bool, var_13_object); // 0x86b ObjFunc
	var_52_bool = var_15_bool; // 0x86d Push
	if(var_52_bool == 0) goto Label_2161; // 0x86e JumpB
	var_12_bool = 1; // 0x86f MovB
	return 2; // 0x870 Return
	
Label_2161:
	var_53_bool = 0; var_54_object = Obj(); // 0x871 PushV
	var_54_object = var_13_object; // 0x872 Mov
	func_2065(var_53_bool, var_54_object); // 0x873 NEW_2
	var_12_bool = var_53_bool; // 0x874 Mov
	return 2; // 0x876 Return
}


func_1511(var_94_float)
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); // 0x5e7 PushV
	GetPosition(var_98_cvector); // 0x5e8 ObjFunc
	GetPosition(var_99_cvector); // 0x5ea Func
	var_100_cvector = var_98_cvector - var_99_cvector; // 0x5ec Sub2
	var_101_float = GetByIndex(var_100_cvector, 0); // 0x5ed PushE
	var_102_float = GetByIndex(var_100_cvector, 2); // 0x5ee PushE
	RotateAsync(var_101_float, var_102_float, var_94_float); // 0x5ef Func
	return 6; // 0x5f1 Return
}


func_1768()
{
	var_153_object = Obj(); var_154_object = Obj(); // 0x6e8 PushV
	GetScene(var_154_object); // 0x6e9 Func
	var_155_string = "battle"; // 0x6eb PushS
	var_156_object = Obj(); // 0x6ec PushV
	func_1657(var_156_object); // 0x6ed NEW_2
	BroadcastMessage(var_155_string, var_156_object, var_154_object); // 0x6ef Func
	return 2; // 0x6f1 Return
}


func_2025(var_145_object)
{
	var_146_object = Obj(); // 0x7ea PushV
	var_146_object = var_145_object; // 0x7eb Mov
	func_2001(var_146_object); // 0x7ec NEW_2
	var_147_object = Obj(); var_148_bool = 0; // 0x7ee PushV
	var_147_object = var_145_object; // 0x7ef Mov
	var_148_bool = 1; // 0x7f0 MovB
	func_1990(var_147_object, var_148_bool); // 0x7f1 NEW_2
	return 0; // 0x7f3 Return
}


func_1522(var_243_float)
{
	var_245_float = 0; var_246_float = 0; var_247_float = 0; var_248_float = 0; // 0x5f2 PushV
	GetEyesHeight(var_247_float); // 0x5f3 Func
	GetEyesHeight(var_248_float); // 0x5f5 ObjFunc
	var_243_float = var_248_float - var_247_float; // 0x5f7 Sub2
	return 4; // 0x5f8 Return
}


func_1779(var_16_int)
{
	var_17_int = 0; var_18_int = 0; // 0x6f3 PushV
	var_19_string = "branch"; // 0x6f4 PushS
	GetVariable(var_19_string, var_18_int); // 0x6f5 Func
	var_16_int = var_18_int; // 0x6f7 Mov
	return 2; // 0x6f8 Return
}


func_2036(var_132_object)
{
	var_133_bool = 0; var_134_bool = 0; // 0x7f4 PushV
	var_135_object = GlobalVars[0]; // 0x7f5 PushGE
	in(var_134_bool, var_132_object); // 0x7f6 ObjFunc
	var_136_bool = var_134_bool; // 0x7f8 Push
	if(var_136_bool == 0) goto Label_2048; // 0x7f9 JumpB
	var_137_object = Obj(); var_138_bool = 0; // 0x7fa PushV
	var_137_object = var_132_object; // 0x7fb Mov
	var_138_bool = 1; // 0x7fc MovB
	func_1990(var_137_object, var_138_bool); // 0x7fd NEW_2
	goto Label_2056; // 0x7ff Jump
	
Label_2056:
	return 2; // 0x808 Return
	
Label_2048:
	var_357_object = Obj(); // 0x800 PushV
	var_357_object = var_132_object; // 0x801 Mov
	TaskCall(1); // 0x802 TaskCall
	func_120(var_359_bool, var_357_object); // 0x803 NEW_2
	TaskReturn(); // 0x804 TaskReturn
	ResetAAS(); // 0x806 Func
}


func_2167(var_132_object)
{
	var_133_object = Obj(); // 0x878 PushV
	var_133_object = var_132_object; // 0x879 Mov
	func_2206(var_133_object); // 0x87a NEW_2
	return 0; // 0x87c Return
}


func_120(var_0_object, var_357_object)
{
	var_360_bool = 0; var_361_int = 0; var_362_int = 0; var_363_bool = 0; var_364_int = 0; var_365_int = 0; // 0x78 PushV
	var_0_object = var_357_object; // 0x79 TMov
	var_366_object = Obj(); // 0x7a PushV
	var_366_object = var_0_object; // 0x7b MovT
	func_1759(var_366_object); // 0x7c NEW_2
	CanSee(var_365_int, var_0_object); // 0x7e Func
	var_367_object = var_1_object; // 0x80 PushT
	if(var_367_object == 0) goto Label_143; // 0x81 JumpB
	var_368_bool = 0; var_369_object = Obj(); // 0x82 PushV
	var_369_object = var_0_object; // 0x83 MovT
	func_2057(var_368_bool, var_369_object); // 0x84 NEW_2
	if(var_368_bool == 0) goto Label_141; // 0x86 JumpB
	var_379_object = Obj(); var_380_bool = 0; // 0x87 PushV
	var_379_object = var_0_object; // 0x88 MovT
	var_380_bool = 1; // 0x89 MovB
	func_1990(var_379_object, var_380_bool); // 0x8a NEW_2
	return 6; // 0x8c Return
	
Label_141:
	Face(var_0_object); // 0x8d Func
	
Label_143:
	func_1768(); // 0x90 NEW_2
	var_381_string = "all"; // 0x92 PushS
	var_382_string = "shoot_begin"; // 0x93 PushS
	PlayAnimation(var_381_string, var_382_string); // 0x94 Func
	WaitForAnimEnd(var_363_bool); // 0x96 Func
	var_383_bool = var_363_bool == 0; // 0x98 Not
	if(var_383_bool == 0) goto Label_157; // 0x99 JumpB
	StopAsync(); // 0x9a Func
	return 6; // 0x9c Return
	
Label_157:
	var_384_string = "shot"; // 0x9d PushS
	Speak(var_384_string); // 0x9e Func
	var_385_string = "all"; // 0xa0 PushS
	var_386_string = "shoot_end"; // 0xa1 PushS
	PlayAnimation(var_385_string, var_386_string); // 0xa2 Func
	WaitForAnimEnd(var_363_bool); // 0xa4 Func
	var_387_bool = var_363_bool == 0; // 0xa6 Not
	if(var_387_bool == 0) goto Label_171; // 0xa7 JumpB
	StopAsync(); // 0xa8 Func
	return 6; // 0xaa Return
	
Label_171:
	var_388_string = "all"; // 0xab PushS
	var_389_string = "shoot_end"; // 0xac PushS
	LockAnimationEnd(var_388_string, var_389_string); // 0xad Func
	var_364_int = 0; // 0xaf MovI
	var_365_int = 0; // 0xb0 MovI
	
Label_177:
	var_390_int = 20; // 0xb1 PushI
	var_391_bool = var_365_int < var_390_int; // 0xb2 LT
	if(var_391_bool == 0) goto Label_229; // 0xb3 JumpB
	var_392_object = Obj(); // 0xb4 PushV
	var_392_object = var_0_object; // 0xb5 MovT
	func_1759(var_392_object); // 0xb6 NEW_2
	var_393_float = 0.5; // 0xb8 PushF
	Sleep(var_393_float, var_363_bool); // 0xb9 Func
	var_394_bool = var_363_bool == 0; // 0xbb Not
	if(var_394_bool == 0) goto Label_190; // 0xbc JumpB
	return 6; // 0xbd Return
	
Label_190:
	CanSee(var_365_int, var_0_object); // 0xbe Func
	var_395_object = var_1_object; // 0xc0 PushT
	if(var_395_object == 0) goto Label_212; // 0xc1 JumpB
	var_364_int = 0; // 0xc2 MovI
	var_396_bool = 0; var_397_object = Obj(); // 0xc3 PushV
	var_397_object = var_0_object; // 0xc4 MovT
	func_2057(var_396_bool, var_397_object); // 0xc5 NEW_2
	if(var_396_bool == 0) goto Label_209; // 0xc7 JumpB
	func_271(); // 0xc9 NEW_2
	var_398_object = Obj(); var_399_bool = 0; // 0xcb PushV
	var_398_object = var_0_object; // 0xcc MovT
	var_399_bool = 0; // 0xcd MovB
	func_1990(var_398_object, var_399_bool); // 0xce NEW_2
	return 6; // 0xd0 Return
	
Label_209:
	Face(var_0_object); // 0xd1 Func
	goto Label_226; // 0xd3 Jump
	
Label_226:
	var_400_int = 1; // 0xe2 PushI
	var_365_int = var_365_int + var_400_int; // 0xe3 Add2
	goto Label_177; // 0xe4 Jump
	
Label_212:
	StopAsync(); // 0xd4 Func
	var_401_int = 1; // 0xd6 PushI
	var_364_int = var_364_int + var_401_int; // 0xd7 Add2
	var_402_int = 4; // 0xd8 PushI
	var_403_bool = var_364_int == var_402_int; // 0xd9 Eq
	if(var_403_bool == 0) goto Label_226; // 0xda JumpB
	var_404_string = "all"; // 0xdb PushS
	var_405_string = "attack_off"; // 0xdc PushS
	PlayAnimation(var_404_string, var_405_string); // 0xdd Func
	WaitForAnimEnd(); // 0xdf Func
	return 6; // 0xe1 Return
	
Label_229:
	func_271(); // 0xe6 NEW_2
	var_406_object = Obj(); var_407_bool = 0; // 0xe8 PushV
	var_406_object = var_357_object; // 0xe9 Mov
	var_407_bool = 0; // 0xea MovB
	func_1990(var_406_object, var_407_bool); // 0xeb NEW_2
	return 6; // 0xed Return
}


func_1657(var_16_object)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x679 PushV
	self(var_18_object); // 0x67a Func
	var_16_object = var_18_object; // 0x67c Mov
	return 2; // 0x67d Return
}


func_2173(var_14_bool, var_15_object, var_16_object, var_17_bool)
{
	var_18_bool = 0; var_19_bool = 0; // 0x87d PushV
	var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; // 0x87e PushV
	var_21_object = var_16_object; // 0x87f Mov
	var_22_bool = !var_17_bool; // 0x880 Not2
	func_1847(var_20_bool, var_21_object, var_22_bool); // 0x881 NEW_2
	if(var_20_bool == 0) goto Label_2197; // 0x883 JumpB
	CanSee(var_19_bool, var_15_object); // 0x884 Func
	var_88_bool = 0; // 0x886 PushV
	var_88_bool = 1; // 0x887 MovB
	var_89_bool = var_19_bool; // 0x888 Push
	if(var_89_bool == 0) goto Label_2194; // 0x889 JumpB
	var_90_float = 0; var_91_object = Obj(); // 0x88a PushV
	var_91_object = var_15_object; // 0x88b Mov
	func_1204(var_91_object); // 0x88c NEW_2
	var_98_float = 490000.0; // 0x88e PushF
	var_99_bool = var_90_float <= var_98_float; // 0x88f LE
	if(var_99_bool == 0) goto Label_2194; // 0x890 JumpB
	var_88_bool = 0; // 0x891 MovB
	
Label_2194:
	if(var_88_bool == 0) goto Label_2197; // 0x892 JumpB
	var_14_bool = 1; // 0x893 MovB
	return 2; // 0x894 Return
	
Label_2197:
	var_14_bool = 0; // 0x895 MovB
	return 2; // 0x896 Return
}


func_1023()
{
	StopGroup0(); // 0x3ff Func
	Stop(); // 0x401 Func
	return 0; // 0x403 Return
}


