task_0_event_11(var_0_bool, var_1_int, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; // 0x1b PushV
	func_3461(var_23_bool); // 0x1c NEW_2
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
	func_3217(var_26_object); // 0x43 NEW_2
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
	func_3220(var_32_object); // 0x51 NEW_2
	
Label_83:
	return 2; // 0x53 Return
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x54 PushV
	var_25_object = Obj(); // 0x55 PushV
	var_25_object = var_22_bool; // 0x56 Mov
	func_3022(var_25_object); // 0x57 NEW_2
	var_34_int = 0; var_35_object = Obj(); // 0x59 PushV
	var_35_object = var_22_bool; // 0x5a Mov
	func_3105(var_34_int, var_35_object); // 0x5b NEW_2
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
	func_3115(var_75_object); // 0x69 NEW_2
	
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
	func_3517(var_28_object, var_29_object, var_30_bool); // 0x71 NEW_2
	if(var_27_bool == 0) goto Label_135; // 0x73 JumpB
	var_74_int = 0; var_75_object = Obj(); var_76_bool = 0; // 0x74 PushV
	var_75_object = var_22_object; // 0x75 Mov
	var_76_bool = var_24_bool; // 0x76 Mov
	func_3123(var_75_object, var_76_bool); // 0x77 NEW_2
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
	func_3133(var_110_object); // 0x85 NEW_2
	
Label_135:
	return 2; // 0x87 Return
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x88 PushV
	var_25_int = 0; var_26_object = Obj(); // 0x89 PushV
	var_26_object = var_22_bool; // 0x8a Mov
	func_3207(var_26_object); // 0x8b NEW_2
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
	func_3210(); // 0x99 NEW_2
	
Label_155:
	return 2; // 0x9b Return
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_object, var_21_object, var_22_string, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; // 0x9c PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; // 0x9d PushV
	var_27_object = var_22_string; // 0x9e Mov
	var_28_string = var_23_bool; // 0x9f Mov
	func_2936(var_26_bool, var_27_object, var_28_string); // 0xa0 NEW_2
	if(var_26_bool == 0) goto Label_172; // 0xa2 JumpB
	func_251(var_25_int); // 0xa4 NEW_2
	var_59_object = Obj(); var_60_string = ""; // 0xa6 PushV
	var_59_object = var_22_string; // 0xa7 Mov
	var_60_string = var_23_bool; // 0xa8 Mov
	func_2968(var_59_object, var_60_string); // 0xa9 NEW_2
	goto Label_192; // 0xab Jump
	
Label_192:
	return 2; // 0xc0 Return
	
Label_172:
	var_208_int = 0; var_209_string = ""; var_210_object = Obj(); // 0xac PushV
	var_209_string = var_23_bool; // 0xad Mov
	var_210_object = var_22_string; // 0xae Mov
	func_3212(var_210_object); // 0xaf NEW_2
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
	func_3215(); // 0xbe NEW_2
}


task_1_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_string, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_string = ""; // 0xc2 PushV
	var_24_string = var_22_bool; // 0xc3 Mov
	func_3035(var_23_bool, var_24_string); // 0xc4 NEW_2
	if(var_23_bool == 0) goto Label_206; // 0xc6 JumpB
	func_251(var_22_bool); // 0xc8 NEW_2
	var_33_string = ""; // 0xca PushV
	var_33_string = var_22_bool; // 0xcb Mov
	func_3051(var_33_string); // 0xcc NEW_2
	
Label_206:
	return 0; // 0xce Return
}


task_1_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj(); // 0xd0 PushV
	var_24_object = var_22_bool; // 0xd1 Mov
	func_2993(var_23_bool, var_24_object); // 0xd2 NEW_2
	if(var_23_bool == 0) goto Label_221; // 0xd4 JumpB
	func_251(var_22_bool); // 0xd6 NEW_2
	var_38_object = Obj(); // 0xd8 PushV
	var_38_object = var_22_bool; // 0xd9 Mov
	func_3016(var_38_object); // 0xda NEW_2
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
	func_3226(); // 0xf8 NEW_2
	return 0; // 0xfa Return
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_251(var_22_bool); // 0x10d NEW_2
	var_24_object = Obj(); // 0x10f PushV
	var_24_object = var_22_bool; // 0x110 Mov
	func_2930(); // 0x111 NEW_2
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
	func_3217(var_26_object); // 0x19c NEW_2
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
	func_3220(var_31_object); // 0x1aa NEW_2
	
Label_428:
	return 2; // 0x1ac Return
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x1ad PushV
	var_25_object = Obj(); // 0x1ae PushV
	var_25_object = var_22_bool; // 0x1af Mov
	func_3022(var_25_object); // 0x1b0 NEW_2
	var_34_int = 0; var_35_object = Obj(); // 0x1b2 PushV
	var_35_object = var_22_bool; // 0x1b3 Mov
	func_3105(var_34_int, var_35_object); // 0x1b4 NEW_2
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
	func_3115(var_74_object); // 0x1c2 NEW_2
	
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
	func_3517(var_28_object, var_29_object, var_30_bool); // 0x1ca NEW_2
	if(var_27_bool == 0) goto Label_480; // 0x1cc JumpB
	var_74_int = 0; var_75_object = Obj(); var_76_bool = 0; // 0x1cd PushV
	var_75_object = var_22_object; // 0x1ce Mov
	var_76_bool = var_24_bool; // 0x1cf Mov
	func_3123(var_75_object, var_76_bool); // 0x1d0 NEW_2
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
	func_3133(var_109_object); // 0x1de NEW_2
	
Label_480:
	return 2; // 0x1e0 Return
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x1e1 PushV
	var_25_int = 0; var_26_object = Obj(); // 0x1e2 PushV
	var_26_object = var_22_bool; // 0x1e3 Mov
	func_3207(var_26_object); // 0x1e4 NEW_2
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
	func_3210(); // 0x1f2 NEW_2
	
Label_500:
	return 2; // 0x1f4 Return
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_object, var_21_object, var_22_string, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; // 0x1f5 PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; // 0x1f6 PushV
	var_27_object = var_22_string; // 0x1f7 Mov
	var_28_string = var_23_bool; // 0x1f8 Mov
	func_2936(var_26_bool, var_27_object, var_28_string); // 0x1f9 NEW_2
	if(var_26_bool == 0) goto Label_517; // 0x1fb JumpB
	func_654(); // 0x1fd NEW_2
	var_58_object = Obj(); var_59_string = ""; // 0x1ff PushV
	var_58_object = var_22_string; // 0x200 Mov
	var_59_string = var_23_bool; // 0x201 Mov
	func_2968(var_58_object, var_59_string); // 0x202 NEW_2
	goto Label_537; // 0x204 Jump
	
Label_537:
	return 2; // 0x219 Return
	
Label_517:
	var_207_int = 0; var_208_string = ""; var_209_object = Obj(); // 0x205 PushV
	var_208_string = var_23_bool; // 0x206 Mov
	var_209_object = var_22_string; // 0x207 Mov
	func_3212(var_209_object); // 0x208 NEW_2
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
	func_3215(); // 0x217 NEW_2
}


task_2_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_string, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_string = ""; // 0x21b PushV
	var_24_string = var_22_bool; // 0x21c Mov
	func_3035(var_23_bool, var_24_string); // 0x21d NEW_2
	if(var_23_bool == 0) goto Label_551; // 0x21f JumpB
	func_654(); // 0x221 NEW_2
	var_32_string = ""; // 0x223 PushV
	var_32_string = var_22_bool; // 0x224 Mov
	func_3051(var_32_string); // 0x225 NEW_2
	
Label_551:
	return 0; // 0x227 Return
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_654(); // 0x229 NEW_2
	func_3226(); // 0x22c NEW_2
	return 0; // 0x22e Return
}


task_2_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj(); // 0x230 PushV
	var_24_object = var_22_bool; // 0x231 Mov
	func_2993(var_23_bool, var_24_object); // 0x232 NEW_2
	if(var_23_bool == 0) goto Label_572; // 0x234 JumpB
	func_654(); // 0x236 NEW_2
	var_37_object = Obj(); // 0x238 PushV
	var_37_object = var_22_bool; // 0x239 Mov
	func_3016(var_37_object); // 0x23a NEW_2
	
Label_572:
	return 0; // 0x23c Return
}


task_3_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x2cb PushV
	var_25_int = 0; var_26_object = Obj(); // 0x2cc PushV
	var_26_object = var_22_bool; // 0x2cd Mov
	func_3217(var_26_object); // 0x2ce NEW_2
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
	func_3220(var_33_object); // 0x2dc NEW_2
	
Label_734:
	return 2; // 0x2de Return
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x2df PushV
	var_25_object = Obj(); // 0x2e0 PushV
	var_25_object = var_22_bool; // 0x2e1 Mov
	func_3022(var_25_object); // 0x2e2 NEW_2
	var_34_int = 0; var_35_object = Obj(); // 0x2e4 PushV
	var_35_object = var_22_bool; // 0x2e5 Mov
	func_3105(var_34_int, var_35_object); // 0x2e6 NEW_2
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
	func_3115(var_76_object); // 0x2f4 NEW_2
	
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
	func_3517(var_28_object, var_29_object, var_30_bool); // 0x2fc NEW_2
	if(var_27_bool == 0) goto Label_786; // 0x2fe JumpB
	var_74_int = 0; var_75_object = Obj(); var_76_bool = 0; // 0x2ff PushV
	var_75_object = var_22_object; // 0x300 Mov
	var_76_bool = var_24_bool; // 0x301 Mov
	func_3123(var_75_object, var_76_bool); // 0x302 NEW_2
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
	func_3133(var_111_object); // 0x310 NEW_2
	
Label_786:
	return 2; // 0x312 Return
}


task_3_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x313 PushV
	var_25_int = 0; var_26_object = Obj(); // 0x314 PushV
	var_26_object = var_22_bool; // 0x315 Mov
	func_3207(var_26_object); // 0x316 NEW_2
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
	func_3210(); // 0x324 NEW_2
	
Label_806:
	return 2; // 0x326 Return
}


task_3_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_string, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_object, var_21_object, var_22_string, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; // 0x327 PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; // 0x328 PushV
	var_27_object = var_22_string; // 0x329 Mov
	var_28_string = var_23_bool; // 0x32a Mov
	func_2936(var_26_bool, var_27_object, var_28_string); // 0x32b NEW_2
	if(var_26_bool == 0) goto Label_823; // 0x32d JumpB
	func_858(); // 0x32f NEW_2
	var_60_object = Obj(); var_61_string = ""; // 0x331 PushV
	var_60_object = var_22_string; // 0x332 Mov
	var_61_string = var_23_bool; // 0x333 Mov
	func_2968(var_60_object, var_61_string); // 0x334 NEW_2
	goto Label_843; // 0x336 Jump
	
Label_843:
	return 2; // 0x34b Return
	
Label_823:
	var_209_int = 0; var_210_string = ""; var_211_object = Obj(); // 0x337 PushV
	var_210_string = var_23_bool; // 0x338 Mov
	var_211_object = var_22_string; // 0x339 Mov
	func_3212(var_211_object); // 0x33a NEW_2
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
	func_3215(); // 0x349 NEW_2
}


task_3_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_string = ""; // 0x34d PushV
	var_24_string = var_22_bool; // 0x34e Mov
	func_3035(var_23_bool, var_24_string); // 0x34f NEW_2
	if(var_23_bool == 0) goto Label_857; // 0x351 JumpB
	func_858(); // 0x353 NEW_2
	var_34_string = ""; // 0x355 PushV
	var_34_string = var_22_bool; // 0x356 Mov
	func_3051(var_34_string); // 0x357 NEW_2
	
Label_857:
	return 0; // 0x359 Return
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_858(); // 0x367 NEW_2
	var_25_object = Obj(); // 0x369 PushV
	var_25_object = var_22_bool; // 0x36a Mov
	func_2930(); // 0x36b NEW_2
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
	func_2590(var_29_bool, var_30_object); // 0x375 NEW_2
	var_63_bool = var_29_bool == 0; // 0x377 Not
	if(var_63_bool == 0) goto Label_893; // 0x378 JumpB
	func_858(); // 0x37a NEW_2
	return 4; // 0x37c Return
	
Label_893:
	GetDirection(var_25_cvector); // 0x37d Func
	var_66_cvector = CVector(0,0,0); var_67_object = Obj(); // 0x37f PushV
	var_67_object = var_0_bool; // 0x380 MovT
	func_2517(var_67_object); // 0x381 NEW_2
	var_26_cvector = var_66_cvector; // 0x382 Mov
	var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); // 0x384 PushV
	var_73_cvector = var_25_cvector; // 0x385 Mov
	var_74_cvector = var_26_cvector; // 0x386 Mov
	func_2897(var_72_float, var_73_cvector, var_74_cvector); // 0x387 NEW_2
	var_96_float = 0.5; // 0x389 PushF
	var_97_bool = var_72_float < var_96_float; // 0x38a LT
	if(var_97_bool == 0) goto Label_912; // 0x38b JumpB
	var_98_object = Obj(); // 0x38c PushV
	var_98_object = var_0_bool; // 0x38d MovT
	func_2614(); // 0x38e NEW_2
	
Label_912:
	return 4; // 0x390 Return
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_858(); // 0x392 NEW_2
	func_3226(); // 0x395 NEW_2
	return 0; // 0x397 Return
}


task_3_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj(); // 0x399 PushV
	var_24_object = var_22_bool; // 0x39a Mov
	func_2993(var_23_bool, var_24_object); // 0x39b NEW_2
	if(var_23_bool == 0) goto Label_933; // 0x39d JumpB
	func_858(); // 0x39f NEW_2
	var_39_object = Obj(); // 0x3a1 PushV
	var_39_object = var_22_bool; // 0x3a2 Mov
	func_3016(var_39_object); // 0x3a3 NEW_2
	
Label_933:
	return 0; // 0x3a5 Return
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_1124(var_21_bool); // 0x3c3 NEW_2
	func_3226(); // 0x3c6 NEW_2
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
	func_2512(var_94_cvector); // 0x460 NEW_2
	var_1_bool = var_94_cvector + var_29_cvector; // 0x462 Add2
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1124(var_22_bool); // 0x46d NEW_2
	var_24_object = Obj(); // 0x46f PushV
	var_24_object = var_22_bool; // 0x470 Mov
	func_2930(); // 0x471 NEW_2
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
	func_2512(var_94_cvector); // 0x51b NEW_2
	var_1_bool = var_94_cvector + var_29_cvector; // 0x51d Add2
}


task_5_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1311(var_22_bool); // 0x528 NEW_2
	var_24_object = Obj(); // 0x52a PushV
	var_24_object = var_22_bool; // 0x52b Mov
	func_2930(); // 0x52c NEW_2
	return 0; // 0x52e Return
}


task_6_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_1505(var_21_bool); // 0x540 NEW_2
	func_3226(); // 0x543 NEW_2
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
	func_2512(var_94_cvector); // 0x5dd NEW_2
	var_1_bool = var_94_cvector + var_29_cvector; // 0x5df Add2
}


task_6_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1505(var_22_bool); // 0x5ea NEW_2
	var_24_object = Obj(); // 0x5ec PushV
	var_24_object = var_22_bool; // 0x5ed Mov
	func_2930(); // 0x5ee NEW_2
	return 0; // 0x5f0 Return
}


task_7_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_1699(var_21_bool); // 0x602 NEW_2
	func_3226(); // 0x605 NEW_2
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
	func_2512(var_94_cvector); // 0x69f NEW_2
	var_1_bool = var_94_cvector + var_29_cvector; // 0x6a1 Add2
}


task_7_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1699(var_22_bool); // 0x6ac NEW_2
	var_24_object = Obj(); // 0x6ae PushV
	var_24_object = var_22_bool; // 0x6af Mov
	func_2930(); // 0x6b0 NEW_2
	return 0; // 0x6b2 Return
}


task_9_event_11(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_int, var_23_int)
{
	var_24_int = 1; // 0x79b PushI
	if(var_24_int == 0) goto Label_2511; // 0x79c JumpB
	func_2816(); // 0x79e NEW_2
	var_26_int = 45744; // 0x7a0 PushI
	var_27_bool = var_23_int == var_26_int; // 0x7a1 Eq
	if(var_27_bool == 0) goto Label_1960; // 0x7a2 JumpB
	var_28_object = Obj(); var_29_object = Obj(); // 0x7a3 PushV
	var_28_object = var_1_bool; // 0x7a4 MovT
	var_29_object = var_0_bool; // 0x7a5 MovT
	func_3281(); // 0x7a6 NEW_2
	
Label_1960:
	var_31_int = 39574; // 0x7a8 PushI
	var_32_bool = var_23_int == var_31_int; // 0x7a9 Eq
	if(var_32_bool == 0) goto Label_1968; // 0x7aa JumpB
	var_33_object = Obj(); var_34_object = Obj(); // 0x7ab PushV
	var_33_object = var_1_bool; // 0x7ac MovT
	var_34_object = var_0_bool; // 0x7ad MovT
	func_3281(); // 0x7ae NEW_2
	
Label_1968:
	var_35_int = 39576; // 0x7b0 PushI
	var_36_bool = var_23_int == var_35_int; // 0x7b1 Eq
	if(var_36_bool == 0) goto Label_1976; // 0x7b2 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x7b3 PushV
	var_37_object = var_1_bool; // 0x7b4 MovT
	var_38_object = var_0_bool; // 0x7b5 MovT
	func_3281(); // 0x7b6 NEW_2
	
Label_1976:
	var_39_int = 45743; // 0x7b8 PushI
	var_40_bool = var_22_int == var_39_int; // 0x7b9 Eq
	if(var_40_bool == 0) goto Label_2060; // 0x7ba JumpB
	var_41_bool = 0; var_42_object = Obj(); // 0x7bb PushV
	var_42_object = var_1_bool; // 0x7bc MovT
	func_3298(var_42_object); // 0x7bd NEW_2
	if(var_41_bool == 0) goto Label_2009; // 0x7bf JumpB
	var_49_string = ""; // 0x7c0 PushV
	var_49_string = "Neutral"; // 0x7c1 MovS
	func_1924(var_23_int, var_49_string); // 0x7c2 NEW_2
	var_66_int = 543287; // 0x7c4 PushI
	SetMessage(var_66_int); // 0x7c5 TObjFunc
	ClearReplies(); // 0x7c7 TObjFunc
	var_67_int = 543288; // 0x7c9 PushI
	var_68_int = -1; // 0x7ca PushI
	var_69_int = 45744; // 0x7cb PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0x7cc TObjFunc
	var_70_int = 543289; // 0x7ce PushI
	var_71_int = -1; // 0x7cf PushI
	var_72_int = 45745; // 0x7d0 PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0x7d1 TObjFunc
	var_73_int = 543304; // 0x7d3 PushI
	var_74_int = -1; // 0x7d4 PushI
	var_75_int = 45760; // 0x7d5 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x7d6 TObjFunc
	return 0; // 0x7d8 Return
	
Label_2009:
	var_76_string = ""; // 0x7d9 PushV
	var_76_string = "Neutral"; // 0x7da MovS
	func_1924(var_23_int, var_76_string); // 0x7db NEW_2
	var_77_int = 537723; // 0x7dd PushI
	SetMessage(var_77_int); // 0x7de TObjFunc
	ClearReplies(); // 0x7e0 TObjFunc
	var_78_bool = 0; var_79_object = Obj(); // 0x7e2 PushV
	var_79_object = var_1_bool; // 0x7e3 MovT
	func_3286(var_79_object); // 0x7e4 NEW_2
	if(var_78_bool == 0) goto Label_2028; // 0x7e6 JumpB
	var_84_int = 537724; // 0x7e7 PushI
	var_85_int = 39573; // 0x7e8 PushI
	var_86_int = 39572; // 0x7e9 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x7ea TObjFunc
	
Label_2028:
	var_87_bool = 0; var_88_object = Obj(); // 0x7ec PushV
	var_88_object = var_1_bool; // 0x7ed MovT
	func_3286(var_88_object); // 0x7ee NEW_2
	var_89_bool = var_87_bool == 0; // 0x7f0 Not
	if(var_89_bool == 0) goto Label_2039; // 0x7f1 JumpB
	var_90_int = 537728; // 0x7f2 PushI
	var_91_int = -1; // 0x7f3 PushI
	var_92_int = 39576; // 0x7f4 PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x7f5 TObjFunc
	
Label_2039:
	var_93_bool = 0; var_94_object = Obj(); // 0x7f7 PushV
	var_94_object = var_1_bool; // 0x7f8 MovT
	func_3310(var_93_bool, var_94_object); // 0x7f9 NEW_2
	if(var_93_bool == 0) goto Label_2049; // 0x7fb JumpB
	var_104_int = 537755; // 0x7fc PushI
	var_105_int = 39604; // 0x7fd PushI
	var_106_int = 39603; // 0x7fe PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x7ff TObjFunc
	
Label_2049:
	var_107_int = 537783; // 0x801 PushI
	var_108_int = -1; // 0x802 PushI
	var_109_int = 39634; // 0x803 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x804 TObjFunc
	var_110_int = 537784; // 0x806 PushI
	var_111_int = -1; // 0x807 PushI
	var_112_int = 39635; // 0x808 PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x809 TObjFunc
	return 0; // 0x80b Return
	
Label_2060:
	var_113_int = 39604; // 0x80c PushI
	var_114_bool = var_22_int == var_113_int; // 0x80d Eq
	if(var_114_bool == 0) goto Label_2088; // 0x80e JumpB
	var_115_string = ""; // 0x80f PushV
	var_115_string = "Neutral"; // 0x810 MovS
	func_1924(var_23_int, var_115_string); // 0x811 NEW_2
	var_116_int = 537756; // 0x813 PushI
	SetMessage(var_116_int); // 0x814 TObjFunc
	ClearReplies(); // 0x816 TObjFunc
	var_117_int = 537757; // 0x818 PushI
	var_118_int = 39606; // 0x819 PushI
	var_119_int = 39605; // 0x81a PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x81b TObjFunc
	var_120_int = 537766; // 0x81d PushI
	var_121_int = 39615; // 0x81e PushI
	var_122_int = 39614; // 0x81f PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x820 TObjFunc
	var_123_int = 537782; // 0x822 PushI
	var_124_int = -1; // 0x823 PushI
	var_125_int = 39633; // 0x824 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x825 TObjFunc
	return 0; // 0x827 Return
	
Label_2088:
	var_126_int = 39615; // 0x828 PushI
	var_127_bool = var_22_int == var_126_int; // 0x829 Eq
	if(var_127_bool == 0) goto Label_2111; // 0x82a JumpB
	var_128_string = ""; // 0x82b PushV
	var_128_string = "Neutral"; // 0x82c MovS
	func_1924(var_23_int, var_128_string); // 0x82d NEW_2
	var_129_int = 537767; // 0x82f PushI
	SetMessage(var_129_int); // 0x830 TObjFunc
	ClearReplies(); // 0x832 TObjFunc
	var_130_int = 537768; // 0x834 PushI
	var_131_int = 39617; // 0x835 PushI
	var_132_int = 39616; // 0x836 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x837 TObjFunc
	var_133_int = 537781; // 0x839 PushI
	var_134_int = -1; // 0x83a PushI
	var_135_int = 39632; // 0x83b PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x83c TObjFunc
	return 0; // 0x83e Return
	
Label_2111:
	var_136_int = 39617; // 0x83f PushI
	var_137_bool = var_22_int == var_136_int; // 0x840 Eq
	if(var_137_bool == 0) goto Label_2134; // 0x841 JumpB
	var_138_string = ""; // 0x842 PushV
	var_138_string = "Neutral"; // 0x843 MovS
	func_1924(var_23_int, var_138_string); // 0x844 NEW_2
	var_139_int = 537769; // 0x846 PushI
	SetMessage(var_139_int); // 0x847 TObjFunc
	ClearReplies(); // 0x849 TObjFunc
	var_140_int = 537770; // 0x84b PushI
	var_141_int = 39608; // 0x84c PushI
	var_142_int = 39618; // 0x84d PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x84e TObjFunc
	var_143_int = 537771; // 0x850 PushI
	var_144_int = 39621; // 0x851 PushI
	var_145_int = 39620; // 0x852 PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x853 TObjFunc
	return 0; // 0x855 Return
	
Label_2134:
	var_146_int = 39621; // 0x856 PushI
	var_147_bool = var_22_int == var_146_int; // 0x857 Eq
	if(var_147_bool == 0) goto Label_2162; // 0x858 JumpB
	var_148_string = ""; // 0x859 PushV
	var_148_string = "Neutral"; // 0x85a MovS
	func_1924(var_23_int, var_148_string); // 0x85b NEW_2
	var_149_int = 537772; // 0x85d PushI
	SetMessage(var_149_int); // 0x85e TObjFunc
	ClearReplies(); // 0x860 TObjFunc
	var_150_bool = 0; var_151_object = Obj(); // 0x862 PushV
	var_151_object = var_1_bool; // 0x863 MovT
	func_3286(var_151_object); // 0x864 NEW_2
	if(var_150_bool == 0) goto Label_2156; // 0x866 JumpB
	var_152_int = 537773; // 0x867 PushI
	var_153_int = 39623; // 0x868 PushI
	var_154_int = 39622; // 0x869 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x86a TObjFunc
	
Label_2156:
	var_155_int = 537777; // 0x86c PushI
	var_156_int = 39628; // 0x86d PushI
	var_157_int = 39627; // 0x86e PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x86f TObjFunc
	return 0; // 0x871 Return
	
Label_2162:
	var_158_int = 39628; // 0x872 PushI
	var_159_bool = var_22_int == var_158_int; // 0x873 Eq
	if(var_159_bool == 0) goto Label_2190; // 0x874 JumpB
	var_160_string = ""; // 0x875 PushV
	var_160_string = "Neutral"; // 0x876 MovS
	func_1924(var_23_int, var_160_string); // 0x877 NEW_2
	var_161_int = 537778; // 0x879 PushI
	SetMessage(var_161_int); // 0x87a TObjFunc
	ClearReplies(); // 0x87c TObjFunc
	var_162_int = 537779; // 0x87e PushI
	var_163_int = 39608; // 0x87f PushI
	var_164_int = 39629; // 0x880 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x881 TObjFunc
	var_165_bool = 0; var_166_object = Obj(); // 0x883 PushV
	var_166_object = var_1_bool; // 0x884 MovT
	func_3286(var_166_object); // 0x885 NEW_2
	if(var_165_bool == 0) goto Label_2189; // 0x887 JumpB
	var_167_int = 537780; // 0x888 PushI
	var_168_int = -1; // 0x889 PushI
	var_169_int = 39631; // 0x88a PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x88b TObjFunc
	
Label_2189:
	return 0; // 0x88d Return
	
Label_2190:
	var_170_int = 39623; // 0x88e PushI
	var_171_bool = var_22_int == var_170_int; // 0x88f Eq
	if(var_171_bool == 0) goto Label_2213; // 0x890 JumpB
	var_172_string = ""; // 0x891 PushV
	var_172_string = "Neutral"; // 0x892 MovS
	func_1924(var_23_int, var_172_string); // 0x893 NEW_2
	var_173_int = 537774; // 0x895 PushI
	SetMessage(var_173_int); // 0x896 TObjFunc
	ClearReplies(); // 0x898 TObjFunc
	var_174_int = 537775; // 0x89a PushI
	var_175_int = 39608; // 0x89b PushI
	var_176_int = 39624; // 0x89c PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x89d TObjFunc
	var_177_int = 537776; // 0x89f PushI
	var_178_int = -1; // 0x8a0 PushI
	var_179_int = 39626; // 0x8a1 PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x8a2 TObjFunc
	return 0; // 0x8a4 Return
	
Label_2213:
	var_180_int = 39606; // 0x8a5 PushI
	var_181_bool = var_22_int == var_180_int; // 0x8a6 Eq
	if(var_181_bool == 0) goto Label_2231; // 0x8a7 JumpB
	var_182_string = ""; // 0x8a8 PushV
	var_182_string = "Neutral"; // 0x8a9 MovS
	func_1924(var_23_int, var_182_string); // 0x8aa NEW_2
	var_183_int = 537758; // 0x8ac PushI
	SetMessage(var_183_int); // 0x8ad TObjFunc
	ClearReplies(); // 0x8af TObjFunc
	var_184_int = 537759; // 0x8b1 PushI
	var_185_int = 39608; // 0x8b2 PushI
	var_186_int = 39607; // 0x8b3 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x8b4 TObjFunc
	return 0; // 0x8b6 Return
	
Label_2231:
	var_187_int = 39608; // 0x8b7 PushI
	var_188_bool = var_22_int == var_187_int; // 0x8b8 Eq
	if(var_188_bool == 0) goto Label_2254; // 0x8b9 JumpB
	var_189_string = ""; // 0x8ba PushV
	var_189_string = "Neutral"; // 0x8bb MovS
	func_1924(var_23_int, var_189_string); // 0x8bc NEW_2
	var_190_int = 537760; // 0x8be PushI
	SetMessage(var_190_int); // 0x8bf TObjFunc
	ClearReplies(); // 0x8c1 TObjFunc
	var_191_int = 537761; // 0x8c3 PushI
	var_192_int = 39610; // 0x8c4 PushI
	var_193_int = 39609; // 0x8c5 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x8c6 TObjFunc
	var_194_int = 537765; // 0x8c8 PushI
	var_195_int = -1; // 0x8c9 PushI
	var_196_int = 39613; // 0x8ca PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x8cb TObjFunc
	return 0; // 0x8cd Return
	
Label_2254:
	var_197_int = 39610; // 0x8ce PushI
	var_198_bool = var_22_int == var_197_int; // 0x8cf Eq
	if(var_198_bool == 0) goto Label_2277; // 0x8d0 JumpB
	var_199_string = ""; // 0x8d1 PushV
	var_199_string = "Neutral"; // 0x8d2 MovS
	func_1924(var_23_int, var_199_string); // 0x8d3 NEW_2
	var_200_int = 537762; // 0x8d5 PushI
	SetMessage(var_200_int); // 0x8d6 TObjFunc
	ClearReplies(); // 0x8d8 TObjFunc
	var_201_int = 537763; // 0x8da PushI
	var_202_int = -1; // 0x8db PushI
	var_203_int = 39611; // 0x8dc PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x8dd TObjFunc
	var_204_int = 537764; // 0x8df PushI
	var_205_int = -1; // 0x8e0 PushI
	var_206_int = 39612; // 0x8e1 PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x8e2 TObjFunc
	return 0; // 0x8e4 Return
	
Label_2277:
	var_207_int = 39589; // 0x8e5 PushI
	var_208_bool = var_22_int == var_207_int; // 0x8e6 Eq
	if(var_208_bool == 0) goto Label_2280; // 0x8e7 JumpB
	
Label_2280:
	var_209_int = 39596; // 0x8e8 PushI
	var_210_bool = var_22_int == var_209_int; // 0x8e9 Eq
	if(var_210_bool == 0) goto Label_2303; // 0x8ea JumpB
	var_211_string = ""; // 0x8eb PushV
	var_211_string = "Neutral"; // 0x8ec MovS
	func_1924(var_23_int, var_211_string); // 0x8ed NEW_2
	var_212_int = 537748; // 0x8ef PushI
	SetMessage(var_212_int); // 0x8f0 TObjFunc
	ClearReplies(); // 0x8f2 TObjFunc
	var_213_int = 537749; // 0x8f4 PushI
	var_214_int = 39598; // 0x8f5 PushI
	var_215_int = 39597; // 0x8f6 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x8f7 TObjFunc
	var_216_int = 537753; // 0x8f9 PushI
	var_217_int = -1; // 0x8fa PushI
	var_218_int = 39601; // 0x8fb PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x8fc TObjFunc
	return 0; // 0x8fe Return
	
Label_2303:
	var_219_int = 39598; // 0x8ff PushI
	var_220_bool = var_22_int == var_219_int; // 0x900 Eq
	if(var_220_bool == 0) goto Label_2326; // 0x901 JumpB
	var_221_string = ""; // 0x902 PushV
	var_221_string = "Neutral"; // 0x903 MovS
	func_1924(var_23_int, var_221_string); // 0x904 NEW_2
	var_222_int = 537750; // 0x906 PushI
	SetMessage(var_222_int); // 0x907 TObjFunc
	ClearReplies(); // 0x909 TObjFunc
	var_223_int = 537751; // 0x90b PushI
	var_224_int = -1; // 0x90c PushI
	var_225_int = 39599; // 0x90d PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x90e TObjFunc
	var_226_int = 537752; // 0x910 PushI
	var_227_int = -1; // 0x911 PushI
	var_228_int = 39600; // 0x912 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x913 TObjFunc
	return 0; // 0x915 Return
	
Label_2326:
	var_229_int = 39591; // 0x916 PushI
	var_230_bool = var_22_int == var_229_int; // 0x917 Eq
	if(var_230_bool == 0) goto Label_2354; // 0x918 JumpB
	var_231_string = ""; // 0x919 PushV
	var_231_string = "Neutral"; // 0x91a MovS
	func_1924(var_23_int, var_231_string); // 0x91b NEW_2
	var_232_int = 537743; // 0x91d PushI
	SetMessage(var_232_int); // 0x91e TObjFunc
	ClearReplies(); // 0x920 TObjFunc
	var_233_int = 537744; // 0x922 PushI
	var_234_int = -1; // 0x923 PushI
	var_235_int = 39592; // 0x924 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x925 TObjFunc
	var_236_int = 537745; // 0x927 PushI
	var_237_int = -1; // 0x928 PushI
	var_238_int = 39593; // 0x929 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x92a TObjFunc
	var_239_int = 537746; // 0x92c PushI
	var_240_int = -1; // 0x92d PushI
	var_241_int = 39594; // 0x92e PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x92f TObjFunc
	return 0; // 0x931 Return
	
Label_2354:
	var_242_int = 39578; // 0x932 PushI
	var_243_bool = var_22_int == var_242_int; // 0x933 Eq
	if(var_243_bool == 0) goto Label_2357; // 0x934 JumpB
	
Label_2357:
	var_244_int = 39580; // 0x935 PushI
	var_245_bool = var_22_int == var_244_int; // 0x936 Eq
	if(var_245_bool == 0) goto Label_2380; // 0x937 JumpB
	var_246_string = ""; // 0x938 PushV
	var_246_string = "Neutral"; // 0x939 MovS
	func_1924(var_23_int, var_246_string); // 0x93a NEW_2
	var_247_int = 537732; // 0x93c PushI
	SetMessage(var_247_int); // 0x93d TObjFunc
	ClearReplies(); // 0x93f TObjFunc
	var_248_int = 537733; // 0x941 PushI
	var_249_int = 39582; // 0x942 PushI
	var_250_int = 39581; // 0x943 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x944 TObjFunc
	var_251_int = 537737; // 0x946 PushI
	var_252_int = -1; // 0x947 PushI
	var_253_int = 39585; // 0x948 PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x949 TObjFunc
	return 0; // 0x94b Return
	
Label_2380:
	var_254_int = 39582; // 0x94c PushI
	var_255_bool = var_22_int == var_254_int; // 0x94d Eq
	if(var_255_bool == 0) goto Label_2403; // 0x94e JumpB
	var_256_string = ""; // 0x94f PushV
	var_256_string = "Neutral"; // 0x950 MovS
	func_1924(var_23_int, var_256_string); // 0x951 NEW_2
	var_257_int = 537734; // 0x953 PushI
	SetMessage(var_257_int); // 0x954 TObjFunc
	ClearReplies(); // 0x956 TObjFunc
	var_258_int = 537735; // 0x958 PushI
	var_259_int = -1; // 0x959 PushI
	var_260_int = 39583; // 0x95a PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x95b TObjFunc
	var_261_int = 537736; // 0x95d PushI
	var_262_int = -1; // 0x95e PushI
	var_263_int = 39584; // 0x95f PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x960 TObjFunc
	return 0; // 0x962 Return
	
Label_2403:
	var_264_int = 39573; // 0x963 PushI
	var_265_bool = var_22_int == var_264_int; // 0x964 Eq
	if(var_265_bool == 0) goto Label_2426; // 0x965 JumpB
	var_266_string = ""; // 0x966 PushV
	var_266_string = "Neutral"; // 0x967 MovS
	func_1924(var_23_int, var_266_string); // 0x968 NEW_2
	var_267_int = 537725; // 0x96a PushI
	SetMessage(var_267_int); // 0x96b TObjFunc
	ClearReplies(); // 0x96d TObjFunc
	var_268_int = 537726; // 0x96f PushI
	var_269_int = -1; // 0x970 PushI
	var_270_int = 39574; // 0x971 PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x972 TObjFunc
	var_271_int = 537727; // 0x974 PushI
	var_272_int = -1; // 0x975 PushI
	var_273_int = 39575; // 0x976 PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x977 TObjFunc
	return 0; // 0x979 Return
	
Label_2426:
	var_274_int = 45761; // 0x97a PushI
	var_275_bool = var_22_int == var_274_int; // 0x97b Eq
	if(var_275_bool == 0) goto Label_2429; // 0x97c JumpB
	
Label_2429:
	var_276_int = 45766; // 0x97d PushI
	var_277_bool = var_22_int == var_276_int; // 0x97e Eq
	if(var_277_bool == 0) goto Label_2452; // 0x97f JumpB
	var_278_string = ""; // 0x980 PushV
	var_278_string = "Neutral"; // 0x981 MovS
	func_1924(var_23_int, var_278_string); // 0x982 NEW_2
	var_279_int = 543310; // 0x984 PushI
	SetMessage(var_279_int); // 0x985 TObjFunc
	ClearReplies(); // 0x987 TObjFunc
	var_280_int = 543312; // 0x989 PushI
	var_281_int = -1; // 0x98a PushI
	var_282_int = 45768; // 0x98b PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0x98c TObjFunc
	var_283_int = 543311; // 0x98e PushI
	var_284_int = -1; // 0x98f PushI
	var_285_int = 45767; // 0x990 PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x991 TObjFunc
	return 0; // 0x993 Return
	
Label_2452:
	var_286_int = 45752; // 0x994 PushI
	var_287_bool = var_22_int == var_286_int; // 0x995 Eq
	if(var_287_bool == 0) goto Label_2455; // 0x996 JumpB
	
Label_2455:
	var_288_int = 45756; // 0x997 PushI
	var_289_bool = var_22_int == var_288_int; // 0x998 Eq
	if(var_289_bool == 0) goto Label_2478; // 0x999 JumpB
	var_290_string = ""; // 0x99a PushV
	var_290_string = "Neutral"; // 0x99b MovS
	func_1924(var_23_int, var_290_string); // 0x99c NEW_2
	var_291_int = 543300; // 0x99e PushI
	SetMessage(var_291_int); // 0x99f TObjFunc
	ClearReplies(); // 0x9a1 TObjFunc
	var_292_int = 543302; // 0x9a3 PushI
	var_293_int = -1; // 0x9a4 PushI
	var_294_int = 45758; // 0x9a5 PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0x9a6 TObjFunc
	var_295_int = 543303; // 0x9a8 PushI
	var_296_int = -1; // 0x9a9 PushI
	var_297_int = 45759; // 0x9aa PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x9ab TObjFunc
	return 0; // 0x9ad Return
	
Label_2478:
	var_298_int = 45755; // 0x9ae PushI
	var_299_bool = var_22_int == var_298_int; // 0x9af Eq
	if(var_299_bool == 0) goto Label_2496; // 0x9b0 JumpB
	var_300_string = ""; // 0x9b1 PushV
	var_300_string = "Neutral"; // 0x9b2 MovS
	func_1924(var_23_int, var_300_string); // 0x9b3 NEW_2
	var_301_int = 543299; // 0x9b5 PushI
	SetMessage(var_301_int); // 0x9b6 TObjFunc
	ClearReplies(); // 0x9b8 TObjFunc
	var_302_int = 543301; // 0x9ba PushI
	var_303_int = -1; // 0x9bb PushI
	var_304_int = 45757; // 0x9bc PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0x9bd TObjFunc
	return 0; // 0x9bf Return
	
Label_2496:
	var_305_int = 45747; // 0x9c0 PushI
	var_306_bool = var_22_int == var_305_int; // 0x9c1 Eq
	if(var_306_bool == 0) goto Label_2499; // 0x9c2 JumpB
	
Label_2499:
	var_3_bool = 1; // 0x9c3 TMovB
	var_307_bool = 0; // 0x9c4 PushV
	func_3461(var_307_bool); // 0x9c5 NEW_2
	if(var_307_bool == 0) goto Label_2507; // 0x9c7 JumpB
	lshStopAnimation(); // 0x9c8 Func
	goto Label_2509; // 0x9ca Jump
	
Label_2509:
	return 0; // 0x9cd Return
	
Label_2507:
	StopAnimation(); // 0x9cb Func
	
Label_2511:
	return 0; // 0x9cf Return
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_string)
{
	return 0; // 0xb71 Return
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object)
{
	return 0; // 0xb73 Return
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_int, var_24_float, var_25_float)
{
	return 0; // 0xb75 Return
}


event_43(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_int, var_24_float, var_25_float, var_26_cvector, var_27_cvector)
{
	return 0; // 0xb77 Return
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	var_22_bool = 1; // 0x28 PushB
	SensePlayerOnly(var_22_bool); // 0x29 Func
	func_3463(); // 0x2c NEW_2
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
	var_258_bool = 0; // 0x4 PushV
	func_3461(var_258_bool); // 0x5 NEW_2
	if(var_258_bool == 0) goto Label_15; // 0x7 JumpB
	var_259_string = ""; // 0x8 PushV
	var_259_string = "Neutral"; // 0x9 MovS
	func_2774(var_259_string); // 0xa NEW_2
	lshWaitForAnimEnd(); // 0xc Func
	goto Label_21; // 0xe Jump
	
Label_21:
	var_260_bool = var_0_bool; // 0x15 PushT
	if(var_260_bool == 0) goto Label_24; // 0x16 JumpB
	return 0; // 0x17 Return
	
Label_24:
	goto Label_4; // 0x18 Jump
	
Label_15:
	WaitForAnimEnd(); // 0xf Func
	var_261_string = "all"; // 0x11 PushS
	var_262_string = "idle"; // 0x12 PushS
	PlayAnimation(var_261_string, var_262_string); // 0x13 Func
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
	func_2855(var_52_cvector, var_53_cvector); // 0x612 NEW_2
	var_59_float = 0.75; // 0x614 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x615 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x616 Add2
	func_2855(var_50_cvector, var_51_cvector); // 0x617 NEW_2
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


func_3088(var_65_int)
{
	var_67_bool = 0; // 0xc11 PushV
	func_3511(var_67_bool); // 0xc12 NEW_2
	if(var_67_bool == 0) goto Label_3095; // 0xc14 JumpB
	var_65_int = 2; // 0xc15 MovI
	goto Label_3096; // 0xc16 Jump
	
Label_3096:
	return 0; // 0xc18 Return
	
Label_3095:
	var_65_int = 0; // 0xc17 MovI
}


func_3097(var_82_object)
{
	var_83_object = Obj(); // 0xc1a PushV
	var_83_object = var_82_object; // 0xc1b Mov
	TaskCall(3); // 0xc1c TaskCall
	func_659(var_84_object, var_83_object); // 0xc1d NEW_2
	TaskReturn(); // 0xc1e TaskReturn
	return 0; // 0xc20 Return
}


func_2590(var_29_bool, var_30_object)
{
	var_31_int = 0; var_32_int = 0; // 0xa1e PushV
	var_33_bool = 0; var_34_object = Obj(); // 0xa1f PushV
	var_34_object = var_30_object; // 0xa20 Mov
	func_2554(var_33_bool, var_34_object); // 0xa21 NEW_2
	var_50_bool = var_33_bool == 0; // 0xa23 Not
	if(var_50_bool == 0) goto Label_2599; // 0xa24 JumpB
	var_29_bool = 0; // 0xa25 MovB
	return 2; // 0xa26 Return
	
Label_2599:
	var_51_bool = 0; var_52_object = Obj(); var_53_string = ""; // 0xa27 PushV
	var_52_object = var_30_object; // 0xa28 Mov
	var_53_string = "noaccess"; // 0xa29 MovS
	func_2537(var_51_bool, var_52_object, var_53_string); // 0xa2a NEW_2
	var_60_bool = var_51_bool == 0; // 0xa2c Not
	if(var_60_bool == 0) goto Label_2608; // 0xa2d JumpB
	var_29_bool = 1; // 0xa2e MovB
	return 2; // 0xa2f Return
	
Label_2608:
	var_61_string = "noaccess"; // 0xa30 PushS
	GetProperty(var_61_string, var_32_int); // 0xa31 ObjFunc
	var_62_int = 0; // 0xa33 PushI
	var_29_bool = var_32_int == var_62_int; // 0xa34 Eq2
	return 2; // 0xa35 Return
}


func_3105(var_34_int, var_35_object)
{
	var_36_bool = 0; var_37_object = Obj(); // 0xc22 PushV
	var_37_object = var_35_object; // 0xc23 Mov
	func_2590(var_36_bool, var_37_object); // 0xc24 NEW_2
	if(var_36_bool == 0) goto Label_3113; // 0xc26 JumpB
	var_34_int = 2; // 0xc27 MovI
	goto Label_3114; // 0xc28 Jump
	
Label_3114:
	return 0; // 0xc2a Return
	
Label_3113:
	var_34_int = 0; // 0xc29 MovI
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
	func_2512(var_191_cvector); // 0x648 NEW_2
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
	func_2512(var_201_cvector); // 0x663 NEW_2
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


func_3115(var_76_object)
{
	var_77_object = Obj(); // 0xc2c PushV
	var_77_object = var_76_object; // 0xc2d Mov
	TaskCall(4); // 0xc2e TaskCall
	func_934(var_77_object); // 0xc2f NEW_2
	TaskReturn(); // 0xc30 TaskReturn
	return 0; // 0xc32 Return
}


func_3123(var_74_int, var_75_object)
{
	var_77_bool = 0; var_78_object = Obj(); // 0xc34 PushV
	var_78_object = var_75_object; // 0xc35 Mov
	func_2590(var_77_bool, var_78_object); // 0xc36 NEW_2
	if(var_77_bool == 0) goto Label_3131; // 0xc38 JumpB
	var_74_int = 2; // 0xc39 MovI
	goto Label_3132; // 0xc3a Jump
	
Label_3132:
	return 0; // 0xc3c Return
	
Label_3131:
	var_74_int = 0; // 0xc3b MovI
}


func_2614()
{
	var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); // 0xa36 PushV
	GetPosition(var_102_cvector); // 0xa37 ObjFunc
	GetPosition(var_103_cvector); // 0xa39 Func
	var_104_cvector = var_102_cvector - var_103_cvector; // 0xa3b Sub2
	var_105_float = GetByIndex(var_104_cvector, 0); // 0xa3c PushE
	var_106_float = GetByIndex(var_104_cvector, 2); // 0xa3d PushE
	RotateAsync(var_105_float, var_106_float); // 0xa3e Func
	return 6; // 0xa40 Return
}


func_55()
{
	var_88_bool = 0; // 0x37 PushV
	func_2625(var_88_bool); // 0x38 NEW_2
	var_91_bool = var_88_bool == 0; // 0x3a Not
	if(var_91_bool == 0) goto Label_63; // 0x3b JumpB
	func_3226(); // 0x3d NEW_2
	
Label_63:
	return 0; // 0x3f Return
}


func_3133(var_111_object)
{
	var_112_object = Obj(); // 0xc3e PushV
	var_112_object = var_111_object; // 0xc3f Mov
	TaskCall(5); // 0xc40 TaskCall
	func_1186(var_113_object, var_114_cvector, var_115_bool, var_112_object); // 0xc41 NEW_2
	TaskReturn(); // 0xc42 TaskReturn
	return 0; // 0xc44 Return
}


func_573()
{
	var_119_int = 0; var_120_int = 0; var_121_int = 0; var_122_int = 0; var_123_bool = 0; var_124_float = 0; var_125_bool = 0; var_126_int = 0; var_127_int = 0; var_128_int = 0; var_129_int = 0; var_130_bool = 0; var_131_float = 0; var_132_bool = 0; // 0x23d PushV
	WaitForAnimEnd(); // 0x23e Func
	var_133_bool = 0; // 0x240 PushV
	func_2625(var_133_bool); // 0x241 NEW_2
	var_134_bool = var_133_bool == 0; // 0x243 Not
	if(var_134_bool == 0) goto Label_582; // 0x244 JumpB
	return 14; // 0x245 Return
	
Label_582:
	var_135_int = 0; // 0x246 PushV
	func_3071(var_135_int); // 0x247 NEW_2
	var_126_int = var_135_int; // 0x248 Mov
	var_127_int = 0; // 0x24a MovI
	
Label_587:
	var_148_bool = 0; // 0x24b PushV
	var_148_bool = 0; // 0x24c MovB
	var_149_int = 5; // 0x24d PushI
	var_150_bool = var_127_int < var_149_int; // 0x24e LT
	if(var_150_bool == 0) goto Label_597; // 0x24f JumpB
	var_151_bool = 0; // 0x250 PushV
	func_2625(var_151_bool); // 0x251 NEW_2
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
	func_3064(var_157_string, var_158_int); // 0x263 NEW_2
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


func_2625(var_88_bool)
{
	var_89_bool = 0; var_90_bool = 0; // 0xa41 PushV
	IsLoaded(var_90_bool); // 0xa42 Func
	var_88_bool = var_90_bool; // 0xa44 Mov
	return 2; // 0xa45 Return
}


func_3141(var_31_bool, var_32_object, var_33_object, var_34_float)
{
	var_35_string = ""; var_36_bool = 0; var_37_string = ""; var_38_bool = 0; // 0xc45 PushV
	var_39_bool = 0; var_40_object = Obj(); var_41_string = ""; // 0xc46 PushV
	var_40_object = var_33_object; // 0xc47 Mov
	var_41_string = "class"; // 0xc48 MovS
	func_2537(var_39_bool, var_40_object, var_41_string); // 0xc49 NEW_2
	var_48_bool = var_39_bool == 0; // 0xc4b Not
	if(var_48_bool == 0) goto Label_3151; // 0xc4c JumpB
	var_31_bool = 0; // 0xc4d MovB
	return 4; // 0xc4e Return
	
Label_3151:
	var_49_string = "class"; // 0xc4f PushS
	GetProperty(var_49_string, var_37_string); // 0xc50 ObjFunc
	var_50_string = "rat"; // 0xc52 PushS
	var_51_bool = var_37_string == var_50_string; // 0xc53 Eq
	if(var_51_bool == 0) goto Label_3160; // 0xc54 JumpB
	var_31_bool = 0; // 0xc55 MovB
	return 4; // 0xc56 Return
	
Label_3160:
	var_52_string = "rat_big"; // 0xc58 PushS
	var_53_bool = var_37_string == var_52_string; // 0xc59 Eq
	if(var_53_bool == 0) goto Label_3166; // 0xc5a JumpB
	var_31_bool = 0; // 0xc5b MovB
	return 4; // 0xc5c Return
	
Label_3166:
	var_54_string = "dog"; // 0xc5e PushS
	var_55_bool = var_37_string == var_54_string; // 0xc5f Eq
	if(var_55_bool == 0) goto Label_3171; // 0xc60 JumpB
	var_31_bool = 0; // 0xc61 MovB
	return 4; // 0xc62 Return
	
Label_3171:
	CanSee(var_38_bool, var_32_object); // 0xc63 Func
	var_56_bool = 0; // 0xc65 PushV
	var_56_bool = 1; // 0xc66 MovB
	var_57_bool = var_38_bool; // 0xc67 Push
	if(var_57_bool == 0) goto Label_3185; // 0xc68 JumpB
	var_58_float = 0; var_59_object = Obj(); // 0xc69 PushV
	var_59_object = var_32_object; // 0xc6a Mov
	func_2524(var_59_object); // 0xc6b NEW_2
	var_66_float = var_34_float * var_34_float; // 0xc6d Mult
	var_67_bool = var_58_float <= var_66_float; // 0xc6e LE
	if(var_67_bool == 0) goto Label_3185; // 0xc6f JumpB
	var_56_bool = 0; // 0xc70 MovB
	
Label_3185:
	if(var_56_bool == 0) goto Label_3188; // 0xc71 JumpB
	var_31_bool = 1; // 0xc72 MovB
	return 4; // 0xc73 Return
	
Label_3188:
	CanSee(var_38_bool, var_33_object); // 0xc74 Func
	var_68_bool = 0; // 0xc76 PushV
	var_68_bool = 1; // 0xc77 MovB
	var_69_bool = var_38_bool; // 0xc78 Push
	if(var_69_bool == 0) goto Label_3202; // 0xc79 JumpB
	var_70_float = 0; var_71_object = Obj(); // 0xc7a PushV
	var_71_object = var_33_object; // 0xc7b Mov
	func_2524(var_71_object); // 0xc7c NEW_2
	var_72_float = var_34_float * var_34_float; // 0xc7e Mult
	var_73_bool = var_70_float <= var_72_float; // 0xc7f LE
	if(var_73_bool == 0) goto Label_3202; // 0xc80 JumpB
	var_68_bool = 0; // 0xc81 MovB
	
Label_3202:
	if(var_68_bool == 0) goto Label_3205; // 0xc82 JumpB
	var_31_bool = 1; // 0xc83 MovB
	return 4; // 0xc84 Return
	
Label_3205:
	var_31_bool = 0; // 0xc85 MovB
	return 4; // 0xc86 Return
}


func_2630(var_58_bool, var_60_float)
{
	var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0; var_69_bool = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_bool = 0; var_78_bool = 0; // 0xa46 PushV
	GetPosition(var_71_cvector); // 0xa47 ObjFunc
	GetEyesHeight(var_70_float); // 0xa49 ObjFunc
	var_79_float = GetByIndex(var_71_cvector, 1); // 0xa4b PushE
	var_79_float = var_79_float + var_70_float; // 0xa4c Add2
	SetByIndex(var_71_cvector, 1) = var_79_float; // 0xa4d PopE
	GetPosition(var_72_cvector); // 0xa4e Func
	GetEyesHeight(var_70_float); // 0xa50 Func
	var_80_float = GetByIndex(var_72_cvector, 1); // 0xa52 PushE
	var_80_float = var_80_float + var_70_float; // 0xa53 Add2
	SetByIndex(var_72_cvector, 1) = var_80_float; // 0xa54 PopE
	var_73_cvector = var_71_cvector - var_72_cvector; // 0xa55 Sub2
	var_81_float = GetByIndex(var_73_cvector, 1); // 0xa56 PushE
	var_81_float = 0; // 0xa57 MovI
	SetByIndex(var_73_cvector, 1) = var_81_float; // 0xa58 PopE
	var_82_int = var_73_cvector | var_73_cvector; // 0xa59 Or
	var_83_float = sqrt(var_82_int); // 0xa5a Sqrt
	var_73_cvector = var_73_cvector / var_73_cvector; // 0xa5b Div2
	var_74_cvector = -var_73_cvector; // 0xa5c Neg2
	var_84_float = var_73_cvector * var_60_float; // 0xa5d Mult
	var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); // 0xa5e PushV
	var_87_cvector = CVector(0.0, 1.0, 0.0); // 0xa5f PushVec
	var_86_cvector = var_74_cvector ^ var_87_cvector; // 0xa60 Xor2
	func_2855(var_85_cvector, var_86_cvector); // 0xa61 NEW_2
	var_93_int = 25; // 0xa63 PushI
	var_94_float = var_85_cvector * var_93_int; // 0xa64 Mult
	var_95_int = var_84_float + var_94_float; // 0xa65 Add
	var_96_cvector = CVector(0.0, 10.0, 0.0); // 0xa66 PushVec
	var_75_cvector = var_95_int - var_96_cvector; // 0xa67 Sub2
	var_76_cvector = var_72_cvector + var_75_cvector; // 0xa68 Add2
	IsOverrideActive(var_77_bool); // 0xa69 Func
	var_97_bool = var_77_bool; // 0xa6b Push
	if(var_97_bool == 0) goto Label_2671; // 0xa6c JumpB
	var_58_bool = 0; // 0xa6d MovB
	return 18; // 0xa6e Return
	
Label_2671:
	StopWorld(); // 0xa6f Func
	CameraTransit(var_76_cvector, var_74_cvector); // 0xa71 Func
	var_98_float = GetByIndex(var_75_cvector, 0); // 0xa73 PushE
	var_99_float = GetByIndex(var_75_cvector, 2); // 0xa74 PushE
	Rotate(var_98_float, var_99_float); // 0xa75 Func
	var_100_bool = 0; // 0xa77 PushV
	func_3461(var_100_bool); // 0xa78 NEW_2
	if(var_100_bool == 0) goto Label_2684; // 0xa7a JumpB
	goto Label_2692; // 0xa7b Jump
	
Label_2692:
	CameraWaitForPlayFinish(); // 0xa84 Func
	ResumeWorld(); // 0xa86 Func
	var_58_bool = 1; // 0xa88 MovB
	return 18; // 0xa89 Return
	
Label_2684:
	var_101_string = "head"; // 0xa7c PushS
	HasAnimationTrack(var_78_bool, var_101_string); // 0xa7d Func
	var_102_bool = var_78_bool; // 0xa7f Push
	if(var_102_bool == 0) goto Label_2692; // 0xa80 JumpB
	var_103_string = "head"; // 0xa81 PushS
	LookAsyncCamera(var_103_string); // 0xa82 Func
}


func_1124(var_2_bool)
{
	Stop(); // 0x464 Func
	var_23_int = 120; // 0x466 PushI
	KillTimer(var_23_int); // 0x467 Func
	var_2_bool = 1; // 0x469 TMovB
	return 0; // 0x46a Return
}


func_1140(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x474 PushV
	GetDirection(var_77_cvector); // 0x475 Func
	var_79_cvector = CVector(0,0,0); var_80_object = Obj(); // 0x477 PushV
	var_80_object = var_0_bool; // 0x478 MovT
	func_2517(var_80_object); // 0x479 NEW_2
	var_78_cvector = var_79_cvector; // 0x47a Mov
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x47c PushV
	var_86_cvector = var_77_cvector; // 0x47d Mov
	var_87_cvector = var_78_cvector; // 0x47e Mov
	func_2870(var_85_float, var_86_cvector, var_87_cvector); // 0x47f NEW_2
	var_93_float = -0.34202; // 0x481 PushF
	var_74_bool = var_85_float >= var_93_float; // 0x482 GE2
	return 4; // 0x483 Return
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
	func_2855(var_52_cvector, var_53_cvector); // 0x48e NEW_2
	var_59_float = 0.75; // 0x490 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x491 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x492 Add2
	func_2855(var_50_cvector, var_51_cvector); // 0x493 NEW_2
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


func_3207(var_25_int)
{
	var_25_int = 0; // 0xc88 MovI
	return 0; // 0xc89 Return
}


func_3210()
{
	return 0; // 0xc8b Return
}


func_2698()
{
	var_217_bool = 0; var_218_bool = 0; // 0xa8a PushV
	CameraSwitchToNormal(); // 0xa8b Func
	var_219_bool = 0; // 0xa8d PushV
	func_3461(var_219_bool); // 0xa8e NEW_2
	if(var_219_bool == 0) goto Label_2706; // 0xa90 JumpB
	goto Label_2714; // 0xa91 Jump
	
Label_2714:
	return 2; // 0xa9a Return
	
Label_2706:
	var_220_string = "head"; // 0xa92 PushS
	HasAnimationTrack(var_218_bool, var_220_string); // 0xa93 Func
	var_221_bool = var_218_bool; // 0xa95 Push
	if(var_221_bool == 0) goto Label_2714; // 0xa96 JumpB
	var_222_string = "head"; // 0xa97 PushS
	UnlookAsync(var_222_string); // 0xa98 Func
}


func_3212(var_209_int)
{
	var_209_int = 0; // 0xc8d MovI
	return 0; // 0xc8e Return
}


func_652(var_160_bool)
{
	var_160_bool = 1; // 0x28c MovB
	return 0; // 0x28d Return
}


func_654()
{
	StopAnimation(); // 0x28e Func
	StopGroup0(); // 0x290 Func
	return 0; // 0x292 Return
}


func_3215()
{
	return 0; // 0xc90 Return
}


func_3217(var_25_int)
{
	var_25_int = 2; // 0xc92 MovI
	return 0; // 0xc93 Return
}


func_659(var_0_bool, var_83_object)
{
	var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_bool = 0; var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_bool = 0; // 0x293 PushV
	var_0_bool = var_83_object; // 0x294 TMov
	func_710(var_90_bool); // 0x296 NEW_2
	GetDirection(var_88_cvector); // 0x298 Func
	var_98_cvector = CVector(0,0,0); var_99_object = Obj(); // 0x29a PushV
	var_99_object = var_0_bool; // 0x29b MovT
	func_2517(var_99_object); // 0x29c NEW_2
	var_89_cvector = var_98_cvector; // 0x29d Mov
	var_104_float = 0; var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); // 0x29f PushV
	var_105_cvector = var_88_cvector; // 0x2a0 Mov
	var_106_cvector = var_89_cvector; // 0x2a1 Mov
	func_2897(var_104_float, var_105_cvector, var_106_cvector); // 0x2a2 NEW_2
	var_128_int = 0; // 0x2a4 PushI
	var_129_bool = var_104_float < var_128_int; // 0x2a5 LT
	if(var_129_bool == 0) goto Label_685; // 0x2a6 JumpB
	var_130_object = Obj(); // 0x2a7 PushV
	var_130_object = var_0_bool; // 0x2a8 MovT
	func_2614(); // 0x2a9 NEW_2
	var_90_bool = 1; // 0x2ab MovB
	goto Label_688; // 0x2ac Jump
	
Label_688:
	var_139_bool = var_90_bool; // 0x2b0 Push
	if(var_139_bool == 0) goto Label_704; // 0x2b1 JumpB
	var_140_object = Obj(); // 0x2b2 PushV
	var_140_object = var_0_bool; // 0x2b3 MovT
	func_2614(); // 0x2b4 NEW_2
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


func_3220(var_33_object)
{
	var_34_object = Obj(); // 0xc95 PushV
	var_34_object = var_33_object; // 0xc96 Mov
	func_3471(var_33_object, var_34_object); // 0xc97 NEW_2
	return 0; // 0xc99 Return
}


func_3226()
{
	return 0; // 0xc9a Return
}


func_3227(var_28_bool, var_29_object)
{
	var_30_bool = 0; var_31_bool = 0; // 0xc9b PushV
	CanSee(var_31_bool, var_29_object); // 0xc9c Func
	var_28_bool = var_31_bool; // 0xc9e Mov
	return 2; // 0xc9f Return
}


func_2715(var_224_bool, var_225_object)
{
	var_226_bool = 0; var_227_object = Obj(); var_228_float = 0; // 0xa9c PushV
	var_227_object = var_225_object; // 0xa9d Mov
	var_228_float = 70; // 0xa9e MovI
	func_2723(var_227_object, var_228_float); // 0xa9f NEW_2
	var_224_bool = var_226_bool; // 0xaa0 Mov
	return 0; // 0xaa2 Return
}


func_3232(var_40_object)
{
	var_41_object = Obj(); // 0xca1 PushV
	var_41_object = var_40_object; // 0xca2 Mov
	TaskCall(6); // 0xca3 TaskCall
	func_1380(var_42_object, var_43_cvector, var_44_bool, var_41_object); // 0xca4 NEW_2
	TaskReturn(); // 0xca5 TaskReturn
	return 0; // 0xca7 Return
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
	func_2512(var_168_cvector); // 0x4c4 NEW_2
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
	func_2512(var_180_cvector); // 0x4df NEW_2
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


func_2723(var_226_bool, var_228_float)
{
	var_229_float = 0; var_230_cvector = CVector(0,0,0); var_231_cvector = CVector(0,0,0); var_232_cvector = CVector(0,0,0); var_233_cvector = CVector(0,0,0); var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_bool = 0; var_237_float = 0; var_238_cvector = CVector(0,0,0); var_239_cvector = CVector(0,0,0); var_240_cvector = CVector(0,0,0); var_241_cvector = CVector(0,0,0); var_242_cvector = CVector(0,0,0); var_243_cvector = CVector(0,0,0); var_244_bool = 0; // 0xaa3 PushV
	GetPosition(var_238_cvector); // 0xaa4 ObjFunc
	GetEyesHeight(var_237_float); // 0xaa6 ObjFunc
	var_245_float = GetByIndex(var_238_cvector, 1); // 0xaa8 PushE
	var_245_float = var_245_float + var_237_float; // 0xaa9 Add2
	SetByIndex(var_238_cvector, 1) = var_245_float; // 0xaaa PopE
	GetPosition(var_239_cvector); // 0xaab Func
	GetEyesHeight(var_237_float); // 0xaad Func
	var_246_float = GetByIndex(var_239_cvector, 1); // 0xaaf PushE
	var_246_float = var_246_float + var_237_float; // 0xab0 Add2
	SetByIndex(var_239_cvector, 1) = var_246_float; // 0xab1 PopE
	var_240_cvector = var_238_cvector - var_239_cvector; // 0xab2 Sub2
	var_247_float = GetByIndex(var_240_cvector, 1); // 0xab3 PushE
	var_247_float = 0; // 0xab4 MovI
	SetByIndex(var_240_cvector, 1) = var_247_float; // 0xab5 PopE
	var_248_int = var_240_cvector | var_240_cvector; // 0xab6 Or
	var_249_float = sqrt(var_248_int); // 0xab7 Sqrt
	var_240_cvector = var_240_cvector / var_240_cvector; // 0xab8 Div2
	var_241_cvector = -var_240_cvector; // 0xab9 Neg2
	var_250_float = var_240_cvector * var_228_float; // 0xaba Mult
	var_251_cvector = CVector(0.0, 10.0, 0.0); // 0xabb PushVec
	var_242_cvector = var_250_float - var_251_cvector; // 0xabc Sub2
	var_243_cvector = var_239_cvector + var_242_cvector; // 0xabd Add2
	IsOverrideActive(var_244_bool); // 0xabe Func
	var_252_bool = var_244_bool; // 0xac0 Push
	if(var_252_bool == 0) goto Label_2756; // 0xac1 JumpB
	var_226_bool = 0; // 0xac2 MovB
	return 16; // 0xac3 Return
	
Label_2756:
	StopWorld(); // 0xac4 Func
	CameraTransit(var_243_cvector, var_241_cvector); // 0xac6 Func
	var_253_float = GetByIndex(var_242_cvector, 0); // 0xac8 PushE
	var_254_float = GetByIndex(var_242_cvector, 2); // 0xac9 PushE
	Rotate(var_253_float, var_254_float); // 0xaca Func
	CameraWaitForPlayFinish(); // 0xacc Func
	ResumeWorld(); // 0xace Func
	var_226_bool = 1; // 0xad0 MovB
	return 16; // 0xad1 Return
}


func_3240(var_37_bool, var_38_object)
{
	var_39_bool = 0; var_40_bool = 0; // 0xca8 PushV
	CanSee(var_40_bool, var_38_object); // 0xca9 Func
	var_37_bool = 1; // 0xcab MovB
	var_41_bool = var_40_bool; // 0xcac Push
	if(var_41_bool == 0) goto Label_3254; // 0xcad JumpB
	var_42_float = 0; var_43_object = Obj(); // 0xcae PushV
	var_43_object = var_38_object; // 0xcaf Mov
	func_2524(var_43_object); // 0xcb0 NEW_2
	var_50_int = 4000000; // 0xcb2 PushI
	var_51_bool = var_42_float <= var_50_int; // 0xcb3 LE
	if(var_51_bool == 0) goto Label_3254; // 0xcb4 JumpB
	var_37_bool = 0; // 0xcb5 MovB
	
Label_3254:
	return 2; // 0xcb6 Return
}


func_1715(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x6b3 PushV
	GetDirection(var_77_cvector); // 0x6b4 Func
	var_79_cvector = CVector(0,0,0); var_80_object = Obj(); // 0x6b6 PushV
	var_80_object = var_0_bool; // 0x6b7 MovT
	func_2517(var_80_object); // 0x6b8 NEW_2
	var_78_cvector = var_79_cvector; // 0x6b9 Mov
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x6bb PushV
	var_86_cvector = var_77_cvector; // 0x6bc Mov
	var_87_cvector = var_78_cvector; // 0x6bd Mov
	func_2870(var_85_float, var_86_cvector, var_87_cvector); // 0x6be NEW_2
	var_93_float = -0.34202; // 0x6c0 PushF
	var_74_bool = var_85_float >= var_93_float; // 0x6c1 GE2
	return 4; // 0x6c2 Return
}


func_3255(var_139_object)
{
	var_140_object = Obj(); // 0xcb8 PushV
	var_140_object = var_139_object; // 0xcb9 Mov
	TaskCall(7); // 0xcba TaskCall
	func_1574(var_141_object, var_142_cvector, var_143_bool, var_140_object); // 0xcbb NEW_2
	TaskReturn(); // 0xcbc TaskReturn
	return 0; // 0xcbe Return
}


func_3263(var_54_bool, var_55_object)
{
	var_56_bool = 0; var_57_object = Obj(); // 0xcc0 PushV
	var_57_object = var_55_object; // 0xcc1 Mov
	func_3240(var_56_bool, var_57_object); // 0xcc2 NEW_2
	var_54_bool = var_56_bool; // 0xcc3 Mov
	return 0; // 0xcc5 Return
}


func_1731(var_0_bool, var_47_int, var_48_object)
{
	var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_object = Obj(); var_55_bool = 0; var_56_int = 0; var_57_bool = 0; // 0x6c3 PushV
	var_0_bool = var_48_object; // 0x6c4 TMov
	var_58_bool = 0; var_59_object = Obj(); var_60_float = 0; // 0x6c5 PushV
	var_59_object = var_48_object; // 0x6c6 Mov
	var_60_float = 70.0; // 0x6c7 MovF
	func_2630(var_59_object, var_60_float); // 0x6c8 NEW_2
	var_104_bool = var_58_bool == 0; // 0x6ca Not
	if(var_104_bool == 0) goto Label_1742; // 0x6cb JumpB
	var_47_int = -2; // 0x6cc MovI
	return 8; // 0x6cd Return
	
Label_1742:
	CreateDialog(var_54_object); // 0x6ce Func
	var_105_int = 0; // 0x6d0 PushV
	func_3455(var_105_int); // 0x6d1 NEW_2
	SetNPCName(var_105_int); // 0x6d3 ObjFunc
	var_106_int = 0; // 0x6d5 PushV
	func_3453(var_106_int); // 0x6d6 NEW_2
	SetNPCDescription(var_106_int); // 0x6d8 ObjFunc
	var_107_string = ""; // 0x6da PushV
	func_3457(var_107_string); // 0x6db NEW_2
	SetPhoto(var_107_string); // 0x6dd ObjFunc
	var_108_string = ""; // 0x6df PushV
	func_3459(var_108_string); // 0x6e0 NEW_2
	SetPhoto2(var_108_string); // 0x6e2 ObjFunc
	var_109_int = 0; // 0x6e4 PushV
	func_3327(var_109_int); // 0x6e5 NEW_2
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
	var_215_bool = var_57_bool == 0; // 0x6fb Not
	if(var_215_bool == 0) goto Label_1794; // 0x6fc JumpB
	sync(); // 0x6fd Func
	IsDialogEnd(var_57_bool); // 0x6ff ObjFunc
	goto Label_1787; // 0x701 Jump
	
Label_1794:
	var_216_object = Obj(); // 0x702 PushV
	var_216_object = var_48_object; // 0x703 Mov
	func_2698(); // 0x704 NEW_2
	StopDialog(var_54_object); // 0x706 Func
	GetReturnValue(var_56_int); // 0x708 ObjFunc
	var_47_int = var_56_int; // 0x70a Mov
	return 8; // 0x70b Return
}


func_710(var_0_bool)
{
	var_91_object = Obj(); // 0x2c6 PushV
	var_91_object = var_0_bool; // 0x2c7 MovT
	func_2805(var_91_object); // 0x2c8 NEW_2
	return 0; // 0x2ca Return
}


func_3270(var_207_object)
{
	var_208_object = Obj(); // 0xcc7 PushV
	var_208_object = var_207_object; // 0xcc8 Mov
	func_3255(var_208_object); // 0xcc9 NEW_2
	return 0; // 0xccb Return
}


func_3276(var_30_bool)
{
	var_30_bool = 0; // 0xccd MovB
	return 0; // 0xcce Return
}


func_3279()
{
	return 0; // 0xcd0 Return
}


func_3281()
{
	var_30_int = 1000; // 0xcd2 PushI
	SetReturnValue(var_30_int); // 0xcd3 ObjFunc
	return 0; // 0xcd5 Return
}


func_2770()
{
	CameraSwitchToNormal(); // 0xad3 Func
	return 0; // 0xad5 Return
}


func_2774(var_162_string)
{
	var_163_bool = 0; var_164_float = 0; var_165_float = 0; var_166_bool = 0; var_167_float = 0; var_168_float = 0; // 0xad6 PushV
	lshHasAnimation(var_166_bool, var_162_string); // 0xad7 Func
	var_169_bool = var_166_bool; // 0xad9 Push
	if(var_169_bool == 0) goto Label_2785; // 0xada JumpB
	lshGetAnimTimes(var_162_string, var_167_float, var_168_float); // 0xadb Func
	var_170_bool = 0; // 0xadd PushB
	lshPlayAnimation(var_167_float, var_168_float, var_170_bool); // 0xade Func
	goto Label_2789; // 0xae0 Jump
	
Label_2789:
	return 6; // 0xae5 Return
	
Label_2785:
	var_171_string = "Can't find lsh animation : "; // 0xae1 PushS
	var_172_int = var_171_string + var_162_string; // 0xae2 Add
	Trace(var_172_int); // 0xae3 Func
}


func_3286(var_78_bool)
{
	var_80_int = 0; var_81_string = ""; // 0xcd7 PushV
	var_81_string = "branch"; // 0xcd8 MovS
	func_2914(var_80_int, var_81_string); // 0xcd9 NEW_2
	var_82_int = 0; // 0xcdb PushI
	var_83_bool = var_80_int == var_82_int; // 0xcdc Eq
	if(var_83_bool == 0) goto Label_3296; // 0xcdd JumpB
	var_78_bool = 1; // 0xcde MovB
	return 0; // 0xcdf Return
	
Label_3296:
	var_78_bool = 0; // 0xce0 MovB
	return 0; // 0xce1 Return
}


func_3298(var_41_bool)
{
	var_43_int = 0; var_44_string = ""; // 0xce3 PushV
	var_44_string = "branch"; // 0xce4 MovS
	func_2914(var_43_int, var_44_string); // 0xce5 NEW_2
	var_47_int = 2; // 0xce7 PushI
	var_48_bool = var_43_int == var_47_int; // 0xce8 Eq
	if(var_48_bool == 0) goto Label_3308; // 0xce9 JumpB
	var_41_bool = 1; // 0xcea MovB
	return 0; // 0xceb Return
	
Label_3308:
	var_41_bool = 0; // 0xcec MovB
	return 0; // 0xced Return
}


func_2790(var_53_string, var_54_bool)
{
	var_57_bool = 0; var_58_float = 0; var_59_float = 0; var_60_bool = 0; var_61_float = 0; var_62_float = 0; // 0xae6 PushV
	lshHasAnimation(var_60_bool, var_53_string); // 0xae7 Func
	var_63_bool = var_60_bool; // 0xae9 Push
	if(var_63_bool == 0) goto Label_2800; // 0xaea JumpB
	lshGetAnimTimes(var_53_string, var_61_float, var_62_float); // 0xaeb Func
	lshPlayAnimation(var_61_float, var_62_float, var_54_bool); // 0xaed Func
	goto Label_2804; // 0xaef Jump
	
Label_2804:
	return 6; // 0xaf4 Return
	
Label_2800:
	var_64_string = "Can't find lsh animation : "; // 0xaf0 PushS
	var_65_int = var_64_string + var_53_string; // 0xaf1 Add
	Trace(var_65_int); // 0xaf2 Func
}


func_3310(var_93_bool, var_94_object)
{
	var_95_bool = 0; var_96_object = Obj(); // 0xcef PushV
	var_96_object = var_94_object; // 0xcf0 Mov
	func_3320(var_96_object); // 0xcf1 NEW_2
	if(var_95_bool == 0) goto Label_3318; // 0xcf3 JumpB
	var_93_bool = 1; // 0xcf4 MovB
	return 0; // 0xcf5 Return
	
Label_3318:
	var_93_bool = 0; // 0xcf6 MovB
	return 0; // 0xcf7 Return
}


func_2805(var_91_object)
{
	var_92_float = 0; var_93_cvector = CVector(0,0,0); var_94_float = 0; var_95_cvector = CVector(0,0,0); // 0xaf5 PushV
	GetEyesHeight(var_94_float); // 0xaf6 ObjFunc
	var_95_cvector = CVector(0.0, 0.0, 0.0); // 0xaf8 MovV
	var_96_float = GetByIndex(var_95_cvector, 1); // 0xaf9 PushE
	var_96_float = var_94_float; // 0xafa Mov
	SetByIndex(var_95_cvector, 1) = var_96_float; // 0xafb PopE
	var_97_string = "head"; // 0xafc PushS
	LookAsync(var_91_object, var_97_string, var_95_cvector); // 0xafd Func
	return 4; // 0xaff Return
}


func_3320(var_95_bool)
{
	var_97_int = 0; // 0xcf9 PushV
	func_2919(var_97_int); // 0xcfa NEW_2
	var_103_int = 5; // 0xcfc PushI
	var_95_bool = var_97_int == var_103_int; // 0xcfd Eq2
	return 0; // 0xcfe Return
}


func_251(var_2_bool)
{
	var_23_int = 110; // 0xfb PushI
	KillTimer(var_23_int); // 0xfc Func
	var_2_bool = 0; // 0xfe TMovB
	func_387(var_21_string, var_22_bool); // 0x100 NEW_2
	return 0; // 0x102 Return
}


func_3327(var_109_int)
{
	var_110_int = 0; var_111_int = 0; // 0xcff PushV
	var_112_string = "branch"; // 0xd00 PushS
	GetVariable(var_112_string, var_111_int); // 0xd01 Func
	var_113_int = 0; // 0xd03 PushI
	var_114_bool = var_111_int == var_113_int; // 0xd04 Eq
	if(var_114_bool == 0) goto Label_3337; // 0xd05 JumpB
	var_109_int = 1; // 0xd06 MovI
	return 2; // 0xd07 Return
	
Label_3337:
	var_115_int = 1; // 0xd09 PushI
	var_116_bool = var_111_int == var_115_int; // 0xd0a Eq
	if(var_116_bool == 0) goto Label_3342; // 0xd0b JumpB
	var_109_int = 2; // 0xd0c MovI
	return 2; // 0xd0d Return
	
Label_3342:
	var_109_int = 3; // 0xd0e MovI
	return 2; // 0xd0f Return
}


func_2816()
{
	var_25_bool = 0; // 0xb00 PushV
	func_3461(var_25_bool); // 0xb01 NEW_2
	if(var_25_bool == 0) goto Label_2822; // 0xb03 JumpB
	lshStopSpeech(); // 0xb04 Func
	
Label_2822:
	return 0; // 0xb06 Return
}


func_259(var_2_bool)
{
	var_81_int = 110; // 0x103 PushI
	KillTimer(var_81_int); // 0x104 Func
	var_2_bool = 0; // 0x106 TMovB
	func_394(var_26_bool, var_27_int); // 0x108 NEW_2
	return 0; // 0x10a Return
}


func_2823(var_53_string, var_54_int, var_55_int)
{
	var_56_bool = 0; var_57_bool = 0; // 0xb07 PushV
	var_58_bool = 0; var_59_int = 0; var_60_int = 0; // 0xb08 PushV
	var_59_int = var_54_int; // 0xb09 Mov
	var_60_int = var_55_int; // 0xb0a Mov
	func_2865(var_58_bool, var_59_int, var_60_int); // 0xb0b NEW_2
	if(var_58_bool == 0) goto Label_2833; // 0xb0d JumpB
	var_61_int = 0; // 0xb0e PushI
	AddItem(var_57_bool, var_53_string, var_61_int); // 0xb0f Func
	
Label_2833:
	return 2; // 0xb11 Return
}


func_1805(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_118_object, var_119_object)
{
	var_0_bool = var_119_object; // 0x70e TMov
	var_1_bool = var_118_object; // 0x70f TMov
	var_3_bool = 0; // 0x710 TMovB
	var_124_int = 1; // 0x711 PushI
	if(var_124_int == 0) goto Label_1894; // 0x712 JumpB
	var_125_bool = 0; var_126_object = Obj(); // 0x713 PushV
	var_126_object = var_1_bool; // 0x714 MovT
	func_3298(var_126_object); // 0x715 NEW_2
	if(var_125_bool == 0) goto Label_1841; // 0x717 JumpB
	var_133_string = ""; // 0x718 PushV
	var_133_string = "Neutral"; // 0x719 MovS
	func_1924(var_119_object, var_133_string); // 0x71a NEW_2
	var_150_int = 543287; // 0x71c PushI
	SetMessage(var_150_int); // 0x71d TObjFunc
	ClearReplies(); // 0x71f TObjFunc
	var_151_int = 543288; // 0x721 PushI
	var_152_int = -1; // 0x722 PushI
	var_153_int = 45744; // 0x723 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x724 TObjFunc
	var_154_int = 543289; // 0x726 PushI
	var_155_int = -1; // 0x727 PushI
	var_156_int = 45745; // 0x728 PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x729 TObjFunc
	var_157_int = 543304; // 0x72b PushI
	var_158_int = -1; // 0x72c PushI
	var_159_int = 45760; // 0x72d PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x72e TObjFunc
	goto Label_1894; // 0x730 Jump
	
Label_1894:
	var_160_bool = 0; // 0x766 PushV
	func_3461(var_160_bool); // 0x767 NEW_2
	if(var_160_bool == 0) goto Label_1909; // 0x769 JumpB
	
Label_1898:
	lshWaitForAnimEnd(); // 0x76a Func
	var_161_bool = var_3_bool; // 0x76c PushT
	if(var_161_bool == 0) goto Label_1903; // 0x76d JumpB
	goto Label_1908; // 0x76e Jump
	
Label_1908:
	goto Label_1923; // 0x774 Jump
	
Label_1923:
	return 0; // 0x783 Return
	
Label_1903:
	var_162_string = ""; // 0x76f PushV
	var_162_string = var_2_bool; // 0x770 MovT
	func_2774(var_162_string); // 0x771 NEW_2
	goto Label_1898; // 0x773 Jump
	
Label_1909:
	var_173_string = "all"; // 0x775 PushS
	var_174_string = "idle"; // 0x776 PushS
	PlayAnimation(var_173_string, var_174_string); // 0x777 Func
	
Label_1913:
	WaitForAnimEnd(); // 0x779 Func
	var_175_bool = var_3_bool; // 0x77b PushT
	if(var_175_bool == 0) goto Label_1918; // 0x77c JumpB
	goto Label_1923; // 0x77d Jump
	
Label_1918:
	var_176_string = "all"; // 0x77e PushS
	var_177_string = "idle"; // 0x77f PushS
	PlayAnimation(var_176_string, var_177_string); // 0x780 Func
	goto Label_1913; // 0x782 Jump
	
Label_1841:
	var_178_string = ""; // 0x731 PushV
	var_178_string = "Neutral"; // 0x732 MovS
	func_1924(var_119_object, var_178_string); // 0x733 NEW_2
	var_179_int = 537723; // 0x735 PushI
	SetMessage(var_179_int); // 0x736 TObjFunc
	ClearReplies(); // 0x738 TObjFunc
	var_180_bool = 0; var_181_object = Obj(); // 0x73a PushV
	var_181_object = var_1_bool; // 0x73b MovT
	func_3286(var_181_object); // 0x73c NEW_2
	if(var_180_bool == 0) goto Label_1860; // 0x73e JumpB
	var_186_int = 537724; // 0x73f PushI
	var_187_int = 39573; // 0x740 PushI
	var_188_int = 39572; // 0x741 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x742 TObjFunc
	
Label_1860:
	var_189_bool = 0; var_190_object = Obj(); // 0x744 PushV
	var_190_object = var_1_bool; // 0x745 MovT
	func_3286(var_190_object); // 0x746 NEW_2
	var_191_bool = var_189_bool == 0; // 0x748 Not
	if(var_191_bool == 0) goto Label_1871; // 0x749 JumpB
	var_192_int = 537728; // 0x74a PushI
	var_193_int = -1; // 0x74b PushI
	var_194_int = 39576; // 0x74c PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x74d TObjFunc
	
Label_1871:
	var_195_bool = 0; var_196_object = Obj(); // 0x74f PushV
	var_196_object = var_1_bool; // 0x750 MovT
	func_3310(var_195_bool, var_196_object); // 0x751 NEW_2
	if(var_195_bool == 0) goto Label_1881; // 0x753 JumpB
	var_206_int = 537755; // 0x754 PushI
	var_207_int = 39604; // 0x755 PushI
	var_208_int = 39603; // 0x756 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x757 TObjFunc
	
Label_1881:
	var_209_int = 537783; // 0x759 PushI
	var_210_int = -1; // 0x75a PushI
	var_211_int = 39634; // 0x75b PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x75c TObjFunc
	var_212_int = 537784; // 0x75e PushI
	var_213_int = -1; // 0x75f PushI
	var_214_int = 39635; // 0x760 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x761 TObjFunc
	goto Label_1894; // 0x763 Jump
}


func_3344(var_40_int)
{
	var_41_int = 0; var_42_int = 0; // 0xd10 PushV
	var_43_string = "branch"; // 0xd11 PushS
	GetVariable(var_43_string, var_42_int); // 0xd12 Func
	var_40_int = var_42_int; // 0xd14 Mov
	return 2; // 0xd15 Return
}


func_2834(var_29_string, var_30_int, var_31_int, var_32_int)
{
	var_33_int = 0; var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0xb12 PushV
	var_37_bool = 0; var_38_int = 0; var_39_int = 0; // 0xb13 PushV
	var_38_int = var_30_int; // 0xb14 Mov
	var_39_int = var_31_int; // 0xb15 Mov
	func_2865(var_37_bool, var_38_int, var_39_int); // 0xb16 NEW_2
	if(var_37_bool == 0) goto Label_2848; // 0xb18 JumpB
	irand(var_35_int, var_32_int); // 0xb19 Func
	var_42_int = 0; // 0xb1b PushI
	var_43_int = 1; // 0xb1c PushI
	var_44_int = var_35_int + var_43_int; // 0xb1d Add
	AddItem(var_36_bool, var_29_string, var_42_int, var_44_int); // 0xb1e Func
	
Label_2848:
	return 4; // 0xb20 Return
}


func_276(var_2_bool, var_23_object)
{
	var_24_bool = 0; var_25_int = 0; var_26_bool = 0; var_27_int = 0; // 0x114 PushV
	var_28_bool = 0; var_29_object = Obj(); // 0x115 PushV
	var_29_object = var_23_object; // 0x116 Mov
	func_2590(var_28_bool, var_29_object); // 0x117 NEW_2
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
	func_3088(var_66_object); // 0x126 NEW_2
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
	func_3097(var_82_object); // 0x134 NEW_2
	var_2_bool = 1; // 0x136 TMovB
	var_147_int = 110; // 0x137 PushI
	var_148_float = 10.0; // 0x138 PushF
	SetTimer(var_147_int, var_148_float); // 0x139 Func
	
Label_315:
	return 4; // 0x13b Return
}


func_3350(var_68_float)
{
	var_69_object = Obj(); var_70_float = 0; var_71_object = Obj(); var_72_float = 0; // 0xd16 PushV
	var_73_string = "player"; // 0xd17 PushS
	FindActor(var_71_object, var_73_string); // 0xd18 Func
	var_74_bool = var_71_object == 0; // 0xd1a Not
	if(var_74_bool == 0) goto Label_3358; // 0xd1b JumpB
	var_68_float = 0; // 0xd1c MovI
	return 4; // 0xd1d Return
	
Label_3358:
	var_75_string = "reputation"; // 0xd1e PushS
	GetProperty(var_75_string, var_72_float); // 0xd1f ObjFunc
	var_68_float = var_72_float; // 0xd21 Mov
	return 4; // 0xd22 Return
}


func_1311(var_2_bool)
{
	Stop(); // 0x51f Func
	var_23_int = 120; // 0x521 PushI
	KillTimer(var_23_int); // 0x522 Func
	var_2_bool = 1; // 0x524 TMovB
	return 0; // 0x525 Return
}


func_2849(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); // 0xb21 PushV
	self(var_32_object); // 0xb22 Func
	var_30_object = var_32_object; // 0xb24 Mov
	return 2; // 0xb25 Return
}


func_3364(var_39_object)
{
	var_40_int = 0; // 0xd25 PushV
	func_3344(var_40_int); // 0xd26 NEW_2
	var_44_int = 1; // 0xd28 PushI
	var_45_bool = var_40_int == var_44_int; // 0xd29 Eq
	if(var_45_bool == 0) goto Label_3374; // 0xd2a JumpB
	WorkWithCorpse(var_39_object); // 0xd2b Func
	goto Label_3376; // 0xd2d Jump
	
Label_3376:
	return 0; // 0xd30 Return
	
Label_3374:
	Barter(var_39_object); // 0xd2e Func
}


func_2855(var_52_cvector, var_53_cvector)
{
	var_54_float = 0; var_55_float = 0; // 0xb27 PushV
	var_56_int = var_53_cvector | var_53_cvector; // 0xb28 Or
	var_55_float = sqrt(var_56_int); // 0xb29 Sqrt2
	var_57_float = 0.0; // 0xb2a PushF
	var_58_bool = var_55_float < var_57_float; // 0xb2b LT
	if(var_58_bool == 0) goto Label_2863; // 0xb2c JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0xb2d MovV
	return 2; // 0xb2e Return
	
Label_2863:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0xb2f Div2
	return 2; // 0xb30 Return
}


func_1327(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x52f PushV
	GetDirection(var_77_cvector); // 0x530 Func
	var_79_cvector = CVector(0,0,0); var_80_object = Obj(); // 0x532 PushV
	var_80_object = var_0_bool; // 0x533 MovT
	func_2517(var_80_object); // 0x534 NEW_2
	var_78_cvector = var_79_cvector; // 0x535 Mov
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x537 PushV
	var_86_cvector = var_77_cvector; // 0x538 Mov
	var_87_cvector = var_78_cvector; // 0x539 Mov
	func_2870(var_85_float, var_86_cvector, var_87_cvector); // 0x53a NEW_2
	var_93_float = -0.34202; // 0x53c PushF
	var_74_bool = var_85_float >= var_93_float; // 0x53d GE2
	return 4; // 0x53e Return
}


func_2865(var_37_bool, var_38_int, var_39_int)
{
	var_40_int = 0; var_41_int = 0; // 0xb31 PushV
	irand(var_41_int, var_39_int); // 0xb32 Func
	var_37_bool = var_41_int < var_38_int; // 0xb34 LT2
	return 2; // 0xb35 Return
}


func_3377(var_24_bool)
{
	var_25_int = 0; var_26_int = 0; // 0xd31 PushV
	var_27_int = 0; // 0xd32 PushI
	ClearSubContainer(var_27_int); // 0xd33 Func
	var_28_bool = var_24_bool; // 0xd35 Push
	if(var_28_bool == 0) goto Label_3405; // 0xd36 JumpB
	var_29_string = ""; var_30_int = 0; var_31_int = 0; var_32_int = 0; // 0xd37 PushV
	var_29_string = "rifle_ammo"; // 0xd38 MovS
	var_30_int = 1; // 0xd39 MovI
	var_31_int = 2; // 0xd3a MovI
	var_32_int = 2; // 0xd3b MovI
	func_2834(var_29_string, var_30_int, var_31_int, var_32_int); // 0xd3c NEW_2
	var_45_string = ""; var_46_int = 0; var_47_int = 0; var_48_int = 0; // 0xd3e PushV
	var_45_string = "revolver_ammo"; // 0xd3f MovS
	var_46_int = 1; // 0xd40 MovI
	var_47_int = 2; // 0xd41 MovI
	var_48_int = 2; // 0xd42 MovI
	func_2834(var_45_string, var_46_int, var_47_int, var_48_int); // 0xd43 NEW_2
	var_49_string = ""; var_50_int = 0; var_51_int = 0; var_52_int = 0; // 0xd45 PushV
	var_49_string = "samopal_ammo"; // 0xd46 MovS
	var_50_int = 2; // 0xd47 MovI
	var_51_int = 2; // 0xd48 MovI
	var_52_int = 2; // 0xd49 MovI
	func_2834(var_49_string, var_50_int, var_51_int, var_52_int); // 0xd4a NEW_2
	goto Label_3452; // 0xd4c Jump
	
Label_3452:
	return 2; // 0xd7c Return
	
Label_3405:
	var_53_string = ""; var_54_int = 0; var_55_int = 0; // 0xd4d PushV
	var_53_string = "lockpick"; // 0xd4e MovS
	var_54_int = 1; // 0xd4f MovI
	var_55_int = 4; // 0xd50 MovI
	func_2823(var_53_string, var_54_int, var_55_int); // 0xd51 NEW_2
	var_62_string = ""; var_63_int = 0; var_64_int = 0; var_65_int = 0; // 0xd53 PushV
	var_62_string = "alpha_pills"; // 0xd54 MovS
	var_63_int = 1; // 0xd55 MovI
	var_64_int = 2; // 0xd56 MovI
	var_65_int = 3; // 0xd57 MovI
	func_2834(var_62_string, var_63_int, var_64_int, var_65_int); // 0xd58 NEW_2
	var_66_string = ""; var_67_int = 0; var_68_int = 0; // 0xd5a PushV
	var_66_string = "meradorm"; // 0xd5b MovS
	var_67_int = 1; // 0xd5c MovI
	var_68_int = 2; // 0xd5d MovI
	func_2823(var_66_string, var_67_int, var_68_int); // 0xd5e NEW_2
	var_69_string = ""; var_70_int = 0; var_71_int = 0; // 0xd60 PushV
	var_69_string = "powder"; // 0xd61 MovS
	var_70_int = 1; // 0xd62 MovI
	var_71_int = 15; // 0xd63 MovI
	func_2823(var_69_string, var_70_int, var_71_int); // 0xd64 NEW_2
	var_72_int = 0; // 0xd66 PushV
	func_2919(var_72_int); // 0xd67 NEW_2
	var_26_int = var_72_int; // 0xd68 Mov
	var_78_int = 4; // 0xd6a PushI
	var_79_bool = var_26_int >= var_78_int; // 0xd6b GE
	if(var_79_bool == 0) goto Label_3443; // 0xd6c JumpB
	var_80_string = ""; var_81_int = 0; var_82_int = 0; // 0xd6d PushV
	var_80_string = "beta_pills"; // 0xd6e MovS
	var_81_int = 1; // 0xd6f MovI
	var_82_int = 2; // 0xd70 MovI
	func_2823(var_80_string, var_81_int, var_82_int); // 0xd71 NEW_2
	
Label_3443:
	var_83_int = 6; // 0xd73 PushI
	var_84_bool = var_26_int >= var_83_int; // 0xd74 GE
	if(var_84_bool == 0) goto Label_3452; // 0xd75 JumpB
	var_85_string = ""; var_86_int = 0; var_87_int = 0; // 0xd76 PushV
	var_85_string = "gamma_pills"; // 0xd77 MovS
	var_86_int = 1; // 0xd78 MovI
	var_87_int = 7; // 0xd79 MovI
	func_2823(var_85_string, var_86_int, var_87_int); // 0xd7a NEW_2
}


func_2870(var_85_float, var_86_cvector, var_87_cvector)
{
	var_88_int = var_86_cvector | var_87_cvector; // 0xb37 Or
	var_89_int = var_86_cvector | var_86_cvector; // 0xb38 Or
	var_90_int = var_87_cvector | var_87_cvector; // 0xb39 Or
	var_91_float = var_89_int * var_90_int; // 0xb3a Mult
	var_92_float = sqrt(var_91_float); // 0xb3b Sqrt
	var_85_float = var_88_int / var_88_int; // 0xb3c Div2
	return 0; // 0xb3d Return
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


func_2878(var_75_float, var_76_cvector, var_77_cvector)
{
	var_78_float = GetByIndex(var_76_cvector, 0); // 0xb3f PushE
	var_79_float = GetByIndex(var_77_cvector, 0); // 0xb40 PushE
	var_80_float = var_78_float * var_79_float; // 0xb41 Mult
	var_81_float = GetByIndex(var_76_cvector, 2); // 0xb42 PushE
	var_82_float = GetByIndex(var_77_cvector, 2); // 0xb43 PushE
	var_83_float = var_81_float * var_82_float; // 0xb44 Mult
	var_75_float = var_80_float + var_83_float; // 0xb45 Add2
	return 0; // 0xb46 Return
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
	func_2855(var_52_cvector, var_53_cvector); // 0x550 NEW_2
	var_59_float = 0.75; // 0x552 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x553 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x554 Add2
	func_2855(var_50_cvector, var_51_cvector); // 0x555 NEW_2
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


func_2887(var_84_float, var_85_cvector)
{
	var_86_float = GetByIndex(var_85_cvector, 0); // 0xb48 PushE
	var_87_float = GetByIndex(var_85_cvector, 0); // 0xb49 PushE
	var_88_float = var_86_float * var_87_float; // 0xb4a Mult
	var_89_float = GetByIndex(var_85_cvector, 2); // 0xb4b PushE
	var_90_float = GetByIndex(var_85_cvector, 2); // 0xb4c PushE
	var_91_float = var_89_float * var_90_float; // 0xb4d Mult
	var_92_int = var_88_float + var_91_float; // 0xb4e Add
	var_84_float = sqrt(var_92_int); // 0xb4f Sqrt2
	return 0; // 0xb50 Return
}


func_2897(var_72_float, var_73_cvector, var_74_cvector)
{
	var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); // 0xb52 PushV
	var_76_cvector = var_73_cvector; // 0xb53 Mov
	var_77_cvector = var_74_cvector; // 0xb54 Mov
	func_2878(var_75_float, var_76_cvector, var_77_cvector); // 0xb55 NEW_2
	var_84_float = 0; var_85_cvector = CVector(0,0,0); // 0xb57 PushV
	var_85_cvector = var_73_cvector; // 0xb58 Mov
	func_2887(var_84_float, var_85_cvector); // 0xb59 NEW_2
	var_93_float = 0; var_94_cvector = CVector(0,0,0); // 0xb5b PushV
	var_94_cvector = var_74_cvector; // 0xb5c Mov
	func_2887(var_93_float, var_94_cvector); // 0xb5d NEW_2
	var_95_float = var_84_float * var_93_float; // 0xb5f Mult
	var_72_float = var_75_float / var_75_float; // 0xb60 Div2
	return 0; // 0xb61 Return
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


func_2914(var_43_int, var_44_string)
{
	var_45_int = 0; var_46_int = 0; // 0xb62 PushV
	GetVariable(var_44_string, var_46_int); // 0xb63 Func
	var_43_int = var_46_int; // 0xb65 Mov
	return 2; // 0xb66 Return
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
	func_2512(var_97_cvector); // 0x586 NEW_2
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
	func_2512(var_109_cvector); // 0x5a1 NEW_2
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


func_2919(var_72_int)
{
	var_73_float = 0; var_74_float = 0; // 0xb67 PushV
	GetGameTime(var_74_float); // 0xb68 Func
	var_75_int = 1; // 0xb6a PushI
	var_76_int = 0; // 0xb6b PushV
	var_77_int = 24; // 0xb6c PushI
	var_76_int = var_74_float / var_74_float; // 0xb6d Div2
	var_72_int = var_75_int + var_76_int; // 0xb6e Add2
	return 2; // 0xb6f Return
}


func_375(var_107_float)
{
	var_108_float = 0; var_109_float = 0; // 0x177 PushV
	GetCameraFarDistance(var_109_float); // 0x178 Func
	var_107_float = var_109_float; // 0x17a Mov
	return 2; // 0x17b Return
}


func_2936(var_26_bool, var_27_object, var_28_string)
{
	var_29_string = "unholster"; // 0xb79 PushS
	var_30_bool = var_28_string == var_29_string; // 0xb7a Eq
	if(var_30_bool == 0) goto Label_2947; // 0xb7b JumpB
	var_31_bool = 0; var_32_object = Obj(); // 0xb7c PushV
	var_32_object = var_27_object; // 0xb7d Mov
	func_3227(var_31_bool, var_32_object); // 0xb7e NEW_2
	var_26_bool = var_31_bool; // 0xb7f Mov
	return 0; // 0xb81 Return
	
Label_2947:
	var_35_string = "player_shot"; // 0xb83 PushS
	var_36_bool = var_28_string == var_35_string; // 0xb84 Eq
	if(var_36_bool == 0) goto Label_2957; // 0xb85 JumpB
	var_37_bool = 0; var_38_object = Obj(); // 0xb86 PushV
	var_38_object = var_27_object; // 0xb87 Mov
	func_3240(var_37_bool, var_38_object); // 0xb88 NEW_2
	var_26_bool = var_37_bool; // 0xb89 Mov
	return 0; // 0xb8b Return
	
Label_2957:
	var_52_string = "battle"; // 0xb8d PushS
	var_53_bool = var_28_string == var_52_string; // 0xb8e Eq
	if(var_53_bool == 0) goto Label_2966; // 0xb8f JumpB
	var_54_bool = 0; var_55_object = Obj(); // 0xb90 PushV
	var_55_object = var_27_object; // 0xb91 Mov
	func_3263(var_54_bool, var_55_object); // 0xb92 NEW_2
	var_26_bool = var_54_bool; // 0xb93 Mov
	return 0; // 0xb95 Return
	
Label_2966:
	var_26_bool = 0; // 0xb96 MovB
	return 0; // 0xb97 Return
}


func_3453(var_106_int)
{
	var_106_int = 515561; // 0xd7d MovI
	return 0; // 0xd7e Return
}


func_3455(var_105_int)
{
	var_105_int = 503346; // 0xd7f MovI
	return 0; // 0xd80 Return
}


func_3457(var_107_string)
{
	var_107_string = "ui/NPC_Citizen1.png"; // 0xd81 MovS
	return 0; // 0xd82 Return
}


func_387(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x183 TMovB
	var_1_bool = 0; // 0x184 TMovB
	Stop(); // 0x185 Func
	StopGroup0(); // 0x187 Func
	return 0; // 0x189 Return
}


func_1924(var_2_bool, var_49_string)
{
	var_50_bool = 0; // 0x785 PushV
	func_3461(var_50_bool); // 0x786 NEW_2
	var_51_bool = var_50_bool == 0; // 0x788 Not
	if(var_51_bool == 0) goto Label_1931; // 0x789 JumpB
	return 0; // 0x78a Return
	
Label_1931:
	var_52_bool = var_49_string == var_2_bool; // 0x78b Eq
	if(var_52_bool == 0) goto Label_1934; // 0x78c JumpB
	return 0; // 0x78d Return
	
Label_1934:
	var_53_string = ""; var_54_bool = 0; // 0x78e PushV
	var_53_string = var_49_string; // 0x78f Mov
	var_55_string = ""; // 0x790 PushS
	var_56_bool = var_49_string == var_55_string; // 0x791 Eq
	if(var_56_bool == 0) goto Label_1941; // 0x792 JumpB
	var_54_bool = 0; // 0x793 MovB
	goto Label_1942; // 0x794 Jump
	
Label_1942:
	func_2790(var_53_string, var_54_bool); // 0x796 NEW_2
	var_2_bool = var_49_string; // 0x798 TMov
	return 0; // 0x799 Return
	
Label_1941:
	var_54_bool = 1; // 0x795 MovB
}


func_3461(var_25_bool)
{
	var_25_bool = 0; // 0xd85 MovB
	return 0; // 0xd86 Return
}


func_3459(var_108_string)
{
	var_108_string = "ui/NPC_Citizen1_b.png"; // 0xd83 MovS
	return 0; // 0xd84 Return
}


func_3463()
{
	var_23_bool = GlobalVars[0]; // 0xd87 PushGE
	var_23_bool = 0; // 0xd88 MovB
	GlobalVars[0] = var_23_bool; // 0xd89 PopGE
	var_24_bool = 0; // 0xd8a PushV
	var_24_bool = 0; // 0xd8b MovB
	func_3377(var_24_bool); // 0xd8c NEW_2
	return 0; // 0xd8e Return
}


func_394(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x18a TMovB
	var_1_bool = 1; // 0x18b TMovB
	Stop(); // 0x18c Func
	StopGroup0(); // 0x18e Func
	return 0; // 0x190 Return
}


func_3471(var_34_object, var_49_object)
{
	var_35_bool = 0; var_36_bool = 0; // 0xd8f PushV
	var_37_bool = GlobalVars[0]; // 0xd90 PushGE
	if(var_37_bool == 0) goto Label_3484; // 0xd91 JumpB
	IsOverrideActive(var_36_bool); // 0xd92 Func
	var_38_bool = var_36_bool == 0; // 0xd94 Not
	if(var_38_bool == 0) goto Label_3482; // 0xd95 JumpB
	var_39_object = Obj(); // 0xd96 PushV
	var_39_object = var_34_object; // 0xd97 Mov
	func_3364(var_39_object); // 0xd98 NEW_2
	
Label_3482:
	return 2; // 0xd9a Return
	
Label_3484:
	var_46_int = 1000; // 0xd9c PushI
	var_47_int = 0; var_48_object = Obj(); // 0xd9d PushV
	var_48_object = var_34_object; // 0xd9e Mov
	TaskCall(8); // 0xd9f TaskCall
	func_1731(var_49_object, var_47_int, var_48_object); // 0xda0 NEW_2
	TaskReturn(); // 0xda1 TaskReturn
	var_223_bool = var_46_int == var_49_object; // 0xda3 Eq
	if(var_223_bool == 0) goto Label_3510; // 0xda4 JumpB
	var_224_bool = 0; var_225_object = Obj(); // 0xda5 PushV
	var_225_object = var_34_object; // 0xda6 Mov
	func_2715(var_224_bool, var_225_object); // 0xda7 NEW_2
	var_255_bool = var_224_bool == 0; // 0xda9 Not
	if(var_255_bool == 0) goto Label_3500; // 0xdaa JumpB
	return 2; // 0xdab Return
	
Label_3500:
	var_256_object = Obj(); // 0xdac PushV
	var_256_object = var_34_object; // 0xdad Mov
	TaskCall(0); // 0xdae TaskCall
	func_0(var_256_object); // 0xdaf NEW_2
	TaskReturn(); // 0xdb0 TaskReturn
	var_263_object = Obj(); // 0xdb2 PushV
	var_263_object = var_34_object; // 0xdb3 Mov
	func_2770(); // 0xdb4 NEW_2
	
Label_3510:
	return 2; // 0xdb6 Return
}


func_401(var_117_bool)
{
	var_117_bool = 0; // 0x191 MovB
	return 0; // 0x192 Return
}


func_403(var_111_object, var_112_cvector)
{
	var_113_object = Obj(); var_114_object = Obj(); // 0x193 PushV
	FindShiftedPathTo(var_114_object, var_112_cvector); // 0x194 Func
	var_111_object = var_114_object; // 0x196 Mov
	return 2; // 0x197 Return
}


func_2968(var_60_object, var_61_string)
{
	var_62_string = "unholster"; // 0xb99 PushS
	var_63_bool = var_61_string == var_62_string; // 0xb9a Eq
	if(var_63_bool == 0) goto Label_2977; // 0xb9b JumpB
	var_64_object = Obj(); // 0xb9c PushV
	var_64_object = var_60_object; // 0xb9d Mov
	func_3232(var_64_object); // 0xb9e NEW_2
	goto Label_2992; // 0xba0 Jump
	
Label_2992:
	return 0; // 0xbb0 Return
	
Label_2977:
	var_137_string = "player_shot"; // 0xba1 PushS
	var_138_bool = var_61_string == var_137_string; // 0xba2 Eq
	if(var_138_bool == 0) goto Label_2985; // 0xba3 JumpB
	var_139_object = Obj(); // 0xba4 PushV
	var_139_object = var_60_object; // 0xba5 Mov
	func_3255(var_139_object); // 0xba6 NEW_2
	goto Label_2992; // 0xba8 Jump
	
Label_2985:
	var_205_string = "battle"; // 0xba9 PushS
	var_206_bool = var_61_string == var_205_string; // 0xbaa Eq
	if(var_206_bool == 0) goto Label_2992; // 0xbab JumpB
	var_207_object = Obj(); // 0xbac PushV
	var_207_object = var_60_object; // 0xbad Mov
	func_3270(var_207_object); // 0xbae NEW_2
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


func_2993(var_23_bool, var_24_object)
{
	var_25_bool = 0; var_26_bool = 0; // 0xbb1 PushV
	var_27_bool = 0; // 0xbb2 PushV
	var_27_bool = 0; // 0xbb3 MovB
	var_28_bool = 0; var_29_object = Obj(); // 0xbb4 PushV
	var_29_object = var_24_object; // 0xbb5 Mov
	func_3227(var_28_bool, var_29_object); // 0xbb6 NEW_2
	if(var_28_bool == 0) goto Label_3007; // 0xbb8 JumpB
	var_32_bool = 0; var_33_object = Obj(); // 0xbb9 PushV
	var_33_object = var_24_object; // 0xbba Mov
	func_2532(var_32_bool, var_33_object); // 0xbbb NEW_2
	if(var_32_bool == 0) goto Label_3007; // 0xbbd JumpB
	var_27_bool = 1; // 0xbbe MovB
	
Label_3007:
	if(var_27_bool == 0) goto Label_3014; // 0xbbf JumpB
	IsWeaponHolstered(var_26_bool); // 0xbc0 ObjFunc
	var_36_bool = var_26_bool == 0; // 0xbc2 Not
	if(var_36_bool == 0) goto Label_3014; // 0xbc3 JumpB
	var_23_bool = 1; // 0xbc4 MovB
	return 2; // 0xbc5 Return
	
Label_3014:
	var_23_bool = 0; // 0xbc6 MovB
	return 2; // 0xbc7 Return
}


func_3511(var_67_bool)
{
	var_68_float = 0; // 0xdb7 PushV
	func_3350(var_68_float); // 0xdb8 NEW_2
	var_76_float = 0.2; // 0xdba PushF
	var_67_bool = var_68_float > var_76_float; // 0xdbb GT2
	return 0; // 0xdbc Return
}


func_3517(var_27_bool, var_28_object, var_29_object)
{
	var_31_bool = 0; var_32_object = Obj(); var_33_object = Obj(); var_34_float = 0; // 0xdbe PushV
	var_32_object = var_28_object; // 0xdbf Mov
	var_33_object = var_29_object; // 0xdc0 Mov
	var_34_float = 700.0; // 0xdc1 MovF
	func_3141(var_31_bool, var_32_object, var_33_object, var_34_float); // 0xdc2 NEW_2
	var_27_bool = var_31_bool; // 0xdc3 Mov
	return 0; // 0xdc5 Return
}


func_3016(var_39_object)
{
	var_40_object = Obj(); // 0xbc9 PushV
	var_40_object = var_39_object; // 0xbca Mov
	func_3232(var_40_object); // 0xbcb NEW_2
	return 0; // 0xbcd Return
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
	func_2855(var_52_cvector, var_53_cvector); // 0x3d3 NEW_2
	var_59_float = 0.75; // 0x3d5 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x3d6 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x3d7 Add2
	func_2855(var_50_cvector, var_51_cvector); // 0x3d8 NEW_2
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


func_3022(var_25_object)
{
	var_26_bool = 0; var_27_object = Obj(); // 0xbcf PushV
	var_27_object = var_25_object; // 0xbd0 Mov
	func_2532(var_26_bool, var_27_object); // 0xbd1 NEW_2
	if(var_26_bool == 0) goto Label_3034; // 0xbd3 JumpB
	var_30_object = Obj(); // 0xbd4 PushV
	func_2849(var_30_object); // 0xbd5 NEW_2
	var_33_float = -0.03; // 0xbd7 PushF
	ReportReputationChange(var_25_object, var_30_object, var_33_float); // 0xbd8 Func
	
Label_3034:
	return 0; // 0xbda Return
}


func_2512(var_94_cvector)
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); // 0x9d0 PushV
	GetPosition(var_96_cvector); // 0x9d1 Func
	var_94_cvector = var_96_cvector; // 0x9d3 Mov
	return 2; // 0x9d4 Return
}


func_2517(var_79_cvector)
{
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); // 0x9d5 PushV
	GetPosition(var_83_cvector); // 0x9d6 Func
	GetPosition(var_84_cvector); // 0x9d8 ObjFunc
	var_79_cvector = var_84_cvector - var_83_cvector; // 0x9da Sub2
	return 4; // 0x9db Return
}


func_3035(var_23_bool, var_24_string)
{
	var_25_object = Obj(); var_26_object = Obj(); // 0xbdb PushV
	var_27_string = "heal"; // 0xbdc PushS
	var_28_bool = var_24_string == var_27_string; // 0xbdd Eq
	if(var_28_bool == 0) goto Label_3049; // 0xbde JumpB
	var_29_string = "player"; // 0xbdf PushS
	FindActor(var_26_object, var_29_string); // 0xbe0 Func
	var_30_bool = 0; var_31_object = Obj(); // 0xbe2 PushV
	var_31_object = var_26_object; // 0xbe3 Mov
	func_3276(var_31_object); // 0xbe4 NEW_2
	var_23_bool = var_30_bool; // 0xbe5 Mov
	return 2; // 0xbe7 Return
	
Label_3049:
	var_23_bool = 0; // 0xbe9 MovB
	return 2; // 0xbea Return
}


func_2524(var_42_float)
{
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x9dc PushV
	GetPosition(var_47_cvector); // 0x9dd Func
	GetPosition(var_48_cvector); // 0x9df ObjFunc
	var_49_cvector = var_48_cvector - var_47_cvector; // 0x9e1 Sub2
	var_42_float = var_49_cvector | var_49_cvector; // 0x9e2 Or2
	return 6; // 0x9e3 Return
}


func_1505(var_2_bool)
{
	Stop(); // 0x5e1 Func
	var_23_int = 120; // 0x5e3 PushI
	KillTimer(var_23_int); // 0x5e4 Func
	var_2_bool = 1; // 0x5e6 TMovB
	return 0; // 0x5e7 Return
}


func_2532(var_32_bool, var_33_object)
{
	var_34_bool = 0; var_35_bool = 0; // 0x9e4 PushV
	IsPlayerActor(var_33_object, var_35_bool); // 0x9e5 Func
	var_32_bool = var_35_bool; // 0x9e7 Mov
	return 2; // 0x9e8 Return
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
	func_2512(var_140_cvector); // 0x409 NEW_2
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
	func_2512(var_152_cvector); // 0x424 NEW_2
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


func_2537(var_51_bool, var_52_object, var_53_string)
{
	var_54_bool = 0; var_55_bool = 0; // 0x9e9 PushV
	var_56_string = "HasProperty"; // 0x9ea PushS
	var_57_int = 2; // 0x9eb PushI
	var_58_bool = IsFuncExist(var_52_object, var_56_string, var_57_int); // 0x9ec FuncExist
	var_59_bool = var_58_bool == 0; // 0x9ed Not
	if(var_59_bool == 0) goto Label_2545; // 0x9ee JumpB
	var_51_bool = 0; // 0x9ef MovB
	return 2; // 0x9f0 Return
	
Label_2545:
	HasProperty(var_53_string, var_55_bool); // 0x9f1 ObjFunc
	var_51_bool = var_55_bool; // 0x9f3 Mov
	return 2; // 0x9f4 Return
}


func_3051(var_34_string)
{
	var_35_object = Obj(); var_36_object = Obj(); // 0xbeb PushV
	var_37_string = "heal"; // 0xbec PushS
	var_38_bool = var_34_string == var_37_string; // 0xbed Eq
	if(var_38_bool == 0) goto Label_3063; // 0xbee JumpB
	var_39_string = "player"; // 0xbef PushS
	FindActor(var_36_object, var_39_string); // 0xbf0 Func
	var_40_object = Obj(); // 0xbf2 PushV
	var_40_object = var_36_object; // 0xbf3 Mov
	func_3279(); // 0xbf4 NEW_2
	var_36_object = 0; // 0xbf6 SetNull
	
Label_3063:
	return 2; // 0xbf7 Return
}


func_1521(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x5f1 PushV
	GetDirection(var_77_cvector); // 0x5f2 Func
	var_79_cvector = CVector(0,0,0); var_80_object = Obj(); // 0x5f4 PushV
	var_80_object = var_0_bool; // 0x5f5 MovT
	func_2517(var_80_object); // 0x5f6 NEW_2
	var_78_cvector = var_79_cvector; // 0x5f7 Mov
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x5f9 PushV
	var_86_cvector = var_77_cvector; // 0x5fa Mov
	var_87_cvector = var_78_cvector; // 0x5fb Mov
	func_2870(var_85_float, var_86_cvector, var_87_cvector); // 0x5fc NEW_2
	var_93_float = -0.34202; // 0x5fe PushF
	var_74_bool = var_85_float >= var_93_float; // 0x5ff GE2
	return 4; // 0x600 Return
}


func_2549(var_44_bool)
{
	var_46_bool = 0; var_47_bool = 0; // 0x9f5 PushV
	IsDead(var_47_bool); // 0x9f6 ObjFunc
	var_44_bool = var_47_bool; // 0x9f8 Mov
	return 2; // 0x9f9 Return
}


func_3064(var_141_string, var_142_int)
{
	var_143_string = ""; var_144_string = ""; // 0xbf8 PushV
	var_144_string = "idle"; // 0xbf9 MovS
	var_145_int = var_142_int; // 0xbfa Push
	if(var_145_int == 0) goto Label_3069; // 0xbfb JumpB
	var_144_string = var_144_string + var_142_int; // 0xbfc Add2
	
Label_3069:
	var_141_string = var_144_string; // 0xbfd Mov
	return 2; // 0xbfe Return
}


func_2554(var_33_bool, var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj(); var_38_object = Obj(); // 0x9fa PushV
	var_39_bool = var_34_object == 0; // 0x9fb NullEq
	if(var_39_bool == 0) goto Label_2559; // 0x9fc JumpB
	var_33_bool = 0; // 0x9fd MovB
	return 4; // 0x9fe Return
	
Label_2559:
	var_40_bool = 0; // 0x9ff PushV
	var_40_bool = 0; // 0xa00 MovB
	var_41_string = "IsDead"; // 0xa01 PushS
	var_42_int = 1; // 0xa02 PushI
	var_43_bool = IsFuncExist(var_34_object, var_41_string, var_42_int); // 0xa03 FuncExist
	if(var_43_bool == 0) goto Label_2571; // 0xa04 JumpB
	var_44_bool = 0; var_45_object = Obj(); // 0xa05 PushV
	var_45_object = var_34_object; // 0xa06 Mov
	func_2549(var_45_object); // 0xa07 NEW_2
	if(var_44_bool == 0) goto Label_2571; // 0xa09 JumpB
	var_40_bool = 1; // 0xa0a MovB
	
Label_2571:
	if(var_40_bool == 0) goto Label_2574; // 0xa0b JumpB
	var_33_bool = 0; // 0xa0c MovB
	return 4; // 0xa0d Return
	
Label_2574:
	GetScene(var_37_object); // 0xa0e Func
	var_48_bool = var_37_object == 0; // 0xa10 NullEq
	if(var_48_bool == 0) goto Label_2580; // 0xa11 JumpB
	var_33_bool = 0; // 0xa12 MovB
	return 4; // 0xa13 Return
	
Label_2580:
	GetScene(var_38_object); // 0xa14 ObjFunc
	var_49_bool = var_37_object != var_38_object; // 0xa16 Neq
	if(var_49_bool == 0) goto Label_2586; // 0xa17 JumpB
	var_33_bool = 0; // 0xa18 MovB
	return 4; // 0xa19 Return
	
Label_2586:
	var_33_bool = 1; // 0xa1a MovB
	return 4; // 0xa1b Return
}


func_3071(var_135_int)
{
	var_136_int = 0; var_137_bool = 0; var_138_int = 0; var_139_bool = 0; // 0xbff PushV
	var_138_int = 0; // 0xc00 MovI
	
Label_3073:
	var_140_string = "all"; // 0xc01 PushS
	var_141_string = ""; var_142_int = 0; // 0xc02 PushV
	var_142_int = var_138_int; // 0xc03 Mov
	func_3064(var_141_string, var_142_int); // 0xc04 NEW_2
	HasAnimation(var_139_bool, var_140_string, var_141_string); // 0xc06 Func
	var_146_bool = var_139_bool == 0; // 0xc08 Not
	if(var_146_bool == 0) goto Label_3083; // 0xc09 JumpB
	goto Label_3086; // 0xc0a Jump
	
Label_3086:
	var_135_int = var_138_int; // 0xc0e Mov
	return 4; // 0xc0f Return
	
Label_3083:
	var_147_int = 1; // 0xc0b PushI
	var_138_int = var_138_int + var_147_int; // 0xc0c Add2
	goto Label_3073; // 0xc0d Jump
}


