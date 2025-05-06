task_0_event_0(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	var_11_bool = 0; var_12_bool = 0; // 0x18 PushV
	IsOverrideActive(var_12_bool); // 0x19 Func
	var_13_bool = var_12_bool == 0; // 0x1b Not
	if(var_13_bool == 0) goto Label_31; // 0x1c JumpB
	WorkWithCorpse(var_10_bool); // 0x1d Func
	
Label_31:
	return 2; // 0x1f Return
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_bool, var_10_bool, var_11_cvector, var_12_cvector, var_13_bool)
{
	return 0; // 0x8e Return
}


task_0_event_16(var_0_object, var_1_string, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool)
{
	return 0; // 0x90 Return
}


task_0_event_41(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	return 0; // 0x92 Return
}


task_1_event_41(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	func_171(); // 0xb5 Call
	var_12_object = Obj(); // 0xb7 PushV
	var_12_object = var_10_bool; // 0xb8 Mov
	func_1492(); // 0xb9 Call
	return 0; // 0xbb Return
}


task_1_event_3(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	var_11_bool = var_10_bool == var_0_object; // 0xbd Eq
	if(var_11_bool == 0) goto Label_196; // 0xbe JumpB
	var_12_int = 100; // 0xbf PushI
	KillTimer(var_12_int); // 0xc0 Func
	Face(var_0_object); // 0xc2 Func
	
Label_196:
	return 0; // 0xc4 Return
}


task_1_event_4(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	var_11_bool = var_10_bool == var_0_object; // 0xc6 Eq
	if(var_11_bool == 0) goto Label_208; // 0xc7 JumpB
	var_12_int = 100; // 0xc8 PushI
	var_13_float = 3.0; // 0xc9 PushF
	SetTimer(var_12_int, var_13_float); // 0xca Func
	var_14_object = Obj(); // 0xcc PushV
	var_14_object = var_0_object; // 0xcd MovT
	func_1291(); // 0xce Call
	
Label_208:
	return 0; // 0xd0 Return
}


	task_1_event_17(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool, var_45_object)
	{
	var_46_bool = 0; var_47_object = Obj(); // 0xd2 PushV
	var_47_object = var_45_object; // 0xd3 Mov
	func_1200(var_46_bool, var_47_object); // 0xd4 Call
	var_74_bool = var_46_bool == 0; // 0xd6 Not
	if(var_74_bool == 0) goto Label_221; // 0xd7 JumpB
	var_75_object = Obj(); // 0xd8 PushV
	var_75_object = var_45_object; // 0xd9 Mov
	func_1516(var_75_object); // 0xda Call
	return 0; // 0xdc Return
	
Label_221:
	func_171(); // 0xde Call
	var_83_object = Obj(); // 0xe0 PushV
	var_83_object = var_45_object; // 0xe1 Mov
	func_1529(var_83_object); // 0xe2 Call
	return 0; // 0xe4 Return
	}


task_1_event_30(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool)
{
	var_12_bool = 0; var_13_object = Obj(); var_14_object = Obj(); // 0xe6 PushV
	var_13_object = var_10_cvector; // 0xe7 Mov
	var_14_object = var_11_bool; // 0xe8 Mov
	func_1602(var_12_bool, var_13_object, var_14_object); // 0xe9 Call
	if(var_12_bool == 0) goto Label_240; // 0xeb JumpB
	var_45_object = Obj(); // 0xec PushV
	var_45_object = var_10_cvector; // 0xed Mov
	func_209(); // 0xee Call
	
Label_240:
	return 0; // 0xf0 Return
}


task_1_event_1(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	var_11_bool = 0; var_12_object = Obj(); // 0xf2 PushV
	var_12_object = var_10_bool; // 0xf3 Mov
	func_1574(var_11_bool, var_12_object); // 0xf4 Call
	if(var_11_bool == 0) goto Label_254; // 0xf6 JumpB
	func_171(); // 0xf8 Call
	var_57_object = Obj(); // 0xfa PushV
	var_57_object = var_10_bool; // 0xfb Mov
	func_1596(var_57_object); // 0xfc Call
	
Label_254:
	return 0; // 0xfe Return
}


task_1_event_7(var_0_object, var_1_int, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	var_11_int = 100; // 0x100 PushI
	var_12_bool = var_10_bool != var_11_int; // 0x101 Neq
	if(var_12_bool == 0) goto Label_260; // 0x102 JumpB
	return 0; // 0x103 Return
	
Label_260:
	var_13_int = 100; // 0x104 PushI
	KillTimer(var_13_int); // 0x105 Func
	StopGroup0(); // 0x107 Func
	return 0; // 0x109 Return
}


	task_2_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool, var_45_object)
	{
	var_46_bool = 0; var_47_object = Obj(); // 0x176 PushV
	var_47_object = var_45_object; // 0x177 Mov
	func_1200(var_46_bool, var_47_object); // 0x178 Call
	var_74_bool = var_46_bool == 0; // 0x17a Not
	if(var_74_bool == 0) goto Label_385; // 0x17b JumpB
	var_75_object = Obj(); // 0x17c PushV
	var_75_object = var_45_object; // 0x17d Mov
	func_1516(var_75_object); // 0x17e Call
	return 0; // 0x180 Return
	
Label_385:
	func_405(); // 0x182 Call
	var_82_object = Obj(); // 0x184 PushV
	var_82_object = var_45_object; // 0x185 Mov
	func_1529(var_82_object); // 0x186 Call
	return 0; // 0x188 Return
	}


task_2_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool)
{
	var_12_bool = 0; var_13_object = Obj(); var_14_object = Obj(); // 0x18a PushV
	var_13_object = var_10_cvector; // 0x18b Mov
	var_14_object = var_11_bool; // 0x18c Mov
	func_1602(var_12_bool, var_13_object, var_14_object); // 0x18d Call
	if(var_12_bool == 0) goto Label_404; // 0x18f JumpB
	var_45_object = Obj(); // 0x190 PushV
	var_45_object = var_10_cvector; // 0x191 Mov
	func_373(); // 0x192 Call
	
Label_404:
	return 0; // 0x194 Return
}


task_2_event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	func_405(); // 0x19e Call
	var_11_object = Obj(); // 0x1a0 PushV
	var_11_object = var_10_bool; // 0x1a1 Mov
	func_1492(); // 0x1a2 Call
	return 0; // 0x1a4 Return
}


task_3_event_3(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	var_11_bool = 0; // 0x22b PushV
	var_11_bool = 0; // 0x22c MovB
	var_12_bool = var_2_bool; // 0x22d PushT
	if(var_12_bool == 0) goto Label_562; // 0x22e JumpB
	var_13_bool = var_10_bool == var_0_object; // 0x22f Eq
	if(var_13_bool == 0) goto Label_562; // 0x230 JumpB
	var_11_bool = 1; // 0x231 MovB
	
Label_562:
	if(var_11_bool == 0) goto Label_567; // 0x232 JumpB
	var_14_object = Obj(); // 0x233 PushV
	var_14_object = var_0_object; // 0x234 MovT
	func_1291(); // 0x235 Call
	
Label_567:
	return 0; // 0x237 Return
}


task_3_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	var_11_bool = 0; // 0x239 PushV
	var_11_bool = 0; // 0x23a MovB
	var_12_bool = var_2_bool; // 0x23b PushT
	if(var_12_bool == 0) goto Label_576; // 0x23c JumpB
	var_13_bool = var_10_bool == var_0_object; // 0x23d Eq
	if(var_13_bool == 0) goto Label_576; // 0x23e JumpB
	var_11_bool = 1; // 0x23f MovB
	
Label_576:
	if(var_11_bool == 0) goto Label_584; // 0x240 JumpB
	var_14_string = "@Stop hunt"; // 0x241 PushS
	Trace(var_14_string); // 0x242 Func
	StopAnimation(); // 0x244 Func
	StopGroup0(); // 0x246 Func
	
Label_584:
	return 0; // 0x248 Return
}


	task_3_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool, var_45_object)
	{
	var_46_bool = 0; var_47_object = Obj(); // 0x2a9 PushV
	var_47_object = var_45_object; // 0x2aa Mov
	func_1200(var_46_bool, var_47_object); // 0x2ab Call
	var_74_bool = var_46_bool == 0; // 0x2ad Not
	if(var_74_bool == 0) goto Label_688; // 0x2ae JumpB
	return 0; // 0x2af Return
	
Label_688:
	var_75_object = Obj(); // 0x2b0 PushV
	var_75_object = var_45_object; // 0x2b1 Mov
	func_1516(var_75_object); // 0x2b2 Call
	var_82_bool = var_45_object == var_0_object; // 0x2b4 Eq
	if(var_82_bool == 0) goto Label_696; // 0x2b5 JumpB
	var_1_object = 0; // 0x2b6 SetNullT
	goto Label_703; // 0x2b7 Jump
	
Label_703:
	return 0; // 0x2bf Return
	
Label_696:
	var_1_object = var_45_object; // 0x2b8 TMov
	var_83_bool = var_2_bool; // 0x2b9 PushT
	if(var_83_bool == 0) goto Label_703; // 0x2ba JumpB
	StopAnimation(); // 0x2bb Func
	StopGroup0(); // 0x2bd Func
	}


task_3_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool)
{
	var_12_bool = 0; var_13_object = Obj(); var_14_object = Obj(); // 0x2c1 PushV
	var_13_object = var_10_cvector; // 0x2c2 Mov
	var_14_object = var_11_bool; // 0x2c3 Mov
	func_1602(var_12_bool, var_13_object, var_14_object); // 0x2c4 Call
	if(var_12_bool == 0) goto Label_715; // 0x2c6 JumpB
	var_45_object = Obj(); // 0x2c7 PushV
	var_45_object = var_10_cvector; // 0x2c8 Mov
	func_680(); // 0x2c9 Call
	
Label_715:
	return 0; // 0x2cb Return
}


task_4_event_26(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_string, var_8_cvector, var_9_cvector, var_10_bool)
{
	var_11_string = "attack"; // 0x2cd PushS
	var_12_bool = var_10_bool == var_11_string; // 0x2ce Eq
	if(var_12_bool == 0) goto Label_730; // 0x2cf JumpB
	var_13_object = Obj(); // 0x2d0 PushV
	var_14_object = Obj(); // 0x2d1 PushV
	func_1076(var_14_object); // 0x2d2 Call
	var_13_object = var_14_object; // 0x2d3 Mov
	TaskCall(5); // 0x2d5 TaskCall
	func_801(var_13_object); // 0x2d6 Call
	TaskReturn(); // 0x2d7 TaskReturn
	goto Label_743; // 0x2d9 Jump
	
Label_743:
	return 0; // 0x2e7 Return
	
Label_730:
	var_283_string = "execute"; // 0x2da PushS
	var_284_bool = var_10_bool == var_283_string; // 0x2db Eq
	if(var_284_bool == 0) goto Label_739; // 0x2dc JumpB
	TaskCall(6); // 0x2de TaskCall
	func_982(var_285_bool); // 0x2df Call
	TaskReturn(); // 0x2e0 TaskReturn
	goto Label_743; // 0x2e2 Jump
	
Label_739:
	var_311_string = ""; // 0x2e3 PushV
	var_311_string = var_10_bool; // 0x2e4 Mov
	func_755(var_10_bool, var_311_string); // 0x2e5 Call
}


task_4_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_cvector, var_10_bool)
{
	var_11_bool = 0; var_12_string = ""; var_13_string = ""; // 0x2e9 PushV
	var_12_string = "quest_d11_02"; // 0x2ea MovS
	var_13_string = "soldier_attack"; // 0x2eb MovS
	func_1379(var_11_bool, var_12_string, var_13_string); // 0x2ec Call
	return 0; // 0x2ee Return
}


task_4_event_6(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool)
{
	var_10_bool = 0; // 0x30f PushV
	var_10_bool = 0; // 0x310 MovB
	var_11_object = var_0_object; // 0x311 PushT
	if(var_11_object == 0) goto Label_792; // 0x312 JumpB
	var_12_bool = 0; // 0x313 PushV
	func_799(var_12_bool); // 0x314 Call
	if(var_12_bool == 0) goto Label_792; // 0x316 JumpB
	var_10_bool = 1; // 0x317 MovB
	
Label_792:
	if(var_10_bool == 0) goto Label_798; // 0x318 JumpB
	var_13_object = Obj(); // 0x319 PushV
	func_1309(var_13_object); // 0x31a Call
	RemoveActor(var_13_object); // 0x31c Func
	
Label_798:
	return 0; // 0x31e Return
}


task_5_event_3(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_object, var_10_bool)
{
	var_11_bool = 0; var_12_bool = 0; // 0x337 PushV
	var_13_bool = 0; var_14_object = Obj(); // 0x338 PushV
	var_14_object = var_10_bool; // 0x339 Mov
	func_1200(var_13_bool, var_14_object); // 0x33a Call
	var_47_bool = var_13_bool == 0; // 0x33c Not
	if(var_47_bool == 0) goto Label_831; // 0x33d JumpB
	return 2; // 0x33e Return
	
Label_831:
	var_48_bool = 0; var_49_object = Obj(); // 0x33f PushV
	var_49_object = var_10_bool; // 0x340 Mov
	func_1569(var_48_bool, var_49_object); // 0x341 Call
	var_52_bool = var_48_bool == 0; // 0x343 Not
	if(var_52_bool == 0) goto Label_843; // 0x344 JumpB
	var_53_object = GlobalVars[0]; // 0x345 PushGE
	in(var_12_bool, var_10_bool); // 0x346 ObjFunc
	var_54_bool = var_12_bool == 0; // 0x348 Not
	if(var_54_bool == 0) goto Label_843; // 0x349 JumpB
	return 2; // 0x34a Return
	
Label_843:
	func_977(); // 0x34c Call
	var_55_object = Obj(); // 0x34e PushV
	var_55_object = var_10_bool; // 0x34f Mov
	TaskCall(1); // 0x350 TaskCall
	func_147(var_56_object, var_55_object); // 0x351 Call
	TaskReturn(); // 0x352 TaskReturn
	return 2; // 0x354 Return
}


	task_5_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_object, var_10_object, var_11_bool, var_45_object)
	{
	var_46_bool = 0; var_47_object = Obj(); // 0x356 PushV
	var_47_object = var_45_object; // 0x357 Mov
	func_1200(var_46_bool, var_47_object); // 0x358 Call
	var_74_bool = var_46_bool == 0; // 0x35a Not
	if(var_74_bool == 0) goto Label_865; // 0x35b JumpB
	var_75_object = Obj(); // 0x35c PushV
	var_75_object = var_45_object; // 0x35d Mov
	func_1516(var_75_object); // 0x35e Call
	return 0; // 0x360 Return
	
Label_865:
	func_977(); // 0x362 Call
	var_82_object = Obj(); // 0x364 PushV
	var_82_object = var_45_object; // 0x365 Mov
	func_1529(var_82_object); // 0x366 Call
	return 0; // 0x368 Return
	}


task_5_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_object, var_10_object, var_11_bool)
{
	var_12_bool = 0; var_13_object = Obj(); var_14_object = Obj(); // 0x36a PushV
	var_13_object = var_10_object; // 0x36b Mov
	var_14_object = var_11_bool; // 0x36c Mov
	func_1602(var_12_bool, var_13_object, var_14_object); // 0x36d Call
	if(var_12_bool == 0) goto Label_884; // 0x36f JumpB
	var_45_object = Obj(); // 0x370 PushV
	var_45_object = var_10_object; // 0x371 Mov
	func_853(); // 0x372 Call
	
Label_884:
	return 0; // 0x374 Return
}


task_5_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_object, var_10_bool)
{
	var_11_bool = 0; var_12_object = Obj(); // 0x376 PushV
	var_12_object = var_10_bool; // 0x377 Mov
	func_1574(var_11_bool, var_12_object); // 0x378 Call
	if(var_11_bool == 0) goto Label_898; // 0x37a JumpB
	func_977(); // 0x37c Call
	var_56_object = Obj(); // 0x37e PushV
	var_56_object = var_10_bool; // 0x37f Mov
	func_1655(var_56_object); // 0x380 Call
	
Label_898:
	return 0; // 0x382 Return
}


task_6_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_string = ""; var_13_string = ""; // 0x40f PushV
	var_12_string = "quest_d11_02"; // 0x410 MovS
	var_13_string = "soldier_attack"; // 0x411 MovS
	func_1379(var_11_bool, var_12_string, var_13_string); // 0x412 Call
	return 0; // 0x414 Return
}


task_6_event_26(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool, var_10_string)
{
	var_11_string = "attack"; // 0x416 PushS
	var_12_bool = var_10_string == var_11_string; // 0x417 Eq
	if(var_12_bool == 0) goto Label_1052; // 0x418 JumpB
	StopGroup0(); // 0x419 Func
	var_0_object = 1; // 0x41b TMovB
	
Label_1052:
	return 0; // 0x41c Return
}


event_22(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0; // 0x5c0 PushV
	var_14_object = var_10_object; // 0x5c1 Mov
	var_15_int = var_11_int; // 0x5c2 Mov
	var_16_float = var_12_float; // 0x5c3 Mov
	func_1224(var_15_int, var_16_float); // 0x5c4 Call
	return 0; // 0x5c6 Return
}


event_16(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool, var_10_object, var_11_string)
{
	var_12_float = 0; var_13_float = 0; // 0x5c7 PushV
	var_14_string = "health"; // 0x5c8 PushS
	var_15_bool = var_11_string == var_14_string; // 0x5c9 Eq
	if(var_15_bool == 0) goto Label_1491; // 0x5ca JumpB
	var_16_string = "health"; // 0x5cb PushS
	GetProperty(var_16_string, var_13_float); // 0x5cc Func
	var_17_int = 0; // 0x5ce PushI
	var_18_bool = var_13_float <= var_17_int; // 0x5cf LE
	if(var_18_bool == 0) goto Label_1491; // 0x5d0 JumpB
	SignalDeath(var_10_object); // 0x5d1 Func
	
Label_1491:
	return 2; // 0x5d3 Return
}


event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool, var_10_object)
{
	var_11_object = Obj(); // 0x5d5 PushV
	var_11_object = var_10_object; // 0x5d6 Mov
	func_1661(var_11_object); // 0x5d7 Call
	return 0; // 0x5d9 Return
}


event_6(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool)
{
	var_10_bool = 0; var_11_string = ""; var_12_string = ""; // 0x66a PushV
	var_11_string = "quest_d11_02"; // 0x66b MovS
	var_12_string = "actor_unload"; // 0x66c MovS
	func_1379(var_10_bool, var_11_string, var_12_string); // 0x66d Call
	var_16_object = Obj(); // 0x66f PushV
	func_1309(var_16_object); // 0x670 Call
	RemoveActor(var_16_object); // 0x672 Func
	Hold(); // 0x674 Func
	return 0; // 0x676 Return
}


main(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool)
{
	
Label_751:
	Hold(); // 0x2ef Func
	goto Label_751; // 0x2f1 Jump
}


func_0(var_19_object)
{
	func_1421(); // 0x2 Call
	var_60_object = Obj(); // 0x4 PushV
	var_60_object = var_19_object; // 0x5 Mov
	func_9(var_60_object); // 0x6 Call
	return 0; // 0x8 Return
}


func_899(var_0_object, var_1_object)
{
	var_251_int = 0; var_252_bool = 0; var_253_cvector = CVector(0,0,0); var_254_object = Obj(); var_255_int = 0; var_256_bool = 0; var_257_cvector = CVector(0,0,0); var_258_object = Obj(); // 0x383 PushV
	GetPFPosition(var_258_object); // 0x384 Func
	GetDirection(var_0_object); // 0x386 Func
	
Label_904:
	var_259_int = 60; // 0x388 PushI
	irand(var_255_int, var_259_int); // 0x389 Func
	var_260_int = 30; // 0x38b PushI
	var_261_int = var_255_int + var_260_int; // 0x38c Add
	Sleep(var_261_int, var_256_bool); // 0x38d Func
	var_262_bool = var_256_bool; // 0x38f Push
	if(var_262_bool == 0) goto Label_917; // 0x390 JumpB
	func_822(); // 0x392 Call
	goto Label_975; // 0x394 Jump
	
Label_975:
	goto Label_904; // 0x3cf Jump
	
Label_917:
	GetPFPosition(var_257_cvector); // 0x395 Func
	var_263_float = 0; var_264_cvector = CVector(0,0,0); var_265_cvector = CVector(0,0,0); // 0x397 PushV
	var_264_cvector = var_1_object; // 0x398 MovT
	var_265_cvector = var_257_cvector; // 0x399 Mov
	func_1315(var_263_float, var_264_cvector, var_265_cvector); // 0x39a Call
	var_268_int = 40000; // 0x39c PushI
	var_269_bool = var_263_float > var_268_int; // 0x39d GT
	if(var_269_bool == 0) goto Label_961; // 0x39e JumpB
	FindPathTo(var_258_object, var_258_object); // 0x39f Func
	var_270_bool = var_258_object != 0; // 0x3a1 NullNeq
	if(var_270_bool == 0) goto Label_956; // 0x3a2 JumpB
	RotatePath(var_258_object, var_256_bool); // 0x3a3 Func
	var_271_bool = var_256_bool == 0; // 0x3a5 Not
	if(var_271_bool == 0) goto Label_936; // 0x3a6 JumpB
	goto Label_974; // 0x3a7 Jump
	
Label_974:
	goto Label_917; // 0x3ce Jump
	
Label_936:
	var_272_bool = 0; // 0x3a8 PushB
	FollowPath(var_258_object, var_272_bool, var_256_bool); // 0x3a9 Func
	var_273_bool = var_256_bool == 0; // 0x3ab Not
	if(var_273_bool == 0) goto Label_942; // 0x3ac JumpB
	goto Label_974; // 0x3ad Jump
	
Label_942:
	var_274_float = GetByIndex(var_0_object, 0); // 0x3ae PushE
	var_275_float = GetByIndex(var_0_object, 2); // 0x3af PushE
	Rotate(var_274_float, var_275_float, var_256_bool); // 0x3b0 Func
	var_276_bool = var_256_bool == 0; // 0x3b2 Not
	if(var_276_bool == 0) goto Label_949; // 0x3b3 JumpB
	goto Label_974; // 0x3b4 Jump
	
Label_949:
	WaitForAnimEnd(var_256_bool); // 0x3b5 Func
	var_277_bool = var_256_bool == 0; // 0x3b7 Not
	if(var_277_bool == 0) goto Label_954; // 0x3b8 JumpB
	goto Label_974; // 0x3b9 Jump
	
Label_954:
	goto Label_975; // 0x3ba Jump
	
Label_956:
	var_278_int = 1; // 0x3bc PushI
	Sleep(var_278_int); // 0x3bd Func
	var_258_object = 0; // 0x3bf SetNull
	goto Label_974; // 0x3c0 Jump
	
Label_961:
	var_279_float = GetByIndex(var_0_object, 0); // 0x3c1 PushE
	var_280_float = GetByIndex(var_0_object, 2); // 0x3c2 PushE
	Rotate(var_279_float, var_280_float, var_256_bool); // 0x3c3 Func
	var_281_bool = var_256_bool == 0; // 0x3c5 Not
	if(var_281_bool == 0) goto Label_968; // 0x3c6 JumpB
	goto Label_974; // 0x3c7 Jump
	
Label_968:
	WaitForAnimEnd(var_256_bool); // 0x3c8 Func
	var_282_bool = var_256_bool == 0; // 0x3ca Not
	if(var_282_bool == 0) goto Label_973; // 0x3cb JumpB
	goto Label_974; // 0x3cc Jump
	
Label_973:
	goto Label_975; // 0x3cd Jump
}


func_1540(var_57_object)
{
	var_58_bool = 0; var_59_bool = 0; // 0x604 PushV
	var_60_object = GlobalVars[0]; // 0x605 PushGE
	in(var_59_bool, var_57_object); // 0x606 ObjFunc
	var_61_bool = var_59_bool; // 0x608 Push
	if(var_61_bool == 0) goto Label_1552; // 0x609 JumpB
	var_62_object = Obj(); var_63_bool = 0; // 0x60a PushV
	var_62_object = var_57_object; // 0x60b Mov
	var_63_bool = 1; // 0x60c MovB
	func_1505(var_62_object, var_63_bool); // 0x60d Call
	goto Label_1560; // 0x60f Jump
	
Label_1560:
	return 2; // 0x618 Return
	
Label_1552:
	var_244_object = Obj(); // 0x610 PushV
	var_244_object = var_57_object; // 0x611 Mov
	TaskCall(2); // 0x612 TaskCall
	func_266(var_246_bool, var_244_object); // 0x613 Call
	TaskReturn(); // 0x614 TaskReturn
	ResetAAS(); // 0x616 Func
}


func_1159(var_30_bool)
{
	var_32_bool = 0; var_33_bool = 0; // 0x487 PushV
	IsDead(var_33_bool); // 0x488 ObjFunc
	var_30_bool = var_33_bool; // 0x48a Mov
	return 2; // 0x48b Return
}


func_1655(var_56_object)
{
	var_57_object = Obj(); // 0x678 PushV
	var_57_object = var_56_object; // 0x679 Mov
	func_1540(var_57_object); // 0x67a Call
	return 0; // 0x67c Return
}


func_9(var_60_object)
{
	EventDisable(0); // 0xa EventDisable
	var_61_object = Obj(); // 0xb PushV
	var_61_object = var_60_object; // 0xc Mov
	func_32(var_61_object); // 0xd Call
	var_111_int = 50; // 0xf PushI
	var_112_int = 40; // 0x10 PushI
	SetRTEnvelope(var_111_int, var_112_int); // 0x11 Func
	EventEnable(0); // 0x13 EventEnable
	
Label_20:
	Hold(); // 0x14 Func
	goto Label_20; // 0x16 Jump
}


func_266(var_0_object, var_244_object)
{
	var_247_bool = 0; var_248_int = 0; var_249_int = 0; var_250_bool = 0; var_251_int = 0; var_252_int = 0; // 0x10a PushV
	var_0_object = var_244_object; // 0x10b TMov
	CanSee(var_252_int, var_0_object); // 0x10c Func
	var_253_object = var_1_object; // 0x10e PushT
	if(var_253_object == 0) goto Label_285; // 0x10f JumpB
	var_254_bool = 0; var_255_object = Obj(); // 0x110 PushV
	var_255_object = var_0_object; // 0x111 MovT
	func_1561(var_254_bool, var_255_object); // 0x112 Call
	if(var_254_bool == 0) goto Label_283; // 0x114 JumpB
	var_265_object = Obj(); var_266_bool = 0; // 0x115 PushV
	var_265_object = var_0_object; // 0x116 MovT
	var_266_bool = 1; // 0x117 MovB
	func_1505(var_265_object, var_266_bool); // 0x118 Call
	return 6; // 0x11a Return
	
Label_283:
	Face(var_0_object); // 0x11b Func
	
Label_285:
	var_267_string = "all"; // 0x11d PushS
	var_268_string = "shoot_begin"; // 0x11e PushS
	PlayAnimation(var_267_string, var_268_string); // 0x11f Func
	WaitForAnimEnd(var_250_bool); // 0x121 Func
	var_269_bool = var_250_bool == 0; // 0x123 Not
	if(var_269_bool == 0) goto Label_296; // 0x124 JumpB
	StopAsync(); // 0x125 Func
	return 6; // 0x127 Return
	
Label_296:
	var_270_string = "shot"; // 0x128 PushS
	Speak(var_270_string); // 0x129 Func
	var_271_string = "all"; // 0x12b PushS
	var_272_string = "shoot_end"; // 0x12c PushS
	PlayAnimation(var_271_string, var_272_string); // 0x12d Func
	WaitForAnimEnd(var_250_bool); // 0x12f Func
	var_273_bool = var_250_bool == 0; // 0x131 Not
	if(var_273_bool == 0) goto Label_310; // 0x132 JumpB
	StopAsync(); // 0x133 Func
	return 6; // 0x135 Return
	
Label_310:
	var_274_string = "all"; // 0x136 PushS
	var_275_string = "attack_on"; // 0x137 PushS
	LockAnimationEnd(var_274_string, var_275_string); // 0x138 Func
	var_251_int = 0; // 0x13a MovI
	var_252_int = 0; // 0x13b MovI
	
Label_316:
	var_276_int = 20; // 0x13c PushI
	var_277_bool = var_252_int < var_276_int; // 0x13d LT
	if(var_277_bool == 0) goto Label_364; // 0x13e JumpB
	var_278_float = 0.5; // 0x13f PushF
	Sleep(var_278_float, var_250_bool); // 0x140 Func
	var_279_bool = var_250_bool == 0; // 0x142 Not
	if(var_279_bool == 0) goto Label_325; // 0x143 JumpB
	return 6; // 0x144 Return
	
Label_325:
	CanSee(var_252_int, var_0_object); // 0x145 Func
	var_280_object = var_1_object; // 0x147 PushT
	if(var_280_object == 0) goto Label_347; // 0x148 JumpB
	var_251_int = 0; // 0x149 MovI
	var_281_bool = 0; var_282_object = Obj(); // 0x14a PushV
	var_282_object = var_0_object; // 0x14b MovT
	func_1561(var_281_bool, var_282_object); // 0x14c Call
	if(var_281_bool == 0) goto Label_344; // 0x14e JumpB
	func_405(); // 0x150 Call
	var_283_object = Obj(); var_284_bool = 0; // 0x152 PushV
	var_283_object = var_0_object; // 0x153 MovT
	var_284_bool = 0; // 0x154 MovB
	func_1505(var_283_object, var_284_bool); // 0x155 Call
	return 6; // 0x157 Return
	
Label_344:
	Face(var_0_object); // 0x158 Func
	goto Label_361; // 0x15a Jump
	
Label_361:
	var_285_int = 1; // 0x169 PushI
	var_252_int = var_252_int + var_285_int; // 0x16a Add2
	goto Label_316; // 0x16b Jump
	
Label_347:
	StopAsync(); // 0x15b Func
	var_286_int = 1; // 0x15d PushI
	var_251_int = var_251_int + var_286_int; // 0x15e Add2
	var_287_int = 4; // 0x15f PushI
	var_288_bool = var_251_int == var_287_int; // 0x160 Eq
	if(var_288_bool == 0) goto Label_361; // 0x161 JumpB
	var_289_string = "all"; // 0x162 PushS
	var_290_string = "attack_off"; // 0x163 PushS
	PlayAnimation(var_289_string, var_290_string); // 0x164 Func
	WaitForAnimEnd(); // 0x166 Func
	return 6; // 0x168 Return
	
Label_364:
	func_405(); // 0x16d Call
	var_291_object = Obj(); var_292_bool = 0; // 0x16f PushV
	var_291_object = var_244_object; // 0x170 Mov
	var_292_bool = 0; // 0x171 MovB
	func_1505(var_291_object, var_292_bool); // 0x172 Call
	return 6; // 0x174 Return
}


func_1291()
{
	var_212_cvector = CVector(0,0,0); var_213_cvector = CVector(0,0,0); var_214_cvector = CVector(0,0,0); var_215_cvector = CVector(0,0,0); var_216_cvector = CVector(0,0,0); var_217_cvector = CVector(0,0,0); // 0x50b PushV
	GetPosition(var_215_cvector); // 0x50c ObjFunc
	GetPosition(var_216_cvector); // 0x50e Func
	var_217_cvector = var_215_cvector - var_216_cvector; // 0x510 Sub2
	var_218_float = GetByIndex(var_217_cvector, 0); // 0x511 PushE
	var_219_float = GetByIndex(var_217_cvector, 2); // 0x512 PushE
	RotateAsync(var_218_float, var_219_float); // 0x513 Func
	return 6; // 0x515 Return
}


func_1164(var_19_bool, var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); // 0x48c PushV
	var_25_bool = var_20_object == 0; // 0x48d NullEq
	if(var_25_bool == 0) goto Label_1169; // 0x48e JumpB
	var_19_bool = 0; // 0x48f MovB
	return 4; // 0x490 Return
	
Label_1169:
	var_26_bool = 0; // 0x491 PushV
	var_26_bool = 0; // 0x492 MovB
	var_27_string = "IsDead"; // 0x493 PushS
	var_28_int = 1; // 0x494 PushI
	var_29_bool = IsFuncExist(var_20_object, var_27_string, var_28_int); // 0x495 FuncExist
	if(var_29_bool == 0) goto Label_1181; // 0x496 JumpB
	var_30_bool = 0; var_31_object = Obj(); // 0x497 PushV
	var_31_object = var_20_object; // 0x498 Mov
	func_1159(var_31_object); // 0x499 Call
	if(var_30_bool == 0) goto Label_1181; // 0x49b JumpB
	var_26_bool = 1; // 0x49c MovB
	
Label_1181:
	if(var_26_bool == 0) goto Label_1184; // 0x49d JumpB
	var_19_bool = 0; // 0x49e MovB
	return 4; // 0x49f Return
	
Label_1184:
	GetScene(var_23_object); // 0x4a0 Func
	var_34_bool = var_23_object == 0; // 0x4a2 NullEq
	if(var_34_bool == 0) goto Label_1190; // 0x4a3 JumpB
	var_19_bool = 0; // 0x4a4 MovB
	return 4; // 0x4a5 Return
	
Label_1190:
	GetScene(var_24_object); // 0x4a6 ObjFunc
	var_35_bool = var_23_object != var_24_object; // 0x4a8 Neq
	if(var_35_bool == 0) goto Label_1196; // 0x4a9 JumpB
	var_19_bool = 0; // 0x4aa MovB
	return 4; // 0x4ab Return
	
Label_1196:
	var_19_bool = 1; // 0x4ac MovB
	return 4; // 0x4ad Return
}


func_1421()
{
	var_20_int = 0; var_21_bool = 0; var_22_int = 0; var_23_bool = 0; // 0x58d PushV
	var_24_int = 0; // 0x58e PushI
	ClearSubContainer(var_24_int); // 0x58f Func
	var_25_int = 0; var_26_int = 0; // 0x591 PushV
	var_25_int = 500; // 0x592 MovI
	var_26_int = 1000; // 0x593 MovI
	func_1391(var_25_int, var_26_int); // 0x594 Call
	var_45_int = 4; // 0x596 PushI
	irand(var_22_int, var_45_int); // 0x597 Func
	var_46_int = 0; // 0x599 PushI
	var_47_bool = var_22_int != var_46_int; // 0x59a Neq
	if(var_47_bool == 0) goto Label_1443; // 0x59b JumpB
	var_48_int = 0; var_49_string = ""; // 0x59c PushV
	var_49_string = "rifle_ammo"; // 0x59d MovS
	func_1458(var_48_int, var_49_string); // 0x59e Call
	var_52_int = 0; // 0x5a0 PushI
	AddItem(var_23_bool, var_48_int, var_52_int, var_22_int); // 0x5a1 Func
	
Label_1443:
	var_53_int = 3; // 0x5a3 PushI
	irand(var_22_int, var_53_int); // 0x5a4 Func
	var_54_int = 0; // 0x5a6 PushI
	var_55_bool = var_22_int == var_54_int; // 0x5a7 Eq
	if(var_55_bool == 0) goto Label_1457; // 0x5a8 JumpB
	var_56_int = 0; var_57_string = ""; // 0x5a9 PushV
	var_57_string = "rusk"; // 0x5aa MovS
	func_1458(var_56_int, var_57_string); // 0x5ab Call
	var_58_int = 0; // 0x5ad PushI
	var_59_int = 1; // 0x5ae PushI
	AddItem(var_23_bool, var_56_int, var_58_int, var_59_int); // 0x5af Func
	
Label_1457:
	return 4; // 0x5b1 Return
}


func_147(var_0_object, var_55_object)
{
	var_57_bool = 0; var_58_bool = 0; // 0x93 PushV
	var_0_object = var_55_object; // 0x94 TMov
	Face(var_55_object); // 0x95 Func
	
Label_151:
	var_59_float = 0.5; // 0x97 PushF
	Sleep(var_59_float, var_58_bool); // 0x98 Func
	var_60_bool = 0; // 0x9a PushV
	var_60_bool = 1; // 0x9b MovB
	var_61_bool = var_58_bool == 0; // 0x9c Not
	if(var_61_bool == 0) goto Label_165; // 0x9d JumpB
	var_62_bool = 0; var_63_object = Obj(); // 0x9e PushV
	var_63_object = var_0_object; // 0x9f MovT
	func_1200(var_62_bool, var_63_object); // 0xa0 Call
	var_64_bool = var_62_bool == 0; // 0xa2 Not
	if(var_64_bool == 0) goto Label_165; // 0xa3 JumpB
	var_60_bool = 0; // 0xa4 MovB
	
Label_165:
	if(var_60_bool == 0) goto Label_167; // 0xa5 JumpB
	goto Label_168; // 0xa6 Jump
	
Label_168:
	StopAsync(); // 0xa8 Func
	return 2; // 0xaa Return
	
Label_167:
	goto Label_151; // 0xa7 Jump
}


func_405()
{
	StopAsync(); // 0x195 Func
	StopGroup0(); // 0x197 Func
	Stop(); // 0x199 Func
	return 0; // 0x19b Return
}


func_1302(var_138_float)
{
	var_140_float = 0; var_141_float = 0; var_142_float = 0; var_143_float = 0; // 0x516 PushV
	GetEyesHeight(var_142_float); // 0x517 Func
	GetEyesHeight(var_143_float); // 0x519 ObjFunc
	var_138_float = var_143_float - var_142_float; // 0x51b Sub2
	return 4; // 0x51c Return
}


func_1561(var_254_bool, var_255_object)
{
	var_256_float = 0; var_257_object = Obj(); // 0x61a PushV
	var_257_object = var_255_object; // 0x61b Mov
	func_1068(var_257_object); // 0x61c Call
	var_264_float = 40000.0; // 0x61e PushF
	var_254_bool = var_256_float <= var_264_float; // 0x61f LE2
	return 0; // 0x620 Return
}


func_1309(var_16_object)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x51d PushV
	self(var_18_object); // 0x51e Func
	var_16_object = var_18_object; // 0x520 Mov
	return 2; // 0x521 Return
}


func_1053(var_172_string, var_173_int)
{
	var_174_int = 1; // 0x41e PushI
	var_175_bool = var_173_int == var_174_int; // 0x41f Eq
	if(var_175_bool == 0) goto Label_1059; // 0x420 JumpB
	var_172_string = "fire"; // 0x421 MovS
	return 0; // 0x422 Return
	
Label_1059:
	var_172_string = "phys"; // 0x423 MovS
	return 0; // 0x424 Return
}


func_799(var_12_bool)
{
	var_12_bool = 1; // 0x31f MovB
	return 0; // 0x320 Return
}


func_32(var_61_object)
{
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_string = ""; var_67_object = Obj(); var_68_bool = 0; var_69_bool = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_string = ""; var_77_object = Obj(); var_78_bool = 0; var_79_bool = 0; var_80_float = 0; var_81_cvector = CVector(0,0,0); // 0x20 PushV
	var_82_bool = var_61_object == 0; // 0x21 NullEq
	if(var_82_bool == 0) goto Label_40; // 0x22 JumpB
	var_83_string = ""; // 0x23 PushV
	var_83_string = "fdie"; // 0x24 MovS
	func_119(var_83_string); // 0x25 Call
	goto Label_118; // 0x27 Jump
	
Label_118:
	return 20; // 0x76 Return
	
Label_40:
	GetPosition(var_72_cvector); // 0x28 ObjFunc
	GetPosition(var_73_cvector); // 0x2a Func
	GetDirection(var_74_cvector); // 0x2c Func
	var_75_cvector = var_73_cvector - var_72_cvector; // 0x2e Sub2
	var_86_float = GetByIndex(var_75_cvector, 0); // 0x2f PushE
	var_87_float = GetByIndex(var_74_cvector, 0); // 0x30 PushE
	var_88_float = var_86_float * var_87_float; // 0x31 Mult
	var_89_float = GetByIndex(var_75_cvector, 2); // 0x32 PushE
	var_90_float = GetByIndex(var_74_cvector, 2); // 0x33 PushE
	var_91_float = var_89_float * var_90_float; // 0x34 Mult
	var_92_int = var_88_float + var_91_float; // 0x35 Add
	var_93_int = 0; // 0x36 PushI
	var_94_bool = var_92_int >= var_93_int; // 0x37 GE
	if(var_94_bool == 0) goto Label_59; // 0x38 JumpB
	var_76_string = "fdie"; // 0x39 MovS
	goto Label_60; // 0x3a Jump
	
Label_60:
	RemoveRTEnvelope(); // 0x3c Func
	SetDeathState(); // 0x3e Func
	Stop(); // 0x40 Func
	StopAsync(); // 0x42 Func
	var_77_object = var_61_object; // 0x44 Mov
	var_95_string = "GetScriptProperty"; // 0x45 PushS
	var_96_int = 2; // 0x46 PushI
	var_97_bool = IsFuncExist(var_61_object, var_95_string, var_96_int); // 0x47 FuncExist
	if(var_97_bool == 0) goto Label_84; // 0x48 JumpB
	var_98_string = "Owner"; // 0x49 PushS
	HasScriptProperty(var_78_bool, var_98_string); // 0x4a ObjFunc
	var_99_bool = var_78_bool; // 0x4c Push
	if(var_99_bool == 0) goto Label_84; // 0x4d JumpB
	var_100_string = "Owner"; // 0x4e PushS
	GetScriptProperty(var_77_object, var_100_string); // 0x4f ObjFunc
	var_101_bool = var_77_object == 0; // 0x51 NullEq
	if(var_101_bool == 0) goto Label_84; // 0x52 JumpB
	var_77_object = var_61_object; // 0x53 Mov
	
Label_84:
	var_102_string = "@GetEyesHeight"; // 0x54 PushS
	var_103_int = 1; // 0x55 PushI
	var_104_bool = IsFuncExist(var_77_object, var_102_string, var_103_int); // 0x56 FuncExist
	if(var_104_bool == 0) goto Label_99; // 0x57 JumpB
	GetEyesHeight(var_80_float); // 0x58 ObjFunc
	var_81_cvector = CVector(0.0, 0.0, 0.0); // 0x5a MovV
	var_105_float = GetByIndex(var_81_cvector, 1); // 0x5b PushE
	var_105_float = var_80_float; // 0x5c Mov
	SetByIndex(var_81_cvector, 1) = var_105_float; // 0x5d PopE
	var_106_string = "head"; // 0x5e PushS
	LookAsync(var_61_object, var_106_string, var_81_cvector); // 0x5f Func
	var_79_bool = 1; // 0x61 MovB
	goto Label_100; // 0x62 Jump
	
Label_100:
	var_107_string = "all"; // 0x64 PushS
	PlayAnimation(var_107_string, var_76_string); // 0x65 Func
	WaitForAnimEnd(); // 0x67 Func
	var_108_bool = var_79_bool; // 0x69 Push
	if(var_108_bool == 0) goto Label_112; // 0x6a JumpB
	StopAsync(); // 0x6b Func
	var_109_string = "head"; // 0x6d PushS
	UnlookAsync(var_109_string); // 0x6e Func
	
Label_112:
	var_110_string = "all"; // 0x70 PushS
	LockAnimationEnd(var_110_string, var_76_string); // 0x71 Func
	RemoveEnvelope(); // 0x73 Func
	var_77_object = 0; // 0x75 SetNull
	
Label_99:
	var_79_bool = 0; // 0x63 MovB
	
Label_59:
	var_76_string = "bdie"; // 0x3b MovS
}


func_801(var_13_object)
{
	func_1498(); // 0x323 Call
	var_24_object = Obj(); // 0x325 PushV
	var_24_object = var_13_object; // 0x326 Mov
	func_853(); // 0x327 Call
	
Label_809:
	func_814(); // 0x32a Call
	goto Label_809; // 0x32c Jump
}


func_1569(var_52_bool, var_53_object)
{
	var_54_bool = 0; var_55_bool = 0; // 0x621 PushV
	IsPlayerActor(var_53_object, var_55_bool); // 0x622 Func
	var_52_bool = var_55_bool; // 0x624 Mov
	return 2; // 0x625 Return
}


func_1315(var_263_float, var_264_cvector, var_265_cvector)
{
	var_266_cvector = CVector(0,0,0); var_267_cvector = CVector(0,0,0); // 0x523 PushV
	var_267_cvector = var_265_cvector - var_264_cvector; // 0x524 Sub2
	var_263_float = var_267_cvector | var_267_cvector; // 0x525 Or2
	return 2; // 0x526 Return
}


func_1061(var_100_cvector)
{
	var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); // 0x425 PushV
	GetPosition(var_104_cvector); // 0x426 Func
	GetPosition(var_105_cvector); // 0x428 ObjFunc
	var_100_cvector = var_105_cvector - var_104_cvector; // 0x42a Sub2
	return 4; // 0x42b Return
}


func_1574(var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_bool = 0; // 0x626 PushV
	var_15_bool = 0; var_16_object = Obj(); // 0x627 PushV
	var_16_object = var_12_object; // 0x628 Mov
	func_1200(var_15_bool, var_16_object); // 0x629 Call
	var_49_bool = var_15_bool == 0; // 0x62b Not
	if(var_49_bool == 0) goto Label_1583; // 0x62c JumpB
	var_11_bool = 0; // 0x62d MovB
	return 2; // 0x62e Return
	
Label_1583:
	var_50_object = GlobalVars[0]; // 0x62f PushGE
	in(var_14_bool, var_12_object); // 0x630 ObjFunc
	var_51_bool = var_14_bool; // 0x632 Push
	if(var_51_bool == 0) goto Label_1590; // 0x633 JumpB
	var_11_bool = 1; // 0x634 MovB
	return 2; // 0x635 Return
	
Label_1590:
	var_52_bool = 0; var_53_object = Obj(); // 0x636 PushV
	var_53_object = var_12_object; // 0x637 Mov
	func_1569(var_52_bool, var_53_object); // 0x638 Call
	var_11_bool = var_52_bool; // 0x639 Mov
	return 2; // 0x63b Return
}


func_1319(var_180_float, var_181_float, var_182_float)
{
	var_185_bool = var_181_float < var_182_float; // 0x528 LT
	if(var_185_bool == 0) goto Label_1324; // 0x529 JumpB
	var_180_float = var_181_float; // 0x52a Mov
	goto Label_1325; // 0x52b Jump
	
Label_1325:
	return 0; // 0x52d Return
	
Label_1324:
	var_180_float = var_182_float; // 0x52c Mov
}


func_421(var_0_object, var_1_object, var_2_bool, var_64_object, var_65_bool)
{
	var_69_bool = 0; var_70_bool = 0; var_71_bool = 0; var_72_bool = 0; // 0x1a5 PushV
	var_0_object = var_64_object; // 0x1a6 TMov
	Face(var_0_object); // 0x1a7 Func
	var_73_bool = var_65_bool; // 0x1a9 Push
	if(var_73_bool == 0) goto Label_433; // 0x1aa JumpB
	var_74_string = "all"; // 0x1ab PushS
	var_75_string = "attack_on"; // 0x1ac PushS
	PlayAnimation(var_74_string, var_75_string); // 0x1ad Func
	WaitForAnimEnd(); // 0x1af Func
	
Label_433:
	var_76_string = "all"; // 0x1b1 PushS
	var_77_string = "attack_on"; // 0x1b2 PushS
	LockAnimationEnd(var_76_string, var_77_string); // 0x1b3 Func
	var_78_bool = 1; // 0x1b5 PushB
	SetAttackState(var_78_bool); // 0x1b6 Func
	
Label_440:
	var_79_bool = 0; var_80_object = Obj(); // 0x1b8 PushV
	var_80_object = var_0_object; // 0x1b9 MovT
	func_1200(var_79_bool, var_80_object); // 0x1ba Call
	if(var_79_bool == 0) goto Label_542; // 0x1bc JumpB
	CanSee(var_72_bool, var_0_object); // 0x1bd Func
	var_81_bool = var_72_bool; // 0x1bf Push
	if(var_81_bool == 0) goto Label_453; // 0x1c0 JumpB
	func_590(var_72_bool); // 0x1c2 Call
	goto Label_532; // 0x1c4 Jump
	
Label_532:
	var_209_bool = var_1_object != 0; // 0x214 NullNeq
	if(var_209_bool == 0) goto Label_538; // 0x215 JumpB
	func_585(var_71_bool, var_72_bool); // 0x217 Call
	goto Label_541; // 0x219 Jump
	
Label_541:
	goto Label_440; // 0x21d Jump
	
Label_538:
	var_210_int = 2; // 0x21a PushI
	Sleep(var_210_int); // 0x21b Func
	
Label_453:
	var_211_object = Obj(); // 0x1c5 PushV
	var_211_object = var_0_object; // 0x1c6 MovT
	func_1291(); // 0x1c7 Call
	var_2_bool = 1; // 0x1c9 TMovB
	var_220_string = "all"; // 0x1ca PushS
	var_221_string = "hunt"; // 0x1cb PushS
	PlayAnimation(var_220_string, var_221_string); // 0x1cc Func
	WaitForAnimEnd(var_71_bool); // 0x1ce Func
	var_222_bool = var_71_bool == 0; // 0x1d0 Not
	if(var_222_bool == 0) goto Label_476; // 0x1d1 JumpB
	var_223_bool = var_1_object != 0; // 0x1d2 NullNeq
	if(var_223_bool == 0) goto Label_471; // 0x1d3 JumpB
	func_585(var_71_bool, var_72_bool); // 0x1d5 Call
	
Label_471:
	var_224_string = "all"; // 0x1d7 PushS
	var_225_string = "attack_on"; // 0x1d8 PushS
	LockAnimationEnd(var_224_string, var_225_string); // 0x1d9 Func
	goto Label_440; // 0x1db Jump
	
Label_476:
	var_226_bool = 0; var_227_object = Obj(); // 0x1dc PushV
	var_227_object = var_0_object; // 0x1dd MovT
	func_1200(var_226_bool, var_227_object); // 0x1de Call
	var_228_bool = var_226_bool == 0; // 0x1e0 Not
	if(var_228_bool == 0) goto Label_483; // 0x1e1 JumpB
	goto Label_542; // 0x1e2 Jump
	
Label_542:
	var_229_bool = 0; // 0x21e PushB
	SetAttackState(var_229_bool); // 0x21f Func
	StopAsync(); // 0x221 Func
	var_230_string = "all"; // 0x223 PushS
	var_231_string = "attack_off"; // 0x224 PushS
	PlayAnimation(var_230_string, var_231_string); // 0x225 Func
	WaitForAnimEnd(); // 0x227 Func
	return 4; // 0x229 Return
	
Label_483:
	CanSee(var_72_bool, var_0_object); // 0x1e3 Func
	var_232_bool = var_72_bool; // 0x1e5 Push
	if(var_232_bool == 0) goto Label_494; // 0x1e6 JumpB
	var_2_bool = 0; // 0x1e7 TMovB
	Face(var_0_object); // 0x1e8 Func
	func_590(var_72_bool); // 0x1eb Call
	goto Label_532; // 0x1ed Jump
	
Label_494:
	var_233_string = "all"; // 0x1ee PushS
	var_234_string = "attack_on"; // 0x1ef PushS
	LockAnimationEnd(var_233_string, var_234_string); // 0x1f0 Func
	var_235_int = 3; // 0x1f2 PushI
	Sleep(var_235_int, var_71_bool); // 0x1f3 Func
	var_236_bool = var_71_bool == 0; // 0x1f5 Not
	if(var_236_bool == 0) goto Label_513; // 0x1f6 JumpB
	var_237_bool = var_1_object != 0; // 0x1f7 NullNeq
	if(var_237_bool == 0) goto Label_508; // 0x1f8 JumpB
	func_585(var_71_bool, var_72_bool); // 0x1fa Call
	
Label_508:
	var_238_string = "all"; // 0x1fc PushS
	var_239_string = "attack_on"; // 0x1fd PushS
	LockAnimationEnd(var_238_string, var_239_string); // 0x1fe Func
	goto Label_440; // 0x200 Jump
	
Label_513:
	var_240_bool = 0; var_241_object = Obj(); // 0x201 PushV
	var_241_object = var_0_object; // 0x202 MovT
	func_1200(var_240_bool, var_241_object); // 0x203 Call
	var_242_bool = var_240_bool == 0; // 0x205 Not
	if(var_242_bool == 0) goto Label_520; // 0x206 JumpB
	goto Label_542; // 0x207 Jump
	
Label_520:
	var_2_bool = 0; // 0x208 TMovB
	CanSee(var_72_bool, var_0_object); // 0x209 Func
	var_243_bool = var_72_bool; // 0x20b Push
	if(var_243_bool == 0) goto Label_531; // 0x20c JumpB
	Face(var_0_object); // 0x20d Func
	func_590(var_72_bool); // 0x210 Call
	goto Label_532; // 0x212 Jump
	
Label_531:
	goto Label_542; // 0x213 Jump
}


func_171()
{
	StopAsync(); // 0xab Func
	var_56_int = 100; // 0xad PushI
	KillTimer(var_56_int); // 0xae Func
	StopGroup0(); // 0xb0 Func
	return 0; // 0xb2 Return
}


func_1068(var_256_float)
{
	var_258_cvector = CVector(0,0,0); var_259_cvector = CVector(0,0,0); var_260_cvector = CVector(0,0,0); var_261_cvector = CVector(0,0,0); var_262_cvector = CVector(0,0,0); var_263_cvector = CVector(0,0,0); // 0x42c PushV
	GetPosition(var_261_cvector); // 0x42d Func
	GetPosition(var_262_cvector); // 0x42f ObjFunc
	var_263_cvector = var_262_cvector - var_261_cvector; // 0x431 Sub2
	var_256_float = var_263_cvector | var_263_cvector; // 0x432 Or2
	return 6; // 0x433 Return
}


func_814()
{
	func_1498(); // 0x32f Call
	
Label_817:
	func_899(var_19_cvector, var_13_object); // 0x332 Call
	goto Label_817; // 0x334 Jump
}


func_1326(var_190_float, var_191_float, var_192_float, var_193_float)
{
	var_194_bool = var_191_float < var_192_float; // 0x52f LT
	if(var_194_bool == 0) goto Label_1331; // 0x530 JumpB
	var_190_float = var_192_float; // 0x531 Mov
	return 0; // 0x532 Return
	
Label_1331:
	var_195_bool = var_191_float > var_193_float; // 0x533 GT
	if(var_195_bool == 0) goto Label_1335; // 0x534 JumpB
	var_190_float = var_193_float; // 0x535 Mov
	return 0; // 0x536 Return
	
Label_1335:
	var_190_float = var_191_float; // 0x537 Mov
	return 0; // 0x538 Return
}


func_1200(var_15_bool, var_16_object)
{
	var_17_int = 0; var_18_int = 0; // 0x4b0 PushV
	var_19_bool = 0; var_20_object = Obj(); // 0x4b1 PushV
	var_20_object = var_16_object; // 0x4b2 Mov
	func_1164(var_19_bool, var_20_object); // 0x4b3 Call
	var_36_bool = var_19_bool == 0; // 0x4b5 Not
	if(var_36_bool == 0) goto Label_1209; // 0x4b6 JumpB
	var_15_bool = 0; // 0x4b7 MovB
	return 2; // 0x4b8 Return
	
Label_1209:
	var_37_bool = 0; var_38_object = Obj(); var_39_string = ""; // 0x4b9 PushV
	var_38_object = var_16_object; // 0x4ba Mov
	var_39_string = "noaccess"; // 0x4bb MovS
	func_1083(var_37_bool, var_38_object, var_39_string); // 0x4bc Call
	var_46_bool = var_37_bool == 0; // 0x4be Not
	if(var_46_bool == 0) goto Label_1218; // 0x4bf JumpB
	var_15_bool = 1; // 0x4c0 MovB
	return 2; // 0x4c1 Return
	
Label_1218:
	var_47_string = "noaccess"; // 0x4c2 PushS
	GetProperty(var_47_string, var_18_int); // 0x4c3 ObjFunc
	var_48_int = 0; // 0x4c5 PushI
	var_15_bool = var_18_int == var_48_int; // 0x4c6 Eq2
	return 2; // 0x4c7 Return
}


func_1458(var_48_int, var_49_string)
{
	var_50_int = 0; var_51_int = 0; // 0x5b2 PushV
	GetInvItemByName(var_51_int, var_49_string); // 0x5b3 Func
	var_48_int = var_51_int; // 0x5b5 Mov
	return 2; // 0x5b6 Return
}


func_1076(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x434 PushV
	var_17_string = "player"; // 0x435 PushS
	FindActor(var_16_object, var_17_string); // 0x436 Func
	var_14_object = var_16_object; // 0x438 Mov
	return 2; // 0x439 Return
}


func_822()
{
	return 0; // 0x336 Return
}


func_1463(var_18_object)
{
	var_19_object = Obj(); // 0x5b8 PushV
	var_19_object = var_18_object; // 0x5b9 Mov
	TaskCall(0); // 0x5ba TaskCall
	func_0(var_19_object); // 0x5bb Call
	TaskReturn(); // 0x5bc TaskReturn
	return 0; // 0x5be Return
}


func_1337(var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x539 PushV
	CreateObjectSet(var_23_object); // 0x53a Func
	var_21_object = var_23_object; // 0x53c Mov
	return 2; // 0x53d Return
}


func_1083(var_37_bool, var_38_object, var_39_string)
{
	var_40_bool = 0; var_41_bool = 0; // 0x43b PushV
	var_42_string = "HasProperty"; // 0x43c PushS
	var_43_int = 2; // 0x43d PushI
	var_44_bool = IsFuncExist(var_38_object, var_42_string, var_43_int); // 0x43e FuncExist
	var_45_bool = var_44_bool == 0; // 0x43f Not
	if(var_45_bool == 0) goto Label_1091; // 0x440 JumpB
	var_37_bool = 0; // 0x441 MovB
	return 2; // 0x442 Return
	
Label_1091:
	HasProperty(var_39_string, var_41_bool); // 0x443 ObjFunc
	var_37_bool = var_41_bool; // 0x445 Mov
	return 2; // 0x446 Return
}


func_1596(var_57_object)
{
	var_58_object = Obj(); // 0x63d PushV
	var_58_object = var_57_object; // 0x63e Mov
	func_1655(var_58_object); // 0x63f Call
	return 0; // 0x641 Return
}


func_1343(var_109_float, var_110_cvector, var_111_cvector)
{
	var_112_float = GetByIndex(var_110_cvector, 0); // 0x540 PushE
	var_113_float = GetByIndex(var_111_cvector, 0); // 0x541 PushE
	var_114_float = var_112_float * var_113_float; // 0x542 Mult
	var_115_float = GetByIndex(var_110_cvector, 2); // 0x543 PushE
	var_116_float = GetByIndex(var_111_cvector, 2); // 0x544 PushE
	var_117_float = var_115_float * var_116_float; // 0x545 Mult
	var_109_float = var_114_float + var_117_float; // 0x546 Add2
	return 0; // 0x547 Return
}


func_1602(var_12_bool, var_13_object, var_14_object)
{
	var_15_float = 0; var_16_bool = 0; var_17_float = 0; var_18_bool = 0; // 0x642 PushV
	var_19_bool = 0; var_20_object = Obj(); var_21_string = ""; // 0x643 PushV
	var_20_object = var_14_object; // 0x644 Mov
	var_21_string = "reputation"; // 0x645 MovS
	func_1083(var_19_bool, var_20_object, var_21_string); // 0x646 Call
	var_28_bool = var_19_bool == 0; // 0x648 Not
	if(var_28_bool == 0) goto Label_1612; // 0x649 JumpB
	var_12_bool = 0; // 0x64a MovB
	return 4; // 0x64b Return
	
Label_1612:
	var_29_string = "reputation"; // 0x64c PushS
	GetProperty(var_29_string, var_17_float); // 0x64d ObjFunc
	var_30_float = 0.5; // 0x64f PushF
	var_31_bool = var_17_float < var_30_float; // 0x650 LT
	if(var_31_bool == 0) goto Label_1620; // 0x651 JumpB
	var_12_bool = 0; // 0x652 MovB
	return 4; // 0x653 Return
	
Label_1620:
	CanSee(var_18_bool, var_13_object); // 0x654 Func
	var_32_bool = 0; // 0x656 PushV
	var_32_bool = 1; // 0x657 MovB
	var_33_bool = var_18_bool; // 0x658 Push
	if(var_33_bool == 0) goto Label_1634; // 0x659 JumpB
	var_34_float = 0; var_35_object = Obj(); // 0x65a PushV
	var_35_object = var_13_object; // 0x65b Mov
	func_1068(var_35_object); // 0x65c Call
	var_42_float = 160000.0; // 0x65e PushF
	var_43_bool = var_34_float <= var_42_float; // 0x65f LE
	if(var_43_bool == 0) goto Label_1634; // 0x660 JumpB
	var_32_bool = 0; // 0x661 MovB
	
Label_1634:
	if(var_32_bool == 0) goto Label_1640; // 0x662 JumpB
	var_44_float = -0.2; // 0x663 PushF
	ReportReputationChange(var_13_object, var_14_object, var_44_float); // 0x664 Func
	var_12_bool = 1; // 0x666 MovB
	return 4; // 0x667 Return
	
Label_1640:
	var_12_bool = 0; // 0x668 MovB
	return 4; // 0x669 Return
}


func_1095(var_147_float, var_148_object, var_149_float, var_150_int)
{
	var_151_int = 0; var_152_string = ""; var_153_int = 0; var_154_float = 0; var_155_float = 0; var_156_float = 0; var_157_int = 0; var_158_string = ""; var_159_int = 0; var_160_float = 0; var_161_float = 0; var_162_float = 0; // 0x447 PushV
	var_163_bool = 0; var_164_object = Obj(); var_165_string = ""; // 0x448 PushV
	var_164_object = var_148_object; // 0x449 Mov
	var_165_string = "health"; // 0x44a MovS
	func_1083(var_163_bool, var_164_object, var_165_string); // 0x44b Call
	var_166_bool = var_163_bool == 0; // 0x44d Not
	if(var_166_bool == 0) goto Label_1105; // 0x44e JumpB
	var_147_float = 0.0; // 0x44f MovF
	return 12; // 0x450 Return
	
Label_1105:
	var_167_bool = 0; var_168_object = Obj(); var_169_string = ""; // 0x451 PushV
	var_168_object = var_148_object; // 0x452 Mov
	var_169_string = "armor"; // 0x453 MovS
	func_1083(var_167_bool, var_168_object, var_169_string); // 0x454 Call
	var_170_bool = var_167_bool == 0; // 0x456 Not
	if(var_170_bool == 0) goto Label_1114; // 0x457 JumpB
	var_157_int = 0; // 0x458 MovI
	goto Label_1117; // 0x459 Jump
	
Label_1117:
	var_171_string = "armor_"; // 0x45d PushS
	var_172_string = ""; var_173_int = 0; // 0x45e PushV
	var_173_int = var_150_int; // 0x45f Mov
	func_1053(var_172_string, var_173_int); // 0x460 Call
	var_158_string = var_171_string + var_172_string; // 0x462 Add2
	var_176_bool = 0; var_177_object = Obj(); var_178_string = ""; // 0x463 PushV
	var_177_object = var_148_object; // 0x464 Mov
	var_178_string = var_158_string; // 0x465 Mov
	func_1083(var_176_bool, var_177_object, var_178_string); // 0x466 Call
	var_179_bool = var_176_bool == 0; // 0x468 Not
	if(var_179_bool == 0) goto Label_1132; // 0x469 JumpB
	var_159_int = 0; // 0x46a MovI
	goto Label_1134; // 0x46b Jump
	
Label_1134:
	var_180_float = 0; var_181_float = 0; var_182_float = 0; // 0x46e PushV
	var_183_int = var_157_int + var_159_int; // 0x46f Add
	var_184_float = 100.0; // 0x470 PushF
	var_181_float = var_183_int / var_183_int; // 0x471 Div2
	var_182_float = 1; // 0x472 MovI
	func_1319(var_180_float, var_181_float, var_182_float); // 0x473 Call
	var_160_float = var_180_float; // 0x474 Mov
	var_186_string = "health"; // 0x476 PushS
	GetProperty(var_186_string, var_161_float); // 0x477 ObjFunc
	var_187_int = 1; // 0x479 PushI
	var_188_int = var_187_int - var_160_float; // 0x47a Sub
	var_162_float = var_149_float * var_188_int; // 0x47b Mult2
	var_189_string = "health"; // 0x47c PushS
	var_190_float = 0; var_191_float = 0; var_192_float = 0; var_193_float = 0; // 0x47d PushV
	var_191_float = var_161_float - var_162_float; // 0x47e Sub2
	var_192_float = 0; // 0x47f MovI
	var_193_float = 1; // 0x480 MovI
	func_1326(var_190_float, var_191_float, var_192_float, var_193_float); // 0x481 Call
	SetProperty(var_189_string, var_190_float); // 0x483 ObjFunc
	var_147_float = var_162_float; // 0x485 Mov
	return 12; // 0x486 Return
	
Label_1132:
	GetProperty(var_158_string, var_159_int); // 0x46c ObjFunc
	
Label_1114:
	var_196_string = "armor"; // 0x45a PushS
	GetProperty(var_196_string, var_157_int); // 0x45b ObjFunc
}


func_1352(var_118_float, var_119_cvector)
{
	var_120_float = GetByIndex(var_119_cvector, 0); // 0x549 PushE
	var_121_float = GetByIndex(var_119_cvector, 0); // 0x54a PushE
	var_122_float = var_120_float * var_121_float; // 0x54b Mult
	var_123_float = GetByIndex(var_119_cvector, 2); // 0x54c PushE
	var_124_float = GetByIndex(var_119_cvector, 2); // 0x54d PushE
	var_125_float = var_123_float * var_124_float; // 0x54e Mult
	var_126_int = var_122_float + var_125_float; // 0x54f Add
	var_118_float = sqrt(var_126_int); // 0x550 Sqrt2
	return 0; // 0x551 Return
}


func_585(var_0_object, var_1_object)
{
	var_0_object = var_1_object; // 0x249 TMovT
	var_1_object = 0; // 0x24a SetNullT
	Face(var_0_object); // 0x24b Func
	return 0; // 0x24d Return
}


func_1224(var_14_object, var_15_int)
{
	var_17_object = Obj(); var_18_object = Obj(); var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_int = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_string = ""; var_27_object = Obj(); var_28_object = Obj(); var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = ""; // 0x4c8 PushV
	var_37_bool = 0; // 0x4c9 PushV
	var_37_bool = 0; // 0x4ca MovB
	var_38_int = 4; // 0x4cb PushI
	var_39_bool = var_15_int != var_38_int; // 0x4cc Neq
	if(var_39_bool == 0) goto Label_1234; // 0x4cd JumpB
	var_40_int = 5; // 0x4ce PushI
	var_41_bool = var_15_int != var_40_int; // 0x4cf Neq
	if(var_41_bool == 0) goto Label_1234; // 0x4d0 JumpB
	var_37_bool = 1; // 0x4d1 MovB
	
Label_1234:
	if(var_37_bool == 0) goto Label_1253; // 0x4d2 JumpB
	GetScene(var_27_object); // 0x4d3 Func
	GetPosition(var_29_cvector); // 0x4d5 Func
	GetEyesHeight(var_30_float); // 0x4d7 Func
	var_42_float = GetByIndex(var_29_cvector, 1); // 0x4d9 PushE
	var_43_int = 2; // 0x4da PushI
	var_44_float = var_30_float / var_43_int; // 0x4db Div
	var_42_float = var_42_float + var_44_float; // 0x4dc Add2
	SetByIndex(var_29_cvector, 1) = var_42_float; // 0x4dd PopE
	var_45_string = "scripted"; // 0x4de PushS
	var_46_cvector = CVector(0.0, 0.0, 1.0); // 0x4df PushVec
	var_47_string = "blood.xml"; // 0x4e0 PushS
	AddActorByType(var_28_object, var_45_string, var_27_object, var_29_cvector, var_46_cvector, var_47_string); // 0x4e1 Func
	var_28_object = 0; // 0x4e3 SetNull
	var_27_object = 0; // 0x4e4 SetNull
	
Label_1253:
	var_48_bool = var_14_object == 0; // 0x4e5 NullEq
	if(var_48_bool == 0) goto Label_1256; // 0x4e6 JumpB
	return 20; // 0x4e7 Return
	
Label_1256:
	GetSecondaryAnimationType(var_31_int); // 0x4e8 Func
	var_49_int = 0; // 0x4ea PushI
	var_50_bool = var_31_int < var_49_int; // 0x4eb LT
	if(var_50_bool == 0) goto Label_1262; // 0x4ec JumpB
	return 20; // 0x4ed Return
	
Label_1262:
	GetPosition(var_32_cvector); // 0x4ee ObjFunc
	GetPosition(var_33_cvector); // 0x4f0 Func
	GetDirection(var_34_cvector); // 0x4f2 Func
	var_35_cvector = var_33_cvector - var_32_cvector; // 0x4f4 Sub2
	var_51_float = GetByIndex(var_35_cvector, 0); // 0x4f5 PushE
	var_52_float = GetByIndex(var_34_cvector, 0); // 0x4f6 PushE
	var_53_float = var_51_float * var_52_float; // 0x4f7 Mult
	var_54_float = GetByIndex(var_35_cvector, 2); // 0x4f8 PushE
	var_55_float = GetByIndex(var_34_cvector, 2); // 0x4f9 PushE
	var_56_float = var_54_float * var_55_float; // 0x4fa Mult
	var_57_int = var_53_float + var_56_float; // 0x4fb Add
	var_58_int = 0; // 0x4fc PushI
	var_59_bool = var_57_int >= var_58_int; // 0x4fd GE
	if(var_59_bool == 0) goto Label_1281; // 0x4fe JumpB
	var_36_string = "fhit"; // 0x4ff MovS
	goto Label_1282; // 0x500 Jump
	
Label_1282:
	var_60_string = "hit_react"; // 0x502 PushS
	var_61_string = "1"; // 0x503 PushS
	var_62_int = var_36_string + var_61_string; // 0x504 Add
	var_63_string = "2"; // 0x505 PushS
	var_64_int = var_36_string + var_63_string; // 0x506 Add
	var_65_int = -10; // 0x507 PushI
	FadeSecondaryAnimation(var_60_string, var_62_int, var_64_int, var_65_int); // 0x508 Func
	return 20; // 0x50a Return
	
Label_1281:
	var_36_string = "bhit"; // 0x501 MovS
}


func_590(var_0_object)
{
	var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_object = Obj(); var_86_int = 0; var_87_cvector = CVector(0,0,0); var_88_float = 0; var_89_object = Obj(); var_90_object = Obj(); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_object = Obj(); var_95_int = 0; var_96_cvector = CVector(0,0,0); var_97_float = 0; var_98_object = Obj(); var_99_object = Obj(); // 0x24e PushV
	ReportAttack(var_0_object); // 0x24f Func
	GetDirection(var_91_cvector); // 0x251 Func
	var_100_cvector = CVector(0,0,0); var_101_object = Obj(); // 0x253 PushV
	var_101_object = var_0_object; // 0x254 MovT
	func_1061(var_101_object); // 0x255 Call
	var_92_cvector = var_100_cvector; // 0x256 Mov
	var_106_float = 0; var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); // 0x258 PushV
	var_107_cvector = var_91_cvector; // 0x259 Mov
	var_108_cvector = var_92_cvector; // 0x25a Mov
	func_1362(var_106_float, var_107_cvector, var_108_cvector); // 0x25b Call
	var_130_float = 0.96593; // 0x25d PushF
	var_131_bool = var_106_float < var_130_float; // 0x25e LT
	if(var_131_bool == 0) goto Label_609; // 0x25f JumpB
	return 18; // 0x260 Return
	
Label_609:
	var_132_string = "all"; // 0x261 PushS
	var_133_string = "attack_begin1"; // 0x262 PushS
	PlayAnimation(var_132_string, var_133_string); // 0x263 Func
	WaitForAnimEnd(); // 0x265 Func
	var_134_string = "shot"; // 0x267 PushS
	Speak(var_134_string); // 0x268 Func
	GetDirection(var_91_cvector); // 0x26a Func
	var_135_cvector = CVector(0,0,0); var_136_object = Obj(); // 0x26c PushV
	var_136_object = var_0_object; // 0x26d MovT
	func_1061(var_136_object); // 0x26e Call
	var_92_cvector = var_135_cvector; // 0x26f Mov
	var_137_float = GetByIndex(var_92_cvector, 1); // 0x271 PushE
	var_138_float = 0; var_139_object = Obj(); // 0x272 PushV
	var_139_object = var_0_object; // 0x273 MovT
	func_1302(var_139_object); // 0x274 Call
	var_137_float = var_137_float + var_138_float; // 0x276 Add2
	SetByIndex(var_92_cvector, 1) = var_137_float; // 0x277 PopE
	var_144_float = 0.2618; // 0x278 PushF
	RandVecCone3D(var_93_cvector, var_92_cvector, var_144_float); // 0x279 Func
	GetVictimMaterial(var_93_cvector, var_94_object, var_95_int, var_96_cvector); // 0x27b Func
	var_145_bool = var_94_object != 0; // 0x27d NullNeq
	if(var_145_bool == 0) goto Label_668; // 0x27e JumpB
	var_146_bool = var_94_object == var_0_object; // 0x27f Eq
	if(var_146_bool == 0) goto Label_653; // 0x280 JumpB
	var_147_float = 0; var_148_object = Obj(); var_149_float = 0; var_150_int = 0; // 0x281 PushV
	var_148_object = var_0_object; // 0x282 MovT
	var_149_float = 1.5; // 0x283 MovF
	var_150_int = 0; // 0x284 MovI
	func_1095(var_147_float, var_148_object, var_149_float, var_150_int); // 0x285 Call
	var_97_float = var_147_float; // 0x286 Mov
	var_197_int = 2; // 0x288 PushI
	var_198_float = 1.5; // 0x289 PushF
	ReportHit(var_0_object, var_197_int, var_97_float, var_198_float); // 0x28a Func
	goto Label_668; // 0x28c Jump
	
Label_668:
	var_199_string = "all"; // 0x29c PushS
	var_200_string = "attack_end1"; // 0x29d PushS
	PlayAnimation(var_199_string, var_200_string); // 0x29e Func
	WaitForAnimEnd(); // 0x2a0 Func
	var_201_string = "all"; // 0x2a2 PushS
	var_202_string = "attack_on"; // 0x2a3 PushS
	LockAnimationEnd(var_201_string, var_202_string); // 0x2a4 Func
	return 18; // 0x2a6 Return
	
Label_653:
	var_203_int = -1; // 0x28d PushI
	var_204_bool = var_95_int != var_203_int; // 0x28e Neq
	if(var_204_bool == 0) goto Label_668; // 0x28f JumpB
	GetScene(var_98_object); // 0x290 Func
	var_205_string = "scripted"; // 0x292 PushS
	var_206_cvector = CVector(0.0, 0.0, 1.0); // 0x293 PushVec
	var_207_string = "richochet.xml"; // 0x294 PushS
	AddActorByType(var_99_object, var_205_string, var_98_object, var_96_cvector, var_206_cvector, var_207_string); // 0x295 Func
	var_208_string = "Material"; // 0x297 PushS
	SetScriptProperty(var_208_string, var_95_int); // 0x298 ObjFunc
	var_99_object = 0; // 0x29a SetNull
	var_98_object = 0; // 0x29b SetNull
}


func_977()
{
	StopGroup0(); // 0x3d1 Func
	Stop(); // 0x3d3 Func
	return 0; // 0x3d5 Return
}


func_1362(var_106_float, var_107_cvector, var_108_cvector)
{
	var_109_float = 0; var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); // 0x553 PushV
	var_110_cvector = var_107_cvector; // 0x554 Mov
	var_111_cvector = var_108_cvector; // 0x555 Mov
	func_1343(var_109_float, var_110_cvector, var_111_cvector); // 0x556 Call
	var_118_float = 0; var_119_cvector = CVector(0,0,0); // 0x558 PushV
	var_119_cvector = var_107_cvector; // 0x559 Mov
	func_1352(var_118_float, var_119_cvector); // 0x55a Call
	var_127_float = 0; var_128_cvector = CVector(0,0,0); // 0x55c PushV
	var_128_cvector = var_108_cvector; // 0x55d Mov
	func_1352(var_127_float, var_128_cvector); // 0x55e Call
	var_129_float = var_118_float * var_127_float; // 0x560 Mult
	var_106_float = var_109_float / var_109_float; // 0x561 Div2
	return 0; // 0x562 Return
}


func_982(var_0_object)
{
	var_0_object = 0; // 0x3d6 TMovB
	var_286_string = "all"; // 0x3d7 PushS
	var_287_string = "attack_on"; // 0x3d8 PushS
	PlayAnimation(var_286_string, var_287_string); // 0x3d9 Func
	WaitForAnimEnd(); // 0x3db Func
	var_288_bool = var_0_object == 0; // 0x3dd Not
	if(var_288_bool == 0) goto Label_1026; // 0x3de JumpB
	var_289_string = "all"; // 0x3df PushS
	var_290_string = "attack_on"; // 0x3e0 PushS
	LockAnimationEnd(var_289_string, var_290_string); // 0x3e1 Func
	var_291_int = 20; // 0x3e3 PushI
	Sleep(var_291_int); // 0x3e4 Func
	var_292_bool = var_0_object == 0; // 0x3e6 Not
	if(var_292_bool == 0) goto Label_1026; // 0x3e7 JumpB
	var_293_string = "all"; // 0x3e8 PushS
	var_294_string = "attack_begin1"; // 0x3e9 PushS
	PlayAnimation(var_293_string, var_294_string); // 0x3ea Func
	WaitForAnimEnd(); // 0x3ec Func
	var_295_bool = 0; var_296_string = ""; var_297_string = ""; // 0x3ee PushV
	var_296_string = "quest_d11_02"; // 0x3ef MovS
	var_297_string = "execute"; // 0x3f0 MovS
	func_1379(var_295_bool, var_296_string, var_297_string); // 0x3f1 Call
	var_301_string = "shot"; // 0x3f3 PushS
	Speak(var_301_string); // 0x3f4 Func
	var_302_string = "all"; // 0x3f6 PushS
	var_303_string = "attack_begin2"; // 0x3f7 PushS
	PlayAnimation(var_302_string, var_303_string); // 0x3f8 Func
	WaitForAnimEnd(); // 0x3fa Func
	var_304_string = "all"; // 0x3fc PushS
	var_305_string = "attack_off"; // 0x3fd PushS
	PlayAnimation(var_304_string, var_305_string); // 0x3fe Func
	WaitForAnimEnd(); // 0x400 Func
	
Label_1026:
	var_306_object = var_0_object; // 0x402 PushT
	if(var_306_object == 0) goto Label_1037; // 0x403 JumpB
	var_307_object = Obj(); // 0x404 PushV
	var_308_object = Obj(); // 0x405 PushV
	func_1076(var_308_object); // 0x406 Call
	var_307_object = var_308_object; // 0x407 Mov
	TaskCall(5); // 0x409 TaskCall
	func_801(var_307_object); // 0x40a Call
	TaskReturn(); // 0x40b TaskReturn
	
Label_1037:
	return 0; // 0x40d Return
}


func_1498()
{
	var_20_object = GlobalVars[0]; // 0x5da PushGE
	var_21_object = Obj(); // 0x5db PushV
	func_1337(var_21_object); // 0x5dc Call
	var_20_object = var_21_object; // 0x5dd Mov
	GlobalVars[0] = var_20_object; // 0x5df PopGE
	return 0; // 0x5e0 Return
}


func_1505(var_62_object, var_63_bool)
{
	var_64_object = Obj(); var_65_bool = 0; // 0x5e2 PushV
	var_64_object = var_62_object; // 0x5e3 Mov
	var_65_bool = var_63_bool; // 0x5e4 Mov
	TaskCall(3); // 0x5e5 TaskCall
	func_421(var_66_object, var_67_object, var_68_bool, var_64_object, var_65_bool); // 0x5e6 Call
	TaskReturn(); // 0x5e7 TaskReturn
	ResetAAS(); // 0x5e9 Func
	return 0; // 0x5eb Return
}


func_1379(var_10_bool, var_11_string, var_12_string)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0x563 PushV
	FindActor(var_14_object, var_11_string); // 0x564 Func
	var_15_bool = var_14_object == 0; // 0x566 NullEq
	if(var_15_bool == 0) goto Label_1386; // 0x567 JumpB
	var_10_bool = 0; // 0x568 MovB
	return 2; // 0x569 Return
	
Label_1386:
	Trigger(var_14_object, var_12_string); // 0x56a Func
	var_10_bool = 1; // 0x56c MovB
	return 2; // 0x56d Return
}


func_1516(var_75_object)
{
	var_76_bool = 0; var_77_bool = 0; // 0x5ec PushV
	var_78_bool = var_75_object == 0; // 0x5ed NullEq
	if(var_78_bool == 0) goto Label_1520; // 0x5ee JumpB
	return 2; // 0x5ef Return
	
Label_1520:
	var_79_object = GlobalVars[0]; // 0x5f0 PushGE
	in(var_77_bool, var_75_object); // 0x5f1 ObjFunc
	var_80_bool = var_77_bool == 0; // 0x5f3 Not
	if(var_80_bool == 0) goto Label_1528; // 0x5f4 JumpB
	var_81_object = GlobalVars[0]; // 0x5f5 PushGE
	add(var_75_object); // 0x5f6 ObjFunc
	
Label_1528:
	return 2; // 0x5f8 Return
}


func_1391(var_25_int, var_26_int)
{
	var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; // 0x56f PushV
	var_35_bool = var_25_int > var_26_int; // 0x570 GT
	if(var_35_bool == 0) goto Label_1398; // 0x571 JumpB
	var_36_string = "GenerateMoney: iMin > iMax"; // 0x572 PushS
	Trace(var_36_string); // 0x573 Func
	return 8; // 0x575 Return
	
Label_1398:
	var_31_int = 0; // 0x576 MovI
	var_37_bool = var_25_int != var_26_int; // 0x577 Neq
	if(var_37_bool == 0) goto Label_1405; // 0x578 JumpB
	var_38_int = var_26_int - var_25_int; // 0x579 Sub
	irand(var_32_int, var_38_int); // 0x57a Func
	goto Label_1409; // 0x57c Jump
	
Label_1409:
	var_31_int = var_31_int + var_25_int; // 0x581 Add2
	var_39_int = 0; // 0x582 PushI
	var_40_bool = var_31_int == var_39_int; // 0x583 Eq
	if(var_40_bool == 0) goto Label_1414; // 0x584 JumpB
	return 8; // 0x585 Return
	
Label_1414:
	var_41_string = "Money"; // 0x586 PushS
	GetInvItemByName(var_33_int, var_41_string); // 0x587 Func
	var_42_int = 0; // 0x589 PushI
	AddItem(var_34_bool, var_33_int, var_42_int, var_31_int); // 0x58a Func
	return 8; // 0x58c Return
	
Label_1405:
	var_43_int = 0; // 0x57d PushI
	var_44_bool = var_25_int == var_43_int; // 0x57e Eq
	if(var_44_bool == 0) goto Label_1409; // 0x57f JumpB
	return 8; // 0x580 Return
}


func_755(var_0_object, var_311_string)
{
	var_312_bool = 0; var_313_bool = 0; // 0x2f3 PushV
	var_314_string = "cleanup"; // 0x2f4 PushS
	var_315_bool = var_311_string == var_314_string; // 0x2f5 Eq
	if(var_315_bool == 0) goto Label_778; // 0x2f6 JumpB
	var_0_object = 1; // 0x2f7 TMovB
	IsLoaded(var_313_bool); // 0x2f8 Func
	var_316_bool = 0; // 0x2fa PushV
	var_316_bool = 0; // 0x2fb MovB
	var_317_bool = var_313_bool == 0; // 0x2fc Not
	if(var_317_bool == 0) goto Label_771; // 0x2fd JumpB
	var_318_bool = 0; // 0x2fe PushV
	func_799(var_318_bool); // 0x2ff Call
	if(var_318_bool == 0) goto Label_771; // 0x301 JumpB
	var_316_bool = 1; // 0x302 MovB
	
Label_771:
	if(var_316_bool == 0) goto Label_777; // 0x303 JumpB
	var_319_object = Obj(); // 0x304 PushV
	func_1309(var_319_object); // 0x305 Call
	RemoveActor(var_319_object); // 0x307 Func
	
Label_777:
	goto Label_782; // 0x309 Jump
	
Label_782:
	return 2; // 0x30e Return
	
Label_778:
	var_322_string = "restore"; // 0x30a PushS
	var_323_bool = var_311_string == var_322_string; // 0x30b Eq
	if(var_323_bool == 0) goto Label_782; // 0x30c JumpB
	var_0_object = 0; // 0x30d TMovB
}


func_119(var_83_string)
{
	RemoveRTEnvelope(); // 0x78 Func
	SetDeathState(); // 0x7a Func
	Stop(); // 0x7c Func
	StopAsync(); // 0x7e Func
	StopSecondaryAnimation(); // 0x80 Func
	var_84_string = "all"; // 0x82 PushS
	PlayAnimation(var_84_string, var_83_string); // 0x83 Func
	WaitForAnimEnd(); // 0x85 Func
	var_85_string = "all"; // 0x87 PushS
	LockAnimationEnd(var_85_string, var_83_string); // 0x88 Func
	RemoveEnvelope(); // 0x8a Func
	return 0; // 0x8c Return
}


func_1529(var_82_object)
{
	var_83_object = Obj(); // 0x5fa PushV
	var_83_object = var_82_object; // 0x5fb Mov
	func_1516(var_83_object); // 0x5fc Call
	var_84_object = Obj(); var_85_bool = 0; // 0x5fe PushV
	var_84_object = var_82_object; // 0x5ff Mov
	var_85_bool = 1; // 0x600 MovB
	func_1505(var_84_object, var_85_bool); // 0x601 Call
	return 0; // 0x603 Return
}


func_1661(var_11_object)
{
	var_12_bool = 0; var_13_string = ""; var_14_string = ""; // 0x67e PushV
	var_13_string = "quest_d11_02"; // 0x67f MovS
	var_14_string = "soldier_dead"; // 0x680 MovS
	func_1379(var_12_bool, var_13_string, var_14_string); // 0x681 Call
	var_18_object = Obj(); // 0x683 PushV
	var_18_object = var_11_object; // 0x684 Mov
	func_1463(var_18_object); // 0x685 Call
	return 0; // 0x687 Return
}


