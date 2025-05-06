task_0_event_11(var_0_bool, var_1_int, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; // 0x1b PushV
	func_6187(var_23_bool); // 0x1c NEW_2
	if(var_23_bool == 0) goto Label_34; // 0x1e JumpB
	lshStopAnimation(); // 0x1f Func
	goto Label_36; // 0x21 Jump
	
Label_36:
	StopTrade(); // 0x24 Func
	var_0_bool = 1; // 0x26 TMovB
	return 0; // 0x27 Return
	
Label_34:
	StopAnimation(); // 0x22 Func
}


task_1_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x40 PushV
	var_25_int = 0; var_26_object = Obj(); // 0x41 PushV
	var_26_object = var_22_bool; // 0x42 Mov
	func_5704(var_26_object); // 0x43 NEW_2
	var_24_int = var_25_int; // 0x44 Mov
	var_27_int = 0; // 0x46 PushI
	var_28_bool = var_24_int > var_27_int; // 0x47 GT
	if(var_28_bool == 0) goto Label_83; // 0x48 JumpB
	var_29_int = 1; // 0x49 PushI
	var_30_bool = var_24_int > var_29_int; // 0x4a GT
	if(var_30_bool == 0) goto Label_79; // 0x4b JumpB
	func_251(var_24_int); // 0x4d NEW_2
	
Label_79:
	var_32_object = Obj(); // 0x4f PushV
	var_32_object = var_22_bool; // 0x50 Mov
	func_5707(var_32_object); // 0x51 NEW_2
	
Label_83:
	return 2; // 0x53 Return
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x54 PushV
	var_25_object = Obj(); // 0x55 PushV
	var_25_object = var_22_bool; // 0x56 Mov
	func_5509(var_25_object); // 0x57 NEW_2
	var_34_int = 0; var_35_object = Obj(); // 0x59 PushV
	var_35_object = var_22_bool; // 0x5a Mov
	func_5592(var_34_int, var_35_object); // 0x5b NEW_2
	var_24_int = var_34_int; // 0x5c Mov
	var_70_int = 0; // 0x5e PushI
	var_71_bool = var_24_int > var_70_int; // 0x5f GT
	if(var_71_bool == 0) goto Label_107; // 0x60 JumpB
	var_72_int = 1; // 0x61 PushI
	var_73_bool = var_24_int > var_72_int; // 0x62 GT
	if(var_73_bool == 0) goto Label_103; // 0x63 JumpB
	func_251(var_24_int); // 0x65 NEW_2
	
Label_103:
	var_75_object = Obj(); // 0x67 PushV
	var_75_object = var_22_bool; // 0x68 Mov
	func_5602(var_75_object); // 0x69 NEW_2
	
Label_107:
	return 2; // 0x6b Return
}


task_1_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool)
{
	var_25_int = 0; var_26_int = 0; // 0x6c PushV
	var_27_bool = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_bool = 0; // 0x6d PushV
	var_28_object = var_22_object; // 0x6e Mov
	var_29_object = var_23_string; // 0x6f Mov
	var_30_bool = var_24_bool; // 0x70 Mov
	func_6243(var_28_object, var_29_object, var_30_bool); // 0x71 NEW_2
	if(var_27_bool == 0) goto Label_135; // 0x73 JumpB
	var_74_int = 0; var_75_object = Obj(); var_76_bool = 0; // 0x74 PushV
	var_75_object = var_22_object; // 0x75 Mov
	var_76_bool = var_24_bool; // 0x76 Mov
	func_5610(var_75_object, var_76_bool); // 0x77 NEW_2
	var_26_int = var_74_int; // 0x78 Mov
	var_105_int = 0; // 0x7a PushI
	var_106_bool = var_26_int > var_105_int; // 0x7b GT
	if(var_106_bool == 0) goto Label_135; // 0x7c JumpB
	var_107_int = 1; // 0x7d PushI
	var_108_bool = var_26_int > var_107_int; // 0x7e GT
	if(var_108_bool == 0) goto Label_131; // 0x7f JumpB
	func_251(var_26_int); // 0x81 NEW_2
	
Label_131:
	var_110_object = Obj(); // 0x83 PushV
	var_110_object = var_22_object; // 0x84 Mov
	func_5620(var_110_object); // 0x85 NEW_2
	
Label_135:
	return 2; // 0x87 Return
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x88 PushV
	var_25_int = 0; var_26_object = Obj(); // 0x89 PushV
	var_26_object = var_22_bool; // 0x8a Mov
	func_5694(var_26_object); // 0x8b NEW_2
	var_24_int = var_25_int; // 0x8c Mov
	var_27_int = 0; // 0x8e PushI
	var_28_bool = var_24_int > var_27_int; // 0x8f GT
	if(var_28_bool == 0) goto Label_155; // 0x90 JumpB
	var_29_int = 1; // 0x91 PushI
	var_30_bool = var_24_int > var_29_int; // 0x92 GT
	if(var_30_bool == 0) goto Label_151; // 0x93 JumpB
	func_251(var_24_int); // 0x95 NEW_2
	
Label_151:
	var_32_object = Obj(); // 0x97 PushV
	var_32_object = var_22_bool; // 0x98 Mov
	func_5697(); // 0x99 NEW_2
	
Label_155:
	return 2; // 0x9b Return
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_object, var_21_object, var_22_string, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; // 0x9c PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; // 0x9d PushV
	var_27_object = var_22_string; // 0x9e Mov
	var_28_string = var_23_bool; // 0x9f Mov
	func_5423(var_26_bool, var_27_object, var_28_string); // 0xa0 NEW_2
	if(var_26_bool == 0) goto Label_172; // 0xa2 JumpB
	func_251(var_25_int); // 0xa4 NEW_2
	var_59_object = Obj(); var_60_string = ""; // 0xa6 PushV
	var_59_object = var_22_string; // 0xa7 Mov
	var_60_string = var_23_bool; // 0xa8 Mov
	func_5455(var_59_object, var_60_string); // 0xa9 NEW_2
	goto Label_192; // 0xab Jump
	
Label_192:
	return 2; // 0xc0 Return
	
Label_172:
	var_208_int = 0; var_209_string = ""; var_210_object = Obj(); // 0xac PushV
	var_209_string = var_23_bool; // 0xad Mov
	var_210_object = var_22_string; // 0xae Mov
	func_5699(var_210_object); // 0xaf NEW_2
	var_25_int = var_208_int; // 0xb0 Mov
	var_211_int = 0; // 0xb2 PushI
	var_212_bool = var_25_int > var_211_int; // 0xb3 GT
	if(var_212_bool == 0) goto Label_192; // 0xb4 JumpB
	var_213_int = 1; // 0xb5 PushI
	var_214_bool = var_25_int > var_213_int; // 0xb6 GT
	if(var_214_bool == 0) goto Label_187; // 0xb7 JumpB
	func_251(var_25_int); // 0xb9 NEW_2
	
Label_187:
	var_215_string = ""; var_216_object = Obj(); // 0xbb PushV
	var_215_string = var_23_bool; // 0xbc Mov
	var_216_object = var_22_string; // 0xbd Mov
	func_5702(); // 0xbe NEW_2
}


task_1_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_string, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_string = ""; // 0xc2 PushV
	var_24_string = var_22_bool; // 0xc3 Mov
	func_5522(var_23_bool, var_24_string); // 0xc4 NEW_2
	if(var_23_bool == 0) goto Label_206; // 0xc6 JumpB
	func_251(var_22_bool); // 0xc8 NEW_2
	var_33_string = ""; // 0xca PushV
	var_33_string = var_22_bool; // 0xcb Mov
	func_5538(var_33_string); // 0xcc NEW_2
	
Label_206:
	return 0; // 0xce Return
}


task_1_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj(); // 0xd0 PushV
	var_24_object = var_22_bool; // 0xd1 Mov
	func_5480(var_23_bool, var_24_object); // 0xd2 NEW_2
	if(var_23_bool == 0) goto Label_221; // 0xd4 JumpB
	func_251(var_22_bool); // 0xd6 NEW_2
	var_38_object = Obj(); // 0xd8 PushV
	var_38_object = var_22_bool; // 0xd9 Mov
	func_5503(var_38_object); // 0xda NEW_2
	goto Label_225; // 0xdc Jump
	
Label_225:
	return 0; // 0xe1 Return
	
Label_221:
	var_112_object = Obj(); // 0xdd PushV
	var_112_object = var_22_bool; // 0xde Mov
	func_276(var_22_bool, var_112_object); // 0xdf NEW_2
}


task_1_event_3(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_object = Obj(); // 0xe3 PushV
	var_23_object = var_22_bool; // 0xe4 Mov
	func_276(var_22_bool, var_23_object); // 0xe5 NEW_2
	return 0; // 0xe7 Return
}


task_1_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_int, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 110; // 0xe9 PushI
	var_24_bool = var_22_bool != var_23_int; // 0xea Neq
	if(var_24_bool == 0) goto Label_237; // 0xeb JumpB
	return 0; // 0xec Return
	
Label_237:
	var_2_bool = 0; // 0xed TMovB
	var_25_int = 110; // 0xee PushI
	KillTimer(var_25_int); // 0xef Func
	ResetAAS(); // 0xf1 Func
	return 0; // 0xf3 Return
}


task_1_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_251(var_21_bool); // 0xf5 NEW_2
	func_5713(); // 0xf8 NEW_2
	return 0; // 0xfa Return
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_251(var_22_bool); // 0x10d NEW_2
	var_24_object = Obj(); // 0x10f PushV
	var_24_object = var_22_bool; // 0x110 Mov
	func_5417(); // 0x111 NEW_2
	return 0; // 0x113 Return
}


task_1_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	RequestClearPath(var_22_bool); // 0x17d Func
	return 0; // 0x17f Return
}


task_1_event_28(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	Stop(); // 0x180 Func
	return 0; // 0x182 Return
}


task_2_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x199 PushV
	var_25_int = 0; var_26_object = Obj(); // 0x19a PushV
	var_26_object = var_22_bool; // 0x19b Mov
	func_5704(var_26_object); // 0x19c NEW_2
	var_24_int = var_25_int; // 0x19d Mov
	var_27_int = 0; // 0x19f PushI
	var_28_bool = var_24_int > var_27_int; // 0x1a0 GT
	if(var_28_bool == 0) goto Label_428; // 0x1a1 JumpB
	var_29_int = 1; // 0x1a2 PushI
	var_30_bool = var_24_int > var_29_int; // 0x1a3 GT
	if(var_30_bool == 0) goto Label_424; // 0x1a4 JumpB
	func_654(); // 0x1a6 NEW_2
	
Label_424:
	var_31_object = Obj(); // 0x1a8 PushV
	var_31_object = var_22_bool; // 0x1a9 Mov
	func_5707(var_31_object); // 0x1aa NEW_2
	
Label_428:
	return 2; // 0x1ac Return
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x1ad PushV
	var_25_object = Obj(); // 0x1ae PushV
	var_25_object = var_22_bool; // 0x1af Mov
	func_5509(var_25_object); // 0x1b0 NEW_2
	var_34_int = 0; var_35_object = Obj(); // 0x1b2 PushV
	var_35_object = var_22_bool; // 0x1b3 Mov
	func_5592(var_34_int, var_35_object); // 0x1b4 NEW_2
	var_24_int = var_34_int; // 0x1b5 Mov
	var_70_int = 0; // 0x1b7 PushI
	var_71_bool = var_24_int > var_70_int; // 0x1b8 GT
	if(var_71_bool == 0) goto Label_452; // 0x1b9 JumpB
	var_72_int = 1; // 0x1ba PushI
	var_73_bool = var_24_int > var_72_int; // 0x1bb GT
	if(var_73_bool == 0) goto Label_448; // 0x1bc JumpB
	func_654(); // 0x1be NEW_2
	
Label_448:
	var_74_object = Obj(); // 0x1c0 PushV
	var_74_object = var_22_bool; // 0x1c1 Mov
	func_5602(var_74_object); // 0x1c2 NEW_2
	
Label_452:
	return 2; // 0x1c4 Return
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool)
{
	var_25_int = 0; var_26_int = 0; // 0x1c5 PushV
	var_27_bool = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_bool = 0; // 0x1c6 PushV
	var_28_object = var_22_object; // 0x1c7 Mov
	var_29_object = var_23_string; // 0x1c8 Mov
	var_30_bool = var_24_bool; // 0x1c9 Mov
	func_6243(var_28_object, var_29_object, var_30_bool); // 0x1ca NEW_2
	if(var_27_bool == 0) goto Label_480; // 0x1cc JumpB
	var_74_int = 0; var_75_object = Obj(); var_76_bool = 0; // 0x1cd PushV
	var_75_object = var_22_object; // 0x1ce Mov
	var_76_bool = var_24_bool; // 0x1cf Mov
	func_5610(var_75_object, var_76_bool); // 0x1d0 NEW_2
	var_26_int = var_74_int; // 0x1d1 Mov
	var_105_int = 0; // 0x1d3 PushI
	var_106_bool = var_26_int > var_105_int; // 0x1d4 GT
	if(var_106_bool == 0) goto Label_480; // 0x1d5 JumpB
	var_107_int = 1; // 0x1d6 PushI
	var_108_bool = var_26_int > var_107_int; // 0x1d7 GT
	if(var_108_bool == 0) goto Label_476; // 0x1d8 JumpB
	func_654(); // 0x1da NEW_2
	
Label_476:
	var_109_object = Obj(); // 0x1dc PushV
	var_109_object = var_22_object; // 0x1dd Mov
	func_5620(var_109_object); // 0x1de NEW_2
	
Label_480:
	return 2; // 0x1e0 Return
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x1e1 PushV
	var_25_int = 0; var_26_object = Obj(); // 0x1e2 PushV
	var_26_object = var_22_bool; // 0x1e3 Mov
	func_5694(var_26_object); // 0x1e4 NEW_2
	var_24_int = var_25_int; // 0x1e5 Mov
	var_27_int = 0; // 0x1e7 PushI
	var_28_bool = var_24_int > var_27_int; // 0x1e8 GT
	if(var_28_bool == 0) goto Label_500; // 0x1e9 JumpB
	var_29_int = 1; // 0x1ea PushI
	var_30_bool = var_24_int > var_29_int; // 0x1eb GT
	if(var_30_bool == 0) goto Label_496; // 0x1ec JumpB
	func_654(); // 0x1ee NEW_2
	
Label_496:
	var_31_object = Obj(); // 0x1f0 PushV
	var_31_object = var_22_bool; // 0x1f1 Mov
	func_5697(); // 0x1f2 NEW_2
	
Label_500:
	return 2; // 0x1f4 Return
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_object, var_21_object, var_22_string, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; // 0x1f5 PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; // 0x1f6 PushV
	var_27_object = var_22_string; // 0x1f7 Mov
	var_28_string = var_23_bool; // 0x1f8 Mov
	func_5423(var_26_bool, var_27_object, var_28_string); // 0x1f9 NEW_2
	if(var_26_bool == 0) goto Label_517; // 0x1fb JumpB
	func_654(); // 0x1fd NEW_2
	var_58_object = Obj(); var_59_string = ""; // 0x1ff PushV
	var_58_object = var_22_string; // 0x200 Mov
	var_59_string = var_23_bool; // 0x201 Mov
	func_5455(var_58_object, var_59_string); // 0x202 NEW_2
	goto Label_537; // 0x204 Jump
	
Label_537:
	return 2; // 0x219 Return
	
Label_517:
	var_207_int = 0; var_208_string = ""; var_209_object = Obj(); // 0x205 PushV
	var_208_string = var_23_bool; // 0x206 Mov
	var_209_object = var_22_string; // 0x207 Mov
	func_5699(var_209_object); // 0x208 NEW_2
	var_25_int = var_207_int; // 0x209 Mov
	var_210_int = 0; // 0x20b PushI
	var_211_bool = var_25_int > var_210_int; // 0x20c GT
	if(var_211_bool == 0) goto Label_537; // 0x20d JumpB
	var_212_int = 1; // 0x20e PushI
	var_213_bool = var_25_int > var_212_int; // 0x20f GT
	if(var_213_bool == 0) goto Label_532; // 0x210 JumpB
	func_654(); // 0x212 NEW_2
	
Label_532:
	var_214_string = ""; var_215_object = Obj(); // 0x214 PushV
	var_214_string = var_23_bool; // 0x215 Mov
	var_215_object = var_22_string; // 0x216 Mov
	func_5702(); // 0x217 NEW_2
}


task_2_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_string, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_string = ""; // 0x21b PushV
	var_24_string = var_22_bool; // 0x21c Mov
	func_5522(var_23_bool, var_24_string); // 0x21d NEW_2
	if(var_23_bool == 0) goto Label_551; // 0x21f JumpB
	func_654(); // 0x221 NEW_2
	var_32_string = ""; // 0x223 PushV
	var_32_string = var_22_bool; // 0x224 Mov
	func_5538(var_32_string); // 0x225 NEW_2
	
Label_551:
	return 0; // 0x227 Return
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_654(); // 0x229 NEW_2
	func_5713(); // 0x22c NEW_2
	return 0; // 0x22e Return
}


task_2_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj(); // 0x230 PushV
	var_24_object = var_22_bool; // 0x231 Mov
	func_5480(var_23_bool, var_24_object); // 0x232 NEW_2
	if(var_23_bool == 0) goto Label_572; // 0x234 JumpB
	func_654(); // 0x236 NEW_2
	var_37_object = Obj(); // 0x238 PushV
	var_37_object = var_22_bool; // 0x239 Mov
	func_5503(var_37_object); // 0x23a NEW_2
	
Label_572:
	return 0; // 0x23c Return
}


task_3_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x2cb PushV
	var_25_int = 0; var_26_object = Obj(); // 0x2cc PushV
	var_26_object = var_22_bool; // 0x2cd Mov
	func_5704(var_26_object); // 0x2ce NEW_2
	var_24_int = var_25_int; // 0x2cf Mov
	var_27_int = 0; // 0x2d1 PushI
	var_28_bool = var_24_int > var_27_int; // 0x2d2 GT
	if(var_28_bool == 0) goto Label_734; // 0x2d3 JumpB
	var_29_int = 1; // 0x2d4 PushI
	var_30_bool = var_24_int > var_29_int; // 0x2d5 GT
	if(var_30_bool == 0) goto Label_730; // 0x2d6 JumpB
	func_858(); // 0x2d8 NEW_2
	
Label_730:
	var_33_object = Obj(); // 0x2da PushV
	var_33_object = var_22_bool; // 0x2db Mov
	func_5707(var_33_object); // 0x2dc NEW_2
	
Label_734:
	return 2; // 0x2de Return
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x2df PushV
	var_25_object = Obj(); // 0x2e0 PushV
	var_25_object = var_22_bool; // 0x2e1 Mov
	func_5509(var_25_object); // 0x2e2 NEW_2
	var_34_int = 0; var_35_object = Obj(); // 0x2e4 PushV
	var_35_object = var_22_bool; // 0x2e5 Mov
	func_5592(var_34_int, var_35_object); // 0x2e6 NEW_2
	var_24_int = var_34_int; // 0x2e7 Mov
	var_70_int = 0; // 0x2e9 PushI
	var_71_bool = var_24_int > var_70_int; // 0x2ea GT
	if(var_71_bool == 0) goto Label_758; // 0x2eb JumpB
	var_72_int = 1; // 0x2ec PushI
	var_73_bool = var_24_int > var_72_int; // 0x2ed GT
	if(var_73_bool == 0) goto Label_754; // 0x2ee JumpB
	func_858(); // 0x2f0 NEW_2
	
Label_754:
	var_76_object = Obj(); // 0x2f2 PushV
	var_76_object = var_22_bool; // 0x2f3 Mov
	func_5602(var_76_object); // 0x2f4 NEW_2
	
Label_758:
	return 2; // 0x2f6 Return
}


task_3_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool)
{
	var_25_int = 0; var_26_int = 0; // 0x2f7 PushV
	var_27_bool = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_bool = 0; // 0x2f8 PushV
	var_28_object = var_22_object; // 0x2f9 Mov
	var_29_object = var_23_string; // 0x2fa Mov
	var_30_bool = var_24_bool; // 0x2fb Mov
	func_6243(var_28_object, var_29_object, var_30_bool); // 0x2fc NEW_2
	if(var_27_bool == 0) goto Label_786; // 0x2fe JumpB
	var_74_int = 0; var_75_object = Obj(); var_76_bool = 0; // 0x2ff PushV
	var_75_object = var_22_object; // 0x300 Mov
	var_76_bool = var_24_bool; // 0x301 Mov
	func_5610(var_75_object, var_76_bool); // 0x302 NEW_2
	var_26_int = var_74_int; // 0x303 Mov
	var_105_int = 0; // 0x305 PushI
	var_106_bool = var_26_int > var_105_int; // 0x306 GT
	if(var_106_bool == 0) goto Label_786; // 0x307 JumpB
	var_107_int = 1; // 0x308 PushI
	var_108_bool = var_26_int > var_107_int; // 0x309 GT
	if(var_108_bool == 0) goto Label_782; // 0x30a JumpB
	func_858(); // 0x30c NEW_2
	
Label_782:
	var_111_object = Obj(); // 0x30e PushV
	var_111_object = var_22_object; // 0x30f Mov
	func_5620(var_111_object); // 0x310 NEW_2
	
Label_786:
	return 2; // 0x312 Return
}


task_3_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x313 PushV
	var_25_int = 0; var_26_object = Obj(); // 0x314 PushV
	var_26_object = var_22_bool; // 0x315 Mov
	func_5694(var_26_object); // 0x316 NEW_2
	var_24_int = var_25_int; // 0x317 Mov
	var_27_int = 0; // 0x319 PushI
	var_28_bool = var_24_int > var_27_int; // 0x31a GT
	if(var_28_bool == 0) goto Label_806; // 0x31b JumpB
	var_29_int = 1; // 0x31c PushI
	var_30_bool = var_24_int > var_29_int; // 0x31d GT
	if(var_30_bool == 0) goto Label_802; // 0x31e JumpB
	func_858(); // 0x320 NEW_2
	
Label_802:
	var_33_object = Obj(); // 0x322 PushV
	var_33_object = var_22_bool; // 0x323 Mov
	func_5697(); // 0x324 NEW_2
	
Label_806:
	return 2; // 0x326 Return
}


task_3_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_string, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_object, var_21_object, var_22_string, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; // 0x327 PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; // 0x328 PushV
	var_27_object = var_22_string; // 0x329 Mov
	var_28_string = var_23_bool; // 0x32a Mov
	func_5423(var_26_bool, var_27_object, var_28_string); // 0x32b NEW_2
	if(var_26_bool == 0) goto Label_823; // 0x32d JumpB
	func_858(); // 0x32f NEW_2
	var_60_object = Obj(); var_61_string = ""; // 0x331 PushV
	var_60_object = var_22_string; // 0x332 Mov
	var_61_string = var_23_bool; // 0x333 Mov
	func_5455(var_60_object, var_61_string); // 0x334 NEW_2
	goto Label_843; // 0x336 Jump
	
Label_843:
	return 2; // 0x34b Return
	
Label_823:
	var_209_int = 0; var_210_string = ""; var_211_object = Obj(); // 0x337 PushV
	var_210_string = var_23_bool; // 0x338 Mov
	var_211_object = var_22_string; // 0x339 Mov
	func_5699(var_211_object); // 0x33a NEW_2
	var_25_int = var_209_int; // 0x33b Mov
	var_212_int = 0; // 0x33d PushI
	var_213_bool = var_25_int > var_212_int; // 0x33e GT
	if(var_213_bool == 0) goto Label_843; // 0x33f JumpB
	var_214_int = 1; // 0x340 PushI
	var_215_bool = var_25_int > var_214_int; // 0x341 GT
	if(var_215_bool == 0) goto Label_838; // 0x342 JumpB
	func_858(); // 0x344 NEW_2
	
Label_838:
	var_216_string = ""; var_217_object = Obj(); // 0x346 PushV
	var_216_string = var_23_bool; // 0x347 Mov
	var_217_object = var_22_string; // 0x348 Mov
	func_5702(); // 0x349 NEW_2
}


task_3_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_string = ""; // 0x34d PushV
	var_24_string = var_22_bool; // 0x34e Mov
	func_5522(var_23_bool, var_24_string); // 0x34f NEW_2
	if(var_23_bool == 0) goto Label_857; // 0x351 JumpB
	func_858(); // 0x353 NEW_2
	var_34_string = ""; // 0x355 PushV
	var_34_string = var_22_bool; // 0x356 Mov
	func_5538(var_34_string); // 0x357 NEW_2
	
Label_857:
	return 0; // 0x359 Return
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_858(); // 0x367 NEW_2
	var_25_object = Obj(); // 0x369 PushV
	var_25_object = var_22_bool; // 0x36a Mov
	func_5417(); // 0x36b NEW_2
	return 0; // 0x36d Return
}


task_3_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x36e PushV
	var_27_int = 111; // 0x36f PushI
	var_28_bool = var_22_bool != var_27_int; // 0x370 Neq
	if(var_28_bool == 0) goto Label_883; // 0x371 JumpB
	return 4; // 0x372 Return
	
Label_883:
	var_29_bool = 0; var_30_object = Obj(); // 0x373 PushV
	var_30_object = var_0_bool; // 0x374 MovT
	func_5065(var_29_bool, var_30_object); // 0x375 NEW_2
	var_63_bool = var_29_bool == 0; // 0x377 Not
	if(var_63_bool == 0) goto Label_893; // 0x378 JumpB
	func_858(); // 0x37a NEW_2
	return 4; // 0x37c Return
	
Label_893:
	GetDirection(var_25_cvector); // 0x37d Func
	var_66_cvector = CVector(0,0,0); var_67_object = Obj(); // 0x37f PushV
	var_67_object = var_0_bool; // 0x380 MovT
	func_4992(var_67_object); // 0x381 NEW_2
	var_26_cvector = var_66_cvector; // 0x382 Mov
	var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); // 0x384 PushV
	var_73_cvector = var_25_cvector; // 0x385 Mov
	var_74_cvector = var_26_cvector; // 0x386 Mov
	func_5376(var_72_float, var_73_cvector, var_74_cvector); // 0x387 NEW_2
	var_96_float = 0.5; // 0x389 PushF
	var_97_bool = var_72_float < var_96_float; // 0x38a LT
	if(var_97_bool == 0) goto Label_912; // 0x38b JumpB
	var_98_object = Obj(); // 0x38c PushV
	var_98_object = var_0_bool; // 0x38d MovT
	func_5089(); // 0x38e NEW_2
	
Label_912:
	return 4; // 0x390 Return
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_858(); // 0x392 NEW_2
	func_5713(); // 0x395 NEW_2
	return 0; // 0x397 Return
}


task_3_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj(); // 0x399 PushV
	var_24_object = var_22_bool; // 0x39a Mov
	func_5480(var_23_bool, var_24_object); // 0x39b NEW_2
	if(var_23_bool == 0) goto Label_933; // 0x39d JumpB
	func_858(); // 0x39f NEW_2
	var_39_object = Obj(); // 0x3a1 PushV
	var_39_object = var_22_bool; // 0x3a2 Mov
	func_5503(var_39_object); // 0x3a3 NEW_2
	
Label_933:
	return 0; // 0x3a5 Return
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_1124(var_21_bool); // 0x3c3 NEW_2
	func_5713(); // 0x3c6 NEW_2
	return 0; // 0x3c8 Return
}


task_4_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_int, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; // 0x430 PushV
	var_31_int = 120; // 0x431 PushI
	var_32_bool = var_22_bool != var_31_int; // 0x432 Neq
	if(var_32_bool == 0) goto Label_1077; // 0x433 JumpB
	return 8; // 0x434 Return
	
Label_1077:
	var_33_bool = var_0_bool == 0; // 0x435 NullEq
	if(var_33_bool == 0) goto Label_1086; // 0x436 JumpB
	Stop(); // 0x437 Func
	var_34_int = 1; // 0x439 PushI
	KillTimer(var_34_int); // 0x43a Func
	var_2_bool = 1; // 0x43c TMovB
	goto Label_1123; // 0x43d Jump
	
Label_1123:
	return 8; // 0x463 Return
	
Label_1086:
	GetDirection(var_27_cvector); // 0x43e Func
	var_35_float = 7000.0; // 0x440 PushF
	FindDirLength(var_28_float, var_27_cvector, var_35_float); // 0x441 Func
	var_36_cvector = CVector(0,0,0); var_37_float = 0; // 0x443 PushV
	var_37_float = 1.74533; // 0x444 MovF
	func_969(var_36_cvector, var_37_float); // 0x445 NEW_2
	var_29_cvector = var_36_cvector; // 0x446 Mov
	var_30_float = var_29_cvector | var_29_cvector; // 0x448 Or2
	var_66_bool = 0; // 0x449 PushV
	var_66_bool = 0; // 0x44a MovB
	var_67_float = 2500.0; // 0x44b PushF
	var_68_bool = var_30_float >= var_67_float; // 0x44c GE
	if(var_68_bool == 0) goto Label_1116; // 0x44d JumpB
	var_69_bool = 0; // 0x44e PushV
	var_69_bool = 1; // 0x44f MovB
	var_70_float = var_28_float * var_28_float; // 0x450 Mult
	var_71_float = 2.25; // 0x451 PushF
	var_72_float = var_70_float * var_71_float; // 0x452 Mult
	var_73_bool = var_30_float >= var_72_float; // 0x453 GE
	if(var_73_bool == 0) goto Label_1114; // 0x454 JumpB
	var_74_bool = 0; // 0x455 PushV
	func_1140(var_69_bool, var_74_bool); // 0x456 NEW_2
	if(var_74_bool == 0) goto Label_1114; // 0x458 JumpB
	var_69_bool = 0; // 0x459 MovB
	
Label_1114:
	if(var_69_bool == 0) goto Label_1116; // 0x45a JumpB
	var_66_bool = 1; // 0x45b MovB
	
Label_1116:
	if(var_66_bool == 0) goto Label_1123; // 0x45c JumpB
	Stop(); // 0x45d Func
	var_94_cvector = CVector(0,0,0); // 0x45f PushV
	func_4987(var_94_cvector); // 0x460 NEW_2
	var_1_bool = var_94_cvector + var_29_cvector; // 0x462 Add2
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1124(var_22_bool); // 0x46d NEW_2
	var_24_object = Obj(); // 0x46f PushV
	var_24_object = var_22_bool; // 0x470 Mov
	func_5417(); // 0x471 NEW_2
	return 0; // 0x473 Return
}


task_5_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; // 0x4eb PushV
	var_31_int = 120; // 0x4ec PushI
	var_32_bool = var_22_bool != var_31_int; // 0x4ed Neq
	if(var_32_bool == 0) goto Label_1264; // 0x4ee JumpB
	return 8; // 0x4ef Return
	
Label_1264:
	var_33_bool = var_0_bool == 0; // 0x4f0 NullEq
	if(var_33_bool == 0) goto Label_1273; // 0x4f1 JumpB
	Stop(); // 0x4f2 Func
	var_34_int = 1; // 0x4f4 PushI
	KillTimer(var_34_int); // 0x4f5 Func
	var_2_bool = 1; // 0x4f7 TMovB
	goto Label_1310; // 0x4f8 Jump
	
Label_1310:
	return 8; // 0x51e Return
	
Label_1273:
	GetDirection(var_27_cvector); // 0x4f9 Func
	var_35_float = 7000.0; // 0x4fb PushF
	FindDirLength(var_28_float, var_27_cvector, var_35_float); // 0x4fc Func
	var_36_cvector = CVector(0,0,0); var_37_float = 0; // 0x4fe PushV
	var_37_float = 1.74533; // 0x4ff MovF
	func_1156(var_36_cvector, var_37_float); // 0x500 NEW_2
	var_29_cvector = var_36_cvector; // 0x501 Mov
	var_30_float = var_29_cvector | var_29_cvector; // 0x503 Or2
	var_66_bool = 0; // 0x504 PushV
	var_66_bool = 0; // 0x505 MovB
	var_67_float = 2500.0; // 0x506 PushF
	var_68_bool = var_30_float >= var_67_float; // 0x507 GE
	if(var_68_bool == 0) goto Label_1303; // 0x508 JumpB
	var_69_bool = 0; // 0x509 PushV
	var_69_bool = 1; // 0x50a MovB
	var_70_float = var_28_float * var_28_float; // 0x50b Mult
	var_71_float = 2.25; // 0x50c PushF
	var_72_float = var_70_float * var_71_float; // 0x50d Mult
	var_73_bool = var_30_float >= var_72_float; // 0x50e GE
	if(var_73_bool == 0) goto Label_1301; // 0x50f JumpB
	var_74_bool = 0; // 0x510 PushV
	func_1327(var_69_bool, var_74_bool); // 0x511 NEW_2
	if(var_74_bool == 0) goto Label_1301; // 0x513 JumpB
	var_69_bool = 0; // 0x514 MovB
	
Label_1301:
	if(var_69_bool == 0) goto Label_1303; // 0x515 JumpB
	var_66_bool = 1; // 0x516 MovB
	
Label_1303:
	if(var_66_bool == 0) goto Label_1310; // 0x517 JumpB
	Stop(); // 0x518 Func
	var_94_cvector = CVector(0,0,0); // 0x51a PushV
	func_4987(var_94_cvector); // 0x51b NEW_2
	var_1_bool = var_94_cvector + var_29_cvector; // 0x51d Add2
}


task_5_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1311(var_22_bool); // 0x528 NEW_2
	var_24_object = Obj(); // 0x52a PushV
	var_24_object = var_22_bool; // 0x52b Mov
	func_5417(); // 0x52c NEW_2
	return 0; // 0x52e Return
}


task_6_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_1505(var_21_bool); // 0x540 NEW_2
	func_5713(); // 0x543 NEW_2
	return 0; // 0x545 Return
}


task_6_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_int, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; // 0x5ad PushV
	var_31_int = 120; // 0x5ae PushI
	var_32_bool = var_22_bool != var_31_int; // 0x5af Neq
	if(var_32_bool == 0) goto Label_1458; // 0x5b0 JumpB
	return 8; // 0x5b1 Return
	
Label_1458:
	var_33_bool = var_0_bool == 0; // 0x5b2 NullEq
	if(var_33_bool == 0) goto Label_1467; // 0x5b3 JumpB
	Stop(); // 0x5b4 Func
	var_34_int = 1; // 0x5b6 PushI
	KillTimer(var_34_int); // 0x5b7 Func
	var_2_bool = 1; // 0x5b9 TMovB
	goto Label_1504; // 0x5ba Jump
	
Label_1504:
	return 8; // 0x5e0 Return
	
Label_1467:
	GetDirection(var_27_cvector); // 0x5bb Func
	var_35_float = 7000.0; // 0x5bd PushF
	FindDirLength(var_28_float, var_27_cvector, var_35_float); // 0x5be Func
	var_36_cvector = CVector(0,0,0); var_37_float = 0; // 0x5c0 PushV
	var_37_float = 1.74533; // 0x5c1 MovF
	func_1350(var_36_cvector, var_37_float); // 0x5c2 NEW_2
	var_29_cvector = var_36_cvector; // 0x5c3 Mov
	var_30_float = var_29_cvector | var_29_cvector; // 0x5c5 Or2
	var_66_bool = 0; // 0x5c6 PushV
	var_66_bool = 0; // 0x5c7 MovB
	var_67_float = 2500.0; // 0x5c8 PushF
	var_68_bool = var_30_float >= var_67_float; // 0x5c9 GE
	if(var_68_bool == 0) goto Label_1497; // 0x5ca JumpB
	var_69_bool = 0; // 0x5cb PushV
	var_69_bool = 1; // 0x5cc MovB
	var_70_float = var_28_float * var_28_float; // 0x5cd Mult
	var_71_float = 2.25; // 0x5ce PushF
	var_72_float = var_70_float * var_71_float; // 0x5cf Mult
	var_73_bool = var_30_float >= var_72_float; // 0x5d0 GE
	if(var_73_bool == 0) goto Label_1495; // 0x5d1 JumpB
	var_74_bool = 0; // 0x5d2 PushV
	func_1521(var_69_bool, var_74_bool); // 0x5d3 NEW_2
	if(var_74_bool == 0) goto Label_1495; // 0x5d5 JumpB
	var_69_bool = 0; // 0x5d6 MovB
	
Label_1495:
	if(var_69_bool == 0) goto Label_1497; // 0x5d7 JumpB
	var_66_bool = 1; // 0x5d8 MovB
	
Label_1497:
	if(var_66_bool == 0) goto Label_1504; // 0x5d9 JumpB
	Stop(); // 0x5da Func
	var_94_cvector = CVector(0,0,0); // 0x5dc PushV
	func_4987(var_94_cvector); // 0x5dd NEW_2
	var_1_bool = var_94_cvector + var_29_cvector; // 0x5df Add2
}


task_6_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1505(var_22_bool); // 0x5ea NEW_2
	var_24_object = Obj(); // 0x5ec PushV
	var_24_object = var_22_bool; // 0x5ed Mov
	func_5417(); // 0x5ee NEW_2
	return 0; // 0x5f0 Return
}


task_7_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_1699(var_21_bool); // 0x602 NEW_2
	func_5713(); // 0x605 NEW_2
	return 0; // 0x607 Return
}


task_7_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_int, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; // 0x66f PushV
	var_31_int = 120; // 0x670 PushI
	var_32_bool = var_22_bool != var_31_int; // 0x671 Neq
	if(var_32_bool == 0) goto Label_1652; // 0x672 JumpB
	return 8; // 0x673 Return
	
Label_1652:
	var_33_bool = var_0_bool == 0; // 0x674 NullEq
	if(var_33_bool == 0) goto Label_1661; // 0x675 JumpB
	Stop(); // 0x676 Func
	var_34_int = 1; // 0x678 PushI
	KillTimer(var_34_int); // 0x679 Func
	var_2_bool = 1; // 0x67b TMovB
	goto Label_1698; // 0x67c Jump
	
Label_1698:
	return 8; // 0x6a2 Return
	
Label_1661:
	GetDirection(var_27_cvector); // 0x67d Func
	var_35_float = 7000.0; // 0x67f PushF
	FindDirLength(var_28_float, var_27_cvector, var_35_float); // 0x680 Func
	var_36_cvector = CVector(0,0,0); var_37_float = 0; // 0x682 PushV
	var_37_float = 1.74533; // 0x683 MovF
	func_1544(var_36_cvector, var_37_float); // 0x684 NEW_2
	var_29_cvector = var_36_cvector; // 0x685 Mov
	var_30_float = var_29_cvector | var_29_cvector; // 0x687 Or2
	var_66_bool = 0; // 0x688 PushV
	var_66_bool = 0; // 0x689 MovB
	var_67_float = 2500.0; // 0x68a PushF
	var_68_bool = var_30_float >= var_67_float; // 0x68b GE
	if(var_68_bool == 0) goto Label_1691; // 0x68c JumpB
	var_69_bool = 0; // 0x68d PushV
	var_69_bool = 1; // 0x68e MovB
	var_70_float = var_28_float * var_28_float; // 0x68f Mult
	var_71_float = 2.25; // 0x690 PushF
	var_72_float = var_70_float * var_71_float; // 0x691 Mult
	var_73_bool = var_30_float >= var_72_float; // 0x692 GE
	if(var_73_bool == 0) goto Label_1689; // 0x693 JumpB
	var_74_bool = 0; // 0x694 PushV
	func_1715(var_69_bool, var_74_bool); // 0x695 NEW_2
	if(var_74_bool == 0) goto Label_1689; // 0x697 JumpB
	var_69_bool = 0; // 0x698 MovB
	
Label_1689:
	if(var_69_bool == 0) goto Label_1691; // 0x699 JumpB
	var_66_bool = 1; // 0x69a MovB
	
Label_1691:
	if(var_66_bool == 0) goto Label_1698; // 0x69b JumpB
	Stop(); // 0x69c Func
	var_94_cvector = CVector(0,0,0); // 0x69e PushV
	func_4987(var_94_cvector); // 0x69f NEW_2
	var_1_bool = var_94_cvector + var_29_cvector; // 0x6a1 Add2
}


task_7_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1699(var_22_bool); // 0x6ac NEW_2
	var_24_object = Obj(); // 0x6ae PushV
	var_24_object = var_22_bool; // 0x6af Mov
	func_5417(); // 0x6b0 NEW_2
	return 0; // 0x6b2 Return
}


task_9_event_11(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_int, var_23_int)
{
	var_24_int = 1; // 0x9d2 PushI
	if(var_24_int == 0) goto Label_4986; // 0x9d3 JumpB
	func_5295(); // 0x9d5 NEW_2
	var_26_int = 45706; // 0x9d7 PushI
	var_27_bool = var_23_int == var_26_int; // 0x9d8 Eq
	if(var_27_bool == 0) goto Label_2527; // 0x9d9 JumpB
	var_28_object = Obj(); var_29_object = Obj(); // 0x9da PushV
	var_28_object = var_1_bool; // 0x9db MovT
	var_29_object = var_0_bool; // 0x9dc MovT
	func_5768(); // 0x9dd NEW_2
	
Label_2527:
	var_31_int = 45718; // 0x9df PushI
	var_32_bool = var_23_int == var_31_int; // 0x9e0 Eq
	if(var_32_bool == 0) goto Label_2535; // 0x9e1 JumpB
	var_33_object = Obj(); var_34_object = Obj(); // 0x9e2 PushV
	var_33_object = var_1_bool; // 0x9e3 MovT
	var_34_object = var_0_bool; // 0x9e4 MovT
	func_5768(); // 0x9e5 NEW_2
	
Label_2535:
	var_35_int = 45732; // 0x9e7 PushI
	var_36_bool = var_23_int == var_35_int; // 0x9e8 Eq
	if(var_36_bool == 0) goto Label_2543; // 0x9e9 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x9ea PushV
	var_37_object = var_1_bool; // 0x9eb MovT
	var_38_object = var_0_bool; // 0x9ec MovT
	func_5768(); // 0x9ed NEW_2
	
Label_2543:
	var_39_int = 39354; // 0x9ef PushI
	var_40_bool = var_23_int == var_39_int; // 0x9f0 Eq
	if(var_40_bool == 0) goto Label_2551; // 0x9f1 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0x9f2 PushV
	var_41_object = var_1_bool; // 0x9f3 MovT
	var_42_object = var_0_bool; // 0x9f4 MovT
	func_5768(); // 0x9f5 NEW_2
	
Label_2551:
	var_43_int = 45703; // 0x9f7 PushI
	var_44_bool = var_22_int == var_43_int; // 0x9f8 Eq
	if(var_44_bool == 0) goto Label_3202; // 0x9f9 JumpB
	var_45_bool = 0; var_46_object = Obj(); // 0x9fa PushV
	var_46_object = var_1_bool; // 0x9fb MovT
	func_5785(var_46_object); // 0x9fc NEW_2
	if(var_45_bool == 0) goto Label_2868; // 0x9fe JumpB
	var_53_string = ""; // 0x9ff PushV
	var_53_string = "Neutral"; // 0xa00 MovS
	func_2491(var_23_int, var_53_string); // 0xa01 NEW_2
	var_70_int = 543247; // 0xa03 PushI
	SetMessage(var_70_int); // 0xa04 TObjFunc
	ClearReplies(); // 0xa06 TObjFunc
	var_71_bool = 0; // 0xa08 PushV
	var_71_bool = 1; // 0xa09 MovB
	var_72_bool = 0; // 0xa0a PushV
	var_72_bool = 1; // 0xa0b MovB
	var_73_bool = 0; var_74_object = Obj(); // 0xa0c PushV
	var_74_object = var_1_bool; // 0xa0d MovT
	func_5807(var_73_bool, var_74_object); // 0xa0e NEW_2
	if(var_73_bool == 0) goto Label_2583; // 0xa10 JumpB
	var_84_bool = 0; var_85_object = Obj(); // 0xa11 PushV
	var_85_object = var_1_bool; // 0xa12 MovT
	func_5857(var_84_bool, var_85_object); // 0xa13 NEW_2
	if(var_84_bool == 0) goto Label_2583; // 0xa15 JumpB
	var_72_bool = 0; // 0xa16 MovB
	
Label_2583:
	if(var_72_bool == 0) goto Label_2590; // 0xa17 JumpB
	var_90_bool = 0; var_91_object = Obj(); // 0xa18 PushV
	var_91_object = var_1_bool; // 0xa19 MovT
	func_5887(var_90_bool, var_91_object); // 0xa1a NEW_2
	if(var_90_bool == 0) goto Label_2590; // 0xa1c JumpB
	var_71_bool = 0; // 0xa1d MovB
	
Label_2590:
	if(var_71_bool == 0) goto Label_2596; // 0xa1e JumpB
	var_96_int = 543249; // 0xa1f PushI
	var_97_int = 45709; // 0xa20 PushI
	var_98_int = 45705; // 0xa21 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0xa22 TObjFunc
	
Label_2596:
	var_99_bool = 0; var_100_object = Obj(); // 0xa24 PushV
	var_100_object = var_1_bool; // 0xa25 MovT
	func_5837(var_99_bool, var_100_object); // 0xa26 NEW_2
	if(var_99_bool == 0) goto Label_2606; // 0xa28 JumpB
	var_105_int = 543251; // 0xa29 PushI
	var_106_int = 45719; // 0xa2a PushI
	var_107_int = 45707; // 0xa2b PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0xa2c TObjFunc
	
Label_2606:
	var_108_bool = 0; // 0xa2e PushV
	var_108_bool = 1; // 0xa2f MovB
	var_109_bool = 0; var_110_object = Obj(); // 0xa30 PushV
	var_110_object = var_1_bool; // 0xa31 MovT
	func_5837(var_109_bool, var_110_object); // 0xa32 NEW_2
	if(var_109_bool == 0) goto Label_2619; // 0xa34 JumpB
	var_111_bool = 0; var_112_object = Obj(); // 0xa35 PushV
	var_112_object = var_1_bool; // 0xa36 MovT
	func_5847(var_111_bool, var_112_object); // 0xa37 NEW_2
	if(var_111_bool == 0) goto Label_2619; // 0xa39 JumpB
	var_108_bool = 0; // 0xa3a MovB
	
Label_2619:
	if(var_108_bool == 0) goto Label_2625; // 0xa3b JumpB
	var_117_int = 543277; // 0xa3c PushI
	var_118_int = 45734; // 0xa3d PushI
	var_119_int = 45733; // 0xa3e PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0xa3f TObjFunc
	
Label_2625:
	var_120_bool = 0; // 0xa41 PushV
	var_120_bool = 1; // 0xa42 MovB
	var_121_bool = 0; var_122_object = Obj(); // 0xa43 PushV
	var_122_object = var_1_bool; // 0xa44 MovT
	func_5867(var_121_bool, var_122_object); // 0xa45 NEW_2
	if(var_121_bool == 0) goto Label_2638; // 0xa47 JumpB
	var_127_bool = 0; var_128_object = Obj(); // 0xa48 PushV
	var_128_object = var_1_bool; // 0xa49 MovT
	func_5877(var_127_bool, var_128_object); // 0xa4a NEW_2
	if(var_127_bool == 0) goto Label_2638; // 0xa4c JumpB
	var_120_bool = 0; // 0xa4d MovB
	
Label_2638:
	if(var_120_bool == 0) goto Label_2644; // 0xa4e JumpB
	var_133_int = 543282; // 0xa4f PushI
	var_134_int = 45739; // 0xa50 PushI
	var_135_int = 45738; // 0xa51 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0xa52 TObjFunc
	
Label_2644:
	var_136_bool = 0; // 0xa54 PushV
	var_136_bool = 1; // 0xa55 MovB
	var_137_bool = 0; // 0xa56 PushV
	var_137_bool = 1; // 0xa57 MovB
	var_138_bool = 0; // 0xa58 PushV
	var_138_bool = 1; // 0xa59 MovB
	var_139_bool = 0; var_140_object = Obj(); // 0xa5a PushV
	var_140_object = var_1_bool; // 0xa5b MovT
	func_5797(var_139_bool, var_140_object); // 0xa5c NEW_2
	if(var_139_bool == 0) goto Label_2661; // 0xa5e JumpB
	var_145_bool = 0; var_146_object = Obj(); // 0xa5f PushV
	var_146_object = var_1_bool; // 0xa60 MovT
	func_5807(var_145_bool, var_146_object); // 0xa61 NEW_2
	if(var_145_bool == 0) goto Label_2661; // 0xa63 JumpB
	var_138_bool = 0; // 0xa64 MovB
	
Label_2661:
	if(var_138_bool == 0) goto Label_2668; // 0xa65 JumpB
	var_147_bool = 0; var_148_object = Obj(); // 0xa66 PushV
	var_148_object = var_1_bool; // 0xa67 MovT
	func_5817(var_147_bool, var_148_object); // 0xa68 NEW_2
	if(var_147_bool == 0) goto Label_2668; // 0xa6a JumpB
	var_137_bool = 0; // 0xa6b MovB
	
Label_2668:
	if(var_137_bool == 0) goto Label_2675; // 0xa6c JumpB
	var_153_bool = 0; var_154_object = Obj(); // 0xa6d PushV
	var_154_object = var_1_bool; // 0xa6e MovT
	func_5827(var_153_bool, var_154_object); // 0xa6f NEW_2
	if(var_153_bool == 0) goto Label_2675; // 0xa71 JumpB
	var_136_bool = 0; // 0xa72 MovB
	
Label_2675:
	if(var_136_bool == 0) goto Label_2681; // 0xa73 JumpB
	var_159_int = 543250; // 0xa74 PushI
	var_160_int = -1; // 0xa75 PushI
	var_161_int = 45706; // 0xa76 PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0xa77 TObjFunc
	
Label_2681:
	var_162_bool = 0; // 0xa79 PushV
	var_162_bool = 1; // 0xa7a MovB
	var_163_bool = 0; // 0xa7b PushV
	var_163_bool = 1; // 0xa7c MovB
	var_164_bool = 0; // 0xa7d PushV
	var_164_bool = 1; // 0xa7e MovB
	var_165_bool = 0; var_166_object = Obj(); // 0xa7f PushV
	var_166_object = var_1_bool; // 0xa80 MovT
	func_5837(var_165_bool, var_166_object); // 0xa81 NEW_2
	if(var_165_bool == 0) goto Label_2698; // 0xa83 JumpB
	var_167_bool = 0; var_168_object = Obj(); // 0xa84 PushV
	var_168_object = var_1_bool; // 0xa85 MovT
	func_5847(var_167_bool, var_168_object); // 0xa86 NEW_2
	if(var_167_bool == 0) goto Label_2698; // 0xa88 JumpB
	var_164_bool = 0; // 0xa89 MovB
	
Label_2698:
	if(var_164_bool == 0) goto Label_2705; // 0xa8a JumpB
	var_169_bool = 0; var_170_object = Obj(); // 0xa8b PushV
	var_170_object = var_1_bool; // 0xa8c MovT
	func_5857(var_169_bool, var_170_object); // 0xa8d NEW_2
	if(var_169_bool == 0) goto Label_2705; // 0xa8f JumpB
	var_163_bool = 0; // 0xa90 MovB
	
Label_2705:
	if(var_163_bool == 0) goto Label_2712; // 0xa91 JumpB
	var_171_bool = 0; var_172_object = Obj(); // 0xa92 PushV
	var_172_object = var_1_bool; // 0xa93 MovT
	func_5867(var_171_bool, var_172_object); // 0xa94 NEW_2
	if(var_171_bool == 0) goto Label_2712; // 0xa96 JumpB
	var_162_bool = 0; // 0xa97 MovB
	
Label_2712:
	if(var_162_bool == 0) goto Label_2718; // 0xa98 JumpB
	var_173_int = 543262; // 0xa99 PushI
	var_174_int = -1; // 0xa9a PushI
	var_175_int = 45718; // 0xa9b PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0xa9c TObjFunc
	
Label_2718:
	var_176_bool = 0; // 0xa9e PushV
	var_176_bool = 1; // 0xa9f MovB
	var_177_bool = 0; // 0xaa0 PushV
	var_177_bool = 1; // 0xaa1 MovB
	var_178_bool = 0; // 0xaa2 PushV
	var_178_bool = 1; // 0xaa3 MovB
	var_179_bool = 0; var_180_object = Obj(); // 0xaa4 PushV
	var_180_object = var_1_bool; // 0xaa5 MovT
	func_5877(var_179_bool, var_180_object); // 0xaa6 NEW_2
	if(var_179_bool == 0) goto Label_2735; // 0xaa8 JumpB
	var_181_bool = 0; var_182_object = Obj(); // 0xaa9 PushV
	var_182_object = var_1_bool; // 0xaaa MovT
	func_5887(var_181_bool, var_182_object); // 0xaab NEW_2
	if(var_181_bool == 0) goto Label_2735; // 0xaad JumpB
	var_178_bool = 0; // 0xaae MovB
	
Label_2735:
	if(var_178_bool == 0) goto Label_2742; // 0xaaf JumpB
	var_183_bool = 0; var_184_object = Obj(); // 0xab0 PushV
	var_184_object = var_1_bool; // 0xab1 MovT
	func_5897(var_183_bool, var_184_object); // 0xab2 NEW_2
	if(var_183_bool == 0) goto Label_2742; // 0xab4 JumpB
	var_177_bool = 0; // 0xab5 MovB
	
Label_2742:
	if(var_177_bool == 0) goto Label_2749; // 0xab6 JumpB
	var_189_bool = 0; var_190_object = Obj(); // 0xab7 PushV
	var_190_object = var_1_bool; // 0xab8 MovT
	func_5907(var_189_bool, var_190_object); // 0xab9 NEW_2
	if(var_189_bool == 0) goto Label_2749; // 0xabb JumpB
	var_176_bool = 0; // 0xabc MovB
	
Label_2749:
	if(var_176_bool == 0) goto Label_2755; // 0xabd JumpB
	var_195_int = 543276; // 0xabe PushI
	var_196_int = -1; // 0xabf PushI
	var_197_int = 45732; // 0xac0 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0xac1 TObjFunc
	
Label_2755:
	var_198_bool = 0; // 0xac3 PushV
	var_198_bool = 1; // 0xac4 MovB
	var_199_bool = 0; // 0xac5 PushV
	var_199_bool = 1; // 0xac6 MovB
	var_200_bool = 0; // 0xac7 PushV
	var_200_bool = 1; // 0xac8 MovB
	var_201_bool = 0; var_202_object = Obj(); // 0xac9 PushV
	var_202_object = var_1_bool; // 0xaca MovT
	func_5797(var_201_bool, var_202_object); // 0xacb NEW_2
	if(var_201_bool == 0) goto Label_2772; // 0xacd JumpB
	var_203_bool = 0; var_204_object = Obj(); // 0xace PushV
	var_204_object = var_1_bool; // 0xacf MovT
	func_5817(var_203_bool, var_204_object); // 0xad0 NEW_2
	if(var_203_bool == 0) goto Label_2772; // 0xad2 JumpB
	var_200_bool = 0; // 0xad3 MovB
	
Label_2772:
	if(var_200_bool == 0) goto Label_2779; // 0xad4 JumpB
	var_205_bool = 0; var_206_object = Obj(); // 0xad5 PushV
	var_206_object = var_1_bool; // 0xad6 MovT
	func_5827(var_205_bool, var_206_object); // 0xad7 NEW_2
	if(var_205_bool == 0) goto Label_2779; // 0xad9 JumpB
	var_199_bool = 0; // 0xada MovB
	
Label_2779:
	if(var_199_bool == 0) goto Label_2786; // 0xadb JumpB
	var_207_bool = 0; var_208_object = Obj(); // 0xadc PushV
	var_208_object = var_1_bool; // 0xadd MovT
	func_5857(var_207_bool, var_208_object); // 0xade NEW_2
	if(var_207_bool == 0) goto Label_2786; // 0xae0 JumpB
	var_198_bool = 0; // 0xae1 MovB
	
Label_2786:
	if(var_198_bool == 0) goto Label_2792; // 0xae2 JumpB
	var_209_int = 543248; // 0xae3 PushI
	var_210_int = -1; // 0xae4 PushI
	var_211_int = 45704; // 0xae5 PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0xae6 TObjFunc
	
Label_2792:
	var_212_bool = 0; // 0xae8 PushV
	var_212_bool = 1; // 0xae9 MovB
	var_213_bool = 0; // 0xaea PushV
	var_213_bool = 1; // 0xaeb MovB
	var_214_bool = 0; // 0xaec PushV
	var_214_bool = 1; // 0xaed MovB
	var_215_bool = 0; var_216_object = Obj(); // 0xaee PushV
	var_216_object = var_1_bool; // 0xaef MovT
	func_5847(var_215_bool, var_216_object); // 0xaf0 NEW_2
	if(var_215_bool == 0) goto Label_2809; // 0xaf2 JumpB
	var_217_bool = 0; var_218_object = Obj(); // 0xaf3 PushV
	var_218_object = var_1_bool; // 0xaf4 MovT
	func_5837(var_217_bool, var_218_object); // 0xaf5 NEW_2
	if(var_217_bool == 0) goto Label_2809; // 0xaf7 JumpB
	var_214_bool = 0; // 0xaf8 MovB
	
Label_2809:
	if(var_214_bool == 0) goto Label_2816; // 0xaf9 JumpB
	var_219_bool = 0; var_220_object = Obj(); // 0xafa PushV
	var_220_object = var_1_bool; // 0xafb MovT
	func_5867(var_219_bool, var_220_object); // 0xafc NEW_2
	if(var_219_bool == 0) goto Label_2816; // 0xafe JumpB
	var_213_bool = 0; // 0xaff MovB
	
Label_2816:
	if(var_213_bool == 0) goto Label_2823; // 0xb00 JumpB
	var_221_bool = 0; var_222_object = Obj(); // 0xb01 PushV
	var_222_object = var_1_bool; // 0xb02 MovT
	func_5807(var_221_bool, var_222_object); // 0xb03 NEW_2
	if(var_221_bool == 0) goto Label_2823; // 0xb05 JumpB
	var_212_bool = 0; // 0xb06 MovB
	
Label_2823:
	if(var_212_bool == 0) goto Label_2829; // 0xb07 JumpB
	var_223_int = 543252; // 0xb08 PushI
	var_224_int = -1; // 0xb09 PushI
	var_225_int = 45708; // 0xb0a PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0xb0b TObjFunc
	
Label_2829:
	var_226_bool = 0; // 0xb0d PushV
	var_226_bool = 1; // 0xb0e MovB
	var_227_bool = 0; var_228_object = Obj(); // 0xb0f PushV
	var_228_object = var_1_bool; // 0xb10 MovT
	func_5897(var_227_bool, var_228_object); // 0xb11 NEW_2
	if(var_227_bool == 0) goto Label_2842; // 0xb13 JumpB
	var_229_bool = 0; var_230_object = Obj(); // 0xb14 PushV
	var_230_object = var_1_bool; // 0xb15 MovT
	func_5907(var_229_bool, var_230_object); // 0xb16 NEW_2
	if(var_229_bool == 0) goto Label_2842; // 0xb18 JumpB
	var_226_bool = 0; // 0xb19 MovB
	
Label_2842:
	if(var_226_bool == 0) goto Label_2848; // 0xb1a JumpB
	var_231_int = 543281; // 0xb1b PushI
	var_232_int = -1; // 0xb1c PushI
	var_233_int = 45737; // 0xb1d PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0xb1e TObjFunc
	
Label_2848:
	var_234_bool = 0; // 0xb20 PushV
	var_234_bool = 1; // 0xb21 MovB
	var_235_bool = 0; var_236_object = Obj(); // 0xb22 PushV
	var_236_object = var_1_bool; // 0xb23 MovT
	func_5877(var_235_bool, var_236_object); // 0xb24 NEW_2
	if(var_235_bool == 0) goto Label_2861; // 0xb26 JumpB
	var_237_bool = 0; var_238_object = Obj(); // 0xb27 PushV
	var_238_object = var_1_bool; // 0xb28 MovT
	func_5887(var_237_bool, var_238_object); // 0xb29 NEW_2
	if(var_237_bool == 0) goto Label_2861; // 0xb2b JumpB
	var_234_bool = 0; // 0xb2c MovB
	
Label_2861:
	if(var_234_bool == 0) goto Label_2867; // 0xb2d JumpB
	var_239_int = 543275; // 0xb2e PushI
	var_240_int = -1; // 0xb2f PushI
	var_241_int = 45731; // 0xb30 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0xb31 TObjFunc
	
Label_2867:
	return 0; // 0xb33 Return
	
Label_2868:
	var_242_string = ""; // 0xb34 PushV
	var_242_string = "Neutral"; // 0xb35 MovS
	func_2491(var_23_int, var_242_string); // 0xb36 NEW_2
	var_243_int = 537506; // 0xb38 PushI
	SetMessage(var_243_int); // 0xb39 TObjFunc
	ClearReplies(); // 0xb3b TObjFunc
	var_244_int = 537507; // 0xb3d PushI
	var_245_int = -1; // 0xb3e PushI
	var_246_int = 39354; // 0xb3f PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0xb40 TObjFunc
	var_247_bool = 0; // 0xb42 PushV
	var_247_bool = 0; // 0xb43 MovB
	var_248_bool = 0; // 0xb44 PushV
	var_248_bool = 0; // 0xb45 MovB
	var_249_bool = 0; var_250_object = Obj(); // 0xb46 PushV
	var_250_object = var_1_bool; // 0xb47 MovT
	func_5773(var_250_object); // 0xb48 NEW_2
	if(var_249_bool == 0) goto Label_2897; // 0xb4a JumpB
	var_255_bool = 0; var_256_object = Obj(); // 0xb4b PushV
	var_256_object = var_1_bool; // 0xb4c MovT
	func_5797(var_255_bool, var_256_object); // 0xb4d NEW_2
	if(var_255_bool == 0) goto Label_2897; // 0xb4f JumpB
	var_248_bool = 1; // 0xb50 MovB
	
Label_2897:
	if(var_248_bool == 0) goto Label_2904; // 0xb51 JumpB
	var_257_bool = 0; var_258_object = Obj(); // 0xb52 PushV
	var_258_object = var_1_bool; // 0xb53 MovT
	func_5917(var_257_bool, var_258_object); // 0xb54 NEW_2
	if(var_257_bool == 0) goto Label_2904; // 0xb56 JumpB
	var_247_bool = 1; // 0xb57 MovB
	
Label_2904:
	if(var_247_bool == 0) goto Label_2910; // 0xb58 JumpB
	var_272_int = 537508; // 0xb59 PushI
	var_273_int = 39356; // 0xb5a PushI
	var_274_int = 39355; // 0xb5b PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0xb5c TObjFunc
	
Label_2910:
	var_275_bool = 0; // 0xb5e PushV
	var_275_bool = 0; // 0xb5f MovB
	var_276_bool = 0; // 0xb60 PushV
	var_276_bool = 0; // 0xb61 MovB
	var_277_bool = 0; var_278_object = Obj(); // 0xb62 PushV
	var_278_object = var_1_bool; // 0xb63 MovT
	func_5773(var_278_object); // 0xb64 NEW_2
	if(var_277_bool == 0) goto Label_2925; // 0xb66 JumpB
	var_279_bool = 0; var_280_object = Obj(); // 0xb67 PushV
	var_280_object = var_1_bool; // 0xb68 MovT
	func_5797(var_279_bool, var_280_object); // 0xb69 NEW_2
	if(var_279_bool == 0) goto Label_2925; // 0xb6b JumpB
	var_276_bool = 1; // 0xb6c MovB
	
Label_2925:
	if(var_276_bool == 0) goto Label_2932; // 0xb6d JumpB
	var_281_bool = 0; var_282_object = Obj(); // 0xb6e PushV
	var_282_object = var_1_bool; // 0xb6f MovT
	func_5927(var_281_bool, var_282_object); // 0xb70 NEW_2
	if(var_281_bool == 0) goto Label_2932; // 0xb72 JumpB
	var_275_bool = 1; // 0xb73 MovB
	
Label_2932:
	if(var_275_bool == 0) goto Label_2938; // 0xb74 JumpB
	var_288_int = 537524; // 0xb75 PushI
	var_289_int = 39372; // 0xb76 PushI
	var_290_int = 39371; // 0xb77 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0xb78 TObjFunc
	
Label_2938:
	var_291_bool = 0; // 0xb7a PushV
	var_291_bool = 0; // 0xb7b MovB
	var_292_bool = 0; var_293_object = Obj(); // 0xb7c PushV
	var_293_object = var_1_bool; // 0xb7d MovT
	func_5773(var_293_object); // 0xb7e NEW_2
	if(var_292_bool == 0) goto Label_2951; // 0xb80 JumpB
	var_294_bool = 0; var_295_object = Obj(); // 0xb81 PushV
	var_295_object = var_1_bool; // 0xb82 MovT
	func_5807(var_294_bool, var_295_object); // 0xb83 NEW_2
	if(var_294_bool == 0) goto Label_2951; // 0xb85 JumpB
	var_291_bool = 1; // 0xb86 MovB
	
Label_2951:
	if(var_291_bool == 0) goto Label_2957; // 0xb87 JumpB
	var_296_int = 537534; // 0xb88 PushI
	var_297_int = 39382; // 0xb89 PushI
	var_298_int = 39381; // 0xb8a PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0xb8b TObjFunc
	
Label_2957:
	var_299_bool = 0; // 0xb8d PushV
	var_299_bool = 0; // 0xb8e MovB
	var_300_bool = 0; var_301_object = Obj(); // 0xb8f PushV
	var_301_object = var_1_bool; // 0xb90 MovT
	func_5773(var_301_object); // 0xb91 NEW_2
	if(var_300_bool == 0) goto Label_2970; // 0xb93 JumpB
	var_302_bool = 0; var_303_object = Obj(); // 0xb94 PushV
	var_303_object = var_1_bool; // 0xb95 MovT
	func_5817(var_302_bool, var_303_object); // 0xb96 NEW_2
	if(var_302_bool == 0) goto Label_2970; // 0xb98 JumpB
	var_299_bool = 1; // 0xb99 MovB
	
Label_2970:
	if(var_299_bool == 0) goto Label_2976; // 0xb9a JumpB
	var_304_int = 537549; // 0xb9b PushI
	var_305_int = 39397; // 0xb9c PushI
	var_306_int = 39396; // 0xb9d PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0xb9e TObjFunc
	
Label_2976:
	var_307_bool = 0; // 0xba0 PushV
	var_307_bool = 0; // 0xba1 MovB
	var_308_bool = 0; var_309_object = Obj(); // 0xba2 PushV
	var_309_object = var_1_bool; // 0xba3 MovT
	func_5773(var_309_object); // 0xba4 NEW_2
	if(var_308_bool == 0) goto Label_2989; // 0xba6 JumpB
	var_310_bool = 0; var_311_object = Obj(); // 0xba7 PushV
	var_311_object = var_1_bool; // 0xba8 MovT
	func_5827(var_310_bool, var_311_object); // 0xba9 NEW_2
	if(var_310_bool == 0) goto Label_2989; // 0xbab JumpB
	var_307_bool = 1; // 0xbac MovB
	
Label_2989:
	if(var_307_bool == 0) goto Label_2995; // 0xbad JumpB
	var_312_int = 537559; // 0xbae PushI
	var_313_int = 39407; // 0xbaf PushI
	var_314_int = 39406; // 0xbb0 PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0xbb1 TObjFunc
	
Label_2995:
	var_315_bool = 0; // 0xbb3 PushV
	var_315_bool = 0; // 0xbb4 MovB
	var_316_bool = 0; var_317_object = Obj(); // 0xbb5 PushV
	var_317_object = var_1_bool; // 0xbb6 MovT
	func_5773(var_317_object); // 0xbb7 NEW_2
	if(var_316_bool == 0) goto Label_3008; // 0xbb9 JumpB
	var_318_bool = 0; var_319_object = Obj(); // 0xbba PushV
	var_319_object = var_1_bool; // 0xbbb MovT
	func_5837(var_318_bool, var_319_object); // 0xbbc NEW_2
	if(var_318_bool == 0) goto Label_3008; // 0xbbe JumpB
	var_315_bool = 1; // 0xbbf MovB
	
Label_3008:
	if(var_315_bool == 0) goto Label_3014; // 0xbc0 JumpB
	var_320_int = 537571; // 0xbc1 PushI
	var_321_int = 39419; // 0xbc2 PushI
	var_322_int = 39418; // 0xbc3 PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0xbc4 TObjFunc
	
Label_3014:
	var_323_bool = 0; // 0xbc6 PushV
	var_323_bool = 0; // 0xbc7 MovB
	var_324_bool = 0; var_325_object = Obj(); // 0xbc8 PushV
	var_325_object = var_1_bool; // 0xbc9 MovT
	func_5773(var_325_object); // 0xbca NEW_2
	if(var_324_bool == 0) goto Label_3027; // 0xbcc JumpB
	var_326_bool = 0; var_327_object = Obj(); // 0xbcd PushV
	var_327_object = var_1_bool; // 0xbce MovT
	func_5847(var_326_bool, var_327_object); // 0xbcf NEW_2
	if(var_326_bool == 0) goto Label_3027; // 0xbd1 JumpB
	var_323_bool = 1; // 0xbd2 MovB
	
Label_3027:
	if(var_323_bool == 0) goto Label_3033; // 0xbd3 JumpB
	var_328_int = 537593; // 0xbd4 PushI
	var_329_int = 39442; // 0xbd5 PushI
	var_330_int = 39441; // 0xbd6 PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0xbd7 TObjFunc
	
Label_3033:
	var_331_bool = 0; // 0xbd9 PushV
	var_331_bool = 0; // 0xbda MovB
	var_332_bool = 0; var_333_object = Obj(); // 0xbdb PushV
	var_333_object = var_1_bool; // 0xbdc MovT
	func_5773(var_333_object); // 0xbdd NEW_2
	if(var_332_bool == 0) goto Label_3046; // 0xbdf JumpB
	var_334_bool = 0; var_335_object = Obj(); // 0xbe0 PushV
	var_335_object = var_1_bool; // 0xbe1 MovT
	func_5857(var_334_bool, var_335_object); // 0xbe2 NEW_2
	if(var_334_bool == 0) goto Label_3046; // 0xbe4 JumpB
	var_331_bool = 1; // 0xbe5 MovB
	
Label_3046:
	if(var_331_bool == 0) goto Label_3052; // 0xbe6 JumpB
	var_336_int = 537603; // 0xbe7 PushI
	var_337_int = 39452; // 0xbe8 PushI
	var_338_int = 39451; // 0xbe9 PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0xbea TObjFunc
	
Label_3052:
	var_339_bool = 0; // 0xbec PushV
	var_339_bool = 0; // 0xbed MovB
	var_340_bool = 0; var_341_object = Obj(); // 0xbee PushV
	var_341_object = var_1_bool; // 0xbef MovT
	func_5773(var_341_object); // 0xbf0 NEW_2
	if(var_340_bool == 0) goto Label_3065; // 0xbf2 JumpB
	var_342_bool = 0; var_343_object = Obj(); // 0xbf3 PushV
	var_343_object = var_1_bool; // 0xbf4 MovT
	func_5867(var_342_bool, var_343_object); // 0xbf5 NEW_2
	if(var_342_bool == 0) goto Label_3065; // 0xbf7 JumpB
	var_339_bool = 1; // 0xbf8 MovB
	
Label_3065:
	if(var_339_bool == 0) goto Label_3071; // 0xbf9 JumpB
	var_344_int = 537621; // 0xbfa PushI
	var_345_int = 39470; // 0xbfb PushI
	var_346_int = 39469; // 0xbfc PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0xbfd TObjFunc
	
Label_3071:
	var_347_bool = 0; var_348_object = Obj(); // 0xbff PushV
	var_348_object = var_1_bool; // 0xc00 MovT
	func_5877(var_347_bool, var_348_object); // 0xc01 NEW_2
	if(var_347_bool == 0) goto Label_3081; // 0xc03 JumpB
	var_349_int = 537633; // 0xc04 PushI
	var_350_int = 39482; // 0xc05 PushI
	var_351_int = 39481; // 0xc06 PushI
	AddReply(var_349_int, var_350_int, var_351_int); // 0xc07 TObjFunc
	
Label_3081:
	var_352_bool = 0; var_353_object = Obj(); // 0xc09 PushV
	var_353_object = var_1_bool; // 0xc0a MovT
	func_5887(var_352_bool, var_353_object); // 0xc0b NEW_2
	if(var_352_bool == 0) goto Label_3091; // 0xc0d JumpB
	var_354_int = 537640; // 0xc0e PushI
	var_355_int = 39489; // 0xc0f PushI
	var_356_int = 39488; // 0xc10 PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0xc11 TObjFunc
	
Label_3091:
	var_357_bool = 0; // 0xc13 PushV
	var_357_bool = 0; // 0xc14 MovB
	var_358_bool = 0; var_359_object = Obj(); // 0xc15 PushV
	var_359_object = var_1_bool; // 0xc16 MovT
	func_5773(var_359_object); // 0xc17 NEW_2
	if(var_358_bool == 0) goto Label_3104; // 0xc19 JumpB
	var_360_bool = 0; var_361_object = Obj(); // 0xc1a PushV
	var_361_object = var_1_bool; // 0xc1b MovT
	func_5897(var_360_bool, var_361_object); // 0xc1c NEW_2
	if(var_360_bool == 0) goto Label_3104; // 0xc1e JumpB
	var_357_bool = 1; // 0xc1f MovB
	
Label_3104:
	if(var_357_bool == 0) goto Label_3110; // 0xc20 JumpB
	var_362_int = 537647; // 0xc21 PushI
	var_363_int = 39496; // 0xc22 PushI
	var_364_int = 39495; // 0xc23 PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0xc24 TObjFunc
	
Label_3110:
	var_365_bool = 0; // 0xc26 PushV
	var_365_bool = 0; // 0xc27 MovB
	var_366_bool = 0; // 0xc28 PushV
	var_366_bool = 0; // 0xc29 MovB
	var_367_bool = 0; var_368_object = Obj(); // 0xc2a PushV
	var_368_object = var_1_bool; // 0xc2b MovT
	func_5773(var_368_object); // 0xc2c NEW_2
	if(var_367_bool == 0) goto Label_3125; // 0xc2e JumpB
	var_369_bool = 0; var_370_object = Obj(); // 0xc2f PushV
	var_370_object = var_1_bool; // 0xc30 MovT
	func_5927(var_369_bool, var_370_object); // 0xc31 NEW_2
	if(var_369_bool == 0) goto Label_3125; // 0xc33 JumpB
	var_366_bool = 1; // 0xc34 MovB
	
Label_3125:
	if(var_366_bool == 0) goto Label_3132; // 0xc35 JumpB
	var_371_bool = 0; var_372_object = Obj(); // 0xc36 PushV
	var_372_object = var_1_bool; // 0xc37 MovT
	func_5797(var_371_bool, var_372_object); // 0xc38 NEW_2
	if(var_371_bool == 0) goto Label_3132; // 0xc3a JumpB
	var_365_bool = 1; // 0xc3b MovB
	
Label_3132:
	if(var_365_bool == 0) goto Label_3138; // 0xc3c JumpB
	var_373_int = 537659; // 0xc3d PushI
	var_374_int = 39508; // 0xc3e PushI
	var_375_int = 39507; // 0xc3f PushI
	AddReply(var_373_int, var_374_int, var_375_int); // 0xc40 TObjFunc
	
Label_3138:
	var_376_bool = 0; var_377_object = Obj(); // 0xc42 PushV
	var_377_object = var_1_bool; // 0xc43 MovT
	func_5797(var_376_bool, var_377_object); // 0xc44 NEW_2
	if(var_376_bool == 0) goto Label_3148; // 0xc46 JumpB
	var_378_int = 537665; // 0xc47 PushI
	var_379_int = 39514; // 0xc48 PushI
	var_380_int = 39513; // 0xc49 PushI
	AddReply(var_378_int, var_379_int, var_380_int); // 0xc4a TObjFunc
	
Label_3148:
	var_381_bool = 0; var_382_object = Obj(); // 0xc4c PushV
	var_382_object = var_1_bool; // 0xc4d MovT
	func_5797(var_381_bool, var_382_object); // 0xc4e NEW_2
	if(var_381_bool == 0) goto Label_3158; // 0xc50 JumpB
	var_383_int = 537671; // 0xc51 PushI
	var_384_int = 39520; // 0xc52 PushI
	var_385_int = 39519; // 0xc53 PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0xc54 TObjFunc
	
Label_3158:
	var_386_bool = 0; // 0xc56 PushV
	var_386_bool = 0; // 0xc57 MovB
	var_387_bool = 0; var_388_object = Obj(); // 0xc58 PushV
	var_388_object = var_1_bool; // 0xc59 MovT
	func_5797(var_387_bool, var_388_object); // 0xc5a NEW_2
	if(var_387_bool == 0) goto Label_3171; // 0xc5c JumpB
	var_389_bool = 0; var_390_object = Obj(); // 0xc5d PushV
	var_390_object = var_1_bool; // 0xc5e MovT
	func_5917(var_389_bool, var_390_object); // 0xc5f NEW_2
	if(var_389_bool == 0) goto Label_3171; // 0xc61 JumpB
	var_386_bool = 1; // 0xc62 MovB
	
Label_3171:
	if(var_386_bool == 0) goto Label_3177; // 0xc63 JumpB
	var_391_int = 537689; // 0xc64 PushI
	var_392_int = 39538; // 0xc65 PushI
	var_393_int = 39537; // 0xc66 PushI
	AddReply(var_391_int, var_392_int, var_393_int); // 0xc67 TObjFunc
	
Label_3177:
	var_394_bool = 0; // 0xc69 PushV
	var_394_bool = 0; // 0xc6a MovB
	var_395_bool = 0; var_396_object = Obj(); // 0xc6b PushV
	var_396_object = var_1_bool; // 0xc6c MovT
	func_5797(var_395_bool, var_396_object); // 0xc6d NEW_2
	if(var_395_bool == 0) goto Label_3190; // 0xc6f JumpB
	var_397_bool = 0; var_398_object = Obj(); // 0xc70 PushV
	var_398_object = var_1_bool; // 0xc71 MovT
	func_5917(var_397_bool, var_398_object); // 0xc72 NEW_2
	if(var_397_bool == 0) goto Label_3190; // 0xc74 JumpB
	var_394_bool = 1; // 0xc75 MovB
	
Label_3190:
	if(var_394_bool == 0) goto Label_3196; // 0xc76 JumpB
	var_399_int = 537702; // 0xc77 PushI
	var_400_int = 39551; // 0xc78 PushI
	var_401_int = 39550; // 0xc79 PushI
	AddReply(var_399_int, var_400_int, var_401_int); // 0xc7a TObjFunc
	
Label_3196:
	var_402_int = 537721; // 0xc7c PushI
	var_403_int = -1; // 0xc7d PushI
	var_404_int = 39569; // 0xc7e PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0xc7f TObjFunc
	return 0; // 0xc81 Return
	
Label_3202:
	var_405_int = 39551; // 0xc82 PushI
	var_406_bool = var_22_int == var_405_int; // 0xc83 Eq
	if(var_406_bool == 0) goto Label_3220; // 0xc84 JumpB
	var_407_string = ""; // 0xc85 PushV
	var_407_string = "Neutral"; // 0xc86 MovS
	func_2491(var_23_int, var_407_string); // 0xc87 NEW_2
	var_408_int = 537703; // 0xc89 PushI
	SetMessage(var_408_int); // 0xc8a TObjFunc
	ClearReplies(); // 0xc8c TObjFunc
	var_409_int = 537704; // 0xc8e PushI
	var_410_int = 39553; // 0xc8f PushI
	var_411_int = 39552; // 0xc90 PushI
	AddReply(var_409_int, var_410_int, var_411_int); // 0xc91 TObjFunc
	return 0; // 0xc93 Return
	
Label_3220:
	var_412_int = 39553; // 0xc94 PushI
	var_413_bool = var_22_int == var_412_int; // 0xc95 Eq
	if(var_413_bool == 0) goto Label_3243; // 0xc96 JumpB
	var_414_string = ""; // 0xc97 PushV
	var_414_string = "Neutral"; // 0xc98 MovS
	func_2491(var_23_int, var_414_string); // 0xc99 NEW_2
	var_415_int = 537705; // 0xc9b PushI
	SetMessage(var_415_int); // 0xc9c TObjFunc
	ClearReplies(); // 0xc9e TObjFunc
	var_416_int = 537706; // 0xca0 PushI
	var_417_int = 39555; // 0xca1 PushI
	var_418_int = 39554; // 0xca2 PushI
	AddReply(var_416_int, var_417_int, var_418_int); // 0xca3 TObjFunc
	var_419_int = 537717; // 0xca5 PushI
	var_420_int = 39566; // 0xca6 PushI
	var_421_int = 39565; // 0xca7 PushI
	AddReply(var_419_int, var_420_int, var_421_int); // 0xca8 TObjFunc
	return 0; // 0xcaa Return
	
Label_3243:
	var_422_int = 39566; // 0xcab PushI
	var_423_bool = var_22_int == var_422_int; // 0xcac Eq
	if(var_423_bool == 0) goto Label_3271; // 0xcad JumpB
	var_424_string = ""; // 0xcae PushV
	var_424_string = "Neutral"; // 0xcaf MovS
	func_2491(var_23_int, var_424_string); // 0xcb0 NEW_2
	var_425_int = 537718; // 0xcb2 PushI
	SetMessage(var_425_int); // 0xcb3 TObjFunc
	ClearReplies(); // 0xcb5 TObjFunc
	var_426_int = 537719; // 0xcb7 PushI
	var_427_int = -1; // 0xcb8 PushI
	var_428_int = 39567; // 0xcb9 PushI
	AddReply(var_426_int, var_427_int, var_428_int); // 0xcba TObjFunc
	var_429_bool = 0; var_430_object = Obj(); // 0xcbc PushV
	var_430_object = var_1_bool; // 0xcbd MovT
	func_5773(var_430_object); // 0xcbe NEW_2
	if(var_429_bool == 0) goto Label_3270; // 0xcc0 JumpB
	var_431_int = 537720; // 0xcc1 PushI
	var_432_int = -1; // 0xcc2 PushI
	var_433_int = 39568; // 0xcc3 PushI
	AddReply(var_431_int, var_432_int, var_433_int); // 0xcc4 TObjFunc
	
Label_3270:
	return 0; // 0xcc6 Return
	
Label_3271:
	var_434_int = 39555; // 0xcc7 PushI
	var_435_bool = var_22_int == var_434_int; // 0xcc8 Eq
	if(var_435_bool == 0) goto Label_3294; // 0xcc9 JumpB
	var_436_string = ""; // 0xcca PushV
	var_436_string = "Neutral"; // 0xccb MovS
	func_2491(var_23_int, var_436_string); // 0xccc NEW_2
	var_437_int = 537707; // 0xcce PushI
	SetMessage(var_437_int); // 0xccf TObjFunc
	ClearReplies(); // 0xcd1 TObjFunc
	var_438_int = 537708; // 0xcd3 PushI
	var_439_int = 39557; // 0xcd4 PushI
	var_440_int = 39556; // 0xcd5 PushI
	AddReply(var_438_int, var_439_int, var_440_int); // 0xcd6 TObjFunc
	var_441_int = 537711; // 0xcd8 PushI
	var_442_int = 39560; // 0xcd9 PushI
	var_443_int = 39559; // 0xcda PushI
	AddReply(var_441_int, var_442_int, var_443_int); // 0xcdb TObjFunc
	return 0; // 0xcdd Return
	
Label_3294:
	var_444_int = 39560; // 0xcde PushI
	var_445_bool = var_22_int == var_444_int; // 0xcdf Eq
	if(var_445_bool == 0) goto Label_3322; // 0xce0 JumpB
	var_446_string = ""; // 0xce1 PushV
	var_446_string = "Neutral"; // 0xce2 MovS
	func_2491(var_23_int, var_446_string); // 0xce3 NEW_2
	var_447_int = 537712; // 0xce5 PushI
	SetMessage(var_447_int); // 0xce6 TObjFunc
	ClearReplies(); // 0xce8 TObjFunc
	var_448_bool = 0; var_449_object = Obj(); // 0xcea PushV
	var_449_object = var_1_bool; // 0xceb MovT
	func_5773(var_449_object); // 0xcec NEW_2
	if(var_448_bool == 0) goto Label_3316; // 0xcee JumpB
	var_450_int = 537713; // 0xcef PushI
	var_451_int = -1; // 0xcf0 PushI
	var_452_int = 39561; // 0xcf1 PushI
	AddReply(var_450_int, var_451_int, var_452_int); // 0xcf2 TObjFunc
	
Label_3316:
	var_453_int = 537714; // 0xcf4 PushI
	var_454_int = 39563; // 0xcf5 PushI
	var_455_int = 39562; // 0xcf6 PushI
	AddReply(var_453_int, var_454_int, var_455_int); // 0xcf7 TObjFunc
	return 0; // 0xcf9 Return
	
Label_3322:
	var_456_int = 39563; // 0xcfa PushI
	var_457_bool = var_22_int == var_456_int; // 0xcfb Eq
	if(var_457_bool == 0) goto Label_3340; // 0xcfc JumpB
	var_458_string = ""; // 0xcfd PushV
	var_458_string = "Neutral"; // 0xcfe MovS
	func_2491(var_23_int, var_458_string); // 0xcff NEW_2
	var_459_int = 537715; // 0xd01 PushI
	SetMessage(var_459_int); // 0xd02 TObjFunc
	ClearReplies(); // 0xd04 TObjFunc
	var_460_int = 537716; // 0xd06 PushI
	var_461_int = -1; // 0xd07 PushI
	var_462_int = 39564; // 0xd08 PushI
	AddReply(var_460_int, var_461_int, var_462_int); // 0xd09 TObjFunc
	return 0; // 0xd0b Return
	
Label_3340:
	var_463_int = 39557; // 0xd0c PushI
	var_464_bool = var_22_int == var_463_int; // 0xd0d Eq
	if(var_464_bool == 0) goto Label_3358; // 0xd0e JumpB
	var_465_string = ""; // 0xd0f PushV
	var_465_string = "Neutral"; // 0xd10 MovS
	func_2491(var_23_int, var_465_string); // 0xd11 NEW_2
	var_466_int = 537709; // 0xd13 PushI
	SetMessage(var_466_int); // 0xd14 TObjFunc
	ClearReplies(); // 0xd16 TObjFunc
	var_467_int = 537710; // 0xd18 PushI
	var_468_int = -1; // 0xd19 PushI
	var_469_int = 39558; // 0xd1a PushI
	AddReply(var_467_int, var_468_int, var_469_int); // 0xd1b TObjFunc
	return 0; // 0xd1d Return
	
Label_3358:
	var_470_int = 39538; // 0xd1e PushI
	var_471_bool = var_22_int == var_470_int; // 0xd1f Eq
	if(var_471_bool == 0) goto Label_3381; // 0xd20 JumpB
	var_472_string = ""; // 0xd21 PushV
	var_472_string = "Neutral"; // 0xd22 MovS
	func_2491(var_23_int, var_472_string); // 0xd23 NEW_2
	var_473_int = 537690; // 0xd25 PushI
	SetMessage(var_473_int); // 0xd26 TObjFunc
	ClearReplies(); // 0xd28 TObjFunc
	var_474_int = 537691; // 0xd2a PushI
	var_475_int = 39540; // 0xd2b PushI
	var_476_int = 39539; // 0xd2c PushI
	AddReply(var_474_int, var_475_int, var_476_int); // 0xd2d TObjFunc
	var_477_int = 537701; // 0xd2f PushI
	var_478_int = -1; // 0xd30 PushI
	var_479_int = 39549; // 0xd31 PushI
	AddReply(var_477_int, var_478_int, var_479_int); // 0xd32 TObjFunc
	return 0; // 0xd34 Return
	
Label_3381:
	var_480_int = 39540; // 0xd35 PushI
	var_481_bool = var_22_int == var_480_int; // 0xd36 Eq
	if(var_481_bool == 0) goto Label_3404; // 0xd37 JumpB
	var_482_string = ""; // 0xd38 PushV
	var_482_string = "Neutral"; // 0xd39 MovS
	func_2491(var_23_int, var_482_string); // 0xd3a NEW_2
	var_483_int = 537692; // 0xd3c PushI
	SetMessage(var_483_int); // 0xd3d TObjFunc
	ClearReplies(); // 0xd3f TObjFunc
	var_484_int = 537693; // 0xd41 PushI
	var_485_int = 39542; // 0xd42 PushI
	var_486_int = 39541; // 0xd43 PushI
	AddReply(var_484_int, var_485_int, var_486_int); // 0xd44 TObjFunc
	var_487_int = 537696; // 0xd46 PushI
	var_488_int = 39545; // 0xd47 PushI
	var_489_int = 39544; // 0xd48 PushI
	AddReply(var_487_int, var_488_int, var_489_int); // 0xd49 TObjFunc
	return 0; // 0xd4b Return
	
Label_3404:
	var_490_int = 39545; // 0xd4c PushI
	var_491_bool = var_22_int == var_490_int; // 0xd4d Eq
	if(var_491_bool == 0) goto Label_3422; // 0xd4e JumpB
	var_492_string = ""; // 0xd4f PushV
	var_492_string = "Neutral"; // 0xd50 MovS
	func_2491(var_23_int, var_492_string); // 0xd51 NEW_2
	var_493_int = 537697; // 0xd53 PushI
	SetMessage(var_493_int); // 0xd54 TObjFunc
	ClearReplies(); // 0xd56 TObjFunc
	var_494_int = 537698; // 0xd58 PushI
	var_495_int = 39547; // 0xd59 PushI
	var_496_int = 39546; // 0xd5a PushI
	AddReply(var_494_int, var_495_int, var_496_int); // 0xd5b TObjFunc
	return 0; // 0xd5d Return
	
Label_3422:
	var_497_int = 39547; // 0xd5e PushI
	var_498_bool = var_22_int == var_497_int; // 0xd5f Eq
	if(var_498_bool == 0) goto Label_3440; // 0xd60 JumpB
	var_499_string = ""; // 0xd61 PushV
	var_499_string = "Neutral"; // 0xd62 MovS
	func_2491(var_23_int, var_499_string); // 0xd63 NEW_2
	var_500_int = 537699; // 0xd65 PushI
	SetMessage(var_500_int); // 0xd66 TObjFunc
	ClearReplies(); // 0xd68 TObjFunc
	var_501_int = 537700; // 0xd6a PushI
	var_502_int = -1; // 0xd6b PushI
	var_503_int = 39548; // 0xd6c PushI
	AddReply(var_501_int, var_502_int, var_503_int); // 0xd6d TObjFunc
	return 0; // 0xd6f Return
	
Label_3440:
	var_504_int = 39542; // 0xd70 PushI
	var_505_bool = var_22_int == var_504_int; // 0xd71 Eq
	if(var_505_bool == 0) goto Label_3458; // 0xd72 JumpB
	var_506_string = ""; // 0xd73 PushV
	var_506_string = "Neutral"; // 0xd74 MovS
	func_2491(var_23_int, var_506_string); // 0xd75 NEW_2
	var_507_int = 537694; // 0xd77 PushI
	SetMessage(var_507_int); // 0xd78 TObjFunc
	ClearReplies(); // 0xd7a TObjFunc
	var_508_int = 537695; // 0xd7c PushI
	var_509_int = -1; // 0xd7d PushI
	var_510_int = 39543; // 0xd7e PushI
	AddReply(var_508_int, var_509_int, var_510_int); // 0xd7f TObjFunc
	return 0; // 0xd81 Return
	
Label_3458:
	var_511_int = 39520; // 0xd82 PushI
	var_512_bool = var_22_int == var_511_int; // 0xd83 Eq
	if(var_512_bool == 0) goto Label_3481; // 0xd84 JumpB
	var_513_string = ""; // 0xd85 PushV
	var_513_string = "Neutral"; // 0xd86 MovS
	func_2491(var_23_int, var_513_string); // 0xd87 NEW_2
	var_514_int = 537672; // 0xd89 PushI
	SetMessage(var_514_int); // 0xd8a TObjFunc
	ClearReplies(); // 0xd8c TObjFunc
	var_515_int = 537673; // 0xd8e PushI
	var_516_int = 39522; // 0xd8f PushI
	var_517_int = 39521; // 0xd90 PushI
	AddReply(var_515_int, var_516_int, var_517_int); // 0xd91 TObjFunc
	var_518_int = 537678; // 0xd93 PushI
	var_519_int = 39527; // 0xd94 PushI
	var_520_int = 39526; // 0xd95 PushI
	AddReply(var_518_int, var_519_int, var_520_int); // 0xd96 TObjFunc
	return 0; // 0xd98 Return
	
Label_3481:
	var_521_int = 39527; // 0xd99 PushI
	var_522_bool = var_22_int == var_521_int; // 0xd9a Eq
	if(var_522_bool == 0) goto Label_3499; // 0xd9b JumpB
	var_523_string = ""; // 0xd9c PushV
	var_523_string = "Neutral"; // 0xd9d MovS
	func_2491(var_23_int, var_523_string); // 0xd9e NEW_2
	var_524_int = 537679; // 0xda0 PushI
	SetMessage(var_524_int); // 0xda1 TObjFunc
	ClearReplies(); // 0xda3 TObjFunc
	var_525_int = 537680; // 0xda5 PushI
	var_526_int = 39529; // 0xda6 PushI
	var_527_int = 39528; // 0xda7 PushI
	AddReply(var_525_int, var_526_int, var_527_int); // 0xda8 TObjFunc
	return 0; // 0xdaa Return
	
Label_3499:
	var_528_int = 39529; // 0xdab PushI
	var_529_bool = var_22_int == var_528_int; // 0xdac Eq
	if(var_529_bool == 0) goto Label_3527; // 0xdad JumpB
	var_530_string = ""; // 0xdae PushV
	var_530_string = "Neutral"; // 0xdaf MovS
	func_2491(var_23_int, var_530_string); // 0xdb0 NEW_2
	var_531_int = 537681; // 0xdb2 PushI
	SetMessage(var_531_int); // 0xdb3 TObjFunc
	ClearReplies(); // 0xdb5 TObjFunc
	var_532_bool = 0; var_533_object = Obj(); // 0xdb7 PushV
	var_533_object = var_1_bool; // 0xdb8 MovT
	func_5773(var_533_object); // 0xdb9 NEW_2
	if(var_532_bool == 0) goto Label_3521; // 0xdbb JumpB
	var_534_int = 537682; // 0xdbc PushI
	var_535_int = 39531; // 0xdbd PushI
	var_536_int = 39530; // 0xdbe PushI
	AddReply(var_534_int, var_535_int, var_536_int); // 0xdbf TObjFunc
	
Label_3521:
	var_537_int = 537688; // 0xdc1 PushI
	var_538_int = -1; // 0xdc2 PushI
	var_539_int = 39536; // 0xdc3 PushI
	AddReply(var_537_int, var_538_int, var_539_int); // 0xdc4 TObjFunc
	return 0; // 0xdc6 Return
	
Label_3527:
	var_540_int = 39531; // 0xdc7 PushI
	var_541_bool = var_22_int == var_540_int; // 0xdc8 Eq
	if(var_541_bool == 0) goto Label_3550; // 0xdc9 JumpB
	var_542_string = ""; // 0xdca PushV
	var_542_string = "Neutral"; // 0xdcb MovS
	func_2491(var_23_int, var_542_string); // 0xdcc NEW_2
	var_543_int = 537683; // 0xdce PushI
	SetMessage(var_543_int); // 0xdcf TObjFunc
	ClearReplies(); // 0xdd1 TObjFunc
	var_544_int = 537684; // 0xdd3 PushI
	var_545_int = 39533; // 0xdd4 PushI
	var_546_int = 39532; // 0xdd5 PushI
	AddReply(var_544_int, var_545_int, var_546_int); // 0xdd6 TObjFunc
	var_547_int = 537687; // 0xdd8 PushI
	var_548_int = -1; // 0xdd9 PushI
	var_549_int = 39535; // 0xdda PushI
	AddReply(var_547_int, var_548_int, var_549_int); // 0xddb TObjFunc
	return 0; // 0xddd Return
	
Label_3550:
	var_550_int = 39533; // 0xdde PushI
	var_551_bool = var_22_int == var_550_int; // 0xddf Eq
	if(var_551_bool == 0) goto Label_3568; // 0xde0 JumpB
	var_552_string = ""; // 0xde1 PushV
	var_552_string = "Neutral"; // 0xde2 MovS
	func_2491(var_23_int, var_552_string); // 0xde3 NEW_2
	var_553_int = 537685; // 0xde5 PushI
	SetMessage(var_553_int); // 0xde6 TObjFunc
	ClearReplies(); // 0xde8 TObjFunc
	var_554_int = 537686; // 0xdea PushI
	var_555_int = -1; // 0xdeb PushI
	var_556_int = 39534; // 0xdec PushI
	AddReply(var_554_int, var_555_int, var_556_int); // 0xded TObjFunc
	return 0; // 0xdef Return
	
Label_3568:
	var_557_int = 39522; // 0xdf0 PushI
	var_558_bool = var_22_int == var_557_int; // 0xdf1 Eq
	if(var_558_bool == 0) goto Label_3586; // 0xdf2 JumpB
	var_559_string = ""; // 0xdf3 PushV
	var_559_string = "Neutral"; // 0xdf4 MovS
	func_2491(var_23_int, var_559_string); // 0xdf5 NEW_2
	var_560_int = 537674; // 0xdf7 PushI
	SetMessage(var_560_int); // 0xdf8 TObjFunc
	ClearReplies(); // 0xdfa TObjFunc
	var_561_int = 537675; // 0xdfc PushI
	var_562_int = 39524; // 0xdfd PushI
	var_563_int = 39523; // 0xdfe PushI
	AddReply(var_561_int, var_562_int, var_563_int); // 0xdff TObjFunc
	return 0; // 0xe01 Return
	
Label_3586:
	var_564_int = 39524; // 0xe02 PushI
	var_565_bool = var_22_int == var_564_int; // 0xe03 Eq
	if(var_565_bool == 0) goto Label_3604; // 0xe04 JumpB
	var_566_string = ""; // 0xe05 PushV
	var_566_string = "Neutral"; // 0xe06 MovS
	func_2491(var_23_int, var_566_string); // 0xe07 NEW_2
	var_567_int = 537676; // 0xe09 PushI
	SetMessage(var_567_int); // 0xe0a TObjFunc
	ClearReplies(); // 0xe0c TObjFunc
	var_568_int = 537677; // 0xe0e PushI
	var_569_int = -1; // 0xe0f PushI
	var_570_int = 39525; // 0xe10 PushI
	AddReply(var_568_int, var_569_int, var_570_int); // 0xe11 TObjFunc
	return 0; // 0xe13 Return
	
Label_3604:
	var_571_int = 39514; // 0xe14 PushI
	var_572_bool = var_22_int == var_571_int; // 0xe15 Eq
	if(var_572_bool == 0) goto Label_3627; // 0xe16 JumpB
	var_573_string = ""; // 0xe17 PushV
	var_573_string = "Neutral"; // 0xe18 MovS
	func_2491(var_23_int, var_573_string); // 0xe19 NEW_2
	var_574_int = 537666; // 0xe1b PushI
	SetMessage(var_574_int); // 0xe1c TObjFunc
	ClearReplies(); // 0xe1e TObjFunc
	var_575_int = 537667; // 0xe20 PushI
	var_576_int = 39516; // 0xe21 PushI
	var_577_int = 39515; // 0xe22 PushI
	AddReply(var_575_int, var_576_int, var_577_int); // 0xe23 TObjFunc
	var_578_int = 537670; // 0xe25 PushI
	var_579_int = -1; // 0xe26 PushI
	var_580_int = 39518; // 0xe27 PushI
	AddReply(var_578_int, var_579_int, var_580_int); // 0xe28 TObjFunc
	return 0; // 0xe2a Return
	
Label_3627:
	var_581_int = 39516; // 0xe2b PushI
	var_582_bool = var_22_int == var_581_int; // 0xe2c Eq
	if(var_582_bool == 0) goto Label_3645; // 0xe2d JumpB
	var_583_string = ""; // 0xe2e PushV
	var_583_string = "Neutral"; // 0xe2f MovS
	func_2491(var_23_int, var_583_string); // 0xe30 NEW_2
	var_584_int = 537668; // 0xe32 PushI
	SetMessage(var_584_int); // 0xe33 TObjFunc
	ClearReplies(); // 0xe35 TObjFunc
	var_585_int = 537669; // 0xe37 PushI
	var_586_int = -1; // 0xe38 PushI
	var_587_int = 39517; // 0xe39 PushI
	AddReply(var_585_int, var_586_int, var_587_int); // 0xe3a TObjFunc
	return 0; // 0xe3c Return
	
Label_3645:
	var_588_int = 39508; // 0xe3d PushI
	var_589_bool = var_22_int == var_588_int; // 0xe3e Eq
	if(var_589_bool == 0) goto Label_3668; // 0xe3f JumpB
	var_590_string = ""; // 0xe40 PushV
	var_590_string = "Neutral"; // 0xe41 MovS
	func_2491(var_23_int, var_590_string); // 0xe42 NEW_2
	var_591_int = 537660; // 0xe44 PushI
	SetMessage(var_591_int); // 0xe45 TObjFunc
	ClearReplies(); // 0xe47 TObjFunc
	var_592_int = 537661; // 0xe49 PushI
	var_593_int = 39510; // 0xe4a PushI
	var_594_int = 39509; // 0xe4b PushI
	AddReply(var_592_int, var_593_int, var_594_int); // 0xe4c TObjFunc
	var_595_int = 537664; // 0xe4e PushI
	var_596_int = -1; // 0xe4f PushI
	var_597_int = 39512; // 0xe50 PushI
	AddReply(var_595_int, var_596_int, var_597_int); // 0xe51 TObjFunc
	return 0; // 0xe53 Return
	
Label_3668:
	var_598_int = 39510; // 0xe54 PushI
	var_599_bool = var_22_int == var_598_int; // 0xe55 Eq
	if(var_599_bool == 0) goto Label_3686; // 0xe56 JumpB
	var_600_string = ""; // 0xe57 PushV
	var_600_string = "Neutral"; // 0xe58 MovS
	func_2491(var_23_int, var_600_string); // 0xe59 NEW_2
	var_601_int = 537662; // 0xe5b PushI
	SetMessage(var_601_int); // 0xe5c TObjFunc
	ClearReplies(); // 0xe5e TObjFunc
	var_602_int = 537663; // 0xe60 PushI
	var_603_int = -1; // 0xe61 PushI
	var_604_int = 39511; // 0xe62 PushI
	AddReply(var_602_int, var_603_int, var_604_int); // 0xe63 TObjFunc
	return 0; // 0xe65 Return
	
Label_3686:
	var_605_int = 39496; // 0xe66 PushI
	var_606_bool = var_22_int == var_605_int; // 0xe67 Eq
	if(var_606_bool == 0) goto Label_3709; // 0xe68 JumpB
	var_607_string = ""; // 0xe69 PushV
	var_607_string = "Neutral"; // 0xe6a MovS
	func_2491(var_23_int, var_607_string); // 0xe6b NEW_2
	var_608_int = 537648; // 0xe6d PushI
	SetMessage(var_608_int); // 0xe6e TObjFunc
	ClearReplies(); // 0xe70 TObjFunc
	var_609_int = 537649; // 0xe72 PushI
	var_610_int = 39498; // 0xe73 PushI
	var_611_int = 39497; // 0xe74 PushI
	AddReply(var_609_int, var_610_int, var_611_int); // 0xe75 TObjFunc
	var_612_int = 537658; // 0xe77 PushI
	var_613_int = -1; // 0xe78 PushI
	var_614_int = 39506; // 0xe79 PushI
	AddReply(var_612_int, var_613_int, var_614_int); // 0xe7a TObjFunc
	return 0; // 0xe7c Return
	
Label_3709:
	var_615_int = 39498; // 0xe7d PushI
	var_616_bool = var_22_int == var_615_int; // 0xe7e Eq
	if(var_616_bool == 0) goto Label_3732; // 0xe7f JumpB
	var_617_string = ""; // 0xe80 PushV
	var_617_string = "Neutral"; // 0xe81 MovS
	func_2491(var_23_int, var_617_string); // 0xe82 NEW_2
	var_618_int = 537650; // 0xe84 PushI
	SetMessage(var_618_int); // 0xe85 TObjFunc
	ClearReplies(); // 0xe87 TObjFunc
	var_619_int = 537651; // 0xe89 PushI
	var_620_int = 39500; // 0xe8a PushI
	var_621_int = 39499; // 0xe8b PushI
	AddReply(var_619_int, var_620_int, var_621_int); // 0xe8c TObjFunc
	var_622_int = 537657; // 0xe8e PushI
	var_623_int = -1; // 0xe8f PushI
	var_624_int = 39505; // 0xe90 PushI
	AddReply(var_622_int, var_623_int, var_624_int); // 0xe91 TObjFunc
	return 0; // 0xe93 Return
	
Label_3732:
	var_625_int = 39500; // 0xe94 PushI
	var_626_bool = var_22_int == var_625_int; // 0xe95 Eq
	if(var_626_bool == 0) goto Label_3755; // 0xe96 JumpB
	var_627_string = ""; // 0xe97 PushV
	var_627_string = "Neutral"; // 0xe98 MovS
	func_2491(var_23_int, var_627_string); // 0xe99 NEW_2
	var_628_int = 537652; // 0xe9b PushI
	SetMessage(var_628_int); // 0xe9c TObjFunc
	ClearReplies(); // 0xe9e TObjFunc
	var_629_int = 537653; // 0xea0 PushI
	var_630_int = -1; // 0xea1 PushI
	var_631_int = 39501; // 0xea2 PushI
	AddReply(var_629_int, var_630_int, var_631_int); // 0xea3 TObjFunc
	var_632_int = 537654; // 0xea5 PushI
	var_633_int = 39503; // 0xea6 PushI
	var_634_int = 39502; // 0xea7 PushI
	AddReply(var_632_int, var_633_int, var_634_int); // 0xea8 TObjFunc
	return 0; // 0xeaa Return
	
Label_3755:
	var_635_int = 39503; // 0xeab PushI
	var_636_bool = var_22_int == var_635_int; // 0xeac Eq
	if(var_636_bool == 0) goto Label_3773; // 0xead JumpB
	var_637_string = ""; // 0xeae PushV
	var_637_string = "Neutral"; // 0xeaf MovS
	func_2491(var_23_int, var_637_string); // 0xeb0 NEW_2
	var_638_int = 537655; // 0xeb2 PushI
	SetMessage(var_638_int); // 0xeb3 TObjFunc
	ClearReplies(); // 0xeb5 TObjFunc
	var_639_int = 537656; // 0xeb7 PushI
	var_640_int = -1; // 0xeb8 PushI
	var_641_int = 39504; // 0xeb9 PushI
	AddReply(var_639_int, var_640_int, var_641_int); // 0xeba TObjFunc
	return 0; // 0xebc Return
	
Label_3773:
	var_642_int = 39489; // 0xebd PushI
	var_643_bool = var_22_int == var_642_int; // 0xebe Eq
	if(var_643_bool == 0) goto Label_3796; // 0xebf JumpB
	var_644_string = ""; // 0xec0 PushV
	var_644_string = "Neutral"; // 0xec1 MovS
	func_2491(var_23_int, var_644_string); // 0xec2 NEW_2
	var_645_int = 537641; // 0xec4 PushI
	SetMessage(var_645_int); // 0xec5 TObjFunc
	ClearReplies(); // 0xec7 TObjFunc
	var_646_int = 537642; // 0xec9 PushI
	var_647_int = 39491; // 0xeca PushI
	var_648_int = 39490; // 0xecb PushI
	AddReply(var_646_int, var_647_int, var_648_int); // 0xecc TObjFunc
	var_649_int = 537646; // 0xece PushI
	var_650_int = -1; // 0xecf PushI
	var_651_int = 39494; // 0xed0 PushI
	AddReply(var_649_int, var_650_int, var_651_int); // 0xed1 TObjFunc
	return 0; // 0xed3 Return
	
Label_3796:
	var_652_int = 39491; // 0xed4 PushI
	var_653_bool = var_22_int == var_652_int; // 0xed5 Eq
	if(var_653_bool == 0) goto Label_3824; // 0xed6 JumpB
	var_654_string = ""; // 0xed7 PushV
	var_654_string = "Neutral"; // 0xed8 MovS
	func_2491(var_23_int, var_654_string); // 0xed9 NEW_2
	var_655_int = 537643; // 0xedb PushI
	SetMessage(var_655_int); // 0xedc TObjFunc
	ClearReplies(); // 0xede TObjFunc
	var_656_int = 537644; // 0xee0 PushI
	var_657_int = -1; // 0xee1 PushI
	var_658_int = 39492; // 0xee2 PushI
	AddReply(var_656_int, var_657_int, var_658_int); // 0xee3 TObjFunc
	var_659_bool = 0; var_660_object = Obj(); // 0xee5 PushV
	var_660_object = var_1_bool; // 0xee6 MovT
	func_5773(var_660_object); // 0xee7 NEW_2
	if(var_659_bool == 0) goto Label_3823; // 0xee9 JumpB
	var_661_int = 537645; // 0xeea PushI
	var_662_int = -1; // 0xeeb PushI
	var_663_int = 39493; // 0xeec PushI
	AddReply(var_661_int, var_662_int, var_663_int); // 0xeed TObjFunc
	
Label_3823:
	return 0; // 0xeef Return
	
Label_3824:
	var_664_int = 39482; // 0xef0 PushI
	var_665_bool = var_22_int == var_664_int; // 0xef1 Eq
	if(var_665_bool == 0) goto Label_3847; // 0xef2 JumpB
	var_666_string = ""; // 0xef3 PushV
	var_666_string = "Neutral"; // 0xef4 MovS
	func_2491(var_23_int, var_666_string); // 0xef5 NEW_2
	var_667_int = 537634; // 0xef7 PushI
	SetMessage(var_667_int); // 0xef8 TObjFunc
	ClearReplies(); // 0xefa TObjFunc
	var_668_int = 537635; // 0xefc PushI
	var_669_int = 39484; // 0xefd PushI
	var_670_int = 39483; // 0xefe PushI
	AddReply(var_668_int, var_669_int, var_670_int); // 0xeff TObjFunc
	var_671_int = 537639; // 0xf01 PushI
	var_672_int = -1; // 0xf02 PushI
	var_673_int = 39487; // 0xf03 PushI
	AddReply(var_671_int, var_672_int, var_673_int); // 0xf04 TObjFunc
	return 0; // 0xf06 Return
	
Label_3847:
	var_674_int = 39484; // 0xf07 PushI
	var_675_bool = var_22_int == var_674_int; // 0xf08 Eq
	if(var_675_bool == 0) goto Label_3870; // 0xf09 JumpB
	var_676_string = ""; // 0xf0a PushV
	var_676_string = "Neutral"; // 0xf0b MovS
	func_2491(var_23_int, var_676_string); // 0xf0c NEW_2
	var_677_int = 537636; // 0xf0e PushI
	SetMessage(var_677_int); // 0xf0f TObjFunc
	ClearReplies(); // 0xf11 TObjFunc
	var_678_int = 537637; // 0xf13 PushI
	var_679_int = -1; // 0xf14 PushI
	var_680_int = 39485; // 0xf15 PushI
	AddReply(var_678_int, var_679_int, var_680_int); // 0xf16 TObjFunc
	var_681_int = 537638; // 0xf18 PushI
	var_682_int = -1; // 0xf19 PushI
	var_683_int = 39486; // 0xf1a PushI
	AddReply(var_681_int, var_682_int, var_683_int); // 0xf1b TObjFunc
	return 0; // 0xf1d Return
	
Label_3870:
	var_684_int = 39470; // 0xf1e PushI
	var_685_bool = var_22_int == var_684_int; // 0xf1f Eq
	if(var_685_bool == 0) goto Label_3893; // 0xf20 JumpB
	var_686_string = ""; // 0xf21 PushV
	var_686_string = "Neutral"; // 0xf22 MovS
	func_2491(var_23_int, var_686_string); // 0xf23 NEW_2
	var_687_int = 537622; // 0xf25 PushI
	SetMessage(var_687_int); // 0xf26 TObjFunc
	ClearReplies(); // 0xf28 TObjFunc
	var_688_int = 537623; // 0xf2a PushI
	var_689_int = 39472; // 0xf2b PushI
	var_690_int = 39471; // 0xf2c PushI
	AddReply(var_688_int, var_689_int, var_690_int); // 0xf2d TObjFunc
	var_691_int = 537632; // 0xf2f PushI
	var_692_int = -1; // 0xf30 PushI
	var_693_int = 39480; // 0xf31 PushI
	AddReply(var_691_int, var_692_int, var_693_int); // 0xf32 TObjFunc
	return 0; // 0xf34 Return
	
Label_3893:
	var_694_int = 39472; // 0xf35 PushI
	var_695_bool = var_22_int == var_694_int; // 0xf36 Eq
	if(var_695_bool == 0) goto Label_3911; // 0xf37 JumpB
	var_696_string = ""; // 0xf38 PushV
	var_696_string = "Neutral"; // 0xf39 MovS
	func_2491(var_23_int, var_696_string); // 0xf3a NEW_2
	var_697_int = 537624; // 0xf3c PushI
	SetMessage(var_697_int); // 0xf3d TObjFunc
	ClearReplies(); // 0xf3f TObjFunc
	var_698_int = 537625; // 0xf41 PushI
	var_699_int = 39474; // 0xf42 PushI
	var_700_int = 39473; // 0xf43 PushI
	AddReply(var_698_int, var_699_int, var_700_int); // 0xf44 TObjFunc
	return 0; // 0xf46 Return
	
Label_3911:
	var_701_int = 39474; // 0xf47 PushI
	var_702_bool = var_22_int == var_701_int; // 0xf48 Eq
	if(var_702_bool == 0) goto Label_3934; // 0xf49 JumpB
	var_703_string = ""; // 0xf4a PushV
	var_703_string = "Neutral"; // 0xf4b MovS
	func_2491(var_23_int, var_703_string); // 0xf4c NEW_2
	var_704_int = 537626; // 0xf4e PushI
	SetMessage(var_704_int); // 0xf4f TObjFunc
	ClearReplies(); // 0xf51 TObjFunc
	var_705_int = 537627; // 0xf53 PushI
	var_706_int = -1; // 0xf54 PushI
	var_707_int = 39475; // 0xf55 PushI
	AddReply(var_705_int, var_706_int, var_707_int); // 0xf56 TObjFunc
	var_708_int = 537628; // 0xf58 PushI
	var_709_int = 39477; // 0xf59 PushI
	var_710_int = 39476; // 0xf5a PushI
	AddReply(var_708_int, var_709_int, var_710_int); // 0xf5b TObjFunc
	return 0; // 0xf5d Return
	
Label_3934:
	var_711_int = 39477; // 0xf5e PushI
	var_712_bool = var_22_int == var_711_int; // 0xf5f Eq
	if(var_712_bool == 0) goto Label_3957; // 0xf60 JumpB
	var_713_string = ""; // 0xf61 PushV
	var_713_string = "Neutral"; // 0xf62 MovS
	func_2491(var_23_int, var_713_string); // 0xf63 NEW_2
	var_714_int = 537629; // 0xf65 PushI
	SetMessage(var_714_int); // 0xf66 TObjFunc
	ClearReplies(); // 0xf68 TObjFunc
	var_715_int = 537630; // 0xf6a PushI
	var_716_int = -1; // 0xf6b PushI
	var_717_int = 39478; // 0xf6c PushI
	AddReply(var_715_int, var_716_int, var_717_int); // 0xf6d TObjFunc
	var_718_int = 537631; // 0xf6f PushI
	var_719_int = -1; // 0xf70 PushI
	var_720_int = 39479; // 0xf71 PushI
	AddReply(var_718_int, var_719_int, var_720_int); // 0xf72 TObjFunc
	return 0; // 0xf74 Return
	
Label_3957:
	var_721_int = 39452; // 0xf75 PushI
	var_722_bool = var_22_int == var_721_int; // 0xf76 Eq
	if(var_722_bool == 0) goto Label_3980; // 0xf77 JumpB
	var_723_string = ""; // 0xf78 PushV
	var_723_string = "Neutral"; // 0xf79 MovS
	func_2491(var_23_int, var_723_string); // 0xf7a NEW_2
	var_724_int = 537604; // 0xf7c PushI
	SetMessage(var_724_int); // 0xf7d TObjFunc
	ClearReplies(); // 0xf7f TObjFunc
	var_725_int = 537605; // 0xf81 PushI
	var_726_int = 39454; // 0xf82 PushI
	var_727_int = 39453; // 0xf83 PushI
	AddReply(var_725_int, var_726_int, var_727_int); // 0xf84 TObjFunc
	var_728_int = 537612; // 0xf86 PushI
	var_729_int = 39461; // 0xf87 PushI
	var_730_int = 39460; // 0xf88 PushI
	AddReply(var_728_int, var_729_int, var_730_int); // 0xf89 TObjFunc
	return 0; // 0xf8b Return
	
Label_3980:
	var_731_int = 39461; // 0xf8c PushI
	var_732_bool = var_22_int == var_731_int; // 0xf8d Eq
	if(var_732_bool == 0) goto Label_4003; // 0xf8e JumpB
	var_733_string = ""; // 0xf8f PushV
	var_733_string = "Neutral"; // 0xf90 MovS
	func_2491(var_23_int, var_733_string); // 0xf91 NEW_2
	var_734_int = 537613; // 0xf93 PushI
	SetMessage(var_734_int); // 0xf94 TObjFunc
	ClearReplies(); // 0xf96 TObjFunc
	var_735_int = 537614; // 0xf98 PushI
	var_736_int = 39463; // 0xf99 PushI
	var_737_int = 39462; // 0xf9a PushI
	AddReply(var_735_int, var_736_int, var_737_int); // 0xf9b TObjFunc
	var_738_int = 537620; // 0xf9d PushI
	var_739_int = -1; // 0xf9e PushI
	var_740_int = 39468; // 0xf9f PushI
	AddReply(var_738_int, var_739_int, var_740_int); // 0xfa0 TObjFunc
	return 0; // 0xfa2 Return
	
Label_4003:
	var_741_int = 39463; // 0xfa3 PushI
	var_742_bool = var_22_int == var_741_int; // 0xfa4 Eq
	if(var_742_bool == 0) goto Label_4021; // 0xfa5 JumpB
	var_743_string = ""; // 0xfa6 PushV
	var_743_string = "Neutral"; // 0xfa7 MovS
	func_2491(var_23_int, var_743_string); // 0xfa8 NEW_2
	var_744_int = 537615; // 0xfaa PushI
	SetMessage(var_744_int); // 0xfab TObjFunc
	ClearReplies(); // 0xfad TObjFunc
	var_745_int = 537616; // 0xfaf PushI
	var_746_int = 39465; // 0xfb0 PushI
	var_747_int = 39464; // 0xfb1 PushI
	AddReply(var_745_int, var_746_int, var_747_int); // 0xfb2 TObjFunc
	return 0; // 0xfb4 Return
	
Label_4021:
	var_748_int = 39465; // 0xfb5 PushI
	var_749_bool = var_22_int == var_748_int; // 0xfb6 Eq
	if(var_749_bool == 0) goto Label_4044; // 0xfb7 JumpB
	var_750_string = ""; // 0xfb8 PushV
	var_750_string = "Neutral"; // 0xfb9 MovS
	func_2491(var_23_int, var_750_string); // 0xfba NEW_2
	var_751_int = 537617; // 0xfbc PushI
	SetMessage(var_751_int); // 0xfbd TObjFunc
	ClearReplies(); // 0xfbf TObjFunc
	var_752_int = 537618; // 0xfc1 PushI
	var_753_int = -1; // 0xfc2 PushI
	var_754_int = 39466; // 0xfc3 PushI
	AddReply(var_752_int, var_753_int, var_754_int); // 0xfc4 TObjFunc
	var_755_int = 537619; // 0xfc6 PushI
	var_756_int = -1; // 0xfc7 PushI
	var_757_int = 39467; // 0xfc8 PushI
	AddReply(var_755_int, var_756_int, var_757_int); // 0xfc9 TObjFunc
	return 0; // 0xfcb Return
	
Label_4044:
	var_758_int = 39454; // 0xfcc PushI
	var_759_bool = var_22_int == var_758_int; // 0xfcd Eq
	if(var_759_bool == 0) goto Label_4067; // 0xfce JumpB
	var_760_string = ""; // 0xfcf PushV
	var_760_string = "Neutral"; // 0xfd0 MovS
	func_2491(var_23_int, var_760_string); // 0xfd1 NEW_2
	var_761_int = 537606; // 0xfd3 PushI
	SetMessage(var_761_int); // 0xfd4 TObjFunc
	ClearReplies(); // 0xfd6 TObjFunc
	var_762_int = 537607; // 0xfd8 PushI
	var_763_int = 39456; // 0xfd9 PushI
	var_764_int = 39455; // 0xfda PushI
	AddReply(var_762_int, var_763_int, var_764_int); // 0xfdb TObjFunc
	var_765_int = 537611; // 0xfdd PushI
	var_766_int = -1; // 0xfde PushI
	var_767_int = 39459; // 0xfdf PushI
	AddReply(var_765_int, var_766_int, var_767_int); // 0xfe0 TObjFunc
	return 0; // 0xfe2 Return
	
Label_4067:
	var_768_int = 39456; // 0xfe3 PushI
	var_769_bool = var_22_int == var_768_int; // 0xfe4 Eq
	if(var_769_bool == 0) goto Label_4090; // 0xfe5 JumpB
	var_770_string = ""; // 0xfe6 PushV
	var_770_string = "Neutral"; // 0xfe7 MovS
	func_2491(var_23_int, var_770_string); // 0xfe8 NEW_2
	var_771_int = 537608; // 0xfea PushI
	SetMessage(var_771_int); // 0xfeb TObjFunc
	ClearReplies(); // 0xfed TObjFunc
	var_772_int = 537609; // 0xfef PushI
	var_773_int = -1; // 0xff0 PushI
	var_774_int = 39457; // 0xff1 PushI
	AddReply(var_772_int, var_773_int, var_774_int); // 0xff2 TObjFunc
	var_775_int = 537610; // 0xff4 PushI
	var_776_int = -1; // 0xff5 PushI
	var_777_int = 39458; // 0xff6 PushI
	AddReply(var_775_int, var_776_int, var_777_int); // 0xff7 TObjFunc
	return 0; // 0xff9 Return
	
Label_4090:
	var_778_int = 39442; // 0xffa PushI
	var_779_bool = var_22_int == var_778_int; // 0xffb Eq
	if(var_779_bool == 0) goto Label_4113; // 0xffc JumpB
	var_780_string = ""; // 0xffd PushV
	var_780_string = "Neutral"; // 0xffe MovS
	func_2491(var_23_int, var_780_string); // 0xfff NEW_2
	var_781_int = 537594; // 0x1001 PushI
	SetMessage(var_781_int); // 0x1002 TObjFunc
	ClearReplies(); // 0x1004 TObjFunc
	var_782_int = 537595; // 0x1006 PushI
	var_783_int = 39444; // 0x1007 PushI
	var_784_int = 39443; // 0x1008 PushI
	AddReply(var_782_int, var_783_int, var_784_int); // 0x1009 TObjFunc
	var_785_int = 537602; // 0x100b PushI
	var_786_int = -1; // 0x100c PushI
	var_787_int = 39450; // 0x100d PushI
	AddReply(var_785_int, var_786_int, var_787_int); // 0x100e TObjFunc
	return 0; // 0x1010 Return
	
Label_4113:
	var_788_int = 39444; // 0x1011 PushI
	var_789_bool = var_22_int == var_788_int; // 0x1012 Eq
	if(var_789_bool == 0) goto Label_4136; // 0x1013 JumpB
	var_790_string = ""; // 0x1014 PushV
	var_790_string = "Neutral"; // 0x1015 MovS
	func_2491(var_23_int, var_790_string); // 0x1016 NEW_2
	var_791_int = 537596; // 0x1018 PushI
	SetMessage(var_791_int); // 0x1019 TObjFunc
	ClearReplies(); // 0x101b TObjFunc
	var_792_int = 537597; // 0x101d PushI
	var_793_int = 39446; // 0x101e PushI
	var_794_int = 39445; // 0x101f PushI
	AddReply(var_792_int, var_793_int, var_794_int); // 0x1020 TObjFunc
	var_795_int = 537601; // 0x1022 PushI
	var_796_int = -1; // 0x1023 PushI
	var_797_int = 39449; // 0x1024 PushI
	AddReply(var_795_int, var_796_int, var_797_int); // 0x1025 TObjFunc
	return 0; // 0x1027 Return
	
Label_4136:
	var_798_int = 39446; // 0x1028 PushI
	var_799_bool = var_22_int == var_798_int; // 0x1029 Eq
	if(var_799_bool == 0) goto Label_4159; // 0x102a JumpB
	var_800_string = ""; // 0x102b PushV
	var_800_string = "Neutral"; // 0x102c MovS
	func_2491(var_23_int, var_800_string); // 0x102d NEW_2
	var_801_int = 537598; // 0x102f PushI
	SetMessage(var_801_int); // 0x1030 TObjFunc
	ClearReplies(); // 0x1032 TObjFunc
	var_802_int = 537599; // 0x1034 PushI
	var_803_int = -1; // 0x1035 PushI
	var_804_int = 39447; // 0x1036 PushI
	AddReply(var_802_int, var_803_int, var_804_int); // 0x1037 TObjFunc
	var_805_int = 537600; // 0x1039 PushI
	var_806_int = -1; // 0x103a PushI
	var_807_int = 39448; // 0x103b PushI
	AddReply(var_805_int, var_806_int, var_807_int); // 0x103c TObjFunc
	return 0; // 0x103e Return
	
Label_4159:
	var_808_int = 39419; // 0x103f PushI
	var_809_bool = var_22_int == var_808_int; // 0x1040 Eq
	if(var_809_bool == 0) goto Label_4192; // 0x1041 JumpB
	var_810_string = ""; // 0x1042 PushV
	var_810_string = "Neutral"; // 0x1043 MovS
	func_2491(var_23_int, var_810_string); // 0x1044 NEW_2
	var_811_int = 537572; // 0x1046 PushI
	SetMessage(var_811_int); // 0x1047 TObjFunc
	ClearReplies(); // 0x1049 TObjFunc
	var_812_int = 537573; // 0x104b PushI
	var_813_int = 39421; // 0x104c PushI
	var_814_int = 39420; // 0x104d PushI
	AddReply(var_812_int, var_813_int, var_814_int); // 0x104e TObjFunc
	var_815_int = 537578; // 0x1050 PushI
	var_816_int = 39426; // 0x1051 PushI
	var_817_int = 39425; // 0x1052 PushI
	AddReply(var_815_int, var_816_int, var_817_int); // 0x1053 TObjFunc
	var_818_int = 537588; // 0x1055 PushI
	var_819_int = 39437; // 0x1056 PushI
	var_820_int = 39436; // 0x1057 PushI
	AddReply(var_818_int, var_819_int, var_820_int); // 0x1058 TObjFunc
	var_821_int = 537592; // 0x105a PushI
	var_822_int = -1; // 0x105b PushI
	var_823_int = 39440; // 0x105c PushI
	AddReply(var_821_int, var_822_int, var_823_int); // 0x105d TObjFunc
	return 0; // 0x105f Return
	
Label_4192:
	var_824_int = 39437; // 0x1060 PushI
	var_825_bool = var_22_int == var_824_int; // 0x1061 Eq
	if(var_825_bool == 0) goto Label_4215; // 0x1062 JumpB
	var_826_string = ""; // 0x1063 PushV
	var_826_string = "Neutral"; // 0x1064 MovS
	func_2491(var_23_int, var_826_string); // 0x1065 NEW_2
	var_827_int = 537589; // 0x1067 PushI
	SetMessage(var_827_int); // 0x1068 TObjFunc
	ClearReplies(); // 0x106a TObjFunc
	var_828_int = 537590; // 0x106c PushI
	var_829_int = -1; // 0x106d PushI
	var_830_int = 39438; // 0x106e PushI
	AddReply(var_828_int, var_829_int, var_830_int); // 0x106f TObjFunc
	var_831_int = 537591; // 0x1071 PushI
	var_832_int = -1; // 0x1072 PushI
	var_833_int = 39439; // 0x1073 PushI
	AddReply(var_831_int, var_832_int, var_833_int); // 0x1074 TObjFunc
	return 0; // 0x1076 Return
	
Label_4215:
	var_834_int = 39426; // 0x1077 PushI
	var_835_bool = var_22_int == var_834_int; // 0x1078 Eq
	if(var_835_bool == 0) goto Label_4238; // 0x1079 JumpB
	var_836_string = ""; // 0x107a PushV
	var_836_string = "Neutral"; // 0x107b MovS
	func_2491(var_23_int, var_836_string); // 0x107c NEW_2
	var_837_int = 537579; // 0x107e PushI
	SetMessage(var_837_int); // 0x107f TObjFunc
	ClearReplies(); // 0x1081 TObjFunc
	var_838_int = 537580; // 0x1083 PushI
	var_839_int = 39421; // 0x1084 PushI
	var_840_int = 39427; // 0x1085 PushI
	AddReply(var_838_int, var_839_int, var_840_int); // 0x1086 TObjFunc
	var_841_int = 537581; // 0x1088 PushI
	var_842_int = 39430; // 0x1089 PushI
	var_843_int = 39429; // 0x108a PushI
	AddReply(var_841_int, var_842_int, var_843_int); // 0x108b TObjFunc
	return 0; // 0x108d Return
	
Label_4238:
	var_844_int = 39430; // 0x108e PushI
	var_845_bool = var_22_int == var_844_int; // 0x108f Eq
	if(var_845_bool == 0) goto Label_4261; // 0x1090 JumpB
	var_846_string = ""; // 0x1091 PushV
	var_846_string = "Neutral"; // 0x1092 MovS
	func_2491(var_23_int, var_846_string); // 0x1093 NEW_2
	var_847_int = 537582; // 0x1095 PushI
	SetMessage(var_847_int); // 0x1096 TObjFunc
	ClearReplies(); // 0x1098 TObjFunc
	var_848_int = 537583; // 0x109a PushI
	var_849_int = 39432; // 0x109b PushI
	var_850_int = 39431; // 0x109c PushI
	AddReply(var_848_int, var_849_int, var_850_int); // 0x109d TObjFunc
	var_851_int = 537587; // 0x109f PushI
	var_852_int = -1; // 0x10a0 PushI
	var_853_int = 39435; // 0x10a1 PushI
	AddReply(var_851_int, var_852_int, var_853_int); // 0x10a2 TObjFunc
	return 0; // 0x10a4 Return
	
Label_4261:
	var_854_int = 39432; // 0x10a5 PushI
	var_855_bool = var_22_int == var_854_int; // 0x10a6 Eq
	if(var_855_bool == 0) goto Label_4284; // 0x10a7 JumpB
	var_856_string = ""; // 0x10a8 PushV
	var_856_string = "Neutral"; // 0x10a9 MovS
	func_2491(var_23_int, var_856_string); // 0x10aa NEW_2
	var_857_int = 537584; // 0x10ac PushI
	SetMessage(var_857_int); // 0x10ad TObjFunc
	ClearReplies(); // 0x10af TObjFunc
	var_858_int = 537585; // 0x10b1 PushI
	var_859_int = -1; // 0x10b2 PushI
	var_860_int = 39433; // 0x10b3 PushI
	AddReply(var_858_int, var_859_int, var_860_int); // 0x10b4 TObjFunc
	var_861_int = 537586; // 0x10b6 PushI
	var_862_int = -1; // 0x10b7 PushI
	var_863_int = 39434; // 0x10b8 PushI
	AddReply(var_861_int, var_862_int, var_863_int); // 0x10b9 TObjFunc
	return 0; // 0x10bb Return
	
Label_4284:
	var_864_int = 39421; // 0x10bc PushI
	var_865_bool = var_22_int == var_864_int; // 0x10bd Eq
	if(var_865_bool == 0) goto Label_4302; // 0x10be JumpB
	var_866_string = ""; // 0x10bf PushV
	var_866_string = "Neutral"; // 0x10c0 MovS
	func_2491(var_23_int, var_866_string); // 0x10c1 NEW_2
	var_867_int = 537574; // 0x10c3 PushI
	SetMessage(var_867_int); // 0x10c4 TObjFunc
	ClearReplies(); // 0x10c6 TObjFunc
	var_868_int = 537575; // 0x10c8 PushI
	var_869_int = 39423; // 0x10c9 PushI
	var_870_int = 39422; // 0x10ca PushI
	AddReply(var_868_int, var_869_int, var_870_int); // 0x10cb TObjFunc
	return 0; // 0x10cd Return
	
Label_4302:
	var_871_int = 39423; // 0x10ce PushI
	var_872_bool = var_22_int == var_871_int; // 0x10cf Eq
	if(var_872_bool == 0) goto Label_4320; // 0x10d0 JumpB
	var_873_string = ""; // 0x10d1 PushV
	var_873_string = "Neutral"; // 0x10d2 MovS
	func_2491(var_23_int, var_873_string); // 0x10d3 NEW_2
	var_874_int = 537576; // 0x10d5 PushI
	SetMessage(var_874_int); // 0x10d6 TObjFunc
	ClearReplies(); // 0x10d8 TObjFunc
	var_875_int = 537577; // 0x10da PushI
	var_876_int = -1; // 0x10db PushI
	var_877_int = 39424; // 0x10dc PushI
	AddReply(var_875_int, var_876_int, var_877_int); // 0x10dd TObjFunc
	return 0; // 0x10df Return
	
Label_4320:
	var_878_int = 39407; // 0x10e0 PushI
	var_879_bool = var_22_int == var_878_int; // 0x10e1 Eq
	if(var_879_bool == 0) goto Label_4343; // 0x10e2 JumpB
	var_880_string = ""; // 0x10e3 PushV
	var_880_string = "Neutral"; // 0x10e4 MovS
	func_2491(var_23_int, var_880_string); // 0x10e5 NEW_2
	var_881_int = 537560; // 0x10e7 PushI
	SetMessage(var_881_int); // 0x10e8 TObjFunc
	ClearReplies(); // 0x10ea TObjFunc
	var_882_int = 537561; // 0x10ec PushI
	var_883_int = 39409; // 0x10ed PushI
	var_884_int = 39408; // 0x10ee PushI
	AddReply(var_882_int, var_883_int, var_884_int); // 0x10ef TObjFunc
	var_885_int = 537570; // 0x10f1 PushI
	var_886_int = -1; // 0x10f2 PushI
	var_887_int = 39417; // 0x10f3 PushI
	AddReply(var_885_int, var_886_int, var_887_int); // 0x10f4 TObjFunc
	return 0; // 0x10f6 Return
	
Label_4343:
	var_888_int = 39409; // 0x10f7 PushI
	var_889_bool = var_22_int == var_888_int; // 0x10f8 Eq
	if(var_889_bool == 0) goto Label_4366; // 0x10f9 JumpB
	var_890_string = ""; // 0x10fa PushV
	var_890_string = "Neutral"; // 0x10fb MovS
	func_2491(var_23_int, var_890_string); // 0x10fc NEW_2
	var_891_int = 537562; // 0x10fe PushI
	SetMessage(var_891_int); // 0x10ff TObjFunc
	ClearReplies(); // 0x1101 TObjFunc
	var_892_int = 537563; // 0x1103 PushI
	var_893_int = 39411; // 0x1104 PushI
	var_894_int = 39410; // 0x1105 PushI
	AddReply(var_892_int, var_893_int, var_894_int); // 0x1106 TObjFunc
	var_895_int = 537567; // 0x1108 PushI
	var_896_int = 39415; // 0x1109 PushI
	var_897_int = 39414; // 0x110a PushI
	AddReply(var_895_int, var_896_int, var_897_int); // 0x110b TObjFunc
	return 0; // 0x110d Return
	
Label_4366:
	var_898_int = 39415; // 0x110e PushI
	var_899_bool = var_22_int == var_898_int; // 0x110f Eq
	if(var_899_bool == 0) goto Label_4384; // 0x1110 JumpB
	var_900_string = ""; // 0x1111 PushV
	var_900_string = "Neutral"; // 0x1112 MovS
	func_2491(var_23_int, var_900_string); // 0x1113 NEW_2
	var_901_int = 537568; // 0x1115 PushI
	SetMessage(var_901_int); // 0x1116 TObjFunc
	ClearReplies(); // 0x1118 TObjFunc
	var_902_int = 537569; // 0x111a PushI
	var_903_int = -1; // 0x111b PushI
	var_904_int = 39416; // 0x111c PushI
	AddReply(var_902_int, var_903_int, var_904_int); // 0x111d TObjFunc
	return 0; // 0x111f Return
	
Label_4384:
	var_905_int = 39411; // 0x1120 PushI
	var_906_bool = var_22_int == var_905_int; // 0x1121 Eq
	if(var_906_bool == 0) goto Label_4407; // 0x1122 JumpB
	var_907_string = ""; // 0x1123 PushV
	var_907_string = "Neutral"; // 0x1124 MovS
	func_2491(var_23_int, var_907_string); // 0x1125 NEW_2
	var_908_int = 537564; // 0x1127 PushI
	SetMessage(var_908_int); // 0x1128 TObjFunc
	ClearReplies(); // 0x112a TObjFunc
	var_909_int = 537565; // 0x112c PushI
	var_910_int = -1; // 0x112d PushI
	var_911_int = 39412; // 0x112e PushI
	AddReply(var_909_int, var_910_int, var_911_int); // 0x112f TObjFunc
	var_912_int = 537566; // 0x1131 PushI
	var_913_int = -1; // 0x1132 PushI
	var_914_int = 39413; // 0x1133 PushI
	AddReply(var_912_int, var_913_int, var_914_int); // 0x1134 TObjFunc
	return 0; // 0x1136 Return
	
Label_4407:
	var_915_int = 39397; // 0x1137 PushI
	var_916_bool = var_22_int == var_915_int; // 0x1138 Eq
	if(var_916_bool == 0) goto Label_4430; // 0x1139 JumpB
	var_917_string = ""; // 0x113a PushV
	var_917_string = "Neutral"; // 0x113b MovS
	func_2491(var_23_int, var_917_string); // 0x113c NEW_2
	var_918_int = 537550; // 0x113e PushI
	SetMessage(var_918_int); // 0x113f TObjFunc
	ClearReplies(); // 0x1141 TObjFunc
	var_919_int = 537551; // 0x1143 PushI
	var_920_int = 39399; // 0x1144 PushI
	var_921_int = 39398; // 0x1145 PushI
	AddReply(var_919_int, var_920_int, var_921_int); // 0x1146 TObjFunc
	var_922_int = 537558; // 0x1148 PushI
	var_923_int = -1; // 0x1149 PushI
	var_924_int = 39405; // 0x114a PushI
	AddReply(var_922_int, var_923_int, var_924_int); // 0x114b TObjFunc
	return 0; // 0x114d Return
	
Label_4430:
	var_925_int = 39399; // 0x114e PushI
	var_926_bool = var_22_int == var_925_int; // 0x114f Eq
	if(var_926_bool == 0) goto Label_4453; // 0x1150 JumpB
	var_927_string = ""; // 0x1151 PushV
	var_927_string = "Neutral"; // 0x1152 MovS
	func_2491(var_23_int, var_927_string); // 0x1153 NEW_2
	var_928_int = 537552; // 0x1155 PushI
	SetMessage(var_928_int); // 0x1156 TObjFunc
	ClearReplies(); // 0x1158 TObjFunc
	var_929_int = 537553; // 0x115a PushI
	var_930_int = 39401; // 0x115b PushI
	var_931_int = 39400; // 0x115c PushI
	AddReply(var_929_int, var_930_int, var_931_int); // 0x115d TObjFunc
	var_932_int = 537557; // 0x115f PushI
	var_933_int = -1; // 0x1160 PushI
	var_934_int = 39404; // 0x1161 PushI
	AddReply(var_932_int, var_933_int, var_934_int); // 0x1162 TObjFunc
	return 0; // 0x1164 Return
	
Label_4453:
	var_935_int = 39401; // 0x1165 PushI
	var_936_bool = var_22_int == var_935_int; // 0x1166 Eq
	if(var_936_bool == 0) goto Label_4476; // 0x1167 JumpB
	var_937_string = ""; // 0x1168 PushV
	var_937_string = "Neutral"; // 0x1169 MovS
	func_2491(var_23_int, var_937_string); // 0x116a NEW_2
	var_938_int = 537554; // 0x116c PushI
	SetMessage(var_938_int); // 0x116d TObjFunc
	ClearReplies(); // 0x116f TObjFunc
	var_939_int = 537555; // 0x1171 PushI
	var_940_int = -1; // 0x1172 PushI
	var_941_int = 39402; // 0x1173 PushI
	AddReply(var_939_int, var_940_int, var_941_int); // 0x1174 TObjFunc
	var_942_int = 537556; // 0x1176 PushI
	var_943_int = -1; // 0x1177 PushI
	var_944_int = 39403; // 0x1178 PushI
	AddReply(var_942_int, var_943_int, var_944_int); // 0x1179 TObjFunc
	return 0; // 0x117b Return
	
Label_4476:
	var_945_int = 39382; // 0x117c PushI
	var_946_bool = var_22_int == var_945_int; // 0x117d Eq
	if(var_946_bool == 0) goto Label_4494; // 0x117e JumpB
	var_947_string = ""; // 0x117f PushV
	var_947_string = "Neutral"; // 0x1180 MovS
	func_2491(var_23_int, var_947_string); // 0x1181 NEW_2
	var_948_int = 537535; // 0x1183 PushI
	SetMessage(var_948_int); // 0x1184 TObjFunc
	ClearReplies(); // 0x1186 TObjFunc
	var_949_int = 537536; // 0x1188 PushI
	var_950_int = 39384; // 0x1189 PushI
	var_951_int = 39383; // 0x118a PushI
	AddReply(var_949_int, var_950_int, var_951_int); // 0x118b TObjFunc
	return 0; // 0x118d Return
	
Label_4494:
	var_952_int = 39384; // 0x118e PushI
	var_953_bool = var_22_int == var_952_int; // 0x118f Eq
	if(var_953_bool == 0) goto Label_4517; // 0x1190 JumpB
	var_954_string = ""; // 0x1191 PushV
	var_954_string = "Neutral"; // 0x1192 MovS
	func_2491(var_23_int, var_954_string); // 0x1193 NEW_2
	var_955_int = 537537; // 0x1195 PushI
	SetMessage(var_955_int); // 0x1196 TObjFunc
	ClearReplies(); // 0x1198 TObjFunc
	var_956_int = 537538; // 0x119a PushI
	var_957_int = 39386; // 0x119b PushI
	var_958_int = 39385; // 0x119c PushI
	AddReply(var_956_int, var_957_int, var_958_int); // 0x119d TObjFunc
	var_959_int = 537548; // 0x119f PushI
	var_960_int = -1; // 0x11a0 PushI
	var_961_int = 39395; // 0x11a1 PushI
	AddReply(var_959_int, var_960_int, var_961_int); // 0x11a2 TObjFunc
	return 0; // 0x11a4 Return
	
Label_4517:
	var_962_int = 39386; // 0x11a5 PushI
	var_963_bool = var_22_int == var_962_int; // 0x11a6 Eq
	if(var_963_bool == 0) goto Label_4545; // 0x11a7 JumpB
	var_964_string = ""; // 0x11a8 PushV
	var_964_string = "Neutral"; // 0x11a9 MovS
	func_2491(var_23_int, var_964_string); // 0x11aa NEW_2
	var_965_int = 537539; // 0x11ac PushI
	SetMessage(var_965_int); // 0x11ad TObjFunc
	ClearReplies(); // 0x11af TObjFunc
	var_966_int = 537540; // 0x11b1 PushI
	var_967_int = 39388; // 0x11b2 PushI
	var_968_int = 39387; // 0x11b3 PushI
	AddReply(var_966_int, var_967_int, var_968_int); // 0x11b4 TObjFunc
	var_969_int = 537543; // 0x11b6 PushI
	var_970_int = -1; // 0x11b7 PushI
	var_971_int = 39390; // 0x11b8 PushI
	AddReply(var_969_int, var_970_int, var_971_int); // 0x11b9 TObjFunc
	var_972_int = 537544; // 0x11bb PushI
	var_973_int = 39392; // 0x11bc PushI
	var_974_int = 39391; // 0x11bd PushI
	AddReply(var_972_int, var_973_int, var_974_int); // 0x11be TObjFunc
	return 0; // 0x11c0 Return
	
Label_4545:
	var_975_int = 39392; // 0x11c1 PushI
	var_976_bool = var_22_int == var_975_int; // 0x11c2 Eq
	if(var_976_bool == 0) goto Label_4568; // 0x11c3 JumpB
	var_977_string = ""; // 0x11c4 PushV
	var_977_string = "Neutral"; // 0x11c5 MovS
	func_2491(var_23_int, var_977_string); // 0x11c6 NEW_2
	var_978_int = 537545; // 0x11c8 PushI
	SetMessage(var_978_int); // 0x11c9 TObjFunc
	ClearReplies(); // 0x11cb TObjFunc
	var_979_int = 537546; // 0x11cd PushI
	var_980_int = -1; // 0x11ce PushI
	var_981_int = 39393; // 0x11cf PushI
	AddReply(var_979_int, var_980_int, var_981_int); // 0x11d0 TObjFunc
	var_982_int = 537547; // 0x11d2 PushI
	var_983_int = -1; // 0x11d3 PushI
	var_984_int = 39394; // 0x11d4 PushI
	AddReply(var_982_int, var_983_int, var_984_int); // 0x11d5 TObjFunc
	return 0; // 0x11d7 Return
	
Label_4568:
	var_985_int = 39388; // 0x11d8 PushI
	var_986_bool = var_22_int == var_985_int; // 0x11d9 Eq
	if(var_986_bool == 0) goto Label_4586; // 0x11da JumpB
	var_987_string = ""; // 0x11db PushV
	var_987_string = "Neutral"; // 0x11dc MovS
	func_2491(var_23_int, var_987_string); // 0x11dd NEW_2
	var_988_int = 537541; // 0x11df PushI
	SetMessage(var_988_int); // 0x11e0 TObjFunc
	ClearReplies(); // 0x11e2 TObjFunc
	var_989_int = 537542; // 0x11e4 PushI
	var_990_int = -1; // 0x11e5 PushI
	var_991_int = 39389; // 0x11e6 PushI
	AddReply(var_989_int, var_990_int, var_991_int); // 0x11e7 TObjFunc
	return 0; // 0x11e9 Return
	
Label_4586:
	var_992_int = 39372; // 0x11ea PushI
	var_993_bool = var_22_int == var_992_int; // 0x11eb Eq
	if(var_993_bool == 0) goto Label_4609; // 0x11ec JumpB
	var_994_string = ""; // 0x11ed PushV
	var_994_string = "Neutral"; // 0x11ee MovS
	func_2491(var_23_int, var_994_string); // 0x11ef NEW_2
	var_995_int = 537525; // 0x11f1 PushI
	SetMessage(var_995_int); // 0x11f2 TObjFunc
	ClearReplies(); // 0x11f4 TObjFunc
	var_996_int = 537526; // 0x11f6 PushI
	var_997_int = 39374; // 0x11f7 PushI
	var_998_int = 39373; // 0x11f8 PushI
	AddReply(var_996_int, var_997_int, var_998_int); // 0x11f9 TObjFunc
	var_999_int = 537533; // 0x11fb PushI
	var_1000_int = -1; // 0x11fc PushI
	var_1001_int = 39380; // 0x11fd PushI
	AddReply(var_999_int, var_1000_int, var_1001_int); // 0x11fe TObjFunc
	return 0; // 0x1200 Return
	
Label_4609:
	var_1002_int = 39374; // 0x1201 PushI
	var_1003_bool = var_22_int == var_1002_int; // 0x1202 Eq
	if(var_1003_bool == 0) goto Label_4632; // 0x1203 JumpB
	var_1004_string = ""; // 0x1204 PushV
	var_1004_string = "Neutral"; // 0x1205 MovS
	func_2491(var_23_int, var_1004_string); // 0x1206 NEW_2
	var_1005_int = 537527; // 0x1208 PushI
	SetMessage(var_1005_int); // 0x1209 TObjFunc
	ClearReplies(); // 0x120b TObjFunc
	var_1006_int = 537528; // 0x120d PushI
	var_1007_int = 39376; // 0x120e PushI
	var_1008_int = 39375; // 0x120f PushI
	AddReply(var_1006_int, var_1007_int, var_1008_int); // 0x1210 TObjFunc
	var_1009_int = 537532; // 0x1212 PushI
	var_1010_int = -1; // 0x1213 PushI
	var_1011_int = 39379; // 0x1214 PushI
	AddReply(var_1009_int, var_1010_int, var_1011_int); // 0x1215 TObjFunc
	return 0; // 0x1217 Return
	
Label_4632:
	var_1012_int = 39376; // 0x1218 PushI
	var_1013_bool = var_22_int == var_1012_int; // 0x1219 Eq
	if(var_1013_bool == 0) goto Label_4655; // 0x121a JumpB
	var_1014_string = ""; // 0x121b PushV
	var_1014_string = "Neutral"; // 0x121c MovS
	func_2491(var_23_int, var_1014_string); // 0x121d NEW_2
	var_1015_int = 537529; // 0x121f PushI
	SetMessage(var_1015_int); // 0x1220 TObjFunc
	ClearReplies(); // 0x1222 TObjFunc
	var_1016_int = 537530; // 0x1224 PushI
	var_1017_int = -1; // 0x1225 PushI
	var_1018_int = 39377; // 0x1226 PushI
	AddReply(var_1016_int, var_1017_int, var_1018_int); // 0x1227 TObjFunc
	var_1019_int = 537531; // 0x1229 PushI
	var_1020_int = -1; // 0x122a PushI
	var_1021_int = 39378; // 0x122b PushI
	AddReply(var_1019_int, var_1020_int, var_1021_int); // 0x122c TObjFunc
	return 0; // 0x122e Return
	
Label_4655:
	var_1022_int = 39356; // 0x122f PushI
	var_1023_bool = var_22_int == var_1022_int; // 0x1230 Eq
	if(var_1023_bool == 0) goto Label_4678; // 0x1231 JumpB
	var_1024_string = ""; // 0x1232 PushV
	var_1024_string = "Neutral"; // 0x1233 MovS
	func_2491(var_23_int, var_1024_string); // 0x1234 NEW_2
	var_1025_int = 537509; // 0x1236 PushI
	SetMessage(var_1025_int); // 0x1237 TObjFunc
	ClearReplies(); // 0x1239 TObjFunc
	var_1026_int = 537510; // 0x123b PushI
	var_1027_int = 39358; // 0x123c PushI
	var_1028_int = 39357; // 0x123d PushI
	AddReply(var_1026_int, var_1027_int, var_1028_int); // 0x123e TObjFunc
	var_1029_int = 537520; // 0x1240 PushI
	var_1030_int = 39368; // 0x1241 PushI
	var_1031_int = 39367; // 0x1242 PushI
	AddReply(var_1029_int, var_1030_int, var_1031_int); // 0x1243 TObjFunc
	return 0; // 0x1245 Return
	
Label_4678:
	var_1032_int = 39368; // 0x1246 PushI
	var_1033_bool = var_22_int == var_1032_int; // 0x1247 Eq
	if(var_1033_bool == 0) goto Label_4701; // 0x1248 JumpB
	var_1034_string = ""; // 0x1249 PushV
	var_1034_string = "Neutral"; // 0x124a MovS
	func_2491(var_23_int, var_1034_string); // 0x124b NEW_2
	var_1035_int = 537521; // 0x124d PushI
	SetMessage(var_1035_int); // 0x124e TObjFunc
	ClearReplies(); // 0x1250 TObjFunc
	var_1036_int = 537522; // 0x1252 PushI
	var_1037_int = -1; // 0x1253 PushI
	var_1038_int = 39369; // 0x1254 PushI
	AddReply(var_1036_int, var_1037_int, var_1038_int); // 0x1255 TObjFunc
	var_1039_int = 537523; // 0x1257 PushI
	var_1040_int = -1; // 0x1258 PushI
	var_1041_int = 39370; // 0x1259 PushI
	AddReply(var_1039_int, var_1040_int, var_1041_int); // 0x125a TObjFunc
	return 0; // 0x125c Return
	
Label_4701:
	var_1042_int = 39358; // 0x125d PushI
	var_1043_bool = var_22_int == var_1042_int; // 0x125e Eq
	if(var_1043_bool == 0) goto Label_4724; // 0x125f JumpB
	var_1044_string = ""; // 0x1260 PushV
	var_1044_string = "Neutral"; // 0x1261 MovS
	func_2491(var_23_int, var_1044_string); // 0x1262 NEW_2
	var_1045_int = 537511; // 0x1264 PushI
	SetMessage(var_1045_int); // 0x1265 TObjFunc
	ClearReplies(); // 0x1267 TObjFunc
	var_1046_int = 537512; // 0x1269 PushI
	var_1047_int = 39360; // 0x126a PushI
	var_1048_int = 39359; // 0x126b PushI
	AddReply(var_1046_int, var_1047_int, var_1048_int); // 0x126c TObjFunc
	var_1049_int = 537519; // 0x126e PushI
	var_1050_int = -1; // 0x126f PushI
	var_1051_int = 39366; // 0x1270 PushI
	AddReply(var_1049_int, var_1050_int, var_1051_int); // 0x1271 TObjFunc
	return 0; // 0x1273 Return
	
Label_4724:
	var_1052_int = 39360; // 0x1274 PushI
	var_1053_bool = var_22_int == var_1052_int; // 0x1275 Eq
	if(var_1053_bool == 0) goto Label_4747; // 0x1276 JumpB
	var_1054_string = ""; // 0x1277 PushV
	var_1054_string = "Neutral"; // 0x1278 MovS
	func_2491(var_23_int, var_1054_string); // 0x1279 NEW_2
	var_1055_int = 537513; // 0x127b PushI
	SetMessage(var_1055_int); // 0x127c TObjFunc
	ClearReplies(); // 0x127e TObjFunc
	var_1056_int = 537514; // 0x1280 PushI
	var_1057_int = 39362; // 0x1281 PushI
	var_1058_int = 39361; // 0x1282 PushI
	AddReply(var_1056_int, var_1057_int, var_1058_int); // 0x1283 TObjFunc
	var_1059_int = 537518; // 0x1285 PushI
	var_1060_int = -1; // 0x1286 PushI
	var_1061_int = 39365; // 0x1287 PushI
	AddReply(var_1059_int, var_1060_int, var_1061_int); // 0x1288 TObjFunc
	return 0; // 0x128a Return
	
Label_4747:
	var_1062_int = 39362; // 0x128b PushI
	var_1063_bool = var_22_int == var_1062_int; // 0x128c Eq
	if(var_1063_bool == 0) goto Label_4770; // 0x128d JumpB
	var_1064_string = ""; // 0x128e PushV
	var_1064_string = "Neutral"; // 0x128f MovS
	func_2491(var_23_int, var_1064_string); // 0x1290 NEW_2
	var_1065_int = 537515; // 0x1292 PushI
	SetMessage(var_1065_int); // 0x1293 TObjFunc
	ClearReplies(); // 0x1295 TObjFunc
	var_1066_int = 537516; // 0x1297 PushI
	var_1067_int = -1; // 0x1298 PushI
	var_1068_int = 39363; // 0x1299 PushI
	AddReply(var_1066_int, var_1067_int, var_1068_int); // 0x129a TObjFunc
	var_1069_int = 537517; // 0x129c PushI
	var_1070_int = -1; // 0x129d PushI
	var_1071_int = 39364; // 0x129e PushI
	AddReply(var_1069_int, var_1070_int, var_1071_int); // 0x129f TObjFunc
	return 0; // 0x12a1 Return
	
Label_4770:
	var_1072_int = 45739; // 0x12a2 PushI
	var_1073_bool = var_22_int == var_1072_int; // 0x12a3 Eq
	if(var_1073_bool == 0) goto Label_4798; // 0x12a4 JumpB
	var_1074_string = ""; // 0x12a5 PushV
	var_1074_string = "Neutral"; // 0x12a6 MovS
	func_2491(var_23_int, var_1074_string); // 0x12a7 NEW_2
	var_1075_int = 543283; // 0x12a9 PushI
	SetMessage(var_1075_int); // 0x12aa TObjFunc
	ClearReplies(); // 0x12ac TObjFunc
	var_1076_int = 543284; // 0x12ae PushI
	var_1077_int = -1; // 0x12af PushI
	var_1078_int = 45740; // 0x12b0 PushI
	AddReply(var_1076_int, var_1077_int, var_1078_int); // 0x12b1 TObjFunc
	var_1079_int = 543285; // 0x12b3 PushI
	var_1080_int = -1; // 0x12b4 PushI
	var_1081_int = 45741; // 0x12b5 PushI
	AddReply(var_1079_int, var_1080_int, var_1081_int); // 0x12b6 TObjFunc
	var_1082_int = 543286; // 0x12b8 PushI
	var_1083_int = -1; // 0x12b9 PushI
	var_1084_int = 45742; // 0x12ba PushI
	AddReply(var_1082_int, var_1083_int, var_1084_int); // 0x12bb TObjFunc
	return 0; // 0x12bd Return
	
Label_4798:
	var_1085_int = 45734; // 0x12be PushI
	var_1086_bool = var_22_int == var_1085_int; // 0x12bf Eq
	if(var_1086_bool == 0) goto Label_4821; // 0x12c0 JumpB
	var_1087_string = ""; // 0x12c1 PushV
	var_1087_string = "Neutral"; // 0x12c2 MovS
	func_2491(var_23_int, var_1087_string); // 0x12c3 NEW_2
	var_1088_int = 543278; // 0x12c5 PushI
	SetMessage(var_1088_int); // 0x12c6 TObjFunc
	ClearReplies(); // 0x12c8 TObjFunc
	var_1089_int = 543279; // 0x12ca PushI
	var_1090_int = -1; // 0x12cb PushI
	var_1091_int = 45735; // 0x12cc PushI
	AddReply(var_1089_int, var_1090_int, var_1091_int); // 0x12cd TObjFunc
	var_1092_int = 543280; // 0x12cf PushI
	var_1093_int = -1; // 0x12d0 PushI
	var_1094_int = 45736; // 0x12d1 PushI
	AddReply(var_1092_int, var_1093_int, var_1094_int); // 0x12d2 TObjFunc
	return 0; // 0x12d4 Return
	
Label_4821:
	var_1095_int = 45719; // 0x12d5 PushI
	var_1096_bool = var_22_int == var_1095_int; // 0x12d6 Eq
	if(var_1096_bool == 0) goto Label_4849; // 0x12d7 JumpB
	var_1097_string = ""; // 0x12d8 PushV
	var_1097_string = "Neutral"; // 0x12d9 MovS
	func_2491(var_23_int, var_1097_string); // 0x12da NEW_2
	var_1098_int = 543263; // 0x12dc PushI
	SetMessage(var_1098_int); // 0x12dd TObjFunc
	ClearReplies(); // 0x12df TObjFunc
	var_1099_int = 543264; // 0x12e1 PushI
	var_1100_int = 45723; // 0x12e2 PushI
	var_1101_int = 45720; // 0x12e3 PushI
	AddReply(var_1099_int, var_1100_int, var_1101_int); // 0x12e4 TObjFunc
	var_1102_int = 543265; // 0x12e6 PushI
	var_1103_int = -1; // 0x12e7 PushI
	var_1104_int = 45721; // 0x12e8 PushI
	AddReply(var_1102_int, var_1103_int, var_1104_int); // 0x12e9 TObjFunc
	var_1105_int = 543266; // 0x12eb PushI
	var_1106_int = -1; // 0x12ec PushI
	var_1107_int = 45722; // 0x12ed PushI
	AddReply(var_1105_int, var_1106_int, var_1107_int); // 0x12ee TObjFunc
	return 0; // 0x12f0 Return
	
Label_4849:
	var_1108_int = 45723; // 0x12f1 PushI
	var_1109_bool = var_22_int == var_1108_int; // 0x12f2 Eq
	if(var_1109_bool == 0) goto Label_4877; // 0x12f3 JumpB
	var_1110_string = ""; // 0x12f4 PushV
	var_1110_string = "Neutral"; // 0x12f5 MovS
	func_2491(var_23_int, var_1110_string); // 0x12f6 NEW_2
	var_1111_int = 543267; // 0x12f8 PushI
	SetMessage(var_1111_int); // 0x12f9 TObjFunc
	ClearReplies(); // 0x12fb TObjFunc
	var_1112_int = 543268; // 0x12fd PushI
	var_1113_int = 45727; // 0x12fe PushI
	var_1114_int = 45724; // 0x12ff PushI
	AddReply(var_1112_int, var_1113_int, var_1114_int); // 0x1300 TObjFunc
	var_1115_int = 543269; // 0x1302 PushI
	var_1116_int = -1; // 0x1303 PushI
	var_1117_int = 45725; // 0x1304 PushI
	AddReply(var_1115_int, var_1116_int, var_1117_int); // 0x1305 TObjFunc
	var_1118_int = 543270; // 0x1307 PushI
	var_1119_int = -1; // 0x1308 PushI
	var_1120_int = 45726; // 0x1309 PushI
	AddReply(var_1118_int, var_1119_int, var_1120_int); // 0x130a TObjFunc
	return 0; // 0x130c Return
	
Label_4877:
	var_1121_int = 45727; // 0x130d PushI
	var_1122_bool = var_22_int == var_1121_int; // 0x130e Eq
	if(var_1122_bool == 0) goto Label_4905; // 0x130f JumpB
	var_1123_string = ""; // 0x1310 PushV
	var_1123_string = "Neutral"; // 0x1311 MovS
	func_2491(var_23_int, var_1123_string); // 0x1312 NEW_2
	var_1124_int = 543271; // 0x1314 PushI
	SetMessage(var_1124_int); // 0x1315 TObjFunc
	ClearReplies(); // 0x1317 TObjFunc
	var_1125_int = 543272; // 0x1319 PushI
	var_1126_int = -1; // 0x131a PushI
	var_1127_int = 45728; // 0x131b PushI
	AddReply(var_1125_int, var_1126_int, var_1127_int); // 0x131c TObjFunc
	var_1128_int = 543273; // 0x131e PushI
	var_1129_int = -1; // 0x131f PushI
	var_1130_int = 45729; // 0x1320 PushI
	AddReply(var_1128_int, var_1129_int, var_1130_int); // 0x1321 TObjFunc
	var_1131_int = 543274; // 0x1323 PushI
	var_1132_int = -1; // 0x1324 PushI
	var_1133_int = 45730; // 0x1325 PushI
	AddReply(var_1131_int, var_1132_int, var_1133_int); // 0x1326 TObjFunc
	return 0; // 0x1328 Return
	
Label_4905:
	var_1134_int = 45709; // 0x1329 PushI
	var_1135_bool = var_22_int == var_1134_int; // 0x132a Eq
	if(var_1135_bool == 0) goto Label_4938; // 0x132b JumpB
	var_1136_string = ""; // 0x132c PushV
	var_1136_string = "Neutral"; // 0x132d MovS
	func_2491(var_23_int, var_1136_string); // 0x132e NEW_2
	var_1137_int = 543253; // 0x1330 PushI
	SetMessage(var_1137_int); // 0x1331 TObjFunc
	ClearReplies(); // 0x1333 TObjFunc
	var_1138_int = 543254; // 0x1335 PushI
	var_1139_int = 45714; // 0x1336 PushI
	var_1140_int = 45710; // 0x1337 PushI
	AddReply(var_1138_int, var_1139_int, var_1140_int); // 0x1338 TObjFunc
	var_1141_int = 543255; // 0x133a PushI
	var_1142_int = 45716; // 0x133b PushI
	var_1143_int = 45711; // 0x133c PushI
	AddReply(var_1141_int, var_1142_int, var_1143_int); // 0x133d TObjFunc
	var_1144_int = 543256; // 0x133f PushI
	var_1145_int = -1; // 0x1340 PushI
	var_1146_int = 45712; // 0x1341 PushI
	AddReply(var_1144_int, var_1145_int, var_1146_int); // 0x1342 TObjFunc
	var_1147_int = 543257; // 0x1344 PushI
	var_1148_int = -1; // 0x1345 PushI
	var_1149_int = 45713; // 0x1346 PushI
	AddReply(var_1147_int, var_1148_int, var_1149_int); // 0x1347 TObjFunc
	return 0; // 0x1349 Return
	
Label_4938:
	var_1150_int = 45716; // 0x134a PushI
	var_1151_bool = var_22_int == var_1150_int; // 0x134b Eq
	if(var_1151_bool == 0) goto Label_4956; // 0x134c JumpB
	var_1152_string = ""; // 0x134d PushV
	var_1152_string = "Neutral"; // 0x134e MovS
	func_2491(var_23_int, var_1152_string); // 0x134f NEW_2
	var_1153_int = 543260; // 0x1351 PushI
	SetMessage(var_1153_int); // 0x1352 TObjFunc
	ClearReplies(); // 0x1354 TObjFunc
	var_1154_int = 543261; // 0x1356 PushI
	var_1155_int = -1; // 0x1357 PushI
	var_1156_int = 45717; // 0x1358 PushI
	AddReply(var_1154_int, var_1155_int, var_1156_int); // 0x1359 TObjFunc
	return 0; // 0x135b Return
	
Label_4956:
	var_1157_int = 45714; // 0x135c PushI
	var_1158_bool = var_22_int == var_1157_int; // 0x135d Eq
	if(var_1158_bool == 0) goto Label_4974; // 0x135e JumpB
	var_1159_string = ""; // 0x135f PushV
	var_1159_string = "Neutral"; // 0x1360 MovS
	func_2491(var_23_int, var_1159_string); // 0x1361 NEW_2
	var_1160_int = 543258; // 0x1363 PushI
	SetMessage(var_1160_int); // 0x1364 TObjFunc
	ClearReplies(); // 0x1366 TObjFunc
	var_1161_int = 543259; // 0x1368 PushI
	var_1162_int = -1; // 0x1369 PushI
	var_1163_int = 45715; // 0x136a PushI
	AddReply(var_1161_int, var_1162_int, var_1163_int); // 0x136b TObjFunc
	return 0; // 0x136d Return
	
Label_4974:
	var_3_bool = 1; // 0x136e TMovB
	var_1164_bool = 0; // 0x136f PushV
	func_6187(var_1164_bool); // 0x1370 NEW_2
	if(var_1164_bool == 0) goto Label_4982; // 0x1372 JumpB
	lshStopAnimation(); // 0x1373 Func
	goto Label_4984; // 0x1375 Jump
	
Label_4984:
	return 0; // 0x1378 Return
	
Label_4982:
	StopAnimation(); // 0x1376 Func
	
Label_4986:
	return 0; // 0x137a Return
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_string)
{
	return 0; // 0x1528 Return
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object)
{
	return 0; // 0x152a Return
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_int, var_24_float, var_25_float)
{
	return 0; // 0x152c Return
}


event_43(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_int, var_24_float, var_25_float, var_26_cvector, var_27_cvector)
{
	return 0; // 0x152e Return
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	var_22_bool = 1; // 0x28 PushB
	SensePlayerOnly(var_22_bool); // 0x29 Func
	func_6189(); // 0x2c NEW_2
	func_55(); // 0x2f NEW_2
	
Label_49:
	var_2_bool = 0; // 0x31 TMovB
	func_316(var_20_string, var_21_bool); // 0x33 NEW_2
	goto Label_49; // 0x35 Jump
}


func_0(var_0_bool)
{
	DoTrade(); // 0x1 Func
	var_0_bool = 0; // 0x3 TMovB
	
Label_4:
	var_549_bool = 0; // 0x4 PushV
	func_6187(var_549_bool); // 0x5 NEW_2
	if(var_549_bool == 0) goto Label_15; // 0x7 JumpB
	var_550_string = ""; // 0x8 PushV
	var_550_string = "Neutral"; // 0x9 MovS
	func_5253(var_550_string); // 0xa NEW_2
	lshWaitForAnimEnd(); // 0xc Func
	goto Label_21; // 0xe Jump
	
Label_21:
	var_551_bool = var_0_bool; // 0x15 PushT
	if(var_551_bool == 0) goto Label_24; // 0x16 JumpB
	return 0; // 0x17 Return
	
Label_24:
	goto Label_4; // 0x18 Jump
	
Label_15:
	WaitForAnimEnd(); // 0xf Func
	var_552_string = "all"; // 0x11 PushS
	var_553_string = "idle"; // 0x12 PushS
	PlayAnimation(var_552_string, var_553_string); // 0x13 Func
}


func_1544(var_36_cvector, var_37_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_float = 0; // 0x608 PushV
	GetPosition(var_44_cvector); // 0x609 Func
	GetPosition(var_45_cvector); // 0x60b TObjFunc
	GetDirection(var_46_cvector); // 0x60d Func
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0x60f PushV
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x610 PushV
	var_53_cvector = var_44_cvector - var_45_cvector; // 0x611 Sub2
	func_5334(var_52_cvector, var_53_cvector); // 0x612 NEW_2
	var_59_float = 0.75; // 0x614 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x615 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x616 Add2
	func_5334(var_50_cvector, var_51_cvector); // 0x617 NEW_2
	var_47_cvector = var_50_cvector; // 0x618 Mov
	var_61_int = 32; // 0x61a PushI
	var_62_float = 7000.0; // 0x61b PushF
	FindLongestDir(var_48_cvector, var_49_float, var_47_cvector, var_37_float, var_61_int, var_62_float); // 0x61c Func
	var_63_int = 100; // 0x61e PushI
	var_49_float = var_49_float - var_63_int; // 0x61f Sub2
	var_64_int = 0; // 0x620 PushI
	var_65_bool = var_49_float < var_64_int; // 0x621 LT
	if(var_65_bool == 0) goto Label_1572; // 0x622 JumpB
	var_49_float = 0; // 0x623 MovI
	
Label_1572:
	var_36_cvector = var_48_cvector * var_49_float; // 0x624 Mult2
	return 12; // 0x625 Return
}


func_6179(var_107_int)
{
	var_107_int = 515560; // 0x1823 MovI
	return 0; // 0x1824 Return
}


func_6181(var_106_int)
{
	var_106_int = 503345; // 0x1825 MovI
	return 0; // 0x1826 Return
}


func_1574(var_0_bool, var_1_bool, var_2_bool, var_140_object)
{
	var_144_cvector = CVector(0,0,0); var_145_float = 0; var_146_bool = 0; var_147_cvector = CVector(0,0,0); var_148_float = 0; var_149_cvector = CVector(0,0,0); var_150_float = 0; var_151_bool = 0; var_152_cvector = CVector(0,0,0); var_153_float = 0; // 0x626 PushV
	var_0_bool = var_140_object; // 0x627 TMov
	var_154_cvector = CVector(0,0,0); var_155_float = 0; // 0x628 PushV
	var_155_float = 1.74533; // 0x629 MovF
	func_1544(var_154_cvector, var_155_float); // 0x62a NEW_2
	var_149_cvector = var_154_cvector; // 0x62b Mov
	var_150_float = var_149_cvector | var_149_cvector; // 0x62d Or2
	var_179_float = 2500.0; // 0x62e PushF
	var_180_bool = var_150_float < var_179_float; // 0x62f LT
	if(var_180_bool == 0) goto Label_1603; // 0x630 JumpB
	var_181_cvector = CVector(0,0,0); var_182_float = 0; // 0x631 PushV
	var_182_float = 2.61799; // 0x632 MovF
	func_1544(var_181_cvector, var_182_float); // 0x633 NEW_2
	var_149_cvector = var_181_cvector; // 0x634 Mov
	var_150_float = var_149_cvector | var_149_cvector; // 0x636 Or2
	var_183_float = 2500.0; // 0x637 PushF
	var_184_bool = var_150_float < var_183_float; // 0x638 LT
	if(var_184_bool == 0) goto Label_1603; // 0x639 JumpB
	var_185_string = "Can't retreat, distance: "; // 0x63a PushS
	var_186_float = sqrt(var_150_float); // 0x63b Sqrt
	var_187_int = var_185_string + var_186_float; // 0x63c Add
	Trace(var_187_int); // 0x63d Func
	var_188_float = 0.5; // 0x63f PushF
	Sleep(var_188_float); // 0x640 Func
	return 10; // 0x642 Return
	
Label_1603:
	var_189_float = GetByIndex(var_149_cvector, 0); // 0x643 PushE
	var_190_float = GetByIndex(var_149_cvector, 2); // 0x644 PushE
	Rotate(var_189_float, var_190_float); // 0x645 Func
	var_191_cvector = CVector(0,0,0); // 0x647 PushV
	func_4987(var_191_cvector); // 0x648 NEW_2
	var_1_bool = var_191_cvector + var_149_cvector; // 0x64a Add2
	var_192_int = 120; // 0x64b PushI
	var_193_float = 0.5; // 0x64c PushF
	SetTimer(var_192_int, var_193_float); // 0x64d Func
	var_2_bool = 0; // 0x64f TMovB
	
Label_1616:
	var_194_int = 1; // 0x650 PushI
	MovePoint(var_194_int, var_194_int, var_151_bool); // 0x651 Func
	var_195_bool = var_151_bool; // 0x653 Push
	if(var_195_bool == 0) goto Label_1644; // 0x654 JumpB
	var_196_bool = var_0_bool == 0; // 0x655 NullEq
	if(var_196_bool == 0) goto Label_1625; // 0x656 JumpB
	goto Label_1646; // 0x657 Jump
	
Label_1646:
	return 10; // 0x66e Return
	
Label_1625:
	var_197_cvector = CVector(0,0,0); var_198_float = 0; // 0x659 PushV
	var_198_float = 2.61799; // 0x65a MovF
	func_1544(var_197_cvector, var_198_float); // 0x65b NEW_2
	var_152_cvector = var_197_cvector; // 0x65c Mov
	var_153_float = var_152_cvector | var_152_cvector; // 0x65e Or2
	var_199_float = 2500.0; // 0x65f PushF
	var_200_bool = var_153_float >= var_199_float; // 0x660 GE
	if(var_200_bool == 0) goto Label_1643; // 0x661 JumpB
	var_201_cvector = CVector(0,0,0); // 0x662 PushV
	func_4987(var_201_cvector); // 0x663 NEW_2
	var_1_bool = var_201_cvector + var_152_cvector; // 0x665 Add2
	var_202_int = 120; // 0x666 PushI
	var_203_float = 0.5; // 0x667 PushF
	SetTimer(var_202_int, var_203_float); // 0x668 Func
	goto Label_1644; // 0x66a Jump
	
Label_1644:
	var_204_bool = var_2_bool == 0; // 0x66c Not
	if(var_204_bool == 0) goto Label_1616; // 0x66d JumpB
	
Label_1643:
	goto Label_1646; // 0x66b Jump
}


func_6183(var_108_string)
{
	var_108_string = "ui/NPC_Citizen3.png"; // 0x1827 MovS
	return 0; // 0x1828 Return
}


func_6185(var_109_string)
{
	var_109_string = "ui/NPC_Citizen3_b.png"; // 0x1829 MovS
	return 0; // 0x182a Return
}


func_6187(var_25_bool)
{
	var_25_bool = 0; // 0x182b MovB
	return 0; // 0x182c Return
}


func_6189()
{
	var_23_bool = GlobalVars[0]; // 0x182d PushGE
	var_23_bool = 0; // 0x182e MovB
	GlobalVars[0] = var_23_bool; // 0x182f PopGE
	var_24_bool = 0; // 0x1830 PushV
	var_24_bool = 1; // 0x1831 MovB
	func_6103(var_24_bool); // 0x1832 NEW_2
	return 0; // 0x1834 Return
}


func_6197(var_34_object, var_49_object)
{
	var_35_bool = 0; var_36_bool = 0; // 0x1835 PushV
	var_37_bool = GlobalVars[0]; // 0x1836 PushGE
	if(var_37_bool == 0) goto Label_6210; // 0x1837 JumpB
	IsOverrideActive(var_36_bool); // 0x1838 Func
	var_38_bool = var_36_bool == 0; // 0x183a Not
	if(var_38_bool == 0) goto Label_6208; // 0x183b JumpB
	var_39_object = Obj(); // 0x183c PushV
	var_39_object = var_34_object; // 0x183d Mov
	func_6090(var_39_object); // 0x183e NEW_2
	
Label_6208:
	return 2; // 0x1840 Return
	
Label_6210:
	var_46_int = 1000; // 0x1842 PushI
	var_47_int = 0; var_48_object = Obj(); // 0x1843 PushV
	var_48_object = var_34_object; // 0x1844 Mov
	TaskCall(8); // 0x1845 TaskCall
	func_1731(var_49_object, var_47_int, var_48_object); // 0x1846 NEW_2
	TaskReturn(); // 0x1847 TaskReturn
	var_513_bool = var_46_int == var_49_object; // 0x1849 Eq
	if(var_513_bool == 0) goto Label_6236; // 0x184a JumpB
	var_514_bool = 0; var_515_object = Obj(); // 0x184b PushV
	var_515_object = var_34_object; // 0x184c Mov
	func_5192(var_514_bool, var_515_object); // 0x184d NEW_2
	var_546_bool = var_514_bool == 0; // 0x184f Not
	if(var_546_bool == 0) goto Label_6226; // 0x1850 JumpB
	return 2; // 0x1851 Return
	
Label_6226:
	var_547_object = Obj(); // 0x1852 PushV
	var_547_object = var_34_object; // 0x1853 Mov
	TaskCall(0); // 0x1854 TaskCall
	func_0(var_547_object); // 0x1855 NEW_2
	TaskReturn(); // 0x1856 TaskReturn
	var_554_object = Obj(); // 0x1858 PushV
	var_554_object = var_34_object; // 0x1859 Mov
	func_5248(); // 0x185a NEW_2
	
Label_6236:
	return 2; // 0x185c Return
}


func_5174()
{
	var_506_bool = 0; var_507_bool = 0; // 0x1436 PushV
	var_508_bool = 1; // 0x1437 PushB
	CameraSwitchToNormal(var_508_bool); // 0x1438 Func
	var_509_bool = 0; // 0x143a PushV
	func_6187(var_509_bool); // 0x143b NEW_2
	if(var_509_bool == 0) goto Label_5183; // 0x143d JumpB
	goto Label_5191; // 0x143e Jump
	
Label_5191:
	return 2; // 0x1447 Return
	
Label_5183:
	var_510_string = "head"; // 0x143f PushS
	HasAnimationTrack(var_507_bool, var_510_string); // 0x1440 Func
	var_511_bool = var_507_bool; // 0x1442 Push
	if(var_511_bool == 0) goto Label_5191; // 0x1443 JumpB
	var_512_string = "head"; // 0x1444 PushS
	UnlookAsync(var_512_string); // 0x1445 Func
}


func_55()
{
	var_88_bool = 0; // 0x37 PushV
	func_5100(var_88_bool); // 0x38 NEW_2
	var_91_bool = var_88_bool == 0; // 0x3a Not
	if(var_91_bool == 0) goto Label_63; // 0x3b JumpB
	func_5713(); // 0x3d NEW_2
	
Label_63:
	return 0; // 0x3f Return
}


func_573()
{
	var_119_int = 0; var_120_int = 0; var_121_int = 0; var_122_int = 0; var_123_bool = 0; var_124_float = 0; var_125_bool = 0; var_126_int = 0; var_127_int = 0; var_128_int = 0; var_129_int = 0; var_130_bool = 0; var_131_float = 0; var_132_bool = 0; // 0x23d PushV
	WaitForAnimEnd(); // 0x23e Func
	var_133_bool = 0; // 0x240 PushV
	func_5100(var_133_bool); // 0x241 NEW_2
	var_134_bool = var_133_bool == 0; // 0x243 Not
	if(var_134_bool == 0) goto Label_582; // 0x244 JumpB
	return 14; // 0x245 Return
	
Label_582:
	var_135_int = 0; // 0x246 PushV
	func_5558(var_135_int); // 0x247 NEW_2
	var_126_int = var_135_int; // 0x248 Mov
	var_127_int = 0; // 0x24a MovI
	
Label_587:
	var_148_bool = 0; // 0x24b PushV
	var_148_bool = 0; // 0x24c MovB
	var_149_int = 5; // 0x24d PushI
	var_150_bool = var_127_int < var_149_int; // 0x24e LT
	if(var_150_bool == 0) goto Label_597; // 0x24f JumpB
	var_151_bool = 0; // 0x250 PushV
	func_5100(var_151_bool); // 0x251 NEW_2
	if(var_151_bool == 0) goto Label_597; // 0x253 JumpB
	var_148_bool = 1; // 0x254 MovB
	
Label_597:
	if(var_148_bool == 0) goto Label_649; // 0x255 JumpB
	var_152_int = 3; // 0x256 PushI
	irand(var_128_int, var_152_int); // 0x257 Func
	var_153_int = 0; // 0x259 PushI
	var_154_bool = var_128_int == var_153_int; // 0x25a Eq
	if(var_154_bool == 0) goto Label_621; // 0x25b JumpB
	var_155_int = var_126_int; // 0x25c Push
	if(var_155_int == 0) goto Label_620; // 0x25d JumpB
	irand(var_129_int, var_126_int); // 0x25e Func
	var_156_string = "all"; // 0x260 PushS
	var_157_string = ""; var_158_int = 0; // 0x261 PushV
	var_158_int = var_129_int; // 0x262 Mov
	func_5551(var_157_string, var_158_int); // 0x263 NEW_2
	PlayAnimation(var_156_string, var_157_string); // 0x265 Func
	WaitForAnimEnd(var_130_bool); // 0x267 Func
	var_159_bool = var_130_bool == 0; // 0x269 Not
	if(var_159_bool == 0) goto Label_620; // 0x26a JumpB
	goto Label_649; // 0x26b Jump
	
Label_649:
	ResetAAS(); // 0x289 Func
	return 14; // 0x28b Return
	
Label_620:
	goto Label_638; // 0x26c Jump
	
Label_638:
	var_160_bool = 0; // 0x27e PushV
	func_652(var_160_bool); // 0x27f NEW_2
	var_161_bool = var_160_bool == 0; // 0x281 Not
	if(var_161_bool == 0) goto Label_644; // 0x282 JumpB
	goto Label_649; // 0x283 Jump
	
Label_644:
	ResetAAS(); // 0x284 Func
	var_162_int = 1; // 0x286 PushI
	var_127_int = var_127_int + var_162_int; // 0x287 Add2
	goto Label_587; // 0x288 Jump
	
Label_621:
	var_163_int = 1; // 0x26d PushI
	var_164_bool = var_128_int == var_163_int; // 0x26e Eq
	if(var_164_bool == 0) goto Label_635; // 0x26f JumpB
	var_165_int = 4; // 0x270 PushI
	rand(var_131_float, var_165_int); // 0x271 Func
	var_166_int = 1; // 0x273 PushI
	var_167_int = var_131_float + var_166_int; // 0x274 Add
	Sleep(var_167_int, var_132_bool); // 0x275 Func
	var_168_bool = var_132_bool == 0; // 0x277 Not
	if(var_168_bool == 0) goto Label_634; // 0x278 JumpB
	goto Label_649; // 0x279 Jump
	
Label_634:
	goto Label_638; // 0x27a Jump
	
Label_635:
	var_169_int = var_127_int; // 0x27b Push
	if(var_169_int == 0) goto Label_638; // 0x27c JumpB
	goto Label_649; // 0x27d Jump
}


func_5694(var_25_int)
{
	var_25_int = 0; // 0x163f MovI
	return 0; // 0x1640 Return
}


func_5697()
{
	return 0; // 0x1642 Return
}


func_5699(var_209_int)
{
	var_209_int = 0; // 0x1644 MovI
	return 0; // 0x1645 Return
}


func_5702()
{
	return 0; // 0x1647 Return
}


func_5704(var_25_int)
{
	var_25_int = 2; // 0x1649 MovI
	return 0; // 0x164a Return
}


func_5192(var_514_bool, var_515_object)
{
	var_516_bool = 0; var_517_object = Obj(); var_518_float = 0; // 0x1449 PushV
	var_517_object = var_515_object; // 0x144a Mov
	var_518_float = 70; // 0x144b MovI
	func_5200(var_517_object, var_518_float); // 0x144c NEW_2
	var_514_bool = var_516_bool; // 0x144d Mov
	return 0; // 0x144f Return
}


func_5707(var_33_object)
{
	var_34_object = Obj(); // 0x164c PushV
	var_34_object = var_33_object; // 0x164d Mov
	func_6197(var_33_object, var_34_object); // 0x164e NEW_2
	return 0; // 0x1650 Return
}


func_5200(var_516_bool, var_518_float)
{
	var_519_float = 0; var_520_cvector = CVector(0,0,0); var_521_cvector = CVector(0,0,0); var_522_cvector = CVector(0,0,0); var_523_cvector = CVector(0,0,0); var_524_cvector = CVector(0,0,0); var_525_cvector = CVector(0,0,0); var_526_bool = 0; var_527_float = 0; var_528_cvector = CVector(0,0,0); var_529_cvector = CVector(0,0,0); var_530_cvector = CVector(0,0,0); var_531_cvector = CVector(0,0,0); var_532_cvector = CVector(0,0,0); var_533_cvector = CVector(0,0,0); var_534_bool = 0; // 0x1450 PushV
	GetPosition(var_528_cvector); // 0x1451 ObjFunc
	GetEyesHeight(var_527_float); // 0x1453 ObjFunc
	var_535_float = GetByIndex(var_528_cvector, 1); // 0x1455 PushE
	var_535_float = var_535_float + var_527_float; // 0x1456 Add2
	SetByIndex(var_528_cvector, 1) = var_535_float; // 0x1457 PopE
	GetPosition(var_529_cvector); // 0x1458 Func
	GetEyesHeight(var_527_float); // 0x145a Func
	var_536_float = GetByIndex(var_529_cvector, 1); // 0x145c PushE
	var_536_float = var_536_float + var_527_float; // 0x145d Add2
	SetByIndex(var_529_cvector, 1) = var_536_float; // 0x145e PopE
	var_530_cvector = var_528_cvector - var_529_cvector; // 0x145f Sub2
	var_537_float = GetByIndex(var_530_cvector, 1); // 0x1460 PushE
	var_537_float = 0; // 0x1461 MovI
	SetByIndex(var_530_cvector, 1) = var_537_float; // 0x1462 PopE
	var_538_int = var_530_cvector | var_530_cvector; // 0x1463 Or
	var_539_float = sqrt(var_538_int); // 0x1464 Sqrt
	var_530_cvector = var_530_cvector / var_530_cvector; // 0x1465 Div2
	var_531_cvector = -var_530_cvector; // 0x1466 Neg2
	var_540_float = var_530_cvector * var_518_float; // 0x1467 Mult
	var_541_cvector = CVector(0.0, 10.0, 0.0); // 0x1468 PushVec
	var_532_cvector = var_540_float - var_541_cvector; // 0x1469 Sub2
	var_533_cvector = var_529_cvector + var_532_cvector; // 0x146a Add2
	IsOverrideActive(var_534_bool); // 0x146b Func
	var_542_bool = var_534_bool; // 0x146d Push
	if(var_542_bool == 0) goto Label_5233; // 0x146e JumpB
	var_516_bool = 0; // 0x146f MovB
	return 16; // 0x1470 Return
	
Label_5233:
	StopWorld(); // 0x1471 Func
	var_543_bool = 1; // 0x1473 PushB
	CameraTransit(var_533_cvector, var_531_cvector, var_543_bool); // 0x1474 Func
	var_544_float = GetByIndex(var_532_cvector, 0); // 0x1476 PushE
	var_545_float = GetByIndex(var_532_cvector, 2); // 0x1477 PushE
	Rotate(var_544_float, var_545_float); // 0x1478 Func
	CameraWaitForPlayFinish(); // 0x147a Func
	ResumeWorld(); // 0x147c Func
	var_516_bool = 1; // 0x147e MovB
	return 16; // 0x147f Return
}


func_5713()
{
	return 0; // 0x1651 Return
}


func_5714(var_28_bool, var_29_object)
{
	var_30_bool = 0; var_31_bool = 0; // 0x1652 PushV
	CanSee(var_31_bool, var_29_object); // 0x1653 Func
	var_28_bool = var_31_bool; // 0x1655 Mov
	return 2; // 0x1656 Return
}


func_5719(var_40_object)
{
	var_41_object = Obj(); // 0x1658 PushV
	var_41_object = var_40_object; // 0x1659 Mov
	TaskCall(6); // 0x165a TaskCall
	func_1380(var_42_object, var_43_cvector, var_44_bool, var_41_object); // 0x165b NEW_2
	TaskReturn(); // 0x165c TaskReturn
	return 0; // 0x165e Return
}


func_6237(var_67_bool)
{
	var_68_float = 0; // 0x185d PushV
	func_6076(var_68_float); // 0x185e NEW_2
	var_76_float = 0.4; // 0x1860 PushF
	var_67_bool = var_68_float > var_76_float; // 0x1861 GT2
	return 0; // 0x1862 Return
}


func_5727(var_37_bool, var_38_object)
{
	var_39_bool = 0; var_40_bool = 0; // 0x165f PushV
	CanSee(var_40_bool, var_38_object); // 0x1660 Func
	var_37_bool = 1; // 0x1662 MovB
	var_41_bool = var_40_bool; // 0x1663 Push
	if(var_41_bool == 0) goto Label_5741; // 0x1664 JumpB
	var_42_float = 0; var_43_object = Obj(); // 0x1665 PushV
	var_43_object = var_38_object; // 0x1666 Mov
	func_4999(var_43_object); // 0x1667 NEW_2
	var_50_int = 4000000; // 0x1669 PushI
	var_51_bool = var_42_float <= var_50_int; // 0x166a LE
	if(var_51_bool == 0) goto Label_5741; // 0x166b JumpB
	var_37_bool = 0; // 0x166c MovB
	
Label_5741:
	return 2; // 0x166d Return
}


func_6243(var_27_bool, var_28_object, var_29_object)
{
	var_31_bool = 0; var_32_object = Obj(); var_33_object = Obj(); var_34_float = 0; // 0x1864 PushV
	var_32_object = var_28_object; // 0x1865 Mov
	var_33_object = var_29_object; // 0x1866 Mov
	var_34_float = 700.0; // 0x1867 MovF
	func_5628(var_31_bool, var_32_object, var_33_object, var_34_float); // 0x1868 NEW_2
	var_27_bool = var_31_bool; // 0x1869 Mov
	return 0; // 0x186b Return
}


func_1124(var_2_bool)
{
	Stop(); // 0x464 Func
	var_23_int = 120; // 0x466 PushI
	KillTimer(var_23_int); // 0x467 Func
	var_2_bool = 1; // 0x469 TMovB
	return 0; // 0x46a Return
}


func_5742(var_139_object)
{
	var_140_object = Obj(); // 0x166f PushV
	var_140_object = var_139_object; // 0x1670 Mov
	TaskCall(7); // 0x1671 TaskCall
	func_1574(var_141_object, var_142_cvector, var_143_bool, var_140_object); // 0x1672 NEW_2
	TaskReturn(); // 0x1673 TaskReturn
	return 0; // 0x1675 Return
}


func_1140(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x474 PushV
	GetDirection(var_77_cvector); // 0x475 Func
	var_79_cvector = CVector(0,0,0); var_80_object = Obj(); // 0x477 PushV
	var_80_object = var_0_bool; // 0x478 MovT
	func_4992(var_80_object); // 0x479 NEW_2
	var_78_cvector = var_79_cvector; // 0x47a Mov
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x47c PushV
	var_86_cvector = var_77_cvector; // 0x47d Mov
	var_87_cvector = var_78_cvector; // 0x47e Mov
	func_5349(var_85_float, var_86_cvector, var_87_cvector); // 0x47f NEW_2
	var_93_float = -0.34202; // 0x481 PushF
	var_74_bool = var_85_float >= var_93_float; // 0x482 GE2
	return 4; // 0x483 Return
}


func_5750(var_54_bool, var_55_object)
{
	var_56_bool = 0; var_57_object = Obj(); // 0x1677 PushV
	var_57_object = var_55_object; // 0x1678 Mov
	func_5727(var_56_bool, var_57_object); // 0x1679 NEW_2
	var_54_bool = var_56_bool; // 0x167a Mov
	return 0; // 0x167c Return
}


func_5757(var_207_object)
{
	var_208_object = Obj(); // 0x167e PushV
	var_208_object = var_207_object; // 0x167f Mov
	func_5742(var_208_object); // 0x1680 NEW_2
	return 0; // 0x1682 Return
}


func_5248()
{
	var_555_bool = 1; // 0x1481 PushB
	CameraSwitchToNormal(var_555_bool); // 0x1482 Func
	return 0; // 0x1484 Return
}


func_5763(var_30_bool)
{
	var_30_bool = 0; // 0x1684 MovB
	return 0; // 0x1685 Return
}


func_1156(var_36_cvector, var_37_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_float = 0; // 0x484 PushV
	GetPosition(var_44_cvector); // 0x485 Func
	GetPosition(var_45_cvector); // 0x487 TObjFunc
	GetDirection(var_46_cvector); // 0x489 Func
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0x48b PushV
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x48c PushV
	var_53_cvector = var_44_cvector - var_45_cvector; // 0x48d Sub2
	func_5334(var_52_cvector, var_53_cvector); // 0x48e NEW_2
	var_59_float = 0.75; // 0x490 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x491 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x492 Add2
	func_5334(var_50_cvector, var_51_cvector); // 0x493 NEW_2
	var_47_cvector = var_50_cvector; // 0x494 Mov
	var_61_int = 32; // 0x496 PushI
	var_62_float = 7000.0; // 0x497 PushF
	FindLongestDir(var_48_cvector, var_49_float, var_47_cvector, var_37_float, var_61_int, var_62_float); // 0x498 Func
	var_63_int = 100; // 0x49a PushI
	var_49_float = var_49_float - var_63_int; // 0x49b Sub2
	var_64_int = 0; // 0x49c PushI
	var_65_bool = var_49_float < var_64_int; // 0x49d LT
	if(var_65_bool == 0) goto Label_1184; // 0x49e JumpB
	var_49_float = 0; // 0x49f MovI
	
Label_1184:
	var_36_cvector = var_48_cvector * var_49_float; // 0x4a0 Mult2
	return 12; // 0x4a1 Return
}


func_5253(var_325_string)
{
	var_326_bool = 0; var_327_float = 0; var_328_float = 0; var_329_bool = 0; var_330_float = 0; var_331_float = 0; // 0x1485 PushV
	lshHasAnimation(var_329_bool, var_325_string); // 0x1486 Func
	var_332_bool = var_329_bool; // 0x1488 Push
	if(var_332_bool == 0) goto Label_5264; // 0x1489 JumpB
	lshGetAnimTimes(var_325_string, var_330_float, var_331_float); // 0x148a Func
	var_333_bool = 0; // 0x148c PushB
	lshPlayAnimation(var_330_float, var_331_float, var_333_bool); // 0x148d Func
	goto Label_5268; // 0x148f Jump
	
Label_5268:
	return 6; // 0x1494 Return
	
Label_5264:
	var_334_string = "Can't find lsh animation : "; // 0x1490 PushS
	var_335_int = var_334_string + var_325_string; // 0x1491 Add
	Trace(var_335_int); // 0x1492 Func
}


func_5766()
{
	return 0; // 0x1687 Return
}


func_5768()
{
	var_30_int = 1000; // 0x1689 PushI
	SetReturnValue(var_30_int); // 0x168a ObjFunc
	return 0; // 0x168c Return
}


func_652(var_160_bool)
{
	var_160_bool = 1; // 0x28c MovB
	return 0; // 0x28d Return
}


func_5773(var_249_bool)
{
	var_251_int = 0; var_252_string = ""; // 0x168e PushV
	var_252_string = "branch"; // 0x168f MovS
	func_5393(var_251_int, var_252_string); // 0x1690 NEW_2
	var_253_int = 0; // 0x1692 PushI
	var_254_bool = var_251_int == var_253_int; // 0x1693 Eq
	if(var_254_bool == 0) goto Label_5783; // 0x1694 JumpB
	var_249_bool = 1; // 0x1695 MovB
	return 0; // 0x1696 Return
	
Label_5783:
	var_249_bool = 0; // 0x1697 MovB
	return 0; // 0x1698 Return
}


func_654()
{
	StopAnimation(); // 0x28e Func
	StopGroup0(); // 0x290 Func
	return 0; // 0x292 Return
}


func_659(var_0_bool, var_83_object)
{
	var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_bool = 0; var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_bool = 0; // 0x293 PushV
	var_0_bool = var_83_object; // 0x294 TMov
	func_710(var_90_bool); // 0x296 NEW_2
	GetDirection(var_88_cvector); // 0x298 Func
	var_98_cvector = CVector(0,0,0); var_99_object = Obj(); // 0x29a PushV
	var_99_object = var_0_bool; // 0x29b MovT
	func_4992(var_99_object); // 0x29c NEW_2
	var_89_cvector = var_98_cvector; // 0x29d Mov
	var_104_float = 0; var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); // 0x29f PushV
	var_105_cvector = var_88_cvector; // 0x2a0 Mov
	var_106_cvector = var_89_cvector; // 0x2a1 Mov
	func_5376(var_104_float, var_105_cvector, var_106_cvector); // 0x2a2 NEW_2
	var_128_int = 0; // 0x2a4 PushI
	var_129_bool = var_104_float < var_128_int; // 0x2a5 LT
	if(var_129_bool == 0) goto Label_685; // 0x2a6 JumpB
	var_130_object = Obj(); // 0x2a7 PushV
	var_130_object = var_0_bool; // 0x2a8 MovT
	func_5089(); // 0x2a9 NEW_2
	var_90_bool = 1; // 0x2ab MovB
	goto Label_688; // 0x2ac Jump
	
Label_688:
	var_139_bool = var_90_bool; // 0x2b0 Push
	if(var_139_bool == 0) goto Label_704; // 0x2b1 JumpB
	var_140_object = Obj(); // 0x2b2 PushV
	var_140_object = var_0_bool; // 0x2b3 MovT
	func_5089(); // 0x2b4 NEW_2
	var_141_int = 111; // 0x2b6 PushI
	var_142_float = 0.5; // 0x2b7 PushF
	SetTimer(var_141_int, var_142_float); // 0x2b8 Func
	var_143_float = 5.0; // 0x2ba PushF
	Sleep(var_143_float); // 0x2bb Func
	var_144_int = 111; // 0x2bd PushI
	KillTimer(var_144_int); // 0x2be Func
	
Label_704:
	StopAsync(); // 0x2c0 Func
	var_145_string = "head"; // 0x2c2 PushS
	UnlookAsync(var_145_string); // 0x2c3 Func
	return 6; // 0x2c5 Return
	
Label_685:
	var_146_float = 1.5; // 0x2ad PushF
	Sleep(var_146_float, var_90_bool); // 0x2ae Func
}


func_5269(var_57_string, var_58_bool)
{
	var_61_bool = 0; var_62_float = 0; var_63_float = 0; var_64_bool = 0; var_65_float = 0; var_66_float = 0; // 0x1495 PushV
	lshHasAnimation(var_64_bool, var_57_string); // 0x1496 Func
	var_67_bool = var_64_bool; // 0x1498 Push
	if(var_67_bool == 0) goto Label_5279; // 0x1499 JumpB
	lshGetAnimTimes(var_57_string, var_65_float, var_66_float); // 0x149a Func
	lshPlayAnimation(var_65_float, var_66_float, var_58_bool); // 0x149c Func
	goto Label_5283; // 0x149e Jump
	
Label_5283:
	return 6; // 0x14a3 Return
	
Label_5279:
	var_68_string = "Can't find lsh animation : "; // 0x149f PushS
	var_69_int = var_68_string + var_57_string; // 0x14a0 Add
	Trace(var_69_int); // 0x14a1 Func
}


func_5785(var_45_bool)
{
	var_47_int = 0; var_48_string = ""; // 0x169a PushV
	var_48_string = "branch"; // 0x169b MovS
	func_5393(var_47_int, var_48_string); // 0x169c NEW_2
	var_51_int = 2; // 0x169e PushI
	var_52_bool = var_47_int == var_51_int; // 0x169f Eq
	if(var_52_bool == 0) goto Label_5795; // 0x16a0 JumpB
	var_45_bool = 1; // 0x16a1 MovB
	return 0; // 0x16a2 Return
	
Label_5795:
	var_45_bool = 0; // 0x16a3 MovB
	return 0; // 0x16a4 Return
}


func_1186(var_0_bool, var_1_bool, var_2_bool, var_112_object)
{
	var_116_cvector = CVector(0,0,0); var_117_float = 0; var_118_bool = 0; var_119_cvector = CVector(0,0,0); var_120_float = 0; var_121_cvector = CVector(0,0,0); var_122_float = 0; var_123_bool = 0; var_124_cvector = CVector(0,0,0); var_125_float = 0; // 0x4a2 PushV
	var_0_bool = var_112_object; // 0x4a3 TMov
	var_126_cvector = CVector(0,0,0); var_127_float = 0; // 0x4a4 PushV
	var_127_float = 1.74533; // 0x4a5 MovF
	func_1156(var_126_cvector, var_127_float); // 0x4a6 NEW_2
	var_121_cvector = var_126_cvector; // 0x4a7 Mov
	var_122_float = var_121_cvector | var_121_cvector; // 0x4a9 Or2
	var_156_float = 2500.0; // 0x4aa PushF
	var_157_bool = var_122_float < var_156_float; // 0x4ab LT
	if(var_157_bool == 0) goto Label_1215; // 0x4ac JumpB
	var_158_cvector = CVector(0,0,0); var_159_float = 0; // 0x4ad PushV
	var_159_float = 2.61799; // 0x4ae MovF
	func_1156(var_158_cvector, var_159_float); // 0x4af NEW_2
	var_121_cvector = var_158_cvector; // 0x4b0 Mov
	var_122_float = var_121_cvector | var_121_cvector; // 0x4b2 Or2
	var_160_float = 2500.0; // 0x4b3 PushF
	var_161_bool = var_122_float < var_160_float; // 0x4b4 LT
	if(var_161_bool == 0) goto Label_1215; // 0x4b5 JumpB
	var_162_string = "Can't retreat, distance: "; // 0x4b6 PushS
	var_163_float = sqrt(var_122_float); // 0x4b7 Sqrt
	var_164_int = var_162_string + var_163_float; // 0x4b8 Add
	Trace(var_164_int); // 0x4b9 Func
	var_165_float = 0.5; // 0x4bb PushF
	Sleep(var_165_float); // 0x4bc Func
	return 10; // 0x4be Return
	
Label_1215:
	var_166_float = GetByIndex(var_121_cvector, 0); // 0x4bf PushE
	var_167_float = GetByIndex(var_121_cvector, 2); // 0x4c0 PushE
	Rotate(var_166_float, var_167_float); // 0x4c1 Func
	var_168_cvector = CVector(0,0,0); // 0x4c3 PushV
	func_4987(var_168_cvector); // 0x4c4 NEW_2
	var_1_bool = var_168_cvector + var_121_cvector; // 0x4c6 Add2
	var_171_int = 120; // 0x4c7 PushI
	var_172_float = 0.5; // 0x4c8 PushF
	SetTimer(var_171_int, var_172_float); // 0x4c9 Func
	var_2_bool = 0; // 0x4cb TMovB
	
Label_1228:
	var_173_int = 1; // 0x4cc PushI
	MovePoint(var_173_int, var_173_int, var_123_bool); // 0x4cd Func
	var_174_bool = var_123_bool; // 0x4cf Push
	if(var_174_bool == 0) goto Label_1256; // 0x4d0 JumpB
	var_175_bool = var_0_bool == 0; // 0x4d1 NullEq
	if(var_175_bool == 0) goto Label_1237; // 0x4d2 JumpB
	goto Label_1258; // 0x4d3 Jump
	
Label_1258:
	return 10; // 0x4ea Return
	
Label_1237:
	var_176_cvector = CVector(0,0,0); var_177_float = 0; // 0x4d5 PushV
	var_177_float = 2.61799; // 0x4d6 MovF
	func_1156(var_176_cvector, var_177_float); // 0x4d7 NEW_2
	var_124_cvector = var_176_cvector; // 0x4d8 Mov
	var_125_float = var_124_cvector | var_124_cvector; // 0x4da Or2
	var_178_float = 2500.0; // 0x4db PushF
	var_179_bool = var_125_float >= var_178_float; // 0x4dc GE
	if(var_179_bool == 0) goto Label_1255; // 0x4dd JumpB
	var_180_cvector = CVector(0,0,0); // 0x4de PushV
	func_4987(var_180_cvector); // 0x4df NEW_2
	var_1_bool = var_180_cvector + var_124_cvector; // 0x4e1 Add2
	var_181_int = 120; // 0x4e2 PushI
	var_182_float = 0.5; // 0x4e3 PushF
	SetTimer(var_181_int, var_182_float); // 0x4e4 Func
	goto Label_1256; // 0x4e6 Jump
	
Label_1256:
	var_183_bool = var_2_bool == 0; // 0x4e8 Not
	if(var_183_bool == 0) goto Label_1228; // 0x4e9 JumpB
	
Label_1255:
	goto Label_1258; // 0x4e7 Jump
}


func_1699(var_2_bool)
{
	Stop(); // 0x6a3 Func
	var_23_int = 120; // 0x6a5 PushI
	KillTimer(var_23_int); // 0x6a6 Func
	var_2_bool = 1; // 0x6a8 TMovB
	return 0; // 0x6a9 Return
}


func_5284(var_91_object)
{
	var_92_float = 0; var_93_cvector = CVector(0,0,0); var_94_float = 0; var_95_cvector = CVector(0,0,0); // 0x14a4 PushV
	GetEyesHeight(var_94_float); // 0x14a5 ObjFunc
	var_95_cvector = CVector(0.0, 0.0, 0.0); // 0x14a7 MovV
	var_96_float = GetByIndex(var_95_cvector, 1); // 0x14a8 PushE
	var_96_float = var_94_float; // 0x14a9 Mov
	SetByIndex(var_95_cvector, 1) = var_96_float; // 0x14aa PopE
	var_97_string = "head"; // 0x14ab PushS
	LookAsync(var_91_object, var_97_string, var_95_cvector); // 0x14ac Func
	return 4; // 0x14ae Return
}


func_5797(var_139_bool, var_140_object)
{
	var_141_bool = 0; var_142_object = Obj(); // 0x16a6 PushV
	var_142_object = var_140_object; // 0x16a7 Mov
	func_5937(var_142_object); // 0x16a8 NEW_2
	if(var_141_bool == 0) goto Label_5805; // 0x16aa JumpB
	var_139_bool = 1; // 0x16ab MovB
	return 0; // 0x16ac Return
	
Label_5805:
	var_139_bool = 0; // 0x16ad MovB
	return 0; // 0x16ae Return
}


func_5807(var_73_bool, var_74_object)
{
	var_75_bool = 0; var_76_object = Obj(); // 0x16b0 PushV
	var_76_object = var_74_object; // 0x16b1 Mov
	func_5944(var_76_object); // 0x16b2 NEW_2
	if(var_75_bool == 0) goto Label_5815; // 0x16b4 JumpB
	var_73_bool = 1; // 0x16b5 MovB
	return 0; // 0x16b6 Return
	
Label_5815:
	var_73_bool = 0; // 0x16b7 MovB
	return 0; // 0x16b8 Return
}


func_5295()
{
	var_25_bool = 0; // 0x14af PushV
	func_6187(var_25_bool); // 0x14b0 NEW_2
	if(var_25_bool == 0) goto Label_5301; // 0x14b2 JumpB
	lshStopSpeech(); // 0x14b3 Func
	
Label_5301:
	return 0; // 0x14b5 Return
}


func_1715(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x6b3 PushV
	GetDirection(var_77_cvector); // 0x6b4 Func
	var_79_cvector = CVector(0,0,0); var_80_object = Obj(); // 0x6b6 PushV
	var_80_object = var_0_bool; // 0x6b7 MovT
	func_4992(var_80_object); // 0x6b8 NEW_2
	var_78_cvector = var_79_cvector; // 0x6b9 Mov
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x6bb PushV
	var_86_cvector = var_77_cvector; // 0x6bc Mov
	var_87_cvector = var_78_cvector; // 0x6bd Mov
	func_5349(var_85_float, var_86_cvector, var_87_cvector); // 0x6be NEW_2
	var_93_float = -0.34202; // 0x6c0 PushF
	var_74_bool = var_85_float >= var_93_float; // 0x6c1 GE2
	return 4; // 0x6c2 Return
}


func_5302(var_53_string, var_54_int, var_55_int)
{
	var_56_bool = 0; var_57_bool = 0; // 0x14b6 PushV
	var_58_bool = 0; var_59_int = 0; var_60_int = 0; // 0x14b7 PushV
	var_59_int = var_54_int; // 0x14b8 Mov
	var_60_int = var_55_int; // 0x14b9 Mov
	func_5344(var_58_bool, var_59_int, var_60_int); // 0x14ba NEW_2
	if(var_58_bool == 0) goto Label_5312; // 0x14bc JumpB
	var_61_int = 0; // 0x14bd PushI
	AddItem(var_57_bool, var_53_string, var_61_int); // 0x14be Func
	
Label_5312:
	return 2; // 0x14c0 Return
}


func_5817(var_147_bool, var_148_object)
{
	var_149_bool = 0; var_150_object = Obj(); // 0x16ba PushV
	var_150_object = var_148_object; // 0x16bb Mov
	func_5951(var_150_object); // 0x16bc NEW_2
	if(var_149_bool == 0) goto Label_5825; // 0x16be JumpB
	var_147_bool = 1; // 0x16bf MovB
	return 0; // 0x16c0 Return
	
Label_5825:
	var_147_bool = 0; // 0x16c1 MovB
	return 0; // 0x16c2 Return
}


func_5313(var_29_string, var_30_int, var_31_int, var_32_int)
{
	var_33_int = 0; var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x14c1 PushV
	var_37_bool = 0; var_38_int = 0; var_39_int = 0; // 0x14c2 PushV
	var_38_int = var_30_int; // 0x14c3 Mov
	var_39_int = var_31_int; // 0x14c4 Mov
	func_5344(var_37_bool, var_38_int, var_39_int); // 0x14c5 NEW_2
	if(var_37_bool == 0) goto Label_5327; // 0x14c7 JumpB
	irand(var_35_int, var_32_int); // 0x14c8 Func
	var_42_int = 0; // 0x14ca PushI
	var_43_int = 1; // 0x14cb PushI
	var_44_int = var_35_int + var_43_int; // 0x14cc Add
	AddItem(var_36_bool, var_29_string, var_42_int, var_44_int); // 0x14cd Func
	
Label_5327:
	return 4; // 0x14cf Return
}


func_5827(var_153_bool, var_154_object)
{
	var_155_bool = 0; var_156_object = Obj(); // 0x16c4 PushV
	var_156_object = var_154_object; // 0x16c5 Mov
	func_5958(var_156_object); // 0x16c6 NEW_2
	if(var_155_bool == 0) goto Label_5835; // 0x16c8 JumpB
	var_153_bool = 1; // 0x16c9 MovB
	return 0; // 0x16ca Return
	
Label_5835:
	var_153_bool = 0; // 0x16cb MovB
	return 0; // 0x16cc Return
}


func_1731(var_0_bool, var_47_int, var_48_object)
{
	var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_object = Obj(); var_55_bool = 0; var_56_int = 0; var_57_bool = 0; // 0x6c3 PushV
	var_0_bool = var_48_object; // 0x6c4 TMov
	var_58_bool = 0; var_59_object = Obj(); var_60_float = 0; // 0x6c5 PushV
	var_59_object = var_48_object; // 0x6c6 Mov
	var_60_float = 70.0; // 0x6c7 MovF
	func_5105(var_59_object, var_60_float); // 0x6c8 NEW_2
	var_105_bool = var_58_bool == 0; // 0x6ca Not
	if(var_105_bool == 0) goto Label_1742; // 0x6cb JumpB
	var_47_int = -2; // 0x6cc MovI
	return 8; // 0x6cd Return
	
Label_1742:
	CreateDialog(var_54_object); // 0x6ce Func
	var_106_int = 0; // 0x6d0 PushV
	func_6181(var_106_int); // 0x6d1 NEW_2
	SetNPCName(var_106_int); // 0x6d3 ObjFunc
	var_107_int = 0; // 0x6d5 PushV
	func_6179(var_107_int); // 0x6d6 NEW_2
	SetNPCDescription(var_107_int); // 0x6d8 ObjFunc
	var_108_string = ""; // 0x6da PushV
	func_6183(var_108_string); // 0x6db NEW_2
	SetPhoto(var_108_string); // 0x6dd ObjFunc
	var_109_string = ""; // 0x6df PushV
	func_6185(var_109_string); // 0x6e0 NEW_2
	SetPhoto2(var_109_string); // 0x6e2 ObjFunc
	var_110_int = 0; // 0x6e4 PushV
	func_6053(var_110_int); // 0x6e5 NEW_2
	SetPlayerName(var_110_int); // 0x6e7 ObjFunc
	var_56_int = -1; // 0x6e9 MovI
	IsOverrideActive(var_55_bool); // 0x6ea Func
	var_118_bool = var_55_bool; // 0x6ec Push
	if(var_118_bool == 0) goto Label_1776; // 0x6ed JumpB
	var_47_int = -2; // 0x6ee MovI
	return 8; // 0x6ef Return
	
Label_1776:
	DoDialog(var_54_object); // 0x6f0 Func
	var_119_object = Obj(); var_120_object = Obj(); // 0x6f2 PushV
	var_119_object = var_48_object; // 0x6f3 Mov
	var_120_object = var_54_object; // 0x6f4 Mov
	TaskCall(9); // 0x6f5 TaskCall
	func_1805(var_121_object, var_122_object, var_123_string, var_124_bool, var_119_object, var_120_object); // 0x6f6 NEW_2
	TaskReturn(); // 0x6f7 TaskReturn
	IsDialogEnd(var_57_bool); // 0x6f9 ObjFunc
	
Label_1787:
	var_504_bool = var_57_bool == 0; // 0x6fb Not
	if(var_504_bool == 0) goto Label_1794; // 0x6fc JumpB
	sync(); // 0x6fd Func
	IsDialogEnd(var_57_bool); // 0x6ff ObjFunc
	goto Label_1787; // 0x701 Jump
	
Label_1794:
	var_505_object = Obj(); // 0x702 PushV
	var_505_object = var_48_object; // 0x703 Mov
	func_5174(); // 0x704 NEW_2
	StopDialog(var_54_object); // 0x706 Func
	GetReturnValue(var_56_int); // 0x708 ObjFunc
	var_47_int = var_56_int; // 0x70a Mov
	return 8; // 0x70b Return
}


func_710(var_0_bool)
{
	var_91_object = Obj(); // 0x2c6 PushV
	var_91_object = var_0_bool; // 0x2c7 MovT
	func_5284(var_91_object); // 0x2c8 NEW_2
	return 0; // 0x2ca Return
}


func_5837(var_99_bool, var_100_object)
{
	var_101_bool = 0; var_102_object = Obj(); // 0x16ce PushV
	var_102_object = var_100_object; // 0x16cf Mov
	func_5965(var_102_object); // 0x16d0 NEW_2
	if(var_101_bool == 0) goto Label_5845; // 0x16d2 JumpB
	var_99_bool = 1; // 0x16d3 MovB
	return 0; // 0x16d4 Return
	
Label_5845:
	var_99_bool = 0; // 0x16d5 MovB
	return 0; // 0x16d6 Return
}


func_5328(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); // 0x14d0 PushV
	self(var_32_object); // 0x14d1 Func
	var_30_object = var_32_object; // 0x14d3 Mov
	return 2; // 0x14d4 Return
}


func_5334(var_52_cvector, var_53_cvector)
{
	var_54_float = 0; var_55_float = 0; // 0x14d6 PushV
	var_56_int = var_53_cvector | var_53_cvector; // 0x14d7 Or
	var_55_float = sqrt(var_56_int); // 0x14d8 Sqrt2
	var_57_float = 0.0; // 0x14d9 PushF
	var_58_bool = var_55_float < var_57_float; // 0x14da LT
	if(var_58_bool == 0) goto Label_5342; // 0x14db JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x14dc MovV
	return 2; // 0x14dd Return
	
Label_5342:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x14de Div2
	return 2; // 0x14df Return
}


func_5847(var_111_bool, var_112_object)
{
	var_113_bool = 0; var_114_object = Obj(); // 0x16d8 PushV
	var_114_object = var_112_object; // 0x16d9 Mov
	func_5972(var_114_object); // 0x16da NEW_2
	if(var_113_bool == 0) goto Label_5855; // 0x16dc JumpB
	var_111_bool = 1; // 0x16dd MovB
	return 0; // 0x16de Return
	
Label_5855:
	var_111_bool = 0; // 0x16df MovB
	return 0; // 0x16e0 Return
}


func_5344(var_37_bool, var_38_int, var_39_int)
{
	var_40_int = 0; var_41_int = 0; // 0x14e0 PushV
	irand(var_41_int, var_39_int); // 0x14e1 Func
	var_37_bool = var_41_int < var_38_int; // 0x14e3 LT2
	return 2; // 0x14e4 Return
}


func_5857(var_84_bool, var_85_object)
{
	var_86_bool = 0; var_87_object = Obj(); // 0x16e2 PushV
	var_87_object = var_85_object; // 0x16e3 Mov
	func_5979(var_87_object); // 0x16e4 NEW_2
	if(var_86_bool == 0) goto Label_5865; // 0x16e6 JumpB
	var_84_bool = 1; // 0x16e7 MovB
	return 0; // 0x16e8 Return
	
Label_5865:
	var_84_bool = 0; // 0x16e9 MovB
	return 0; // 0x16ea Return
}


func_5349(var_85_float, var_86_cvector, var_87_cvector)
{
	var_88_int = var_86_cvector | var_87_cvector; // 0x14e6 Or
	var_89_int = var_86_cvector | var_86_cvector; // 0x14e7 Or
	var_90_int = var_87_cvector | var_87_cvector; // 0x14e8 Or
	var_91_float = var_89_int * var_90_int; // 0x14e9 Mult
	var_92_float = sqrt(var_91_float); // 0x14ea Sqrt
	var_85_float = var_88_int / var_88_int; // 0x14eb Div2
	return 0; // 0x14ec Return
}


func_5867(var_121_bool, var_122_object)
{
	var_123_bool = 0; var_124_object = Obj(); // 0x16ec PushV
	var_124_object = var_122_object; // 0x16ed Mov
	func_5986(var_124_object); // 0x16ee NEW_2
	if(var_123_bool == 0) goto Label_5875; // 0x16f0 JumpB
	var_121_bool = 1; // 0x16f1 MovB
	return 0; // 0x16f2 Return
	
Label_5875:
	var_121_bool = 0; // 0x16f3 MovB
	return 0; // 0x16f4 Return
}


func_5357(var_75_float, var_76_cvector, var_77_cvector)
{
	var_78_float = GetByIndex(var_76_cvector, 0); // 0x14ee PushE
	var_79_float = GetByIndex(var_77_cvector, 0); // 0x14ef PushE
	var_80_float = var_78_float * var_79_float; // 0x14f0 Mult
	var_81_float = GetByIndex(var_76_cvector, 2); // 0x14f1 PushE
	var_82_float = GetByIndex(var_77_cvector, 2); // 0x14f2 PushE
	var_83_float = var_81_float * var_82_float; // 0x14f3 Mult
	var_75_float = var_80_float + var_83_float; // 0x14f4 Add2
	return 0; // 0x14f5 Return
}


func_5877(var_127_bool, var_128_object)
{
	var_129_bool = 0; var_130_object = Obj(); // 0x16f6 PushV
	var_130_object = var_128_object; // 0x16f7 Mov
	func_5993(var_130_object); // 0x16f8 NEW_2
	if(var_129_bool == 0) goto Label_5885; // 0x16fa JumpB
	var_127_bool = 1; // 0x16fb MovB
	return 0; // 0x16fc Return
	
Label_5885:
	var_127_bool = 0; // 0x16fd MovB
	return 0; // 0x16fe Return
}


func_5366(var_84_float, var_85_cvector)
{
	var_86_float = GetByIndex(var_85_cvector, 0); // 0x14f7 PushE
	var_87_float = GetByIndex(var_85_cvector, 0); // 0x14f8 PushE
	var_88_float = var_86_float * var_87_float; // 0x14f9 Mult
	var_89_float = GetByIndex(var_85_cvector, 2); // 0x14fa PushE
	var_90_float = GetByIndex(var_85_cvector, 2); // 0x14fb PushE
	var_91_float = var_89_float * var_90_float; // 0x14fc Mult
	var_92_int = var_88_float + var_91_float; // 0x14fd Add
	var_84_float = sqrt(var_92_int); // 0x14fe Sqrt2
	return 0; // 0x14ff Return
}


func_251(var_2_bool)
{
	var_23_int = 110; // 0xfb PushI
	KillTimer(var_23_int); // 0xfc Func
	var_2_bool = 0; // 0xfe TMovB
	func_387(var_21_string, var_22_bool); // 0x100 NEW_2
	return 0; // 0x102 Return
}


func_5887(var_90_bool, var_91_object)
{
	var_92_bool = 0; var_93_object = Obj(); // 0x1700 PushV
	var_93_object = var_91_object; // 0x1701 Mov
	func_6000(var_93_object); // 0x1702 NEW_2
	if(var_92_bool == 0) goto Label_5895; // 0x1704 JumpB
	var_90_bool = 1; // 0x1705 MovB
	return 0; // 0x1706 Return
	
Label_5895:
	var_90_bool = 0; // 0x1707 MovB
	return 0; // 0x1708 Return
}


func_5376(var_72_float, var_73_cvector, var_74_cvector)
{
	var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); // 0x1501 PushV
	var_76_cvector = var_73_cvector; // 0x1502 Mov
	var_77_cvector = var_74_cvector; // 0x1503 Mov
	func_5357(var_75_float, var_76_cvector, var_77_cvector); // 0x1504 NEW_2
	var_84_float = 0; var_85_cvector = CVector(0,0,0); // 0x1506 PushV
	var_85_cvector = var_73_cvector; // 0x1507 Mov
	func_5366(var_84_float, var_85_cvector); // 0x1508 NEW_2
	var_93_float = 0; var_94_cvector = CVector(0,0,0); // 0x150a PushV
	var_94_cvector = var_74_cvector; // 0x150b Mov
	func_5366(var_93_float, var_94_cvector); // 0x150c NEW_2
	var_95_float = var_84_float * var_93_float; // 0x150e Mult
	var_72_float = var_75_float / var_75_float; // 0x150f Div2
	return 0; // 0x1510 Return
}


func_259(var_2_bool)
{
	var_81_int = 110; // 0x103 PushI
	KillTimer(var_81_int); // 0x104 Func
	var_2_bool = 0; // 0x106 TMovB
	func_394(var_26_bool, var_27_int); // 0x108 NEW_2
	return 0; // 0x10a Return
}


func_5897(var_183_bool, var_184_object)
{
	var_185_bool = 0; var_186_object = Obj(); // 0x170a PushV
	var_186_object = var_184_object; // 0x170b Mov
	func_6007(var_186_object); // 0x170c NEW_2
	if(var_185_bool == 0) goto Label_5905; // 0x170e JumpB
	var_183_bool = 1; // 0x170f MovB
	return 0; // 0x1710 Return
	
Label_5905:
	var_183_bool = 0; // 0x1711 MovB
	return 0; // 0x1712 Return
}


func_1805(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_119_object, var_120_object)
{
	var_0_bool = var_120_object; // 0x70e TMov
	var_1_bool = var_119_object; // 0x70f TMov
	var_3_bool = 0; // 0x710 TMovB
	var_125_int = 1; // 0x711 PushI
	if(var_125_int == 0) goto Label_2461; // 0x712 JumpB
	var_126_bool = 0; var_127_object = Obj(); // 0x713 PushV
	var_127_object = var_1_bool; // 0x714 MovT
	func_5785(var_127_object); // 0x715 NEW_2
	if(var_126_bool == 0) goto Label_2125; // 0x717 JumpB
	var_134_string = ""; // 0x718 PushV
	var_134_string = "Neutral"; // 0x719 MovS
	func_2491(var_120_object, var_134_string); // 0x71a NEW_2
	var_151_int = 543247; // 0x71c PushI
	SetMessage(var_151_int); // 0x71d TObjFunc
	ClearReplies(); // 0x71f TObjFunc
	var_152_bool = 0; // 0x721 PushV
	var_152_bool = 1; // 0x722 MovB
	var_153_bool = 0; // 0x723 PushV
	var_153_bool = 1; // 0x724 MovB
	var_154_bool = 0; var_155_object = Obj(); // 0x725 PushV
	var_155_object = var_1_bool; // 0x726 MovT
	func_5807(var_154_bool, var_155_object); // 0x727 NEW_2
	if(var_154_bool == 0) goto Label_1840; // 0x729 JumpB
	var_165_bool = 0; var_166_object = Obj(); // 0x72a PushV
	var_166_object = var_1_bool; // 0x72b MovT
	func_5857(var_165_bool, var_166_object); // 0x72c NEW_2
	if(var_165_bool == 0) goto Label_1840; // 0x72e JumpB
	var_153_bool = 0; // 0x72f MovB
	
Label_1840:
	if(var_153_bool == 0) goto Label_1847; // 0x730 JumpB
	var_171_bool = 0; var_172_object = Obj(); // 0x731 PushV
	var_172_object = var_1_bool; // 0x732 MovT
	func_5887(var_171_bool, var_172_object); // 0x733 NEW_2
	if(var_171_bool == 0) goto Label_1847; // 0x735 JumpB
	var_152_bool = 0; // 0x736 MovB
	
Label_1847:
	if(var_152_bool == 0) goto Label_1853; // 0x737 JumpB
	var_177_int = 543249; // 0x738 PushI
	var_178_int = 45709; // 0x739 PushI
	var_179_int = 45705; // 0x73a PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x73b TObjFunc
	
Label_1853:
	var_180_bool = 0; var_181_object = Obj(); // 0x73d PushV
	var_181_object = var_1_bool; // 0x73e MovT
	func_5837(var_180_bool, var_181_object); // 0x73f NEW_2
	if(var_180_bool == 0) goto Label_1863; // 0x741 JumpB
	var_186_int = 543251; // 0x742 PushI
	var_187_int = 45719; // 0x743 PushI
	var_188_int = 45707; // 0x744 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x745 TObjFunc
	
Label_1863:
	var_189_bool = 0; // 0x747 PushV
	var_189_bool = 1; // 0x748 MovB
	var_190_bool = 0; var_191_object = Obj(); // 0x749 PushV
	var_191_object = var_1_bool; // 0x74a MovT
	func_5837(var_190_bool, var_191_object); // 0x74b NEW_2
	if(var_190_bool == 0) goto Label_1876; // 0x74d JumpB
	var_192_bool = 0; var_193_object = Obj(); // 0x74e PushV
	var_193_object = var_1_bool; // 0x74f MovT
	func_5847(var_192_bool, var_193_object); // 0x750 NEW_2
	if(var_192_bool == 0) goto Label_1876; // 0x752 JumpB
	var_189_bool = 0; // 0x753 MovB
	
Label_1876:
	if(var_189_bool == 0) goto Label_1882; // 0x754 JumpB
	var_198_int = 543277; // 0x755 PushI
	var_199_int = 45734; // 0x756 PushI
	var_200_int = 45733; // 0x757 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x758 TObjFunc
	
Label_1882:
	var_201_bool = 0; // 0x75a PushV
	var_201_bool = 1; // 0x75b MovB
	var_202_bool = 0; var_203_object = Obj(); // 0x75c PushV
	var_203_object = var_1_bool; // 0x75d MovT
	func_5867(var_202_bool, var_203_object); // 0x75e NEW_2
	if(var_202_bool == 0) goto Label_1895; // 0x760 JumpB
	var_208_bool = 0; var_209_object = Obj(); // 0x761 PushV
	var_209_object = var_1_bool; // 0x762 MovT
	func_5877(var_208_bool, var_209_object); // 0x763 NEW_2
	if(var_208_bool == 0) goto Label_1895; // 0x765 JumpB
	var_201_bool = 0; // 0x766 MovB
	
Label_1895:
	if(var_201_bool == 0) goto Label_1901; // 0x767 JumpB
	var_214_int = 543282; // 0x768 PushI
	var_215_int = 45739; // 0x769 PushI
	var_216_int = 45738; // 0x76a PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x76b TObjFunc
	
Label_1901:
	var_217_bool = 0; // 0x76d PushV
	var_217_bool = 1; // 0x76e MovB
	var_218_bool = 0; // 0x76f PushV
	var_218_bool = 1; // 0x770 MovB
	var_219_bool = 0; // 0x771 PushV
	var_219_bool = 1; // 0x772 MovB
	var_220_bool = 0; var_221_object = Obj(); // 0x773 PushV
	var_221_object = var_1_bool; // 0x774 MovT
	func_5797(var_220_bool, var_221_object); // 0x775 NEW_2
	if(var_220_bool == 0) goto Label_1918; // 0x777 JumpB
	var_226_bool = 0; var_227_object = Obj(); // 0x778 PushV
	var_227_object = var_1_bool; // 0x779 MovT
	func_5807(var_226_bool, var_227_object); // 0x77a NEW_2
	if(var_226_bool == 0) goto Label_1918; // 0x77c JumpB
	var_219_bool = 0; // 0x77d MovB
	
Label_1918:
	if(var_219_bool == 0) goto Label_1925; // 0x77e JumpB
	var_228_bool = 0; var_229_object = Obj(); // 0x77f PushV
	var_229_object = var_1_bool; // 0x780 MovT
	func_5817(var_228_bool, var_229_object); // 0x781 NEW_2
	if(var_228_bool == 0) goto Label_1925; // 0x783 JumpB
	var_218_bool = 0; // 0x784 MovB
	
Label_1925:
	if(var_218_bool == 0) goto Label_1932; // 0x785 JumpB
	var_234_bool = 0; var_235_object = Obj(); // 0x786 PushV
	var_235_object = var_1_bool; // 0x787 MovT
	func_5827(var_234_bool, var_235_object); // 0x788 NEW_2
	if(var_234_bool == 0) goto Label_1932; // 0x78a JumpB
	var_217_bool = 0; // 0x78b MovB
	
Label_1932:
	if(var_217_bool == 0) goto Label_1938; // 0x78c JumpB
	var_240_int = 543250; // 0x78d PushI
	var_241_int = -1; // 0x78e PushI
	var_242_int = 45706; // 0x78f PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x790 TObjFunc
	
Label_1938:
	var_243_bool = 0; // 0x792 PushV
	var_243_bool = 1; // 0x793 MovB
	var_244_bool = 0; // 0x794 PushV
	var_244_bool = 1; // 0x795 MovB
	var_245_bool = 0; // 0x796 PushV
	var_245_bool = 1; // 0x797 MovB
	var_246_bool = 0; var_247_object = Obj(); // 0x798 PushV
	var_247_object = var_1_bool; // 0x799 MovT
	func_5837(var_246_bool, var_247_object); // 0x79a NEW_2
	if(var_246_bool == 0) goto Label_1955; // 0x79c JumpB
	var_248_bool = 0; var_249_object = Obj(); // 0x79d PushV
	var_249_object = var_1_bool; // 0x79e MovT
	func_5847(var_248_bool, var_249_object); // 0x79f NEW_2
	if(var_248_bool == 0) goto Label_1955; // 0x7a1 JumpB
	var_245_bool = 0; // 0x7a2 MovB
	
Label_1955:
	if(var_245_bool == 0) goto Label_1962; // 0x7a3 JumpB
	var_250_bool = 0; var_251_object = Obj(); // 0x7a4 PushV
	var_251_object = var_1_bool; // 0x7a5 MovT
	func_5857(var_250_bool, var_251_object); // 0x7a6 NEW_2
	if(var_250_bool == 0) goto Label_1962; // 0x7a8 JumpB
	var_244_bool = 0; // 0x7a9 MovB
	
Label_1962:
	if(var_244_bool == 0) goto Label_1969; // 0x7aa JumpB
	var_252_bool = 0; var_253_object = Obj(); // 0x7ab PushV
	var_253_object = var_1_bool; // 0x7ac MovT
	func_5867(var_252_bool, var_253_object); // 0x7ad NEW_2
	if(var_252_bool == 0) goto Label_1969; // 0x7af JumpB
	var_243_bool = 0; // 0x7b0 MovB
	
Label_1969:
	if(var_243_bool == 0) goto Label_1975; // 0x7b1 JumpB
	var_254_int = 543262; // 0x7b2 PushI
	var_255_int = -1; // 0x7b3 PushI
	var_256_int = 45718; // 0x7b4 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x7b5 TObjFunc
	
Label_1975:
	var_257_bool = 0; // 0x7b7 PushV
	var_257_bool = 1; // 0x7b8 MovB
	var_258_bool = 0; // 0x7b9 PushV
	var_258_bool = 1; // 0x7ba MovB
	var_259_bool = 0; // 0x7bb PushV
	var_259_bool = 1; // 0x7bc MovB
	var_260_bool = 0; var_261_object = Obj(); // 0x7bd PushV
	var_261_object = var_1_bool; // 0x7be MovT
	func_5877(var_260_bool, var_261_object); // 0x7bf NEW_2
	if(var_260_bool == 0) goto Label_1992; // 0x7c1 JumpB
	var_262_bool = 0; var_263_object = Obj(); // 0x7c2 PushV
	var_263_object = var_1_bool; // 0x7c3 MovT
	func_5887(var_262_bool, var_263_object); // 0x7c4 NEW_2
	if(var_262_bool == 0) goto Label_1992; // 0x7c6 JumpB
	var_259_bool = 0; // 0x7c7 MovB
	
Label_1992:
	if(var_259_bool == 0) goto Label_1999; // 0x7c8 JumpB
	var_264_bool = 0; var_265_object = Obj(); // 0x7c9 PushV
	var_265_object = var_1_bool; // 0x7ca MovT
	func_5897(var_264_bool, var_265_object); // 0x7cb NEW_2
	if(var_264_bool == 0) goto Label_1999; // 0x7cd JumpB
	var_258_bool = 0; // 0x7ce MovB
	
Label_1999:
	if(var_258_bool == 0) goto Label_2006; // 0x7cf JumpB
	var_270_bool = 0; var_271_object = Obj(); // 0x7d0 PushV
	var_271_object = var_1_bool; // 0x7d1 MovT
	func_5907(var_270_bool, var_271_object); // 0x7d2 NEW_2
	if(var_270_bool == 0) goto Label_2006; // 0x7d4 JumpB
	var_257_bool = 0; // 0x7d5 MovB
	
Label_2006:
	if(var_257_bool == 0) goto Label_2012; // 0x7d6 JumpB
	var_276_int = 543276; // 0x7d7 PushI
	var_277_int = -1; // 0x7d8 PushI
	var_278_int = 45732; // 0x7d9 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x7da TObjFunc
	
Label_2012:
	var_279_bool = 0; // 0x7dc PushV
	var_279_bool = 1; // 0x7dd MovB
	var_280_bool = 0; // 0x7de PushV
	var_280_bool = 1; // 0x7df MovB
	var_281_bool = 0; // 0x7e0 PushV
	var_281_bool = 1; // 0x7e1 MovB
	var_282_bool = 0; var_283_object = Obj(); // 0x7e2 PushV
	var_283_object = var_1_bool; // 0x7e3 MovT
	func_5797(var_282_bool, var_283_object); // 0x7e4 NEW_2
	if(var_282_bool == 0) goto Label_2029; // 0x7e6 JumpB
	var_284_bool = 0; var_285_object = Obj(); // 0x7e7 PushV
	var_285_object = var_1_bool; // 0x7e8 MovT
	func_5817(var_284_bool, var_285_object); // 0x7e9 NEW_2
	if(var_284_bool == 0) goto Label_2029; // 0x7eb JumpB
	var_281_bool = 0; // 0x7ec MovB
	
Label_2029:
	if(var_281_bool == 0) goto Label_2036; // 0x7ed JumpB
	var_286_bool = 0; var_287_object = Obj(); // 0x7ee PushV
	var_287_object = var_1_bool; // 0x7ef MovT
	func_5827(var_286_bool, var_287_object); // 0x7f0 NEW_2
	if(var_286_bool == 0) goto Label_2036; // 0x7f2 JumpB
	var_280_bool = 0; // 0x7f3 MovB
	
Label_2036:
	if(var_280_bool == 0) goto Label_2043; // 0x7f4 JumpB
	var_288_bool = 0; var_289_object = Obj(); // 0x7f5 PushV
	var_289_object = var_1_bool; // 0x7f6 MovT
	func_5857(var_288_bool, var_289_object); // 0x7f7 NEW_2
	if(var_288_bool == 0) goto Label_2043; // 0x7f9 JumpB
	var_279_bool = 0; // 0x7fa MovB
	
Label_2043:
	if(var_279_bool == 0) goto Label_2049; // 0x7fb JumpB
	var_290_int = 543248; // 0x7fc PushI
	var_291_int = -1; // 0x7fd PushI
	var_292_int = 45704; // 0x7fe PushI
	AddReply(var_290_int, var_291_int, var_292_int); // 0x7ff TObjFunc
	
Label_2049:
	var_293_bool = 0; // 0x801 PushV
	var_293_bool = 1; // 0x802 MovB
	var_294_bool = 0; // 0x803 PushV
	var_294_bool = 1; // 0x804 MovB
	var_295_bool = 0; // 0x805 PushV
	var_295_bool = 1; // 0x806 MovB
	var_296_bool = 0; var_297_object = Obj(); // 0x807 PushV
	var_297_object = var_1_bool; // 0x808 MovT
	func_5847(var_296_bool, var_297_object); // 0x809 NEW_2
	if(var_296_bool == 0) goto Label_2066; // 0x80b JumpB
	var_298_bool = 0; var_299_object = Obj(); // 0x80c PushV
	var_299_object = var_1_bool; // 0x80d MovT
	func_5837(var_298_bool, var_299_object); // 0x80e NEW_2
	if(var_298_bool == 0) goto Label_2066; // 0x810 JumpB
	var_295_bool = 0; // 0x811 MovB
	
Label_2066:
	if(var_295_bool == 0) goto Label_2073; // 0x812 JumpB
	var_300_bool = 0; var_301_object = Obj(); // 0x813 PushV
	var_301_object = var_1_bool; // 0x814 MovT
	func_5867(var_300_bool, var_301_object); // 0x815 NEW_2
	if(var_300_bool == 0) goto Label_2073; // 0x817 JumpB
	var_294_bool = 0; // 0x818 MovB
	
Label_2073:
	if(var_294_bool == 0) goto Label_2080; // 0x819 JumpB
	var_302_bool = 0; var_303_object = Obj(); // 0x81a PushV
	var_303_object = var_1_bool; // 0x81b MovT
	func_5807(var_302_bool, var_303_object); // 0x81c NEW_2
	if(var_302_bool == 0) goto Label_2080; // 0x81e JumpB
	var_293_bool = 0; // 0x81f MovB
	
Label_2080:
	if(var_293_bool == 0) goto Label_2086; // 0x820 JumpB
	var_304_int = 543252; // 0x821 PushI
	var_305_int = -1; // 0x822 PushI
	var_306_int = 45708; // 0x823 PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0x824 TObjFunc
	
Label_2086:
	var_307_bool = 0; // 0x826 PushV
	var_307_bool = 1; // 0x827 MovB
	var_308_bool = 0; var_309_object = Obj(); // 0x828 PushV
	var_309_object = var_1_bool; // 0x829 MovT
	func_5897(var_308_bool, var_309_object); // 0x82a NEW_2
	if(var_308_bool == 0) goto Label_2099; // 0x82c JumpB
	var_310_bool = 0; var_311_object = Obj(); // 0x82d PushV
	var_311_object = var_1_bool; // 0x82e MovT
	func_5907(var_310_bool, var_311_object); // 0x82f NEW_2
	if(var_310_bool == 0) goto Label_2099; // 0x831 JumpB
	var_307_bool = 0; // 0x832 MovB
	
Label_2099:
	if(var_307_bool == 0) goto Label_2105; // 0x833 JumpB
	var_312_int = 543281; // 0x834 PushI
	var_313_int = -1; // 0x835 PushI
	var_314_int = 45737; // 0x836 PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0x837 TObjFunc
	
Label_2105:
	var_315_bool = 0; // 0x839 PushV
	var_315_bool = 1; // 0x83a MovB
	var_316_bool = 0; var_317_object = Obj(); // 0x83b PushV
	var_317_object = var_1_bool; // 0x83c MovT
	func_5877(var_316_bool, var_317_object); // 0x83d NEW_2
	if(var_316_bool == 0) goto Label_2118; // 0x83f JumpB
	var_318_bool = 0; var_319_object = Obj(); // 0x840 PushV
	var_319_object = var_1_bool; // 0x841 MovT
	func_5887(var_318_bool, var_319_object); // 0x842 NEW_2
	if(var_318_bool == 0) goto Label_2118; // 0x844 JumpB
	var_315_bool = 0; // 0x845 MovB
	
Label_2118:
	if(var_315_bool == 0) goto Label_2124; // 0x846 JumpB
	var_320_int = 543275; // 0x847 PushI
	var_321_int = -1; // 0x848 PushI
	var_322_int = 45731; // 0x849 PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0x84a TObjFunc
	
Label_2124:
	goto Label_2461; // 0x84c Jump
	
Label_2461:
	var_323_bool = 0; // 0x99d PushV
	func_6187(var_323_bool); // 0x99e NEW_2
	if(var_323_bool == 0) goto Label_2476; // 0x9a0 JumpB
	
Label_2465:
	lshWaitForAnimEnd(); // 0x9a1 Func
	var_324_bool = var_3_bool; // 0x9a3 PushT
	if(var_324_bool == 0) goto Label_2470; // 0x9a4 JumpB
	goto Label_2475; // 0x9a5 Jump
	
Label_2475:
	goto Label_2490; // 0x9ab Jump
	
Label_2490:
	return 0; // 0x9ba Return
	
Label_2470:
	var_325_string = ""; // 0x9a6 PushV
	var_325_string = var_2_bool; // 0x9a7 MovT
	func_5253(var_325_string); // 0x9a8 NEW_2
	goto Label_2465; // 0x9aa Jump
	
Label_2476:
	var_336_string = "all"; // 0x9ac PushS
	var_337_string = "idle"; // 0x9ad PushS
	PlayAnimation(var_336_string, var_337_string); // 0x9ae Func
	
Label_2480:
	WaitForAnimEnd(); // 0x9b0 Func
	var_338_bool = var_3_bool; // 0x9b2 PushT
	if(var_338_bool == 0) goto Label_2485; // 0x9b3 JumpB
	goto Label_2490; // 0x9b4 Jump
	
Label_2485:
	var_339_string = "all"; // 0x9b5 PushS
	var_340_string = "idle"; // 0x9b6 PushS
	PlayAnimation(var_339_string, var_340_string); // 0x9b7 Func
	goto Label_2480; // 0x9b9 Jump
	
Label_2125:
	var_341_string = ""; // 0x84d PushV
	var_341_string = "Neutral"; // 0x84e MovS
	func_2491(var_120_object, var_341_string); // 0x84f NEW_2
	var_342_int = 537506; // 0x851 PushI
	SetMessage(var_342_int); // 0x852 TObjFunc
	ClearReplies(); // 0x854 TObjFunc
	var_343_int = 537507; // 0x856 PushI
	var_344_int = -1; // 0x857 PushI
	var_345_int = 39354; // 0x858 PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0x859 TObjFunc
	var_346_bool = 0; // 0x85b PushV
	var_346_bool = 0; // 0x85c MovB
	var_347_bool = 0; // 0x85d PushV
	var_347_bool = 0; // 0x85e MovB
	var_348_bool = 0; var_349_object = Obj(); // 0x85f PushV
	var_349_object = var_1_bool; // 0x860 MovT
	func_5773(var_349_object); // 0x861 NEW_2
	if(var_348_bool == 0) goto Label_2154; // 0x863 JumpB
	var_354_bool = 0; var_355_object = Obj(); // 0x864 PushV
	var_355_object = var_1_bool; // 0x865 MovT
	func_5797(var_354_bool, var_355_object); // 0x866 NEW_2
	if(var_354_bool == 0) goto Label_2154; // 0x868 JumpB
	var_347_bool = 1; // 0x869 MovB
	
Label_2154:
	if(var_347_bool == 0) goto Label_2161; // 0x86a JumpB
	var_356_bool = 0; var_357_object = Obj(); // 0x86b PushV
	var_357_object = var_1_bool; // 0x86c MovT
	func_5917(var_356_bool, var_357_object); // 0x86d NEW_2
	if(var_356_bool == 0) goto Label_2161; // 0x86f JumpB
	var_346_bool = 1; // 0x870 MovB
	
Label_2161:
	if(var_346_bool == 0) goto Label_2167; // 0x871 JumpB
	var_371_int = 537508; // 0x872 PushI
	var_372_int = 39356; // 0x873 PushI
	var_373_int = 39355; // 0x874 PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0x875 TObjFunc
	
Label_2167:
	var_374_bool = 0; // 0x877 PushV
	var_374_bool = 0; // 0x878 MovB
	var_375_bool = 0; // 0x879 PushV
	var_375_bool = 0; // 0x87a MovB
	var_376_bool = 0; var_377_object = Obj(); // 0x87b PushV
	var_377_object = var_1_bool; // 0x87c MovT
	func_5773(var_377_object); // 0x87d NEW_2
	if(var_376_bool == 0) goto Label_2182; // 0x87f JumpB
	var_378_bool = 0; var_379_object = Obj(); // 0x880 PushV
	var_379_object = var_1_bool; // 0x881 MovT
	func_5797(var_378_bool, var_379_object); // 0x882 NEW_2
	if(var_378_bool == 0) goto Label_2182; // 0x884 JumpB
	var_375_bool = 1; // 0x885 MovB
	
Label_2182:
	if(var_375_bool == 0) goto Label_2189; // 0x886 JumpB
	var_380_bool = 0; var_381_object = Obj(); // 0x887 PushV
	var_381_object = var_1_bool; // 0x888 MovT
	func_5927(var_380_bool, var_381_object); // 0x889 NEW_2
	if(var_380_bool == 0) goto Label_2189; // 0x88b JumpB
	var_374_bool = 1; // 0x88c MovB
	
Label_2189:
	if(var_374_bool == 0) goto Label_2195; // 0x88d JumpB
	var_387_int = 537524; // 0x88e PushI
	var_388_int = 39372; // 0x88f PushI
	var_389_int = 39371; // 0x890 PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0x891 TObjFunc
	
Label_2195:
	var_390_bool = 0; // 0x893 PushV
	var_390_bool = 0; // 0x894 MovB
	var_391_bool = 0; var_392_object = Obj(); // 0x895 PushV
	var_392_object = var_1_bool; // 0x896 MovT
	func_5773(var_392_object); // 0x897 NEW_2
	if(var_391_bool == 0) goto Label_2208; // 0x899 JumpB
	var_393_bool = 0; var_394_object = Obj(); // 0x89a PushV
	var_394_object = var_1_bool; // 0x89b MovT
	func_5807(var_393_bool, var_394_object); // 0x89c NEW_2
	if(var_393_bool == 0) goto Label_2208; // 0x89e JumpB
	var_390_bool = 1; // 0x89f MovB
	
Label_2208:
	if(var_390_bool == 0) goto Label_2214; // 0x8a0 JumpB
	var_395_int = 537534; // 0x8a1 PushI
	var_396_int = 39382; // 0x8a2 PushI
	var_397_int = 39381; // 0x8a3 PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0x8a4 TObjFunc
	
Label_2214:
	var_398_bool = 0; // 0x8a6 PushV
	var_398_bool = 0; // 0x8a7 MovB
	var_399_bool = 0; var_400_object = Obj(); // 0x8a8 PushV
	var_400_object = var_1_bool; // 0x8a9 MovT
	func_5773(var_400_object); // 0x8aa NEW_2
	if(var_399_bool == 0) goto Label_2227; // 0x8ac JumpB
	var_401_bool = 0; var_402_object = Obj(); // 0x8ad PushV
	var_402_object = var_1_bool; // 0x8ae MovT
	func_5817(var_401_bool, var_402_object); // 0x8af NEW_2
	if(var_401_bool == 0) goto Label_2227; // 0x8b1 JumpB
	var_398_bool = 1; // 0x8b2 MovB
	
Label_2227:
	if(var_398_bool == 0) goto Label_2233; // 0x8b3 JumpB
	var_403_int = 537549; // 0x8b4 PushI
	var_404_int = 39397; // 0x8b5 PushI
	var_405_int = 39396; // 0x8b6 PushI
	AddReply(var_403_int, var_404_int, var_405_int); // 0x8b7 TObjFunc
	
Label_2233:
	var_406_bool = 0; // 0x8b9 PushV
	var_406_bool = 0; // 0x8ba MovB
	var_407_bool = 0; var_408_object = Obj(); // 0x8bb PushV
	var_408_object = var_1_bool; // 0x8bc MovT
	func_5773(var_408_object); // 0x8bd NEW_2
	if(var_407_bool == 0) goto Label_2246; // 0x8bf JumpB
	var_409_bool = 0; var_410_object = Obj(); // 0x8c0 PushV
	var_410_object = var_1_bool; // 0x8c1 MovT
	func_5827(var_409_bool, var_410_object); // 0x8c2 NEW_2
	if(var_409_bool == 0) goto Label_2246; // 0x8c4 JumpB
	var_406_bool = 1; // 0x8c5 MovB
	
Label_2246:
	if(var_406_bool == 0) goto Label_2252; // 0x8c6 JumpB
	var_411_int = 537559; // 0x8c7 PushI
	var_412_int = 39407; // 0x8c8 PushI
	var_413_int = 39406; // 0x8c9 PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0x8ca TObjFunc
	
Label_2252:
	var_414_bool = 0; // 0x8cc PushV
	var_414_bool = 0; // 0x8cd MovB
	var_415_bool = 0; var_416_object = Obj(); // 0x8ce PushV
	var_416_object = var_1_bool; // 0x8cf MovT
	func_5773(var_416_object); // 0x8d0 NEW_2
	if(var_415_bool == 0) goto Label_2265; // 0x8d2 JumpB
	var_417_bool = 0; var_418_object = Obj(); // 0x8d3 PushV
	var_418_object = var_1_bool; // 0x8d4 MovT
	func_5837(var_417_bool, var_418_object); // 0x8d5 NEW_2
	if(var_417_bool == 0) goto Label_2265; // 0x8d7 JumpB
	var_414_bool = 1; // 0x8d8 MovB
	
Label_2265:
	if(var_414_bool == 0) goto Label_2271; // 0x8d9 JumpB
	var_419_int = 537571; // 0x8da PushI
	var_420_int = 39419; // 0x8db PushI
	var_421_int = 39418; // 0x8dc PushI
	AddReply(var_419_int, var_420_int, var_421_int); // 0x8dd TObjFunc
	
Label_2271:
	var_422_bool = 0; // 0x8df PushV
	var_422_bool = 0; // 0x8e0 MovB
	var_423_bool = 0; var_424_object = Obj(); // 0x8e1 PushV
	var_424_object = var_1_bool; // 0x8e2 MovT
	func_5773(var_424_object); // 0x8e3 NEW_2
	if(var_423_bool == 0) goto Label_2284; // 0x8e5 JumpB
	var_425_bool = 0; var_426_object = Obj(); // 0x8e6 PushV
	var_426_object = var_1_bool; // 0x8e7 MovT
	func_5847(var_425_bool, var_426_object); // 0x8e8 NEW_2
	if(var_425_bool == 0) goto Label_2284; // 0x8ea JumpB
	var_422_bool = 1; // 0x8eb MovB
	
Label_2284:
	if(var_422_bool == 0) goto Label_2290; // 0x8ec JumpB
	var_427_int = 537593; // 0x8ed PushI
	var_428_int = 39442; // 0x8ee PushI
	var_429_int = 39441; // 0x8ef PushI
	AddReply(var_427_int, var_428_int, var_429_int); // 0x8f0 TObjFunc
	
Label_2290:
	var_430_bool = 0; // 0x8f2 PushV
	var_430_bool = 0; // 0x8f3 MovB
	var_431_bool = 0; var_432_object = Obj(); // 0x8f4 PushV
	var_432_object = var_1_bool; // 0x8f5 MovT
	func_5773(var_432_object); // 0x8f6 NEW_2
	if(var_431_bool == 0) goto Label_2303; // 0x8f8 JumpB
	var_433_bool = 0; var_434_object = Obj(); // 0x8f9 PushV
	var_434_object = var_1_bool; // 0x8fa MovT
	func_5857(var_433_bool, var_434_object); // 0x8fb NEW_2
	if(var_433_bool == 0) goto Label_2303; // 0x8fd JumpB
	var_430_bool = 1; // 0x8fe MovB
	
Label_2303:
	if(var_430_bool == 0) goto Label_2309; // 0x8ff JumpB
	var_435_int = 537603; // 0x900 PushI
	var_436_int = 39452; // 0x901 PushI
	var_437_int = 39451; // 0x902 PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0x903 TObjFunc
	
Label_2309:
	var_438_bool = 0; // 0x905 PushV
	var_438_bool = 0; // 0x906 MovB
	var_439_bool = 0; var_440_object = Obj(); // 0x907 PushV
	var_440_object = var_1_bool; // 0x908 MovT
	func_5773(var_440_object); // 0x909 NEW_2
	if(var_439_bool == 0) goto Label_2322; // 0x90b JumpB
	var_441_bool = 0; var_442_object = Obj(); // 0x90c PushV
	var_442_object = var_1_bool; // 0x90d MovT
	func_5867(var_441_bool, var_442_object); // 0x90e NEW_2
	if(var_441_bool == 0) goto Label_2322; // 0x910 JumpB
	var_438_bool = 1; // 0x911 MovB
	
Label_2322:
	if(var_438_bool == 0) goto Label_2328; // 0x912 JumpB
	var_443_int = 537621; // 0x913 PushI
	var_444_int = 39470; // 0x914 PushI
	var_445_int = 39469; // 0x915 PushI
	AddReply(var_443_int, var_444_int, var_445_int); // 0x916 TObjFunc
	
Label_2328:
	var_446_bool = 0; var_447_object = Obj(); // 0x918 PushV
	var_447_object = var_1_bool; // 0x919 MovT
	func_5877(var_446_bool, var_447_object); // 0x91a NEW_2
	if(var_446_bool == 0) goto Label_2338; // 0x91c JumpB
	var_448_int = 537633; // 0x91d PushI
	var_449_int = 39482; // 0x91e PushI
	var_450_int = 39481; // 0x91f PushI
	AddReply(var_448_int, var_449_int, var_450_int); // 0x920 TObjFunc
	
Label_2338:
	var_451_bool = 0; var_452_object = Obj(); // 0x922 PushV
	var_452_object = var_1_bool; // 0x923 MovT
	func_5887(var_451_bool, var_452_object); // 0x924 NEW_2
	if(var_451_bool == 0) goto Label_2348; // 0x926 JumpB
	var_453_int = 537640; // 0x927 PushI
	var_454_int = 39489; // 0x928 PushI
	var_455_int = 39488; // 0x929 PushI
	AddReply(var_453_int, var_454_int, var_455_int); // 0x92a TObjFunc
	
Label_2348:
	var_456_bool = 0; // 0x92c PushV
	var_456_bool = 0; // 0x92d MovB
	var_457_bool = 0; var_458_object = Obj(); // 0x92e PushV
	var_458_object = var_1_bool; // 0x92f MovT
	func_5773(var_458_object); // 0x930 NEW_2
	if(var_457_bool == 0) goto Label_2361; // 0x932 JumpB
	var_459_bool = 0; var_460_object = Obj(); // 0x933 PushV
	var_460_object = var_1_bool; // 0x934 MovT
	func_5897(var_459_bool, var_460_object); // 0x935 NEW_2
	if(var_459_bool == 0) goto Label_2361; // 0x937 JumpB
	var_456_bool = 1; // 0x938 MovB
	
Label_2361:
	if(var_456_bool == 0) goto Label_2367; // 0x939 JumpB
	var_461_int = 537647; // 0x93a PushI
	var_462_int = 39496; // 0x93b PushI
	var_463_int = 39495; // 0x93c PushI
	AddReply(var_461_int, var_462_int, var_463_int); // 0x93d TObjFunc
	
Label_2367:
	var_464_bool = 0; // 0x93f PushV
	var_464_bool = 0; // 0x940 MovB
	var_465_bool = 0; // 0x941 PushV
	var_465_bool = 0; // 0x942 MovB
	var_466_bool = 0; var_467_object = Obj(); // 0x943 PushV
	var_467_object = var_1_bool; // 0x944 MovT
	func_5773(var_467_object); // 0x945 NEW_2
	if(var_466_bool == 0) goto Label_2382; // 0x947 JumpB
	var_468_bool = 0; var_469_object = Obj(); // 0x948 PushV
	var_469_object = var_1_bool; // 0x949 MovT
	func_5927(var_468_bool, var_469_object); // 0x94a NEW_2
	if(var_468_bool == 0) goto Label_2382; // 0x94c JumpB
	var_465_bool = 1; // 0x94d MovB
	
Label_2382:
	if(var_465_bool == 0) goto Label_2389; // 0x94e JumpB
	var_470_bool = 0; var_471_object = Obj(); // 0x94f PushV
	var_471_object = var_1_bool; // 0x950 MovT
	func_5797(var_470_bool, var_471_object); // 0x951 NEW_2
	if(var_470_bool == 0) goto Label_2389; // 0x953 JumpB
	var_464_bool = 1; // 0x954 MovB
	
Label_2389:
	if(var_464_bool == 0) goto Label_2395; // 0x955 JumpB
	var_472_int = 537659; // 0x956 PushI
	var_473_int = 39508; // 0x957 PushI
	var_474_int = 39507; // 0x958 PushI
	AddReply(var_472_int, var_473_int, var_474_int); // 0x959 TObjFunc
	
Label_2395:
	var_475_bool = 0; var_476_object = Obj(); // 0x95b PushV
	var_476_object = var_1_bool; // 0x95c MovT
	func_5797(var_475_bool, var_476_object); // 0x95d NEW_2
	if(var_475_bool == 0) goto Label_2405; // 0x95f JumpB
	var_477_int = 537665; // 0x960 PushI
	var_478_int = 39514; // 0x961 PushI
	var_479_int = 39513; // 0x962 PushI
	AddReply(var_477_int, var_478_int, var_479_int); // 0x963 TObjFunc
	
Label_2405:
	var_480_bool = 0; var_481_object = Obj(); // 0x965 PushV
	var_481_object = var_1_bool; // 0x966 MovT
	func_5797(var_480_bool, var_481_object); // 0x967 NEW_2
	if(var_480_bool == 0) goto Label_2415; // 0x969 JumpB
	var_482_int = 537671; // 0x96a PushI
	var_483_int = 39520; // 0x96b PushI
	var_484_int = 39519; // 0x96c PushI
	AddReply(var_482_int, var_483_int, var_484_int); // 0x96d TObjFunc
	
Label_2415:
	var_485_bool = 0; // 0x96f PushV
	var_485_bool = 0; // 0x970 MovB
	var_486_bool = 0; var_487_object = Obj(); // 0x971 PushV
	var_487_object = var_1_bool; // 0x972 MovT
	func_5797(var_486_bool, var_487_object); // 0x973 NEW_2
	if(var_486_bool == 0) goto Label_2428; // 0x975 JumpB
	var_488_bool = 0; var_489_object = Obj(); // 0x976 PushV
	var_489_object = var_1_bool; // 0x977 MovT
	func_5917(var_488_bool, var_489_object); // 0x978 NEW_2
	if(var_488_bool == 0) goto Label_2428; // 0x97a JumpB
	var_485_bool = 1; // 0x97b MovB
	
Label_2428:
	if(var_485_bool == 0) goto Label_2434; // 0x97c JumpB
	var_490_int = 537689; // 0x97d PushI
	var_491_int = 39538; // 0x97e PushI
	var_492_int = 39537; // 0x97f PushI
	AddReply(var_490_int, var_491_int, var_492_int); // 0x980 TObjFunc
	
Label_2434:
	var_493_bool = 0; // 0x982 PushV
	var_493_bool = 0; // 0x983 MovB
	var_494_bool = 0; var_495_object = Obj(); // 0x984 PushV
	var_495_object = var_1_bool; // 0x985 MovT
	func_5797(var_494_bool, var_495_object); // 0x986 NEW_2
	if(var_494_bool == 0) goto Label_2447; // 0x988 JumpB
	var_496_bool = 0; var_497_object = Obj(); // 0x989 PushV
	var_497_object = var_1_bool; // 0x98a MovT
	func_5917(var_496_bool, var_497_object); // 0x98b NEW_2
	if(var_496_bool == 0) goto Label_2447; // 0x98d JumpB
	var_493_bool = 1; // 0x98e MovB
	
Label_2447:
	if(var_493_bool == 0) goto Label_2453; // 0x98f JumpB
	var_498_int = 537702; // 0x990 PushI
	var_499_int = 39551; // 0x991 PushI
	var_500_int = 39550; // 0x992 PushI
	AddReply(var_498_int, var_499_int, var_500_int); // 0x993 TObjFunc
	
Label_2453:
	var_501_int = 537721; // 0x995 PushI
	var_502_int = -1; // 0x996 PushI
	var_503_int = 39569; // 0x997 PushI
	AddReply(var_501_int, var_502_int, var_503_int); // 0x998 TObjFunc
	goto Label_2461; // 0x99a Jump
}


func_5393(var_47_int, var_48_string)
{
	var_49_int = 0; var_50_int = 0; // 0x1511 PushV
	GetVariable(var_48_string, var_50_int); // 0x1512 Func
	var_47_int = var_50_int; // 0x1514 Mov
	return 2; // 0x1515 Return
}


func_5907(var_189_bool, var_190_object)
{
	var_191_bool = 0; var_192_object = Obj(); // 0x1714 PushV
	var_192_object = var_190_object; // 0x1715 Mov
	func_6014(var_192_object); // 0x1716 NEW_2
	if(var_191_bool == 0) goto Label_5915; // 0x1718 JumpB
	var_189_bool = 1; // 0x1719 MovB
	return 0; // 0x171a Return
	
Label_5915:
	var_189_bool = 0; // 0x171b MovB
	return 0; // 0x171c Return
}


func_276(var_2_bool, var_23_object)
{
	var_24_bool = 0; var_25_int = 0; var_26_bool = 0; var_27_int = 0; // 0x114 PushV
	var_28_bool = 0; var_29_object = Obj(); // 0x115 PushV
	var_29_object = var_23_object; // 0x116 Mov
	func_5065(var_28_bool, var_29_object); // 0x117 NEW_2
	var_62_bool = var_28_bool == 0; // 0x119 Not
	if(var_62_bool == 0) goto Label_284; // 0x11a JumpB
	return 4; // 0x11b Return
	
Label_284:
	var_63_bool = var_2_bool; // 0x11c PushT
	if(var_63_bool == 0) goto Label_287; // 0x11d JumpB
	return 4; // 0x11e Return
	
Label_287:
	IsPlayerActor(var_23_object, var_26_bool); // 0x11f Func
	var_64_bool = var_26_bool == 0; // 0x121 Not
	if(var_64_bool == 0) goto Label_292; // 0x122 JumpB
	return 4; // 0x123 Return
	
Label_292:
	var_65_int = 0; var_66_object = Obj(); // 0x124 PushV
	var_66_object = var_23_object; // 0x125 Mov
	func_5575(var_66_object); // 0x126 NEW_2
	var_27_int = var_65_int; // 0x127 Mov
	var_77_int = 0; // 0x129 PushI
	var_78_bool = var_27_int > var_77_int; // 0x12a GT
	if(var_78_bool == 0) goto Label_315; // 0x12b JumpB
	var_79_int = 1; // 0x12c PushI
	var_80_bool = var_27_int > var_79_int; // 0x12d GT
	if(var_80_bool == 0) goto Label_306; // 0x12e JumpB
	func_259(var_27_int); // 0x130 NEW_2
	
Label_306:
	var_82_object = Obj(); // 0x132 PushV
	var_82_object = var_23_object; // 0x133 Mov
	func_5584(var_82_object); // 0x134 NEW_2
	var_2_bool = 1; // 0x136 TMovB
	var_147_int = 110; // 0x137 PushI
	var_148_float = 10.0; // 0x138 PushF
	SetTimer(var_147_int, var_148_float); // 0x139 Func
	
Label_315:
	return 4; // 0x13b Return
}


func_5398(var_72_int)
{
	var_73_float = 0; var_74_float = 0; // 0x1516 PushV
	GetGameTime(var_74_float); // 0x1517 Func
	var_75_int = 1; // 0x1519 PushI
	var_76_int = 0; // 0x151a PushV
	var_77_int = 24; // 0x151b PushI
	var_76_int = var_74_float / var_74_float; // 0x151c Div2
	var_72_int = var_75_int + var_76_int; // 0x151d Add2
	return 2; // 0x151e Return
}


func_5917(var_257_bool, var_258_object)
{
	var_259_bool = 0; var_260_object = Obj(); // 0x171e PushV
	var_260_object = var_258_object; // 0x171f Mov
	func_6021(var_260_object); // 0x1720 NEW_2
	if(var_259_bool == 0) goto Label_5925; // 0x1722 JumpB
	var_257_bool = 1; // 0x1723 MovB
	return 0; // 0x1724 Return
	
Label_5925:
	var_257_bool = 0; // 0x1725 MovB
	return 0; // 0x1726 Return
}


func_1311(var_2_bool)
{
	Stop(); // 0x51f Func
	var_23_int = 120; // 0x521 PushI
	KillTimer(var_23_int); // 0x522 Func
	var_2_bool = 1; // 0x524 TMovB
	return 0; // 0x525 Return
}


func_5407(var_262_int)
{
	var_263_float = 0; var_264_float = 0; // 0x151f PushV
	GetGameTime(var_264_float); // 0x1520 Func
	var_265_int = 0; // 0x1522 PushV
	var_265_int = var_264_float; // 0x1523 Mov
	var_266_int = 24; // 0x1524 PushI
	var_262_int = var_265_int % var_266_int; // 0x1525 Mod2
	return 2; // 0x1526 Return
}


func_5927(var_281_bool, var_282_object)
{
	var_283_bool = 0; var_284_object = Obj(); // 0x1728 PushV
	var_284_object = var_282_object; // 0x1729 Mov
	func_6042(var_284_object); // 0x172a NEW_2
	if(var_283_bool == 0) goto Label_5935; // 0x172c JumpB
	var_281_bool = 1; // 0x172d MovB
	return 0; // 0x172e Return
	
Label_5935:
	var_281_bool = 0; // 0x172f MovB
	return 0; // 0x1730 Return
}


func_5423(var_26_bool, var_27_object, var_28_string)
{
	var_29_string = "unholster"; // 0x1530 PushS
	var_30_bool = var_28_string == var_29_string; // 0x1531 Eq
	if(var_30_bool == 0) goto Label_5434; // 0x1532 JumpB
	var_31_bool = 0; var_32_object = Obj(); // 0x1533 PushV
	var_32_object = var_27_object; // 0x1534 Mov
	func_5714(var_31_bool, var_32_object); // 0x1535 NEW_2
	var_26_bool = var_31_bool; // 0x1536 Mov
	return 0; // 0x1538 Return
	
Label_5434:
	var_35_string = "player_shot"; // 0x153a PushS
	var_36_bool = var_28_string == var_35_string; // 0x153b Eq
	if(var_36_bool == 0) goto Label_5444; // 0x153c JumpB
	var_37_bool = 0; var_38_object = Obj(); // 0x153d PushV
	var_38_object = var_27_object; // 0x153e Mov
	func_5727(var_37_bool, var_38_object); // 0x153f NEW_2
	var_26_bool = var_37_bool; // 0x1540 Mov
	return 0; // 0x1542 Return
	
Label_5444:
	var_52_string = "battle"; // 0x1544 PushS
	var_53_bool = var_28_string == var_52_string; // 0x1545 Eq
	if(var_53_bool == 0) goto Label_5453; // 0x1546 JumpB
	var_54_bool = 0; var_55_object = Obj(); // 0x1547 PushV
	var_55_object = var_27_object; // 0x1548 Mov
	func_5750(var_54_bool, var_55_object); // 0x1549 NEW_2
	var_26_bool = var_54_bool; // 0x154a Mov
	return 0; // 0x154c Return
	
Label_5453:
	var_26_bool = 0; // 0x154d MovB
	return 0; // 0x154e Return
}


func_1327(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x52f PushV
	GetDirection(var_77_cvector); // 0x530 Func
	var_79_cvector = CVector(0,0,0); var_80_object = Obj(); // 0x532 PushV
	var_80_object = var_0_bool; // 0x533 MovT
	func_4992(var_80_object); // 0x534 NEW_2
	var_78_cvector = var_79_cvector; // 0x535 Mov
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x537 PushV
	var_86_cvector = var_77_cvector; // 0x538 Mov
	var_87_cvector = var_78_cvector; // 0x539 Mov
	func_5349(var_85_float, var_86_cvector, var_87_cvector); // 0x53a NEW_2
	var_93_float = -0.34202; // 0x53c PushF
	var_74_bool = var_85_float >= var_93_float; // 0x53d GE2
	return 4; // 0x53e Return
}


func_5937(var_141_bool)
{
	var_143_int = 0; // 0x1732 PushV
	func_5398(var_143_int); // 0x1733 NEW_2
	var_144_int = 1; // 0x1735 PushI
	var_141_bool = var_143_int == var_144_int; // 0x1736 Eq2
	return 0; // 0x1737 Return
}


func_5944(var_75_bool)
{
	var_77_int = 0; // 0x1739 PushV
	func_5398(var_77_int); // 0x173a NEW_2
	var_83_int = 2; // 0x173c PushI
	var_75_bool = var_77_int == var_83_int; // 0x173d Eq2
	return 0; // 0x173e Return
}


func_316(var_0_bool, var_1_bool)
{
	var_92_float = 0; var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_bool = 0; var_96_object = Obj(); var_97_bool = 0; var_98_float = 0; var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_bool = 0; var_102_object = Obj(); var_103_bool = 0; // 0x13c PushV
	var_0_bool = 0; // 0x13d TMovB
	var_1_bool = 0; // 0x13e TMovB
	var_104_float = 0.5; // 0x13f PushF
	rand(var_98_float, var_104_float); // 0x140 Func
	Sleep(var_98_float); // 0x142 Func
	
Label_324:
	var_105_bool = var_0_bool == 0; // 0x144 Not
	if(var_105_bool == 0) goto Label_374; // 0x145 JumpB
	var_106_bool = var_1_bool == 0; // 0x146 Not
	if(var_106_bool == 0) goto Label_343; // 0x147 JumpB
	
Label_328:
	GetPosition(var_100_cvector); // 0x148 Func
	var_107_float = 0; // 0x14a PushV
	func_375(var_107_float); // 0x14b NEW_2
	GetRandomPFPointInCircle(var_99_cvector, var_100_cvector, var_107_float, var_101_bool); // 0x14d Func
	var_110_bool = var_101_bool; // 0x14f Push
	if(var_110_bool == 0) goto Label_338; // 0x150 JumpB
	goto Label_342; // 0x151 Jump
	
Label_342:
	goto Label_344; // 0x156 Jump
	
Label_344:
	var_111_object = Obj(); var_112_cvector = CVector(0,0,0); // 0x158 PushV
	var_112_cvector = var_99_cvector; // 0x159 Mov
	func_403(var_111_object, var_112_cvector); // 0x15a NEW_2
	var_102_object = var_111_object; // 0x15b Mov
	var_115_bool = var_102_object != 0; // 0x15d NullNeq
	if(var_115_bool == 0) goto Label_369; // 0x15e JumpB
	RotatePath(var_102_object, var_103_bool); // 0x15f Func
	var_116_bool = var_103_bool; // 0x161 Push
	if(var_116_bool == 0) goto Label_368; // 0x162 JumpB
	var_117_bool = 0; // 0x163 PushV
	func_401(var_117_bool); // 0x164 NEW_2
	FollowPath(var_102_object, var_117_bool, var_103_bool); // 0x166 Func
	var_102_object = 0; // 0x168 SetNull
	var_118_bool = var_103_bool; // 0x169 Push
	if(var_118_bool == 0) goto Label_368; // 0x16a JumpB
	TaskCall(2); // 0x16c TaskCall
	func_573(); // 0x16d NEW_2
	TaskReturn(); // 0x16e TaskReturn
	
Label_368:
	goto Label_372; // 0x170 Jump
	
Label_372:
	var_102_object = 0; // 0x174 SetNull
	goto Label_324; // 0x175 Jump
	
Label_369:
	var_170_int = 1; // 0x171 PushI
	Sleep(var_170_int); // 0x172 Func
	
Label_338:
	var_171_int = 1; // 0x152 PushI
	Sleep(var_171_int); // 0x153 Func
	goto Label_328; // 0x155 Jump
	
Label_343:
	var_1_bool = 0; // 0x157 TMovB
	
Label_374:
	return 12; // 0x176 Return
}


func_5951(var_149_bool)
{
	var_151_int = 0; // 0x1740 PushV
	func_5398(var_151_int); // 0x1741 NEW_2
	var_152_int = 3; // 0x1743 PushI
	var_149_bool = var_151_int == var_152_int; // 0x1744 Eq2
	return 0; // 0x1745 Return
}


func_1350(var_36_cvector, var_37_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_float = 0; // 0x546 PushV
	GetPosition(var_44_cvector); // 0x547 Func
	GetPosition(var_45_cvector); // 0x549 TObjFunc
	GetDirection(var_46_cvector); // 0x54b Func
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0x54d PushV
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x54e PushV
	var_53_cvector = var_44_cvector - var_45_cvector; // 0x54f Sub2
	func_5334(var_52_cvector, var_53_cvector); // 0x550 NEW_2
	var_59_float = 0.75; // 0x552 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x553 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x554 Add2
	func_5334(var_50_cvector, var_51_cvector); // 0x555 NEW_2
	var_47_cvector = var_50_cvector; // 0x556 Mov
	var_61_int = 32; // 0x558 PushI
	var_62_float = 7000.0; // 0x559 PushF
	FindLongestDir(var_48_cvector, var_49_float, var_47_cvector, var_37_float, var_61_int, var_62_float); // 0x55a Func
	var_63_int = 100; // 0x55c PushI
	var_49_float = var_49_float - var_63_int; // 0x55d Sub2
	var_64_int = 0; // 0x55e PushI
	var_65_bool = var_49_float < var_64_int; // 0x55f LT
	if(var_65_bool == 0) goto Label_1378; // 0x560 JumpB
	var_49_float = 0; // 0x561 MovI
	
Label_1378:
	var_36_cvector = var_48_cvector * var_49_float; // 0x562 Mult2
	return 12; // 0x563 Return
}


func_5958(var_155_bool)
{
	var_157_int = 0; // 0x1747 PushV
	func_5398(var_157_int); // 0x1748 NEW_2
	var_158_int = 4; // 0x174a PushI
	var_155_bool = var_157_int == var_158_int; // 0x174b Eq2
	return 0; // 0x174c Return
}


func_5965(var_101_bool)
{
	var_103_int = 0; // 0x174e PushV
	func_5398(var_103_int); // 0x174f NEW_2
	var_104_int = 5; // 0x1751 PushI
	var_101_bool = var_103_int == var_104_int; // 0x1752 Eq2
	return 0; // 0x1753 Return
}


func_5455(var_60_object, var_61_string)
{
	var_62_string = "unholster"; // 0x1550 PushS
	var_63_bool = var_61_string == var_62_string; // 0x1551 Eq
	if(var_63_bool == 0) goto Label_5464; // 0x1552 JumpB
	var_64_object = Obj(); // 0x1553 PushV
	var_64_object = var_60_object; // 0x1554 Mov
	func_5719(var_64_object); // 0x1555 NEW_2
	goto Label_5479; // 0x1557 Jump
	
Label_5479:
	return 0; // 0x1567 Return
	
Label_5464:
	var_137_string = "player_shot"; // 0x1558 PushS
	var_138_bool = var_61_string == var_137_string; // 0x1559 Eq
	if(var_138_bool == 0) goto Label_5472; // 0x155a JumpB
	var_139_object = Obj(); // 0x155b PushV
	var_139_object = var_60_object; // 0x155c Mov
	func_5742(var_139_object); // 0x155d NEW_2
	goto Label_5479; // 0x155f Jump
	
Label_5472:
	var_205_string = "battle"; // 0x1560 PushS
	var_206_bool = var_61_string == var_205_string; // 0x1561 Eq
	if(var_206_bool == 0) goto Label_5479; // 0x1562 JumpB
	var_207_object = Obj(); // 0x1563 PushV
	var_207_object = var_60_object; // 0x1564 Mov
	func_5757(var_207_object); // 0x1565 NEW_2
}


func_5972(var_113_bool)
{
	var_115_int = 0; // 0x1755 PushV
	func_5398(var_115_int); // 0x1756 NEW_2
	var_116_int = 6; // 0x1758 PushI
	var_113_bool = var_115_int == var_116_int; // 0x1759 Eq2
	return 0; // 0x175a Return
}


func_858()
{
	StopGroup0(); // 0x35a Func
	StopAsync(); // 0x35c Func
	var_37_string = "head"; // 0x35e PushS
	UnlookAsync(var_37_string); // 0x35f Func
	var_38_int = 111; // 0x361 PushI
	KillTimer(var_38_int); // 0x362 Func
	return 0; // 0x364 Return
}


func_5979(var_86_bool)
{
	var_88_int = 0; // 0x175c PushV
	func_5398(var_88_int); // 0x175d NEW_2
	var_89_int = 7; // 0x175f PushI
	var_86_bool = var_88_int == var_89_int; // 0x1760 Eq2
	return 0; // 0x1761 Return
}


func_5986(var_123_bool)
{
	var_125_int = 0; // 0x1763 PushV
	func_5398(var_125_int); // 0x1764 NEW_2
	var_126_int = 8; // 0x1766 PushI
	var_123_bool = var_125_int == var_126_int; // 0x1767 Eq2
	return 0; // 0x1768 Return
}


func_1380(var_0_bool, var_1_bool, var_2_bool, var_41_object)
{
	var_45_cvector = CVector(0,0,0); var_46_float = 0; var_47_bool = 0; var_48_cvector = CVector(0,0,0); var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_float = 0; var_52_bool = 0; var_53_cvector = CVector(0,0,0); var_54_float = 0; // 0x564 PushV
	var_0_bool = var_41_object; // 0x565 TMov
	var_55_cvector = CVector(0,0,0); var_56_float = 0; // 0x566 PushV
	var_56_float = 1.74533; // 0x567 MovF
	func_1350(var_55_cvector, var_56_float); // 0x568 NEW_2
	var_50_cvector = var_55_cvector; // 0x569 Mov
	var_51_float = var_50_cvector | var_50_cvector; // 0x56b Or2
	var_85_float = 2500.0; // 0x56c PushF
	var_86_bool = var_51_float < var_85_float; // 0x56d LT
	if(var_86_bool == 0) goto Label_1409; // 0x56e JumpB
	var_87_cvector = CVector(0,0,0); var_88_float = 0; // 0x56f PushV
	var_88_float = 2.61799; // 0x570 MovF
	func_1350(var_87_cvector, var_88_float); // 0x571 NEW_2
	var_50_cvector = var_87_cvector; // 0x572 Mov
	var_51_float = var_50_cvector | var_50_cvector; // 0x574 Or2
	var_89_float = 2500.0; // 0x575 PushF
	var_90_bool = var_51_float < var_89_float; // 0x576 LT
	if(var_90_bool == 0) goto Label_1409; // 0x577 JumpB
	var_91_string = "Can't retreat, distance: "; // 0x578 PushS
	var_92_float = sqrt(var_51_float); // 0x579 Sqrt
	var_93_int = var_91_string + var_92_float; // 0x57a Add
	Trace(var_93_int); // 0x57b Func
	var_94_float = 0.5; // 0x57d PushF
	Sleep(var_94_float); // 0x57e Func
	return 10; // 0x580 Return
	
Label_1409:
	var_95_float = GetByIndex(var_50_cvector, 0); // 0x581 PushE
	var_96_float = GetByIndex(var_50_cvector, 2); // 0x582 PushE
	Rotate(var_95_float, var_96_float); // 0x583 Func
	var_97_cvector = CVector(0,0,0); // 0x585 PushV
	func_4987(var_97_cvector); // 0x586 NEW_2
	var_1_bool = var_97_cvector + var_50_cvector; // 0x588 Add2
	var_100_int = 120; // 0x589 PushI
	var_101_float = 0.5; // 0x58a PushF
	SetTimer(var_100_int, var_101_float); // 0x58b Func
	var_2_bool = 0; // 0x58d TMovB
	
Label_1422:
	var_102_int = 1; // 0x58e PushI
	MovePoint(var_102_int, var_102_int, var_52_bool); // 0x58f Func
	var_103_bool = var_52_bool; // 0x591 Push
	if(var_103_bool == 0) goto Label_1450; // 0x592 JumpB
	var_104_bool = var_0_bool == 0; // 0x593 NullEq
	if(var_104_bool == 0) goto Label_1431; // 0x594 JumpB
	goto Label_1452; // 0x595 Jump
	
Label_1452:
	return 10; // 0x5ac Return
	
Label_1431:
	var_105_cvector = CVector(0,0,0); var_106_float = 0; // 0x597 PushV
	var_106_float = 2.61799; // 0x598 MovF
	func_1350(var_105_cvector, var_106_float); // 0x599 NEW_2
	var_53_cvector = var_105_cvector; // 0x59a Mov
	var_54_float = var_53_cvector | var_53_cvector; // 0x59c Or2
	var_107_float = 2500.0; // 0x59d PushF
	var_108_bool = var_54_float >= var_107_float; // 0x59e GE
	if(var_108_bool == 0) goto Label_1449; // 0x59f JumpB
	var_109_cvector = CVector(0,0,0); // 0x5a0 PushV
	func_4987(var_109_cvector); // 0x5a1 NEW_2
	var_1_bool = var_109_cvector + var_53_cvector; // 0x5a3 Add2
	var_110_int = 120; // 0x5a4 PushI
	var_111_float = 0.5; // 0x5a5 PushF
	SetTimer(var_110_int, var_111_float); // 0x5a6 Func
	goto Label_1450; // 0x5a8 Jump
	
Label_1450:
	var_112_bool = var_2_bool == 0; // 0x5aa Not
	if(var_112_bool == 0) goto Label_1422; // 0x5ab JumpB
	
Label_1449:
	goto Label_1452; // 0x5a9 Jump
}


func_5480(var_23_bool, var_24_object)
{
	var_25_bool = 0; var_26_bool = 0; // 0x1568 PushV
	var_27_bool = 0; // 0x1569 PushV
	var_27_bool = 0; // 0x156a MovB
	var_28_bool = 0; var_29_object = Obj(); // 0x156b PushV
	var_29_object = var_24_object; // 0x156c Mov
	func_5714(var_28_bool, var_29_object); // 0x156d NEW_2
	if(var_28_bool == 0) goto Label_5494; // 0x156f JumpB
	var_32_bool = 0; var_33_object = Obj(); // 0x1570 PushV
	var_33_object = var_24_object; // 0x1571 Mov
	func_5007(var_32_bool, var_33_object); // 0x1572 NEW_2
	if(var_32_bool == 0) goto Label_5494; // 0x1574 JumpB
	var_27_bool = 1; // 0x1575 MovB
	
Label_5494:
	if(var_27_bool == 0) goto Label_5501; // 0x1576 JumpB
	IsWeaponHolstered(var_26_bool); // 0x1577 ObjFunc
	var_36_bool = var_26_bool == 0; // 0x1579 Not
	if(var_36_bool == 0) goto Label_5501; // 0x157a JumpB
	var_23_bool = 1; // 0x157b MovB
	return 2; // 0x157c Return
	
Label_5501:
	var_23_bool = 0; // 0x157d MovB
	return 2; // 0x157e Return
}


func_5993(var_129_bool)
{
	var_131_int = 0; // 0x176a PushV
	func_5398(var_131_int); // 0x176b NEW_2
	var_132_int = 9; // 0x176d PushI
	var_129_bool = var_131_int == var_132_int; // 0x176e Eq2
	return 0; // 0x176f Return
}


func_6000(var_92_bool)
{
	var_94_int = 0; // 0x1771 PushV
	func_5398(var_94_int); // 0x1772 NEW_2
	var_95_int = 10; // 0x1774 PushI
	var_92_bool = var_94_int == var_95_int; // 0x1775 Eq2
	return 0; // 0x1776 Return
}


func_375(var_107_float)
{
	var_108_float = 0; var_109_float = 0; // 0x177 PushV
	GetCameraFarDistance(var_109_float); // 0x178 Func
	var_107_float = var_109_float; // 0x17a Mov
	return 2; // 0x17b Return
}


func_6007(var_185_bool)
{
	var_187_int = 0; // 0x1778 PushV
	func_5398(var_187_int); // 0x1779 NEW_2
	var_188_int = 11; // 0x177b PushI
	var_185_bool = var_187_int == var_188_int; // 0x177c Eq2
	return 0; // 0x177d Return
}


func_4987(var_94_cvector)
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); // 0x137b PushV
	GetPosition(var_96_cvector); // 0x137c Func
	var_94_cvector = var_96_cvector; // 0x137e Mov
	return 2; // 0x137f Return
}


func_6014(var_191_bool)
{
	var_193_int = 0; // 0x177f PushV
	func_5398(var_193_int); // 0x1780 NEW_2
	var_194_int = 12; // 0x1782 PushI
	var_191_bool = var_193_int == var_194_int; // 0x1783 Eq2
	return 0; // 0x1784 Return
}


func_5503(var_39_object)
{
	var_40_object = Obj(); // 0x1580 PushV
	var_40_object = var_39_object; // 0x1581 Mov
	func_5719(var_40_object); // 0x1582 NEW_2
	return 0; // 0x1584 Return
}


func_4992(var_79_cvector)
{
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); // 0x1380 PushV
	GetPosition(var_83_cvector); // 0x1381 Func
	GetPosition(var_84_cvector); // 0x1383 ObjFunc
	var_79_cvector = var_84_cvector - var_83_cvector; // 0x1385 Sub2
	return 4; // 0x1386 Return
}


func_387(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x183 TMovB
	var_1_bool = 0; // 0x184 TMovB
	Stop(); // 0x185 Func
	StopGroup0(); // 0x187 Func
	return 0; // 0x189 Return
}


func_5509(var_25_object)
{
	var_26_bool = 0; var_27_object = Obj(); // 0x1586 PushV
	var_27_object = var_25_object; // 0x1587 Mov
	func_5007(var_26_bool, var_27_object); // 0x1588 NEW_2
	if(var_26_bool == 0) goto Label_5521; // 0x158a JumpB
	var_30_object = Obj(); // 0x158b PushV
	func_5328(var_30_object); // 0x158c NEW_2
	var_33_float = -0.03; // 0x158e PushF
	ReportReputationChange(var_25_object, var_30_object, var_33_float); // 0x158f Func
	
Label_5521:
	return 0; // 0x1591 Return
}


func_6021(var_259_bool)
{
	var_261_bool = 0; // 0x1786 PushV
	var_261_bool = 0; // 0x1787 MovB
	var_262_int = 0; // 0x1788 PushV
	func_5407(var_262_int); // 0x1789 NEW_2
	var_267_int = 0; // 0x178b PushI
	var_268_bool = var_262_int >= var_267_int; // 0x178c GE
	if(var_268_bool == 0) goto Label_6037; // 0x178d JumpB
	var_269_int = 0; // 0x178e PushV
	func_5407(var_269_int); // 0x178f NEW_2
	var_270_int = 12; // 0x1791 PushI
	var_271_bool = var_269_int < var_270_int; // 0x1792 LT
	if(var_271_bool == 0) goto Label_6037; // 0x1793 JumpB
	var_261_bool = 1; // 0x1794 MovB
	
Label_6037:
	if(var_261_bool == 0) goto Label_6040; // 0x1795 JumpB
	var_259_bool = 1; // 0x1796 MovB
	return 0; // 0x1797 Return
	
Label_6040:
	var_259_bool = 0; // 0x1798 MovB
	return 0; // 0x1799 Return
}


func_4999(var_42_float)
{
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x1387 PushV
	GetPosition(var_47_cvector); // 0x1388 Func
	GetPosition(var_48_cvector); // 0x138a ObjFunc
	var_49_cvector = var_48_cvector - var_47_cvector; // 0x138c Sub2
	var_42_float = var_49_cvector | var_49_cvector; // 0x138d Or2
	return 6; // 0x138e Return
}


func_394(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x18a TMovB
	var_1_bool = 1; // 0x18b TMovB
	Stop(); // 0x18c Func
	StopGroup0(); // 0x18e Func
	return 0; // 0x190 Return
}


func_5007(var_32_bool, var_33_object)
{
	var_34_bool = 0; var_35_bool = 0; // 0x138f PushV
	IsPlayerActor(var_33_object, var_35_bool); // 0x1390 Func
	var_32_bool = var_35_bool; // 0x1392 Mov
	return 2; // 0x1393 Return
}


func_401(var_117_bool)
{
	var_117_bool = 0; // 0x191 MovB
	return 0; // 0x192 Return
}


func_5522(var_23_bool, var_24_string)
{
	var_25_object = Obj(); var_26_object = Obj(); // 0x1592 PushV
	var_27_string = "heal"; // 0x1593 PushS
	var_28_bool = var_24_string == var_27_string; // 0x1594 Eq
	if(var_28_bool == 0) goto Label_5536; // 0x1595 JumpB
	var_29_string = "player"; // 0x1596 PushS
	FindActor(var_26_object, var_29_string); // 0x1597 Func
	var_30_bool = 0; var_31_object = Obj(); // 0x1599 PushV
	var_31_object = var_26_object; // 0x159a Mov
	func_5763(var_31_object); // 0x159b NEW_2
	var_23_bool = var_30_bool; // 0x159c Mov
	return 2; // 0x159e Return
	
Label_5536:
	var_23_bool = 0; // 0x15a0 MovB
	return 2; // 0x15a1 Return
}


func_403(var_111_object, var_112_cvector)
{
	var_113_object = Obj(); var_114_object = Obj(); // 0x193 PushV
	FindShiftedPathTo(var_114_object, var_112_cvector); // 0x194 Func
	var_111_object = var_114_object; // 0x196 Mov
	return 2; // 0x197 Return
}


func_5012(var_51_bool, var_52_object, var_53_string)
{
	var_54_bool = 0; var_55_bool = 0; // 0x1394 PushV
	var_56_string = "HasProperty"; // 0x1395 PushS
	var_57_int = 2; // 0x1396 PushI
	var_58_bool = IsFuncExist(var_52_object, var_56_string, var_57_int); // 0x1397 FuncExist
	var_59_bool = var_58_bool == 0; // 0x1398 Not
	if(var_59_bool == 0) goto Label_5020; // 0x1399 JumpB
	var_51_bool = 0; // 0x139a MovB
	return 2; // 0x139b Return
	
Label_5020:
	HasProperty(var_53_string, var_55_bool); // 0x139c ObjFunc
	var_51_bool = var_55_bool; // 0x139e Mov
	return 2; // 0x139f Return
}


func_6042(var_283_bool)
{
	var_285_int = 0; // 0x179b PushV
	func_5407(var_285_int); // 0x179c NEW_2
	var_286_int = 12; // 0x179e PushI
	var_287_bool = var_285_int >= var_286_int; // 0x179f GE
	if(var_287_bool == 0) goto Label_6051; // 0x17a0 JumpB
	var_283_bool = 1; // 0x17a1 MovB
	return 0; // 0x17a2 Return
	
Label_6051:
	var_283_bool = 0; // 0x17a3 MovB
	return 0; // 0x17a4 Return
}


func_5024(var_44_bool)
{
	var_46_bool = 0; var_47_bool = 0; // 0x13a0 PushV
	IsDead(var_47_bool); // 0x13a1 ObjFunc
	var_44_bool = var_47_bool; // 0x13a3 Mov
	return 2; // 0x13a4 Return
}


func_5538(var_34_string)
{
	var_35_object = Obj(); var_36_object = Obj(); // 0x15a2 PushV
	var_37_string = "heal"; // 0x15a3 PushS
	var_38_bool = var_34_string == var_37_string; // 0x15a4 Eq
	if(var_38_bool == 0) goto Label_5550; // 0x15a5 JumpB
	var_39_string = "player"; // 0x15a6 PushS
	FindActor(var_36_object, var_39_string); // 0x15a7 Func
	var_40_object = Obj(); // 0x15a9 PushV
	var_40_object = var_36_object; // 0x15aa Mov
	func_5766(); // 0x15ab NEW_2
	var_36_object = 0; // 0x15ad SetNull
	
Label_5550:
	return 2; // 0x15ae Return
}


func_6053(var_110_int)
{
	var_111_int = 0; var_112_int = 0; // 0x17a5 PushV
	var_113_string = "branch"; // 0x17a6 PushS
	GetVariable(var_113_string, var_112_int); // 0x17a7 Func
	var_114_int = 0; // 0x17a9 PushI
	var_115_bool = var_112_int == var_114_int; // 0x17aa Eq
	if(var_115_bool == 0) goto Label_6063; // 0x17ab JumpB
	var_110_int = 1; // 0x17ac MovI
	return 2; // 0x17ad Return
	
Label_6063:
	var_116_int = 1; // 0x17af PushI
	var_117_bool = var_112_int == var_116_int; // 0x17b0 Eq
	if(var_117_bool == 0) goto Label_6068; // 0x17b1 JumpB
	var_110_int = 2; // 0x17b2 MovI
	return 2; // 0x17b3 Return
	
Label_6068:
	var_110_int = 3; // 0x17b4 MovI
	return 2; // 0x17b5 Return
}


func_5029(var_33_bool, var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj(); var_38_object = Obj(); // 0x13a5 PushV
	var_39_bool = var_34_object == 0; // 0x13a6 NullEq
	if(var_39_bool == 0) goto Label_5034; // 0x13a7 JumpB
	var_33_bool = 0; // 0x13a8 MovB
	return 4; // 0x13a9 Return
	
Label_5034:
	var_40_bool = 0; // 0x13aa PushV
	var_40_bool = 0; // 0x13ab MovB
	var_41_string = "IsDead"; // 0x13ac PushS
	var_42_int = 1; // 0x13ad PushI
	var_43_bool = IsFuncExist(var_34_object, var_41_string, var_42_int); // 0x13ae FuncExist
	if(var_43_bool == 0) goto Label_5046; // 0x13af JumpB
	var_44_bool = 0; var_45_object = Obj(); // 0x13b0 PushV
	var_45_object = var_34_object; // 0x13b1 Mov
	func_5024(var_45_object); // 0x13b2 NEW_2
	if(var_44_bool == 0) goto Label_5046; // 0x13b4 JumpB
	var_40_bool = 1; // 0x13b5 MovB
	
Label_5046:
	if(var_40_bool == 0) goto Label_5049; // 0x13b6 JumpB
	var_33_bool = 0; // 0x13b7 MovB
	return 4; // 0x13b8 Return
	
Label_5049:
	GetScene(var_37_object); // 0x13b9 Func
	var_48_bool = var_37_object == 0; // 0x13bb NullEq
	if(var_48_bool == 0) goto Label_5055; // 0x13bc JumpB
	var_33_bool = 0; // 0x13bd MovB
	return 4; // 0x13be Return
	
Label_5055:
	GetScene(var_38_object); // 0x13bf ObjFunc
	var_49_bool = var_37_object != var_38_object; // 0x13c1 Neq
	if(var_49_bool == 0) goto Label_5061; // 0x13c2 JumpB
	var_33_bool = 0; // 0x13c3 MovB
	return 4; // 0x13c4 Return
	
Label_5061:
	var_33_bool = 1; // 0x13c5 MovB
	return 4; // 0x13c6 Return
}


func_934(var_77_object)
{
	Face(var_77_object); // 0x3a7 Func
	var_81_string = "all"; // 0x3a9 PushS
	var_82_string = "attack_on"; // 0x3aa PushS
	PlayAnimation(var_81_string, var_82_string); // 0x3ab Func
	WaitForAnimEnd(); // 0x3ad Func
	var_83_string = "all"; // 0x3af PushS
	var_84_string = "attack_stay"; // 0x3b0 PushS
	PlayAnimation(var_83_string, var_84_string); // 0x3b1 Func
	WaitForAnimEnd(); // 0x3b3 Func
	var_85_string = "all"; // 0x3b5 PushS
	var_86_string = "attack_off"; // 0x3b6 PushS
	PlayAnimation(var_85_string, var_86_string); // 0x3b7 Func
	WaitForAnimEnd(); // 0x3b9 Func
	StopAsync(); // 0x3bb Func
	var_87_object = Obj(); // 0x3bd PushV
	var_87_object = var_77_object; // 0x3be Mov
	func_999(var_79_cvector, var_80_bool, var_77_object, var_87_object); // 0x3bf NEW_2
	return 0; // 0x3c1 Return
}


func_5551(var_141_string, var_142_int)
{
	var_143_string = ""; var_144_string = ""; // 0x15af PushV
	var_144_string = "idle"; // 0x15b0 MovS
	var_145_int = var_142_int; // 0x15b1 Push
	if(var_145_int == 0) goto Label_5556; // 0x15b2 JumpB
	var_144_string = var_144_string + var_142_int; // 0x15b3 Add2
	
Label_5556:
	var_141_string = var_144_string; // 0x15b4 Mov
	return 2; // 0x15b5 Return
}


func_5558(var_135_int)
{
	var_136_int = 0; var_137_bool = 0; var_138_int = 0; var_139_bool = 0; // 0x15b6 PushV
	var_138_int = 0; // 0x15b7 MovI
	
Label_5560:
	var_140_string = "all"; // 0x15b8 PushS
	var_141_string = ""; var_142_int = 0; // 0x15b9 PushV
	var_142_int = var_138_int; // 0x15ba Mov
	func_5551(var_141_string, var_142_int); // 0x15bb NEW_2
	HasAnimation(var_139_bool, var_140_string, var_141_string); // 0x15bd Func
	var_146_bool = var_139_bool == 0; // 0x15bf Not
	if(var_146_bool == 0) goto Label_5570; // 0x15c0 JumpB
	goto Label_5573; // 0x15c1 Jump
	
Label_5573:
	var_135_int = var_138_int; // 0x15c5 Mov
	return 4; // 0x15c6 Return
	
Label_5570:
	var_147_int = 1; // 0x15c2 PushI
	var_138_int = var_138_int + var_147_int; // 0x15c3 Add2
	goto Label_5560; // 0x15c4 Jump
}


func_6070(var_40_int)
{
	var_41_int = 0; var_42_int = 0; // 0x17b6 PushV
	var_43_string = "branch"; // 0x17b7 PushS
	GetVariable(var_43_string, var_42_int); // 0x17b8 Func
	var_40_int = var_42_int; // 0x17ba Mov
	return 2; // 0x17bb Return
}


func_2491(var_2_bool, var_53_string)
{
	var_54_bool = 0; // 0x9bc PushV
	func_6187(var_54_bool); // 0x9bd NEW_2
	var_55_bool = var_54_bool == 0; // 0x9bf Not
	if(var_55_bool == 0) goto Label_2498; // 0x9c0 JumpB
	return 0; // 0x9c1 Return
	
Label_2498:
	var_56_bool = var_53_string == var_2_bool; // 0x9c2 Eq
	if(var_56_bool == 0) goto Label_2501; // 0x9c3 JumpB
	return 0; // 0x9c4 Return
	
Label_2501:
	var_57_string = ""; var_58_bool = 0; // 0x9c5 PushV
	var_57_string = var_53_string; // 0x9c6 Mov
	var_59_string = ""; // 0x9c7 PushS
	var_60_bool = var_53_string == var_59_string; // 0x9c8 Eq
	if(var_60_bool == 0) goto Label_2508; // 0x9c9 JumpB
	var_58_bool = 0; // 0x9ca MovB
	goto Label_2509; // 0x9cb Jump
	
Label_2509:
	func_5269(var_57_string, var_58_bool); // 0x9cd NEW_2
	var_2_bool = var_53_string; // 0x9cf TMov
	return 0; // 0x9d0 Return
	
Label_2508:
	var_58_bool = 1; // 0x9cc MovB
}


func_6076(var_68_float)
{
	var_69_object = Obj(); var_70_float = 0; var_71_object = Obj(); var_72_float = 0; // 0x17bc PushV
	var_73_string = "player"; // 0x17bd PushS
	FindActor(var_71_object, var_73_string); // 0x17be Func
	var_74_bool = var_71_object == 0; // 0x17c0 Not
	if(var_74_bool == 0) goto Label_6084; // 0x17c1 JumpB
	var_68_float = 0; // 0x17c2 MovI
	return 4; // 0x17c3 Return
	
Label_6084:
	var_75_string = "reputation"; // 0x17c4 PushS
	GetProperty(var_75_string, var_72_float); // 0x17c5 ObjFunc
	var_68_float = var_72_float; // 0x17c7 Mov
	return 4; // 0x17c8 Return
}


func_5575(var_65_int)
{
	var_67_bool = 0; // 0x15c8 PushV
	func_6237(var_67_bool); // 0x15c9 NEW_2
	if(var_67_bool == 0) goto Label_5582; // 0x15cb JumpB
	var_65_int = 2; // 0x15cc MovI
	goto Label_5583; // 0x15cd Jump
	
Label_5583:
	return 0; // 0x15cf Return
	
Label_5582:
	var_65_int = 0; // 0x15ce MovI
}


func_5065(var_29_bool, var_30_object)
{
	var_31_int = 0; var_32_int = 0; // 0x13c9 PushV
	var_33_bool = 0; var_34_object = Obj(); // 0x13ca PushV
	var_34_object = var_30_object; // 0x13cb Mov
	func_5029(var_33_bool, var_34_object); // 0x13cc NEW_2
	var_50_bool = var_33_bool == 0; // 0x13ce Not
	if(var_50_bool == 0) goto Label_5074; // 0x13cf JumpB
	var_29_bool = 0; // 0x13d0 MovB
	return 2; // 0x13d1 Return
	
Label_5074:
	var_51_bool = 0; var_52_object = Obj(); var_53_string = ""; // 0x13d2 PushV
	var_52_object = var_30_object; // 0x13d3 Mov
	var_53_string = "noaccess"; // 0x13d4 MovS
	func_5012(var_51_bool, var_52_object, var_53_string); // 0x13d5 NEW_2
	var_60_bool = var_51_bool == 0; // 0x13d7 Not
	if(var_60_bool == 0) goto Label_5083; // 0x13d8 JumpB
	var_29_bool = 1; // 0x13d9 MovB
	return 2; // 0x13da Return
	
Label_5083:
	var_61_string = "noaccess"; // 0x13db PushS
	GetProperty(var_61_string, var_32_int); // 0x13dc ObjFunc
	var_62_int = 0; // 0x13de PushI
	var_29_bool = var_32_int == var_62_int; // 0x13df Eq2
	return 2; // 0x13e0 Return
}


func_969(var_36_cvector, var_37_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_float = 0; // 0x3c9 PushV
	GetPosition(var_44_cvector); // 0x3ca Func
	GetPosition(var_45_cvector); // 0x3cc TObjFunc
	GetDirection(var_46_cvector); // 0x3ce Func
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0x3d0 PushV
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x3d1 PushV
	var_53_cvector = var_44_cvector - var_45_cvector; // 0x3d2 Sub2
	func_5334(var_52_cvector, var_53_cvector); // 0x3d3 NEW_2
	var_59_float = 0.75; // 0x3d5 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x3d6 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x3d7 Add2
	func_5334(var_50_cvector, var_51_cvector); // 0x3d8 NEW_2
	var_47_cvector = var_50_cvector; // 0x3d9 Mov
	var_61_int = 32; // 0x3db PushI
	var_62_float = 7000.0; // 0x3dc PushF
	FindLongestDir(var_48_cvector, var_49_float, var_47_cvector, var_37_float, var_61_int, var_62_float); // 0x3dd Func
	var_63_int = 100; // 0x3df PushI
	var_49_float = var_49_float - var_63_int; // 0x3e0 Sub2
	var_64_int = 0; // 0x3e1 PushI
	var_65_bool = var_49_float < var_64_int; // 0x3e2 LT
	if(var_65_bool == 0) goto Label_997; // 0x3e3 JumpB
	var_49_float = 0; // 0x3e4 MovI
	
Label_997:
	var_36_cvector = var_48_cvector * var_49_float; // 0x3e5 Mult2
	return 12; // 0x3e6 Return
}


func_6090(var_39_object)
{
	var_40_int = 0; // 0x17cb PushV
	func_6070(var_40_int); // 0x17cc NEW_2
	var_44_int = 1; // 0x17ce PushI
	var_45_bool = var_40_int == var_44_int; // 0x17cf Eq
	if(var_45_bool == 0) goto Label_6100; // 0x17d0 JumpB
	WorkWithCorpse(var_39_object); // 0x17d1 Func
	goto Label_6102; // 0x17d3 Jump
	
Label_6102:
	return 0; // 0x17d6 Return
	
Label_6100:
	Barter(var_39_object); // 0x17d4 Func
}


func_5584(var_82_object)
{
	var_83_object = Obj(); // 0x15d1 PushV
	var_83_object = var_82_object; // 0x15d2 Mov
	TaskCall(3); // 0x15d3 TaskCall
	func_659(var_84_object, var_83_object); // 0x15d4 NEW_2
	TaskReturn(); // 0x15d5 TaskReturn
	return 0; // 0x15d7 Return
}


func_6103(var_24_bool)
{
	var_25_int = 0; var_26_int = 0; // 0x17d7 PushV
	var_27_int = 0; // 0x17d8 PushI
	ClearSubContainer(var_27_int); // 0x17d9 Func
	var_28_bool = var_24_bool; // 0x17db Push
	if(var_28_bool == 0) goto Label_6131; // 0x17dc JumpB
	var_29_string = ""; var_30_int = 0; var_31_int = 0; var_32_int = 0; // 0x17dd PushV
	var_29_string = "rifle_ammo"; // 0x17de MovS
	var_30_int = 1; // 0x17df MovI
	var_31_int = 2; // 0x17e0 MovI
	var_32_int = 2; // 0x17e1 MovI
	func_5313(var_29_string, var_30_int, var_31_int, var_32_int); // 0x17e2 NEW_2
	var_45_string = ""; var_46_int = 0; var_47_int = 0; var_48_int = 0; // 0x17e4 PushV
	var_45_string = "revolver_ammo"; // 0x17e5 MovS
	var_46_int = 1; // 0x17e6 MovI
	var_47_int = 2; // 0x17e7 MovI
	var_48_int = 2; // 0x17e8 MovI
	func_5313(var_45_string, var_46_int, var_47_int, var_48_int); // 0x17e9 NEW_2
	var_49_string = ""; var_50_int = 0; var_51_int = 0; var_52_int = 0; // 0x17eb PushV
	var_49_string = "samopal_ammo"; // 0x17ec MovS
	var_50_int = 2; // 0x17ed MovI
	var_51_int = 2; // 0x17ee MovI
	var_52_int = 2; // 0x17ef MovI
	func_5313(var_49_string, var_50_int, var_51_int, var_52_int); // 0x17f0 NEW_2
	goto Label_6178; // 0x17f2 Jump
	
Label_6178:
	return 2; // 0x1822 Return
	
Label_6131:
	var_53_string = ""; var_54_int = 0; var_55_int = 0; // 0x17f3 PushV
	var_53_string = "lockpick"; // 0x17f4 MovS
	var_54_int = 1; // 0x17f5 MovI
	var_55_int = 4; // 0x17f6 MovI
	func_5302(var_53_string, var_54_int, var_55_int); // 0x17f7 NEW_2
	var_62_string = ""; var_63_int = 0; var_64_int = 0; var_65_int = 0; // 0x17f9 PushV
	var_62_string = "alpha_pills"; // 0x17fa MovS
	var_63_int = 1; // 0x17fb MovI
	var_64_int = 2; // 0x17fc MovI
	var_65_int = 3; // 0x17fd MovI
	func_5313(var_62_string, var_63_int, var_64_int, var_65_int); // 0x17fe NEW_2
	var_66_string = ""; var_67_int = 0; var_68_int = 0; // 0x1800 PushV
	var_66_string = "meradorm"; // 0x1801 MovS
	var_67_int = 1; // 0x1802 MovI
	var_68_int = 2; // 0x1803 MovI
	func_5302(var_66_string, var_67_int, var_68_int); // 0x1804 NEW_2
	var_69_string = ""; var_70_int = 0; var_71_int = 0; // 0x1806 PushV
	var_69_string = "powder"; // 0x1807 MovS
	var_70_int = 1; // 0x1808 MovI
	var_71_int = 15; // 0x1809 MovI
	func_5302(var_69_string, var_70_int, var_71_int); // 0x180a NEW_2
	var_72_int = 0; // 0x180c PushV
	func_5398(var_72_int); // 0x180d NEW_2
	var_26_int = var_72_int; // 0x180e Mov
	var_78_int = 4; // 0x1810 PushI
	var_79_bool = var_26_int >= var_78_int; // 0x1811 GE
	if(var_79_bool == 0) goto Label_6169; // 0x1812 JumpB
	var_80_string = ""; var_81_int = 0; var_82_int = 0; // 0x1813 PushV
	var_80_string = "beta_pills"; // 0x1814 MovS
	var_81_int = 1; // 0x1815 MovI
	var_82_int = 2; // 0x1816 MovI
	func_5302(var_80_string, var_81_int, var_82_int); // 0x1817 NEW_2
	
Label_6169:
	var_83_int = 6; // 0x1819 PushI
	var_84_bool = var_26_int >= var_83_int; // 0x181a GE
	if(var_84_bool == 0) goto Label_6178; // 0x181b JumpB
	var_85_string = ""; var_86_int = 0; var_87_int = 0; // 0x181c PushV
	var_85_string = "gamma_pills"; // 0x181d MovS
	var_86_int = 1; // 0x181e MovI
	var_87_int = 7; // 0x181f MovI
	func_5302(var_85_string, var_86_int, var_87_int); // 0x1820 NEW_2
}


func_5592(var_34_int, var_35_object)
{
	var_36_bool = 0; var_37_object = Obj(); // 0x15d9 PushV
	var_37_object = var_35_object; // 0x15da Mov
	func_5065(var_36_bool, var_37_object); // 0x15db NEW_2
	if(var_36_bool == 0) goto Label_5600; // 0x15dd JumpB
	var_34_int = 2; // 0x15de MovI
	goto Label_5601; // 0x15df Jump
	
Label_5601:
	return 0; // 0x15e1 Return
	
Label_5600:
	var_34_int = 0; // 0x15e0 MovI
}


func_5089()
{
	var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); // 0x13e1 PushV
	GetPosition(var_102_cvector); // 0x13e2 ObjFunc
	GetPosition(var_103_cvector); // 0x13e4 Func
	var_104_cvector = var_102_cvector - var_103_cvector; // 0x13e6 Sub2
	var_105_float = GetByIndex(var_104_cvector, 0); // 0x13e7 PushE
	var_106_float = GetByIndex(var_104_cvector, 2); // 0x13e8 PushE
	RotateAsync(var_105_float, var_106_float); // 0x13e9 Func
	return 6; // 0x13eb Return
}


func_5602(var_76_object)
{
	var_77_object = Obj(); // 0x15e3 PushV
	var_77_object = var_76_object; // 0x15e4 Mov
	TaskCall(4); // 0x15e5 TaskCall
	func_934(var_77_object); // 0x15e6 NEW_2
	TaskReturn(); // 0x15e7 TaskReturn
	return 0; // 0x15e9 Return
}


func_1505(var_2_bool)
{
	Stop(); // 0x5e1 Func
	var_23_int = 120; // 0x5e3 PushI
	KillTimer(var_23_int); // 0x5e4 Func
	var_2_bool = 1; // 0x5e6 TMovB
	return 0; // 0x5e7 Return
}


func_999(var_0_bool, var_1_bool, var_2_bool, var_87_object)
{
	var_88_cvector = CVector(0,0,0); var_89_float = 0; var_90_bool = 0; var_91_cvector = CVector(0,0,0); var_92_float = 0; var_93_cvector = CVector(0,0,0); var_94_float = 0; var_95_bool = 0; var_96_cvector = CVector(0,0,0); var_97_float = 0; // 0x3e7 PushV
	var_0_bool = var_87_object; // 0x3e8 TMov
	var_98_cvector = CVector(0,0,0); var_99_float = 0; // 0x3e9 PushV
	var_99_float = 1.74533; // 0x3ea MovF
	func_969(var_98_cvector, var_99_float); // 0x3eb NEW_2
	var_93_cvector = var_98_cvector; // 0x3ec Mov
	var_94_float = var_93_cvector | var_93_cvector; // 0x3ee Or2
	var_128_float = 2500.0; // 0x3ef PushF
	var_129_bool = var_94_float < var_128_float; // 0x3f0 LT
	if(var_129_bool == 0) goto Label_1028; // 0x3f1 JumpB
	var_130_cvector = CVector(0,0,0); var_131_float = 0; // 0x3f2 PushV
	var_131_float = 2.61799; // 0x3f3 MovF
	func_969(var_130_cvector, var_131_float); // 0x3f4 NEW_2
	var_93_cvector = var_130_cvector; // 0x3f5 Mov
	var_94_float = var_93_cvector | var_93_cvector; // 0x3f7 Or2
	var_132_float = 2500.0; // 0x3f8 PushF
	var_133_bool = var_94_float < var_132_float; // 0x3f9 LT
	if(var_133_bool == 0) goto Label_1028; // 0x3fa JumpB
	var_134_string = "Can't retreat, distance: "; // 0x3fb PushS
	var_135_float = sqrt(var_94_float); // 0x3fc Sqrt
	var_136_int = var_134_string + var_135_float; // 0x3fd Add
	Trace(var_136_int); // 0x3fe Func
	var_137_float = 0.5; // 0x400 PushF
	Sleep(var_137_float); // 0x401 Func
	return 10; // 0x403 Return
	
Label_1028:
	var_138_float = GetByIndex(var_93_cvector, 0); // 0x404 PushE
	var_139_float = GetByIndex(var_93_cvector, 2); // 0x405 PushE
	Rotate(var_138_float, var_139_float); // 0x406 Func
	var_140_cvector = CVector(0,0,0); // 0x408 PushV
	func_4987(var_140_cvector); // 0x409 NEW_2
	var_1_bool = var_140_cvector + var_93_cvector; // 0x40b Add2
	var_143_int = 120; // 0x40c PushI
	var_144_float = 0.5; // 0x40d PushF
	SetTimer(var_143_int, var_144_float); // 0x40e Func
	var_2_bool = 0; // 0x410 TMovB
	
Label_1041:
	var_145_int = 1; // 0x411 PushI
	MovePoint(var_145_int, var_145_int, var_95_bool); // 0x412 Func
	var_146_bool = var_95_bool; // 0x414 Push
	if(var_146_bool == 0) goto Label_1069; // 0x415 JumpB
	var_147_bool = var_0_bool == 0; // 0x416 NullEq
	if(var_147_bool == 0) goto Label_1050; // 0x417 JumpB
	goto Label_1071; // 0x418 Jump
	
Label_1071:
	return 10; // 0x42f Return
	
Label_1050:
	var_148_cvector = CVector(0,0,0); var_149_float = 0; // 0x41a PushV
	var_149_float = 2.61799; // 0x41b MovF
	func_969(var_148_cvector, var_149_float); // 0x41c NEW_2
	var_96_cvector = var_148_cvector; // 0x41d Mov
	var_97_float = var_96_cvector | var_96_cvector; // 0x41f Or2
	var_150_float = 2500.0; // 0x420 PushF
	var_151_bool = var_97_float >= var_150_float; // 0x421 GE
	if(var_151_bool == 0) goto Label_1068; // 0x422 JumpB
	var_152_cvector = CVector(0,0,0); // 0x423 PushV
	func_4987(var_152_cvector); // 0x424 NEW_2
	var_1_bool = var_152_cvector + var_96_cvector; // 0x426 Add2
	var_153_int = 120; // 0x427 PushI
	var_154_float = 0.5; // 0x428 PushF
	SetTimer(var_153_int, var_154_float); // 0x429 Func
	goto Label_1069; // 0x42b Jump
	
Label_1069:
	var_155_bool = var_2_bool == 0; // 0x42d Not
	if(var_155_bool == 0) goto Label_1041; // 0x42e JumpB
	
Label_1068:
	goto Label_1071; // 0x42c Jump
}


func_5610(var_74_int, var_75_object)
{
	var_77_bool = 0; var_78_object = Obj(); // 0x15eb PushV
	var_78_object = var_75_object; // 0x15ec Mov
	func_5065(var_77_bool, var_78_object); // 0x15ed NEW_2
	if(var_77_bool == 0) goto Label_5618; // 0x15ef JumpB
	var_74_int = 2; // 0x15f0 MovI
	goto Label_5619; // 0x15f1 Jump
	
Label_5619:
	return 0; // 0x15f3 Return
	
Label_5618:
	var_74_int = 0; // 0x15f2 MovI
}


func_5100(var_88_bool)
{
	var_89_bool = 0; var_90_bool = 0; // 0x13ec PushV
	IsLoaded(var_90_bool); // 0x13ed Func
	var_88_bool = var_90_bool; // 0x13ef Mov
	return 2; // 0x13f0 Return
}


func_1521(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x5f1 PushV
	GetDirection(var_77_cvector); // 0x5f2 Func
	var_79_cvector = CVector(0,0,0); var_80_object = Obj(); // 0x5f4 PushV
	var_80_object = var_0_bool; // 0x5f5 MovT
	func_4992(var_80_object); // 0x5f6 NEW_2
	var_78_cvector = var_79_cvector; // 0x5f7 Mov
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x5f9 PushV
	var_86_cvector = var_77_cvector; // 0x5fa Mov
	var_87_cvector = var_78_cvector; // 0x5fb Mov
	func_5349(var_85_float, var_86_cvector, var_87_cvector); // 0x5fc NEW_2
	var_93_float = -0.34202; // 0x5fe PushF
	var_74_bool = var_85_float >= var_93_float; // 0x5ff GE2
	return 4; // 0x600 Return
}


func_5105(var_58_bool, var_60_float)
{
	var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0; var_69_bool = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_bool = 0; var_78_bool = 0; // 0x13f1 PushV
	GetPosition(var_71_cvector); // 0x13f2 ObjFunc
	GetEyesHeight(var_70_float); // 0x13f4 ObjFunc
	var_79_float = GetByIndex(var_71_cvector, 1); // 0x13f6 PushE
	var_79_float = var_79_float + var_70_float; // 0x13f7 Add2
	SetByIndex(var_71_cvector, 1) = var_79_float; // 0x13f8 PopE
	GetPosition(var_72_cvector); // 0x13f9 Func
	GetEyesHeight(var_70_float); // 0x13fb Func
	var_80_float = GetByIndex(var_72_cvector, 1); // 0x13fd PushE
	var_80_float = var_80_float + var_70_float; // 0x13fe Add2
	SetByIndex(var_72_cvector, 1) = var_80_float; // 0x13ff PopE
	var_73_cvector = var_71_cvector - var_72_cvector; // 0x1400 Sub2
	var_81_float = GetByIndex(var_73_cvector, 1); // 0x1401 PushE
	var_81_float = 0; // 0x1402 MovI
	SetByIndex(var_73_cvector, 1) = var_81_float; // 0x1403 PopE
	var_82_int = var_73_cvector | var_73_cvector; // 0x1404 Or
	var_83_float = sqrt(var_82_int); // 0x1405 Sqrt
	var_73_cvector = var_73_cvector / var_73_cvector; // 0x1406 Div2
	var_74_cvector = -var_73_cvector; // 0x1407 Neg2
	var_84_float = var_73_cvector * var_60_float; // 0x1408 Mult
	var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); // 0x1409 PushV
	var_87_cvector = CVector(0.0, 1.0, 0.0); // 0x140a PushVec
	var_86_cvector = var_74_cvector ^ var_87_cvector; // 0x140b Xor2
	func_5334(var_85_cvector, var_86_cvector); // 0x140c NEW_2
	var_93_int = 25; // 0x140e PushI
	var_94_float = var_85_cvector * var_93_int; // 0x140f Mult
	var_95_int = var_84_float + var_94_float; // 0x1410 Add
	var_96_cvector = CVector(0.0, 10.0, 0.0); // 0x1411 PushVec
	var_75_cvector = var_95_int - var_96_cvector; // 0x1412 Sub2
	var_76_cvector = var_72_cvector + var_75_cvector; // 0x1413 Add2
	IsOverrideActive(var_77_bool); // 0x1414 Func
	var_97_bool = var_77_bool; // 0x1416 Push
	if(var_97_bool == 0) goto Label_5146; // 0x1417 JumpB
	var_58_bool = 0; // 0x1418 MovB
	return 18; // 0x1419 Return
	
Label_5146:
	StopWorld(); // 0x141a Func
	var_98_bool = 1; // 0x141c PushB
	CameraTransit(var_76_cvector, var_74_cvector, var_98_bool); // 0x141d Func
	var_99_float = GetByIndex(var_75_cvector, 0); // 0x141f PushE
	var_100_float = GetByIndex(var_75_cvector, 2); // 0x1420 PushE
	Rotate(var_99_float, var_100_float); // 0x1421 Func
	var_101_bool = 0; // 0x1423 PushV
	func_6187(var_101_bool); // 0x1424 NEW_2
	if(var_101_bool == 0) goto Label_5160; // 0x1426 JumpB
	goto Label_5168; // 0x1427 Jump
	
Label_5168:
	CameraWaitForPlayFinish(); // 0x1430 Func
	ResumeWorld(); // 0x1432 Func
	var_58_bool = 1; // 0x1434 MovB
	return 18; // 0x1435 Return
	
Label_5160:
	var_102_string = "head"; // 0x1428 PushS
	HasAnimationTrack(var_78_bool, var_102_string); // 0x1429 Func
	var_103_bool = var_78_bool; // 0x142b Push
	if(var_103_bool == 0) goto Label_5168; // 0x142c JumpB
	var_104_string = "head"; // 0x142d PushS
	LookAsyncCamera(var_104_string); // 0x142e Func
}


func_5620(var_111_object)
{
	var_112_object = Obj(); // 0x15f5 PushV
	var_112_object = var_111_object; // 0x15f6 Mov
	TaskCall(5); // 0x15f7 TaskCall
	func_1186(var_113_object, var_114_cvector, var_115_bool, var_112_object); // 0x15f8 NEW_2
	TaskReturn(); // 0x15f9 TaskReturn
	return 0; // 0x15fb Return
}


func_5628(var_31_bool, var_32_object, var_33_object, var_34_float)
{
	var_35_string = ""; var_36_bool = 0; var_37_string = ""; var_38_bool = 0; // 0x15fc PushV
	var_39_bool = 0; var_40_object = Obj(); var_41_string = ""; // 0x15fd PushV
	var_40_object = var_33_object; // 0x15fe Mov
	var_41_string = "class"; // 0x15ff MovS
	func_5012(var_39_bool, var_40_object, var_41_string); // 0x1600 NEW_2
	var_48_bool = var_39_bool == 0; // 0x1602 Not
	if(var_48_bool == 0) goto Label_5638; // 0x1603 JumpB
	var_31_bool = 0; // 0x1604 MovB
	return 4; // 0x1605 Return
	
Label_5638:
	var_49_string = "class"; // 0x1606 PushS
	GetProperty(var_49_string, var_37_string); // 0x1607 ObjFunc
	var_50_string = "rat"; // 0x1609 PushS
	var_51_bool = var_37_string == var_50_string; // 0x160a Eq
	if(var_51_bool == 0) goto Label_5647; // 0x160b JumpB
	var_31_bool = 0; // 0x160c MovB
	return 4; // 0x160d Return
	
Label_5647:
	var_52_string = "rat_big"; // 0x160f PushS
	var_53_bool = var_37_string == var_52_string; // 0x1610 Eq
	if(var_53_bool == 0) goto Label_5653; // 0x1611 JumpB
	var_31_bool = 0; // 0x1612 MovB
	return 4; // 0x1613 Return
	
Label_5653:
	var_54_string = "dog"; // 0x1615 PushS
	var_55_bool = var_37_string == var_54_string; // 0x1616 Eq
	if(var_55_bool == 0) goto Label_5658; // 0x1617 JumpB
	var_31_bool = 0; // 0x1618 MovB
	return 4; // 0x1619 Return
	
Label_5658:
	CanSee(var_38_bool, var_32_object); // 0x161a Func
	var_56_bool = 0; // 0x161c PushV
	var_56_bool = 1; // 0x161d MovB
	var_57_bool = var_38_bool; // 0x161e Push
	if(var_57_bool == 0) goto Label_5672; // 0x161f JumpB
	var_58_float = 0; var_59_object = Obj(); // 0x1620 PushV
	var_59_object = var_32_object; // 0x1621 Mov
	func_4999(var_59_object); // 0x1622 NEW_2
	var_66_float = var_34_float * var_34_float; // 0x1624 Mult
	var_67_bool = var_58_float <= var_66_float; // 0x1625 LE
	if(var_67_bool == 0) goto Label_5672; // 0x1626 JumpB
	var_56_bool = 0; // 0x1627 MovB
	
Label_5672:
	if(var_56_bool == 0) goto Label_5675; // 0x1628 JumpB
	var_31_bool = 1; // 0x1629 MovB
	return 4; // 0x162a Return
	
Label_5675:
	CanSee(var_38_bool, var_33_object); // 0x162b Func
	var_68_bool = 0; // 0x162d PushV
	var_68_bool = 1; // 0x162e MovB
	var_69_bool = var_38_bool; // 0x162f Push
	if(var_69_bool == 0) goto Label_5689; // 0x1630 JumpB
	var_70_float = 0; var_71_object = Obj(); // 0x1631 PushV
	var_71_object = var_33_object; // 0x1632 Mov
	func_4999(var_71_object); // 0x1633 NEW_2
	var_72_float = var_34_float * var_34_float; // 0x1635 Mult
	var_73_bool = var_70_float <= var_72_float; // 0x1636 LE
	if(var_73_bool == 0) goto Label_5689; // 0x1637 JumpB
	var_68_bool = 0; // 0x1638 MovB
	
Label_5689:
	if(var_68_bool == 0) goto Label_5692; // 0x1639 JumpB
	var_31_bool = 1; // 0x163a MovB
	return 4; // 0x163b Return
	
Label_5692:
	var_31_bool = 0; // 0x163c MovB
	return 4; // 0x163d Return
}


