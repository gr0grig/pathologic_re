task_0_event_11(var_0_bool, var_1_int, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; // 0x1b PushV
	func_6563(var_23_bool); // 0x1c NEW_2
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
	func_6046(var_26_object); // 0x43 NEW_2
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
	func_6049(var_32_object); // 0x51 NEW_2
	
Label_83:
	return 2; // 0x53 Return
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x54 PushV
	var_25_object = Obj(); // 0x55 PushV
	var_25_object = var_22_bool; // 0x56 Mov
	func_5851(var_25_object); // 0x57 NEW_2
	var_34_int = 0; var_35_object = Obj(); // 0x59 PushV
	var_35_object = var_22_bool; // 0x5a Mov
	func_5934(var_34_int, var_35_object); // 0x5b NEW_2
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
	func_5944(var_75_object); // 0x69 NEW_2
	
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
	func_6619(var_28_object, var_29_object, var_30_bool); // 0x71 NEW_2
	if(var_27_bool == 0) goto Label_135; // 0x73 JumpB
	var_74_int = 0; var_75_object = Obj(); var_76_bool = 0; // 0x74 PushV
	var_75_object = var_22_object; // 0x75 Mov
	var_76_bool = var_24_bool; // 0x76 Mov
	func_5952(var_75_object, var_76_bool); // 0x77 NEW_2
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
	func_5962(var_110_object); // 0x85 NEW_2
	
Label_135:
	return 2; // 0x87 Return
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x88 PushV
	var_25_int = 0; var_26_object = Obj(); // 0x89 PushV
	var_26_object = var_22_bool; // 0x8a Mov
	func_6036(var_26_object); // 0x8b NEW_2
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
	func_6039(); // 0x99 NEW_2
	
Label_155:
	return 2; // 0x9b Return
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_object, var_21_object, var_22_string, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; // 0x9c PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; // 0x9d PushV
	var_27_object = var_22_string; // 0x9e Mov
	var_28_string = var_23_bool; // 0x9f Mov
	func_5765(var_26_bool, var_27_object, var_28_string); // 0xa0 NEW_2
	if(var_26_bool == 0) goto Label_172; // 0xa2 JumpB
	func_251(var_25_int); // 0xa4 NEW_2
	var_59_object = Obj(); var_60_string = ""; // 0xa6 PushV
	var_59_object = var_22_string; // 0xa7 Mov
	var_60_string = var_23_bool; // 0xa8 Mov
	func_5797(var_59_object, var_60_string); // 0xa9 NEW_2
	goto Label_192; // 0xab Jump
	
Label_192:
	return 2; // 0xc0 Return
	
Label_172:
	var_208_int = 0; var_209_string = ""; var_210_object = Obj(); // 0xac PushV
	var_209_string = var_23_bool; // 0xad Mov
	var_210_object = var_22_string; // 0xae Mov
	func_6041(var_210_object); // 0xaf NEW_2
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
	func_6044(); // 0xbe NEW_2
}


task_1_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_string, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_string = ""; // 0xc2 PushV
	var_24_string = var_22_bool; // 0xc3 Mov
	func_5864(var_23_bool, var_24_string); // 0xc4 NEW_2
	if(var_23_bool == 0) goto Label_206; // 0xc6 JumpB
	func_251(var_22_bool); // 0xc8 NEW_2
	var_33_string = ""; // 0xca PushV
	var_33_string = var_22_bool; // 0xcb Mov
	func_5880(var_33_string); // 0xcc NEW_2
	
Label_206:
	return 0; // 0xce Return
}


task_1_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj(); // 0xd0 PushV
	var_24_object = var_22_bool; // 0xd1 Mov
	func_5822(var_23_bool, var_24_object); // 0xd2 NEW_2
	if(var_23_bool == 0) goto Label_221; // 0xd4 JumpB
	func_251(var_22_bool); // 0xd6 NEW_2
	var_38_object = Obj(); // 0xd8 PushV
	var_38_object = var_22_bool; // 0xd9 Mov
	func_5845(var_38_object); // 0xda NEW_2
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
	func_6055(); // 0xf8 NEW_2
	return 0; // 0xfa Return
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_251(var_22_bool); // 0x10d NEW_2
	var_24_object = Obj(); // 0x10f PushV
	var_24_object = var_22_bool; // 0x110 Mov
	func_5759(); // 0x111 NEW_2
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
	func_6046(var_26_object); // 0x19c NEW_2
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
	func_6049(var_31_object); // 0x1aa NEW_2
	
Label_428:
	return 2; // 0x1ac Return
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x1ad PushV
	var_25_object = Obj(); // 0x1ae PushV
	var_25_object = var_22_bool; // 0x1af Mov
	func_5851(var_25_object); // 0x1b0 NEW_2
	var_34_int = 0; var_35_object = Obj(); // 0x1b2 PushV
	var_35_object = var_22_bool; // 0x1b3 Mov
	func_5934(var_34_int, var_35_object); // 0x1b4 NEW_2
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
	func_5944(var_74_object); // 0x1c2 NEW_2
	
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
	func_6619(var_28_object, var_29_object, var_30_bool); // 0x1ca NEW_2
	if(var_27_bool == 0) goto Label_480; // 0x1cc JumpB
	var_74_int = 0; var_75_object = Obj(); var_76_bool = 0; // 0x1cd PushV
	var_75_object = var_22_object; // 0x1ce Mov
	var_76_bool = var_24_bool; // 0x1cf Mov
	func_5952(var_75_object, var_76_bool); // 0x1d0 NEW_2
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
	func_5962(var_109_object); // 0x1de NEW_2
	
Label_480:
	return 2; // 0x1e0 Return
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x1e1 PushV
	var_25_int = 0; var_26_object = Obj(); // 0x1e2 PushV
	var_26_object = var_22_bool; // 0x1e3 Mov
	func_6036(var_26_object); // 0x1e4 NEW_2
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
	func_6039(); // 0x1f2 NEW_2
	
Label_500:
	return 2; // 0x1f4 Return
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_object, var_21_object, var_22_string, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; // 0x1f5 PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; // 0x1f6 PushV
	var_27_object = var_22_string; // 0x1f7 Mov
	var_28_string = var_23_bool; // 0x1f8 Mov
	func_5765(var_26_bool, var_27_object, var_28_string); // 0x1f9 NEW_2
	if(var_26_bool == 0) goto Label_517; // 0x1fb JumpB
	func_654(); // 0x1fd NEW_2
	var_58_object = Obj(); var_59_string = ""; // 0x1ff PushV
	var_58_object = var_22_string; // 0x200 Mov
	var_59_string = var_23_bool; // 0x201 Mov
	func_5797(var_58_object, var_59_string); // 0x202 NEW_2
	goto Label_537; // 0x204 Jump
	
Label_537:
	return 2; // 0x219 Return
	
Label_517:
	var_207_int = 0; var_208_string = ""; var_209_object = Obj(); // 0x205 PushV
	var_208_string = var_23_bool; // 0x206 Mov
	var_209_object = var_22_string; // 0x207 Mov
	func_6041(var_209_object); // 0x208 NEW_2
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
	func_6044(); // 0x217 NEW_2
}


task_2_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_string, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_string = ""; // 0x21b PushV
	var_24_string = var_22_bool; // 0x21c Mov
	func_5864(var_23_bool, var_24_string); // 0x21d NEW_2
	if(var_23_bool == 0) goto Label_551; // 0x21f JumpB
	func_654(); // 0x221 NEW_2
	var_32_string = ""; // 0x223 PushV
	var_32_string = var_22_bool; // 0x224 Mov
	func_5880(var_32_string); // 0x225 NEW_2
	
Label_551:
	return 0; // 0x227 Return
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_654(); // 0x229 NEW_2
	func_6055(); // 0x22c NEW_2
	return 0; // 0x22e Return
}


task_2_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj(); // 0x230 PushV
	var_24_object = var_22_bool; // 0x231 Mov
	func_5822(var_23_bool, var_24_object); // 0x232 NEW_2
	if(var_23_bool == 0) goto Label_572; // 0x234 JumpB
	func_654(); // 0x236 NEW_2
	var_37_object = Obj(); // 0x238 PushV
	var_37_object = var_22_bool; // 0x239 Mov
	func_5845(var_37_object); // 0x23a NEW_2
	
Label_572:
	return 0; // 0x23c Return
}


task_3_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x2cb PushV
	var_25_int = 0; var_26_object = Obj(); // 0x2cc PushV
	var_26_object = var_22_bool; // 0x2cd Mov
	func_6046(var_26_object); // 0x2ce NEW_2
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
	func_6049(var_33_object); // 0x2dc NEW_2
	
Label_734:
	return 2; // 0x2de Return
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x2df PushV
	var_25_object = Obj(); // 0x2e0 PushV
	var_25_object = var_22_bool; // 0x2e1 Mov
	func_5851(var_25_object); // 0x2e2 NEW_2
	var_34_int = 0; var_35_object = Obj(); // 0x2e4 PushV
	var_35_object = var_22_bool; // 0x2e5 Mov
	func_5934(var_34_int, var_35_object); // 0x2e6 NEW_2
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
	func_5944(var_76_object); // 0x2f4 NEW_2
	
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
	func_6619(var_28_object, var_29_object, var_30_bool); // 0x2fc NEW_2
	if(var_27_bool == 0) goto Label_786; // 0x2fe JumpB
	var_74_int = 0; var_75_object = Obj(); var_76_bool = 0; // 0x2ff PushV
	var_75_object = var_22_object; // 0x300 Mov
	var_76_bool = var_24_bool; // 0x301 Mov
	func_5952(var_75_object, var_76_bool); // 0x302 NEW_2
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
	func_5962(var_111_object); // 0x310 NEW_2
	
Label_786:
	return 2; // 0x312 Return
}


task_3_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x313 PushV
	var_25_int = 0; var_26_object = Obj(); // 0x314 PushV
	var_26_object = var_22_bool; // 0x315 Mov
	func_6036(var_26_object); // 0x316 NEW_2
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
	func_6039(); // 0x324 NEW_2
	
Label_806:
	return 2; // 0x326 Return
}


task_3_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_string, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_object, var_21_object, var_22_string, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; // 0x327 PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; // 0x328 PushV
	var_27_object = var_22_string; // 0x329 Mov
	var_28_string = var_23_bool; // 0x32a Mov
	func_5765(var_26_bool, var_27_object, var_28_string); // 0x32b NEW_2
	if(var_26_bool == 0) goto Label_823; // 0x32d JumpB
	func_858(); // 0x32f NEW_2
	var_60_object = Obj(); var_61_string = ""; // 0x331 PushV
	var_60_object = var_22_string; // 0x332 Mov
	var_61_string = var_23_bool; // 0x333 Mov
	func_5797(var_60_object, var_61_string); // 0x334 NEW_2
	goto Label_843; // 0x336 Jump
	
Label_843:
	return 2; // 0x34b Return
	
Label_823:
	var_209_int = 0; var_210_string = ""; var_211_object = Obj(); // 0x337 PushV
	var_210_string = var_23_bool; // 0x338 Mov
	var_211_object = var_22_string; // 0x339 Mov
	func_6041(var_211_object); // 0x33a NEW_2
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
	func_6044(); // 0x349 NEW_2
}


task_3_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_string = ""; // 0x34d PushV
	var_24_string = var_22_bool; // 0x34e Mov
	func_5864(var_23_bool, var_24_string); // 0x34f NEW_2
	if(var_23_bool == 0) goto Label_857; // 0x351 JumpB
	func_858(); // 0x353 NEW_2
	var_34_string = ""; // 0x355 PushV
	var_34_string = var_22_bool; // 0x356 Mov
	func_5880(var_34_string); // 0x357 NEW_2
	
Label_857:
	return 0; // 0x359 Return
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_858(); // 0x367 NEW_2
	var_25_object = Obj(); // 0x369 PushV
	var_25_object = var_22_bool; // 0x36a Mov
	func_5759(); // 0x36b NEW_2
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
	func_5396(var_29_bool, var_30_object); // 0x375 NEW_2
	var_63_bool = var_29_bool == 0; // 0x377 Not
	if(var_63_bool == 0) goto Label_893; // 0x378 JumpB
	func_858(); // 0x37a NEW_2
	return 4; // 0x37c Return
	
Label_893:
	GetDirection(var_25_cvector); // 0x37d Func
	var_66_cvector = CVector(0,0,0); var_67_object = Obj(); // 0x37f PushV
	var_67_object = var_0_bool; // 0x380 MovT
	func_5323(var_67_object); // 0x381 NEW_2
	var_26_cvector = var_66_cvector; // 0x382 Mov
	var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); // 0x384 PushV
	var_73_cvector = var_25_cvector; // 0x385 Mov
	var_74_cvector = var_26_cvector; // 0x386 Mov
	func_5707(var_72_float, var_73_cvector, var_74_cvector); // 0x387 NEW_2
	var_96_float = 0.5; // 0x389 PushF
	var_97_bool = var_72_float < var_96_float; // 0x38a LT
	if(var_97_bool == 0) goto Label_912; // 0x38b JumpB
	var_98_object = Obj(); // 0x38c PushV
	var_98_object = var_0_bool; // 0x38d MovT
	func_5420(); // 0x38e NEW_2
	
Label_912:
	return 4; // 0x390 Return
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_858(); // 0x392 NEW_2
	func_6055(); // 0x395 NEW_2
	return 0; // 0x397 Return
}


task_3_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj(); // 0x399 PushV
	var_24_object = var_22_bool; // 0x39a Mov
	func_5822(var_23_bool, var_24_object); // 0x39b NEW_2
	if(var_23_bool == 0) goto Label_933; // 0x39d JumpB
	func_858(); // 0x39f NEW_2
	var_39_object = Obj(); // 0x3a1 PushV
	var_39_object = var_22_bool; // 0x3a2 Mov
	func_5845(var_39_object); // 0x3a3 NEW_2
	
Label_933:
	return 0; // 0x3a5 Return
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_1124(var_21_bool); // 0x3c3 NEW_2
	func_6055(); // 0x3c6 NEW_2
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
	func_5318(var_94_cvector); // 0x460 NEW_2
	var_1_bool = var_94_cvector + var_29_cvector; // 0x462 Add2
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1124(var_22_bool); // 0x46d NEW_2
	var_24_object = Obj(); // 0x46f PushV
	var_24_object = var_22_bool; // 0x470 Mov
	func_5759(); // 0x471 NEW_2
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
	func_5318(var_94_cvector); // 0x51b NEW_2
	var_1_bool = var_94_cvector + var_29_cvector; // 0x51d Add2
}


task_5_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1311(var_22_bool); // 0x528 NEW_2
	var_24_object = Obj(); // 0x52a PushV
	var_24_object = var_22_bool; // 0x52b Mov
	func_5759(); // 0x52c NEW_2
	return 0; // 0x52e Return
}


task_6_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_1505(var_21_bool); // 0x540 NEW_2
	func_6055(); // 0x543 NEW_2
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
	func_5318(var_94_cvector); // 0x5dd NEW_2
	var_1_bool = var_94_cvector + var_29_cvector; // 0x5df Add2
}


task_6_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1505(var_22_bool); // 0x5ea NEW_2
	var_24_object = Obj(); // 0x5ec PushV
	var_24_object = var_22_bool; // 0x5ed Mov
	func_5759(); // 0x5ee NEW_2
	return 0; // 0x5f0 Return
}


task_7_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_1699(var_21_bool); // 0x602 NEW_2
	func_6055(); // 0x605 NEW_2
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
	func_5318(var_94_cvector); // 0x69f NEW_2
	var_1_bool = var_94_cvector + var_29_cvector; // 0x6a1 Add2
}


task_7_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1699(var_22_bool); // 0x6ac NEW_2
	var_24_object = Obj(); // 0x6ae PushV
	var_24_object = var_22_bool; // 0x6af Mov
	func_5759(); // 0x6b0 NEW_2
	return 0; // 0x6b2 Return
}


task_9_event_11(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_int, var_23_int)
{
	var_24_int = 1; // 0x9a6 PushI
	if(var_24_int == 0) goto Label_5317; // 0x9a7 JumpB
	func_5626(); // 0x9a9 NEW_2
	var_26_int = 45666; // 0x9ab PushI
	var_27_bool = var_23_int == var_26_int; // 0x9ac Eq
	if(var_27_bool == 0) goto Label_2483; // 0x9ad JumpB
	var_28_object = Obj(); var_29_object = Obj(); // 0x9ae PushV
	var_28_object = var_1_bool; // 0x9af MovT
	var_29_object = var_0_bool; // 0x9b0 MovT
	func_6120(); // 0x9b1 NEW_2
	
Label_2483:
	var_31_int = 45667; // 0x9b3 PushI
	var_32_bool = var_23_int == var_31_int; // 0x9b4 Eq
	if(var_32_bool == 0) goto Label_2491; // 0x9b5 JumpB
	var_33_object = Obj(); var_34_object = Obj(); // 0x9b6 PushV
	var_33_object = var_1_bool; // 0x9b7 MovT
	var_34_object = var_0_bool; // 0x9b8 MovT
	func_6120(); // 0x9b9 NEW_2
	
Label_2491:
	var_35_int = 45668; // 0x9bb PushI
	var_36_bool = var_23_int == var_35_int; // 0x9bc Eq
	if(var_36_bool == 0) goto Label_2499; // 0x9bd JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x9be PushV
	var_37_object = var_1_bool; // 0x9bf MovT
	var_38_object = var_0_bool; // 0x9c0 MovT
	func_6120(); // 0x9c1 NEW_2
	
Label_2499:
	var_39_int = 39084; // 0x9c3 PushI
	var_40_bool = var_23_int == var_39_int; // 0x9c4 Eq
	if(var_40_bool == 0) goto Label_2507; // 0x9c5 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0x9c6 PushV
	var_41_object = var_1_bool; // 0x9c7 MovT
	var_42_object = var_0_bool; // 0x9c8 MovT
	func_6120(); // 0x9c9 NEW_2
	
Label_2507:
	var_43_int = 39093; // 0x9cb PushI
	var_44_bool = var_23_int == var_43_int; // 0x9cc Eq
	if(var_44_bool == 0) goto Label_2515; // 0x9cd JumpB
	var_45_object = Obj(); var_46_object = Obj(); // 0x9ce PushV
	var_45_object = var_1_bool; // 0x9cf MovT
	var_46_object = var_0_bool; // 0x9d0 MovT
	func_6110(); // 0x9d1 NEW_2
	
Label_2515:
	var_57_int = 39094; // 0x9d3 PushI
	var_58_bool = var_23_int == var_57_int; // 0x9d4 Eq
	if(var_58_bool == 0) goto Label_2523; // 0x9d5 JumpB
	var_59_object = Obj(); var_60_object = Obj(); // 0x9d6 PushV
	var_59_object = var_1_bool; // 0x9d7 MovT
	var_60_object = var_0_bool; // 0x9d8 MovT
	func_6110(); // 0x9d9 NEW_2
	
Label_2523:
	var_61_int = 39095; // 0x9db PushI
	var_62_bool = var_23_int == var_61_int; // 0x9dc Eq
	if(var_62_bool == 0) goto Label_2531; // 0x9dd JumpB
	var_63_object = Obj(); var_64_object = Obj(); // 0x9de PushV
	var_63_object = var_1_bool; // 0x9df MovT
	var_64_object = var_0_bool; // 0x9e0 MovT
	func_6110(); // 0x9e1 NEW_2
	
Label_2531:
	var_65_int = 45665; // 0x9e3 PushI
	var_66_bool = var_22_int == var_65_int; // 0x9e4 Eq
	if(var_66_bool == 0) goto Label_3138; // 0x9e5 JumpB
	var_67_bool = 0; var_68_object = Obj(); // 0x9e6 PushV
	var_68_object = var_1_bool; // 0x9e7 MovT
	func_6137(var_68_object); // 0x9e8 NEW_2
	if(var_67_bool == 0) goto Label_2873; // 0x9ea JumpB
	var_75_string = ""; // 0x9eb PushV
	var_75_string = "Neutral"; // 0x9ec MovS
	func_2447(var_23_int, var_75_string); // 0x9ed NEW_2
	var_92_int = 543209; // 0x9ef PushI
	SetMessage(var_92_int); // 0x9f0 TObjFunc
	ClearReplies(); // 0x9f2 TObjFunc
	var_93_bool = 0; // 0x9f4 PushV
	var_93_bool = 1; // 0x9f5 MovB
	var_94_bool = 0; var_95_object = Obj(); // 0x9f6 PushV
	var_95_object = var_1_bool; // 0x9f7 MovT
	func_6219(var_94_bool, var_95_object); // 0x9f8 NEW_2
	if(var_94_bool == 0) goto Label_2561; // 0x9fa JumpB
	var_105_bool = 0; var_106_object = Obj(); // 0x9fb PushV
	var_106_object = var_1_bool; // 0x9fc MovT
	func_6239(var_105_bool, var_106_object); // 0x9fd NEW_2
	if(var_105_bool == 0) goto Label_2561; // 0x9ff JumpB
	var_93_bool = 0; // 0xa00 MovB
	
Label_2561:
	if(var_93_bool == 0) goto Label_2567; // 0xa01 JumpB
	var_111_int = 543240; // 0xa02 PushI
	var_112_int = 45697; // 0xa03 PushI
	var_113_int = 45696; // 0xa04 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0xa05 TObjFunc
	
Label_2567:
	var_114_bool = 0; // 0xa07 PushV
	var_114_bool = 1; // 0xa08 MovB
	var_115_bool = 0; // 0xa09 PushV
	var_115_bool = 1; // 0xa0a MovB
	var_116_bool = 0; // 0xa0b PushV
	var_116_bool = 1; // 0xa0c MovB
	var_117_bool = 0; var_118_object = Obj(); // 0xa0d PushV
	var_118_object = var_1_bool; // 0xa0e MovT
	func_6149(var_117_bool, var_118_object); // 0xa0f NEW_2
	if(var_117_bool == 0) goto Label_2584; // 0xa11 JumpB
	var_123_bool = 0; var_124_object = Obj(); // 0xa12 PushV
	var_124_object = var_1_bool; // 0xa13 MovT
	func_6169(var_123_bool, var_124_object); // 0xa14 NEW_2
	if(var_123_bool == 0) goto Label_2584; // 0xa16 JumpB
	var_116_bool = 0; // 0xa17 MovB
	
Label_2584:
	if(var_116_bool == 0) goto Label_2591; // 0xa18 JumpB
	var_129_bool = 0; var_130_object = Obj(); // 0xa19 PushV
	var_130_object = var_1_bool; // 0xa1a MovT
	func_6189(var_129_bool, var_130_object); // 0xa1b NEW_2
	if(var_129_bool == 0) goto Label_2591; // 0xa1d JumpB
	var_115_bool = 0; // 0xa1e MovB
	
Label_2591:
	if(var_115_bool == 0) goto Label_2598; // 0xa1f JumpB
	var_135_bool = 0; var_136_object = Obj(); // 0xa20 PushV
	var_136_object = var_1_bool; // 0xa21 MovT
	func_6179(var_135_bool, var_136_object); // 0xa22 NEW_2
	if(var_135_bool == 0) goto Label_2598; // 0xa24 JumpB
	var_114_bool = 0; // 0xa25 MovB
	
Label_2598:
	if(var_114_bool == 0) goto Label_2604; // 0xa26 JumpB
	var_141_int = 543233; // 0xa27 PushI
	var_142_int = 45690; // 0xa28 PushI
	var_143_int = 45689; // 0xa29 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0xa2a TObjFunc
	
Label_2604:
	var_144_bool = 0; var_145_object = Obj(); // 0xa2c PushV
	var_145_object = var_1_bool; // 0xa2d MovT
	func_6159(var_144_bool, var_145_object); // 0xa2e NEW_2
	if(var_144_bool == 0) goto Label_2614; // 0xa30 JumpB
	var_150_int = 543214; // 0xa31 PushI
	var_151_int = 45672; // 0xa32 PushI
	var_152_int = 45670; // 0xa33 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0xa34 TObjFunc
	
Label_2614:
	var_153_bool = 0; // 0xa36 PushV
	var_153_bool = 1; // 0xa37 MovB
	var_154_bool = 0; // 0xa38 PushV
	var_154_bool = 1; // 0xa39 MovB
	var_155_bool = 0; // 0xa3a PushV
	var_155_bool = 1; // 0xa3b MovB
	var_156_bool = 0; var_157_object = Obj(); // 0xa3c PushV
	var_157_object = var_1_bool; // 0xa3d MovT
	func_6149(var_156_bool, var_157_object); // 0xa3e NEW_2
	if(var_156_bool == 0) goto Label_2631; // 0xa40 JumpB
	var_158_bool = 0; var_159_object = Obj(); // 0xa41 PushV
	var_159_object = var_1_bool; // 0xa42 MovT
	func_6159(var_158_bool, var_159_object); // 0xa43 NEW_2
	if(var_158_bool == 0) goto Label_2631; // 0xa45 JumpB
	var_155_bool = 0; // 0xa46 MovB
	
Label_2631:
	if(var_155_bool == 0) goto Label_2638; // 0xa47 JumpB
	var_160_bool = 0; var_161_object = Obj(); // 0xa48 PushV
	var_161_object = var_1_bool; // 0xa49 MovT
	func_6169(var_160_bool, var_161_object); // 0xa4a NEW_2
	if(var_160_bool == 0) goto Label_2638; // 0xa4c JumpB
	var_154_bool = 0; // 0xa4d MovB
	
Label_2638:
	if(var_154_bool == 0) goto Label_2645; // 0xa4e JumpB
	var_162_bool = 0; var_163_object = Obj(); // 0xa4f PushV
	var_163_object = var_1_bool; // 0xa50 MovT
	func_6179(var_162_bool, var_163_object); // 0xa51 NEW_2
	if(var_162_bool == 0) goto Label_2645; // 0xa53 JumpB
	var_153_bool = 0; // 0xa54 MovB
	
Label_2645:
	if(var_153_bool == 0) goto Label_2651; // 0xa55 JumpB
	var_164_int = 543210; // 0xa56 PushI
	var_165_int = -1; // 0xa57 PushI
	var_166_int = 45666; // 0xa58 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0xa59 TObjFunc
	
Label_2651:
	var_167_bool = 0; // 0xa5b PushV
	var_167_bool = 1; // 0xa5c MovB
	var_168_bool = 0; // 0xa5d PushV
	var_168_bool = 1; // 0xa5e MovB
	var_169_bool = 0; var_170_object = Obj(); // 0xa5f PushV
	var_170_object = var_1_bool; // 0xa60 MovT
	func_6189(var_169_bool, var_170_object); // 0xa61 NEW_2
	if(var_169_bool == 0) goto Label_2666; // 0xa63 JumpB
	var_171_bool = 0; var_172_object = Obj(); // 0xa64 PushV
	var_172_object = var_1_bool; // 0xa65 MovT
	func_6199(var_171_bool, var_172_object); // 0xa66 NEW_2
	if(var_171_bool == 0) goto Label_2666; // 0xa68 JumpB
	var_168_bool = 0; // 0xa69 MovB
	
Label_2666:
	if(var_168_bool == 0) goto Label_2673; // 0xa6a JumpB
	var_177_bool = 0; var_178_object = Obj(); // 0xa6b PushV
	var_178_object = var_1_bool; // 0xa6c MovT
	func_6209(var_177_bool, var_178_object); // 0xa6d NEW_2
	if(var_177_bool == 0) goto Label_2673; // 0xa6f JumpB
	var_167_bool = 0; // 0xa70 MovB
	
Label_2673:
	if(var_167_bool == 0) goto Label_2679; // 0xa71 JumpB
	var_183_int = 543211; // 0xa72 PushI
	var_184_int = -1; // 0xa73 PushI
	var_185_int = 45667; // 0xa74 PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0xa75 TObjFunc
	
Label_2679:
	var_186_bool = 0; // 0xa77 PushV
	var_186_bool = 1; // 0xa78 MovB
	var_187_bool = 0; // 0xa79 PushV
	var_187_bool = 1; // 0xa7a MovB
	var_188_bool = 0; // 0xa7b PushV
	var_188_bool = 1; // 0xa7c MovB
	var_189_bool = 0; // 0xa7d PushV
	var_189_bool = 1; // 0xa7e MovB
	var_190_bool = 0; var_191_object = Obj(); // 0xa7f PushV
	var_191_object = var_1_bool; // 0xa80 MovT
	func_6219(var_190_bool, var_191_object); // 0xa81 NEW_2
	if(var_190_bool == 0) goto Label_2698; // 0xa83 JumpB
	var_192_bool = 0; var_193_object = Obj(); // 0xa84 PushV
	var_193_object = var_1_bool; // 0xa85 MovT
	func_6229(var_192_bool, var_193_object); // 0xa86 NEW_2
	if(var_192_bool == 0) goto Label_2698; // 0xa88 JumpB
	var_189_bool = 0; // 0xa89 MovB
	
Label_2698:
	if(var_189_bool == 0) goto Label_2705; // 0xa8a JumpB
	var_198_bool = 0; var_199_object = Obj(); // 0xa8b PushV
	var_199_object = var_1_bool; // 0xa8c MovT
	func_6239(var_198_bool, var_199_object); // 0xa8d NEW_2
	if(var_198_bool == 0) goto Label_2705; // 0xa8f JumpB
	var_188_bool = 0; // 0xa90 MovB
	
Label_2705:
	if(var_188_bool == 0) goto Label_2712; // 0xa91 JumpB
	var_200_bool = 0; var_201_object = Obj(); // 0xa92 PushV
	var_201_object = var_1_bool; // 0xa93 MovT
	func_6249(var_200_bool, var_201_object); // 0xa94 NEW_2
	if(var_200_bool == 0) goto Label_2712; // 0xa96 JumpB
	var_187_bool = 0; // 0xa97 MovB
	
Label_2712:
	if(var_187_bool == 0) goto Label_2719; // 0xa98 JumpB
	var_206_bool = 0; var_207_object = Obj(); // 0xa99 PushV
	var_207_object = var_1_bool; // 0xa9a MovT
	func_6259(var_206_bool, var_207_object); // 0xa9b NEW_2
	if(var_206_bool == 0) goto Label_2719; // 0xa9d JumpB
	var_186_bool = 0; // 0xa9e MovB
	
Label_2719:
	if(var_186_bool == 0) goto Label_2725; // 0xa9f JumpB
	var_212_int = 543212; // 0xaa0 PushI
	var_213_int = -1; // 0xaa1 PushI
	var_214_int = 45668; // 0xaa2 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0xaa3 TObjFunc
	
Label_2725:
	var_215_bool = 0; // 0xaa5 PushV
	var_215_bool = 1; // 0xaa6 MovB
	var_216_bool = 0; // 0xaa7 PushV
	var_216_bool = 1; // 0xaa8 MovB
	var_217_bool = 0; // 0xaa9 PushV
	var_217_bool = 1; // 0xaaa MovB
	var_218_bool = 0; // 0xaab PushV
	var_218_bool = 1; // 0xaac MovB
	var_219_bool = 0; var_220_object = Obj(); // 0xaad PushV
	var_220_object = var_1_bool; // 0xaae MovT
	func_6149(var_219_bool, var_220_object); // 0xaaf NEW_2
	if(var_219_bool == 0) goto Label_2744; // 0xab1 JumpB
	var_221_bool = 0; var_222_object = Obj(); // 0xab2 PushV
	var_222_object = var_1_bool; // 0xab3 MovT
	func_6159(var_221_bool, var_222_object); // 0xab4 NEW_2
	if(var_221_bool == 0) goto Label_2744; // 0xab6 JumpB
	var_218_bool = 0; // 0xab7 MovB
	
Label_2744:
	if(var_218_bool == 0) goto Label_2751; // 0xab8 JumpB
	var_223_bool = 0; var_224_object = Obj(); // 0xab9 PushV
	var_224_object = var_1_bool; // 0xaba MovT
	func_6179(var_223_bool, var_224_object); // 0xabb NEW_2
	if(var_223_bool == 0) goto Label_2751; // 0xabd JumpB
	var_217_bool = 0; // 0xabe MovB
	
Label_2751:
	if(var_217_bool == 0) goto Label_2758; // 0xabf JumpB
	var_225_bool = 0; var_226_object = Obj(); // 0xac0 PushV
	var_226_object = var_1_bool; // 0xac1 MovT
	func_6189(var_225_bool, var_226_object); // 0xac2 NEW_2
	if(var_225_bool == 0) goto Label_2758; // 0xac4 JumpB
	var_216_bool = 0; // 0xac5 MovB
	
Label_2758:
	if(var_216_bool == 0) goto Label_2765; // 0xac6 JumpB
	var_227_bool = 0; var_228_object = Obj(); // 0xac7 PushV
	var_228_object = var_1_bool; // 0xac8 MovT
	func_6209(var_227_bool, var_228_object); // 0xac9 NEW_2
	if(var_227_bool == 0) goto Label_2765; // 0xacb JumpB
	var_215_bool = 0; // 0xacc MovB
	
Label_2765:
	if(var_215_bool == 0) goto Label_2771; // 0xacd JumpB
	var_229_int = 543213; // 0xace PushI
	var_230_int = -1; // 0xacf PushI
	var_231_int = 45669; // 0xad0 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0xad1 TObjFunc
	
Label_2771:
	var_232_bool = 0; // 0xad3 PushV
	var_232_bool = 1; // 0xad4 MovB
	var_233_bool = 0; // 0xad5 PushV
	var_233_bool = 1; // 0xad6 MovB
	var_234_bool = 0; // 0xad7 PushV
	var_234_bool = 1; // 0xad8 MovB
	var_235_bool = 0; // 0xad9 PushV
	var_235_bool = 1; // 0xada MovB
	var_236_bool = 0; // 0xadb PushV
	var_236_bool = 1; // 0xadc MovB
	var_237_bool = 0; // 0xadd PushV
	var_237_bool = 1; // 0xade MovB
	var_238_bool = 0; var_239_object = Obj(); // 0xadf PushV
	var_239_object = var_1_bool; // 0xae0 MovT
	func_6169(var_238_bool, var_239_object); // 0xae1 NEW_2
	if(var_238_bool == 0) goto Label_2794; // 0xae3 JumpB
	var_240_bool = 0; var_241_object = Obj(); // 0xae4 PushV
	var_241_object = var_1_bool; // 0xae5 MovT
	func_6199(var_240_bool, var_241_object); // 0xae6 NEW_2
	if(var_240_bool == 0) goto Label_2794; // 0xae8 JumpB
	var_237_bool = 0; // 0xae9 MovB
	
Label_2794:
	if(var_237_bool == 0) goto Label_2801; // 0xaea JumpB
	var_242_bool = 0; var_243_object = Obj(); // 0xaeb PushV
	var_243_object = var_1_bool; // 0xaec MovT
	func_6229(var_242_bool, var_243_object); // 0xaed NEW_2
	if(var_242_bool == 0) goto Label_2801; // 0xaef JumpB
	var_236_bool = 0; // 0xaf0 MovB
	
Label_2801:
	if(var_236_bool == 0) goto Label_2808; // 0xaf1 JumpB
	var_244_bool = 0; var_245_object = Obj(); // 0xaf2 PushV
	var_245_object = var_1_bool; // 0xaf3 MovT
	func_6259(var_244_bool, var_245_object); // 0xaf4 NEW_2
	if(var_244_bool == 0) goto Label_2808; // 0xaf6 JumpB
	var_235_bool = 0; // 0xaf7 MovB
	
Label_2808:
	if(var_235_bool == 0) goto Label_2815; // 0xaf8 JumpB
	var_246_bool = 0; var_247_object = Obj(); // 0xaf9 PushV
	var_247_object = var_1_bool; // 0xafa MovT
	func_6159(var_246_bool, var_247_object); // 0xafb NEW_2
	if(var_246_bool == 0) goto Label_2815; // 0xafd JumpB
	var_234_bool = 0; // 0xafe MovB
	
Label_2815:
	if(var_234_bool == 0) goto Label_2822; // 0xaff JumpB
	var_248_bool = 0; var_249_object = Obj(); // 0xb00 PushV
	var_249_object = var_1_bool; // 0xb01 MovT
	func_6219(var_248_bool, var_249_object); // 0xb02 NEW_2
	if(var_248_bool == 0) goto Label_2822; // 0xb04 JumpB
	var_233_bool = 0; // 0xb05 MovB
	
Label_2822:
	if(var_233_bool == 0) goto Label_2829; // 0xb06 JumpB
	var_250_bool = 0; var_251_object = Obj(); // 0xb07 PushV
	var_251_object = var_1_bool; // 0xb08 MovT
	func_6239(var_250_bool, var_251_object); // 0xb09 NEW_2
	if(var_250_bool == 0) goto Label_2829; // 0xb0b JumpB
	var_232_bool = 0; // 0xb0c MovB
	
Label_2829:
	if(var_232_bool == 0) goto Label_2835; // 0xb0d JumpB
	var_252_int = 543215; // 0xb0e PushI
	var_253_int = -1; // 0xb0f PushI
	var_254_int = 45671; // 0xb10 PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0xb11 TObjFunc
	
Label_2835:
	var_255_bool = 0; // 0xb13 PushV
	var_255_bool = 1; // 0xb14 MovB
	var_256_bool = 0; // 0xb15 PushV
	var_256_bool = 1; // 0xb16 MovB
	var_257_bool = 0; // 0xb17 PushV
	var_257_bool = 1; // 0xb18 MovB
	var_258_bool = 0; var_259_object = Obj(); // 0xb19 PushV
	var_259_object = var_1_bool; // 0xb1a MovT
	func_6249(var_258_bool, var_259_object); // 0xb1b NEW_2
	if(var_258_bool == 0) goto Label_2852; // 0xb1d JumpB
	var_260_bool = 0; var_261_object = Obj(); // 0xb1e PushV
	var_261_object = var_1_bool; // 0xb1f MovT
	func_6229(var_260_bool, var_261_object); // 0xb20 NEW_2
	if(var_260_bool == 0) goto Label_2852; // 0xb22 JumpB
	var_257_bool = 0; // 0xb23 MovB
	
Label_2852:
	if(var_257_bool == 0) goto Label_2859; // 0xb24 JumpB
	var_262_bool = 0; var_263_object = Obj(); // 0xb25 PushV
	var_263_object = var_1_bool; // 0xb26 MovT
	func_6219(var_262_bool, var_263_object); // 0xb27 NEW_2
	if(var_262_bool == 0) goto Label_2859; // 0xb29 JumpB
	var_256_bool = 0; // 0xb2a MovB
	
Label_2859:
	if(var_256_bool == 0) goto Label_2866; // 0xb2b JumpB
	var_264_bool = 0; var_265_object = Obj(); // 0xb2c PushV
	var_265_object = var_1_bool; // 0xb2d MovT
	func_6209(var_264_bool, var_265_object); // 0xb2e NEW_2
	if(var_264_bool == 0) goto Label_2866; // 0xb30 JumpB
	var_255_bool = 0; // 0xb31 MovB
	
Label_2866:
	if(var_255_bool == 0) goto Label_2872; // 0xb32 JumpB
	var_266_int = 543219; // 0xb33 PushI
	var_267_int = -1; // 0xb34 PushI
	var_268_int = 45675; // 0xb35 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0xb36 TObjFunc
	
Label_2872:
	return 0; // 0xb38 Return
	
Label_2873:
	var_269_string = ""; // 0xb39 PushV
	var_269_string = "Neutral"; // 0xb3a MovS
	func_2447(var_23_int, var_269_string); // 0xb3b NEW_2
	var_270_int = 537240; // 0xb3d PushI
	SetMessage(var_270_int); // 0xb3e TObjFunc
	ClearReplies(); // 0xb40 TObjFunc
	var_271_int = 537241; // 0xb42 PushI
	var_272_int = -1; // 0xb43 PushI
	var_273_int = 39084; // 0xb44 PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0xb45 TObjFunc
	var_274_bool = 0; // 0xb47 PushV
	var_274_bool = 0; // 0xb48 MovB
	var_275_bool = 0; var_276_object = Obj(); // 0xb49 PushV
	var_276_object = var_1_bool; // 0xb4a MovT
	func_6125(var_276_object); // 0xb4b NEW_2
	if(var_275_bool == 0) goto Label_2900; // 0xb4d JumpB
	var_281_bool = 0; var_282_object = Obj(); // 0xb4e PushV
	var_282_object = var_1_bool; // 0xb4f MovT
	func_6149(var_281_bool, var_282_object); // 0xb50 NEW_2
	if(var_281_bool == 0) goto Label_2900; // 0xb52 JumpB
	var_274_bool = 1; // 0xb53 MovB
	
Label_2900:
	if(var_274_bool == 0) goto Label_2906; // 0xb54 JumpB
	var_283_int = 537242; // 0xb55 PushI
	var_284_int = 39086; // 0xb56 PushI
	var_285_int = 39085; // 0xb57 PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0xb58 TObjFunc
	
Label_2906:
	var_286_bool = 0; var_287_object = Obj(); // 0xb5a PushV
	var_287_object = var_1_bool; // 0xb5b MovT
	func_6149(var_286_bool, var_287_object); // 0xb5c NEW_2
	if(var_286_bool == 0) goto Label_2916; // 0xb5e JumpB
	var_288_int = 537277; // 0xb5f PushI
	var_289_int = 39122; // 0xb60 PushI
	var_290_int = 39121; // 0xb61 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0xb62 TObjFunc
	
Label_2916:
	var_291_bool = 0; var_292_object = Obj(); // 0xb64 PushV
	var_292_object = var_1_bool; // 0xb65 MovT
	func_6159(var_291_bool, var_292_object); // 0xb66 NEW_2
	if(var_291_bool == 0) goto Label_2926; // 0xb68 JumpB
	var_293_int = 537329; // 0xb69 PushI
	var_294_int = 39176; // 0xb6a PushI
	var_295_int = 39175; // 0xb6b PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0xb6c TObjFunc
	
Label_2926:
	var_296_bool = 0; // 0xb6e PushV
	var_296_bool = 0; // 0xb6f MovB
	var_297_bool = 0; var_298_object = Obj(); // 0xb70 PushV
	var_298_object = var_1_bool; // 0xb71 MovT
	func_6169(var_297_bool, var_298_object); // 0xb72 NEW_2
	if(var_297_bool == 0) goto Label_2939; // 0xb74 JumpB
	var_299_bool = 0; var_300_object = Obj(); // 0xb75 PushV
	var_300_object = var_1_bool; // 0xb76 MovT
	func_6269(var_299_bool, var_300_object); // 0xb77 NEW_2
	if(var_299_bool == 0) goto Label_2939; // 0xb79 JumpB
	var_296_bool = 1; // 0xb7a MovB
	
Label_2939:
	if(var_296_bool == 0) goto Label_2945; // 0xb7b JumpB
	var_314_int = 537352; // 0xb7c PushI
	var_315_int = 39199; // 0xb7d PushI
	var_316_int = 39198; // 0xb7e PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0xb7f TObjFunc
	
Label_2945:
	var_317_bool = 0; // 0xb81 PushV
	var_317_bool = 0; // 0xb82 MovB
	var_318_bool = 0; // 0xb83 PushV
	var_318_bool = 0; // 0xb84 MovB
	var_319_bool = 0; var_320_object = Obj(); // 0xb85 PushV
	var_320_object = var_1_bool; // 0xb86 MovT
	func_6125(var_320_object); // 0xb87 NEW_2
	if(var_319_bool == 0) goto Label_2960; // 0xb89 JumpB
	var_321_bool = 0; var_322_object = Obj(); // 0xb8a PushV
	var_322_object = var_1_bool; // 0xb8b MovT
	func_6169(var_321_bool, var_322_object); // 0xb8c NEW_2
	if(var_321_bool == 0) goto Label_2960; // 0xb8e JumpB
	var_318_bool = 1; // 0xb8f MovB
	
Label_2960:
	if(var_318_bool == 0) goto Label_2967; // 0xb90 JumpB
	var_323_bool = 0; var_324_object = Obj(); // 0xb91 PushV
	var_324_object = var_1_bool; // 0xb92 MovT
	func_6279(var_323_bool, var_324_object); // 0xb93 NEW_2
	if(var_323_bool == 0) goto Label_2967; // 0xb95 JumpB
	var_317_bool = 1; // 0xb96 MovB
	
Label_2967:
	if(var_317_bool == 0) goto Label_2973; // 0xb97 JumpB
	var_330_int = 537359; // 0xb98 PushI
	var_331_int = 39206; // 0xb99 PushI
	var_332_int = 39205; // 0xb9a PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0xb9b TObjFunc
	
Label_2973:
	var_333_bool = 0; // 0xb9d PushV
	var_333_bool = 0; // 0xb9e MovB
	var_334_bool = 0; var_335_object = Obj(); // 0xb9f PushV
	var_335_object = var_1_bool; // 0xba0 MovT
	func_6179(var_334_bool, var_335_object); // 0xba1 NEW_2
	if(var_334_bool == 0) goto Label_2986; // 0xba3 JumpB
	var_336_bool = 0; var_337_object = Obj(); // 0xba4 PushV
	var_337_object = var_1_bool; // 0xba5 MovT
	func_6269(var_336_bool, var_337_object); // 0xba6 NEW_2
	if(var_336_bool == 0) goto Label_2986; // 0xba8 JumpB
	var_333_bool = 1; // 0xba9 MovB
	
Label_2986:
	if(var_333_bool == 0) goto Label_2992; // 0xbaa JumpB
	var_338_int = 537380; // 0xbab PushI
	var_339_int = 39227; // 0xbac PushI
	var_340_int = 39226; // 0xbad PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0xbae TObjFunc
	
Label_2992:
	var_341_bool = 0; // 0xbb0 PushV
	var_341_bool = 0; // 0xbb1 MovB
	var_342_bool = 0; var_343_object = Obj(); // 0xbb2 PushV
	var_343_object = var_1_bool; // 0xbb3 MovT
	func_6179(var_342_bool, var_343_object); // 0xbb4 NEW_2
	if(var_342_bool == 0) goto Label_3005; // 0xbb6 JumpB
	var_344_bool = 0; var_345_object = Obj(); // 0xbb7 PushV
	var_345_object = var_1_bool; // 0xbb8 MovT
	func_6279(var_344_bool, var_345_object); // 0xbb9 NEW_2
	if(var_344_bool == 0) goto Label_3005; // 0xbbb JumpB
	var_341_bool = 1; // 0xbbc MovB
	
Label_3005:
	if(var_341_bool == 0) goto Label_3011; // 0xbbd JumpB
	var_346_int = 537390; // 0xbbe PushI
	var_347_int = 39237; // 0xbbf PushI
	var_348_int = 39236; // 0xbc0 PushI
	AddReply(var_346_int, var_347_int, var_348_int); // 0xbc1 TObjFunc
	
Label_3011:
	var_349_bool = 0; var_350_object = Obj(); // 0xbc3 PushV
	var_350_object = var_1_bool; // 0xbc4 MovT
	func_6189(var_349_bool, var_350_object); // 0xbc5 NEW_2
	if(var_349_bool == 0) goto Label_3021; // 0xbc7 JumpB
	var_351_int = 537400; // 0xbc8 PushI
	var_352_int = 39247; // 0xbc9 PushI
	var_353_int = 39246; // 0xbca PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0xbcb TObjFunc
	
Label_3021:
	var_354_bool = 0; // 0xbcd PushV
	var_354_bool = 0; // 0xbce MovB
	var_355_bool = 0; var_356_object = Obj(); // 0xbcf PushV
	var_356_object = var_1_bool; // 0xbd0 MovT
	func_6125(var_356_object); // 0xbd1 NEW_2
	if(var_355_bool == 0) goto Label_3034; // 0xbd3 JumpB
	var_357_bool = 0; var_358_object = Obj(); // 0xbd4 PushV
	var_358_object = var_1_bool; // 0xbd5 MovT
	func_6199(var_357_bool, var_358_object); // 0xbd6 NEW_2
	if(var_357_bool == 0) goto Label_3034; // 0xbd8 JumpB
	var_354_bool = 1; // 0xbd9 MovB
	
Label_3034:
	if(var_354_bool == 0) goto Label_3040; // 0xbda JumpB
	var_359_int = 537423; // 0xbdb PushI
	var_360_int = 39270; // 0xbdc PushI
	var_361_int = 39269; // 0xbdd PushI
	AddReply(var_359_int, var_360_int, var_361_int); // 0xbde TObjFunc
	
Label_3040:
	var_362_bool = 0; var_363_object = Obj(); // 0xbe0 PushV
	var_363_object = var_1_bool; // 0xbe1 MovT
	func_6209(var_362_bool, var_363_object); // 0xbe2 NEW_2
	if(var_362_bool == 0) goto Label_3050; // 0xbe4 JumpB
	var_364_int = 537433; // 0xbe5 PushI
	var_365_int = 39280; // 0xbe6 PushI
	var_366_int = 39279; // 0xbe7 PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0xbe8 TObjFunc
	
Label_3050:
	var_367_bool = 0; // 0xbea PushV
	var_367_bool = 0; // 0xbeb MovB
	var_368_bool = 0; var_369_object = Obj(); // 0xbec PushV
	var_369_object = var_1_bool; // 0xbed MovT
	func_6125(var_369_object); // 0xbee NEW_2
	if(var_368_bool == 0) goto Label_3063; // 0xbf0 JumpB
	var_370_bool = 0; var_371_object = Obj(); // 0xbf1 PushV
	var_371_object = var_1_bool; // 0xbf2 MovT
	func_6219(var_370_bool, var_371_object); // 0xbf3 NEW_2
	if(var_370_bool == 0) goto Label_3063; // 0xbf5 JumpB
	var_367_bool = 1; // 0xbf6 MovB
	
Label_3063:
	if(var_367_bool == 0) goto Label_3069; // 0xbf7 JumpB
	var_372_int = 537451; // 0xbf8 PushI
	var_373_int = 39299; // 0xbf9 PushI
	var_374_int = 39298; // 0xbfa PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0xbfb TObjFunc
	
Label_3069:
	var_375_bool = 0; // 0xbfd PushV
	var_375_bool = 0; // 0xbfe MovB
	var_376_bool = 0; var_377_object = Obj(); // 0xbff PushV
	var_377_object = var_1_bool; // 0xc00 MovT
	func_6125(var_377_object); // 0xc01 NEW_2
	if(var_376_bool == 0) goto Label_3082; // 0xc03 JumpB
	var_378_bool = 0; var_379_object = Obj(); // 0xc04 PushV
	var_379_object = var_1_bool; // 0xc05 MovT
	func_6229(var_378_bool, var_379_object); // 0xc06 NEW_2
	if(var_378_bool == 0) goto Label_3082; // 0xc08 JumpB
	var_375_bool = 1; // 0xc09 MovB
	
Label_3082:
	if(var_375_bool == 0) goto Label_3088; // 0xc0a JumpB
	var_380_int = 537460; // 0xc0b PushI
	var_381_int = 39308; // 0xc0c PushI
	var_382_int = 39307; // 0xc0d PushI
	AddReply(var_380_int, var_381_int, var_382_int); // 0xc0e TObjFunc
	
Label_3088:
	var_383_bool = 0; // 0xc10 PushV
	var_383_bool = 0; // 0xc11 MovB
	var_384_bool = 0; var_385_object = Obj(); // 0xc12 PushV
	var_385_object = var_1_bool; // 0xc13 MovT
	func_6125(var_385_object); // 0xc14 NEW_2
	if(var_384_bool == 0) goto Label_3101; // 0xc16 JumpB
	var_386_bool = 0; var_387_object = Obj(); // 0xc17 PushV
	var_387_object = var_1_bool; // 0xc18 MovT
	func_6249(var_386_bool, var_387_object); // 0xc19 NEW_2
	if(var_386_bool == 0) goto Label_3101; // 0xc1b JumpB
	var_383_bool = 1; // 0xc1c MovB
	
Label_3101:
	if(var_383_bool == 0) goto Label_3107; // 0xc1d JumpB
	var_388_int = 537473; // 0xc1e PushI
	var_389_int = 39321; // 0xc1f PushI
	var_390_int = 39320; // 0xc20 PushI
	AddReply(var_388_int, var_389_int, var_390_int); // 0xc21 TObjFunc
	
Label_3107:
	var_391_bool = 0; var_392_object = Obj(); // 0xc23 PushV
	var_392_object = var_1_bool; // 0xc24 MovT
	func_6249(var_391_bool, var_392_object); // 0xc25 NEW_2
	if(var_391_bool == 0) goto Label_3117; // 0xc27 JumpB
	var_393_int = 537483; // 0xc28 PushI
	var_394_int = 39331; // 0xc29 PushI
	var_395_int = 39330; // 0xc2a PushI
	AddReply(var_393_int, var_394_int, var_395_int); // 0xc2b TObjFunc
	
Label_3117:
	var_396_bool = 0; var_397_object = Obj(); // 0xc2d PushV
	var_397_object = var_1_bool; // 0xc2e MovT
	func_6259(var_396_bool, var_397_object); // 0xc2f NEW_2
	if(var_396_bool == 0) goto Label_3127; // 0xc31 JumpB
	var_398_int = 537493; // 0xc32 PushI
	var_399_int = 39341; // 0xc33 PushI
	var_400_int = 39340; // 0xc34 PushI
	AddReply(var_398_int, var_399_int, var_400_int); // 0xc35 TObjFunc
	
Label_3127:
	var_401_int = 537503; // 0xc37 PushI
	var_402_int = -1; // 0xc38 PushI
	var_403_int = 39350; // 0xc39 PushI
	AddReply(var_401_int, var_402_int, var_403_int); // 0xc3a TObjFunc
	var_404_int = 537504; // 0xc3c PushI
	var_405_int = -1; // 0xc3d PushI
	var_406_int = 39351; // 0xc3e PushI
	AddReply(var_404_int, var_405_int, var_406_int); // 0xc3f TObjFunc
	return 0; // 0xc41 Return
	
Label_3138:
	var_407_int = 39341; // 0xc42 PushI
	var_408_bool = var_22_int == var_407_int; // 0xc43 Eq
	if(var_408_bool == 0) goto Label_3161; // 0xc44 JumpB
	var_409_string = ""; // 0xc45 PushV
	var_409_string = "Neutral"; // 0xc46 MovS
	func_2447(var_23_int, var_409_string); // 0xc47 NEW_2
	var_410_int = 537494; // 0xc49 PushI
	SetMessage(var_410_int); // 0xc4a TObjFunc
	ClearReplies(); // 0xc4c TObjFunc
	var_411_int = 537495; // 0xc4e PushI
	var_412_int = 39343; // 0xc4f PushI
	var_413_int = 39342; // 0xc50 PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0xc51 TObjFunc
	var_414_int = 537499; // 0xc53 PushI
	var_415_int = 39347; // 0xc54 PushI
	var_416_int = 39346; // 0xc55 PushI
	AddReply(var_414_int, var_415_int, var_416_int); // 0xc56 TObjFunc
	return 0; // 0xc58 Return
	
Label_3161:
	var_417_int = 39347; // 0xc59 PushI
	var_418_bool = var_22_int == var_417_int; // 0xc5a Eq
	if(var_418_bool == 0) goto Label_3189; // 0xc5b JumpB
	var_419_string = ""; // 0xc5c PushV
	var_419_string = "Neutral"; // 0xc5d MovS
	func_2447(var_23_int, var_419_string); // 0xc5e NEW_2
	var_420_int = 537500; // 0xc60 PushI
	SetMessage(var_420_int); // 0xc61 TObjFunc
	ClearReplies(); // 0xc63 TObjFunc
	var_421_int = 537501; // 0xc65 PushI
	var_422_int = -1; // 0xc66 PushI
	var_423_int = 39348; // 0xc67 PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0xc68 TObjFunc
	var_424_bool = 0; var_425_object = Obj(); // 0xc6a PushV
	var_425_object = var_1_bool; // 0xc6b MovT
	func_6125(var_425_object); // 0xc6c NEW_2
	if(var_424_bool == 0) goto Label_3188; // 0xc6e JumpB
	var_426_int = 537502; // 0xc6f PushI
	var_427_int = -1; // 0xc70 PushI
	var_428_int = 39349; // 0xc71 PushI
	AddReply(var_426_int, var_427_int, var_428_int); // 0xc72 TObjFunc
	
Label_3188:
	return 0; // 0xc74 Return
	
Label_3189:
	var_429_int = 39343; // 0xc75 PushI
	var_430_bool = var_22_int == var_429_int; // 0xc76 Eq
	if(var_430_bool == 0) goto Label_3212; // 0xc77 JumpB
	var_431_string = ""; // 0xc78 PushV
	var_431_string = "Neutral"; // 0xc79 MovS
	func_2447(var_23_int, var_431_string); // 0xc7a NEW_2
	var_432_int = 537496; // 0xc7c PushI
	SetMessage(var_432_int); // 0xc7d TObjFunc
	ClearReplies(); // 0xc7f TObjFunc
	var_433_int = 537497; // 0xc81 PushI
	var_434_int = -1; // 0xc82 PushI
	var_435_int = 39344; // 0xc83 PushI
	AddReply(var_433_int, var_434_int, var_435_int); // 0xc84 TObjFunc
	var_436_int = 537498; // 0xc86 PushI
	var_437_int = -1; // 0xc87 PushI
	var_438_int = 39345; // 0xc88 PushI
	AddReply(var_436_int, var_437_int, var_438_int); // 0xc89 TObjFunc
	return 0; // 0xc8b Return
	
Label_3212:
	var_439_int = 39331; // 0xc8c PushI
	var_440_bool = var_22_int == var_439_int; // 0xc8d Eq
	if(var_440_bool == 0) goto Label_3235; // 0xc8e JumpB
	var_441_string = ""; // 0xc8f PushV
	var_441_string = "Neutral"; // 0xc90 MovS
	func_2447(var_23_int, var_441_string); // 0xc91 NEW_2
	var_442_int = 537484; // 0xc93 PushI
	SetMessage(var_442_int); // 0xc94 TObjFunc
	ClearReplies(); // 0xc96 TObjFunc
	var_443_int = 537485; // 0xc98 PushI
	var_444_int = 39333; // 0xc99 PushI
	var_445_int = 39332; // 0xc9a PushI
	AddReply(var_443_int, var_444_int, var_445_int); // 0xc9b TObjFunc
	var_446_int = 537492; // 0xc9d PushI
	var_447_int = -1; // 0xc9e PushI
	var_448_int = 39339; // 0xc9f PushI
	AddReply(var_446_int, var_447_int, var_448_int); // 0xca0 TObjFunc
	return 0; // 0xca2 Return
	
Label_3235:
	var_449_int = 39333; // 0xca3 PushI
	var_450_bool = var_22_int == var_449_int; // 0xca4 Eq
	if(var_450_bool == 0) goto Label_3263; // 0xca5 JumpB
	var_451_string = ""; // 0xca6 PushV
	var_451_string = "Neutral"; // 0xca7 MovS
	func_2447(var_23_int, var_451_string); // 0xca8 NEW_2
	var_452_int = 537486; // 0xcaa PushI
	SetMessage(var_452_int); // 0xcab TObjFunc
	ClearReplies(); // 0xcad TObjFunc
	var_453_int = 537487; // 0xcaf PushI
	var_454_int = 39335; // 0xcb0 PushI
	var_455_int = 39334; // 0xcb1 PushI
	AddReply(var_453_int, var_454_int, var_455_int); // 0xcb2 TObjFunc
	var_456_bool = 0; var_457_object = Obj(); // 0xcb4 PushV
	var_457_object = var_1_bool; // 0xcb5 MovT
	func_6125(var_457_object); // 0xcb6 NEW_2
	if(var_456_bool == 0) goto Label_3262; // 0xcb8 JumpB
	var_458_int = 537491; // 0xcb9 PushI
	var_459_int = -1; // 0xcba PushI
	var_460_int = 39338; // 0xcbb PushI
	AddReply(var_458_int, var_459_int, var_460_int); // 0xcbc TObjFunc
	
Label_3262:
	return 0; // 0xcbe Return
	
Label_3263:
	var_461_int = 39335; // 0xcbf PushI
	var_462_bool = var_22_int == var_461_int; // 0xcc0 Eq
	if(var_462_bool == 0) goto Label_3286; // 0xcc1 JumpB
	var_463_string = ""; // 0xcc2 PushV
	var_463_string = "Neutral"; // 0xcc3 MovS
	func_2447(var_23_int, var_463_string); // 0xcc4 NEW_2
	var_464_int = 537488; // 0xcc6 PushI
	SetMessage(var_464_int); // 0xcc7 TObjFunc
	ClearReplies(); // 0xcc9 TObjFunc
	var_465_int = 537489; // 0xccb PushI
	var_466_int = -1; // 0xccc PushI
	var_467_int = 39336; // 0xccd PushI
	AddReply(var_465_int, var_466_int, var_467_int); // 0xcce TObjFunc
	var_468_int = 537490; // 0xcd0 PushI
	var_469_int = -1; // 0xcd1 PushI
	var_470_int = 39337; // 0xcd2 PushI
	AddReply(var_468_int, var_469_int, var_470_int); // 0xcd3 TObjFunc
	return 0; // 0xcd5 Return
	
Label_3286:
	var_471_int = 39321; // 0xcd6 PushI
	var_472_bool = var_22_int == var_471_int; // 0xcd7 Eq
	if(var_472_bool == 0) goto Label_3309; // 0xcd8 JumpB
	var_473_string = ""; // 0xcd9 PushV
	var_473_string = "Neutral"; // 0xcda MovS
	func_2447(var_23_int, var_473_string); // 0xcdb NEW_2
	var_474_int = 537474; // 0xcdd PushI
	SetMessage(var_474_int); // 0xcde TObjFunc
	ClearReplies(); // 0xce0 TObjFunc
	var_475_int = 537475; // 0xce2 PushI
	var_476_int = 39323; // 0xce3 PushI
	var_477_int = 39322; // 0xce4 PushI
	AddReply(var_475_int, var_476_int, var_477_int); // 0xce5 TObjFunc
	var_478_int = 537482; // 0xce7 PushI
	var_479_int = -1; // 0xce8 PushI
	var_480_int = 39329; // 0xce9 PushI
	AddReply(var_478_int, var_479_int, var_480_int); // 0xcea TObjFunc
	return 0; // 0xcec Return
	
Label_3309:
	var_481_int = 39323; // 0xced PushI
	var_482_bool = var_22_int == var_481_int; // 0xcee Eq
	if(var_482_bool == 0) goto Label_3332; // 0xcef JumpB
	var_483_string = ""; // 0xcf0 PushV
	var_483_string = "Neutral"; // 0xcf1 MovS
	func_2447(var_23_int, var_483_string); // 0xcf2 NEW_2
	var_484_int = 537476; // 0xcf4 PushI
	SetMessage(var_484_int); // 0xcf5 TObjFunc
	ClearReplies(); // 0xcf7 TObjFunc
	var_485_int = 537477; // 0xcf9 PushI
	var_486_int = 39325; // 0xcfa PushI
	var_487_int = 39324; // 0xcfb PushI
	AddReply(var_485_int, var_486_int, var_487_int); // 0xcfc TObjFunc
	var_488_int = 537481; // 0xcfe PushI
	var_489_int = -1; // 0xcff PushI
	var_490_int = 39328; // 0xd00 PushI
	AddReply(var_488_int, var_489_int, var_490_int); // 0xd01 TObjFunc
	return 0; // 0xd03 Return
	
Label_3332:
	var_491_int = 39325; // 0xd04 PushI
	var_492_bool = var_22_int == var_491_int; // 0xd05 Eq
	if(var_492_bool == 0) goto Label_3355; // 0xd06 JumpB
	var_493_string = ""; // 0xd07 PushV
	var_493_string = "Neutral"; // 0xd08 MovS
	func_2447(var_23_int, var_493_string); // 0xd09 NEW_2
	var_494_int = 537478; // 0xd0b PushI
	SetMessage(var_494_int); // 0xd0c TObjFunc
	ClearReplies(); // 0xd0e TObjFunc
	var_495_int = 537479; // 0xd10 PushI
	var_496_int = -1; // 0xd11 PushI
	var_497_int = 39326; // 0xd12 PushI
	AddReply(var_495_int, var_496_int, var_497_int); // 0xd13 TObjFunc
	var_498_int = 537480; // 0xd15 PushI
	var_499_int = -1; // 0xd16 PushI
	var_500_int = 39327; // 0xd17 PushI
	AddReply(var_498_int, var_499_int, var_500_int); // 0xd18 TObjFunc
	return 0; // 0xd1a Return
	
Label_3355:
	var_501_int = 39308; // 0xd1b PushI
	var_502_bool = var_22_int == var_501_int; // 0xd1c Eq
	if(var_502_bool == 0) goto Label_3378; // 0xd1d JumpB
	var_503_string = ""; // 0xd1e PushV
	var_503_string = "Neutral"; // 0xd1f MovS
	func_2447(var_23_int, var_503_string); // 0xd20 NEW_2
	var_504_int = 537461; // 0xd22 PushI
	SetMessage(var_504_int); // 0xd23 TObjFunc
	ClearReplies(); // 0xd25 TObjFunc
	var_505_int = 537462; // 0xd27 PushI
	var_506_int = 39310; // 0xd28 PushI
	var_507_int = 39309; // 0xd29 PushI
	AddReply(var_505_int, var_506_int, var_507_int); // 0xd2a TObjFunc
	var_508_int = 537472; // 0xd2c PushI
	var_509_int = -1; // 0xd2d PushI
	var_510_int = 39319; // 0xd2e PushI
	AddReply(var_508_int, var_509_int, var_510_int); // 0xd2f TObjFunc
	return 0; // 0xd31 Return
	
Label_3378:
	var_511_int = 39310; // 0xd32 PushI
	var_512_bool = var_22_int == var_511_int; // 0xd33 Eq
	if(var_512_bool == 0) goto Label_3401; // 0xd34 JumpB
	var_513_string = ""; // 0xd35 PushV
	var_513_string = "Neutral"; // 0xd36 MovS
	func_2447(var_23_int, var_513_string); // 0xd37 NEW_2
	var_514_int = 537463; // 0xd39 PushI
	SetMessage(var_514_int); // 0xd3a TObjFunc
	ClearReplies(); // 0xd3c TObjFunc
	var_515_int = 537464; // 0xd3e PushI
	var_516_int = 39312; // 0xd3f PushI
	var_517_int = 39311; // 0xd40 PushI
	AddReply(var_515_int, var_516_int, var_517_int); // 0xd41 TObjFunc
	var_518_int = 537471; // 0xd43 PushI
	var_519_int = -1; // 0xd44 PushI
	var_520_int = 39318; // 0xd45 PushI
	AddReply(var_518_int, var_519_int, var_520_int); // 0xd46 TObjFunc
	return 0; // 0xd48 Return
	
Label_3401:
	var_521_int = 39312; // 0xd49 PushI
	var_522_bool = var_22_int == var_521_int; // 0xd4a Eq
	if(var_522_bool == 0) goto Label_3424; // 0xd4b JumpB
	var_523_string = ""; // 0xd4c PushV
	var_523_string = "Neutral"; // 0xd4d MovS
	func_2447(var_23_int, var_523_string); // 0xd4e NEW_2
	var_524_int = 537465; // 0xd50 PushI
	SetMessage(var_524_int); // 0xd51 TObjFunc
	ClearReplies(); // 0xd53 TObjFunc
	var_525_int = 537466; // 0xd55 PushI
	var_526_int = 39314; // 0xd56 PushI
	var_527_int = 39313; // 0xd57 PushI
	AddReply(var_525_int, var_526_int, var_527_int); // 0xd58 TObjFunc
	var_528_int = 537470; // 0xd5a PushI
	var_529_int = -1; // 0xd5b PushI
	var_530_int = 39317; // 0xd5c PushI
	AddReply(var_528_int, var_529_int, var_530_int); // 0xd5d TObjFunc
	return 0; // 0xd5f Return
	
Label_3424:
	var_531_int = 39314; // 0xd60 PushI
	var_532_bool = var_22_int == var_531_int; // 0xd61 Eq
	if(var_532_bool == 0) goto Label_3447; // 0xd62 JumpB
	var_533_string = ""; // 0xd63 PushV
	var_533_string = "Neutral"; // 0xd64 MovS
	func_2447(var_23_int, var_533_string); // 0xd65 NEW_2
	var_534_int = 537467; // 0xd67 PushI
	SetMessage(var_534_int); // 0xd68 TObjFunc
	ClearReplies(); // 0xd6a TObjFunc
	var_535_int = 537468; // 0xd6c PushI
	var_536_int = -1; // 0xd6d PushI
	var_537_int = 39315; // 0xd6e PushI
	AddReply(var_535_int, var_536_int, var_537_int); // 0xd6f TObjFunc
	var_538_int = 537469; // 0xd71 PushI
	var_539_int = -1; // 0xd72 PushI
	var_540_int = 39316; // 0xd73 PushI
	AddReply(var_538_int, var_539_int, var_540_int); // 0xd74 TObjFunc
	return 0; // 0xd76 Return
	
Label_3447:
	var_541_int = 39299; // 0xd77 PushI
	var_542_bool = var_22_int == var_541_int; // 0xd78 Eq
	if(var_542_bool == 0) goto Label_3470; // 0xd79 JumpB
	var_543_string = ""; // 0xd7a PushV
	var_543_string = "Neutral"; // 0xd7b MovS
	func_2447(var_23_int, var_543_string); // 0xd7c NEW_2
	var_544_int = 537452; // 0xd7e PushI
	SetMessage(var_544_int); // 0xd7f TObjFunc
	ClearReplies(); // 0xd81 TObjFunc
	var_545_int = 537453; // 0xd83 PushI
	var_546_int = 39301; // 0xd84 PushI
	var_547_int = 39300; // 0xd85 PushI
	AddReply(var_545_int, var_546_int, var_547_int); // 0xd86 TObjFunc
	var_548_int = 537459; // 0xd88 PushI
	var_549_int = -1; // 0xd89 PushI
	var_550_int = 39306; // 0xd8a PushI
	AddReply(var_548_int, var_549_int, var_550_int); // 0xd8b TObjFunc
	return 0; // 0xd8d Return
	
Label_3470:
	var_551_int = 39301; // 0xd8e PushI
	var_552_bool = var_22_int == var_551_int; // 0xd8f Eq
	if(var_552_bool == 0) goto Label_3488; // 0xd90 JumpB
	var_553_string = ""; // 0xd91 PushV
	var_553_string = "Neutral"; // 0xd92 MovS
	func_2447(var_23_int, var_553_string); // 0xd93 NEW_2
	var_554_int = 537454; // 0xd95 PushI
	SetMessage(var_554_int); // 0xd96 TObjFunc
	ClearReplies(); // 0xd98 TObjFunc
	var_555_int = 537455; // 0xd9a PushI
	var_556_int = 39303; // 0xd9b PushI
	var_557_int = 39302; // 0xd9c PushI
	AddReply(var_555_int, var_556_int, var_557_int); // 0xd9d TObjFunc
	return 0; // 0xd9f Return
	
Label_3488:
	var_558_int = 39303; // 0xda0 PushI
	var_559_bool = var_22_int == var_558_int; // 0xda1 Eq
	if(var_559_bool == 0) goto Label_3511; // 0xda2 JumpB
	var_560_string = ""; // 0xda3 PushV
	var_560_string = "Neutral"; // 0xda4 MovS
	func_2447(var_23_int, var_560_string); // 0xda5 NEW_2
	var_561_int = 537456; // 0xda7 PushI
	SetMessage(var_561_int); // 0xda8 TObjFunc
	ClearReplies(); // 0xdaa TObjFunc
	var_562_int = 537457; // 0xdac PushI
	var_563_int = -1; // 0xdad PushI
	var_564_int = 39304; // 0xdae PushI
	AddReply(var_562_int, var_563_int, var_564_int); // 0xdaf TObjFunc
	var_565_int = 537458; // 0xdb1 PushI
	var_566_int = -1; // 0xdb2 PushI
	var_567_int = 39305; // 0xdb3 PushI
	AddReply(var_565_int, var_566_int, var_567_int); // 0xdb4 TObjFunc
	return 0; // 0xdb6 Return
	
Label_3511:
	var_568_int = 39280; // 0xdb7 PushI
	var_569_bool = var_22_int == var_568_int; // 0xdb8 Eq
	if(var_569_bool == 0) goto Label_3534; // 0xdb9 JumpB
	var_570_string = ""; // 0xdba PushV
	var_570_string = "Neutral"; // 0xdbb MovS
	func_2447(var_23_int, var_570_string); // 0xdbc NEW_2
	var_571_int = 537434; // 0xdbe PushI
	SetMessage(var_571_int); // 0xdbf TObjFunc
	ClearReplies(); // 0xdc1 TObjFunc
	var_572_int = 537435; // 0xdc3 PushI
	var_573_int = 39282; // 0xdc4 PushI
	var_574_int = 39281; // 0xdc5 PushI
	AddReply(var_572_int, var_573_int, var_574_int); // 0xdc6 TObjFunc
	var_575_int = 537447; // 0xdc8 PushI
	var_576_int = 39294; // 0xdc9 PushI
	var_577_int = 39293; // 0xdca PushI
	AddReply(var_575_int, var_576_int, var_577_int); // 0xdcb TObjFunc
	return 0; // 0xdcd Return
	
Label_3534:
	var_578_int = 39294; // 0xdce PushI
	var_579_bool = var_22_int == var_578_int; // 0xdcf Eq
	if(var_579_bool == 0) goto Label_3557; // 0xdd0 JumpB
	var_580_string = ""; // 0xdd1 PushV
	var_580_string = "Neutral"; // 0xdd2 MovS
	func_2447(var_23_int, var_580_string); // 0xdd3 NEW_2
	var_581_int = 537448; // 0xdd5 PushI
	SetMessage(var_581_int); // 0xdd6 TObjFunc
	ClearReplies(); // 0xdd8 TObjFunc
	var_582_int = 537449; // 0xdda PushI
	var_583_int = 39284; // 0xddb PushI
	var_584_int = 39295; // 0xddc PushI
	AddReply(var_582_int, var_583_int, var_584_int); // 0xddd TObjFunc
	var_585_int = 537450; // 0xddf PushI
	var_586_int = -1; // 0xde0 PushI
	var_587_int = 39297; // 0xde1 PushI
	AddReply(var_585_int, var_586_int, var_587_int); // 0xde2 TObjFunc
	return 0; // 0xde4 Return
	
Label_3557:
	var_588_int = 39282; // 0xde5 PushI
	var_589_bool = var_22_int == var_588_int; // 0xde6 Eq
	if(var_589_bool == 0) goto Label_3575; // 0xde7 JumpB
	var_590_string = ""; // 0xde8 PushV
	var_590_string = "Neutral"; // 0xde9 MovS
	func_2447(var_23_int, var_590_string); // 0xdea NEW_2
	var_591_int = 537436; // 0xdec PushI
	SetMessage(var_591_int); // 0xded TObjFunc
	ClearReplies(); // 0xdef TObjFunc
	var_592_int = 537437; // 0xdf1 PushI
	var_593_int = 39284; // 0xdf2 PushI
	var_594_int = 39283; // 0xdf3 PushI
	AddReply(var_592_int, var_593_int, var_594_int); // 0xdf4 TObjFunc
	return 0; // 0xdf6 Return
	
Label_3575:
	var_595_int = 39284; // 0xdf7 PushI
	var_596_bool = var_22_int == var_595_int; // 0xdf8 Eq
	if(var_596_bool == 0) goto Label_3598; // 0xdf9 JumpB
	var_597_string = ""; // 0xdfa PushV
	var_597_string = "Neutral"; // 0xdfb MovS
	func_2447(var_23_int, var_597_string); // 0xdfc NEW_2
	var_598_int = 537438; // 0xdfe PushI
	SetMessage(var_598_int); // 0xdff TObjFunc
	ClearReplies(); // 0xe01 TObjFunc
	var_599_int = 537439; // 0xe03 PushI
	var_600_int = 39286; // 0xe04 PushI
	var_601_int = 39285; // 0xe05 PushI
	AddReply(var_599_int, var_600_int, var_601_int); // 0xe06 TObjFunc
	var_602_int = 537442; // 0xe08 PushI
	var_603_int = 39289; // 0xe09 PushI
	var_604_int = 39288; // 0xe0a PushI
	AddReply(var_602_int, var_603_int, var_604_int); // 0xe0b TObjFunc
	return 0; // 0xe0d Return
	
Label_3598:
	var_605_int = 39289; // 0xe0e PushI
	var_606_bool = var_22_int == var_605_int; // 0xe0f Eq
	if(var_606_bool == 0) goto Label_3616; // 0xe10 JumpB
	var_607_string = ""; // 0xe11 PushV
	var_607_string = "Neutral"; // 0xe12 MovS
	func_2447(var_23_int, var_607_string); // 0xe13 NEW_2
	var_608_int = 537443; // 0xe15 PushI
	SetMessage(var_608_int); // 0xe16 TObjFunc
	ClearReplies(); // 0xe18 TObjFunc
	var_609_int = 537444; // 0xe1a PushI
	var_610_int = 39291; // 0xe1b PushI
	var_611_int = 39290; // 0xe1c PushI
	AddReply(var_609_int, var_610_int, var_611_int); // 0xe1d TObjFunc
	return 0; // 0xe1f Return
	
Label_3616:
	var_612_int = 39291; // 0xe20 PushI
	var_613_bool = var_22_int == var_612_int; // 0xe21 Eq
	if(var_613_bool == 0) goto Label_3634; // 0xe22 JumpB
	var_614_string = ""; // 0xe23 PushV
	var_614_string = "Neutral"; // 0xe24 MovS
	func_2447(var_23_int, var_614_string); // 0xe25 NEW_2
	var_615_int = 537445; // 0xe27 PushI
	SetMessage(var_615_int); // 0xe28 TObjFunc
	ClearReplies(); // 0xe2a TObjFunc
	var_616_int = 537446; // 0xe2c PushI
	var_617_int = -1; // 0xe2d PushI
	var_618_int = 39292; // 0xe2e PushI
	AddReply(var_616_int, var_617_int, var_618_int); // 0xe2f TObjFunc
	return 0; // 0xe31 Return
	
Label_3634:
	var_619_int = 39286; // 0xe32 PushI
	var_620_bool = var_22_int == var_619_int; // 0xe33 Eq
	if(var_620_bool == 0) goto Label_3652; // 0xe34 JumpB
	var_621_string = ""; // 0xe35 PushV
	var_621_string = "Neutral"; // 0xe36 MovS
	func_2447(var_23_int, var_621_string); // 0xe37 NEW_2
	var_622_int = 537440; // 0xe39 PushI
	SetMessage(var_622_int); // 0xe3a TObjFunc
	ClearReplies(); // 0xe3c TObjFunc
	var_623_int = 537441; // 0xe3e PushI
	var_624_int = -1; // 0xe3f PushI
	var_625_int = 39287; // 0xe40 PushI
	AddReply(var_623_int, var_624_int, var_625_int); // 0xe41 TObjFunc
	return 0; // 0xe43 Return
	
Label_3652:
	var_626_int = 39270; // 0xe44 PushI
	var_627_bool = var_22_int == var_626_int; // 0xe45 Eq
	if(var_627_bool == 0) goto Label_3675; // 0xe46 JumpB
	var_628_string = ""; // 0xe47 PushV
	var_628_string = "Neutral"; // 0xe48 MovS
	func_2447(var_23_int, var_628_string); // 0xe49 NEW_2
	var_629_int = 537424; // 0xe4b PushI
	SetMessage(var_629_int); // 0xe4c TObjFunc
	ClearReplies(); // 0xe4e TObjFunc
	var_630_int = 537425; // 0xe50 PushI
	var_631_int = 39272; // 0xe51 PushI
	var_632_int = 39271; // 0xe52 PushI
	AddReply(var_630_int, var_631_int, var_632_int); // 0xe53 TObjFunc
	var_633_int = 537432; // 0xe55 PushI
	var_634_int = -1; // 0xe56 PushI
	var_635_int = 39278; // 0xe57 PushI
	AddReply(var_633_int, var_634_int, var_635_int); // 0xe58 TObjFunc
	return 0; // 0xe5a Return
	
Label_3675:
	var_636_int = 39272; // 0xe5b PushI
	var_637_bool = var_22_int == var_636_int; // 0xe5c Eq
	if(var_637_bool == 0) goto Label_3698; // 0xe5d JumpB
	var_638_string = ""; // 0xe5e PushV
	var_638_string = "Neutral"; // 0xe5f MovS
	func_2447(var_23_int, var_638_string); // 0xe60 NEW_2
	var_639_int = 537426; // 0xe62 PushI
	SetMessage(var_639_int); // 0xe63 TObjFunc
	ClearReplies(); // 0xe65 TObjFunc
	var_640_int = 537427; // 0xe67 PushI
	var_641_int = 39274; // 0xe68 PushI
	var_642_int = 39273; // 0xe69 PushI
	AddReply(var_640_int, var_641_int, var_642_int); // 0xe6a TObjFunc
	var_643_int = 537431; // 0xe6c PushI
	var_644_int = -1; // 0xe6d PushI
	var_645_int = 39277; // 0xe6e PushI
	AddReply(var_643_int, var_644_int, var_645_int); // 0xe6f TObjFunc
	return 0; // 0xe71 Return
	
Label_3698:
	var_646_int = 39274; // 0xe72 PushI
	var_647_bool = var_22_int == var_646_int; // 0xe73 Eq
	if(var_647_bool == 0) goto Label_3721; // 0xe74 JumpB
	var_648_string = ""; // 0xe75 PushV
	var_648_string = "Neutral"; // 0xe76 MovS
	func_2447(var_23_int, var_648_string); // 0xe77 NEW_2
	var_649_int = 537428; // 0xe79 PushI
	SetMessage(var_649_int); // 0xe7a TObjFunc
	ClearReplies(); // 0xe7c TObjFunc
	var_650_int = 537429; // 0xe7e PushI
	var_651_int = -1; // 0xe7f PushI
	var_652_int = 39275; // 0xe80 PushI
	AddReply(var_650_int, var_651_int, var_652_int); // 0xe81 TObjFunc
	var_653_int = 537430; // 0xe83 PushI
	var_654_int = -1; // 0xe84 PushI
	var_655_int = 39276; // 0xe85 PushI
	AddReply(var_653_int, var_654_int, var_655_int); // 0xe86 TObjFunc
	return 0; // 0xe88 Return
	
Label_3721:
	var_656_int = 39247; // 0xe89 PushI
	var_657_bool = var_22_int == var_656_int; // 0xe8a Eq
	if(var_657_bool == 0) goto Label_3754; // 0xe8b JumpB
	var_658_string = ""; // 0xe8c PushV
	var_658_string = "Neutral"; // 0xe8d MovS
	func_2447(var_23_int, var_658_string); // 0xe8e NEW_2
	var_659_int = 537401; // 0xe90 PushI
	SetMessage(var_659_int); // 0xe91 TObjFunc
	ClearReplies(); // 0xe93 TObjFunc
	var_660_int = 537402; // 0xe95 PushI
	var_661_int = 39249; // 0xe96 PushI
	var_662_int = 39248; // 0xe97 PushI
	AddReply(var_660_int, var_661_int, var_662_int); // 0xe98 TObjFunc
	var_663_bool = 0; var_664_object = Obj(); // 0xe9a PushV
	var_664_object = var_1_bool; // 0xe9b MovT
	func_6125(var_664_object); // 0xe9c NEW_2
	if(var_663_bool == 0) goto Label_3748; // 0xe9e JumpB
	var_665_int = 537418; // 0xe9f PushI
	var_666_int = 39265; // 0xea0 PushI
	var_667_int = 39264; // 0xea1 PushI
	AddReply(var_665_int, var_666_int, var_667_int); // 0xea2 TObjFunc
	
Label_3748:
	var_668_int = 537422; // 0xea4 PushI
	var_669_int = -1; // 0xea5 PushI
	var_670_int = 39268; // 0xea6 PushI
	AddReply(var_668_int, var_669_int, var_670_int); // 0xea7 TObjFunc
	return 0; // 0xea9 Return
	
Label_3754:
	var_671_int = 39265; // 0xeaa PushI
	var_672_bool = var_22_int == var_671_int; // 0xeab Eq
	if(var_672_bool == 0) goto Label_3777; // 0xeac JumpB
	var_673_string = ""; // 0xead PushV
	var_673_string = "Neutral"; // 0xeae MovS
	func_2447(var_23_int, var_673_string); // 0xeaf NEW_2
	var_674_int = 537419; // 0xeb1 PushI
	SetMessage(var_674_int); // 0xeb2 TObjFunc
	ClearReplies(); // 0xeb4 TObjFunc
	var_675_int = 537420; // 0xeb6 PushI
	var_676_int = -1; // 0xeb7 PushI
	var_677_int = 39266; // 0xeb8 PushI
	AddReply(var_675_int, var_676_int, var_677_int); // 0xeb9 TObjFunc
	var_678_int = 537421; // 0xebb PushI
	var_679_int = -1; // 0xebc PushI
	var_680_int = 39267; // 0xebd PushI
	AddReply(var_678_int, var_679_int, var_680_int); // 0xebe TObjFunc
	return 0; // 0xec0 Return
	
Label_3777:
	var_681_int = 39249; // 0xec1 PushI
	var_682_bool = var_22_int == var_681_int; // 0xec2 Eq
	if(var_682_bool == 0) goto Label_3800; // 0xec3 JumpB
	var_683_string = ""; // 0xec4 PushV
	var_683_string = "Neutral"; // 0xec5 MovS
	func_2447(var_23_int, var_683_string); // 0xec6 NEW_2
	var_684_int = 537403; // 0xec8 PushI
	SetMessage(var_684_int); // 0xec9 TObjFunc
	ClearReplies(); // 0xecb TObjFunc
	var_685_int = 537404; // 0xecd PushI
	var_686_int = 39251; // 0xece PushI
	var_687_int = 39250; // 0xecf PushI
	AddReply(var_685_int, var_686_int, var_687_int); // 0xed0 TObjFunc
	var_688_int = 537417; // 0xed2 PushI
	var_689_int = -1; // 0xed3 PushI
	var_690_int = 39263; // 0xed4 PushI
	AddReply(var_688_int, var_689_int, var_690_int); // 0xed5 TObjFunc
	return 0; // 0xed7 Return
	
Label_3800:
	var_691_int = 39251; // 0xed8 PushI
	var_692_bool = var_22_int == var_691_int; // 0xed9 Eq
	if(var_692_bool == 0) goto Label_3828; // 0xeda JumpB
	var_693_string = ""; // 0xedb PushV
	var_693_string = "Neutral"; // 0xedc MovS
	func_2447(var_23_int, var_693_string); // 0xedd NEW_2
	var_694_int = 537405; // 0xedf PushI
	SetMessage(var_694_int); // 0xee0 TObjFunc
	ClearReplies(); // 0xee2 TObjFunc
	var_695_int = 537406; // 0xee4 PushI
	var_696_int = 39253; // 0xee5 PushI
	var_697_int = 39252; // 0xee6 PushI
	AddReply(var_695_int, var_696_int, var_697_int); // 0xee7 TObjFunc
	var_698_bool = 0; var_699_object = Obj(); // 0xee9 PushV
	var_699_object = var_1_bool; // 0xeea MovT
	func_6125(var_699_object); // 0xeeb NEW_2
	if(var_698_bool == 0) goto Label_3827; // 0xeed JumpB
	var_700_int = 537416; // 0xeee PushI
	var_701_int = -1; // 0xeef PushI
	var_702_int = 39262; // 0xef0 PushI
	AddReply(var_700_int, var_701_int, var_702_int); // 0xef1 TObjFunc
	
Label_3827:
	return 0; // 0xef3 Return
	
Label_3828:
	var_703_int = 39253; // 0xef4 PushI
	var_704_bool = var_22_int == var_703_int; // 0xef5 Eq
	if(var_704_bool == 0) goto Label_3851; // 0xef6 JumpB
	var_705_string = ""; // 0xef7 PushV
	var_705_string = "Neutral"; // 0xef8 MovS
	func_2447(var_23_int, var_705_string); // 0xef9 NEW_2
	var_706_int = 537407; // 0xefb PushI
	SetMessage(var_706_int); // 0xefc TObjFunc
	ClearReplies(); // 0xefe TObjFunc
	var_707_int = 537408; // 0xf00 PushI
	var_708_int = 39255; // 0xf01 PushI
	var_709_int = 39254; // 0xf02 PushI
	AddReply(var_707_int, var_708_int, var_709_int); // 0xf03 TObjFunc
	var_710_int = 537415; // 0xf05 PushI
	var_711_int = -1; // 0xf06 PushI
	var_712_int = 39261; // 0xf07 PushI
	AddReply(var_710_int, var_711_int, var_712_int); // 0xf08 TObjFunc
	return 0; // 0xf0a Return
	
Label_3851:
	var_713_int = 39255; // 0xf0b PushI
	var_714_bool = var_22_int == var_713_int; // 0xf0c Eq
	if(var_714_bool == 0) goto Label_3874; // 0xf0d JumpB
	var_715_string = ""; // 0xf0e PushV
	var_715_string = "Neutral"; // 0xf0f MovS
	func_2447(var_23_int, var_715_string); // 0xf10 NEW_2
	var_716_int = 537409; // 0xf12 PushI
	SetMessage(var_716_int); // 0xf13 TObjFunc
	ClearReplies(); // 0xf15 TObjFunc
	var_717_int = 537410; // 0xf17 PushI
	var_718_int = 39257; // 0xf18 PushI
	var_719_int = 39256; // 0xf19 PushI
	AddReply(var_717_int, var_718_int, var_719_int); // 0xf1a TObjFunc
	var_720_int = 537414; // 0xf1c PushI
	var_721_int = -1; // 0xf1d PushI
	var_722_int = 39260; // 0xf1e PushI
	AddReply(var_720_int, var_721_int, var_722_int); // 0xf1f TObjFunc
	return 0; // 0xf21 Return
	
Label_3874:
	var_723_int = 39257; // 0xf22 PushI
	var_724_bool = var_22_int == var_723_int; // 0xf23 Eq
	if(var_724_bool == 0) goto Label_3897; // 0xf24 JumpB
	var_725_string = ""; // 0xf25 PushV
	var_725_string = "Neutral"; // 0xf26 MovS
	func_2447(var_23_int, var_725_string); // 0xf27 NEW_2
	var_726_int = 537411; // 0xf29 PushI
	SetMessage(var_726_int); // 0xf2a TObjFunc
	ClearReplies(); // 0xf2c TObjFunc
	var_727_int = 537412; // 0xf2e PushI
	var_728_int = -1; // 0xf2f PushI
	var_729_int = 39258; // 0xf30 PushI
	AddReply(var_727_int, var_728_int, var_729_int); // 0xf31 TObjFunc
	var_730_int = 537413; // 0xf33 PushI
	var_731_int = -1; // 0xf34 PushI
	var_732_int = 39259; // 0xf35 PushI
	AddReply(var_730_int, var_731_int, var_732_int); // 0xf36 TObjFunc
	return 0; // 0xf38 Return
	
Label_3897:
	var_733_int = 39237; // 0xf39 PushI
	var_734_bool = var_22_int == var_733_int; // 0xf3a Eq
	if(var_734_bool == 0) goto Label_3920; // 0xf3b JumpB
	var_735_string = ""; // 0xf3c PushV
	var_735_string = "Neutral"; // 0xf3d MovS
	func_2447(var_23_int, var_735_string); // 0xf3e NEW_2
	var_736_int = 537391; // 0xf40 PushI
	SetMessage(var_736_int); // 0xf41 TObjFunc
	ClearReplies(); // 0xf43 TObjFunc
	var_737_int = 537392; // 0xf45 PushI
	var_738_int = 39239; // 0xf46 PushI
	var_739_int = 39238; // 0xf47 PushI
	AddReply(var_737_int, var_738_int, var_739_int); // 0xf48 TObjFunc
	var_740_int = 537397; // 0xf4a PushI
	var_741_int = 39244; // 0xf4b PushI
	var_742_int = 39243; // 0xf4c PushI
	AddReply(var_740_int, var_741_int, var_742_int); // 0xf4d TObjFunc
	return 0; // 0xf4f Return
	
Label_3920:
	var_743_int = 39244; // 0xf50 PushI
	var_744_bool = var_22_int == var_743_int; // 0xf51 Eq
	if(var_744_bool == 0) goto Label_3938; // 0xf52 JumpB
	var_745_string = ""; // 0xf53 PushV
	var_745_string = "Neutral"; // 0xf54 MovS
	func_2447(var_23_int, var_745_string); // 0xf55 NEW_2
	var_746_int = 537398; // 0xf57 PushI
	SetMessage(var_746_int); // 0xf58 TObjFunc
	ClearReplies(); // 0xf5a TObjFunc
	var_747_int = 537399; // 0xf5c PushI
	var_748_int = -1; // 0xf5d PushI
	var_749_int = 39245; // 0xf5e PushI
	AddReply(var_747_int, var_748_int, var_749_int); // 0xf5f TObjFunc
	return 0; // 0xf61 Return
	
Label_3938:
	var_750_int = 39239; // 0xf62 PushI
	var_751_bool = var_22_int == var_750_int; // 0xf63 Eq
	if(var_751_bool == 0) goto Label_3956; // 0xf64 JumpB
	var_752_string = ""; // 0xf65 PushV
	var_752_string = "Neutral"; // 0xf66 MovS
	func_2447(var_23_int, var_752_string); // 0xf67 NEW_2
	var_753_int = 537393; // 0xf69 PushI
	SetMessage(var_753_int); // 0xf6a TObjFunc
	ClearReplies(); // 0xf6c TObjFunc
	var_754_int = 537394; // 0xf6e PushI
	var_755_int = 39241; // 0xf6f PushI
	var_756_int = 39240; // 0xf70 PushI
	AddReply(var_754_int, var_755_int, var_756_int); // 0xf71 TObjFunc
	return 0; // 0xf73 Return
	
Label_3956:
	var_757_int = 39241; // 0xf74 PushI
	var_758_bool = var_22_int == var_757_int; // 0xf75 Eq
	if(var_758_bool == 0) goto Label_3974; // 0xf76 JumpB
	var_759_string = ""; // 0xf77 PushV
	var_759_string = "Neutral"; // 0xf78 MovS
	func_2447(var_23_int, var_759_string); // 0xf79 NEW_2
	var_760_int = 537395; // 0xf7b PushI
	SetMessage(var_760_int); // 0xf7c TObjFunc
	ClearReplies(); // 0xf7e TObjFunc
	var_761_int = 537396; // 0xf80 PushI
	var_762_int = -1; // 0xf81 PushI
	var_763_int = 39242; // 0xf82 PushI
	AddReply(var_761_int, var_762_int, var_763_int); // 0xf83 TObjFunc
	return 0; // 0xf85 Return
	
Label_3974:
	var_764_int = 39227; // 0xf86 PushI
	var_765_bool = var_22_int == var_764_int; // 0xf87 Eq
	if(var_765_bool == 0) goto Label_4002; // 0xf88 JumpB
	var_766_string = ""; // 0xf89 PushV
	var_766_string = "Neutral"; // 0xf8a MovS
	func_2447(var_23_int, var_766_string); // 0xf8b NEW_2
	var_767_int = 537381; // 0xf8d PushI
	SetMessage(var_767_int); // 0xf8e TObjFunc
	ClearReplies(); // 0xf90 TObjFunc
	var_768_int = 537382; // 0xf92 PushI
	var_769_int = 39229; // 0xf93 PushI
	var_770_int = 39228; // 0xf94 PushI
	AddReply(var_768_int, var_769_int, var_770_int); // 0xf95 TObjFunc
	var_771_int = 537386; // 0xf97 PushI
	var_772_int = 39233; // 0xf98 PushI
	var_773_int = 39232; // 0xf99 PushI
	AddReply(var_771_int, var_772_int, var_773_int); // 0xf9a TObjFunc
	var_774_int = 537389; // 0xf9c PushI
	var_775_int = -1; // 0xf9d PushI
	var_776_int = 39235; // 0xf9e PushI
	AddReply(var_774_int, var_775_int, var_776_int); // 0xf9f TObjFunc
	return 0; // 0xfa1 Return
	
Label_4002:
	var_777_int = 39233; // 0xfa2 PushI
	var_778_bool = var_22_int == var_777_int; // 0xfa3 Eq
	if(var_778_bool == 0) goto Label_4020; // 0xfa4 JumpB
	var_779_string = ""; // 0xfa5 PushV
	var_779_string = "Neutral"; // 0xfa6 MovS
	func_2447(var_23_int, var_779_string); // 0xfa7 NEW_2
	var_780_int = 537387; // 0xfa9 PushI
	SetMessage(var_780_int); // 0xfaa TObjFunc
	ClearReplies(); // 0xfac TObjFunc
	var_781_int = 537388; // 0xfae PushI
	var_782_int = -1; // 0xfaf PushI
	var_783_int = 39234; // 0xfb0 PushI
	AddReply(var_781_int, var_782_int, var_783_int); // 0xfb1 TObjFunc
	return 0; // 0xfb3 Return
	
Label_4020:
	var_784_int = 39229; // 0xfb4 PushI
	var_785_bool = var_22_int == var_784_int; // 0xfb5 Eq
	if(var_785_bool == 0) goto Label_4043; // 0xfb6 JumpB
	var_786_string = ""; // 0xfb7 PushV
	var_786_string = "Neutral"; // 0xfb8 MovS
	func_2447(var_23_int, var_786_string); // 0xfb9 NEW_2
	var_787_int = 537383; // 0xfbb PushI
	SetMessage(var_787_int); // 0xfbc TObjFunc
	ClearReplies(); // 0xfbe TObjFunc
	var_788_int = 537384; // 0xfc0 PushI
	var_789_int = -1; // 0xfc1 PushI
	var_790_int = 39230; // 0xfc2 PushI
	AddReply(var_788_int, var_789_int, var_790_int); // 0xfc3 TObjFunc
	var_791_int = 537385; // 0xfc5 PushI
	var_792_int = -1; // 0xfc6 PushI
	var_793_int = 39231; // 0xfc7 PushI
	AddReply(var_791_int, var_792_int, var_793_int); // 0xfc8 TObjFunc
	return 0; // 0xfca Return
	
Label_4043:
	var_794_int = 39206; // 0xfcb PushI
	var_795_bool = var_22_int == var_794_int; // 0xfcc Eq
	if(var_795_bool == 0) goto Label_4071; // 0xfcd JumpB
	var_796_string = ""; // 0xfce PushV
	var_796_string = "Neutral"; // 0xfcf MovS
	func_2447(var_23_int, var_796_string); // 0xfd0 NEW_2
	var_797_int = 537360; // 0xfd2 PushI
	SetMessage(var_797_int); // 0xfd3 TObjFunc
	ClearReplies(); // 0xfd5 TObjFunc
	var_798_int = 537361; // 0xfd7 PushI
	var_799_int = 39208; // 0xfd8 PushI
	var_800_int = 39207; // 0xfd9 PushI
	AddReply(var_798_int, var_799_int, var_800_int); // 0xfda TObjFunc
	var_801_int = 537376; // 0xfdc PushI
	var_802_int = 39223; // 0xfdd PushI
	var_803_int = 39222; // 0xfde PushI
	AddReply(var_801_int, var_802_int, var_803_int); // 0xfdf TObjFunc
	var_804_int = 537379; // 0xfe1 PushI
	var_805_int = -1; // 0xfe2 PushI
	var_806_int = 39225; // 0xfe3 PushI
	AddReply(var_804_int, var_805_int, var_806_int); // 0xfe4 TObjFunc
	return 0; // 0xfe6 Return
	
Label_4071:
	var_807_int = 39223; // 0xfe7 PushI
	var_808_bool = var_22_int == var_807_int; // 0xfe8 Eq
	if(var_808_bool == 0) goto Label_4089; // 0xfe9 JumpB
	var_809_string = ""; // 0xfea PushV
	var_809_string = "Neutral"; // 0xfeb MovS
	func_2447(var_23_int, var_809_string); // 0xfec NEW_2
	var_810_int = 537377; // 0xfee PushI
	SetMessage(var_810_int); // 0xfef TObjFunc
	ClearReplies(); // 0xff1 TObjFunc
	var_811_int = 537378; // 0xff3 PushI
	var_812_int = -1; // 0xff4 PushI
	var_813_int = 39224; // 0xff5 PushI
	AddReply(var_811_int, var_812_int, var_813_int); // 0xff6 TObjFunc
	return 0; // 0xff8 Return
	
Label_4089:
	var_814_int = 39208; // 0xff9 PushI
	var_815_bool = var_22_int == var_814_int; // 0xffa Eq
	if(var_815_bool == 0) goto Label_4112; // 0xffb JumpB
	var_816_string = ""; // 0xffc PushV
	var_816_string = "Neutral"; // 0xffd MovS
	func_2447(var_23_int, var_816_string); // 0xffe NEW_2
	var_817_int = 537362; // 0x1000 PushI
	SetMessage(var_817_int); // 0x1001 TObjFunc
	ClearReplies(); // 0x1003 TObjFunc
	var_818_int = 537363; // 0x1005 PushI
	var_819_int = 39210; // 0x1006 PushI
	var_820_int = 39209; // 0x1007 PushI
	AddReply(var_818_int, var_819_int, var_820_int); // 0x1008 TObjFunc
	var_821_int = 537369; // 0x100a PushI
	var_822_int = 39216; // 0x100b PushI
	var_823_int = 39215; // 0x100c PushI
	AddReply(var_821_int, var_822_int, var_823_int); // 0x100d TObjFunc
	return 0; // 0x100f Return
	
Label_4112:
	var_824_int = 39216; // 0x1010 PushI
	var_825_bool = var_22_int == var_824_int; // 0x1011 Eq
	if(var_825_bool == 0) goto Label_4135; // 0x1012 JumpB
	var_826_string = ""; // 0x1013 PushV
	var_826_string = "Neutral"; // 0x1014 MovS
	func_2447(var_23_int, var_826_string); // 0x1015 NEW_2
	var_827_int = 537370; // 0x1017 PushI
	SetMessage(var_827_int); // 0x1018 TObjFunc
	ClearReplies(); // 0x101a TObjFunc
	var_828_int = 537371; // 0x101c PushI
	var_829_int = 39218; // 0x101d PushI
	var_830_int = 39217; // 0x101e PushI
	AddReply(var_828_int, var_829_int, var_830_int); // 0x101f TObjFunc
	var_831_int = 537375; // 0x1021 PushI
	var_832_int = -1; // 0x1022 PushI
	var_833_int = 39221; // 0x1023 PushI
	AddReply(var_831_int, var_832_int, var_833_int); // 0x1024 TObjFunc
	return 0; // 0x1026 Return
	
Label_4135:
	var_834_int = 39218; // 0x1027 PushI
	var_835_bool = var_22_int == var_834_int; // 0x1028 Eq
	if(var_835_bool == 0) goto Label_4158; // 0x1029 JumpB
	var_836_string = ""; // 0x102a PushV
	var_836_string = "Neutral"; // 0x102b MovS
	func_2447(var_23_int, var_836_string); // 0x102c NEW_2
	var_837_int = 537372; // 0x102e PushI
	SetMessage(var_837_int); // 0x102f TObjFunc
	ClearReplies(); // 0x1031 TObjFunc
	var_838_int = 537373; // 0x1033 PushI
	var_839_int = -1; // 0x1034 PushI
	var_840_int = 39219; // 0x1035 PushI
	AddReply(var_838_int, var_839_int, var_840_int); // 0x1036 TObjFunc
	var_841_int = 537374; // 0x1038 PushI
	var_842_int = -1; // 0x1039 PushI
	var_843_int = 39220; // 0x103a PushI
	AddReply(var_841_int, var_842_int, var_843_int); // 0x103b TObjFunc
	return 0; // 0x103d Return
	
Label_4158:
	var_844_int = 39210; // 0x103e PushI
	var_845_bool = var_22_int == var_844_int; // 0x103f Eq
	if(var_845_bool == 0) goto Label_4176; // 0x1040 JumpB
	var_846_string = ""; // 0x1041 PushV
	var_846_string = "Neutral"; // 0x1042 MovS
	func_2447(var_23_int, var_846_string); // 0x1043 NEW_2
	var_847_int = 537364; // 0x1045 PushI
	SetMessage(var_847_int); // 0x1046 TObjFunc
	ClearReplies(); // 0x1048 TObjFunc
	var_848_int = 537365; // 0x104a PushI
	var_849_int = 39212; // 0x104b PushI
	var_850_int = 39211; // 0x104c PushI
	AddReply(var_848_int, var_849_int, var_850_int); // 0x104d TObjFunc
	return 0; // 0x104f Return
	
Label_4176:
	var_851_int = 39212; // 0x1050 PushI
	var_852_bool = var_22_int == var_851_int; // 0x1051 Eq
	if(var_852_bool == 0) goto Label_4199; // 0x1052 JumpB
	var_853_string = ""; // 0x1053 PushV
	var_853_string = "Neutral"; // 0x1054 MovS
	func_2447(var_23_int, var_853_string); // 0x1055 NEW_2
	var_854_int = 537366; // 0x1057 PushI
	SetMessage(var_854_int); // 0x1058 TObjFunc
	ClearReplies(); // 0x105a TObjFunc
	var_855_int = 537367; // 0x105c PushI
	var_856_int = -1; // 0x105d PushI
	var_857_int = 39213; // 0x105e PushI
	AddReply(var_855_int, var_856_int, var_857_int); // 0x105f TObjFunc
	var_858_int = 537368; // 0x1061 PushI
	var_859_int = -1; // 0x1062 PushI
	var_860_int = 39214; // 0x1063 PushI
	AddReply(var_858_int, var_859_int, var_860_int); // 0x1064 TObjFunc
	return 0; // 0x1066 Return
	
Label_4199:
	var_861_int = 39199; // 0x1067 PushI
	var_862_bool = var_22_int == var_861_int; // 0x1068 Eq
	if(var_862_bool == 0) goto Label_4222; // 0x1069 JumpB
	var_863_string = ""; // 0x106a PushV
	var_863_string = "Neutral"; // 0x106b MovS
	func_2447(var_23_int, var_863_string); // 0x106c NEW_2
	var_864_int = 537353; // 0x106e PushI
	SetMessage(var_864_int); // 0x106f TObjFunc
	ClearReplies(); // 0x1071 TObjFunc
	var_865_int = 537354; // 0x1073 PushI
	var_866_int = 39201; // 0x1074 PushI
	var_867_int = 39200; // 0x1075 PushI
	AddReply(var_865_int, var_866_int, var_867_int); // 0x1076 TObjFunc
	var_868_int = 537358; // 0x1078 PushI
	var_869_int = -1; // 0x1079 PushI
	var_870_int = 39204; // 0x107a PushI
	AddReply(var_868_int, var_869_int, var_870_int); // 0x107b TObjFunc
	return 0; // 0x107d Return
	
Label_4222:
	var_871_int = 39201; // 0x107e PushI
	var_872_bool = var_22_int == var_871_int; // 0x107f Eq
	if(var_872_bool == 0) goto Label_4245; // 0x1080 JumpB
	var_873_string = ""; // 0x1081 PushV
	var_873_string = "Neutral"; // 0x1082 MovS
	func_2447(var_23_int, var_873_string); // 0x1083 NEW_2
	var_874_int = 537355; // 0x1085 PushI
	SetMessage(var_874_int); // 0x1086 TObjFunc
	ClearReplies(); // 0x1088 TObjFunc
	var_875_int = 537356; // 0x108a PushI
	var_876_int = -1; // 0x108b PushI
	var_877_int = 39202; // 0x108c PushI
	AddReply(var_875_int, var_876_int, var_877_int); // 0x108d TObjFunc
	var_878_int = 537357; // 0x108f PushI
	var_879_int = -1; // 0x1090 PushI
	var_880_int = 39203; // 0x1091 PushI
	AddReply(var_878_int, var_879_int, var_880_int); // 0x1092 TObjFunc
	return 0; // 0x1094 Return
	
Label_4245:
	var_881_int = 39176; // 0x1095 PushI
	var_882_bool = var_22_int == var_881_int; // 0x1096 Eq
	if(var_882_bool == 0) goto Label_4273; // 0x1097 JumpB
	var_883_string = ""; // 0x1098 PushV
	var_883_string = "Neutral"; // 0x1099 MovS
	func_2447(var_23_int, var_883_string); // 0x109a NEW_2
	var_884_int = 537330; // 0x109c PushI
	SetMessage(var_884_int); // 0x109d TObjFunc
	ClearReplies(); // 0x109f TObjFunc
	var_885_int = 537331; // 0x10a1 PushI
	var_886_int = 39178; // 0x10a2 PushI
	var_887_int = 39177; // 0x10a3 PushI
	AddReply(var_885_int, var_886_int, var_887_int); // 0x10a4 TObjFunc
	var_888_int = 537341; // 0x10a6 PushI
	var_889_int = 39188; // 0x10a7 PushI
	var_890_int = 39187; // 0x10a8 PushI
	AddReply(var_888_int, var_889_int, var_890_int); // 0x10a9 TObjFunc
	var_891_int = 537351; // 0x10ab PushI
	var_892_int = -1; // 0x10ac PushI
	var_893_int = 39197; // 0x10ad PushI
	AddReply(var_891_int, var_892_int, var_893_int); // 0x10ae TObjFunc
	return 0; // 0x10b0 Return
	
Label_4273:
	var_894_int = 39188; // 0x10b1 PushI
	var_895_bool = var_22_int == var_894_int; // 0x10b2 Eq
	if(var_895_bool == 0) goto Label_4296; // 0x10b3 JumpB
	var_896_string = ""; // 0x10b4 PushV
	var_896_string = "Neutral"; // 0x10b5 MovS
	func_2447(var_23_int, var_896_string); // 0x10b6 NEW_2
	var_897_int = 537342; // 0x10b8 PushI
	SetMessage(var_897_int); // 0x10b9 TObjFunc
	ClearReplies(); // 0x10bb TObjFunc
	var_898_int = 537343; // 0x10bd PushI
	var_899_int = 39190; // 0x10be PushI
	var_900_int = 39189; // 0x10bf PushI
	AddReply(var_898_int, var_899_int, var_900_int); // 0x10c0 TObjFunc
	var_901_int = 537349; // 0x10c2 PushI
	var_902_int = -1; // 0x10c3 PushI
	var_903_int = 39195; // 0x10c4 PushI
	AddReply(var_901_int, var_902_int, var_903_int); // 0x10c5 TObjFunc
	return 0; // 0x10c7 Return
	
Label_4296:
	var_904_int = 39190; // 0x10c8 PushI
	var_905_bool = var_22_int == var_904_int; // 0x10c9 Eq
	if(var_905_bool == 0) goto Label_4319; // 0x10ca JumpB
	var_906_string = ""; // 0x10cb PushV
	var_906_string = "Neutral"; // 0x10cc MovS
	func_2447(var_23_int, var_906_string); // 0x10cd NEW_2
	var_907_int = 537344; // 0x10cf PushI
	SetMessage(var_907_int); // 0x10d0 TObjFunc
	ClearReplies(); // 0x10d2 TObjFunc
	var_908_int = 537345; // 0x10d4 PushI
	var_909_int = 39192; // 0x10d5 PushI
	var_910_int = 39191; // 0x10d6 PushI
	AddReply(var_908_int, var_909_int, var_910_int); // 0x10d7 TObjFunc
	var_911_int = 537348; // 0x10d9 PushI
	var_912_int = -1; // 0x10da PushI
	var_913_int = 39194; // 0x10db PushI
	AddReply(var_911_int, var_912_int, var_913_int); // 0x10dc TObjFunc
	return 0; // 0x10de Return
	
Label_4319:
	var_914_int = 39192; // 0x10df PushI
	var_915_bool = var_22_int == var_914_int; // 0x10e0 Eq
	if(var_915_bool == 0) goto Label_4337; // 0x10e1 JumpB
	var_916_string = ""; // 0x10e2 PushV
	var_916_string = "Neutral"; // 0x10e3 MovS
	func_2447(var_23_int, var_916_string); // 0x10e4 NEW_2
	var_917_int = 537346; // 0x10e6 PushI
	SetMessage(var_917_int); // 0x10e7 TObjFunc
	ClearReplies(); // 0x10e9 TObjFunc
	var_918_int = 537347; // 0x10eb PushI
	var_919_int = -1; // 0x10ec PushI
	var_920_int = 39193; // 0x10ed PushI
	AddReply(var_918_int, var_919_int, var_920_int); // 0x10ee TObjFunc
	return 0; // 0x10f0 Return
	
Label_4337:
	var_921_int = 39178; // 0x10f1 PushI
	var_922_bool = var_22_int == var_921_int; // 0x10f2 Eq
	if(var_922_bool == 0) goto Label_4360; // 0x10f3 JumpB
	var_923_string = ""; // 0x10f4 PushV
	var_923_string = "Neutral"; // 0x10f5 MovS
	func_2447(var_23_int, var_923_string); // 0x10f6 NEW_2
	var_924_int = 537332; // 0x10f8 PushI
	SetMessage(var_924_int); // 0x10f9 TObjFunc
	ClearReplies(); // 0x10fb TObjFunc
	var_925_int = 537333; // 0x10fd PushI
	var_926_int = 39180; // 0x10fe PushI
	var_927_int = 39179; // 0x10ff PushI
	AddReply(var_925_int, var_926_int, var_927_int); // 0x1100 TObjFunc
	var_928_int = 537336; // 0x1102 PushI
	var_929_int = 39183; // 0x1103 PushI
	var_930_int = 39182; // 0x1104 PushI
	AddReply(var_928_int, var_929_int, var_930_int); // 0x1105 TObjFunc
	return 0; // 0x1107 Return
	
Label_4360:
	var_931_int = 39183; // 0x1108 PushI
	var_932_bool = var_22_int == var_931_int; // 0x1109 Eq
	if(var_932_bool == 0) goto Label_4378; // 0x110a JumpB
	var_933_string = ""; // 0x110b PushV
	var_933_string = "Neutral"; // 0x110c MovS
	func_2447(var_23_int, var_933_string); // 0x110d NEW_2
	var_934_int = 537337; // 0x110f PushI
	SetMessage(var_934_int); // 0x1110 TObjFunc
	ClearReplies(); // 0x1112 TObjFunc
	var_935_int = 537338; // 0x1114 PushI
	var_936_int = 39185; // 0x1115 PushI
	var_937_int = 39184; // 0x1116 PushI
	AddReply(var_935_int, var_936_int, var_937_int); // 0x1117 TObjFunc
	return 0; // 0x1119 Return
	
Label_4378:
	var_938_int = 39185; // 0x111a PushI
	var_939_bool = var_22_int == var_938_int; // 0x111b Eq
	if(var_939_bool == 0) goto Label_4396; // 0x111c JumpB
	var_940_string = ""; // 0x111d PushV
	var_940_string = "Neutral"; // 0x111e MovS
	func_2447(var_23_int, var_940_string); // 0x111f NEW_2
	var_941_int = 537339; // 0x1121 PushI
	SetMessage(var_941_int); // 0x1122 TObjFunc
	ClearReplies(); // 0x1124 TObjFunc
	var_942_int = 537340; // 0x1126 PushI
	var_943_int = 43752; // 0x1127 PushI
	var_944_int = 39186; // 0x1128 PushI
	AddReply(var_942_int, var_943_int, var_944_int); // 0x1129 TObjFunc
	return 0; // 0x112b Return
	
Label_4396:
	var_945_int = 43752; // 0x112c PushI
	var_946_bool = var_22_int == var_945_int; // 0x112d Eq
	if(var_946_bool == 0) goto Label_4414; // 0x112e JumpB
	var_947_string = ""; // 0x112f PushV
	var_947_string = "Neutral"; // 0x1130 MovS
	func_2447(var_23_int, var_947_string); // 0x1131 NEW_2
	var_948_int = 541583; // 0x1133 PushI
	SetMessage(var_948_int); // 0x1134 TObjFunc
	ClearReplies(); // 0x1136 TObjFunc
	var_949_int = 541584; // 0x1138 PushI
	var_950_int = -1; // 0x1139 PushI
	var_951_int = 43753; // 0x113a PushI
	AddReply(var_949_int, var_950_int, var_951_int); // 0x113b TObjFunc
	return 0; // 0x113d Return
	
Label_4414:
	var_952_int = 39180; // 0x113e PushI
	var_953_bool = var_22_int == var_952_int; // 0x113f Eq
	if(var_953_bool == 0) goto Label_4432; // 0x1140 JumpB
	var_954_string = ""; // 0x1141 PushV
	var_954_string = "Neutral"; // 0x1142 MovS
	func_2447(var_23_int, var_954_string); // 0x1143 NEW_2
	var_955_int = 537334; // 0x1145 PushI
	SetMessage(var_955_int); // 0x1146 TObjFunc
	ClearReplies(); // 0x1148 TObjFunc
	var_956_int = 537335; // 0x114a PushI
	var_957_int = -1; // 0x114b PushI
	var_958_int = 39181; // 0x114c PushI
	AddReply(var_956_int, var_957_int, var_958_int); // 0x114d TObjFunc
	return 0; // 0x114f Return
	
Label_4432:
	var_959_int = 39122; // 0x1150 PushI
	var_960_bool = var_22_int == var_959_int; // 0x1151 Eq
	if(var_960_bool == 0) goto Label_4480; // 0x1152 JumpB
	var_961_string = ""; // 0x1153 PushV
	var_961_string = "Neutral"; // 0x1154 MovS
	func_2447(var_23_int, var_961_string); // 0x1155 NEW_2
	var_962_int = 537278; // 0x1157 PushI
	SetMessage(var_962_int); // 0x1158 TObjFunc
	ClearReplies(); // 0x115a TObjFunc
	var_963_int = 537279; // 0x115c PushI
	var_964_int = 39124; // 0x115d PushI
	var_965_int = 39123; // 0x115e PushI
	AddReply(var_963_int, var_964_int, var_965_int); // 0x115f TObjFunc
	var_966_int = 537292; // 0x1161 PushI
	var_967_int = 39124; // 0x1162 PushI
	var_968_int = 39137; // 0x1163 PushI
	AddReply(var_966_int, var_967_int, var_968_int); // 0x1164 TObjFunc
	var_969_bool = 0; var_970_object = Obj(); // 0x1166 PushV
	var_970_object = var_1_bool; // 0x1167 MovT
	func_6125(var_970_object); // 0x1168 NEW_2
	if(var_969_bool == 0) goto Label_4464; // 0x116a JumpB
	var_971_int = 537293; // 0x116b PushI
	var_972_int = 39140; // 0x116c PushI
	var_973_int = 39139; // 0x116d PushI
	AddReply(var_971_int, var_972_int, var_973_int); // 0x116e TObjFunc
	
Label_4464:
	var_974_bool = 0; var_975_object = Obj(); // 0x1170 PushV
	var_975_object = var_1_bool; // 0x1171 MovT
	func_6125(var_975_object); // 0x1172 NEW_2
	if(var_974_bool == 0) goto Label_4474; // 0x1174 JumpB
	var_976_int = 537304; // 0x1175 PushI
	var_977_int = 39151; // 0x1176 PushI
	var_978_int = 39150; // 0x1177 PushI
	AddReply(var_976_int, var_977_int, var_978_int); // 0x1178 TObjFunc
	
Label_4474:
	var_979_int = 537328; // 0x117a PushI
	var_980_int = -1; // 0x117b PushI
	var_981_int = 39174; // 0x117c PushI
	AddReply(var_979_int, var_980_int, var_981_int); // 0x117d TObjFunc
	return 0; // 0x117f Return
	
Label_4480:
	var_982_int = 39151; // 0x1180 PushI
	var_983_bool = var_22_int == var_982_int; // 0x1181 Eq
	if(var_983_bool == 0) goto Label_4503; // 0x1182 JumpB
	var_984_string = ""; // 0x1183 PushV
	var_984_string = "Neutral"; // 0x1184 MovS
	func_2447(var_23_int, var_984_string); // 0x1185 NEW_2
	var_985_int = 537305; // 0x1187 PushI
	SetMessage(var_985_int); // 0x1188 TObjFunc
	ClearReplies(); // 0x118a TObjFunc
	var_986_int = 537306; // 0x118c PushI
	var_987_int = 39153; // 0x118d PushI
	var_988_int = 39152; // 0x118e PushI
	AddReply(var_986_int, var_987_int, var_988_int); // 0x118f TObjFunc
	var_989_int = 537318; // 0x1191 PushI
	var_990_int = 39165; // 0x1192 PushI
	var_991_int = 39164; // 0x1193 PushI
	AddReply(var_989_int, var_990_int, var_991_int); // 0x1194 TObjFunc
	return 0; // 0x1196 Return
	
Label_4503:
	var_992_int = 39165; // 0x1197 PushI
	var_993_bool = var_22_int == var_992_int; // 0x1198 Eq
	if(var_993_bool == 0) goto Label_4526; // 0x1199 JumpB
	var_994_string = ""; // 0x119a PushV
	var_994_string = "Neutral"; // 0x119b MovS
	func_2447(var_23_int, var_994_string); // 0x119c NEW_2
	var_995_int = 537319; // 0x119e PushI
	SetMessage(var_995_int); // 0x119f TObjFunc
	ClearReplies(); // 0x11a1 TObjFunc
	var_996_int = 537320; // 0x11a3 PushI
	var_997_int = -1; // 0x11a4 PushI
	var_998_int = 39166; // 0x11a5 PushI
	AddReply(var_996_int, var_997_int, var_998_int); // 0x11a6 TObjFunc
	var_999_int = 537321; // 0x11a8 PushI
	var_1000_int = 39168; // 0x11a9 PushI
	var_1001_int = 39167; // 0x11aa PushI
	AddReply(var_999_int, var_1000_int, var_1001_int); // 0x11ab TObjFunc
	return 0; // 0x11ad Return
	
Label_4526:
	var_1002_int = 39168; // 0x11ae PushI
	var_1003_bool = var_22_int == var_1002_int; // 0x11af Eq
	if(var_1003_bool == 0) goto Label_4549; // 0x11b0 JumpB
	var_1004_string = ""; // 0x11b1 PushV
	var_1004_string = "Neutral"; // 0x11b2 MovS
	func_2447(var_23_int, var_1004_string); // 0x11b3 NEW_2
	var_1005_int = 537322; // 0x11b5 PushI
	SetMessage(var_1005_int); // 0x11b6 TObjFunc
	ClearReplies(); // 0x11b8 TObjFunc
	var_1006_int = 537323; // 0x11ba PushI
	var_1007_int = -1; // 0x11bb PushI
	var_1008_int = 39169; // 0x11bc PushI
	AddReply(var_1006_int, var_1007_int, var_1008_int); // 0x11bd TObjFunc
	var_1009_int = 537324; // 0x11bf PushI
	var_1010_int = 39171; // 0x11c0 PushI
	var_1011_int = 39170; // 0x11c1 PushI
	AddReply(var_1009_int, var_1010_int, var_1011_int); // 0x11c2 TObjFunc
	return 0; // 0x11c4 Return
	
Label_4549:
	var_1012_int = 39171; // 0x11c5 PushI
	var_1013_bool = var_22_int == var_1012_int; // 0x11c6 Eq
	if(var_1013_bool == 0) goto Label_4567; // 0x11c7 JumpB
	var_1014_string = ""; // 0x11c8 PushV
	var_1014_string = "Neutral"; // 0x11c9 MovS
	func_2447(var_23_int, var_1014_string); // 0x11ca NEW_2
	var_1015_int = 537325; // 0x11cc PushI
	SetMessage(var_1015_int); // 0x11cd TObjFunc
	ClearReplies(); // 0x11cf TObjFunc
	var_1016_int = 537326; // 0x11d1 PushI
	var_1017_int = -1; // 0x11d2 PushI
	var_1018_int = 39172; // 0x11d3 PushI
	AddReply(var_1016_int, var_1017_int, var_1018_int); // 0x11d4 TObjFunc
	return 0; // 0x11d6 Return
	
Label_4567:
	var_1019_int = 39153; // 0x11d7 PushI
	var_1020_bool = var_22_int == var_1019_int; // 0x11d8 Eq
	if(var_1020_bool == 0) goto Label_4590; // 0x11d9 JumpB
	var_1021_string = ""; // 0x11da PushV
	var_1021_string = "Neutral"; // 0x11db MovS
	func_2447(var_23_int, var_1021_string); // 0x11dc NEW_2
	var_1022_int = 537307; // 0x11de PushI
	SetMessage(var_1022_int); // 0x11df TObjFunc
	ClearReplies(); // 0x11e1 TObjFunc
	var_1023_int = 537308; // 0x11e3 PushI
	var_1024_int = 39155; // 0x11e4 PushI
	var_1025_int = 39154; // 0x11e5 PushI
	AddReply(var_1023_int, var_1024_int, var_1025_int); // 0x11e6 TObjFunc
	var_1026_int = 537317; // 0x11e8 PushI
	var_1027_int = -1; // 0x11e9 PushI
	var_1028_int = 39163; // 0x11ea PushI
	AddReply(var_1026_int, var_1027_int, var_1028_int); // 0x11eb TObjFunc
	return 0; // 0x11ed Return
	
Label_4590:
	var_1029_int = 39155; // 0x11ee PushI
	var_1030_bool = var_22_int == var_1029_int; // 0x11ef Eq
	if(var_1030_bool == 0) goto Label_4613; // 0x11f0 JumpB
	var_1031_string = ""; // 0x11f1 PushV
	var_1031_string = "Neutral"; // 0x11f2 MovS
	func_2447(var_23_int, var_1031_string); // 0x11f3 NEW_2
	var_1032_int = 537309; // 0x11f5 PushI
	SetMessage(var_1032_int); // 0x11f6 TObjFunc
	ClearReplies(); // 0x11f8 TObjFunc
	var_1033_int = 537310; // 0x11fa PushI
	var_1034_int = 39157; // 0x11fb PushI
	var_1035_int = 39156; // 0x11fc PushI
	AddReply(var_1033_int, var_1034_int, var_1035_int); // 0x11fd TObjFunc
	var_1036_int = 537313; // 0x11ff PushI
	var_1037_int = 39160; // 0x1200 PushI
	var_1038_int = 39159; // 0x1201 PushI
	AddReply(var_1036_int, var_1037_int, var_1038_int); // 0x1202 TObjFunc
	return 0; // 0x1204 Return
	
Label_4613:
	var_1039_int = 39160; // 0x1205 PushI
	var_1040_bool = var_22_int == var_1039_int; // 0x1206 Eq
	if(var_1040_bool == 0) goto Label_4636; // 0x1207 JumpB
	var_1041_string = ""; // 0x1208 PushV
	var_1041_string = "Neutral"; // 0x1209 MovS
	func_2447(var_23_int, var_1041_string); // 0x120a NEW_2
	var_1042_int = 537314; // 0x120c PushI
	SetMessage(var_1042_int); // 0x120d TObjFunc
	ClearReplies(); // 0x120f TObjFunc
	var_1043_int = 537315; // 0x1211 PushI
	var_1044_int = -1; // 0x1212 PushI
	var_1045_int = 39161; // 0x1213 PushI
	AddReply(var_1043_int, var_1044_int, var_1045_int); // 0x1214 TObjFunc
	var_1046_int = 537316; // 0x1216 PushI
	var_1047_int = -1; // 0x1217 PushI
	var_1048_int = 39162; // 0x1218 PushI
	AddReply(var_1046_int, var_1047_int, var_1048_int); // 0x1219 TObjFunc
	return 0; // 0x121b Return
	
Label_4636:
	var_1049_int = 39157; // 0x121c PushI
	var_1050_bool = var_22_int == var_1049_int; // 0x121d Eq
	if(var_1050_bool == 0) goto Label_4654; // 0x121e JumpB
	var_1051_string = ""; // 0x121f PushV
	var_1051_string = "Neutral"; // 0x1220 MovS
	func_2447(var_23_int, var_1051_string); // 0x1221 NEW_2
	var_1052_int = 537311; // 0x1223 PushI
	SetMessage(var_1052_int); // 0x1224 TObjFunc
	ClearReplies(); // 0x1226 TObjFunc
	var_1053_int = 537312; // 0x1228 PushI
	var_1054_int = -1; // 0x1229 PushI
	var_1055_int = 39158; // 0x122a PushI
	AddReply(var_1053_int, var_1054_int, var_1055_int); // 0x122b TObjFunc
	return 0; // 0x122d Return
	
Label_4654:
	var_1056_int = 39140; // 0x122e PushI
	var_1057_bool = var_22_int == var_1056_int; // 0x122f Eq
	if(var_1057_bool == 0) goto Label_4677; // 0x1230 JumpB
	var_1058_string = ""; // 0x1231 PushV
	var_1058_string = "Neutral"; // 0x1232 MovS
	func_2447(var_23_int, var_1058_string); // 0x1233 NEW_2
	var_1059_int = 537294; // 0x1235 PushI
	SetMessage(var_1059_int); // 0x1236 TObjFunc
	ClearReplies(); // 0x1238 TObjFunc
	var_1060_int = 537295; // 0x123a PushI
	var_1061_int = 39142; // 0x123b PushI
	var_1062_int = 39141; // 0x123c PushI
	AddReply(var_1060_int, var_1061_int, var_1062_int); // 0x123d TObjFunc
	var_1063_int = 537301; // 0x123f PushI
	var_1064_int = 39148; // 0x1240 PushI
	var_1065_int = 39147; // 0x1241 PushI
	AddReply(var_1063_int, var_1064_int, var_1065_int); // 0x1242 TObjFunc
	return 0; // 0x1244 Return
	
Label_4677:
	var_1066_int = 39148; // 0x1245 PushI
	var_1067_bool = var_22_int == var_1066_int; // 0x1246 Eq
	if(var_1067_bool == 0) goto Label_4695; // 0x1247 JumpB
	var_1068_string = ""; // 0x1248 PushV
	var_1068_string = "Neutral"; // 0x1249 MovS
	func_2447(var_23_int, var_1068_string); // 0x124a NEW_2
	var_1069_int = 537302; // 0x124c PushI
	SetMessage(var_1069_int); // 0x124d TObjFunc
	ClearReplies(); // 0x124f TObjFunc
	var_1070_int = 537303; // 0x1251 PushI
	var_1071_int = -1; // 0x1252 PushI
	var_1072_int = 39149; // 0x1253 PushI
	AddReply(var_1070_int, var_1071_int, var_1072_int); // 0x1254 TObjFunc
	return 0; // 0x1256 Return
	
Label_4695:
	var_1073_int = 39142; // 0x1257 PushI
	var_1074_bool = var_22_int == var_1073_int; // 0x1258 Eq
	if(var_1074_bool == 0) goto Label_4713; // 0x1259 JumpB
	var_1075_string = ""; // 0x125a PushV
	var_1075_string = "Neutral"; // 0x125b MovS
	func_2447(var_23_int, var_1075_string); // 0x125c NEW_2
	var_1076_int = 537296; // 0x125e PushI
	SetMessage(var_1076_int); // 0x125f TObjFunc
	ClearReplies(); // 0x1261 TObjFunc
	var_1077_int = 537297; // 0x1263 PushI
	var_1078_int = 39144; // 0x1264 PushI
	var_1079_int = 39143; // 0x1265 PushI
	AddReply(var_1077_int, var_1078_int, var_1079_int); // 0x1266 TObjFunc
	return 0; // 0x1268 Return
	
Label_4713:
	var_1080_int = 39144; // 0x1269 PushI
	var_1081_bool = var_22_int == var_1080_int; // 0x126a Eq
	if(var_1081_bool == 0) goto Label_4736; // 0x126b JumpB
	var_1082_string = ""; // 0x126c PushV
	var_1082_string = "Neutral"; // 0x126d MovS
	func_2447(var_23_int, var_1082_string); // 0x126e NEW_2
	var_1083_int = 537298; // 0x1270 PushI
	SetMessage(var_1083_int); // 0x1271 TObjFunc
	ClearReplies(); // 0x1273 TObjFunc
	var_1084_int = 537299; // 0x1275 PushI
	var_1085_int = -1; // 0x1276 PushI
	var_1086_int = 39145; // 0x1277 PushI
	AddReply(var_1084_int, var_1085_int, var_1086_int); // 0x1278 TObjFunc
	var_1087_int = 537300; // 0x127a PushI
	var_1088_int = -1; // 0x127b PushI
	var_1089_int = 39146; // 0x127c PushI
	AddReply(var_1087_int, var_1088_int, var_1089_int); // 0x127d TObjFunc
	return 0; // 0x127f Return
	
Label_4736:
	var_1090_int = 39124; // 0x1280 PushI
	var_1091_bool = var_22_int == var_1090_int; // 0x1281 Eq
	if(var_1091_bool == 0) goto Label_4759; // 0x1282 JumpB
	var_1092_string = ""; // 0x1283 PushV
	var_1092_string = "Neutral"; // 0x1284 MovS
	func_2447(var_23_int, var_1092_string); // 0x1285 NEW_2
	var_1093_int = 537280; // 0x1287 PushI
	SetMessage(var_1093_int); // 0x1288 TObjFunc
	ClearReplies(); // 0x128a TObjFunc
	var_1094_int = 537281; // 0x128c PushI
	var_1095_int = 39126; // 0x128d PushI
	var_1096_int = 39125; // 0x128e PushI
	AddReply(var_1094_int, var_1095_int, var_1096_int); // 0x128f TObjFunc
	var_1097_int = 537288; // 0x1291 PushI
	var_1098_int = 39133; // 0x1292 PushI
	var_1099_int = 39132; // 0x1293 PushI
	AddReply(var_1097_int, var_1098_int, var_1099_int); // 0x1294 TObjFunc
	return 0; // 0x1296 Return
	
Label_4759:
	var_1100_int = 39133; // 0x1297 PushI
	var_1101_bool = var_22_int == var_1100_int; // 0x1298 Eq
	if(var_1101_bool == 0) goto Label_4782; // 0x1299 JumpB
	var_1102_string = ""; // 0x129a PushV
	var_1102_string = "Neutral"; // 0x129b MovS
	func_2447(var_23_int, var_1102_string); // 0x129c NEW_2
	var_1103_int = 537289; // 0x129e PushI
	SetMessage(var_1103_int); // 0x129f TObjFunc
	ClearReplies(); // 0x12a1 TObjFunc
	var_1104_int = 537290; // 0x12a3 PushI
	var_1105_int = 39126; // 0x12a4 PushI
	var_1106_int = 39134; // 0x12a5 PushI
	AddReply(var_1104_int, var_1105_int, var_1106_int); // 0x12a6 TObjFunc
	var_1107_int = 537291; // 0x12a8 PushI
	var_1108_int = -1; // 0x12a9 PushI
	var_1109_int = 39136; // 0x12aa PushI
	AddReply(var_1107_int, var_1108_int, var_1109_int); // 0x12ab TObjFunc
	return 0; // 0x12ad Return
	
Label_4782:
	var_1110_int = 39126; // 0x12ae PushI
	var_1111_bool = var_22_int == var_1110_int; // 0x12af Eq
	if(var_1111_bool == 0) goto Label_4805; // 0x12b0 JumpB
	var_1112_string = ""; // 0x12b1 PushV
	var_1112_string = "Neutral"; // 0x12b2 MovS
	func_2447(var_23_int, var_1112_string); // 0x12b3 NEW_2
	var_1113_int = 537282; // 0x12b5 PushI
	SetMessage(var_1113_int); // 0x12b6 TObjFunc
	ClearReplies(); // 0x12b8 TObjFunc
	var_1114_int = 537283; // 0x12ba PushI
	var_1115_int = 39128; // 0x12bb PushI
	var_1116_int = 39127; // 0x12bc PushI
	AddReply(var_1114_int, var_1115_int, var_1116_int); // 0x12bd TObjFunc
	var_1117_int = 537287; // 0x12bf PushI
	var_1118_int = -1; // 0x12c0 PushI
	var_1119_int = 39131; // 0x12c1 PushI
	AddReply(var_1117_int, var_1118_int, var_1119_int); // 0x12c2 TObjFunc
	return 0; // 0x12c4 Return
	
Label_4805:
	var_1120_int = 39128; // 0x12c5 PushI
	var_1121_bool = var_22_int == var_1120_int; // 0x12c6 Eq
	if(var_1121_bool == 0) goto Label_4828; // 0x12c7 JumpB
	var_1122_string = ""; // 0x12c8 PushV
	var_1122_string = "Neutral"; // 0x12c9 MovS
	func_2447(var_23_int, var_1122_string); // 0x12ca NEW_2
	var_1123_int = 537284; // 0x12cc PushI
	SetMessage(var_1123_int); // 0x12cd TObjFunc
	ClearReplies(); // 0x12cf TObjFunc
	var_1124_int = 537285; // 0x12d1 PushI
	var_1125_int = -1; // 0x12d2 PushI
	var_1126_int = 39129; // 0x12d3 PushI
	AddReply(var_1124_int, var_1125_int, var_1126_int); // 0x12d4 TObjFunc
	var_1127_int = 537286; // 0x12d6 PushI
	var_1128_int = -1; // 0x12d7 PushI
	var_1129_int = 39130; // 0x12d8 PushI
	AddReply(var_1127_int, var_1128_int, var_1129_int); // 0x12d9 TObjFunc
	return 0; // 0x12db Return
	
Label_4828:
	var_1130_int = 39086; // 0x12dc PushI
	var_1131_bool = var_22_int == var_1130_int; // 0x12dd Eq
	if(var_1131_bool == 0) goto Label_4866; // 0x12de JumpB
	var_1132_string = ""; // 0x12df PushV
	var_1132_string = "Neutral"; // 0x12e0 MovS
	func_2447(var_23_int, var_1132_string); // 0x12e1 NEW_2
	var_1133_int = 537243; // 0x12e3 PushI
	SetMessage(var_1133_int); // 0x12e4 TObjFunc
	ClearReplies(); // 0x12e6 TObjFunc
	var_1134_int = 537244; // 0x12e8 PushI
	var_1135_int = 39088; // 0x12e9 PushI
	var_1136_int = 39087; // 0x12ea PushI
	AddReply(var_1134_int, var_1135_int, var_1136_int); // 0x12eb TObjFunc
	var_1137_int = 537254; // 0x12ed PushI
	var_1138_int = 39099; // 0x12ee PushI
	var_1139_int = 39098; // 0x12ef PushI
	AddReply(var_1137_int, var_1138_int, var_1139_int); // 0x12f0 TObjFunc
	var_1140_int = 537264; // 0x12f2 PushI
	var_1141_int = 39109; // 0x12f3 PushI
	var_1142_int = 39108; // 0x12f4 PushI
	AddReply(var_1140_int, var_1141_int, var_1142_int); // 0x12f5 TObjFunc
	var_1143_int = 537275; // 0x12f7 PushI
	var_1144_int = -1; // 0x12f8 PushI
	var_1145_int = 39119; // 0x12f9 PushI
	AddReply(var_1143_int, var_1144_int, var_1145_int); // 0x12fa TObjFunc
	var_1146_int = 537276; // 0x12fc PushI
	var_1147_int = -1; // 0x12fd PushI
	var_1148_int = 39120; // 0x12fe PushI
	AddReply(var_1146_int, var_1147_int, var_1148_int); // 0x12ff TObjFunc
	return 0; // 0x1301 Return
	
Label_4866:
	var_1149_int = 39109; // 0x1302 PushI
	var_1150_bool = var_22_int == var_1149_int; // 0x1303 Eq
	if(var_1150_bool == 0) goto Label_4889; // 0x1304 JumpB
	var_1151_string = ""; // 0x1305 PushV
	var_1151_string = "Neutral"; // 0x1306 MovS
	func_2447(var_23_int, var_1151_string); // 0x1307 NEW_2
	var_1152_int = 537265; // 0x1309 PushI
	SetMessage(var_1152_int); // 0x130a TObjFunc
	ClearReplies(); // 0x130c TObjFunc
	var_1153_int = 537266; // 0x130e PushI
	var_1154_int = 44319; // 0x130f PushI
	var_1155_int = 39110; // 0x1310 PushI
	AddReply(var_1153_int, var_1154_int, var_1155_int); // 0x1311 TObjFunc
	var_1156_int = 537267; // 0x1313 PushI
	var_1157_int = 39112; // 0x1314 PushI
	var_1158_int = 39111; // 0x1315 PushI
	AddReply(var_1156_int, var_1157_int, var_1158_int); // 0x1316 TObjFunc
	return 0; // 0x1318 Return
	
Label_4889:
	var_1159_int = 39112; // 0x1319 PushI
	var_1160_bool = var_22_int == var_1159_int; // 0x131a Eq
	if(var_1160_bool == 0) goto Label_4912; // 0x131b JumpB
	var_1161_string = ""; // 0x131c PushV
	var_1161_string = "Neutral"; // 0x131d MovS
	func_2447(var_23_int, var_1161_string); // 0x131e NEW_2
	var_1162_int = 537268; // 0x1320 PushI
	SetMessage(var_1162_int); // 0x1321 TObjFunc
	ClearReplies(); // 0x1323 TObjFunc
	var_1163_int = 537269; // 0x1325 PushI
	var_1164_int = 39114; // 0x1326 PushI
	var_1165_int = 39113; // 0x1327 PushI
	AddReply(var_1163_int, var_1164_int, var_1165_int); // 0x1328 TObjFunc
	var_1166_int = 537273; // 0x132a PushI
	var_1167_int = -1; // 0x132b PushI
	var_1168_int = 39117; // 0x132c PushI
	AddReply(var_1166_int, var_1167_int, var_1168_int); // 0x132d TObjFunc
	return 0; // 0x132f Return
	
Label_4912:
	var_1169_int = 39114; // 0x1330 PushI
	var_1170_bool = var_22_int == var_1169_int; // 0x1331 Eq
	if(var_1170_bool == 0) goto Label_4935; // 0x1332 JumpB
	var_1171_string = ""; // 0x1333 PushV
	var_1171_string = "Neutral"; // 0x1334 MovS
	func_2447(var_23_int, var_1171_string); // 0x1335 NEW_2
	var_1172_int = 537270; // 0x1337 PushI
	SetMessage(var_1172_int); // 0x1338 TObjFunc
	ClearReplies(); // 0x133a TObjFunc
	var_1173_int = 537271; // 0x133c PushI
	var_1174_int = -1; // 0x133d PushI
	var_1175_int = 39115; // 0x133e PushI
	AddReply(var_1173_int, var_1174_int, var_1175_int); // 0x133f TObjFunc
	var_1176_int = 537272; // 0x1341 PushI
	var_1177_int = -1; // 0x1342 PushI
	var_1178_int = 39116; // 0x1343 PushI
	AddReply(var_1176_int, var_1177_int, var_1178_int); // 0x1344 TObjFunc
	return 0; // 0x1346 Return
	
Label_4935:
	var_1179_int = 44319; // 0x1347 PushI
	var_1180_bool = var_22_int == var_1179_int; // 0x1348 Eq
	if(var_1180_bool == 0) goto Label_4958; // 0x1349 JumpB
	var_1181_string = ""; // 0x134a PushV
	var_1181_string = "Neutral"; // 0x134b MovS
	func_2447(var_23_int, var_1181_string); // 0x134c NEW_2
	var_1182_int = 542040; // 0x134e PushI
	SetMessage(var_1182_int); // 0x134f TObjFunc
	ClearReplies(); // 0x1351 TObjFunc
	var_1183_int = 542041; // 0x1353 PushI
	var_1184_int = -1; // 0x1354 PushI
	var_1185_int = 44320; // 0x1355 PushI
	AddReply(var_1183_int, var_1184_int, var_1185_int); // 0x1356 TObjFunc
	var_1186_int = 542042; // 0x1358 PushI
	var_1187_int = -1; // 0x1359 PushI
	var_1188_int = 44321; // 0x135a PushI
	AddReply(var_1186_int, var_1187_int, var_1188_int); // 0x135b TObjFunc
	return 0; // 0x135d Return
	
Label_4958:
	var_1189_int = 39099; // 0x135e PushI
	var_1190_bool = var_22_int == var_1189_int; // 0x135f Eq
	if(var_1190_bool == 0) goto Label_4981; // 0x1360 JumpB
	var_1191_string = ""; // 0x1361 PushV
	var_1191_string = "Neutral"; // 0x1362 MovS
	func_2447(var_23_int, var_1191_string); // 0x1363 NEW_2
	var_1192_int = 537255; // 0x1365 PushI
	SetMessage(var_1192_int); // 0x1366 TObjFunc
	ClearReplies(); // 0x1368 TObjFunc
	var_1193_int = 537256; // 0x136a PushI
	var_1194_int = 39101; // 0x136b PushI
	var_1195_int = 39100; // 0x136c PushI
	AddReply(var_1193_int, var_1194_int, var_1195_int); // 0x136d TObjFunc
	var_1196_int = 537260; // 0x136f PushI
	var_1197_int = 39105; // 0x1370 PushI
	var_1198_int = 39104; // 0x1371 PushI
	AddReply(var_1196_int, var_1197_int, var_1198_int); // 0x1372 TObjFunc
	return 0; // 0x1374 Return
	
Label_4981:
	var_1199_int = 39105; // 0x1375 PushI
	var_1200_bool = var_22_int == var_1199_int; // 0x1376 Eq
	if(var_1200_bool == 0) goto Label_5004; // 0x1377 JumpB
	var_1201_string = ""; // 0x1378 PushV
	var_1201_string = "Neutral"; // 0x1379 MovS
	func_2447(var_23_int, var_1201_string); // 0x137a NEW_2
	var_1202_int = 537261; // 0x137c PushI
	SetMessage(var_1202_int); // 0x137d TObjFunc
	ClearReplies(); // 0x137f TObjFunc
	var_1203_int = 537262; // 0x1381 PushI
	var_1204_int = -1; // 0x1382 PushI
	var_1205_int = 39106; // 0x1383 PushI
	AddReply(var_1203_int, var_1204_int, var_1205_int); // 0x1384 TObjFunc
	var_1206_int = 537263; // 0x1386 PushI
	var_1207_int = -1; // 0x1387 PushI
	var_1208_int = 39107; // 0x1388 PushI
	AddReply(var_1206_int, var_1207_int, var_1208_int); // 0x1389 TObjFunc
	return 0; // 0x138b Return
	
Label_5004:
	var_1209_int = 39101; // 0x138c PushI
	var_1210_bool = var_22_int == var_1209_int; // 0x138d Eq
	if(var_1210_bool == 0) goto Label_5027; // 0x138e JumpB
	var_1211_string = ""; // 0x138f PushV
	var_1211_string = "Neutral"; // 0x1390 MovS
	func_2447(var_23_int, var_1211_string); // 0x1391 NEW_2
	var_1212_int = 537257; // 0x1393 PushI
	SetMessage(var_1212_int); // 0x1394 TObjFunc
	ClearReplies(); // 0x1396 TObjFunc
	var_1213_int = 537258; // 0x1398 PushI
	var_1214_int = -1; // 0x1399 PushI
	var_1215_int = 39102; // 0x139a PushI
	AddReply(var_1213_int, var_1214_int, var_1215_int); // 0x139b TObjFunc
	var_1216_int = 537259; // 0x139d PushI
	var_1217_int = -1; // 0x139e PushI
	var_1218_int = 39103; // 0x139f PushI
	AddReply(var_1216_int, var_1217_int, var_1218_int); // 0x13a0 TObjFunc
	return 0; // 0x13a2 Return
	
Label_5027:
	var_1219_int = 39088; // 0x13a3 PushI
	var_1220_bool = var_22_int == var_1219_int; // 0x13a4 Eq
	if(var_1220_bool == 0) goto Label_5050; // 0x13a5 JumpB
	var_1221_string = ""; // 0x13a6 PushV
	var_1221_string = "Neutral"; // 0x13a7 MovS
	func_2447(var_23_int, var_1221_string); // 0x13a8 NEW_2
	var_1222_int = 537245; // 0x13aa PushI
	SetMessage(var_1222_int); // 0x13ab TObjFunc
	ClearReplies(); // 0x13ad TObjFunc
	var_1223_int = 537246; // 0x13af PushI
	var_1224_int = 39090; // 0x13b0 PushI
	var_1225_int = 39089; // 0x13b1 PushI
	AddReply(var_1223_int, var_1224_int, var_1225_int); // 0x13b2 TObjFunc
	var_1226_int = 537253; // 0x13b4 PushI
	var_1227_int = 39090; // 0x13b5 PushI
	var_1228_int = 39096; // 0x13b6 PushI
	AddReply(var_1226_int, var_1227_int, var_1228_int); // 0x13b7 TObjFunc
	return 0; // 0x13b9 Return
	
Label_5050:
	var_1229_int = 39090; // 0x13ba PushI
	var_1230_bool = var_22_int == var_1229_int; // 0x13bb Eq
	if(var_1230_bool == 0) goto Label_5073; // 0x13bc JumpB
	var_1231_string = ""; // 0x13bd PushV
	var_1231_string = "Neutral"; // 0x13be MovS
	func_2447(var_23_int, var_1231_string); // 0x13bf NEW_2
	var_1232_int = 537247; // 0x13c1 PushI
	SetMessage(var_1232_int); // 0x13c2 TObjFunc
	ClearReplies(); // 0x13c4 TObjFunc
	var_1233_int = 537248; // 0x13c6 PushI
	var_1234_int = 39092; // 0x13c7 PushI
	var_1235_int = 39091; // 0x13c8 PushI
	AddReply(var_1233_int, var_1234_int, var_1235_int); // 0x13c9 TObjFunc
	var_1236_int = 537252; // 0x13cb PushI
	var_1237_int = -1; // 0x13cc PushI
	var_1238_int = 39095; // 0x13cd PushI
	AddReply(var_1236_int, var_1237_int, var_1238_int); // 0x13ce TObjFunc
	return 0; // 0x13d0 Return
	
Label_5073:
	var_1239_int = 39092; // 0x13d1 PushI
	var_1240_bool = var_22_int == var_1239_int; // 0x13d2 Eq
	if(var_1240_bool == 0) goto Label_5096; // 0x13d3 JumpB
	var_1241_string = ""; // 0x13d4 PushV
	var_1241_string = "Neutral"; // 0x13d5 MovS
	func_2447(var_23_int, var_1241_string); // 0x13d6 NEW_2
	var_1242_int = 537249; // 0x13d8 PushI
	SetMessage(var_1242_int); // 0x13d9 TObjFunc
	ClearReplies(); // 0x13db TObjFunc
	var_1243_int = 537250; // 0x13dd PushI
	var_1244_int = -1; // 0x13de PushI
	var_1245_int = 39093; // 0x13df PushI
	AddReply(var_1243_int, var_1244_int, var_1245_int); // 0x13e0 TObjFunc
	var_1246_int = 537251; // 0x13e2 PushI
	var_1247_int = -1; // 0x13e3 PushI
	var_1248_int = 39094; // 0x13e4 PushI
	AddReply(var_1246_int, var_1247_int, var_1248_int); // 0x13e5 TObjFunc
	return 0; // 0x13e7 Return
	
Label_5096:
	var_1249_int = 45672; // 0x13e8 PushI
	var_1250_bool = var_22_int == var_1249_int; // 0x13e9 Eq
	if(var_1250_bool == 0) goto Label_5119; // 0x13ea JumpB
	var_1251_string = ""; // 0x13eb PushV
	var_1251_string = "Neutral"; // 0x13ec MovS
	func_2447(var_23_int, var_1251_string); // 0x13ed NEW_2
	var_1252_int = 543216; // 0x13ef PushI
	SetMessage(var_1252_int); // 0x13f0 TObjFunc
	ClearReplies(); // 0x13f2 TObjFunc
	var_1253_int = 543220; // 0x13f4 PushI
	var_1254_int = -1; // 0x13f5 PushI
	var_1255_int = 45676; // 0x13f6 PushI
	AddReply(var_1253_int, var_1254_int, var_1255_int); // 0x13f7 TObjFunc
	var_1256_int = 543221; // 0x13f9 PushI
	var_1257_int = 45678; // 0x13fa PushI
	var_1258_int = 45677; // 0x13fb PushI
	AddReply(var_1256_int, var_1257_int, var_1258_int); // 0x13fc TObjFunc
	return 0; // 0x13fe Return
	
Label_5119:
	var_1259_int = 45678; // 0x13ff PushI
	var_1260_bool = var_22_int == var_1259_int; // 0x1400 Eq
	if(var_1260_bool == 0) goto Label_5142; // 0x1401 JumpB
	var_1261_string = ""; // 0x1402 PushV
	var_1261_string = "Neutral"; // 0x1403 MovS
	func_2447(var_23_int, var_1261_string); // 0x1404 NEW_2
	var_1262_int = 543222; // 0x1406 PushI
	SetMessage(var_1262_int); // 0x1407 TObjFunc
	ClearReplies(); // 0x1409 TObjFunc
	var_1263_int = 543223; // 0x140b PushI
	var_1264_int = -1; // 0x140c PushI
	var_1265_int = 45679; // 0x140d PushI
	AddReply(var_1263_int, var_1264_int, var_1265_int); // 0x140e TObjFunc
	var_1266_int = 543225; // 0x1410 PushI
	var_1267_int = 45682; // 0x1411 PushI
	var_1268_int = 45681; // 0x1412 PushI
	AddReply(var_1266_int, var_1267_int, var_1268_int); // 0x1413 TObjFunc
	return 0; // 0x1415 Return
	
Label_5142:
	var_1269_int = 45682; // 0x1416 PushI
	var_1270_bool = var_22_int == var_1269_int; // 0x1417 Eq
	if(var_1270_bool == 0) goto Label_5165; // 0x1418 JumpB
	var_1271_string = ""; // 0x1419 PushV
	var_1271_string = "Neutral"; // 0x141a MovS
	func_2447(var_23_int, var_1271_string); // 0x141b NEW_2
	var_1272_int = 543226; // 0x141d PushI
	SetMessage(var_1272_int); // 0x141e TObjFunc
	ClearReplies(); // 0x1420 TObjFunc
	var_1273_int = 543227; // 0x1422 PushI
	var_1274_int = -1; // 0x1423 PushI
	var_1275_int = 45683; // 0x1424 PushI
	AddReply(var_1273_int, var_1274_int, var_1275_int); // 0x1425 TObjFunc
	var_1276_int = 543228; // 0x1427 PushI
	var_1277_int = 45686; // 0x1428 PushI
	var_1278_int = 45684; // 0x1429 PushI
	AddReply(var_1276_int, var_1277_int, var_1278_int); // 0x142a TObjFunc
	return 0; // 0x142c Return
	
Label_5165:
	var_1279_int = 45686; // 0x142d PushI
	var_1280_bool = var_22_int == var_1279_int; // 0x142e Eq
	if(var_1280_bool == 0) goto Label_5188; // 0x142f JumpB
	var_1281_string = ""; // 0x1430 PushV
	var_1281_string = "Neutral"; // 0x1431 MovS
	func_2447(var_23_int, var_1281_string); // 0x1432 NEW_2
	var_1282_int = 543230; // 0x1434 PushI
	SetMessage(var_1282_int); // 0x1435 TObjFunc
	ClearReplies(); // 0x1437 TObjFunc
	var_1283_int = 543231; // 0x1439 PushI
	var_1284_int = -1; // 0x143a PushI
	var_1285_int = 45687; // 0x143b PushI
	AddReply(var_1283_int, var_1284_int, var_1285_int); // 0x143c TObjFunc
	var_1286_int = 543232; // 0x143e PushI
	var_1287_int = -1; // 0x143f PushI
	var_1288_int = 45688; // 0x1440 PushI
	AddReply(var_1286_int, var_1287_int, var_1288_int); // 0x1441 TObjFunc
	return 0; // 0x1443 Return
	
Label_5188:
	var_1289_int = 45690; // 0x1444 PushI
	var_1290_bool = var_22_int == var_1289_int; // 0x1445 Eq
	if(var_1290_bool == 0) goto Label_5259; // 0x1446 JumpB
	var_1291_bool = 0; // 0x1447 PushV
	var_1291_bool = 1; // 0x1448 MovB
	var_1292_bool = 0; // 0x1449 PushV
	var_1292_bool = 1; // 0x144a MovB
	var_1293_bool = 0; var_1294_object = Obj(); // 0x144b PushV
	var_1294_object = var_1_bool; // 0x144c MovT
	func_6169(var_1293_bool, var_1294_object); // 0x144d NEW_2
	if(var_1293_bool == 0) goto Label_5206; // 0x144f JumpB
	var_1295_bool = 0; var_1296_object = Obj(); // 0x1450 PushV
	var_1296_object = var_1_bool; // 0x1451 MovT
	func_6189(var_1295_bool, var_1296_object); // 0x1452 NEW_2
	if(var_1295_bool == 0) goto Label_5206; // 0x1454 JumpB
	var_1292_bool = 0; // 0x1455 MovB
	
Label_5206:
	if(var_1292_bool == 0) goto Label_5213; // 0x1456 JumpB
	var_1297_bool = 0; var_1298_object = Obj(); // 0x1457 PushV
	var_1298_object = var_1_bool; // 0x1458 MovT
	func_6179(var_1297_bool, var_1298_object); // 0x1459 NEW_2
	if(var_1297_bool == 0) goto Label_5213; // 0x145b JumpB
	var_1291_bool = 0; // 0x145c MovB
	
Label_5213:
	if(var_1291_bool == 0) goto Label_5234; // 0x145d JumpB
	var_1299_string = ""; // 0x145e PushV
	var_1299_string = "Neutral"; // 0x145f MovS
	func_2447(var_23_int, var_1299_string); // 0x1460 NEW_2
	var_1300_int = 543234; // 0x1462 PushI
	SetMessage(var_1300_int); // 0x1463 TObjFunc
	ClearReplies(); // 0x1465 TObjFunc
	var_1301_int = 543235; // 0x1467 PushI
	var_1302_int = -1; // 0x1468 PushI
	var_1303_int = 45691; // 0x1469 PushI
	AddReply(var_1301_int, var_1302_int, var_1303_int); // 0x146a TObjFunc
	var_1304_int = 543236; // 0x146c PushI
	var_1305_int = -1; // 0x146d PushI
	var_1306_int = 45692; // 0x146e PushI
	AddReply(var_1304_int, var_1305_int, var_1306_int); // 0x146f TObjFunc
	return 0; // 0x1471 Return
	
Label_5234:
	var_1307_bool = 0; var_1308_object = Obj(); // 0x1472 PushV
	var_1308_object = var_1_bool; // 0x1473 MovT
	func_6149(var_1307_bool, var_1308_object); // 0x1474 NEW_2
	if(var_1307_bool == 0) goto Label_5259; // 0x1476 JumpB
	var_1309_string = ""; // 0x1477 PushV
	var_1309_string = "Neutral"; // 0x1478 MovS
	func_2447(var_23_int, var_1309_string); // 0x1479 NEW_2
	var_1310_int = 543237; // 0x147b PushI
	SetMessage(var_1310_int); // 0x147c TObjFunc
	ClearReplies(); // 0x147e TObjFunc
	var_1311_int = 543238; // 0x1480 PushI
	var_1312_int = -1; // 0x1481 PushI
	var_1313_int = 45694; // 0x1482 PushI
	AddReply(var_1311_int, var_1312_int, var_1313_int); // 0x1483 TObjFunc
	var_1314_int = 543239; // 0x1485 PushI
	var_1315_int = -1; // 0x1486 PushI
	var_1316_int = 45695; // 0x1487 PushI
	AddReply(var_1314_int, var_1315_int, var_1316_int); // 0x1488 TObjFunc
	return 0; // 0x148a Return
	
Label_5259:
	var_1317_int = 45697; // 0x148b PushI
	var_1318_bool = var_22_int == var_1317_int; // 0x148c Eq
	if(var_1318_bool == 0) goto Label_5282; // 0x148d JumpB
	var_1319_string = ""; // 0x148e PushV
	var_1319_string = "Neutral"; // 0x148f MovS
	func_2447(var_23_int, var_1319_string); // 0x1490 NEW_2
	var_1320_int = 543241; // 0x1492 PushI
	SetMessage(var_1320_int); // 0x1493 TObjFunc
	ClearReplies(); // 0x1495 TObjFunc
	var_1321_int = 543242; // 0x1497 PushI
	var_1322_int = -1; // 0x1498 PushI
	var_1323_int = 45698; // 0x1499 PushI
	AddReply(var_1321_int, var_1322_int, var_1323_int); // 0x149a TObjFunc
	var_1324_int = 543243; // 0x149c PushI
	var_1325_int = 45700; // 0x149d PushI
	var_1326_int = 45699; // 0x149e PushI
	AddReply(var_1324_int, var_1325_int, var_1326_int); // 0x149f TObjFunc
	return 0; // 0x14a1 Return
	
Label_5282:
	var_1327_int = 45700; // 0x14a2 PushI
	var_1328_bool = var_22_int == var_1327_int; // 0x14a3 Eq
	if(var_1328_bool == 0) goto Label_5305; // 0x14a4 JumpB
	var_1329_string = ""; // 0x14a5 PushV
	var_1329_string = "Neutral"; // 0x14a6 MovS
	func_2447(var_23_int, var_1329_string); // 0x14a7 NEW_2
	var_1330_int = 543244; // 0x14a9 PushI
	SetMessage(var_1330_int); // 0x14aa TObjFunc
	ClearReplies(); // 0x14ac TObjFunc
	var_1331_int = 543245; // 0x14ae PushI
	var_1332_int = -1; // 0x14af PushI
	var_1333_int = 45701; // 0x14b0 PushI
	AddReply(var_1331_int, var_1332_int, var_1333_int); // 0x14b1 TObjFunc
	var_1334_int = 543246; // 0x14b3 PushI
	var_1335_int = -1; // 0x14b4 PushI
	var_1336_int = 45702; // 0x14b5 PushI
	AddReply(var_1334_int, var_1335_int, var_1336_int); // 0x14b6 TObjFunc
	return 0; // 0x14b8 Return
	
Label_5305:
	var_3_bool = 1; // 0x14b9 TMovB
	var_1337_bool = 0; // 0x14ba PushV
	func_6563(var_1337_bool); // 0x14bb NEW_2
	if(var_1337_bool == 0) goto Label_5313; // 0x14bd JumpB
	lshStopAnimation(); // 0x14be Func
	goto Label_5315; // 0x14c0 Jump
	
Label_5315:
	return 0; // 0x14c3 Return
	
Label_5313:
	StopAnimation(); // 0x14c1 Func
	
Label_5317:
	return 0; // 0x14c5 Return
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_string)
{
	return 0; // 0x167e Return
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object)
{
	return 0; // 0x1680 Return
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_int, var_24_float, var_25_float)
{
	return 0; // 0x1682 Return
}


event_43(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_int, var_24_float, var_25_float, var_26_cvector, var_27_cvector)
{
	return 0; // 0x1684 Return
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	var_22_bool = 1; // 0x28 PushB
	SensePlayerOnly(var_22_bool); // 0x29 Func
	func_6565(); // 0x2c NEW_2
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
	var_529_bool = 0; // 0x4 PushV
	func_6563(var_529_bool); // 0x5 NEW_2
	if(var_529_bool == 0) goto Label_15; // 0x7 JumpB
	var_530_string = ""; // 0x8 PushV
	var_530_string = "Neutral"; // 0x9 MovS
	func_5584(var_530_string); // 0xa NEW_2
	lshWaitForAnimEnd(); // 0xc Func
	goto Label_21; // 0xe Jump
	
Label_21:
	var_531_bool = var_0_bool; // 0x15 PushT
	if(var_531_bool == 0) goto Label_24; // 0x16 JumpB
	return 0; // 0x17 Return
	
Label_24:
	goto Label_4; // 0x18 Jump
	
Label_15:
	WaitForAnimEnd(); // 0xf Func
	var_532_string = "all"; // 0x11 PushS
	var_533_string = "idle"; // 0x12 PushS
	PlayAnimation(var_532_string, var_533_string); // 0x13 Func
}


func_5633(var_61_string, var_62_int, var_63_int)
{
	var_64_bool = 0; var_65_bool = 0; // 0x1601 PushV
	var_66_bool = 0; var_67_int = 0; var_68_int = 0; // 0x1602 PushV
	var_67_int = var_62_int; // 0x1603 Mov
	var_68_int = var_63_int; // 0x1604 Mov
	func_5675(var_66_bool, var_67_int, var_68_int); // 0x1605 NEW_2
	if(var_66_bool == 0) goto Label_5643; // 0x1607 JumpB
	var_69_int = 0; // 0x1608 PushI
	AddItem(var_65_bool, var_61_string, var_69_int); // 0x1609 Func
	
Label_5643:
	return 2; // 0x160b Return
}


func_6149(var_117_bool, var_118_object)
{
	var_119_bool = 0; var_120_object = Obj(); // 0x1806 PushV
	var_120_object = var_118_object; // 0x1807 Mov
	func_6289(var_120_object); // 0x1808 NEW_2
	if(var_119_bool == 0) goto Label_6157; // 0x180a JumpB
	var_117_bool = 1; // 0x180b MovB
	return 0; // 0x180c Return
	
Label_6157:
	var_117_bool = 0; // 0x180d MovB
	return 0; // 0x180e Return
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
	func_5665(var_52_cvector, var_53_cvector); // 0x612 NEW_2
	var_59_float = 0.75; // 0x614 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x615 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x616 Add2
	func_5665(var_50_cvector, var_51_cvector); // 0x617 NEW_2
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


func_5644(var_39_string, var_40_int, var_41_int, var_42_int)
{
	var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_bool = 0; // 0x160c PushV
	var_47_bool = 0; var_48_int = 0; var_49_int = 0; // 0x160d PushV
	var_48_int = var_40_int; // 0x160e Mov
	var_49_int = var_41_int; // 0x160f Mov
	func_5675(var_47_bool, var_48_int, var_49_int); // 0x1610 NEW_2
	if(var_47_bool == 0) goto Label_5658; // 0x1612 JumpB
	irand(var_45_int, var_42_int); // 0x1613 Func
	var_52_int = 0; // 0x1615 PushI
	var_53_int = 1; // 0x1616 PushI
	var_54_int = var_45_int + var_53_int; // 0x1617 Add
	AddItem(var_46_bool, var_39_string, var_52_int, var_54_int); // 0x1618 Func
	
Label_5658:
	return 4; // 0x161a Return
}


func_6159(var_144_bool, var_145_object)
{
	var_146_bool = 0; var_147_object = Obj(); // 0x1810 PushV
	var_147_object = var_145_object; // 0x1811 Mov
	func_6296(var_147_object); // 0x1812 NEW_2
	if(var_146_bool == 0) goto Label_6167; // 0x1814 JumpB
	var_144_bool = 1; // 0x1815 MovB
	return 0; // 0x1816 Return
	
Label_6167:
	var_144_bool = 0; // 0x1817 MovB
	return 0; // 0x1818 Return
}


func_6169(var_123_bool, var_124_object)
{
	var_125_bool = 0; var_126_object = Obj(); // 0x181a PushV
	var_126_object = var_124_object; // 0x181b Mov
	func_6303(var_126_object); // 0x181c NEW_2
	if(var_125_bool == 0) goto Label_6177; // 0x181e JumpB
	var_123_bool = 1; // 0x181f MovB
	return 0; // 0x1820 Return
	
Label_6177:
	var_123_bool = 0; // 0x1821 MovB
	return 0; // 0x1822 Return
}


func_5659(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); // 0x161b PushV
	self(var_32_object); // 0x161c Func
	var_30_object = var_32_object; // 0x161e Mov
	return 2; // 0x161f Return
}


func_5665(var_52_cvector, var_53_cvector)
{
	var_54_float = 0; var_55_float = 0; // 0x1621 PushV
	var_56_int = var_53_cvector | var_53_cvector; // 0x1622 Or
	var_55_float = sqrt(var_56_int); // 0x1623 Sqrt2
	var_57_float = 0.0; // 0x1624 PushF
	var_58_bool = var_55_float < var_57_float; // 0x1625 LT
	if(var_58_bool == 0) goto Label_5673; // 0x1626 JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x1627 MovV
	return 2; // 0x1628 Return
	
Label_5673:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x1629 Div2
	return 2; // 0x162a Return
}


func_6179(var_135_bool, var_136_object)
{
	var_137_bool = 0; var_138_object = Obj(); // 0x1824 PushV
	var_138_object = var_136_object; // 0x1825 Mov
	func_6310(var_138_object); // 0x1826 NEW_2
	if(var_137_bool == 0) goto Label_6187; // 0x1828 JumpB
	var_135_bool = 1; // 0x1829 MovB
	return 0; // 0x182a Return
	
Label_6187:
	var_135_bool = 0; // 0x182b MovB
	return 0; // 0x182c Return
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
	func_5318(var_191_cvector); // 0x648 NEW_2
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
	func_5318(var_201_cvector); // 0x663 NEW_2
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


func_5675(var_47_bool, var_48_int, var_49_int)
{
	var_50_int = 0; var_51_int = 0; // 0x162b PushV
	irand(var_51_int, var_49_int); // 0x162c Func
	var_47_bool = var_51_int < var_48_int; // 0x162e LT2
	return 2; // 0x162f Return
}


func_6189(var_129_bool, var_130_object)
{
	var_131_bool = 0; var_132_object = Obj(); // 0x182e PushV
	var_132_object = var_130_object; // 0x182f Mov
	func_6317(var_132_object); // 0x1830 NEW_2
	if(var_131_bool == 0) goto Label_6197; // 0x1832 JumpB
	var_129_bool = 1; // 0x1833 MovB
	return 0; // 0x1834 Return
	
Label_6197:
	var_129_bool = 0; // 0x1835 MovB
	return 0; // 0x1836 Return
}


func_5680(var_85_float, var_86_cvector, var_87_cvector)
{
	var_88_int = var_86_cvector | var_87_cvector; // 0x1631 Or
	var_89_int = var_86_cvector | var_86_cvector; // 0x1632 Or
	var_90_int = var_87_cvector | var_87_cvector; // 0x1633 Or
	var_91_float = var_89_int * var_90_int; // 0x1634 Mult
	var_92_float = sqrt(var_91_float); // 0x1635 Sqrt
	var_85_float = var_88_int / var_88_int; // 0x1636 Div2
	return 0; // 0x1637 Return
}


func_55()
{
	var_105_bool = 0; // 0x37 PushV
	func_5431(var_105_bool); // 0x38 NEW_2
	var_108_bool = var_105_bool == 0; // 0x3a Not
	if(var_108_bool == 0) goto Label_63; // 0x3b JumpB
	func_6055(); // 0x3d NEW_2
	
Label_63:
	return 0; // 0x3f Return
}


func_6199(var_171_bool, var_172_object)
{
	var_173_bool = 0; var_174_object = Obj(); // 0x1838 PushV
	var_174_object = var_172_object; // 0x1839 Mov
	func_6324(var_174_object); // 0x183a NEW_2
	if(var_173_bool == 0) goto Label_6207; // 0x183c JumpB
	var_171_bool = 1; // 0x183d MovB
	return 0; // 0x183e Return
	
Label_6207:
	var_171_bool = 0; // 0x183f MovB
	return 0; // 0x1840 Return
}


func_5688(var_75_float, var_76_cvector, var_77_cvector)
{
	var_78_float = GetByIndex(var_76_cvector, 0); // 0x1639 PushE
	var_79_float = GetByIndex(var_77_cvector, 0); // 0x163a PushE
	var_80_float = var_78_float * var_79_float; // 0x163b Mult
	var_81_float = GetByIndex(var_76_cvector, 2); // 0x163c PushE
	var_82_float = GetByIndex(var_77_cvector, 2); // 0x163d PushE
	var_83_float = var_81_float * var_82_float; // 0x163e Mult
	var_75_float = var_80_float + var_83_float; // 0x163f Add2
	return 0; // 0x1640 Return
}


func_573()
{
	var_136_int = 0; var_137_int = 0; var_138_int = 0; var_139_int = 0; var_140_bool = 0; var_141_float = 0; var_142_bool = 0; var_143_int = 0; var_144_int = 0; var_145_int = 0; var_146_int = 0; var_147_bool = 0; var_148_float = 0; var_149_bool = 0; // 0x23d PushV
	WaitForAnimEnd(); // 0x23e Func
	var_150_bool = 0; // 0x240 PushV
	func_5431(var_150_bool); // 0x241 NEW_2
	var_151_bool = var_150_bool == 0; // 0x243 Not
	if(var_151_bool == 0) goto Label_582; // 0x244 JumpB
	return 14; // 0x245 Return
	
Label_582:
	var_152_int = 0; // 0x246 PushV
	func_5900(var_152_int); // 0x247 NEW_2
	var_143_int = var_152_int; // 0x248 Mov
	var_144_int = 0; // 0x24a MovI
	
Label_587:
	var_165_bool = 0; // 0x24b PushV
	var_165_bool = 0; // 0x24c MovB
	var_166_int = 5; // 0x24d PushI
	var_167_bool = var_144_int < var_166_int; // 0x24e LT
	if(var_167_bool == 0) goto Label_597; // 0x24f JumpB
	var_168_bool = 0; // 0x250 PushV
	func_5431(var_168_bool); // 0x251 NEW_2
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
	func_5893(var_174_string, var_175_int); // 0x263 NEW_2
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


func_6209(var_177_bool, var_178_object)
{
	var_179_bool = 0; var_180_object = Obj(); // 0x1842 PushV
	var_180_object = var_178_object; // 0x1843 Mov
	func_6331(var_180_object); // 0x1844 NEW_2
	if(var_179_bool == 0) goto Label_6217; // 0x1846 JumpB
	var_177_bool = 1; // 0x1847 MovB
	return 0; // 0x1848 Return
	
Label_6217:
	var_177_bool = 0; // 0x1849 MovB
	return 0; // 0x184a Return
}


func_5697(var_84_float, var_85_cvector)
{
	var_86_float = GetByIndex(var_85_cvector, 0); // 0x1642 PushE
	var_87_float = GetByIndex(var_85_cvector, 0); // 0x1643 PushE
	var_88_float = var_86_float * var_87_float; // 0x1644 Mult
	var_89_float = GetByIndex(var_85_cvector, 2); // 0x1645 PushE
	var_90_float = GetByIndex(var_85_cvector, 2); // 0x1646 PushE
	var_91_float = var_89_float * var_90_float; // 0x1647 Mult
	var_92_int = var_88_float + var_91_float; // 0x1648 Add
	var_84_float = sqrt(var_92_int); // 0x1649 Sqrt2
	return 0; // 0x164a Return
}


func_5707(var_72_float, var_73_cvector, var_74_cvector)
{
	var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); // 0x164c PushV
	var_76_cvector = var_73_cvector; // 0x164d Mov
	var_77_cvector = var_74_cvector; // 0x164e Mov
	func_5688(var_75_float, var_76_cvector, var_77_cvector); // 0x164f NEW_2
	var_84_float = 0; var_85_cvector = CVector(0,0,0); // 0x1651 PushV
	var_85_cvector = var_73_cvector; // 0x1652 Mov
	func_5697(var_84_float, var_85_cvector); // 0x1653 NEW_2
	var_93_float = 0; var_94_cvector = CVector(0,0,0); // 0x1655 PushV
	var_94_cvector = var_74_cvector; // 0x1656 Mov
	func_5697(var_93_float, var_94_cvector); // 0x1657 NEW_2
	var_95_float = var_84_float * var_93_float; // 0x1659 Mult
	var_72_float = var_75_float / var_75_float; // 0x165a Div2
	return 0; // 0x165b Return
}


func_6219(var_94_bool, var_95_object)
{
	var_96_bool = 0; var_97_object = Obj(); // 0x184c PushV
	var_97_object = var_95_object; // 0x184d Mov
	func_6338(var_97_object); // 0x184e NEW_2
	if(var_96_bool == 0) goto Label_6227; // 0x1850 JumpB
	var_94_bool = 1; // 0x1851 MovB
	return 0; // 0x1852 Return
	
Label_6227:
	var_94_bool = 0; // 0x1853 MovB
	return 0; // 0x1854 Return
}


func_6229(var_192_bool, var_193_object)
{
	var_194_bool = 0; var_195_object = Obj(); // 0x1856 PushV
	var_195_object = var_193_object; // 0x1857 Mov
	func_6345(var_195_object); // 0x1858 NEW_2
	if(var_194_bool == 0) goto Label_6237; // 0x185a JumpB
	var_192_bool = 1; // 0x185b MovB
	return 0; // 0x185c Return
	
Label_6237:
	var_192_bool = 0; // 0x185d MovB
	return 0; // 0x185e Return
}


func_5724(var_69_int, var_70_string)
{
	var_71_int = 0; var_72_int = 0; // 0x165c PushV
	GetVariable(var_70_string, var_72_int); // 0x165d Func
	var_69_int = var_72_int; // 0x165f Mov
	return 2; // 0x1660 Return
}


func_6239(var_105_bool, var_106_object)
{
	var_107_bool = 0; var_108_object = Obj(); // 0x1860 PushV
	var_108_object = var_106_object; // 0x1861 Mov
	func_6352(var_108_object); // 0x1862 NEW_2
	if(var_107_bool == 0) goto Label_6247; // 0x1864 JumpB
	var_105_bool = 1; // 0x1865 MovB
	return 0; // 0x1866 Return
	
Label_6247:
	var_105_bool = 0; // 0x1867 MovB
	return 0; // 0x1868 Return
}


func_5729(var_49_object, var_50_string)
{
	var_51_object = Obj(); var_52_object = Obj(); var_53_object = Obj(); var_54_object = Obj(); // 0x1661 PushV
	GetMainOutdoorScene(var_53_object); // 0x1662 Func
	var_55_string = ".bin"; // 0x1664 PushS
	var_56_int = var_50_string + var_55_string; // 0x1665 Add
	AddBlankActor(var_54_object, var_53_object, var_50_string, var_56_int); // 0x1666 Func
	var_49_object = var_54_object; // 0x1668 Mov
	return 4; // 0x1669 Return
}


func_1124(var_2_bool)
{
	Stop(); // 0x464 Func
	var_23_int = 120; // 0x466 PushI
	KillTimer(var_23_int); // 0x467 Func
	var_2_bool = 1; // 0x469 TMovB
	return 0; // 0x46a Return
}


func_6249(var_200_bool, var_201_object)
{
	var_202_bool = 0; var_203_object = Obj(); // 0x186a PushV
	var_203_object = var_201_object; // 0x186b Mov
	func_6359(var_203_object); // 0x186c NEW_2
	if(var_202_bool == 0) goto Label_6257; // 0x186e JumpB
	var_200_bool = 1; // 0x186f MovB
	return 0; // 0x1870 Return
	
Label_6257:
	var_200_bool = 0; // 0x1871 MovB
	return 0; // 0x1872 Return
}


func_5740(var_32_int)
{
	var_33_float = 0; var_34_float = 0; // 0x166c PushV
	GetGameTime(var_34_float); // 0x166d Func
	var_35_int = 1; // 0x166f PushI
	var_36_int = 0; // 0x1670 PushV
	var_37_int = 24; // 0x1671 PushI
	var_36_int = var_34_float / var_34_float; // 0x1672 Div2
	var_32_int = var_35_int + var_36_int; // 0x1673 Add2
	return 2; // 0x1674 Return
}


func_6259(var_206_bool, var_207_object)
{
	var_208_bool = 0; var_209_object = Obj(); // 0x1874 PushV
	var_209_object = var_207_object; // 0x1875 Mov
	func_6366(var_209_object); // 0x1876 NEW_2
	if(var_208_bool == 0) goto Label_6267; // 0x1878 JumpB
	var_206_bool = 1; // 0x1879 MovB
	return 0; // 0x187a Return
	
Label_6267:
	var_206_bool = 0; // 0x187b MovB
	return 0; // 0x187c Return
}


func_1140(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x474 PushV
	GetDirection(var_77_cvector); // 0x475 Func
	var_79_cvector = CVector(0,0,0); var_80_object = Obj(); // 0x477 PushV
	var_80_object = var_0_bool; // 0x478 MovT
	func_5323(var_80_object); // 0x479 NEW_2
	var_78_cvector = var_79_cvector; // 0x47a Mov
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x47c PushV
	var_86_cvector = var_77_cvector; // 0x47d Mov
	var_87_cvector = var_78_cvector; // 0x47e Mov
	func_5680(var_85_float, var_86_cvector, var_87_cvector); // 0x47f NEW_2
	var_93_float = -0.34202; // 0x481 PushF
	var_74_bool = var_85_float >= var_93_float; // 0x482 GE2
	return 4; // 0x483 Return
}


func_5749(var_304_int)
{
	var_305_float = 0; var_306_float = 0; // 0x1675 PushV
	GetGameTime(var_306_float); // 0x1676 Func
	var_307_int = 0; // 0x1678 PushV
	var_307_int = var_306_float; // 0x1679 Mov
	var_308_int = 24; // 0x167a PushI
	var_304_int = var_307_int % var_308_int; // 0x167b Mod2
	return 2; // 0x167c Return
}


func_6269(var_299_bool, var_300_object)
{
	var_301_bool = 0; var_302_object = Obj(); // 0x187e PushV
	var_302_object = var_300_object; // 0x187f Mov
	func_6373(var_302_object); // 0x1880 NEW_2
	if(var_301_bool == 0) goto Label_6277; // 0x1882 JumpB
	var_299_bool = 1; // 0x1883 MovB
	return 0; // 0x1884 Return
	
Label_6277:
	var_299_bool = 0; // 0x1885 MovB
	return 0; // 0x1886 Return
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
	func_5665(var_52_cvector, var_53_cvector); // 0x48e NEW_2
	var_59_float = 0.75; // 0x490 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x491 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x492 Add2
	func_5665(var_50_cvector, var_51_cvector); // 0x493 NEW_2
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


func_5765(var_26_bool, var_27_object, var_28_string)
{
	var_29_string = "unholster"; // 0x1686 PushS
	var_30_bool = var_28_string == var_29_string; // 0x1687 Eq
	if(var_30_bool == 0) goto Label_5776; // 0x1688 JumpB
	var_31_bool = 0; var_32_object = Obj(); // 0x1689 PushV
	var_32_object = var_27_object; // 0x168a Mov
	func_6056(var_31_bool, var_32_object); // 0x168b NEW_2
	var_26_bool = var_31_bool; // 0x168c Mov
	return 0; // 0x168e Return
	
Label_5776:
	var_35_string = "player_shot"; // 0x1690 PushS
	var_36_bool = var_28_string == var_35_string; // 0x1691 Eq
	if(var_36_bool == 0) goto Label_5786; // 0x1692 JumpB
	var_37_bool = 0; var_38_object = Obj(); // 0x1693 PushV
	var_38_object = var_27_object; // 0x1694 Mov
	func_6069(var_37_bool, var_38_object); // 0x1695 NEW_2
	var_26_bool = var_37_bool; // 0x1696 Mov
	return 0; // 0x1698 Return
	
Label_5786:
	var_52_string = "battle"; // 0x169a PushS
	var_53_bool = var_28_string == var_52_string; // 0x169b Eq
	if(var_53_bool == 0) goto Label_5795; // 0x169c JumpB
	var_54_bool = 0; var_55_object = Obj(); // 0x169d PushV
	var_55_object = var_27_object; // 0x169e Mov
	func_6092(var_54_bool, var_55_object); // 0x169f NEW_2
	var_26_bool = var_54_bool; // 0x16a0 Mov
	return 0; // 0x16a2 Return
	
Label_5795:
	var_26_bool = 0; // 0x16a3 MovB
	return 0; // 0x16a4 Return
}


func_6279(var_323_bool, var_324_object)
{
	var_325_bool = 0; var_326_object = Obj(); // 0x1888 PushV
	var_326_object = var_324_object; // 0x1889 Mov
	func_6394(var_326_object); // 0x188a NEW_2
	if(var_325_bool == 0) goto Label_6287; // 0x188c JumpB
	var_323_bool = 1; // 0x188d MovB
	return 0; // 0x188e Return
	
Label_6287:
	var_323_bool = 0; // 0x188f MovB
	return 0; // 0x1890 Return
}


func_652(var_177_bool)
{
	var_177_bool = 1; // 0x28c MovB
	return 0; // 0x28d Return
}


func_654()
{
	StopAnimation(); // 0x28e Func
	StopGroup0(); // 0x290 Func
	return 0; // 0x292 Return
}


func_6289(var_119_bool)
{
	var_121_int = 0; // 0x1892 PushV
	func_5740(var_121_int); // 0x1893 NEW_2
	var_122_int = 1; // 0x1895 PushI
	var_119_bool = var_121_int == var_122_int; // 0x1896 Eq2
	return 0; // 0x1897 Return
}


func_659(var_0_bool, var_83_object)
{
	var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_bool = 0; var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_bool = 0; // 0x293 PushV
	var_0_bool = var_83_object; // 0x294 TMov
	func_710(var_90_bool); // 0x296 NEW_2
	GetDirection(var_88_cvector); // 0x298 Func
	var_98_cvector = CVector(0,0,0); var_99_object = Obj(); // 0x29a PushV
	var_99_object = var_0_bool; // 0x29b MovT
	func_5323(var_99_object); // 0x29c NEW_2
	var_89_cvector = var_98_cvector; // 0x29d Mov
	var_104_float = 0; var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); // 0x29f PushV
	var_105_cvector = var_88_cvector; // 0x2a0 Mov
	var_106_cvector = var_89_cvector; // 0x2a1 Mov
	func_5707(var_104_float, var_105_cvector, var_106_cvector); // 0x2a2 NEW_2
	var_128_int = 0; // 0x2a4 PushI
	var_129_bool = var_104_float < var_128_int; // 0x2a5 LT
	if(var_129_bool == 0) goto Label_685; // 0x2a6 JumpB
	var_130_object = Obj(); // 0x2a7 PushV
	var_130_object = var_0_bool; // 0x2a8 MovT
	func_5420(); // 0x2a9 NEW_2
	var_90_bool = 1; // 0x2ab MovB
	goto Label_688; // 0x2ac Jump
	
Label_688:
	var_139_bool = var_90_bool; // 0x2b0 Push
	if(var_139_bool == 0) goto Label_704; // 0x2b1 JumpB
	var_140_object = Obj(); // 0x2b2 PushV
	var_140_object = var_0_bool; // 0x2b3 MovT
	func_5420(); // 0x2b4 NEW_2
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


func_6296(var_146_bool)
{
	var_148_int = 0; // 0x1899 PushV
	func_5740(var_148_int); // 0x189a NEW_2
	var_149_int = 2; // 0x189c PushI
	var_146_bool = var_148_int == var_149_int; // 0x189d Eq2
	return 0; // 0x189e Return
}


func_6303(var_125_bool)
{
	var_127_int = 0; // 0x18a0 PushV
	func_5740(var_127_int); // 0x18a1 NEW_2
	var_128_int = 3; // 0x18a3 PushI
	var_125_bool = var_127_int == var_128_int; // 0x18a4 Eq2
	return 0; // 0x18a5 Return
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
	func_5318(var_168_cvector); // 0x4c4 NEW_2
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
	func_5318(var_180_cvector); // 0x4df NEW_2
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


func_5797(var_60_object, var_61_string)
{
	var_62_string = "unholster"; // 0x16a6 PushS
	var_63_bool = var_61_string == var_62_string; // 0x16a7 Eq
	if(var_63_bool == 0) goto Label_5806; // 0x16a8 JumpB
	var_64_object = Obj(); // 0x16a9 PushV
	var_64_object = var_60_object; // 0x16aa Mov
	func_6061(var_64_object); // 0x16ab NEW_2
	goto Label_5821; // 0x16ad Jump
	
Label_5821:
	return 0; // 0x16bd Return
	
Label_5806:
	var_137_string = "player_shot"; // 0x16ae PushS
	var_138_bool = var_61_string == var_137_string; // 0x16af Eq
	if(var_138_bool == 0) goto Label_5814; // 0x16b0 JumpB
	var_139_object = Obj(); // 0x16b1 PushV
	var_139_object = var_60_object; // 0x16b2 Mov
	func_6084(var_139_object); // 0x16b3 NEW_2
	goto Label_5821; // 0x16b5 Jump
	
Label_5814:
	var_205_string = "battle"; // 0x16b6 PushS
	var_206_bool = var_61_string == var_205_string; // 0x16b7 Eq
	if(var_206_bool == 0) goto Label_5821; // 0x16b8 JumpB
	var_207_object = Obj(); // 0x16b9 PushV
	var_207_object = var_60_object; // 0x16ba Mov
	func_6099(var_207_object); // 0x16bb NEW_2
}


func_6310(var_137_bool)
{
	var_139_int = 0; // 0x18a7 PushV
	func_5740(var_139_int); // 0x18a8 NEW_2
	var_140_int = 4; // 0x18aa PushI
	var_137_bool = var_139_int == var_140_int; // 0x18ab Eq2
	return 0; // 0x18ac Return
}


func_6317(var_131_bool)
{
	var_133_int = 0; // 0x18ae PushV
	func_5740(var_133_int); // 0x18af NEW_2
	var_134_int = 5; // 0x18b1 PushI
	var_131_bool = var_133_int == var_134_int; // 0x18b2 Eq2
	return 0; // 0x18b3 Return
}


func_1715(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x6b3 PushV
	GetDirection(var_77_cvector); // 0x6b4 Func
	var_79_cvector = CVector(0,0,0); var_80_object = Obj(); // 0x6b6 PushV
	var_80_object = var_0_bool; // 0x6b7 MovT
	func_5323(var_80_object); // 0x6b8 NEW_2
	var_78_cvector = var_79_cvector; // 0x6b9 Mov
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x6bb PushV
	var_86_cvector = var_77_cvector; // 0x6bc Mov
	var_87_cvector = var_78_cvector; // 0x6bd Mov
	func_5680(var_85_float, var_86_cvector, var_87_cvector); // 0x6be NEW_2
	var_93_float = -0.34202; // 0x6c0 PushF
	var_74_bool = var_85_float >= var_93_float; // 0x6c1 GE2
	return 4; // 0x6c2 Return
}


func_6324(var_173_bool)
{
	var_175_int = 0; // 0x18b5 PushV
	func_5740(var_175_int); // 0x18b6 NEW_2
	var_176_int = 6; // 0x18b8 PushI
	var_173_bool = var_175_int == var_176_int; // 0x18b9 Eq2
	return 0; // 0x18ba Return
}


func_6331(var_179_bool)
{
	var_181_int = 0; // 0x18bc PushV
	func_5740(var_181_int); // 0x18bd NEW_2
	var_182_int = 7; // 0x18bf PushI
	var_179_bool = var_181_int == var_182_int; // 0x18c0 Eq2
	return 0; // 0x18c1 Return
}


func_5822(var_23_bool, var_24_object)
{
	var_25_bool = 0; var_26_bool = 0; // 0x16be PushV
	var_27_bool = 0; // 0x16bf PushV
	var_27_bool = 0; // 0x16c0 MovB
	var_28_bool = 0; var_29_object = Obj(); // 0x16c1 PushV
	var_29_object = var_24_object; // 0x16c2 Mov
	func_6056(var_28_bool, var_29_object); // 0x16c3 NEW_2
	if(var_28_bool == 0) goto Label_5836; // 0x16c5 JumpB
	var_32_bool = 0; var_33_object = Obj(); // 0x16c6 PushV
	var_33_object = var_24_object; // 0x16c7 Mov
	func_5338(var_32_bool, var_33_object); // 0x16c8 NEW_2
	if(var_32_bool == 0) goto Label_5836; // 0x16ca JumpB
	var_27_bool = 1; // 0x16cb MovB
	
Label_5836:
	if(var_27_bool == 0) goto Label_5843; // 0x16cc JumpB
	IsWeaponHolstered(var_26_bool); // 0x16cd ObjFunc
	var_36_bool = var_26_bool == 0; // 0x16cf Not
	if(var_36_bool == 0) goto Label_5843; // 0x16d0 JumpB
	var_23_bool = 1; // 0x16d1 MovB
	return 2; // 0x16d2 Return
	
Label_5843:
	var_23_bool = 0; // 0x16d3 MovB
	return 2; // 0x16d4 Return
}


func_6338(var_96_bool)
{
	var_98_int = 0; // 0x18c3 PushV
	func_5740(var_98_int); // 0x18c4 NEW_2
	var_104_int = 8; // 0x18c6 PushI
	var_96_bool = var_98_int == var_104_int; // 0x18c7 Eq2
	return 0; // 0x18c8 Return
}


func_1731(var_0_bool, var_47_int, var_48_object)
{
	var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_object = Obj(); var_55_bool = 0; var_56_int = 0; var_57_bool = 0; // 0x6c3 PushV
	var_0_bool = var_48_object; // 0x6c4 TMov
	var_58_bool = 0; var_59_object = Obj(); var_60_float = 0; // 0x6c5 PushV
	var_59_object = var_48_object; // 0x6c6 Mov
	var_60_float = 70.0; // 0x6c7 MovF
	func_5436(var_59_object, var_60_float); // 0x6c8 NEW_2
	var_105_bool = var_58_bool == 0; // 0x6ca Not
	if(var_105_bool == 0) goto Label_1742; // 0x6cb JumpB
	var_47_int = -2; // 0x6cc MovI
	return 8; // 0x6cd Return
	
Label_1742:
	CreateDialog(var_54_object); // 0x6ce Func
	var_106_int = 0; // 0x6d0 PushV
	func_6557(var_106_int); // 0x6d1 NEW_2
	SetNPCName(var_106_int); // 0x6d3 ObjFunc
	var_107_int = 0; // 0x6d5 PushV
	func_6555(var_107_int); // 0x6d6 NEW_2
	SetNPCDescription(var_107_int); // 0x6d8 ObjFunc
	var_108_string = ""; // 0x6da PushV
	func_6559(var_108_string); // 0x6db NEW_2
	SetPhoto(var_108_string); // 0x6dd ObjFunc
	var_109_string = ""; // 0x6df PushV
	func_6561(var_109_string); // 0x6e0 NEW_2
	SetPhoto2(var_109_string); // 0x6e2 ObjFunc
	var_110_int = 0; // 0x6e4 PushV
	func_6405(var_110_int); // 0x6e5 NEW_2
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
	var_484_bool = var_57_bool == 0; // 0x6fb Not
	if(var_484_bool == 0) goto Label_1794; // 0x6fc JumpB
	sync(); // 0x6fd Func
	IsDialogEnd(var_57_bool); // 0x6ff ObjFunc
	goto Label_1787; // 0x701 Jump
	
Label_1794:
	var_485_object = Obj(); // 0x702 PushV
	var_485_object = var_48_object; // 0x703 Mov
	func_5505(); // 0x704 NEW_2
	StopDialog(var_54_object); // 0x706 Func
	GetReturnValue(var_56_int); // 0x708 ObjFunc
	var_47_int = var_56_int; // 0x70a Mov
	return 8; // 0x70b Return
}


func_710(var_0_bool)
{
	var_91_object = Obj(); // 0x2c6 PushV
	var_91_object = var_0_bool; // 0x2c7 MovT
	func_5615(var_91_object); // 0x2c8 NEW_2
	return 0; // 0x2ca Return
}


func_5318(var_94_cvector)
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); // 0x14c6 PushV
	GetPosition(var_96_cvector); // 0x14c7 Func
	var_94_cvector = var_96_cvector; // 0x14c9 Mov
	return 2; // 0x14ca Return
}


func_6345(var_194_bool)
{
	var_196_int = 0; // 0x18ca PushV
	func_5740(var_196_int); // 0x18cb NEW_2
	var_197_int = 9; // 0x18cd PushI
	var_194_bool = var_196_int == var_197_int; // 0x18ce Eq2
	return 0; // 0x18cf Return
}


func_5323(var_79_cvector)
{
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); // 0x14cb PushV
	GetPosition(var_83_cvector); // 0x14cc Func
	GetPosition(var_84_cvector); // 0x14ce ObjFunc
	var_79_cvector = var_84_cvector - var_83_cvector; // 0x14d0 Sub2
	return 4; // 0x14d1 Return
}


func_6352(var_107_bool)
{
	var_109_int = 0; // 0x18d1 PushV
	func_5740(var_109_int); // 0x18d2 NEW_2
	var_110_int = 10; // 0x18d4 PushI
	var_107_bool = var_109_int == var_110_int; // 0x18d5 Eq2
	return 0; // 0x18d6 Return
}


func_5330(var_42_float)
{
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x14d2 PushV
	GetPosition(var_47_cvector); // 0x14d3 Func
	GetPosition(var_48_cvector); // 0x14d5 ObjFunc
	var_49_cvector = var_48_cvector - var_47_cvector; // 0x14d7 Sub2
	var_42_float = var_49_cvector | var_49_cvector; // 0x14d8 Or2
	return 6; // 0x14d9 Return
}


func_5845(var_39_object)
{
	var_40_object = Obj(); // 0x16d6 PushV
	var_40_object = var_39_object; // 0x16d7 Mov
	func_6061(var_40_object); // 0x16d8 NEW_2
	return 0; // 0x16da Return
}


func_6359(var_202_bool)
{
	var_204_int = 0; // 0x18d8 PushV
	func_5740(var_204_int); // 0x18d9 NEW_2
	var_205_int = 11; // 0x18db PushI
	var_202_bool = var_204_int == var_205_int; // 0x18dc Eq2
	return 0; // 0x18dd Return
}


func_5338(var_32_bool, var_33_object)
{
	var_34_bool = 0; var_35_bool = 0; // 0x14da PushV
	IsPlayerActor(var_33_object, var_35_bool); // 0x14db Func
	var_32_bool = var_35_bool; // 0x14dd Mov
	return 2; // 0x14de Return
}


func_5851(var_25_object)
{
	var_26_bool = 0; var_27_object = Obj(); // 0x16dc PushV
	var_27_object = var_25_object; // 0x16dd Mov
	func_5338(var_26_bool, var_27_object); // 0x16de NEW_2
	if(var_26_bool == 0) goto Label_5863; // 0x16e0 JumpB
	var_30_object = Obj(); // 0x16e1 PushV
	func_5659(var_30_object); // 0x16e2 NEW_2
	var_33_float = -0.05; // 0x16e4 PushF
	ReportReputationChange(var_25_object, var_30_object, var_33_float); // 0x16e5 Func
	
Label_5863:
	return 0; // 0x16e7 Return
}


func_6366(var_208_bool)
{
	var_210_int = 0; // 0x18df PushV
	func_5740(var_210_int); // 0x18e0 NEW_2
	var_211_int = 12; // 0x18e2 PushI
	var_208_bool = var_210_int == var_211_int; // 0x18e3 Eq2
	return 0; // 0x18e4 Return
}


func_5343(var_51_bool, var_52_object, var_53_string)
{
	var_54_bool = 0; var_55_bool = 0; // 0x14df PushV
	var_56_string = "HasProperty"; // 0x14e0 PushS
	var_57_int = 2; // 0x14e1 PushI
	var_58_bool = IsFuncExist(var_52_object, var_56_string, var_57_int); // 0x14e2 FuncExist
	var_59_bool = var_58_bool == 0; // 0x14e3 Not
	if(var_59_bool == 0) goto Label_5351; // 0x14e4 JumpB
	var_51_bool = 0; // 0x14e5 MovB
	return 2; // 0x14e6 Return
	
Label_5351:
	HasProperty(var_53_string, var_55_bool); // 0x14e7 ObjFunc
	var_51_bool = var_55_bool; // 0x14e9 Mov
	return 2; // 0x14ea Return
}


func_6373(var_301_bool)
{
	var_303_bool = 0; // 0x18e6 PushV
	var_303_bool = 0; // 0x18e7 MovB
	var_304_int = 0; // 0x18e8 PushV
	func_5749(var_304_int); // 0x18e9 NEW_2
	var_309_int = 0; // 0x18eb PushI
	var_310_bool = var_304_int >= var_309_int; // 0x18ec GE
	if(var_310_bool == 0) goto Label_6389; // 0x18ed JumpB
	var_311_int = 0; // 0x18ee PushV
	func_5749(var_311_int); // 0x18ef NEW_2
	var_312_int = 12; // 0x18f1 PushI
	var_313_bool = var_311_int < var_312_int; // 0x18f2 LT
	if(var_313_bool == 0) goto Label_6389; // 0x18f3 JumpB
	var_303_bool = 1; // 0x18f4 MovB
	
Label_6389:
	if(var_303_bool == 0) goto Label_6392; // 0x18f5 JumpB
	var_301_bool = 1; // 0x18f6 MovB
	return 0; // 0x18f7 Return
	
Label_6392:
	var_301_bool = 0; // 0x18f8 MovB
	return 0; // 0x18f9 Return
}


func_5864(var_23_bool, var_24_string)
{
	var_25_object = Obj(); var_26_object = Obj(); // 0x16e8 PushV
	var_27_string = "heal"; // 0x16e9 PushS
	var_28_bool = var_24_string == var_27_string; // 0x16ea Eq
	if(var_28_bool == 0) goto Label_5878; // 0x16eb JumpB
	var_29_string = "player"; // 0x16ec PushS
	FindActor(var_26_object, var_29_string); // 0x16ed Func
	var_30_bool = 0; var_31_object = Obj(); // 0x16ef PushV
	var_31_object = var_26_object; // 0x16f0 Mov
	func_6105(var_31_object); // 0x16f1 NEW_2
	var_23_bool = var_30_bool; // 0x16f2 Mov
	return 2; // 0x16f4 Return
	
Label_5878:
	var_23_bool = 0; // 0x16f6 MovB
	return 2; // 0x16f7 Return
}


func_5355(var_44_bool)
{
	var_46_bool = 0; var_47_bool = 0; // 0x14eb PushV
	IsDead(var_47_bool); // 0x14ec ObjFunc
	var_44_bool = var_47_bool; // 0x14ee Mov
	return 2; // 0x14ef Return
}


func_5360(var_33_bool, var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj(); var_38_object = Obj(); // 0x14f0 PushV
	var_39_bool = var_34_object == 0; // 0x14f1 NullEq
	if(var_39_bool == 0) goto Label_5365; // 0x14f2 JumpB
	var_33_bool = 0; // 0x14f3 MovB
	return 4; // 0x14f4 Return
	
Label_5365:
	var_40_bool = 0; // 0x14f5 PushV
	var_40_bool = 0; // 0x14f6 MovB
	var_41_string = "IsDead"; // 0x14f7 PushS
	var_42_int = 1; // 0x14f8 PushI
	var_43_bool = IsFuncExist(var_34_object, var_41_string, var_42_int); // 0x14f9 FuncExist
	if(var_43_bool == 0) goto Label_5377; // 0x14fa JumpB
	var_44_bool = 0; var_45_object = Obj(); // 0x14fb PushV
	var_45_object = var_34_object; // 0x14fc Mov
	func_5355(var_45_object); // 0x14fd NEW_2
	if(var_44_bool == 0) goto Label_5377; // 0x14ff JumpB
	var_40_bool = 1; // 0x1500 MovB
	
Label_5377:
	if(var_40_bool == 0) goto Label_5380; // 0x1501 JumpB
	var_33_bool = 0; // 0x1502 MovB
	return 4; // 0x1503 Return
	
Label_5380:
	GetScene(var_37_object); // 0x1504 Func
	var_48_bool = var_37_object == 0; // 0x1506 NullEq
	if(var_48_bool == 0) goto Label_5386; // 0x1507 JumpB
	var_33_bool = 0; // 0x1508 MovB
	return 4; // 0x1509 Return
	
Label_5386:
	GetScene(var_38_object); // 0x150a ObjFunc
	var_49_bool = var_37_object != var_38_object; // 0x150c Neq
	if(var_49_bool == 0) goto Label_5392; // 0x150d JumpB
	var_33_bool = 0; // 0x150e MovB
	return 4; // 0x150f Return
	
Label_5392:
	var_33_bool = 1; // 0x1510 MovB
	return 4; // 0x1511 Return
}


func_5880(var_34_string)
{
	var_35_object = Obj(); var_36_object = Obj(); // 0x16f8 PushV
	var_37_string = "heal"; // 0x16f9 PushS
	var_38_bool = var_34_string == var_37_string; // 0x16fa Eq
	if(var_38_bool == 0) goto Label_5892; // 0x16fb JumpB
	var_39_string = "player"; // 0x16fc PushS
	FindActor(var_36_object, var_39_string); // 0x16fd Func
	var_40_object = Obj(); // 0x16ff PushV
	var_40_object = var_36_object; // 0x1700 Mov
	func_6108(); // 0x1701 NEW_2
	var_36_object = 0; // 0x1703 SetNull
	
Label_5892:
	return 2; // 0x1704 Return
}


func_6394(var_325_bool)
{
	var_327_int = 0; // 0x18fb PushV
	func_5749(var_327_int); // 0x18fc NEW_2
	var_328_int = 12; // 0x18fe PushI
	var_329_bool = var_327_int >= var_328_int; // 0x18ff GE
	if(var_329_bool == 0) goto Label_6403; // 0x1900 JumpB
	var_325_bool = 1; // 0x1901 MovB
	return 0; // 0x1902 Return
	
Label_6403:
	var_325_bool = 0; // 0x1903 MovB
	return 0; // 0x1904 Return
}


func_251(var_2_bool)
{
	var_23_int = 110; // 0xfb PushI
	KillTimer(var_23_int); // 0xfc Func
	var_2_bool = 0; // 0xfe TMovB
	func_387(var_21_string, var_22_bool); // 0x100 NEW_2
	return 0; // 0x102 Return
}


func_259(var_2_bool)
{
	var_81_int = 110; // 0x103 PushI
	KillTimer(var_81_int); // 0x104 Func
	var_2_bool = 0; // 0x106 TMovB
	func_394(var_26_bool, var_27_int); // 0x108 NEW_2
	return 0; // 0x10a Return
}


func_5893(var_158_string, var_159_int)
{
	var_160_string = ""; var_161_string = ""; // 0x1705 PushV
	var_161_string = "idle"; // 0x1706 MovS
	var_162_int = var_159_int; // 0x1707 Push
	if(var_162_int == 0) goto Label_5898; // 0x1708 JumpB
	var_161_string = var_161_string + var_159_int; // 0x1709 Add2
	
Label_5898:
	var_158_string = var_161_string; // 0x170a Mov
	return 2; // 0x170b Return
}


func_6405(var_110_int)
{
	var_111_int = 0; var_112_int = 0; // 0x1905 PushV
	var_113_string = "branch"; // 0x1906 PushS
	GetVariable(var_113_string, var_112_int); // 0x1907 Func
	var_114_int = 0; // 0x1909 PushI
	var_115_bool = var_112_int == var_114_int; // 0x190a Eq
	if(var_115_bool == 0) goto Label_6415; // 0x190b JumpB
	var_110_int = 1; // 0x190c MovI
	return 2; // 0x190d Return
	
Label_6415:
	var_116_int = 1; // 0x190f PushI
	var_117_bool = var_112_int == var_116_int; // 0x1910 Eq
	if(var_117_bool == 0) goto Label_6420; // 0x1911 JumpB
	var_110_int = 2; // 0x1912 MovI
	return 2; // 0x1913 Return
	
Label_6420:
	var_110_int = 3; // 0x1914 MovI
	return 2; // 0x1915 Return
}


func_5900(var_152_int)
{
	var_153_int = 0; var_154_bool = 0; var_155_int = 0; var_156_bool = 0; // 0x170c PushV
	var_155_int = 0; // 0x170d MovI
	
Label_5902:
	var_157_string = "all"; // 0x170e PushS
	var_158_string = ""; var_159_int = 0; // 0x170f PushV
	var_159_int = var_155_int; // 0x1710 Mov
	func_5893(var_158_string, var_159_int); // 0x1711 NEW_2
	HasAnimation(var_156_bool, var_157_string, var_158_string); // 0x1713 Func
	var_163_bool = var_156_bool == 0; // 0x1715 Not
	if(var_163_bool == 0) goto Label_5912; // 0x1716 JumpB
	goto Label_5915; // 0x1717 Jump
	
Label_5915:
	var_152_int = var_155_int; // 0x171b Mov
	return 4; // 0x171c Return
	
Label_5912:
	var_164_int = 1; // 0x1718 PushI
	var_155_int = var_155_int + var_164_int; // 0x1719 Add2
	goto Label_5902; // 0x171a Jump
}


func_1805(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_119_object, var_120_object)
{
	var_0_bool = var_120_object; // 0x70e TMov
	var_1_bool = var_119_object; // 0x70f TMov
	var_3_bool = 0; // 0x710 TMovB
	var_125_int = 1; // 0x711 PushI
	if(var_125_int == 0) goto Label_2417; // 0x712 JumpB
	var_126_bool = 0; var_127_object = Obj(); // 0x713 PushV
	var_127_object = var_1_bool; // 0x714 MovT
	func_6137(var_127_object); // 0x715 NEW_2
	if(var_126_bool == 0) goto Label_2150; // 0x717 JumpB
	var_134_string = ""; // 0x718 PushV
	var_134_string = "Neutral"; // 0x719 MovS
	func_2447(var_120_object, var_134_string); // 0x71a NEW_2
	var_151_int = 543209; // 0x71c PushI
	SetMessage(var_151_int); // 0x71d TObjFunc
	ClearReplies(); // 0x71f TObjFunc
	var_152_bool = 0; // 0x721 PushV
	var_152_bool = 1; // 0x722 MovB
	var_153_bool = 0; var_154_object = Obj(); // 0x723 PushV
	var_154_object = var_1_bool; // 0x724 MovT
	func_6219(var_153_bool, var_154_object); // 0x725 NEW_2
	if(var_153_bool == 0) goto Label_1838; // 0x727 JumpB
	var_164_bool = 0; var_165_object = Obj(); // 0x728 PushV
	var_165_object = var_1_bool; // 0x729 MovT
	func_6239(var_164_bool, var_165_object); // 0x72a NEW_2
	if(var_164_bool == 0) goto Label_1838; // 0x72c JumpB
	var_152_bool = 0; // 0x72d MovB
	
Label_1838:
	if(var_152_bool == 0) goto Label_1844; // 0x72e JumpB
	var_170_int = 543240; // 0x72f PushI
	var_171_int = 45697; // 0x730 PushI
	var_172_int = 45696; // 0x731 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x732 TObjFunc
	
Label_1844:
	var_173_bool = 0; // 0x734 PushV
	var_173_bool = 1; // 0x735 MovB
	var_174_bool = 0; // 0x736 PushV
	var_174_bool = 1; // 0x737 MovB
	var_175_bool = 0; // 0x738 PushV
	var_175_bool = 1; // 0x739 MovB
	var_176_bool = 0; var_177_object = Obj(); // 0x73a PushV
	var_177_object = var_1_bool; // 0x73b MovT
	func_6149(var_176_bool, var_177_object); // 0x73c NEW_2
	if(var_176_bool == 0) goto Label_1861; // 0x73e JumpB
	var_182_bool = 0; var_183_object = Obj(); // 0x73f PushV
	var_183_object = var_1_bool; // 0x740 MovT
	func_6169(var_182_bool, var_183_object); // 0x741 NEW_2
	if(var_182_bool == 0) goto Label_1861; // 0x743 JumpB
	var_175_bool = 0; // 0x744 MovB
	
Label_1861:
	if(var_175_bool == 0) goto Label_1868; // 0x745 JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x746 PushV
	var_189_object = var_1_bool; // 0x747 MovT
	func_6189(var_188_bool, var_189_object); // 0x748 NEW_2
	if(var_188_bool == 0) goto Label_1868; // 0x74a JumpB
	var_174_bool = 0; // 0x74b MovB
	
Label_1868:
	if(var_174_bool == 0) goto Label_1875; // 0x74c JumpB
	var_194_bool = 0; var_195_object = Obj(); // 0x74d PushV
	var_195_object = var_1_bool; // 0x74e MovT
	func_6179(var_194_bool, var_195_object); // 0x74f NEW_2
	if(var_194_bool == 0) goto Label_1875; // 0x751 JumpB
	var_173_bool = 0; // 0x752 MovB
	
Label_1875:
	if(var_173_bool == 0) goto Label_1881; // 0x753 JumpB
	var_200_int = 543233; // 0x754 PushI
	var_201_int = 45690; // 0x755 PushI
	var_202_int = 45689; // 0x756 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x757 TObjFunc
	
Label_1881:
	var_203_bool = 0; var_204_object = Obj(); // 0x759 PushV
	var_204_object = var_1_bool; // 0x75a MovT
	func_6159(var_203_bool, var_204_object); // 0x75b NEW_2
	if(var_203_bool == 0) goto Label_1891; // 0x75d JumpB
	var_209_int = 543214; // 0x75e PushI
	var_210_int = 45672; // 0x75f PushI
	var_211_int = 45670; // 0x760 PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x761 TObjFunc
	
Label_1891:
	var_212_bool = 0; // 0x763 PushV
	var_212_bool = 1; // 0x764 MovB
	var_213_bool = 0; // 0x765 PushV
	var_213_bool = 1; // 0x766 MovB
	var_214_bool = 0; // 0x767 PushV
	var_214_bool = 1; // 0x768 MovB
	var_215_bool = 0; var_216_object = Obj(); // 0x769 PushV
	var_216_object = var_1_bool; // 0x76a MovT
	func_6149(var_215_bool, var_216_object); // 0x76b NEW_2
	if(var_215_bool == 0) goto Label_1908; // 0x76d JumpB
	var_217_bool = 0; var_218_object = Obj(); // 0x76e PushV
	var_218_object = var_1_bool; // 0x76f MovT
	func_6159(var_217_bool, var_218_object); // 0x770 NEW_2
	if(var_217_bool == 0) goto Label_1908; // 0x772 JumpB
	var_214_bool = 0; // 0x773 MovB
	
Label_1908:
	if(var_214_bool == 0) goto Label_1915; // 0x774 JumpB
	var_219_bool = 0; var_220_object = Obj(); // 0x775 PushV
	var_220_object = var_1_bool; // 0x776 MovT
	func_6169(var_219_bool, var_220_object); // 0x777 NEW_2
	if(var_219_bool == 0) goto Label_1915; // 0x779 JumpB
	var_213_bool = 0; // 0x77a MovB
	
Label_1915:
	if(var_213_bool == 0) goto Label_1922; // 0x77b JumpB
	var_221_bool = 0; var_222_object = Obj(); // 0x77c PushV
	var_222_object = var_1_bool; // 0x77d MovT
	func_6179(var_221_bool, var_222_object); // 0x77e NEW_2
	if(var_221_bool == 0) goto Label_1922; // 0x780 JumpB
	var_212_bool = 0; // 0x781 MovB
	
Label_1922:
	if(var_212_bool == 0) goto Label_1928; // 0x782 JumpB
	var_223_int = 543210; // 0x783 PushI
	var_224_int = -1; // 0x784 PushI
	var_225_int = 45666; // 0x785 PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x786 TObjFunc
	
Label_1928:
	var_226_bool = 0; // 0x788 PushV
	var_226_bool = 1; // 0x789 MovB
	var_227_bool = 0; // 0x78a PushV
	var_227_bool = 1; // 0x78b MovB
	var_228_bool = 0; var_229_object = Obj(); // 0x78c PushV
	var_229_object = var_1_bool; // 0x78d MovT
	func_6189(var_228_bool, var_229_object); // 0x78e NEW_2
	if(var_228_bool == 0) goto Label_1943; // 0x790 JumpB
	var_230_bool = 0; var_231_object = Obj(); // 0x791 PushV
	var_231_object = var_1_bool; // 0x792 MovT
	func_6199(var_230_bool, var_231_object); // 0x793 NEW_2
	if(var_230_bool == 0) goto Label_1943; // 0x795 JumpB
	var_227_bool = 0; // 0x796 MovB
	
Label_1943:
	if(var_227_bool == 0) goto Label_1950; // 0x797 JumpB
	var_236_bool = 0; var_237_object = Obj(); // 0x798 PushV
	var_237_object = var_1_bool; // 0x799 MovT
	func_6209(var_236_bool, var_237_object); // 0x79a NEW_2
	if(var_236_bool == 0) goto Label_1950; // 0x79c JumpB
	var_226_bool = 0; // 0x79d MovB
	
Label_1950:
	if(var_226_bool == 0) goto Label_1956; // 0x79e JumpB
	var_242_int = 543211; // 0x79f PushI
	var_243_int = -1; // 0x7a0 PushI
	var_244_int = 45667; // 0x7a1 PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x7a2 TObjFunc
	
Label_1956:
	var_245_bool = 0; // 0x7a4 PushV
	var_245_bool = 1; // 0x7a5 MovB
	var_246_bool = 0; // 0x7a6 PushV
	var_246_bool = 1; // 0x7a7 MovB
	var_247_bool = 0; // 0x7a8 PushV
	var_247_bool = 1; // 0x7a9 MovB
	var_248_bool = 0; // 0x7aa PushV
	var_248_bool = 1; // 0x7ab MovB
	var_249_bool = 0; var_250_object = Obj(); // 0x7ac PushV
	var_250_object = var_1_bool; // 0x7ad MovT
	func_6219(var_249_bool, var_250_object); // 0x7ae NEW_2
	if(var_249_bool == 0) goto Label_1975; // 0x7b0 JumpB
	var_251_bool = 0; var_252_object = Obj(); // 0x7b1 PushV
	var_252_object = var_1_bool; // 0x7b2 MovT
	func_6229(var_251_bool, var_252_object); // 0x7b3 NEW_2
	if(var_251_bool == 0) goto Label_1975; // 0x7b5 JumpB
	var_248_bool = 0; // 0x7b6 MovB
	
Label_1975:
	if(var_248_bool == 0) goto Label_1982; // 0x7b7 JumpB
	var_257_bool = 0; var_258_object = Obj(); // 0x7b8 PushV
	var_258_object = var_1_bool; // 0x7b9 MovT
	func_6239(var_257_bool, var_258_object); // 0x7ba NEW_2
	if(var_257_bool == 0) goto Label_1982; // 0x7bc JumpB
	var_247_bool = 0; // 0x7bd MovB
	
Label_1982:
	if(var_247_bool == 0) goto Label_1989; // 0x7be JumpB
	var_259_bool = 0; var_260_object = Obj(); // 0x7bf PushV
	var_260_object = var_1_bool; // 0x7c0 MovT
	func_6249(var_259_bool, var_260_object); // 0x7c1 NEW_2
	if(var_259_bool == 0) goto Label_1989; // 0x7c3 JumpB
	var_246_bool = 0; // 0x7c4 MovB
	
Label_1989:
	if(var_246_bool == 0) goto Label_1996; // 0x7c5 JumpB
	var_265_bool = 0; var_266_object = Obj(); // 0x7c6 PushV
	var_266_object = var_1_bool; // 0x7c7 MovT
	func_6259(var_265_bool, var_266_object); // 0x7c8 NEW_2
	if(var_265_bool == 0) goto Label_1996; // 0x7ca JumpB
	var_245_bool = 0; // 0x7cb MovB
	
Label_1996:
	if(var_245_bool == 0) goto Label_2002; // 0x7cc JumpB
	var_271_int = 543212; // 0x7cd PushI
	var_272_int = -1; // 0x7ce PushI
	var_273_int = 45668; // 0x7cf PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x7d0 TObjFunc
	
Label_2002:
	var_274_bool = 0; // 0x7d2 PushV
	var_274_bool = 1; // 0x7d3 MovB
	var_275_bool = 0; // 0x7d4 PushV
	var_275_bool = 1; // 0x7d5 MovB
	var_276_bool = 0; // 0x7d6 PushV
	var_276_bool = 1; // 0x7d7 MovB
	var_277_bool = 0; // 0x7d8 PushV
	var_277_bool = 1; // 0x7d9 MovB
	var_278_bool = 0; var_279_object = Obj(); // 0x7da PushV
	var_279_object = var_1_bool; // 0x7db MovT
	func_6149(var_278_bool, var_279_object); // 0x7dc NEW_2
	if(var_278_bool == 0) goto Label_2021; // 0x7de JumpB
	var_280_bool = 0; var_281_object = Obj(); // 0x7df PushV
	var_281_object = var_1_bool; // 0x7e0 MovT
	func_6159(var_280_bool, var_281_object); // 0x7e1 NEW_2
	if(var_280_bool == 0) goto Label_2021; // 0x7e3 JumpB
	var_277_bool = 0; // 0x7e4 MovB
	
Label_2021:
	if(var_277_bool == 0) goto Label_2028; // 0x7e5 JumpB
	var_282_bool = 0; var_283_object = Obj(); // 0x7e6 PushV
	var_283_object = var_1_bool; // 0x7e7 MovT
	func_6179(var_282_bool, var_283_object); // 0x7e8 NEW_2
	if(var_282_bool == 0) goto Label_2028; // 0x7ea JumpB
	var_276_bool = 0; // 0x7eb MovB
	
Label_2028:
	if(var_276_bool == 0) goto Label_2035; // 0x7ec JumpB
	var_284_bool = 0; var_285_object = Obj(); // 0x7ed PushV
	var_285_object = var_1_bool; // 0x7ee MovT
	func_6189(var_284_bool, var_285_object); // 0x7ef NEW_2
	if(var_284_bool == 0) goto Label_2035; // 0x7f1 JumpB
	var_275_bool = 0; // 0x7f2 MovB
	
Label_2035:
	if(var_275_bool == 0) goto Label_2042; // 0x7f3 JumpB
	var_286_bool = 0; var_287_object = Obj(); // 0x7f4 PushV
	var_287_object = var_1_bool; // 0x7f5 MovT
	func_6209(var_286_bool, var_287_object); // 0x7f6 NEW_2
	if(var_286_bool == 0) goto Label_2042; // 0x7f8 JumpB
	var_274_bool = 0; // 0x7f9 MovB
	
Label_2042:
	if(var_274_bool == 0) goto Label_2048; // 0x7fa JumpB
	var_288_int = 543213; // 0x7fb PushI
	var_289_int = -1; // 0x7fc PushI
	var_290_int = 45669; // 0x7fd PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x7fe TObjFunc
	
Label_2048:
	var_291_bool = 0; // 0x800 PushV
	var_291_bool = 1; // 0x801 MovB
	var_292_bool = 0; // 0x802 PushV
	var_292_bool = 1; // 0x803 MovB
	var_293_bool = 0; // 0x804 PushV
	var_293_bool = 1; // 0x805 MovB
	var_294_bool = 0; // 0x806 PushV
	var_294_bool = 1; // 0x807 MovB
	var_295_bool = 0; // 0x808 PushV
	var_295_bool = 1; // 0x809 MovB
	var_296_bool = 0; // 0x80a PushV
	var_296_bool = 1; // 0x80b MovB
	var_297_bool = 0; var_298_object = Obj(); // 0x80c PushV
	var_298_object = var_1_bool; // 0x80d MovT
	func_6169(var_297_bool, var_298_object); // 0x80e NEW_2
	if(var_297_bool == 0) goto Label_2071; // 0x810 JumpB
	var_299_bool = 0; var_300_object = Obj(); // 0x811 PushV
	var_300_object = var_1_bool; // 0x812 MovT
	func_6199(var_299_bool, var_300_object); // 0x813 NEW_2
	if(var_299_bool == 0) goto Label_2071; // 0x815 JumpB
	var_296_bool = 0; // 0x816 MovB
	
Label_2071:
	if(var_296_bool == 0) goto Label_2078; // 0x817 JumpB
	var_301_bool = 0; var_302_object = Obj(); // 0x818 PushV
	var_302_object = var_1_bool; // 0x819 MovT
	func_6229(var_301_bool, var_302_object); // 0x81a NEW_2
	if(var_301_bool == 0) goto Label_2078; // 0x81c JumpB
	var_295_bool = 0; // 0x81d MovB
	
Label_2078:
	if(var_295_bool == 0) goto Label_2085; // 0x81e JumpB
	var_303_bool = 0; var_304_object = Obj(); // 0x81f PushV
	var_304_object = var_1_bool; // 0x820 MovT
	func_6259(var_303_bool, var_304_object); // 0x821 NEW_2
	if(var_303_bool == 0) goto Label_2085; // 0x823 JumpB
	var_294_bool = 0; // 0x824 MovB
	
Label_2085:
	if(var_294_bool == 0) goto Label_2092; // 0x825 JumpB
	var_305_bool = 0; var_306_object = Obj(); // 0x826 PushV
	var_306_object = var_1_bool; // 0x827 MovT
	func_6159(var_305_bool, var_306_object); // 0x828 NEW_2
	if(var_305_bool == 0) goto Label_2092; // 0x82a JumpB
	var_293_bool = 0; // 0x82b MovB
	
Label_2092:
	if(var_293_bool == 0) goto Label_2099; // 0x82c JumpB
	var_307_bool = 0; var_308_object = Obj(); // 0x82d PushV
	var_308_object = var_1_bool; // 0x82e MovT
	func_6219(var_307_bool, var_308_object); // 0x82f NEW_2
	if(var_307_bool == 0) goto Label_2099; // 0x831 JumpB
	var_292_bool = 0; // 0x832 MovB
	
Label_2099:
	if(var_292_bool == 0) goto Label_2106; // 0x833 JumpB
	var_309_bool = 0; var_310_object = Obj(); // 0x834 PushV
	var_310_object = var_1_bool; // 0x835 MovT
	func_6239(var_309_bool, var_310_object); // 0x836 NEW_2
	if(var_309_bool == 0) goto Label_2106; // 0x838 JumpB
	var_291_bool = 0; // 0x839 MovB
	
Label_2106:
	if(var_291_bool == 0) goto Label_2112; // 0x83a JumpB
	var_311_int = 543215; // 0x83b PushI
	var_312_int = -1; // 0x83c PushI
	var_313_int = 45671; // 0x83d PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x83e TObjFunc
	
Label_2112:
	var_314_bool = 0; // 0x840 PushV
	var_314_bool = 1; // 0x841 MovB
	var_315_bool = 0; // 0x842 PushV
	var_315_bool = 1; // 0x843 MovB
	var_316_bool = 0; // 0x844 PushV
	var_316_bool = 1; // 0x845 MovB
	var_317_bool = 0; var_318_object = Obj(); // 0x846 PushV
	var_318_object = var_1_bool; // 0x847 MovT
	func_6249(var_317_bool, var_318_object); // 0x848 NEW_2
	if(var_317_bool == 0) goto Label_2129; // 0x84a JumpB
	var_319_bool = 0; var_320_object = Obj(); // 0x84b PushV
	var_320_object = var_1_bool; // 0x84c MovT
	func_6229(var_319_bool, var_320_object); // 0x84d NEW_2
	if(var_319_bool == 0) goto Label_2129; // 0x84f JumpB
	var_316_bool = 0; // 0x850 MovB
	
Label_2129:
	if(var_316_bool == 0) goto Label_2136; // 0x851 JumpB
	var_321_bool = 0; var_322_object = Obj(); // 0x852 PushV
	var_322_object = var_1_bool; // 0x853 MovT
	func_6219(var_321_bool, var_322_object); // 0x854 NEW_2
	if(var_321_bool == 0) goto Label_2136; // 0x856 JumpB
	var_315_bool = 0; // 0x857 MovB
	
Label_2136:
	if(var_315_bool == 0) goto Label_2143; // 0x858 JumpB
	var_323_bool = 0; var_324_object = Obj(); // 0x859 PushV
	var_324_object = var_1_bool; // 0x85a MovT
	func_6209(var_323_bool, var_324_object); // 0x85b NEW_2
	if(var_323_bool == 0) goto Label_2143; // 0x85d JumpB
	var_314_bool = 0; // 0x85e MovB
	
Label_2143:
	if(var_314_bool == 0) goto Label_2149; // 0x85f JumpB
	var_325_int = 543219; // 0x860 PushI
	var_326_int = -1; // 0x861 PushI
	var_327_int = 45675; // 0x862 PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0x863 TObjFunc
	
Label_2149:
	goto Label_2417; // 0x865 Jump
	
Label_2417:
	var_328_bool = 0; // 0x971 PushV
	func_6563(var_328_bool); // 0x972 NEW_2
	if(var_328_bool == 0) goto Label_2432; // 0x974 JumpB
	
Label_2421:
	lshWaitForAnimEnd(); // 0x975 Func
	var_329_bool = var_3_bool; // 0x977 PushT
	if(var_329_bool == 0) goto Label_2426; // 0x978 JumpB
	goto Label_2431; // 0x979 Jump
	
Label_2431:
	goto Label_2446; // 0x97f Jump
	
Label_2446:
	return 0; // 0x98e Return
	
Label_2426:
	var_330_string = ""; // 0x97a PushV
	var_330_string = var_2_bool; // 0x97b MovT
	func_5584(var_330_string); // 0x97c NEW_2
	goto Label_2421; // 0x97e Jump
	
Label_2432:
	var_341_string = "all"; // 0x980 PushS
	var_342_string = "idle"; // 0x981 PushS
	PlayAnimation(var_341_string, var_342_string); // 0x982 Func
	
Label_2436:
	WaitForAnimEnd(); // 0x984 Func
	var_343_bool = var_3_bool; // 0x986 PushT
	if(var_343_bool == 0) goto Label_2441; // 0x987 JumpB
	goto Label_2446; // 0x988 Jump
	
Label_2441:
	var_344_string = "all"; // 0x989 PushS
	var_345_string = "idle"; // 0x98a PushS
	PlayAnimation(var_344_string, var_345_string); // 0x98b Func
	goto Label_2436; // 0x98d Jump
	
Label_2150:
	var_346_string = ""; // 0x866 PushV
	var_346_string = "Neutral"; // 0x867 MovS
	func_2447(var_120_object, var_346_string); // 0x868 NEW_2
	var_347_int = 537240; // 0x86a PushI
	SetMessage(var_347_int); // 0x86b TObjFunc
	ClearReplies(); // 0x86d TObjFunc
	var_348_int = 537241; // 0x86f PushI
	var_349_int = -1; // 0x870 PushI
	var_350_int = 39084; // 0x871 PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0x872 TObjFunc
	var_351_bool = 0; // 0x874 PushV
	var_351_bool = 0; // 0x875 MovB
	var_352_bool = 0; var_353_object = Obj(); // 0x876 PushV
	var_353_object = var_1_bool; // 0x877 MovT
	func_6125(var_353_object); // 0x878 NEW_2
	if(var_352_bool == 0) goto Label_2177; // 0x87a JumpB
	var_358_bool = 0; var_359_object = Obj(); // 0x87b PushV
	var_359_object = var_1_bool; // 0x87c MovT
	func_6149(var_358_bool, var_359_object); // 0x87d NEW_2
	if(var_358_bool == 0) goto Label_2177; // 0x87f JumpB
	var_351_bool = 1; // 0x880 MovB
	
Label_2177:
	if(var_351_bool == 0) goto Label_2183; // 0x881 JumpB
	var_360_int = 537242; // 0x882 PushI
	var_361_int = 39086; // 0x883 PushI
	var_362_int = 39085; // 0x884 PushI
	AddReply(var_360_int, var_361_int, var_362_int); // 0x885 TObjFunc
	
Label_2183:
	var_363_bool = 0; var_364_object = Obj(); // 0x887 PushV
	var_364_object = var_1_bool; // 0x888 MovT
	func_6149(var_363_bool, var_364_object); // 0x889 NEW_2
	if(var_363_bool == 0) goto Label_2193; // 0x88b JumpB
	var_365_int = 537277; // 0x88c PushI
	var_366_int = 39122; // 0x88d PushI
	var_367_int = 39121; // 0x88e PushI
	AddReply(var_365_int, var_366_int, var_367_int); // 0x88f TObjFunc
	
Label_2193:
	var_368_bool = 0; var_369_object = Obj(); // 0x891 PushV
	var_369_object = var_1_bool; // 0x892 MovT
	func_6159(var_368_bool, var_369_object); // 0x893 NEW_2
	if(var_368_bool == 0) goto Label_2203; // 0x895 JumpB
	var_370_int = 537329; // 0x896 PushI
	var_371_int = 39176; // 0x897 PushI
	var_372_int = 39175; // 0x898 PushI
	AddReply(var_370_int, var_371_int, var_372_int); // 0x899 TObjFunc
	
Label_2203:
	var_373_bool = 0; // 0x89b PushV
	var_373_bool = 0; // 0x89c MovB
	var_374_bool = 0; var_375_object = Obj(); // 0x89d PushV
	var_375_object = var_1_bool; // 0x89e MovT
	func_6169(var_374_bool, var_375_object); // 0x89f NEW_2
	if(var_374_bool == 0) goto Label_2216; // 0x8a1 JumpB
	var_376_bool = 0; var_377_object = Obj(); // 0x8a2 PushV
	var_377_object = var_1_bool; // 0x8a3 MovT
	func_6269(var_376_bool, var_377_object); // 0x8a4 NEW_2
	if(var_376_bool == 0) goto Label_2216; // 0x8a6 JumpB
	var_373_bool = 1; // 0x8a7 MovB
	
Label_2216:
	if(var_373_bool == 0) goto Label_2222; // 0x8a8 JumpB
	var_391_int = 537352; // 0x8a9 PushI
	var_392_int = 39199; // 0x8aa PushI
	var_393_int = 39198; // 0x8ab PushI
	AddReply(var_391_int, var_392_int, var_393_int); // 0x8ac TObjFunc
	
Label_2222:
	var_394_bool = 0; // 0x8ae PushV
	var_394_bool = 0; // 0x8af MovB
	var_395_bool = 0; // 0x8b0 PushV
	var_395_bool = 0; // 0x8b1 MovB
	var_396_bool = 0; var_397_object = Obj(); // 0x8b2 PushV
	var_397_object = var_1_bool; // 0x8b3 MovT
	func_6125(var_397_object); // 0x8b4 NEW_2
	if(var_396_bool == 0) goto Label_2237; // 0x8b6 JumpB
	var_398_bool = 0; var_399_object = Obj(); // 0x8b7 PushV
	var_399_object = var_1_bool; // 0x8b8 MovT
	func_6169(var_398_bool, var_399_object); // 0x8b9 NEW_2
	if(var_398_bool == 0) goto Label_2237; // 0x8bb JumpB
	var_395_bool = 1; // 0x8bc MovB
	
Label_2237:
	if(var_395_bool == 0) goto Label_2244; // 0x8bd JumpB
	var_400_bool = 0; var_401_object = Obj(); // 0x8be PushV
	var_401_object = var_1_bool; // 0x8bf MovT
	func_6279(var_400_bool, var_401_object); // 0x8c0 NEW_2
	if(var_400_bool == 0) goto Label_2244; // 0x8c2 JumpB
	var_394_bool = 1; // 0x8c3 MovB
	
Label_2244:
	if(var_394_bool == 0) goto Label_2250; // 0x8c4 JumpB
	var_407_int = 537359; // 0x8c5 PushI
	var_408_int = 39206; // 0x8c6 PushI
	var_409_int = 39205; // 0x8c7 PushI
	AddReply(var_407_int, var_408_int, var_409_int); // 0x8c8 TObjFunc
	
Label_2250:
	var_410_bool = 0; // 0x8ca PushV
	var_410_bool = 0; // 0x8cb MovB
	var_411_bool = 0; var_412_object = Obj(); // 0x8cc PushV
	var_412_object = var_1_bool; // 0x8cd MovT
	func_6179(var_411_bool, var_412_object); // 0x8ce NEW_2
	if(var_411_bool == 0) goto Label_2263; // 0x8d0 JumpB
	var_413_bool = 0; var_414_object = Obj(); // 0x8d1 PushV
	var_414_object = var_1_bool; // 0x8d2 MovT
	func_6269(var_413_bool, var_414_object); // 0x8d3 NEW_2
	if(var_413_bool == 0) goto Label_2263; // 0x8d5 JumpB
	var_410_bool = 1; // 0x8d6 MovB
	
Label_2263:
	if(var_410_bool == 0) goto Label_2269; // 0x8d7 JumpB
	var_415_int = 537380; // 0x8d8 PushI
	var_416_int = 39227; // 0x8d9 PushI
	var_417_int = 39226; // 0x8da PushI
	AddReply(var_415_int, var_416_int, var_417_int); // 0x8db TObjFunc
	
Label_2269:
	var_418_bool = 0; // 0x8dd PushV
	var_418_bool = 0; // 0x8de MovB
	var_419_bool = 0; var_420_object = Obj(); // 0x8df PushV
	var_420_object = var_1_bool; // 0x8e0 MovT
	func_6179(var_419_bool, var_420_object); // 0x8e1 NEW_2
	if(var_419_bool == 0) goto Label_2282; // 0x8e3 JumpB
	var_421_bool = 0; var_422_object = Obj(); // 0x8e4 PushV
	var_422_object = var_1_bool; // 0x8e5 MovT
	func_6279(var_421_bool, var_422_object); // 0x8e6 NEW_2
	if(var_421_bool == 0) goto Label_2282; // 0x8e8 JumpB
	var_418_bool = 1; // 0x8e9 MovB
	
Label_2282:
	if(var_418_bool == 0) goto Label_2288; // 0x8ea JumpB
	var_423_int = 537390; // 0x8eb PushI
	var_424_int = 39237; // 0x8ec PushI
	var_425_int = 39236; // 0x8ed PushI
	AddReply(var_423_int, var_424_int, var_425_int); // 0x8ee TObjFunc
	
Label_2288:
	var_426_bool = 0; var_427_object = Obj(); // 0x8f0 PushV
	var_427_object = var_1_bool; // 0x8f1 MovT
	func_6189(var_426_bool, var_427_object); // 0x8f2 NEW_2
	if(var_426_bool == 0) goto Label_2298; // 0x8f4 JumpB
	var_428_int = 537400; // 0x8f5 PushI
	var_429_int = 39247; // 0x8f6 PushI
	var_430_int = 39246; // 0x8f7 PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0x8f8 TObjFunc
	
Label_2298:
	var_431_bool = 0; // 0x8fa PushV
	var_431_bool = 0; // 0x8fb MovB
	var_432_bool = 0; var_433_object = Obj(); // 0x8fc PushV
	var_433_object = var_1_bool; // 0x8fd MovT
	func_6125(var_433_object); // 0x8fe NEW_2
	if(var_432_bool == 0) goto Label_2311; // 0x900 JumpB
	var_434_bool = 0; var_435_object = Obj(); // 0x901 PushV
	var_435_object = var_1_bool; // 0x902 MovT
	func_6199(var_434_bool, var_435_object); // 0x903 NEW_2
	if(var_434_bool == 0) goto Label_2311; // 0x905 JumpB
	var_431_bool = 1; // 0x906 MovB
	
Label_2311:
	if(var_431_bool == 0) goto Label_2317; // 0x907 JumpB
	var_436_int = 537423; // 0x908 PushI
	var_437_int = 39270; // 0x909 PushI
	var_438_int = 39269; // 0x90a PushI
	AddReply(var_436_int, var_437_int, var_438_int); // 0x90b TObjFunc
	
Label_2317:
	var_439_bool = 0; var_440_object = Obj(); // 0x90d PushV
	var_440_object = var_1_bool; // 0x90e MovT
	func_6209(var_439_bool, var_440_object); // 0x90f NEW_2
	if(var_439_bool == 0) goto Label_2327; // 0x911 JumpB
	var_441_int = 537433; // 0x912 PushI
	var_442_int = 39280; // 0x913 PushI
	var_443_int = 39279; // 0x914 PushI
	AddReply(var_441_int, var_442_int, var_443_int); // 0x915 TObjFunc
	
Label_2327:
	var_444_bool = 0; // 0x917 PushV
	var_444_bool = 0; // 0x918 MovB
	var_445_bool = 0; var_446_object = Obj(); // 0x919 PushV
	var_446_object = var_1_bool; // 0x91a MovT
	func_6125(var_446_object); // 0x91b NEW_2
	if(var_445_bool == 0) goto Label_2340; // 0x91d JumpB
	var_447_bool = 0; var_448_object = Obj(); // 0x91e PushV
	var_448_object = var_1_bool; // 0x91f MovT
	func_6219(var_447_bool, var_448_object); // 0x920 NEW_2
	if(var_447_bool == 0) goto Label_2340; // 0x922 JumpB
	var_444_bool = 1; // 0x923 MovB
	
Label_2340:
	if(var_444_bool == 0) goto Label_2346; // 0x924 JumpB
	var_449_int = 537451; // 0x925 PushI
	var_450_int = 39299; // 0x926 PushI
	var_451_int = 39298; // 0x927 PushI
	AddReply(var_449_int, var_450_int, var_451_int); // 0x928 TObjFunc
	
Label_2346:
	var_452_bool = 0; // 0x92a PushV
	var_452_bool = 0; // 0x92b MovB
	var_453_bool = 0; var_454_object = Obj(); // 0x92c PushV
	var_454_object = var_1_bool; // 0x92d MovT
	func_6125(var_454_object); // 0x92e NEW_2
	if(var_453_bool == 0) goto Label_2359; // 0x930 JumpB
	var_455_bool = 0; var_456_object = Obj(); // 0x931 PushV
	var_456_object = var_1_bool; // 0x932 MovT
	func_6229(var_455_bool, var_456_object); // 0x933 NEW_2
	if(var_455_bool == 0) goto Label_2359; // 0x935 JumpB
	var_452_bool = 1; // 0x936 MovB
	
Label_2359:
	if(var_452_bool == 0) goto Label_2365; // 0x937 JumpB
	var_457_int = 537460; // 0x938 PushI
	var_458_int = 39308; // 0x939 PushI
	var_459_int = 39307; // 0x93a PushI
	AddReply(var_457_int, var_458_int, var_459_int); // 0x93b TObjFunc
	
Label_2365:
	var_460_bool = 0; // 0x93d PushV
	var_460_bool = 0; // 0x93e MovB
	var_461_bool = 0; var_462_object = Obj(); // 0x93f PushV
	var_462_object = var_1_bool; // 0x940 MovT
	func_6125(var_462_object); // 0x941 NEW_2
	if(var_461_bool == 0) goto Label_2378; // 0x943 JumpB
	var_463_bool = 0; var_464_object = Obj(); // 0x944 PushV
	var_464_object = var_1_bool; // 0x945 MovT
	func_6249(var_463_bool, var_464_object); // 0x946 NEW_2
	if(var_463_bool == 0) goto Label_2378; // 0x948 JumpB
	var_460_bool = 1; // 0x949 MovB
	
Label_2378:
	if(var_460_bool == 0) goto Label_2384; // 0x94a JumpB
	var_465_int = 537473; // 0x94b PushI
	var_466_int = 39321; // 0x94c PushI
	var_467_int = 39320; // 0x94d PushI
	AddReply(var_465_int, var_466_int, var_467_int); // 0x94e TObjFunc
	
Label_2384:
	var_468_bool = 0; var_469_object = Obj(); // 0x950 PushV
	var_469_object = var_1_bool; // 0x951 MovT
	func_6249(var_468_bool, var_469_object); // 0x952 NEW_2
	if(var_468_bool == 0) goto Label_2394; // 0x954 JumpB
	var_470_int = 537483; // 0x955 PushI
	var_471_int = 39331; // 0x956 PushI
	var_472_int = 39330; // 0x957 PushI
	AddReply(var_470_int, var_471_int, var_472_int); // 0x958 TObjFunc
	
Label_2394:
	var_473_bool = 0; var_474_object = Obj(); // 0x95a PushV
	var_474_object = var_1_bool; // 0x95b MovT
	func_6259(var_473_bool, var_474_object); // 0x95c NEW_2
	if(var_473_bool == 0) goto Label_2404; // 0x95e JumpB
	var_475_int = 537493; // 0x95f PushI
	var_476_int = 39341; // 0x960 PushI
	var_477_int = 39340; // 0x961 PushI
	AddReply(var_475_int, var_476_int, var_477_int); // 0x962 TObjFunc
	
Label_2404:
	var_478_int = 537503; // 0x964 PushI
	var_479_int = -1; // 0x965 PushI
	var_480_int = 39350; // 0x966 PushI
	AddReply(var_478_int, var_479_int, var_480_int); // 0x967 TObjFunc
	var_481_int = 537504; // 0x969 PushI
	var_482_int = -1; // 0x96a PushI
	var_483_int = 39351; // 0x96b PushI
	AddReply(var_481_int, var_482_int, var_483_int); // 0x96c TObjFunc
	goto Label_2417; // 0x96e Jump
}


func_276(var_2_bool, var_23_object)
{
	var_24_bool = 0; var_25_int = 0; var_26_bool = 0; var_27_int = 0; // 0x114 PushV
	var_28_bool = 0; var_29_object = Obj(); // 0x115 PushV
	var_29_object = var_23_object; // 0x116 Mov
	func_5396(var_28_bool, var_29_object); // 0x117 NEW_2
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
	func_5917(var_66_object); // 0x126 NEW_2
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
	func_5926(var_82_object); // 0x134 NEW_2
	var_2_bool = 1; // 0x136 TMovB
	var_147_int = 110; // 0x137 PushI
	var_148_float = 10.0; // 0x138 PushF
	SetTimer(var_147_int, var_148_float); // 0x139 Func
	
Label_315:
	return 4; // 0x13b Return
}


func_5396(var_29_bool, var_30_object)
{
	var_31_int = 0; var_32_int = 0; // 0x1514 PushV
	var_33_bool = 0; var_34_object = Obj(); // 0x1515 PushV
	var_34_object = var_30_object; // 0x1516 Mov
	func_5360(var_33_bool, var_34_object); // 0x1517 NEW_2
	var_50_bool = var_33_bool == 0; // 0x1519 Not
	if(var_50_bool == 0) goto Label_5405; // 0x151a JumpB
	var_29_bool = 0; // 0x151b MovB
	return 2; // 0x151c Return
	
Label_5405:
	var_51_bool = 0; var_52_object = Obj(); var_53_string = ""; // 0x151d PushV
	var_52_object = var_30_object; // 0x151e Mov
	var_53_string = "noaccess"; // 0x151f MovS
	func_5343(var_51_bool, var_52_object, var_53_string); // 0x1520 NEW_2
	var_60_bool = var_51_bool == 0; // 0x1522 Not
	if(var_60_bool == 0) goto Label_5414; // 0x1523 JumpB
	var_29_bool = 1; // 0x1524 MovB
	return 2; // 0x1525 Return
	
Label_5414:
	var_61_string = "noaccess"; // 0x1526 PushS
	GetProperty(var_61_string, var_32_int); // 0x1527 ObjFunc
	var_62_int = 0; // 0x1529 PushI
	var_29_bool = var_32_int == var_62_int; // 0x152a Eq2
	return 2; // 0x152b Return
}


func_6422(var_40_int)
{
	var_41_int = 0; var_42_int = 0; // 0x1916 PushV
	var_43_string = "branch"; // 0x1917 PushS
	GetVariable(var_43_string, var_42_int); // 0x1918 Func
	var_40_int = var_42_int; // 0x191a Mov
	return 2; // 0x191b Return
}


func_6428(var_68_float)
{
	var_69_object = Obj(); var_70_float = 0; var_71_object = Obj(); var_72_float = 0; // 0x191c PushV
	var_73_string = "player"; // 0x191d PushS
	FindActor(var_71_object, var_73_string); // 0x191e Func
	var_74_bool = var_71_object == 0; // 0x1920 Not
	if(var_74_bool == 0) goto Label_6436; // 0x1921 JumpB
	var_68_float = 0; // 0x1922 MovI
	return 4; // 0x1923 Return
	
Label_6436:
	var_75_string = "reputation"; // 0x1924 PushS
	GetProperty(var_75_string, var_72_float); // 0x1925 ObjFunc
	var_68_float = var_72_float; // 0x1927 Mov
	return 4; // 0x1928 Return
}


func_5917(var_65_int)
{
	var_67_bool = 0; // 0x171e PushV
	func_6613(var_67_bool); // 0x171f NEW_2
	if(var_67_bool == 0) goto Label_5924; // 0x1721 JumpB
	var_65_int = 2; // 0x1722 MovI
	goto Label_5925; // 0x1723 Jump
	
Label_5925:
	return 0; // 0x1725 Return
	
Label_5924:
	var_65_int = 0; // 0x1724 MovI
}


func_1311(var_2_bool)
{
	Stop(); // 0x51f Func
	var_23_int = 120; // 0x521 PushI
	KillTimer(var_23_int); // 0x522 Func
	var_2_bool = 1; // 0x524 TMovB
	return 0; // 0x525 Return
}


func_5926(var_82_object)
{
	var_83_object = Obj(); // 0x1727 PushV
	var_83_object = var_82_object; // 0x1728 Mov
	TaskCall(3); // 0x1729 TaskCall
	func_659(var_84_object, var_83_object); // 0x172a NEW_2
	TaskReturn(); // 0x172b TaskReturn
	return 0; // 0x172d Return
}


func_6442(var_39_object)
{
	var_40_int = 0; // 0x192b PushV
	func_6422(var_40_int); // 0x192c NEW_2
	var_44_int = 1; // 0x192e PushI
	var_45_bool = var_40_int == var_44_int; // 0x192f Eq
	if(var_45_bool == 0) goto Label_6452; // 0x1930 JumpB
	WorkWithCorpse(var_39_object); // 0x1931 Func
	goto Label_6454; // 0x1933 Jump
	
Label_6454:
	return 0; // 0x1936 Return
	
Label_6452:
	Barter(var_39_object); // 0x1934 Func
}


func_5420()
{
	var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); // 0x152c PushV
	GetPosition(var_102_cvector); // 0x152d ObjFunc
	GetPosition(var_103_cvector); // 0x152f Func
	var_104_cvector = var_102_cvector - var_103_cvector; // 0x1531 Sub2
	var_105_float = GetByIndex(var_104_cvector, 0); // 0x1532 PushE
	var_106_float = GetByIndex(var_104_cvector, 2); // 0x1533 PushE
	RotateAsync(var_105_float, var_106_float); // 0x1534 Func
	return 6; // 0x1536 Return
}


func_5934(var_34_int, var_35_object)
{
	var_36_bool = 0; var_37_object = Obj(); // 0x172f PushV
	var_37_object = var_35_object; // 0x1730 Mov
	func_5396(var_36_bool, var_37_object); // 0x1731 NEW_2
	if(var_36_bool == 0) goto Label_5942; // 0x1733 JumpB
	var_34_int = 2; // 0x1734 MovI
	goto Label_5943; // 0x1735 Jump
	
Label_5943:
	return 0; // 0x1737 Return
	
Label_5942:
	var_34_int = 0; // 0x1736 MovI
}


func_1327(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x52f PushV
	GetDirection(var_77_cvector); // 0x530 Func
	var_79_cvector = CVector(0,0,0); var_80_object = Obj(); // 0x532 PushV
	var_80_object = var_0_bool; // 0x533 MovT
	func_5323(var_80_object); // 0x534 NEW_2
	var_78_cvector = var_79_cvector; // 0x535 Mov
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x537 PushV
	var_86_cvector = var_77_cvector; // 0x538 Mov
	var_87_cvector = var_78_cvector; // 0x539 Mov
	func_5680(var_85_float, var_86_cvector, var_87_cvector); // 0x53a NEW_2
	var_93_float = -0.34202; // 0x53c PushF
	var_74_bool = var_85_float >= var_93_float; // 0x53d GE2
	return 4; // 0x53e Return
}


func_5431(var_105_bool)
{
	var_106_bool = 0; var_107_bool = 0; // 0x1537 PushV
	IsLoaded(var_107_bool); // 0x1538 Func
	var_105_bool = var_107_bool; // 0x153a Mov
	return 2; // 0x153b Return
}


func_5944(var_76_object)
{
	var_77_object = Obj(); // 0x1739 PushV
	var_77_object = var_76_object; // 0x173a Mov
	TaskCall(4); // 0x173b TaskCall
	func_934(var_77_object); // 0x173c NEW_2
	TaskReturn(); // 0x173d TaskReturn
	return 0; // 0x173f Return
}


func_6455(var_24_bool)
{
	var_25_int = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_bool = 0; var_30_int = 0; // 0x1937 PushV
	var_31_int = 0; // 0x1938 PushI
	ClearSubContainer(var_31_int); // 0x1939 Func
	var_32_int = 0; // 0x193b PushV
	func_5740(var_32_int); // 0x193c NEW_2
	var_30_int = var_32_int; // 0x193d Mov
	var_38_bool = var_24_bool; // 0x193f Push
	if(var_38_bool == 0) goto Label_6509; // 0x1940 JumpB
	var_39_string = ""; var_40_int = 0; var_41_int = 0; var_42_int = 0; // 0x1941 PushV
	var_39_string = "alpha_pills"; // 0x1942 MovS
	var_40_int = 1; // 0x1943 MovI
	var_41_int = 2; // 0x1944 MovI
	var_42_int = 4; // 0x1945 MovI
	func_5644(var_39_string, var_40_int, var_41_int, var_42_int); // 0x1946 NEW_2
	var_55_string = ""; var_56_int = 0; var_57_int = 0; var_58_int = 0; // 0x1948 PushV
	var_55_string = "meradorm"; // 0x1949 MovS
	var_56_int = 2; // 0x194a MovI
	var_57_int = 3; // 0x194b MovI
	var_58_int = 3; // 0x194c MovI
	func_5644(var_55_string, var_56_int, var_57_int, var_58_int); // 0x194d NEW_2
	var_59_int = 3; // 0x194f PushI
	var_60_bool = var_30_int >= var_59_int; // 0x1950 GE
	if(var_60_bool == 0) goto Label_6488; // 0x1951 JumpB
	var_61_string = ""; var_62_int = 0; var_63_int = 0; // 0x1952 PushV
	var_61_string = "beta_pills"; // 0x1953 MovS
	var_62_int = 1; // 0x1954 MovI
	var_63_int = 4; // 0x1955 MovI
	func_5633(var_61_string, var_62_int, var_63_int); // 0x1956 NEW_2
	
Label_6488:
	var_70_int = 8; // 0x1958 PushI
	var_71_bool = var_30_int >= var_70_int; // 0x1959 GE
	if(var_71_bool == 0) goto Label_6499; // 0x195a JumpB
	var_72_string = ""; var_73_int = 0; var_74_int = 0; var_75_int = 0; // 0x195b PushV
	var_72_string = "monomicin"; // 0x195c MovS
	var_73_int = 1; // 0x195d MovI
	var_74_int = 2; // 0x195e MovI
	var_75_int = 2; // 0x195f MovI
	func_5644(var_72_string, var_73_int, var_74_int, var_75_int); // 0x1960 NEW_2
	goto Label_6508; // 0x1962 Jump
	
Label_6508:
	goto Label_6554; // 0x196c Jump
	
Label_6554:
	return 6; // 0x199a Return
	
Label_6499:
	var_76_int = 4; // 0x1963 PushI
	var_77_bool = var_30_int >= var_76_int; // 0x1964 GE
	if(var_77_bool == 0) goto Label_6508; // 0x1965 JumpB
	var_78_string = ""; var_79_int = 0; var_80_int = 0; // 0x1966 PushV
	var_78_string = "monomicin"; // 0x1967 MovS
	var_79_int = 1; // 0x1968 MovI
	var_80_int = 2; // 0x1969 MovI
	func_5633(var_78_string, var_79_int, var_80_int); // 0x196a NEW_2
	
Label_6509:
	var_81_string = ""; var_82_int = 0; var_83_int = 0; // 0x196d PushV
	var_81_string = "lockpick"; // 0x196e MovS
	var_82_int = 1; // 0x196f MovI
	var_83_int = 4; // 0x1970 MovI
	func_5633(var_81_string, var_82_int, var_83_int); // 0x1971 NEW_2
	var_84_string = ""; var_85_int = 0; var_86_int = 0; // 0x1973 PushV
	var_84_string = "rifle_ammo"; // 0x1974 MovS
	var_85_int = 1; // 0x1975 MovI
	var_86_int = 2; // 0x1976 MovI
	func_5633(var_84_string, var_85_int, var_86_int); // 0x1977 NEW_2
	var_87_string = ""; var_88_int = 0; var_89_int = 0; // 0x1979 PushV
	var_87_string = "revolver_ammo"; // 0x197a MovS
	var_88_int = 1; // 0x197b MovI
	var_89_int = 2; // 0x197c MovI
	func_5633(var_87_string, var_88_int, var_89_int); // 0x197d NEW_2
	var_90_string = ""; var_91_int = 0; var_92_int = 0; var_93_int = 0; // 0x197f PushV
	var_90_string = "samopal_ammo"; // 0x1980 MovS
	var_91_int = 1; // 0x1981 MovI
	var_92_int = 2; // 0x1982 MovI
	var_93_int = 2; // 0x1983 MovI
	func_5644(var_90_string, var_91_int, var_92_int, var_93_int); // 0x1984 NEW_2
	var_94_int = 8; // 0x1986 PushI
	var_95_bool = var_30_int >= var_94_int; // 0x1987 GE
	if(var_95_bool == 0) goto Label_6545; // 0x1988 JumpB
	var_96_string = ""; var_97_int = 0; var_98_int = 0; var_99_int = 0; // 0x1989 PushV
	var_96_string = "monomicin"; // 0x198a MovS
	var_97_int = 1; // 0x198b MovI
	var_98_int = 2; // 0x198c MovI
	var_99_int = 2; // 0x198d MovI
	func_5644(var_96_string, var_97_int, var_98_int, var_99_int); // 0x198e NEW_2
	goto Label_6554; // 0x1990 Jump
	
Label_6545:
	var_100_int = 4; // 0x1991 PushI
	var_101_bool = var_30_int >= var_100_int; // 0x1992 GE
	if(var_101_bool == 0) goto Label_6554; // 0x1993 JumpB
	var_102_string = ""; var_103_int = 0; var_104_int = 0; // 0x1994 PushV
	var_102_string = "monomicin"; // 0x1995 MovS
	var_103_int = 1; // 0x1996 MovI
	var_104_int = 2; // 0x1997 MovI
	func_5633(var_102_string, var_103_int, var_104_int); // 0x1998 NEW_2
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


func_5436(var_58_bool, var_60_float)
{
	var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0; var_69_bool = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_bool = 0; var_78_bool = 0; // 0x153c PushV
	GetPosition(var_71_cvector); // 0x153d ObjFunc
	GetEyesHeight(var_70_float); // 0x153f ObjFunc
	var_79_float = GetByIndex(var_71_cvector, 1); // 0x1541 PushE
	var_79_float = var_79_float + var_70_float; // 0x1542 Add2
	SetByIndex(var_71_cvector, 1) = var_79_float; // 0x1543 PopE
	GetPosition(var_72_cvector); // 0x1544 Func
	GetEyesHeight(var_70_float); // 0x1546 Func
	var_80_float = GetByIndex(var_72_cvector, 1); // 0x1548 PushE
	var_80_float = var_80_float + var_70_float; // 0x1549 Add2
	SetByIndex(var_72_cvector, 1) = var_80_float; // 0x154a PopE
	var_73_cvector = var_71_cvector - var_72_cvector; // 0x154b Sub2
	var_81_float = GetByIndex(var_73_cvector, 1); // 0x154c PushE
	var_81_float = 0; // 0x154d MovI
	SetByIndex(var_73_cvector, 1) = var_81_float; // 0x154e PopE
	var_82_int = var_73_cvector | var_73_cvector; // 0x154f Or
	var_83_float = sqrt(var_82_int); // 0x1550 Sqrt
	var_73_cvector = var_73_cvector / var_73_cvector; // 0x1551 Div2
	var_74_cvector = -var_73_cvector; // 0x1552 Neg2
	var_84_float = var_73_cvector * var_60_float; // 0x1553 Mult
	var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); // 0x1554 PushV
	var_87_cvector = CVector(0.0, 1.0, 0.0); // 0x1555 PushVec
	var_86_cvector = var_74_cvector ^ var_87_cvector; // 0x1556 Xor2
	func_5665(var_85_cvector, var_86_cvector); // 0x1557 NEW_2
	var_93_int = 25; // 0x1559 PushI
	var_94_float = var_85_cvector * var_93_int; // 0x155a Mult
	var_95_int = var_84_float + var_94_float; // 0x155b Add
	var_96_cvector = CVector(0.0, 10.0, 0.0); // 0x155c PushVec
	var_75_cvector = var_95_int - var_96_cvector; // 0x155d Sub2
	var_76_cvector = var_72_cvector + var_75_cvector; // 0x155e Add2
	IsOverrideActive(var_77_bool); // 0x155f Func
	var_97_bool = var_77_bool; // 0x1561 Push
	if(var_97_bool == 0) goto Label_5477; // 0x1562 JumpB
	var_58_bool = 0; // 0x1563 MovB
	return 18; // 0x1564 Return
	
Label_5477:
	StopWorld(); // 0x1565 Func
	var_98_bool = 1; // 0x1567 PushB
	CameraTransit(var_76_cvector, var_74_cvector, var_98_bool); // 0x1568 Func
	var_99_float = GetByIndex(var_75_cvector, 0); // 0x156a PushE
	var_100_float = GetByIndex(var_75_cvector, 2); // 0x156b PushE
	Rotate(var_99_float, var_100_float); // 0x156c Func
	var_101_bool = 0; // 0x156e PushV
	func_6563(var_101_bool); // 0x156f NEW_2
	if(var_101_bool == 0) goto Label_5491; // 0x1571 JumpB
	goto Label_5499; // 0x1572 Jump
	
Label_5499:
	CameraWaitForPlayFinish(); // 0x157b Func
	ResumeWorld(); // 0x157d Func
	var_58_bool = 1; // 0x157f MovB
	return 18; // 0x1580 Return
	
Label_5491:
	var_102_string = "head"; // 0x1573 PushS
	HasAnimationTrack(var_78_bool, var_102_string); // 0x1574 Func
	var_103_bool = var_78_bool; // 0x1576 Push
	if(var_103_bool == 0) goto Label_5499; // 0x1577 JumpB
	var_104_string = "head"; // 0x1578 PushS
	LookAsyncCamera(var_104_string); // 0x1579 Func
}


func_5952(var_74_int, var_75_object)
{
	var_77_bool = 0; var_78_object = Obj(); // 0x1741 PushV
	var_78_object = var_75_object; // 0x1742 Mov
	func_5396(var_77_bool, var_78_object); // 0x1743 NEW_2
	if(var_77_bool == 0) goto Label_5960; // 0x1745 JumpB
	var_74_int = 2; // 0x1746 MovI
	goto Label_5961; // 0x1747 Jump
	
Label_5961:
	return 0; // 0x1749 Return
	
Label_5960:
	var_74_int = 0; // 0x1748 MovI
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
	func_5665(var_52_cvector, var_53_cvector); // 0x550 NEW_2
	var_59_float = 0.75; // 0x552 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x553 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x554 Add2
	func_5665(var_50_cvector, var_51_cvector); // 0x555 NEW_2
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


func_5962(var_111_object)
{
	var_112_object = Obj(); // 0x174b PushV
	var_112_object = var_111_object; // 0x174c Mov
	TaskCall(5); // 0x174d TaskCall
	func_1186(var_113_object, var_114_cvector, var_115_bool, var_112_object); // 0x174e NEW_2
	TaskReturn(); // 0x174f TaskReturn
	return 0; // 0x1751 Return
}


func_5970(var_31_bool, var_32_object, var_33_object, var_34_float)
{
	var_35_string = ""; var_36_bool = 0; var_37_string = ""; var_38_bool = 0; // 0x1752 PushV
	var_39_bool = 0; var_40_object = Obj(); var_41_string = ""; // 0x1753 PushV
	var_40_object = var_33_object; // 0x1754 Mov
	var_41_string = "class"; // 0x1755 MovS
	func_5343(var_39_bool, var_40_object, var_41_string); // 0x1756 NEW_2
	var_48_bool = var_39_bool == 0; // 0x1758 Not
	if(var_48_bool == 0) goto Label_5980; // 0x1759 JumpB
	var_31_bool = 0; // 0x175a MovB
	return 4; // 0x175b Return
	
Label_5980:
	var_49_string = "class"; // 0x175c PushS
	GetProperty(var_49_string, var_37_string); // 0x175d ObjFunc
	var_50_string = "rat"; // 0x175f PushS
	var_51_bool = var_37_string == var_50_string; // 0x1760 Eq
	if(var_51_bool == 0) goto Label_5989; // 0x1761 JumpB
	var_31_bool = 0; // 0x1762 MovB
	return 4; // 0x1763 Return
	
Label_5989:
	var_52_string = "rat_big"; // 0x1765 PushS
	var_53_bool = var_37_string == var_52_string; // 0x1766 Eq
	if(var_53_bool == 0) goto Label_5995; // 0x1767 JumpB
	var_31_bool = 0; // 0x1768 MovB
	return 4; // 0x1769 Return
	
Label_5995:
	var_54_string = "dog"; // 0x176b PushS
	var_55_bool = var_37_string == var_54_string; // 0x176c Eq
	if(var_55_bool == 0) goto Label_6000; // 0x176d JumpB
	var_31_bool = 0; // 0x176e MovB
	return 4; // 0x176f Return
	
Label_6000:
	CanSee(var_38_bool, var_32_object); // 0x1770 Func
	var_56_bool = 0; // 0x1772 PushV
	var_56_bool = 1; // 0x1773 MovB
	var_57_bool = var_38_bool; // 0x1774 Push
	if(var_57_bool == 0) goto Label_6014; // 0x1775 JumpB
	var_58_float = 0; var_59_object = Obj(); // 0x1776 PushV
	var_59_object = var_32_object; // 0x1777 Mov
	func_5330(var_59_object); // 0x1778 NEW_2
	var_66_float = var_34_float * var_34_float; // 0x177a Mult
	var_67_bool = var_58_float <= var_66_float; // 0x177b LE
	if(var_67_bool == 0) goto Label_6014; // 0x177c JumpB
	var_56_bool = 0; // 0x177d MovB
	
Label_6014:
	if(var_56_bool == 0) goto Label_6017; // 0x177e JumpB
	var_31_bool = 1; // 0x177f MovB
	return 4; // 0x1780 Return
	
Label_6017:
	CanSee(var_38_bool, var_33_object); // 0x1781 Func
	var_68_bool = 0; // 0x1783 PushV
	var_68_bool = 1; // 0x1784 MovB
	var_69_bool = var_38_bool; // 0x1785 Push
	if(var_69_bool == 0) goto Label_6031; // 0x1786 JumpB
	var_70_float = 0; var_71_object = Obj(); // 0x1787 PushV
	var_71_object = var_33_object; // 0x1788 Mov
	func_5330(var_71_object); // 0x1789 NEW_2
	var_72_float = var_34_float * var_34_float; // 0x178b Mult
	var_73_bool = var_70_float <= var_72_float; // 0x178c LE
	if(var_73_bool == 0) goto Label_6031; // 0x178d JumpB
	var_68_bool = 0; // 0x178e MovB
	
Label_6031:
	if(var_68_bool == 0) goto Label_6034; // 0x178f JumpB
	var_31_bool = 1; // 0x1790 MovB
	return 4; // 0x1791 Return
	
Label_6034:
	var_31_bool = 0; // 0x1792 MovB
	return 4; // 0x1793 Return
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
	func_5318(var_97_cvector); // 0x586 NEW_2
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
	func_5318(var_109_cvector); // 0x5a1 NEW_2
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


func_375(var_124_float)
{
	var_125_float = 0; var_126_float = 0; // 0x177 PushV
	GetCameraFarDistance(var_126_float); // 0x178 Func
	var_124_float = var_126_float; // 0x17a Mov
	return 2; // 0x17b Return
}


func_5505()
{
	var_486_bool = 0; var_487_bool = 0; // 0x1581 PushV
	var_488_bool = 1; // 0x1582 PushB
	CameraSwitchToNormal(var_488_bool); // 0x1583 Func
	var_489_bool = 0; // 0x1585 PushV
	func_6563(var_489_bool); // 0x1586 NEW_2
	if(var_489_bool == 0) goto Label_5514; // 0x1588 JumpB
	goto Label_5522; // 0x1589 Jump
	
Label_5522:
	return 2; // 0x1592 Return
	
Label_5514:
	var_490_string = "head"; // 0x158a PushS
	HasAnimationTrack(var_487_bool, var_490_string); // 0x158b Func
	var_491_bool = var_487_bool; // 0x158d Push
	if(var_491_bool == 0) goto Label_5522; // 0x158e JumpB
	var_492_string = "head"; // 0x158f PushS
	UnlookAsync(var_492_string); // 0x1590 Func
}


func_387(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x183 TMovB
	var_1_bool = 0; // 0x184 TMovB
	Stop(); // 0x185 Func
	StopGroup0(); // 0x187 Func
	return 0; // 0x189 Return
}


func_394(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x18a TMovB
	var_1_bool = 1; // 0x18b TMovB
	Stop(); // 0x18c Func
	StopGroup0(); // 0x18e Func
	return 0; // 0x190 Return
}


func_2447(var_2_bool, var_75_string)
{
	var_76_bool = 0; // 0x990 PushV
	func_6563(var_76_bool); // 0x991 NEW_2
	var_77_bool = var_76_bool == 0; // 0x993 Not
	if(var_77_bool == 0) goto Label_2454; // 0x994 JumpB
	return 0; // 0x995 Return
	
Label_2454:
	var_78_bool = var_75_string == var_2_bool; // 0x996 Eq
	if(var_78_bool == 0) goto Label_2457; // 0x997 JumpB
	return 0; // 0x998 Return
	
Label_2457:
	var_79_string = ""; var_80_bool = 0; // 0x999 PushV
	var_79_string = var_75_string; // 0x99a Mov
	var_81_string = ""; // 0x99b PushS
	var_82_bool = var_75_string == var_81_string; // 0x99c Eq
	if(var_82_bool == 0) goto Label_2464; // 0x99d JumpB
	var_80_bool = 0; // 0x99e MovB
	goto Label_2465; // 0x99f Jump
	
Label_2465:
	func_5600(var_79_string, var_80_bool); // 0x9a1 NEW_2
	var_2_bool = var_75_string; // 0x9a3 TMov
	return 0; // 0x9a4 Return
	
Label_2464:
	var_80_bool = 1; // 0x9a0 MovB
}


func_401(var_134_bool)
{
	var_134_bool = 0; // 0x191 MovB
	return 0; // 0x192 Return
}


func_403(var_128_object, var_129_cvector)
{
	var_130_object = Obj(); var_131_object = Obj(); // 0x193 PushV
	FindShiftedPathTo(var_131_object, var_129_cvector); // 0x194 Func
	var_128_object = var_131_object; // 0x196 Mov
	return 2; // 0x197 Return
}


func_6036(var_25_int)
{
	var_25_int = 0; // 0x1795 MovI
	return 0; // 0x1796 Return
}


func_5523(var_494_bool, var_495_object)
{
	var_496_bool = 0; var_497_object = Obj(); var_498_float = 0; // 0x1594 PushV
	var_497_object = var_495_object; // 0x1595 Mov
	var_498_float = 70; // 0x1596 MovI
	func_5531(var_497_object, var_498_float); // 0x1597 NEW_2
	var_494_bool = var_496_bool; // 0x1598 Mov
	return 0; // 0x159a Return
}


func_6039()
{
	return 0; // 0x1798 Return
}


func_6041(var_209_int)
{
	var_209_int = 0; // 0x179a MovI
	return 0; // 0x179b Return
}


func_6555(var_107_int)
{
	var_107_int = 515559; // 0x199b MovI
	return 0; // 0x199c Return
}


func_6044()
{
	return 0; // 0x179d Return
}


func_6557(var_106_int)
{
	var_106_int = 503344; // 0x199d MovI
	return 0; // 0x199e Return
}


func_6046(var_25_int)
{
	var_25_int = 2; // 0x179f MovI
	return 0; // 0x17a0 Return
}


func_6559(var_108_string)
{
	var_108_string = "ui/NPC_Citizen1.png"; // 0x199f MovS
	return 0; // 0x19a0 Return
}


func_5531(var_496_bool, var_498_float)
{
	var_499_float = 0; var_500_cvector = CVector(0,0,0); var_501_cvector = CVector(0,0,0); var_502_cvector = CVector(0,0,0); var_503_cvector = CVector(0,0,0); var_504_cvector = CVector(0,0,0); var_505_cvector = CVector(0,0,0); var_506_bool = 0; var_507_float = 0; var_508_cvector = CVector(0,0,0); var_509_cvector = CVector(0,0,0); var_510_cvector = CVector(0,0,0); var_511_cvector = CVector(0,0,0); var_512_cvector = CVector(0,0,0); var_513_cvector = CVector(0,0,0); var_514_bool = 0; // 0x159b PushV
	GetPosition(var_508_cvector); // 0x159c ObjFunc
	GetEyesHeight(var_507_float); // 0x159e ObjFunc
	var_515_float = GetByIndex(var_508_cvector, 1); // 0x15a0 PushE
	var_515_float = var_515_float + var_507_float; // 0x15a1 Add2
	SetByIndex(var_508_cvector, 1) = var_515_float; // 0x15a2 PopE
	GetPosition(var_509_cvector); // 0x15a3 Func
	GetEyesHeight(var_507_float); // 0x15a5 Func
	var_516_float = GetByIndex(var_509_cvector, 1); // 0x15a7 PushE
	var_516_float = var_516_float + var_507_float; // 0x15a8 Add2
	SetByIndex(var_509_cvector, 1) = var_516_float; // 0x15a9 PopE
	var_510_cvector = var_508_cvector - var_509_cvector; // 0x15aa Sub2
	var_517_float = GetByIndex(var_510_cvector, 1); // 0x15ab PushE
	var_517_float = 0; // 0x15ac MovI
	SetByIndex(var_510_cvector, 1) = var_517_float; // 0x15ad PopE
	var_518_int = var_510_cvector | var_510_cvector; // 0x15ae Or
	var_519_float = sqrt(var_518_int); // 0x15af Sqrt
	var_510_cvector = var_510_cvector / var_510_cvector; // 0x15b0 Div2
	var_511_cvector = -var_510_cvector; // 0x15b1 Neg2
	var_520_float = var_510_cvector * var_498_float; // 0x15b2 Mult
	var_521_cvector = CVector(0.0, 10.0, 0.0); // 0x15b3 PushVec
	var_512_cvector = var_520_float - var_521_cvector; // 0x15b4 Sub2
	var_513_cvector = var_509_cvector + var_512_cvector; // 0x15b5 Add2
	IsOverrideActive(var_514_bool); // 0x15b6 Func
	var_522_bool = var_514_bool; // 0x15b8 Push
	if(var_522_bool == 0) goto Label_5564; // 0x15b9 JumpB
	var_496_bool = 0; // 0x15ba MovB
	return 16; // 0x15bb Return
	
Label_5564:
	StopWorld(); // 0x15bc Func
	var_523_bool = 1; // 0x15be PushB
	CameraTransit(var_513_cvector, var_511_cvector, var_523_bool); // 0x15bf Func
	var_524_float = GetByIndex(var_512_cvector, 0); // 0x15c1 PushE
	var_525_float = GetByIndex(var_512_cvector, 2); // 0x15c2 PushE
	Rotate(var_524_float, var_525_float); // 0x15c3 Func
	CameraWaitForPlayFinish(); // 0x15c5 Func
	ResumeWorld(); // 0x15c7 Func
	var_496_bool = 1; // 0x15c9 MovB
	return 16; // 0x15ca Return
}


func_6049(var_33_object)
{
	var_34_object = Obj(); // 0x17a2 PushV
	var_34_object = var_33_object; // 0x17a3 Mov
	func_6573(var_33_object, var_34_object); // 0x17a4 NEW_2
	return 0; // 0x17a6 Return
}


func_6561(var_109_string)
{
	var_109_string = "ui/NPC_Citizen1_b.png"; // 0x19a1 MovS
	return 0; // 0x19a2 Return
}


func_6563(var_25_bool)
{
	var_25_bool = 0; // 0x19a3 MovB
	return 0; // 0x19a4 Return
}


func_6565()
{
	var_23_bool = GlobalVars[0]; // 0x19a5 PushGE
	var_23_bool = 0; // 0x19a6 MovB
	GlobalVars[0] = var_23_bool; // 0x19a7 PopGE
	var_24_bool = 0; // 0x19a8 PushV
	var_24_bool = 0; // 0x19a9 MovB
	func_6455(var_24_bool); // 0x19aa NEW_2
	return 0; // 0x19ac Return
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


func_6055()
{
	return 0; // 0x17a7 Return
}


func_6056(var_28_bool, var_29_object)
{
	var_30_bool = 0; var_31_bool = 0; // 0x17a8 PushV
	CanSee(var_31_bool, var_29_object); // 0x17a9 Func
	var_28_bool = var_31_bool; // 0x17ab Mov
	return 2; // 0x17ac Return
}


func_6061(var_40_object)
{
	var_41_object = Obj(); // 0x17ae PushV
	var_41_object = var_40_object; // 0x17af Mov
	TaskCall(6); // 0x17b0 TaskCall
	func_1380(var_42_object, var_43_cvector, var_44_bool, var_41_object); // 0x17b1 NEW_2
	TaskReturn(); // 0x17b2 TaskReturn
	return 0; // 0x17b4 Return
}


func_6573(var_34_object, var_49_object)
{
	var_35_bool = 0; var_36_bool = 0; // 0x19ad PushV
	var_37_bool = GlobalVars[0]; // 0x19ae PushGE
	if(var_37_bool == 0) goto Label_6586; // 0x19af JumpB
	IsOverrideActive(var_36_bool); // 0x19b0 Func
	var_38_bool = var_36_bool == 0; // 0x19b2 Not
	if(var_38_bool == 0) goto Label_6584; // 0x19b3 JumpB
	var_39_object = Obj(); // 0x19b4 PushV
	var_39_object = var_34_object; // 0x19b5 Mov
	func_6442(var_39_object); // 0x19b6 NEW_2
	
Label_6584:
	return 2; // 0x19b8 Return
	
Label_6586:
	var_46_int = 1000; // 0x19ba PushI
	var_47_int = 0; var_48_object = Obj(); // 0x19bb PushV
	var_48_object = var_34_object; // 0x19bc Mov
	TaskCall(8); // 0x19bd TaskCall
	func_1731(var_49_object, var_47_int, var_48_object); // 0x19be NEW_2
	TaskReturn(); // 0x19bf TaskReturn
	var_493_bool = var_46_int == var_49_object; // 0x19c1 Eq
	if(var_493_bool == 0) goto Label_6612; // 0x19c2 JumpB
	var_494_bool = 0; var_495_object = Obj(); // 0x19c3 PushV
	var_495_object = var_34_object; // 0x19c4 Mov
	func_5523(var_494_bool, var_495_object); // 0x19c5 NEW_2
	var_526_bool = var_494_bool == 0; // 0x19c7 Not
	if(var_526_bool == 0) goto Label_6602; // 0x19c8 JumpB
	return 2; // 0x19c9 Return
	
Label_6602:
	var_527_object = Obj(); // 0x19ca PushV
	var_527_object = var_34_object; // 0x19cb Mov
	TaskCall(0); // 0x19cc TaskCall
	func_0(var_527_object); // 0x19cd NEW_2
	TaskReturn(); // 0x19ce TaskReturn
	var_534_object = Obj(); // 0x19d0 PushV
	var_534_object = var_34_object; // 0x19d1 Mov
	func_5579(); // 0x19d2 NEW_2
	
Label_6612:
	return 2; // 0x19d4 Return
}


func_6069(var_37_bool, var_38_object)
{
	var_39_bool = 0; var_40_bool = 0; // 0x17b5 PushV
	CanSee(var_40_bool, var_38_object); // 0x17b6 Func
	var_37_bool = 1; // 0x17b8 MovB
	var_41_bool = var_40_bool; // 0x17b9 Push
	if(var_41_bool == 0) goto Label_6083; // 0x17ba JumpB
	var_42_float = 0; var_43_object = Obj(); // 0x17bb PushV
	var_43_object = var_38_object; // 0x17bc Mov
	func_5330(var_43_object); // 0x17bd NEW_2
	var_50_int = 4000000; // 0x17bf PushI
	var_51_bool = var_42_float <= var_50_int; // 0x17c0 LE
	if(var_51_bool == 0) goto Label_6083; // 0x17c1 JumpB
	var_37_bool = 0; // 0x17c2 MovB
	
Label_6083:
	return 2; // 0x17c3 Return
}


func_6084(var_139_object)
{
	var_140_object = Obj(); // 0x17c5 PushV
	var_140_object = var_139_object; // 0x17c6 Mov
	TaskCall(7); // 0x17c7 TaskCall
	func_1574(var_141_object, var_142_cvector, var_143_bool, var_140_object); // 0x17c8 NEW_2
	TaskReturn(); // 0x17c9 TaskReturn
	return 0; // 0x17cb Return
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
	func_5665(var_52_cvector, var_53_cvector); // 0x3d3 NEW_2
	var_59_float = 0.75; // 0x3d5 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x3d6 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x3d7 Add2
	func_5665(var_50_cvector, var_51_cvector); // 0x3d8 NEW_2
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


func_5579()
{
	var_535_bool = 1; // 0x15cc PushB
	CameraSwitchToNormal(var_535_bool); // 0x15cd Func
	return 0; // 0x15cf Return
}


func_6092(var_54_bool, var_55_object)
{
	var_56_bool = 0; var_57_object = Obj(); // 0x17cd PushV
	var_57_object = var_55_object; // 0x17ce Mov
	func_6069(var_56_bool, var_57_object); // 0x17cf NEW_2
	var_54_bool = var_56_bool; // 0x17d0 Mov
	return 0; // 0x17d2 Return
}


func_5584(var_330_string)
{
	var_331_bool = 0; var_332_float = 0; var_333_float = 0; var_334_bool = 0; var_335_float = 0; var_336_float = 0; // 0x15d0 PushV
	lshHasAnimation(var_334_bool, var_330_string); // 0x15d1 Func
	var_337_bool = var_334_bool; // 0x15d3 Push
	if(var_337_bool == 0) goto Label_5595; // 0x15d4 JumpB
	lshGetAnimTimes(var_330_string, var_335_float, var_336_float); // 0x15d5 Func
	var_338_bool = 0; // 0x15d7 PushB
	lshPlayAnimation(var_335_float, var_336_float, var_338_bool); // 0x15d8 Func
	goto Label_5599; // 0x15da Jump
	
Label_5599:
	return 6; // 0x15df Return
	
Label_5595:
	var_339_string = "Can't find lsh animation : "; // 0x15db PushS
	var_340_int = var_339_string + var_330_string; // 0x15dc Add
	Trace(var_340_int); // 0x15dd Func
}


func_6099(var_207_object)
{
	var_208_object = Obj(); // 0x17d4 PushV
	var_208_object = var_207_object; // 0x17d5 Mov
	func_6084(var_208_object); // 0x17d6 NEW_2
	return 0; // 0x17d8 Return
}


func_6613(var_67_bool)
{
	var_68_float = 0; // 0x19d5 PushV
	func_6428(var_68_float); // 0x19d6 NEW_2
	var_76_float = 0.6; // 0x19d8 PushF
	var_67_bool = var_68_float > var_76_float; // 0x19d9 GT2
	return 0; // 0x19da Return
}


func_6105(var_30_bool)
{
	var_30_bool = 0; // 0x17da MovB
	return 0; // 0x17db Return
}


func_6619(var_27_bool, var_28_object, var_29_object)
{
	var_31_bool = 0; var_32_object = Obj(); var_33_object = Obj(); var_34_float = 0; // 0x19dc PushV
	var_32_object = var_28_object; // 0x19dd Mov
	var_33_object = var_29_object; // 0x19de Mov
	var_34_float = 700.0; // 0x19df MovF
	func_5970(var_31_bool, var_32_object, var_33_object, var_34_float); // 0x19e0 NEW_2
	var_27_bool = var_31_bool; // 0x19e1 Mov
	return 0; // 0x19e3 Return
}


func_6108()
{
	return 0; // 0x17dd Return
}


func_6110()
{
	var_47_string = "d1GhostCatHDPathologic"; // 0x17df PushS
	var_48_int = 1; // 0x17e0 PushI
	SetVariable(var_47_string, var_48_int); // 0x17e1 Func
	var_49_object = Obj(); var_50_string = ""; // 0x17e3 PushV
	var_50_string = "quest_ghost_cat"; // 0x17e4 MovS
	func_5729(var_49_object, var_50_string); // 0x17e5 NEW_2
	return 0; // 0x17e7 Return
}


func_5600(var_79_string, var_80_bool)
{
	var_83_bool = 0; var_84_float = 0; var_85_float = 0; var_86_bool = 0; var_87_float = 0; var_88_float = 0; // 0x15e0 PushV
	lshHasAnimation(var_86_bool, var_79_string); // 0x15e1 Func
	var_89_bool = var_86_bool; // 0x15e3 Push
	if(var_89_bool == 0) goto Label_5610; // 0x15e4 JumpB
	lshGetAnimTimes(var_79_string, var_87_float, var_88_float); // 0x15e5 Func
	lshPlayAnimation(var_87_float, var_88_float, var_80_bool); // 0x15e7 Func
	goto Label_5614; // 0x15e9 Jump
	
Label_5614:
	return 6; // 0x15ee Return
	
Label_5610:
	var_90_string = "Can't find lsh animation : "; // 0x15ea PushS
	var_91_int = var_90_string + var_79_string; // 0x15eb Add
	Trace(var_91_int); // 0x15ec Func
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
	func_5318(var_140_cvector); // 0x409 NEW_2
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
	func_5318(var_152_cvector); // 0x424 NEW_2
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


func_6120()
{
	var_30_int = 1000; // 0x17e9 PushI
	SetReturnValue(var_30_int); // 0x17ea ObjFunc
	return 0; // 0x17ec Return
}


func_6125(var_275_bool)
{
	var_277_int = 0; var_278_string = ""; // 0x17ee PushV
	var_278_string = "branch"; // 0x17ef MovS
	func_5724(var_277_int, var_278_string); // 0x17f0 NEW_2
	var_279_int = 0; // 0x17f2 PushI
	var_280_bool = var_277_int == var_279_int; // 0x17f3 Eq
	if(var_280_bool == 0) goto Label_6135; // 0x17f4 JumpB
	var_275_bool = 1; // 0x17f5 MovB
	return 0; // 0x17f6 Return
	
Label_6135:
	var_275_bool = 0; // 0x17f7 MovB
	return 0; // 0x17f8 Return
}


func_5615(var_91_object)
{
	var_92_float = 0; var_93_cvector = CVector(0,0,0); var_94_float = 0; var_95_cvector = CVector(0,0,0); // 0x15ef PushV
	GetEyesHeight(var_94_float); // 0x15f0 ObjFunc
	var_95_cvector = CVector(0.0, 0.0, 0.0); // 0x15f2 MovV
	var_96_float = GetByIndex(var_95_cvector, 1); // 0x15f3 PushE
	var_96_float = var_94_float; // 0x15f4 Mov
	SetByIndex(var_95_cvector, 1) = var_96_float; // 0x15f5 PopE
	var_97_string = "head"; // 0x15f6 PushS
	LookAsync(var_91_object, var_97_string, var_95_cvector); // 0x15f7 Func
	return 4; // 0x15f9 Return
}


func_1521(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x5f1 PushV
	GetDirection(var_77_cvector); // 0x5f2 Func
	var_79_cvector = CVector(0,0,0); var_80_object = Obj(); // 0x5f4 PushV
	var_80_object = var_0_bool; // 0x5f5 MovT
	func_5323(var_80_object); // 0x5f6 NEW_2
	var_78_cvector = var_79_cvector; // 0x5f7 Mov
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x5f9 PushV
	var_86_cvector = var_77_cvector; // 0x5fa Mov
	var_87_cvector = var_78_cvector; // 0x5fb Mov
	func_5680(var_85_float, var_86_cvector, var_87_cvector); // 0x5fc NEW_2
	var_93_float = -0.34202; // 0x5fe PushF
	var_74_bool = var_85_float >= var_93_float; // 0x5ff GE2
	return 4; // 0x600 Return
}


func_6137(var_67_bool)
{
	var_69_int = 0; var_70_string = ""; // 0x17fa PushV
	var_70_string = "branch"; // 0x17fb MovS
	func_5724(var_69_int, var_70_string); // 0x17fc NEW_2
	var_73_int = 2; // 0x17fe PushI
	var_74_bool = var_69_int == var_73_int; // 0x17ff Eq
	if(var_74_bool == 0) goto Label_6147; // 0x1800 JumpB
	var_67_bool = 1; // 0x1801 MovB
	return 0; // 0x1802 Return
	
Label_6147:
	var_67_bool = 0; // 0x1803 MovB
	return 0; // 0x1804 Return
}


func_5626()
{
	var_25_bool = 0; // 0x15fa PushV
	func_6563(var_25_bool); // 0x15fb NEW_2
	if(var_25_bool == 0) goto Label_5632; // 0x15fd JumpB
	lshStopSpeech(); // 0x15fe Func
	
Label_5632:
	return 0; // 0x1600 Return
}


