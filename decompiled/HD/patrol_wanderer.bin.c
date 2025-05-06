task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_bool = 0; // 0x1b PushV
	func_3127(var_18_bool); // 0x1c NEW_2
	if(var_18_bool == 0) goto Label_34; // 0x1e JumpB
	lshStopAnimation(); // 0x1f Func
	goto Label_36; // 0x21 Jump
	
Label_36:
	StopTrade(); // 0x24 Func
	var_0_bool = 1; // 0x26 TMovB
	return 0; // 0x27 Return
	
Label_34:
	StopAnimation(); // 0x22 Func
}


task_2_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int)
{
	var_19_int = 1; // 0xc8 PushI
	if(var_19_int == 0) goto Label_245; // 0xc9 JumpB
	func_2233(); // 0xcb NEW_2
	var_21_int = 39791; // 0xcd PushI
	var_22_bool = var_17_float == var_21_int; // 0xce Eq
	if(var_22_bool == 0) goto Label_233; // 0xcf JumpB
	var_23_string = ""; // 0xd0 PushV
	var_23_string = "Neutral"; // 0xd1 MovS
	func_177(var_18_int, var_23_string); // 0xd2 NEW_2
	var_40_int = 537930; // 0xd4 PushI
	SetMessage(var_40_int); // 0xd5 TObjFunc
	ClearReplies(); // 0xd7 TObjFunc
	var_41_int = 537931; // 0xd9 PushI
	var_42_int = -1; // 0xda PushI
	var_43_int = 39792; // 0xdb PushI
	AddReply(var_41_int, var_42_int, var_43_int); // 0xdc TObjFunc
	var_44_int = 537932; // 0xde PushI
	var_45_int = -1; // 0xdf PushI
	var_46_int = 39793; // 0xe0 PushI
	AddReply(var_44_int, var_45_int, var_46_int); // 0xe1 TObjFunc
	var_47_int = 537933; // 0xe3 PushI
	var_48_int = -1; // 0xe4 PushI
	var_49_int = 39794; // 0xe5 PushI
	AddReply(var_47_int, var_48_int, var_49_int); // 0xe6 TObjFunc
	return 0; // 0xe8 Return
	
Label_233:
	var_3_object = 1; // 0xe9 TMovB
	var_50_bool = 0; // 0xea PushV
	func_3127(var_50_bool); // 0xeb NEW_2
	if(var_50_bool == 0) goto Label_241; // 0xed JumpB
	lshStopAnimation(); // 0xee Func
	goto Label_243; // 0xf0 Jump
	
Label_243:
	return 0; // 0xf3 Return
	
Label_241:
	StopAnimation(); // 0xf1 Func
	
Label_245:
	return 0; // 0xf5 Return
}


task_3_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_bool = 0; var_19_object = Obj(); // 0x102 PushV
	var_19_object = var_17_int; // 0x103 Mov
	func_3129(var_18_bool, var_19_object); // 0x104 NEW_2
	if(var_18_bool == 0) goto Label_264; // 0x106 JumpB
	return 0; // 0x107 Return
	
Label_264:
	func_413(var_16_float, var_17_int); // 0x109 NEW_2
	var_80_int = 1000; // 0x10b PushI
	var_81_int = 0; var_82_object = Obj(); // 0x10c PushV
	var_82_object = var_17_int; // 0x10d Mov
	TaskCall(1); // 0x10e TaskCall
	func_40(var_83_object, var_81_int, var_82_object); // 0x10f NEW_2
	TaskReturn(); // 0x110 TaskReturn
	var_214_bool = var_80_int == var_83_object; // 0x112 Eq
	if(var_214_bool == 0) goto Label_280; // 0x113 JumpB
	var_215_object = Obj(); // 0x114 PushV
	var_215_object = var_17_int; // 0x115 Mov
	func_2934(var_215_object); // 0x116 NEW_2
	
Label_280:
	return 0; // 0x118 Return
}


task_3_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_bool = 0; var_19_object = Obj(); // 0x11a PushV
	var_19_object = var_17_int; // 0x11b Mov
	func_2966(var_18_bool, var_19_object); // 0x11c NEW_2
	if(var_18_bool == 0) goto Label_294; // 0x11e JumpB
	func_413(var_16_float, var_17_int); // 0x120 NEW_2
	var_82_object = Obj(); // 0x122 PushV
	var_82_object = var_17_int; // 0x123 Mov
	func_2973(var_82_object); // 0x124 NEW_2
	
Label_294:
	return 0; // 0x126 Return
}


task_3_event_3(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_bool = 0; var_19_object = Obj(); // 0x128 PushV
	var_19_object = var_17_int; // 0x129 Mov
	func_2953(var_18_bool, var_19_object); // 0x12a NEW_2
	if(var_18_bool == 0) goto Label_308; // 0x12c JumpB
	func_413(var_16_float, var_17_int); // 0x12e NEW_2
	var_82_object = Obj(); // 0x130 PushV
	var_82_object = var_17_int; // 0x131 Mov
	func_2960(var_82_object); // 0x132 NEW_2
	
Label_308:
	return 0; // 0x134 Return
}


	task_3_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_int, var_17_bool, var_18_float, var_19_int, var_106_object)
	{
	var_107_bool = 0; var_108_object = Obj(); // 0x136 PushV
	var_108_object = var_106_object; // 0x137 Mov
	func_1877(var_107_bool, var_108_object); // 0x138 NEW_2
	var_135_bool = var_107_bool == 0; // 0x13a Not
	if(var_135_bool == 0) goto Label_321; // 0x13b JumpB
	var_136_object = Obj(); // 0x13c PushV
	var_136_object = var_106_object; // 0x13d Mov
	func_2990(var_136_object); // 0x13e NEW_2
	return 0; // 0x140 Return
	
Label_321:
	func_413(var_19_int, var_106_object); // 0x142 NEW_2
	var_151_object = Obj(); // 0x144 PushV
	var_151_object = var_106_object; // 0x145 Mov
	func_3014(var_151_object); // 0x146 NEW_2
	return 0; // 0x148 Return
	}


task_3_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_int, var_17_bool, var_18_float, var_19_int)
{
	var_20_bool = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_bool = 0; // 0x14a PushV
	var_21_object = var_17_bool; // 0x14b Mov
	var_22_object = var_18_float; // 0x14c Mov
	var_23_bool = var_19_int; // 0x14d Mov
	func_3093(var_20_bool, var_21_object, var_22_object, var_23_bool); // 0x14e NEW_2
	if(var_20_bool == 0) goto Label_341; // 0x150 JumpB
	var_106_object = Obj(); // 0x151 PushV
	var_106_object = var_17_bool; // 0x152 Mov
	func_309(); // 0x153 NEW_2
	
Label_341:
	return 0; // 0x155 Return
}


task_3_event_10(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	RequestClearPath(var_17_int); // 0x197 Func
	return 0; // 0x199 Return
}


task_3_event_28(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int)
{
	Stop(); // 0x19a Func
	return 0; // 0x19c Return
}


task_3_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	func_413(var_16_float, var_17_int); // 0x1a6 NEW_2
	var_18_object = Obj(); // 0x1a8 PushV
	var_18_object = var_17_int; // 0x1a9 Mov
	func_3087(); // 0x1aa NEW_2
	return 0; // 0x1ac Return
}


task_4_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	func_584(); // 0x1b7 NEW_2
	return 0; // 0x1b9 Return
}


task_4_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_bool = 0; var_19_object = Obj(); // 0x1bb PushV
	var_19_object = var_17_int; // 0x1bc Mov
	func_2966(var_18_bool, var_19_object); // 0x1bd NEW_2
	if(var_18_bool == 0) goto Label_455; // 0x1bf JumpB
	func_584(); // 0x1c1 NEW_2
	var_82_object = Obj(); // 0x1c3 PushV
	var_82_object = var_17_int; // 0x1c4 Mov
	func_2973(var_82_object); // 0x1c5 NEW_2
	
Label_455:
	return 0; // 0x1c7 Return
}


task_4_event_3(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_bool = 0; var_19_object = Obj(); // 0x1c9 PushV
	var_19_object = var_17_int; // 0x1ca Mov
	func_2953(var_18_bool, var_19_object); // 0x1cb NEW_2
	if(var_18_bool == 0) goto Label_469; // 0x1cd JumpB
	func_584(); // 0x1cf NEW_2
	var_82_object = Obj(); // 0x1d1 PushV
	var_82_object = var_17_int; // 0x1d2 Mov
	func_2960(var_82_object); // 0x1d3 NEW_2
	
Label_469:
	return 0; // 0x1d5 Return
}


	task_4_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_int, var_17_bool, var_18_float, var_19_int, var_106_object)
	{
	var_107_bool = 0; var_108_object = Obj(); // 0x1d7 PushV
	var_108_object = var_106_object; // 0x1d8 Mov
	func_1877(var_107_bool, var_108_object); // 0x1d9 NEW_2
	var_135_bool = var_107_bool == 0; // 0x1db Not
	if(var_135_bool == 0) goto Label_482; // 0x1dc JumpB
	var_136_object = Obj(); // 0x1dd PushV
	var_136_object = var_106_object; // 0x1de Mov
	func_2990(var_136_object); // 0x1df NEW_2
	return 0; // 0x1e1 Return
	
Label_482:
	func_584(); // 0x1e3 NEW_2
	var_151_object = Obj(); // 0x1e5 PushV
	var_151_object = var_106_object; // 0x1e6 Mov
	func_3014(var_151_object); // 0x1e7 NEW_2
	return 0; // 0x1e9 Return
	}


task_4_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_int, var_17_bool, var_18_float, var_19_int)
{
	var_20_bool = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_bool = 0; // 0x1eb PushV
	var_21_object = var_17_bool; // 0x1ec Mov
	var_22_object = var_18_float; // 0x1ed Mov
	var_23_bool = var_19_int; // 0x1ee Mov
	func_3093(var_20_bool, var_21_object, var_22_object, var_23_bool); // 0x1ef NEW_2
	if(var_20_bool == 0) goto Label_502; // 0x1f1 JumpB
	var_106_object = Obj(); // 0x1f2 PushV
	var_106_object = var_17_bool; // 0x1f3 Mov
	func_470(); // 0x1f4 NEW_2
	
Label_502:
	return 0; // 0x1f6 Return
}


task_5_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_object = Obj(); // 0x24e PushV
	var_18_object = var_17_int; // 0x24f Mov
	func_2990(var_18_object); // 0x250 NEW_2
	return 0; // 0x252 Return
}


task_5_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_int, var_17_bool, var_18_float, var_19_int)
{
	var_20_bool = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_bool = 0; // 0x254 PushV
	var_21_object = var_17_bool; // 0x255 Mov
	var_22_object = var_18_float; // 0x256 Mov
	var_23_bool = var_19_int; // 0x257 Mov
	func_3093(var_20_bool, var_21_object, var_22_object, var_23_bool); // 0x258 NEW_2
	return 0; // 0x25a Return
}


task_5_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_int = 1; // 0x28d PushI
	var_19_bool = var_17_int == var_18_int; // 0x28e Eq
	if(var_19_bool == 0) goto Label_661; // 0x28f JumpB
	var_20_object = Obj(); // 0x290 PushV
	var_20_object = var_1_object; // 0x291 MovT
	func_2378(var_20_object); // 0x292 NEW_2
	goto Label_665; // 0x294 Jump
	
Label_665:
	return 0; // 0x299 Return
	
Label_661:
	var_25_int = 0; // 0x295 PushV
	var_25_int = var_17_int; // 0x296 Mov
	func_810(var_16_float, var_17_int, var_25_int); // 0x297 NEW_2
}


task_5_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_bool = 0; // 0x2a8 PushV
	var_18_bool = 0; // 0x2a9 MovB
	var_19_bool = var_1_object == var_17_int; // 0x2aa Eq
	if(var_19_bool == 0) goto Label_687; // 0x2ab JumpB
	var_20_bool = var_2_object == 0; // 0x2ac Not
	if(var_20_bool == 0) goto Label_687; // 0x2ad JumpB
	var_18_bool = 1; // 0x2ae MovB
	
Label_687:
	if(var_18_bool == 0) goto Label_693; // 0x2af JumpB
	var_2_object = 1; // 0x2b0 TMovB
	var_21_object = Obj(); // 0x2b1 PushV
	var_21_object = var_17_int; // 0x2b2 Mov
	func_2222(var_21_object); // 0x2b3 NEW_2
	
Label_693:
	return 0; // 0x2b5 Return
}


task_5_event_2(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_bool = 0; // 0x2b7 PushV
	var_18_bool = 0; // 0x2b8 MovB
	var_19_bool = var_1_object == var_17_int; // 0x2b9 Eq
	if(var_19_bool == 0) goto Label_702; // 0x2ba JumpB
	var_20_object = var_2_object; // 0x2bb PushT
	if(var_20_object == 0) goto Label_702; // 0x2bc JumpB
	var_18_bool = 1; // 0x2bd MovB
	
Label_702:
	if(var_18_bool == 0) goto Label_707; // 0x2be JumpB
	var_2_object = 0; // 0x2bf TMovB
	var_21_string = "head"; // 0x2c0 PushS
	UnlookAsync(var_21_string); // 0x2c1 Func
	
Label_707:
	return 0; // 0x2c3 Return
}


task_5_event_10(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	RequestClearPath(var_17_int); // 0x33d Func
	return 0; // 0x33f Return
}


task_5_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	func_666(var_17_int); // 0x349 NEW_2
	var_22_object = Obj(); // 0x34b PushV
	var_22_object = var_17_int; // 0x34c Mov
	func_3087(); // 0x34d NEW_2
	return 0; // 0x34f Return
}


task_6_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object)
{
	var_18_object = Obj(); // 0x36a PushV
	var_18_object = var_17_object; // 0x36b Mov
	func_2990(var_18_object); // 0x36c NEW_2
	return 0; // 0x36e Return
}


task_6_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_bool = 0; // 0x370 PushV
	var_21_object = var_17_object; // 0x371 Mov
	var_22_object = var_18_object; // 0x372 Mov
	var_23_bool = var_19_bool; // 0x373 Mov
	func_3093(var_20_bool, var_21_object, var_22_object, var_23_bool); // 0x374 NEW_2
	return 0; // 0x376 Return
}


task_7_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object)
{
	var_18_bool = 0; var_19_bool = 0; // 0x630 PushV
	IsOverrideActive(var_19_bool); // 0x631 Func
	var_20_bool = var_19_bool == 0; // 0x633 Not
	if(var_20_bool == 0) goto Label_1593; // 0x634 JumpB
	var_21_object = Obj(); // 0x635 PushV
	var_21_object = var_17_object; // 0x636 Mov
	func_2445(var_21_object); // 0x637 NEW_2
	
Label_1593:
	return 2; // 0x639 Return
}


task_7_event_22(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_int, var_19_float, var_20_float)
{
	return 0; // 0x6b0 Return
}


task_7_event_16(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_string)
{
	return 0; // 0x6b2 Return
}


task_7_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object)
{
	return 0; // 0x6b4 Return
}


event_22(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_int, var_19_float, var_20_float)
{
	var_21_object = Obj(); var_22_int = 0; var_23_float = 0; // 0xbea PushV
	var_21_object = var_17_object; // 0xbeb Mov
	var_22_int = var_18_int; // 0xbec Mov
	var_23_float = var_19_float; // 0xbed Mov
	func_1945(var_21_object, var_22_int, var_23_float); // 0xbee NEW_2
	return 0; // 0xbf0 Return
}


event_43(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_int, var_19_float, var_20_float, var_21_cvector, var_22_cvector)
{
	var_23_object = Obj(); var_24_int = 0; var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); // 0xbf2 PushV
	var_23_object = var_17_object; // 0xbf3 Mov
	var_24_int = var_18_int; // 0xbf4 Mov
	var_25_float = var_19_float; // 0xbf5 Mov
	var_26_cvector = var_21_cvector; // 0xbf6 Mov
	var_27_cvector = var_22_cvector; // 0xbf7 Mov
	func_2013(var_25_float, var_26_cvector, var_27_cvector); // 0xbf8 NEW_2
	return 0; // 0xbfa Return
}


event_16(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_string)
{
	var_19_float = 0; var_20_float = 0; // 0xbfb PushV
	var_21_string = "health"; // 0xbfc PushS
	var_22_bool = var_18_string == var_21_string; // 0xbfd Eq
	if(var_22_bool == 0) goto Label_3079; // 0xbfe JumpB
	var_23_string = "health"; // 0xbff PushS
	GetProperty(var_23_string, var_20_float); // 0xc00 Func
	var_24_int = 0; // 0xc02 PushI
	var_25_bool = var_20_float <= var_24_int; // 0xc03 LE
	if(var_25_bool == 0) goto Label_3079; // 0xc04 JumpB
	SignalDeath(var_17_object); // 0xc05 Func
	
Label_3079:
	return 2; // 0xc07 Return
}


event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_string)
{
	var_19_string = "prc"; // 0xc09 PushS
	var_20_bool = var_18_string == var_19_string; // 0xc0a Eq
	if(var_20_bool == 0) goto Label_3086; // 0xc0b JumpB
	ResetAAS(); // 0xc0c Func
	
Label_3086:
	return 0; // 0xc0e Return
}


event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object)
{
	var_18_object = Obj(); // 0xc10 PushV
	var_18_object = var_17_object; // 0xc11 Mov
	func_3029(var_18_object); // 0xc12 NEW_2
	return 0; // 0xc14 Return
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int)
{
	func_2927(); // 0xf7 NEW_2
	func_2728(); // 0xfa NEW_2
	
Label_252:
	func_342(var_15_float, var_16_int); // 0xfd NEW_2
	goto Label_252; // 0xff Jump
}


func_1536()
{
	var_354_string = ""; // 0x600 PushV
	var_354_string = "attack_stay"; // 0x601 MovS
	func_2266(var_354_string); // 0x602 NEW_2
	return 0; // 0x604 Return
}


func_0(var_0_bool)
{
	DoTrade(); // 0x1 Func
	var_0_bool = 0; // 0x3 TMovB
	
Label_4:
	var_251_bool = 0; // 0x4 PushV
	func_3127(var_251_bool); // 0x5 NEW_2
	if(var_251_bool == 0) goto Label_15; // 0x7 JumpB
	var_252_string = ""; // 0x8 PushV
	var_252_string = "Neutral"; // 0x9 MovS
	func_2191(var_252_string); // 0xa NEW_2
	lshWaitForAnimEnd(); // 0xc Func
	goto Label_21; // 0xe Jump
	
Label_21:
	var_253_bool = var_0_bool; // 0x15 PushT
	if(var_253_bool == 0) goto Label_24; // 0x16 JumpB
	return 0; // 0x17 Return
	
Label_24:
	goto Label_4; // 0x18 Jump
	
Label_15:
	WaitForAnimEnd(); // 0xf Func
	var_254_string = "all"; // 0x11 PushS
	var_255_string = "idle"; // 0x12 PushS
	PlayAnimation(var_254_string, var_255_string); // 0x13 Func
}


func_1541()
{
	return 0; // 0x606 Return
}


func_1543(var_587_bool)
{
	var_587_bool = 1; // 0x607 MovB
	return 0; // 0x608 Return
}


func_1545(var_479_int)
{
	var_479_int = 1; // 0x609 MovI
	return 0; // 0x60a Return
}


func_1547(var_474_float)
{
	var_474_float = 0.5; // 0x60b MovF
	return 0; // 0x60c Return
}


func_1549(var_28_object)
{
	var_29_bool = 0; var_30_bool = 0; // 0x60d PushV
	IsPlayerActor(var_28_object, var_30_bool); // 0x60e Func
	var_31_bool = var_30_bool; // 0x610 Push
	if(var_31_bool == 0) goto Label_1558; // 0x611 JumpB
	func_2530(); // 0x613 NEW_2
	goto Label_1561; // 0x615 Jump
	
Label_1561:
	func_2506(); // 0x61a NEW_2
	var_164_object = Obj(); // 0x61c PushV
	var_164_object = var_28_object; // 0x61d Mov
	func_1569(var_164_object); // 0x61e NEW_2
	return 2; // 0x620 Return
	
Label_1558:
	func_2657(); // 0x617 NEW_2
}


func_3093(var_20_bool, var_21_object, var_22_object, var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0xc15 PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_bool = 0; // 0xc16 PushV
	var_27_object = var_22_object; // 0xc17 Mov
	var_28_bool = !var_23_bool; // 0xc18 Not2
	func_2791(var_26_bool, var_27_object, var_28_bool); // 0xc19 NEW_2
	if(var_26_bool == 0) goto Label_3117; // 0xc1b JumpB
	CanSee(var_25_bool, var_21_object); // 0xc1c Func
	var_94_bool = 0; // 0xc1e PushV
	var_94_bool = 1; // 0xc1f MovB
	var_95_bool = var_25_bool; // 0xc20 Push
	if(var_95_bool == 0) goto Label_3114; // 0xc21 JumpB
	var_96_float = 0; var_97_object = Obj(); // 0xc22 PushV
	var_97_object = var_21_object; // 0xc23 Mov
	func_1738(var_97_object); // 0xc24 NEW_2
	var_104_float = 160000.0; // 0xc26 PushF
	var_105_bool = var_96_float <= var_104_float; // 0xc27 LE
	if(var_105_bool == 0) goto Label_3114; // 0xc28 JumpB
	var_94_bool = 0; // 0xc29 MovB
	
Label_3114:
	if(var_94_bool == 0) goto Label_3117; // 0xc2a JumpB
	var_20_bool = 1; // 0xc2b MovB
	return 2; // 0xc2c Return
	
Label_3117:
	var_20_bool = 0; // 0xc2d MovB
	return 2; // 0xc2e Return
}


func_1569(var_164_object)
{
	EventDisable(0); // 0x622 EventDisable
	var_165_object = Obj(); // 0x623 PushV
	var_165_object = var_164_object; // 0x624 Mov
	func_1594(var_165_object); // 0x625 NEW_2
	var_245_int = 50; // 0x627 PushI
	var_246_int = 40; // 0x628 PushI
	SetRTEnvelope(var_245_int, var_246_int); // 0x629 Func
	EventEnable(0); // 0x62b EventEnable
	
Label_1580:
	Hold(); // 0x62c Func
	goto Label_1580; // 0x62e Jump
}


func_40(var_0_bool, var_81_int, var_82_object)
{
	var_84_object = Obj(); var_85_bool = 0; var_86_int = 0; var_87_bool = 0; var_88_object = Obj(); var_89_bool = 0; var_90_int = 0; var_91_bool = 0; // 0x28 PushV
	var_0_bool = var_82_object; // 0x29 TMov
	var_92_bool = 0; var_93_object = Obj(); var_94_float = 0; // 0x2a PushV
	var_93_object = var_82_object; // 0x2b Mov
	var_94_float = 70.0; // 0x2c MovF
	func_2043(var_93_object, var_94_float); // 0x2d NEW_2
	var_139_bool = var_92_bool == 0; // 0x2f Not
	if(var_139_bool == 0) goto Label_51; // 0x30 JumpB
	var_81_int = -2; // 0x31 MovI
	return 8; // 0x32 Return
	
Label_51:
	CreateDialog(var_88_object); // 0x33 Func
	var_140_int = 0; // 0x35 PushV
	func_3121(var_140_int); // 0x36 NEW_2
	SetNPCName(var_140_int); // 0x38 ObjFunc
	var_141_int = 0; // 0x3a PushV
	func_3119(var_141_int); // 0x3b NEW_2
	SetNPCDescription(var_141_int); // 0x3d ObjFunc
	var_142_string = ""; // 0x3f PushV
	func_3123(var_142_string); // 0x40 NEW_2
	SetPhoto(var_142_string); // 0x42 ObjFunc
	var_143_string = ""; // 0x44 PushV
	func_3125(var_143_string); // 0x45 NEW_2
	SetPhoto2(var_143_string); // 0x47 ObjFunc
	var_144_int = 0; // 0x49 PushV
	func_2422(var_144_int); // 0x4a NEW_2
	SetPlayerName(var_144_int); // 0x4c ObjFunc
	var_90_int = -1; // 0x4e MovI
	IsOverrideActive(var_89_bool); // 0x4f Func
	var_152_bool = var_89_bool; // 0x51 Push
	if(var_152_bool == 0) goto Label_85; // 0x52 JumpB
	var_81_int = -2; // 0x53 MovI
	return 8; // 0x54 Return
	
Label_85:
	DoDialog(var_88_object); // 0x55 Func
	var_153_object = Obj(); var_154_object = Obj(); // 0x57 PushV
	var_153_object = var_82_object; // 0x58 Mov
	var_154_object = var_88_object; // 0x59 Mov
	TaskCall(2); // 0x5a TaskCall
	func_114(var_155_object, var_156_object, var_157_string, var_158_bool, var_153_object, var_154_object); // 0x5b NEW_2
	TaskReturn(); // 0x5c TaskReturn
	IsDialogEnd(var_91_bool); // 0x5e ObjFunc
	
Label_96:
	var_205_bool = var_91_bool == 0; // 0x60 Not
	if(var_205_bool == 0) goto Label_103; // 0x61 JumpB
	sync(); // 0x62 Func
	IsDialogEnd(var_91_bool); // 0x64 ObjFunc
	goto Label_96; // 0x66 Jump
	
Label_103:
	var_206_object = Obj(); // 0x67 PushV
	var_206_object = var_82_object; // 0x68 Mov
	func_2112(); // 0x69 NEW_2
	StopDialog(var_88_object); // 0x6b Func
	GetReturnValue(var_90_int); // 0x6d ObjFunc
	var_81_int = var_90_int; // 0x6f Mov
	return 8; // 0x70 Return
}


func_3119(var_141_int)
{
	var_141_int = 515572; // 0xc2f MovI
	return 0; // 0xc30 Return
}


func_3121(var_140_int)
{
	var_140_int = 504031; // 0xc31 MovI
	return 0; // 0xc32 Return
}


func_3123(var_142_string)
{
	var_142_string = "ui/NPC_Citizen2.png"; // 0xc33 MovS
	return 0; // 0xc34 Return
}


func_3125(var_143_string)
{
	var_143_string = "ui/NPC_Citizen2_b.png"; // 0xc35 MovS
	return 0; // 0xc36 Return
}


func_3127(var_135_bool)
{
	var_135_bool = 0; // 0xc37 MovB
	return 0; // 0xc38 Return
}


func_3129(var_20_bool, var_21_object)
{
	var_22_bool = 0; var_23_float = 0; var_24_string = ""; var_25_bool = 0; var_26_float = 0; var_27_string = ""; // 0xc39 PushV
	var_28_bool = 0; var_29_object = Obj(); // 0xc3a PushV
	var_29_object = var_21_object; // 0xc3b Mov
	func_1877(var_28_bool, var_29_object); // 0xc3c NEW_2
	var_62_bool = var_28_bool == 0; // 0xc3e Not
	if(var_62_bool == 0) goto Label_3138; // 0xc3f JumpB
	var_20_bool = 0; // 0xc40 MovB
	return 6; // 0xc41 Return
	
Label_3138:
	var_63_object = GlobalVars[0]; // 0xc42 PushGE
	in(var_25_bool, var_21_object); // 0xc43 ObjFunc
	var_64_bool = var_25_bool; // 0xc45 Push
	if(var_64_bool == 0) goto Label_3145; // 0xc46 JumpB
	var_20_bool = 1; // 0xc47 MovB
	return 6; // 0xc48 Return
	
Label_3145:
	var_65_bool = 0; var_66_object = Obj(); // 0xc49 PushV
	var_66_object = var_21_object; // 0xc4a Mov
	func_1746(var_65_bool, var_66_object); // 0xc4b NEW_2
	if(var_65_bool == 0) goto Label_3156; // 0xc4d JumpB
	var_69_string = "reputation"; // 0xc4e PushS
	GetProperty(var_69_string, var_26_float); // 0xc4f ObjFunc
	var_70_float = 0.33; // 0xc51 PushF
	var_20_bool = var_26_float < var_70_float; // 0xc52 LT2
	return 6; // 0xc53 Return
	
Label_3156:
	var_71_bool = 0; var_72_object = Obj(); var_73_string = ""; // 0xc54 PushV
	var_72_object = var_21_object; // 0xc55 Mov
	var_73_string = "class"; // 0xc56 MovS
	func_1751(var_71_bool, var_72_object, var_73_string); // 0xc57 NEW_2
	if(var_71_bool == 0) goto Label_3181; // 0xc59 JumpB
	var_74_string = "class"; // 0xc5a PushS
	GetProperty(var_74_string, var_27_string); // 0xc5b ObjFunc
	var_20_bool = 1; // 0xc5d MovB
	var_75_bool = 0; // 0xc5e PushV
	var_75_bool = 1; // 0xc5f MovB
	var_76_string = "bomber"; // 0xc60 PushS
	var_77_bool = var_27_string == var_76_string; // 0xc61 Eq
	if(var_77_bool == 0) goto Label_3175; // 0xc62 JumpB
	var_78_string = "hunter"; // 0xc63 PushS
	var_79_bool = var_27_string == var_78_string; // 0xc64 Eq
	if(var_79_bool == 0) goto Label_3175; // 0xc65 JumpB
	var_75_bool = 0; // 0xc66 MovB
	
Label_3175:
	if(var_75_bool == 0) goto Label_3180; // 0xc67 JumpB
	var_80_string = "grabitel"; // 0xc68 PushS
	var_81_bool = var_27_string == var_80_string; // 0xc69 Eq
	if(var_81_bool == 0) goto Label_3180; // 0xc6a JumpB
	var_20_bool = 0; // 0xc6b MovB
	
Label_3180:
	return 6; // 0xc6c Return
	
Label_3181:
	var_20_bool = 0; // 0xc6d MovB
	return 6; // 0xc6e Return
}


func_1594(var_165_object)
{
	var_166_cvector = CVector(0,0,0); var_167_cvector = CVector(0,0,0); var_168_cvector = CVector(0,0,0); var_169_cvector = CVector(0,0,0); var_170_string = ""; var_171_object = Obj(); var_172_bool = 0; var_173_bool = 0; var_174_float = 0; var_175_cvector = CVector(0,0,0); var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); var_178_cvector = CVector(0,0,0); var_179_cvector = CVector(0,0,0); var_180_string = ""; var_181_object = Obj(); var_182_bool = 0; var_183_bool = 0; var_184_float = 0; var_185_cvector = CVector(0,0,0); // 0x63a PushV
	var_186_bool = var_165_object == 0; // 0x63b NullEq
	if(var_186_bool == 0) goto Label_1602; // 0x63c JumpB
	var_187_string = ""; // 0x63d PushV
	var_187_string = "fdie"; // 0x63e MovS
	func_1685(var_187_string); // 0x63f NEW_2
	goto Label_1684; // 0x641 Jump
	
Label_1684:
	return 20; // 0x694 Return
	
Label_1602:
	GetPosition(var_176_cvector); // 0x642 ObjFunc
	GetPosition(var_177_cvector); // 0x644 Func
	GetDirection(var_178_cvector); // 0x646 Func
	var_179_cvector = var_177_cvector - var_176_cvector; // 0x648 Sub2
	var_219_float = GetByIndex(var_179_cvector, 0); // 0x649 PushE
	var_220_float = GetByIndex(var_178_cvector, 0); // 0x64a PushE
	var_221_float = var_219_float * var_220_float; // 0x64b Mult
	var_222_float = GetByIndex(var_179_cvector, 2); // 0x64c PushE
	var_223_float = GetByIndex(var_178_cvector, 2); // 0x64d PushE
	var_224_float = var_222_float * var_223_float; // 0x64e Mult
	var_225_int = var_221_float + var_224_float; // 0x64f Add
	var_226_int = 0; // 0x650 PushI
	var_227_bool = var_225_int >= var_226_int; // 0x651 GE
	if(var_227_bool == 0) goto Label_1621; // 0x652 JumpB
	var_180_string = "fdie"; // 0x653 MovS
	goto Label_1622; // 0x654 Jump
	
Label_1622:
	RemoveRTEnvelope(); // 0x656 Func
	SetDeathState(); // 0x658 Func
	Stop(); // 0x65a Func
	StopAsync(); // 0x65c Func
	var_181_object = var_165_object; // 0x65e Mov
	var_228_string = "GetScriptProperty"; // 0x65f PushS
	var_229_int = 2; // 0x660 PushI
	var_230_bool = IsFuncExist(var_165_object, var_228_string, var_229_int); // 0x661 FuncExist
	if(var_230_bool == 0) goto Label_1646; // 0x662 JumpB
	var_231_string = "Owner"; // 0x663 PushS
	HasScriptProperty(var_182_bool, var_231_string); // 0x664 ObjFunc
	var_232_bool = var_182_bool; // 0x666 Push
	if(var_232_bool == 0) goto Label_1646; // 0x667 JumpB
	var_233_string = "Owner"; // 0x668 PushS
	GetScriptProperty(var_181_object, var_233_string); // 0x669 ObjFunc
	var_234_bool = var_181_object == 0; // 0x66b NullEq
	if(var_234_bool == 0) goto Label_1646; // 0x66c JumpB
	var_181_object = var_165_object; // 0x66d Mov
	
Label_1646:
	var_235_string = "@GetEyesHeight"; // 0x66e PushS
	var_236_int = 1; // 0x66f PushI
	var_237_bool = IsFuncExist(var_181_object, var_235_string, var_236_int); // 0x670 FuncExist
	if(var_237_bool == 0) goto Label_1661; // 0x671 JumpB
	GetEyesHeight(var_184_float); // 0x672 ObjFunc
	var_185_cvector = CVector(0.0, 0.0, 0.0); // 0x674 MovV
	var_238_float = GetByIndex(var_185_cvector, 1); // 0x675 PushE
	var_238_float = var_184_float; // 0x676 Mov
	SetByIndex(var_185_cvector, 1) = var_238_float; // 0x677 PopE
	var_239_string = "head"; // 0x678 PushS
	LookAsync(var_165_object, var_239_string, var_185_cvector); // 0x679 Func
	var_183_bool = 1; // 0x67b MovB
	goto Label_1662; // 0x67c Jump
	
Label_1662:
	var_240_string = ""; // 0x67e PushV
	var_240_string = var_180_string; // 0x67f Mov
	func_2266(var_240_string); // 0x680 NEW_2
	var_241_string = "all"; // 0x682 PushS
	PlayAnimation(var_241_string, var_180_string); // 0x683 Func
	WaitForAnimEnd(); // 0x685 Func
	var_242_bool = var_183_bool; // 0x687 Push
	if(var_242_bool == 0) goto Label_1678; // 0x688 JumpB
	StopAsync(); // 0x689 Func
	var_243_string = "head"; // 0x68b PushS
	UnlookAsync(var_243_string); // 0x68c Func
	
Label_1678:
	var_244_string = "all"; // 0x68e PushS
	LockAnimationEnd(var_244_string, var_180_string); // 0x68f Func
	RemoveEnvelope(); // 0x691 Func
	var_181_object = 0; // 0x693 SetNull
	
Label_1661:
	var_183_bool = 0; // 0x67d MovB
	
Label_1621:
	var_180_string = "bdie"; // 0x655 MovS
}


func_2112()
{
	var_207_bool = 0; var_208_bool = 0; // 0x840 PushV
	var_209_bool = 1; // 0x841 PushB
	CameraSwitchToNormal(var_209_bool); // 0x842 Func
	var_210_bool = 0; // 0x844 PushV
	func_3127(var_210_bool); // 0x845 NEW_2
	if(var_210_bool == 0) goto Label_2121; // 0x847 JumpB
	goto Label_2129; // 0x848 Jump
	
Label_2129:
	return 2; // 0x851 Return
	
Label_2121:
	var_211_string = "head"; // 0x849 PushS
	HasAnimationTrack(var_208_bool, var_211_string); // 0x84a Func
	var_212_bool = var_208_bool; // 0x84c Push
	if(var_212_bool == 0) goto Label_2129; // 0x84d JumpB
	var_213_string = "head"; // 0x84e PushS
	UnlookAsync(var_213_string); // 0x84f Func
}


func_582(var_149_bool)
{
	var_149_bool = 1; // 0x246 MovB
	return 0; // 0x247 Return
}


func_584()
{
	StopAnimation(); // 0x248 Func
	StopGroup0(); // 0x24a Func
	return 0; // 0x24c Return
}


func_2130(var_216_bool, var_217_object)
{
	var_218_bool = 0; var_219_object = Obj(); var_220_float = 0; // 0x853 PushV
	var_219_object = var_217_object; // 0x854 Mov
	var_220_float = 70; // 0x855 MovI
	func_2138(var_219_object, var_220_float); // 0x856 NEW_2
	var_216_bool = var_218_bool; // 0x857 Mov
	return 0; // 0x859 Return
}


func_2138(var_218_bool, var_220_float)
{
	var_221_float = 0; var_222_cvector = CVector(0,0,0); var_223_cvector = CVector(0,0,0); var_224_cvector = CVector(0,0,0); var_225_cvector = CVector(0,0,0); var_226_cvector = CVector(0,0,0); var_227_cvector = CVector(0,0,0); var_228_bool = 0; var_229_float = 0; var_230_cvector = CVector(0,0,0); var_231_cvector = CVector(0,0,0); var_232_cvector = CVector(0,0,0); var_233_cvector = CVector(0,0,0); var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_bool = 0; // 0x85a PushV
	GetPosition(var_230_cvector); // 0x85b ObjFunc
	GetEyesHeight(var_229_float); // 0x85d ObjFunc
	var_237_float = GetByIndex(var_230_cvector, 1); // 0x85f PushE
	var_237_float = var_237_float + var_229_float; // 0x860 Add2
	SetByIndex(var_230_cvector, 1) = var_237_float; // 0x861 PopE
	GetPosition(var_231_cvector); // 0x862 Func
	GetEyesHeight(var_229_float); // 0x864 Func
	var_238_float = GetByIndex(var_231_cvector, 1); // 0x866 PushE
	var_238_float = var_238_float + var_229_float; // 0x867 Add2
	SetByIndex(var_231_cvector, 1) = var_238_float; // 0x868 PopE
	var_232_cvector = var_230_cvector - var_231_cvector; // 0x869 Sub2
	var_239_float = GetByIndex(var_232_cvector, 1); // 0x86a PushE
	var_239_float = 0; // 0x86b MovI
	SetByIndex(var_232_cvector, 1) = var_239_float; // 0x86c PopE
	var_240_int = var_232_cvector | var_232_cvector; // 0x86d Or
	var_241_float = sqrt(var_240_int); // 0x86e Sqrt
	var_232_cvector = var_232_cvector / var_232_cvector; // 0x86f Div2
	var_233_cvector = -var_232_cvector; // 0x870 Neg2
	var_242_float = var_232_cvector * var_220_float; // 0x871 Mult
	var_243_cvector = CVector(0.0, 10.0, 0.0); // 0x872 PushVec
	var_234_cvector = var_242_float - var_243_cvector; // 0x873 Sub2
	var_235_cvector = var_231_cvector + var_234_cvector; // 0x874 Add2
	IsOverrideActive(var_236_bool); // 0x875 Func
	var_244_bool = var_236_bool; // 0x877 Push
	if(var_244_bool == 0) goto Label_2171; // 0x878 JumpB
	var_218_bool = 0; // 0x879 MovB
	return 16; // 0x87a Return
	
Label_2171:
	StopWorld(); // 0x87b Func
	var_245_bool = 1; // 0x87d PushB
	CameraTransit(var_235_cvector, var_233_cvector, var_245_bool); // 0x87e Func
	var_246_float = GetByIndex(var_234_cvector, 0); // 0x880 PushE
	var_247_float = GetByIndex(var_234_cvector, 2); // 0x881 PushE
	Rotate(var_246_float, var_247_float); // 0x882 Func
	CameraWaitForPlayFinish(); // 0x884 Func
	ResumeWorld(); // 0x886 Func
	var_218_bool = 1; // 0x888 MovB
	return 16; // 0x889 Return
}


func_603(var_2_object, var_230_bool, var_231_object, var_232_float, var_233_float, var_234_bool, var_235_bool)
{
	var_239_bool = 0; var_240_bool = 0; var_241_bool = 0; var_242_bool = 0; // 0x25b PushV
	var_243_object = Obj(); // 0x25c PushV
	var_243_object = var_231_object; // 0x25d Mov
	func_2378(var_243_object); // 0x25e NEW_2
	var_244_int = 1; // 0x260 PushI
	var_245_int = 5; // 0x261 PushI
	SetTimer(var_244_int, var_245_int); // 0x262 Func
	CanSee(var_241_bool, var_231_object); // 0x264 Func
	var_246_bool = var_241_bool; // 0x266 Push
	if(var_246_bool == 0) goto Label_622; // 0x267 JumpB
	var_2_object = 1; // 0x268 TMovB
	var_247_object = Obj(); // 0x269 PushV
	var_247_object = var_231_object; // 0x26a Mov
	func_2222(var_247_object); // 0x26b NEW_2
	goto Label_623; // 0x26d Jump
	
Label_623:
	var_254_bool = 0; var_255_object = Obj(); // 0x26f PushV
	var_255_object = var_231_object; // 0x270 Mov
	func_1746(var_254_bool, var_255_object); // 0x271 NEW_2
	if(var_254_bool == 0) goto Label_633; // 0x273 JumpB
	var_256_object = Obj(); // 0x274 PushV
	func_2307(var_256_object); // 0x275 NEW_2
	SendPlayerEnemy(var_231_object, var_256_object); // 0x277 Func
	
Label_633:
	var_257_bool = 0; var_258_object = Obj(); var_259_float = 0; var_260_float = 0; var_261_bool = 0; var_262_bool = 0; // 0x279 PushV
	var_258_object = var_231_object; // 0x27a Mov
	var_259_float = var_232_float; // 0x27b Mov
	var_260_float = var_233_float; // 0x27c Mov
	var_261_bool = var_234_bool; // 0x27d Mov
	var_262_bool = var_235_bool; // 0x27e Mov
	func_708(var_241_bool, var_242_bool, var_257_bool, var_258_object, var_259_float, var_260_float, var_261_bool, var_262_bool); // 0x27f NEW_2
	var_242_bool = var_257_bool; // 0x280 Mov
	var_308_object = var_2_object; // 0x282 PushT
	if(var_308_object == 0) goto Label_647; // 0x283 JumpB
	var_309_string = "head"; // 0x284 PushS
	UnlookAsync(var_309_string); // 0x285 Func
	
Label_647:
	var_310_int = 1; // 0x287 PushI
	KillTimer(var_310_int); // 0x288 Func
	var_230_bool = var_242_bool; // 0x28a Mov
	return 4; // 0x28b Return
	
Label_622:
	var_2_object = 0; // 0x26e TMovB
}


func_1116(var_1_object, var_2_object, var_4_string)
{
	var_186_bool = 0; var_187_bool = 0; var_188_cvector = CVector(0,0,0); var_189_bool = 0; var_190_bool = 0; var_191_cvector = CVector(0,0,0); // 0x45c PushV
	var_1_object = 0; // 0x45d TMovI
	
Label_1118:
	var_192_string = "all"; // 0x45e PushS
	var_193_string = "attack_begin"; // 0x45f PushS
	var_194_int = 1; // 0x460 PushI
	var_195_int = var_1_object + var_194_int; // 0x461 Add
	var_196_int = var_193_string + var_195_int; // 0x462 Add
	HasAnimation(var_189_bool, var_192_string, var_196_int); // 0x463 Func
	var_197_bool = var_189_bool == 0; // 0x465 Not
	if(var_197_bool == 0) goto Label_1128; // 0x466 JumpB
	goto Label_1131; // 0x467 Jump
	
Label_1131:
	var_2_object = 0; // 0x46b TMovI
	
Label_1132:
	var_198_string = "attack"; // 0x46c PushS
	var_199_int = 1; // 0x46d PushI
	var_200_int = var_2_object + var_199_int; // 0x46e Add
	var_201_int = var_198_string + var_200_int; // 0x46f Add
	IsExisting3DSound(var_190_bool, var_201_int); // 0x470 Func
	var_202_bool = var_190_bool == 0; // 0x472 Not
	if(var_202_bool == 0) goto Label_1141; // 0x473 JumpB
	goto Label_1144; // 0x474 Jump
	
Label_1144:
	var_203_string = "all"; // 0x478 PushS
	var_204_string = "bjump"; // 0x479 PushS
	GetAnimationOffset(var_191_cvector, var_203_string, var_204_string); // 0x47a Func
	var_205_float = GetByIndex(var_191_cvector, 2); // 0x47c PushE
	var_4_string = -var_205_float; // 0x47d Neg2
	return 6; // 0x47e Return
	
Label_1141:
	var_206_int = 1; // 0x475 PushI
	var_2_object = var_2_object + var_206_int; // 0x476 Add2
	goto Label_1132; // 0x477 Jump
	
Label_1128:
	var_207_int = 1; // 0x468 PushI
	var_1_object = var_1_object + var_207_int; // 0x469 Add2
	goto Label_1118; // 0x46a Jump
}


func_2657()
{
	var_247_int = 0; var_248_bool = 0; var_249_int = 0; var_250_int = 0; var_251_bool = 0; var_252_int = 0; // 0xa61 PushV
	var_253_int = 0; // 0xa62 PushI
	ClearSubContainer(var_253_int); // 0xa63 Func
	var_254_int = 0; // 0xa65 PushV
	func_2369(var_254_int); // 0xa66 NEW_2
	var_252_int = var_254_int; // 0xa67 Mov
	var_255_int = 0; var_256_int = 0; // 0xa69 PushV
	var_255_int = 0; // 0xa6a MovI
	var_257_int = 10; // 0xa6b PushI
	var_258_int = 5; // 0xa6c PushI
	var_259_float = var_252_int * var_258_int; // 0xa6d Mult
	var_256_int = var_257_int + var_259_float; // 0xa6e Add2
	func_2458(var_255_int, var_256_int); // 0xa6f NEW_2
	var_260_string = ""; var_261_int = 0; var_262_int = 0; // 0xa71 PushV
	var_260_string = "bottle_water"; // 0xa72 MovS
	var_261_int = 1; // 0xa73 MovI
	var_262_int = 3; // 0xa74 MovI
	func_2240(var_260_string, var_261_int, var_262_int); // 0xa75 NEW_2
	var_263_string = ""; var_264_int = 0; var_265_int = 0; // 0xa77 PushV
	var_263_string = "rusk"; // 0xa78 MovS
	var_264_int = 1; // 0xa79 MovI
	var_265_int = 20; // 0xa7a MovI
	func_2240(var_263_string, var_264_int, var_265_int); // 0xa7b NEW_2
	var_266_string = ""; var_267_int = 0; var_268_int = 0; // 0xa7d PushV
	var_266_string = "hook"; // 0xa7e MovS
	var_267_int = 1; // 0xa7f MovI
	var_268_int = 30; // 0xa80 MovI
	func_2240(var_266_string, var_267_int, var_268_int); // 0xa81 NEW_2
	var_269_string = ""; var_270_int = 0; var_271_int = 0; // 0xa83 PushV
	var_269_string = "watch"; // 0xa84 MovS
	var_270_int = 1; // 0xa85 MovI
	var_271_int = 30; // 0xa86 MovI
	func_2240(var_269_string, var_270_int, var_271_int); // 0xa87 NEW_2
	var_272_int = 3; // 0xa89 PushI
	var_273_bool = var_252_int >= var_272_int; // 0xa8a GE
	if(var_273_bool == 0) goto Label_2707; // 0xa8b JumpB
	var_274_string = ""; var_275_int = 0; var_276_int = 0; var_277_int = 0; // 0xa8c PushV
	var_274_string = "alpha_pills"; // 0xa8d MovS
	var_275_int = 1; // 0xa8e MovI
	var_276_int = 4; // 0xa8f MovI
	var_277_int = 3; // 0xa90 MovI
	func_2251(var_274_string, var_275_int, var_276_int, var_277_int); // 0xa91 NEW_2
	
Label_2707:
	var_278_int = 4; // 0xa93 PushI
	var_279_bool = var_252_int >= var_278_int; // 0xa94 GE
	if(var_279_bool == 0) goto Label_2717; // 0xa95 JumpB
	var_280_string = ""; var_281_int = 0; var_282_int = 0; var_283_int = 0; // 0xa96 PushV
	var_280_string = "beta_pills"; // 0xa97 MovS
	var_281_int = 1; // 0xa98 MovI
	var_282_int = 8; // 0xa99 MovI
	var_283_int = 3; // 0xa9a MovI
	func_2251(var_280_string, var_281_int, var_282_int, var_283_int); // 0xa9b NEW_2
	
Label_2717:
	var_284_int = 6; // 0xa9d PushI
	var_285_bool = var_252_int >= var_284_int; // 0xa9e GE
	if(var_285_bool == 0) goto Label_2727; // 0xa9f JumpB
	var_286_string = ""; var_287_int = 0; var_288_int = 0; var_289_int = 0; // 0xaa0 PushV
	var_286_string = "gamma_pills"; // 0xaa1 MovS
	var_287_int = 1; // 0xaa2 MovI
	var_288_int = 16; // 0xaa3 MovI
	var_289_int = 3; // 0xaa4 MovI
	func_2251(var_286_string, var_287_int, var_288_int, var_289_int); // 0xaa5 NEW_2
	
Label_2727:
	return 6; // 0xaa7 Return
}


func_114(var_0_bool, var_1_object, var_2_object, var_3_object, var_153_object, var_154_object)
{
	var_0_bool = var_154_object; // 0x73 TMov
	var_1_object = var_153_object; // 0x74 TMov
	var_3_object = 0; // 0x75 TMovB
	var_159_int = 1; // 0x76 PushI
	if(var_159_int == 0) goto Label_147; // 0x77 JumpB
	var_160_string = ""; // 0x78 PushV
	var_160_string = "Neutral"; // 0x79 MovS
	func_177(var_154_object, var_160_string); // 0x7a NEW_2
	var_177_int = 537930; // 0x7c PushI
	SetMessage(var_177_int); // 0x7d TObjFunc
	ClearReplies(); // 0x7f TObjFunc
	var_178_int = 537931; // 0x81 PushI
	var_179_int = -1; // 0x82 PushI
	var_180_int = 39792; // 0x83 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x84 TObjFunc
	var_181_int = 537932; // 0x86 PushI
	var_182_int = -1; // 0x87 PushI
	var_183_int = 39793; // 0x88 PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x89 TObjFunc
	var_184_int = 537933; // 0x8b PushI
	var_185_int = -1; // 0x8c PushI
	var_186_int = 39794; // 0x8d PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x8e TObjFunc
	goto Label_147; // 0x90 Jump
	
Label_147:
	var_187_bool = 0; // 0x93 PushV
	func_3127(var_187_bool); // 0x94 NEW_2
	if(var_187_bool == 0) goto Label_162; // 0x96 JumpB
	
Label_151:
	lshWaitForAnimEnd(); // 0x97 Func
	var_188_object = var_3_object; // 0x99 PushT
	if(var_188_object == 0) goto Label_156; // 0x9a JumpB
	goto Label_161; // 0x9b Jump
	
Label_161:
	goto Label_176; // 0xa1 Jump
	
Label_176:
	return 0; // 0xb0 Return
	
Label_156:
	var_189_string = ""; // 0x9c PushV
	var_189_string = var_2_object; // 0x9d MovT
	func_2191(var_189_string); // 0x9e NEW_2
	goto Label_151; // 0xa0 Jump
	
Label_162:
	var_200_string = "all"; // 0xa2 PushS
	var_201_string = "idle"; // 0xa3 PushS
	PlayAnimation(var_200_string, var_201_string); // 0xa4 Func
	
Label_166:
	WaitForAnimEnd(); // 0xa6 Func
	var_202_object = var_3_object; // 0xa8 PushT
	if(var_202_object == 0) goto Label_171; // 0xa9 JumpB
	goto Label_176; // 0xaa Jump
	
Label_171:
	var_203_string = "all"; // 0xab PushS
	var_204_string = "idle"; // 0xac PushS
	PlayAnimation(var_203_string, var_204_string); // 0xad Func
	goto Label_166; // 0xaf Jump
}


func_1151(var_0_bool, var_483_float, var_484_int)
{
	var_485_object = Obj(); var_486_float = 0; var_487_float = 0; var_488_object = Obj(); var_489_float = 0; var_490_float = 0; // 0x47f PushV
	var_491_float = 0.9; // 0x480 PushF
	var_492_float = var_483_float * var_491_float; // 0x481 Mult
	GetVictim(var_492_float, var_488_object); // 0x482 Func
	ReportAttack(var_0_bool); // 0x484 Func
	var_493_bool = var_488_object == var_0_bool; // 0x486 Eq
	if(var_493_bool == 0) goto Label_1188; // 0x487 JumpB
	var_494_float = 0; var_495_object = Obj(); var_496_int = 0; // 0x488 PushV
	var_495_object = var_488_object; // 0x489 Mov
	var_496_int = var_484_int; // 0x48a Mov
	func_867(var_496_int); // 0x48b NEW_2
	var_489_float = var_494_float; // 0x48c Mov
	var_497_float = 0; var_498_object = Obj(); var_499_float = 0; var_500_int = 0; // 0x48e PushV
	var_498_object = var_488_object; // 0x48f Mov
	var_499_float = var_489_float; // 0x490 Mov
	var_501_int = 0; var_502_object = Obj(); var_503_int = 0; // 0x491 PushV
	var_502_object = var_488_object; // 0x492 Mov
	var_503_int = var_484_int; // 0x493 Mov
	func_870(var_503_int); // 0x494 NEW_2
	var_500_int = var_501_int; // 0x495 Mov
	func_1763(var_497_float, var_498_object, var_499_float, var_500_int); // 0x497 NEW_2
	var_490_float = var_497_float; // 0x498 Mov
	var_562_int = 0; // 0x49a PushV
	func_1534(var_562_int); // 0x49b NEW_2
	ReportHit(var_0_bool, var_562_int, var_490_float, var_489_float); // 0x49d Func
	var_563_object = Obj(); var_564_float = 0; // 0x49f PushV
	var_563_object = var_488_object; // 0x4a0 Mov
	var_564_float = var_490_float; // 0x4a1 Mov
	func_1541(); // 0x4a2 NEW_2
	
Label_1188:
	return 6; // 0x4a4 Return
}


func_2186()
{
	var_257_bool = 1; // 0x88b PushB
	CameraSwitchToNormal(var_257_bool); // 0x88c Func
	return 0; // 0x88e Return
}


func_2191(var_189_string)
{
	var_190_bool = 0; var_191_float = 0; var_192_float = 0; var_193_bool = 0; var_194_float = 0; var_195_float = 0; // 0x88f PushV
	lshHasAnimation(var_193_bool, var_189_string); // 0x890 Func
	var_196_bool = var_193_bool; // 0x892 Push
	if(var_196_bool == 0) goto Label_2202; // 0x893 JumpB
	lshGetAnimTimes(var_189_string, var_194_float, var_195_float); // 0x894 Func
	var_197_bool = 0; // 0x896 PushB
	lshPlayAnimation(var_194_float, var_195_float, var_197_bool); // 0x897 Func
	goto Label_2206; // 0x899 Jump
	
Label_2206:
	return 6; // 0x89e Return
	
Label_2202:
	var_198_string = "Can't find lsh animation : "; // 0x89a PushS
	var_199_int = var_198_string + var_189_string; // 0x89b Add
	Trace(var_199_int); // 0x89c Func
}


func_1685(var_187_string)
{
	RemoveRTEnvelope(); // 0x696 Func
	SetDeathState(); // 0x698 Func
	Stop(); // 0x69a Func
	StopAsync(); // 0x69c Func
	StopSecondaryAnimation(); // 0x69e Func
	var_188_string = ""; // 0x6a0 PushV
	var_188_string = var_187_string; // 0x6a1 Mov
	func_2266(var_188_string); // 0x6a2 NEW_2
	var_217_string = "all"; // 0x6a4 PushS
	PlayAnimation(var_217_string, var_187_string); // 0x6a5 Func
	WaitForAnimEnd(); // 0x6a7 Func
	var_218_string = "all"; // 0x6a9 PushS
	LockAnimationEnd(var_218_string, var_187_string); // 0x6aa Func
	RemoveEnvelope(); // 0x6ac Func
	return 0; // 0x6ae Return
}


func_666(var_2_object)
{
	var_18_int = 1; // 0x29a PushI
	KillTimer(var_18_int); // 0x29b Func
	var_19_object = var_2_object; // 0x29d PushT
	if(var_19_object == 0) goto Label_675; // 0x29e JumpB
	var_2_object = 0; // 0x29f TMovB
	var_20_string = "head"; // 0x2a0 PushS
	UnlookAsync(var_20_string); // 0x2a1 Func
	
Label_675:
	func_832(var_17_int); // 0x2a4 NEW_2
	return 0; // 0x2a6 Return
}


func_2207(var_164_string, var_165_bool)
{
	var_168_bool = 0; var_169_float = 0; var_170_float = 0; var_171_bool = 0; var_172_float = 0; var_173_float = 0; // 0x89f PushV
	lshHasAnimation(var_171_bool, var_164_string); // 0x8a0 Func
	var_174_bool = var_171_bool; // 0x8a2 Push
	if(var_174_bool == 0) goto Label_2217; // 0x8a3 JumpB
	lshGetAnimTimes(var_164_string, var_172_float, var_173_float); // 0x8a4 Func
	lshPlayAnimation(var_172_float, var_173_float, var_165_bool); // 0x8a6 Func
	goto Label_2221; // 0x8a8 Jump
	
Label_2221:
	return 6; // 0x8ad Return
	
Label_2217:
	var_175_string = "Can't find lsh animation : "; // 0x8a9 PushS
	var_176_int = var_175_string + var_164_string; // 0x8aa Add
	Trace(var_176_int); // 0x8ab Func
}


func_1190(var_0_bool, var_446_bool, var_447_float)
{
	var_448_int = 0; var_449_bool = 0; var_450_int = 0; var_451_string = ""; var_452_int = 0; var_453_bool = 0; var_454_int = 0; var_455_string = ""; // 0x4a6 PushV
	func_1529(var_455_string); // 0x4a8 NEW_2
	irand(var_452_int, var_455_string); // 0x4aa Func
	var_456_int = 1; // 0x4ac PushI
	var_452_int = var_452_int + var_456_int; // 0x4ad Add2
	Face(var_0_bool); // 0x4ae Func
	var_457_bool = 1; // 0x4b0 PushB
	SetAttackState(var_457_bool); // 0x4b1 Func
	func_2387(); // 0x4b4 NEW_2
	var_462_string = "all"; // 0x4b6 PushS
	var_463_string = "attack_begin"; // 0x4b7 PushS
	var_464_int = var_463_string + var_452_int; // 0x4b8 Add
	PlayAnimation(var_462_string, var_464_int); // 0x4b9 Func
	WaitForAnimEnd(); // 0x4bb Func
	func_1497(var_454_int, var_455_string); // 0x4be NEW_2
	var_480_bool = 0; var_481_object = Obj(); // 0x4c0 PushV
	var_481_object = var_0_bool; // 0x4c1 MovT
	func_1877(var_480_bool, var_481_object); // 0x4c2 NEW_2
	var_482_bool = var_480_bool == 0; // 0x4c4 Not
	if(var_482_bool == 0) goto Label_1226; // 0x4c5 JumpB
	StopAsync(); // 0x4c6 Func
	var_446_bool = 0; // 0x4c8 MovB
	return 8; // 0x4c9 Return
	
Label_1226:
	var_483_float = 0; var_484_int = 0; // 0x4ca PushV
	var_483_float = var_447_float; // 0x4cb Mov
	var_484_int = var_452_int; // 0x4cc Mov
	func_1151(var_455_string, var_483_float, var_484_int); // 0x4cd NEW_2
	var_565_string = "all"; // 0x4cf PushS
	var_566_string = "attack_middle"; // 0x4d0 PushS
	var_567_int = var_566_string + var_452_int; // 0x4d1 Add
	HasAnimation(var_453_bool, var_565_string, var_567_int); // 0x4d2 Func
	var_568_bool = var_453_bool; // 0x4d4 Push
	if(var_568_bool == 0) goto Label_1307; // 0x4d5 JumpB
	func_2387(); // 0x4d7 NEW_2
	var_569_string = "all"; // 0x4d9 PushS
	var_570_string = "attack_middle"; // 0x4da PushS
	var_571_int = var_570_string + var_452_int; // 0x4db Add
	PlayAnimation(var_569_string, var_571_int); // 0x4dc Func
	WaitForAnimEnd(); // 0x4de Func
	func_1529(var_455_string); // 0x4e1 NEW_2
	var_572_bool = 0; var_573_object = Obj(); // 0x4e3 PushV
	var_573_object = var_0_bool; // 0x4e4 MovT
	func_1877(var_572_bool, var_573_object); // 0x4e5 NEW_2
	var_574_bool = var_572_bool == 0; // 0x4e7 Not
	if(var_574_bool == 0) goto Label_1261; // 0x4e8 JumpB
	StopAsync(); // 0x4e9 Func
	var_446_bool = 0; // 0x4eb MovB
	return 8; // 0x4ec Return
	
Label_1261:
	var_575_float = 0; var_576_int = 0; // 0x4ed PushV
	var_575_float = var_447_float; // 0x4ee Mov
	var_576_int = var_452_int; // 0x4ef Mov
	func_1151(var_455_string, var_575_float, var_576_int); // 0x4f0 NEW_2
	var_454_int = 1; // 0x4f2 MovI
	
Label_1267:
	var_577_string = "attack_middle"; // 0x4f3 PushS
	var_578_int = var_577_string + var_452_int; // 0x4f4 Add
	var_579_string = "_"; // 0x4f5 PushS
	var_580_int = var_578_int + var_579_string; // 0x4f6 Add
	var_455_string = var_580_int + var_454_int; // 0x4f7 Add2
	var_581_string = "all"; // 0x4f8 PushS
	HasAnimation(var_453_bool, var_581_string, var_455_string); // 0x4f9 Func
	var_582_bool = var_453_bool == 0; // 0x4fb Not
	if(var_582_bool == 0) goto Label_1278; // 0x4fc JumpB
	goto Label_1307; // 0x4fd Jump
	
Label_1307:
	var_583_bool = 0; // 0x51b PushB
	SetAttackState(var_583_bool); // 0x51c Func
	var_584_string = "all"; // 0x51e PushS
	var_585_string = "attack_end"; // 0x51f PushS
	var_586_int = var_585_string + var_452_int; // 0x520 Add
	PlayAnimation(var_584_string, var_586_int); // 0x521 Func
	var_587_bool = 0; // 0x523 PushV
	func_1543(var_587_bool); // 0x524 NEW_2
	if(var_587_bool == 0) goto Label_1325; // 0x526 JumpB
	var_588_bool = 0; var_589_float = 0; // 0x527 PushV
	var_589_float = 0.75; // 0x528 MovF
	func_1327(var_588_bool, var_589_float); // 0x529 NEW_2
	StopAsync(); // 0x52b Func
	
Label_1325:
	var_446_bool = 1; // 0x52d MovB
	return 8; // 0x52e Return
	
Label_1278:
	func_2387(); // 0x4ff NEW_2
	var_597_string = "all"; // 0x501 PushS
	PlayAnimation(var_597_string, var_455_string); // 0x502 Func
	WaitForAnimEnd(); // 0x504 Func
	func_1529(var_455_string); // 0x507 NEW_2
	var_598_bool = 0; var_599_object = Obj(); // 0x509 PushV
	var_599_object = var_0_bool; // 0x50a MovT
	func_1877(var_598_bool, var_599_object); // 0x50b NEW_2
	var_600_bool = var_598_bool == 0; // 0x50d Not
	if(var_600_bool == 0) goto Label_1299; // 0x50e JumpB
	StopAsync(); // 0x50f Func
	var_446_bool = 0; // 0x511 MovB
	return 8; // 0x512 Return
	
Label_1299:
	var_601_float = 0; var_602_int = 0; // 0x513 PushV
	var_601_float = var_447_float; // 0x514 Mov
	var_602_int = var_452_int; // 0x515 Mov
	func_1151(var_455_string, var_601_float, var_602_int); // 0x516 NEW_2
	var_603_int = 1; // 0x518 PushI
	var_454_int = var_454_int + var_603_int; // 0x519 Add2
	goto Label_1267; // 0x51a Jump
}


func_2728()
{
	var_21_int = 0; var_22_bool = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_int = 0; // 0xaa8 PushV
	var_27_int = 0; // 0xaa9 PushI
	ClearSubContainer(var_27_int); // 0xaaa Func
	var_28_int = 0; // 0xaac PushV
	func_2369(var_28_int); // 0xaad NEW_2
	var_26_int = var_28_int; // 0xaae Mov
	var_34_string = ""; var_35_int = 0; var_36_int = 0; var_37_int = 0; // 0xab0 PushV
	var_34_string = "fresh_meat"; // 0xab1 MovS
	var_35_int = 1; // 0xab2 MovI
	var_36_int = 4; // 0xab3 MovI
	var_37_int = 3; // 0xab4 MovI
	func_2251(var_34_string, var_35_int, var_36_int, var_37_int); // 0xab5 NEW_2
	var_50_string = ""; var_51_int = 0; var_52_int = 0; var_53_int = 0; // 0xab7 PushV
	var_50_string = "dried_meat"; // 0xab8 MovS
	var_51_int = 1; // 0xab9 MovI
	var_52_int = 4; // 0xaba MovI
	var_53_int = 3; // 0xabb MovI
	func_2251(var_50_string, var_51_int, var_52_int, var_53_int); // 0xabc NEW_2
	var_54_string = ""; var_55_int = 0; var_56_int = 0; var_57_int = 0; // 0xabe PushV
	var_54_string = "smoked_meat"; // 0xabf MovS
	var_55_int = 1; // 0xac0 MovI
	var_56_int = 4; // 0xac1 MovI
	var_57_int = 3; // 0xac2 MovI
	func_2251(var_54_string, var_55_int, var_56_int, var_57_int); // 0xac3 NEW_2
	var_58_string = ""; var_59_int = 0; var_60_int = 0; var_61_int = 0; // 0xac5 PushV
	var_58_string = "vegetables"; // 0xac6 MovS
	var_59_int = 1; // 0xac7 MovI
	var_60_int = 3; // 0xac8 MovI
	var_61_int = 3; // 0xac9 MovI
	func_2251(var_58_string, var_59_int, var_60_int, var_61_int); // 0xaca NEW_2
	var_62_int = 3; // 0xacc PushI
	var_63_bool = var_26_int >= var_62_int; // 0xacd GE
	if(var_63_bool == 0) goto Label_2785; // 0xace JumpB
	var_64_string = ""; var_65_int = 0; var_66_int = 0; // 0xacf PushV
	var_64_string = "revolver_ammo"; // 0xad0 MovS
	var_65_int = 1; // 0xad1 MovI
	var_66_int = 5; // 0xad2 MovI
	func_2240(var_64_string, var_65_int, var_66_int); // 0xad3 NEW_2
	var_73_string = ""; var_74_int = 0; var_75_int = 0; // 0xad5 PushV
	var_73_string = "rifle_ammo"; // 0xad6 MovS
	var_74_int = 1; // 0xad7 MovI
	var_75_int = 5; // 0xad8 MovI
	func_2240(var_73_string, var_74_int, var_75_int); // 0xad9 NEW_2
	var_76_string = ""; var_77_int = 0; var_78_int = 0; // 0xadb PushV
	var_76_string = "samopal_ammo"; // 0xadc MovS
	var_77_int = 1; // 0xadd MovI
	var_78_int = 5; // 0xade MovI
	func_2240(var_76_string, var_77_int, var_78_int); // 0xadf NEW_2
	
Label_2785:
	return 6; // 0xae1 Return
}


func_2222(var_21_object)
{
	var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); // 0x8ae PushV
	GetEyesHeight(var_24_float); // 0x8af ObjFunc
	var_25_cvector = CVector(0.0, 0.0, 0.0); // 0x8b1 MovV
	var_26_float = GetByIndex(var_25_cvector, 1); // 0x8b2 PushE
	var_26_float = var_24_float; // 0x8b3 Mov
	SetByIndex(var_25_cvector, 1) = var_26_float; // 0x8b4 PopE
	var_27_string = "head"; // 0x8b5 PushS
	LookAsync(var_21_object, var_27_string, var_25_cvector); // 0x8b6 Func
	return 4; // 0x8b8 Return
}


func_177(var_2_object, var_160_string)
{
	var_161_bool = 0; // 0xb2 PushV
	func_3127(var_161_bool); // 0xb3 NEW_2
	var_162_bool = var_161_bool == 0; // 0xb5 Not
	if(var_162_bool == 0) goto Label_184; // 0xb6 JumpB
	return 0; // 0xb7 Return
	
Label_184:
	var_163_bool = var_160_string == var_2_object; // 0xb8 Eq
	if(var_163_bool == 0) goto Label_187; // 0xb9 JumpB
	return 0; // 0xba Return
	
Label_187:
	var_164_string = ""; var_165_bool = 0; // 0xbb PushV
	var_164_string = var_160_string; // 0xbc Mov
	var_166_string = ""; // 0xbd PushS
	var_167_bool = var_160_string == var_166_string; // 0xbe Eq
	if(var_167_bool == 0) goto Label_194; // 0xbf JumpB
	var_165_bool = 0; // 0xc0 MovB
	goto Label_195; // 0xc1 Jump
	
Label_195:
	func_2207(var_164_string, var_165_bool); // 0xc3 NEW_2
	var_2_object = var_160_string; // 0xc5 TMov
	return 0; // 0xc6 Return
	
Label_194:
	var_165_bool = 1; // 0xc2 MovB
}


func_1717(var_525_string, var_526_int)
{
	var_527_int = 2; // 0x6b6 PushI
	var_528_bool = var_526_int == var_527_int; // 0x6b7 Eq
	if(var_528_bool == 0) goto Label_1724; // 0x6b8 JumpB
	var_525_string = "fire"; // 0x6b9 MovS
	return 0; // 0x6ba Return
	
Label_1724:
	var_529_int = 1; // 0x6bc PushI
	var_530_bool = var_526_int == var_529_int; // 0x6bd Eq
	if(var_530_bool == 0) goto Label_1729; // 0x6be JumpB
	var_525_string = "bullet"; // 0x6bf MovS
	return 0; // 0x6c0 Return
	
Label_1729:
	var_525_string = "phys"; // 0x6c1 MovS
	return 0; // 0x6c2 Return
}


func_2233()
{
	var_20_bool = 0; // 0x8b9 PushV
	func_3127(var_20_bool); // 0x8ba NEW_2
	if(var_20_bool == 0) goto Label_2239; // 0x8bc JumpB
	lshStopSpeech(); // 0x8bd Func
	
Label_2239:
	return 0; // 0x8bf Return
}


func_2240(var_64_string, var_65_int, var_66_int)
{
	var_67_bool = 0; var_68_bool = 0; // 0x8c0 PushV
	var_69_bool = 0; var_70_int = 0; var_71_int = 0; // 0x8c1 PushV
	var_70_int = var_65_int; // 0x8c2 Mov
	var_71_int = var_66_int; // 0x8c3 Mov
	func_2341(var_69_bool, var_70_int, var_71_int); // 0x8c4 NEW_2
	if(var_69_bool == 0) goto Label_2250; // 0x8c6 JumpB
	var_72_int = 0; // 0x8c7 PushI
	AddItem(var_68_bool, var_64_string, var_72_int); // 0x8c8 Func
	
Label_2250:
	return 2; // 0x8ca Return
}


func_1731(var_51_cvector)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); // 0x6c3 PushV
	GetPosition(var_55_cvector); // 0x6c4 Func
	GetPosition(var_56_cvector); // 0x6c6 ObjFunc
	var_51_cvector = var_56_cvector - var_55_cvector; // 0x6c8 Sub2
	return 4; // 0x6c9 Return
}


func_708(var_0_bool, var_1_object, var_257_bool, var_258_object, var_259_float, var_260_float, var_261_bool, var_262_bool)
{
	var_263_bool = 0; var_264_bool = 0; var_265_object = Obj(); var_266_cvector = CVector(0,0,0); var_267_cvector = CVector(0,0,0); var_268_cvector = CVector(0,0,0); var_269_float = 0; var_270_object = Obj(); var_271_bool = 0; var_272_bool = 0; var_273_object = Obj(); var_274_cvector = CVector(0,0,0); var_275_cvector = CVector(0,0,0); var_276_cvector = CVector(0,0,0); var_277_float = 0; var_278_object = Obj(); // 0x2c4 PushV
	var_0_bool = 0; // 0x2c5 TMovB
	var_1_object = var_258_object; // 0x2c6 TMov
	var_272_bool = var_262_bool; // 0x2c7 Mov
	
Label_712:
	var_279_bool = 0; var_280_object = Obj(); // 0x2c8 PushV
	var_280_object = var_258_object; // 0x2c9 Mov
	func_848(var_279_bool, var_280_object); // 0x2ca NEW_2
	var_283_bool = var_279_bool == 0; // 0x2cc Not
	if(var_283_bool == 0) goto Label_720; // 0x2cd JumpB
	var_257_bool = 0; // 0x2ce MovB
	return 16; // 0x2cf Return
	
Label_720:
	GetPosition(var_274_cvector); // 0x2d0 ObjFunc
	GetPosition(var_275_cvector); // 0x2d2 Func
	var_276_cvector = var_274_cvector - var_275_cvector; // 0x2d4 Sub2
	var_277_float = var_276_cvector | var_276_cvector; // 0x2d5 Or2
	var_284_bool = 0; // 0x2d6 PushV
	var_284_bool = 0; // 0x2d7 MovB
	var_285_int = 0; // 0x2d8 PushI
	var_286_bool = var_260_float > var_285_int; // 0x2d9 GT
	if(var_286_bool == 0) goto Label_735; // 0x2da JumpB
	var_287_float = var_260_float * var_260_float; // 0x2db Mult
	var_288_bool = var_277_float > var_287_float; // 0x2dc GT
	if(var_288_bool == 0) goto Label_735; // 0x2dd JumpB
	var_284_bool = 1; // 0x2de MovB
	
Label_735:
	if(var_284_bool == 0) goto Label_740; // 0x2df JumpB
	Stop(); // 0x2e0 Func
	var_257_bool = 0; // 0x2e2 MovB
	return 16; // 0x2e3 Return
	
Label_740:
	var_289_float = var_259_float * var_259_float; // 0x2e4 Mult
	var_290_bool = var_277_float > var_289_float; // 0x2e5 GT
	if(var_290_bool == 0) goto Label_802; // 0x2e6 JumpB
	GetPFPosition(var_274_cvector); // 0x2e7 ObjFunc
	FindPathTo(var_278_object, var_274_cvector); // 0x2e9 Func
	var_291_bool = var_278_object != 0; // 0x2eb NullNeq
	if(var_291_bool == 0) goto Label_751; // 0x2ec JumpB
	var_273_object = var_278_object; // 0x2ed Mov
	var_278_object = 0; // 0x2ee SetNull
	
Label_751:
	var_292_bool = var_273_object != 0; // 0x2ef NullNeq
	if(var_292_bool == 0) goto Label_784; // 0x2f0 JumpB
	var_293_bool = var_272_bool; // 0x2f1 Push
	if(var_293_bool == 0) goto Label_761; // 0x2f2 JumpB
	var_272_bool = 0; // 0x2f3 MovB
	RotatePath(var_273_object, var_271_bool); // 0x2f4 Func
	var_294_bool = var_271_bool == 0; // 0x2f6 Not
	if(var_294_bool == 0) goto Label_761; // 0x2f7 JumpB
	goto Label_808; // 0x2f8 Jump
	
Label_808:
	var_257_bool = !var_0_bool; // 0x328 Not2
	return 16; // 0x329 Return
	
Label_761:
	var_295_int = 0; // 0x2f9 PushI
	var_296_float = 0.3; // 0x2fa PushF
	SetTimer(var_295_int, var_296_float); // 0x2fb Func
	var_297_string = ""; // 0x2fd PushV
	func_855(var_297_string); // 0x2fe NEW_2
	var_298_string = ""; // 0x300 PushV
	func_857(var_298_string); // 0x301 NEW_2
	FollowPath(var_273_object, var_261_bool, var_271_bool, var_297_string, var_298_string); // 0x303 Func
	var_299_bool = var_271_bool == 0; // 0x305 Not
	if(var_299_bool == 0) goto Label_782; // 0x306 JumpB
	var_300_bool = var_0_bool; // 0x307 PushT
	if(var_300_bool == 0) goto Label_780; // 0x308 JumpB
	var_273_object = 0; // 0x309 SetNull
	goto Label_808; // 0x30a Jump
	
Label_780:
	goto Label_807; // 0x30c Jump
	
Label_807:
	goto Label_712; // 0x327 Jump
	
Label_782:
	var_273_object = 0; // 0x30e SetNull
	goto Label_800; // 0x30f Jump
	
Label_800:
	var_278_object = 0; // 0x320 SetNull
	goto Label_806; // 0x321 Jump
	
Label_806:
	var_273_object = 0; // 0x326 SetNull
	
Label_784:
	var_301_int = 0; // 0x310 PushI
	KillTimer(var_301_int); // 0x311 Func
	var_302_float = 0.5; // 0x313 PushF
	Sleep(var_302_float, var_271_bool); // 0x314 Func
	var_303_bool = var_271_bool == 0; // 0x316 Not
	if(var_303_bool == 0) goto Label_796; // 0x317 JumpB
	var_304_bool = var_0_bool; // 0x318 PushT
	if(var_304_bool == 0) goto Label_796; // 0x319 JumpB
	var_273_object = 0; // 0x31a SetNull
	goto Label_808; // 0x31b Jump
	
Label_796:
	var_305_int = 0; // 0x31c PushI
	var_306_float = 0.3; // 0x31d PushF
	SetTimer(var_305_int, var_306_float); // 0x31e Func
	
Label_802:
	var_307_int = 0; // 0x322 PushI
	KillTimer(var_307_int); // 0x323 Func
	goto Label_808; // 0x325 Jump
}


func_1738(var_96_float)
{
	var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); // 0x6ca PushV
	GetPosition(var_101_cvector); // 0x6cb Func
	GetPosition(var_102_cvector); // 0x6cd ObjFunc
	var_103_cvector = var_102_cvector - var_101_cvector; // 0x6cf Sub2
	var_96_float = var_103_cvector | var_103_cvector; // 0x6d0 Or2
	return 6; // 0x6d1 Return
}


func_2251(var_34_string, var_35_int, var_36_int, var_37_int)
{
	var_38_int = 0; var_39_bool = 0; var_40_int = 0; var_41_bool = 0; // 0x8cb PushV
	var_42_bool = 0; var_43_int = 0; var_44_int = 0; // 0x8cc PushV
	var_43_int = var_35_int; // 0x8cd Mov
	var_44_int = var_36_int; // 0x8ce Mov
	func_2341(var_42_bool, var_43_int, var_44_int); // 0x8cf NEW_2
	if(var_42_bool == 0) goto Label_2265; // 0x8d1 JumpB
	irand(var_40_int, var_37_int); // 0x8d2 Func
	var_47_int = 0; // 0x8d4 PushI
	var_48_int = 1; // 0x8d5 PushI
	var_49_int = var_40_int + var_48_int; // 0x8d6 Add
	AddItem(var_41_bool, var_34_string, var_47_int, var_49_int); // 0x8d7 Func
	
Label_2265:
	return 4; // 0x8d9 Return
}


func_1746(var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_bool = 0; // 0x6d2 PushV
	IsPlayerActor(var_20_object, var_22_bool); // 0x6d3 Func
	var_19_bool = var_22_bool; // 0x6d5 Mov
	return 2; // 0x6d6 Return
}


func_1751(var_31_bool, var_32_object, var_33_string)
{
	var_34_bool = 0; var_35_bool = 0; // 0x6d7 PushV
	var_36_string = "HasProperty"; // 0x6d8 PushS
	var_37_int = 2; // 0x6d9 PushI
	var_38_bool = IsFuncExist(var_32_object, var_36_string, var_37_int); // 0x6da FuncExist
	var_39_bool = var_38_bool == 0; // 0x6db Not
	if(var_39_bool == 0) goto Label_1759; // 0x6dc JumpB
	var_31_bool = 0; // 0x6dd MovB
	return 2; // 0x6de Return
	
Label_1759:
	HasProperty(var_33_string, var_35_bool); // 0x6df ObjFunc
	var_31_bool = var_35_bool; // 0x6e1 Mov
	return 2; // 0x6e2 Return
}


func_2266(var_188_string)
{
	var_189_bool = 0; var_190_int = 0; var_191_bool = 0; var_192_int = 0; var_193_bool = 0; var_194_float = 0; var_195_cvector = CVector(0,0,0); var_196_cvector = CVector(0,0,0); var_197_bool = 0; var_198_int = 0; var_199_bool = 0; var_200_int = 0; var_201_bool = 0; var_202_float = 0; var_203_cvector = CVector(0,0,0); var_204_cvector = CVector(0,0,0); // 0x8da PushV
	IsExisting3DSound(var_197_bool, var_188_string); // 0x8db Func
	var_205_bool = var_197_bool == 0; // 0x8dd Not
	if(var_205_bool == 0) goto Label_2291; // 0x8de JumpB
	var_198_int = 0; // 0x8df MovI
	
Label_2272:
	var_206_int = 1; // 0x8e0 PushI
	var_207_int = var_198_int + var_206_int; // 0x8e1 Add
	var_208_int = var_188_string + var_207_int; // 0x8e2 Add
	IsExisting3DSound(var_199_bool, var_208_int); // 0x8e3 Func
	var_209_bool = var_199_bool == 0; // 0x8e5 Not
	if(var_209_bool == 0) goto Label_2280; // 0x8e6 JumpB
	goto Label_2283; // 0x8e7 Jump
	
Label_2283:
	var_210_bool = var_198_int == 0; // 0x8eb Not
	if(var_210_bool == 0) goto Label_2286; // 0x8ec JumpB
	return 16; // 0x8ed Return
	
Label_2286:
	irand(var_200_int, var_198_int); // 0x8ee Func
	var_211_int = 1; // 0x8f0 PushI
	var_212_int = var_200_int + var_211_int; // 0x8f1 Add
	var_188_string = var_188_string + var_212_int; // 0x8f2 Add2
	
Label_2291:
	Is3DSoundLoaded(var_201_bool, var_188_string); // 0x8f3 Func
	var_213_bool = var_201_bool; // 0x8f5 Push
	if(var_213_bool == 0) goto Label_2306; // 0x8f6 JumpB
	GetEyesHeight(var_202_float); // 0x8f7 Func
	GetDirection(var_203_cvector); // 0x8f9 Func
	var_214_int = 50; // 0x8fb PushI
	var_204_cvector = var_203_cvector * var_214_int; // 0x8fc Mult2
	var_215_float = GetByIndex(var_204_cvector, 1); // 0x8fd PushE
	var_215_float = var_215_float + var_202_float; // 0x8fe Add2
	SetByIndex(var_204_cvector, 1) = var_215_float; // 0x8ff PopE
	PlayGlobalSound(var_188_string, var_204_cvector); // 0x900 Func
	
Label_2306:
	return 16; // 0x902 Return
	
Label_2280:
	var_216_int = 1; // 0x8e8 PushI
	var_198_int = var_198_int + var_216_int; // 0x8e9 Add2
	goto Label_2272; // 0x8ea Jump
}


func_2786(var_60_int, var_61_string)
{
	var_62_int = 0; var_63_int = 0; // 0xae2 PushV
	GetInvItemByName(var_63_int, var_61_string); // 0xae3 Func
	var_60_int = var_63_int; // 0xae5 Mov
	return 2; // 0xae6 Return
}


func_1763(var_497_float, var_498_object, var_499_float, var_500_int)
{
	var_504_int = 0; var_505_string = ""; var_506_int = 0; var_507_float = 0; var_508_float = 0; var_509_float = 0; var_510_int = 0; var_511_string = ""; var_512_int = 0; var_513_float = 0; var_514_float = 0; var_515_float = 0; // 0x6e3 PushV
	var_516_bool = 0; var_517_object = Obj(); var_518_string = ""; // 0x6e4 PushV
	var_517_object = var_498_object; // 0x6e5 Mov
	var_518_string = "health"; // 0x6e6 MovS
	func_1751(var_516_bool, var_517_object, var_518_string); // 0x6e7 NEW_2
	var_519_bool = var_516_bool == 0; // 0x6e9 Not
	if(var_519_bool == 0) goto Label_1773; // 0x6ea JumpB
	var_497_float = 0.0; // 0x6eb MovF
	return 12; // 0x6ec Return
	
Label_1773:
	var_520_bool = 0; var_521_object = Obj(); var_522_string = ""; // 0x6ed PushV
	var_521_object = var_498_object; // 0x6ee Mov
	var_522_string = "armor"; // 0x6ef MovS
	func_1751(var_520_bool, var_521_object, var_522_string); // 0x6f0 NEW_2
	var_523_bool = var_520_bool == 0; // 0x6f2 Not
	if(var_523_bool == 0) goto Label_1782; // 0x6f3 JumpB
	var_510_int = 0; // 0x6f4 MovI
	goto Label_1785; // 0x6f5 Jump
	
Label_1785:
	var_524_string = "armor_"; // 0x6f9 PushS
	var_525_string = ""; var_526_int = 0; // 0x6fa PushV
	var_526_int = var_500_int; // 0x6fb Mov
	func_1717(var_525_string, var_526_int); // 0x6fc NEW_2
	var_511_string = var_524_string + var_525_string; // 0x6fe Add2
	var_531_bool = 0; var_532_object = Obj(); var_533_string = ""; // 0x6ff PushV
	var_532_object = var_498_object; // 0x700 Mov
	var_533_string = var_511_string; // 0x701 Mov
	func_1751(var_531_bool, var_532_object, var_533_string); // 0x702 NEW_2
	var_534_bool = var_531_bool == 0; // 0x704 Not
	if(var_534_bool == 0) goto Label_1800; // 0x705 JumpB
	var_512_int = 0; // 0x706 MovI
	goto Label_1802; // 0x707 Jump
	
Label_1802:
	var_535_float = 0; var_536_float = 0; var_537_float = 0; // 0x70a PushV
	var_538_int = var_510_int + var_512_int; // 0x70b Add
	var_539_float = 100.0; // 0x70c PushF
	var_536_float = var_538_int / var_538_int; // 0x70d Div2
	var_537_float = 1; // 0x70e MovI
	func_2323(var_535_float, var_536_float, var_537_float); // 0x70f NEW_2
	var_513_float = var_535_float; // 0x710 Mov
	var_541_string = "health"; // 0x712 PushS
	GetProperty(var_541_string, var_514_float); // 0x713 ObjFunc
	var_542_int = 1; // 0x715 PushI
	var_543_int = var_542_int - var_513_float; // 0x716 Sub
	var_515_float = var_499_float * var_543_int; // 0x717 Mult2
	var_544_string = "health"; // 0x718 PushS
	var_545_float = 0; var_546_float = 0; var_547_float = 0; var_548_float = 0; // 0x719 PushV
	var_546_float = var_514_float - var_515_float; // 0x71a Sub2
	var_547_float = 0; // 0x71b MovI
	var_548_float = 1; // 0x71c MovI
	func_2330(var_545_float, var_546_float, var_547_float, var_548_float); // 0x71d NEW_2
	SetProperty(var_544_string, var_545_float); // 0x71f ObjFunc
	var_551_bool = 0; var_552_object = Obj(); // 0x721 PushV
	var_552_object = var_498_object; // 0x722 Mov
	func_1746(var_551_bool, var_552_object); // 0x723 NEW_2
	if(var_551_bool == 0) goto Label_1834; // 0x725 JumpB
	var_553_float = 0; // 0x726 PushV
	var_553_float = -var_515_float; // 0x727 Neg2
	func_2352(var_553_float); // 0x728 NEW_2
	
Label_1834:
	var_497_float = var_515_float; // 0x72a Mov
	return 12; // 0x72b Return
	
Label_1800:
	GetProperty(var_511_string, var_512_int); // 0x708 ObjFunc
	
Label_1782:
	var_561_string = "armor"; // 0x6f6 PushS
	GetProperty(var_561_string, var_510_int); // 0x6f7 ObjFunc
}


func_2791(var_26_bool, var_27_object, var_28_bool)
{
	var_29_string = ""; var_30_string = ""; // 0xae7 PushV
	var_31_bool = 0; var_32_object = Obj(); var_33_string = ""; // 0xae8 PushV
	var_32_object = var_27_object; // 0xae9 Mov
	var_33_string = "class"; // 0xaea MovS
	func_1751(var_31_bool, var_32_object, var_33_string); // 0xaeb NEW_2
	var_40_bool = var_31_bool == 0; // 0xaed Not
	if(var_40_bool == 0) goto Label_2801; // 0xaee JumpB
	var_26_bool = 0; // 0xaef MovB
	return 2; // 0xaf0 Return
	
Label_2801:
	var_41_string = "class"; // 0xaf1 PushS
	GetProperty(var_41_string, var_30_string); // 0xaf2 ObjFunc
	var_42_bool = 0; // 0xaf4 PushV
	var_42_bool = 1; // 0xaf5 MovB
	var_43_bool = 0; // 0xaf6 PushV
	var_43_bool = 1; // 0xaf7 MovB
	var_44_bool = 0; // 0xaf8 PushV
	var_44_bool = 1; // 0xaf9 MovB
	var_45_bool = 0; // 0xafa PushV
	var_45_bool = 1; // 0xafb MovB
	var_46_bool = 0; // 0xafc PushV
	var_46_bool = 1; // 0xafd MovB
	var_47_bool = 0; // 0xafe PushV
	var_47_bool = 1; // 0xaff MovB
	var_48_bool = 0; // 0xb00 PushV
	var_48_bool = 1; // 0xb01 MovB
	var_49_bool = 0; // 0xb02 PushV
	var_49_bool = 1; // 0xb03 MovB
	var_50_bool = 0; // 0xb04 PushV
	var_50_bool = 1; // 0xb05 MovB
	var_51_bool = 0; // 0xb06 PushV
	var_51_bool = 1; // 0xb07 MovB
	var_52_string = "patrol"; // 0xb08 PushS
	var_53_bool = var_30_string == var_52_string; // 0xb09 Eq
	if(var_53_bool == 0) goto Label_2831; // 0xb0a JumpB
	var_54_string = "sanitar"; // 0xb0b PushS
	var_55_bool = var_30_string == var_54_string; // 0xb0c Eq
	if(var_55_bool == 0) goto Label_2831; // 0xb0d JumpB
	var_51_bool = 0; // 0xb0e MovB
	
Label_2831:
	if(var_51_bool == 0) goto Label_2836; // 0xb0f JumpB
	var_56_string = "soldier"; // 0xb10 PushS
	var_57_bool = var_30_string == var_56_string; // 0xb11 Eq
	if(var_57_bool == 0) goto Label_2836; // 0xb12 JumpB
	var_50_bool = 0; // 0xb13 MovB
	
Label_2836:
	if(var_50_bool == 0) goto Label_2841; // 0xb14 JumpB
	var_58_string = "woman"; // 0xb15 PushS
	var_59_bool = var_30_string == var_58_string; // 0xb16 Eq
	if(var_59_bool == 0) goto Label_2841; // 0xb17 JumpB
	var_49_bool = 0; // 0xb18 MovB
	
Label_2841:
	if(var_49_bool == 0) goto Label_2846; // 0xb19 JumpB
	var_60_string = "wasted_girl"; // 0xb1a PushS
	var_61_bool = var_30_string == var_60_string; // 0xb1b Eq
	if(var_61_bool == 0) goto Label_2846; // 0xb1c JumpB
	var_48_bool = 0; // 0xb1d MovB
	
Label_2846:
	if(var_48_bool == 0) goto Label_2851; // 0xb1e JumpB
	var_62_string = "vaxxabitka"; // 0xb1f PushS
	var_63_bool = var_30_string == var_62_string; // 0xb20 Eq
	if(var_63_bool == 0) goto Label_2851; // 0xb21 JumpB
	var_47_bool = 0; // 0xb22 MovB
	
Label_2851:
	if(var_47_bool == 0) goto Label_2856; // 0xb23 JumpB
	var_64_string = "vaxxabit"; // 0xb24 PushS
	var_65_bool = var_30_string == var_64_string; // 0xb25 Eq
	if(var_65_bool == 0) goto Label_2856; // 0xb26 JumpB
	var_46_bool = 0; // 0xb27 MovB
	
Label_2856:
	if(var_46_bool == 0) goto Label_2861; // 0xb28 JumpB
	var_66_string = "little_girl"; // 0xb29 PushS
	var_67_bool = var_30_string == var_66_string; // 0xb2a Eq
	if(var_67_bool == 0) goto Label_2861; // 0xb2b JumpB
	var_45_bool = 0; // 0xb2c MovB
	
Label_2861:
	if(var_45_bool == 0) goto Label_2866; // 0xb2d JumpB
	var_68_string = "girl"; // 0xb2e PushS
	var_69_bool = var_30_string == var_68_string; // 0xb2f Eq
	if(var_69_bool == 0) goto Label_2866; // 0xb30 JumpB
	var_44_bool = 0; // 0xb31 MovB
	
Label_2866:
	if(var_44_bool == 0) goto Label_2871; // 0xb32 JumpB
	var_70_string = "dohodyaga"; // 0xb33 PushS
	var_71_bool = var_30_string == var_70_string; // 0xb34 Eq
	if(var_71_bool == 0) goto Label_2871; // 0xb35 JumpB
	var_43_bool = 0; // 0xb36 MovB
	
Label_2871:
	if(var_43_bool == 0) goto Label_2876; // 0xb37 JumpB
	var_72_string = "nudegirl"; // 0xb38 PushS
	var_73_bool = var_30_string == var_72_string; // 0xb39 Eq
	if(var_73_bool == 0) goto Label_2876; // 0xb3a JumpB
	var_42_bool = 0; // 0xb3b MovB
	
Label_2876:
	if(var_42_bool == 0) goto Label_2879; // 0xb3c JumpB
	var_26_bool = 1; // 0xb3d MovB
	return 2; // 0xb3e Return
	
Label_2879:
	var_74_bool = var_28_bool; // 0xb3f Push
	if(var_74_bool == 0) goto Label_2883; // 0xb40 JumpB
	var_26_bool = 0; // 0xb41 MovB
	return 2; // 0xb42 Return
	
Label_2883:
	var_26_bool = 1; // 0xb43 MovB
	var_75_bool = 0; // 0xb44 PushV
	var_75_bool = 1; // 0xb45 MovB
	var_76_bool = 0; // 0xb46 PushV
	var_76_bool = 1; // 0xb47 MovB
	var_77_bool = 0; // 0xb48 PushV
	var_77_bool = 1; // 0xb49 MovB
	var_78_bool = 0; // 0xb4a PushV
	var_78_bool = 1; // 0xb4b MovB
	var_79_bool = 0; // 0xb4c PushV
	var_79_bool = 1; // 0xb4d MovB
	var_80_string = "worker"; // 0xb4e PushS
	var_81_bool = var_30_string == var_80_string; // 0xb4f Eq
	if(var_81_bool == 0) goto Label_2901; // 0xb50 JumpB
	var_82_string = "butcher"; // 0xb51 PushS
	var_83_bool = var_30_string == var_82_string; // 0xb52 Eq
	if(var_83_bool == 0) goto Label_2901; // 0xb53 JumpB
	var_79_bool = 0; // 0xb54 MovB
	
Label_2901:
	if(var_79_bool == 0) goto Label_2906; // 0xb55 JumpB
	var_84_string = "boy"; // 0xb56 PushS
	var_85_bool = var_30_string == var_84_string; // 0xb57 Eq
	if(var_85_bool == 0) goto Label_2906; // 0xb58 JumpB
	var_78_bool = 0; // 0xb59 MovB
	
Label_2906:
	if(var_78_bool == 0) goto Label_2911; // 0xb5a JumpB
	var_86_string = "unosha"; // 0xb5b PushS
	var_87_bool = var_30_string == var_86_string; // 0xb5c Eq
	if(var_87_bool == 0) goto Label_2911; // 0xb5d JumpB
	var_77_bool = 0; // 0xb5e MovB
	
Label_2911:
	if(var_77_bool == 0) goto Label_2916; // 0xb5f JumpB
	var_88_string = "wasted_male"; // 0xb60 PushS
	var_89_bool = var_30_string == var_88_string; // 0xb61 Eq
	if(var_89_bool == 0) goto Label_2916; // 0xb62 JumpB
	var_76_bool = 0; // 0xb63 MovB
	
Label_2916:
	if(var_76_bool == 0) goto Label_2921; // 0xb64 JumpB
	var_90_string = "alkash"; // 0xb65 PushS
	var_91_bool = var_30_string == var_90_string; // 0xb66 Eq
	if(var_91_bool == 0) goto Label_2921; // 0xb67 JumpB
	var_75_bool = 0; // 0xb68 MovB
	
Label_2921:
	if(var_75_bool == 0) goto Label_2926; // 0xb69 JumpB
	var_92_string = "morlok"; // 0xb6a PushS
	var_93_bool = var_30_string == var_92_string; // 0xb6b Eq
	if(var_93_bool == 0) goto Label_2926; // 0xb6c JumpB
	var_26_bool = 0; // 0xb6d MovB
	
Label_2926:
	return 2; // 0xb6e Return
}


func_2307(var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj(); // 0x903 PushV
	self(var_25_object); // 0x904 Func
	var_23_object = var_25_object; // 0x906 Mov
	return 2; // 0x907 Return
}


func_2313(var_49_cvector, var_50_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x909 PushV
	var_59_int = var_50_cvector | var_50_cvector; // 0x90a Or
	var_58_float = sqrt(var_59_int); // 0x90b Sqrt2
	var_60_float = 0.0; // 0x90c PushF
	var_61_bool = var_58_float < var_60_float; // 0x90d LT
	if(var_61_bool == 0) goto Label_2321; // 0x90e JumpB
	var_49_cvector = CVector(0.0, 0.0, 0.0); // 0x90f MovV
	return 2; // 0x910 Return
	
Label_2321:
	var_49_cvector = var_50_cvector / var_50_cvector; // 0x911 Div2
	return 2; // 0x912 Return
}


func_2323(var_535_float, var_536_float, var_537_float)
{
	var_540_bool = var_536_float < var_537_float; // 0x914 LT
	if(var_540_bool == 0) goto Label_2328; // 0x915 JumpB
	var_535_float = var_536_float; // 0x916 Mov
	goto Label_2329; // 0x917 Jump
	
Label_2329:
	return 0; // 0x919 Return
	
Label_2328:
	var_535_float = var_537_float; // 0x918 Mov
}


func_2330(var_545_float, var_546_float, var_547_float, var_548_float)
{
	var_549_bool = var_546_float < var_547_float; // 0x91b LT
	if(var_549_bool == 0) goto Label_2335; // 0x91c JumpB
	var_545_float = var_547_float; // 0x91d Mov
	return 0; // 0x91e Return
	
Label_2335:
	var_550_bool = var_546_float > var_548_float; // 0x91f GT
	if(var_550_bool == 0) goto Label_2339; // 0x920 JumpB
	var_545_float = var_548_float; // 0x921 Mov
	return 0; // 0x922 Return
	
Label_2339:
	var_545_float = var_546_float; // 0x923 Mov
	return 0; // 0x924 Return
}


func_2341(var_42_bool, var_43_int, var_44_int)
{
	var_45_int = 0; var_46_int = 0; // 0x925 PushV
	irand(var_46_int, var_44_int); // 0x926 Func
	var_42_bool = var_46_int < var_43_int; // 0x928 LT2
	return 2; // 0x929 Return
}


func_810(var_0_bool, var_1_object, var_25_int)
{
	var_26_int = 0; // 0x32b PushI
	var_27_bool = var_25_int != var_26_int; // 0x32c Neq
	if(var_27_bool == 0) goto Label_815; // 0x32d JumpB
	return 0; // 0x32e Return
	
Label_815:
	var_28_bool = 0; var_29_object = Obj(); // 0x32f PushV
	var_29_object = var_1_object; // 0x330 MovT
	func_848(var_28_bool, var_29_object); // 0x331 NEW_2
	var_64_bool = var_28_bool == 0; // 0x333 Not
	if(var_64_bool == 0) goto Label_822; // 0x334 JumpB
	var_0_bool = 1; // 0x335 TMovB
	
Label_822:
	var_65_int = 0; // 0x336 PushI
	KillTimer(var_65_int); // 0x337 Func
	Stop(); // 0x339 Func
	return 0; // 0x33b Return
}


func_2346(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); // 0x92a PushV
	CreateObjectSet(var_20_object); // 0x92b Func
	var_18_object = var_20_object; // 0x92d Mov
	return 2; // 0x92e Return
}


func_1836(var_45_bool)
{
	var_47_bool = 0; var_48_bool = 0; // 0x72c PushV
	IsDead(var_48_bool); // 0x72d ObjFunc
	var_45_bool = var_48_bool; // 0x72f Mov
	return 2; // 0x730 Return
}


func_1327(var_588_bool, var_589_float)
{
	var_590_float = 0; var_591_bool = 0; var_592_float = 0; var_593_bool = 0; // 0x52f PushV
	rand(var_592_float); // 0x530 Func
	var_594_bool = var_592_float < var_589_float; // 0x532 LT
	if(var_594_bool == 0) goto Label_1347; // 0x533 JumpB
	
Label_1332:
	IsAnimationPlaying(var_593_bool); // 0x534 Func
	var_595_bool = var_593_bool == 0; // 0x536 Not
	if(var_595_bool == 0) goto Label_1337; // 0x537 JumpB
	goto Label_1346; // 0x538 Jump
	
Label_1346:
	goto Label_1352; // 0x542 Jump
	
Label_1352:
	var_588_bool = 0; // 0x548 MovB
	return 4; // 0x549 Return
	
Label_1337:
	var_596_bool = 0; // 0x539 PushV
	func_1425(var_596_bool); // 0x53a NEW_2
	if(var_596_bool == 0) goto Label_1343; // 0x53c JumpB
	var_588_bool = 1; // 0x53d MovB
	return 4; // 0x53e Return
	
Label_1343:
	sync(); // 0x53f Func
	goto Label_1332; // 0x541 Jump
	
Label_1347:
	WaitForAnimEnd(); // 0x543 Func
	func_1529(var_593_bool); // 0x546 NEW_2
}


func_2352(var_553_float)
{
	var_554_object = Obj(); var_555_object = Obj(); // 0x930 PushV
	CreateFloatVector(var_555_object); // 0x931 Func
	add(var_553_float); // 0x933 ObjFunc
	var_556_int = 0; // 0x935 PushI
	var_557_bool = var_553_float < var_556_int; // 0x936 LT
	if(var_557_bool == 0) goto Label_2364; // 0x937 JumpB
	var_558_float = 0.7; // 0x938 PushF
	var_559_int = 500; // 0x939 PushI
	RumblePlay(var_558_float, var_559_int); // 0x93a Func
	
Label_2364:
	var_560_int = 15; // 0x93c PushI
	SendWorldWndMessage(var_560_int, var_555_object); // 0x93d Func
	return 2; // 0x93f Return
}


func_1841(var_34_bool, var_35_object)
{
	var_36_object = Obj(); var_37_object = Obj(); var_38_object = Obj(); var_39_object = Obj(); // 0x731 PushV
	var_40_bool = var_35_object == 0; // 0x732 NullEq
	if(var_40_bool == 0) goto Label_1846; // 0x733 JumpB
	var_34_bool = 0; // 0x734 MovB
	return 4; // 0x735 Return
	
Label_1846:
	var_41_bool = 0; // 0x736 PushV
	var_41_bool = 0; // 0x737 MovB
	var_42_string = "IsDead"; // 0x738 PushS
	var_43_int = 1; // 0x739 PushI
	var_44_bool = IsFuncExist(var_35_object, var_42_string, var_43_int); // 0x73a FuncExist
	if(var_44_bool == 0) goto Label_1858; // 0x73b JumpB
	var_45_bool = 0; var_46_object = Obj(); // 0x73c PushV
	var_46_object = var_35_object; // 0x73d Mov
	func_1836(var_46_object); // 0x73e NEW_2
	if(var_45_bool == 0) goto Label_1858; // 0x740 JumpB
	var_41_bool = 1; // 0x741 MovB
	
Label_1858:
	if(var_41_bool == 0) goto Label_1861; // 0x742 JumpB
	var_34_bool = 0; // 0x743 MovB
	return 4; // 0x744 Return
	
Label_1861:
	GetScene(var_38_object); // 0x745 Func
	var_49_bool = var_38_object == 0; // 0x747 NullEq
	if(var_49_bool == 0) goto Label_1867; // 0x748 JumpB
	var_34_bool = 0; // 0x749 MovB
	return 4; // 0x74a Return
	
Label_1867:
	GetScene(var_39_object); // 0x74b ObjFunc
	var_50_bool = var_38_object != var_39_object; // 0x74d Neq
	if(var_50_bool == 0) goto Label_1873; // 0x74e JumpB
	var_34_bool = 0; // 0x74f MovB
	return 4; // 0x750 Return
	
Label_1873:
	var_34_bool = 1; // 0x751 MovB
	return 4; // 0x752 Return
}


func_832(var_0_bool)
{
	var_0_bool = 1; // 0x340 TMovB
	var_21_int = 0; // 0x341 PushI
	KillTimer(var_21_int); // 0x342 Func
	Stop(); // 0x344 Func
	return 0; // 0x346 Return
}


func_2369(var_28_int)
{
	var_29_float = 0; var_30_float = 0; // 0x941 PushV
	GetGameTime(var_30_float); // 0x942 Func
	var_31_int = 1; // 0x944 PushI
	var_32_int = 0; // 0x945 PushV
	var_33_int = 24; // 0x946 PushI
	var_32_int = var_30_float / var_30_float; // 0x947 Div2
	var_28_int = var_31_int + var_32_int; // 0x948 Add2
	return 2; // 0x949 Return
}


func_2378(var_20_object)
{
	var_21_bool = 0; var_22_bool = 0; // 0x94a PushV
	IsPlayerActor(var_20_object, var_22_bool); // 0x94b Func
	var_23_bool = var_22_bool; // 0x94d Push
	if(var_23_bool == 0) goto Label_2386; // 0x94e JumpB
	var_24_string = "attack"; // 0x94f PushS
	PlayGlobalMusic(var_24_string); // 0x950 Func
	
Label_2386:
	return 2; // 0x952 Return
}


func_1354(var_0_bool, var_385_bool, var_386_float)
{
	var_387_bool = 0; var_388_cvector = CVector(0,0,0); var_389_cvector = CVector(0,0,0); var_390_cvector = CVector(0,0,0); var_391_float = 0; var_392_bool = 0; var_393_cvector = CVector(0,0,0); var_394_cvector = CVector(0,0,0); var_395_cvector = CVector(0,0,0); var_396_float = 0; // 0x54a PushV
	
Label_1355:
	IsAnimationPlaying(var_392_bool); // 0x54b Func
	var_397_bool = var_392_bool == 0; // 0x54d Not
	if(var_397_bool == 0) goto Label_1360; // 0x54e JumpB
	goto Label_1392; // 0x54f Jump
	
Label_1392:
	func_1529(var_396_float); // 0x571 NEW_2
	var_385_bool = 0; // 0x573 MovB
	return 10; // 0x574 Return
	
Label_1360:
	var_398_bool = 0; // 0x550 PushV
	func_1425(var_398_bool); // 0x551 NEW_2
	if(var_398_bool == 0) goto Label_1366; // 0x553 JumpB
	var_385_bool = 1; // 0x554 MovB
	return 10; // 0x555 Return
	
Label_1366:
	var_441_bool = 0; var_442_object = Obj(); // 0x556 PushV
	var_442_object = var_0_bool; // 0x557 MovT
	func_1877(var_441_bool, var_442_object); // 0x558 NEW_2
	var_443_bool = var_441_bool == 0; // 0x55a Not
	if(var_443_bool == 0) goto Label_1374; // 0x55b JumpB
	var_385_bool = 0; // 0x55c MovB
	return 10; // 0x55d Return
	
Label_1374:
	GetPFPosition(var_393_cvector); // 0x55e TObjFunc
	GetPFPosition(var_394_cvector); // 0x560 Func
	var_395_cvector = var_393_cvector - var_394_cvector; // 0x562 Sub2
	var_396_float = var_395_cvector | var_395_cvector; // 0x563 Or2
	var_444_float = var_386_float * var_386_float; // 0x564 Mult
	var_445_bool = var_396_float < var_444_float; // 0x565 LT
	if(var_445_bool == 0) goto Label_1389; // 0x566 JumpB
	var_446_bool = 0; var_447_float = 0; // 0x567 PushV
	var_447_float = var_386_float; // 0x568 Mov
	func_1190(var_396_float, var_446_bool, var_447_float); // 0x569 NEW_2
	var_385_bool = 1; // 0x56b MovB
	return 10; // 0x56c Return
	
Label_1389:
	sync(); // 0x56d Func
	goto Label_1355; // 0x56f Jump
}


func_848(var_28_bool, var_29_object)
{
	var_30_bool = 0; var_31_object = Obj(); // 0x351 PushV
	var_31_object = var_29_object; // 0x352 Mov
	func_1877(var_30_bool, var_31_object); // 0x353 NEW_2
	var_28_bool = var_30_bool; // 0x354 Mov
	return 0; // 0x356 Return
}


func_2387()
{
	var_458_object = Obj(); var_459_object = Obj(); // 0x953 PushV
	GetScene(var_459_object); // 0x954 Func
	var_460_string = "battle"; // 0x956 PushS
	var_461_object = Obj(); // 0x957 PushV
	func_2307(var_461_object); // 0x958 NEW_2
	BroadcastMessage(var_460_string, var_461_object, var_459_object); // 0x95a Func
	return 2; // 0x95c Return
}


func_1877(var_30_bool, var_31_object)
{
	var_32_int = 0; var_33_int = 0; // 0x755 PushV
	var_34_bool = 0; var_35_object = Obj(); // 0x756 PushV
	var_35_object = var_31_object; // 0x757 Mov
	func_1841(var_34_bool, var_35_object); // 0x758 NEW_2
	var_51_bool = var_34_bool == 0; // 0x75a Not
	if(var_51_bool == 0) goto Label_1886; // 0x75b JumpB
	var_30_bool = 0; // 0x75c MovB
	return 2; // 0x75d Return
	
Label_1886:
	var_52_bool = 0; var_53_object = Obj(); var_54_string = ""; // 0x75e PushV
	var_53_object = var_31_object; // 0x75f Mov
	var_54_string = "noaccess"; // 0x760 MovS
	func_1751(var_52_bool, var_53_object, var_54_string); // 0x761 NEW_2
	var_61_bool = var_52_bool == 0; // 0x763 Not
	if(var_61_bool == 0) goto Label_1895; // 0x764 JumpB
	var_30_bool = 1; // 0x765 MovB
	return 2; // 0x766 Return
	
Label_1895:
	var_62_string = "noaccess"; // 0x767 PushS
	GetProperty(var_62_string, var_33_int); // 0x768 ObjFunc
	var_63_int = 0; // 0x76a PushI
	var_30_bool = var_33_int == var_63_int; // 0x76b Eq2
	return 2; // 0x76c Return
}


func_342(var_0_bool, var_1_object)
{
	var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_bool = 0; var_83_object = Obj(); var_84_bool = 0; var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_bool = 0; var_89_object = Obj(); var_90_bool = 0; // 0x156 PushV
	var_0_bool = 0; // 0x157 TMovB
	var_1_object = 0; // 0x158 TMovB
	var_91_float = 0.5; // 0x159 PushF
	rand(var_85_float, var_91_float); // 0x15a Func
	Sleep(var_85_float); // 0x15c Func
	
Label_350:
	var_92_bool = var_0_bool == 0; // 0x15e Not
	if(var_92_bool == 0) goto Label_400; // 0x15f JumpB
	var_93_bool = var_1_object == 0; // 0x160 Not
	if(var_93_bool == 0) goto Label_369; // 0x161 JumpB
	
Label_354:
	GetPosition(var_87_cvector); // 0x162 Func
	var_94_float = 0; // 0x164 PushV
	func_401(var_94_float); // 0x165 NEW_2
	GetRandomPFPointInCircle(var_86_cvector, var_87_cvector, var_94_float, var_88_bool); // 0x167 Func
	var_97_bool = var_88_bool; // 0x169 Push
	if(var_97_bool == 0) goto Label_364; // 0x16a JumpB
	goto Label_368; // 0x16b Jump
	
Label_368:
	goto Label_370; // 0x170 Jump
	
Label_370:
	var_98_object = Obj(); var_99_cvector = CVector(0,0,0); // 0x172 PushV
	var_99_cvector = var_86_cvector; // 0x173 Mov
	func_431(var_98_object, var_99_cvector); // 0x174 NEW_2
	var_89_object = var_98_object; // 0x175 Mov
	var_102_bool = var_89_object != 0; // 0x177 NullNeq
	if(var_102_bool == 0) goto Label_395; // 0x178 JumpB
	RotatePath(var_89_object, var_90_bool); // 0x179 Func
	var_103_bool = var_90_bool; // 0x17b Push
	if(var_103_bool == 0) goto Label_394; // 0x17c JumpB
	var_104_bool = 0; // 0x17d PushV
	func_429(var_104_bool); // 0x17e NEW_2
	FollowPath(var_89_object, var_104_bool, var_90_bool); // 0x180 Func
	var_89_object = 0; // 0x182 SetNull
	var_105_bool = var_90_bool; // 0x183 Push
	if(var_105_bool == 0) goto Label_394; // 0x184 JumpB
	TaskCall(4); // 0x186 TaskCall
	func_503(); // 0x187 NEW_2
	TaskReturn(); // 0x188 TaskReturn
	
Label_394:
	goto Label_398; // 0x18a Jump
	
Label_398:
	var_89_object = 0; // 0x18e SetNull
	goto Label_350; // 0x18f Jump
	
Label_395:
	var_159_int = 1; // 0x18b PushI
	Sleep(var_159_int); // 0x18c Func
	
Label_364:
	var_160_int = 1; // 0x16c PushI
	Sleep(var_160_int); // 0x16d Func
	goto Label_354; // 0x16f Jump
	
Label_369:
	var_1_object = 0; // 0x171 TMovB
	
Label_400:
	return 12; // 0x190 Return
}


func_855(var_297_string)
{
	var_297_string = "walk"; // 0x357 MovS
	return 0; // 0x358 Return
}


func_857(var_298_string)
{
	var_298_string = "run"; // 0x359 MovS
	return 0; // 0x35a Return
}


func_859(var_153_object, var_154_bool)
{
	var_161_object = Obj(); var_162_bool = 0; var_163_float = 0; // 0x35c PushV
	var_161_object = var_153_object; // 0x35d Mov
	var_162_bool = var_154_bool; // 0x35e Mov
	var_163_float = 180.0; // 0x35f MovF
	func_887(var_158_bool, var_159_float, var_160_int, var_153_object, var_154_bool, var_161_object, var_162_bool, var_163_float); // 0x360 NEW_2
	return 0; // 0x362 Return
}


func_2398(var_130_string, var_131_int)
{
	var_132_string = ""; var_133_string = ""; // 0x95e PushV
	var_133_string = "idle"; // 0x95f MovS
	var_134_int = var_131_int; // 0x960 Push
	if(var_134_int == 0) goto Label_2403; // 0x961 JumpB
	var_133_string = var_133_string + var_131_int; // 0x962 Add2
	
Label_2403:
	var_130_string = var_133_string; // 0x963 Mov
	return 2; // 0x964 Return
}


func_867(var_494_float)
{
	var_494_float = 0.1; // 0x364 MovF
	return 0; // 0x365 Return
}


func_2405(var_124_int)
{
	var_125_int = 0; var_126_bool = 0; var_127_int = 0; var_128_bool = 0; // 0x965 PushV
	var_127_int = 0; // 0x966 MovI
	
Label_2407:
	var_129_string = "all"; // 0x967 PushS
	var_130_string = ""; var_131_int = 0; // 0x968 PushV
	var_131_int = var_127_int; // 0x969 Mov
	func_2398(var_130_string, var_131_int); // 0x96a NEW_2
	HasAnimation(var_128_bool, var_129_string, var_130_string); // 0x96c Func
	var_135_bool = var_128_bool == 0; // 0x96e Not
	if(var_135_bool == 0) goto Label_2417; // 0x96f JumpB
	goto Label_2420; // 0x970 Jump
	
Label_2420:
	var_124_int = var_127_int; // 0x974 Mov
	return 4; // 0x975 Return
	
Label_2417:
	var_136_int = 1; // 0x971 PushI
	var_127_int = var_127_int + var_136_int; // 0x972 Add2
	goto Label_2407; // 0x973 Jump
}


func_870(var_501_int)
{
	var_501_int = 0; // 0x367 MovI
	return 0; // 0x368 Return
}


func_1901(var_34_object)
{
	var_35_bool = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = ""; var_42_bool = 0; var_43_int = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_string = ""; // 0x76d PushV
	var_49_bool = var_34_object == 0; // 0x76e NullEq
	if(var_49_bool == 0) goto Label_1905; // 0x76f JumpB
	return 14; // 0x770 Return
	
Label_1905:
	IsDead(var_42_bool); // 0x771 Func
	var_50_bool = var_42_bool; // 0x773 Push
	if(var_50_bool == 0) goto Label_1910; // 0x774 JumpB
	return 14; // 0x775 Return
	
Label_1910:
	GetSecondaryAnimationType(var_43_int); // 0x776 Func
	var_51_int = 0; // 0x778 PushI
	var_52_bool = var_43_int < var_51_int; // 0x779 LT
	if(var_52_bool == 0) goto Label_1916; // 0x77a JumpB
	return 14; // 0x77b Return
	
Label_1916:
	GetPosition(var_44_cvector); // 0x77c ObjFunc
	GetPosition(var_45_cvector); // 0x77e Func
	GetDirection(var_46_cvector); // 0x780 Func
	var_47_cvector = var_45_cvector - var_44_cvector; // 0x782 Sub2
	var_53_float = GetByIndex(var_47_cvector, 0); // 0x783 PushE
	var_54_float = GetByIndex(var_46_cvector, 0); // 0x784 PushE
	var_55_float = var_53_float * var_54_float; // 0x785 Mult
	var_56_float = GetByIndex(var_47_cvector, 2); // 0x786 PushE
	var_57_float = GetByIndex(var_46_cvector, 2); // 0x787 PushE
	var_58_float = var_56_float * var_57_float; // 0x788 Mult
	var_59_int = var_55_float + var_58_float; // 0x789 Add
	var_60_int = 0; // 0x78a PushI
	var_61_bool = var_59_int >= var_60_int; // 0x78b GE
	if(var_61_bool == 0) goto Label_1935; // 0x78c JumpB
	var_48_string = "fhit"; // 0x78d MovS
	goto Label_1936; // 0x78e Jump
	
Label_1936:
	var_62_string = "hit_react"; // 0x790 PushS
	var_63_string = "1"; // 0x791 PushS
	var_64_int = var_48_string + var_63_string; // 0x792 Add
	var_65_string = "2"; // 0x793 PushS
	var_66_int = var_48_string + var_65_string; // 0x794 Add
	var_67_int = -10; // 0x795 PushI
	FadeSecondaryAnimation(var_62_string, var_64_int, var_66_int, var_67_int); // 0x796 Func
	return 14; // 0x798 Return
	
Label_1935:
	var_48_string = "bhit"; // 0x78f MovS
}


func_2927()
{
	var_17_object = GlobalVars[0]; // 0xb6f PushGE
	var_18_object = Obj(); // 0xb70 PushV
	func_2346(var_18_object); // 0xb71 NEW_2
	var_17_object = var_18_object; // 0xb72 Mov
	GlobalVars[0] = var_17_object; // 0xb74 PopGE
	return 0; // 0xb75 Return
}


func_1397(var_0_bool, var_400_bool)
{
	var_401_cvector = CVector(0,0,0); var_402_cvector = CVector(0,0,0); var_403_cvector = CVector(0,0,0); var_404_float = 0; var_405_float = 0; var_406_cvector = CVector(0,0,0); var_407_cvector = CVector(0,0,0); var_408_cvector = CVector(0,0,0); var_409_float = 0; var_410_float = 0; // 0x575 PushV
	var_411_bool = 0; var_412_object = Obj(); // 0x576 PushV
	var_412_object = var_0_bool; // 0x577 MovT
	func_1877(var_411_bool, var_412_object); // 0x578 NEW_2
	var_413_bool = var_411_bool == 0; // 0x57a Not
	if(var_413_bool == 0) goto Label_1406; // 0x57b JumpB
	var_400_bool = 0; // 0x57c MovB
	return 10; // 0x57d Return
	
Label_1406:
	var_414_bool = 0; // 0x57e PushV
	func_1486(var_410_float, var_414_bool); // 0x57f NEW_2
	if(var_414_bool == 0) goto Label_1423; // 0x581 JumpB
	GetPFPosition(var_406_cvector); // 0x582 TObjFunc
	GetPFPosition(var_407_cvector); // 0x584 Func
	var_408_cvector = var_406_cvector - var_407_cvector; // 0x586 Sub2
	var_409_float = var_408_cvector | var_408_cvector; // 0x587 Or2
	GetAttackDistance(var_410_float); // 0x588 TObjFunc
	var_415_int = 50; // 0x58a PushI
	var_410_float = var_410_float + var_415_int; // 0x58b Add2
	var_416_float = var_410_float * var_410_float; // 0x58c Mult
	var_400_bool = var_409_float <= var_416_float; // 0x58d LE2
	return 10; // 0x58e Return
	
Label_1423:
	var_400_bool = 0; // 0x58f MovB
	return 10; // 0x590 Return
}


func_2422(var_144_int)
{
	var_145_int = 0; var_146_int = 0; // 0x976 PushV
	var_147_string = "branch"; // 0x977 PushS
	GetVariable(var_147_string, var_146_int); // 0x978 Func
	var_148_int = 0; // 0x97a PushI
	var_149_bool = var_146_int == var_148_int; // 0x97b Eq
	if(var_149_bool == 0) goto Label_2432; // 0x97c JumpB
	var_144_int = 1; // 0x97d MovI
	return 2; // 0x97e Return
	
Label_2432:
	var_150_int = 1; // 0x980 PushI
	var_151_bool = var_146_int == var_150_int; // 0x981 Eq
	if(var_151_bool == 0) goto Label_2437; // 0x982 JumpB
	var_144_int = 2; // 0x983 MovI
	return 2; // 0x984 Return
	
Label_2437:
	var_144_int = 3; // 0x985 MovI
	return 2; // 0x986 Return
}


func_887(var_0_bool, var_3_object, var_5_bool, var_161_object, var_162_bool, var_163_float, var_236_bool, var_326_bool)
{
	var_164_float = 0; var_165_cvector = CVector(0,0,0); var_166_cvector = CVector(0,0,0); var_167_bool = 0; var_168_bool = 0; var_169_float = 0; var_170_cvector = CVector(0,0,0); var_171_float = 0; var_172_cvector = CVector(0,0,0); var_173_bool = 0; var_174_float = 0; var_175_float = 0; var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); var_178_bool = 0; var_179_bool = 0; var_180_float = 0; var_181_cvector = CVector(0,0,0); var_182_float = 0; var_183_cvector = CVector(0,0,0); var_184_bool = 0; var_185_float = 0; // 0x377 PushV
	func_1116(var_183_cvector, var_184_bool, var_185_float); // 0x379 NEW_2
	var_5_bool = 0; // 0x37b TMovI
	var_208_string = "@GetAttackDistance"; // 0x37c PushS
	var_209_int = 1; // 0x37d PushI
	var_210_bool = IsFuncExist(var_161_object, var_208_string, var_209_int); // 0x37e FuncExist
	if(var_210_bool == 0) goto Label_901; // 0x37f JumpB
	GetAttackDistance(var_175_float); // 0x380 ObjFunc
	var_211_int = 50; // 0x382 PushI
	var_175_float = var_175_float + var_211_int; // 0x383 Add2
	goto Label_902; // 0x384 Jump
	
Label_902:
	var_212_int = 150; // 0x386 PushI
	var_213_bool = var_175_float >= var_212_int; // 0x387 GE
	if(var_213_bool == 0) goto Label_906; // 0x388 JumpB
	var_175_float = 150; // 0x389 MovI
	
Label_906:
	var_3_object = 0; // 0x38a TMovB
	var_0_bool = var_161_object; // 0x38b TMov
	IsPlayerActor(var_0_bool, var_178_bool); // 0x38c Func
	var_214_bool = var_178_bool; // 0x38e Push
	if(var_214_bool == 0) goto Label_920; // 0x38f JumpB
	var_215_string = "attack"; // 0x390 PushS
	PlayGlobalMusic(var_215_string); // 0x391 Func
	var_216_object = Obj(); // 0x393 PushV
	func_2307(var_216_object); // 0x394 NEW_2
	SendPlayerEnemy(var_161_object, var_216_object); // 0x396 Func
	
Label_920:
	var_217_bool = var_162_bool; // 0x398 Push
	if(var_217_bool == 0) goto Label_924; // 0x399 JumpB
	var_179_bool = 0; // 0x39a MovB
	goto Label_925; // 0x39b Jump
	
Label_925:
	var_218_float = 300.0; // 0x39d PushF
	var_180_float = var_218_float + var_175_float; // 0x39e Add2
	
Label_927:
	var_219_bool = 0; // 0x39f PushV
	var_219_bool = 0; // 0x3a0 MovB
	var_220_bool = 0; var_221_object = Obj(); // 0x3a1 PushV
	var_221_object = var_0_bool; // 0x3a2 MovT
	func_1877(var_220_bool, var_221_object); // 0x3a3 NEW_2
	if(var_220_bool == 0) goto Label_937; // 0x3a5 JumpB
	var_222_bool = var_3_object == 0; // 0x3a6 Not
	if(var_222_bool == 0) goto Label_937; // 0x3a7 JumpB
	var_219_bool = 1; // 0x3a8 MovB
	
Label_937:
	if(var_219_bool == 0) goto Label_1099; // 0x3a9 JumpB
	func_1529(var_185_float); // 0x3ab NEW_2
	GetPFPosition(var_176_cvector); // 0x3ad TObjFunc
	GetPFPosition(var_177_cvector); // 0x3af Func
	var_181_cvector = var_176_cvector - var_177_cvector; // 0x3b1 Sub2
	var_182_float = var_181_cvector | var_181_cvector; // 0x3b2 Or2
	var_228_float = var_180_float * var_180_float; // 0x3b3 Mult
	var_229_bool = var_182_float >= var_228_float; // 0x3b4 GE
	if(var_229_bool == 0) goto Label_965; // 0x3b5 JumpB
	var_230_bool = 0; var_231_object = Obj(); var_232_float = 0; var_233_float = 0; var_234_bool = 0; var_235_bool = 0; // 0x3b6 PushV
	var_231_object = var_0_bool; // 0x3b7 MovT
	var_232_float = var_175_float; // 0x3b8 Mov
	var_233_float = 3000.0; // 0x3b9 MovF
	var_234_bool = 1; // 0x3ba MovB
	var_235_bool = 0; // 0x3bb MovB
	TaskCall(5); // 0x3bc TaskCall
	func_603(var_238_bool, var_230_bool, var_231_object, var_232_float, var_233_float, var_234_bool, var_235_bool); // 0x3bd NEW_2
	TaskReturn(); // 0x3be TaskReturn
	var_311_bool = var_236_bool == 0; // 0x3c0 Not
	if(var_311_bool == 0) goto Label_963; // 0x3c1 JumpB
	goto Label_1099; // 0x3c2 Jump
	
Label_1099:
	WaitForAnimEnd(); // 0x44b Func
	var_312_object = var_3_object; // 0x44d PushT
	if(var_312_object == 0) goto Label_1104; // 0x44e JumpB
	return 22; // 0x44f Return
	
Label_1104:
	var_313_string = "all"; // 0x450 PushS
	var_314_string = "attack_off"; // 0x451 PushS
	PlayAnimation(var_313_string, var_314_string); // 0x452 Func
	WaitForAnimEnd(); // 0x454 Func
	var_315_bool = var_178_bool; // 0x456 Push
	if(var_315_bool == 0) goto Label_1115; // 0x457 JumpB
	var_316_float = 2.0; // 0x458 PushF
	Sleep(var_316_float); // 0x459 Func
	
Label_1115:
	return 22; // 0x45b Return
	
Label_963:
	var_179_bool = 0; // 0x3c3 MovB
	goto Label_1098; // 0x3c4 Jump
	
Label_1098:
	goto Label_927; // 0x44a Jump
	
Label_965:
	var_317_float = var_163_float * var_163_float; // 0x3c5 Mult
	var_318_bool = var_182_float >= var_317_float; // 0x3c6 GE
	if(var_318_bool == 0) goto Label_1090; // 0x3c7 JumpB
	GetPFPosition(var_183_cvector); // 0x3c8 TObjFunc
	CanReachByPF(var_184_bool, var_183_cvector); // 0x3ca Func
	var_319_bool = var_184_bool == 0; // 0x3cc Not
	if(var_319_bool == 0) goto Label_989; // 0x3cd JumpB
	var_320_bool = 0; var_321_object = Obj(); var_322_float = 0; var_323_float = 0; var_324_bool = 0; var_325_bool = 0; // 0x3ce PushV
	var_321_object = var_0_bool; // 0x3cf MovT
	var_322_float = var_175_float; // 0x3d0 Mov
	var_323_float = 3000.0; // 0x3d1 MovF
	var_324_bool = 1; // 0x3d2 MovB
	var_325_bool = 0; // 0x3d3 MovB
	TaskCall(5); // 0x3d4 TaskCall
	func_603(var_328_bool, var_320_bool, var_321_object, var_322_float, var_323_float, var_324_bool, var_325_bool); // 0x3d5 NEW_2
	TaskReturn(); // 0x3d6 TaskReturn
	var_329_bool = var_326_bool == 0; // 0x3d8 Not
	if(var_329_bool == 0) goto Label_987; // 0x3d9 JumpB
	goto Label_1099; // 0x3da Jump
	
Label_987:
	var_179_bool = 0; // 0x3db MovB
	goto Label_927; // 0x3dc Jump
	
Label_989:
	var_330_bool = var_179_bool == 0; // 0x3dd Not
	if(var_330_bool == 0) goto Label_1014; // 0x3de JumpB
	var_331_object = Obj(); // 0x3df PushV
	var_331_object = var_0_bool; // 0x3e0 MovT
	func_2027(); // 0x3e1 NEW_2
	var_340_string = "all"; // 0x3e3 PushS
	var_341_string = "attack_on"; // 0x3e4 PushS
	PlayAnimation(var_340_string, var_341_string); // 0x3e5 Func
	WaitForAnimEnd(); // 0x3e7 Func
	func_1529(var_185_float); // 0x3ea NEW_2
	StopAsync(); // 0x3ec Func
	var_179_bool = 1; // 0x3ee MovB
	var_342_bool = 0; var_343_object = Obj(); // 0x3ef PushV
	var_343_object = var_0_bool; // 0x3f0 MovT
	func_1877(var_342_bool, var_343_object); // 0x3f1 NEW_2
	var_344_bool = var_342_bool == 0; // 0x3f3 Not
	if(var_344_bool == 0) goto Label_1014; // 0x3f4 JumpB
	goto Label_1099; // 0x3f5 Jump
	
Label_1014:
	rand(var_185_float); // 0x3f6 Func
	var_345_bool = 0; // 0x3f8 PushV
	var_345_bool = 1; // 0x3f9 MovB
	var_346_float = 0.6; // 0x3fa PushF
	var_347_bool = var_185_float < var_346_float; // 0x3fb LT
	if(var_347_bool == 0) goto Label_1026; // 0x3fc JumpB
	var_348_bool = 0; // 0x3fd PushV
	func_1486(var_345_bool, var_348_bool); // 0x3fe NEW_2
	if(var_348_bool == 0) goto Label_1026; // 0x400 JumpB
	var_345_bool = 0; // 0x401 MovB
	
Label_1026:
	if(var_345_bool == 0) goto Label_1043; // 0x402 JumpB
	Face(var_0_bool); // 0x403 Func
	func_1536(); // 0x406 NEW_2
	var_383_string = "all"; // 0x408 PushS
	var_384_string = "attack_stay"; // 0x409 PushS
	PlayAnimation(var_383_string, var_384_string); // 0x40a Func
	var_385_bool = 0; var_386_float = 0; // 0x40c PushV
	var_386_float = var_163_float; // 0x40d Mov
	func_1354(var_185_float, var_385_bool, var_386_float); // 0x40e NEW_2
	StopAsync(); // 0x410 Func
	goto Label_1089; // 0x412 Jump
	
Label_1089:
	goto Label_1098; // 0x441 Jump
	
Label_1043:
	Face(var_0_bool); // 0x413 Func
	var_604_string = "all"; // 0x415 PushS
	var_605_string = "fjump"; // 0x416 PushS
	PlayAnimation(var_604_string, var_605_string); // 0x417 Func
	WaitForAnimEnd(); // 0x419 Func
	func_1529(var_185_float); // 0x41c NEW_2
	var_606_cvector = CVector(0.0, 0.0, 0.0); // 0x41e PushVec
	SetSpeed(var_606_cvector); // 0x41f Func
	Stop(); // 0x421 Func
	StopAsync(); // 0x423 Func
	var_607_bool = 0; // 0x425 PushV
	func_1486(var_185_float, var_607_bool); // 0x426 NEW_2
	var_608_bool = var_607_bool == 0; // 0x428 Not
	if(var_608_bool == 0) goto Label_1089; // 0x429 JumpB
	var_609_bool = 0; var_610_object = Obj(); // 0x42a PushV
	var_610_object = var_0_bool; // 0x42b MovT
	func_1877(var_609_bool, var_610_object); // 0x42c NEW_2
	var_611_bool = var_609_bool == 0; // 0x42e Not
	if(var_611_bool == 0) goto Label_1073; // 0x42f JumpB
	goto Label_1099; // 0x430 Jump
	
Label_1073:
	GetPFPosition(var_176_cvector); // 0x431 TObjFunc
	GetPFPosition(var_177_cvector); // 0x433 Func
	var_181_cvector = var_176_cvector - var_177_cvector; // 0x435 Sub2
	var_182_float = var_181_cvector | var_181_cvector; // 0x436 Or2
	var_612_float = var_163_float * var_163_float; // 0x437 Mult
	var_613_bool = var_182_float < var_612_float; // 0x438 LT
	if(var_613_bool == 0) goto Label_1089; // 0x439 JumpB
	var_614_bool = 0; var_615_float = 0; // 0x43a PushV
	var_615_float = var_163_float; // 0x43b Mov
	func_1190(var_185_float, var_614_bool, var_615_float); // 0x43c NEW_2
	var_616_bool = var_614_bool == 0; // 0x43e Not
	if(var_616_bool == 0) goto Label_1089; // 0x43f JumpB
	goto Label_1099; // 0x440 Jump
	
Label_1090:
	var_617_bool = 0; var_618_float = 0; // 0x442 PushV
	var_618_float = var_163_float; // 0x443 Mov
	func_1190(var_185_float, var_617_bool, var_618_float); // 0x444 NEW_2
	var_619_bool = var_617_bool == 0; // 0x446 Not
	if(var_619_bool == 0) goto Label_1097; // 0x447 JumpB
	goto Label_1099; // 0x448 Jump
	
Label_1097:
	var_179_bool = 1; // 0x449 MovB
	
Label_924:
	var_179_bool = 1; // 0x39c MovB
	
Label_901:
	var_175_float = var_163_float; // 0x385 Mov
}


func_2934(var_215_object)
{
	var_216_bool = 0; var_217_object = Obj(); // 0xb77 PushV
	var_217_object = var_215_object; // 0xb78 Mov
	func_2130(var_216_bool, var_217_object); // 0xb79 NEW_2
	var_248_bool = var_216_bool == 0; // 0xb7b Not
	if(var_248_bool == 0) goto Label_2942; // 0xb7c JumpB
	return 0; // 0xb7d Return
	
Label_2942:
	var_249_object = Obj(); // 0xb7e PushV
	var_249_object = var_215_object; // 0xb7f Mov
	TaskCall(0); // 0xb80 TaskCall
	func_0(var_249_object); // 0xb81 NEW_2
	TaskReturn(); // 0xb82 TaskReturn
	var_256_object = Obj(); // 0xb84 PushV
	var_256_object = var_215_object; // 0xb85 Mov
	func_2186(); // 0xb86 NEW_2
	return 0; // 0xb88 Return
}


func_2439(var_144_int)
{
	var_145_int = 0; var_146_int = 0; // 0x987 PushV
	var_147_string = "branch"; // 0x988 PushS
	GetVariable(var_147_string, var_146_int); // 0x989 Func
	var_144_int = var_146_int; // 0x98b Mov
	return 2; // 0x98c Return
}


func_2953(var_18_bool, var_19_object)
{
	var_20_bool = 0; var_21_object = Obj(); // 0xb8a PushV
	var_21_object = var_19_object; // 0xb8b Mov
	func_3129(var_20_bool, var_21_object); // 0xb8c NEW_2
	var_18_bool = var_20_bool; // 0xb8d Mov
	return 0; // 0xb8f Return
}


func_2445(var_21_object)
{
	var_22_int = 0; // 0x98e PushV
	func_2439(var_22_int); // 0x98f NEW_2
	var_26_int = 1; // 0x991 PushI
	var_27_bool = var_22_int == var_26_int; // 0x992 Eq
	if(var_27_bool == 0) goto Label_2455; // 0x993 JumpB
	WorkWithCorpse(var_21_object); // 0x994 Func
	goto Label_2457; // 0x996 Jump
	
Label_2457:
	return 0; // 0x999 Return
	
Label_2455:
	Barter(var_21_object); // 0x997 Func
}


func_2960(var_82_object)
{
	var_83_object = Obj(); // 0xb91 PushV
	var_83_object = var_82_object; // 0xb92 Mov
	func_2979(var_83_object); // 0xb93 NEW_2
	return 0; // 0xb95 Return
}


func_401(var_94_float)
{
	var_95_float = 0; var_96_float = 0; // 0x191 PushV
	GetCameraFarDistance(var_96_float); // 0x192 Func
	var_94_float = var_96_float; // 0x194 Mov
	return 2; // 0x195 Return
}


func_1425(var_398_bool)
{
	var_399_bool = 0; // 0x591 PushV
	var_399_bool = 0; // 0x592 MovB
	var_400_bool = 0; // 0x593 PushV
	func_1397(var_399_bool, var_400_bool); // 0x594 NEW_2
	if(var_400_bool == 0) goto Label_1436; // 0x596 JumpB
	var_417_bool = 0; // 0x597 PushV
	func_1441(var_398_bool, var_399_bool, var_417_bool); // 0x598 NEW_2
	if(var_417_bool == 0) goto Label_1436; // 0x59a JumpB
	var_399_bool = 1; // 0x59b MovB
	
Label_1436:
	if(var_399_bool == 0) goto Label_1439; // 0x59c JumpB
	var_398_bool = 1; // 0x59d MovB
	return 0; // 0x59e Return
	
Label_1439:
	var_398_bool = 0; // 0x59f MovB
	return 0; // 0x5a0 Return
}


func_2966(var_18_bool, var_19_object)
{
	var_20_bool = 0; var_21_object = Obj(); // 0xb97 PushV
	var_21_object = var_19_object; // 0xb98 Mov
	func_3129(var_20_bool, var_21_object); // 0xb99 NEW_2
	var_18_bool = var_20_bool; // 0xb9a Mov
	return 0; // 0xb9c Return
}


func_1945(var_21_object, var_22_int, var_23_float)
{
	var_24_cvector = CVector(0,0,0); var_25_object = Obj(); var_26_int = 0; var_27_bool = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_int = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_object = Obj(); var_35_int = 0; var_36_bool = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_int = 0; var_40_int = 0; var_41_cvector = CVector(0,0,0); // 0x799 PushV
	var_42_bool = 0; // 0x79a PushV
	var_42_bool = 0; // 0x79b MovB
	var_43_bool = 0; // 0x79c PushV
	var_43_bool = 0; // 0x79d MovB
	var_44_object = var_21_object; // 0x79e Push
	if(var_44_object == 0) goto Label_1956; // 0x79f JumpB
	var_45_int = 4; // 0x7a0 PushI
	var_46_bool = var_22_int != var_45_int; // 0x7a1 Neq
	if(var_46_bool == 0) goto Label_1956; // 0x7a2 JumpB
	var_43_bool = 1; // 0x7a3 MovB
	
Label_1956:
	if(var_43_bool == 0) goto Label_1961; // 0x7a4 JumpB
	var_47_int = 5; // 0x7a5 PushI
	var_48_bool = var_22_int != var_47_int; // 0x7a6 Neq
	if(var_48_bool == 0) goto Label_1961; // 0x7a7 JumpB
	var_42_bool = 1; // 0x7a8 MovB
	
Label_1961:
	if(var_42_bool == 0) goto Label_2008; // 0x7a9 JumpB
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); // 0x7aa PushV
	var_51_cvector = CVector(0,0,0); var_52_object = Obj(); // 0x7ab PushV
	var_52_object = var_21_object; // 0x7ac Mov
	func_1731(var_52_object); // 0x7ad NEW_2
	var_50_cvector = var_51_cvector; // 0x7ae Mov
	func_2313(var_49_cvector, var_50_cvector); // 0x7b0 NEW_2
	var_33_cvector = var_49_cvector; // 0x7b1 Mov
	CreateVectorVector(var_34_object); // 0x7b3 Func
	var_35_int = 1; // 0x7b5 MovI
	
Label_1974:
	var_62_string = "hit"; // 0x7b6 PushS
	var_63_int = var_62_string + var_35_int; // 0x7b7 Add
	GetGeometryLocator(var_63_int, var_36_bool, var_37_cvector, var_38_cvector); // 0x7b8 Func
	var_64_bool = var_36_bool == 0; // 0x7ba Not
	if(var_64_bool == 0) goto Label_1981; // 0x7bb JumpB
	goto Label_1990; // 0x7bc Jump
	
Label_1990:
	size(var_39_int); // 0x7c6 ObjFunc
	var_65_int = var_39_int; // 0x7c8 Push
	if(var_65_int == 0) goto Label_2007; // 0x7c9 JumpB
	irand(var_40_int, var_39_int); // 0x7ca Func
	get(var_41_cvector, var_40_int); // 0x7cc ObjFunc
	var_66_object = Obj(); var_67_int = 0; var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); // 0x7ce PushV
	var_66_object = var_21_object; // 0x7cf Mov
	var_67_int = var_22_int; // 0x7d0 Mov
	var_68_float = var_23_float; // 0x7d1 Mov
	var_69_cvector = var_41_cvector; // 0x7d2 Mov
	var_70_cvector = -var_33_cvector; // 0x7d3 Neg2
	func_2013(var_68_float, var_69_cvector, var_70_cvector); // 0x7d4 NEW_2
	return 18; // 0x7d6 Return
	
Label_2007:
	var_34_object = 0; // 0x7d7 SetNull
	
Label_2008:
	var_111_object = Obj(); // 0x7d8 PushV
	var_111_object = var_21_object; // 0x7d9 Mov
	func_1901(var_111_object); // 0x7da NEW_2
	return 18; // 0x7dc Return
	
Label_1981:
	var_112_int = var_38_cvector | var_33_cvector; // 0x7bd Or
	var_113_float = 0.70711; // 0x7be PushF
	var_114_bool = var_112_int >= var_113_float; // 0x7bf GE
	if(var_114_bool == 0) goto Label_1987; // 0x7c0 JumpB
	add(var_37_cvector); // 0x7c1 ObjFunc
	
Label_1987:
	var_115_int = 1; // 0x7c3 PushI
	var_35_int = var_35_int + var_115_int; // 0x7c4 Add2
	goto Label_1974; // 0x7c5 Jump
}


func_2458(var_45_int, var_46_int)
{
	var_50_int = 0; var_51_bool = 0; var_52_int = 0; var_53_bool = 0; // 0x99a PushV
	var_54_bool = var_45_int > var_46_int; // 0x99b GT
	if(var_54_bool == 0) goto Label_2465; // 0x99c JumpB
	var_55_string = "GenerateMoney: iMin > iMax"; // 0x99d PushS
	Trace(var_55_string); // 0x99e Func
	return 4; // 0x9a0 Return
	
Label_2465:
	var_52_int = 0; // 0x9a1 MovI
	var_56_bool = var_45_int != var_46_int; // 0x9a2 Neq
	if(var_56_bool == 0) goto Label_2472; // 0x9a3 JumpB
	var_57_int = var_46_int - var_45_int; // 0x9a4 Sub
	irand(var_52_int, var_57_int); // 0x9a5 Func
	goto Label_2476; // 0x9a7 Jump
	
Label_2476:
	var_52_int = var_52_int + var_45_int; // 0x9ac Add2
	var_58_int = 0; // 0x9ad PushI
	var_59_bool = var_52_int == var_58_int; // 0x9ae Eq
	if(var_59_bool == 0) goto Label_2481; // 0x9af JumpB
	return 4; // 0x9b0 Return
	
Label_2481:
	var_60_int = 0; var_61_string = ""; // 0x9b1 PushV
	var_61_string = "Money"; // 0x9b2 MovS
	func_2786(var_60_int, var_61_string); // 0x9b3 NEW_2
	var_64_int = 0; // 0x9b5 PushI
	AddItem(var_53_bool, var_60_int, var_64_int, var_52_int); // 0x9b6 Func
	return 4; // 0x9b8 Return
	
Label_2472:
	var_65_int = 0; // 0x9a8 PushI
	var_66_bool = var_45_int == var_65_int; // 0x9a9 Eq
	if(var_66_bool == 0) goto Label_2476; // 0x9aa JumpB
	return 4; // 0x9ab Return
}


func_413(var_0_bool, var_1_object)
{
	var_0_bool = 1; // 0x19d TMovB
	var_1_object = 0; // 0x19e TMovB
	Stop(); // 0x19f Func
	StopGroup0(); // 0x1a1 Func
	return 0; // 0x1a3 Return
}


func_2973(var_82_object)
{
	var_83_object = Obj(); // 0xb9e PushV
	var_83_object = var_82_object; // 0xb9f Mov
	func_2979(var_83_object); // 0xba0 NEW_2
	return 0; // 0xba2 Return
}


func_1441(var_0_bool, var_4_string, var_417_bool)
{
	var_418_object = Obj(); var_419_bool = 0; var_420_float = 0; var_421_cvector = CVector(0,0,0); var_422_cvector = CVector(0,0,0); var_423_object = Obj(); var_424_bool = 0; var_425_float = 0; var_426_cvector = CVector(0,0,0); var_427_cvector = CVector(0,0,0); // 0x5a1 PushV
	GetScene(var_423_object); // 0x5a2 Func
	var_424_bool = 0; // 0x5a4 MovB
	
Label_1445:
	var_428_cvector = CVector(0,0,0); var_429_object = Obj(); // 0x5a5 PushV
	var_429_object = var_0_bool; // 0x5a6 MovT
	func_1731(var_429_object); // 0x5a7 NEW_2
	var_434_int = -var_428_cvector; // 0x5a9 Neg
	FindDirLength(var_425_float, var_434_int, var_425_float); // 0x5aa Func
	var_435_bool = var_425_float < var_4_string; // 0x5ac LT
	if(var_435_bool == 0) goto Label_1455; // 0x5ad JumpB
	goto Label_1483; // 0x5ae Jump
	
Label_1483:
	var_417_bool = var_424_bool; // 0x5cb Mov
	return 10; // 0x5cc Return
	
Label_1455:
	Face(var_0_bool); // 0x5af Func
	var_436_string = "all"; // 0x5b1 PushS
	var_437_string = "bjump"; // 0x5b2 PushS
	PlayAnimation(var_436_string, var_437_string); // 0x5b3 Func
	GetPFPosition(var_426_cvector); // 0x5b5 TObjFunc
	GetPFPosition(var_427_cvector); // 0x5b7 Func
	WaitForAnimEnd(); // 0x5b9 Func
	func_1529(var_427_cvector); // 0x5bc NEW_2
	StopAsync(); // 0x5be Func
	var_438_cvector = CVector(0.0, 0.0, 0.0); // 0x5c0 PushVec
	SetSpeed(var_438_cvector); // 0x5c1 Func
	var_424_bool = 1; // 0x5c3 MovB
	var_439_bool = 0; // 0x5c4 PushV
	func_1397(var_427_cvector, var_439_bool); // 0x5c5 NEW_2
	var_440_bool = var_439_bool == 0; // 0x5c7 Not
	if(var_440_bool == 0) goto Label_1482; // 0x5c8 JumpB
	goto Label_1483; // 0x5c9 Jump
	
Label_1482:
	goto Label_1445; // 0x5ca Jump
}


func_2979(var_83_object)
{
	var_84_object = Obj(); var_85_bool = 0; // 0xba4 PushV
	var_84_object = var_83_object; // 0xba5 Mov
	var_85_bool = 1; // 0xba6 MovB
	TaskCall(6); // 0xba7 TaskCall
	func_859(var_84_object, var_85_bool); // 0xba8 NEW_2
	TaskReturn(); // 0xba9 TaskReturn
	ResetAAS(); // 0xbab Func
	return 0; // 0xbad Return
}


func_429(var_104_bool)
{
	var_104_bool = 0; // 0x1ad MovB
	return 0; // 0x1ae Return
}


func_2990(var_18_object)
{
	var_19_bool = 0; var_20_bool = 0; // 0xbae PushV
	var_21_bool = var_18_object == 0; // 0xbaf NullEq
	if(var_21_bool == 0) goto Label_2994; // 0xbb0 JumpB
	return 2; // 0xbb1 Return
	
Label_2994:
	var_22_object = GlobalVars[0]; // 0xbb2 PushGE
	in(var_20_bool, var_18_object); // 0xbb3 ObjFunc
	var_23_bool = var_20_bool == 0; // 0xbb5 Not
	if(var_23_bool == 0) goto Label_3002; // 0xbb6 JumpB
	var_24_object = GlobalVars[0]; // 0xbb7 PushGE
	add(var_18_object); // 0xbb8 ObjFunc
	
Label_3002:
	var_25_bool = 0; var_26_object = Obj(); // 0xbba PushV
	var_26_object = var_18_object; // 0xbbb Mov
	func_1746(var_25_bool, var_26_object); // 0xbbc NEW_2
	if(var_25_bool == 0) goto Label_3013; // 0xbbe JumpB
	var_29_object = Obj(); // 0xbbf PushV
	func_2307(var_29_object); // 0xbc0 NEW_2
	var_32_float = -0.07; // 0xbc2 PushF
	ReportReputationChange(var_18_object, var_29_object, var_32_float); // 0xbc3 Func
	
Label_3013:
	return 2; // 0xbc5 Return
}


func_431(var_98_object, var_99_cvector)
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x1af PushV
	FindShiftedPathTo(var_101_object, var_99_cvector); // 0x1b0 Func
	var_98_object = var_101_object; // 0x1b2 Mov
	return 2; // 0x1b3 Return
}


func_2489(var_150_string)
{
	var_151_object = Obj(); var_152_int = 0; var_153_bool = 0; var_154_object = Obj(); var_155_int = 0; var_156_bool = 0; // 0x9b9 PushV
	CreateInvItem(var_154_object); // 0x9ba Func
	SetItemName(var_150_string); // 0x9bc ObjFunc
	var_157_string = "Organ"; // 0x9be PushS
	var_158_int = 1; // 0x9bf PushI
	SetProperty(var_157_string, var_158_int); // 0x9c0 ObjFunc
	GetItemID(var_155_int); // 0x9c2 ObjFunc
	var_159_int = 0; // 0x9c4 PushI
	var_160_int = 1; // 0x9c5 PushI
	AddItem(var_156_bool, var_154_object, var_159_int, var_160_int); // 0x9c6 Func
	return 6; // 0x9c8 Return
}


func_3014(var_151_object)
{
	var_152_object = Obj(); // 0xbc7 PushV
	var_152_object = var_151_object; // 0xbc8 Mov
	func_2990(var_152_object); // 0xbc9 NEW_2
	var_153_object = Obj(); var_154_bool = 0; // 0xbcb PushV
	var_153_object = var_151_object; // 0xbcc Mov
	var_154_bool = 1; // 0xbcd MovB
	TaskCall(6); // 0xbce TaskCall
	func_859(var_153_object, var_154_bool); // 0xbcf NEW_2
	TaskReturn(); // 0xbd0 TaskReturn
	ResetAAS(); // 0xbd2 Func
	return 0; // 0xbd4 Return
}


func_2506()
{
	var_144_int = 0; // 0x9ca PushV
	func_2439(var_144_int); // 0x9cb NEW_2
	var_148_int = 1; // 0x9cd PushI
	var_149_bool = var_144_int != var_148_int; // 0x9ce Neq
	if(var_149_bool == 0) goto Label_2513; // 0x9cf JumpB
	return 0; // 0x9d0 Return
	
Label_2513:
	var_150_string = ""; // 0x9d1 PushV
	var_150_string = "liver"; // 0x9d2 MovS
	func_2489(var_150_string); // 0x9d3 NEW_2
	var_161_string = ""; // 0x9d5 PushV
	var_161_string = "kidney"; // 0x9d6 MovS
	func_2489(var_161_string); // 0x9d7 NEW_2
	var_162_string = ""; // 0x9d9 PushV
	var_162_string = "heart"; // 0x9da MovS
	func_2489(var_162_string); // 0x9db NEW_2
	var_163_string = ""; // 0x9dd PushV
	var_163_string = "blood"; // 0x9de MovS
	func_2489(var_163_string); // 0x9df NEW_2
	return 0; // 0x9e1 Return
}


func_1486(var_0_bool, var_348_bool)
{
	var_349_bool = 0; var_350_bool = 0; // 0x5ce PushV
	var_351_string = "IsAttacking"; // 0x5cf PushS
	var_352_int = 1; // 0x5d0 PushI
	var_353_bool = IsFuncExist(var_0_bool, var_351_string, var_352_int); // 0x5d1 FuncExist
	if(var_353_bool == 0) goto Label_1495; // 0x5d2 JumpB
	IsAttacking(var_350_bool); // 0x5d3 TObjFunc
	var_348_bool = var_350_bool; // 0x5d5 Mov
	return 2; // 0x5d6 Return
	
Label_1495:
	var_348_bool = 0; // 0x5d7 MovB
	return 2; // 0x5d8 Return
}


func_3029(var_18_object)
{
	var_19_bool = 0; var_20_object = Obj(); // 0xbd6 PushV
	var_20_object = var_18_object; // 0xbd7 Mov
	func_1746(var_19_bool, var_20_object); // 0xbd8 NEW_2
	if(var_19_bool == 0) goto Label_3042; // 0xbda JumpB
	var_23_object = Obj(); // 0xbdb PushV
	func_2307(var_23_object); // 0xbdc NEW_2
	var_26_float = -0.13; // 0xbde PushF
	var_27_bool = 1; // 0xbdf PushB
	ReportReputationChange(var_18_object, var_23_object, var_26_float, var_27_bool); // 0xbe0 Func
	
Label_3042:
	var_28_object = Obj(); // 0xbe2 PushV
	var_28_object = var_18_object; // 0xbe3 Mov
	TaskCall(7); // 0xbe4 TaskCall
	func_1549(var_28_object); // 0xbe5 NEW_2
	TaskReturn(); // 0xbe6 TaskReturn
	return 0; // 0xbe8 Return
}


func_1497(var_2_object, var_5_bool)
{
	var_465_float = 0; var_466_int = 0; var_467_float = 0; var_468_int = 0; // 0x5d9 PushV
	var_469_bool = var_2_object == 0; // 0x5da Not
	if(var_469_bool == 0) goto Label_1501; // 0x5db JumpB
	return 4; // 0x5dc Return
	
Label_1501:
	var_470_bool = var_5_bool; // 0x5dd PushT
	if(var_470_bool == 0) goto Label_1509; // 0x5de JumpB
	var_471_int = -1; // 0x5df PushI
	var_5_bool = var_5_bool + var_471_int; // 0x5e0 Add2
	var_472_int = 0; // 0x5e1 PushI
	var_473_bool = var_5_bool > var_472_int; // 0x5e2 GT
	if(var_473_bool == 0) goto Label_1509; // 0x5e3 JumpB
	return 4; // 0x5e4 Return
	
Label_1509:
	rand(var_467_float); // 0x5e5 Func
	var_474_float = 0; // 0x5e7 PushV
	func_1547(var_474_float); // 0x5e8 NEW_2
	var_475_bool = var_467_float < var_474_float; // 0x5ea LT
	if(var_475_bool == 0) goto Label_1528; // 0x5eb JumpB
	irand(var_468_int, var_467_float); // 0x5ec Func
	var_476_int = 1; // 0x5ee PushI
	var_468_int = var_468_int + var_476_int; // 0x5ef Add2
	var_477_string = "attack"; // 0x5f0 PushS
	var_478_int = var_477_string + var_468_int; // 0x5f1 Add
	Speak(var_478_int); // 0x5f2 Func
	var_479_int = 0; // 0x5f4 PushV
	func_1545(var_479_int); // 0x5f5 NEW_2
	var_5_bool = var_479_int; // 0x5f6 TMov
	
Label_1528:
	return 4; // 0x5f8 Return
}


func_2013(var_23_object, var_26_cvector, var_27_cvector)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); // 0x7dd PushV
	GetScene(var_30_object); // 0x7de Func
	var_32_string = "scripted"; // 0x7e0 PushS
	var_33_string = "blood_dir.xml"; // 0x7e1 PushS
	AddActorByType(var_31_object, var_32_string, var_30_object, var_26_cvector, var_27_cvector, var_33_string); // 0x7e2 Func
	var_34_object = Obj(); // 0x7e4 PushV
	var_34_object = var_23_object; // 0x7e5 Mov
	func_1901(var_34_object); // 0x7e6 NEW_2
	return 4; // 0x7e8 Return
}


func_2530()
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_int = 0; var_36_bool = 0; var_37_int = 0; // 0x9e2 PushV
	var_38_int = 0; // 0x9e3 PushI
	ClearSubContainer(var_38_int); // 0x9e4 Func
	var_39_int = 0; // 0x9e6 PushV
	func_2369(var_39_int); // 0x9e7 NEW_2
	var_37_int = var_39_int; // 0x9e8 Mov
	var_45_int = 0; var_46_int = 0; // 0x9ea PushV
	var_45_int = 0; // 0x9eb MovI
	var_47_int = 100; // 0x9ec PushI
	var_48_int = 100; // 0x9ed PushI
	var_49_float = var_37_int * var_48_int; // 0x9ee Mult
	var_46_int = var_47_int + var_49_float; // 0x9ef Add2
	func_2458(var_45_int, var_46_int); // 0x9f0 NEW_2
	var_67_string = ""; var_68_int = 0; var_69_int = 0; // 0x9f2 PushV
	var_67_string = "tourniquet"; // 0x9f3 MovS
	var_68_int = 1; // 0x9f4 MovI
	var_69_int = 7; // 0x9f5 MovI
	func_2240(var_67_string, var_68_int, var_69_int); // 0x9f6 NEW_2
	var_78_string = ""; var_79_int = 0; var_80_int = 0; // 0x9f8 PushV
	var_78_string = "bandage"; // 0x9f9 MovS
	var_79_int = 1; // 0x9fa MovI
	var_80_int = 7; // 0x9fb MovI
	func_2240(var_78_string, var_79_int, var_80_int); // 0x9fc NEW_2
	var_81_string = ""; var_82_int = 0; var_83_int = 0; // 0x9fe PushV
	var_81_string = "packet"; // 0x9ff MovS
	var_82_int = 1; // 0xa00 MovI
	var_83_int = 10; // 0xa01 MovI
	func_2240(var_81_string, var_82_int, var_83_int); // 0xa02 NEW_2
	var_84_string = ""; var_85_int = 0; var_86_int = 0; // 0xa04 PushV
	var_84_string = "bottle_water"; // 0xa05 MovS
	var_85_int = 1; // 0xa06 MovI
	var_86_int = 3; // 0xa07 MovI
	func_2240(var_84_string, var_85_int, var_86_int); // 0xa08 NEW_2
	var_87_string = ""; var_88_int = 0; var_89_int = 0; var_90_int = 0; // 0xa0a PushV
	var_87_string = "rusk"; // 0xa0b MovS
	var_88_int = 1; // 0xa0c MovI
	var_89_int = 3; // 0xa0d MovI
	var_90_int = 4; // 0xa0e MovI
	func_2251(var_87_string, var_88_int, var_89_int, var_90_int); // 0xa0f NEW_2
	var_101_string = ""; var_102_int = 0; var_103_int = 0; // 0xa11 PushV
	var_101_string = "hook"; // 0xa12 MovS
	var_102_int = 1; // 0xa13 MovI
	var_103_int = 20; // 0xa14 MovI
	func_2240(var_101_string, var_102_int, var_103_int); // 0xa15 NEW_2
	var_104_string = ""; var_105_int = 0; var_106_int = 0; // 0xa17 PushV
	var_104_string = "watch"; // 0xa18 MovS
	var_105_int = 1; // 0xa19 MovI
	var_106_int = 20; // 0xa1a MovI
	func_2240(var_104_string, var_105_int, var_106_int); // 0xa1b NEW_2
	var_107_bool = 0; // 0xa1d PushV
	var_107_bool = 0; // 0xa1e MovB
	var_108_int = 3; // 0xa1f PushI
	var_109_bool = var_37_int >= var_108_int; // 0xa20 GE
	if(var_109_bool == 0) goto Label_2598; // 0xa21 JumpB
	var_110_int = 6; // 0xa22 PushI
	var_111_bool = var_37_int < var_110_int; // 0xa23 LT
	if(var_111_bool == 0) goto Label_2598; // 0xa24 JumpB
	var_107_bool = 1; // 0xa25 MovB
	
Label_2598:
	if(var_107_bool == 0) goto Label_2606; // 0xa26 JumpB
	var_112_string = ""; var_113_int = 0; var_114_int = 0; var_115_int = 0; // 0xa27 PushV
	var_112_string = "alpha_pills"; // 0xa28 MovS
	var_113_int = 1; // 0xa29 MovI
	var_114_int = 2; // 0xa2a MovI
	var_115_int = 3; // 0xa2b MovI
	func_2251(var_112_string, var_113_int, var_114_int, var_115_int); // 0xa2c NEW_2
	
Label_2606:
	var_116_int = 4; // 0xa2e PushI
	var_117_bool = var_37_int >= var_116_int; // 0xa2f GE
	if(var_117_bool == 0) goto Label_2616; // 0xa30 JumpB
	var_118_string = ""; var_119_int = 0; var_120_int = 0; var_121_int = 0; // 0xa31 PushV
	var_118_string = "beta_pills"; // 0xa32 MovS
	var_119_int = 1; // 0xa33 MovI
	var_120_int = 4; // 0xa34 MovI
	var_121_int = 3; // 0xa35 MovI
	func_2251(var_118_string, var_119_int, var_120_int, var_121_int); // 0xa36 NEW_2
	
Label_2616:
	var_122_int = 6; // 0xa38 PushI
	var_123_bool = var_37_int >= var_122_int; // 0xa39 GE
	if(var_123_bool == 0) goto Label_2633; // 0xa3a JumpB
	var_124_string = ""; var_125_int = 0; var_126_int = 0; var_127_int = 0; // 0xa3b PushV
	var_124_string = "alpha_pills"; // 0xa3c MovS
	var_125_int = 1; // 0xa3d MovI
	var_126_int = 2; // 0xa3e MovI
	var_127_int = 8; // 0xa3f MovI
	func_2251(var_124_string, var_125_int, var_126_int, var_127_int); // 0xa40 NEW_2
	var_128_string = ""; var_129_int = 0; var_130_int = 0; var_131_int = 0; // 0xa42 PushV
	var_128_string = "gamma_pills"; // 0xa43 MovS
	var_129_int = 1; // 0xa44 MovI
	var_130_int = 8; // 0xa45 MovI
	var_131_int = 3; // 0xa46 MovI
	func_2251(var_128_string, var_129_int, var_130_int, var_131_int); // 0xa47 NEW_2
	
Label_2633:
	var_132_int = 8; // 0xa49 PushI
	var_133_bool = var_37_int >= var_132_int; // 0xa4a GE
	if(var_133_bool == 0) goto Label_2648; // 0xa4b JumpB
	var_134_string = ""; var_135_int = 0; var_136_int = 0; // 0xa4c PushV
	var_134_string = "revolver_ammo"; // 0xa4d MovS
	var_135_int = 1; // 0xa4e MovI
	var_136_int = 3; // 0xa4f MovI
	func_2240(var_134_string, var_135_int, var_136_int); // 0xa50 NEW_2
	var_137_string = ""; var_138_int = 0; var_139_int = 0; // 0xa52 PushV
	var_137_string = "rifle_ammo"; // 0xa53 MovS
	var_138_int = 1; // 0xa54 MovI
	var_139_int = 3; // 0xa55 MovI
	func_2240(var_137_string, var_138_int, var_139_int); // 0xa56 NEW_2
	
Label_2648:
	var_140_int = 0; var_141_string = ""; // 0xa58 PushV
	var_141_string = "patrol_mark"; // 0xa59 MovS
	func_2786(var_140_int, var_141_string); // 0xa5a NEW_2
	var_142_int = 0; // 0xa5c PushI
	var_143_int = 1; // 0xa5d PushI
	AddItem(var_36_bool, var_140_int, var_142_int, var_143_int); // 0xa5e Func
	return 6; // 0xa60 Return
}


func_2027()
{
	var_332_cvector = CVector(0,0,0); var_333_cvector = CVector(0,0,0); var_334_cvector = CVector(0,0,0); var_335_cvector = CVector(0,0,0); var_336_cvector = CVector(0,0,0); var_337_cvector = CVector(0,0,0); // 0x7eb PushV
	GetPosition(var_335_cvector); // 0x7ec ObjFunc
	GetPosition(var_336_cvector); // 0x7ee Func
	var_337_cvector = var_335_cvector - var_336_cvector; // 0x7f0 Sub2
	var_338_float = GetByIndex(var_337_cvector, 0); // 0x7f1 PushE
	var_339_float = GetByIndex(var_337_cvector, 2); // 0x7f2 PushE
	RotateAsync(var_338_float, var_339_float); // 0x7f3 Func
	return 6; // 0x7f5 Return
}


func_2038(var_120_bool)
{
	var_121_bool = 0; var_122_bool = 0; // 0x7f6 PushV
	IsLoaded(var_122_bool); // 0x7f7 Func
	var_120_bool = var_122_bool; // 0x7f9 Mov
	return 2; // 0x7fa Return
}


func_503()
{
	var_106_int = 0; var_107_int = 0; var_108_int = 0; var_109_int = 0; var_110_bool = 0; var_111_float = 0; var_112_bool = 0; var_113_int = 0; var_114_int = 0; var_115_int = 0; var_116_int = 0; var_117_bool = 0; var_118_float = 0; var_119_bool = 0; // 0x1f7 PushV
	WaitForAnimEnd(); // 0x1f8 Func
	var_120_bool = 0; // 0x1fa PushV
	func_2038(var_120_bool); // 0x1fb NEW_2
	var_123_bool = var_120_bool == 0; // 0x1fd Not
	if(var_123_bool == 0) goto Label_512; // 0x1fe JumpB
	return 14; // 0x1ff Return
	
Label_512:
	var_124_int = 0; // 0x200 PushV
	func_2405(var_124_int); // 0x201 NEW_2
	var_113_int = var_124_int; // 0x202 Mov
	var_114_int = 0; // 0x204 MovI
	
Label_517:
	var_137_bool = 0; // 0x205 PushV
	var_137_bool = 0; // 0x206 MovB
	var_138_int = 5; // 0x207 PushI
	var_139_bool = var_114_int < var_138_int; // 0x208 LT
	if(var_139_bool == 0) goto Label_527; // 0x209 JumpB
	var_140_bool = 0; // 0x20a PushV
	func_2038(var_140_bool); // 0x20b NEW_2
	if(var_140_bool == 0) goto Label_527; // 0x20d JumpB
	var_137_bool = 1; // 0x20e MovB
	
Label_527:
	if(var_137_bool == 0) goto Label_579; // 0x20f JumpB
	var_141_int = 3; // 0x210 PushI
	irand(var_115_int, var_141_int); // 0x211 Func
	var_142_int = 0; // 0x213 PushI
	var_143_bool = var_115_int == var_142_int; // 0x214 Eq
	if(var_143_bool == 0) goto Label_551; // 0x215 JumpB
	var_144_int = var_113_int; // 0x216 Push
	if(var_144_int == 0) goto Label_550; // 0x217 JumpB
	irand(var_116_int, var_113_int); // 0x218 Func
	var_145_string = "all"; // 0x21a PushS
	var_146_string = ""; var_147_int = 0; // 0x21b PushV
	var_147_int = var_116_int; // 0x21c Mov
	func_2398(var_146_string, var_147_int); // 0x21d NEW_2
	PlayAnimation(var_145_string, var_146_string); // 0x21f Func
	WaitForAnimEnd(var_117_bool); // 0x221 Func
	var_148_bool = var_117_bool == 0; // 0x223 Not
	if(var_148_bool == 0) goto Label_550; // 0x224 JumpB
	goto Label_579; // 0x225 Jump
	
Label_579:
	ResetAAS(); // 0x243 Func
	return 14; // 0x245 Return
	
Label_550:
	goto Label_568; // 0x226 Jump
	
Label_568:
	var_149_bool = 0; // 0x238 PushV
	func_582(var_149_bool); // 0x239 NEW_2
	var_150_bool = var_149_bool == 0; // 0x23b Not
	if(var_150_bool == 0) goto Label_574; // 0x23c JumpB
	goto Label_579; // 0x23d Jump
	
Label_574:
	ResetAAS(); // 0x23e Func
	var_151_int = 1; // 0x240 PushI
	var_114_int = var_114_int + var_151_int; // 0x241 Add2
	goto Label_517; // 0x242 Jump
	
Label_551:
	var_152_int = 1; // 0x227 PushI
	var_153_bool = var_115_int == var_152_int; // 0x228 Eq
	if(var_153_bool == 0) goto Label_565; // 0x229 JumpB
	var_154_int = 4; // 0x22a PushI
	rand(var_118_float, var_154_int); // 0x22b Func
	var_155_int = 1; // 0x22d PushI
	var_156_int = var_118_float + var_155_int; // 0x22e Add
	Sleep(var_156_int, var_119_bool); // 0x22f Func
	var_157_bool = var_119_bool == 0; // 0x231 Not
	if(var_157_bool == 0) goto Label_564; // 0x232 JumpB
	goto Label_579; // 0x233 Jump
	
Label_564:
	goto Label_568; // 0x234 Jump
	
Label_565:
	var_158_int = var_114_int; // 0x235 Push
	if(var_158_int == 0) goto Label_568; // 0x236 JumpB
	goto Label_579; // 0x237 Jump
}


func_1529(var_0_bool)
{
	var_223_object = Obj(); // 0x5f9 PushV
	var_223_object = var_0_bool; // 0x5fa MovT
	func_2378(var_223_object); // 0x5fb NEW_2
	return 0; // 0x5fd Return
}


func_2043(var_92_bool, var_94_float)
{
	var_95_float = 0; var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_bool = 0; var_103_bool = 0; var_104_float = 0; var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); var_110_cvector = CVector(0,0,0); var_111_bool = 0; var_112_bool = 0; // 0x7fb PushV
	GetPosition(var_105_cvector); // 0x7fc ObjFunc
	GetEyesHeight(var_104_float); // 0x7fe ObjFunc
	var_113_float = GetByIndex(var_105_cvector, 1); // 0x800 PushE
	var_113_float = var_113_float + var_104_float; // 0x801 Add2
	SetByIndex(var_105_cvector, 1) = var_113_float; // 0x802 PopE
	GetPosition(var_106_cvector); // 0x803 Func
	GetEyesHeight(var_104_float); // 0x805 Func
	var_114_float = GetByIndex(var_106_cvector, 1); // 0x807 PushE
	var_114_float = var_114_float + var_104_float; // 0x808 Add2
	SetByIndex(var_106_cvector, 1) = var_114_float; // 0x809 PopE
	var_107_cvector = var_105_cvector - var_106_cvector; // 0x80a Sub2
	var_115_float = GetByIndex(var_107_cvector, 1); // 0x80b PushE
	var_115_float = 0; // 0x80c MovI
	SetByIndex(var_107_cvector, 1) = var_115_float; // 0x80d PopE
	var_116_int = var_107_cvector | var_107_cvector; // 0x80e Or
	var_117_float = sqrt(var_116_int); // 0x80f Sqrt
	var_107_cvector = var_107_cvector / var_107_cvector; // 0x810 Div2
	var_108_cvector = -var_107_cvector; // 0x811 Neg2
	var_118_float = var_107_cvector * var_94_float; // 0x812 Mult
	var_119_cvector = CVector(0,0,0); var_120_cvector = CVector(0,0,0); // 0x813 PushV
	var_121_cvector = CVector(0.0, 1.0, 0.0); // 0x814 PushVec
	var_120_cvector = var_108_cvector ^ var_121_cvector; // 0x815 Xor2
	func_2313(var_119_cvector, var_120_cvector); // 0x816 NEW_2
	var_127_int = 25; // 0x818 PushI
	var_128_float = var_119_cvector * var_127_int; // 0x819 Mult
	var_129_int = var_118_float + var_128_float; // 0x81a Add
	var_130_cvector = CVector(0.0, 10.0, 0.0); // 0x81b PushVec
	var_109_cvector = var_129_int - var_130_cvector; // 0x81c Sub2
	var_110_cvector = var_106_cvector + var_109_cvector; // 0x81d Add2
	IsOverrideActive(var_111_bool); // 0x81e Func
	var_131_bool = var_111_bool; // 0x820 Push
	if(var_131_bool == 0) goto Label_2084; // 0x821 JumpB
	var_92_bool = 0; // 0x822 MovB
	return 18; // 0x823 Return
	
Label_2084:
	StopWorld(); // 0x824 Func
	var_132_bool = 1; // 0x826 PushB
	CameraTransit(var_110_cvector, var_108_cvector, var_132_bool); // 0x827 Func
	var_133_float = GetByIndex(var_109_cvector, 0); // 0x829 PushE
	var_134_float = GetByIndex(var_109_cvector, 2); // 0x82a PushE
	Rotate(var_133_float, var_134_float); // 0x82b Func
	var_135_bool = 0; // 0x82d PushV
	func_3127(var_135_bool); // 0x82e NEW_2
	if(var_135_bool == 0) goto Label_2098; // 0x830 JumpB
	goto Label_2106; // 0x831 Jump
	
Label_2106:
	CameraWaitForPlayFinish(); // 0x83a Func
	ResumeWorld(); // 0x83c Func
	var_92_bool = 1; // 0x83e MovB
	return 18; // 0x83f Return
	
Label_2098:
	var_136_string = "head"; // 0x832 PushS
	HasAnimationTrack(var_112_bool, var_136_string); // 0x833 Func
	var_137_bool = var_112_bool; // 0x835 Push
	if(var_137_bool == 0) goto Label_2106; // 0x836 JumpB
	var_138_string = "head"; // 0x837 PushS
	LookAsyncCamera(var_138_string); // 0x838 Func
}


func_1534(var_562_int)
{
	var_562_int = 0; // 0x5fe MovI
	return 0; // 0x5ff Return
}


