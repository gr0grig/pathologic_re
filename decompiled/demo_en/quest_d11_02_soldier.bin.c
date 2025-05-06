task_0_event_0(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	var_11_bool = 0; var_12_bool = 0; // 0x20 PushV
	IsOverrideActive(var_12_bool); // 0x21 Func
	var_13_bool = var_12_bool == 0; // 0x23 Not
	if(var_13_bool == 0) goto Label_41; // 0x24 JumpB
	var_14_object = Obj(); // 0x25 PushV
	var_14_object = var_10_bool; // 0x26 Mov
	func_1824(var_14_object); // 0x27 NEW_2
	
Label_41:
	return 2; // 0x29 Return
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_bool, var_10_bool, var_11_cvector, var_12_cvector, var_13_bool)
{
	return 0; // 0xa0 Return
}


task_0_event_16(var_0_object, var_1_string, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool)
{
	return 0; // 0xa2 Return
}


task_0_event_41(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	return 0; // 0xa4 Return
}


task_1_event_41(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	func_189(); // 0xc7 NEW_2
	var_12_object = Obj(); // 0xc9 PushV
	var_12_object = var_10_bool; // 0xca Mov
	func_1989(); // 0xcb NEW_2
	return 0; // 0xcd Return
}


task_1_event_3(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	var_11_bool = var_10_bool == var_0_object; // 0xcf Eq
	if(var_11_bool == 0) goto Label_214; // 0xd0 JumpB
	var_12_int = 100; // 0xd1 PushI
	KillTimer(var_12_int); // 0xd2 Func
	Face(var_0_object); // 0xd4 Func
	
Label_214:
	return 0; // 0xd6 Return
}


task_1_event_4(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	var_11_bool = var_10_bool == var_0_object; // 0xd8 Eq
	if(var_11_bool == 0) goto Label_226; // 0xd9 JumpB
	var_12_int = 100; // 0xda PushI
	var_13_float = 3.0; // 0xdb PushF
	SetTimer(var_12_int, var_13_float); // 0xdc Func
	var_14_object = Obj(); // 0xde PushV
	var_14_object = var_0_object; // 0xdf MovT
	func_1474(); // 0xe0 NEW_2
	
Label_226:
	return 0; // 0xe2 Return
}


	task_1_event_17(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool, var_99_object)
	{
	var_100_bool = 0; var_101_object = Obj(); // 0xe4 PushV
	var_101_object = var_99_object; // 0xe5 Mov
	func_1324(var_100_bool, var_101_object); // 0xe6 NEW_2
	var_128_bool = var_100_bool == 0; // 0xe8 Not
	if(var_128_bool == 0) goto Label_239; // 0xe9 JumpB
	var_129_object = Obj(); // 0xea PushV
	var_129_object = var_99_object; // 0xeb Mov
	func_2161(var_129_object); // 0xec NEW_2
	return 0; // 0xee Return
	
Label_239:
	func_189(); // 0xf0 NEW_2
	var_145_object = Obj(); // 0xf2 PushV
	var_145_object = var_99_object; // 0xf3 Mov
	func_2185(var_145_object); // 0xf4 NEW_2
	return 0; // 0xf6 Return
	}


task_1_event_30(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); var_16_bool = 0; // 0xf8 PushV
	var_14_object = var_10_cvector; // 0xf9 Mov
	var_15_object = var_11_cvector; // 0xfa Mov
	var_16_bool = var_12_bool; // 0xfb Mov
	func_2333(var_13_bool, var_14_object, var_15_object, var_16_bool); // 0xfc NEW_2
	if(var_13_bool == 0) goto Label_259; // 0xfe JumpB
	var_99_object = Obj(); // 0xff PushV
	var_99_object = var_10_cvector; // 0x100 Mov
	func_227(); // 0x101 NEW_2
	
Label_259:
	return 0; // 0x103 Return
}


task_1_event_1(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	var_11_bool = 0; var_12_object = Obj(); // 0x105 PushV
	var_12_object = var_10_bool; // 0x106 Mov
	func_2305(var_11_bool, var_12_object); // 0x107 NEW_2
	if(var_11_bool == 0) goto Label_273; // 0x109 JumpB
	func_189(); // 0x10b NEW_2
	var_131_object = Obj(); // 0x10d PushV
	var_131_object = var_10_bool; // 0x10e Mov
	func_2327(var_131_object); // 0x10f NEW_2
	
Label_273:
	return 0; // 0x111 Return
}


task_1_event_7(var_0_object, var_1_int, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	var_11_int = 100; // 0x113 PushI
	var_12_bool = var_10_bool != var_11_int; // 0x114 Neq
	if(var_12_bool == 0) goto Label_279; // 0x115 JumpB
	return 0; // 0x116 Return
	
Label_279:
	var_13_int = 100; // 0x117 PushI
	KillTimer(var_13_int); // 0x118 Func
	StopGroup0(); // 0x11a Func
	return 0; // 0x11c Return
}


	task_2_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool, var_99_object)
	{
	var_100_bool = 0; var_101_object = Obj(); // 0x194 PushV
	var_101_object = var_99_object; // 0x195 Mov
	func_1324(var_100_bool, var_101_object); // 0x196 NEW_2
	var_128_bool = var_100_bool == 0; // 0x198 Not
	if(var_128_bool == 0) goto Label_415; // 0x199 JumpB
	var_129_object = Obj(); // 0x19a PushV
	var_129_object = var_99_object; // 0x19b Mov
	func_2161(var_129_object); // 0x19c NEW_2
	return 0; // 0x19e Return
	
Label_415:
	func_436(); // 0x1a0 NEW_2
	var_144_object = Obj(); // 0x1a2 PushV
	var_144_object = var_99_object; // 0x1a3 Mov
	func_2185(var_144_object); // 0x1a4 NEW_2
	return 0; // 0x1a6 Return
	}


task_2_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); var_16_bool = 0; // 0x1a8 PushV
	var_14_object = var_10_cvector; // 0x1a9 Mov
	var_15_object = var_11_cvector; // 0x1aa Mov
	var_16_bool = var_12_bool; // 0x1ab Mov
	func_2333(var_13_bool, var_14_object, var_15_object, var_16_bool); // 0x1ac NEW_2
	if(var_13_bool == 0) goto Label_435; // 0x1ae JumpB
	var_99_object = Obj(); // 0x1af PushV
	var_99_object = var_10_cvector; // 0x1b0 Mov
	func_403(); // 0x1b1 NEW_2
	
Label_435:
	return 0; // 0x1b3 Return
}


task_2_event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	func_436(); // 0x1bd NEW_2
	var_11_object = Obj(); // 0x1bf PushV
	var_11_object = var_10_bool; // 0x1c0 Mov
	func_1989(); // 0x1c1 NEW_2
	return 0; // 0x1c3 Return
}


task_3_event_3(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	var_11_bool = 0; // 0x255 PushV
	var_11_bool = 0; // 0x256 MovB
	var_12_bool = var_2_bool; // 0x257 PushT
	if(var_12_bool == 0) goto Label_604; // 0x258 JumpB
	var_13_bool = var_10_bool == var_0_object; // 0x259 Eq
	if(var_13_bool == 0) goto Label_604; // 0x25a JumpB
	var_11_bool = 1; // 0x25b MovB
	
Label_604:
	if(var_11_bool == 0) goto Label_609; // 0x25c JumpB
	var_14_object = Obj(); // 0x25d PushV
	var_14_object = var_0_object; // 0x25e MovT
	func_1474(); // 0x25f NEW_2
	
Label_609:
	return 0; // 0x261 Return
}


task_3_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	var_11_bool = 0; // 0x263 PushV
	var_11_bool = 0; // 0x264 MovB
	var_12_bool = var_2_bool; // 0x265 PushT
	if(var_12_bool == 0) goto Label_618; // 0x266 JumpB
	var_13_bool = var_10_bool == var_0_object; // 0x267 Eq
	if(var_13_bool == 0) goto Label_618; // 0x268 JumpB
	var_11_bool = 1; // 0x269 MovB
	
Label_618:
	if(var_11_bool == 0) goto Label_626; // 0x26a JumpB
	var_14_string = "@Stop hunt"; // 0x26b PushS
	Trace(var_14_string); // 0x26c Func
	StopAnimation(); // 0x26e Func
	StopGroup0(); // 0x270 Func
	
Label_626:
	return 0; // 0x272 Return
}


	task_3_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool, var_99_object)
	{
	var_100_bool = 0; var_101_object = Obj(); // 0x2f2 PushV
	var_101_object = var_99_object; // 0x2f3 Mov
	func_1324(var_100_bool, var_101_object); // 0x2f4 NEW_2
	var_128_bool = var_100_bool == 0; // 0x2f6 Not
	if(var_128_bool == 0) goto Label_761; // 0x2f7 JumpB
	return 0; // 0x2f8 Return
	
Label_761:
	var_129_object = Obj(); // 0x2f9 PushV
	var_129_object = var_99_object; // 0x2fa Mov
	func_2161(var_129_object); // 0x2fb NEW_2
	var_144_bool = var_99_object == var_0_object; // 0x2fd Eq
	if(var_144_bool == 0) goto Label_769; // 0x2fe JumpB
	var_1_object = 0; // 0x2ff SetNullT
	goto Label_776; // 0x300 Jump
	
Label_776:
	return 0; // 0x308 Return
	
Label_769:
	var_1_object = var_99_object; // 0x301 TMov
	var_145_bool = var_2_bool; // 0x302 PushT
	if(var_145_bool == 0) goto Label_776; // 0x303 JumpB
	StopAnimation(); // 0x304 Func
	StopGroup0(); // 0x306 Func
	}


task_3_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); var_16_bool = 0; // 0x30a PushV
	var_14_object = var_10_cvector; // 0x30b Mov
	var_15_object = var_11_cvector; // 0x30c Mov
	var_16_bool = var_12_bool; // 0x30d Mov
	func_2333(var_13_bool, var_14_object, var_15_object, var_16_bool); // 0x30e NEW_2
	if(var_13_bool == 0) goto Label_789; // 0x310 JumpB
	var_99_object = Obj(); // 0x311 PushV
	var_99_object = var_10_cvector; // 0x312 Mov
	func_753(); // 0x313 NEW_2
	
Label_789:
	return 0; // 0x315 Return
}


task_4_event_26(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_string, var_8_cvector, var_9_cvector, var_10_bool)
{
	var_11_string = "attack"; // 0x317 PushS
	var_12_bool = var_10_bool == var_11_string; // 0x318 Eq
	if(var_12_bool == 0) goto Label_804; // 0x319 JumpB
	var_13_object = Obj(); // 0x31a PushV
	var_14_object = Obj(); // 0x31b PushV
	func_1164(var_14_object); // 0x31c NEW_2
	var_13_object = var_14_object; // 0x31d Mov
	TaskCall(5); // 0x31f TaskCall
	func_875(var_13_object); // 0x320 NEW_2
	TaskReturn(); // 0x321 TaskReturn
	goto Label_817; // 0x323 Jump
	
Label_817:
	return 0; // 0x331 Return
	
Label_804:
	var_327_string = "execute"; // 0x324 PushS
	var_328_bool = var_10_bool == var_327_string; // 0x325 Eq
	if(var_328_bool == 0) goto Label_813; // 0x326 JumpB
	TaskCall(6); // 0x328 TaskCall
	func_1064(var_329_bool); // 0x329 NEW_2
	TaskReturn(); // 0x32a TaskReturn
	goto Label_817; // 0x32c Jump
	
Label_813:
	var_355_string = ""; // 0x32d PushV
	var_355_string = var_10_bool; // 0x32e Mov
	func_829(var_10_bool, var_355_string); // 0x32f NEW_2
}


task_4_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_cvector, var_10_bool)
{
	var_11_bool = 0; var_12_string = ""; var_13_string = ""; // 0x333 PushV
	var_12_string = "quest_d11_02"; // 0x334 MovS
	var_13_string = "soldier_attack"; // 0x335 MovS
	func_1786(var_11_bool, var_12_string, var_13_string); // 0x336 NEW_2
	return 0; // 0x338 Return
}


task_4_event_6(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool)
{
	var_10_bool = 0; // 0x359 PushV
	var_10_bool = 0; // 0x35a MovB
	var_11_object = var_0_object; // 0x35b PushT
	if(var_11_object == 0) goto Label_866; // 0x35c JumpB
	var_12_bool = 0; // 0x35d PushV
	func_873(var_12_bool); // 0x35e NEW_2
	if(var_12_bool == 0) goto Label_866; // 0x360 JumpB
	var_10_bool = 1; // 0x361 MovB
	
Label_866:
	if(var_10_bool == 0) goto Label_872; // 0x362 JumpB
	var_13_object = Obj(); // 0x363 PushV
	func_1646(var_13_object); // 0x364 NEW_2
	RemoveActor(var_13_object); // 0x366 Func
	
Label_872:
	return 0; // 0x368 Return
}


task_5_event_3(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_object, var_10_bool)
{
	var_11_bool = 0; var_12_bool = 0; // 0x381 PushV
	var_13_bool = 0; var_14_object = Obj(); // 0x382 PushV
	var_14_object = var_10_bool; // 0x383 Mov
	func_1324(var_13_bool, var_14_object); // 0x384 NEW_2
	var_47_bool = var_13_bool == 0; // 0x386 Not
	if(var_47_bool == 0) goto Label_905; // 0x387 JumpB
	return 2; // 0x388 Return
	
Label_905:
	var_48_bool = 0; var_49_object = Obj(); // 0x389 PushV
	var_49_object = var_10_bool; // 0x38a Mov
	func_2225(var_48_bool, var_49_object); // 0x38b NEW_2
	var_126_bool = var_48_bool == 0; // 0x38d Not
	if(var_126_bool == 0) goto Label_917; // 0x38e JumpB
	var_127_object = GlobalVars[0]; // 0x38f PushGE
	in(var_12_bool, var_10_bool); // 0x390 ObjFunc
	var_128_bool = var_12_bool == 0; // 0x392 Not
	if(var_128_bool == 0) goto Label_917; // 0x393 JumpB
	return 2; // 0x394 Return
	
Label_917:
	func_1058(); // 0x396 NEW_2
	var_129_object = Obj(); // 0x398 PushV
	var_129_object = var_10_bool; // 0x399 Mov
	TaskCall(1); // 0x39a TaskCall
	func_165(var_130_object, var_129_object); // 0x39b NEW_2
	TaskReturn(); // 0x39c TaskReturn
	return 2; // 0x39e Return
}


	task_5_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_object, var_10_object, var_11_bool, var_12_bool, var_99_object)
	{
	var_100_bool = 0; var_101_object = Obj(); // 0x3a0 PushV
	var_101_object = var_99_object; // 0x3a1 Mov
	func_1324(var_100_bool, var_101_object); // 0x3a2 NEW_2
	var_128_bool = var_100_bool == 0; // 0x3a4 Not
	if(var_128_bool == 0) goto Label_939; // 0x3a5 JumpB
	var_129_object = Obj(); // 0x3a6 PushV
	var_129_object = var_99_object; // 0x3a7 Mov
	func_2161(var_129_object); // 0x3a8 NEW_2
	return 0; // 0x3aa Return
	
Label_939:
	func_1058(); // 0x3ac NEW_2
	var_144_object = Obj(); // 0x3ae PushV
	var_144_object = var_99_object; // 0x3af Mov
	func_2185(var_144_object); // 0x3b0 NEW_2
	return 0; // 0x3b2 Return
	}


task_5_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_object, var_10_object, var_11_bool, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); var_16_bool = 0; // 0x3b4 PushV
	var_14_object = var_10_object; // 0x3b5 Mov
	var_15_object = var_11_bool; // 0x3b6 Mov
	var_16_bool = var_12_bool; // 0x3b7 Mov
	func_2333(var_13_bool, var_14_object, var_15_object, var_16_bool); // 0x3b8 NEW_2
	if(var_13_bool == 0) goto Label_959; // 0x3ba JumpB
	var_99_object = Obj(); // 0x3bb PushV
	var_99_object = var_10_object; // 0x3bc Mov
	func_927(); // 0x3bd NEW_2
	
Label_959:
	return 0; // 0x3bf Return
}


task_5_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_object, var_10_bool)
{
	var_11_bool = 0; var_12_object = Obj(); // 0x3c1 PushV
	var_12_object = var_10_bool; // 0x3c2 Mov
	func_2305(var_11_bool, var_12_object); // 0x3c3 NEW_2
	if(var_11_bool == 0) goto Label_973; // 0x3c5 JumpB
	func_1058(); // 0x3c7 NEW_2
	var_130_object = Obj(); // 0x3c9 PushV
	var_130_object = var_10_bool; // 0x3ca Mov
	func_2372(var_130_object); // 0x3cb NEW_2
	
Label_973:
	return 0; // 0x3cd Return
}


task_6_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_string = ""; var_13_string = ""; // 0x461 PushV
	var_12_string = "quest_d11_02"; // 0x462 MovS
	var_13_string = "soldier_attack"; // 0x463 MovS
	func_1786(var_11_bool, var_12_string, var_13_string); // 0x464 NEW_2
	return 0; // 0x466 Return
}


task_6_event_26(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool, var_10_string)
{
	var_11_string = "attack"; // 0x468 PushS
	var_12_bool = var_10_string == var_11_string; // 0x469 Eq
	if(var_12_bool == 0) goto Label_1134; // 0x46a JumpB
	StopGroup0(); // 0x46b Func
	var_0_object = 1; // 0x46d TMovB
	
Label_1134:
	return 0; // 0x46e Return
}


event_22(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0; // 0x7a7 PushV
	var_14_object = var_10_object; // 0x7a8 Mov
	var_15_int = var_11_int; // 0x7a9 Mov
	var_16_float = var_12_float; // 0x7aa Mov
	func_1392(var_14_object, var_15_int, var_16_float); // 0x7ab NEW_2
	return 0; // 0x7ad Return
}


event_43(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float, var_14_cvector, var_15_cvector)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); // 0x7af PushV
	var_16_object = var_10_object; // 0x7b0 Mov
	var_17_int = var_11_int; // 0x7b1 Mov
	var_18_float = var_12_float; // 0x7b2 Mov
	var_19_cvector = var_14_cvector; // 0x7b3 Mov
	var_20_cvector = var_15_cvector; // 0x7b4 Mov
	func_1460(var_18_float, var_19_cvector, var_20_cvector); // 0x7b5 NEW_2
	return 0; // 0x7b7 Return
}


event_16(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool, var_10_object, var_11_string)
{
	var_12_float = 0; var_13_float = 0; // 0x7b8 PushV
	var_14_string = "health"; // 0x7b9 PushS
	var_15_bool = var_11_string == var_14_string; // 0x7ba Eq
	if(var_15_bool == 0) goto Label_1988; // 0x7bb JumpB
	var_16_string = "health"; // 0x7bc PushS
	GetProperty(var_16_string, var_13_float); // 0x7bd Func
	var_17_int = 0; // 0x7bf PushI
	var_18_bool = var_13_float <= var_17_int; // 0x7c0 LE
	if(var_18_bool == 0) goto Label_1988; // 0x7c1 JumpB
	SignalDeath(var_10_object); // 0x7c2 Func
	
Label_1988:
	return 2; // 0x7c4 Return
}


event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_object = Obj(); // 0x7c6 PushV
	var_12_object = var_10_object; // 0x7c7 Mov
	func_1171(var_11_bool, var_12_object); // 0x7c8 NEW_2
	if(var_11_bool == 0) goto Label_2002; // 0x7ca JumpB
	var_15_object = Obj(); // 0x7cb PushV
	func_1646(var_15_object); // 0x7cc NEW_2
	var_18_float = 0.05; // 0x7ce PushF
	var_19_bool = 1; // 0x7cf PushB
	ReportReputationChange(var_10_object, var_15_object, var_18_float, var_19_bool); // 0x7d0 Func
	
Label_2002:
	var_20_object = Obj(); // 0x7d2 PushV
	var_20_object = var_10_object; // 0x7d3 Mov
	func_2378(var_20_object); // 0x7d4 NEW_2
	return 0; // 0x7d6 Return
}


event_6(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool)
{
	var_10_bool = 0; var_11_string = ""; var_12_string = ""; // 0x937 PushV
	var_11_string = "quest_d11_02"; // 0x938 MovS
	var_12_string = "actor_unload"; // 0x939 MovS
	func_1786(var_10_bool, var_11_string, var_12_string); // 0x93a NEW_2
	var_16_object = Obj(); // 0x93c PushV
	func_1646(var_16_object); // 0x93d NEW_2
	RemoveActor(var_16_object); // 0x93f Func
	Hold(); // 0x941 Func
	return 0; // 0x943 Return
}


main(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool)
{
	
Label_825:
	Hold(); // 0x339 Func
	goto Label_825; // 0x33b Jump
}


func_0(var_68_object)
{
	var_69_bool = 0; var_70_object = Obj(); // 0x1 PushV
	var_70_object = var_68_object; // 0x2 Mov
	func_1171(var_69_bool, var_70_object); // 0x3 NEW_2
	if(var_69_bool == 0) goto Label_9; // 0x5 JumpB
	func_1909(); // 0x7 NEW_2
	
Label_9:
	func_1885(); // 0xa NEW_2
	var_147_object = Obj(); // 0xc PushV
	var_147_object = var_68_object; // 0xd Mov
	func_17(var_147_object); // 0xe NEW_2
	return 0; // 0x10 Return
}


func_17(var_147_object)
{
	EventDisable(0); // 0x12 EventDisable
	var_148_object = Obj(); // 0x13 PushV
	var_148_object = var_147_object; // 0x14 Mov
	func_42(var_148_object); // 0x15 NEW_2
	var_228_int = 50; // 0x17 PushI
	var_229_int = 40; // 0x18 PushI
	SetRTEnvelope(var_228_int, var_229_int); // 0x19 Func
	EventEnable(0); // 0x1b EventEnable
	
Label_28:
	Hold(); // 0x1c Func
	goto Label_28; // 0x1e Jump
}


func_1559(var_87_bool, var_88_string)
{
	var_87_bool = 1; // 0x618 MovB
	var_89_bool = 0; // 0x619 PushV
	var_89_bool = 1; // 0x61a MovB
	var_90_bool = 0; // 0x61b PushV
	var_90_bool = 1; // 0x61c MovB
	var_91_bool = 0; // 0x61d PushV
	var_91_bool = 1; // 0x61e MovB
	var_92_bool = 0; // 0x61f PushV
	var_92_bool = 1; // 0x620 MovB
	var_93_bool = 0; // 0x621 PushV
	var_93_bool = 1; // 0x622 MovB
	var_94_bool = 0; // 0x623 PushV
	var_94_bool = 1; // 0x624 MovB
	var_95_bool = 0; // 0x625 PushV
	var_95_bool = 1; // 0x626 MovB
	var_96_bool = 0; // 0x627 PushV
	var_96_bool = 1; // 0x628 MovB
	var_97_bool = 0; // 0x629 PushV
	var_97_bool = 1; // 0x62a MovB
	var_98_bool = 0; // 0x62b PushV
	var_98_bool = 1; // 0x62c MovB
	var_99_bool = 0; // 0x62d PushV
	var_99_bool = 1; // 0x62e MovB
	var_100_string = "woman"; // 0x62f PushS
	var_101_bool = var_88_string == var_100_string; // 0x630 Eq
	if(var_101_bool == 0) goto Label_1590; // 0x631 JumpB
	var_102_string = "worker"; // 0x632 PushS
	var_103_bool = var_88_string == var_102_string; // 0x633 Eq
	if(var_103_bool == 0) goto Label_1590; // 0x634 JumpB
	var_99_bool = 0; // 0x635 MovB
	
Label_1590:
	if(var_99_bool == 0) goto Label_1595; // 0x636 JumpB
	var_104_string = "butcher"; // 0x637 PushS
	var_105_bool = var_88_string == var_104_string; // 0x638 Eq
	if(var_105_bool == 0) goto Label_1595; // 0x639 JumpB
	var_98_bool = 0; // 0x63a MovB
	
Label_1595:
	if(var_98_bool == 0) goto Label_1600; // 0x63b JumpB
	var_106_string = "wasted_girl"; // 0x63c PushS
	var_107_bool = var_88_string == var_106_string; // 0x63d Eq
	if(var_107_bool == 0) goto Label_1600; // 0x63e JumpB
	var_97_bool = 0; // 0x63f MovB
	
Label_1600:
	if(var_97_bool == 0) goto Label_1605; // 0x640 JumpB
	var_108_string = "boy"; // 0x641 PushS
	var_109_bool = var_88_string == var_108_string; // 0x642 Eq
	if(var_109_bool == 0) goto Label_1605; // 0x643 JumpB
	var_96_bool = 0; // 0x644 MovB
	
Label_1605:
	if(var_96_bool == 0) goto Label_1610; // 0x645 JumpB
	var_110_string = "vaxxabitka"; // 0x646 PushS
	var_111_bool = var_88_string == var_110_string; // 0x647 Eq
	if(var_111_bool == 0) goto Label_1610; // 0x648 JumpB
	var_95_bool = 0; // 0x649 MovB
	
Label_1610:
	if(var_95_bool == 0) goto Label_1615; // 0x64a JumpB
	var_112_string = "unosha"; // 0x64b PushS
	var_113_bool = var_88_string == var_112_string; // 0x64c Eq
	if(var_113_bool == 0) goto Label_1615; // 0x64d JumpB
	var_94_bool = 0; // 0x64e MovB
	
Label_1615:
	if(var_94_bool == 0) goto Label_1620; // 0x64f JumpB
	var_114_string = "wasted_male"; // 0x650 PushS
	var_115_bool = var_88_string == var_114_string; // 0x651 Eq
	if(var_115_bool == 0) goto Label_1620; // 0x652 JumpB
	var_93_bool = 0; // 0x653 MovB
	
Label_1620:
	if(var_93_bool == 0) goto Label_1625; // 0x654 JumpB
	var_116_string = "alkash"; // 0x655 PushS
	var_117_bool = var_88_string == var_116_string; // 0x656 Eq
	if(var_117_bool == 0) goto Label_1625; // 0x657 JumpB
	var_92_bool = 0; // 0x658 MovB
	
Label_1625:
	if(var_92_bool == 0) goto Label_1630; // 0x659 JumpB
	var_118_string = "dohodyaga"; // 0x65a PushS
	var_119_bool = var_88_string == var_118_string; // 0x65b Eq
	if(var_119_bool == 0) goto Label_1630; // 0x65c JumpB
	var_91_bool = 0; // 0x65d MovB
	
Label_1630:
	if(var_91_bool == 0) goto Label_1635; // 0x65e JumpB
	var_120_string = "vaxxabit"; // 0x65f PushS
	var_121_bool = var_88_string == var_120_string; // 0x660 Eq
	if(var_121_bool == 0) goto Label_1635; // 0x661 JumpB
	var_90_bool = 0; // 0x662 MovB
	
Label_1635:
	if(var_90_bool == 0) goto Label_1640; // 0x663 JumpB
	var_122_string = "nudegirl"; // 0x664 PushS
	var_123_bool = var_88_string == var_122_string; // 0x665 Eq
	if(var_123_bool == 0) goto Label_1640; // 0x666 JumpB
	var_89_bool = 0; // 0x667 MovB
	
Label_1640:
	if(var_89_bool == 0) goto Label_1645; // 0x668 JumpB
	var_124_string = "morlok"; // 0x669 PushS
	var_125_bool = var_88_string == var_124_string; // 0x66a Eq
	if(var_125_bool == 0) goto Label_1645; // 0x66b JumpB
	var_87_bool = 0; // 0x66c MovB
	
Label_1645:
	return 0; // 0x66d Return
}


func_1058()
{
	StopGroup0(); // 0x422 Func
	Stop(); // 0x424 Func
	return 0; // 0x426 Return
}


func_1063()
{
	return 0; // 0x427 Return
}


func_1064(var_0_object)
{
	var_0_object = 0; // 0x428 TMovB
	var_330_string = "all"; // 0x429 PushS
	var_331_string = "attack_on"; // 0x42a PushS
	PlayAnimation(var_330_string, var_331_string); // 0x42b Func
	WaitForAnimEnd(); // 0x42d Func
	var_332_bool = var_0_object == 0; // 0x42f Not
	if(var_332_bool == 0) goto Label_1108; // 0x430 JumpB
	var_333_string = "all"; // 0x431 PushS
	var_334_string = "attack_on"; // 0x432 PushS
	LockAnimationEnd(var_333_string, var_334_string); // 0x433 Func
	var_335_int = 20; // 0x435 PushI
	Sleep(var_335_int); // 0x436 Func
	var_336_bool = var_0_object == 0; // 0x438 Not
	if(var_336_bool == 0) goto Label_1108; // 0x439 JumpB
	var_337_string = "all"; // 0x43a PushS
	var_338_string = "attack_begin1"; // 0x43b PushS
	PlayAnimation(var_337_string, var_338_string); // 0x43c Func
	WaitForAnimEnd(); // 0x43e Func
	var_339_bool = 0; var_340_string = ""; var_341_string = ""; // 0x440 PushV
	var_340_string = "quest_d11_02"; // 0x441 MovS
	var_341_string = "execute"; // 0x442 MovS
	func_1786(var_339_bool, var_340_string, var_341_string); // 0x443 NEW_2
	var_345_string = "shot"; // 0x445 PushS
	Speak(var_345_string); // 0x446 Func
	var_346_string = "all"; // 0x448 PushS
	var_347_string = "attack_end1"; // 0x449 PushS
	PlayAnimation(var_346_string, var_347_string); // 0x44a Func
	WaitForAnimEnd(); // 0x44c Func
	var_348_string = "all"; // 0x44e PushS
	var_349_string = "attack_off"; // 0x44f PushS
	PlayAnimation(var_348_string, var_349_string); // 0x450 Func
	WaitForAnimEnd(); // 0x452 Func
	
Label_1108:
	var_350_object = var_0_object; // 0x454 PushT
	if(var_350_object == 0) goto Label_1119; // 0x455 JumpB
	var_351_object = Obj(); // 0x456 PushV
	var_352_object = Obj(); // 0x457 PushV
	func_1164(var_352_object); // 0x458 NEW_2
	var_351_object = var_352_object; // 0x459 Mov
	TaskCall(5); // 0x45b TaskCall
	func_875(var_351_object); // 0x45c NEW_2
	TaskReturn(); // 0x45d TaskReturn
	
Label_1119:
	return 0; // 0x45f Return
}


func_42(var_148_object)
{
	var_149_cvector = CVector(0,0,0); var_150_cvector = CVector(0,0,0); var_151_cvector = CVector(0,0,0); var_152_cvector = CVector(0,0,0); var_153_string = ""; var_154_object = Obj(); var_155_bool = 0; var_156_bool = 0; var_157_float = 0; var_158_cvector = CVector(0,0,0); var_159_cvector = CVector(0,0,0); var_160_cvector = CVector(0,0,0); var_161_cvector = CVector(0,0,0); var_162_cvector = CVector(0,0,0); var_163_string = ""; var_164_object = Obj(); var_165_bool = 0; var_166_bool = 0; var_167_float = 0; var_168_cvector = CVector(0,0,0); // 0x2a PushV
	var_169_bool = var_148_object == 0; // 0x2b NullEq
	if(var_169_bool == 0) goto Label_50; // 0x2c JumpB
	var_170_string = ""; // 0x2d PushV
	var_170_string = "fdie"; // 0x2e MovS
	func_133(var_170_string); // 0x2f NEW_2
	goto Label_132; // 0x31 Jump
	
Label_132:
	return 20; // 0x84 Return
	
Label_50:
	GetPosition(var_159_cvector); // 0x32 ObjFunc
	GetPosition(var_160_cvector); // 0x34 Func
	GetDirection(var_161_cvector); // 0x36 Func
	var_162_cvector = var_160_cvector - var_159_cvector; // 0x38 Sub2
	var_202_float = GetByIndex(var_162_cvector, 0); // 0x39 PushE
	var_203_float = GetByIndex(var_161_cvector, 0); // 0x3a PushE
	var_204_float = var_202_float * var_203_float; // 0x3b Mult
	var_205_float = GetByIndex(var_162_cvector, 2); // 0x3c PushE
	var_206_float = GetByIndex(var_161_cvector, 2); // 0x3d PushE
	var_207_float = var_205_float * var_206_float; // 0x3e Mult
	var_208_int = var_204_float + var_207_float; // 0x3f Add
	var_209_int = 0; // 0x40 PushI
	var_210_bool = var_208_int >= var_209_int; // 0x41 GE
	if(var_210_bool == 0) goto Label_69; // 0x42 JumpB
	var_163_string = "fdie"; // 0x43 MovS
	goto Label_70; // 0x44 Jump
	
Label_70:
	RemoveRTEnvelope(); // 0x46 Func
	SetDeathState(); // 0x48 Func
	Stop(); // 0x4a Func
	StopAsync(); // 0x4c Func
	var_164_object = var_148_object; // 0x4e Mov
	var_211_string = "GetScriptProperty"; // 0x4f PushS
	var_212_int = 2; // 0x50 PushI
	var_213_bool = IsFuncExist(var_148_object, var_211_string, var_212_int); // 0x51 FuncExist
	if(var_213_bool == 0) goto Label_94; // 0x52 JumpB
	var_214_string = "Owner"; // 0x53 PushS
	HasScriptProperty(var_165_bool, var_214_string); // 0x54 ObjFunc
	var_215_bool = var_165_bool; // 0x56 Push
	if(var_215_bool == 0) goto Label_94; // 0x57 JumpB
	var_216_string = "Owner"; // 0x58 PushS
	GetScriptProperty(var_164_object, var_216_string); // 0x59 ObjFunc
	var_217_bool = var_164_object == 0; // 0x5b NullEq
	if(var_217_bool == 0) goto Label_94; // 0x5c JumpB
	var_164_object = var_148_object; // 0x5d Mov
	
Label_94:
	var_218_string = "@GetEyesHeight"; // 0x5e PushS
	var_219_int = 1; // 0x5f PushI
	var_220_bool = IsFuncExist(var_164_object, var_218_string, var_219_int); // 0x60 FuncExist
	if(var_220_bool == 0) goto Label_109; // 0x61 JumpB
	GetEyesHeight(var_167_float); // 0x62 ObjFunc
	var_168_cvector = CVector(0.0, 0.0, 0.0); // 0x64 MovV
	var_221_float = GetByIndex(var_168_cvector, 1); // 0x65 PushE
	var_221_float = var_167_float; // 0x66 Mov
	SetByIndex(var_168_cvector, 1) = var_221_float; // 0x67 PopE
	var_222_string = "head"; // 0x68 PushS
	LookAsync(var_148_object, var_222_string, var_168_cvector); // 0x69 Func
	var_166_bool = 1; // 0x6b MovB
	goto Label_110; // 0x6c Jump
	
Label_110:
	var_223_string = ""; // 0x6e PushV
	var_223_string = var_163_string; // 0x6f Mov
	func_1518(var_223_string); // 0x70 NEW_2
	var_224_string = "all"; // 0x72 PushS
	PlayAnimation(var_224_string, var_163_string); // 0x73 Func
	WaitForAnimEnd(); // 0x75 Func
	var_225_bool = var_166_bool; // 0x77 Push
	if(var_225_bool == 0) goto Label_126; // 0x78 JumpB
	StopAsync(); // 0x79 Func
	var_226_string = "head"; // 0x7b PushS
	UnlookAsync(var_226_string); // 0x7c Func
	
Label_126:
	var_227_string = "all"; // 0x7e PushS
	LockAnimationEnd(var_227_string, var_163_string); // 0x7f Func
	RemoveEnvelope(); // 0x81 Func
	var_164_object = 0; // 0x83 SetNull
	
Label_109:
	var_166_bool = 0; // 0x6d MovB
	
Label_69:
	var_163_string = "bdie"; // 0x45 MovS
}


func_2143()
{
	var_20_object = GlobalVars[0]; // 0x85f PushGE
	var_21_object = Obj(); // 0x860 PushV
	func_1689(var_21_object); // 0x861 NEW_2
	var_20_object = var_21_object; // 0x862 Mov
	GlobalVars[0] = var_20_object; // 0x864 PopGE
	return 0; // 0x865 Return
}


func_2150(var_136_object, var_137_bool)
{
	var_138_object = Obj(); var_139_bool = 0; // 0x867 PushV
	var_138_object = var_136_object; // 0x868 Mov
	var_139_bool = var_137_bool; // 0x869 Mov
	TaskCall(3); // 0x86a TaskCall
	func_452(var_140_object, var_141_object, var_142_bool, var_138_object, var_139_bool); // 0x86b NEW_2
	TaskReturn(); // 0x86c TaskReturn
	ResetAAS(); // 0x86e Func
	return 0; // 0x870 Return
}


func_1646(var_16_object)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x66e PushV
	self(var_18_object); // 0x66f Func
	var_16_object = var_18_object; // 0x671 Mov
	return 2; // 0x672 Return
}


func_1135(var_276_string, var_277_int)
{
	var_278_int = 2; // 0x470 PushI
	var_279_bool = var_277_int == var_278_int; // 0x471 Eq
	if(var_279_bool == 0) goto Label_1142; // 0x472 JumpB
	var_276_string = "fire"; // 0x473 MovS
	return 0; // 0x474 Return
	
Label_1142:
	var_280_int = 1; // 0x476 PushI
	var_281_bool = var_277_int == var_280_int; // 0x477 Eq
	if(var_281_bool == 0) goto Label_1147; // 0x478 JumpB
	var_276_string = "bullet"; // 0x479 MovS
	return 0; // 0x47a Return
	
Label_1147:
	var_276_string = "phys"; // 0x47b MovS
	return 0; // 0x47c Return
}


func_2161(var_129_object)
{
	var_130_bool = 0; var_131_bool = 0; // 0x871 PushV
	var_132_bool = var_129_object == 0; // 0x872 NullEq
	if(var_132_bool == 0) goto Label_2165; // 0x873 JumpB
	return 2; // 0x874 Return
	
Label_2165:
	var_133_object = GlobalVars[0]; // 0x875 PushGE
	in(var_131_bool, var_129_object); // 0x876 ObjFunc
	var_134_bool = var_131_bool == 0; // 0x878 Not
	if(var_134_bool == 0) goto Label_2173; // 0x879 JumpB
	var_135_object = GlobalVars[0]; // 0x87a PushGE
	add(var_129_object); // 0x87b ObjFunc
	
Label_2173:
	var_136_bool = 0; var_137_object = Obj(); // 0x87d PushV
	var_137_object = var_129_object; // 0x87e Mov
	func_1171(var_136_bool, var_137_object); // 0x87f NEW_2
	if(var_136_bool == 0) goto Label_2184; // 0x881 JumpB
	var_140_object = Obj(); // 0x882 PushV
	func_1646(var_140_object); // 0x883 NEW_2
	var_143_float = 0.0; // 0x885 PushF
	ReportReputationChange(var_129_object, var_140_object, var_143_float); // 0x886 Func
	
Label_2184:
	return 2; // 0x888 Return
}


func_627(var_0_object, var_1_object)
{
	var_0_object = var_1_object; // 0x273 TMovT
	var_1_object = 0; // 0x274 SetNullT
	Face(var_0_object); // 0x275 Func
	return 0; // 0x277 Return
}


func_1652(var_42_cvector, var_43_cvector)
{
	var_50_float = 0; var_51_float = 0; // 0x674 PushV
	var_52_int = var_43_cvector | var_43_cvector; // 0x675 Or
	var_51_float = sqrt(var_52_int); // 0x676 Sqrt2
	var_53_float = 0.0; // 0x677 PushF
	var_54_bool = var_51_float < var_53_float; // 0x678 LT
	if(var_54_bool == 0) goto Label_1660; // 0x679 JumpB
	var_42_cvector = CVector(0.0, 0.0, 0.0); // 0x67a MovV
	return 2; // 0x67b Return
	
Label_1660:
	var_42_cvector = var_43_cvector / var_43_cvector; // 0x67c Div2
	return 2; // 0x67d Return
}


func_632(var_0_object)
{
	var_168_cvector = CVector(0,0,0); var_169_cvector = CVector(0,0,0); var_170_bool = 0; var_171_cvector = CVector(0,0,0); var_172_cvector = CVector(0,0,0); var_173_object = Obj(); var_174_object = Obj(); var_175_cvector = CVector(0,0,0); var_176_object = Obj(); var_177_int = 0; var_178_cvector = CVector(0,0,0); var_179_float = 0; var_180_object = Obj(); var_181_object = Obj(); var_182_cvector = CVector(0,0,0); var_183_cvector = CVector(0,0,0); var_184_bool = 0; var_185_cvector = CVector(0,0,0); var_186_cvector = CVector(0,0,0); var_187_object = Obj(); var_188_object = Obj(); var_189_cvector = CVector(0,0,0); var_190_object = Obj(); var_191_int = 0; var_192_cvector = CVector(0,0,0); var_193_float = 0; var_194_object = Obj(); var_195_object = Obj(); // 0x278 PushV
	var_196_object = Obj(); // 0x279 PushV
	var_196_object = var_0_object; // 0x27a MovT
	func_1798(var_196_object); // 0x27b NEW_2
	ReportAttack(var_0_object); // 0x27d Func
	var_197_bool = 0; var_198_object = Obj(); // 0x27f PushV
	var_198_object = var_0_object; // 0x280 MovT
	func_1171(var_197_bool, var_198_object); // 0x281 NEW_2
	if(var_197_bool == 0) goto Label_649; // 0x283 JumpB
	var_199_object = Obj(); // 0x284 PushV
	func_1646(var_199_object); // 0x285 NEW_2
	SendPlayerEnemy(var_0_object, var_199_object); // 0x287 Func
	
Label_649:
	GetDirection(var_182_cvector); // 0x289 Func
	var_200_cvector = CVector(0,0,0); var_201_object = Obj(); // 0x28b PushV
	var_201_object = var_0_object; // 0x28c MovT
	func_1149(var_201_object); // 0x28d NEW_2
	var_183_cvector = var_200_cvector; // 0x28e Mov
	var_206_float = 0; var_207_cvector = CVector(0,0,0); var_208_cvector = CVector(0,0,0); // 0x290 PushV
	var_207_cvector = var_182_cvector; // 0x291 Mov
	var_208_cvector = var_183_cvector; // 0x292 Mov
	func_1714(var_206_float, var_207_cvector, var_208_cvector); // 0x293 NEW_2
	var_230_float = 0.99939; // 0x295 PushF
	var_231_bool = var_206_float < var_230_float; // 0x296 LT
	if(var_231_bool == 0) goto Label_665; // 0x297 JumpB
	return 28; // 0x298 Return
	
Label_665:
	func_1807(); // 0x29a NEW_2
	var_232_string = "all"; // 0x29c PushS
	var_233_string = "attack_begin1"; // 0x29d PushS
	PlayAnimation(var_232_string, var_233_string); // 0x29e Func
	var_234_string = "attack"; // 0x2a0 PushS
	GetGeometryLocator(var_234_string, var_184_bool, var_185_cvector, var_186_cvector); // 0x2a1 Func
	var_235_bool = var_184_bool; // 0x2a3 Push
	if(var_235_bool == 0) goto Label_686; // 0x2a4 JumpB
	GetScene(var_188_object); // 0x2a5 Func
	var_236_string = "light-dynamic"; // 0x2a7 PushS
	var_237_string = "soldier_fire.xml"; // 0x2a8 PushS
	AddActorByType(var_187_object, var_236_string, var_188_object, var_185_cvector, var_186_cvector, var_237_string); // 0x2a9 Func
	var_188_object = 0; // 0x2ab SetNull
	var_187_object = 0; // 0x2ac SetNull
	goto Label_688; // 0x2ad Jump
	
Label_688:
	var_238_string = "shot"; // 0x2b0 PushS
	Speak(var_238_string); // 0x2b1 Func
	GetDirection(var_182_cvector); // 0x2b3 Func
	var_239_cvector = CVector(0,0,0); var_240_object = Obj(); // 0x2b5 PushV
	var_240_object = var_0_object; // 0x2b6 MovT
	func_1149(var_240_object); // 0x2b7 NEW_2
	var_183_cvector = var_239_cvector; // 0x2b8 Mov
	var_241_float = GetByIndex(var_183_cvector, 1); // 0x2ba PushE
	var_242_float = 0; var_243_object = Obj(); // 0x2bb PushV
	var_243_object = var_0_object; // 0x2bc MovT
	func_1485(var_243_object); // 0x2bd NEW_2
	var_241_float = var_241_float + var_242_float; // 0x2bf Add2
	SetByIndex(var_183_cvector, 1) = var_241_float; // 0x2c0 PopE
	var_248_float = 0.03491; // 0x2c1 PushF
	RandVecCone3D(var_189_cvector, var_183_cvector, var_248_float); // 0x2c2 Func
	GetVictimMaterial(var_189_cvector, var_190_object, var_191_int, var_192_cvector); // 0x2c4 Func
	var_249_bool = var_190_object != 0; // 0x2c6 NullNeq
	if(var_249_bool == 0) goto Label_741; // 0x2c7 JumpB
	var_250_bool = var_190_object == var_0_object; // 0x2c8 Eq
	if(var_250_bool == 0) goto Label_726; // 0x2c9 JumpB
	var_251_float = 0; var_252_object = Obj(); var_253_float = 0; var_254_int = 0; // 0x2ca PushV
	var_252_object = var_0_object; // 0x2cb MovT
	var_253_float = 1.5; // 0x2cc MovF
	var_254_int = 1; // 0x2cd MovI
	func_1210(var_251_float, var_252_object, var_253_float, var_254_int); // 0x2ce NEW_2
	var_193_float = var_251_float; // 0x2cf Mov
	var_309_int = 2; // 0x2d1 PushI
	var_310_float = 1.5; // 0x2d2 PushF
	ReportHit(var_0_object, var_309_int, var_193_float, var_310_float); // 0x2d3 Func
	goto Label_741; // 0x2d5 Jump
	
Label_741:
	var_311_string = "all"; // 0x2e5 PushS
	var_312_string = "attack_end1"; // 0x2e6 PushS
	PlayAnimation(var_311_string, var_312_string); // 0x2e7 Func
	WaitForAnimEnd(); // 0x2e9 Func
	var_313_string = "all"; // 0x2eb PushS
	var_314_string = "attack_on"; // 0x2ec PushS
	LockAnimationEnd(var_313_string, var_314_string); // 0x2ed Func
	return 28; // 0x2ef Return
	
Label_726:
	var_315_int = -1; // 0x2d6 PushI
	var_316_bool = var_191_int != var_315_int; // 0x2d7 Neq
	if(var_316_bool == 0) goto Label_741; // 0x2d8 JumpB
	GetScene(var_194_object); // 0x2d9 Func
	var_317_string = "scripted"; // 0x2db PushS
	var_318_cvector = CVector(0.0, 0.0, 1.0); // 0x2dc PushVec
	var_319_string = "richochet.xml"; // 0x2dd PushS
	AddActorByType(var_195_object, var_317_string, var_194_object, var_192_cvector, var_318_cvector, var_319_string); // 0x2de Func
	var_320_string = "Material"; // 0x2e0 PushS
	SetScriptProperty(var_320_string, var_191_int); // 0x2e1 ObjFunc
	var_195_object = 0; // 0x2e3 SetNull
	var_194_object = 0; // 0x2e4 SetNull
	
Label_686:
	WaitForAnimEnd(); // 0x2ae Func
}


func_1149(var_44_cvector)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x47d PushV
	GetPosition(var_48_cvector); // 0x47e Func
	GetPosition(var_49_cvector); // 0x480 ObjFunc
	var_44_cvector = var_49_cvector - var_48_cvector; // 0x482 Sub2
	return 4; // 0x483 Return
}


func_1662(var_307_float, var_308_cvector, var_309_cvector)
{
	var_310_cvector = CVector(0,0,0); var_311_cvector = CVector(0,0,0); // 0x67e PushV
	var_311_cvector = var_309_cvector - var_308_cvector; // 0x67f Sub2
	var_307_float = var_311_cvector | var_311_cvector; // 0x680 Or2
	return 2; // 0x681 Return
}


func_1666(var_286_float, var_287_float, var_288_float)
{
	var_291_bool = var_287_float < var_288_float; // 0x683 LT
	if(var_291_bool == 0) goto Label_1671; // 0x684 JumpB
	var_286_float = var_287_float; // 0x685 Mov
	goto Label_1672; // 0x686 Jump
	
Label_1672:
	return 0; // 0x688 Return
	
Label_1671:
	var_286_float = var_288_float; // 0x687 Mov
}


func_1156(var_369_float)
{
	var_371_cvector = CVector(0,0,0); var_372_cvector = CVector(0,0,0); var_373_cvector = CVector(0,0,0); var_374_cvector = CVector(0,0,0); var_375_cvector = CVector(0,0,0); var_376_cvector = CVector(0,0,0); // 0x484 PushV
	GetPosition(var_374_cvector); // 0x485 Func
	GetPosition(var_375_cvector); // 0x487 ObjFunc
	var_376_cvector = var_375_cvector - var_374_cvector; // 0x489 Sub2
	var_369_float = var_376_cvector | var_376_cvector; // 0x48a Or2
	return 6; // 0x48b Return
}


func_133(var_170_string)
{
	RemoveRTEnvelope(); // 0x86 Func
	SetDeathState(); // 0x88 Func
	Stop(); // 0x8a Func
	StopAsync(); // 0x8c Func
	StopSecondaryAnimation(); // 0x8e Func
	var_171_string = ""; // 0x90 PushV
	var_171_string = var_170_string; // 0x91 Mov
	func_1518(var_171_string); // 0x92 NEW_2
	var_200_string = "all"; // 0x94 PushS
	PlayAnimation(var_200_string, var_170_string); // 0x95 Func
	WaitForAnimEnd(); // 0x97 Func
	var_201_string = "all"; // 0x99 PushS
	LockAnimationEnd(var_201_string, var_170_string); // 0x9a Func
	RemoveEnvelope(); // 0x9c Func
	return 0; // 0x9e Return
}


func_2185(var_144_object)
{
	var_145_object = Obj(); // 0x88a PushV
	var_145_object = var_144_object; // 0x88b Mov
	func_2161(var_145_object); // 0x88c NEW_2
	var_146_object = Obj(); var_147_bool = 0; // 0x88e PushV
	var_146_object = var_144_object; // 0x88f Mov
	var_147_bool = 1; // 0x890 MovB
	func_2150(var_146_object, var_147_bool); // 0x891 NEW_2
	return 0; // 0x893 Return
}


func_1673(var_58_float, var_59_float, var_60_float, var_61_float)
{
	var_62_bool = var_59_float < var_60_float; // 0x68a LT
	if(var_62_bool == 0) goto Label_1678; // 0x68b JumpB
	var_58_float = var_60_float; // 0x68c Mov
	return 0; // 0x68d Return
	
Label_1678:
	var_63_bool = var_59_float > var_61_float; // 0x68e GT
	if(var_63_bool == 0) goto Label_1682; // 0x68f JumpB
	var_58_float = var_61_float; // 0x690 Mov
	return 0; // 0x691 Return
	
Label_1682:
	var_58_float = var_59_float; // 0x692 Mov
	return 0; // 0x693 Return
}


func_1164(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x48c PushV
	var_17_string = "player"; // 0x48d PushS
	FindActor(var_16_object, var_17_string); // 0x48e Func
	var_14_object = var_16_object; // 0x490 Mov
	return 2; // 0x491 Return
}


func_1171(var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_bool = 0; // 0x493 PushV
	IsPlayerActor(var_12_object, var_14_bool); // 0x494 Func
	var_11_bool = var_14_bool; // 0x496 Mov
	return 2; // 0x497 Return
}


func_1684(var_103_bool, var_104_int, var_105_int)
{
	var_106_int = 0; var_107_int = 0; // 0x694 PushV
	irand(var_107_int, var_105_int); // 0x695 Func
	var_103_bool = var_107_int < var_104_int; // 0x697 LT2
	return 2; // 0x698 Return
}


func_2196(var_131_object)
{
	var_132_bool = 0; var_133_bool = 0; // 0x894 PushV
	var_134_object = GlobalVars[0]; // 0x895 PushGE
	in(var_133_bool, var_131_object); // 0x896 ObjFunc
	var_135_bool = var_133_bool; // 0x898 Push
	if(var_135_bool == 0) goto Label_2208; // 0x899 JumpB
	var_136_object = Obj(); var_137_bool = 0; // 0x89a PushV
	var_136_object = var_131_object; // 0x89b Mov
	var_137_bool = 1; // 0x89c MovB
	func_2150(var_136_object, var_137_bool); // 0x89d NEW_2
	goto Label_2216; // 0x89f Jump
	
Label_2216:
	return 2; // 0x8a8 Return
	
Label_2208:
	var_356_object = Obj(); // 0x8a0 PushV
	var_356_object = var_131_object; // 0x8a1 Mov
	TaskCall(2); // 0x8a2 TaskCall
	func_285(var_358_bool, var_356_object); // 0x8a3 NEW_2
	TaskReturn(); // 0x8a4 TaskReturn
	ResetAAS(); // 0x8a6 Func
}


func_1176(var_48_bool, var_49_object, var_50_string)
{
	var_51_bool = 0; var_52_bool = 0; // 0x498 PushV
	var_53_string = "HasProperty"; // 0x499 PushS
	var_54_int = 2; // 0x49a PushI
	var_55_bool = IsFuncExist(var_49_object, var_53_string, var_54_int); // 0x49b FuncExist
	var_56_bool = var_55_bool == 0; // 0x49c Not
	if(var_56_bool == 0) goto Label_1184; // 0x49d JumpB
	var_48_bool = 0; // 0x49e MovB
	return 2; // 0x49f Return
	
Label_1184:
	HasProperty(var_50_string, var_52_bool); // 0x4a0 ObjFunc
	var_48_bool = var_52_bool; // 0x4a2 Mov
	return 2; // 0x4a3 Return
}


func_1689(var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x699 PushV
	CreateObjectSet(var_23_object); // 0x69a Func
	var_21_object = var_23_object; // 0x69c Mov
	return 2; // 0x69d Return
}


func_1695(var_209_float, var_210_cvector, var_211_cvector)
{
	var_212_float = GetByIndex(var_210_cvector, 0); // 0x6a0 PushE
	var_213_float = GetByIndex(var_211_cvector, 0); // 0x6a1 PushE
	var_214_float = var_212_float * var_213_float; // 0x6a2 Mult
	var_215_float = GetByIndex(var_210_cvector, 2); // 0x6a3 PushE
	var_216_float = GetByIndex(var_211_cvector, 2); // 0x6a4 PushE
	var_217_float = var_215_float * var_216_float; // 0x6a5 Mult
	var_209_float = var_214_float + var_217_float; // 0x6a6 Add2
	return 0; // 0x6a7 Return
}


func_1188(var_40_bool, var_41_object, var_42_string, var_43_float, var_44_float, var_45_float)
{
	var_46_float = 0; var_47_float = 0; // 0x4a4 PushV
	var_48_bool = 0; var_49_object = Obj(); var_50_string = ""; // 0x4a5 PushV
	var_49_object = var_41_object; // 0x4a6 Mov
	var_50_string = var_42_string; // 0x4a7 Mov
	func_1176(var_48_bool, var_49_object, var_50_string); // 0x4a8 NEW_2
	var_57_bool = var_48_bool == 0; // 0x4aa Not
	if(var_57_bool == 0) goto Label_1198; // 0x4ab JumpB
	var_40_bool = 0; // 0x4ac MovB
	return 2; // 0x4ad Return
	
Label_1198:
	GetProperty(var_42_string, var_47_float); // 0x4ae ObjFunc
	var_58_float = 0; var_59_float = 0; var_60_float = 0; var_61_float = 0; // 0x4b0 PushV
	var_59_float = var_47_float + var_43_float; // 0x4b1 Add2
	var_60_float = var_44_float; // 0x4b2 Mov
	var_61_float = var_45_float; // 0x4b3 Mov
	func_1673(var_58_float, var_59_float, var_60_float, var_61_float); // 0x4b4 NEW_2
	SetProperty(var_42_string, var_58_float); // 0x4b6 ObjFunc
	var_40_bool = 1; // 0x4b8 MovB
	return 2; // 0x4b9 Return
}


func_165(var_0_object, var_129_object)
{
	var_131_bool = 0; var_132_bool = 0; // 0xa5 PushV
	var_0_object = var_129_object; // 0xa6 TMov
	Face(var_129_object); // 0xa7 Func
	
Label_169:
	var_133_float = 0.5; // 0xa9 PushF
	Sleep(var_133_float, var_132_bool); // 0xaa Func
	var_134_bool = 0; // 0xac PushV
	var_134_bool = 1; // 0xad MovB
	var_135_bool = var_132_bool == 0; // 0xae Not
	if(var_135_bool == 0) goto Label_183; // 0xaf JumpB
	var_136_bool = 0; var_137_object = Obj(); // 0xb0 PushV
	var_137_object = var_0_object; // 0xb1 MovT
	func_1324(var_136_bool, var_137_object); // 0xb2 NEW_2
	var_138_bool = var_136_bool == 0; // 0xb4 Not
	if(var_138_bool == 0) goto Label_183; // 0xb5 JumpB
	var_134_bool = 0; // 0xb6 MovB
	
Label_183:
	if(var_134_bool == 0) goto Label_185; // 0xb7 JumpB
	goto Label_186; // 0xb8 Jump
	
Label_186:
	StopAsync(); // 0xba Func
	return 2; // 0xbc Return
	
Label_185:
	goto Label_169; // 0xb9 Jump
}


func_1704(var_218_float, var_219_cvector)
{
	var_220_float = GetByIndex(var_219_cvector, 0); // 0x6a9 PushE
	var_221_float = GetByIndex(var_219_cvector, 0); // 0x6aa PushE
	var_222_float = var_220_float * var_221_float; // 0x6ab Mult
	var_223_float = GetByIndex(var_219_cvector, 2); // 0x6ac PushE
	var_224_float = GetByIndex(var_219_cvector, 2); // 0x6ad PushE
	var_225_float = var_223_float * var_224_float; // 0x6ae Mult
	var_226_int = var_222_float + var_225_float; // 0x6af Add
	var_218_float = sqrt(var_226_int); // 0x6b0 Sqrt2
	return 0; // 0x6b1 Return
}


func_2217(var_367_bool, var_368_object)
{
	var_369_float = 0; var_370_object = Obj(); // 0x8aa PushV
	var_370_object = var_368_object; // 0x8ab Mov
	func_1156(var_370_object); // 0x8ac NEW_2
	var_377_float = 40000.0; // 0x8ae PushF
	var_367_bool = var_369_float <= var_377_float; // 0x8af LE2
	return 0; // 0x8b0 Return
}


func_2225(var_52_bool, var_53_object)
{
	var_54_float = 0; var_55_string = ""; var_56_float = 0; var_57_float = 0; var_58_string = ""; var_59_float = 0; // 0x8b1 PushV
	var_60_bool = 0; var_61_object = Obj(); // 0x8b2 PushV
	var_61_object = var_53_object; // 0x8b3 Mov
	func_1324(var_60_bool, var_61_object); // 0x8b4 NEW_2
	var_62_bool = var_60_bool == 0; // 0x8b6 Not
	if(var_62_bool == 0) goto Label_2234; // 0x8b7 JumpB
	var_52_bool = 0; // 0x8b8 MovB
	return 6; // 0x8b9 Return
	
Label_2234:
	var_63_bool = 0; var_64_object = Obj(); // 0x8ba PushV
	var_64_object = var_53_object; // 0x8bb Mov
	func_1171(var_63_bool, var_64_object); // 0x8bc NEW_2
	if(var_63_bool == 0) goto Label_2245; // 0x8be JumpB
	var_67_string = "reputation"; // 0x8bf PushS
	GetProperty(var_67_string, var_57_float); // 0x8c0 ObjFunc
	var_68_float = 0.33; // 0x8c2 PushF
	var_52_bool = var_57_float < var_68_float; // 0x8c3 LT2
	return 6; // 0x8c4 Return
	
Label_2245:
	var_69_bool = 0; var_70_object = Obj(); var_71_string = ""; // 0x8c5 PushV
	var_70_object = var_53_object; // 0x8c6 Mov
	var_71_string = "class"; // 0x8c7 MovS
	func_1176(var_69_bool, var_70_object, var_71_string); // 0x8c8 NEW_2
	var_72_bool = var_69_bool == 0; // 0x8ca Not
	if(var_72_bool == 0) goto Label_2254; // 0x8cb JumpB
	var_52_bool = 0; // 0x8cc MovB
	return 6; // 0x8cd Return
	
Label_2254:
	var_73_string = "class"; // 0x8ce PushS
	GetProperty(var_73_string, var_58_string); // 0x8cf ObjFunc
	var_74_bool = 0; // 0x8d1 PushV
	var_74_bool = 1; // 0x8d2 MovB
	var_75_bool = 0; // 0x8d3 PushV
	var_75_bool = 1; // 0x8d4 MovB
	var_76_string = "bomber"; // 0x8d5 PushS
	var_77_bool = var_58_string == var_76_string; // 0x8d6 Eq
	if(var_77_bool == 0) goto Label_2268; // 0x8d7 JumpB
	var_78_string = "hunter"; // 0x8d8 PushS
	var_79_bool = var_58_string == var_78_string; // 0x8d9 Eq
	if(var_79_bool == 0) goto Label_2268; // 0x8da JumpB
	var_75_bool = 0; // 0x8db MovB
	
Label_2268:
	if(var_75_bool == 0) goto Label_2273; // 0x8dc JumpB
	var_80_string = "grabitel"; // 0x8dd PushS
	var_81_bool = var_58_string == var_80_string; // 0x8de Eq
	if(var_81_bool == 0) goto Label_2273; // 0x8df JumpB
	var_74_bool = 0; // 0x8e0 MovB
	
Label_2273:
	if(var_74_bool == 0) goto Label_2276; // 0x8e1 JumpB
	var_52_bool = 1; // 0x8e2 MovB
	return 6; // 0x8e3 Return
	
Label_2276:
	var_82_bool = 0; var_83_object = Obj(); var_84_string = ""; // 0x8e4 PushV
	var_83_object = var_53_object; // 0x8e5 Mov
	var_84_string = "disease"; // 0x8e6 MovS
	func_1176(var_82_bool, var_83_object, var_84_string); // 0x8e7 NEW_2
	var_85_bool = var_82_bool == 0; // 0x8e9 Not
	if(var_85_bool == 0) goto Label_2285; // 0x8ea JumpB
	var_52_bool = 0; // 0x8eb MovB
	return 6; // 0x8ec Return
	
Label_2285:
	var_86_bool = 0; // 0x8ed PushV
	var_86_bool = 1; // 0x8ee MovB
	var_87_bool = 0; var_88_string = ""; // 0x8ef PushV
	var_88_string = var_58_string; // 0x8f0 Mov
	func_1559(var_87_bool, var_88_string); // 0x8f1 NEW_2
	if(var_87_bool == 0) goto Label_2296; // 0x8f3 JumpB
	var_126_string = "dog"; // 0x8f4 PushS
	var_127_bool = var_58_string == var_126_string; // 0x8f5 Eq
	if(var_127_bool == 0) goto Label_2296; // 0x8f6 JumpB
	var_86_bool = 0; // 0x8f7 MovB
	
Label_2296:
	if(var_86_bool == 0) goto Label_2303; // 0x8f8 JumpB
	var_128_string = "disease"; // 0x8f9 PushS
	GetProperty(var_128_string, var_59_float); // 0x8fa ObjFunc
	var_129_int = 0; // 0x8fc PushI
	var_52_bool = var_59_float > var_129_int; // 0x8fd GT2
	return 6; // 0x8fe Return
	
Label_2303:
	var_52_bool = 0; // 0x8ff MovB
	return 6; // 0x900 Return
}


func_1714(var_206_float, var_207_cvector, var_208_cvector)
{
	var_209_float = 0; var_210_cvector = CVector(0,0,0); var_211_cvector = CVector(0,0,0); // 0x6b3 PushV
	var_210_cvector = var_207_cvector; // 0x6b4 Mov
	var_211_cvector = var_208_cvector; // 0x6b5 Mov
	func_1695(var_209_float, var_210_cvector, var_211_cvector); // 0x6b6 NEW_2
	var_218_float = 0; var_219_cvector = CVector(0,0,0); // 0x6b8 PushV
	var_219_cvector = var_207_cvector; // 0x6b9 Mov
	func_1704(var_218_float, var_219_cvector); // 0x6ba NEW_2
	var_227_float = 0; var_228_cvector = CVector(0,0,0); // 0x6bc PushV
	var_228_cvector = var_208_cvector; // 0x6bd Mov
	func_1704(var_227_float, var_228_cvector); // 0x6be NEW_2
	var_229_float = var_218_float * var_227_float; // 0x6c0 Mult
	var_206_float = var_209_float / var_209_float; // 0x6c1 Div2
	return 0; // 0x6c2 Return
}


func_1210(var_251_float, var_252_object, var_253_float, var_254_int)
{
	var_255_int = 0; var_256_string = ""; var_257_int = 0; var_258_float = 0; var_259_float = 0; var_260_float = 0; var_261_int = 0; var_262_string = ""; var_263_int = 0; var_264_float = 0; var_265_float = 0; var_266_float = 0; // 0x4ba PushV
	var_267_bool = 0; var_268_object = Obj(); var_269_string = ""; // 0x4bb PushV
	var_268_object = var_252_object; // 0x4bc Mov
	var_269_string = "health"; // 0x4bd MovS
	func_1176(var_267_bool, var_268_object, var_269_string); // 0x4be NEW_2
	var_270_bool = var_267_bool == 0; // 0x4c0 Not
	if(var_270_bool == 0) goto Label_1220; // 0x4c1 JumpB
	var_251_float = 0.0; // 0x4c2 MovF
	return 12; // 0x4c3 Return
	
Label_1220:
	var_271_bool = 0; var_272_object = Obj(); var_273_string = ""; // 0x4c4 PushV
	var_272_object = var_252_object; // 0x4c5 Mov
	var_273_string = "armor"; // 0x4c6 MovS
	func_1176(var_271_bool, var_272_object, var_273_string); // 0x4c7 NEW_2
	var_274_bool = var_271_bool == 0; // 0x4c9 Not
	if(var_274_bool == 0) goto Label_1229; // 0x4ca JumpB
	var_261_int = 0; // 0x4cb MovI
	goto Label_1232; // 0x4cc Jump
	
Label_1232:
	var_275_string = "armor_"; // 0x4d0 PushS
	var_276_string = ""; var_277_int = 0; // 0x4d1 PushV
	var_277_int = var_254_int; // 0x4d2 Mov
	func_1135(var_276_string, var_277_int); // 0x4d3 NEW_2
	var_262_string = var_275_string + var_276_string; // 0x4d5 Add2
	var_282_bool = 0; var_283_object = Obj(); var_284_string = ""; // 0x4d6 PushV
	var_283_object = var_252_object; // 0x4d7 Mov
	var_284_string = var_262_string; // 0x4d8 Mov
	func_1176(var_282_bool, var_283_object, var_284_string); // 0x4d9 NEW_2
	var_285_bool = var_282_bool == 0; // 0x4db Not
	if(var_285_bool == 0) goto Label_1247; // 0x4dc JumpB
	var_263_int = 0; // 0x4dd MovI
	goto Label_1249; // 0x4de Jump
	
Label_1249:
	var_286_float = 0; var_287_float = 0; var_288_float = 0; // 0x4e1 PushV
	var_289_int = var_261_int + var_263_int; // 0x4e2 Add
	var_290_float = 100.0; // 0x4e3 PushF
	var_287_float = var_289_int / var_289_int; // 0x4e4 Div2
	var_288_float = 1; // 0x4e5 MovI
	func_1666(var_286_float, var_287_float, var_288_float); // 0x4e6 NEW_2
	var_264_float = var_286_float; // 0x4e7 Mov
	var_292_string = "health"; // 0x4e9 PushS
	GetProperty(var_292_string, var_265_float); // 0x4ea ObjFunc
	var_293_int = 1; // 0x4ec PushI
	var_294_int = var_293_int - var_264_float; // 0x4ed Sub
	var_266_float = var_253_float * var_294_int; // 0x4ee Mult2
	var_295_string = "health"; // 0x4ef PushS
	var_296_float = 0; var_297_float = 0; var_298_float = 0; var_299_float = 0; // 0x4f0 PushV
	var_297_float = var_265_float - var_266_float; // 0x4f1 Sub2
	var_298_float = 0; // 0x4f2 MovI
	var_299_float = 1; // 0x4f3 MovI
	func_1673(var_296_float, var_297_float, var_298_float, var_299_float); // 0x4f4 NEW_2
	SetProperty(var_295_string, var_296_float); // 0x4f6 ObjFunc
	var_302_bool = 0; var_303_object = Obj(); // 0x4f8 PushV
	var_303_object = var_252_object; // 0x4f9 Mov
	func_1171(var_302_bool, var_303_object); // 0x4fa NEW_2
	if(var_302_bool == 0) goto Label_1281; // 0x4fc JumpB
	var_304_float = 0; // 0x4fd PushV
	var_304_float = -var_266_float; // 0x4fe Neg2
	func_1766(var_304_float); // 0x4ff NEW_2
	
Label_1281:
	var_251_float = var_266_float; // 0x501 Mov
	return 12; // 0x502 Return
	
Label_1247:
	GetProperty(var_262_string, var_263_int); // 0x4df ObjFunc
	
Label_1229:
	var_308_string = "armor"; // 0x4cd PushS
	GetProperty(var_308_string, var_261_int); // 0x4ce ObjFunc
}


func_189()
{
	StopAsync(); // 0xbd Func
	var_130_int = 100; // 0xbf PushI
	KillTimer(var_130_int); // 0xc0 Func
	StopGroup0(); // 0xc2 Func
	return 0; // 0xc4 Return
}


func_1731(var_29_bool, var_30_object, var_31_float)
{
	var_32_bool = var_30_object == 0; // 0x6c4 Not
	if(var_32_bool == 0) goto Label_1736; // 0x6c5 JumpB
	var_29_bool = 0; // 0x6c6 MovB
	return 0; // 0x6c7 Return
	
Label_1736:
	var_33_int = 0; // 0x6c8 PushI
	var_34_bool = var_31_float > var_33_int; // 0x6c9 GT
	if(var_34_bool == 0) goto Label_1743; // 0x6ca JumpB
	var_35_int = 8; // 0x6cb PushI
	SendWorldWndMessage(var_35_int); // 0x6cc Func
	goto Label_1752; // 0x6ce Jump
	
Label_1752:
	var_36_float = 0; // 0x6d8 PushV
	var_36_float = var_31_float; // 0x6d9 Mov
	func_1776(var_36_float); // 0x6da NEW_2
	var_40_bool = 0; var_41_object = Obj(); var_42_string = ""; var_43_float = 0; var_44_float = 0; var_45_float = 0; // 0x6dc PushV
	var_41_object = var_30_object; // 0x6dd Mov
	var_42_string = "reputation"; // 0x6de MovS
	var_43_float = var_31_float; // 0x6df Mov
	var_44_float = 0; // 0x6e0 MovI
	var_45_float = 1; // 0x6e1 MovI
	func_1188(var_40_bool, var_41_object, var_42_string, var_43_float, var_44_float, var_45_float); // 0x6e2 NEW_2
	var_29_bool = 1; // 0x6e4 MovB
	return 0; // 0x6e5 Return
	
Label_1743:
	var_64_int = 0; // 0x6cf PushI
	var_65_bool = var_31_float < var_64_int; // 0x6d0 LT
	if(var_65_bool == 0) goto Label_1750; // 0x6d1 JumpB
	var_66_int = 9; // 0x6d2 PushI
	SendWorldWndMessage(var_66_int); // 0x6d3 Func
	goto Label_1752; // 0x6d5 Jump
	
Label_1750:
	var_29_bool = 0; // 0x6d6 MovB
	return 0; // 0x6d7 Return
}


func_1766(var_304_float)
{
	var_305_object = Obj(); var_306_object = Obj(); // 0x6e6 PushV
	CreateFloatVector(var_306_object); // 0x6e7 Func
	add(var_304_float); // 0x6e9 ObjFunc
	var_307_int = 15; // 0x6eb PushI
	SendWorldWndMessage(var_307_int, var_306_object); // 0x6ec Func
	return 2; // 0x6ee Return
}


func_1776(var_36_float)
{
	var_37_object = Obj(); var_38_object = Obj(); // 0x6f0 PushV
	CreateFloatVector(var_38_object); // 0x6f1 Func
	add(var_36_float); // 0x6f3 ObjFunc
	var_39_int = 16; // 0x6f5 PushI
	SendWorldWndMessage(var_39_int, var_38_object); // 0x6f6 Func
	return 2; // 0x6f8 Return
}


func_1786(var_10_bool, var_11_string, var_12_string)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0x6fa PushV
	FindActor(var_14_object, var_11_string); // 0x6fb Func
	var_15_bool = var_14_object == 0; // 0x6fd NullEq
	if(var_15_bool == 0) goto Label_1793; // 0x6fe JumpB
	var_10_bool = 0; // 0x6ff MovB
	return 2; // 0x700 Return
	
Label_1793:
	Trigger(var_14_object, var_12_string); // 0x701 Func
	var_10_bool = 1; // 0x703 MovB
	return 2; // 0x704 Return
}


func_2305(var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_bool = 0; // 0x901 PushV
	var_15_bool = 0; var_16_object = Obj(); // 0x902 PushV
	var_16_object = var_12_object; // 0x903 Mov
	func_1324(var_15_bool, var_16_object); // 0x904 NEW_2
	var_49_bool = var_15_bool == 0; // 0x906 Not
	if(var_49_bool == 0) goto Label_2314; // 0x907 JumpB
	var_11_bool = 0; // 0x908 MovB
	return 2; // 0x909 Return
	
Label_2314:
	var_50_object = GlobalVars[0]; // 0x90a PushGE
	in(var_14_bool, var_12_object); // 0x90b ObjFunc
	var_51_bool = var_14_bool; // 0x90d Push
	if(var_51_bool == 0) goto Label_2321; // 0x90e JumpB
	var_11_bool = 1; // 0x90f MovB
	return 2; // 0x910 Return
	
Label_2321:
	var_52_bool = 0; var_53_object = Obj(); // 0x911 PushV
	var_53_object = var_12_object; // 0x912 Mov
	func_2225(var_52_bool, var_53_object); // 0x913 NEW_2
	var_11_bool = var_52_bool; // 0x914 Mov
	return 2; // 0x916 Return
}


func_1283(var_30_bool)
{
	var_32_bool = 0; var_33_bool = 0; // 0x503 PushV
	IsDead(var_33_bool); // 0x504 ObjFunc
	var_30_bool = var_33_bool; // 0x506 Mov
	return 2; // 0x507 Return
}


func_1798(var_147_object)
{
	var_148_bool = 0; var_149_bool = 0; // 0x706 PushV
	IsPlayerActor(var_147_object, var_149_bool); // 0x707 Func
	var_150_bool = var_149_bool; // 0x709 Push
	if(var_150_bool == 0) goto Label_1806; // 0x70a JumpB
	var_151_string = "attack"; // 0x70b PushS
	PlayGlobalMusic(var_151_string); // 0x70c Func
	
Label_1806:
	return 2; // 0x70e Return
}


func_1288(var_19_bool, var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); // 0x508 PushV
	var_25_bool = var_20_object == 0; // 0x509 NullEq
	if(var_25_bool == 0) goto Label_1293; // 0x50a JumpB
	var_19_bool = 0; // 0x50b MovB
	return 4; // 0x50c Return
	
Label_1293:
	var_26_bool = 0; // 0x50d PushV
	var_26_bool = 0; // 0x50e MovB
	var_27_string = "IsDead"; // 0x50f PushS
	var_28_int = 1; // 0x510 PushI
	var_29_bool = IsFuncExist(var_20_object, var_27_string, var_28_int); // 0x511 FuncExist
	if(var_29_bool == 0) goto Label_1305; // 0x512 JumpB
	var_30_bool = 0; var_31_object = Obj(); // 0x513 PushV
	var_31_object = var_20_object; // 0x514 Mov
	func_1283(var_31_object); // 0x515 NEW_2
	if(var_30_bool == 0) goto Label_1305; // 0x517 JumpB
	var_26_bool = 1; // 0x518 MovB
	
Label_1305:
	if(var_26_bool == 0) goto Label_1308; // 0x519 JumpB
	var_19_bool = 0; // 0x51a MovB
	return 4; // 0x51b Return
	
Label_1308:
	GetScene(var_23_object); // 0x51c Func
	var_34_bool = var_23_object == 0; // 0x51e NullEq
	if(var_34_bool == 0) goto Label_1314; // 0x51f JumpB
	var_19_bool = 0; // 0x520 MovB
	return 4; // 0x521 Return
	
Label_1314:
	GetScene(var_24_object); // 0x522 ObjFunc
	var_35_bool = var_23_object != var_24_object; // 0x524 Neq
	if(var_35_bool == 0) goto Label_1320; // 0x525 JumpB
	var_19_bool = 0; // 0x526 MovB
	return 4; // 0x527 Return
	
Label_1320:
	var_19_bool = 1; // 0x528 MovB
	return 4; // 0x529 Return
}


func_1807()
{
	var_152_object = Obj(); var_153_object = Obj(); // 0x70f PushV
	GetScene(var_153_object); // 0x710 Func
	var_154_string = "battle"; // 0x712 PushS
	var_155_object = Obj(); // 0x713 PushV
	func_1646(var_155_object); // 0x714 NEW_2
	BroadcastMessage(var_154_string, var_155_object, var_153_object); // 0x716 Func
	return 2; // 0x718 Return
}


func_2327(var_131_object)
{
	var_132_object = Obj(); // 0x918 PushV
	var_132_object = var_131_object; // 0x919 Mov
	func_2372(var_132_object); // 0x91a NEW_2
	return 0; // 0x91c Return
}


func_1818(var_127_int)
{
	var_128_int = 0; var_129_int = 0; // 0x71a PushV
	var_130_string = "branch"; // 0x71b PushS
	GetVariable(var_130_string, var_129_int); // 0x71c Func
	var_127_int = var_129_int; // 0x71e Mov
	return 2; // 0x71f Return
}


func_2333(var_13_bool, var_14_object, var_15_object, var_16_bool)
{
	var_17_bool = 0; var_18_bool = 0; // 0x91d PushV
	var_19_bool = 0; var_20_object = Obj(); var_21_bool = 0; // 0x91e PushV
	var_20_object = var_15_object; // 0x91f Mov
	var_21_bool = !var_16_bool; // 0x920 Not2
	func_2007(var_19_bool, var_20_object, var_21_bool); // 0x921 NEW_2
	if(var_19_bool == 0) goto Label_2357; // 0x923 JumpB
	CanSee(var_18_bool, var_14_object); // 0x924 Func
	var_87_bool = 0; // 0x926 PushV
	var_87_bool = 1; // 0x927 MovB
	var_88_bool = var_18_bool; // 0x928 Push
	if(var_88_bool == 0) goto Label_2354; // 0x929 JumpB
	var_89_float = 0; var_90_object = Obj(); // 0x92a PushV
	var_90_object = var_14_object; // 0x92b Mov
	func_1156(var_90_object); // 0x92c NEW_2
	var_97_float = 490000.0; // 0x92e PushF
	var_98_bool = var_89_float <= var_97_float; // 0x92f LE
	if(var_98_bool == 0) goto Label_2354; // 0x930 JumpB
	var_87_bool = 0; // 0x931 MovB
	
Label_2354:
	if(var_87_bool == 0) goto Label_2357; // 0x932 JumpB
	var_13_bool = 1; // 0x933 MovB
	return 2; // 0x934 Return
	
Label_2357:
	var_13_bool = 0; // 0x935 MovB
	return 2; // 0x936 Return
}


func_285(var_0_object, var_356_object)
{
	var_359_bool = 0; var_360_int = 0; var_361_int = 0; var_362_bool = 0; var_363_int = 0; var_364_int = 0; // 0x11d PushV
	var_0_object = var_356_object; // 0x11e TMov
	var_365_object = Obj(); // 0x11f PushV
	var_365_object = var_0_object; // 0x120 MovT
	func_1798(var_365_object); // 0x121 NEW_2
	CanSee(var_364_int, var_0_object); // 0x123 Func
	var_366_object = var_1_object; // 0x125 PushT
	if(var_366_object == 0) goto Label_308; // 0x126 JumpB
	var_367_bool = 0; var_368_object = Obj(); // 0x127 PushV
	var_368_object = var_0_object; // 0x128 MovT
	func_2217(var_367_bool, var_368_object); // 0x129 NEW_2
	if(var_367_bool == 0) goto Label_306; // 0x12b JumpB
	var_378_object = Obj(); var_379_bool = 0; // 0x12c PushV
	var_378_object = var_0_object; // 0x12d MovT
	var_379_bool = 1; // 0x12e MovB
	func_2150(var_378_object, var_379_bool); // 0x12f NEW_2
	return 6; // 0x131 Return
	
Label_306:
	Face(var_0_object); // 0x132 Func
	
Label_308:
	func_1807(); // 0x135 NEW_2
	var_380_string = "all"; // 0x137 PushS
	var_381_string = "shoot_begin"; // 0x138 PushS
	PlayAnimation(var_380_string, var_381_string); // 0x139 Func
	WaitForAnimEnd(var_362_bool); // 0x13b Func
	var_382_bool = var_362_bool == 0; // 0x13d Not
	if(var_382_bool == 0) goto Label_322; // 0x13e JumpB
	StopAsync(); // 0x13f Func
	return 6; // 0x141 Return
	
Label_322:
	var_383_string = "shot"; // 0x142 PushS
	Speak(var_383_string); // 0x143 Func
	var_384_string = "all"; // 0x145 PushS
	var_385_string = "shoot_end"; // 0x146 PushS
	PlayAnimation(var_384_string, var_385_string); // 0x147 Func
	WaitForAnimEnd(var_362_bool); // 0x149 Func
	var_386_bool = var_362_bool == 0; // 0x14b Not
	if(var_386_bool == 0) goto Label_336; // 0x14c JumpB
	StopAsync(); // 0x14d Func
	return 6; // 0x14f Return
	
Label_336:
	var_387_string = "all"; // 0x150 PushS
	var_388_string = "shoot_end"; // 0x151 PushS
	LockAnimationEnd(var_387_string, var_388_string); // 0x152 Func
	var_363_int = 0; // 0x154 MovI
	var_364_int = 0; // 0x155 MovI
	
Label_342:
	var_389_int = 20; // 0x156 PushI
	var_390_bool = var_364_int < var_389_int; // 0x157 LT
	if(var_390_bool == 0) goto Label_394; // 0x158 JumpB
	var_391_object = Obj(); // 0x159 PushV
	var_391_object = var_0_object; // 0x15a MovT
	func_1798(var_391_object); // 0x15b NEW_2
	var_392_float = 0.5; // 0x15d PushF
	Sleep(var_392_float, var_362_bool); // 0x15e Func
	var_393_bool = var_362_bool == 0; // 0x160 Not
	if(var_393_bool == 0) goto Label_355; // 0x161 JumpB
	return 6; // 0x162 Return
	
Label_355:
	CanSee(var_364_int, var_0_object); // 0x163 Func
	var_394_object = var_1_object; // 0x165 PushT
	if(var_394_object == 0) goto Label_377; // 0x166 JumpB
	var_363_int = 0; // 0x167 MovI
	var_395_bool = 0; var_396_object = Obj(); // 0x168 PushV
	var_396_object = var_0_object; // 0x169 MovT
	func_2217(var_395_bool, var_396_object); // 0x16a NEW_2
	if(var_395_bool == 0) goto Label_374; // 0x16c JumpB
	func_436(); // 0x16e NEW_2
	var_397_object = Obj(); var_398_bool = 0; // 0x170 PushV
	var_397_object = var_0_object; // 0x171 MovT
	var_398_bool = 0; // 0x172 MovB
	func_2150(var_397_object, var_398_bool); // 0x173 NEW_2
	return 6; // 0x175 Return
	
Label_374:
	Face(var_0_object); // 0x176 Func
	goto Label_391; // 0x178 Jump
	
Label_391:
	var_399_int = 1; // 0x187 PushI
	var_364_int = var_364_int + var_399_int; // 0x188 Add2
	goto Label_342; // 0x189 Jump
	
Label_377:
	StopAsync(); // 0x179 Func
	var_400_int = 1; // 0x17b PushI
	var_363_int = var_363_int + var_400_int; // 0x17c Add2
	var_401_int = 4; // 0x17d PushI
	var_402_bool = var_363_int == var_401_int; // 0x17e Eq
	if(var_402_bool == 0) goto Label_391; // 0x17f JumpB
	var_403_string = "all"; // 0x180 PushS
	var_404_string = "attack_off"; // 0x181 PushS
	PlayAnimation(var_403_string, var_404_string); // 0x182 Func
	WaitForAnimEnd(); // 0x184 Func
	return 6; // 0x186 Return
	
Label_394:
	func_436(); // 0x18b NEW_2
	var_405_object = Obj(); var_406_bool = 0; // 0x18d PushV
	var_405_object = var_356_object; // 0x18e Mov
	var_406_bool = 0; // 0x18f MovB
	func_2150(var_405_object, var_406_bool); // 0x190 NEW_2
	return 6; // 0x192 Return
}


func_1824(var_14_object)
{
	var_15_int = 0; // 0x721 PushV
	func_1818(var_15_int); // 0x722 NEW_2
	var_19_int = 1; // 0x724 PushI
	var_20_bool = var_15_int == var_19_int; // 0x725 Eq
	if(var_20_bool == 0) goto Label_1834; // 0x726 JumpB
	WorkWithCorpse(var_14_object); // 0x727 Func
	goto Label_1836; // 0x729 Jump
	
Label_1836:
	return 0; // 0x72c Return
	
Label_1834:
	Barter(var_14_object); // 0x72a Func
}


func_1324(var_15_bool, var_16_object)
{
	var_17_int = 0; var_18_int = 0; // 0x52c PushV
	var_19_bool = 0; var_20_object = Obj(); // 0x52d PushV
	var_20_object = var_16_object; // 0x52e Mov
	func_1288(var_19_bool, var_20_object); // 0x52f NEW_2
	var_36_bool = var_19_bool == 0; // 0x531 Not
	if(var_36_bool == 0) goto Label_1333; // 0x532 JumpB
	var_15_bool = 0; // 0x533 MovB
	return 2; // 0x534 Return
	
Label_1333:
	var_37_bool = 0; var_38_object = Obj(); var_39_string = ""; // 0x535 PushV
	var_38_object = var_16_object; // 0x536 Mov
	var_39_string = "noaccess"; // 0x537 MovS
	func_1176(var_37_bool, var_38_object, var_39_string); // 0x538 NEW_2
	var_46_bool = var_37_bool == 0; // 0x53a Not
	if(var_46_bool == 0) goto Label_1342; // 0x53b JumpB
	var_15_bool = 1; // 0x53c MovB
	return 2; // 0x53d Return
	
Label_1342:
	var_47_string = "noaccess"; // 0x53e PushS
	GetProperty(var_47_string, var_18_int); // 0x53f ObjFunc
	var_48_int = 0; // 0x541 PushI
	var_15_bool = var_18_int == var_48_int; // 0x542 Eq2
	return 2; // 0x543 Return
}


func_1837(var_76_int, var_77_int)
{
	var_78_int = 0; var_79_bool = 0; var_80_int = 0; var_81_bool = 0; // 0x72d PushV
	var_82_bool = var_76_int > var_77_int; // 0x72e GT
	if(var_82_bool == 0) goto Label_1844; // 0x72f JumpB
	var_83_string = "GenerateMoney: iMin > iMax"; // 0x730 PushS
	Trace(var_83_string); // 0x731 Func
	return 4; // 0x733 Return
	
Label_1844:
	var_80_int = 0; // 0x734 MovI
	var_84_bool = var_76_int != var_77_int; // 0x735 Neq
	if(var_84_bool == 0) goto Label_1851; // 0x736 JumpB
	var_85_int = var_77_int - var_76_int; // 0x737 Sub
	irand(var_80_int, var_85_int); // 0x738 Func
	goto Label_1855; // 0x73a Jump
	
Label_1855:
	var_80_int = var_80_int + var_76_int; // 0x73f Add2
	var_86_int = 0; // 0x740 PushI
	var_87_bool = var_80_int == var_86_int; // 0x741 Eq
	if(var_87_bool == 0) goto Label_1860; // 0x742 JumpB
	return 4; // 0x743 Return
	
Label_1860:
	var_88_int = 0; var_89_string = ""; // 0x744 PushV
	var_89_string = "Money"; // 0x745 MovS
	func_1945(var_88_int, var_89_string); // 0x746 NEW_2
	var_92_int = 0; // 0x748 PushI
	AddItem(var_81_bool, var_88_int, var_92_int, var_80_int); // 0x749 Func
	return 4; // 0x74b Return
	
Label_1851:
	var_93_int = 0; // 0x73b PushI
	var_94_bool = var_76_int == var_93_int; // 0x73c Eq
	if(var_94_bool == 0) goto Label_1855; // 0x73d JumpB
	return 4; // 0x73e Return
}


func_829(var_0_object, var_355_string)
{
	var_356_bool = 0; var_357_bool = 0; // 0x33d PushV
	var_358_string = "cleanup"; // 0x33e PushS
	var_359_bool = var_355_string == var_358_string; // 0x33f Eq
	if(var_359_bool == 0) goto Label_852; // 0x340 JumpB
	var_0_object = 1; // 0x341 TMovB
	IsLoaded(var_357_bool); // 0x342 Func
	var_360_bool = 0; // 0x344 PushV
	var_360_bool = 0; // 0x345 MovB
	var_361_bool = var_357_bool == 0; // 0x346 Not
	if(var_361_bool == 0) goto Label_845; // 0x347 JumpB
	var_362_bool = 0; // 0x348 PushV
	func_873(var_362_bool); // 0x349 NEW_2
	if(var_362_bool == 0) goto Label_845; // 0x34b JumpB
	var_360_bool = 1; // 0x34c MovB
	
Label_845:
	if(var_360_bool == 0) goto Label_851; // 0x34d JumpB
	var_363_object = Obj(); // 0x34e PushV
	func_1646(var_363_object); // 0x34f NEW_2
	RemoveActor(var_363_object); // 0x351 Func
	
Label_851:
	goto Label_856; // 0x353 Jump
	
Label_856:
	return 2; // 0x358 Return
	
Label_852:
	var_364_string = "restore"; // 0x354 PushS
	var_365_bool = var_355_string == var_364_string; // 0x355 Eq
	if(var_365_bool == 0) goto Label_856; // 0x356 JumpB
	var_0_object = 0; // 0x357 TMovB
}


func_2372(var_130_object)
{
	var_131_object = Obj(); // 0x945 PushV
	var_131_object = var_130_object; // 0x946 Mov
	func_2196(var_131_object); // 0x947 NEW_2
	return 0; // 0x949 Return
}


func_1348(var_27_object)
{
	var_28_bool = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; var_35_bool = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = ""; // 0x544 PushV
	var_42_bool = var_27_object == 0; // 0x545 NullEq
	if(var_42_bool == 0) goto Label_1352; // 0x546 JumpB
	return 14; // 0x547 Return
	
Label_1352:
	IsDead(var_35_bool); // 0x548 Func
	var_43_bool = var_35_bool; // 0x54a Push
	if(var_43_bool == 0) goto Label_1357; // 0x54b JumpB
	return 14; // 0x54c Return
	
Label_1357:
	GetSecondaryAnimationType(var_36_int); // 0x54d Func
	var_44_int = 0; // 0x54f PushI
	var_45_bool = var_36_int < var_44_int; // 0x550 LT
	if(var_45_bool == 0) goto Label_1363; // 0x551 JumpB
	return 14; // 0x552 Return
	
Label_1363:
	GetPosition(var_37_cvector); // 0x553 ObjFunc
	GetPosition(var_38_cvector); // 0x555 Func
	GetDirection(var_39_cvector); // 0x557 Func
	var_40_cvector = var_38_cvector - var_37_cvector; // 0x559 Sub2
	var_46_float = GetByIndex(var_40_cvector, 0); // 0x55a PushE
	var_47_float = GetByIndex(var_39_cvector, 0); // 0x55b PushE
	var_48_float = var_46_float * var_47_float; // 0x55c Mult
	var_49_float = GetByIndex(var_40_cvector, 2); // 0x55d PushE
	var_50_float = GetByIndex(var_39_cvector, 2); // 0x55e PushE
	var_51_float = var_49_float * var_50_float; // 0x55f Mult
	var_52_int = var_48_float + var_51_float; // 0x560 Add
	var_53_int = 0; // 0x561 PushI
	var_54_bool = var_52_int >= var_53_int; // 0x562 GE
	if(var_54_bool == 0) goto Label_1382; // 0x563 JumpB
	var_41_string = "fhit"; // 0x564 MovS
	goto Label_1383; // 0x565 Jump
	
Label_1383:
	var_55_string = "hit_react"; // 0x567 PushS
	var_56_string = "1"; // 0x568 PushS
	var_57_int = var_41_string + var_56_string; // 0x569 Add
	var_58_string = "2"; // 0x56a PushS
	var_59_int = var_41_string + var_58_string; // 0x56b Add
	var_60_int = -10; // 0x56c PushI
	FadeSecondaryAnimation(var_55_string, var_57_int, var_59_int, var_60_int); // 0x56d Func
	return 14; // 0x56f Return
	
Label_1382:
	var_41_string = "bhit"; // 0x566 MovS
}


func_2378(var_20_object)
{
	var_21_bool = 0; var_22_string = ""; var_23_string = ""; // 0x94b PushV
	var_22_string = "quest_d11_02"; // 0x94c MovS
	var_23_string = "soldier_dead"; // 0x94d MovS
	func_1786(var_21_bool, var_22_string, var_23_string); // 0x94e NEW_2
	var_27_bool = 0; var_28_object = Obj(); // 0x950 PushV
	var_28_object = var_20_object; // 0x951 Mov
	func_1171(var_27_bool, var_28_object); // 0x952 NEW_2
	if(var_27_bool == 0) goto Label_2394; // 0x954 JumpB
	var_29_bool = 0; var_30_object = Obj(); var_31_float = 0; // 0x955 PushV
	var_30_object = var_20_object; // 0x956 Mov
	var_31_float = 0.03; // 0x957 MovF
	func_1731(var_29_bool, var_30_object, var_31_float); // 0x958 NEW_2
	
Label_2394:
	var_67_object = Obj(); // 0x95a PushV
	var_67_object = var_20_object; // 0x95b Mov
	func_1950(var_67_object); // 0x95c NEW_2
	return 0; // 0x95e Return
}


func_1868(var_133_string)
{
	var_134_object = Obj(); var_135_int = 0; var_136_bool = 0; var_137_object = Obj(); var_138_int = 0; var_139_bool = 0; // 0x74c PushV
	CreateInvItem(var_137_object); // 0x74d Func
	SetItemName(var_133_string); // 0x74f ObjFunc
	var_140_string = "Organ"; // 0x751 PushS
	var_141_int = 1; // 0x752 PushI
	SetProperty(var_140_string, var_141_int); // 0x753 ObjFunc
	GetItemID(var_138_int); // 0x755 ObjFunc
	var_142_int = 0; // 0x757 PushI
	var_143_int = 1; // 0x758 PushI
	AddItem(var_139_bool, var_137_object, var_142_int, var_143_int); // 0x759 Func
	return 6; // 0x75b Return
}


func_1885()
{
	var_127_int = 0; // 0x75d PushV
	func_1818(var_127_int); // 0x75e NEW_2
	var_131_int = 1; // 0x760 PushI
	var_132_bool = var_127_int != var_131_int; // 0x761 Neq
	if(var_132_bool == 0) goto Label_1892; // 0x762 JumpB
	return 0; // 0x763 Return
	
Label_1892:
	var_133_string = ""; // 0x764 PushV
	var_133_string = "liver"; // 0x765 MovS
	func_1868(var_133_string); // 0x766 NEW_2
	var_144_string = ""; // 0x768 PushV
	var_144_string = "kidney"; // 0x769 MovS
	func_1868(var_144_string); // 0x76a NEW_2
	var_145_string = ""; // 0x76c PushV
	var_145_string = "heart"; // 0x76d MovS
	func_1868(var_145_string); // 0x76e NEW_2
	var_146_string = ""; // 0x770 PushV
	var_146_string = "blood"; // 0x771 MovS
	func_1868(var_146_string); // 0x772 NEW_2
	return 0; // 0x774 Return
}


func_873(var_12_bool)
{
	var_12_bool = 1; // 0x369 MovB
	return 0; // 0x36a Return
}


func_875(var_13_object)
{
	func_2143(); // 0x36d NEW_2
	var_24_object = Obj(); // 0x36f PushV
	var_24_object = var_13_object; // 0x370 Mov
	func_927(); // 0x371 NEW_2
	
Label_883:
	func_888(); // 0x374 NEW_2
	goto Label_883; // 0x376 Jump
}


func_1392(var_14_object, var_15_int, var_16_float)
{
	var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_int = 0; var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_int = 0; var_24_int = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_int = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); // 0x570 PushV
	var_35_bool = 0; // 0x571 PushV
	var_35_bool = 0; // 0x572 MovB
	var_36_bool = 0; // 0x573 PushV
	var_36_bool = 0; // 0x574 MovB
	var_37_object = var_14_object; // 0x575 Push
	if(var_37_object == 0) goto Label_1403; // 0x576 JumpB
	var_38_int = 4; // 0x577 PushI
	var_39_bool = var_15_int != var_38_int; // 0x578 Neq
	if(var_39_bool == 0) goto Label_1403; // 0x579 JumpB
	var_36_bool = 1; // 0x57a MovB
	
Label_1403:
	if(var_36_bool == 0) goto Label_1408; // 0x57b JumpB
	var_40_int = 5; // 0x57c PushI
	var_41_bool = var_15_int != var_40_int; // 0x57d Neq
	if(var_41_bool == 0) goto Label_1408; // 0x57e JumpB
	var_35_bool = 1; // 0x57f MovB
	
Label_1408:
	if(var_35_bool == 0) goto Label_1455; // 0x580 JumpB
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x581 PushV
	var_44_cvector = CVector(0,0,0); var_45_object = Obj(); // 0x582 PushV
	var_45_object = var_14_object; // 0x583 Mov
	func_1149(var_45_object); // 0x584 NEW_2
	var_43_cvector = var_44_cvector; // 0x585 Mov
	func_1652(var_42_cvector, var_43_cvector); // 0x587 NEW_2
	var_26_cvector = var_42_cvector; // 0x588 Mov
	CreateVectorVector(var_27_object); // 0x58a Func
	var_28_int = 1; // 0x58c MovI
	
Label_1421:
	var_55_string = "hit"; // 0x58d PushS
	var_56_int = var_55_string + var_28_int; // 0x58e Add
	GetGeometryLocator(var_56_int, var_29_bool, var_30_cvector, var_31_cvector); // 0x58f Func
	var_57_bool = var_29_bool == 0; // 0x591 Not
	if(var_57_bool == 0) goto Label_1428; // 0x592 JumpB
	goto Label_1437; // 0x593 Jump
	
Label_1437:
	size(var_32_int); // 0x59d ObjFunc
	var_58_int = var_32_int; // 0x59f Push
	if(var_58_int == 0) goto Label_1454; // 0x5a0 JumpB
	irand(var_33_int, var_32_int); // 0x5a1 Func
	get(var_34_cvector, var_33_int); // 0x5a3 ObjFunc
	var_59_object = Obj(); var_60_int = 0; var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x5a5 PushV
	var_59_object = var_14_object; // 0x5a6 Mov
	var_60_int = var_15_int; // 0x5a7 Mov
	var_61_float = var_16_float; // 0x5a8 Mov
	var_62_cvector = var_34_cvector; // 0x5a9 Mov
	var_63_cvector = -var_26_cvector; // 0x5aa Neg2
	func_1460(var_61_float, var_62_cvector, var_63_cvector); // 0x5ab NEW_2
	return 18; // 0x5ad Return
	
Label_1454:
	var_27_object = 0; // 0x5ae SetNull
	
Label_1455:
	var_104_object = Obj(); // 0x5af PushV
	var_104_object = var_14_object; // 0x5b0 Mov
	func_1348(var_104_object); // 0x5b1 NEW_2
	return 18; // 0x5b3 Return
	
Label_1428:
	var_105_int = var_31_cvector | var_26_cvector; // 0x594 Or
	var_106_float = 0.70711; // 0x595 PushF
	var_107_bool = var_105_int >= var_106_float; // 0x596 GE
	if(var_107_bool == 0) goto Label_1434; // 0x597 JumpB
	add(var_30_cvector); // 0x598 ObjFunc
	
Label_1434:
	var_108_int = 1; // 0x59a PushI
	var_28_int = var_28_int + var_108_int; // 0x59b Add2
	goto Label_1421; // 0x59c Jump
}


func_1909()
{
	var_71_int = 0; var_72_bool = 0; var_73_int = 0; var_74_bool = 0; // 0x775 PushV
	var_75_int = 0; // 0x776 PushI
	ClearSubContainer(var_75_int); // 0x777 Func
	var_76_int = 0; var_77_int = 0; // 0x779 PushV
	var_76_int = 500; // 0x77a MovI
	var_77_int = 1000; // 0x77b MovI
	func_1837(var_76_int, var_77_int); // 0x77c NEW_2
	var_95_string = ""; var_96_int = 0; var_97_int = 0; var_98_int = 0; // 0x77e PushV
	var_95_string = "rifle_ammo"; // 0x77f MovS
	var_96_int = 1; // 0x780 MovI
	var_97_int = 3; // 0x781 MovI
	var_98_int = 3; // 0x782 MovI
	func_1503(var_95_string, var_96_int, var_97_int, var_98_int); // 0x783 NEW_2
	var_111_string = ""; var_112_int = 0; var_113_int = 0; var_114_int = 0; // 0x785 PushV
	var_111_string = "rusk"; // 0x786 MovS
	var_112_int = 1; // 0x787 MovI
	var_113_int = 3; // 0x788 MovI
	var_114_int = 2; // 0x789 MovI
	func_1503(var_111_string, var_112_int, var_113_int, var_114_int); // 0x78a NEW_2
	var_115_string = ""; var_116_int = 0; var_117_int = 0; // 0x78c PushV
	var_115_string = "bandage"; // 0x78d MovS
	var_116_int = 1; // 0x78e MovI
	var_117_int = 6; // 0x78f MovI
	func_1492(var_115_string, var_116_int, var_117_int); // 0x790 NEW_2
	var_124_string = ""; var_125_int = 0; var_126_int = 0; // 0x792 PushV
	var_124_string = "tourniquet"; // 0x793 MovS
	var_125_int = 1; // 0x794 MovI
	var_126_int = 6; // 0x795 MovI
	func_1492(var_124_string, var_125_int, var_126_int); // 0x796 NEW_2
	return 4; // 0x798 Return
}


func_888()
{
	func_2143(); // 0x379 NEW_2
	
Label_891:
	func_974(var_19_cvector, var_13_object); // 0x37c NEW_2
	goto Label_891; // 0x37e Jump
}


func_896()
{
	return 0; // 0x380 Return
}


func_1945(var_88_int, var_89_string)
{
	var_90_int = 0; var_91_int = 0; // 0x799 PushV
	GetInvItemByName(var_91_int, var_89_string); // 0x79a Func
	var_88_int = var_91_int; // 0x79c Mov
	return 2; // 0x79d Return
}


func_1950(var_67_object)
{
	var_68_object = Obj(); // 0x79f PushV
	var_68_object = var_67_object; // 0x7a0 Mov
	TaskCall(0); // 0x7a1 TaskCall
	func_0(var_68_object); // 0x7a2 NEW_2
	TaskReturn(); // 0x7a3 TaskReturn
	return 0; // 0x7a5 Return
}


func_436()
{
	StopAsync(); // 0x1b4 Func
	StopGroup0(); // 0x1b6 Func
	Stop(); // 0x1b8 Func
	return 0; // 0x1ba Return
}


func_1460(var_16_object, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); // 0x5b4 PushV
	GetScene(var_23_object); // 0x5b5 Func
	var_25_string = "scripted"; // 0x5b7 PushS
	var_26_string = "blood_dir.xml"; // 0x5b8 PushS
	AddActorByType(var_24_object, var_25_string, var_23_object, var_19_cvector, var_20_cvector, var_26_string); // 0x5b9 Func
	var_27_object = Obj(); // 0x5bb PushV
	var_27_object = var_16_object; // 0x5bc Mov
	func_1348(var_27_object); // 0x5bd NEW_2
	return 4; // 0x5bf Return
}


func_1474()
{
	var_324_cvector = CVector(0,0,0); var_325_cvector = CVector(0,0,0); var_326_cvector = CVector(0,0,0); var_327_cvector = CVector(0,0,0); var_328_cvector = CVector(0,0,0); var_329_cvector = CVector(0,0,0); // 0x5c2 PushV
	GetPosition(var_327_cvector); // 0x5c3 ObjFunc
	GetPosition(var_328_cvector); // 0x5c5 Func
	var_329_cvector = var_327_cvector - var_328_cvector; // 0x5c7 Sub2
	var_330_float = GetByIndex(var_329_cvector, 0); // 0x5c8 PushE
	var_331_float = GetByIndex(var_329_cvector, 2); // 0x5c9 PushE
	RotateAsync(var_330_float, var_331_float); // 0x5ca Func
	return 6; // 0x5cc Return
}


func_452(var_0_object, var_1_object, var_2_bool, var_138_object, var_139_bool)
{
	var_143_bool = 0; var_144_bool = 0; var_145_bool = 0; var_146_bool = 0; // 0x1c4 PushV
	var_0_object = var_138_object; // 0x1c5 TMov
	var_147_object = Obj(); // 0x1c6 PushV
	var_147_object = var_0_object; // 0x1c7 MovT
	func_1798(var_147_object); // 0x1c8 NEW_2
	func_1807(); // 0x1cb NEW_2
	Face(var_0_object); // 0x1cd Func
	var_158_bool = var_139_bool; // 0x1cf Push
	if(var_158_bool == 0) goto Label_471; // 0x1d0 JumpB
	var_159_string = "all"; // 0x1d1 PushS
	var_160_string = "attack_on"; // 0x1d2 PushS
	PlayAnimation(var_159_string, var_160_string); // 0x1d3 Func
	WaitForAnimEnd(); // 0x1d5 Func
	
Label_471:
	var_161_string = "all"; // 0x1d7 PushS
	var_162_string = "attack_on"; // 0x1d8 PushS
	LockAnimationEnd(var_161_string, var_162_string); // 0x1d9 Func
	var_163_bool = 1; // 0x1db PushB
	SetAttackState(var_163_bool); // 0x1dc Func
	
Label_478:
	var_164_bool = 0; var_165_object = Obj(); // 0x1de PushV
	var_165_object = var_0_object; // 0x1df MovT
	func_1324(var_164_bool, var_165_object); // 0x1e0 NEW_2
	if(var_164_bool == 0) goto Label_584; // 0x1e2 JumpB
	CanSee(var_146_bool, var_0_object); // 0x1e3 Func
	var_166_bool = var_146_bool; // 0x1e5 Push
	if(var_166_bool == 0) goto Label_495; // 0x1e6 JumpB
	var_167_object = Obj(); // 0x1e7 PushV
	var_167_object = var_0_object; // 0x1e8 MovT
	func_1798(var_167_object); // 0x1e9 NEW_2
	func_632(var_146_bool); // 0x1ec NEW_2
	goto Label_574; // 0x1ee Jump
	
Label_574:
	var_321_bool = var_1_object != 0; // 0x23e NullNeq
	if(var_321_bool == 0) goto Label_580; // 0x23f JumpB
	func_627(var_145_bool, var_146_bool); // 0x241 NEW_2
	goto Label_583; // 0x243 Jump
	
Label_583:
	goto Label_478; // 0x247 Jump
	
Label_580:
	var_322_int = 2; // 0x244 PushI
	Sleep(var_322_int); // 0x245 Func
	
Label_495:
	var_323_object = Obj(); // 0x1ef PushV
	var_323_object = var_0_object; // 0x1f0 MovT
	func_1474(); // 0x1f1 NEW_2
	var_2_bool = 1; // 0x1f3 TMovB
	var_332_string = "all"; // 0x1f4 PushS
	var_333_string = "hunt"; // 0x1f5 PushS
	PlayAnimation(var_332_string, var_333_string); // 0x1f6 Func
	WaitForAnimEnd(var_145_bool); // 0x1f8 Func
	var_334_bool = var_145_bool == 0; // 0x1fa Not
	if(var_334_bool == 0) goto Label_518; // 0x1fb JumpB
	var_335_bool = var_1_object != 0; // 0x1fc NullNeq
	if(var_335_bool == 0) goto Label_513; // 0x1fd JumpB
	func_627(var_145_bool, var_146_bool); // 0x1ff NEW_2
	
Label_513:
	var_336_string = "all"; // 0x201 PushS
	var_337_string = "attack_on"; // 0x202 PushS
	LockAnimationEnd(var_336_string, var_337_string); // 0x203 Func
	goto Label_478; // 0x205 Jump
	
Label_518:
	var_338_bool = 0; var_339_object = Obj(); // 0x206 PushV
	var_339_object = var_0_object; // 0x207 MovT
	func_1324(var_338_bool, var_339_object); // 0x208 NEW_2
	var_340_bool = var_338_bool == 0; // 0x20a Not
	if(var_340_bool == 0) goto Label_525; // 0x20b JumpB
	goto Label_584; // 0x20c Jump
	
Label_584:
	var_341_bool = 0; // 0x248 PushB
	SetAttackState(var_341_bool); // 0x249 Func
	StopAsync(); // 0x24b Func
	var_342_string = "all"; // 0x24d PushS
	var_343_string = "attack_off"; // 0x24e PushS
	PlayAnimation(var_342_string, var_343_string); // 0x24f Func
	WaitForAnimEnd(); // 0x251 Func
	return 4; // 0x253 Return
	
Label_525:
	CanSee(var_146_bool, var_0_object); // 0x20d Func
	var_344_bool = var_146_bool; // 0x20f Push
	if(var_344_bool == 0) goto Label_536; // 0x210 JumpB
	var_2_bool = 0; // 0x211 TMovB
	Face(var_0_object); // 0x212 Func
	func_632(var_146_bool); // 0x215 NEW_2
	goto Label_574; // 0x217 Jump
	
Label_536:
	var_345_string = "all"; // 0x218 PushS
	var_346_string = "attack_on"; // 0x219 PushS
	LockAnimationEnd(var_345_string, var_346_string); // 0x21a Func
	var_347_int = 3; // 0x21c PushI
	Sleep(var_347_int, var_145_bool); // 0x21d Func
	var_348_bool = var_145_bool == 0; // 0x21f Not
	if(var_348_bool == 0) goto Label_555; // 0x220 JumpB
	var_349_bool = var_1_object != 0; // 0x221 NullNeq
	if(var_349_bool == 0) goto Label_550; // 0x222 JumpB
	func_627(var_145_bool, var_146_bool); // 0x224 NEW_2
	
Label_550:
	var_350_string = "all"; // 0x226 PushS
	var_351_string = "attack_on"; // 0x227 PushS
	LockAnimationEnd(var_350_string, var_351_string); // 0x228 Func
	goto Label_478; // 0x22a Jump
	
Label_555:
	var_352_bool = 0; var_353_object = Obj(); // 0x22b PushV
	var_353_object = var_0_object; // 0x22c MovT
	func_1324(var_352_bool, var_353_object); // 0x22d NEW_2
	var_354_bool = var_352_bool == 0; // 0x22f Not
	if(var_354_bool == 0) goto Label_562; // 0x230 JumpB
	goto Label_584; // 0x231 Jump
	
Label_562:
	var_2_bool = 0; // 0x232 TMovB
	CanSee(var_146_bool, var_0_object); // 0x233 Func
	var_355_bool = var_146_bool; // 0x235 Push
	if(var_355_bool == 0) goto Label_573; // 0x236 JumpB
	Face(var_0_object); // 0x237 Func
	func_632(var_146_bool); // 0x23a NEW_2
	goto Label_574; // 0x23c Jump
	
Label_573:
	goto Label_584; // 0x23d Jump
}


func_1485(var_242_float)
{
	var_244_float = 0; var_245_float = 0; var_246_float = 0; var_247_float = 0; // 0x5cd PushV
	GetEyesHeight(var_246_float); // 0x5ce Func
	GetEyesHeight(var_247_float); // 0x5d0 ObjFunc
	var_242_float = var_247_float - var_246_float; // 0x5d2 Sub2
	return 4; // 0x5d3 Return
}


func_974(var_0_object, var_1_object)
{
	var_295_int = 0; var_296_bool = 0; var_297_cvector = CVector(0,0,0); var_298_object = Obj(); var_299_int = 0; var_300_bool = 0; var_301_cvector = CVector(0,0,0); var_302_object = Obj(); // 0x3ce PushV
	GetPFPosition(var_302_object); // 0x3cf Func
	GetDirection(var_0_object); // 0x3d1 Func
	
Label_979:
	func_1063(); // 0x3d4 NEW_2
	var_303_int = 10; // 0x3d6 PushI
	irand(var_299_int, var_303_int); // 0x3d7 Func
	var_304_int = 5; // 0x3d9 PushI
	var_305_int = var_299_int + var_304_int; // 0x3da Add
	Sleep(var_305_int, var_300_bool); // 0x3db Func
	var_306_bool = var_300_bool; // 0x3dd Push
	if(var_306_bool == 0) goto Label_995; // 0x3de JumpB
	func_896(); // 0x3e0 NEW_2
	goto Label_1056; // 0x3e2 Jump
	
Label_1056:
	goto Label_979; // 0x420 Jump
	
Label_995:
	func_1063(); // 0x3e4 NEW_2
	GetPFPosition(var_301_cvector); // 0x3e6 Func
	var_307_float = 0; var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0); // 0x3e8 PushV
	var_308_cvector = var_1_object; // 0x3e9 MovT
	var_309_cvector = var_301_cvector; // 0x3ea Mov
	func_1662(var_307_float, var_308_cvector, var_309_cvector); // 0x3eb NEW_2
	var_312_int = 40000; // 0x3ed PushI
	var_313_bool = var_307_float > var_312_int; // 0x3ee GT
	if(var_313_bool == 0) goto Label_1042; // 0x3ef JumpB
	FindPathTo(var_302_object, var_302_object); // 0x3f0 Func
	var_314_bool = var_302_object != 0; // 0x3f2 NullNeq
	if(var_314_bool == 0) goto Label_1037; // 0x3f3 JumpB
	RotatePath(var_302_object, var_300_bool); // 0x3f4 Func
	var_315_bool = var_300_bool == 0; // 0x3f6 Not
	if(var_315_bool == 0) goto Label_1017; // 0x3f7 JumpB
	goto Label_1055; // 0x3f8 Jump
	
Label_1055:
	goto Label_995; // 0x41f Jump
	
Label_1017:
	var_316_bool = 0; // 0x3f9 PushB
	FollowPath(var_302_object, var_316_bool, var_300_bool); // 0x3fa Func
	var_317_bool = var_300_bool == 0; // 0x3fc Not
	if(var_317_bool == 0) goto Label_1023; // 0x3fd JumpB
	goto Label_1055; // 0x3fe Jump
	
Label_1023:
	var_318_float = GetByIndex(var_0_object, 0); // 0x3ff PushE
	var_319_float = GetByIndex(var_0_object, 2); // 0x400 PushE
	Rotate(var_318_float, var_319_float, var_300_bool); // 0x401 Func
	var_320_bool = var_300_bool == 0; // 0x403 Not
	if(var_320_bool == 0) goto Label_1030; // 0x404 JumpB
	goto Label_1055; // 0x405 Jump
	
Label_1030:
	WaitForAnimEnd(var_300_bool); // 0x406 Func
	var_321_bool = var_300_bool == 0; // 0x408 Not
	if(var_321_bool == 0) goto Label_1035; // 0x409 JumpB
	goto Label_1055; // 0x40a Jump
	
Label_1035:
	goto Label_1056; // 0x40b Jump
	
Label_1037:
	var_322_int = 1; // 0x40d PushI
	Sleep(var_322_int); // 0x40e Func
	var_302_object = 0; // 0x410 SetNull
	goto Label_1055; // 0x411 Jump
	
Label_1042:
	var_323_float = GetByIndex(var_0_object, 0); // 0x412 PushE
	var_324_float = GetByIndex(var_0_object, 2); // 0x413 PushE
	Rotate(var_323_float, var_324_float, var_300_bool); // 0x414 Func
	var_325_bool = var_300_bool == 0; // 0x416 Not
	if(var_325_bool == 0) goto Label_1049; // 0x417 JumpB
	goto Label_1055; // 0x418 Jump
	
Label_1049:
	WaitForAnimEnd(var_300_bool); // 0x419 Func
	var_326_bool = var_300_bool == 0; // 0x41b Not
	if(var_326_bool == 0) goto Label_1054; // 0x41c JumpB
	goto Label_1055; // 0x41d Jump
	
Label_1054:
	goto Label_1056; // 0x41e Jump
}


func_1492(var_115_string, var_116_int, var_117_int)
{
	var_118_bool = 0; var_119_bool = 0; // 0x5d4 PushV
	var_120_bool = 0; var_121_int = 0; var_122_int = 0; // 0x5d5 PushV
	var_121_int = var_116_int; // 0x5d6 Mov
	var_122_int = var_117_int; // 0x5d7 Mov
	func_1684(var_120_bool, var_121_int, var_122_int); // 0x5d8 NEW_2
	if(var_120_bool == 0) goto Label_1502; // 0x5da JumpB
	var_123_int = 0; // 0x5db PushI
	AddItem(var_119_bool, var_115_string, var_123_int); // 0x5dc Func
	
Label_1502:
	return 2; // 0x5de Return
}


func_2007(var_19_bool, var_20_object, var_21_bool)
{
	var_22_string = ""; var_23_string = ""; // 0x7d7 PushV
	var_24_bool = 0; var_25_object = Obj(); var_26_string = ""; // 0x7d8 PushV
	var_25_object = var_20_object; // 0x7d9 Mov
	var_26_string = "class"; // 0x7da MovS
	func_1176(var_24_bool, var_25_object, var_26_string); // 0x7db NEW_2
	var_33_bool = var_24_bool == 0; // 0x7dd Not
	if(var_33_bool == 0) goto Label_2017; // 0x7de JumpB
	var_19_bool = 0; // 0x7df MovB
	return 2; // 0x7e0 Return
	
Label_2017:
	var_34_string = "class"; // 0x7e1 PushS
	GetProperty(var_34_string, var_23_string); // 0x7e2 ObjFunc
	var_35_bool = 0; // 0x7e4 PushV
	var_35_bool = 1; // 0x7e5 MovB
	var_36_bool = 0; // 0x7e6 PushV
	var_36_bool = 1; // 0x7e7 MovB
	var_37_bool = 0; // 0x7e8 PushV
	var_37_bool = 1; // 0x7e9 MovB
	var_38_bool = 0; // 0x7ea PushV
	var_38_bool = 1; // 0x7eb MovB
	var_39_bool = 0; // 0x7ec PushV
	var_39_bool = 1; // 0x7ed MovB
	var_40_bool = 0; // 0x7ee PushV
	var_40_bool = 1; // 0x7ef MovB
	var_41_bool = 0; // 0x7f0 PushV
	var_41_bool = 1; // 0x7f1 MovB
	var_42_bool = 0; // 0x7f2 PushV
	var_42_bool = 1; // 0x7f3 MovB
	var_43_bool = 0; // 0x7f4 PushV
	var_43_bool = 1; // 0x7f5 MovB
	var_44_bool = 0; // 0x7f6 PushV
	var_44_bool = 1; // 0x7f7 MovB
	var_45_string = "patrol"; // 0x7f8 PushS
	var_46_bool = var_23_string == var_45_string; // 0x7f9 Eq
	if(var_46_bool == 0) goto Label_2047; // 0x7fa JumpB
	var_47_string = "sanitar"; // 0x7fb PushS
	var_48_bool = var_23_string == var_47_string; // 0x7fc Eq
	if(var_48_bool == 0) goto Label_2047; // 0x7fd JumpB
	var_44_bool = 0; // 0x7fe MovB
	
Label_2047:
	if(var_44_bool == 0) goto Label_2052; // 0x7ff JumpB
	var_49_string = "soldier"; // 0x800 PushS
	var_50_bool = var_23_string == var_49_string; // 0x801 Eq
	if(var_50_bool == 0) goto Label_2052; // 0x802 JumpB
	var_43_bool = 0; // 0x803 MovB
	
Label_2052:
	if(var_43_bool == 0) goto Label_2057; // 0x804 JumpB
	var_51_string = "woman"; // 0x805 PushS
	var_52_bool = var_23_string == var_51_string; // 0x806 Eq
	if(var_52_bool == 0) goto Label_2057; // 0x807 JumpB
	var_42_bool = 0; // 0x808 MovB
	
Label_2057:
	if(var_42_bool == 0) goto Label_2062; // 0x809 JumpB
	var_53_string = "wasted_girl"; // 0x80a PushS
	var_54_bool = var_23_string == var_53_string; // 0x80b Eq
	if(var_54_bool == 0) goto Label_2062; // 0x80c JumpB
	var_41_bool = 0; // 0x80d MovB
	
Label_2062:
	if(var_41_bool == 0) goto Label_2067; // 0x80e JumpB
	var_55_string = "vaxxabitka"; // 0x80f PushS
	var_56_bool = var_23_string == var_55_string; // 0x810 Eq
	if(var_56_bool == 0) goto Label_2067; // 0x811 JumpB
	var_40_bool = 0; // 0x812 MovB
	
Label_2067:
	if(var_40_bool == 0) goto Label_2072; // 0x813 JumpB
	var_57_string = "vaxxabit"; // 0x814 PushS
	var_58_bool = var_23_string == var_57_string; // 0x815 Eq
	if(var_58_bool == 0) goto Label_2072; // 0x816 JumpB
	var_39_bool = 0; // 0x817 MovB
	
Label_2072:
	if(var_39_bool == 0) goto Label_2077; // 0x818 JumpB
	var_59_string = "little_girl"; // 0x819 PushS
	var_60_bool = var_23_string == var_59_string; // 0x81a Eq
	if(var_60_bool == 0) goto Label_2077; // 0x81b JumpB
	var_38_bool = 0; // 0x81c MovB
	
Label_2077:
	if(var_38_bool == 0) goto Label_2082; // 0x81d JumpB
	var_61_string = "girl"; // 0x81e PushS
	var_62_bool = var_23_string == var_61_string; // 0x81f Eq
	if(var_62_bool == 0) goto Label_2082; // 0x820 JumpB
	var_37_bool = 0; // 0x821 MovB
	
Label_2082:
	if(var_37_bool == 0) goto Label_2087; // 0x822 JumpB
	var_63_string = "dohodyaga"; // 0x823 PushS
	var_64_bool = var_23_string == var_63_string; // 0x824 Eq
	if(var_64_bool == 0) goto Label_2087; // 0x825 JumpB
	var_36_bool = 0; // 0x826 MovB
	
Label_2087:
	if(var_36_bool == 0) goto Label_2092; // 0x827 JumpB
	var_65_string = "nudegirl"; // 0x828 PushS
	var_66_bool = var_23_string == var_65_string; // 0x829 Eq
	if(var_66_bool == 0) goto Label_2092; // 0x82a JumpB
	var_35_bool = 0; // 0x82b MovB
	
Label_2092:
	if(var_35_bool == 0) goto Label_2095; // 0x82c JumpB
	var_19_bool = 1; // 0x82d MovB
	return 2; // 0x82e Return
	
Label_2095:
	var_67_bool = var_21_bool; // 0x82f Push
	if(var_67_bool == 0) goto Label_2099; // 0x830 JumpB
	var_19_bool = 0; // 0x831 MovB
	return 2; // 0x832 Return
	
Label_2099:
	var_19_bool = 1; // 0x833 MovB
	var_68_bool = 0; // 0x834 PushV
	var_68_bool = 1; // 0x835 MovB
	var_69_bool = 0; // 0x836 PushV
	var_69_bool = 1; // 0x837 MovB
	var_70_bool = 0; // 0x838 PushV
	var_70_bool = 1; // 0x839 MovB
	var_71_bool = 0; // 0x83a PushV
	var_71_bool = 1; // 0x83b MovB
	var_72_bool = 0; // 0x83c PushV
	var_72_bool = 1; // 0x83d MovB
	var_73_string = "worker"; // 0x83e PushS
	var_74_bool = var_23_string == var_73_string; // 0x83f Eq
	if(var_74_bool == 0) goto Label_2117; // 0x840 JumpB
	var_75_string = "butcher"; // 0x841 PushS
	var_76_bool = var_23_string == var_75_string; // 0x842 Eq
	if(var_76_bool == 0) goto Label_2117; // 0x843 JumpB
	var_72_bool = 0; // 0x844 MovB
	
Label_2117:
	if(var_72_bool == 0) goto Label_2122; // 0x845 JumpB
	var_77_string = "boy"; // 0x846 PushS
	var_78_bool = var_23_string == var_77_string; // 0x847 Eq
	if(var_78_bool == 0) goto Label_2122; // 0x848 JumpB
	var_71_bool = 0; // 0x849 MovB
	
Label_2122:
	if(var_71_bool == 0) goto Label_2127; // 0x84a JumpB
	var_79_string = "unosha"; // 0x84b PushS
	var_80_bool = var_23_string == var_79_string; // 0x84c Eq
	if(var_80_bool == 0) goto Label_2127; // 0x84d JumpB
	var_70_bool = 0; // 0x84e MovB
	
Label_2127:
	if(var_70_bool == 0) goto Label_2132; // 0x84f JumpB
	var_81_string = "wasted_male"; // 0x850 PushS
	var_82_bool = var_23_string == var_81_string; // 0x851 Eq
	if(var_82_bool == 0) goto Label_2132; // 0x852 JumpB
	var_69_bool = 0; // 0x853 MovB
	
Label_2132:
	if(var_69_bool == 0) goto Label_2137; // 0x854 JumpB
	var_83_string = "alkash"; // 0x855 PushS
	var_84_bool = var_23_string == var_83_string; // 0x856 Eq
	if(var_84_bool == 0) goto Label_2137; // 0x857 JumpB
	var_68_bool = 0; // 0x858 MovB
	
Label_2137:
	if(var_68_bool == 0) goto Label_2142; // 0x859 JumpB
	var_85_string = "morlok"; // 0x85a PushS
	var_86_bool = var_23_string == var_85_string; // 0x85b Eq
	if(var_86_bool == 0) goto Label_2142; // 0x85c JumpB
	var_19_bool = 0; // 0x85d MovB
	
Label_2142:
	return 2; // 0x85e Return
}


func_1503(var_95_string, var_96_int, var_97_int, var_98_int)
{
	var_99_int = 0; var_100_bool = 0; var_101_int = 0; var_102_bool = 0; // 0x5df PushV
	var_103_bool = 0; var_104_int = 0; var_105_int = 0; // 0x5e0 PushV
	var_104_int = var_96_int; // 0x5e1 Mov
	var_105_int = var_97_int; // 0x5e2 Mov
	func_1684(var_103_bool, var_104_int, var_105_int); // 0x5e3 NEW_2
	if(var_103_bool == 0) goto Label_1517; // 0x5e5 JumpB
	irand(var_101_int, var_98_int); // 0x5e6 Func
	var_108_int = 0; // 0x5e8 PushI
	var_109_int = 1; // 0x5e9 PushI
	var_110_int = var_101_int + var_109_int; // 0x5ea Add
	AddItem(var_102_bool, var_95_string, var_108_int, var_110_int); // 0x5eb Func
	
Label_1517:
	return 4; // 0x5ed Return
}


func_1518(var_171_string)
{
	var_172_bool = 0; var_173_int = 0; var_174_bool = 0; var_175_int = 0; var_176_bool = 0; var_177_float = 0; var_178_cvector = CVector(0,0,0); var_179_cvector = CVector(0,0,0); var_180_bool = 0; var_181_int = 0; var_182_bool = 0; var_183_int = 0; var_184_bool = 0; var_185_float = 0; var_186_cvector = CVector(0,0,0); var_187_cvector = CVector(0,0,0); // 0x5ee PushV
	IsExisting3DSound(var_180_bool, var_171_string); // 0x5ef Func
	var_188_bool = var_180_bool == 0; // 0x5f1 Not
	if(var_188_bool == 0) goto Label_1543; // 0x5f2 JumpB
	var_181_int = 0; // 0x5f3 MovI
	
Label_1524:
	var_189_int = 1; // 0x5f4 PushI
	var_190_int = var_181_int + var_189_int; // 0x5f5 Add
	var_191_int = var_171_string + var_190_int; // 0x5f6 Add
	IsExisting3DSound(var_182_bool, var_191_int); // 0x5f7 Func
	var_192_bool = var_182_bool == 0; // 0x5f9 Not
	if(var_192_bool == 0) goto Label_1532; // 0x5fa JumpB
	goto Label_1535; // 0x5fb Jump
	
Label_1535:
	var_193_bool = var_181_int == 0; // 0x5ff Not
	if(var_193_bool == 0) goto Label_1538; // 0x600 JumpB
	return 16; // 0x601 Return
	
Label_1538:
	irand(var_183_int, var_181_int); // 0x602 Func
	var_194_int = 1; // 0x604 PushI
	var_195_int = var_183_int + var_194_int; // 0x605 Add
	var_171_string = var_171_string + var_195_int; // 0x606 Add2
	
Label_1543:
	Is3DSoundLoaded(var_184_bool, var_171_string); // 0x607 Func
	var_196_bool = var_184_bool; // 0x609 Push
	if(var_196_bool == 0) goto Label_1558; // 0x60a JumpB
	GetEyesHeight(var_185_float); // 0x60b Func
	GetDirection(var_186_cvector); // 0x60d Func
	var_197_int = 50; // 0x60f PushI
	var_187_cvector = var_186_cvector * var_197_int; // 0x610 Mult2
	var_198_float = GetByIndex(var_187_cvector, 1); // 0x611 PushE
	var_198_float = var_198_float + var_185_float; // 0x612 Add2
	SetByIndex(var_187_cvector, 1) = var_198_float; // 0x613 PopE
	PlayGlobalSound(var_171_string, var_187_cvector); // 0x614 Func
	
Label_1558:
	return 16; // 0x616 Return
	
Label_1532:
	var_199_int = 1; // 0x5fc PushI
	var_181_int = var_181_int + var_199_int; // 0x5fd Add2
	goto Label_1524; // 0x5fe Jump
}


