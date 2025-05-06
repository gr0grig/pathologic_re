task_0_event_0(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; var_13_bool = 0; // 0x18 PushV
	IsOverrideActive(var_13_bool); // 0x19 Func
	var_14_bool = var_13_bool == 0; // 0x1b Not
	if(var_14_bool == 0) goto Label_31; // 0x1c JumpB
	WorkWithCorpse(var_11_cvector); // 0x1d Func
	
Label_31:
	return 2; // 0x1f Return
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_cvector, var_14_cvector)
{
	return 0; // 0x8e Return
}


task_0_event_16(var_0_object, var_1_string, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_cvector, var_12_cvector)
{
	return 0; // 0x90 Return
}


task_0_event_41(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	return 0; // 0x92 Return
}


task_1_event_41(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	func_171(); // 0xb5 Call
	var_13_object = Obj(); // 0xb7 PushV
	var_13_object = var_11_cvector; // 0xb8 Mov
	func_1552(); // 0xb9 Call
	return 0; // 0xbb Return
}


task_1_event_3(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = var_11_cvector == var_0_object; // 0xbd Eq
	if(var_12_bool == 0) goto Label_196; // 0xbe JumpB
	var_13_int = 100; // 0xbf PushI
	KillTimer(var_13_int); // 0xc0 Func
	Face(var_0_object); // 0xc2 Func
	
Label_196:
	return 0; // 0xc4 Return
}


task_1_event_4(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = var_11_cvector == var_0_object; // 0xc6 Eq
	if(var_12_bool == 0) goto Label_208; // 0xc7 JumpB
	var_13_int = 100; // 0xc8 PushI
	var_14_float = 3.0; // 0xc9 PushF
	SetTimer(var_13_int, var_14_float); // 0xca Func
	var_15_object = Obj(); // 0xcc PushV
	var_15_object = var_0_object; // 0xcd MovT
	func_1340(); // 0xce Call
	
Label_208:
	return 0; // 0xd0 Return
}


	task_1_event_17(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_cvector, var_12_cvector, var_46_object)
	{
	var_47_bool = 0; var_48_object = Obj(); // 0xd2 PushV
	var_48_object = var_46_object; // 0xd3 Mov
	func_1249(var_47_bool, var_48_object); // 0xd4 Call
	var_75_bool = var_47_bool == 0; // 0xd6 Not
	if(var_75_bool == 0) goto Label_221; // 0xd7 JumpB
	var_76_object = Obj(); // 0xd8 PushV
	var_76_object = var_46_object; // 0xd9 Mov
	func_1576(var_76_object); // 0xda Call
	return 0; // 0xdc Return
	
Label_221:
	func_171(); // 0xde Call
	var_84_object = Obj(); // 0xe0 PushV
	var_84_object = var_46_object; // 0xe1 Mov
	func_1589(var_84_object); // 0xe2 Call
	return 0; // 0xe4 Return
	}


task_1_event_30(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_cvector, var_12_cvector)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); // 0xe6 PushV
	var_14_object = var_11_cvector; // 0xe7 Mov
	var_15_object = var_12_cvector; // 0xe8 Mov
	func_1662(var_13_bool, var_14_object, var_15_object); // 0xe9 Call
	if(var_13_bool == 0) goto Label_240; // 0xeb JumpB
	var_46_object = Obj(); // 0xec PushV
	var_46_object = var_11_cvector; // 0xed Mov
	func_209(); // 0xee Call
	
Label_240:
	return 0; // 0xf0 Return
}


task_1_event_1(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; var_13_object = Obj(); // 0xf2 PushV
	var_13_object = var_11_cvector; // 0xf3 Mov
	func_1634(var_12_bool, var_13_object); // 0xf4 Call
	if(var_12_bool == 0) goto Label_254; // 0xf6 JumpB
	func_171(); // 0xf8 Call
	var_58_object = Obj(); // 0xfa PushV
	var_58_object = var_11_cvector; // 0xfb Mov
	func_1656(var_58_object); // 0xfc Call
	
Label_254:
	return 0; // 0xfe Return
}


task_1_event_7(var_0_object, var_1_int, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_int = 100; // 0x100 PushI
	var_13_bool = var_11_cvector != var_12_int; // 0x101 Neq
	if(var_13_bool == 0) goto Label_260; // 0x102 JumpB
	return 0; // 0x103 Return
	
Label_260:
	var_14_int = 100; // 0x104 PushI
	KillTimer(var_14_int); // 0x105 Func
	StopGroup0(); // 0x107 Func
	return 0; // 0x109 Return
}


	task_2_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_cvector, var_12_cvector, var_46_object)
	{
	var_47_bool = 0; var_48_object = Obj(); // 0x176 PushV
	var_48_object = var_46_object; // 0x177 Mov
	func_1249(var_47_bool, var_48_object); // 0x178 Call
	var_75_bool = var_47_bool == 0; // 0x17a Not
	if(var_75_bool == 0) goto Label_385; // 0x17b JumpB
	var_76_object = Obj(); // 0x17c PushV
	var_76_object = var_46_object; // 0x17d Mov
	func_1576(var_76_object); // 0x17e Call
	return 0; // 0x180 Return
	
Label_385:
	func_405(); // 0x182 Call
	var_83_object = Obj(); // 0x184 PushV
	var_83_object = var_46_object; // 0x185 Mov
	func_1589(var_83_object); // 0x186 Call
	return 0; // 0x188 Return
	}


task_2_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_cvector, var_12_cvector)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); // 0x18a PushV
	var_14_object = var_11_cvector; // 0x18b Mov
	var_15_object = var_12_cvector; // 0x18c Mov
	func_1662(var_13_bool, var_14_object, var_15_object); // 0x18d Call
	if(var_13_bool == 0) goto Label_404; // 0x18f JumpB
	var_46_object = Obj(); // 0x190 PushV
	var_46_object = var_11_cvector; // 0x191 Mov
	func_373(); // 0x192 Call
	
Label_404:
	return 0; // 0x194 Return
}


task_2_event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	func_405(); // 0x19e Call
	var_12_object = Obj(); // 0x1a0 PushV
	var_12_object = var_11_cvector; // 0x1a1 Mov
	func_1552(); // 0x1a2 Call
	return 0; // 0x1a4 Return
}


task_3_event_3(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; // 0x22b PushV
	var_12_bool = 0; // 0x22c MovB
	var_13_bool = var_2_bool; // 0x22d PushT
	if(var_13_bool == 0) goto Label_562; // 0x22e JumpB
	var_14_bool = var_11_cvector == var_0_object; // 0x22f Eq
	if(var_14_bool == 0) goto Label_562; // 0x230 JumpB
	var_12_bool = 1; // 0x231 MovB
	
Label_562:
	if(var_12_bool == 0) goto Label_567; // 0x232 JumpB
	var_15_object = Obj(); // 0x233 PushV
	var_15_object = var_0_object; // 0x234 MovT
	func_1340(); // 0x235 Call
	
Label_567:
	return 0; // 0x237 Return
}


task_3_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; // 0x239 PushV
	var_12_bool = 0; // 0x23a MovB
	var_13_bool = var_2_bool; // 0x23b PushT
	if(var_13_bool == 0) goto Label_576; // 0x23c JumpB
	var_14_bool = var_11_cvector == var_0_object; // 0x23d Eq
	if(var_14_bool == 0) goto Label_576; // 0x23e JumpB
	var_12_bool = 1; // 0x23f MovB
	
Label_576:
	if(var_12_bool == 0) goto Label_584; // 0x240 JumpB
	var_15_string = "@Stop hunt"; // 0x241 PushS
	Trace(var_15_string); // 0x242 Func
	StopAnimation(); // 0x244 Func
	StopGroup0(); // 0x246 Func
	
Label_584:
	return 0; // 0x248 Return
}


	task_3_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_object, var_11_cvector, var_12_cvector, var_46_object)
	{
	var_47_bool = 0; var_48_object = Obj(); // 0x2a9 PushV
	var_48_object = var_46_object; // 0x2aa Mov
	func_1249(var_47_bool, var_48_object); // 0x2ab Call
	var_75_bool = var_47_bool == 0; // 0x2ad Not
	if(var_75_bool == 0) goto Label_688; // 0x2ae JumpB
	return 0; // 0x2af Return
	
Label_688:
	var_76_object = Obj(); // 0x2b0 PushV
	var_76_object = var_46_object; // 0x2b1 Mov
	func_1576(var_76_object); // 0x2b2 Call
	var_83_bool = var_46_object == var_0_object; // 0x2b4 Eq
	if(var_83_bool == 0) goto Label_696; // 0x2b5 JumpB
	var_1_object = 0; // 0x2b6 SetNullT
	goto Label_703; // 0x2b7 Jump
	
Label_703:
	return 0; // 0x2bf Return
	
Label_696:
	var_1_object = var_46_object; // 0x2b8 TMov
	var_84_bool = var_2_bool; // 0x2b9 PushT
	if(var_84_bool == 0) goto Label_703; // 0x2ba JumpB
	StopAnimation(); // 0x2bb Func
	StopGroup0(); // 0x2bd Func
	}


task_3_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_object, var_11_cvector, var_12_cvector)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); // 0x2c1 PushV
	var_14_object = var_11_cvector; // 0x2c2 Mov
	var_15_object = var_12_cvector; // 0x2c3 Mov
	func_1662(var_13_bool, var_14_object, var_15_object); // 0x2c4 Call
	if(var_13_bool == 0) goto Label_715; // 0x2c6 JumpB
	var_46_object = Obj(); // 0x2c7 PushV
	var_46_object = var_11_cvector; // 0x2c8 Mov
	func_680(); // 0x2c9 Call
	
Label_715:
	return 0; // 0x2cb Return
}


task_4_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; var_13_bool = 0; // 0x2d0 PushV
	IsPlayerActor(var_11_cvector, var_13_bool); // 0x2d1 Func
	var_14_bool = var_13_bool; // 0x2d3 Push
	if(var_14_bool == 0) goto Label_731; // 0x2d4 JumpB
	var_15_object = Obj(); // 0x2d5 PushV
	var_15_object = var_11_cvector; // 0x2d6 Mov
	TaskCall(5); // 0x2d7 TaskCall
	func_753(var_15_object); // 0x2d8 Call
	TaskReturn(); // 0x2d9 TaskReturn
	
Label_731:
	return 2; // 0x2db Return
}


task_4_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; var_13_string = ""; var_14_string = ""; // 0x2dd PushV
	var_13_string = "quest_d11_01"; // 0x2de MovS
	var_14_string = "soldier_attack"; // 0x2df MovS
	func_1439(var_12_bool, var_13_string, var_14_string); // 0x2e0 Call
	return 0; // 0x2e2 Return
}


task_4_event_26(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_string, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_string = "attack"; // 0x2e4 PushS
	var_13_bool = var_11_cvector == var_12_string; // 0x2e5 Eq
	if(var_13_bool == 0) goto Label_752; // 0x2e6 JumpB
	var_14_object = Obj(); // 0x2e7 PushV
	var_15_object = Obj(); // 0x2e8 PushV
	func_1125(var_15_object); // 0x2e9 Call
	var_14_object = var_15_object; // 0x2ea Mov
	TaskCall(7); // 0x2ec TaskCall
	func_921(var_14_object); // 0x2ed Call
	TaskReturn(); // 0x2ee TaskReturn
	
Label_752:
	return 0; // 0x2f0 Return
}


task_5_event_2(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = var_11_cvector == var_0_object; // 0x303 Eq
	if(var_12_bool == 0) goto Label_776; // 0x304 JumpB
	func_865(var_11_cvector); // 0x306 Call
	
Label_776:
	return 0; // 0x308 Return
}


task_5_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; var_13_string = ""; var_14_string = ""; // 0x30a PushV
	var_13_string = "quest_d11_01"; // 0x30b MovS
	var_14_string = "soldier_attack"; // 0x30c MovS
	func_1439(var_12_bool, var_13_string, var_14_string); // 0x30d Call
	return 0; // 0x30f Return
}


task_5_event_26(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_string, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_string = "attack"; // 0x311 PushS
	var_13_bool = var_11_cvector == var_12_string; // 0x312 Eq
	if(var_13_bool == 0) goto Label_797; // 0x313 JumpB
	var_14_object = Obj(); // 0x314 PushV
	var_15_object = Obj(); // 0x315 PushV
	func_1125(var_15_object); // 0x316 Call
	var_14_object = var_15_object; // 0x317 Mov
	TaskCall(7); // 0x319 TaskCall
	func_921(var_14_object); // 0x31a Call
	TaskReturn(); // 0x31b TaskReturn
	
Label_797:
	return 0; // 0x31d Return
}


task_6_event_6(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector)
{
	StopAnimation(); // 0x37b Func
	return 0; // 0x37d Return
}


task_6_event_2(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = var_11_cvector == var_0_object; // 0x37f Eq
	if(var_12_bool == 0) goto Label_899; // 0x380 JumpB
	StopAnimation(); // 0x381 Func
	
Label_899:
	return 0; // 0x383 Return
}


task_6_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; var_13_string = ""; var_14_string = ""; // 0x385 PushV
	var_13_string = "quest_d11_01"; // 0x386 MovS
	var_14_string = "soldier_attack"; // 0x387 MovS
	func_1439(var_12_bool, var_13_string, var_14_string); // 0x388 Call
	return 0; // 0x38a Return
}


task_6_event_26(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_string, var_10_cvector, var_11_cvector)
{
	var_12_string = "attack"; // 0x38c PushS
	var_13_bool = var_11_cvector == var_12_string; // 0x38d Eq
	if(var_13_bool == 0) goto Label_920; // 0x38e JumpB
	var_14_object = Obj(); // 0x38f PushV
	var_15_object = Obj(); // 0x390 PushV
	func_1125(var_15_object); // 0x391 Call
	var_14_object = var_15_object; // 0x392 Mov
	TaskCall(7); // 0x394 TaskCall
	func_921(var_14_object); // 0x395 Call
	TaskReturn(); // 0x396 TaskReturn
	
Label_920:
	return 0; // 0x398 Return
}


task_7_event_3(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object)
{
	var_12_bool = 0; var_13_bool = 0; // 0x3af PushV
	var_14_bool = 0; var_15_object = Obj(); // 0x3b0 PushV
	var_15_object = var_11_object; // 0x3b1 Mov
	func_1249(var_14_bool, var_15_object); // 0x3b2 Call
	var_48_bool = var_14_bool == 0; // 0x3b4 Not
	if(var_48_bool == 0) goto Label_951; // 0x3b5 JumpB
	return 2; // 0x3b6 Return
	
Label_951:
	var_49_bool = 0; var_50_object = Obj(); // 0x3b7 PushV
	var_50_object = var_11_object; // 0x3b8 Mov
	func_1629(var_49_bool, var_50_object); // 0x3b9 Call
	var_53_bool = var_49_bool == 0; // 0x3bb Not
	if(var_53_bool == 0) goto Label_963; // 0x3bc JumpB
	var_54_object = GlobalVars[0]; // 0x3bd PushGE
	in(var_13_bool, var_11_object); // 0x3be ObjFunc
	var_55_bool = var_13_bool == 0; // 0x3c0 Not
	if(var_55_bool == 0) goto Label_963; // 0x3c1 JumpB
	return 2; // 0x3c2 Return
	
Label_963:
	func_1097(); // 0x3c4 Call
	var_56_object = Obj(); // 0x3c6 PushV
	var_56_object = var_11_object; // 0x3c7 Mov
	TaskCall(1); // 0x3c8 TaskCall
	func_147(var_57_object, var_56_object); // 0x3c9 Call
	TaskReturn(); // 0x3ca TaskReturn
	return 2; // 0x3cc Return
}


	task_7_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object, var_12_object, var_46_object)
	{
	var_47_bool = 0; var_48_object = Obj(); // 0x3ce PushV
	var_48_object = var_46_object; // 0x3cf Mov
	func_1249(var_47_bool, var_48_object); // 0x3d0 Call
	var_75_bool = var_47_bool == 0; // 0x3d2 Not
	if(var_75_bool == 0) goto Label_985; // 0x3d3 JumpB
	var_76_object = Obj(); // 0x3d4 PushV
	var_76_object = var_46_object; // 0x3d5 Mov
	func_1576(var_76_object); // 0x3d6 Call
	return 0; // 0x3d8 Return
	
Label_985:
	func_1097(); // 0x3da Call
	var_83_object = Obj(); // 0x3dc PushV
	var_83_object = var_46_object; // 0x3dd Mov
	func_1589(var_83_object); // 0x3de Call
	return 0; // 0x3e0 Return
	}


task_7_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); // 0x3e2 PushV
	var_14_object = var_11_object; // 0x3e3 Mov
	var_15_object = var_12_object; // 0x3e4 Mov
	func_1662(var_13_bool, var_14_object, var_15_object); // 0x3e5 Call
	if(var_13_bool == 0) goto Label_1004; // 0x3e7 JumpB
	var_46_object = Obj(); // 0x3e8 PushV
	var_46_object = var_11_object; // 0x3e9 Mov
	func_973(); // 0x3ea Call
	
Label_1004:
	return 0; // 0x3ec Return
}


task_7_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x3ee PushV
	var_13_object = var_11_object; // 0x3ef Mov
	func_1634(var_12_bool, var_13_object); // 0x3f0 Call
	if(var_12_bool == 0) goto Label_1018; // 0x3f2 JumpB
	func_1097(); // 0x3f4 Call
	var_57_object = Obj(); // 0x3f6 PushV
	var_57_object = var_11_object; // 0x3f7 Mov
	func_1702(var_57_object); // 0x3f8 Call
	
Label_1018:
	return 0; // 0x3fa Return
}


event_22(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object, var_12_int, var_13_float, var_14_float)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0; // 0x5fc PushV
	var_15_object = var_11_object; // 0x5fd Mov
	var_16_int = var_12_int; // 0x5fe Mov
	var_17_float = var_13_float; // 0x5ff Mov
	func_1273(var_16_int, var_17_float); // 0x600 Call
	return 0; // 0x602 Return
}


event_16(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object, var_12_string)
{
	var_13_float = 0; var_14_float = 0; // 0x603 PushV
	var_15_string = "health"; // 0x604 PushS
	var_16_bool = var_12_string == var_15_string; // 0x605 Eq
	if(var_16_bool == 0) goto Label_1551; // 0x606 JumpB
	var_17_string = "health"; // 0x607 PushS
	GetProperty(var_17_string, var_14_float); // 0x608 Func
	var_18_int = 0; // 0x60a PushI
	var_19_bool = var_14_float <= var_18_int; // 0x60b LE
	if(var_19_bool == 0) goto Label_1551; // 0x60c JumpB
	SignalDeath(var_11_object); // 0x60d Func
	
Label_1551:
	return 2; // 0x60f Return
}


event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object)
{
	var_12_object = Obj(); // 0x611 PushV
	var_12_object = var_11_object; // 0x612 Mov
	func_1708(var_12_object); // 0x613 Call
	return 0; // 0x615 Return
}


main(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector)
{
	
Label_716:
	Hold(); // 0x2cc Func
	goto Label_716; // 0x2ce Jump
}


func_0(var_19_object)
{
	func_1481(); // 0x2 Call
	var_60_object = Obj(); // 0x4 PushV
	var_60_object = var_19_object; // 0x5 Mov
	func_9(var_60_object); // 0x6 Call
	return 0; // 0x8 Return
}


func_1412(var_119_float, var_120_cvector)
{
	var_121_float = GetByIndex(var_120_cvector, 0); // 0x585 PushE
	var_122_float = GetByIndex(var_120_cvector, 0); // 0x586 PushE
	var_123_float = var_121_float * var_122_float; // 0x587 Mult
	var_124_float = GetByIndex(var_120_cvector, 2); // 0x588 PushE
	var_125_float = GetByIndex(var_120_cvector, 2); // 0x589 PushE
	var_126_float = var_124_float * var_125_float; // 0x58a Mult
	var_127_int = var_123_float + var_126_float; // 0x58b Add
	var_119_float = sqrt(var_127_int); // 0x58c Sqrt2
	return 0; // 0x58d Return
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


func_266(var_0_object, var_245_object)
{
	var_248_bool = 0; var_249_int = 0; var_250_int = 0; var_251_bool = 0; var_252_int = 0; var_253_int = 0; // 0x10a PushV
	var_0_object = var_245_object; // 0x10b TMov
	CanSee(var_253_int, var_0_object); // 0x10c Func
	var_254_object = var_1_object; // 0x10e PushT
	if(var_254_object == 0) goto Label_285; // 0x10f JumpB
	var_255_bool = 0; var_256_object = Obj(); // 0x110 PushV
	var_256_object = var_0_object; // 0x111 MovT
	func_1621(var_255_bool, var_256_object); // 0x112 Call
	if(var_255_bool == 0) goto Label_283; // 0x114 JumpB
	var_266_object = Obj(); var_267_bool = 0; // 0x115 PushV
	var_266_object = var_0_object; // 0x116 MovT
	var_267_bool = 1; // 0x117 MovB
	func_1565(var_266_object, var_267_bool); // 0x118 Call
	return 6; // 0x11a Return
	
Label_283:
	Face(var_0_object); // 0x11b Func
	
Label_285:
	var_268_string = "all"; // 0x11d PushS
	var_269_string = "shoot_begin"; // 0x11e PushS
	PlayAnimation(var_268_string, var_269_string); // 0x11f Func
	WaitForAnimEnd(var_251_bool); // 0x121 Func
	var_270_bool = var_251_bool == 0; // 0x123 Not
	if(var_270_bool == 0) goto Label_296; // 0x124 JumpB
	StopAsync(); // 0x125 Func
	return 6; // 0x127 Return
	
Label_296:
	var_271_string = "shot"; // 0x128 PushS
	Speak(var_271_string); // 0x129 Func
	var_272_string = "all"; // 0x12b PushS
	var_273_string = "shoot_end"; // 0x12c PushS
	PlayAnimation(var_272_string, var_273_string); // 0x12d Func
	WaitForAnimEnd(var_251_bool); // 0x12f Func
	var_274_bool = var_251_bool == 0; // 0x131 Not
	if(var_274_bool == 0) goto Label_310; // 0x132 JumpB
	StopAsync(); // 0x133 Func
	return 6; // 0x135 Return
	
Label_310:
	var_275_string = "all"; // 0x136 PushS
	var_276_string = "attack_on"; // 0x137 PushS
	LockAnimationEnd(var_275_string, var_276_string); // 0x138 Func
	var_252_int = 0; // 0x13a MovI
	var_253_int = 0; // 0x13b MovI
	
Label_316:
	var_277_int = 20; // 0x13c PushI
	var_278_bool = var_253_int < var_277_int; // 0x13d LT
	if(var_278_bool == 0) goto Label_364; // 0x13e JumpB
	var_279_float = 0.5; // 0x13f PushF
	Sleep(var_279_float, var_251_bool); // 0x140 Func
	var_280_bool = var_251_bool == 0; // 0x142 Not
	if(var_280_bool == 0) goto Label_325; // 0x143 JumpB
	return 6; // 0x144 Return
	
Label_325:
	CanSee(var_253_int, var_0_object); // 0x145 Func
	var_281_object = var_1_object; // 0x147 PushT
	if(var_281_object == 0) goto Label_347; // 0x148 JumpB
	var_252_int = 0; // 0x149 MovI
	var_282_bool = 0; var_283_object = Obj(); // 0x14a PushV
	var_283_object = var_0_object; // 0x14b MovT
	func_1621(var_282_bool, var_283_object); // 0x14c Call
	if(var_282_bool == 0) goto Label_344; // 0x14e JumpB
	func_405(); // 0x150 Call
	var_284_object = Obj(); var_285_bool = 0; // 0x152 PushV
	var_284_object = var_0_object; // 0x153 MovT
	var_285_bool = 0; // 0x154 MovB
	func_1565(var_284_object, var_285_bool); // 0x155 Call
	return 6; // 0x157 Return
	
Label_344:
	Face(var_0_object); // 0x158 Func
	goto Label_361; // 0x15a Jump
	
Label_361:
	var_286_int = 1; // 0x169 PushI
	var_253_int = var_253_int + var_286_int; // 0x16a Add2
	goto Label_316; // 0x16b Jump
	
Label_347:
	StopAsync(); // 0x15b Func
	var_287_int = 1; // 0x15d PushI
	var_252_int = var_252_int + var_287_int; // 0x15e Add2
	var_288_int = 4; // 0x15f PushI
	var_289_bool = var_252_int == var_288_int; // 0x160 Eq
	if(var_289_bool == 0) goto Label_361; // 0x161 JumpB
	var_290_string = "all"; // 0x162 PushS
	var_291_string = "attack_off"; // 0x163 PushS
	PlayAnimation(var_290_string, var_291_string); // 0x164 Func
	WaitForAnimEnd(); // 0x166 Func
	return 6; // 0x168 Return
	
Label_364:
	func_405(); // 0x16d Call
	var_292_object = Obj(); var_293_bool = 0; // 0x16f PushV
	var_292_object = var_245_object; // 0x170 Mov
	var_293_bool = 0; // 0x171 MovB
	func_1565(var_292_object, var_293_bool); // 0x172 Call
	return 6; // 0x174 Return
}


func_1422(var_107_float, var_108_cvector, var_109_cvector)
{
	var_110_float = 0; var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); // 0x58f PushV
	var_111_cvector = var_108_cvector; // 0x590 Mov
	var_112_cvector = var_109_cvector; // 0x591 Mov
	func_1403(var_110_float, var_111_cvector, var_112_cvector); // 0x592 Call
	var_119_float = 0; var_120_cvector = CVector(0,0,0); // 0x594 PushV
	var_120_cvector = var_108_cvector; // 0x595 Mov
	func_1412(var_119_float, var_120_cvector); // 0x596 Call
	var_128_float = 0; var_129_cvector = CVector(0,0,0); // 0x598 PushV
	var_129_cvector = var_109_cvector; // 0x599 Mov
	func_1412(var_128_float, var_129_cvector); // 0x59a Call
	var_130_float = var_119_float * var_128_float; // 0x59c Mult
	var_107_float = var_110_float / var_110_float; // 0x59d Div2
	return 0; // 0x59e Return
}


func_147(var_0_object, var_56_object)
{
	var_58_bool = 0; var_59_bool = 0; // 0x93 PushV
	var_0_object = var_56_object; // 0x94 TMov
	Face(var_56_object); // 0x95 Func
	
Label_151:
	var_60_float = 0.5; // 0x97 PushF
	Sleep(var_60_float, var_59_bool); // 0x98 Func
	var_61_bool = 0; // 0x9a PushV
	var_61_bool = 1; // 0x9b MovB
	var_62_bool = var_59_bool == 0; // 0x9c Not
	if(var_62_bool == 0) goto Label_165; // 0x9d JumpB
	var_63_bool = 0; var_64_object = Obj(); // 0x9e PushV
	var_64_object = var_0_object; // 0x9f MovT
	func_1249(var_63_bool, var_64_object); // 0xa0 Call
	var_65_bool = var_63_bool == 0; // 0xa2 Not
	if(var_65_bool == 0) goto Label_165; // 0xa3 JumpB
	var_61_bool = 0; // 0xa4 MovB
	
Label_165:
	if(var_61_bool == 0) goto Label_167; // 0xa5 JumpB
	goto Label_168; // 0xa6 Jump
	
Label_168:
	StopAsync(); // 0xa8 Func
	return 2; // 0xaa Return
	
Label_167:
	goto Label_151; // 0xa7 Jump
}


func_1403(var_110_float, var_111_cvector, var_112_cvector)
{
	var_113_float = GetByIndex(var_111_cvector, 0); // 0x57c PushE
	var_114_float = GetByIndex(var_112_cvector, 0); // 0x57d PushE
	var_115_float = var_113_float * var_114_float; // 0x57e Mult
	var_116_float = GetByIndex(var_111_cvector, 2); // 0x57f PushE
	var_117_float = GetByIndex(var_112_cvector, 2); // 0x580 PushE
	var_118_float = var_116_float * var_117_float; // 0x581 Mult
	var_110_float = var_115_float + var_118_float; // 0x582 Add2
	return 0; // 0x583 Return
}


func_405()
{
	StopAsync(); // 0x195 Func
	StopGroup0(); // 0x197 Func
	Stop(); // 0x199 Func
	return 0; // 0x19b Return
}


func_1558()
{
	var_21_object = GlobalVars[0]; // 0x616 PushGE
	var_22_object = Obj(); // 0x617 PushV
	func_1397(var_22_object); // 0x618 Call
	var_21_object = var_22_object; // 0x619 Mov
	GlobalVars[0] = var_21_object; // 0x61b PopGE
	return 0; // 0x61c Return
}


func_921(var_14_object)
{
	func_1558(); // 0x39b Call
	var_25_object = Obj(); // 0x39d PushV
	var_25_object = var_14_object; // 0x39e Mov
	func_973(); // 0x39f Call
	
Label_929:
	func_934(); // 0x3a2 Call
	goto Label_929; // 0x3a4 Jump
}


func_1565(var_63_object, var_64_bool)
{
	var_65_object = Obj(); var_66_bool = 0; // 0x61e PushV
	var_65_object = var_63_object; // 0x61f Mov
	var_66_bool = var_64_bool; // 0x620 Mov
	TaskCall(3); // 0x621 TaskCall
	func_421(var_67_object, var_68_object, var_69_bool, var_65_object, var_66_bool); // 0x622 Call
	TaskReturn(); // 0x623 TaskReturn
	ResetAAS(); // 0x625 Func
	return 0; // 0x627 Return
}


func_798()
{
	var_92_string = "all"; // 0x31e PushS
	var_93_string = "attack_on"; // 0x31f PushS
	LockAnimationEnd(var_92_string, var_93_string); // 0x320 Func
	return 0; // 0x322 Return
}


func_1439(var_12_bool, var_13_string, var_14_string)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x59f PushV
	FindActor(var_16_object, var_13_string); // 0x5a0 Func
	var_17_bool = var_16_object == 0; // 0x5a2 NullEq
	if(var_17_bool == 0) goto Label_1446; // 0x5a3 JumpB
	var_12_bool = 0; // 0x5a4 MovB
	return 2; // 0x5a5 Return
	
Label_1446:
	Trigger(var_16_object, var_14_string); // 0x5a6 Func
	var_12_bool = 1; // 0x5a8 MovB
	return 2; // 0x5a9 Return
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


func_803(var_0_object, var_1_object, var_37_object)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); // 0x323 PushV
	var_0_object = var_37_object; // 0x324 TMov
	var_1_object = 0; // 0x325 TMovB
	func_852(var_41_cvector); // 0x327 Call
	
Label_809:
	GetDirection(var_40_cvector); // 0x329 Func
	var_50_cvector = CVector(0,0,0); var_51_object = Obj(); // 0x32b PushV
	var_51_object = var_0_object; // 0x32c MovT
	func_1110(var_51_object); // 0x32d Call
	var_41_cvector = var_50_cvector; // 0x32e Mov
	var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); // 0x330 PushV
	var_57_cvector = var_40_cvector; // 0x331 Mov
	var_58_cvector = var_41_cvector; // 0x332 Mov
	func_1422(var_56_float, var_57_cvector, var_58_cvector); // 0x333 Call
	var_80_float = 0.70711; // 0x335 PushF
	var_81_bool = var_56_float < var_80_float; // 0x336 LT
	if(var_81_bool == 0) goto Label_832; // 0x337 JumpB
	var_82_object = Obj(); var_83_float = 0; // 0x338 PushV
	var_82_object = var_0_object; // 0x339 MovT
	var_83_float = 4.71239; // 0x33a MovF
	func_1351(var_83_float); // 0x33b Call
	func_798(); // 0x33e Call
	
Label_832:
	var_94_float = 0.5; // 0x340 PushF
	Sleep(var_94_float); // 0x341 Func
	var_95_bool = 0; // 0x343 PushV
	var_95_bool = 0; // 0x344 MovB
	var_96_bool = var_1_object == 0; // 0x345 Not
	if(var_96_bool == 0) goto Label_845; // 0x346 JumpB
	var_97_bool = 0; var_98_object = Obj(); // 0x347 PushV
	var_98_object = var_0_object; // 0x348 MovT
	func_1249(var_97_bool, var_98_object); // 0x349 Call
	if(var_97_bool == 0) goto Label_845; // 0x34b JumpB
	var_95_bool = 1; // 0x34c MovB
	
Label_845:
	if(var_95_bool == 0) goto Label_809; // 0x34d JumpB
	StopAsync(); // 0x34e Func
	var_131_string = "spine"; // 0x350 PushS
	UnlookAsync(var_131_string); // 0x351 Func
	return 4; // 0x353 Return
}


func_421(var_0_object, var_1_object, var_2_bool, var_65_object, var_66_bool)
{
	var_70_bool = 0; var_71_bool = 0; var_72_bool = 0; var_73_bool = 0; // 0x1a5 PushV
	var_0_object = var_65_object; // 0x1a6 TMov
	Face(var_0_object); // 0x1a7 Func
	var_74_bool = var_66_bool; // 0x1a9 Push
	if(var_74_bool == 0) goto Label_433; // 0x1aa JumpB
	var_75_string = "all"; // 0x1ab PushS
	var_76_string = "attack_on"; // 0x1ac PushS
	PlayAnimation(var_75_string, var_76_string); // 0x1ad Func
	WaitForAnimEnd(); // 0x1af Func
	
Label_433:
	var_77_string = "all"; // 0x1b1 PushS
	var_78_string = "attack_on"; // 0x1b2 PushS
	LockAnimationEnd(var_77_string, var_78_string); // 0x1b3 Func
	var_79_bool = 1; // 0x1b5 PushB
	SetAttackState(var_79_bool); // 0x1b6 Func
	
Label_440:
	var_80_bool = 0; var_81_object = Obj(); // 0x1b8 PushV
	var_81_object = var_0_object; // 0x1b9 MovT
	func_1249(var_80_bool, var_81_object); // 0x1ba Call
	if(var_80_bool == 0) goto Label_542; // 0x1bc JumpB
	CanSee(var_73_bool, var_0_object); // 0x1bd Func
	var_82_bool = var_73_bool; // 0x1bf Push
	if(var_82_bool == 0) goto Label_453; // 0x1c0 JumpB
	func_590(var_73_bool); // 0x1c2 Call
	goto Label_532; // 0x1c4 Jump
	
Label_532:
	var_210_bool = var_1_object != 0; // 0x214 NullNeq
	if(var_210_bool == 0) goto Label_538; // 0x215 JumpB
	func_585(var_72_bool, var_73_bool); // 0x217 Call
	goto Label_541; // 0x219 Jump
	
Label_541:
	goto Label_440; // 0x21d Jump
	
Label_538:
	var_211_int = 2; // 0x21a PushI
	Sleep(var_211_int); // 0x21b Func
	
Label_453:
	var_212_object = Obj(); // 0x1c5 PushV
	var_212_object = var_0_object; // 0x1c6 MovT
	func_1340(); // 0x1c7 Call
	var_2_bool = 1; // 0x1c9 TMovB
	var_221_string = "all"; // 0x1ca PushS
	var_222_string = "hunt"; // 0x1cb PushS
	PlayAnimation(var_221_string, var_222_string); // 0x1cc Func
	WaitForAnimEnd(var_72_bool); // 0x1ce Func
	var_223_bool = var_72_bool == 0; // 0x1d0 Not
	if(var_223_bool == 0) goto Label_476; // 0x1d1 JumpB
	var_224_bool = var_1_object != 0; // 0x1d2 NullNeq
	if(var_224_bool == 0) goto Label_471; // 0x1d3 JumpB
	func_585(var_72_bool, var_73_bool); // 0x1d5 Call
	
Label_471:
	var_225_string = "all"; // 0x1d7 PushS
	var_226_string = "attack_on"; // 0x1d8 PushS
	LockAnimationEnd(var_225_string, var_226_string); // 0x1d9 Func
	goto Label_440; // 0x1db Jump
	
Label_476:
	var_227_bool = 0; var_228_object = Obj(); // 0x1dc PushV
	var_228_object = var_0_object; // 0x1dd MovT
	func_1249(var_227_bool, var_228_object); // 0x1de Call
	var_229_bool = var_227_bool == 0; // 0x1e0 Not
	if(var_229_bool == 0) goto Label_483; // 0x1e1 JumpB
	goto Label_542; // 0x1e2 Jump
	
Label_542:
	var_230_bool = 0; // 0x21e PushB
	SetAttackState(var_230_bool); // 0x21f Func
	StopAsync(); // 0x221 Func
	var_231_string = "all"; // 0x223 PushS
	var_232_string = "attack_off"; // 0x224 PushS
	PlayAnimation(var_231_string, var_232_string); // 0x225 Func
	WaitForAnimEnd(); // 0x227 Func
	return 4; // 0x229 Return
	
Label_483:
	CanSee(var_73_bool, var_0_object); // 0x1e3 Func
	var_233_bool = var_73_bool; // 0x1e5 Push
	if(var_233_bool == 0) goto Label_494; // 0x1e6 JumpB
	var_2_bool = 0; // 0x1e7 TMovB
	Face(var_0_object); // 0x1e8 Func
	func_590(var_73_bool); // 0x1eb Call
	goto Label_532; // 0x1ed Jump
	
Label_494:
	var_234_string = "all"; // 0x1ee PushS
	var_235_string = "attack_on"; // 0x1ef PushS
	LockAnimationEnd(var_234_string, var_235_string); // 0x1f0 Func
	var_236_int = 3; // 0x1f2 PushI
	Sleep(var_236_int, var_72_bool); // 0x1f3 Func
	var_237_bool = var_72_bool == 0; // 0x1f5 Not
	if(var_237_bool == 0) goto Label_513; // 0x1f6 JumpB
	var_238_bool = var_1_object != 0; // 0x1f7 NullNeq
	if(var_238_bool == 0) goto Label_508; // 0x1f8 JumpB
	func_585(var_72_bool, var_73_bool); // 0x1fa Call
	
Label_508:
	var_239_string = "all"; // 0x1fc PushS
	var_240_string = "attack_on"; // 0x1fd PushS
	LockAnimationEnd(var_239_string, var_240_string); // 0x1fe Func
	goto Label_440; // 0x200 Jump
	
Label_513:
	var_241_bool = 0; var_242_object = Obj(); // 0x201 PushV
	var_242_object = var_0_object; // 0x202 MovT
	func_1249(var_241_bool, var_242_object); // 0x203 Call
	var_243_bool = var_241_bool == 0; // 0x205 Not
	if(var_243_bool == 0) goto Label_520; // 0x206 JumpB
	goto Label_542; // 0x207 Jump
	
Label_520:
	var_2_bool = 0; // 0x208 TMovB
	CanSee(var_73_bool, var_0_object); // 0x209 Func
	var_244_bool = var_73_bool; // 0x20b Push
	if(var_244_bool == 0) goto Label_531; // 0x20c JumpB
	Face(var_0_object); // 0x20d Func
	func_590(var_73_bool); // 0x210 Call
	goto Label_532; // 0x212 Jump
	
Label_531:
	goto Label_542; // 0x213 Jump
}


func_934()
{
	func_1558(); // 0x3a7 Call
	
Label_937:
	func_1019(var_20_cvector, var_14_object); // 0x3aa Call
	goto Label_937; // 0x3ac Jump
}


func_1702(var_57_object)
{
	var_58_object = Obj(); // 0x6a7 PushV
	var_58_object = var_57_object; // 0x6a8 Mov
	func_1600(var_58_object); // 0x6a9 Call
	return 0; // 0x6ab Return
}


func_1576(var_76_object)
{
	var_77_bool = 0; var_78_bool = 0; // 0x628 PushV
	var_79_bool = var_76_object == 0; // 0x629 NullEq
	if(var_79_bool == 0) goto Label_1580; // 0x62a JumpB
	return 2; // 0x62b Return
	
Label_1580:
	var_80_object = GlobalVars[0]; // 0x62c PushGE
	in(var_78_bool, var_76_object); // 0x62d ObjFunc
	var_81_bool = var_78_bool == 0; // 0x62f Not
	if(var_81_bool == 0) goto Label_1588; // 0x630 JumpB
	var_82_object = GlobalVars[0]; // 0x631 PushGE
	add(var_76_object); // 0x632 ObjFunc
	
Label_1588:
	return 2; // 0x634 Return
}


func_171()
{
	StopAsync(); // 0xab Func
	var_57_int = 100; // 0xad PushI
	KillTimer(var_57_int); // 0xae Func
	StopGroup0(); // 0xb0 Func
	return 0; // 0xb2 Return
}


func_1451(var_25_int, var_26_int)
{
	var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; // 0x5ab PushV
	var_35_bool = var_25_int > var_26_int; // 0x5ac GT
	if(var_35_bool == 0) goto Label_1458; // 0x5ad JumpB
	var_36_string = "GenerateMoney: iMin > iMax"; // 0x5ae PushS
	Trace(var_36_string); // 0x5af Func
	return 8; // 0x5b1 Return
	
Label_1458:
	var_31_int = 0; // 0x5b2 MovI
	var_37_bool = var_25_int != var_26_int; // 0x5b3 Neq
	if(var_37_bool == 0) goto Label_1465; // 0x5b4 JumpB
	var_38_int = var_26_int - var_25_int; // 0x5b5 Sub
	irand(var_32_int, var_38_int); // 0x5b6 Func
	goto Label_1469; // 0x5b8 Jump
	
Label_1469:
	var_31_int = var_31_int + var_25_int; // 0x5bd Add2
	var_39_int = 0; // 0x5be PushI
	var_40_bool = var_31_int == var_39_int; // 0x5bf Eq
	if(var_40_bool == 0) goto Label_1474; // 0x5c0 JumpB
	return 8; // 0x5c1 Return
	
Label_1474:
	var_41_string = "Money"; // 0x5c2 PushS
	GetInvItemByName(var_33_int, var_41_string); // 0x5c3 Func
	var_42_int = 0; // 0x5c5 PushI
	AddItem(var_34_bool, var_33_int, var_42_int, var_31_int); // 0x5c6 Func
	return 8; // 0x5c8 Return
	
Label_1465:
	var_43_int = 0; // 0x5b9 PushI
	var_44_bool = var_25_int == var_43_int; // 0x5ba Eq
	if(var_44_bool == 0) goto Label_1469; // 0x5bb JumpB
	return 8; // 0x5bc Return
}


func_1708(var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0x6ac PushV
	GetScene(var_14_object); // 0x6ad Func
	var_15_object = Obj(); // 0x6af PushV
	func_1369(var_15_object); // 0x6b0 Call
	RemoveStationaryActor(var_15_object); // 0x6b2 ObjFunc
	var_18_object = Obj(); // 0x6b4 PushV
	var_18_object = var_12_object; // 0x6b5 Mov
	func_1523(var_18_object); // 0x6b6 Call
	return 2; // 0x6b8 Return
}


func_942()
{
	return 0; // 0x3ae Return
}


func_1589(var_83_object)
{
	var_84_object = Obj(); // 0x636 PushV
	var_84_object = var_83_object; // 0x637 Mov
	func_1576(var_84_object); // 0x638 Call
	var_85_object = Obj(); var_86_bool = 0; // 0x63a PushV
	var_85_object = var_83_object; // 0x63b Mov
	var_86_bool = 1; // 0x63c MovB
	func_1565(var_85_object, var_86_bool); // 0x63d Call
	return 0; // 0x63f Return
}


func_1208(var_31_bool)
{
	var_33_bool = 0; var_34_bool = 0; // 0x4b8 PushV
	IsDead(var_34_bool); // 0x4b9 ObjFunc
	var_31_bool = var_34_bool; // 0x4bb Mov
	return 2; // 0x4bc Return
}


func_1340()
{
	var_213_cvector = CVector(0,0,0); var_214_cvector = CVector(0,0,0); var_215_cvector = CVector(0,0,0); var_216_cvector = CVector(0,0,0); var_217_cvector = CVector(0,0,0); var_218_cvector = CVector(0,0,0); // 0x53c PushV
	GetPosition(var_216_cvector); // 0x53d ObjFunc
	GetPosition(var_217_cvector); // 0x53f Func
	var_218_cvector = var_216_cvector - var_217_cvector; // 0x541 Sub2
	var_219_float = GetByIndex(var_218_cvector, 0); // 0x542 PushE
	var_220_float = GetByIndex(var_218_cvector, 2); // 0x543 PushE
	RotateAsync(var_219_float, var_220_float); // 0x544 Func
	return 6; // 0x546 Return
}


func_1213(var_20_bool, var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); // 0x4bd PushV
	var_26_bool = var_21_object == 0; // 0x4be NullEq
	if(var_26_bool == 0) goto Label_1218; // 0x4bf JumpB
	var_20_bool = 0; // 0x4c0 MovB
	return 4; // 0x4c1 Return
	
Label_1218:
	var_27_bool = 0; // 0x4c2 PushV
	var_27_bool = 0; // 0x4c3 MovB
	var_28_string = "IsDead"; // 0x4c4 PushS
	var_29_int = 1; // 0x4c5 PushI
	var_30_bool = IsFuncExist(var_21_object, var_28_string, var_29_int); // 0x4c6 FuncExist
	if(var_30_bool == 0) goto Label_1230; // 0x4c7 JumpB
	var_31_bool = 0; var_32_object = Obj(); // 0x4c8 PushV
	var_32_object = var_21_object; // 0x4c9 Mov
	func_1208(var_32_object); // 0x4ca Call
	if(var_31_bool == 0) goto Label_1230; // 0x4cc JumpB
	var_27_bool = 1; // 0x4cd MovB
	
Label_1230:
	if(var_27_bool == 0) goto Label_1233; // 0x4ce JumpB
	var_20_bool = 0; // 0x4cf MovB
	return 4; // 0x4d0 Return
	
Label_1233:
	GetScene(var_24_object); // 0x4d1 Func
	var_35_bool = var_24_object == 0; // 0x4d3 NullEq
	if(var_35_bool == 0) goto Label_1239; // 0x4d4 JumpB
	var_20_bool = 0; // 0x4d5 MovB
	return 4; // 0x4d6 Return
	
Label_1239:
	GetScene(var_25_object); // 0x4d7 ObjFunc
	var_36_bool = var_24_object != var_25_object; // 0x4d9 Neq
	if(var_36_bool == 0) goto Label_1245; // 0x4da JumpB
	var_20_bool = 0; // 0x4db MovB
	return 4; // 0x4dc Return
	
Label_1245:
	var_20_bool = 1; // 0x4dd MovB
	return 4; // 0x4de Return
}


func_1600(var_58_object)
{
	var_59_bool = 0; var_60_bool = 0; // 0x640 PushV
	var_61_object = GlobalVars[0]; // 0x641 PushGE
	in(var_60_bool, var_58_object); // 0x642 ObjFunc
	var_62_bool = var_60_bool; // 0x644 Push
	if(var_62_bool == 0) goto Label_1612; // 0x645 JumpB
	var_63_object = Obj(); var_64_bool = 0; // 0x646 PushV
	var_63_object = var_58_object; // 0x647 Mov
	var_64_bool = 1; // 0x648 MovB
	func_1565(var_63_object, var_64_bool); // 0x649 Call
	goto Label_1620; // 0x64b Jump
	
Label_1620:
	return 2; // 0x654 Return
	
Label_1612:
	var_245_object = Obj(); // 0x64c PushV
	var_245_object = var_58_object; // 0x64d Mov
	TaskCall(2); // 0x64e TaskCall
	func_266(var_247_bool, var_245_object); // 0x64f Call
	TaskReturn(); // 0x650 TaskReturn
	ResetAAS(); // 0x652 Func
}


func_1351(var_83_float)
{
	var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); // 0x547 PushV
	GetPosition(var_87_cvector); // 0x548 ObjFunc
	GetPosition(var_88_cvector); // 0x54a Func
	var_89_cvector = var_87_cvector - var_88_cvector; // 0x54c Sub2
	var_90_float = GetByIndex(var_89_cvector, 0); // 0x54d PushE
	var_91_float = GetByIndex(var_89_cvector, 2); // 0x54e PushE
	RotateAsync(var_90_float, var_91_float, var_83_float); // 0x54f Func
	return 6; // 0x551 Return
}


func_1481()
{
	var_20_int = 0; var_21_bool = 0; var_22_int = 0; var_23_bool = 0; // 0x5c9 PushV
	var_24_int = 0; // 0x5ca PushI
	ClearSubContainer(var_24_int); // 0x5cb Func
	var_25_int = 0; var_26_int = 0; // 0x5cd PushV
	var_25_int = 500; // 0x5ce MovI
	var_26_int = 1000; // 0x5cf MovI
	func_1451(var_25_int, var_26_int); // 0x5d0 Call
	var_45_int = 4; // 0x5d2 PushI
	irand(var_22_int, var_45_int); // 0x5d3 Func
	var_46_int = 0; // 0x5d5 PushI
	var_47_bool = var_22_int != var_46_int; // 0x5d6 Neq
	if(var_47_bool == 0) goto Label_1503; // 0x5d7 JumpB
	var_48_int = 0; var_49_string = ""; // 0x5d8 PushV
	var_49_string = "rifle_ammo"; // 0x5d9 MovS
	func_1518(var_48_int, var_49_string); // 0x5da Call
	var_52_int = 0; // 0x5dc PushI
	AddItem(var_23_bool, var_48_int, var_52_int, var_22_int); // 0x5dd Func
	
Label_1503:
	var_53_int = 3; // 0x5df PushI
	irand(var_22_int, var_53_int); // 0x5e0 Func
	var_54_int = 0; // 0x5e2 PushI
	var_55_bool = var_22_int == var_54_int; // 0x5e3 Eq
	if(var_55_bool == 0) goto Label_1517; // 0x5e4 JumpB
	var_56_int = 0; var_57_string = ""; // 0x5e5 PushV
	var_57_string = "rusk"; // 0x5e6 MovS
	func_1518(var_56_int, var_57_string); // 0x5e7 Call
	var_58_int = 0; // 0x5e9 PushI
	var_59_int = 1; // 0x5ea PushI
	AddItem(var_23_bool, var_56_int, var_58_int, var_59_int); // 0x5eb Func
	
Label_1517:
	return 4; // 0x5ed Return
}


func_585(var_0_object, var_1_object)
{
	var_0_object = var_1_object; // 0x249 TMovT
	var_1_object = 0; // 0x24a SetNullT
	Face(var_0_object); // 0x24b Func
	return 0; // 0x24d Return
}


func_1097()
{
	StopGroup0(); // 0x449 Func
	Stop(); // 0x44b Func
	return 0; // 0x44d Return
}


func_590(var_0_object)
{
	var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_object = Obj(); var_87_int = 0; var_88_cvector = CVector(0,0,0); var_89_float = 0; var_90_object = Obj(); var_91_object = Obj(); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_object = Obj(); var_96_int = 0; var_97_cvector = CVector(0,0,0); var_98_float = 0; var_99_object = Obj(); var_100_object = Obj(); // 0x24e PushV
	ReportAttack(var_0_object); // 0x24f Func
	GetDirection(var_92_cvector); // 0x251 Func
	var_101_cvector = CVector(0,0,0); var_102_object = Obj(); // 0x253 PushV
	var_102_object = var_0_object; // 0x254 MovT
	func_1110(var_102_object); // 0x255 Call
	var_93_cvector = var_101_cvector; // 0x256 Mov
	var_107_float = 0; var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); // 0x258 PushV
	var_108_cvector = var_92_cvector; // 0x259 Mov
	var_109_cvector = var_93_cvector; // 0x25a Mov
	func_1422(var_107_float, var_108_cvector, var_109_cvector); // 0x25b Call
	var_131_float = 0.96593; // 0x25d PushF
	var_132_bool = var_107_float < var_131_float; // 0x25e LT
	if(var_132_bool == 0) goto Label_609; // 0x25f JumpB
	return 18; // 0x260 Return
	
Label_609:
	var_133_string = "all"; // 0x261 PushS
	var_134_string = "attack_begin1"; // 0x262 PushS
	PlayAnimation(var_133_string, var_134_string); // 0x263 Func
	WaitForAnimEnd(); // 0x265 Func
	var_135_string = "shot"; // 0x267 PushS
	Speak(var_135_string); // 0x268 Func
	GetDirection(var_92_cvector); // 0x26a Func
	var_136_cvector = CVector(0,0,0); var_137_object = Obj(); // 0x26c PushV
	var_137_object = var_0_object; // 0x26d MovT
	func_1110(var_137_object); // 0x26e Call
	var_93_cvector = var_136_cvector; // 0x26f Mov
	var_138_float = GetByIndex(var_93_cvector, 1); // 0x271 PushE
	var_139_float = 0; var_140_object = Obj(); // 0x272 PushV
	var_140_object = var_0_object; // 0x273 MovT
	func_1362(var_140_object); // 0x274 Call
	var_138_float = var_138_float + var_139_float; // 0x276 Add2
	SetByIndex(var_93_cvector, 1) = var_138_float; // 0x277 PopE
	var_145_float = 0.2618; // 0x278 PushF
	RandVecCone3D(var_94_cvector, var_93_cvector, var_145_float); // 0x279 Func
	GetVictimMaterial(var_94_cvector, var_95_object, var_96_int, var_97_cvector); // 0x27b Func
	var_146_bool = var_95_object != 0; // 0x27d NullNeq
	if(var_146_bool == 0) goto Label_668; // 0x27e JumpB
	var_147_bool = var_95_object == var_0_object; // 0x27f Eq
	if(var_147_bool == 0) goto Label_653; // 0x280 JumpB
	var_148_float = 0; var_149_object = Obj(); var_150_float = 0; var_151_int = 0; // 0x281 PushV
	var_149_object = var_0_object; // 0x282 MovT
	var_150_float = 1.5; // 0x283 MovF
	var_151_int = 0; // 0x284 MovI
	func_1144(var_148_float, var_149_object, var_150_float, var_151_int); // 0x285 Call
	var_98_float = var_148_float; // 0x286 Mov
	var_198_int = 2; // 0x288 PushI
	var_199_float = 1.5; // 0x289 PushF
	ReportHit(var_0_object, var_198_int, var_98_float, var_199_float); // 0x28a Func
	goto Label_668; // 0x28c Jump
	
Label_668:
	var_200_string = "all"; // 0x29c PushS
	var_201_string = "attack_end1"; // 0x29d PushS
	PlayAnimation(var_200_string, var_201_string); // 0x29e Func
	WaitForAnimEnd(); // 0x2a0 Func
	var_202_string = "all"; // 0x2a2 PushS
	var_203_string = "attack_on"; // 0x2a3 PushS
	LockAnimationEnd(var_202_string, var_203_string); // 0x2a4 Func
	return 18; // 0x2a6 Return
	
Label_653:
	var_204_int = -1; // 0x28d PushI
	var_205_bool = var_96_int != var_204_int; // 0x28e Neq
	if(var_205_bool == 0) goto Label_668; // 0x28f JumpB
	GetScene(var_99_object); // 0x290 Func
	var_206_string = "scripted"; // 0x292 PushS
	var_207_cvector = CVector(0.0, 0.0, 1.0); // 0x293 PushVec
	var_208_string = "richochet.xml"; // 0x294 PushS
	AddActorByType(var_100_object, var_206_string, var_99_object, var_97_cvector, var_207_cvector, var_208_string); // 0x295 Func
	var_209_string = "Material"; // 0x297 PushS
	SetScriptProperty(var_209_string, var_96_int); // 0x298 ObjFunc
	var_100_object = 0; // 0x29a SetNull
	var_99_object = 0; // 0x29b SetNull
}


func_1102(var_173_string, var_174_int)
{
	var_175_int = 1; // 0x44f PushI
	var_176_bool = var_174_int == var_175_int; // 0x450 Eq
	if(var_176_bool == 0) goto Label_1108; // 0x451 JumpB
	var_173_string = "fire"; // 0x452 MovS
	return 0; // 0x453 Return
	
Label_1108:
	var_173_string = "phys"; // 0x454 MovS
	return 0; // 0x455 Return
}


func_1362(var_139_float)
{
	var_141_float = 0; var_142_float = 0; var_143_float = 0; var_144_float = 0; // 0x552 PushV
	GetEyesHeight(var_143_float); // 0x553 Func
	GetEyesHeight(var_144_float); // 0x555 ObjFunc
	var_139_float = var_144_float - var_143_float; // 0x557 Sub2
	return 4; // 0x558 Return
}


func_852(var_0_object)
{
	var_42_float = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_float = 0; var_46_float = 0; var_47_cvector = CVector(0,0,0); // 0x354 PushV
	GetEyesHeight(var_45_float); // 0x355 Func
	GetEyesHeight(var_46_float); // 0x357 TObjFunc
	var_47_cvector = CVector(0.0, 0.0, 0.0); // 0x359 MovV
	var_48_float = GetByIndex(var_47_cvector, 1); // 0x35a PushE
	var_48_float = var_46_float - var_45_float; // 0x35b Sub2
	SetByIndex(var_47_cvector, 1) = var_48_float; // 0x35c PopE
	var_49_string = "spine"; // 0x35d PushS
	DirLookAsyncRel(var_0_object, var_49_string, var_47_cvector); // 0x35e Func
	return 6; // 0x360 Return
}


func_1621(var_255_bool, var_256_object)
{
	var_257_float = 0; var_258_object = Obj(); // 0x656 PushV
	var_258_object = var_256_object; // 0x657 Mov
	func_1117(var_258_object); // 0x658 Call
	var_265_float = 40000.0; // 0x65a PushF
	var_255_bool = var_257_float <= var_265_float; // 0x65b LE2
	return 0; // 0x65c Return
}


func_1110(var_101_cvector)
{
	var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); // 0x456 PushV
	GetPosition(var_105_cvector); // 0x457 Func
	GetPosition(var_106_cvector); // 0x459 ObjFunc
	var_101_cvector = var_106_cvector - var_105_cvector; // 0x45b Sub2
	return 4; // 0x45c Return
}


func_1369(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj(); // 0x559 PushV
	self(var_17_object); // 0x55a Func
	var_15_object = var_17_object; // 0x55c Mov
	return 2; // 0x55d Return
}


func_1629(var_53_bool, var_54_object)
{
	var_55_bool = 0; var_56_bool = 0; // 0x65d PushV
	IsPlayerActor(var_54_object, var_56_bool); // 0x65e Func
	var_53_bool = var_56_bool; // 0x660 Mov
	return 2; // 0x661 Return
}


func_1117(var_257_float)
{
	var_259_cvector = CVector(0,0,0); var_260_cvector = CVector(0,0,0); var_261_cvector = CVector(0,0,0); var_262_cvector = CVector(0,0,0); var_263_cvector = CVector(0,0,0); var_264_cvector = CVector(0,0,0); // 0x45d PushV
	GetPosition(var_262_cvector); // 0x45e Func
	GetPosition(var_263_cvector); // 0x460 ObjFunc
	var_264_cvector = var_263_cvector - var_262_cvector; // 0x462 Sub2
	var_257_float = var_264_cvector | var_264_cvector; // 0x463 Or2
	return 6; // 0x464 Return
}


func_1375(var_264_float, var_265_cvector, var_266_cvector)
{
	var_267_cvector = CVector(0,0,0); var_268_cvector = CVector(0,0,0); // 0x55f PushV
	var_268_cvector = var_266_cvector - var_265_cvector; // 0x560 Sub2
	var_264_float = var_268_cvector | var_268_cvector; // 0x561 Or2
	return 2; // 0x562 Return
}


func_1249(var_16_bool, var_17_object)
{
	var_18_int = 0; var_19_int = 0; // 0x4e1 PushV
	var_20_bool = 0; var_21_object = Obj(); // 0x4e2 PushV
	var_21_object = var_17_object; // 0x4e3 Mov
	func_1213(var_20_bool, var_21_object); // 0x4e4 Call
	var_37_bool = var_20_bool == 0; // 0x4e6 Not
	if(var_37_bool == 0) goto Label_1258; // 0x4e7 JumpB
	var_16_bool = 0; // 0x4e8 MovB
	return 2; // 0x4e9 Return
	
Label_1258:
	var_38_bool = 0; var_39_object = Obj(); var_40_string = ""; // 0x4ea PushV
	var_39_object = var_17_object; // 0x4eb Mov
	var_40_string = "noaccess"; // 0x4ec MovS
	func_1132(var_38_bool, var_39_object, var_40_string); // 0x4ed Call
	var_47_bool = var_38_bool == 0; // 0x4ef Not
	if(var_47_bool == 0) goto Label_1267; // 0x4f0 JumpB
	var_16_bool = 1; // 0x4f1 MovB
	return 2; // 0x4f2 Return
	
Label_1267:
	var_48_string = "noaccess"; // 0x4f3 PushS
	GetProperty(var_48_string, var_19_int); // 0x4f4 ObjFunc
	var_49_int = 0; // 0x4f6 PushI
	var_16_bool = var_19_int == var_49_int; // 0x4f7 Eq2
	return 2; // 0x4f8 Return
}


func_1634(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_bool = 0; // 0x662 PushV
	var_16_bool = 0; var_17_object = Obj(); // 0x663 PushV
	var_17_object = var_13_object; // 0x664 Mov
	func_1249(var_16_bool, var_17_object); // 0x665 Call
	var_50_bool = var_16_bool == 0; // 0x667 Not
	if(var_50_bool == 0) goto Label_1643; // 0x668 JumpB
	var_12_bool = 0; // 0x669 MovB
	return 2; // 0x66a Return
	
Label_1643:
	var_51_object = GlobalVars[0]; // 0x66b PushGE
	in(var_15_bool, var_13_object); // 0x66c ObjFunc
	var_52_bool = var_15_bool; // 0x66e Push
	if(var_52_bool == 0) goto Label_1650; // 0x66f JumpB
	var_12_bool = 1; // 0x670 MovB
	return 2; // 0x671 Return
	
Label_1650:
	var_53_bool = 0; var_54_object = Obj(); // 0x672 PushV
	var_54_object = var_13_object; // 0x673 Mov
	func_1629(var_53_bool, var_54_object); // 0x674 Call
	var_12_bool = var_53_bool; // 0x675 Mov
	return 2; // 0x677 Return
}


func_865(var_1_object)
{
	StopGroup0(); // 0x361 Func
	var_1_object = 1; // 0x363 TMovB
	return 0; // 0x364 Return
}


func_1379(var_181_float, var_182_float, var_183_float)
{
	var_186_bool = var_182_float < var_183_float; // 0x564 LT
	if(var_186_bool == 0) goto Label_1384; // 0x565 JumpB
	var_181_float = var_182_float; // 0x566 Mov
	goto Label_1385; // 0x567 Jump
	
Label_1385:
	return 0; // 0x569 Return
	
Label_1384:
	var_181_float = var_183_float; // 0x568 Mov
}


func_1125(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj(); // 0x465 PushV
	var_18_string = "player"; // 0x466 PushS
	FindActor(var_17_object, var_18_string); // 0x467 Func
	var_15_object = var_17_object; // 0x469 Mov
	return 2; // 0x46a Return
}


func_869(var_0_object, var_18_bool, var_19_object)
{
	var_21_bool = 0; var_22_bool = 0; // 0x365 PushV
	var_0_object = var_19_object; // 0x366 TMov
	var_23_object = Obj(); // 0x367 PushV
	var_23_object = var_0_object; // 0x368 MovT
	func_1340(); // 0x369 Call
	var_32_string = "all"; // 0x36b PushS
	var_33_string = "attack_on"; // 0x36c PushS
	PlayAnimation(var_32_string, var_33_string); // 0x36d Func
	WaitForAnimEnd(var_22_bool); // 0x36f Func
	var_34_bool = var_22_bool == 0; // 0x371 Not
	if(var_34_bool == 0) goto Label_885; // 0x372 JumpB
	var_18_bool = 0; // 0x373 MovB
	return 2; // 0x374 Return
	
Label_885:
	var_35_string = "all"; // 0x375 PushS
	var_36_string = "attack_on"; // 0x376 PushS
	LockAnimationEnd(var_35_string, var_36_string); // 0x377 Func
	var_18_bool = 1; // 0x379 MovB
	return 2; // 0x37a Return
}


func_1386(var_191_float, var_192_float, var_193_float, var_194_float)
{
	var_195_bool = var_192_float < var_193_float; // 0x56b LT
	if(var_195_bool == 0) goto Label_1391; // 0x56c JumpB
	var_191_float = var_193_float; // 0x56d Mov
	return 0; // 0x56e Return
	
Label_1391:
	var_196_bool = var_192_float > var_194_float; // 0x56f GT
	if(var_196_bool == 0) goto Label_1395; // 0x570 JumpB
	var_191_float = var_194_float; // 0x571 Mov
	return 0; // 0x572 Return
	
Label_1395:
	var_191_float = var_192_float; // 0x573 Mov
	return 0; // 0x574 Return
}


func_1132(var_38_bool, var_39_object, var_40_string)
{
	var_41_bool = 0; var_42_bool = 0; // 0x46c PushV
	var_43_string = "HasProperty"; // 0x46d PushS
	var_44_int = 2; // 0x46e PushI
	var_45_bool = IsFuncExist(var_39_object, var_43_string, var_44_int); // 0x46f FuncExist
	var_46_bool = var_45_bool == 0; // 0x470 Not
	if(var_46_bool == 0) goto Label_1140; // 0x471 JumpB
	var_38_bool = 0; // 0x472 MovB
	return 2; // 0x473 Return
	
Label_1140:
	HasProperty(var_40_string, var_42_bool); // 0x474 ObjFunc
	var_38_bool = var_42_bool; // 0x476 Mov
	return 2; // 0x477 Return
}


func_1518(var_48_int, var_49_string)
{
	var_50_int = 0; var_51_int = 0; // 0x5ee PushV
	GetInvItemByName(var_51_int, var_49_string); // 0x5ef Func
	var_48_int = var_51_int; // 0x5f1 Mov
	return 2; // 0x5f2 Return
}


func_753(var_15_object)
{
	var_18_bool = 0; var_19_object = Obj(); // 0x2f2 PushV
	var_19_object = var_15_object; // 0x2f3 Mov
	TaskCall(6); // 0x2f4 TaskCall
	func_869(var_20_object, var_18_bool, var_19_object); // 0x2f5 Call
	TaskReturn(); // 0x2f6 TaskReturn
	if(var_20_object == 0) goto Label_769; // 0x2f8 JumpB
	var_37_object = Obj(); // 0x2f9 PushV
	var_37_object = var_15_object; // 0x2fa Mov
	func_803(var_17_bool, var_15_object, var_37_object); // 0x2fb Call
	var_132_string = "all"; // 0x2fd PushS
	var_133_string = "attack_off"; // 0x2fe PushS
	PlayAnimation(var_132_string, var_133_string); // 0x2ff Func
	
Label_769:
	return 0; // 0x301 Return
}


func_1523(var_18_object)
{
	var_19_object = Obj(); // 0x5f4 PushV
	var_19_object = var_18_object; // 0x5f5 Mov
	TaskCall(0); // 0x5f6 TaskCall
	func_0(var_19_object); // 0x5f7 Call
	TaskReturn(); // 0x5f8 TaskReturn
	return 0; // 0x5fa Return
}


func_1397(var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj(); // 0x575 PushV
	CreateObjectSet(var_24_object); // 0x576 Func
	var_22_object = var_24_object; // 0x578 Mov
	return 2; // 0x579 Return
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


func_1656(var_58_object)
{
	var_59_object = Obj(); // 0x679 PushV
	var_59_object = var_58_object; // 0x67a Mov
	func_1702(var_59_object); // 0x67b Call
	return 0; // 0x67d Return
}


func_1273(var_15_object, var_16_int)
{
	var_18_object = Obj(); var_19_object = Obj(); var_20_cvector = CVector(0,0,0); var_21_float = 0; var_22_int = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_string = ""; var_28_object = Obj(); var_29_object = Obj(); var_30_cvector = CVector(0,0,0); var_31_float = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_string = ""; // 0x4f9 PushV
	var_38_bool = 0; // 0x4fa PushV
	var_38_bool = 0; // 0x4fb MovB
	var_39_int = 4; // 0x4fc PushI
	var_40_bool = var_16_int != var_39_int; // 0x4fd Neq
	if(var_40_bool == 0) goto Label_1283; // 0x4fe JumpB
	var_41_int = 5; // 0x4ff PushI
	var_42_bool = var_16_int != var_41_int; // 0x500 Neq
	if(var_42_bool == 0) goto Label_1283; // 0x501 JumpB
	var_38_bool = 1; // 0x502 MovB
	
Label_1283:
	if(var_38_bool == 0) goto Label_1302; // 0x503 JumpB
	GetScene(var_28_object); // 0x504 Func
	GetPosition(var_30_cvector); // 0x506 Func
	GetEyesHeight(var_31_float); // 0x508 Func
	var_43_float = GetByIndex(var_30_cvector, 1); // 0x50a PushE
	var_44_int = 2; // 0x50b PushI
	var_45_float = var_31_float / var_44_int; // 0x50c Div
	var_43_float = var_43_float + var_45_float; // 0x50d Add2
	SetByIndex(var_30_cvector, 1) = var_43_float; // 0x50e PopE
	var_46_string = "scripted"; // 0x50f PushS
	var_47_cvector = CVector(0.0, 0.0, 1.0); // 0x510 PushVec
	var_48_string = "blood.xml"; // 0x511 PushS
	AddActorByType(var_29_object, var_46_string, var_28_object, var_30_cvector, var_47_cvector, var_48_string); // 0x512 Func
	var_29_object = 0; // 0x514 SetNull
	var_28_object = 0; // 0x515 SetNull
	
Label_1302:
	var_49_bool = var_15_object == 0; // 0x516 NullEq
	if(var_49_bool == 0) goto Label_1305; // 0x517 JumpB
	return 20; // 0x518 Return
	
Label_1305:
	GetSecondaryAnimationType(var_32_int); // 0x519 Func
	var_50_int = 0; // 0x51b PushI
	var_51_bool = var_32_int < var_50_int; // 0x51c LT
	if(var_51_bool == 0) goto Label_1311; // 0x51d JumpB
	return 20; // 0x51e Return
	
Label_1311:
	GetPosition(var_33_cvector); // 0x51f ObjFunc
	GetPosition(var_34_cvector); // 0x521 Func
	GetDirection(var_35_cvector); // 0x523 Func
	var_36_cvector = var_34_cvector - var_33_cvector; // 0x525 Sub2
	var_52_float = GetByIndex(var_36_cvector, 0); // 0x526 PushE
	var_53_float = GetByIndex(var_35_cvector, 0); // 0x527 PushE
	var_54_float = var_52_float * var_53_float; // 0x528 Mult
	var_55_float = GetByIndex(var_36_cvector, 2); // 0x529 PushE
	var_56_float = GetByIndex(var_35_cvector, 2); // 0x52a PushE
	var_57_float = var_55_float * var_56_float; // 0x52b Mult
	var_58_int = var_54_float + var_57_float; // 0x52c Add
	var_59_int = 0; // 0x52d PushI
	var_60_bool = var_58_int >= var_59_int; // 0x52e GE
	if(var_60_bool == 0) goto Label_1330; // 0x52f JumpB
	var_37_string = "fhit"; // 0x530 MovS
	goto Label_1331; // 0x531 Jump
	
Label_1331:
	var_61_string = "hit_react"; // 0x533 PushS
	var_62_string = "1"; // 0x534 PushS
	var_63_int = var_37_string + var_62_string; // 0x535 Add
	var_64_string = "2"; // 0x536 PushS
	var_65_int = var_37_string + var_64_string; // 0x537 Add
	var_66_int = -10; // 0x538 PushI
	FadeSecondaryAnimation(var_61_string, var_63_int, var_65_int, var_66_int); // 0x539 Func
	return 20; // 0x53b Return
	
Label_1330:
	var_37_string = "bhit"; // 0x532 MovS
}


func_1019(var_0_object, var_1_object)
{
	var_252_int = 0; var_253_bool = 0; var_254_cvector = CVector(0,0,0); var_255_object = Obj(); var_256_int = 0; var_257_bool = 0; var_258_cvector = CVector(0,0,0); var_259_object = Obj(); // 0x3fb PushV
	GetPFPosition(var_259_object); // 0x3fc Func
	GetDirection(var_0_object); // 0x3fe Func
	
Label_1024:
	var_260_int = 60; // 0x400 PushI
	irand(var_256_int, var_260_int); // 0x401 Func
	var_261_int = 30; // 0x403 PushI
	var_262_int = var_256_int + var_261_int; // 0x404 Add
	Sleep(var_262_int, var_257_bool); // 0x405 Func
	var_263_bool = var_257_bool; // 0x407 Push
	if(var_263_bool == 0) goto Label_1037; // 0x408 JumpB
	func_942(); // 0x40a Call
	goto Label_1095; // 0x40c Jump
	
Label_1095:
	goto Label_1024; // 0x447 Jump
	
Label_1037:
	GetPFPosition(var_258_cvector); // 0x40d Func
	var_264_float = 0; var_265_cvector = CVector(0,0,0); var_266_cvector = CVector(0,0,0); // 0x40f PushV
	var_265_cvector = var_1_object; // 0x410 MovT
	var_266_cvector = var_258_cvector; // 0x411 Mov
	func_1375(var_264_float, var_265_cvector, var_266_cvector); // 0x412 Call
	var_269_int = 40000; // 0x414 PushI
	var_270_bool = var_264_float > var_269_int; // 0x415 GT
	if(var_270_bool == 0) goto Label_1081; // 0x416 JumpB
	FindPathTo(var_259_object, var_259_object); // 0x417 Func
	var_271_bool = var_259_object != 0; // 0x419 NullNeq
	if(var_271_bool == 0) goto Label_1076; // 0x41a JumpB
	RotatePath(var_259_object, var_257_bool); // 0x41b Func
	var_272_bool = var_257_bool == 0; // 0x41d Not
	if(var_272_bool == 0) goto Label_1056; // 0x41e JumpB
	goto Label_1094; // 0x41f Jump
	
Label_1094:
	goto Label_1037; // 0x446 Jump
	
Label_1056:
	var_273_bool = 0; // 0x420 PushB
	FollowPath(var_259_object, var_273_bool, var_257_bool); // 0x421 Func
	var_274_bool = var_257_bool == 0; // 0x423 Not
	if(var_274_bool == 0) goto Label_1062; // 0x424 JumpB
	goto Label_1094; // 0x425 Jump
	
Label_1062:
	var_275_float = GetByIndex(var_0_object, 0); // 0x426 PushE
	var_276_float = GetByIndex(var_0_object, 2); // 0x427 PushE
	Rotate(var_275_float, var_276_float, var_257_bool); // 0x428 Func
	var_277_bool = var_257_bool == 0; // 0x42a Not
	if(var_277_bool == 0) goto Label_1069; // 0x42b JumpB
	goto Label_1094; // 0x42c Jump
	
Label_1069:
	WaitForAnimEnd(var_257_bool); // 0x42d Func
	var_278_bool = var_257_bool == 0; // 0x42f Not
	if(var_278_bool == 0) goto Label_1074; // 0x430 JumpB
	goto Label_1094; // 0x431 Jump
	
Label_1074:
	goto Label_1095; // 0x432 Jump
	
Label_1076:
	var_279_int = 1; // 0x434 PushI
	Sleep(var_279_int); // 0x435 Func
	var_259_object = 0; // 0x437 SetNull
	goto Label_1094; // 0x438 Jump
	
Label_1081:
	var_280_float = GetByIndex(var_0_object, 0); // 0x439 PushE
	var_281_float = GetByIndex(var_0_object, 2); // 0x43a PushE
	Rotate(var_280_float, var_281_float, var_257_bool); // 0x43b Func
	var_282_bool = var_257_bool == 0; // 0x43d Not
	if(var_282_bool == 0) goto Label_1088; // 0x43e JumpB
	goto Label_1094; // 0x43f Jump
	
Label_1088:
	WaitForAnimEnd(var_257_bool); // 0x440 Func
	var_283_bool = var_257_bool == 0; // 0x442 Not
	if(var_283_bool == 0) goto Label_1093; // 0x443 JumpB
	goto Label_1094; // 0x444 Jump
	
Label_1093:
	goto Label_1095; // 0x445 Jump
}


func_1144(var_148_float, var_149_object, var_150_float, var_151_int)
{
	var_152_int = 0; var_153_string = ""; var_154_int = 0; var_155_float = 0; var_156_float = 0; var_157_float = 0; var_158_int = 0; var_159_string = ""; var_160_int = 0; var_161_float = 0; var_162_float = 0; var_163_float = 0; // 0x478 PushV
	var_164_bool = 0; var_165_object = Obj(); var_166_string = ""; // 0x479 PushV
	var_165_object = var_149_object; // 0x47a Mov
	var_166_string = "health"; // 0x47b MovS
	func_1132(var_164_bool, var_165_object, var_166_string); // 0x47c Call
	var_167_bool = var_164_bool == 0; // 0x47e Not
	if(var_167_bool == 0) goto Label_1154; // 0x47f JumpB
	var_148_float = 0.0; // 0x480 MovF
	return 12; // 0x481 Return
	
Label_1154:
	var_168_bool = 0; var_169_object = Obj(); var_170_string = ""; // 0x482 PushV
	var_169_object = var_149_object; // 0x483 Mov
	var_170_string = "armor"; // 0x484 MovS
	func_1132(var_168_bool, var_169_object, var_170_string); // 0x485 Call
	var_171_bool = var_168_bool == 0; // 0x487 Not
	if(var_171_bool == 0) goto Label_1163; // 0x488 JumpB
	var_158_int = 0; // 0x489 MovI
	goto Label_1166; // 0x48a Jump
	
Label_1166:
	var_172_string = "armor_"; // 0x48e PushS
	var_173_string = ""; var_174_int = 0; // 0x48f PushV
	var_174_int = var_151_int; // 0x490 Mov
	func_1102(var_173_string, var_174_int); // 0x491 Call
	var_159_string = var_172_string + var_173_string; // 0x493 Add2
	var_177_bool = 0; var_178_object = Obj(); var_179_string = ""; // 0x494 PushV
	var_178_object = var_149_object; // 0x495 Mov
	var_179_string = var_159_string; // 0x496 Mov
	func_1132(var_177_bool, var_178_object, var_179_string); // 0x497 Call
	var_180_bool = var_177_bool == 0; // 0x499 Not
	if(var_180_bool == 0) goto Label_1181; // 0x49a JumpB
	var_160_int = 0; // 0x49b MovI
	goto Label_1183; // 0x49c Jump
	
Label_1183:
	var_181_float = 0; var_182_float = 0; var_183_float = 0; // 0x49f PushV
	var_184_int = var_158_int + var_160_int; // 0x4a0 Add
	var_185_float = 100.0; // 0x4a1 PushF
	var_182_float = var_184_int / var_184_int; // 0x4a2 Div2
	var_183_float = 1; // 0x4a3 MovI
	func_1379(var_181_float, var_182_float, var_183_float); // 0x4a4 Call
	var_161_float = var_181_float; // 0x4a5 Mov
	var_187_string = "health"; // 0x4a7 PushS
	GetProperty(var_187_string, var_162_float); // 0x4a8 ObjFunc
	var_188_int = 1; // 0x4aa PushI
	var_189_int = var_188_int - var_161_float; // 0x4ab Sub
	var_163_float = var_150_float * var_189_int; // 0x4ac Mult2
	var_190_string = "health"; // 0x4ad PushS
	var_191_float = 0; var_192_float = 0; var_193_float = 0; var_194_float = 0; // 0x4ae PushV
	var_192_float = var_162_float - var_163_float; // 0x4af Sub2
	var_193_float = 0; // 0x4b0 MovI
	var_194_float = 1; // 0x4b1 MovI
	func_1386(var_191_float, var_192_float, var_193_float, var_194_float); // 0x4b2 Call
	SetProperty(var_190_string, var_191_float); // 0x4b4 ObjFunc
	var_148_float = var_163_float; // 0x4b6 Mov
	return 12; // 0x4b7 Return
	
Label_1181:
	GetProperty(var_159_string, var_160_int); // 0x49d ObjFunc
	
Label_1163:
	var_197_string = "armor"; // 0x48b PushS
	GetProperty(var_197_string, var_158_int); // 0x48c ObjFunc
}


func_1662(var_13_bool, var_14_object, var_15_object)
{
	var_16_float = 0; var_17_bool = 0; var_18_float = 0; var_19_bool = 0; // 0x67e PushV
	var_20_bool = 0; var_21_object = Obj(); var_22_string = ""; // 0x67f PushV
	var_21_object = var_15_object; // 0x680 Mov
	var_22_string = "reputation"; // 0x681 MovS
	func_1132(var_20_bool, var_21_object, var_22_string); // 0x682 Call
	var_29_bool = var_20_bool == 0; // 0x684 Not
	if(var_29_bool == 0) goto Label_1672; // 0x685 JumpB
	var_13_bool = 0; // 0x686 MovB
	return 4; // 0x687 Return
	
Label_1672:
	var_30_string = "reputation"; // 0x688 PushS
	GetProperty(var_30_string, var_18_float); // 0x689 ObjFunc
	var_31_float = 0.5; // 0x68b PushF
	var_32_bool = var_18_float < var_31_float; // 0x68c LT
	if(var_32_bool == 0) goto Label_1680; // 0x68d JumpB
	var_13_bool = 0; // 0x68e MovB
	return 4; // 0x68f Return
	
Label_1680:
	CanSee(var_19_bool, var_14_object); // 0x690 Func
	var_33_bool = 0; // 0x692 PushV
	var_33_bool = 1; // 0x693 MovB
	var_34_bool = var_19_bool; // 0x694 Push
	if(var_34_bool == 0) goto Label_1694; // 0x695 JumpB
	var_35_float = 0; var_36_object = Obj(); // 0x696 PushV
	var_36_object = var_14_object; // 0x697 Mov
	func_1117(var_36_object); // 0x698 Call
	var_43_float = 160000.0; // 0x69a PushF
	var_44_bool = var_35_float <= var_43_float; // 0x69b LE
	if(var_44_bool == 0) goto Label_1694; // 0x69c JumpB
	var_33_bool = 0; // 0x69d MovB
	
Label_1694:
	if(var_33_bool == 0) goto Label_1700; // 0x69e JumpB
	var_45_float = -0.2; // 0x69f PushF
	ReportReputationChange(var_14_object, var_15_object, var_45_float); // 0x6a0 Func
	var_13_bool = 1; // 0x6a2 MovB
	return 4; // 0x6a3 Return
	
Label_1700:
	var_13_bool = 0; // 0x6a4 MovB
	return 4; // 0x6a5 Return
}


