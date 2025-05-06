task_0_event_0(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	var_11_bool = 0; var_12_bool = 0; // 0x20 PushV
	IsOverrideActive(var_12_bool); // 0x21 Func
	var_13_bool = var_12_bool == 0; // 0x23 Not
	if(var_13_bool == 0) goto Label_41; // 0x24 JumpB
	var_14_object = Obj(); // 0x25 PushV
	var_14_object = var_10_bool; // 0x26 Mov
	func_1840(var_14_object); // 0x27 NEW_2
	
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
	func_2005(); // 0xcb NEW_2
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
	func_1483(); // 0xe0 NEW_2
	
Label_226:
	return 0; // 0xe2 Return
}


	task_1_event_17(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool, var_99_object)
	{
	var_100_bool = 0; var_101_object = Obj(); // 0xe4 PushV
	var_101_object = var_99_object; // 0xe5 Mov
	func_1333(var_100_bool, var_101_object); // 0xe6 NEW_2
	var_128_bool = var_100_bool == 0; // 0xe8 Not
	if(var_128_bool == 0) goto Label_239; // 0xe9 JumpB
	var_129_object = Obj(); // 0xea PushV
	var_129_object = var_99_object; // 0xeb Mov
	func_2177(var_129_object); // 0xec NEW_2
	return 0; // 0xee Return
	
Label_239:
	func_189(); // 0xf0 NEW_2
	var_145_object = Obj(); // 0xf2 PushV
	var_145_object = var_99_object; // 0xf3 Mov
	func_2201(var_145_object); // 0xf4 NEW_2
	return 0; // 0xf6 Return
	}


task_1_event_30(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); var_16_bool = 0; // 0xf8 PushV
	var_14_object = var_10_cvector; // 0xf9 Mov
	var_15_object = var_11_cvector; // 0xfa Mov
	var_16_bool = var_12_bool; // 0xfb Mov
	func_2349(var_13_bool, var_14_object, var_15_object, var_16_bool); // 0xfc NEW_2
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
	func_2321(var_11_bool, var_12_object); // 0x107 NEW_2
	if(var_11_bool == 0) goto Label_273; // 0x109 JumpB
	func_189(); // 0x10b NEW_2
	var_131_object = Obj(); // 0x10d PushV
	var_131_object = var_10_bool; // 0x10e Mov
	func_2343(var_131_object); // 0x10f NEW_2
	
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
	var_100_bool = 0; var_101_object = Obj(); // 0x197 PushV
	var_101_object = var_99_object; // 0x198 Mov
	func_1333(var_100_bool, var_101_object); // 0x199 NEW_2
	var_128_bool = var_100_bool == 0; // 0x19b Not
	if(var_128_bool == 0) goto Label_418; // 0x19c JumpB
	var_129_object = Obj(); // 0x19d PushV
	var_129_object = var_99_object; // 0x19e Mov
	func_2177(var_129_object); // 0x19f NEW_2
	return 0; // 0x1a1 Return
	
Label_418:
	func_439(); // 0x1a3 NEW_2
	var_144_object = Obj(); // 0x1a5 PushV
	var_144_object = var_99_object; // 0x1a6 Mov
	func_2201(var_144_object); // 0x1a7 NEW_2
	return 0; // 0x1a9 Return
	}


task_2_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); var_16_bool = 0; // 0x1ab PushV
	var_14_object = var_10_cvector; // 0x1ac Mov
	var_15_object = var_11_cvector; // 0x1ad Mov
	var_16_bool = var_12_bool; // 0x1ae Mov
	func_2349(var_13_bool, var_14_object, var_15_object, var_16_bool); // 0x1af NEW_2
	if(var_13_bool == 0) goto Label_438; // 0x1b1 JumpB
	var_99_object = Obj(); // 0x1b2 PushV
	var_99_object = var_10_cvector; // 0x1b3 Mov
	func_406(); // 0x1b4 NEW_2
	
Label_438:
	return 0; // 0x1b6 Return
}


task_2_event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	func_439(); // 0x1c0 NEW_2
	var_11_object = Obj(); // 0x1c2 PushV
	var_11_object = var_10_bool; // 0x1c3 Mov
	func_2005(); // 0x1c4 NEW_2
	return 0; // 0x1c6 Return
}


task_3_event_3(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	var_11_bool = 0; // 0x258 PushV
	var_11_bool = 0; // 0x259 MovB
	var_12_bool = var_2_bool; // 0x25a PushT
	if(var_12_bool == 0) goto Label_607; // 0x25b JumpB
	var_13_bool = var_10_bool == var_0_object; // 0x25c Eq
	if(var_13_bool == 0) goto Label_607; // 0x25d JumpB
	var_11_bool = 1; // 0x25e MovB
	
Label_607:
	if(var_11_bool == 0) goto Label_612; // 0x25f JumpB
	var_14_object = Obj(); // 0x260 PushV
	var_14_object = var_0_object; // 0x261 MovT
	func_1483(); // 0x262 NEW_2
	
Label_612:
	return 0; // 0x264 Return
}


task_3_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	var_11_bool = 0; // 0x266 PushV
	var_11_bool = 0; // 0x267 MovB
	var_12_bool = var_2_bool; // 0x268 PushT
	if(var_12_bool == 0) goto Label_621; // 0x269 JumpB
	var_13_bool = var_10_bool == var_0_object; // 0x26a Eq
	if(var_13_bool == 0) goto Label_621; // 0x26b JumpB
	var_11_bool = 1; // 0x26c MovB
	
Label_621:
	if(var_11_bool == 0) goto Label_629; // 0x26d JumpB
	var_14_string = "@Stop hunt"; // 0x26e PushS
	Trace(var_14_string); // 0x26f Func
	StopAnimation(); // 0x271 Func
	StopGroup0(); // 0x273 Func
	
Label_629:
	return 0; // 0x275 Return
}


	task_3_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool, var_99_object)
	{
	var_100_bool = 0; var_101_object = Obj(); // 0x2f8 PushV
	var_101_object = var_99_object; // 0x2f9 Mov
	func_1333(var_100_bool, var_101_object); // 0x2fa NEW_2
	var_128_bool = var_100_bool == 0; // 0x2fc Not
	if(var_128_bool == 0) goto Label_767; // 0x2fd JumpB
	return 0; // 0x2fe Return
	
Label_767:
	var_129_object = Obj(); // 0x2ff PushV
	var_129_object = var_99_object; // 0x300 Mov
	func_2177(var_129_object); // 0x301 NEW_2
	var_144_bool = var_99_object == var_0_object; // 0x303 Eq
	if(var_144_bool == 0) goto Label_775; // 0x304 JumpB
	var_1_object = 0; // 0x305 SetNullT
	goto Label_782; // 0x306 Jump
	
Label_782:
	return 0; // 0x30e Return
	
Label_775:
	var_1_object = var_99_object; // 0x307 TMov
	var_145_bool = var_2_bool; // 0x308 PushT
	if(var_145_bool == 0) goto Label_782; // 0x309 JumpB
	StopAnimation(); // 0x30a Func
	StopGroup0(); // 0x30c Func
	}


task_3_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); var_16_bool = 0; // 0x310 PushV
	var_14_object = var_10_cvector; // 0x311 Mov
	var_15_object = var_11_cvector; // 0x312 Mov
	var_16_bool = var_12_bool; // 0x313 Mov
	func_2349(var_13_bool, var_14_object, var_15_object, var_16_bool); // 0x314 NEW_2
	if(var_13_bool == 0) goto Label_795; // 0x316 JumpB
	var_99_object = Obj(); // 0x317 PushV
	var_99_object = var_10_cvector; // 0x318 Mov
	func_759(); // 0x319 NEW_2
	
Label_795:
	return 0; // 0x31b Return
}


task_4_event_26(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_string, var_8_cvector, var_9_cvector, var_10_bool)
{
	var_11_string = "attack"; // 0x31d PushS
	var_12_bool = var_10_bool == var_11_string; // 0x31e Eq
	if(var_12_bool == 0) goto Label_810; // 0x31f JumpB
	var_13_object = Obj(); // 0x320 PushV
	var_14_object = Obj(); // 0x321 PushV
	func_1173(var_14_object); // 0x322 NEW_2
	var_13_object = var_14_object; // 0x323 Mov
	TaskCall(5); // 0x325 TaskCall
	func_881(var_13_object); // 0x326 NEW_2
	TaskReturn(); // 0x327 TaskReturn
	goto Label_823; // 0x329 Jump
	
Label_823:
	return 0; // 0x337 Return
	
Label_810:
	var_334_string = "execute"; // 0x32a PushS
	var_335_bool = var_10_bool == var_334_string; // 0x32b Eq
	if(var_335_bool == 0) goto Label_819; // 0x32c JumpB
	TaskCall(6); // 0x32e TaskCall
	func_1070(var_336_bool); // 0x32f NEW_2
	TaskReturn(); // 0x330 TaskReturn
	goto Label_823; // 0x332 Jump
	
Label_819:
	var_365_string = ""; // 0x333 PushV
	var_365_string = var_10_bool; // 0x334 Mov
	func_835(var_10_bool, var_365_string); // 0x335 NEW_2
}


task_4_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_cvector, var_10_bool)
{
	var_11_bool = 0; var_12_string = ""; var_13_string = ""; // 0x339 PushV
	var_12_string = "quest_d11_02"; // 0x33a MovS
	var_13_string = "soldier_attack"; // 0x33b MovS
	func_1802(var_11_bool, var_12_string, var_13_string); // 0x33c NEW_2
	return 0; // 0x33e Return
}


task_4_event_6(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool)
{
	var_10_bool = 0; // 0x35f PushV
	var_10_bool = 0; // 0x360 MovB
	var_11_object = var_0_object; // 0x361 PushT
	if(var_11_object == 0) goto Label_872; // 0x362 JumpB
	var_12_bool = 0; // 0x363 PushV
	func_879(var_12_bool); // 0x364 NEW_2
	if(var_12_bool == 0) goto Label_872; // 0x366 JumpB
	var_10_bool = 1; // 0x367 MovB
	
Label_872:
	if(var_10_bool == 0) goto Label_878; // 0x368 JumpB
	var_13_object = Obj(); // 0x369 PushV
	func_1655(var_13_object); // 0x36a NEW_2
	RemoveActor(var_13_object); // 0x36c Func
	
Label_878:
	return 0; // 0x36e Return
}


task_5_event_3(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_object, var_10_bool)
{
	var_11_bool = 0; var_12_bool = 0; // 0x387 PushV
	var_13_bool = 0; var_14_object = Obj(); // 0x388 PushV
	var_14_object = var_10_bool; // 0x389 Mov
	func_1333(var_13_bool, var_14_object); // 0x38a NEW_2
	var_47_bool = var_13_bool == 0; // 0x38c Not
	if(var_47_bool == 0) goto Label_911; // 0x38d JumpB
	return 2; // 0x38e Return
	
Label_911:
	var_48_bool = 0; var_49_object = Obj(); // 0x38f PushV
	var_49_object = var_10_bool; // 0x390 Mov
	func_2241(var_48_bool, var_49_object); // 0x391 NEW_2
	var_126_bool = var_48_bool == 0; // 0x393 Not
	if(var_126_bool == 0) goto Label_923; // 0x394 JumpB
	var_127_object = GlobalVars[0]; // 0x395 PushGE
	in(var_12_bool, var_10_bool); // 0x396 ObjFunc
	var_128_bool = var_12_bool == 0; // 0x398 Not
	if(var_128_bool == 0) goto Label_923; // 0x399 JumpB
	return 2; // 0x39a Return
	
Label_923:
	func_1064(); // 0x39c NEW_2
	var_129_object = Obj(); // 0x39e PushV
	var_129_object = var_10_bool; // 0x39f Mov
	TaskCall(1); // 0x3a0 TaskCall
	func_165(var_130_object, var_129_object); // 0x3a1 NEW_2
	TaskReturn(); // 0x3a2 TaskReturn
	return 2; // 0x3a4 Return
}


	task_5_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_object, var_10_object, var_11_bool, var_12_bool, var_99_object)
	{
	var_100_bool = 0; var_101_object = Obj(); // 0x3a6 PushV
	var_101_object = var_99_object; // 0x3a7 Mov
	func_1333(var_100_bool, var_101_object); // 0x3a8 NEW_2
	var_128_bool = var_100_bool == 0; // 0x3aa Not
	if(var_128_bool == 0) goto Label_945; // 0x3ab JumpB
	var_129_object = Obj(); // 0x3ac PushV
	var_129_object = var_99_object; // 0x3ad Mov
	func_2177(var_129_object); // 0x3ae NEW_2
	return 0; // 0x3b0 Return
	
Label_945:
	func_1064(); // 0x3b2 NEW_2
	var_144_object = Obj(); // 0x3b4 PushV
	var_144_object = var_99_object; // 0x3b5 Mov
	func_2201(var_144_object); // 0x3b6 NEW_2
	return 0; // 0x3b8 Return
	}


task_5_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_object, var_10_object, var_11_bool, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); var_16_bool = 0; // 0x3ba PushV
	var_14_object = var_10_object; // 0x3bb Mov
	var_15_object = var_11_bool; // 0x3bc Mov
	var_16_bool = var_12_bool; // 0x3bd Mov
	func_2349(var_13_bool, var_14_object, var_15_object, var_16_bool); // 0x3be NEW_2
	if(var_13_bool == 0) goto Label_965; // 0x3c0 JumpB
	var_99_object = Obj(); // 0x3c1 PushV
	var_99_object = var_10_object; // 0x3c2 Mov
	func_933(); // 0x3c3 NEW_2
	
Label_965:
	return 0; // 0x3c5 Return
}


task_5_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_object, var_10_bool)
{
	var_11_bool = 0; var_12_object = Obj(); // 0x3c7 PushV
	var_12_object = var_10_bool; // 0x3c8 Mov
	func_2321(var_11_bool, var_12_object); // 0x3c9 NEW_2
	if(var_11_bool == 0) goto Label_979; // 0x3cb JumpB
	func_1064(); // 0x3cd NEW_2
	var_130_object = Obj(); // 0x3cf PushV
	var_130_object = var_10_bool; // 0x3d0 Mov
	func_2388(var_130_object); // 0x3d1 NEW_2
	
Label_979:
	return 0; // 0x3d3 Return
}


task_6_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_string = ""; var_13_string = ""; // 0x46a PushV
	var_12_string = "quest_d11_02"; // 0x46b MovS
	var_13_string = "soldier_attack"; // 0x46c MovS
	func_1802(var_11_bool, var_12_string, var_13_string); // 0x46d NEW_2
	return 0; // 0x46f Return
}


task_6_event_26(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool, var_10_string)
{
	var_11_string = "attack"; // 0x471 PushS
	var_12_bool = var_10_string == var_11_string; // 0x472 Eq
	if(var_12_bool == 0) goto Label_1143; // 0x473 JumpB
	StopGroup0(); // 0x474 Func
	var_0_object = 1; // 0x476 TMovB
	
Label_1143:
	return 0; // 0x477 Return
}


event_22(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0; // 0x7b7 PushV
	var_14_object = var_10_object; // 0x7b8 Mov
	var_15_int = var_11_int; // 0x7b9 Mov
	var_16_float = var_12_float; // 0x7ba Mov
	func_1401(var_14_object, var_15_int, var_16_float); // 0x7bb NEW_2
	return 0; // 0x7bd Return
}


event_43(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float, var_14_cvector, var_15_cvector)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); // 0x7bf PushV
	var_16_object = var_10_object; // 0x7c0 Mov
	var_17_int = var_11_int; // 0x7c1 Mov
	var_18_float = var_12_float; // 0x7c2 Mov
	var_19_cvector = var_14_cvector; // 0x7c3 Mov
	var_20_cvector = var_15_cvector; // 0x7c4 Mov
	func_1469(var_18_float, var_19_cvector, var_20_cvector); // 0x7c5 NEW_2
	return 0; // 0x7c7 Return
}


event_16(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool, var_10_object, var_11_string)
{
	var_12_float = 0; var_13_float = 0; // 0x7c8 PushV
	var_14_string = "health"; // 0x7c9 PushS
	var_15_bool = var_11_string == var_14_string; // 0x7ca Eq
	if(var_15_bool == 0) goto Label_2004; // 0x7cb JumpB
	var_16_string = "health"; // 0x7cc PushS
	GetProperty(var_16_string, var_13_float); // 0x7cd Func
	var_17_int = 0; // 0x7cf PushI
	var_18_bool = var_13_float <= var_17_int; // 0x7d0 LE
	if(var_18_bool == 0) goto Label_2004; // 0x7d1 JumpB
	SignalDeath(var_10_object); // 0x7d2 Func
	
Label_2004:
	return 2; // 0x7d4 Return
}


event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_object = Obj(); // 0x7d6 PushV
	var_12_object = var_10_object; // 0x7d7 Mov
	func_1180(var_11_bool, var_12_object); // 0x7d8 NEW_2
	if(var_11_bool == 0) goto Label_2018; // 0x7da JumpB
	var_15_object = Obj(); // 0x7db PushV
	func_1655(var_15_object); // 0x7dc NEW_2
	var_18_float = 0.05; // 0x7de PushF
	var_19_bool = 1; // 0x7df PushB
	ReportReputationChange(var_10_object, var_15_object, var_18_float, var_19_bool); // 0x7e0 Func
	
Label_2018:
	var_20_object = Obj(); // 0x7e2 PushV
	var_20_object = var_10_object; // 0x7e3 Mov
	func_2394(var_20_object); // 0x7e4 NEW_2
	return 0; // 0x7e6 Return
}


event_6(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool)
{
	var_10_bool = 0; var_11_string = ""; var_12_string = ""; // 0x947 PushV
	var_11_string = "quest_d11_02"; // 0x948 MovS
	var_12_string = "actor_unload"; // 0x949 MovS
	func_1802(var_10_bool, var_11_string, var_12_string); // 0x94a NEW_2
	var_16_object = Obj(); // 0x94c PushV
	func_1655(var_16_object); // 0x94d NEW_2
	RemoveActor(var_16_object); // 0x94f Func
	Hold(); // 0x951 Func
	return 0; // 0x953 Return
}


main(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool)
{
	
Label_831:
	Hold(); // 0x33f Func
	goto Label_831; // 0x341 Jump
}


func_0(var_68_object)
{
	var_69_bool = 0; var_70_object = Obj(); // 0x1 PushV
	var_70_object = var_68_object; // 0x2 Mov
	func_1180(var_69_bool, var_70_object); // 0x3 NEW_2
	if(var_69_bool == 0) goto Label_9; // 0x5 JumpB
	func_1925(); // 0x7 NEW_2
	
Label_9:
	func_1901(); // 0xa NEW_2
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


func_1568(var_87_bool, var_88_string)
{
	var_87_bool = 1; // 0x621 MovB
	var_89_bool = 0; // 0x622 PushV
	var_89_bool = 1; // 0x623 MovB
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
	var_100_string = "woman"; // 0x638 PushS
	var_101_bool = var_88_string == var_100_string; // 0x639 Eq
	if(var_101_bool == 0) goto Label_1599; // 0x63a JumpB
	var_102_string = "worker"; // 0x63b PushS
	var_103_bool = var_88_string == var_102_string; // 0x63c Eq
	if(var_103_bool == 0) goto Label_1599; // 0x63d JumpB
	var_99_bool = 0; // 0x63e MovB
	
Label_1599:
	if(var_99_bool == 0) goto Label_1604; // 0x63f JumpB
	var_104_string = "butcher"; // 0x640 PushS
	var_105_bool = var_88_string == var_104_string; // 0x641 Eq
	if(var_105_bool == 0) goto Label_1604; // 0x642 JumpB
	var_98_bool = 0; // 0x643 MovB
	
Label_1604:
	if(var_98_bool == 0) goto Label_1609; // 0x644 JumpB
	var_106_string = "wasted_girl"; // 0x645 PushS
	var_107_bool = var_88_string == var_106_string; // 0x646 Eq
	if(var_107_bool == 0) goto Label_1609; // 0x647 JumpB
	var_97_bool = 0; // 0x648 MovB
	
Label_1609:
	if(var_97_bool == 0) goto Label_1614; // 0x649 JumpB
	var_108_string = "boy"; // 0x64a PushS
	var_109_bool = var_88_string == var_108_string; // 0x64b Eq
	if(var_109_bool == 0) goto Label_1614; // 0x64c JumpB
	var_96_bool = 0; // 0x64d MovB
	
Label_1614:
	if(var_96_bool == 0) goto Label_1619; // 0x64e JumpB
	var_110_string = "vaxxabitka"; // 0x64f PushS
	var_111_bool = var_88_string == var_110_string; // 0x650 Eq
	if(var_111_bool == 0) goto Label_1619; // 0x651 JumpB
	var_95_bool = 0; // 0x652 MovB
	
Label_1619:
	if(var_95_bool == 0) goto Label_1624; // 0x653 JumpB
	var_112_string = "unosha"; // 0x654 PushS
	var_113_bool = var_88_string == var_112_string; // 0x655 Eq
	if(var_113_bool == 0) goto Label_1624; // 0x656 JumpB
	var_94_bool = 0; // 0x657 MovB
	
Label_1624:
	if(var_94_bool == 0) goto Label_1629; // 0x658 JumpB
	var_114_string = "wasted_male"; // 0x659 PushS
	var_115_bool = var_88_string == var_114_string; // 0x65a Eq
	if(var_115_bool == 0) goto Label_1629; // 0x65b JumpB
	var_93_bool = 0; // 0x65c MovB
	
Label_1629:
	if(var_93_bool == 0) goto Label_1634; // 0x65d JumpB
	var_116_string = "alkash"; // 0x65e PushS
	var_117_bool = var_88_string == var_116_string; // 0x65f Eq
	if(var_117_bool == 0) goto Label_1634; // 0x660 JumpB
	var_92_bool = 0; // 0x661 MovB
	
Label_1634:
	if(var_92_bool == 0) goto Label_1639; // 0x662 JumpB
	var_118_string = "dohodyaga"; // 0x663 PushS
	var_119_bool = var_88_string == var_118_string; // 0x664 Eq
	if(var_119_bool == 0) goto Label_1639; // 0x665 JumpB
	var_91_bool = 0; // 0x666 MovB
	
Label_1639:
	if(var_91_bool == 0) goto Label_1644; // 0x667 JumpB
	var_120_string = "vaxxabit"; // 0x668 PushS
	var_121_bool = var_88_string == var_120_string; // 0x669 Eq
	if(var_121_bool == 0) goto Label_1644; // 0x66a JumpB
	var_90_bool = 0; // 0x66b MovB
	
Label_1644:
	if(var_90_bool == 0) goto Label_1649; // 0x66c JumpB
	var_122_string = "nudegirl"; // 0x66d PushS
	var_123_bool = var_88_string == var_122_string; // 0x66e Eq
	if(var_123_bool == 0) goto Label_1649; // 0x66f JumpB
	var_89_bool = 0; // 0x670 MovB
	
Label_1649:
	if(var_89_bool == 0) goto Label_1654; // 0x671 JumpB
	var_124_string = "morlok"; // 0x672 PushS
	var_125_bool = var_88_string == var_124_string; // 0x673 Eq
	if(var_125_bool == 0) goto Label_1654; // 0x674 JumpB
	var_87_bool = 0; // 0x675 MovB
	
Label_1654:
	return 0; // 0x676 Return
}


func_1064()
{
	StopGroup0(); // 0x428 Func
	Stop(); // 0x42a Func
	return 0; // 0x42c Return
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
	func_1527(var_223_string); // 0x70 NEW_2
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


func_1069()
{
	return 0; // 0x42d Return
}


func_1070(var_0_object)
{
	var_0_object = 0; // 0x42e TMovB
	var_337_string = "all"; // 0x42f PushS
	var_338_string = "attack_on"; // 0x430 PushS
	PlayAnimation(var_337_string, var_338_string); // 0x431 Func
	WaitForAnimEnd(); // 0x433 Func
	var_339_bool = var_0_object == 0; // 0x435 Not
	if(var_339_bool == 0) goto Label_1117; // 0x436 JumpB
	var_340_string = "all"; // 0x437 PushS
	var_341_string = "attack_on"; // 0x438 PushS
	LockAnimationEnd(var_340_string, var_341_string); // 0x439 Func
	var_342_int = 20; // 0x43b PushI
	Sleep(var_342_int); // 0x43c Func
	var_343_bool = var_0_object == 0; // 0x43e Not
	if(var_343_bool == 0) goto Label_1117; // 0x43f JumpB
	var_344_string = "all"; // 0x440 PushS
	var_345_string = "attack_begin1"; // 0x441 PushS
	PlayAnimation(var_344_string, var_345_string); // 0x442 Func
	WaitForAnimEnd(); // 0x444 Func
	var_346_bool = 0; var_347_string = ""; var_348_string = ""; // 0x446 PushV
	var_347_string = "quest_d11_02"; // 0x447 MovS
	var_348_string = "execute"; // 0x448 MovS
	func_1802(var_346_bool, var_347_string, var_348_string); // 0x449 NEW_2
	var_352_string = "shot"; // 0x44b PushS
	var_353_cvector = CVector(0.0, 150.0, 0.0); // 0x44c PushVec
	var_354_int = 800; // 0x44d PushI
	var_355_int = 100000; // 0x44e PushI
	PlayGlobalSound(var_352_string, var_353_cvector, var_354_int, var_355_int); // 0x44f Func
	var_356_string = "all"; // 0x451 PushS
	var_357_string = "attack_end1"; // 0x452 PushS
	PlayAnimation(var_356_string, var_357_string); // 0x453 Func
	WaitForAnimEnd(); // 0x455 Func
	var_358_string = "all"; // 0x457 PushS
	var_359_string = "attack_off"; // 0x458 PushS
	PlayAnimation(var_358_string, var_359_string); // 0x459 Func
	WaitForAnimEnd(); // 0x45b Func
	
Label_1117:
	var_360_object = var_0_object; // 0x45d PushT
	if(var_360_object == 0) goto Label_1128; // 0x45e JumpB
	var_361_object = Obj(); // 0x45f PushV
	var_362_object = Obj(); // 0x460 PushV
	func_1173(var_362_object); // 0x461 NEW_2
	var_361_object = var_362_object; // 0x462 Mov
	TaskCall(5); // 0x464 TaskCall
	func_881(var_361_object); // 0x465 NEW_2
	TaskReturn(); // 0x466 TaskReturn
	
Label_1128:
	return 0; // 0x468 Return
}


func_2159()
{
	var_20_object = GlobalVars[0]; // 0x86f PushGE
	var_21_object = Obj(); // 0x870 PushV
	func_1698(var_21_object); // 0x871 NEW_2
	var_20_object = var_21_object; // 0x872 Mov
	GlobalVars[0] = var_20_object; // 0x874 PopGE
	return 0; // 0x875 Return
}


func_2166(var_136_object, var_137_bool)
{
	var_138_object = Obj(); var_139_bool = 0; // 0x877 PushV
	var_138_object = var_136_object; // 0x878 Mov
	var_139_bool = var_137_bool; // 0x879 Mov
	TaskCall(3); // 0x87a TaskCall
	func_455(var_140_object, var_141_object, var_142_bool, var_138_object, var_139_bool); // 0x87b NEW_2
	TaskReturn(); // 0x87c TaskReturn
	ResetAAS(); // 0x87e Func
	return 0; // 0x880 Return
}


func_1655(var_16_object)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x677 PushV
	self(var_18_object); // 0x678 Func
	var_16_object = var_18_object; // 0x67a Mov
	return 2; // 0x67b Return
}


func_630(var_0_object, var_1_object)
{
	var_0_object = var_1_object; // 0x276 TMovT
	var_1_object = 0; // 0x277 SetNullT
	Face(var_0_object); // 0x278 Func
	return 0; // 0x27a Return
}


func_1144(var_279_string, var_280_int)
{
	var_281_int = 2; // 0x479 PushI
	var_282_bool = var_280_int == var_281_int; // 0x47a Eq
	if(var_282_bool == 0) goto Label_1151; // 0x47b JumpB
	var_279_string = "fire"; // 0x47c MovS
	return 0; // 0x47d Return
	
Label_1151:
	var_283_int = 1; // 0x47f PushI
	var_284_bool = var_280_int == var_283_int; // 0x480 Eq
	if(var_284_bool == 0) goto Label_1156; // 0x481 JumpB
	var_279_string = "bullet"; // 0x482 MovS
	return 0; // 0x483 Return
	
Label_1156:
	var_279_string = "phys"; // 0x484 MovS
	return 0; // 0x485 Return
}


func_635(var_0_object)
{
	var_168_cvector = CVector(0,0,0); var_169_cvector = CVector(0,0,0); var_170_bool = 0; var_171_cvector = CVector(0,0,0); var_172_cvector = CVector(0,0,0); var_173_object = Obj(); var_174_object = Obj(); var_175_cvector = CVector(0,0,0); var_176_object = Obj(); var_177_int = 0; var_178_cvector = CVector(0,0,0); var_179_float = 0; var_180_object = Obj(); var_181_object = Obj(); var_182_cvector = CVector(0,0,0); var_183_cvector = CVector(0,0,0); var_184_bool = 0; var_185_cvector = CVector(0,0,0); var_186_cvector = CVector(0,0,0); var_187_object = Obj(); var_188_object = Obj(); var_189_cvector = CVector(0,0,0); var_190_object = Obj(); var_191_int = 0; var_192_cvector = CVector(0,0,0); var_193_float = 0; var_194_object = Obj(); var_195_object = Obj(); // 0x27b PushV
	var_196_object = Obj(); // 0x27c PushV
	var_196_object = var_0_object; // 0x27d MovT
	func_1814(var_196_object); // 0x27e NEW_2
	ReportAttack(var_0_object); // 0x280 Func
	var_197_bool = 0; var_198_object = Obj(); // 0x282 PushV
	var_198_object = var_0_object; // 0x283 MovT
	func_1180(var_197_bool, var_198_object); // 0x284 NEW_2
	if(var_197_bool == 0) goto Label_652; // 0x286 JumpB
	var_199_object = Obj(); // 0x287 PushV
	func_1655(var_199_object); // 0x288 NEW_2
	SendPlayerEnemy(var_0_object, var_199_object); // 0x28a Func
	
Label_652:
	GetDirection(var_182_cvector); // 0x28c Func
	var_200_cvector = CVector(0,0,0); var_201_object = Obj(); // 0x28e PushV
	var_201_object = var_0_object; // 0x28f MovT
	func_1158(var_201_object); // 0x290 NEW_2
	var_183_cvector = var_200_cvector; // 0x291 Mov
	var_206_float = 0; var_207_cvector = CVector(0,0,0); var_208_cvector = CVector(0,0,0); // 0x293 PushV
	var_207_cvector = var_182_cvector; // 0x294 Mov
	var_208_cvector = var_183_cvector; // 0x295 Mov
	func_1723(var_206_float, var_207_cvector, var_208_cvector); // 0x296 NEW_2
	var_230_float = 0.99939; // 0x298 PushF
	var_231_bool = var_206_float < var_230_float; // 0x299 LT
	if(var_231_bool == 0) goto Label_668; // 0x29a JumpB
	return 28; // 0x29b Return
	
Label_668:
	func_1823(); // 0x29d NEW_2
	var_232_string = "all"; // 0x29f PushS
	var_233_string = "attack_begin1"; // 0x2a0 PushS
	PlayAnimation(var_232_string, var_233_string); // 0x2a1 Func
	var_234_string = "attack"; // 0x2a3 PushS
	GetGeometryLocator(var_234_string, var_184_bool, var_185_cvector, var_186_cvector); // 0x2a4 Func
	var_235_bool = var_184_bool; // 0x2a6 Push
	if(var_235_bool == 0) goto Label_689; // 0x2a7 JumpB
	GetScene(var_188_object); // 0x2a8 Func
	var_236_string = "light-dynamic"; // 0x2aa PushS
	var_237_string = "soldier_fire.xml"; // 0x2ab PushS
	AddActorByType(var_187_object, var_236_string, var_188_object, var_185_cvector, var_186_cvector, var_237_string); // 0x2ac Func
	var_188_object = 0; // 0x2ae SetNull
	var_187_object = 0; // 0x2af SetNull
	goto Label_691; // 0x2b0 Jump
	
Label_691:
	var_238_string = "shot"; // 0x2b3 PushS
	var_239_cvector = CVector(0.0, 150.0, 0.0); // 0x2b4 PushVec
	var_240_int = 800; // 0x2b5 PushI
	var_241_int = 100000; // 0x2b6 PushI
	PlayGlobalSound(var_238_string, var_239_cvector, var_240_int, var_241_int); // 0x2b7 Func
	GetDirection(var_182_cvector); // 0x2b9 Func
	var_242_cvector = CVector(0,0,0); var_243_object = Obj(); // 0x2bb PushV
	var_243_object = var_0_object; // 0x2bc MovT
	func_1158(var_243_object); // 0x2bd NEW_2
	var_183_cvector = var_242_cvector; // 0x2be Mov
	var_244_float = GetByIndex(var_183_cvector, 1); // 0x2c0 PushE
	var_245_float = 0; var_246_object = Obj(); // 0x2c1 PushV
	var_246_object = var_0_object; // 0x2c2 MovT
	func_1494(var_246_object); // 0x2c3 NEW_2
	var_244_float = var_244_float + var_245_float; // 0x2c5 Add2
	SetByIndex(var_183_cvector, 1) = var_244_float; // 0x2c6 PopE
	var_251_float = 0.03491; // 0x2c7 PushF
	RandVecCone3D(var_189_cvector, var_183_cvector, var_251_float); // 0x2c8 Func
	GetVictimMaterial(var_189_cvector, var_190_object, var_191_int, var_192_cvector); // 0x2ca Func
	var_252_bool = var_190_object != 0; // 0x2cc NullNeq
	if(var_252_bool == 0) goto Label_747; // 0x2cd JumpB
	var_253_bool = var_190_object == var_0_object; // 0x2ce Eq
	if(var_253_bool == 0) goto Label_732; // 0x2cf JumpB
	var_254_float = 0; var_255_object = Obj(); var_256_float = 0; var_257_int = 0; // 0x2d0 PushV
	var_255_object = var_0_object; // 0x2d1 MovT
	var_256_float = 1.5; // 0x2d2 MovF
	var_257_int = 1; // 0x2d3 MovI
	func_1219(var_254_float, var_255_object, var_256_float, var_257_int); // 0x2d4 NEW_2
	var_193_float = var_254_float; // 0x2d5 Mov
	var_316_int = 2; // 0x2d7 PushI
	var_317_float = 1.5; // 0x2d8 PushF
	ReportHit(var_0_object, var_316_int, var_193_float, var_317_float); // 0x2d9 Func
	goto Label_747; // 0x2db Jump
	
Label_747:
	var_318_string = "all"; // 0x2eb PushS
	var_319_string = "attack_end1"; // 0x2ec PushS
	PlayAnimation(var_318_string, var_319_string); // 0x2ed Func
	WaitForAnimEnd(); // 0x2ef Func
	var_320_string = "all"; // 0x2f1 PushS
	var_321_string = "attack_on"; // 0x2f2 PushS
	LockAnimationEnd(var_320_string, var_321_string); // 0x2f3 Func
	return 28; // 0x2f5 Return
	
Label_732:
	var_322_int = -1; // 0x2dc PushI
	var_323_bool = var_191_int != var_322_int; // 0x2dd Neq
	if(var_323_bool == 0) goto Label_747; // 0x2de JumpB
	GetScene(var_194_object); // 0x2df Func
	var_324_string = "scripted"; // 0x2e1 PushS
	var_325_cvector = CVector(0.0, 0.0, 1.0); // 0x2e2 PushVec
	var_326_string = "richochet.xml"; // 0x2e3 PushS
	AddActorByType(var_195_object, var_324_string, var_194_object, var_192_cvector, var_325_cvector, var_326_string); // 0x2e4 Func
	var_327_string = "Material"; // 0x2e6 PushS
	SetScriptProperty(var_327_string, var_191_int); // 0x2e7 ObjFunc
	var_195_object = 0; // 0x2e9 SetNull
	var_194_object = 0; // 0x2ea SetNull
	
Label_689:
	WaitForAnimEnd(); // 0x2b1 Func
}


func_1661(var_42_cvector, var_43_cvector)
{
	var_50_float = 0; var_51_float = 0; // 0x67d PushV
	var_52_int = var_43_cvector | var_43_cvector; // 0x67e Or
	var_51_float = sqrt(var_52_int); // 0x67f Sqrt2
	var_53_float = 0.0; // 0x680 PushF
	var_54_bool = var_51_float < var_53_float; // 0x681 LT
	if(var_54_bool == 0) goto Label_1669; // 0x682 JumpB
	var_42_cvector = CVector(0.0, 0.0, 0.0); // 0x683 MovV
	return 2; // 0x684 Return
	
Label_1669:
	var_42_cvector = var_43_cvector / var_43_cvector; // 0x685 Div2
	return 2; // 0x686 Return
}


func_2177(var_129_object)
{
	var_130_bool = 0; var_131_bool = 0; // 0x881 PushV
	var_132_bool = var_129_object == 0; // 0x882 NullEq
	if(var_132_bool == 0) goto Label_2181; // 0x883 JumpB
	return 2; // 0x884 Return
	
Label_2181:
	var_133_object = GlobalVars[0]; // 0x885 PushGE
	in(var_131_bool, var_129_object); // 0x886 ObjFunc
	var_134_bool = var_131_bool == 0; // 0x888 Not
	if(var_134_bool == 0) goto Label_2189; // 0x889 JumpB
	var_135_object = GlobalVars[0]; // 0x88a PushGE
	add(var_129_object); // 0x88b ObjFunc
	
Label_2189:
	var_136_bool = 0; var_137_object = Obj(); // 0x88d PushV
	var_137_object = var_129_object; // 0x88e Mov
	func_1180(var_136_bool, var_137_object); // 0x88f NEW_2
	if(var_136_bool == 0) goto Label_2200; // 0x891 JumpB
	var_140_object = Obj(); // 0x892 PushV
	func_1655(var_140_object); // 0x893 NEW_2
	var_143_float = 0.0; // 0x895 PushF
	ReportReputationChange(var_129_object, var_140_object, var_143_float); // 0x896 Func
	
Label_2200:
	return 2; // 0x898 Return
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
	func_1527(var_171_string); // 0x92 NEW_2
	var_200_string = "all"; // 0x94 PushS
	PlayAnimation(var_200_string, var_170_string); // 0x95 Func
	WaitForAnimEnd(); // 0x97 Func
	var_201_string = "all"; // 0x99 PushS
	LockAnimationEnd(var_201_string, var_170_string); // 0x9a Func
	RemoveEnvelope(); // 0x9c Func
	return 0; // 0x9e Return
}


func_1158(var_44_cvector)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x486 PushV
	GetPosition(var_48_cvector); // 0x487 Func
	GetPosition(var_49_cvector); // 0x489 ObjFunc
	var_44_cvector = var_49_cvector - var_48_cvector; // 0x48b Sub2
	return 4; // 0x48c Return
}


func_1671(var_314_float, var_315_cvector, var_316_cvector)
{
	var_317_cvector = CVector(0,0,0); var_318_cvector = CVector(0,0,0); // 0x687 PushV
	var_318_cvector = var_316_cvector - var_315_cvector; // 0x688 Sub2
	var_314_float = var_318_cvector | var_318_cvector; // 0x689 Or2
	return 2; // 0x68a Return
}


func_1675(var_289_float, var_290_float, var_291_float)
{
	var_294_bool = var_290_float < var_291_float; // 0x68c LT
	if(var_294_bool == 0) goto Label_1680; // 0x68d JumpB
	var_289_float = var_290_float; // 0x68e Mov
	goto Label_1681; // 0x68f Jump
	
Label_1681:
	return 0; // 0x691 Return
	
Label_1680:
	var_289_float = var_291_float; // 0x690 Mov
}


func_1165(var_376_float)
{
	var_378_cvector = CVector(0,0,0); var_379_cvector = CVector(0,0,0); var_380_cvector = CVector(0,0,0); var_381_cvector = CVector(0,0,0); var_382_cvector = CVector(0,0,0); var_383_cvector = CVector(0,0,0); // 0x48d PushV
	GetPosition(var_381_cvector); // 0x48e Func
	GetPosition(var_382_cvector); // 0x490 ObjFunc
	var_383_cvector = var_382_cvector - var_381_cvector; // 0x492 Sub2
	var_376_float = var_383_cvector | var_383_cvector; // 0x493 Or2
	return 6; // 0x494 Return
}


func_1682(var_58_float, var_59_float, var_60_float, var_61_float)
{
	var_62_bool = var_59_float < var_60_float; // 0x693 LT
	if(var_62_bool == 0) goto Label_1687; // 0x694 JumpB
	var_58_float = var_60_float; // 0x695 Mov
	return 0; // 0x696 Return
	
Label_1687:
	var_63_bool = var_59_float > var_61_float; // 0x697 GT
	if(var_63_bool == 0) goto Label_1691; // 0x698 JumpB
	var_58_float = var_61_float; // 0x699 Mov
	return 0; // 0x69a Return
	
Label_1691:
	var_58_float = var_59_float; // 0x69b Mov
	return 0; // 0x69c Return
}


func_1173(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x495 PushV
	var_17_string = "player"; // 0x496 PushS
	FindActor(var_16_object, var_17_string); // 0x497 Func
	var_14_object = var_16_object; // 0x499 Mov
	return 2; // 0x49a Return
}


func_2201(var_144_object)
{
	var_145_object = Obj(); // 0x89a PushV
	var_145_object = var_144_object; // 0x89b Mov
	func_2177(var_145_object); // 0x89c NEW_2
	var_146_object = Obj(); var_147_bool = 0; // 0x89e PushV
	var_146_object = var_144_object; // 0x89f Mov
	var_147_bool = 1; // 0x8a0 MovB
	func_2166(var_146_object, var_147_bool); // 0x8a1 NEW_2
	return 0; // 0x8a3 Return
}


func_1180(var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_bool = 0; // 0x49c PushV
	IsPlayerActor(var_12_object, var_14_bool); // 0x49d Func
	var_11_bool = var_14_bool; // 0x49f Mov
	return 2; // 0x4a0 Return
}


func_1693(var_103_bool, var_104_int, var_105_int)
{
	var_106_int = 0; var_107_int = 0; // 0x69d PushV
	irand(var_107_int, var_105_int); // 0x69e Func
	var_103_bool = var_107_int < var_104_int; // 0x6a0 LT2
	return 2; // 0x6a1 Return
}


func_1185(var_48_bool, var_49_object, var_50_string)
{
	var_51_bool = 0; var_52_bool = 0; // 0x4a1 PushV
	var_53_string = "HasProperty"; // 0x4a2 PushS
	var_54_int = 2; // 0x4a3 PushI
	var_55_bool = IsFuncExist(var_49_object, var_53_string, var_54_int); // 0x4a4 FuncExist
	var_56_bool = var_55_bool == 0; // 0x4a5 Not
	if(var_56_bool == 0) goto Label_1193; // 0x4a6 JumpB
	var_48_bool = 0; // 0x4a7 MovB
	return 2; // 0x4a8 Return
	
Label_1193:
	HasProperty(var_50_string, var_52_bool); // 0x4a9 ObjFunc
	var_48_bool = var_52_bool; // 0x4ab Mov
	return 2; // 0x4ac Return
}


func_1698(var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x6a2 PushV
	CreateObjectSet(var_23_object); // 0x6a3 Func
	var_21_object = var_23_object; // 0x6a5 Mov
	return 2; // 0x6a6 Return
}


func_2212(var_131_object)
{
	var_132_bool = 0; var_133_bool = 0; // 0x8a4 PushV
	var_134_object = GlobalVars[0]; // 0x8a5 PushGE
	in(var_133_bool, var_131_object); // 0x8a6 ObjFunc
	var_135_bool = var_133_bool; // 0x8a8 Push
	if(var_135_bool == 0) goto Label_2224; // 0x8a9 JumpB
	var_136_object = Obj(); var_137_bool = 0; // 0x8aa PushV
	var_136_object = var_131_object; // 0x8ab Mov
	var_137_bool = 1; // 0x8ac MovB
	func_2166(var_136_object, var_137_bool); // 0x8ad NEW_2
	goto Label_2232; // 0x8af Jump
	
Label_2232:
	return 2; // 0x8b8 Return
	
Label_2224:
	var_363_object = Obj(); // 0x8b0 PushV
	var_363_object = var_131_object; // 0x8b1 Mov
	TaskCall(2); // 0x8b2 TaskCall
	func_285(var_365_bool, var_363_object); // 0x8b3 NEW_2
	TaskReturn(); // 0x8b4 TaskReturn
	ResetAAS(); // 0x8b6 Func
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
	func_1333(var_136_bool, var_137_object); // 0xb2 NEW_2
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


func_1704(var_209_float, var_210_cvector, var_211_cvector)
{
	var_212_float = GetByIndex(var_210_cvector, 0); // 0x6a9 PushE
	var_213_float = GetByIndex(var_211_cvector, 0); // 0x6aa PushE
	var_214_float = var_212_float * var_213_float; // 0x6ab Mult
	var_215_float = GetByIndex(var_210_cvector, 2); // 0x6ac PushE
	var_216_float = GetByIndex(var_211_cvector, 2); // 0x6ad PushE
	var_217_float = var_215_float * var_216_float; // 0x6ae Mult
	var_209_float = var_214_float + var_217_float; // 0x6af Add2
	return 0; // 0x6b0 Return
}


func_1197(var_40_bool, var_41_object, var_42_string, var_43_float, var_44_float, var_45_float)
{
	var_46_float = 0; var_47_float = 0; // 0x4ad PushV
	var_48_bool = 0; var_49_object = Obj(); var_50_string = ""; // 0x4ae PushV
	var_49_object = var_41_object; // 0x4af Mov
	var_50_string = var_42_string; // 0x4b0 Mov
	func_1185(var_48_bool, var_49_object, var_50_string); // 0x4b1 NEW_2
	var_57_bool = var_48_bool == 0; // 0x4b3 Not
	if(var_57_bool == 0) goto Label_1207; // 0x4b4 JumpB
	var_40_bool = 0; // 0x4b5 MovB
	return 2; // 0x4b6 Return
	
Label_1207:
	GetProperty(var_42_string, var_47_float); // 0x4b7 ObjFunc
	var_58_float = 0; var_59_float = 0; var_60_float = 0; var_61_float = 0; // 0x4b9 PushV
	var_59_float = var_47_float + var_43_float; // 0x4ba Add2
	var_60_float = var_44_float; // 0x4bb Mov
	var_61_float = var_45_float; // 0x4bc Mov
	func_1682(var_58_float, var_59_float, var_60_float, var_61_float); // 0x4bd NEW_2
	SetProperty(var_42_string, var_58_float); // 0x4bf ObjFunc
	var_40_bool = 1; // 0x4c1 MovB
	return 2; // 0x4c2 Return
}


func_1713(var_218_float, var_219_cvector)
{
	var_220_float = GetByIndex(var_219_cvector, 0); // 0x6b2 PushE
	var_221_float = GetByIndex(var_219_cvector, 0); // 0x6b3 PushE
	var_222_float = var_220_float * var_221_float; // 0x6b4 Mult
	var_223_float = GetByIndex(var_219_cvector, 2); // 0x6b5 PushE
	var_224_float = GetByIndex(var_219_cvector, 2); // 0x6b6 PushE
	var_225_float = var_223_float * var_224_float; // 0x6b7 Mult
	var_226_int = var_222_float + var_225_float; // 0x6b8 Add
	var_218_float = sqrt(var_226_int); // 0x6b9 Sqrt2
	return 0; // 0x6ba Return
}


func_2233(var_374_bool, var_375_object)
{
	var_376_float = 0; var_377_object = Obj(); // 0x8ba PushV
	var_377_object = var_375_object; // 0x8bb Mov
	func_1165(var_377_object); // 0x8bc NEW_2
	var_384_float = 40000.0; // 0x8be PushF
	var_374_bool = var_376_float <= var_384_float; // 0x8bf LE2
	return 0; // 0x8c0 Return
}


func_1723(var_206_float, var_207_cvector, var_208_cvector)
{
	var_209_float = 0; var_210_cvector = CVector(0,0,0); var_211_cvector = CVector(0,0,0); // 0x6bc PushV
	var_210_cvector = var_207_cvector; // 0x6bd Mov
	var_211_cvector = var_208_cvector; // 0x6be Mov
	func_1704(var_209_float, var_210_cvector, var_211_cvector); // 0x6bf NEW_2
	var_218_float = 0; var_219_cvector = CVector(0,0,0); // 0x6c1 PushV
	var_219_cvector = var_207_cvector; // 0x6c2 Mov
	func_1713(var_218_float, var_219_cvector); // 0x6c3 NEW_2
	var_227_float = 0; var_228_cvector = CVector(0,0,0); // 0x6c5 PushV
	var_228_cvector = var_208_cvector; // 0x6c6 Mov
	func_1713(var_227_float, var_228_cvector); // 0x6c7 NEW_2
	var_229_float = var_218_float * var_227_float; // 0x6c9 Mult
	var_206_float = var_209_float / var_209_float; // 0x6ca Div2
	return 0; // 0x6cb Return
}


func_189()
{
	StopAsync(); // 0xbd Func
	var_130_int = 100; // 0xbf PushI
	KillTimer(var_130_int); // 0xc0 Func
	StopGroup0(); // 0xc2 Func
	return 0; // 0xc4 Return
}


func_2241(var_52_bool, var_53_object)
{
	var_54_float = 0; var_55_string = ""; var_56_float = 0; var_57_float = 0; var_58_string = ""; var_59_float = 0; // 0x8c1 PushV
	var_60_bool = 0; var_61_object = Obj(); // 0x8c2 PushV
	var_61_object = var_53_object; // 0x8c3 Mov
	func_1333(var_60_bool, var_61_object); // 0x8c4 NEW_2
	var_62_bool = var_60_bool == 0; // 0x8c6 Not
	if(var_62_bool == 0) goto Label_2250; // 0x8c7 JumpB
	var_52_bool = 0; // 0x8c8 MovB
	return 6; // 0x8c9 Return
	
Label_2250:
	var_63_bool = 0; var_64_object = Obj(); // 0x8ca PushV
	var_64_object = var_53_object; // 0x8cb Mov
	func_1180(var_63_bool, var_64_object); // 0x8cc NEW_2
	if(var_63_bool == 0) goto Label_2261; // 0x8ce JumpB
	var_67_string = "reputation"; // 0x8cf PushS
	GetProperty(var_67_string, var_57_float); // 0x8d0 ObjFunc
	var_68_float = 0.33; // 0x8d2 PushF
	var_52_bool = var_57_float < var_68_float; // 0x8d3 LT2
	return 6; // 0x8d4 Return
	
Label_2261:
	var_69_bool = 0; var_70_object = Obj(); var_71_string = ""; // 0x8d5 PushV
	var_70_object = var_53_object; // 0x8d6 Mov
	var_71_string = "class"; // 0x8d7 MovS
	func_1185(var_69_bool, var_70_object, var_71_string); // 0x8d8 NEW_2
	var_72_bool = var_69_bool == 0; // 0x8da Not
	if(var_72_bool == 0) goto Label_2270; // 0x8db JumpB
	var_52_bool = 0; // 0x8dc MovB
	return 6; // 0x8dd Return
	
Label_2270:
	var_73_string = "class"; // 0x8de PushS
	GetProperty(var_73_string, var_58_string); // 0x8df ObjFunc
	var_74_bool = 0; // 0x8e1 PushV
	var_74_bool = 1; // 0x8e2 MovB
	var_75_bool = 0; // 0x8e3 PushV
	var_75_bool = 1; // 0x8e4 MovB
	var_76_string = "bomber"; // 0x8e5 PushS
	var_77_bool = var_58_string == var_76_string; // 0x8e6 Eq
	if(var_77_bool == 0) goto Label_2284; // 0x8e7 JumpB
	var_78_string = "hunter"; // 0x8e8 PushS
	var_79_bool = var_58_string == var_78_string; // 0x8e9 Eq
	if(var_79_bool == 0) goto Label_2284; // 0x8ea JumpB
	var_75_bool = 0; // 0x8eb MovB
	
Label_2284:
	if(var_75_bool == 0) goto Label_2289; // 0x8ec JumpB
	var_80_string = "grabitel"; // 0x8ed PushS
	var_81_bool = var_58_string == var_80_string; // 0x8ee Eq
	if(var_81_bool == 0) goto Label_2289; // 0x8ef JumpB
	var_74_bool = 0; // 0x8f0 MovB
	
Label_2289:
	if(var_74_bool == 0) goto Label_2292; // 0x8f1 JumpB
	var_52_bool = 1; // 0x8f2 MovB
	return 6; // 0x8f3 Return
	
Label_2292:
	var_82_bool = 0; var_83_object = Obj(); var_84_string = ""; // 0x8f4 PushV
	var_83_object = var_53_object; // 0x8f5 Mov
	var_84_string = "disease"; // 0x8f6 MovS
	func_1185(var_82_bool, var_83_object, var_84_string); // 0x8f7 NEW_2
	var_85_bool = var_82_bool == 0; // 0x8f9 Not
	if(var_85_bool == 0) goto Label_2301; // 0x8fa JumpB
	var_52_bool = 0; // 0x8fb MovB
	return 6; // 0x8fc Return
	
Label_2301:
	var_86_bool = 0; // 0x8fd PushV
	var_86_bool = 1; // 0x8fe MovB
	var_87_bool = 0; var_88_string = ""; // 0x8ff PushV
	var_88_string = var_58_string; // 0x900 Mov
	func_1568(var_87_bool, var_88_string); // 0x901 NEW_2
	if(var_87_bool == 0) goto Label_2312; // 0x903 JumpB
	var_126_string = "dog"; // 0x904 PushS
	var_127_bool = var_58_string == var_126_string; // 0x905 Eq
	if(var_127_bool == 0) goto Label_2312; // 0x906 JumpB
	var_86_bool = 0; // 0x907 MovB
	
Label_2312:
	if(var_86_bool == 0) goto Label_2319; // 0x908 JumpB
	var_128_string = "disease"; // 0x909 PushS
	GetProperty(var_128_string, var_59_float); // 0x90a ObjFunc
	var_129_int = 0; // 0x90c PushI
	var_52_bool = var_59_float > var_129_int; // 0x90d GT2
	return 6; // 0x90e Return
	
Label_2319:
	var_52_bool = 0; // 0x90f MovB
	return 6; // 0x910 Return
}


func_1219(var_254_float, var_255_object, var_256_float, var_257_int)
{
	var_258_int = 0; var_259_string = ""; var_260_int = 0; var_261_float = 0; var_262_float = 0; var_263_float = 0; var_264_int = 0; var_265_string = ""; var_266_int = 0; var_267_float = 0; var_268_float = 0; var_269_float = 0; // 0x4c3 PushV
	var_270_bool = 0; var_271_object = Obj(); var_272_string = ""; // 0x4c4 PushV
	var_271_object = var_255_object; // 0x4c5 Mov
	var_272_string = "health"; // 0x4c6 MovS
	func_1185(var_270_bool, var_271_object, var_272_string); // 0x4c7 NEW_2
	var_273_bool = var_270_bool == 0; // 0x4c9 Not
	if(var_273_bool == 0) goto Label_1229; // 0x4ca JumpB
	var_254_float = 0.0; // 0x4cb MovF
	return 12; // 0x4cc Return
	
Label_1229:
	var_274_bool = 0; var_275_object = Obj(); var_276_string = ""; // 0x4cd PushV
	var_275_object = var_255_object; // 0x4ce Mov
	var_276_string = "armor"; // 0x4cf MovS
	func_1185(var_274_bool, var_275_object, var_276_string); // 0x4d0 NEW_2
	var_277_bool = var_274_bool == 0; // 0x4d2 Not
	if(var_277_bool == 0) goto Label_1238; // 0x4d3 JumpB
	var_264_int = 0; // 0x4d4 MovI
	goto Label_1241; // 0x4d5 Jump
	
Label_1241:
	var_278_string = "armor_"; // 0x4d9 PushS
	var_279_string = ""; var_280_int = 0; // 0x4da PushV
	var_280_int = var_257_int; // 0x4db Mov
	func_1144(var_279_string, var_280_int); // 0x4dc NEW_2
	var_265_string = var_278_string + var_279_string; // 0x4de Add2
	var_285_bool = 0; var_286_object = Obj(); var_287_string = ""; // 0x4df PushV
	var_286_object = var_255_object; // 0x4e0 Mov
	var_287_string = var_265_string; // 0x4e1 Mov
	func_1185(var_285_bool, var_286_object, var_287_string); // 0x4e2 NEW_2
	var_288_bool = var_285_bool == 0; // 0x4e4 Not
	if(var_288_bool == 0) goto Label_1256; // 0x4e5 JumpB
	var_266_int = 0; // 0x4e6 MovI
	goto Label_1258; // 0x4e7 Jump
	
Label_1258:
	var_289_float = 0; var_290_float = 0; var_291_float = 0; // 0x4ea PushV
	var_292_int = var_264_int + var_266_int; // 0x4eb Add
	var_293_float = 100.0; // 0x4ec PushF
	var_290_float = var_292_int / var_292_int; // 0x4ed Div2
	var_291_float = 1; // 0x4ee MovI
	func_1675(var_289_float, var_290_float, var_291_float); // 0x4ef NEW_2
	var_267_float = var_289_float; // 0x4f0 Mov
	var_295_string = "health"; // 0x4f2 PushS
	GetProperty(var_295_string, var_268_float); // 0x4f3 ObjFunc
	var_296_int = 1; // 0x4f5 PushI
	var_297_int = var_296_int - var_267_float; // 0x4f6 Sub
	var_269_float = var_256_float * var_297_int; // 0x4f7 Mult2
	var_298_string = "health"; // 0x4f8 PushS
	var_299_float = 0; var_300_float = 0; var_301_float = 0; var_302_float = 0; // 0x4f9 PushV
	var_300_float = var_268_float - var_269_float; // 0x4fa Sub2
	var_301_float = 0; // 0x4fb MovI
	var_302_float = 1; // 0x4fc MovI
	func_1682(var_299_float, var_300_float, var_301_float, var_302_float); // 0x4fd NEW_2
	SetProperty(var_298_string, var_299_float); // 0x4ff ObjFunc
	var_305_bool = 0; var_306_object = Obj(); // 0x501 PushV
	var_306_object = var_255_object; // 0x502 Mov
	func_1180(var_305_bool, var_306_object); // 0x503 NEW_2
	if(var_305_bool == 0) goto Label_1290; // 0x505 JumpB
	var_307_float = 0; // 0x506 PushV
	var_307_float = -var_269_float; // 0x507 Neg2
	func_1775(var_307_float); // 0x508 NEW_2
	
Label_1290:
	var_254_float = var_269_float; // 0x50a Mov
	return 12; // 0x50b Return
	
Label_1256:
	GetProperty(var_265_string, var_266_int); // 0x4e8 ObjFunc
	
Label_1238:
	var_315_string = "armor"; // 0x4d6 PushS
	GetProperty(var_315_string, var_264_int); // 0x4d7 ObjFunc
}


func_1740(var_29_bool, var_30_object, var_31_float)
{
	var_32_bool = var_30_object == 0; // 0x6cd Not
	if(var_32_bool == 0) goto Label_1745; // 0x6ce JumpB
	var_29_bool = 0; // 0x6cf MovB
	return 0; // 0x6d0 Return
	
Label_1745:
	var_33_int = 0; // 0x6d1 PushI
	var_34_bool = var_31_float > var_33_int; // 0x6d2 GT
	if(var_34_bool == 0) goto Label_1752; // 0x6d3 JumpB
	var_35_int = 8; // 0x6d4 PushI
	SendWorldWndMessage(var_35_int); // 0x6d5 Func
	goto Label_1761; // 0x6d7 Jump
	
Label_1761:
	var_36_float = 0; // 0x6e1 PushV
	var_36_float = var_31_float; // 0x6e2 Mov
	func_1792(var_36_float); // 0x6e3 NEW_2
	var_40_bool = 0; var_41_object = Obj(); var_42_string = ""; var_43_float = 0; var_44_float = 0; var_45_float = 0; // 0x6e5 PushV
	var_41_object = var_30_object; // 0x6e6 Mov
	var_42_string = "reputation"; // 0x6e7 MovS
	var_43_float = var_31_float; // 0x6e8 Mov
	var_44_float = 0; // 0x6e9 MovI
	var_45_float = 1; // 0x6ea MovI
	func_1197(var_40_bool, var_41_object, var_42_string, var_43_float, var_44_float, var_45_float); // 0x6eb NEW_2
	var_29_bool = 1; // 0x6ed MovB
	return 0; // 0x6ee Return
	
Label_1752:
	var_64_int = 0; // 0x6d8 PushI
	var_65_bool = var_31_float < var_64_int; // 0x6d9 LT
	if(var_65_bool == 0) goto Label_1759; // 0x6da JumpB
	var_66_int = 9; // 0x6db PushI
	SendWorldWndMessage(var_66_int); // 0x6dc Func
	goto Label_1761; // 0x6de Jump
	
Label_1759:
	var_29_bool = 0; // 0x6df MovB
	return 0; // 0x6e0 Return
}


func_1775(var_307_float)
{
	var_308_object = Obj(); var_309_object = Obj(); // 0x6ef PushV
	CreateFloatVector(var_309_object); // 0x6f0 Func
	add(var_307_float); // 0x6f2 ObjFunc
	var_310_int = 0; // 0x6f4 PushI
	var_311_bool = var_307_float < var_310_int; // 0x6f5 LT
	if(var_311_bool == 0) goto Label_1787; // 0x6f6 JumpB
	var_312_float = 0.7; // 0x6f7 PushF
	var_313_int = 500; // 0x6f8 PushI
	RumblePlay(var_312_float, var_313_int); // 0x6f9 Func
	
Label_1787:
	var_314_int = 15; // 0x6fb PushI
	SendWorldWndMessage(var_314_int, var_309_object); // 0x6fc Func
	return 2; // 0x6fe Return
}


func_1792(var_36_float)
{
	var_37_object = Obj(); var_38_object = Obj(); // 0x700 PushV
	CreateFloatVector(var_38_object); // 0x701 Func
	add(var_36_float); // 0x703 ObjFunc
	var_39_int = 16; // 0x705 PushI
	SendWorldWndMessage(var_39_int, var_38_object); // 0x706 Func
	return 2; // 0x708 Return
}


func_1802(var_10_bool, var_11_string, var_12_string)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0x70a PushV
	FindActor(var_14_object, var_11_string); // 0x70b Func
	var_15_bool = var_14_object == 0; // 0x70d NullEq
	if(var_15_bool == 0) goto Label_1809; // 0x70e JumpB
	var_10_bool = 0; // 0x70f MovB
	return 2; // 0x710 Return
	
Label_1809:
	Trigger(var_14_object, var_12_string); // 0x711 Func
	var_10_bool = 1; // 0x713 MovB
	return 2; // 0x714 Return
}


func_1292(var_30_bool)
{
	var_32_bool = 0; var_33_bool = 0; // 0x50c PushV
	IsDead(var_33_bool); // 0x50d ObjFunc
	var_30_bool = var_33_bool; // 0x50f Mov
	return 2; // 0x510 Return
}


func_2321(var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_bool = 0; // 0x911 PushV
	var_15_bool = 0; var_16_object = Obj(); // 0x912 PushV
	var_16_object = var_12_object; // 0x913 Mov
	func_1333(var_15_bool, var_16_object); // 0x914 NEW_2
	var_49_bool = var_15_bool == 0; // 0x916 Not
	if(var_49_bool == 0) goto Label_2330; // 0x917 JumpB
	var_11_bool = 0; // 0x918 MovB
	return 2; // 0x919 Return
	
Label_2330:
	var_50_object = GlobalVars[0]; // 0x91a PushGE
	in(var_14_bool, var_12_object); // 0x91b ObjFunc
	var_51_bool = var_14_bool; // 0x91d Push
	if(var_51_bool == 0) goto Label_2337; // 0x91e JumpB
	var_11_bool = 1; // 0x91f MovB
	return 2; // 0x920 Return
	
Label_2337:
	var_52_bool = 0; var_53_object = Obj(); // 0x921 PushV
	var_53_object = var_12_object; // 0x922 Mov
	func_2241(var_52_bool, var_53_object); // 0x923 NEW_2
	var_11_bool = var_52_bool; // 0x924 Mov
	return 2; // 0x926 Return
}


func_1297(var_19_bool, var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); // 0x511 PushV
	var_25_bool = var_20_object == 0; // 0x512 NullEq
	if(var_25_bool == 0) goto Label_1302; // 0x513 JumpB
	var_19_bool = 0; // 0x514 MovB
	return 4; // 0x515 Return
	
Label_1302:
	var_26_bool = 0; // 0x516 PushV
	var_26_bool = 0; // 0x517 MovB
	var_27_string = "IsDead"; // 0x518 PushS
	var_28_int = 1; // 0x519 PushI
	var_29_bool = IsFuncExist(var_20_object, var_27_string, var_28_int); // 0x51a FuncExist
	if(var_29_bool == 0) goto Label_1314; // 0x51b JumpB
	var_30_bool = 0; var_31_object = Obj(); // 0x51c PushV
	var_31_object = var_20_object; // 0x51d Mov
	func_1292(var_31_object); // 0x51e NEW_2
	if(var_30_bool == 0) goto Label_1314; // 0x520 JumpB
	var_26_bool = 1; // 0x521 MovB
	
Label_1314:
	if(var_26_bool == 0) goto Label_1317; // 0x522 JumpB
	var_19_bool = 0; // 0x523 MovB
	return 4; // 0x524 Return
	
Label_1317:
	GetScene(var_23_object); // 0x525 Func
	var_34_bool = var_23_object == 0; // 0x527 NullEq
	if(var_34_bool == 0) goto Label_1323; // 0x528 JumpB
	var_19_bool = 0; // 0x529 MovB
	return 4; // 0x52a Return
	
Label_1323:
	GetScene(var_24_object); // 0x52b ObjFunc
	var_35_bool = var_23_object != var_24_object; // 0x52d Neq
	if(var_35_bool == 0) goto Label_1329; // 0x52e JumpB
	var_19_bool = 0; // 0x52f MovB
	return 4; // 0x530 Return
	
Label_1329:
	var_19_bool = 1; // 0x531 MovB
	return 4; // 0x532 Return
}


func_1814(var_147_object)
{
	var_148_bool = 0; var_149_bool = 0; // 0x716 PushV
	IsPlayerActor(var_147_object, var_149_bool); // 0x717 Func
	var_150_bool = var_149_bool; // 0x719 Push
	if(var_150_bool == 0) goto Label_1822; // 0x71a JumpB
	var_151_string = "attack"; // 0x71b PushS
	PlayGlobalMusic(var_151_string); // 0x71c Func
	
Label_1822:
	return 2; // 0x71e Return
}


func_285(var_0_object, var_363_object)
{
	var_366_bool = 0; var_367_int = 0; var_368_int = 0; var_369_bool = 0; var_370_int = 0; var_371_int = 0; // 0x11d PushV
	var_0_object = var_363_object; // 0x11e TMov
	var_372_object = Obj(); // 0x11f PushV
	var_372_object = var_0_object; // 0x120 MovT
	func_1814(var_372_object); // 0x121 NEW_2
	CanSee(var_371_int, var_0_object); // 0x123 Func
	var_373_object = var_1_object; // 0x125 PushT
	if(var_373_object == 0) goto Label_308; // 0x126 JumpB
	var_374_bool = 0; var_375_object = Obj(); // 0x127 PushV
	var_375_object = var_0_object; // 0x128 MovT
	func_2233(var_374_bool, var_375_object); // 0x129 NEW_2
	if(var_374_bool == 0) goto Label_306; // 0x12b JumpB
	var_385_object = Obj(); var_386_bool = 0; // 0x12c PushV
	var_385_object = var_0_object; // 0x12d MovT
	var_386_bool = 1; // 0x12e MovB
	func_2166(var_385_object, var_386_bool); // 0x12f NEW_2
	return 6; // 0x131 Return
	
Label_306:
	Face(var_0_object); // 0x132 Func
	
Label_308:
	func_1823(); // 0x135 NEW_2
	var_387_string = "all"; // 0x137 PushS
	var_388_string = "shoot_begin"; // 0x138 PushS
	PlayAnimation(var_387_string, var_388_string); // 0x139 Func
	WaitForAnimEnd(var_369_bool); // 0x13b Func
	var_389_bool = var_369_bool == 0; // 0x13d Not
	if(var_389_bool == 0) goto Label_322; // 0x13e JumpB
	StopAsync(); // 0x13f Func
	return 6; // 0x141 Return
	
Label_322:
	var_390_string = "shot"; // 0x142 PushS
	var_391_cvector = CVector(0.0, 150.0, 0.0); // 0x143 PushVec
	var_392_int = 800; // 0x144 PushI
	var_393_int = 100000; // 0x145 PushI
	PlayGlobalSound(var_390_string, var_391_cvector, var_392_int, var_393_int); // 0x146 Func
	var_394_string = "all"; // 0x148 PushS
	var_395_string = "shoot_end"; // 0x149 PushS
	PlayAnimation(var_394_string, var_395_string); // 0x14a Func
	WaitForAnimEnd(var_369_bool); // 0x14c Func
	var_396_bool = var_369_bool == 0; // 0x14e Not
	if(var_396_bool == 0) goto Label_339; // 0x14f JumpB
	StopAsync(); // 0x150 Func
	return 6; // 0x152 Return
	
Label_339:
	var_397_string = "all"; // 0x153 PushS
	var_398_string = "shoot_end"; // 0x154 PushS
	LockAnimationEnd(var_397_string, var_398_string); // 0x155 Func
	var_370_int = 0; // 0x157 MovI
	var_371_int = 0; // 0x158 MovI
	
Label_345:
	var_399_int = 20; // 0x159 PushI
	var_400_bool = var_371_int < var_399_int; // 0x15a LT
	if(var_400_bool == 0) goto Label_397; // 0x15b JumpB
	var_401_object = Obj(); // 0x15c PushV
	var_401_object = var_0_object; // 0x15d MovT
	func_1814(var_401_object); // 0x15e NEW_2
	var_402_float = 0.5; // 0x160 PushF
	Sleep(var_402_float, var_369_bool); // 0x161 Func
	var_403_bool = var_369_bool == 0; // 0x163 Not
	if(var_403_bool == 0) goto Label_358; // 0x164 JumpB
	return 6; // 0x165 Return
	
Label_358:
	CanSee(var_371_int, var_0_object); // 0x166 Func
	var_404_object = var_1_object; // 0x168 PushT
	if(var_404_object == 0) goto Label_380; // 0x169 JumpB
	var_370_int = 0; // 0x16a MovI
	var_405_bool = 0; var_406_object = Obj(); // 0x16b PushV
	var_406_object = var_0_object; // 0x16c MovT
	func_2233(var_405_bool, var_406_object); // 0x16d NEW_2
	if(var_405_bool == 0) goto Label_377; // 0x16f JumpB
	func_439(); // 0x171 NEW_2
	var_407_object = Obj(); var_408_bool = 0; // 0x173 PushV
	var_407_object = var_0_object; // 0x174 MovT
	var_408_bool = 0; // 0x175 MovB
	func_2166(var_407_object, var_408_bool); // 0x176 NEW_2
	return 6; // 0x178 Return
	
Label_377:
	Face(var_0_object); // 0x179 Func
	goto Label_394; // 0x17b Jump
	
Label_394:
	var_409_int = 1; // 0x18a PushI
	var_371_int = var_371_int + var_409_int; // 0x18b Add2
	goto Label_345; // 0x18c Jump
	
Label_380:
	StopAsync(); // 0x17c Func
	var_410_int = 1; // 0x17e PushI
	var_370_int = var_370_int + var_410_int; // 0x17f Add2
	var_411_int = 4; // 0x180 PushI
	var_412_bool = var_370_int == var_411_int; // 0x181 Eq
	if(var_412_bool == 0) goto Label_394; // 0x182 JumpB
	var_413_string = "all"; // 0x183 PushS
	var_414_string = "attack_off"; // 0x184 PushS
	PlayAnimation(var_413_string, var_414_string); // 0x185 Func
	WaitForAnimEnd(); // 0x187 Func
	return 6; // 0x189 Return
	
Label_397:
	func_439(); // 0x18e NEW_2
	var_415_object = Obj(); var_416_bool = 0; // 0x190 PushV
	var_415_object = var_363_object; // 0x191 Mov
	var_416_bool = 0; // 0x192 MovB
	func_2166(var_415_object, var_416_bool); // 0x193 NEW_2
	return 6; // 0x195 Return
}


func_1823()
{
	var_152_object = Obj(); var_153_object = Obj(); // 0x71f PushV
	GetScene(var_153_object); // 0x720 Func
	var_154_string = "battle"; // 0x722 PushS
	var_155_object = Obj(); // 0x723 PushV
	func_1655(var_155_object); // 0x724 NEW_2
	BroadcastMessage(var_154_string, var_155_object, var_153_object); // 0x726 Func
	return 2; // 0x728 Return
}


func_2343(var_131_object)
{
	var_132_object = Obj(); // 0x928 PushV
	var_132_object = var_131_object; // 0x929 Mov
	func_2388(var_132_object); // 0x92a NEW_2
	return 0; // 0x92c Return
}


func_1834(var_127_int)
{
	var_128_int = 0; var_129_int = 0; // 0x72a PushV
	var_130_string = "branch"; // 0x72b PushS
	GetVariable(var_130_string, var_129_int); // 0x72c Func
	var_127_int = var_129_int; // 0x72e Mov
	return 2; // 0x72f Return
}


func_2349(var_13_bool, var_14_object, var_15_object, var_16_bool)
{
	var_17_bool = 0; var_18_bool = 0; // 0x92d PushV
	var_19_bool = 0; var_20_object = Obj(); var_21_bool = 0; // 0x92e PushV
	var_20_object = var_15_object; // 0x92f Mov
	var_21_bool = !var_16_bool; // 0x930 Not2
	func_2023(var_19_bool, var_20_object, var_21_bool); // 0x931 NEW_2
	if(var_19_bool == 0) goto Label_2373; // 0x933 JumpB
	CanSee(var_18_bool, var_14_object); // 0x934 Func
	var_87_bool = 0; // 0x936 PushV
	var_87_bool = 1; // 0x937 MovB
	var_88_bool = var_18_bool; // 0x938 Push
	if(var_88_bool == 0) goto Label_2370; // 0x939 JumpB
	var_89_float = 0; var_90_object = Obj(); // 0x93a PushV
	var_90_object = var_14_object; // 0x93b Mov
	func_1165(var_90_object); // 0x93c NEW_2
	var_97_float = 490000.0; // 0x93e PushF
	var_98_bool = var_89_float <= var_97_float; // 0x93f LE
	if(var_98_bool == 0) goto Label_2370; // 0x940 JumpB
	var_87_bool = 0; // 0x941 MovB
	
Label_2370:
	if(var_87_bool == 0) goto Label_2373; // 0x942 JumpB
	var_13_bool = 1; // 0x943 MovB
	return 2; // 0x944 Return
	
Label_2373:
	var_13_bool = 0; // 0x945 MovB
	return 2; // 0x946 Return
}


func_1840(var_14_object)
{
	var_15_int = 0; // 0x731 PushV
	func_1834(var_15_int); // 0x732 NEW_2
	var_19_int = 1; // 0x734 PushI
	var_20_bool = var_15_int == var_19_int; // 0x735 Eq
	if(var_20_bool == 0) goto Label_1850; // 0x736 JumpB
	WorkWithCorpse(var_14_object); // 0x737 Func
	goto Label_1852; // 0x739 Jump
	
Label_1852:
	return 0; // 0x73c Return
	
Label_1850:
	Barter(var_14_object); // 0x73a Func
}


func_1333(var_15_bool, var_16_object)
{
	var_17_int = 0; var_18_int = 0; // 0x535 PushV
	var_19_bool = 0; var_20_object = Obj(); // 0x536 PushV
	var_20_object = var_16_object; // 0x537 Mov
	func_1297(var_19_bool, var_20_object); // 0x538 NEW_2
	var_36_bool = var_19_bool == 0; // 0x53a Not
	if(var_36_bool == 0) goto Label_1342; // 0x53b JumpB
	var_15_bool = 0; // 0x53c MovB
	return 2; // 0x53d Return
	
Label_1342:
	var_37_bool = 0; var_38_object = Obj(); var_39_string = ""; // 0x53e PushV
	var_38_object = var_16_object; // 0x53f Mov
	var_39_string = "noaccess"; // 0x540 MovS
	func_1185(var_37_bool, var_38_object, var_39_string); // 0x541 NEW_2
	var_46_bool = var_37_bool == 0; // 0x543 Not
	if(var_46_bool == 0) goto Label_1351; // 0x544 JumpB
	var_15_bool = 1; // 0x545 MovB
	return 2; // 0x546 Return
	
Label_1351:
	var_47_string = "noaccess"; // 0x547 PushS
	GetProperty(var_47_string, var_18_int); // 0x548 ObjFunc
	var_48_int = 0; // 0x54a PushI
	var_15_bool = var_18_int == var_48_int; // 0x54b Eq2
	return 2; // 0x54c Return
}


func_1853(var_76_int, var_77_int)
{
	var_78_int = 0; var_79_bool = 0; var_80_int = 0; var_81_bool = 0; // 0x73d PushV
	var_82_bool = var_76_int > var_77_int; // 0x73e GT
	if(var_82_bool == 0) goto Label_1860; // 0x73f JumpB
	var_83_string = "GenerateMoney: iMin > iMax"; // 0x740 PushS
	Trace(var_83_string); // 0x741 Func
	return 4; // 0x743 Return
	
Label_1860:
	var_80_int = 0; // 0x744 MovI
	var_84_bool = var_76_int != var_77_int; // 0x745 Neq
	if(var_84_bool == 0) goto Label_1867; // 0x746 JumpB
	var_85_int = var_77_int - var_76_int; // 0x747 Sub
	irand(var_80_int, var_85_int); // 0x748 Func
	goto Label_1871; // 0x74a Jump
	
Label_1871:
	var_80_int = var_80_int + var_76_int; // 0x74f Add2
	var_86_int = 0; // 0x750 PushI
	var_87_bool = var_80_int == var_86_int; // 0x751 Eq
	if(var_87_bool == 0) goto Label_1876; // 0x752 JumpB
	return 4; // 0x753 Return
	
Label_1876:
	var_88_int = 0; var_89_string = ""; // 0x754 PushV
	var_89_string = "Money"; // 0x755 MovS
	func_1961(var_88_int, var_89_string); // 0x756 NEW_2
	var_92_int = 0; // 0x758 PushI
	AddItem(var_81_bool, var_88_int, var_92_int, var_80_int); // 0x759 Func
	return 4; // 0x75b Return
	
Label_1867:
	var_93_int = 0; // 0x74b PushI
	var_94_bool = var_76_int == var_93_int; // 0x74c Eq
	if(var_94_bool == 0) goto Label_1871; // 0x74d JumpB
	return 4; // 0x74e Return
}


func_835(var_0_object, var_365_string)
{
	var_366_bool = 0; var_367_bool = 0; // 0x343 PushV
	var_368_string = "cleanup"; // 0x344 PushS
	var_369_bool = var_365_string == var_368_string; // 0x345 Eq
	if(var_369_bool == 0) goto Label_858; // 0x346 JumpB
	var_0_object = 1; // 0x347 TMovB
	IsLoaded(var_367_bool); // 0x348 Func
	var_370_bool = 0; // 0x34a PushV
	var_370_bool = 0; // 0x34b MovB
	var_371_bool = var_367_bool == 0; // 0x34c Not
	if(var_371_bool == 0) goto Label_851; // 0x34d JumpB
	var_372_bool = 0; // 0x34e PushV
	func_879(var_372_bool); // 0x34f NEW_2
	if(var_372_bool == 0) goto Label_851; // 0x351 JumpB
	var_370_bool = 1; // 0x352 MovB
	
Label_851:
	if(var_370_bool == 0) goto Label_857; // 0x353 JumpB
	var_373_object = Obj(); // 0x354 PushV
	func_1655(var_373_object); // 0x355 NEW_2
	RemoveActor(var_373_object); // 0x357 Func
	
Label_857:
	goto Label_862; // 0x359 Jump
	
Label_862:
	return 2; // 0x35e Return
	
Label_858:
	var_374_string = "restore"; // 0x35a PushS
	var_375_bool = var_365_string == var_374_string; // 0x35b Eq
	if(var_375_bool == 0) goto Label_862; // 0x35c JumpB
	var_0_object = 0; // 0x35d TMovB
}


func_1357(var_27_object)
{
	var_28_bool = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; var_35_bool = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = ""; // 0x54d PushV
	var_42_bool = var_27_object == 0; // 0x54e NullEq
	if(var_42_bool == 0) goto Label_1361; // 0x54f JumpB
	return 14; // 0x550 Return
	
Label_1361:
	IsDead(var_35_bool); // 0x551 Func
	var_43_bool = var_35_bool; // 0x553 Push
	if(var_43_bool == 0) goto Label_1366; // 0x554 JumpB
	return 14; // 0x555 Return
	
Label_1366:
	GetSecondaryAnimationType(var_36_int); // 0x556 Func
	var_44_int = 0; // 0x558 PushI
	var_45_bool = var_36_int < var_44_int; // 0x559 LT
	if(var_45_bool == 0) goto Label_1372; // 0x55a JumpB
	return 14; // 0x55b Return
	
Label_1372:
	GetPosition(var_37_cvector); // 0x55c ObjFunc
	GetPosition(var_38_cvector); // 0x55e Func
	GetDirection(var_39_cvector); // 0x560 Func
	var_40_cvector = var_38_cvector - var_37_cvector; // 0x562 Sub2
	var_46_float = GetByIndex(var_40_cvector, 0); // 0x563 PushE
	var_47_float = GetByIndex(var_39_cvector, 0); // 0x564 PushE
	var_48_float = var_46_float * var_47_float; // 0x565 Mult
	var_49_float = GetByIndex(var_40_cvector, 2); // 0x566 PushE
	var_50_float = GetByIndex(var_39_cvector, 2); // 0x567 PushE
	var_51_float = var_49_float * var_50_float; // 0x568 Mult
	var_52_int = var_48_float + var_51_float; // 0x569 Add
	var_53_int = 0; // 0x56a PushI
	var_54_bool = var_52_int >= var_53_int; // 0x56b GE
	if(var_54_bool == 0) goto Label_1391; // 0x56c JumpB
	var_41_string = "fhit"; // 0x56d MovS
	goto Label_1392; // 0x56e Jump
	
Label_1392:
	var_55_string = "hit_react"; // 0x570 PushS
	var_56_string = "1"; // 0x571 PushS
	var_57_int = var_41_string + var_56_string; // 0x572 Add
	var_58_string = "2"; // 0x573 PushS
	var_59_int = var_41_string + var_58_string; // 0x574 Add
	var_60_int = -10; // 0x575 PushI
	FadeSecondaryAnimation(var_55_string, var_57_int, var_59_int, var_60_int); // 0x576 Func
	return 14; // 0x578 Return
	
Label_1391:
	var_41_string = "bhit"; // 0x56f MovS
}


func_2388(var_130_object)
{
	var_131_object = Obj(); // 0x955 PushV
	var_131_object = var_130_object; // 0x956 Mov
	func_2212(var_131_object); // 0x957 NEW_2
	return 0; // 0x959 Return
}


func_2394(var_20_object)
{
	var_21_bool = 0; var_22_string = ""; var_23_string = ""; // 0x95b PushV
	var_22_string = "quest_d11_02"; // 0x95c MovS
	var_23_string = "soldier_dead"; // 0x95d MovS
	func_1802(var_21_bool, var_22_string, var_23_string); // 0x95e NEW_2
	var_27_bool = 0; var_28_object = Obj(); // 0x960 PushV
	var_28_object = var_20_object; // 0x961 Mov
	func_1180(var_27_bool, var_28_object); // 0x962 NEW_2
	if(var_27_bool == 0) goto Label_2410; // 0x964 JumpB
	var_29_bool = 0; var_30_object = Obj(); var_31_float = 0; // 0x965 PushV
	var_30_object = var_20_object; // 0x966 Mov
	var_31_float = 0.03; // 0x967 MovF
	func_1740(var_29_bool, var_30_object, var_31_float); // 0x968 NEW_2
	
Label_2410:
	var_67_object = Obj(); // 0x96a PushV
	var_67_object = var_20_object; // 0x96b Mov
	func_1966(var_67_object); // 0x96c NEW_2
	return 0; // 0x96e Return
}


func_1884(var_133_string)
{
	var_134_object = Obj(); var_135_int = 0; var_136_bool = 0; var_137_object = Obj(); var_138_int = 0; var_139_bool = 0; // 0x75c PushV
	CreateInvItem(var_137_object); // 0x75d Func
	SetItemName(var_133_string); // 0x75f ObjFunc
	var_140_string = "Organ"; // 0x761 PushS
	var_141_int = 1; // 0x762 PushI
	SetProperty(var_140_string, var_141_int); // 0x763 ObjFunc
	GetItemID(var_138_int); // 0x765 ObjFunc
	var_142_int = 0; // 0x767 PushI
	var_143_int = 1; // 0x768 PushI
	AddItem(var_139_bool, var_137_object, var_142_int, var_143_int); // 0x769 Func
	return 6; // 0x76b Return
}


func_1901()
{
	var_127_int = 0; // 0x76d PushV
	func_1834(var_127_int); // 0x76e NEW_2
	var_131_int = 1; // 0x770 PushI
	var_132_bool = var_127_int != var_131_int; // 0x771 Neq
	if(var_132_bool == 0) goto Label_1908; // 0x772 JumpB
	return 0; // 0x773 Return
	
Label_1908:
	var_133_string = ""; // 0x774 PushV
	var_133_string = "liver"; // 0x775 MovS
	func_1884(var_133_string); // 0x776 NEW_2
	var_144_string = ""; // 0x778 PushV
	var_144_string = "kidney"; // 0x779 MovS
	func_1884(var_144_string); // 0x77a NEW_2
	var_145_string = ""; // 0x77c PushV
	var_145_string = "heart"; // 0x77d MovS
	func_1884(var_145_string); // 0x77e NEW_2
	var_146_string = ""; // 0x780 PushV
	var_146_string = "blood"; // 0x781 MovS
	func_1884(var_146_string); // 0x782 NEW_2
	return 0; // 0x784 Return
}


func_879(var_12_bool)
{
	var_12_bool = 1; // 0x36f MovB
	return 0; // 0x370 Return
}


func_881(var_13_object)
{
	func_2159(); // 0x373 NEW_2
	var_24_object = Obj(); // 0x375 PushV
	var_24_object = var_13_object; // 0x376 Mov
	func_933(); // 0x377 NEW_2
	
Label_889:
	func_894(); // 0x37a NEW_2
	goto Label_889; // 0x37c Jump
}


func_1401(var_14_object, var_15_int, var_16_float)
{
	var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_int = 0; var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_int = 0; var_24_int = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_int = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); // 0x579 PushV
	var_35_bool = 0; // 0x57a PushV
	var_35_bool = 0; // 0x57b MovB
	var_36_bool = 0; // 0x57c PushV
	var_36_bool = 0; // 0x57d MovB
	var_37_object = var_14_object; // 0x57e Push
	if(var_37_object == 0) goto Label_1412; // 0x57f JumpB
	var_38_int = 4; // 0x580 PushI
	var_39_bool = var_15_int != var_38_int; // 0x581 Neq
	if(var_39_bool == 0) goto Label_1412; // 0x582 JumpB
	var_36_bool = 1; // 0x583 MovB
	
Label_1412:
	if(var_36_bool == 0) goto Label_1417; // 0x584 JumpB
	var_40_int = 5; // 0x585 PushI
	var_41_bool = var_15_int != var_40_int; // 0x586 Neq
	if(var_41_bool == 0) goto Label_1417; // 0x587 JumpB
	var_35_bool = 1; // 0x588 MovB
	
Label_1417:
	if(var_35_bool == 0) goto Label_1464; // 0x589 JumpB
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x58a PushV
	var_44_cvector = CVector(0,0,0); var_45_object = Obj(); // 0x58b PushV
	var_45_object = var_14_object; // 0x58c Mov
	func_1158(var_45_object); // 0x58d NEW_2
	var_43_cvector = var_44_cvector; // 0x58e Mov
	func_1661(var_42_cvector, var_43_cvector); // 0x590 NEW_2
	var_26_cvector = var_42_cvector; // 0x591 Mov
	CreateVectorVector(var_27_object); // 0x593 Func
	var_28_int = 1; // 0x595 MovI
	
Label_1430:
	var_55_string = "hit"; // 0x596 PushS
	var_56_int = var_55_string + var_28_int; // 0x597 Add
	GetGeometryLocator(var_56_int, var_29_bool, var_30_cvector, var_31_cvector); // 0x598 Func
	var_57_bool = var_29_bool == 0; // 0x59a Not
	if(var_57_bool == 0) goto Label_1437; // 0x59b JumpB
	goto Label_1446; // 0x59c Jump
	
Label_1446:
	size(var_32_int); // 0x5a6 ObjFunc
	var_58_int = var_32_int; // 0x5a8 Push
	if(var_58_int == 0) goto Label_1463; // 0x5a9 JumpB
	irand(var_33_int, var_32_int); // 0x5aa Func
	get(var_34_cvector, var_33_int); // 0x5ac ObjFunc
	var_59_object = Obj(); var_60_int = 0; var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x5ae PushV
	var_59_object = var_14_object; // 0x5af Mov
	var_60_int = var_15_int; // 0x5b0 Mov
	var_61_float = var_16_float; // 0x5b1 Mov
	var_62_cvector = var_34_cvector; // 0x5b2 Mov
	var_63_cvector = -var_26_cvector; // 0x5b3 Neg2
	func_1469(var_61_float, var_62_cvector, var_63_cvector); // 0x5b4 NEW_2
	return 18; // 0x5b6 Return
	
Label_1463:
	var_27_object = 0; // 0x5b7 SetNull
	
Label_1464:
	var_104_object = Obj(); // 0x5b8 PushV
	var_104_object = var_14_object; // 0x5b9 Mov
	func_1357(var_104_object); // 0x5ba NEW_2
	return 18; // 0x5bc Return
	
Label_1437:
	var_105_int = var_31_cvector | var_26_cvector; // 0x59d Or
	var_106_float = 0.70711; // 0x59e PushF
	var_107_bool = var_105_int >= var_106_float; // 0x59f GE
	if(var_107_bool == 0) goto Label_1443; // 0x5a0 JumpB
	add(var_30_cvector); // 0x5a1 ObjFunc
	
Label_1443:
	var_108_int = 1; // 0x5a3 PushI
	var_28_int = var_28_int + var_108_int; // 0x5a4 Add2
	goto Label_1430; // 0x5a5 Jump
}


func_894()
{
	func_2159(); // 0x37f NEW_2
	
Label_897:
	func_980(var_19_cvector, var_13_object); // 0x382 NEW_2
	goto Label_897; // 0x384 Jump
}


func_1925()
{
	var_71_int = 0; var_72_bool = 0; var_73_int = 0; var_74_bool = 0; // 0x785 PushV
	var_75_int = 0; // 0x786 PushI
	ClearSubContainer(var_75_int); // 0x787 Func
	var_76_int = 0; var_77_int = 0; // 0x789 PushV
	var_76_int = 500; // 0x78a MovI
	var_77_int = 1000; // 0x78b MovI
	func_1853(var_76_int, var_77_int); // 0x78c NEW_2
	var_95_string = ""; var_96_int = 0; var_97_int = 0; var_98_int = 0; // 0x78e PushV
	var_95_string = "rifle_ammo"; // 0x78f MovS
	var_96_int = 1; // 0x790 MovI
	var_97_int = 3; // 0x791 MovI
	var_98_int = 3; // 0x792 MovI
	func_1512(var_95_string, var_96_int, var_97_int, var_98_int); // 0x793 NEW_2
	var_111_string = ""; var_112_int = 0; var_113_int = 0; var_114_int = 0; // 0x795 PushV
	var_111_string = "rusk"; // 0x796 MovS
	var_112_int = 1; // 0x797 MovI
	var_113_int = 3; // 0x798 MovI
	var_114_int = 2; // 0x799 MovI
	func_1512(var_111_string, var_112_int, var_113_int, var_114_int); // 0x79a NEW_2
	var_115_string = ""; var_116_int = 0; var_117_int = 0; // 0x79c PushV
	var_115_string = "bandage"; // 0x79d MovS
	var_116_int = 1; // 0x79e MovI
	var_117_int = 6; // 0x79f MovI
	func_1501(var_115_string, var_116_int, var_117_int); // 0x7a0 NEW_2
	var_124_string = ""; var_125_int = 0; var_126_int = 0; // 0x7a2 PushV
	var_124_string = "tourniquet"; // 0x7a3 MovS
	var_125_int = 1; // 0x7a4 MovI
	var_126_int = 6; // 0x7a5 MovI
	func_1501(var_124_string, var_125_int, var_126_int); // 0x7a6 NEW_2
	return 4; // 0x7a8 Return
}


func_902()
{
	return 0; // 0x386 Return
}


func_1961(var_88_int, var_89_string)
{
	var_90_int = 0; var_91_int = 0; // 0x7a9 PushV
	GetInvItemByName(var_91_int, var_89_string); // 0x7aa Func
	var_88_int = var_91_int; // 0x7ac Mov
	return 2; // 0x7ad Return
}


func_1966(var_67_object)
{
	var_68_object = Obj(); // 0x7af PushV
	var_68_object = var_67_object; // 0x7b0 Mov
	TaskCall(0); // 0x7b1 TaskCall
	func_0(var_68_object); // 0x7b2 NEW_2
	TaskReturn(); // 0x7b3 TaskReturn
	return 0; // 0x7b5 Return
}


func_439()
{
	StopAsync(); // 0x1b7 Func
	StopGroup0(); // 0x1b9 Func
	Stop(); // 0x1bb Func
	return 0; // 0x1bd Return
}


func_1469(var_16_object, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); // 0x5bd PushV
	GetScene(var_23_object); // 0x5be Func
	var_25_string = "scripted"; // 0x5c0 PushS
	var_26_string = "blood_dir.xml"; // 0x5c1 PushS
	AddActorByType(var_24_object, var_25_string, var_23_object, var_19_cvector, var_20_cvector, var_26_string); // 0x5c2 Func
	var_27_object = Obj(); // 0x5c4 PushV
	var_27_object = var_16_object; // 0x5c5 Mov
	func_1357(var_27_object); // 0x5c6 NEW_2
	return 4; // 0x5c8 Return
}


func_455(var_0_object, var_1_object, var_2_bool, var_138_object, var_139_bool)
{
	var_143_bool = 0; var_144_bool = 0; var_145_bool = 0; var_146_bool = 0; // 0x1c7 PushV
	var_0_object = var_138_object; // 0x1c8 TMov
	var_147_object = Obj(); // 0x1c9 PushV
	var_147_object = var_0_object; // 0x1ca MovT
	func_1814(var_147_object); // 0x1cb NEW_2
	func_1823(); // 0x1ce NEW_2
	Face(var_0_object); // 0x1d0 Func
	var_158_bool = var_139_bool; // 0x1d2 Push
	if(var_158_bool == 0) goto Label_474; // 0x1d3 JumpB
	var_159_string = "all"; // 0x1d4 PushS
	var_160_string = "attack_on"; // 0x1d5 PushS
	PlayAnimation(var_159_string, var_160_string); // 0x1d6 Func
	WaitForAnimEnd(); // 0x1d8 Func
	
Label_474:
	var_161_string = "all"; // 0x1da PushS
	var_162_string = "attack_on"; // 0x1db PushS
	LockAnimationEnd(var_161_string, var_162_string); // 0x1dc Func
	var_163_bool = 1; // 0x1de PushB
	SetAttackState(var_163_bool); // 0x1df Func
	
Label_481:
	var_164_bool = 0; var_165_object = Obj(); // 0x1e1 PushV
	var_165_object = var_0_object; // 0x1e2 MovT
	func_1333(var_164_bool, var_165_object); // 0x1e3 NEW_2
	if(var_164_bool == 0) goto Label_587; // 0x1e5 JumpB
	CanSee(var_146_bool, var_0_object); // 0x1e6 Func
	var_166_bool = var_146_bool; // 0x1e8 Push
	if(var_166_bool == 0) goto Label_498; // 0x1e9 JumpB
	var_167_object = Obj(); // 0x1ea PushV
	var_167_object = var_0_object; // 0x1eb MovT
	func_1814(var_167_object); // 0x1ec NEW_2
	func_635(var_146_bool); // 0x1ef NEW_2
	goto Label_577; // 0x1f1 Jump
	
Label_577:
	var_328_bool = var_1_object != 0; // 0x241 NullNeq
	if(var_328_bool == 0) goto Label_583; // 0x242 JumpB
	func_630(var_145_bool, var_146_bool); // 0x244 NEW_2
	goto Label_586; // 0x246 Jump
	
Label_586:
	goto Label_481; // 0x24a Jump
	
Label_583:
	var_329_int = 2; // 0x247 PushI
	Sleep(var_329_int); // 0x248 Func
	
Label_498:
	var_330_object = Obj(); // 0x1f2 PushV
	var_330_object = var_0_object; // 0x1f3 MovT
	func_1483(); // 0x1f4 NEW_2
	var_2_bool = 1; // 0x1f6 TMovB
	var_339_string = "all"; // 0x1f7 PushS
	var_340_string = "hunt"; // 0x1f8 PushS
	PlayAnimation(var_339_string, var_340_string); // 0x1f9 Func
	WaitForAnimEnd(var_145_bool); // 0x1fb Func
	var_341_bool = var_145_bool == 0; // 0x1fd Not
	if(var_341_bool == 0) goto Label_521; // 0x1fe JumpB
	var_342_bool = var_1_object != 0; // 0x1ff NullNeq
	if(var_342_bool == 0) goto Label_516; // 0x200 JumpB
	func_630(var_145_bool, var_146_bool); // 0x202 NEW_2
	
Label_516:
	var_343_string = "all"; // 0x204 PushS
	var_344_string = "attack_on"; // 0x205 PushS
	LockAnimationEnd(var_343_string, var_344_string); // 0x206 Func
	goto Label_481; // 0x208 Jump
	
Label_521:
	var_345_bool = 0; var_346_object = Obj(); // 0x209 PushV
	var_346_object = var_0_object; // 0x20a MovT
	func_1333(var_345_bool, var_346_object); // 0x20b NEW_2
	var_347_bool = var_345_bool == 0; // 0x20d Not
	if(var_347_bool == 0) goto Label_528; // 0x20e JumpB
	goto Label_587; // 0x20f Jump
	
Label_587:
	var_348_bool = 0; // 0x24b PushB
	SetAttackState(var_348_bool); // 0x24c Func
	StopAsync(); // 0x24e Func
	var_349_string = "all"; // 0x250 PushS
	var_350_string = "attack_off"; // 0x251 PushS
	PlayAnimation(var_349_string, var_350_string); // 0x252 Func
	WaitForAnimEnd(); // 0x254 Func
	return 4; // 0x256 Return
	
Label_528:
	CanSee(var_146_bool, var_0_object); // 0x210 Func
	var_351_bool = var_146_bool; // 0x212 Push
	if(var_351_bool == 0) goto Label_539; // 0x213 JumpB
	var_2_bool = 0; // 0x214 TMovB
	Face(var_0_object); // 0x215 Func
	func_635(var_146_bool); // 0x218 NEW_2
	goto Label_577; // 0x21a Jump
	
Label_539:
	var_352_string = "all"; // 0x21b PushS
	var_353_string = "attack_on"; // 0x21c PushS
	LockAnimationEnd(var_352_string, var_353_string); // 0x21d Func
	var_354_int = 3; // 0x21f PushI
	Sleep(var_354_int, var_145_bool); // 0x220 Func
	var_355_bool = var_145_bool == 0; // 0x222 Not
	if(var_355_bool == 0) goto Label_558; // 0x223 JumpB
	var_356_bool = var_1_object != 0; // 0x224 NullNeq
	if(var_356_bool == 0) goto Label_553; // 0x225 JumpB
	func_630(var_145_bool, var_146_bool); // 0x227 NEW_2
	
Label_553:
	var_357_string = "all"; // 0x229 PushS
	var_358_string = "attack_on"; // 0x22a PushS
	LockAnimationEnd(var_357_string, var_358_string); // 0x22b Func
	goto Label_481; // 0x22d Jump
	
Label_558:
	var_359_bool = 0; var_360_object = Obj(); // 0x22e PushV
	var_360_object = var_0_object; // 0x22f MovT
	func_1333(var_359_bool, var_360_object); // 0x230 NEW_2
	var_361_bool = var_359_bool == 0; // 0x232 Not
	if(var_361_bool == 0) goto Label_565; // 0x233 JumpB
	goto Label_587; // 0x234 Jump
	
Label_565:
	var_2_bool = 0; // 0x235 TMovB
	CanSee(var_146_bool, var_0_object); // 0x236 Func
	var_362_bool = var_146_bool; // 0x238 Push
	if(var_362_bool == 0) goto Label_576; // 0x239 JumpB
	Face(var_0_object); // 0x23a Func
	func_635(var_146_bool); // 0x23d NEW_2
	goto Label_577; // 0x23f Jump
	
Label_576:
	goto Label_587; // 0x240 Jump
}


func_1483()
{
	var_331_cvector = CVector(0,0,0); var_332_cvector = CVector(0,0,0); var_333_cvector = CVector(0,0,0); var_334_cvector = CVector(0,0,0); var_335_cvector = CVector(0,0,0); var_336_cvector = CVector(0,0,0); // 0x5cb PushV
	GetPosition(var_334_cvector); // 0x5cc ObjFunc
	GetPosition(var_335_cvector); // 0x5ce Func
	var_336_cvector = var_334_cvector - var_335_cvector; // 0x5d0 Sub2
	var_337_float = GetByIndex(var_336_cvector, 0); // 0x5d1 PushE
	var_338_float = GetByIndex(var_336_cvector, 2); // 0x5d2 PushE
	RotateAsync(var_337_float, var_338_float); // 0x5d3 Func
	return 6; // 0x5d5 Return
}


func_980(var_0_object, var_1_object)
{
	var_302_int = 0; var_303_bool = 0; var_304_cvector = CVector(0,0,0); var_305_object = Obj(); var_306_int = 0; var_307_bool = 0; var_308_cvector = CVector(0,0,0); var_309_object = Obj(); // 0x3d4 PushV
	GetPFPosition(var_309_object); // 0x3d5 Func
	GetDirection(var_0_object); // 0x3d7 Func
	
Label_985:
	func_1069(); // 0x3da NEW_2
	var_310_int = 10; // 0x3dc PushI
	irand(var_306_int, var_310_int); // 0x3dd Func
	var_311_int = 5; // 0x3df PushI
	var_312_int = var_306_int + var_311_int; // 0x3e0 Add
	Sleep(var_312_int, var_307_bool); // 0x3e1 Func
	var_313_bool = var_307_bool; // 0x3e3 Push
	if(var_313_bool == 0) goto Label_1001; // 0x3e4 JumpB
	func_902(); // 0x3e6 NEW_2
	goto Label_1062; // 0x3e8 Jump
	
Label_1062:
	goto Label_985; // 0x426 Jump
	
Label_1001:
	func_1069(); // 0x3ea NEW_2
	GetPFPosition(var_308_cvector); // 0x3ec Func
	var_314_float = 0; var_315_cvector = CVector(0,0,0); var_316_cvector = CVector(0,0,0); // 0x3ee PushV
	var_315_cvector = var_1_object; // 0x3ef MovT
	var_316_cvector = var_308_cvector; // 0x3f0 Mov
	func_1671(var_314_float, var_315_cvector, var_316_cvector); // 0x3f1 NEW_2
	var_319_int = 40000; // 0x3f3 PushI
	var_320_bool = var_314_float > var_319_int; // 0x3f4 GT
	if(var_320_bool == 0) goto Label_1048; // 0x3f5 JumpB
	FindPathTo(var_309_object, var_309_object); // 0x3f6 Func
	var_321_bool = var_309_object != 0; // 0x3f8 NullNeq
	if(var_321_bool == 0) goto Label_1043; // 0x3f9 JumpB
	RotatePath(var_309_object, var_307_bool); // 0x3fa Func
	var_322_bool = var_307_bool == 0; // 0x3fc Not
	if(var_322_bool == 0) goto Label_1023; // 0x3fd JumpB
	goto Label_1061; // 0x3fe Jump
	
Label_1061:
	goto Label_1001; // 0x425 Jump
	
Label_1023:
	var_323_bool = 0; // 0x3ff PushB
	FollowPath(var_309_object, var_323_bool, var_307_bool); // 0x400 Func
	var_324_bool = var_307_bool == 0; // 0x402 Not
	if(var_324_bool == 0) goto Label_1029; // 0x403 JumpB
	goto Label_1061; // 0x404 Jump
	
Label_1029:
	var_325_float = GetByIndex(var_0_object, 0); // 0x405 PushE
	var_326_float = GetByIndex(var_0_object, 2); // 0x406 PushE
	Rotate(var_325_float, var_326_float, var_307_bool); // 0x407 Func
	var_327_bool = var_307_bool == 0; // 0x409 Not
	if(var_327_bool == 0) goto Label_1036; // 0x40a JumpB
	goto Label_1061; // 0x40b Jump
	
Label_1036:
	WaitForAnimEnd(var_307_bool); // 0x40c Func
	var_328_bool = var_307_bool == 0; // 0x40e Not
	if(var_328_bool == 0) goto Label_1041; // 0x40f JumpB
	goto Label_1061; // 0x410 Jump
	
Label_1041:
	goto Label_1062; // 0x411 Jump
	
Label_1043:
	var_329_int = 1; // 0x413 PushI
	Sleep(var_329_int); // 0x414 Func
	var_309_object = 0; // 0x416 SetNull
	goto Label_1061; // 0x417 Jump
	
Label_1048:
	var_330_float = GetByIndex(var_0_object, 0); // 0x418 PushE
	var_331_float = GetByIndex(var_0_object, 2); // 0x419 PushE
	Rotate(var_330_float, var_331_float, var_307_bool); // 0x41a Func
	var_332_bool = var_307_bool == 0; // 0x41c Not
	if(var_332_bool == 0) goto Label_1055; // 0x41d JumpB
	goto Label_1061; // 0x41e Jump
	
Label_1055:
	WaitForAnimEnd(var_307_bool); // 0x41f Func
	var_333_bool = var_307_bool == 0; // 0x421 Not
	if(var_333_bool == 0) goto Label_1060; // 0x422 JumpB
	goto Label_1061; // 0x423 Jump
	
Label_1060:
	goto Label_1062; // 0x424 Jump
}


func_1494(var_245_float)
{
	var_247_float = 0; var_248_float = 0; var_249_float = 0; var_250_float = 0; // 0x5d6 PushV
	GetEyesHeight(var_249_float); // 0x5d7 Func
	GetEyesHeight(var_250_float); // 0x5d9 ObjFunc
	var_245_float = var_250_float - var_249_float; // 0x5db Sub2
	return 4; // 0x5dc Return
}


func_1501(var_115_string, var_116_int, var_117_int)
{
	var_118_bool = 0; var_119_bool = 0; // 0x5dd PushV
	var_120_bool = 0; var_121_int = 0; var_122_int = 0; // 0x5de PushV
	var_121_int = var_116_int; // 0x5df Mov
	var_122_int = var_117_int; // 0x5e0 Mov
	func_1693(var_120_bool, var_121_int, var_122_int); // 0x5e1 NEW_2
	if(var_120_bool == 0) goto Label_1511; // 0x5e3 JumpB
	var_123_int = 0; // 0x5e4 PushI
	AddItem(var_119_bool, var_115_string, var_123_int); // 0x5e5 Func
	
Label_1511:
	return 2; // 0x5e7 Return
}


func_2023(var_19_bool, var_20_object, var_21_bool)
{
	var_22_string = ""; var_23_string = ""; // 0x7e7 PushV
	var_24_bool = 0; var_25_object = Obj(); var_26_string = ""; // 0x7e8 PushV
	var_25_object = var_20_object; // 0x7e9 Mov
	var_26_string = "class"; // 0x7ea MovS
	func_1185(var_24_bool, var_25_object, var_26_string); // 0x7eb NEW_2
	var_33_bool = var_24_bool == 0; // 0x7ed Not
	if(var_33_bool == 0) goto Label_2033; // 0x7ee JumpB
	var_19_bool = 0; // 0x7ef MovB
	return 2; // 0x7f0 Return
	
Label_2033:
	var_34_string = "class"; // 0x7f1 PushS
	GetProperty(var_34_string, var_23_string); // 0x7f2 ObjFunc
	var_35_bool = 0; // 0x7f4 PushV
	var_35_bool = 1; // 0x7f5 MovB
	var_36_bool = 0; // 0x7f6 PushV
	var_36_bool = 1; // 0x7f7 MovB
	var_37_bool = 0; // 0x7f8 PushV
	var_37_bool = 1; // 0x7f9 MovB
	var_38_bool = 0; // 0x7fa PushV
	var_38_bool = 1; // 0x7fb MovB
	var_39_bool = 0; // 0x7fc PushV
	var_39_bool = 1; // 0x7fd MovB
	var_40_bool = 0; // 0x7fe PushV
	var_40_bool = 1; // 0x7ff MovB
	var_41_bool = 0; // 0x800 PushV
	var_41_bool = 1; // 0x801 MovB
	var_42_bool = 0; // 0x802 PushV
	var_42_bool = 1; // 0x803 MovB
	var_43_bool = 0; // 0x804 PushV
	var_43_bool = 1; // 0x805 MovB
	var_44_bool = 0; // 0x806 PushV
	var_44_bool = 1; // 0x807 MovB
	var_45_string = "patrol"; // 0x808 PushS
	var_46_bool = var_23_string == var_45_string; // 0x809 Eq
	if(var_46_bool == 0) goto Label_2063; // 0x80a JumpB
	var_47_string = "sanitar"; // 0x80b PushS
	var_48_bool = var_23_string == var_47_string; // 0x80c Eq
	if(var_48_bool == 0) goto Label_2063; // 0x80d JumpB
	var_44_bool = 0; // 0x80e MovB
	
Label_2063:
	if(var_44_bool == 0) goto Label_2068; // 0x80f JumpB
	var_49_string = "soldier"; // 0x810 PushS
	var_50_bool = var_23_string == var_49_string; // 0x811 Eq
	if(var_50_bool == 0) goto Label_2068; // 0x812 JumpB
	var_43_bool = 0; // 0x813 MovB
	
Label_2068:
	if(var_43_bool == 0) goto Label_2073; // 0x814 JumpB
	var_51_string = "woman"; // 0x815 PushS
	var_52_bool = var_23_string == var_51_string; // 0x816 Eq
	if(var_52_bool == 0) goto Label_2073; // 0x817 JumpB
	var_42_bool = 0; // 0x818 MovB
	
Label_2073:
	if(var_42_bool == 0) goto Label_2078; // 0x819 JumpB
	var_53_string = "wasted_girl"; // 0x81a PushS
	var_54_bool = var_23_string == var_53_string; // 0x81b Eq
	if(var_54_bool == 0) goto Label_2078; // 0x81c JumpB
	var_41_bool = 0; // 0x81d MovB
	
Label_2078:
	if(var_41_bool == 0) goto Label_2083; // 0x81e JumpB
	var_55_string = "vaxxabitka"; // 0x81f PushS
	var_56_bool = var_23_string == var_55_string; // 0x820 Eq
	if(var_56_bool == 0) goto Label_2083; // 0x821 JumpB
	var_40_bool = 0; // 0x822 MovB
	
Label_2083:
	if(var_40_bool == 0) goto Label_2088; // 0x823 JumpB
	var_57_string = "vaxxabit"; // 0x824 PushS
	var_58_bool = var_23_string == var_57_string; // 0x825 Eq
	if(var_58_bool == 0) goto Label_2088; // 0x826 JumpB
	var_39_bool = 0; // 0x827 MovB
	
Label_2088:
	if(var_39_bool == 0) goto Label_2093; // 0x828 JumpB
	var_59_string = "little_girl"; // 0x829 PushS
	var_60_bool = var_23_string == var_59_string; // 0x82a Eq
	if(var_60_bool == 0) goto Label_2093; // 0x82b JumpB
	var_38_bool = 0; // 0x82c MovB
	
Label_2093:
	if(var_38_bool == 0) goto Label_2098; // 0x82d JumpB
	var_61_string = "girl"; // 0x82e PushS
	var_62_bool = var_23_string == var_61_string; // 0x82f Eq
	if(var_62_bool == 0) goto Label_2098; // 0x830 JumpB
	var_37_bool = 0; // 0x831 MovB
	
Label_2098:
	if(var_37_bool == 0) goto Label_2103; // 0x832 JumpB
	var_63_string = "dohodyaga"; // 0x833 PushS
	var_64_bool = var_23_string == var_63_string; // 0x834 Eq
	if(var_64_bool == 0) goto Label_2103; // 0x835 JumpB
	var_36_bool = 0; // 0x836 MovB
	
Label_2103:
	if(var_36_bool == 0) goto Label_2108; // 0x837 JumpB
	var_65_string = "nudegirl"; // 0x838 PushS
	var_66_bool = var_23_string == var_65_string; // 0x839 Eq
	if(var_66_bool == 0) goto Label_2108; // 0x83a JumpB
	var_35_bool = 0; // 0x83b MovB
	
Label_2108:
	if(var_35_bool == 0) goto Label_2111; // 0x83c JumpB
	var_19_bool = 1; // 0x83d MovB
	return 2; // 0x83e Return
	
Label_2111:
	var_67_bool = var_21_bool; // 0x83f Push
	if(var_67_bool == 0) goto Label_2115; // 0x840 JumpB
	var_19_bool = 0; // 0x841 MovB
	return 2; // 0x842 Return
	
Label_2115:
	var_19_bool = 1; // 0x843 MovB
	var_68_bool = 0; // 0x844 PushV
	var_68_bool = 1; // 0x845 MovB
	var_69_bool = 0; // 0x846 PushV
	var_69_bool = 1; // 0x847 MovB
	var_70_bool = 0; // 0x848 PushV
	var_70_bool = 1; // 0x849 MovB
	var_71_bool = 0; // 0x84a PushV
	var_71_bool = 1; // 0x84b MovB
	var_72_bool = 0; // 0x84c PushV
	var_72_bool = 1; // 0x84d MovB
	var_73_string = "worker"; // 0x84e PushS
	var_74_bool = var_23_string == var_73_string; // 0x84f Eq
	if(var_74_bool == 0) goto Label_2133; // 0x850 JumpB
	var_75_string = "butcher"; // 0x851 PushS
	var_76_bool = var_23_string == var_75_string; // 0x852 Eq
	if(var_76_bool == 0) goto Label_2133; // 0x853 JumpB
	var_72_bool = 0; // 0x854 MovB
	
Label_2133:
	if(var_72_bool == 0) goto Label_2138; // 0x855 JumpB
	var_77_string = "boy"; // 0x856 PushS
	var_78_bool = var_23_string == var_77_string; // 0x857 Eq
	if(var_78_bool == 0) goto Label_2138; // 0x858 JumpB
	var_71_bool = 0; // 0x859 MovB
	
Label_2138:
	if(var_71_bool == 0) goto Label_2143; // 0x85a JumpB
	var_79_string = "unosha"; // 0x85b PushS
	var_80_bool = var_23_string == var_79_string; // 0x85c Eq
	if(var_80_bool == 0) goto Label_2143; // 0x85d JumpB
	var_70_bool = 0; // 0x85e MovB
	
Label_2143:
	if(var_70_bool == 0) goto Label_2148; // 0x85f JumpB
	var_81_string = "wasted_male"; // 0x860 PushS
	var_82_bool = var_23_string == var_81_string; // 0x861 Eq
	if(var_82_bool == 0) goto Label_2148; // 0x862 JumpB
	var_69_bool = 0; // 0x863 MovB
	
Label_2148:
	if(var_69_bool == 0) goto Label_2153; // 0x864 JumpB
	var_83_string = "alkash"; // 0x865 PushS
	var_84_bool = var_23_string == var_83_string; // 0x866 Eq
	if(var_84_bool == 0) goto Label_2153; // 0x867 JumpB
	var_68_bool = 0; // 0x868 MovB
	
Label_2153:
	if(var_68_bool == 0) goto Label_2158; // 0x869 JumpB
	var_85_string = "morlok"; // 0x86a PushS
	var_86_bool = var_23_string == var_85_string; // 0x86b Eq
	if(var_86_bool == 0) goto Label_2158; // 0x86c JumpB
	var_19_bool = 0; // 0x86d MovB
	
Label_2158:
	return 2; // 0x86e Return
}


func_1512(var_95_string, var_96_int, var_97_int, var_98_int)
{
	var_99_int = 0; var_100_bool = 0; var_101_int = 0; var_102_bool = 0; // 0x5e8 PushV
	var_103_bool = 0; var_104_int = 0; var_105_int = 0; // 0x5e9 PushV
	var_104_int = var_96_int; // 0x5ea Mov
	var_105_int = var_97_int; // 0x5eb Mov
	func_1693(var_103_bool, var_104_int, var_105_int); // 0x5ec NEW_2
	if(var_103_bool == 0) goto Label_1526; // 0x5ee JumpB
	irand(var_101_int, var_98_int); // 0x5ef Func
	var_108_int = 0; // 0x5f1 PushI
	var_109_int = 1; // 0x5f2 PushI
	var_110_int = var_101_int + var_109_int; // 0x5f3 Add
	AddItem(var_102_bool, var_95_string, var_108_int, var_110_int); // 0x5f4 Func
	
Label_1526:
	return 4; // 0x5f6 Return
}


func_1527(var_171_string)
{
	var_172_bool = 0; var_173_int = 0; var_174_bool = 0; var_175_int = 0; var_176_bool = 0; var_177_float = 0; var_178_cvector = CVector(0,0,0); var_179_cvector = CVector(0,0,0); var_180_bool = 0; var_181_int = 0; var_182_bool = 0; var_183_int = 0; var_184_bool = 0; var_185_float = 0; var_186_cvector = CVector(0,0,0); var_187_cvector = CVector(0,0,0); // 0x5f7 PushV
	IsExisting3DSound(var_180_bool, var_171_string); // 0x5f8 Func
	var_188_bool = var_180_bool == 0; // 0x5fa Not
	if(var_188_bool == 0) goto Label_1552; // 0x5fb JumpB
	var_181_int = 0; // 0x5fc MovI
	
Label_1533:
	var_189_int = 1; // 0x5fd PushI
	var_190_int = var_181_int + var_189_int; // 0x5fe Add
	var_191_int = var_171_string + var_190_int; // 0x5ff Add
	IsExisting3DSound(var_182_bool, var_191_int); // 0x600 Func
	var_192_bool = var_182_bool == 0; // 0x602 Not
	if(var_192_bool == 0) goto Label_1541; // 0x603 JumpB
	goto Label_1544; // 0x604 Jump
	
Label_1544:
	var_193_bool = var_181_int == 0; // 0x608 Not
	if(var_193_bool == 0) goto Label_1547; // 0x609 JumpB
	return 16; // 0x60a Return
	
Label_1547:
	irand(var_183_int, var_181_int); // 0x60b Func
	var_194_int = 1; // 0x60d PushI
	var_195_int = var_183_int + var_194_int; // 0x60e Add
	var_171_string = var_171_string + var_195_int; // 0x60f Add2
	
Label_1552:
	Is3DSoundLoaded(var_184_bool, var_171_string); // 0x610 Func
	var_196_bool = var_184_bool; // 0x612 Push
	if(var_196_bool == 0) goto Label_1567; // 0x613 JumpB
	GetEyesHeight(var_185_float); // 0x614 Func
	GetDirection(var_186_cvector); // 0x616 Func
	var_197_int = 50; // 0x618 PushI
	var_187_cvector = var_186_cvector * var_197_int; // 0x619 Mult2
	var_198_float = GetByIndex(var_187_cvector, 1); // 0x61a PushE
	var_198_float = var_198_float + var_185_float; // 0x61b Add2
	SetByIndex(var_187_cvector, 1) = var_198_float; // 0x61c PopE
	PlayGlobalSound(var_171_string, var_187_cvector); // 0x61d Func
	
Label_1567:
	return 16; // 0x61f Return
	
Label_1541:
	var_199_int = 1; // 0x605 PushI
	var_181_int = var_181_int + var_199_int; // 0x606 Add2
	goto Label_1533; // 0x607 Jump
}


