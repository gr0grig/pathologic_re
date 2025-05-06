task_0_event_11(var_0_bool, var_1_int, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; // 0x1b PushV
	func_5642(var_23_bool); // 0x1c NEW_2
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
	func_5156(var_26_object); // 0x43 NEW_2
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
	func_5159(var_32_object); // 0x51 NEW_2
	
Label_83:
	return 2; // 0x53 Return
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x54 PushV
	var_25_object = Obj(); // 0x55 PushV
	var_25_object = var_22_bool; // 0x56 Mov
	func_4961(var_25_object); // 0x57 NEW_2
	var_34_int = 0; var_35_object = Obj(); // 0x59 PushV
	var_35_object = var_22_bool; // 0x5a Mov
	func_5044(var_34_int, var_35_object); // 0x5b NEW_2
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
	func_5054(var_75_object); // 0x69 NEW_2
	
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
	func_5698(var_28_object, var_29_object, var_30_bool); // 0x71 NEW_2
	if(var_27_bool == 0) goto Label_135; // 0x73 JumpB
	var_74_int = 0; var_75_object = Obj(); var_76_bool = 0; // 0x74 PushV
	var_75_object = var_22_object; // 0x75 Mov
	var_76_bool = var_24_bool; // 0x76 Mov
	func_5062(var_75_object, var_76_bool); // 0x77 NEW_2
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
	func_5072(var_110_object); // 0x85 NEW_2
	
Label_135:
	return 2; // 0x87 Return
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x88 PushV
	var_25_int = 0; var_26_object = Obj(); // 0x89 PushV
	var_26_object = var_22_bool; // 0x8a Mov
	func_5146(var_26_object); // 0x8b NEW_2
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
	func_5149(); // 0x99 NEW_2
	
Label_155:
	return 2; // 0x9b Return
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_object, var_21_object, var_22_string, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; // 0x9c PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; // 0x9d PushV
	var_27_object = var_22_string; // 0x9e Mov
	var_28_string = var_23_bool; // 0x9f Mov
	func_4875(var_26_bool, var_27_object, var_28_string); // 0xa0 NEW_2
	if(var_26_bool == 0) goto Label_172; // 0xa2 JumpB
	func_251(var_25_int); // 0xa4 NEW_2
	var_59_object = Obj(); var_60_string = ""; // 0xa6 PushV
	var_59_object = var_22_string; // 0xa7 Mov
	var_60_string = var_23_bool; // 0xa8 Mov
	func_4907(var_59_object, var_60_string); // 0xa9 NEW_2
	goto Label_192; // 0xab Jump
	
Label_192:
	return 2; // 0xc0 Return
	
Label_172:
	var_208_int = 0; var_209_string = ""; var_210_object = Obj(); // 0xac PushV
	var_209_string = var_23_bool; // 0xad Mov
	var_210_object = var_22_string; // 0xae Mov
	func_5151(var_210_object); // 0xaf NEW_2
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
	func_5154(); // 0xbe NEW_2
}


task_1_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_string, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_string = ""; // 0xc2 PushV
	var_24_string = var_22_bool; // 0xc3 Mov
	func_4974(var_23_bool, var_24_string); // 0xc4 NEW_2
	if(var_23_bool == 0) goto Label_206; // 0xc6 JumpB
	func_251(var_22_bool); // 0xc8 NEW_2
	var_33_string = ""; // 0xca PushV
	var_33_string = var_22_bool; // 0xcb Mov
	func_4990(var_33_string); // 0xcc NEW_2
	
Label_206:
	return 0; // 0xce Return
}


task_1_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj(); // 0xd0 PushV
	var_24_object = var_22_bool; // 0xd1 Mov
	func_4932(var_23_bool, var_24_object); // 0xd2 NEW_2
	if(var_23_bool == 0) goto Label_221; // 0xd4 JumpB
	func_251(var_22_bool); // 0xd6 NEW_2
	var_38_object = Obj(); // 0xd8 PushV
	var_38_object = var_22_bool; // 0xd9 Mov
	func_4955(var_38_object); // 0xda NEW_2
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
	func_5165(); // 0xf8 NEW_2
	return 0; // 0xfa Return
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_251(var_22_bool); // 0x10d NEW_2
	var_24_object = Obj(); // 0x10f PushV
	var_24_object = var_22_bool; // 0x110 Mov
	func_4869(); // 0x111 NEW_2
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
	func_5156(var_26_object); // 0x19c NEW_2
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
	func_5159(var_31_object); // 0x1aa NEW_2
	
Label_428:
	return 2; // 0x1ac Return
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x1ad PushV
	var_25_object = Obj(); // 0x1ae PushV
	var_25_object = var_22_bool; // 0x1af Mov
	func_4961(var_25_object); // 0x1b0 NEW_2
	var_34_int = 0; var_35_object = Obj(); // 0x1b2 PushV
	var_35_object = var_22_bool; // 0x1b3 Mov
	func_5044(var_34_int, var_35_object); // 0x1b4 NEW_2
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
	func_5054(var_74_object); // 0x1c2 NEW_2
	
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
	func_5698(var_28_object, var_29_object, var_30_bool); // 0x1ca NEW_2
	if(var_27_bool == 0) goto Label_480; // 0x1cc JumpB
	var_74_int = 0; var_75_object = Obj(); var_76_bool = 0; // 0x1cd PushV
	var_75_object = var_22_object; // 0x1ce Mov
	var_76_bool = var_24_bool; // 0x1cf Mov
	func_5062(var_75_object, var_76_bool); // 0x1d0 NEW_2
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
	func_5072(var_109_object); // 0x1de NEW_2
	
Label_480:
	return 2; // 0x1e0 Return
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x1e1 PushV
	var_25_int = 0; var_26_object = Obj(); // 0x1e2 PushV
	var_26_object = var_22_bool; // 0x1e3 Mov
	func_5146(var_26_object); // 0x1e4 NEW_2
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
	func_5149(); // 0x1f2 NEW_2
	
Label_500:
	return 2; // 0x1f4 Return
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_object, var_21_object, var_22_string, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; // 0x1f5 PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; // 0x1f6 PushV
	var_27_object = var_22_string; // 0x1f7 Mov
	var_28_string = var_23_bool; // 0x1f8 Mov
	func_4875(var_26_bool, var_27_object, var_28_string); // 0x1f9 NEW_2
	if(var_26_bool == 0) goto Label_517; // 0x1fb JumpB
	func_654(); // 0x1fd NEW_2
	var_58_object = Obj(); var_59_string = ""; // 0x1ff PushV
	var_58_object = var_22_string; // 0x200 Mov
	var_59_string = var_23_bool; // 0x201 Mov
	func_4907(var_58_object, var_59_string); // 0x202 NEW_2
	goto Label_537; // 0x204 Jump
	
Label_537:
	return 2; // 0x219 Return
	
Label_517:
	var_207_int = 0; var_208_string = ""; var_209_object = Obj(); // 0x205 PushV
	var_208_string = var_23_bool; // 0x206 Mov
	var_209_object = var_22_string; // 0x207 Mov
	func_5151(var_209_object); // 0x208 NEW_2
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
	func_5154(); // 0x217 NEW_2
}


task_2_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_string, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_string = ""; // 0x21b PushV
	var_24_string = var_22_bool; // 0x21c Mov
	func_4974(var_23_bool, var_24_string); // 0x21d NEW_2
	if(var_23_bool == 0) goto Label_551; // 0x21f JumpB
	func_654(); // 0x221 NEW_2
	var_32_string = ""; // 0x223 PushV
	var_32_string = var_22_bool; // 0x224 Mov
	func_4990(var_32_string); // 0x225 NEW_2
	
Label_551:
	return 0; // 0x227 Return
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_654(); // 0x229 NEW_2
	func_5165(); // 0x22c NEW_2
	return 0; // 0x22e Return
}


task_2_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj(); // 0x230 PushV
	var_24_object = var_22_bool; // 0x231 Mov
	func_4932(var_23_bool, var_24_object); // 0x232 NEW_2
	if(var_23_bool == 0) goto Label_572; // 0x234 JumpB
	func_654(); // 0x236 NEW_2
	var_37_object = Obj(); // 0x238 PushV
	var_37_object = var_22_bool; // 0x239 Mov
	func_4955(var_37_object); // 0x23a NEW_2
	
Label_572:
	return 0; // 0x23c Return
}


task_3_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x2cb PushV
	var_25_int = 0; var_26_object = Obj(); // 0x2cc PushV
	var_26_object = var_22_bool; // 0x2cd Mov
	func_5156(var_26_object); // 0x2ce NEW_2
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
	func_5159(var_33_object); // 0x2dc NEW_2
	
Label_734:
	return 2; // 0x2de Return
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x2df PushV
	var_25_object = Obj(); // 0x2e0 PushV
	var_25_object = var_22_bool; // 0x2e1 Mov
	func_4961(var_25_object); // 0x2e2 NEW_2
	var_34_int = 0; var_35_object = Obj(); // 0x2e4 PushV
	var_35_object = var_22_bool; // 0x2e5 Mov
	func_5044(var_34_int, var_35_object); // 0x2e6 NEW_2
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
	func_5054(var_76_object); // 0x2f4 NEW_2
	
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
	func_5698(var_28_object, var_29_object, var_30_bool); // 0x2fc NEW_2
	if(var_27_bool == 0) goto Label_786; // 0x2fe JumpB
	var_74_int = 0; var_75_object = Obj(); var_76_bool = 0; // 0x2ff PushV
	var_75_object = var_22_object; // 0x300 Mov
	var_76_bool = var_24_bool; // 0x301 Mov
	func_5062(var_75_object, var_76_bool); // 0x302 NEW_2
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
	func_5072(var_111_object); // 0x310 NEW_2
	
Label_786:
	return 2; // 0x312 Return
}


task_3_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x313 PushV
	var_25_int = 0; var_26_object = Obj(); // 0x314 PushV
	var_26_object = var_22_bool; // 0x315 Mov
	func_5146(var_26_object); // 0x316 NEW_2
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
	func_5149(); // 0x324 NEW_2
	
Label_806:
	return 2; // 0x326 Return
}


task_3_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_string, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_object, var_21_object, var_22_string, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; // 0x327 PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; // 0x328 PushV
	var_27_object = var_22_string; // 0x329 Mov
	var_28_string = var_23_bool; // 0x32a Mov
	func_4875(var_26_bool, var_27_object, var_28_string); // 0x32b NEW_2
	if(var_26_bool == 0) goto Label_823; // 0x32d JumpB
	func_858(); // 0x32f NEW_2
	var_60_object = Obj(); var_61_string = ""; // 0x331 PushV
	var_60_object = var_22_string; // 0x332 Mov
	var_61_string = var_23_bool; // 0x333 Mov
	func_4907(var_60_object, var_61_string); // 0x334 NEW_2
	goto Label_843; // 0x336 Jump
	
Label_843:
	return 2; // 0x34b Return
	
Label_823:
	var_209_int = 0; var_210_string = ""; var_211_object = Obj(); // 0x337 PushV
	var_210_string = var_23_bool; // 0x338 Mov
	var_211_object = var_22_string; // 0x339 Mov
	func_5151(var_211_object); // 0x33a NEW_2
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
	func_5154(); // 0x349 NEW_2
}


task_3_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_string = ""; // 0x34d PushV
	var_24_string = var_22_bool; // 0x34e Mov
	func_4974(var_23_bool, var_24_string); // 0x34f NEW_2
	if(var_23_bool == 0) goto Label_857; // 0x351 JumpB
	func_858(); // 0x353 NEW_2
	var_34_string = ""; // 0x355 PushV
	var_34_string = var_22_bool; // 0x356 Mov
	func_4990(var_34_string); // 0x357 NEW_2
	
Label_857:
	return 0; // 0x359 Return
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_858(); // 0x367 NEW_2
	var_25_object = Obj(); // 0x369 PushV
	var_25_object = var_22_bool; // 0x36a Mov
	func_4869(); // 0x36b NEW_2
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
	func_4521(var_29_bool, var_30_object); // 0x375 NEW_2
	var_63_bool = var_29_bool == 0; // 0x377 Not
	if(var_63_bool == 0) goto Label_893; // 0x378 JumpB
	func_858(); // 0x37a NEW_2
	return 4; // 0x37c Return
	
Label_893:
	GetDirection(var_25_cvector); // 0x37d Func
	var_66_cvector = CVector(0,0,0); var_67_object = Obj(); // 0x37f PushV
	var_67_object = var_0_bool; // 0x380 MovT
	func_4448(var_67_object); // 0x381 NEW_2
	var_26_cvector = var_66_cvector; // 0x382 Mov
	var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); // 0x384 PushV
	var_73_cvector = var_25_cvector; // 0x385 Mov
	var_74_cvector = var_26_cvector; // 0x386 Mov
	func_4828(var_72_float, var_73_cvector, var_74_cvector); // 0x387 NEW_2
	var_96_float = 0.5; // 0x389 PushF
	var_97_bool = var_72_float < var_96_float; // 0x38a LT
	if(var_97_bool == 0) goto Label_912; // 0x38b JumpB
	var_98_object = Obj(); // 0x38c PushV
	var_98_object = var_0_bool; // 0x38d MovT
	func_4545(); // 0x38e NEW_2
	
Label_912:
	return 4; // 0x390 Return
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_858(); // 0x392 NEW_2
	func_5165(); // 0x395 NEW_2
	return 0; // 0x397 Return
}


task_3_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj(); // 0x399 PushV
	var_24_object = var_22_bool; // 0x39a Mov
	func_4932(var_23_bool, var_24_object); // 0x39b NEW_2
	if(var_23_bool == 0) goto Label_933; // 0x39d JumpB
	func_858(); // 0x39f NEW_2
	var_39_object = Obj(); // 0x3a1 PushV
	var_39_object = var_22_bool; // 0x3a2 Mov
	func_4955(var_39_object); // 0x3a3 NEW_2
	
Label_933:
	return 0; // 0x3a5 Return
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_1124(var_21_bool); // 0x3c3 NEW_2
	func_5165(); // 0x3c6 NEW_2
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
	func_4443(var_94_cvector); // 0x460 NEW_2
	var_1_bool = var_94_cvector + var_29_cvector; // 0x462 Add2
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1124(var_22_bool); // 0x46d NEW_2
	var_24_object = Obj(); // 0x46f PushV
	var_24_object = var_22_bool; // 0x470 Mov
	func_4869(); // 0x471 NEW_2
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
	func_4443(var_94_cvector); // 0x51b NEW_2
	var_1_bool = var_94_cvector + var_29_cvector; // 0x51d Add2
}


task_5_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1311(var_22_bool); // 0x528 NEW_2
	var_24_object = Obj(); // 0x52a PushV
	var_24_object = var_22_bool; // 0x52b Mov
	func_4869(); // 0x52c NEW_2
	return 0; // 0x52e Return
}


task_6_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_1505(var_21_bool); // 0x540 NEW_2
	func_5165(); // 0x543 NEW_2
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
	func_4443(var_94_cvector); // 0x5dd NEW_2
	var_1_bool = var_94_cvector + var_29_cvector; // 0x5df Add2
}


task_6_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1505(var_22_bool); // 0x5ea NEW_2
	var_24_object = Obj(); // 0x5ec PushV
	var_24_object = var_22_bool; // 0x5ed Mov
	func_4869(); // 0x5ee NEW_2
	return 0; // 0x5f0 Return
}


task_7_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_1699(var_21_bool); // 0x602 NEW_2
	func_5165(); // 0x605 NEW_2
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
	func_4443(var_94_cvector); // 0x69f NEW_2
	var_1_bool = var_94_cvector + var_29_cvector; // 0x6a1 Add2
}


task_7_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1699(var_22_bool); // 0x6ac NEW_2
	var_24_object = Obj(); // 0x6ae PushV
	var_24_object = var_22_bool; // 0x6af Mov
	func_4869(); // 0x6b0 NEW_2
	return 0; // 0x6b2 Return
}


task_9_event_11(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_int, var_23_int)
{
	var_24_int = 1; // 0x8b7 PushI
	if(var_24_int == 0) goto Label_4442; // 0x8b8 JumpB
	func_4747(); // 0x8ba NEW_2
	var_26_int = 45666; // 0x8bc PushI
	var_27_bool = var_23_int == var_26_int; // 0x8bd Eq
	if(var_27_bool == 0) goto Label_2244; // 0x8be JumpB
	var_28_object = Obj(); var_29_object = Obj(); // 0x8bf PushV
	var_28_object = var_1_bool; // 0x8c0 MovT
	var_29_object = var_0_bool; // 0x8c1 MovT
	func_5220(); // 0x8c2 NEW_2
	
Label_2244:
	var_31_int = 45667; // 0x8c4 PushI
	var_32_bool = var_23_int == var_31_int; // 0x8c5 Eq
	if(var_32_bool == 0) goto Label_2252; // 0x8c6 JumpB
	var_33_object = Obj(); var_34_object = Obj(); // 0x8c7 PushV
	var_33_object = var_1_bool; // 0x8c8 MovT
	var_34_object = var_0_bool; // 0x8c9 MovT
	func_5220(); // 0x8ca NEW_2
	
Label_2252:
	var_35_int = 45668; // 0x8cc PushI
	var_36_bool = var_23_int == var_35_int; // 0x8cd Eq
	if(var_36_bool == 0) goto Label_2260; // 0x8ce JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x8cf PushV
	var_37_object = var_1_bool; // 0x8d0 MovT
	var_38_object = var_0_bool; // 0x8d1 MovT
	func_5220(); // 0x8d2 NEW_2
	
Label_2260:
	var_39_int = 39084; // 0x8d4 PushI
	var_40_bool = var_23_int == var_39_int; // 0x8d5 Eq
	if(var_40_bool == 0) goto Label_2268; // 0x8d6 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0x8d7 PushV
	var_41_object = var_1_bool; // 0x8d8 MovT
	var_42_object = var_0_bool; // 0x8d9 MovT
	func_5220(); // 0x8da NEW_2
	
Label_2268:
	var_43_int = 45665; // 0x8dc PushI
	var_44_bool = var_22_int == var_43_int; // 0x8dd Eq
	if(var_44_bool == 0) goto Label_2636; // 0x8de JumpB
	var_45_bool = 0; var_46_object = Obj(); // 0x8df PushV
	var_46_object = var_1_bool; // 0x8e0 MovT
	func_5237(var_46_object); // 0x8e1 NEW_2
	if(var_45_bool == 0) goto Label_2554; // 0x8e3 JumpB
	var_53_string = ""; // 0x8e4 PushV
	var_53_string = "Neutral"; // 0x8e5 MovS
	func_2208(var_23_int, var_53_string); // 0x8e6 NEW_2
	var_70_int = 543209; // 0x8e8 PushI
	SetMessage(var_70_int); // 0x8e9 TObjFunc
	ClearReplies(); // 0x8eb TObjFunc
	var_71_bool = 0; var_72_object = Obj(); // 0x8ed PushV
	var_72_object = var_1_bool; // 0x8ee MovT
	func_5259(var_71_bool, var_72_object); // 0x8ef NEW_2
	if(var_71_bool == 0) goto Label_2295; // 0x8f1 JumpB
	var_82_int = 543214; // 0x8f2 PushI
	var_83_int = 45672; // 0x8f3 PushI
	var_84_int = 45670; // 0x8f4 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x8f5 TObjFunc
	
Label_2295:
	var_85_bool = 0; // 0x8f7 PushV
	var_85_bool = 1; // 0x8f8 MovB
	var_86_bool = 0; // 0x8f9 PushV
	var_86_bool = 1; // 0x8fa MovB
	var_87_bool = 0; // 0x8fb PushV
	var_87_bool = 1; // 0x8fc MovB
	var_88_bool = 0; var_89_object = Obj(); // 0x8fd PushV
	var_89_object = var_1_bool; // 0x8fe MovT
	func_5249(var_88_bool, var_89_object); // 0x8ff NEW_2
	if(var_88_bool == 0) goto Label_2312; // 0x901 JumpB
	var_94_bool = 0; var_95_object = Obj(); // 0x902 PushV
	var_95_object = var_1_bool; // 0x903 MovT
	func_5259(var_94_bool, var_95_object); // 0x904 NEW_2
	if(var_94_bool == 0) goto Label_2312; // 0x906 JumpB
	var_87_bool = 0; // 0x907 MovB
	
Label_2312:
	if(var_87_bool == 0) goto Label_2319; // 0x908 JumpB
	var_96_bool = 0; var_97_object = Obj(); // 0x909 PushV
	var_97_object = var_1_bool; // 0x90a MovT
	func_5269(var_96_bool, var_97_object); // 0x90b NEW_2
	if(var_96_bool == 0) goto Label_2319; // 0x90d JumpB
	var_86_bool = 0; // 0x90e MovB
	
Label_2319:
	if(var_86_bool == 0) goto Label_2326; // 0x90f JumpB
	var_102_bool = 0; var_103_object = Obj(); // 0x910 PushV
	var_103_object = var_1_bool; // 0x911 MovT
	func_5279(var_102_bool, var_103_object); // 0x912 NEW_2
	if(var_102_bool == 0) goto Label_2326; // 0x914 JumpB
	var_85_bool = 0; // 0x915 MovB
	
Label_2326:
	if(var_85_bool == 0) goto Label_2332; // 0x916 JumpB
	var_108_int = 543210; // 0x917 PushI
	var_109_int = -1; // 0x918 PushI
	var_110_int = 45666; // 0x919 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x91a TObjFunc
	
Label_2332:
	var_111_bool = 0; // 0x91c PushV
	var_111_bool = 1; // 0x91d MovB
	var_112_bool = 0; // 0x91e PushV
	var_112_bool = 1; // 0x91f MovB
	var_113_bool = 0; var_114_object = Obj(); // 0x920 PushV
	var_114_object = var_1_bool; // 0x921 MovT
	func_5289(var_113_bool, var_114_object); // 0x922 NEW_2
	if(var_113_bool == 0) goto Label_2347; // 0x924 JumpB
	var_119_bool = 0; var_120_object = Obj(); // 0x925 PushV
	var_120_object = var_1_bool; // 0x926 MovT
	func_5299(var_119_bool, var_120_object); // 0x927 NEW_2
	if(var_119_bool == 0) goto Label_2347; // 0x929 JumpB
	var_112_bool = 0; // 0x92a MovB
	
Label_2347:
	if(var_112_bool == 0) goto Label_2354; // 0x92b JumpB
	var_125_bool = 0; var_126_object = Obj(); // 0x92c PushV
	var_126_object = var_1_bool; // 0x92d MovT
	func_5309(var_125_bool, var_126_object); // 0x92e NEW_2
	if(var_125_bool == 0) goto Label_2354; // 0x930 JumpB
	var_111_bool = 0; // 0x931 MovB
	
Label_2354:
	if(var_111_bool == 0) goto Label_2360; // 0x932 JumpB
	var_131_int = 543211; // 0x933 PushI
	var_132_int = -1; // 0x934 PushI
	var_133_int = 45667; // 0x935 PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x936 TObjFunc
	
Label_2360:
	var_134_bool = 0; // 0x938 PushV
	var_134_bool = 1; // 0x939 MovB
	var_135_bool = 0; // 0x93a PushV
	var_135_bool = 1; // 0x93b MovB
	var_136_bool = 0; // 0x93c PushV
	var_136_bool = 1; // 0x93d MovB
	var_137_bool = 0; // 0x93e PushV
	var_137_bool = 1; // 0x93f MovB
	var_138_bool = 0; var_139_object = Obj(); // 0x940 PushV
	var_139_object = var_1_bool; // 0x941 MovT
	func_5319(var_138_bool, var_139_object); // 0x942 NEW_2
	if(var_138_bool == 0) goto Label_2379; // 0x944 JumpB
	var_144_bool = 0; var_145_object = Obj(); // 0x945 PushV
	var_145_object = var_1_bool; // 0x946 MovT
	func_5329(var_144_bool, var_145_object); // 0x947 NEW_2
	if(var_144_bool == 0) goto Label_2379; // 0x949 JumpB
	var_137_bool = 0; // 0x94a MovB
	
Label_2379:
	if(var_137_bool == 0) goto Label_2386; // 0x94b JumpB
	var_150_bool = 0; var_151_object = Obj(); // 0x94c PushV
	var_151_object = var_1_bool; // 0x94d MovT
	func_5339(var_150_bool, var_151_object); // 0x94e NEW_2
	if(var_150_bool == 0) goto Label_2386; // 0x950 JumpB
	var_136_bool = 0; // 0x951 MovB
	
Label_2386:
	if(var_136_bool == 0) goto Label_2393; // 0x952 JumpB
	var_156_bool = 0; var_157_object = Obj(); // 0x953 PushV
	var_157_object = var_1_bool; // 0x954 MovT
	func_5349(var_156_bool, var_157_object); // 0x955 NEW_2
	if(var_156_bool == 0) goto Label_2393; // 0x957 JumpB
	var_135_bool = 0; // 0x958 MovB
	
Label_2393:
	if(var_135_bool == 0) goto Label_2400; // 0x959 JumpB
	var_162_bool = 0; var_163_object = Obj(); // 0x95a PushV
	var_163_object = var_1_bool; // 0x95b MovT
	func_5359(var_162_bool, var_163_object); // 0x95c NEW_2
	if(var_162_bool == 0) goto Label_2400; // 0x95e JumpB
	var_134_bool = 0; // 0x95f MovB
	
Label_2400:
	if(var_134_bool == 0) goto Label_2406; // 0x960 JumpB
	var_168_int = 543212; // 0x961 PushI
	var_169_int = -1; // 0x962 PushI
	var_170_int = 45668; // 0x963 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x964 TObjFunc
	
Label_2406:
	var_171_bool = 0; // 0x966 PushV
	var_171_bool = 1; // 0x967 MovB
	var_172_bool = 0; // 0x968 PushV
	var_172_bool = 1; // 0x969 MovB
	var_173_bool = 0; // 0x96a PushV
	var_173_bool = 1; // 0x96b MovB
	var_174_bool = 0; // 0x96c PushV
	var_174_bool = 1; // 0x96d MovB
	var_175_bool = 0; var_176_object = Obj(); // 0x96e PushV
	var_176_object = var_1_bool; // 0x96f MovT
	func_5249(var_175_bool, var_176_object); // 0x970 NEW_2
	if(var_175_bool == 0) goto Label_2425; // 0x972 JumpB
	var_177_bool = 0; var_178_object = Obj(); // 0x973 PushV
	var_178_object = var_1_bool; // 0x974 MovT
	func_5259(var_177_bool, var_178_object); // 0x975 NEW_2
	if(var_177_bool == 0) goto Label_2425; // 0x977 JumpB
	var_174_bool = 0; // 0x978 MovB
	
Label_2425:
	if(var_174_bool == 0) goto Label_2432; // 0x979 JumpB
	var_179_bool = 0; var_180_object = Obj(); // 0x97a PushV
	var_180_object = var_1_bool; // 0x97b MovT
	func_5279(var_179_bool, var_180_object); // 0x97c NEW_2
	if(var_179_bool == 0) goto Label_2432; // 0x97e JumpB
	var_173_bool = 0; // 0x97f MovB
	
Label_2432:
	if(var_173_bool == 0) goto Label_2439; // 0x980 JumpB
	var_181_bool = 0; var_182_object = Obj(); // 0x981 PushV
	var_182_object = var_1_bool; // 0x982 MovT
	func_5289(var_181_bool, var_182_object); // 0x983 NEW_2
	if(var_181_bool == 0) goto Label_2439; // 0x985 JumpB
	var_172_bool = 0; // 0x986 MovB
	
Label_2439:
	if(var_172_bool == 0) goto Label_2446; // 0x987 JumpB
	var_183_bool = 0; var_184_object = Obj(); // 0x988 PushV
	var_184_object = var_1_bool; // 0x989 MovT
	func_5309(var_183_bool, var_184_object); // 0x98a NEW_2
	if(var_183_bool == 0) goto Label_2446; // 0x98c JumpB
	var_171_bool = 0; // 0x98d MovB
	
Label_2446:
	if(var_171_bool == 0) goto Label_2452; // 0x98e JumpB
	var_185_int = 543213; // 0x98f PushI
	var_186_int = -1; // 0x990 PushI
	var_187_int = 45669; // 0x991 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x992 TObjFunc
	
Label_2452:
	var_188_bool = 0; // 0x994 PushV
	var_188_bool = 1; // 0x995 MovB
	var_189_bool = 0; // 0x996 PushV
	var_189_bool = 1; // 0x997 MovB
	var_190_bool = 0; // 0x998 PushV
	var_190_bool = 1; // 0x999 MovB
	var_191_bool = 0; // 0x99a PushV
	var_191_bool = 1; // 0x99b MovB
	var_192_bool = 0; // 0x99c PushV
	var_192_bool = 1; // 0x99d MovB
	var_193_bool = 0; // 0x99e PushV
	var_193_bool = 1; // 0x99f MovB
	var_194_bool = 0; var_195_object = Obj(); // 0x9a0 PushV
	var_195_object = var_1_bool; // 0x9a1 MovT
	func_5269(var_194_bool, var_195_object); // 0x9a2 NEW_2
	if(var_194_bool == 0) goto Label_2475; // 0x9a4 JumpB
	var_196_bool = 0; var_197_object = Obj(); // 0x9a5 PushV
	var_197_object = var_1_bool; // 0x9a6 MovT
	func_5299(var_196_bool, var_197_object); // 0x9a7 NEW_2
	if(var_196_bool == 0) goto Label_2475; // 0x9a9 JumpB
	var_193_bool = 0; // 0x9aa MovB
	
Label_2475:
	if(var_193_bool == 0) goto Label_2482; // 0x9ab JumpB
	var_198_bool = 0; var_199_object = Obj(); // 0x9ac PushV
	var_199_object = var_1_bool; // 0x9ad MovT
	func_5329(var_198_bool, var_199_object); // 0x9ae NEW_2
	if(var_198_bool == 0) goto Label_2482; // 0x9b0 JumpB
	var_192_bool = 0; // 0x9b1 MovB
	
Label_2482:
	if(var_192_bool == 0) goto Label_2489; // 0x9b2 JumpB
	var_200_bool = 0; var_201_object = Obj(); // 0x9b3 PushV
	var_201_object = var_1_bool; // 0x9b4 MovT
	func_5359(var_200_bool, var_201_object); // 0x9b5 NEW_2
	if(var_200_bool == 0) goto Label_2489; // 0x9b7 JumpB
	var_191_bool = 0; // 0x9b8 MovB
	
Label_2489:
	if(var_191_bool == 0) goto Label_2496; // 0x9b9 JumpB
	var_202_bool = 0; var_203_object = Obj(); // 0x9ba PushV
	var_203_object = var_1_bool; // 0x9bb MovT
	func_5259(var_202_bool, var_203_object); // 0x9bc NEW_2
	if(var_202_bool == 0) goto Label_2496; // 0x9be JumpB
	var_190_bool = 0; // 0x9bf MovB
	
Label_2496:
	if(var_190_bool == 0) goto Label_2503; // 0x9c0 JumpB
	var_204_bool = 0; var_205_object = Obj(); // 0x9c1 PushV
	var_205_object = var_1_bool; // 0x9c2 MovT
	func_5319(var_204_bool, var_205_object); // 0x9c3 NEW_2
	if(var_204_bool == 0) goto Label_2503; // 0x9c5 JumpB
	var_189_bool = 0; // 0x9c6 MovB
	
Label_2503:
	if(var_189_bool == 0) goto Label_2510; // 0x9c7 JumpB
	var_206_bool = 0; var_207_object = Obj(); // 0x9c8 PushV
	var_207_object = var_1_bool; // 0x9c9 MovT
	func_5339(var_206_bool, var_207_object); // 0x9ca NEW_2
	if(var_206_bool == 0) goto Label_2510; // 0x9cc JumpB
	var_188_bool = 0; // 0x9cd MovB
	
Label_2510:
	if(var_188_bool == 0) goto Label_2516; // 0x9ce JumpB
	var_208_int = 543215; // 0x9cf PushI
	var_209_int = -1; // 0x9d0 PushI
	var_210_int = 45671; // 0x9d1 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x9d2 TObjFunc
	
Label_2516:
	var_211_bool = 0; // 0x9d4 PushV
	var_211_bool = 1; // 0x9d5 MovB
	var_212_bool = 0; // 0x9d6 PushV
	var_212_bool = 1; // 0x9d7 MovB
	var_213_bool = 0; // 0x9d8 PushV
	var_213_bool = 1; // 0x9d9 MovB
	var_214_bool = 0; var_215_object = Obj(); // 0x9da PushV
	var_215_object = var_1_bool; // 0x9db MovT
	func_5349(var_214_bool, var_215_object); // 0x9dc NEW_2
	if(var_214_bool == 0) goto Label_2533; // 0x9de JumpB
	var_216_bool = 0; var_217_object = Obj(); // 0x9df PushV
	var_217_object = var_1_bool; // 0x9e0 MovT
	func_5329(var_216_bool, var_217_object); // 0x9e1 NEW_2
	if(var_216_bool == 0) goto Label_2533; // 0x9e3 JumpB
	var_213_bool = 0; // 0x9e4 MovB
	
Label_2533:
	if(var_213_bool == 0) goto Label_2540; // 0x9e5 JumpB
	var_218_bool = 0; var_219_object = Obj(); // 0x9e6 PushV
	var_219_object = var_1_bool; // 0x9e7 MovT
	func_5319(var_218_bool, var_219_object); // 0x9e8 NEW_2
	if(var_218_bool == 0) goto Label_2540; // 0x9ea JumpB
	var_212_bool = 0; // 0x9eb MovB
	
Label_2540:
	if(var_212_bool == 0) goto Label_2547; // 0x9ec JumpB
	var_220_bool = 0; var_221_object = Obj(); // 0x9ed PushV
	var_221_object = var_1_bool; // 0x9ee MovT
	func_5309(var_220_bool, var_221_object); // 0x9ef NEW_2
	if(var_220_bool == 0) goto Label_2547; // 0x9f1 JumpB
	var_211_bool = 0; // 0x9f2 MovB
	
Label_2547:
	if(var_211_bool == 0) goto Label_2553; // 0x9f3 JumpB
	var_222_int = 543219; // 0x9f4 PushI
	var_223_int = -1; // 0x9f5 PushI
	var_224_int = 45675; // 0x9f6 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x9f7 TObjFunc
	
Label_2553:
	return 0; // 0x9f9 Return
	
Label_2554:
	var_225_string = ""; // 0x9fa PushV
	var_225_string = "Neutral"; // 0x9fb MovS
	func_2208(var_23_int, var_225_string); // 0x9fc NEW_2
	var_226_int = 537240; // 0x9fe PushI
	SetMessage(var_226_int); // 0x9ff TObjFunc
	ClearReplies(); // 0xa01 TObjFunc
	var_227_int = 537241; // 0xa03 PushI
	var_228_int = -1; // 0xa04 PushI
	var_229_int = 39084; // 0xa05 PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0xa06 TObjFunc
	var_230_bool = 0; // 0xa08 PushV
	var_230_bool = 0; // 0xa09 MovB
	var_231_bool = 0; var_232_object = Obj(); // 0xa0a PushV
	var_232_object = var_1_bool; // 0xa0b MovT
	func_5225(var_232_object); // 0xa0c NEW_2
	if(var_231_bool == 0) goto Label_2581; // 0xa0e JumpB
	var_237_bool = 0; var_238_object = Obj(); // 0xa0f PushV
	var_238_object = var_1_bool; // 0xa10 MovT
	func_5249(var_237_bool, var_238_object); // 0xa11 NEW_2
	if(var_237_bool == 0) goto Label_2581; // 0xa13 JumpB
	var_230_bool = 1; // 0xa14 MovB
	
Label_2581:
	if(var_230_bool == 0) goto Label_2587; // 0xa15 JumpB
	var_239_int = 537242; // 0xa16 PushI
	var_240_int = 39086; // 0xa17 PushI
	var_241_int = 39085; // 0xa18 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0xa19 TObjFunc
	
Label_2587:
	var_242_bool = 0; // 0xa1b PushV
	var_242_bool = 0; // 0xa1c MovB
	var_243_bool = 0; var_244_object = Obj(); // 0xa1d PushV
	var_244_object = var_1_bool; // 0xa1e MovT
	func_5269(var_243_bool, var_244_object); // 0xa1f NEW_2
	if(var_243_bool == 0) goto Label_2600; // 0xa21 JumpB
	var_245_bool = 0; var_246_object = Obj(); // 0xa22 PushV
	var_246_object = var_1_bool; // 0xa23 MovT
	func_5369(var_245_bool, var_246_object); // 0xa24 NEW_2
	if(var_245_bool == 0) goto Label_2600; // 0xa26 JumpB
	var_242_bool = 1; // 0xa27 MovB
	
Label_2600:
	if(var_242_bool == 0) goto Label_2606; // 0xa28 JumpB
	var_260_int = 537352; // 0xa29 PushI
	var_261_int = 39199; // 0xa2a PushI
	var_262_int = 39198; // 0xa2b PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0xa2c TObjFunc
	
Label_2606:
	var_263_bool = 0; // 0xa2e PushV
	var_263_bool = 0; // 0xa2f MovB
	var_264_bool = 0; var_265_object = Obj(); // 0xa30 PushV
	var_265_object = var_1_bool; // 0xa31 MovT
	func_5279(var_264_bool, var_265_object); // 0xa32 NEW_2
	if(var_264_bool == 0) goto Label_2619; // 0xa34 JumpB
	var_266_bool = 0; var_267_object = Obj(); // 0xa35 PushV
	var_267_object = var_1_bool; // 0xa36 MovT
	func_5369(var_266_bool, var_267_object); // 0xa37 NEW_2
	if(var_266_bool == 0) goto Label_2619; // 0xa39 JumpB
	var_263_bool = 1; // 0xa3a MovB
	
Label_2619:
	if(var_263_bool == 0) goto Label_2625; // 0xa3b JumpB
	var_268_int = 537380; // 0xa3c PushI
	var_269_int = 39227; // 0xa3d PushI
	var_270_int = 39226; // 0xa3e PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0xa3f TObjFunc
	
Label_2625:
	var_271_int = 537503; // 0xa41 PushI
	var_272_int = -1; // 0xa42 PushI
	var_273_int = 39350; // 0xa43 PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0xa44 TObjFunc
	var_274_int = 537504; // 0xa46 PushI
	var_275_int = -1; // 0xa47 PushI
	var_276_int = 39351; // 0xa48 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0xa49 TObjFunc
	return 0; // 0xa4b Return
	
Label_2636:
	var_277_int = 39341; // 0xa4c PushI
	var_278_bool = var_22_int == var_277_int; // 0xa4d Eq
	if(var_278_bool == 0) goto Label_2639; // 0xa4e JumpB
	
Label_2639:
	var_279_int = 39347; // 0xa4f PushI
	var_280_bool = var_22_int == var_279_int; // 0xa50 Eq
	if(var_280_bool == 0) goto Label_2667; // 0xa51 JumpB
	var_281_string = ""; // 0xa52 PushV
	var_281_string = "Neutral"; // 0xa53 MovS
	func_2208(var_23_int, var_281_string); // 0xa54 NEW_2
	var_282_int = 537500; // 0xa56 PushI
	SetMessage(var_282_int); // 0xa57 TObjFunc
	ClearReplies(); // 0xa59 TObjFunc
	var_283_int = 537501; // 0xa5b PushI
	var_284_int = -1; // 0xa5c PushI
	var_285_int = 39348; // 0xa5d PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0xa5e TObjFunc
	var_286_bool = 0; var_287_object = Obj(); // 0xa60 PushV
	var_287_object = var_1_bool; // 0xa61 MovT
	func_5225(var_287_object); // 0xa62 NEW_2
	if(var_286_bool == 0) goto Label_2666; // 0xa64 JumpB
	var_288_int = 537502; // 0xa65 PushI
	var_289_int = -1; // 0xa66 PushI
	var_290_int = 39349; // 0xa67 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0xa68 TObjFunc
	
Label_2666:
	return 0; // 0xa6a Return
	
Label_2667:
	var_291_int = 39343; // 0xa6b PushI
	var_292_bool = var_22_int == var_291_int; // 0xa6c Eq
	if(var_292_bool == 0) goto Label_2690; // 0xa6d JumpB
	var_293_string = ""; // 0xa6e PushV
	var_293_string = "Neutral"; // 0xa6f MovS
	func_2208(var_23_int, var_293_string); // 0xa70 NEW_2
	var_294_int = 537496; // 0xa72 PushI
	SetMessage(var_294_int); // 0xa73 TObjFunc
	ClearReplies(); // 0xa75 TObjFunc
	var_295_int = 537497; // 0xa77 PushI
	var_296_int = -1; // 0xa78 PushI
	var_297_int = 39344; // 0xa79 PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0xa7a TObjFunc
	var_298_int = 537498; // 0xa7c PushI
	var_299_int = -1; // 0xa7d PushI
	var_300_int = 39345; // 0xa7e PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0xa7f TObjFunc
	return 0; // 0xa81 Return
	
Label_2690:
	var_301_int = 39331; // 0xa82 PushI
	var_302_bool = var_22_int == var_301_int; // 0xa83 Eq
	if(var_302_bool == 0) goto Label_2693; // 0xa84 JumpB
	
Label_2693:
	var_303_int = 39333; // 0xa85 PushI
	var_304_bool = var_22_int == var_303_int; // 0xa86 Eq
	if(var_304_bool == 0) goto Label_2721; // 0xa87 JumpB
	var_305_string = ""; // 0xa88 PushV
	var_305_string = "Neutral"; // 0xa89 MovS
	func_2208(var_23_int, var_305_string); // 0xa8a NEW_2
	var_306_int = 537486; // 0xa8c PushI
	SetMessage(var_306_int); // 0xa8d TObjFunc
	ClearReplies(); // 0xa8f TObjFunc
	var_307_int = 537487; // 0xa91 PushI
	var_308_int = 39335; // 0xa92 PushI
	var_309_int = 39334; // 0xa93 PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0xa94 TObjFunc
	var_310_bool = 0; var_311_object = Obj(); // 0xa96 PushV
	var_311_object = var_1_bool; // 0xa97 MovT
	func_5225(var_311_object); // 0xa98 NEW_2
	if(var_310_bool == 0) goto Label_2720; // 0xa9a JumpB
	var_312_int = 537491; // 0xa9b PushI
	var_313_int = -1; // 0xa9c PushI
	var_314_int = 39338; // 0xa9d PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0xa9e TObjFunc
	
Label_2720:
	return 0; // 0xaa0 Return
	
Label_2721:
	var_315_int = 39335; // 0xaa1 PushI
	var_316_bool = var_22_int == var_315_int; // 0xaa2 Eq
	if(var_316_bool == 0) goto Label_2744; // 0xaa3 JumpB
	var_317_string = ""; // 0xaa4 PushV
	var_317_string = "Neutral"; // 0xaa5 MovS
	func_2208(var_23_int, var_317_string); // 0xaa6 NEW_2
	var_318_int = 537488; // 0xaa8 PushI
	SetMessage(var_318_int); // 0xaa9 TObjFunc
	ClearReplies(); // 0xaab TObjFunc
	var_319_int = 537489; // 0xaad PushI
	var_320_int = -1; // 0xaae PushI
	var_321_int = 39336; // 0xaaf PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0xab0 TObjFunc
	var_322_int = 537490; // 0xab2 PushI
	var_323_int = -1; // 0xab3 PushI
	var_324_int = 39337; // 0xab4 PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0xab5 TObjFunc
	return 0; // 0xab7 Return
	
Label_2744:
	var_325_int = 39321; // 0xab8 PushI
	var_326_bool = var_22_int == var_325_int; // 0xab9 Eq
	if(var_326_bool == 0) goto Label_2747; // 0xaba JumpB
	
Label_2747:
	var_327_int = 39323; // 0xabb PushI
	var_328_bool = var_22_int == var_327_int; // 0xabc Eq
	if(var_328_bool == 0) goto Label_2770; // 0xabd JumpB
	var_329_string = ""; // 0xabe PushV
	var_329_string = "Neutral"; // 0xabf MovS
	func_2208(var_23_int, var_329_string); // 0xac0 NEW_2
	var_330_int = 537476; // 0xac2 PushI
	SetMessage(var_330_int); // 0xac3 TObjFunc
	ClearReplies(); // 0xac5 TObjFunc
	var_331_int = 537477; // 0xac7 PushI
	var_332_int = 39325; // 0xac8 PushI
	var_333_int = 39324; // 0xac9 PushI
	AddReply(var_331_int, var_332_int, var_333_int); // 0xaca TObjFunc
	var_334_int = 537481; // 0xacc PushI
	var_335_int = -1; // 0xacd PushI
	var_336_int = 39328; // 0xace PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0xacf TObjFunc
	return 0; // 0xad1 Return
	
Label_2770:
	var_337_int = 39325; // 0xad2 PushI
	var_338_bool = var_22_int == var_337_int; // 0xad3 Eq
	if(var_338_bool == 0) goto Label_2793; // 0xad4 JumpB
	var_339_string = ""; // 0xad5 PushV
	var_339_string = "Neutral"; // 0xad6 MovS
	func_2208(var_23_int, var_339_string); // 0xad7 NEW_2
	var_340_int = 537478; // 0xad9 PushI
	SetMessage(var_340_int); // 0xada TObjFunc
	ClearReplies(); // 0xadc TObjFunc
	var_341_int = 537479; // 0xade PushI
	var_342_int = -1; // 0xadf PushI
	var_343_int = 39326; // 0xae0 PushI
	AddReply(var_341_int, var_342_int, var_343_int); // 0xae1 TObjFunc
	var_344_int = 537480; // 0xae3 PushI
	var_345_int = -1; // 0xae4 PushI
	var_346_int = 39327; // 0xae5 PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0xae6 TObjFunc
	return 0; // 0xae8 Return
	
Label_2793:
	var_347_int = 39308; // 0xae9 PushI
	var_348_bool = var_22_int == var_347_int; // 0xaea Eq
	if(var_348_bool == 0) goto Label_2796; // 0xaeb JumpB
	
Label_2796:
	var_349_int = 39310; // 0xaec PushI
	var_350_bool = var_22_int == var_349_int; // 0xaed Eq
	if(var_350_bool == 0) goto Label_2819; // 0xaee JumpB
	var_351_string = ""; // 0xaef PushV
	var_351_string = "Neutral"; // 0xaf0 MovS
	func_2208(var_23_int, var_351_string); // 0xaf1 NEW_2
	var_352_int = 537463; // 0xaf3 PushI
	SetMessage(var_352_int); // 0xaf4 TObjFunc
	ClearReplies(); // 0xaf6 TObjFunc
	var_353_int = 537464; // 0xaf8 PushI
	var_354_int = 39312; // 0xaf9 PushI
	var_355_int = 39311; // 0xafa PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0xafb TObjFunc
	var_356_int = 537471; // 0xafd PushI
	var_357_int = -1; // 0xafe PushI
	var_358_int = 39318; // 0xaff PushI
	AddReply(var_356_int, var_357_int, var_358_int); // 0xb00 TObjFunc
	return 0; // 0xb02 Return
	
Label_2819:
	var_359_int = 39312; // 0xb03 PushI
	var_360_bool = var_22_int == var_359_int; // 0xb04 Eq
	if(var_360_bool == 0) goto Label_2842; // 0xb05 JumpB
	var_361_string = ""; // 0xb06 PushV
	var_361_string = "Neutral"; // 0xb07 MovS
	func_2208(var_23_int, var_361_string); // 0xb08 NEW_2
	var_362_int = 537465; // 0xb0a PushI
	SetMessage(var_362_int); // 0xb0b TObjFunc
	ClearReplies(); // 0xb0d TObjFunc
	var_363_int = 537466; // 0xb0f PushI
	var_364_int = 39314; // 0xb10 PushI
	var_365_int = 39313; // 0xb11 PushI
	AddReply(var_363_int, var_364_int, var_365_int); // 0xb12 TObjFunc
	var_366_int = 537470; // 0xb14 PushI
	var_367_int = -1; // 0xb15 PushI
	var_368_int = 39317; // 0xb16 PushI
	AddReply(var_366_int, var_367_int, var_368_int); // 0xb17 TObjFunc
	return 0; // 0xb19 Return
	
Label_2842:
	var_369_int = 39314; // 0xb1a PushI
	var_370_bool = var_22_int == var_369_int; // 0xb1b Eq
	if(var_370_bool == 0) goto Label_2865; // 0xb1c JumpB
	var_371_string = ""; // 0xb1d PushV
	var_371_string = "Neutral"; // 0xb1e MovS
	func_2208(var_23_int, var_371_string); // 0xb1f NEW_2
	var_372_int = 537467; // 0xb21 PushI
	SetMessage(var_372_int); // 0xb22 TObjFunc
	ClearReplies(); // 0xb24 TObjFunc
	var_373_int = 537468; // 0xb26 PushI
	var_374_int = -1; // 0xb27 PushI
	var_375_int = 39315; // 0xb28 PushI
	AddReply(var_373_int, var_374_int, var_375_int); // 0xb29 TObjFunc
	var_376_int = 537469; // 0xb2b PushI
	var_377_int = -1; // 0xb2c PushI
	var_378_int = 39316; // 0xb2d PushI
	AddReply(var_376_int, var_377_int, var_378_int); // 0xb2e TObjFunc
	return 0; // 0xb30 Return
	
Label_2865:
	var_379_int = 39299; // 0xb31 PushI
	var_380_bool = var_22_int == var_379_int; // 0xb32 Eq
	if(var_380_bool == 0) goto Label_2868; // 0xb33 JumpB
	
Label_2868:
	var_381_int = 39301; // 0xb34 PushI
	var_382_bool = var_22_int == var_381_int; // 0xb35 Eq
	if(var_382_bool == 0) goto Label_2886; // 0xb36 JumpB
	var_383_string = ""; // 0xb37 PushV
	var_383_string = "Neutral"; // 0xb38 MovS
	func_2208(var_23_int, var_383_string); // 0xb39 NEW_2
	var_384_int = 537454; // 0xb3b PushI
	SetMessage(var_384_int); // 0xb3c TObjFunc
	ClearReplies(); // 0xb3e TObjFunc
	var_385_int = 537455; // 0xb40 PushI
	var_386_int = 39303; // 0xb41 PushI
	var_387_int = 39302; // 0xb42 PushI
	AddReply(var_385_int, var_386_int, var_387_int); // 0xb43 TObjFunc
	return 0; // 0xb45 Return
	
Label_2886:
	var_388_int = 39303; // 0xb46 PushI
	var_389_bool = var_22_int == var_388_int; // 0xb47 Eq
	if(var_389_bool == 0) goto Label_2909; // 0xb48 JumpB
	var_390_string = ""; // 0xb49 PushV
	var_390_string = "Neutral"; // 0xb4a MovS
	func_2208(var_23_int, var_390_string); // 0xb4b NEW_2
	var_391_int = 537456; // 0xb4d PushI
	SetMessage(var_391_int); // 0xb4e TObjFunc
	ClearReplies(); // 0xb50 TObjFunc
	var_392_int = 537457; // 0xb52 PushI
	var_393_int = -1; // 0xb53 PushI
	var_394_int = 39304; // 0xb54 PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0xb55 TObjFunc
	var_395_int = 537458; // 0xb57 PushI
	var_396_int = -1; // 0xb58 PushI
	var_397_int = 39305; // 0xb59 PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0xb5a TObjFunc
	return 0; // 0xb5c Return
	
Label_2909:
	var_398_int = 39280; // 0xb5d PushI
	var_399_bool = var_22_int == var_398_int; // 0xb5e Eq
	if(var_399_bool == 0) goto Label_2912; // 0xb5f JumpB
	
Label_2912:
	var_400_int = 39294; // 0xb60 PushI
	var_401_bool = var_22_int == var_400_int; // 0xb61 Eq
	if(var_401_bool == 0) goto Label_2935; // 0xb62 JumpB
	var_402_string = ""; // 0xb63 PushV
	var_402_string = "Neutral"; // 0xb64 MovS
	func_2208(var_23_int, var_402_string); // 0xb65 NEW_2
	var_403_int = 537448; // 0xb67 PushI
	SetMessage(var_403_int); // 0xb68 TObjFunc
	ClearReplies(); // 0xb6a TObjFunc
	var_404_int = 537449; // 0xb6c PushI
	var_405_int = 39284; // 0xb6d PushI
	var_406_int = 39295; // 0xb6e PushI
	AddReply(var_404_int, var_405_int, var_406_int); // 0xb6f TObjFunc
	var_407_int = 537450; // 0xb71 PushI
	var_408_int = -1; // 0xb72 PushI
	var_409_int = 39297; // 0xb73 PushI
	AddReply(var_407_int, var_408_int, var_409_int); // 0xb74 TObjFunc
	return 0; // 0xb76 Return
	
Label_2935:
	var_410_int = 39282; // 0xb77 PushI
	var_411_bool = var_22_int == var_410_int; // 0xb78 Eq
	if(var_411_bool == 0) goto Label_2953; // 0xb79 JumpB
	var_412_string = ""; // 0xb7a PushV
	var_412_string = "Neutral"; // 0xb7b MovS
	func_2208(var_23_int, var_412_string); // 0xb7c NEW_2
	var_413_int = 537436; // 0xb7e PushI
	SetMessage(var_413_int); // 0xb7f TObjFunc
	ClearReplies(); // 0xb81 TObjFunc
	var_414_int = 537437; // 0xb83 PushI
	var_415_int = 39284; // 0xb84 PushI
	var_416_int = 39283; // 0xb85 PushI
	AddReply(var_414_int, var_415_int, var_416_int); // 0xb86 TObjFunc
	return 0; // 0xb88 Return
	
Label_2953:
	var_417_int = 39284; // 0xb89 PushI
	var_418_bool = var_22_int == var_417_int; // 0xb8a Eq
	if(var_418_bool == 0) goto Label_2976; // 0xb8b JumpB
	var_419_string = ""; // 0xb8c PushV
	var_419_string = "Neutral"; // 0xb8d MovS
	func_2208(var_23_int, var_419_string); // 0xb8e NEW_2
	var_420_int = 537438; // 0xb90 PushI
	SetMessage(var_420_int); // 0xb91 TObjFunc
	ClearReplies(); // 0xb93 TObjFunc
	var_421_int = 537439; // 0xb95 PushI
	var_422_int = 39286; // 0xb96 PushI
	var_423_int = 39285; // 0xb97 PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0xb98 TObjFunc
	var_424_int = 537442; // 0xb9a PushI
	var_425_int = 39289; // 0xb9b PushI
	var_426_int = 39288; // 0xb9c PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0xb9d TObjFunc
	return 0; // 0xb9f Return
	
Label_2976:
	var_427_int = 39289; // 0xba0 PushI
	var_428_bool = var_22_int == var_427_int; // 0xba1 Eq
	if(var_428_bool == 0) goto Label_2994; // 0xba2 JumpB
	var_429_string = ""; // 0xba3 PushV
	var_429_string = "Neutral"; // 0xba4 MovS
	func_2208(var_23_int, var_429_string); // 0xba5 NEW_2
	var_430_int = 537443; // 0xba7 PushI
	SetMessage(var_430_int); // 0xba8 TObjFunc
	ClearReplies(); // 0xbaa TObjFunc
	var_431_int = 537444; // 0xbac PushI
	var_432_int = 39291; // 0xbad PushI
	var_433_int = 39290; // 0xbae PushI
	AddReply(var_431_int, var_432_int, var_433_int); // 0xbaf TObjFunc
	return 0; // 0xbb1 Return
	
Label_2994:
	var_434_int = 39291; // 0xbb2 PushI
	var_435_bool = var_22_int == var_434_int; // 0xbb3 Eq
	if(var_435_bool == 0) goto Label_3012; // 0xbb4 JumpB
	var_436_string = ""; // 0xbb5 PushV
	var_436_string = "Neutral"; // 0xbb6 MovS
	func_2208(var_23_int, var_436_string); // 0xbb7 NEW_2
	var_437_int = 537445; // 0xbb9 PushI
	SetMessage(var_437_int); // 0xbba TObjFunc
	ClearReplies(); // 0xbbc TObjFunc
	var_438_int = 537446; // 0xbbe PushI
	var_439_int = -1; // 0xbbf PushI
	var_440_int = 39292; // 0xbc0 PushI
	AddReply(var_438_int, var_439_int, var_440_int); // 0xbc1 TObjFunc
	return 0; // 0xbc3 Return
	
Label_3012:
	var_441_int = 39286; // 0xbc4 PushI
	var_442_bool = var_22_int == var_441_int; // 0xbc5 Eq
	if(var_442_bool == 0) goto Label_3030; // 0xbc6 JumpB
	var_443_string = ""; // 0xbc7 PushV
	var_443_string = "Neutral"; // 0xbc8 MovS
	func_2208(var_23_int, var_443_string); // 0xbc9 NEW_2
	var_444_int = 537440; // 0xbcb PushI
	SetMessage(var_444_int); // 0xbcc TObjFunc
	ClearReplies(); // 0xbce TObjFunc
	var_445_int = 537441; // 0xbd0 PushI
	var_446_int = -1; // 0xbd1 PushI
	var_447_int = 39287; // 0xbd2 PushI
	AddReply(var_445_int, var_446_int, var_447_int); // 0xbd3 TObjFunc
	return 0; // 0xbd5 Return
	
Label_3030:
	var_448_int = 39270; // 0xbd6 PushI
	var_449_bool = var_22_int == var_448_int; // 0xbd7 Eq
	if(var_449_bool == 0) goto Label_3033; // 0xbd8 JumpB
	
Label_3033:
	var_450_int = 39272; // 0xbd9 PushI
	var_451_bool = var_22_int == var_450_int; // 0xbda Eq
	if(var_451_bool == 0) goto Label_3056; // 0xbdb JumpB
	var_452_string = ""; // 0xbdc PushV
	var_452_string = "Neutral"; // 0xbdd MovS
	func_2208(var_23_int, var_452_string); // 0xbde NEW_2
	var_453_int = 537426; // 0xbe0 PushI
	SetMessage(var_453_int); // 0xbe1 TObjFunc
	ClearReplies(); // 0xbe3 TObjFunc
	var_454_int = 537427; // 0xbe5 PushI
	var_455_int = 39274; // 0xbe6 PushI
	var_456_int = 39273; // 0xbe7 PushI
	AddReply(var_454_int, var_455_int, var_456_int); // 0xbe8 TObjFunc
	var_457_int = 537431; // 0xbea PushI
	var_458_int = -1; // 0xbeb PushI
	var_459_int = 39277; // 0xbec PushI
	AddReply(var_457_int, var_458_int, var_459_int); // 0xbed TObjFunc
	return 0; // 0xbef Return
	
Label_3056:
	var_460_int = 39274; // 0xbf0 PushI
	var_461_bool = var_22_int == var_460_int; // 0xbf1 Eq
	if(var_461_bool == 0) goto Label_3079; // 0xbf2 JumpB
	var_462_string = ""; // 0xbf3 PushV
	var_462_string = "Neutral"; // 0xbf4 MovS
	func_2208(var_23_int, var_462_string); // 0xbf5 NEW_2
	var_463_int = 537428; // 0xbf7 PushI
	SetMessage(var_463_int); // 0xbf8 TObjFunc
	ClearReplies(); // 0xbfa TObjFunc
	var_464_int = 537429; // 0xbfc PushI
	var_465_int = -1; // 0xbfd PushI
	var_466_int = 39275; // 0xbfe PushI
	AddReply(var_464_int, var_465_int, var_466_int); // 0xbff TObjFunc
	var_467_int = 537430; // 0xc01 PushI
	var_468_int = -1; // 0xc02 PushI
	var_469_int = 39276; // 0xc03 PushI
	AddReply(var_467_int, var_468_int, var_469_int); // 0xc04 TObjFunc
	return 0; // 0xc06 Return
	
Label_3079:
	var_470_int = 39247; // 0xc07 PushI
	var_471_bool = var_22_int == var_470_int; // 0xc08 Eq
	if(var_471_bool == 0) goto Label_3082; // 0xc09 JumpB
	
Label_3082:
	var_472_int = 39265; // 0xc0a PushI
	var_473_bool = var_22_int == var_472_int; // 0xc0b Eq
	if(var_473_bool == 0) goto Label_3105; // 0xc0c JumpB
	var_474_string = ""; // 0xc0d PushV
	var_474_string = "Neutral"; // 0xc0e MovS
	func_2208(var_23_int, var_474_string); // 0xc0f NEW_2
	var_475_int = 537419; // 0xc11 PushI
	SetMessage(var_475_int); // 0xc12 TObjFunc
	ClearReplies(); // 0xc14 TObjFunc
	var_476_int = 537420; // 0xc16 PushI
	var_477_int = -1; // 0xc17 PushI
	var_478_int = 39266; // 0xc18 PushI
	AddReply(var_476_int, var_477_int, var_478_int); // 0xc19 TObjFunc
	var_479_int = 537421; // 0xc1b PushI
	var_480_int = -1; // 0xc1c PushI
	var_481_int = 39267; // 0xc1d PushI
	AddReply(var_479_int, var_480_int, var_481_int); // 0xc1e TObjFunc
	return 0; // 0xc20 Return
	
Label_3105:
	var_482_int = 39249; // 0xc21 PushI
	var_483_bool = var_22_int == var_482_int; // 0xc22 Eq
	if(var_483_bool == 0) goto Label_3128; // 0xc23 JumpB
	var_484_string = ""; // 0xc24 PushV
	var_484_string = "Neutral"; // 0xc25 MovS
	func_2208(var_23_int, var_484_string); // 0xc26 NEW_2
	var_485_int = 537403; // 0xc28 PushI
	SetMessage(var_485_int); // 0xc29 TObjFunc
	ClearReplies(); // 0xc2b TObjFunc
	var_486_int = 537404; // 0xc2d PushI
	var_487_int = 39251; // 0xc2e PushI
	var_488_int = 39250; // 0xc2f PushI
	AddReply(var_486_int, var_487_int, var_488_int); // 0xc30 TObjFunc
	var_489_int = 537417; // 0xc32 PushI
	var_490_int = -1; // 0xc33 PushI
	var_491_int = 39263; // 0xc34 PushI
	AddReply(var_489_int, var_490_int, var_491_int); // 0xc35 TObjFunc
	return 0; // 0xc37 Return
	
Label_3128:
	var_492_int = 39251; // 0xc38 PushI
	var_493_bool = var_22_int == var_492_int; // 0xc39 Eq
	if(var_493_bool == 0) goto Label_3156; // 0xc3a JumpB
	var_494_string = ""; // 0xc3b PushV
	var_494_string = "Neutral"; // 0xc3c MovS
	func_2208(var_23_int, var_494_string); // 0xc3d NEW_2
	var_495_int = 537405; // 0xc3f PushI
	SetMessage(var_495_int); // 0xc40 TObjFunc
	ClearReplies(); // 0xc42 TObjFunc
	var_496_int = 537406; // 0xc44 PushI
	var_497_int = 39253; // 0xc45 PushI
	var_498_int = 39252; // 0xc46 PushI
	AddReply(var_496_int, var_497_int, var_498_int); // 0xc47 TObjFunc
	var_499_bool = 0; var_500_object = Obj(); // 0xc49 PushV
	var_500_object = var_1_bool; // 0xc4a MovT
	func_5225(var_500_object); // 0xc4b NEW_2
	if(var_499_bool == 0) goto Label_3155; // 0xc4d JumpB
	var_501_int = 537416; // 0xc4e PushI
	var_502_int = -1; // 0xc4f PushI
	var_503_int = 39262; // 0xc50 PushI
	AddReply(var_501_int, var_502_int, var_503_int); // 0xc51 TObjFunc
	
Label_3155:
	return 0; // 0xc53 Return
	
Label_3156:
	var_504_int = 39253; // 0xc54 PushI
	var_505_bool = var_22_int == var_504_int; // 0xc55 Eq
	if(var_505_bool == 0) goto Label_3179; // 0xc56 JumpB
	var_506_string = ""; // 0xc57 PushV
	var_506_string = "Neutral"; // 0xc58 MovS
	func_2208(var_23_int, var_506_string); // 0xc59 NEW_2
	var_507_int = 537407; // 0xc5b PushI
	SetMessage(var_507_int); // 0xc5c TObjFunc
	ClearReplies(); // 0xc5e TObjFunc
	var_508_int = 537408; // 0xc60 PushI
	var_509_int = 39255; // 0xc61 PushI
	var_510_int = 39254; // 0xc62 PushI
	AddReply(var_508_int, var_509_int, var_510_int); // 0xc63 TObjFunc
	var_511_int = 537415; // 0xc65 PushI
	var_512_int = -1; // 0xc66 PushI
	var_513_int = 39261; // 0xc67 PushI
	AddReply(var_511_int, var_512_int, var_513_int); // 0xc68 TObjFunc
	return 0; // 0xc6a Return
	
Label_3179:
	var_514_int = 39255; // 0xc6b PushI
	var_515_bool = var_22_int == var_514_int; // 0xc6c Eq
	if(var_515_bool == 0) goto Label_3202; // 0xc6d JumpB
	var_516_string = ""; // 0xc6e PushV
	var_516_string = "Neutral"; // 0xc6f MovS
	func_2208(var_23_int, var_516_string); // 0xc70 NEW_2
	var_517_int = 537409; // 0xc72 PushI
	SetMessage(var_517_int); // 0xc73 TObjFunc
	ClearReplies(); // 0xc75 TObjFunc
	var_518_int = 537410; // 0xc77 PushI
	var_519_int = 39257; // 0xc78 PushI
	var_520_int = 39256; // 0xc79 PushI
	AddReply(var_518_int, var_519_int, var_520_int); // 0xc7a TObjFunc
	var_521_int = 537414; // 0xc7c PushI
	var_522_int = -1; // 0xc7d PushI
	var_523_int = 39260; // 0xc7e PushI
	AddReply(var_521_int, var_522_int, var_523_int); // 0xc7f TObjFunc
	return 0; // 0xc81 Return
	
Label_3202:
	var_524_int = 39257; // 0xc82 PushI
	var_525_bool = var_22_int == var_524_int; // 0xc83 Eq
	if(var_525_bool == 0) goto Label_3225; // 0xc84 JumpB
	var_526_string = ""; // 0xc85 PushV
	var_526_string = "Neutral"; // 0xc86 MovS
	func_2208(var_23_int, var_526_string); // 0xc87 NEW_2
	var_527_int = 537411; // 0xc89 PushI
	SetMessage(var_527_int); // 0xc8a TObjFunc
	ClearReplies(); // 0xc8c TObjFunc
	var_528_int = 537412; // 0xc8e PushI
	var_529_int = -1; // 0xc8f PushI
	var_530_int = 39258; // 0xc90 PushI
	AddReply(var_528_int, var_529_int, var_530_int); // 0xc91 TObjFunc
	var_531_int = 537413; // 0xc93 PushI
	var_532_int = -1; // 0xc94 PushI
	var_533_int = 39259; // 0xc95 PushI
	AddReply(var_531_int, var_532_int, var_533_int); // 0xc96 TObjFunc
	return 0; // 0xc98 Return
	
Label_3225:
	var_534_int = 39237; // 0xc99 PushI
	var_535_bool = var_22_int == var_534_int; // 0xc9a Eq
	if(var_535_bool == 0) goto Label_3228; // 0xc9b JumpB
	
Label_3228:
	var_536_int = 39244; // 0xc9c PushI
	var_537_bool = var_22_int == var_536_int; // 0xc9d Eq
	if(var_537_bool == 0) goto Label_3246; // 0xc9e JumpB
	var_538_string = ""; // 0xc9f PushV
	var_538_string = "Neutral"; // 0xca0 MovS
	func_2208(var_23_int, var_538_string); // 0xca1 NEW_2
	var_539_int = 537398; // 0xca3 PushI
	SetMessage(var_539_int); // 0xca4 TObjFunc
	ClearReplies(); // 0xca6 TObjFunc
	var_540_int = 537399; // 0xca8 PushI
	var_541_int = -1; // 0xca9 PushI
	var_542_int = 39245; // 0xcaa PushI
	AddReply(var_540_int, var_541_int, var_542_int); // 0xcab TObjFunc
	return 0; // 0xcad Return
	
Label_3246:
	var_543_int = 39239; // 0xcae PushI
	var_544_bool = var_22_int == var_543_int; // 0xcaf Eq
	if(var_544_bool == 0) goto Label_3264; // 0xcb0 JumpB
	var_545_string = ""; // 0xcb1 PushV
	var_545_string = "Neutral"; // 0xcb2 MovS
	func_2208(var_23_int, var_545_string); // 0xcb3 NEW_2
	var_546_int = 537393; // 0xcb5 PushI
	SetMessage(var_546_int); // 0xcb6 TObjFunc
	ClearReplies(); // 0xcb8 TObjFunc
	var_547_int = 537394; // 0xcba PushI
	var_548_int = 39241; // 0xcbb PushI
	var_549_int = 39240; // 0xcbc PushI
	AddReply(var_547_int, var_548_int, var_549_int); // 0xcbd TObjFunc
	return 0; // 0xcbf Return
	
Label_3264:
	var_550_int = 39241; // 0xcc0 PushI
	var_551_bool = var_22_int == var_550_int; // 0xcc1 Eq
	if(var_551_bool == 0) goto Label_3282; // 0xcc2 JumpB
	var_552_string = ""; // 0xcc3 PushV
	var_552_string = "Neutral"; // 0xcc4 MovS
	func_2208(var_23_int, var_552_string); // 0xcc5 NEW_2
	var_553_int = 537395; // 0xcc7 PushI
	SetMessage(var_553_int); // 0xcc8 TObjFunc
	ClearReplies(); // 0xcca TObjFunc
	var_554_int = 537396; // 0xccc PushI
	var_555_int = -1; // 0xccd PushI
	var_556_int = 39242; // 0xcce PushI
	AddReply(var_554_int, var_555_int, var_556_int); // 0xccf TObjFunc
	return 0; // 0xcd1 Return
	
Label_3282:
	var_557_int = 39227; // 0xcd2 PushI
	var_558_bool = var_22_int == var_557_int; // 0xcd3 Eq
	if(var_558_bool == 0) goto Label_3310; // 0xcd4 JumpB
	var_559_string = ""; // 0xcd5 PushV
	var_559_string = "Neutral"; // 0xcd6 MovS
	func_2208(var_23_int, var_559_string); // 0xcd7 NEW_2
	var_560_int = 537381; // 0xcd9 PushI
	SetMessage(var_560_int); // 0xcda TObjFunc
	ClearReplies(); // 0xcdc TObjFunc
	var_561_int = 537382; // 0xcde PushI
	var_562_int = 39229; // 0xcdf PushI
	var_563_int = 39228; // 0xce0 PushI
	AddReply(var_561_int, var_562_int, var_563_int); // 0xce1 TObjFunc
	var_564_int = 537386; // 0xce3 PushI
	var_565_int = 39233; // 0xce4 PushI
	var_566_int = 39232; // 0xce5 PushI
	AddReply(var_564_int, var_565_int, var_566_int); // 0xce6 TObjFunc
	var_567_int = 537389; // 0xce8 PushI
	var_568_int = -1; // 0xce9 PushI
	var_569_int = 39235; // 0xcea PushI
	AddReply(var_567_int, var_568_int, var_569_int); // 0xceb TObjFunc
	return 0; // 0xced Return
	
Label_3310:
	var_570_int = 39233; // 0xcee PushI
	var_571_bool = var_22_int == var_570_int; // 0xcef Eq
	if(var_571_bool == 0) goto Label_3328; // 0xcf0 JumpB
	var_572_string = ""; // 0xcf1 PushV
	var_572_string = "Neutral"; // 0xcf2 MovS
	func_2208(var_23_int, var_572_string); // 0xcf3 NEW_2
	var_573_int = 537387; // 0xcf5 PushI
	SetMessage(var_573_int); // 0xcf6 TObjFunc
	ClearReplies(); // 0xcf8 TObjFunc
	var_574_int = 537388; // 0xcfa PushI
	var_575_int = -1; // 0xcfb PushI
	var_576_int = 39234; // 0xcfc PushI
	AddReply(var_574_int, var_575_int, var_576_int); // 0xcfd TObjFunc
	return 0; // 0xcff Return
	
Label_3328:
	var_577_int = 39229; // 0xd00 PushI
	var_578_bool = var_22_int == var_577_int; // 0xd01 Eq
	if(var_578_bool == 0) goto Label_3351; // 0xd02 JumpB
	var_579_string = ""; // 0xd03 PushV
	var_579_string = "Neutral"; // 0xd04 MovS
	func_2208(var_23_int, var_579_string); // 0xd05 NEW_2
	var_580_int = 537383; // 0xd07 PushI
	SetMessage(var_580_int); // 0xd08 TObjFunc
	ClearReplies(); // 0xd0a TObjFunc
	var_581_int = 537384; // 0xd0c PushI
	var_582_int = -1; // 0xd0d PushI
	var_583_int = 39230; // 0xd0e PushI
	AddReply(var_581_int, var_582_int, var_583_int); // 0xd0f TObjFunc
	var_584_int = 537385; // 0xd11 PushI
	var_585_int = -1; // 0xd12 PushI
	var_586_int = 39231; // 0xd13 PushI
	AddReply(var_584_int, var_585_int, var_586_int); // 0xd14 TObjFunc
	return 0; // 0xd16 Return
	
Label_3351:
	var_587_int = 39206; // 0xd17 PushI
	var_588_bool = var_22_int == var_587_int; // 0xd18 Eq
	if(var_588_bool == 0) goto Label_3354; // 0xd19 JumpB
	
Label_3354:
	var_589_int = 39223; // 0xd1a PushI
	var_590_bool = var_22_int == var_589_int; // 0xd1b Eq
	if(var_590_bool == 0) goto Label_3372; // 0xd1c JumpB
	var_591_string = ""; // 0xd1d PushV
	var_591_string = "Neutral"; // 0xd1e MovS
	func_2208(var_23_int, var_591_string); // 0xd1f NEW_2
	var_592_int = 537377; // 0xd21 PushI
	SetMessage(var_592_int); // 0xd22 TObjFunc
	ClearReplies(); // 0xd24 TObjFunc
	var_593_int = 537378; // 0xd26 PushI
	var_594_int = -1; // 0xd27 PushI
	var_595_int = 39224; // 0xd28 PushI
	AddReply(var_593_int, var_594_int, var_595_int); // 0xd29 TObjFunc
	return 0; // 0xd2b Return
	
Label_3372:
	var_596_int = 39208; // 0xd2c PushI
	var_597_bool = var_22_int == var_596_int; // 0xd2d Eq
	if(var_597_bool == 0) goto Label_3395; // 0xd2e JumpB
	var_598_string = ""; // 0xd2f PushV
	var_598_string = "Neutral"; // 0xd30 MovS
	func_2208(var_23_int, var_598_string); // 0xd31 NEW_2
	var_599_int = 537362; // 0xd33 PushI
	SetMessage(var_599_int); // 0xd34 TObjFunc
	ClearReplies(); // 0xd36 TObjFunc
	var_600_int = 537363; // 0xd38 PushI
	var_601_int = 39210; // 0xd39 PushI
	var_602_int = 39209; // 0xd3a PushI
	AddReply(var_600_int, var_601_int, var_602_int); // 0xd3b TObjFunc
	var_603_int = 537369; // 0xd3d PushI
	var_604_int = 39216; // 0xd3e PushI
	var_605_int = 39215; // 0xd3f PushI
	AddReply(var_603_int, var_604_int, var_605_int); // 0xd40 TObjFunc
	return 0; // 0xd42 Return
	
Label_3395:
	var_606_int = 39216; // 0xd43 PushI
	var_607_bool = var_22_int == var_606_int; // 0xd44 Eq
	if(var_607_bool == 0) goto Label_3418; // 0xd45 JumpB
	var_608_string = ""; // 0xd46 PushV
	var_608_string = "Neutral"; // 0xd47 MovS
	func_2208(var_23_int, var_608_string); // 0xd48 NEW_2
	var_609_int = 537370; // 0xd4a PushI
	SetMessage(var_609_int); // 0xd4b TObjFunc
	ClearReplies(); // 0xd4d TObjFunc
	var_610_int = 537371; // 0xd4f PushI
	var_611_int = 39218; // 0xd50 PushI
	var_612_int = 39217; // 0xd51 PushI
	AddReply(var_610_int, var_611_int, var_612_int); // 0xd52 TObjFunc
	var_613_int = 537375; // 0xd54 PushI
	var_614_int = -1; // 0xd55 PushI
	var_615_int = 39221; // 0xd56 PushI
	AddReply(var_613_int, var_614_int, var_615_int); // 0xd57 TObjFunc
	return 0; // 0xd59 Return
	
Label_3418:
	var_616_int = 39218; // 0xd5a PushI
	var_617_bool = var_22_int == var_616_int; // 0xd5b Eq
	if(var_617_bool == 0) goto Label_3441; // 0xd5c JumpB
	var_618_string = ""; // 0xd5d PushV
	var_618_string = "Neutral"; // 0xd5e MovS
	func_2208(var_23_int, var_618_string); // 0xd5f NEW_2
	var_619_int = 537372; // 0xd61 PushI
	SetMessage(var_619_int); // 0xd62 TObjFunc
	ClearReplies(); // 0xd64 TObjFunc
	var_620_int = 537373; // 0xd66 PushI
	var_621_int = -1; // 0xd67 PushI
	var_622_int = 39219; // 0xd68 PushI
	AddReply(var_620_int, var_621_int, var_622_int); // 0xd69 TObjFunc
	var_623_int = 537374; // 0xd6b PushI
	var_624_int = -1; // 0xd6c PushI
	var_625_int = 39220; // 0xd6d PushI
	AddReply(var_623_int, var_624_int, var_625_int); // 0xd6e TObjFunc
	return 0; // 0xd70 Return
	
Label_3441:
	var_626_int = 39210; // 0xd71 PushI
	var_627_bool = var_22_int == var_626_int; // 0xd72 Eq
	if(var_627_bool == 0) goto Label_3459; // 0xd73 JumpB
	var_628_string = ""; // 0xd74 PushV
	var_628_string = "Neutral"; // 0xd75 MovS
	func_2208(var_23_int, var_628_string); // 0xd76 NEW_2
	var_629_int = 537364; // 0xd78 PushI
	SetMessage(var_629_int); // 0xd79 TObjFunc
	ClearReplies(); // 0xd7b TObjFunc
	var_630_int = 537365; // 0xd7d PushI
	var_631_int = 39212; // 0xd7e PushI
	var_632_int = 39211; // 0xd7f PushI
	AddReply(var_630_int, var_631_int, var_632_int); // 0xd80 TObjFunc
	return 0; // 0xd82 Return
	
Label_3459:
	var_633_int = 39212; // 0xd83 PushI
	var_634_bool = var_22_int == var_633_int; // 0xd84 Eq
	if(var_634_bool == 0) goto Label_3482; // 0xd85 JumpB
	var_635_string = ""; // 0xd86 PushV
	var_635_string = "Neutral"; // 0xd87 MovS
	func_2208(var_23_int, var_635_string); // 0xd88 NEW_2
	var_636_int = 537366; // 0xd8a PushI
	SetMessage(var_636_int); // 0xd8b TObjFunc
	ClearReplies(); // 0xd8d TObjFunc
	var_637_int = 537367; // 0xd8f PushI
	var_638_int = -1; // 0xd90 PushI
	var_639_int = 39213; // 0xd91 PushI
	AddReply(var_637_int, var_638_int, var_639_int); // 0xd92 TObjFunc
	var_640_int = 537368; // 0xd94 PushI
	var_641_int = -1; // 0xd95 PushI
	var_642_int = 39214; // 0xd96 PushI
	AddReply(var_640_int, var_641_int, var_642_int); // 0xd97 TObjFunc
	return 0; // 0xd99 Return
	
Label_3482:
	var_643_int = 39199; // 0xd9a PushI
	var_644_bool = var_22_int == var_643_int; // 0xd9b Eq
	if(var_644_bool == 0) goto Label_3505; // 0xd9c JumpB
	var_645_string = ""; // 0xd9d PushV
	var_645_string = "Neutral"; // 0xd9e MovS
	func_2208(var_23_int, var_645_string); // 0xd9f NEW_2
	var_646_int = 537353; // 0xda1 PushI
	SetMessage(var_646_int); // 0xda2 TObjFunc
	ClearReplies(); // 0xda4 TObjFunc
	var_647_int = 537354; // 0xda6 PushI
	var_648_int = 39201; // 0xda7 PushI
	var_649_int = 39200; // 0xda8 PushI
	AddReply(var_647_int, var_648_int, var_649_int); // 0xda9 TObjFunc
	var_650_int = 537358; // 0xdab PushI
	var_651_int = -1; // 0xdac PushI
	var_652_int = 39204; // 0xdad PushI
	AddReply(var_650_int, var_651_int, var_652_int); // 0xdae TObjFunc
	return 0; // 0xdb0 Return
	
Label_3505:
	var_653_int = 39201; // 0xdb1 PushI
	var_654_bool = var_22_int == var_653_int; // 0xdb2 Eq
	if(var_654_bool == 0) goto Label_3528; // 0xdb3 JumpB
	var_655_string = ""; // 0xdb4 PushV
	var_655_string = "Neutral"; // 0xdb5 MovS
	func_2208(var_23_int, var_655_string); // 0xdb6 NEW_2
	var_656_int = 537355; // 0xdb8 PushI
	SetMessage(var_656_int); // 0xdb9 TObjFunc
	ClearReplies(); // 0xdbb TObjFunc
	var_657_int = 537356; // 0xdbd PushI
	var_658_int = -1; // 0xdbe PushI
	var_659_int = 39202; // 0xdbf PushI
	AddReply(var_657_int, var_658_int, var_659_int); // 0xdc0 TObjFunc
	var_660_int = 537357; // 0xdc2 PushI
	var_661_int = -1; // 0xdc3 PushI
	var_662_int = 39203; // 0xdc4 PushI
	AddReply(var_660_int, var_661_int, var_662_int); // 0xdc5 TObjFunc
	return 0; // 0xdc7 Return
	
Label_3528:
	var_663_int = 39176; // 0xdc8 PushI
	var_664_bool = var_22_int == var_663_int; // 0xdc9 Eq
	if(var_664_bool == 0) goto Label_3531; // 0xdca JumpB
	
Label_3531:
	var_665_int = 39188; // 0xdcb PushI
	var_666_bool = var_22_int == var_665_int; // 0xdcc Eq
	if(var_666_bool == 0) goto Label_3554; // 0xdcd JumpB
	var_667_string = ""; // 0xdce PushV
	var_667_string = "Neutral"; // 0xdcf MovS
	func_2208(var_23_int, var_667_string); // 0xdd0 NEW_2
	var_668_int = 537342; // 0xdd2 PushI
	SetMessage(var_668_int); // 0xdd3 TObjFunc
	ClearReplies(); // 0xdd5 TObjFunc
	var_669_int = 537343; // 0xdd7 PushI
	var_670_int = 39190; // 0xdd8 PushI
	var_671_int = 39189; // 0xdd9 PushI
	AddReply(var_669_int, var_670_int, var_671_int); // 0xdda TObjFunc
	var_672_int = 537349; // 0xddc PushI
	var_673_int = -1; // 0xddd PushI
	var_674_int = 39195; // 0xdde PushI
	AddReply(var_672_int, var_673_int, var_674_int); // 0xddf TObjFunc
	return 0; // 0xde1 Return
	
Label_3554:
	var_675_int = 39190; // 0xde2 PushI
	var_676_bool = var_22_int == var_675_int; // 0xde3 Eq
	if(var_676_bool == 0) goto Label_3577; // 0xde4 JumpB
	var_677_string = ""; // 0xde5 PushV
	var_677_string = "Neutral"; // 0xde6 MovS
	func_2208(var_23_int, var_677_string); // 0xde7 NEW_2
	var_678_int = 537344; // 0xde9 PushI
	SetMessage(var_678_int); // 0xdea TObjFunc
	ClearReplies(); // 0xdec TObjFunc
	var_679_int = 537345; // 0xdee PushI
	var_680_int = 39192; // 0xdef PushI
	var_681_int = 39191; // 0xdf0 PushI
	AddReply(var_679_int, var_680_int, var_681_int); // 0xdf1 TObjFunc
	var_682_int = 537348; // 0xdf3 PushI
	var_683_int = -1; // 0xdf4 PushI
	var_684_int = 39194; // 0xdf5 PushI
	AddReply(var_682_int, var_683_int, var_684_int); // 0xdf6 TObjFunc
	return 0; // 0xdf8 Return
	
Label_3577:
	var_685_int = 39192; // 0xdf9 PushI
	var_686_bool = var_22_int == var_685_int; // 0xdfa Eq
	if(var_686_bool == 0) goto Label_3595; // 0xdfb JumpB
	var_687_string = ""; // 0xdfc PushV
	var_687_string = "Neutral"; // 0xdfd MovS
	func_2208(var_23_int, var_687_string); // 0xdfe NEW_2
	var_688_int = 537346; // 0xe00 PushI
	SetMessage(var_688_int); // 0xe01 TObjFunc
	ClearReplies(); // 0xe03 TObjFunc
	var_689_int = 537347; // 0xe05 PushI
	var_690_int = -1; // 0xe06 PushI
	var_691_int = 39193; // 0xe07 PushI
	AddReply(var_689_int, var_690_int, var_691_int); // 0xe08 TObjFunc
	return 0; // 0xe0a Return
	
Label_3595:
	var_692_int = 39178; // 0xe0b PushI
	var_693_bool = var_22_int == var_692_int; // 0xe0c Eq
	if(var_693_bool == 0) goto Label_3618; // 0xe0d JumpB
	var_694_string = ""; // 0xe0e PushV
	var_694_string = "Neutral"; // 0xe0f MovS
	func_2208(var_23_int, var_694_string); // 0xe10 NEW_2
	var_695_int = 537332; // 0xe12 PushI
	SetMessage(var_695_int); // 0xe13 TObjFunc
	ClearReplies(); // 0xe15 TObjFunc
	var_696_int = 537333; // 0xe17 PushI
	var_697_int = 39180; // 0xe18 PushI
	var_698_int = 39179; // 0xe19 PushI
	AddReply(var_696_int, var_697_int, var_698_int); // 0xe1a TObjFunc
	var_699_int = 537336; // 0xe1c PushI
	var_700_int = 39183; // 0xe1d PushI
	var_701_int = 39182; // 0xe1e PushI
	AddReply(var_699_int, var_700_int, var_701_int); // 0xe1f TObjFunc
	return 0; // 0xe21 Return
	
Label_3618:
	var_702_int = 39183; // 0xe22 PushI
	var_703_bool = var_22_int == var_702_int; // 0xe23 Eq
	if(var_703_bool == 0) goto Label_3636; // 0xe24 JumpB
	var_704_string = ""; // 0xe25 PushV
	var_704_string = "Neutral"; // 0xe26 MovS
	func_2208(var_23_int, var_704_string); // 0xe27 NEW_2
	var_705_int = 537337; // 0xe29 PushI
	SetMessage(var_705_int); // 0xe2a TObjFunc
	ClearReplies(); // 0xe2c TObjFunc
	var_706_int = 537338; // 0xe2e PushI
	var_707_int = 39185; // 0xe2f PushI
	var_708_int = 39184; // 0xe30 PushI
	AddReply(var_706_int, var_707_int, var_708_int); // 0xe31 TObjFunc
	return 0; // 0xe33 Return
	
Label_3636:
	var_709_int = 39185; // 0xe34 PushI
	var_710_bool = var_22_int == var_709_int; // 0xe35 Eq
	if(var_710_bool == 0) goto Label_3654; // 0xe36 JumpB
	var_711_string = ""; // 0xe37 PushV
	var_711_string = "Neutral"; // 0xe38 MovS
	func_2208(var_23_int, var_711_string); // 0xe39 NEW_2
	var_712_int = 537339; // 0xe3b PushI
	SetMessage(var_712_int); // 0xe3c TObjFunc
	ClearReplies(); // 0xe3e TObjFunc
	var_713_int = 537340; // 0xe40 PushI
	var_714_int = 43752; // 0xe41 PushI
	var_715_int = 39186; // 0xe42 PushI
	AddReply(var_713_int, var_714_int, var_715_int); // 0xe43 TObjFunc
	return 0; // 0xe45 Return
	
Label_3654:
	var_716_int = 43752; // 0xe46 PushI
	var_717_bool = var_22_int == var_716_int; // 0xe47 Eq
	if(var_717_bool == 0) goto Label_3672; // 0xe48 JumpB
	var_718_string = ""; // 0xe49 PushV
	var_718_string = "Neutral"; // 0xe4a MovS
	func_2208(var_23_int, var_718_string); // 0xe4b NEW_2
	var_719_int = 541583; // 0xe4d PushI
	SetMessage(var_719_int); // 0xe4e TObjFunc
	ClearReplies(); // 0xe50 TObjFunc
	var_720_int = 541584; // 0xe52 PushI
	var_721_int = -1; // 0xe53 PushI
	var_722_int = 43753; // 0xe54 PushI
	AddReply(var_720_int, var_721_int, var_722_int); // 0xe55 TObjFunc
	return 0; // 0xe57 Return
	
Label_3672:
	var_723_int = 39180; // 0xe58 PushI
	var_724_bool = var_22_int == var_723_int; // 0xe59 Eq
	if(var_724_bool == 0) goto Label_3690; // 0xe5a JumpB
	var_725_string = ""; // 0xe5b PushV
	var_725_string = "Neutral"; // 0xe5c MovS
	func_2208(var_23_int, var_725_string); // 0xe5d NEW_2
	var_726_int = 537334; // 0xe5f PushI
	SetMessage(var_726_int); // 0xe60 TObjFunc
	ClearReplies(); // 0xe62 TObjFunc
	var_727_int = 537335; // 0xe64 PushI
	var_728_int = -1; // 0xe65 PushI
	var_729_int = 39181; // 0xe66 PushI
	AddReply(var_727_int, var_728_int, var_729_int); // 0xe67 TObjFunc
	return 0; // 0xe69 Return
	
Label_3690:
	var_730_int = 39122; // 0xe6a PushI
	var_731_bool = var_22_int == var_730_int; // 0xe6b Eq
	if(var_731_bool == 0) goto Label_3693; // 0xe6c JumpB
	
Label_3693:
	var_732_int = 39151; // 0xe6d PushI
	var_733_bool = var_22_int == var_732_int; // 0xe6e Eq
	if(var_733_bool == 0) goto Label_3716; // 0xe6f JumpB
	var_734_string = ""; // 0xe70 PushV
	var_734_string = "Neutral"; // 0xe71 MovS
	func_2208(var_23_int, var_734_string); // 0xe72 NEW_2
	var_735_int = 537305; // 0xe74 PushI
	SetMessage(var_735_int); // 0xe75 TObjFunc
	ClearReplies(); // 0xe77 TObjFunc
	var_736_int = 537306; // 0xe79 PushI
	var_737_int = 39153; // 0xe7a PushI
	var_738_int = 39152; // 0xe7b PushI
	AddReply(var_736_int, var_737_int, var_738_int); // 0xe7c TObjFunc
	var_739_int = 537318; // 0xe7e PushI
	var_740_int = 39165; // 0xe7f PushI
	var_741_int = 39164; // 0xe80 PushI
	AddReply(var_739_int, var_740_int, var_741_int); // 0xe81 TObjFunc
	return 0; // 0xe83 Return
	
Label_3716:
	var_742_int = 39165; // 0xe84 PushI
	var_743_bool = var_22_int == var_742_int; // 0xe85 Eq
	if(var_743_bool == 0) goto Label_3739; // 0xe86 JumpB
	var_744_string = ""; // 0xe87 PushV
	var_744_string = "Neutral"; // 0xe88 MovS
	func_2208(var_23_int, var_744_string); // 0xe89 NEW_2
	var_745_int = 537319; // 0xe8b PushI
	SetMessage(var_745_int); // 0xe8c TObjFunc
	ClearReplies(); // 0xe8e TObjFunc
	var_746_int = 537320; // 0xe90 PushI
	var_747_int = -1; // 0xe91 PushI
	var_748_int = 39166; // 0xe92 PushI
	AddReply(var_746_int, var_747_int, var_748_int); // 0xe93 TObjFunc
	var_749_int = 537321; // 0xe95 PushI
	var_750_int = 39168; // 0xe96 PushI
	var_751_int = 39167; // 0xe97 PushI
	AddReply(var_749_int, var_750_int, var_751_int); // 0xe98 TObjFunc
	return 0; // 0xe9a Return
	
Label_3739:
	var_752_int = 39168; // 0xe9b PushI
	var_753_bool = var_22_int == var_752_int; // 0xe9c Eq
	if(var_753_bool == 0) goto Label_3762; // 0xe9d JumpB
	var_754_string = ""; // 0xe9e PushV
	var_754_string = "Neutral"; // 0xe9f MovS
	func_2208(var_23_int, var_754_string); // 0xea0 NEW_2
	var_755_int = 537322; // 0xea2 PushI
	SetMessage(var_755_int); // 0xea3 TObjFunc
	ClearReplies(); // 0xea5 TObjFunc
	var_756_int = 537323; // 0xea7 PushI
	var_757_int = -1; // 0xea8 PushI
	var_758_int = 39169; // 0xea9 PushI
	AddReply(var_756_int, var_757_int, var_758_int); // 0xeaa TObjFunc
	var_759_int = 537324; // 0xeac PushI
	var_760_int = 39171; // 0xead PushI
	var_761_int = 39170; // 0xeae PushI
	AddReply(var_759_int, var_760_int, var_761_int); // 0xeaf TObjFunc
	return 0; // 0xeb1 Return
	
Label_3762:
	var_762_int = 39171; // 0xeb2 PushI
	var_763_bool = var_22_int == var_762_int; // 0xeb3 Eq
	if(var_763_bool == 0) goto Label_3780; // 0xeb4 JumpB
	var_764_string = ""; // 0xeb5 PushV
	var_764_string = "Neutral"; // 0xeb6 MovS
	func_2208(var_23_int, var_764_string); // 0xeb7 NEW_2
	var_765_int = 537325; // 0xeb9 PushI
	SetMessage(var_765_int); // 0xeba TObjFunc
	ClearReplies(); // 0xebc TObjFunc
	var_766_int = 537326; // 0xebe PushI
	var_767_int = -1; // 0xebf PushI
	var_768_int = 39172; // 0xec0 PushI
	AddReply(var_766_int, var_767_int, var_768_int); // 0xec1 TObjFunc
	return 0; // 0xec3 Return
	
Label_3780:
	var_769_int = 39153; // 0xec4 PushI
	var_770_bool = var_22_int == var_769_int; // 0xec5 Eq
	if(var_770_bool == 0) goto Label_3803; // 0xec6 JumpB
	var_771_string = ""; // 0xec7 PushV
	var_771_string = "Neutral"; // 0xec8 MovS
	func_2208(var_23_int, var_771_string); // 0xec9 NEW_2
	var_772_int = 537307; // 0xecb PushI
	SetMessage(var_772_int); // 0xecc TObjFunc
	ClearReplies(); // 0xece TObjFunc
	var_773_int = 537308; // 0xed0 PushI
	var_774_int = 39155; // 0xed1 PushI
	var_775_int = 39154; // 0xed2 PushI
	AddReply(var_773_int, var_774_int, var_775_int); // 0xed3 TObjFunc
	var_776_int = 537317; // 0xed5 PushI
	var_777_int = -1; // 0xed6 PushI
	var_778_int = 39163; // 0xed7 PushI
	AddReply(var_776_int, var_777_int, var_778_int); // 0xed8 TObjFunc
	return 0; // 0xeda Return
	
Label_3803:
	var_779_int = 39155; // 0xedb PushI
	var_780_bool = var_22_int == var_779_int; // 0xedc Eq
	if(var_780_bool == 0) goto Label_3826; // 0xedd JumpB
	var_781_string = ""; // 0xede PushV
	var_781_string = "Neutral"; // 0xedf MovS
	func_2208(var_23_int, var_781_string); // 0xee0 NEW_2
	var_782_int = 537309; // 0xee2 PushI
	SetMessage(var_782_int); // 0xee3 TObjFunc
	ClearReplies(); // 0xee5 TObjFunc
	var_783_int = 537310; // 0xee7 PushI
	var_784_int = 39157; // 0xee8 PushI
	var_785_int = 39156; // 0xee9 PushI
	AddReply(var_783_int, var_784_int, var_785_int); // 0xeea TObjFunc
	var_786_int = 537313; // 0xeec PushI
	var_787_int = 39160; // 0xeed PushI
	var_788_int = 39159; // 0xeee PushI
	AddReply(var_786_int, var_787_int, var_788_int); // 0xeef TObjFunc
	return 0; // 0xef1 Return
	
Label_3826:
	var_789_int = 39160; // 0xef2 PushI
	var_790_bool = var_22_int == var_789_int; // 0xef3 Eq
	if(var_790_bool == 0) goto Label_3849; // 0xef4 JumpB
	var_791_string = ""; // 0xef5 PushV
	var_791_string = "Neutral"; // 0xef6 MovS
	func_2208(var_23_int, var_791_string); // 0xef7 NEW_2
	var_792_int = 537314; // 0xef9 PushI
	SetMessage(var_792_int); // 0xefa TObjFunc
	ClearReplies(); // 0xefc TObjFunc
	var_793_int = 537315; // 0xefe PushI
	var_794_int = -1; // 0xeff PushI
	var_795_int = 39161; // 0xf00 PushI
	AddReply(var_793_int, var_794_int, var_795_int); // 0xf01 TObjFunc
	var_796_int = 537316; // 0xf03 PushI
	var_797_int = -1; // 0xf04 PushI
	var_798_int = 39162; // 0xf05 PushI
	AddReply(var_796_int, var_797_int, var_798_int); // 0xf06 TObjFunc
	return 0; // 0xf08 Return
	
Label_3849:
	var_799_int = 39157; // 0xf09 PushI
	var_800_bool = var_22_int == var_799_int; // 0xf0a Eq
	if(var_800_bool == 0) goto Label_3867; // 0xf0b JumpB
	var_801_string = ""; // 0xf0c PushV
	var_801_string = "Neutral"; // 0xf0d MovS
	func_2208(var_23_int, var_801_string); // 0xf0e NEW_2
	var_802_int = 537311; // 0xf10 PushI
	SetMessage(var_802_int); // 0xf11 TObjFunc
	ClearReplies(); // 0xf13 TObjFunc
	var_803_int = 537312; // 0xf15 PushI
	var_804_int = -1; // 0xf16 PushI
	var_805_int = 39158; // 0xf17 PushI
	AddReply(var_803_int, var_804_int, var_805_int); // 0xf18 TObjFunc
	return 0; // 0xf1a Return
	
Label_3867:
	var_806_int = 39140; // 0xf1b PushI
	var_807_bool = var_22_int == var_806_int; // 0xf1c Eq
	if(var_807_bool == 0) goto Label_3890; // 0xf1d JumpB
	var_808_string = ""; // 0xf1e PushV
	var_808_string = "Neutral"; // 0xf1f MovS
	func_2208(var_23_int, var_808_string); // 0xf20 NEW_2
	var_809_int = 537294; // 0xf22 PushI
	SetMessage(var_809_int); // 0xf23 TObjFunc
	ClearReplies(); // 0xf25 TObjFunc
	var_810_int = 537295; // 0xf27 PushI
	var_811_int = 39142; // 0xf28 PushI
	var_812_int = 39141; // 0xf29 PushI
	AddReply(var_810_int, var_811_int, var_812_int); // 0xf2a TObjFunc
	var_813_int = 537301; // 0xf2c PushI
	var_814_int = 39148; // 0xf2d PushI
	var_815_int = 39147; // 0xf2e PushI
	AddReply(var_813_int, var_814_int, var_815_int); // 0xf2f TObjFunc
	return 0; // 0xf31 Return
	
Label_3890:
	var_816_int = 39148; // 0xf32 PushI
	var_817_bool = var_22_int == var_816_int; // 0xf33 Eq
	if(var_817_bool == 0) goto Label_3908; // 0xf34 JumpB
	var_818_string = ""; // 0xf35 PushV
	var_818_string = "Neutral"; // 0xf36 MovS
	func_2208(var_23_int, var_818_string); // 0xf37 NEW_2
	var_819_int = 537302; // 0xf39 PushI
	SetMessage(var_819_int); // 0xf3a TObjFunc
	ClearReplies(); // 0xf3c TObjFunc
	var_820_int = 537303; // 0xf3e PushI
	var_821_int = -1; // 0xf3f PushI
	var_822_int = 39149; // 0xf40 PushI
	AddReply(var_820_int, var_821_int, var_822_int); // 0xf41 TObjFunc
	return 0; // 0xf43 Return
	
Label_3908:
	var_823_int = 39142; // 0xf44 PushI
	var_824_bool = var_22_int == var_823_int; // 0xf45 Eq
	if(var_824_bool == 0) goto Label_3926; // 0xf46 JumpB
	var_825_string = ""; // 0xf47 PushV
	var_825_string = "Neutral"; // 0xf48 MovS
	func_2208(var_23_int, var_825_string); // 0xf49 NEW_2
	var_826_int = 537296; // 0xf4b PushI
	SetMessage(var_826_int); // 0xf4c TObjFunc
	ClearReplies(); // 0xf4e TObjFunc
	var_827_int = 537297; // 0xf50 PushI
	var_828_int = 39144; // 0xf51 PushI
	var_829_int = 39143; // 0xf52 PushI
	AddReply(var_827_int, var_828_int, var_829_int); // 0xf53 TObjFunc
	return 0; // 0xf55 Return
	
Label_3926:
	var_830_int = 39144; // 0xf56 PushI
	var_831_bool = var_22_int == var_830_int; // 0xf57 Eq
	if(var_831_bool == 0) goto Label_3949; // 0xf58 JumpB
	var_832_string = ""; // 0xf59 PushV
	var_832_string = "Neutral"; // 0xf5a MovS
	func_2208(var_23_int, var_832_string); // 0xf5b NEW_2
	var_833_int = 537298; // 0xf5d PushI
	SetMessage(var_833_int); // 0xf5e TObjFunc
	ClearReplies(); // 0xf60 TObjFunc
	var_834_int = 537299; // 0xf62 PushI
	var_835_int = -1; // 0xf63 PushI
	var_836_int = 39145; // 0xf64 PushI
	AddReply(var_834_int, var_835_int, var_836_int); // 0xf65 TObjFunc
	var_837_int = 537300; // 0xf67 PushI
	var_838_int = -1; // 0xf68 PushI
	var_839_int = 39146; // 0xf69 PushI
	AddReply(var_837_int, var_838_int, var_839_int); // 0xf6a TObjFunc
	return 0; // 0xf6c Return
	
Label_3949:
	var_840_int = 39124; // 0xf6d PushI
	var_841_bool = var_22_int == var_840_int; // 0xf6e Eq
	if(var_841_bool == 0) goto Label_3972; // 0xf6f JumpB
	var_842_string = ""; // 0xf70 PushV
	var_842_string = "Neutral"; // 0xf71 MovS
	func_2208(var_23_int, var_842_string); // 0xf72 NEW_2
	var_843_int = 537280; // 0xf74 PushI
	SetMessage(var_843_int); // 0xf75 TObjFunc
	ClearReplies(); // 0xf77 TObjFunc
	var_844_int = 537281; // 0xf79 PushI
	var_845_int = 39126; // 0xf7a PushI
	var_846_int = 39125; // 0xf7b PushI
	AddReply(var_844_int, var_845_int, var_846_int); // 0xf7c TObjFunc
	var_847_int = 537288; // 0xf7e PushI
	var_848_int = 39133; // 0xf7f PushI
	var_849_int = 39132; // 0xf80 PushI
	AddReply(var_847_int, var_848_int, var_849_int); // 0xf81 TObjFunc
	return 0; // 0xf83 Return
	
Label_3972:
	var_850_int = 39133; // 0xf84 PushI
	var_851_bool = var_22_int == var_850_int; // 0xf85 Eq
	if(var_851_bool == 0) goto Label_3995; // 0xf86 JumpB
	var_852_string = ""; // 0xf87 PushV
	var_852_string = "Neutral"; // 0xf88 MovS
	func_2208(var_23_int, var_852_string); // 0xf89 NEW_2
	var_853_int = 537289; // 0xf8b PushI
	SetMessage(var_853_int); // 0xf8c TObjFunc
	ClearReplies(); // 0xf8e TObjFunc
	var_854_int = 537290; // 0xf90 PushI
	var_855_int = 39126; // 0xf91 PushI
	var_856_int = 39134; // 0xf92 PushI
	AddReply(var_854_int, var_855_int, var_856_int); // 0xf93 TObjFunc
	var_857_int = 537291; // 0xf95 PushI
	var_858_int = -1; // 0xf96 PushI
	var_859_int = 39136; // 0xf97 PushI
	AddReply(var_857_int, var_858_int, var_859_int); // 0xf98 TObjFunc
	return 0; // 0xf9a Return
	
Label_3995:
	var_860_int = 39126; // 0xf9b PushI
	var_861_bool = var_22_int == var_860_int; // 0xf9c Eq
	if(var_861_bool == 0) goto Label_4018; // 0xf9d JumpB
	var_862_string = ""; // 0xf9e PushV
	var_862_string = "Neutral"; // 0xf9f MovS
	func_2208(var_23_int, var_862_string); // 0xfa0 NEW_2
	var_863_int = 537282; // 0xfa2 PushI
	SetMessage(var_863_int); // 0xfa3 TObjFunc
	ClearReplies(); // 0xfa5 TObjFunc
	var_864_int = 537283; // 0xfa7 PushI
	var_865_int = 39128; // 0xfa8 PushI
	var_866_int = 39127; // 0xfa9 PushI
	AddReply(var_864_int, var_865_int, var_866_int); // 0xfaa TObjFunc
	var_867_int = 537287; // 0xfac PushI
	var_868_int = -1; // 0xfad PushI
	var_869_int = 39131; // 0xfae PushI
	AddReply(var_867_int, var_868_int, var_869_int); // 0xfaf TObjFunc
	return 0; // 0xfb1 Return
	
Label_4018:
	var_870_int = 39128; // 0xfb2 PushI
	var_871_bool = var_22_int == var_870_int; // 0xfb3 Eq
	if(var_871_bool == 0) goto Label_4041; // 0xfb4 JumpB
	var_872_string = ""; // 0xfb5 PushV
	var_872_string = "Neutral"; // 0xfb6 MovS
	func_2208(var_23_int, var_872_string); // 0xfb7 NEW_2
	var_873_int = 537284; // 0xfb9 PushI
	SetMessage(var_873_int); // 0xfba TObjFunc
	ClearReplies(); // 0xfbc TObjFunc
	var_874_int = 537285; // 0xfbe PushI
	var_875_int = -1; // 0xfbf PushI
	var_876_int = 39129; // 0xfc0 PushI
	AddReply(var_874_int, var_875_int, var_876_int); // 0xfc1 TObjFunc
	var_877_int = 537286; // 0xfc3 PushI
	var_878_int = -1; // 0xfc4 PushI
	var_879_int = 39130; // 0xfc5 PushI
	AddReply(var_877_int, var_878_int, var_879_int); // 0xfc6 TObjFunc
	return 0; // 0xfc8 Return
	
Label_4041:
	var_880_int = 39086; // 0xfc9 PushI
	var_881_bool = var_22_int == var_880_int; // 0xfca Eq
	if(var_881_bool == 0) goto Label_4079; // 0xfcb JumpB
	var_882_string = ""; // 0xfcc PushV
	var_882_string = "Neutral"; // 0xfcd MovS
	func_2208(var_23_int, var_882_string); // 0xfce NEW_2
	var_883_int = 537243; // 0xfd0 PushI
	SetMessage(var_883_int); // 0xfd1 TObjFunc
	ClearReplies(); // 0xfd3 TObjFunc
	var_884_int = 537244; // 0xfd5 PushI
	var_885_int = 39088; // 0xfd6 PushI
	var_886_int = 39087; // 0xfd7 PushI
	AddReply(var_884_int, var_885_int, var_886_int); // 0xfd8 TObjFunc
	var_887_int = 537254; // 0xfda PushI
	var_888_int = 39099; // 0xfdb PushI
	var_889_int = 39098; // 0xfdc PushI
	AddReply(var_887_int, var_888_int, var_889_int); // 0xfdd TObjFunc
	var_890_int = 537264; // 0xfdf PushI
	var_891_int = 39109; // 0xfe0 PushI
	var_892_int = 39108; // 0xfe1 PushI
	AddReply(var_890_int, var_891_int, var_892_int); // 0xfe2 TObjFunc
	var_893_int = 537275; // 0xfe4 PushI
	var_894_int = -1; // 0xfe5 PushI
	var_895_int = 39119; // 0xfe6 PushI
	AddReply(var_893_int, var_894_int, var_895_int); // 0xfe7 TObjFunc
	var_896_int = 537276; // 0xfe9 PushI
	var_897_int = -1; // 0xfea PushI
	var_898_int = 39120; // 0xfeb PushI
	AddReply(var_896_int, var_897_int, var_898_int); // 0xfec TObjFunc
	return 0; // 0xfee Return
	
Label_4079:
	var_899_int = 39109; // 0xfef PushI
	var_900_bool = var_22_int == var_899_int; // 0xff0 Eq
	if(var_900_bool == 0) goto Label_4102; // 0xff1 JumpB
	var_901_string = ""; // 0xff2 PushV
	var_901_string = "Neutral"; // 0xff3 MovS
	func_2208(var_23_int, var_901_string); // 0xff4 NEW_2
	var_902_int = 537265; // 0xff6 PushI
	SetMessage(var_902_int); // 0xff7 TObjFunc
	ClearReplies(); // 0xff9 TObjFunc
	var_903_int = 537266; // 0xffb PushI
	var_904_int = 44319; // 0xffc PushI
	var_905_int = 39110; // 0xffd PushI
	AddReply(var_903_int, var_904_int, var_905_int); // 0xffe TObjFunc
	var_906_int = 537267; // 0x1000 PushI
	var_907_int = 39112; // 0x1001 PushI
	var_908_int = 39111; // 0x1002 PushI
	AddReply(var_906_int, var_907_int, var_908_int); // 0x1003 TObjFunc
	return 0; // 0x1005 Return
	
Label_4102:
	var_909_int = 39112; // 0x1006 PushI
	var_910_bool = var_22_int == var_909_int; // 0x1007 Eq
	if(var_910_bool == 0) goto Label_4125; // 0x1008 JumpB
	var_911_string = ""; // 0x1009 PushV
	var_911_string = "Neutral"; // 0x100a MovS
	func_2208(var_23_int, var_911_string); // 0x100b NEW_2
	var_912_int = 537268; // 0x100d PushI
	SetMessage(var_912_int); // 0x100e TObjFunc
	ClearReplies(); // 0x1010 TObjFunc
	var_913_int = 537269; // 0x1012 PushI
	var_914_int = 39114; // 0x1013 PushI
	var_915_int = 39113; // 0x1014 PushI
	AddReply(var_913_int, var_914_int, var_915_int); // 0x1015 TObjFunc
	var_916_int = 537273; // 0x1017 PushI
	var_917_int = -1; // 0x1018 PushI
	var_918_int = 39117; // 0x1019 PushI
	AddReply(var_916_int, var_917_int, var_918_int); // 0x101a TObjFunc
	return 0; // 0x101c Return
	
Label_4125:
	var_919_int = 39114; // 0x101d PushI
	var_920_bool = var_22_int == var_919_int; // 0x101e Eq
	if(var_920_bool == 0) goto Label_4148; // 0x101f JumpB
	var_921_string = ""; // 0x1020 PushV
	var_921_string = "Neutral"; // 0x1021 MovS
	func_2208(var_23_int, var_921_string); // 0x1022 NEW_2
	var_922_int = 537270; // 0x1024 PushI
	SetMessage(var_922_int); // 0x1025 TObjFunc
	ClearReplies(); // 0x1027 TObjFunc
	var_923_int = 537271; // 0x1029 PushI
	var_924_int = -1; // 0x102a PushI
	var_925_int = 39115; // 0x102b PushI
	AddReply(var_923_int, var_924_int, var_925_int); // 0x102c TObjFunc
	var_926_int = 537272; // 0x102e PushI
	var_927_int = -1; // 0x102f PushI
	var_928_int = 39116; // 0x1030 PushI
	AddReply(var_926_int, var_927_int, var_928_int); // 0x1031 TObjFunc
	return 0; // 0x1033 Return
	
Label_4148:
	var_929_int = 44319; // 0x1034 PushI
	var_930_bool = var_22_int == var_929_int; // 0x1035 Eq
	if(var_930_bool == 0) goto Label_4171; // 0x1036 JumpB
	var_931_string = ""; // 0x1037 PushV
	var_931_string = "Neutral"; // 0x1038 MovS
	func_2208(var_23_int, var_931_string); // 0x1039 NEW_2
	var_932_int = 542040; // 0x103b PushI
	SetMessage(var_932_int); // 0x103c TObjFunc
	ClearReplies(); // 0x103e TObjFunc
	var_933_int = 542041; // 0x1040 PushI
	var_934_int = -1; // 0x1041 PushI
	var_935_int = 44320; // 0x1042 PushI
	AddReply(var_933_int, var_934_int, var_935_int); // 0x1043 TObjFunc
	var_936_int = 542042; // 0x1045 PushI
	var_937_int = -1; // 0x1046 PushI
	var_938_int = 44321; // 0x1047 PushI
	AddReply(var_936_int, var_937_int, var_938_int); // 0x1048 TObjFunc
	return 0; // 0x104a Return
	
Label_4171:
	var_939_int = 39099; // 0x104b PushI
	var_940_bool = var_22_int == var_939_int; // 0x104c Eq
	if(var_940_bool == 0) goto Label_4194; // 0x104d JumpB
	var_941_string = ""; // 0x104e PushV
	var_941_string = "Neutral"; // 0x104f MovS
	func_2208(var_23_int, var_941_string); // 0x1050 NEW_2
	var_942_int = 537255; // 0x1052 PushI
	SetMessage(var_942_int); // 0x1053 TObjFunc
	ClearReplies(); // 0x1055 TObjFunc
	var_943_int = 537256; // 0x1057 PushI
	var_944_int = 39101; // 0x1058 PushI
	var_945_int = 39100; // 0x1059 PushI
	AddReply(var_943_int, var_944_int, var_945_int); // 0x105a TObjFunc
	var_946_int = 537260; // 0x105c PushI
	var_947_int = 39105; // 0x105d PushI
	var_948_int = 39104; // 0x105e PushI
	AddReply(var_946_int, var_947_int, var_948_int); // 0x105f TObjFunc
	return 0; // 0x1061 Return
	
Label_4194:
	var_949_int = 39105; // 0x1062 PushI
	var_950_bool = var_22_int == var_949_int; // 0x1063 Eq
	if(var_950_bool == 0) goto Label_4217; // 0x1064 JumpB
	var_951_string = ""; // 0x1065 PushV
	var_951_string = "Neutral"; // 0x1066 MovS
	func_2208(var_23_int, var_951_string); // 0x1067 NEW_2
	var_952_int = 537261; // 0x1069 PushI
	SetMessage(var_952_int); // 0x106a TObjFunc
	ClearReplies(); // 0x106c TObjFunc
	var_953_int = 537262; // 0x106e PushI
	var_954_int = -1; // 0x106f PushI
	var_955_int = 39106; // 0x1070 PushI
	AddReply(var_953_int, var_954_int, var_955_int); // 0x1071 TObjFunc
	var_956_int = 537263; // 0x1073 PushI
	var_957_int = -1; // 0x1074 PushI
	var_958_int = 39107; // 0x1075 PushI
	AddReply(var_956_int, var_957_int, var_958_int); // 0x1076 TObjFunc
	return 0; // 0x1078 Return
	
Label_4217:
	var_959_int = 39101; // 0x1079 PushI
	var_960_bool = var_22_int == var_959_int; // 0x107a Eq
	if(var_960_bool == 0) goto Label_4240; // 0x107b JumpB
	var_961_string = ""; // 0x107c PushV
	var_961_string = "Neutral"; // 0x107d MovS
	func_2208(var_23_int, var_961_string); // 0x107e NEW_2
	var_962_int = 537257; // 0x1080 PushI
	SetMessage(var_962_int); // 0x1081 TObjFunc
	ClearReplies(); // 0x1083 TObjFunc
	var_963_int = 537258; // 0x1085 PushI
	var_964_int = -1; // 0x1086 PushI
	var_965_int = 39102; // 0x1087 PushI
	AddReply(var_963_int, var_964_int, var_965_int); // 0x1088 TObjFunc
	var_966_int = 537259; // 0x108a PushI
	var_967_int = -1; // 0x108b PushI
	var_968_int = 39103; // 0x108c PushI
	AddReply(var_966_int, var_967_int, var_968_int); // 0x108d TObjFunc
	return 0; // 0x108f Return
	
Label_4240:
	var_969_int = 39088; // 0x1090 PushI
	var_970_bool = var_22_int == var_969_int; // 0x1091 Eq
	if(var_970_bool == 0) goto Label_4263; // 0x1092 JumpB
	var_971_string = ""; // 0x1093 PushV
	var_971_string = "Neutral"; // 0x1094 MovS
	func_2208(var_23_int, var_971_string); // 0x1095 NEW_2
	var_972_int = 537245; // 0x1097 PushI
	SetMessage(var_972_int); // 0x1098 TObjFunc
	ClearReplies(); // 0x109a TObjFunc
	var_973_int = 537246; // 0x109c PushI
	var_974_int = 39090; // 0x109d PushI
	var_975_int = 39089; // 0x109e PushI
	AddReply(var_973_int, var_974_int, var_975_int); // 0x109f TObjFunc
	var_976_int = 537253; // 0x10a1 PushI
	var_977_int = 39090; // 0x10a2 PushI
	var_978_int = 39096; // 0x10a3 PushI
	AddReply(var_976_int, var_977_int, var_978_int); // 0x10a4 TObjFunc
	return 0; // 0x10a6 Return
	
Label_4263:
	var_979_int = 39090; // 0x10a7 PushI
	var_980_bool = var_22_int == var_979_int; // 0x10a8 Eq
	if(var_980_bool == 0) goto Label_4286; // 0x10a9 JumpB
	var_981_string = ""; // 0x10aa PushV
	var_981_string = "Neutral"; // 0x10ab MovS
	func_2208(var_23_int, var_981_string); // 0x10ac NEW_2
	var_982_int = 537247; // 0x10ae PushI
	SetMessage(var_982_int); // 0x10af TObjFunc
	ClearReplies(); // 0x10b1 TObjFunc
	var_983_int = 537248; // 0x10b3 PushI
	var_984_int = 39092; // 0x10b4 PushI
	var_985_int = 39091; // 0x10b5 PushI
	AddReply(var_983_int, var_984_int, var_985_int); // 0x10b6 TObjFunc
	var_986_int = 537252; // 0x10b8 PushI
	var_987_int = -1; // 0x10b9 PushI
	var_988_int = 39095; // 0x10ba PushI
	AddReply(var_986_int, var_987_int, var_988_int); // 0x10bb TObjFunc
	return 0; // 0x10bd Return
	
Label_4286:
	var_989_int = 39092; // 0x10be PushI
	var_990_bool = var_22_int == var_989_int; // 0x10bf Eq
	if(var_990_bool == 0) goto Label_4309; // 0x10c0 JumpB
	var_991_string = ""; // 0x10c1 PushV
	var_991_string = "Neutral"; // 0x10c2 MovS
	func_2208(var_23_int, var_991_string); // 0x10c3 NEW_2
	var_992_int = 537249; // 0x10c5 PushI
	SetMessage(var_992_int); // 0x10c6 TObjFunc
	ClearReplies(); // 0x10c8 TObjFunc
	var_993_int = 537250; // 0x10ca PushI
	var_994_int = -1; // 0x10cb PushI
	var_995_int = 39093; // 0x10cc PushI
	AddReply(var_993_int, var_994_int, var_995_int); // 0x10cd TObjFunc
	var_996_int = 537251; // 0x10cf PushI
	var_997_int = -1; // 0x10d0 PushI
	var_998_int = 39094; // 0x10d1 PushI
	AddReply(var_996_int, var_997_int, var_998_int); // 0x10d2 TObjFunc
	return 0; // 0x10d4 Return
	
Label_4309:
	var_999_int = 45672; // 0x10d5 PushI
	var_1000_bool = var_22_int == var_999_int; // 0x10d6 Eq
	if(var_1000_bool == 0) goto Label_4332; // 0x10d7 JumpB
	var_1001_string = ""; // 0x10d8 PushV
	var_1001_string = "Neutral"; // 0x10d9 MovS
	func_2208(var_23_int, var_1001_string); // 0x10da NEW_2
	var_1002_int = 543216; // 0x10dc PushI
	SetMessage(var_1002_int); // 0x10dd TObjFunc
	ClearReplies(); // 0x10df TObjFunc
	var_1003_int = 543220; // 0x10e1 PushI
	var_1004_int = -1; // 0x10e2 PushI
	var_1005_int = 45676; // 0x10e3 PushI
	AddReply(var_1003_int, var_1004_int, var_1005_int); // 0x10e4 TObjFunc
	var_1006_int = 543221; // 0x10e6 PushI
	var_1007_int = 45678; // 0x10e7 PushI
	var_1008_int = 45677; // 0x10e8 PushI
	AddReply(var_1006_int, var_1007_int, var_1008_int); // 0x10e9 TObjFunc
	return 0; // 0x10eb Return
	
Label_4332:
	var_1009_int = 45678; // 0x10ec PushI
	var_1010_bool = var_22_int == var_1009_int; // 0x10ed Eq
	if(var_1010_bool == 0) goto Label_4355; // 0x10ee JumpB
	var_1011_string = ""; // 0x10ef PushV
	var_1011_string = "Neutral"; // 0x10f0 MovS
	func_2208(var_23_int, var_1011_string); // 0x10f1 NEW_2
	var_1012_int = 543222; // 0x10f3 PushI
	SetMessage(var_1012_int); // 0x10f4 TObjFunc
	ClearReplies(); // 0x10f6 TObjFunc
	var_1013_int = 543223; // 0x10f8 PushI
	var_1014_int = -1; // 0x10f9 PushI
	var_1015_int = 45679; // 0x10fa PushI
	AddReply(var_1013_int, var_1014_int, var_1015_int); // 0x10fb TObjFunc
	var_1016_int = 543225; // 0x10fd PushI
	var_1017_int = 45682; // 0x10fe PushI
	var_1018_int = 45681; // 0x10ff PushI
	AddReply(var_1016_int, var_1017_int, var_1018_int); // 0x1100 TObjFunc
	return 0; // 0x1102 Return
	
Label_4355:
	var_1019_int = 45682; // 0x1103 PushI
	var_1020_bool = var_22_int == var_1019_int; // 0x1104 Eq
	if(var_1020_bool == 0) goto Label_4378; // 0x1105 JumpB
	var_1021_string = ""; // 0x1106 PushV
	var_1021_string = "Neutral"; // 0x1107 MovS
	func_2208(var_23_int, var_1021_string); // 0x1108 NEW_2
	var_1022_int = 543226; // 0x110a PushI
	SetMessage(var_1022_int); // 0x110b TObjFunc
	ClearReplies(); // 0x110d TObjFunc
	var_1023_int = 543227; // 0x110f PushI
	var_1024_int = -1; // 0x1110 PushI
	var_1025_int = 45683; // 0x1111 PushI
	AddReply(var_1023_int, var_1024_int, var_1025_int); // 0x1112 TObjFunc
	var_1026_int = 543228; // 0x1114 PushI
	var_1027_int = 45686; // 0x1115 PushI
	var_1028_int = 45684; // 0x1116 PushI
	AddReply(var_1026_int, var_1027_int, var_1028_int); // 0x1117 TObjFunc
	return 0; // 0x1119 Return
	
Label_4378:
	var_1029_int = 45686; // 0x111a PushI
	var_1030_bool = var_22_int == var_1029_int; // 0x111b Eq
	if(var_1030_bool == 0) goto Label_4401; // 0x111c JumpB
	var_1031_string = ""; // 0x111d PushV
	var_1031_string = "Neutral"; // 0x111e MovS
	func_2208(var_23_int, var_1031_string); // 0x111f NEW_2
	var_1032_int = 543230; // 0x1121 PushI
	SetMessage(var_1032_int); // 0x1122 TObjFunc
	ClearReplies(); // 0x1124 TObjFunc
	var_1033_int = 543231; // 0x1126 PushI
	var_1034_int = -1; // 0x1127 PushI
	var_1035_int = 45687; // 0x1128 PushI
	AddReply(var_1033_int, var_1034_int, var_1035_int); // 0x1129 TObjFunc
	var_1036_int = 543232; // 0x112b PushI
	var_1037_int = -1; // 0x112c PushI
	var_1038_int = 45688; // 0x112d PushI
	AddReply(var_1036_int, var_1037_int, var_1038_int); // 0x112e TObjFunc
	return 0; // 0x1130 Return
	
Label_4401:
	var_1039_int = 45690; // 0x1131 PushI
	var_1040_bool = var_22_int == var_1039_int; // 0x1132 Eq
	if(var_1040_bool == 0) goto Label_4404; // 0x1133 JumpB
	
Label_4404:
	var_1041_int = 45697; // 0x1134 PushI
	var_1042_bool = var_22_int == var_1041_int; // 0x1135 Eq
	if(var_1042_bool == 0) goto Label_4407; // 0x1136 JumpB
	
Label_4407:
	var_1043_int = 45700; // 0x1137 PushI
	var_1044_bool = var_22_int == var_1043_int; // 0x1138 Eq
	if(var_1044_bool == 0) goto Label_4430; // 0x1139 JumpB
	var_1045_string = ""; // 0x113a PushV
	var_1045_string = "Neutral"; // 0x113b MovS
	func_2208(var_23_int, var_1045_string); // 0x113c NEW_2
	var_1046_int = 543244; // 0x113e PushI
	SetMessage(var_1046_int); // 0x113f TObjFunc
	ClearReplies(); // 0x1141 TObjFunc
	var_1047_int = 543245; // 0x1143 PushI
	var_1048_int = -1; // 0x1144 PushI
	var_1049_int = 45701; // 0x1145 PushI
	AddReply(var_1047_int, var_1048_int, var_1049_int); // 0x1146 TObjFunc
	var_1050_int = 543246; // 0x1148 PushI
	var_1051_int = -1; // 0x1149 PushI
	var_1052_int = 45702; // 0x114a PushI
	AddReply(var_1050_int, var_1051_int, var_1052_int); // 0x114b TObjFunc
	return 0; // 0x114d Return
	
Label_4430:
	var_3_bool = 1; // 0x114e TMovB
	var_1053_bool = 0; // 0x114f PushV
	func_5642(var_1053_bool); // 0x1150 NEW_2
	if(var_1053_bool == 0) goto Label_4438; // 0x1152 JumpB
	lshStopAnimation(); // 0x1153 Func
	goto Label_4440; // 0x1155 Jump
	
Label_4440:
	return 0; // 0x1158 Return
	
Label_4438:
	StopAnimation(); // 0x1156 Func
	
Label_4442:
	return 0; // 0x115a Return
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_string)
{
	return 0; // 0x1304 Return
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object)
{
	return 0; // 0x1306 Return
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_int, var_24_float, var_25_float)
{
	return 0; // 0x1308 Return
}


event_43(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_int, var_24_float, var_25_float, var_26_cvector, var_27_cvector)
{
	return 0; // 0x130a Return
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	var_22_bool = 1; // 0x28 PushB
	SensePlayerOnly(var_22_bool); // 0x29 Func
	func_5644(); // 0x2c NEW_2
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
	var_418_bool = 0; // 0x4 PushV
	func_5642(var_418_bool); // 0x5 NEW_2
	if(var_418_bool == 0) goto Label_15; // 0x7 JumpB
	var_419_string = ""; // 0x8 PushV
	var_419_string = "Neutral"; // 0x9 MovS
	func_4705(var_419_string); // 0xa NEW_2
	lshWaitForAnimEnd(); // 0xc Func
	goto Label_21; // 0xe Jump
	
Label_21:
	var_420_bool = var_0_bool; // 0x15 PushT
	if(var_420_bool == 0) goto Label_24; // 0x16 JumpB
	return 0; // 0x17 Return
	
Label_24:
	goto Label_4; // 0x18 Jump
	
Label_15:
	WaitForAnimEnd(); // 0xf Func
	var_421_string = "all"; // 0x11 PushS
	var_422_string = "idle"; // 0x12 PushS
	PlayAnimation(var_421_string, var_422_string); // 0x13 Func
}


func_5634(var_106_int)
{
	var_106_int = 515559; // 0x1602 MovI
	return 0; // 0x1603 Return
}


func_5636(var_105_int)
{
	var_105_int = 503344; // 0x1604 MovI
	return 0; // 0x1605 Return
}


func_5638(var_107_string)
{
	var_107_string = "ui/NPC_Citizen1.png"; // 0x1606 MovS
	return 0; // 0x1607 Return
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
	func_4786(var_52_cvector, var_53_cvector); // 0x612 NEW_2
	var_59_float = 0.75; // 0x614 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x615 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x616 Add2
	func_4786(var_50_cvector, var_51_cvector); // 0x617 NEW_2
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


func_5640(var_108_string)
{
	var_108_string = "ui/NPC_Citizen1_b.png"; // 0x1608 MovS
	return 0; // 0x1609 Return
}


func_5642(var_25_bool)
{
	var_25_bool = 0; // 0x160a MovB
	return 0; // 0x160b Return
}


func_5644()
{
	var_23_bool = GlobalVars[0]; // 0x160c PushGE
	var_23_bool = 0; // 0x160d MovB
	GlobalVars[0] = var_23_bool; // 0x160e PopGE
	var_24_bool = 0; // 0x160f PushV
	var_24_bool = 0; // 0x1610 MovB
	func_5534(var_24_bool); // 0x1611 NEW_2
	return 0; // 0x1613 Return
}


func_5652(var_34_object, var_49_object)
{
	var_35_bool = 0; var_36_bool = 0; // 0x1614 PushV
	var_37_bool = GlobalVars[0]; // 0x1615 PushGE
	if(var_37_bool == 0) goto Label_5665; // 0x1616 JumpB
	IsOverrideActive(var_36_bool); // 0x1617 Func
	var_38_bool = var_36_bool == 0; // 0x1619 Not
	if(var_38_bool == 0) goto Label_5663; // 0x161a JumpB
	var_39_object = Obj(); // 0x161b PushV
	var_39_object = var_34_object; // 0x161c Mov
	func_5521(var_39_object); // 0x161d NEW_2
	
Label_5663:
	return 2; // 0x161f Return
	
Label_5665:
	var_46_int = 1000; // 0x1621 PushI
	var_47_int = 0; var_48_object = Obj(); // 0x1622 PushV
	var_48_object = var_34_object; // 0x1623 Mov
	TaskCall(8); // 0x1624 TaskCall
	func_1731(var_49_object, var_47_int, var_48_object); // 0x1625 NEW_2
	TaskReturn(); // 0x1626 TaskReturn
	var_383_bool = var_46_int == var_49_object; // 0x1628 Eq
	if(var_383_bool == 0) goto Label_5691; // 0x1629 JumpB
	var_384_bool = 0; var_385_object = Obj(); // 0x162a PushV
	var_385_object = var_34_object; // 0x162b Mov
	func_4646(var_384_bool, var_385_object); // 0x162c NEW_2
	var_415_bool = var_384_bool == 0; // 0x162e Not
	if(var_415_bool == 0) goto Label_5681; // 0x162f JumpB
	return 2; // 0x1630 Return
	
Label_5681:
	var_416_object = Obj(); // 0x1631 PushV
	var_416_object = var_34_object; // 0x1632 Mov
	TaskCall(0); // 0x1633 TaskCall
	func_0(var_416_object); // 0x1634 NEW_2
	TaskReturn(); // 0x1635 TaskReturn
	var_423_object = Obj(); // 0x1637 PushV
	var_423_object = var_34_object; // 0x1638 Mov
	func_4701(); // 0x1639 NEW_2
	
Label_5691:
	return 2; // 0x163b Return
}


func_4629()
{
	var_377_bool = 0; var_378_bool = 0; // 0x1215 PushV
	CameraSwitchToNormal(); // 0x1216 Func
	var_379_bool = 0; // 0x1218 PushV
	func_5642(var_379_bool); // 0x1219 NEW_2
	if(var_379_bool == 0) goto Label_4637; // 0x121b JumpB
	goto Label_4645; // 0x121c Jump
	
Label_4645:
	return 2; // 0x1225 Return
	
Label_4637:
	var_380_string = "head"; // 0x121d PushS
	HasAnimationTrack(var_378_bool, var_380_string); // 0x121e Func
	var_381_bool = var_378_bool; // 0x1220 Push
	if(var_381_bool == 0) goto Label_4645; // 0x1221 JumpB
	var_382_string = "head"; // 0x1222 PushS
	UnlookAsync(var_382_string); // 0x1223 Func
}


func_5146(var_25_int)
{
	var_25_int = 0; // 0x141b MovI
	return 0; // 0x141c Return
}


func_5149()
{
	return 0; // 0x141e Return
}


func_5151(var_209_int)
{
	var_209_int = 0; // 0x1420 MovI
	return 0; // 0x1421 Return
}


func_5154()
{
	return 0; // 0x1423 Return
}


func_5156(var_25_int)
{
	var_25_int = 2; // 0x1425 MovI
	return 0; // 0x1426 Return
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
	func_4443(var_191_cvector); // 0x648 NEW_2
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
	func_4443(var_201_cvector); // 0x663 NEW_2
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


func_5159(var_33_object)
{
	var_34_object = Obj(); // 0x1428 PushV
	var_34_object = var_33_object; // 0x1429 Mov
	func_5652(var_33_object, var_34_object); // 0x142a NEW_2
	return 0; // 0x142c Return
}


func_4646(var_384_bool, var_385_object)
{
	var_386_bool = 0; var_387_object = Obj(); var_388_float = 0; // 0x1227 PushV
	var_387_object = var_385_object; // 0x1228 Mov
	var_388_float = 70; // 0x1229 MovI
	func_4654(var_387_object, var_388_float); // 0x122a NEW_2
	var_384_bool = var_386_bool; // 0x122b Mov
	return 0; // 0x122d Return
}


func_5165()
{
	return 0; // 0x142d Return
}


func_4654(var_386_bool, var_388_float)
{
	var_389_float = 0; var_390_cvector = CVector(0,0,0); var_391_cvector = CVector(0,0,0); var_392_cvector = CVector(0,0,0); var_393_cvector = CVector(0,0,0); var_394_cvector = CVector(0,0,0); var_395_cvector = CVector(0,0,0); var_396_bool = 0; var_397_float = 0; var_398_cvector = CVector(0,0,0); var_399_cvector = CVector(0,0,0); var_400_cvector = CVector(0,0,0); var_401_cvector = CVector(0,0,0); var_402_cvector = CVector(0,0,0); var_403_cvector = CVector(0,0,0); var_404_bool = 0; // 0x122e PushV
	GetPosition(var_398_cvector); // 0x122f ObjFunc
	GetEyesHeight(var_397_float); // 0x1231 ObjFunc
	var_405_float = GetByIndex(var_398_cvector, 1); // 0x1233 PushE
	var_405_float = var_405_float + var_397_float; // 0x1234 Add2
	SetByIndex(var_398_cvector, 1) = var_405_float; // 0x1235 PopE
	GetPosition(var_399_cvector); // 0x1236 Func
	GetEyesHeight(var_397_float); // 0x1238 Func
	var_406_float = GetByIndex(var_399_cvector, 1); // 0x123a PushE
	var_406_float = var_406_float + var_397_float; // 0x123b Add2
	SetByIndex(var_399_cvector, 1) = var_406_float; // 0x123c PopE
	var_400_cvector = var_398_cvector - var_399_cvector; // 0x123d Sub2
	var_407_float = GetByIndex(var_400_cvector, 1); // 0x123e PushE
	var_407_float = 0; // 0x123f MovI
	SetByIndex(var_400_cvector, 1) = var_407_float; // 0x1240 PopE
	var_408_int = var_400_cvector | var_400_cvector; // 0x1241 Or
	var_409_float = sqrt(var_408_int); // 0x1242 Sqrt
	var_400_cvector = var_400_cvector / var_400_cvector; // 0x1243 Div2
	var_401_cvector = -var_400_cvector; // 0x1244 Neg2
	var_410_float = var_400_cvector * var_388_float; // 0x1245 Mult
	var_411_cvector = CVector(0.0, 10.0, 0.0); // 0x1246 PushVec
	var_402_cvector = var_410_float - var_411_cvector; // 0x1247 Sub2
	var_403_cvector = var_399_cvector + var_402_cvector; // 0x1248 Add2
	IsOverrideActive(var_404_bool); // 0x1249 Func
	var_412_bool = var_404_bool; // 0x124b Push
	if(var_412_bool == 0) goto Label_4687; // 0x124c JumpB
	var_386_bool = 0; // 0x124d MovB
	return 16; // 0x124e Return
	
Label_4687:
	StopWorld(); // 0x124f Func
	CameraTransit(var_403_cvector, var_401_cvector); // 0x1251 Func
	var_413_float = GetByIndex(var_402_cvector, 0); // 0x1253 PushE
	var_414_float = GetByIndex(var_402_cvector, 2); // 0x1254 PushE
	Rotate(var_413_float, var_414_float); // 0x1255 Func
	CameraWaitForPlayFinish(); // 0x1257 Func
	ResumeWorld(); // 0x1259 Func
	var_386_bool = 1; // 0x125b MovB
	return 16; // 0x125c Return
}


func_5166(var_28_bool, var_29_object)
{
	var_30_bool = 0; var_31_bool = 0; // 0x142e PushV
	CanSee(var_31_bool, var_29_object); // 0x142f Func
	var_28_bool = var_31_bool; // 0x1431 Mov
	return 2; // 0x1432 Return
}


func_5171(var_40_object)
{
	var_41_object = Obj(); // 0x1434 PushV
	var_41_object = var_40_object; // 0x1435 Mov
	TaskCall(6); // 0x1436 TaskCall
	func_1380(var_42_object, var_43_cvector, var_44_bool, var_41_object); // 0x1437 NEW_2
	TaskReturn(); // 0x1438 TaskReturn
	return 0; // 0x143a Return
}


func_55()
{
	var_105_bool = 0; // 0x37 PushV
	func_4556(var_105_bool); // 0x38 NEW_2
	var_108_bool = var_105_bool == 0; // 0x3a Not
	if(var_108_bool == 0) goto Label_63; // 0x3b JumpB
	func_5165(); // 0x3d NEW_2
	
Label_63:
	return 0; // 0x3f Return
}


func_5179(var_37_bool, var_38_object)
{
	var_39_bool = 0; var_40_bool = 0; // 0x143b PushV
	CanSee(var_40_bool, var_38_object); // 0x143c Func
	var_37_bool = 1; // 0x143e MovB
	var_41_bool = var_40_bool; // 0x143f Push
	if(var_41_bool == 0) goto Label_5193; // 0x1440 JumpB
	var_42_float = 0; var_43_object = Obj(); // 0x1441 PushV
	var_43_object = var_38_object; // 0x1442 Mov
	func_4455(var_43_object); // 0x1443 NEW_2
	var_50_int = 4000000; // 0x1445 PushI
	var_51_bool = var_42_float <= var_50_int; // 0x1446 LE
	if(var_51_bool == 0) goto Label_5193; // 0x1447 JumpB
	var_37_bool = 0; // 0x1448 MovB
	
Label_5193:
	return 2; // 0x1449 Return
}


func_5692(var_67_bool)
{
	var_68_float = 0; // 0x163c PushV
	func_5507(var_68_float); // 0x163d NEW_2
	var_76_float = 0.6; // 0x163f PushF
	var_67_bool = var_68_float > var_76_float; // 0x1640 GT2
	return 0; // 0x1641 Return
}


func_573()
{
	var_136_int = 0; var_137_int = 0; var_138_int = 0; var_139_int = 0; var_140_bool = 0; var_141_float = 0; var_142_bool = 0; var_143_int = 0; var_144_int = 0; var_145_int = 0; var_146_int = 0; var_147_bool = 0; var_148_float = 0; var_149_bool = 0; // 0x23d PushV
	WaitForAnimEnd(); // 0x23e Func
	var_150_bool = 0; // 0x240 PushV
	func_4556(var_150_bool); // 0x241 NEW_2
	var_151_bool = var_150_bool == 0; // 0x243 Not
	if(var_151_bool == 0) goto Label_582; // 0x244 JumpB
	return 14; // 0x245 Return
	
Label_582:
	var_152_int = 0; // 0x246 PushV
	func_5010(var_152_int); // 0x247 NEW_2
	var_143_int = var_152_int; // 0x248 Mov
	var_144_int = 0; // 0x24a MovI
	
Label_587:
	var_165_bool = 0; // 0x24b PushV
	var_165_bool = 0; // 0x24c MovB
	var_166_int = 5; // 0x24d PushI
	var_167_bool = var_144_int < var_166_int; // 0x24e LT
	if(var_167_bool == 0) goto Label_597; // 0x24f JumpB
	var_168_bool = 0; // 0x250 PushV
	func_4556(var_168_bool); // 0x251 NEW_2
	if(var_168_bool == 0) goto Label_597; // 0x253 JumpB
	var_165_bool = 1; // 0x254 MovB
	
Label_597:
	if(var_165_bool == 0) goto Label_649; // 0x255 JumpB
	var_169_int = 3; // 0x256 PushI
	irand(var_145_int, var_169_int); // 0x257 Func
	var_170_int = 0; // 0x259 PushI
	var_171_bool = var_145_int == var_170_int; // 0x25a Eq
	if(var_171_bool == 0) goto Label_621; // 0x25b JumpB
	var_172_int = var_143_int; // 0x25c Push
	if(var_172_int == 0) goto Label_620; // 0x25d JumpB
	irand(var_146_int, var_143_int); // 0x25e Func
	var_173_string = "all"; // 0x260 PushS
	var_174_string = ""; var_175_int = 0; // 0x261 PushV
	var_175_int = var_146_int; // 0x262 Mov
	func_5003(var_174_string, var_175_int); // 0x263 NEW_2
	PlayAnimation(var_173_string, var_174_string); // 0x265 Func
	WaitForAnimEnd(var_147_bool); // 0x267 Func
	var_176_bool = var_147_bool == 0; // 0x269 Not
	if(var_176_bool == 0) goto Label_620; // 0x26a JumpB
	goto Label_649; // 0x26b Jump
	
Label_649:
	ResetAAS(); // 0x289 Func
	return 14; // 0x28b Return
	
Label_620:
	goto Label_638; // 0x26c Jump
	
Label_638:
	var_177_bool = 0; // 0x27e PushV
	func_652(var_177_bool); // 0x27f NEW_2
	var_178_bool = var_177_bool == 0; // 0x281 Not
	if(var_178_bool == 0) goto Label_644; // 0x282 JumpB
	goto Label_649; // 0x283 Jump
	
Label_644:
	ResetAAS(); // 0x284 Func
	var_179_int = 1; // 0x286 PushI
	var_144_int = var_144_int + var_179_int; // 0x287 Add2
	goto Label_587; // 0x288 Jump
	
Label_621:
	var_180_int = 1; // 0x26d PushI
	var_181_bool = var_145_int == var_180_int; // 0x26e Eq
	if(var_181_bool == 0) goto Label_635; // 0x26f JumpB
	var_182_int = 4; // 0x270 PushI
	rand(var_148_float, var_182_int); // 0x271 Func
	var_183_int = 1; // 0x273 PushI
	var_184_int = var_148_float + var_183_int; // 0x274 Add
	Sleep(var_184_int, var_149_bool); // 0x275 Func
	var_185_bool = var_149_bool == 0; // 0x277 Not
	if(var_185_bool == 0) goto Label_634; // 0x278 JumpB
	goto Label_649; // 0x279 Jump
	
Label_634:
	goto Label_638; // 0x27a Jump
	
Label_635:
	var_186_int = var_144_int; // 0x27b Push
	if(var_186_int == 0) goto Label_638; // 0x27c JumpB
	goto Label_649; // 0x27d Jump
}


func_5698(var_27_bool, var_28_object, var_29_object)
{
	var_31_bool = 0; var_32_object = Obj(); var_33_object = Obj(); var_34_float = 0; // 0x1643 PushV
	var_32_object = var_28_object; // 0x1644 Mov
	var_33_object = var_29_object; // 0x1645 Mov
	var_34_float = 700.0; // 0x1646 MovF
	func_5080(var_31_bool, var_32_object, var_33_object, var_34_float); // 0x1647 NEW_2
	var_27_bool = var_31_bool; // 0x1648 Mov
	return 0; // 0x164a Return
}


func_5194(var_139_object)
{
	var_140_object = Obj(); // 0x144b PushV
	var_140_object = var_139_object; // 0x144c Mov
	TaskCall(7); // 0x144d TaskCall
	func_1574(var_141_object, var_142_cvector, var_143_bool, var_140_object); // 0x144e NEW_2
	TaskReturn(); // 0x144f TaskReturn
	return 0; // 0x1451 Return
}


func_5202(var_54_bool, var_55_object)
{
	var_56_bool = 0; var_57_object = Obj(); // 0x1453 PushV
	var_57_object = var_55_object; // 0x1454 Mov
	func_5179(var_56_bool, var_57_object); // 0x1455 NEW_2
	var_54_bool = var_56_bool; // 0x1456 Mov
	return 0; // 0x1458 Return
}


func_5209(var_207_object)
{
	var_208_object = Obj(); // 0x145a PushV
	var_208_object = var_207_object; // 0x145b Mov
	func_5194(var_208_object); // 0x145c NEW_2
	return 0; // 0x145e Return
}


func_4701()
{
	CameraSwitchToNormal(); // 0x125e Func
	return 0; // 0x1260 Return
}


func_5215(var_30_bool)
{
	var_30_bool = 0; // 0x1460 MovB
	return 0; // 0x1461 Return
}


func_4705(var_307_string)
{
	var_308_bool = 0; var_309_float = 0; var_310_float = 0; var_311_bool = 0; var_312_float = 0; var_313_float = 0; // 0x1261 PushV
	lshHasAnimation(var_311_bool, var_307_string); // 0x1262 Func
	var_314_bool = var_311_bool; // 0x1264 Push
	if(var_314_bool == 0) goto Label_4716; // 0x1265 JumpB
	lshGetAnimTimes(var_307_string, var_312_float, var_313_float); // 0x1266 Func
	var_315_bool = 0; // 0x1268 PushB
	lshPlayAnimation(var_312_float, var_313_float, var_315_bool); // 0x1269 Func
	goto Label_4720; // 0x126b Jump
	
Label_4720:
	return 6; // 0x1270 Return
	
Label_4716:
	var_316_string = "Can't find lsh animation : "; // 0x126c PushS
	var_317_int = var_316_string + var_307_string; // 0x126d Add
	Trace(var_317_int); // 0x126e Func
}


func_5218()
{
	return 0; // 0x1463 Return
}


func_1124(var_2_bool)
{
	Stop(); // 0x464 Func
	var_23_int = 120; // 0x466 PushI
	KillTimer(var_23_int); // 0x467 Func
	var_2_bool = 1; // 0x469 TMovB
	return 0; // 0x46a Return
}


func_5220()
{
	var_30_int = 1000; // 0x1465 PushI
	SetReturnValue(var_30_int); // 0x1466 ObjFunc
	return 0; // 0x1468 Return
}


func_5225(var_231_bool)
{
	var_233_int = 0; var_234_string = ""; // 0x146a PushV
	var_234_string = "branch"; // 0x146b MovS
	func_4845(var_233_int, var_234_string); // 0x146c NEW_2
	var_235_int = 0; // 0x146e PushI
	var_236_bool = var_233_int == var_235_int; // 0x146f Eq
	if(var_236_bool == 0) goto Label_5235; // 0x1470 JumpB
	var_231_bool = 1; // 0x1471 MovB
	return 0; // 0x1472 Return
	
Label_5235:
	var_231_bool = 0; // 0x1473 MovB
	return 0; // 0x1474 Return
}


func_4721(var_57_string, var_58_bool)
{
	var_61_bool = 0; var_62_float = 0; var_63_float = 0; var_64_bool = 0; var_65_float = 0; var_66_float = 0; // 0x1271 PushV
	lshHasAnimation(var_64_bool, var_57_string); // 0x1272 Func
	var_67_bool = var_64_bool; // 0x1274 Push
	if(var_67_bool == 0) goto Label_4731; // 0x1275 JumpB
	lshGetAnimTimes(var_57_string, var_65_float, var_66_float); // 0x1276 Func
	lshPlayAnimation(var_65_float, var_66_float, var_58_bool); // 0x1278 Func
	goto Label_4735; // 0x127a Jump
	
Label_4735:
	return 6; // 0x127f Return
	
Label_4731:
	var_68_string = "Can't find lsh animation : "; // 0x127b PushS
	var_69_int = var_68_string + var_57_string; // 0x127c Add
	Trace(var_69_int); // 0x127d Func
}


func_1140(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x474 PushV
	GetDirection(var_77_cvector); // 0x475 Func
	var_79_cvector = CVector(0,0,0); var_80_object = Obj(); // 0x477 PushV
	var_80_object = var_0_bool; // 0x478 MovT
	func_4448(var_80_object); // 0x479 NEW_2
	var_78_cvector = var_79_cvector; // 0x47a Mov
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x47c PushV
	var_86_cvector = var_77_cvector; // 0x47d Mov
	var_87_cvector = var_78_cvector; // 0x47e Mov
	func_4801(var_85_float, var_86_cvector, var_87_cvector); // 0x47f NEW_2
	var_93_float = -0.34202; // 0x481 PushF
	var_74_bool = var_85_float >= var_93_float; // 0x482 GE2
	return 4; // 0x483 Return
}


func_5237(var_45_bool)
{
	var_47_int = 0; var_48_string = ""; // 0x1476 PushV
	var_48_string = "branch"; // 0x1477 MovS
	func_4845(var_47_int, var_48_string); // 0x1478 NEW_2
	var_51_int = 2; // 0x147a PushI
	var_52_bool = var_47_int == var_51_int; // 0x147b Eq
	if(var_52_bool == 0) goto Label_5247; // 0x147c JumpB
	var_45_bool = 1; // 0x147d MovB
	return 0; // 0x147e Return
	
Label_5247:
	var_45_bool = 0; // 0x147f MovB
	return 0; // 0x1480 Return
}


func_4736(var_91_object)
{
	var_92_float = 0; var_93_cvector = CVector(0,0,0); var_94_float = 0; var_95_cvector = CVector(0,0,0); // 0x1280 PushV
	GetEyesHeight(var_94_float); // 0x1281 ObjFunc
	var_95_cvector = CVector(0.0, 0.0, 0.0); // 0x1283 MovV
	var_96_float = GetByIndex(var_95_cvector, 1); // 0x1284 PushE
	var_96_float = var_94_float; // 0x1285 Mov
	SetByIndex(var_95_cvector, 1) = var_96_float; // 0x1286 PopE
	var_97_string = "head"; // 0x1287 PushS
	LookAsync(var_91_object, var_97_string, var_95_cvector); // 0x1288 Func
	return 4; // 0x128a Return
}


func_5249(var_88_bool, var_89_object)
{
	var_90_bool = 0; var_91_object = Obj(); // 0x1482 PushV
	var_91_object = var_89_object; // 0x1483 Mov
	func_5379(var_91_object); // 0x1484 NEW_2
	if(var_90_bool == 0) goto Label_5257; // 0x1486 JumpB
	var_88_bool = 1; // 0x1487 MovB
	return 0; // 0x1488 Return
	
Label_5257:
	var_88_bool = 0; // 0x1489 MovB
	return 0; // 0x148a Return
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
	func_4786(var_52_cvector, var_53_cvector); // 0x48e NEW_2
	var_59_float = 0.75; // 0x490 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x491 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x492 Add2
	func_4786(var_50_cvector, var_51_cvector); // 0x493 NEW_2
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


func_5259(var_71_bool, var_72_object)
{
	var_73_bool = 0; var_74_object = Obj(); // 0x148c PushV
	var_74_object = var_72_object; // 0x148d Mov
	func_5386(var_74_object); // 0x148e NEW_2
	if(var_73_bool == 0) goto Label_5267; // 0x1490 JumpB
	var_71_bool = 1; // 0x1491 MovB
	return 0; // 0x1492 Return
	
Label_5267:
	var_71_bool = 0; // 0x1493 MovB
	return 0; // 0x1494 Return
}


func_652(var_177_bool)
{
	var_177_bool = 1; // 0x28c MovB
	return 0; // 0x28d Return
}


func_4747()
{
	var_25_bool = 0; // 0x128b PushV
	func_5642(var_25_bool); // 0x128c NEW_2
	if(var_25_bool == 0) goto Label_4753; // 0x128e JumpB
	lshStopSpeech(); // 0x128f Func
	
Label_4753:
	return 0; // 0x1291 Return
}


func_654()
{
	StopAnimation(); // 0x28e Func
	StopGroup0(); // 0x290 Func
	return 0; // 0x292 Return
}


func_4754(var_61_string, var_62_int, var_63_int)
{
	var_64_bool = 0; var_65_bool = 0; // 0x1292 PushV
	var_66_bool = 0; var_67_int = 0; var_68_int = 0; // 0x1293 PushV
	var_67_int = var_62_int; // 0x1294 Mov
	var_68_int = var_63_int; // 0x1295 Mov
	func_4796(var_66_bool, var_67_int, var_68_int); // 0x1296 NEW_2
	if(var_66_bool == 0) goto Label_4764; // 0x1298 JumpB
	var_69_int = 0; // 0x1299 PushI
	AddItem(var_65_bool, var_61_string, var_69_int); // 0x129a Func
	
Label_4764:
	return 2; // 0x129c Return
}


func_659(var_0_bool, var_83_object)
{
	var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_bool = 0; var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_bool = 0; // 0x293 PushV
	var_0_bool = var_83_object; // 0x294 TMov
	func_710(var_90_bool); // 0x296 NEW_2
	GetDirection(var_88_cvector); // 0x298 Func
	var_98_cvector = CVector(0,0,0); var_99_object = Obj(); // 0x29a PushV
	var_99_object = var_0_bool; // 0x29b MovT
	func_4448(var_99_object); // 0x29c NEW_2
	var_89_cvector = var_98_cvector; // 0x29d Mov
	var_104_float = 0; var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); // 0x29f PushV
	var_105_cvector = var_88_cvector; // 0x2a0 Mov
	var_106_cvector = var_89_cvector; // 0x2a1 Mov
	func_4828(var_104_float, var_105_cvector, var_106_cvector); // 0x2a2 NEW_2
	var_128_int = 0; // 0x2a4 PushI
	var_129_bool = var_104_float < var_128_int; // 0x2a5 LT
	if(var_129_bool == 0) goto Label_685; // 0x2a6 JumpB
	var_130_object = Obj(); // 0x2a7 PushV
	var_130_object = var_0_bool; // 0x2a8 MovT
	func_4545(); // 0x2a9 NEW_2
	var_90_bool = 1; // 0x2ab MovB
	goto Label_688; // 0x2ac Jump
	
Label_688:
	var_139_bool = var_90_bool; // 0x2b0 Push
	if(var_139_bool == 0) goto Label_704; // 0x2b1 JumpB
	var_140_object = Obj(); // 0x2b2 PushV
	var_140_object = var_0_bool; // 0x2b3 MovT
	func_4545(); // 0x2b4 NEW_2
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


func_5269(var_96_bool, var_97_object)
{
	var_98_bool = 0; var_99_object = Obj(); // 0x1496 PushV
	var_99_object = var_97_object; // 0x1497 Mov
	func_5393(var_99_object); // 0x1498 NEW_2
	if(var_98_bool == 0) goto Label_5277; // 0x149a JumpB
	var_96_bool = 1; // 0x149b MovB
	return 0; // 0x149c Return
	
Label_5277:
	var_96_bool = 0; // 0x149d MovB
	return 0; // 0x149e Return
}


func_4765(var_39_string, var_40_int, var_41_int, var_42_int)
{
	var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_bool = 0; // 0x129d PushV
	var_47_bool = 0; var_48_int = 0; var_49_int = 0; // 0x129e PushV
	var_48_int = var_40_int; // 0x129f Mov
	var_49_int = var_41_int; // 0x12a0 Mov
	func_4796(var_47_bool, var_48_int, var_49_int); // 0x12a1 NEW_2
	if(var_47_bool == 0) goto Label_4779; // 0x12a3 JumpB
	irand(var_45_int, var_42_int); // 0x12a4 Func
	var_52_int = 0; // 0x12a6 PushI
	var_53_int = 1; // 0x12a7 PushI
	var_54_int = var_45_int + var_53_int; // 0x12a8 Add
	AddItem(var_46_bool, var_39_string, var_52_int, var_54_int); // 0x12a9 Func
	
Label_4779:
	return 4; // 0x12ab Return
}


func_5279(var_102_bool, var_103_object)
{
	var_104_bool = 0; var_105_object = Obj(); // 0x14a0 PushV
	var_105_object = var_103_object; // 0x14a1 Mov
	func_5400(var_105_object); // 0x14a2 NEW_2
	if(var_104_bool == 0) goto Label_5287; // 0x14a4 JumpB
	var_102_bool = 1; // 0x14a5 MovB
	return 0; // 0x14a6 Return
	
Label_5287:
	var_102_bool = 0; // 0x14a7 MovB
	return 0; // 0x14a8 Return
}


func_2208(var_2_bool, var_53_string)
{
	var_54_bool = 0; // 0x8a1 PushV
	func_5642(var_54_bool); // 0x8a2 NEW_2
	var_55_bool = var_54_bool == 0; // 0x8a4 Not
	if(var_55_bool == 0) goto Label_2215; // 0x8a5 JumpB
	return 0; // 0x8a6 Return
	
Label_2215:
	var_56_bool = var_53_string == var_2_bool; // 0x8a7 Eq
	if(var_56_bool == 0) goto Label_2218; // 0x8a8 JumpB
	return 0; // 0x8a9 Return
	
Label_2218:
	var_57_string = ""; var_58_bool = 0; // 0x8aa PushV
	var_57_string = var_53_string; // 0x8ab Mov
	var_59_string = ""; // 0x8ac PushS
	var_60_bool = var_53_string == var_59_string; // 0x8ad Eq
	if(var_60_bool == 0) goto Label_2225; // 0x8ae JumpB
	var_58_bool = 0; // 0x8af MovB
	goto Label_2226; // 0x8b0 Jump
	
Label_2226:
	func_4721(var_57_string, var_58_bool); // 0x8b2 NEW_2
	var_2_bool = var_53_string; // 0x8b4 TMov
	return 0; // 0x8b5 Return
	
Label_2225:
	var_58_bool = 1; // 0x8b1 MovB
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
	func_4443(var_168_cvector); // 0x4c4 NEW_2
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
	func_4443(var_180_cvector); // 0x4df NEW_2
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


func_5289(var_113_bool, var_114_object)
{
	var_115_bool = 0; var_116_object = Obj(); // 0x14aa PushV
	var_116_object = var_114_object; // 0x14ab Mov
	func_5407(var_116_object); // 0x14ac NEW_2
	if(var_115_bool == 0) goto Label_5297; // 0x14ae JumpB
	var_113_bool = 1; // 0x14af MovB
	return 0; // 0x14b0 Return
	
Label_5297:
	var_113_bool = 0; // 0x14b1 MovB
	return 0; // 0x14b2 Return
}


func_4780(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); // 0x12ac PushV
	self(var_32_object); // 0x12ad Func
	var_30_object = var_32_object; // 0x12af Mov
	return 2; // 0x12b0 Return
}


func_4786(var_52_cvector, var_53_cvector)
{
	var_54_float = 0; var_55_float = 0; // 0x12b2 PushV
	var_56_int = var_53_cvector | var_53_cvector; // 0x12b3 Or
	var_55_float = sqrt(var_56_int); // 0x12b4 Sqrt2
	var_57_float = 0.0; // 0x12b5 PushF
	var_58_bool = var_55_float < var_57_float; // 0x12b6 LT
	if(var_58_bool == 0) goto Label_4794; // 0x12b7 JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x12b8 MovV
	return 2; // 0x12b9 Return
	
Label_4794:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x12ba Div2
	return 2; // 0x12bb Return
}


func_1715(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x6b3 PushV
	GetDirection(var_77_cvector); // 0x6b4 Func
	var_79_cvector = CVector(0,0,0); var_80_object = Obj(); // 0x6b6 PushV
	var_80_object = var_0_bool; // 0x6b7 MovT
	func_4448(var_80_object); // 0x6b8 NEW_2
	var_78_cvector = var_79_cvector; // 0x6b9 Mov
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x6bb PushV
	var_86_cvector = var_77_cvector; // 0x6bc Mov
	var_87_cvector = var_78_cvector; // 0x6bd Mov
	func_4801(var_85_float, var_86_cvector, var_87_cvector); // 0x6be NEW_2
	var_93_float = -0.34202; // 0x6c0 PushF
	var_74_bool = var_85_float >= var_93_float; // 0x6c1 GE2
	return 4; // 0x6c2 Return
}


func_5299(var_119_bool, var_120_object)
{
	var_121_bool = 0; var_122_object = Obj(); // 0x14b4 PushV
	var_122_object = var_120_object; // 0x14b5 Mov
	func_5414(var_122_object); // 0x14b6 NEW_2
	if(var_121_bool == 0) goto Label_5307; // 0x14b8 JumpB
	var_119_bool = 1; // 0x14b9 MovB
	return 0; // 0x14ba Return
	
Label_5307:
	var_119_bool = 0; // 0x14bb MovB
	return 0; // 0x14bc Return
}


func_4796(var_47_bool, var_48_int, var_49_int)
{
	var_50_int = 0; var_51_int = 0; // 0x12bc PushV
	irand(var_51_int, var_49_int); // 0x12bd Func
	var_47_bool = var_51_int < var_48_int; // 0x12bf LT2
	return 2; // 0x12c0 Return
}


func_5309(var_125_bool, var_126_object)
{
	var_127_bool = 0; var_128_object = Obj(); // 0x14be PushV
	var_128_object = var_126_object; // 0x14bf Mov
	func_5421(var_128_object); // 0x14c0 NEW_2
	if(var_127_bool == 0) goto Label_5317; // 0x14c2 JumpB
	var_125_bool = 1; // 0x14c3 MovB
	return 0; // 0x14c4 Return
	
Label_5317:
	var_125_bool = 0; // 0x14c5 MovB
	return 0; // 0x14c6 Return
}


func_4801(var_85_float, var_86_cvector, var_87_cvector)
{
	var_88_int = var_86_cvector | var_87_cvector; // 0x12c2 Or
	var_89_int = var_86_cvector | var_86_cvector; // 0x12c3 Or
	var_90_int = var_87_cvector | var_87_cvector; // 0x12c4 Or
	var_91_float = var_89_int * var_90_int; // 0x12c5 Mult
	var_92_float = sqrt(var_91_float); // 0x12c6 Sqrt
	var_85_float = var_88_int / var_88_int; // 0x12c7 Div2
	return 0; // 0x12c8 Return
}


func_1731(var_0_bool, var_47_int, var_48_object)
{
	var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_object = Obj(); var_55_bool = 0; var_56_int = 0; var_57_bool = 0; // 0x6c3 PushV
	var_0_bool = var_48_object; // 0x6c4 TMov
	var_58_bool = 0; var_59_object = Obj(); var_60_float = 0; // 0x6c5 PushV
	var_59_object = var_48_object; // 0x6c6 Mov
	var_60_float = 70.0; // 0x6c7 MovF
	func_4561(var_59_object, var_60_float); // 0x6c8 NEW_2
	var_104_bool = var_58_bool == 0; // 0x6ca Not
	if(var_104_bool == 0) goto Label_1742; // 0x6cb JumpB
	var_47_int = -2; // 0x6cc MovI
	return 8; // 0x6cd Return
	
Label_1742:
	CreateDialog(var_54_object); // 0x6ce Func
	var_105_int = 0; // 0x6d0 PushV
	func_5636(var_105_int); // 0x6d1 NEW_2
	SetNPCName(var_105_int); // 0x6d3 ObjFunc
	var_106_int = 0; // 0x6d5 PushV
	func_5634(var_106_int); // 0x6d6 NEW_2
	SetNPCDescription(var_106_int); // 0x6d8 ObjFunc
	var_107_string = ""; // 0x6da PushV
	func_5638(var_107_string); // 0x6db NEW_2
	SetPhoto(var_107_string); // 0x6dd ObjFunc
	var_108_string = ""; // 0x6df PushV
	func_5640(var_108_string); // 0x6e0 NEW_2
	SetPhoto2(var_108_string); // 0x6e2 ObjFunc
	var_109_int = 0; // 0x6e4 PushV
	func_5484(var_109_int); // 0x6e5 NEW_2
	SetPlayerName(var_109_int); // 0x6e7 ObjFunc
	var_56_int = -1; // 0x6e9 MovI
	IsOverrideActive(var_55_bool); // 0x6ea Func
	var_117_bool = var_55_bool; // 0x6ec Push
	if(var_117_bool == 0) goto Label_1776; // 0x6ed JumpB
	var_47_int = -2; // 0x6ee MovI
	return 8; // 0x6ef Return
	
Label_1776:
	DoDialog(var_54_object); // 0x6f0 Func
	var_118_object = Obj(); var_119_object = Obj(); // 0x6f2 PushV
	var_118_object = var_48_object; // 0x6f3 Mov
	var_119_object = var_54_object; // 0x6f4 Mov
	TaskCall(9); // 0x6f5 TaskCall
	func_1805(var_120_object, var_121_object, var_122_string, var_123_bool, var_118_object, var_119_object); // 0x6f6 NEW_2
	TaskReturn(); // 0x6f7 TaskReturn
	IsDialogEnd(var_57_bool); // 0x6f9 ObjFunc
	
Label_1787:
	var_375_bool = var_57_bool == 0; // 0x6fb Not
	if(var_375_bool == 0) goto Label_1794; // 0x6fc JumpB
	sync(); // 0x6fd Func
	IsDialogEnd(var_57_bool); // 0x6ff ObjFunc
	goto Label_1787; // 0x701 Jump
	
Label_1794:
	var_376_object = Obj(); // 0x702 PushV
	var_376_object = var_48_object; // 0x703 Mov
	func_4629(); // 0x704 NEW_2
	StopDialog(var_54_object); // 0x706 Func
	GetReturnValue(var_56_int); // 0x708 ObjFunc
	var_47_int = var_56_int; // 0x70a Mov
	return 8; // 0x70b Return
}


func_710(var_0_bool)
{
	var_91_object = Obj(); // 0x2c6 PushV
	var_91_object = var_0_bool; // 0x2c7 MovT
	func_4736(var_91_object); // 0x2c8 NEW_2
	return 0; // 0x2ca Return
}


func_5319(var_138_bool, var_139_object)
{
	var_140_bool = 0; var_141_object = Obj(); // 0x14c8 PushV
	var_141_object = var_139_object; // 0x14c9 Mov
	func_5428(var_141_object); // 0x14ca NEW_2
	if(var_140_bool == 0) goto Label_5327; // 0x14cc JumpB
	var_138_bool = 1; // 0x14cd MovB
	return 0; // 0x14ce Return
	
Label_5327:
	var_138_bool = 0; // 0x14cf MovB
	return 0; // 0x14d0 Return
}


func_4809(var_75_float, var_76_cvector, var_77_cvector)
{
	var_78_float = GetByIndex(var_76_cvector, 0); // 0x12ca PushE
	var_79_float = GetByIndex(var_77_cvector, 0); // 0x12cb PushE
	var_80_float = var_78_float * var_79_float; // 0x12cc Mult
	var_81_float = GetByIndex(var_76_cvector, 2); // 0x12cd PushE
	var_82_float = GetByIndex(var_77_cvector, 2); // 0x12ce PushE
	var_83_float = var_81_float * var_82_float; // 0x12cf Mult
	var_75_float = var_80_float + var_83_float; // 0x12d0 Add2
	return 0; // 0x12d1 Return
}


func_5329(var_144_bool, var_145_object)
{
	var_146_bool = 0; var_147_object = Obj(); // 0x14d2 PushV
	var_147_object = var_145_object; // 0x14d3 Mov
	func_5435(var_147_object); // 0x14d4 NEW_2
	if(var_146_bool == 0) goto Label_5337; // 0x14d6 JumpB
	var_144_bool = 1; // 0x14d7 MovB
	return 0; // 0x14d8 Return
	
Label_5337:
	var_144_bool = 0; // 0x14d9 MovB
	return 0; // 0x14da Return
}


func_4818(var_84_float, var_85_cvector)
{
	var_86_float = GetByIndex(var_85_cvector, 0); // 0x12d3 PushE
	var_87_float = GetByIndex(var_85_cvector, 0); // 0x12d4 PushE
	var_88_float = var_86_float * var_87_float; // 0x12d5 Mult
	var_89_float = GetByIndex(var_85_cvector, 2); // 0x12d6 PushE
	var_90_float = GetByIndex(var_85_cvector, 2); // 0x12d7 PushE
	var_91_float = var_89_float * var_90_float; // 0x12d8 Mult
	var_92_int = var_88_float + var_91_float; // 0x12d9 Add
	var_84_float = sqrt(var_92_int); // 0x12da Sqrt2
	return 0; // 0x12db Return
}


func_5339(var_150_bool, var_151_object)
{
	var_152_bool = 0; var_153_object = Obj(); // 0x14dc PushV
	var_153_object = var_151_object; // 0x14dd Mov
	func_5442(var_153_object); // 0x14de NEW_2
	if(var_152_bool == 0) goto Label_5347; // 0x14e0 JumpB
	var_150_bool = 1; // 0x14e1 MovB
	return 0; // 0x14e2 Return
	
Label_5347:
	var_150_bool = 0; // 0x14e3 MovB
	return 0; // 0x14e4 Return
}


func_4828(var_72_float, var_73_cvector, var_74_cvector)
{
	var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); // 0x12dd PushV
	var_76_cvector = var_73_cvector; // 0x12de Mov
	var_77_cvector = var_74_cvector; // 0x12df Mov
	func_4809(var_75_float, var_76_cvector, var_77_cvector); // 0x12e0 NEW_2
	var_84_float = 0; var_85_cvector = CVector(0,0,0); // 0x12e2 PushV
	var_85_cvector = var_73_cvector; // 0x12e3 Mov
	func_4818(var_84_float, var_85_cvector); // 0x12e4 NEW_2
	var_93_float = 0; var_94_cvector = CVector(0,0,0); // 0x12e6 PushV
	var_94_cvector = var_74_cvector; // 0x12e7 Mov
	func_4818(var_93_float, var_94_cvector); // 0x12e8 NEW_2
	var_95_float = var_84_float * var_93_float; // 0x12ea Mult
	var_72_float = var_75_float / var_75_float; // 0x12eb Div2
	return 0; // 0x12ec Return
}


func_5349(var_156_bool, var_157_object)
{
	var_158_bool = 0; var_159_object = Obj(); // 0x14e6 PushV
	var_159_object = var_157_object; // 0x14e7 Mov
	func_5449(var_159_object); // 0x14e8 NEW_2
	if(var_158_bool == 0) goto Label_5357; // 0x14ea JumpB
	var_156_bool = 1; // 0x14eb MovB
	return 0; // 0x14ec Return
	
Label_5357:
	var_156_bool = 0; // 0x14ed MovB
	return 0; // 0x14ee Return
}


func_4845(var_47_int, var_48_string)
{
	var_49_int = 0; var_50_int = 0; // 0x12ed PushV
	GetVariable(var_48_string, var_50_int); // 0x12ee Func
	var_47_int = var_50_int; // 0x12f0 Mov
	return 2; // 0x12f1 Return
}


func_5359(var_162_bool, var_163_object)
{
	var_164_bool = 0; var_165_object = Obj(); // 0x14f0 PushV
	var_165_object = var_163_object; // 0x14f1 Mov
	func_5456(var_165_object); // 0x14f2 NEW_2
	if(var_164_bool == 0) goto Label_5367; // 0x14f4 JumpB
	var_162_bool = 1; // 0x14f5 MovB
	return 0; // 0x14f6 Return
	
Label_5367:
	var_162_bool = 0; // 0x14f7 MovB
	return 0; // 0x14f8 Return
}


func_4850(var_32_int)
{
	var_33_float = 0; var_34_float = 0; // 0x12f2 PushV
	GetGameTime(var_34_float); // 0x12f3 Func
	var_35_int = 1; // 0x12f5 PushI
	var_36_int = 0; // 0x12f6 PushV
	var_37_int = 24; // 0x12f7 PushI
	var_36_int = var_34_float / var_34_float; // 0x12f8 Div2
	var_32_int = var_35_int + var_36_int; // 0x12f9 Add2
	return 2; // 0x12fa Return
}


func_5369(var_245_bool, var_246_object)
{
	var_247_bool = 0; var_248_object = Obj(); // 0x14fa PushV
	var_248_object = var_246_object; // 0x14fb Mov
	func_5463(var_248_object); // 0x14fc NEW_2
	if(var_247_bool == 0) goto Label_5377; // 0x14fe JumpB
	var_245_bool = 1; // 0x14ff MovB
	return 0; // 0x1500 Return
	
Label_5377:
	var_245_bool = 0; // 0x1501 MovB
	return 0; // 0x1502 Return
}


func_251(var_2_bool)
{
	var_23_int = 110; // 0xfb PushI
	KillTimer(var_23_int); // 0xfc Func
	var_2_bool = 0; // 0xfe TMovB
	func_387(var_21_string, var_22_bool); // 0x100 NEW_2
	return 0; // 0x102 Return
}


func_4859(var_250_int)
{
	var_251_float = 0; var_252_float = 0; // 0x12fb PushV
	GetGameTime(var_252_float); // 0x12fc Func
	var_253_int = 0; // 0x12fe PushV
	var_253_int = var_252_float; // 0x12ff Mov
	var_254_int = 24; // 0x1300 PushI
	var_250_int = var_253_int % var_254_int; // 0x1301 Mod2
	return 2; // 0x1302 Return
}


func_259(var_2_bool)
{
	var_81_int = 110; // 0x103 PushI
	KillTimer(var_81_int); // 0x104 Func
	var_2_bool = 0; // 0x106 TMovB
	func_394(var_26_bool, var_27_int); // 0x108 NEW_2
	return 0; // 0x10a Return
}


func_5379(var_90_bool)
{
	var_92_int = 0; // 0x1504 PushV
	func_4850(var_92_int); // 0x1505 NEW_2
	var_93_int = 1; // 0x1507 PushI
	var_90_bool = var_92_int == var_93_int; // 0x1508 Eq2
	return 0; // 0x1509 Return
}


func_5386(var_73_bool)
{
	var_75_int = 0; // 0x150b PushV
	func_4850(var_75_int); // 0x150c NEW_2
	var_81_int = 2; // 0x150e PushI
	var_73_bool = var_75_int == var_81_int; // 0x150f Eq2
	return 0; // 0x1510 Return
}


func_4875(var_26_bool, var_27_object, var_28_string)
{
	var_29_string = "unholster"; // 0x130c PushS
	var_30_bool = var_28_string == var_29_string; // 0x130d Eq
	if(var_30_bool == 0) goto Label_4886; // 0x130e JumpB
	var_31_bool = 0; var_32_object = Obj(); // 0x130f PushV
	var_32_object = var_27_object; // 0x1310 Mov
	func_5166(var_31_bool, var_32_object); // 0x1311 NEW_2
	var_26_bool = var_31_bool; // 0x1312 Mov
	return 0; // 0x1314 Return
	
Label_4886:
	var_35_string = "player_shot"; // 0x1316 PushS
	var_36_bool = var_28_string == var_35_string; // 0x1317 Eq
	if(var_36_bool == 0) goto Label_4896; // 0x1318 JumpB
	var_37_bool = 0; var_38_object = Obj(); // 0x1319 PushV
	var_38_object = var_27_object; // 0x131a Mov
	func_5179(var_37_bool, var_38_object); // 0x131b NEW_2
	var_26_bool = var_37_bool; // 0x131c Mov
	return 0; // 0x131e Return
	
Label_4896:
	var_52_string = "battle"; // 0x1320 PushS
	var_53_bool = var_28_string == var_52_string; // 0x1321 Eq
	if(var_53_bool == 0) goto Label_4905; // 0x1322 JumpB
	var_54_bool = 0; var_55_object = Obj(); // 0x1323 PushV
	var_55_object = var_27_object; // 0x1324 Mov
	func_5202(var_54_bool, var_55_object); // 0x1325 NEW_2
	var_26_bool = var_54_bool; // 0x1326 Mov
	return 0; // 0x1328 Return
	
Label_4905:
	var_26_bool = 0; // 0x1329 MovB
	return 0; // 0x132a Return
}


func_1805(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_118_object, var_119_object)
{
	var_0_bool = var_119_object; // 0x70e TMov
	var_1_bool = var_118_object; // 0x70f TMov
	var_3_bool = 0; // 0x710 TMovB
	var_124_int = 1; // 0x711 PushI
	if(var_124_int == 0) goto Label_2178; // 0x712 JumpB
	var_125_bool = 0; var_126_object = Obj(); // 0x713 PushV
	var_126_object = var_1_bool; // 0x714 MovT
	func_5237(var_126_object); // 0x715 NEW_2
	if(var_125_bool == 0) goto Label_2094; // 0x717 JumpB
	var_133_string = ""; // 0x718 PushV
	var_133_string = "Neutral"; // 0x719 MovS
	func_2208(var_119_object, var_133_string); // 0x71a NEW_2
	var_150_int = 543209; // 0x71c PushI
	SetMessage(var_150_int); // 0x71d TObjFunc
	ClearReplies(); // 0x71f TObjFunc
	var_151_bool = 0; var_152_object = Obj(); // 0x721 PushV
	var_152_object = var_1_bool; // 0x722 MovT
	func_5259(var_151_bool, var_152_object); // 0x723 NEW_2
	if(var_151_bool == 0) goto Label_1835; // 0x725 JumpB
	var_162_int = 543214; // 0x726 PushI
	var_163_int = 45672; // 0x727 PushI
	var_164_int = 45670; // 0x728 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x729 TObjFunc
	
Label_1835:
	var_165_bool = 0; // 0x72b PushV
	var_165_bool = 1; // 0x72c MovB
	var_166_bool = 0; // 0x72d PushV
	var_166_bool = 1; // 0x72e MovB
	var_167_bool = 0; // 0x72f PushV
	var_167_bool = 1; // 0x730 MovB
	var_168_bool = 0; var_169_object = Obj(); // 0x731 PushV
	var_169_object = var_1_bool; // 0x732 MovT
	func_5249(var_168_bool, var_169_object); // 0x733 NEW_2
	if(var_168_bool == 0) goto Label_1852; // 0x735 JumpB
	var_174_bool = 0; var_175_object = Obj(); // 0x736 PushV
	var_175_object = var_1_bool; // 0x737 MovT
	func_5259(var_174_bool, var_175_object); // 0x738 NEW_2
	if(var_174_bool == 0) goto Label_1852; // 0x73a JumpB
	var_167_bool = 0; // 0x73b MovB
	
Label_1852:
	if(var_167_bool == 0) goto Label_1859; // 0x73c JumpB
	var_176_bool = 0; var_177_object = Obj(); // 0x73d PushV
	var_177_object = var_1_bool; // 0x73e MovT
	func_5269(var_176_bool, var_177_object); // 0x73f NEW_2
	if(var_176_bool == 0) goto Label_1859; // 0x741 JumpB
	var_166_bool = 0; // 0x742 MovB
	
Label_1859:
	if(var_166_bool == 0) goto Label_1866; // 0x743 JumpB
	var_182_bool = 0; var_183_object = Obj(); // 0x744 PushV
	var_183_object = var_1_bool; // 0x745 MovT
	func_5279(var_182_bool, var_183_object); // 0x746 NEW_2
	if(var_182_bool == 0) goto Label_1866; // 0x748 JumpB
	var_165_bool = 0; // 0x749 MovB
	
Label_1866:
	if(var_165_bool == 0) goto Label_1872; // 0x74a JumpB
	var_188_int = 543210; // 0x74b PushI
	var_189_int = -1; // 0x74c PushI
	var_190_int = 45666; // 0x74d PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x74e TObjFunc
	
Label_1872:
	var_191_bool = 0; // 0x750 PushV
	var_191_bool = 1; // 0x751 MovB
	var_192_bool = 0; // 0x752 PushV
	var_192_bool = 1; // 0x753 MovB
	var_193_bool = 0; var_194_object = Obj(); // 0x754 PushV
	var_194_object = var_1_bool; // 0x755 MovT
	func_5289(var_193_bool, var_194_object); // 0x756 NEW_2
	if(var_193_bool == 0) goto Label_1887; // 0x758 JumpB
	var_199_bool = 0; var_200_object = Obj(); // 0x759 PushV
	var_200_object = var_1_bool; // 0x75a MovT
	func_5299(var_199_bool, var_200_object); // 0x75b NEW_2
	if(var_199_bool == 0) goto Label_1887; // 0x75d JumpB
	var_192_bool = 0; // 0x75e MovB
	
Label_1887:
	if(var_192_bool == 0) goto Label_1894; // 0x75f JumpB
	var_205_bool = 0; var_206_object = Obj(); // 0x760 PushV
	var_206_object = var_1_bool; // 0x761 MovT
	func_5309(var_205_bool, var_206_object); // 0x762 NEW_2
	if(var_205_bool == 0) goto Label_1894; // 0x764 JumpB
	var_191_bool = 0; // 0x765 MovB
	
Label_1894:
	if(var_191_bool == 0) goto Label_1900; // 0x766 JumpB
	var_211_int = 543211; // 0x767 PushI
	var_212_int = -1; // 0x768 PushI
	var_213_int = 45667; // 0x769 PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x76a TObjFunc
	
Label_1900:
	var_214_bool = 0; // 0x76c PushV
	var_214_bool = 1; // 0x76d MovB
	var_215_bool = 0; // 0x76e PushV
	var_215_bool = 1; // 0x76f MovB
	var_216_bool = 0; // 0x770 PushV
	var_216_bool = 1; // 0x771 MovB
	var_217_bool = 0; // 0x772 PushV
	var_217_bool = 1; // 0x773 MovB
	var_218_bool = 0; var_219_object = Obj(); // 0x774 PushV
	var_219_object = var_1_bool; // 0x775 MovT
	func_5319(var_218_bool, var_219_object); // 0x776 NEW_2
	if(var_218_bool == 0) goto Label_1919; // 0x778 JumpB
	var_224_bool = 0; var_225_object = Obj(); // 0x779 PushV
	var_225_object = var_1_bool; // 0x77a MovT
	func_5329(var_224_bool, var_225_object); // 0x77b NEW_2
	if(var_224_bool == 0) goto Label_1919; // 0x77d JumpB
	var_217_bool = 0; // 0x77e MovB
	
Label_1919:
	if(var_217_bool == 0) goto Label_1926; // 0x77f JumpB
	var_230_bool = 0; var_231_object = Obj(); // 0x780 PushV
	var_231_object = var_1_bool; // 0x781 MovT
	func_5339(var_230_bool, var_231_object); // 0x782 NEW_2
	if(var_230_bool == 0) goto Label_1926; // 0x784 JumpB
	var_216_bool = 0; // 0x785 MovB
	
Label_1926:
	if(var_216_bool == 0) goto Label_1933; // 0x786 JumpB
	var_236_bool = 0; var_237_object = Obj(); // 0x787 PushV
	var_237_object = var_1_bool; // 0x788 MovT
	func_5349(var_236_bool, var_237_object); // 0x789 NEW_2
	if(var_236_bool == 0) goto Label_1933; // 0x78b JumpB
	var_215_bool = 0; // 0x78c MovB
	
Label_1933:
	if(var_215_bool == 0) goto Label_1940; // 0x78d JumpB
	var_242_bool = 0; var_243_object = Obj(); // 0x78e PushV
	var_243_object = var_1_bool; // 0x78f MovT
	func_5359(var_242_bool, var_243_object); // 0x790 NEW_2
	if(var_242_bool == 0) goto Label_1940; // 0x792 JumpB
	var_214_bool = 0; // 0x793 MovB
	
Label_1940:
	if(var_214_bool == 0) goto Label_1946; // 0x794 JumpB
	var_248_int = 543212; // 0x795 PushI
	var_249_int = -1; // 0x796 PushI
	var_250_int = 45668; // 0x797 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x798 TObjFunc
	
Label_1946:
	var_251_bool = 0; // 0x79a PushV
	var_251_bool = 1; // 0x79b MovB
	var_252_bool = 0; // 0x79c PushV
	var_252_bool = 1; // 0x79d MovB
	var_253_bool = 0; // 0x79e PushV
	var_253_bool = 1; // 0x79f MovB
	var_254_bool = 0; // 0x7a0 PushV
	var_254_bool = 1; // 0x7a1 MovB
	var_255_bool = 0; var_256_object = Obj(); // 0x7a2 PushV
	var_256_object = var_1_bool; // 0x7a3 MovT
	func_5249(var_255_bool, var_256_object); // 0x7a4 NEW_2
	if(var_255_bool == 0) goto Label_1965; // 0x7a6 JumpB
	var_257_bool = 0; var_258_object = Obj(); // 0x7a7 PushV
	var_258_object = var_1_bool; // 0x7a8 MovT
	func_5259(var_257_bool, var_258_object); // 0x7a9 NEW_2
	if(var_257_bool == 0) goto Label_1965; // 0x7ab JumpB
	var_254_bool = 0; // 0x7ac MovB
	
Label_1965:
	if(var_254_bool == 0) goto Label_1972; // 0x7ad JumpB
	var_259_bool = 0; var_260_object = Obj(); // 0x7ae PushV
	var_260_object = var_1_bool; // 0x7af MovT
	func_5279(var_259_bool, var_260_object); // 0x7b0 NEW_2
	if(var_259_bool == 0) goto Label_1972; // 0x7b2 JumpB
	var_253_bool = 0; // 0x7b3 MovB
	
Label_1972:
	if(var_253_bool == 0) goto Label_1979; // 0x7b4 JumpB
	var_261_bool = 0; var_262_object = Obj(); // 0x7b5 PushV
	var_262_object = var_1_bool; // 0x7b6 MovT
	func_5289(var_261_bool, var_262_object); // 0x7b7 NEW_2
	if(var_261_bool == 0) goto Label_1979; // 0x7b9 JumpB
	var_252_bool = 0; // 0x7ba MovB
	
Label_1979:
	if(var_252_bool == 0) goto Label_1986; // 0x7bb JumpB
	var_263_bool = 0; var_264_object = Obj(); // 0x7bc PushV
	var_264_object = var_1_bool; // 0x7bd MovT
	func_5309(var_263_bool, var_264_object); // 0x7be NEW_2
	if(var_263_bool == 0) goto Label_1986; // 0x7c0 JumpB
	var_251_bool = 0; // 0x7c1 MovB
	
Label_1986:
	if(var_251_bool == 0) goto Label_1992; // 0x7c2 JumpB
	var_265_int = 543213; // 0x7c3 PushI
	var_266_int = -1; // 0x7c4 PushI
	var_267_int = 45669; // 0x7c5 PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x7c6 TObjFunc
	
Label_1992:
	var_268_bool = 0; // 0x7c8 PushV
	var_268_bool = 1; // 0x7c9 MovB
	var_269_bool = 0; // 0x7ca PushV
	var_269_bool = 1; // 0x7cb MovB
	var_270_bool = 0; // 0x7cc PushV
	var_270_bool = 1; // 0x7cd MovB
	var_271_bool = 0; // 0x7ce PushV
	var_271_bool = 1; // 0x7cf MovB
	var_272_bool = 0; // 0x7d0 PushV
	var_272_bool = 1; // 0x7d1 MovB
	var_273_bool = 0; // 0x7d2 PushV
	var_273_bool = 1; // 0x7d3 MovB
	var_274_bool = 0; var_275_object = Obj(); // 0x7d4 PushV
	var_275_object = var_1_bool; // 0x7d5 MovT
	func_5269(var_274_bool, var_275_object); // 0x7d6 NEW_2
	if(var_274_bool == 0) goto Label_2015; // 0x7d8 JumpB
	var_276_bool = 0; var_277_object = Obj(); // 0x7d9 PushV
	var_277_object = var_1_bool; // 0x7da MovT
	func_5299(var_276_bool, var_277_object); // 0x7db NEW_2
	if(var_276_bool == 0) goto Label_2015; // 0x7dd JumpB
	var_273_bool = 0; // 0x7de MovB
	
Label_2015:
	if(var_273_bool == 0) goto Label_2022; // 0x7df JumpB
	var_278_bool = 0; var_279_object = Obj(); // 0x7e0 PushV
	var_279_object = var_1_bool; // 0x7e1 MovT
	func_5329(var_278_bool, var_279_object); // 0x7e2 NEW_2
	if(var_278_bool == 0) goto Label_2022; // 0x7e4 JumpB
	var_272_bool = 0; // 0x7e5 MovB
	
Label_2022:
	if(var_272_bool == 0) goto Label_2029; // 0x7e6 JumpB
	var_280_bool = 0; var_281_object = Obj(); // 0x7e7 PushV
	var_281_object = var_1_bool; // 0x7e8 MovT
	func_5359(var_280_bool, var_281_object); // 0x7e9 NEW_2
	if(var_280_bool == 0) goto Label_2029; // 0x7eb JumpB
	var_271_bool = 0; // 0x7ec MovB
	
Label_2029:
	if(var_271_bool == 0) goto Label_2036; // 0x7ed JumpB
	var_282_bool = 0; var_283_object = Obj(); // 0x7ee PushV
	var_283_object = var_1_bool; // 0x7ef MovT
	func_5259(var_282_bool, var_283_object); // 0x7f0 NEW_2
	if(var_282_bool == 0) goto Label_2036; // 0x7f2 JumpB
	var_270_bool = 0; // 0x7f3 MovB
	
Label_2036:
	if(var_270_bool == 0) goto Label_2043; // 0x7f4 JumpB
	var_284_bool = 0; var_285_object = Obj(); // 0x7f5 PushV
	var_285_object = var_1_bool; // 0x7f6 MovT
	func_5319(var_284_bool, var_285_object); // 0x7f7 NEW_2
	if(var_284_bool == 0) goto Label_2043; // 0x7f9 JumpB
	var_269_bool = 0; // 0x7fa MovB
	
Label_2043:
	if(var_269_bool == 0) goto Label_2050; // 0x7fb JumpB
	var_286_bool = 0; var_287_object = Obj(); // 0x7fc PushV
	var_287_object = var_1_bool; // 0x7fd MovT
	func_5339(var_286_bool, var_287_object); // 0x7fe NEW_2
	if(var_286_bool == 0) goto Label_2050; // 0x800 JumpB
	var_268_bool = 0; // 0x801 MovB
	
Label_2050:
	if(var_268_bool == 0) goto Label_2056; // 0x802 JumpB
	var_288_int = 543215; // 0x803 PushI
	var_289_int = -1; // 0x804 PushI
	var_290_int = 45671; // 0x805 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x806 TObjFunc
	
Label_2056:
	var_291_bool = 0; // 0x808 PushV
	var_291_bool = 1; // 0x809 MovB
	var_292_bool = 0; // 0x80a PushV
	var_292_bool = 1; // 0x80b MovB
	var_293_bool = 0; // 0x80c PushV
	var_293_bool = 1; // 0x80d MovB
	var_294_bool = 0; var_295_object = Obj(); // 0x80e PushV
	var_295_object = var_1_bool; // 0x80f MovT
	func_5349(var_294_bool, var_295_object); // 0x810 NEW_2
	if(var_294_bool == 0) goto Label_2073; // 0x812 JumpB
	var_296_bool = 0; var_297_object = Obj(); // 0x813 PushV
	var_297_object = var_1_bool; // 0x814 MovT
	func_5329(var_296_bool, var_297_object); // 0x815 NEW_2
	if(var_296_bool == 0) goto Label_2073; // 0x817 JumpB
	var_293_bool = 0; // 0x818 MovB
	
Label_2073:
	if(var_293_bool == 0) goto Label_2080; // 0x819 JumpB
	var_298_bool = 0; var_299_object = Obj(); // 0x81a PushV
	var_299_object = var_1_bool; // 0x81b MovT
	func_5319(var_298_bool, var_299_object); // 0x81c NEW_2
	if(var_298_bool == 0) goto Label_2080; // 0x81e JumpB
	var_292_bool = 0; // 0x81f MovB
	
Label_2080:
	if(var_292_bool == 0) goto Label_2087; // 0x820 JumpB
	var_300_bool = 0; var_301_object = Obj(); // 0x821 PushV
	var_301_object = var_1_bool; // 0x822 MovT
	func_5309(var_300_bool, var_301_object); // 0x823 NEW_2
	if(var_300_bool == 0) goto Label_2087; // 0x825 JumpB
	var_291_bool = 0; // 0x826 MovB
	
Label_2087:
	if(var_291_bool == 0) goto Label_2093; // 0x827 JumpB
	var_302_int = 543219; // 0x828 PushI
	var_303_int = -1; // 0x829 PushI
	var_304_int = 45675; // 0x82a PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0x82b TObjFunc
	
Label_2093:
	goto Label_2178; // 0x82d Jump
	
Label_2178:
	var_305_bool = 0; // 0x882 PushV
	func_5642(var_305_bool); // 0x883 NEW_2
	if(var_305_bool == 0) goto Label_2193; // 0x885 JumpB
	
Label_2182:
	lshWaitForAnimEnd(); // 0x886 Func
	var_306_bool = var_3_bool; // 0x888 PushT
	if(var_306_bool == 0) goto Label_2187; // 0x889 JumpB
	goto Label_2192; // 0x88a Jump
	
Label_2192:
	goto Label_2207; // 0x890 Jump
	
Label_2207:
	return 0; // 0x89f Return
	
Label_2187:
	var_307_string = ""; // 0x88b PushV
	var_307_string = var_2_bool; // 0x88c MovT
	func_4705(var_307_string); // 0x88d NEW_2
	goto Label_2182; // 0x88f Jump
	
Label_2193:
	var_318_string = "all"; // 0x891 PushS
	var_319_string = "idle"; // 0x892 PushS
	PlayAnimation(var_318_string, var_319_string); // 0x893 Func
	
Label_2197:
	WaitForAnimEnd(); // 0x895 Func
	var_320_bool = var_3_bool; // 0x897 PushT
	if(var_320_bool == 0) goto Label_2202; // 0x898 JumpB
	goto Label_2207; // 0x899 Jump
	
Label_2202:
	var_321_string = "all"; // 0x89a PushS
	var_322_string = "idle"; // 0x89b PushS
	PlayAnimation(var_321_string, var_322_string); // 0x89c Func
	goto Label_2197; // 0x89e Jump
	
Label_2094:
	var_323_string = ""; // 0x82e PushV
	var_323_string = "Neutral"; // 0x82f MovS
	func_2208(var_119_object, var_323_string); // 0x830 NEW_2
	var_324_int = 537240; // 0x832 PushI
	SetMessage(var_324_int); // 0x833 TObjFunc
	ClearReplies(); // 0x835 TObjFunc
	var_325_int = 537241; // 0x837 PushI
	var_326_int = -1; // 0x838 PushI
	var_327_int = 39084; // 0x839 PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0x83a TObjFunc
	var_328_bool = 0; // 0x83c PushV
	var_328_bool = 0; // 0x83d MovB
	var_329_bool = 0; var_330_object = Obj(); // 0x83e PushV
	var_330_object = var_1_bool; // 0x83f MovT
	func_5225(var_330_object); // 0x840 NEW_2
	if(var_329_bool == 0) goto Label_2121; // 0x842 JumpB
	var_335_bool = 0; var_336_object = Obj(); // 0x843 PushV
	var_336_object = var_1_bool; // 0x844 MovT
	func_5249(var_335_bool, var_336_object); // 0x845 NEW_2
	if(var_335_bool == 0) goto Label_2121; // 0x847 JumpB
	var_328_bool = 1; // 0x848 MovB
	
Label_2121:
	if(var_328_bool == 0) goto Label_2127; // 0x849 JumpB
	var_337_int = 537242; // 0x84a PushI
	var_338_int = 39086; // 0x84b PushI
	var_339_int = 39085; // 0x84c PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0x84d TObjFunc
	
Label_2127:
	var_340_bool = 0; // 0x84f PushV
	var_340_bool = 0; // 0x850 MovB
	var_341_bool = 0; var_342_object = Obj(); // 0x851 PushV
	var_342_object = var_1_bool; // 0x852 MovT
	func_5269(var_341_bool, var_342_object); // 0x853 NEW_2
	if(var_341_bool == 0) goto Label_2140; // 0x855 JumpB
	var_343_bool = 0; var_344_object = Obj(); // 0x856 PushV
	var_344_object = var_1_bool; // 0x857 MovT
	func_5369(var_343_bool, var_344_object); // 0x858 NEW_2
	if(var_343_bool == 0) goto Label_2140; // 0x85a JumpB
	var_340_bool = 1; // 0x85b MovB
	
Label_2140:
	if(var_340_bool == 0) goto Label_2146; // 0x85c JumpB
	var_358_int = 537352; // 0x85d PushI
	var_359_int = 39199; // 0x85e PushI
	var_360_int = 39198; // 0x85f PushI
	AddReply(var_358_int, var_359_int, var_360_int); // 0x860 TObjFunc
	
Label_2146:
	var_361_bool = 0; // 0x862 PushV
	var_361_bool = 0; // 0x863 MovB
	var_362_bool = 0; var_363_object = Obj(); // 0x864 PushV
	var_363_object = var_1_bool; // 0x865 MovT
	func_5279(var_362_bool, var_363_object); // 0x866 NEW_2
	if(var_362_bool == 0) goto Label_2159; // 0x868 JumpB
	var_364_bool = 0; var_365_object = Obj(); // 0x869 PushV
	var_365_object = var_1_bool; // 0x86a MovT
	func_5369(var_364_bool, var_365_object); // 0x86b NEW_2
	if(var_364_bool == 0) goto Label_2159; // 0x86d JumpB
	var_361_bool = 1; // 0x86e MovB
	
Label_2159:
	if(var_361_bool == 0) goto Label_2165; // 0x86f JumpB
	var_366_int = 537380; // 0x870 PushI
	var_367_int = 39227; // 0x871 PushI
	var_368_int = 39226; // 0x872 PushI
	AddReply(var_366_int, var_367_int, var_368_int); // 0x873 TObjFunc
	
Label_2165:
	var_369_int = 537503; // 0x875 PushI
	var_370_int = -1; // 0x876 PushI
	var_371_int = 39350; // 0x877 PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0x878 TObjFunc
	var_372_int = 537504; // 0x87a PushI
	var_373_int = -1; // 0x87b PushI
	var_374_int = 39351; // 0x87c PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x87d TObjFunc
	goto Label_2178; // 0x87f Jump
}


func_5393(var_98_bool)
{
	var_100_int = 0; // 0x1512 PushV
	func_4850(var_100_int); // 0x1513 NEW_2
	var_101_int = 3; // 0x1515 PushI
	var_98_bool = var_100_int == var_101_int; // 0x1516 Eq2
	return 0; // 0x1517 Return
}


func_276(var_2_bool, var_23_object)
{
	var_24_bool = 0; var_25_int = 0; var_26_bool = 0; var_27_int = 0; // 0x114 PushV
	var_28_bool = 0; var_29_object = Obj(); // 0x115 PushV
	var_29_object = var_23_object; // 0x116 Mov
	func_4521(var_28_bool, var_29_object); // 0x117 NEW_2
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
	func_5027(var_66_object); // 0x126 NEW_2
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
	func_5036(var_82_object); // 0x134 NEW_2
	var_2_bool = 1; // 0x136 TMovB
	var_147_int = 110; // 0x137 PushI
	var_148_float = 10.0; // 0x138 PushF
	SetTimer(var_147_int, var_148_float); // 0x139 Func
	
Label_315:
	return 4; // 0x13b Return
}


func_5400(var_104_bool)
{
	var_106_int = 0; // 0x1519 PushV
	func_4850(var_106_int); // 0x151a NEW_2
	var_107_int = 4; // 0x151c PushI
	var_104_bool = var_106_int == var_107_int; // 0x151d Eq2
	return 0; // 0x151e Return
}


func_1311(var_2_bool)
{
	Stop(); // 0x51f Func
	var_23_int = 120; // 0x521 PushI
	KillTimer(var_23_int); // 0x522 Func
	var_2_bool = 1; // 0x524 TMovB
	return 0; // 0x525 Return
}


func_5407(var_115_bool)
{
	var_117_int = 0; // 0x1520 PushV
	func_4850(var_117_int); // 0x1521 NEW_2
	var_118_int = 5; // 0x1523 PushI
	var_115_bool = var_117_int == var_118_int; // 0x1524 Eq2
	return 0; // 0x1525 Return
}


func_5414(var_121_bool)
{
	var_123_int = 0; // 0x1527 PushV
	func_4850(var_123_int); // 0x1528 NEW_2
	var_124_int = 6; // 0x152a PushI
	var_121_bool = var_123_int == var_124_int; // 0x152b Eq2
	return 0; // 0x152c Return
}


func_4907(var_60_object, var_61_string)
{
	var_62_string = "unholster"; // 0x132c PushS
	var_63_bool = var_61_string == var_62_string; // 0x132d Eq
	if(var_63_bool == 0) goto Label_4916; // 0x132e JumpB
	var_64_object = Obj(); // 0x132f PushV
	var_64_object = var_60_object; // 0x1330 Mov
	func_5171(var_64_object); // 0x1331 NEW_2
	goto Label_4931; // 0x1333 Jump
	
Label_4931:
	return 0; // 0x1343 Return
	
Label_4916:
	var_137_string = "player_shot"; // 0x1334 PushS
	var_138_bool = var_61_string == var_137_string; // 0x1335 Eq
	if(var_138_bool == 0) goto Label_4924; // 0x1336 JumpB
	var_139_object = Obj(); // 0x1337 PushV
	var_139_object = var_60_object; // 0x1338 Mov
	func_5194(var_139_object); // 0x1339 NEW_2
	goto Label_4931; // 0x133b Jump
	
Label_4924:
	var_205_string = "battle"; // 0x133c PushS
	var_206_bool = var_61_string == var_205_string; // 0x133d Eq
	if(var_206_bool == 0) goto Label_4931; // 0x133e JumpB
	var_207_object = Obj(); // 0x133f PushV
	var_207_object = var_60_object; // 0x1340 Mov
	func_5209(var_207_object); // 0x1341 NEW_2
}


func_5421(var_127_bool)
{
	var_129_int = 0; // 0x152e PushV
	func_4850(var_129_int); // 0x152f NEW_2
	var_130_int = 7; // 0x1531 PushI
	var_127_bool = var_129_int == var_130_int; // 0x1532 Eq2
	return 0; // 0x1533 Return
}


func_1327(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x52f PushV
	GetDirection(var_77_cvector); // 0x530 Func
	var_79_cvector = CVector(0,0,0); var_80_object = Obj(); // 0x532 PushV
	var_80_object = var_0_bool; // 0x533 MovT
	func_4448(var_80_object); // 0x534 NEW_2
	var_78_cvector = var_79_cvector; // 0x535 Mov
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x537 PushV
	var_86_cvector = var_77_cvector; // 0x538 Mov
	var_87_cvector = var_78_cvector; // 0x539 Mov
	func_4801(var_85_float, var_86_cvector, var_87_cvector); // 0x53a NEW_2
	var_93_float = -0.34202; // 0x53c PushF
	var_74_bool = var_85_float >= var_93_float; // 0x53d GE2
	return 4; // 0x53e Return
}


func_5428(var_140_bool)
{
	var_142_int = 0; // 0x1535 PushV
	func_4850(var_142_int); // 0x1536 NEW_2
	var_143_int = 8; // 0x1538 PushI
	var_140_bool = var_142_int == var_143_int; // 0x1539 Eq2
	return 0; // 0x153a Return
}


func_5435(var_146_bool)
{
	var_148_int = 0; // 0x153c PushV
	func_4850(var_148_int); // 0x153d NEW_2
	var_149_int = 9; // 0x153f PushI
	var_146_bool = var_148_int == var_149_int; // 0x1540 Eq2
	return 0; // 0x1541 Return
}


func_316(var_0_bool, var_1_bool)
{
	var_109_float = 0; var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); var_112_bool = 0; var_113_object = Obj(); var_114_bool = 0; var_115_float = 0; var_116_cvector = CVector(0,0,0); var_117_cvector = CVector(0,0,0); var_118_bool = 0; var_119_object = Obj(); var_120_bool = 0; // 0x13c PushV
	var_0_bool = 0; // 0x13d TMovB
	var_1_bool = 0; // 0x13e TMovB
	var_121_float = 0.5; // 0x13f PushF
	rand(var_115_float, var_121_float); // 0x140 Func
	Sleep(var_115_float); // 0x142 Func
	
Label_324:
	var_122_bool = var_0_bool == 0; // 0x144 Not
	if(var_122_bool == 0) goto Label_374; // 0x145 JumpB
	var_123_bool = var_1_bool == 0; // 0x146 Not
	if(var_123_bool == 0) goto Label_343; // 0x147 JumpB
	
Label_328:
	GetPosition(var_117_cvector); // 0x148 Func
	var_124_float = 0; // 0x14a PushV
	func_375(var_124_float); // 0x14b NEW_2
	GetRandomPFPointInCircle(var_116_cvector, var_117_cvector, var_124_float, var_118_bool); // 0x14d Func
	var_127_bool = var_118_bool; // 0x14f Push
	if(var_127_bool == 0) goto Label_338; // 0x150 JumpB
	goto Label_342; // 0x151 Jump
	
Label_342:
	goto Label_344; // 0x156 Jump
	
Label_344:
	var_128_object = Obj(); var_129_cvector = CVector(0,0,0); // 0x158 PushV
	var_129_cvector = var_116_cvector; // 0x159 Mov
	func_403(var_128_object, var_129_cvector); // 0x15a NEW_2
	var_119_object = var_128_object; // 0x15b Mov
	var_132_bool = var_119_object != 0; // 0x15d NullNeq
	if(var_132_bool == 0) goto Label_369; // 0x15e JumpB
	RotatePath(var_119_object, var_120_bool); // 0x15f Func
	var_133_bool = var_120_bool; // 0x161 Push
	if(var_133_bool == 0) goto Label_368; // 0x162 JumpB
	var_134_bool = 0; // 0x163 PushV
	func_401(var_134_bool); // 0x164 NEW_2
	FollowPath(var_119_object, var_134_bool, var_120_bool); // 0x166 Func
	var_119_object = 0; // 0x168 SetNull
	var_135_bool = var_120_bool; // 0x169 Push
	if(var_135_bool == 0) goto Label_368; // 0x16a JumpB
	TaskCall(2); // 0x16c TaskCall
	func_573(); // 0x16d NEW_2
	TaskReturn(); // 0x16e TaskReturn
	
Label_368:
	goto Label_372; // 0x170 Jump
	
Label_372:
	var_119_object = 0; // 0x174 SetNull
	goto Label_324; // 0x175 Jump
	
Label_369:
	var_187_int = 1; // 0x171 PushI
	Sleep(var_187_int); // 0x172 Func
	
Label_338:
	var_188_int = 1; // 0x152 PushI
	Sleep(var_188_int); // 0x153 Func
	goto Label_328; // 0x155 Jump
	
Label_343:
	var_1_bool = 0; // 0x157 TMovB
	
Label_374:
	return 12; // 0x176 Return
}


func_5442(var_152_bool)
{
	var_154_int = 0; // 0x1543 PushV
	func_4850(var_154_int); // 0x1544 NEW_2
	var_155_int = 10; // 0x1546 PushI
	var_152_bool = var_154_int == var_155_int; // 0x1547 Eq2
	return 0; // 0x1548 Return
}


func_4932(var_23_bool, var_24_object)
{
	var_25_bool = 0; var_26_bool = 0; // 0x1344 PushV
	var_27_bool = 0; // 0x1345 PushV
	var_27_bool = 0; // 0x1346 MovB
	var_28_bool = 0; var_29_object = Obj(); // 0x1347 PushV
	var_29_object = var_24_object; // 0x1348 Mov
	func_5166(var_28_bool, var_29_object); // 0x1349 NEW_2
	if(var_28_bool == 0) goto Label_4946; // 0x134b JumpB
	var_32_bool = 0; var_33_object = Obj(); // 0x134c PushV
	var_33_object = var_24_object; // 0x134d Mov
	func_4463(var_32_bool, var_33_object); // 0x134e NEW_2
	if(var_32_bool == 0) goto Label_4946; // 0x1350 JumpB
	var_27_bool = 1; // 0x1351 MovB
	
Label_4946:
	if(var_27_bool == 0) goto Label_4953; // 0x1352 JumpB
	IsWeaponHolstered(var_26_bool); // 0x1353 ObjFunc
	var_36_bool = var_26_bool == 0; // 0x1355 Not
	if(var_36_bool == 0) goto Label_4953; // 0x1356 JumpB
	var_23_bool = 1; // 0x1357 MovB
	return 2; // 0x1358 Return
	
Label_4953:
	var_23_bool = 0; // 0x1359 MovB
	return 2; // 0x135a Return
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
	func_4786(var_52_cvector, var_53_cvector); // 0x550 NEW_2
	var_59_float = 0.75; // 0x552 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x553 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x554 Add2
	func_4786(var_50_cvector, var_51_cvector); // 0x555 NEW_2
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


func_5449(var_158_bool)
{
	var_160_int = 0; // 0x154a PushV
	func_4850(var_160_int); // 0x154b NEW_2
	var_161_int = 11; // 0x154d PushI
	var_158_bool = var_160_int == var_161_int; // 0x154e Eq2
	return 0; // 0x154f Return
}


func_5456(var_164_bool)
{
	var_166_int = 0; // 0x1551 PushV
	func_4850(var_166_int); // 0x1552 NEW_2
	var_167_int = 12; // 0x1554 PushI
	var_164_bool = var_166_int == var_167_int; // 0x1555 Eq2
	return 0; // 0x1556 Return
}


func_5463(var_247_bool)
{
	var_249_bool = 0; // 0x1558 PushV
	var_249_bool = 0; // 0x1559 MovB
	var_250_int = 0; // 0x155a PushV
	func_4859(var_250_int); // 0x155b NEW_2
	var_255_int = 0; // 0x155d PushI
	var_256_bool = var_250_int >= var_255_int; // 0x155e GE
	if(var_256_bool == 0) goto Label_5479; // 0x155f JumpB
	var_257_int = 0; // 0x1560 PushV
	func_4859(var_257_int); // 0x1561 NEW_2
	var_258_int = 12; // 0x1563 PushI
	var_259_bool = var_257_int < var_258_int; // 0x1564 LT
	if(var_259_bool == 0) goto Label_5479; // 0x1565 JumpB
	var_249_bool = 1; // 0x1566 MovB
	
Label_5479:
	if(var_249_bool == 0) goto Label_5482; // 0x1567 JumpB
	var_247_bool = 1; // 0x1568 MovB
	return 0; // 0x1569 Return
	
Label_5482:
	var_247_bool = 0; // 0x156a MovB
	return 0; // 0x156b Return
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


func_4955(var_39_object)
{
	var_40_object = Obj(); // 0x135c PushV
	var_40_object = var_39_object; // 0x135d Mov
	func_5171(var_40_object); // 0x135e NEW_2
	return 0; // 0x1360 Return
}


func_4443(var_94_cvector)
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); // 0x115b PushV
	GetPosition(var_96_cvector); // 0x115c Func
	var_94_cvector = var_96_cvector; // 0x115e Mov
	return 2; // 0x115f Return
}


func_4448(var_79_cvector)
{
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); // 0x1160 PushV
	GetPosition(var_83_cvector); // 0x1161 Func
	GetPosition(var_84_cvector); // 0x1163 ObjFunc
	var_79_cvector = var_84_cvector - var_83_cvector; // 0x1165 Sub2
	return 4; // 0x1166 Return
}


func_4961(var_25_object)
{
	var_26_bool = 0; var_27_object = Obj(); // 0x1362 PushV
	var_27_object = var_25_object; // 0x1363 Mov
	func_4463(var_26_bool, var_27_object); // 0x1364 NEW_2
	if(var_26_bool == 0) goto Label_4973; // 0x1366 JumpB
	var_30_object = Obj(); // 0x1367 PushV
	func_4780(var_30_object); // 0x1368 NEW_2
	var_33_float = -0.05; // 0x136a PushF
	ReportReputationChange(var_25_object, var_30_object, var_33_float); // 0x136b Func
	
Label_4973:
	return 0; // 0x136d Return
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
	func_4443(var_97_cvector); // 0x586 NEW_2
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
	func_4443(var_109_cvector); // 0x5a1 NEW_2
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


func_4455(var_42_float)
{
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x1167 PushV
	GetPosition(var_47_cvector); // 0x1168 Func
	GetPosition(var_48_cvector); // 0x116a ObjFunc
	var_49_cvector = var_48_cvector - var_47_cvector; // 0x116c Sub2
	var_42_float = var_49_cvector | var_49_cvector; // 0x116d Or2
	return 6; // 0x116e Return
}


func_5484(var_109_int)
{
	var_110_int = 0; var_111_int = 0; // 0x156c PushV
	var_112_string = "branch"; // 0x156d PushS
	GetVariable(var_112_string, var_111_int); // 0x156e Func
	var_113_int = 0; // 0x1570 PushI
	var_114_bool = var_111_int == var_113_int; // 0x1571 Eq
	if(var_114_bool == 0) goto Label_5494; // 0x1572 JumpB
	var_109_int = 1; // 0x1573 MovI
	return 2; // 0x1574 Return
	
Label_5494:
	var_115_int = 1; // 0x1576 PushI
	var_116_bool = var_111_int == var_115_int; // 0x1577 Eq
	if(var_116_bool == 0) goto Label_5499; // 0x1578 JumpB
	var_109_int = 2; // 0x1579 MovI
	return 2; // 0x157a Return
	
Label_5499:
	var_109_int = 3; // 0x157b MovI
	return 2; // 0x157c Return
}


func_4974(var_23_bool, var_24_string)
{
	var_25_object = Obj(); var_26_object = Obj(); // 0x136e PushV
	var_27_string = "heal"; // 0x136f PushS
	var_28_bool = var_24_string == var_27_string; // 0x1370 Eq
	if(var_28_bool == 0) goto Label_4988; // 0x1371 JumpB
	var_29_string = "player"; // 0x1372 PushS
	FindActor(var_26_object, var_29_string); // 0x1373 Func
	var_30_bool = 0; var_31_object = Obj(); // 0x1375 PushV
	var_31_object = var_26_object; // 0x1376 Mov
	func_5215(var_31_object); // 0x1377 NEW_2
	var_23_bool = var_30_bool; // 0x1378 Mov
	return 2; // 0x137a Return
	
Label_4988:
	var_23_bool = 0; // 0x137c MovB
	return 2; // 0x137d Return
}


func_4463(var_32_bool, var_33_object)
{
	var_34_bool = 0; var_35_bool = 0; // 0x116f PushV
	IsPlayerActor(var_33_object, var_35_bool); // 0x1170 Func
	var_32_bool = var_35_bool; // 0x1172 Mov
	return 2; // 0x1173 Return
}


func_4468(var_51_bool, var_52_object, var_53_string)
{
	var_54_bool = 0; var_55_bool = 0; // 0x1174 PushV
	var_56_string = "HasProperty"; // 0x1175 PushS
	var_57_int = 2; // 0x1176 PushI
	var_58_bool = IsFuncExist(var_52_object, var_56_string, var_57_int); // 0x1177 FuncExist
	var_59_bool = var_58_bool == 0; // 0x1178 Not
	if(var_59_bool == 0) goto Label_4476; // 0x1179 JumpB
	var_51_bool = 0; // 0x117a MovB
	return 2; // 0x117b Return
	
Label_4476:
	HasProperty(var_53_string, var_55_bool); // 0x117c ObjFunc
	var_51_bool = var_55_bool; // 0x117e Mov
	return 2; // 0x117f Return
}


func_375(var_124_float)
{
	var_125_float = 0; var_126_float = 0; // 0x177 PushV
	GetCameraFarDistance(var_126_float); // 0x178 Func
	var_124_float = var_126_float; // 0x17a Mov
	return 2; // 0x17b Return
}


func_5501(var_40_int)
{
	var_41_int = 0; var_42_int = 0; // 0x157d PushV
	var_43_string = "branch"; // 0x157e PushS
	GetVariable(var_43_string, var_42_int); // 0x157f Func
	var_40_int = var_42_int; // 0x1581 Mov
	return 2; // 0x1582 Return
}


func_4990(var_34_string)
{
	var_35_object = Obj(); var_36_object = Obj(); // 0x137e PushV
	var_37_string = "heal"; // 0x137f PushS
	var_38_bool = var_34_string == var_37_string; // 0x1380 Eq
	if(var_38_bool == 0) goto Label_5002; // 0x1381 JumpB
	var_39_string = "player"; // 0x1382 PushS
	FindActor(var_36_object, var_39_string); // 0x1383 Func
	var_40_object = Obj(); // 0x1385 PushV
	var_40_object = var_36_object; // 0x1386 Mov
	func_5218(); // 0x1387 NEW_2
	var_36_object = 0; // 0x1389 SetNull
	
Label_5002:
	return 2; // 0x138a Return
}


func_4480(var_44_bool)
{
	var_46_bool = 0; var_47_bool = 0; // 0x1180 PushV
	IsDead(var_47_bool); // 0x1181 ObjFunc
	var_44_bool = var_47_bool; // 0x1183 Mov
	return 2; // 0x1184 Return
}


func_387(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x183 TMovB
	var_1_bool = 0; // 0x184 TMovB
	Stop(); // 0x185 Func
	StopGroup0(); // 0x187 Func
	return 0; // 0x189 Return
}


func_5507(var_68_float)
{
	var_69_object = Obj(); var_70_float = 0; var_71_object = Obj(); var_72_float = 0; // 0x1583 PushV
	var_73_string = "player"; // 0x1584 PushS
	FindActor(var_71_object, var_73_string); // 0x1585 Func
	var_74_bool = var_71_object == 0; // 0x1587 Not
	if(var_74_bool == 0) goto Label_5515; // 0x1588 JumpB
	var_68_float = 0; // 0x1589 MovI
	return 4; // 0x158a Return
	
Label_5515:
	var_75_string = "reputation"; // 0x158b PushS
	GetProperty(var_75_string, var_72_float); // 0x158c ObjFunc
	var_68_float = var_72_float; // 0x158e Mov
	return 4; // 0x158f Return
}


func_4485(var_33_bool, var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj(); var_38_object = Obj(); // 0x1185 PushV
	var_39_bool = var_34_object == 0; // 0x1186 NullEq
	if(var_39_bool == 0) goto Label_4490; // 0x1187 JumpB
	var_33_bool = 0; // 0x1188 MovB
	return 4; // 0x1189 Return
	
Label_4490:
	var_40_bool = 0; // 0x118a PushV
	var_40_bool = 0; // 0x118b MovB
	var_41_string = "IsDead"; // 0x118c PushS
	var_42_int = 1; // 0x118d PushI
	var_43_bool = IsFuncExist(var_34_object, var_41_string, var_42_int); // 0x118e FuncExist
	if(var_43_bool == 0) goto Label_4502; // 0x118f JumpB
	var_44_bool = 0; var_45_object = Obj(); // 0x1190 PushV
	var_45_object = var_34_object; // 0x1191 Mov
	func_4480(var_45_object); // 0x1192 NEW_2
	if(var_44_bool == 0) goto Label_4502; // 0x1194 JumpB
	var_40_bool = 1; // 0x1195 MovB
	
Label_4502:
	if(var_40_bool == 0) goto Label_4505; // 0x1196 JumpB
	var_33_bool = 0; // 0x1197 MovB
	return 4; // 0x1198 Return
	
Label_4505:
	GetScene(var_37_object); // 0x1199 Func
	var_48_bool = var_37_object == 0; // 0x119b NullEq
	if(var_48_bool == 0) goto Label_4511; // 0x119c JumpB
	var_33_bool = 0; // 0x119d MovB
	return 4; // 0x119e Return
	
Label_4511:
	GetScene(var_38_object); // 0x119f ObjFunc
	var_49_bool = var_37_object != var_38_object; // 0x11a1 Neq
	if(var_49_bool == 0) goto Label_4517; // 0x11a2 JumpB
	var_33_bool = 0; // 0x11a3 MovB
	return 4; // 0x11a4 Return
	
Label_4517:
	var_33_bool = 1; // 0x11a5 MovB
	return 4; // 0x11a6 Return
}


func_394(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x18a TMovB
	var_1_bool = 1; // 0x18b TMovB
	Stop(); // 0x18c Func
	StopGroup0(); // 0x18e Func
	return 0; // 0x190 Return
}


func_5003(var_158_string, var_159_int)
{
	var_160_string = ""; var_161_string = ""; // 0x138b PushV
	var_161_string = "idle"; // 0x138c MovS
	var_162_int = var_159_int; // 0x138d Push
	if(var_162_int == 0) goto Label_5008; // 0x138e JumpB
	var_161_string = var_161_string + var_159_int; // 0x138f Add2
	
Label_5008:
	var_158_string = var_161_string; // 0x1390 Mov
	return 2; // 0x1391 Return
}


func_401(var_134_bool)
{
	var_134_bool = 0; // 0x191 MovB
	return 0; // 0x192 Return
}


func_5010(var_152_int)
{
	var_153_int = 0; var_154_bool = 0; var_155_int = 0; var_156_bool = 0; // 0x1392 PushV
	var_155_int = 0; // 0x1393 MovI
	
Label_5012:
	var_157_string = "all"; // 0x1394 PushS
	var_158_string = ""; var_159_int = 0; // 0x1395 PushV
	var_159_int = var_155_int; // 0x1396 Mov
	func_5003(var_158_string, var_159_int); // 0x1397 NEW_2
	HasAnimation(var_156_bool, var_157_string, var_158_string); // 0x1399 Func
	var_163_bool = var_156_bool == 0; // 0x139b Not
	if(var_163_bool == 0) goto Label_5022; // 0x139c JumpB
	goto Label_5025; // 0x139d Jump
	
Label_5025:
	var_152_int = var_155_int; // 0x13a1 Mov
	return 4; // 0x13a2 Return
	
Label_5022:
	var_164_int = 1; // 0x139e PushI
	var_155_int = var_155_int + var_164_int; // 0x139f Add2
	goto Label_5012; // 0x13a0 Jump
}


func_403(var_128_object, var_129_cvector)
{
	var_130_object = Obj(); var_131_object = Obj(); // 0x193 PushV
	FindShiftedPathTo(var_131_object, var_129_cvector); // 0x194 Func
	var_128_object = var_131_object; // 0x196 Mov
	return 2; // 0x197 Return
}


func_5521(var_39_object)
{
	var_40_int = 0; // 0x1592 PushV
	func_5501(var_40_int); // 0x1593 NEW_2
	var_44_int = 1; // 0x1595 PushI
	var_45_bool = var_40_int == var_44_int; // 0x1596 Eq
	if(var_45_bool == 0) goto Label_5531; // 0x1597 JumpB
	WorkWithCorpse(var_39_object); // 0x1598 Func
	goto Label_5533; // 0x159a Jump
	
Label_5533:
	return 0; // 0x159d Return
	
Label_5531:
	Barter(var_39_object); // 0x159b Func
}


func_5534(var_24_bool)
{
	var_25_int = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_bool = 0; var_30_int = 0; // 0x159e PushV
	var_31_int = 0; // 0x159f PushI
	ClearSubContainer(var_31_int); // 0x15a0 Func
	var_32_int = 0; // 0x15a2 PushV
	func_4850(var_32_int); // 0x15a3 NEW_2
	var_30_int = var_32_int; // 0x15a4 Mov
	var_38_bool = var_24_bool; // 0x15a6 Push
	if(var_38_bool == 0) goto Label_5588; // 0x15a7 JumpB
	var_39_string = ""; var_40_int = 0; var_41_int = 0; var_42_int = 0; // 0x15a8 PushV
	var_39_string = "alpha_pills"; // 0x15a9 MovS
	var_40_int = 1; // 0x15aa MovI
	var_41_int = 2; // 0x15ab MovI
	var_42_int = 4; // 0x15ac MovI
	func_4765(var_39_string, var_40_int, var_41_int, var_42_int); // 0x15ad NEW_2
	var_55_string = ""; var_56_int = 0; var_57_int = 0; var_58_int = 0; // 0x15af PushV
	var_55_string = "meradorm"; // 0x15b0 MovS
	var_56_int = 2; // 0x15b1 MovI
	var_57_int = 3; // 0x15b2 MovI
	var_58_int = 3; // 0x15b3 MovI
	func_4765(var_55_string, var_56_int, var_57_int, var_58_int); // 0x15b4 NEW_2
	var_59_int = 3; // 0x15b6 PushI
	var_60_bool = var_30_int >= var_59_int; // 0x15b7 GE
	if(var_60_bool == 0) goto Label_5567; // 0x15b8 JumpB
	var_61_string = ""; var_62_int = 0; var_63_int = 0; // 0x15b9 PushV
	var_61_string = "beta_pills"; // 0x15ba MovS
	var_62_int = 1; // 0x15bb MovI
	var_63_int = 4; // 0x15bc MovI
	func_4754(var_61_string, var_62_int, var_63_int); // 0x15bd NEW_2
	
Label_5567:
	var_70_int = 8; // 0x15bf PushI
	var_71_bool = var_30_int >= var_70_int; // 0x15c0 GE
	if(var_71_bool == 0) goto Label_5578; // 0x15c1 JumpB
	var_72_string = ""; var_73_int = 0; var_74_int = 0; var_75_int = 0; // 0x15c2 PushV
	var_72_string = "monomicin"; // 0x15c3 MovS
	var_73_int = 1; // 0x15c4 MovI
	var_74_int = 2; // 0x15c5 MovI
	var_75_int = 2; // 0x15c6 MovI
	func_4765(var_72_string, var_73_int, var_74_int, var_75_int); // 0x15c7 NEW_2
	goto Label_5587; // 0x15c9 Jump
	
Label_5587:
	goto Label_5633; // 0x15d3 Jump
	
Label_5633:
	return 6; // 0x1601 Return
	
Label_5578:
	var_76_int = 4; // 0x15ca PushI
	var_77_bool = var_30_int >= var_76_int; // 0x15cb GE
	if(var_77_bool == 0) goto Label_5587; // 0x15cc JumpB
	var_78_string = ""; var_79_int = 0; var_80_int = 0; // 0x15cd PushV
	var_78_string = "monomicin"; // 0x15ce MovS
	var_79_int = 1; // 0x15cf MovI
	var_80_int = 2; // 0x15d0 MovI
	func_4754(var_78_string, var_79_int, var_80_int); // 0x15d1 NEW_2
	
Label_5588:
	var_81_string = ""; var_82_int = 0; var_83_int = 0; // 0x15d4 PushV
	var_81_string = "lockpick"; // 0x15d5 MovS
	var_82_int = 1; // 0x15d6 MovI
	var_83_int = 4; // 0x15d7 MovI
	func_4754(var_81_string, var_82_int, var_83_int); // 0x15d8 NEW_2
	var_84_string = ""; var_85_int = 0; var_86_int = 0; // 0x15da PushV
	var_84_string = "rifle_ammo"; // 0x15db MovS
	var_85_int = 1; // 0x15dc MovI
	var_86_int = 2; // 0x15dd MovI
	func_4754(var_84_string, var_85_int, var_86_int); // 0x15de NEW_2
	var_87_string = ""; var_88_int = 0; var_89_int = 0; // 0x15e0 PushV
	var_87_string = "revolver_ammo"; // 0x15e1 MovS
	var_88_int = 1; // 0x15e2 MovI
	var_89_int = 2; // 0x15e3 MovI
	func_4754(var_87_string, var_88_int, var_89_int); // 0x15e4 NEW_2
	var_90_string = ""; var_91_int = 0; var_92_int = 0; var_93_int = 0; // 0x15e6 PushV
	var_90_string = "samopal_ammo"; // 0x15e7 MovS
	var_91_int = 1; // 0x15e8 MovI
	var_92_int = 2; // 0x15e9 MovI
	var_93_int = 2; // 0x15ea MovI
	func_4765(var_90_string, var_91_int, var_92_int, var_93_int); // 0x15eb NEW_2
	var_94_int = 8; // 0x15ed PushI
	var_95_bool = var_30_int >= var_94_int; // 0x15ee GE
	if(var_95_bool == 0) goto Label_5624; // 0x15ef JumpB
	var_96_string = ""; var_97_int = 0; var_98_int = 0; var_99_int = 0; // 0x15f0 PushV
	var_96_string = "monomicin"; // 0x15f1 MovS
	var_97_int = 1; // 0x15f2 MovI
	var_98_int = 2; // 0x15f3 MovI
	var_99_int = 2; // 0x15f4 MovI
	func_4765(var_96_string, var_97_int, var_98_int, var_99_int); // 0x15f5 NEW_2
	goto Label_5633; // 0x15f7 Jump
	
Label_5624:
	var_100_int = 4; // 0x15f8 PushI
	var_101_bool = var_30_int >= var_100_int; // 0x15f9 GE
	if(var_101_bool == 0) goto Label_5633; // 0x15fa JumpB
	var_102_string = ""; var_103_int = 0; var_104_int = 0; // 0x15fb PushV
	var_102_string = "monomicin"; // 0x15fc MovS
	var_103_int = 1; // 0x15fd MovI
	var_104_int = 2; // 0x15fe MovI
	func_4754(var_102_string, var_103_int, var_104_int); // 0x15ff NEW_2
}


func_5027(var_65_int)
{
	var_67_bool = 0; // 0x13a4 PushV
	func_5692(var_67_bool); // 0x13a5 NEW_2
	if(var_67_bool == 0) goto Label_5034; // 0x13a7 JumpB
	var_65_int = 2; // 0x13a8 MovI
	goto Label_5035; // 0x13a9 Jump
	
Label_5035:
	return 0; // 0x13ab Return
	
Label_5034:
	var_65_int = 0; // 0x13aa MovI
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


func_4521(var_29_bool, var_30_object)
{
	var_31_int = 0; var_32_int = 0; // 0x11a9 PushV
	var_33_bool = 0; var_34_object = Obj(); // 0x11aa PushV
	var_34_object = var_30_object; // 0x11ab Mov
	func_4485(var_33_bool, var_34_object); // 0x11ac NEW_2
	var_50_bool = var_33_bool == 0; // 0x11ae Not
	if(var_50_bool == 0) goto Label_4530; // 0x11af JumpB
	var_29_bool = 0; // 0x11b0 MovB
	return 2; // 0x11b1 Return
	
Label_4530:
	var_51_bool = 0; var_52_object = Obj(); var_53_string = ""; // 0x11b2 PushV
	var_52_object = var_30_object; // 0x11b3 Mov
	var_53_string = "noaccess"; // 0x11b4 MovS
	func_4468(var_51_bool, var_52_object, var_53_string); // 0x11b5 NEW_2
	var_60_bool = var_51_bool == 0; // 0x11b7 Not
	if(var_60_bool == 0) goto Label_4539; // 0x11b8 JumpB
	var_29_bool = 1; // 0x11b9 MovB
	return 2; // 0x11ba Return
	
Label_4539:
	var_61_string = "noaccess"; // 0x11bb PushS
	GetProperty(var_61_string, var_32_int); // 0x11bc ObjFunc
	var_62_int = 0; // 0x11be PushI
	var_29_bool = var_32_int == var_62_int; // 0x11bf Eq2
	return 2; // 0x11c0 Return
}


func_5036(var_82_object)
{
	var_83_object = Obj(); // 0x13ad PushV
	var_83_object = var_82_object; // 0x13ae Mov
	TaskCall(3); // 0x13af TaskCall
	func_659(var_84_object, var_83_object); // 0x13b0 NEW_2
	TaskReturn(); // 0x13b1 TaskReturn
	return 0; // 0x13b3 Return
}


func_5044(var_34_int, var_35_object)
{
	var_36_bool = 0; var_37_object = Obj(); // 0x13b5 PushV
	var_37_object = var_35_object; // 0x13b6 Mov
	func_4521(var_36_bool, var_37_object); // 0x13b7 NEW_2
	if(var_36_bool == 0) goto Label_5052; // 0x13b9 JumpB
	var_34_int = 2; // 0x13ba MovI
	goto Label_5053; // 0x13bb Jump
	
Label_5053:
	return 0; // 0x13bd Return
	
Label_5052:
	var_34_int = 0; // 0x13bc MovI
}


func_5054(var_76_object)
{
	var_77_object = Obj(); // 0x13bf PushV
	var_77_object = var_76_object; // 0x13c0 Mov
	TaskCall(4); // 0x13c1 TaskCall
	func_934(var_77_object); // 0x13c2 NEW_2
	TaskReturn(); // 0x13c3 TaskReturn
	return 0; // 0x13c5 Return
}


func_4545()
{
	var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); // 0x11c1 PushV
	GetPosition(var_102_cvector); // 0x11c2 ObjFunc
	GetPosition(var_103_cvector); // 0x11c4 Func
	var_104_cvector = var_102_cvector - var_103_cvector; // 0x11c6 Sub2
	var_105_float = GetByIndex(var_104_cvector, 0); // 0x11c7 PushE
	var_106_float = GetByIndex(var_104_cvector, 2); // 0x11c8 PushE
	RotateAsync(var_105_float, var_106_float); // 0x11c9 Func
	return 6; // 0x11cb Return
}


func_5062(var_74_int, var_75_object)
{
	var_77_bool = 0; var_78_object = Obj(); // 0x13c7 PushV
	var_78_object = var_75_object; // 0x13c8 Mov
	func_4521(var_77_bool, var_78_object); // 0x13c9 NEW_2
	if(var_77_bool == 0) goto Label_5070; // 0x13cb JumpB
	var_74_int = 2; // 0x13cc MovI
	goto Label_5071; // 0x13cd Jump
	
Label_5071:
	return 0; // 0x13cf Return
	
Label_5070:
	var_74_int = 0; // 0x13ce MovI
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
	func_4786(var_52_cvector, var_53_cvector); // 0x3d3 NEW_2
	var_59_float = 0.75; // 0x3d5 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x3d6 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x3d7 Add2
	func_4786(var_50_cvector, var_51_cvector); // 0x3d8 NEW_2
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


func_4556(var_105_bool)
{
	var_106_bool = 0; var_107_bool = 0; // 0x11cc PushV
	IsLoaded(var_107_bool); // 0x11cd Func
	var_105_bool = var_107_bool; // 0x11cf Mov
	return 2; // 0x11d0 Return
}


func_5072(var_111_object)
{
	var_112_object = Obj(); // 0x13d1 PushV
	var_112_object = var_111_object; // 0x13d2 Mov
	TaskCall(5); // 0x13d3 TaskCall
	func_1186(var_113_object, var_114_cvector, var_115_bool, var_112_object); // 0x13d4 NEW_2
	TaskReturn(); // 0x13d5 TaskReturn
	return 0; // 0x13d7 Return
}


func_4561(var_58_bool, var_60_float)
{
	var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0; var_69_bool = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_bool = 0; var_78_bool = 0; // 0x11d1 PushV
	GetPosition(var_71_cvector); // 0x11d2 ObjFunc
	GetEyesHeight(var_70_float); // 0x11d4 ObjFunc
	var_79_float = GetByIndex(var_71_cvector, 1); // 0x11d6 PushE
	var_79_float = var_79_float + var_70_float; // 0x11d7 Add2
	SetByIndex(var_71_cvector, 1) = var_79_float; // 0x11d8 PopE
	GetPosition(var_72_cvector); // 0x11d9 Func
	GetEyesHeight(var_70_float); // 0x11db Func
	var_80_float = GetByIndex(var_72_cvector, 1); // 0x11dd PushE
	var_80_float = var_80_float + var_70_float; // 0x11de Add2
	SetByIndex(var_72_cvector, 1) = var_80_float; // 0x11df PopE
	var_73_cvector = var_71_cvector - var_72_cvector; // 0x11e0 Sub2
	var_81_float = GetByIndex(var_73_cvector, 1); // 0x11e1 PushE
	var_81_float = 0; // 0x11e2 MovI
	SetByIndex(var_73_cvector, 1) = var_81_float; // 0x11e3 PopE
	var_82_int = var_73_cvector | var_73_cvector; // 0x11e4 Or
	var_83_float = sqrt(var_82_int); // 0x11e5 Sqrt
	var_73_cvector = var_73_cvector / var_73_cvector; // 0x11e6 Div2
	var_74_cvector = -var_73_cvector; // 0x11e7 Neg2
	var_84_float = var_73_cvector * var_60_float; // 0x11e8 Mult
	var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); // 0x11e9 PushV
	var_87_cvector = CVector(0.0, 1.0, 0.0); // 0x11ea PushVec
	var_86_cvector = var_74_cvector ^ var_87_cvector; // 0x11eb Xor2
	func_4786(var_85_cvector, var_86_cvector); // 0x11ec NEW_2
	var_93_int = 25; // 0x11ee PushI
	var_94_float = var_85_cvector * var_93_int; // 0x11ef Mult
	var_95_int = var_84_float + var_94_float; // 0x11f0 Add
	var_96_cvector = CVector(0.0, 10.0, 0.0); // 0x11f1 PushVec
	var_75_cvector = var_95_int - var_96_cvector; // 0x11f2 Sub2
	var_76_cvector = var_72_cvector + var_75_cvector; // 0x11f3 Add2
	IsOverrideActive(var_77_bool); // 0x11f4 Func
	var_97_bool = var_77_bool; // 0x11f6 Push
	if(var_97_bool == 0) goto Label_4602; // 0x11f7 JumpB
	var_58_bool = 0; // 0x11f8 MovB
	return 18; // 0x11f9 Return
	
Label_4602:
	StopWorld(); // 0x11fa Func
	CameraTransit(var_76_cvector, var_74_cvector); // 0x11fc Func
	var_98_float = GetByIndex(var_75_cvector, 0); // 0x11fe PushE
	var_99_float = GetByIndex(var_75_cvector, 2); // 0x11ff PushE
	Rotate(var_98_float, var_99_float); // 0x1200 Func
	var_100_bool = 0; // 0x1202 PushV
	func_5642(var_100_bool); // 0x1203 NEW_2
	if(var_100_bool == 0) goto Label_4615; // 0x1205 JumpB
	goto Label_4623; // 0x1206 Jump
	
Label_4623:
	CameraWaitForPlayFinish(); // 0x120f Func
	ResumeWorld(); // 0x1211 Func
	var_58_bool = 1; // 0x1213 MovB
	return 18; // 0x1214 Return
	
Label_4615:
	var_101_string = "head"; // 0x1207 PushS
	HasAnimationTrack(var_78_bool, var_101_string); // 0x1208 Func
	var_102_bool = var_78_bool; // 0x120a Push
	if(var_102_bool == 0) goto Label_4623; // 0x120b JumpB
	var_103_string = "head"; // 0x120c PushS
	LookAsyncCamera(var_103_string); // 0x120d Func
}


func_5080(var_31_bool, var_32_object, var_33_object, var_34_float)
{
	var_35_string = ""; var_36_bool = 0; var_37_string = ""; var_38_bool = 0; // 0x13d8 PushV
	var_39_bool = 0; var_40_object = Obj(); var_41_string = ""; // 0x13d9 PushV
	var_40_object = var_33_object; // 0x13da Mov
	var_41_string = "class"; // 0x13db MovS
	func_4468(var_39_bool, var_40_object, var_41_string); // 0x13dc NEW_2
	var_48_bool = var_39_bool == 0; // 0x13de Not
	if(var_48_bool == 0) goto Label_5090; // 0x13df JumpB
	var_31_bool = 0; // 0x13e0 MovB
	return 4; // 0x13e1 Return
	
Label_5090:
	var_49_string = "class"; // 0x13e2 PushS
	GetProperty(var_49_string, var_37_string); // 0x13e3 ObjFunc
	var_50_string = "rat"; // 0x13e5 PushS
	var_51_bool = var_37_string == var_50_string; // 0x13e6 Eq
	if(var_51_bool == 0) goto Label_5099; // 0x13e7 JumpB
	var_31_bool = 0; // 0x13e8 MovB
	return 4; // 0x13e9 Return
	
Label_5099:
	var_52_string = "rat_big"; // 0x13eb PushS
	var_53_bool = var_37_string == var_52_string; // 0x13ec Eq
	if(var_53_bool == 0) goto Label_5105; // 0x13ed JumpB
	var_31_bool = 0; // 0x13ee MovB
	return 4; // 0x13ef Return
	
Label_5105:
	var_54_string = "dog"; // 0x13f1 PushS
	var_55_bool = var_37_string == var_54_string; // 0x13f2 Eq
	if(var_55_bool == 0) goto Label_5110; // 0x13f3 JumpB
	var_31_bool = 0; // 0x13f4 MovB
	return 4; // 0x13f5 Return
	
Label_5110:
	CanSee(var_38_bool, var_32_object); // 0x13f6 Func
	var_56_bool = 0; // 0x13f8 PushV
	var_56_bool = 1; // 0x13f9 MovB
	var_57_bool = var_38_bool; // 0x13fa Push
	if(var_57_bool == 0) goto Label_5124; // 0x13fb JumpB
	var_58_float = 0; var_59_object = Obj(); // 0x13fc PushV
	var_59_object = var_32_object; // 0x13fd Mov
	func_4455(var_59_object); // 0x13fe NEW_2
	var_66_float = var_34_float * var_34_float; // 0x1400 Mult
	var_67_bool = var_58_float <= var_66_float; // 0x1401 LE
	if(var_67_bool == 0) goto Label_5124; // 0x1402 JumpB
	var_56_bool = 0; // 0x1403 MovB
	
Label_5124:
	if(var_56_bool == 0) goto Label_5127; // 0x1404 JumpB
	var_31_bool = 1; // 0x1405 MovB
	return 4; // 0x1406 Return
	
Label_5127:
	CanSee(var_38_bool, var_33_object); // 0x1407 Func
	var_68_bool = 0; // 0x1409 PushV
	var_68_bool = 1; // 0x140a MovB
	var_69_bool = var_38_bool; // 0x140b Push
	if(var_69_bool == 0) goto Label_5141; // 0x140c JumpB
	var_70_float = 0; var_71_object = Obj(); // 0x140d PushV
	var_71_object = var_33_object; // 0x140e Mov
	func_4455(var_71_object); // 0x140f NEW_2
	var_72_float = var_34_float * var_34_float; // 0x1411 Mult
	var_73_bool = var_70_float <= var_72_float; // 0x1412 LE
	if(var_73_bool == 0) goto Label_5141; // 0x1413 JumpB
	var_68_bool = 0; // 0x1414 MovB
	
Label_5141:
	if(var_68_bool == 0) goto Label_5144; // 0x1415 JumpB
	var_31_bool = 1; // 0x1416 MovB
	return 4; // 0x1417 Return
	
Label_5144:
	var_31_bool = 0; // 0x1418 MovB
	return 4; // 0x1419 Return
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
	func_4443(var_140_cvector); // 0x409 NEW_2
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
	func_4443(var_152_cvector); // 0x424 NEW_2
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


func_1521(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x5f1 PushV
	GetDirection(var_77_cvector); // 0x5f2 Func
	var_79_cvector = CVector(0,0,0); var_80_object = Obj(); // 0x5f4 PushV
	var_80_object = var_0_bool; // 0x5f5 MovT
	func_4448(var_80_object); // 0x5f6 NEW_2
	var_78_cvector = var_79_cvector; // 0x5f7 Mov
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x5f9 PushV
	var_86_cvector = var_77_cvector; // 0x5fa Mov
	var_87_cvector = var_78_cvector; // 0x5fb Mov
	func_4801(var_85_float, var_86_cvector, var_87_cvector); // 0x5fc NEW_2
	var_93_float = -0.34202; // 0x5fe PushF
	var_74_bool = var_85_float >= var_93_float; // 0x5ff GE2
	return 4; // 0x600 Return
}


