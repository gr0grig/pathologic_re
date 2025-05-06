task_0_event_1(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x13 PushV
	var_13_object = var_11_object; // 0x14 Mov
	func_2565(var_12_bool, var_13_object); // 0x15 NEW_2
	if(var_12_bool == 0) goto Label_31; // 0x17 JumpB
	func_200(var_11_object); // 0x19 NEW_2
	var_139_object = Obj(); // 0x1b PushV
	var_139_object = var_11_object; // 0x1c Mov
	func_2572(var_139_object); // 0x1d NEW_2
	
Label_31:
	return 0; // 0x1f Return
}


task_0_event_3(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x21 PushV
	var_13_object = var_11_object; // 0x22 Mov
	func_2578(var_12_bool, var_13_object); // 0x23 NEW_2
	if(var_12_bool == 0) goto Label_45; // 0x25 JumpB
	func_200(var_11_object); // 0x27 NEW_2
	var_139_object = Obj(); // 0x29 PushV
	var_139_object = var_11_object; // 0x2a Mov
	func_2585(var_139_object); // 0x2b NEW_2
	
Label_45:
	return 0; // 0x2d Return
}


task_0_event_17(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x2f PushV
	var_13_object = var_11_object; // 0x30 Mov
	func_1556(var_12_bool, var_13_object); // 0x31 NEW_2
	var_46_bool = var_12_bool == 0; // 0x33 Not
	if(var_46_bool == 0) goto Label_58; // 0x34 JumpB
	var_47_object = Obj(); // 0x35 PushV
	var_47_object = var_11_object; // 0x36 Mov
	func_2633(var_47_object); // 0x37 NEW_2
	return 0; // 0x39 Return
	
Label_58:
	func_200(var_11_object); // 0x3b NEW_2
	var_63_object = Obj(); // 0x3d PushV
	var_63_object = var_11_object; // 0x3e Mov
	func_2657(var_63_object); // 0x3f NEW_2
	return 0; // 0x41 Return
}


task_0_event_7(var_0_bool, var_1_object, var_2_int, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object)
{
	var_12_int = 0; // 0x43 PushV
	var_12_int = var_11_object; // 0x44 Mov
	func_178(var_10_object, var_11_object, var_12_int); // 0x45 NEW_2
	var_42_int = 0; // 0x47 PushV
	var_42_int = var_11_object; // 0x48 Mov
	func_2745(var_42_int); // 0x49 NEW_2
	return 0; // 0x4b Return
}


task_0_event_10(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object)
{
	RequestClearPath(var_11_object); // 0xc5 Func
	return 0; // 0xc7 Return
}


task_0_event_41(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object)
{
	func_200(var_11_object); // 0xd1 NEW_2
	var_13_object = Obj(); // 0xd3 PushV
	var_13_object = var_11_object; // 0xd4 Mov
	func_2713(); // 0xd5 NEW_2
	return 0; // 0xd7 Return
}


task_1_event_17(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0xec PushV
	var_13_object = var_11_object; // 0xed Mov
	func_1556(var_12_bool, var_13_object); // 0xee NEW_2
	var_46_bool = var_12_bool == 0; // 0xf0 Not
	if(var_46_bool == 0) goto Label_243; // 0xf1 JumpB
	return 0; // 0xf2 Return
	
Label_243:
	var_3_object = var_11_object; // 0xf3 TMov
	func_321(var_11_object); // 0xf5 NEW_2
	return 0; // 0xf7 Return
}


task_1_event_7(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object)
{
	var_12_int = 0; // 0xf9 PushV
	var_12_int = var_11_object; // 0xfa Mov
	func_307(var_11_object, var_12_int); // 0xfb NEW_2
	var_61_int = 0; // 0xfd PushV
	var_61_int = var_11_object; // 0xfe Mov
	func_2745(var_61_int); // 0xff NEW_2
	return 0; // 0x101 Return
}


task_1_event_1(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object)
{
	var_12_bool = 0; // 0x14f PushV
	var_12_bool = 0; // 0x150 MovB
	var_13_bool = var_1_object == var_11_object; // 0x151 Eq
	if(var_13_bool == 0) goto Label_342; // 0x152 JumpB
	var_14_bool = var_2_bool == 0; // 0x153 Not
	if(var_14_bool == 0) goto Label_342; // 0x154 JumpB
	var_12_bool = 1; // 0x155 MovB
	
Label_342:
	if(var_12_bool == 0) goto Label_348; // 0x156 JumpB
	var_2_bool = 1; // 0x157 TMovB
	var_15_object = Obj(); // 0x158 PushV
	var_15_object = var_11_object; // 0x159 Mov
	func_1745(var_15_object); // 0x15a NEW_2
	
Label_348:
	return 0; // 0x15c Return
}


task_1_event_2(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object)
{
	var_12_bool = 0; // 0x15e PushV
	var_12_bool = 0; // 0x15f MovB
	var_13_bool = var_1_object == var_11_object; // 0x160 Eq
	if(var_13_bool == 0) goto Label_357; // 0x161 JumpB
	var_14_bool = var_2_bool; // 0x162 PushT
	if(var_14_bool == 0) goto Label_357; // 0x163 JumpB
	var_12_bool = 1; // 0x164 MovB
	
Label_357:
	if(var_12_bool == 0) goto Label_362; // 0x165 JumpB
	var_2_bool = 0; // 0x166 TMovB
	var_15_string = "head"; // 0x167 PushS
	UnlookAsync(var_15_string); // 0x168 Func
	
Label_362:
	return 0; // 0x16a Return
}


task_1_event_10(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object)
{
	RequestClearPath(var_11_object); // 0x1e4 Func
	return 0; // 0x1e6 Return
}


task_1_event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object)
{
	func_321(var_11_object); // 0x1f0 NEW_2
	var_16_object = Obj(); // 0x1f2 PushV
	var_16_object = var_11_object; // 0x1f3 Mov
	func_2713(); // 0x1f4 NEW_2
	return 0; // 0x1f6 Return
}


task_2_event_1(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x20b PushV
	var_13_object = var_11_object; // 0x20c Mov
	func_2565(var_12_bool, var_13_object); // 0x20d NEW_2
	if(var_12_bool == 0) goto Label_536; // 0x20f JumpB
	func_673(var_10_object, var_11_object); // 0x211 NEW_2
	var_138_object = Obj(); // 0x213 PushV
	var_138_object = var_11_object; // 0x214 Mov
	func_2572(var_138_object); // 0x215 NEW_2
	goto Label_548; // 0x217 Jump
	
Label_548:
	return 0; // 0x224 Return
	
Label_536:
	var_476_bool = 0; var_477_object = Obj(); // 0x218 PushV
	var_477_object = var_11_object; // 0x219 Mov
	func_2591(var_476_bool, var_477_object); // 0x21a NEW_2
	if(var_476_bool == 0) goto Label_548; // 0x21c JumpB
	func_673(var_10_object, var_11_object); // 0x21e NEW_2
	var_492_object = Obj(); // 0x220 PushV
	var_492_object = var_11_object; // 0x221 Mov
	func_2623(var_492_object); // 0x222 NEW_2
}


task_2_event_3(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x226 PushV
	var_13_object = var_11_object; // 0x227 Mov
	func_2578(var_12_bool, var_13_object); // 0x228 NEW_2
	if(var_12_bool == 0) goto Label_562; // 0x22a JumpB
	func_673(var_10_object, var_11_object); // 0x22c NEW_2
	var_138_object = Obj(); // 0x22e PushV
	var_138_object = var_11_object; // 0x22f Mov
	func_2585(var_138_object); // 0x230 NEW_2
	
Label_562:
	return 0; // 0x232 Return
}


	task_2_event_17(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_object, var_100_object)
	{
	var_101_bool = 0; var_102_object = Obj(); // 0x234 PushV
	var_102_object = var_100_object; // 0x235 Mov
	func_1556(var_101_bool, var_102_object); // 0x236 NEW_2
	var_129_bool = var_101_bool == 0; // 0x238 Not
	if(var_129_bool == 0) goto Label_575; // 0x239 JumpB
	var_130_object = Obj(); // 0x23a PushV
	var_130_object = var_100_object; // 0x23b Mov
	func_2633(var_130_object); // 0x23c NEW_2
	return 0; // 0x23e Return
	
Label_575:
	func_673(var_13_object, var_100_object); // 0x240 NEW_2
	var_145_object = Obj(); // 0x242 PushV
	var_145_object = var_100_object; // 0x243 Mov
	func_2657(var_145_object); // 0x244 NEW_2
	return 0; // 0x246 Return
	}


task_2_event_30(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_bool = 0; // 0x248 PushV
	var_15_object = var_11_object; // 0x249 Mov
	var_16_object = var_12_object; // 0x24a Mov
	var_17_bool = var_13_object; // 0x24b Mov
	func_2719(var_14_bool, var_15_object, var_16_object, var_17_bool); // 0x24c NEW_2
	if(var_14_bool == 0) goto Label_595; // 0x24e JumpB
	var_100_object = Obj(); // 0x24f PushV
	var_100_object = var_11_object; // 0x250 Mov
	func_563(); // 0x251 NEW_2
	
Label_595:
	return 0; // 0x253 Return
}


task_2_event_7(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_int, var_9_object, var_10_object, var_11_object)
{
	var_12_int = 0; // 0x255 PushV
	var_12_int = var_11_object; // 0x256 Mov
	func_2745(var_12_int); // 0x257 NEW_2
	return 0; // 0x259 Return
}


task_2_event_10(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object)
{
	RequestClearPath(var_11_object); // 0x29b Func
	return 0; // 0x29d Return
}


task_2_event_28(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object)
{
	Stop(); // 0x29e Func
	return 0; // 0x2a0 Return
}


task_2_event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object)
{
	func_673(var_10_object, var_11_object); // 0x2aa NEW_2
	var_12_object = Obj(); // 0x2ac PushV
	var_12_object = var_11_object; // 0x2ad Mov
	func_2713(); // 0x2ae NEW_2
	return 0; // 0x2b0 Return
}


task_3_event_1(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x2ba PushV
	var_13_object = var_11_object; // 0x2bb Mov
	func_2565(var_12_bool, var_13_object); // 0x2bc NEW_2
	if(var_12_bool == 0) goto Label_711; // 0x2be JumpB
	func_858(); // 0x2c0 NEW_2
	var_138_object = Obj(); // 0x2c2 PushV
	var_138_object = var_11_object; // 0x2c3 Mov
	func_2572(var_138_object); // 0x2c4 NEW_2
	goto Label_723; // 0x2c6 Jump
	
Label_723:
	return 0; // 0x2d3 Return
	
Label_711:
	var_476_bool = 0; var_477_object = Obj(); // 0x2c7 PushV
	var_477_object = var_11_object; // 0x2c8 Mov
	func_2591(var_476_bool, var_477_object); // 0x2c9 NEW_2
	if(var_476_bool == 0) goto Label_723; // 0x2cb JumpB
	func_858(); // 0x2cd NEW_2
	var_492_object = Obj(); // 0x2cf PushV
	var_492_object = var_11_object; // 0x2d0 Mov
	func_2623(var_492_object); // 0x2d1 NEW_2
}


task_3_event_3(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x2d5 PushV
	var_13_object = var_11_object; // 0x2d6 Mov
	func_2578(var_12_bool, var_13_object); // 0x2d7 NEW_2
	if(var_12_bool == 0) goto Label_737; // 0x2d9 JumpB
	func_858(); // 0x2db NEW_2
	var_138_object = Obj(); // 0x2dd PushV
	var_138_object = var_11_object; // 0x2de Mov
	func_2585(var_138_object); // 0x2df NEW_2
	
Label_737:
	return 0; // 0x2e1 Return
}


	task_3_event_17(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_object, var_100_object)
	{
	var_101_bool = 0; var_102_object = Obj(); // 0x2e3 PushV
	var_102_object = var_100_object; // 0x2e4 Mov
	func_1556(var_101_bool, var_102_object); // 0x2e5 NEW_2
	var_129_bool = var_101_bool == 0; // 0x2e7 Not
	if(var_129_bool == 0) goto Label_750; // 0x2e8 JumpB
	var_130_object = Obj(); // 0x2e9 PushV
	var_130_object = var_100_object; // 0x2ea Mov
	func_2633(var_130_object); // 0x2eb NEW_2
	return 0; // 0x2ed Return
	
Label_750:
	func_858(); // 0x2ef NEW_2
	var_145_object = Obj(); // 0x2f1 PushV
	var_145_object = var_100_object; // 0x2f2 Mov
	func_2657(var_145_object); // 0x2f3 NEW_2
	return 0; // 0x2f5 Return
	}


task_3_event_30(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_bool = 0; // 0x2f7 PushV
	var_15_object = var_11_object; // 0x2f8 Mov
	var_16_object = var_12_object; // 0x2f9 Mov
	var_17_bool = var_13_object; // 0x2fa Mov
	func_2719(var_14_bool, var_15_object, var_16_object, var_17_bool); // 0x2fb NEW_2
	if(var_14_bool == 0) goto Label_770; // 0x2fd JumpB
	var_100_object = Obj(); // 0x2fe PushV
	var_100_object = var_11_object; // 0x2ff Mov
	func_738(); // 0x300 NEW_2
	
Label_770:
	return 0; // 0x302 Return
}


task_3_event_7(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_int, var_9_object, var_10_object, var_11_object)
{
	var_12_int = 0; // 0x304 PushV
	var_12_int = var_11_object; // 0x305 Mov
	func_2745(var_12_int); // 0x306 NEW_2
	return 0; // 0x308 Return
}


task_4_event_17(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object)
{
	var_12_object = Obj(); // 0x3d7 PushV
	var_12_object = var_11_object; // 0x3d8 Mov
	func_2633(var_12_object); // 0x3d9 NEW_2
	var_27_bool = var_11_object != 0; // 0x3db NullNeq
	if(var_27_bool == 0) goto Label_992; // 0x3dc JumpB
	var_0_bool = var_11_object; // 0x3dd TMov
	Face(var_0_bool); // 0x3de Func
	
Label_992:
	return 0; // 0x3e0 Return
}


task_4_event_7(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_object, var_11_object)
{
	var_12_int = 0; // 0x3e2 PushV
	var_12_int = var_11_object; // 0x3e3 Mov
	func_2745(var_12_int); // 0x3e4 NEW_2
	return 0; // 0x3e6 Return
}


task_5_event_0(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_bool = 0; // 0x410 PushV
	IsOverrideActive(var_13_bool); // 0x411 Func
	var_14_bool = var_13_bool == 0; // 0x413 Not
	if(var_14_bool == 0) goto Label_1049; // 0x414 JumpB
	var_15_object = Obj(); // 0x415 PushV
	var_15_object = var_11_object; // 0x416 Mov
	func_2011(var_15_object); // 0x417 NEW_2
	
Label_1049:
	return 2; // 0x419 Return
}


task_5_event_22(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_float, var_12_float, var_13_object, var_14_object)
{
	return 0; // 0x490 Return
}


task_5_event_16(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_string, var_11_object, var_12_object)
{
	return 0; // 0x492 Return
}


task_5_event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object)
{
	return 0; // 0x494 Return
}


task_6_event_32(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object)
{
	var_11_bool = var_0_bool; // 0x515 PushT
	if(var_11_bool == 0) goto Label_1306; // 0x516 JumpB
	var_12_string = "cleansed"; // 0x517 PushS
	RemoveProperty(var_12_string); // 0x518 TObjFunc
	
Label_1306:
	return 0; // 0x51a Return
}


task_6_event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object)
{
	func_1307(); // 0x52e NEW_2
	var_48_object = Obj(); // 0x530 PushV
	var_48_object = var_11_object; // 0x531 Mov
	func_2713(); // 0x532 NEW_2
	return 0; // 0x534 Return
}


task_6_event_1(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x536 PushV
	var_13_object = var_11_object; // 0x537 Mov
	func_2565(var_12_bool, var_13_object); // 0x538 NEW_2
	if(var_12_bool == 0) goto Label_1346; // 0x53a JumpB
	func_1307(); // 0x53c NEW_2
	var_174_object = Obj(); // 0x53e PushV
	var_174_object = var_11_object; // 0x53f Mov
	func_2572(var_174_object); // 0x540 NEW_2
	
Label_1346:
	return 0; // 0x542 Return
}


task_6_event_3(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x544 PushV
	var_13_object = var_11_object; // 0x545 Mov
	func_2578(var_12_bool, var_13_object); // 0x546 NEW_2
	if(var_12_bool == 0) goto Label_1360; // 0x548 JumpB
	func_1307(); // 0x54a NEW_2
	var_174_object = Obj(); // 0x54c PushV
	var_174_object = var_11_object; // 0x54d Mov
	func_2585(var_174_object); // 0x54e NEW_2
	
Label_1360:
	return 0; // 0x550 Return
}


task_6_event_17(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x552 PushV
	var_13_object = var_11_object; // 0x553 Mov
	func_1556(var_12_bool, var_13_object); // 0x554 NEW_2
	var_46_bool = var_12_bool == 0; // 0x556 Not
	if(var_46_bool == 0) goto Label_1373; // 0x557 JumpB
	var_47_object = Obj(); // 0x558 PushV
	var_47_object = var_11_object; // 0x559 Mov
	func_2633(var_47_object); // 0x55a NEW_2
	return 0; // 0x55c Return
	
Label_1373:
	func_1307(); // 0x55e NEW_2
	var_98_object = Obj(); // 0x560 PushV
	var_98_object = var_11_object; // 0x561 Mov
	func_2657(var_98_object); // 0x562 NEW_2
	return 0; // 0x564 Return
}


task_6_event_7(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int)
{
	var_12_int = 71; // 0x566 PushI
	var_13_bool = var_11_int == var_12_int; // 0x567 Eq
	if(var_13_bool == 0) goto Label_1391; // 0x568 JumpB
	var_14_object = var_1_object; // 0x569 PushT
	if(var_14_object == 0) goto Label_1390; // 0x56a JumpB
	var_15_string = "continue"; // 0x56b PushS
	Trigger(var_15_string, var_15_string); // 0x56c Func
	
Label_1390:
	goto Label_1395; // 0x56e Jump
	
Label_1395:
	return 0; // 0x573 Return
	
Label_1391:
	var_16_int = 0; // 0x56f PushV
	var_16_int = var_11_int; // 0x570 Mov
	func_2745(var_16_int); // 0x571 NEW_2
}


event_22(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object, var_12_int, var_13_float, var_14_float)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0; // 0xa7b PushV
	var_15_object = var_11_object; // 0xa7c Mov
	var_16_int = var_12_int; // 0xa7d Mov
	var_17_float = var_13_float; // 0xa7e Mov
	func_1658(var_15_object, var_16_int, var_17_float); // 0xa7f NEW_2
	return 0; // 0xa81 Return
}


event_43(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object, var_12_int, var_13_float, var_14_float, var_15_cvector, var_16_cvector)
{
	var_17_object = Obj(); var_18_int = 0; var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); // 0xa83 PushV
	var_17_object = var_11_object; // 0xa84 Mov
	var_18_int = var_12_int; // 0xa85 Mov
	var_19_float = var_13_float; // 0xa86 Mov
	var_20_cvector = var_15_cvector; // 0xa87 Mov
	var_21_cvector = var_16_cvector; // 0xa88 Mov
	func_1726(var_19_float, var_20_cvector, var_21_cvector); // 0xa89 NEW_2
	return 0; // 0xa8b Return
}


event_16(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object, var_12_string)
{
	var_13_float = 0; var_14_float = 0; // 0xa8c PushV
	var_15_string = "health"; // 0xa8d PushS
	var_16_bool = var_12_string == var_15_string; // 0xa8e Eq
	if(var_16_bool == 0) goto Label_2712; // 0xa8f JumpB
	var_17_string = "health"; // 0xa90 PushS
	GetProperty(var_17_string, var_14_float); // 0xa91 Func
	var_18_int = 0; // 0xa93 PushI
	var_19_bool = var_14_float <= var_18_int; // 0xa94 LE
	if(var_19_bool == 0) goto Label_2712; // 0xa95 JumpB
	SignalDeath(var_11_object); // 0xa96 Func
	
Label_2712:
	return 2; // 0xa98 Return
}


event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object)
{
	var_12_object = Obj(); // 0xa9a PushV
	var_12_object = var_11_object; // 0xa9b Mov
	func_2667(var_12_object); // 0xa9c NEW_2
	return 0; // 0xa9e Return
}


main(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object)
{
	func_2283(); // 0x203 NEW_2
	
Label_517:
	func_602(var_9_object, var_10_object); // 0x206 NEW_2
	goto Label_517; // 0x208 Jump
}


func_512(var_301_string)
{
	var_301_string = "run"; // 0x200 MovS
	return 0; // 0x201 Return
}


func_1025(var_133_object)
{
	EventDisable(0); // 0x402 EventDisable
	var_134_object = Obj(); // 0x403 PushV
	var_134_object = var_133_object; // 0x404 Mov
	func_1050(var_134_object); // 0x405 NEW_2
	var_214_int = 50; // 0x407 PushI
	var_215_int = 40; // 0x408 PushI
	SetRTEnvelope(var_214_int, var_215_int); // 0x409 Func
	EventEnable(0); // 0x40b EventEnable
	
Label_1036:
	Hold(); // 0x40c Func
	goto Label_1036; // 0x40e Jump
}


func_0(var_395_bool, var_396_object)
{
	var_399_bool = 0; var_400_object = Obj(); var_401_float = 0; var_402_float = 0; var_403_bool = 0; var_404_bool = 0; // 0x1 PushV
	var_400_object = var_396_object; // 0x2 Mov
	var_401_float = 350; // 0x3 MovI
	var_402_float = 5000; // 0x4 MovI
	var_403_bool = 0; // 0x5 MovB
	var_404_bool = 1; // 0x6 MovB
	func_76(var_395_bool, var_396_object, var_399_bool, var_400_object, var_401_float, var_402_float, var_403_bool, var_404_bool); // 0x7 NEW_2
	var_395_bool = var_399_bool; // 0x8 Mov
	return 0; // 0xa Return
}


func_2565(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); // 0xa06 PushV
	var_15_object = var_13_object; // 0xa07 Mov
	func_2845(var_14_bool, var_15_object); // 0xa08 NEW_2
	var_12_bool = var_14_bool; // 0xa09 Mov
	return 0; // 0xa0b Return
}


func_2055(var_119_string)
{
	var_120_object = Obj(); var_121_int = 0; var_122_bool = 0; var_123_object = Obj(); var_124_int = 0; var_125_bool = 0; // 0x807 PushV
	CreateInvItem(var_123_object); // 0x808 Func
	SetItemName(var_119_string); // 0x80a ObjFunc
	var_126_string = "Organ"; // 0x80c PushS
	var_127_int = 1; // 0x80d PushI
	SetProperty(var_126_string, var_127_int); // 0x80e ObjFunc
	GetItemID(var_124_int); // 0x810 ObjFunc
	var_128_int = 0; // 0x812 PushI
	var_129_int = 1; // 0x813 PushI
	AddItem(var_125_bool, var_123_object, var_128_int, var_129_int); // 0x814 Func
	return 6; // 0x816 Return
}


func_11(var_421_bool, var_422_object)
{
	var_423_bool = 0; var_424_object = Obj(); // 0xc PushV
	var_424_object = var_422_object; // 0xd Mov
	func_1580(var_423_bool, var_424_object); // 0xe NEW_2
	var_421_bool = var_423_bool; // 0xf Mov
	return 0; // 0x11 Return
}


func_2572(var_174_object)
{
	var_175_object = Obj(); // 0xa0d PushV
	var_175_object = var_174_object; // 0xa0e Mov
	func_2532(var_174_object, var_175_object); // 0xa0f NEW_2
	return 0; // 0xa11 Return
}


func_2578(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); // 0xa13 PushV
	var_15_object = var_13_object; // 0xa14 Mov
	func_2845(var_14_bool, var_15_object); // 0xa15 NEW_2
	var_12_bool = var_14_bool; // 0xa16 Mov
	return 0; // 0xa18 Return
}


func_1556(var_12_bool, var_13_object)
{
	var_14_int = 0; var_15_int = 0; // 0x614 PushV
	var_16_bool = 0; var_17_object = Obj(); // 0x615 PushV
	var_17_object = var_13_object; // 0x616 Mov
	func_1520(var_16_bool, var_17_object); // 0x617 NEW_2
	var_33_bool = var_16_bool == 0; // 0x619 Not
	if(var_33_bool == 0) goto Label_1565; // 0x61a JumpB
	var_12_bool = 0; // 0x61b MovB
	return 2; // 0x61c Return
	
Label_1565:
	var_34_bool = 0; var_35_object = Obj(); var_36_string = ""; // 0x61d PushV
	var_35_object = var_13_object; // 0x61e Mov
	var_36_string = "noaccess"; // 0x61f MovS
	func_1430(var_34_bool, var_35_object, var_36_string); // 0x620 NEW_2
	var_43_bool = var_34_bool == 0; // 0x622 Not
	if(var_43_bool == 0) goto Label_1574; // 0x623 JumpB
	var_12_bool = 1; // 0x624 MovB
	return 2; // 0x625 Return
	
Label_1574:
	var_44_string = "noaccess"; // 0x626 PushS
	GetProperty(var_44_string, var_15_int); // 0x627 ObjFunc
	var_45_int = 0; // 0x629 PushI
	var_12_bool = var_15_int == var_45_int; // 0x62a Eq2
	return 2; // 0x62b Return
}


func_2072()
{
	var_113_int = 0; // 0x818 PushV
	func_2005(var_113_int); // 0x819 NEW_2
	var_117_int = 1; // 0x81b PushI
	var_118_bool = var_113_int != var_117_int; // 0x81c Neq
	if(var_118_bool == 0) goto Label_2079; // 0x81d JumpB
	return 0; // 0x81e Return
	
Label_2079:
	var_119_string = ""; // 0x81f PushV
	var_119_string = "liver"; // 0x820 MovS
	func_2055(var_119_string); // 0x821 NEW_2
	var_130_string = ""; // 0x823 PushV
	var_130_string = "kidney"; // 0x824 MovS
	func_2055(var_130_string); // 0x825 NEW_2
	var_131_string = ""; // 0x827 PushV
	var_131_string = "heart"; // 0x828 MovS
	func_2055(var_131_string); // 0x829 NEW_2
	var_132_string = ""; // 0x82b PushV
	var_132_string = "blood"; // 0x82c MovS
	func_2055(var_132_string); // 0x82d NEW_2
	return 0; // 0x82f Return
}


func_2585(var_174_object)
{
	var_175_object = Obj(); // 0xa1a PushV
	var_175_object = var_174_object; // 0xa1b Mov
	func_2532(var_174_object, var_175_object); // 0xa1c NEW_2
	return 0; // 0xa1e Return
}


func_1050(var_134_object)
{
	var_135_cvector = CVector(0,0,0); var_136_cvector = CVector(0,0,0); var_137_cvector = CVector(0,0,0); var_138_cvector = CVector(0,0,0); var_139_string = ""; var_140_object = Obj(); var_141_bool = 0; var_142_bool = 0; var_143_float = 0; var_144_cvector = CVector(0,0,0); var_145_cvector = CVector(0,0,0); var_146_cvector = CVector(0,0,0); var_147_cvector = CVector(0,0,0); var_148_cvector = CVector(0,0,0); var_149_string = ""; var_150_object = Obj(); var_151_bool = 0; var_152_bool = 0; var_153_float = 0; var_154_cvector = CVector(0,0,0); // 0x41a PushV
	var_155_bool = var_134_object == 0; // 0x41b NullEq
	if(var_155_bool == 0) goto Label_1058; // 0x41c JumpB
	var_156_string = ""; // 0x41d PushV
	var_156_string = "fdie"; // 0x41e MovS
	func_1141(var_156_string); // 0x41f NEW_2
	goto Label_1140; // 0x421 Jump
	
Label_1140:
	return 20; // 0x474 Return
	
Label_1058:
	GetPosition(var_145_cvector); // 0x422 ObjFunc
	GetPosition(var_146_cvector); // 0x424 Func
	GetDirection(var_147_cvector); // 0x426 Func
	var_148_cvector = var_146_cvector - var_145_cvector; // 0x428 Sub2
	var_188_float = GetByIndex(var_148_cvector, 0); // 0x429 PushE
	var_189_float = GetByIndex(var_147_cvector, 0); // 0x42a PushE
	var_190_float = var_188_float * var_189_float; // 0x42b Mult
	var_191_float = GetByIndex(var_148_cvector, 2); // 0x42c PushE
	var_192_float = GetByIndex(var_147_cvector, 2); // 0x42d PushE
	var_193_float = var_191_float * var_192_float; // 0x42e Mult
	var_194_int = var_190_float + var_193_float; // 0x42f Add
	var_195_int = 0; // 0x430 PushI
	var_196_bool = var_194_int >= var_195_int; // 0x431 GE
	if(var_196_bool == 0) goto Label_1077; // 0x432 JumpB
	var_149_string = "fdie"; // 0x433 MovS
	goto Label_1078; // 0x434 Jump
	
Label_1078:
	RemoveRTEnvelope(); // 0x436 Func
	SetDeathState(); // 0x438 Func
	Stop(); // 0x43a Func
	StopAsync(); // 0x43c Func
	var_150_object = var_134_object; // 0x43e Mov
	var_197_string = "GetScriptProperty"; // 0x43f PushS
	var_198_int = 2; // 0x440 PushI
	var_199_bool = IsFuncExist(var_134_object, var_197_string, var_198_int); // 0x441 FuncExist
	if(var_199_bool == 0) goto Label_1102; // 0x442 JumpB
	var_200_string = "Owner"; // 0x443 PushS
	HasScriptProperty(var_151_bool, var_200_string); // 0x444 ObjFunc
	var_201_bool = var_151_bool; // 0x446 Push
	if(var_201_bool == 0) goto Label_1102; // 0x447 JumpB
	var_202_string = "Owner"; // 0x448 PushS
	GetScriptProperty(var_150_object, var_202_string); // 0x449 ObjFunc
	var_203_bool = var_150_object == 0; // 0x44b NullEq
	if(var_203_bool == 0) goto Label_1102; // 0x44c JumpB
	var_150_object = var_134_object; // 0x44d Mov
	
Label_1102:
	var_204_string = "@GetEyesHeight"; // 0x44e PushS
	var_205_int = 1; // 0x44f PushI
	var_206_bool = IsFuncExist(var_150_object, var_204_string, var_205_int); // 0x450 FuncExist
	if(var_206_bool == 0) goto Label_1117; // 0x451 JumpB
	GetEyesHeight(var_153_float); // 0x452 ObjFunc
	var_154_cvector = CVector(0.0, 0.0, 0.0); // 0x454 MovV
	var_207_float = GetByIndex(var_154_cvector, 1); // 0x455 PushE
	var_207_float = var_153_float; // 0x456 Mov
	SetByIndex(var_154_cvector, 1) = var_207_float; // 0x457 PopE
	var_208_string = "head"; // 0x458 PushS
	LookAsync(var_134_object, var_208_string, var_154_cvector); // 0x459 Func
	var_152_bool = 1; // 0x45b MovB
	goto Label_1118; // 0x45c Jump
	
Label_1118:
	var_209_string = ""; // 0x45e PushV
	var_209_string = var_149_string; // 0x45f Mov
	func_1771(var_209_string); // 0x460 NEW_2
	var_210_string = "all"; // 0x462 PushS
	PlayAnimation(var_210_string, var_149_string); // 0x463 Func
	WaitForAnimEnd(); // 0x465 Func
	var_211_bool = var_152_bool; // 0x467 Push
	if(var_211_bool == 0) goto Label_1134; // 0x468 JumpB
	StopAsync(); // 0x469 Func
	var_212_string = "head"; // 0x46b PushS
	UnlookAsync(var_212_string); // 0x46c Func
	
Label_1134:
	var_213_string = "all"; // 0x46e PushS
	LockAnimationEnd(var_213_string, var_149_string); // 0x46f Func
	RemoveEnvelope(); // 0x471 Func
	var_150_object = 0; // 0x473 SetNull
	
Label_1117:
	var_152_bool = 0; // 0x45d MovB
	
Label_1077:
	var_149_string = "bdie"; // 0x435 MovS
}


func_2591(var_476_bool, var_477_object)
{
	var_478_float = 0; var_479_float = 0; // 0xa1f PushV
	var_480_bool = 0; // 0xa20 PushV
	var_480_bool = 1; // 0xa21 MovB
	var_481_bool = 0; // 0xa22 PushV
	var_481_bool = 1; // 0xa23 MovB
	var_482_bool = var_477_object == 0; // 0xa24 NullEq
	if(var_482_bool == 0) goto Label_2605; // 0xa25 JumpB
	var_483_bool = 0; var_484_object = Obj(); // 0xa26 PushV
	var_484_object = var_477_object; // 0xa27 Mov
	func_1515(var_484_object); // 0xa28 NEW_2
	var_485_bool = var_483_bool == 0; // 0xa2a Not
	if(var_485_bool == 0) goto Label_2605; // 0xa2b JumpB
	var_481_bool = 0; // 0xa2c MovB
	
Label_2605:
	if(var_481_bool == 0) goto Label_2614; // 0xa2d JumpB
	var_486_bool = 0; var_487_object = Obj(); var_488_string = ""; // 0xa2e PushV
	var_487_object = var_477_object; // 0xa2f Mov
	var_488_string = "disease"; // 0xa30 MovS
	func_1430(var_486_bool, var_487_object, var_488_string); // 0xa31 NEW_2
	var_489_bool = var_486_bool == 0; // 0xa33 Not
	if(var_489_bool == 0) goto Label_2614; // 0xa34 JumpB
	var_480_bool = 0; // 0xa35 MovB
	
Label_2614:
	if(var_480_bool == 0) goto Label_2617; // 0xa36 JumpB
	var_476_bool = 0; // 0xa37 MovB
	return 2; // 0xa38 Return
	
Label_2617:
	var_490_string = "disease"; // 0xa39 PushS
	GetProperty(var_490_string, var_479_float); // 0xa3a ObjFunc
	var_491_int = 0; // 0xa3c PushI
	var_476_bool = var_479_float > var_491_int; // 0xa3d GT2
	return 2; // 0xa3e Return
}


func_1580(var_361_bool, var_362_object)
{
	var_363_object = Obj(); var_364_object = Obj(); var_365_int = 0; var_366_object = Obj(); var_367_object = Obj(); var_368_int = 0; // 0x62c PushV
	var_369_bool = var_362_object == 0; // 0x62d NullEq
	if(var_369_bool == 0) goto Label_1585; // 0x62e JumpB
	var_361_bool = 0; // 0x62f MovB
	return 6; // 0x630 Return
	
Label_1585:
	GetScene(var_366_object); // 0x631 Func
	var_370_bool = var_366_object == 0; // 0x633 NullEq
	if(var_370_bool == 0) goto Label_1591; // 0x634 JumpB
	var_361_bool = 0; // 0x635 MovB
	return 6; // 0x636 Return
	
Label_1591:
	GetScene(var_367_object); // 0x637 ObjFunc
	var_371_bool = var_366_object != var_367_object; // 0x639 Neq
	if(var_371_bool == 0) goto Label_1597; // 0x63a JumpB
	var_361_bool = 0; // 0x63b MovB
	return 6; // 0x63c Return
	
Label_1597:
	var_372_bool = 0; var_373_object = Obj(); var_374_string = ""; // 0x63d PushV
	var_373_object = var_362_object; // 0x63e Mov
	var_374_string = "noaccess"; // 0x63f MovS
	func_1430(var_372_bool, var_373_object, var_374_string); // 0x640 NEW_2
	var_375_bool = var_372_bool == 0; // 0x642 Not
	if(var_375_bool == 0) goto Label_1606; // 0x643 JumpB
	var_361_bool = 1; // 0x644 MovB
	return 6; // 0x645 Return
	
Label_1606:
	var_376_string = "noaccess"; // 0x646 PushS
	GetProperty(var_376_string, var_368_int); // 0x647 ObjFunc
	var_377_int = 0; // 0x649 PushI
	var_361_bool = var_368_int == var_377_int; // 0x64a Eq2
	return 6; // 0x64b Return
}


func_2096()
{
	var_57_int = 0; var_58_bool = 0; var_59_int = 0; var_60_bool = 0; // 0x830 PushV
	var_61_int = 0; // 0x831 PushI
	ClearSubContainer(var_61_int); // 0x832 Func
	var_62_int = 0; var_63_int = 0; // 0x834 PushV
	var_62_int = 600; // 0x835 MovI
	var_63_int = 1500; // 0x836 MovI
	func_2024(var_62_int, var_63_int); // 0x837 NEW_2
	var_81_string = ""; var_82_int = 0; var_83_int = 0; var_84_int = 0; // 0x839 PushV
	var_81_string = "rusk"; // 0x83a MovS
	var_82_int = 1; // 0x83b MovI
	var_83_int = 3; // 0x83c MovI
	var_84_int = 2; // 0x83d MovI
	func_1756(var_81_string, var_82_int, var_83_int, var_84_int); // 0x83e NEW_2
	var_97_string = ""; var_98_int = 0; var_99_int = 0; var_100_int = 0; // 0x840 PushV
	var_97_string = "alpha_pills"; // 0x841 MovS
	var_98_int = 1; // 0x842 MovI
	var_99_int = 3; // 0x843 MovI
	var_100_int = 5; // 0x844 MovI
	func_1756(var_97_string, var_98_int, var_99_int, var_100_int); // 0x845 NEW_2
	var_101_string = ""; var_102_int = 0; var_103_int = 0; var_104_int = 0; // 0x847 PushV
	var_101_string = "beta_pills"; // 0x848 MovS
	var_102_int = 1; // 0x849 MovI
	var_103_int = 6; // 0x84a MovI
	var_104_int = 4; // 0x84b MovI
	func_1756(var_101_string, var_102_int, var_103_int, var_104_int); // 0x84c NEW_2
	var_105_string = ""; var_106_int = 0; var_107_int = 0; var_108_int = 0; // 0x84e PushV
	var_105_string = "gamma_pills"; // 0x84f MovS
	var_106_int = 1; // 0x850 MovI
	var_107_int = 12; // 0x851 MovI
	var_108_int = 3; // 0x852 MovI
	func_1756(var_105_string, var_106_int, var_107_int, var_108_int); // 0x853 NEW_2
	var_109_int = 0; var_110_string = ""; // 0x855 PushV
	var_110_string = "ognemet_ammo"; // 0x856 MovS
	func_2142(var_109_int, var_110_string); // 0x857 NEW_2
	var_111_int = 0; // 0x859 PushI
	var_112_int = 1; // 0x85a PushI
	AddItem(var_60_bool, var_109_int, var_111_int, var_112_int); // 0x85b Func
	return 4; // 0x85d Return
}


func_2623(var_492_object)
{
	var_493_object = Obj(); // 0xa40 PushV
	var_493_object = var_492_object; // 0xa41 Mov
	TaskCall(6); // 0xa42 TaskCall
	func_1173(var_494_object, var_495_object, var_493_object); // 0xa43 NEW_2
	TaskReturn(); // 0xa44 TaskReturn
	ResetAAS(); // 0xa46 Func
	return 0; // 0xa48 Return
}


func_2633(var_47_object)
{
	var_48_bool = 0; var_49_bool = 0; // 0xa49 PushV
	var_50_bool = var_47_object == 0; // 0xa4a NullEq
	if(var_50_bool == 0) goto Label_2637; // 0xa4b JumpB
	return 2; // 0xa4c Return
	
Label_2637:
	var_51_object = GlobalVars[4]; // 0xa4d PushGE
	in(var_49_bool, var_47_object); // 0xa4e ObjFunc
	var_52_bool = var_49_bool == 0; // 0xa50 Not
	if(var_52_bool == 0) goto Label_2645; // 0xa51 JumpB
	var_53_object = GlobalVars[4]; // 0xa52 PushGE
	add(var_47_object); // 0xa53 ObjFunc
	
Label_2645:
	var_54_bool = 0; var_55_object = Obj(); // 0xa55 PushV
	var_55_object = var_47_object; // 0xa56 Mov
	func_1425(var_54_bool, var_55_object); // 0xa57 NEW_2
	if(var_54_bool == 0) goto Label_2656; // 0xa59 JumpB
	var_58_object = Obj(); // 0xa5a PushV
	func_1899(var_58_object); // 0xa5b NEW_2
	var_61_float = -0.07; // 0xa5d PushF
	ReportReputationChange(var_47_object, var_58_object, var_61_float); // 0xa5e Func
	
Label_2656:
	return 2; // 0xa60 Return
}


func_76(var_0_bool, var_1_object, var_399_bool, var_400_object, var_401_float, var_402_float, var_403_bool, var_404_bool)
{
	var_405_bool = 0; var_406_bool = 0; var_407_object = Obj(); var_408_cvector = CVector(0,0,0); var_409_cvector = CVector(0,0,0); var_410_cvector = CVector(0,0,0); var_411_float = 0; var_412_object = Obj(); var_413_bool = 0; var_414_bool = 0; var_415_object = Obj(); var_416_cvector = CVector(0,0,0); var_417_cvector = CVector(0,0,0); var_418_cvector = CVector(0,0,0); var_419_float = 0; var_420_object = Obj(); // 0x4c PushV
	var_0_bool = 0; // 0x4d TMovB
	var_1_object = var_400_object; // 0x4e TMov
	var_414_bool = var_404_bool; // 0x4f Mov
	
Label_80:
	var_421_bool = 0; var_422_object = Obj(); // 0x50 PushV
	var_422_object = var_400_object; // 0x51 Mov
	func_11(var_421_bool, var_422_object); // 0x52 NEW_2
	var_425_bool = var_421_bool == 0; // 0x54 Not
	if(var_425_bool == 0) goto Label_88; // 0x55 JumpB
	var_399_bool = 0; // 0x56 MovB
	return 16; // 0x57 Return
	
Label_88:
	GetPosition(var_416_cvector); // 0x58 ObjFunc
	GetPosition(var_417_cvector); // 0x5a Func
	var_418_cvector = var_416_cvector - var_417_cvector; // 0x5c Sub2
	var_419_float = var_418_cvector | var_418_cvector; // 0x5d Or2
	var_426_bool = 0; // 0x5e PushV
	var_426_bool = 0; // 0x5f MovB
	var_427_int = 0; // 0x60 PushI
	var_428_bool = var_402_float > var_427_int; // 0x61 GT
	if(var_428_bool == 0) goto Label_103; // 0x62 JumpB
	var_429_float = var_402_float * var_402_float; // 0x63 Mult
	var_430_bool = var_419_float > var_429_float; // 0x64 GT
	if(var_430_bool == 0) goto Label_103; // 0x65 JumpB
	var_426_bool = 1; // 0x66 MovB
	
Label_103:
	if(var_426_bool == 0) goto Label_108; // 0x67 JumpB
	Stop(); // 0x68 Func
	var_399_bool = 0; // 0x6a MovB
	return 16; // 0x6b Return
	
Label_108:
	var_431_float = var_401_float * var_401_float; // 0x6c Mult
	var_432_bool = var_419_float > var_431_float; // 0x6d GT
	if(var_432_bool == 0) goto Label_170; // 0x6e JumpB
	GetPFPosition(var_416_cvector); // 0x6f ObjFunc
	FindPathTo(var_420_object, var_416_cvector); // 0x71 Func
	var_433_bool = var_420_object != 0; // 0x73 NullNeq
	if(var_433_bool == 0) goto Label_119; // 0x74 JumpB
	var_415_object = var_420_object; // 0x75 Mov
	var_420_object = 0; // 0x76 SetNull
	
Label_119:
	var_434_bool = var_415_object != 0; // 0x77 NullNeq
	if(var_434_bool == 0) goto Label_152; // 0x78 JumpB
	var_435_bool = var_414_bool; // 0x79 Push
	if(var_435_bool == 0) goto Label_129; // 0x7a JumpB
	var_414_bool = 0; // 0x7b MovB
	RotatePath(var_415_object, var_413_bool); // 0x7c Func
	var_436_bool = var_413_bool == 0; // 0x7e Not
	if(var_436_bool == 0) goto Label_129; // 0x7f JumpB
	goto Label_176; // 0x80 Jump
	
Label_176:
	var_399_bool = !var_0_bool; // 0xb0 Not2
	return 16; // 0xb1 Return
	
Label_129:
	var_437_int = 0; // 0x81 PushI
	var_438_float = 0.3; // 0x82 PushF
	SetTimer(var_437_int, var_438_float); // 0x83 Func
	var_439_string = ""; // 0x85 PushV
	func_216(var_439_string); // 0x86 NEW_2
	var_440_string = ""; // 0x88 PushV
	func_218(var_440_string); // 0x89 NEW_2
	FollowPath(var_415_object, var_403_bool, var_413_bool, var_439_string, var_440_string); // 0x8b Func
	var_441_bool = var_413_bool == 0; // 0x8d Not
	if(var_441_bool == 0) goto Label_150; // 0x8e JumpB
	var_442_bool = var_0_bool; // 0x8f PushT
	if(var_442_bool == 0) goto Label_148; // 0x90 JumpB
	var_415_object = 0; // 0x91 SetNull
	goto Label_176; // 0x92 Jump
	
Label_148:
	goto Label_175; // 0x94 Jump
	
Label_175:
	goto Label_80; // 0xaf Jump
	
Label_150:
	var_415_object = 0; // 0x96 SetNull
	goto Label_168; // 0x97 Jump
	
Label_168:
	var_420_object = 0; // 0xa8 SetNull
	goto Label_174; // 0xa9 Jump
	
Label_174:
	var_415_object = 0; // 0xae SetNull
	
Label_152:
	var_443_int = 0; // 0x98 PushI
	KillTimer(var_443_int); // 0x99 Func
	var_444_float = 0.5; // 0x9b PushF
	Sleep(var_444_float, var_413_bool); // 0x9c Func
	var_445_bool = var_413_bool == 0; // 0x9e Not
	if(var_445_bool == 0) goto Label_164; // 0x9f JumpB
	var_446_bool = var_0_bool; // 0xa0 PushT
	if(var_446_bool == 0) goto Label_164; // 0xa1 JumpB
	var_415_object = 0; // 0xa2 SetNull
	goto Label_176; // 0xa3 Jump
	
Label_164:
	var_447_int = 0; // 0xa4 PushI
	var_448_float = 0.3; // 0xa5 PushF
	SetTimer(var_447_int, var_448_float); // 0xa6 Func
	
Label_170:
	var_449_int = 0; // 0xaa PushI
	KillTimer(var_449_int); // 0xab Func
	goto Label_176; // 0xad Jump
}


func_1614(var_28_object)
{
	var_29_bool = 0; var_30_int = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_string = ""; var_36_bool = 0; var_37_int = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_string = ""; // 0x64e PushV
	var_43_bool = var_28_object == 0; // 0x64f NullEq
	if(var_43_bool == 0) goto Label_1618; // 0x650 JumpB
	return 14; // 0x651 Return
	
Label_1618:
	IsDead(var_36_bool); // 0x652 Func
	var_44_bool = var_36_bool; // 0x654 Push
	if(var_44_bool == 0) goto Label_1623; // 0x655 JumpB
	return 14; // 0x656 Return
	
Label_1623:
	GetSecondaryAnimationType(var_37_int); // 0x657 Func
	var_45_int = 0; // 0x659 PushI
	var_46_bool = var_37_int < var_45_int; // 0x65a LT
	if(var_46_bool == 0) goto Label_1629; // 0x65b JumpB
	return 14; // 0x65c Return
	
Label_1629:
	GetPosition(var_38_cvector); // 0x65d ObjFunc
	GetPosition(var_39_cvector); // 0x65f Func
	GetDirection(var_40_cvector); // 0x661 Func
	var_41_cvector = var_39_cvector - var_38_cvector; // 0x663 Sub2
	var_47_float = GetByIndex(var_41_cvector, 0); // 0x664 PushE
	var_48_float = GetByIndex(var_40_cvector, 0); // 0x665 PushE
	var_49_float = var_47_float * var_48_float; // 0x666 Mult
	var_50_float = GetByIndex(var_41_cvector, 2); // 0x667 PushE
	var_51_float = GetByIndex(var_40_cvector, 2); // 0x668 PushE
	var_52_float = var_50_float * var_51_float; // 0x669 Mult
	var_53_int = var_49_float + var_52_float; // 0x66a Add
	var_54_int = 0; // 0x66b PushI
	var_55_bool = var_53_int >= var_54_int; // 0x66c GE
	if(var_55_bool == 0) goto Label_1648; // 0x66d JumpB
	var_42_string = "fhit"; // 0x66e MovS
	goto Label_1649; // 0x66f Jump
	
Label_1649:
	var_56_string = "hit_react"; // 0x671 PushS
	var_57_string = "1"; // 0x672 PushS
	var_58_int = var_42_string + var_57_string; // 0x673 Add
	var_59_string = "2"; // 0x674 PushS
	var_60_int = var_42_string + var_59_string; // 0x675 Add
	var_61_int = -10; // 0x676 PushI
	FadeSecondaryAnimation(var_56_string, var_58_int, var_60_int, var_61_int); // 0x677 Func
	return 14; // 0x679 Return
	
Label_1648:
	var_42_string = "bhit"; // 0x670 MovS
}


func_602(var_0_bool, var_1_object)
{
	var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_object = Obj(); var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0; var_44_object = Obj(); var_45_bool = 0; // 0x25a PushV
	var_0_bool = 0; // 0x25b TMovB
	var_1_object = 0; // 0x25c TMovB
	var_46_float = 0.5; // 0x25d PushF
	rand(var_40_float, var_46_float); // 0x25e Func
	Sleep(var_40_float); // 0x260 Func
	
Label_610:
	var_47_bool = var_0_bool == 0; // 0x262 Not
	if(var_47_bool == 0) goto Label_660; // 0x263 JumpB
	var_48_bool = var_1_object == 0; // 0x264 Not
	if(var_48_bool == 0) goto Label_629; // 0x265 JumpB
	
Label_614:
	GetPosition(var_42_cvector); // 0x266 Func
	var_49_float = 0; // 0x268 PushV
	func_661(var_49_float); // 0x269 NEW_2
	GetRandomPFPointInCircle(var_41_cvector, var_42_cvector, var_49_float, var_43_bool); // 0x26b Func
	var_52_bool = var_43_bool; // 0x26d Push
	if(var_52_bool == 0) goto Label_624; // 0x26e JumpB
	goto Label_628; // 0x26f Jump
	
Label_628:
	goto Label_630; // 0x274 Jump
	
Label_630:
	var_53_object = Obj(); var_54_cvector = CVector(0,0,0); // 0x276 PushV
	var_54_cvector = var_41_cvector; // 0x277 Mov
	func_691(var_53_object, var_54_cvector); // 0x278 NEW_2
	var_44_object = var_53_object; // 0x279 Mov
	var_57_bool = var_44_object != 0; // 0x27b NullNeq
	if(var_57_bool == 0) goto Label_655; // 0x27c JumpB
	RotatePath(var_44_object, var_45_bool); // 0x27d Func
	var_58_bool = var_45_bool; // 0x27f Push
	if(var_58_bool == 0) goto Label_654; // 0x280 JumpB
	var_59_bool = 0; // 0x281 PushV
	func_689(var_59_bool); // 0x282 NEW_2
	FollowPath(var_44_object, var_59_bool, var_45_bool); // 0x284 Func
	var_44_object = 0; // 0x286 SetNull
	var_60_bool = var_45_bool; // 0x287 Push
	if(var_60_bool == 0) goto Label_654; // 0x288 JumpB
	TaskCall(3); // 0x28a TaskCall
	func_777(); // 0x28b NEW_2
	TaskReturn(); // 0x28c TaskReturn
	
Label_654:
	goto Label_658; // 0x28e Jump
	
Label_658:
	var_44_object = 0; // 0x292 SetNull
	goto Label_610; // 0x293 Jump
	
Label_655:
	var_114_int = 1; // 0x28f PushI
	Sleep(var_114_int); // 0x290 Func
	
Label_624:
	var_115_int = 1; // 0x270 PushI
	Sleep(var_115_int); // 0x271 Func
	goto Label_614; // 0x273 Jump
	
Label_629:
	var_1_object = 0; // 0x275 TMovB
	
Label_660:
	return 12; // 0x294 Return
}


func_2142(var_74_int, var_75_string)
{
	var_76_int = 0; var_77_int = 0; // 0x85e PushV
	GetInvItemByName(var_77_int, var_75_string); // 0x85f Func
	var_74_int = var_77_int; // 0x861 Mov
	return 2; // 0x862 Return
}


func_2657(var_98_object)
{
	var_99_object = Obj(); // 0xa62 PushV
	var_99_object = var_98_object; // 0xa63 Mov
	func_2633(var_99_object); // 0xa64 NEW_2
	var_100_object = Obj(); // 0xa66 PushV
	var_100_object = var_98_object; // 0xa67 Mov
	func_2532(var_98_object, var_100_object); // 0xa68 NEW_2
	return 0; // 0xa6a Return
}


func_2147(var_20_bool, var_21_object, var_22_bool)
{
	var_23_string = ""; var_24_string = ""; // 0x863 PushV
	var_25_bool = 0; var_26_object = Obj(); var_27_string = ""; // 0x864 PushV
	var_26_object = var_21_object; // 0x865 Mov
	var_27_string = "class"; // 0x866 MovS
	func_1430(var_25_bool, var_26_object, var_27_string); // 0x867 NEW_2
	var_34_bool = var_25_bool == 0; // 0x869 Not
	if(var_34_bool == 0) goto Label_2157; // 0x86a JumpB
	var_20_bool = 0; // 0x86b MovB
	return 2; // 0x86c Return
	
Label_2157:
	var_35_string = "class"; // 0x86d PushS
	GetProperty(var_35_string, var_24_string); // 0x86e ObjFunc
	var_36_bool = 0; // 0x870 PushV
	var_36_bool = 1; // 0x871 MovB
	var_37_bool = 0; // 0x872 PushV
	var_37_bool = 1; // 0x873 MovB
	var_38_bool = 0; // 0x874 PushV
	var_38_bool = 1; // 0x875 MovB
	var_39_bool = 0; // 0x876 PushV
	var_39_bool = 1; // 0x877 MovB
	var_40_bool = 0; // 0x878 PushV
	var_40_bool = 1; // 0x879 MovB
	var_41_bool = 0; // 0x87a PushV
	var_41_bool = 1; // 0x87b MovB
	var_42_bool = 0; // 0x87c PushV
	var_42_bool = 1; // 0x87d MovB
	var_43_bool = 0; // 0x87e PushV
	var_43_bool = 1; // 0x87f MovB
	var_44_bool = 0; // 0x880 PushV
	var_44_bool = 1; // 0x881 MovB
	var_45_bool = 0; // 0x882 PushV
	var_45_bool = 1; // 0x883 MovB
	var_46_string = "patrol"; // 0x884 PushS
	var_47_bool = var_24_string == var_46_string; // 0x885 Eq
	if(var_47_bool == 0) goto Label_2187; // 0x886 JumpB
	var_48_string = "sanitar"; // 0x887 PushS
	var_49_bool = var_24_string == var_48_string; // 0x888 Eq
	if(var_49_bool == 0) goto Label_2187; // 0x889 JumpB
	var_45_bool = 0; // 0x88a MovB
	
Label_2187:
	if(var_45_bool == 0) goto Label_2192; // 0x88b JumpB
	var_50_string = "soldier"; // 0x88c PushS
	var_51_bool = var_24_string == var_50_string; // 0x88d Eq
	if(var_51_bool == 0) goto Label_2192; // 0x88e JumpB
	var_44_bool = 0; // 0x88f MovB
	
Label_2192:
	if(var_44_bool == 0) goto Label_2197; // 0x890 JumpB
	var_52_string = "woman"; // 0x891 PushS
	var_53_bool = var_24_string == var_52_string; // 0x892 Eq
	if(var_53_bool == 0) goto Label_2197; // 0x893 JumpB
	var_43_bool = 0; // 0x894 MovB
	
Label_2197:
	if(var_43_bool == 0) goto Label_2202; // 0x895 JumpB
	var_54_string = "wasted_girl"; // 0x896 PushS
	var_55_bool = var_24_string == var_54_string; // 0x897 Eq
	if(var_55_bool == 0) goto Label_2202; // 0x898 JumpB
	var_42_bool = 0; // 0x899 MovB
	
Label_2202:
	if(var_42_bool == 0) goto Label_2207; // 0x89a JumpB
	var_56_string = "vaxxabitka"; // 0x89b PushS
	var_57_bool = var_24_string == var_56_string; // 0x89c Eq
	if(var_57_bool == 0) goto Label_2207; // 0x89d JumpB
	var_41_bool = 0; // 0x89e MovB
	
Label_2207:
	if(var_41_bool == 0) goto Label_2212; // 0x89f JumpB
	var_58_string = "vaxxabit"; // 0x8a0 PushS
	var_59_bool = var_24_string == var_58_string; // 0x8a1 Eq
	if(var_59_bool == 0) goto Label_2212; // 0x8a2 JumpB
	var_40_bool = 0; // 0x8a3 MovB
	
Label_2212:
	if(var_40_bool == 0) goto Label_2217; // 0x8a4 JumpB
	var_60_string = "little_girl"; // 0x8a5 PushS
	var_61_bool = var_24_string == var_60_string; // 0x8a6 Eq
	if(var_61_bool == 0) goto Label_2217; // 0x8a7 JumpB
	var_39_bool = 0; // 0x8a8 MovB
	
Label_2217:
	if(var_39_bool == 0) goto Label_2222; // 0x8a9 JumpB
	var_62_string = "girl"; // 0x8aa PushS
	var_63_bool = var_24_string == var_62_string; // 0x8ab Eq
	if(var_63_bool == 0) goto Label_2222; // 0x8ac JumpB
	var_38_bool = 0; // 0x8ad MovB
	
Label_2222:
	if(var_38_bool == 0) goto Label_2227; // 0x8ae JumpB
	var_64_string = "dohodyaga"; // 0x8af PushS
	var_65_bool = var_24_string == var_64_string; // 0x8b0 Eq
	if(var_65_bool == 0) goto Label_2227; // 0x8b1 JumpB
	var_37_bool = 0; // 0x8b2 MovB
	
Label_2227:
	if(var_37_bool == 0) goto Label_2232; // 0x8b3 JumpB
	var_66_string = "nudegirl"; // 0x8b4 PushS
	var_67_bool = var_24_string == var_66_string; // 0x8b5 Eq
	if(var_67_bool == 0) goto Label_2232; // 0x8b6 JumpB
	var_36_bool = 0; // 0x8b7 MovB
	
Label_2232:
	if(var_36_bool == 0) goto Label_2235; // 0x8b8 JumpB
	var_20_bool = 1; // 0x8b9 MovB
	return 2; // 0x8ba Return
	
Label_2235:
	var_68_bool = var_22_bool; // 0x8bb Push
	if(var_68_bool == 0) goto Label_2239; // 0x8bc JumpB
	var_20_bool = 0; // 0x8bd MovB
	return 2; // 0x8be Return
	
Label_2239:
	var_20_bool = 1; // 0x8bf MovB
	var_69_bool = 0; // 0x8c0 PushV
	var_69_bool = 1; // 0x8c1 MovB
	var_70_bool = 0; // 0x8c2 PushV
	var_70_bool = 1; // 0x8c3 MovB
	var_71_bool = 0; // 0x8c4 PushV
	var_71_bool = 1; // 0x8c5 MovB
	var_72_bool = 0; // 0x8c6 PushV
	var_72_bool = 1; // 0x8c7 MovB
	var_73_bool = 0; // 0x8c8 PushV
	var_73_bool = 1; // 0x8c9 MovB
	var_74_string = "worker"; // 0x8ca PushS
	var_75_bool = var_24_string == var_74_string; // 0x8cb Eq
	if(var_75_bool == 0) goto Label_2257; // 0x8cc JumpB
	var_76_string = "butcher"; // 0x8cd PushS
	var_77_bool = var_24_string == var_76_string; // 0x8ce Eq
	if(var_77_bool == 0) goto Label_2257; // 0x8cf JumpB
	var_73_bool = 0; // 0x8d0 MovB
	
Label_2257:
	if(var_73_bool == 0) goto Label_2262; // 0x8d1 JumpB
	var_78_string = "boy"; // 0x8d2 PushS
	var_79_bool = var_24_string == var_78_string; // 0x8d3 Eq
	if(var_79_bool == 0) goto Label_2262; // 0x8d4 JumpB
	var_72_bool = 0; // 0x8d5 MovB
	
Label_2262:
	if(var_72_bool == 0) goto Label_2267; // 0x8d6 JumpB
	var_80_string = "unosha"; // 0x8d7 PushS
	var_81_bool = var_24_string == var_80_string; // 0x8d8 Eq
	if(var_81_bool == 0) goto Label_2267; // 0x8d9 JumpB
	var_71_bool = 0; // 0x8da MovB
	
Label_2267:
	if(var_71_bool == 0) goto Label_2272; // 0x8db JumpB
	var_82_string = "wasted_male"; // 0x8dc PushS
	var_83_bool = var_24_string == var_82_string; // 0x8dd Eq
	if(var_83_bool == 0) goto Label_2272; // 0x8de JumpB
	var_70_bool = 0; // 0x8df MovB
	
Label_2272:
	if(var_70_bool == 0) goto Label_2277; // 0x8e0 JumpB
	var_84_string = "alkash"; // 0x8e1 PushS
	var_85_bool = var_24_string == var_84_string; // 0x8e2 Eq
	if(var_85_bool == 0) goto Label_2277; // 0x8e3 JumpB
	var_69_bool = 0; // 0x8e4 MovB
	
Label_2277:
	if(var_69_bool == 0) goto Label_2282; // 0x8e5 JumpB
	var_86_string = "morlok"; // 0x8e6 PushS
	var_87_bool = var_24_string == var_86_string; // 0x8e7 Eq
	if(var_87_bool == 0) goto Label_2282; // 0x8e8 JumpB
	var_20_bool = 0; // 0x8e9 MovB
	
Label_2282:
	return 2; // 0x8ea Return
}


func_2667(var_12_object)
{
	var_13_object = Obj(); // 0xa6c PushV
	func_1899(var_13_object); // 0xa6d NEW_2
	var_16_float = -0.13; // 0xa6f PushF
	var_17_bool = 1; // 0xa70 PushB
	ReportReputationChange(var_12_object, var_13_object, var_16_float, var_17_bool); // 0xa71 Func
	var_18_object = Obj(); // 0xa73 PushV
	var_18_object = var_12_object; // 0xa74 Mov
	TaskCall(5); // 0xa75 TaskCall
	func_999(var_18_object); // 0xa76 NEW_2
	TaskReturn(); // 0xa77 TaskReturn
	return 0; // 0xa79 Return
}


func_1141(var_156_string)
{
	RemoveRTEnvelope(); // 0x476 Func
	SetDeathState(); // 0x478 Func
	Stop(); // 0x47a Func
	StopAsync(); // 0x47c Func
	StopSecondaryAnimation(); // 0x47e Func
	var_157_string = ""; // 0x480 PushV
	var_157_string = var_156_string; // 0x481 Mov
	func_1771(var_157_string); // 0x482 NEW_2
	var_186_string = "all"; // 0x484 PushS
	PlayAnimation(var_186_string, var_156_string); // 0x485 Func
	WaitForAnimEnd(); // 0x487 Func
	var_187_string = "all"; // 0x489 PushS
	LockAnimationEnd(var_187_string, var_156_string); // 0x48a Func
	RemoveEnvelope(); // 0x48c Func
	return 0; // 0x48e Return
}


func_1658(var_15_object, var_16_int, var_17_float)
{
	var_18_cvector = CVector(0,0,0); var_19_object = Obj(); var_20_int = 0; var_21_bool = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_int = 0; var_25_int = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_object = Obj(); var_29_int = 0; var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_int = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); // 0x67a PushV
	var_36_bool = 0; // 0x67b PushV
	var_36_bool = 0; // 0x67c MovB
	var_37_bool = 0; // 0x67d PushV
	var_37_bool = 0; // 0x67e MovB
	var_38_object = var_15_object; // 0x67f Push
	if(var_38_object == 0) goto Label_1669; // 0x680 JumpB
	var_39_int = 4; // 0x681 PushI
	var_40_bool = var_16_int != var_39_int; // 0x682 Neq
	if(var_40_bool == 0) goto Label_1669; // 0x683 JumpB
	var_37_bool = 1; // 0x684 MovB
	
Label_1669:
	if(var_37_bool == 0) goto Label_1674; // 0x685 JumpB
	var_41_int = 5; // 0x686 PushI
	var_42_bool = var_16_int != var_41_int; // 0x687 Neq
	if(var_42_bool == 0) goto Label_1674; // 0x688 JumpB
	var_36_bool = 1; // 0x689 MovB
	
Label_1674:
	if(var_36_bool == 0) goto Label_1721; // 0x68a JumpB
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0x68b PushV
	var_45_cvector = CVector(0,0,0); var_46_object = Obj(); // 0x68c PushV
	var_46_object = var_15_object; // 0x68d Mov
	func_1410(var_46_object); // 0x68e NEW_2
	var_44_cvector = var_45_cvector; // 0x68f Mov
	func_1905(var_43_cvector, var_44_cvector); // 0x691 NEW_2
	var_27_cvector = var_43_cvector; // 0x692 Mov
	CreateVectorVector(var_28_object); // 0x694 Func
	var_29_int = 1; // 0x696 MovI
	
Label_1687:
	var_56_string = "hit"; // 0x697 PushS
	var_57_int = var_56_string + var_29_int; // 0x698 Add
	GetGeometryLocator(var_57_int, var_30_bool, var_31_cvector, var_32_cvector); // 0x699 Func
	var_58_bool = var_30_bool == 0; // 0x69b Not
	if(var_58_bool == 0) goto Label_1694; // 0x69c JumpB
	goto Label_1703; // 0x69d Jump
	
Label_1703:
	size(var_33_int); // 0x6a7 ObjFunc
	var_59_int = var_33_int; // 0x6a9 Push
	if(var_59_int == 0) goto Label_1720; // 0x6aa JumpB
	irand(var_34_int, var_33_int); // 0x6ab Func
	get(var_35_cvector, var_34_int); // 0x6ad ObjFunc
	var_60_object = Obj(); var_61_int = 0; var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); // 0x6af PushV
	var_60_object = var_15_object; // 0x6b0 Mov
	var_61_int = var_16_int; // 0x6b1 Mov
	var_62_float = var_17_float; // 0x6b2 Mov
	var_63_cvector = var_35_cvector; // 0x6b3 Mov
	var_64_cvector = -var_27_cvector; // 0x6b4 Neg2
	func_1726(var_62_float, var_63_cvector, var_64_cvector); // 0x6b5 NEW_2
	return 18; // 0x6b7 Return
	
Label_1720:
	var_28_object = 0; // 0x6b8 SetNull
	
Label_1721:
	var_105_object = Obj(); // 0x6b9 PushV
	var_105_object = var_15_object; // 0x6ba Mov
	func_1614(var_105_object); // 0x6bb NEW_2
	return 18; // 0x6bd Return
	
Label_1694:
	var_106_int = var_32_cvector | var_27_cvector; // 0x69e Or
	var_107_float = 0.70711; // 0x69f PushF
	var_108_bool = var_106_int >= var_107_float; // 0x6a0 GE
	if(var_108_bool == 0) goto Label_1700; // 0x6a1 JumpB
	add(var_31_cvector); // 0x6a2 ObjFunc
	
Label_1700:
	var_109_int = 1; // 0x6a4 PushI
	var_29_int = var_29_int + var_109_int; // 0x6a5 Add2
	goto Label_1687; // 0x6a6 Jump
}


func_661(var_49_float)
{
	var_50_float = 0; var_51_float = 0; // 0x295 PushV
	GetCameraFarDistance(var_51_float); // 0x296 Func
	var_49_float = var_51_float; // 0x298 Mov
	return 2; // 0x299 Return
}


func_1173(var_0_bool, var_380_object, var_397_bool)
{
	var_383_bool = 0; var_384_object = Obj(); var_385_cvector = CVector(0,0,0); var_386_float = 0; var_387_bool = 0; var_388_object = Obj(); var_389_cvector = CVector(0,0,0); var_390_float = 0; // 0x495 PushV
	var_391_bool = 0; var_392_object = Obj(); var_393_string = ""; // 0x496 PushV
	var_392_object = var_380_object; // 0x497 Mov
	var_393_string = "disease"; // 0x498 MovS
	func_1430(var_391_bool, var_392_object, var_393_string); // 0x499 NEW_2
	var_394_bool = var_391_bool == 0; // 0x49b Not
	if(var_394_bool == 0) goto Label_1182; // 0x49c JumpB
	return 8; // 0x49d Return
	
Label_1182:
	var_395_bool = 0; var_396_object = Obj(); // 0x49e PushV
	var_396_object = var_380_object; // 0x49f Mov
	TaskCall(0); // 0x4a0 TaskCall
	func_0(var_395_bool, var_396_object); // 0x4a1 NEW_2
	TaskReturn(); // 0x4a2 TaskReturn
	var_450_bool = var_397_bool == 0; // 0x4a4 Not
	if(var_450_bool == 0) goto Label_1191; // 0x4a5 JumpB
	return 8; // 0x4a6 Return
	
Label_1191:
	Face(var_380_object); // 0x4a7 Func
	WaitForAnimEnd(var_387_bool); // 0x4a9 Func
	var_451_bool = var_387_bool; // 0x4ab Push
	if(var_451_bool == 0) goto Label_1298; // 0x4ac JumpB
	var_452_string = "all"; // 0x4ad PushS
	var_453_string = "attack_on"; // 0x4ae PushS
	PlayAnimation(var_452_string, var_453_string); // 0x4af Func
	WaitForAnimEnd(var_387_bool); // 0x4b1 Func
	var_454_bool = var_387_bool; // 0x4b3 Push
	if(var_454_bool == 0) goto Label_1298; // 0x4b4 JumpB
	var_455_bool = 0; // 0x4b5 PushV
	var_455_bool = 1; // 0x4b6 MovB
	func_2324(var_455_bool); // 0x4b7 NEW_2
	var_456_int = 71; // 0x4b9 PushI
	var_457_int = 1; // 0x4ba PushI
	SetTimer(var_456_int, var_457_int); // 0x4bb Func
	
Label_1213:
	var_458_bool = 0; // 0x4bd PushV
	var_458_bool = 0; // 0x4be MovB
	var_459_bool = var_0_bool == 0; // 0x4bf Not
	if(var_459_bool == 0) goto Label_1225; // 0x4c0 JumpB
	var_460_bool = 0; var_461_object = Obj(); var_462_string = ""; // 0x4c1 PushV
	var_461_object = var_380_object; // 0x4c2 Mov
	var_462_string = "cleansed"; // 0x4c3 MovS
	func_1430(var_460_bool, var_461_object, var_462_string); // 0x4c4 NEW_2
	var_463_bool = var_460_bool == 0; // 0x4c6 Not
	if(var_463_bool == 0) goto Label_1225; // 0x4c7 JumpB
	var_458_bool = 1; // 0x4c8 MovB
	
Label_1225:
	if(var_458_bool == 0) goto Label_1241; // 0x4c9 JumpB
	var_464_string = "cleansed"; // 0x4ca PushS
	var_465_bool = 1; // 0x4cb PushB
	SetProperty(var_464_string, var_465_bool); // 0x4cc ObjFunc
	var_0_bool = var_380_object; // 0x4ce TMov
	GetScene(var_388_object); // 0x4cf Func
	GetPosition(var_389_cvector); // 0x4d1 ObjFunc
	var_466_string = "scripted"; // 0x4d3 PushS
	var_467_cvector = CVector(0.0, 0.0, 1.0); // 0x4d4 PushVec
	var_468_string = "corpse_fire.xml"; // 0x4d5 PushS
	AddActorByType(var_468_string, var_466_string, var_388_object, var_389_cvector, var_467_cvector, var_468_string); // 0x4d6 Func
	var_388_object = 0; // 0x4d8 SetNull
	
Label_1241:
	var_469_string = "all"; // 0x4d9 PushS
	var_470_string = "cattack"; // 0x4da PushS
	PlayAnimation(var_469_string, var_470_string); // 0x4db Func
	WaitForAnimEnd(var_387_bool); // 0x4dd Func
	var_471_bool = 0; // 0x4df PushV
	var_471_bool = 1; // 0x4e0 MovB
	var_472_bool = var_387_bool == 0; // 0x4e1 Not
	if(var_472_bool == 0) goto Label_1258; // 0x4e2 JumpB
	var_473_bool = 0; var_474_object = Obj(); // 0x4e3 PushV
	var_474_object = var_380_object; // 0x4e4 Mov
	func_1580(var_473_bool, var_474_object); // 0x4e5 NEW_2
	var_475_bool = var_473_bool == 0; // 0x4e7 Not
	if(var_475_bool == 0) goto Label_1258; // 0x4e8 JumpB
	var_471_bool = 0; // 0x4e9 MovB
	
Label_1258:
	if(var_471_bool == 0) goto Label_1260; // 0x4ea JumpB
	goto Label_1277; // 0x4eb Jump
	
Label_1277:
	var_476_int = 71; // 0x4fd PushI
	KillTimer(var_476_int); // 0x4fe Func
	var_477_bool = 0; // 0x500 PushV
	var_477_bool = 0; // 0x501 MovB
	func_2324(var_477_bool); // 0x502 NEW_2
	var_478_bool = var_0_bool; // 0x504 PushT
	if(var_478_bool == 0) goto Label_1290; // 0x505 JumpB
	var_479_string = "cleansed"; // 0x506 PushS
	RemoveProperty(var_479_string); // 0x507 TObjFunc
	var_0_bool = 0; // 0x509 SetNullT
	
Label_1290:
	var_480_bool = var_387_bool; // 0x50a Push
	if(var_480_bool == 0) goto Label_1298; // 0x50b JumpB
	var_481_string = "all"; // 0x50c PushS
	var_482_string = "attack_off"; // 0x50d PushS
	PlayAnimation(var_481_string, var_482_string); // 0x50e Func
	WaitForAnimEnd(); // 0x510 Func
	
Label_1298:
	StopAsync(); // 0x512 Func
	return 8; // 0x514 Return
	
Label_1260:
	var_483_string = "disease"; // 0x4ec PushS
	GetProperty(var_483_string, var_390_float); // 0x4ed ObjFunc
	var_484_float = 0.1; // 0x4ef PushF
	var_485_bool = var_390_float <= var_484_float; // 0x4f0 LE
	if(var_485_bool == 0) goto Label_1271; // 0x4f1 JumpB
	var_486_string = "disease"; // 0x4f2 PushS
	var_487_float = 0.0; // 0x4f3 PushF
	SetProperty(var_486_string, var_487_float); // 0x4f4 ObjFunc
	goto Label_1277; // 0x4f6 Jump
	
Label_1271:
	var_488_string = "disease"; // 0x4f7 PushS
	var_489_float = 0.1; // 0x4f8 PushF
	var_490_int = var_390_float - var_489_float; // 0x4f9 Sub
	SetProperty(var_488_string, var_490_int); // 0x4fa ObjFunc
	goto Label_1213; // 0x4fc Jump
}


func_2719(var_14_bool, var_15_object, var_16_object, var_17_bool)
{
	var_18_bool = 0; var_19_bool = 0; // 0xa9f PushV
	var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; // 0xaa0 PushV
	var_21_object = var_16_object; // 0xaa1 Mov
	var_22_bool = !var_17_bool; // 0xaa2 Not2
	func_2147(var_20_bool, var_21_object, var_22_bool); // 0xaa3 NEW_2
	if(var_20_bool == 0) goto Label_2743; // 0xaa5 JumpB
	CanSee(var_19_bool, var_15_object); // 0xaa6 Func
	var_88_bool = 0; // 0xaa8 PushV
	var_88_bool = 1; // 0xaa9 MovB
	var_89_bool = var_19_bool; // 0xaaa Push
	if(var_89_bool == 0) goto Label_2740; // 0xaab JumpB
	var_90_float = 0; var_91_object = Obj(); // 0xaac PushV
	var_91_object = var_15_object; // 0xaad Mov
	func_1417(var_91_object); // 0xaae NEW_2
	var_98_float = 490000.0; // 0xab0 PushF
	var_99_bool = var_90_float <= var_98_float; // 0xab1 LE
	if(var_99_bool == 0) goto Label_2740; // 0xab2 JumpB
	var_88_bool = 0; // 0xab3 MovB
	
Label_2740:
	if(var_88_bool == 0) goto Label_2743; // 0xab4 JumpB
	var_14_bool = 1; // 0xab5 MovB
	return 2; // 0xab6 Return
	
Label_2743:
	var_14_bool = 0; // 0xab7 MovB
	return 2; // 0xab8 Return
}


func_673(var_0_bool, var_1_object)
{
	var_0_bool = 1; // 0x2a1 TMovB
	var_1_object = 0; // 0x2a2 TMovB
	Stop(); // 0x2a3 Func
	StopGroup0(); // 0x2a5 Func
	return 0; // 0x2a7 Return
}


func_689(var_59_bool)
{
	var_59_bool = 0; // 0x2b1 MovB
	return 0; // 0x2b2 Return
}


func_178(var_0_bool, var_1_object, var_12_int)
{
	var_13_int = 0; // 0xb3 PushI
	var_14_bool = var_12_int != var_13_int; // 0xb4 Neq
	if(var_14_bool == 0) goto Label_183; // 0xb5 JumpB
	return 0; // 0xb6 Return
	
Label_183:
	var_15_bool = 0; var_16_object = Obj(); // 0xb7 PushV
	var_16_object = var_1_object; // 0xb8 MovT
	func_11(var_15_bool, var_16_object); // 0xb9 NEW_2
	var_40_bool = var_15_bool == 0; // 0xbb Not
	if(var_40_bool == 0) goto Label_190; // 0xbc JumpB
	var_0_bool = 1; // 0xbd TMovB
	
Label_190:
	var_41_int = 0; // 0xbe PushI
	KillTimer(var_41_int); // 0xbf Func
	Stop(); // 0xc1 Func
	return 0; // 0xc3 Return
}


func_691(var_53_object, var_54_cvector)
{
	var_55_object = Obj(); var_56_object = Obj(); // 0x2b3 PushV
	FindShiftedPathTo(var_56_object, var_54_cvector); // 0x2b4 Func
	var_53_object = var_56_object; // 0x2b6 Mov
	return 2; // 0x2b7 Return
}


func_2745(var_16_int)
{
	var_17_object = Obj(); var_18_float = 0; var_19_object = Obj(); var_20_bool = 0; var_21_string = ""; var_22_float = 0; var_23_float = 0; var_24_float = 0; var_25_object = Obj(); var_26_float = 0; var_27_object = Obj(); var_28_bool = 0; var_29_string = ""; var_30_float = 0; var_31_float = 0; var_32_float = 0; // 0xab9 PushV
	var_33_int = 70; // 0xaba PushI
	var_34_bool = var_16_int != var_33_int; // 0xabb Neq
	if(var_34_bool == 0) goto Label_2750; // 0xabc JumpB
	return 16; // 0xabd Return
	
Label_2750:
	var_35_object = GlobalVars[0]; // 0xabe PushGE
	var_36_bool = var_35_object == 0; // 0xabf NullEq
	if(var_36_bool == 0) goto Label_2754; // 0xac0 JumpB
	return 16; // 0xac1 Return
	
Label_2754:
	var_37_object = GlobalVars[0]; // 0xac2 PushGE
	Intersect(var_25_object, var_26_float); // 0xac3 ObjFunc
	var_38_object = GlobalVars[0]; // 0xac5 PushGE
	var_39_bool = GlobalVars[3]; // 0xac6 PushGE
	if(var_39_bool == 0) goto Label_2768; // 0xac7 JumpB
	var_40_float = 0; var_41_float = 0; var_42_float = 0; // 0xac8 PushV
	var_41_float = var_26_float; // 0xac9 Mov
	var_43_float = GlobalVars[2]; // 0xaca PushGE
	var_42_float = var_43_float; // 0xacb Mov
	func_1915(var_40_float, var_41_float, var_42_float); // 0xacd NEW_2
	goto Label_2769; // 0xacf Jump
	
Label_2769:
	SetLength(var_40_float); // 0xad1 ObjFunc
	func_1970(); // 0xad4 NEW_2
	
Label_2774:
	Next(var_28_bool, var_27_object); // 0xad6 ObjFunc
	var_51_bool = var_28_bool; // 0xad8 Push
	if(var_51_bool == 0) goto Label_2842; // 0xad9 JumpB
	var_52_bool = 0; // 0xada PushV
	var_52_bool = 0; // 0xadb MovB
	var_53_bool = var_27_object != 0; // 0xadc NullNeq
	if(var_53_bool == 0) goto Label_2788; // 0xadd JumpB
	var_54_object = Obj(); // 0xade PushV
	func_1899(var_54_object); // 0xadf NEW_2
	var_55_bool = var_27_object != var_54_object; // 0xae1 Neq
	if(var_55_bool == 0) goto Label_2788; // 0xae2 JumpB
	var_52_bool = 1; // 0xae3 MovB
	
Label_2788:
	if(var_52_bool == 0) goto Label_2841; // 0xae4 JumpB
	var_56_bool = 0; var_57_object = Obj(); var_58_string = ""; // 0xae5 PushV
	var_57_object = var_27_object; // 0xae6 Mov
	var_58_string = "class"; // 0xae7 MovS
	func_1430(var_56_bool, var_57_object, var_58_string); // 0xae8 NEW_2
	if(var_56_bool == 0) goto Label_2798; // 0xaea JumpB
	var_65_string = "class"; // 0xaeb PushS
	GetProperty(var_65_string, var_29_string); // 0xaec ObjFunc
	
Label_2798:
	var_66_string = "sanitar"; // 0xaee PushS
	var_67_bool = var_29_string != var_66_string; // 0xaef Neq
	if(var_67_bool == 0) goto Label_2841; // 0xaf0 JumpB
	var_68_float = 0; var_69_object = Obj(); var_70_float = 0; var_71_int = 0; // 0xaf1 PushV
	var_69_object = var_27_object; // 0xaf2 Mov
	var_70_float = 0.1; // 0xaf3 MovF
	var_71_int = 2; // 0xaf4 MovI
	func_1442(var_68_float, var_69_object, var_70_float, var_71_int); // 0xaf5 NEW_2
	var_30_float = var_68_float; // 0xaf6 Mov
	var_131_bool = 0; var_132_object = Obj(); var_133_string = ""; // 0xaf8 PushV
	var_132_object = var_27_object; // 0xaf9 Mov
	var_133_string = "disease"; // 0xafa MovS
	func_1430(var_131_bool, var_132_object, var_133_string); // 0xafb NEW_2
	if(var_131_bool == 0) goto Label_2827; // 0xafd JumpB
	var_134_string = "disease"; // 0xafe PushS
	GetProperty(var_134_string, var_31_float); // 0xaff ObjFunc
	var_135_float = 0.1; // 0xb01 PushF
	var_136_bool = var_31_float <= var_135_float; // 0xb02 LE
	if(var_136_bool == 0) goto Label_2822; // 0xb03 JumpB
	var_31_float = 0; // 0xb04 MovI
	goto Label_2824; // 0xb05 Jump
	
Label_2824:
	var_137_string = "disease"; // 0xb08 PushS
	SetProperty(var_137_string, var_31_float); // 0xb09 ObjFunc
	
Label_2827:
	var_138_bool = 0; var_139_object = Obj(); var_140_string = ""; // 0xb0b PushV
	var_139_object = var_27_object; // 0xb0c Mov
	var_140_string = "fire"; // 0xb0d MovS
	func_1430(var_138_bool, var_139_object, var_140_string); // 0xb0e NEW_2
	if(var_138_bool == 0) goto Label_2841; // 0xb10 JumpB
	var_141_string = "fire"; // 0xb11 PushS
	GetProperty(var_141_string, var_32_float); // 0xb12 ObjFunc
	var_142_string = "fire"; // 0xb14 PushS
	var_143_float = 0.1; // 0xb15 PushF
	var_144_int = var_32_float + var_143_float; // 0xb16 Add
	SetProperty(var_142_string, var_144_int); // 0xb17 ObjFunc
	
Label_2841:
	goto Label_2774; // 0xb19 Jump
	
Label_2822:
	var_145_float = 0.1; // 0xb06 PushF
	var_31_float = var_31_float - var_145_float; // 0xb07 Sub2
	
Label_2842:
	return 16; // 0xb1a Return
	
Label_2768:
	var_146_float = 0.05; // 0xad0 PushF
}


func_1726(var_17_object, var_20_cvector, var_21_cvector)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); // 0x6be PushV
	GetScene(var_24_object); // 0x6bf Func
	var_26_string = "scripted"; // 0x6c1 PushS
	var_27_string = "blood_dir.xml"; // 0x6c2 PushS
	AddActorByType(var_25_object, var_26_string, var_24_object, var_20_cvector, var_21_cvector, var_27_string); // 0x6c3 Func
	var_28_object = Obj(); // 0x6c5 PushV
	var_28_object = var_17_object; // 0x6c6 Mov
	func_1614(var_28_object); // 0x6c7 NEW_2
	return 4; // 0x6c9 Return
}


func_200(var_0_bool)
{
	var_0_bool = 1; // 0xc8 TMovB
	var_12_int = 0; // 0xc9 PushI
	KillTimer(var_12_int); // 0xca Func
	Stop(); // 0xcc Func
	return 0; // 0xce Return
}


func_1740(var_75_bool)
{
	var_76_bool = 0; var_77_bool = 0; // 0x6cc PushV
	IsLoaded(var_77_bool); // 0x6cd Func
	var_75_bool = var_77_bool; // 0x6cf Mov
	return 2; // 0x6d0 Return
}


func_1745(var_250_object)
{
	var_251_float = 0; var_252_cvector = CVector(0,0,0); var_253_float = 0; var_254_cvector = CVector(0,0,0); // 0x6d1 PushV
	GetEyesHeight(var_253_float); // 0x6d2 ObjFunc
	var_254_cvector = CVector(0.0, 0.0, 0.0); // 0x6d4 MovV
	var_255_float = GetByIndex(var_254_cvector, 1); // 0x6d5 PushE
	var_255_float = var_253_float; // 0x6d6 Mov
	SetByIndex(var_254_cvector, 1) = var_255_float; // 0x6d7 PopE
	var_256_string = "head"; // 0x6d8 PushS
	LookAsync(var_250_object, var_256_string, var_254_cvector); // 0x6d9 Func
	return 4; // 0x6db Return
}


func_216(var_439_string)
{
	var_439_string = "walk"; // 0xd8 MovS
	return 0; // 0xd9 Return
}


func_218(var_440_string)
{
	var_440_string = "run"; // 0xda MovS
	return 0; // 0xdb Return
}


func_220(var_3_object, var_230_object, var_231_object)
{
	var_3_object = var_231_object; // 0xdd TMov
	var_236_bool = 0; var_237_object = Obj(); var_238_float = 0; var_239_float = 0; var_240_bool = 0; var_241_bool = 0; // 0xde PushV
	var_237_object = var_231_object; // 0xdf Mov
	var_238_float = 500.0; // 0xe0 MovF
	var_239_float = 5000; // 0xe1 MovI
	var_240_bool = 0; // 0xe2 MovB
	var_241_bool = 1; // 0xe3 MovB
	func_258(var_231_object, var_236_bool, var_237_object, var_238_float, var_239_float, var_240_bool, var_241_bool); // 0xe4 NEW_2
	var_314_bool = var_236_bool == 0; // 0xe6 Not
	if(var_314_bool == 0) goto Label_233; // 0xe7 JumpB
	var_3_object = 0; // 0xe8 SetNullT
	
Label_233:
	var_230_object = var_3_object; // 0xe9 MovT
	return 0; // 0xea Return
}


func_1756(var_81_string, var_82_int, var_83_int, var_84_int)
{
	var_85_int = 0; var_86_bool = 0; var_87_int = 0; var_88_bool = 0; // 0x6dc PushV
	var_89_bool = 0; var_90_int = 0; var_91_int = 0; // 0x6dd PushV
	var_90_int = var_82_int; // 0x6de Mov
	var_91_int = var_83_int; // 0x6df Mov
	func_1933(var_89_bool, var_90_int, var_91_int); // 0x6e0 NEW_2
	if(var_89_bool == 0) goto Label_1770; // 0x6e2 JumpB
	irand(var_87_int, var_84_int); // 0x6e3 Func
	var_94_int = 0; // 0x6e5 PushI
	var_95_int = 1; // 0x6e6 PushI
	var_96_int = var_87_int + var_95_int; // 0x6e7 Add
	AddItem(var_88_bool, var_81_string, var_94_int, var_96_int); // 0x6e8 Func
	
Label_1770:
	return 4; // 0x6ea Return
}


func_2283()
{
	var_11_float = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_float = 0; var_15_object = Obj(); var_16_object = Obj(); // 0x8eb PushV
	var_17_object = GlobalVars[4]; // 0x8ec PushGE
	var_18_object = Obj(); // 0x8ed PushV
	func_1938(var_18_object); // 0x8ee NEW_2
	var_17_object = var_18_object; // 0x8ef Mov
	GlobalVars[4] = var_17_object; // 0x8f1 PopGE
	GetAttackDistance(var_14_float); // 0x8f2 Func
	var_21_float = GlobalVars[2]; // 0x8f4 PushGE
	var_22_float = 600.0; // 0x8f5 PushF
	var_21_float = var_14_float / var_14_float; // 0x8f6 Div2
	GlobalVars[2] = var_21_float; // 0x8f7 PopGE
	GetScene(var_15_object); // 0x8f8 Func
	var_23_string = "flame"; // 0x8fa PushS
	var_24_cvector = CVector(0.0, 0.0, 0.0); // 0x8fb PushVec
	AddActorByType(var_16_object, var_23_string, var_15_object, var_24_cvector); // 0x8fc Func
	var_25_object = Obj(); // 0x8fe PushV
	func_1899(var_25_object); // 0x8ff NEW_2
	var_28_string = "flame"; // 0x901 PushS
	Attach(var_25_object, var_28_string); // 0x902 ObjFunc
	var_29_bool = GlobalVars[3]; // 0x904 PushGE
	var_29_bool = 0; // 0x905 MovB
	GlobalVars[3] = var_29_bool; // 0x906 PopGE
	var_30_float = 0.05; // 0x907 PushF
	SetLength(var_30_float); // 0x908 ObjFunc
	var_31_object = GlobalVars[0]; // 0x90a PushGE
	var_31_object = var_16_object; // 0x90b Mov
	GlobalVars[0] = var_31_object; // 0x90c PopGE
	var_32_int = 70; // 0x90d PushI
	var_33_float = 0.1; // 0x90e PushF
	SetTimer(var_32_int, var_33_float); // 0x90f Func
	return 6; // 0x911 Return
}


func_1771(var_157_string)
{
	var_158_bool = 0; var_159_int = 0; var_160_bool = 0; var_161_int = 0; var_162_bool = 0; var_163_float = 0; var_164_cvector = CVector(0,0,0); var_165_cvector = CVector(0,0,0); var_166_bool = 0; var_167_int = 0; var_168_bool = 0; var_169_int = 0; var_170_bool = 0; var_171_float = 0; var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0); // 0x6eb PushV
	IsExisting3DSound(var_166_bool, var_157_string); // 0x6ec Func
	var_174_bool = var_166_bool == 0; // 0x6ee Not
	if(var_174_bool == 0) goto Label_1796; // 0x6ef JumpB
	var_167_int = 0; // 0x6f0 MovI
	
Label_1777:
	var_175_int = 1; // 0x6f1 PushI
	var_176_int = var_167_int + var_175_int; // 0x6f2 Add
	var_177_int = var_157_string + var_176_int; // 0x6f3 Add
	IsExisting3DSound(var_168_bool, var_177_int); // 0x6f4 Func
	var_178_bool = var_168_bool == 0; // 0x6f6 Not
	if(var_178_bool == 0) goto Label_1785; // 0x6f7 JumpB
	goto Label_1788; // 0x6f8 Jump
	
Label_1788:
	var_179_bool = var_167_int == 0; // 0x6fc Not
	if(var_179_bool == 0) goto Label_1791; // 0x6fd JumpB
	return 16; // 0x6fe Return
	
Label_1791:
	irand(var_169_int, var_167_int); // 0x6ff Func
	var_180_int = 1; // 0x701 PushI
	var_181_int = var_169_int + var_180_int; // 0x702 Add
	var_157_string = var_157_string + var_181_int; // 0x703 Add2
	
Label_1796:
	Is3DSoundLoaded(var_170_bool, var_157_string); // 0x704 Func
	var_182_bool = var_170_bool; // 0x706 Push
	if(var_182_bool == 0) goto Label_1811; // 0x707 JumpB
	GetEyesHeight(var_171_float); // 0x708 Func
	GetDirection(var_172_cvector); // 0x70a Func
	var_183_int = 50; // 0x70c PushI
	var_173_cvector = var_172_cvector * var_183_int; // 0x70d Mult2
	var_184_float = GetByIndex(var_173_cvector, 1); // 0x70e PushE
	var_184_float = var_184_float + var_171_float; // 0x70f Add2
	SetByIndex(var_173_cvector, 1) = var_184_float; // 0x710 PopE
	PlayGlobalSound(var_157_string, var_173_cvector); // 0x711 Func
	
Label_1811:
	return 16; // 0x713 Return
	
Label_1785:
	var_185_int = 1; // 0x6f9 PushI
	var_167_int = var_167_int + var_185_int; // 0x6fa Add2
	goto Label_1777; // 0x6fb Jump
}


func_258(var_2_bool, var_236_bool, var_237_object, var_238_float, var_239_float, var_240_bool, var_241_bool)
{
	var_242_bool = 0; var_243_bool = 0; var_244_bool = 0; var_245_bool = 0; // 0x102 PushV
	var_246_object = Obj(); // 0x103 PushV
	var_246_object = var_237_object; // 0x104 Mov
	func_1961(var_246_object); // 0x105 NEW_2
	var_247_int = 1; // 0x107 PushI
	var_248_int = 5; // 0x108 PushI
	SetTimer(var_247_int, var_248_int); // 0x109 Func
	CanSee(var_244_bool, var_237_object); // 0x10b Func
	var_249_bool = var_244_bool; // 0x10d Push
	if(var_249_bool == 0) goto Label_277; // 0x10e JumpB
	var_2_bool = 1; // 0x10f TMovB
	var_250_object = Obj(); // 0x110 PushV
	var_250_object = var_237_object; // 0x111 Mov
	func_1745(var_250_object); // 0x112 NEW_2
	goto Label_278; // 0x114 Jump
	
Label_278:
	var_257_bool = 0; var_258_object = Obj(); // 0x116 PushV
	var_258_object = var_237_object; // 0x117 Mov
	func_1425(var_257_bool, var_258_object); // 0x118 NEW_2
	if(var_257_bool == 0) goto Label_288; // 0x11a JumpB
	var_259_object = Obj(); // 0x11b PushV
	func_1899(var_259_object); // 0x11c NEW_2
	SendPlayerEnemy(var_237_object, var_259_object); // 0x11e Func
	
Label_288:
	var_260_bool = 0; var_261_object = Obj(); var_262_float = 0; var_263_float = 0; var_264_bool = 0; var_265_bool = 0; // 0x120 PushV
	var_261_object = var_237_object; // 0x121 Mov
	var_262_float = var_238_float; // 0x122 Mov
	var_263_float = var_239_float; // 0x123 Mov
	var_264_bool = var_240_bool; // 0x124 Mov
	var_265_bool = var_241_bool; // 0x125 Mov
	func_363(var_244_bool, var_245_bool, var_260_bool, var_261_object, var_262_float, var_263_float, var_264_bool, var_265_bool); // 0x126 NEW_2
	var_245_bool = var_260_bool; // 0x127 Mov
	var_311_bool = var_2_bool; // 0x129 PushT
	if(var_311_bool == 0) goto Label_302; // 0x12a JumpB
	var_312_string = "head"; // 0x12b PushS
	UnlookAsync(var_312_string); // 0x12c Func
	
Label_302:
	var_313_int = 1; // 0x12e PushI
	KillTimer(var_313_int); // 0x12f Func
	var_236_bool = var_245_bool; // 0x131 Mov
	return 4; // 0x132 Return
	
Label_277:
	var_2_bool = 0; // 0x115 TMovB
}


func_777()
{
	var_61_int = 0; var_62_int = 0; var_63_int = 0; var_64_int = 0; var_65_bool = 0; var_66_float = 0; var_67_bool = 0; var_68_int = 0; var_69_int = 0; var_70_int = 0; var_71_int = 0; var_72_bool = 0; var_73_float = 0; var_74_bool = 0; // 0x309 PushV
	WaitForAnimEnd(); // 0x30a Func
	var_75_bool = 0; // 0x30c PushV
	func_1740(var_75_bool); // 0x30d NEW_2
	var_78_bool = var_75_bool == 0; // 0x30f Not
	if(var_78_bool == 0) goto Label_786; // 0x310 JumpB
	return 14; // 0x311 Return
	
Label_786:
	var_79_int = 0; // 0x312 PushV
	func_1988(var_79_int); // 0x313 NEW_2
	var_68_int = var_79_int; // 0x314 Mov
	var_69_int = 0; // 0x316 MovI
	
Label_791:
	var_92_bool = 0; // 0x317 PushV
	var_92_bool = 0; // 0x318 MovB
	var_93_int = 5; // 0x319 PushI
	var_94_bool = var_69_int < var_93_int; // 0x31a LT
	if(var_94_bool == 0) goto Label_801; // 0x31b JumpB
	var_95_bool = 0; // 0x31c PushV
	func_1740(var_95_bool); // 0x31d NEW_2
	if(var_95_bool == 0) goto Label_801; // 0x31f JumpB
	var_92_bool = 1; // 0x320 MovB
	
Label_801:
	if(var_92_bool == 0) goto Label_853; // 0x321 JumpB
	var_96_int = 3; // 0x322 PushI
	irand(var_70_int, var_96_int); // 0x323 Func
	var_97_int = 0; // 0x325 PushI
	var_98_bool = var_70_int == var_97_int; // 0x326 Eq
	if(var_98_bool == 0) goto Label_825; // 0x327 JumpB
	var_99_int = var_68_int; // 0x328 Push
	if(var_99_int == 0) goto Label_824; // 0x329 JumpB
	irand(var_71_int, var_68_int); // 0x32a Func
	var_100_string = "all"; // 0x32c PushS
	var_101_string = ""; var_102_int = 0; // 0x32d PushV
	var_102_int = var_71_int; // 0x32e Mov
	func_1981(var_101_string, var_102_int); // 0x32f NEW_2
	PlayAnimation(var_100_string, var_101_string); // 0x331 Func
	WaitForAnimEnd(var_72_bool); // 0x333 Func
	var_103_bool = var_72_bool == 0; // 0x335 Not
	if(var_103_bool == 0) goto Label_824; // 0x336 JumpB
	goto Label_853; // 0x337 Jump
	
Label_853:
	ResetAAS(); // 0x355 Func
	return 14; // 0x357 Return
	
Label_824:
	goto Label_842; // 0x338 Jump
	
Label_842:
	var_104_bool = 0; // 0x34a PushV
	func_856(var_104_bool); // 0x34b NEW_2
	var_105_bool = var_104_bool == 0; // 0x34d Not
	if(var_105_bool == 0) goto Label_848; // 0x34e JumpB
	goto Label_853; // 0x34f Jump
	
Label_848:
	ResetAAS(); // 0x350 Func
	var_106_int = 1; // 0x352 PushI
	var_69_int = var_69_int + var_106_int; // 0x353 Add2
	goto Label_791; // 0x354 Jump
	
Label_825:
	var_107_int = 1; // 0x339 PushI
	var_108_bool = var_70_int == var_107_int; // 0x33a Eq
	if(var_108_bool == 0) goto Label_839; // 0x33b JumpB
	var_109_int = 4; // 0x33c PushI
	rand(var_73_float, var_109_int); // 0x33d Func
	var_110_int = 1; // 0x33f PushI
	var_111_int = var_73_float + var_110_int; // 0x340 Add
	Sleep(var_111_int, var_74_bool); // 0x341 Func
	var_112_bool = var_74_bool == 0; // 0x343 Not
	if(var_112_bool == 0) goto Label_838; // 0x344 JumpB
	goto Label_853; // 0x345 Jump
	
Label_838:
	goto Label_842; // 0x346 Jump
	
Label_839:
	var_113_int = var_69_int; // 0x347 Push
	if(var_113_int == 0) goto Label_842; // 0x348 JumpB
	goto Label_853; // 0x349 Jump
}


func_2324(var_22_bool)
{
	var_23_float = 0; var_24_float = 0; var_25_object = Obj(); var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_float = 0; var_29_float = 0; var_30_object = Obj(); var_31_cvector = CVector(0,0,0); var_32_float = 0; // 0x914 PushV
	var_33_bool = var_22_bool; // 0x915 Push
	if(var_33_bool == 0) goto Label_2331; // 0x916 JumpB
	var_34_float = GlobalVars[2]; // 0x917 PushGE
	var_28_float = var_34_float; // 0x918 Mov
	goto Label_2332; // 0x91a Jump
	
Label_2332:
	var_35_object = GlobalVars[0]; // 0x91c PushGE
	GetLength(var_29_float); // 0x91d ObjFunc
	var_36_bool = var_28_float < var_29_float; // 0x91f LT
	if(var_36_bool == 0) goto Label_2338; // 0x920 JumpB
	var_29_float = var_28_float; // 0x921 Mov
	
Label_2338:
	var_37_object = GlobalVars[0]; // 0x922 PushGE
	SetLength(var_29_float); // 0x923 ObjFunc
	var_38_bool = GlobalVars[3]; // 0x925 PushGE
	var_39_bool = var_38_bool != var_22_bool; // 0x926 Neq
	if(var_39_bool == 0) goto Label_2379; // 0x927 JumpB
	var_40_bool = var_22_bool; // 0x928 Push
	if(var_40_bool == 0) goto Label_2369; // 0x929 JumpB
	var_41_object = GlobalVars[1]; // 0x92a PushGE
	var_42_bool = var_41_object == 0; // 0x92b NullEq
	if(var_42_bool == 0) goto Label_2364; // 0x92c JumpB
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x92d MovV
	GetHeight(var_32_float); // 0x92e Func
	var_43_float = GetByIndex(var_31_cvector, 1); // 0x930 PushE
	var_43_float = var_32_float; // 0x931 Mov
	SetByIndex(var_31_cvector, 1) = var_43_float; // 0x932 PopE
	var_44_string = "flame_loop"; // 0x933 PushS
	var_45_int = 0; // 0x934 PushI
	var_46_int = 200; // 0x935 PushI
	PlayLoopedGlobalSound(var_30_object, var_44_string, var_31_cvector, var_45_int, var_46_int); // 0x936 Func
	var_47_object = GlobalVars[1]; // 0x938 PushGE
	var_47_object = var_30_object; // 0x939 Mov
	GlobalVars[1] = var_47_object; // 0x93a PopGE
	var_30_object = 0; // 0x93b SetNull
	
Label_2364:
	var_48_object = GlobalVars[1]; // 0x93c PushGE
	var_49_int = 2; // 0x93d PushI
	FadeIn(var_49_int); // 0x93e ObjFunc
	goto Label_2376; // 0x940 Jump
	
Label_2376:
	var_50_bool = GlobalVars[3]; // 0x948 PushGE
	var_50_bool = var_22_bool; // 0x949 Mov
	GlobalVars[3] = var_50_bool; // 0x94a PopGE
	
Label_2379:
	return 10; // 0x94b Return
	
Label_2369:
	var_51_object = GlobalVars[1]; // 0x941 PushGE
	var_52_bool = var_51_object != 0; // 0x942 NullNeq
	if(var_52_bool == 0) goto Label_2376; // 0x943 JumpB
	var_53_object = GlobalVars[1]; // 0x944 PushGE
	var_54_int = 2; // 0x945 PushI
	FadeOut(var_54_int); // 0x946 ObjFunc
	
Label_2331:
	var_28_float = 0.05; // 0x91b MovF
}


func_1812(var_158_bool, var_159_string)
{
	var_158_bool = 1; // 0x715 MovB
	var_160_bool = 0; // 0x716 PushV
	var_160_bool = 1; // 0x717 MovB
	var_161_bool = 0; // 0x718 PushV
	var_161_bool = 1; // 0x719 MovB
	var_162_bool = 0; // 0x71a PushV
	var_162_bool = 1; // 0x71b MovB
	var_163_bool = 0; // 0x71c PushV
	var_163_bool = 1; // 0x71d MovB
	var_164_bool = 0; // 0x71e PushV
	var_164_bool = 1; // 0x71f MovB
	var_165_bool = 0; // 0x720 PushV
	var_165_bool = 1; // 0x721 MovB
	var_166_bool = 0; // 0x722 PushV
	var_166_bool = 1; // 0x723 MovB
	var_167_bool = 0; // 0x724 PushV
	var_167_bool = 1; // 0x725 MovB
	var_168_bool = 0; // 0x726 PushV
	var_168_bool = 1; // 0x727 MovB
	var_169_bool = 0; // 0x728 PushV
	var_169_bool = 1; // 0x729 MovB
	var_170_bool = 0; // 0x72a PushV
	var_170_bool = 1; // 0x72b MovB
	var_171_string = "woman"; // 0x72c PushS
	var_172_bool = var_159_string == var_171_string; // 0x72d Eq
	if(var_172_bool == 0) goto Label_1843; // 0x72e JumpB
	var_173_string = "worker"; // 0x72f PushS
	var_174_bool = var_159_string == var_173_string; // 0x730 Eq
	if(var_174_bool == 0) goto Label_1843; // 0x731 JumpB
	var_170_bool = 0; // 0x732 MovB
	
Label_1843:
	if(var_170_bool == 0) goto Label_1848; // 0x733 JumpB
	var_175_string = "butcher"; // 0x734 PushS
	var_176_bool = var_159_string == var_175_string; // 0x735 Eq
	if(var_176_bool == 0) goto Label_1848; // 0x736 JumpB
	var_169_bool = 0; // 0x737 MovB
	
Label_1848:
	if(var_169_bool == 0) goto Label_1853; // 0x738 JumpB
	var_177_string = "wasted_girl"; // 0x739 PushS
	var_178_bool = var_159_string == var_177_string; // 0x73a Eq
	if(var_178_bool == 0) goto Label_1853; // 0x73b JumpB
	var_168_bool = 0; // 0x73c MovB
	
Label_1853:
	if(var_168_bool == 0) goto Label_1858; // 0x73d JumpB
	var_179_string = "boy"; // 0x73e PushS
	var_180_bool = var_159_string == var_179_string; // 0x73f Eq
	if(var_180_bool == 0) goto Label_1858; // 0x740 JumpB
	var_167_bool = 0; // 0x741 MovB
	
Label_1858:
	if(var_167_bool == 0) goto Label_1863; // 0x742 JumpB
	var_181_string = "vaxxabitka"; // 0x743 PushS
	var_182_bool = var_159_string == var_181_string; // 0x744 Eq
	if(var_182_bool == 0) goto Label_1863; // 0x745 JumpB
	var_166_bool = 0; // 0x746 MovB
	
Label_1863:
	if(var_166_bool == 0) goto Label_1868; // 0x747 JumpB
	var_183_string = "unosha"; // 0x748 PushS
	var_184_bool = var_159_string == var_183_string; // 0x749 Eq
	if(var_184_bool == 0) goto Label_1868; // 0x74a JumpB
	var_165_bool = 0; // 0x74b MovB
	
Label_1868:
	if(var_165_bool == 0) goto Label_1873; // 0x74c JumpB
	var_185_string = "wasted_male"; // 0x74d PushS
	var_186_bool = var_159_string == var_185_string; // 0x74e Eq
	if(var_186_bool == 0) goto Label_1873; // 0x74f JumpB
	var_164_bool = 0; // 0x750 MovB
	
Label_1873:
	if(var_164_bool == 0) goto Label_1878; // 0x751 JumpB
	var_187_string = "alkash"; // 0x752 PushS
	var_188_bool = var_159_string == var_187_string; // 0x753 Eq
	if(var_188_bool == 0) goto Label_1878; // 0x754 JumpB
	var_163_bool = 0; // 0x755 MovB
	
Label_1878:
	if(var_163_bool == 0) goto Label_1883; // 0x756 JumpB
	var_189_string = "dohodyaga"; // 0x757 PushS
	var_190_bool = var_159_string == var_189_string; // 0x758 Eq
	if(var_190_bool == 0) goto Label_1883; // 0x759 JumpB
	var_162_bool = 0; // 0x75a MovB
	
Label_1883:
	if(var_162_bool == 0) goto Label_1888; // 0x75b JumpB
	var_191_string = "vaxxabit"; // 0x75c PushS
	var_192_bool = var_159_string == var_191_string; // 0x75d Eq
	if(var_192_bool == 0) goto Label_1888; // 0x75e JumpB
	var_161_bool = 0; // 0x75f MovB
	
Label_1888:
	if(var_161_bool == 0) goto Label_1893; // 0x760 JumpB
	var_193_string = "nudegirl"; // 0x761 PushS
	var_194_bool = var_159_string == var_193_string; // 0x762 Eq
	if(var_194_bool == 0) goto Label_1893; // 0x763 JumpB
	var_160_bool = 0; // 0x764 MovB
	
Label_1893:
	if(var_160_bool == 0) goto Label_1898; // 0x765 JumpB
	var_195_string = "morlok"; // 0x766 PushS
	var_196_bool = var_159_string == var_195_string; // 0x767 Eq
	if(var_196_bool == 0) goto Label_1898; // 0x768 JumpB
	var_158_bool = 0; // 0x769 MovB
	
Label_1898:
	return 0; // 0x76a Return
}


func_1307()
{
	var_62_bool = var_0_bool; // 0x51b PushT
	if(var_62_bool == 0) goto Label_1312; // 0x51c JumpB
	var_63_string = "cleansed"; // 0x51d PushS
	RemoveProperty(var_63_string); // 0x51e TObjFunc
	
Label_1312:
	var_64_int = 71; // 0x520 PushI
	KillTimer(var_64_int); // 0x521 Func
	var_65_bool = 0; // 0x523 PushV
	var_65_bool = 0; // 0x524 MovB
	func_2324(var_65_bool); // 0x525 NEW_2
	Stop(); // 0x527 Func
	StopAsync(); // 0x529 Func
	return 0; // 0x52b Return
}


func_2845(var_111_bool, var_112_object)
{
	var_113_bool = 0; var_114_object = Obj(); // 0xb1e PushV
	var_114_object = var_112_object; // 0xb1f Mov
	func_2430(var_113_bool, var_114_object); // 0xb20 NEW_2
	var_111_bool = var_113_bool; // 0xb21 Mov
	return 0; // 0xb23 Return
}


func_307(var_1_object, var_12_int)
{
	var_13_int = 1; // 0x134 PushI
	var_14_bool = var_12_int == var_13_int; // 0x135 Eq
	if(var_14_bool == 0) goto Label_316; // 0x136 JumpB
	var_15_object = Obj(); // 0x137 PushV
	var_15_object = var_1_object; // 0x138 MovT
	func_1961(var_15_object); // 0x139 NEW_2
	goto Label_320; // 0x13b Jump
	
Label_320:
	return 0; // 0x140 Return
	
Label_316:
	var_20_int = 0; // 0x13c PushV
	var_20_int = var_12_int; // 0x13d Mov
	func_465(var_11_object, var_12_int, var_20_int); // 0x13e NEW_2
}


func_321(var_2_bool)
{
	var_12_int = 1; // 0x141 PushI
	KillTimer(var_12_int); // 0x142 Func
	var_13_bool = var_2_bool; // 0x144 PushT
	if(var_13_bool == 0) goto Label_330; // 0x145 JumpB
	var_2_bool = 0; // 0x146 TMovB
	var_14_string = "head"; // 0x147 PushS
	UnlookAsync(var_14_string); // 0x148 Func
	
Label_330:
	func_487(var_11_object); // 0x14b NEW_2
	return 0; // 0x14d Return
}


func_2380(var_336_cvector)
{
	var_337_cvector = CVector(0,0,0); var_338_float = 0; var_339_cvector = CVector(0,0,0); var_340_float = 0; var_341_bool = 0; var_342_cvector = CVector(0,0,0); var_343_float = 0; var_344_cvector = CVector(0,0,0); var_345_float = 0; var_346_bool = 0; // 0x94c PushV
	GetPosition(var_342_cvector); // 0x94d Func
	GetHeight(var_343_float); // 0x94f Func
	var_347_float = GetByIndex(var_342_cvector, 1); // 0x951 PushE
	var_348_int = 2; // 0x952 PushI
	var_349_float = var_343_float / var_348_int; // 0x953 Div
	var_347_float = var_347_float + var_349_float; // 0x954 Add2
	SetByIndex(var_342_cvector, 1) = var_347_float; // 0x955 PopE
	var_344_cvector = var_336_cvector - var_342_cvector; // 0x956 Sub2
	var_350_int = var_344_cvector | var_344_cvector; // 0x957 Or
	var_345_float = sqrt(var_350_int); // 0x958 Sqrt2
	var_351_int = 50; // 0x959 PushI
	var_352_bool = var_345_float < var_351_int; // 0x95a LT
	if(var_352_bool == 0) goto Label_2398; // 0x95b JumpB
	var_346_bool = 0; // 0x95c MovB
	goto Label_2402; // 0x95d Jump
	
Label_2402:
	var_353_string = "all"; // 0x962 PushS
	var_354_bool = var_346_bool; // 0x963 Push
	if(var_354_bool == 0) goto Label_2407; // 0x964 JumpB
	var_355_string = "cattack"; // 0x965 PushS
	goto Label_2408; // 0x966 Jump
	
Label_2408:
	PlayAnimation(var_353_string, var_355_string); // 0x968 Func
	return 10; // 0x96a Return
	
Label_2407:
	var_356_string = "attack"; // 0x967 PushS
	
Label_2398:
	var_357_float = GetByIndex(var_344_cvector, 1); // 0x95e PushE
	var_358_float = var_357_float / var_345_float; // 0x95f Div
	var_359_float = -0.14286; // 0x960 PushF
	var_346_bool = var_358_float < var_359_float; // 0x961 LT2
}


func_856(var_104_bool)
{
	var_104_bool = 1; // 0x358 MovB
	return 0; // 0x359 Return
}


func_858()
{
	StopAnimation(); // 0x35a Func
	StopGroup0(); // 0x35c Func
	return 0; // 0x35e Return
}


func_863(var_0_bool, var_101_object, var_102_object, var_232_bool)
{
	var_104_bool = 0; var_105_float = 0; var_106_object = Obj(); var_107_bool = 0; var_108_float = 0; var_109_object = Obj(); // 0x35f PushV
	var_0_bool = var_102_object; // 0x360 TMov
	Face(var_102_object); // 0x361 Func
	var_110_bool = 1; // 0x363 PushB
	SetAttackState(var_110_bool); // 0x364 Func
	var_107_bool = 0; // 0x366 MovB
	
Label_871:
	var_111_bool = 0; var_112_object = Obj(); // 0x367 PushV
	var_112_object = var_0_bool; // 0x368 MovT
	func_2845(var_111_bool, var_112_object); // 0x369 NEW_2
	if(var_111_bool == 0) goto Label_967; // 0x36b JumpB
	var_201_object = Obj(); // 0x36c PushV
	var_201_object = var_0_bool; // 0x36d MovT
	func_1961(var_201_object); // 0x36e NEW_2
	ReportAttack(var_0_bool); // 0x370 Func
	var_206_float = 0; var_207_object = Obj(); // 0x372 PushV
	var_207_object = var_0_bool; // 0x373 MovT
	func_1417(var_207_object); // 0x374 NEW_2
	var_108_float = var_206_float; // 0x375 Mov
	var_214_float = 90000.0; // 0x377 PushF
	var_215_bool = var_108_float <= var_214_float; // 0x378 LE
	if(var_215_bool == 0) goto Label_910; // 0x379 JumpB
	var_216_bool = var_107_bool == 0; // 0x37a Not
	if(var_216_bool == 0) goto Label_905; // 0x37b JumpB
	var_217_bool = 1; // 0x37c PushB
	SetAttackState(var_217_bool); // 0x37d Func
	var_218_bool = 0; // 0x37f PushV
	var_218_bool = 1; // 0x380 MovB
	func_2324(var_218_bool); // 0x381 NEW_2
	var_219_string = "all"; // 0x383 PushS
	var_220_string = "attack_on"; // 0x384 PushS
	PlayAnimation(var_219_string, var_220_string); // 0x385 Func
	var_107_bool = 1; // 0x387 MovB
	goto Label_909; // 0x388 Jump
	
Label_909:
	goto Label_964; // 0x38d Jump
	
Label_964:
	WaitForAnimEnd(); // 0x3c4 Func
	goto Label_871; // 0x3c6 Jump
	
Label_905:
	var_221_string = "all"; // 0x389 PushS
	var_222_string = "bjump"; // 0x38a PushS
	PlayAnimation(var_221_string, var_222_string); // 0x38b Func
	
Label_910:
	var_223_float = 490000.0; // 0x38e PushF
	var_224_bool = var_108_float >= var_223_float; // 0x38f GE
	if(var_224_bool == 0) goto Label_945; // 0x390 JumpB
	var_225_bool = var_107_bool; // 0x391 Push
	if(var_225_bool == 0) goto Label_928; // 0x392 JumpB
	var_226_bool = 0; // 0x393 PushB
	SetAttackState(var_226_bool); // 0x394 Func
	var_227_bool = 0; // 0x396 PushV
	var_227_bool = 0; // 0x397 MovB
	func_2324(var_227_bool); // 0x398 NEW_2
	var_228_string = "all"; // 0x39a PushS
	var_229_string = "attack_off"; // 0x39b PushS
	PlayAnimation(var_228_string, var_229_string); // 0x39c Func
	var_107_bool = 0; // 0x39e MovB
	goto Label_944; // 0x39f Jump
	
Label_944:
	goto Label_964; // 0x3b0 Jump
	
Label_928:
	StopAsync(); // 0x3a0 Func
	var_230_object = Obj(); var_231_object = Obj(); // 0x3a2 PushV
	var_231_object = var_0_bool; // 0x3a3 MovT
	TaskCall(1); // 0x3a4 TaskCall
	func_220(var_235_object, var_230_object, var_231_object); // 0x3a5 NEW_2
	TaskReturn(); // 0x3a6 TaskReturn
	var_109_object = var_232_bool; // 0x3a7 Mov
	var_0_bool = var_109_object; // 0x3a9 TMov
	var_315_bool = var_0_bool == 0; // 0x3aa NullEq
	if(var_315_bool == 0) goto Label_941; // 0x3ab JumpB
	goto Label_967; // 0x3ac Jump
	
Label_967:
	var_316_bool = 0; // 0x3c7 PushB
	SetAttackState(var_316_bool); // 0x3c8 Func
	var_317_string = "all"; // 0x3ca PushS
	var_318_string = "attack_off"; // 0x3cb PushS
	PlayAnimation(var_317_string, var_318_string); // 0x3cc Func
	var_319_bool = 0; // 0x3ce PushV
	var_319_bool = 0; // 0x3cf MovB
	func_2324(var_319_bool); // 0x3d0 NEW_2
	StopAsync(); // 0x3d2 Func
	var_101_object = var_0_bool; // 0x3d4 MovT
	return 6; // 0x3d5 Return
	
Label_941:
	Face(var_0_bool); // 0x3ad Func
	var_109_object = 0; // 0x3af SetNull
	
Label_945:
	var_320_bool = var_107_bool == 0; // 0x3b1 Not
	if(var_320_bool == 0) goto Label_960; // 0x3b2 JumpB
	var_321_bool = 1; // 0x3b3 PushB
	SetAttackState(var_321_bool); // 0x3b4 Func
	var_322_bool = 0; // 0x3b6 PushV
	var_322_bool = 1; // 0x3b7 MovB
	func_2324(var_322_bool); // 0x3b8 NEW_2
	var_323_string = "all"; // 0x3ba PushS
	var_324_string = "attack_on"; // 0x3bb PushS
	PlayAnimation(var_323_string, var_324_string); // 0x3bc Func
	var_107_bool = 1; // 0x3be MovB
	goto Label_964; // 0x3bf Jump
	
Label_960:
	var_325_object = Obj(); // 0x3c0 PushV
	var_325_object = var_0_bool; // 0x3c1 MovT
	func_2411(var_325_object); // 0x3c2 NEW_2
}


func_1899(var_25_object)
{
	var_26_object = Obj(); var_27_object = Obj(); // 0x76b PushV
	self(var_27_object); // 0x76c Func
	var_25_object = var_27_object; // 0x76e Mov
	return 2; // 0x76f Return
}


func_363(var_0_bool, var_1_object, var_260_bool, var_261_object, var_262_float, var_263_float, var_264_bool, var_265_bool)
{
	var_266_bool = 0; var_267_bool = 0; var_268_object = Obj(); var_269_cvector = CVector(0,0,0); var_270_cvector = CVector(0,0,0); var_271_cvector = CVector(0,0,0); var_272_float = 0; var_273_object = Obj(); var_274_bool = 0; var_275_bool = 0; var_276_object = Obj(); var_277_cvector = CVector(0,0,0); var_278_cvector = CVector(0,0,0); var_279_cvector = CVector(0,0,0); var_280_float = 0; var_281_object = Obj(); // 0x16b PushV
	var_0_bool = 0; // 0x16c TMovB
	var_1_object = var_261_object; // 0x16d TMov
	var_275_bool = var_265_bool; // 0x16e Mov
	
Label_367:
	var_282_bool = 0; var_283_object = Obj(); // 0x16f PushV
	var_283_object = var_261_object; // 0x170 Mov
	func_503(var_282_bool, var_283_object); // 0x171 NEW_2
	var_286_bool = var_282_bool == 0; // 0x173 Not
	if(var_286_bool == 0) goto Label_375; // 0x174 JumpB
	var_260_bool = 0; // 0x175 MovB
	return 16; // 0x176 Return
	
Label_375:
	GetPosition(var_277_cvector); // 0x177 ObjFunc
	GetPosition(var_278_cvector); // 0x179 Func
	var_279_cvector = var_277_cvector - var_278_cvector; // 0x17b Sub2
	var_280_float = var_279_cvector | var_279_cvector; // 0x17c Or2
	var_287_bool = 0; // 0x17d PushV
	var_287_bool = 0; // 0x17e MovB
	var_288_int = 0; // 0x17f PushI
	var_289_bool = var_263_float > var_288_int; // 0x180 GT
	if(var_289_bool == 0) goto Label_390; // 0x181 JumpB
	var_290_float = var_263_float * var_263_float; // 0x182 Mult
	var_291_bool = var_280_float > var_290_float; // 0x183 GT
	if(var_291_bool == 0) goto Label_390; // 0x184 JumpB
	var_287_bool = 1; // 0x185 MovB
	
Label_390:
	if(var_287_bool == 0) goto Label_395; // 0x186 JumpB
	Stop(); // 0x187 Func
	var_260_bool = 0; // 0x189 MovB
	return 16; // 0x18a Return
	
Label_395:
	var_292_float = var_262_float * var_262_float; // 0x18b Mult
	var_293_bool = var_280_float > var_292_float; // 0x18c GT
	if(var_293_bool == 0) goto Label_457; // 0x18d JumpB
	GetPFPosition(var_277_cvector); // 0x18e ObjFunc
	FindPathTo(var_281_object, var_277_cvector); // 0x190 Func
	var_294_bool = var_281_object != 0; // 0x192 NullNeq
	if(var_294_bool == 0) goto Label_406; // 0x193 JumpB
	var_276_object = var_281_object; // 0x194 Mov
	var_281_object = 0; // 0x195 SetNull
	
Label_406:
	var_295_bool = var_276_object != 0; // 0x196 NullNeq
	if(var_295_bool == 0) goto Label_439; // 0x197 JumpB
	var_296_bool = var_275_bool; // 0x198 Push
	if(var_296_bool == 0) goto Label_416; // 0x199 JumpB
	var_275_bool = 0; // 0x19a MovB
	RotatePath(var_276_object, var_274_bool); // 0x19b Func
	var_297_bool = var_274_bool == 0; // 0x19d Not
	if(var_297_bool == 0) goto Label_416; // 0x19e JumpB
	goto Label_463; // 0x19f Jump
	
Label_463:
	var_260_bool = !var_0_bool; // 0x1cf Not2
	return 16; // 0x1d0 Return
	
Label_416:
	var_298_int = 0; // 0x1a0 PushI
	var_299_float = 0.3; // 0x1a1 PushF
	SetTimer(var_298_int, var_299_float); // 0x1a2 Func
	var_300_string = ""; // 0x1a4 PushV
	func_510(var_300_string); // 0x1a5 NEW_2
	var_301_string = ""; // 0x1a7 PushV
	func_512(var_301_string); // 0x1a8 NEW_2
	FollowPath(var_276_object, var_264_bool, var_274_bool, var_300_string, var_301_string); // 0x1aa Func
	var_302_bool = var_274_bool == 0; // 0x1ac Not
	if(var_302_bool == 0) goto Label_437; // 0x1ad JumpB
	var_303_bool = var_0_bool; // 0x1ae PushT
	if(var_303_bool == 0) goto Label_435; // 0x1af JumpB
	var_276_object = 0; // 0x1b0 SetNull
	goto Label_463; // 0x1b1 Jump
	
Label_435:
	goto Label_462; // 0x1b3 Jump
	
Label_462:
	goto Label_367; // 0x1ce Jump
	
Label_437:
	var_276_object = 0; // 0x1b5 SetNull
	goto Label_455; // 0x1b6 Jump
	
Label_455:
	var_281_object = 0; // 0x1c7 SetNull
	goto Label_461; // 0x1c8 Jump
	
Label_461:
	var_276_object = 0; // 0x1cd SetNull
	
Label_439:
	var_304_int = 0; // 0x1b7 PushI
	KillTimer(var_304_int); // 0x1b8 Func
	var_305_float = 0.5; // 0x1ba PushF
	Sleep(var_305_float, var_274_bool); // 0x1bb Func
	var_306_bool = var_274_bool == 0; // 0x1bd Not
	if(var_306_bool == 0) goto Label_451; // 0x1be JumpB
	var_307_bool = var_0_bool; // 0x1bf PushT
	if(var_307_bool == 0) goto Label_451; // 0x1c0 JumpB
	var_276_object = 0; // 0x1c1 SetNull
	goto Label_463; // 0x1c2 Jump
	
Label_451:
	var_308_int = 0; // 0x1c3 PushI
	var_309_float = 0.3; // 0x1c4 PushF
	SetTimer(var_308_int, var_309_float); // 0x1c5 Func
	
Label_457:
	var_310_int = 0; // 0x1c9 PushI
	KillTimer(var_310_int); // 0x1ca Func
	goto Label_463; // 0x1cc Jump
}


func_2411(var_325_object)
{
	var_326_cvector = CVector(0,0,0); var_327_float = 0; var_328_cvector = CVector(0,0,0); var_329_float = 0; // 0x96b PushV
	GetPosition(var_328_cvector); // 0x96c ObjFunc
	var_330_string = "@GetHeight"; // 0x96e PushS
	var_331_int = 1; // 0x96f PushI
	var_332_bool = IsFuncExist(var_325_object, var_330_string, var_331_int); // 0x970 FuncExist
	if(var_332_bool == 0) goto Label_2425; // 0x971 JumpB
	GetHeight(var_329_float); // 0x972 ObjFunc
	var_333_float = GetByIndex(var_328_cvector, 1); // 0x974 PushE
	var_334_int = 2; // 0x975 PushI
	var_335_float = var_329_float / var_334_int; // 0x976 Div
	var_333_float = var_333_float + var_335_float; // 0x977 Add2
	SetByIndex(var_328_cvector, 1) = var_333_float; // 0x978 PopE
	
Label_2425:
	var_336_cvector = CVector(0,0,0); // 0x979 PushV
	var_336_cvector = var_328_cvector; // 0x97a Mov
	func_2380(var_336_cvector); // 0x97b NEW_2
	return 4; // 0x97d Return
}


func_1905(var_43_cvector, var_44_cvector)
{
	var_51_float = 0; var_52_float = 0; // 0x771 PushV
	var_53_int = var_44_cvector | var_44_cvector; // 0x772 Or
	var_52_float = sqrt(var_53_int); // 0x773 Sqrt2
	var_54_float = 0.0; // 0x774 PushF
	var_55_bool = var_52_float < var_54_float; // 0x775 LT
	if(var_55_bool == 0) goto Label_1913; // 0x776 JumpB
	var_43_cvector = CVector(0.0, 0.0, 0.0); // 0x777 MovV
	return 2; // 0x778 Return
	
Label_1913:
	var_43_cvector = var_44_cvector / var_44_cvector; // 0x779 Div2
	return 2; // 0x77a Return
}


func_1396(var_93_string, var_94_int)
{
	var_95_int = 2; // 0x575 PushI
	var_96_bool = var_94_int == var_95_int; // 0x576 Eq
	if(var_96_bool == 0) goto Label_1403; // 0x577 JumpB
	var_93_string = "fire"; // 0x578 MovS
	return 0; // 0x579 Return
	
Label_1403:
	var_97_int = 1; // 0x57b PushI
	var_98_bool = var_94_int == var_97_int; // 0x57c Eq
	if(var_98_bool == 0) goto Label_1408; // 0x57d JumpB
	var_93_string = "bullet"; // 0x57e MovS
	return 0; // 0x57f Return
	
Label_1408:
	var_93_string = "phys"; // 0x580 MovS
	return 0; // 0x581 Return
}


func_1915(var_40_float, var_41_float, var_42_float)
{
	var_44_bool = var_41_float < var_42_float; // 0x77c LT
	if(var_44_bool == 0) goto Label_1920; // 0x77d JumpB
	var_40_float = var_41_float; // 0x77e Mov
	goto Label_1921; // 0x77f Jump
	
Label_1921:
	return 0; // 0x781 Return
	
Label_1920:
	var_40_float = var_42_float; // 0x780 Mov
}


func_2430(var_113_bool, var_114_object)
{
	var_115_bool = 0; var_116_float = 0; var_117_float = 0; var_118_string = ""; var_119_float = 0; var_120_bool = 0; var_121_float = 0; var_122_float = 0; var_123_string = ""; var_124_float = 0; // 0x97e PushV
	var_125_bool = 0; var_126_object = Obj(); // 0x97f PushV
	var_126_object = var_114_object; // 0x980 Mov
	func_1556(var_125_bool, var_126_object); // 0x981 NEW_2
	var_127_bool = var_125_bool == 0; // 0x983 Not
	if(var_127_bool == 0) goto Label_2439; // 0x984 JumpB
	var_113_bool = 0; // 0x985 MovB
	return 10; // 0x986 Return
	
Label_2439:
	var_128_object = GlobalVars[4]; // 0x987 PushGE
	in(var_120_bool, var_114_object); // 0x988 ObjFunc
	var_129_bool = var_120_bool; // 0x98a Push
	if(var_129_bool == 0) goto Label_2446; // 0x98b JumpB
	var_113_bool = 1; // 0x98c MovB
	return 10; // 0x98d Return
	
Label_2446:
	var_130_bool = 0; var_131_object = Obj(); // 0x98e PushV
	var_131_object = var_114_object; // 0x98f Mov
	func_1425(var_130_bool, var_131_object); // 0x990 NEW_2
	if(var_130_bool == 0) goto Label_2465; // 0x992 JumpB
	var_132_string = "reputation"; // 0x993 PushS
	GetProperty(var_132_string, var_121_float); // 0x994 ObjFunc
	var_133_float = 0.33; // 0x996 PushF
	var_134_bool = var_121_float < var_133_float; // 0x997 LT
	if(var_134_bool == 0) goto Label_2459; // 0x998 JumpB
	var_113_bool = 1; // 0x999 MovB
	return 10; // 0x99a Return
	
Label_2459:
	var_135_string = "disease"; // 0x99b PushS
	GetProperty(var_135_string, var_122_float); // 0x99c ObjFunc
	var_136_float = 0.33; // 0x99e PushF
	var_113_bool = var_122_float > var_136_float; // 0x99f GT2
	return 10; // 0x9a0 Return
	
Label_2465:
	var_137_bool = 0; var_138_object = Obj(); var_139_string = ""; // 0x9a1 PushV
	var_138_object = var_114_object; // 0x9a2 Mov
	var_139_string = "class"; // 0x9a3 MovS
	func_1430(var_137_bool, var_138_object, var_139_string); // 0x9a4 NEW_2
	var_140_bool = var_137_bool == 0; // 0x9a6 Not
	if(var_140_bool == 0) goto Label_2474; // 0x9a7 JumpB
	var_113_bool = 0; // 0x9a8 MovB
	return 10; // 0x9a9 Return
	
Label_2474:
	var_141_string = "class"; // 0x9aa PushS
	GetProperty(var_141_string, var_123_string); // 0x9ab ObjFunc
	var_142_bool = 0; // 0x9ad PushV
	var_142_bool = 1; // 0x9ae MovB
	var_143_bool = 0; // 0x9af PushV
	var_143_bool = 1; // 0x9b0 MovB
	var_144_bool = 0; // 0x9b1 PushV
	var_144_bool = 1; // 0x9b2 MovB
	var_145_string = "bomber"; // 0x9b3 PushS
	var_146_bool = var_123_string == var_145_string; // 0x9b4 Eq
	if(var_146_bool == 0) goto Label_2490; // 0x9b5 JumpB
	var_147_string = "hunter"; // 0x9b6 PushS
	var_148_bool = var_123_string == var_147_string; // 0x9b7 Eq
	if(var_148_bool == 0) goto Label_2490; // 0x9b8 JumpB
	var_144_bool = 0; // 0x9b9 MovB
	
Label_2490:
	if(var_144_bool == 0) goto Label_2495; // 0x9ba JumpB
	var_149_string = "grabitel"; // 0x9bb PushS
	var_150_bool = var_123_string == var_149_string; // 0x9bc Eq
	if(var_150_bool == 0) goto Label_2495; // 0x9bd JumpB
	var_143_bool = 0; // 0x9be MovB
	
Label_2495:
	if(var_143_bool == 0) goto Label_2500; // 0x9bf JumpB
	var_151_string = "rat_big"; // 0x9c0 PushS
	var_152_bool = var_123_string == var_151_string; // 0x9c1 Eq
	if(var_152_bool == 0) goto Label_2500; // 0x9c2 JumpB
	var_142_bool = 0; // 0x9c3 MovB
	
Label_2500:
	if(var_142_bool == 0) goto Label_2503; // 0x9c4 JumpB
	var_113_bool = 1; // 0x9c5 MovB
	return 10; // 0x9c6 Return
	
Label_2503:
	var_153_bool = 0; var_154_object = Obj(); var_155_string = ""; // 0x9c7 PushV
	var_154_object = var_114_object; // 0x9c8 Mov
	var_155_string = "disease"; // 0x9c9 MovS
	func_1430(var_153_bool, var_154_object, var_155_string); // 0x9ca NEW_2
	var_156_bool = var_153_bool == 0; // 0x9cc Not
	if(var_156_bool == 0) goto Label_2512; // 0x9cd JumpB
	var_113_bool = 0; // 0x9ce MovB
	return 10; // 0x9cf Return
	
Label_2512:
	var_157_bool = 0; // 0x9d0 PushV
	var_157_bool = 1; // 0x9d1 MovB
	var_158_bool = 0; var_159_string = ""; // 0x9d2 PushV
	var_159_string = var_123_string; // 0x9d3 Mov
	func_1812(var_158_bool, var_159_string); // 0x9d4 NEW_2
	if(var_158_bool == 0) goto Label_2523; // 0x9d6 JumpB
	var_197_string = "dog"; // 0x9d7 PushS
	var_198_bool = var_123_string == var_197_string; // 0x9d8 Eq
	if(var_198_bool == 0) goto Label_2523; // 0x9d9 JumpB
	var_157_bool = 0; // 0x9da MovB
	
Label_2523:
	if(var_157_bool == 0) goto Label_2530; // 0x9db JumpB
	var_199_string = "disease"; // 0x9dc PushS
	GetProperty(var_199_string, var_124_float); // 0x9dd ObjFunc
	var_200_int = 0; // 0x9df PushI
	var_113_bool = var_124_float > var_200_int; // 0x9e0 GT2
	return 10; // 0x9e1 Return
	
Label_2530:
	var_113_bool = 0; // 0x9e2 MovB
	return 10; // 0x9e3 Return
}


func_1922(var_112_float, var_113_float, var_114_float, var_115_float)
{
	var_116_bool = var_113_float < var_114_float; // 0x783 LT
	if(var_116_bool == 0) goto Label_1927; // 0x784 JumpB
	var_112_float = var_114_float; // 0x785 Mov
	return 0; // 0x786 Return
	
Label_1927:
	var_117_bool = var_113_float > var_115_float; // 0x787 GT
	if(var_117_bool == 0) goto Label_1931; // 0x788 JumpB
	var_112_float = var_115_float; // 0x789 Mov
	return 0; // 0x78a Return
	
Label_1931:
	var_112_float = var_113_float; // 0x78b Mov
	return 0; // 0x78c Return
}


func_1410(var_45_cvector)
{
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); // 0x582 PushV
	GetPosition(var_49_cvector); // 0x583 Func
	GetPosition(var_50_cvector); // 0x585 ObjFunc
	var_45_cvector = var_50_cvector - var_49_cvector; // 0x587 Sub2
	return 4; // 0x588 Return
}


func_1417(var_206_float)
{
	var_208_cvector = CVector(0,0,0); var_209_cvector = CVector(0,0,0); var_210_cvector = CVector(0,0,0); var_211_cvector = CVector(0,0,0); var_212_cvector = CVector(0,0,0); var_213_cvector = CVector(0,0,0); // 0x589 PushV
	GetPosition(var_211_cvector); // 0x58a Func
	GetPosition(var_212_cvector); // 0x58c ObjFunc
	var_213_cvector = var_212_cvector - var_211_cvector; // 0x58e Sub2
	var_206_float = var_213_cvector | var_213_cvector; // 0x58f Or2
	return 6; // 0x590 Return
}


func_1933(var_89_bool, var_90_int, var_91_int)
{
	var_92_int = 0; var_93_int = 0; // 0x78d PushV
	irand(var_93_int, var_91_int); // 0x78e Func
	var_89_bool = var_93_int < var_90_int; // 0x790 LT2
	return 2; // 0x791 Return
}


func_1425(var_118_bool, var_119_object)
{
	var_120_bool = 0; var_121_bool = 0; // 0x591 PushV
	IsPlayerActor(var_119_object, var_121_bool); // 0x592 Func
	var_118_bool = var_121_bool; // 0x594 Mov
	return 2; // 0x595 Return
}


func_1938(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); // 0x792 PushV
	CreateObjectSet(var_20_object); // 0x793 Func
	var_18_object = var_20_object; // 0x795 Mov
	return 2; // 0x796 Return
}


func_1430(var_56_bool, var_57_object, var_58_string)
{
	var_59_bool = 0; var_60_bool = 0; // 0x596 PushV
	var_61_string = "HasProperty"; // 0x597 PushS
	var_62_int = 2; // 0x598 PushI
	var_63_bool = IsFuncExist(var_57_object, var_61_string, var_62_int); // 0x599 FuncExist
	var_64_bool = var_63_bool == 0; // 0x59a Not
	if(var_64_bool == 0) goto Label_1438; // 0x59b JumpB
	var_56_bool = 0; // 0x59c MovB
	return 2; // 0x59d Return
	
Label_1438:
	HasProperty(var_58_string, var_60_bool); // 0x59e ObjFunc
	var_56_bool = var_60_bool; // 0x5a0 Mov
	return 2; // 0x5a1 Return
}


func_1944(var_122_float)
{
	var_123_object = Obj(); var_124_object = Obj(); // 0x798 PushV
	CreateFloatVector(var_124_object); // 0x799 Func
	add(var_122_float); // 0x79b ObjFunc
	var_125_int = 0; // 0x79d PushI
	var_126_bool = var_122_float < var_125_int; // 0x79e LT
	if(var_126_bool == 0) goto Label_1956; // 0x79f JumpB
	var_127_float = 0.7; // 0x7a0 PushF
	var_128_int = 500; // 0x7a1 PushI
	RumblePlay(var_127_float, var_128_int); // 0x7a2 Func
	
Label_1956:
	var_129_int = 15; // 0x7a4 PushI
	SendWorldWndMessage(var_129_int, var_124_object); // 0x7a5 Func
	return 2; // 0x7a7 Return
}


func_1442(var_68_float, var_69_object, var_70_float, var_71_int)
{
	var_72_int = 0; var_73_string = ""; var_74_int = 0; var_75_float = 0; var_76_float = 0; var_77_float = 0; var_78_int = 0; var_79_string = ""; var_80_int = 0; var_81_float = 0; var_82_float = 0; var_83_float = 0; // 0x5a2 PushV
	var_84_bool = 0; var_85_object = Obj(); var_86_string = ""; // 0x5a3 PushV
	var_85_object = var_69_object; // 0x5a4 Mov
	var_86_string = "health"; // 0x5a5 MovS
	func_1430(var_84_bool, var_85_object, var_86_string); // 0x5a6 NEW_2
	var_87_bool = var_84_bool == 0; // 0x5a8 Not
	if(var_87_bool == 0) goto Label_1452; // 0x5a9 JumpB
	var_68_float = 0.0; // 0x5aa MovF
	return 12; // 0x5ab Return
	
Label_1452:
	var_88_bool = 0; var_89_object = Obj(); var_90_string = ""; // 0x5ac PushV
	var_89_object = var_69_object; // 0x5ad Mov
	var_90_string = "armor"; // 0x5ae MovS
	func_1430(var_88_bool, var_89_object, var_90_string); // 0x5af NEW_2
	var_91_bool = var_88_bool == 0; // 0x5b1 Not
	if(var_91_bool == 0) goto Label_1461; // 0x5b2 JumpB
	var_78_int = 0; // 0x5b3 MovI
	goto Label_1464; // 0x5b4 Jump
	
Label_1464:
	var_92_string = "armor_"; // 0x5b8 PushS
	var_93_string = ""; var_94_int = 0; // 0x5b9 PushV
	var_94_int = var_71_int; // 0x5ba Mov
	func_1396(var_93_string, var_94_int); // 0x5bb NEW_2
	var_79_string = var_92_string + var_93_string; // 0x5bd Add2
	var_99_bool = 0; var_100_object = Obj(); var_101_string = ""; // 0x5be PushV
	var_100_object = var_69_object; // 0x5bf Mov
	var_101_string = var_79_string; // 0x5c0 Mov
	func_1430(var_99_bool, var_100_object, var_101_string); // 0x5c1 NEW_2
	var_102_bool = var_99_bool == 0; // 0x5c3 Not
	if(var_102_bool == 0) goto Label_1479; // 0x5c4 JumpB
	var_80_int = 0; // 0x5c5 MovI
	goto Label_1481; // 0x5c6 Jump
	
Label_1481:
	var_103_float = 0; var_104_float = 0; var_105_float = 0; // 0x5c9 PushV
	var_106_int = var_78_int + var_80_int; // 0x5ca Add
	var_107_float = 100.0; // 0x5cb PushF
	var_104_float = var_106_int / var_106_int; // 0x5cc Div2
	var_105_float = 1; // 0x5cd MovI
	func_1915(var_103_float, var_104_float, var_105_float); // 0x5ce NEW_2
	var_81_float = var_103_float; // 0x5cf Mov
	var_108_string = "health"; // 0x5d1 PushS
	GetProperty(var_108_string, var_82_float); // 0x5d2 ObjFunc
	var_109_int = 1; // 0x5d4 PushI
	var_110_int = var_109_int - var_81_float; // 0x5d5 Sub
	var_83_float = var_70_float * var_110_int; // 0x5d6 Mult2
	var_111_string = "health"; // 0x5d7 PushS
	var_112_float = 0; var_113_float = 0; var_114_float = 0; var_115_float = 0; // 0x5d8 PushV
	var_113_float = var_82_float - var_83_float; // 0x5d9 Sub2
	var_114_float = 0; // 0x5da MovI
	var_115_float = 1; // 0x5db MovI
	func_1922(var_112_float, var_113_float, var_114_float, var_115_float); // 0x5dc NEW_2
	SetProperty(var_111_string, var_112_float); // 0x5de ObjFunc
	var_118_bool = 0; var_119_object = Obj(); // 0x5e0 PushV
	var_119_object = var_69_object; // 0x5e1 Mov
	func_1425(var_118_bool, var_119_object); // 0x5e2 NEW_2
	if(var_118_bool == 0) goto Label_1513; // 0x5e4 JumpB
	var_122_float = 0; // 0x5e5 PushV
	var_122_float = -var_83_float; // 0x5e6 Neg2
	func_1944(var_122_float); // 0x5e7 NEW_2
	
Label_1513:
	var_68_float = var_83_float; // 0x5e9 Mov
	return 12; // 0x5ea Return
	
Label_1479:
	GetProperty(var_79_string, var_80_int); // 0x5c7 ObjFunc
	
Label_1461:
	var_130_string = "armor"; // 0x5b5 PushS
	GetProperty(var_130_string, var_78_int); // 0x5b6 ObjFunc
}


func_1961(var_201_object)
{
	var_202_bool = 0; var_203_bool = 0; // 0x7a9 PushV
	IsPlayerActor(var_201_object, var_203_bool); // 0x7aa Func
	var_204_bool = var_203_bool; // 0x7ac Push
	if(var_204_bool == 0) goto Label_1969; // 0x7ad JumpB
	var_205_string = "attack"; // 0x7ae PushS
	PlayGlobalMusic(var_205_string); // 0x7af Func
	
Label_1969:
	return 2; // 0x7b1 Return
}


func_1970()
{
	var_45_object = Obj(); var_46_object = Obj(); // 0x7b2 PushV
	GetScene(var_46_object); // 0x7b3 Func
	var_47_string = "battle"; // 0x7b5 PushS
	var_48_object = Obj(); // 0x7b6 PushV
	func_1899(var_48_object); // 0x7b7 NEW_2
	BroadcastMessage(var_47_string, var_48_object, var_46_object); // 0x7b9 Func
	return 2; // 0x7bb Return
}


func_1981(var_85_string, var_86_int)
{
	var_87_string = ""; var_88_string = ""; // 0x7bd PushV
	var_88_string = "idle"; // 0x7be MovS
	var_89_int = var_86_int; // 0x7bf Push
	if(var_89_int == 0) goto Label_1986; // 0x7c0 JumpB
	var_88_string = var_88_string + var_86_int; // 0x7c1 Add2
	
Label_1986:
	var_85_string = var_88_string; // 0x7c2 Mov
	return 2; // 0x7c3 Return
}


func_1988(var_79_int)
{
	var_80_int = 0; var_81_bool = 0; var_82_int = 0; var_83_bool = 0; // 0x7c4 PushV
	var_82_int = 0; // 0x7c5 MovI
	
Label_1990:
	var_84_string = "all"; // 0x7c6 PushS
	var_85_string = ""; var_86_int = 0; // 0x7c7 PushV
	var_86_int = var_82_int; // 0x7c8 Mov
	func_1981(var_85_string, var_86_int); // 0x7c9 NEW_2
	HasAnimation(var_83_bool, var_84_string, var_85_string); // 0x7cb Func
	var_90_bool = var_83_bool == 0; // 0x7cd Not
	if(var_90_bool == 0) goto Label_2000; // 0x7ce JumpB
	goto Label_2003; // 0x7cf Jump
	
Label_2003:
	var_79_int = var_82_int; // 0x7d3 Mov
	return 4; // 0x7d4 Return
	
Label_2000:
	var_91_int = 1; // 0x7d0 PushI
	var_82_int = var_82_int + var_91_int; // 0x7d1 Add2
	goto Label_1990; // 0x7d2 Jump
}


func_465(var_0_bool, var_1_object, var_20_int)
{
	var_21_int = 0; // 0x1d2 PushI
	var_22_bool = var_20_int != var_21_int; // 0x1d3 Neq
	if(var_22_bool == 0) goto Label_470; // 0x1d4 JumpB
	return 0; // 0x1d5 Return
	
Label_470:
	var_23_bool = 0; var_24_object = Obj(); // 0x1d6 PushV
	var_24_object = var_1_object; // 0x1d7 MovT
	func_503(var_23_bool, var_24_object); // 0x1d8 NEW_2
	var_59_bool = var_23_bool == 0; // 0x1da Not
	if(var_59_bool == 0) goto Label_477; // 0x1db JumpB
	var_0_bool = 1; // 0x1dc TMovB
	
Label_477:
	var_60_int = 0; // 0x1dd PushI
	KillTimer(var_60_int); // 0x1de Func
	Stop(); // 0x1e0 Func
	return 0; // 0x1e2 Return
}


func_2005(var_113_int)
{
	var_114_int = 0; var_115_int = 0; // 0x7d5 PushV
	var_116_string = "branch"; // 0x7d6 PushS
	GetVariable(var_116_string, var_115_int); // 0x7d7 Func
	var_113_int = var_115_int; // 0x7d9 Mov
	return 2; // 0x7da Return
}


func_2011(var_15_object)
{
	var_16_int = 0; // 0x7dc PushV
	func_2005(var_16_int); // 0x7dd NEW_2
	var_20_int = 1; // 0x7df PushI
	var_21_bool = var_16_int == var_20_int; // 0x7e0 Eq
	if(var_21_bool == 0) goto Label_2021; // 0x7e1 JumpB
	WorkWithCorpse(var_15_object); // 0x7e2 Func
	goto Label_2023; // 0x7e4 Jump
	
Label_2023:
	return 0; // 0x7e7 Return
	
Label_2021:
	Barter(var_15_object); // 0x7e5 Func
}


func_2532(var_100_object, var_103_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x9e5 PushV
	var_102_object = var_100_object; // 0x9e6 Mov
	TaskCall(4); // 0x9e7 TaskCall
	func_863(var_100_object, var_103_object, var_101_object, var_102_object); // 0x9e8 NEW_2
	TaskReturn(); // 0x9e9 TaskReturn
	var_100_object = var_103_object; // 0x9ea Mov
	ResetAAS(); // 0x9ec Func
	var_360_bool = 0; // 0x9ee PushV
	var_360_bool = 0; // 0x9ef MovB
	var_361_bool = 0; var_362_object = Obj(); // 0x9f0 PushV
	var_362_object = var_100_object; // 0x9f1 Mov
	func_1580(var_361_bool, var_362_object); // 0x9f2 NEW_2
	if(var_361_bool == 0) goto Label_2555; // 0x9f4 JumpB
	var_378_bool = 0; var_379_object = Obj(); // 0x9f5 PushV
	var_379_object = var_100_object; // 0x9f6 Mov
	func_1515(var_379_object); // 0x9f7 NEW_2
	if(var_378_bool == 0) goto Label_2555; // 0x9f9 JumpB
	var_360_bool = 1; // 0x9fa MovB
	
Label_2555:
	if(var_360_bool == 0) goto Label_2564; // 0x9fb JumpB
	var_380_object = Obj(); // 0x9fc PushV
	var_380_object = var_100_object; // 0x9fd Mov
	TaskCall(6); // 0x9fe TaskCall
	func_1173(var_381_object, var_382_object, var_380_object); // 0x9ff NEW_2
	TaskReturn(); // 0xa00 TaskReturn
	ResetAAS(); // 0xa02 Func
	
Label_2564:
	return 0; // 0xa04 Return
}


func_487(var_0_bool)
{
	var_0_bool = 1; // 0x1e7 TMovB
	var_15_int = 0; // 0x1e8 PushI
	KillTimer(var_15_int); // 0x1e9 Func
	Stop(); // 0x1eb Func
	return 0; // 0x1ed Return
}


func_2024(var_62_int, var_63_int)
{
	var_64_int = 0; var_65_bool = 0; var_66_int = 0; var_67_bool = 0; // 0x7e8 PushV
	var_68_bool = var_62_int > var_63_int; // 0x7e9 GT
	if(var_68_bool == 0) goto Label_2031; // 0x7ea JumpB
	var_69_string = "GenerateMoney: iMin > iMax"; // 0x7eb PushS
	Trace(var_69_string); // 0x7ec Func
	return 4; // 0x7ee Return
	
Label_2031:
	var_66_int = 0; // 0x7ef MovI
	var_70_bool = var_62_int != var_63_int; // 0x7f0 Neq
	if(var_70_bool == 0) goto Label_2038; // 0x7f1 JumpB
	var_71_int = var_63_int - var_62_int; // 0x7f2 Sub
	irand(var_66_int, var_71_int); // 0x7f3 Func
	goto Label_2042; // 0x7f5 Jump
	
Label_2042:
	var_66_int = var_66_int + var_62_int; // 0x7fa Add2
	var_72_int = 0; // 0x7fb PushI
	var_73_bool = var_66_int == var_72_int; // 0x7fc Eq
	if(var_73_bool == 0) goto Label_2047; // 0x7fd JumpB
	return 4; // 0x7fe Return
	
Label_2047:
	var_74_int = 0; var_75_string = ""; // 0x7ff PushV
	var_75_string = "Money"; // 0x800 MovS
	func_2142(var_74_int, var_75_string); // 0x801 NEW_2
	var_78_int = 0; // 0x803 PushI
	AddItem(var_67_bool, var_74_int, var_78_int, var_66_int); // 0x804 Func
	return 4; // 0x806 Return
	
Label_2038:
	var_79_int = 0; // 0x7f6 PushI
	var_80_bool = var_62_int == var_79_int; // 0x7f7 Eq
	if(var_80_bool == 0) goto Label_2042; // 0x7f8 JumpB
	return 4; // 0x7f9 Return
}


func_999(var_18_object)
{
	var_19_bool = 0; var_20_bool = 0; // 0x3e7 PushV
	var_21_int = 70; // 0x3e8 PushI
	KillTimer(var_21_int); // 0x3e9 Func
	var_22_bool = 0; // 0x3eb PushV
	var_22_bool = 0; // 0x3ec MovB
	func_2324(var_22_bool); // 0x3ed NEW_2
	var_55_object = GlobalVars[0]; // 0x3ef PushGE
	RemoveActor(var_55_object); // 0x3f0 Func
	IsPlayerActor(var_18_object, var_20_bool); // 0x3f2 Func
	var_56_bool = var_20_bool; // 0x3f4 Push
	if(var_56_bool == 0) goto Label_1017; // 0x3f5 JumpB
	func_2096(); // 0x3f7 NEW_2
	
Label_1017:
	func_2072(); // 0x3fa NEW_2
	var_133_object = Obj(); // 0x3fc PushV
	var_133_object = var_18_object; // 0x3fd Mov
	func_1025(var_133_object); // 0x3fe NEW_2
	return 2; // 0x400 Return
}


func_1515(var_27_bool)
{
	var_29_bool = 0; var_30_bool = 0; // 0x5eb PushV
	IsDead(var_30_bool); // 0x5ec ObjFunc
	var_27_bool = var_30_bool; // 0x5ee Mov
	return 2; // 0x5ef Return
}


func_1520(var_16_bool, var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); // 0x5f0 PushV
	var_22_bool = var_17_object == 0; // 0x5f1 NullEq
	if(var_22_bool == 0) goto Label_1525; // 0x5f2 JumpB
	var_16_bool = 0; // 0x5f3 MovB
	return 4; // 0x5f4 Return
	
Label_1525:
	var_23_bool = 0; // 0x5f5 PushV
	var_23_bool = 0; // 0x5f6 MovB
	var_24_string = "IsDead"; // 0x5f7 PushS
	var_25_int = 1; // 0x5f8 PushI
	var_26_bool = IsFuncExist(var_17_object, var_24_string, var_25_int); // 0x5f9 FuncExist
	if(var_26_bool == 0) goto Label_1537; // 0x5fa JumpB
	var_27_bool = 0; var_28_object = Obj(); // 0x5fb PushV
	var_28_object = var_17_object; // 0x5fc Mov
	func_1515(var_28_object); // 0x5fd NEW_2
	if(var_27_bool == 0) goto Label_1537; // 0x5ff JumpB
	var_23_bool = 1; // 0x600 MovB
	
Label_1537:
	if(var_23_bool == 0) goto Label_1540; // 0x601 JumpB
	var_16_bool = 0; // 0x602 MovB
	return 4; // 0x603 Return
	
Label_1540:
	GetScene(var_20_object); // 0x604 Func
	var_31_bool = var_20_object == 0; // 0x606 NullEq
	if(var_31_bool == 0) goto Label_1546; // 0x607 JumpB
	var_16_bool = 0; // 0x608 MovB
	return 4; // 0x609 Return
	
Label_1546:
	GetScene(var_21_object); // 0x60a ObjFunc
	var_32_bool = var_20_object != var_21_object; // 0x60c Neq
	if(var_32_bool == 0) goto Label_1552; // 0x60d JumpB
	var_16_bool = 0; // 0x60e MovB
	return 4; // 0x60f Return
	
Label_1552:
	var_16_bool = 1; // 0x610 MovB
	return 4; // 0x611 Return
}


func_503(var_282_bool, var_283_object)
{
	var_284_bool = 0; var_285_object = Obj(); // 0x1f8 PushV
	var_285_object = var_283_object; // 0x1f9 Mov
	func_1556(var_284_bool, var_285_object); // 0x1fa NEW_2
	var_282_bool = var_284_bool; // 0x1fb Mov
	return 0; // 0x1fd Return
}


func_510(var_300_string)
{
	var_300_string = "walk"; // 0x1fe MovS
	return 0; // 0x1ff Return
}


